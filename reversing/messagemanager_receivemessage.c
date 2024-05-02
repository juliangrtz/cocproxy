void __fastcall MessageFactory::parseMessage(__int64 a1, __int64 a2)
{
  __int64 v2; // x8
  _DWORD *v3; // x20
  __int64 *v4; // x19
  __int64 v5; // x23
  LogicLong *v6; // x0
  char v7; // w21
  __int64 v8; // x0
  __int64 v9; // x1
  _QWORD *v10; // x0
  __int64 v11; // x0
  LogicLong *v12; // x22
  __int64 v13; // x21
  __int64 v15; // x0
  __int64 v16; // x21
  __int64 v17; // x0
  __int64 v18; // x0
  _QWORD *v19; // x20
  __int64 v20; // x0
  void *v21; // x0
  __int64 *v22; // x24
  __int64 *v23; // x25
  int v24; // w20
  _DWORD *v25; // x22
  void *v26; // x19
  __int64 v27; // x23
  LogicLong *v28; // x0
  _QWORD *v29; // x0
  __int64 v30; // x21
  __int64 v31; // x0
  double v32; // d0
  _QWORD **v33; // x20
  _QWORD *v34; // t1
  _QWORD **v35; // x21
  __int64 *v36; // x23
  __int64 *v37; // x24
  _DWORD *v38; // x20
  void *v39; // x19
  __int64 v40; // x22
  LogicLong *v41; // x0
  _DWORD *v42; // x21
  __int64 *v43; // x0
  __int64 v44; // x0
  double v45; // d0
  __int64 (__fastcall *v46)(__int64, __int64, __int64); // x20
  _QWORD *v47; // t1
  __int64 (__fastcall *v48)(__int64, __int64, __int64); // x21
  unsigned int v49; // w8
  char *v50; // x1
  int *v51; // x19
  void *v52; // x0
  __int64 v53; // x8
  int *v54; // x19
  void *v55; // x0
  __int64 v56; // x8
  int *v57; // x19
  void *v58; // x0
  __int64 v59; // x20
  __int64 v60; // x19
  __int64 v61; // x0
  __int64 v62; // x21
  __int64 v63; // x21
  __int64 v64; // x0
  __int64 v65; // x21
  float v66; // s0
  int v67; // w8
  _QWORD *v68; // x19
  __int64 v69; // x20
  _BOOL4 v70; // w22
  __int64 v71; // x21
  __int64 v72; // x22
  char *v73; // x0
  __int64 v74; // x20
  int v75; // w20
  __int64 *v76; // x19
  _DWORD *v77; // x21
  __int64 v78; // x19
  __int64 v79; // x24
  long double v80; // q0
  __int64 v81; // x0
  __int64 v82; // x23
  __int64 v83; // x0
  __int64 v84; // x22
  _QWORD *v85; // x21
  int v86; // w8
  int *v87; // x9
  unsigned __int64 v88; // x10
  int *v89; // x8
  __int64 v90; // x27
  unsigned __int64 v91; // x11
  __int64 v92; // x10
  unsigned __int64 v93; // x1
  __int64 v94; // x0
  _QWORD *v95; // x10
  int *v96; // x11
  __int64 v97; // t1
  __int64 *v98; // x9
  __int64 v99; // x10
  void *v100; // x19
  __int64 v101; // x22
  __int64 v102; // x21
  __int64 v103; // x0
  __int64 v104; // x21
  _QWORD *v105; // x20
  __int64 v106; // x23
  __int64 i; // x24
  int v108; // w0
  void **v109; // x8
  char **v111; // x9
  bool v112; // zf
  _QWORD *v113; // x0
  __int64 v114; // x22
  __int64 v115; // x24
  unsigned int *v116; // x21
  __int64 v117; // x26
  __int64 v118; // x0
  __int64 v119; // x19
  __int64 v120; // x26
  __int64 v121; // x23
  __int64 v122; // x1
  long double v123; // q0
  __int64 v124; // x0
  __int64 v125; // x24
  __int64 v126; // x0
  __int64 v127; // x21
  __int64 v128; // x8
  unsigned __int64 v129; // x27
  __int64 *v130; // x8
  __int64 v131; // x8
  __int64 v132; // x25
  unsigned __int64 v133; // x9
  unsigned __int64 v134; // x1
  __int64 v135; // x0
  __int64 *v136; // x9
  _QWORD *v137; // x10
  __int64 v138; // x8
  __int64 v139; // x11
  __int64 v140; // t1
  __int64 *v141; // x0
  int v144; // w0
  void *v145; // x20
  __int64 v146; // x21
  int v147; // w0
  char *v148; // x1
  int v149; // w8
  void *v150; // x20
  __int64 v151; // x0
  __int64 v152; // x0
  __int64 v153; // x20
  __int64 v154; // x0
  __int64 v155; // x21
  char *v156; // x1
  _QWORD *v157; // x20
  __int64 v158; // x0
  int v159; // w8
  __int64 v160; // x0
  __int64 v161; // x0
  _BYTE *v162; // x20
  __int64 v163; // x1
  void *v164; // x20
  __int64 v165; // x1
  __int64 v166; // x20
  __int64 v167; // x0
  __int64 v168; // x0
  __int64 v169; // x20
  __int64 v170; // x0
  __int64 v171; // x0
  __int64 v172; // x0
  __int64 v173; // x0
  __int64 v174; // x0
  __int64 v175; // x20
  __int64 v176; // x19
  __int64 v177; // x0
  __int64 v178; // x19
  int v179; // w0
  __int64 v180; // x20
  __int64 v181; // x0
  __int64 v182; // x1
  char *v183; // x1
  int v184; // w8
  char *v185; // x1
  __int64 v186; // x20
  long double v187; // q0
  __int64 v188; // x0
  __int64 v189; // x22
  __int64 v190; // x0
  __int64 v191; // x0
  __int64 v192; // x0
  __int64 v193; // x21
  int v194; // w23
  __int64 v195; // x24
  int v196; // w6
  int v197; // w8
  __int64 v198; // x21
  void *v199; // x20
  __int64 v200; // x0
  __int64 v201; // x21
  long double v202; // q0
  __int64 v203; // x0
  __int64 v204; // x22
  __int64 v205; // x0
  __int64 v206; // x21
  __int64 v207; // x20
  __int64 v208; // x0
  __int64 v209; // x0
  __int64 v210; // x23
  __int64 v211; // x24
  __int64 v212; // x23
  int v213; // w22
  __int64 v214; // x21
  __int64 v215; // x0
  __int64 v216; // x21
  __int64 v217; // x20
  __int64 v218; // x0
  __int64 v219; // x0
  __int64 v220; // x0
  __int64 v221; // x0
  int v222; // w22
  __int64 v223; // x0
  __int64 v224; // x0
  __int64 v225; // x21
  unsigned int *v226; // x20
  __int64 v227; // x0
  _QWORD *v228; // x21
  __int64 v229; // x19
  __int64 v230; // x21
  unsigned int v231; // w22
  __int64 v232; // x23
  __int64 v233; // x0
  __int64 v234; // x21
  void *v235; // x19
  long double v236; // q0
  long double v237; // q0
  __int64 v238; // x0
  __int64 v239; // x19
  __int64 v240; // x0
  __int64 v241; // x0
  __int64 v242; // x20
  __int64 *v243; // x0
  void *v244; // x20
  __int64 v245; // x2
  __int64 v246; // x0
  __int64 v247; // x21
  __int64 v248; // x1
  int v249; // w3
  int v250; // w20
  void *v251; // x19
  __int64 v252; // x20
  unsigned int *v253; // x0
  unsigned int *v254; // x19
  _QWORD *v255; // x21
  __int64 v256; // x21
  unsigned int v257; // w22
  __int64 v258; // x23
  __int64 v259; // x0
  __int64 v260; // x21
  __int64 v261; // x0
  void *v262; // x20
  __int64 v263; // x0
  __int64 v264; // x0
  char *v265; // x1
  __int64 v266; // x0
  __int64 v267; // x20
  __int64 v268; // x21
  __int64 *v269; // x20
  __int64 v270; // x0
  int v271; // w0
  char *v272; // x1
  __int64 v273; // x20
  long double v274; // q0
  __int64 v275; // x0
  __int64 v276; // x22
  __int64 v277; // x0
  __int64 v278; // x0
  __int64 v279; // x0
  __int64 v280; // x21
  int v281; // w24
  __int64 v282; // x23
  __int64 v283; // x0
  __int64 v284; // x24
  double *v285; // x0
  __int64 v286; // x0
  long double v287; // q0
  __int64 v288; // x0
  __int64 v289; // x25
  __int64 v290; // x0
  int v291; // w0
  int v292; // w0
  __int64 v293; // x25
  __int64 v294; // x26
  int v295; // w8
  __int64 v296; // x0
  __int64 v297; // x21
  __int64 v298; // x21
  void *v299; // x20
  __int64 v300; // x0
  __int64 v301; // x21
  void *v302; // x0
  int v303; // w20
  __int64 v304; // x0
  bool v305; // w4
  __int64 v306; // x21
  __int64 v307; // x20
  __int64 v308; // x0
  __int64 v309; // x0
  __int64 v310; // x19
  void *v311; // x0
  __int64 v312; // x19
  int v313; // w1
  __int64 v314; // x3
  __int64 v315; // x20
  __int64 v316; // x0
  int v317; // w1
  int v318; // w22
  char *v319; // x1
  int *v320; // x19
  __int64 v321; // x0
  int v322; // w20
  __int64 v323; // x21
  _QWORD *v324; // x20
  int v325; // w20
  __int64 *v326; // x21
  __int64 **v327; // x21
  int v328; // w2
  __int64 v329; // x0
  __int64 v330; // x1
  int v331; // w0
  __int64 v332; // x20
  __int64 v333; // x0
  __int64 v334; // x19
  int v335; // w20
  __int64 **v336; // x21
  int *v337; // x20
  __int64 v338; // x8
  _QWORD *v339; // x21
  __int64 v340; // x22
  __int64 v341; // x20
  unsigned __int16 *v342; // x20
  __int64 v343; // x21
  char *v344; // x22
  _QWORD *v345; // x0
  int v346; // w21
  int v347; // w20
  long double v348; // q0
  __int64 v349; // x0
  __int64 v350; // x0
  __int64 v351; // x21
  __int64 v352; // x21
  __int64 **v353; // x1
  __int64 *v354; // x2
  __int64 v355; // x19
  int v356; // w21
  __int64 v357; // x0
  __int64 v358; // x1
  char *v359; // x1
  int v360; // w0
  __int64 *v361; // x21
  __int64 v362; // x0
  __int64 v363; // x0
  __int64 v364; // x0
  char *v365; // x1
  int **v366; // x0
  __int64 v367; // x1
  __int64 v368; // x19
  __int64 v369; // x0
  int v370; // w0
  __int64 v371; // x21
  __int64 v372; // x0
  __int64 *v373; // x0
  __int64 v374; // x0
  char v375; // w20
  __int64 v376; // x20
  __int64 v377; // x22
  unsigned __int16 *v378; // x0
  int v379; // w0
  __int64 v380; // x21
  unsigned int v381; // w0
  int v382; // w22
  void *v383; // x20
  int v384; // w0
  unsigned __int16 *v385; // x20
  __int64 v386; // x21
  char *v387; // x22
  _QWORD *v388; // x0
  __int64 v389; // x23
  int v390; // w21
  __int64 v391; // x21
  int v392; // w3
  __int64 v393; // x21
  int *v394; // x0
  void *v395; // x0
  __int64 v396; // x0
  void *v397; // x0
  __int64 v398; // x20
  __int64 v399; // x19
  char *v400; // x0
  __int64 **v401; // x0
  __int64 v402; // x0
  __int64 v403; // x20
  unsigned __int16 *v404; // x19
  int v405; // w0
  int v406; // w20
  _QWORD *v407; // x0
  __int64 v408; // x22
  char *v409; // x21
  __int64 v410; // x0
  unsigned __int16 *v411; // x0
  __int64 v412; // x20
  int v413; // w0
  __int64 v414; // x0
  __int64 v415; // x22
  unsigned __int16 *v416; // x20
  int v417; // w0
  __int64 v418; // x21
  int v419; // w22
  __int64 v420; // x23
  int v421; // w0
  int v422; // w8
  __int64 v423; // x21
  int v424; // w0
  const char *v425; // x8
  char *v426; // x1
  char *v427; // x1
  void *v428; // x19
  void *v429; // x0
  __int64 v430; // x29
  __int64 v431; // x19
  __int64 v432; // x20
  void *v433; // x0
  __int64 v434; // x0
  __int64 *v435; // x20
  __int64 v436; // x1
  __int64 *v437; // x0
  unsigned int v438; // w8
  void *v439; // x20
  __int64 v440; // x21
  __int64 v441; // x1
  __int64 v442; // x0
  __int64 v443; // x20
  char *v444; // x1
  int v445; // w20
  __int64 v446; // x2
  _QWORD *v447; // x0
  __int64 v448; // x0
  __int64 v449; // x0
  __int64 v450; // x20
  int v451; // w0
  __int64 v452; // x21
  __int64 v453; // x0
  __int64 v454; // x20
  __int64 v455; // x0
  int v456; // w21
  _QWORD *v457; // x20
  __int64 v458; // x22
  __int64 v459; // x22
  int v460; // w23
  int v461; // w21
  __int64 v462; // x0
  __int64 v463; // x0
  __int64 v464; // x0
  __int64 v465; // x0
  __int64 v466; // x1
  __int64 *v467; // x21
  __int64 v468; // x20
  int v469; // w0
  __int64 v470; // x19
  __int64 *v471; // x21
  __int64 v472; // x20
  __int64 *v473; // x21
  char *v474; // x0
  _QWORD *v475; // x0
  __int64 v476; // x0
  _QWORD *v477; // x20
  int v478; // w22
  __int64 v479; // x0
  __int64 v480; // x23
  __int64 v481; // x24
  int v482; // w25
  int v483; // w26
  int v484; // w27
  int v485; // w28
  __int64 v486; // x0
  int v487; // w21
  __int64 v488; // x0
  __int64 v489; // x22
  int v490; // w0
  int v491; // w8
  __int64 v492; // x21
  __int64 v493; // x19
  __int64 v494; // x19
  __int64 v495; // x19
  __int64 v496; // x19
  _QWORD *v497; // x20
  __int64 v498; // x1
  _QWORD *v499; // x0
  __int64 v500; // x19
  __int64 v501; // x21
  __int64 v502; // x0
  int v503; // w0
  __int64 v504; // x21
  int v505; // w0
  __int64 v506; // x21
  __int64 v507; // x22
  __int64 *v508; // x23
  int v509; // w24
  __int64 v510; // x0
  __int64 v511; // x21
  void *v512; // x0
  __int64 v513; // x20
  __int64 v514; // x0
  __int64 v515; // x22
  __int64 v516; // x0
  int v517; // w23
  __int64 v518; // x0
  __int64 *v519; // x21
  __int64 v520; // x0
  void *v521; // x0
  void *v522; // x0
  void *v523; // x20
  __int64 v524; // x0
  __int64 v525; // x21
  __int64 v526; // x21
  char *v527; // x1
  void *v528; // x0
  __int64 v529; // x0
  __int64 v530; // x23
  int v531; // w0
  __int64 v532; // x19
  __int64 v533; // x22
  __int64 v534; // x22
  int v535; // w23
  int v536; // w21
  __int64 v537; // x22
  int v538; // w23
  int v539; // w21
  __int64 v540; // x22
  int v541; // w23
  int v542; // w24
  int v543; // w21
  __int64 v544; // x22
  int v545; // w23
  int v546; // w21
  _QWORD *v547; // x20
  __int64 v548; // x22
  __int64 v549; // x0
  int v550; // w21
  void *v551; // x27
  __int64 v552; // x24
  int v553; // w8
  __int64 v554; // x0
  __int64 v555; // x21
  __int64 v556; // x0
  __int64 v557; // x21
  bool v558; // w0
  __int64 v559; // x0
  void *v560; // x0
  __int64 v561; // x22
  int v562; // w23
  int v563; // w21
  __int64 v564; // x22
  __int64 v565; // x21
  __int64 v566; // x0
  int *v567; // x19
  long double v568; // q0
  __int64 v569; // x0
  __int64 v570; // x20
  __int64 v571; // x0
  __int64 v572; // x0
  __int64 v573; // x21
  __int64 v574; // x0
  __int64 v575; // x21
  __int64 v576; // x0
  __int64 v577; // x22
  __int64 v578; // x23
  unsigned int *v579; // x25
  __int64 v580; // x24
  __int64 v581; // x19
  __int64 v582; // x0
  __int64 v583; // x26
  __int64 v584; // x27
  __int64 v585; // x0
  __int64 v586; // x21
  __int64 v587; // x2
  void *v588; // x0
  __int64 v589; // x22
  int v590; // w23
  int v591; // w24
  int v592; // w21
  __int64 v593; // x22
  int v594; // w23
  int v595; // w24
  int v596; // w21
  __int64 v597; // x0
  __int64 v598; // x21
  __int64 v599; // x21
  __int64 v600; // x0
  int v601; // w21
  __int64 v602; // x0
  __int64 v603; // x0
  __int64 v604; // x22
  int v605; // w0
  __int64 v606; // x0
  __int64 v607; // x22
  __int64 v608; // x0
  __int64 v609; // x19
  __int64 v610; // x21
  char **v611; // x0
  __int64 v612; // x20
  __int64 v613; // x0
  __int64 v614; // x19
  __int64 v615; // x0
  __int64 v616; // x0
  __int64 v617; // x0
  __int64 v618; // x20
  char *v619; // x21
  void *v620; // x20
  __int64 v621; // x20
  int v622; // w19
  __int64 v623; // x0
  __int64 v624; // x19
  __int64 *v625; // x21
  __int64 v626; // x20
  __int64 v627; // x19
  __int64 v628; // x0
  __int64 v629; // x22
  __int64 v630; // x21
  double *v631; // x19
  __int64 v632; // x0
  __int64 v633; // x22
  __int64 v634; // x2
  __int64 v635; // x21
  unsigned int v636; // w1
  __int64 v638; // x19
  __int64 v639; // x19
  _DWORD *v640; // x8
  __int64 v641; // x19
  __int64 v642; // x19
  char *v643; // x21
  _DWORD *v644; // x8
  __int64 v645; // x20
  unsigned __int16 *v646; // x19
  int v647; // w0
  int v648; // w20
  _QWORD *v649; // x0
  __int64 v650; // x21
  void *v652; // x0
  __int64 v653; // x19
  __int64 v654; // x21
  __int64 v655; // x19
  __int64 *v656; // x0
  __int64 v657; // x19
  __int64 v658; // x20
  __int64 v659; // x19
  char *v660; // x21
  __int64 v661; // x0
  __int64 v662; // x19
  __int64 v663; // x0
  __int64 v664; // x19
  long double v665; // q0
  __int64 v666; // x0
  __int64 v667; // x0
  __int64 v668; // x0
  __int64 v669; // x0
  int v670; // w0
  __int64 v671; // x21
  _DWORD *v672; // x24
  __int64 v673; // x27
  double *v674; // x23
  __int64 v675; // x0
  __int64 *v676; // x26
  __int64 v677; // x25
  _DWORD *v678; // x0
  __int64 v679; // x0
  __int64 v680; // x25
  int v681; // w0
  __int64 v682; // x0
  __int64 v683; // x25
  __int64 v684; // x0
  __int64 v685; // x21
  int v686; // w0
  char v687; // w22
  char v688; // w8
  __int64 v689; // x0
  __int64 v690; // x0
  __int64 v691; // x0
  __int64 v692; // x21
  __int64 v693; // x25
  __int64 v694; // x0
  __int64 v695; // x24
  __int64 v696; // x25
  int v697; // w0
  __int64 v698; // x0
  __int64 v699; // x0
  __int64 *v700; // x21
  __int64 v701; // x25
  __int64 v702; // x26
  __int64 v703; // x22
  __int64 v704; // x27
  int v705; // w0
  __int64 v706; // x3
  __int64 *v707; // x21
  __int64 v708; // x4
  __int64 v709; // x0
  __int64 v710; // x0
  __int64 v711; // x25
  char v712; // w26
  char v713; // w4
  __int64 *v714; // x21
  __int64 v715; // x0
  __int64 v716; // x0
  __int64 v717; // x25
  __int64 v718; // x0
  _BOOL4 v719; // w25
  __int64 v720; // x0
  void *v721; // x26
  __int64 v722; // x22
  __int64 v723; // x0
  unsigned int v724; // w27
  __int64 v725; // x28
  __int64 v726; // x0
  __int64 v727; // x21
  int v728; // w0
  int v729; // w8
  int v730; // w8
  int v731; // w9
  int v732; // w10
  __int64 v733; // x0
  __int64 v734; // x21
  __int64 v735; // x22
  __int64 v736; // x23
  __int64 *v737; // x19
  __int64 *v738; // x20
  __int64 *v739; // x3
  __int64 *v740; // x4
  char **v741; // x5
  __int64 v742; // x0
  unsigned int v743; // w1
  __int64 v744; // x2
  __int64 v745; // x21
  __int64 v746; // x22
  __int64 v747; // x19
  __int64 v748; // x20
  _QWORD *v749; // x19
  __int64 v750; // x26
  __int64 v751; // x22
  __int64 v752; // x0
  __int64 v753; // x23
  __int64 v754; // x8
  __int64 v755; // x28
  __int64 v756; // x21
  __int64 v757; // x25
  __int64 v758; // x21
  __int64 *v759; // x9
  unsigned __int64 v760; // x10
  int *v761; // x8
  __int64 v762; // x24
  unsigned __int64 v763; // x11
  __int64 v764; // x10
  unsigned __int64 v765; // x1
  __int64 v766; // x0
  __int64 *v767; // x10
  int *v768; // x11
  __int64 v769; // t1
  __int64 *v770; // x9
  __int64 v771; // x10
  int v772; // w0
  void *v773; // x19
  char *v774; // x1
  void *v775; // x0
  __int64 v776; // x19
  __int64 v777; // x27
  __int64 v778; // x23
  long double v779; // q0
  int *v780; // x0
  int *v781; // x24
  __int64 v782; // x0
  __int64 v783; // x0
  __int64 v784; // x25
  _QWORD *v785; // x9
  _QWORD *v786; // x10
  _QWORD *v787; // x8
  __int64 v788; // x21
  int **v789; // x8
  __int64 v790; // x8
  __int64 v791; // x25
  unsigned __int64 v792; // x9
  unsigned __int64 v793; // x1
  __int64 v794; // x0
  int **v795; // x9
  _QWORD *v796; // x10
  __int64 v797; // x8
  __int64 v798; // x11
  int *v799; // t1
  int v800; // w20
  _QWORD *v801; // x19
  __int64 v802; // x22
  int v803; // w11
  unsigned int v804; // w8
  int v805; // w9
  __int64 v806; // x10
  __int64 v807; // x12
  __int64 v808; // x14
  int v809; // w13
  unsigned int v810; // w11
  _QWORD *v811; // x14
  __int64 v812; // x21
  __int64 v813; // x8
  __int64 v814; // x22
  bool v815; // w23
  __int64 v816; // x25
  int v817; // w9
  int v818; // w9
  int v819; // w26
  __int64 (__fastcall *v820)(__int64, __int64, __int64); // x0
  __int64 v821; // x21
  int v822; // w8
  __int64 j; // x21
  __int64 v824; // x20
  __int64 v825; // x20
  unsigned int *v826; // x0
  unsigned int *v827; // x19
  __int64 v828; // x0
  __int64 v829; // x20
  __int64 v830; // x0
  __int64 *v831; // x0
  __int64 *v832; // x20
  __int64 v833; // x0
  __int64 v834; // x19
  __int64 v835; // x0
  __int64 v836; // x19
  char *v837; // x1
  void *v838; // x0
  __int64 *v839; // x0
  unsigned int *v840; // x0
  __int64 v841; // x0
  __int64 v842; // x1
  __int64 v843; // x19
  __int64 v844; // x20
  int *v845; // x21
  __int64 v846; // x9
  __int64 v847; // x8
  __int64 v848; // x9
  __int64 v849; // x21
  __int64 v850; // x19
  id v851; // x20
  int v853; // [xsp+Ch] [xbp-4C4h]
  int v854; // [xsp+Ch] [xbp-4C4h]
  int v855; // [xsp+Ch] [xbp-4C4h]
  int v856; // [xsp+Ch] [xbp-4C4h]
  int v857; // [xsp+Ch] [xbp-4C4h]
  int v858; // [xsp+Ch] [xbp-4C4h]
  char v859[16]; // [xsp+30h] [xbp-4A0h] BYREF
  __int64 v860[2]; // [xsp+40h] [xbp-490h] BYREF
  char v861[16]; // [xsp+50h] [xbp-480h] BYREF
  char v862[8]; // [xsp+60h] [xbp-470h] BYREF
  char v863[8]; // [xsp+68h] [xbp-468h] BYREF
  char v864[8]; // [xsp+70h] [xbp-460h] BYREF
  __int64 v865; // [xsp+78h] [xbp-458h] BYREF
  int *v866; // [xsp+80h] [xbp-450h] BYREF
  __int64 v867; // [xsp+88h] [xbp-448h] BYREF
  __int64 v868; // [xsp+90h] [xbp-440h] BYREF
  __int64 v869; // [xsp+98h] [xbp-438h] BYREF
  int *v870; // [xsp+A0h] [xbp-430h] BYREF
  __int64 v871; // [xsp+A8h] [xbp-428h] BYREF
  __int64 v872[2]; // [xsp+B0h] [xbp-420h] BYREF
  __int64 v873[2]; // [xsp+C0h] [xbp-410h] BYREF
  __int64 v874[2]; // [xsp+D0h] [xbp-400h] BYREF
  __int64 v875[2]; // [xsp+E0h] [xbp-3F0h] BYREF
  __int64 v876[2]; // [xsp+F0h] [xbp-3E0h] BYREF
  __int64 v877[2]; // [xsp+100h] [xbp-3D0h] BYREF
  __int64 v878[2]; // [xsp+110h] [xbp-3C0h] BYREF
  __int64 v879[2]; // [xsp+120h] [xbp-3B0h] BYREF
  __int64 v880[2]; // [xsp+130h] [xbp-3A0h] BYREF
  __int64 v881[2]; // [xsp+140h] [xbp-390h] BYREF
  __int64 v882[2]; // [xsp+150h] [xbp-380h] BYREF
  __int64 v883[2]; // [xsp+160h] [xbp-370h] BYREF
  __int64 v884[2]; // [xsp+170h] [xbp-360h] BYREF
  __int64 v885[2]; // [xsp+180h] [xbp-350h] BYREF
  __int64 v886[2]; // [xsp+190h] [xbp-340h] BYREF
  __int64 v887; // [xsp+1A0h] [xbp-330h] BYREF
  __int64 *v888; // [xsp+1A8h] [xbp-328h] BYREF
  __int64 v889; // [xsp+1B0h] [xbp-320h] BYREF
  __int64 v890; // [xsp+1B8h] [xbp-318h] BYREF
  __int64 v891; // [xsp+1C0h] [xbp-310h] BYREF
  __int64 v892; // [xsp+1C8h] [xbp-308h] BYREF
  __int64 v893; // [xsp+1D0h] [xbp-300h] BYREF
  __int64 *v894; // [xsp+1D8h] [xbp-2F8h] BYREF
  char v895[8]; // [xsp+1E0h] [xbp-2F0h] BYREF
  __int64 v896; // [xsp+1E8h] [xbp-2E8h] BYREF
  __int64 v897; // [xsp+1F0h] [xbp-2E0h] BYREF
  __int64 *v898; // [xsp+1F8h] [xbp-2D8h] BYREF
  int *v899; // [xsp+200h] [xbp-2D0h] BYREF
  int *v900; // [xsp+208h] [xbp-2C8h] BYREF
  char v901[8]; // [xsp+210h] [xbp-2C0h] BYREF
  char v902[8]; // [xsp+218h] [xbp-2B8h] BYREF
  __int64 v903; // [xsp+220h] [xbp-2B0h] BYREF
  __int64 v904; // [xsp+228h] [xbp-2A8h] BYREF
  __int64 v905; // [xsp+230h] [xbp-2A0h] BYREF
  __int64 v906[2]; // [xsp+238h] [xbp-298h] BYREF
  int *v907; // [xsp+248h] [xbp-288h] BYREF
  int *v908; // [xsp+250h] [xbp-280h] BYREF
  __int64 v909; // [xsp+258h] [xbp-278h] BYREF
  __int64 v910; // [xsp+260h] [xbp-270h] BYREF
  int *v911; // [xsp+268h] [xbp-268h] BYREF
  __int64 v912; // [xsp+270h] [xbp-260h] BYREF
  __int64 v913; // [xsp+278h] [xbp-258h] BYREF
  __int64 v914; // [xsp+280h] [xbp-250h] BYREF
  __int64 *v915; // [xsp+288h] [xbp-248h] BYREF
  int *v916; // [xsp+290h] [xbp-240h] BYREF
  __int64 v917; // [xsp+298h] [xbp-238h] BYREF
  __int64 v918; // [xsp+2A0h] [xbp-230h] BYREF
  int *v919; // [xsp+2A8h] [xbp-228h] BYREF
  __int64 *v920; // [xsp+2B0h] [xbp-220h] BYREF
  char v921[8]; // [xsp+2B8h] [xbp-218h] BYREF
  __int64 v922; // [xsp+2C0h] [xbp-210h] BYREF
  char *v923; // [xsp+2C8h] [xbp-208h] BYREF
  __int64 *v924; // [xsp+2D0h] [xbp-200h] BYREF
  char v925[8]; // [xsp+2D8h] [xbp-1F8h] BYREF
  __int64 v926; // [xsp+2E0h] [xbp-1F0h] BYREF
  char *v927; // [xsp+2E8h] [xbp-1E8h] BYREF
  __int64 *v928; // [xsp+2F0h] [xbp-1E0h] BYREF
  __int64 v929; // [xsp+2F8h] [xbp-1D8h] BYREF
  __int64 v930; // [xsp+300h] [xbp-1D0h] BYREF
  char *v931; // [xsp+308h] [xbp-1C8h] BYREF
  __int64 *v932; // [xsp+310h] [xbp-1C0h] BYREF
  __int64 v933; // [xsp+318h] [xbp-1B8h] BYREF
  __int64 v934; // [xsp+320h] [xbp-1B0h] BYREF
  char *v935; // [xsp+328h] [xbp-1A8h] BYREF
  __int64 *v936; // [xsp+330h] [xbp-1A0h] BYREF
  __int64 v937; // [xsp+338h] [xbp-198h] BYREF
  __int64 v938; // [xsp+340h] [xbp-190h] BYREF
  char *v939; // [xsp+348h] [xbp-188h] BYREF
  __int64 *v940; // [xsp+350h] [xbp-180h] BYREF
  __int64 v941; // [xsp+358h] [xbp-178h] BYREF
  __int64 v942; // [xsp+360h] [xbp-170h] BYREF
  char *v943; // [xsp+368h] [xbp-168h] BYREF
  __int64 *v944; // [xsp+370h] [xbp-160h] BYREF
  __int64 v945; // [xsp+378h] [xbp-158h] BYREF
  int64x2_t v946; // [xsp+380h] [xbp-150h] BYREF
  __int64 *v947; // [xsp+390h] [xbp-140h] BYREF
  __int64 v948; // [xsp+398h] [xbp-138h] BYREF
  __int64 v949; // [xsp+3A0h] [xbp-130h] BYREF
  char *v950; // [xsp+3A8h] [xbp-128h] BYREF
  __int64 *v951; // [xsp+3B0h] [xbp-120h] BYREF
  __int64 v952; // [xsp+3B8h] [xbp-118h] BYREF
  __int64 v953; // [xsp+3C0h] [xbp-110h] BYREF
  char *v954; // [xsp+3C8h] [xbp-108h] BYREF
  int *v955; // [xsp+3D0h] [xbp-100h] BYREF
  __int64 v956; // [xsp+3D8h] [xbp-F8h] BYREF
  __int64 v957; // [xsp+3E0h] [xbp-F0h] BYREF
  __int64 v958; // [xsp+3E8h] [xbp-E8h] BYREF
  __int64 *v959; // [xsp+3F0h] [xbp-E0h] BYREF
  __int64 v960; // [xsp+3F8h] [xbp-D8h] BYREF
  __int64 v961; // [xsp+400h] [xbp-D0h] BYREF
  __int64 v962[2]; // [xsp+408h] [xbp-C8h] BYREF
  __int64 *v963[2]; // [xsp+418h] [xbp-B8h] BYREF
  __int64 *v964[2]; // [xsp+428h] [xbp-A8h] BYREF
  __int64 v965; // [xsp+438h] [xbp-98h] BYREF
  char v966[8]; // [xsp+440h] [xbp-90h] BYREF
  char *v967; // [xsp+448h] [xbp-88h] BYREF
  _QWORD *v968; // [xsp+450h] [xbp-80h] BYREF
  __int64 *v969; // [xsp+458h] [xbp-78h] BYREF
  __int64 *v970; // [xsp+460h] [xbp-70h] BYREF
  int *v971; // [xsp+468h] [xbp-68h] BYREF
  __int64 v972; // [xsp+470h] [xbp-60h] BYREF
  _QWORD *v973; // [xsp+478h] [xbp-58h] BYREF
  _BYTE *v974; // [xsp+480h] [xbp-50h] BYREF
  __int64 (__fastcall *v975)(__int64, __int64, __int64); // [xsp+488h] [xbp-48h] BYREF
  __int64 (__fastcall *v976)(__int64, __int64, __int64); // [xsp+490h] [xbp-40h] BYREF
  char *v977; // [xsp+498h] [xbp-38h] BYREF
  __int64 v978; // [xsp+4A0h] [xbp-30h] BYREF
  __int64 (__fastcall *v979)(__int64, __int64, __int64); // [xsp+4A8h] [xbp-28h] BYREF
  void *v980; // [xsp+4B0h] [xbp-20h] BYREF
  __int64 v981; // [xsp+4B8h] [xbp-18h] BYREF
  __int64 v982; // [xsp+4C0h] [xbp-10h]
  __int64 v983; // [xsp+4C8h] [xbp-8h]
  __int64 vars0; // [xsp+4D0h] [xbp+0h]

  if ( *off_101054C50 != 6
    && (*(*a2 + 40LL))(a2) != 20103
    && (*(*a2 + 40LL))(a2) != 23654
    && (*(*a2 + 40LL))(a2) != 25874
    && (*(*a2 + 40LL))(a2) != 26705 )
  {
    return;
  }
  v144 = (*(*a2 + 40LL))(a2);
  if ( v144 <= 23882 )
  {
    if ( v144 <= 21961 )
    {
      if ( v144 > 21000 )
      {
        if ( v144 <= 21375 )
        {
          if ( v144 <= 21111 )
          {
            if ( v144 != 21001 )
            {
              if ( v144 == 21034 )
                return;
              if ( v144 != 21111 )
                goto LABEL_611;
              v157 = off_101054C18;
              sub_1005B44E4(a2);
              v158 = sub_1005B44EC(a2);
              goto LABEL_586;
            }
            v369 = sub_1005ED164(a2);
            if ( !v369 )
              return;
          }
          else
          {
            if ( v144 <= 21155 )
            {
              if ( v144 != 21112 )
              {
                if ( v144 == 21113 )
                {
                  v831 = sub_1005EF118(a2);
                  if ( v831 )
                  {
                    v832 = v831;
                    qword_1010A20F8 = sub_10061A538(v831);
                    sub_10061A5D4(v832);
                    v828 = operator delete();
                    if ( qword_1010A2100 )
                    {
                      if ( dword_101054E90 == 1 )
                      {
                        operator new(160LL);
                        v834 = v833;
                        v835 = sub_1005E69E8(v833);
                        *(v835 + 144) = qword_1010A2100;
                        *(v835 + 152) = 1;
                        sub_1003EC75C(3LL);
                        sub_100408A78(byte_101054CC8, v834);
                        sub_1003EE03C(1LL, 0);
                      }
                      qword_1010A2100 = 0LL;
                    }
                    else
                    {
LABEL_1332:
                      sub_1004543DC(v828);
                    }
                  }
                  else
                  {
                    switch ( sub_1005EF110(a2) )
                    {
                      case 0u:
                      case 2u:
                        goto LABEL_1342;
                      case 1u:
                        v836 = sub_1003F4DEC();
                        v837 = "TID_WARNING_INVALID_LAYOUT_CODE";
                        goto LABEL_1345;
                      case 3u:
                        v840 = sub_1005EF128(a2);
                        if ( v840 && (v841 = sub_100B8E344(v840), !sub_1000FC51C(v841)) && (v843 = v842, *(v842 + 4)) )
                        {
                          v844 = sub_1003F4DEC();
                          sub_100D805D8(&v976, "TID_DISTRICT_LAYOUT_LOCKED");
                          sub_100372DE0(&v976);
                          sub_100D805D8(&v974, "<player>");
                          sub_100D8205C(v845, &v974, v843, &v978);
                          sub_1003F5B18(v844, &v978, 1LL, 0LL);
                          sub_100D80350(&v978);
                          sub_100D80350(&v974);
                          v839 = &v976;
                        }
                        else
                        {
LABEL_1342:
                          v836 = sub_1003F4DEC();
                          v837 = "TID_WARNING_SHARED_LAYOUT_NOT_AVAILABLE";
LABEL_1345:
                          sub_100D805D8(&v978, v837);
                          v838 = sub_100372DE0(&v978);
                          sub_1003F5B18(v836, v838, 1LL, 0LL);
                          v839 = &v978;
                        }
                        sub_100D80350(v839);
                        break;
                      default:
                        return;
                    }
                  }
                  return;
                }
                goto LABEL_611;
              }
              v312 = sub_1005ED024(a2);
              sub_1001BFE60(v312, &v971);
              sub_100D80350(v312);
              operator delete();
              sub_100D805D8(&v969, "TID_LAYOUT_LINK_COPIED_TO_CLIPBOARD");
              sub_10022BD7C(&v969, 0LL, 0LL, 0.0);
              sub_100D80350(&v969);
              sub_100D8827C();
              goto LABEL_822;
            }
            if ( v144 != 21156 )
            {
              if ( v144 == 21176 )
              {
                v250 = sub_1005F7C48(a2);
                v251 = off_101054C88;
                if ( off_101054C88 )
                  sub_100443680(off_101054C88);
                switch ( v250 )
                {
                  case 0:
                    if ( v251 )
                    {
                      v518 = sub_1004435A8(v251);
                      sub_10044370C(v251, v518);
                      if ( *v519 )
                        sub_1001B2D80(*v519, *(*v519 + 20));
                    }
                    break;
                  case 1:
                  case 2:
                  case 3:
                    if ( v251 )
                      goto LABEL_280;
                    break;
                  case 4:
                    if ( v251 )
                    {
                      if ( off_101054CC0 )
                      {
                        operator new(528LL);
                        sub_10034612C(v520, 66LL);
                        goto LABEL_652;
                      }
LABEL_280:
                      sub_1004435E8();
                    }
                    break;
                  default:
                    sub_100D830B0(v250, &v969);
                    sub_100D80C88("TencentAccountBoundMessage: invalid result code ", &v971);
                    sub_100D80350(&v971);
                    sub_100D80350(&v969);
                    if ( v251 )
                      sub_1004435E8();
                    break;
                }
                return;
              }
              goto LABEL_611;
            }
            if ( !off_101054CC0 )
              return;
            if ( !sub_10022DE8C(off_101054CC0) )
              return;
            v442 = sub_10022DE8C(off_101054CC0);
            if ( !v442 )
              return;
            v443 = v442;
            if ( sub_1005D97C4(a2) )
            {
              if ( sub_1005D97CC(a2) == 2 )
              {
                v444 = "TID_NAME_TOO_SHORT";
              }
              else if ( sub_1005D97CC(a2) == 4 )
              {
                v444 = "TID_NAME_ALREADY_CHANGED";
              }
              else
              {
                if ( sub_1005D97CC(a2) == 5 )
                {
                  v566 = sub_10050F614();
                  sub_100D82FA4("%i", &v971, *(v566 + 748));
                  sub_100D805D8(&v967, "TID_NAME_CHANGE_TH_LEVEL_TOO_LOW");
                  v567 = sub_100372DE0(&v967);
                  sub_100D805D8(&v965, "<level>");
                  sub_100D8205C(v567, &v965, &v971, &v969);
                  (**v443)(v443, &v969);
                  sub_100D80350(&v969);
                  sub_100D80350(&v965);
                  v401 = &v967;
                  goto LABEL_527;
                }
                v444 = "TID_INVALID_NAME";
              }
              sub_100D805D8(&v971, v444);
              v588 = sub_100372DE0(&v971);
              (**v443)(v443, v588);
              goto LABEL_822;
            }
            v532 = sub_1005D97D4(a2);
            (*(*v443 + 16LL))(v443, v532);
            if ( !v532 )
              return;
            v369 = v532;
          }
          sub_100D80350(v369);
          goto LABEL_774;
        }
        if ( v144 <= 21783 )
        {
          if ( v144 <= 21624 )
          {
            if ( v144 == 21376 )
            {
              if ( a2 && off_101054CC0 )
              {
                sub_100D805D8(&v980, "");
                v53 = *(a2 + 152);
                if ( v53 <= 6 )
                  sub_100D8076C(&v980, off_100EF2018[v53]);
                if ( sub_100D7FA94(&v980) >= 1 )
                {
                  sub_100D805D8(&v976, "TID_PIN_ERROR_MESSAGE");
                  v54 = sub_100372DE0(&v976);
                  sub_100D805D8(&v974, "{0}");
                  v55 = sub_100372DE0(&v980);
                  sub_100D8205C(v54, &v974, v55, &v978);
                  sub_100D80350(&v974);
                  sub_100D80350(&v976);
                  sub_10022BCF0(&v978, 0.0, 1LL, 0LL, 0LL);
                  sub_100D80350(&v978);
                }
                sub_100D80350(&v980);
              }
              return;
            }
            if ( v144 != 21389 )
              goto LABEL_611;
            if ( sub_1003E6A44() )
            {
              sub_1003E6A44();
              if ( dword_101054E90 == 3
                || (sub_1003E6A44(), dword_101054E90 == 8)
                || (sub_1003E6A44(), dword_101054E90 == 6) )
              {
                sub_1003E6A44();
                sub_1003EC75C(1LL);
              }
            }
            if ( !off_101054CC0 )
              return;
            v147 = sub_1005D5F84(a2);
            if ( v147 == 2 )
            {
              v148 = "TID_ALLIANCE_WAR_VISIT_FAILED_UNAVAILABLE";
            }
            else if ( v147 == 1 )
            {
              v148 = "TID_ALLIANCE_WAR_VISIT_FAILED_NOT_FOUND";
            }
            else
            {
              v148 = "TID_ALLIANCE_WAR_VISIT_FAILED";
            }
            goto LABEL_818;
          }
          if ( v144 == 21625 )
          {
LABEL_342:
            if ( off_101054CC0 )
            {
              sub_100D805D8(&v971, "TID_REPLAY_BUTTON_FAIL");
              v302 = sub_100372DE0(&v971);
              sub_10022BCF0(v302, 0.0, 1LL, 0LL, 0LL);
              sub_100D80350(&v971);
            }
            if ( !sub_1003E6A44() )
              return;
            sub_1003E6A44();
            if ( dword_101054E90 != 5 )
              return;
            goto LABEL_736;
          }
          if ( v144 != 21730 )
            goto LABEL_611;
          if ( !off_101054CC0 )
            return;
          v215 = sub_10022C3C0(off_101054CC0);
          if ( !v215 )
            return;
          v217 = v215;
          v218 = sub_100226C7C(v216);
          if ( !v218 )
            return;
          if ( (*(*v218 + 408LL))(v218) != 29 )
            return;
          if ( !sub_1001C307C(v217) )
            return;
          v219 = sub_1001C307C(v217);
          if ( (*(*v219 + 392LL))(v219) != 1 )
          {
            v220 = sub_1001C307C(v217);
            if ( (*(*v220 + 392LL))(v220) != 2 )
              return;
          }
          sub_1005E62CC(a2);
          v221 = sub_1001C307C(v217);
          v222 = (*(*v221 + 392LL))(v221);
          v223 = sub_1001C307C(v217);
          if ( v222 == 2 )
          {
            v224 = sub_1001C1508(v223);
            if ( !sub_100D80EC4(v224, v225) )
            {
LABEL_845:
              operator new(200LL);
              v239 = v465;
              v466 = 4LL;
LABEL_846:
              v587 = 1LL;
              goto LABEL_847;
            }
          }
          else
          {
            v574 = sub_1001C1950(v223);
            if ( !sub_100D80EC4(v574, v575) )
              goto LABEL_845;
          }
          v576 = sub_1005E62DC(a2);
          switch ( v576 )
          {
            case 0:
              v577 = sub_1005E62E4(a2);
              v578 = sub_1005E62D4(a2);
              v579 = sub_1005E62F4(a2);
              v580 = sub_1005E62FC(a2);
              v581 = sub_1005E62EC(a2);
              if ( !sub_100B8E370(v579) && *(v580 + 4) )
              {
                operator new(256LL);
                v583 = v582;
                v584 = sub_100B8E43C(v579);
                v585 = sub_100B8E444(v579);
                sub_1001C13B0(v583, v586, v577, v581, v578, v580, v584, v585);
                sub_1001C31E8(v217, v583);
              }
              break;
            case 1:
              goto LABEL_603;
            case 2:
              goto LABEL_843;
            case 4:
              goto LABEL_845;
            case 5:
              operator new(200LL);
              v239 = v465;
              v466 = 5LL;
              goto LABEL_846;
            case 6:
              operator new(200LL);
              v239 = v465;
              v466 = 9LL;
              goto LABEL_844;
            case 7:
              operator new(200LL);
              v239 = v465;
              v466 = 8LL;
              goto LABEL_844;
            case 11:
              goto LABEL_764;
            default:
              sub_100D82FA4("LogicDeviceLinkResponseMessage unknown error code %d", &v971, v576);
              goto LABEL_822;
          }
          return;
        }
        if ( v144 > 21939 )
        {
          if ( v144 == 21940 )
          {
            if ( dword_101054E90 == 2 )
            {
              v457 = sub_1005EBF94(a2);
              sub_1005EBFA4(a2, &v969);
              sub_1005EBFB4(a2, &v967);
              sub_1005EBF8C(a2);
              v458 = sub_1005EBFC4(a2);
              sub_1005EBFD4(a2, &v965);
              switch ( v458 )
              {
                case 1:
                  v459 = sub_1003F4DEC();
                  v951 = v969;
                  v950 = v967;
                  v949 = v965;
                  v460 = sub_1005EC1F4(a2);
                  v948 = 0LL;
                  v853 = sub_1005EC1FC(a2);
                  sub_1003F538C(v459, v457, &v951, &v950, v461, 2LL, 1, 0, 0.0, &v949, v460, v853, 0, 0LL, &v948);
                  break;
                case 2:
                  v534 = sub_1003F4DEC();
                  v947 = v969;
                  v946.i64[1] = v967;
                  v946.i64[0] = v965;
                  v535 = sub_1005EC1F4(a2);
                  v945 = 0LL;
                  v854 = sub_1005EC1FC(a2);
                  sub_1003F538C(v534, v457, &v947, &v946.i64[1], v536, 2LL, 2, 0, 0.0, &v946, v535, v854, 0, 0LL, &v945);
                  break;
                case 3:
                  v537 = sub_1003F4DEC();
                  v944 = v969;
                  v943 = v967;
                  v942 = v965;
                  v538 = sub_1005EC1F4(a2);
                  v941 = 0LL;
                  v855 = sub_1005EC1FC(a2);
                  sub_1003F538C(v537, v457, &v944, &v943, v539, 2LL, 3, 0, 0.0, &v942, v538, v855, 0, 0LL, &v941);
                  break;
                case 10:
                  v544 = sub_1003F4DEC();
                  v940 = v969;
                  v939 = v967;
                  v938 = v965;
                  v545 = sub_1005EC1F4(a2);
                  v937 = 0LL;
                  v857 = sub_1005EC1FC(a2);
                  sub_1003F538C(v544, v457, &v940, &v939, v546, 2LL, 10, 0, 0.0, &v938, v545, v857, 0, 0LL, &v937);
                  break;
                default:
                  if ( (v458 - 5) > 1 )
                  {
                    switch ( v458 )
                    {
                      case 0xD:
                        v589 = sub_1003F4DEC();
                        v928 = v969;
                        v927 = v967;
                        v926 = v965;
                        v590 = sub_1005EC1F4(a2);
                        v591 = sub_1005EC1FC(a2);
                        sub_1005EBFE4(a2, v925);
                        sub_1003F538C(v589, v457, &v928, &v927, v592, 2LL, 13, 0, 0.0, &v926, v590, v591, 0, 0LL, v925);
                        break;
                      case 0xC:
                        v593 = sub_1003F4DEC();
                        v924 = v969;
                        v923 = v967;
                        v922 = v965;
                        v594 = sub_1005EC1F4(a2);
                        v595 = sub_1005EC1FC(a2);
                        sub_1005EBFE4(a2, v921);
                        sub_1003F538C(v593, v457, &v924, &v923, v596, 2LL, 12, 0, 0.0, &v922, v594, v595, 0, 0LL, v921);
                        break;
                      case 0xB:
                        v561 = sub_1003F4DEC();
                        v932 = v969;
                        v931 = v967;
                        v930 = v965;
                        v562 = sub_1005EC1F4(a2);
                        v929 = 0LL;
                        v858 = sub_1005EC1FC(a2);
                        sub_1003F538C(v561, v457, &v932, &v931, v563, 2LL, 11, 0, 0.0, &v930, v562, v858, 0, 0LL, &v929);
                        break;
                      default:
                        sub_100D82FA4("EnemyHomeDataMessage - Unknown attack source %d", &v971, v458);
                        sub_100D80350(&v971);
                        if ( v457 )
                        {
                          sub_100596A30(v457);
                          operator delete();
                        }
                        if ( v969 )
                        {
                          (*(*v969 + 112))(v969);
                          if ( v969 )
                            (*(*v969 + 8))(v969);
                          v969 = 0LL;
                        }
                        if ( v967 )
                        {
                          (*(*v967 + 112LL))(v967);
                          if ( v967 )
                            (*(*v967 + 8LL))(v967);
                          v967 = 0LL;
                        }
                        if ( v965 )
                          operator delete();
                        v965 = 0LL;
                        break;
                    }
                  }
                  else
                  {
                    v540 = sub_1003F4DEC();
                    v936 = v969;
                    v935 = v967;
                    if ( sub_1005EBFCC(a2) )
                      v541 = 6;
                    else
                      v541 = 5;
                    v934 = v965;
                    v542 = sub_1005EC1F4(a2);
                    v933 = 0LL;
                    v856 = sub_1005EC1FC(a2);
                    sub_1003F538C(v540, v457, &v936, &v935, v543, 2LL, v541, 0, 0.0, &v934, v542, v856, 0, 0LL, &v933);
                  }
                  break;
              }
              sub_100D805D8(&v971, "BATTLE");
              sub_1003F5260(&v971);
              sub_100D80350(&v971);
              sub_100D9B6FC();
            }
            return;
          }
          if ( v144 != 21941 )
            goto LABEL_611;
          sub_100D9B508(*(a2 + 144));
          sub_100D805D8(&v971, "");
          sub_1003F5260(&v971);
          goto LABEL_822;
        }
        if ( v144 == 21784 )
        {
          if ( !off_101054CD0 )
            return;
          v333 = sub_1005E995C(a2);
          if ( !v333 )
            return;
          v334 = v333;
          sub_1001CB42C(off_101054CD0, v333);
          sub_1005E94EC(v334);
          goto LABEL_774;
        }
        v149 = 21793;
LABEL_134:
        if ( v144 == v149 )
          return;
        goto LABEL_611;
      }
      if ( v144 <= 20536 )
      {
        if ( v144 > 20170 )
        {
          if ( v144 <= 20301 )
          {
            if ( v144 == 20171 )
            {
              *(a1 + 60) = sub_1005B7F74(a2);
              return;
            }
            if ( v144 == 20206 )
            {
              sub_1001CBA38(off_101054CD0, a2);
              return;
            }
            goto LABEL_611;
          }
          if ( v144 != 20302 )
          {
            if ( v144 == 20377 )
            {
              if ( sub_1003E6A44() && *(sub_1003E6A44() + 368) && *(*(sub_1003E6A44() + 368) + 13LL) )
              {
                *(*(sub_1003E6A44() + 368) + 14LL) = 1;
              }
              else if ( sub_1003F4DEC() )
              {
                *(sub_1003F4DEC() + 175) = 1;
              }
              return;
            }
            goto LABEL_611;
          }
          if ( !off_101054CC0 )
            return;
          sub_100D805D8(&v971, "TID_ADD_FRIEND_ERROR_GENERIC");
          v438 = sub_1005E845C(a2) - 1;
          if ( v438 > 7 || ((0xDBu >> v438) & 1) == 0 )
            goto LABEL_819;
          v426 = off_100F24970[v438];
          goto LABEL_550;
        }
        if ( v144 != 20019 )
        {
          if ( v144 != 20103 )
          {
            if ( v144 == 20108 )
            {
              *(a1 + 68) = 0;
              return;
            }
            goto LABEL_611;
          }
          v978 = v974;
          v979 = v975;
          *(a1 + 20) = 0;
          v597 = (*(*a2 + 64LL))(a2);
          sub_100D82FA4("Login failed (error code = %i)", &v965, v597);
          sub_100D80350(&v965);
          (*(*a2 + 80LL))(a2);
          sub_100D805D8(&v975, "");
          if ( v598 )
          {
            sub_100D80874(&v975, v598);
            sub_100D80350(v599);
            operator delete();
          }
          (*(*a2 + 64LL))(a2);
          v600 = (loc_1000DC03C)();
          if ( v600 )
          {
            v602 = (loc_1000DC03C)();
            v603 = sub_1000E0E68(v602, 0LL);
            v604 = (loc_1000DC03C)(v603);
            v605 = sub_1005B650C(a2);
            v606 = sub_1000E0FA0(v604, v605);
            v607 = (loc_1000DC03C)(v606);
            v608 = sub_1005B6524(a2);
            v600 = sub_1000E0FD4(v607, v608);
          }
          switch ( v601 )
          {
            case 7:
              if ( qword_1010A1FA0 )
              {
                v612 = sub_1005B6470(a2);
                v613 = sub_1005B64EC(a2);
                sub_10040EFD8(v613, &v965);
                if ( v612 )
                {
                  sub_1003F2DDC(qword_1010A1FA0, v612, &v965);
                }
                else
                {
                  v645 = sub_1005B64D0(a2);
                  v646 = sub_1005B64D8(a2);
                  v977 = 0LL;
                  v647 = sub_100D6ABA0(v646, v645, &v977, 0);
                  if ( v647 < 1 )
                  {
                    sub_100B89308("LoginFailed due to uncompressed fingerprint data being negative length!", 1);
                  }
                  else
                  {
                    v648 = v647;
                    operator new(16LL);
                    sub_100D805A4(v649, v977, v648);
                    sub_1003F2DDC(qword_1010A1FA0, v650, &v965);
                  }
                  if ( v646 )
                    operator delete[](v646);
                  if ( v977 )
                    operator delete[](v977);
                }
                v977 = &v965;
                sub_1000E1810(&v977);
              }
              else
              {
                sub_100B89308("LoginFailed due to data version but InitMode is nullptr!", 1);
              }
              goto LABEL_911;
            case 8:
              v614 = sub_1005B6490(a2);
              v615 = sub_100D805D8(&v965, "");
              if ( v614 )
                v615 = sub_100D80874(&v965, v614);
              v616 = (loc_1000DC03C)(v615);
              v617 = sub_1000E0798(v616, &v965);
              v618 = (loc_1000DC03C)(v617);
              sub_100D8060C(&v972, &v975);
              sub_100D805D8(&v970, "");
              sub_100D805D8(&v968, v619);
              sub_1000DE354(v618, 6u, 8LL, &v972, &v970, &v968);
              sub_100D80350(&v968);
              sub_100D80350(&v970);
              sub_100D80350(&v972);
              *off_101054C50 = 3;
              if ( v614 )
              {
                sub_100D80350(v614);
                operator delete();
              }
              sub_100D80350(&v965);
              goto LABEL_913;
            case 9:
              sub_1001B3EDC(off_101054C50, 0);
              v620 = off_101054C50;
              sub_1005B6480(a2, &v974);
              sub_1001B4038(v620, &v974);
              goto LABEL_913;
            case 10:
              v621 = (*(*a2 + 96LL))(a2);
              v622 = sub_1005B6504(a2);
              if ( sub_100401BF4(off_101054CA0)
                && sub_10050FFF8()
                && *(sub_10050FFF8() + 1001)
                && qword_1010A1FA0
                && v622 )
              {
                operator new(512LL);
                v624 = v623;
                sub_100D805D8(&v965, "");
                sub_1002A6E10(v624, 1LL, &v965);
                sub_100D80350(&v965);
                sub_1002A7190(v624, v621);
                sub_1003F2F74(*v625, v624);
              }
              else
              {
                v642 = (loc_1000DC03C)();
                sub_100D8060C(v964, &v975);
                sub_100D805D8(v963, "");
                sub_100D805D8(v962, v643);
                sub_1000DE354(v642, 8u, v621, v964, v963, v962);
                sub_100D80350(v962);
                sub_100D80350(v963);
                v611 = v964;
LABEL_910:
                sub_100D80350(v611);
              }
LABEL_911:
              v644 = off_101054C50;
LABEL_912:
              *v644 = 3;
              goto LABEL_913;
            case 11:
              v626 = sub_1005B6514(a2);
              sub_1005B64C8(a2);
              v627 = qword_1010A1FA0;
              if ( qword_1010A1FA0 )
              {
                operator new(360LL);
                v629 = v628;
                sub_100278B10(v628, v630, &v975, v626);
                sub_1003F2F74(v627, v629);
                if ( v626 )
                  operator delete();
              }
              goto LABEL_911;
            case 12:
            case 19:
            case 20:
            case 21:
              v609 = (loc_1000DC03C)(v600);
              sub_100D8060C(&v960, &v975);
              sub_100D805D8(&v958, "");
              sub_100D805D8(&v956, "");
              sub_1000DE354(v609, 0xBu, v610, &v960, &v958, &v956);
              sub_100D80350(&v956);
              sub_100D80350(&v958);
              v611 = &v960;
              goto LABEL_910;
            case 13:
              if ( qword_1010A1FA0 )
              {
                v631 = sub_1005B6514(a2);
                operator new(384LL);
                v633 = v632;
                sub_1003A84C4(v632, v631, v634);
                sub_1003F2F74(v635, v633);
                if ( v631 )
                  operator delete();
              }
              *off_101054C50 = 9;
              *(a1 + 56) = 0;
              goto LABEL_913;
            case 16:
              v638 = (loc_1000DC03C)(v600);
              sub_100D8060C(&v954, &v975);
              sub_100D805D8(&v952, "");
              sub_100D805D8(&v950, "");
              sub_1000DE354(v638, 0x10u, 16LL, &v954, &v952, &v950);
              sub_100D80350(&v950);
              sub_100D80350(&v952);
              v611 = &v954;
              goto LABEL_910;
            case 17:
              v639 = (loc_1000DC03C)(v600);
              sub_100D8060C(&v948, &v975);
              sub_100D805D8(&v946.i64[1], "");
              sub_100D805D8(&v945, "");
              sub_1000DE354(v639, 3u, 17LL, &v948, &v946.i64[1], &v945);
              sub_100D80350(&v945);
              sub_100D80350(&v946.i64[1]);
              sub_100D80350(&v948);
              v640 = off_101054C50;
              goto LABEL_907;
            case 18:
              v641 = (loc_1000DC03C)(v600);
              sub_100D8060C(&v943, &v975);
              sub_100D805D8(&v941, "");
              sub_100D805D8(&v939, "");
              sub_1000DE354(v641, 0x15u, 18LL, &v943, &v941, &v939);
              sub_100D80350(&v939);
              sub_100D80350(&v941);
              v611 = &v943;
              goto LABEL_910;
            default:
              if ( !off_101054C50 )
                goto LABEL_928;
              v636 = *(off_101054C50 + 5);
              if ( v636 > 0x12 || ((1 << v636) & 0x41F04) == 0 )
              {
                if ( v636 == 7 && (v601 - 1) < 2 )
                  goto LABEL_904;
              }
              else if ( (v601 - 1) <= 1 )
              {
LABEL_904:
                sub_1001B2CC0(off_101054C50, v636);
                sub_1001B3EDC(off_101054C50, 0);
                sub_1001B3F3C(off_101054C50);
                goto LABEL_913;
              }
LABEL_928:
              switch ( v601 )
              {
                case 22:
                  v652 = off_101054BE8;
                  goto LABEL_932;
                case 23:
                  v652 = off_101054BE8;
LABEL_932:
                  sub_10042AA24(v652);
                  goto LABEL_913;
                case 24:
                  v655 = (loc_1000DC03C)();
                  sub_100D8060C(&v937, &v975);
                  sub_100D805D8(&v935, "");
                  sub_100D805D8(&v933, "");
                  sub_1000DE354(v655, 0x16u, 24LL, &v937, &v935, &v933);
                  sub_100D80350(&v933);
                  sub_100D80350(&v935);
                  v656 = &v937;
                  goto LABEL_935;
                case 25:
                  v657 = (loc_1000DC03C)();
                  sub_100D8060C(&v931, &v975);
                  sub_100D805D8(&v929, "");
                  sub_100D805D8(&v927, "");
                  sub_1000DE354(v657, 0x17u, 25LL, &v931, &v929, &v927);
                  sub_100D80350(&v927);
                  sub_100D80350(&v929);
                  v656 = &v931;
LABEL_935:
                  sub_100D80350(v656);
                  sub_1001B2CC0(off_101054C50, *(off_101054C50 + 5));
                  goto LABEL_937;
                case 26:
                  v658 = (loc_1000DC03C)();
                  v659 = (*(*a2 + 96LL))(a2);
                  sub_100D8060C(v925, &v975);
                  sub_100D805D8(&v923, "");
                  sub_100D805D8(v921, v660);
                  sub_1000DE354(v658, 0x19u, v659, v925, &v923, v921);
                  sub_100D80350(v921);
                  sub_100D80350(&v923);
                  sub_100D80350(v925);
LABEL_937:
                  v644 = off_101054C50;
                  goto LABEL_912;
                case 27:
                  operator new(512LL);
                  v662 = v661;
                  sub_1002A6E10(v661, 3LL, &v975);
                  sub_1003F2F74(qword_1010A1FA0, v662);
                  goto LABEL_939;
                default:
                  v653 = (loc_1000DC03C)();
                  sub_100D8060C(&v919, &v975);
                  sub_100D805D8(&v917, "");
                  sub_100D805D8(&v915, "");
                  sub_1000DE354(v653, 3u, v654, &v919, &v917, &v915);
                  sub_100D80350(&v915);
                  sub_100D80350(&v917);
                  sub_100D80350(&v919);
LABEL_939:
                  v640 = off_101054C50;
                  break;
              }
LABEL_907:
              *v640 = 3;
LABEL_913:
              sub_100D80350(&v975);
              return;
          }
        }
        v360 = sub_1005CAFCC(a2);
        if ( v360 == 3 )
        {
          v265 = "TID_CHALLENGE_FAIL_SERVER";
        }
        else if ( v360 == 2 )
        {
          v265 = "TID_GIFT_CLAIM_FAILED_NOT_PART_OF_CLAN";
        }
        else
        {
          if ( v360 )
            return;
          v265 = "TID_GIFT_CLAIM_FAILED_RECENTLY_CHANGED_CLAN";
        }
LABEL_746:
        sub_100D805D8(&v971, v265);
        sub_10022BD7C(&v971, 1LL, 0LL, 0.0);
        goto LABEL_822;
      }
      if ( v144 <= 20873 )
      {
        if ( v144 != 20537 )
        {
          if ( v144 == 20695 )
          {
            if ( sub_1003F4DEC() )
            {
              v412 = sub_1003F4DEC();
              v413 = sub_1005EFAB0(a2);
              sub_1003F5A7C(v412, v413);
            }
            return;
          }
          v159 = 20720;
          goto LABEL_228;
        }
        v402 = sub_1005EC98C(a2);
        if ( v402 < 1 )
          return;
        v403 = v402;
        v404 = sub_1005EC978(a2);
        v969 = 0LL;
        v405 = sub_100D6ABA0(v404, v403, &v969, 0);
        if ( v405 >= 1 )
        {
          v406 = v405;
          operator new(16LL);
          v408 = v407;
          sub_100D805A4(v407, v409, v406);
          v410 = sub_1003F4DEC();
          v905 = v408;
          v904 = 0LL;
          sub_1003F4F08(v410, &v905, &v904, -1);
          sub_1003F4DEC();
          sub_100D805D8(&v971, "REPLAY");
          sub_1003F5260(&v971);
          sub_100D80350(&v971);
        }
        if ( v404 )
        {
          v411 = v404;
LABEL_541:
          operator delete[](v411);
        }
LABEL_542:
        v394 = v969;
        if ( !v969 )
          return;
        goto LABEL_742;
      }
      if ( v144 <= 20878 )
      {
        if ( v144 == 20874 )
        {
          if ( !off_101054CC0 )
            return;
          if ( *(a2 + 144) == 1 )
            v183 = "TID_CAPITAL_RAID_VISIT_FAILED_INVALID_TARGET";
          else
            v183 = "TID_CAPITAL_RAID_VISIT_FAILED";
          goto LABEL_655;
        }
        v149 = 20878;
        goto LABEL_134;
      }
      if ( v144 != 20879 )
      {
        if ( v144 == 20911 )
        {
          if ( off_101054CC0 )
          {
            switch ( *(a2 + 144) )
            {
              case 1:
                v365 = "TID_PLAYER_REPORTED_SUCCESSFULLY";
                goto LABEL_477;
              case 2:
                v148 = "TID_TOO_MANY_REPORTS_SENT";
                goto LABEL_818;
              case 3:
              case 7:
                v148 = "TID_PLAYER_ALREADY_REPORTED";
                goto LABEL_818;
              case 6:
                v148 = "TID_TOO_MANY_ALLIANCE_CHAT_REPORTS_SENT";
                goto LABEL_818;
              default:
                return;
            }
          }
          return;
        }
        goto LABEL_611;
      }
      v157 = off_101054C18;
      sub_1005B4050(a2);
      v158 = sub_1005B4058(a2);
LABEL_586:
      v446 = v158;
      v447 = v157;
      v59 = v446;
      v60 = v447;
      if ( !v447[3] )
        sub_100B89308("Billing not yet initialized", 1);
      sub_100D805D8(&v978, "finishtransaction");
      v61 = *(v60 + 24);
      if ( v61 )
        (*(*v61 + 136LL))(v61);
      else
        sub_100D805D8(&v976, "");
      sub_10060E898(&v978, v59, v62, 0LL, &v976, 0LL);
      sub_100D80350(&v976);
      sub_100D80350(&v978);
      (*(**(v60 + 24) + 72LL))(*(v60 + 24), v63);
      if ( !*(sub_10050F474(v59, 0LL) + 174) )
      {
        v64 = (loc_100D9FF94)();
        v66 = sub_100D9FFB8(*(v60 + 16), v64);
        if ( *(v60 + 16) && 60000 * *(sub_10050FFF8() + 740) > v66 )
        {
          v67 = *(v60 + 8) + *(sub_10050F474(v59, 0LL) + 120);
        }
        else
        {
          *(v60 + 16) = v65;
          v67 = *(sub_10050F474(v59, 0LL) + 120);
        }
        *(v60 + 8) = v67;
      }
      *(v60 + 152) = 0;
      sub_10019E6F0(v60 + 56);
      sub_10019E754(v60);
      return;
    }
    if ( v144 > 22907 )
    {
      if ( v144 <= 23493 )
      {
        if ( v144 <= 23075 )
        {
          if ( v144 == 22908 )
          {
            if ( !sub_1003E6A44() )
            {
              v474 = "AllianceWarAttackAvatarMessage received but GameMode is null!";
              goto LABEL_636;
            }
            v376 = sub_1005D3370(a2);
            sub_1005D3390(a2, &v969);
            v377 = *(v376 + 40);
            if ( v377 < 1 )
              return;
            v378 = sub_100596D90(v376);
            v967 = 0LL;
            v379 = sub_100D6ABA0(v378, v377, &v967, 0);
            if ( v379 >= 1 )
            {
              sub_100D805A4(&v971, v967, v379);
              sub_1001BA464(v376, &v971);
              sub_100D80350(&v971);
              v381 = sub_1005D3444(a2);
              if ( v381 > 2 )
                v382 = 0;
              else
                v382 = *(&off_100DDE4D0 + v381);
              v530 = sub_1003F4DEC();
              v920 = v969;
              sub_1005D3380(a2, &v971);
              v919 = v971;
              v918 = 0LL;
              v531 = sub_1005D33A0(a2);
              v917 = 0LL;
              sub_1003F538C(v530, v376, &v920, &v919, 0, 2LL, v382, 0, 0.0, &v918, -1, v531, 0, 0LL, &v917);
            }
            if ( v380 )
              operator delete[](v380);
            v394 = v967;
            if ( !v967 )
              return;
            goto LABEL_742;
          }
          if ( v144 == 23067 )
          {
            v383 = off_101054BE8;
            if ( off_101054BE8 )
            {
              v384 = *(a2 + 144);
              if ( v384 )
              {
                sub_100D830B0(v384, &v969);
                sub_100D80C88("SCIDLogoutAllDevicesResultMessage: invalid result code ", &v971);
                sub_100D80350(&v971);
                sub_100D80350(&v969);
                sub_100D1F848(v383);
              }
              else
              {
                sub_100D1F858(off_101054BE8);
              }
            }
            return;
          }
          if ( v144 != 23069 )
            goto LABEL_611;
          if ( sub_1003E6A44() )
          {
            sub_1003E6A44();
            if ( dword_101054E90 == 2 )
            {
              sub_1003E6A44();
              sub_1003EC75C(1LL);
            }
          }
          if ( !off_101054CC0 )
            return;
          sub_100D80308(&v971);
          v184 = *(a2 + 144);
          if ( v184 )
          {
            if ( v184 == 1 )
              v185 = "TID_CHALLENGE_EXPIRED";
            else
              v185 = "TID_FAILED_TO_ACCEPT_CHALLENGE";
          }
          else
          {
            v185 = "TID_CHALLENGE_ALREADY_BATTLING";
          }
          sub_100D805D8(&v969, v185);
          v512 = sub_100372DE0(&v969);
          sub_100D80874(&v971, v512);
          sub_100D80350(&v969);
          if ( !off_101054CC0 )
            goto LABEL_822;
        }
        else
        {
          if ( v144 > 23283 )
          {
            if ( v144 != 23284 )
            {
              if ( v144 == 23433 )
              {
                v262 = off_101054CC0;
                if ( off_101054CC0 )
                {
                  if ( sub_10022C2FC(off_101054CC0) )
                  {
                    v263 = sub_10022C2FC(v262);
                    v264 = sub_1000FD6C8(v263);
                    if ( v264 )
                      sub_100120434(v264);
                  }
                }
                switch ( sub_1005BC2E0(a2) )
                {
                  case 1u:
                  case 4u:
                    v265 = "TID_INVALID_NAME";
                    goto LABEL_746;
                  case 2u:
                    v265 = "TID_INVALID_DESCRIPTION";
                    goto LABEL_746;
                  case 3u:
                    v265 = "TID_NAME_TOO_SHORT";
                    goto LABEL_746;
                  default:
                    return;
                }
                return;
              }
              goto LABEL_611;
            }
            if ( !sub_1003E6A44() )
              return;
            sub_1003E6A44();
            if ( dword_101054E90 != 2 )
              return;
            sub_1003E6A44();
            sub_1003EC75C(1LL);
            if ( !off_101054CC0 )
              return;
            v265 = "TID_CHALLENGE_START_FAILED";
            goto LABEL_746;
          }
          if ( v144 == 23076 )
          {
            if ( sub_1003F4DEC() )
            {
              v315 = *(a2 + 144);
              v316 = sub_1003F4DEC();
              v317 = *(a2 + 156);
              if ( v315 < 1 )
              {
                v141 = *(v316 + 400);
                v846 = *(v141 + 3);
                if ( v846 )
                {
                  v847 = *v141;
                  v848 = 8 * v846;
                  while ( **v847 != v317 )
                  {
                    v847 += 8LL;
                    v848 -= 8LL;
                    if ( !v848 )
                      return;
                  }
                  *(*v847 + 8LL) = 0LL;
                }
              }
              else
              {
                sub_1003F5A18(v316, v317, *(a2 + 152), *(a2 + 144));
                v318 = *(a2 + 152);
                if ( (v318 & 0xFFFFFFFE) != 6 )
                {
                  v319 = v318 == 4 ? "TID_CHAT_JUST_DISABLED" : "TID_CHAT_JUST_BANNED";
                  sub_100D805D8(&v971, v319);
                  v320 = sub_100372DE0(&v971);
                  sub_100D80350(&v971);
                  v321 = sub_1003F4DEC();
                  v322 = sub_1003F5A04(v321);
                  sub_1003F4DEC();
                  sub_100D805D8(&v969, "<time>");
                  sub_10045D9A4(v322, &v967);
                  sub_100D8205C(v320, &v969, &v967, &v971);
                  sub_1003F5B18(v323, &v971, 1LL, 0LL);
                  sub_100D80350(&v971);
                  sub_100D80350(&v967);
                  sub_100D80350(&v969);
                  if ( v318 == 4 )
                  {
                    if ( off_101054CF0 )
                      sub_10013510C(off_101054CF0);
                  }
                }
              }
            }
            return;
          }
          if ( v144 != 23233 )
            goto LABEL_611;
          if ( sub_1003E6A44() )
          {
            sub_1003E6A44();
            if ( dword_101054E90 == 2 )
            {
              sub_1003E6A44();
              sub_1003EC75C(1LL);
            }
          }
          if ( sub_1003F4DEC() )
          {
            if ( *(sub_1003F4DEC() + 8) == 4 || (v160 = sub_1003F4DEC(), sub_1003F5584(v160, 4)) )
            {
              v161 = sub_1005EADFC(a2);
              sub_1003FB33C(v161);
              return;
            }
          }
          if ( !off_101054CC0 )
            return;
          v476 = sub_1005EADFC(a2);
          sub_10040EBE0(v476, &v971);
        }
        v366 = &v971;
LABEL_820:
        v367 = 1LL;
LABEL_821:
        sub_10022BCF0(v366, 0.0, v367, 0LL, 0LL);
        goto LABEL_822;
      }
      if ( v144 > 23708 )
      {
        if ( v144 > 23824 )
        {
          if ( v144 == 23825 )
          {
            if ( off_101054CF0 )
            {
              sub_1001342A0(off_101054CF0);
              v468 = *v467;
              v469 = sub_1005C8D30(a2);
              sub_100134E58(v468, v469);
              v470 = sub_1005C8D20(a2);
              if ( *(v470 + 12) >= 1 )
              {
                v472 = 0LL;
                do
                {
                  sub_100132998(*v471, *(*v470 + 8 * v472));
                  *(*v470 + 8 * v472++) = 0LL;
                }
                while ( v472 < *(v470 + 12) );
              }
              if ( *v470 )
                operator delete[](*v470);
              operator delete();
              sub_1001336E8(*v473);
            }
            return;
          }
          if ( v144 == 23829 )
          {
            v299 = off_101054CF0;
            if ( off_101054CF0 )
            {
              sub_100B8E344(*(a2 + 144));
              v300 = sub_100B8E344(*(a2 + 152));
              sub_1001360A0(v299, v301, v300);
            }
            return;
          }
        }
        else
        {
          if ( v144 == 23709 )
          {
            if ( *(sub_10050F614() + 716)
              && (!sub_1003F4DEC() || *(sub_1003F4DEC() + 120) <= 0.0 || *(sub_10050F614() + 717)) )
            {
              v335 = sub_1005EDD48(a2);
              sub_1005EDD38(a2, &v971);
              if ( off_101054DD8 )
              {
                sub_1001AC638(off_101054DD8);
                sub_1001AC704(*v336, v971, v335);
              }
              v337 = v971;
              if ( v971 )
              {
                v338 = v971[3];
                if ( !v338 )
                  goto LABEL_1363;
                v339 = *v971;
                v340 = 8 * v338;
                do
                {
                  v341 = *v339;
                  if ( *v339 )
                  {
                    (**v341)(*v339);
                    (*(*v341 + 16LL))(v341);
                  }
                  ++v339;
                  v340 -= 8LL;
                }
                while ( v340 );
                v337 = v971;
                if ( v971 )
                {
LABEL_1363:
                  if ( *v337 )
                    operator delete[](*v337);
                  operator delete();
                }
                v971 = 0LL;
              }
              sub_1005EDD50(a2, &v969);
              if ( sub_1005EDD30(a2) >= 1 )
              {
                v342 = sub_1005EDD1C(a2);
                v967 = 0LL;
                if ( sub_100D6ABA0(v342, v343, &v967, 0) >= 1 )
                {
                  if ( v969 )
                  {
                    sub_100D80350(v969);
                    operator delete();
                  }
                  v969 = 0LL;
                  v344 = v967;
                  operator new(16LL);
                  v969 = sub_100D805A4(v345, v344, v346);
                }
                if ( v342 )
                  operator delete[](v342);
                if ( v967 )
                  operator delete[](v967);
              }
              if ( v969 )
              {
                sub_1005EDD70(a2, &v967);
                if ( v967 )
                  v347 = 13;
                else
                  v347 = 11;
                if ( v967 )
                  operator delete();
                v967 = 0LL;
                if ( sub_1003E6A44() && !*(*(sub_1003E6A44() + 368) + 13LL) )
                {
                  if ( !**(sub_1003E6A44() + 368) )
                  {
                    *&v568 = operator new(112LL);
                    v570 = v569;
                    v571 = sub_100596A2C(v568);
                    sub_1001BA464(v571, v969);
                    v572 = sub_1003E6A44();
                    v897 = 0LL;
                    v898 = v969;
                    sub_1003EAA80(v572, &v898, &v897);
                    sub_1003E6A44();
                    v896 = 0LL;
                    sub_1005EDD60(a2, v895);
                    sub_1003EAE50(v573, v570, 0LL, 0LL, 0, 5, 0, 0, &v896, 0LL, v895);
                    return;
                  }
                  sub_1003F4DEC();
                  v894 = v969;
                  sub_1005EDD60(a2, &v893);
                  v353 = &v894;
                  v354 = &v893;
                }
                else
                {
                  *&v348 = operator new(112LL);
                  v349 = sub_100596A2C(v348);
                  sub_1001BA464(v349, v969);
                  v350 = sub_1003F4DEC();
                  v891 = 0LL;
                  v892 = 0LL;
                  v889 = 0LL;
                  v890 = 0LL;
                  sub_1003F538C(v350, v351, &v892, &v891, 0, 0LL, 0, 0, 0.0, &v890, -1, -1, 0, 0LL, &v889);
                  sub_1003F4DEC();
                  v888 = v969;
                  sub_1005EDD60(a2, &v887);
                  v353 = &v888;
                  v354 = &v887;
                }
                sub_1003F505C(v352, v353, v354, v347);
                return;
              }
            }
            return;
          }
          if ( v144 == 23723 )
          {
            if ( a2 && off_101054CC0 )
            {
              sub_100D805D8(&v980, "");
              v49 = *(a2 + 144) - 1;
              if ( v49 > 5 )
                v50 = "TID_CHAT_ERROR_UNDEFINED";
              else
                v50 = off_100EF1FE8[v49];
              sub_100D8076C(&v980, v50);
              if ( sub_100D7FA94(&v980) >= 1 )
              {
                sub_100D805D8(&v976, "TID_CHAT_ERROR_MESSAGE");
                v51 = sub_100372DE0(&v976);
                sub_100D805D8(&v974, "{0}");
                v52 = sub_100372DE0(&v980);
                sub_100D8205C(v51, &v974, v52, &v978);
                sub_100D80350(&v974);
                sub_100D80350(&v976);
                sub_10022BCF0(&v978, 0.0, 1LL, 0LL, 0LL);
                sub_100D80350(&v978);
              }
              sub_100D80350(&v980);
            }
            return;
          }
        }
        goto LABEL_611;
      }
      if ( v144 <= 23643 )
      {
        if ( v144 != 23494 )
        {
          v149 = 23591;
          goto LABEL_134;
        }
        if ( *(off_101054BE8 + 64) && (sub_100D1E4AC(off_101054BE8) || (sub_100D1EE7C(off_101054BE8) & 1) != 0) )
          return;
        if ( !*(a2 + 176) || !*(off_101054BE8 + 64) )
        {
          v488 = sub_1005EA788(a2);
          if ( !v488 )
          {
            v265 = "TID_GOOGLE_ACCOUNT_ALREADY_BOUND";
            goto LABEL_746;
          }
          if ( !off_101054C80 )
            goto LABEL_774;
          sub_1005EA740(a2, v488);
          operator new(528LL);
          v330 = 9LL;
LABEL_651:
          sub_100343348(v329, v330, a2);
          goto LABEL_652;
        }
        if ( (sub_1004435A0(off_101054C88) & 1) != 0 )
          return;
LABEL_410:
        operator new(528LL);
        v330 = 78LL;
        goto LABEL_651;
      }
      if ( v144 == 23644 )
      {
        if ( off_101054CC0 )
        {
          sub_100D805D8(&v971, "TID_SHUTDOWN_STARTED");
          v433 = sub_100372DE0(&v971);
          sub_10022BCF0(v433, 0.0, 1LL, 1LL, 0LL);
          sub_100D80350(&v971);
        }
        *(sub_1003F4DEC() + 172) = 1;
        sub_1003FB33C(11LL);
        if ( off_101054D48 )
        {
          v434 = *(off_101054D48 + 1);
          if ( v434 )
            sub_1001681C4(v434);
        }
        return;
      }
      if ( v144 != 23654 )
        goto LABEL_611;
      if ( *((loc_1000DC03C)() + 516) != -1 )
      {
        operator new(264LL);
        v664 = v663;
        v665 = sub_1005B6030(v663);
        (*(*v666 + 72LL))(v666, 10LL, v665);
        v667 = (*(*v664 + 104LL))(v664, 2400LL);
        v668 = (loc_1000DC03C)(v667);
        sub_1005B64FC(v664, *(v668 + 516));
        MessageFactory::parseMessage(byte_101054CC8, v664);
        *((loc_1000DC03C)() + 516) = -1;
        return;
      }
      *(a1 + 20) = 0;
      if ( *off_101054C50 != 2 )
        return;
      if ( !*(off_101054C50 + 145) )
      {
        sub_1001B3EDC(off_101054C50, 0);
        return;
      }
      *off_101054C50 = 6;
      *(a1 + 56) = 0;
      *(a1 + 72) = (loc_100D9FF94)();
      if ( sub_10019F5FC(off_101054C18) )
        v669 = sub_10019F87C(off_101054C18);
      else
        v669 = sub_10019F60C(off_101054C18);
      (loc_1000DC03C)(v669);
      v670 = sub_1005B7A58(a2);
      *(v671 + 488) = v670;
      v672 = off_101054C50;
      v673 = sub_1001B49A0(off_101054C50, *(off_101054C50 + 5));
      sub_1005B7A38(a2);
      v674 = sub_1005B7A18(a2);
      v675 = sub_10050F614();
      v676 = &off_101054BE8;
      if ( v675 )
      {
        v675 = sub_10050F614();
        if ( *(v675 + 208) )
        {
          sub_100D80308(v966);
          if ( off_101054BE8 && sub_100D1E4AC(off_101054BE8) )
          {
            sub_100D1F8B4(off_101054BE8, v964);
            sub_100D80874(v966, v964);
            sub_100D80350(v964);
          }
          sub_10019FBA8(off_101054C18);
          v675 = sub_100D80350(v966);
        }
      }
      v677 = (loc_1000DC03C)(v675);
      sub_100B8E410(v674);
      v679 = sub_1000E0E68(v677, v678);
      v680 = (loc_1000DC03C)(v679);
      v681 = sub_1005B7D90(a2);
      v682 = sub_1000E0FA0(v680, v681);
      v683 = (loc_1000DC03C)(v682);
      v684 = sub_1005B7E1C(a2);
      sub_1000E0FD4(v683, v684);
      sub_100B152E8(*v674, *(v674 + 1));
      qword_1010CF3E8 = nullsub_70;
      qword_1010CF3F0 = sub_10040F12C;
      if ( *(&xmmword_1010A2040 + 1) )
      {
        v946 = xmmword_100DDC620;
        do
        {
          Messaging::send(
            *a1,
            *(*(qword_1010A2028 + ((xmmword_1010A2040 >> 6) & 0x3FFFFFFFFFFFFF8LL)) + 8 * (xmmword_1010A2040 & 0x1FF)));
          xmmword_1010A2040 = vaddq_s64(xmmword_1010A2040, v946);
          sub_10040FB74(&unk_1010A2020, 1);
        }
        while ( *(&xmmword_1010A2040 + 1) );
      }
      if ( *v673 )
      {
        v686 = sub_1004435A0(off_101054C88);
        v687 = 0;
        v688 = 0;
        if ( !v686 )
        {
LABEL_962:
          *(a1 + 16) = v688;
          v946.i64[0] = v672;
          sub_1001B523C(v672, 0);
          sub_100D80308(&v971);
          v689 = sub_1005B7A60(a2);
          sub_100BA5698(&v971, v689, "");
          sub_100D80308(&v969);
          v690 = sub_1005B7AA0(a2);
          sub_100BA5698(&v969, v690, "");
          sub_100D88544(&v969);
          v691 = sub_1003F4DEC();
          if ( v691 )
          {
            v693 = v691;
            sub_100D80874(v691 + 176, &v969);
            sub_100D80308(v966);
            v694 = sub_1005B7A78(a2);
            sub_100BA5698(v966, v694, "");
            sub_100D80874(v693 + 368, v966);
            *(v693 + 384) = sub_1005B7A70(a2);
            sub_100D80350(v966);
          }
          v695 = v692;
          if ( sub_1005B7A98(a2) >= 1 )
          {
            v696 = sub_1003F4DEC();
            v697 = sub_1005B7A98(a2);
            sub_1003F5A64(v696, v697 + 5);
          }
          if ( off_101054C30 )
          {
            v698 = sub_1005B7D50(a2);
            sub_10040EFD8(v698, v966);
            v699 = sub_1005B7D60(a2);
            sub_10040EFD8(v699, v964);
            sub_100403848(off_101054C30, v966, v964);
            v963[0] = v964;
            v676 = v700;
            sub_1000E1810(v963);
            v964[0] = v966;
            sub_1000E1810(v964);
          }
          v701 = *v676;
          if ( *(*v676 + 64) )
          {
            sub_1005B7DA8(a2, v966);
            v702 = sub_100B8E43C(v674);
            v703 = v673;
            v704 = sub_100B8E444(v674);
            v705 = sub_1005B7E04(a2);
            v706 = v702;
            v676 = v707;
            v708 = v704;
            v673 = v703;
            sub_10042AAD0(v701, v966, v695, v706, v708, &v969, v705);
            sub_100D80350(v966);
          }
          if ( off_101054C78 )
          {
            sub_100D80308(v966);
            v709 = sub_1005B7A48(a2);
            sub_100BA5698(v966, v709, "");
            sub_1001CC458(off_101054C78, v966);
            sub_100D80350(v966);
          }
          sub_100D80308(v966);
          v710 = sub_1005B7D70(a2);
          sub_100BA5698(v966, v710, "");
          sub_1001F82F0(off_101054C80, v966);
          if ( sub_100BD1534() && sub_10050FFF8() && *(sub_10050FFF8() + 1372) )
          {
            v711 = sub_100BD1534();
            sub_100D805D8(v964, "magic");
            sub_1001B3DB0();
            v712 = sub_10046B124();
            sub_100D805D8(v962, "");
            v713 = v712;
            v676 = v714;
            sub_100BD1828(v711, v674, v964, v963, v713, v962);
            sub_100D80350(v962);
            sub_100D80350(v963);
            sub_100D80350(v964);
          }
          v715 = sub_1005B7D80(a2);
          v716 = sub_100BA5698(a1 + 24, v715, "");
          v717 = (loc_1000DC03C)(v716);
          v718 = sub_1005B7E14(a2);
          sub_1000E0798(v717, v718);
          if ( *v676 )
            v719 = sub_100D1E4AC(*v676);
          else
            v719 = 0;
          sub_100D80308(v964);
          v720 = sub_1005B7D98(a2);
          sub_100BA5698(v964, v720, "");
          v721 = off_101054C88;
          if ( off_101054C88 )
          {
            sub_1004436B0(off_101054C88, v964, *(a2 + 356));
            if ( ((sub_1004435A0(v721) ^ 1 | v719) & 1) == 0 )
            {
              v722 = v673;
              v723 = sub_1001B5244(v946.i64[0]);
              if ( *(v723 + 4) && !sub_100D80E70(v964, v723) )
              {
                sub_100D80C88("LoginMessage OpenID doesn't match the one in LoginOkMessage: ", &v960);
                sub_100D80BE0(&v960, " vs. ", v962);
                sub_100D80B0C(v962, v964, v963);
                sub_100D80350(v963);
                sub_100D80350(v962);
                sub_100D80350(&v960);
              }
              if ( sub_1004435B8(v721) )
              {
                if ( sub_1001B5150(v946.i64[0]) )
                  sub_1001B2D80(v946.i64[0], *(v946.i64[0] + 20));
              }
              else
              {
                v724 = *(v946.i64[0] + 20);
                v725 = sub_100B8E43C(v674);
                v726 = sub_100B8E444(v674);
                sub_1001B5030(v946.i64[0], v724, v727, v725, v726);
                v673 = v722;
              }
            }
            sub_100443798(v721);
          }
          sub_100D80350(v964);
          v728 = off_101054C78;
          if ( off_101054C78 )
            v728 = sub_1001CC738(off_101054C78);
          *(a1 + 20) |= v728;
          if ( sub_1001F844C(off_101054C80) )
            v729 = 2;
          else
            v729 = 0;
          v730 = *(a1 + 20) | v729 | (4 * (*(a1 + 28) != 0));
          *(a1 + 20) = v730;
          if ( off_101054C88 )
          {
            if ( sub_1004435B8(off_101054C88) )
              v731 = 8;
            else
              v731 = 0;
            v730 = *(a1 + 20);
          }
          else
          {
            v731 = 0;
          }
          if ( v719 )
            v732 = 16;
          else
            v732 = 0;
          *(a1 + 20) = v731 | v732 | v730;
          v733 = sub_1005B7A88(a2);
          sub_100BA5698(a1 + 40, v733, "");
          sub_10060E4A4(*(v673 + 4), *(v673 + 8));
          operator delete();
          if ( v734 )
          {
            sub_100D80350(v734);
            operator delete();
          }
          if ( sub_1005B7E0C(a2) )
          {
            v735 = (loc_1000DC03C)();
            v736 = sub_1005B7E0C(a2);
            v737 = &v958;
            sub_100D805D8(&v958, "");
            v738 = &v956;
            sub_100D805D8(&v956, "");
            sub_100D805D8(&v954, "");
            v739 = &v958;
            v740 = &v956;
            v741 = &v954;
            v742 = v735;
            v743 = 24;
            v744 = v736;
          }
          else
          {
            if ( !*(a2 + 352) || !*(sub_10050FFF8() + 1463) )
              goto LABEL_1008;
            v746 = (loc_1000DC03C)();
            v737 = &v952;
            sub_100D805D8(&v952, "");
            v738 = &v950;
            sub_100D805D8(&v950, "");
            sub_100D805D8(&v948, "");
            v739 = &v952;
            v740 = &v950;
            v741 = &v948;
            v742 = v746;
            v743 = 34;
            v744 = 0LL;
          }
          sub_1000DE354(v742, v743, v744, v739, v740, v741);
          sub_100D80350(v745);
          sub_100D80350(v738);
          sub_100D80350(v737);
LABEL_1008:
          sub_100D80350(v966);
          sub_100D80350(&v969);
          sub_100D80350(&v971);
          return;
        }
      }
      else
      {
        v687 = 1;
      }
      sub_1001B4C04(v672, v672[5], v685, *v674, *(v674 + 1));
      v688 = v687;
      goto LABEL_962;
    }
    if ( v144 <= 22424 )
    {
      if ( v144 <= 22059 )
      {
        switch ( v144 )
        {
          case 21962:
            return;
          case 22000:
            sub_1005D9574(a2, v863);
            sub_1003EE060(v863);
            return;
          case 22001:
            if ( sub_1003E6A44() )
            {
              v180 = sub_1003E6A44();
              sub_1005D9270(a2, v862);
              sub_1003EE090(v180, v862);
            }
            return;
        }
        goto LABEL_611;
      }
      if ( v144 <= 22286 )
      {
        if ( v144 == 22060 )
        {
          if ( off_101054CC0 )
          {
            sub_100D805D8(&v971, "TID_PERSONAL_BREAK_STARTED");
            v311 = sub_100372DE0(&v971);
            sub_10022BCF0(v311, 0.0, 1LL, 1LL, 1LL);
            sub_100D80350(&v971);
          }
          *(sub_1003F4DEC() + 173) = 1;
          sub_1003FB33C(12LL);
          return;
        }
        if ( v144 != 22185 )
          goto LABEL_611;
        v157 = off_101054C18;
        sub_1005B584C(a2);
        v158 = sub_1005B5854(a2);
        goto LABEL_586;
      }
      if ( v144 != 22287 )
      {
        if ( v144 == 22377 )
        {
          sub_1005EA910(a2);
          switch ( off_101054C80 )
          {
            case 0:
              if ( off_101054C80 )
                JUMPOUT(0x1001F8370LL);
              return;
            case 1:
            case 2:
            case 3:
              if ( off_101054C80 )
                sub_1001F897C(off_101054C80);
              break;
            default:
              return;
          }
          return;
        }
        goto LABEL_611;
      }
      v441 = a2;
      v100 = off_101054CD0;
      v101 = sub_1005D9A54(v441);
      v103 = sub_1005D9A5C(v102);
      v105 = v103;
      v106 = *(v101 + 12);
      if ( v106 >= 1 )
      {
        for ( i = 0LL; i != v106; ++i )
          sub_1001CBA80(v100, *(*v105 + 8 * i), *(*v101 + 4 * i));
      }
      v973 = 0LL;
      v974 = 0LL;
      v975 = 0LL;
      v108 = sub_1005D9A64(v104);
      if ( v108 == 2 )
      {
        v109 = (off_101054C78 + 104);
        if ( off_101054C78 )
          v112 = &v973 == v109;
        else
          v112 = 1;
        if ( v112 )
          goto LABEL_1161;
        v111 = (off_101054C78 + 112);
      }
      else
      {
        if ( v108 != 3 )
          goto LABEL_1161;
        v109 = (off_101054C88 + 40);
        if ( !off_101054C88 || &v973 == v109 )
          goto LABEL_1161;
        v111 = (off_101054C88 + 48);
      }
      sub_1001CC1F0(&v973, *v109, *v111);
LABEL_1161:
      v113 = v973;
      if ( ((v974 - v973) >> 3) >= 1 )
      {
        v114 = 0LL;
        v115 = ((v974 - v973) >> 3);
        do
        {
          v116 = *(v973[v114] + 88LL);
          if ( v106 < 1 )
          {
LABEL_1167:
            sub_1001CBA80(v100, v116, 0LL);
          }
          else
          {
            v117 = 0LL;
            while ( !LogicLong::equals(*(*v105 + v117), v116) )
            {
              v117 += 8LL;
              if ( 8 * v106 == v117 )
                goto LABEL_1167;
            }
          }
          ++v114;
        }
        while ( v114 != v115 );
        v113 = v973;
      }
      if ( v113 )
      {
        v974 = v113;
        operator delete();
      }
      return;
    }
    if ( v144 <= 22686 )
    {
      if ( v144 != 22425 )
      {
        if ( v144 == 22468 )
        {
          if ( off_101054CC0 )
          {
            switch ( *(a2 + 144) )
            {
              case 1:
                v427 = "TID_CAPITAL_RAID_SNAPSHOT_NOT_AVAILABLE";
                break;
              case 2:
                v427 = "TID_CAPITAL_RAID_INVALID_TARGET";
                break;
              case 3:
                v427 = "TID_CAPITAL_RAID_ALL_ATTACKS_USED";
                break;
              case 4:
                v427 = "TID_CAPITAL_RAID_SEASON_FULL";
                break;
              case 5:
                v427 = "TID_CAPITAL_RAID_TARGET_UNDER_ATTACK";
                break;
              case 6:
                v427 = "TID_CAPITAL_RAID_ATTACKER_LEFT_THE_CLAN";
                break;
              case 7:
                v427 = "TID_CAPITAL_RAID_PERSONAL_BREAK";
                break;
              default:
                v427 = "TID_CAPITAL_RAID_ATTACK_FAILED";
                break;
            }
            sub_100D805D8(&v971, v427);
            v560 = sub_100372DE0(&v971);
            sub_10022BCF0(v560, 0.0, 1LL, 0LL, 0LL);
            sub_100D80350(&v971);
          }
          if ( !sub_1003E6A44() )
            return;
          sub_1003E6A44();
          if ( dword_101054E90 != 2 )
            return;
          goto LABEL_736;
        }
        if ( v144 != 22677 )
          goto LABEL_611;
        if ( sub_1003E6A44() )
        {
          sub_1005E268C(a2, &v971);
          sub_1005E269C(a2, &v971);
          sub_1005E267C(a2, &v969);
          *&v202 = operator new(1000LL);
          v204 = v203;
          v205 = sub_100476638(v202);
          v207 = sub_10040EB18(v205, v206);
          if ( v207 )
            (*(*v204 + 152LL))(v204, v207);
          sub_100B8E410(*v969);
          sub_100476A0C(v204, v208);
          operator new(16LL);
          v210 = v209;
          sub_100D8060C(v209, (v969 + 1));
          sub_100476C1C(v204, v210);
          sub_100476C58(v204, *(v969 + 6));
          sub_100476C78(v204, *(v969 + 7));
          v211 = **(a2 + 168);
          v212 = sub_1003F4DEC();
          v866 = v971;
          v867 = v204;
          v865 = 0LL;
          v213 = *(a2 + 176);
          sub_1005E26AC(a2, v864);
          sub_1003F538C(v212, v214, &v867, &v866, 0, 4LL, 11, 0, 0.0, &v865, -1, v213, 0, 0LL, v864);
          *(sub_1003F4DEC() + 200) = v211;
          if ( v969 )
          {
            sub_1005DFC00(v969);
            if ( v969 )
            {
              sub_100D80350((v969 + 1));
              operator delete();
            }
            v969 = 0LL;
          }
          if ( v207 )
          {
            nullsub_33();
            (*(*v207 + 8LL))(v207);
          }
          return;
        }
        v474 = "CapitalRaidVisitDataMessage received but GameMode is null!";
        goto LABEL_636;
      }
      if ( !off_101054CC0 )
        return;
      sub_100D805D8(&v971, "TID_DEVICE_LINK_ERROR_CODE_ERROR_0");
      v424 = sub_1005E8248(a2);
      v425 = "TID_ACCEPT_FRIEND_ERROR_GENERIC";
      if ( v424 == 2 )
        v425 = "TID_ACCEPT_FRIEND_ERROR_TOO_MANY_FRIENDS";
      if ( v424 == 1 )
        v426 = "TID_ACCEPT_FRIEND_ERROR_BANNED";
      else
        v426 = v425;
LABEL_550:
      sub_100D8076C(&v971, v426);
LABEL_819:
      v366 = sub_100372DE0(&v971);
      goto LABEL_820;
    }
    if ( v144 > 22852 )
    {
      if ( v144 == 22853 )
      {
        if ( off_101054CC0 )
        {
          v448 = sub_10022C35C(off_101054CC0);
          if ( v448 )
          {
            v449 = sub_1004356F8(v448, 3);
            if ( v449 )
            {
              v450 = v449;
              sub_1005BA550(a2);
              v451 = sub_1005BA59C(a2);
              sub_10042D414(v450, v452, v451);
            }
          }
        }
        v453 = sub_1003E6A44();
        if ( v453 )
        {
          v454 = v453;
          sub_1005BA59C(a2);
          sub_1003E681C(v454);
          v455 = sub_1005BA550(a2);
          sub_1003EEE7C(v454, v455, v456);
        }
        return;
      }
      if ( v144 == 22879 )
      {
        v269 = off_101054CE0;
        v270 = sub_1005B9C50(a2);
        sub_1001A19B4(v269, v270);
        return;
      }
      goto LABEL_611;
    }
    if ( v144 != 22687 )
    {
      if ( v144 == 22804 )
      {
        v166 = sub_1003E6A44();
        if ( !*(sub_10050FFF8() + 1105) || v166 )
        {
          v167 = sub_1003E6A44();
          v168 = sub_1003E6804(v167);
          if ( v168 )
          {
            v169 = v168;
            v170 = sub_1005D3DC8(a2);
            sub_1005A6EB4(v169, v170);
            v171 = sub_1005D3DD8(a2);
            sub_1005A6F00(v169, v171);
            v172 = sub_1005D3DE8(a2);
            sub_1005A7084(v169, v172);
          }
          operator new(40LL);
          v971 = sub_1004DA670(v173);
          sub_1003E7840(&v971);
        }
        return;
      }
      goto LABEL_611;
    }
    if ( !off_101054C78
      || *(off_101054BE8 + 64) && (sub_100D1E4AC(off_101054BE8) || (sub_100D1EE7C(off_101054BE8) & 1) != 0) )
    {
      return;
    }
    if ( *(a2 + 184) && *(off_101054BE8 + 64) )
    {
      if ( (sub_1004435A0(off_101054C88) & 1) != 0 || !off_101054CC0 )
        return;
      goto LABEL_410;
    }
    v513 = sub_1005EA1C4(a2);
    sub_1005EA1BC(a2, v513);
    sub_100D80308(&v971);
    sub_100D80308(&v969);
    if ( sub_1004435A0(off_101054C88) )
    {
      v514 = sub_1005EA1E4(a2);
      if ( v514 )
      {
        v515 = v514;
        sub_100D80874(&v971, v514);
        sub_1005EA1F4(a2, v515);
      }
      v516 = sub_1004435B0(off_101054C88);
      sub_100D80874(&v969, v516);
      v517 = sub_1004435C8();
      sub_100443DBC(off_101054C88);
    }
    else
    {
      v517 = 0;
    }
    v533 = sub_1005EA1AC(a2);
    if ( v533 )
      sub_100D8060C(&v967, v533);
    else
      sub_100D805D8(&v967, "");
    sub_1005EA1A4(a2, v533);
    v548 = sub_1005EA184(a2);
    sub_1005EA17C(a2, v548);
    v549 = sub_1001CC758(off_101054C78);
    v551 = off_101054CC0;
    if ( v517 )
    {
      v552 = v549;
      v553 = HIDWORD(v969);
      if ( HIDWORD(v971) && HIDWORD(v969) )
      {
        if ( !sub_100D80E70(&v971, &v969) )
          goto LABEL_798;
        v553 = HIDWORD(v969);
      }
      if ( v553 && *(v552 + 4) )
        goto LABEL_798;
    }
    if ( !v550 )
      goto LABEL_796;
    if ( sub_100443688(off_101054C88) || (sub_100443874() & 1) != 0 || !v551 )
      goto LABEL_798;
    v554 = sub_1003E6A44();
    if ( v554
      && (sub_1003ED56C(v554) & 1) == 0
      && sub_1003E6824(v555)
      && sub_1004435B8(off_101054C88)
      && (v556 = sub_10050FFF8()) != 0 )
    {
      v558 = sub_10034B274(v557, *(v556 + 1180));
      if ( !v513 || v558 )
        goto LABEL_798;
    }
    else
    {
LABEL_796:
      if ( !v513 || !v551 )
        goto LABEL_798;
    }
    sub_1005EA17C(a2, v548);
    operator new(528LL);
    sub_100343348(v559, 9LL, a2);
    sub_100226DB0();
    sub_100D805D8(&v965, "LastGCID");
    sub_100D805D8(v906, "");
    sub_100D86DA8(&v965);
    sub_100D80350(v906);
    sub_100D80350(&v965);
LABEL_798:
    v400 = &v967;
LABEL_526:
    sub_100D80350(v400);
    v401 = &v969;
LABEL_527:
    sub_100D80350(v401);
    goto LABEL_822;
  }
  if ( v144 > 26532 )
  {
    if ( v144 <= 28626 )
    {
      if ( v144 <= 27225 )
      {
        if ( v144 <= 26704 )
        {
          if ( v144 <= 26632 )
          {
            if ( v144 != 26533 )
            {
              if ( v144 == 26567 )
              {
                v145 = off_101054CF0;
                if ( off_101054CF0 )
                {
                  sub_100B8E344(*(a2 + 144));
                  sub_100B8E344(*(a2 + 152));
                  sub_1001361A8(v145, v146);
                }
                return;
              }
              goto LABEL_611;
            }
            if ( sub_1003E6A44() )
            {
              v307 = *(sub_1003E6A44() + 616);
              v308 = sub_1005EF3F8(a2);
              sub_100252750(v307, v308);
            }
            return;
          }
          if ( v144 == 26633 )
            return;
          v159 = 26659;
          goto LABEL_228;
        }
        if ( v144 <= 26770 )
        {
          if ( v144 != 26705 )
          {
            if ( v144 == 26715 )
            {
              if ( off_101054CF0 )
              {
                v36 = *(off_101054CF0 + 76);
                v37 = *(off_101054CF0 + 77);
                if ( v36 != v37 )
                {
                  v38 = *(a2 + 152);
                  v39 = off_101054CF0;
                  while ( 1 )
                  {
                    v40 = *v36;
                    v41 = sub_1005D1644(*v36);
                    if ( LogicLong::equals(v41, v42) )
                      break;
                    if ( ++v36 == v37 )
                      return;
                  }
                  v43 = sub_1005D1784(v40);
                  sub_1005C8024(v43, v38);
                  v44 = sub_1005D1644(v40);
                  sub_10013401C(v39, v44, &v975, v45);
                  v46 = v975;
                  if ( v975 != v976 )
                  {
                    do
                    {
                      v47 = *v46;
                      v46 = (v46 + 8);
                      sub_10015F05C(v47, 0);
                    }
                    while ( v46 != v48 );
                    v46 = v976;
                    if ( v975 != v976 )
                    {
                      sub_100133468(v39);
                      v46 = v975;
                    }
                  }
                  if ( v46 )
                  {
                    v976 = v46;
                    operator delete();
                  }
                }
              }
              return;
            }
            goto LABEL_611;
          }
          v331 = sub_1005BA6B0(a2);
          switch ( v331 )
          {
            case 10:
              v494 = (loc_1000DC03C)();
              sub_100D805D8(v877, "");
              sub_100D805D8(v876, "");
              sub_100D805D8(v875, "");
              sub_1000DE354(v494, 8u, 0LL, v877, v876, v875);
              sub_100D80350(v875);
              sub_100D80350(v876);
              v243 = v877;
              break;
            case 5:
              v495 = (loc_1000DC03C)();
              sub_100D805D8(v880, "");
              sub_100D805D8(v879, "");
              sub_100D805D8(v878, "");
              sub_1000DE354(v495, 0xDu, 0LL, v880, v879, v878);
              sub_100D80350(v878);
              sub_100D80350(v879);
              v243 = v880;
              break;
            case 4:
              v332 = qword_1010A1FA0;
              sub_1005BA6B0(a2);
              sub_1003F2FC0(v332);
              return;
            default:
              v496 = (loc_1000DC03C)();
              sub_100D805D8(v874, "");
              sub_100D805D8(v873, "");
              sub_100D805D8(v872, "");
              sub_1000DE354(v496, 3u, 0LL, v874, v873, v872);
              sub_100D80350(v872);
              sub_100D80350(v873);
              v243 = v874;
              break;
          }
LABEL_823:
          sub_100D80350(v243);
          return;
        }
        if ( v144 == 26771 )
        {
          if ( a2 && off_101054CC0 )
          {
            sub_100D805D8(&v980, "");
            v56 = *(a2 + 152);
            if ( v56 <= 4 )
              sub_100D8076C(&v980, off_100EF2050[v56]);
            if ( sub_100D7FA94(&v980) >= 1 )
            {
              sub_100D805D8(&v976, "TID_UNPIN_ERROR_MESSAGE");
              v57 = sub_100372DE0(&v976);
              sub_100D805D8(&v974, "{0}");
              v58 = sub_100372DE0(&v980);
              sub_100D8205C(v57, &v974, v58, &v978);
              sub_100D80350(&v974);
              sub_100D80350(&v976);
              sub_10022BCF0(&v978, 0.0, 1LL, 0LL, 0LL);
              sub_100D80350(&v978);
            }
            sub_100D80350(&v980);
          }
          return;
        }
        if ( v144 != 27164 )
          goto LABEL_611;
        if ( !*(sub_10050F614() + 716) )
          return;
        if ( off_101054CC0 )
        {
          v271 = sub_1005ED880(a2);
          if ( v271 == 2 )
          {
            v272 = "TID_LIVE_REPLAY_FAIL_NO_FREE_SLOTS";
          }
          else if ( v271 == 1 )
          {
            v272 = "TID_LIVE_REPLAY_FAIL_NO_DATA_FOUND";
          }
          else
          {
            v272 = "TID_LIVE_REPLAY_FAIL_GENERIC";
          }
          sub_100D805D8(&v971, v272);
          v522 = sub_100372DE0(&v971);
          sub_10022BCF0(v522, 0.0, 1LL, 0LL, 0LL);
          sub_100D80350(&v971);
        }
        if ( !sub_1003E6A44() )
          return;
        sub_1003E6A44();
        if ( dword_101054E90 != 7 )
          return;
LABEL_736:
        sub_1003E6A44();
        sub_1003EC75C(1LL);
        return;
      }
      if ( v144 > 28313 )
      {
        switch ( v144 )
        {
          case 28314:
            if ( off_101054CC0 )
            {
              switch ( sub_1005BF330(a2) )
              {
                case 2u:
                  v148 = "TID_ALLIANCE_INVITATION_FAILED_NO_RIGHTS";
                  goto LABEL_818;
                case 3u:
                  v148 = "TID_ALLIANCE_INVITATION_FAILED_NO_CASTLE";
                  goto LABEL_818;
                case 4u:
                  v148 = "TID_ALLIANCE_INVITATION_FAILED_ALREADY_IN_ALLIANCE";
                  goto LABEL_818;
                case 5u:
                  v148 = "TID_ALLIANCE_INVITATION_FAILED_AVATAR_ALREADY_HAS_AN_INVITE";
                  goto LABEL_818;
                case 6u:
                  v148 = "TID_ALLIANCE_INVITATION_FAILED_AVATAR_HAS_TOO_MANY_INVITES";
                  goto LABEL_818;
                case 7u:
                  v148 = "TID_ALLIANCE_INVITATION_FAILED_USER_BANNED";
                  goto LABEL_818;
                default:
                  return;
              }
            }
            return;
          case 28318:
          case 28325:
            return;
          case 28320:
            if ( *(sub_10050F614() + 716)
              && (!sub_1003F4DEC() || *(sub_1003F4DEC() + 120) <= 0.0 || *(sub_10050F614() + 717)) )
            {
              v303 = sub_1005ED6A8(a2);
              sub_1005ED698(a2, &v971);
              if ( sub_1003E6A44() && *(*(sub_1003E6A44() + 368) + 13LL) )
              {
                sub_1003E6A44();
                v900 = v971;
                v304 = sub_1003E6A44();
                v305 = *(sub_1003E6804(v304) + 824) == 1;
                sub_1005FCF7C(v306, &v900, v303, 0, v305);
              }
              else if ( off_101054DD8 )
              {
                sub_1001AC704(off_101054DD8, v971, v303);
                if ( v971 )
                {
                  if ( *v971 )
                    operator delete[](*v971);
                  operator delete();
                  v971 = 0LL;
                }
              }
              else
              {
                v899 = v971;
                sub_1005ED5E4(a2, &v899);
              }
              v523 = off_101054CC0;
              if ( off_101054CC0 )
              {
                sub_1005ED6B0(a2);
                v524 = sub_1005ED6B8(a2);
                sub_1002241B0(v523, v525, v524);
              }
            }
            return;
          case 28321:
            v825 = a2;
            v826 = sub_1005EEE70(a2);
            v827 = v826;
            if ( qword_1010A20F0 && LogicLong::equals(qword_1010A20F0, v826) )
            {
              v828 = sub_1005EEE80(v825);
              qword_1010A20F8 = v828;
              if ( v827 )
                v828 = operator delete();
              goto LABEL_1332;
            }
            v829 = sub_100B8E43C(v827);
            v830 = sub_100B8E444(v827);
            sub_100D82FA4(
              "CopyLayout::handleMessage received data for home %d-%d when not expected.",
              &v980,
              v829,
              v830);
            sub_100D80350(&v980);
            if ( v827 )
              operator delete();
            break;
          default:
            goto LABEL_611;
        }
        return;
      }
      if ( v144 != 27226 )
      {
        if ( v144 == 28046 )
        {
          if ( off_101054CF0 )
          {
            v368 = sub_1005C7B54(a2);
            if ( off_101054D50 )
              sub_1000F812C(off_101054D50, v368);
            sub_100132998(off_101054CF0, v368);
          }
          return;
        }
        if ( v144 == 28075 )
        {
          operator new(152LL);
          *(a1 + 80) = sub_1005B9638(v181);
          v182 = sub_1005B97F4(a2);
          *(v849 + 144) = v182;
          return;
        }
        goto LABEL_611;
      }
      if ( !off_101054CC0 )
        return;
      v365 = "TID_ALLIANCE_INVITATION_OK";
LABEL_477:
      sub_100D805D8(&v971, v365);
      v366 = sub_100372DE0(&v971);
      v367 = 0LL;
      goto LABEL_821;
    }
    if ( v144 <= 29609 )
    {
      if ( v144 <= 29076 )
      {
        switch ( v144 )
        {
          case 28627:
            if ( off_101054CC0 )
            {
              v217 = sub_10022C3C0(off_101054CC0);
              sub_1005E5DC0(a2);
              v355 = sub_1005E5DB8(a2);
              switch ( v356 )
              {
                case 0:
                  operator new(200LL);
                  v358 = 100LL;
                  goto LABEL_723;
                case 1:
                  operator new(200LL);
                  v358 = 101LL;
                  goto LABEL_723;
                case 2:
                  operator new(200LL);
                  v358 = 102LL;
                  goto LABEL_723;
                case 3:
                  operator new(200LL);
                  v358 = 103LL;
LABEL_723:
                  sub_1001C20AC(v357, v358, v355);
                  goto LABEL_724;
                default:
                  return;
              }
            }
            return;
          case 28988:
            if ( off_101054CC0 )
            {
              switch ( *(a2 + 144) )
              {
                case 3:
                  v359 = "TID_CHALLENGE_ALREADY_CLOSED";
                  goto LABEL_726;
                case 5:
                  v527 = "TID_PERSONAL_BREAK_ATTACK_DISABLED";
                  goto LABEL_730;
                case 6:
                  v527 = "TID_SHUTDOWN_ATTACK_DISABLED";
                  goto LABEL_730;
                case 7:
                  v527 = "TID_CHALLENGE_FAIL_RESTRICTED";
LABEL_730:
                  sub_100D805D8(&v971, v527);
                  v528 = sub_100372DE0(&v971);
                  sub_10022BCF0(v528, 0.0, 1LL, 0LL, 0LL);
                  break;
                default:
                  v359 = "TID_CHALLENGE_FAIL_SERVER";
LABEL_726:
                  sub_100D805D8(&v971, v359);
                  sub_10022BD7C(&v971, 1LL, 0LL, 0.0);
                  break;
              }
              sub_100D80350(&v971);
              if ( off_101054CC0 && sub_10022DCFC(off_101054CC0) )
              {
                v529 = sub_10022DCFC(off_101054CC0);
                (*(*v529 + 416LL))(v529);
              }
            }
            if ( !sub_1003E6A44() )
              return;
            sub_1003E6A44();
            if ( dword_101054E90 != 2 )
              return;
            goto LABEL_736;
          case 29075:
            if ( off_101054CF0 )
            {
              v22 = *(off_101054CF0 + 76);
              v23 = *(off_101054CF0 + 77);
              if ( v22 != v23 )
              {
                v24 = *(a2 + 160);
                v25 = *(a2 + 144);
                v26 = off_101054CF0;
                while ( 1 )
                {
                  v27 = *v22;
                  v28 = sub_1005D1644(*v22);
                  if ( LogicLong::equals(v28, v25) )
                    break;
                  if ( ++v22 == v23 )
                    return;
                }
                v29 = sub_1005D1784(v27);
                sub_1005C7EB4(v29, v30, v24);
                v31 = sub_1005D1644(v27);
                sub_10013401C(v26, v31, &v973, v32);
                v33 = v973;
                if ( v973 != v974 )
                {
                  do
                  {
                    v34 = *v33++;
                    sub_10015F05C(v34, 0);
                  }
                  while ( v33 != v35 );
                  v33 = v974;
                  if ( v973 != v974 )
                  {
                    sub_100133468(v26);
                    v33 = v973;
                  }
                }
                if ( v33 )
                {
                  v974 = v33;
                  operator delete();
                }
              }
            }
            return;
        }
      }
      else
      {
        if ( v144 <= 29349 )
        {
          if ( v144 != 29077 )
          {
            if ( v144 == 29257 )
            {
              v150 = off_101054CC0;
              if ( off_101054CC0 )
              {
                if ( sub_10022C3C0(off_101054CC0)
                  || (operator new(368LL), sub_1001C2F6C(v151, 0LL), sub_100226DB0(), sub_10022C3C0(v150)) )
                {
                  operator new(184LL);
                  v153 = v152;
                  v154 = sub_1005E5FFC(a2);
                  sub_1001C2ACC(v153, v154);
                  sub_1001C31E8(v155, v153);
                }
              }
              return;
            }
            goto LABEL_611;
          }
          if ( sub_1003E6A44() )
          {
            sub_1003E6A44();
            if ( dword_101054E90 == 2 )
            {
              sub_1003E6A44();
              sub_1003EC75C(1LL);
            }
          }
          if ( !off_101054CC0 )
            return;
          switch ( sub_1005D3050(a2) )
          {
            case 1u:
            case 2u:
              v148 = "TID_ALLIANCE_WAR_ATTACK_FAILED_SNAPSHOT_NOT_AVAILABLE";
              break;
            case 3u:
              v148 = "TID_ALLIANCE_WAR_ATTACK_FAILED_TARGET_NOT_IN_WAR";
              break;
            case 4u:
              v148 = "TID_ALLIANCE_WAR_ATTACK_FAILED_INVALID_TARGET";
              break;
            case 5u:
              v148 = "TID_ALLIANCE_WAR_ATTACK_FAILED_ALL_ATTACKS_USED";
              break;
            case 6u:
              v148 = "TID_ALLIANCE_WAR_ATTACK_FAILED_TARGET_UNDER_ATTACK";
              break;
            case 7u:
              v148 = "TID_ALLIANCE_WAR_ATTACK_FAILED_ATTACK_ONGOING";
              break;
            case 0xDu:
              v148 = "TID_ALLIANCE_WAR_FAILED_ATTACKING_SAME_TARGET";
              break;
            case 0xEu:
              v148 = "TID_ALLIANCE_WAR_FAILED_WAR_IS_ENDING";
              break;
            default:
              v148 = "TID_ALLIANCE_WAR_ATTACK_FAILED";
              break;
          }
          goto LABEL_818;
        }
        if ( v144 == 29350 )
        {
          v435 = off_101054CF0;
          if ( off_101054CF0 )
          {
            v436 = sub_1005C8434(a2);
            v437 = v435;
            v2 = v435[76];
            if ( ((v435[77] - v2) >> 3) >= 1 )
            {
              v3 = v436;
              v4 = v437;
              v5 = 0LL;
              while ( 1 )
              {
                v6 = sub_1005D1644(*(v2 + 8 * v5));
                if ( LogicLong::equals(v6, v3) )
                  break;
                ++v5;
                v2 = v4[76];
                if ( v5 >= ((v4[77] - v2) >> 3) )
                  return;
              }
              if ( (v7 & 1) == 0 )
              {
                v8 = *(v4[76] + 8 * v5);
                if ( (*(*v8 + 32LL))(v8) == 24 )
                {
                  sub_1001328EC(v4, &v975);
                  if ( v976 != v975 )
                  {
                    v9 = *v975;
                    if ( !*(*v975 + 490LL) )
                    {
                      *(v9 + 490) = 1;
                      sub_100B7E250(v4[41], v9);
                    }
                  }
                  if ( off_101054CC0 )
                  {
                    v10 = sub_10022C6E0(off_101054CC0);
                    if ( v10 )
                    {
                      if ( v10[48] == *(*(v4[76] + 8 * v5) + 128LL) )
                        (*(*v10 + 416LL))(v10);
                    }
                  }
                  if ( v975 )
                  {
                    v976 = v975;
                    operator delete();
                  }
                }
              }
              v11 = *(v4[76] + 8 * v5);
              if ( (*(*v11 + 32LL))(v11) == 1 )
              {
                v12 = *(off_101054D50 + 8);
                sub_1003E6A44();
                if ( v12 )
                {
                  if ( LogicLong::equals(v12, v3) && v13 != 0 )
                  {
                    v15 = sub_1003E6804(v13);
                    if ( sub_100598ED8(v15) == 1 )
                    {
                      v975 = 0LL;
                      v976 = 0LL;
                      v17 = sub_1003E6804(v16);
                      sub_1006151C4(v17 + 648, &v975);
                      sub_1001474F8(&v975, 0, 0LL);
                      sub_100147608(&v975);
                      operator new(32LL);
                      v19 = v18;
                      v20 = sub_1004CB64C(v18);
                      sub_1004CBA78(v20, &v975);
                      v973 = v19;
                      sub_1003E7840(&v973);
                      sub_100615264(&v975);
                      sub_1000F820C(off_101054D50, 0LL);
                      sub_100D805D8(&v973, "TID_TROOP_SELF_DONATE_COMPLETED");
                      v21 = sub_100372DE0(&v973);
                      sub_10022BCF0(v21, 0.0, 0LL, 0LL, 0LL);
                      sub_100D80350(&v973);
                      if ( v975 )
                        operator delete[](v975);
                    }
                  }
                }
              }
              sub_1005D174C(*(v4[76] + 8 * v5));
            }
          }
          return;
        }
        if ( v144 == 29388 )
        {
          v240 = sub_1003E6A44();
          nullsub_58(v240, a2);
          sub_100D805D8(&v971, "Debugger");
          sub_100D805D8(&v969, "OutOfSync");
          sub_100D805D8(&v967, "");
          sub_100D805D8(&v965, "");
          sub_10060E628(&v971, &v969, &v967, &v965);
          sub_100D80350(&v965);
          sub_100D80350(&v967);
          sub_100D80350(&v969);
          v241 = sub_100D80350(&v971);
          v242 = (loc_1000DC03C)(v241);
          sub_100D805D8(v964, "");
          sub_100D805D8(v963, "");
          sub_100D805D8(v962, "");
          sub_1000DE354(v242, 7u, 0LL, v964, v963, v962);
          sub_100D80350(v962);
          sub_100D80350(v963);
          v243 = v964;
          goto LABEL_823;
        }
      }
LABEL_611:
      if ( off_101054D50 )
        sub_1000F6654(off_101054D50, a2);
      if ( off_101054DF0 )
        sub_10045DDD0(a2);
      v772 = (*(*a2 + 40LL))(a2);
      if ( v772 == 26074 )
      {
        switch ( *(a2 + 144) )
        {
          case 0:
            sub_100D805D8(&v980, "TID_SPELL_FACTORY_VOUCHER_CLAIM_FAILED_TITLE");
            v773 = sub_100372DE0(&v980);
            v774 = "TID_SPELL_FACTORY_VOUCHER_CLAIM_FAILED_UNKNOWN";
            goto LABEL_1252;
          case 1:
            sub_100D805D8(&v980, "TID_SPELL_FACTORY_VOUCHER_CLAIM_FAILED_TITLE");
            v773 = sub_100372DE0(&v980);
            v774 = "TID_SPELL_FACTORY_VOUCHER_CLAIM_FAILED_ALREADY_CLAIMED";
            goto LABEL_1252;
          case 2:
            sub_100D805D8(&v980, "TID_SPELL_FACTORY_VOUCHER_CLAIM_FAILED_TITLE");
            v773 = sub_100372DE0(&v980);
            v774 = "TID_SPELL_FACTORY_VOUCHER_CLAIM_FAILED_EXPIRED";
            goto LABEL_1252;
          case 3:
            sub_100D805D8(&v980, "TID_SPELL_FACTORY_VOUCHER_CLAIM_FAILED_TITLE");
            v773 = sub_100372DE0(&v980);
            v774 = "TID_SPELL_FACTORY_VOUCHER_CLAIM_FAILED_INVALID_CODE";
            goto LABEL_1252;
          case 4:
            sub_100D805D8(&v980, "TID_SPELL_FACTORY_VOUCHER_CLAIM_FAILED_TITLE");
            v773 = sub_100372DE0(&v980);
            v774 = "TID_SPELL_FACTORY_VOUCHER_CLAIM_FAILED_INVALIDATED";
LABEL_1252:
            sub_100D805D8(&v978, v774);
            v775 = sub_100372DE0(&v978);
            sub_10043E10C(v773, v775);
            sub_100D80350(&v978);
            sub_100D80350(&v980);
            break;
          default:
            return;
        }
      }
      return;
    }
    if ( v144 > 29807 )
    {
      if ( v144 > 29996 )
      {
        if ( v144 == 29997 )
          return;
        if ( v144 != 40000 )
          goto LABEL_611;
        sub_100D88314(*(a2 + 144));
        sub_100D82FA4("AdUpdateConversionValueMessage received: conversionValue %d", &v971, *(a2 + 144));
        goto LABEL_822;
      }
      if ( v144 != 29808 )
      {
        if ( v144 != 29900 )
          goto LABEL_611;
        v162 = off_101054BE8;
        if ( !off_101054BE8 )
          return;
        v163 = sub_100B90798(a2);
        if ( !v163 )
        {
          sub_100B89308("Null SCID notification token!", 1);
          return;
        }
        v747 = v163;
        sub_100D20CB8(v162, v163);
        sub_100D80350(v747);
LABEL_774:
        operator delete();
        return;
      }
      if ( sub_1005E9784(a2) == 2 )
      {
        v324 = off_101054C78;
        if ( !off_101054C78 )
          return;
        v119 = sub_1005E978C(a2);
        sub_1001CC9F4(v324);
        if ( *(v119 + 12) >= 1 )
        {
          v120 = 0LL;
          do
          {
            v121 = *(*v119 + 8 * v120);
            v122 = *(v121 + 32);
            if ( v122 )
              sub_100D8060C(&v972, v122);
            else
              sub_100D805D8(&v972, "");
            *&v123 = operator new(256LL);
            v125 = v124;
            v126 = sub_1001CAB84(v123);
            sub_1001CAC28(v126, v121);
            sub_1001CAFA8(v125, &v972);
            sub_1001CAF78(v125, 1);
            v128 = v324[16];
            if ( v324[17] != v128 )
            {
              v129 = 0LL;
              while ( !sub_100D80E70(v128 + 32 * v129, v125 + 16) )
              {
                v129 = (v129 + 1);
                v128 = v324[16];
                if ( v129 >= (v324[17] - v128) >> 5 )
                  goto LABEL_1184;
              }
              sub_1001CAE24(v125, v324[16] + 32 * v129 + 16);
              sub_1001CAE2C(v125, v324[16] + 32 * v129 + 16);
            }
LABEL_1184:
            v130 = v324[14];
            if ( v130 == v324[15] )
            {
              v131 = v130 - v324[13];
              v132 = v131 >> 3;
              v133 = (v131 >> 3) + 1;
              if ( v133 >> 61 )
                abort();
              if ( v131 >> 2 > v133 )
                v133 = v131 >> 2;
              if ( v131 >= 0x7FFFFFFFFFFFFFF8LL )
                v134 = 0x1FFFFFFFFFFFFFFFLL;
              else
                v134 = v133;
              if ( v134 )
                v135 = sub_100118738(v127, v134);
              else
                v135 = 0LL;
              v136 = (v135 + 8 * v132);
              *v136 = v125;
              v137 = v136 + 1;
              v139 = v324[13];
              v138 = v324[14];
              if ( v138 != v139 )
              {
                do
                {
                  v140 = *(v138 - 8);
                  v138 -= 8LL;
                  *--v136 = v140;
                }
                while ( v138 != v139 );
                v138 = v324[13];
              }
              v324[13] = v136;
              v324[14] = v137;
              v324[15] = v135 + 8 * v134;
              if ( v138 )
                operator delete();
            }
            else
            {
              *v130 = v125;
              v324[14] = v130 + 1;
            }
            if ( v121 )
            {
              sub_1005E94EC(v121);
              operator delete();
            }
            sub_100D80350(&v972);
            ++v120;
          }
          while ( v120 < *(v119 + 12) );
        }
        *(v324 + 94) = 1;
        if ( *v119 )
          operator delete[](*v119);
        goto LABEL_1205;
      }
      if ( sub_1005E9784(a2) == 3 )
      {
        v477 = off_101054C88;
        if ( !off_101054C88 )
          return;
        v776 = sub_1005E978C(a2);
        sub_100D82FA4("Tencent Friends received from game server (count %d)", &v972, *(v776 + 12));
        sub_100D80350(&v972);
        sub_100443444(v477);
        if ( *(v776 + 12) >= 1 )
        {
          v777 = 0LL;
          do
          {
            v778 = *(*v776 + 8 * v777);
            *&v779 = operator new(256LL);
            v781 = v780;
            v782 = sub_1001CAB84(v779);
            sub_1001CAC28(v782, v778);
            v783 = sub_100444088(v477, (v781 + 38));
            if ( v783 )
            {
              v784 = v783;
              sub_1001CAFA0(v781, v783 + 32);
              sub_1001CAFC8(v781, (v781 + 38));
              sub_1001CAE2C(v781, v784 + 16);
              sub_1001CAF88(v781, 1);
              v785 = (v784 + 40);
              if ( *(v784 + 36) >= 8 )
                v785 = *v785;
              v786 = (v784 + 24);
              if ( *(v784 + 20) >= 8 )
                v786 = *v786;
              v787 = v781 + 40;
              if ( v781[39] >= 8 )
                v787 = *v787;
              sub_100D82FA4("Set Tencent friend profile pic URL: %s NAME: %s ID: %s", &v972, v785, v786, v787);
              sub_100D80350(&v972);
              v789 = v477[6];
              if ( v789 == v477[7] )
              {
                v790 = v789 - v477[5];
                v791 = v790 >> 3;
                v792 = (v790 >> 3) + 1;
                if ( v792 >> 61 )
                  abort();
                if ( v790 >> 2 > v792 )
                  v792 = v790 >> 2;
                if ( v790 >= 0x7FFFFFFFFFFFFFF8LL )
                  v793 = 0x1FFFFFFFFFFFFFFFLL;
                else
                  v793 = v792;
                if ( v793 )
                  v794 = sub_100118738(v788, v793);
                else
                  v794 = 0LL;
                v795 = (v794 + 8 * v791);
                *v795 = v781;
                v796 = v795 + 1;
                v798 = v477[5];
                v797 = v477[6];
                if ( v797 != v798 )
                {
                  do
                  {
                    v799 = *(v797 - 8);
                    v797 -= 8LL;
                    *--v795 = v799;
                  }
                  while ( v797 != v798 );
                  v797 = v477[5];
                }
                v477[5] = v795;
                v477[6] = v796;
                v477[7] = v794 + 8 * v793;
                if ( v797 )
                  operator delete();
              }
              else
              {
                *v789 = v781;
                v477[6] = v789 + 1;
              }
            }
            else
            {
              (*(*v781 + 8LL))(v781);
            }
            if ( v778 )
            {
              sub_1005E94EC(v778);
              operator delete();
            }
            ++v777;
          }
          while ( v777 < *(v776 + 12) );
        }
        *(v477 + 200) = 1;
        *(v477 + 208) = 0;
        if ( *v776 )
          operator delete[](*v776);
LABEL_1205:
        operator delete();
        return;
      }
      if ( sub_1005E9784(a2) )
      {
        if ( sub_1005E9784(a2) == 5 )
        {
          v497 = off_101054BE8;
          if ( off_101054BE8 )
          {
            v498 = sub_1005E978C(a2);
            v499 = v497;
            v748 = v498;
            v749 = v499;
            sub_10042AD70(v499);
            if ( *(v749 + 64) && sub_10042A464() )
            {
              if ( *(v748 + 12) >= 1 )
              {
                v750 = 0LL;
                v968 = v749 + 79;
                do
                {
                  v751 = *(*v748 + 8 * v750);
                  if ( v751 )
                  {
                    if ( sub_1005E94E4(*(*v748 + 8 * v750)) )
                    {
                      operator new(256LL);
                      v753 = v752;
                      sub_1001CAD60(v752, v751);
                      v754 = v749[74];
                      if ( (-1431655765 * ((v749[75] - v754) >> 5)) < 1 )
                      {
LABEL_1220:
                        (*(*v753 + 8LL))(v753);
                      }
                      else
                      {
                        v755 = 0LL;
                        v756 = 32LL;
                        while ( 1 )
                        {
                          v757 = v754 + v756;
                          if ( sub_100D80E70(v753 + 168, v754 + v756 - 32) )
                            break;
                          ++v755;
                          v754 = v749[74];
                          v756 = v758 + 96;
                          if ( v755 >= (-1431655765 * ((v749[75] - v754) >> 5)) )
                            goto LABEL_1220;
                        }
                        sub_1001CAE24(v753, v757);
                        sub_1001CAE2C(v753, v757);
                        sub_1001CAF98(v753, v757 + 16);
                        sub_1001CAF90(v753, 1);
                        v759 = v749[78];
                        v760 = v749[79];
                        if ( v759 >= v760 )
                        {
                          v761 = v749[77];
                          v762 = (v759 - v761) >> 3;
                          v763 = v762 + 1;
                          if ( (v762 + 1) >> 61 )
                            abort();
                          v764 = v760 - v761;
                          if ( v764 >> 2 > v763 )
                            v763 = v764 >> 2;
                          if ( v764 >= 0x7FFFFFFFFFFFFFF8LL )
                            v765 = 0x1FFFFFFFFFFFFFFFLL;
                          else
                            v765 = v763;
                          v973 = v968;
                          if ( v765 )
                          {
                            v766 = sub_1001CBFF0(v968, v765);
                            v759 = v749[78];
                            v761 = v749[77];
                          }
                          else
                          {
                            v766 = 0LL;
                          }
                          v767 = (v766 + 8 * v762);
                          v972 = v766 + 8 * v765;
                          *v767 = v753;
                          v768 = (v767 + 1);
                          v971 = (v767 + 1);
                          if ( v759 == v761 )
                          {
                            v770 = v761;
                          }
                          else
                          {
                            do
                            {
                              v769 = *--v759;
                              *v759 = 0LL;
                              *--v767 = v769;
                            }
                            while ( v759 != v761 );
                            v770 = v749[77];
                            v761 = v749[78];
                            v768 = v971;
                          }
                          v749[77] = v767;
                          v749[78] = v768;
                          v771 = v749[79];
                          v749[79] = v972;
                          v971 = v761;
                          v972 = v771;
                          v969 = v770;
                          v970 = v770;
                          sub_1001CC024(&v969);
                        }
                        else
                        {
                          *v759 = v753;
                          v749[78] = v759 + 1;
                        }
                      }
                    }
                    sub_1005E94EC(v751);
                    operator delete();
                  }
                  ++v750;
                }
                while ( v750 < *(v748 + 12) );
              }
              if ( *v748 )
                operator delete[](*v748);
              operator delete();
              *(v749 + 689) = 1;
              ++*(v749 + 138);
            }
          }
        }
        return;
      }
      v547 = off_101054CD0;
      if ( !off_101054CD0 )
        return;
      v78 = sub_1005E978C(a2);
      sub_1001CB104(v547);
      if ( *(v78 + 12) < 1 )
      {
LABEL_1141:
        *(v547 + 72) = 1;
        if ( *v78 )
          operator delete[](*v78);
        operator delete();
        return;
      }
      v79 = 0LL;
      while ( 1 )
      {
        *&v80 = operator new(256LL);
        v82 = v81;
        v83 = sub_1001CAB84(v80);
        v84 = *(*v78 + 8 * v79);
        sub_1001CAC28(v83, v84);
        v86 = *(v84 + 80);
        if ( v86 == 3 )
        {
          ++*(v547 + 19);
        }
        else if ( v86 == 4 )
        {
          ++*(v547 + 20);
        }
        v87 = v547[7];
        v88 = v547[8];
        if ( v87 >= v88 )
        {
          v89 = v547[6];
          v90 = (v87 - v89) >> 3;
          v91 = v90 + 1;
          if ( (v90 + 1) >> 61 )
            abort();
          v92 = v88 - v89;
          if ( v92 >> 2 > v91 )
            v91 = v92 >> 2;
          if ( v92 >= 0x7FFFFFFFFFFFFFF8LL )
            v93 = 0x1FFFFFFFFFFFFFFFLL;
          else
            v93 = v91;
          v973 = v85;
          if ( v93 )
          {
            v94 = sub_1001CBFF0(v85, v93);
            v89 = v547[6];
            v87 = v547[7];
          }
          else
          {
            v94 = 0LL;
          }
          v95 = (v94 + 8 * v90);
          v972 = v94 + 8 * v93;
          *v95 = v82;
          v96 = (v95 + 1);
          v971 = (v95 + 1);
          if ( v87 == v89 )
          {
            v98 = v89;
          }
          else
          {
            do
            {
              v97 = *(v87 - 1);
              v87 -= 2;
              *v87 = 0LL;
              *--v95 = v97;
            }
            while ( v87 != v89 );
            v98 = v547[6];
            v89 = v547[7];
            v96 = v971;
          }
          v547[6] = v95;
          v547[7] = v96;
          v99 = v547[8];
          v547[8] = v972;
          v971 = v89;
          v972 = v99;
          v969 = v98;
          v970 = v98;
          sub_1001CC024(&v969);
          if ( !v84 )
            goto LABEL_1140;
        }
        else
        {
          *v87 = v82;
          v547[7] = v87 + 2;
        }
        sub_1005E94EC(v84);
        operator delete();
LABEL_1140:
        if ( ++v79 >= *(v78 + 12) )
          goto LABEL_1141;
      }
    }
    if ( v144 != 29610 )
    {
      if ( v144 != 29773 )
      {
        if ( v144 != 29784 )
          goto LABEL_611;
        if ( sub_1003E6A44() )
        {
          v186 = sub_1005D5D84(a2);
          *&v187 = operator new(1000LL);
          v189 = v188;
          sub_100476638(v187);
          v190 = sub_1005D5D64(a2);
          sub_100476970(v189, v190);
          sub_100B8E410(*(v186 + 8));
          v192 = sub_1004769D4(v189, v191);
          v193 = sub_10040EB18(v192, v186);
          if ( v193 )
            (*(*v189 + 152LL))(v189, v193);
          v194 = sub_1005D5E20(a2);
          v195 = sub_1003F4DEC();
          v912 = v189;
          sub_1005D5D74(a2, &v971);
          v911 = v971;
          if ( v194 == 1 )
            v196 = 4;
          else
            v196 = 1;
          v910 = 0LL;
          v197 = *(a2 + 164);
          v909 = 0LL;
          sub_1003F538C(v195, v186, &v912, &v911, 0, 4LL, v196, 0, 0.0, &v910, -1, v197, 0, 0LL, &v909);
          if ( !v198 )
            return;
          goto LABEL_337;
        }
        goto LABEL_618;
      }
      sub_100D8060C(&v971, a2 + 144);
      if ( sub_100D82AD0(&v971, "TID_") )
      {
        v395 = sub_100372DE0(&v971);
        sub_100D80874(&v971, v395);
      }
      sub_100D8060C(&v969, a2 + 160);
      v396 = sub_100D82AD0(&v969, "TID_");
      if ( v396 )
      {
        v397 = sub_100372DE0(&v969);
        v396 = sub_100D80874(&v969, v397);
      }
      v398 = (loc_1000DC03C)(v396);
      v399 = *(a2 + 176);
      sub_100D8060C(v861, &v969);
      sub_100D805D8(v860, "");
      sub_100D8060C(v859, &v971);
      sub_1000DE354(v398, 0x24u, v399, v861, v860, v859);
      sub_100D80350(v859);
      sub_100D80350(v860);
      v400 = v861;
      goto LABEL_526;
    }
    if ( *(a2 + 144) < 1 )
      return;
    v385 = sub_1005BC924(a2);
    v971 = 0LL;
    if ( sub_100D6ABA0(v385, v386, &v971, 0) >= 1 )
    {
      v387 = v971;
      operator new(16LL);
      v389 = v388;
      sub_100D805A4(v388, v387, v390);
      sub_1003F4DEC();
      v903 = v389;
      sub_1005BCB24(a2, v902);
      if ( *(a2 + 176) )
        v392 = 13;
      else
        v392 = 11;
      sub_1003F4F08(v391, &v903, v902, v392);
      sub_1003F4DEC();
      sub_1005BCB14(a2, v901);
      sub_1003F5024(v393, v901);
    }
    if ( v385 )
      operator delete[](v385);
    v394 = v971;
    if ( !v971 )
      return;
LABEL_742:
    operator delete[](v394);
    return;
  }
  if ( v144 > 25164 )
  {
    if ( v144 > 25891 )
    {
      if ( v144 <= 26187 )
      {
        if ( v144 <= 26084 )
        {
          if ( v144 != 25892 )
          {
            if ( v144 != 25942 )
              goto LABEL_611;
            if ( !off_101054CC0 || *(a2 + 144) != 6 )
              return;
            v148 = "TID_FRIENDLY_DISTRICT_CHALLENGE_CLOSED";
LABEL_818:
            sub_100D805D8(&v971, v148);
            goto LABEL_819;
          }
          v309 = sub_100B90F98(a2);
          switch ( v309 )
          {
            case 3:
              if ( off_101054BE8 )
                sub_10042AA24(off_101054BE8);
              return;
            case 2:
              v493 = (loc_1000DC03C)();
              sub_100D805D8(v883, "");
              sub_100D805D8(v882, "");
              sub_100D805D8(v881, "");
              sub_1000DE354(v493, 0x13u, 0LL, v883, v882, v881);
              sub_100D80350(v881);
              sub_100D80350(v882);
              v243 = v883;
              goto LABEL_823;
            case 1:
              v310 = (loc_1000DC03C)();
              sub_100D805D8(v886, "");
              sub_100D805D8(v885, "");
              sub_100D805D8(v884, "");
              sub_1000DE354(v310, 0xCu, 0LL, v886, v885, v884);
              sub_100D80350(v884);
              sub_100D80350(v885);
              v243 = v886;
              goto LABEL_823;
          }
          sub_100D82FA4("DisconnectedMessage unknown reason %d", &v971, v309);
LABEL_822:
          v243 = &v971;
          goto LABEL_823;
        }
        if ( v144 == 26085 )
        {
          v428 = off_101054C78;
          if ( off_101054C78 )
          {
            sub_1001CC4E8(off_101054C78);
            v429 = v428;
            v430 = vars0;
            v432 = v982;
            v431 = v983;
            *(v429 + 95) = 0;
            v118 = *(v429 + 1);
            v982 = v432;
            v983 = v431;
            vars0 = v430;
            v850 = v118;
            v851 = sub_100DC48E0(classRef_GKLocalPlayer);
            if ( sub_100DC26C0(v851) )
            {
              v977 = _NSConcreteStackBlock_ptr;
              v978 = 3221225472LL;
              v979 = sub_100D91D74;
              v980 = &unk_100F6C430;
              v981 = v850;
              sub_100DC4600(v851);
            }
          }
          return;
        }
        if ( v144 != 26172 )
          goto LABEL_611;
        v226 = sub_1005E5ACC(a2);
        v227 = sub_1005E5AD4(a2);
        if ( *v228 )
        {
          v229 = v227;
          if ( !sub_100B8E370(v226) )
          {
            if ( *(v229 + 4) )
            {
              v231 = *(v230 + 20);
              v232 = sub_100B8E43C(v226);
              v233 = sub_100B8E444(v226);
              sub_1001B4C04(v234, v231, v229, v232, v233);
            }
          }
        }
        v235 = off_101054CC0;
        if ( !off_101054CC0 )
          return;
        v217 = sub_10022C3C0(off_101054CC0);
        if ( !v217 )
        {
          *&v236 = operator new(392LL);
          sub_100435364(v236);
          sub_100226DB0();
          v217 = sub_10022C3C0(v235);
          if ( !v217 )
            return;
        }
        *&v237 = operator new(192LL);
        v239 = v238;
        sub_1001C2800(v237);
LABEL_848:
        sub_1001C31E8(v217, v239);
        return;
      }
      if ( v144 <= 26441 )
      {
        if ( v144 == 26188 )
          return;
        if ( v144 == 26402 )
        {
          if ( off_101054CC0 )
          {
            v174 = sub_10022C2FC(off_101054CC0);
            v175 = sub_1000FD6C8(v174);
            if ( sub_1005BC1C0(a2) == 2 )
            {
              sub_100D805D8(&v971, "TID_INVALID_DESCRIPTION");
              sub_10022BD7C(&v971, 1LL, 0LL, 0.0);
              sub_100D80350(&v971);
              if ( v175 )
                sub_10012044C(v175);
            }
          }
          else
          {
            sub_1005BC1C0(a2);
          }
          return;
        }
        goto LABEL_611;
      }
      if ( v144 != 26442 )
      {
        if ( v144 != 26532 )
          goto LABEL_611;
        if ( sub_1003E6A44() )
        {
          v273 = sub_1005EC634(a2);
          *&v274 = operator new(1000LL);
          v276 = v275;
          sub_100476638(v274);
          v277 = sub_1005EC550(a2);
          sub_100476970(v276, v277);
          sub_100B8E410(*(v273 + 8));
          v279 = sub_1004769D4(v276, v278);
          v280 = sub_10040EB18(v279, v273);
          if ( v280 )
            (*(*v276 + 152LL))(v276, v280);
          if ( sub_1005EC644(a2) )
            v281 = 3;
          else
            v281 = 2;
          v282 = sub_1005EC64C(a2);
          if ( v282 )
          {
            v283 = sub_1003E6A44();
            v284 = sub_1003E6824(v283);
            v285 = (*(*v284 + 16LL))(v284);
            sub_100B8E410(v285);
            sub_100476A0C(v276, v286);
            *&v287 = operator new(16LL);
            v289 = v288;
            v290 = (*(*v284 + 352LL))(v284, v287);
            sub_100D8060C(v289, v290);
            sub_100476C1C(v276, v289);
            v291 = (*(*v284 + 32LL))(v284);
            sub_100476C58(v276, v291);
            v292 = sub_100476C80(v284);
            sub_100476C78(v276, v292);
            v281 = 10;
          }
          v293 = sub_1005EC570(a2);
          v294 = sub_1003F4DEC();
          v871 = v276;
          sub_1005EC560(a2, &v971);
          v869 = 0LL;
          v870 = v971;
          v295 = *(a2 + 144);
          v868 = v282;
          sub_1003F538C(v294, v273, &v871, &v870, 0, 4LL, v281, 0, 0.0, &v869, -1, v295, 0, 0LL, &v868);
          v296 = sub_1003F4DEC();
          sub_1003F5C94(v296, v293);
          if ( !v297 )
            return;
LABEL_337:
          nullsub_33();
          (*(*v298 + 8LL))(v298);
          return;
        }
        v474 = "FriendlyScoutHomeDataMessage received but GameMode is null!";
LABEL_636:
        sub_100B89308(v474, 1);
        return;
      }
      if ( !off_101054CC0 )
        return;
      v462 = sub_10022C3C0(off_101054CC0);
      if ( !v462 )
        return;
      v217 = v462;
      v463 = sub_1001C307C(v462);
      if ( (*(*v463 + 392LL))(v463) != 5 )
        return;
      v464 = sub_1005E5640(a2);
      if ( v464 > 1 )
      {
        if ( v464 == 2 )
        {
LABEL_843:
          operator new(200LL);
          v239 = v465;
          v466 = 1LL;
          goto LABEL_844;
        }
        if ( v464 == 11 )
        {
LABEL_764:
          operator new(200LL);
          v239 = v465;
          v466 = 10LL;
          goto LABEL_844;
        }
      }
      else
      {
        if ( !v464 )
        {
          operator new(216LL);
          v564 = sub_1005E5638(a2);
          sub_1005E5648(a2);
          sub_1001C0FD0(v565, v564);
LABEL_724:
          sub_1001C31E8(v217, v526);
          return;
        }
        if ( v464 == 1 )
        {
LABEL_603:
          operator new(200LL);
          v239 = v465;
          v466 = 2LL;
LABEL_844:
          v587 = 0LL;
LABEL_847:
          sub_1001C20AC(v465, v466, v587);
          goto LABEL_848;
        }
      }
      sub_100D82FA4("LogicDeviceLinkCodeResponseMessage unknown error code %d", &v971, v464);
      goto LABEL_822;
    }
    if ( v144 > 25366 )
    {
      if ( v144 > 25862 )
      {
        if ( v144 != 25863 )
        {
          if ( v144 == 25874 )
          {
            v252 = sub_1005BAA04(a2);
            v253 = sub_1005BA9F4(a2);
            v254 = v253;
            if ( *v255 && !sub_100B8E370(v253) && *(v252 + 4) )
            {
              v257 = *(v256 + 20);
              v258 = sub_100B8E43C(v254);
              v259 = sub_100B8E444(v254);
              sub_1001B4C04(v260, v257, v252, v258, v259);
            }
            if ( v254 )
              operator delete();
            if ( v252 )
            {
              sub_100D80350(v252);
              operator delete();
            }
            v261 = (loc_1000DC03C)();
            sub_1000DFCF0(v261);
            return;
          }
          goto LABEL_611;
        }
        if ( sub_1003E6A44() )
        {
          if ( sub_1003E6A44() && (sub_1003E6A44(), dword_101054E90 == 8) )
          {
            v445 = 6;
          }
          else if ( sub_1003E6A44() && (sub_1003E6A44(), dword_101054E90 == 6) )
          {
            if ( sub_1005EF9B4(a2) == 1 )
              v445 = 4;
            else
              v445 = 1;
          }
          else
          {
            v445 = 0;
          }
          sub_1003F4DEC();
          v489 = sub_1005EF8B8(a2);
          sub_1005EF8D0(a2, &v971);
          v916 = v971;
          sub_1005EF8EC(a2, &v969);
          v915 = v969;
          v490 = sub_1005EF8A8(a2);
          v914 = 0LL;
          v491 = *(a2 + 180);
          v913 = 0LL;
          sub_1003F538C(v492, v489, &v916, &v915, v490, 4LL, v445, 0, 0.0, &v914, -1, v491, 0, 0LL, &v913);
          return;
        }
LABEL_618:
        v474 = "VisitedHomeDataMessage received but GameMode is null!";
        goto LABEL_636;
      }
      if ( v144 == 25367 )
      {
        v313 = *(a2 + 192);
        v314 = a2 + 144;
        v68 = off_101054C18;
        if ( v313 == 1 )
        {
          v69 = v314;
          sub_100D8060C(&v978, *(off_101054C18 + 34));
          v70 = sub_100D80E70(v69, &v978);
          sub_100D80350(&v978);
          if ( v70 )
          {
            v72 = v68[34];
            if ( !*(v72 + 56) )
            {
              sub_100D80874(v72 + 40, v71);
              *(v72 + 56) = 1;
            }
            sub_10019E15C(v68, v69);
          }
        }
        else
        {
          sub_100D82FA4("init midas purchase order url error", &v978);
          if ( SHIDWORD(v978) >= 8 )
            v73 = v979;
          else
            v73 = &v979;
          sub_100B89308(v73, 1);
          sub_100D80350(&v978);
          v74 = v68[34];
          if ( v74 )
          {
            sub_100D80350(v74 + 40);
            sub_100D80350(v74 + 16);
            sub_100D80350(v74);
            operator delete();
          }
          v68[34] = 0LL;
        }
        return;
      }
      v159 = 25418;
LABEL_228:
      if ( v144 == v159 )
      {
        if ( off_101054C68 )
          sub_1002666C4(off_101054C68, a2);
        return;
      }
      goto LABEL_611;
    }
    if ( v144 == 25165 )
    {
      if ( off_101054BE8 )
      {
        v370 = sub_1005F2040(a2);
        if ( v370 )
        {
          sub_100D830B0(v370, &v969);
          sub_100D80C88("SCIDAccountBoundMessage: invalid result code ", &v971);
          sub_100D80350(&v971);
          sub_100D80350(&v969);
          sub_100D1F770(v371);
        }
        else
        {
          v500 = sub_1005F2048(a2);
          sub_10042A984(v501, v500);
          sub_100D80350(v500);
          operator delete();
          *(a1 + 20) |= 0x10u;
          if ( sub_1003E6A44() )
          {
            v502 = sub_1003E6A44();
            sub_1003EA5BC(v502);
          }
        }
      }
      return;
    }
    if ( v144 == 25195 )
    {
      if ( !sub_1003E6A44()
        || !*(sub_1003E6A44() + 513)
        || *(sub_1003E6A44() + 514)
        || (*(sub_1003E6A44() + 514) = 1, *(*(sub_1003E6A44() + 368) + 14LL) = 1, *(sub_1003E6A44() + 512))
        || !*(*(sub_1003E6A44() + 368) + 15LL) )
      {
        if ( sub_1003E6A44() && *(sub_1003E6A44() + 424) )
        {
          v372 = sub_1003E6A44();
          sub_1003ED9CC(v372);
        }
        sub_1005EE6CC(a2, &v969);
        if ( v969 && *(v969 + 984) )
          sub_100B89308("OwnHomeData should not be leased", 1);
        v373 = v969;
        if ( *(off_101054BE8 + 64) )
          *(off_101054BE8 + 584) = *(v969 + 86) < 2;
        nullsub_57(v373, 1LL, 0LL);
        if ( sub_1003F4DEC() )
        {
          v374 = sub_1003F4DEC();
          sub_10040F204((v374 + 352), a2 + 216);
        }
        if ( v969 )
          v375 = (*(*v969 + 24))(v969);
        else
          v375 = 0;
        if ( sub_1003E6A44() && !**(sub_1003E6A44() + 368) )
        {
          sub_1003F4DEC();
          v503 = sub_1005EE7A0(a2);
          *(v504 + 124) = v503;
          sub_1003F4DEC();
          v505 = sub_1005EE7A8(a2);
          sub_1003F5CD4(v506, v505);
          *(sub_1003F4DEC() + 128) = *(a2 + 160);
          sub_1003E6A44();
          v507 = sub_1005EE6BC(a2);
          v508 = v969;
          v509 = sub_1005EE6B4(a2);
          v961 = 0LL;
          v510 = sub_1005EE7B0(a2);
          v960 = 0LL;
          sub_1003EAE50(v511, v507, v508, 0LL, v509, 1, 0, 0, &v961, v510, &v960);
        }
        else
        {
          sub_1005EE790(a2);
          v478 = sub_1005EE798(a2);
          if ( *(sub_1003F4DEC() + 56) )
          {
            v479 = sub_1003F4DEC();
            sub_1003F5C64(v479);
          }
          v480 = sub_1003F4DEC();
          v481 = sub_1005EE6BC(a2);
          v958 = 0LL;
          v959 = v969;
          v482 = sub_1005EE6B4(a2);
          v957 = 0LL;
          v483 = sub_1005EE7A0(a2);
          v484 = sub_1005EE7A8(a2);
          v485 = *(a2 + 160);
          v486 = sub_1005EE7B0(a2);
          v956 = 0LL;
          sub_1003F538C(v480, v481, &v959, &v958, v482, 1LL, v487, v478, 0.0, &v957, v483, v484, v485, v486, &v956);
          sub_100D805D8(&v971, "TOWN");
          sub_1003F5260(&v971);
          sub_100D80350(&v971);
        }
        if ( !((off_101054CF0 == 0LL) | v375 & 1) )
          sub_100134370();
      }
      return;
    }
    if ( v144 != 25357 )
      goto LABEL_611;
    if ( !off_101054CC0 )
      return;
    if ( sub_1005EF53C(a2) == 5 )
      v183 = "TID_VISIT_FAILED_RESTRICTED";
    else
      v183 = "TID_VISIT_FAILED";
LABEL_655:
    sub_100D805D8(&v971, v183);
    sub_10022BD7C(&v971, 1LL, 0LL, 0.0);
    sub_100D80350(&v971);
    if ( !sub_1003E6A44() )
      return;
    goto LABEL_736;
  }
  if ( v144 > 24345 )
  {
    if ( v144 > 24549 )
    {
      if ( v144 <= 25133 )
      {
        if ( v144 == 24550 )
        {
          v325 = *(a2 + 148);
          if ( sub_10019E82C(off_101054C18) )
            sub_10019E9DC(*v326, a2 + 152, *(a2 + 144), v325 & 1);
          if ( sub_1001A11A4(off_101054CE0) )
          {
            v328 = *(a2 + 144);
            v75 = v325 & 1;
            v76 = *v327;
            sub_100D830B0(v328, &v972);
            sub_100D80C88("SCIDBillingManager::serverVerificationFailed errorCode:", &v974);
            sub_100D80BE0(&v974, " ", &v976);
            sub_100D80B0C(&v976, v77, &v978);
            sub_100D80350(&v978);
            sub_100D80350(&v976);
            sub_100D80350(&v974);
            sub_100D80350(&v972);
            if ( v75 && *v76 )
              sub_100D20C10(off_101054BE8, *v76 + 16);
            else
              sub_1001A2D60(v76, 0LL);
          }
          return;
        }
        if ( v144 == 24676 )
        {
          v164 = off_101054CF0;
          if ( off_101054CF0 )
          {
            v165 = sub_100B8E344(*(a2 + 144));
            sub_100B8E330(&v981, v165);
            sub_100135FDC(v164, &v981);
          }
          return;
        }
        goto LABEL_611;
      }
      if ( v144 != 25134 )
      {
        if ( v144 == 25142 )
        {
          v266 = sub_1003E6A44();
          if ( v266 )
          {
            v267 = v266;
            sub_1005EE960(a2);
            sub_1005EE968(a2);
            sub_1003EEF44(v267, v268);
          }
          return;
        }
        goto LABEL_611;
      }
      v157 = off_101054C18;
      sub_1005B51D0(a2);
      v158 = sub_1005B51D8(a2);
      goto LABEL_586;
    }
    if ( v144 != 24346 )
    {
      if ( v144 != 24426 )
      {
        if ( v144 == 24462 )
        {
          v199 = off_101054CC0;
          if ( off_101054CC0 )
          {
            sub_1005EDE84(a2);
            v200 = sub_1005EDE8C(a2);
            sub_1002241B0(v199, v201, v200);
          }
          return;
        }
        goto LABEL_611;
      }
      goto LABEL_342;
    }
    if ( !sub_1003E6A44() )
    {
      v474 = "NpcDataMessage received but GameMode is null!";
      goto LABEL_636;
    }
    v414 = sub_1005EE09C(a2);
    v415 = *(v414 + 40);
    if ( v415 < 1 )
    {
      sub_100596A30(v414);
      goto LABEL_774;
    }
    v416 = sub_100596D90(v414);
    v969 = 0LL;
    v417 = sub_100D6ABA0(v416, v415, &v969, 0);
    if ( v417 >= 1 )
    {
      sub_100D805A4(&v971, v969, v417);
      sub_1001BA464(v418, &v971);
      sub_100D80350(&v971);
      v419 = 8 * *(a2 + 176);
      v420 = sub_1003F4DEC();
      sub_1005EE0BC(a2, &v971);
      v955 = v971;
      sub_1005EE0AC(a2, &v967);
      v954 = v967;
      v421 = sub_1005EE094(a2);
      v953 = 0LL;
      v422 = *(a2 + 180);
      v952 = 0LL;
      sub_1003F538C(v420, v423, &v955, &v954, v421, 2LL, v419, 0, 0.0, &v953, -1, v422, 0, 0LL, &v952);
      sub_100D805D8(&v971, "BATTLE");
      sub_1003F5260(&v971);
      sub_100D80350(&v971);
    }
    if ( v416 )
    {
      v411 = v416;
      goto LABEL_541;
    }
    goto LABEL_542;
  }
  if ( v144 <= 24123 )
  {
    if ( v144 == 23883 )
      return;
    if ( v144 != 23966 )
    {
      if ( v144 == 24108 )
      {
        sub_1005EB75C(a2, &v971);
        if ( v971 )
        {
          if ( sub_1003E6A44()
            && (v176 = *(sub_1003E6A44() + 368)) != 0
            && sub_1003F4DEC()
            && (v177 = sub_1003F4DEC(), !sub_1003F4E50(v177))
            && (v178 = *(v176 + 16), v179 = (*(*v971 + 32LL))(v971), sub_1004BD038(v178, v179)) )
          {
            v908 = v971;
            sub_1003E7840(&v908);
          }
          else if ( sub_1003F4DEC() )
          {
            v475 = sub_1003F4DEC();
            v907 = v971;
            sub_1003F57A0(v475, &v907);
          }
          else if ( v971 )
          {
            (**v971)(v971);
            if ( v971 )
              (*(*v971 + 16LL))(v971);
          }
        }
        return;
      }
      goto LABEL_611;
    }
    if ( off_101054C88 )
      sub_100443680(off_101054C88);
    if ( *(off_101054BE8 + 64) && (sub_100D1E4AC(off_101054BE8) || (sub_100D1EE7C(*v361) & 1) != 0) )
      return;
    if ( !off_101054C88 )
      return;
    if ( !off_101054CC0 )
      return;
    v362 = sub_1005F7AB4(a2);
    if ( !v362 )
      return;
    sub_1005F7AAC(a2, v362);
    v363 = sub_1005F7A7C(a2);
    sub_1005F7A74(a2, v363);
    operator new(528LL);
    sub_100343348(v364, 9LL, a2);
LABEL_652:
    sub_100226DB0();
    return;
  }
  if ( v144 <= 24221 )
  {
    if ( v144 == 24124 )
    {
      if ( off_101054CF0 )
        sub_100133194(off_101054CF0, *(a2 + 144), *(a2 + 152));
      return;
    }
    if ( v144 != 24132 )
      goto LABEL_611;
    if ( off_101054CC0 )
    {
      if ( *(a2 + 144) == 3 )
        v156 = "TID_CHALLENGE_ALREADY_CLOSED";
      else
        v156 = "TID_ALLIANCE_WAR_VISIT_FAILED";
      sub_100D805D8(&v971, v156);
      v521 = sub_100372DE0(&v971);
      sub_10022BCF0(v521, 0.0, 1LL, 0LL, 0LL);
      sub_100D80350(&v971);
    }
    if ( !sub_1003E6A44() )
      return;
    sub_1003E6A44();
    if ( dword_101054E90 != 7 )
    {
      sub_1003E6A44();
      if ( dword_101054E90 != 6 )
        return;
    }
    goto LABEL_736;
  }
  if ( v144 == 24222 )
  {
    v439 = off_101054C88;
    if ( !off_101054C88 )
      return;
    v245 = sub_1005F82B8(a2);
    v246 = v439;
    v248 = v440;
    v249 = 0;
  }
  else
  {
    if ( v144 != 24223 )
      goto LABEL_611;
    v244 = off_101054C88;
    if ( !off_101054C88 )
      return;
    v245 = sub_1005F8C54(a2);
    v246 = v244;
    v248 = v247;
    v249 = 1;
  }
  v800 = v249;
  v801 = v245;
  if ( v245 )
  {
    v802 = v248;
    v803 = *(v245 + 12);
    v804 = v803 - 1;
    if ( v803 >= 1 )
    {
      v805 = 1 - v803;
      v806 = *(v245 + 12);
      do
      {
        v807 = v806--;
        v808 = *v245;
        if ( !*(*v245 + 8LL * v806) )
        {
          v809 = v803 - 1;
          *(v245 + 12) = v803 - 1;
          if ( v807 < v803 && v809 - v806 >= 1 )
          {
            v810 = v803 + v805;
            v811 = (v808 + 8LL * v804 + 8);
            do
            {
              *(v811 - 1) = *v811;
              --v810;
              ++v811;
            }
            while ( v810 > 1 );
          }
          v803 = v809;
        }
        ++v805;
        --v804;
      }
      while ( v807 > 1 );
    }
    if ( v803 && *(v246 + 203) )
    {
      sub_1004434C8(v246);
      sub_100D80874(v812 + 216, v802);
      LODWORD(v813) = *(v801 + 3);
      if ( v813 >= 1 )
      {
        v814 = 0LL;
        v815 = 1;
        do
        {
          v816 = *(*v801 + 8 * v814);
          if ( v800 )
          {
            if ( v815 )
            {
              v817 = *(v816 + 8);
              v815 = v817 != 7;
              if ( v817 == 7 )
                v818 = 3;
              else
                v818 = 2;
            }
            else
            {
              v815 = 0;
              v818 = 3;
            }
            if ( v814 == v813 - 1 )
              v819 = v818;
            else
              v819 = 1;
          }
          else
          {
            v819 = 0;
          }
          operator new(16LL);
          *v820 = v816;
          *(v820 + 2) = v819;
          v975 = v820;
          sub_100444644(v821, &v975);
          ++v814;
          v813 = *(v801 + 3);
        }
        while ( v814 < v813 );
      }
      if ( *v801 )
        operator delete[](*v801);
      operator delete();
      return;
    }
  }
  if ( v249 && off_101054C18 )
    sub_10019E884(off_101054C18, 1);
  if ( v801 )
  {
    v822 = *(v801 + 3);
    if ( v822 >= 1 )
    {
      for ( j = 0LL; j < v822; ++j )
      {
        v824 = *(*v801 + 8 * j);
        if ( v824 )
        {
          (*(*v824 + 16LL))(*(*v801 + 8 * j), v248);
          (*(*v824 + 8LL))(v824);
          v822 = *(v801 + 3);
        }
      }
    }
    if ( *v801 )
      operator delete[](*v801);
    goto LABEL_774;
  }
}