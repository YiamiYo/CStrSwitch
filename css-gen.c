//
//  main.c
//  trans
//
//  Created by YiamiYo on 9/14/13.
//
//

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <time.h>

typedef struct enum_node {
	const char* data;
	struct enum_node* next;
} enum_node;

enum_node* enum_pushfront(enum_node* list, const char* data) {
	enum_node* n = (enum_node*)malloc(sizeof(enum_node));
	n->data = data;
	n->next = list;
	return n;
}

enum_node* enum_popfront(enum_node* list) {
	enum_node* n = list->next;
	free(list);
	return n;
}

enum_node* enum_removenext(enum_node* list, enum_node* it) {
	if(it->next) {
		enum_node* n = it->next->next;
		free(it->next);
		it->next = n;
	}
	return list;
}

enum_node* enum_copylist(enum_node* list) {
	enum_node* n = NULL;
	for(enum_node* it = list; it; it = it->next)
		n = enum_pushfront(n, it->data);
	return n;
}

void enum_fprint(FILE* fout, const char* str, const char* prefix, int fix) {
	if(!str) return;
	if(prefix) fprintf(fout, "%s", prefix);
	if(!fix) fprintf(fout, "%s", str);
	else {
		size_t s = strlen(str);
		for(size_t c = 0; c < s; c++) {
			switch(str[c]) {
				case '-': fprintf(fout, "_da"); break;
				case '_': fprintf(fout, "_ul"); break;
                    
				case '=': fprintf(fout, "_eq"); break;
				case '+': fprintf(fout, "_pl"); break;
				case '/': fprintf(fout, "_sl"); break;
				case '?': fprintf(fout, "_qm"); break;
				case ',': fprintf(fout, "_co"); break;
				case '<': fprintf(fout, "_lt"); break;
				case '.': fprintf(fout, "_fs"); break;
				case '>': fprintf(fout, "_gt"); break;
				case ';': fprintf(fout, "_sc"); break;
				case ':': fprintf(fout, "_cl"); break;
				case '\'': fprintf(fout, "_qu"); break;
				case '"': fprintf(fout, "_dq"); break;
				case '[': fprintf(fout, "_Sb"); break;
				case '{': fprintf(fout, "_Br"); break;
				case ']': fprintf(fout, "_sB"); break;
				case '}': fprintf(fout, "_bR"); break;
				case '\\': fprintf(fout, "_bs"); break;
				case '|': fprintf(fout, "_vb"); break;
				case ' ': fprintf(fout, "_sp"); break;
				case '\t': fprintf(fout, "_tb"); break;
					
				case '!': fprintf(fout, "_em"); break;
				case '@': fprintf(fout, "_at"); break;
				case '#': fprintf(fout, "_ns"); break;
				case '$': fprintf(fout, "_dl"); break;
				case '%': fprintf(fout, "_pe"); break;
				case '^': fprintf(fout, "_ca"); break;
				case '&': fprintf(fout, "_am"); break;
				case '*': fprintf(fout, "_as"); break;
				case '(': fprintf(fout, "_Pa"); break;
				case ')': fprintf(fout, "_pA"); break;
				case '`': fprintf(fout, "_ap"); break;
				case '~': fprintf(fout, "_ti"); break;
                    
				default: fputc(str[c], fout);
			}
		}
	}
}

