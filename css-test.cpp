//
//  test.c
//  trans
//
//  Created by YiamiYo on 9/14/13.
//
//

#include <cstdlib>
#include <cstdio>
#include <chrono>
#include <string>
#include <map>
#include "CStrSwitch.h"
#include "CStrSwitch_test.h"

int main(int argc, const char** argv) {
	if(argc < 3) {
		printf("Usage: css-test <LOOPCOUNT> <STRING>...\n");
		return 1;
	}
	std::chrono::steady_clock::time_point tstart;
	std::chrono::steady_clock::duration tdif;
	size_t ret;
	long long int loop = atoll(argv[1]);
	
	tstart = std::chrono::steady_clock::now();
	ret = TestCSS(argc - 2, argv + 2, loop);
	tdif = std::chrono::steady_clock::now() - tstart;
	printf("(%zu) string switch time (ms): %lf\n", ret, std::chrono::duration_cast<std::chrono::duration<double, std::milli>>(tdif).count());
	
	std::map<std::string, CStrSwitchEnum> m = GenMap();
	tstart = std::chrono::steady_clock::now();
	ret = TestMap(argc - 2, argv + 2, loop, m);
	tdif = std::chrono::steady_clock::now() - tstart;
	printf("(%zu) std::map switch time (ms): %lf\n", ret, std::chrono::duration_cast<std::chrono::duration<double, std::milli>>(tdif).count());
	
	tstart = std::chrono::steady_clock::now();
	ret = TestCmp(argc - 2, argv + 2, loop);
	tdif = std::chrono::steady_clock::now() - tstart;
	printf("(%zu) strcmp time (ms): %lf\n", ret, std::chrono::duration_cast<std::chrono::duration<double, std::milli>>(tdif).count());
	
	return 0;
}
