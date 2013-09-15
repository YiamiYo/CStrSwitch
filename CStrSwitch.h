#ifndef CStrSwitch_H
#define CStrSwitch_H

enum CStrSwitchEnum {
	None,
	_bemused, /* "bemused" */
	_anodyne, /* "anodyne" */
	_reprise, /* "reprise" */
	_dulcet, /* "dulcet" */
	_parsimonious, /* "parsimonious" */
	_contusion, /* "contusion" */
	_atavism, /* "atavism" */
	_gadfly, /* "gadfly" */
	_polemical, /* "polemical" */
	_malaise, /* "malaise" */
	_turgid, /* "turgid" */
	_anthropomorphic, /* "anthropomorphic" */
	_halcyon, /* "halcyon" */
	_vintner, /* "vintner" */
	_misanthrope, /* "misanthrope" */
	_viscous, /* "viscous" */
	_apposite, /* "apposite" */
	_effluvium, /* "effluvium" */
	_exegesis, /* "exegesis" */
	_pendulous, /* "pendulous" */
	_veracious, /* "veracious" */
	_apocryphal, /* "apocryphal" */
	_euphony, /* "euphony" */
	_pellucid, /* "pellucid" */
	_tureen, /* "tureen" */
	_stultify, /* "stultify" */
	_effervescence, /* "effervescence" */
	_inconsequential, /* "inconsequential" */
	_grandiloquent, /* "grandiloquent" */
	_roil, /* "roil" */
	_codicil, /* "codicil" */
	_accolade, /* "accolade" */
	_ellipsis, /* "ellipsis" */
	_nihilist, /* "nihilist" */
	_fructify, /* "fructify" */
	_rococo, /* "rococo" */
	_malleable, /* "malleable" */
	_coiffure, /* "coiffure" */
	_sextant, /* "sextant" */
	_traduce, /* "traduce" */
	_gestate, /* "gestate" */
	_factitious, /* "factitious" */
	_microcosm, /* "microcosm" */
	_bemuse, /* "bemuse" */
	_beatific, /* "beatific" */
	_sherbet, /* "sherbet" */
	_insensate, /* "insensate" */
	_badinage, /* "badinage" */
	_unconscionable, /* "unconscionable" */
	_retentive, /* "retentive" */
	_largesse, /* "largesse" */
	_preen, /* "preen" */
	_tyro, /* "tyro" */
	_overweening, /* "overweening" */
	_animus, /* "animus" */
	_denouement, /* "denouement" */
	_bucolic, /* "bucolic" */
	_garble, /* "garble" */
	_choleric, /* "choleric" */
	_nexus, /* "nexus" */
	_dotage, /* "dotage" */
	_foist, /* "foist" */
	_cadaverous, /* "cadaverous" */
	_forebear, /* "forebear" */
	_cognate, /* "cognate" */
	_captious, /* "captious" */
	_countermand, /* "countermand" */
	_zephyr, /* "zephyr" */
	_recondite, /* "recondite" */
	_adventitious, /* "adventitious" */
	_connotation, /* "connotation" */
	_modicum, /* "modicum" */
	_moribund, /* "moribund" */
	_zealot, /* "zealot" */
	_discursive, /* "discursive" */
	_madrigal, /* "madrigal" */
	_saturnine, /* "saturnine" */
	_iconoclast, /* "iconoclast" */
	_fracas, /* "fracas" */
	_whorl, /* "whorl" */
	_wizened, /* "wizened" */
	_rebus, /* "rebus" */
	_plenitude, /* "plenitude" */
	_rubric, /* "rubric" */
	_sleight, /* "sleight" */
	_doggerel, /* "doggerel" */
	_viscid, /* "viscid" */
	_abstemious, /* "abstemious" */
	_nonentity, /* "nonentity" */
	_peroration, /* "peroration" */
	_skittish, /* "skittish" */
	_rakish, /* "rakish" */
	_procedural, /* "procedural" */
	_jocund, /* "jocund" */
	_endemic, /* "endemic" */
	_provender, /* "provender" */
	_effete, /* "effete" */
	_stilted, /* "stilted" */
	_poignancy, /* "poignancy" */
	_abysmal, /* "abysmal" */
	_aspersion, /* "aspersion" */
	_impolitic, /* "impolitic" */
	_superannuated, /* "superannuated" */
	_credo, /* "credo" */
	_chary, /* "chary" */
	_rarefied, /* "rarefied" */
	_arrogate, /* "arrogate" */
	_striate, /* "striate" */
	_hoodwink, /* "hoodwink" */
	_obloquy, /* "obloquy" */
	_roseate, /* "roseate" */
	_magisterial, /* "magisterial" */
	_jibe, /* "jibe" */
	_sybarite, /* "sybarite" */
	_triumvirate, /* "triumvirate" */
	_unexceptionable, /* "unexceptionable" */
	_manumit, /* "manumit" */
	_pummel, /* "pummel" */
	_fractious, /* "fractious" */
	_fulminate, /* "fulminate" */
	_elysian, /* "elysian" */
	_testator, /* "testator" */
	_tutelage, /* "tutelage" */
	_unfaltering, /* "unfaltering" */
	_astringent, /* "astringent" */
	_immure, /* "immure" */
	_nostrum, /* "nostrum" */
	_appurtenance, /* "appurtenance" */
	_junket, /* "junket" */
	_stentorian, /* "stentorian" */
	_suavity, /* "suavity" */
	_smattering, /* "smattering" */
	_mordant, /* "mordant" */
	_genesis, /* "genesis" */
	_unimpeachable, /* "unimpeachable" */
	_temporize, /* "temporize" */
	_emetic, /* "emetic" */
	_indite, /* "indite" */
	_sinecure, /* "sinecure" */
	_masticate, /* "masticate" */
	_acme, /* "acme" */
	_pedagogue, /* "pedagogue" */
	_spate, /* "spate" */
	_hackneyed, /* "hackneyed" */
	_enamor, /* "enamor" */
	_nonplus, /* "nonplus" */
	_perspicuous, /* "perspicuous" */
	_mercurial, /* "mercurial" */
	_vapid, /* "vapid" */
	_miserly, /* "miserly" */
	_proclivity, /* "proclivity" */
	_squeamish, /* "squeamish" */
	_mannered, /* "mannered" */
	_reprobation, /* "reprobation" */
	_quagmire, /* "quagmire" */
	_ingrained, /* "ingrained" */
	_pusillanimous, /* "pusillanimous" */
	_dilettante, /* "dilettante" */
	_fanfare, /* "fanfare" */
	_lode, /* "lode" */
	_effulgence, /* "effulgence" */
	_peon, /* "peon" */
	_venial, /* "venial" */
	_loquacious, /* "loquacious" */
	_waffle, /* "waffle" */
	_laggard, /* "laggard" */
	_emend, /* "emend" */
	_pertinacious, /* "pertinacious" */
	_demonstrable, /* "demonstrable" */
	_wraith, /* "wraith" */
	_filch, /* "filch" */
	_disgorge, /* "disgorge" */
	_factious, /* "factious" */
	_ambrosia, /* "ambrosia" */
	_checkered, /* "checkered" */
	_comport, /* "comport" */
	_pithy, /* "pithy" */
	_discretionary, /* "discretionary" */
	_apotheosis, /* "apotheosis" */
	_hummock, /* "hummock" */
	_fawning, /* "fawning" */
	_mountebank, /* "mountebank" */
	_bauble, /* "bauble" */
	_penchant, /* "penchant" */
	_cryptic, /* "cryptic" */
	_archetype, /* "archetype" */
	_crabbed, /* "crabbed" */
	_sycophant, /* "sycophant" */
	_debacle, /* "debacle" */
	_careen, /* "careen" */
	_proletarian, /* "proletarian" */
	_emboss, /* "emboss" */
	_trenchant, /* "trenchant" */
	_mincing, /* "mincing" */
	_palatial, /* "palatial" */
	_refectory, /* "refectory" */
	_gawk, /* "gawk" */
	_nuance, /* "nuance" */
	_vilify, /* "vilify" */
	_bilious, /* "bilious" */
	_aquiline, /* "aquiline" */
	_erstwhile, /* "erstwhile" */
	_readjustment, /* "readjustment" */
	_garish, /* "garish" */
	_sentient, /* "sentient" */
	_rile, /* "rile" */
	_iniquitous, /* "iniquitous" */
	_simper, /* "simper" */
	_lout, /* "lout" */
	_prognosticate, /* "prognosticate" */
	_crone, /* "crone" */
	_burgeon, /* "burgeon" */
	_herculean, /* "herculean" */
	_heyday, /* "heyday" */
	_buxom, /* "buxom" */
	_pacifist, /* "pacifist" */
	_natty, /* "natty" */
	_gusty, /* "gusty" */
	_felicitous, /* "felicitous" */
	_redolent, /* "redolent" */
	_placate, /* "placate" */
	_categorical, /* "categorical" */
	_disquisition, /* "disquisition" */
	_improvident, /* "improvident" */
	_enclave, /* "enclave" */
	_abeyance, /* "abeyance" */
	_apologist, /* "apologist" */
	_disport, /* "disport" */
	_pontifical, /* "pontifical" */
	_dormer, /* "dormer" */
	_phlegmatic, /* "phlegmatic" */
	_cozen, /* "cozen" */
	_concomitant, /* "concomitant" */
	_unmitigated, /* "unmitigated" */
	_invidious, /* "invidious" */
	_inured, /* "inured" */
	_equable, /* "equable" */
	_ulterior, /* "ulterior" */
	_retrench, /* "retrench" */
	_foolhardy, /* "foolhardy" */
	_fiasco, /* "fiasco" */
	_firebrand, /* "firebrand" */
	_lineament, /* "lineament" */
	_eugenic, /* "eugenic" */
	_sublimate, /* "sublimate" */
	_malcontent, /* "malcontent" */
	_pilfer, /* "pilfer" */
	_congeal, /* "congeal" */
	_banal, /* "banal" */
	_abut, /* "abut" */
	_augury, /* "augury" */
	_emblazon, /* "emblazon" */
	_stricture, /* "stricture" */
	_squalor, /* "squalor" */
	_confluence, /* "confluence" */
	_scintilla, /* "scintilla" */
	_inclement, /* "inclement" */
	_oratorio, /* "oratorio" */
	_gouge, /* "gouge" */
	_cameo, /* "cameo" */
	_disapprobation, /* "disapprobation" */
	_gentility, /* "gentility" */
	_gruel, /* "gruel" */
	_apropos, /* "apropos" */
	_inimical, /* "inimical" */
	_circumspect, /* "circumspect" */
	_mote, /* "mote" */
	_flair, /* "flair" */
	_asperity, /* "asperity" */
	_dapper, /* "dapper" */
	_vat, /* "vat" */
	_evanescent, /* "evanescent" */
	_moot, /* "moot" */
	_sluice, /* "sluice" */
	_execrable, /* "execrable" */
	_entomology, /* "entomology" */
	_derelict, /* "derelict" */
	_incandescent, /* "incandescent" */
	_sedulous, /* "sedulous" */
	_errant, /* "errant" */
	_incisive, /* "incisive" */
	_cogent, /* "cogent" */
	_egregious, /* "egregious" */
	_ensconce, /* "ensconce" */
	_hireling, /* "hireling" */
	_trite, /* "trite" */
	_tawdry, /* "tawdry" */
	_expostulation, /* "expostulation" */
	_adage, /* "adage" */
	_maul, /* "maul" */
	_libertine, /* "libertine" */
	_unassuming, /* "unassuming" */
	_quaff, /* "quaff" */
	_adulation, /* "adulation" */
	_vitiate, /* "vitiate" */
	_paraphernalia, /* "paraphernalia" */
	_cabal, /* "cabal" */
	_sententious, /* "sententious" */
	_benighted, /* "benighted" */
	_corpulent, /* "corpulent" */
	_redoubtable, /* "redoubtable" */
	_aphorism, /* "aphorism" */
	_upshot, /* "upshot" */
	_gratis, /* "gratis" */
	_bandy, /* "bandy" */
	_flail, /* "flail" */
	_libretto, /* "libretto" */
	_resonant, /* "resonant" */
	_pathological, /* "pathological" */
	_embroil, /* "embroil" */
	_homespun, /* "homespun" */
	_puissant, /* "puissant" */
	_rancor, /* "rancor" */
	_sinuous, /* "sinuous" */
	_didactic, /* "didactic" */
	_expatiate, /* "expatiate" */
	_eschew, /* "eschew" */
	_preternatural, /* "preternatural" */
	_disaffected, /* "disaffected" */
	_cupidity, /* "cupidity" */
	_turbid, /* "turbid" */
	_clarion, /* "clarion" */
	_acrimony, /* "acrimony" */
	_adjure, /* "adjure" */
	_unction, /* "unction" */
	_cohort, /* "cohort" */
	_savant, /* "savant" */
	_waylay, /* "waylay" */
	_haggle, /* "haggle" */
	_collation, /* "collation" */
	_syllogism, /* "syllogism" */
	_circumvent, /* "circumvent" */
	_avocation, /* "avocation" */
	_homily, /* "homily" */
	_decadence, /* "decadence" */
	_impiety, /* "impiety" */
	_ungainly, /* "ungainly" */
	_emolument, /* "emolument" */
	_carrion, /* "carrion" */
	_apostate, /* "apostate" */
	_omniscient, /* "omniscient" */
	_bouillon, /* "bouillon" */
	_gusto, /* "gusto" */
	_wheedle, /* "wheedle" */
	_enervate, /* "enervate" */
	_automate, /* "automate" */
	_dais, /* "dais" */
	_overbearing, /* "overbearing" */
	_willful, /* "willful" */
	_amenable, /* "amenable" */
	_luminary, /* "luminary" */
	_prude, /* "prude" */
	_dyspeptic, /* "dyspeptic" */
	_gibe, /* "gibe" */
	_baleful, /* "baleful" */
	_purvey, /* "purvey" */
	_vociferous, /* "vociferous" */
	_gist, /* "gist" */
	_postulate, /* "postulate" */
	_incorrigible, /* "incorrigible" */
	_fatuous, /* "fatuous" */
	_mundane, /* "mundane" */
	_glower, /* "glower" */
	_virtuoso, /* "virtuoso" */
	_enrapture, /* "enrapture" */
	_polemic, /* "polemic" */
	_extenuate, /* "extenuate" */
	_delve, /* "delve" */
	_revelry, /* "revelry" */
	_platitude, /* "platitude" */
	_perfidious, /* "perfidious" */
	_incongruity, /* "incongruity" */
	_stanch, /* "stanch" */
	_blatant, /* "blatant" */
	_quip, /* "quip" */
	_idiosyncrasy, /* "idiosyncrasy" */
	_untoward, /* "untoward" */
	_grisly, /* "grisly" */
	_threadbare, /* "threadbare" */
	_larder, /* "larder" */
	_flay, /* "flay" */
	_repine, /* "repine" */
	_whittle, /* "whittle" */
	_passe, /* "passe" */
	_importunate, /* "importunate" */
	_declivity, /* "declivity" */
	_ingratiate, /* "ingratiate" */
	_indemnify, /* "indemnify" */
	_credence, /* "credence" */
	_polity, /* "polity" */
	_gainsay, /* "gainsay" */
	_ramify, /* "ramify" */
	_rankle, /* "rankle" */
	_lancet, /* "lancet" */
	_askance, /* "askance" */
	_harrowing, /* "harrowing" */
	_dispassionate, /* "dispassionate" */
	_hubbub, /* "hubbub" */
	_fallow, /* "fallow" */
	_diadem, /* "diadem" */
	_imposture, /* "imposture" */
	_whet, /* "whet" */
	_granary, /* "granary" */
	_dearth, /* "dearth" */
	_podium, /* "podium" */
	_husbandry, /* "husbandry" */
	_makeshift, /* "makeshift" */
	_diffidence, /* "diffidence" */
	_bullion, /* "bullion" */
	_meander, /* "meander" */
	_mendicant, /* "mendicant" */
	_machination, /* "machination" */
	_inflammatory, /* "inflammatory" */
	_ornate, /* "ornate" */
	_frieze, /* "frieze" */
	_abjure, /* "abjure" */
	_conjugal, /* "conjugal" */
	_parochial, /* "parochial" */
	_assay, /* "assay" */
	_alcove, /* "alcove" */
	_commiserate, /* "commiserate" */
	_pundit, /* "pundit" */
	_supercilious, /* "supercilious" */
	_ascendancy, /* "ascendancy" */
	_dregs, /* "dregs" */
	_refractory, /* "refractory" */
	_grovel, /* "grovel" */
	_obdurate, /* "obdurate" */
	_incipient, /* "incipient" */
	_vagary, /* "vagary" */
	_querulous, /* "querulous" */
	_obtuse, /* "obtuse" */
	_palliate, /* "palliate" */
	_hale, /* "hale" */
	_revulsion, /* "revulsion" */
	_specious, /* "specious" */
	_ruse, /* "ruse" */
	_dissimulate, /* "dissimulate" */
	_surreptitious, /* "surreptitious" */
	_interpolate, /* "interpolate" */
	_mettle, /* "mettle" */
	_unanimity, /* "unanimity" */
	_hurtle, /* "hurtle" */
	_obviate, /* "obviate" */
	_abase, /* "abase" */
	_interdict, /* "interdict" */
	_inclusive, /* "inclusive" */
	_cajole, /* "cajole" */
	_invocation, /* "invocation" */
	_exorbitant, /* "exorbitant" */
	_remission, /* "remission" */
	_gripe, /* "gripe" */
	_beleaguer, /* "beleaguer" */
	_adulterate, /* "adulterate" */
	_scabbard, /* "scabbard" */
	_fad, /* "fad" */
	_dictum, /* "dictum" */
	_munificent, /* "munificent" */
	_spectral, /* "spectral" */
	_defray, /* "defray" */
	_urbane, /* "urbane" */
	_vestment, /* "vestment" */
	_aggrieve, /* "aggrieve" */
	_nicety, /* "nicety" */
	_blighted, /* "blighted" */
	_spangle, /* "spangle" */
	_rejoinder, /* "rejoinder" */
	_pucker, /* "pucker" */
	_glib, /* "glib" */
	_distend, /* "distend" */
	_clandestine, /* "clandestine" */
	_abet, /* "abet" */
	_trappings, /* "trappings" */
	_aria, /* "aria" */
	_disembark, /* "disembark" */
	_pert, /* "pert" */
	_brooch, /* "brooch" */
	_discriminating, /* "discriminating" */
	_endue, /* "endue" */
	_rationalism, /* "rationalism" */
	_reactionary, /* "reactionary" */
	_dote, /* "dote" */
	_proxy, /* "proxy" */
	_immutable, /* "immutable" */
	_amalgamate, /* "amalgamate" */
	_depredation, /* "depredation" */
	_inimitable, /* "inimitable" */
	_tenable, /* "tenable" */
	_wreak, /* "wreak" */
	_welt, /* "welt" */
	_subaltern, /* "subaltern" */
	_prattle, /* "prattle" */
	_irksome, /* "irksome" */
	_malevolent, /* "malevolent" */
	_sully, /* "sully" */
	_despoil, /* "despoil" */
	_hermitage, /* "hermitage" */
	_invective, /* "invective" */
	_flotilla, /* "flotilla" */
	_dissemble, /* "dissemble" */
	_promiscuous, /* "promiscuous" */
	_palpitate, /* "palpitate" */
	_burnish, /* "burnish" */
	_brawn, /* "brawn" */
	_divulge, /* "divulge" */
	_accentuate, /* "accentuate" */
	_unseemly, /* "unseemly" */
	_knack, /* "knack" */
	_irresolute, /* "irresolute" */
	_imperturbable, /* "imperturbable" */
	_succor, /* "succor" */
	_armada, /* "armada" */
	_belie, /* "belie" */
	_encroachment, /* "encroachment" */
	_troth, /* "troth" */
	_coy, /* "coy" */
	_pedantic, /* "pedantic" */
	_hoary, /* "hoary" */
	_renegade, /* "renegade" */
	_upbraid, /* "upbraid" */
	_palatable, /* "palatable" */
	_betoken, /* "betoken" */
	_excise, /* "excise" */
	_propitiate, /* "propitiate" */
	_salient, /* "salient" */
	_propitious, /* "propitious" */
	_permeate, /* "permeate" */
	_caucus, /* "caucus" */
	_wry, /* "wry" */
	_philology, /* "philology" */
	_partiality, /* "partiality" */
	_grudging, /* "grudging" */
	_maraud, /* "maraud" */
	_diversified, /* "diversified" */
	_imbibe, /* "imbibe" */
	_functionary, /* "functionary" */
	_retinue, /* "retinue" */
	_descry, /* "descry" */
	_axiom, /* "axiom" */
	_pinion, /* "pinion" */
	_sultry, /* "sultry" */
	_rapt, /* "rapt" */
	_levity, /* "levity" */
	_yeoman, /* "yeoman" */
	_voluble, /* "voluble" */
	_zenith, /* "zenith" */
	_conservatory, /* "conservatory" */
	_onset, /* "onset" */
	_amicable, /* "amicable" */
	_ignominious, /* "ignominious" */
	_dint, /* "dint" */
	_bane, /* "bane" */
	_exploitation, /* "exploitation" */
	_sonorous, /* "sonorous" */
	_auspices, /* "auspices" */
	_imposition, /* "imposition" */
	_impetus, /* "impetus" */
	_disconsolate, /* "disconsolate" */
	_exigency, /* "exigency" */
	_thrall, /* "thrall" */
	_tenacious, /* "tenacious" */
	_inscrutable, /* "inscrutable" */
	_blanch, /* "blanch" */
	_nettle, /* "nettle" */
	_inculcate, /* "inculcate" */
	_callous, /* "callous" */
	_knoll, /* "knoll" */
	_fissure, /* "fissure" */
	_august, /* "august" */
	_fraught, /* "fraught" */
	_extol, /* "extol" */
	_subjugate, /* "subjugate" */
	_retainer, /* "retainer" */
	_debase, /* "debase" */
	_bluster, /* "bluster" */
	_banter, /* "banter" */
	_cavalier, /* "cavalier" */
	_expiate, /* "expiate" */
	_petulant, /* "petulant" */
	_uncouth, /* "uncouth" */
	_encumber, /* "encumber" */
	_mite, /* "mite" */
	_pique, /* "pique" */
	_implacable, /* "implacable" */
	_execrate, /* "execrate" */
	_diffident, /* "diffident" */
	_scrutinize, /* "scrutinize" */
	_seethe, /* "seethe" */
	_unwonted, /* "unwonted" */
	_waive, /* "waive" */
	_alacrity, /* "alacrity" */
	_devolve, /* "devolve" */
	_demoralize, /* "demoralize" */
	_convalesce, /* "convalesce" */
	_surly, /* "surly" */
	_actuate, /* "actuate" */
	_infest, /* "infest" */
	_ravel, /* "ravel" */
	_practitioner, /* "practitioner" */
	_parry, /* "parry" */
	_patrician, /* "patrician" */
	_constituency, /* "constituency" */
	_sate, /* "sate" */
	_mien, /* "mien" */
	_warble, /* "warble" */
	_spat, /* "spat" */
	_estrange, /* "estrange" */
	_teem, /* "teem" */
	_patronize, /* "patronize" */
	_docile, /* "docile" */
	_canto, /* "canto" */
	_unaffected, /* "unaffected" */
	_erode, /* "erode" */
	_fitful, /* "fitful" */
	_allay, /* "allay" */
	_seemly, /* "seemly" */
	_intrepid, /* "intrepid" */
	_raiment, /* "raiment" */
	_espouse, /* "espouse" */
	_chide, /* "chide" */
	_propensity, /* "propensity" */
	_reticent, /* "reticent" */
	_plumb, /* "plumb" */
	_vestige, /* "vestige" */
	_craven, /* "craven" */
	_ostensible, /* "ostensible" */
	_crevice, /* "crevice" */
	_wrangle, /* "wrangle" */
	_reverie, /* "reverie" */
	_innate, /* "innate" */
	_chaff, /* "chaff" */
	_stupendous, /* "stupendous" */
	_capricious, /* "capricious" */
	_deign, /* "deign" */
	_livelihood, /* "livelihood" */
	_rend, /* "rend" */
	_foreboding, /* "foreboding" */
	_pillage, /* "pillage" */
	_interminable, /* "interminable" */
	_affable, /* "affable" */
	_parity, /* "parity" */
	_hew, /* "hew" */
	_dutiful, /* "dutiful" */
	_fresco, /* "fresco" */
	_stint, /* "stint" */
	_repast, /* "repast" */
	_ford, /* "ford" */
	_construe, /* "construe" */
	_audacious, /* "audacious" */
	_obtrude, /* "obtrude" */
	_chagrin, /* "chagrin" */
	_pallid, /* "pallid" */
	_ideology, /* "ideology" */
	_ignominy, /* "ignominy" */
	_halting, /* "halting" */
	_deduce, /* "deduce" */
	_rudiment, /* "rudiment" */
	_peremptory, /* "peremptory" */
	_advert, /* "advert" */
	_prospective, /* "prospective" */
	_betrothed, /* "betrothed" */
	_gird, /* "gird" */
	_swerve, /* "swerve" */
	_bulwark, /* "bulwark" */
	_outskirts, /* "outskirts" */
	_quail, /* "quail" */
	_vassal, /* "vassal" */
	_assiduous, /* "assiduous" */
	_enigma, /* "enigma" */
	_bequeath, /* "bequeath" */
	_deprave, /* "deprave" */
	_purport, /* "purport" */
	_beguile, /* "beguile" */
	_staid, /* "staid" */
	_rout, /* "rout" */
	_asunder, /* "asunder" */
	_fortitude, /* "fortitude" */
	_tout, /* "tout" */
	_semblance, /* "semblance" */
	_dingy, /* "dingy" */
	_prowess, /* "prowess" */
	_projection, /* "projection" */
	_maxim, /* "maxim" */
	_pall, /* "pall" */
	_gentry, /* "gentry" */
	_grapple, /* "grapple" */
	_veritable, /* "veritable" */
	_foil, /* "foil" */
	_chastise, /* "chastise" */
	_parable, /* "parable" */
	_horde, /* "horde" */
	_visage, /* "visage" */
	_append, /* "append" */
	_cleave, /* "cleave" */
	_arbitrate, /* "arbitrate" */
	_capitulate, /* "capitulate" */
	_symmetry, /* "symmetry" */
	_disconcert, /* "disconcert" */
	_edict, /* "edict" */
	_avarice, /* "avarice" */
	_enjoin, /* "enjoin" */
	_cant, /* "cant" */
	_luxuriant, /* "luxuriant" */
	_decorum, /* "decorum" */
	_perpetrate, /* "perpetrate" */
	_tarry, /* "tarry" */
	_extort, /* "extort" */
	_rampart, /* "rampart" */
	_loath, /* "loath" */
	_conceit, /* "conceit" */
	_aversion, /* "aversion" */
	_bate, /* "bate" */
	_constrained, /* "constrained" */
	_recourse, /* "recourse" */
	_stipulate, /* "stipulate" */
	_appease, /* "appease" */
	_aide, /* "aide" */
	_ebb, /* "ebb" */
	_dogged, /* "dogged" */
	_pastoral, /* "pastoral" */
	_pacify, /* "pacify" */
	_ranging, /* "ranging" */
	_morbid, /* "morbid" */
	_gaunt, /* "gaunt" */
	_explicate, /* "explicate" */
	_coax, /* "coax" */
	_infallible, /* "infallible" */
	_headlong, /* "headlong" */
	_monetary, /* "monetary" */
	_rave, /* "rave" */
	_languid, /* "languid" */
	_suppliant, /* "suppliant" */
	_nominal, /* "nominal" */
	_insinuate, /* "insinuate" */
	_bland, /* "bland" */
	_impertinent, /* "impertinent" */
	_enduring, /* "enduring" */
	_candid, /* "candid" */
	_fray, /* "fray" */
	_deference, /* "deference" */
	_precept, /* "precept" */
	_odium, /* "odium" */
	_wanton, /* "wanton" */
	_depose, /* "depose" */
	_precision, /* "precision" */
	_sentinel, /* "sentinel" */
	_usurp, /* "usurp" */
	_slew, /* "slew" */
	_acquiesce, /* "acquiesce" */
	_incidental, /* "incidental" */
	_retiring, /* "retiring" */
	_repeal, /* "repeal" */
	_admonish, /* "admonish" */
	_foster, /* "foster" */
	_pervade, /* "pervade" */
	_elude, /* "elude" */
	_edifice, /* "edifice" */
	_ominous, /* "ominous" */
	_conjure, /* "conjure" */
	_exasperate, /* "exasperate" */
	_arbitrary, /* "arbitrary" */
	_conscientious, /* "conscientious" */
	_stratum, /* "stratum" */
	_recovering, /* "recovering" */
	_austere, /* "austere" */
	_tribunal, /* "tribunal" */
	_cohere, /* "cohere" */
	_fervent, /* "fervent" */
	_accede, /* "accede" */
	_comprehensive, /* "comprehensive" */
	_muster, /* "muster" */
	_caprice, /* "caprice" */
	_adverse, /* "adverse" */
	_subside, /* "subside" */
	_premise, /* "premise" */
	_ripple, /* "ripple" */
	_mortify, /* "mortify" */
	_wistful, /* "wistful" */
	_imposing, /* "imposing" */
	_discreet, /* "discreet" */
	_stump, /* "stump" */
	_ratify, /* "ratify" */
	_scrupulous, /* "scrupulous" */
	_rhetoric, /* "rhetoric" */
	_insurgent, /* "insurgent" */
	_rebuke, /* "rebuke" */
	_manifestation, /* "manifestation" */
	_besiege, /* "besiege" */
	_restrained, /* "restrained" */
	_venerable, /* "venerable" */
	_contrived, /* "contrived" */
	_faction, /* "faction" */
	_partisan, /* "partisan" */
	_clad, /* "clad" */
	_objective, /* "objective" */
	_fathom, /* "fathom" */
	_proceeds, /* "proceeds" */
	_consecrate, /* "consecrate" */
	_propriety, /* "propriety" */
	_impart, /* "impart" */
	_entreat, /* "entreat" */
	_pomp, /* "pomp" */
	_device, /* "device" */
	_illustrious, /* "illustrious" */
	_frustrate, /* "frustrate" */
	_grove, /* "grove" */
	_philosophical, /* "philosophical" */
	_beseech, /* "beseech" */
	_forsake, /* "forsake" */
	_delicacy, /* "delicacy" */
	_predecessor, /* "predecessor" */
	_slay, /* "slay" */
	_undertaking, /* "undertaking" */
	_vacate, /* "vacate" */
	_latitude, /* "latitude" */
	_impel, /* "impel" */
	_canon, /* "canon" */
	_tract, /* "tract" */
	_wont, /* "wont" */
	_cower, /* "cower" */
	_dispatch, /* "dispatch" */
	_indication, /* "indication" */
	_intrigue, /* "intrigue" */
	_satire, /* "satire" */
	_muse, /* "muse" */
	_gale, /* "gale" */
	_brook, /* "brook" */
	_ensue, /* "ensue" */
	_suffrage, /* "suffrage" */
	_humiliate, /* "humiliate" */
	_imposed, /* "imposed" */
	_endow, /* "endow" */
	_kindle, /* "kindle" */
	_exertion, /* "exertion" */
	_exploit, /* "exploit" */
	_sublime, /* "sublime" */
	_assail, /* "assail" */
	_venerate, /* "venerate" */
	_throng, /* "throng" */
	_wax, /* "wax" */
	_extravagant, /* "extravagant" */
	_malice, /* "malice" */
	_siege, /* "siege" */
	_exalt, /* "exalt" */
	_proceeding, /* "proceeding" */
	_sanction, /* "sanction" */
	_plus, /* "plus" */
	_purse, /* "purse" */
	_assent, /* "assent" */
	_bolt, /* "bolt" */
	_jet, /* "jet" */
	_retort, /* "retort" */
	_conspicuous, /* "conspicuous" */
	_suspended, /* "suspended" */
	_gravity, /* "gravity" */
	_vex, /* "vex" */
	_pious, /* "pious" */
	_ordain, /* "ordain" */
	_flourish, /* "flourish" */
	_afflict, /* "afflict" */
	_dense, /* "dense" */
	_rider, /* "rider" */
	_sob, /* "sob" */
	_warrant, /* "warrant" */
	_cite, /* "cite" */
	_facile, /* "facile" */
	_frontier, /* "frontier" */
	_substantial, /* "substantial" */
	_elaborate, /* "elaborate" */
	_derived, /* "derived" */
	_contrive, /* "contrive" */
	_decree, /* "decree" */
	_perpetual, /* "perpetual" */
	_cede, /* "cede" */
	_fare, /* "fare" */
	_ascertain, /* "ascertain" */
	_tread, /* "tread" */
	_provoke, /* "provoke" */
	_credible, /* "credible" */
	_esteem, /* "esteem" */
	_apt, /* "apt" */
	_partial, /* "partial" */
	_modest, /* "modest" */
	_heed, /* "heed" */
	_steep, /* "steep" */
	_multitude, /* "multitude" */
	_lofty, /* "lofty" */
	_notwithstanding, /* "notwithstanding" */
	_allege, /* "allege" */
	_bestow, /* "bestow" */
	_advocate, /* "advocate" */
	_boast, /* "boast" */
	_cardinal, /* "cardinal" */
	_rail, /* "rail" */
	_disposition, /* "disposition" */
	_perish, /* "perish" */
	_toil, /* "toil" */
	_stake, /* "stake" */
	_contend, /* "contend" */
	_oppress, /* "oppress" */
	_exert, /* "exert" */
	_attribute, /* "attribute" */
	_inclined, /* "inclined" */
	_distinction, /* "distinction" */
	_mode, /* "mode" */
	_weigh, /* "weigh" */
	_plead, /* "plead" */
	_tour, /* "tour" */
	_contempt, /* "contempt" */
	_persist, /* "persist" */
	_resource, /* "resource" */
	_formal, /* "formal" */
	_scale, /* "scale" */
	_notion, /* "notion" */
	_manifest, /* "manifest" */
	_merit, /* "merit" */
	_flag, /* "flag" */
	_justify, /* "justify" */
	_attitude, /* "attitude" */
	_tide, /* "tide" */
	_despair, /* "despair" */
	_liberal, /* "liberal" */
	_keen, /* "keen" */
	_scheme, /* "scheme" */
	_humble, /* "humble" */
	_chamber, /* "chamber" */
	_crew, /* "crew" */
	_assert, /* "assert" */
	_majority, /* "majority" */
	_undertake, /* "undertake" */
	_intimate, /* "intimate" */
	_bent, /* "bent" */
	_temper, /* "temper" */
	_territory, /* "territory" */
	_venture, /* "venture" */
	_compel, /* "compel" */
	_furnish, /* "furnish" */
	_novel, /* "novel" */
	_reflect, /* "reflect" */
	_financial, /* "financial" */
	_harry, /* "harry" */
	_skill, /* "skill" */
	_convention, /* "convention" */
	_inspire, /* "inspire" */
	_convince, /* "convince" */
	_knight, /* "knight" */
	_insist, /* "insist" */
	_wander, /* "wander" */
	_yield, /* "yield" */
	_earnest, /* "earnest" */
	_contract, /* "contract" */
	_entertain, /* "entertain" */
	_dwell, /* "dwell" */
	_grant, /* "grant" */
	_confer, /* "confer" */
	_labor, /* "labor" */
	_league, /* "league" */
	_campaign, /* "campaign" */
	_range, /* "range" */
	_theory, /* "theory" */
	_generate, /* "generate" */
	_appeal, /* "appeal" */
	_render, /* "render" */
	_institute, /* "institute" */
	_affect, /* "affect" */
	_level, /* "level" */
	_constitute, /* "constitute" */
	_circumstances, /* "circumstances" */
	_constant, /* "constant" */
	_commission, /* "commission" */
	_project, /* "project" */
	_coast, /* "coast" */
	_instance, /* "instance" */
	_vain, /* "vain" */
	_passage, /* "passage" */
	_appoint, /* "appoint" */
	_court, /* "court" */
	_concept, /* "concept" */
	_fancy, /* "fancy" */
	_property, /* "property" */
	_apparent, /* "apparent" */
	_stock, /* "stock" */
	_straight, /* "straight" */
	_policy, /* "policy" */
	_scarce, /* "scarce" */
	_obtain, /* "obtain" */
	_engage, /* "engage" */
	_conduct, /* "conduct" */
	_utter, /* "utter" */
	_establish, /* "establish" */
	_approach, /* "approach" */
	_issue, /* "issue" */
	_commit, /* "commit" */
	_concern, /* "concern" */
	_intend, /* "intend" */
	_practice, /* "practice" */
	_evident, /* "evident" */
	_accord, /* "accord" */
	_minute, /* "minute" */
	_consider /* "consider" */
};