void enum_fwrite(FILE* fout, enum_node* list, size_t depth, char* str, const char* prefix, char fix) {
	for(size_t i = depth * 2 + 1; i--;) fputc('\t', fout);
	fprintf(fout, "switch(str[%zu]) {\n", depth);
	while(list) {
		char t = list->data[0];
		if(t) {
			for(size_t i = depth * 2 + 2; i--;) fputc('\t', fout);
			fprintf(fout, "case '%c':\n", t);
			enum_node* temp_list = enum_pushfront(NULL, list->data + 1);
			for(enum_node* it = list; it && it->next;) {
				if(it->next->data[0] == t) {
					temp_list = enum_pushfront(temp_list, it->next->data + 1);
					list = enum_removenext(list, it);
				} else it = it->next;
			}
			list = enum_popfront(list);
			str[depth] = t;
			str[depth + 1] = 0;
			enum_fwrite(fout, temp_list, depth + 1, str, prefix, fix);
			str[depth] = 0;
			for(size_t i = depth * 2 + 3; i--;) fputc('\t', fout);
			fprintf(fout, "break;\n");
		} else {
			for(size_t i = depth * 2 + 2; i--;) fputc('\t', fout);
			fprintf(fout, "case 0: return ");
			enum_fprint(fout, str, prefix, fix);
			fprintf(fout, ";\n");
			list = enum_popfront(list);
		}
	}
	for(size_t i = depth * 2 + 1; i--;) fputc('\t', fout);
	fprintf(fout, "}\n");
}

int main(int argc, char** argv) {
    if(argc < 3) {
		printf("Usage: css-gen <NAME> [--tests] [--prefix <STRING>] [--no-fix] --<strings <STRING>...|random <count> [CHARLIST] [LENMIN] [LENMAX]> \n");
		return 1;
	}
	char* name = argv[1];
	char* filename = (char*)malloc(strlen(name) + 3);
	char* test_filename = NULL;
	sprintf(filename, "%s.h", name);
	
	int offset = 0;
	char fix = 1;
	long long random = 0;
	char* prefix = NULL;
	char* charlist = "qwertyuiopasdfghjklzxcvbnmMNBVCXZLKJHGFDSAPOIUYTREWQ_";
	size_t charlen = strlen(charlist);
	int lenmin = 3;
	int lenmax = 10;
	
	for(int i = 2; i < argc; i++) {
		if(!strcmp("--tests", argv[i])) {
			test_filename = (char*)malloc(strlen(name) + 8);
			sprintf(test_filename, "%s_test.h", name);
		}
		else if(!strcmp("--prefix", argv[i]) && argc > i + 1) prefix = argv[++i];
		else if(!strcmp("--no-fix", argv[i])) fix = 0;
		else if(!strcmp("--strings", argv[i])) {
			offset = i + 1;
			break;
		} else if(!strcmp("--random", argv[i])) {
			if(argc <= i + 1) {
				printf("Usage: css-gen <NAME> [--tests] [--prefix <STRING>] [--no-fix] --<strings <STRING>...|random <count> [CHARLIST]> \n");
				return 1;
			}
			random = atoll(argv[i + 1]);
			if(argc > i + 2) {
				charlist = argv[i + 2];
				charlen = strlen(charlist);
			}
			if(argc > i + 3) lenmin = atoi(argv[i + 3]);
			if(argc > i + 4) lenmax = atoi(argv[i + 4]);
			break;
		}
	}
	
	FILE* fout = fopen(filename, "w");
	if(fout) {
		enum_node* list = NULL;
		fprintf(fout, "#ifndef %s_H\n#define %s_H\n\n", name, name);
		fprintf(fout, "enum %sEnum {\n\tNone,\n", name);
		
		if(random) {
			srand((unsigned int)time(NULL));
			for(long long i = random; i--;) {
				size_t len = (size_t)(((double)rand() / RAND_MAX) * (lenmax - lenmin)) + lenmin;
				char* temp = (char*)malloc(len + 1);
				temp[len] = 0;
				for(size_t c = len; c--;) {
					temp[c] = charlist[(size_t)((double)rand() / RAND_MAX * charlen)];
				}
				list = enum_pushfront(list, temp);
			}
		} else {
			for(int i = offset; i < argc; i++) list = enum_pushfront(list, argv[i]);
		}
		
		for(enum_node* it = list; it; it = it->next) {
			fputc('\t', fout);
			enum_fprint(fout, it->data, prefix, fix);
			if(it->next) fprintf(fout, ",");
			fprintf(fout, " /* \"%s\" */\n", it->data);
		}
		fprintf(fout, "};\n\n");
		
		fprintf(fout, "%sEnum %s(const char* str) {\n\tif(!str) return None;\n", name, name);
		char buff[1024] = { 0 };
		enum_node* tlist = enum_copylist(list);
		enum_fwrite(fout, tlist, 0, buff, prefix, fix);
		fprintf(fout, "\treturn None;\n}\n\n");
		fprintf(fout, "#endif /* %s_H */\n", name);
		
		if(test_filename) {
			FILE* ftest = fopen(test_filename, "w");
			if(ftest) {
				fprintf(ftest, "#ifndef %s_TEST_H\n#define %s_TEST_H\n\n", name, name);
				fprintf(ftest, "#include \"%s.h\"\n#include <string>\n#include <map>\n\n", name);
				
				fprintf(ftest, "std::map<std::string, %sEnum> GenMap() {\n\tstd::map<std::string, %sEnum> ret;\n", name, name);
				for(enum_node* it = list; it; it = it->next) {
					fprintf(ftest, "\tret[\"%s\"] = ", it->data);
					enum_fprint(ftest, it->data, prefix, fix);
					fprintf(ftest, ";\n");
				}
				fprintf(ftest, "\treturn ret;\n}\n\n");
				
				fprintf(ftest, "size_t TestCSS(size_t len, const char** argv, size_t loop) {\n\tsize_t ret = 0;\n\tfor(size_t r = loop; r--;) {\n\t\tfor(size_t i = 0; i < len; i++) {\n\t\t\tswitch(%s(argv[i])) {\n", name);
				for(enum_node* it = list; it; it = it->next) {
					fprintf(ftest, "\t\t\t\tcase ");
					enum_fprint(ftest, it->data, prefix, fix);
					fprintf(ftest, ":\n\t\t\t\t\tret += 1;\n\t\t\t\t\tbreak;\n");
				}
				fprintf(ftest, "\t\t\t}\n\t\t}\n\t}\n\treturn ret;\n}\n\n");
				
				fprintf(ftest, "size_t TestMap(size_t len, const char** argv, size_t loop, std::map<std::string, %sEnum> m) {\n\tsize_t ret = 0;\n\tfor(size_t r = loop; r--;) {\n\t\tfor(size_t i = 0; i < len; i++) {\n\t\t\tswitch(m[argv[i]]) {\n", name);
				for(enum_node* it = list; it; it = it->next) {
					fprintf(ftest, "\t\t\t\tcase ");
					enum_fprint(ftest, it->data, prefix, fix);
					fprintf(ftest, ":\n\t\t\t\t\tret += 1;\n\t\t\t\t\tbreak;\n");
				}
				fprintf(ftest, "\t\t\t}\n\t\t}\n\t}\n\treturn ret;\n}\n\n");
				
				fprintf(ftest, "size_t TestCmp(size_t len, const char** argv, size_t loop) {\n\tsize_t ret = 0;\n\tfor(size_t r = loop; r--;) {\n\t\tfor(size_t i = 0; i < len; i++) {\n\t\t\tif(!strcmp(\"%s\", argv[i])) ret += 1;\n", list->data);
				for(enum_node* it = list->next; it; it = it->next) {
					fprintf(ftest, "\t\t\telse if(!strcmp(\"%s\", argv[i])) ret += 1;\n", it->data);
				}
				fprintf(ftest, "\n\t\t}\n\t}\n\treturn ret;\n}\n\n");
				fprintf(ftest, "#endif /* %s_TEST_H */\n", name);
				fclose(ftest);
			}
            
		}
		while(list) {
			if(random) free((void*)list->data);
			list = enum_popfront(list);
		}
		fclose(fout);
	}
	free(test_filename);
	free(filename);
    return 0;
}