CStrSwitchEnum CStrSwitch(const char* str) {
	if(!str) return None;
	switch(str[0]) {
		case 'c':
			switch(str[1]) {
				case 'o':
					switch(str[2]) {
						case 'n':
							switch(str[3]) {
								case 't':
									switch(str[4]) {
										case 'r':
											switch(str[5]) {
												case 'i':
													switch(str[6]) {
														case 'v':
															switch(str[7]) {
																case 'e':
																	switch(str[8]) {
																		case 0: return _contrive;
																		case 'd':
																			switch(str[9]) {
																				case 0: return _contrived;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
												case 'a':
													switch(str[6]) {
														case 'c':
															switch(str[7]) {
																case 't':
																	switch(str[8]) {
																		case 0: return _contract;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
										case 'e':
											switch(str[5]) {
												case 'n':
													switch(str[6]) {
														case 'd':
															switch(str[7]) {
																case 0: return _contend;
															}
															break;
													}
													break;
												case 'm':
													switch(str[6]) {
														case 'p':
															switch(str[7]) {
																case 't':
																	switch(str[8]) {
																		case 0: return _contempt;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
										case 'u':
											switch(str[5]) {
												case 's':
													switch(str[6]) {
														case 'i':
															switch(str[7]) {
																case 'o':
																	switch(str[8]) {
																		case 'n':
																			switch(str[9]) {
																				case 0: return _contusion;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'n':
									switch(str[4]) {
										case 'o':
											switch(str[5]) {
												case 't':
													switch(str[6]) {
														case 'a':
															switch(str[7]) {
																case 't':
																	switch(str[8]) {
																		case 'i':
																			switch(str[9]) {
																				case 'o':
																					switch(str[10]) {
																						case 'n':
																							switch(str[11]) {
																								case 0: return _connotation;
																							}
																							break;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'c':
									switch(str[4]) {
										case 'e':
											switch(str[5]) {
												case 'i':
													switch(str[6]) {
														case 't':
															switch(str[7]) {
																case 0: return _conceit;
															}
															break;
													}
													break;
												case 'p':
													switch(str[6]) {
														case 't':
															switch(str[7]) {
																case 0: return _concept;
															}
															break;
													}
													break;
												case 'r':
													switch(str[6]) {
														case 'n':
															switch(str[7]) {
																case 0: return _concern;
															}
															break;
													}
													break;
											}
											break;
										case 'o':
											switch(str[5]) {
												case 'm':
													switch(str[6]) {
														case 'i':
															switch(str[7]) {
																case 't':
																	switch(str[8]) {
																		case 'a':
																			switch(str[9]) {
																				case 'n':
																					switch(str[10]) {
																						case 't':
																							switch(str[11]) {
																								case 0: return _concomitant;
																							}
																							break;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'g':
									switch(str[4]) {
										case 'e':
											switch(str[5]) {
												case 'a':
													switch(str[6]) {
														case 'l':
															switch(str[7]) {
																case 0: return _congeal;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'f':
									switch(str[4]) {
										case 'e':
											switch(str[5]) {
												case 'r':
													switch(str[6]) {
														case 0: return _confer;
													}
													break;
											}
											break;
										case 'l':
											switch(str[5]) {
												case 'u':
													switch(str[6]) {
														case 'e':
															switch(str[7]) {
																case 'n':
																	switch(str[8]) {
																		case 'c':
																			switch(str[9]) {
																				case 'e':
																					switch(str[10]) {
																						case 0: return _confluence;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'j':
									switch(str[4]) {
										case 'u':
											switch(str[5]) {
												case 'g':
													switch(str[6]) {
														case 'a':
															switch(str[7]) {
																case 'l':
																	switch(str[8]) {
																		case 0: return _conjugal;
																	}
																	break;
															}
															break;
													}
													break;
												case 'r':
													switch(str[6]) {
														case 'e':
															switch(str[7]) {
																case 0: return _conjure;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 's':
									switch(str[4]) {
										case 'i':
											switch(str[5]) {
												case 'd':
													switch(str[6]) {
														case 'e':
															switch(str[7]) {
																case 'r':
																	switch(str[8]) {
																		case 0: return _consider;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
										case 't':
											switch(str[5]) {
												case 'i':
													switch(str[6]) {
														case 't':
															switch(str[7]) {
																case 'u':
																	switch(str[8]) {
																		case 't':
																			switch(str[9]) {
																				case 'e':
																					switch(str[10]) {
																						case 0: return _constitute;
																					}
																					break;
																			}
																			break;
																		case 'e':
																			switch(str[9]) {
																				case 'n':
																					switch(str[10]) {
																						case 'c':
																							switch(str[11]) {
																								case 'y':
																									switch(str[12]) {
																										case 0: return _constituency;
																									}
																									break;
																							}
																							break;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
												case 'r':
													switch(str[6]) {
														case 'a':
															switch(str[7]) {
																case 'i':
																	switch(str[8]) {
																		case 'n':
																			switch(str[9]) {
																				case 'e':
																					switch(str[10]) {
																						case 'd':
																							switch(str[11]) {
																								case 0: return _constrained;
																							}
																							break;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
														case 'u':
															switch(str[7]) {
																case 'e':
																	switch(str[8]) {
																		case 0: return _construe;
																	}
																	break;
															}
															break;
													}
													break;
												case 'a':
													switch(str[6]) {
														case 'n':
															switch(str[7]) {
																case 't':
																	switch(str[8]) {
																		case 0: return _constant;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
										case 'p':
											switch(str[5]) {
												case 'i':
													switch(str[6]) {
														case 'c':
															switch(str[7]) {
																case 'u':
																	switch(str[8]) {
																		case 'o':
																			switch(str[9]) {
																				case 'u':
																					switch(str[10]) {
																						case 's':
																							switch(str[11]) {
																								case 0: return _conspicuous;
																							}
																							break;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
										case 'e':
											switch(str[5]) {
												case 'r':
													switch(str[6]) {
														case 'v':
															switch(str[7]) {
																case 'a':
																	switch(str[8]) {
																		case 't':
																			switch(str[9]) {
																				case 'o':
																					switch(str[10]) {
																						case 'r':
																							switch(str[11]) {
																								case 'y':
																									switch(str[12]) {
																										case 0: return _conservatory;
																									}
																									break;
																							}
																							break;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
												case 'c':
													switch(str[6]) {
														case 'r':
															switch(str[7]) {
																case 'a':
																	switch(str[8]) {
																		case 't':
																			switch(str[9]) {
																				case 'e':
																					switch(str[10]) {
																						case 0: return _consecrate;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
										case 'c':
											switch(str[5]) {
												case 'i':
													switch(str[6]) {
														case 'e':
															switch(str[7]) {
																case 'n':
																	switch(str[8]) {
																		case 't':
																			switch(str[9]) {
																				case 'i':
																					switch(str[10]) {
																						case 'o':
																							switch(str[11]) {
																								case 'u':
																									switch(str[12]) {
																										case 's':
																											switch(str[13]) {
																												case 0: return _conscientious;
																											}
																											break;
																									}
																									break;
																							}
																							break;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'v':
									switch(str[4]) {
										case 'i':
											switch(str[5]) {
												case 'n':
													switch(str[6]) {
														case 'c':
															switch(str[7]) {
																case 'e':
																	switch(str[8]) {
																		case 0: return _convince;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
										case 'e':
											switch(str[5]) {
												case 'n':
													switch(str[6]) {
														case 't':
															switch(str[7]) {
																case 'i':
																	switch(str[8]) {
																		case 'o':
																			switch(str[9]) {
																				case 'n':
																					switch(str[10]) {
																						case 0: return _convention;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
										case 'a':
											switch(str[5]) {
												case 'l':
													switch(str[6]) {
														case 'e':
															switch(str[7]) {
																case 's':
																	switch(str[8]) {
																		case 'c':
																			switch(str[9]) {
																				case 'e':
																					switch(str[10]) {
																						case 0: return _convalesce;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'd':
									switch(str[4]) {
										case 'u':
											switch(str[5]) {
												case 'c':
													switch(str[6]) {
														case 't':
															switch(str[7]) {
																case 0: return _conduct;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'm':
							switch(str[3]) {
								case 'p':
									switch(str[4]) {
										case 'e':
											switch(str[5]) {
												case 'l':
													switch(str[6]) {
														case 0: return _compel;
													}
													break;
											}
											break;
										case 'r':
											switch(str[5]) {
												case 'e':
													switch(str[6]) {
														case 'h':
															switch(str[7]) {
																case 'e':
																	switch(str[8]) {
																		case 'n':
																			switch(str[9]) {
																				case 's':
																					switch(str[10]) {
																						case 'i':
																							switch(str[11]) {
																								case 'v':
																									switch(str[12]) {
																										case 'e':
																											switch(str[13]) {
																												case 0: return _comprehensive;
																											}
																											break;
																									}
																									break;
																							}
																							break;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
										case 'o':
											switch(str[5]) {
												case 'r':
													switch(str[6]) {
														case 't':
															switch(str[7]) {
																case 0: return _comport;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'm':
									switch(str[4]) {
										case 'i':
											switch(str[5]) {
												case 's':
													switch(str[6]) {
														case 's':
															switch(str[7]) {
																case 'i':
																	switch(str[8]) {
																		case 'o':
																			switch(str[9]) {
																				case 'n':
																					switch(str[10]) {
																						case 0: return _commission;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
														case 'e':
															switch(str[7]) {
																case 'r':
																	switch(str[8]) {
																		case 'a':
																			switch(str[9]) {
																				case 't':
																					switch(str[10]) {
																						case 'e':
																							switch(str[11]) {
																								case 0: return _commiserate;
																							}
																							break;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
												case 't':
													switch(str[6]) {
														case 0: return _commit;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'u':
							switch(str[3]) {
								case 'n':
									switch(str[4]) {
										case 't':
											switch(str[5]) {
												case 'e':
													switch(str[6]) {
														case 'r':
															switch(str[7]) {
																case 'm':
																	switch(str[8]) {
																		case 'a':
																			switch(str[9]) {
																				case 'n':
																					switch(str[10]) {
																						case 'd':
																							switch(str[11]) {
																								case 0: return _countermand;
																							}
																							break;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'r':
									switch(str[4]) {
										case 't':
											switch(str[5]) {
												case 0: return _court;
											}
											break;
									}
									break;
							}
							break;
						case 'a':
							switch(str[3]) {
								case 'x':
									switch(str[4]) {
										case 0: return _coax;
									}
									break;
								case 's':
									switch(str[4]) {
										case 't':
											switch(str[5]) {
												case 0: return _coast;
											}
											break;
									}
									break;
							}
							break;
						case 'w':
							switch(str[3]) {
								case 'e':
									switch(str[4]) {
										case 'r':
											switch(str[5]) {
												case 0: return _cower;
											}
											break;
									}
									break;
							}
							break;
						case 'h':
							switch(str[3]) {
								case 'o':
									switch(str[4]) {
										case 'r':
											switch(str[5]) {
												case 't':
													switch(str[6]) {
														case 0: return _cohort;
													}
													break;
											}
											break;
									}
									break;
								case 'e':
									switch(str[4]) {
										case 'r':
											switch(str[5]) {
												case 'e':
													switch(str[6]) {
														case 0: return _cohere;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'y':
							switch(str[3]) {
								case 0: return _coy;
							}
							break;
						case 'l':
							switch(str[3]) {
								case 'l':
									switch(str[4]) {
										case 'a':
											switch(str[5]) {
												case 't':
													switch(str[6]) {
														case 'i':
															switch(str[7]) {
																case 'o':
																	switch(str[8]) {
																		case 'n':
																			switch(str[9]) {
																				case 0: return _collation;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'r':
							switch(str[3]) {
								case 'p':
									switch(str[4]) {
										case 'u':
											switch(str[5]) {
												case 'l':
													switch(str[6]) {
														case 'e':
															switch(str[7]) {
																case 'n':
																	switch(str[8]) {
																		case 't':
																			switch(str[9]) {
																				case 0: return _corpulent;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'g':
							switch(str[3]) {
								case 'n':
									switch(str[4]) {
										case 'a':
											switch(str[5]) {
												case 't':
													switch(str[6]) {
														case 'e':
															switch(str[7]) {
																case 0: return _cognate;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'e':
									switch(str[4]) {
										case 'n':
											switch(str[5]) {
												case 't':
													switch(str[6]) {
														case 0: return _cogent;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'z':
							switch(str[3]) {
								case 'e':
									switch(str[4]) {
										case 'n':
											switch(str[5]) {
												case 0: return _cozen;
											}
											break;
									}
									break;
							}
							break;
						case 'i':
							switch(str[3]) {
								case 'f':
									switch(str[4]) {
										case 'f':
											switch(str[5]) {
												case 'u':
													switch(str[6]) {
														case 'r':
															switch(str[7]) {
																case 'e':
																	switch(str[8]) {
																		case 0: return _coiffure;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'd':
							switch(str[3]) {
								case 'i':
									switch(str[4]) {
										case 'c':
											switch(str[5]) {
												case 'i':
													switch(str[6]) {
														case 'l':
															switch(str[7]) {
																case 0: return _codicil;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'h':
					switch(str[2]) {
						case 'a':
							switch(str[3]) {
								case 'r':
									switch(str[4]) {
										case 'y':
											switch(str[5]) {
												case 0: return _chary;
											}
											break;
									}
									break;
								case 'f':
									switch(str[4]) {
										case 'f':
											switch(str[5]) {
												case 0: return _chaff;
											}
											break;
									}
									break;
								case 'g':
									switch(str[4]) {
										case 'r':
											switch(str[5]) {
												case 'i':
													switch(str[6]) {
														case 'n':
															switch(str[7]) {
																case 0: return _chagrin;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 's':
									switch(str[4]) {
										case 't':
											switch(str[5]) {
												case 'i':
													switch(str[6]) {
														case 's':
															switch(str[7]) {
																case 'e':
																	switch(str[8]) {
																		case 0: return _chastise;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'm':
									switch(str[4]) {
										case 'b':
											switch(str[5]) {
												case 'e':
													switch(str[6]) {
														case 'r':
															switch(str[7]) {
																case 0: return _chamber;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'i':
							switch(str[3]) {
								case 'd':
									switch(str[4]) {
										case 'e':
											switch(str[5]) {
												case 0: return _chide;
											}
											break;
									}
									break;
							}
							break;
						case 'e':
							switch(str[3]) {
								case 'c':
									switch(str[4]) {
										case 'k':
											switch(str[5]) {
												case 'e':
													switch(str[6]) {
														case 'r':
															switch(str[7]) {
																case 'e':
																	switch(str[8]) {
																		case 'd':
																			switch(str[9]) {
																				case 0: return _checkered;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'o':
							switch(str[3]) {
								case 'l':
									switch(str[4]) {
										case 'e':
											switch(str[5]) {
												case 'r':
													switch(str[6]) {
														case 'i':
															switch(str[7]) {
																case 'c':
																	switch(str[8]) {
																		case 0: return _choleric;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'a':
					switch(str[2]) {
						case 'm':
							switch(str[3]) {
								case 'e':
									switch(str[4]) {
										case 'o':
											switch(str[5]) {
												case 0: return _cameo;
											}
											break;
									}
									break;
								case 'p':
									switch(str[4]) {
										case 'a':
											switch(str[5]) {
												case 'i':
													switch(str[6]) {
														case 'g':
															switch(str[7]) {
																case 'n':
																	switch(str[8]) {
																		case 0: return _campaign;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'r':
							switch(str[3]) {
								case 'e':
									switch(str[4]) {
										case 'e':
											switch(str[5]) {
												case 'n':
													switch(str[6]) {
														case 0: return _careen;
													}
													break;
											}
											break;
									}
									break;
								case 'r':
									switch(str[4]) {
										case 'i':
											switch(str[5]) {
												case 'o':
													switch(str[6]) {
														case 'n':
															switch(str[7]) {
																case 0: return _carrion;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'd':
									switch(str[4]) {
										case 'i':
											switch(str[5]) {
												case 'n':
													switch(str[6]) {
														case 'a':
															switch(str[7]) {
																case 'l':
																	switch(str[8]) {
																		case 0: return _cardinal;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'n':
							switch(str[3]) {
								case 't':
									switch(str[4]) {
										case 0: return _cant;
										case 'o':
											switch(str[5]) {
												case 0: return _canto;
											}
											break;
									}
									break;
								case 'd':
									switch(str[4]) {
										case 'i':
											switch(str[5]) {
												case 'd':
													switch(str[6]) {
														case 0: return _candid;
													}
													break;
											}
											break;
									}
									break;
								case 'o':
									switch(str[4]) {
										case 'n':
											switch(str[5]) {
												case 0: return _canon;
											}
											break;
									}
									break;
							}
							break;
						case 'p':
							switch(str[3]) {
								case 't':
									switch(str[4]) {
										case 'i':
											switch(str[5]) {
												case 'o':
													switch(str[6]) {
														case 'u':
															switch(str[7]) {
																case 's':
																	switch(str[8]) {
																		case 0: return _captious;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'r':
									switch(str[4]) {
										case 'i':
											switch(str[5]) {
												case 'c':
													switch(str[6]) {
														case 'e':
															switch(str[7]) {
																case 0: return _caprice;
															}
															break;
														case 'i':
															switch(str[7]) {
																case 'o':
																	switch(str[8]) {
																		case 'u':
																			switch(str[9]) {
																				case 's':
																					switch(str[10]) {
																						case 0: return _capricious;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'i':
									switch(str[4]) {
										case 't':
											switch(str[5]) {
												case 'u':
													switch(str[6]) {
														case 'l':
															switch(str[7]) {
																case 'a':
																	switch(str[8]) {
																		case 't':
																			switch(str[9]) {
																				case 'e':
																					switch(str[10]) {
																						case 0: return _capitulate;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'v':
							switch(str[3]) {
								case 'a':
									switch(str[4]) {
										case 'l':
											switch(str[5]) {
												case 'i':
													switch(str[6]) {
														case 'e':
															switch(str[7]) {
																case 'r':
																	switch(str[8]) {
																		case 0: return _cavalier;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'l':
							switch(str[3]) {
								case 'l':
									switch(str[4]) {
										case 'o':
											switch(str[5]) {
												case 'u':
													switch(str[6]) {
														case 's':
															switch(str[7]) {
																case 0: return _callous;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'u':
							switch(str[3]) {
								case 'c':
									switch(str[4]) {
										case 'u':
											switch(str[5]) {
												case 's':
													switch(str[6]) {
														case 0: return _caucus;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'j':
							switch(str[3]) {
								case 'o':
									switch(str[4]) {
										case 'l':
											switch(str[5]) {
												case 'e':
													switch(str[6]) {
														case 0: return _cajole;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'b':
							switch(str[3]) {
								case 'a':
									switch(str[4]) {
										case 'l':
											switch(str[5]) {
												case 0: return _cabal;
											}
											break;
									}
									break;
							}
							break;
						case 't':
							switch(str[3]) {
								case 'e':
									switch(str[4]) {
										case 'g':
											switch(str[5]) {
												case 'o':
													switch(str[6]) {
														case 'r':
															switch(str[7]) {
																case 'i':
																	switch(str[8]) {
																		case 'c':
																			switch(str[9]) {
																				case 'a':
																					switch(str[10]) {
																						case 'l':
																							switch(str[11]) {
																								case 0: return _categorical;
																							}
																							break;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'd':
							switch(str[3]) {
								case 'a':
									switch(str[4]) {
										case 'v':
											switch(str[5]) {
												case 'e':
													switch(str[6]) {
														case 'r':
															switch(str[7]) {
																case 'o':
																	switch(str[8]) {
																		case 'u':
																			switch(str[9]) {
																				case 's':
																					switch(str[10]) {
																						case 0: return _cadaverous;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'r':
					switch(str[2]) {
						case 'e':
							switch(str[3]) {
								case 'd':
									switch(str[4]) {
										case 'i':
											switch(str[5]) {
												case 'b':
													switch(str[6]) {
														case 'l':
															switch(str[7]) {
																case 'e':
																	switch(str[8]) {
																		case 0: return _credible;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
										case 'e':
											switch(str[5]) {
												case 'n':
													switch(str[6]) {
														case 'c':
															switch(str[7]) {
																case 'e':
																	switch(str[8]) {
																		case 0: return _credence;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
										case 'o':
											switch(str[5]) {
												case 0: return _credo;
											}
											break;
									}
									break;
								case 'v':
									switch(str[4]) {
										case 'i':
											switch(str[5]) {
												case 'c':
													switch(str[6]) {
														case 'e':
															switch(str[7]) {
																case 0: return _crevice;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'w':
									switch(str[4]) {
										case 0: return _crew;
									}
									break;
							}
							break;
						case 'a':
							switch(str[3]) {
								case 'b':
									switch(str[4]) {
										case 'b':
											switch(str[5]) {
												case 'e':
													switch(str[6]) {
														case 'd':
															switch(str[7]) {
																case 0: return _crabbed;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'v':
									switch(str[4]) {
										case 'e':
											switch(str[5]) {
												case 'n':
													switch(str[6]) {
														case 0: return _craven;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'o':
							switch(str[3]) {
								case 'n':
									switch(str[4]) {
										case 'e':
											switch(str[5]) {
												case 0: return _crone;
											}
											break;
									}
									break;
							}
							break;
						case 'y':
							switch(str[3]) {
								case 'p':
									switch(str[4]) {
										case 't':
											switch(str[5]) {
												case 'i':
													switch(str[6]) {
														case 'c':
															switch(str[7]) {
																case 0: return _cryptic;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'i':
					switch(str[2]) {
						case 'r':
							switch(str[3]) {
								case 'c':
									switch(str[4]) {
										case 'u':
											switch(str[5]) {
												case 'm':
													switch(str[6]) {
														case 's':
															switch(str[7]) {
																case 'p':
																	switch(str[8]) {
																		case 'e':
																			switch(str[9]) {
																				case 'c':
																					switch(str[10]) {
																						case 't':
																							switch(str[11]) {
																								case 0: return _circumspect;
																							}
																							break;
																					}
																					break;
																			}
																			break;
																	}
																	break;
																case 't':
																	switch(str[8]) {
																		case 'a':
																			switch(str[9]) {
																				case 'n':
																					switch(str[10]) {
																						case 'c':
																							switch(str[11]) {
																								case 'e':
																									switch(str[12]) {
																										case 's':
																											switch(str[13]) {
																												case 0: return _circumstances;
																											}
																											break;
																									}
																									break;
																							}
																							break;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
														case 'v':
															switch(str[7]) {
																case 'e':
																	switch(str[8]) {
																		case 'n':
																			switch(str[9]) {
																				case 't':
																					switch(str[10]) {
																						case 0: return _circumvent;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 't':
							switch(str[3]) {
								case 'e':
									switch(str[4]) {
										case 0: return _cite;
									}
									break;
							}
							break;
					}
					break;
				case 'u':
					switch(str[2]) {
						case 'p':
							switch(str[3]) {
								case 'i':
									switch(str[4]) {
										case 'd':
											switch(str[5]) {
												case 'i':
													switch(str[6]) {
														case 't':
															switch(str[7]) {
																case 'y':
																	switch(str[8]) {
																		case 0: return _cupidity;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'l':
					switch(str[2]) {
						case 'a':
							switch(str[3]) {
								case 'r':
									switch(str[4]) {
										case 'i':
											switch(str[5]) {
												case 'o':
													switch(str[6]) {
														case 'n':
															switch(str[7]) {
																case 0: return _clarion;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'n':
									switch(str[4]) {
										case 'd':
											switch(str[5]) {
												case 'e':
													switch(str[6]) {
														case 's':
															switch(str[7]) {
																case 't':
																	switch(str[8]) {
																		case 'i':
																			switch(str[9]) {
																				case 'n':
																					switch(str[10]) {
																						case 'e':
																							switch(str[11]) {
																								case 0: return _clandestine;
																							}
																							break;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'd':
									switch(str[4]) {
										case 0: return _clad;
									}
									break;
							}
							break;
						case 'e':
							switch(str[3]) {
								case 'a':
									switch(str[4]) {
										case 'v':
											switch(str[5]) {
												case 'e':
													switch(str[6]) {
														case 0: return _cleave;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'e':
					switch(str[2]) {
						case 'd':
							switch(str[3]) {
								case 'e':
									switch(str[4]) {
										case 0: return _cede;
									}
									break;
							}
							break;
					}
					break;
			}
			break;
		case 'm':
			switch(str[1]) {
				case 'a':
					switch(str[2]) {
						case 'j':
							switch(str[3]) {
								case 'o':
									switch(str[4]) {
										case 'r':
											switch(str[5]) {
												case 'i':
													switch(str[6]) {
														case 't':
															switch(str[7]) {
																case 'y':
																	switch(str[8]) {
																		case 0: return _majority;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'n':
							switch(str[3]) {
								case 'u':
									switch(str[4]) {
										case 'm':
											switch(str[5]) {
												case 'i':
													switch(str[6]) {
														case 't':
															switch(str[7]) {
																case 0: return _manumit;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'n':
									switch(str[4]) {
										case 'e':
											switch(str[5]) {
												case 'r':
													switch(str[6]) {
														case 'e':
															switch(str[7]) {
																case 'd':
																	switch(str[8]) {
																		case 0: return _mannered;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'i':
									switch(str[4]) {
										case 'f':
											switch(str[5]) {
												case 'e':
													switch(str[6]) {
														case 's':
															switch(str[7]) {
																case 't':
																	switch(str[8]) {
																		case 0: return _manifest;
																		case 'a':
																			switch(str[9]) {
																				case 't':
																					switch(str[10]) {
																						case 'i':
																							switch(str[11]) {
																								case 'o':
																									switch(str[12]) {
																										case 'n':
																											switch(str[13]) {
																												case 0: return _manifestation;
																											}
																											break;
																									}
																									break;
																							}
																							break;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'l':
							switch(str[3]) {
								case 'a':
									switch(str[4]) {
										case 'i':
											switch(str[5]) {
												case 's':
													switch(str[6]) {
														case 'e':
															switch(str[7]) {
																case 0: return _malaise;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'l':
									switch(str[4]) {
										case 'e':
											switch(str[5]) {
												case 'a':
													switch(str[6]) {
														case 'b':
															switch(str[7]) {
																case 'l':
																	switch(str[8]) {
																		case 'e':
																			switch(str[9]) {
																				case 0: return _malleable;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'c':
									switch(str[4]) {
										case 'o':
											switch(str[5]) {
												case 'n':
													switch(str[6]) {
														case 't':
															switch(str[7]) {
																case 'e':
																	switch(str[8]) {
																		case 'n':
																			switch(str[9]) {
																				case 't':
																					switch(str[10]) {
																						case 0: return _malcontent;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'e':
									switch(str[4]) {
										case 'v':
											switch(str[5]) {
												case 'o':
													switch(str[6]) {
														case 'l':
															switch(str[7]) {
																case 'e':
																	switch(str[8]) {
																		case 'n':
																			switch(str[9]) {
																				case 't':
																					switch(str[10]) {
																						case 0: return _malevolent;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'i':
									switch(str[4]) {
										case 'c':
											switch(str[5]) {
												case 'e':
													switch(str[6]) {
														case 0: return _malice;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'x':
							switch(str[3]) {
								case 'i':
									switch(str[4]) {
										case 'm':
											switch(str[5]) {
												case 0: return _maxim;
											}
											break;
									}
									break;
							}
							break;
						case 'r':
							switch(str[3]) {
								case 'a':
									switch(str[4]) {
										case 'u':
											switch(str[5]) {
												case 'd':
													switch(str[6]) {
														case 0: return _maraud;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'c':
							switch(str[3]) {
								case 'h':
									switch(str[4]) {
										case 'i':
											switch(str[5]) {
												case 'n':
													switch(str[6]) {
														case 'a':
															switch(str[7]) {
																case 't':
																	switch(str[8]) {
																		case 'i':
																			switch(str[9]) {
																				case 'o':
																					switch(str[10]) {
																						case 'n':
																							switch(str[11]) {
																								case 0: return _machination;
																							}
																							break;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'k':
							switch(str[3]) {
								case 'e':
									switch(str[4]) {
										case 's':
											switch(str[5]) {
												case 'h':
													switch(str[6]) {
														case 'i':
															switch(str[7]) {
																case 'f':
																	switch(str[8]) {
																		case 't':
																			switch(str[9]) {
																				case 0: return _makeshift;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'u':
							switch(str[3]) {
								case 'l':
									switch(str[4]) {
										case 0: return _maul;
									}
									break;
							}
							break;
						case 's':
							switch(str[3]) {
								case 't':
									switch(str[4]) {
										case 'i':
											switch(str[5]) {
												case 'c':
													switch(str[6]) {
														case 'a':
															switch(str[7]) {
																case 't':
																	switch(str[8]) {
																		case 'e':
																			switch(str[9]) {
																				case 0: return _masticate;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'g':
							switch(str[3]) {
								case 'i':
									switch(str[4]) {
										case 's':
											switch(str[5]) {
												case 't':
													switch(str[6]) {
														case 'e':
															switch(str[7]) {
																case 'r':
																	switch(str[8]) {
																		case 'i':
																			switch(str[9]) {
																				case 'a':
																					switch(str[10]) {
																						case 'l':
																							switch(str[11]) {
																								case 0: return _magisterial;
																							}
																							break;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'd':
							switch(str[3]) {
								case 'r':
									switch(str[4]) {
										case 'i':
											switch(str[5]) {
												case 'g':
													switch(str[6]) {
														case 'a':
															switch(str[7]) {
																case 'l':
																	switch(str[8]) {
																		case 0: return _madrigal;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'i':
					switch(str[2]) {
						case 'n':
							switch(str[3]) {
								case 'c':
									switch(str[4]) {
										case 'i':
											switch(str[5]) {
												case 'n':
													switch(str[6]) {
														case 'g':
															switch(str[7]) {
																case 0: return _mincing;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'u':
									switch(str[4]) {
										case 't':
											switch(str[5]) {
												case 'e':
													switch(str[6]) {
														case 0: return _minute;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'e':
							switch(str[3]) {
								case 'n':
									switch(str[4]) {
										case 0: return _mien;
									}
									break;
							}
							break;
						case 't':
							switch(str[3]) {
								case 'e':
									switch(str[4]) {
										case 0: return _mite;
									}
									break;
							}
							break;
						case 's':
							switch(str[3]) {
								case 'a':
									switch(str[4]) {
										case 'n':
											switch(str[5]) {
												case 't':
													switch(str[6]) {
														case 'h':
															switch(str[7]) {
																case 'r':
																	switch(str[8]) {
																		case 'o':
																			switch(str[9]) {
																				case 'p':
																					switch(str[10]) {
																						case 'e':
																							switch(str[11]) {
																								case 0: return _misanthrope;
																							}
																							break;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'e':
									switch(str[4]) {
										case 'r':
											switch(str[5]) {
												case 'l':
													switch(str[6]) {
														case 'y':
															switch(str[7]) {
																case 0: return _miserly;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'c':
							switch(str[3]) {
								case 'r':
									switch(str[4]) {
										case 'o':
											switch(str[5]) {
												case 'c':
													switch(str[6]) {
														case 'o':
															switch(str[7]) {
																case 's':
																	switch(str[8]) {
																		case 'm':
																			switch(str[9]) {
																				case 0: return _microcosm;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'o':
					switch(str[2]) {
						case 'd':
							switch(str[3]) {
								case 'i':
									switch(str[4]) {
										case 'c':
											switch(str[5]) {
												case 'u':
													switch(str[6]) {
														case 'm':
															switch(str[7]) {
																case 0: return _modicum;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'e':
									switch(str[4]) {
										case 0: return _mode;
										case 's':
											switch(str[5]) {
												case 't':
													switch(str[6]) {
														case 0: return _modest;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'r':
							switch(str[3]) {
								case 'i':
									switch(str[4]) {
										case 'b':
											switch(str[5]) {
												case 'u':
													switch(str[6]) {
														case 'n':
															switch(str[7]) {
																case 'd':
																	switch(str[8]) {
																		case 0: return _moribund;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'd':
									switch(str[4]) {
										case 'a':
											switch(str[5]) {
												case 'n':
													switch(str[6]) {
														case 't':
															switch(str[7]) {
																case 0: return _mordant;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'b':
									switch(str[4]) {
										case 'i':
											switch(str[5]) {
												case 'd':
													switch(str[6]) {
														case 0: return _morbid;
													}
													break;
											}
											break;
									}
									break;
								case 't':
									switch(str[4]) {
										case 'i':
											switch(str[5]) {
												case 'f':
													switch(str[6]) {
														case 'y':
															switch(str[7]) {
																case 0: return _mortify;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'n':
							switch(str[3]) {
								case 'e':
									switch(str[4]) {
										case 't':
											switch(str[5]) {
												case 'a':
													switch(str[6]) {
														case 'r':
															switch(str[7]) {
																case 'y':
																	switch(str[8]) {
																		case 0: return _monetary;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'o':
							switch(str[3]) {
								case 't':
									switch(str[4]) {
										case 0: return _moot;
									}
									break;
							}
							break;
						case 't':
							switch(str[3]) {
								case 'e':
									switch(str[4]) {
										case 0: return _mote;
									}
									break;
							}
							break;
						case 'u':
							switch(str[3]) {
								case 'n':
									switch(str[4]) {
										case 't':
											switch(str[5]) {
												case 'e':
													switch(str[6]) {
														case 'b':
															switch(str[7]) {
																case 'a':
																	switch(str[8]) {
																		case 'n':
																			switch(str[9]) {
																				case 'k':
																					switch(str[10]) {
																						case 0: return _mountebank;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'e':
					switch(str[2]) {
						case 'r':
							switch(str[3]) {
								case 'c':
									switch(str[4]) {
										case 'u':
											switch(str[5]) {
												case 'r':
													switch(str[6]) {
														case 'i':
															switch(str[7]) {
																case 'a':
																	switch(str[8]) {
																		case 'l':
																			switch(str[9]) {
																				case 0: return _mercurial;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'i':
									switch(str[4]) {
										case 't':
											switch(str[5]) {
												case 0: return _merit;
											}
											break;
									}
									break;
							}
							break;
						case 't':
							switch(str[3]) {
								case 't':
									switch(str[4]) {
										case 'l':
											switch(str[5]) {
												case 'e':
													switch(str[6]) {
														case 0: return _mettle;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'n':
							switch(str[3]) {
								case 'd':
									switch(str[4]) {
										case 'i':
											switch(str[5]) {
												case 'c':
													switch(str[6]) {
														case 'a':
															switch(str[7]) {
																case 'n':
																	switch(str[8]) {
																		case 't':
																			switch(str[9]) {
																				case 0: return _mendicant;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'a':
							switch(str[3]) {
								case 'n':
									switch(str[4]) {
										case 'd':
											switch(str[5]) {
												case 'e':
													switch(str[6]) {
														case 'r':
															switch(str[7]) {
																case 0: return _meander;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'u':
					switch(str[2]) {
						case 'l':
							switch(str[3]) {
								case 't':
									switch(str[4]) {
										case 'i':
											switch(str[5]) {
												case 't':
													switch(str[6]) {
														case 'u':
															switch(str[7]) {
																case 'd':
																	switch(str[8]) {
																		case 'e':
																			switch(str[9]) {
																				case 0: return _multitude;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 's':
							switch(str[3]) {
								case 't':
									switch(str[4]) {
										case 'e':
											switch(str[5]) {
												case 'r':
													switch(str[6]) {
														case 0: return _muster;
													}
													break;
											}
											break;
									}
									break;
								case 'e':
									switch(str[4]) {
										case 0: return _muse;
									}
									break;
							}
							break;
						case 'n':
							switch(str[3]) {
								case 'd':
									switch(str[4]) {
										case 'a':
											switch(str[5]) {
												case 'n':
													switch(str[6]) {
														case 'e':
															switch(str[7]) {
																case 0: return _mundane;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'i':
									switch(str[4]) {
										case 'f':
											switch(str[5]) {
												case 'i':
													switch(str[6]) {
														case 'c':
															switch(str[7]) {
																case 'e':
																	switch(str[8]) {
																		case 'n':
																			switch(str[9]) {
																				case 't':
																					switch(str[10]) {
																						case 0: return _munificent;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
			}
			break;
		case 'a':
			switch(str[1]) {
				case 'n':
					switch(str[2]) {
						case 'i':
							switch(str[3]) {
								case 'm':
									switch(str[4]) {
										case 'u':
											switch(str[5]) {
												case 's':
													switch(str[6]) {
														case 0: return _animus;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 't':
							switch(str[3]) {
								case 'h':
									switch(str[4]) {
										case 'r':
											switch(str[5]) {
												case 'o':
													switch(str[6]) {
														case 'p':
															switch(str[7]) {
																case 'o':
																	switch(str[8]) {
																		case 'm':
																			switch(str[9]) {
																				case 'o':
																					switch(str[10]) {
																						case 'r':
																							switch(str[11]) {
																								case 'p':
																									switch(str[12]) {
																										case 'h':
																											switch(str[13]) {
																												case 'i':
																													switch(str[14]) {
																														case 'c':
																															switch(str[15]) {
																																case 0: return _anthropomorphic;
																															}
																															break;
																													}
																													break;
																											}
																											break;
																									}
																									break;
																							}
																							break;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'o':
							switch(str[3]) {
								case 'd':
									switch(str[4]) {
										case 'y':
											switch(str[5]) {
												case 'n':
													switch(str[6]) {
														case 'e':
															switch(str[7]) {
																case 0: return _anodyne;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 't':
					switch(str[2]) {
						case 't':
							switch(str[3]) {
								case 'r':
									switch(str[4]) {
										case 'i':
											switch(str[5]) {
												case 'b':
													switch(str[6]) {
														case 'u':
															switch(str[7]) {
																case 't':
																	switch(str[8]) {
																		case 'e':
																			switch(str[9]) {
																				case 0: return _attribute;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'i':
									switch(str[4]) {
										case 't':
											switch(str[5]) {
												case 'u':
													switch(str[6]) {
														case 'd':
															switch(str[7]) {
																case 'e':
																	switch(str[8]) {
																		case 0: return _attitude;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'a':
							switch(str[3]) {
								case 'v':
									switch(str[4]) {
										case 'i':
											switch(str[5]) {
												case 's':
													switch(str[6]) {
														case 'm':
															switch(str[7]) {
																case 0: return _atavism;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'p':
					switch(str[2]) {
						case 'p':
							switch(str[3]) {
								case 'o':
									switch(str[4]) {
										case 'i':
											switch(str[5]) {
												case 'n':
													switch(str[6]) {
														case 't':
															switch(str[7]) {
																case 0: return _appoint;
															}
															break;
													}
													break;
											}
											break;
										case 's':
											switch(str[5]) {
												case 'i':
													switch(str[6]) {
														case 't':
															switch(str[7]) {
																case 'e':
																	switch(str[8]) {
																		case 0: return _apposite;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'u':
									switch(str[4]) {
										case 'r':
											switch(str[5]) {
												case 't':
													switch(str[6]) {
														case 'e':
															switch(str[7]) {
																case 'n':
																	switch(str[8]) {
																		case 'a':
																			switch(str[9]) {
																				case 'n':
																					switch(str[10]) {
																						case 'c':
																							switch(str[11]) {
																								case 'e':
																									switch(str[12]) {
																										case 0: return _appurtenance;
																									}
																									break;
																							}
																							break;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'e':
									switch(str[4]) {
										case 'a':
											switch(str[5]) {
												case 's':
													switch(str[6]) {
														case 'e':
															switch(str[7]) {
																case 0: return _appease;
															}
															break;
													}
													break;
												case 'l':
													switch(str[6]) {
														case 0: return _appeal;
													}
													break;
											}
											break;
										case 'n':
											switch(str[5]) {
												case 'd':
													switch(str[6]) {
														case 0: return _append;
													}
													break;
											}
											break;
									}
									break;
								case 'a':
									switch(str[4]) {
										case 'r':
											switch(str[5]) {
												case 'e':
													switch(str[6]) {
														case 'n':
															switch(str[7]) {
																case 't':
																	switch(str[8]) {
																		case 0: return _apparent;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'r':
									switch(str[4]) {
										case 'o':
											switch(str[5]) {
												case 'a':
													switch(str[6]) {
														case 'c':
															switch(str[7]) {
																case 'h':
																	switch(str[8]) {
																		case 0: return _approach;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 't':
							switch(str[3]) {
								case 0: return _apt;
							}
							break;
						case 'o':
							switch(str[3]) {
								case 'c':
									switch(str[4]) {
										case 'r':
											switch(str[5]) {
												case 'y':
													switch(str[6]) {
														case 'p':
															switch(str[7]) {
																case 'h':
																	switch(str[8]) {
																		case 'a':
																			switch(str[9]) {
																				case 'l':
																					switch(str[10]) {
																						case 0: return _apocryphal;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 't':
									switch(str[4]) {
										case 'h':
											switch(str[5]) {
												case 'e':
													switch(str[6]) {
														case 'o':
															switch(str[7]) {
																case 's':
																	switch(str[8]) {
																		case 'i':
																			switch(str[9]) {
																				case 's':
																					switch(str[10]) {
																						case 0: return _apotheosis;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'l':
									switch(str[4]) {
										case 'o':
											switch(str[5]) {
												case 'g':
													switch(str[6]) {
														case 'i':
															switch(str[7]) {
																case 's':
																	switch(str[8]) {
																		case 't':
																			switch(str[9]) {
																				case 0: return _apologist;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 's':
									switch(str[4]) {
										case 't':
											switch(str[5]) {
												case 'a':
													switch(str[6]) {
														case 't':
															switch(str[7]) {
																case 'e':
																	switch(str[8]) {
																		case 0: return _apostate;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'h':
							switch(str[3]) {
								case 'o':
									switch(str[4]) {
										case 'r':
											switch(str[5]) {
												case 'i':
													switch(str[6]) {
														case 's':
															switch(str[7]) {
																case 'm':
																	switch(str[8]) {
																		case 0: return _aphorism;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'r':
							switch(str[3]) {
								case 'o':
									switch(str[4]) {
										case 'p':
											switch(str[5]) {
												case 'o':
													switch(str[6]) {
														case 's':
															switch(str[7]) {
																case 0: return _apropos;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'c':
					switch(str[2]) {
						case 'c':
							switch(str[3]) {
								case 'o':
									switch(str[4]) {
										case 'r':
											switch(str[5]) {
												case 'd':
													switch(str[6]) {
														case 0: return _accord;
													}
													break;
											}
											break;
										case 'l':
											switch(str[5]) {
												case 'a':
													switch(str[6]) {
														case 'd':
															switch(str[7]) {
																case 'e':
																	switch(str[8]) {
																		case 0: return _accolade;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'e':
									switch(str[4]) {
										case 'd':
											switch(str[5]) {
												case 'e':
													switch(str[6]) {
														case 0: return _accede;
													}
													break;
											}
											break;
										case 'n':
											switch(str[5]) {
												case 't':
													switch(str[6]) {
														case 'u':
															switch(str[7]) {
																case 'a':
																	switch(str[8]) {
																		case 't':
																			switch(str[9]) {
																				case 'e':
																					switch(str[10]) {
																						case 0: return _accentuate;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'q':
							switch(str[3]) {
								case 'u':
									switch(str[4]) {
										case 'i':
											switch(str[5]) {
												case 'e':
													switch(str[6]) {
														case 's':
															switch(str[7]) {
																case 'c':
																	switch(str[8]) {
																		case 'e':
																			switch(str[9]) {
																				case 0: return _acquiesce;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 't':
							switch(str[3]) {
								case 'u':
									switch(str[4]) {
										case 'a':
											switch(str[5]) {
												case 't':
													switch(str[6]) {
														case 'e':
															switch(str[7]) {
																case 0: return _actuate;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'r':
							switch(str[3]) {
								case 'i':
									switch(str[4]) {
										case 'm':
											switch(str[5]) {
												case 'o':
													switch(str[6]) {
														case 'n':
															switch(str[7]) {
																case 'y':
																	switch(str[8]) {
																		case 0: return _acrimony;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'm':
							switch(str[3]) {
								case 'e':
									switch(str[4]) {
										case 0: return _acme;
									}
									break;
							}
							break;
					}
					break;
				case 'd':
					switch(str[2]) {
						case 'v':
							switch(str[3]) {
								case 'e':
									switch(str[4]) {
										case 'r':
											switch(str[5]) {
												case 't':
													switch(str[6]) {
														case 0: return _advert;
													}
													break;
												case 's':
													switch(str[6]) {
														case 'e':
															switch(str[7]) {
																case 0: return _adverse;
															}
															break;
													}
													break;
											}
											break;
										case 'n':
											switch(str[5]) {
												case 't':
													switch(str[6]) {
														case 'i':
															switch(str[7]) {
																case 't':
																	switch(str[8]) {
																		case 'i':
																			switch(str[9]) {
																				case 'o':
																					switch(str[10]) {
																						case 'u':
																							switch(str[11]) {
																								case 's':
																									switch(str[12]) {
																										case 0: return _adventitious;
																									}
																									break;
																							}
																							break;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'o':
									switch(str[4]) {
										case 'c':
											switch(str[5]) {
												case 'a':
													switch(str[6]) {
														case 't':
															switch(str[7]) {
																case 'e':
																	switch(str[8]) {
																		case 0: return _advocate;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'm':
							switch(str[3]) {
								case 'o':
									switch(str[4]) {
										case 'n':
											switch(str[5]) {
												case 'i':
													switch(str[6]) {
														case 's':
															switch(str[7]) {
																case 'h':
																	switch(str[8]) {
																		case 0: return _admonish;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'u':
							switch(str[3]) {
								case 'l':
									switch(str[4]) {
										case 't':
											switch(str[5]) {
												case 'e':
													switch(str[6]) {
														case 'r':
															switch(str[7]) {
																case 'a':
																	switch(str[8]) {
																		case 't':
																			switch(str[9]) {
																				case 'e':
																					switch(str[10]) {
																						case 0: return _adulterate;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
										case 'a':
											switch(str[5]) {
												case 't':
													switch(str[6]) {
														case 'i':
															switch(str[7]) {
																case 'o':
																	switch(str[8]) {
																		case 'n':
																			switch(str[9]) {
																				case 0: return _adulation;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'j':
							switch(str[3]) {
								case 'u':
									switch(str[4]) {
										case 'r':
											switch(str[5]) {
												case 'e':
													switch(str[6]) {
														case 0: return _adjure;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'a':
							switch(str[3]) {
								case 'g':
									switch(str[4]) {
										case 'e':
											switch(str[5]) {
												case 0: return _adage;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'b':
					switch(str[2]) {
						case 'e':
							switch(str[3]) {
								case 'y':
									switch(str[4]) {
										case 'a':
											switch(str[5]) {
												case 'n':
													switch(str[6]) {
														case 'c':
															switch(str[7]) {
																case 'e':
																	switch(str[8]) {
																		case 0: return _abeyance;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 't':
									switch(str[4]) {
										case 0: return _abet;
									}
									break;
							}
							break;
						case 'a':
							switch(str[3]) {
								case 's':
									switch(str[4]) {
										case 'e':
											switch(str[5]) {
												case 0: return _abase;
											}
											break;
									}
									break;
							}
							break;
						case 'j':
							switch(str[3]) {
								case 'u':
									switch(str[4]) {
										case 'r':
											switch(str[5]) {
												case 'e':
													switch(str[6]) {
														case 0: return _abjure;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'u':
							switch(str[3]) {
								case 't':
									switch(str[4]) {
										case 0: return _abut;
									}
									break;
							}
							break;
						case 'y':
							switch(str[3]) {
								case 's':
									switch(str[4]) {
										case 'm':
											switch(str[5]) {
												case 'a':
													switch(str[6]) {
														case 'l':
															switch(str[7]) {
																case 0: return _abysmal;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 's':
							switch(str[3]) {
								case 't':
									switch(str[4]) {
										case 'e':
											switch(str[5]) {
												case 'm':
													switch(str[6]) {
														case 'i':
															switch(str[7]) {
																case 'o':
																	switch(str[8]) {
																		case 'u':
																			switch(str[9]) {
																				case 's':
																					switch(str[10]) {
																						case 0: return _abstemious;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 's':
					switch(str[2]) {
						case 's':
							switch(str[3]) {
								case 'a':
									switch(str[4]) {
										case 'i':
											switch(str[5]) {
												case 'l':
													switch(str[6]) {
														case 0: return _assail;
													}
													break;
											}
											break;
										case 'y':
											switch(str[5]) {
												case 0: return _assay;
											}
											break;
									}
									break;
								case 'i':
									switch(str[4]) {
										case 'd':
											switch(str[5]) {
												case 'u':
													switch(str[6]) {
														case 'o':
															switch(str[7]) {
																case 'u':
																	switch(str[8]) {
																		case 's':
																			switch(str[9]) {
																				case 0: return _assiduous;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'e':
									switch(str[4]) {
										case 'r':
											switch(str[5]) {
												case 't':
													switch(str[6]) {
														case 0: return _assert;
													}
													break;
											}
											break;
										case 'n':
											switch(str[5]) {
												case 't':
													switch(str[6]) {
														case 0: return _assent;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'c':
							switch(str[3]) {
								case 'e':
									switch(str[4]) {
										case 'r':
											switch(str[5]) {
												case 't':
													switch(str[6]) {
														case 'a':
															switch(str[7]) {
																case 'i':
																	switch(str[8]) {
																		case 'n':
																			switch(str[9]) {
																				case 0: return _ascertain;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
										case 'n':
											switch(str[5]) {
												case 'd':
													switch(str[6]) {
														case 'a':
															switch(str[7]) {
																case 'n':
																	switch(str[8]) {
																		case 'c':
																			switch(str[9]) {
																				case 'y':
																					switch(str[10]) {
																						case 0: return _ascendancy;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'u':
							switch(str[3]) {
								case 'n':
									switch(str[4]) {
										case 'd':
											switch(str[5]) {
												case 'e':
													switch(str[6]) {
														case 'r':
															switch(str[7]) {
																case 0: return _asunder;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'k':
							switch(str[3]) {
								case 'a':
									switch(str[4]) {
										case 'n':
											switch(str[5]) {
												case 'c':
													switch(str[6]) {
														case 'e':
															switch(str[7]) {
																case 0: return _askance;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'p':
							switch(str[3]) {
								case 'e':
									switch(str[4]) {
										case 'r':
											switch(str[5]) {
												case 's':
													switch(str[6]) {
														case 'i':
															switch(str[7]) {
																case 'o':
																	switch(str[8]) {
																		case 'n':
																			switch(str[9]) {
																				case 0: return _aspersion;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
												case 'i':
													switch(str[6]) {
														case 't':
															switch(str[7]) {
																case 'y':
																	switch(str[8]) {
																		case 0: return _asperity;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 't':
							switch(str[3]) {
								case 'r':
									switch(str[4]) {
										case 'i':
											switch(str[5]) {
												case 'n':
													switch(str[6]) {
														case 'g':
															switch(str[7]) {
																case 'e':
																	switch(str[8]) {
																		case 'n':
																			switch(str[9]) {
																				case 't':
																					switch(str[10]) {
																						case 0: return _astringent;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'r':
					switch(str[2]) {
						case 'b':
							switch(str[3]) {
								case 'i':
									switch(str[4]) {
										case 't':
											switch(str[5]) {
												case 'r':
													switch(str[6]) {
														case 'a':
															switch(str[7]) {
																case 't':
																	switch(str[8]) {
																		case 'e':
																			switch(str[9]) {
																				case 0: return _arbitrate;
																			}
																			break;
																	}
																	break;
																case 'r':
																	switch(str[8]) {
																		case 'y':
																			switch(str[9]) {
																				case 0: return _arbitrary;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'm':
							switch(str[3]) {
								case 'a':
									switch(str[4]) {
										case 'd':
											switch(str[5]) {
												case 'a':
													switch(str[6]) {
														case 0: return _armada;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'i':
							switch(str[3]) {
								case 'a':
									switch(str[4]) {
										case 0: return _aria;
									}
									break;
							}
							break;
						case 'c':
							switch(str[3]) {
								case 'h':
									switch(str[4]) {
										case 'e':
											switch(str[5]) {
												case 't':
													switch(str[6]) {
														case 'y':
															switch(str[7]) {
																case 'p':
																	switch(str[8]) {
																		case 'e':
																			switch(str[9]) {
																				case 0: return _archetype;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'r':
							switch(str[3]) {
								case 'o':
									switch(str[4]) {
										case 'g':
											switch(str[5]) {
												case 'a':
													switch(str[6]) {
														case 't':
															switch(str[7]) {
																case 'e':
																	switch(str[8]) {
																		case 0: return _arrogate;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'm':
					switch(str[2]) {
						case 'i':
							switch(str[3]) {
								case 'c':
									switch(str[4]) {
										case 'a':
											switch(str[5]) {
												case 'b':
													switch(str[6]) {
														case 'l':
															switch(str[7]) {
																case 'e':
																	switch(str[8]) {
																		case 0: return _amicable;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'a':
							switch(str[3]) {
								case 'l':
									switch(str[4]) {
										case 'g':
											switch(str[5]) {
												case 'a':
													switch(str[6]) {
														case 'm':
															switch(str[7]) {
																case 'a':
																	switch(str[8]) {
																		case 't':
																			switch(str[9]) {
																				case 'e':
																					switch(str[10]) {
																						case 0: return _amalgamate;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'e':
							switch(str[3]) {
								case 'n':
									switch(str[4]) {
										case 'a':
											switch(str[5]) {
												case 'b':
													switch(str[6]) {
														case 'l':
															switch(str[7]) {
																case 'e':
																	switch(str[8]) {
																		case 0: return _amenable;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'b':
							switch(str[3]) {
								case 'r':
									switch(str[4]) {
										case 'o':
											switch(str[5]) {
												case 's':
													switch(str[6]) {
														case 'i':
															switch(str[7]) {
																case 'a':
																	switch(str[8]) {
																		case 0: return _ambrosia;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'q':
					switch(str[2]) {
						case 'u':
							switch(str[3]) {
								case 'i':
									switch(str[4]) {
										case 'l':
											switch(str[5]) {
												case 'i':
													switch(str[6]) {
														case 'n':
															switch(str[7]) {
																case 'e':
																	switch(str[8]) {
																		case 0: return _aquiline;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'u':
					switch(str[2]) {
						case 's':
							switch(str[3]) {
								case 'p':
									switch(str[4]) {
										case 'i':
											switch(str[5]) {
												case 'c':
													switch(str[6]) {
														case 'e':
															switch(str[7]) {
																case 's':
																	switch(str[8]) {
																		case 0: return _auspices;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 't':
									switch(str[4]) {
										case 'e':
											switch(str[5]) {
												case 'r':
													switch(str[6]) {
														case 'e':
															switch(str[7]) {
																case 0: return _austere;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'd':
							switch(str[3]) {
								case 'a':
									switch(str[4]) {
										case 'c':
											switch(str[5]) {
												case 'i':
													switch(str[6]) {
														case 'o':
															switch(str[7]) {
																case 'u':
																	switch(str[8]) {
																		case 's':
																			switch(str[9]) {
																				case 0: return _audacious;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'g':
							switch(str[3]) {
								case 'u':
									switch(str[4]) {
										case 's':
											switch(str[5]) {
												case 't':
													switch(str[6]) {
														case 0: return _august;
													}
													break;
											}
											break;
										case 'r':
											switch(str[5]) {
												case 'y':
													switch(str[6]) {
														case 0: return _augury;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 't':
							switch(str[3]) {
								case 'o':
									switch(str[4]) {
										case 'm':
											switch(str[5]) {
												case 'a':
													switch(str[6]) {
														case 't':
															switch(str[7]) {
																case 'e':
																	switch(str[8]) {
																		case 0: return _automate;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'v':
					switch(str[2]) {
						case 'e':
							switch(str[3]) {
								case 'r':
									switch(str[4]) {
										case 's':
											switch(str[5]) {
												case 'i':
													switch(str[6]) {
														case 'o':
															switch(str[7]) {
																case 'n':
																	switch(str[8]) {
																		case 0: return _aversion;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'a':
							switch(str[3]) {
								case 'r':
									switch(str[4]) {
										case 'i':
											switch(str[5]) {
												case 'c':
													switch(str[6]) {
														case 'e':
															switch(str[7]) {
																case 0: return _avarice;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'o':
							switch(str[3]) {
								case 'c':
									switch(str[4]) {
										case 'a':
											switch(str[5]) {
												case 't':
													switch(str[6]) {
														case 'i':
															switch(str[7]) {
																case 'o':
																	switch(str[8]) {
																		case 'n':
																			switch(str[9]) {
																				case 0: return _avocation;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'l':
					switch(str[2]) {
						case 'l':
							switch(str[3]) {
								case 'a':
									switch(str[4]) {
										case 'y':
											switch(str[5]) {
												case 0: return _allay;
											}
											break;
									}
									break;
								case 'e':
									switch(str[4]) {
										case 'g':
											switch(str[5]) {
												case 'e':
													switch(str[6]) {
														case 0: return _allege;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'a':
							switch(str[3]) {
								case 'c':
									switch(str[4]) {
										case 'r':
											switch(str[5]) {
												case 'i':
													switch(str[6]) {
														case 't':
															switch(str[7]) {
																case 'y':
																	switch(str[8]) {
																		case 0: return _alacrity;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'c':
							switch(str[3]) {
								case 'o':
									switch(str[4]) {
										case 'v':
											switch(str[5]) {
												case 'e':
													switch(str[6]) {
														case 0: return _alcove;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'g':
					switch(str[2]) {
						case 'g':
							switch(str[3]) {
								case 'r':
									switch(str[4]) {
										case 'i':
											switch(str[5]) {
												case 'e':
													switch(str[6]) {
														case 'v':
															switch(str[7]) {
																case 'e':
																	switch(str[8]) {
																		case 0: return _aggrieve;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'x':
					switch(str[2]) {
						case 'i':
							switch(str[3]) {
								case 'o':
									switch(str[4]) {
										case 'm':
											switch(str[5]) {
												case 0: return _axiom;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'f':
					switch(str[2]) {
						case 'f':
							switch(str[3]) {
								case 'a':
									switch(str[4]) {
										case 'b':
											switch(str[5]) {
												case 'l':
													switch(str[6]) {
														case 'e':
															switch(str[7]) {
																case 0: return _affable;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'l':
									switch(str[4]) {
										case 'i':
											switch(str[5]) {
												case 'c':
													switch(str[6]) {
														case 't':
															switch(str[7]) {
																case 0: return _afflict;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'e':
									switch(str[4]) {
										case 'c':
											switch(str[5]) {
												case 't':
													switch(str[6]) {
														case 0: return _affect;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'i':
					switch(str[2]) {
						case 'd':
							switch(str[3]) {
								case 'e':
									switch(str[4]) {
										case 0: return _aide;
									}
									break;
							}
							break;
					}
					break;
			}
			break;
		case 'e':
			switch(str[1]) {
				case 'f':
					switch(str[2]) {
						case 'f':
							switch(str[3]) {
								case 'l':
									switch(str[4]) {
										case 'u':
											switch(str[5]) {
												case 'v':
													switch(str[6]) {
														case 'i':
															switch(str[7]) {
																case 'u':
																	switch(str[8]) {
																		case 'm':
																			switch(str[9]) {
																				case 0: return _effluvium;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'e':
									switch(str[4]) {
										case 't':
											switch(str[5]) {
												case 'e':
													switch(str[6]) {
														case 0: return _effete;
													}
													break;
											}
											break;
										case 'r':
											switch(str[5]) {
												case 'v':
													switch(str[6]) {
														case 'e':
															switch(str[7]) {
																case 's':
																	switch(str[8]) {
																		case 'c':
																			switch(str[9]) {
																				case 'e':
																					switch(str[10]) {
																						case 'n':
																							switch(str[11]) {
																								case 'c':
																									switch(str[12]) {
																										case 'e':
																											switch(str[13]) {
																												case 0: return _effervescence;
																											}
																											break;
																									}
																									break;
																							}
																							break;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'u':
									switch(str[4]) {
										case 'l':
											switch(str[5]) {
												case 'g':
													switch(str[6]) {
														case 'e':
															switch(str[7]) {
																case 'n':
																	switch(str[8]) {
																		case 'c':
																			switch(str[9]) {
																				case 'e':
																					switch(str[10]) {
																						case 0: return _effulgence;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'x':
					switch(str[2]) {
						case 'e':
							switch(str[3]) {
								case 'g':
									switch(str[4]) {
										case 'e':
											switch(str[5]) {
												case 's':
													switch(str[6]) {
														case 'i':
															switch(str[7]) {
																case 's':
																	switch(str[8]) {
																		case 0: return _exegesis;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'c':
									switch(str[4]) {
										case 'r':
											switch(str[5]) {
												case 'a':
													switch(str[6]) {
														case 't':
															switch(str[7]) {
																case 'e':
																	switch(str[8]) {
																		case 0: return _execrate;
																	}
																	break;
															}
															break;
														case 'b':
															switch(str[7]) {
																case 'l':
																	switch(str[8]) {
																		case 'e':
																			switch(str[9]) {
																				case 0: return _execrable;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'r':
									switch(str[4]) {
										case 't':
											switch(str[5]) {
												case 'i':
													switch(str[6]) {
														case 'o':
															switch(str[7]) {
																case 'n':
																	switch(str[8]) {
																		case 0: return _exertion;
																	}
																	break;
															}
															break;
													}
													break;
												case 0: return _exert;
											}
											break;
									}
									break;
							}
							break;
						case 'a':
							switch(str[3]) {
								case 's':
									switch(str[4]) {
										case 'p':
											switch(str[5]) {
												case 'e':
													switch(str[6]) {
														case 'r':
															switch(str[7]) {
																case 'a':
																	switch(str[8]) {
																		case 't':
																			switch(str[9]) {
																				case 'e':
																					switch(str[10]) {
																						case 0: return _exasperate;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'l':
									switch(str[4]) {
										case 't':
											switch(str[5]) {
												case 0: return _exalt;
											}
											break;
									}
									break;
							}
							break;
						case 't':
							switch(str[3]) {
								case 'e':
									switch(str[4]) {
										case 'n':
											switch(str[5]) {
												case 'u':
													switch(str[6]) {
														case 'a':
															switch(str[7]) {
																case 't':
																	switch(str[8]) {
																		case 'e':
																			switch(str[9]) {
																				case 0: return _extenuate;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'o':
									switch(str[4]) {
										case 'r':
											switch(str[5]) {
												case 't':
													switch(str[6]) {
														case 0: return _extort;
													}
													break;
											}
											break;
										case 'l':
											switch(str[5]) {
												case 0: return _extol;
											}
											break;
									}
									break;
								case 'r':
									switch(str[4]) {
										case 'a':
											switch(str[5]) {
												case 'v':
													switch(str[6]) {
														case 'a':
															switch(str[7]) {
																case 'g':
																	switch(str[8]) {
																		case 'a':
																			switch(str[9]) {
																				case 'n':
																					switch(str[10]) {
																						case 't':
																							switch(str[11]) {
																								case 0: return _extravagant;
																							}
																							break;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'p':
							switch(str[3]) {
								case 'o':
									switch(str[4]) {
										case 's':
											switch(str[5]) {
												case 't':
													switch(str[6]) {
														case 'u':
															switch(str[7]) {
																case 'l':
																	switch(str[8]) {
																		case 'a':
																			switch(str[9]) {
																				case 't':
																					switch(str[10]) {
																						case 'i':
																							switch(str[11]) {
																								case 'o':
																									switch(str[12]) {
																										case 'n':
																											switch(str[13]) {
																												case 0: return _expostulation;
																											}
																											break;
																									}
																									break;
																							}
																							break;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'a':
									switch(str[4]) {
										case 't':
											switch(str[5]) {
												case 'i':
													switch(str[6]) {
														case 'a':
															switch(str[7]) {
																case 't':
																	switch(str[8]) {
																		case 'e':
																			switch(str[9]) {
																				case 0: return _expatiate;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'l':
									switch(str[4]) {
										case 'o':
											switch(str[5]) {
												case 'i':
													switch(str[6]) {
														case 't':
															switch(str[7]) {
																case 'a':
																	switch(str[8]) {
																		case 't':
																			switch(str[9]) {
																				case 'i':
																					switch(str[10]) {
																						case 'o':
																							switch(str[11]) {
																								case 'n':
																									switch(str[12]) {
																										case 0: return _exploitation;
																									}
																									break;
																							}
																							break;
																					}
																					break;
																			}
																			break;
																	}
																	break;
																case 0: return _exploit;
															}
															break;
													}
													break;
											}
											break;
										case 'i':
											switch(str[5]) {
												case 'c':
													switch(str[6]) {
														case 'a':
															switch(str[7]) {
																case 't':
																	switch(str[8]) {
																		case 'e':
																			switch(str[9]) {
																				case 0: return _explicate;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'i':
									switch(str[4]) {
										case 'a':
											switch(str[5]) {
												case 't':
													switch(str[6]) {
														case 'e':
															switch(str[7]) {
																case 0: return _expiate;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'i':
							switch(str[3]) {
								case 'g':
									switch(str[4]) {
										case 'e':
											switch(str[5]) {
												case 'n':
													switch(str[6]) {
														case 'c':
															switch(str[7]) {
																case 'y':
																	switch(str[8]) {
																		case 0: return _exigency;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'c':
							switch(str[3]) {
								case 'i':
									switch(str[4]) {
										case 's':
											switch(str[5]) {
												case 'e':
													switch(str[6]) {
														case 0: return _excise;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'o':
							switch(str[3]) {
								case 'r':
									switch(str[4]) {
										case 'b':
											switch(str[5]) {
												case 'i':
													switch(str[6]) {
														case 't':
															switch(str[7]) {
																case 'a':
																	switch(str[8]) {
																		case 'n':
																			switch(str[9]) {
																				case 't':
																					switch(str[10]) {
																						case 0: return _exorbitant;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'u':
					switch(str[2]) {
						case 'g':
							switch(str[3]) {
								case 'e':
									switch(str[4]) {
										case 'n':
											switch(str[5]) {
												case 'i':
													switch(str[6]) {
														case 'c':
															switch(str[7]) {
																case 0: return _eugenic;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'p':
							switch(str[3]) {
								case 'h':
									switch(str[4]) {
										case 'o':
											switch(str[5]) {
												case 'n':
													switch(str[6]) {
														case 'y':
															switch(str[7]) {
																case 0: return _euphony;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'l':
					switch(str[2]) {
						case 'a':
							switch(str[3]) {
								case 'b':
									switch(str[4]) {
										case 'o':
											switch(str[5]) {
												case 'r':
													switch(str[6]) {
														case 'a':
															switch(str[7]) {
																case 't':
																	switch(str[8]) {
																		case 'e':
																			switch(str[9]) {
																				case 0: return _elaborate;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'u':
							switch(str[3]) {
								case 'd':
									switch(str[4]) {
										case 'e':
											switch(str[5]) {
												case 0: return _elude;
											}
											break;
									}
									break;
							}
							break;
						case 'y':
							switch(str[3]) {
								case 's':
									switch(str[4]) {
										case 'i':
											switch(str[5]) {
												case 'a':
													switch(str[6]) {
														case 'n':
															switch(str[7]) {
																case 0: return _elysian;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'l':
							switch(str[3]) {
								case 'i':
									switch(str[4]) {
										case 'p':
											switch(str[5]) {
												case 's':
													switch(str[6]) {
														case 'i':
															switch(str[7]) {
																case 's':
																	switch(str[8]) {
																		case 0: return _ellipsis;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'n':
					switch(str[2]) {
						case 'g':
							switch(str[3]) {
								case 'a':
									switch(str[4]) {
										case 'g':
											switch(str[5]) {
												case 'e':
													switch(str[6]) {
														case 0: return _engage;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 't':
							switch(str[3]) {
								case 'o':
									switch(str[4]) {
										case 'm':
											switch(str[5]) {
												case 'o':
													switch(str[6]) {
														case 'l':
															switch(str[7]) {
																case 'o':
																	switch(str[8]) {
																		case 'g':
																			switch(str[9]) {
																				case 'y':
																					switch(str[10]) {
																						case 0: return _entomology;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'r':
									switch(str[4]) {
										case 'e':
											switch(str[5]) {
												case 'a':
													switch(str[6]) {
														case 't':
															switch(str[7]) {
																case 0: return _entreat;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'e':
									switch(str[4]) {
										case 'r':
											switch(str[5]) {
												case 't':
													switch(str[6]) {
														case 'a':
															switch(str[7]) {
																case 'i':
																	switch(str[8]) {
																		case 'n':
																			switch(str[9]) {
																				case 0: return _entertain;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'd':
							switch(str[3]) {
								case 'e':
									switch(str[4]) {
										case 'm':
											switch(str[5]) {
												case 'i':
													switch(str[6]) {
														case 'c':
															switch(str[7]) {
																case 0: return _endemic;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'u':
									switch(str[4]) {
										case 'r':
											switch(str[5]) {
												case 'i':
													switch(str[6]) {
														case 'n':
															switch(str[7]) {
																case 'g':
																	switch(str[8]) {
																		case 0: return _enduring;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
										case 'e':
											switch(str[5]) {
												case 0: return _endue;
											}
											break;
									}
									break;
								case 'o':
									switch(str[4]) {
										case 'w':
											switch(str[5]) {
												case 0: return _endow;
											}
											break;
									}
									break;
							}
							break;
						case 's':
							switch(str[3]) {
								case 'c':
									switch(str[4]) {
										case 'o':
											switch(str[5]) {
												case 'n':
													switch(str[6]) {
														case 'c':
															switch(str[7]) {
																case 'e':
																	switch(str[8]) {
																		case 0: return _ensconce;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'u':
									switch(str[4]) {
										case 'e':
											switch(str[5]) {
												case 0: return _ensue;
											}
											break;
									}
									break;
							}
							break;
						case 'j':
							switch(str[3]) {
								case 'o':
									switch(str[4]) {
										case 'i':
											switch(str[5]) {
												case 'n':
													switch(str[6]) {
														case 0: return _enjoin;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'i':
							switch(str[3]) {
								case 'g':
									switch(str[4]) {
										case 'm':
											switch(str[5]) {
												case 'a':
													switch(str[6]) {
														case 0: return _enigma;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'c':
							switch(str[3]) {
								case 'l':
									switch(str[4]) {
										case 'a':
											switch(str[5]) {
												case 'v':
													switch(str[6]) {
														case 'e':
															switch(str[7]) {
																case 0: return _enclave;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'r':
									switch(str[4]) {
										case 'o':
											switch(str[5]) {
												case 'a':
													switch(str[6]) {
														case 'c':
															switch(str[7]) {
																case 'h':
																	switch(str[8]) {
																		case 'm':
																			switch(str[9]) {
																				case 'e':
																					switch(str[10]) {
																						case 'n':
																							switch(str[11]) {
																								case 't':
																									switch(str[12]) {
																										case 0: return _encroachment;
																									}
																									break;
																							}
																							break;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'u':
									switch(str[4]) {
										case 'm':
											switch(str[5]) {
												case 'b':
													switch(str[6]) {
														case 'e':
															switch(str[7]) {
																case 'r':
																	switch(str[8]) {
																		case 0: return _encumber;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'r':
							switch(str[3]) {
								case 'a':
									switch(str[4]) {
										case 'p':
											switch(str[5]) {
												case 't':
													switch(str[6]) {
														case 'u':
															switch(str[7]) {
																case 'r':
																	switch(str[8]) {
																		case 'e':
																			switch(str[9]) {
																				case 0: return _enrapture;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'e':
							switch(str[3]) {
								case 'r':
									switch(str[4]) {
										case 'v':
											switch(str[5]) {
												case 'a':
													switch(str[6]) {
														case 't':
															switch(str[7]) {
																case 'e':
																	switch(str[8]) {
																		case 0: return _enervate;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'a':
							switch(str[3]) {
								case 'm':
									switch(str[4]) {
										case 'o':
											switch(str[5]) {
												case 'r':
													switch(str[6]) {
														case 0: return _enamor;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'm':
					switch(str[2]) {
						case 'o':
							switch(str[3]) {
								case 'l':
									switch(str[4]) {
										case 'u':
											switch(str[5]) {
												case 'm':
													switch(str[6]) {
														case 'e':
															switch(str[7]) {
																case 'n':
																	switch(str[8]) {
																		case 't':
																			switch(str[9]) {
																				case 0: return _emolument;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'b':
							switch(str[3]) {
								case 'o':
									switch(str[4]) {
										case 's':
											switch(str[5]) {
												case 's':
													switch(str[6]) {
														case 0: return _emboss;
													}
													break;
											}
											break;
									}
									break;
								case 'l':
									switch(str[4]) {
										case 'a':
											switch(str[5]) {
												case 'z':
													switch(str[6]) {
														case 'o':
															switch(str[7]) {
																case 'n':
																	switch(str[8]) {
																		case 0: return _emblazon;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'r':
									switch(str[4]) {
										case 'o':
											switch(str[5]) {
												case 'i':
													switch(str[6]) {
														case 'l':
															switch(str[7]) {
																case 0: return _embroil;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'e':
							switch(str[3]) {
								case 't':
									switch(str[4]) {
										case 'i':
											switch(str[5]) {
												case 'c':
													switch(str[6]) {
														case 0: return _emetic;
													}
													break;
											}
											break;
									}
									break;
								case 'n':
									switch(str[4]) {
										case 'd':
											switch(str[5]) {
												case 0: return _emend;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'r':
					switch(str[2]) {
						case 'o':
							switch(str[3]) {
								case 'd':
									switch(str[4]) {
										case 'e':
											switch(str[5]) {
												case 0: return _erode;
											}
											break;
									}
									break;
							}
							break;
						case 'r':
							switch(str[3]) {
								case 'a':
									switch(str[4]) {
										case 'n':
											switch(str[5]) {
												case 't':
													switch(str[6]) {
														case 0: return _errant;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 's':
							switch(str[3]) {
								case 't':
									switch(str[4]) {
										case 'w':
											switch(str[5]) {
												case 'h':
													switch(str[6]) {
														case 'i':
															switch(str[7]) {
																case 'l':
																	switch(str[8]) {
																		case 'e':
																			switch(str[9]) {
																				case 0: return _erstwhile;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'q':
					switch(str[2]) {
						case 'u':
							switch(str[3]) {
								case 'a':
									switch(str[4]) {
										case 'b':
											switch(str[5]) {
												case 'l':
													switch(str[6]) {
														case 'e':
															switch(str[7]) {
																case 0: return _equable;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'v':
					switch(str[2]) {
						case 'i':
							switch(str[3]) {
								case 'd':
									switch(str[4]) {
										case 'e':
											switch(str[5]) {
												case 'n':
													switch(str[6]) {
														case 't':
															switch(str[7]) {
																case 0: return _evident;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'a':
							switch(str[3]) {
								case 'n':
									switch(str[4]) {
										case 'e':
											switch(str[5]) {
												case 's':
													switch(str[6]) {
														case 'c':
															switch(str[7]) {
																case 'e':
																	switch(str[8]) {
																		case 'n':
																			switch(str[9]) {
																				case 't':
																					switch(str[10]) {
																						case 0: return _evanescent;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'g':
					switch(str[2]) {
						case 'r':
							switch(str[3]) {
								case 'e':
									switch(str[4]) {
										case 'g':
											switch(str[5]) {
												case 'i':
													switch(str[6]) {
														case 'o':
															switch(str[7]) {
																case 'u':
																	switch(str[8]) {
																		case 's':
																			switch(str[9]) {
																				case 0: return _egregious;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 's':
					switch(str[2]) {
						case 't':
							switch(str[3]) {
								case 'r':
									switch(str[4]) {
										case 'a':
											switch(str[5]) {
												case 'n':
													switch(str[6]) {
														case 'g':
															switch(str[7]) {
																case 'e':
																	switch(str[8]) {
																		case 0: return _estrange;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'e':
									switch(str[4]) {
										case 'e':
											switch(str[5]) {
												case 'm':
													switch(str[6]) {
														case 0: return _esteem;
													}
													break;
											}
											break;
									}
									break;
								case 'a':
									switch(str[4]) {
										case 'b':
											switch(str[5]) {
												case 'l':
													switch(str[6]) {
														case 'i':
															switch(str[7]) {
																case 's':
																	switch(str[8]) {
																		case 'h':
																			switch(str[9]) {
																				case 0: return _establish;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'p':
							switch(str[3]) {
								case 'o':
									switch(str[4]) {
										case 'u':
											switch(str[5]) {
												case 's':
													switch(str[6]) {
														case 'e':
															switch(str[7]) {
																case 0: return _espouse;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'c':
							switch(str[3]) {
								case 'h':
									switch(str[4]) {
										case 'e':
											switch(str[5]) {
												case 'w':
													switch(str[6]) {
														case 0: return _eschew;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'd':
					switch(str[2]) {
						case 'i':
							switch(str[3]) {
								case 'c':
									switch(str[4]) {
										case 't':
											switch(str[5]) {
												case 0: return _edict;
											}
											break;
									}
									break;
								case 'f':
									switch(str[4]) {
										case 'i':
											switch(str[5]) {
												case 'c':
													switch(str[6]) {
														case 'e':
															switch(str[7]) {
																case 0: return _edifice;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'b':
					switch(str[2]) {
						case 'b':
							switch(str[3]) {
								case 0: return _ebb;
							}
							break;
					}
					break;
				case 'a':
					switch(str[2]) {
						case 'r':
							switch(str[3]) {
								case 'n':
									switch(str[4]) {
										case 'e':
											switch(str[5]) {
												case 's':
													switch(str[6]) {
														case 't':
															switch(str[7]) {
																case 0: return _earnest;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
			}
			break;
		case 'p':
			switch(str[1]) {
				case 'a':
					switch(str[2]) {
						case 's':
							switch(str[3]) {
								case 's':
									switch(str[4]) {
										case 'a':
											switch(str[5]) {
												case 'g':
													switch(str[6]) {
														case 'e':
															switch(str[7]) {
																case 0: return _passage;
															}
															break;
													}
													break;
											}
											break;
										case 'e':
											switch(str[5]) {
												case 0: return _passe;
											}
											break;
									}
									break;
								case 't':
									switch(str[4]) {
										case 'o':
											switch(str[5]) {
												case 'r':
													switch(str[6]) {
														case 'a':
															switch(str[7]) {
																case 'l':
																	switch(str[8]) {
																		case 0: return _pastoral;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'r':
							switch(str[3]) {
								case 's':
									switch(str[4]) {
										case 'i':
											switch(str[5]) {
												case 'm':
													switch(str[6]) {
														case 'o':
															switch(str[7]) {
																case 'n':
																	switch(str[8]) {
																		case 'i':
																			switch(str[9]) {
																				case 'o':
																					switch(str[10]) {
																						case 'u':
																							switch(str[11]) {
																								case 's':
																									switch(str[12]) {
																										case 0: return _parsimonious;
																									}
																									break;
																							}
																							break;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'a':
									switch(str[4]) {
										case 'b':
											switch(str[5]) {
												case 'l':
													switch(str[6]) {
														case 'e':
															switch(str[7]) {
																case 0: return _parable;
															}
															break;
													}
													break;
											}
											break;
										case 'p':
											switch(str[5]) {
												case 'h':
													switch(str[6]) {
														case 'e':
															switch(str[7]) {
																case 'r':
																	switch(str[8]) {
																		case 'n':
																			switch(str[9]) {
																				case 'a':
																					switch(str[10]) {
																						case 'l':
																							switch(str[11]) {
																								case 'i':
																									switch(str[12]) {
																										case 'a':
																											switch(str[13]) {
																												case 0: return _paraphernalia;
																											}
																											break;
																									}
																									break;
																							}
																							break;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'o':
									switch(str[4]) {
										case 'c':
											switch(str[5]) {
												case 'h':
													switch(str[6]) {
														case 'i':
															switch(str[7]) {
																case 'a':
																	switch(str[8]) {
																		case 'l':
																			switch(str[9]) {
																				case 0: return _parochial;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 't':
									switch(str[4]) {
										case 'i':
											switch(str[5]) {
												case 'a':
													switch(str[6]) {
														case 'l':
															switch(str[7]) {
																case 'i':
																	switch(str[8]) {
																		case 't':
																			switch(str[9]) {
																				case 'y':
																					switch(str[10]) {
																						case 0: return _partiality;
																					}
																					break;
																			}
																			break;
																	}
																	break;
																case 0: return _partial;
															}
															break;
													}
													break;
												case 's':
													switch(str[6]) {
														case 'a':
															switch(str[7]) {
																case 'n':
																	switch(str[8]) {
																		case 0: return _partisan;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'r':
									switch(str[4]) {
										case 'y':
											switch(str[5]) {
												case 0: return _parry;
											}
											break;
									}
									break;
								case 'i':
									switch(str[4]) {
										case 't':
											switch(str[5]) {
												case 'y':
													switch(str[6]) {
														case 0: return _parity;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'c':
							switch(str[3]) {
								case 'i':
									switch(str[4]) {
										case 'f':
											switch(str[5]) {
												case 'i':
													switch(str[6]) {
														case 's':
															switch(str[7]) {
																case 't':
																	switch(str[8]) {
																		case 0: return _pacifist;
																	}
																	break;
															}
															break;
													}
													break;
												case 'y':
													switch(str[6]) {
														case 0: return _pacify;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'l':
							switch(str[3]) {
								case 'a':
									switch(str[4]) {
										case 't':
											switch(str[5]) {
												case 'i':
													switch(str[6]) {
														case 'a':
															switch(str[7]) {
																case 'l':
																	switch(str[8]) {
																		case 0: return _palatial;
																	}
																	break;
															}
															break;
													}
													break;
												case 'a':
													switch(str[6]) {
														case 'b':
															switch(str[7]) {
																case 'l':
																	switch(str[8]) {
																		case 'e':
																			switch(str[9]) {
																				case 0: return _palatable;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'l':
									switch(str[4]) {
										case 0: return _pall;
										case 'i':
											switch(str[5]) {
												case 'a':
													switch(str[6]) {
														case 't':
															switch(str[7]) {
																case 'e':
																	switch(str[8]) {
																		case 0: return _palliate;
																	}
																	break;
															}
															break;
													}
													break;
												case 'd':
													switch(str[6]) {
														case 0: return _pallid;
													}
													break;
											}
											break;
									}
									break;
								case 'p':
									switch(str[4]) {
										case 'i':
											switch(str[5]) {
												case 't':
													switch(str[6]) {
														case 'a':
															switch(str[7]) {
																case 't':
																	switch(str[8]) {
																		case 'e':
																			switch(str[9]) {
																				case 0: return _palpitate;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 't':
							switch(str[3]) {
								case 'h':
									switch(str[4]) {
										case 'o':
											switch(str[5]) {
												case 'l':
													switch(str[6]) {
														case 'o':
															switch(str[7]) {
																case 'g':
																	switch(str[8]) {
																		case 'i':
																			switch(str[9]) {
																				case 'c':
																					switch(str[10]) {
																						case 'a':
																							switch(str[11]) {
																								case 'l':
																									switch(str[12]) {
																										case 0: return _pathological;
																									}
																									break;
																							}
																							break;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'r':
									switch(str[4]) {
										case 'o':
											switch(str[5]) {
												case 'n':
													switch(str[6]) {
														case 'i':
															switch(str[7]) {
																case 'z':
																	switch(str[8]) {
																		case 'e':
																			switch(str[9]) {
																				case 0: return _patronize;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
										case 'i':
											switch(str[5]) {
												case 'c':
													switch(str[6]) {
														case 'i':
															switch(str[7]) {
																case 'a':
																	switch(str[8]) {
																		case 'n':
																			switch(str[9]) {
																				case 0: return _patrician;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'o':
					switch(str[2]) {
						case 'l':
							switch(str[3]) {
								case 'e':
									switch(str[4]) {
										case 'm':
											switch(str[5]) {
												case 'i':
													switch(str[6]) {
														case 'c':
															switch(str[7]) {
																case 'a':
																	switch(str[8]) {
																		case 'l':
																			switch(str[9]) {
																				case 0: return _polemical;
																			}
																			break;
																	}
																	break;
																case 0: return _polemic;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'i':
									switch(str[4]) {
										case 'c':
											switch(str[5]) {
												case 'y':
													switch(str[6]) {
														case 0: return _policy;
													}
													break;
											}
											break;
										case 't':
											switch(str[5]) {
												case 'y':
													switch(str[6]) {
														case 0: return _polity;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'm':
							switch(str[3]) {
								case 'p':
									switch(str[4]) {
										case 0: return _pomp;
									}
									break;
							}
							break;
						case 'd':
							switch(str[3]) {
								case 'i':
									switch(str[4]) {
										case 'u':
											switch(str[5]) {
												case 'm':
													switch(str[6]) {
														case 0: return _podium;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 's':
							switch(str[3]) {
								case 't':
									switch(str[4]) {
										case 'u':
											switch(str[5]) {
												case 'l':
													switch(str[6]) {
														case 'a':
															switch(str[7]) {
																case 't':
																	switch(str[8]) {
																		case 'e':
																			switch(str[9]) {
																				case 0: return _postulate;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'n':
							switch(str[3]) {
								case 't':
									switch(str[4]) {
										case 'i':
											switch(str[5]) {
												case 'f':
													switch(str[6]) {
														case 'i':
															switch(str[7]) {
																case 'c':
																	switch(str[8]) {
																		case 'a':
																			switch(str[9]) {
																				case 'l':
																					switch(str[10]) {
																						case 0: return _pontifical;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'i':
							switch(str[3]) {
								case 'g':
									switch(str[4]) {
										case 'n':
											switch(str[5]) {
												case 'a':
													switch(str[6]) {
														case 'n':
															switch(str[7]) {
																case 'c':
																	switch(str[8]) {
																		case 'y':
																			switch(str[9]) {
																				case 0: return _poignancy;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'e':
					switch(str[2]) {
						case 'r':
							switch(str[3]) {
								case 'o':
									switch(str[4]) {
										case 'r':
											switch(str[5]) {
												case 'a':
													switch(str[6]) {
														case 't':
															switch(str[7]) {
																case 'i':
																	switch(str[8]) {
																		case 'o':
																			switch(str[9]) {
																				case 'n':
																					switch(str[10]) {
																						case 0: return _peroration;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 's':
									switch(str[4]) {
										case 'i':
											switch(str[5]) {
												case 's':
													switch(str[6]) {
														case 't':
															switch(str[7]) {
																case 0: return _persist;
															}
															break;
													}
													break;
											}
											break;
										case 'p':
											switch(str[5]) {
												case 'i':
													switch(str[6]) {
														case 'c':
															switch(str[7]) {
																case 'u':
																	switch(str[8]) {
																		case 'o':
																			switch(str[9]) {
																				case 'u':
																					switch(str[10]) {
																						case 's':
																							switch(str[11]) {
																								case 0: return _perspicuous;
																							}
																							break;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 't':
									switch(str[4]) {
										case 0: return _pert;
										case 'i':
											switch(str[5]) {
												case 'n':
													switch(str[6]) {
														case 'a':
															switch(str[7]) {
																case 'c':
																	switch(str[8]) {
																		case 'i':
																			switch(str[9]) {
																				case 'o':
																					switch(str[10]) {
																						case 'u':
																							switch(str[11]) {
																								case 's':
																									switch(str[12]) {
																										case 0: return _pertinacious;
																									}
																									break;
																							}
																							break;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'f':
									switch(str[4]) {
										case 'i':
											switch(str[5]) {
												case 'd':
													switch(str[6]) {
														case 'i':
															switch(str[7]) {
																case 'o':
																	switch(str[8]) {
																		case 'u':
																			switch(str[9]) {
																				case 's':
																					switch(str[10]) {
																						case 0: return _perfidious;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'm':
									switch(str[4]) {
										case 'e':
											switch(str[5]) {
												case 'a':
													switch(str[6]) {
														case 't':
															switch(str[7]) {
																case 'e':
																	switch(str[8]) {
																		case 0: return _permeate;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'e':
									switch(str[4]) {
										case 'm':
											switch(str[5]) {
												case 'p':
													switch(str[6]) {
														case 't':
															switch(str[7]) {
																case 'o':
																	switch(str[8]) {
																		case 'r':
																			switch(str[9]) {
																				case 'y':
																					switch(str[10]) {
																						case 0: return _peremptory;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'p':
									switch(str[4]) {
										case 'e':
											switch(str[5]) {
												case 't':
													switch(str[6]) {
														case 'u':
															switch(str[7]) {
																case 'a':
																	switch(str[8]) {
																		case 'l':
																			switch(str[9]) {
																				case 0: return _perpetual;
																			}
																			break;
																	}
																	break;
															}
															break;
														case 'r':
															switch(str[7]) {
																case 'a':
																	switch(str[8]) {
																		case 't':
																			switch(str[9]) {
																				case 'e':
																					switch(str[10]) {
																						case 0: return _perpetrate;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'v':
									switch(str[4]) {
										case 'a':
											switch(str[5]) {
												case 'd':
													switch(str[6]) {
														case 'e':
															switch(str[7]) {
																case 0: return _pervade;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'i':
									switch(str[4]) {
										case 's':
											switch(str[5]) {
												case 'h':
													switch(str[6]) {
														case 0: return _perish;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 't':
							switch(str[3]) {
								case 'u':
									switch(str[4]) {
										case 'l':
											switch(str[5]) {
												case 'a':
													switch(str[6]) {
														case 'n':
															switch(str[7]) {
																case 't':
																	switch(str[8]) {
																		case 0: return _petulant;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'd':
							switch(str[3]) {
								case 'a':
									switch(str[4]) {
										case 'n':
											switch(str[5]) {
												case 't':
													switch(str[6]) {
														case 'i':
															switch(str[7]) {
																case 'c':
																	switch(str[8]) {
																		case 0: return _pedantic;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
										case 'g':
											switch(str[5]) {
												case 'o':
													switch(str[6]) {
														case 'g':
															switch(str[7]) {
																case 'u':
																	switch(str[8]) {
																		case 'e':
																			switch(str[9]) {
																				case 0: return _pedagogue;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'n':
							switch(str[3]) {
								case 'd':
									switch(str[4]) {
										case 'u':
											switch(str[5]) {
												case 'l':
													switch(str[6]) {
														case 'o':
															switch(str[7]) {
																case 'u':
																	switch(str[8]) {
																		case 's':
																			switch(str[9]) {
																				case 0: return _pendulous;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'c':
									switch(str[4]) {
										case 'h':
											switch(str[5]) {
												case 'a':
													switch(str[6]) {
														case 'n':
															switch(str[7]) {
																case 't':
																	switch(str[8]) {
																		case 0: return _penchant;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'o':
							switch(str[3]) {
								case 'n':
									switch(str[4]) {
										case 0: return _peon;
									}
									break;
							}
							break;
						case 'l':
							switch(str[3]) {
								case 'l':
									switch(str[4]) {
										case 'u':
											switch(str[5]) {
												case 'c':
													switch(str[6]) {
														case 'i':
															switch(str[7]) {
																case 'd':
																	switch(str[8]) {
																		case 0: return _pellucid;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'r':
					switch(str[2]) {
						case 'a':
							switch(str[3]) {
								case 't':
									switch(str[4]) {
										case 't':
											switch(str[5]) {
												case 'l':
													switch(str[6]) {
														case 'e':
															switch(str[7]) {
																case 0: return _prattle;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'c':
									switch(str[4]) {
										case 't':
											switch(str[5]) {
												case 'i':
													switch(str[6]) {
														case 'c':
															switch(str[7]) {
																case 'e':
																	switch(str[8]) {
																		case 0: return _practice;
																	}
																	break;
															}
															break;
														case 't':
															switch(str[7]) {
																case 'i':
																	switch(str[8]) {
																		case 'o':
																			switch(str[9]) {
																				case 'n':
																					switch(str[10]) {
																						case 'e':
																							switch(str[11]) {
																								case 'r':
																									switch(str[12]) {
																										case 0: return _practitioner;
																									}
																									break;
																							}
																							break;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'o':
							switch(str[3]) {
								case 'c':
									switch(str[4]) {
										case 'e':
											switch(str[5]) {
												case 'd':
													switch(str[6]) {
														case 'u':
															switch(str[7]) {
																case 'r':
																	switch(str[8]) {
																		case 'a':
																			switch(str[9]) {
																				case 'l':
																					switch(str[10]) {
																						case 0: return _procedural;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
												case 'e':
													switch(str[6]) {
														case 'd':
															switch(str[7]) {
																case 's':
																	switch(str[8]) {
																		case 0: return _proceeds;
																	}
																	break;
																case 'i':
																	switch(str[8]) {
																		case 'n':
																			switch(str[9]) {
																				case 'g':
																					switch(str[10]) {
																						case 0: return _proceeding;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
										case 'l':
											switch(str[5]) {
												case 'i':
													switch(str[6]) {
														case 'v':
															switch(str[7]) {
																case 'i':
																	switch(str[8]) {
																		case 't':
																			switch(str[9]) {
																				case 'y':
																					switch(str[10]) {
																						case 0: return _proclivity;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'v':
									switch(str[4]) {
										case 'o':
											switch(str[5]) {
												case 'k':
													switch(str[6]) {
														case 'e':
															switch(str[7]) {
																case 0: return _provoke;
															}
															break;
													}
													break;
											}
											break;
										case 'e':
											switch(str[5]) {
												case 'n':
													switch(str[6]) {
														case 'd':
															switch(str[7]) {
																case 'e':
																	switch(str[8]) {
																		case 'r':
																			switch(str[9]) {
																				case 0: return _provender;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'l':
									switch(str[4]) {
										case 'e':
											switch(str[5]) {
												case 't':
													switch(str[6]) {
														case 'a':
															switch(str[7]) {
																case 'r':
																	switch(str[8]) {
																		case 'i':
																			switch(str[9]) {
																				case 'a':
																					switch(str[10]) {
																						case 'n':
																							switch(str[11]) {
																								case 0: return _proletarian;
																							}
																							break;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'g':
									switch(str[4]) {
										case 'n':
											switch(str[5]) {
												case 'o':
													switch(str[6]) {
														case 's':
															switch(str[7]) {
																case 't':
																	switch(str[8]) {
																		case 'i':
																			switch(str[9]) {
																				case 'c':
																					switch(str[10]) {
																						case 'a':
																							switch(str[11]) {
																								case 't':
																									switch(str[12]) {
																										case 'e':
																											switch(str[13]) {
																												case 0: return _prognosticate;
																											}
																											break;
																									}
																									break;
																							}
																							break;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'x':
									switch(str[4]) {
										case 'y':
											switch(str[5]) {
												case 0: return _proxy;
											}
											break;
									}
									break;
								case 'm':
									switch(str[4]) {
										case 'i':
											switch(str[5]) {
												case 's':
													switch(str[6]) {
														case 'c':
															switch(str[7]) {
																case 'u':
																	switch(str[8]) {
																		case 'o':
																			switch(str[9]) {
																				case 'u':
																					switch(str[10]) {
																						case 's':
																							switch(str[11]) {
																								case 0: return _promiscuous;
																							}
																							break;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'p':
									switch(str[4]) {
										case 'e':
											switch(str[5]) {
												case 'n':
													switch(str[6]) {
														case 's':
															switch(str[7]) {
																case 'i':
																	switch(str[8]) {
																		case 't':
																			switch(str[9]) {
																				case 'y':
																					switch(str[10]) {
																						case 0: return _propensity;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
												case 'r':
													switch(str[6]) {
														case 't':
															switch(str[7]) {
																case 'y':
																	switch(str[8]) {
																		case 0: return _property;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
										case 'r':
											switch(str[5]) {
												case 'i':
													switch(str[6]) {
														case 'e':
															switch(str[7]) {
																case 't':
																	switch(str[8]) {
																		case 'y':
																			switch(str[9]) {
																				case 0: return _propriety;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
										case 'i':
											switch(str[5]) {
												case 't':
													switch(str[6]) {
														case 'i':
															switch(str[7]) {
																case 'a':
																	switch(str[8]) {
																		case 't':
																			switch(str[9]) {
																				case 'e':
																					switch(str[10]) {
																						case 0: return _propitiate;
																					}
																					break;
																			}
																			break;
																	}
																	break;
																case 'o':
																	switch(str[8]) {
																		case 'u':
																			switch(str[9]) {
																				case 's':
																					switch(str[10]) {
																						case 0: return _propitious;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 's':
									switch(str[4]) {
										case 'p':
											switch(str[5]) {
												case 'e':
													switch(str[6]) {
														case 'c':
															switch(str[7]) {
																case 't':
																	switch(str[8]) {
																		case 'i':
																			switch(str[9]) {
																				case 'v':
																					switch(str[10]) {
																						case 'e':
																							switch(str[11]) {
																								case 0: return _prospective;
																							}
																							break;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'w':
									switch(str[4]) {
										case 'e':
											switch(str[5]) {
												case 's':
													switch(str[6]) {
														case 's':
															switch(str[7]) {
																case 0: return _prowess;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'j':
									switch(str[4]) {
										case 'e':
											switch(str[5]) {
												case 'c':
													switch(str[6]) {
														case 't':
															switch(str[7]) {
																case 'i':
																	switch(str[8]) {
																		case 'o':
																			switch(str[9]) {
																				case 'n':
																					switch(str[10]) {
																						case 0: return _projection;
																					}
																					break;
																			}
																			break;
																	}
																	break;
																case 0: return _project;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'e':
							switch(str[3]) {
								case 'e':
									switch(str[4]) {
										case 'n':
											switch(str[5]) {
												case 0: return _preen;
											}
											break;
									}
									break;
								case 't':
									switch(str[4]) {
										case 'e':
											switch(str[5]) {
												case 'r':
													switch(str[6]) {
														case 'n':
															switch(str[7]) {
																case 'a':
																	switch(str[8]) {
																		case 't':
																			switch(str[9]) {
																				case 'u':
																					switch(str[10]) {
																						case 'r':
																							switch(str[11]) {
																								case 'a':
																									switch(str[12]) {
																										case 'l':
																											switch(str[13]) {
																												case 0: return _preternatural;
																											}
																											break;
																									}
																									break;
																							}
																							break;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'c':
									switch(str[4]) {
										case 'i':
											switch(str[5]) {
												case 's':
													switch(str[6]) {
														case 'i':
															switch(str[7]) {
																case 'o':
																	switch(str[8]) {
																		case 'n':
																			switch(str[9]) {
																				case 0: return _precision;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
										case 'e':
											switch(str[5]) {
												case 'p':
													switch(str[6]) {
														case 't':
															switch(str[7]) {
																case 0: return _precept;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'm':
									switch(str[4]) {
										case 'i':
											switch(str[5]) {
												case 's':
													switch(str[6]) {
														case 'e':
															switch(str[7]) {
																case 0: return _premise;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'd':
									switch(str[4]) {
										case 'e':
											switch(str[5]) {
												case 'c':
													switch(str[6]) {
														case 'e':
															switch(str[7]) {
																case 's':
																	switch(str[8]) {
																		case 's':
																			switch(str[9]) {
																				case 'o':
																					switch(str[10]) {
																						case 'r':
																							switch(str[11]) {
																								case 0: return _predecessor;
																							}
																							break;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'u':
							switch(str[3]) {
								case 'd':
									switch(str[4]) {
										case 'e':
											switch(str[5]) {
												case 0: return _prude;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'l':
					switch(str[2]) {
						case 'e':
							switch(str[3]) {
								case 'n':
									switch(str[4]) {
										case 'i':
											switch(str[5]) {
												case 't':
													switch(str[6]) {
														case 'u':
															switch(str[7]) {
																case 'd':
																	switch(str[8]) {
																		case 'e':
																			switch(str[9]) {
																				case 0: return _plenitude;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'a':
									switch(str[4]) {
										case 'd':
											switch(str[5]) {
												case 0: return _plead;
											}
											break;
									}
									break;
							}
							break;
						case 'u':
							switch(str[3]) {
								case 'm':
									switch(str[4]) {
										case 'b':
											switch(str[5]) {
												case 0: return _plumb;
											}
											break;
									}
									break;
								case 's':
									switch(str[4]) {
										case 0: return _plus;
									}
									break;
							}
							break;
						case 'a':
							switch(str[3]) {
								case 'c':
									switch(str[4]) {
										case 'a':
											switch(str[5]) {
												case 't':
													switch(str[6]) {
														case 'e':
															switch(str[7]) {
																case 0: return _placate;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 't':
									switch(str[4]) {
										case 'i':
											switch(str[5]) {
												case 't':
													switch(str[6]) {
														case 'u':
															switch(str[7]) {
																case 'd':
																	switch(str[8]) {
																		case 'e':
																			switch(str[9]) {
																				case 0: return _platitude;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'u':
					switch(str[2]) {
						case 'r':
							switch(str[3]) {
								case 'v':
									switch(str[4]) {
										case 'e':
											switch(str[5]) {
												case 'y':
													switch(str[6]) {
														case 0: return _purvey;
													}
													break;
											}
											break;
									}
									break;
								case 'p':
									switch(str[4]) {
										case 'o':
											switch(str[5]) {
												case 'r':
													switch(str[6]) {
														case 't':
															switch(str[7]) {
																case 0: return _purport;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 's':
									switch(str[4]) {
										case 'e':
											switch(str[5]) {
												case 0: return _purse;
											}
											break;
									}
									break;
							}
							break;
						case 'c':
							switch(str[3]) {
								case 'k':
									switch(str[4]) {
										case 'e':
											switch(str[5]) {
												case 'r':
													switch(str[6]) {
														case 0: return _pucker;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'n':
							switch(str[3]) {
								case 'd':
									switch(str[4]) {
										case 'i':
											switch(str[5]) {
												case 't':
													switch(str[6]) {
														case 0: return _pundit;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'i':
							switch(str[3]) {
								case 's':
									switch(str[4]) {
										case 's':
											switch(str[5]) {
												case 'a':
													switch(str[6]) {
														case 'n':
															switch(str[7]) {
																case 't':
																	switch(str[8]) {
																		case 0: return _puissant;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 's':
							switch(str[3]) {
								case 'i':
									switch(str[4]) {
										case 'l':
											switch(str[5]) {
												case 'l':
													switch(str[6]) {
														case 'a':
															switch(str[7]) {
																case 'n':
																	switch(str[8]) {
																		case 'i':
																			switch(str[9]) {
																				case 'm':
																					switch(str[10]) {
																						case 'o':
																							switch(str[11]) {
																								case 'u':
																									switch(str[12]) {
																										case 's':
																											switch(str[13]) {
																												case 0: return _pusillanimous;
																											}
																											break;
																									}
																									break;
																							}
																							break;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'm':
							switch(str[3]) {
								case 'm':
									switch(str[4]) {
										case 'e':
											switch(str[5]) {
												case 'l':
													switch(str[6]) {
														case 0: return _pummel;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'i':
					switch(str[2]) {
						case 'o':
							switch(str[3]) {
								case 'u':
									switch(str[4]) {
										case 's':
											switch(str[5]) {
												case 0: return _pious;
											}
											break;
									}
									break;
							}
							break;
						case 'l':
							switch(str[3]) {
								case 'f':
									switch(str[4]) {
										case 'e':
											switch(str[5]) {
												case 'r':
													switch(str[6]) {
														case 0: return _pilfer;
													}
													break;
											}
											break;
									}
									break;
								case 'l':
									switch(str[4]) {
										case 'a':
											switch(str[5]) {
												case 'g':
													switch(str[6]) {
														case 'e':
															switch(str[7]) {
																case 0: return _pillage;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'q':
							switch(str[3]) {
								case 'u':
									switch(str[4]) {
										case 'e':
											switch(str[5]) {
												case 0: return _pique;
											}
											break;
									}
									break;
							}
							break;
						case 'n':
							switch(str[3]) {
								case 'i':
									switch(str[4]) {
										case 'o':
											switch(str[5]) {
												case 'n':
													switch(str[6]) {
														case 0: return _pinion;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 't':
							switch(str[3]) {
								case 'h':
									switch(str[4]) {
										case 'y':
											switch(str[5]) {
												case 0: return _pithy;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'h':
					switch(str[2]) {
						case 'i':
							switch(str[3]) {
								case 'l':
									switch(str[4]) {
										case 'o':
											switch(str[5]) {
												case 'l':
													switch(str[6]) {
														case 'o':
															switch(str[7]) {
																case 'g':
																	switch(str[8]) {
																		case 'y':
																			switch(str[9]) {
																				case 0: return _philology;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
												case 's':
													switch(str[6]) {
														case 'o':
															switch(str[7]) {
																case 'p':
																	switch(str[8]) {
																		case 'h':
																			switch(str[9]) {
																				case 'i':
																					switch(str[10]) {
																						case 'c':
																							switch(str[11]) {
																								case 'a':
																									switch(str[12]) {
																										case 'l':
																											switch(str[13]) {
																												case 0: return _philosophical;
																											}
																											break;
																									}
																									break;
																							}
																							break;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'l':
							switch(str[3]) {
								case 'e':
									switch(str[4]) {
										case 'g':
											switch(str[5]) {
												case 'm':
													switch(str[6]) {
														case 'a':
															switch(str[7]) {
																case 't':
																	switch(str[8]) {
																		case 'i':
																			switch(str[9]) {
																				case 'c':
																					switch(str[10]) {
																						case 0: return _phlegmatic;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
			}
			break;
		case 'i':
			switch(str[1]) {
				case 'n':
					switch(str[2]) {
						case 't':
							switch(str[3]) {
								case 'e':
									switch(str[4]) {
										case 'n':
											switch(str[5]) {
												case 'd':
													switch(str[6]) {
														case 0: return _intend;
													}
													break;
											}
											break;
										case 'r':
											switch(str[5]) {
												case 'p':
													switch(str[6]) {
														case 'o':
															switch(str[7]) {
																case 'l':
																	switch(str[8]) {
																		case 'a':
																			switch(str[9]) {
																				case 't':
																					switch(str[10]) {
																						case 'e':
																							switch(str[11]) {
																								case 0: return _interpolate;
																							}
																							break;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
												case 'd':
													switch(str[6]) {
														case 'i':
															switch(str[7]) {
																case 'c':
																	switch(str[8]) {
																		case 't':
																			switch(str[9]) {
																				case 0: return _interdict;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
												case 'm':
													switch(str[6]) {
														case 'i':
															switch(str[7]) {
																case 'n':
																	switch(str[8]) {
																		case 'a':
																			switch(str[9]) {
																				case 'b':
																					switch(str[10]) {
																						case 'l':
																							switch(str[11]) {
																								case 'e':
																									switch(str[12]) {
																										case 0: return _interminable;
																									}
																									break;
																							}
																							break;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'r':
									switch(str[4]) {
										case 'i':
											switch(str[5]) {
												case 'g':
													switch(str[6]) {
														case 'u':
															switch(str[7]) {
																case 'e':
																	switch(str[8]) {
																		case 0: return _intrigue;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
										case 'e':
											switch(str[5]) {
												case 'p':
													switch(str[6]) {
														case 'i':
															switch(str[7]) {
																case 'd':
																	switch(str[8]) {
																		case 0: return _intrepid;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'i':
									switch(str[4]) {
										case 'm':
											switch(str[5]) {
												case 'a':
													switch(str[6]) {
														case 't':
															switch(str[7]) {
																case 'e':
																	switch(str[8]) {
																		case 0: return _intimate;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 's':
							switch(str[3]) {
								case 'e':
									switch(str[4]) {
										case 'n':
											switch(str[5]) {
												case 's':
													switch(str[6]) {
														case 'a':
															switch(str[7]) {
																case 't':
																	switch(str[8]) {
																		case 'e':
																			switch(str[9]) {
																				case 0: return _insensate;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'c':
									switch(str[4]) {
										case 'r':
											switch(str[5]) {
												case 'u':
													switch(str[6]) {
														case 't':
															switch(str[7]) {
																case 'a':
																	switch(str[8]) {
																		case 'b':
																			switch(str[9]) {
																				case 'l':
																					switch(str[10]) {
																						case 'e':
																							switch(str[11]) {
																								case 0: return _inscrutable;
																							}
																							break;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'i':
									switch(str[4]) {
										case 's':
											switch(str[5]) {
												case 't':
													switch(str[6]) {
														case 0: return _insist;
													}
													break;
											}
											break;
										case 'n':
											switch(str[5]) {
												case 'u':
													switch(str[6]) {
														case 'a':
															switch(str[7]) {
																case 't':
																	switch(str[8]) {
																		case 'e':
																			switch(str[9]) {
																				case 0: return _insinuate;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'u':
									switch(str[4]) {
										case 'r':
											switch(str[5]) {
												case 'g':
													switch(str[6]) {
														case 'e':
															switch(str[7]) {
																case 'n':
																	switch(str[8]) {
																		case 't':
																			switch(str[9]) {
																				case 0: return _insurgent;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'p':
									switch(str[4]) {
										case 'i':
											switch(str[5]) {
												case 'r':
													switch(str[6]) {
														case 'e':
															switch(str[7]) {
																case 0: return _inspire;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 't':
									switch(str[4]) {
										case 'a':
											switch(str[5]) {
												case 'n':
													switch(str[6]) {
														case 'c':
															switch(str[7]) {
																case 'e':
																	switch(str[8]) {
																		case 0: return _instance;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
										case 'i':
											switch(str[5]) {
												case 't':
													switch(str[6]) {
														case 'u':
															switch(str[7]) {
																case 't':
																	switch(str[8]) {
																		case 'e':
																			switch(str[9]) {
																				case 0: return _institute;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'c':
							switch(str[3]) {
								case 'o':
									switch(str[4]) {
										case 'n':
											switch(str[5]) {
												case 's':
													switch(str[6]) {
														case 'e':
															switch(str[7]) {
																case 'q':
																	switch(str[8]) {
																		case 'u':
																			switch(str[9]) {
																				case 'e':
																					switch(str[10]) {
																						case 'n':
																							switch(str[11]) {
																								case 't':
																									switch(str[12]) {
																										case 'i':
																											switch(str[13]) {
																												case 'a':
																													switch(str[14]) {
																														case 'l':
																															switch(str[15]) {
																																case 0: return _inconsequential;
																															}
																															break;
																													}
																													break;
																											}
																											break;
																									}
																									break;
																							}
																							break;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
												case 'g':
													switch(str[6]) {
														case 'r':
															switch(str[7]) {
																case 'u':
																	switch(str[8]) {
																		case 'i':
																			switch(str[9]) {
																				case 't':
																					switch(str[10]) {
																						case 'y':
																							switch(str[11]) {
																								case 0: return _incongruity;
																							}
																							break;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
										case 'r':
											switch(str[5]) {
												case 'r':
													switch(str[6]) {
														case 'i':
															switch(str[7]) {
																case 'g':
																	switch(str[8]) {
																		case 'i':
																			switch(str[9]) {
																				case 'b':
																					switch(str[10]) {
																						case 'l':
																							switch(str[11]) {
																								case 'e':
																									switch(str[12]) {
																										case 0: return _incorrigible;
																									}
																									break;
																							}
																							break;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'l':
									switch(str[4]) {
										case 'i':
											switch(str[5]) {
												case 'n':
													switch(str[6]) {
														case 'e':
															switch(str[7]) {
																case 'd':
																	switch(str[8]) {
																		case 0: return _inclined;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
										case 'u':
											switch(str[5]) {
												case 's':
													switch(str[6]) {
														case 'i':
															switch(str[7]) {
																case 'v':
																	switch(str[8]) {
																		case 'e':
																			switch(str[9]) {
																				case 0: return _inclusive;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
										case 'e':
											switch(str[5]) {
												case 'm':
													switch(str[6]) {
														case 'e':
															switch(str[7]) {
																case 'n':
																	switch(str[8]) {
																		case 't':
																			switch(str[9]) {
																				case 0: return _inclement;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'a':
									switch(str[4]) {
										case 'n':
											switch(str[5]) {
												case 'd':
													switch(str[6]) {
														case 'e':
															switch(str[7]) {
																case 's':
																	switch(str[8]) {
																		case 'c':
																			switch(str[9]) {
																				case 'e':
																					switch(str[10]) {
																						case 'n':
																							switch(str[11]) {
																								case 't':
																									switch(str[12]) {
																										case 0: return _incandescent;
																									}
																									break;
																							}
																							break;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'i':
									switch(str[4]) {
										case 'd':
											switch(str[5]) {
												case 'e':
													switch(str[6]) {
														case 'n':
															switch(str[7]) {
																case 't':
																	switch(str[8]) {
																		case 'a':
																			switch(str[9]) {
																				case 'l':
																					switch(str[10]) {
																						case 0: return _incidental;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
										case 'p':
											switch(str[5]) {
												case 'i':
													switch(str[6]) {
														case 'e':
															switch(str[7]) {
																case 'n':
																	switch(str[8]) {
																		case 't':
																			switch(str[9]) {
																				case 0: return _incipient;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
										case 's':
											switch(str[5]) {
												case 'i':
													switch(str[6]) {
														case 'v':
															switch(str[7]) {
																case 'e':
																	switch(str[8]) {
																		case 0: return _incisive;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'u':
									switch(str[4]) {
										case 'l':
											switch(str[5]) {
												case 'c':
													switch(str[6]) {
														case 'a':
															switch(str[7]) {
																case 't':
																	switch(str[8]) {
																		case 'e':
																			switch(str[9]) {
																				case 0: return _inculcate;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'd':
							switch(str[3]) {
								case 'i':
									switch(str[4]) {
										case 'c':
											switch(str[5]) {
												case 'a':
													switch(str[6]) {
														case 't':
															switch(str[7]) {
																case 'i':
																	switch(str[8]) {
																		case 'o':
																			switch(str[9]) {
																				case 'n':
																					switch(str[10]) {
																						case 0: return _indication;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
										case 't':
											switch(str[5]) {
												case 'e':
													switch(str[6]) {
														case 0: return _indite;
													}
													break;
											}
											break;
									}
									break;
								case 'e':
									switch(str[4]) {
										case 'm':
											switch(str[5]) {
												case 'n':
													switch(str[6]) {
														case 'i':
															switch(str[7]) {
																case 'f':
																	switch(str[8]) {
																		case 'y':
																			switch(str[9]) {
																				case 0: return _indemnify;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'f':
							switch(str[3]) {
								case 'l':
									switch(str[4]) {
										case 'a':
											switch(str[5]) {
												case 'm':
													switch(str[6]) {
														case 'm':
															switch(str[7]) {
																case 'a':
																	switch(str[8]) {
																		case 't':
																			switch(str[9]) {
																				case 'o':
																					switch(str[10]) {
																						case 'r':
																							switch(str[11]) {
																								case 'y':
																									switch(str[12]) {
																										case 0: return _inflammatory;
																									}
																									break;
																							}
																							break;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'e':
									switch(str[4]) {
										case 's':
											switch(str[5]) {
												case 't':
													switch(str[6]) {
														case 0: return _infest;
													}
													break;
											}
											break;
									}
									break;
								case 'a':
									switch(str[4]) {
										case 'l':
											switch(str[5]) {
												case 'l':
													switch(str[6]) {
														case 'i':
															switch(str[7]) {
																case 'b':
																	switch(str[8]) {
																		case 'l':
																			switch(str[9]) {
																				case 'e':
																					switch(str[10]) {
																						case 0: return _infallible;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'n':
							switch(str[3]) {
								case 'a':
									switch(str[4]) {
										case 't':
											switch(str[5]) {
												case 'e':
													switch(str[6]) {
														case 0: return _innate;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'v':
							switch(str[3]) {
								case 'i':
									switch(str[4]) {
										case 'd':
											switch(str[5]) {
												case 'i':
													switch(str[6]) {
														case 'o':
															switch(str[7]) {
																case 'u':
																	switch(str[8]) {
																		case 's':
																			switch(str[9]) {
																				case 0: return _invidious;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'o':
									switch(str[4]) {
										case 'c':
											switch(str[5]) {
												case 'a':
													switch(str[6]) {
														case 't':
															switch(str[7]) {
																case 'i':
																	switch(str[8]) {
																		case 'o':
																			switch(str[9]) {
																				case 'n':
																					switch(str[10]) {
																						case 0: return _invocation;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'e':
									switch(str[4]) {
										case 'c':
											switch(str[5]) {
												case 't':
													switch(str[6]) {
														case 'i':
															switch(str[7]) {
																case 'v':
																	switch(str[8]) {
																		case 'e':
																			switch(str[9]) {
																				case 0: return _invective;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'i':
							switch(str[3]) {
								case 'q':
									switch(str[4]) {
										case 'u':
											switch(str[5]) {
												case 'i':
													switch(str[6]) {
														case 't':
															switch(str[7]) {
																case 'o':
																	switch(str[8]) {
																		case 'u':
																			switch(str[9]) {
																				case 's':
																					switch(str[10]) {
																						case 0: return _iniquitous;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'm':
									switch(str[4]) {
										case 'i':
											switch(str[5]) {
												case 'c':
													switch(str[6]) {
														case 'a':
															switch(str[7]) {
																case 'l':
																	switch(str[8]) {
																		case 0: return _inimical;
																	}
																	break;
															}
															break;
													}
													break;
												case 't':
													switch(str[6]) {
														case 'a':
															switch(str[7]) {
																case 'b':
																	switch(str[8]) {
																		case 'l':
																			switch(str[9]) {
																				case 'e':
																					switch(str[10]) {
																						case 0: return _inimitable;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'g':
							switch(str[3]) {
								case 'r':
									switch(str[4]) {
										case 'a':
											switch(str[5]) {
												case 'i':
													switch(str[6]) {
														case 'n':
															switch(str[7]) {
																case 'e':
																	switch(str[8]) {
																		case 'd':
																			switch(str[9]) {
																				case 0: return _ingrained;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
												case 't':
													switch(str[6]) {
														case 'i':
															switch(str[7]) {
																case 'a':
																	switch(str[8]) {
																		case 't':
																			switch(str[9]) {
																				case 'e':
																					switch(str[10]) {
																						case 0: return _ingratiate;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'u':
							switch(str[3]) {
								case 'r':
									switch(str[4]) {
										case 'e':
											switch(str[5]) {
												case 'd':
													switch(str[6]) {
														case 0: return _inured;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'c':
					switch(str[2]) {
						case 'o':
							switch(str[3]) {
								case 'n':
									switch(str[4]) {
										case 'o':
											switch(str[5]) {
												case 'c':
													switch(str[6]) {
														case 'l':
															switch(str[7]) {
																case 'a':
																	switch(str[8]) {
																		case 's':
																			switch(str[9]) {
																				case 't':
																					switch(str[10]) {
																						case 0: return _iconoclast;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'm':
					switch(str[2]) {
						case 'p':
							switch(str[3]) {
								case 'o':
									switch(str[4]) {
										case 's':
											switch(str[5]) {
												case 't':
													switch(str[6]) {
														case 'u':
															switch(str[7]) {
																case 'r':
																	switch(str[8]) {
																		case 'e':
																			switch(str[9]) {
																				case 0: return _imposture;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
												case 'i':
													switch(str[6]) {
														case 'n':
															switch(str[7]) {
																case 'g':
																	switch(str[8]) {
																		case 0: return _imposing;
																	}
																	break;
															}
															break;
														case 't':
															switch(str[7]) {
																case 'i':
																	switch(str[8]) {
																		case 'o':
																			switch(str[9]) {
																				case 'n':
																					switch(str[10]) {
																						case 0: return _imposition;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
												case 'e':
													switch(str[6]) {
														case 'd':
															switch(str[7]) {
																case 0: return _imposed;
															}
															break;
													}
													break;
											}
											break;
										case 'r':
											switch(str[5]) {
												case 't':
													switch(str[6]) {
														case 'u':
															switch(str[7]) {
																case 'n':
																	switch(str[8]) {
																		case 'a':
																			switch(str[9]) {
																				case 't':
																					switch(str[10]) {
																						case 'e':
																							switch(str[11]) {
																								case 0: return _importunate;
																							}
																							break;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
										case 'l':
											switch(str[5]) {
												case 'i':
													switch(str[6]) {
														case 't':
															switch(str[7]) {
																case 'i':
																	switch(str[8]) {
																		case 'c':
																			switch(str[9]) {
																				case 0: return _impolitic;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'r':
									switch(str[4]) {
										case 'o':
											switch(str[5]) {
												case 'v':
													switch(str[6]) {
														case 'i':
															switch(str[7]) {
																case 'd':
																	switch(str[8]) {
																		case 'e':
																			switch(str[9]) {
																				case 'n':
																					switch(str[10]) {
																						case 't':
																							switch(str[11]) {
																								case 0: return _improvident;
																							}
																							break;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'i':
									switch(str[4]) {
										case 'e':
											switch(str[5]) {
												case 't':
													switch(str[6]) {
														case 'y':
															switch(str[7]) {
																case 0: return _impiety;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'e':
									switch(str[4]) {
										case 'l':
											switch(str[5]) {
												case 0: return _impel;
											}
											break;
										case 'r':
											switch(str[5]) {
												case 't':
													switch(str[6]) {
														case 'i':
															switch(str[7]) {
																case 'n':
																	switch(str[8]) {
																		case 'e':
																			switch(str[9]) {
																				case 'n':
																					switch(str[10]) {
																						case 't':
																							switch(str[11]) {
																								case 0: return _impertinent;
																							}
																							break;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
														case 'u':
															switch(str[7]) {
																case 'r':
																	switch(str[8]) {
																		case 'b':
																			switch(str[9]) {
																				case 'a':
																					switch(str[10]) {
																						case 'b':
																							switch(str[11]) {
																								case 'l':
																									switch(str[12]) {
																										case 'e':
																											switch(str[13]) {
																												case 0: return _imperturbable;
																											}
																											break;
																									}
																									break;
																							}
																							break;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
										case 't':
											switch(str[5]) {
												case 'u':
													switch(str[6]) {
														case 's':
															switch(str[7]) {
																case 0: return _impetus;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'l':
									switch(str[4]) {
										case 'a':
											switch(str[5]) {
												case 'c':
													switch(str[6]) {
														case 'a':
															switch(str[7]) {
																case 'b':
																	switch(str[8]) {
																		case 'l':
																			switch(str[9]) {
																				case 'e':
																					switch(str[10]) {
																						case 0: return _implacable;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'a':
									switch(str[4]) {
										case 'r':
											switch(str[5]) {
												case 't':
													switch(str[6]) {
														case 0: return _impart;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'b':
							switch(str[3]) {
								case 'i':
									switch(str[4]) {
										case 'b':
											switch(str[5]) {
												case 'e':
													switch(str[6]) {
														case 0: return _imbibe;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'm':
							switch(str[3]) {
								case 'u':
									switch(str[4]) {
										case 't':
											switch(str[5]) {
												case 'a':
													switch(str[6]) {
														case 'b':
															switch(str[7]) {
																case 'l':
																	switch(str[8]) {
																		case 'e':
																			switch(str[9]) {
																				case 0: return _immutable;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
										case 'r':
											switch(str[5]) {
												case 'e':
													switch(str[6]) {
														case 0: return _immure;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'd':
					switch(str[2]) {
						case 'e':
							switch(str[3]) {
								case 'o':
									switch(str[4]) {
										case 'l':
											switch(str[5]) {
												case 'o':
													switch(str[6]) {
														case 'g':
															switch(str[7]) {
																case 'y':
																	switch(str[8]) {
																		case 0: return _ideology;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'i':
							switch(str[3]) {
								case 'o':
									switch(str[4]) {
										case 's':
											switch(str[5]) {
												case 'y':
													switch(str[6]) {
														case 'n':
															switch(str[7]) {
																case 'c':
																	switch(str[8]) {
																		case 'r':
																			switch(str[9]) {
																				case 'a':
																					switch(str[10]) {
																						case 's':
																							switch(str[11]) {
																								case 'y':
																									switch(str[12]) {
																										case 0: return _idiosyncrasy;
																									}
																									break;
																							}
																							break;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'r':
					switch(str[2]) {
						case 'r':
							switch(str[3]) {
								case 'e':
									switch(str[4]) {
										case 's':
											switch(str[5]) {
												case 'o':
													switch(str[6]) {
														case 'l':
															switch(str[7]) {
																case 'u':
																	switch(str[8]) {
																		case 't':
																			switch(str[9]) {
																				case 'e':
																					switch(str[10]) {
																						case 0: return _irresolute;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'k':
							switch(str[3]) {
								case 's':
									switch(str[4]) {
										case 'o':
											switch(str[5]) {
												case 'm':
													switch(str[6]) {
														case 'e':
															switch(str[7]) {
																case 0: return _irksome;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'g':
					switch(str[2]) {
						case 'n':
							switch(str[3]) {
								case 'o':
									switch(str[4]) {
										case 'm':
											switch(str[5]) {
												case 'i':
													switch(str[6]) {
														case 'n':
															switch(str[7]) {
																case 'i':
																	switch(str[8]) {
																		case 'o':
																			switch(str[9]) {
																				case 'u':
																					switch(str[10]) {
																						case 's':
																							switch(str[11]) {
																								case 0: return _ignominious;
																							}
																							break;
																					}
																					break;
																			}
																			break;
																	}
																	break;
																case 'y':
																	switch(str[8]) {
																		case 0: return _ignominy;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'l':
					switch(str[2]) {
						case 'l':
							switch(str[3]) {
								case 'u':
									switch(str[4]) {
										case 's':
											switch(str[5]) {
												case 't':
													switch(str[6]) {
														case 'r':
															switch(str[7]) {
																case 'i':
																	switch(str[8]) {
																		case 'o':
																			switch(str[9]) {
																				case 'u':
																					switch(str[10]) {
																						case 's':
																							switch(str[11]) {
																								case 0: return _illustrious;
																							}
																							break;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 's':
					switch(str[2]) {
						case 's':
							switch(str[3]) {
								case 'u':
									switch(str[4]) {
										case 'e':
											switch(str[5]) {
												case 0: return _issue;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
			}
			break;
		case 'u':
			switch(str[1]) {
				case 'n':
					switch(str[2]) {
						case 'd':
							switch(str[3]) {
								case 'e':
									switch(str[4]) {
										case 'r':
											switch(str[5]) {
												case 't':
													switch(str[6]) {
														case 'a':
															switch(str[7]) {
																case 'k':
																	switch(str[8]) {
																		case 'e':
																			switch(str[9]) {
																				case 0: return _undertake;
																			}
																			break;
																		case 'i':
																			switch(str[9]) {
																				case 'n':
																					switch(str[10]) {
																						case 'g':
																							switch(str[11]) {
																								case 0: return _undertaking;
																							}
																							break;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'a':
							switch(str[3]) {
								case 's':
									switch(str[4]) {
										case 's':
											switch(str[5]) {
												case 'u':
													switch(str[6]) {
														case 'm':
															switch(str[7]) {
																case 'i':
																	switch(str[8]) {
																		case 'n':
																			switch(str[9]) {
																				case 'g':
																					switch(str[10]) {
																						case 0: return _unassuming;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'n':
									switch(str[4]) {
										case 'i':
											switch(str[5]) {
												case 'm':
													switch(str[6]) {
														case 'i':
															switch(str[7]) {
																case 't':
																	switch(str[8]) {
																		case 'y':
																			switch(str[9]) {
																				case 0: return _unanimity;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'f':
									switch(str[4]) {
										case 'f':
											switch(str[5]) {
												case 'e':
													switch(str[6]) {
														case 'c':
															switch(str[7]) {
																case 't':
																	switch(str[8]) {
																		case 'e':
																			switch(str[9]) {
																				case 'd':
																					switch(str[10]) {
																						case 0: return _unaffected;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'w':
							switch(str[3]) {
								case 'o':
									switch(str[4]) {
										case 'n':
											switch(str[5]) {
												case 't':
													switch(str[6]) {
														case 'e':
															switch(str[7]) {
																case 'd':
																	switch(str[8]) {
																		case 0: return _unwonted;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'c':
							switch(str[3]) {
								case 'o':
									switch(str[4]) {
										case 'u':
											switch(str[5]) {
												case 't':
													switch(str[6]) {
														case 'h':
															switch(str[7]) {
																case 0: return _uncouth;
															}
															break;
													}
													break;
											}
											break;
										case 'n':
											switch(str[5]) {
												case 's':
													switch(str[6]) {
														case 'c':
															switch(str[7]) {
																case 'i':
																	switch(str[8]) {
																		case 'o':
																			switch(str[9]) {
																				case 'n':
																					switch(str[10]) {
																						case 'a':
																							switch(str[11]) {
																								case 'b':
																									switch(str[12]) {
																										case 'l':
																											switch(str[13]) {
																												case 'e':
																													switch(str[14]) {
																														case 0: return _unconscionable;
																													}
																													break;
																											}
																											break;
																									}
																									break;
																							}
																							break;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 't':
									switch(str[4]) {
										case 'i':
											switch(str[5]) {
												case 'o':
													switch(str[6]) {
														case 'n':
															switch(str[7]) {
																case 0: return _unction;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 's':
							switch(str[3]) {
								case 'e':
									switch(str[4]) {
										case 'e':
											switch(str[5]) {
												case 'm':
													switch(str[6]) {
														case 'l':
															switch(str[7]) {
																case 'y':
																	switch(str[8]) {
																		case 0: return _unseemly;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 't':
							switch(str[3]) {
								case 'o':
									switch(str[4]) {
										case 'w':
											switch(str[5]) {
												case 'a':
													switch(str[6]) {
														case 'r':
															switch(str[7]) {
																case 'd':
																	switch(str[8]) {
																		case 0: return _untoward;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'g':
							switch(str[3]) {
								case 'a':
									switch(str[4]) {
										case 'i':
											switch(str[5]) {
												case 'n':
													switch(str[6]) {
														case 'l':
															switch(str[7]) {
																case 'y':
																	switch(str[8]) {
																		case 0: return _ungainly;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'm':
							switch(str[3]) {
								case 'i':
									switch(str[4]) {
										case 't':
											switch(str[5]) {
												case 'i':
													switch(str[6]) {
														case 'g':
															switch(str[7]) {
																case 'a':
																	switch(str[8]) {
																		case 't':
																			switch(str[9]) {
																				case 'e':
																					switch(str[10]) {
																						case 'd':
																							switch(str[11]) {
																								case 0: return _unmitigated;
																							}
																							break;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'i':
							switch(str[3]) {
								case 'm':
									switch(str[4]) {
										case 'p':
											switch(str[5]) {
												case 'e':
													switch(str[6]) {
														case 'a':
															switch(str[7]) {
																case 'c':
																	switch(str[8]) {
																		case 'h':
																			switch(str[9]) {
																				case 'a':
																					switch(str[10]) {
																						case 'b':
																							switch(str[11]) {
																								case 'l':
																									switch(str[12]) {
																										case 'e':
																											switch(str[13]) {
																												case 0: return _unimpeachable;
																											}
																											break;
																									}
																									break;
																							}
																							break;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'f':
							switch(str[3]) {
								case 'a':
									switch(str[4]) {
										case 'l':
											switch(str[5]) {
												case 't':
													switch(str[6]) {
														case 'e':
															switch(str[7]) {
																case 'r':
																	switch(str[8]) {
																		case 'i':
																			switch(str[9]) {
																				case 'n':
																					switch(str[10]) {
																						case 'g':
																							switch(str[11]) {
																								case 0: return _unfaltering;
																							}
																							break;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'e':
							switch(str[3]) {
								case 'x':
									switch(str[4]) {
										case 'c':
											switch(str[5]) {
												case 'e':
													switch(str[6]) {
														case 'p':
															switch(str[7]) {
																case 't':
																	switch(str[8]) {
																		case 'i':
																			switch(str[9]) {
																				case 'o':
																					switch(str[10]) {
																						case 'n':
																							switch(str[11]) {
																								case 'a':
																									switch(str[12]) {
																										case 'b':
																											switch(str[13]) {
																												case 'l':
																													switch(str[14]) {
																														case 'e':
																															switch(str[15]) {
																																case 0: return _unexceptionable;
																															}
																															break;
																													}
																													break;
																											}
																											break;
																									}
																									break;
																							}
																							break;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'l':
					switch(str[2]) {
						case 't':
							switch(str[3]) {
								case 'e':
									switch(str[4]) {
										case 'r':
											switch(str[5]) {
												case 'i':
													switch(str[6]) {
														case 'o':
															switch(str[7]) {
																case 'r':
																	switch(str[8]) {
																		case 0: return _ulterior;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'p':
					switch(str[2]) {
						case 'b':
							switch(str[3]) {
								case 'r':
									switch(str[4]) {
										case 'a':
											switch(str[5]) {
												case 'i':
													switch(str[6]) {
														case 'd':
															switch(str[7]) {
																case 0: return _upbraid;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 's':
							switch(str[3]) {
								case 'h':
									switch(str[4]) {
										case 'o':
											switch(str[5]) {
												case 't':
													switch(str[6]) {
														case 0: return _upshot;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'r':
					switch(str[2]) {
						case 'b':
							switch(str[3]) {
								case 'a':
									switch(str[4]) {
										case 'n':
											switch(str[5]) {
												case 'e':
													switch(str[6]) {
														case 0: return _urbane;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 's':
					switch(str[2]) {
						case 'u':
							switch(str[3]) {
								case 'r':
									switch(str[4]) {
										case 'p':
											switch(str[5]) {
												case 0: return _usurp;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 't':
					switch(str[2]) {
						case 't':
							switch(str[3]) {
								case 'e':
									switch(str[4]) {
										case 'r':
											switch(str[5]) {
												case 0: return _utter;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
			}
			break;
		case 'o':
			switch(str[1]) {
				case 'v':
					switch(str[2]) {
						case 'e':
							switch(str[3]) {
								case 'r':
									switch(str[4]) {
										case 'b':
											switch(str[5]) {
												case 'e':
													switch(str[6]) {
														case 'a':
															switch(str[7]) {
																case 'r':
																	switch(str[8]) {
																		case 'i':
																			switch(str[9]) {
																				case 'n':
																					switch(str[10]) {
																						case 'g':
																							switch(str[11]) {
																								case 0: return _overbearing;
																							}
																							break;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
										case 'w':
											switch(str[5]) {
												case 'e':
													switch(str[6]) {
														case 'e':
															switch(str[7]) {
																case 'n':
																	switch(str[8]) {
																		case 'i':
																			switch(str[9]) {
																				case 'n':
																					switch(str[10]) {
																						case 'g':
																							switch(str[11]) {
																								case 0: return _overweening;
																							}
																							break;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'b':
					switch(str[2]) {
						case 't':
							switch(str[3]) {
								case 'u':
									switch(str[4]) {
										case 's':
											switch(str[5]) {
												case 'e':
													switch(str[6]) {
														case 0: return _obtuse;
													}
													break;
											}
											break;
									}
									break;
								case 'r':
									switch(str[4]) {
										case 'u':
											switch(str[5]) {
												case 'd':
													switch(str[6]) {
														case 'e':
															switch(str[7]) {
																case 0: return _obtrude;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'a':
									switch(str[4]) {
										case 'i':
											switch(str[5]) {
												case 'n':
													switch(str[6]) {
														case 0: return _obtain;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'j':
							switch(str[3]) {
								case 'e':
									switch(str[4]) {
										case 'c':
											switch(str[5]) {
												case 't':
													switch(str[6]) {
														case 'i':
															switch(str[7]) {
																case 'v':
																	switch(str[8]) {
																		case 'e':
																			switch(str[9]) {
																				case 0: return _objective;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'v':
							switch(str[3]) {
								case 'i':
									switch(str[4]) {
										case 'a':
											switch(str[5]) {
												case 't':
													switch(str[6]) {
														case 'e':
															switch(str[7]) {
																case 0: return _obviate;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'd':
							switch(str[3]) {
								case 'u':
									switch(str[4]) {
										case 'r':
											switch(str[5]) {
												case 'a':
													switch(str[6]) {
														case 't':
															switch(str[7]) {
																case 'e':
																	switch(str[8]) {
																		case 0: return _obdurate;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'l':
							switch(str[3]) {
								case 'o':
									switch(str[4]) {
										case 'q':
											switch(str[5]) {
												case 'u':
													switch(str[6]) {
														case 'y':
															switch(str[7]) {
																case 0: return _obloquy;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'r':
					switch(str[2]) {
						case 'd':
							switch(str[3]) {
								case 'a':
									switch(str[4]) {
										case 'i':
											switch(str[5]) {
												case 'n':
													switch(str[6]) {
														case 0: return _ordain;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'n':
							switch(str[3]) {
								case 'a':
									switch(str[4]) {
										case 't':
											switch(str[5]) {
												case 'e':
													switch(str[6]) {
														case 0: return _ornate;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'a':
							switch(str[3]) {
								case 't':
									switch(str[4]) {
										case 'o':
											switch(str[5]) {
												case 'r':
													switch(str[6]) {
														case 'i':
															switch(str[7]) {
																case 'o':
																	switch(str[8]) {
																		case 0: return _oratorio;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'm':
					switch(str[2]) {
						case 'i':
							switch(str[3]) {
								case 'n':
									switch(str[4]) {
										case 'o':
											switch(str[5]) {
												case 'u':
													switch(str[6]) {
														case 's':
															switch(str[7]) {
																case 0: return _ominous;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'n':
							switch(str[3]) {
								case 'i':
									switch(str[4]) {
										case 's':
											switch(str[5]) {
												case 'c':
													switch(str[6]) {
														case 'i':
															switch(str[7]) {
																case 'e':
																	switch(str[8]) {
																		case 'n':
																			switch(str[9]) {
																				case 't':
																					switch(str[10]) {
																						case 0: return _omniscient;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'n':
					switch(str[2]) {
						case 's':
							switch(str[3]) {
								case 'e':
									switch(str[4]) {
										case 't':
											switch(str[5]) {
												case 0: return _onset;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 's':
					switch(str[2]) {
						case 't':
							switch(str[3]) {
								case 'e':
									switch(str[4]) {
										case 'n':
											switch(str[5]) {
												case 's':
													switch(str[6]) {
														case 'i':
															switch(str[7]) {
																case 'b':
																	switch(str[8]) {
																		case 'l':
																			switch(str[9]) {
																				case 'e':
																					switch(str[10]) {
																						case 0: return _ostensible;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'u':
					switch(str[2]) {
						case 't':
							switch(str[3]) {
								case 's':
									switch(str[4]) {
										case 'k':
											switch(str[5]) {
												case 'i':
													switch(str[6]) {
														case 'r':
															switch(str[7]) {
																case 't':
																	switch(str[8]) {
																		case 's':
																			switch(str[9]) {
																				case 0: return _outskirts;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'd':
					switch(str[2]) {
						case 'i':
							switch(str[3]) {
								case 'u':
									switch(str[4]) {
										case 'm':
											switch(str[5]) {
												case 0: return _odium;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'p':
					switch(str[2]) {
						case 'p':
							switch(str[3]) {
								case 'r':
									switch(str[4]) {
										case 'e':
											switch(str[5]) {
												case 's':
													switch(str[6]) {
														case 's':
															switch(str[7]) {
																case 0: return _oppress;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
			}
			break;
		case 's':
			switch(str[1]) {
				case 't':
					switch(str[2]) {
						case 'r':
							switch(str[3]) {
								case 'i':
									switch(str[4]) {
										case 'c':
											switch(str[5]) {
												case 't':
													switch(str[6]) {
														case 'u':
															switch(str[7]) {
																case 'r':
																	switch(str[8]) {
																		case 'e':
																			switch(str[9]) {
																				case 0: return _stricture;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
										case 'a':
											switch(str[5]) {
												case 't':
													switch(str[6]) {
														case 'e':
															switch(str[7]) {
																case 0: return _striate;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'a':
									switch(str[4]) {
										case 'i':
											switch(str[5]) {
												case 'g':
													switch(str[6]) {
														case 'h':
															switch(str[7]) {
																case 't':
																	switch(str[8]) {
																		case 0: return _straight;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
										case 't':
											switch(str[5]) {
												case 'u':
													switch(str[6]) {
														case 'm':
															switch(str[7]) {
																case 0: return _stratum;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'o':
							switch(str[3]) {
								case 'c':
									switch(str[4]) {
										case 'k':
											switch(str[5]) {
												case 0: return _stock;
											}
											break;
									}
									break;
							}
							break;
						case 'a':
							switch(str[3]) {
								case 'n':
									switch(str[4]) {
										case 'c':
											switch(str[5]) {
												case 'h':
													switch(str[6]) {
														case 0: return _stanch;
													}
													break;
											}
											break;
									}
									break;
								case 'i':
									switch(str[4]) {
										case 'd':
											switch(str[5]) {
												case 0: return _staid;
											}
											break;
									}
									break;
								case 'k':
									switch(str[4]) {
										case 'e':
											switch(str[5]) {
												case 0: return _stake;
											}
											break;
									}
									break;
							}
							break;
						case 'e':
							switch(str[3]) {
								case 'n':
									switch(str[4]) {
										case 't':
											switch(str[5]) {
												case 'o':
													switch(str[6]) {
														case 'r':
															switch(str[7]) {
																case 'i':
																	switch(str[8]) {
																		case 'a':
																			switch(str[9]) {
																				case 'n':
																					switch(str[10]) {
																						case 0: return _stentorian;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'e':
									switch(str[4]) {
										case 'p':
											switch(str[5]) {
												case 0: return _steep;
											}
											break;
									}
									break;
							}
							break;
						case 'u':
							switch(str[3]) {
								case 'l':
									switch(str[4]) {
										case 't':
											switch(str[5]) {
												case 'i':
													switch(str[6]) {
														case 'f':
															switch(str[7]) {
																case 'y':
																	switch(str[8]) {
																		case 0: return _stultify;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'p':
									switch(str[4]) {
										case 'e':
											switch(str[5]) {
												case 'n':
													switch(str[6]) {
														case 'd':
															switch(str[7]) {
																case 'o':
																	switch(str[8]) {
																		case 'u':
																			switch(str[9]) {
																				case 's':
																					switch(str[10]) {
																						case 0: return _stupendous;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'm':
									switch(str[4]) {
										case 'p':
											switch(str[5]) {
												case 0: return _stump;
											}
											break;
									}
									break;
							}
							break;
						case 'i':
							switch(str[3]) {
								case 'l':
									switch(str[4]) {
										case 't':
											switch(str[5]) {
												case 'e':
													switch(str[6]) {
														case 'd':
															switch(str[7]) {
																case 0: return _stilted;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'n':
									switch(str[4]) {
										case 't':
											switch(str[5]) {
												case 0: return _stint;
											}
											break;
									}
									break;
								case 'p':
									switch(str[4]) {
										case 'u':
											switch(str[5]) {
												case 'l':
													switch(str[6]) {
														case 'a':
															switch(str[7]) {
																case 't':
																	switch(str[8]) {
																		case 'e':
																			switch(str[9]) {
																				case 0: return _stipulate;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'e':
					switch(str[2]) {
						case 'n':
							switch(str[3]) {
								case 't':
									switch(str[4]) {
										case 'i':
											switch(str[5]) {
												case 'e':
													switch(str[6]) {
														case 'n':
															switch(str[7]) {
																case 't':
																	switch(str[8]) {
																		case 0: return _sentient;
																	}
																	break;
															}
															break;
													}
													break;
												case 'n':
													switch(str[6]) {
														case 'e':
															switch(str[7]) {
																case 'l':
																	switch(str[8]) {
																		case 0: return _sentinel;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
										case 'e':
											switch(str[5]) {
												case 'n':
													switch(str[6]) {
														case 't':
															switch(str[7]) {
																case 'i':
																	switch(str[8]) {
																		case 'o':
																			switch(str[9]) {
																				case 'u':
																					switch(str[10]) {
																						case 's':
																							switch(str[11]) {
																								case 0: return _sententious;
																							}
																							break;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'm':
							switch(str[3]) {
								case 'b':
									switch(str[4]) {
										case 'l':
											switch(str[5]) {
												case 'a':
													switch(str[6]) {
														case 'n':
															switch(str[7]) {
																case 'c':
																	switch(str[8]) {
																		case 'e':
																			switch(str[9]) {
																				case 0: return _semblance;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'e':
							switch(str[3]) {
								case 't':
									switch(str[4]) {
										case 'h':
											switch(str[5]) {
												case 'e':
													switch(str[6]) {
														case 0: return _seethe;
													}
													break;
											}
											break;
									}
									break;
								case 'm':
									switch(str[4]) {
										case 'l':
											switch(str[5]) {
												case 'y':
													switch(str[6]) {
														case 0: return _seemly;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'd':
							switch(str[3]) {
								case 'u':
									switch(str[4]) {
										case 'l':
											switch(str[5]) {
												case 'o':
													switch(str[6]) {
														case 'u':
															switch(str[7]) {
																case 's':
																	switch(str[8]) {
																		case 0: return _sedulous;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'x':
							switch(str[3]) {
								case 't':
									switch(str[4]) {
										case 'a':
											switch(str[5]) {
												case 'n':
													switch(str[6]) {
														case 't':
															switch(str[7]) {
																case 0: return _sextant;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'h':
					switch(str[2]) {
						case 'e':
							switch(str[3]) {
								case 'r':
									switch(str[4]) {
										case 'b':
											switch(str[5]) {
												case 'e':
													switch(str[6]) {
														case 't':
															switch(str[7]) {
																case 0: return _sherbet;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'a':
					switch(str[2]) {
						case 'n':
							switch(str[3]) {
								case 'c':
									switch(str[4]) {
										case 't':
											switch(str[5]) {
												case 'i':
													switch(str[6]) {
														case 'o':
															switch(str[7]) {
																case 'n':
																	switch(str[8]) {
																		case 0: return _sanction;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 't':
							switch(str[3]) {
								case 'u':
									switch(str[4]) {
										case 'r':
											switch(str[5]) {
												case 'n':
													switch(str[6]) {
														case 'i':
															switch(str[7]) {
																case 'n':
																	switch(str[8]) {
																		case 'e':
																			switch(str[9]) {
																				case 0: return _saturnine;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'e':
									switch(str[4]) {
										case 0: return _sate;
									}
									break;
								case 'i':
									switch(str[4]) {
										case 'r':
											switch(str[5]) {
												case 'e':
													switch(str[6]) {
														case 0: return _satire;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'l':
							switch(str[3]) {
								case 'i':
									switch(str[4]) {
										case 'e':
											switch(str[5]) {
												case 'n':
													switch(str[6]) {
														case 't':
															switch(str[7]) {
																case 0: return _salient;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'v':
							switch(str[3]) {
								case 'a':
									switch(str[4]) {
										case 'n':
											switch(str[5]) {
												case 't':
													switch(str[6]) {
														case 0: return _savant;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'l':
					switch(str[2]) {
						case 'a':
							switch(str[3]) {
								case 'y':
									switch(str[4]) {
										case 0: return _slay;
									}
									break;
							}
							break;
						case 'e':
							switch(str[3]) {
								case 'i':
									switch(str[4]) {
										case 'g':
											switch(str[5]) {
												case 'h':
													switch(str[6]) {
														case 't':
															switch(str[7]) {
																case 0: return _sleight;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'w':
									switch(str[4]) {
										case 0: return _slew;
									}
									break;
							}
							break;
						case 'u':
							switch(str[3]) {
								case 'i':
									switch(str[4]) {
										case 'c':
											switch(str[5]) {
												case 'e':
													switch(str[6]) {
														case 0: return _sluice;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'k':
					switch(str[2]) {
						case 'i':
							switch(str[3]) {
								case 't':
									switch(str[4]) {
										case 't':
											switch(str[5]) {
												case 'i':
													switch(str[6]) {
														case 's':
															switch(str[7]) {
																case 'h':
																	switch(str[8]) {
																		case 0: return _skittish;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'l':
									switch(str[4]) {
										case 'l':
											switch(str[5]) {
												case 0: return _skill;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'u':
					switch(str[2]) {
						case 'b':
							switch(str[3]) {
								case 'l':
									switch(str[4]) {
										case 'i':
											switch(str[5]) {
												case 'm':
													switch(str[6]) {
														case 'e':
															switch(str[7]) {
																case 0: return _sublime;
															}
															break;
														case 'a':
															switch(str[7]) {
																case 't':
																	switch(str[8]) {
																		case 'e':
																			switch(str[9]) {
																				case 0: return _sublimate;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'a':
									switch(str[4]) {
										case 'l':
											switch(str[5]) {
												case 't':
													switch(str[6]) {
														case 'e':
															switch(str[7]) {
																case 'r':
																	switch(str[8]) {
																		case 'n':
																			switch(str[9]) {
																				case 0: return _subaltern;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'j':
									switch(str[4]) {
										case 'u':
											switch(str[5]) {
												case 'g':
													switch(str[6]) {
														case 'a':
															switch(str[7]) {
																case 't':
																	switch(str[8]) {
																		case 'e':
																			switch(str[9]) {
																				case 0: return _subjugate;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 's':
									switch(str[4]) {
										case 't':
											switch(str[5]) {
												case 'a':
													switch(str[6]) {
														case 'n':
															switch(str[7]) {
																case 't':
																	switch(str[8]) {
																		case 'i':
																			switch(str[9]) {
																				case 'a':
																					switch(str[10]) {
																						case 'l':
																							switch(str[11]) {
																								case 0: return _substantial;
																							}
																							break;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
										case 'i':
											switch(str[5]) {
												case 'd':
													switch(str[6]) {
														case 'e':
															switch(str[7]) {
																case 0: return _subside;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 's':
							switch(str[3]) {
								case 'p':
									switch(str[4]) {
										case 'e':
											switch(str[5]) {
												case 'n':
													switch(str[6]) {
														case 'd':
															switch(str[7]) {
																case 'e':
																	switch(str[8]) {
																		case 'd':
																			switch(str[9]) {
																				case 0: return _suspended;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'f':
							switch(str[3]) {
								case 'f':
									switch(str[4]) {
										case 'r':
											switch(str[5]) {
												case 'a':
													switch(str[6]) {
														case 'g':
															switch(str[7]) {
																case 'e':
																	switch(str[8]) {
																		case 0: return _suffrage;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'p':
							switch(str[3]) {
								case 'e':
									switch(str[4]) {
										case 'r':
											switch(str[5]) {
												case 'a':
													switch(str[6]) {
														case 'n':
															switch(str[7]) {
																case 'n':
																	switch(str[8]) {
																		case 'u':
																			switch(str[9]) {
																				case 'a':
																					switch(str[10]) {
																						case 't':
																							switch(str[11]) {
																								case 'e':
																									switch(str[12]) {
																										case 'd':
																											switch(str[13]) {
																												case 0: return _superannuated;
																											}
																											break;
																									}
																									break;
																							}
																							break;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
												case 'c':
													switch(str[6]) {
														case 'i':
															switch(str[7]) {
																case 'l':
																	switch(str[8]) {
																		case 'i':
																			switch(str[9]) {
																				case 'o':
																					switch(str[10]) {
																						case 'u':
																							switch(str[11]) {
																								case 's':
																									switch(str[12]) {
																										case 0: return _supercilious;
																									}
																									break;
																							}
																							break;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'p':
									switch(str[4]) {
										case 'l':
											switch(str[5]) {
												case 'i':
													switch(str[6]) {
														case 'a':
															switch(str[7]) {
																case 'n':
																	switch(str[8]) {
																		case 't':
																			switch(str[9]) {
																				case 0: return _suppliant;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'r':
							switch(str[3]) {
								case 'r':
									switch(str[4]) {
										case 'e':
											switch(str[5]) {
												case 'p':
													switch(str[6]) {
														case 't':
															switch(str[7]) {
																case 'i':
																	switch(str[8]) {
																		case 't':
																			switch(str[9]) {
																				case 'i':
																					switch(str[10]) {
																						case 'o':
																							switch(str[11]) {
																								case 'u':
																									switch(str[12]) {
																										case 's':
																											switch(str[13]) {
																												case 0: return _surreptitious;
																											}
																											break;
																									}
																									break;
																							}
																							break;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'l':
									switch(str[4]) {
										case 'y':
											switch(str[5]) {
												case 0: return _surly;
											}
											break;
									}
									break;
							}
							break;
						case 'l':
							switch(str[3]) {
								case 'l':
									switch(str[4]) {
										case 'y':
											switch(str[5]) {
												case 0: return _sully;
											}
											break;
									}
									break;
								case 't':
									switch(str[4]) {
										case 'r':
											switch(str[5]) {
												case 'y':
													switch(str[6]) {
														case 0: return _sultry;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'c':
							switch(str[3]) {
								case 'c':
									switch(str[4]) {
										case 'o':
											switch(str[5]) {
												case 'r':
													switch(str[6]) {
														case 0: return _succor;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'a':
							switch(str[3]) {
								case 'v':
									switch(str[4]) {
										case 'i':
											switch(str[5]) {
												case 't':
													switch(str[6]) {
														case 'y':
															switch(str[7]) {
																case 0: return _suavity;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'y':
					switch(str[2]) {
						case 'm':
							switch(str[3]) {
								case 'm':
									switch(str[4]) {
										case 'e':
											switch(str[5]) {
												case 't':
													switch(str[6]) {
														case 'r':
															switch(str[7]) {
																case 'y':
																	switch(str[8]) {
																		case 0: return _symmetry;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'l':
							switch(str[3]) {
								case 'l':
									switch(str[4]) {
										case 'o':
											switch(str[5]) {
												case 'g':
													switch(str[6]) {
														case 'i':
															switch(str[7]) {
																case 's':
																	switch(str[8]) {
																		case 'm':
																			switch(str[9]) {
																				case 0: return _syllogism;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'c':
							switch(str[3]) {
								case 'o':
									switch(str[4]) {
										case 'p':
											switch(str[5]) {
												case 'h':
													switch(str[6]) {
														case 'a':
															switch(str[7]) {
																case 'n':
																	switch(str[8]) {
																		case 't':
																			switch(str[9]) {
																				case 0: return _sycophant;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'b':
							switch(str[3]) {
								case 'a':
									switch(str[4]) {
										case 'r':
											switch(str[5]) {
												case 'i':
													switch(str[6]) {
														case 't':
															switch(str[7]) {
																case 'e':
																	switch(str[8]) {
																		case 0: return _sybarite;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'm':
					switch(str[2]) {
						case 'a':
							switch(str[3]) {
								case 't':
									switch(str[4]) {
										case 't':
											switch(str[5]) {
												case 'e':
													switch(str[6]) {
														case 'r':
															switch(str[7]) {
																case 'i':
																	switch(str[8]) {
																		case 'n':
																			switch(str[9]) {
																				case 'g':
																					switch(str[10]) {
																						case 0: return _smattering;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'i':
					switch(str[2]) {
						case 'e':
							switch(str[3]) {
								case 'g':
									switch(str[4]) {
										case 'e':
											switch(str[5]) {
												case 0: return _siege;
											}
											break;
									}
									break;
							}
							break;
						case 'n':
							switch(str[3]) {
								case 'e':
									switch(str[4]) {
										case 'c':
											switch(str[5]) {
												case 'u':
													switch(str[6]) {
														case 'r':
															switch(str[7]) {
																case 'e':
																	switch(str[8]) {
																		case 0: return _sinecure;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'u':
									switch(str[4]) {
										case 'o':
											switch(str[5]) {
												case 'u':
													switch(str[6]) {
														case 's':
															switch(str[7]) {
																case 0: return _sinuous;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'm':
							switch(str[3]) {
								case 'p':
									switch(str[4]) {
										case 'e':
											switch(str[5]) {
												case 'r':
													switch(str[6]) {
														case 0: return _simper;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'p':
					switch(str[2]) {
						case 'a':
							switch(str[3]) {
								case 't':
									switch(str[4]) {
										case 0: return _spat;
										case 'e':
											switch(str[5]) {
												case 0: return _spate;
											}
											break;
									}
									break;
								case 'n':
									switch(str[4]) {
										case 'g':
											switch(str[5]) {
												case 'l':
													switch(str[6]) {
														case 'e':
															switch(str[7]) {
																case 0: return _spangle;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'e':
							switch(str[3]) {
								case 'c':
									switch(str[4]) {
										case 't':
											switch(str[5]) {
												case 'r':
													switch(str[6]) {
														case 'a':
															switch(str[7]) {
																case 'l':
																	switch(str[8]) {
																		case 0: return _spectral;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
										case 'i':
											switch(str[5]) {
												case 'o':
													switch(str[6]) {
														case 'u':
															switch(str[7]) {
																case 's':
																	switch(str[8]) {
																		case 0: return _specious;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'q':
					switch(str[2]) {
						case 'u':
							switch(str[3]) {
								case 'e':
									switch(str[4]) {
										case 'a':
											switch(str[5]) {
												case 'm':
													switch(str[6]) {
														case 'i':
															switch(str[7]) {
																case 's':
																	switch(str[8]) {
																		case 'h':
																			switch(str[9]) {
																				case 0: return _squeamish;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'a':
									switch(str[4]) {
										case 'l':
											switch(str[5]) {
												case 'o':
													switch(str[6]) {
														case 'r':
															switch(str[7]) {
																case 0: return _squalor;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'c':
					switch(str[2]) {
						case 'a':
							switch(str[3]) {
								case 'b':
									switch(str[4]) {
										case 'b':
											switch(str[5]) {
												case 'a':
													switch(str[6]) {
														case 'r':
															switch(str[7]) {
																case 'd':
																	switch(str[8]) {
																		case 0: return _scabbard;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'l':
									switch(str[4]) {
										case 'e':
											switch(str[5]) {
												case 0: return _scale;
											}
											break;
									}
									break;
								case 'r':
									switch(str[4]) {
										case 'c':
											switch(str[5]) {
												case 'e':
													switch(str[6]) {
														case 0: return _scarce;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'h':
							switch(str[3]) {
								case 'e':
									switch(str[4]) {
										case 'm':
											switch(str[5]) {
												case 'e':
													switch(str[6]) {
														case 0: return _scheme;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'r':
							switch(str[3]) {
								case 'u':
									switch(str[4]) {
										case 'p':
											switch(str[5]) {
												case 'u':
													switch(str[6]) {
														case 'l':
															switch(str[7]) {
																case 'o':
																	switch(str[8]) {
																		case 'u':
																			switch(str[9]) {
																				case 's':
																					switch(str[10]) {
																						case 0: return _scrupulous;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
										case 't':
											switch(str[5]) {
												case 'i':
													switch(str[6]) {
														case 'n':
															switch(str[7]) {
																case 'i':
																	switch(str[8]) {
																		case 'z':
																			switch(str[9]) {
																				case 'e':
																					switch(str[10]) {
																						case 0: return _scrutinize;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'i':
							switch(str[3]) {
								case 'n':
									switch(str[4]) {
										case 't':
											switch(str[5]) {
												case 'i':
													switch(str[6]) {
														case 'l':
															switch(str[7]) {
																case 'l':
																	switch(str[8]) {
																		case 'a':
																			switch(str[9]) {
																				case 0: return _scintilla;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'o':
					switch(str[2]) {
						case 'b':
							switch(str[3]) {
								case 0: return _sob;
							}
							break;
						case 'n':
							switch(str[3]) {
								case 'o':
									switch(str[4]) {
										case 'r':
											switch(str[5]) {
												case 'o':
													switch(str[6]) {
														case 'u':
															switch(str[7]) {
																case 's':
																	switch(str[8]) {
																		case 0: return _sonorous;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'w':
					switch(str[2]) {
						case 'e':
							switch(str[3]) {
								case 'r':
									switch(str[4]) {
										case 'v':
											switch(str[5]) {
												case 'e':
													switch(str[6]) {
														case 0: return _swerve;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
			}
			break;
		case 'f':
			switch(str[1]) {
				case 'r':
					switch(str[2]) {
						case 'o':
							switch(str[3]) {
								case 'n':
									switch(str[4]) {
										case 't':
											switch(str[5]) {
												case 'i':
													switch(str[6]) {
														case 'e':
															switch(str[7]) {
																case 'r':
																	switch(str[8]) {
																		case 0: return _frontier;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'u':
							switch(str[3]) {
								case 'c':
									switch(str[4]) {
										case 't':
											switch(str[5]) {
												case 'i':
													switch(str[6]) {
														case 'f':
															switch(str[7]) {
																case 'y':
																	switch(str[8]) {
																		case 0: return _fructify;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 's':
									switch(str[4]) {
										case 't':
											switch(str[5]) {
												case 'r':
													switch(str[6]) {
														case 'a':
															switch(str[7]) {
																case 't':
																	switch(str[8]) {
																		case 'e':
																			switch(str[9]) {
																				case 0: return _frustrate;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'a':
							switch(str[3]) {
								case 'c':
									switch(str[4]) {
										case 't':
											switch(str[5]) {
												case 'i':
													switch(str[6]) {
														case 'o':
															switch(str[7]) {
																case 'u':
																	switch(str[8]) {
																		case 's':
																			switch(str[9]) {
																				case 0: return _fractious;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
										case 'a':
											switch(str[5]) {
												case 's':
													switch(str[6]) {
														case 0: return _fracas;
													}
													break;
											}
											break;
									}
									break;
								case 'u':
									switch(str[4]) {
										case 'g':
											switch(str[5]) {
												case 'h':
													switch(str[6]) {
														case 't':
															switch(str[7]) {
																case 0: return _fraught;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'y':
									switch(str[4]) {
										case 0: return _fray;
									}
									break;
							}
							break;
						case 'e':
							switch(str[3]) {
								case 's':
									switch(str[4]) {
										case 'c':
											switch(str[5]) {
												case 'o':
													switch(str[6]) {
														case 0: return _fresco;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'i':
							switch(str[3]) {
								case 'e':
									switch(str[4]) {
										case 'z':
											switch(str[5]) {
												case 'e':
													switch(str[6]) {
														case 0: return _frieze;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'a':
					switch(str[2]) {
						case 'n':
							switch(str[3]) {
								case 'f':
									switch(str[4]) {
										case 'a':
											switch(str[5]) {
												case 'r':
													switch(str[6]) {
														case 'e':
															switch(str[7]) {
																case 0: return _fanfare;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'c':
									switch(str[4]) {
										case 'y':
											switch(str[5]) {
												case 0: return _fancy;
											}
											break;
									}
									break;
							}
							break;
						case 'r':
							switch(str[3]) {
								case 'e':
									switch(str[4]) {
										case 0: return _fare;
									}
									break;
							}
							break;
						case 'c':
							switch(str[3]) {
								case 't':
									switch(str[4]) {
										case 'i':
											switch(str[5]) {
												case 't':
													switch(str[6]) {
														case 'i':
															switch(str[7]) {
																case 'o':
																	switch(str[8]) {
																		case 'u':
																			switch(str[9]) {
																				case 's':
																					switch(str[10]) {
																						case 0: return _factitious;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
												case 'o':
													switch(str[6]) {
														case 'n':
															switch(str[7]) {
																case 0: return _faction;
															}
															break;
														case 'u':
															switch(str[7]) {
																case 's':
																	switch(str[8]) {
																		case 0: return _factious;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'i':
									switch(str[4]) {
										case 'l':
											switch(str[5]) {
												case 'e':
													switch(str[6]) {
														case 0: return _facile;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 't':
							switch(str[3]) {
								case 'u':
									switch(str[4]) {
										case 'o':
											switch(str[5]) {
												case 'u':
													switch(str[6]) {
														case 's':
															switch(str[7]) {
																case 0: return _fatuous;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'h':
									switch(str[4]) {
										case 'o':
											switch(str[5]) {
												case 'm':
													switch(str[6]) {
														case 0: return _fathom;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'd':
							switch(str[3]) {
								case 0: return _fad;
							}
							break;
						case 'l':
							switch(str[3]) {
								case 'l':
									switch(str[4]) {
										case 'o':
											switch(str[5]) {
												case 'w':
													switch(str[6]) {
														case 0: return _fallow;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'w':
							switch(str[3]) {
								case 'n':
									switch(str[4]) {
										case 'i':
											switch(str[5]) {
												case 'n':
													switch(str[6]) {
														case 'g':
															switch(str[7]) {
																case 0: return _fawning;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'o':
					switch(str[2]) {
						case 'r':
							switch(str[3]) {
								case 'e':
									switch(str[4]) {
										case 'b':
											switch(str[5]) {
												case 'e':
													switch(str[6]) {
														case 'a':
															switch(str[7]) {
																case 'r':
																	switch(str[8]) {
																		case 0: return _forebear;
																	}
																	break;
															}
															break;
													}
													break;
												case 'o':
													switch(str[6]) {
														case 'd':
															switch(str[7]) {
																case 'i':
																	switch(str[8]) {
																		case 'n':
																			switch(str[9]) {
																				case 'g':
																					switch(str[10]) {
																						case 0: return _foreboding;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'd':
									switch(str[4]) {
										case 0: return _ford;
									}
									break;
								case 't':
									switch(str[4]) {
										case 'i':
											switch(str[5]) {
												case 't':
													switch(str[6]) {
														case 'u':
															switch(str[7]) {
																case 'd':
																	switch(str[8]) {
																		case 'e':
																			switch(str[9]) {
																				case 0: return _fortitude;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 's':
									switch(str[4]) {
										case 'a':
											switch(str[5]) {
												case 'k':
													switch(str[6]) {
														case 'e':
															switch(str[7]) {
																case 0: return _forsake;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'm':
									switch(str[4]) {
										case 'a':
											switch(str[5]) {
												case 'l':
													switch(str[6]) {
														case 0: return _formal;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 's':
							switch(str[3]) {
								case 't':
									switch(str[4]) {
										case 'e':
											switch(str[5]) {
												case 'r':
													switch(str[6]) {
														case 0: return _foster;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'i':
							switch(str[3]) {
								case 's':
									switch(str[4]) {
										case 't':
											switch(str[5]) {
												case 0: return _foist;
											}
											break;
									}
									break;
								case 'l':
									switch(str[4]) {
										case 0: return _foil;
									}
									break;
							}
							break;
						case 'o':
							switch(str[3]) {
								case 'l':
									switch(str[4]) {
										case 'h':
											switch(str[5]) {
												case 'a':
													switch(str[6]) {
														case 'r':
															switch(str[7]) {
																case 'd':
																	switch(str[8]) {
																		case 'y':
																			switch(str[9]) {
																				case 0: return _foolhardy;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'u':
					switch(str[2]) {
						case 'r':
							switch(str[3]) {
								case 'n':
									switch(str[4]) {
										case 'i':
											switch(str[5]) {
												case 's':
													switch(str[6]) {
														case 'h':
															switch(str[7]) {
																case 0: return _furnish;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'n':
							switch(str[3]) {
								case 'c':
									switch(str[4]) {
										case 't':
											switch(str[5]) {
												case 'i':
													switch(str[6]) {
														case 'o':
															switch(str[7]) {
																case 'n':
																	switch(str[8]) {
																		case 'a':
																			switch(str[9]) {
																				case 'r':
																					switch(str[10]) {
																						case 'y':
																							switch(str[11]) {
																								case 0: return _functionary;
																							}
																							break;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'l':
							switch(str[3]) {
								case 'm':
									switch(str[4]) {
										case 'i':
											switch(str[5]) {
												case 'n':
													switch(str[6]) {
														case 'a':
															switch(str[7]) {
																case 't':
																	switch(str[8]) {
																		case 'e':
																			switch(str[9]) {
																				case 0: return _fulminate;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'i':
					switch(str[2]) {
						case 'n':
							switch(str[3]) {
								case 'a':
									switch(str[4]) {
										case 'n':
											switch(str[5]) {
												case 'c':
													switch(str[6]) {
														case 'i':
															switch(str[7]) {
																case 'a':
																	switch(str[8]) {
																		case 'l':
																			switch(str[9]) {
																				case 0: return _financial;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 't':
							switch(str[3]) {
								case 'f':
									switch(str[4]) {
										case 'u':
											switch(str[5]) {
												case 'l':
													switch(str[6]) {
														case 0: return _fitful;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 's':
							switch(str[3]) {
								case 's':
									switch(str[4]) {
										case 'u':
											switch(str[5]) {
												case 'r':
													switch(str[6]) {
														case 'e':
															switch(str[7]) {
																case 0: return _fissure;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'r':
							switch(str[3]) {
								case 'e':
									switch(str[4]) {
										case 'b':
											switch(str[5]) {
												case 'r':
													switch(str[6]) {
														case 'a':
															switch(str[7]) {
																case 'n':
																	switch(str[8]) {
																		case 'd':
																			switch(str[9]) {
																				case 0: return _firebrand;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'a':
							switch(str[3]) {
								case 's':
									switch(str[4]) {
										case 'c':
											switch(str[5]) {
												case 'o':
													switch(str[6]) {
														case 0: return _fiasco;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'l':
							switch(str[3]) {
								case 'c':
									switch(str[4]) {
										case 'h':
											switch(str[5]) {
												case 0: return _filch;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'e':
					switch(str[2]) {
						case 'r':
							switch(str[3]) {
								case 'v':
									switch(str[4]) {
										case 'e':
											switch(str[5]) {
												case 'n':
													switch(str[6]) {
														case 't':
															switch(str[7]) {
																case 0: return _fervent;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'l':
							switch(str[3]) {
								case 'i':
									switch(str[4]) {
										case 'c':
											switch(str[5]) {
												case 'i':
													switch(str[6]) {
														case 't':
															switch(str[7]) {
																case 'o':
																	switch(str[8]) {
																		case 'u':
																			switch(str[9]) {
																				case 's':
																					switch(str[10]) {
																						case 0: return _felicitous;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'l':
					switch(str[2]) {
						case 'a':
							switch(str[3]) {
								case 'i':
									switch(str[4]) {
										case 'l':
											switch(str[5]) {
												case 0: return _flail;
											}
											break;
										case 'r':
											switch(str[5]) {
												case 0: return _flair;
											}
											break;
									}
									break;
								case 'y':
									switch(str[4]) {
										case 0: return _flay;
									}
									break;
								case 'g':
									switch(str[4]) {
										case 0: return _flag;
									}
									break;
							}
							break;
						case 'o':
							switch(str[3]) {
								case 't':
									switch(str[4]) {
										case 'i':
											switch(str[5]) {
												case 'l':
													switch(str[6]) {
														case 'l':
															switch(str[7]) {
																case 'a':
																	switch(str[8]) {
																		case 0: return _flotilla;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'u':
									switch(str[4]) {
										case 'r':
											switch(str[5]) {
												case 'i':
													switch(str[6]) {
														case 's':
															switch(str[7]) {
																case 'h':
																	switch(str[8]) {
																		case 0: return _flourish;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
			}
			break;
		case 'v':
			switch(str[1]) {
				case 'i':
					switch(str[2]) {
						case 's':
							switch(str[3]) {
								case 'c':
									switch(str[4]) {
										case 'i':
											switch(str[5]) {
												case 'd':
													switch(str[6]) {
														case 0: return _viscid;
													}
													break;
											}
											break;
										case 'o':
											switch(str[5]) {
												case 'u':
													switch(str[6]) {
														case 's':
															switch(str[7]) {
																case 0: return _viscous;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'a':
									switch(str[4]) {
										case 'g':
											switch(str[5]) {
												case 'e':
													switch(str[6]) {
														case 0: return _visage;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'r':
							switch(str[3]) {
								case 't':
									switch(str[4]) {
										case 'u':
											switch(str[5]) {
												case 'o':
													switch(str[6]) {
														case 's':
															switch(str[7]) {
																case 'o':
																	switch(str[8]) {
																		case 0: return _virtuoso;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 't':
							switch(str[3]) {
								case 'i':
									switch(str[4]) {
										case 'a':
											switch(str[5]) {
												case 't':
													switch(str[6]) {
														case 'e':
															switch(str[7]) {
																case 0: return _vitiate;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'l':
							switch(str[3]) {
								case 'i':
									switch(str[4]) {
										case 'f':
											switch(str[5]) {
												case 'y':
													switch(str[6]) {
														case 0: return _vilify;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'n':
							switch(str[3]) {
								case 't':
									switch(str[4]) {
										case 'n':
											switch(str[5]) {
												case 'e':
													switch(str[6]) {
														case 'r':
															switch(str[7]) {
																case 0: return _vintner;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'e':
					switch(str[2]) {
						case 'n':
							switch(str[3]) {
								case 'i':
									switch(str[4]) {
										case 'a':
											switch(str[5]) {
												case 'l':
													switch(str[6]) {
														case 0: return _venial;
													}
													break;
											}
											break;
									}
									break;
								case 'e':
									switch(str[4]) {
										case 'r':
											switch(str[5]) {
												case 'a':
													switch(str[6]) {
														case 't':
															switch(str[7]) {
																case 'e':
																	switch(str[8]) {
																		case 0: return _venerate;
																	}
																	break;
															}
															break;
														case 'b':
															switch(str[7]) {
																case 'l':
																	switch(str[8]) {
																		case 'e':
																			switch(str[9]) {
																				case 0: return _venerable;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 't':
									switch(str[4]) {
										case 'u':
											switch(str[5]) {
												case 'r':
													switch(str[6]) {
														case 'e':
															switch(str[7]) {
																case 0: return _venture;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'x':
							switch(str[3]) {
								case 0: return _vex;
							}
							break;
						case 'r':
							switch(str[3]) {
								case 'a':
									switch(str[4]) {
										case 'c':
											switch(str[5]) {
												case 'i':
													switch(str[6]) {
														case 'o':
															switch(str[7]) {
																case 'u':
																	switch(str[8]) {
																		case 's':
																			switch(str[9]) {
																				case 0: return _veracious;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'i':
									switch(str[4]) {
										case 't':
											switch(str[5]) {
												case 'a':
													switch(str[6]) {
														case 'b':
															switch(str[7]) {
																case 'l':
																	switch(str[8]) {
																		case 'e':
																			switch(str[9]) {
																				case 0: return _veritable;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 's':
							switch(str[3]) {
								case 't':
									switch(str[4]) {
										case 'i':
											switch(str[5]) {
												case 'g':
													switch(str[6]) {
														case 'e':
															switch(str[7]) {
																case 0: return _vestige;
															}
															break;
													}
													break;
											}
											break;
										case 'm':
											switch(str[5]) {
												case 'e':
													switch(str[6]) {
														case 'n':
															switch(str[7]) {
																case 't':
																	switch(str[8]) {
																		case 0: return _vestment;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'a':
					switch(str[2]) {
						case 'i':
							switch(str[3]) {
								case 'n':
									switch(str[4]) {
										case 0: return _vain;
									}
									break;
							}
							break;
						case 'c':
							switch(str[3]) {
								case 'a':
									switch(str[4]) {
										case 't':
											switch(str[5]) {
												case 'e':
													switch(str[6]) {
														case 0: return _vacate;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 's':
							switch(str[3]) {
								case 's':
									switch(str[4]) {
										case 'a':
											switch(str[5]) {
												case 'l':
													switch(str[6]) {
														case 0: return _vassal;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'g':
							switch(str[3]) {
								case 'a':
									switch(str[4]) {
										case 'r':
											switch(str[5]) {
												case 'y':
													switch(str[6]) {
														case 0: return _vagary;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 't':
							switch(str[3]) {
								case 0: return _vat;
							}
							break;
						case 'p':
							switch(str[3]) {
								case 'i':
									switch(str[4]) {
										case 'd':
											switch(str[5]) {
												case 0: return _vapid;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'o':
					switch(str[2]) {
						case 'l':
							switch(str[3]) {
								case 'u':
									switch(str[4]) {
										case 'b':
											switch(str[5]) {
												case 'l':
													switch(str[6]) {
														case 'e':
															switch(str[7]) {
																case 0: return _voluble;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'c':
							switch(str[3]) {
								case 'i':
									switch(str[4]) {
										case 'f':
											switch(str[5]) {
												case 'e':
													switch(str[6]) {
														case 'r':
															switch(str[7]) {
																case 'o':
																	switch(str[8]) {
																		case 'u':
																			switch(str[9]) {
																				case 's':
																					switch(str[10]) {
																						case 0: return _vociferous;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
			}
			break;
		case 'l':
			switch(str[1]) {
				case 'a':
					switch(str[2]) {
						case 'b':
							switch(str[3]) {
								case 'o':
									switch(str[4]) {
										case 'r':
											switch(str[5]) {
												case 0: return _labor;
											}
											break;
									}
									break;
							}
							break;
						case 't':
							switch(str[3]) {
								case 'i':
									switch(str[4]) {
										case 't':
											switch(str[5]) {
												case 'u':
													switch(str[6]) {
														case 'd':
															switch(str[7]) {
																case 'e':
																	switch(str[8]) {
																		case 0: return _latitude;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'n':
							switch(str[3]) {
								case 'c':
									switch(str[4]) {
										case 'e':
											switch(str[5]) {
												case 't':
													switch(str[6]) {
														case 0: return _lancet;
													}
													break;
											}
											break;
									}
									break;
								case 'g':
									switch(str[4]) {
										case 'u':
											switch(str[5]) {
												case 'i':
													switch(str[6]) {
														case 'd':
															switch(str[7]) {
																case 0: return _languid;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'r':
							switch(str[3]) {
								case 'g':
									switch(str[4]) {
										case 'e':
											switch(str[5]) {
												case 's':
													switch(str[6]) {
														case 's':
															switch(str[7]) {
																case 'e':
																	switch(str[8]) {
																		case 0: return _largesse;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'd':
									switch(str[4]) {
										case 'e':
											switch(str[5]) {
												case 'r':
													switch(str[6]) {
														case 0: return _larder;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'g':
							switch(str[3]) {
								case 'g':
									switch(str[4]) {
										case 'a':
											switch(str[5]) {
												case 'r':
													switch(str[6]) {
														case 'd':
															switch(str[7]) {
																case 0: return _laggard;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'o':
					switch(str[2]) {
						case 'f':
							switch(str[3]) {
								case 't':
									switch(str[4]) {
										case 'y':
											switch(str[5]) {
												case 0: return _lofty;
											}
											break;
									}
									break;
							}
							break;
						case 'a':
							switch(str[3]) {
								case 't':
									switch(str[4]) {
										case 'h':
											switch(str[5]) {
												case 0: return _loath;
											}
											break;
									}
									break;
							}
							break;
						case 'u':
							switch(str[3]) {
								case 't':
									switch(str[4]) {
										case 0: return _lout;
									}
									break;
							}
							break;
						case 'q':
							switch(str[3]) {
								case 'u':
									switch(str[4]) {
										case 'a':
											switch(str[5]) {
												case 'c':
													switch(str[6]) {
														case 'i':
															switch(str[7]) {
																case 'o':
																	switch(str[8]) {
																		case 'u':
																			switch(str[9]) {
																				case 's':
																					switch(str[10]) {
																						case 0: return _loquacious;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'd':
							switch(str[3]) {
								case 'e':
									switch(str[4]) {
										case 0: return _lode;
									}
									break;
							}
							break;
					}
					break;
				case 'i':
					switch(str[2]) {
						case 'b':
							switch(str[3]) {
								case 'e':
									switch(str[4]) {
										case 'r':
											switch(str[5]) {
												case 't':
													switch(str[6]) {
														case 'i':
															switch(str[7]) {
																case 'n':
																	switch(str[8]) {
																		case 'e':
																			switch(str[9]) {
																				case 0: return _libertine;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
												case 'a':
													switch(str[6]) {
														case 'l':
															switch(str[7]) {
																case 0: return _liberal;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'r':
									switch(str[4]) {
										case 'e':
											switch(str[5]) {
												case 't':
													switch(str[6]) {
														case 't':
															switch(str[7]) {
																case 'o':
																	switch(str[8]) {
																		case 0: return _libretto;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'v':
							switch(str[3]) {
								case 'e':
									switch(str[4]) {
										case 'l':
											switch(str[5]) {
												case 'i':
													switch(str[6]) {
														case 'h':
															switch(str[7]) {
																case 'o':
																	switch(str[8]) {
																		case 'o':
																			switch(str[9]) {
																				case 'd':
																					switch(str[10]) {
																						case 0: return _livelihood;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'n':
							switch(str[3]) {
								case 'e':
									switch(str[4]) {
										case 'a':
											switch(str[5]) {
												case 'm':
													switch(str[6]) {
														case 'e':
															switch(str[7]) {
																case 'n':
																	switch(str[8]) {
																		case 't':
																			switch(str[9]) {
																				case 0: return _lineament;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'u':
					switch(str[2]) {
						case 'x':
							switch(str[3]) {
								case 'u':
									switch(str[4]) {
										case 'r':
											switch(str[5]) {
												case 'i':
													switch(str[6]) {
														case 'a':
															switch(str[7]) {
																case 'n':
																	switch(str[8]) {
																		case 't':
																			switch(str[9]) {
																				case 0: return _luxuriant;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'm':
							switch(str[3]) {
								case 'i':
									switch(str[4]) {
										case 'n':
											switch(str[5]) {
												case 'a':
													switch(str[6]) {
														case 'r':
															switch(str[7]) {
																case 'y':
																	switch(str[8]) {
																		case 0: return _luminary;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'e':
					switch(str[2]) {
						case 'v':
							switch(str[3]) {
								case 'i':
									switch(str[4]) {
										case 't':
											switch(str[5]) {
												case 'y':
													switch(str[6]) {
														case 0: return _levity;
													}
													break;
											}
											break;
									}
									break;
								case 'e':
									switch(str[4]) {
										case 'l':
											switch(str[5]) {
												case 0: return _level;
											}
											break;
									}
									break;
							}
							break;
						case 'a':
							switch(str[3]) {
								case 'g':
									switch(str[4]) {
										case 'u':
											switch(str[5]) {
												case 'e':
													switch(str[6]) {
														case 0: return _league;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
			}
			break;
		case 'r':
			switch(str[1]) {
				case 'e':
					switch(str[2]) {
						case 'n':
							switch(str[3]) {
								case 'e':
									switch(str[4]) {
										case 'g':
											switch(str[5]) {
												case 'a':
													switch(str[6]) {
														case 'd':
															switch(str[7]) {
																case 'e':
																	switch(str[8]) {
																		case 0: return _renegade;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'd':
									switch(str[4]) {
										case 'e':
											switch(str[5]) {
												case 'r':
													switch(str[6]) {
														case 0: return _render;
													}
													break;
											}
											break;
										case 0: return _rend;
									}
									break;
							}
							break;
						case 'f':
							switch(str[3]) {
								case 'e':
									switch(str[4]) {
										case 'c':
											switch(str[5]) {
												case 't':
													switch(str[6]) {
														case 'o':
															switch(str[7]) {
																case 'r':
																	switch(str[8]) {
																		case 'y':
																			switch(str[9]) {
																				case 0: return _refectory;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'r':
									switch(str[4]) {
										case 'a':
											switch(str[5]) {
												case 'c':
													switch(str[6]) {
														case 't':
															switch(str[7]) {
																case 'o':
																	switch(str[8]) {
																		case 'r':
																			switch(str[9]) {
																				case 'y':
																					switch(str[10]) {
																						case 0: return _refractory;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'l':
									switch(str[4]) {
										case 'e':
											switch(str[5]) {
												case 'c':
													switch(str[6]) {
														case 't':
															switch(str[7]) {
																case 0: return _reflect;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 's':
							switch(str[3]) {
								case 'o':
									switch(str[4]) {
										case 'u':
											switch(str[5]) {
												case 'r':
													switch(str[6]) {
														case 'c':
															switch(str[7]) {
																case 'e':
																	switch(str[8]) {
																		case 0: return _resource;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
										case 'n':
											switch(str[5]) {
												case 'a':
													switch(str[6]) {
														case 'n':
															switch(str[7]) {
																case 't':
																	switch(str[8]) {
																		case 0: return _resonant;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 't':
									switch(str[4]) {
										case 'r':
											switch(str[5]) {
												case 'a':
													switch(str[6]) {
														case 'i':
															switch(str[7]) {
																case 'n':
																	switch(str[8]) {
																		case 'e':
																			switch(str[9]) {
																				case 'd':
																					switch(str[10]) {
																						case 0: return _restrained;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 't':
							switch(str[3]) {
								case 'e':
									switch(str[4]) {
										case 'n':
											switch(str[5]) {
												case 't':
													switch(str[6]) {
														case 'i':
															switch(str[7]) {
																case 'v':
																	switch(str[8]) {
																		case 'e':
																			switch(str[9]) {
																				case 0: return _retentive;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'r':
									switch(str[4]) {
										case 'e':
											switch(str[5]) {
												case 'n':
													switch(str[6]) {
														case 'c':
															switch(str[7]) {
																case 'h':
																	switch(str[8]) {
																		case 0: return _retrench;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'i':
									switch(str[4]) {
										case 'r':
											switch(str[5]) {
												case 'i':
													switch(str[6]) {
														case 'n':
															switch(str[7]) {
																case 'g':
																	switch(str[8]) {
																		case 0: return _retiring;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
										case 'c':
											switch(str[5]) {
												case 'e':
													switch(str[6]) {
														case 'n':
															switch(str[7]) {
																case 't':
																	switch(str[8]) {
																		case 0: return _reticent;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
										case 'n':
											switch(str[5]) {
												case 'u':
													switch(str[6]) {
														case 'e':
															switch(str[7]) {
																case 0: return _retinue;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'a':
									switch(str[4]) {
										case 'i':
											switch(str[5]) {
												case 'n':
													switch(str[6]) {
														case 'e':
															switch(str[7]) {
																case 'r':
																	switch(str[8]) {
																		case 0: return _retainer;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'o':
									switch(str[4]) {
										case 'r':
											switch(str[5]) {
												case 't':
													switch(str[6]) {
														case 0: return _retort;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'b':
							switch(str[3]) {
								case 'u':
									switch(str[4]) {
										case 'k':
											switch(str[5]) {
												case 'e':
													switch(str[6]) {
														case 0: return _rebuke;
													}
													break;
											}
											break;
										case 's':
											switch(str[5]) {
												case 0: return _rebus;
											}
											break;
									}
									break;
							}
							break;
						case 'c':
							switch(str[3]) {
								case 'o':
									switch(str[4]) {
										case 'v':
											switch(str[5]) {
												case 'e':
													switch(str[6]) {
														case 'r':
															switch(str[7]) {
																case 'i':
																	switch(str[8]) {
																		case 'n':
																			switch(str[9]) {
																				case 'g':
																					switch(str[10]) {
																						case 0: return _recovering;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
										case 'u':
											switch(str[5]) {
												case 'r':
													switch(str[6]) {
														case 's':
															switch(str[7]) {
																case 'e':
																	switch(str[8]) {
																		case 0: return _recourse;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
										case 'n':
											switch(str[5]) {
												case 'd':
													switch(str[6]) {
														case 'i':
															switch(str[7]) {
																case 't':
																	switch(str[8]) {
																		case 'e':
																			switch(str[9]) {
																				case 0: return _recondite;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'p':
							switch(str[3]) {
								case 'r':
									switch(str[4]) {
										case 'o':
											switch(str[5]) {
												case 'b':
													switch(str[6]) {
														case 'a':
															switch(str[7]) {
																case 't':
																	switch(str[8]) {
																		case 'i':
																			switch(str[9]) {
																				case 'o':
																					switch(str[10]) {
																						case 'n':
																							switch(str[11]) {
																								case 0: return _reprobation;
																							}
																							break;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
										case 'i':
											switch(str[5]) {
												case 's':
													switch(str[6]) {
														case 'e':
															switch(str[7]) {
																case 0: return _reprise;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'i':
									switch(str[4]) {
										case 'n':
											switch(str[5]) {
												case 'e':
													switch(str[6]) {
														case 0: return _repine;
													}
													break;
											}
											break;
									}
									break;
								case 'a':
									switch(str[4]) {
										case 's':
											switch(str[5]) {
												case 't':
													switch(str[6]) {
														case 0: return _repast;
													}
													break;
											}
											break;
									}
									break;
								case 'e':
									switch(str[4]) {
										case 'a':
											switch(str[5]) {
												case 'l':
													switch(str[6]) {
														case 0: return _repeal;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'v':
							switch(str[3]) {
								case 'e':
									switch(str[4]) {
										case 'r':
											switch(str[5]) {
												case 'i':
													switch(str[6]) {
														case 'e':
															switch(str[7]) {
																case 0: return _reverie;
															}
															break;
													}
													break;
											}
											break;
										case 'l':
											switch(str[5]) {
												case 'r':
													switch(str[6]) {
														case 'y':
															switch(str[7]) {
																case 0: return _revelry;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'u':
									switch(str[4]) {
										case 'l':
											switch(str[5]) {
												case 's':
													switch(str[6]) {
														case 'i':
															switch(str[7]) {
																case 'o':
																	switch(str[8]) {
																		case 'n':
																			switch(str[9]) {
																				case 0: return _revulsion;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'a':
							switch(str[3]) {
								case 'd':
									switch(str[4]) {
										case 'j':
											switch(str[5]) {
												case 'u':
													switch(str[6]) {
														case 's':
															switch(str[7]) {
																case 't':
																	switch(str[8]) {
																		case 'm':
																			switch(str[9]) {
																				case 'e':
																					switch(str[10]) {
																						case 'n':
																							switch(str[11]) {
																								case 't':
																									switch(str[12]) {
																										case 0: return _readjustment;
																									}
																									break;
																							}
																							break;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'c':
									switch(str[4]) {
										case 't':
											switch(str[5]) {
												case 'i':
													switch(str[6]) {
														case 'o':
															switch(str[7]) {
																case 'n':
																	switch(str[8]) {
																		case 'a':
																			switch(str[9]) {
																				case 'r':
																					switch(str[10]) {
																						case 'y':
																							switch(str[11]) {
																								case 0: return _reactionary;
																							}
																							break;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'j':
							switch(str[3]) {
								case 'o':
									switch(str[4]) {
										case 'i':
											switch(str[5]) {
												case 'n':
													switch(str[6]) {
														case 'd':
															switch(str[7]) {
																case 'e':
																	switch(str[8]) {
																		case 'r':
																			switch(str[9]) {
																				case 0: return _rejoinder;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'm':
							switch(str[3]) {
								case 'i':
									switch(str[4]) {
										case 's':
											switch(str[5]) {
												case 's':
													switch(str[6]) {
														case 'i':
															switch(str[7]) {
																case 'o':
																	switch(str[8]) {
																		case 'n':
																			switch(str[9]) {
																				case 0: return _remission;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'd':
							switch(str[3]) {
								case 'o':
									switch(str[4]) {
										case 'u':
											switch(str[5]) {
												case 'b':
													switch(str[6]) {
														case 't':
															switch(str[7]) {
																case 'a':
																	switch(str[8]) {
																		case 'b':
																			switch(str[9]) {
																				case 'l':
																					switch(str[10]) {
																						case 'e':
																							switch(str[11]) {
																								case 0: return _redoubtable;
																							}
																							break;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
										case 'l':
											switch(str[5]) {
												case 'e':
													switch(str[6]) {
														case 'n':
															switch(str[7]) {
																case 't':
																	switch(str[8]) {
																		case 0: return _redolent;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'o':
					switch(str[2]) {
						case 'u':
							switch(str[3]) {
								case 't':
									switch(str[4]) {
										case 0: return _rout;
									}
									break;
							}
							break;
						case 's':
							switch(str[3]) {
								case 'e':
									switch(str[4]) {
										case 'a':
											switch(str[5]) {
												case 't':
													switch(str[6]) {
														case 'e':
															switch(str[7]) {
																case 0: return _roseate;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'c':
							switch(str[3]) {
								case 'o':
									switch(str[4]) {
										case 'c':
											switch(str[5]) {
												case 'o':
													switch(str[6]) {
														case 0: return _rococo;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'i':
							switch(str[3]) {
								case 'l':
									switch(str[4]) {
										case 0: return _roil;
									}
									break;
							}
							break;
					}
					break;
				case 'u':
					switch(str[2]) {
						case 'd':
							switch(str[3]) {
								case 'i':
									switch(str[4]) {
										case 'm':
											switch(str[5]) {
												case 'e':
													switch(str[6]) {
														case 'n':
															switch(str[7]) {
																case 't':
																	switch(str[8]) {
																		case 0: return _rudiment;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 's':
							switch(str[3]) {
								case 'e':
									switch(str[4]) {
										case 0: return _ruse;
									}
									break;
							}
							break;
						case 'b':
							switch(str[3]) {
								case 'r':
									switch(str[4]) {
										case 'i':
											switch(str[5]) {
												case 'c':
													switch(str[6]) {
														case 0: return _rubric;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'a':
					switch(str[2]) {
						case 'n':
							switch(str[3]) {
								case 'c':
									switch(str[4]) {
										case 'o':
											switch(str[5]) {
												case 'r':
													switch(str[6]) {
														case 0: return _rancor;
													}
													break;
											}
											break;
									}
									break;
								case 'k':
									switch(str[4]) {
										case 'l':
											switch(str[5]) {
												case 'e':
													switch(str[6]) {
														case 0: return _rankle;
													}
													break;
											}
											break;
									}
									break;
								case 'g':
									switch(str[4]) {
										case 'e':
											switch(str[5]) {
												case 0: return _range;
											}
											break;
										case 'i':
											switch(str[5]) {
												case 'n':
													switch(str[6]) {
														case 'g':
															switch(str[7]) {
																case 0: return _ranging;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'i':
							switch(str[3]) {
								case 'm':
									switch(str[4]) {
										case 'e':
											switch(str[5]) {
												case 'n':
													switch(str[6]) {
														case 't':
															switch(str[7]) {
																case 0: return _raiment;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'l':
									switch(str[4]) {
										case 0: return _rail;
									}
									break;
							}
							break;
						case 't':
							switch(str[3]) {
								case 'i':
									switch(str[4]) {
										case 'f':
											switch(str[5]) {
												case 'y':
													switch(str[6]) {
														case 0: return _ratify;
													}
													break;
											}
											break;
										case 'o':
											switch(str[5]) {
												case 'n':
													switch(str[6]) {
														case 'a':
															switch(str[7]) {
																case 'l':
																	switch(str[8]) {
																		case 'i':
																			switch(str[9]) {
																				case 's':
																					switch(str[10]) {
																						case 'm':
																							switch(str[11]) {
																								case 0: return _rationalism;
																							}
																							break;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'v':
							switch(str[3]) {
								case 'e':
									switch(str[4]) {
										case 0: return _rave;
										case 'l':
											switch(str[5]) {
												case 0: return _ravel;
											}
											break;
									}
									break;
							}
							break;
						case 'm':
							switch(str[3]) {
								case 'i':
									switch(str[4]) {
										case 'f':
											switch(str[5]) {
												case 'y':
													switch(str[6]) {
														case 0: return _ramify;
													}
													break;
											}
											break;
									}
									break;
								case 'p':
									switch(str[4]) {
										case 'a':
											switch(str[5]) {
												case 'r':
													switch(str[6]) {
														case 't':
															switch(str[7]) {
																case 0: return _rampart;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'p':
							switch(str[3]) {
								case 't':
									switch(str[4]) {
										case 0: return _rapt;
									}
									break;
							}
							break;
						case 'r':
							switch(str[3]) {
								case 'e':
									switch(str[4]) {
										case 'f':
											switch(str[5]) {
												case 'i':
													switch(str[6]) {
														case 'e':
															switch(str[7]) {
																case 'd':
																	switch(str[8]) {
																		case 0: return _rarefied;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'k':
							switch(str[3]) {
								case 'i':
									switch(str[4]) {
										case 's':
											switch(str[5]) {
												case 'h':
													switch(str[6]) {
														case 0: return _rakish;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'i':
					switch(str[2]) {
						case 'd':
							switch(str[3]) {
								case 'e':
									switch(str[4]) {
										case 'r':
											switch(str[5]) {
												case 0: return _rider;
											}
											break;
									}
									break;
							}
							break;
						case 'p':
							switch(str[3]) {
								case 'p':
									switch(str[4]) {
										case 'l':
											switch(str[5]) {
												case 'e':
													switch(str[6]) {
														case 0: return _ripple;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'l':
							switch(str[3]) {
								case 'e':
									switch(str[4]) {
										case 0: return _rile;
									}
									break;
							}
							break;
					}
					break;
				case 'h':
					switch(str[2]) {
						case 'e':
							switch(str[3]) {
								case 't':
									switch(str[4]) {
										case 'o':
											switch(str[5]) {
												case 'r':
													switch(str[6]) {
														case 'i':
															switch(str[7]) {
																case 'c':
																	switch(str[8]) {
																		case 0: return _rhetoric;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
			}
			break;
		case 'g':
			switch(str[1]) {
				case 'a':
					switch(str[2]) {
						case 'l':
							switch(str[3]) {
								case 'e':
									switch(str[4]) {
										case 0: return _gale;
									}
									break;
							}
							break;
						case 'u':
							switch(str[3]) {
								case 'n':
									switch(str[4]) {
										case 't':
											switch(str[5]) {
												case 0: return _gaunt;
											}
											break;
									}
									break;
							}
							break;
						case 'i':
							switch(str[3]) {
								case 'n':
									switch(str[4]) {
										case 's':
											switch(str[5]) {
												case 'a':
													switch(str[6]) {
														case 'y':
															switch(str[7]) {
																case 0: return _gainsay;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'r':
							switch(str[3]) {
								case 'b':
									switch(str[4]) {
										case 'l':
											switch(str[5]) {
												case 'e':
													switch(str[6]) {
														case 0: return _garble;
													}
													break;
											}
											break;
									}
									break;
								case 'i':
									switch(str[4]) {
										case 's':
											switch(str[5]) {
												case 'h':
													switch(str[6]) {
														case 0: return _garish;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'w':
							switch(str[3]) {
								case 'k':
									switch(str[4]) {
										case 0: return _gawk;
									}
									break;
							}
							break;
						case 'd':
							switch(str[3]) {
								case 'f':
									switch(str[4]) {
										case 'l':
											switch(str[5]) {
												case 'y':
													switch(str[6]) {
														case 0: return _gadfly;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'r':
					switch(str[2]) {
						case 'a':
							switch(str[3]) {
								case 'n':
									switch(str[4]) {
										case 't':
											switch(str[5]) {
												case 0: return _grant;
											}
											break;
										case 'a':
											switch(str[5]) {
												case 'r':
													switch(str[6]) {
														case 'y':
															switch(str[7]) {
																case 0: return _granary;
															}
															break;
													}
													break;
											}
											break;
										case 'd':
											switch(str[5]) {
												case 'i':
													switch(str[6]) {
														case 'l':
															switch(str[7]) {
																case 'o':
																	switch(str[8]) {
																		case 'q':
																			switch(str[9]) {
																				case 'u':
																					switch(str[10]) {
																						case 'e':
																							switch(str[11]) {
																								case 'n':
																									switch(str[12]) {
																										case 't':
																											switch(str[13]) {
																												case 0: return _grandiloquent;
																											}
																											break;
																									}
																									break;
																							}
																							break;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 't':
									switch(str[4]) {
										case 'i':
											switch(str[5]) {
												case 's':
													switch(str[6]) {
														case 0: return _gratis;
													}
													break;
											}
											break;
									}
									break;
								case 'p':
									switch(str[4]) {
										case 'p':
											switch(str[5]) {
												case 'l':
													switch(str[6]) {
														case 'e':
															switch(str[7]) {
																case 0: return _grapple;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'v':
									switch(str[4]) {
										case 'i':
											switch(str[5]) {
												case 't':
													switch(str[6]) {
														case 'y':
															switch(str[7]) {
																case 0: return _gravity;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'o':
							switch(str[3]) {
								case 'v':
									switch(str[4]) {
										case 'e':
											switch(str[5]) {
												case 'l':
													switch(str[6]) {
														case 0: return _grovel;
													}
													break;
												case 0: return _grove;
											}
											break;
									}
									break;
							}
							break;
						case 'u':
							switch(str[3]) {
								case 'e':
									switch(str[4]) {
										case 'l':
											switch(str[5]) {
												case 0: return _gruel;
											}
											break;
									}
									break;
								case 'd':
									switch(str[4]) {
										case 'g':
											switch(str[5]) {
												case 'i':
													switch(str[6]) {
														case 'n':
															switch(str[7]) {
																case 'g':
																	switch(str[8]) {
																		case 0: return _grudging;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'i':
							switch(str[3]) {
								case 's':
									switch(str[4]) {
										case 'l':
											switch(str[5]) {
												case 'y':
													switch(str[6]) {
														case 0: return _grisly;
													}
													break;
											}
											break;
									}
									break;
								case 'p':
									switch(str[4]) {
										case 'e':
											switch(str[5]) {
												case 0: return _gripe;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'e':
					switch(str[2]) {
						case 'n':
							switch(str[3]) {
								case 'e':
									switch(str[4]) {
										case 'r':
											switch(str[5]) {
												case 'a':
													switch(str[6]) {
														case 't':
															switch(str[7]) {
																case 'e':
																	switch(str[8]) {
																		case 0: return _generate;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
										case 's':
											switch(str[5]) {
												case 'i':
													switch(str[6]) {
														case 's':
															switch(str[7]) {
																case 0: return _genesis;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 't':
									switch(str[4]) {
										case 'r':
											switch(str[5]) {
												case 'y':
													switch(str[6]) {
														case 0: return _gentry;
													}
													break;
											}
											break;
										case 'i':
											switch(str[5]) {
												case 'l':
													switch(str[6]) {
														case 'i':
															switch(str[7]) {
																case 't':
																	switch(str[8]) {
																		case 'y':
																			switch(str[9]) {
																				case 0: return _gentility;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 's':
							switch(str[3]) {
								case 't':
									switch(str[4]) {
										case 'a':
											switch(str[5]) {
												case 't':
													switch(str[6]) {
														case 'e':
															switch(str[7]) {
																case 0: return _gestate;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'u':
					switch(str[2]) {
						case 's':
							switch(str[3]) {
								case 't':
									switch(str[4]) {
										case 'o':
											switch(str[5]) {
												case 0: return _gusto;
											}
											break;
										case 'y':
											switch(str[5]) {
												case 0: return _gusty;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'o':
					switch(str[2]) {
						case 'u':
							switch(str[3]) {
								case 'g':
									switch(str[4]) {
										case 'e':
											switch(str[5]) {
												case 0: return _gouge;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'i':
					switch(str[2]) {
						case 'r':
							switch(str[3]) {
								case 'd':
									switch(str[4]) {
										case 0: return _gird;
									}
									break;
							}
							break;
						case 's':
							switch(str[3]) {
								case 't':
									switch(str[4]) {
										case 0: return _gist;
									}
									break;
							}
							break;
						case 'b':
							switch(str[3]) {
								case 'e':
									switch(str[4]) {
										case 0: return _gibe;
									}
									break;
							}
							break;
					}
					break;
				case 'l':
					switch(str[2]) {
						case 'i':
							switch(str[3]) {
								case 'b':
									switch(str[4]) {
										case 0: return _glib;
									}
									break;
							}
							break;
						case 'o':
							switch(str[3]) {
								case 'w':
									switch(str[4]) {
										case 'e':
											switch(str[5]) {
												case 'r':
													switch(str[6]) {
														case 0: return _glower;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
			}
			break;
		case 't':
			switch(str[1]) {
				case 'u':
					switch(str[2]) {
						case 'r':
							switch(str[3]) {
								case 'g':
									switch(str[4]) {
										case 'i':
											switch(str[5]) {
												case 'd':
													switch(str[6]) {
														case 0: return _turgid;
													}
													break;
											}
											break;
									}
									break;
								case 'e':
									switch(str[4]) {
										case 'e':
											switch(str[5]) {
												case 'n':
													switch(str[6]) {
														case 0: return _tureen;
													}
													break;
											}
											break;
									}
									break;
								case 'b':
									switch(str[4]) {
										case 'i':
											switch(str[5]) {
												case 'd':
													switch(str[6]) {
														case 0: return _turbid;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 't':
							switch(str[3]) {
								case 'e':
									switch(str[4]) {
										case 'l':
											switch(str[5]) {
												case 'a':
													switch(str[6]) {
														case 'g':
															switch(str[7]) {
																case 'e':
																	switch(str[8]) {
																		case 0: return _tutelage;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'r':
					switch(str[2]) {
						case 'e':
							switch(str[3]) {
								case 'n':
									switch(str[4]) {
										case 'c':
											switch(str[5]) {
												case 'h':
													switch(str[6]) {
														case 'a':
															switch(str[7]) {
																case 'n':
																	switch(str[8]) {
																		case 't':
																			switch(str[9]) {
																				case 0: return _trenchant;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'a':
									switch(str[4]) {
										case 'd':
											switch(str[5]) {
												case 0: return _tread;
											}
											break;
									}
									break;
							}
							break;
						case 'a':
							switch(str[3]) {
								case 'd':
									switch(str[4]) {
										case 'u':
											switch(str[5]) {
												case 'c':
													switch(str[6]) {
														case 'e':
															switch(str[7]) {
																case 0: return _traduce;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'p':
									switch(str[4]) {
										case 'p':
											switch(str[5]) {
												case 'i':
													switch(str[6]) {
														case 'n':
															switch(str[7]) {
																case 'g':
																	switch(str[8]) {
																		case 's':
																			switch(str[9]) {
																				case 0: return _trappings;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'c':
									switch(str[4]) {
										case 't':
											switch(str[5]) {
												case 0: return _tract;
											}
											break;
									}
									break;
							}
							break;
						case 'i':
							switch(str[3]) {
								case 'u':
									switch(str[4]) {
										case 'm':
											switch(str[5]) {
												case 'v':
													switch(str[6]) {
														case 'i':
															switch(str[7]) {
																case 'r':
																	switch(str[8]) {
																		case 'a':
																			switch(str[9]) {
																				case 't':
																					switch(str[10]) {
																						case 'e':
																							switch(str[11]) {
																								case 0: return _triumvirate;
																							}
																							break;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 't':
									switch(str[4]) {
										case 'e':
											switch(str[5]) {
												case 0: return _trite;
											}
											break;
									}
									break;
								case 'b':
									switch(str[4]) {
										case 'u':
											switch(str[5]) {
												case 'n':
													switch(str[6]) {
														case 'a':
															switch(str[7]) {
																case 'l':
																	switch(str[8]) {
																		case 0: return _tribunal;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'o':
							switch(str[3]) {
								case 't':
									switch(str[4]) {
										case 'h':
											switch(str[5]) {
												case 0: return _troth;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'y':
					switch(str[2]) {
						case 'r':
							switch(str[3]) {
								case 'o':
									switch(str[4]) {
										case 0: return _tyro;
									}
									break;
							}
							break;
					}
					break;
				case 'e':
					switch(str[2]) {
						case 'r':
							switch(str[3]) {
								case 'r':
									switch(str[4]) {
										case 'i':
											switch(str[5]) {
												case 't':
													switch(str[6]) {
														case 'o':
															switch(str[7]) {
																case 'r':
																	switch(str[8]) {
																		case 'y':
																			switch(str[9]) {
																				case 0: return _territory;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'm':
							switch(str[3]) {
								case 'p':
									switch(str[4]) {
										case 'e':
											switch(str[5]) {
												case 'r':
													switch(str[6]) {
														case 0: return _temper;
													}
													break;
											}
											break;
										case 'o':
											switch(str[5]) {
												case 'r':
													switch(str[6]) {
														case 'i':
															switch(str[7]) {
																case 'z':
																	switch(str[8]) {
																		case 'e':
																			switch(str[9]) {
																				case 0: return _temporize;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'e':
							switch(str[3]) {
								case 'm':
									switch(str[4]) {
										case 0: return _teem;
									}
									break;
							}
							break;
						case 'n':
							switch(str[3]) {
								case 'a':
									switch(str[4]) {
										case 'c':
											switch(str[5]) {
												case 'i':
													switch(str[6]) {
														case 'o':
															switch(str[7]) {
																case 'u':
																	switch(str[8]) {
																		case 's':
																			switch(str[9]) {
																				case 0: return _tenacious;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
										case 'b':
											switch(str[5]) {
												case 'l':
													switch(str[6]) {
														case 'e':
															switch(str[7]) {
																case 0: return _tenable;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 's':
							switch(str[3]) {
								case 't':
									switch(str[4]) {
										case 'a':
											switch(str[5]) {
												case 't':
													switch(str[6]) {
														case 'o':
															switch(str[7]) {
																case 'r':
																	switch(str[8]) {
																		case 0: return _testator;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'a':
					switch(str[2]) {
						case 'r':
							switch(str[3]) {
								case 'r':
									switch(str[4]) {
										case 'y':
											switch(str[5]) {
												case 0: return _tarry;
											}
											break;
									}
									break;
							}
							break;
						case 'w':
							switch(str[3]) {
								case 'd':
									switch(str[4]) {
										case 'r':
											switch(str[5]) {
												case 'y':
													switch(str[6]) {
														case 0: return _tawdry;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'h':
					switch(str[2]) {
						case 'e':
							switch(str[3]) {
								case 'o':
									switch(str[4]) {
										case 'r':
											switch(str[5]) {
												case 'y':
													switch(str[6]) {
														case 0: return _theory;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'r':
							switch(str[3]) {
								case 'e':
									switch(str[4]) {
										case 'a':
											switch(str[5]) {
												case 'd':
													switch(str[6]) {
														case 'b':
															switch(str[7]) {
																case 'a':
																	switch(str[8]) {
																		case 'r':
																			switch(str[9]) {
																				case 'e':
																					switch(str[10]) {
																						case 0: return _threadbare;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'a':
									switch(str[4]) {
										case 'l':
											switch(str[5]) {
												case 'l':
													switch(str[6]) {
														case 0: return _thrall;
													}
													break;
											}
											break;
									}
									break;
								case 'o':
									switch(str[4]) {
										case 'n':
											switch(str[5]) {
												case 'g':
													switch(str[6]) {
														case 0: return _throng;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'o':
					switch(str[2]) {
						case 'u':
							switch(str[3]) {
								case 't':
									switch(str[4]) {
										case 0: return _tout;
									}
									break;
								case 'r':
									switch(str[4]) {
										case 0: return _tour;
									}
									break;
							}
							break;
						case 'i':
							switch(str[3]) {
								case 'l':
									switch(str[4]) {
										case 0: return _toil;
									}
									break;
							}
							break;
					}
					break;
				case 'i':
					switch(str[2]) {
						case 'd':
							switch(str[3]) {
								case 'e':
									switch(str[4]) {
										case 0: return _tide;
									}
									break;
							}
							break;
					}
					break;
			}
			break;
		case 'd':
			switch(str[1]) {
				case 'u':
					switch(str[2]) {
						case 't':
							switch(str[3]) {
								case 'i':
									switch(str[4]) {
										case 'f':
											switch(str[5]) {
												case 'u':
													switch(str[6]) {
														case 'l':
															switch(str[7]) {
																case 0: return _dutiful;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'l':
							switch(str[3]) {
								case 'c':
									switch(str[4]) {
										case 'e':
											switch(str[5]) {
												case 't':
													switch(str[6]) {
														case 0: return _dulcet;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'e':
					switch(str[2]) {
						case 's':
							switch(str[3]) {
								case 'p':
									switch(str[4]) {
										case 'a':
											switch(str[5]) {
												case 'i':
													switch(str[6]) {
														case 'r':
															switch(str[7]) {
																case 0: return _despair;
															}
															break;
													}
													break;
											}
											break;
										case 'o':
											switch(str[5]) {
												case 'i':
													switch(str[6]) {
														case 'l':
															switch(str[7]) {
																case 0: return _despoil;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'c':
									switch(str[4]) {
										case 'r':
											switch(str[5]) {
												case 'y':
													switch(str[6]) {
														case 0: return _descry;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'c':
							switch(str[3]) {
								case 'a':
									switch(str[4]) {
										case 'd':
											switch(str[5]) {
												case 'e':
													switch(str[6]) {
														case 'n':
															switch(str[7]) {
																case 'c':
																	switch(str[8]) {
																		case 'e':
																			switch(str[9]) {
																				case 0: return _decadence;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'l':
									switch(str[4]) {
										case 'i':
											switch(str[5]) {
												case 'v':
													switch(str[6]) {
														case 'i':
															switch(str[7]) {
																case 't':
																	switch(str[8]) {
																		case 'y':
																			switch(str[9]) {
																				case 0: return _declivity;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'o':
									switch(str[4]) {
										case 'r':
											switch(str[5]) {
												case 'u':
													switch(str[6]) {
														case 'm':
															switch(str[7]) {
																case 0: return _decorum;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'r':
									switch(str[4]) {
										case 'e':
											switch(str[5]) {
												case 'e':
													switch(str[6]) {
														case 0: return _decree;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'r':
							switch(str[3]) {
								case 'e':
									switch(str[4]) {
										case 'l':
											switch(str[5]) {
												case 'i':
													switch(str[6]) {
														case 'c':
															switch(str[7]) {
																case 't':
																	switch(str[8]) {
																		case 0: return _derelict;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'i':
									switch(str[4]) {
										case 'v':
											switch(str[5]) {
												case 'e':
													switch(str[6]) {
														case 'd':
															switch(str[7]) {
																case 0: return _derived;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'n':
							switch(str[3]) {
								case 'o':
									switch(str[4]) {
										case 'u':
											switch(str[5]) {
												case 'e':
													switch(str[6]) {
														case 'm':
															switch(str[7]) {
																case 'e':
																	switch(str[8]) {
																		case 'n':
																			switch(str[9]) {
																				case 't':
																					switch(str[10]) {
																						case 0: return _denouement;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 's':
									switch(str[4]) {
										case 'e':
											switch(str[5]) {
												case 0: return _dense;
											}
											break;
									}
									break;
							}
							break;
						case 'l':
							switch(str[3]) {
								case 'v':
									switch(str[4]) {
										case 'e':
											switch(str[5]) {
												case 0: return _delve;
											}
											break;
									}
									break;
								case 'i':
									switch(str[4]) {
										case 'c':
											switch(str[5]) {
												case 'a':
													switch(str[6]) {
														case 'c':
															switch(str[7]) {
																case 'y':
																	switch(str[8]) {
																		case 0: return _delicacy;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'v':
							switch(str[3]) {
								case 'o':
									switch(str[4]) {
										case 'l':
											switch(str[5]) {
												case 'v':
													switch(str[6]) {
														case 'e':
															switch(str[7]) {
																case 0: return _devolve;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'i':
									switch(str[4]) {
										case 'c':
											switch(str[5]) {
												case 'e':
													switch(str[6]) {
														case 0: return _device;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'p':
							switch(str[3]) {
								case 'r':
									switch(str[4]) {
										case 'a':
											switch(str[5]) {
												case 'v':
													switch(str[6]) {
														case 'e':
															switch(str[7]) {
																case 0: return _deprave;
															}
															break;
													}
													break;
											}
											break;
										case 'e':
											switch(str[5]) {
												case 'd':
													switch(str[6]) {
														case 'a':
															switch(str[7]) {
																case 't':
																	switch(str[8]) {
																		case 'i':
																			switch(str[9]) {
																				case 'o':
																					switch(str[10]) {
																						case 'n':
																							switch(str[11]) {
																								case 0: return _depredation;
																							}
																							break;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'o':
									switch(str[4]) {
										case 's':
											switch(str[5]) {
												case 'e':
													switch(str[6]) {
														case 0: return _depose;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'f':
							switch(str[3]) {
								case 'r':
									switch(str[4]) {
										case 'a':
											switch(str[5]) {
												case 'y':
													switch(str[6]) {
														case 0: return _defray;
													}
													break;
											}
											break;
									}
									break;
								case 'e':
									switch(str[4]) {
										case 'r':
											switch(str[5]) {
												case 'e':
													switch(str[6]) {
														case 'n':
															switch(str[7]) {
																case 'c':
																	switch(str[8]) {
																		case 'e':
																			switch(str[9]) {
																				case 0: return _deference;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'd':
							switch(str[3]) {
								case 'u':
									switch(str[4]) {
										case 'c':
											switch(str[5]) {
												case 'e':
													switch(str[6]) {
														case 0: return _deduce;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'i':
							switch(str[3]) {
								case 'g':
									switch(str[4]) {
										case 'n':
											switch(str[5]) {
												case 0: return _deign;
											}
											break;
									}
									break;
							}
							break;
						case 'm':
							switch(str[3]) {
								case 'o':
									switch(str[4]) {
										case 'r':
											switch(str[5]) {
												case 'a':
													switch(str[6]) {
														case 'l':
															switch(str[7]) {
																case 'i':
																	switch(str[8]) {
																		case 'z':
																			switch(str[9]) {
																				case 'e':
																					switch(str[10]) {
																						case 0: return _demoralize;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
										case 'n':
											switch(str[5]) {
												case 's':
													switch(str[6]) {
														case 't':
															switch(str[7]) {
																case 'r':
																	switch(str[8]) {
																		case 'a':
																			switch(str[9]) {
																				case 'b':
																					switch(str[10]) {
																						case 'l':
																							switch(str[11]) {
																								case 'e':
																									switch(str[12]) {
																										case 0: return _demonstrable;
																									}
																									break;
																							}
																							break;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'b':
							switch(str[3]) {
								case 'a':
									switch(str[4]) {
										case 's':
											switch(str[5]) {
												case 'e':
													switch(str[6]) {
														case 0: return _debase;
													}
													break;
											}
											break;
										case 'c':
											switch(str[5]) {
												case 'l':
													switch(str[6]) {
														case 'e':
															switch(str[7]) {
																case 0: return _debacle;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'a':
							switch(str[3]) {
								case 'r':
									switch(str[4]) {
										case 't':
											switch(str[5]) {
												case 'h':
													switch(str[6]) {
														case 0: return _dearth;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'o':
					switch(str[2]) {
						case 'g':
							switch(str[3]) {
								case 'g':
									switch(str[4]) {
										case 'e':
											switch(str[5]) {
												case 'r':
													switch(str[6]) {
														case 'e':
															switch(str[7]) {
																case 'l':
																	switch(str[8]) {
																		case 0: return _doggerel;
																	}
																	break;
															}
															break;
													}
													break;
												case 'd':
													switch(str[6]) {
														case 0: return _dogged;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'c':
							switch(str[3]) {
								case 'i':
									switch(str[4]) {
										case 'l':
											switch(str[5]) {
												case 'e':
													switch(str[6]) {
														case 0: return _docile;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 't':
							switch(str[3]) {
								case 'a':
									switch(str[4]) {
										case 'g':
											switch(str[5]) {
												case 'e':
													switch(str[6]) {
														case 0: return _dotage;
													}
													break;
											}
											break;
									}
									break;
								case 'e':
									switch(str[4]) {
										case 0: return _dote;
									}
									break;
							}
							break;
						case 'r':
							switch(str[3]) {
								case 'm':
									switch(str[4]) {
										case 'e':
											switch(str[5]) {
												case 'r':
													switch(str[6]) {
														case 0: return _dormer;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'i':
					switch(str[2]) {
						case 's':
							switch(str[3]) {
								case 'c':
									switch(str[4]) {
										case 'r':
											switch(str[5]) {
												case 'e':
													switch(str[6]) {
														case 'e':
															switch(str[7]) {
																case 't':
																	switch(str[8]) {
																		case 0: return _discreet;
																	}
																	break;
															}
															break;
														case 't':
															switch(str[7]) {
																case 'i':
																	switch(str[8]) {
																		case 'o':
																			switch(str[9]) {
																				case 'n':
																					switch(str[10]) {
																						case 'a':
																							switch(str[11]) {
																								case 'r':
																									switch(str[12]) {
																										case 'y':
																											switch(str[13]) {
																												case 0: return _discretionary;
																											}
																											break;
																									}
																									break;
																							}
																							break;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
												case 'i':
													switch(str[6]) {
														case 'm':
															switch(str[7]) {
																case 'i':
																	switch(str[8]) {
																		case 'n':
																			switch(str[9]) {
																				case 'a':
																					switch(str[10]) {
																						case 't':
																							switch(str[11]) {
																								case 'i':
																									switch(str[12]) {
																										case 'n':
																											switch(str[13]) {
																												case 'g':
																													switch(str[14]) {
																														case 0: return _discriminating;
																													}
																													break;
																											}
																											break;
																									}
																									break;
																							}
																							break;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
										case 'o':
											switch(str[5]) {
												case 'n':
													switch(str[6]) {
														case 'c':
															switch(str[7]) {
																case 'e':
																	switch(str[8]) {
																		case 'r':
																			switch(str[9]) {
																				case 't':
																					switch(str[10]) {
																						case 0: return _disconcert;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
														case 's':
															switch(str[7]) {
																case 'o':
																	switch(str[8]) {
																		case 'l':
																			switch(str[9]) {
																				case 'a':
																					switch(str[10]) {
																						case 't':
																							switch(str[11]) {
																								case 'e':
																									switch(str[12]) {
																										case 0: return _disconsolate;
																									}
																									break;
																							}
																							break;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
										case 'u':
											switch(str[5]) {
												case 'r':
													switch(str[6]) {
														case 's':
															switch(str[7]) {
																case 'i':
																	switch(str[8]) {
																		case 'v':
																			switch(str[9]) {
																				case 'e':
																					switch(str[10]) {
																						case 0: return _discursive;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'g':
									switch(str[4]) {
										case 'o':
											switch(str[5]) {
												case 'r':
													switch(str[6]) {
														case 'g':
															switch(str[7]) {
																case 'e':
																	switch(str[8]) {
																		case 0: return _disgorge;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'q':
									switch(str[4]) {
										case 'u':
											switch(str[5]) {
												case 'i':
													switch(str[6]) {
														case 's':
															switch(str[7]) {
																case 'i':
																	switch(str[8]) {
																		case 't':
																			switch(str[9]) {
																				case 'i':
																					switch(str[10]) {
																						case 'o':
																							switch(str[11]) {
																								case 'n':
																									switch(str[12]) {
																										case 0: return _disquisition;
																									}
																									break;
																							}
																							break;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'p':
									switch(str[4]) {
										case 'o':
											switch(str[5]) {
												case 'r':
													switch(str[6]) {
														case 't':
															switch(str[7]) {
																case 0: return _disport;
															}
															break;
													}
													break;
												case 's':
													switch(str[6]) {
														case 'i':
															switch(str[7]) {
																case 't':
																	switch(str[8]) {
																		case 'i':
																			switch(str[9]) {
																				case 'o':
																					switch(str[10]) {
																						case 'n':
																							switch(str[11]) {
																								case 0: return _disposition;
																							}
																							break;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
										case 'a':
											switch(str[5]) {
												case 's':
													switch(str[6]) {
														case 's':
															switch(str[7]) {
																case 'i':
																	switch(str[8]) {
																		case 'o':
																			switch(str[9]) {
																				case 'n':
																					switch(str[10]) {
																						case 'a':
																							switch(str[11]) {
																								case 't':
																									switch(str[12]) {
																										case 'e':
																											switch(str[13]) {
																												case 0: return _dispassionate;
																											}
																											break;
																									}
																									break;
																							}
																							break;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
												case 't':
													switch(str[6]) {
														case 'c':
															switch(str[7]) {
																case 'h':
																	switch(str[8]) {
																		case 0: return _dispatch;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'a':
									switch(str[4]) {
										case 'f':
											switch(str[5]) {
												case 'f':
													switch(str[6]) {
														case 'e':
															switch(str[7]) {
																case 'c':
																	switch(str[8]) {
																		case 't':
																			switch(str[9]) {
																				case 'e':
																					switch(str[10]) {
																						case 'd':
																							switch(str[11]) {
																								case 0: return _disaffected;
																							}
																							break;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
										case 'p':
											switch(str[5]) {
												case 'p':
													switch(str[6]) {
														case 'r':
															switch(str[7]) {
																case 'o':
																	switch(str[8]) {
																		case 'b':
																			switch(str[9]) {
																				case 'a':
																					switch(str[10]) {
																						case 't':
																							switch(str[11]) {
																								case 'i':
																									switch(str[12]) {
																										case 'o':
																											switch(str[13]) {
																												case 'n':
																													switch(str[14]) {
																														case 0: return _disapprobation;
																													}
																													break;
																											}
																											break;
																									}
																									break;
																							}
																							break;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 's':
									switch(str[4]) {
										case 'e':
											switch(str[5]) {
												case 'm':
													switch(str[6]) {
														case 'b':
															switch(str[7]) {
																case 'l':
																	switch(str[8]) {
																		case 'e':
																			switch(str[9]) {
																				case 0: return _dissemble;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
										case 'i':
											switch(str[5]) {
												case 'm':
													switch(str[6]) {
														case 'u':
															switch(str[7]) {
																case 'l':
																	switch(str[8]) {
																		case 'a':
																			switch(str[9]) {
																				case 't':
																					switch(str[10]) {
																						case 'e':
																							switch(str[11]) {
																								case 0: return _dissimulate;
																							}
																							break;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 't':
									switch(str[4]) {
										case 'i':
											switch(str[5]) {
												case 'n':
													switch(str[6]) {
														case 'c':
															switch(str[7]) {
																case 't':
																	switch(str[8]) {
																		case 'i':
																			switch(str[9]) {
																				case 'o':
																					switch(str[10]) {
																						case 'n':
																							switch(str[11]) {
																								case 0: return _distinction;
																							}
																							break;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
										case 'e':
											switch(str[5]) {
												case 'n':
													switch(str[6]) {
														case 'd':
															switch(str[7]) {
																case 0: return _distend;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'e':
									switch(str[4]) {
										case 'm':
											switch(str[5]) {
												case 'b':
													switch(str[6]) {
														case 'a':
															switch(str[7]) {
																case 'r':
																	switch(str[8]) {
																		case 'k':
																			switch(str[9]) {
																				case 0: return _disembark;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'n':
							switch(str[3]) {
								case 't':
									switch(str[4]) {
										case 0: return _dint;
									}
									break;
								case 'g':
									switch(str[4]) {
										case 'y':
											switch(str[5]) {
												case 0: return _dingy;
											}
											break;
									}
									break;
							}
							break;
						case 'f':
							switch(str[3]) {
								case 'f':
									switch(str[4]) {
										case 'i':
											switch(str[5]) {
												case 'd':
													switch(str[6]) {
														case 'e':
															switch(str[7]) {
																case 'n':
																	switch(str[8]) {
																		case 't':
																			switch(str[9]) {
																				case 0: return _diffident;
																			}
																			break;
																		case 'c':
																			switch(str[9]) {
																				case 'e':
																					switch(str[10]) {
																						case 0: return _diffidence;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'v':
							switch(str[3]) {
								case 'u':
									switch(str[4]) {
										case 'l':
											switch(str[5]) {
												case 'g':
													switch(str[6]) {
														case 'e':
															switch(str[7]) {
																case 0: return _divulge;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'e':
									switch(str[4]) {
										case 'r':
											switch(str[5]) {
												case 's':
													switch(str[6]) {
														case 'i':
															switch(str[7]) {
																case 'f':
																	switch(str[8]) {
																		case 'i':
																			switch(str[9]) {
																				case 'e':
																					switch(str[10]) {
																						case 'd':
																							switch(str[11]) {
																								case 0: return _diversified;
																							}
																							break;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'c':
							switch(str[3]) {
								case 't':
									switch(str[4]) {
										case 'u':
											switch(str[5]) {
												case 'm':
													switch(str[6]) {
														case 0: return _dictum;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'a':
							switch(str[3]) {
								case 'd':
									switch(str[4]) {
										case 'e':
											switch(str[5]) {
												case 'm':
													switch(str[6]) {
														case 0: return _diadem;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'd':
							switch(str[3]) {
								case 'a':
									switch(str[4]) {
										case 'c':
											switch(str[5]) {
												case 't':
													switch(str[6]) {
														case 'i':
															switch(str[7]) {
																case 'c':
																	switch(str[8]) {
																		case 0: return _didactic;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'l':
							switch(str[3]) {
								case 'e':
									switch(str[4]) {
										case 't':
											switch(str[5]) {
												case 't':
													switch(str[6]) {
														case 'a':
															switch(str[7]) {
																case 'n':
																	switch(str[8]) {
																		case 't':
																			switch(str[9]) {
																				case 'e':
																					switch(str[10]) {
																						case 0: return _dilettante;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'a':
					switch(str[2]) {
						case 'i':
							switch(str[3]) {
								case 's':
									switch(str[4]) {
										case 0: return _dais;
									}
									break;
							}
							break;
						case 'p':
							switch(str[3]) {
								case 'p':
									switch(str[4]) {
										case 'e':
											switch(str[5]) {
												case 'r':
													switch(str[6]) {
														case 0: return _dapper;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'y':
					switch(str[2]) {
						case 's':
							switch(str[3]) {
								case 'p':
									switch(str[4]) {
										case 'e':
											switch(str[5]) {
												case 'p':
													switch(str[6]) {
														case 't':
															switch(str[7]) {
																case 'i':
																	switch(str[8]) {
																		case 'c':
																			switch(str[9]) {
																				case 0: return _dyspeptic;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'r':
					switch(str[2]) {
						case 'e':
							switch(str[3]) {
								case 'g':
									switch(str[4]) {
										case 's':
											switch(str[5]) {
												case 0: return _dregs;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'w':
					switch(str[2]) {
						case 'e':
							switch(str[3]) {
								case 'l':
									switch(str[4]) {
										case 'l':
											switch(str[5]) {
												case 0: return _dwell;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
			}
			break;
		case 'y':
			switch(str[1]) {
				case 'e':
					switch(str[2]) {
						case 'o':
							switch(str[3]) {
								case 'm':
									switch(str[4]) {
										case 'a':
											switch(str[5]) {
												case 'n':
													switch(str[6]) {
														case 0: return _yeoman;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'i':
					switch(str[2]) {
						case 'e':
							switch(str[3]) {
								case 'l':
									switch(str[4]) {
										case 'd':
											switch(str[5]) {
												case 0: return _yield;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
			}
			break;
		case 'w':
			switch(str[1]) {
				case 'h':
					switch(str[2]) {
						case 'e':
							switch(str[3]) {
								case 'e':
									switch(str[4]) {
										case 'd':
											switch(str[5]) {
												case 'l':
													switch(str[6]) {
														case 'e':
															switch(str[7]) {
																case 0: return _wheedle;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 't':
									switch(str[4]) {
										case 0: return _whet;
									}
									break;
							}
							break;
						case 'i':
							switch(str[3]) {
								case 't':
									switch(str[4]) {
										case 't':
											switch(str[5]) {
												case 'l':
													switch(str[6]) {
														case 'e':
															switch(str[7]) {
																case 0: return _whittle;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'o':
							switch(str[3]) {
								case 'r':
									switch(str[4]) {
										case 'l':
											switch(str[5]) {
												case 0: return _whorl;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'i':
					switch(str[2]) {
						case 's':
							switch(str[3]) {
								case 't':
									switch(str[4]) {
										case 'f':
											switch(str[5]) {
												case 'u':
													switch(str[6]) {
														case 'l':
															switch(str[7]) {
																case 0: return _wistful;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'l':
							switch(str[3]) {
								case 'l':
									switch(str[4]) {
										case 'f':
											switch(str[5]) {
												case 'u':
													switch(str[6]) {
														case 'l':
															switch(str[7]) {
																case 0: return _willful;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'z':
							switch(str[3]) {
								case 'e':
									switch(str[4]) {
										case 'n':
											switch(str[5]) {
												case 'e':
													switch(str[6]) {
														case 'd':
															switch(str[7]) {
																case 0: return _wizened;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'a':
					switch(str[2]) {
						case 'n':
							switch(str[3]) {
								case 't':
									switch(str[4]) {
										case 'o':
											switch(str[5]) {
												case 'n':
													switch(str[6]) {
														case 0: return _wanton;
													}
													break;
											}
											break;
									}
									break;
								case 'd':
									switch(str[4]) {
										case 'e':
											switch(str[5]) {
												case 'r':
													switch(str[6]) {
														case 0: return _wander;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'r':
							switch(str[3]) {
								case 'b':
									switch(str[4]) {
										case 'l':
											switch(str[5]) {
												case 'e':
													switch(str[6]) {
														case 0: return _warble;
													}
													break;
											}
											break;
									}
									break;
								case 'r':
									switch(str[4]) {
										case 'a':
											switch(str[5]) {
												case 'n':
													switch(str[6]) {
														case 't':
															switch(str[7]) {
																case 0: return _warrant;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'x':
							switch(str[3]) {
								case 0: return _wax;
							}
							break;
						case 'i':
							switch(str[3]) {
								case 'v':
									switch(str[4]) {
										case 'e':
											switch(str[5]) {
												case 0: return _waive;
											}
											break;
									}
									break;
							}
							break;
						case 'y':
							switch(str[3]) {
								case 'l':
									switch(str[4]) {
										case 'a':
											switch(str[5]) {
												case 'y':
													switch(str[6]) {
														case 0: return _waylay;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'f':
							switch(str[3]) {
								case 'f':
									switch(str[4]) {
										case 'l':
											switch(str[5]) {
												case 'e':
													switch(str[6]) {
														case 0: return _waffle;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'r':
					switch(str[2]) {
						case 'a':
							switch(str[3]) {
								case 'i':
									switch(str[4]) {
										case 't':
											switch(str[5]) {
												case 'h':
													switch(str[6]) {
														case 0: return _wraith;
													}
													break;
											}
											break;
									}
									break;
								case 'n':
									switch(str[4]) {
										case 'g':
											switch(str[5]) {
												case 'l':
													switch(str[6]) {
														case 'e':
															switch(str[7]) {
																case 0: return _wrangle;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'y':
							switch(str[3]) {
								case 0: return _wry;
							}
							break;
						case 'e':
							switch(str[3]) {
								case 'a':
									switch(str[4]) {
										case 'k':
											switch(str[5]) {
												case 0: return _wreak;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'e':
					switch(str[2]) {
						case 'i':
							switch(str[3]) {
								case 'g':
									switch(str[4]) {
										case 'h':
											switch(str[5]) {
												case 0: return _weigh;
											}
											break;
									}
									break;
							}
							break;
						case 'l':
							switch(str[3]) {
								case 't':
									switch(str[4]) {
										case 0: return _welt;
									}
									break;
							}
							break;
					}
					break;
				case 'o':
					switch(str[2]) {
						case 'n':
							switch(str[3]) {
								case 't':
									switch(str[4]) {
										case 0: return _wont;
									}
									break;
							}
							break;
					}
					break;
			}
			break;
		case 'k':
			switch(str[1]) {
				case 'n':
					switch(str[2]) {
						case 'i':
							switch(str[3]) {
								case 'g':
									switch(str[4]) {
										case 'h':
											switch(str[5]) {
												case 't':
													switch(str[6]) {
														case 0: return _knight;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'o':
							switch(str[3]) {
								case 'l':
									switch(str[4]) {
										case 'l':
											switch(str[5]) {
												case 0: return _knoll;
											}
											break;
									}
									break;
							}
							break;
						case 'a':
							switch(str[3]) {
								case 'c':
									switch(str[4]) {
										case 'k':
											switch(str[5]) {
												case 0: return _knack;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'i':
					switch(str[2]) {
						case 'n':
							switch(str[3]) {
								case 'd':
									switch(str[4]) {
										case 'l':
											switch(str[5]) {
												case 'e':
													switch(str[6]) {
														case 0: return _kindle;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'e':
					switch(str[2]) {
						case 'e':
							switch(str[3]) {
								case 'n':
									switch(str[4]) {
										case 0: return _keen;
									}
									break;
							}
							break;
					}
					break;
			}
			break;
		case 'h':
			switch(str[1]) {
				case 'a':
					switch(str[2]) {
						case 'r':
							switch(str[3]) {
								case 'r':
									switch(str[4]) {
										case 'y':
											switch(str[5]) {
												case 0: return _harry;
											}
											break;
										case 'o':
											switch(str[5]) {
												case 'w':
													switch(str[6]) {
														case 'i':
															switch(str[7]) {
																case 'n':
																	switch(str[8]) {
																		case 'g':
																			switch(str[9]) {
																				case 0: return _harrowing;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'l':
							switch(str[3]) {
								case 'c':
									switch(str[4]) {
										case 'y':
											switch(str[5]) {
												case 'o':
													switch(str[6]) {
														case 'n':
															switch(str[7]) {
																case 0: return _halcyon;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'e':
									switch(str[4]) {
										case 0: return _hale;
									}
									break;
								case 't':
									switch(str[4]) {
										case 'i':
											switch(str[5]) {
												case 'n':
													switch(str[6]) {
														case 'g':
															switch(str[7]) {
																case 0: return _halting;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'g':
							switch(str[3]) {
								case 'g':
									switch(str[4]) {
										case 'l':
											switch(str[5]) {
												case 'e':
													switch(str[6]) {
														case 0: return _haggle;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'c':
							switch(str[3]) {
								case 'k':
									switch(str[4]) {
										case 'n':
											switch(str[5]) {
												case 'e':
													switch(str[6]) {
														case 'y':
															switch(str[7]) {
																case 'e':
																	switch(str[8]) {
																		case 'd':
																			switch(str[9]) {
																				case 0: return _hackneyed;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'o':
					switch(str[2]) {
						case 'r':
							switch(str[3]) {
								case 'd':
									switch(str[4]) {
										case 'e':
											switch(str[5]) {
												case 0: return _horde;
											}
											break;
									}
									break;
							}
							break;
						case 'a':
							switch(str[3]) {
								case 'r':
									switch(str[4]) {
										case 'y':
											switch(str[5]) {
												case 0: return _hoary;
											}
											break;
									}
									break;
							}
							break;
						case 'm':
							switch(str[3]) {
								case 'e':
									switch(str[4]) {
										case 's':
											switch(str[5]) {
												case 'p':
													switch(str[6]) {
														case 'u':
															switch(str[7]) {
																case 'n':
																	switch(str[8]) {
																		case 0: return _homespun;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'i':
									switch(str[4]) {
										case 'l':
											switch(str[5]) {
												case 'y':
													switch(str[6]) {
														case 0: return _homily;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'o':
							switch(str[3]) {
								case 'd':
									switch(str[4]) {
										case 'w':
											switch(str[5]) {
												case 'i':
													switch(str[6]) {
														case 'n':
															switch(str[7]) {
																case 'k':
																	switch(str[8]) {
																		case 0: return _hoodwink;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'u':
					switch(str[2]) {
						case 'm':
							switch(str[3]) {
								case 'm':
									switch(str[4]) {
										case 'o':
											switch(str[5]) {
												case 'c':
													switch(str[6]) {
														case 'k':
															switch(str[7]) {
																case 0: return _hummock;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'i':
									switch(str[4]) {
										case 'l':
											switch(str[5]) {
												case 'i':
													switch(str[6]) {
														case 'a':
															switch(str[7]) {
																case 't':
																	switch(str[8]) {
																		case 'e':
																			switch(str[9]) {
																				case 0: return _humiliate;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'b':
									switch(str[4]) {
										case 'l':
											switch(str[5]) {
												case 'e':
													switch(str[6]) {
														case 0: return _humble;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'r':
							switch(str[3]) {
								case 't':
									switch(str[4]) {
										case 'l':
											switch(str[5]) {
												case 'e':
													switch(str[6]) {
														case 0: return _hurtle;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 's':
							switch(str[3]) {
								case 'b':
									switch(str[4]) {
										case 'a':
											switch(str[5]) {
												case 'n':
													switch(str[6]) {
														case 'd':
															switch(str[7]) {
																case 'r':
																	switch(str[8]) {
																		case 'y':
																			switch(str[9]) {
																				case 0: return _husbandry;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'b':
							switch(str[3]) {
								case 'b':
									switch(str[4]) {
										case 'u':
											switch(str[5]) {
												case 'b':
													switch(str[6]) {
														case 0: return _hubbub;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'e':
					switch(str[2]) {
						case 'e':
							switch(str[3]) {
								case 'd':
									switch(str[4]) {
										case 0: return _heed;
									}
									break;
							}
							break;
						case 'a':
							switch(str[3]) {
								case 'd':
									switch(str[4]) {
										case 'l':
											switch(str[5]) {
												case 'o':
													switch(str[6]) {
														case 'n':
															switch(str[7]) {
																case 'g':
																	switch(str[8]) {
																		case 0: return _headlong;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'w':
							switch(str[3]) {
								case 0: return _hew;
							}
							break;
						case 'r':
							switch(str[3]) {
								case 'c':
									switch(str[4]) {
										case 'u':
											switch(str[5]) {
												case 'l':
													switch(str[6]) {
														case 'e':
															switch(str[7]) {
																case 'a':
																	switch(str[8]) {
																		case 'n':
																			switch(str[9]) {
																				case 0: return _herculean;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'm':
									switch(str[4]) {
										case 'i':
											switch(str[5]) {
												case 't':
													switch(str[6]) {
														case 'a':
															switch(str[7]) {
																case 'g':
																	switch(str[8]) {
																		case 'e':
																			switch(str[9]) {
																				case 0: return _hermitage;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'y':
							switch(str[3]) {
								case 'd':
									switch(str[4]) {
										case 'a':
											switch(str[5]) {
												case 'y':
													switch(str[6]) {
														case 0: return _heyday;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'i':
					switch(str[2]) {
						case 'r':
							switch(str[3]) {
								case 'e':
									switch(str[4]) {
										case 'l':
											switch(str[5]) {
												case 'i':
													switch(str[6]) {
														case 'n':
															switch(str[7]) {
																case 'g':
																	switch(str[8]) {
																		case 0: return _hireling;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
			}
			break;
		case 'n':
			switch(str[1]) {
				case 'i':
					switch(str[2]) {
						case 'c':
							switch(str[3]) {
								case 'e':
									switch(str[4]) {
										case 't':
											switch(str[5]) {
												case 'y':
													switch(str[6]) {
														case 0: return _nicety;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'h':
							switch(str[3]) {
								case 'i':
									switch(str[4]) {
										case 'l':
											switch(str[5]) {
												case 'i':
													switch(str[6]) {
														case 's':
															switch(str[7]) {
																case 't':
																	switch(str[8]) {
																		case 0: return _nihilist;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'e':
					switch(str[2]) {
						case 't':
							switch(str[3]) {
								case 't':
									switch(str[4]) {
										case 'l':
											switch(str[5]) {
												case 'e':
													switch(str[6]) {
														case 0: return _nettle;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'x':
							switch(str[3]) {
								case 'u':
									switch(str[4]) {
										case 's':
											switch(str[5]) {
												case 0: return _nexus;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'o':
					switch(str[2]) {
						case 'v':
							switch(str[3]) {
								case 'e':
									switch(str[4]) {
										case 'l':
											switch(str[5]) {
												case 0: return _novel;
											}
											break;
									}
									break;
							}
							break;
						case 't':
							switch(str[3]) {
								case 'w':
									switch(str[4]) {
										case 'i':
											switch(str[5]) {
												case 't':
													switch(str[6]) {
														case 'h':
															switch(str[7]) {
																case 's':
																	switch(str[8]) {
																		case 't':
																			switch(str[9]) {
																				case 'a':
																					switch(str[10]) {
																						case 'n':
																							switch(str[11]) {
																								case 'd':
																									switch(str[12]) {
																										case 'i':
																											switch(str[13]) {
																												case 'n':
																													switch(str[14]) {
																														case 'g':
																															switch(str[15]) {
																																case 0: return _notwithstanding;
																															}
																															break;
																													}
																													break;
																											}
																											break;
																									}
																									break;
																							}
																							break;
																					}
																					break;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'i':
									switch(str[4]) {
										case 'o':
											switch(str[5]) {
												case 'n':
													switch(str[6]) {
														case 0: return _notion;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'm':
							switch(str[3]) {
								case 'i':
									switch(str[4]) {
										case 'n':
											switch(str[5]) {
												case 'a':
													switch(str[6]) {
														case 'l':
															switch(str[7]) {
																case 0: return _nominal;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'n':
							switch(str[3]) {
								case 'e':
									switch(str[4]) {
										case 'n':
											switch(str[5]) {
												case 't':
													switch(str[6]) {
														case 'i':
															switch(str[7]) {
																case 't':
																	switch(str[8]) {
																		case 'y':
																			switch(str[9]) {
																				case 0: return _nonentity;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'p':
									switch(str[4]) {
										case 'l':
											switch(str[5]) {
												case 'u':
													switch(str[6]) {
														case 's':
															switch(str[7]) {
																case 0: return _nonplus;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 's':
							switch(str[3]) {
								case 't':
									switch(str[4]) {
										case 'r':
											switch(str[5]) {
												case 'u':
													switch(str[6]) {
														case 'm':
															switch(str[7]) {
																case 0: return _nostrum;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'u':
					switch(str[2]) {
						case 'a':
							switch(str[3]) {
								case 'n':
									switch(str[4]) {
										case 'c':
											switch(str[5]) {
												case 'e':
													switch(str[6]) {
														case 0: return _nuance;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'a':
					switch(str[2]) {
						case 't':
							switch(str[3]) {
								case 't':
									switch(str[4]) {
										case 'y':
											switch(str[5]) {
												case 0: return _natty;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
			}
			break;
		case 'b':
			switch(str[1]) {
				case 'e':
					switch(str[2]) {
						case 'n':
							switch(str[3]) {
								case 'i':
									switch(str[4]) {
										case 'g':
											switch(str[5]) {
												case 'h':
													switch(str[6]) {
														case 't':
															switch(str[7]) {
																case 'e':
																	switch(str[8]) {
																		case 'd':
																			switch(str[9]) {
																				case 0: return _benighted;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 't':
									switch(str[4]) {
										case 0: return _bent;
									}
									break;
							}
							break;
						case 's':
							switch(str[3]) {
								case 'i':
									switch(str[4]) {
										case 'e':
											switch(str[5]) {
												case 'g':
													switch(str[6]) {
														case 'e':
															switch(str[7]) {
																case 0: return _besiege;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'e':
									switch(str[4]) {
										case 'e':
											switch(str[5]) {
												case 'c':
													switch(str[6]) {
														case 'h':
															switch(str[7]) {
																case 0: return _beseech;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 't':
									switch(str[4]) {
										case 'o':
											switch(str[5]) {
												case 'w':
													switch(str[6]) {
														case 0: return _bestow;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'g':
							switch(str[3]) {
								case 'u':
									switch(str[4]) {
										case 'i':
											switch(str[5]) {
												case 'l':
													switch(str[6]) {
														case 'e':
															switch(str[7]) {
																case 0: return _beguile;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'q':
							switch(str[3]) {
								case 'u':
									switch(str[4]) {
										case 'e':
											switch(str[5]) {
												case 'a':
													switch(str[6]) {
														case 't':
															switch(str[7]) {
																case 'h':
																	switch(str[8]) {
																		case 0: return _bequeath;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 't':
							switch(str[3]) {
								case 'o':
									switch(str[4]) {
										case 'k':
											switch(str[5]) {
												case 'e':
													switch(str[6]) {
														case 'n':
															switch(str[7]) {
																case 0: return _betoken;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'r':
									switch(str[4]) {
										case 'o':
											switch(str[5]) {
												case 't':
													switch(str[6]) {
														case 'h':
															switch(str[7]) {
																case 'e':
																	switch(str[8]) {
																		case 'd':
																			switch(str[9]) {
																				case 0: return _betrothed;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'l':
							switch(str[3]) {
								case 'e':
									switch(str[4]) {
										case 'a':
											switch(str[5]) {
												case 'g':
													switch(str[6]) {
														case 'u':
															switch(str[7]) {
																case 'e':
																	switch(str[8]) {
																		case 'r':
																			switch(str[9]) {
																				case 0: return _beleaguer;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'i':
									switch(str[4]) {
										case 'e':
											switch(str[5]) {
												case 0: return _belie;
											}
											break;
									}
									break;
							}
							break;
						case 'a':
							switch(str[3]) {
								case 't':
									switch(str[4]) {
										case 'i':
											switch(str[5]) {
												case 'f':
													switch(str[6]) {
														case 'i':
															switch(str[7]) {
																case 'c':
																	switch(str[8]) {
																		case 0: return _beatific;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'm':
							switch(str[3]) {
								case 'u':
									switch(str[4]) {
										case 's':
											switch(str[5]) {
												case 'e':
													switch(str[6]) {
														case 0: return _bemuse;
														case 'd':
															switch(str[7]) {
																case 0: return _bemused;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'a':
					switch(str[2]) {
						case 't':
							switch(str[3]) {
								case 'e':
									switch(str[4]) {
										case 0: return _bate;
									}
									break;
							}
							break;
						case 'n':
							switch(str[3]) {
								case 'a':
									switch(str[4]) {
										case 'l':
											switch(str[5]) {
												case 0: return _banal;
											}
											break;
									}
									break;
								case 'd':
									switch(str[4]) {
										case 'y':
											switch(str[5]) {
												case 0: return _bandy;
											}
											break;
									}
									break;
								case 'e':
									switch(str[4]) {
										case 0: return _bane;
									}
									break;
								case 't':
									switch(str[4]) {
										case 'e':
											switch(str[5]) {
												case 'r':
													switch(str[6]) {
														case 0: return _banter;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'l':
							switch(str[3]) {
								case 'e':
									switch(str[4]) {
										case 'f':
											switch(str[5]) {
												case 'u':
													switch(str[6]) {
														case 'l':
															switch(str[7]) {
																case 0: return _baleful;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'u':
							switch(str[3]) {
								case 'b':
									switch(str[4]) {
										case 'l':
											switch(str[5]) {
												case 'e':
													switch(str[6]) {
														case 0: return _bauble;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'd':
							switch(str[3]) {
								case 'i':
									switch(str[4]) {
										case 'n':
											switch(str[5]) {
												case 'a':
													switch(str[6]) {
														case 'g':
															switch(str[7]) {
																case 'e':
																	switch(str[8]) {
																		case 0: return _badinage;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'u':
					switch(str[2]) {
						case 'l':
							switch(str[3]) {
								case 'l':
									switch(str[4]) {
										case 'i':
											switch(str[5]) {
												case 'o':
													switch(str[6]) {
														case 'n':
															switch(str[7]) {
																case 0: return _bullion;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'w':
									switch(str[4]) {
										case 'a':
											switch(str[5]) {
												case 'r':
													switch(str[6]) {
														case 'k':
															switch(str[7]) {
																case 0: return _bulwark;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'r':
							switch(str[3]) {
								case 'g':
									switch(str[4]) {
										case 'e':
											switch(str[5]) {
												case 'o':
													switch(str[6]) {
														case 'n':
															switch(str[7]) {
																case 0: return _burgeon;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'n':
									switch(str[4]) {
										case 'i':
											switch(str[5]) {
												case 's':
													switch(str[6]) {
														case 'h':
															switch(str[7]) {
																case 0: return _burnish;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'x':
							switch(str[3]) {
								case 'o':
									switch(str[4]) {
										case 'm':
											switch(str[5]) {
												case 0: return _buxom;
											}
											break;
									}
									break;
							}
							break;
						case 'c':
							switch(str[3]) {
								case 'o':
									switch(str[4]) {
										case 'l':
											switch(str[5]) {
												case 'i':
													switch(str[6]) {
														case 'c':
															switch(str[7]) {
																case 0: return _bucolic;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'i':
					switch(str[2]) {
						case 'l':
							switch(str[3]) {
								case 'i':
									switch(str[4]) {
										case 'o':
											switch(str[5]) {
												case 'u':
													switch(str[6]) {
														case 's':
															switch(str[7]) {
																case 0: return _bilious;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'o':
					switch(str[2]) {
						case 'a':
							switch(str[3]) {
								case 's':
									switch(str[4]) {
										case 't':
											switch(str[5]) {
												case 0: return _boast;
											}
											break;
									}
									break;
							}
							break;
						case 'l':
							switch(str[3]) {
								case 't':
									switch(str[4]) {
										case 0: return _bolt;
									}
									break;
							}
							break;
						case 'u':
							switch(str[3]) {
								case 'i':
									switch(str[4]) {
										case 'l':
											switch(str[5]) {
												case 'l':
													switch(str[6]) {
														case 'o':
															switch(str[7]) {
																case 'n':
																	switch(str[8]) {
																		case 0: return _bouillon;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'l':
					switch(str[2]) {
						case 'a':
							switch(str[3]) {
								case 't':
									switch(str[4]) {
										case 'a':
											switch(str[5]) {
												case 'n':
													switch(str[6]) {
														case 't':
															switch(str[7]) {
																case 0: return _blatant;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'n':
									switch(str[4]) {
										case 'd':
											switch(str[5]) {
												case 0: return _bland;
											}
											break;
										case 'c':
											switch(str[5]) {
												case 'h':
													switch(str[6]) {
														case 0: return _blanch;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'u':
							switch(str[3]) {
								case 's':
									switch(str[4]) {
										case 't':
											switch(str[5]) {
												case 'e':
													switch(str[6]) {
														case 'r':
															switch(str[7]) {
																case 0: return _bluster;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'i':
							switch(str[3]) {
								case 'g':
									switch(str[4]) {
										case 'h':
											switch(str[5]) {
												case 't':
													switch(str[6]) {
														case 'e':
															switch(str[7]) {
																case 'd':
																	switch(str[8]) {
																		case 0: return _blighted;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'r':
					switch(str[2]) {
						case 'o':
							switch(str[3]) {
								case 'o':
									switch(str[4]) {
										case 'k':
											switch(str[5]) {
												case 0: return _brook;
											}
											break;
										case 'c':
											switch(str[5]) {
												case 'h':
													switch(str[6]) {
														case 0: return _brooch;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'a':
							switch(str[3]) {
								case 'w':
									switch(str[4]) {
										case 'n':
											switch(str[5]) {
												case 0: return _brawn;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
			}
			break;
		case 'j':
			switch(str[1]) {
				case 'o':
					switch(str[2]) {
						case 'c':
							switch(str[3]) {
								case 'u':
									switch(str[4]) {
										case 'n':
											switch(str[5]) {
												case 'd':
													switch(str[6]) {
														case 0: return _jocund;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'i':
					switch(str[2]) {
						case 'b':
							switch(str[3]) {
								case 'e':
									switch(str[4]) {
										case 0: return _jibe;
									}
									break;
							}
							break;
					}
					break;
				case 'u':
					switch(str[2]) {
						case 's':
							switch(str[3]) {
								case 't':
									switch(str[4]) {
										case 'i':
											switch(str[5]) {
												case 'f':
													switch(str[6]) {
														case 'y':
															switch(str[7]) {
																case 0: return _justify;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'n':
							switch(str[3]) {
								case 'k':
									switch(str[4]) {
										case 'e':
											switch(str[5]) {
												case 't':
													switch(str[6]) {
														case 0: return _junket;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
				case 'e':
					switch(str[2]) {
						case 't':
							switch(str[3]) {
								case 0: return _jet;
							}
							break;
					}
					break;
			}
			break;
		case 'q':
			switch(str[1]) {
				case 'u':
					switch(str[2]) {
						case 'a':
							switch(str[3]) {
								case 'g':
									switch(str[4]) {
										case 'm':
											switch(str[5]) {
												case 'i':
													switch(str[6]) {
														case 'r':
															switch(str[7]) {
																case 'e':
																	switch(str[8]) {
																		case 0: return _quagmire;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
								case 'f':
									switch(str[4]) {
										case 'f':
											switch(str[5]) {
												case 0: return _quaff;
											}
											break;
									}
									break;
								case 'i':
									switch(str[4]) {
										case 'l':
											switch(str[5]) {
												case 0: return _quail;
											}
											break;
									}
									break;
							}
							break;
						case 'e':
							switch(str[3]) {
								case 'r':
									switch(str[4]) {
										case 'u':
											switch(str[5]) {
												case 'l':
													switch(str[6]) {
														case 'o':
															switch(str[7]) {
																case 'u':
																	switch(str[8]) {
																		case 's':
																			switch(str[9]) {
																				case 0: return _querulous;
																			}
																			break;
																	}
																	break;
															}
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'i':
							switch(str[3]) {
								case 'p':
									switch(str[4]) {
										case 0: return _quip;
									}
									break;
							}
							break;
					}
					break;
			}
			break;
		case 'z':
			switch(str[1]) {
				case 'e':
					switch(str[2]) {
						case 'n':
							switch(str[3]) {
								case 'i':
									switch(str[4]) {
										case 't':
											switch(str[5]) {
												case 'h':
													switch(str[6]) {
														case 0: return _zenith;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'a':
							switch(str[3]) {
								case 'l':
									switch(str[4]) {
										case 'o':
											switch(str[5]) {
												case 't':
													switch(str[6]) {
														case 0: return _zealot;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
						case 'p':
							switch(str[3]) {
								case 'h':
									switch(str[4]) {
										case 'y':
											switch(str[5]) {
												case 'r':
													switch(str[6]) {
														case 0: return _zephyr;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;
			}
			break;
	}
	return None;
}

#endif /* CStrSwitch_H */
