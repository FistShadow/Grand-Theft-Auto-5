#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = 0;
	float fLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0;
	float fLocal_26 = 0;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0;
	float fLocal_32 = 0;
	float fLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int[] iLocal_52 = new int[4];
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	struct<5> Local_71 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 21;
	var uLocal_79 = 6;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int[] iLocal_85 = new int[6];
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	struct<2> Local_96 = 0;
	var uLocal_98 = -1;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 1000;
	var uLocal_106 = 1000;
	var uLocal_107 = 0;
	vector3 vLocal_108 = 0;
	Vector3 fLocal_111 = 0;
	vector3 vLocal_112 = 0;
	Vector3 fLocal_115 = 0;
	vector3 vLocal_116 = 0;
	vector3 vLocal_119 = 0;
	Vector3 fLocal_122 = 0;
	vector3 vLocal_123 = 0;
	Vector3 fLocal_126 = 0;
	vector3 vLocal_127 = 0;
	Vector3 fLocal_130 = 0;
	vector3 vLocal_131 = 0;
	Vector3 fLocal_134 = 0;
	vector3 vLocal_135 = 0;
	Vector3 fLocal_138 = 0;
	vector3 vLocal_139 = 0;
	Vector3 fLocal_142 = 0;
	vector3 vLocal_143 = 0;
	vector3 vLocal_146 = 0;
	vector3 vLocal_149 = 0;
	vector3 vLocal_152 = 0;
	vector3 vLocal_155 = 0;
	vector3 vLocal_158 = 0;
	vector3 vLocal_161 = 0;
	vector3 vLocal_164 = 0;
	vector3 vLocal_167 = 0;
	vector3[] vLocal_170 = new vector3[4];
	vector3[] vLocal_183 = new vector3[4];
	vector3 vLocal_196 = 0;
	float fLocal_199 = 0;
	vector3[] vLocal_200 = new vector3[3];
	int iLocal_210 = 0;
	vector3[] vLocal_211 = new vector3[6];
	int iLocal_230 = 0;
	int iLocal_231 = 0;
	int iLocal_232 = 0;
	int iLocal_233 = 0;
	int iLocal_234 = 0;
	int iLocal_235 = 0;
	int iLocal_236 = 0;
	int iLocal_237 = 0;
	int iLocal_238 = 0;
	int iLocal_239 = 0;
	int iLocal_240 = 0;
	int iLocal_241 = 0;
	int iLocal_242 = 0;
	int iLocal_243 = 0;
	int iLocal_244 = 0;
	int iLocal_245 = 0;
	int iLocal_246 = 0;
	int iLocal_247 = 0;
	int iLocal_248 = 0;
	int iLocal_249 = 0;
	float fLocal_250 = 0;
	int iLocal_251 = 0;
	int iLocal_252 = 0;
	int iLocal_253 = 0;
	int iLocal_254 = 0;
	int iLocal_255 = 0;
	int iLocal_256 = 0;
	int iLocal_257 = 0;
	int iLocal_258 = 0;
	int iLocal_259 = 0;
	int iLocal_260 = 0;
	int iLocal_261 = 0;
	int iLocal_262 = 0;
	int iLocal_263 = 0;
	int iLocal_264 = 0;
	int iLocal_265 = 0;
	int iLocal_266 = 0;
	int iLocal_267 = 0;
	int iLocal_268 = 0;
	vector3 vLocal_269 = 0;
	vector3 vLocal_272 = 0;
	Vector3 fLocal_275 = 0;
	char* sLocal_276 = 0;
	char* sLocal_277 = 0;
	char* sLocal_278 = 0;
	struct<20> Local_279 = 8;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 4;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 4;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 4;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 4;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 4;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 4;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 4;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	int iLocal_357 = 0;
	int iLocal_358 = 0;
	int iLocal_359 = 0;
	struct<10>[] Local_360 = new struct<10>[16];
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	struct<2> Local_525 = 0;
	struct<2> Local_527 = 0;
	struct<2> Local_529 = 0;
	struct<2> Local_531 = 0;
	struct<2> Local_533 = 0;
	struct<2> Local_535 = 0;
	struct<2> Local_537 = 0;
	struct<2> Local_539 = 0;
	struct<2> Local_541 = 0;
	struct<2> Local_543 = 0;
	struct<2> Local_545 = 0;
	struct<9>[] Local_547 = new struct<9>[4];
	struct<15> Local_584 = 0;
	vector3[] vLocal_599 = new vector3[9];
	float[] fLocal_627 = new float[9];
	int iLocal_637 = 0;
	int iLocal_638 = 0;
	int iLocal_639 = 0;
	int iLocal_640 = 0;
	int iLocal_641 = 0;
	int iLocal_642 = 0;
	int iLocal_643 = 0;
	int iLocal_644 = 0;
	int iLocal_645 = 0;
	int[] iLocal_646 = new int[4];
	int[] iLocal_651 = new int[6];
	int[] iLocal_658 = new int[2];
	int iLocal_661 = 0;
	int iLocal_662 = 0;
	int iLocal_663 = 0;
	char[24] cLocal_664 = 0;
	int iLocal_670 = 0;
	int iLocal_671 = 0;
	int iLocal_672 = 0;
	int iLocal_673 = 0;
	int iLocal_674 = 0;
	int iLocal_675 = 0;
	int iLocal_676 = 0;
	int iLocal_677 = 0;
	int iLocal_678 = 0;
	int iLocal_679 = 0;
	int iLocal_680 = 0;
	int iLocal_681 = 0;
	int iLocal_682 = 0;
	char* sLocal_683 = 0;
	int iLocal_684 = 0;
	int iLocal_685 = 0;
	int iLocal_686 = 0;
	int iLocal_687 = 0;
	int iLocal_688 = 0;
	int iLocal_689 = 0;
	int iLocal_690 = 0;
	int iLocal_691 = 0;
	int iLocal_692 = 0;
	int iLocal_693 = 0;
	int iLocal_694 = 0;
	var[] uLocal_695 = new var[4];
	float[] fLocal_700 = new float[4];
	vector3 vLocal_705 = 0;
	float fLocal_708 = 0;
	int iLocal_709 = 0;
	int iLocal_710 = 0;
	int iLocal_711 = 0;
	int iLocal_712 = 0;
	int iLocal_713 = 0;
	int iLocal_714 = 0;
	int iLocal_715 = 0;
	int iLocal_716 = 0;
	vector3 vLocal_717 = 0;
	int iLocal_720 = 0;
	int iLocal_721 = 0;
	var uLocal_722 = 100;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	var uLocal_726 = 0;
	var uLocal_727 = 0;
	var uLocal_728 = 0;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	var uLocal_751 = 0;
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	var uLocal_764 = 0;
	var uLocal_765 = 0;
	var uLocal_766 = 0;
	var uLocal_767 = 0;
	var uLocal_768 = 0;
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	var uLocal_771 = 0;
	var uLocal_772 = 0;
	var uLocal_773 = 0;
	var uLocal_774 = 0;
	var uLocal_775 = 0;
	var uLocal_776 = 0;
	var uLocal_777 = 0;
	var uLocal_778 = 0;
	var uLocal_779 = 0;
	var uLocal_780 = 0;
	var uLocal_781 = 0;
	var uLocal_782 = 0;
	var uLocal_783 = 0;
	var uLocal_784 = 0;
	var uLocal_785 = 0;
	var uLocal_786 = 0;
	var uLocal_787 = 0;
	var uLocal_788 = 0;
	var uLocal_789 = 0;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	var uLocal_792 = 0;
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	var uLocal_795 = 0;
	var uLocal_796 = 0;
	var uLocal_797 = 0;
	var uLocal_798 = 0;
	var uLocal_799 = 0;
	var uLocal_800 = 0;
	var uLocal_801 = 0;
	var uLocal_802 = 0;
	var uLocal_803 = 0;
	var uLocal_804 = 0;
	var uLocal_805 = 0;
	var uLocal_806 = 0;
	var uLocal_807 = 0;
	var uLocal_808 = 0;
	var uLocal_809 = 0;
	var uLocal_810 = 0;
	var uLocal_811 = 0;
	var uLocal_812 = 0;
	var uLocal_813 = 0;
	var uLocal_814 = 0;
	var uLocal_815 = 0;
	var uLocal_816 = 0;
	var uLocal_817 = 0;
	var uLocal_818 = 0;
	var uLocal_819 = 0;
	var uLocal_820 = 0;
	var uLocal_821 = 0;
	var uLocal_822 = 0;
	var uLocal_823 = 0;
	var uLocal_824 = 0;
	var uLocal_825 = 0;
	var uLocal_826 = 0;
	var uLocal_827 = 0;
	var uLocal_828 = 0;
	var uLocal_829 = 0;
	var uLocal_830 = 0;
	var uLocal_831 = 0;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
	var uLocal_834 = 0;
	var uLocal_835 = 0;
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	var uLocal_839 = 0;
	var uLocal_840 = 0;
	var uLocal_841 = 0;
	var uLocal_842 = 0;
	var uLocal_843 = 0;
	var uLocal_844 = 0;
	var uLocal_845 = 0;
	var uLocal_846 = 0;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	var uLocal_849 = 0;
	var uLocal_850 = 0;
	var uLocal_851 = 0;
	var uLocal_852 = 0;
	var uLocal_853 = 0;
	var uLocal_854 = 0;
	var uLocal_855 = 0;
	var uLocal_856 = 0;
	var uLocal_857 = 0;
	var uLocal_858 = 0;
	var uLocal_859 = 0;
	var uLocal_860 = 0;
	var uLocal_861 = 0;
	var uLocal_862 = 0;
	var uLocal_863 = 0;
	var uLocal_864 = 0;
	var uLocal_865 = 0;
	var uLocal_866 = 0;
	var uLocal_867 = 0;
	var uLocal_868 = 0;
	var uLocal_869 = 0;
	var uLocal_870 = 0;
	var uLocal_871 = 0;
	var uLocal_872 = 0;
	var uLocal_873 = 0;
	var uLocal_874 = 0;
	var uLocal_875 = 0;
	var uLocal_876 = 0;
	var uLocal_877 = 0;
	var uLocal_878 = 0;
	var uLocal_879 = 0;
	var uLocal_880 = 0;
	var uLocal_881 = 0;
	var uLocal_882 = 0;
	var uLocal_883 = 0;
	var uLocal_884 = 0;
	var uLocal_885 = 0;
	var uLocal_886 = 0;
	var uLocal_887 = 0;
	var uLocal_888 = 0;
	var uLocal_889 = 0;
	var uLocal_890 = 0;
	var uLocal_891 = 0;
	var uLocal_892 = 0;
	var uLocal_893 = 0;
	var uLocal_894 = 0;
	var uLocal_895 = 0;
	var uLocal_896 = 0;
	var uLocal_897 = 0;
	var uLocal_898 = 0;
	var uLocal_899 = 0;
	var uLocal_900 = 0;
	var uLocal_901 = 0;
	var uLocal_902 = 0;
	var uLocal_903 = 0;
	var uLocal_904 = 0;
	var uLocal_905 = 0;
	var uLocal_906 = 0;
	var uLocal_907 = 0;
	var uLocal_908 = 0;
	var uLocal_909 = 0;
	var uLocal_910 = 0;
	var uLocal_911 = 0;
	var uLocal_912 = 0;
	var uLocal_913 = 0;
	var uLocal_914 = 0;
	var uLocal_915 = 0;
	var uLocal_916 = 0;
	var uLocal_917 = 0;
	var uLocal_918 = 0;
	var uLocal_919 = 0;
	var uLocal_920 = 0;
	var uLocal_921 = 0;
	var uLocal_922 = 0;
	var uLocal_923 = 0;
	var uLocal_924 = 0;
	var uLocal_925 = 0;
	var uLocal_926 = 0;
	var uLocal_927 = 0;
	var uLocal_928 = 0;
	var uLocal_929 = 0;
	var uLocal_930 = 0;
	var uLocal_931 = 0;
	var uLocal_932 = 0;
	var uLocal_933 = 0;
	var uLocal_934 = 0;
	var uLocal_935 = 0;
	var uLocal_936 = 0;
	var uLocal_937 = 0;
	var uLocal_938 = 0;
	var uLocal_939 = 0;
	var uLocal_940 = 0;
	var uLocal_941 = 0;
	var uLocal_942 = 0;
	var uLocal_943 = 0;
	var uLocal_944 = 0;
	var uLocal_945 = 0;
	var uLocal_946 = 0;
	var uLocal_947 = 0;
	var uLocal_948 = 0;
	var uLocal_949 = 0;
	var uLocal_950 = 0;
	var uLocal_951 = 0;
	var uLocal_952 = 0;
	var uLocal_953 = 0;
	var uLocal_954 = 0;
	var uLocal_955 = 0;
	var uLocal_956 = 0;
	var uLocal_957 = 0;
	var uLocal_958 = 0;
	var uLocal_959 = 0;
	var uLocal_960 = 0;
	var uLocal_961 = 0;
	var uLocal_962 = 0;
	var uLocal_963 = 0;
	var uLocal_964 = 0;
	var uLocal_965 = 0;
	var uLocal_966 = 0;
	var uLocal_967 = 0;
	var uLocal_968 = 0;
	var uLocal_969 = 0;
	var uLocal_970 = 0;
	var uLocal_971 = 0;
	var uLocal_972 = 0;
	var uLocal_973 = 0;
	var uLocal_974 = 0;
	var uLocal_975 = 0;
	var uLocal_976 = 0;
	var uLocal_977 = 0;
	var uLocal_978 = 0;
	var uLocal_979 = 0;
	var uLocal_980 = 0;
	var uLocal_981 = 0;
	var uLocal_982 = 0;
	var uLocal_983 = 0;
	var uLocal_984 = 0;
	var uLocal_985 = 0;
	var uLocal_986 = 0;
	var uLocal_987 = 0;
	var uLocal_988 = 0;
	var uLocal_989 = 0;
	var uLocal_990 = 0;
	var uLocal_991 = 0;
	var uLocal_992 = 0;
	var uLocal_993 = 0;
	var uLocal_994 = 0;
	var uLocal_995 = 0;
	var uLocal_996 = 0;
	var uLocal_997 = 0;
	var uLocal_998 = 0;
	var uLocal_999 = 0;
	var uLocal_1000 = 0;
	var uLocal_1001 = 0;
	var uLocal_1002 = 0;
	var uLocal_1003 = 0;
	var uLocal_1004 = 0;
	var uLocal_1005 = 0;
	var uLocal_1006 = 0;
	var uLocal_1007 = 0;
	var uLocal_1008 = 0;
	var uLocal_1009 = 0;
	var uLocal_1010 = 0;
	var uLocal_1011 = 0;
	var uLocal_1012 = 0;
	var uLocal_1013 = 0;
	var uLocal_1014 = 0;
	var uLocal_1015 = 0;
	var uLocal_1016 = 0;
	var uLocal_1017 = 0;
	var uLocal_1018 = 0;
	var uLocal_1019 = 0;
	var uLocal_1020 = 0;
	var uLocal_1021 = 0;
	var uLocal_1022 = 0;
	var uLocal_1023 = 100;
	var uLocal_1024 = 0;
	var uLocal_1025 = 0;
	var uLocal_1026 = 0;
	var uLocal_1027 = 0;
	var uLocal_1028 = 0;
	var uLocal_1029 = 0;
	var uLocal_1030 = 0;
	var uLocal_1031 = 0;
	var uLocal_1032 = 0;
	var uLocal_1033 = 0;
	var uLocal_1034 = 0;
	var uLocal_1035 = 0;
	var uLocal_1036 = 0;
	var uLocal_1037 = 0;
	var uLocal_1038 = 0;
	var uLocal_1039 = 0;
	var uLocal_1040 = 0;
	var uLocal_1041 = 0;
	var uLocal_1042 = 0;
	var uLocal_1043 = 0;
	var uLocal_1044 = 0;
	var uLocal_1045 = 0;
	var uLocal_1046 = 0;
	var uLocal_1047 = 0;
	var uLocal_1048 = 0;
	var uLocal_1049 = 0;
	var uLocal_1050 = 0;
	var uLocal_1051 = 0;
	var uLocal_1052 = 0;
	var uLocal_1053 = 0;
	var uLocal_1054 = 0;
	var uLocal_1055 = 0;
	var uLocal_1056 = 0;
	var uLocal_1057 = 0;
	var uLocal_1058 = 0;
	var uLocal_1059 = 0;
	var uLocal_1060 = 0;
	var uLocal_1061 = 0;
	var uLocal_1062 = 0;
	var uLocal_1063 = 0;
	var uLocal_1064 = 0;
	var uLocal_1065 = 0;
	var uLocal_1066 = 0;
	var uLocal_1067 = 0;
	var uLocal_1068 = 0;
	var uLocal_1069 = 0;
	var uLocal_1070 = 0;
	var uLocal_1071 = 0;
	var uLocal_1072 = 0;
	var uLocal_1073 = 0;
	var uLocal_1074 = 0;
	var uLocal_1075 = 0;
	var uLocal_1076 = 0;
	var uLocal_1077 = 0;
	var uLocal_1078 = 0;
	var uLocal_1079 = 0;
	var uLocal_1080 = 0;
	var uLocal_1081 = 0;
	var uLocal_1082 = 0;
	var uLocal_1083 = 0;
	var uLocal_1084 = 0;
	var uLocal_1085 = 0;
	var uLocal_1086 = 0;
	var uLocal_1087 = 0;
	var uLocal_1088 = 0;
	var uLocal_1089 = 0;
	var uLocal_1090 = 0;
	var uLocal_1091 = 0;
	var uLocal_1092 = 0;
	var uLocal_1093 = 0;
	var uLocal_1094 = 0;
	var uLocal_1095 = 0;
	var uLocal_1096 = 0;
	var uLocal_1097 = 0;
	var uLocal_1098 = 0;
	var uLocal_1099 = 0;
	var uLocal_1100 = 0;
	var uLocal_1101 = 0;
	var uLocal_1102 = 0;
	var uLocal_1103 = 0;
	var uLocal_1104 = 0;
	var uLocal_1105 = 0;
	var uLocal_1106 = 0;
	var uLocal_1107 = 0;
	var uLocal_1108 = 0;
	var uLocal_1109 = 0;
	var uLocal_1110 = 0;
	var uLocal_1111 = 0;
	var uLocal_1112 = 0;
	var uLocal_1113 = 0;
	var uLocal_1114 = 0;
	var uLocal_1115 = 0;
	var uLocal_1116 = 0;
	var uLocal_1117 = 0;
	var uLocal_1118 = 0;
	var uLocal_1119 = 0;
	var uLocal_1120 = 0;
	var uLocal_1121 = 0;
	var uLocal_1122 = 0;
	var uLocal_1123 = 0;
	var uLocal_1124 = 0;
	var uLocal_1125 = 0;
	var uLocal_1126 = 0;
	var uLocal_1127 = 0;
	var uLocal_1128 = 0;
	var uLocal_1129 = 0;
	var uLocal_1130 = 0;
	var uLocal_1131 = 0;
	var uLocal_1132 = 0;
	var uLocal_1133 = 0;
	var uLocal_1134 = 0;
	var uLocal_1135 = 0;
	var uLocal_1136 = 0;
	var uLocal_1137 = 0;
	var uLocal_1138 = 0;
	var uLocal_1139 = 0;
	var uLocal_1140 = 0;
	var uLocal_1141 = 0;
	var uLocal_1142 = 0;
	var uLocal_1143 = 0;
	var uLocal_1144 = 0;
	var uLocal_1145 = 0;
	var uLocal_1146 = 0;
	var uLocal_1147 = 0;
	var uLocal_1148 = 0;
	var uLocal_1149 = 0;
	var uLocal_1150 = 0;
	var uLocal_1151 = 0;
	var uLocal_1152 = 0;
	var uLocal_1153 = 0;
	var uLocal_1154 = 0;
	var uLocal_1155 = 0;
	var uLocal_1156 = 0;
	var uLocal_1157 = 0;
	var uLocal_1158 = 0;
	var uLocal_1159 = 0;
	var uLocal_1160 = 0;
	var uLocal_1161 = 0;
	var uLocal_1162 = 0;
	var uLocal_1163 = 0;
	var uLocal_1164 = 0;
	var uLocal_1165 = 0;
	var uLocal_1166 = 0;
	var uLocal_1167 = 0;
	var uLocal_1168 = 0;
	var uLocal_1169 = 0;
	var uLocal_1170 = 0;
	var uLocal_1171 = 0;
	var uLocal_1172 = 0;
	var uLocal_1173 = 0;
	var uLocal_1174 = 0;
	var uLocal_1175 = 0;
	var uLocal_1176 = 0;
	var uLocal_1177 = 0;
	var uLocal_1178 = 0;
	var uLocal_1179 = 0;
	var uLocal_1180 = 0;
	var uLocal_1181 = 0;
	var uLocal_1182 = 0;
	var uLocal_1183 = 0;
	var uLocal_1184 = 0;
	var uLocal_1185 = 0;
	var uLocal_1186 = 0;
	var uLocal_1187 = 0;
	var uLocal_1188 = 0;
	var uLocal_1189 = 0;
	var uLocal_1190 = 0;
	var uLocal_1191 = 0;
	var uLocal_1192 = 0;
	var uLocal_1193 = 0;
	var uLocal_1194 = 0;
	var uLocal_1195 = 0;
	var uLocal_1196 = 0;
	var uLocal_1197 = 0;
	var uLocal_1198 = 0;
	var uLocal_1199 = 0;
	var uLocal_1200 = 0;
	var uLocal_1201 = 0;
	var uLocal_1202 = 0;
	var uLocal_1203 = 0;
	var uLocal_1204 = 0;
	var uLocal_1205 = 0;
	var uLocal_1206 = 0;
	var uLocal_1207 = 0;
	var uLocal_1208 = 0;
	var uLocal_1209 = 0;
	var uLocal_1210 = 0;
	var uLocal_1211 = 0;
	var uLocal_1212 = 0;
	var uLocal_1213 = 0;
	var uLocal_1214 = 0;
	var uLocal_1215 = 0;
	var uLocal_1216 = 0;
	var uLocal_1217 = 0;
	var uLocal_1218 = 0;
	var uLocal_1219 = 0;
	var uLocal_1220 = 0;
	var uLocal_1221 = 0;
	var uLocal_1222 = 0;
	var uLocal_1223 = 0;
	var uLocal_1224 = 0;
	var uLocal_1225 = 0;
	var uLocal_1226 = 0;
	var uLocal_1227 = 0;
	var uLocal_1228 = 0;
	var uLocal_1229 = 0;
	var uLocal_1230 = 0;
	var uLocal_1231 = 0;
	var uLocal_1232 = 0;
	var uLocal_1233 = 0;
	var uLocal_1234 = 0;
	var uLocal_1235 = 0;
	var uLocal_1236 = 0;
	var uLocal_1237 = 0;
	var uLocal_1238 = 0;
	var uLocal_1239 = 0;
	var uLocal_1240 = 0;
	var uLocal_1241 = 0;
	var uLocal_1242 = 0;
	var uLocal_1243 = 0;
	var uLocal_1244 = 0;
	var uLocal_1245 = 0;
	var uLocal_1246 = 0;
	var uLocal_1247 = 0;
	var uLocal_1248 = 0;
	var uLocal_1249 = 0;
	var uLocal_1250 = 0;
	var uLocal_1251 = 0;
	var uLocal_1252 = 0;
	var uLocal_1253 = 0;
	var uLocal_1254 = 0;
	var uLocal_1255 = 0;
	var uLocal_1256 = 0;
	var uLocal_1257 = 0;
	var uLocal_1258 = 0;
	var uLocal_1259 = 0;
	var uLocal_1260 = 0;
	var uLocal_1261 = 0;
	var uLocal_1262 = 0;
	var uLocal_1263 = 0;
	var uLocal_1264 = 0;
	var uLocal_1265 = 0;
	var uLocal_1266 = 0;
	var uLocal_1267 = 0;
	var uLocal_1268 = 0;
	var uLocal_1269 = 0;
	var uLocal_1270 = 0;
	var uLocal_1271 = 0;
	var uLocal_1272 = 0;
	var uLocal_1273 = 0;
	var uLocal_1274 = 0;
	var uLocal_1275 = 0;
	var uLocal_1276 = 0;
	var uLocal_1277 = 0;
	var uLocal_1278 = 0;
	var uLocal_1279 = 0;
	var uLocal_1280 = 0;
	var uLocal_1281 = 0;
	var uLocal_1282 = 0;
	var uLocal_1283 = 0;
	var uLocal_1284 = 0;
	var uLocal_1285 = 0;
	var uLocal_1286 = 0;
	var uLocal_1287 = 0;
	var uLocal_1288 = 0;
	var uLocal_1289 = 0;
	var uLocal_1290 = 0;
	var uLocal_1291 = 0;
	var uLocal_1292 = 0;
	var uLocal_1293 = 0;
	var uLocal_1294 = 0;
	var uLocal_1295 = 0;
	var uLocal_1296 = 0;
	var uLocal_1297 = 0;
	var uLocal_1298 = 0;
	var uLocal_1299 = 0;
	var uLocal_1300 = 0;
	var uLocal_1301 = 0;
	var uLocal_1302 = 0;
	var uLocal_1303 = 0;
	var uLocal_1304 = 0;
	var uLocal_1305 = 0;
	var uLocal_1306 = 0;
	var uLocal_1307 = 0;
	var uLocal_1308 = 0;
	var uLocal_1309 = 0;
	var uLocal_1310 = 0;
	var uLocal_1311 = 0;
	var uLocal_1312 = 0;
	var uLocal_1313 = 0;
	var uLocal_1314 = 0;
	var uLocal_1315 = 0;
	var uLocal_1316 = 0;
	var uLocal_1317 = 0;
	var uLocal_1318 = 0;
	var uLocal_1319 = 0;
	var uLocal_1320 = 0;
	var uLocal_1321 = 0;
	var uLocal_1322 = 0;
	var uLocal_1323 = 0;
	Vector3 fLocal_1324 = 0;
	float fLocal_1325 = 0;
	float fLocal_1326 = 0;
	int iLocal_1327 = 0;
	int iLocal_1328 = 0;
	char*[] sLocal_1329 = new char*[2];
	int[] iLocal_1332 = new int[2];
	int[] iLocal_1335 = new int[2];
	int iLocal_1338 = 0;
	vector3 vLocal_1339 = 0;
	vector3 vLocal_1342 = 0;
	Vector3 fLocal_1345 = 0;
	vector3 vLocal_1346 = 0;
	int iLocal_1349 = 0;
	int iLocal_1350 = 0;
	int iLocal_1351 = 0;
	int iLocal_1352 = 0;
	int iLocal_1353 = 0;
	int iLocal_1354 = 0;
	int iLocal_1355 = 0;
	int iLocal_1356 = 0;
	int iLocal_1357 = 0;
	struct<6> Local_1358 = 0;
	int iLocal_1364 = 0;
	int iLocal_1365 = 0;
	int iLocal_1366 = 0;
	int iLocal_1367 = 0;
	int iLocal_1368 = 0;
	int iLocal_1369 = 4;
	var uLocal_1370 = 0;
	var uLocal_1371 = 0;
	var uLocal_1372 = 0;
	var uLocal_1373 = 0;
	var uLocal_1374 = 0;
	var uLocal_1375 = 0;
	var uLocal_1376 = 0;
	var uLocal_1377 = 0;
	var uLocal_1378 = 0;
	var uLocal_1379 = 0;
	var uLocal_1380 = 0;
	var uLocal_1381 = 0;
	var uLocal_1382 = 0;
	var uLocal_1383 = 0;
	var uLocal_1384 = 0;
	var uLocal_1385 = 0;
	var uLocal_1386 = 0;
	var uLocal_1387 = 0;
	var uLocal_1388 = 0;
	var uLocal_1389 = 0;
	int iLocal_1390 = 5;
	var uLocal_1391 = 0;
	var uLocal_1392 = 0;
	var uLocal_1393 = 0;
	var uLocal_1394 = 0;
	var uLocal_1395 = 0;
	var uLocal_1396 = 0;
	var uLocal_1397 = 0;
	var uLocal_1398 = 0;
	var uLocal_1399 = 0;
	var uLocal_1400 = 0;
	var uLocal_1401 = 0;
	var uLocal_1402 = 0;
	var uLocal_1403 = 0;
	var uLocal_1404 = 0;
	var uLocal_1405 = 0;
	var uLocal_1406 = 0;
	var uLocal_1407 = 0;
	var uLocal_1408 = 0;
	var uLocal_1409 = 0;
	var uLocal_1410 = 0;
	var uLocal_1411 = 0;
	var uLocal_1412 = 0;
	var uLocal_1413 = 0;
	var uLocal_1414 = 0;
	var uLocal_1415 = 0;
	int iLocal_1416 = 0;
	int iLocal_1417 = 0;
	int iLocal_1418 = 0;
	int iLocal_1419 = 0;
	int iLocal_1420 = 0;
	int iLocal_1421 = 0;
	int iLocal_1422 = 0;
	int iLocal_1423 = 0;
	int iLocal_1424 = 0;
	int iLocal_1425 = 0;
	int iLocal_1426 = 0;
	int iLocal_1427 = 0;
	int iLocal_1428 = 0;
	int iLocal_1429 = 0;
	int iLocal_1430 = 0;
	int iLocal_1431 = 0;
	int iLocal_1432 = 0;
	int iLocal_1433 = 0;
	int iLocal_1434 = 0;
	int iLocal_1435 = 0;
#endregion

void main()
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<6> Var5;
	int iVar11;
	
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	iLocal_46 = _0x4A9923385BDB9DAD();
	iLocal_47 = _get_blip_info_id_iterator();
	vLocal_108 = {1397.882f, 3594.626f, 33.9272f};
	fLocal_111 = 199.4271f;
	vLocal_112 = {-132.2826f, 6498.744f, 28.6281f};
	fLocal_115 = -102.1659f;
	vLocal_116 = {-124.71f, 6504.69f, 28.63f};
	vLocal_119 = {-88.9369f, 6418.164f, 30.4645f};
	fLocal_122 = 318.126f;
	vLocal_123 = {-348.9985f, 6194.592f, 30.7398f};
	fLocal_126 = 134.3799f;
	vLocal_127 = {1393.052f, 3613.763f, 37.9419f};
	fLocal_130 = 88.1351f;
	vLocal_131 = {-131.6681f, 6500.699f, 28.628f};
	fLocal_134 = 214.1093f;
	vLocal_135 = {1396.415f, 3610.146f, 37.9419f};
	fLocal_138 = 23.6499f;
	vLocal_139 = {-144.3017f, 6359.261f, 30.4905f};
	fLocal_142 = 29.4514f;
	vLocal_143 = {-113.86f, 6463.06f, 34.1f};
	vLocal_146 = {0f, 0f, -45f};
	vLocal_149 = {-131.0836f, 6445.028f, 30.45136f};
	vLocal_152 = {-111.19f, 6462.28f, 32.08f};
	vLocal_155 = {-105.6964f, 6467.58f, 31.6343f};
	vLocal_158 = {-110.3759f, 6482.127f, 33.93835f - 0.23f};
	vLocal_161 = {0f, 0f, -135f};
	iLocal_251 = -1;
	iLocal_252 = -1;
	iLocal_253 = -1;
	iLocal_258 = 1;
	iLocal_267 = -1;
	vLocal_269 = {-66.02775f, 6432.555f, 29.62774f};
	vLocal_272 = {-101.9678f, 6396.955f, 52.85154f};
	fLocal_275 = 26.75f;
	sLocal_276 = "RBS1AUD";
	sLocal_277 = "RBsetup";
	iLocal_359 = -1;
	StringCopy(&cLocal_664, "", 24);
	sLocal_683 = "palsetupwalk";
	iLocal_686 = 5;
	fLocal_1326 = 100f;
	vLocal_1339 = {1391.68f, 3582.978f, 33.74656f};
	vLocal_1342 = {1430.258f, 3597.642f, 40.45911f};
	fLocal_1345 = 33f;
	vLocal_1346 = {1403.741f, 3593.747f, 33.8199f};
	if (has_force_cleanup_occurred(3))
	{
		func_768(37, 0);
		func_768(38, 0);
		func_766();
		func_765();
	}
	set_mission_flag(1);
	func_757();
	request_vehicle_asset(joaat("premier"), 3);
	while (true)
	{
		_0x208784099002BC30("M_ThePaletoScoreSetup", 0);
		if (iLocal_644)
		{
			iVar0 = 0;
			while (iVar0 <= 3)
			{
				if (does_entity_exist(iLocal_52[iVar0]) && !is_ped_injured(iLocal_52[iVar0]))
				{
					fVar1 = _0x8BFCEB5EA1B161B6() + 5f;
					if (vdist2(get_entity_coords(player_ped_id(), 0), get_entity_coords(iLocal_52[iVar0], 0)) < fVar1 * fVar1)
					{
						_0xAF66DCEE6609B148();
					}
				}
				iVar0++;
			}
		}
		if (!iLocal_233)
		{
			if (iLocal_48 != 13)
			{
				func_703(iLocal_48);
			}
			iLocal_233 = 1;
		}
		switch (iLocal_48)
		{
			case 0:
				func_410();
				break;
			
			case 1:
				func_377();
				func_374();
				break;
			
			case 2:
				func_360();
				break;
			
			case 3:
				func_354();
				func_374();
				break;
			
			case 4:
				func_353();
				break;
			
			case 5:
				func_345();
				func_374();
				break;
			
			case 6:
				func_299();
				break;
			
			case 7:
				func_298();
				func_178();
				if (is_entity_in_angled_area(player_ped_id(), -986.0042f, 5367.315f, 50.05532f, -1003.946f, 5402.259f, 39.60506f, 24.25f, 0, true, 0) || is_entity_in_angled_area(player_ped_id(), 1511.873f, 6236.63f, -81.14642f, 1527.35f, 6704.018f, 71.62516f, 215.5f, 0, true, 0))
				{
					if (func_177() == 0)
					{
						func_88("CBH_COPFAIL");
					}
					else
					{
						func_88("CBH_COPFAILT");
					}
				}
				break;
			
			case 8:
				func_83();
				break;
			
			case 11:
				func_77();
				break;
			
			case 9:
				func_27();
				break;
			
			case 13:
				break;
			
			case 10:
				if (get_game_timer() - iLocal_266 > 1000)
				{
					if (!Local_584.f_9)
					{
						Local_584.f_9 = 1;
					}
					func_25();
					clear_prints();
				}
				if (get_game_timer() - iLocal_266 > 2000)
				{
					if (get_player_wanted_level(player_id()) < 2)
					{
						set_player_wanted_level(player_id(), 2, 0);
						set_player_wanted_level_now(player_id(), 0);
					}
				}
				if (get_game_timer() - iLocal_266 > 500)
				{
					iVar2 = 0;
					while (iVar2 < iLocal_52)
					{
						if (!is_ped_injured(iLocal_52[iVar2]) && !is_ped_fleeing(iLocal_52[iVar2]))
						{
							if (get_game_timer() - iLocal_266 > 500 + get_random_int_in_range(false, 1500))
							{
								clear_ped_tasks(iLocal_52[iVar2]);
								task_smart_flee_ped(iLocal_52[iVar2], player_ped_id(), 200f, 200000, 0, 0);
							}
						}
						iVar2++;
					}
				}
				if (get_game_timer() - iLocal_266 > 3500)
				{
					func_88("CBH_BNKFAIL");
				}
				break;
		}
		if (func_24())
		{
			if (func_177() == 0)
			{
				func_88("CBH_BNKFAIL");
			}
			else
			{
				func_88("CBH_BNKFAILT");
			}
		}
		if (is_gameplay_hint_active())
		{
			if (!is_audio_scene_active("PS_1_FOCUS_ON_BANK"))
			{
				start_audio_scene("PS_1_FOCUS_ON_BANK");
			}
		}
		else if (is_audio_scene_active("PS_1_FOCUS_ON_BANK"))
		{
			stop_audio_scene("PS_1_FOCUS_ON_BANK");
		}
		func_22();
		func_21();
		if (does_entity_exist(iLocal_51))
		{
			if ((is_ped_injured(iLocal_51) || is_entity_dead(iLocal_51, 0)) || is_entity_on_fire(iLocal_51))
			{
				func_88("CBH_LESTDED");
			}
		}
		if (iLocal_48 < 7 || iLocal_48 == 8)
		{
			func_20();
			if (does_entity_exist(uLocal_313[2]))
			{
				if ((is_ped_injured(uLocal_313[2]) || is_entity_dead(uLocal_313[2], 0)) || is_entity_on_fire(uLocal_313[2]))
				{
					func_88("CMN_TDIED");
				}
			}
		}
		if (get_game_timer() - iLocal_1434 > 3000)
		{
			iVar3 = false;
			if (func_19(get_entity_coords(player_ped_id(), 1), &iVar3))
			{
				if (iVar3)
				{
					if (does_entity_exist(uLocal_313[2]) || does_entity_exist(iLocal_51))
					{
						if (does_entity_exist(uLocal_313[2]))
						{
							iVar4 = uLocal_313[2];
						}
						if (does_entity_exist(iLocal_51))
						{
							iVar4 = iLocal_51;
						}
						if (!is_ped_injured(iVar4))
						{
							if (func_18(iVar4, player_ped_id()) || ((!is_ped_in_any_vehicle(iVar4, 0) && !is_ped_in_any_vehicle(player_ped_id(), 0)) && vdist2(get_entity_coords(player_ped_id(), 1), get_entity_coords(iVar4, 1)) < 400f))
							{
								if (iLocal_1435 == 0)
								{
									StringCopy(&Var5, "RBS1_", 24);
									if (iVar4 == iLocal_51)
									{
										StringConCat(&Var5, "LCITY1", 24);
									}
									else
									{
										StringConCat(&Var5, "TCITY1", 24);
									}
									if (func_6(&Local_360, sLocal_276, &Var5, 8, 0, 0, 0))
									{
										iLocal_1435++;
									}
								}
								else if (iLocal_1435 == 1)
								{
									StringCopy(&Var5, "RBS1_", 24);
									if (iVar4 == iLocal_51)
									{
										StringConCat(&Var5, "LCITY2", 24);
									}
									else
									{
										StringConCat(&Var5, "TCITY2", 24);
									}
									if (func_6(&Local_360, sLocal_276, &Var5, 8, 0, 0, 0))
									{
										iLocal_1435++;
									}
								}
								else if (iLocal_1435 == 2)
								{
									func_88("CBH_CFAIL");
								}
							}
						}
					}
				}
			}
			iLocal_1434 = get_game_timer();
		}
		func_5();
		if (!iLocal_237)
		{
			if (func_3())
			{
				iVar11 = 0;
				while (iVar11 < iLocal_52)
				{
					if (!is_ped_injured(iLocal_52[iVar11]))
					{
						task_react_and_flee_ped(iLocal_52[iVar11], player_ped_id());
					}
					iVar11++;
				}
				iLocal_237 = true;
				Local_584.f_9 = 1;
				func_1();
				iLocal_266 = get_game_timer();
				iLocal_48 = 10;
			}
		}
		if (get_player_wanted_level(player_id()) > 0 && !iLocal_237)
		{
			if (iLocal_48 > 0 && iLocal_48 < 6)
			{
				func_83();
			}
		}
		if (is_vehicle_driveable(iLocal_67, 0))
		{
			if (iLocal_48 == 1)
			{
				if (!iLocal_240 && iLocal_254 > 1)
				{
					if (!is_ped_injured(uLocal_313[2]))
					{
						if (!is_ped_in_vehicle(uLocal_313[2], iLocal_67, 0) && get_script_task_status(uLocal_313[2], -1794415470) != 1)
						{
							task_enter_vehicle(uLocal_313[2], iLocal_67, -1, false, 2f, 1, 0);
						}
					}
				}
			}
			else if ((iLocal_48 == 3 || iLocal_48 == 5) || iLocal_48 == 6)
			{
				if (!is_ped_injured(uLocal_313[2]))
				{
					if (!is_ped_in_vehicle(uLocal_313[2], iLocal_67, 0) && get_script_task_status(uLocal_313[2], -1794415470) != 1)
					{
						task_enter_vehicle(uLocal_313[2], iLocal_67, -1, 2, 2f, 1, 0);
					}
				}
				if (!is_ped_injured(iLocal_51))
				{
					if (!is_ped_in_vehicle(iLocal_51, iLocal_67, 0) && get_script_task_status(iLocal_51, -1794415470) != 1)
					{
						task_enter_vehicle(iLocal_51, iLocal_67, -1, false, 2f, 1, 0);
					}
				}
			}
		}
		if (is_vehicle_driveable(iLocal_67, 0))
		{
			if (!is_ped_injured(iLocal_51))
			{
				if (is_ped_in_vehicle(iLocal_51, iLocal_67, 0))
				{
					set_ped_can_play_ambient_base_anims(iLocal_51, 0);
				}
			}
			if (!is_ped_injured(uLocal_313[2]))
			{
				if (is_ped_in_vehicle(uLocal_313[2], iLocal_67, 0))
				{
					set_ped_can_play_ambient_base_anims(uLocal_313[2], 0);
				}
			}
		}
		if (iLocal_234)
		{
			draw_debug_text_2d("SKIP IS ACTIVE", 0.9f, 0.02f, 0f, 0, 0, 255, 255);
		}
		wait(false);
	}
}

void func_1()
{
	func_2(&iLocal_60);
	func_2(&iLocal_61);
	func_2(&iLocal_59);
	func_2(&iLocal_58);
	func_2(&iLocal_58);
	func_2(&iLocal_62);
	func_2(&iLocal_63);
}

void func_2(int iParam0)
{
	if (does_blip_exist(*iParam0))
	{
		remove_blip(iParam0);
	}
}

int func_3()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	var uVar5;
	int iVar6;
	
	iVar0 = 0;
	if (iLocal_48 == 1)
	{
		if (Local_584.f_9)
		{
			iVar0 = 1;
		}
	}
	if (func_24())
	{
		if (is_ped_armed(player_ped_id(), 6))
		{
			iVar0 = 1;
		}
		if (is_player_targetting_anything(player_id()) && is_ped_in_melee_combat(player_ped_id()))
		{
			iVar0 = 1;
		}
		if (is_entity_in_angled_area(player_ped_id(), -109.2893f, 6468.679f, 30.54522f, -114.6985f, 6474.16f, 33.92928f, 1.5f, 0, true, 0))
		{
			iVar0 = 1;
		}
	}
	if (iLocal_48 < 6)
	{
		iVar1 = 0;
		while (iVar1 < iLocal_52)
		{
			if (!is_ped_injured(iLocal_52[iVar1]))
			{
				vVar2 = {get_entity_coords(iLocal_52[iVar1], 1)};
				if (is_bullet_in_area(vVar2, 2f, 1))
				{
					iVar0 = 1;
				}
				if (((((((is_explosion_in_sphere(10, vVar2, 20f) || is_explosion_in_sphere(7, vVar2, 20f)) || is_explosion_in_sphere(0, vVar2, 20f)) || is_explosion_in_sphere(1, vVar2, 20f)) || is_explosion_in_sphere(3, vVar2, 20f)) || is_explosion_in_sphere(21, vVar2, 20f)) || is_explosion_in_sphere(25, vVar2, 20f)) || is_explosion_in_sphere(4, vVar2, 20f))
				{
					iVar0 = 1;
				}
				if (is_ped_injured(iLocal_52[iVar1]))
				{
					iVar0 = 1;
				}
				else if (is_ped_ragdoll(iLocal_52[iVar1]) || is_ped_fleeing(iLocal_52[iVar1]))
				{
					iVar0 = 1;
				}
			}
			iVar1++;
		}
	}
	if (!func_4())
	{
		get_current_ped_weapon(player_ped_id(), &uVar5, 1);
		if (is_ped_shooting(player_ped_id()))
		{
			iVar0 = 1;
		}
	}
	if (is_ped_in_any_vehicle(player_ped_id(), 0))
	{
		iVar6 = get_vehicle_ped_is_in(player_ped_id(), 0);
	}
	else
	{
		iVar6 = get_players_last_vehicle();
	}
	if (does_entity_exist(iVar6))
	{
		if (is_entity_in_angled_area(iVar6, -107.3918f, 6466.308f, 30.63434f, -112.6943f, 6461.029f, 33.96836f, 4.75f, 0, true, 0))
		{
			iVar0 = 1;
		}
	}
	if ((get_player_wanted_level(player_id()) > 0 && Local_584.f_9) && iLocal_48 < 7)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_4()
{
	return ((!is_entity_in_angled_area(player_ped_id(), -120.7033f, 6486.524f, 35.46841f, -141.6632f, 6466.175f, 30.68864f, 9.25f, 0, true, 0) && !is_entity_in_angled_area(player_ped_id(), -98.36755f, 6455.173f, 42.13557f, -122.3198f, 6479.52f, 30.4585f, 45.75f, 0, true, 0)) && !is_entity_in_angled_area(player_ped_id(), -112.9958f, 6484.136f, 35.46868f, -124.8357f, 6485.98f, 30.29035f, 8f, 0, true, 0));
}

void func_5()
{
	if (is_entity_in_angled_area(player_ped_id(), 1398.831f, 3609.659f, 37.9892f, 1387.375f, 3605.516f, 41.0859f, 15.75f, 0, true, 0))
	{
		if (!does_particle_fx_looped_exist(iLocal_84))
		{
			request_ptfx_asset();
			if (has_ptfx_asset_loaded())
			{
				iLocal_84 = start_particle_fx_looped_at_coord("cs_rbhs_int_delap_dust", 1392.172f, 3604.299f, 39.19458f, 0f, 0f, 0f, 1f, 0, 0, 0, 0);
			}
		}
	}
	else if (does_particle_fx_looped_exist(iLocal_84))
	{
		stop_particle_fx_looped(iLocal_84, 0);
		remove_ptfx_asset();
	}
}

int func_6(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_17(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15719 = 0;
	Global_15721 = 0;
	Global_15726 = 0;
	Global_16703 = 0;
	Global_16705 = 0;
	Global_16709 = 0;
	Global_2621441 = 0;
	return func_7(sParam2, iParam3, 0);
}

bool func_7(char* sParam0, int iParam1, int iParam2)
{
	Global_15713 = 0;
	if (Global_15712 == 0 || Global_15714 == 2)
	{
		if (Global_15712 != 0)
		{
			if (iParam1 > Global_15714)
			{
				if (Global_15719 == 0)
				{
					stop_scripted_conversation(false);
					Global_14413.f_1 = 3;
					Global_15712 = 0;
					Global_15713 = 1;
					Global_15765 = 0;
					Global_15708 = 0;
					Global_15709 = 0;
					Global_15723 = 0;
					Global_15722 = 0;
					Global_14412 = 0;
				}
				else
				{
					func_16();
					return false;
				}
			}
			else
			{
				return false;
			}
		}
		if (is_scripted_conversation_ongoing())
		{
			return false;
		}
		if (func_15(8, -1))
		{
			return false;
		}
		Global_15788 = {Global_15782};
		func_14();
		Global_15001 = {Global_15166};
		Global_15718 = Global_15719;
		Global_15725 = Global_15726;
		Global_2621442 = Global_2621441;
		Global_15727 = {Global_15743};
		Global_15720 = Global_15721;
		Global_16702 = Global_16703;
		Global_16710 = {Global_16716};
		Global_16704 = Global_16705;
		Global_16706 = Global_16707;
		Global_16708 = Global_16709;
		Global_15331.f_370 = Global_16701;
		Global_15331.f_368 = Global_16699;
		Global_15331.f_369 = Global_16700;
		Global_15708 = Global_15709;
		if (Global_15718)
		{
			clear_bit(&Global_2283, 20);
			clear_bit(&Global_2284, 17);
			clear_bit(&Global_2285, false);
			if (iParam2)
			{
				func_12();
				if (Global_3088[Global_14413 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return false;
					}
				}
				if (Global_14413.f_1 > 3)
				{
					return false;
				}
			}
			if (Global_14379 == 1)
			{
				return false;
			}
			if (is_player_playing(player_id()))
			{
				if (is_ped_in_melee_combat(player_ped_id()))
				{
					return false;
				}
				if (func_11())
				{
					return false;
				}
				if (is_ped_sprinting(player_ped_id()))
				{
					return false;
				}
				if (is_ped_ragdoll(player_ped_id()))
				{
					return false;
				}
				if (is_ped_in_parachute_free_fall(player_ped_id()))
				{
					return false;
				}
				if (get_is_ped_gadget_equipped(player_ped_id(), joaat("gadget_parachute")))
				{
					return false;
				}
				if (!Global_69489)
				{
					if (is_entity_in_water(player_ped_id()))
					{
						return false;
					}
					if (is_player_climbing(player_id()))
					{
						return false;
					}
					if (is_ped_planting_bomb(player_ped_id()))
					{
						return false;
					}
					if (is_special_ability_active(player_id()))
					{
						return false;
					}
				}
			}
			if (func_10())
			{
				return false;
			}
			else
			{
				switch (Global_14413.f_1)
				{
					case 7:
						return false;
						break;
					
					case 8:
						return false;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (is_bit_set(Global_2283, 9))
				{
					return false;
				}
			}
			func_9();
			Global_15722 = iParam2;
		}
		Global_15714 = iParam1;
		StringCopy(&Global_15331, sParam0, 24);
		Global_14578 = 0;
		func_8();
		return true;
	}
	if (Global_15712 == 5)
	{
		return false;
	}
	if (iParam1 < Global_15714 || iParam1 == Global_15714)
	{
		return false;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_16();
	}
	return false;
}

void func_8()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14580[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	stop_scripted_conversation(false);
	Global_15712 = 1;
}

void func_9()
{
	Global_15765 = Global_15764;
	Global_15759 = Global_15760;
	Global_15806 = {Global_15794};
	Global_15812 = {Global_15800};
	Global_15767 = Global_15766;
	Global_15836 = {Global_15818};
	Global_15842 = {Global_15824};
	Global_15848 = {Global_15830};
	Global_15854 = {Global_15860};
	Global_1598 = Global_1599;
	Global_1600 = Global_1601;
	Global_15723 = Global_15724;
	Global_15725 = Global_15726;
	Global_15727 = {Global_15743};
	Global_15716 = Global_15717;
	Global_16728 = 0;
	Global_15761 = 0;
	Global_15762 = 0;
	clear_bit(&Global_2284, 16);
}

bool func_10()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return true;
	}
	return false;
}

bool func_11()
{
	int iVar0;
	int iVar1;
	
	if (Global_69489)
	{
		iVar0 = 0;
		get_current_ped_weapon(player_ped_id(), &iVar1, 1);
		if (is_player_playing(player_id()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (is_aim_cam_active() && iVar0 == 1)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (is_player_playing(player_id()))
	{
		if (get_ped_config_flag(player_ped_id(), 78, 1))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	return true;
}

void func_12()
{
	if (func_13(14))
	{
		if (!is_entity_dead(player_ped_id(), 0))
		{
			if (get_entity_model(player_ped_id()) == Global_101154.f_32575[0 /*29*/])
			{
				Global_14413 = 0;
			}
			else if (get_entity_model(player_ped_id()) == Global_101154.f_32575[1 /*29*/])
			{
				Global_14413 = 1;
			}
			else if (get_entity_model(player_ped_id()) == Global_101154.f_32575[2 /*29*/])
			{
				Global_14413 = 2;
			}
			else
			{
				Global_14413 = 0;
			}
		}
	}
	else
	{
		Global_14413 = func_177();
		if (Global_14413 == 145)
		{
			Global_14413 = 3;
		}
		if (Global_69489)
		{
			Global_14413 = 3;
		}
		if (Global_14413 > 3)
		{
			Global_14413 = 3;
		}
	}
}

int func_13(int iParam0)
{
	return Global_35711 == iParam0;
}

void func_14()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15001[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15001[iVar0 /*10*/].f_1), "", 24);
		Global_15001[iVar0 /*10*/].f_7 = 0;
		Global_15001[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15001.f_161 = -99;
	Global_15001.f_162 = {0f, 0f, 0f};
}

int func_15(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1338622.f_203[iParam1];
			}
			break;
	}
	return is_bit_set(Global_1338622.f_949, iParam0);
}

void func_16()
{
	restart_scripted_conversation();
	Global_16723 = 0;
	if ((is_mobile_phone_call_ongoing() || Global_14413.f_1 == 9) || Global_14412 == 1)
	{
		stop_scripted_conversation(false);
		Global_15712 = 6;
		Global_14413.f_1 = 3;
		return;
	}
	if (is_scripted_conversation_ongoing())
	{
		stop_scripted_conversation(true);
		Global_15712 = 6;
		return;
	}
}

void func_17(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15166 = {*uParam0};
	Global_1599 = iParam1;
	StringCopy(&Global_15782, sParam2, 24);
	Global_16701 = iParam5;
	if (iParam3 == 0)
	{
		Global_16699 = 1;
		Global_16697 = 0;
	}
	else
	{
		Global_16699 = 0;
		Global_16697 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16700 = 1;
		Global_16698 = 0;
	}
	else
	{
		Global_16700 = 0;
		Global_16698 = 1;
	}
}

bool func_18(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!is_ped_injured(iParam0))
	{
		if (is_ped_in_any_vehicle(iParam0, 0))
		{
			iVar0 = get_vehicle_ped_is_in(iParam0, 0);
			if (is_vehicle_driveable(iVar0, 0))
			{
				if (!is_ped_injured(iParam1))
				{
					if (is_ped_in_vehicle(iParam1, iVar0, 0))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_19(struct<2> Param0, Vector3 fParam1, int iParam2)
{
	if (!(is_screen_faded_in() || is_screen_fading_in()))
	{
		return false;
	}
	if (Param0.f_1 < 400f)
	{
		if (Param0 < 1400f)
		{
			if (Param0 > -1900f)
			{
				if (Param0.f_1 > -3500f)
				{
					*iParam3 = 1;
					return true;
				}
			}
		}
	}
	if (Param0 < 1536.35f)
	{
		if (Param0.f_1 > 1016.18f)
		{
			if (Param0.f_1 < 1213.53f)
			{
				if (Param0 > 1278.08f)
				{
					*iParam3 = 0;
					return true;
				}
			}
		}
	}
	return false;
}

void func_20()
{
	if (does_entity_exist(iLocal_67))
	{
		if (is_vehicle_driveable(iLocal_67, 0))
		{
			if (((is_vehicle_stuck_timer_up(iLocal_67, 0, 7000) || is_vehicle_stuck_timer_up(iLocal_67, 3, 30000)) || is_vehicle_stuck_timer_up(iLocal_67, 2, 30000)) || is_vehicle_stuck_timer_up(iLocal_67, 1, 40000))
			{
				func_88("CBH_VEHSTUCK");
			}
		}
		else
		{
			func_88("CMN_GENDEST");
		}
	}
}

void func_21()
{
	if (!does_entity_exist(iLocal_641) || !does_entity_exist(iLocal_640))
	{
		if (vdist2(get_entity_coords(player_ped_id(), 1), vLocal_155) < pow(100f, 2f))
		{
			request_model(joaat("v_ilev_cbankvauldoor01"));
			if (has_model_loaded(joaat("v_ilev_cbankvauldoor01")))
			{
				if (!does_entity_exist(iLocal_641))
				{
					if (does_object_of_type_exist_at_coords(-104.6f, 6473.44f, 31.8f, 2f, joaat("v_ilev_cbankvauldoor01"), 0))
					{
						iLocal_641 = get_closest_object_of_type(-104.6f, 6473.44f, 31.8f, 2f, joaat("v_ilev_cbankvauldoor01"), 1, 0, 1);
						set_entity_visible(iLocal_641, false, 0);
					}
				}
				else
				{
					iLocal_640 = create_object_no_offset(joaat("v_ilev_cbankvauldoor01"), -104.6f, 6473.44f, 31.8f, 1, 1, 0);
					set_entity_rotation(iLocal_640, 0f, 0f, 45.72f, 2, 1);
					freeze_entity_position(iLocal_640, true);
				}
			}
		}
	}
	else if (vdist2(get_entity_coords(player_ped_id(), 1), vLocal_155) > pow(150f, 2f))
	{
		if (does_entity_exist(iLocal_641))
		{
			if (!is_entity_visible(iLocal_641))
			{
				set_entity_visible(iLocal_641, true, 0);
			}
			set_object_as_no_longer_needed(&iLocal_641);
		}
		if (does_entity_exist(iLocal_640))
		{
			delete_object(&iLocal_640);
		}
		set_model_as_no_longer_needed(joaat("v_ilev_cbankvauldoor01"));
	}
}

void func_22()
{
	if (!does_entity_exist(iLocal_65) || !does_entity_exist(Local_584))
	{
		if (vdist2(get_entity_coords(player_ped_id(), 1), vLocal_158) < pow(100f, 2f))
		{
			request_model(Local_584.f_7);
			request_ptfx_asset();
			if (has_model_loaded(Local_584.f_7))
			{
				if (!does_entity_exist(iLocal_65))
				{
					if (does_object_of_type_exist_at_coords(vLocal_158, 1f, joaat("prop_ld_alarm_01"), 0))
					{
						iLocal_65 = get_closest_object_of_type(vLocal_158, 1f, joaat("prop_ld_alarm_01"), 1, 0, 1);
						set_entity_visible(iLocal_65, false, 0);
						set_entity_collision(iLocal_65, false, 0);
					}
				}
				else
				{
					Local_584 = create_object(Local_584.f_7, vLocal_158, 1, true, false);
					set_entity_health(Local_584, 50);
					Local_584.f_14 = 50;
					set_entity_rotation(Local_584, vLocal_161, 2, 1);
				}
			}
		}
	}
	else
	{
		if (does_entity_exist(Local_584))
		{
			if (get_entity_model(Local_584) != Local_584.f_7)
			{
				request_model(Local_584.f_7);
				if (has_model_loaded(Local_584.f_7))
				{
					delete_object(&Local_584);
				}
			}
			if (!Local_584.f_9)
			{
				if (func_23())
				{
					Local_584.f_7 = joaat("prop_ld_alarm_01_dam");
					play_sound_from_entity(-1, "Shoot_box", Local_584, "Paleto_Score_Setup_Sounds", 0, 0);
					Local_584.f_9 = 1;
				}
			}
			else if (!iLocal_244 && Local_584.f_13 > 0)
			{
				request_ptfx_asset();
				if (has_ptfx_asset_loaded())
				{
					start_particle_fx_non_looped_at_coord("scr_alarm_damage_sparks", vLocal_158, vLocal_161, 1065353216, 0, 0, 0);
					iLocal_244 = 1;
				}
			}
			if (vdist2(get_entity_coords(player_ped_id(), 1), Local_584.f_1) < pow(150f, 2f))
			{
				if (does_entity_exist(Local_584))
				{
					if (get_entity_model(Local_584) != Local_584.f_7)
					{
						request_model(Local_584.f_7);
						prepare_alarm("PALETO_BAY_SCORE_ALARM");
						if (has_model_loaded(Local_584.f_7))
						{
							delete_object(&Local_584);
						}
					}
				}
				if (!does_entity_exist(Local_584))
				{
					request_model(Local_584.f_7);
					if (has_model_loaded(Local_584.f_7))
					{
						Local_584 = create_object(Local_584.f_7, Local_584.f_1, 1, true, false);
						set_entity_rotation(Local_584, Local_584.f_4, 2, 1);
					}
				}
			}
		}
		if (vdist2(get_entity_coords(player_ped_id(), 1), vLocal_158) > pow(150f, 2f))
		{
			if (does_entity_exist(iLocal_65))
			{
				if (!is_entity_visible(iLocal_65))
				{
					set_entity_visible(iLocal_65, true, 0);
				}
				set_object_as_no_longer_needed(&iLocal_65);
			}
			if (does_entity_exist(Local_584))
			{
				delete_object(&Local_584);
			}
			set_model_as_no_longer_needed(joaat("prop_ld_alarm_01"));
			set_model_as_no_longer_needed(joaat("prop_ld_alarm_01_dam"));
			remove_ptfx_asset();
		}
	}
	if (Local_584.f_9)
	{
		if (!is_alarm_playing("PALETO_BAY_SCORE_ALARM"))
		{
			if (prepare_alarm("PALETO_BAY_SCORE_ALARM"))
			{
				start_alarm("PALETO_BAY_SCORE_ALARM", false);
			}
		}
	}
	if (!Local_584.f_9)
	{
		if (is_alarm_playing("PALETO_BAY_SCORE_ALARM"))
		{
			stop_alarm("PALETO_BAY_SCORE_ALARM", false);
		}
	}
}

int func_23()
{
	if (does_entity_exist(Local_584))
	{
		if (get_entity_health(Local_584) < Local_584.f_14)
		{
			if (((((has_entity_been_damaged_by_entity(Local_584, player_ped_id(), 1) || is_explosion_in_angled_area(0, get_offset_from_entity_in_world_coords(Local_584, 0f, 1.5f, -1.5f), get_offset_from_entity_in_world_coords(Local_584, 0f, 1.5f, 1.5f), 3f)) || is_explosion_in_angled_area(1, get_offset_from_entity_in_world_coords(Local_584, 0f, 1.5f, -1.5f), get_offset_from_entity_in_world_coords(Local_584, 0f, 1.5f, 1.5f), 3f)) || is_explosion_in_angled_area(2, get_offset_from_entity_in_world_coords(Local_584, 0f, 1.5f, -1.5f), get_offset_from_entity_in_world_coords(Local_584, 0f, 1.5f, 1.5f), 3f)) || is_explosion_in_angled_area(3, get_offset_from_entity_in_world_coords(Local_584, 0f, 1.5f, -1.5f), get_offset_from_entity_in_world_coords(Local_584, 0f, 1.5f, 1.5f), 3f)) || is_explosion_in_angled_area(25, get_offset_from_entity_in_world_coords(Local_584, 0f, 1.5f, -1.5f), get_offset_from_entity_in_world_coords(Local_584, 0f, 1.5f, 1.5f), 3f))
			{
				Local_584.f_13 += Local_584.f_14 - get_entity_health(Local_584);
				clear_entity_last_damage_entity(Local_584);
				Local_584.f_14 = get_entity_health(Local_584);
			}
		}
		Local_584.f_14 = get_entity_health(Local_584);
	}
	return Local_584.f_13 > 0;
}

int func_24()
{
	return ((is_entity_in_angled_area(player_ped_id(), -116.8022f, 6472.056f, 33.47937f, -111.1819f, 6466.363f, 30.63431f, 7.75f, 0, true, 0) || is_entity_in_angled_area(player_ped_id(), -102.2175f, 6471.64f, 34.32764f, -110.6665f, 6463.194f, 30.63855f, 5f, 0, true, 0)) || is_entity_in_angled_area(player_ped_id(), -99.39606f, 6461.184f, 33.66985f, -104.3902f, 6466.2f, 30.63431f, 2f, 0, true, 0));
}

void func_25()
{
	Global_14578 = 0;
	func_26();
}

void func_26()
{
	restart_scripted_conversation();
	Global_16723 = 0;
	if (is_scripted_conversation_ongoing())
	{
		stop_scripted_conversation(false);
		Global_15712 = 6;
	}
}

void func_27()
{
	if (func_76(0) < 500 && !func_75())
	{
		func_48(0, 1, 500, 0, 0);
	}
	if ((is_vehicle_driveable(iLocal_67, 0) && !is_ped_injured(iLocal_51)) && !is_ped_injured(uLocal_313[2]))
	{
		switch (iLocal_690)
		{
			case 0:
				iLocal_691 = 0;
				iLocal_692 = 0;
				iLocal_693 = 0;
				iLocal_694 = 0;
				if (does_blip_exist(iLocal_62))
				{
					remove_blip(&iLocal_62);
				}
				clear_prints();
				func_46();
				if (!is_ped_in_any_vehicle(player_ped_id(), 0))
				{
					func_45("CMN_GENGETIN", 7500, 1);
				}
				iLocal_690++;
				break;
			
			case 1:
				if (is_ped_in_vehicle(player_ped_id(), iLocal_67, 0))
				{
					if (!iLocal_694)
					{
						if (vdist2(get_entity_coords(player_ped_id(), 1), get_entity_coords(iLocal_51, 1)) < 10f && !is_message_being_displayed())
						{
							if (func_6(&Local_360, sLocal_276, "RBS1_NOGUN", 8, 0, 0, 0))
							{
								iLocal_694 = 1;
							}
						}
					}
					if (!does_blip_exist(iLocal_58))
					{
						iLocal_58 = func_44(-316.8679f, 6071.798f, 30.1981f, 1);
						if (!iLocal_694 || (iLocal_694 && !func_43()))
						{
							clear_prints();
						}
					}
					if ((!iLocal_691 && iLocal_694) && !func_43())
					{
						func_45("CBH_GOTOSHOP", 7500, 1);
						iLocal_691 = 1;
					}
					if (does_blip_exist(iLocal_59))
					{
						remove_blip(&iLocal_59);
					}
				}
				else if (vdist(get_entity_coords(iLocal_67, 1), -326.3011f, 6077.182f, 30.4548f) > 20f)
				{
					if (!does_blip_exist(iLocal_59))
					{
						iLocal_59 = func_40(iLocal_67, 0, 0);
					}
					if (does_blip_exist(iLocal_58))
					{
						remove_blip(&iLocal_58);
					}
				}
				else if (!func_39(get_blip_coords(iLocal_58), -326.3011f, 6077.182f, 30.4548f, 15f, 0))
				{
					if (!iLocal_692)
					{
						func_45("CBH_BUYGUN", 7500, 1);
						iLocal_692 = 1;
					}
					set_blip_coords(iLocal_58, -326.3011f, 6077.182f, 30.4548f);
				}
				if (is_entity_at_coord(player_ped_id(), -316.8679f, 6071.798f, 30.1981f, Global_19, true, true, 0) && is_ped_sitting_in_vehicle(player_ped_id(), iLocal_67))
				{
					if (does_blip_exist(iLocal_58))
					{
						remove_blip(&iLocal_58);
					}
					if (does_blip_exist(iLocal_59))
					{
						remove_blip(&iLocal_59);
					}
					iLocal_690++;
				}
				if (((func_32(32) && does_blip_exist(iLocal_58)) && !is_ped_in_any_vehicle(player_ped_id(), 0)) && func_31(get_blip_coords(iLocal_58), -326.3011f, 6077.182f, 30.4548f, 0))
				{
					iLocal_690 = 5;
				}
				break;
			
			case 2:
				if (func_30(iLocal_67, 1093140480, 1, 1056964608, 0, 1, 0))
				{
					task_leave_vehicle(player_ped_id(), iLocal_67, 0);
					iLocal_690++;
				}
				break;
			
			case 3:
				if (!does_blip_exist(iLocal_58))
				{
					if (!iLocal_692)
					{
						func_45("CBH_BUYGUN", 7500, 1);
						iLocal_692 = 1;
					}
					iLocal_58 = func_44(-326.3011f, 6077.182f, 30.4548f, 0);
				}
				if (func_32(32))
				{
					iLocal_690++;
				}
				break;
			
			case 4:
				if (func_32(32))
				{
					if (does_blip_exist(iLocal_58))
					{
						remove_blip(&iLocal_58);
					}
					if (!func_29())
					{
						if (func_75())
						{
							iLocal_59 = func_40(iLocal_67, 0, 0);
							func_45("CMN_GENGETBCK", 7500, 1);
							iLocal_694 = 0;
							iLocal_690++;
						}
						else if (!iLocal_694)
						{
							func_45("CBH_GUNREM", 7500, 1);
							iLocal_694 = 1;
						}
					}
					else if (iLocal_694)
					{
						iLocal_694 = 0;
					}
				}
				else
				{
					iLocal_690--;
				}
				break;
			
			case 5:
				if (is_ped_in_vehicle(player_ped_id(), iLocal_67, 0))
				{
					if (!iLocal_694)
					{
						if (vdist2(get_entity_coords(player_ped_id(), 1), get_entity_coords(iLocal_51, 1)) < 10f && !is_message_being_displayed())
						{
							if (func_6(&Local_360, sLocal_276, "RBS1_GUNBACK", 8, 0, 0, 0))
							{
								iLocal_694 = 1;
							}
						}
					}
					if (!does_blip_exist(iLocal_58))
					{
						iLocal_58 = func_44(vLocal_112, 1);
					}
					if ((!iLocal_693 && iLocal_694) && !func_43())
					{
						func_45("CBH_GOBKBNK", 7500, 1);
						iLocal_693 = 1;
					}
					if (does_blip_exist(iLocal_59))
					{
						remove_blip(&iLocal_59);
					}
				}
				else if (vdist(get_entity_coords(iLocal_67, 1), vLocal_112) > 30f)
				{
					if (!does_blip_exist(iLocal_59))
					{
						iLocal_59 = func_40(iLocal_67, 0, 0);
					}
					if (does_blip_exist(iLocal_58))
					{
						remove_blip(&iLocal_58);
					}
				}
				else
				{
					func_28(5);
				}
				if (is_entity_at_coord(player_ped_id(), vLocal_112, Global_19, true, true, 0) && is_ped_sitting_in_vehicle(player_ped_id(), iLocal_67))
				{
					iLocal_690++;
				}
				break;
			
			case 6:
				if (func_30(iLocal_67, 1093140480, 1, 1056964608, 0, 1, 0))
				{
					task_leave_vehicle(player_ped_id(), iLocal_67, 0);
					iLocal_690 = 0;
					func_28(5);
				}
				break;
			}
	}
	if (Local_584.f_9)
	{
		func_28(5);
	}
	if (iLocal_690 < 5)
	{
		if (func_75())
		{
			if (does_blip_exist(iLocal_58))
			{
				remove_blip(&iLocal_58);
			}
			if (does_blip_exist(iLocal_59))
			{
				remove_blip(&iLocal_59);
			}
			iLocal_690 = 5;
		}
	}
	else if (!func_75())
	{
		if (does_blip_exist(iLocal_58))
		{
			remove_blip(&iLocal_58);
		}
		if (does_blip_exist(iLocal_59))
		{
			remove_blip(&iLocal_59);
		}
		iLocal_690 = 0;
	}
}

void func_28(int iParam0)
{
	if (iParam0 != 13 && iParam0 != 0)
	{
		if (is_cutscene_active() && is_cutscene_playing())
		{
			stop_cutscene(0);
			remove_cutscene();
			while (is_cutscene_active())
			{
				wait(false);
			}
		}
		iLocal_235 = 0;
		if (!has_additional_text_loaded(false) || !has_additional_text_loaded(6))
		{
			while (!has_additional_text_loaded(false) || !has_additional_text_loaded(6))
			{
				wait(false);
			}
		}
	}
	iLocal_254 = 0;
	iLocal_48 = iParam0;
	iLocal_233 = 0;
}

int func_29()
{
	return Global_91330.f_297 > 0;
}

bool func_30(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, int iParam5, int iParam6)
{
	disable_control_action(0, 71, 1);
	disable_control_action(0, 72, 1);
	disable_control_action(0, 76, 1);
	disable_control_action(0, 73, 1);
	disable_control_action(0, 59, 1);
	disable_control_action(0, 60, 1);
	if (iParam5)
	{
		disable_control_action(0, 75, 1);
	}
	disable_control_action(0, 80, 1);
	if (!iParam6)
	{
		disable_control_action(0, 69, 1);
		disable_control_action(0, 70, 1);
		disable_control_action(0, 68, 1);
	}
	disable_control_action(0, 74, 1);
	disable_control_action(0, 86, 1);
	disable_control_action(0, 81, 1);
	disable_control_action(0, 82, 1);
	disable_control_action(0, 138, 1);
	disable_control_action(0, 136, 1);
	disable_control_action(0, 114, 1);
	disable_control_action(0, 107, 1);
	disable_control_action(0, 110, 1);
	disable_control_action(0, 89, 1);
	disable_control_action(0, 89, 1);
	disable_control_action(0, 87, 1);
	disable_control_action(0, 88, 1);
	disable_control_action(0, 113, 1);
	disable_control_action(0, 115, 1);
	disable_control_action(0, 116, 1);
	disable_control_action(0, 117, 1);
	disable_control_action(0, 118, 1);
	disable_control_action(0, 119, 1);
	disable_control_action(0, 131, 1);
	disable_control_action(0, 132, 1);
	disable_control_action(0, 123, 1);
	disable_control_action(0, 126, 1);
	disable_control_action(0, 129, 1);
	disable_control_action(0, 130, 1);
	disable_control_action(0, 133, 1);
	disable_control_action(0, 134, 1);
	_0x17FCA7199A530203();
	if (get_game_timer() - Global_29 > 500)
	{
		_task_bring_vehicle_to_halt(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = get_game_timer();
	if (!is_entity_dead(iParam0, 0))
	{
		if (absf(get_entity_speed(iParam0)) <= fParam3)
		{
			return true;
		}
	}
	return false;
}

int func_31(vector3 vParam0, vector3 vParam1, int iParam2)
{
	if (iParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_32(int iParam0)
{
	return func_33(iParam0, 5, 1);
}

int func_33(int iParam0, int iParam1, int iParam2)
{
	if (iParam2)
	{
		return is_bit_set(Global_91330.f_1300[iParam0], iParam1);
	}
	else if (network_is_game_in_progress())
	{
		if (func_38() == 0)
		{
			return is_bit_set(func_34(func_37(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return is_bit_set(Global_101154.f_668[iParam0], iParam1);
	}
	return false;
}

int func_34(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2469339[iParam0 /*5*/][func_35(iParam1)];
	if (stat_get_int(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_35(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_36();
		if (iVar1 > -1)
		{
			Global_2469052 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2469052 = 1;
		}
	}
	return iVar0;
}

var func_36()
{
	return Global_1312747;
}

int func_37(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 820;
			break;
		
		case 1:
			return 821;
			break;
		
		case 2:
			return 822;
			break;
		
		case 3:
			return 823;
			break;
		
		case 4:
			return 824;
			break;
		
		case 5:
			return 825;
			break;
		
		case 6:
			return 826;
			break;
		
		case 7:
			return 827;
			break;
		
		case 8:
			return 828;
			break;
		
		case 9:
			return 829;
			break;
		
		case 10:
			return 830;
			break;
		
		case 11:
			return 831;
			break;
		
		case 12:
			return 832;
			break;
		
		case 13:
			return 833;
			break;
		
		case 14:
			return 834;
			break;
		
		case 15:
			return 836;
			break;
		
		case 16:
			return 837;
			break;
		
		case 17:
			return 838;
			break;
		
		case 18:
			return 839;
			break;
		
		case 19:
			return 840;
			break;
		
		case 20:
			return 841;
			break;
		
		case 21:
			return 842;
			break;
		
		case 22:
			return 843;
			break;
		
		case 23:
			return 844;
			break;
		
		case 24:
			return 845;
			break;
		
		case 25:
			return 846;
			break;
		
		case 26:
			return 847;
			break;
		
		case 27:
			return 848;
			break;
		
		case 28:
			return 849;
			break;
		
		case 29:
			return 850;
			break;
		
		case 30:
			return 851;
			break;
		
		case 31:
			return 852;
			break;
		
		case 32:
			return 853;
			break;
		
		case 33:
			return 854;
			break;
		
		case 34:
			return 855;
			break;
		
		case 35:
			return 856;
			break;
		
		case 36:
			return 857;
			break;
		
		case 37:
			return 858;
			break;
		
		case 38:
			return 859;
			break;
		
		case 39:
			return 860;
			break;
		
		case 40:
			return 864;
			break;
		
		case 41:
			return 865;
			break;
		
		case 42:
			return 866;
			break;
		
		case 43:
			return 867;
			break;
		
		case 44:
			return 3852;
			break;
		
		default:
			break;
	}
	return 3949;
}

var func_38()
{
	return Global_25120;
}

bool func_39(vector3 vParam0, vector3 vParam1, float fParam2, int iParam3)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!iParam7)
	{
		if (absf(vParam0.x - vParam3.x) <= fParam6)
		{
			if (absf(vParam0.y - vParam3.y) <= fParam6)
			{
				if (absf(vParam0.z - vParam3.z) <= fParam6)
				{
					return true;
				}
			}
		}
	}
	else if (absf(vParam0.x - vParam3.x) <= fParam6)
	{
		if (absf(vParam0.y - vParam3.y) <= fParam6)
		{
			return true;
		}
	}
	return false;
}

int func_40(int iParam0, int iParam1, int iParam2)
{
	return func_41(iParam0, !iParam1, iParam2);
}

int func_41(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	iVar0 = add_blip_for_entity(iParam0);
	if (is_entity_a_vehicle(iParam0))
	{
		set_blip_scale(iVar0, func_42(network_is_game_in_progress(), 1f, 1f));
		if (!iParam2)
		{
			set_blip_as_friendly(iVar0, iParam1);
		}
		else
		{
			set_blip_colour(iVar0, 2);
		}
	}
	else if (is_entity_a_ped(iParam0))
	{
		set_blip_scale(iVar0, func_42(network_is_game_in_progress(), 0.7f, 0.7f));
		set_blip_as_friendly(iVar0, iParam1);
	}
	else if (is_entity_an_object(iParam0))
	{
		set_blip_scale(iVar0, func_42(network_is_game_in_progress(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_42(int iParam0, float fParam1, float fParam2)
{
	if (iParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_43()
{
	if (Global_15712 != 0 || is_scripted_conversation_ongoing())
	{
		return true;
	}
	return false;
}

int func_44(vector3 vParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = add_blip_for_coord(vParam0);
	set_blip_scale(iVar0, func_42(network_is_game_in_progress(), 1f, 1f));
	set_blip_route(iVar0, iParam3);
	return iVar0;
}

void func_45(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	_set_text_entry_2(sParam0);
	_draw_subtitle_timed(iParam1, 0);
}

void func_46()
{
	Global_14578 = 0;
	func_47();
}

void func_47()
{
	if (is_scripted_conversation_ongoing())
	{
		restart_scripted_conversation();
		Global_16723 = 0;
		stop_scripted_conversation(true);
		Global_15712 = 6;
		return;
	}
}

void func_48(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	if (Global_101154.f_32575[iParam0 /*29*/].f_17 == 3)
	{
		return;
	}
	if (Global_101154.f_32575[iParam0 /*29*/].f_17 == 4)
	{
		return;
	}
	func_49(Global_101154.f_32575[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
	if (iParam3)
	{
		iVar0 = false;
		if (iParam4)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_random_peds");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_random_peds");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_random_peds");
					break;
				
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_missions");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_missions");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_missions");
					break;
				
				default:
					return;
				}
		}
		stat_get_int(iVar1, &iVar0, -1);
		iVar0 += iParam2;
		stat_set_int(iVar1, iVar0, 1);
	}
}

bool func_49(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_74();
	if (iParam3 < 1)
	{
		return false;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_73(99, 1);
					func_72(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_72(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_72(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_57(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_56(5))
					{
						fVar0 = 0.9f;
						iVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_72(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_72(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_72(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_56(1))
					{
						fVar0 = 0f;
						iVar1 = true;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_72(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_72(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_72(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_72(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_72(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_72(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 98:
				case 99:
				case 100:
				case 101:
				case 103:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
					switch (iParam0)
					{
						case 0:
							func_72(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_72(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_72(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (_get_this_script_hash())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_72(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_72(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_72(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_72(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_72(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_72(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_56(0))
							{
								fVar0 = 0f;
								iVar1 = false;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_72(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_72(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_72(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_72(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_72(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_72(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_55(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_73(95, iParam3);
					break;
				
				case 1:
					func_73(97, iParam3);
					break;
				
				case 2:
					func_73(96, iParam3);
					break;
			}
			func_73(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = floor(fVar0 * to_float(iParam3));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_52(iVar1);
		return true;
	}
	else if (fVar0 != 1f)
	{
		func_52(iVar1);
	}
	iVar5 = Global_52923[iVar2] + iParam3;
	switch (iParam1)
	{
		case 1:
			if (Global_52923[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_52923[iVar2] = 2147483647;
				}
				else
				{
					Global_52923[iVar2] += iParam3;
				}
			}
			switch (iParam0)
			{
				case 0:
					func_72(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_72(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_72(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!iParam4)
			{
				if (Global_52923[iVar2] - iParam3 < 0)
				{
					return false;
				}
			}
			iVar3 = Global_52923[iVar2];
			Global_52923[iVar2] -= iParam3;
			if (iParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_101154.f_25089.f_233[iVar2 /*69*/].f_2[Global_101154.f_25089.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_101154.f_25089.f_233[iVar2 /*69*/].f_2[Global_101154.f_25089.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_101154.f_25089.f_233[iVar2 /*69*/].f_2[Global_101154.f_25089.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_101154.f_25089.f_233[iVar2 /*69*/]++;
		Global_101154.f_25089.f_233[iVar2 /*69*/].f_1++;
		if (Global_101154.f_25089.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_101154.f_25089.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_51(iParam0);
	if (Global_35711 == 15)
	{
		func_50(0);
	}
	return true;
}

void func_50(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_101154.f_25089.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_101154.f_25089.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_101154.f_25089.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_101154.f_25089.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_101154.f_25089.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_101154.f_25089.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_52931[iVar0 /*3*/][0] = Global_101154.f_25089[iVar0];
		Global_52931.f_31[iVar0 /*3*/][0] = Global_101154.f_25089.f_11[iVar0];
		Global_52931.f_62[iVar0 /*3*/][0] = Global_101154.f_25089.f_22[iVar0];
		Global_52931.f_93[iVar0 /*3*/][0] = Global_101154.f_25089.f_33[iVar0];
		Global_52931.f_124[iVar0 /*3*/][0] = Global_101154.f_25089.f_44[iVar0];
		Global_52931.f_155[iVar0 /*3*/][0] = Global_101154.f_25089.f_55[iVar0];
		Global_52931.f_186[iVar0 /*3*/][0] = Global_101154.f_25089.f_66[iVar0];
		Global_52931.f_217[iVar0 /*3*/][0] = Global_101154.f_25089.f_77[iVar0];
		Global_52931.f_248[iVar0 /*3*/][0] = Global_101154.f_25089.f_88[iVar0];
		if (!iParam0)
		{
			Global_52931[iVar0 /*3*/][1] = Global_101154.f_25089[iVar0];
			Global_52931.f_31[iVar0 /*3*/][1] = Global_101154.f_25089.f_11[iVar0];
			Global_52931.f_62[iVar0 /*3*/][1] = Global_101154.f_25089.f_22[iVar0];
			Global_52931.f_93[iVar0 /*3*/][1] = Global_101154.f_25089.f_33[iVar0];
			Global_52931.f_124[iVar0 /*3*/][1] = Global_101154.f_25089.f_44[iVar0];
			Global_52931.f_155[iVar0 /*3*/][1] = Global_101154.f_25089.f_55[iVar0];
			Global_52931.f_186[iVar0 /*3*/][1] = Global_101154.f_25089.f_66[iVar0];
			Global_52931.f_217[iVar0 /*3*/][1] = Global_101154.f_25089.f_77[iVar0];
			Global_52931.f_248[iVar0 /*3*/][1] = Global_101154.f_25089.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_51(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_52923[iParam0];
	switch (iParam0)
	{
		case 0:
			stat_set_int(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			stat_set_int(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			stat_set_int(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_52(int iParam0)
{
	int iVar0;
	char[64] cVar1;
	
	iVar0 = false;
	if (!network_is_game_in_progress())
	{
		if (is_bit_set(Global_101154.f_25089.f_471, iParam0))
		{
			iVar0 = true;
			clear_bit(&(Global_101154.f_25089.f_471), iParam0);
		}
	}
	else if (is_bit_set(Global_101154.f_25089.f_471, iParam0) || is_bit_set(Global_2097152[func_54() /*10375*/].f_7704.f_10, iParam0))
	{
		iVar0 = true;
		clear_bit(&(Global_101154.f_25089.f_471), iParam0);
		clear_bit(&(Global_2097152[func_54() /*10375*/].f_7704.f_10), iParam0);
	}
	if (iVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		_set_notification_text_entry("COUP_RED");
		_add_text_component_item_string(func_53(iParam0));
		_set_notification_message(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_53(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		default:
	}
	return "";
}

int func_54()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_55(int iParam0)
{
	func_73(93, iParam0);
	func_73(29, iParam0);
	func_73(30, iParam0);
}

int func_56(int iParam0)
{
	if (!network_is_game_in_progress())
	{
		return is_bit_set(Global_101154.f_25089.f_471, iParam0);
	}
	return is_bit_set(Global_2097152[func_54() /*10375*/].f_7704.f_10, iParam0);
}

bool func_57(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = false;
	if (has_achievement_been_passed(27))
	{
		return false;
	}
	if (stat_get_int(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 += iVar0;
	}
	if (stat_get_int(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 += iVar0;
	}
	if (stat_get_int(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 += iVar0;
	}
	if (iParam0)
	{
	}
	iVar2 = 0;
	stat_get_int(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && iVar2 / 2000000 != iVar1 / 2000000)
	{
		stat_set_int(joaat("num_cash_spent"), iVar1, 1);
		func_71(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return false;
	}
	func_58(27, 1);
	return true;
}

int func_58(int iParam0, int iParam1)
{
	if (iParam0 >= 70)
	{
		return 0;
	}
	return func_59(iParam0, iParam1);
}

bool func_59(int iParam0, int iParam1)
{
	if (func_13(14) && !func_70(iParam0))
	{
		return false;
	}
	if (has_achievement_been_passed(iParam0) && iParam1 == 1)
	{
		return false;
	}
	if (Global_25366 != 0 && !Global_69489)
	{
		return false;
	}
	if (func_69(&Global_2563627))
	{
		if (func_67(&Global_2563627, iParam0))
		{
			return false;
		}
		if (func_60(&Global_2563627, iParam0))
		{
			return true;
		}
	}
	else
	{
		if (!give_achievement_to_player(iParam0))
		{
			return false;
		}
		if (has_achievement_been_passed(iParam0))
		{
			return true;
		}
		return false;
	}
	return false;
}

bool func_60(var uParam0, int iParam1)
{
	int iVar0;
	var[] uVar1 = new var[70];
	
	if (has_achievement_been_passed(iParam1))
	{
		return false;
	}
	if (func_13(14) && !func_70(iParam1))
	{
		return false;
	}
	if (func_67(uParam0, iParam1))
	{
		return false;
	}
	if (func_66(uParam0) < 0f)
	{
		func_65(uParam0, 0);
	}
	func_63(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0 - 1)
	{
		uVar1[iVar0 + 1] = *uParam0[iVar0];
		iVar0++;
	}
	func_61(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		*uParam0[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return true;
}

bool func_61(var uParam0, int iParam1)
{
	int iVar0;
	
	if (has_achievement_been_passed(iParam1))
	{
		return false;
	}
	if (func_13(14) && !func_70(iParam1))
	{
		return false;
	}
	if (func_67(uParam0, iParam1))
	{
		return false;
	}
	if (func_66(uParam0) < 0f)
	{
		func_65(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_62(uParam0, iVar0))
		{
			*uParam0[iVar0] = iParam1;
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_62(var uParam0, int iParam1)
{
	return *uParam0[iParam1] == 70;
}

void func_63(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_64(uParam0, iVar0);
		iVar0++;
	}
	func_65(uParam0, Global_2563626 - 0.5f);
}

void func_64(var uParam0, int iParam1)
{
	*uParam0[iParam1] = 70;
}

void func_65(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		*uParam0.f_72 = 0f;
	}
	else
	{
		*uParam0.f_72 = fParam1;
	}
}

var func_66(var uParam0)
{
	return *uParam0.f_72;
}

int func_67(var uParam0, int iParam1)
{
	return func_68(uParam0, iParam1) != -1;
}

int func_68(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (*uParam0[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_69(var uParam0)
{
	return *uParam0.f_71 == 1;
}

bool func_70(int iParam0)
{
	switch (iParam0)
	{
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return true;
		
		default:
	}
	return false;
}

int func_71(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 70)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = _0x1C186837D0619335(iParam0);
	if (iParam1 > iVar0)
	{
		return _0xC2AFFFDABBDC2C5C(iParam0, iParam1);
	}
	return 0;
}

void func_72(int iParam0, int iParam1)
{
	int iVar0;
	
	stat_get_int(iParam0, &iVar0, -1);
	iVar0 += iParam1;
	stat_set_int(iParam0, iVar0, 1);
}

void func_73(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51491[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (network_is_game_in_progress())
	{
		return;
	}
	if (Global_51491[iParam0 /*7*/])
	{
		stat_get_int(Global_51491[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 += iParam1;
		stat_set_int(Global_51491[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_74()
{
	int iVar0;
	
	if (network_is_signed_in())
	{
		stat_get_int(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_52923[0] == iVar0)
		{
			Global_52923[0] = iVar0;
		}
		stat_get_int(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_52923[1] == iVar0)
		{
			Global_52923[1] = iVar0;
		}
		stat_get_int(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_52923[2] == iVar0)
		{
			Global_52923[2] = iVar0;
		}
	}
}

bool func_75()
{
	if (((((((((((((((((((((((((((((((((((!has_ped_got_weapon(player_ped_id(), joaat("weapon_pistol"), 0) || get_ammo_in_ped_weapon(player_ped_id(), joaat("weapon_pistol")) == 0) && (!has_ped_got_weapon(player_ped_id(), joaat("weapon_combatpistol"), 0) || get_ammo_in_ped_weapon(player_ped_id(), joaat("weapon_combatpistol")) == 0)) && (!has_ped_got_weapon(player_ped_id(), joaat("weapon_appistol"), 0) || get_ammo_in_ped_weapon(player_ped_id(), joaat("weapon_appistol")) == 0)) && (!has_ped_got_weapon(player_ped_id(), joaat("weapon_microsmg"), 0) || get_ammo_in_ped_weapon(player_ped_id(), joaat("weapon_microsmg")) == 0)) && (!has_ped_got_weapon(player_ped_id(), joaat("weapon_smg"), 0) || get_ammo_in_ped_weapon(player_ped_id(), joaat("weapon_smg")) == 0)) && (!has_ped_got_weapon(player_ped_id(), joaat("weapon_assaultrifle"), 0) || get_ammo_in_ped_weapon(player_ped_id(), joaat("weapon_assaultrifle")) == 0)) && (!has_ped_got_weapon(player_ped_id(), joaat("weapon_carbinerifle"), 0) || get_ammo_in_ped_weapon(player_ped_id(), joaat("weapon_carbinerifle")) == 0)) && (!has_ped_got_weapon(player_ped_id(), joaat("weapon_advancedrifle"), 0) || get_ammo_in_ped_weapon(player_ped_id(), joaat("weapon_advancedrifle")) == 0)) && (!has_ped_got_weapon(player_ped_id(), joaat("weapon_mg"), 0) || get_ammo_in_ped_weapon(player_ped_id(), joaat("weapon_mg")) == 0)) && (!has_ped_got_weapon(player_ped_id(), joaat("weapon_combatmg"), 0) || get_ammo_in_ped_weapon(player_ped_id(), joaat("weapon_combatmg")) == 0)) && (!has_ped_got_weapon(player_ped_id(), joaat("weapon_pumpshotgun"), 0) || get_ammo_in_ped_weapon(player_ped_id(), joaat("weapon_pumpshotgun")) == 0)) && (!has_ped_got_weapon(player_ped_id(), joaat("weapon_sawnoffshotgun"), 0) || get_ammo_in_ped_weapon(player_ped_id(), joaat("weapon_sawnoffshotgun")) == 0)) && (!has_ped_got_weapon(player_ped_id(), joaat("weapon_assaultshotgun"), 0) || get_ammo_in_ped_weapon(player_ped_id(), joaat("weapon_assaultshotgun")) == 0)) && (!has_ped_got_weapon(player_ped_id(), joaat("weapon_sniperrifle"), 0) || get_ammo_in_ped_weapon(player_ped_id(), joaat("weapon_sniperrifle")) == 0)) && (!has_ped_got_weapon(player_ped_id(), joaat("weapon_heavysniper"), 0) || get_ammo_in_ped_weapon(player_ped_id(), joaat("weapon_heavysniper")) == 0)) && (!has_ped_got_weapon(player_ped_id(), joaat("weapon_remotesniper"), 0) || get_ammo_in_ped_weapon(player_ped_id(), joaat("weapon_remotesniper")) == 0)) && (!has_ped_got_weapon(player_ped_id(), joaat("weapon_minigun"), 0) || get_ammo_in_ped_weapon(player_ped_id(), joaat("weapon_minigun")) == 0)) && (!has_ped_got_weapon(player_ped_id(), joaat("weapon_pistol50"), 0) || get_ammo_in_ped_weapon(player_ped_id(), joaat("weapon_pistol50")) == 0)) && (!has_ped_got_weapon(player_ped_id(), joaat("weapon_assaultsmg"), 0) || get_ammo_in_ped_weapon(player_ped_id(), joaat("weapon_assaultsmg")) == 0)) && (!has_ped_got_weapon(player_ped_id(), joaat("weapon_bullpupshotgun"), 0) || get_ammo_in_ped_weapon(player_ped_id(), joaat("weapon_bullpupshotgun")) == 0)) && (!has_ped_got_weapon(player_ped_id(), joaat("weapon_specialcarbine"), 0) || get_ammo_in_ped_weapon(player_ped_id(), joaat("weapon_specialcarbine")) == 0)) && (!has_ped_got_weapon(player_ped_id(), joaat("weapon_bullpuprifle"), 0) || get_ammo_in_ped_weapon(player_ped_id(), joaat("weapon_bullpuprifle")) == 0)) && (!has_ped_got_weapon(player_ped_id(), joaat("weapon_heavypistol"), 0) || get_ammo_in_ped_weapon(player_ped_id(), joaat("weapon_heavypistol")) == 0)) && (!has_ped_got_weapon(player_ped_id(), joaat("weapon_snspistol"), 0) || get_ammo_in_ped_weapon(player_ped_id(), joaat("weapon_snspistol")) == 0)) && (!has_ped_got_weapon(player_ped_id(), joaat("weapon_vintagepistol"), 0) || get_ammo_in_ped_weapon(player_ped_id(), joaat("weapon_vintagepistol")) == 0)) && (!has_ped_got_weapon(player_ped_id(), joaat("weapon_gusenberg"), 0) || get_ammo_in_ped_weapon(player_ped_id(), joaat("weapon_gusenberg")) == 0)) && (!has_ped_got_weapon(player_ped_id(), joaat("weapon_musket"), 0) || get_ammo_in_ped_weapon(player_ped_id(), joaat("weapon_musket")) == 0)) && (!has_ped_got_weapon(player_ped_id(), joaat("weapon_heavyshotgun"), 0) || get_ammo_in_ped_weapon(player_ped_id(), joaat("weapon_heavyshotgun")) == 0)) && (!has_ped_got_weapon(player_ped_id(), joaat("weapon_marksmanrifle"), 0) || get_ammo_in_ped_weapon(player_ped_id(), joaat("weapon_marksmanrifle")) == 0)) && (!has_ped_got_weapon(player_ped_id(), joaat("weapon_combatpdw"), 0) || get_ammo_in_ped_weapon(player_ped_id(), joaat("weapon_combatpdw")) == 0)) && (!has_ped_got_weapon(player_ped_id(), joaat("weapon_marksmanpistol"), 0) || get_ammo_in_ped_weapon(player_ped_id(), joaat("weapon_marksmanpistol")) == 0)) && (!has_ped_got_weapon(player_ped_id(), joaat("weapon_railgun"), 0) || get_ammo_in_ped_weapon(player_ped_id(), joaat("weapon_railgun")) == 0)) && (!has_ped_got_weapon(player_ped_id(), joaat("weapon_machinepistol"), 0) || get_ammo_in_ped_weapon(player_ped_id(), joaat("weapon_machinepistol")) == 0)) && (!has_ped_got_weapon(player_ped_id(), joaat("weapon_compactrifle"), 0) || get_ammo_in_ped_weapon(player_ped_id(), joaat("weapon_compactrifle")) == 0)) && (!has_ped_got_weapon(player_ped_id(), joaat("weapon_dbshotgun"), 0) || get_ammo_in_ped_weapon(player_ped_id(), joaat("weapon_dbshotgun")) == 0))
	{
		return false;
	}
	return true;
}

var func_76(int iParam0)
{
	return Global_52923[iParam0];
}

void func_77()
{
	switch (iLocal_50)
	{
		case 4:
			switch (iLocal_720)
			{
				case 0:
					func_25();
					if (!is_ped_injured(iLocal_357) && !is_ped_fleeing(iLocal_357))
					{
						if (!is_ped_injured(iLocal_357))
						{
							task_smart_flee_ped(iLocal_357, player_ped_id(), 250f, -1, 0, 0);
						}
					}
					if (func_81("RBS1_BKRFAIL", iLocal_357))
					{
						iLocal_720++;
					}
					break;
				
				case 1:
					if (!func_43() && timera() > 2000)
					{
						func_88("CBH_SECALT");
					}
					break;
			}
			break;
		
		case 3:
			switch (iLocal_720)
			{
				case 0:
					func_25();
					func_78();
					iLocal_720++;
					break;
				
				case 1:
					if (!func_43() && timera() > 2000)
					{
						if (iLocal_232)
						{
							func_88("CBH_SPOTLT");
						}
						else
						{
							func_88("CBH_SPOTLT");
						}
					}
					break;
			}
			break;
		
		case 2:
		case 1:
			switch (iLocal_720)
			{
				case 0:
					func_25();
					func_78();
					iLocal_720++;
					break;
				
				case 1:
					if (func_81("RBS1_BNKFAIL", iLocal_52[0]))
					{
						iLocal_720++;
					}
					break;
				
				case 2:
					if (!func_43() && timera() > 2000)
					{
						if (iLocal_232)
						{
							func_88("CBH_COPFAIL");
						}
						else
						{
							func_88("CBH_BNKFAIL");
						}
					}
					break;
			}
			break;
		
		case 5:
			switch (iLocal_720)
			{
				case 0:
					func_25();
					func_78();
					iLocal_720++;
					break;
				
				case 1:
					if (func_81("RBS1_WLFAIL", 0))
					{
						iLocal_720++;
					}
					break;
				
				case 2:
					if (!func_43() && timera() > 2000)
					{
						func_88("CBH_COPFAIL");
					}
					break;
			}
			break;
		
		case 6:
			break;
	}
}

void func_78()
{
	int iVar0;
	
	iLocal_721 = add_shocking_event_at_position(99, get_entity_coords(player_ped_id(), 1), -1f);
	iVar0 = 0;
	while (iVar0 < iLocal_52)
	{
		if (!is_ped_injured(iLocal_52[iVar0]))
		{
			clear_ped_tasks(iLocal_52[iVar0]);
			set_ped_combat_attributes(iLocal_52[iVar0], 17, true);
			set_ped_relationship_group_hash(iLocal_52[iVar0], -2065892691);
			if (!iLocal_232)
			{
				task_react_and_flee_ped(iLocal_52[iVar0], player_ped_id());
			}
			else
			{
				task_shocking_event_react(iLocal_52[iVar0], iLocal_721);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_547)
	{
		if (is_vehicle_driveable(Local_547[iVar0 /*9*/].f_3, 0))
		{
			if (is_playback_going_on_for_vehicle(Local_547[iVar0 /*9*/].f_3))
			{
				stop_playback_recorded_vehicle(Local_547[iVar0 /*9*/].f_3);
			}
		}
		if (!is_ped_injured(Local_547[iVar0 /*9*/][0]))
		{
			vLocal_717 = {get_entity_coords(player_ped_id(), 1) + func_79(get_entity_coords(Local_547[iVar0 /*9*/][0], 1) - get_entity_coords(player_ped_id(), 1), 5f)};
			open_sequence_task(&iLocal_715);
			if (is_vehicle_driveable(Local_547[iVar0 /*9*/].f_3, 0) && is_ped_in_vehicle(Local_547[iVar0 /*9*/][0], Local_547[iVar0 /*9*/].f_3, 0))
			{
				if (vdist2(get_entity_coords(player_ped_id(), 1), get_entity_coords(Local_547[iVar0 /*9*/].f_3, 1)) < 900f)
				{
					task_vehicle_mission_coors_target(false, Local_547[iVar0 /*9*/].f_3, get_entity_coords(player_ped_id(), 1), 4, 20f, 786469, 20f, 10f, 1);
				}
				task_vehicle_mission(false, Local_547[iVar0 /*9*/].f_3, false, 5, 10f, 786469, 10f, 10f, 1);
				task_leave_vehicle(false, Local_547[iVar0 /*9*/].f_3, 256);
			}
			task_go_to_coord_while_aiming_at_entity(0, vLocal_717, player_ped_id(), 1f, false, 0.5f, 4f, true, 0, 0, -957453492, 20000);
			close_sequence_task(iLocal_715);
			task_perform_sequence(Local_547[iVar0 /*9*/][0], iLocal_715);
			clear_sequence_task(&iLocal_715);
		}
		if (!is_ped_injured(Local_547[iVar0 /*9*/][1]))
		{
			vLocal_717 = {get_entity_coords(player_ped_id(), 1) + func_79(get_entity_coords(Local_547[iVar0 /*9*/][1], 1) - get_entity_coords(player_ped_id(), 1), 5f)};
			open_sequence_task(&iLocal_716);
			if (is_vehicle_driveable(Local_547[iVar0 /*9*/].f_3, 0) && is_ped_in_vehicle(Local_547[iVar0 /*9*/][1], Local_547[iVar0 /*9*/].f_3, 0))
			{
				task_leave_vehicle(false, Local_547[iVar0 /*9*/].f_3, 256);
			}
			task_go_to_coord_while_aiming_at_entity(0, vLocal_717, player_ped_id(), 1f, false, 0.5f, 4f, true, 0, 0, -957453492, 20000);
			close_sequence_task(iLocal_716);
			task_perform_sequence(Local_547[iVar0 /*9*/][1], iLocal_716);
			clear_sequence_task(&iLocal_716);
		}
		iVar0++;
	}
}

Vector3 func_79(vector3 vParam0, float fParam1)
{
	vector3 vVar0;
	
	vVar0 = {func_80(vParam0)};
	vVar0.x *= fParam3;
	vVar0.y *= fParam3;
	vVar0.z *= fParam3;
	return vVar0;
}

Vector3 func_80(vector3 vParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = vmag(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = 1f / fVar0;
		vParam0 = {vParam0 * Vector(fVar1, fVar1, fVar1)};
	}
	else
	{
		vParam0.x = 0f;
		vParam0.y = 0f;
		vParam0.z = 0f;
	}
	return vParam0;
}

bool func_81(char* sParam0, int iParam1)
{
	struct<16> Var0;
	struct<16> Var16;
	
	if (does_entity_exist(iParam1))
	{
		if (!is_ped_injured(iParam1) && !is_ped_injured(iLocal_51))
		{
			if (vdist(get_entity_coords(player_ped_id(), 1), get_entity_coords(iParam1, 1)) < 400f && vdist(get_entity_coords(player_ped_id(), 1), get_entity_coords(iLocal_51, 1)) < 400f)
			{
				if (func_6(&Local_360, sLocal_276, sParam0, 9, 0, 0, 0))
				{
					return true;
				}
			}
			else if (vdist(get_entity_coords(player_ped_id(), 1), get_entity_coords(iParam1, 1)) < 400f)
			{
				StringCopy(&Var0, sParam0, 64);
				StringConCat(&Var0, "_1", 64);
				if (func_82(&Local_360, sLocal_276, sParam0, &Var0, 9, 0, 0))
				{
					return true;
				}
			}
			else if (vdist(get_entity_coords(player_ped_id(), 1), get_entity_coords(iLocal_51, 1)) < 400f)
			{
				StringCopy(&Var16, sParam0, 64);
				StringConCat(&Var16, "_2", 64);
				if (func_82(&Local_360, sLocal_276, sParam0, &Var16, 9, 0, 0))
				{
					return true;
				}
			}
			else
			{
				settimera(false);
				return true;
			}
		}
		else
		{
			settimera(false);
			return true;
		}
	}
	else if (!is_ped_injured(iLocal_51) && vdist(get_entity_coords(player_ped_id(), 1), get_entity_coords(iLocal_51, 1)) < 400f)
	{
		if (func_6(&Local_360, sLocal_276, sParam0, 9, 0, 0, 0))
		{
			return true;
		}
	}
	else
	{
		settimera(false);
		return true;
	}
	return false;
}

int func_82(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_17(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15719 = 0;
	Global_15726 = 0;
	Global_15721 = 0;
	Global_16703 = 1;
	Global_16705 = 0;
	Global_16709 = 0;
	StringCopy(&Global_16716, sParam3, 24);
	Global_2621441 = 0;
	return func_7(sParam2, iParam4, 0);
}

void func_83()
{
	if (iLocal_48 != 8)
	{
		clear_prints();
		func_25();
		func_87();
		if (does_blip_exist(iLocal_58))
		{
			remove_blip(&iLocal_58);
		}
		if (does_blip_exist(iLocal_60))
		{
			set_blip_alpha(iLocal_60, 0);
		}
		if (does_blip_exist(iLocal_61))
		{
			set_blip_alpha(iLocal_61, 0);
		}
		if (does_blip_exist(iLocal_62))
		{
			set_blip_alpha(iLocal_62, 0);
		}
		_0x67EEDEA1B9BAFD94();
		_0xE6DE0561D9232A64();
		iLocal_49 = iLocal_48;
		iLocal_48 = 8;
		iLocal_670 = 0;
	}
	if (is_vehicle_driveable(iLocal_67, 0))
	{
		if (is_ped_sitting_in_vehicle(player_ped_id(), iLocal_67))
		{
			if (does_blip_exist(iLocal_59))
			{
				remove_blip(&iLocal_59);
			}
			if (!iLocal_670)
			{
				if ((!is_ped_injured(uLocal_313[2]) && is_ped_sitting_in_vehicle(uLocal_313[2], iLocal_67)) && !is_message_being_displayed())
				{
					if (func_6(&Local_360, sLocal_276, "RBS1_WANTED", 8, 0, 0, 0))
					{
						iLocal_670 = 1;
					}
				}
			}
			func_85(&Local_537);
		}
		else if (is_message_being_displayed())
		{
			clear_prints();
		}
	}
	if (iLocal_49 == 1)
	{
		if (func_84(uLocal_313[2], &Local_541))
		{
			clear_prints();
			func_25();
			func_88("CBH_AB2TREV");
		}
	}
	else if (iLocal_49 != 7)
	{
		if (func_84(uLocal_313[2], &Local_543))
		{
			clear_prints();
			func_25();
			func_88("CBH_AB2BOTH");
		}
	}
	if (get_player_wanted_level(player_id()) == 0)
	{
		iLocal_670 = 0;
		if (does_blip_exist(iLocal_58))
		{
			set_blip_route(iLocal_58, true);
		}
		if (does_blip_exist(iLocal_60))
		{
			set_blip_alpha(iLocal_60, 255);
		}
		if (does_blip_exist(iLocal_61))
		{
			set_blip_alpha(iLocal_61, 255);
		}
		if (does_blip_exist(iLocal_62))
		{
			set_blip_alpha(iLocal_62, 255);
		}
		set_model_as_no_longer_needed(joaat("sheriff"));
		set_model_as_no_longer_needed(joaat("s_m_y_cop_01"));
		iLocal_48 = iLocal_49;
		Local_537.f_1 = 0;
	}
	else if (Local_584.f_9)
	{
		func_88("CBH_COPFAIL");
	}
}

bool func_84(int iParam0, var uParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (!is_ped_injured(iParam0))
		{
			if (vdist2(get_entity_coords(player_ped_id(), 1), get_entity_coords(iParam0, 1)) > 22500f)
			{
				return true;
			}
			else if (vdist2(get_entity_coords(player_ped_id(), 1), get_entity_coords(iParam0, 1)) > 10000f && get_game_timer() - iLocal_661 > 20000)
			{
				iLocal_661 = get_game_timer();
				*uParam1.f_1 = 0;
				func_85(uParam1);
			}
		}
	}
	return false;
}

void func_85(var uParam0)
{
	if (!*uParam0.f_1)
	{
		if (!is_string_null(*uParam0))
		{
			func_86(*uParam0, 7500, 1);
			*uParam0.f_1 = 1;
		}
	}
}

void func_86(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	_set_text_entry_2(sParam0);
	_draw_subtitle_timed(iParam1, 1);
}

void func_87()
{
	Global_14578 = 0;
	func_16();
}

void func_88(char* sParam0)
{
	func_166(sParam0);
	func_165();
	func_87();
	func_25();
	trigger_music_event("RH1_FAIL");
	while (!func_164())
	{
		func_22();
		if (is_player_switch_in_progress())
		{
			if (uLocal_313.f_7 == 2)
			{
				func_89(&uLocal_313, 1, 1, 0);
			}
		}
		wait(false);
	}
	if (is_player_switch_in_progress())
	{
		if (uLocal_313.f_7 == 2)
		{
			func_89(&uLocal_313, 1, 1, 0);
		}
	}
	if (does_entity_exist(iLocal_51))
	{
		delete_ped(&iLocal_51);
	}
	if (does_entity_exist(uLocal_313[0]))
	{
		delete_ped(&(uLocal_313[0]));
	}
	if (!is_ped_injured(player_ped_id()))
	{
		set_ped_helmet(player_ped_id(), 1);
	}
	if (does_entity_exist(uLocal_313[2]))
	{
		delete_ped(&(uLocal_313[2]));
	}
	if (does_entity_exist(iLocal_358))
	{
		set_vehicle_as_no_longer_needed(&iLocal_358);
	}
	if (does_entity_exist(iLocal_67) && is_entity_in_angled_area(iLocal_67, -112.9441f, 6461.442f, 27.96845f, -98.55077f, 6476.093f, 35.10856f, 25f, 0, true, 0))
	{
		if (func_177() == 0 && is_vehicle_driveable(iLocal_67, 0))
		{
			set_entity_coords_no_offset(iLocal_67, -116.9822f, 6453.094f, 30.9129f, 0, 0, 1);
			set_entity_quaternion(iLocal_67, -0.004f, 0.0094f, 0.3691f, 0.9293f);
			set_vehicle_on_ground_properly(iLocal_67);
		}
		else
		{
			delete_vehicle(&iLocal_67);
		}
	}
	if (does_entity_exist(iLocal_358) && is_entity_in_angled_area(iLocal_358, -112.9441f, 6461.442f, 27.96845f, -98.55077f, 6476.093f, 35.10856f, 25f, 0, true, 0))
	{
		if (func_177() == 2 && is_vehicle_driveable(iLocal_358, 0))
		{
			set_entity_coords_no_offset(iLocal_358, -115.937f, 6455.014f, 30.9471f, 0, 0, 1);
			set_entity_quaternion(iLocal_358, 0.0006f, -0.1305f, -0.0066f, 0.9914f);
			set_vehicle_on_ground_properly(iLocal_358);
		}
		else
		{
			delete_vehicle(&iLocal_358);
		}
	}
	if (func_24() || is_entity_at_coord(player_ped_id(), -137.3856f, 6475.481f, 32.4512f, 5f, 5f, 5f, false, true, 0))
	{
		set_entity_coords(player_ped_id(), -117.3143f, 6461.553f, 30.4684f, 1, false, 0, 1);
		set_entity_heading(player_ped_id(), 195.5377f);
	}
	func_768(37, 0);
	func_768(38, 0);
	remove_cutscene();
	func_765();
}

bool func_89(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	var uVar5;
	char[64] cVar6;
	int iVar22;
	var uVar23;
	char* sVar24;
	
	if (!*uParam0.f_39)
	{
		if (*uParam0.f_7 == 4)
		{
			return true;
		}
	}
	if ((!is_ped_injured(*uParam0[*uParam0.f_7]) && !is_ped_injured(player_ped_id())) && *uParam0[*uParam0.f_7] != player_ped_id())
	{
		if (!iParam2)
		{
			if ((is_ped_ragdoll(player_ped_id()) && !is_entity_on_fire(player_ped_id())) && !is_ped_getting_into_a_vehicle(player_ped_id()))
			{
				clear_ped_tasks_immediately(player_ped_id());
			}
			else
			{
				clear_ped_tasks(player_ped_id());
			}
			if ((is_ped_ragdoll(*uParam0[*uParam0.f_7]) && !is_entity_on_fire(*uParam0[*uParam0.f_7])) && !is_ped_getting_into_a_vehicle(*uParam0[*uParam0.f_7]))
			{
				clear_ped_tasks_immediately(*uParam0[*uParam0.f_7]);
			}
			else
			{
				clear_ped_tasks(*uParam0[*uParam0.f_7]);
			}
		}
		iVar0 = player_ped_id();
		iVar1 = func_177();
		if (!*uParam0.f_23)
		{
			func_152(iVar0, 0);
		}
		func_150(iVar1, &iVar0);
		set_ped_config_flag(iVar0, 32, true);
		set_ped_config_flag(iVar0, 250, true);
		iVar2 = func_149(*uParam0.f_7);
		func_152(*uParam0[*uParam0.f_7], 0);
		fVar3 = to_float(get_entity_health(*uParam0[*uParam0.f_7])) - 100f / to_float(get_ped_max_health(*uParam0[*uParam0.f_7])) - 100f * 100f;
		switch (func_148(player_ped_id()))
		{
			case 0:
				if (_get_screen_effect_is_active("BulletTime"))
				{
					_stop_screen_effect("BulletTime");
				}
				if (_get_screen_effect_is_active("BulletTimeOut"))
				{
					_stop_screen_effect("BulletTimeOut");
				}
				break;
			
			case 1:
				if (_get_screen_effect_is_active("DrivingFocus"))
				{
					_stop_screen_effect("DrivingFocus");
				}
				if (_get_screen_effect_is_active("DrivingFocusOut"))
				{
					_stop_screen_effect("DrivingFocusOut");
				}
				break;
			
			case 2:
				if (_get_screen_effect_is_active("REDMIST"))
				{
					_stop_screen_effect("REDMIST");
				}
				if (_get_screen_effect_is_active("REDMISTOut"))
				{
					_stop_screen_effect("REDMISTOut");
				}
				break;
		}
		if (func_147(func_177()))
		{
			if (is_special_ability_active(player_id()))
			{
				special_ability_deactivate_fast(player_id());
			}
		}
		change_player_ped(player_id(), *uParam0[*uParam0.f_7], iParam2, 0);
		hide_hud_component_this_frame(3);
		hide_hud_component_this_frame(13);
		if (iParam3 & 1 != 0)
		{
			set_ped_config_flag(player_ped_id(), 210, false);
		}
		if (func_144(0) || func_144(3))
		{
			if (Global_17118.f_13)
			{
				iVar4 = 0;
				while (iVar4 < 7)
				{
					if (is_bit_set(Global_82363[iVar4 /*5*/].f_1, 2))
					{
						uVar5 = Global_82363[iVar4 /*5*/];
						StringCopy(&cVar6, "MISS_SWITCH_", 64);
						StringConCat(&cVar6, &(Global_82399[Global_69758.f_109[uVar5 /*4*/] /*34*/]), 64);
						stat_increment(get_hash_key(&cVar6), 1f);
					}
					iVar4++;
				}
			}
		}
		Global_17118.f_13 = 0;
		*uParam0.f_5 = func_143(iVar1);
		if (*uParam0.f_5 == 4)
		{
			*uParam0.f_5 = 3;
		}
		*uParam0[*uParam0.f_5] = iVar0;
		*uParam0[*uParam0.f_7] = 0;
		*uParam0.f_6 = func_143(iVar2);
		*uParam0.f_7 = 4;
		iVar22 = player_ped_id();
		set_entity_visible(player_ped_id(), true, 0);
		func_142(iVar22);
		_0xE861D0B05C7662B8(iVar22, 0, 0);
		if (fVar3 < 25f && !is_ped_swimming_under_water(player_ped_id()))
		{
			set_entity_health(player_ped_id(), round(25f / 100f * to_float(get_ped_max_health(player_ped_id())) - 100f + 100f));
		}
		if (iParam1)
		{
			if (does_entity_exist(iVar0))
			{
				set_entity_visible(iVar0, true, 0);
				func_142(iVar0);
				_0xE861D0B05C7662B8(iVar0, 0, 0);
				set_ped_stealth_movement(iVar0, 0, 0);
			}
		}
		else if (does_entity_exist(iVar0))
		{
			sVar24 = get_entity_script(iVar0, &uVar23);
			if (!is_string_null(sVar24))
			{
				if (!are_strings_equal(sVar24, get_this_script_name()))
				{
					set_entity_as_mission_entity(iVar0, false, 1);
				}
				delete_ped(&iVar0);
			}
		}
		Global_88893 = 1;
		func_140(player_ped_id());
		func_139();
		func_138(iVar2);
		func_129();
		func_126(iVar2);
		func_99(func_124(get_entity_coords(player_ped_id(), 1), 145, 0));
		reset_player_stamina(player_id());
		set_entity_only_damaged_by_player(player_ped_id(), false);
		set_ped_can_be_dragged_out(player_ped_id(), 1);
		if (is_player_playing(player_id()))
		{
			set_auto_give_parachute_when_enter_plane(player_id(), func_98(67));
		}
		if (is_player_playing(player_id()))
		{
			_0xD2B315B6689D537D(player_id(), func_98(68));
		}
		func_95(iVar2, &iVar22);
		if (((func_13(0) || func_13(3)) || func_13(2)) || func_13(4))
		{
			set_ped_config_flag(iVar22, 32, false);
			set_ped_config_flag(iVar22, 250, false);
		}
		else
		{
			set_ped_config_flag(iVar22, 32, true);
			set_ped_config_flag(iVar22, 250, true);
		}
		if (!func_94())
		{
			func_90();
		}
		Global_88530 = 0;
		return true;
	}
	else
	{
		if (is_ped_injured(player_ped_id()))
		{
		}
		if (is_ped_injured(*uParam0[*uParam0.f_7]))
		{
		}
		if (player_ped_id() == *uParam0[*uParam0.f_7])
		{
		}
	}
	return false;
}

void func_90()
{
	if (Global_88923)
	{
		func_92();
		_0xBF59707B3E5ED531(func_91(Global_101154.f_1826.f_539.f_3549));
	}
	else
	{
		_0xBF59707B3E5ED531("");
	}
}

char* func_91(int iParam0)
{
	iParam0 = iParam0;
	return "";
}

void func_92()
{
	int iVar0;
	
	if (does_entity_exist(player_ped_id()))
	{
		if (func_93(Global_101154.f_1826.f_539.f_3549) != get_entity_model(player_ped_id()))
		{
			iVar0 = func_148(player_ped_id());
			if (func_147(iVar0) && (!func_13(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_147(Global_101154.f_1826.f_539.f_3549))
				{
					Global_101154.f_1826.f_539.f_3550 = Global_101154.f_1826.f_539.f_3549;
				}
				Global_101154.f_1826.f_539.f_3551 = iVar0;
				Global_101154.f_1826.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_101154.f_1826.f_539.f_3549 != 145)
			{
				Global_101154.f_1826.f_539.f_3551 = Global_101154.f_1826.f_539.f_3549;
			}
			return;
		}
	}
	Global_101154.f_1826.f_539.f_3549 = 145;
}

int func_93(int iParam0)
{
	if (func_147(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_94()
{
	return Global_17116;
}

void func_95(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_96(4, *iParam1);
			func_96(7, *iParam1);
			func_96(8, *iParam1);
			func_96(11, *iParam1);
			break;
		
		case 1:
			if (Global_101154.f_7775.f_330[2 /*6*/])
			{
				func_96(4, *iParam1);
			}
			func_96(7, *iParam1);
			func_96(8, *iParam1);
			func_96(11, *iParam1);
			if (Global_101154.f_7775.f_99.f_58[126])
			{
				func_96(12, *iParam1);
			}
			break;
		
		case 2:
			if (Global_101154.f_7775.f_330[20 /*6*/])
			{
				func_96(4, *iParam1);
			}
			func_96(7, *iParam1);
			func_96(8, *iParam1);
			func_96(11, *iParam1);
			break;
	}
}

void func_96(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (func_97(iParam0, iParam1))
	{
		return;
	}
	if (Global_34834[iParam0 /*31*/].f_24 < 5)
	{
		Global_34834[iParam0 /*31*/].f_25[Global_34834[iParam0 /*31*/].f_24] = iParam1;
		Global_34834[iParam0 /*31*/].f_24++;
	}
	else
	{
		iVar2 = false;
		iVar0 = 0;
		while (iVar0 < 5)
		{
			iVar1 = Global_34834[iParam0 /*31*/].f_25[iVar0];
			if (!does_entity_exist(iVar1) || is_ped_injured(iVar1))
			{
				Global_34834[iParam0 /*31*/].f_25[iVar0] = iParam1;
				iVar2 = true;
				iVar0 = 6;
			}
			iVar0++;
		}
		if (!iVar2)
		{
		}
	}
}

bool func_97(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_34834[uParam0 /*31*/].f_24)
	{
		if (iParam1 == Global_34834[uParam0 /*31*/].f_25[iVar0])
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_98(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_101154.f_7775.f_99.f_58[iParam0];
}

void func_99(int iParam0)
{
	if (iParam0 == 10)
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			set_bit(&(Global_31499[38 / 32]), 38 % 32);
			func_100(38, 0);
			set_bit(&(Global_31499[41 / 32]), 41 % 32);
			func_100(41, 0);
			set_bit(&(Global_31499[43 / 32]), 43 % 32);
			func_100(43, 0);
			set_bit(&(Global_31499[42 / 32]), 42 % 32);
			func_100(42, 0);
			set_bit(&(Global_31499[44 / 32]), 44 % 32);
			func_100(44, 0);
			break;
		
		case 1:
			set_bit(&(Global_31499[51 / 32]), 51 % 32);
			func_100(51, 0);
			break;
		
		case 2:
			set_bit(&(Global_31499[51 / 32]), 51 % 32);
			func_100(51, 0);
			break;
		
		case 3:
			set_bit(&(Global_31499[53 / 32]), 53 % 32);
			func_100(53, 0);
			break;
		
		case 4:
			set_bit(&(Global_31499[81 / 32]), 81 % 32);
			func_100(81, 0);
			set_bit(&(Global_31499[82 / 32]), 82 % 32);
			func_100(82, 0);
			break;
		
		case 5:
			set_bit(&(Global_31499[47 / 32]), 47 % 32);
			func_100(47, 0);
			set_bit(&(Global_31499[50 / 32]), 50 % 32);
			func_100(50, 0);
			break;
		
		case 6:
			set_bit(&(Global_31499[50 / 32]), 50 % 32);
			func_100(50, 0);
			break;
	}
}

void func_100(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != 226)
	{
		if (Global_69489)
		{
			iVar0 = Global_2428492.f_74[iParam0];
		}
		else
		{
			iVar0 = Global_101154.f_5951[iParam0];
		}
		if (iVar0 != iParam1 || is_bit_set(Global_31499[iParam0 / 32], iParam0 % 32))
		{
			if ((((iParam1 == 4 || iParam1 == 3) || iParam1 == 5) || iParam1 == 6) || iParam1 == 2)
			{
				set_bit(&(Global_31508[iParam0 / 32]), iParam0 % 32);
				Global_31971[iParam0] = iParam1;
			}
			else if (Global_69489)
			{
				Global_2428492.f_74[iParam0] = iParam1;
			}
			else
			{
				Global_101154.f_5951[iParam0] = iParam1;
			}
			set_bit(&(Global_31499[iParam0 / 32]), iParam0 % 32);
			func_102(iParam0);
			if (is_bit_set(Global_31499[iParam0 / 32], iParam0 % 32))
			{
				func_101(iParam0);
			}
		}
	}
}

void func_101(int iParam0)
{
	if (!is_bit_set(Global_32442.f_228[iParam0 / 32], iParam0 % 23))
	{
		set_bit(&(Global_32442.f_228[iParam0 / 32]), iParam0 % 23);
		Global_32442[Global_32442.f_227] = iParam0;
		Global_32442.f_227++;
	}
}

void func_102(int iParam0)
{
	struct<7> Var0;
	int iVar7;
	int iVar8;
	int iVar9;
	Vector3 fVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	
	if (!func_122())
	{
		return;
	}
	if (is_ped_injured(player_ped_id()))
	{
		return;
	}
	Var0 = {func_121(iParam0)};
	if (is_bit_set(Var0.f_4, 2))
	{
		func_107(iParam0, &Var0);
	}
	if (!_does_door_exist(Var0.f_5))
	{
		if (is_cutscene_playing())
		{
			return;
		}
	}
	iVar7 = false;
	iVar8 = false;
	fVar10 = get_distance_between_coords(Var0, get_entity_coords(player_ped_id(), 1), 1);
	if ((is_bit_set(Global_31508[iParam0 / 32], iParam0 % 32) && Global_31971[iParam0] == 2) && fVar10 > 210f)
	{
		clear_bit(&(Global_31508[iParam0 / 32]), iParam0 % 32);
		Global_31517[iParam0] = 0;
	}
	if (_get_number_of_instances_of_streamed_script(joaat("startup_positioning")) == 0)
	{
		if (is_bit_set(Global_31744[iParam0 / 32], iParam0 % 32))
		{
			if (fVar10 < 25f)
			{
				if (Global_91330.f_294 == 0)
				{
					if (!is_entity_dead(player_ped_id(), 0))
					{
						Global_91330.f_294 = get_interior_from_entity(player_ped_id());
					}
				}
				iVar11 = Global_91330.f_294;
				iVar12 = get_interior_at_coords(Var0);
				if (iVar11 == iVar12 && iVar11 != 0)
				{
					set_bit(&(Global_31508[iParam0 / 32]), iParam0 % 32);
					Global_31971[iParam0] = 3;
					set_bit(&(Global_31499[iParam0 / 32]), iParam0 % 32);
				}
			}
			clear_bit(&(Global_31744[iParam0 / 32]), iParam0 % 32);
		}
	}
	if (is_bit_set(Global_31508[iParam0 / 32], iParam0 % 32))
	{
		iVar9 = Global_31971[iParam0];
	}
	else if (is_bit_set(Var0.f_4, false))
	{
		if (Global_101154.f_7775)
		{
			iVar9 = func_104(iParam0);
		}
		else
		{
			iVar9 = 0;
		}
		if (func_13(14))
		{
			iVar9 = 0;
		}
	}
	else if (is_bit_set(Var0.f_4, true) && _get_number_of_instances_of_streamed_script(joaat("ambient_solomon")) == 0)
	{
		if (func_103())
		{
			iVar9 = 0;
		}
		else
		{
			iVar9 = 1;
		}
	}
	else
	{
		iVar9 = Global_101154.f_5951[iParam0];
	}
	if (Global_32198[iParam0] != iVar9)
	{
		iVar7 = true;
	}
	if (is_bit_set(Global_31499[iParam0 / 32], iParam0 % 32))
	{
		if (!is_bit_set(Global_31508[iParam0 / 32], iParam0 % 32) || (Global_31517[iParam0] == 0 && Global_31971[iParam0] != 2))
		{
			iVar7 = true;
		}
	}
	if (iVar7)
	{
		if (!Global_31498)
		{
		}
		else
		{
			if (!_does_door_exist(Var0.f_5))
			{
				add_door_to_system(Var0.f_5, Var0.f_3, Var0, 0, 0, 0);
			}
			switch (iVar9)
			{
				case 1:
					if (is_bit_set(Var0.f_4, 3))
					{
						iVar13 = true;
					}
					else if (fVar10 > 3f || absf(_0x65499865FCA6E5EC(Var0.f_5)) <= 0.015f)
					{
						iVar14 = get_interior_from_entity(player_ped_id());
						iVar15 = get_interior_at_coords(Var0);
						if (iVar14 != iVar15 || iVar14 == 0)
						{
							iVar13 = true;
						}
					}
					if (iVar13)
					{
						if (Var0.f_6 != 0f)
						{
							_0x9BA001CB45CBF627(Var0.f_5, Var0.f_6, 0, 0);
						}
						_set_door_acceleration_limit(Var0.f_5, iVar9, 0, 1);
						iVar8 = true;
					}
					break;
				
				case 4:
					if (Var0.f_6 != 0f)
					{
						_0x9BA001CB45CBF627(Var0.f_5, Var0.f_6, 0, 0);
					}
					_set_door_acceleration_limit(Var0.f_5, iVar9, 0, 1);
					iVar8 = true;
					break;
				
				case 2:
					if (Var0.f_6 != 0f)
					{
						_0x9BA001CB45CBF627(Var0.f_5, Var0.f_6, 0, 0);
					}
					_set_door_acceleration_limit(Var0.f_5, iVar9, 0, 1);
					iVar8 = true;
					break;
				
				case 0:
					if (Var0.f_6 != 0f)
					{
						_0x9BA001CB45CBF627(Var0.f_5, Var0.f_6, 0, 1);
					}
					_set_door_acceleration_limit(Var0.f_5, iVar9, 0, 1);
					iVar8 = true;
					break;
				
				case 3:
					if (Var0.f_6 != 0f)
					{
						_0x9BA001CB45CBF627(Var0.f_5, Var0.f_6, 0, 0);
					}
					_set_door_acceleration_limit(Var0.f_5, 0, 0, 1);
					iVar8 = true;
					break;
				
				case 5:
					if (Var0.f_6 != 0f)
					{
						_0x9BA001CB45CBF627(Var0.f_5, Var0.f_6, 0, 0);
					}
					_set_door_acceleration_limit(Var0.f_5, iVar9, 0, 1);
					iVar8 = true;
					break;
				
				case 6:
					if (Var0.f_6 != 0f)
					{
						_0x9BA001CB45CBF627(Var0.f_5, Var0.f_6, 0, 0);
					}
					_set_door_acceleration_limit(Var0.f_5, iVar9, 0, 1);
					iVar8 = true;
					break;
				
				default:
					if (Var0.f_6 != 0f)
					{
						_0x9BA001CB45CBF627(Var0.f_5, Var0.f_6, 0, 0);
					}
					_set_door_acceleration_limit(Var0.f_5, iVar9, 0, 1);
					iVar8 = true;
					break;
				}
		}
		if (iVar8)
		{
			clear_bit(&(Global_31499[iParam0 / 32]), iParam0 % 32);
			Global_32198[iParam0] = iVar9;
		}
	}
	if (is_bit_set(Global_31508[iParam0 / 32], iParam0 % 32) && Global_31971[iParam0] != 2)
	{
		set_bit(&(Global_31499[iParam0 / 32]), iParam0 % 32);
		func_101(iParam0);
		if (Global_31517[iParam0] < 2)
		{
			Global_31517[iParam0]++;
		}
	}
}

bool func_103()
{
	if (is_player_wanted_level_greater(player_id(), 0))
	{
		return false;
	}
	switch (func_177())
	{
		case 0:
			if (Global_101154.f_7775.f_99.f_58[65])
			{
				return true;
			}
			break;
		
		case 1:
			if (Global_101154.f_7775.f_99.f_58[66])
			{
				return true;
			}
			break;
		
		case 2:
			if (Global_101154.f_7775.f_99.f_58[65])
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_104(int iParam0)
{
	int iVar0;
	
	iVar0 = func_177();
	if (func_105(iParam0))
	{
		return true;
	}
	if (iParam0 == 49)
	{
		if (iVar0 == 1)
		{
			if (is_bit_set(Global_101154.f_5919[5], false) || is_bit_set(Global_101154.f_5919[6], false))
			{
				return false;
			}
		}
		if (func_147(iVar0))
		{
			if (is_bit_set(Global_86638[5], iVar0))
			{
				return false;
			}
		}
	}
	switch (iParam0)
	{
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
			if (iVar0 == 0)
			{
				if (is_bit_set(Global_101154.f_5919[0], false))
				{
					return false;
				}
			}
			if (func_147(iVar0))
			{
				if (is_bit_set(Global_86638[0], iVar0))
				{
					if (iParam0 != 40)
					{
						return false;
					}
					else
					{
						return true;
					}
				}
			}
			break;
		
		case 47:
		case 48:
		case 49:
			if (iVar0 == 1)
			{
				if (is_bit_set(Global_101154.f_5919[5], false))
				{
					return false;
				}
			}
			if (func_147(iVar0))
			{
				if (is_bit_set(Global_86638[5], iVar0))
				{
					return false;
				}
			}
			break;
		
		case 50:
			if (iVar0 == 1)
			{
				if (is_bit_set(Global_101154.f_5919[6], false))
				{
					return false;
				}
			}
			if (func_147(iVar0))
			{
				if (is_bit_set(Global_86638[6], iVar0))
				{
					return false;
				}
			}
			break;
		
		case 51:
		case 52:
			if (iVar0 == 2)
			{
				if (is_bit_set(Global_101154.f_5919[2], false))
				{
					return false;
				}
				if (func_147(iVar0))
				{
					if (is_bit_set(Global_86638[2], iVar0))
					{
						return false;
					}
				}
			}
			else if (iVar0 == 0)
			{
				if (is_bit_set(Global_101154.f_5919[1], false))
				{
					return false;
				}
				if (func_147(iVar0))
				{
					if (is_bit_set(Global_86638[1], iVar0))
					{
						return false;
					}
				}
			}
			break;
		
		case 53:
			if (iVar0 == 2)
			{
				if (is_bit_set(Global_101154.f_5919[3], false))
				{
					return false;
				}
			}
			if (func_147(iVar0))
			{
				if (is_bit_set(Global_86638[3], iVar0))
				{
					return false;
				}
			}
			break;
		
		default:
			return false;
			break;
	}
	return true;
}

bool func_105(int iParam0)
{
	int iVar0;
	
	if ((iParam0 == 40 || iParam0 == 49) || iParam0 == 52)
	{
		if (!is_ped_injured(player_ped_id()))
		{
			if (is_ped_in_any_vehicle(player_ped_id(), 1))
			{
				iVar0 = get_entity_model(func_106(get_vehicle_ped_is_in(player_ped_id(), 1)));
				switch (iVar0)
				{
					case joaat("utillitruck"):
					case joaat("monster"):
						return true;
						break;
					}
				}
			}
	}
	return false;
}

int func_106(int iParam0)
{
	return iParam0;
}

void func_107(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (!is_bit_set(*uParam1.f_4, 2))
	{
		return;
	}
	iVar0 = func_110();
	iVar1 = func_109(iVar0);
	switch (iParam0)
	{
		case 133:
		case 134:
		case 201:
		case 202:
			if (func_108(iParam0))
			{
				if (iVar1 < 19)
				{
					if (iVar1 >= 7)
					{
						Global_101154.f_5951[iParam0] = 0;
						_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 19)
			{
				if (vdist(get_entity_coords(player_ped_id(), 0), *uParam1) >= 12f)
				{
					Global_101154.f_5951[iParam0] = 1;
					_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
				}
			}
			else if (iVar1 < 7)
			{
				if (vdist(get_entity_coords(player_ped_id(), 0), *uParam1) >= 12f)
				{
					Global_101154.f_5951[iParam0] = 1;
					_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
				}
			}
			break;
		
		case 199:
		case 200:
		case 203:
		case 204:
			if (func_108(iParam0))
			{
				if (iVar1 < 18)
				{
					if (iVar1 >= 7)
					{
						Global_101154.f_5951[iParam0] = 0;
						_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 18)
			{
				if (vdist(get_entity_coords(player_ped_id(), 0), *uParam1) >= 12f)
				{
					Global_101154.f_5951[iParam0] = 1;
					_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
				}
			}
			else if (iVar1 < 7)
			{
				if (vdist(get_entity_coords(player_ped_id(), 0), *uParam1) >= 12f)
				{
					Global_101154.f_5951[iParam0] = 1;
					_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
				}
			}
			break;
		
		case 141:
		case 142:
			if (func_108(iParam0))
			{
				if ((_get_number_of_instances_of_streamed_script(joaat("jewelry_heist")) == 0 && _get_number_of_instances_of_streamed_script(joaat("jewelry_setup1")) == 0) && !Global_101154.f_7775.f_99.f_58[4])
				{
					if (iVar1 < 21)
					{
						if (iVar1 >= 7)
						{
							Global_101154.f_5951[iParam0] = 0;
							_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
						}
					}
					else
					{
						return;
					}
				}
				else if (!Global_101154.f_7775.f_99.f_58[4])
				{
					Global_101154.f_5951[iParam0] = 0;
					_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
				}
			}
			else if (Global_101154.f_7775.f_99.f_58[4])
			{
				Global_101154.f_5951[iParam0] = 1;
				_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
			}
			else if (_get_number_of_instances_of_streamed_script(joaat("jewelry_heist")) == 0 && _get_number_of_instances_of_streamed_script(joaat("jewelry_setup1")) == 0)
			{
				if (iVar1 >= 21)
				{
					if (vdist(get_entity_coords(player_ped_id(), 0), *uParam1) >= 18f)
					{
						Global_101154.f_5951[iParam0] = 1;
						_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
					}
				}
				else if (iVar1 < 7)
				{
					if (vdist(get_entity_coords(player_ped_id(), 0), *uParam1) >= 18f)
					{
						Global_101154.f_5951[iParam0] = 1;
						_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
					}
				}
			}
			break;
		
		case 145:
		case 146:
		case 143:
		case 144:
			if (func_108(iParam0))
			{
				if (iVar1 < 20)
				{
					if (iVar1 >= 9)
					{
						Global_101154.f_5951[iParam0] = 0;
						_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 20)
			{
				if (vdist(get_entity_coords(player_ped_id(), 0), *uParam1) >= 40f)
				{
					Global_101154.f_5951[iParam0] = 1;
					_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
				}
			}
			else if (iVar1 < 9)
			{
				if (vdist(get_entity_coords(player_ped_id(), 0), *uParam1) >= 40f)
				{
					Global_101154.f_5951[iParam0] = 1;
					_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
				}
			}
			break;
		
		case 147:
		case 148:
			if (!func_108(iParam0))
			{
				Global_101154.f_5951[iParam0] = 1;
				_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
			}
			break;
		
		case 152:
		case 153:
		case 154:
		case 155:
		case 156:
		case 157:
			if (!func_108(iParam0))
			{
				if (_get_number_of_instances_of_streamed_script(joaat("assassin_valet")) == 0)
				{
					Global_101154.f_5951[iParam0] = 1;
					_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
				}
			}
			else if (_get_number_of_instances_of_streamed_script(joaat("assassin_valet")) > 0)
			{
				Global_101154.f_5951[iParam0] = 0;
				_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
			}
			break;
		
		case 158:
		case 159:
			if (_get_number_of_instances_of_streamed_script(Global_82399[70 /*34*/].f_6) == 0)
			{
				if (!func_108(iParam0))
				{
					Global_101154.f_5951[iParam0] = 1;
					_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
				}
			}
			break;
		
		case 160:
		case 161:
			if (_get_number_of_instances_of_streamed_script(joaat("omega2")) == 0)
			{
				if (!func_108(iParam0))
				{
					Global_101154.f_5951[iParam0] = 1;
					_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
				}
			}
			break;
		
		case 70:
		case 71:
		case 72:
			if (!func_108(iParam0) && _get_number_of_instances_of_streamed_script(Global_82399[26 /*34*/].f_6) == 0)
			{
				Global_101154.f_5951[iParam0] = 1;
				_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
			}
			else
			{
				return;
			}
			break;
		
		case 101:
		case 102:
		case 103:
		case 104:
			if (!func_108(iParam0))
			{
				if (_get_number_of_instances_of_streamed_script(Global_82399[43 /*34*/].f_6) == 0)
				{
					Global_101154.f_5951[iParam0] = 1;
					_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 190:
		case 191:
			if (!func_108(iParam0))
			{
				Global_101154.f_5951[iParam0] = 1;
				_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
			}
			break;
		
		case 193:
			if (!func_108(iParam0))
			{
				if (_get_number_of_instances_of_streamed_script(Global_82399[93 /*34*/].f_6) > 0)
				{
					Global_101154.f_5951[iParam0] = 1;
					_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 198:
			if (!func_108(iParam0))
			{
				Global_101154.f_5951[iParam0] = 1;
				_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
			}
			break;
		
		case 80:
			if (!func_108(iParam0))
			{
				if (_get_number_of_instances_of_streamed_script(Global_82399[8 /*34*/].f_6) == 0 && _get_number_of_instances_of_streamed_script(Global_82399[10 /*34*/].f_6) == 0)
				{
					Global_101154.f_5951[iParam0] = 1;
					_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 205:
		case 206:
			if (!func_108(iParam0))
			{
				if (_get_number_of_instances_of_streamed_script(Global_82399[47 /*34*/].f_6) == 0)
				{
					Global_101154.f_5951[iParam0] = 1;
					_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 207:
			if (_get_number_of_instances_of_streamed_script(Global_82399[70 /*34*/].f_6) == 0)
			{
				if (!func_108(iParam0))
				{
					Global_101154.f_5951[iParam0] = 1;
					_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
				}
			}
			break;
		
		case 208:
		case 209:
		case 211:
		case 210:
		case 212:
		case 213:
		case 214:
		case 215:
			if (_get_number_of_instances_of_streamed_script(Global_82399[48 /*34*/].f_6) == 0)
			{
				if (!func_108(iParam0))
				{
					Global_101154.f_5951[iParam0] = 1;
					_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
				}
			}
			break;
		
		case 99:
		case 100:
			if (_get_number_of_instances_of_streamed_script(Global_82399[39 /*34*/].f_6) == 0)
			{
				if (!func_108(iParam0))
				{
					Global_101154.f_5951[iParam0] = 1;
					_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
				}
			}
			break;
		
		case 216:
			if (!func_108(iParam0))
			{
				Global_101154.f_5951[iParam0] = 1;
				_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
			}
			break;
		
		case 217:
		case 218:
			if (!func_108(iParam0))
			{
				Global_101154.f_5951[iParam0] = 1;
				_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
			}
			break;
		
		case 219:
		case 220:
		case 221:
		case 222:
			if (func_108(iParam0))
			{
				Global_101154.f_5951[iParam0] = 0;
				_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
			}
			break;
	}
}

int func_108(int iParam0)
{
	struct<7> Var0;
	int iVar7;
	
	Var0 = {func_121(iParam0)};
	iVar7 = _0x160AA1B32F6139B8(Var0.f_5);
	return ((iVar7 == 1 || iVar7 == 4) || iVar7 == 2);
}

int func_109(int iParam0)
{
	return shift_right(iParam0, 9) & 31;
}

var func_110()
{
	var uVar0;
	
	func_120(&uVar0, get_clock_seconds());
	func_119(&uVar0, get_clock_minutes());
	func_118(&uVar0, get_clock_hours());
	func_113(&uVar0, get_clock_day_of_month());
	func_112(&uVar0, get_clock_month());
	func_111(&uVar0, get_clock_year());
	return uVar0;
}

void func_111(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 -= *uParam0 & 2080374784;
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || shift_left(2011 - iParam1, 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || shift_left(iParam1 - 2011, 26));
		*uParam0 -= *uParam0 & -2147483648;
	}
}

void func_112(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 -= *uParam0 & 15;
	*uParam0 = (*uParam0 || iParam1);
}

void func_113(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_117(*uParam0);
	iVar1 = func_115(*uParam0);
	if (iParam1 < 1 || iParam1 > func_114(iVar0, iVar1))
	{
		return;
	}
	*uParam0 -= *uParam0 & 496;
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

int func_114(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if (iParam1 % 4 == 0)
			{
				if (iParam1 % 100 != 0)
				{
					return 29;
				}
				else if (iParam1 % 400 == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

var func_115(int iParam0)
{
	return shift_right(iParam0, 26) & 31 * func_116(is_bit_set(iParam0, 31), -1, 1) + 2011;
}

int func_116(int iParam0, int iParam1, int iParam2)
{
	if (iParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_117(int iParam0)
{
	return (iParam0 && 15);
}

void func_118(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 -= *uParam0 & 15872;
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_119(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 -= *uParam0 & 1032192;
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_120(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 -= *uParam0 & 66060288;
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

struct<7> func_121(int iParam0)
{
	struct<7> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = {133f, -1711f, 29f};
			Var0.f_5 = 1804701345;
			break;
		
		case 1:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = {-1287.857f, -1115.742f, 7.1401f};
			Var0.f_5 = 1403601067;
			break;
		
		case 2:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = {1932.952f, 3725.154f, 32.9944f};
			Var0.f_5 = -2031139496;
			break;
		
		case 3:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = {1207.873f, -470.063f, 66.358f};
			Var0.f_5 = 1796834809;
			break;
		
		case 4:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = {-29.8692f, -148.1571f, 57.2265f};
			Var0.f_5 = 96153298;
			break;
		
		case 5:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = {-280.7851f, 6232.782f, 31.8455f};
			Var0.f_5 = -281080954;
			break;
		
		case 6:
			Var0.f_3 = joaat("v_ilev_hd_door_l");
			Var0 = {-824f, -187f, 38f};
			Var0 = {-823.2001f, -187.0831f, 37.819f};
			Var0.f_5 = 183249434;
			break;
		
		case 7:
			Var0.f_3 = joaat("v_ilev_hd_door_r");
			Var0 = {-823f, -188f, 38f};
			Var0 = {-822.4442f, -188.3924f, 37.819f};
			Var0.f_5 = 758345384;
			break;
		
		case 8:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = {82.3186f, -1392.752f, 29.5261f};
			Var0.f_5 = -1069262641;
			break;
		
		case 9:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = {82.3186f, -1390.476f, 29.5261f};
			Var0.f_5 = 1968521986;
			break;
		
		case 10:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = {1686.983f, 4821.741f, 42.2131f};
			Var0.f_5 = -2143706301;
			break;
		
		case 11:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = {1687.282f, 4819.484f, 42.2131f};
			Var0.f_5 = -1403421822;
			break;
		
		case 12:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = {418.637f, -806.457f, 29.6396f};
			Var0.f_5 = -1950137670;
			break;
		
		case 13:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = {418.637f, -808.733f, 29.6396f};
			Var0.f_5 = 1226259807;
			break;
		
		case 14:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = {-1096.661f, 2705.446f, 19.2578f};
			Var0.f_5 = 1090833557;
			break;
		
		case 15:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = {-1094.965f, 2706.964f, 19.2578f};
			Var0.f_5 = 897332612;
			break;
		
		case 16:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = {1196.825f, 2703.221f, 38.3726f};
			Var0.f_5 = 1095946640;
			break;
		
		case 17:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = {1199.101f, 2703.221f, 38.3726f};
			Var0.f_5 = 801975945;
			break;
		
		case 18:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = {-818.7642f, -1079.544f, 11.4781f};
			Var0.f_5 = -167996547;
			break;
		
		case 19:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = {-816.7932f, -1078.406f, 11.4781f};
			Var0.f_5 = -1935818563;
			break;
		
		case 20:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = {-0.0564f, 6517.461f, 32.0278f};
			Var0.f_5 = 1891185217;
			break;
		
		case 21:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = {-1.7253f, 6515.914f, 32.0278f};
			Var0.f_5 = 1236591681;
			break;
		
		case 22:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = {-1201.435f, -776.8566f, 17.9918f};
			Var0.f_5 = 1980808685;
			break;
		
		case 23:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = {617.2458f, 2751.022f, 42.7578f};
			Var0.f_5 = 1352749757;
			break;
		
		case 24:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = {127.8201f, -211.8274f, 55.2275f};
			Var0.f_5 = -566554453;
			break;
		
		case 25:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = {-3167.75f, 1055.536f, 21.5329f};
			Var0.f_5 = 1284749450;
			break;
		
		case 26:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = {-716.6754f, -155.42f, 37.6749f};
			Var0.f_5 = 261851994;
			break;
		
		case 27:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = {-715.6154f, -157.2561f, 37.6749f};
			Var0.f_5 = 217646625;
			break;
		
		case 28:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = {-157.0924f, -306.4413f, 39.994f};
			Var0.f_5 = 1801139578;
			break;
		
		case 29:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = {-156.4022f, -304.4366f, 39.994f};
			Var0.f_5 = -2123275866;
			break;
		
		case 30:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = {-1454.782f, -231.7927f, 50.0565f};
			Var0.f_5 = 1312689981;
			break;
		
		case 31:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = {-1456.201f, -233.3682f, 50.0565f};
			Var0.f_5 = -595055661;
			break;
		
		case 32:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = {321.81f, 178.36f, 103.68f};
			Var0.f_5 = -265260897;
			break;
		
		case 33:
			Var0.f_3 = -1212951353;
			Var0 = {1859.89f, 3749.79f, 33.18f};
			Var0.f_5 = -1284867488;
			break;
		
		case 34:
			Var0.f_3 = -1212951353;
			Var0 = {-289.1752f, 6199.112f, 31.637f};
			Var0.f_5 = 302307081;
			break;
		
		case 35:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = {-1155.454f, -1424.008f, 5.0461f};
			Var0.f_5 = -681886015;
			break;
		
		case 36:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = {1321.286f, -1650.597f, 52.3663f};
			Var0.f_5 = -2086556500;
			break;
		
		case 37:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = {-3167.789f, 1074.767f, 20.9209f};
			Var0.f_5 = -1496386696;
			break;
		
		case 38:
			Var0.f_3 = joaat("v_ilev_mm_doorm_l");
			Var0 = {-817f, 179f, 73f};
			set_bit(&(Var0.f_4), false);
			Var0.f_5 = -2097039789;
			break;
		
		case 39:
			Var0.f_3 = joaat("v_ilev_mm_doorm_r");
			Var0 = {-816f, 178f, 73f};
			set_bit(&(Var0.f_4), false);
			Var0.f_5 = -2127416656;
			break;
		
		case 40:
			Var0.f_3 = joaat("prop_ld_garaged_01");
			Var0 = {-815f, 186f, 73f};
			set_bit(&(Var0.f_4), false);
			Var0.f_5 = -1986583853;
			Var0.f_6 = 6.5f;
			break;
		
		case 41:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_l");
			Var0 = {-797f, 177f, 73f};
			set_bit(&(Var0.f_4), false);
			Var0.f_5 = 776026812;
			break;
		
		case 42:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_r");
			Var0 = {-795f, 178f, 73f};
			set_bit(&(Var0.f_4), false);
			Var0.f_5 = 698422331;
			break;
		
		case 43:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_l");
			Var0 = {-793f, 181f, 73f};
			set_bit(&(Var0.f_4), false);
			Var0.f_5 = 535076355;
			break;
		
		case 44:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_r");
			Var0 = {-794f, 183f, 73f};
			set_bit(&(Var0.f_4), false);
			Var0.f_5 = 474675599;
			break;
		
		case 45:
			Var0.f_3 = joaat("prop_bh1_48_gate_1");
			Var0 = {-849f, 179f, 70f};
			set_bit(&(Var0.f_4), false);
			Var0.f_5 = -1978427516;
			break;
		
		case 46:
			Var0.f_3 = joaat("v_ilev_mm_windowwc");
			Var0 = {-802.7333f, 167.5041f, 77.5824f};
			set_bit(&(Var0.f_4), false);
			Var0.f_5 = -1700375831;
			break;
		
		case 47:
			Var0.f_3 = joaat("v_ilev_fa_frontdoor");
			Var0 = {-14f, -1441f, 31f};
			set_bit(&(Var0.f_4), false);
			Var0.f_5 = 613961892;
			break;
		
		case 48:
			Var0.f_3 = joaat("v_ilev_fh_frntdoor");
			Var0 = {-15f, -1427f, 31f};
			set_bit(&(Var0.f_4), false);
			Var0.f_5 = -272570634;
			break;
		
		case 49:
			Var0.f_3 = joaat("prop_sc1_21_g_door_01");
			Var0 = {-25.28f, -1431.06f, 30.84f};
			set_bit(&(Var0.f_4), false);
			Var0.f_5 = -1040675994;
			break;
		
		case 50:
			Var0.f_3 = joaat("v_ilev_fh_frontdoor");
			Var0 = {7.52f, 539.53f, 176.18f};
			set_bit(&(Var0.f_4), false);
			Var0.f_5 = 1201219326;
			break;
		
		case 51:
			Var0.f_3 = joaat("v_ilev_trevtraildr");
			Var0 = {1973f, 3815f, 34f};
			set_bit(&(Var0.f_4), false);
			Var0.f_5 = 1736361794;
			break;
		
		case 52:
			Var0.f_3 = joaat("prop_cs4_10_tr_gd_01");
			Var0 = {1972.787f, 3824.554f, 32.5831f};
			Var0.f_5 = 1113956670;
			Var0.f_6 = 12f;
			break;
		
		case 53:
			Var0.f_3 = joaat("v_ilev_trev_doorfront");
			Var0 = {-1150f, -1521f, 11f};
			set_bit(&(Var0.f_4), false);
			Var0.f_5 = -1361617046;
			break;
	}
	switch (iParam0)
	{
		case 54:
			Var0.f_3 = joaat("prop_com_ls_door_01");
			Var0 = {-1145.9f, -1991.14f, 14.18f};
			Var0.f_5 = -1871080926;
			Var0.f_6 = 25f;
			break;
		
		case 55:
			Var0.f_3 = joaat("prop_id2_11_gdoor");
			Var0 = {723.12f, -1088.83f, 23.28f};
			Var0.f_5 = 1168079979;
			Var0.f_6 = 25f;
			break;
		
		case 56:
			Var0.f_3 = joaat("prop_com_ls_door_01");
			Var0 = {-356.09f, -134.77f, 40.01f};
			Var0.f_5 = 1206354175;
			Var0.f_6 = 25f;
			break;
		
		case 57:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = {108.8502f, 6617.876f, 32.673f};
			Var0.f_5 = -1038180727;
			Var0.f_6 = 25f;
			break;
		
		case 58:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = {114.3206f, 6623.226f, 32.7161f};
			Var0.f_5 = 1200466273;
			Var0.f_6 = 25f;
			break;
		
		case 59:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = {1182.305f, 2645.242f, 38.807f};
			Var0.f_5 = 1391004277;
			Var0.f_6 = 25f;
			break;
		
		case 60:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = {1174.654f, 2645.242f, 38.6826f};
			Var0.f_5 = -459199009;
			Var0.f_6 = 25f;
			break;
		
		case 225:
			Var0.f_3 = -427498890;
			Var0 = {-205.7007f, -1310.692f, 30.2957f};
			Var0.f_5 = -288764223;
			Var0.f_6 = 25f;
			break;
		
		case 61:
			Var0.f_3 = joaat("v_ilev_janitor_frontdoor");
			Var0 = {-107.5401f, -9.0258f, 70.6696f};
			Var0.f_5 = -252283844;
			break;
		
		case 62:
			Var0.f_3 = joaat("v_ilev_ss_door8");
			Var0 = {717f, -975f, 25f};
			Var0.f_5 = -826072862;
			break;
		
		case 63:
			Var0.f_3 = joaat("v_ilev_ss_door7");
			Var0 = {719f, -975f, 25f};
			Var0.f_5 = 763780711;
			break;
		
		case 64:
			Var0.f_3 = joaat("v_ilev_ss_door02");
			Var0 = {709.9813f, -963.5311f, 30.5453f};
			Var0.f_5 = -874851305;
			break;
		
		case 65:
			Var0.f_3 = joaat("v_ilev_ss_door03");
			Var0 = {709.9894f, -960.6675f, 30.5453f};
			Var0.f_5 = -1480820165;
			break;
		
		case 66:
			Var0.f_3 = joaat("v_ilev_store_door");
			Var0 = {707.8046f, -962.4564f, 30.5453f};
			Var0.f_5 = 949391213;
			break;
		
		case 67:
			Var0.f_3 = -1212951353;
			Var0 = {1393f, 3599f, 35f};
			Var0.f_5 = 212192855;
			break;
		
		case 68:
			Var0.f_3 = -1212951353;
			Var0 = {1395f, 3600f, 35f};
			Var0.f_5 = -126474752;
			break;
		
		case 69:
			Var0.f_3 = joaat("v_ilev_ss_door04");
			Var0 = {1387f, 3614f, 39f};
			Var0.f_5 = 1765671336;
			break;
		
		case 70:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = {1083.547f, -1975.435f, 31.6222f};
			Var0.f_5 = 792295685;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 71:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = {1065.237f, -2006.079f, 32.2329f};
			Var0.f_5 = 563273144;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 72:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = {1085.307f, -2018.561f, 41.6289f};
			Var0.f_5 = -726993043;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 73:
			Var0.f_3 = joaat("v_ilev_bank4door02");
			Var0 = {-111f, 6464f, 32f};
			Var0.f_5 = 178228075;
			break;
		
		case 74:
			Var0.f_3 = joaat("v_ilev_bank4door01");
			Var0 = {-110f, 6462f, 32f};
			Var0.f_5 = 1852297978;
			break;
		
		case 75:
			Var0.f_3 = joaat("v_ilev_lester_doorfront");
			Var0 = {1274f, -1721f, 55f};
			Var0.f_5 = -565026078;
			break;
		
		case 76:
			Var0.f_3 = joaat("v_ilev_lester_doorveranda");
			Var0 = {1271.89f, -1707.57f, 53.79f};
			Var0.f_5 = 1646172266;
			break;
		
		case 77:
			Var0.f_3 = joaat("v_ilev_lester_doorveranda");
			Var0 = {1270.77f, -1708.1f, 53.75f};
			Var0.f_5 = 204467342;
			break;
		
		case 78:
			Var0.f_3 = joaat("v_ilev_deviantfrontdoor");
			Var0 = {-127.5f, -1456.18f, 37.94f};
			Var0.f_5 = 2047070410;
			break;
		
		case 79:
			Var0.f_3 = joaat("prop_com_gar_door_01");
			Var0 = {483.56f, -1316.08f, 32.18f};
			Var0.f_5 = 1417775309;
			break;
		
		case 80:
			Var0.f_3 = joaat("v_ilev_cs_door");
			Var0 = {483f, -1312f, 29f};
			Var0.f_5 = -106474626;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 81:
			Var0.f_3 = joaat("prop_strip_door_01");
			Var0 = {128f, -1299f, 29f};
			Var0.f_5 = 1840510598;
			break;
		
		case 82:
			Var0.f_3 = joaat("prop_magenta_door");
			Var0 = {96f, -1285f, 29f};
			Var0.f_5 = 1382825971;
			break;
		
		case 83:
			Var0.f_3 = joaat("prop_motel_door_09");
			Var0 = {549f, -1773f, 34f};
			Var0.f_5 = 232536303;
			break;
		
		case 84:
			Var0.f_3 = joaat("v_ilev_gangsafedoor");
			Var0 = {974f, -1839f, 36f};
			Var0.f_5 = 1267246609;
			set_bit(&(Var0.f_4), 3);
			break;
		
		case 85:
			Var0.f_3 = joaat("v_ilev_gangsafedoor");
			Var0 = {977f, -105f, 75f};
			Var0.f_5 = -1900237971;
			set_bit(&(Var0.f_4), 3);
			break;
		
		case 86:
			Var0.f_3 = joaat("v_ilev_ra_door1_l");
			Var0 = {1391f, 1163f, 114f};
			Var0.f_5 = 2077901353;
			break;
		
		case 87:
			Var0.f_3 = joaat("v_ilev_ra_door1_r");
			Var0 = {1391f, 1161f, 114f};
			Var0.f_5 = -2102079126;
			break;
		
		case 88:
			Var0.f_3 = joaat("prop_cs6_03_door_l");
			Var0 = {1396f, 1143f, 115f};
			Var0.f_5 = -1905793212;
			break;
		
		case 89:
			Var0.f_3 = joaat("prop_cs6_03_door_r");
			Var0 = {1396f, 1141f, 115f};
			Var0.f_5 = -1797032505;
			break;
		
		case 90:
			Var0.f_3 = joaat("v_ilev_ra_door1_l");
			Var0 = {1409f, 1146f, 114f};
			Var0.f_5 = -62235167;
			break;
		
		case 91:
			Var0.f_3 = joaat("v_ilev_ra_door1_r");
			Var0 = {1409f, 1148f, 114f};
			Var0.f_5 = -1727188163;
			break;
		
		case 92:
			Var0.f_3 = joaat("v_ilev_ra_door1_l");
			Var0 = {1408f, 1159f, 114f};
			Var0.f_5 = -562748873;
			break;
		
		case 93:
			Var0.f_3 = joaat("v_ilev_ra_door1_r");
			Var0 = {1408f, 1161f, 114f};
			Var0.f_5 = 1976429759;
			break;
		
		case 94:
			Var0.f_3 = joaat("prop_gar_door_01");
			Var0 = {-1067f, -1666f, 5f};
			Var0.f_5 = 1341041543;
			break;
		
		case 95:
			Var0.f_3 = joaat("prop_gar_door_02");
			Var0 = {-1065f, -1669f, 5f};
			Var0.f_5 = -1631467220;
			break;
		
		case 96:
			Var0.f_3 = joaat("prop_map_door_01");
			Var0 = {-1104.66f, -1638.48f, 4.68f};
			Var0.f_5 = -1788473129;
			break;
		
		case 97:
			Var0.f_3 = joaat("v_ilev_fib_door1");
			Var0 = {-31.72f, -1101.85f, 26.57f};
			Var0.f_5 = -1831288286;
			break;
		
		case 98:
			Var0.f_3 = joaat("v_ilev_tort_door");
			Var0 = {134.4f, -2204.1f, 7.52f};
			Var0.f_5 = 963876966;
			break;
		
		case 99:
			Var0.f_3 = joaat("v_ilev_bl_shutter2");
			Var0 = {3628f, 3747f, 28f};
			Var0.f_5 = 1773088812;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 100:
			Var0.f_3 = joaat("v_ilev_bl_shutter2");
			Var0 = {3621f, 3752f, 28f};
			Var0.f_5 = -1332101528;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 101:
			Var0.f_3 = joaat("v_ilev_rc_door3_l");
			Var0 = {-608.73f, -1610.32f, 27.16f};
			Var0.f_5 = -1811763714;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 102:
			Var0.f_3 = joaat("v_ilev_rc_door3_r");
			Var0 = {-611.32f, -1610.09f, 27.16f};
			Var0.f_5 = 1608500665;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 103:
			Var0.f_3 = joaat("v_ilev_rc_door3_l");
			Var0 = {-592.94f, -1631.58f, 27.16f};
			Var0.f_5 = -1456048340;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 104:
			Var0.f_3 = joaat("v_ilev_rc_door3_r");
			Var0 = {-592.71f, -1628.99f, 27.16f};
			Var0.f_5 = 943854909;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 105:
			Var0.f_3 = joaat("v_ilev_ss_door04");
			Var0 = {1991f, 3053f, 47f};
			Var0.f_5 = -89065356;
			break;
		
		case 106:
			Var0.f_3 = 479144380;
			Var0 = {1988.353f, 3054.411f, 47.3204f};
			Var0.f_5 = -925491840;
			break;
		
		case 107:
			Var0.f_3 = joaat("prop_epsilon_door_l");
			Var0 = {-700.17f, 47.31f, 44.3f};
			Var0.f_5 = 1999872275;
			break;
		
		case 108:
			Var0.f_3 = joaat("prop_epsilon_door_r");
			Var0 = {-697.94f, 48.35f, 44.3f};
			Var0.f_5 = 1999872275;
			break;
		
		case 109:
			Var0.f_3 = -1230442770;
			Var0 = {241.3574f, 361.0488f, 105.8963f};
			Var0.f_5 = 1538555582;
			break;
		
		case 110:
			Var0.f_3 = joaat("prop_ch2_09c_garage_door");
			Var0 = {-689.11f, 506.97f, 110.64f};
			Var0.f_5 = -961994186;
			break;
		
		case 111:
			Var0.f_3 = joaat("v_ilev_door_orangesolid");
			Var0 = {-1055.96f, -236.43f, 44.17f};
			Var0.f_5 = -1772472848;
			break;
		
		case 112:
			Var0.f_3 = joaat("prop_magenta_door");
			Var0 = {29f, 3661f, 41f};
			Var0.f_5 = -46374650;
			break;
		
		case 113:
			Var0.f_3 = joaat("prop_cs4_05_tdoor");
			Var0 = {32f, 3667f, 41f};
			Var0.f_5 = -358302761;
			break;
		
		case 114:
			Var0.f_3 = joaat("v_ilev_housedoor1");
			Var0 = {87f, -1959f, 21f};
			Var0.f_5 = -1237936041;
			break;
		
		case 115:
			Var0.f_3 = joaat("v_ilev_fh_frntdoor");
			Var0 = {0f, -1823f, 30f};
			Var0.f_5 = 1487374207;
			break;
		
		case 116:
			Var0.f_3 = joaat("p_cut_door_03");
			Var0 = {23.34f, -1897.6f, 23.05f};
			Var0.f_5 = -199126299;
			break;
		
		case 117:
			Var0.f_3 = joaat("p_cut_door_02");
			Var0 = {524.2f, 3081.14f, 41.16f};
			Var0.f_5 = -897071863;
			break;
		
		case 118:
			Var0.f_3 = joaat("v_ilev_po_door");
			Var0 = {-1910.58f, -576.01f, 19.25f};
			Var0.f_5 = -864465775;
			break;
		
		case 119:
			Var0.f_3 = joaat("prop_ss1_10_door_l");
			Var0 = {-720.39f, 256.86f, 80.29f};
			Var0.f_5 = -208439480;
			break;
		
		case 120:
			Var0.f_3 = joaat("prop_ss1_10_door_r");
			Var0 = {-718.42f, 257.79f, 80.29f};
			Var0.f_5 = -1001088805;
			break;
		
		case 121:
			Var0.f_3 = joaat("v_ilev_fibl_door02");
			Var0 = {106.38f, -742.7f, 46.18f};
			Var0.f_5 = 756894459;
			break;
		
		case 122:
			Var0.f_3 = joaat("v_ilev_fibl_door01");
			Var0 = {105.76f, -746.65f, 46.18f};
			Var0.f_5 = 476981677;
			break;
		
		case 123:
			Var0.f_3 = joaat("v_ilev_ct_door01");
			Var0 = {-2343.53f, 3265.37f, 32.96f};
			Var0.f_5 = 2081647379;
			break;
		
		case 124:
			Var0.f_3 = joaat("v_ilev_ct_door01");
			Var0 = {-2342.23f, 3267.62f, 32.96f};
			Var0.f_5 = 2081647379;
			break;
		
		case 125:
			Var0.f_3 = joaat("ap1_02_door_l");
			Var0 = {-1041.933f, -2748.167f, 22.0308f};
			Var0.f_5 = 169965357;
			break;
		
		case 126:
			Var0.f_3 = joaat("ap1_02_door_r");
			Var0 = {-1044.841f, -2746.489f, 22.0308f};
			Var0.f_5 = 311232516;
			break;
		
		case 128:
			Var0.f_3 = joaat("v_ilev_fb_doorshortl");
			Var0 = {-1045.12f, -232.004f, 39.4379f};
			Var0.f_5 = -1563127729;
			break;
		
		case 129:
			Var0.f_3 = joaat("v_ilev_fb_doorshortr");
			Var0 = {-1046.516f, -229.3581f, 39.4379f};
			Var0.f_5 = 759145763;
			break;
		
		case 130:
			Var0.f_3 = joaat("v_ilev_fb_door01");
			Var0 = {-1083.62f, -260.4167f, 38.1867f};
			Var0.f_5 = -84399179;
			break;
		
		case 131:
			Var0.f_3 = joaat("v_ilev_fb_door02");
			Var0 = {-1080.974f, -259.0204f, 38.1867f};
			Var0.f_5 = -461898059;
			break;
		
		case 127:
			Var0.f_3 = joaat("v_ilev_gtdoor");
			Var0 = {-1042.57f, -240.6f, 38.11f};
			Var0.f_5 = 1259065971;
			break;
		
		case 132:
			Var0.f_3 = joaat("prop_damdoor_01");
			Var0 = {1385.258f, -2079.949f, 52.7638f};
			Var0.f_5 = -884051216;
			break;
		
		case 133:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = {1656.57f, 4849.66f, 42.35f};
			Var0.f_5 = 243782214;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 134:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = {1656.25f, 4852.24f, 42.35f};
			Var0.f_5 = 714115627;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 135:
			Var0.f_3 = -1184516519;
			Var0 = {-1051.402f, -474.6847f, 36.6199f};
			Var0.f_5 = 1668106976;
			set_bit(&(Var0.f_4), true);
			break;
		
		case 136:
			Var0.f_3 = -1184516519;
			Var0 = {-1049.285f, -476.6376f, 36.7584f};
			Var0.f_5 = 1382347031;
			set_bit(&(Var0.f_4), true);
			break;
		
		case 137:
			Var0.f_3 = 1230099731;
			Var0 = {-1210.957f, -580.8765f, 27.2373f};
			Var0.f_5 = -966790948;
			set_bit(&(Var0.f_4), true);
			break;
		
		case 138:
			Var0.f_3 = 1230099731;
			Var0 = {-1212.445f, -578.4401f, 27.2373f};
			Var0.f_5 = -2068750132;
			set_bit(&(Var0.f_4), true);
			break;
		
		case 139:
			Var0.f_3 = joaat("v_ilev_roc_door4");
			Var0 = {-565.1712f, 276.6259f, 83.2863f};
			Var0.f_5 = -1716533184;
			break;
		
		case 140:
			Var0.f_3 = joaat("v_ilev_roc_door4");
			Var0 = {-561.2863f, 293.5043f, 87.7771f};
			Var0.f_5 = 2146505927;
			break;
		
		case 141:
			Var0.f_3 = joaat("p_jewel_door_l");
			Var0 = {-631.96f, -236.33f, 38.21f};
			Var0.f_5 = 1874948872;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 142:
			Var0.f_3 = joaat("p_jewel_door_r1");
			Var0 = {-630.43f, -238.44f, 38.21f};
			Var0.f_5 = -1965020851;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 145:
			Var0.f_3 = -1743257725;
			Var0 = {231.62f, 216.23f, 106.4f};
			Var0.f_5 = 1951546856;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 146:
			Var0.f_3 = -1743257725;
			Var0 = {232.72f, 213.88f, 106.4f};
			Var0.f_5 = -431382051;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 143:
			Var0.f_3 = 110411286;
			Var0 = {258.32f, 203.84f, 106.43f};
			Var0.f_5 = -293975210;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 144:
			Var0.f_3 = 110411286;
			Var0 = {260.76f, 202.95f, 106.43f};
			Var0.f_5 = -785215289;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 148:
			Var0.f_3 = -222270721;
			Var0 = {256.31f, 220.66f, 106.43f};
			Var0.f_5 = -366143778;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 147:
			Var0.f_3 = joaat("v_ilev_bk_door");
			Var0 = {266.36f, 217.57f, 110.43f};
			Var0.f_5 = 440819155;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 149:
			Var0.f_3 = joaat("v_ilev_shrf2door");
			Var0 = {-442.66f, 6015.222f, 31.8663f};
			Var0.f_5 = -588495243;
			break;
		
		case 150:
			Var0.f_3 = joaat("v_ilev_shrf2door");
			Var0 = {-444.4985f, 6017.06f, 31.8663f};
			Var0.f_5 = 1815504139;
			break;
		
		case 151:
			Var0.f_3 = joaat("v_ilev_shrfdoor");
			Var0 = {1855.685f, 3683.93f, 34.5928f};
			Var0.f_5 = 1344911780;
			break;
		
		case 152:
			Var0.f_3 = joaat("prop_bhhotel_door_l");
			Var0 = {-1223.35f, -172.41f, 39.98f};
			Var0.f_5 = -320891223;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 153:
			Var0.f_3 = joaat("prop_bhhotel_door_r");
			Var0 = {-1220.93f, -173.68f, 39.98f};
			Var0.f_5 = 1511747875;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 154:
			Var0.f_3 = joaat("prop_bhhotel_door_l");
			Var0 = {-1211.99f, -190.57f, 39.98f};
			Var0.f_5 = -1517722103;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 155:
			Var0.f_3 = joaat("prop_bhhotel_door_r");
			Var0 = {-1213.26f, -192.98f, 39.98f};
			Var0.f_5 = -1093199712;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 156:
			Var0.f_3 = joaat("prop_bhhotel_door_l");
			Var0 = {-1217.77f, -201.54f, 39.98f};
			Var0.f_5 = 1902048492;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 157:
			Var0.f_3 = joaat("prop_bhhotel_door_r");
			Var0 = {-1219.04f, -203.95f, 39.98f};
			Var0.f_5 = -444768985;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 158:
			Var0.f_3 = joaat("prop_ch3_04_door_01l");
			Var0 = {2514.32f, -317.34f, 93.32f};
			Var0.f_5 = 404057594;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 159:
			Var0.f_3 = joaat("prop_ch3_04_door_01r");
			Var0 = {2512.42f, -319.26f, 93.32f};
			Var0.f_5 = -1417472813;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 160:
			Var0.f_3 = joaat("prop_ch3_01_trlrdoor_l");
			Var0 = {2333.23f, 2574.97f, 47.03f};
			Var0.f_5 = -1376084479;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 161:
			Var0.f_3 = joaat("prop_ch3_01_trlrdoor_r");
			Var0 = {2329.65f, 2576.64f, 47.03f};
			Var0.f_5 = 457472151;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 162:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = {16.1279f, -1114.605f, 29.9469f};
			Var0.f_5 = 1071759151;
			break;
		
		case 163:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = {18.572f, -1115.495f, 29.9469f};
			Var0.f_5 = -2119023917;
			break;
		
		case 165:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = {1698.176f, 3751.506f, 34.8553f};
			Var0.f_5 = -1488490473;
			break;
		
		case 166:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = {1699.937f, 3753.42f, 34.8553f};
			Var0.f_5 = -511187813;
			break;
		
		case 167:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = {244.7274f, -44.0791f, 70.91f};
			Var0.f_5 = -248569395;
			break;
		
		case 168:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = {243.8379f, -46.5232f, 70.91f};
			Var0.f_5 = 989443413;
			break;
		
		case 169:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = {845.3624f, -1024.539f, 28.3448f};
			Var0.f_5 = 2022251829;
			break;
		
		case 170:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = {842.7684f, -1024.539f, 23.3448f};
			Var0.f_5 = 649820567;
			break;
		
		case 171:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = {-326.1122f, 6075.27f, 31.6047f};
			Var0.f_5 = 537455378;
			break;
		
		case 172:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = {-324.273f, 6077.109f, 31.6047f};
			Var0.f_5 = 1121431731;
			break;
		
		case 173:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = {-665.2424f, -944.3256f, 21.9792f};
			Var0.f_5 = -1437380438;
			break;
		
		case 174:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = {-662.6414f, -944.3256f, 21.9792f};
			Var0.f_5 = -946336965;
			break;
		
		case 175:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = {-1313.826f, -389.1259f, 36.8457f};
			Var0.f_5 = 1893144650;
			break;
		
		case 176:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = {-1314.465f, -391.6472f, 36.8457f};
			Var0.f_5 = 435841678;
			break;
		
		case 177:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = {-1114.009f, 2689.77f, 18.7041f};
			Var0.f_5 = 948508314;
			break;
		
		case 178:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = {-1112.071f, 2691.505f, 18.7041f};
			Var0.f_5 = -1796714665;
			break;
		
		case 179:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = {-3164.845f, 1081.392f, 20.9887f};
			Var0.f_5 = -1155247245;
			break;
		
		case 180:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = {-3163.812f, 1083.778f, 20.9887f};
			Var0.f_5 = 782482084;
			break;
		
		case 181:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = {2570.905f, 303.3556f, 108.8848f};
			Var0.f_5 = -1194470801;
			break;
		
		case 182:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = {2568.304f, 303.3556f, 108.8848f};
			Var0.f_5 = -2129698061;
			break;
		
		case 183:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = {813.1779f, -2148.27f, 29.7689f};
			Var0.f_5 = 1071759151;
			break;
		
		case 184:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = {810.5769f, -2148.27f, 29.7689f};
			Var0.f_5 = -2119023917;
			break;
		
		case 164:
			Var0.f_3 = joaat("v_ilev_gc_door01");
			Var0 = {6.8179f, -1098.209f, 29.9469f};
			Var0.f_5 = 1487704245;
			set_bit(&(Var0.f_4), 3);
			break;
		
		case 185:
			Var0.f_3 = joaat("v_ilev_gc_door01");
			Var0 = {827.5342f, -2160.493f, 29.7688f};
			Var0.f_5 = 1529812051;
			set_bit(&(Var0.f_4), 3);
			break;
		
		case 186:
			Var0.f_3 = joaat("prop_lrggate_01c_l");
			Var0 = {-1107.01f, 289.38f, 64.76f};
			Var0.f_5 = 904342475;
			break;
		
		case 187:
			Var0.f_3 = joaat("prop_lrggate_01c_r");
			Var0 = {-1101.62f, 290.36f, 64.76f};
			Var0.f_5 = -795418380;
			break;
		
		case 188:
			Var0.f_3 = joaat("prop_lrggate_01c_l");
			Var0 = {-1138.64f, 300.82f, 67.18f};
			Var0.f_5 = -1502457334;
			break;
		
		case 189:
			Var0.f_3 = joaat("prop_lrggate_01c_r");
			Var0 = {-1137.05f, 295.59f, 67.18f};
			Var0.f_5 = -1994188940;
			break;
		
		case 190:
			Var0.f_3 = joaat("v_ilev_bl_doorel_l");
			Var0 = {-2053.16f, 3239.49f, 30.5f};
			Var0.f_5 = -621770121;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 191:
			Var0.f_3 = joaat("v_ilev_bl_doorel_r");
			Var0 = {-2054.39f, 3237.23f, 30.5f};
			Var0.f_5 = 1018580481;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 192:
			Var0.f_3 = joaat("v_ilev_cbankcountdoor01");
			Var0 = {-108.91f, 6469.11f, 31.91f};
			Var0.f_5 = 421926217;
			break;
		
		case 193:
			Var0.f_3 = joaat("prop_fnclink_03gate5");
			Var0 = {-182.91f, 6168.37f, 32.14f};
			Var0.f_5 = -1331552374;
			set_bit(&(Var0.f_4), 2);
			break;
	}
	switch (iParam0)
	{
		case 196:
			Var0.f_3 = joaat("v_ilev_csr_door_l");
			Var0 = {-59.89f, -1092.95f, 26.88f};
			Var0.f_5 = -293141277;
			break;
		
		case 197:
			Var0.f_3 = joaat("v_ilev_csr_door_r");
			Var0 = {-60.55f, -1094.75f, 26.89f};
			Var0.f_5 = 506750037;
			break;
		
		case 194:
			Var0.f_3 = joaat("v_ilev_csr_door_l");
			Var0 = {-39.13f, -1108.22f, 26.72f};
			Var0.f_5 = 1496005418;
			break;
		
		case 195:
			Var0.f_3 = joaat("v_ilev_csr_door_r");
			Var0 = {-37.33f, -1108.87f, 26.72f};
			Var0.f_5 = -1863079210;
			break;
		
		case 198:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = {1943.73f, 3803.63f, 32.31f};
			Var0.f_5 = -2018911784;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 199:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = {316.39f, -276.49f, 54.52f};
			Var0.f_5 = -93934272;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 200:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = {313.96f, -275.6f, 54.52f};
			Var0.f_5 = 667682830;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 201:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = {-2965.71f, 484.22f, 16.05f};
			Var0.f_5 = 1876735830;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 202:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = {-2965.82f, 481.63f, 16.05f};
			Var0.f_5 = -2112857171;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 205:
			Var0.f_3 = joaat("v_ilev_abbmaindoor");
			Var0 = {962.1f, -2183.83f, 31.06f};
			Var0.f_5 = 2046930518;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 206:
			Var0.f_3 = joaat("v_ilev_abbmaindoor2");
			Var0 = {961.79f, -2187.08f, 31.06f};
			Var0.f_5 = 1208502884;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 207:
			Var0.f_3 = joaat("prop_ch3_04_door_02");
			Var0 = {2508.43f, -336.63f, 115.76f};
			Var0.f_5 = 1986432421;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 208:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = {-2255.19f, 322.26f, 184.93f};
			Var0.f_5 = -722798986;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 209:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = {-2254.06f, 319.7f, 184.93f};
			Var0.f_5 = 204301578;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 210:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = {-2301.13f, 336.91f, 184.93f};
			Var0.f_5 = -320140460;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 211:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = {-2298.57f, 338.05f, 184.93f};
			Var0.f_5 = 65222916;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 212:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = {-2222.32f, 305.86f, 184.93f};
			Var0.f_5 = -920027322;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 213:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = {-2221.19f, 303.3f, 184.93f};
			Var0.f_5 = -58432001;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 214:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = {-2280.6f, 265.43f, 184.93f};
			Var0.f_5 = -2007378629;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 215:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = {-2278.04f, 266.57f, 184.93f};
			Var0.f_5 = 418772613;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 216:
			Var0.f_3 = joaat("prop_gar_door_04");
			Var0 = {778.31f, -1867.49f, 30.66f};
			Var0.f_5 = 1679064921;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 217:
			Var0.f_3 = joaat("prop_gate_tep_01_l");
			Var0 = {-721.35f, 91.01f, 56.68f};
			Var0.f_5 = 412198396;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 218:
			Var0.f_3 = joaat("prop_gate_tep_01_r");
			Var0 = {-728.84f, 88.64f, 56.68f};
			Var0.f_5 = -1053755588;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 219:
			Var0.f_3 = joaat("prop_artgallery_02_dr");
			Var0 = {-2287.62f, 363.9f, 174.93f};
			Var0.f_5 = -53446139;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 220:
			Var0.f_3 = joaat("prop_artgallery_02_dl");
			Var0 = {-2289.78f, 362.91f, 174.93f};
			Var0.f_5 = 1333960556;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 221:
			Var0.f_3 = joaat("prop_artgallery_02_dr");
			Var0 = {-2289.86f, 362.88f, 174.93f};
			Var0.f_5 = -41786493;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 222:
			Var0.f_3 = joaat("prop_artgallery_02_dl");
			Var0 = {-2292.01f, 361.89f, 174.93f};
			Var0.f_5 = 1750120734;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 223:
			Var0.f_3 = joaat("prop_fnclink_07gate1");
			Var0 = {1803.94f, 3929.01f, 33.72f};
			Var0.f_5 = 1661506222;
			break;
		
		case 203:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = {-348.81f, -47.26f, 49.39f};
			Var0.f_5 = -2116116146;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 204:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = {-351.26f, -46.41f, 49.39f};
			Var0.f_5 = -74083138;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 224:
			Var0.f_3 = joaat("prop_abat_slide");
			Var0 = {962.9084f, -2105.814f, 34.6432f};
			Var0.f_5 = -1670085357;
			break;
	}
	return Var0;
}

bool func_122()
{
	if ((func_38() == -1 || func_38() == 999) && !func_123() == 0)
	{
		return true;
	}
	return false;
}

var func_123()
{
	return Global_25121;
}

int func_124(vector3 vParam0, int iParam1, int iParam2)
{
	int iVar0;
	Vector3 fVar1;
	Vector3 fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = 10;
	iVar0 = 0;
	while (iVar0 <= 10 - 1)
	{
		if (Global_86649[iVar0 /*10*/].f_7 != 263)
		{
			if (Global_86649[iVar0 /*10*/].f_9 == iParam3 || iParam3 == 145)
			{
				if (func_125(iVar0) || iParam4 == 0)
				{
					fVar1 = get_distance_between_coords(vParam0, Global_86649[iVar0 /*10*/].f_3, 1);
					if (fVar1 < fVar2)
					{
						fVar2 = fVar1;
						iVar3 = iVar0;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

int func_125(int iParam0)
{
	return is_bit_set(Global_101154.f_5919[iParam0], false);
}

void func_126(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_127(iParam0, iVar0);
		iVar0++;
	}
}

void func_127(int iParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	if (((iParam0 != 0 || iParam0 != 1) || iParam0 != 2) || iParam0 != 3)
	{
		return;
	}
	func_128(iParam0, iParam1, &iVar2, &iVar3);
	if (network_is_game_in_progress())
	{
		iVar0 = func_34(iVar3, -1, 0);
	}
	else
	{
		stat_get_int(iVar2, &iVar0, -1);
	}
	switch (iParam1)
	{
		case 2:
			fVar1 = 0.8f + 0.4f * to_float(iVar0) / 100f;
			set_player_melee_weapon_damage_modifier(player_id(), fVar1);
			break;
		
		case 7:
			if (_get_number_of_instances_of_streamed_script(joaat("armenian3")) != 0 || _get_number_of_instances_of_streamed_script(joaat("trevor3")) != 0)
			{
				Global_88894 = 1;
			}
			else
			{
				fVar1 = 1f - to_float(iVar0) / 100f;
				set_player_noise_multiplier(player_id(), fVar1);
				set_player_sneaking_noise_multiplier(player_id(), fVar1);
				set_player_stealth_perception_modifier(player_id(), fVar1);
			}
			break;
	}
}

void func_128(int iParam0, int iParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp0_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp0_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp0_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp0_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp0_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp0_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp0_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp0_stealth_ability");
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp1_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp1_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp1_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp1_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp1_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp1_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp1_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp1_stealth_ability");
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp2_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp2_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp2_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp2_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp2_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp2_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp2_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp2_stealth_ability");
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					*uParam3 = 64;
					break;
				
				case 1:
					*uParam3 = 65;
					break;
				
				case 3:
					*uParam3 = 67;
					break;
				
				case 2:
					*uParam3 = 66;
					break;
				
				case 4:
					*uParam3 = 68;
					break;
				
				case 5:
					*uParam3 = 69;
					break;
				
				case 6:
					*uParam3 = 70;
					break;
				
				case 7:
					*uParam3 = 71;
					break;
			}
			break;
	}
}

void func_129()
{
	struct<50> Var0;
	
	if ((is_ped_injured(player_ped_id()) || !func_147(func_177())) || !func_135())
	{
		return;
	}
	Var0 = 12;
	Var0.f_13 = 12;
	Var0.f_26 = 12;
	Var0.f_39 = 9;
	Var0.f_49 = 9;
	func_131(player_ped_id(), &Var0, 1);
	func_130(1306, Var0[0], -1, 1);
	func_130(1307, Var0[1], -1, 1);
	func_130(1308, Var0[2], -1, 1);
	func_130(1309, Var0[3], -1, 1);
	func_130(1310, Var0[4], -1, 1);
	func_130(1311, Var0[5], -1, 1);
	func_130(1312, Var0[6], -1, 1);
	func_130(1313, Var0[7], -1, 1);
	func_130(1314, Var0[8], -1, 1);
	func_130(1315, Var0[9], -1, 1);
	func_130(1316, Var0[10], -1, 1);
	func_130(1317, Var0[11], -1, 1);
	func_130(1318, Var0.f_13[0], -1, 1);
	func_130(1319, Var0.f_13[1], -1, 1);
	func_130(1320, Var0.f_13[2], -1, 1);
	func_130(1321, Var0.f_13[3], -1, 1);
	func_130(1322, Var0.f_13[4], -1, 1);
	func_130(1323, Var0.f_13[5], -1, 1);
	func_130(1324, Var0.f_13[6], -1, 1);
	func_130(1325, Var0.f_13[7], -1, 1);
	func_130(1326, Var0.f_13[8], -1, 1);
	func_130(1327, Var0.f_13[9], -1, 1);
	func_130(1328, Var0.f_13[10], -1, 1);
	func_130(1329, Var0.f_13[11], -1, 1);
	func_130(1330, Var0.f_26[0], -1, 1);
	func_130(1331, Var0.f_26[1], -1, 1);
	func_130(1332, Var0.f_26[2], -1, 1);
	func_130(1333, Var0.f_26[3], -1, 1);
	func_130(1334, Var0.f_26[4], -1, 1);
	func_130(1335, Var0.f_26[5], -1, 1);
	func_130(1336, Var0.f_26[6], -1, 1);
	func_130(1337, Var0.f_26[7], -1, 1);
	func_130(1338, Var0.f_26[8], -1, 1);
	func_130(1339, Var0.f_26[9], -1, 1);
	func_130(1340, Var0.f_26[10], -1, 1);
	func_130(1341, Var0.f_26[11], -1, 1);
	func_130(1342, Var0.f_39[0], -1, 1);
	func_130(1343, Var0.f_39[1], -1, 1);
	func_130(1344, Var0.f_39[2], -1, 1);
	func_130(1345, Var0.f_39[3], -1, 1);
	func_130(1346, Var0.f_39[4], -1, 1);
	func_130(1347, Var0.f_39[5], -1, 1);
	func_130(1348, Var0.f_39[6], -1, 1);
	func_130(1349, Var0.f_39[7], -1, 1);
	func_130(1350, Var0.f_39[8], -1, 1);
	func_130(1351, Var0.f_49[0], -1, 1);
	func_130(1352, Var0.f_49[1], -1, 1);
	func_130(1353, Var0.f_49[2], -1, 1);
	func_130(1354, Var0.f_49[3], -1, 1);
	func_130(1355, Var0.f_49[4], -1, 1);
	func_130(1356, Var0.f_49[5], -1, 1);
	func_130(1357, Var0.f_49[6], -1, 1);
	func_130(1358, Var0.f_49[7], -1, 1);
	func_130(1359, Var0.f_49[8], -1, 1);
	func_130(1360, func_177(), -1, 1);
	stat_set_bool(joaat("clo_stored_initial"), true, 1);
	Global_101154.f_1826.f_539.f_3543 = 1;
}

var func_130(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_36();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	iVar0 = false;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = _0x61E111E323419E07(iParam0 - 384, 0, 1, iParam2);
		iVar1 = iParam0 - 384 - _0x94F12ABF9C79E339(iParam0 - 384) * 8 * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = _0x61E111E323419E07(iParam0 - 457, 1, 1, iParam2);
		iVar1 = iParam0 - 457 - _0x94F12ABF9C79E339(iParam0 - 457) * 8 * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = _0x61E111E323419E07(iParam0 - 1281, 0, 0, 0);
		iVar1 = iParam0 - 1281 - _0x94F12ABF9C79E339(iParam0 - 1281) * 8 * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = _0x61E111E323419E07(iParam0 - 1305, 1, 0, 0);
		iVar1 = iParam0 - 1305 - _0x94F12ABF9C79E339(iParam0 - 1305) * 8 * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = _0xD16C2AD6B8E32854(iParam0 - 1393, 0, 1, iParam2);
		iVar1 = iParam0 - 1393 - _0x94F12ABF9C79E339(iParam0 - 1393) * 8 * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = _0xD16C2AD6B8E32854(iParam0 - 1361, 0, 0, 0);
		iVar1 = iParam0 - 1361 - _0x94F12ABF9C79E339(iParam0 - 1361) * 8 * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = _0x2B4CDCA6F07FF3DA(iParam0 - 3879, 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = iParam0 - 3879 - _0x94F12ABF9C79E339(iParam0 - 3879) * 8 * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = _0x2B4CDCA6F07FF3DA(iParam0 - 4143, 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = iParam0 - 4143 - _0x94F12ABF9C79E339(iParam0 - 4143) * 8 * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = _0x2B4CDCA6F07FF3DA(iParam0 - 4399, 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = iParam0 - 4399 - _0x94F12ABF9C79E339(iParam0 - 4399) * 8 * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = _0x2B4CDCA6F07FF3DA(iParam0 - 6413, 0, 1, iParam2, "_APAPSTAT_INT");
		iVar1 = iParam0 - 6413 - _0x94F12ABF9C79E339(iParam0 - 6413) * 8 * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = _0x2B4CDCA6F07FF3DA(iParam0 - 7262, 0, 1, iParam2, "_LR2PSTAT_INT");
		iVar1 = iParam0 - 7262 - _0x94F12ABF9C79E339(iParam0 - 7262) * 8 * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = _0x2B4CDCA6F07FF3DA(iParam0 - 7641, 0, 1, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = iParam0 - 7641 - _0x94F12ABF9C79E339(iParam0 - 7641) * 8 * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = _0x2B4CDCA6F07FF3DA(iParam0 - 7313, 0, 0, 0, "_NGDLCPSTAT_INT");
		iVar1 = iParam0 - 7313 - _0x94F12ABF9C79E339(iParam0 - 7313) * 8 * 8;
	}
	uVar2 = stat_set_masked_int(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

void func_131(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (!is_ped_injured(iParam0))
	{
		iVar0 = func_148(iParam0);
		iVar1 = false;
		while (iVar1 < 12)
		{
			func_134(iParam0, iVar1, uParam1.f_13[iVar1], uParam1[iVar1], uParam1.f_26[iVar1], iParam2, 145);
			iVar1++;
		}
		iVar1 = false;
		while (iVar1 < 9)
		{
			func_133(iParam0, iVar1, uParam1.f_39[iVar1], uParam1.f_49[iVar1], iParam2, 145);
			iVar1++;
		}
		if (func_147(iVar0))
		{
			*uParam1.f_59 = Global_101154.f_1826.f_539[iVar0 /*65*/].f_59;
			*uParam1.f_60 = Global_101154.f_1826.f_539[iVar0 /*65*/].f_60;
			*uParam1.f_61 = Global_101154.f_1826.f_539[iVar0 /*65*/].f_61;
			*uParam1.f_62 = Global_101154.f_1826.f_539[iVar0 /*65*/].f_62;
			*uParam1.f_63 = Global_101154.f_1826.f_539[iVar0 /*65*/].f_63;
			*uParam1.f_64 = Global_101154.f_1826.f_539[iVar0 /*65*/].f_64;
		}
		else if (network_is_game_in_progress() && get_entity_model(iParam0) == get_entity_model(player_ped_id()))
		{
			if (func_132(161, -1))
			{
				*uParam1.f_59 = func_34(2043, Global_69309, 0);
			}
			else
			{
				*uParam1.f_59 = func_34(745, Global_69309, 0);
			}
			*uParam1.f_60 = func_34(746, Global_69309, 0);
			*uParam1.f_61 = func_34(747, Global_69309, 0);
		}
		if (network_is_game_in_progress() && iParam0 == player_ped_id())
		{
			if (func_132(161, -1))
			{
				*uParam1.f_59 = func_34(2043, Global_69309, 0);
			}
			else
			{
				*uParam1.f_59 = func_34(745, Global_69309, 0);
			}
		}
	}
}

int func_132(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2490231[iParam0 /*5*/][func_35(iParam1)];
	if (stat_get_bool(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_133(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	iVar0 = func_148(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = get_ped_prop_index(iParam0, iParam1);
		*uParam3 = get_ped_prop_texture_index(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam5;
	}
	if (iParam4 == 0)
	{
		return;
	}
	if (iParam1 == 0)
	{
		if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
		{
			if (iParam0 != 0)
			{
				if (is_ped_wearing_helmet(iParam0) && _0x451294E859ECC018(iParam0) != -1)
				{
					*uParam2 = _0x451294E859ECC018(iParam0);
					*uParam3 = _0x9D728C1E12BF5518(iParam0);
				}
			}
		}
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 0)
			{
				if (*uParam2 == 7)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 28)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 14 && *uParam2 <= 20)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			else if (iParam1 == 1)
			{
				if (*uParam2 == 1)
				{
					if (iParam4 & 2 != 0 || iParam4 & 64 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				if (*uParam2 == 2)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 4)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 6)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 17)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 20)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 8 && *uParam2 <= 14)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				if (*uParam2 == 9)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 12)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if ((*uParam2 >= 14 && *uParam2 <= 20) || *uParam2 == 2)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
	}
}

void func_134(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	iVar0 = func_148(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = get_ped_drawable_variation(iParam0, iParam1);
		*uParam3 = get_ped_texture_variation(iParam0, iParam1);
		*uParam4 = get_ped_palette_variation(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam6;
	}
	if (iParam5 == 0)
	{
		return;
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 15)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 3 || *uParam2 == 22)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 8)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 1 || *uParam2 == 10)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 19)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 3)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (*uParam2 >= 5 && *uParam2 <= 7)
				{
					if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
	}
}

bool func_135()
{
	if (func_137() && func_136(0))
	{
		return true;
	}
	return false;
}

var func_136(int iParam0)
{
	return Global_1312369[iParam0];
}

var func_137()
{
	return func_136(func_36() + 1);
}

void func_138(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			set_relationship_between_groups(255, 1166638144, 1862763509);
			set_relationship_between_groups(2, 1862763509, -1865950624);
			set_relationship_between_groups(255, -1865950624, 1862763509);
			set_relationship_between_groups(1, Global_86614, 1862763509);
			set_relationship_between_groups(1, 1862763509, Global_86614);
			set_relationship_between_groups(1, Global_86615, 1862763509);
			set_relationship_between_groups(1, 1862763509, Global_86615);
			set_relationship_between_groups(1, Global_86616, 1862763509);
			set_relationship_between_groups(1, 1862763509, Global_86616);
			break;
		
		case 1:
			set_relationship_between_groups(1, 1166638144, 1862763509);
			set_relationship_between_groups(2, 1862763509, -1865950624);
			set_relationship_between_groups(255, -1865950624, 1862763509);
			set_relationship_between_groups(1, Global_86614, 1862763509);
			set_relationship_between_groups(1, 1862763509, Global_86614);
			set_relationship_between_groups(1, Global_86615, 1862763509);
			set_relationship_between_groups(1, 1862763509, Global_86615);
			set_relationship_between_groups(1, Global_86616, 1862763509);
			set_relationship_between_groups(1, 1862763509, Global_86616);
			break;
		
		case 2:
			set_relationship_between_groups(255, 1166638144, 1862763509);
			set_relationship_between_groups(5, 1862763509, -1865950624);
			set_relationship_between_groups(5, -1865950624, 1862763509);
			set_relationship_between_groups(1, Global_86614, 1862763509);
			set_relationship_between_groups(1, 1862763509, Global_86614);
			set_relationship_between_groups(1, Global_86615, 1862763509);
			set_relationship_between_groups(1, 1862763509, Global_86615);
			set_relationship_between_groups(1, Global_86616, 1862763509);
			set_relationship_between_groups(1, 1862763509, Global_86616);
			break;
		
		default:
			break;
	}
}

void func_139()
{
	int iVar0;
	int iVar1;
	
	func_92();
	iVar0 = get_main_player_blip_id();
	if (does_blip_exist(iVar0))
	{
		iVar1 = Global_101154.f_1826.f_539.f_3549;
		if (func_13(14))
		{
			iVar1 = func_148(player_ped_id());
		}
		if (iVar1 == 0)
		{
			set_blip_name_from_text_file(iVar0, "BLIP_MICHAEL");
		}
		else if (iVar1 == 1)
		{
			set_blip_name_from_text_file(iVar0, "BLIP_FRANKLIN");
		}
		else if (iVar1 == 2)
		{
			set_blip_name_from_text_file(iVar0, "BLIP_TREV");
		}
		else
		{
			set_blip_name_from_text_file(iVar0, "BLIP_PLAYER");
		}
	}
}

void func_140(int iParam0)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<2> Var6;
	
	iVar0 = 0;
	while (iVar0 < 44)
	{
		iVar2 = func_141(iVar0);
		if (iVar2 != 0)
		{
			iVar3 = get_ped_weapontype_in_slot(iParam0, iVar2);
			if ((iVar3 != 0 && iVar3 != joaat("weapon_unarmed")) && iVar3 != joaat("object"))
			{
				if (get_ammo_in_ped_weapon(iParam0, iVar3) == -1)
				{
					if (get_max_ammo(iParam0, iVar3, &uVar1))
					{
						set_ped_infinite_ammo(iParam0, 0, iVar3);
					}
				}
			}
		}
		iVar0++;
	}
	iVar5 = get_num_dlc_weapons();
	iVar4 = 0;
	while (iVar4 < iVar5)
	{
		if (get_dlc_weapon_data(iVar4, &Var6))
		{
			iVar3 = Var6.f_1;
			if (get_ammo_in_ped_weapon(iParam0, iVar3) == -1)
			{
				if (get_max_ammo(iParam0, iVar3, &uVar1))
				{
					set_ped_infinite_ammo(iParam0, 0, iVar3);
				}
			}
		}
		iVar4++;
	}
}

int func_141(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 1993361168;
			break;
		
		case 1:
			iVar0 = 1277010230;
			break;
		
		case 2:
			iVar0 = 932043479;
			break;
		
		case 3:
			iVar0 = -690654591;
			break;
		
		case 4:
			iVar0 = -1459198205;
			break;
		
		case 5:
			iVar0 = 195782970;
			break;
		
		case 6:
			iVar0 = -438797331;
			break;
		
		case 7:
			iVar0 = 896793492;
			break;
		
		case 8:
			iVar0 = 495159329;
			break;
		
		case 9:
			iVar0 = -1155528315;
			break;
		
		case 10:
			iVar0 = -515636489;
			break;
		
		case 11:
			iVar0 = -871913299;
			break;
		
		case 12:
			iVar0 = -1352759032;
			break;
		
		case 13:
			iVar0 = -542958961;
			break;
		
		case 14:
			iVar0 = 1682645887;
			break;
		
		case 15:
			iVar0 = -859470162;
			break;
		
		case 16:
			iVar0 = -2125426402;
			break;
		
		case 17:
			iVar0 = 2067210266;
			break;
		
		case 18:
			iVar0 = -538172856;
			break;
		
		case 19:
			iVar0 = 1783244476;
			break;
		
		case 20:
			iVar0 = 439844898;
			break;
		
		case 21:
			iVar0 = -24829327;
			break;
		
		case 22:
			iVar0 = 1949306232;
			break;
		
		case 23:
			iVar0 = -1941230881;
			break;
		
		case 24:
			iVar0 = -1033554448;
			break;
		
		case 25:
			iVar0 = 320513715;
			break;
		
		case 26:
			iVar0 = -695165975;
			break;
		
		case 27:
			iVar0 = -281028447;
			break;
		
		case 28:
			iVar0 = -686713772;
			break;
		
		case 29:
			iVar0 = 347509793;
			break;
		
		case 30:
			iVar0 = 1769089473;
			break;
		
		case 31:
			iVar0 = 189935548;
			break;
		
		case 33:
			iVar0 = 248801358;
			break;
		
		case 34:
			iVar0 = 386596758;
			break;
		
		case 35:
			iVar0 = -157212362;
			break;
		
		case 36:
			iVar0 = 436985596;
			break;
		
		case 37:
			iVar0 = -47957369;
			break;
		
		case 38:
			iVar0 = 575938238;
			break;
	}
	return iVar0;
}

void func_142(int iParam0)
{
	int iVar0;
	
	iVar0 = func_148(iParam0);
	if (func_147(iVar0) && !is_ped_injured(iParam0))
	{
		if (iParam0 == player_ped_id() && get_ped_max_health(iParam0) == 200)
		{
			set_ped_max_health(iParam0, round(IntToFloat(get_ped_max_health(iParam0)) * Global_262145.f_105));
		}
		if (Global_101154.f_1826.f_539.f_290[iVar0] <= 0f)
		{
			Global_101154.f_1826.f_539.f_290[iVar0] = 100f;
		}
		else if (Global_101154.f_1826.f_539.f_290[iVar0] <= 10f)
		{
			Global_101154.f_1826.f_539.f_290[iVar0] = 10f;
		}
		set_entity_health(iParam0, round(Global_101154.f_1826.f_539.f_290[iVar0] / 100f * to_float(get_ped_max_health(iParam0)) - 100f + 100f));
	}
}

int func_143(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	else if (iParam0 == 2)
	{
		return 2;
	}
	else if (iParam0 == 1)
	{
		return 1;
	}
	else if (iParam0 == 145)
	{
		return 3;
	}
	return 4;
}

bool func_144(int iParam0)
{
	if (Global_35711 == 15)
	{
		return false;
	}
	if (func_145(iParam0))
	{
		return false;
	}
	return true;
}

int func_145(int iParam0)
{
	return func_146(iParam0, Global_35711);
}

bool func_146(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return true;
	}
	if (iParam0 == 15)
	{
		return false;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return false;
					break;
			}
			return true;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return true;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return true;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return true;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return true;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return true;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return true;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return true;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return true;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return true;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return true;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return true;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return true;
					break;
			}
			break;
	}
	return false;
}

int func_147(int iParam0)
{
	return iParam0 < 3;
}

int func_148(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (does_entity_exist(iParam0))
	{
		iVar1 = get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_93(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_149(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	else if (iParam0 == 2)
	{
		return 2;
	}
	else if (iParam0 == 1)
	{
		return 1;
	}
	return 145;
}

void func_150(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_151(4, *iParam1, 0);
			func_151(7, *iParam1, 0);
			func_151(8, *iParam1, 0);
			func_151(11, *iParam1, 0);
			break;
		
		case 1:
			func_151(4, *iParam1, 0);
			func_151(7, *iParam1, 0);
			func_151(8, *iParam1, 0);
			func_151(11, *iParam1, 0);
			if (Global_101154.f_7775.f_99.f_58[126])
			{
				func_151(12, *iParam1, 0);
			}
			break;
		
		case 2:
			func_151(4, *iParam1, 0);
			func_151(7, *iParam1, 0);
			func_151(8, *iParam1, 0);
			func_151(11, *iParam1, 0);
			break;
	}
}

void func_151(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (!iParam2)
	{
		if (!does_entity_exist(iParam1))
		{
			return;
		}
	}
	if (Global_34834[iParam0 /*31*/].f_24 == 0)
	{
		return;
	}
	iVar1 = false;
	iVar0 = 0;
	while (iVar0 < Global_34834[iParam0 /*31*/].f_24)
	{
		if (iVar1)
		{
			Global_34834[iParam0 /*31*/].f_25[iVar0 - 1] = Global_34834[iParam0 /*31*/].f_25[iVar0];
			Global_34834[iParam0 /*31*/].f_25[iVar0] = 0;
		}
		else if (iParam1 == Global_34834[iParam0 /*31*/].f_25[iVar0])
		{
			Global_34834[iParam0 /*31*/].f_25[iVar0] = 0;
			iVar1 = true;
		}
		iVar0++;
	}
	if (iVar1)
	{
		Global_34834[iParam0 /*31*/].f_24--;
	}
}

void func_152(int iParam0, int iParam1)
{
	func_163(iParam0);
	func_158(iParam0, iParam1);
	func_157(iParam0);
	func_156(iParam0);
	func_155(iParam0);
	func_154(iParam0);
	func_153(iParam0);
}

void func_153(int iParam0)
{
	int iVar0;
	
	iVar0 = func_148(iParam0);
	if (func_147(iVar0) && !is_ped_injured(iParam0))
	{
		if (iParam0 == player_ped_id())
		{
			Global_101154.f_1826.f_539.f_1556[iVar0] = get_player_wanted_level(player_id());
		}
	}
}

void func_154(int iParam0)
{
	int iVar0;
	
	iVar0 = func_148(iParam0);
	if (func_147(iVar0) && !is_ped_injured(iParam0))
	{
		Global_101154.f_1826.f_539.f_1546[iVar0 /*3*/] = {get_entity_velocity(iParam0)};
	}
}

void func_155(int iParam0)
{
	int iVar0;
	
	iVar0 = func_148(iParam0);
	if (func_147(iVar0) && !is_ped_injured(iParam0))
	{
		if (is_player_switch_in_progress() && get_player_switch_type() != 3)
		{
			if (get_player_switch_state() == 8)
			{
				return;
			}
		}
		Global_101154.f_1826.f_539.f_1528[iVar0 /*3*/] = {get_entity_coords(iParam0, 1)};
		Global_101154.f_1826.f_539.f_1538[iVar0] = get_entity_heading(iParam0);
		Global_101154.f_1826.f_539.f_1542[iVar0] = get_room_key_from_entity(iParam0);
		if (Global_101154.f_1826.f_539.f_1528[iVar0 /*3*/] >= 8000f)
		{
			Global_101154.f_1826.f_539.f_1528[iVar0 /*3*/] = 7500f;
		}
		else if (Global_101154.f_1826.f_539.f_1528[iVar0 /*3*/] <= -8000f)
		{
			Global_101154.f_1826.f_539.f_1528[iVar0 /*3*/] = -7500f;
		}
		if (Global_101154.f_1826.f_539.f_1528[iVar0 /*3*/].f_1 >= 8000f)
		{
			Global_101154.f_1826.f_539.f_1528[iVar0 /*3*/].f_1 = 7500f;
		}
		else if (Global_101154.f_1826.f_539.f_1528[iVar0 /*3*/].f_1 <= -8000f)
		{
			Global_101154.f_1826.f_539.f_1528[iVar0 /*3*/].f_1 = -7500f;
		}
		if (Global_101154.f_1826.f_539.f_1528[iVar0 /*3*/].f_2 >= 2500f)
		{
			Global_101154.f_1826.f_539.f_1528[iVar0 /*3*/].f_2 = 2000f;
		}
	}
}

void func_156(int iParam0)
{
	int iVar0;
	
	iVar0 = func_148(iParam0);
	if (func_147(iVar0) && !is_ped_injured(iParam0))
	{
		Global_101154.f_1826.f_539.f_294[iVar0] = get_ped_armour(iParam0);
	}
}

void func_157(int iParam0)
{
	int iVar0;
	
	iVar0 = func_148(iParam0);
	if (func_147(iVar0) && !is_ped_injured(iParam0))
	{
		Global_101154.f_1826.f_539.f_290[iVar0] = to_float(get_entity_health(iParam0)) - 100f / to_float(get_ped_max_health(iParam0)) - 100f * 100f;
	}
}

void func_158(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_148(iParam0);
	if (func_147(iVar0) && !is_ped_injured(iParam0))
	{
		if (iParam0 == player_ped_id())
		{
			func_159(iParam0, &(Global_101154.f_1826.f_539.f_298[iVar0 /*284*/]));
			iVar2 = 0;
			while (iVar2 <= 8 - 1)
			{
				Global_101154.f_1826.f_539.f_1151[iVar2 /*4*/][iVar0] = _0xA13E93403F26C812(iVar2);
				if (iParam1)
				{
					iVar1 = _0xA48931185F0536FE();
					if (Global_101154.f_1826.f_539.f_1151[iVar2 /*4*/][iVar0] == iVar1)
					{
						Global_101154.f_1826.f_539.f_1184 = iVar2;
					}
				}
				iVar2++;
			}
			get_player_parachute_pack_tint_index(player_id(), &iVar3);
			if (iVar0 == 0)
			{
				stat_set_int(joaat("sp0_parachute_current_tint"), iVar3, 1);
			}
			else if (iVar0 == 1)
			{
				stat_set_int(joaat("sp1_parachute_current_tint"), iVar3, 1);
			}
			else if (iVar0 == 2)
			{
				stat_set_int(joaat("sp2_parachute_current_tint"), iVar3, 1);
			}
		}
	}
}

void func_159(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	int iVar7;
	int iVar8;
	struct<2> Var9;
	struct<4> Var48;
	int iVar70;
	
	if (!is_ped_injured(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 44 - 1)
		{
			*(uParam1[iVar0 /*3*/]).f_1 = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 44 - 1)
		{
			iVar3 = func_141(iVar0);
			if (iVar3 != 0)
			{
				vVar4.x = get_ped_weapontype_in_slot(iParam0, func_141(iVar0));
				vVar4.y = 0;
				vVar4.z = 0;
				if (vVar4.x != 0 && vVar4.x != joaat("weapon_unarmed"))
				{
					vVar4.y = get_ammo_in_ped_weapon(iParam0, vVar4.x);
					if (vVar4.x == joaat("gadget_parachute"))
					{
						vVar4.y = 1;
					}
					set_bit(&(vVar4.f_2), 20 + get_ped_weapon_tint_index(iParam0, vVar4.x));
					if (vVar4.y == -1)
					{
						if (!get_max_ammo(iParam0, vVar4.x, &(vVar4.f_1)))
						{
							vVar4.y = 0;
						}
					}
					*(uParam1[iVar0 /*3*/]).f_1 = vVar4.y;
					iVar1 = false;
					iVar2 = func_161(vVar4.x, iVar1);
					while (iVar2 != 0)
					{
						if (has_ped_got_weapon_component(iParam0, vVar4.x, iVar2))
						{
							set_bit(&(vVar4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_161(vVar4.x, iVar1);
					}
				}
				*(uParam1[iVar0 /*3*/]) = {vVar4};
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 50 - 1)
		{
			*(uParam1.f_133[iVar0 /*3*/]).f_1 = 0;
			iVar0++;
		}
		iVar8 = get_num_dlc_weapons();
		iVar7 = 0;
		while (iVar7 < iVar8)
		{
			if ((get_dlc_weapon_data(iVar7, &Var9) && !func_160(Var9.f_1)) && iVar70 < 50)
			{
				if (!_is_dlc_data_empty(Var9))
				{
					vVar4.x = Var9.f_1;
					vVar4.y = 0;
					vVar4.z = 0;
					vVar4.y = get_ammo_in_ped_weapon(iParam0, vVar4.x);
					if (has_ped_got_weapon(iParam0, vVar4.x, 0))
					{
						set_bit(&(vVar4.f_2), 20 + get_ped_weapon_tint_index(iParam0, vVar4.x));
					}
					else
					{
						set_bit(&(vVar4.f_2), 20);
					}
					if (vVar4.y == -1)
					{
						if (!get_max_ammo(iParam0, vVar4.x, &(vVar4.f_1)))
						{
							vVar4.y = 0;
						}
					}
					*(uParam1.f_133[iVar70 /*3*/]).f_1 = vVar4.y;
					iVar1 = false;
					while (iVar1 < get_num_dlc_weapon_components(iVar7))
					{
						if (get_dlc_weapon_component_data(iVar7, iVar1, &Var48))
						{
							if (has_ped_got_weapon_component(iParam0, vVar4.x, Var48.f_3))
							{
								set_bit(&(vVar4.f_2), iVar1);
							}
						}
						iVar1++;
					}
				}
				if (vVar4.x != 0)
				{
					if (!has_ped_got_weapon(iParam0, vVar4.x, 0))
					{
						vVar4.x = false;
						vVar4.y = 0;
					}
				}
				*(uParam1.f_133[iVar70 /*3*/]) = {vVar4};
				iVar70++;
			}
			iVar7++;
		}
	}
}

bool func_160(int iParam0)
{
	if (network_is_game_in_progress())
	{
	}
	else
	{
		switch (iParam0)
		{
			case joaat("weapon_pistol50"):
			case joaat("weapon_bullpupshotgun"):
			case joaat("weapon_assaultsmg"):
				return false;
				break;
			
			case joaat("weapon_bottle"):
			case joaat("weapon_snspistol"):
			case joaat("weapon_gusenberg"):
				return false;
				break;
			
			case joaat("weapon_heavypistol"):
			case joaat("weapon_specialcarbine"):
				return false;
				break;
			
			case joaat("weapon_bullpuprifle"):
				return false;
				break;
			
			case joaat("weapon_dagger"):
			case joaat("weapon_vintagepistol"):
				return false;
				break;
			
			case joaat("weapon_firework"):
			case joaat("weapon_musket"):
				return false;
				break;
			
			case joaat("weapon_heavyshotgun"):
			case joaat("weapon_marksmanrifle"):
				return false;
				break;
			
			case joaat("weapon_hominglauncher"):
			case joaat("weapon_proxmine"):
				return false;
				break;
			
			case joaat("weapon_combatpdw"):
			case joaat("weapon_knuckle"):
			case joaat("weapon_marksmanpistol"):
				return false;
				break;
			
			case -947031628:
			case -572349828:
			case 392730790:
			case -1523701417:
			case -2112826155:
			case -664359727:
			case -1887867191:
			case -837150131:
			case -344484024:
			case joaat("weapon_flaregun"):
			case joaat("weapon_handcuffs"):
			case joaat("weapon_snowball"):
			case joaat("weapon_garbagebag"):
			case joaat("weapon_flashlight"):
			case joaat("weapon_switchblade"):
			case joaat("weapon_revolver"):
			case joaat("weapon_dbshotgun"):
			case joaat("weapon_compactrifle"):
				return true;
				break;
			}
	}
	return false;
}

int func_161(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	struct<4> Var41;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_pistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_pistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_combatpistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_appistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_appistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_appistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_microsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_microsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_microsmg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_smg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_smg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_smg_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_at_scope_macro_02");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 7:
					iVar0 = joaat("component_smg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultrifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_assaultrifle_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 5:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 7:
					iVar0 = joaat("component_assaultrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_carbinerifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_carbinerifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_carbinerifle_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_railcover_01");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 8:
					iVar0 = joaat("component_carbinerifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_advancedrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_advancedrifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_advancedrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_mg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_mg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_mg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 4:
					iVar0 = joaat("component_combatmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_sr_supp");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_pumpshotgun_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultshotgun_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultshotgun_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sniperrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_max");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_sniperrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_heavysniper_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_max");
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small");
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_minigun_clip_01");
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_assaultsmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_pistol50_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol50_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_pistol50_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpdw"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpdw_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpdw_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_combatpdw_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sawnoffshotgun_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_bullpuprifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_bullpuprifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_bullpuprifle_varmod_low");
					break;
			}
			break;
		
		case joaat("weapon_snspistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_snspistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_snspistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_snspistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_specialcarbine_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_specialcarbine_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_specialcarbine_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 7:
					iVar0 = joaat("component_specialcarbine_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_knuckle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_knuckle_varmod_pimp");
					break;
				
				case 1:
					iVar0 = joaat("component_knuckle_varmod_ballas");
					break;
				
				case 2:
					iVar0 = joaat("component_knuckle_varmod_dollar");
					break;
				
				case 3:
					iVar0 = joaat("component_knuckle_varmod_diamond");
					break;
				
				case 4:
					iVar0 = joaat("component_knuckle_varmod_hate");
					break;
				
				case 5:
					iVar0 = joaat("component_knuckle_varmod_love");
					break;
				
				case 6:
					iVar0 = joaat("component_knuckle_varmod_player");
					break;
				
				case 7:
					iVar0 = joaat("component_knuckle_varmod_king");
					break;
				
				case 8:
					iVar0 = joaat("component_knuckle_varmod_vagos");
					break;
			}
			break;
		
		case joaat("weapon_machinepistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_machinepistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_machinepistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_machinepistol_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
			}
			break;
		
		case joaat("weapon_switchblade"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_switchblade_varmod_var1");
					break;
				
				case 1:
					iVar0 = joaat("component_switchblade_varmod_var2");
					break;
			}
			break;
		
		case joaat("weapon_revolver"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_revolver_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_revolver_varmod_boss");
					break;
				
				case 2:
					iVar0 = joaat("component_revolver_varmod_goon");
					break;
			}
			break;
		
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_162(iParam0, &uVar2);
				if (iVar1 != -1)
				{
					if (iParam1 < get_num_dlc_weapon_components(iVar1))
					{
						if (get_dlc_weapon_component_data(iVar1, iParam1, &Var41))
						{
							return Var41.f_3;
						}
					}
				}
			}
			break;
	}
	return iVar0;
}

int func_162(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = get_num_dlc_weapons();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (get_dlc_weapon_data(iVar0, uParam1))
		{
			if (*uParam1.f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_163(int iParam0)
{
	int iVar0;
	
	iVar0 = func_148(iParam0);
	if (func_147(iVar0) && !is_ped_injured(iParam0))
	{
		Global_101154.f_1826.f_539.f_1524[iVar0] = func_110();
	}
}

bool func_164()
{
	if (Global_3)
	{
		return true;
	}
	if (Global_91278 == 7 || Global_91278 == 8)
	{
		return true;
	}
	return false;
}

void func_165()
{
	int iVar0;
	
	if ((is_synchronized_scene_running(iLocal_253) || is_synchronized_scene_running(iLocal_251)) || is_synchronized_scene_running(iLocal_252))
	{
		iVar0 = 0;
		while (iVar0 < iLocal_52)
		{
			if (!is_ped_injured(iLocal_52[iVar0]))
			{
				clear_ped_tasks(iLocal_52[iVar0]);
			}
			iVar0++;
		}
		if (is_synchronized_scene_running(iLocal_253))
		{
			if (!is_ped_injured(Local_547[iLocal_258 /*9*/][0]))
			{
				clear_ped_tasks(Local_547[iLocal_258 /*9*/][0]);
			}
			if (!is_ped_injured(Local_547[iLocal_258 /*9*/][1]))
			{
				clear_ped_tasks(Local_547[iLocal_258 /*9*/][1]);
			}
			if (is_vehicle_driveable(Local_547[iLocal_258 /*9*/].f_3, 0))
			{
				if (is_synchronized_scene_running(iLocal_253))
				{
					stop_synchronized_entity_anim(Local_547[iLocal_258 /*9*/].f_3, -8f, 1);
				}
			}
		}
	}
}

void func_166(char* sParam0)
{
	func_176(sParam0);
	func_167(0);
}

void func_167(int iParam0)
{
	int iVar0;
	
	if (Global_101154.f_7775 || func_175(0))
	{
		iVar0 = func_174();
		if (!func_168(iVar0))
		{
			return;
		}
		set_bit(&(Global_82363[iVar0 /*5*/].f_1), 5);
		Global_91314 = iParam0;
	}
}

bool func_168(int iParam0)
{
	var uVar0;
	int iVar1;
	
	func_173();
	if (is_player_playing(player_id()))
	{
		start_firing_amnesty(5000);
	}
	uVar0 = Global_82363[iParam0 /*5*/];
	iVar1 = Global_69758.f_109[uVar0 /*4*/];
	func_172(iVar1, 1);
	_0xC9A763D8FE87436A(player_id());
	special_ability_deactivate(player_id());
	func_169(&(Global_101154.f_1826.f_539), iVar1);
	if (Global_85786 == Global_91315)
	{
		Global_101154.f_7775.f_330[iVar1 /*6*/].f_1++;
	}
	if (!is_bit_set(Global_82399[iVar1 /*34*/].f_15, true))
	{
		if (!is_player_playing(player_id()))
		{
			set_fade_in_after_death_arrest(0);
		}
	}
	Global_101154.f_7775.f_330[iVar1 /*6*/].f_2++;
	Global_85786 = Global_91315;
	if (iParam0 == -1)
	{
		if (Global_101154.f_7775)
		{
		}
		return false;
	}
	if (is_bit_set(Global_82363[iParam0 /*5*/].f_1, 4))
	{
		return false;
	}
	if (is_bit_set(Global_82363[iParam0 /*5*/].f_1, 5))
	{
		return false;
	}
	return true;
}

void func_169(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;
	
	if (iParam1 == 94)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = Global_101154.f_17223[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !is_bit_set(Global_101154.f_7775.f_99.f_219[0], 9))
		{
		}
		else
		{
			vVar2 = {0f, 0f, 0f};
			fVar5 = 0f;
			if (!func_171(Global_101154.f_17223[iVar0], &vVar2, &fVar5))
			{
				Global_101154.f_17223[iVar0] = 318;
				func_170(uParam0.f_1524[iVar0]);
				*(uParam0.f_1528[iVar0 /*3*/]) = {0f, 0f, 0f};
				*uParam0.f_1538[iVar0] = 0f;
				*uParam0.f_1542[iVar0] = 0;
				*(uParam0.f_1546[iVar0 /*3*/]) = {0f, 0f, 0f};
				*uParam0.f_1556[iVar0] = 0;
				Global_89001[iVar0 /*29*/] = {0f, 0f, 0f};
				Global_89001[iVar0 /*29*/].f_9 = 0f;
				Global_89001[iVar0 /*29*/].f_12 = 0f;
				Global_89001[iVar0 /*29*/].f_3 = {0f, 0f, 0f};
				Global_89001[iVar0 /*29*/].f_10 = 0f;
				Global_89001[iVar0 /*29*/].f_13 = 0f;
				Global_89001[iVar0 /*29*/].f_6 = {0f, 0f, 0f};
				Global_89001[iVar0 /*29*/].f_11 = 0f;
				Global_89001[iVar0 /*29*/].f_14 = 0f;
				Global_89001[iVar0 /*29*/].f_17 = {0f, 0f, 0f};
				Global_89001[iVar0 /*29*/].f_26 = 0f;
				Global_89001[iVar0 /*29*/].f_20 = {0f, 0f, 0f};
				Global_89001[iVar0 /*29*/].f_27 = 0f;
				Global_89001[iVar0 /*29*/].f_23 = {0f, 0f, 0f};
				Global_89001[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

void func_170(var uParam0)
{
	*uParam0 = -15;
}

int func_171(int iParam0, var uParam1, float fParam2)
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = {115.1569f, -1286.684f, 28.2613f};
			*fParam2 = 111f;
			return 1;
			break;
		
		case 8:
			*uParam1 = {-90.0089f, -1324.195f, 28.3203f};
			*fParam2 = 194.1887f;
			return 1;
			break;
		
		case 9:
			return func_171(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_171(8, uParam1, fParam2);
			break;
		
		case 13:
			*uParam1 = {-807.2979f, -48.4004f, 36.8173f};
			*fParam2 = 201.6328f;
			return 1;
			break;
		
		case 14:
			*uParam1 = {1432.34f, -1887.383f, 70.5768f};
			*fParam2 = 350.0509f;
			return 1;
			break;
		
		case 15:
			*uParam1 = {1666.204f, 1967.25f, 143.3213f};
			*fParam2 = 0.7896f;
			return 1;
			break;
		
		case 12:
			*uParam1 = {-1440.22f, -127.02f, 50f};
			*fParam2 = 42f;
			return 1;
			break;
		
		case 16:
			*uParam1 = {135.055f, -1759.64f, 27.8957f};
			*fParam2 = -129f;
			return 1;
			break;
		
		case 17:
			*uParam1 = {687.6992f, -1744.03f, 28.3624f};
			*fParam2 = 267.1409f;
			return 1;
			break;
		
		case 18:
			*uParam1 = {56.5117f, -744.6122f, 43.1356f};
			*fParam2 = 340.0526f;
			return 1;
			break;
		
		case 19:
			*uParam1 = {506.485f, -1884.967f, 24.764f};
			*fParam2 = 22.9566f;
			return 1;
			break;
		
		case 20:
			*uParam1 = {1555.958f, 953.6136f, 77.2063f};
			*fParam2 = 152.8118f;
			return 1;
			break;
		
		case 21:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 22:
			*uParam1 = {220.72f, -64.4177f, 68.2922f};
			*fParam2 = 250.4535f - 360f;
			return 1;
			break;
		
		case 74:
			*uParam1 = {2048.07f, 3840.84f, 34.2238f};
			*fParam2 = 119.603f;
			return 1;
			break;
		
		case 23:
			*uParam1 = {-464.22f, -1592.98f, 38.73f};
			*fParam2 = 168f;
			return 1;
			break;
		
		case 24:
			*uParam1 = {744.79f + 0.0186f, -465.86f - 0.0114f, 36.6399f};
			*fParam2 = 51.7279f;
			return 1;
			break;
		
		case 67:
			*uParam1 = {-9f, 508.1f, 173.6278f};
			*fParam2 = 151.2504f;
			return 1;
			break;
		
		case 25:
			*uParam1 = {72.2278f, -1464.68f, 28.2915f};
			*fParam2 = 156.8827f;
			return 1;
			break;
		
		case 27:
			*uParam1 = {763f, -906f, 24.2312f};
			*fParam2 = 7.2736f;
			return 1;
			break;
		
		case 26:
			*uParam1 = {257.9167f, -1120.786f, 28.3684f};
			*fParam2 = 97.2736f;
			return 1;
			break;
		
		case 28:
			*uParam1 = {422.5858f, -978.6332f, 69.7073f};
			*fParam2 = 4f;
			return 1;
			break;
		
		case 29:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 30:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 31:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 32:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 33:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 34:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 35:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 36:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 37:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 58:
			*uParam1 = {294.8521f, 882.9366f, 197.8527f};
			*fParam2 = 162.693f;
			return 1;
			break;
		
		case 59:
			*uParam1 = {-1771.802f, 794.4316f, 138.4211f};
			*fParam2 = 128.9946f;
			return 1;
			break;
		
		case 60:
			*uParam1 = {1495.595f, -1848.821f, 70.2075f};
			*fParam2 = 32.2721f;
			return 1;
			break;
		
		case 38:
			*uParam1 = {2897.554f, 4032.241f, 50.1419f};
			*fParam2 = 192.8091f;
			return 1;
			break;
		
		case 39:
			*uParam1 = {1973.355f, 3818.204f, 32.005f};
			*fParam2 = 32f;
			return 1;
			break;
		
		case 40:
			*uParam1 = {1973.355f, 3818.204f, 32.005f};
			*fParam2 = 32f;
			return 1;
			break;
		
		case 41:
			*uParam1 = {1397f, 3725.8f, 33.0673f};
			*fParam2 = -3.7534f;
			return 1;
			break;
		
		case 42:
			*uParam1 = {Vector(4.0205f, -2975.341f, 798.4536f) + Vector(1f, 0f, 0f)};
			*fParam2 = 90f;
			return 1;
			break;
		
		case 43:
			*uParam1 = {709.0244f, -2916.479f, 5.0589f};
			*fParam2 = 355.326f;
			return 1;
			break;
		
		case 44:
			*uParam1 = {643.5248f, -2917.325f, 5.1337f};
			*fParam2 = 334.1068f;
			return 1;
			break;
		
		case 45:
			*uParam1 = {595.2742f, -2819.183f, 5.0559f};
			*fParam2 = 46.8853f;
			return 1;
			break;
		
		case 46:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 47:
			*uParam1 = {314.4171f, 965.207f, 208.4024f};
			*fParam2 = 165.9421f;
			return 1;
			break;
		
		case 49:
			*uParam1 = {3321.537f, 4975.455f, 25.9097f};
			*fParam2 = 221.228f;
			return 1;
			break;
		
		case 48:
			*uParam1 = {-111.1318f, 6316.479f, 30.4904f};
			*fParam2 = 42f + 180f;
			return 1;
			break;
		
		case 50:
			*uParam1 = {-731.3261f, 106.68f, 54.7169f};
			*fParam2 = 98.9764f;
			return 1;
			break;
		
		case 51:
			*uParam1 = {-1257.5f, -526.9999f, 30.2361f};
			*fParam2 = 220.9554f;
			return 1;
			break;
		
		case 52:
			*uParam1 = {736.9869f, -2050.678f, 28.2718f};
			*fParam2 = 83.9922f;
			return 1;
			break;
		
		case 66:
			*uParam1 = {262.5499f, -2540.15f, 4.8433f};
			*fParam2 = -64.1366f;
			return 1;
			break;
		
		case 53:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 55:
			*uParam1 = {-315.7789f, 6201.355f, 30.4322f};
			*fParam2 = 127.7547f;
			return 1;
			break;
		
		case 56:
			*uParam1 = {118.0988f, -1264.916f, 32.3637f};
			*fParam2 = -63f;
			return 1;
			break;
		
		case 57:
			*uParam1 = {37.5988f, -1351.52f, 28.2954f};
			*fParam2 = 90.0339f;
			return 1;
			break;
		
		case 61:
			*uParam1 = {-558.2693f, 261.1167f, 82.07f};
			*fParam2 = 84.6231f;
			return 1;
			break;
		
		case 62:
			*uParam1 = {-196.9999f, 507.9999f, 132.477f};
			*fParam2 = 99.6049f;
			return 1;
			break;
		
		case 63:
			*uParam1 = {1312.01f, -1645.87f, 51.2f};
			*fParam2 = 120f;
			return 1;
			break;
		
		case 68:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 69:
			*uParam1 = {-818.7374f, 6.4824f, 41.2432f};
			*fParam2 = 211.8223f;
			return 1;
			break;
		
		case 64:
			*uParam1 = {2091.258f, 4714.852f, 40.1936f};
			*fParam2 = 136.0867f;
			return 1;
			break;
		
		case 54:
			*uParam1 = {1762.59f, 3247.212f, 40.735f};
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 65:
			*uParam1 = {1764.013f, 3252.902f, 40.735f};
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 70:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 71:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 72:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 73:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

void func_172(int iParam0, int iParam1)
{
	if (iParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_85596[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_85596[iParam0 /*2*/] = 0;
	}
}

void func_173()
{
	Global_91313 = 1;
	if (is_player_being_arrested(player_id(), 1))
	{
		if (is_string_null_or_empty(&Global_69721))
		{
			switch (func_177())
			{
				case 0:
					StringCopy(&Global_69721, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_69721, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_69721, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_69725, "", 16);
		}
		Global_91313 = 0;
	}
	else if (!is_player_playing(player_id()))
	{
		if (is_string_null_or_empty(&Global_69721))
		{
			switch (func_177())
			{
				case 0:
					StringCopy(&Global_69721, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_69721, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_69721, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_69725, "", 16);
		}
		Global_91313 = 0;
		set_bit(&(Global_91278.f_20), 25);
	}
}

int func_174()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (is_bit_set(Global_82363[iVar0 /*5*/].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_175(int iParam0)
{
	if (!iParam0 && _get_number_of_instances_of_streamed_script(joaat("benchmark")) > 0)
	{
		return true;
	}
	return is_bit_set(Global_69737, false);
}

void func_176(char* sParam0)
{
	if (!is_string_null_or_empty(sParam0))
	{
		if (get_length_of_literal_string(sParam0) <= 16)
		{
			StringCopy(&Global_69721, sParam0, 16);
			StringCopy(&Global_69725, "", 16);
			if (_is_recording())
			{
				_stop_recording_and_save_clip();
			}
		}
	}
}

var func_177()
{
	func_92();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_178()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	vector3 vVar8;
	vector3 vVar11;
	int iVar14;
	struct<4> Var15;
	vector3 vVar19;
	Vector3 fVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	
	func_297();
	switch (iLocal_254)
	{
		case 0:
			if (is_vehicle_driveable(iLocal_358, 0) && !is_ped_injured(uLocal_313[2]))
			{
				if ((!is_ped_in_vehicle(uLocal_313[2], iLocal_358, 1) && get_script_task_status(uLocal_313[2], 242628503) != 1) && get_script_task_status(uLocal_313[2], 242628503) != 0)
				{
					freeze_entity_position(iLocal_358, true);
					iLocal_248 = 1;
					set_scenario_type_enabled("WORLD_VEHICLE_TRUCK_LOGS", false);
					set_scenario_type_enabled("WORLD_HUMAN_HIKER", false);
					set_scenario_type_enabled("WORLD_VEHICLE_BICYCLE_MOUNTAIN", false);
					set_ped_helmet(uLocal_313[2], 0);
					set_vehicle_alarm(iLocal_358, 0);
					iLocal_1352 = 0;
					iVar0 = 0;
					while (iVar0 < iLocal_1332)
					{
						iLocal_1332[iVar0] = 0;
						iLocal_1335[iVar0] = 0;
						iVar0++;
					}
					iLocal_1338 = false;
					iLocal_1353 = true;
					iLocal_1354 = false;
					iLocal_1355 = false;
					iLocal_247 = 0;
					iLocal_1418 = 0;
					iLocal_1419 = 0;
					iLocal_1420 = 0;
					iLocal_1421 = 0;
					iLocal_1422 = 0;
					iLocal_1423 = 0;
					iLocal_644 = 0;
					iLocal_1433 = 0;
					iLocal_1429 = 0;
					iLocal_1430 = 0;
					vLocal_211[0 /*3*/] = {262.3121f, 4447.511f, 53.83961f};
					vLocal_211[1 /*3*/] = {-210.8312f, 4482.656f, 60.27203f};
					vLocal_211[2 /*3*/] = {-1119.857f, 5254.628f, 74.45103f};
					vLocal_211[3 /*3*/] = {-912.0435f, 5407.727f, 36.07696f};
					vLocal_211[4 /*3*/] = {-791.7217f, 5470.604f, 33.07196f};
					vLocal_211[5 /*3*/] = {-625.3994f, 5531.649f, 44.20467f};
					iLocal_1417 = iLocal_1369 - 1;
					iLocal_1416 = iLocal_1390 - 1;
					func_296(-415.5206f, 6124.96f, 30.3722f, &iLocal_1390);
					func_296(-653.8552f, 5356.884f, 57.9293f, &iLocal_1390);
					func_296(-943.5536f, 5257.132f, 81.4484f, &iLocal_1390);
					func_296(-483.123f, 4917.299f, 145.827f, &iLocal_1390);
					func_296(vLocal_1346, &iLocal_1390);
					func_296(-415.5206f, 6124.96f, 30.3722f, &iLocal_1369);
					func_296(-653.8552f, 5356.884f, 57.9293f, &iLocal_1369);
					func_296(-483.123f, 4917.299f, 145.827f, &iLocal_1369);
					func_296(vLocal_1346, &iLocal_1369);
					iLocal_1349 = 2;
					iLocal_1350 = iLocal_67;
					iLocal_1351 = iLocal_358;
					request_vehicle_recording(10, "RBsetup");
					request_vehicle_recording(11, "RBsetup");
					remove_vehicle_recording(true, sLocal_277);
					remove_vehicle_recording(2, sLocal_277);
					remove_vehicle_recording(3, sLocal_277);
					remove_vehicle_recording(4, sLocal_277);
					func_295(&uLocal_313, 1, 1);
					func_295(&uLocal_313, 0, 1);
					func_295(&uLocal_313, 2, 0);
					_set_door_acceleration_limit(178228075, 0, 1, 0);
					_set_door_acceleration_limit(1852297978, 0, 1, 0);
					_0x293220DA1B46CEBC(3f, 12f, 4);
					remove_cutscene();
					_0x293220DA1B46CEBC(2f, 2f, 3);
					iLocal_254++;
				}
			}
			break;
		
		case 1:
			if ((!is_ped_injured(uLocal_313[iLocal_1349]) && is_vehicle_driveable(iLocal_67, 0)) && is_vehicle_driveable(iLocal_358, 0))
			{
				if ((!iLocal_1352 && is_ped_in_vehicle(uLocal_313[iLocal_1349], iLocal_67, 0)) && is_ped_in_vehicle(player_ped_id(), iLocal_67, 0))
				{
					set_player_control(player_id(), false, 256);
					if (func_6(&Local_360, sLocal_276, "RBS1_RACE", 8, 0, 0, 0))
					{
						settimera(false);
						func_294(500);
						iLocal_1352 = 1;
					}
				}
				else
				{
					if (is_ped_in_vehicle(uLocal_313[2], iLocal_67, 0))
					{
						if (get_script_task_status(uLocal_313[2], 451360105) != 1)
						{
							task_leave_vehicle(uLocal_313[2], iLocal_67, 512);
						}
					}
					if (!is_ped_in_vehicle(uLocal_313[2], iLocal_67, 0))
					{
						set_player_control(player_id(), true, 0);
					}
					if (((timera() > 1500 && get_script_task_status(uLocal_313[iLocal_1349], 242628503) != 1) && !is_ped_in_vehicle(uLocal_313[iLocal_1349], iLocal_358, 0)) && !is_ped_in_vehicle(uLocal_313[iLocal_1349], iLocal_67, 1))
					{
						open_sequence_task(&iVar1);
						task_enter_vehicle(false, iLocal_358, -1, -1, 2f, 1, 0);
						close_sequence_task(iVar1);
						task_perform_sequence(uLocal_313[iLocal_1349], iVar1);
						clear_sequence_task(&iVar1);
						iLocal_254++;
					}
				}
			}
			break;
		
		case 2:
			if ((!is_ped_injured(uLocal_313[iLocal_1349]) && is_vehicle_driveable(iLocal_358, 0)) && is_vehicle_driveable(iLocal_67, 0))
			{
				if (is_ped_sitting_in_vehicle(player_ped_id(), iLocal_67))
				{
					if (is_ped_in_vehicle(uLocal_313[iLocal_1349], iLocal_67, 0))
					{
						if (is_player_control_on(player_id()))
						{
							set_player_control(player_id(), false, 256);
						}
					}
					else if (!is_player_control_on(player_id()))
					{
						set_player_control(player_id(), true, 0);
					}
				}
				else if (!is_player_control_on(player_id()))
				{
					set_player_control(player_id(), true, 0);
				}
				if (!is_ped_in_vehicle(uLocal_313[iLocal_1349], iLocal_67, 0))
				{
					if (is_audio_scene_active("PS_1_DRIVE_TO_GAS_STATION"))
					{
						stop_audio_scene("PS_1_DRIVE_TO_GAS_STATION");
					}
					start_audio_scene("PS_1_RACE_AS_MICHAEL");
					iLocal_58 = func_44(vLocal_1346, 0);
					set_roads_in_angled_area(162.8428f, 4416.564f, 46.24126f, 102.7305f, 4437.815f, 82.75628f, 12.75f, 1, false, 1);
					set_roads_in_angled_area(84.0697f, 4480.673f, 12.78804f, -201.9954f, 4211.447f, 99.18795f, 131.75f, 1, false, 1);
					settimera(false);
					iLocal_254++;
				}
			}
			break;
		
		case 3:
			if (!iLocal_1419)
			{
				if ((is_vehicle_driveable(iLocal_358, 0) && iLocal_1349 == 2) && !is_ped_injured(uLocal_313[iLocal_1349]))
				{
					if (iLocal_248)
					{
						if (is_ped_in_vehicle(uLocal_313[2], iLocal_358, 1))
						{
							freeze_entity_position(iLocal_358, false);
							iLocal_248 = 0;
						}
					}
					if ((get_script_task_status(uLocal_313[iLocal_1349], 242628503) != 1 && is_ped_in_vehicle(uLocal_313[iLocal_1349], iLocal_358, 0)) && !is_playback_going_on_for_vehicle(iLocal_358))
					{
						set_ped_can_be_knocked_off_vehicle(uLocal_313[iLocal_1349], 1);
						open_sequence_task(&iVar2);
						task_vehicle_drive_to_coord(false, iLocal_358, -91.8094f, 6431.147f, 30.3459f, 15f, 0, joaat("ruffian"), 262275, 3f, 20f);
						task_vehicle_drive_to_coord(false, iLocal_358, -127.9359f, 6405.864f, 30.4238f, 15f, 0, joaat("ruffian"), 786469, 10f, 50f);
						task_vehicle_drive_to_coord(false, iLocal_358, -390.4958f, 6148.439f, 30.6151f, 15f, 0, joaat("ruffian"), 786469, 10f, 50f);
						close_sequence_task(iVar2);
						task_perform_sequence(uLocal_313[2], iVar2);
						clear_sequence_task(&iVar2);
						iLocal_1419 = 1;
					}
					if ((!is_audio_scene_active("PS_1_TREVOR_DRIVES_OFF") && !is_ped_in_vehicle(uLocal_313[iLocal_1349], iLocal_358, 0)) && vdist2(get_entity_coords(uLocal_313[iLocal_1349], 1), get_entity_coords(iLocal_358, 1)) < 4f)
					{
						start_audio_scene("PS_1_TREVOR_DRIVES_OFF");
						_0x153973AB99FE8980(iLocal_358, "PS_1_TREVOR_BIKE", 0f);
					}
				}
			}
			else
			{
				if (!iLocal_1420)
				{
					if (!is_entity_dead(uLocal_313[2], 0) && !is_entity_dead(iLocal_358, 0))
					{
						if (is_entity_in_angled_area(uLocal_313[2], -90.50787f, 6423.877f, 30.38944f, -103.0677f, 6409.822f, 35.4915f, 41.5f, 0, true, 0))
						{
							clear_ped_tasks(uLocal_313[2]);
							open_sequence_task(&iVar3);
							task_vehicle_drive_to_coord(false, iLocal_358, -120.4565f, 6413.602f, 30.3924f, 15f, 0, joaat("ruffian"), 262275, 5f, 50f);
							task_vehicle_drive_to_coord(false, iLocal_358, -390.4958f, 6148.439f, 30.6151f, 15f, 0, joaat("ruffian"), 786469, 10f, 50f);
							close_sequence_task(iVar3);
							task_perform_sequence(uLocal_313[2], iVar3);
							clear_sequence_task(&iVar3);
							iLocal_1420 = 1;
						}
					}
				}
				if (!iLocal_1421)
				{
					if (!is_entity_dead(uLocal_313[2], 0) && !is_entity_dead(iLocal_358, 0))
					{
						if (is_ped_in_vehicle(uLocal_313[2], iLocal_358, 0))
						{
							if (!is_playback_going_on_for_vehicle(iLocal_358) && !is_entity_at_coord(iLocal_358, vLocal_119, 40f, 40f, 40f, false, true, 0))
							{
								clear_ped_tasks(uLocal_313[2]);
								start_playback_recorded_vehicle_using_ai(iLocal_358, 11, "RBsetup", 10f, 786469);
								set_ped_can_be_knocked_off_vehicle(uLocal_313[iLocal_1349], 1);
								iLocal_1421 = 1;
							}
						}
					}
				}
			}
			if (iLocal_1353)
			{
				func_293(&uLocal_313, 2, 1);
				func_292("CBH_SWITCH");
				if (func_272(&uLocal_313, 0, 1))
				{
					func_270(&Local_96, 0, 0);
					uLocal_313.f_7 = 2;
					Local_279.f_12 = uLocal_313[2];
					clear_help(1);
					iLocal_1354 = true;
				}
			}
			if (iLocal_1354)
			{
				if (func_245(&Local_279, 0, 0, 1148829696, 1148829696, 0, 0, 0, 0, 0))
				{
					if ((Local_279.f_18 && !Local_279.f_19) && uLocal_313.f_7 == 2)
					{
						func_89(&uLocal_313, 1, 1, 0);
						set_veh_radio_station(iLocal_358, get_radio_station_name(6));
						set_initial_player_station(get_radio_station_name(6));
						_0x293220DA1B46CEBC(3f, 12f, 4);
					}
				}
				else
				{
					_0xB542DE8C3D1CB210(1);
					freeze_entity_position(iLocal_358, false);
					iLocal_248 = 0;
					if (is_audio_scene_active("PS_1_TREVOR_DRIVES_OFF"))
					{
						_0x18EB48CFC41F2EA0(iLocal_358, 0f);
						stop_audio_scene("PS_1_TREVOR_DRIVES_OFF");
					}
					if (is_audio_scene_active("PS_1_RACE_AS_MICHAEL"))
					{
						stop_audio_scene("PS_1_RACE_AS_MICHAEL");
					}
					start_audio_scene("PS_1_RACE_AS_TREVOR");
					if (!is_ped_injured(uLocal_313[0]) && is_vehicle_driveable(iLocal_67, 0))
					{
						if (!is_ped_in_vehicle(uLocal_313[0], iLocal_67, 0))
						{
							task_enter_vehicle(uLocal_313[0], iLocal_67, -1, -1, 2f, 1, 0);
						}
					}
					if (!is_ped_injured(iLocal_51))
					{
						if (!is_ped_in_vehicle(iLocal_51, iLocal_67, 0) && is_vehicle_driveable(iLocal_67, 0))
						{
							set_ped_into_vehicle(iLocal_51, iLocal_67, false);
						}
					}
					if (!is_entity_dead(iLocal_358, 0))
					{
						if (!is_ped_in_vehicle(player_ped_id(), iLocal_358, 1) || is_ped_sitting_in_vehicle(player_ped_id(), iLocal_358))
						{
							clear_ped_tasks(player_ped_id());
						}
					}
					func_244(714, 1, 0);
					Local_279.f_19 = 1;
					Local_279.f_12 = 0;
					iLocal_1353 = false;
					iLocal_1349 = 0;
					iLocal_1350 = iLocal_358;
					iLocal_1351 = iLocal_67;
					render_script_cams(false, false, 3000, 1, 0, 0);
					remove_blip(&iLocal_63);
				}
			}
			else
			{
				if (timera() > 20000 || vdist2(get_entity_coords(player_ped_id(), 1), get_entity_coords(uLocal_313[2], 1)) > 10000f)
				{
					iLocal_1353 = false;
				}
				if (!iLocal_1422)
				{
					if (((timera() > 10000 && does_entity_exist(uLocal_313[2])) && is_ped_in_vehicle(uLocal_313[2], iLocal_358, 0)) && vdist2(get_entity_coords(player_ped_id(), 1), get_entity_coords(uLocal_313[2], 1)) < pow(30f, 2f))
					{
						if (func_6(&Local_360, sLocal_276, "RBS1_TRE1", 8, 0, 0, 0))
						{
							iLocal_1422 = 1;
						}
					}
				}
			}
			if ((((!iLocal_1353 && !iLocal_1355) && !is_ped_injured(uLocal_313[iLocal_1349])) && is_vehicle_driveable(iLocal_1351, 0)) && !is_player_switch_in_progress())
			{
				set_entity_proofs(iLocal_1351, true, true, false, true, false, false, 0, false);
				set_entity_load_collision_flag(uLocal_313[iLocal_1349], true);
				_0x3910051CCECDB00C(uLocal_313[iLocal_1349], true);
				func_243(&uLocal_722, 10, "RBsetup");
				func_243(&uLocal_1023, 11, "RBsetup");
				if (func_177() == 2)
				{
					_0xD2DCCD8E16E20997(iLocal_358);
					_0x3910051CCECDB00C(iLocal_67, true);
					func_242(&iLocal_1369, 11, "RBsetup", &uLocal_1023);
					if (is_vehicle_driveable(iLocal_67, 0))
					{
						set_vehicle_tyres_can_burst(iLocal_67, false);
					}
				}
				else
				{
					if (is_vehicle_driveable(iLocal_358, 0))
					{
						set_vehicle_tyres_can_burst(iLocal_358, false);
					}
					_0x3910051CCECDB00C(iLocal_358, true);
					func_242(&iLocal_1390, 10, "RBsetup", &uLocal_722);
				}
				set_horn_enabled(iLocal_1351, 0);
				iLocal_1355 = true;
			}
			if (!is_ped_injured(uLocal_313[iLocal_1349]))
			{
				if (iLocal_1355)
				{
					set_player_control(player_id(), true, 0);
					if (func_177() == 2)
					{
						iLocal_1419 = 0;
						set_ped_can_be_knocked_off_vehicle(player_ped_id(), 3);
						_0xD2DCCD8E16E20997(iLocal_358);
						set_vehicle_doors_locked(iLocal_358, 1);
						if (is_vehicle_driveable(iLocal_67, 0))
						{
							set_vehicle_strong(iLocal_67, true);
							set_entity_proofs(iLocal_67, false, true, true, false, false, false, 0, false);
							set_vehicle_is_considered_by_player(iLocal_67, 0);
						}
						iLocal_254 = 5;
					}
					else
					{
						iLocal_254 = 4;
					}
					trigger_music_event("RH1_RACE");
					set_ped_can_switch_weapon(uLocal_313[iLocal_1349], false);
					set_blocking_of_non_temporary_events(uLocal_313[iLocal_1349], true);
					clear_help(1);
					settimera(false);
				}
			}
			break;
		
		case 4:
			func_20();
			if ((!is_ped_injured(uLocal_313[2]) && is_vehicle_driveable(iLocal_358, 0)) && is_vehicle_driveable(iLocal_67, 0))
			{
				if (iLocal_248)
				{
					if (is_ped_in_vehicle(uLocal_313[2], iLocal_358, 1))
					{
						freeze_entity_position(iLocal_358, false);
						iLocal_248 = 0;
					}
				}
				if (!iLocal_1419)
				{
					if ((is_vehicle_driveable(iLocal_358, 0) && iLocal_1349 == 2) && !is_ped_injured(uLocal_313[iLocal_1349]))
					{
						if (get_script_task_status(uLocal_313[iLocal_1349], 242628503) != 1 && is_ped_in_vehicle(uLocal_313[iLocal_1349], iLocal_358, 0))
						{
							set_ped_can_be_knocked_off_vehicle(uLocal_313[iLocal_1349], 1);
							open_sequence_task(&iVar4);
							task_vehicle_drive_to_coord(false, iLocal_358, -91.8094f, 6431.147f, 30.3459f, 15f, 0, joaat("ruffian"), 786603, 3f, 20f);
							task_vehicle_drive_to_coord(false, iLocal_358, -127.9359f, 6405.864f, 30.4238f, 15f, 0, joaat("ruffian"), 786469, 10f, 50f);
							task_vehicle_drive_to_coord(false, iLocal_358, -390.4958f, 6148.439f, 30.6151f, 15f, 0, joaat("ruffian"), 786469, 10f, 50f);
							close_sequence_task(iVar4);
							task_perform_sequence(uLocal_313[2], iVar4);
							clear_sequence_task(&iVar4);
							iLocal_1419 = 1;
						}
						if ((!is_audio_scene_active("PS_1_TREVOR_DRIVES_OFF") && !is_ped_in_vehicle(uLocal_313[iLocal_1349], iLocal_358, 0)) && vdist2(get_entity_coords(uLocal_313[iLocal_1349], 1), get_entity_coords(iLocal_358, 1)) < 4f)
						{
							start_audio_scene("PS_1_TREVOR_DRIVES_OFF");
							_0x153973AB99FE8980(iLocal_358, "PS_1_TREVOR_BIKE", 0f);
						}
					}
				}
				else if (!iLocal_1420)
				{
					if (get_script_task_status(uLocal_313[2], 242628503) == 1 && is_ped_in_vehicle(uLocal_313[2], iLocal_358, 0))
					{
						if (is_entity_in_angled_area(uLocal_313[2], -90.50787f, 6423.877f, 30.38944f, -103.0677f, 6409.822f, 35.4915f, 41.5f, 0, true, 0))
						{
							clear_ped_tasks(uLocal_313[2]);
							open_sequence_task(&iVar5);
							task_vehicle_drive_to_coord(false, iLocal_358, -120.4565f, 6413.602f, 30.3924f, 15f, 0, joaat("ruffian"), 786469, 10f, 50f);
							task_vehicle_drive_to_coord(false, iLocal_358, -390.4958f, 6148.439f, 30.6151f, 15f, 0, joaat("ruffian"), 786469, 10f, 50f);
							close_sequence_task(iVar5);
							task_perform_sequence(uLocal_313[2], iVar5);
							clear_sequence_task(&iVar5);
							iLocal_1420 = 1;
						}
					}
				}
				if ((((!iLocal_1418 && is_vehicle_driveable(iLocal_67, 0)) && is_ped_in_vehicle(player_ped_id(), iLocal_67, 0)) && !func_43()) && timera() > 1000)
				{
					clear_prints();
					sLocal_278 = "RBS1_BANT1";
					func_86("CBH_RACEM", 7500, 1);
					settimera(false);
					iLocal_1418 = 1;
				}
				if (iLocal_1418 && timera() > 7500)
				{
					func_237();
				}
				if (!iLocal_1421)
				{
					if (is_ped_in_vehicle(uLocal_313[2], iLocal_358, 0))
					{
						if (!is_playback_going_on_for_vehicle(iLocal_358) && (!is_entity_at_coord(iLocal_358, vLocal_119, 40f, 40f, 40f, false, true, 0) || get_script_task_status(uLocal_313[2], 242628503) != 1))
						{
							clear_ped_tasks(uLocal_313[2]);
							start_playback_recorded_vehicle_using_ai(iLocal_358, 11, "RBsetup", 10f, 786469);
							set_ped_can_be_knocked_off_vehicle(uLocal_313[iLocal_1349], 1);
							iLocal_1421 = 1;
						}
					}
				}
				if (is_ped_in_vehicle(player_ped_id(), iLocal_67, 0))
				{
					if (!does_blip_exist(iLocal_58))
					{
						iLocal_58 = func_44(vLocal_1346, 0);
					}
					if (does_blip_exist(iLocal_59))
					{
						remove_blip(&iLocal_59);
					}
				}
				else
				{
					if (does_blip_exist(iLocal_58))
					{
						remove_blip(&iLocal_58);
					}
					if (!does_blip_exist(iLocal_59))
					{
						iLocal_59 = func_40(iLocal_67, 0, 0);
					}
				}
				if (!iLocal_1338)
				{
					func_232(uLocal_313[2], iLocal_358, 11, "RBsetup", &uLocal_1023, 0, 0f);
					if (is_entity_in_angled_area(uLocal_313[2], vLocal_1339, vLocal_1342, fLocal_1345, 0, true, 0))
					{
						if (is_vehicle_driveable(iLocal_358, 0))
						{
							set_entity_collision(iLocal_358, true, 0);
						}
						iLocal_1338 = true;
					}
					fVar6 = func_230(get_entity_coords(player_ped_id(), 1), 11, "RBsetup", &uLocal_1023);
					if (fVar6 > fLocal_1324)
					{
						if (func_98(38))
						{
							func_768(38, 0);
						}
						if (!func_98(37))
						{
							if (vdist2(get_entity_coords(player_ped_id(), 1), vLocal_1346) < pow(100f, 2f))
							{
								func_768(37, 1);
							}
						}
						else if (vdist2(get_entity_coords(player_ped_id(), 1), vLocal_1346) > pow(120f, 2f))
						{
							func_768(37, 0);
						}
					}
					else
					{
						if (func_98(37))
						{
							func_768(37, 0);
						}
						if (!func_98(38))
						{
							if (vdist2(get_entity_coords(player_ped_id(), 1), vLocal_1346) < pow(100f, 2f))
							{
								func_768(38, 1);
							}
						}
						else if (vdist2(get_entity_coords(player_ped_id(), 1), vLocal_1346) > pow(120f, 2f))
						{
							func_768(38, 0);
						}
					}
				}
				else
				{
					if (func_98(37))
					{
						func_768(37, 0);
					}
					if (!func_98(38))
					{
						func_768(38, 1);
					}
					func_229();
				}
				if (is_entity_in_angled_area(player_ped_id(), vLocal_1339, vLocal_1342, fLocal_1345, 0, true, 0))
				{
					if (!is_ped_injured(iLocal_51) && vdist2(get_entity_coords(player_ped_id(), 1), get_entity_coords(iLocal_51, 1)) < 10000f)
					{
						func_46();
						if (is_playback_going_on_for_vehicle(iLocal_358) && !is_playback_using_ai_going_on_for_vehicle(iLocal_358))
						{
							set_playback_to_use_ai(iLocal_358, 786469);
						}
						iLocal_254 = 6;
					}
				}
				if (func_84(iLocal_51, &Local_545))
				{
					func_88("CBH_LLEFT");
				}
			}
			break;
		
		case 5:
			if (!is_ped_injured(uLocal_313[0]))
			{
				if (does_blip_exist(iLocal_58))
				{
					fLocal_1325 = func_230(get_entity_coords(player_ped_id(), 1), 11, "RBsetup", &uLocal_1023);
					func_228(&iLocal_1369, &iLocal_1417, fLocal_1325);
				}
				fVar7 = func_230(get_entity_coords(player_ped_id(), 1), 10, "RBsetup", &uLocal_722);
				if (!iLocal_1422)
				{
					if (is_ped_in_vehicle(uLocal_313[0], iLocal_67, 0))
					{
						if (vdist2(get_entity_coords(player_ped_id(), 1), get_entity_coords(uLocal_313[0], 1)) < pow(30f, 2f))
						{
							if (func_6(&Local_360, sLocal_276, "RBS1_ASSHLEM", 8, 0, 0, 0))
							{
								iLocal_1422 = 1;
							}
						}
						else
						{
							iLocal_1422 = 1;
						}
					}
				}
				if (((!iLocal_1418 && iLocal_1422) && !func_43()) && timera() > 1000)
				{
					clear_prints();
					sLocal_278 = "RBS1_BANT2";
					func_227(&Local_360, 0);
					func_226(&Local_360, 0, player_ped_id(), "TREVOR", 0, 1);
					func_86("CBH_RACET", 7500, 1);
					iLocal_1418 = 1;
					settimera(false);
				}
				if (iLocal_1418 && timera() > 7500)
				{
					func_237();
				}
				if (is_vehicle_driveable(iLocal_67, 0))
				{
					set_vehicle_is_considered_by_player(iLocal_67, 0);
					if (is_ped_in_vehicle(uLocal_313[0], iLocal_67, 0))
					{
						if (!is_playback_going_on_for_vehicle(iLocal_67))
						{
							if (!is_entity_at_coord(iLocal_67, vLocal_119, 40f, 40f, 40f, false, true, 0))
							{
								clear_ped_tasks(uLocal_313[0]);
								start_playback_recorded_vehicle_using_ai(iLocal_67, 10, "RBsetup", 10f, 786469);
							}
							else if (!iLocal_1419)
							{
								if ((!is_ped_injured(uLocal_313[0]) && is_vehicle_driveable(iLocal_67, 0)) && is_ped_in_vehicle(uLocal_313[0], iLocal_67, 0))
								{
									if (is_entity_in_angled_area(iLocal_67, -85.30544f, 6422.383f, 30.48431f, -102.2567f, 6405.208f, 34.74021f, 7.5f, 0, true, 0))
									{
										vVar8 = {Vector(30.48431f, 6422.383f, -85.30544f) - Vector(34.74021f, 6405.208f, -102.2567f)};
										vVar8.z = 0f;
										vVar11 = {get_entity_forward_vector(iLocal_67)};
										if (absf(get_angle_between_2d_vectors(vVar8.x, vVar8.y, vVar11.x, vVar11.y)) < 90f)
										{
											open_sequence_task(&iLocal_83);
											task_vehicle_drive_to_coord(false, iLocal_67, -83.4558f, 6424.933f, 30.4905f, 10f, 0, joaat("premier"), 262144, 2f, 20f);
											task_vehicle_drive_to_coord(false, iLocal_67, -88.8696f, 6432.077f, 30.4084f, 10f, 0, joaat("premier"), 786469, 10f, 100f);
											task_vehicle_drive_to_coord(false, iLocal_67, -132.3165f, 6403.165f, 30.4015f, 15f, 0, joaat("premier"), 786469, 10f, 20f);
											task_vehicle_drive_to_coord(false, iLocal_67, -412.9446f, 6128.729f, 30.2517f, 15f, 0, joaat("premier"), 786469, 10f, 20f);
											close_sequence_task(iLocal_83);
											task_perform_sequence(uLocal_313[0], iLocal_83);
											clear_sequence_task(&iLocal_83);
										}
										else
										{
											task_vehicle_drive_to_coord(uLocal_313[0], iLocal_67, -412.9446f, 6128.729f, 30.2517f, 15f, 0, joaat("premier"), 786469, 10f, 20f);
										}
									}
									else
									{
										task_vehicle_drive_to_coord(uLocal_313[0], iLocal_67, -412.9446f, 6128.729f, 30.2517f, 15f, 0, joaat("premier"), 786469, 10f, 20f);
									}
									iLocal_1419 = 1;
									set_ped_get_out_upside_down_vehicle(uLocal_313[0], 0);
								}
							}
						}
					}
				}
				if (!iLocal_1338)
				{
					func_232(uLocal_313[0], iLocal_67, 10, "RBsetup", &uLocal_722, 1, fVar7);
					if (is_entity_in_angled_area(uLocal_313[0], vLocal_1339, vLocal_1342, fLocal_1345, 0, true, 0))
					{
						if (is_vehicle_driveable(iLocal_67, 0))
						{
							set_entity_collision(iLocal_67, true, 0);
						}
						iLocal_1338 = true;
					}
					if (fVar7 > fLocal_1324)
					{
						if (func_98(37))
						{
							func_768(37, 0);
						}
						if (!func_98(38))
						{
							if (vdist2(get_entity_coords(player_ped_id(), 1), vLocal_1346) < pow(100f, 2f))
							{
								func_768(38, 1);
							}
						}
						else if (vdist2(get_entity_coords(player_ped_id(), 1), vLocal_1346) > pow(120f, 2f))
						{
							func_768(38, 0);
						}
					}
					else
					{
						if (func_98(38))
						{
							func_768(38, 0);
						}
						if (!func_98(37))
						{
							if (vdist2(get_entity_coords(player_ped_id(), 1), vLocal_1346) < pow(100f, 2f))
							{
								func_768(37, 1);
							}
						}
						else if (vdist2(get_entity_coords(player_ped_id(), 1), vLocal_1346) > pow(120f, 2f))
						{
							func_768(37, 0);
						}
					}
				}
				else
				{
					if (func_98(38))
					{
						func_768(38, 0);
					}
					if (!func_98(37))
					{
						func_768(37, 1);
					}
				}
				if (is_entity_in_angled_area(player_ped_id(), vLocal_1339, vLocal_1342, fLocal_1345, 0, true, 0))
				{
					func_46();
					settimera(false);
					if (is_playback_going_on_for_vehicle(iLocal_67) && !is_playback_using_ai_going_on_for_vehicle(iLocal_67))
					{
						if (vdist2(get_entity_coords(uLocal_313[0], 1), get_entity_coords(player_ped_id(), 1)) < 1000f)
						{
							clear_ped_tasks(uLocal_313[0]);
							open_sequence_task(&iVar14);
							task_vehicle_drive_to_coord(false, iLocal_67, 1412.297f, 3599.638f, 33.8914f, 20f, 0, joaat("premier"), 786469, 3f, 3f);
							task_pause(false, 10000);
							close_sequence_task(iVar14);
							task_perform_sequence(uLocal_313[0], iVar14);
							clear_sequence_task(&iVar14);
							set_playback_to_use_ai(iLocal_67, 786469);
							set_ped_keep_task(uLocal_313[0], true);
						}
						else
						{
							set_playback_to_use_ai(iLocal_67, 786469);
						}
						set_ped_keep_task(uLocal_313[0], true);
					}
					set_ped_keep_task(uLocal_313[0], true);
					iLocal_254++;
				}
				if (is_ped_in_any_vehicle(player_ped_id(), 1))
				{
					if (does_blip_exist(iLocal_59))
					{
						remove_blip(&iLocal_59);
					}
				}
				else if (!does_blip_exist(iLocal_59))
				{
					if ((does_entity_exist(get_players_last_vehicle()) && is_vehicle_driveable(get_players_last_vehicle(), 0)) && !is_entity_in_water(get_players_last_vehicle()))
					{
						iLocal_59 = func_40(get_players_last_vehicle(), 0, 0);
					}
				}
				else if (!does_entity_exist(get_players_last_vehicle()) || (does_entity_exist(get_players_last_vehicle()) && (!is_vehicle_driveable(get_players_last_vehicle(), 0) || is_entity_in_water(get_players_last_vehicle()))))
				{
					remove_blip(&iLocal_59);
				}
			}
			break;
		
		case 6:
			if (does_blip_exist(iLocal_63))
			{
				remove_blip(&iLocal_63);
			}
			if (is_playback_going_on_for_vehicle(iLocal_1351) && is_vehicle_driveable(iLocal_1351, 0))
			{
				set_playback_speed(iLocal_1351, 1f);
				set_entity_collision(iLocal_1351, true, 0);
			}
			if (!iLocal_1338)
			{
				if (func_177() == 0)
				{
					if (is_entity_at_coord(iLocal_1351, vLocal_1346, 10f, 10f, 10f, false, true, 0))
					{
						func_229();
					}
				}
			}
			if (!iLocal_1431)
			{
				if (!iLocal_1338)
				{
					func_225(715);
					StringCopy(&Var15, "RBS1_LES4", 16);
				}
				else
				{
					StringCopy(&Var15, "RBS1_LES5", 16);
				}
				if (func_177() == 0)
				{
					if (func_6(&Local_360, sLocal_276, &Var15, 8, 0, 0, 0))
					{
						settimera(false);
						_0x293220DA1B46CEBC(10f, 4f, 4);
						iLocal_1431 = true;
					}
				}
				else if (!iLocal_1338)
				{
					settimera(false);
					_0x293220DA1B46CEBC(10f, 4f, 4);
					iLocal_1431 = true;
				}
				else if (func_6(&Local_360, sLocal_276, "RBS1_TRE5", 8, 0, 0, 0))
				{
					_0x293220DA1B46CEBC(10f, 4f, 4);
					iLocal_1431 = true;
				}
			}
			if (!iLocal_1432)
			{
				if (is_ped_sitting_in_any_vehicle(player_ped_id()))
				{
					if (is_vehicle_driveable(get_vehicle_ped_is_in(player_ped_id(), 0), 0))
					{
						if (is_entity_at_coord(player_ped_id(), vLocal_1346, Global_19, true, true, 0))
						{
							if (does_blip_exist(iLocal_58))
							{
								remove_blip(&iLocal_58);
							}
							while (!func_30(get_vehicle_ped_is_in(player_ped_id(), 0), 1093140480, 1, 1056964608, 0, 1, 0))
							{
								wait(false);
							}
							set_player_control(player_id(), false, 256);
							iLocal_1432 = true;
						}
					}
				}
				else if (is_entity_in_angled_area(player_ped_id(), vLocal_1339, vLocal_1342, fLocal_1345, 0, true, 0))
				{
					iLocal_1432 = true;
				}
			}
			if (iLocal_1432)
			{
				if (does_blip_exist(iLocal_59))
				{
					remove_blip(&iLocal_59);
				}
				if (iLocal_1431)
				{
					if (func_177() == 0)
					{
						if (iLocal_1425 > 0)
						{
							if (!is_ped_injured(uLocal_313[2]))
							{
								clear_ped_tasks(uLocal_313[2]);
								vVar19 = {get_entity_coords(player_ped_id(), 1) - get_entity_coords(uLocal_313[2], 1)};
								fVar22 = get_angle_between_2d_vectors(0f, 1f, vVar19.x, vVar19.y);
								task_look_at_entity(uLocal_313[2], player_ped_id(), 1000, 2052, 4);
								open_sequence_task(&iVar23);
								task_follow_nav_mesh_to_coord(false, get_entity_coords(uLocal_313[2], 1), 1f, -1, 0.25f, 512, fVar22);
								task_play_anim(false, "missheistpaletoscoresetup", "trevor_arrival_1", 8f, -8f, -1, 0, 0, 0, 0, 0);
								close_sequence_task(iVar23);
								task_perform_sequence(uLocal_313[2], iVar23);
								clear_sequence_task(&iVar23);
							}
						}
						settimera(false);
						iLocal_254++;
					}
					else if (timera() > 3000)
					{
						iLocal_254++;
					}
				}
			}
			break;
		
		case 7:
			if (is_audio_scene_active("PS_1_RACE_AS_MICHAEL"))
			{
				stop_audio_scene("PS_1_RACE_AS_MICHAEL");
			}
			if (is_audio_scene_active("PS_1_RACE_AS_TREVOR"))
			{
				stop_audio_scene("PS_1_RACE_AS_TREVOR");
			}
			if (func_177() == 0)
			{
				if (!iLocal_1433 && !is_ped_injured(uLocal_313[2]))
				{
					if (is_entity_playing_anim(uLocal_313[2], "missheistpaletoscoresetup", "trevor_arrival_1", 3))
					{
						func_223(uLocal_313[2], "GENERIC_SHOCKED_MED", 10);
						iLocal_1433 = 1;
					}
				}
			}
			disable_control_action(0, 23, 1);
			disable_control_action(0, 71, 1);
			disable_control_action(0, 75, 1);
			disable_control_action(0, 69, 1);
			disable_control_action(0, 70, 1);
			if (func_177() != 0 || timera() > 3500)
			{
				if (!func_43())
				{
					_0x293220DA1B46CEBC(10f, 5f, 4);
					func_186();
				}
			}
			break;
	}
	if (iLocal_254 > 2)
	{
		if (does_blip_exist(iLocal_58))
		{
			is_entity_at_coord(player_ped_id(), vLocal_1346, 1f, 1f, Global_19.f_2, true, true, 0);
			if (func_177() == 2)
			{
				fLocal_1325 = func_230(get_entity_coords(player_ped_id(), 1), 11, "RBsetup", &uLocal_1023);
				func_228(&iLocal_1369, &iLocal_1417, fLocal_1325);
			}
			else
			{
				fLocal_1325 = func_230(get_entity_coords(player_ped_id(), 1), 10, "RBsetup", &uLocal_722);
				func_228(&iLocal_1390, &iLocal_1416, fLocal_1325);
			}
		}
		else if (func_177() == 2)
		{
			func_185(&iLocal_1417);
		}
		else
		{
			func_185(&iLocal_1416);
		}
	}
	if (func_98(37))
	{
		draw_debug_text_2d("MIKE WIN CUTSCENE SET TO LOAD", 0f, 0.02f, 0f, 255, 0, 0, 255);
	}
	if (func_98(38))
	{
		draw_debug_text_2d("TREVOR WIN CUTSCENE SET TO LOAD", 0f, 0.04f, 0f, 255, 0, 0, 255);
	}
	if (((((does_entity_exist(uLocal_313[iLocal_1349]) && !is_ped_injured(uLocal_313[iLocal_1349])) && is_ped_in_any_vehicle(uLocal_313[iLocal_1349], 0)) && func_18(player_ped_id(), uLocal_313[iLocal_1349])) || does_blip_exist(iLocal_59)) || iLocal_254 > 6)
	{
		if (does_blip_exist(iLocal_63))
		{
			remove_blip(&iLocal_63);
		}
	}
	else
	{
		func_184(uLocal_313[iLocal_1349], iLocal_1351);
	}
	if (func_177() == 2)
	{
		if (func_183(iLocal_358, (is_synchronized_scene_running(iLocal_253) && get_synchronized_scene_phase(iLocal_253) < 0.9f)))
		{
			func_88("CBH_BNKFAILT");
		}
	}
	else if (func_183(iLocal_67, (is_synchronized_scene_running(iLocal_253) && get_synchronized_scene_phase(iLocal_253) < 0.9f)))
	{
		func_88("CBH_BNKFAIL");
	}
	if (is_synchronized_scene_running(iLocal_253))
	{
		if (get_synchronized_scene_phase(iLocal_253) > 0.7f)
		{
			if (!Local_547[0 /*9*/].f_6)
			{
				func_182(0);
			}
		}
		if (get_synchronized_scene_phase(iLocal_253) > 0.3f)
		{
			if (!Local_547[2 /*9*/].f_6)
			{
				func_182(2);
			}
		}
		if (get_synchronized_scene_phase(iLocal_253) > 0.37f)
		{
			if (Local_584.f_9)
			{
				Local_584.f_9 = 0;
				Local_584.f_13 = 0;
				stop_alarm("PALETO_BAY_SCORE_ALARM", true);
			}
		}
		if (get_synchronized_scene_phase(iLocal_253) > 0.45f)
		{
			if (!Local_547[3 /*9*/].f_6)
			{
				func_182(3);
			}
		}
		if (get_synchronized_scene_phase(iLocal_253) > 0.8f)
		{
			if (!iLocal_644)
			{
				func_181();
			}
			if (!Local_547[3 /*9*/].f_6)
			{
				func_182(3);
			}
			if (_0x160AA1B32F6139B8(178228075) != 1)
			{
				_set_door_acceleration_limit(178228075, 1, 1, 0);
				_set_door_ajar_angle(178228075, 0f, 1, 0);
			}
			if (_0x160AA1B32F6139B8(1852297978) != 1)
			{
				_set_door_acceleration_limit(1852297978, 1, 1, 0);
				_set_door_ajar_angle(1852297978, 0f, 1, 0);
			}
		}
		else
		{
			_0xD9B71952F78A2640(178228075, 1);
			_0xD9B71952F78A2640(1852297978, 1);
		}
		if (!iLocal_1430)
		{
			if ((is_synchronized_scene_running(iLocal_253) && get_synchronized_scene_phase(iLocal_253) > 0.828f) || !is_synchronized_scene_running(iLocal_253))
			{
				task_enter_vehicle(Local_547[iLocal_258 /*9*/][1], Local_547[iLocal_258 /*9*/].f_3, -1, false, 1f, 1, 0);
				force_ped_motion_state(Local_547[iLocal_258 /*9*/][1], -668482597, false, 0, 0);
				iLocal_1430 = 1;
			}
		}
		if (!iLocal_1429)
		{
			if ((is_synchronized_scene_running(iLocal_253) && get_synchronized_scene_phase(iLocal_253) > 0.828f) || !is_synchronized_scene_running(iLocal_253))
			{
				task_enter_vehicle(Local_547[iLocal_258 /*9*/][0], Local_547[iLocal_258 /*9*/].f_3, -1, -1, 1f, 1, 0);
				force_ped_motion_state(Local_547[iLocal_258 /*9*/][1], -668482597, false, 0, 0);
				if (is_synchronized_scene_running(iLocal_253))
				{
					stop_synchronized_entity_anim(Local_547[iLocal_258 /*9*/].f_3, -8f, 1);
				}
				iLocal_1429 = 1;
			}
		}
	}
	else if (!Local_547[iLocal_258 /*9*/].f_6)
	{
		if ((((is_vehicle_driveable(Local_547[iLocal_258 /*9*/].f_3, 0) && !is_ped_injured(Local_547[iLocal_258 /*9*/][0])) && !is_ped_injured(Local_547[iLocal_258 /*9*/][1])) && is_ped_sitting_in_vehicle(Local_547[iLocal_258 /*9*/][0], Local_547[iLocal_258 /*9*/].f_3)) && is_ped_sitting_in_vehicle(Local_547[iLocal_258 /*9*/][1], Local_547[iLocal_258 /*9*/].f_3))
		{
			func_182(1);
		}
		remove_anim_dict("missheistpaletoscoresetup_setup1");
		remove_anim_dict("missheistpaletoscoresetup_setup2");
		remove_anim_dict("missheistpaletoscoresetup_setup3");
	}
	iVar24 = 0;
	while (iVar24 < Local_547)
	{
		if (((((does_entity_exist(Local_547[iVar24 /*9*/].f_3) && is_vehicle_driveable(Local_547[iVar24 /*9*/].f_3, 0)) && !is_ped_injured(Local_547[iVar24 /*9*/][0])) && Local_547[iVar24 /*9*/].f_6) && is_ped_in_vehicle(Local_547[iVar24 /*9*/][0], Local_547[iVar24 /*9*/].f_3, 0)) && is_ped_in_vehicle(Local_547[iVar24 /*9*/][1], Local_547[iVar24 /*9*/].f_3, 0))
		{
			if ((get_script_task_status(Local_547[iVar24 /*9*/][0], -258271821) != 1 && get_script_task_status(Local_547[iVar24 /*9*/][0], -258271821) != 0) && get_script_task_status(Local_547[iVar24 /*9*/][0], -258271821) != 2)
			{
				if (vdist2(get_entity_coords(Local_547[iVar24 /*9*/].f_3, 1), 119.2184f, 6559.774f, 30.6237f) < pow(250f, 2f))
				{
					task_vehicle_drive_wander(Local_547[iVar24 /*9*/][0], Local_547[iVar24 /*9*/].f_3, 10f, 786491);
				}
			}
			if (((vdist2(get_entity_coords(Local_547[iVar24 /*9*/].f_3, 1), get_entity_coords(player_ped_id(), 1)) > pow(100f, 2f) && is_entity_occluded(Local_547[iVar24 /*9*/].f_3)) && is_entity_occluded(Local_547[iVar24 /*9*/][0])) && is_entity_occluded(Local_547[iVar24 /*9*/][1]))
			{
				func_180(&(Local_547[iVar24 /*9*/]));
			}
		}
		iVar24++;
	}
	func_179();
	iVar25 = 0;
	while (iVar25 < iLocal_52)
	{
		if (does_entity_exist(iLocal_52[iVar25]))
		{
			if (is_entity_at_coord(iLocal_52[iVar25], -100.0933f, 6461.712f, 30.6267f, 3f, 3f, 3f, false, true, 0) && is_entity_occluded(iLocal_52[iVar25]))
			{
				delete_ped(&(iLocal_52[iVar25]));
			}
		}
		iVar25++;
	}
	if (!iLocal_1423 && iLocal_254 > 3)
	{
		if (!is_entity_at_coord(player_ped_id(), vLocal_152, 100f, 100f, 100f, false, true, 0))
		{
			iVar25 = 0;
			while (iVar25 < iLocal_52)
			{
				if (does_entity_exist(iLocal_52[iVar25]))
				{
					set_ped_as_no_longer_needed(&(iLocal_52[iVar25]));
				}
				iVar25++;
			}
			iVar25 = 0;
			while (iVar25 < Local_547)
			{
				if (does_entity_exist(Local_547[iVar25 /*9*/][0]))
				{
					set_ped_as_no_longer_needed(&(Local_547[iVar25 /*9*/][0]));
				}
				if (does_entity_exist(Local_547[iVar25 /*9*/][1]))
				{
					set_ped_as_no_longer_needed(&(Local_547[iVar25 /*9*/][1]));
				}
				if (does_entity_exist(Local_547[iVar25 /*9*/].f_3))
				{
					set_vehicle_as_no_longer_needed(&(Local_547[iVar25 /*9*/].f_3));
				}
				iVar25++;
			}
			if (does_entity_exist(iLocal_357))
			{
				set_ped_as_no_longer_needed(&iLocal_357);
			}
			set_model_as_no_longer_needed(joaat("a_m_m_business_01"));
			set_model_as_no_longer_needed(joaat("a_f_y_business_01"));
			set_model_as_no_longer_needed(joaat("sheriff"));
			set_model_as_no_longer_needed(joaat("s_m_y_cop_01"));
			set_model_as_no_longer_needed(joaat("a_m_y_genstreet_02"));
			remove_anim_dict("missheistpaletoscoresetup_setup1");
			remove_anim_dict("missheistpaletoscoresetup_setup2");
			remove_anim_dict("missheistpaletoscoresetup_setup3");
			iLocal_1423 = 1;
		}
	}
}

void func_179()
{
	if (func_177() == 0)
	{
		if ((is_ped_injured(uLocal_313[2]) || is_entity_dead(uLocal_313[2], 0)) || is_entity_on_fire(uLocal_313[2]))
		{
			func_88("CMN_TDIED");
		}
		if ((is_ped_injured(iLocal_51) || is_entity_dead(iLocal_51, 0)) || is_entity_on_fire(iLocal_51))
		{
			func_88("CBH_LESTDED");
		}
		if (!is_vehicle_driveable(iLocal_67, 0) || is_entity_dead(iLocal_67, 0))
		{
			func_88("CMN_GENDEST");
		}
		if (get_player_wanted_level(player_id()) > 0)
		{
			func_88("CBH_COPFAIL");
		}
	}
	if (func_177() == 2)
	{
		if ((is_ped_injured(uLocal_313[0]) || is_entity_dead(uLocal_313[0], 0)) || is_entity_on_fire(uLocal_313[0]))
		{
			func_88("CMN_MDIED");
		}
		if ((is_ped_injured(iLocal_51) || is_entity_dead(iLocal_51, 0)) || is_entity_on_fire(iLocal_51))
		{
			func_88("CBH_LESTDED");
		}
		if (get_player_wanted_level(player_id()) > 0)
		{
			func_88("CBH_COPFAILT");
		}
	}
}

void func_180(var uParam0)
{
	int iVar0;
	
	if (*uParam0.f_5)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < *uParam0)
		{
			if (does_entity_exist(*uParam0[iVar0]))
			{
				delete_ped(uParam0[iVar0]);
			}
			iVar0++;
		}
		if (does_entity_exist(*uParam0.f_3))
		{
			delete_vehicle(uParam0.f_3);
		}
		*uParam0.f_5 = 0;
	}
}

void func_181()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (does_entity_exist(iLocal_52[iVar0]) && !is_ped_injured(iLocal_52[iVar0]))
		{
			if (get_script_task_status(iLocal_52[iVar0], 713668775) != 1)
			{
				clear_ped_tasks(iLocal_52[iVar0]);
				task_follow_nav_mesh_to_coord(iLocal_52[iVar0], -100.5008f, 6461.73f, 30.6343f, 1f, -1, 0.25f, 0, 1193033728);
			}
			if (is_entity_at_coord(iLocal_52[iVar0], -100.5008f, 6461.73f, 30.6343f, 2f, 2f, 3f, false, true, 0))
			{
				delete_ped(&(iLocal_52[iVar0]));
			}
		}
		iVar0++;
	}
	iLocal_644 = 1;
	if (_0x160AA1B32F6139B8(178228075) != 1)
	{
		_set_door_ajar_angle(178228075, 0f, 1, 0);
		_set_door_acceleration_limit(178228075, 1, 1, 0);
	}
	if (_0x160AA1B32F6139B8(1852297978) != 1)
	{
		_set_door_ajar_angle(1852297978, 0f, 1, 0);
		_set_door_acceleration_limit(1852297978, 1, 1, 0);
	}
}

void func_182(int iParam0)
{
	if ((is_vehicle_driveable(Local_547[iParam0 /*9*/].f_3, 0) && !is_ped_injured(Local_547[iParam0 /*9*/][0])) && !is_ped_injured(Local_547[iParam0 /*9*/][1]))
	{
		if (is_ped_in_vehicle(Local_547[iParam0 /*9*/][0], Local_547[iParam0 /*9*/].f_3, 0))
		{
			task_vehicle_drive_to_coord(Local_547[iParam0 /*9*/][0], Local_547[iParam0 /*9*/].f_3, 119.2184f, 6559.774f, 30.6237f, 15f, 0, joaat("sheriff"), 786485, 5f, 5f);
		}
		Local_547[iParam0 /*9*/].f_6 = 1;
	}
}

int func_183(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < Local_547)
	{
		iVar2 = 0;
		while (iVar2 <= 1)
		{
			if (does_entity_exist(Local_547[iVar1 /*9*/][iVar2]))
			{
				if ((has_entity_been_damaged_by_entity(Local_547[iVar1 /*9*/][iVar2], player_ped_id(), 1) || (!is_ped_injured(Local_547[iVar1 /*9*/][iVar2]) && is_ped_in_melee_combat(Local_547[iVar1 /*9*/][iVar2]))) || (!is_ped_injured(Local_547[iVar1 /*9*/][iVar2]) && is_ped_being_stealth_killed(Local_547[iVar1 /*9*/][iVar2])))
				{
					iVar0 = 1;
				}
			}
			iVar2++;
		}
		if (is_vehicle_driveable(Local_547[iVar1 /*9*/].f_3, 0))
		{
			if (is_vehicle_driveable(iParam0, 0))
			{
				if (!is_entity_in_angled_area(player_ped_id(), vLocal_269, vLocal_272, fLocal_275, 0, true, 0))
				{
					if (is_entity_at_entity(player_ped_id(), Local_547[iVar1 /*9*/].f_3, 5f, 5f, 5f, 0, 1, 0))
					{
						if (is_entity_touching_entity(iParam0, Local_547[iVar1 /*9*/].f_3))
						{
							if (is_playback_going_on_for_vehicle(Local_547[iVar1 /*9*/].f_3))
							{
								stop_playback_recorded_vehicle(Local_547[iVar1 /*9*/].f_3);
							}
							if (iVar1 == iLocal_258 && is_synchronized_scene_running(iLocal_253))
							{
								stop_synchronized_entity_anim(Local_547[iLocal_258 /*9*/].f_3, 1f, 1);
							}
							iVar0 = 1;
						}
					}
				}
			}
			if (is_ped_in_vehicle(player_ped_id(), Local_547[iVar1 /*9*/].f_3, 0))
			{
				iVar0 = 1;
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < iLocal_52)
	{
		if (does_entity_exist(iLocal_52[iVar1]))
		{
			if (has_entity_been_damaged_by_entity(iLocal_52[iVar1], player_ped_id(), 1))
			{
				iVar0 = 1;
			}
			if (!is_ped_injured(iLocal_52[iVar1]))
			{
				if (is_vehicle_driveable(iParam0, 0))
				{
					if (is_entity_touching_entity(iLocal_52[iVar1], iParam0))
					{
						iVar0 = 1;
					}
				}
			}
		}
		iVar1++;
	}
	if (is_ped_shooting(player_ped_id()) && is_entity_in_angled_area(player_ped_id(), -138.9828f, 6475.819f, 51.22334f, -90.29582f, 6426.385f, 1.471224f, 77.75f, 0, true, 0))
	{
		iVar0 = 1;
	}
	if (is_explosion_in_sphere(3, vLocal_152, 100f) || (is_vehicle_driveable(iLocal_358, 0) && is_entity_on_fire(iLocal_358)))
	{
		iVar0 = 1;
	}
	if (is_shocking_event_in_sphere(77, vLocal_152, 15f))
	{
		iVar0 = 1;
	}
	if (iParam1)
	{
		if (is_entity_in_angled_area(player_ped_id(), -126.4656f, 6476.683f, 30.46826f, -103.3576f, 6453.125f, 37.21962f, 29.5f, 0, true, 0) || (is_vehicle_driveable(iParam0, 0) && is_entity_in_angled_area(iParam0, -126.4656f, 6476.683f, 30.46826f, -103.3576f, 6453.125f, 37.21962f, 29.5f, 0, true, 0)))
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_184(int iParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (is_vehicle_driveable(iParam1, 0) && !is_ped_injured(iParam0))
	{
		if (does_blip_exist(iLocal_63))
		{
			if (iLocal_1428)
			{
				if (!is_ped_in_vehicle(iParam0, iParam1, 0))
				{
					set_blip_scale(iLocal_63, 0.7f);
					iLocal_1428 = 0;
				}
			}
			else if (is_ped_in_vehicle(iParam0, iParam1, 0))
			{
				set_blip_scale(iLocal_63, 1f);
				iLocal_1428 = 1;
			}
			vVar0 = {get_blip_coords(iLocal_63)};
			vVar3 = {get_entity_coords(iParam0, 1)};
			vVar0.x += vVar3.x - vVar0.x / 10f;
			vVar0.y += vVar3.y - vVar0.y / 10f;
			vVar0.z += vVar3.z - vVar0.z / 10f;
			set_blip_coords(iLocal_63, vVar0);
		}
		else
		{
			iLocal_63 = func_44(get_entity_coords(iParam0, 1), 0);
			set_blip_colour(iLocal_63, 3);
			set_blip_priority(iLocal_63, 3);
			if (does_entity_exist(uLocal_313[2]))
			{
				set_blip_name_from_text_file(iLocal_63, "CBH_BLIPTREV");
			}
			else
			{
				set_blip_name_from_text_file(iLocal_63, "CBH_BLIPMIKE");
			}
		}
	}
	else if (does_blip_exist(iLocal_63))
	{
		remove_blip(&iLocal_63);
	}
}

void func_185(int iParam0)
{
	if (*iParam0 != -1)
	{
		_0x67EEDEA1B9BAFD94();
		*iParam0 = -1;
	}
}

void func_186()
{
	func_87();
	func_221(1, 0);
	if (!is_ped_injured(player_ped_id()))
	{
		set_ped_helmet(player_ped_id(), 1);
	}
	if (is_vehicle_driveable(iLocal_358, 0) && (vdist2(get_entity_coords(iLocal_358, 1), vLocal_127) < 2500f || func_177() == 0))
	{
		if (is_big_vehicle(iLocal_358))
		{
			func_187(iLocal_358, 1422.663f, 3614.979f, 33.9476f, 46.7525f, 24, 0);
		}
		else
		{
			func_187(iLocal_358, 1405.848f, 3598.6f, 34.4038f, 49.567f, 24, 0);
		}
	}
	if (does_entity_exist(iLocal_51))
	{
		Global_88108.f_9[0] = iLocal_51;
	}
	if (does_entity_exist(iLocal_67))
	{
		Global_88108[0] = iLocal_67;
	}
	if (does_entity_exist(iLocal_358))
	{
		Global_88108[1] = iLocal_358;
	}
	func_765();
}

void func_187(int iParam0, vector3 vParam1, Vector3 fParam2, int iParam3, int iParam4)
{
	struct<60> Var0;
	
	if (does_entity_exist(iParam0) && is_vehicle_driveable(iParam0, 0))
	{
		if (iParam5 != 24 && iParam5 != 25)
		{
			return;
		}
		if (iParam5 == 24)
		{
			if (does_entity_exist(Global_68319.f_484[25]) && is_vehicle_driveable(Global_68319.f_484[25], 0))
			{
				if (Global_68319.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!iParam6)
		{
			if ((is_big_vehicle(iParam0) || get_entity_model(iParam0) == joaat("bus")) || get_entity_model(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_220(iParam5);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_216(iParam0, &Var0);
		if (func_31(vParam1, 0f, 0f, 0f, 0))
		{
			vParam1 = {get_entity_coords(iParam0, 1)};
			fParam4 = get_entity_heading(iParam0);
		}
		if (iParam5 == 24)
		{
			if (get_hash_key(get_this_script_name()) != joaat("vehicle_gen_controller"))
			{
				Global_69307 = get_hash_key(get_this_script_name());
			}
		}
		func_209(iParam5, &Var0, vParam1, fParam4, func_215(iParam0));
		func_188(iParam5, iParam0, 0);
	}
}

void func_188(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_206(&(Global_68319.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!is_bit_set(Global_68319.f_555[0 /*21*/].f_9, 12) && !is_bit_set(Global_68319.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_68319.f_555[0 /*21*/].f_4 != get_entity_model(iParam1))
		{
			return;
		}
	}
	if (Global_69226 != -1 && Global_69226 != iParam0)
	{
		return;
	}
	if (does_entity_exist(iParam1))
	{
		if (is_vehicle_driveable(iParam1, 0))
		{
			if (!is_entity_a_mission_entity(iParam1))
			{
				set_entity_as_mission_entity(iParam1, true, 1);
			}
			if (iParam0 == 24)
			{
				Global_101154.f_18807.f_4801 = func_110();
			}
			if (iParam1 != Global_68319.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_205(iParam0);
					if ((does_entity_exist(iVar0) && is_vehicle_driveable(iVar0, 0)) && iParam1 != iVar0)
					{
						func_189(iVar0, 145);
					}
				}
				Global_69225 = iParam1;
				Global_69226 = iParam0;
				Global_69227 = iParam2;
			}
		}
	}
}

void func_189(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_190(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = get_ped_in_vehicle_seat(iParam0, -1);
		if (!does_entity_exist(iVar0))
		{
			iVar0 = get_last_ped_in_vehicle_seat(iParam0, -1);
		}
		if (does_entity_exist(iVar0) && !is_ped_injured(iVar0))
		{
			if (get_entity_model(iVar0) == joaat("player_zero"))
			{
				iParam1 = false;
			}
			else if (get_entity_model(iVar0) == joaat("player_one"))
			{
				iParam1 = true;
			}
			else if (get_entity_model(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_101154.f_1826.f_539.f_3549;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (get_entity_model(iParam0) == Global_101154.f_18807.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!is_string_null_or_empty(&(Global_101154.f_18807.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (are_strings_equal(get_vehicle_number_plate_text(iParam0), &(Global_101154.f_18807.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_101154.f_18807.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_101154.f_18807.f_5592[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (get_entity_model(iParam0) == Global_101154.f_18807.f_5600[iVar1 /*78*/].f_66)
		{
			if (!is_string_null_or_empty(&(Global_101154.f_18807.f_5600[iVar1 /*78*/].f_1)))
			{
				if (are_strings_equal(get_vehicle_number_plate_text(iParam0), &(Global_101154.f_18807.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_101154.f_18807.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_101154.f_18807.f_5590 = iParam1;
	Global_69224 = iParam0;
	Global_101154.f_18807.f_5588 = 1;
	func_216(iParam0, &(Global_101154.f_18807.f_5510));
}

bool func_190(int iParam0)
{
	if ((((((((((!does_entity_exist(iParam0) || !is_vehicle_driveable(iParam0, 0)) || func_203(iParam0, 0, 0)) || func_203(iParam0, 1, 0)) || func_203(iParam0, 2, 0)) || func_215(iParam0) != 145) || func_202(iParam0)) || func_201(iParam0)) || func_200(iParam0)) || func_199(iParam0)) || !func_191(get_entity_model(iParam0)))
	{
		if (func_201(iParam0))
		{
		}
		if (func_201(iParam0))
		{
		}
		if (func_203(iParam0, 0, 0))
		{
		}
		if (func_203(iParam0, 1, 0))
		{
		}
		if (func_203(iParam0, 2, 0))
		{
		}
		if (func_215(iParam0) != 145)
		{
		}
		return false;
	}
	return true;
}

bool func_191(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	if (!func_192(iParam0, 0))
	{
		return false;
	}
	if (((is_this_model_a_boat(iParam0) || is_this_model_a_plane(iParam0)) || is_this_model_a_heli(iParam0)) || is_this_model_a_train(iParam0))
	{
		return false;
	}
	switch (iParam0)
	{
		case joaat("bus"):
		case joaat("stretch"):
		case joaat("barracks"):
		case joaat("armytanker"):
		case joaat("rhino"):
		case joaat("armytrailer"):
		case joaat("barracks2"):
		case joaat("flatbed"):
		case joaat("ripley"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("airbus"):
		case joaat("coach"):
		case joaat("rentalbus"):
		case joaat("tourbus"):
		case 1938952078:
		case joaat("pbus"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("boattrailer"):
		case joaat("biff"):
		case joaat("hauler"):
		case joaat("docktrailer"):
		case joaat("phantom"):
		case joaat("pounder"):
		case joaat("tractor2"):
		case joaat("bulldozer"):
		case joaat("handler"):
		case joaat("tiptruck"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("rubble"):
		case joaat("scrap"):
		case joaat("tiptruck2"):
		case joaat("camper"):
		case joaat("taco"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("journey"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("policeb"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("policet"):
		case joaat("taxi"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return false;
			break;
	}
	return true;
}

bool func_192(int iParam0, int iParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return false;
	}
	if (!is_model_a_vehicle(iParam0))
	{
		return false;
	}
	if ((((((((((((iParam0 == joaat("dodo") || iParam0 == joaat("dukes")) || iParam0 == joaat("dukes2")) || (iParam0 == joaat("dominator2") && !network_is_game_in_progress())) || (iParam0 == joaat("buffalo3") && !network_is_game_in_progress())) || (iParam0 == joaat("gauntlet2") && !network_is_game_in_progress())) || iParam0 == joaat("blimp2")) || iParam0 == joaat("stalion")) || (iParam0 == joaat("stalion2") && !network_is_game_in_progress())) || iParam0 == joaat("submersible2")) || iParam0 == joaat("marshall")) || iParam0 == joaat("blista2")) || iParam0 == joaat("blista3"))
	{
		if (!func_198())
		{
			return false;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < get_num_dlc_vehicles())
		{
			if (get_dlc_vehicle_data(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (_is_dlc_data_empty(Var1))
					{
						return false;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp"))
	{
		if ((((!func_197() && !func_196()) && !func_195()) && !func_194()) && !func_198())
		{
			return false;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((is_durango_version() || is_pc_version()) || is_orbis_version())
		{
		}
		else if (!func_195())
		{
			return false;
		}
	}
	if (iParam1)
	{
		if (!func_193(iParam0))
		{
			return false;
		}
	}
	return true;
}

int func_193(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2459480)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = _get_posix_time();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_5004 && !Global_262145.f_10847) && iVar1 < Global_262145.f_10848)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_11652 && iVar1 < Global_262145.f_11664)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_11648 && iVar1 < Global_262145.f_11660)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_11649 && iVar1 < Global_262145.f_11661)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_11650 && iVar1 < Global_262145.f_11662)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_11651 && iVar1 < Global_262145.f_11663)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_11653 && iVar1 < Global_262145.f_11665)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_11654 && iVar1 < Global_262145.f_11657)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_11655 && iVar1 < Global_262145.f_11658)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_11656 && iVar1 < Global_262145.f_11659)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_194()
{
	return false;
}

bool func_195()
{
	return true;
}

bool func_196()
{
	return true;
}

bool func_197()
{
	if (is_dlc_present(-1226939934))
	{
		return true;
	}
	return false;
}

bool func_198()
{
	int iVar0;
	
	if (network_is_signed_in())
	{
		if (_network_are_ros_available())
		{
			if (_0x593570C289A77688())
			{
				stat_get_int(joaat("sp_unlock_exclus_content"), &iVar0, -1);
				set_bit(&iVar0, 2);
				set_bit(&iVar0, 4);
				set_bit(&iVar0, 6);
				set_bit(&Global_25, 2);
				set_bit(&Global_25, 4);
				set_bit(&Global_25, 6);
				stat_set_int(joaat("sp_unlock_exclus_content"), iVar0, 1);
				if (_0x5AA3BEFA29F03AD4())
				{
					iVar0 = get_profile_setting(866);
					set_bit(&iVar0, false);
					_0xDAC073C7901F9E15(iVar0);
				}
				return true;
			}
		}
	}
	if (Global_138274 == 2)
	{
		return true;
	}
	else if (Global_138274 == 3)
	{
		return false;
	}
	if (_0x5AA3BEFA29F03AD4())
	{
		if (is_bit_set(get_profile_setting(866), false))
		{
			return true;
		}
	}
	return false;
}

bool func_199(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = get_entity_model(iParam0);
	sVar1 = get_vehicle_number_plate_text(iParam0);
	if (iVar0 == joaat("speedo") && are_strings_equal(sVar1, "LAMAR G "))
	{
		return true;
	}
	if (!func_192(iVar0, 0))
	{
		return true;
	}
	return false;
}

bool func_200(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (does_entity_exist(Global_88972[iVar0]))
		{
			if (Global_88972[iVar0] == iParam0)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_201(int iParam0)
{
	int iVar0;
	
	if (does_entity_exist(iParam0) && is_vehicle_driveable(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (does_entity_exist(Global_88942[iVar0]) && is_vehicle_driveable(Global_88942[iVar0], 0))
			{
				if (Global_88942[iVar0] == iParam0 && get_entity_model(Global_88942[iVar0]) == get_entity_model(iParam0))
				{
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

bool func_202(int iParam0)
{
	int iVar0;
	
	if (does_entity_exist(Global_68319.f_484[24]))
	{
		if (iParam0 == Global_68319.f_484[24])
		{
			return false;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (does_entity_exist(Global_68319.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_68319.f_484[iVar0])
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_203(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	char* sVar1;
	var uVar9;
	
	if (!does_entity_exist(iParam0) || !is_vehicle_driveable(iParam0, 0))
	{
		return false;
	}
	iVar0 = 0;
	while (func_204(iParam1, iVar0, &sVar1, &uVar9))
	{
		if (!iParam2 || is_bit_set(Global_101154.f_5919[uVar9], false))
		{
			if (is_vehicle_in_garage_area(&sVar1, iParam0))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_204(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return true;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return true;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return true;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return true;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return true;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return true;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return true;
			}
			break;
	}
	return false;
}

int func_205(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_68319.f_139[iParam0];
}

int func_206(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = {0f, 0f, 0f};
	*uParam0.f_3 = 0f;
	*uParam0.f_4 = 0;
	StringCopy(uParam0.f_5, "", 16);
	*uParam0.f_9 = 0;
	*uParam0.f_10 = 0;
	*uParam0.f_11 = 0;
	*uParam0.f_12 = 145;
	*uParam0.f_13 = -1;
	*uParam0.f_14 = 0;
	*uParam0.f_15 = {0f, 0f, 0f};
	*uParam0.f_18 = {0f, 0f, 0f};
	switch (iParam1)
	{
		case 0:
			*uParam0 = {-831.8538f, 172.1154f, 69.9058f};
			*uParam0.f_3 = 157.5705f;
			*uParam0.f_4 = func_207(0, 1);
			*uParam0.f_12 = 0;
			set_bit(uParam0.f_9, 20);
			set_bit(uParam0.f_9, 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = {1970.943f, 3801.684f, 31.1396f};
			*uParam0.f_3 = 301.3964f;
			*uParam0.f_4 = func_207(0, 1);
			*uParam0.f_12 = 0;
			set_bit(uParam0.f_9, 20);
			set_bit(uParam0.f_9, 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = {-22.6297f, -1439.137f, 29.6549f};
			*uParam0.f_3 = 180.0808f;
			*uParam0.f_4 = func_207(1, 1);
			*uParam0.f_12 = 1;
			set_bit(uParam0.f_9, 20);
			set_bit(uParam0.f_9, 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = {-22.5229f, -1434.699f, 29.6552f};
			*uParam0.f_3 = 141.6114f;
			*uParam0.f_4 = func_207(1, 2);
			*uParam0.f_12 = 1;
			set_bit(uParam0.f_9, 19);
			set_bit(uParam0.f_9, 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = {10.9281f, 545.669f, 174.7951f};
			*uParam0.f_3 = 61.392f;
			*uParam0.f_4 = func_207(1, 1);
			*uParam0.f_12 = 1;
			set_bit(uParam0.f_9, 20);
			set_bit(uParam0.f_9, 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = {6.1093f, 544.9742f, 174.2835f};
			*uParam0.f_3 = 92.1548f;
			*uParam0.f_4 = func_207(1, 2);
			*uParam0.f_12 = 1;
			set_bit(uParam0.f_9, 19);
			set_bit(uParam0.f_9, 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = {1981.416f, 3808.131f, 31.1384f};
			*uParam0.f_3 = 117.2557f;
			*uParam0.f_4 = func_207(2, 1);
			*uParam0.f_12 = 2;
			set_bit(uParam0.f_9, 20);
			set_bit(uParam0.f_9, 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = {-1158.488f, -1529.367f, 3.8995f};
			*uParam0.f_3 = 35.7505f;
			*uParam0.f_4 = func_207(2, 1);
			*uParam0.f_12 = 2;
			set_bit(uParam0.f_9, 20);
			set_bit(uParam0.f_9, 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = {148.2868f, -1270.569f, 28.2252f};
			*uParam0.f_3 = 208.4685f;
			*uParam0.f_4 = func_207(2, 1);
			*uParam0.f_12 = 2;
			set_bit(uParam0.f_9, 20);
			set_bit(uParam0.f_9, 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = {1459.509f, -1380.45f, 78.3259f};
			*uParam0.f_3 = 99.6211f;
			*uParam0.f_4 = joaat("scorcher");
			set_bit(uParam0.f_9, 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = {-1518.947f, -1387.865f, -0.5134f};
			*uParam0.f_3 = 98.3867f;
			*uParam0.f_4 = joaat("seashark");
			iVar0 = 1;
			set_bit(uParam0.f_9, 6);
			break;
		
		case 11:
			*uParam0 = {353.0926f, 3577.593f, 32.351f};
			*uParam0.f_3 = 16.6205f;
			*uParam0.f_4 = joaat("duster");
			iVar0 = 1;
			set_bit(uParam0.f_9, 6);
			break;
		
		case 12:
			*uParam0.f_14 = 0;
			*uParam0 = {-1652.004f, -3142.348f, 12.9921f};
			*uParam0.f_3 = 329.1082f;
			*uParam0.f_12 = 0;
			*uParam0.f_13 = 359;
			set_bit(uParam0.f_9, false);
			set_bit(uParam0.f_9, 21);
			set_bit(uParam0.f_9, 14);
			set_bit(uParam0.f_9, 7);
			set_bit(uParam0.f_9, 10);
			set_bit(uParam0.f_9, 12);
			set_bit(uParam0.f_9, 28);
			iVar0 = 1;
			break;
		
		case 13:
			*uParam0.f_14 = 1;
			*uParam0 = {-1271.649f, -3380.685f, 12.9451f};
			*uParam0.f_3 = 329.5137f;
			*uParam0.f_12 = 1;
			*uParam0.f_13 = 359;
			set_bit(uParam0.f_9, false);
			set_bit(uParam0.f_9, 21);
			set_bit(uParam0.f_9, 14);
			set_bit(uParam0.f_9, 7);
			set_bit(uParam0.f_9, 10);
			set_bit(uParam0.f_9, 12);
			set_bit(uParam0.f_9, 28);
			iVar0 = 1;
			break;
		
		case 14:
			*uParam0.f_14 = 2;
			*uParam0 = {1735.586f, 3294.531f, 40.1651f};
			*uParam0.f_3 = 194.9525f;
			*uParam0.f_12 = 2;
			*uParam0.f_13 = 359;
			set_bit(uParam0.f_9, false);
			set_bit(uParam0.f_9, 21);
			set_bit(uParam0.f_9, 14);
			set_bit(uParam0.f_9, 7);
			set_bit(uParam0.f_9, 10);
			set_bit(uParam0.f_9, 12);
			set_bit(uParam0.f_9, 28);
			iVar0 = 1;
			break;
		
		case 15:
			*uParam0.f_14 = 3;
			*uParam0 = {-846.27f, -1363.19f, 0.22f};
			*uParam0.f_3 = 108.78f;
			*uParam0.f_12 = 0;
			*uParam0.f_13 = 356;
			set_bit(uParam0.f_9, false);
			set_bit(uParam0.f_9, 21);
			set_bit(uParam0.f_9, 14);
			set_bit(uParam0.f_9, 7);
			set_bit(uParam0.f_9, 10);
			set_bit(uParam0.f_9, 12);
			set_bit(uParam0.f_9, 22);
			set_bit(uParam0.f_9, 28);
			iVar0 = 1;
			break;
		
		case 16:
			*uParam0.f_14 = 4;
			*uParam0 = {-849.47f, -1354.99f, 0.24f};
			*uParam0.f_3 = 109.84f;
			*uParam0.f_12 = 1;
			*uParam0.f_13 = 356;
			set_bit(uParam0.f_9, false);
			set_bit(uParam0.f_9, 21);
			set_bit(uParam0.f_9, 14);
			set_bit(uParam0.f_9, 7);
			set_bit(uParam0.f_9, 10);
			set_bit(uParam0.f_9, 12);
			set_bit(uParam0.f_9, 22);
			set_bit(uParam0.f_9, 28);
			iVar0 = 1;
			break;
		
		case 17:
			*uParam0.f_14 = 5;
			*uParam0 = {-852.47f, -1346.2f, 0.21f};
			*uParam0.f_3 = 108.76f;
			*uParam0.f_12 = 2;
			*uParam0.f_13 = 356;
			set_bit(uParam0.f_9, false);
			set_bit(uParam0.f_9, 21);
			set_bit(uParam0.f_9, 14);
			set_bit(uParam0.f_9, 7);
			set_bit(uParam0.f_9, 10);
			set_bit(uParam0.f_9, 12);
			set_bit(uParam0.f_9, 22);
			set_bit(uParam0.f_9, 28);
			iVar0 = 1;
			break;
		
		case 18:
			*uParam0.f_14 = 6;
			*uParam0 = {-745.857f, -1433.904f, 4.0005f};
			*uParam0.f_12 = 0;
			*uParam0.f_13 = 360;
			*uParam0.f_15 = {-756.2952f, -1441.609f, 2.9184f};
			*uParam0.f_18 = {-738.0606f, -1423.068f, 8.2835f};
			set_bit(uParam0.f_9, false);
			set_bit(uParam0.f_9, 21);
			set_bit(uParam0.f_9, 14);
			set_bit(uParam0.f_9, 7);
			set_bit(uParam0.f_9, 10);
			set_bit(uParam0.f_9, 12);
			set_bit(uParam0.f_9, 28);
			iVar0 = 1;
			break;
		
		case 19:
			*uParam0.f_14 = 7;
			*uParam0 = {-761.8486f, -1453.829f, 4.0005f};
			*uParam0.f_12 = 1;
			*uParam0.f_13 = 360;
			*uParam0.f_15 = {-772.8158f, -1459.957f, 3.2894f};
			*uParam0.f_18 = {-754.3353f, -1440.836f, 8.3334f};
			set_bit(uParam0.f_9, false);
			set_bit(uParam0.f_9, 21);
			set_bit(uParam0.f_9, 14);
			set_bit(uParam0.f_9, 7);
			set_bit(uParam0.f_9, 10);
			set_bit(uParam0.f_9, 12);
			set_bit(uParam0.f_9, 28);
			iVar0 = 1;
			break;
		
		case 20:
			*uParam0.f_14 = 8;
			*uParam0 = {1769.3f, 3244f, 41.1f};
			*uParam0.f_12 = 2;
			*uParam0.f_13 = 360;
			set_bit(uParam0.f_9, false);
			set_bit(uParam0.f_9, 21);
			set_bit(uParam0.f_9, 14);
			set_bit(uParam0.f_9, 7);
			set_bit(uParam0.f_9, 10);
			set_bit(uParam0.f_9, 12);
			set_bit(uParam0.f_9, 23);
			set_bit(uParam0.f_9, 28);
			iVar0 = 1;
			break;
		
		case 21:
			*uParam0.f_14 = 9;
			*uParam0 = {192.7897f, -1020.539f, -99.98f};
			*uParam0.f_3 = 180f;
			*uParam0.f_4 = 0;
			*uParam0.f_12 = 0;
			*uParam0.f_13 = 357;
			set_bit(uParam0.f_9, false);
			set_bit(uParam0.f_9, 21);
			set_bit(uParam0.f_9, 14);
			set_bit(uParam0.f_9, 7);
			set_bit(uParam0.f_9, 10);
			set_bit(uParam0.f_9, 12);
			set_bit(uParam0.f_9, 24);
			set_bit(uParam0.f_9, 28);
			set_bit(uParam0.f_9, 29);
			iVar0 = 1;
			break;
		
		case 22:
			*uParam0.f_14 = 10;
			*uParam0 = {192.7897f, -1020.539f, -99.98f};
			*uParam0.f_3 = 180f;
			*uParam0.f_4 = 0;
			*uParam0.f_12 = 1;
			*uParam0.f_13 = 357;
			set_bit(uParam0.f_9, false);
			set_bit(uParam0.f_9, 21);
			set_bit(uParam0.f_9, 14);
			set_bit(uParam0.f_9, 7);
			set_bit(uParam0.f_9, 10);
			set_bit(uParam0.f_9, 12);
			set_bit(uParam0.f_9, 24);
			set_bit(uParam0.f_9, 28);
			set_bit(uParam0.f_9, 29);
			iVar0 = 1;
			break;
		
		case 23:
			*uParam0.f_14 = 11;
			*uParam0 = {192.7897f, -1020.539f, -99.98f};
			*uParam0.f_3 = 180f;
			*uParam0.f_4 = 0;
			*uParam0.f_12 = 2;
			*uParam0.f_13 = 357;
			set_bit(uParam0.f_9, false);
			set_bit(uParam0.f_9, 21);
			set_bit(uParam0.f_9, 14);
			set_bit(uParam0.f_9, 7);
			set_bit(uParam0.f_9, 10);
			set_bit(uParam0.f_9, 12);
			set_bit(uParam0.f_9, 24);
			set_bit(uParam0.f_9, 28);
			set_bit(uParam0.f_9, 29);
			iVar0 = 1;
			break;
		
		case 26:
		case 27:
		case 28:
			iVar1 = iParam1 - 26;
			*uParam0.f_14 = 12 + iVar1;
			*uParam0 = {196.2794f, -1020.479f, -99.98f};
			*uParam0.f_3 = 180f;
			*uParam0.f_4 = 0;
			*uParam0.f_12 = 0 + iVar1;
			set_bit(uParam0.f_9, 10);
			set_bit(uParam0.f_9, 12);
			set_bit(uParam0.f_9, 7);
			set_bit(uParam0.f_9, 27);
			set_bit(uParam0.f_9, 24);
			set_bit(uParam0.f_9, 29);
			iVar0 = 1;
			break;
		
		case 29:
		case 30:
		case 31:
			iVar1 = iParam1 - 29;
			*uParam0.f_14 = 15 + iVar1;
			*uParam0 = {199.8872f, -1020.048f, -99.98f};
			*uParam0.f_3 = 180f;
			*uParam0.f_4 = 0;
			*uParam0.f_12 = 0 + iVar1;
			set_bit(uParam0.f_9, 10);
			set_bit(uParam0.f_9, 12);
			set_bit(uParam0.f_9, 7);
			set_bit(uParam0.f_9, 27);
			set_bit(uParam0.f_9, 24);
			set_bit(uParam0.f_9, 29);
			iVar0 = 1;
			break;
		
		case 32:
		case 33:
		case 34:
			iVar1 = iParam1 - 32;
			*uParam0.f_14 = 18 + iVar1;
			*uParam0 = {203.6006f, -1019.776f, -99.98f};
			*uParam0.f_3 = 180f;
			*uParam0.f_4 = 0;
			*uParam0.f_12 = 0 + iVar1;
			set_bit(uParam0.f_9, 10);
			set_bit(uParam0.f_9, 12);
			set_bit(uParam0.f_9, 7);
			set_bit(uParam0.f_9, 27);
			set_bit(uParam0.f_9, 24);
			set_bit(uParam0.f_9, 29);
			iVar0 = 1;
			break;
		
		case 24:
			*uParam0.f_14 = 21;
			*uParam0 = {0f, 0f, 0f};
			*uParam0.f_3 = 0f;
			*uParam0.f_4 = 0;
			set_bit(uParam0.f_9, 10);
			set_bit(uParam0.f_9, 11);
			set_bit(uParam0.f_9, 13);
			set_bit(uParam0.f_9, 12);
			iVar0 = 1;
			break;
		
		case 25:
			*uParam0.f_14 = 22;
			*uParam0 = {723.2515f, -632.0496f, 27.1484f};
			*uParam0.f_3 = 12.9316f;
			*uParam0.f_4 = joaat("tailgater");
			set_bit(uParam0.f_9, 10);
			set_bit(uParam0.f_9, 11);
			set_bit(uParam0.f_9, 13);
			set_bit(uParam0.f_9, 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = {-51.23f, 3111.9f, 24.95f};
			*uParam0.f_3 = 46.78f;
			*uParam0.f_4 = joaat("proptrailer");
			set_bit(uParam0.f_9, 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = {-55.7984f, -1096.586f, 25.4223f};
			*uParam0.f_3 = 308.0596f;
			*uParam0.f_4 = joaat("bjxl");
			*uParam0.f_10 = 126;
			*uParam0.f_11 = 126;
			set_bit(uParam0.f_9, 9);
			set_bit(uParam0.f_9, 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = {-2892.93f, 3192.37f, 11.66f};
			*uParam0.f_3 = -132.35f;
			*uParam0.f_4 = joaat("velum");
			*uParam0.f_10 = 157;
			*uParam0.f_11 = 157;
			set_bit(uParam0.f_9, 9);
			set_bit(uParam0.f_9, 23);
			set_bit(uParam0.f_9, 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = {1744.308f, 3270.673f, 40.2076f};
			*uParam0.f_3 = 125f;
			*uParam0.f_4 = joaat("cargobob3");
			set_bit(uParam0.f_9, 23);
			set_bit(uParam0.f_9, 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = {1751.44f, 3322.643f, 42.1855f};
			*uParam0.f_3 = 268.134f;
			*uParam0.f_4 = joaat("submersible");
			set_bit(uParam0.f_9, 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = {1377.104f, -2076.2f, 52f};
			*uParam0.f_3 = 37.5f;
			*uParam0.f_4 = joaat("towtruck");
			set_bit(uParam0.f_9, 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = {1380.42f, -2072.77f, 51.7607f};
			*uParam0.f_3 = 37.5f;
			*uParam0.f_4 = joaat("trash");
			set_bit(uParam0.f_9, 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = {1359.389f, 3618.441f, 33.8907f};
			*uParam0.f_3 = 108.2337f;
			*uParam0.f_4 = joaat("barracks");
			set_bit(uParam0.f_9, 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = {693.1154f, -1018.155f, 21.6387f};
			*uParam0.f_3 = 177.6454f;
			*uParam0.f_4 = 1938952078;
			set_bit(uParam0.f_9, 23);
			set_bit(uParam0.f_9, 8);
			iVar0 = 1;
			break;
		
		case 44:
			*uParam0 = {-73.6963f, 495.124f, 143.5226f};
			*uParam0.f_3 = 155.5994f;
			*uParam0.f_4 = joaat("vacca");
			iVar0 = 1;
			break;
		
		case 45:
			*uParam0 = {-67.6314f, 891.8266f, 234.5348f};
			*uParam0.f_3 = 294.993f;
			*uParam0.f_4 = joaat("surano");
			iVar0 = 1;
			break;
		
		case 46:
			*uParam0 = {533.9048f, -169.2469f, 53.7005f};
			*uParam0.f_3 = 1.2998f;
			*uParam0.f_4 = joaat("tornado2");
			iVar0 = 1;
			break;
		
		case 47:
			*uParam0 = {-726.8914f, -408.6952f, 34.0416f};
			*uParam0.f_3 = 267.7392f;
			*uParam0.f_4 = joaat("superd");
			iVar0 = 1;
			break;
		
		case 48:
			*uParam0 = {-1321.519f, 261.3993f, 61.5709f};
			*uParam0.f_3 = 350.7697f;
			*uParam0.f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 49:
			*uParam0 = {-1267.999f, 451.6463f, 93.7071f};
			*uParam0.f_3 = 48.9311f;
			*uParam0.f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 50:
			*uParam0 = {-1062.076f, -226.7637f, 37.157f};
			*uParam0.f_3 = 234.2767f;
			*uParam0.f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 51:
			*uParam0 = {68.16914f, -1558.958f, 29.46904f};
			*uParam0.f_3 = 49.90575f;
			*uParam0.f_4 = joaat("rumpo2");
			*uParam0.f_12 = 2;
			set_bit(uParam0.f_9, 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = {589.4399f, 2736.708f, 42.03316f};
			*uParam0.f_3 = -175.7105f;
			*uParam0.f_4 = joaat("rumpo2");
			*uParam0.f_12 = 2;
			set_bit(uParam0.f_9, 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = {-488.774f, -344.5721f, 34.36356f};
			*uParam0.f_3 = 82.4042f;
			*uParam0.f_4 = joaat("rumpo2");
			*uParam0.f_12 = 2;
			set_bit(uParam0.f_9, 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = {288.8808f, -585.4728f, 43.15428f};
			*uParam0.f_3 = -20.80707f;
			*uParam0.f_4 = joaat("rumpo2");
			*uParam0.f_12 = 2;
			set_bit(uParam0.f_9, 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = {304.8294f, -1383.674f, 31.67744f};
			*uParam0.f_3 = -41.11603f;
			*uParam0.f_4 = joaat("rumpo2");
			*uParam0.f_12 = 2;
			set_bit(uParam0.f_9, 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = {1126.194f, -1481.486f, 34.7016f};
			*uParam0.f_3 = -91.43369f;
			*uParam0.f_4 = joaat("rumpo2");
			*uParam0.f_12 = 2;
			set_bit(uParam0.f_9, 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = {-1598.36f, 5252.84f, 0f};
			*uParam0.f_3 = 28.14f;
			*uParam0.f_4 = joaat("submersible");
			*uParam0.f_13 = 308;
			set_bit(uParam0.f_9, 2);
			set_bit(uParam0.f_9, 30);
			set_bit(uParam0.f_9, 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = {-1602.62f, 5260.37f, 0.86f};
			*uParam0.f_3 = 25.32f;
			*uParam0.f_4 = joaat("dinghy");
			*uParam0.f_13 = 404;
			set_bit(uParam0.f_9, 2);
			set_bit(uParam0.f_9, 22);
			set_bit(uParam0.f_9, 6);
			iVar0 = 1;
			break;
		
		case 59:
			*uParam0 = {2116.571f, 4763.279f, 40.1596f};
			*uParam0.f_3 = 198.723f;
			*uParam0.f_4 = joaat("bfinjection");
			iVar0 = 1;
			break;
		
		case 60:
			*uParam0 = {1133.21f, 120.2f, 80.9f};
			*uParam0.f_3 = 134.4f;
			if (func_198())
			{
				*uParam0.f_4 = joaat("blimp2");
			}
			else
			{
				*uParam0.f_4 = joaat("blimp");
			}
			*uParam0.f_13 = 401;
			set_bit(uParam0.f_9, 13);
			set_bit(uParam0.f_9, 2);
			set_bit(uParam0.f_9, true);
			set_bit(uParam0.f_9, 23);
			set_bit(uParam0.f_9, 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = {-806.31f, -2679.65f, 13.9f};
			*uParam0.f_3 = 150.54f;
			if (func_198())
			{
				*uParam0.f_4 = joaat("blimp2");
			}
			else
			{
				*uParam0.f_4 = joaat("blimp");
			}
			*uParam0.f_13 = 401;
			set_bit(uParam0.f_9, 13);
			set_bit(uParam0.f_9, 2);
			set_bit(uParam0.f_9, true);
			set_bit(uParam0.f_9, 23);
			set_bit(uParam0.f_9, 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = {1985.85f, 3828.96f, 31.98f};
			*uParam0.f_3 = -16.58f;
			*uParam0.f_4 = joaat("blazer3");
			set_bit(uParam0.f_9, 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = {3870.75f, 4464.67f, 0f};
			*uParam0.f_3 = 0f;
			*uParam0.f_4 = joaat("submersible2");
			*uParam0.f_13 = 308;
			set_bit(uParam0.f_9, false);
			set_bit(uParam0.f_9, 21);
			set_bit(uParam0.f_9, 23);
			set_bit(uParam0.f_9, 6);
			set_bit(uParam0.f_9, 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = {1257.729f, -2564.474f, 41.717f};
			*uParam0.f_3 = 284.5561f;
			*uParam0.f_4 = joaat("dukes2");
			set_bit(uParam0.f_9, 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = {643.2823f, 3014.152f, 42.2733f};
			*uParam0.f_3 = 128.0554f;
			*uParam0.f_4 = joaat("dukes2");
			set_bit(uParam0.f_9, 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = {38.9368f, 850.8677f, 196.3f};
			*uParam0.f_3 = 311.6813f;
			*uParam0.f_4 = joaat("dodo");
			set_bit(uParam0.f_9, 30);
			set_bit(uParam0.f_9, 23);
			set_bit(uParam0.f_9, 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = {1333.875f, 4262.226f, 30.78f};
			*uParam0.f_3 = 262.5293f;
			*uParam0.f_4 = joaat("dodo");
			set_bit(uParam0.f_9, 30);
			set_bit(uParam0.f_9, 23);
			set_bit(uParam0.f_9, 6);
			iVar0 = 1;
			break;
	}
	if (is_bit_set(*uParam0.f_9, 10))
	{
		*uParam0.f_4 = Global_101154.f_18807.f_69[*uParam0.f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((*uParam0.f_4 == joaat("miljet") || *uParam0.f_4 == joaat("besra")) || *uParam0.f_4 == joaat("luxor")) || *uParam0.f_4 == joaat("shamal")) || *uParam0.f_4 == joaat("titan")) || *uParam0.f_4 == joaat("luxor2"))
			{
				*uParam0 = {1678.8f, 3229.6f, 41.8f};
				*uParam0.f_3 = 106.0906f;
			}
		}
		if (!func_31(Global_101154.f_18807.f_1864[*uParam0.f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = {Global_101154.f_18807.f_1864[*uParam0.f_14 /*3*/]};
		}
		if (Global_101154.f_18807.f_1934[*uParam0.f_14] != -1f)
		{
			*uParam0.f_3 = Global_101154.f_18807.f_1934[*uParam0.f_14];
		}
	}
	if (is_bit_set(*uParam0.f_9, 19))
	{
		if (!func_31(Global_101154.f_1826.f_539.f_2816[1 /*10*/][*uParam0.f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = {Global_101154.f_1826.f_539.f_2816[1 /*10*/][*uParam0.f_12 /*3*/]};
			*uParam0.f_3 = Global_101154.f_1826.f_539.f_2837[1 /*4*/][*uParam0.f_12];
		}
	}
	else if (is_bit_set(*uParam0.f_9, 20))
	{
		if (!func_31(Global_101154.f_1826.f_539.f_2816[0 /*10*/][*uParam0.f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = {Global_101154.f_1826.f_539.f_2816[0 /*10*/][*uParam0.f_12 /*3*/]};
			*uParam0.f_3 = Global_101154.f_1826.f_539.f_2837[0 /*4*/][*uParam0.f_12];
		}
	}
	return iVar0;
}

int func_207(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_147(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_208(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_208(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	*uParam1.f_88 = 1;
	*uParam1.f_84 = 255;
	*uParam1.f_85 = 255;
	*uParam1.f_86 = 255;
	*uParam1.f_97 = 1;
	*uParam1.f_3 = 1000;
	*uParam1.f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_101154.f_7775.f_99.f_58[128] && !Global_101154.f_7775.f_99.f_58[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					*uParam1 = iVar0;
					*uParam1.f_2 = 3f;
					*uParam1.f_4 = 0;
					*uParam1.f_9 = 1;
					*uParam1.f_11[0] = 1;
					StringCopy(uParam1.f_27, "5MDS003", 16);
					break;
				
				case joaat("premier"):
					*uParam1 = iVar0;
					*uParam1.f_2 = 14.9f;
					*uParam1.f_5 = 43;
					*uParam1.f_6 = 43;
					*uParam1.f_7 = 0;
					*uParam1.f_8 = 156;
					*uParam1.f_9 = 0;
					StringCopy(uParam1.f_27, "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					*uParam1 = iVar0;
					*uParam1.f_2 = 14f;
					*uParam1.f_5 = 32;
					*uParam1.f_6 = 0;
					*uParam1.f_7 = 0;
					*uParam1.f_8 = 156;
					StringCopy(uParam1.f_27, "BETTY 32", 16);
					if (Global_101154.f_7775.f_99.f_58[119])
					{
						*uParam1.f_11[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_101154.f_7775.f_99.f_58[118])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					*uParam1 = iVar0;
					*uParam1.f_2 = 6f;
					*uParam1.f_5 = 53;
					*uParam1.f_6 = 0;
					*uParam1.f_7 = 59;
					*uParam1.f_8 = 156;
					StringCopy(uParam1.f_27, "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					*uParam1 = iVar0;
					*uParam1.f_2 = 0f;
					*uParam1.f_5 = 111;
					*uParam1.f_6 = 111;
					*uParam1.f_7 = 0;
					*uParam1.f_8 = 156;
					*uParam1.f_10 = 1;
					StringCopy(uParam1.f_27, "FC1988", 16);
					*uParam1.f_11[0] = 1;
					*uParam1.f_11[1] = 1;
					*uParam1.f_11[2] = 1;
					*uParam1.f_11[3] = 1;
					*uParam1.f_11[4] = 1;
					*uParam1.f_11[5] = 1;
					*uParam1.f_11[6] = 1;
					*uParam1.f_11[7] = 1;
					*uParam1.f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
}

void func_209(int iParam0, var uParam1, vector3 vParam2, Vector3 fParam3, int iParam4)
{
	if (func_206(&(Global_68319.f_555[0 /*21*/]), iParam0))
	{
		if (is_bit_set(Global_68319.f_555[0 /*21*/].f_9, 10))
		{
			func_214(iParam0);
			func_213(uParam1, &(Global_101154.f_18807.f_69[Global_68319.f_555[0 /*21*/].f_14 /*78*/]));
			if (is_bit_set(Global_68319.f_555[0 /*21*/].f_9, 11))
			{
				Global_101154.f_18807.f_1864[Global_68319.f_555[0 /*21*/].f_14 /*3*/] = {vParam2};
				Global_101154.f_18807.f_1934[Global_68319.f_555[0 /*21*/].f_14] = fParam5;
			}
			else
			{
				Global_101154.f_18807.f_1864[Global_68319.f_555[0 /*21*/].f_14 /*3*/] = {0f, 0f, 0f};
				Global_101154.f_18807.f_1934[Global_68319.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_101154.f_18807.f_1958[Global_68319.f_555[0 /*21*/].f_14] = iParam6 + 1;
			func_210(iParam0, 1);
		}
	}
}

void func_210(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1)
	{
		if (!func_212(iParam0, 0))
		{
			func_211(iParam0, 1, 0);
			func_211(iParam0, 2, 0);
			func_211(iParam0, 3, 0);
			func_211(iParam0, 4, 0);
			func_211(iParam0, 0, 1);
			Global_68319[iParam0] = 1;
		}
	}
	else
	{
		func_211(iParam0, 0, 0);
	}
}

void func_211(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam2)
	{
		set_bit(&(Global_101154.f_18807[iParam0]), iParam1);
	}
	else
	{
		clear_bit(&(Global_101154.f_18807[iParam0]), iParam1);
	}
}

int func_212(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return false;
	}
	return is_bit_set(Global_101154.f_18807[iParam0], iParam1);
}

void func_213(var uParam0, var uParam1)
{
	*uParam1.f_66 = *uParam0.f_66;
	*uParam1 = *uParam0;
	*uParam1.f_1 = {*uParam0.f_1};
	*uParam1.f_5 = *uParam0.f_5;
	*uParam1.f_6 = *uParam0.f_6;
	*uParam1.f_7 = *uParam0.f_7;
	*uParam1.f_8 = *uParam0.f_8;
	*uParam1.f_9 = {*uParam0.f_9};
	*uParam1.f_59 = {*uParam0.f_59};
	*uParam1.f_62 = *uParam0.f_62;
	*uParam1.f_63 = *uParam0.f_63;
	*uParam1.f_64 = *uParam0.f_64;
	*uParam1.f_65 = *uParam0.f_65;
	*uParam1.f_77 = *uParam0.f_77;
	*uParam1.f_67 = *uParam0.f_67;
	*uParam1.f_69 = *uParam0.f_69;
	*uParam1.f_68 = *uParam0.f_68;
	*uParam1.f_71 = *uParam0.f_71;
	*uParam1.f_72 = *uParam0.f_72;
	*uParam1.f_73 = *uParam0.f_73;
	*uParam1.f_74 = *uParam0.f_74;
	*uParam1.f_75 = *uParam0.f_75;
	*uParam1.f_76 = *uParam0.f_76;
}

void func_214(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_206(&(Global_68319.f_555[0 /*21*/]), iParam0))
	{
		if (does_entity_exist(Global_68319.f_139[iParam0]))
		{
			set_entity_as_mission_entity(Global_68319.f_139[iParam0], true, 1);
			set_vehicle_as_no_longer_needed(&(Global_68319.f_139[iParam0]));
			Global_68319.f_139[iParam0] = 0;
		}
		if (is_bit_set(Global_68319.f_555[0 /*21*/].f_9, 13))
		{
			func_210(iParam0, 0);
		}
	}
}

int func_215(int iParam0)
{
	int iVar0;
	
	if (!does_entity_exist(iParam0))
	{
		return 145;
	}
	if (!is_vehicle_driveable(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (does_entity_exist(Global_88942[iVar0]))
		{
			if (Global_88942[iVar0] == iParam0)
			{
				return Global_88952[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

void func_216(int iParam0, var uParam1)
{
	int iVar0;
	
	if (is_vehicle_driveable(iParam0, 0))
	{
		func_219(uParam1);
		*uParam1.f_66 = get_entity_model(iParam0);
		StringCopy(uParam1.f_1, get_vehicle_number_plate_text(iParam0), 16);
		*uParam1 = get_vehicle_number_plate_text_index(iParam0);
		get_vehicle_colours(iParam0, uParam1.f_5, uParam1.f_6);
		get_vehicle_extra_colours(iParam0, uParam1.f_7, uParam1.f_8);
		get_vehicle_tyre_smoke_color(iParam0, uParam1.f_62, uParam1.f_63, uParam1.f_64);
		*uParam1.f_65 = get_vehicle_window_tint(iParam0);
		*uParam1.f_67 = get_vehicle_livery(iParam0);
		*uParam1.f_69 = get_vehicle_wheel_type(iParam0);
		*uParam1.f_70 = get_vehicle_door_lock_status(iParam0);
		get_vehicle_custom_secondary_colour(iParam0, uParam1.f_71, uParam1.f_72, uParam1.f_73);
		_get_vehicle_neon_lights_colour(iParam0, uParam1.f_74, uParam1.f_75, uParam1.f_76);
		if (_is_vehicle_neon_light_enabled(iParam0, 2))
		{
			set_bit(uParam1.f_77, 28);
		}
		if (_is_vehicle_neon_light_enabled(iParam0, 3))
		{
			set_bit(uParam1.f_77, 29);
		}
		if (_is_vehicle_neon_light_enabled(iParam0, 0))
		{
			set_bit(uParam1.f_77, 30);
		}
		if (_is_vehicle_neon_light_enabled(iParam0, 1))
		{
			set_bit(uParam1.f_77, 31);
		}
		if (*uParam1.f_65 == -1 && *uParam1.f_66 != joaat("granger"))
		{
			*uParam1.f_65 = 0;
		}
		if (is_vehicle_a_convertible(iParam0, 0))
		{
			*uParam1.f_68 = get_convertible_roof_state(iParam0);
		}
		if (is_this_model_a_plane(*uParam1.f_66))
		{
			if (_0x4198AB0022B15F87(iParam0))
			{
				switch (_get_vehicle_landing_gear(iParam0))
				{
					case 2:
					case 0:
						clear_bit(uParam1.f_77, 23);
						set_bit(uParam1.f_77, 22);
						break;
					
					case 3:
					case 1:
						clear_bit(uParam1.f_77, 23);
						clear_bit(uParam1.f_77, 22);
						break;
					
					case 4:
						set_bit(uParam1.f_77, 23);
						break;
				}
			}
			else
			{
				set_bit(uParam1.f_77, 23);
			}
		}
		if (!get_vehicle_tyres_can_burst(iParam0))
		{
			set_bit(uParam1.f_77, 9);
		}
		if (is_vehicle_stolen(iParam0))
		{
			set_bit(uParam1.f_77, 10);
		}
		if (get_is_vehicle_primary_colour_custom(iParam0))
		{
			set_bit(uParam1.f_77, 13);
			get_vehicle_custom_primary_colour(iParam0, uParam1.f_71, uParam1.f_72, uParam1.f_73);
		}
		if (get_is_vehicle_secondary_colour_custom(iParam0))
		{
			set_bit(uParam1.f_77, 12);
		}
		func_218(&iParam0, uParam1.f_9, uParam1.f_59);
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (is_vehicle_extra_turned_on(iParam0, iVar0 + 1))
			{
				set_bit(uParam1.f_77, func_217(iVar0 + 1));
			}
			iVar0++;
		}
		if (_does_vehicle_have_decal(iParam0, 0))
		{
			set_bit(uParam1.f_77, 11);
		}
		else
		{
			clear_bit(uParam1.f_77, 11);
		}
		if (decor_exist_on(iParam0, "IgnoredByQuickSave") && decor_get_bool(iParam0, "IgnoredByQuickSave"))
		{
			set_bit(uParam1.f_77, 27);
		}
		else
		{
			clear_bit(uParam1.f_77, 27);
		}
	}
}

int func_217(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

bool func_218(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!is_vehicle_driveable(*iParam0, 0))
	{
		return false;
	}
	if (get_num_mod_kits(*iParam0) == 0)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			*uParam1[iVar0] = 0;
			if (is_toggle_mod_on(*iParam0, iVar1))
			{
				*uParam1[iVar0] = 1;
			}
		}
		else
		{
			*uParam1[iVar0] = get_vehicle_mod(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				*uParam2[0] = get_vehicle_mod_variation(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				*uParam2[1] = get_vehicle_mod_variation(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return true;
}

void func_219(var uParam0)
{
	int iVar0;
	
	*uParam0.f_66 = 0;
	*uParam0.f_77 = 0;
	*uParam0.f_65 = 0;
	*uParam0.f_62 = 0;
	*uParam0.f_63 = 0;
	*uParam0.f_64 = 0;
	*uParam0.f_74 = 0;
	*uParam0.f_75 = 0;
	*uParam0.f_76 = 0;
	*uParam0 = 0;
	StringCopy(uParam0.f_1, "", 16);
	*uParam0.f_5 = 0;
	*uParam0.f_6 = 0;
	*uParam0.f_7 = 0;
	*uParam0.f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		*uParam0.f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		*uParam0.f_59[iVar0] = 0;
		iVar0++;
	}
	*uParam0.f_67 = 0;
	*uParam0.f_68 = 0;
	*uParam0.f_69 = 0;
	*uParam0.f_70 = 1;
	*uParam0.f_71 = 0;
	*uParam0.f_72 = 0;
	*uParam0.f_73 = 0;
}

void func_220(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_214(iParam0);
	func_210(iParam0, 0);
}

void func_221(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;
	
	if (!Global_55751)
	{
		Global_55751 = iParam1;
	}
	if (iParam0)
	{
		if ((func_175(0) && Global_69735.f_1 == 1) && func_222(Global_69735))
		{
		}
		else
		{
			Global_55749 = 1;
		}
	}
	if (Global_101154.f_7775 || func_175(0))
	{
		iVar0 = func_174();
		uVar1 = Global_82363[iVar0 /*5*/];
		uVar2 = Global_69758.f_109[uVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_101154.f_7775)
			{
			}
			return;
		}
		if (is_bit_set(Global_82363[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (is_bit_set(Global_82363[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		set_bit(&(Global_82363[iVar0 /*5*/].f_1), 4);
		set_bit(&Global_69737, true);
		Global_69753 = uVar2;
		Global_69754 = get_game_timer();
	}
}

bool func_222(int iParam0)
{
	switch (iParam0)
	{
		case 71:
			return true;
			break;
		
		case 86:
			return true;
			break;
		
		case 91:
			return true;
			break;
		
		default:
			return false;
			break;
	}
	return false;
}

void func_223(int iParam0, char* sParam1, int iParam2)
{
	_play_ambient_speech1(iParam0, sParam1, func_224(iParam2), 1);
}

int func_224(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

void func_225(int iParam0)
{
	int iVar0;
	int iVar1;
	
	Global_55750 = 0;
	if (!Global_55974[iParam0 /*13*/] == 3)
	{
		return;
	}
	iVar0 = false;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_67844)
	{
		if (Global_67845[iVar1 /*9*/] == iParam0)
		{
			iVar0 = true;
			Global_67845[iVar1 /*9*/].f_1 = 1;
			Global_67845[iVar1 /*9*/].f_2 = 0f;
			if (Global_67845[iVar1 /*9*/].f_3 == 2)
			{
			}
		}
		iVar1++;
	}
	if (!iVar0)
	{
	}
}

void func_226(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if (*(uParam0[iParam1 /*10*/]).f_7 == 1)
	{
	}
	*uParam0[iParam1 /*10*/] = iParam2;
	StringCopy(uParam0[iParam1 /*10*/].f_1, sParam3, 24);
	*(uParam0[iParam1 /*10*/]).f_7 = 1;
	*(uParam0[iParam1 /*10*/]).f_8 = iParam4;
	*(uParam0[iParam1 /*10*/]).f_9 = iParam5;
	if (!Global_69489)
	{
		if (!is_ped_injured(iParam2))
		{
			if (*(uParam0[iParam1 /*10*/]).f_8 == 0)
			{
				set_ped_can_play_ambient_anims(iParam2, 0);
			}
			else
			{
				set_ped_can_play_ambient_anims(iParam2, 1);
			}
		}
		if (!is_ped_injured(iParam2))
		{
			if (*(uParam0[iParam1 /*10*/]).f_9 == 0)
			{
				set_ped_can_use_auto_conversation_lookat(iParam2, 0);
			}
			else
			{
				set_ped_can_use_auto_conversation_lookat(iParam2, 1);
			}
		}
	}
}

void func_227(var uParam0, int iParam1)
{
	if (*(uParam0[iParam1 /*10*/]).f_7 == 1)
	{
		*(uParam0[iParam1 /*10*/]).f_7 = 0;
	}
}

void func_228(int iParam0, int iParam1, float fParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = *iParam0 - 1;
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (fParam2 <= *(iParam0[iVar0 /*5*/]).f_3 && iVar1 == *iParam0 - 1)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (*iParam1 != iVar1)
	{
		if ((*iParam1 >= 0 && vdist2(get_entity_coords(player_ped_id(), 1), *(iParam0[*iParam1 /*5*/])) > 100f) || *iParam1 == -1)
		{
			_0x67EEDEA1B9BAFD94();
			_0x3D3D15AF7BCAAF83(156, 1, 0);
			iVar0 = iVar1;
			while (iVar0 <= *iParam0 - 1)
			{
				_0xA905192A6781C41B(*(iParam0[iVar0 /*5*/]));
				iVar0++;
			}
			_0x3DDA37128DD1ACA8(1);
		}
		*iParam1 = iVar1;
	}
}

void func_229()
{
	int iVar0;
	
	if (iLocal_1425 < 3 && iLocal_1425 > 0)
	{
		if ((!is_sphere_visible(1405.935f, 3589.429f, 33.9496f, 15f) || vdist2(get_entity_coords(player_ped_id(), 1), get_entity_coords(uLocal_313[2], 1)) > 22500f) && vdist2(get_entity_coords(player_ped_id(), 1), get_entity_coords(uLocal_313[2], 1)) > 5625f)
		{
			set_entity_coords_no_offset(iLocal_358, 1405.848f, 3598.6f, 34.4038f, 0, 0, 1);
			set_entity_quaternion(iLocal_358, 0.0483f, -0.1174f, 0.4164f, 0.9003f);
			set_entity_coords(uLocal_313[2], 1404.87f, 3597.943f, 34.894f, 1, false, 0, 1);
			set_entity_heading(uLocal_313[2], 135f);
			set_vehicle_on_ground_properly(iLocal_358);
			iLocal_1425 = 3;
		}
	}
	switch (iLocal_1425)
	{
		case 0:
			request_anim_dict("missheistpaletoscoresetup");
			if (has_anim_dict_loaded("missheistpaletoscoresetup"))
			{
				if (!is_ped_injured(uLocal_313[2]) && !is_entity_dead(iLocal_358, 0))
				{
					task_vehicle_park(uLocal_313[2], iLocal_358, 1405.848f, 3598.6f, 34.4038f, 49.567f, 1, 90f, 0);
					iLocal_1425++;
				}
			}
			break;
		
		case 1:
			if (!is_ped_injured(uLocal_313[2]) && !is_entity_dead(iLocal_358, 0))
			{
				if (get_script_task_status(uLocal_313[2], -272084098) != 1)
				{
					open_sequence_task(&iVar0);
					task_vehicle_mission_coors_target(false, iLocal_358, get_entity_coords(iLocal_358, 1), 5, 1f, 786469, 10f, 10f, 1);
					task_leave_vehicle(false, iLocal_358, 131072);
					task_achieve_heading(false, 135f, 0);
					close_sequence_task(iVar0);
					task_perform_sequence(uLocal_313[2], iVar0);
					clear_sequence_task(&iVar0);
					iLocal_1425++;
				}
			}
			break;
		
		case 2:
			if ((!is_ped_in_vehicle(uLocal_313[2], iLocal_358, 0) && get_script_task_status(uLocal_313[2], 242628503) != 1) && get_entity_speed(iLocal_358) < 0.1f)
			{
				iLocal_1425++;
			}
			break;
		
		case 3:
			if (iLocal_1424 > 1)
			{
				if (!is_ped_facing_ped(uLocal_313[2], player_ped_id(), 60f))
				{
					iLocal_1424 = 0;
				}
			}
			switch (iLocal_1424)
			{
				case 0:
					clear_ped_tasks(uLocal_313[2]);
					task_look_at_entity(uLocal_313[2], player_ped_id(), -1, 2064, 4);
					task_look_at_entity(uLocal_313[2], player_ped_id(), -1, 16, 2);
					open_sequence_task(&iLocal_1426);
					task_turn_ped_to_face_entity(false, player_ped_id(), false);
					close_sequence_task(iLocal_1426);
					task_perform_sequence(uLocal_313[2], iLocal_1426);
					clear_sequence_task(&iLocal_1426);
					iLocal_1424++;
					break;
				
				case 1:
					if (get_script_task_status(uLocal_313[2], 242628503) != 1)
					{
						iLocal_1424++;
					}
					break;
				
				case 2:
					open_sequence_task(&iLocal_1427);
					task_play_anim(false, "missheistpaletoscoresetup", "trevor_impatient_wait_1", 8f, -8f, -1, 0, 0, 0, 0, 0);
					task_play_anim(false, "missheistpaletoscoresetup", "trevor_impatient_wait_2", 8f, -8f, -1, 0, 0, 0, 0, 0);
					task_play_anim(false, "missheistpaletoscoresetup", "trevor_impatient_wait_3", 8f, -8f, -1, 0, 0, 0, 0, 0);
					task_play_anim(false, "missheistpaletoscoresetup", "trevor_impatient_wait_4", 8f, -8f, -1, 0, 0, 0, 0, 0);
					close_sequence_task(iLocal_1427);
					task_perform_sequence(uLocal_313[2], iLocal_1427);
					clear_sequence_task(&iLocal_1427);
					iLocal_1424++;
					break;
			}
			break;
	}
}

float func_230(vector3 vParam0, int iParam1, char* sParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int[] iVar2 = new int[3];
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	vector3 vVar16;
	vector3 vVar19;
	vector3 vVar22;
	vector3 vVar25;
	int iVar28;
	float fVar29;
	float fVar30;
	
	if (!is_string_null_or_empty(sParam4) && iParam3 > 0)
	{
		if (has_vehicle_recording_been_loaded(iParam3, sParam4))
		{
			iVar2[0] = 99;
			iVar2[1] = 98;
			iVar2[2] = 97;
			iVar0 = 0;
			while (iVar0 < *uParam5)
			{
				fVar6 = absf(vParam0.x - *uParam5[iVar0 /*3*/]);
				fVar7 = absf(vParam0.y - *(uParam5[iVar0 /*3*/]).f_1);
				fVar8 = fVar6 + fVar7;
				fVar9 = 0f;
				iVar10 = 0;
				iVar1 = 0;
				while (iVar1 < iVar2)
				{
					if (iVar0 != iVar2[iVar1])
					{
						fVar11 = absf(vParam0.x - *uParam5[iVar2[iVar1] /*3*/]);
						fVar12 = absf(vParam0.y - *(uParam5[iVar2[iVar1] /*3*/]).f_1);
						fVar13 = fVar11 + fVar12;
						if (fVar13 > fVar9)
						{
							iVar10 = iVar1;
							fVar9 = fVar13;
						}
					}
					iVar1++;
				}
				if (fVar8 < fVar9)
				{
					iVar2[iVar10] = iVar0;
				}
				iVar0++;
			}
			fVar14 = 999999f;
			iVar0 = 0;
			while (iVar0 < iVar2)
			{
				if (iVar2[iVar0] > 0)
				{
					vVar19 = {_0x21C235BC64831E5A(vParam0, *(uParam5[iVar2[iVar0] /*3*/]), *(uParam5[iVar2[iVar0] - 1 /*3*/]), 1)};
				}
				else
				{
					vVar19 = {*(uParam5[0 /*3*/])};
				}
				if (iVar2[iVar0] < *uParam5 - 2)
				{
					vVar22 = {_0x21C235BC64831E5A(vParam0, *(uParam5[iVar2[iVar0] /*3*/]), *(uParam5[iVar2[iVar0] + 1 /*3*/]), 1)};
				}
				else
				{
					vVar22 = {*(uParam5[*uParam5 - 1 /*3*/])};
				}
				iVar28 = false;
				if (vdist2(vParam0, vVar19) < vdist2(vParam0, vVar22))
				{
					vVar25 = {vVar19};
				}
				else
				{
					iVar28 = true;
					vVar25 = {vVar22};
				}
				if (vdist2(vParam0, vVar25) < fVar14)
				{
					if (iVar28)
					{
						iVar15 = iVar2[iVar0];
					}
					else
					{
						iVar15 = iVar2[iVar0] - 1;
					}
					fVar14 = vdist2(vParam0, vVar25);
					vVar16 = {vVar25};
				}
				iVar0++;
			}
			iVar15 = func_231(iVar15, 0, 98);
			fVar29 = get_total_duration_of_vehicle_recording(iParam3, sParam4) / 99f;
			fVar30 = vdist(*(uParam5[iVar15 /*3*/]), vVar16) / vdist(*(uParam5[iVar15 /*3*/]), *(uParam5[iVar15 + 1 /*3*/])) * fVar29;
			return fVar30 + IntToFloat(iVar15) * fVar29;
		}
	}
	return -1f;
}

int func_231(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_232(int iParam0, int iParam1, int iParam2, char* sParam3, var uParam4, int iParam5, float fParam6)
{
	float fVar0;
	
	if (!is_ped_injured(iParam0) && is_vehicle_driveable(iParam1, 0))
	{
		fLocal_1324 = func_230(get_entity_coords(iParam1, 1), iParam2, sParam3, uParam4);
		if (func_236(iParam0))
		{
			if (is_ped_in_vehicle(iParam0, iParam1, 0))
			{
				set_drive_task_max_cruise_speed(iParam0, 25f);
			}
			if (iLocal_1327 != 262144)
			{
				iLocal_1327 = 262144;
			}
		}
		else
		{
			if (is_ped_in_vehicle(iParam0, iParam1, 0))
			{
				set_drive_task_max_cruise_speed(iParam0, _get_vehicle_model_max_speed(get_entity_model(iParam1)));
			}
			if (iLocal_1327 != 786469)
			{
				iLocal_1327 = 786469;
			}
		}
		if (func_234(get_entity_coords(iParam1, 1), &vLocal_211))
		{
			if (fLocal_1326 != 50f)
			{
				fLocal_1326 = 50f;
			}
			if (iLocal_1327 != 262144)
			{
				iLocal_1327 = 262144;
			}
		}
		else
		{
			if (iLocal_1327 != 786469)
			{
				iLocal_1327 = 786469;
			}
			if (fLocal_1326 != 100f)
			{
				fLocal_1326 = 100f;
			}
		}
		if (iLocal_1327 != iLocal_1328)
		{
			if (is_playback_using_ai_going_on_for_vehicle(iParam1))
			{
				set_playback_to_use_ai(iParam1, iLocal_1327);
			}
			iLocal_1328 = iLocal_1327;
		}
		if (is_ped_in_vehicle(iParam0, iParam1, 0))
		{
			if (!iLocal_247)
			{
				if (is_playback_going_on_for_vehicle(iParam1) && !is_playback_using_ai_going_on_for_vehicle(iParam1))
				{
					set_playback_to_use_ai(iParam1, iLocal_1327);
				}
				if (!is_point_in_angled_area(get_position_of_vehicle_recording_at_time(iParam2, fLocal_1324, sParam3), -494.9343f, 4928.82f, 157.1242f, -134.4572f, 4615.544f, 124.0836f, 30.25f, 0, true))
				{
					fVar0 = vdist2(get_entity_coords(player_ped_id(), 1), get_entity_coords(iParam0, 1));
					if (((fVar0 > fLocal_1326 * fLocal_1326 && (fLocal_1324 > 10000f || fVar0 > 10000f)) && has_vehicle_recording_been_loaded(iParam2, sParam3)) && fLocal_1324 < get_total_duration_of_vehicle_recording(iParam2, sParam3) - 10000f)
					{
						if ((is_entity_occluded(iParam0) && is_entity_occluded(iParam1)) && !is_sphere_visible(get_position_of_vehicle_recording_at_time(iParam2, fLocal_1324, sParam3), 4f))
						{
							if (!is_ped_in_vehicle(iParam0, iParam1, 0))
							{
								set_ped_into_vehicle(iParam0, iParam1, -1);
							}
							set_entity_collision(iParam1, false, 0);
							stop_playback_recorded_vehicle(iParam1);
							start_playback_recorded_vehicle(iParam1, iParam2, sParam3, 1);
							skip_time_in_playback_recorded_vehicle(iParam1, fLocal_1324);
							iLocal_247 = 1;
						}
					}
				}
			}
			else if (vdist2(get_entity_coords(player_ped_id(), 1), get_entity_coords(iParam0, 1)) < fLocal_1326 * fLocal_1326 * 0.9f || (!is_entity_occluded(iParam1) && vdist2(get_entity_coords(player_ped_id(), 1), get_entity_coords(iParam1, 1)) < 100f * 100f * 1.5f))
			{
				if (is_playback_going_on_for_vehicle(iParam1) && is_vehicle_driveable(iParam1, 0))
				{
					set_playback_speed(iParam1, 1f);
					set_entity_collision(iParam1, true, 0);
					iLocal_247 = 0;
				}
			}
			else if (iParam5)
			{
				if (fParam6 > fLocal_1324)
				{
					if (is_playback_going_on_for_vehicle(iParam1) && is_vehicle_driveable(iParam1, 0))
					{
						set_playback_speed(iParam1, func_233(fParam6 - fLocal_1324 / 1000f, 1f, 3f));
					}
				}
				else if (is_vehicle_driveable(iParam1, 0))
				{
					set_playback_speed(iParam1, 1f);
				}
			}
		}
		else if (!is_ped_in_vehicle(iParam0, iParam1, 0))
		{
			if (get_script_task_status(iParam0, -1794415470) != 1)
			{
				task_enter_vehicle(iParam0, iParam1, -1, -1, 2f, 1, 0);
			}
			if ((is_entity_occluded(iParam1) && vdist2(get_entity_coords(player_ped_id(), 1), get_entity_coords(iParam0, 1)) > 50f) && vdist2(get_entity_coords(iParam1, 1), get_entity_coords(player_ped_id(), 1)) > 50f)
			{
				if (!is_sphere_visible(get_position_of_vehicle_recording_at_time(iParam2, fLocal_1324, sParam3), 2f))
				{
					set_entity_coords(iParam1, get_position_of_vehicle_recording_at_time(iParam2, fLocal_1324, sParam3), 1, false, 0, 1);
				}
				if (is_entity_occluded(iParam0))
				{
					set_ped_into_vehicle(iParam0, iParam1, -1);
				}
			}
		}
	}
}

float func_233(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

bool func_234(vector3 vParam0, var uParam1)
{
	int iVar0;
	
	if (*uParam3 < 3)
	{
	}
	iVar0 = 1;
	while (iVar0 <= *uParam3 - 1)
	{
		if (!func_235(vParam0, *(uParam3[iVar0 /*3*/]), *(uParam3[iVar0 - 1 /*3*/])))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

int func_235(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3, struct<2> Param4, var uParam5)
{
	return Param6 - Param3 * Param0.f_1 - Param3.f_1 - Param6.f_1 - Param3.f_1 * Param0 - Param3 >= 0f;
}

int func_236(int iParam0)
{
	return ((((((((((((is_entity_in_angled_area(iParam0, -824.9688f, 5228.711f, 116.8678f, -852.0287f, 5341.012f, 54.16111f, 65.75f, 0, true, 0) || is_entity_in_angled_area(iParam0, -171.5547f, 4652.35f, 140.7038f, -33.91709f, 4546.747f, 106.9574f, 65.75f, 0, true, 0)) || is_entity_in_angled_area(iParam0, -89.91727f, 4308.34f, 58.66524f, -193.9387f, 4219.964f, 35.34774f, 38.25f, 0, true, 0)) || is_entity_in_angled_area(iParam0, -223.0244f, 3932.076f, 48.88577f, -215.2881f, 3832.037f, 28.85036f, 56.5f, 0, true, 0)) || is_entity_in_angled_area(iParam0, -215.4631f, 3720.156f, 61.35942f, -125.2304f, 3631.989f, 35.59824f, 56.5f, 0, true, 0)) || is_entity_in_angled_area(iParam0, 85.41956f, 3496.506f, 51.25703f, 177.0784f, 3396.792f, 28.67663f, 119.25f, 0, true, 0)) || is_entity_in_angled_area(iParam0, 35.18766f, 4455.669f, 81.75587f, -37.35991f, 4422.036f, 54.01874f, 62.25f, 0, true, 0)) || is_entity_in_angled_area(iParam0, -809.7636f, 5265.459f, 77.19865f, -726.4775f, 5220.505f, 124.4587f, 61.75f, 0, true, 0)) || is_entity_in_angled_area(iParam0, -652.9576f, 5133.302f, 114.4135f, -587.3712f, 5025.89f, 164.5662f, 61.75f, 0, true, 0)) || is_entity_in_angled_area(iParam0, -243.4116f, 4721.371f, 91.37091f, -97.04164f, 4589.317f, 148.162f, 22f, 0, true, 0)) || is_entity_in_angled_area(iParam0, -51.04823f, 4561.023f, 76.79493f, 24.16429f, 4525.127f, 129.62f, 43f, 0, true, 0)) || is_entity_in_angled_area(iParam0, -35.08501f, 3605.692f, -0.894375f, 128.6888f, 3553.019f, 63.64628f, 70.5f, 0, true, 0)) || is_entity_in_angled_area(iParam0, -419.153f, 6119.916f, 30.15674f, -435.4348f, 6059.348f, 38.9021f, 39.25f, 0, true, 0));
}

void func_237()
{
	int iVar0;
	int iVar1;
	
	if (is_vehicle_driveable(iLocal_1350, 0) && func_177() == 0)
	{
		switch (iLocal_1365)
		{
			case 0:
				sLocal_1329[0] = "RBS1_LES2";
				sLocal_1329[1] = "RBS1_LES3";
				iLocal_1365++;
				break;
			
			case 1:
				if (((!iLocal_1332[0] || (iLocal_1332[0] && iLocal_1335[0])) && (!iLocal_1332[1] || (iLocal_1332[1] && iLocal_1335[1]))) && is_ped_in_vehicle(player_ped_id(), iLocal_1350, 0))
				{
					if (!iLocal_1357)
					{
						if (func_6(&Local_360, sLocal_276, "RBS1_LES1", 8, 0, 0, 0))
						{
							iLocal_1357 = 1;
						}
					}
					if (iLocal_1356)
					{
						if (func_241(&Local_360, sLocal_276, "RBS1_LES1", &Local_1358, 8, 0, 0))
						{
							iLocal_1356 = 0;
						}
					}
				}
				else if (!iLocal_1356)
				{
					Local_1358 = {func_240()};
					func_46();
					iLocal_1356 = 1;
					iLocal_1366 = iLocal_1365;
					iLocal_1365 = 100;
				}
				if (!func_43() && !iLocal_1356)
				{
					iLocal_1357 = 0;
					StringCopy(&Local_1358, "", 24);
					iLocal_1365++;
				}
				break;
			
			case 2:
				if (((!iLocal_1332[0] || (iLocal_1332[0] && iLocal_1335[0])) && (!iLocal_1332[1] || (iLocal_1332[1] && iLocal_1335[1]))) && is_ped_in_vehicle(player_ped_id(), iLocal_1350, 0))
				{
					if (!iLocal_1357)
					{
						if (func_6(&Local_360, sLocal_276, "RBS1_LES1b", 8, 0, 0, 0))
						{
							iLocal_1357 = 1;
						}
					}
					if (iLocal_1356)
					{
						if (func_241(&Local_360, sLocal_276, "RBS1_LES1b", &Local_1358, 8, 0, 0))
						{
							iLocal_1356 = 0;
						}
					}
				}
				else if (!iLocal_1356)
				{
					Local_1358 = {func_240()};
					func_46();
					iLocal_1356 = 1;
					iLocal_1366 = iLocal_1365;
					iLocal_1365 = 100;
				}
				break;
			
			case 100:
				if (!func_43() && !is_message_being_displayed())
				{
					iLocal_1367 = -1;
					iVar0 = 0;
					while (iVar0 < iLocal_1335)
					{
						if (iLocal_1332[iVar0] && !iLocal_1335[iVar0])
						{
							if (iLocal_1367 == -1)
							{
								iLocal_1367 = iVar0;
							}
							func_239(sLocal_1329[iVar0], (is_vehicle_driveable(iLocal_1350, 0) && is_ped_in_vehicle(player_ped_id(), iLocal_1350, 0)));
						}
						iVar0++;
					}
					if ((!func_43() && !iLocal_663) && is_ped_in_vehicle(player_ped_id(), iLocal_1350, 0))
					{
						iLocal_662 = 0;
						if (iLocal_1367 != -1)
						{
							iLocal_1335[iLocal_1367] = 1;
						}
						StringCopy(&cLocal_664, "", 24);
						iLocal_1365 = iLocal_1366;
						iLocal_1366 = 1000;
					}
				}
				break;
		}
		if (!iLocal_1332[0])
		{
			if (is_entity_in_angled_area(player_ped_id(), -706.7669f, 5536.016f, 34.65338f, -805.0684f, 5471.531f, 39.91594f, 24f, 0, true, 0) && is_ped_in_vehicle(player_ped_id(), iLocal_1350, 0))
			{
				iLocal_1332[0] = 1;
			}
		}
		if (!iLocal_1332[1])
		{
			if (is_entity_in_angled_area(player_ped_id(), -262.86f, 4738.64f, 119.1165f, -163.3743f, 4644.937f, 147.8358f, 14.25f, 0, true, 0) && is_ped_in_vehicle(player_ped_id(), iLocal_1350, 0))
			{
				iLocal_1332[1] = 1;
			}
		}
	}
	if ((!is_ped_injured(uLocal_313[iLocal_1349]) && is_ped_in_vehicle(uLocal_313[iLocal_1349], iLocal_1351, 0)) && is_ped_in_any_vehicle(player_ped_id(), 0))
	{
		if (iLocal_1349 == 2)
		{
			if (get_game_timer() - iLocal_1364 > 6000)
			{
				if (vdist2(get_entity_coords(player_ped_id(), 1), get_entity_coords(uLocal_313[iLocal_1349], 1)) < 25f)
				{
					if ((!iLocal_663 && !func_43()) && !is_message_being_displayed())
					{
						if (is_vehicle_driveable(iLocal_1350, 0) && is_vehicle_driveable(iLocal_1351, 0))
						{
							if (is_entity_touching_entity(iLocal_1351, iLocal_1350) || is_entity_in_angled_area(iLocal_1351, get_entity_coords(iLocal_1350, 1), get_offset_from_entity_in_world_coords(iLocal_1350, 0f, 4f, 0f), 2f, 0, true, 0))
							{
								if (func_238())
								{
									if (func_6(&Local_360, sLocal_276, "RBS1_ASSHLEM", 8, 0, 0, 0))
									{
										iLocal_1364 = get_game_timer();
									}
								}
								else if (func_6(&Local_360, sLocal_276, sLocal_278, 8, 0, 0, 0))
								{
									iLocal_1364 = get_game_timer();
								}
							}
						}
					}
				}
			}
			if (vdist2(get_entity_coords(player_ped_id(), 1), get_entity_coords(uLocal_313[iLocal_1349], 1)) < pow(15f, 2f))
			{
				set_current_ped_weapon(uLocal_313[iLocal_1349], joaat("weapon_unarmed"), true);
				set_current_ped_vehicle_weapon(uLocal_313[iLocal_1349], joaat("weapon_unarmed"));
				set_ped_can_switch_weapon(uLocal_313[iLocal_1349], false);
				get_current_ped_weapon(uLocal_313[iLocal_1349], &iVar1, 1);
				if (iVar1 == joaat("weapon_unarmed"))
				{
					if (!is_ped_doing_driveby(uLocal_313[iLocal_1349]))
					{
						if (get_game_timer() - iLocal_1368 > 8000)
						{
							task_drive_by(uLocal_313[iLocal_1349], player_ped_id(), false, 0f, 0f, 0f, 25f, 80, 1, -753768974);
							iLocal_1368 = get_game_timer();
						}
					}
					else if (get_game_timer() - iLocal_1368 > 3000)
					{
						clear_driveby_task_underneath_driving_task(uLocal_313[iLocal_1349]);
					}
				}
			}
		}
	}
}

bool func_238()
{
	if (is_bit_set(get_random_int_in_range(false, 65535), false))
	{
		return true;
	}
	return false;
}

void func_239(char* sParam0, int iParam1)
{
	if (iParam1)
	{
		if (!iLocal_662)
		{
			if (func_6(&Local_360, sLocal_276, sParam0, 8, 0, 0, 0))
			{
				iLocal_663 = false;
				iLocal_662 = 1;
			}
		}
		if (iLocal_663)
		{
			if (func_241(&Local_360, sLocal_276, sParam0, &cLocal_664, 8, 0, 0))
			{
				iLocal_663 = false;
			}
		}
	}
	if (!iParam1)
	{
		if (!iLocal_663)
		{
			cLocal_664 = {func_240()};
			func_46();
			iLocal_663 = true;
		}
	}
}

struct<6> func_240()
{
	char[24] cVar0;
	int iVar6;
	int iVar7;
	int iVar8;
	
	StringCopy(&cVar0, "NULL", 24);
	if (Global_15712 == 4)
	{
		iVar6 = get_current_scripted_conversation_line();
		iVar6 += Global_16722;
		iVar7 = iVar6 + 1;
		if (iVar7 > -1 && iVar6 > -1)
		{
			if (does_text_label_exist(&(Global_14580[iVar7 /*6*/])))
			{
				return Global_14580[iVar7 /*6*/];
			}
			else
			{
				iVar8 = iVar7;
				while (iVar8 < 70)
				{
					if (does_text_label_exist(&(Global_14580[iVar8 /*6*/])))
					{
						return Global_14580[iVar8 /*6*/];
						iVar8 = 70;
					}
					iVar8++;
				}
				return cVar0;
			}
			return Global_14580[iVar6 /*6*/];
		}
		else
		{
			return cVar0;
		}
	}
	return cVar0;
}

int func_241(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_17(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15719 = 0;
	Global_15726 = 0;
	Global_15721 = 0;
	Global_16703 = 0;
	Global_16705 = 0;
	Global_16709 = 1;
	StringCopy(&Global_16716, sParam3, 24);
	Global_2621441 = 0;
	return func_7(sParam2, iParam4, 0);
}

void func_242(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	int iVar0;
	
	request_vehicle_recording(iParam1, sParam2);
	if (has_vehicle_recording_been_loaded(iParam1, sParam2))
	{
		iVar0 = 0;
		while (iVar0 < *iParam0)
		{
			*(iParam0[iVar0 /*5*/]).f_3 = func_230(*(iParam0[iVar0 /*5*/]), iParam1, sParam2, uParam3);
			*(iParam0[iVar0 /*5*/]).f_4 = 1;
			iVar0++;
		}
	}
}

void func_243(var uParam0, int iParam1, char* sParam2)
{
	Vector3 fVar0;
	float fVar1;
	int iVar2;
	
	if (has_vehicle_recording_been_loaded(iParam1, sParam2))
	{
		fVar0 = get_total_duration_of_vehicle_recording(iParam1, sParam2);
		fVar1 = fVar0 / 99f;
		*(uParam0[99 /*3*/]) = {get_position_of_vehicle_recording_at_time(iParam1, fVar0, sParam2)};
		iVar2 = 0;
		while (iVar2 < *uParam0)
		{
			*(uParam0[iVar2 /*3*/]) = {get_position_of_vehicle_recording_at_time(iParam1, fVar1 * IntToFloat(iVar2), sParam2)};
			iVar2++;
		}
	}
}

void func_244(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_67844)
	{
		if (Global_67845[iVar0 /*9*/] == iParam0)
		{
			if (iParam2)
			{
				Global_67845[iVar0 /*9*/].f_1 = iParam1;
			}
			else
			{
				Global_67845[iVar0 /*9*/].f_1 += iParam1;
			}
			return;
		}
		iVar0++;
	}
	if (Global_67845[iVar0 /*9*/] != -1)
	{
		if (Global_55974[Global_67845[iVar0 /*9*/] /*13*/] == 3)
		{
			if (Global_67845[iVar0 /*9*/].f_1 > 1)
			{
				Global_67845[iVar0 /*9*/].f_1 = 1;
			}
			if (Global_67845[iVar0 /*9*/].f_1 < 0)
			{
				Global_67845[iVar0 /*9*/].f_1 = 0;
			}
		}
	}
}

int func_245(var uParam0, int iParam1, int iParam2, Vector3 fParam3, Vector3 fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9)
{
	return func_246(uParam0, 0, iParam1, iParam2, fParam3, fParam4, iParam5, iParam6, sParam7, 2, 0, iParam8, iParam9);
	return 1;
}

bool func_246(var uParam0, int iParam1, int iParam2, var uParam3, Vector3 fParam4, Vector3 fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	
	iVar0 = uParam3;
	if (!*uParam0.f_16)
	{
		if (_0x71E7B2E657449AAD())
		{
			if (!iParam10)
			{
				*uParam0.f_13 = player_ped_id();
			}
			if ((!is_ped_injured(*uParam0.f_13) || iParam10) && !is_ped_injured(*uParam0.f_12))
			{
				*uParam0.f_27 = 0;
				Global_88530 = 1;
				if (!iParam10)
				{
					if (is_ped_sitting_in_any_vehicle(*uParam0.f_13))
					{
						iVar1 = get_vehicle_ped_is_in(*uParam0.f_13, 0);
						func_269(iVar1, 0);
					}
					set_player_control(player_id(), false, 0);
					set_entity_invincible(*uParam0.f_13, true);
					set_entity_invincible(*uParam0.f_12, true);
				}
				*uParam0.f_21 = func_268();
				func_263(1);
				if (iParam6)
				{
					iVar0 |= 4;
				}
				if (iParam7)
				{
					iVar0 |= 8;
				}
				if (does_cam_exist(iParam1) || !is_string_null_or_empty(sParam8))
				{
					iVar0 |= 2;
				}
				if (func_262())
				{
					iVar0 |= 1;
				}
				if (!is_player_switch_in_progress())
				{
					start_player_switch(*uParam0.f_13, *uParam0.f_12, iVar0, iParam2);
					if (iParam11)
					{
						_0x5F2013F8BC24EE69(iParam12);
					}
					switch (func_148(*uParam0.f_13))
					{
						case 0:
							_0xD2209BE128B5418C("SwitchHUDMichaelOut");
							break;
						
						case 1:
							_0xD2209BE128B5418C("SwitchHUDMichaelOut");
							break;
						
						case 2:
							_0xD2209BE128B5418C("SwitchHUDTrevorOut");
							break;
					}
					_0xD2209BE128B5418C("SwitchHUDOut");
				}
				else if (_0x933BBEEB8C61B5F4())
				{
					_0xD8295AF639FD9CB8(*uParam0.f_12);
					func_261(0);
				}
				else
				{
					return false;
				}
				if (does_cam_exist(iParam1))
				{
					if (get_ideal_player_switch_type(get_entity_coords(*uParam0.f_13, 1), get_entity_coords(*uParam0.f_12, 1)) != 3)
					{
						_0xC208B673CE446B61(get_cam_coord(iParam1), get_cam_rot(iParam1, iParam9), get_cam_fov(iParam1), get_cam_far_clip(iParam1), iParam9);
					}
				}
				if (!is_string_null_or_empty(sParam8))
				{
					_0x0FDE9DBFC0A6BC65(sParam8);
				}
				if (!Global_17118.f_111)
				{
					play_sound(-1, "CHARACTER_CHANGE_UP_MASTER", 0, 0, 0, 1);
					if (get_ideal_player_switch_type(get_entity_coords(*uParam0.f_13, 1), get_entity_coords(*uParam0.f_12, 1)) == 3)
					{
						play_sound(-1, "slow", "SHORT_PLAYER_SWITCH_SOUND_SET", 0, 0, 1);
					}
					if (Global_17118.f_109 == -1)
					{
						Global_17118.f_109 = get_sound_id();
					}
					Global_17118.f_110 = get_hash_key(get_this_script_name());
					play_sound(Global_17118.f_109, "CHARACTER_CHANGE_SKY_MASTER", 0, 0, 0, 1);
					start_audio_scene("CHARACTER_CHANGE_IN_SKY_SCENE");
					if (is_audio_scene_active("CHARACTER_CHANGE_IN_SKY_SCENE"))
					{
					}
				}
				if (Global_17118.f_109 != -1 && Global_17118.f_110 == get_hash_key(get_this_script_name()))
				{
					stop_sound(Global_17118.f_109);
					release_sound_id(Global_17118.f_109);
					Global_17118.f_109 = -1;
					Global_17118.f_110 = 0;
				}
				*uParam0.f_25 = get_game_timer();
				*uParam0.f_16 = 1;
				func_260(1);
				key_hud_colour(true, *uParam0.f_13);
				if (get_follow_ped_cam_view_mode() == 3)
				{
					set_follow_ped_cam_view_mode(1);
				}
				if (get_follow_vehicle_cam_view_mode() == 3)
				{
					set_follow_vehicle_cam_view_mode(1);
				}
				if (!iParam10)
				{
					if (get_entity_model(*uParam0.f_12) == func_93(0))
					{
						_0xBF59707B3E5ED531(func_91(0));
					}
					else if (get_entity_model(*uParam0.f_12) == func_93(2))
					{
						_0xBF59707B3E5ED531(func_91(2));
					}
					else if (get_entity_model(*uParam0.f_12) == func_93(1))
					{
						_0xBF59707B3E5ED531(func_91(1));
					}
					else
					{
						_0xBF59707B3E5ED531("");
					}
					_0xBDEB86F4D5809204(0f);
				}
			}
			else
			{
				*uParam0.f_17 = 1;
			}
		}
		else
		{
			*uParam0.f_17 = 1;
		}
	}
	if (*uParam0.f_16)
	{
		if (is_player_switch_in_progress())
		{
			if (!Global_17118.f_111)
			{
			}
			if (func_259(uParam3, 512))
			{
				if (!_0xDFA80CB25D0A19B3())
				{
				}
				else if (Global_91066 == 0)
				{
					_0xAD5FDF34B81BFE79();
				}
			}
			if (get_player_switch_type() == 3)
			{
				if (get_player_short_switch_state() >= 1)
				{
					if (!*uParam0.f_18)
					{
						func_258();
						*uParam0.f_18 = 1;
					}
					if (!*uParam0.f_22)
					{
						func_249(0, 1);
						*uParam0.f_22 = 1;
					}
				}
			}
			else
			{
				if (get_player_switch_state() >= 8)
				{
					if (!*uParam0.f_18)
					{
						func_258();
						*uParam0.f_18 = 1;
					}
				}
				if (!*uParam0.f_18)
				{
					if (destroy_player_in_pause_menu() && get_player_switch_state() == 3)
					{
						vVar2 = {get_entity_coords(player_ped_id(), 1)};
						vVar5 = {_get_gameplay_cam_coords()};
						fVar8 = 20f;
						fVar9 = vdist2(vVar2, vVar5);
						if (fVar9 < fVar8 * fVar8)
						{
							func_258();
							*uParam0.f_18 = 1;
						}
					}
				}
				if (!*uParam0.f_22)
				{
					if (get_player_switch_state() > 2)
					{
						func_249(0, 1);
						*uParam0.f_22 = 1;
					}
				}
				if (!*uParam0.f_23)
				{
					if (get_player_switch_state() >= 3)
					{
						_0xB11D94BC55F41932("CSM_ST_BOX3x3");
						*uParam0.f_23 = 1;
					}
				}
			}
		}
		else
		{
			if (!*uParam0.f_18)
			{
				*uParam0.f_18 = 1;
				func_258();
			}
			if (!*uParam0.f_22)
			{
				func_249(0, 1);
				*uParam0.f_22 = 1;
			}
			*uParam0.f_17 = 1;
		}
	}
	if (*uParam0.f_17)
	{
		iVar10 = func_247();
		if (((iVar10 != 8 && iVar10 != 9) && iVar10 != 10) && iVar10 != 55)
		{
			func_263(*uParam0.f_21);
		}
		if (*uParam0.f_23)
		{
			_0x27CB772218215325();
			*uParam0.f_23 = 0;
		}
		*uParam0.f_16 = 0;
		*uParam0.f_17 = 0;
		*uParam0.f_18 = 0;
		*uParam0.f_19 = 0;
		*uParam0.f_20 = 0;
		*uParam0.f_24 = 0;
		*uParam0.f_27 = 0;
		if (Global_17118.f_109 != -1 && Global_17118.f_110 == get_hash_key(get_this_script_name()))
		{
			stop_sound(Global_17118.f_109);
			release_sound_id(Global_17118.f_109);
			Global_17118.f_109 = -1;
			Global_17118.f_110 = 0;
		}
		if (is_audio_scene_active("CHARACTER_CHANGE_IN_SKY_SCENE"))
		{
			stop_audio_scene("CHARACTER_CHANGE_IN_SKY_SCENE");
		}
		if (Global_17118.f_107 != -1 && Global_17118.f_108 == get_hash_key(get_this_script_name()))
		{
			stop_sound(Global_17118.f_107);
			release_sound_id(Global_17118.f_107);
			Global_17118.f_107 = -1;
			Global_17118.f_108 = 0;
		}
		if (fParam5 <= 360f && fParam5 >= -360f)
		{
			set_gameplay_cam_relative_heading(fParam5);
		}
		if (fParam4 <= 360f && fParam4 >= -360f)
		{
			set_gameplay_cam_relative_pitch(fParam4, 1f);
		}
		if (!Global_36805)
		{
			stop_gameplay_cam_shaking(true);
			_0x487A82C650EB7799(0f);
			_0x0225778816FDC28C(0f);
		}
		if (!iParam10)
		{
			if (!is_ped_injured(*uParam0.f_13))
			{
				set_entity_visible(*uParam0.f_13, true, 0);
				set_ped_can_be_targetted(*uParam0.f_13, true);
				if (!is_ped_in_any_vehicle(*uParam0.f_13, 0))
				{
					set_entity_collision(*uParam0.f_13, true, 0);
				}
				if (is_ped_sitting_in_any_vehicle(*uParam0.f_13))
				{
					iVar11 = get_vehicle_ped_is_in(*uParam0.f_13, 0);
					func_269(iVar11, 1);
				}
			}
		}
		func_261(0);
		if (!iParam10)
		{
			if (!is_ped_injured(*uParam0.f_13) || iParam10)
			{
				set_entity_invincible(*uParam0.f_13, false);
			}
			if (!is_ped_injured(*uParam0.f_12))
			{
				set_entity_invincible(*uParam0.f_12, false);
			}
			set_player_control(player_id(), true, 0);
			_0xBBF327DED94E4DEB(func_91(func_177()));
		}
		func_260(0);
		key_hud_colour(false, false);
		return false;
	}
	hide_hud_and_radar_this_frame();
	return true;
}

int func_247()
{
	if (is_player_switch_in_progress())
	{
		return Global_89453;
	}
	if (func_248())
	{
		return Global_89453;
	}
	return 318;
}

bool func_248()
{
	if (_get_number_of_instances_of_streamed_script(joaat("player_timetable_scene")) > 0)
	{
		return true;
	}
	return false;
}

void func_249(int iParam0, int iParam1)
{
	if (iParam1)
	{
		func_256(iParam0);
	}
	func_254(0);
	func_250(65);
}

void func_250(int iParam0)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	iVar0 = func_253();
	if (Global_1315913)
	{
		sVar1 = func_252(iParam0);
		iVar2 = get_hash_key(sVar1);
		func_251(&Global_2445458, 1, 0);
		unk_0xC3BFED92026A2AAD(iVar2, 1, iVar0, iParam0, 0);
	}
	Global_1315846 = iParam0;
}

void func_251(var uParam0, int iParam1, int iParam2)
{
	if (network_is_game_in_progress() && !iParam1)
	{
		if (!iParam2)
		{
			*uParam0 = get_network_time();
		}
		else
		{
			*uParam0 = _0x89023FBBF9200E9F();
		}
	}
	else
	{
		*uParam0 = get_game_timer();
	}
	*uParam0.f_1 = 1;
}

char* func_252(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "TRANSITION_STATE_EMPTY";
		
		case 1:
			return "TRANSITION_STATE_SP_SWOOP_UP";
		
		case 2:
			return "TRANSITION_STATE_MP_SWOOP_UP";
		
		case 3:
			return "TRANSITION_STATE_CREATOR_SWOOP_UP";
		
		case 4:
			return "TRANSITION_STATE_PRE_HUD_CHECKS";
		
		case 5:
			return "TRANSITION_STATE_WAIT_HUD_EXIT";
		
		case 7:
			return "TRANSITION_STATE_SP_SWOOP_DOWN";
		
		case 8:
			return "TRANSITION_STATE_MP_SWOOP_DOWN";
		
		case 6:
			return "TRANSITION_STATE_WAIT_FOR_SUMMON";
		
		case 9:
			return "TRANSITION_STATE_CANCEL_JOINING";
		
		case 15:
			return "TRANSITION_STATE_WAIT_ON_INVITE";
		
		case 10:
			return "TRANSITION_STATE_RETRY_LOADING";
		
		case 11:
			return "TRANSITION_STATE_RETRY_LOADING_SLOT_1";
		
		case 12:
			return "TRANSITION_STATE_RETRY_LOADING_SLOT_2";
		
		case 13:
			return "TRANSITION_STATE_RETRY_LOADING_SLOT_3";
		
		case 14:
			return "TRANSITION_STATE_RETRY_LOADING_SLOT_4";
		
		case 16:
			return "TRANSITION_STATE_PREJOINING_FM_SESSION_CHECKS";
		
		case 17:
			return "TRANSITION_STATE_LOOK_FOR_FRESH_JOIN_FM";
		
		case 18:
			return "TRANSITION_STATE_LOOK_TO_JOIN_ANOTHER_SESSION_FM";
		
		case 19:
			return "TRANSITION_STATE_CONFIRM_FM_SESSION_JOINING";
		
		case 21:
			return "TRANSITION_STATE_CREATION_ENTER_SESSION";
		
		case 22:
			return "TRANSITION_STATE_PRE_FM_LAUNCH_SCRIPT";
		
		case 23:
			return "TRANSITION_STATE_FM_TEAMFULL_CHECK";
		
		case 24:
			return "TRANSITION_STATE_START_FM_LAUNCH_SCRIPT";
		
		case 25:
			return "TRANSITION_STATE_FM_TRANSITION_CREATE_PLAYER";
		
		case 26:
			return "TRANSITION_STATE_IS_FM_AND_TRANSITION_READY";
		
		case 27:
			return "TRANSITION_STATE_FM_SWOOP_DOWN";
		
		case 28:
			return "TRANSITION_STATE_FM_FINAL_SETUP_PLAYER";
		
		case 29:
			return "TRANSITION_STATE_MOVE_FM_TO_RUNNING_STATE";
		
		case 30:
			return "TRANSITION_STATE_FM_HOW_TO_TERMINATE";
		
		case 20:
			return "TRANSITION_STATE_WAIT_JOIN_FM_SESSION";
		
		case 31:
			return "TRANSITION_STATE_START_CREATOR_PRE_LAUNCH_SCRIPT_CHECK";
		
		case 32:
			return "TRANSITION_STATE_START_CREATOR_LAUNCH_SCRIPT";
		
		case 33:
			return "TRANSITION_STATE_CREATOR_TRANSITION_CREATE_PLAYER";
		
		case 34:
			return "TRANSITION_STATE_IS_CREATOR_AND_TRANSITION_READY";
		
		case 35:
			return "TRANSITION_STATE_CREATOR_SWOOP_DOWN";
		
		case 36:
			return "TRANSITION_STATE_CREATOR_FINAL_SETUP_PLAYER";
		
		case 37:
			return "TRANSITION_STATE_MOVE_CREATOR_TO_RUNNING_STATE";
		
		case 38:
			return "TRANSITION_STATE_PREJOINING_TESTBED_SESSION_CHECKS";
		
		case 39:
			return "TRANSITION_STATE_LOOK_FOR_FRESH_JOIN_TESTBED";
		
		case 40:
			return "TRANSITION_STATE_LOOK_FOR_FRESH_HOST_TESTBED";
		
		case 41:
			return "TRANSITION_STATE_LOOK_TO_JOIN_ANOTHER_SESSION_TESTBED";
		
		case 42:
			return "TRANSITION_STATE_LOOK_TO_HOST_SESSION_TESTBED";
		
		case 43:
			return "TRANSITION_STATE_CONFIRM_TESTBED_SESSION_JOINING";
		
		case 45:
			return "TRANSITION_STATE_START_TESTBED_LAUNCH_SCRIPT";
		
		case 46:
			return "TRANSITION_STATE_TESTBED_TRANSITION_CREATE_PLAYER";
		
		case 47:
			return "TRANSITION_STATE_IS_TESTBED_AND_TRANSITION_READY";
		
		case 48:
			return "TRANSITION_STATE_TESTBED_SWOOP_DOWN";
		
		case 49:
			return "TRANSITION_STATE_TESTBED_FINAL_SETUP_PLAYER";
		
		case 50:
			return "TRANSITION_STATE_MOVE_TESTBED_TO_RUNNING_STATE";
		
		case 51:
			return "TRANSITION_STATE_TESTBED_HOW_TO_TERMINATE";
		
		case 44:
			return "TRANSITION_STATE_WAIT_JOIN_TESTBED_SESSION";
		
		case 53:
			return "TRANSITION_STATE_WAIT_FOR_TRANSITION_SESSION_TO_SETUP";
		
		case 52:
			return "TRANSITION_STATE_QUIT_CURRENT_SESSION_PROMPT";
		
		case 54:
			return "TRANSITION_STATE_TERMINATE_SP";
		
		case 55:
			return "TRANSITION_STATE_WAIT_TERMINATE_SP";
		
		case 56:
			return "TRANSITION_STATE_KICK_TERMINATE_SESSION";
		
		case 57:
			return "TRANSITION_STATE_TERMINATE_SESSION";
		
		case 58:
			return "TRANSITION_STATE_WAIT_TERMINATE_SESSION";
		
		case 59:
			return "TRANSITION_STATE_TERMINATE_SESSION_AND_HOLD";
		
		case 60:
			return "TRANSITION_STATE_TERMINATE_SESSION_AND_MOVE_INTO_HOLDING_STATE";
		
		case 61:
			return "TRANSITION_STATE_TEAM_SWAPPING_CHECKS";
		
		case 62:
			return "TRANSITION_STATE_RETURN_TO_SINGLEPLAYER";
		
		case 63:
			return "TRANSITION_STATE_WAIT_FOR_SINGLEPLAYER_TO_START";
		
		case 64:
			return "TRANSITION_STATE_WAITING_FOR_EXTERNAL_TERMINATION_CALL";
		
		case 65:
			return "TRANSITION_STATE_TERMINATE_MAINTRANSITION";
		
		case 66:
			return "TRANSITION_STATE_WAIT_FOR_DIRTY_LOAD_CONFIRM";
		
		default:
	}
	return "";
}

var func_253()
{
	return Global_1315846;
}

void func_254(int iParam0)
{
	var uVar0;
	
	uVar0 = func_255();
	Global_1315845 = iParam0;
}

var func_255()
{
	return Global_1315845;
}

void func_256(int iParam0)
{
	int iVar0;
	
	func_257(&Global_17038);
	_0x22A249A53034450A(0);
	iVar0 = 1;
	if (iParam0)
	{
		if (iVar0 == 1)
		{
			stop_player_switch();
			func_261(0);
			if (does_entity_exist(Global_1318697))
			{
				if (does_entity_belong_to_this_script(Global_1318697, 0))
				{
					if (!is_entity_a_mission_entity(Global_1318697))
					{
						set_entity_as_mission_entity(Global_1318697, false, 0);
					}
					delete_ped(&Global_1318697);
				}
			}
		}
	}
}

void func_257(var uParam0)
{
	*uParam0.f_15 = 0;
	*uParam0.f_16 = 0;
	*uParam0.f_17 = 0;
	*uParam0.f_18 = 0;
	*uParam0.f_19 = 0;
	*uParam0.f_20 = 0;
	if (does_cam_exist(*uParam0.f_9))
	{
		if (is_cam_active(*uParam0.f_9))
		{
			func_260(0);
		}
		destroy_cam(*uParam0.f_9, 0);
	}
	if (!Global_36805)
	{
		stop_gameplay_cam_shaking(true);
		_0x487A82C650EB7799(0f);
		_0x0225778816FDC28C(0f);
	}
	Global_2404956.f_556 = 0f;
	render_script_cams(false, false, false, 1, 0, 0);
}

void func_258()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		_remove_notification(Global_101154.f_12831[iVar0 /*104*/].f_16);
		iVar0++;
	}
}

int func_259(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_260(int iParam0)
{
	Global_17116 = iParam0;
}

void func_261(int iParam0)
{
	if (iParam0 == 0)
	{
		Global_2445441 = 0;
	}
	Global_1312466.f_18 = iParam0;
}

var func_262()
{
	return Global_1315913;
}

void func_263(int iParam0)
{
	if (iParam0)
	{
		func_267();
		if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
		{
			set_bit(&Global_2284, 16);
		}
		Global_14413.f_1 = 1;
		if (func_266(0))
		{
			func_264(0);
		}
	}
	else if (Global_14413.f_1 == 1)
	{
		if (!Global_14413.f_1 == 0)
		{
			Global_14413.f_1 = 3;
		}
	}
}

void func_264(int iParam0)
{
	if (Global_14571)
	{
		func_265(0, 0);
	}
	if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
	{
		set_bit(&Global_2284, 16);
	}
	if (is_mobile_phone_call_ongoing())
	{
		stop_scripted_conversation(false);
	}
	Global_15712 = 5;
	if (iParam0 == 1)
	{
		set_bit(&Global_2283, 30);
	}
	else
	{
		clear_bit(&Global_2283, 30);
	}
	if (!func_10())
	{
		Global_14413.f_1 = 3;
	}
}

void func_265(int iParam0, int iParam1)
{
	if (iParam0)
	{
		if (func_266(0))
		{
			Global_14571 = 1;
			if (iParam1)
			{
				get_mobile_phone_position(&Global_14350);
			}
			Global_14341 = {Global_14359[Global_14358 /*3*/]};
			set_mobile_phone_position(Global_14341);
		}
	}
	else if (Global_14571 == 1)
	{
		Global_14571 = 0;
		Global_14341 = {Global_14366[Global_14358 /*3*/]};
		if (iParam1)
		{
			set_mobile_phone_position(Global_14350);
		}
		else
		{
			set_mobile_phone_position(Global_14341);
		}
	}
}

bool func_266(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14413.f_1 > 3)
		{
			if (is_bit_set(Global_2283, 14))
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	if (_get_number_of_instances_of_streamed_script(joaat("cellphone_flashhand")) > 0)
	{
		return true;
	}
	if (Global_14413.f_1 > 3)
	{
		return true;
	}
	return false;
}

void func_267()
{
	if (Global_14413.f_1 == 9 || Global_14413.f_1 == 10)
	{
		Global_15765 = 0;
		Global_15761 = 1;
	}
}

bool func_268()
{
	if (Global_14413.f_1 == 1)
	{
		return true;
	}
	return false;
}

void func_269(int iParam0, int iParam1)
{
	if (is_entity_a_mission_entity(iParam0))
	{
		_0xC50CE861B55EAB8B(iParam0, iParam1);
	}
	else
	{
		set_entity_as_mission_entity(iParam0, true, 0);
		_0xC50CE861B55EAB8B(iParam0, iParam1);
		set_vehicle_as_no_longer_needed(&iParam0);
	}
}

void func_270(int iParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (network_is_game_in_progress())
	{
		if (is_bit_set(Global_2460486.f_4429, 26))
		{
			return;
		}
	}
	if (is_gameplay_hint_active())
	{
		stop_gameplay_hint(iParam2);
		_stop_screen_effect("FocusIn");
		stop_audio_scene("HINT_CAM_SCENE");
		if (*iParam0.f_11)
		{
			_start_screen_effect("FocusOut", false, 0);
			play_sound_frontend(-1, "FocusOut", "HintCamSounds", 1);
			*iParam0.f_11 = 0;
		}
	}
	set_cinematic_button_active(true);
	*iParam0.f_1 = 0;
	*iParam0 = 0;
	*iParam0.f_2 = -1;
	*iParam0.f_8 = 0;
	*iParam0.f_5 = 0;
	*iParam0.f_6 = 0;
	sVar0 = iParam1;
	if (is_string_null(sVar0))
	{
		if (!network_is_game_in_progress())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!is_string_null(*iParam0.f_3))
	{
		if (func_271(*iParam0.f_3))
		{
			clear_help(1);
		}
	}
	if (!is_string_null(sVar0))
	{
		if (func_271(sVar0))
		{
			clear_help(1);
		}
	}
}

int func_271(char* sParam0)
{
	_0x0A24DA3A41B718F5(sParam0);
	return _0x10BDDBFC529428DD(0);
}

var func_272(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	
	iVar5 = false;
	iVar6 = is_ped_injured(player_ped_id());
	iVar7 = ((iVar6 && Global_69489) && func_291());
	iVar8 = func_290(iParam1);
	*uParam0.f_6 = func_143(func_177());
	Global_17118.f_12 = !*uParam0.f_23;
	Global_17118.f_121 = iParam1;
	Global_17118.f_122 = iParam2;
	Global_17118.f_123 = iVar7;
	Global_17118.f_3 = Global_17118.f_2;
	Global_17118.f_70 = 0;
	iVar9 = ((Global_17118.f_104 == 4 || Global_17118.f_104 == 1) || Global_17118.f_104 == 3);
	iVar0 = false;
	while (iVar0 <= 4 - 1)
	{
		func_287(uParam0, iVar0, 1, &iVar1, &iVar2, &uVar3, &uVar4);
		Global_17118.f_71[iVar0] = -1;
		Global_17118.f_76[iVar0] = -1;
		Global_17118.f_94[iVar0] = -1;
		Global_17118.f_99[iVar0] = -1;
		Global_17118.f_54[iVar0] = 0;
		Global_17118.f_59[iVar0] = 0;
		Global_17118.f_81[iVar0 /*3*/] = {0f, 0f, 0f};
		if (func_13(14))
		{
			iVar10 = iVar0;
			if (iVar10 == 3)
			{
				Global_17118.f_70 = 1;
			}
			else if ((func_286(iVar10) && func_283(iVar10)) && iVar10 == func_143(Global_101154.f_1826.f_539.f_3551))
			{
				Global_17118.f_70 = 1;
			}
			else
			{
				Global_17118.f_70 = 0;
			}
		}
		else if (Global_17118.f_12)
		{
			if (!Global_17118.f_70)
			{
				if ((((!is_ped_injured(*uParam0[iVar0]) && !*uParam0.f_18[iVar0]) && *uParam0[iVar0] != player_ped_id()) || *uParam0.f_34[iVar0] == 2) || *uParam0.f_24[iVar0] != 0)
				{
					Global_17118.f_70 = 1;
				}
			}
			if (*uParam0.f_34[iVar0] == 3)
			{
				iVar5 = true;
			}
			else if (*uParam0.f_6 == iVar0)
			{
				if (*uParam0.f_34[iVar0] == 1 || *uParam0.f_34[iVar0] == 2)
				{
					iVar5 = true;
				}
			}
			if (*uParam0.f_8[iVar0])
			{
				if (*uParam0.f_39 && *uParam0.f_7 == iVar0)
				{
					*uParam0.f_8[iVar0] = 0;
				}
				else if ((*uParam0.f_6 == iVar0 && !iVar5) || *uParam0.f_34[iVar0] == 3)
				{
					*uParam0.f_8[iVar0] = 0;
				}
				else if ((is_ped_injured(*uParam0[iVar0]) && !*uParam0.f_23) && !*uParam0.f_34[iVar0] == 2)
				{
					*uParam0.f_8[iVar0] = 0;
				}
			}
			Global_17118.f_49[iVar0] = *uParam0.f_8[iVar0];
			Global_17118.f_64[iVar0] = uVar3;
			if ((does_entity_exist(*uParam0[iVar0]) && !is_ped_injured(*uParam0[iVar0])) && *uParam0[iVar0] != player_ped_id())
			{
				Global_17118.f_71[iVar0] = floor(to_float(get_entity_health(*uParam0[iVar0])) - 100f / to_float(get_ped_max_health(*uParam0[iVar0])) - 100f * 100f);
			}
			if ((Global_17118.f_71[iVar0] != -1 && IntToFloat(Global_17118.f_71[iVar0]) < 25f) || *uParam0.f_13[iVar0])
			{
				if (*uParam0.f_6 != iVar0)
				{
					Global_17118.f_54[iVar0] = 1;
					Global_17118.f_59[iVar0] = *uParam0.f_13[iVar0];
				}
			}
		}
		else
		{
			Global_17118.f_49[iVar0] = *uParam0.f_8[iVar0];
			Global_17118.f_64[iVar0] = uVar3;
		}
		if (Global_17118.f_124)
		{
			Global_17118.f_19[iVar2] = iVar1;
			Global_17118.f_24[iVar2] = uVar3;
			Global_17118.f_29[iVar2] = uVar4;
			Global_17118.f_34[iVar0] = 0;
			Global_17118.f_44[iVar0] = 0;
			Global_17118.f_39[iVar0] = 0;
			if (iVar9)
			{
				if (Global_17118.f_12)
				{
					if (does_entity_exist(*uParam0[iVar0]) && !is_ped_injured(*uParam0[iVar0]))
					{
						Global_17118.f_76[iVar0] = get_ped_armour(*uParam0[iVar0]);
						if (iVar0 == 0)
						{
							stat_get_int(joaat("sp0_special_ability"), &(Global_17118.f_94[iVar0]), -1);
							stat_get_int(joaat("sp0_special_ability_unlocked"), &(Global_17118.f_99[iVar0]), -1);
						}
						else if (iVar0 == 1)
						{
							stat_get_int(joaat("sp1_special_ability"), &(Global_17118.f_94[iVar0]), -1);
							stat_get_int(joaat("sp1_special_ability_unlocked"), &(Global_17118.f_99[iVar0]), -1);
						}
						else if (iVar0 == 2)
						{
							stat_get_int(joaat("sp2_special_ability"), &(Global_17118.f_94[iVar0]), -1);
							stat_get_int(joaat("sp2_special_ability_unlocked"), &(Global_17118.f_99[iVar0]), -1);
						}
						Global_17118.f_81[iVar0 /*3*/] = {get_entity_coords(*uParam0[iVar0], 1)};
					}
				}
				else if ((iVar0 < 3 && iVar1 != 3) && (!func_282() || func_13(14)))
				{
					Global_17118.f_34[iVar0] = Global_88924[iVar0];
					Global_17118.f_44[iVar0] = 0;
					Global_17118.f_34[iVar0] += Global_88936[iVar0];
					Global_17118.f_39[iVar0] = 0;
					Global_17118.f_34[iVar0] += Global_88932[iVar0];
				}
			}
		}
		if (((Global_17118.f_69 == -1 || !Global_17118.f_14) && Global_17118.f_69 != iVar2) && !func_13(14))
		{
			if ((*uParam0.f_6 == iVar0 && !iVar5) || *uParam0.f_34[iVar0] == 3)
			{
				Global_17118.f_69 = iVar2;
				Global_17118.f_14 = 1;
			}
		}
		iVar0++;
	}
	if (iVar8)
	{
		if ((((((Global_17118.f_124 && (!Global_17118.f_9 || Global_17118.f_10)) && ((!func_144(0) || Global_17118.f_12) || func_13(14))) && ((!func_144(3) || Global_17118.f_12) || func_13(14))) && ((!func_144(2) || Global_17118.f_12) || func_13(14))) && ((!func_144(9) || Global_17118.f_12) || func_13(14))) && ((!func_144(10) || Global_17118.f_12) || func_13(14)))
		{
			if (Global_17118.f_104 == 4)
			{
				if (func_13(14))
				{
					if (Global_17118.f_69 == 0)
					{
						Global_17118.f_11 = func_281(uParam0, 1);
					}
					else if (Global_17118.f_69 == 1)
					{
						Global_17118.f_11 = func_281(uParam0, 2);
					}
					else if (Global_17118.f_69 == 2)
					{
						Global_17118.f_11 = func_281(uParam0, 3);
					}
					else if (Global_17118.f_69 == 3)
					{
						Global_17118.f_11 = func_281(uParam0, 0);
					}
				}
				else if (Global_17118.f_69 == 0)
				{
					Global_17118.f_11 = func_280(uParam0, 1);
				}
				else if (Global_17118.f_69 == 1)
				{
					Global_17118.f_11 = func_280(uParam0, 2);
				}
				else if (Global_17118.f_69 == 2)
				{
					Global_17118.f_11 = func_274(uParam0);
				}
				else if (Global_17118.f_69 == 3)
				{
					Global_17118.f_11 = func_280(uParam0, 0);
				}
			}
			else if (Global_17118.f_104 == 3 || (Global_17118.f_9 && Global_17118.f_10))
			{
				if ((((!Global_17118.f_11 && Global_17118.f_12) && Global_17118.f_70) && !network_is_game_in_progress()) && !(func_273(player_ped_id()) && (is_control_pressed(0, 25) || is_control_pressed(0, 68))))
				{
					if (*uParam0.f_34[0] == 3)
					{
						iVar11 = 0;
					}
					else if (*uParam0.f_34[1] == 3)
					{
						iVar11 = 1;
					}
					else if (*uParam0.f_34[2] == 3)
					{
						iVar11 = 2;
					}
					else
					{
						iVar11 = func_177();
					}
					switch (iVar11)
					{
						case 0:
							if (*uParam0.f_13[1] && !Global_17118.f_16)
							{
								iVar12 = true;
							}
							else if (*uParam0.f_13[2] && !Global_17118.f_16)
							{
								iVar12 = 2;
							}
							else if (*uParam0.f_43)
							{
								iVar12 = *uParam0.f_40;
								iVar13 = *uParam0.f_41;
								iVar14 = *uParam0.f_42;
							}
							else
							{
								iVar12 = true;
								iVar13 = 2;
							}
							break;
						
						case 1:
							if (*uParam0.f_13[2] && !Global_17118.f_16)
							{
								iVar12 = 2;
							}
							else if (*uParam0.f_13[0] && !Global_17118.f_16)
							{
								iVar12 = false;
							}
							else if (*uParam0.f_43)
							{
								iVar12 = *uParam0.f_40;
								iVar13 = *uParam0.f_41;
								iVar14 = *uParam0.f_42;
							}
							else
							{
								iVar12 = 2;
								iVar13 = false;
							}
							break;
						
						case 2:
							if (*uParam0.f_13[0] && !Global_17118.f_16)
							{
								iVar12 = false;
							}
							else if (*uParam0.f_13[1] && !Global_17118.f_16)
							{
								iVar12 = true;
							}
							else if (*uParam0.f_43)
							{
								iVar12 = *uParam0.f_40;
								iVar13 = *uParam0.f_41;
								iVar14 = *uParam0.f_42;
							}
							else
							{
								iVar12 = false;
								iVar13 = true;
							}
							break;
					}
					iVar15 = true;
					if (_is_input_disabled(2))
					{
						if (!is_control_just_released(0, 19))
						{
							if (is_control_just_released(0, 166))
							{
								iVar15 = false;
								if (iVar11 != 0)
								{
									if (func_280(uParam0, 0))
									{
										Global_17118.f_11 = 1;
									}
								}
							}
							else if (is_control_just_released(0, 167))
							{
								iVar15 = false;
								if (iVar11 != 1)
								{
									if (func_280(uParam0, 1))
									{
										Global_17118.f_11 = 1;
									}
								}
							}
							else if (is_control_just_released(0, 168))
							{
								iVar15 = false;
								if (iVar11 != 2)
								{
									if (func_280(uParam0, 2))
									{
										Global_17118.f_11 = 1;
									}
								}
							}
						}
					}
					if (iVar15)
					{
						if (func_280(uParam0, iVar12))
						{
							Global_17118.f_11 = 1;
						}
						else if (func_280(uParam0, iVar13))
						{
							Global_17118.f_11 = 1;
						}
						else if (func_280(uParam0, iVar14))
						{
							Global_17118.f_11 = 1;
						}
					}
				}
			}
		}
	}
	if (Global_17118.f_11)
	{
		Global_17118.f_125 = 1;
		hide_hud_component_this_frame(6);
		hide_hud_component_this_frame(7);
		hide_hud_component_this_frame(8);
		hide_hud_component_this_frame(9);
	}
	return Global_17118.f_11;
}

bool func_273(int iParam0)
{
	int iVar0;
	
	if (is_first_person_aim_cam_active())
	{
		if (!is_ped_injured(iParam0))
		{
			get_current_ped_weapon(iParam0, &iVar0, 1);
			if ((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle"))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_274(var uParam0)
{
	int iVar0;
	
	if (!func_278(1))
	{
		return false;
	}
	if (!*uParam0.f_39)
	{
		*uParam0.f_7 = 4;
		*uParam0.f_39 = 1;
	}
	if (!network_is_game_in_progress() && !func_282())
	{
		if (((!*uParam0.f_18[3] && *uParam0.f_23) && !Global_3) && func_278(0))
		{
			*uParam0.f_7 = 3;
			return true;
		}
		else if (func_278(0) == 0 && func_276() == 0)
		{
			_get_mp_loading_state(&iVar0);
			if (iVar0 == 1)
			{
				func_275(14, 1, -1);
			}
			else if (is_orbis_version() && _0x74FB3E29E6D10FA9() == 4)
			{
				func_275(25, 1, -1);
			}
			else if (is_orbis_version() && _0x74FB3E29E6D10FA9() == 2)
			{
				func_275(26, 1, -1);
			}
			else if (is_orbis_version() && _0x74FB3E29E6D10FA9() == 1)
			{
				func_275(27, 1, -1);
			}
			else if ((is_player_online() && network_is_signed_online()) == 0)
			{
				func_275(13, 1, -1);
			}
			else if (_network_are_ros_available() == 0)
			{
			}
			else if (network_can_enter_multiplayer() == 0)
			{
			}
			else
			{
				func_275(14, 1, -1);
			}
		}
	}
	return false;
}

void func_275(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0 / 32;
	iVar1 = iParam0 % 32;
	if (iParam2 != -2)
	{
		Global_1312767 = iParam2;
	}
	if (iParam1)
	{
		set_bit(&(Global_1312764[iVar0]), iVar1);
	}
	else
	{
		clear_bit(&(Global_1312764[iVar0]), iVar1);
	}
}

bool func_276()
{
	if ((((((((((func_277(1) || func_277(2)) || func_277(3)) || func_277(4)) || func_277(5)) || func_277(7)) || func_277(8)) || func_277(9)) || func_277(10)) || func_277(11)) || func_277(12))
	{
		return true;
	}
	return false;
}

int func_277(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0 / 32;
	iVar1 = iParam0 % 32;
	return is_bit_set(Global_1312764[iVar0], iVar1);
}

bool func_278(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 1)
	{
	}
	if (iParam0 == 0)
	{
		if (func_279() == 0)
		{
			return false;
		}
	}
	if (_get_mp_loading_state(&iVar0) && get_profile_setting(903) == 1)
	{
		return true;
	}
	if (!_get_mp_loading_state(&iVar0))
	{
		if (iVar0 == 6)
		{
			return true;
		}
		else if (iVar0 == 7)
		{
			return true;
		}
		else if (iVar0 == 8)
		{
			return true;
		}
		else if (iVar0 == 9)
		{
			return true;
		}
		else if (iVar0 == 11)
		{
			return true;
		}
		else if (iVar0 == 12)
		{
			return true;
		}
		else if (iVar0 == 10)
		{
			return true;
		}
	}
	return false;
}

bool func_279()
{
	if (is_orbis_version())
	{
		if (!_0xBD545D44CCE70597())
		{
			if (_0x74FB3E29E6D10FA9() == 4)
			{
				return false;
			}
			if (_0x74FB3E29E6D10FA9() == 2)
			{
				return false;
			}
			if (_0x74FB3E29E6D10FA9() == 1)
			{
				return false;
			}
			if (_0x74FB3E29E6D10FA9() == 5)
			{
				return false;
			}
		}
	}
	return true;
}

bool func_280(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!*uParam0.f_39)
	{
		*uParam0.f_7 = 4;
		*uParam0.f_39 = 1;
	}
	if ((iParam1 != 0 && iParam1 != 2) && iParam1 != 1)
	{
	}
	else
	{
		iVar0 = *uParam0.f_34[iParam1] == 2;
		if (func_143(func_177()) != iParam1 || iVar0)
		{
			iVar1 = false;
			if ((iVar0 || *uParam0.f_24[iParam1] != 0) || ((func_286(iParam1) && func_283(iParam1)) && !*uParam0.f_18[iParam1]))
			{
				if (!*uParam0.f_23)
				{
					if (!is_ped_injured(*uParam0[iParam1]) || iVar0)
					{
						if (*uParam0.f_34[iParam1] != 1 && *uParam0.f_34[iParam1] != 3)
						{
							iVar1 = true;
						}
					}
				}
				else if ((!is_ped_injured(player_ped_id()) && (network_is_game_in_progress() || get_player_wanted_level(player_id()) == 0)) && !is_bit_set(Global_89089.f_47, iParam1))
				{
					iVar1 = true;
				}
			}
			else if (!((is_bit_set(Global_101154.f_7775.f_2[27 /*3*/], true) && !Global_3) && !func_175(0)))
			{
				if (*uParam0.f_23)
				{
					iVar1 = true;
				}
			}
			if (iVar1)
			{
				*uParam0.f_7 = iParam1;
				return true;
			}
		}
	}
	*uParam0.f_39 = 0;
	return false;
}

bool func_281(var uParam0, int iParam1)
{
	int iVar0;
	
	if (!*uParam0.f_39)
	{
		*uParam0.f_7 = 4;
		*uParam0.f_39 = 1;
	}
	iVar0 = false;
	if (iParam1 == 3 || iParam1 == func_143(Global_101154.f_1826.f_539.f_3551))
	{
		if (!is_ped_injured(player_ped_id()))
		{
			iVar0 = true;
		}
	}
	if (iVar0)
	{
		*uParam0.f_7 = iParam1;
		return true;
	}
	*uParam0.f_39 = 0;
	return false;
}

bool func_282()
{
	if (Global_35711 == 15)
	{
		return false;
	}
	return true;
}

bool func_283(int iParam0)
{
	if (Global_101154.f_7775 || Global_3)
	{
		if (!Global_69489 || (Global_69489 && iParam0 != func_143(func_285())))
		{
			if (!func_284(func_149(iParam0)))
			{
				return false;
			}
		}
	}
	return true;
}

int func_284(int iParam0)
{
	if (func_147(iParam0))
	{
		if ((Global_101154.f_7775 || Global_3) || func_175(0))
		{
			return Global_101154.f_1826.f_539.f_1576[iParam0];
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

var func_285()
{
	return Global_101154.f_1826.f_539.f_3551;
}

bool func_286(int iParam0)
{
	if ((Global_101154.f_7775 || Global_3) || func_175(0))
	{
		if (!Global_69489 || (Global_69489 && iParam0 != func_143(func_285())))
		{
			if (((iParam0 == 0 && !func_98(115)) || (iParam0 == 1 && !func_98(116))) || (iParam0 == 2 && !func_98(117)))
			{
				return false;
			}
		}
	}
	return true;
}

void func_287(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	int iVar0;
	
	iVar0 = 0;
	if (network_is_game_in_progress())
	{
		if (iParam1 == 3)
		{
			iVar0 = 1;
		}
	}
	else if (func_285() == func_149(iParam1))
	{
		iVar0 = 1;
	}
	switch (iParam1)
	{
		case 0:
			*uParam4 = 3;
			*uParam6 = 0;
			if (!func_286(iParam1))
			{
				*uParam3 = 3;
			}
			else if (!func_283(iParam1))
			{
				*uParam3 = 2;
			}
			else
			{
				*uParam3 = 1;
			}
			if (*uParam0.f_23 && *uParam3 == 1)
			{
				if ((((!network_is_game_in_progress() && get_player_wanted_level(player_id()) > 0) || ((((func_144(0) || func_144(3)) || func_144(2)) || func_13(9)) || func_13(10))) || func_175(0)) || Global_35677)
				{
					*uParam3 = 2;
				}
			}
			break;
		
		case 1:
			*uParam4 = 0;
			*uParam6 = 0;
			if (!func_286(iParam1))
			{
				*uParam3 = 3;
			}
			else if (!func_283(iParam1))
			{
				*uParam3 = 2;
			}
			else
			{
				*uParam3 = 1;
			}
			if (*uParam0.f_23 && *uParam3 == 1)
			{
				if ((((!network_is_game_in_progress() && get_player_wanted_level(player_id()) > 0) || ((((func_144(0) || func_144(3)) || func_144(2)) || func_13(9)) || func_13(10))) || func_175(0)) || Global_35677)
				{
					*uParam3 = 2;
				}
			}
			break;
		
		case 2:
			*uParam4 = 1;
			*uParam6 = 0;
			if (!func_286(iParam1))
			{
				*uParam3 = 3;
			}
			else if (!func_283(iParam1))
			{
				*uParam3 = 2;
			}
			else
			{
				*uParam3 = 1;
			}
			if (*uParam0.f_23 && *uParam3 == 1)
			{
				if ((((!network_is_game_in_progress() && get_player_wanted_level(player_id()) > 0) || ((((func_144(0) || func_144(3)) || func_144(2)) || func_13(9)) || func_13(10))) || func_175(0)) || Global_35677)
				{
					*uParam3 = 2;
				}
			}
			break;
		
		case 3:
			*uParam4 = 2;
			*uParam6 = 0;
			if ((((((!*uParam0.f_23 || Global_3) || (*uParam0.f_23 && ((((func_144(0) || func_144(3)) || func_144(2)) || func_13(9)) || func_13(10)))) || (*uParam0.f_23 && func_175(0))) || (*uParam0.f_23 && Global_35677)) || !func_289()) || !func_278(0))
			{
				*uParam3 = 2;
			}
			else
			{
				*uParam3 = 1;
			}
			if (*uParam0.f_23 && *uParam3 == 1)
			{
				if (((((func_144(0) || func_144(3)) || func_144(2)) || func_13(9)) || func_13(10)) || Global_35677)
				{
					*uParam3 = 2;
				}
			}
			break;
	}
	if (iParam1 != 3)
	{
		if (iVar0 || *uParam0.f_34[iParam1] == 2)
		{
			*uParam3 = 1;
		}
		else if (((*uParam0.f_34[iParam1] == 1 || *uParam0.f_18[iParam1]) || ((!*uParam0.f_23 && is_ped_injured(*uParam0[iParam1])) && *uParam3 == 1)) || (*uParam0.f_23 && is_bit_set(Global_89089.f_47, iParam1)))
		{
			if (*uParam3 == 1)
			{
				*uParam3 = 2;
			}
		}
		else if (*uParam0.f_24[iParam1] != 0)
		{
			*uParam3 = 1;
		}
		else if (((*uParam0.f_23 && !is_bit_set(Global_101154.f_7775.f_2[27 /*3*/], true)) && !Global_3) && !func_175(0))
		{
			if ((((func_144(0) || func_144(3)) || func_144(2)) || func_13(9)) || func_13(10))
			{
			}
			else
			{
				*uParam3 = 1;
			}
		}
	}
	else
	{
		*uParam3 = 3;
	}
	if ((iVar0 && *uParam0.f_34[iParam1] == 0) || *uParam0.f_34[iParam1] == 3)
	{
		if (!func_13(14))
		{
			*uParam6 = 1;
		}
	}
	if (iParam2)
	{
		func_288(uParam0, iParam1, uParam5);
	}
}

void func_288(var uParam0, int iParam1, var uParam2)
{
	switch (iParam1)
	{
		case 0:
			*uParam2 = 0;
			break;
		
		case 1:
			*uParam2 = 2;
			break;
		
		case 2:
			*uParam2 = 1;
			break;
		
		case 3:
			*uParam2 = 3;
			break;
	}
	if (iParam1 != 4)
	{
		if (*uParam0.f_24[iParam1] == 0)
		{
			if (_get_number_of_instances_of_streamed_script(joaat("prologue1")) > 0)
			{
				if (iParam1 == 0)
				{
					if (func_98(124))
					{
						*uParam2 = 8;
					}
					else
					{
						*uParam2 = 7;
					}
				}
				else if (iParam1 == 2)
				{
					if (func_98(125))
					{
						*uParam2 = 10;
					}
					else
					{
						*uParam2 = 9;
					}
				}
			}
		}
		else if (*uParam0.f_24[iParam1] == 1)
		{
			if (iParam1 == 0)
			{
				*uParam2 = 6;
			}
			else if (iParam1 == 2)
			{
				*uParam2 = 4;
			}
			else if (iParam1 == 1)
			{
				*uParam2 = 5;
			}
		}
		else if (*uParam0.f_24[iParam1] == 2)
		{
			*uParam2 = 7;
		}
		else if (*uParam0.f_24[iParam1] == 3)
		{
			*uParam2 = 8;
		}
		else if (*uParam0.f_24[iParam1] == 4)
		{
			*uParam2 = 9;
		}
		else if (*uParam0.f_24[iParam1] == 5)
		{
			*uParam2 = 10;
		}
	}
}

var func_289()
{
	return Global_1318727;
}

bool func_290(int iParam0)
{
	if (Global_17118.f_130)
	{
		return false;
	}
	if (is_control_just_released(0, 19) || (!iParam0 && is_disabled_control_just_released(0, 19)))
	{
		return true;
	}
	if (is_pc_version())
	{
		if (is_control_just_released(0, 166))
		{
			if ((!is_control_pressed(0, 167) && !is_control_pressed(0, 168)) && !is_control_pressed(0, 169))
			{
				return true;
			}
		}
		else if (is_control_just_released(0, 167))
		{
			if ((!is_control_pressed(0, 166) && !is_control_pressed(0, 168)) && !is_control_pressed(0, 169))
			{
				return true;
			}
		}
		else if (is_control_just_released(0, 168))
		{
			if ((!is_control_pressed(0, 166) && !is_control_pressed(0, 167)) && !is_control_pressed(0, 169))
			{
				return true;
			}
		}
		else if (is_control_just_released(0, 169))
		{
			if ((!is_control_pressed(0, 166) && !is_control_pressed(0, 167)) && !is_control_pressed(0, 168))
			{
				return true;
			}
		}
		if (!iParam0)
		{
			if (is_disabled_control_just_released(0, 166))
			{
				if ((!is_disabled_control_pressed(0, 167) && !is_disabled_control_pressed(0, 168)) && !is_disabled_control_pressed(0, 169))
				{
					return true;
				}
			}
			else if (is_disabled_control_just_released(0, 167))
			{
				if ((!is_disabled_control_pressed(0, 166) && !is_disabled_control_pressed(0, 168)) && !is_disabled_control_pressed(0, 169))
				{
					return true;
				}
			}
			else if (is_disabled_control_just_released(0, 168))
			{
				if ((!is_disabled_control_pressed(0, 166) && !is_disabled_control_pressed(0, 167)) && !is_disabled_control_pressed(0, 169))
				{
					return true;
				}
			}
			else if (is_disabled_control_just_released(0, 169))
			{
				if ((!is_disabled_control_pressed(0, 166) && !is_disabled_control_pressed(0, 167)) && !is_disabled_control_pressed(0, 168))
				{
					return true;
				}
			}
		}
	}
	return false;
}

int func_291()
{
	return is_bit_set(Global_2359301, 3);
}

void func_292(char* sParam0)
{
	_set_text_component_format(sParam0);
	_display_help_text_from_string_label(0, 1, true, -1);
}

void func_293(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 != 4)
	{
		*uParam0.f_8[iParam1] = iParam2;
	}
}

void func_294(int iParam0)
{
	if (!is_screen_faded_in() && !is_screen_fading_in())
	{
		do_screen_fade_in(iParam0);
	}
}

void func_295(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 != 4)
	{
		*uParam0.f_18[iParam1] = iParam2;
	}
}

void func_296(vector3 vParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *iParam3)
	{
		if (func_31(*(iParam3[iVar0 /*5*/]), 0f, 0f, 0f, 0))
		{
			*(iParam3[iVar0 /*5*/]) = {vParam0};
			return;
		}
		iVar0++;
	}
}

void func_297()
{
	int iVar0;
	int iVar1;
	
	if (is_ped_in_any_vehicle(player_ped_id(), 1))
	{
		iVar0 = set_exclusive_phone_relationships(player_ped_id());
		if (is_vehicle_driveable(iVar0, 0))
		{
			iVar1 = get_ped_in_vehicle_seat(iVar0, false);
			if (!is_ped_injured(iVar1))
			{
				if (iVar1 != player_ped_id())
				{
					if (is_entity_a_mission_entity(iVar1))
					{
						if (!is_ped_headtracking_entity(iVar1, player_ped_id()))
						{
							task_look_at_entity(iVar1, player_ped_id(), 2000, 2048, 2);
						}
					}
				}
			}
		}
	}
}

void func_298()
{
	int iVar0;
	
	switch (iLocal_645)
	{
		case 0:
			if (is_entity_at_coord(player_ped_id(), -1054.748f, 5340.324f, -10f, 750f, 750f, 750f, false, true, 0))
			{
				iLocal_645 = 1;
			}
			if (is_entity_at_coord(player_ped_id(), 1578.014f, 6427.994f, -10f, 750f, 750f, 750f, false, true, 0))
			{
				iLocal_645 = 3;
			}
			break;
		
		case 1:
			request_model(joaat("sheriff"));
			request_model(joaat("s_m_y_cop_01"));
			if (has_model_loaded(joaat("sheriff")) && has_model_loaded(joaat("s_m_y_cop_01")))
			{
				if (!does_entity_exist(iLocal_646[0]))
				{
					iLocal_646[0] = create_vehicle(joaat("sheriff"), -990.6421f, 5391.671f, 40.4409f, 0, 1, true);
					set_entity_quaternion(iLocal_646[0], -0.0138f, 0.0194f, 0.0655f, 0.9976f);
				}
				else if (!does_entity_exist(iLocal_646[1]))
				{
					iLocal_646[1] = create_vehicle(joaat("sheriff"), -994.824f, 5401.228f, 40.3984f, 0, 1, true);
					set_entity_quaternion(iLocal_646[1], 0.0221f, 0.0008f, 0.8693f, -0.4938f);
				}
				else if (!does_entity_exist(iLocal_651[0]))
				{
					iLocal_651[0] = create_ped(6, joaat("s_m_y_cop_01"), -992.679f, 5392.633f, 39.8664f, 324.3472f, 1, true);
				}
				else if (!does_entity_exist(iLocal_651[1]))
				{
					iLocal_651[1] = create_ped(6, joaat("s_m_y_cop_01"), -994.6719f, 5399.035f, 39.8257f, 218.1417f, 1, true);
				}
				else if (!does_entity_exist(iLocal_651[2]))
				{
					iLocal_651[2] = create_ped(6, joaat("s_m_y_cop_01"), -996.4119f, 5398.116f, 39.9129f, 270.4941f, 1, true);
				}
				else if (!does_entity_exist(iLocal_651[3]))
				{
					iLocal_651[3] = create_ped(6, joaat("s_m_y_cop_01"), -995.2369f, 5390.152f, 40.0318f, 346.7168f, 1, true);
					iVar0 = 0;
					while (iVar0 < iLocal_646)
					{
						if (is_vehicle_driveable(iLocal_646[iVar0], 0))
						{
							set_vehicle_siren(iLocal_646[iVar0], true);
						}
						iVar0++;
					}
					iVar0 = 0;
					while (iVar0 < iLocal_651)
					{
						if (!is_ped_injured(iLocal_651[iVar0]))
						{
							set_blocking_of_non_temporary_events(iLocal_651[iVar0], true);
						}
						iVar0++;
					}
					iLocal_658[0] = _0x2CE544C68FB812A0(-987.4105f, 5400.166f, 39.52042f, 15f, 7f, 1);
					iLocal_658[1] = _0x2CE544C68FB812A0(-993.56f, 5395.73f, 39.85f, 3f, 1f, 1);
				}
			}
			if (!is_entity_at_coord(player_ped_id(), -990.6421f, 5391.671f, 40.4409f, 1000f, 1000f, 1000f, false, true, 0))
			{
				iLocal_645 = 4;
			}
			break;
		
		case 3:
			request_model(joaat("sheriff"));
			request_model(joaat("s_m_y_cop_01"));
			if (has_model_loaded(joaat("sheriff")) && has_model_loaded(joaat("s_m_y_cop_01")))
			{
				if (!does_entity_exist(iLocal_646[0]))
				{
					iLocal_646[0] = create_vehicle(joaat("sheriff"), 1578.014f, 6427.994f, 24.4932f, 0, 1, true);
					set_entity_quaternion(iLocal_646[0], -0.0181f, -0.0008f, 0.9997f, -0.0188f);
				}
				else if (!does_entity_exist(iLocal_646[1]))
				{
					iLocal_646[1] = create_vehicle(joaat("sheriff"), 1573.847f, 6423.33f, 24.4071f, 0, 1, true);
					set_entity_quaternion(iLocal_646[1], -0.0012f, -0.0163f, -0.3084f, 0.9511f);
				}
				else if (!does_entity_exist(iLocal_646[2]))
				{
					iLocal_646[2] = create_vehicle(joaat("sheriff"), 1572.323f, 6409.776f, 24.5238f, 0, 1, true);
					set_entity_quaternion(iLocal_646[2], -0.0023f, -0.0158f, -0.2387f, 0.971f);
				}
				else if (!does_entity_exist(iLocal_646[3]))
				{
					iLocal_646[3] = create_vehicle(joaat("sheriff"), 1564.12f, 6406.375f, 24.3283f, 0, 1, true);
					set_entity_quaternion(iLocal_646[3], 0.0037f, -0.0152f, -0.5892f, 0.8078f);
				}
				else if (!does_entity_exist(iLocal_651[0]))
				{
					iLocal_651[0] = create_ped(6, joaat("s_m_y_cop_01"), 1577.882f, 6424.149f, 23.917f, 263.6635f, 1, true);
				}
				else if (!does_entity_exist(iLocal_651[1]))
				{
					iLocal_651[1] = create_ped(6, joaat("s_m_y_cop_01"), 1581.465f, 6429.496f, 23.9937f, 221.5831f, 1, true);
				}
				else if (!does_entity_exist(iLocal_651[2]))
				{
					iLocal_651[2] = create_ped(6, joaat("s_m_y_cop_01"), 1580.061f, 6421.476f, 24.012f, 276.7651f, 1, true);
				}
				else if (!does_entity_exist(iLocal_651[3]))
				{
					iLocal_651[3] = create_ped(6, joaat("s_m_y_cop_01"), 1568.118f, 6409.294f, 23.811f, 73.3582f, 1, true);
				}
				else if (!does_entity_exist(iLocal_651[4]))
				{
					iLocal_651[4] = create_ped(6, joaat("s_m_y_cop_01"), 1567.251f, 6415.109f, 23.7167f, 54.1765f, 1, true);
				}
				else if (!does_entity_exist(iLocal_651[5]))
				{
					iLocal_651[5] = create_ped(6, joaat("s_m_y_cop_01"), 1564.104f, 6407.887f, 23.7113f, 54.9604f, 1, true);
					iVar0 = 0;
					while (iVar0 < iLocal_646)
					{
						if (is_vehicle_driveable(iLocal_646[iVar0], 0))
						{
							set_vehicle_siren(iLocal_646[iVar0], true);
						}
						iVar0++;
					}
				}
			}
			if (!is_entity_at_coord(player_ped_id(), 1578.014f, 6427.994f, -10f, 1000f, 1000f, 1000f, false, true, 0))
			{
				iLocal_645 = 4;
			}
			break;
		
		case 4:
			_0x1033371FC8E842A7(iLocal_658[0]);
			_0x1033371FC8E842A7(iLocal_658[1]);
			iVar0 = 0;
			while (iVar0 < iLocal_651)
			{
				set_ped_as_no_longer_needed(&(iLocal_651[iVar0]));
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < iLocal_646)
			{
				set_vehicle_as_no_longer_needed(&(iLocal_646[iVar0]));
				iVar0++;
			}
			set_model_as_no_longer_needed(joaat("sheriff"));
			set_model_as_no_longer_needed(joaat("s_m_y_cop_01"));
			iLocal_645 = 0;
			break;
	}
}

void func_299()
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	vector3 vVar4;
	vector3 vVar7;
	
	set_vehicle_density_multiplier_this_frame(0f);
	set_parked_vehicle_density_multiplier_this_frame(0f);
	set_scenario_ped_density_multiplier_this_frame(0f, 0f);
	func_343();
	if (is_vehicle_driveable(iLocal_67, 0))
	{
		if (is_ped_in_vehicle(player_ped_id(), iLocal_67, 0))
		{
			if (is_audio_scene_active("PS_1_SHOOT_THE_ALARM"))
			{
				stop_audio_scene("PS_1_SHOOT_THE_ALARM");
			}
			if (!is_audio_scene_active("PS_1_DRIVE_TO_GAS_STATION"))
			{
				start_audio_scene("PS_1_DRIVE_TO_GAS_STATION");
			}
		}
	}
	set_all_random_peds_flee_this_frame(player_id());
	if (iLocal_254 < 5)
	{
		if (iLocal_232)
		{
			func_46();
			iLocal_663 = false;
			iLocal_662 = 0;
			iLocal_709 = 0;
			settimera(false);
			iLocal_241 = 0;
			iLocal_254 = 5;
			if (!is_ped_injured(iLocal_51))
			{
				task_look_at_coord(iLocal_51, vLocal_152, -1, 16, 4);
			}
			if (!is_ped_injured(uLocal_313[2]))
			{
				task_look_at_coord(uLocal_313[2], vLocal_152, -1, 16, 4);
			}
		}
	}
	switch (iLocal_254)
	{
		case 0:
			if (timera() > 1000)
			{
				if (!is_ped_in_vehicle(player_ped_id(), iLocal_67, 0))
				{
					if (func_266(0))
					{
						func_264(0);
					}
					if (!does_blip_exist(iLocal_59))
					{
						if (vdist2(get_entity_coords(player_ped_id(), 1), get_entity_coords(iLocal_67, 1)) > 9f)
						{
							if (func_6(&Local_360, sLocal_276, "RBS1_GETIN", 8, 0, 0, 0))
							{
								iLocal_59 = func_40(iLocal_67, 0, 0);
							}
						}
						else
						{
							iLocal_59 = func_40(iLocal_67, 0, 0);
						}
					}
				}
				if (is_ped_in_vehicle(player_ped_id(), iLocal_67, 0) || does_blip_exist(iLocal_59))
				{
					iLocal_713 = 0;
					func_341(1, 1);
					func_294(500);
					iLocal_710 = 0;
					iLocal_254++;
				}
			}
			break;
		
		case 1:
			if (!is_ped_in_vehicle(player_ped_id(), iLocal_67, 0))
			{
				if (!func_43())
				{
					func_45("CMN_GENGETBCK", 7500, 1);
					iLocal_254++;
				}
			}
			else
			{
				remove_blip(&iLocal_59);
				iLocal_254++;
			}
			break;
		
		case 2:
			if (is_ped_in_vehicle(player_ped_id(), iLocal_67, 1))
			{
				if (does_blip_exist(iLocal_59))
				{
					remove_blip(&iLocal_59);
				}
				if (func_266(0))
				{
					func_264(0);
				}
				if (!is_entity_in_angled_area(iLocal_67, vLocal_269, vLocal_272, fLocal_275, 0, true, 0))
				{
					func_46();
					if (func_6(&Local_360, sLocal_276, "RBS1_HIDE1", 8, 0, 0, 0))
					{
						settimera(false);
						iLocal_254++;
					}
				}
				else
				{
					settimera(false);
					iLocal_254++;
				}
			}
			else
			{
				func_340();
			}
			break;
		
		case 3:
			request_anim_dict("missrbhsig_2");
			if (has_anim_dict_loaded("missrbhsig_2"))
			{
				func_335();
			}
			if (timera() > 3000)
			{
				func_333();
				if (!iLocal_713 && is_ped_sitting_in_vehicle(player_ped_id(), iLocal_67))
				{
					iLocal_713 = 1;
				}
			}
			if (is_ped_sitting_in_vehicle(player_ped_id(), iLocal_67))
			{
				if (!is_entity_in_angled_area(iLocal_67, vLocal_269, vLocal_272, fLocal_275, 0, true, 0))
				{
					if (!func_43())
					{
						func_86("CBH_HIDELOT", 5000, 1);
						settimera(false);
						vLocal_164 = {vLocal_152};
						iLocal_254++;
					}
				}
				else
				{
					iLocal_254++;
				}
			}
			else
			{
				func_340();
			}
			break;
		
		case 4:
			request_anim_dict("missrbhsig_2");
			if (has_anim_dict_loaded("missrbhsig_2"))
			{
				func_335();
			}
			if (iLocal_711 > 0 && !does_blip_exist(iLocal_58))
			{
				func_312();
			}
			break;
		
		case 5:
			func_312();
			request_anim_dict("missrbhsig_2");
			if (has_anim_dict_loaded("missrbhsig_2"))
			{
				func_239("RBS1_COPARR", (is_vehicle_driveable(iLocal_67, 0) && is_ped_in_vehicle(player_ped_id(), iLocal_67, 0)));
				if (!iLocal_709 && iLocal_662)
				{
					if (!is_ped_injured(uLocal_313[2]))
					{
						if (!is_entity_playing_anim(uLocal_313[2], "missrbhsig_2", "this_is_them_trevor", 3))
						{
							task_play_anim(uLocal_313[2], "missrbhsig_2", "this_is_them_trevor", 2f, -2f, -1, 0, 0, 0, 0, 0);
						}
					}
					if (!is_ped_injured(iLocal_51))
					{
						if (!is_entity_playing_anim(iLocal_51, "missrbhsig_2", "this_is_them_lester", 3))
						{
							task_play_anim(iLocal_51, "missrbhsig_2", "this_is_them_lester", 2f, -2f, -1, 0, 0, 0, 0, 0);
						}
					}
					if (!is_ped_injured(uLocal_313[2]) && !is_ped_injured(iLocal_51))
					{
						if (is_entity_playing_anim(uLocal_313[2], "missrbhsig_2", "this_is_them_trevor", 3) && is_entity_playing_anim(iLocal_51, "missrbhsig_2", "this_is_them_Lester", 3))
						{
							_0x293220DA1B46CEBC(5f, 6f, 4);
							iLocal_709 = 1;
						}
					}
				}
				if ((!func_43() && !iLocal_663) || (!is_ped_in_vehicle(player_ped_id(), iLocal_67, 0) && timera() > 15000))
				{
					task_look_at_entity(uLocal_313[2], iLocal_358, 15000, 16, 4);
					if (!is_ped_injured(Local_547[iLocal_258 /*9*/][0]))
					{
						func_227(&Local_360, 5);
						func_226(&Local_360, 5, Local_547[iLocal_258 /*9*/][0], "PALETOCOP1", 0, 1);
					}
					_0x293220DA1B46CEBC(5f, 6f, 4);
					iLocal_254++;
					iLocal_663 = false;
					iLocal_662 = 0;
					StringCopy(&cLocal_664, "", 24);
					settimera(false);
				}
			}
			break;
		
		case 6:
			func_312();
			func_239("RBS1_WAIT", (is_vehicle_driveable(iLocal_67, 0) && is_ped_in_vehicle(player_ped_id(), iLocal_67, 0)));
			if ((!func_43() && !iLocal_663) || (!is_ped_in_vehicle(player_ped_id(), iLocal_67, 0) && timera() > 15000))
			{
				task_look_at_entity(uLocal_313[2], iLocal_358, 15000, 16, 4);
				iLocal_254++;
				iLocal_663 = false;
				iLocal_662 = 0;
				StringCopy(&cLocal_664, "", 24);
				settimera(false);
			}
			break;
		
		case 7:
			iLocal_254++;
			break;
		
		case 8:
			func_312();
			if (timera() > 4000)
			{
				func_239("RBS1_COPREP", (is_vehicle_driveable(iLocal_67, 0) && is_ped_in_vehicle(player_ped_id(), iLocal_67, 0)));
				if ((!iLocal_663 && !func_43()) || (timera() > 17000 && !is_ped_in_vehicle(player_ped_id(), iLocal_67, 0)))
				{
					if (!is_ped_injured(iLocal_51))
					{
						task_look_at_coord(iLocal_51, vLocal_152, 10000, 16, 4);
					}
					iLocal_663 = false;
					iLocal_662 = 0;
					StringCopy(&cLocal_664, "", 24);
					remove_shocking_event(iLocal_714);
					iLocal_714 = 0;
					func_28(7);
				}
			}
			break;
	}
	if (!is_ped_injured(Local_547[iLocal_258 /*9*/][0]) && iLocal_232)
	{
		if (vdist2(get_entity_coords(Local_547[iLocal_258 /*9*/][0], 1), get_entity_coords(player_ped_id(), 1)) < pow(65f, 2f))
		{
			vLocal_164 = {get_entity_coords(Local_547[iLocal_258 /*9*/][0], 1)};
			fLocal_250 = 0.025f;
		}
	}
	if (get_game_timer() - iLocal_259 < 7000)
	{
		set_ped_reset_flag(player_ped_id(), 200, true);
	}
	if (!iLocal_232)
	{
		if (func_310(&(Local_547[func_311() /*9*/].f_3)))
		{
			iLocal_232 = true;
		}
	}
	if (iLocal_232)
	{
		if (!iLocal_243)
		{
			if (func_271("CBH_FCUSHLP"))
			{
				clear_help(0);
				iLocal_243 = 1;
			}
		}
	}
	if (iLocal_254 > 3)
	{
		func_333();
	}
	switch (iLocal_257)
	{
		case 0:
			if (get_game_timer() - iLocal_259 > 55000)
			{
				if (func_308(0))
				{
					iLocal_257++;
				}
			}
			break;
		
		case 1:
			request_anim_dict("missheistpaletoscoresetup_setup3");
			if ((((!is_ped_injured(Local_547[iLocal_258 /*9*/][0]) && !is_ped_injured(Local_547[iLocal_258 /*9*/][1])) && is_vehicle_driveable(Local_547[iLocal_258 /*9*/].f_3, 0)) && !is_playback_going_on_for_vehicle(Local_547[iLocal_258 /*9*/].f_3)) && has_anim_dict_loaded("missheistpaletoscoresetup_setup3"))
			{
				freeze_entity_position(Local_547[iLocal_258 /*9*/].f_3, true);
				vLocal_705 = {get_entity_coords(Local_547[iLocal_258 /*9*/].f_3, 1)};
				get_entity_quaternion(Local_547[iLocal_258 /*9*/].f_3, &(uLocal_695[0]), &(uLocal_695[1]), &(uLocal_695[2]), &(uLocal_695[3]));
				fLocal_700[0] = 0.0041f;
				fLocal_700[1] = 0.003f;
				fLocal_700[2] = 0.0955f;
				fLocal_700[3] = 0.9954f;
				fLocal_708 = 0f;
				iLocal_257++;
			}
			break;
		
		case 2:
			if (is_vehicle_driveable(Local_547[iLocal_258 /*9*/].f_3, 0))
			{
				if (fLocal_708 <= 1f)
				{
					func_306(Local_547[iLocal_258 /*9*/].f_3, vLocal_705, -126.1263f, 6444.122f, 31.1441f, &uLocal_695, &fLocal_700, &fLocal_708);
					fLocal_708 += 0.1f;
				}
			}
			if (fLocal_708 >= 1f)
			{
				if (is_vehicle_driveable(Local_547[iLocal_258 /*9*/].f_3, 0))
				{
					func_306(Local_547[iLocal_258 /*9*/].f_3, vLocal_705, -126.1263f, 6444.122f, 31.1441f, &uLocal_695, &fLocal_700, &fLocal_708);
					if (func_305())
					{
						remove_anim_dict("missheistpaletoscoresetup_setup2");
						set_vehicle_siren(Local_547[iLocal_258 /*9*/].f_3, false);
						iLocal_257 = 5;
					}
				}
			}
			break;
		
		case 5:
			if (is_synchronized_scene_running(iLocal_253))
			{
				if (get_synchronized_scene_phase(iLocal_253) > 0.3f)
				{
					if (!Local_547[2 /*9*/].f_6)
					{
						iVar0 = 0;
						while (iVar0 < Local_547)
						{
							if (is_vehicle_driveable(Local_547[iVar0 /*9*/].f_3, 0))
							{
								if (!is_playback_going_on_for_vehicle(Local_547[iVar0 /*9*/].f_3))
								{
									remove_vehicle_recording(Local_547[iVar0 /*9*/].f_4, sLocal_277);
								}
							}
							iVar0++;
						}
						func_182(2);
					}
				}
				if (get_synchronized_scene_phase(iLocal_253) > 0.37f)
				{
					if (Local_584.f_9)
					{
						_0x293220DA1B46CEBC(5f, 6f, 4);
						Local_584.f_9 = 0;
						Local_584.f_13 = 0;
						stop_alarm("PALETO_BAY_SCORE_ALARM", true);
					}
				}
				if (get_synchronized_scene_phase(iLocal_253) > 0.45f)
				{
					if (!Local_547[3 /*9*/].f_6)
					{
						func_182(3);
					}
				}
			}
			break;
	}
	if (iLocal_232 && iLocal_48 == 6)
	{
		iVar1 = 0;
		while (iVar1 < Local_547)
		{
			if (iVar1 != iLocal_258)
			{
				if (is_vehicle_driveable(Local_547[iVar1 /*9*/].f_3, 0))
				{
					if (!is_playback_going_on_for_vehicle(Local_547[iVar1 /*9*/].f_3))
					{
						if (is_vehicle_siren_on(Local_547[iVar1 /*9*/].f_3))
						{
							set_vehicle_siren(Local_547[iVar1 /*9*/].f_3, false);
						}
					}
				}
			}
			iVar1++;
		}
	}
	switch (iLocal_255)
	{
		case 0:
			if (func_304())
			{
				iLocal_255++;
			}
			break;
		
		case 1:
			request_anim_dict("missheistpaletoscoresetup_setup1");
			if (has_anim_dict_loaded("missheistpaletoscoresetup_setup1"))
			{
				iLocal_255++;
			}
			break;
		
		case 2:
			if (func_303())
			{
				iLocal_255++;
			}
			break;
		
		case 3:
			iVar2 = true;
			iVar0 = 0;
			while (iVar0 <= 3)
			{
				if (!is_ped_injured(iLocal_52[iVar0]))
				{
					fVar3 = absf(get_entity_heading(iLocal_52[iVar0]) - vLocal_183[iVar0 /*3*/].f_2);
					if (fVar3 >= 180f)
					{
						fVar3 -= 360f;
					}
					if (fVar3 < -180f)
					{
						fVar3 += 360f;
					}
					if (vdist(get_entity_coords(iLocal_52[iVar0], 1), vLocal_170[iVar0 /*3*/]) > 2f || fVar3 > 20f)
					{
						iVar2 = false;
					}
				}
				iVar0++;
			}
			if (iVar2)
			{
				iLocal_255++;
			}
			break;
		
		case 4:
			if (func_302())
			{
				iLocal_255++;
			}
			break;
		
		case 5:
			if (is_synchronized_scene_running(iLocal_251))
			{
				if (get_synchronized_scene_phase(iLocal_251) >= 1f)
				{
					iLocal_255++;
				}
			}
			break;
		
		case 6:
			if (func_301())
			{
				remove_anim_dict("missheistpaletoscoresetup_setup1");
				iLocal_255++;
			}
			break;
	}
	switch (iLocal_256)
	{
		case 0:
			request_vehicle_recording(7, sLocal_277);
			request_anim_dict("missheistpaletoscore1leadinoutrbhs_int_1");
			if ((has_vehicle_recording_been_loaded(7, sLocal_277) && has_anim_dict_loaded("missheistpaletoscore1leadinoutrbhs_int_1")) && get_game_timer() - iLocal_259 > 14000)
			{
				if (func_300())
				{
					iLocal_256++;
				}
			}
			break;
		
		case 1:
			if (is_vehicle_driveable(iLocal_358, 0) && !is_ped_injured(iLocal_357))
			{
				set_vehicle_alarm(iLocal_358, 1);
				start_playback_recorded_vehicle(iLocal_358, 7, sLocal_277, 1);
				set_playback_speed(iLocal_358, 0.85f);
				iLocal_256++;
			}
			break;
		
		case 2:
			if (is_vehicle_driveable(iLocal_358, 0) && !is_ped_injured(iLocal_357))
			{
				if (!is_playback_going_on_for_vehicle(iLocal_358))
				{
					func_223(iLocal_357, "FIGHT_RUN", 10);
					remove_vehicle_recording(7, sLocal_277);
					set_vehicle_engine_on(iLocal_358, false, 0, 0);
					open_sequence_task(&iLocal_712);
					task_leave_vehicle(false, iLocal_358, 0);
					task_follow_nav_mesh_to_coord(false, -76.8476f, 6417.165f, 30.4902f, 2f, -1, 0.25f, 0, 1193033728);
					task_follow_nav_mesh_to_coord(false, -59.8699f, 6423.774f, 30.4862f, 2f, -1, 0.25f, 0, 1193033728);
					task_follow_nav_mesh_to_coord(false, -63.1039f, 6427.249f, 30.4869f, 2f, -1, 0.25f, 0, 1193033728);
					close_sequence_task(iLocal_712);
					task_perform_sequence(iLocal_357, iLocal_712);
					clear_sequence_task(&iLocal_712);
					iLocal_256++;
				}
				else if (is_playback_going_on_for_vehicle(iLocal_358))
				{
					if (!is_playback_using_ai_going_on_for_vehicle(iLocal_358))
					{
						vVar4 = {get_entity_coords(iLocal_358, 1) - Vector(2f, 0f, 0f)};
						vVar7 = {get_offset_from_entity_in_world_coords(iLocal_358, 0f, func_233(get_entity_speed(iLocal_358) / 10f + 12f, 12f, 25f), 2f)};
						if (is_entity_in_angled_area(player_ped_id(), vVar4, vVar7, 3.5f, 0, true, 0))
						{
							set_playback_to_use_ai(iLocal_358, 786469);
						}
					}
					if (!is_playback_using_ai_going_on_for_vehicle(iLocal_358))
					{
						if (vdist2(get_entity_coords(player_ped_id(), 1), get_entity_coords(iLocal_358, 1)) < 3f)
						{
							if (is_entity_touching_entity(player_ped_id(), iLocal_358) || is_entity_touching_entity(iLocal_67, iLocal_358))
							{
								set_playback_to_use_ai(iLocal_358, 786469);
							}
						}
					}
				}
			}
			if (((!is_vehicle_driveable(iLocal_358, 0) || is_ped_injured(iLocal_357)) || (is_vehicle_driveable(iLocal_358, 0) && has_entity_been_damaged_by_entity(iLocal_358, player_ped_id(), 1))) || (!is_ped_injured(iLocal_357) && has_entity_been_damaged_by_entity(iLocal_357, player_ped_id(), 1)))
			{
				if (!is_entity_dead(iLocal_358, 0))
				{
					if (is_playback_going_on_for_vehicle(iLocal_358))
					{
						stop_playback_recorded_vehicle(iLocal_358);
					}
				}
			}
			break;
		
		case 3:
			if (does_entity_exist(iLocal_357) && !is_ped_injured(iLocal_357))
			{
				if (is_entity_in_angled_area(iLocal_357, -64.70889f, 6428.823f, 30.48731f, -60.18451f, 6424.346f, 35.23688f, 3.75f, 0, true, 0))
				{
					if (is_entity_occluded(iLocal_357))
					{
						_0xAF66DCEE6609B148();
						delete_ped(&iLocal_357);
					}
					else if (get_script_task_status(iLocal_357, 242628503) != 1)
					{
						if (!is_entity_playing_anim(iLocal_357, "missheistpaletoscore1leadinoutrbhs_int_1", "_leadin_trevor", 3))
						{
							task_play_anim(iLocal_357, "missheistpaletoscore1leadinoutrbhs_int_1", "_leadin_trevor", 4f, -4f, -1, 1, 0, 0, 0, 0);
							iLocal_256++;
						}
					}
				}
			}
			break;
		
		case 4:
			if (does_entity_exist(iLocal_357) && !is_ped_injured(iLocal_357))
			{
				if (is_entity_occluded(iLocal_357) && vdist2(get_entity_coords(iLocal_357, 1), get_entity_coords(player_ped_id(), 1)) > 400f)
				{
					_0xAF66DCEE6609B148();
					delete_ped(&iLocal_357);
				}
			}
			break;
	}
	_0xD9B71952F78A2640(178228075, 1);
	_0xD9B71952F78A2640(1852297978, 1);
}

int func_300()
{
	if (!does_entity_exist(iLocal_357))
	{
		request_model(joaat("ruffian"));
		request_model(joaat("a_m_y_genstreet_02"));
		if (has_model_loaded(joaat("ruffian")) && has_model_loaded(joaat("a_m_y_genstreet_02")))
		{
			iLocal_358 = create_vehicle(joaat("ruffian"), vLocal_139, fLocal_142, 1, true);
			iLocal_357 = create_ped_inside_vehicle(iLocal_358, 26, joaat("a_m_y_genstreet_02"), -1, 1, true);
			set_ped_component_variation(iLocal_357, false, true, false, 0);
			set_ped_component_variation(iLocal_357, 3, false, false, 0);
			set_ped_component_variation(iLocal_357, 4, false, false, 0);
			set_vehicle_colour_combination(iLocal_358, true);
			set_vehicle_engine_health(iLocal_358, 3000f);
			_0xF1F8157B8C3F171C(iLocal_358, "Trevor_Revs_Off", "PALETO_SCORE_SETUP_SOUNDS");
			set_entity_health(iLocal_358, 3000);
			set_vehicle_doors_locked(iLocal_358, 3);
			set_ped_combat_attributes(iLocal_357, 17, true);
			set_ped_flee_attributes(iLocal_357, 128, true);
			set_ped_flee_attributes(iLocal_357, 1024, true);
			set_model_as_no_longer_needed(joaat("a_m_y_genstreet_02"));
			set_ped_can_be_knocked_off_vehicle(iLocal_357, 3);
			set_veh_radio_station(iLocal_358, get_radio_station_name(6));
			set_ped_helmet(iLocal_357, 0);
		}
	}
	return (does_entity_exist(iLocal_357) && does_entity_exist(iLocal_358));
}

bool func_301()
{
	int iVar0;
	
	request_anim_dict("missheistpaletoscoresetup_setup2");
	if (has_anim_dict_loaded("missheistpaletoscoresetup_setup2"))
	{
		if (((!is_ped_injured(iLocal_52[0]) && !is_ped_injured(iLocal_52[1])) && !is_ped_injured(iLocal_52[2])) && !is_ped_injured(iLocal_52[3]))
		{
			iVar0 = 0;
			while (iVar0 <= 3)
			{
				clear_ped_tasks(iLocal_52[iVar0]);
				iVar0++;
			}
			iLocal_252 = create_synchronized_scene(vLocal_143, vLocal_146, 2);
			task_synchronized_scene(iLocal_52[0], iLocal_252, "missheistpaletoscoresetup_setup2", "cops_response_waitloop_bank_manager", 8f, -4f, 1, 0, 1000f, 0);
			task_synchronized_scene(iLocal_52[1], iLocal_252, "missheistpaletoscoresetup_setup2", "cops_response_waitloop_bank_clerk1", 8f, -4f, 1, 0, 1000f, 0);
			task_synchronized_scene(iLocal_52[2], iLocal_252, "missheistpaletoscoresetup_setup2", "cops_response_waitloop_bank_clerk2", 8f, -4f, 1, 0, 1000f, 0);
			task_synchronized_scene(iLocal_52[3], iLocal_252, "missheistpaletoscoresetup_setup2", "cops_response_waitloop_bank_clerk3", 8f, -4f, 1, 0, 1000f, 0);
			set_synchronized_scene_looped(iLocal_252, true);
			return true;
		}
	}
	return false;
}

bool func_302()
{
	int iVar0;
	
	request_anim_dict("missheistpaletoscoresetup_setup1");
	if (has_anim_dict_loaded("missheistpaletoscoresetup_setup1"))
	{
		if (((!is_ped_injured(iLocal_52[0]) && !is_ped_injured(iLocal_52[1])) && !is_ped_injured(iLocal_52[2])) && !is_ped_injured(iLocal_52[3]))
		{
			iVar0 = 0;
			while (iVar0 <= 3)
			{
				clear_ped_tasks(iLocal_52[iVar0]);
				iVar0++;
			}
			iLocal_251 = create_synchronized_scene(vLocal_143, vLocal_146, 2);
			task_synchronized_scene(iLocal_52[0], iLocal_251, "missheistpaletoscoresetup_setup1", "cops_response_intro_bank_manager", 4f, -8f, 1, 0, 1000f, 0);
			task_synchronized_scene(iLocal_52[1], iLocal_251, "missheistpaletoscoresetup_setup1", "cops_response_intro_bank_clerk1", 4f, -8f, 1, 0, 1000f, 0);
			task_synchronized_scene(iLocal_52[2], iLocal_251, "missheistpaletoscoresetup_setup1", "cops_response_intro_bank_clerk2", 4f, -8f, 1, 0, 1000f, 0);
			task_synchronized_scene(iLocal_52[3], iLocal_251, "missheistpaletoscoresetup_setup1", "cops_response_intro_bank_clerk3", 4f, -8f, 1, 0, 1000f, 0);
			return true;
		}
	}
	return false;
}

bool func_303()
{
	int iVar0;
	
	request_anim_dict("missheistpaletoscoresetup_setup1");
	if (has_anim_dict_loaded("missheistpaletoscoresetup_setup1"))
	{
		vLocal_170[0 /*3*/] = {get_anim_initial_offset_position("missheistpaletoscoresetup_setup1", "cops_response_intro_bank_manager", vLocal_143, vLocal_146, 0, 2)};
		vLocal_170[1 /*3*/] = {get_anim_initial_offset_position("missheistpaletoscoresetup_setup1", "cops_response_intro_bank_clerk1", vLocal_143, vLocal_146, 0, 2)};
		vLocal_170[2 /*3*/] = {get_anim_initial_offset_position("missheistpaletoscoresetup_setup1", "cops_response_intro_bank_clerk2", vLocal_143, vLocal_146, 0, 2)};
		vLocal_170[3 /*3*/] = {get_anim_initial_offset_position("missheistpaletoscoresetup_setup1", "cops_response_intro_bank_clerk3", vLocal_143, vLocal_146, 0, 2)};
		vLocal_183[0 /*3*/] = {get_anim_initial_offset_rotation("missheistpaletoscoresetup_setup1", "cops_response_intro_bank_manager", vLocal_143, vLocal_146, 0, 2)};
		vLocal_183[1 /*3*/] = {get_anim_initial_offset_rotation("missheistpaletoscoresetup_setup1", "cops_response_intro_bank_clerk1", vLocal_143, vLocal_146, 0, 2)};
		vLocal_183[2 /*3*/] = {get_anim_initial_offset_rotation("missheistpaletoscoresetup_setup1", "cops_response_intro_bank_clerk2", vLocal_143, vLocal_146, 0, 2)};
		vLocal_183[3 /*3*/] = {get_anim_initial_offset_rotation("missheistpaletoscoresetup_setup1", "cops_response_intro_bank_clerk3", vLocal_143, vLocal_146, 0, 2)};
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			if (!is_ped_injured(iLocal_52[iVar0]))
			{
				task_follow_nav_mesh_to_coord(iLocal_52[iVar0], vLocal_170[iVar0 /*3*/], 1f, -1, 0.25f, 512, vLocal_183[iVar0 /*3*/].f_2);
			}
			iVar0++;
		}
		_set_door_acceleration_limit(178228075, 0, 1, 0);
		_set_door_acceleration_limit(1852297978, 0, 1, 0);
		return true;
	}
	return false;
}

int func_304()
{
	int iVar0;
	int iVar1;
	
	request_model(joaat("a_m_m_business_01"));
	request_model(joaat("a_f_y_business_01"));
	if (has_model_loaded(joaat("a_m_m_business_01")) && has_model_loaded(joaat("a_f_y_business_01")))
	{
		if (iLocal_637 == -1)
		{
			iLocal_637 = 0;
		}
		if (iLocal_637 == 0 && !does_entity_exist(iLocal_52[0]))
		{
			iLocal_52[0] = create_ped(4, joaat("a_m_m_business_01"), vLocal_599[0 /*3*/], fLocal_627[0], 1, true);
			set_ped_component_variation(iLocal_52[0], false, false, 2, 0);
			set_ped_component_variation(iLocal_52[0], 3, false, true, 0);
			set_ped_component_variation(iLocal_52[0], 4, false, true, 0);
			set_ped_component_variation(iLocal_52[0], 11, false, false, 0);
		}
		if (iLocal_637 == 1 && !does_entity_exist(iLocal_52[1]))
		{
			iLocal_52[1] = create_ped(5, joaat("a_f_y_business_01"), vLocal_599[1 /*3*/], fLocal_627[1], 1, true);
			set_ped_component_variation(iLocal_52[1], false, false, false, 0);
			set_ped_component_variation(iLocal_52[1], 2, true, false, 0);
			set_ped_component_variation(iLocal_52[1], 3, true, false, 0);
			set_ped_component_variation(iLocal_52[1], 4, false, true, 0);
		}
		if (iLocal_637 == 2 && !does_entity_exist(iLocal_52[2]))
		{
			iLocal_52[2] = create_ped(5, joaat("a_f_y_business_01"), vLocal_599[2 /*3*/], fLocal_627[2], 1, true);
			set_ped_component_variation(iLocal_52[2], false, false, false, 0);
			set_ped_component_variation(iLocal_52[2], 2, false, true, 0);
			set_ped_component_variation(iLocal_52[2], 3, true, false, 0);
			set_ped_component_variation(iLocal_52[2], 4, true, false, 0);
		}
		if (iLocal_637 == 3 && !does_entity_exist(iLocal_52[3]))
		{
			iLocal_52[3] = create_ped(4, joaat("a_m_m_business_01"), vLocal_599[3 /*3*/], fLocal_627[3], 1, true);
			set_ped_component_variation(iLocal_52[3], false, false, true, 0);
			set_ped_component_variation(iLocal_52[3], 3, false, true, 0);
			set_ped_component_variation(iLocal_52[3], 4, false, false, 0);
			set_ped_component_variation(iLocal_52[3], 11, false, false, 0);
			iVar0 = 0;
			while (iVar0 < iLocal_52)
			{
				if (!is_ped_injured(iLocal_52[iVar0]))
				{
					clear_ped_tasks(iLocal_52[iVar0]);
					set_entity_load_collision_flag(iLocal_52[iVar0], true);
					set_ped_combat_attributes(iLocal_52[iVar0], 17, true);
					set_ped_hearing_range(iLocal_52[iVar0], 15f);
					set_ped_seeing_range(iLocal_52[iVar0], 15f);
					set_ped_config_flag(iLocal_52[iVar0], 118, false);
					set_blocking_of_non_temporary_events(iLocal_52[iVar0], true);
					set_ped_keep_task(iLocal_52[iVar0], true);
				}
				iVar0++;
			}
			iLocal_637 = -1;
		}
		else
		{
			iLocal_637++;
		}
	}
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < iLocal_52)
	{
		if (!does_entity_exist(iLocal_52[iVar0]))
		{
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_305()
{
	int iVar0;
	
	request_anim_dict("missheistpaletoscoresetup_setup3");
	if (has_anim_dict_loaded("missheistpaletoscoresetup_setup3"))
	{
		if ((((((!is_ped_injured(iLocal_52[0]) && !is_ped_injured(iLocal_52[1])) && !is_ped_injured(iLocal_52[2])) && !is_ped_injured(iLocal_52[3])) && !is_ped_injured(Local_547[iLocal_258 /*9*/][0])) && !is_ped_injured(Local_547[iLocal_258 /*9*/][1])) && is_vehicle_driveable(Local_547[iLocal_258 /*9*/].f_3, 0))
		{
			iVar0 = 0;
			while (iVar0 <= 3)
			{
				clear_ped_tasks(iLocal_52[iVar0]);
				iVar0++;
			}
			clear_ped_tasks(Local_547[iLocal_258 /*9*/][0]);
			clear_ped_tasks(Local_547[iLocal_258 /*9*/][1]);
			iLocal_253 = create_synchronized_scene(vLocal_143, vLocal_146, 2);
			task_synchronized_scene(Local_547[iLocal_258 /*9*/][0], iLocal_253, "missheistpaletoscoresetup_setup3", "Cops_Response_Outro_Cop_Driver", 1000f, -1000f, 20, 0, 1000f, 0);
			task_synchronized_scene(Local_547[iLocal_258 /*9*/][1], iLocal_253, "missheistpaletoscoresetup_setup3", "Cops_Response_Outro_Cop_Passenger", 1000f, -1000f, 20, 0, 1000f, 0);
			task_synchronized_scene(iLocal_52[0], iLocal_253, "missheistpaletoscoresetup_setup3", "Cops_Response_Outro_Bank_Manager", 4f, -4f, 17, 0, 1000f, 0);
			task_synchronized_scene(iLocal_52[1], iLocal_253, "missheistpaletoscoresetup_setup3", "Cops_Response_Outro_Bank_Clerk1", 4f, -4f, 17, 0, 1000f, 0);
			task_synchronized_scene(iLocal_52[2], iLocal_253, "missheistpaletoscoresetup_setup3", "Cops_Response_Outro_Bank_Clerk2", 4f, -4f, 17, 0, 1000f, 0);
			task_synchronized_scene(iLocal_52[3], iLocal_253, "missheistpaletoscoresetup_setup3", "Cops_Response_Outro_Bank_Clerk3", 4f, -4f, 17, 0, 1000f, 0);
			freeze_entity_position(Local_547[iLocal_258 /*9*/].f_3, false);
			play_synchronized_entity_anim(Local_547[iLocal_258 /*9*/].f_3, iLocal_253, "Cops_Response_Outro_CAR", "missheistpaletoscoresetup_setup3", 1000f, -1000f, 32 | 1 | 4, 1000f);
			force_entity_ai_and_animation_update(Local_547[iLocal_258 /*9*/].f_3);
			return true;
		}
	}
	return false;
}

void func_306(int iParam0, vector3 vParam1, vector3 vParam2, var uParam3, float fParam4, float fParam5)
{
	var[] uVar0 = new var[4];
	
	set_entity_coords(iParam0, func_307(vParam1, vParam4, *fParam9), 1, false, 0, 1);
	_0xF2F6A2FA49278625(*fParam9, *uParam7[0], *uParam7[1], *uParam7[2], *uParam7[3], *fParam8[0], *fParam8[1], *fParam8[2], *fParam8[3], &(uVar0[0]), &(uVar0[1]), &(uVar0[2]), &(uVar0[3]));
	set_entity_quaternion(iParam0, uVar0[0], uVar0[1], uVar0[2], uVar0[3]);
}

Vector3 func_307(vector3 vParam0, vector3 vParam1, float fParam2)
{
	return Vector(1f - fParam6, 1f - fParam6, 1f - fParam6) * vParam0 + Vector(fParam6, fParam6, fParam6) * vParam3;
}

int func_308(int iParam0)
{
	int iVar0;
	char[24] cVar1;
	int iVar7;
	
	iVar0 = 0;
	request_model(joaat("sheriff"));
	request_model(joaat("s_m_y_cop_01"));
	request_vehicle_recording(true, sLocal_277);
	request_vehicle_recording(2, sLocal_277);
	request_vehicle_recording(3, sLocal_277);
	request_vehicle_recording(4, sLocal_277);
	if (((((has_model_loaded(joaat("sheriff")) && has_model_loaded(joaat("s_m_y_cop_01"))) && has_vehicle_recording_been_loaded(true, sLocal_277)) && has_vehicle_recording_been_loaded(2, sLocal_277)) && has_vehicle_recording_been_loaded(3, sLocal_277)) && has_vehicle_recording_been_loaded(4, sLocal_277))
	{
		iVar0 = 0;
		while (iVar0 < Local_547)
		{
			Local_547[iVar0 /*9*/] = {func_309(get_position_of_vehicle_recording_at_time(iVar0 + 1, 0f, sLocal_277), 0f, iVar0 + 1)};
			if ((!is_ped_injured(Local_547[iVar0 /*9*/][0]) && is_vehicle_driveable(Local_547[iVar0 /*9*/].f_3, 0)) && has_vehicle_recording_been_loaded(Local_547[iVar0 /*9*/].f_4, sLocal_277))
			{
				set_vehicle_engine_on(Local_547[iVar0 /*9*/].f_3, true, 1, 0);
				set_vehicle_siren(Local_547[iVar0 /*9*/].f_3, !iParam0);
				start_playback_recorded_vehicle(Local_547[iVar0 /*9*/].f_3, Local_547[iVar0 /*9*/].f_4, sLocal_277, 1);
				if (iParam0)
				{
					skip_to_end_and_stop_playback_recorded_vehicle(Local_547[iVar0 /*9*/].f_3);
				}
				StringCopy(&cVar1, "cop car ", 24);
				StringIntConCat(&cVar1, iVar0, 24);
				set_vehicle_name_debug(Local_547[iVar0 /*9*/].f_3, &cVar1);
			}
			iVar0++;
		}
	}
	iVar7 = 1;
	iVar0 = 0;
	while (iVar0 < Local_547)
	{
		if ((!does_entity_exist(Local_547[iVar0 /*9*/].f_3) || !does_entity_exist(Local_547[iVar0 /*9*/][0])) || !does_entity_exist(Local_547[iVar0 /*9*/][1]))
		{
			iVar7 = 0;
		}
		iVar0++;
	}
	return iVar7;
}

struct<9> func_309(vector3 vParam0, Vector3 fParam1, var uParam2)
{
	struct<9> Var0;
	
	Var0 = 2;
	if (has_model_loaded(joaat("sheriff")) && has_model_loaded(joaat("s_m_y_cop_01")))
	{
		Var0.f_5 = 1;
		Var0.f_4 = uParam4;
		Var0.f_3 = create_vehicle(joaat("sheriff"), vParam0, fParam3, 1, true);
		Var0[0] = create_ped_inside_vehicle(Var0.f_3, 6, joaat("s_m_y_cop_01"), -1, 1, true);
		give_weapon_to_ped(Var0[0], joaat("weapon_pistol"), -1, false, true);
		Var0[1] = create_ped_inside_vehicle(Var0.f_3, 6, joaat("s_m_y_cop_01"), false, 1, true);
		give_weapon_to_ped(Var0[1], joaat("weapon_pistol"), -1, false, true);
		set_ped_relationship_group_hash(Var0[0], iLocal_93);
		set_ped_relationship_group_hash(Var0[1], iLocal_93);
		_0x2B6747FAA9DB9D6B(Var0.f_3, 1);
		Var0.f_7 = 0;
	}
	return Var0;
}

bool func_310(var uParam0)
{
	if (is_vehicle_driveable(*uParam0, 0))
	{
		if (vdist2(get_entity_coords(player_ped_id(), 1), get_entity_coords(*uParam0, 1)) < 22500f)
		{
			return true;
		}
	}
	return false;
}

int func_311()
{
	int iVar0;
	Vector3 fVar1;
	int iVar2;
	
	fVar1 = 99999f;
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Local_547)
	{
		if (does_entity_exist(Local_547[iVar0 /*9*/].f_3))
		{
			if (is_vehicle_driveable(Local_547[iVar0 /*9*/].f_3, 0))
			{
				if (vdist2(get_entity_coords(player_ped_id(), 1), get_entity_coords(Local_547[iVar0 /*9*/].f_3, 1)) < fVar1 * fVar1)
				{
					iVar2 = iVar0;
					fVar1 = vdist(get_entity_coords(player_ped_id(), 1), get_entity_coords(Local_547[iVar0 /*9*/].f_3, 1));
				}
			}
		}
		iVar0++;
	}
	return iVar2;
}

void func_312()
{
	vLocal_167 = {vLocal_167 + vLocal_164 - vLocal_167 * Vector(fLocal_250, fLocal_250, fLocal_250)};
	if (!does_entity_exist(iLocal_64))
	{
		request_model(joaat("prop_ld_test_01"));
		if (has_model_loaded(joaat("prop_ld_test_01")))
		{
			iLocal_64 = create_object(joaat("prop_ld_test_01"), vLocal_167, 1, true, false);
			freeze_entity_position(iLocal_64, true);
			set_entity_collision(iLocal_64, false, 0);
		}
	}
	if (does_entity_exist(iLocal_64))
	{
		set_entity_coords(iLocal_64, vLocal_167, 1, false, 0, 1);
	}
	func_313(&Local_96, iLocal_64, "CBH_FCUSHLP", 0, 1, 1, 1);
	if (!is_ped_in_vehicle(player_ped_id(), iLocal_67, 0) || iLocal_242)
	{
		if (func_271("CBH_FCUSHLP"))
		{
			if (!iLocal_243)
			{
				clear_help(0);
				iLocal_243 = 1;
			}
		}
		else if (!iLocal_242)
		{
			if (iLocal_241)
			{
				iLocal_241 = 0;
			}
			if (iLocal_243)
			{
				iLocal_243 = 0;
			}
		}
	}
}

void func_313(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_314(iParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, iParam4, iParam5, iParam6);
}

void func_314(int iParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, int iParam5, var uParam6, int iParam7)
{
	if (!is_ped_in_any_vehicle(player_ped_id(), 1))
	{
		func_270(iParam0, 0, 0);
	}
	*iParam0.f_6 = 2;
	func_315(iParam0, iParam1, vParam2, sParam5, iParam6, iParam7, uParam8, iParam9);
}

void func_315(int iParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, int iParam5, var uParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	
	if (*iParam0.f_1 && is_gameplay_hint_active())
	{
		if (get_game_timer() >= *iParam0.f_8 + *iParam0.f_9)
		{
			*iParam0.f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (is_string_null(iVar0))
	{
		if (!network_is_game_in_progress())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_271(iVar0))
	{
		func_332();
	}
	if (func_331(iParam1) && is_entity_visible(iParam1))
	{
		iVar1 = 0;
		if (is_entity_a_ped(iParam1))
		{
			_0x7D7A2E43E74E2EB8(get_ped_index_from_entity_index(iParam1));
			get_ped_flood_invincibility(get_ped_index_from_entity_index(iParam1), 1);
			if (is_tracked_ped_visible(get_ped_index_from_entity_index(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (is_entity_a_vehicle(iParam1))
		{
			track_vehicle_visibility(get_vehicle_index_from_entity_index(iParam1));
			if (is_vehicle_visible(get_vehicle_index_from_entity_index(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (is_entity_an_object(iParam1))
		{
			track_object_visibility(get_object_index_from_entity_index(iParam1));
			if (is_object_visible(get_object_index_from_entity_index(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!is_gameplay_hint_active())
		{
			if (func_326(iParam0, iParam7, iParam9, 0))
			{
				func_323(iParam0, iParam1, vParam2, iParam6);
			}
			if (*iParam0)
			{
				*iParam0 = 0;
			}
			else if (*iParam0.f_6 == 2)
			{
				if (func_320(iVar0))
				{
					if ((is_string_null(*iParam0.f_3) && !is_string_null(iVar0)) && is_ped_in_any_vehicle(player_ped_id(), 0))
					{
						if ((iVar1 && !is_help_message_being_displayed()) && uParam8)
						{
							if (!func_271(iVar0))
							{
								func_319(iVar0, -1);
								*iParam0.f_3 = iVar0;
								if (are_strings_equal("CMN_HINT", iVar0))
								{
									func_318(1);
								}
							}
						}
					}
				}
			}
			else if (func_320(iVar0))
			{
				if (is_string_null(*iParam0.f_3) && !is_string_null(iVar0))
				{
					if (((is_entity_on_screen(iParam1) && iVar1) && !is_help_message_being_displayed()) && uParam8)
					{
						if (!func_271(iVar0))
						{
							func_319(iVar0, -1);
							*iParam0.f_3 = iVar0;
							if (are_strings_equal("CMN_HINT", iVar0))
							{
								func_318(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!is_string_null(sParam5))
			{
				if (func_271(sParam5))
				{
					clear_help(1);
				}
			}
			if (is_ped_in_any_vehicle(player_ped_id(), 1))
			{
				if (is_ped_in_any_boat(player_ped_id()))
				{
					if (_0xEE778F8C7E1142E2(3) == 3 || _0xEE778F8C7E1142E2(3) == 4)
					{
						func_270(iParam0, iVar0, 1);
					}
				}
				else if (is_ped_in_any_heli(player_ped_id()))
				{
					if (_0xEE778F8C7E1142E2(6) == 3 || _0xEE778F8C7E1142E2(6) == 4)
					{
						func_270(iParam0, iVar0, 1);
					}
				}
				else if (is_ped_in_any_plane(player_ped_id()))
				{
					if (_0xEE778F8C7E1142E2(4) == 3 || _0xEE778F8C7E1142E2(4) == 4)
					{
						func_270(iParam0, iVar0, 1);
					}
				}
				else if (is_ped_in_any_sub(player_ped_id()))
				{
					if (_0xEE778F8C7E1142E2(5) == 3 || _0xEE778F8C7E1142E2(5) == 4)
					{
						func_270(iParam0, iVar0, 1);
					}
				}
				else if (is_ped_on_any_bike(player_ped_id()))
				{
					if (_0xEE778F8C7E1142E2(2) == 3 || _0xEE778F8C7E1142E2(2) == 4)
					{
						func_270(iParam0, iVar0, 1);
					}
				}
				else if (get_follow_vehicle_cam_view_mode() == 3 || get_follow_vehicle_cam_view_mode() == 4)
				{
					func_270(iParam0, iVar0, 1);
				}
			}
			if (!func_326(iParam0, iParam7, iParam9, 0))
			{
				if ((!*iParam0 && !*iParam0.f_1) && !func_317(iParam0))
				{
					func_316(iParam0);
				}
			}
		}
	}
	else
	{
		func_270(iParam0, iVar0, 0);
	}
}

void func_316(int iParam0)
{
	if (func_331(player_ped_id()))
	{
		task_clear_look_at(player_ped_id());
	}
	if (is_gameplay_hint_active())
	{
		set_cinematic_button_active(true);
		stop_gameplay_hint(0);
		stop_audio_scene("HINT_CAM_SCENE");
		_stop_screen_effect("FocusIn");
		if (*iParam0.f_11)
		{
			_start_screen_effect("FocusOut", false, 0);
			play_sound_frontend(-1, "FocusOut", "HintCamSounds", 1);
			*iParam0.f_11 = 0;
		}
	}
	*iParam0.f_2 = -1;
	*iParam0 = 1;
}

bool func_317(int iParam0)
{
	int iVar0;
	
	if (*iParam0.f_2 > 0)
	{
		iVar0 = *iParam0.f_10 / 2;
		if (*iParam0.f_2 + iVar0 > get_game_timer())
		{
			return true;
		}
	}
	return false;
}

int func_318(int iParam0)
{
	switch (Global_35711)
	{
		case 0:
		case 3:
			if (iParam0)
			{
				Global_101154.f_8739.f_100++;
			}
			return Global_101154.f_8739.f_100;
			break;
		
		case 4:
			if (iParam0)
			{
				Global_101154.f_8739.f_101++;
			}
			return Global_101154.f_8739.f_101;
			break;
		
		case 5:
		case 15:
			if (iParam0)
			{
				Global_101154.f_8739.f_102++;
			}
			return Global_101154.f_8739.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

void func_319(char* sParam0, int iParam1)
{
	_set_text_component_format(sParam0);
	_display_help_text_from_string_label(0, 0, true, iParam1);
}

bool func_320(char* sParam0)
{
	if (!func_321(1, 1, 0))
	{
		if ((!is_string_null_or_empty(sParam0) && func_271(sParam0)) || func_271("CMN_HINT"))
		{
			clear_help(1);
		}
		return false;
	}
	switch (Global_35711)
	{
		case 0:
		case 3:
			if (func_318(0) < 3)
			{
				return true;
			}
			break;
		
		case 4:
			if (func_318(0) < 1)
			{
				return true;
			}
			break;
		
		case 5:
		case 15:
			if (func_318(0) < 1)
			{
				return true;
			}
			break;
		
		default:
			break;
	}
	return false;
}

bool func_321(int iParam0, int iParam1, int iParam2)
{
	if (iParam0)
	{
		if (!is_player_control_on(player_id()))
		{
			return false;
		}
	}
	if (iParam2)
	{
		return true;
	}
	if (is_player_switch_in_progress())
	{
		return false;
	}
	if (func_266(0))
	{
		return false;
	}
	if (func_322())
	{
		return false;
	}
	if (_network_is_text_chat_active())
	{
		return false;
	}
	if (Global_68058)
	{
		return false;
	}
	if (_get_number_of_instances_of_streamed_script(joaat("appinternet")) > 0)
	{
		return false;
	}
	if (Global_52930)
	{
		return false;
	}
	if (iParam1)
	{
		if (is_ped_in_any_vehicle(player_ped_id(), 1))
		{
			if (is_ped_in_any_boat(player_ped_id()))
			{
				if (_0xEE778F8C7E1142E2(3) == 3 || _0xEE778F8C7E1142E2(3) == 4)
				{
					return false;
				}
			}
			else if (is_ped_in_any_heli(player_ped_id()))
			{
				if (_0xEE778F8C7E1142E2(6) == 3 || _0xEE778F8C7E1142E2(6) == 4)
				{
					return false;
				}
			}
			else if (is_ped_in_any_plane(player_ped_id()))
			{
				if (_0xEE778F8C7E1142E2(4) == 3 || _0xEE778F8C7E1142E2(4) == 4)
				{
					return false;
				}
			}
			else if (is_ped_in_any_sub(player_ped_id()))
			{
				if (_0xEE778F8C7E1142E2(5) == 3 || _0xEE778F8C7E1142E2(5) == 4)
				{
					return false;
				}
			}
			else if (is_ped_on_any_bike(player_ped_id()))
			{
				if (_0xEE778F8C7E1142E2(2) == 3 || _0xEE778F8C7E1142E2(2) == 4)
				{
					return false;
				}
			}
			else if (get_follow_vehicle_cam_view_mode() == 3 || get_follow_vehicle_cam_view_mode() == 4)
			{
				return false;
			}
			if (is_gameplay_cam_looking_behind())
			{
				return false;
			}
		}
	}
	return true;
}

int func_322()
{
	return get_game_timer() <= Global_17257.f_5745 + 100;
}

void func_323(int iParam0, int iParam1, vector3 vParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (is_entity_dead(iParam1, 0))
	{
		func_270(iParam0, 0, 0);
	}
	if (func_31(vParam2, 0f, 0f, 0f, 0))
	{
		if (is_entity_a_ped(iParam1))
		{
			iVar0 = get_ped_index_from_entity_index(iParam1);
			if (!is_ped_in_any_vehicle(iVar0, 0))
			{
				if (is_ped_a_player(iVar0))
				{
					if (!func_324())
					{
						vParam2 = {0f, 0f, 1f};
					}
				}
				else if (is_ped_male(iVar0))
				{
					vParam2 = {0f, 0f, 1f};
				}
			}
		}
	}
	set_cinematic_button_active(false);
	iVar1 = *iParam0.f_9;
	iVar2 = *iParam0.f_10;
	if (iParam5 == 1726668277)
	{
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
		if (iVar2 < 1500)
		{
			iVar2 = 1500;
		}
	}
	set_gameplay_entity_hint(iParam1, vParam2, 1, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	task_look_at_entity(player_ped_id(), iParam1, -1, iVar3, iVar4);
	_start_screen_effect("FocusIn", false, 0);
	start_audio_scene("HINT_CAM_SCENE");
	play_sound_frontend(-1, "FocusIn", "HintCamSounds", 1);
	*iParam0.f_11 = 1;
	*iParam0.f_8 = get_game_timer();
	*iParam0.f_1 = 1;
	*iParam0 = 0;
}

int func_324()
{
	return func_325(player_id());
}

bool func_325(int iParam0)
{
	if (get_entity_model(get_player_ped(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return true;
	}
	return false;
}

bool func_326(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (*iParam0.f_1)
	{
		if (get_game_timer() >= *iParam0.f_8 + *iParam0.f_9)
		{
			*iParam0.f_1 = 0;
		}
	}
	switch (*iParam0.f_5)
	{
		case 0:
			*iParam0.f_7 = 0;
			if (*iParam0.f_6 == 0)
			{
				if (is_ped_in_any_vehicle(player_ped_id(), 1))
				{
					if (func_330(iParam1, iParam2, iParam3))
					{
						*iParam0.f_4 = get_game_timer();
						*iParam0.f_5 = 1;
						*iParam0.f_7 = 1;
					}
				}
				else if (func_329(iParam1, iParam2, iParam3))
				{
					*iParam0.f_4 = get_game_timer();
					*iParam0.f_5 = 1;
					*iParam0.f_7 = 1;
				}
			}
			else if (*iParam0.f_6 == 1)
			{
				if (func_329(iParam1, iParam2, iParam3))
				{
					*iParam0.f_4 = get_game_timer();
					*iParam0.f_5 = 1;
					*iParam0.f_7 = 1;
				}
			}
			else if (*iParam0.f_6 == 2)
			{
				if (func_330(iParam1, iParam2, iParam3))
				{
					*iParam0.f_4 = get_game_timer();
					*iParam0.f_5 = 1;
					*iParam0.f_7 = 1;
				}
			}
			if (func_317(iParam0))
			{
				*iParam0.f_7 = 1;
				*iParam0.f_5 = 4;
			}
			break;
		
		case 1:
			if (get_game_timer() - *iParam0.f_4 <= 500)
			{
				if (*iParam0.f_6 == 0)
				{
					if (is_ped_in_any_vehicle(player_ped_id(), 1))
					{
						if (!func_330(iParam1, iParam2, iParam3))
						{
							*iParam0.f_4 = get_game_timer();
							*iParam0.f_5 = 3;
						}
					}
					else if (!func_329(iParam1, iParam2, iParam3))
					{
						*iParam0.f_4 = get_game_timer();
						*iParam0.f_5 = 3;
					}
				}
				else if (*iParam0.f_6 == 1)
				{
					if (!func_329(iParam1, iParam2, iParam3))
					{
						*iParam0.f_4 = get_game_timer();
						*iParam0.f_5 = 3;
					}
				}
				else if (*iParam0.f_6 == 2)
				{
					if (!func_330(iParam1, iParam2, iParam3))
					{
						*iParam0.f_4 = get_game_timer();
						*iParam0.f_5 = 3;
					}
				}
			}
			else
			{
				*iParam0.f_5 = 2;
			}
			break;
		
		case 2:
			if (*iParam0.f_6 == 0)
			{
				if (is_ped_in_any_vehicle(player_ped_id(), 1))
				{
					if (!func_330(iParam1, iParam2, iParam3))
					{
						*iParam0.f_5 = 0;
					}
				}
				else if (!func_329(iParam1, iParam2, iParam3))
				{
					*iParam0.f_5 = 0;
				}
			}
			else if (*iParam0.f_6 == 1)
			{
				if (!func_329(iParam1, iParam2, iParam3) || is_ped_in_any_vehicle(player_ped_id(), 1))
				{
					*iParam0.f_5 = 0;
				}
			}
			else if (*iParam0.f_6 == 2)
			{
				if (!is_ped_in_any_vehicle(player_ped_id(), 1) || get_is_task_active(player_ped_id(), 2))
				{
					*iParam0.f_5 = 0;
				}
				else if (!func_330(iParam1, iParam2, iParam3))
				{
					*iParam0.f_5 = 0;
				}
			}
			break;
		
		case 3:
			if (get_game_timer() - *iParam0.f_4 > 500)
			{
				if (*iParam0.f_6 == 0)
				{
					if (is_ped_in_any_vehicle(player_ped_id(), 1))
					{
						if (func_328(iParam1, iParam2, iParam3))
						{
							*iParam0.f_5 = 0;
						}
					}
					else if (func_327(iParam1, iParam2, iParam3))
					{
						*iParam0.f_5 = 0;
					}
				}
				else if (*iParam0.f_6 == 1)
				{
					if (is_ped_in_any_vehicle(player_ped_id(), 1) || func_327(iParam1, iParam2, iParam3))
					{
						*iParam0.f_5 = 0;
					}
				}
				else if (*iParam0.f_6 == 2)
				{
					if (!is_ped_in_any_vehicle(player_ped_id(), 1) || get_is_task_active(player_ped_id(), 2))
					{
						*iParam0.f_5 = 0;
					}
					else if (func_328(iParam1, iParam2, iParam3))
					{
						*iParam0.f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_317(iParam0))
			{
				*iParam0.f_5 = 0;
			}
			break;
	}
	if (!func_321(iParam1, iParam2, iParam3))
	{
		*iParam0.f_5 = 0;
		*iParam0.f_7 = 0;
	}
	if (*iParam0.f_7)
	{
		func_332();
		return true;
	}
	else
	{
		return false;
	}
	return false;
}

bool func_327(int iParam0, int iParam1, int iParam2)
{
	if (!func_321(iParam0, iParam1, iParam2))
	{
		return false;
	}
	if (!is_ped_in_any_vehicle(player_ped_id(), 0))
	{
		if (!is_player_targetting_anything(player_id()))
		{
			disable_control_action(0, 140, 1);
			disable_control_action(0, 80, 1);
			if (is_disabled_control_just_released(0, 80))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_328(int iParam0, int iParam1, int iParam2)
{
	if (!func_321(iParam0, iParam1, iParam2))
	{
		return false;
	}
	if (is_ped_in_any_vehicle(player_ped_id(), 0))
	{
		disable_control_action(0, 80, 1);
		if (is_follow_vehicle_cam_active())
		{
			if (is_disabled_control_just_released(0, 80))
			{
				set_cinematic_button_active(false);
				return true;
			}
		}
	}
	return false;
}

bool func_329(int iParam0, int iParam1, int iParam2)
{
	if (!func_321(iParam0, iParam1, iParam2))
	{
		return false;
	}
	if (!is_ped_in_any_vehicle(player_ped_id(), 0))
	{
		if (!is_player_targetting_anything(player_id()))
		{
			disable_control_action(0, 140, 1);
			disable_control_action(0, 80, 1);
			if (is_disabled_control_pressed(0, 80) && get_game_timer() > Global_116)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_330(int iParam0, int iParam1, int iParam2)
{
	if (!func_321(iParam0, iParam1, iParam2))
	{
		return false;
	}
	if (is_ped_in_any_vehicle(player_ped_id(), 0))
	{
		disable_control_action(0, 80, 1);
		if (is_follow_vehicle_cam_active())
		{
			if (is_disabled_control_pressed(0, 80) && get_game_timer() > Global_116)
			{
				set_cinematic_button_active(false);
				return true;
			}
		}
	}
	return false;
}

bool func_331(int iParam0)
{
	if (does_entity_exist(iParam0))
	{
		if (is_entity_a_vehicle(iParam0))
		{
			if (is_vehicle_driveable(get_vehicle_index_from_entity_index(iParam0), 0))
			{
				return true;
			}
		}
		else if (is_entity_a_ped(iParam0))
		{
			if (!is_ped_injured(get_ped_index_from_entity_index(iParam0)))
			{
				return true;
			}
		}
		else if (is_entity_an_object(iParam0))
		{
			return true;
		}
	}
	return false;
}

void func_332()
{
	set_bit(&Global_2284, 4);
}

void func_333()
{
	if (is_vehicle_driveable(iLocal_67, 0) && func_334(1))
	{
		if (is_ped_in_vehicle(player_ped_id(), iLocal_67, 0))
		{
			if (does_blip_exist(iLocal_59))
			{
				remove_blip(&iLocal_59);
			}
			switch (iLocal_711)
			{
				case 0:
					if (!does_blip_exist(iLocal_58))
					{
						iLocal_58 = func_44(vLocal_119, 1);
						task_clear_look_at(iLocal_51);
						task_clear_look_at(uLocal_313[2]);
						task_clear_look_at(player_ped_id());
					}
					if (is_ped_sitting_in_vehicle(player_ped_id(), iLocal_67))
					{
						if (is_entity_in_angled_area(player_ped_id(), -86.59003f, 6420.465f, 30.21417f, -91.02832f, 6416.428f, 34.71599f, 5.5f, 0, true, 0) || is_entity_at_coord(player_ped_id(), -89.0773f, 6420.377f, 31.0252f, 1f, 1f, 2.5f, true, true, 0))
						{
							vLocal_164 = {vLocal_152};
							remove_blip(&iLocal_58);
							iLocal_711++;
						}
						if (is_entity_in_angled_area(player_ped_id(), vLocal_269, vLocal_272, fLocal_275, 0, true, 0) && get_entity_speed(iLocal_67) < 0.1f)
						{
							vLocal_164 = {vLocal_152};
							remove_blip(&iLocal_58);
							iLocal_711 = 2;
						}
					}
					break;
				
				case 1:
					if (func_30(iLocal_67, 3f, 3, 1056964608, 0, 1, 0))
					{
						iLocal_711++;
					}
					break;
				
				case 2:
					if (does_entity_exist(iLocal_64))
					{
						if (!is_ped_headtracking_entity(iLocal_51, iLocal_64))
						{
							task_look_at_coord(iLocal_51, vLocal_152, -1, 16, 4);
						}
						if (!is_ped_headtracking_entity(uLocal_313[2], iLocal_64))
						{
							task_look_at_coord(uLocal_313[2], vLocal_152, -1, 16, 4);
						}
						if (!is_ped_headtracking_entity(player_ped_id(), iLocal_64))
						{
							task_look_at_coord(player_ped_id(), vLocal_152, -1, 16, 4);
						}
					}
					if (!is_entity_in_angled_area(player_ped_id(), vLocal_269, vLocal_272, fLocal_275, 0, true, 0))
					{
						iLocal_711 = 0;
					}
					break;
			}
		}
		else
		{
			if (does_blip_exist(iLocal_58))
			{
				remove_blip(&iLocal_58);
			}
			if (!does_blip_exist(iLocal_59))
			{
				iLocal_59 = func_40(iLocal_67, 0, 0);
				func_85(&Local_539);
			}
			func_340();
		}
	}
}

int func_334(int iParam0)
{
	if (iParam0)
	{
		return ((is_vehicle_driveable(iLocal_67, 0) && !is_ped_injured(uLocal_313[2])) && !is_ped_injured(iLocal_51));
	}
	else
	{
		return (is_vehicle_driveable(iLocal_67, 0) && !is_ped_injured(uLocal_313[2]));
	}
	return false;
}

void func_335()
{
	int iVar0;
	struct<6> Var1;
	
	if (iLocal_267 == -1)
	{
		if (Local_535.f_1)
		{
			iLocal_267 = get_game_timer();
		}
	}
	iLocal_239 = get_game_timer() - iLocal_267 < 5000;
	if (((get_game_timer() - iLocal_259 > 5000 && func_339()) && !is_ped_injured(uLocal_313[2])) && !is_ped_injured(iLocal_51))
	{
		if (((is_vehicle_driveable(iLocal_67, 0) && is_ped_in_vehicle(player_ped_id(), iLocal_67, 0)) && !iLocal_230) && !iLocal_238)
		{
			iVar0 = true;
		}
		else
		{
			iVar0 = false;
		}
		if (func_43())
		{
			Var1 = {func_338()};
		}
		switch (iLocal_263)
		{
			case 0:
				request_vehicle_recording(true, sLocal_277);
				request_vehicle_recording(2, sLocal_277);
				request_vehicle_recording(3, sLocal_277);
				request_vehicle_recording(4, sLocal_277);
				func_337("RBS1_HIDE1", iVar0, get_game_timer() - iLocal_259, 5000, 6000);
				if (!func_43() && get_game_timer() - iLocal_259 > 0)
				{
					iLocal_663 = false;
					iLocal_662 = 0;
					StringCopy(&cLocal_664, "", 24);
					iLocal_263++;
				}
				break;
			
			case 1:
				func_337("RBS1_HIDE2", iVar0, get_game_timer() - iLocal_259, 18000, 20000);
				if ((!func_43() || iLocal_663) && get_game_timer() - iLocal_259 > 20000)
				{
					iLocal_663 = false;
					iLocal_662 = 0;
					StringCopy(&cLocal_664, "", 24);
					iLocal_709 = 0;
					iLocal_263++;
				}
				break;
			
			case 2:
				func_337("RBS1_HIDE3", iVar0, get_game_timer() - iLocal_259, 35000, 39000);
				if (!iLocal_709 && iLocal_662)
				{
					if (!is_entity_playing_anim(uLocal_313[2], "missrbhsig_2", "four_cars_trevor", 3))
					{
						task_play_anim(uLocal_313[2], "missrbhsig_2", "four_cars_trevor", 2f, -2f, -1, 0, 0, 0, 0, 0);
					}
					if (!is_entity_playing_anim(iLocal_51, "missrbhsig_2", "four_cars_lester", 3))
					{
						task_play_anim(iLocal_51, "missrbhsig_2", "four_cars_lester", 2f, -2f, -1, 0, 0, 0, 0, 0);
					}
					if (is_entity_playing_anim(uLocal_313[2], "missrbhsig_2", "four_cars_trevor", 3) && is_entity_playing_anim(iLocal_51, "missrbhsig_2", "four_cars_Lester", 3))
					{
						iLocal_709 = 1;
					}
				}
				if ((!func_43() || iLocal_663) && get_game_timer() - iLocal_259 > 39000)
				{
					iLocal_663 = false;
					iLocal_662 = 0;
					StringCopy(&cLocal_664, "", 24);
					iLocal_709 = 0;
					iLocal_263++;
				}
				break;
			
			case 3:
				func_337("RBS1_HIDE4", iVar0, get_game_timer() - iLocal_259, 59000, 59000);
				if (!iLocal_709 && iLocal_662)
				{
					if (!is_entity_playing_anim(uLocal_313[2], "missrbhsig_2", "what_do_you_got_trevor", 3))
					{
						task_play_anim(uLocal_313[2], "missrbhsig_2", "what_do_you_got_trevor", 2f, -2f, -1, 0, 0, 0, 0, 0);
					}
					if (!is_entity_playing_anim(iLocal_51, "missrbhsig_2", "what_do_you_got_lester", 3))
					{
						task_play_anim(iLocal_51, "missrbhsig_2", "what_do_you_got_lester", 2f, -2f, -1, 0, 0, 0, 0, 0);
					}
					if (is_entity_playing_anim(uLocal_313[2], "missrbhsig_2", "what_do_you_got_trevor", 3) && is_entity_playing_anim(iLocal_51, "missrbhsig_2", "what_do_you_got_Lester", 3))
					{
						iLocal_709 = 1;
					}
				}
				if ((!func_43() || iLocal_663) && get_game_timer() - iLocal_259 > 59000)
				{
					iLocal_663 = false;
					iLocal_662 = 0;
					iLocal_709 = 0;
					StringCopy(&cLocal_664, "", 24);
					iLocal_263++;
				}
				break;
			
			case 4:
				break;
		}
	}
	else if (!func_339() && iLocal_263 > 1)
	{
		if (get_game_timer() - iLocal_264 > 5000 && !iLocal_239)
		{
			if (func_6(&Local_360, sLocal_276, "RBS1_CNTSEE", 8, 0, 0, 0))
			{
				iLocal_264 = get_game_timer();
			}
		}
	}
	if ((iLocal_230 && (iLocal_663 || func_336())) && !iLocal_231)
	{
		func_46();
		if (func_6(&Local_360, sLocal_276, "RBS1_HOTTY", 8, 0, 0, 0))
		{
			iLocal_231 = 1;
		}
	}
	if ((is_entity_in_angled_area(player_ped_id(), -77.35259f, 6418.271f, 25.79452f, -165.4273f, 6505.104f, 33.55246f, 100f, 0, true, 0) && get_game_timer() - iLocal_262 > 5000) && !func_43())
	{
		if (is_player_pressing_horn(player_id()) || (is_ped_shooting(player_ped_id()) && !iLocal_239))
		{
			func_6(&Local_360, sLocal_276, "RBS1_MESS", 8, 0, 0, 0);
			iLocal_262 = get_game_timer();
		}
	}
}

bool func_336()
{
	int iVar0;
	
	iVar0 = get_game_timer();
	if (Global_15712 == 0)
	{
		if (iVar0 - Global_16734 > 3000)
		{
			if (is_scripted_conversation_ongoing() == 0)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	return false;
}

void func_337(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (iParam1)
	{
		if (!iLocal_662)
		{
			if (iParam2 < iParam3)
			{
				if (!is_message_being_displayed())
				{
					if (func_6(&Local_360, sLocal_276, sParam0, 8, 0, 0, 0))
					{
						iLocal_663 = false;
						iLocal_662 = 1;
					}
				}
			}
		}
		if (iLocal_663)
		{
			if (iParam2 < iParam4)
			{
				if (!is_message_being_displayed())
				{
					if (func_241(&Local_360, sLocal_276, sParam0, &cLocal_664, 8, 0, 0))
					{
						iLocal_663 = false;
					}
				}
			}
		}
	}
	if (!iParam1)
	{
		if (!iLocal_663)
		{
			cLocal_664 = {func_240()};
			func_46();
			iLocal_663 = true;
		}
	}
}

struct<6> func_338()
{
	char[24] cVar0;
	
	StringCopy(&cVar0, "NULL", 24);
	if (Global_15712 == 4)
	{
		return Global_15331;
	}
	return cVar0;
}

int func_339()
{
	return (is_vehicle_driveable(iLocal_67, 0) && ((is_entity_in_angled_area(iLocal_67, -113.9146f, 6415.774f, 20.92422f, -151.9467f, 6377.942f, 51.45014f, 50.75f, 0, true, 0) || is_entity_in_angled_area(iLocal_67, -158.9227f, 6484.175f, 19.42225f, -89.31187f, 6412.26f, 57.34415f, 50.75f, 0, true, 0)) || is_entity_in_angled_area(iLocal_67, -135.8324f, 6496.841f, -8.871904f, -124.4626f, 6508.426f, 56.73236f, 14.5f, 0, true, 0)));
}

void func_340()
{
	if (!is_entity_in_angled_area(iLocal_67, vLocal_269, vLocal_272, fLocal_275, 0, true, 0))
	{
		if (!is_message_being_displayed() && !is_ped_injured(iLocal_51))
		{
			if (get_game_timer() - iLocal_661 > 5000 && vdist(get_entity_coords(player_ped_id(), 1), get_entity_coords(iLocal_51, 1)) < 15f)
			{
				if (func_6(&Local_360, sLocal_276, "RBS1_GETIN", 8, 0, 0, 0))
				{
					iLocal_661 = get_game_timer();
				}
			}
		}
	}
}

void func_341(int iParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (iParam1)
	{
		switch (iParam0)
		{
			case 0:
				vVar0 = {Vector(146.0607f, 4927.538f, -491.5252f) - Vector(20f, 50f, 50f)};
				vVar3 = {Vector(146.0607f, 4927.538f, -491.5252f) + Vector(20f, 50f, 50f)};
				break;
			
			case 1:
				vVar0 = {vLocal_152 - Vector(10f, 20f, 20f)};
				vVar3 = {vLocal_152 + Vector(20f, 20f, 20f)};
				break;
			
			case 2:
				vVar0 = {Vector(28.28359f, 6508.671f, -120.0073f) - Vector(1.75f, 32.5f, 19.75f)};
				vVar3 = {Vector(28.28359f, 6508.671f, -120.0073f) + Vector(1.75f, 32.5f, 19.75f)};
				break;
			
			case 3:
				vVar0 = {vLocal_123 - Vector(100f, 50f, 50f)};
				vVar3 = {vLocal_123 + Vector(100f, 50f, 50f)};
				break;
			
			case 4:
				vVar0 = {vLocal_119 - Vector(15f, 35f, 35f)};
				vVar3 = {vLocal_119 + Vector(15f, 35f, 35f)};
				break;
			
			case 5:
				vVar0 = {vLocal_108 - Vector(10f, 10f, 10f)};
				vVar0 = {vLocal_108 + Vector(10f, 10f, 10f)};
				break;
		}
		if (!func_342(iParam0))
		{
			iLocal_85[iParam0] = add_scenario_blocking_area(vVar0, vVar3, 0, 1, 1, 1);
			set_bit(&iLocal_92, iParam0);
		}
	}
	else if (func_342(iParam0))
	{
		remove_scenario_blocking_area(iLocal_85[iParam0], 0);
		clear_bit(&iLocal_92, iParam0);
	}
}

int func_342(int iParam0)
{
	return is_bit_set(iLocal_92, iParam0);
}

void func_343()
{
	int iVar0;
	
	if (!is_entity_in_angled_area(player_ped_id(), -201.0272f, 6374.652f, 28.04661f, -41.19576f, 6532.621f, 40.49076f, 157.75f, 0, true, 0))
	{
		clear_prints();
		func_87();
		wait(false);
		func_88("CBH_LFTAREA");
	}
	if (!iLocal_710)
	{
		iVar0 = 0;
		while (iVar0 < Local_547)
		{
			if (is_vehicle_driveable(Local_547[iVar0 /*9*/].f_3, 0))
			{
				if (is_entity_in_angled_area(Local_547[iVar0 /*9*/].f_3, -145.0855f, 6484.485f, 27.72799f, -92.52125f, 6431.291f, 40.35595f, 58f, 0, true, 0))
				{
					iLocal_710 = 1;
				}
			}
			iVar0++;
		}
	}
	else if (!is_entity_in_angled_area(player_ped_id(), vLocal_269, vLocal_272, fLocal_275, 0, true, 0) || !is_entity_in_angled_area(iLocal_67, vLocal_269, vLocal_272, fLocal_275, 0, true, 0))
	{
		if (iLocal_50 == 0)
		{
			if (func_344(player_ped_id()))
			{
				iLocal_50 = 2;
			}
		}
		if (iLocal_50 == 0)
		{
			if (func_344(iLocal_67))
			{
				iLocal_50 = 3;
			}
		}
		if (iLocal_50 == 0)
		{
			if (!is_entity_in_angled_area(player_ped_id(), vLocal_269, vLocal_272, fLocal_275, 0, true, 0))
			{
				func_88("CBH_COPMISS");
			}
			else if (!is_entity_in_angled_area(iLocal_67, vLocal_269, vLocal_272, fLocal_275, 0, true, 0))
			{
				func_88("CBH_COPMILT");
			}
		}
	}
	if (func_183(iLocal_67, 0))
	{
		clear_prints();
		func_25();
		if (iLocal_232)
		{
			iLocal_50 = 2;
		}
		else
		{
			iLocal_50 = 1;
		}
	}
	if (func_84(uLocal_313[2], &Local_543))
	{
		clear_prints();
		func_25();
		func_88("CBH_AB2BOTH");
	}
	if (iLocal_232)
	{
		if (!is_entity_in_angled_area(player_ped_id(), vLocal_269, vLocal_272, fLocal_275, 0, true, 0) || !is_entity_in_angled_area(iLocal_67, vLocal_269, vLocal_272, fLocal_275, 0, true, 0))
		{
			if (is_entity_in_angled_area(iLocal_67, -104.1284f, 6385.127f, 22.43802f, -54.79927f, 6433.795f, 61.37744f, 26.75f, 0, true, 0) || is_entity_in_angled_area(player_ped_id(), -104.1284f, 6385.127f, 22.43802f, -54.79927f, 6433.795f, 61.37744f, 26.75f, 0, true, 0))
			{
				func_88("CBH_LFTAREA");
			}
		}
	}
	if (is_entity_in_angled_area(player_ped_id(), vLocal_269, vLocal_272, fLocal_275, 0, true, 0))
	{
		if (is_ped_armed(player_ped_id(), 4) && is_ped_shooting(player_ped_id()))
		{
			set_player_wanted_level(player_id(), true, 0);
			set_player_wanted_level_now(player_id(), 0);
			iLocal_50 = 2;
		}
	}
	if (get_player_wanted_level(player_id()) > 0)
	{
		iLocal_50 = 2;
	}
	if (does_entity_exist(iLocal_357))
	{
		if (does_entity_exist(iLocal_358))
		{
			if (((!is_ped_injured(iLocal_357) && is_vehicle_driveable(iLocal_358, 0)) && has_entity_been_damaged_by_entity(iLocal_358, player_ped_id(), 1)) && (is_ped_in_vehicle(iLocal_357, iLocal_358, 0) || is_entity_at_entity(iLocal_357, iLocal_358, 5f, 5f, 3f, 0, 1, 0)))
			{
				iLocal_50 = 4;
			}
			if (has_entity_been_damaged_by_entity(iLocal_357, player_ped_id(), 1) && !is_entity_dead(iLocal_357, 0))
			{
				iLocal_50 = 4;
			}
		}
	}
	if (is_vehicle_driveable(iLocal_358, 0))
	{
		if (is_vehicle_alarm_activated(iLocal_358))
		{
			if (iLocal_232)
			{
				iLocal_50 = 2;
			}
			else
			{
				iLocal_50 = 1;
			}
		}
	}
	if (iLocal_50 != 0)
	{
		func_28(11);
	}
}

bool func_344(int iParam0)
{
	if (does_entity_exist(iParam0))
	{
		if (is_entity_in_angled_area(iParam0, -90.57478f, 6424.711f, 40.48994f, -170.8789f, 6505.736f, 28.48912f, 69f, 0, true, 0) && !is_entity_in_angled_area(iParam0, -168.8253f, 6502.429f, 39.78346f, -206.7632f, 6527.751f, 10.09798f, 69f, 0, true, 0))
		{
			return true;
		}
	}
	return false;
}

void func_345()
{
	int iVar0;
	int[] iVar1 = new int[4];
	int iVar6;
	int iVar7;
	
	set_vehicle_density_multiplier_this_frame(0f);
	set_parked_vehicle_density_multiplier_this_frame(0f);
	set_scenario_ped_density_multiplier_this_frame(0f, 0f);
	func_297();
	if (does_entity_exist(Local_584))
	{
		if (((((has_entity_been_damaged_by_entity(Local_584, player_ped_id(), 1) || is_explosion_in_angled_area(0, get_offset_from_entity_in_world_coords(Local_584, 0f, 1.5f, -1.5f), get_offset_from_entity_in_world_coords(Local_584, 0f, 1.5f, 1.5f), 3f)) || is_explosion_in_angled_area(1, get_offset_from_entity_in_world_coords(Local_584, 0f, 1.5f, -1.5f), get_offset_from_entity_in_world_coords(Local_584, 0f, 1.5f, 1.5f), 3f)) || is_explosion_in_angled_area(2, get_offset_from_entity_in_world_coords(Local_584, 0f, 1.5f, -1.5f), get_offset_from_entity_in_world_coords(Local_584, 0f, 1.5f, 1.5f), 3f)) || is_explosion_in_angled_area(3, get_offset_from_entity_in_world_coords(Local_584, 0f, 1.5f, -1.5f), get_offset_from_entity_in_world_coords(Local_584, 0f, 1.5f, 1.5f), 3f)) || is_explosion_in_angled_area(25, get_offset_from_entity_in_world_coords(Local_584, 0f, 1.5f, -1.5f), get_offset_from_entity_in_world_coords(Local_584, 0f, 1.5f, 1.5f), 3f))
		{
			Local_584.f_13 += Local_584.f_14 - get_entity_health(Local_584);
			clear_entity_last_damage_entity(Local_584);
			Local_584.f_14 = get_entity_health(Local_584);
		}
	}
	if (get_player_wanted_level(player_id()) > 0)
	{
		func_88("CBH_BANKALERT");
	}
	if (does_cam_exist(iLocal_69))
	{
		iVar0 = false;
		func_352(&(iVar1[0]), &(iVar1[1]), &(iVar1[2]), &(iVar1[3]), 0, 0);
		iVar6 = 0;
		while (iVar6 < iVar1)
		{
			if (absi(iVar1[iVar6]) > 0)
			{
				iVar0 = true;
			}
			iVar6++;
		}
		if ((((((((((is_control_just_pressed(0, 23) || is_control_just_pressed(0, 24)) || is_control_just_pressed(0, 25)) || is_control_just_pressed(0, 27)) || is_control_just_pressed(0, 28)) || is_control_just_pressed(0, 29)) || is_control_just_pressed(0, 36)) || is_control_just_pressed(0, 37)) || is_control_just_pressed(0, 44)) || is_control_just_pressed(0, 45)) || is_control_just_pressed(0, 47))
		{
			iVar0 = true;
		}
		if (iVar0)
		{
			set_player_control(player_id(), true, 0);
			set_gameplay_cam_relative_heading(1.5552f);
			set_gameplay_cam_relative_pitch(-2.8327f, 1f);
			render_script_cams(false, true, 3000, 1, 0, 0);
			destroy_cam(iLocal_69, 0);
		}
	}
	else
	{
		func_350(&Local_96, vLocal_158, 0, 1726668277, 1, 0, 1);
	}
	if (is_vehicle_driveable(iLocal_67, 0) && does_entity_exist(Local_584))
	{
		if (!func_75() && !does_cam_exist(iLocal_69))
		{
			func_294(500);
			func_28(9);
		}
		else
		{
			if (vdist2(get_entity_coords(player_ped_id(), 1), vLocal_131) <= 10000f)
			{
				suppress_shocking_events_next_frame();
				if (!does_blip_exist(iLocal_62))
				{
					iLocal_62 = func_349(Local_584);
					set_blip_name_from_text_file(iLocal_62, "CBH_BLIPALARM");
					iLocal_688 = 0;
					set_blip_as_friendly(iLocal_62, false);
				}
				if (does_blip_exist(iLocal_59))
				{
					remove_blip(&iLocal_59);
				}
				if (iLocal_254 > 0)
				{
					if (func_271("CBH_FCUSALM"))
					{
						if (is_gameplay_hint_active() || Local_96.f_1)
						{
							clear_help(1);
						}
					}
				}
				switch (iLocal_254)
				{
					case 0:
						iLocal_265 = get_game_timer();
						if (!is_ped_injured(uLocal_313[2]))
						{
							task_look_at_entity(uLocal_313[2], player_ped_id(), -1, 0, 2);
						}
						if (!is_ped_injured(iLocal_51))
						{
							task_look_at_entity(iLocal_51, player_ped_id(), -1, 0, 2);
						}
						func_319("CBH_FCUSALM", -1);
						func_294(500);
						iLocal_254++;
						set_wanted_level_multiplier(0f);
						settimera(false);
						break;
					
					case 1:
						if (!func_43())
						{
							settimera(false);
							iLocal_254++;
						}
						break;
					
					case 2:
						if (timera() > 1000)
						{
							func_85(&Local_533);
							start_audio_scene("PS_1_SHOOT_THE_ALARM");
							settimera(false);
							_0x293220DA1B46CEBC(5f, 6f, 4);
							iLocal_254++;
						}
						break;
					
					case 3:
						if (timera() > 5000)
						{
							iLocal_254++;
						}
						break;
					
					case 4:
						if (vdist2(get_entity_coords(player_ped_id(), 1), get_entity_coords(iLocal_67, 1)) <= 625f)
						{
							if (is_ped_in_vehicle(player_ped_id(), iLocal_67, 0))
							{
								if (!is_entity_in_angled_area(player_ped_id(), -125.8731f, 6486.835f, 25.79036f, -156.4628f, 6518.318f, 35.25981f, 55f, 0, true, 0))
								{
									if (get_game_timer() - iLocal_265 > 7500)
									{
										if (func_6(&Local_360, sLocal_276, "RBS1_GOBACK", 8, 0, 0, 0))
										{
											iLocal_265 = get_game_timer();
										}
									}
								}
								else if (get_game_timer() - iLocal_265 > 7500)
								{
									if (func_6(&Local_360, sLocal_276, "RBS1_GETOUT", 8, 0, 0, 0))
									{
										iLocal_265 = get_game_timer();
									}
								}
							}
							else if (func_4())
							{
								if (!iLocal_689)
								{
									if (get_game_timer() - iLocal_265 > 15000)
									{
										if (func_6(&Local_360, sLocal_276, "RBS1_SHOOT", 8, 0, 0, 0))
										{
											iLocal_265 = get_game_timer();
										}
									}
								}
								else if (get_game_timer() - iLocal_265 > 7500)
								{
									if (func_6(&Local_360, sLocal_276, "RBS1_MISS", 8, 0, 0, 0))
									{
										iLocal_265 = get_game_timer();
										iLocal_689 = 0;
									}
								}
							}
							else if (get_game_timer() - iLocal_265 > 7500)
							{
								if (func_6(&Local_360, sLocal_276, "RBS1_CLOSE", 8, 0, 0, 0))
								{
									iLocal_265 = get_game_timer();
								}
							}
						}
						break;
				}
				get_current_ped_weapon(player_ped_id(), &iVar7, 1);
				if (is_ped_shooting(player_ped_id()) && iVar7 != joaat("weapon_petrolcan"))
				{
					iLocal_268++;
					if (!Local_584.f_9)
					{
						if (!iLocal_689)
						{
							iLocal_689 = 1;
						}
					}
				}
				if (iLocal_268 > 20 && !Local_584.f_9)
				{
					set_player_wanted_level(player_id(), 2, 0);
					set_player_wanted_level_now(player_id(), 0);
					func_88("CBH_BNKFAIL");
				}
			}
			else
			{
				if (vdist2(get_entity_coords(player_ped_id(), 1), vLocal_131) > 16900f)
				{
					clear_prints();
					func_25();
					func_88("CBH_LFTAREA");
				}
				if (is_ped_in_vehicle(player_ped_id(), iLocal_67, 0))
				{
					if (get_game_timer() - iLocal_265 > 7500)
					{
						if (func_6(&Local_360, sLocal_276, "RBS1_GOBACK", 8, 0, 0, 0))
						{
							iLocal_265 = get_game_timer() + get_random_int_in_range(-1000, 1000);
						}
					}
				}
				if (!iLocal_688)
				{
					if (!is_message_being_displayed())
					{
						func_45("CBH_SHTBOX2", 7500, 1);
						iLocal_688 = 1;
					}
				}
			}
			if (func_334(1))
			{
				if (Local_584.f_9 && does_entity_exist(Local_584))
				{
					_0x293220DA1B46CEBC(5f, 6f, 4);
					clear_prints();
					func_25();
					if (!is_ped_injured(uLocal_313[2]))
					{
						task_look_at_entity(uLocal_313[2], player_ped_id(), -1, 16, 2);
					}
					if (!is_ped_injured(iLocal_51))
					{
						task_look_at_entity(iLocal_51, player_ped_id(), -1, 16, 2);
					}
					if (does_blip_exist(iLocal_62))
					{
						func_2(&iLocal_62);
					}
					func_346(6, 1, 0);
					func_270(&Local_96, "CBH_FCUSALM", 0);
					set_ped_paths_in_area(-135.3092f, 6479.615f, 32.653f, 11.75f, 6.75f, 4.5f, true, 0);
					set_ped_paths_in_area(-134.3872f, 6492.855f, 30.95585f, 11.75f, 6.75f, 4.5f, true, 0);
					set_ped_paths_in_area(-134.5053f, 6507.014f, 30.96668f, 11.75f, 6.75f, 4.5f, true, 0);
					set_ped_paths_in_area(-135.3438f, 6520.587f, 30.74896f, 11.75f, 6.75f, 4.5f, true, 0);
					set_ped_paths_in_area(-116.3026f, 6492.045f, 33.90546f, 18f, 19.25f, 5.75f, true, 0);
					clear_player_wanted_level(player_id());
					func_28(6);
				}
			}
		}
	}
}

int func_346(int iParam0, int iParam1, int iParam2)
{
	int[] iVar0 = new int[15];
	int iVar16;
	int[] iVar17 = new int[15];
	int[] iVar33 = new int[6];
	int iVar40;
	
	iVar0[0] = joaat("player_two");
	iVar0[1] = joaat("a_m_m_salton_02");
	iVar0[2] = joaat("premier");
	iVar0[3] = joaat("prop_ld_alarm_01");
	iVar0[4] = joaat("sheriff");
	iVar0[5] = joaat("s_m_y_cop_01");
	iVar0[6] = joaat("bus");
	iVar0[7] = joaat("s_m_m_lsmetro_01");
	iVar0[8] = joaat("prop_ld_alarm_01_dam");
	iVar0[9] = joaat("a_m_m_business_01");
	iVar0[10] = joaat("a_f_y_business_01");
	iVar16 = 0;
	while (iVar16 < iVar17)
	{
		iVar17[iVar16] = 0;
		iVar16++;
	}
	iVar16 = 0;
	while (iVar16 < iVar33)
	{
		iVar33[iVar16] = 0;
		iVar16++;
	}
	switch (iParam0)
	{
		case 0:
			iVar17[0] = joaat("player_two");
			iVar17[1] = joaat("premier");
			iVar17[2] = joaat("prop_ld_alarm_01");
			iVar17[3] = func_348(12);
			break;
		
		case 1:
			iVar17[0] = joaat("player_two");
			iVar17[1] = joaat("premier");
			iVar17[2] = joaat("prop_ld_alarm_01");
			iVar17[4] = func_348(12);
			break;
		
		case 2:
			iVar17[0] = joaat("player_two");
			iVar17[1] = joaat("bus");
			iVar17[2] = joaat("s_m_m_lsmetro_01");
			iVar17[3] = joaat("premier");
			iVar17[4] = joaat("prop_ld_alarm_01");
			iVar17[5] = func_348(12);
			break;
		
		case 3:
			iVar17[0] = joaat("player_two");
			iVar17[1] = joaat("a_m_m_salton_02");
			iVar17[2] = joaat("bus");
			iVar17[3] = joaat("s_m_m_lsmetro_01");
			iVar17[4] = joaat("premier");
			iVar17[5] = joaat("prop_ld_alarm_01");
			iVar17[6] = func_348(12);
			break;
		
		case 4:
			iVar17[0] = joaat("player_two");
			iVar17[1] = joaat("premier");
			iVar17[2] = joaat("prop_ld_alarm_01");
			iVar17[3] = func_348(12);
			break;
		
		case 5:
			iVar17[0] = joaat("player_two");
			iVar17[1] = joaat("premier");
			iVar17[2] = joaat("prop_ld_alarm_01");
			iVar17[3] = joaat("prop_ld_alarm_01_dam");
			iVar17[4] = func_348(12);
			break;
		
		case 6:
			iVar17[0] = joaat("player_two");
			iVar17[1] = joaat("premier");
			iVar17[2] = joaat("sheriff");
			iVar17[3] = joaat("s_m_y_cop_01");
			iVar17[4] = joaat("prop_ld_alarm_01_dam");
			iVar17[5] = joaat("a_m_m_business_01");
			iVar17[6] = joaat("a_f_y_business_01");
			iVar17[7] = func_348(12);
			iVar33[0] = 1;
			iVar33[1] = 2;
			iVar33[2] = 3;
			iVar33[3] = 4;
			break;
		
		case 7:
			iVar17[0] = joaat("player_two");
			iVar17[1] = joaat("premier");
			iVar17[2] = joaat("sheriff");
			iVar17[3] = joaat("s_m_y_cop_01");
			iVar17[4] = joaat("prop_ld_alarm_01_dam");
			iVar17[5] = joaat("a_m_m_business_01");
			iVar17[6] = joaat("a_f_y_business_01");
			iVar17[7] = func_348(12);
			iVar33[0] = 1;
			iVar33[1] = 2;
			iVar33[2] = 3;
			iVar33[3] = 4;
			break;
	}
	if (iParam1)
	{
		iVar40 = 1;
		iVar16 = 0;
		while (iVar16 < iVar17)
		{
			if (iVar17[iVar16] != 0)
			{
				request_model(iVar17[iVar16]);
				if (!has_model_loaded(iVar17[iVar16]))
				{
					iVar40 = 0;
				}
			}
			iVar16++;
		}
		iVar16 = 0;
		while (iVar16 < iVar33)
		{
			if (iVar33[iVar16] != 0)
			{
				request_vehicle_recording(iVar33[iVar16], sLocal_277);
				if (!has_vehicle_recording_been_loaded(iVar33[iVar16], sLocal_277))
				{
					iVar40 = 0;
				}
			}
			iVar16++;
		}
		return iVar40;
	}
	if (iParam2)
	{
		iVar16 = 0;
		while (iVar16 < iVar0)
		{
			if (!func_347(iVar0[iVar16], &iVar17))
			{
				set_model_as_no_longer_needed(iVar0[iVar16]);
			}
			iVar16++;
		}
	}
	return 0;
}

int func_347(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = false;
	iVar0 = 0;
	while (iVar0 < *iParam1)
	{
		if (!iVar1)
		{
			if (iParam0 == *iParam1[iVar0])
			{
				iVar1 = true;
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_348(int iParam0)
{
	if (!func_147(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_349(int iParam0)
{
	return func_41(iParam0, 1, 0);
}

void func_350(int iParam0, vector3 vParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (*iParam0.f_1 && is_gameplay_hint_active())
	{
		if (get_game_timer() >= *iParam0.f_8 + *iParam0.f_9)
		{
			*iParam0.f_1 = 0;
		}
	}
	iVar0 = iParam4;
	if (is_string_null(iVar0))
	{
		if (!network_is_game_in_progress())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_271(iVar0))
	{
		func_332();
	}
	if (!is_gameplay_hint_active())
	{
		if (func_326(iParam0, iParam6, iParam8, 0))
		{
			func_351(iParam0, vParam1, iParam5);
		}
		if (*iParam0)
		{
			*iParam0 = 0;
		}
		else if (*iParam0.f_6 == 2)
		{
			if (func_320(iVar0))
			{
				if ((is_string_null(*iParam0.f_3) && !is_string_null(iVar0)) && is_ped_in_any_vehicle(player_ped_id(), 0))
				{
					if ((is_sphere_visible(vParam1, 1f) && !is_help_message_being_displayed()) && iParam7)
					{
						if (!func_271(iVar0))
						{
							func_319(iVar0, -1);
							*iParam0.f_3 = iVar0;
							if (are_strings_equal("CMN_HINT", iVar0))
							{
								func_318(1);
							}
						}
					}
				}
			}
		}
		else if (func_320(iVar0))
		{
			if (is_string_null(*iParam0.f_3) && !is_string_null(iVar0))
			{
				if ((is_sphere_visible(vParam1, 1f) && !is_help_message_being_displayed()) && iParam7)
				{
					if (!func_271(iVar0))
					{
						func_319(iVar0, -1);
						*iParam0.f_3 = iVar0;
						if (are_strings_equal("CMN_HINT", iVar0))
						{
							func_318(1);
						}
					}
				}
			}
		}
	}
	else
	{
		if (!is_string_null(iVar0))
		{
			if (func_271(iVar0) && is_help_message_being_displayed())
			{
				clear_help(1);
			}
		}
		if (is_ped_in_any_vehicle(player_ped_id(), 1))
		{
			if (is_ped_in_any_boat(player_ped_id()))
			{
				if (_0xEE778F8C7E1142E2(3) == 3 || _0xEE778F8C7E1142E2(3) == 4)
				{
					func_270(iParam0, iVar0, 1);
				}
			}
			else if (is_ped_in_any_heli(player_ped_id()))
			{
				if (_0xEE778F8C7E1142E2(6) == 3 || _0xEE778F8C7E1142E2(6) == 4)
				{
					func_270(iParam0, iVar0, 1);
				}
			}
			else if (is_ped_in_any_plane(player_ped_id()))
			{
				if (_0xEE778F8C7E1142E2(4) == 3 || _0xEE778F8C7E1142E2(4) == 4)
				{
					func_270(iParam0, iVar0, 1);
				}
			}
			else if (is_ped_in_any_sub(player_ped_id()))
			{
				if (_0xEE778F8C7E1142E2(5) == 3 || _0xEE778F8C7E1142E2(5) == 4)
				{
					func_270(iParam0, iVar0, 1);
				}
			}
			else if (is_ped_on_any_bike(player_ped_id()))
			{
				if (_0xEE778F8C7E1142E2(2) == 3 || _0xEE778F8C7E1142E2(2) == 4)
				{
					func_270(iParam0, iVar0, 1);
				}
			}
			else if (get_follow_vehicle_cam_view_mode() == 3 || get_follow_vehicle_cam_view_mode() == 4)
			{
				func_270(iParam0, iVar0, 1);
			}
		}
		if (!func_326(iParam0, iParam6, iParam8, 0))
		{
			if ((!*iParam0 && !*iParam0.f_1) && !func_317(iParam0))
			{
				func_316(iParam0);
			}
		}
	}
}

void func_351(var uParam0, vector3 vParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	set_cinematic_button_active(false);
	iVar0 = *uParam0.f_9;
	iVar1 = *uParam0.f_10;
	if (iParam4 == 1726668277)
	{
		if (iVar0 < 1500)
		{
			iVar0 = 1500;
		}
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
	}
	set_gameplay_coord_hint(vParam1, -1, iVar0, iVar1, iParam4);
	iVar2 = 2048;
	iVar3 = 3;
	task_look_at_coord(player_ped_id(), vParam1, -1, iVar2, iVar3);
	_start_screen_effect("FocusIn", false, 0);
	start_audio_scene("HINT_CAM_SCENE");
	play_sound_frontend(-1, "FocusIn", "HintCamSounds", 1);
	*uParam0.f_11 = 1;
	*uParam0.f_8 = get_game_timer();
	*uParam0.f_1 = 1;
	*uParam0 = 0;
}

void func_352(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	*uParam0 = floor(_0x5B84D09CEC5209C5(2, 218) * 127f);
	*uParam1 = floor(_0x5B84D09CEC5209C5(2, 219) * 127f);
	*uParam2 = floor(_0x5B84D09CEC5209C5(2, 220) * 127f);
	*uParam3 = floor(_0x5B84D09CEC5209C5(2, 221) * 127f);
	if (iParam4)
	{
		if (!is_control_enabled(2, 218))
		{
			*uParam0 = floor(_0x4F8A26A890FD62FB(2, 218) * 127f);
		}
		if (!is_control_enabled(2, 219))
		{
			*uParam1 = floor(_0x4F8A26A890FD62FB(2, 219) * 127f);
		}
		if (!is_control_enabled(2, 220))
		{
			*uParam2 = floor(_0x4F8A26A890FD62FB(2, 220) * 127f);
		}
		if (!is_control_enabled(2, 221))
		{
			*uParam3 = floor(_0x4F8A26A890FD62FB(2, 221) * 127f);
		}
	}
	if (_is_input_disabled(2))
	{
		if (iParam5)
		{
			if (is_look_inverted())
			{
				*uParam3 *= -1;
			}
			if (_0xE1615EC03B3BB4FD())
			{
				*uParam3 *= -1;
			}
		}
	}
}

void func_353()
{
	set_vehicle_density_multiplier_this_frame(0f);
	set_parked_vehicle_density_multiplier_this_frame(0f);
	set_scenario_ped_density_multiplier_this_frame(0f, 0f);
	switch (iLocal_254)
	{
		case 0:
			request_anim_dict("missheistpaletoscore1rbhs_mcs_2");
			if (has_anim_dict_loaded("missheistpaletoscore1rbhs_mcs_2"))
			{
				iLocal_687 = 0;
				iLocal_254++;
			}
			break;
		
		case 1:
			if (is_vehicle_driveable(iLocal_67, 0) && func_334(1))
			{
				if (is_ped_sitting_in_vehicle(player_ped_id(), iLocal_67))
				{
					set_widescreen_borders(true, 500);
					set_player_control(player_id(), false, 256);
					set_vehicle_doors_shut(iLocal_67, 1);
					task_play_anim(player_ped_id(), "missheistpaletoscore1rbhs_mcs_2", "rbhs_mcs_2_leadin_action_michael", 4f, -8f, -1, 16, 0, 0, 0, 0);
					task_play_anim(iLocal_51, "missheistpaletoscore1rbhs_mcs_2", "rbhs_mcs_2_leadin_action_lestercrest", 4f, -8f, -1, 16, 0, 0, 0, 0);
					task_play_anim(uLocal_313[2], "missheistpaletoscore1rbhs_mcs_2", "rbhs_mcs_2_leadin_action_trevor", 4f, -8f, -1, 16, 0, 0, 0, 0);
					if (does_entity_exist(Local_584))
					{
						task_look_at_entity(player_ped_id(), Local_584, -1, 2052, 4);
						task_look_at_entity(iLocal_51, Local_584, 5000, 2052, 4);
						task_look_at_entity(uLocal_313[2], Local_584, 7000, 2052, 4);
					}
					func_313(&Local_96, Local_584, 0, 1726668277, 0, 1, 1);
					clear_prints();
					iLocal_246 = 1;
					func_294(500);
					_0x293220DA1B46CEBC(5f, 6f, 4);
					iLocal_254++;
				}
				else if (!does_blip_exist(iLocal_59))
				{
					iLocal_59 = func_40(iLocal_67, 0, 0);
					if (!iLocal_687)
					{
						func_86("CMN_GENGETBCK", 7500, 1);
						iLocal_687 = 1;
					}
				}
			}
			break;
		
		case 2:
			if (iLocal_246)
			{
				if (is_entity_playing_anim(player_ped_id(), "missheistpaletoscore1rbhs_mcs_2", "rbhs_mcs_2_leadin_action_michael", 3))
				{
					set_entity_anim_current_time(player_ped_id(), "missheistpaletoscore1rbhs_mcs_2", "rbhs_mcs_2_leadin_action_michael", 0.13f);
				}
				if (is_entity_playing_anim(player_ped_id(), "missheistpaletoscore1rbhs_mcs_2", "rbhs_mcs_2_leadin_action_lestercrest", 3))
				{
					set_entity_anim_current_time(iLocal_51, "missheistpaletoscore1rbhs_mcs_2", "rbhs_mcs_2_leadin_action_lestercrest", 0.13f);
				}
				if (is_entity_playing_anim(player_ped_id(), "missheistpaletoscore1rbhs_mcs_2", "rbhs_mcs_2_leadin_action_trevor", 3))
				{
					set_entity_anim_current_time(uLocal_313[2], "missheistpaletoscore1rbhs_mcs_2", "rbhs_mcs_2_leadin_action_trevor", 0.13f);
				}
				iLocal_246 = 0;
			}
			func_313(&Local_96, Local_584, 0, 1726668277, 0, 1, 1);
			if (is_entity_playing_anim(player_ped_id(), "missheistpaletoscore1rbhs_mcs_2", "rbhs_mcs_2_leadin_action_michael", 3) && get_entity_anim_current_time(player_ped_id(), "missheistpaletoscore1rbhs_mcs_2", "rbhs_mcs_2_leadin_action_michael") > 0.19f)
			{
				if (func_6(&Local_360, sLocal_276, "RBS1_BNKBOX", 8, 0, 0, 0))
				{
					iLocal_254++;
				}
			}
			break;
		
		case 3:
			func_313(&Local_96, Local_584, 0, 1726668277, 0, 1, 1);
			if ((is_entity_playing_anim(player_ped_id(), "missheistpaletoscore1rbhs_mcs_2", "rbhs_mcs_2_leadin_action_michael", 3) && get_entity_anim_current_time(player_ped_id(), "missheistpaletoscore1rbhs_mcs_2", "rbhs_mcs_2_leadin_action_michael") > 0.99f) && is_vehicle_driveable(iLocal_67, 0))
			{
				clear_ped_tasks(player_ped_id());
				if (func_75() || func_76(0) < 500)
				{
					if (func_76(0) < 500)
					{
						give_weapon_to_ped(player_ped_id(), joaat("weapon_pistol"), 500, false, true);
					}
					task_leave_vehicle(player_ped_id(), iLocal_67, 0);
					settimera(false);
					iLocal_254++;
				}
				else
				{
					remove_anim_dict("missheistpaletoscore1rbhs_mcs_2");
					set_player_control(player_id(), true, 0);
					set_widescreen_borders(false, 500);
					func_28(9);
				}
			}
			break;
		
		case 4:
			if (timera() > 1000)
			{
				_0x293220DA1B46CEBC(5f, 6f, 4);
				remove_anim_dict("missheistpaletoscore1rbhs_mcs_2");
				set_player_control(player_id(), true, 0);
				set_widescreen_borders(false, 500);
				func_28(5);
			}
			break;
	}
	if (is_vehicle_driveable(iLocal_67, 0))
	{
		if (!_is_vehicle_engine_on(iLocal_67))
		{
			set_vehicle_engine_on(iLocal_67, true, 1, 0);
		}
	}
}

void func_354()
{
	int iVar0;
	
	if (is_ped_in_any_vehicle(player_ped_id(), 0))
	{
		if ((get_follow_vehicle_cam_view_mode() != 0 && get_follow_vehicle_cam_view_mode() != 2) && get_follow_vehicle_cam_view_mode() != 1)
		{
			func_270(&Local_96, 0, 0);
		}
	}
	func_297();
	if (func_334(1))
	{
		switch (iLocal_254)
		{
			case 0:
				iLocal_662 = 0;
				iLocal_663 = false;
				iLocal_684 = 0;
				iLocal_685 = 0;
				StringCopy(&cLocal_664, "", 24);
				if (is_vehicle_driveable(iLocal_68, 0) && !is_ped_injured(iLocal_57))
				{
					open_sequence_task(&iVar0);
					task_vehicle_drive_to_coord(false, iLocal_68, -222.1229f, 6146.418f, 30.2385f, 7f, 0, joaat("bus"), 786599, 50f, 10f);
					task_vehicle_drive_wander(false, iLocal_68, 10f, 786597);
					close_sequence_task(iVar0);
					task_perform_sequence(iLocal_57, iVar0);
					clear_sequence_task(&iVar0);
				}
				clear_area_of_peds(-117.54f, 6484.41f, 30.46f, 50f, 0);
				set_ped_paths_in_area(-135.3092f, 6479.615f, 32.653f, 11.75f, 6.75f, 4.5f, false, 0);
				set_ped_paths_in_area(-134.3872f, 6492.855f, 30.95585f, 11.75f, 6.75f, 4.5f, false, 0);
				set_ped_paths_in_area(-134.5053f, 6507.014f, 30.96668f, 11.75f, 6.75f, 4.5f, false, 0);
				set_ped_paths_in_area(-135.3438f, 6520.587f, 30.74896f, 11.75f, 6.75f, 4.5f, false, 0);
				set_ped_paths_in_area(-116.3026f, 6492.045f, 33.90546f, 18f, 19.25f, 5.75f, false, 0);
				if (!is_audio_scene_active("PS_1_DRIVE_TO_BANK"))
				{
					start_audio_scene("PS_1_DRIVE_TO_BANK");
				}
				settimera(false);
				_0x293220DA1B46CEBC(5f, 10f, 4);
				iLocal_254++;
				break;
			
			case 1:
				if (func_359(1) && func_334(1))
				{
					func_294(500);
					if (func_6(&Local_360, sLocal_276, "RBS1_TOGO", 8, 0, 0, 0))
					{
						iLocal_254++;
					}
				}
				break;
			
			case 2:
				func_358(&iLocal_58, &iLocal_59, vLocal_149, &Local_529, 1, 1, 1, 0);
				if (!func_43())
				{
					func_85(&Local_529);
				}
				if (timera() > 5000 && Local_529.f_1)
				{
					iLocal_254++;
				}
				break;
			
			case 3:
				func_358(&iLocal_58, &iLocal_59, vLocal_149, &Local_529, 1, 1, 1, 1);
				func_239("RBS1_TOBANK", (is_vehicle_driveable(iLocal_67, 0) && is_ped_in_vehicle(player_ped_id(), iLocal_67, 0)));
				if (is_entity_in_angled_area(player_ped_id(), -109.7728f, 6414.386f, 20.31285f, -151.9715f, 6458.521f, 42.39143f, 32.5f, 0, true, 0) && is_ped_sitting_in_vehicle(player_ped_id(), iLocal_67))
				{
					func_87();
					func_346(4, 1, 0);
					iLocal_662 = 0;
					iLocal_663 = false;
					StringCopy(&cLocal_664, "", 24);
					iLocal_254++;
					settimera(false);
				}
				break;
			
			case 4:
				func_358(&iLocal_58, &iLocal_59, vLocal_149, &Local_529, 1, 1, 1, 1);
				if (timera() > 0 && timera() < 100)
				{
					task_look_at_coord(iLocal_51, vLocal_152, 10000, 0, 2);
				}
				if (timera() > 200 && timera() < 250)
				{
					task_look_at_coord(player_ped_id(), vLocal_152, 5000, 0, 2);
				}
				if (timera() > 300 && timera() < 350)
				{
					task_look_at_coord(uLocal_313[2], vLocal_152, 7000, 0, 2);
				}
				if (is_ped_sitting_in_vehicle(player_ped_id(), iLocal_67))
				{
					if (is_entity_at_coord(player_ped_id(), vLocal_149, Global_19, true, true, 0) && is_entity_in_angled_area(player_ped_id(), -134.7231f, 6448.373f, 28.4724f, -127.3561f, 6440.835f, 34.43628f, 10.75f, 0, true, 0))
					{
						remove_blip(&iLocal_58);
						settimera(false);
						iLocal_254++;
					}
				}
				break;
			
			case 5:
				if (is_ped_in_any_vehicle(player_ped_id(), 0))
				{
					disable_control_action(0, 0, 1);
					set_cinematic_button_active(false);
				}
				if (func_30(iLocal_67, 1093140480, 1, 1056964608, 0, 1, 0))
				{
					_0x293220DA1B46CEBC(5f, 6f, 4);
					iLocal_254++;
					func_86("CBH_FOCGOD", 7500, 1);
					func_319("CBH_FCUSHLP", 15000);
					trigger_music_event("RH1_START");
					if ((get_follow_vehicle_cam_view_mode() != 0 && get_follow_vehicle_cam_view_mode() != 2) && get_follow_vehicle_cam_view_mode() != 1)
					{
						iLocal_686 = get_follow_vehicle_cam_view_mode();
					}
					else
					{
						iLocal_686 = 5;
					}
					settimera(false);
				}
				break;
			
			case 6:
				if (is_ped_in_any_vehicle(player_ped_id(), 0))
				{
					disable_control_action(0, 0, 1);
					set_cinematic_button_active(false);
				}
				if (is_ped_sitting_in_vehicle(player_ped_id(), iLocal_67) && is_entity_at_coord(player_ped_id(), vLocal_149, Global_19 + Vector(0f, 2f, 2f), false, true, 0))
				{
					if (is_control_pressed(0, 80) || is_gameplay_hint_active())
					{
						set_follow_vehicle_cam_view_mode(1);
						func_357(&Local_96, vLocal_152 + Vector(1.5f, 0f, 0f), "", 1726668277, 1, 0, 1);
						clear_help(1);
						if (is_gameplay_hint_active())
						{
							set_cinematic_button_active(true);
							iLocal_254++;
						}
					}
				}
				else
				{
					if (!Local_96 && !is_gameplay_hint_active())
					{
						if (iLocal_686 != 5)
						{
							set_follow_vehicle_cam_view_mode(iLocal_686);
							iLocal_686 = 5;
						}
					}
					clear_help(1);
					iLocal_254 = 4;
				}
				break;
			
			case 7:
				if (!Local_96 && !is_gameplay_hint_active())
				{
					if (iLocal_686 != 5)
					{
						set_follow_vehicle_cam_view_mode(iLocal_686);
						iLocal_686 = 5;
					}
				}
				func_239("RBS1_BNKCUT", (is_vehicle_driveable(iLocal_67, 0) && is_ped_in_vehicle(player_ped_id(), iLocal_67, 0)));
				if (timera() < 3000)
				{
					func_358(&iLocal_58, &iLocal_59, vLocal_116, &Local_531, 0, 1, 1, 1);
				}
				else if (timera() > 2000)
				{
					if (!does_blip_exist(iLocal_58))
					{
						func_358(&iLocal_58, &iLocal_59, vLocal_116, &Local_529, 1, 1, 1, 0);
					}
				}
				if (is_entity_at_coord(player_ped_id(), vLocal_116, Global_19, true, true, 0))
				{
				}
				if (!is_ped_in_any_vehicle(player_ped_id(), 0))
				{
					func_270(&Local_96, 0, 0);
				}
				if ((is_ped_sitting_in_vehicle(player_ped_id(), iLocal_67) && !func_43()) && timera() > 3000)
				{
					_0x293220DA1B46CEBC(5f, 6f, 4);
					iLocal_662 = 0;
					iLocal_663 = false;
					settimera(false);
					iLocal_254++;
					iLocal_242 = true;
					func_85(&Local_531);
					func_270(&Local_96, 0, 0);
				}
				break;
			
			case 8:
				if (iLocal_686 != 5)
				{
					if (!Local_96 && !is_gameplay_hint_active())
					{
						set_follow_vehicle_cam_view_mode(iLocal_686);
						iLocal_686 = 5;
					}
				}
				func_356();
				func_358(&iLocal_58, &iLocal_59, vLocal_116, &Local_529, 1, 1, 1, 0);
				if (!iLocal_684)
				{
					if (!func_43() && !is_message_being_displayed())
					{
						if (func_359(1) && func_334(1))
						{
							if (is_entity_in_angled_area(player_ped_id(), -120.5001f, 6513.166f, 27.8153f, -152.4702f, 6478.05f, 39.48183f, 26f, 0, true, 0))
							{
								iLocal_684 = 1;
							}
							else if (func_6(&Local_360, sLocal_276, "RBS1_CLARIFY", 8, 0, 0, 0))
							{
								iLocal_684 = 1;
							}
						}
					}
				}
				else if (timera() > 5000)
				{
					func_239("RBS1_ATBANK", (is_vehicle_driveable(iLocal_67, 0) && is_ped_in_vehicle(player_ped_id(), iLocal_67, 0)));
				}
				if (((timera() > 25000 && !iLocal_685) && !func_43()) && !is_message_being_displayed())
				{
					if (func_359(1) && func_334(1))
					{
						if (func_6(&Local_360, sLocal_276, "RBS1_SPEC", 8, 0, 0, 0))
						{
							_0x293220DA1B46CEBC(2f, 6f, 4);
							iLocal_685 = 1;
						}
					}
				}
				func_270(&Local_96, 0, 0);
				if (is_entity_at_coord(player_ped_id(), vLocal_116, Global_19, true, true, 0))
				{
				}
				if ((is_vehicle_driveable(iLocal_67, 0) && func_359(1)) && func_334(1))
				{
					if (is_entity_at_coord(player_ped_id(), vLocal_116, 5f, 5f, 2.5f, false, true, 0) && is_ped_sitting_in_vehicle(player_ped_id(), iLocal_67))
					{
						func_46();
						clear_prints();
						if (does_blip_exist(iLocal_58))
						{
							remove_blip(&iLocal_58);
						}
						while (!func_30(iLocal_67, 5f, 5, 1056964608, 0, 1, 0))
						{
							wait(false);
							_0x208784099002BC30("M_ThePaletoScoreSetup", 0);
						}
						_0x293220DA1B46CEBC(5f, 6f, 4);
						set_player_control(player_id(), false, 256);
						iLocal_254++;
					}
				}
				break;
			
			case 9:
				if (!func_43())
				{
					if (is_audio_scene_active("PS_1_DRIVE_TO_BANK"))
					{
						stop_audio_scene("PS_1_DRIVE_TO_BANK");
					}
					func_270(&Local_96, "CMN_HINT", 1);
					func_28(4);
					iLocal_254 = 0;
				}
				break;
			}
	}
	if (is_vehicle_driveable(iLocal_68, 0) && !is_ped_injured(iLocal_57))
	{
		if (vdist2(get_entity_coords(player_ped_id(), 1), get_entity_coords(iLocal_57, 1)) > 2500f && !is_entity_on_screen(iLocal_68))
		{
			delete_ped(&iLocal_57);
			delete_vehicle(&iLocal_68);
			set_model_as_no_longer_needed(joaat("bus"));
			set_model_as_no_longer_needed(joaat("s_m_m_lsmetro_01"));
		}
	}
	if (Local_584.f_9)
	{
		func_25();
		clear_prints();
		func_346(6, 1, 0);
		if (func_355(&Local_525))
		{
			remove_blip(&iLocal_58);
			_0x293220DA1B46CEBC(5f, 6f, 4);
			func_28(6);
		}
	}
	if (func_84(uLocal_313[2], &Local_543))
	{
		clear_prints();
		func_25();
		func_88("CBH_AB2BOTH");
	}
	if (!iLocal_236)
	{
		if (vdist2(get_entity_coords(player_ped_id(), 1), vLocal_112) < pow(50f, 2f))
		{
			request_anim_dict("missheistpaletoscore1rbhs_mcs_2");
			iLocal_236 = 1;
		}
	}
	else if (vdist2(get_entity_coords(player_ped_id(), 1), vLocal_112) > pow(75f, 2f))
	{
		remove_anim_dict("missheistpaletoscore1rbhs_mcs_2");
		iLocal_236 = 0;
	}
}

bool func_355(var uParam0)
{
	if (!*uParam0.f_1)
	{
		if (func_6(&Local_360, sLocal_276, *uParam0, 9, 0, 0, 0))
		{
			*uParam0.f_1 = 1;
			return true;
		}
	}
	return false;
}

void func_356()
{
	struct<16> Var0;
	
	if ((is_entity_in_angled_area(player_ped_id(), -104.0468f, 6493.076f, 30.41857f, -120.6202f, 6475.779f, 35.10751f, 19.25f, 0, true, 0) && get_game_timer() - iLocal_261 > 10000) && !func_43())
	{
		StringCopy(&Var0, "RBS1_WRGWY_", 64);
		StringIntConCat(&Var0, iLocal_260, 64);
		func_82(&Local_360, sLocal_276, "RBS1_WRGWY", &Var0, 8, 0, 0);
		iLocal_260++;
		if (iLocal_260 > 1)
		{
			iLocal_260 = 0;
		}
		iLocal_261 = get_game_timer();
	}
}

void func_357(var uParam0, vector3 vParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (!is_ped_in_any_vehicle(player_ped_id(), 1))
	{
		func_270(uParam0, 0, 0);
	}
	*uParam0.f_6 = 2;
	func_350(uParam0, vParam1, sParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_358(int iParam0, int iParam1, vector3 vParam2, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (func_334(iParam7))
	{
		if (func_359(iParam7))
		{
			if (does_blip_exist(*iParam1))
			{
				if (is_message_being_displayed() && !func_43())
				{
					clear_prints();
				}
				remove_blip(iParam1);
			}
			if (iParam6)
			{
				if (!does_blip_exist(*iParam0))
				{
					*iParam0 = func_44(vParam2, iParam8);
					if (is_message_being_displayed() && !func_43())
					{
						clear_prints();
					}
				}
				if (iParam9)
				{
					func_85(uParam5);
				}
			}
		}
		else if (!is_ped_in_vehicle(player_ped_id(), iLocal_67, 0))
		{
			if (iParam6)
			{
				if (does_blip_exist(*iParam0))
				{
					remove_blip(iParam0);
				}
			}
			if (!does_blip_exist(*iParam1))
			{
				if (is_message_being_displayed() && !func_43())
				{
					clear_prints();
				}
				func_85(&Local_539);
				*iParam1 = func_40(iLocal_67, 0, 0);
			}
		}
		else if (does_blip_exist(*iParam1))
		{
			remove_blip(iParam1);
		}
	}
}

int func_359(int iParam0)
{
	if (func_334(iParam0))
	{
		if (iParam0)
		{
			return ((is_ped_in_vehicle(player_ped_id(), iLocal_67, 0) && is_ped_in_vehicle(uLocal_313[2], iLocal_67, 0)) && is_ped_in_vehicle(iLocal_51, iLocal_67, 0));
		}
		else
		{
			return (is_ped_in_vehicle(player_ped_id(), iLocal_67, 0) && is_ped_in_vehicle(uLocal_313[2], iLocal_67, 0));
		}
	}
	return false;
}

void func_360()
{
	set_ped_density_multiplier_this_frame(0f);
	set_vehicle_density_multiplier_this_frame(0f);
	set_scenario_ped_density_multiplier_this_frame(1f, 0f);
	if (!iLocal_235)
	{
		if (!is_cutscene_active())
		{
			request_cutscene("rbhs_mcs_1", 8);
		}
		if (func_373())
		{
			if (func_372("rbhs_mcs_1"))
			{
				if (!does_entity_exist(iLocal_68))
				{
					func_371(-397.9f, 6134.135f, 31.5204f, -45.28132f);
				}
				func_364(1, 1, 1, 0);
				if (!does_entity_exist(iLocal_51))
				{
					register_entity_for_cutscene(iLocal_51, "Lester", 2, joaat("ig_lestercrest"), 0);
				}
				else if (!is_ped_injured(iLocal_51))
				{
					register_entity_for_cutscene(iLocal_51, "Lester", 0, false, 0);
				}
				if (!is_ped_injured(uLocal_313[2]))
				{
					register_entity_for_cutscene(uLocal_313[2], "Trevor", 0, false, 0);
				}
				if (is_vehicle_driveable(iLocal_67, 0))
				{
					set_vehicle_doors_shut(iLocal_67, 1);
					set_vehicle_door_control(iLocal_67, false, 0, 0f);
					set_vehicle_door_control(iLocal_67, true, 0, 0f);
					set_vehicle_door_control(iLocal_67, 3, 0, 0f);
					set_vehicle_door_control(iLocal_67, 2, 0, 0f);
					register_entity_for_cutscene(iLocal_67, "Michaels_car", 0, false, 0);
					set_all_vehicles_spawn(iLocal_67, 1, 1, 1);
				}
				if (is_vehicle_driveable(iLocal_68, 0))
				{
					register_entity_for_cutscene(iLocal_68, "RBHS_bus", 0, false, 0);
				}
				if (!is_ped_injured(iLocal_57))
				{
					register_entity_for_cutscene(iLocal_57, "S_M_M_LSMetro_01", 0, false, 0);
				}
				set_roads_in_area(vLocal_123 + Vector(100f, 100f, 100f), vLocal_123 - Vector(100f, 100f, 100f), false, 1);
				set_ped_paths_in_area(vLocal_123 + Vector(100f, 100f, 100f), vLocal_123 - Vector(100f, 100f, 100f), false, 0);
				start_cutscene(0);
				_0x208784099002BC30("M_ThePaletoScoreSetup", 0);
				wait(false);
				if (!is_ped_injured(uLocal_313[2]))
				{
					clear_ped_tasks(uLocal_313[2]);
				}
				if (is_vehicle_driveable(iLocal_68, 0))
				{
					_0x18EB48CFC41F2EA0(iLocal_68, 0f);
				}
				if (is_audio_scene_active("PS_1_BUS_ARRIVES"))
				{
					stop_audio_scene("PS_1_BUS_ARRIVES");
				}
				clear_area(vLocal_123, 500f, 1, 0, 0, false);
				func_346(3, 1, 0);
				func_363();
				do_screen_fade_in(500);
				iLocal_235 = 1;
			}
		}
	}
	else
	{
		if (!does_entity_exist(iLocal_51) && does_entity_exist(get_entity_index_of_registered_entity("Lester", false)))
		{
			iLocal_51 = get_ped_index_from_entity_index(get_entity_index_of_registered_entity("Lester", false));
		}
		if (is_vehicle_driveable(iLocal_68, 0))
		{
			if (!is_entity_visible(iLocal_68))
			{
				set_entity_visible(iLocal_68, true, 0);
			}
		}
		if (is_vehicle_driveable(iLocal_67, 0))
		{
			if (can_set_exit_state_for_registered_entity("Michael", false))
			{
				if (!is_ped_in_vehicle(player_ped_id(), iLocal_67, 0))
				{
					set_ped_into_vehicle(player_ped_id(), iLocal_67, -1);
				}
			}
			if (!is_ped_injured(uLocal_313[2]))
			{
				if (can_set_exit_state_for_registered_entity("Trevor", false))
				{
					if (!is_ped_in_vehicle(uLocal_313[2], iLocal_67, 0))
					{
						set_ped_into_vehicle(uLocal_313[2], iLocal_67, 2);
					}
				}
			}
			if (!is_ped_injured(iLocal_51))
			{
				if (can_set_exit_state_for_registered_entity("Lester", false))
				{
					if (!is_ped_in_vehicle(iLocal_51, iLocal_67, 0))
					{
						set_ped_into_vehicle(iLocal_51, iLocal_67, false);
					}
				}
			}
			if (can_set_exit_state_for_registered_entity("Michaels_car", false))
			{
				set_vehicle_doors_shut(iLocal_67, 1);
				_0x0AE73D8DF3A762B2(1);
				_0x5F0F3F56635809EF(1f);
			}
		}
		if (!is_cutscene_active())
		{
			_0x81CBAE94390F9F89();
			if (does_entity_exist(iLocal_57) && does_entity_exist(iLocal_68))
			{
				if (!is_ped_injured(iLocal_57) && is_vehicle_driveable(iLocal_68, 0))
				{
					set_ped_into_vehicle(iLocal_57, iLocal_68, -1);
				}
			}
			_set_far_shadows_suppressed(1);
			func_362(&Local_71, 0, 0, 0, 1, 0, 0, 1);
			func_361();
			func_364(0, 1, 1, 0);
			iLocal_235 = 0;
			set_roads_back_to_original(vLocal_123 + Vector(100f, 100f, 100f), vLocal_123 - Vector(100f, 100f, 100f), 1);
			set_ped_paths_in_area(vLocal_123 + Vector(100f, 100f, 100f), vLocal_123 - Vector(100f, 100f, 100f), true, 0);
			func_28(3);
		}
	}
}

void func_361()
{
	Global_55755 = 0;
}

void func_362(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	
	if (iParam4 == 1)
	{
		set_player_control(player_id(), is_player_control_on(player_id()), 64);
	}
	if (!is_cutscene_playing())
	{
		set_player_control(player_id(), !iParam1, 0);
	}
	if (iParam7)
	{
		if (!is_entity_dead(player_ped_id(), 0))
		{
			remove_ped_helmet(player_ped_id(), 1);
		}
	}
	if (!iParam1 && iParam6)
	{
		_0xC819F3CBB62BF692(0, 0f, 3, 0);
	}
	else
	{
		render_script_cams(iParam1, iParam2, iParam3, 1, 0, 0);
	}
	if (iParam1)
	{
		clear_help(1);
	}
	else
	{
		if (does_cam_exist(*iParam0.f_4))
		{
			if (is_cam_active(*iParam0.f_4))
			{
				set_cam_active(*iParam0.f_4, false);
			}
			destroy_cam(*iParam0.f_4, 1);
		}
		if (!is_entity_dead(player_ped_id(), 0))
		{
			set_entity_visible(player_ped_id(), true, 0);
		}
		iVar0 = get_players_last_vehicle();
		if (does_entity_exist(iVar0))
		{
			set_entity_visible(iVar0, true, 0);
		}
		release_named_script_audio_bank("TIME_LAPSE");
		if (is_audio_scene_active("TOD_SHIFT_SCENE"))
		{
			stop_sound(*iParam0.f_10);
			release_named_script_audio_bank("TIME_LAPSE");
			stop_audio_scene("TOD_SHIFT_SCENE");
		}
	}
	func_364(iParam1, 1, 0, 0);
	func_258();
	if (!iParam1 && iParam5)
	{
		if (*iParam0.f_5)
		{
			set_clock_time(*iParam0.f_7, false, false);
		}
		else
		{
			set_clock_time(*iParam0.f_8, false, false);
		}
	}
	if (!iParam1)
	{
		if (is_screen_faded_out())
		{
			do_screen_fade_in(250);
		}
	}
	if (!iParam1)
	{
		if (Global_101154.f_18807.f_4801 != -15)
		{
			Global_101154.f_18807.f_4801 = func_110();
		}
	}
}

void func_363()
{
	Global_55755 = 1;
}

void func_364(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam0)
	{
		special_ability_deactivate_fast(player_id());
		set_all_random_peds_flee(player_id(), 1);
		set_police_ignore_player(player_id(), 1);
		func_370(1);
		_0xA8FDB297A8D25FBA();
		_0xFDB423997FA30340();
		if (Global_14413.f_1 > 3)
		{
			if (is_mobile_phone_call_ongoing())
			{
				stop_scripted_conversation(false);
			}
			if (!func_10())
			{
				Global_14413.f_1 = 3;
			}
			Global_15712 = 5;
		}
		func_369(1, iParam3, iParam2, 0);
		Global_55755 = 1;
		Global_68061 = 1;
		Global_69487 = 1;
	}
	else
	{
		func_370(0);
		_0xE1CD1E48E025E661();
		Global_55755 = 0;
		if (iParam1)
		{
			_0x03FC694AE06C5A20();
		}
		set_all_random_peds_flee(player_id(), 0);
		set_police_ignore_player(player_id(), 0);
		func_369(0, iParam3, iParam2, 0);
		if (network_is_game_in_progress())
		{
			if (((!is_ped_injured(player_ped_id()) && !func_368(player_id())) && !func_366(player_id(), 0)) && !func_365())
			{
				set_entity_invincible(player_ped_id(), false);
			}
		}
		else if (!is_ped_injured(player_ped_id()) && !func_368(player_id()))
		{
			set_entity_invincible(player_ped_id(), false);
		}
		Global_69487 = 0;
	}
}

int func_365()
{
	return is_bit_set(Global_1587523[player_id() /*444*/].f_39.f_18, 14);
}

int func_366(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == player_id())
	{
		iVar0 = func_367(-1, 0) == 8;
	}
	else
	{
		iVar0 = Global_1587523[iParam0 /*444*/].f_195 == 8;
	}
	if (iParam1 == 1)
	{
		if (network_is_player_active(iParam0))
		{
			iVar0 = get_player_team(iParam0) == 8;
		}
	}
	return iVar0;
}

int func_367(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_36();
	}
	if (Global_1315891[iVar1] == 1)
	{
		if (iParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312741[iVar1];
		if (iParam1)
		{
		}
	}
	return iVar0;
}

bool func_368(int iParam0)
{
	if (func_366(iParam0, 0))
	{
		return true;
	}
	if (func_291())
	{
		if (iParam0 == player_id())
		{
			return true;
		}
	}
	if (is_bit_set(Global_2418472[iParam0 /*313*/].f_194, 2))
	{
		return true;
	}
	return false;
}

int func_369(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (is_pc_version())
	{
		if (_0xA0FE76168A189DDB() != iParam0 && uParam2)
		{
			_0x20746F7B1032A3C7(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_370(int iParam0)
{
	if (iParam0 == 1)
	{
		set_bit(&Global_2283, 13);
	}
	else
	{
		clear_bit(&Global_2283, 13);
	}
}

int func_371(vector3 vParam0, Vector3 fParam1)
{
	if (!does_entity_exist(iLocal_68))
	{
		request_model(joaat("bus"));
		if (has_model_loaded(joaat("bus")))
		{
			iLocal_68 = create_vehicle(joaat("bus"), vParam0, fParam3, 1, true);
			set_vehicle_on_ground_properly(iLocal_68);
			set_vehicle_colour_combination(iLocal_68, false);
		}
	}
	if (!does_entity_exist(iLocal_57))
	{
		request_model(joaat("s_m_m_lsmetro_01"));
		if (has_model_loaded(joaat("s_m_m_lsmetro_01")))
		{
			iLocal_57 = create_ped_inside_vehicle(iLocal_68, 26, joaat("s_m_m_lsmetro_01"), -1, 1, true);
			set_ped_can_be_dragged_out(iLocal_57, 0);
			set_ped_can_be_shot_in_vehicle(iLocal_57, 0);
			set_ped_relationship_group_hash(iLocal_57, 1862763509);
		}
	}
	return (does_entity_exist(iLocal_68) && does_entity_exist(iLocal_57));
}

int func_372(char* sParam0)
{
	int iVar0;
	
	iVar0 = has_this_cutscene_loaded(sParam0);
	if (!Global_69488)
	{
		if (!iVar0)
		{
			Global_69488 = 1;
		}
	}
	return iVar0;
}

int func_373()
{
	int iVar0;
	
	iVar0 = has_cutscene_loaded();
	if (!Global_69488)
	{
		if (!iVar0)
		{
			Global_69488 = 1;
		}
	}
	return iVar0;
}

void func_374()
{
	var uVar0;
	
	switch (iLocal_639)
	{
		case 0:
			if (get_game_timer() - iLocal_638 > 1000)
			{
				if (get_ground_z_for_3d_coord(vLocal_155, &uVar0, 0))
				{
					iLocal_639++;
				}
				iLocal_638 = get_game_timer();
			}
			break;
		
		case 1:
			if (func_376())
			{
				func_100(73, 1);
				func_100(74, 1);
				_set_door_ajar_angle(178228075, 0f, 1, 0);
				_set_door_ajar_angle(1852297978, 0f, 1, 0);
				iLocal_643 = 1;
				iLocal_639++;
			}
			break;
		
		case 2:
			if (get_game_timer() - iLocal_638 > 1000)
			{
				if (vdist2(get_entity_coords(player_ped_id(), 1), vLocal_155) > 40000f)
				{
					if (_0x160AA1B32F6139B8(178228075) != 1)
					{
						_set_door_ajar_angle(178228075, 0f, 1, 0);
						func_100(73, 1);
					}
					if (_0x160AA1B32F6139B8(1852297978) != 1)
					{
						_set_door_ajar_angle(1852297978, 0f, 1, 0);
						func_100(74, 1);
					}
					func_375();
					iLocal_639 = 0;
				}
				else
				{
					iLocal_642 = func_110();
					if (iLocal_643)
					{
						if (func_109(iLocal_642) >= 7 || func_109(iLocal_642) <= 17)
						{
							func_100(73, 0);
							func_100(74, 0);
							iLocal_643 = 0;
						}
					}
					else if (func_109(iLocal_642) < 7 || func_109(iLocal_642) > 17)
					{
						if (_0x160AA1B32F6139B8(178228075) != 1)
						{
							_set_door_ajar_angle(178228075, 0f, 1, 0);
							func_100(73, 1);
						}
						if (_0x160AA1B32F6139B8(1852297978) != 1)
						{
							_set_door_ajar_angle(1852297978, 0f, 1, 0);
							func_100(74, 1);
						}
						iLocal_643 = 1;
					}
				}
				iLocal_638 = get_game_timer();
			}
			break;
	}
	if (((((is_explosion_in_area(2, vLocal_152 - Vector(10f, 75f, 75f), vLocal_152 + Vector(100f, 75f, 75f)) || is_explosion_in_area(0, vLocal_152 - Vector(10f, 75f, 75f), vLocal_152 + Vector(100f, 75f, 75f))) || is_explosion_in_area(1, vLocal_152 - Vector(10f, 75f, 75f), vLocal_152 + Vector(100f, 75f, 75f))) || is_explosion_in_area(9, vLocal_152 - Vector(10f, 75f, 75f), vLocal_152 + Vector(100f, 75f, 75f))) || is_explosion_in_area(4, vLocal_152 - Vector(10f, 75f, 75f), vLocal_152 + Vector(100f, 75f, 75f))) || is_projectile_type_in_area(vLocal_152 - Vector(10f, 75f, 75f), vLocal_152 + Vector(100f, 75f, 75f), joaat("weapon_rpg"), 0))
	{
		func_88("CBH_BANKALERT");
	}
}

void func_375()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_52)
	{
		if (does_entity_exist(iLocal_52[iVar0]))
		{
			delete_ped(&(iLocal_52[iVar0]));
		}
		iVar0++;
	}
}

bool func_376()
{
	if (func_304())
	{
		if (!is_ped_injured(iLocal_52[0]))
		{
			task_start_scenario_in_place(iLocal_52[0], "WORLD_HUMAN_STAND_IMPATIENT", 0, 0);
		}
		if (!is_ped_injured(iLocal_52[1]))
		{
			task_start_scenario_in_place(iLocal_52[1], "WORLD_HUMAN_HANG_OUT_STREET", 0, 0);
		}
		if (!is_ped_injured(iLocal_52[2]))
		{
			task_start_scenario_in_place(iLocal_52[2], "WORLD_HUMAN_STAND_IMPATIENT", 0, 0);
		}
		if (does_entity_exist(iLocal_52[3]))
		{
			delete_ped(&(iLocal_52[3]));
		}
		return true;
	}
	return false;
}

void func_377()
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	vector3 vVar5;
	
	func_297();
	if (is_vehicle_driveable(iLocal_67, 0))
	{
		if (!iLocal_240)
		{
			if (vdist2(get_entity_coords(player_ped_id(), 1), vLocal_123) < 40000f)
			{
				set_parked_vehicle_density_multiplier_this_frame(0f);
			}
			if (iLocal_254 > 1)
			{
				if (iLocal_254 < 4)
				{
					func_358(&iLocal_58, &iLocal_59, vLocal_152, &Local_527, 1, 0, vdist2(get_entity_coords(player_ped_id(), 1), vLocal_123) < 562500f, 1);
				}
				else
				{
					func_358(&iLocal_58, &iLocal_59, vLocal_123, &Local_527, 1, 0, vdist2(get_entity_coords(player_ped_id(), 1), vLocal_123) < 562500f, 1);
				}
				if (is_ped_sitting_in_vehicle(player_ped_id(), iLocal_67))
				{
					func_409(&vLocal_200, &iLocal_210);
					iLocal_245 = 1;
				}
				else if (iLocal_245)
				{
					_0x67EEDEA1B9BAFD94();
					iLocal_210 = vLocal_200.x - 1;
				}
				if (get_player_wanted_level(player_id()) > 0)
				{
					iLocal_249 = 1;
				}
			}
			if (iLocal_254 < 2)
			{
				if (!is_ped_injured(uLocal_313[2]))
				{
					set_ped_reset_flag(uLocal_313[2], 60, true);
				}
			}
			switch (iLocal_254)
			{
				case 0:
					if (!is_ped_injured(uLocal_313[2]) && is_vehicle_driveable(iLocal_67, 0))
					{
						iLocal_680 = 1;
						set_ped_config_flag(uLocal_313[2], 104, true);
						if (is_screen_faded_out())
						{
							force_ped_motion_state(player_ped_id(), -668482597, false, 0, 0);
						}
						set_ped_min_move_blend_ratio(player_ped_id(), 1f);
						request_waypoint_recording(sLocal_683);
						settimera(false);
						settimerb(false);
						vLocal_200[0 /*3*/] = {2356.379f, 5864.774f, 46.1486f};
						vLocal_200[1 /*3*/] = {230.8756f, 6569.08f, 30.6632f};
						vLocal_200[2 /*3*/] = {vLocal_152};
						iLocal_210 = vLocal_200.x - 1;
						iLocal_245 = 0;
						iLocal_676 = -1;
						iLocal_677 = 0;
						iLocal_679 = 0;
						iLocal_681 = 0;
						iLocal_682 = 0;
						_0x293220DA1B46CEBC(1f, 10f, 4);
						iLocal_254++;
					}
					break;
				
				case 1:
					if (!is_screen_faded_in() && !is_screen_fading_in())
					{
						do_screen_fade_in(500);
					}
					if (iLocal_680)
					{
						set_ped_min_move_blend_ratio(player_ped_id(), 1f);
						if (iLocal_254 != 0)
						{
							func_408(&iVar0, &iVar1, &uVar2, &uVar2, 0);
							if (absi(iVar0) + absi(iVar1) > 20 || timerb() > 2000)
							{
								iLocal_680 = 0;
							}
						}
					}
					if ((((!is_ped_injured(uLocal_313[2]) && get_script_task_status(uLocal_313[2], -1794415470) != 1) && get_script_task_status(uLocal_313[2], -1794415470) != 0) && !is_ped_in_any_vehicle(uLocal_313[2], 1)) && !does_blip_exist(iLocal_63))
					{
						if (!is_waypoint_playback_going_on_for_ped(uLocal_313[2]))
						{
							if (get_is_waypoint_recording_loaded(sLocal_683))
							{
								task_follow_waypoint_recording(uLocal_313[2], sLocal_683, 0, 8, -1);
							}
							if (is_entity_at_entity(uLocal_313[2], iLocal_67, 3f, 3f, 3f, 0, 1, 0))
							{
								clear_ped_tasks(uLocal_313[2]);
								task_enter_vehicle(uLocal_313[2], iLocal_67, 20000, false, 1f, 1, 0);
							}
						}
						else
						{
							waypoint_recording_get_closest_waypoint(sLocal_683, get_entity_coords(player_ped_id(), 1), &iVar3);
							waypoint_recording_get_closest_waypoint(sLocal_683, get_entity_coords(uLocal_313[2], 1), &iVar4);
							waypoint_recording_get_coord(sLocal_683, iVar3, &vVar5);
							if (!waypoint_playback_get_is_paused(uLocal_313[2]))
							{
								if (((vdist2(get_entity_coords(player_ped_id(), 1), vVar5) < 6.25f && is_entity_at_entity(uLocal_313[2], player_ped_id(), 3f, 3f, 3f, 0, 1, 0)) && iVar3 - iVar4 < 3) && iVar3 > iVar4)
								{
									waypoint_playback_pause(uLocal_313[2], 1, 0);
								}
							}
							else if (((vdist2(get_entity_coords(player_ped_id(), 1), vVar5) > 9f || !is_entity_at_entity(uLocal_313[2], player_ped_id(), 3f, 3f, 3f, 0, 1, 0)) || iVar3 - iVar4 > 3) || iVar3 < iVar4)
							{
								waypoint_playback_resume(uLocal_313[2], 1, -1, 0);
							}
							if (get_ped_waypoint_progress(uLocal_313[2]) > 28)
							{
								clear_ped_tasks(uLocal_313[2]);
								task_enter_vehicle(uLocal_313[2], iLocal_67, 20000, false, 1f, 1, 0);
							}
						}
					}
					if (!iLocal_681)
					{
						if (is_screen_faded_in() && !is_screen_fading_in())
						{
							if (func_6(&Local_360, sLocal_276, "RBS1_DRV1", 8, 0, 0, 0))
							{
								iLocal_681 = 1;
							}
						}
					}
					else if (!iLocal_682)
					{
						if (!func_43())
						{
							if (!is_ped_in_vehicle(player_ped_id(), iLocal_67, 0))
							{
								func_86("CBH_GOTOCAR", 7500, 1);
								iLocal_682 = 1;
							}
						}
					}
					if (is_screen_faded_in())
					{
						if (!is_ped_injured(uLocal_313[2]) && is_vehicle_driveable(iLocal_67, 0))
						{
							if (does_blip_exist(iLocal_63))
							{
								if (is_ped_in_vehicle(uLocal_313[2], iLocal_67, 0) || !is_ped_in_vehicle(player_ped_id(), iLocal_67, 0))
								{
									remove_blip(&iLocal_63);
								}
							}
							else if (is_ped_in_vehicle(player_ped_id(), iLocal_67, 0) && !is_ped_in_vehicle(uLocal_313[2], iLocal_67, 0))
							{
								if (vdist(get_entity_coords(player_ped_id(), 1), get_entity_coords(uLocal_313[2], 1)) > 3f)
								{
									task_enter_vehicle(uLocal_313[2], iLocal_67, 20000, false, 3f, 1, 0);
								}
								iLocal_63 = func_407(uLocal_313[2], 0, 145);
							}
							if (is_ped_in_vehicle(player_ped_id(), iLocal_67, 0))
							{
								if (!is_audio_scene_active("PS_1_DRIVE_TO_PALETO"))
								{
									start_audio_scene("PS_1_DRIVE_TO_PALETO");
								}
								if (does_blip_exist(iLocal_59))
								{
									remove_blip(&iLocal_59);
								}
								if (is_ped_in_vehicle(uLocal_313[2], iLocal_67, 0))
								{
									if (does_blip_exist(iLocal_63))
									{
										remove_blip(&iLocal_63);
									}
									remove_ped_from_group(uLocal_313[2]);
									settimera(false);
									func_406(709, 0);
									remove_waypoint_recording(sLocal_683);
									iLocal_254++;
								}
								else if (!iLocal_678)
								{
									if (vdist(get_entity_coords(player_ped_id(), 1), get_entity_coords(uLocal_313[2], 1)) > 3f)
									{
										if (!func_43() && !is_message_being_displayed())
										{
											func_45("CBH_BUDSOUT", 7500, 1);
											iLocal_678 = 1;
										}
									}
								}
							}
							else
							{
								if (!does_blip_exist(iLocal_59))
								{
									iLocal_59 = func_40(iLocal_67, 0, 0);
								}
								if (does_blip_exist(iLocal_63))
								{
									remove_blip(&iLocal_63);
								}
							}
						}
					}
					break;
				
				case 2:
					if ((timera() > 7000 && func_359(0)) && !func_43())
					{
						if (func_6(&Local_360, sLocal_276, "RBS1_CALL", 8, 0, 0, 0))
						{
							iLocal_254++;
						}
					}
					break;
				
				case 3:
					if (!func_43())
					{
						if (func_405())
						{
							if (func_404(&Local_360, 12, sLocal_276, "RBS1_PHONE", 9, 1, 0, 0, 0))
							{
								settimera(false);
								iLocal_254++;
							}
						}
						else if (func_404(&Local_360, 12, sLocal_276, "RBS1_PHONE2", 9, 1, 0, 0, 0))
						{
							settimera(false);
							iLocal_254++;
						}
					}
					break;
				
				case 4:
					if (func_359(0) && func_334(0))
					{
						if (func_403())
						{
							settimera(false);
							if (does_blip_exist(iLocal_58))
							{
								remove_blip(&iLocal_58);
								_0x67EEDEA1B9BAFD94();
								vLocal_200[0 /*3*/] = {2356.379f, 5864.774f, 46.1486f};
								vLocal_200[1 /*3*/] = {230.8756f, 6569.08f, 30.6632f};
								vLocal_200[2 /*3*/] = {vLocal_123};
								iLocal_245 = 0;
								iLocal_210 = vLocal_200.x - 1;
							}
							iLocal_254++;
						}
					}
					break;
				
				case 5:
					if (timera() > 3000)
					{
						set_roads_back_to_original(vLocal_108 + Vector(500f, 500f, 500f), vLocal_108 - Vector(500f, 500f, 500f), 1);
						iLocal_254++;
					}
					break;
				
				case 6:
					if (func_405())
					{
						func_239("RBS1_DRV2", (is_vehicle_driveable(iLocal_67, 0) && is_ped_in_vehicle(player_ped_id(), iLocal_67, 0)));
					}
					else
					{
						func_239("RBS1_DRV4", (is_vehicle_driveable(iLocal_67, 0) && is_ped_in_vehicle(player_ped_id(), iLocal_67, 0)));
					}
					if (!func_43() && !iLocal_663)
					{
						iLocal_662 = 0;
						iLocal_254++;
					}
					break;
				
				case 7:
					if (func_405())
					{
						func_239("RBS1_DRV2b", (is_vehicle_driveable(iLocal_67, 0) && is_ped_in_vehicle(player_ped_id(), iLocal_67, 0)));
					}
					else
					{
						func_239("RBS1_DRV4b", (is_vehicle_driveable(iLocal_67, 0) && is_ped_in_vehicle(player_ped_id(), iLocal_67, 0)));
					}
					break;
			}
			if (((((func_359(0) && func_334(0)) && is_entity_at_coord(player_ped_id(), vLocal_123.x, vLocal_123.y, 30.24f, Global_19, true, true, 0)) && is_entity_in_angled_area(player_ped_id(), -351.5282f, 6189.989f, 28.29423f, -343.8886f, 6197.934f, 34.29549f, 7f, 0, true, 0)) && is_ped_sitting_in_vehicle(player_ped_id(), iLocal_67)) && is_entity_upright(iLocal_67, 90f))
			{
				_0x293220DA1B46CEBC(5f, 10f, 4);
				func_402(0, -1);
				func_46();
				_0x67EEDEA1B9BAFD94();
				request_ambient_audio_bank("TIME_LAPSE", 0);
				iLocal_254 = 0;
				iLocal_240 = true;
			}
		}
		else
		{
			if (!iLocal_677)
			{
				if (func_6(&Local_360, sLocal_276, "RBS1_DRV3", 8, 0, 0, 0))
				{
					iLocal_677 = 1;
				}
			}
			switch (iLocal_254)
			{
				case 0:
					if (func_359(0) && func_334(0))
					{
						if (does_blip_exist(iLocal_58))
						{
							remove_blip(&iLocal_58);
						}
						iLocal_254++;
					}
					break;
				
				case 1:
					if (func_30(iLocal_67, 6f, 1, 1056964608, 0, 1, 0))
					{
						_0x293220DA1B46CEBC(5f, 5f, 4);
						set_player_control(player_id(), false, 256);
						settimera(false);
						clear_player_wanted_level(player_id());
						set_vehicle_engine_on(iLocal_67, false, 0, 0);
						set_vehicle_interiorlight(iLocal_67, 0);
						set_wanted_level_multiplier(0f);
						iLocal_254++;
					}
					break;
				
				case 2:
					iLocal_254++;
					break;
				
				case 3:
					if (iLocal_677 && timera() > 2000)
					{
						if (!does_cam_exist(iLocal_70))
						{
							iLocal_676 = create_synchronized_scene(-330.69f, 6190.95f, 30.49f, 0f, 0f, 0f, 2);
							iLocal_70 = create_camera(964613260, 1);
							play_synchronized_cam_anim(iLocal_70, iLocal_676, "not_for_cutscene_-_timelapse_lead_in_cam", "missheistpaletoscoresetup");
							_0x5F0F3F56635809EF(0.5f);
							_0x0AE73D8DF3A762B2(0);
							render_script_cams(true, false, 3000, 1, 0, 0);
							set_entity_coords_no_offset(iLocal_67, -348.9985f, 6194.592f, 30.7398f, 0, 0, 1);
							set_entity_quaternion(iLocal_67, -0.0211f, 0.0095f, 0.9216f, 0.3876f);
							freeze_entity_position(iLocal_67, true);
							func_364(1, 1, 1, 0);
							set_player_control(player_id(), false, 256);
							set_widescreen_borders(true, 0);
							start_audio_scene("PS_1_BUS_ARRIVES");
							_0x48621C9FCA3EBD28(4);
						}
						else
						{
							settimera(false);
							request_model(joaat("bus"));
							request_model(joaat("s_m_m_lsmetro_01"));
							iLocal_254++;
						}
					}
					break;
				
				case 4:
					if (is_synchronized_scene_running(iLocal_676))
					{
					}
					if ((((is_synchronized_scene_running(iLocal_676) && get_synchronized_scene_phase(iLocal_676) > 0.99f) || !is_synchronized_scene_running(iLocal_676)) && request_ambient_audio_bank("TIME_LAPSE", 0)) && does_entity_exist(iLocal_51))
					{
						set_entity_collision(iLocal_51, true, 0);
						set_entity_visible(iLocal_51, true, 0);
						freeze_entity_position(iLocal_51, false);
						remove_anim_dict("missheistpaletoscoresetup");
						remove_particle_fx_in_range(get_entity_coords(player_ped_id(), 1), 100f);
						set_current_ped_weapon(player_ped_id(), joaat("weapon_unarmed"), true);
						Local_71.f_4 = create_cam("DEFAULT_SPLINE_CAMERA", false);
						add_cam_spline_node(Local_71.f_4, -351.9567f, 6192.048f, 34.7371f, 21.6144f, 0f, -126.3661f, 5000, 3, 2);
						add_cam_spline_node(Local_71.f_4, -351.9567f, 6192.048f, 34.7371f, 21.6144f, 0f, -126.3661f, 5000, 3, 2);
						set_cam_fov(Local_71.f_4, 39f);
						set_cam_active(Local_71.f_4, true);
						play_sound_frontend(-1, "TIME_LAPSE_MASTER", 0, 1);
						Local_71 = func_110();
						_set_far_shadows_suppressed(0);
						func_362(&Local_71, 1, 1, 2000, 1, 1, 0, 1);
						iLocal_674 = func_109(Local_71) + 2;
						iLocal_675 = func_401(Local_71);
						if (iLocal_674 > 18 || iLocal_674 < 6)
						{
							iLocal_674 = 8;
						}
						if (is_audio_scene_active("PS_1_DRIVE_TO_PALETO"))
						{
							stop_audio_scene("PS_1_DRIVE_TO_PALETO");
						}
						iLocal_254++;
					}
					break;
				
				case 5:
					func_371(-397.9f, 6134.135f, 31.5204f, -45.28132f);
					if (func_382(iLocal_674, iLocal_675, "EXTRASUNNY", "cirrocumulus", &Local_71, -1f, 0, 0, 1065353216))
					{
						_0x81CBAE94390F9F89();
						freeze_entity_position(iLocal_67, false);
						release_ambient_audio_bank();
						func_28(2);
					}
					break;
			}
			if (_is_vehicle_engine_on(iLocal_67))
			{
			}
			if (get_player_wanted_level(player_id()) > 0)
			{
				iLocal_240 = false;
				iLocal_254 = 7;
			}
		}
		if (func_84(uLocal_313[2], &Local_541))
		{
			clear_prints();
			func_25();
			func_88("CBH_AB2TREV");
		}
	}
	if (!iLocal_236)
	{
		if (vdist2(get_entity_coords(player_ped_id(), 1), vLocal_123) < 22500f && does_entity_exist(iLocal_51))
		{
			request_anim_dict("missheistpaletoscoresetup");
			func_381("rbhs_mcs_1", vLocal_123, 100f, &iLocal_236);
			func_346(2, 1, 0);
		}
	}
	if (iLocal_236)
	{
		if (!iLocal_679)
		{
			if (_0xB56BBBCC2955D9CB())
			{
				_0x2A56C06EBEF2B0D9("Michael", player_ped_id(), false);
				if (does_entity_exist(iLocal_51) && !is_ped_injured(iLocal_51))
				{
					_0x2A56C06EBEF2B0D9("Lester", iLocal_51, false);
				}
				iLocal_679 = 1;
			}
		}
		if (vdist(get_entity_coords(player_ped_id(), 1), vLocal_123) > 120f)
		{
			remove_cutscene();
			iLocal_236 = 0;
			iLocal_679 = 0;
		}
	}
	if (!does_entity_exist(iLocal_51))
	{
		if (vdist2(get_entity_coords(player_ped_id(), 1), vLocal_123) < 40000f)
		{
			if (func_379(&iLocal_51, 12, -317.9068f, 6195.894f, 36.0577f, 72.1587f, 1))
			{
				func_378();
				freeze_entity_position(iLocal_51, true);
				set_entity_collision(iLocal_51, false, 0);
				set_entity_visible(iLocal_51, false, 0);
			}
		}
	}
}

void func_378()
{
	set_ped_component_variation(iLocal_51, false, false, false, 0);
	set_ped_component_variation(iLocal_51, 2, false, false, 0);
	set_ped_component_variation(iLocal_51, 3, false, true, 0);
	set_ped_component_variation(iLocal_51, 4, true, true, 0);
	set_ped_component_variation(iLocal_51, 5, false, false, 0);
	set_ped_component_variation(iLocal_51, 7, false, false, 0);
	set_ped_component_variation(iLocal_51, 8, true, false, 0);
	set_ped_prop_index(iLocal_51, true, false, 0, false);
}

bool func_379(int iParam0, int iParam1, vector3 vParam2, Vector3 fParam3, int iParam4)
{
	int iVar0;
	
	if (!func_147(iParam1))
	{
		iVar0 = func_348(iParam1);
		request_model(iVar0);
		if (has_model_loaded(iVar0))
		{
			if (does_entity_exist(*iParam0))
			{
				delete_ped(iParam0);
			}
			*iParam0 = create_ped(26, iVar0, vParam2, fParam5, 0, false);
			set_ped_default_component_variation(*iParam0);
			if (iVar0 == joaat("ig_lamardavis"))
			{
				if (get_ped_drawable_variation(*iParam0, 3) == 0)
				{
					set_ped_component_variation(*iParam0, 5, 2, false, 0);
				}
			}
			func_380(*iParam0, iParam1);
			if (iParam6)
			{
				set_model_as_no_longer_needed(iVar0);
			}
			return true;
		}
	}
	return false;
}

bool func_380(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 7;
	if (iParam1 == 19)
	{
		iVar0 = 3;
	}
	else if (iParam1 == 14)
	{
		iVar0 = 4;
	}
	else if (iParam1 == 17)
	{
		iVar0 = 5;
	}
	else
	{
		iVar0 = 7;
		return false;
	}
	Global_87445[iVar0 - 3] = uParam0;
	return true;
}

void func_381(char* sParam0, vector3 vParam1, float fParam2, int iParam3)
{
	if (vdist2(get_entity_coords(player_ped_id(), 1), vParam1) < fParam4 * fParam4 && !*iParam5)
	{
		request_cutscene(sParam0, 8);
		*iParam5 = 1;
	}
	else
	{
		*iParam5 = 0;
	}
}

bool func_382(int iParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, float fParam5, int iParam6, int iParam7, float fParam8)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	
	fVar0 = -1f;
	switch (*iParam4.f_3)
	{
		case 0:
			*iParam4 = func_110();
			iVar5 = func_110();
			func_118(&iVar5, iParam0);
			func_119(&iVar5, iParam1);
			func_120(&iVar5, 0);
			if (func_399(*iParam4, iVar5))
			{
				func_397(&iVar5, 0, 0, 0, 1, 0, 0);
			}
			func_395(*iParam4, iVar5, &iVar1, &iVar2, &iVar3, &uVar6, &uVar7, &uVar8);
			*iParam4.f_11 = iVar1 + iVar2 * 60 + iVar3 + iParam6 * 3600;
			func_388(to_float(*iParam4.f_11) / 3600f);
			if (iParam7)
			{
				_0x5F0F3F56635809EF(0.6f);
				_set_far_shadows_suppressed(0);
				_0x0AE73D8DF3A762B2(0);
			}
			func_387();
			*iParam4.f_10 = get_sound_id();
			play_sound_frontend(*iParam4.f_10, "TIME_LAPSE_MASTER", 0, 1);
			start_audio_scene("TOD_SHIFT_SCENE");
			func_258();
			*iParam4.f_3++;
			break;
		
		case 1:
		case 2:
			if ((does_cam_exist(*iParam4.f_4) && is_cam_interpolating(*iParam4.f_4)) || !(fParam5 >= 0.99f || fParam5 == -1f))
			{
				if (does_cam_exist(*iParam4.f_4) && is_cam_interpolating(*iParam4.f_4))
				{
					fVar0 = get_cam_spline_phase(*iParam4.f_4);
				}
				else if (!(fParam5 >= 0.99f || fParam5 == -1f))
				{
					fVar0 = fParam5;
				}
				else
				{
					fVar0 = -1f;
				}
				if (fVar0 >= 0.5f)
				{
					if (*iParam4.f_3 == 1)
					{
						if (get_hash_key(sParam2) != 0)
						{
							_set_weather_type_over_time(sParam2, fParam8);
						}
						if (get_hash_key(sParam3) != 0)
						{
							_clear_cloud_hat();
							_set_cloud_hat_transition(sParam3, 0);
						}
						*iParam4.f_3 = 2;
					}
				}
			}
			if (fVar0 >= 0.99f || fVar0 == -1f)
			{
				iVar5 = *iParam4;
				func_397(&iVar5, *iParam4.f_11, 0, 0, 0, 0, 0);
				set_clock_time(func_109(iVar5), func_401(iVar5), func_386(iVar5));
				if (iParam7)
				{
					_0x03FC694AE06C5A20();
				}
				stop_sound(*iParam4.f_10);
				release_named_script_audio_bank("TIME_LAPSE");
				if (iParam7)
				{
					_0x0AE73D8DF3A762B2(1);
					_set_far_shadows_suppressed(1);
				}
				return true;
			}
			fVar11 = fVar0;
			fVar9 = 0.1f;
			fVar10 = 0.9f;
			fVar12 = func_233(fVar11 - fVar9 / fVar10 - fVar9, 0f, 1f);
			iVar4 = round(IntToFloat(*iParam4.f_11) * fVar12);
			iVar5 = *iParam4;
			func_397(&iVar5, iVar4, 0, 0, 0, 0, 0);
			set_clock_time(func_109(iVar5), func_401(iVar5), func_386(iVar5));
			if (func_385(iVar5) != get_clock_day_of_month())
			{
				set_clock_date(func_385(iVar5), func_117(iVar5), func_115(iVar5));
			}
			func_383();
			_0xE3E2C1B4C59DBC77(6);
			break;
	}
	return false;
}

void func_383()
{
	_0xEB2D525B57F42B40();
	func_384();
}

void func_384()
{
	Global_17118.f_134 = 1;
}

int func_385(int iParam0)
{
	return shift_right(iParam0, 4) & 31;
}

int func_386(int iParam0)
{
	return shift_right(iParam0, 20) & 63;
}

bool func_387()
{
	int iVar0;
	
	if (!is_entity_dead(player_ped_id(), 0))
	{
		return false;
	}
	if (!is_ped_sitting_in_any_vehicle(player_ped_id()))
	{
		return false;
	}
	iVar0 = get_vehicle_ped_is_in(player_ped_id(), 0);
	if (!is_entity_dead(iVar0, 0))
	{
		return false;
	}
	set_veh_radio_station(iVar0, "OFF");
	return true;
}

void func_388(float fParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_394(&(Global_101154.f_16793.f_175[iVar0 /*19*/].f_5)))
		{
			func_389(&(Global_101154.f_16793.f_175[iVar0 /*19*/].f_5), fParam0 * 60f);
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (func_394(&(Global_101154.f_16793.f_362[iVar1 /*3*/])))
		{
			func_389(&(Global_101154.f_16793.f_362[iVar1 /*3*/]), fParam0 * 60f);
		}
		iVar1++;
	}
	skip_radio_forward();
}

void func_389(int iParam0, float fParam1)
{
	if (func_394(iParam0))
	{
		func_390(iParam0, func_392(iParam0) + fParam1);
	}
}

void func_390(int iParam0, float fParam1)
{
	*iParam0.f_1 = func_391(is_bit_set(*iParam0, 4)) - fParam1;
	set_bit(iParam0, true);
	clear_bit(iParam0, 2);
	*iParam0.f_2 = 0f;
}

float func_391(int iParam0)
{
	int iVar0;
	
	if (iParam0)
	{
		return to_float(get_game_timer()) / 1000f;
	}
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time();
		return to_float(iVar0) / 1000f;
	}
	return to_float(get_game_timer()) / 1000f;
}

float func_392(var uParam0)
{
	if (func_394(uParam0))
	{
		if (func_393(uParam0))
		{
			return *uParam0.f_2;
		}
		else
		{
			return func_391(is_bit_set(*uParam0, 4)) - *uParam0.f_1;
		}
	}
	return *uParam0.f_1;
}

int func_393(var uParam0)
{
	return is_bit_set(*uParam0, 2);
}

int func_394(var uParam0)
{
	return is_bit_set(*uParam0, true);
}

void func_395(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_399(iParam0, iParam1))
	{
		iVar0 = func_117(iParam1);
		iVar1 = func_115(iParam0);
		iVar2 = func_115(iParam0) - func_115(iParam1);
		iVar3 = func_117(iParam0) - func_117(iParam1);
		iVar4 = func_385(iParam0) - func_385(iParam1);
		iVar5 = func_109(iParam0) - func_109(iParam1);
		iVar6 = func_401(iParam0) - func_401(iParam1);
		iVar7 = func_386(iParam0) - func_386(iParam1);
	}
	else
	{
		iVar0 = func_117(iParam0);
		iVar1 = func_115(iParam1);
		iVar2 = func_115(iParam1) - func_115(iParam0);
		iVar3 = func_117(iParam1) - func_117(iParam0);
		iVar4 = func_385(iParam1) - func_385(iParam0);
		iVar5 = func_109(iParam1) - func_109(iParam0);
		iVar6 = func_401(iParam1) - func_401(iParam0);
		iVar7 = func_386(iParam1) - func_386(iParam0);
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6--;
	}
	while (iVar7 > 59)
	{
		iVar7 -= 60;
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5--;
	}
	while (iVar6 > 59)
	{
		iVar6 -= 60;
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4--;
	}
	while (iVar5 > 23)
	{
		iVar5 -= 24;
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2--;
		}
		iVar4 += func_114(iVar0, iVar1);
		iVar3--;
		iVar0 = round(func_396(to_float(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2--;
	}
	while (iVar3 > 12)
	{
		iVar3 -= 12;
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_396(Vector3 fParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = fParam2 - fParam1;
	fParam0 -= IntToFloat(round(fParam0 - fParam1 / fVar0)) * fVar0;
	if (fParam0 < fParam1)
	{
		fParam0 += fVar0;
	}
	return fParam0;
}

void func_397(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_115(*iParam0);
	iVar1 = func_117(*iParam0);
	iVar2 = func_385(*iParam0);
	iVar3 = func_109(*iParam0);
	iVar4 = func_401(*iParam0);
	iVar5 = func_386(*iParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 += iParam1;
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 -= 60;
	}
	iVar4 += iParam2;
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 -= 60;
	}
	iVar3 += iParam3;
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 -= 24;
	}
	iVar2 += iParam4;
	iVar6 = func_114(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 -= iVar6;
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 -= 12;
		}
		iVar6 = func_114(iVar1, iVar0);
	}
	iVar1 += iParam5;
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 -= 12;
	}
	iVar0 += iParam6;
	func_398(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_398(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_120(uParam0, iParam1);
	func_119(uParam0, iParam2);
	func_118(uParam0, iParam3);
	func_112(uParam0, iParam5);
	func_113(uParam0, iParam4);
	func_111(uParam0, iParam6);
}

bool func_399(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_400(iParam1) || !func_400(iParam0))
	{
		return true;
	}
	iVar0 = func_115(iParam0);
	iVar1 = func_115(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_117(iParam0);
	iVar1 = func_117(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_385(iParam0);
	iVar1 = func_385(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_109(iParam0);
	iVar1 = func_109(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_401(iParam0);
	iVar1 = func_401(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_386(iParam0);
	iVar1 = func_386(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	return false;
}

bool func_400(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_386(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_401(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_109(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_115(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return false;
	}
	iVar4 = func_117(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_385(iParam0);
	if (iVar5 < 1 || iVar5 > func_114(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

int func_401(int iParam0)
{
	return shift_right(iParam0, 14) & 63;
}

void func_402(int iParam0, int iParam1)
{
	int iVar0;
	
	if (Global_55757)
	{
	}
	Global_55757 = 0;
	if (iParam0)
	{
		Global_55758 = 1;
	}
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_67844)
		{
			if (Global_55974[Global_67845[iVar0 /*9*/] /*13*/] == 4)
			{
				Global_67845[iVar0 /*9*/].f_5 = 0;
				return;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_67844)
		{
			if (Global_67845[iVar0 /*9*/] > 0)
			{
				if (Global_67845[iVar0 /*9*/] == iParam1)
				{
					Global_67845[iVar0 /*9*/].f_5 = 0;
					return;
				}
			}
			iVar0++;
		}
	}
}

bool func_403()
{
	if (Global_15712 == 0)
	{
		return true;
	}
	return false;
}

int func_404(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_17(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_15760 = 0;
	Global_15719 = 1;
	Global_15726 = 0;
	Global_15721 = 0;
	Global_16703 = 0;
	Global_16705 = 0;
	Global_16709 = 0;
	Global_15717 = 0;
	Global_15764 = 0;
	Global_15766 = 0;
	if (iParam5 == 1)
	{
		Global_15724 = 1;
	}
	else
	{
		Global_15724 = 0;
	}
	Global_2621441 = 0;
	return func_7(sParam3, iParam4, iParam8);
}

bool func_405()
{
	if (Global_91278 == 10 || Global_91278 == 9)
	{
		return true;
	}
	return false;
}

void func_406(int iParam0, int iParam1)
{
	int iVar0;
	
	Global_55759 = iParam0;
	if (!Global_55757)
	{
		Global_55757 = 1;
	}
	if (iParam1)
	{
		iVar0 = 0;
		while (iVar0 < Global_67844)
		{
			if (Global_67845[iVar0 /*9*/] == iParam0)
			{
				Global_67845[iVar0 /*9*/].f_1 = 0;
			}
			iVar0++;
		}
	}
}

int func_407(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_41(iParam0, !iParam1, 0);
	if ((iParam2 != 145 && does_blip_exist(iVar0)) && does_text_label_exist(&(Global_101154.f_32575[iParam2 /*29*/].f_3)))
	{
		set_blip_name_from_text_file(iVar0, &(Global_101154.f_32575[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

void func_408(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4)
{
	*uParam0 = floor(get_control_normal(2, 218) * 127f);
	*uParam1 = floor(get_control_normal(2, 219) * 127f);
	*uParam2 = floor(get_control_normal(2, 220) * 127f);
	*uParam3 = floor(get_control_normal(2, 221) * 127f);
	if (iParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = floor(get_disabled_control_normal(2, 218) * 127f);
			*uParam1 = floor(get_disabled_control_normal(2, 219) * 127f);
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = floor(get_disabled_control_normal(2, 220) * 127f);
			*uParam3 = floor(get_disabled_control_normal(2, 221) * 127f);
		}
	}
}

void func_409(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	vector3 vVar3;
	float fVar6;
	
	iVar0 = 0;
	iVar1 = -1;
	fVar2 = 0f;
	vVar3 = {get_entity_coords(player_ped_id(), 1)};
	iVar0 = 0;
	while (iVar0 < *uParam0 - 1)
	{
		fVar6 = vdist2(vVar3, *(uParam0[iVar0 /*3*/]));
		if (iVar1 == -1 || fVar6 < fVar2)
		{
			iVar1 = iVar0;
			fVar2 = fVar6;
		}
		iVar0++;
	}
	if (vdist2(vVar3, *(uParam0[iVar1 + 1 /*3*/])) < vdist2(*(uParam0[iVar1 /*3*/]), *(uParam0[iVar1 + 1 /*3*/])))
	{
		iVar1++;
	}
	if (*uParam1 != iVar1 || (iLocal_249 && get_player_wanted_level(player_id()) == 0))
	{
		if ((*uParam1 >= 0 && vdist2(get_entity_coords(player_ped_id(), 1), *(uParam0[*uParam1 /*3*/])) > 25f) || (iLocal_249 && get_player_wanted_level(player_id()) == 0))
		{
			_0x67EEDEA1B9BAFD94();
			_0x3D3D15AF7BCAAF83(156, 1, 0);
			iVar0 = iVar1;
			while (iVar0 <= *uParam0 - 1)
			{
				_0xA905192A6781C41B(*(uParam0[iVar0 /*3*/]));
				iVar0++;
			}
			_0xA905192A6781C41B(*(uParam0[*uParam0 - 1 /*3*/]));
			_0x3DDA37128DD1ACA8(1);
			iLocal_249 = 0;
		}
		*uParam1 = iVar1;
	}
}

void func_410()
{
	int iVar0;
	
	switch (iLocal_254)
	{
		case 0:
			if (func_177() == 2)
			{
				request_cutscene("rbhs_INT", 8);
			}
			else
			{
				request_cutscene("rbhs_INT", 8);
			}
			iLocal_254++;
			break;
		
		case 1:
			iLocal_673 = get_hash_key("SIDE_DOOR_METHLAB");
			add_door_to_system(iLocal_673, joaat("v_ilev_methdoorscuff"), 1392.74f, 3611.367f, 39.0919f, 1, 1, 0);
			_set_door_acceleration_limit(iLocal_673, 3, 1, 0);
			_set_door_ajar_angle(iLocal_673, 0f, 1, 0);
			iLocal_254++;
			break;
		
		case 2:
			if (func_373())
			{
				if (func_372("rbhs_int"))
				{
					if (!is_ped_sitting_in_any_vehicle(player_ped_id()))
					{
						func_702(91);
						set_roads_in_area(vLocal_108 + Vector(500f, 500f, 500f), vLocal_108 - Vector(500f, 500f, 500f), false, 1);
						func_364(1, 1, 1, 0);
						if (does_entity_exist(Global_88108.f_9[0]))
						{
							set_entity_as_mission_entity(Global_88108.f_9[0], true, 1);
							uLocal_313[2] = Global_88108.f_9[0];
							Global_88108.f_9[0] = 0;
						}
						if (!does_entity_exist(uLocal_313[2]))
						{
							register_entity_for_cutscene(uLocal_313[2], "Trevor", 2, joaat("player_two"), 0);
						}
						else if (!is_ped_injured(uLocal_313[2]))
						{
							register_entity_for_cutscene(uLocal_313[2], "Trevor", 0, false, 0);
						}
						clear_area_of_cops(vLocal_108, 500f, 0);
						if (func_177() == 2)
						{
							start_cutscene(256);
						}
						else
						{
							start_cutscene(0);
						}
						_0x48621C9FCA3EBD28(4);
						if (func_177() == 2)
						{
							iLocal_672 = true;
						}
						func_346(1, 1, 0);
						request_additional_text("BANKS1", false);
						request_additional_text(sLocal_276, 6);
						request_model(func_207(0, 0));
						iLocal_254++;
					}
					else if (get_script_task_status(player_ped_id(), -828834893) != 1)
					{
						task_leave_any_vehicle(player_ped_id(), false, 0);
					}
				}
				else
				{
					remove_cutscene();
					iLocal_254 = 0;
				}
			}
			break;
		
		case 3:
			request_vehicle_asset(joaat("premier"), 3);
			remove_particle_fx_in_range(get_entity_coords(player_ped_id(), 1), 300f);
			if (is_ped_in_any_vehicle(player_ped_id(), 0))
			{
				iVar0 = get_vehicle_ped_is_in(player_ped_id(), 0);
			}
			else
			{
				iVar0 = _0xB2D06FAEDE65B577();
			}
			if (does_entity_exist(iVar0) && is_vehicle_driveable(iVar0, 0))
			{
				if (!is_vehicle_model(iVar0, joaat("taxi")))
				{
					if (vdist(get_entity_coords(iVar0, 1), get_entity_coords(player_ped_id(), 1)) < 50f)
					{
						set_entity_as_mission_entity(iVar0, true, 1);
						if (func_215(iVar0) == 0 || is_big_vehicle(iVar0))
						{
							delete_vehicle(&iVar0);
						}
						else
						{
							func_187(iVar0, 1416.653f, 3622.32f, 33.8648f, 20.6293f, 24, 0);
							set_entity_coords(iVar0, 1416.653f, 3622.32f, 33.8648f, 1, false, 0, 1);
							set_entity_heading(iVar0, 20.6293f);
						}
					}
				}
			}
			clear_area(vLocal_127, 25f, 1, 0, 0, false);
			clear_area_of_objects(1391.651f, 3607.269f, 37.9419f, 10f, 2);
			func_701(24);
			if (is_screen_faded_out())
			{
				do_screen_fade_in(500);
			}
			iLocal_254++;
			break;
		
		case 4:
			if (is_cutscene_active())
			{
				if (!does_entity_exist(uLocal_313[2]) && does_entity_exist(get_entity_index_of_registered_entity("Trevor", false)))
				{
					uLocal_313[2] = get_ped_index_from_entity_index(get_entity_index_of_registered_entity("Trevor", false));
				}
			}
			func_682(vLocal_108, fLocal_111);
			if (!iLocal_671)
			{
				if (does_entity_exist(iLocal_67) && is_vehicle_driveable(iLocal_67, 0))
				{
					set_vehicle_engine_on(iLocal_67, false, 1, 0);
					iLocal_671 = 1;
				}
			}
			set_ped_min_move_blend_ratio(player_ped_id(), 1f);
			if (is_vehicle_driveable(iLocal_67, 0))
			{
				if (can_set_exit_state_for_registered_entity("Michael", false))
				{
					clear_ped_tasks_immediately(player_ped_id());
					set_entity_coords(player_ped_id(), vLocal_127, 1, false, 0, 1);
					set_entity_heading(player_ped_id(), fLocal_130);
					force_ped_motion_state(player_ped_id(), -668482597, false, 0, 0);
					simulate_player_input_gait(player_id(), 1f, 2500, 10f, 1, 0);
				}
				if (can_set_exit_state_for_registered_entity("Trevor", false))
				{
					if (iLocal_672)
					{
						if (!does_entity_exist(uLocal_313[2]))
						{
							func_681(&(uLocal_313[2]), 2, vLocal_135, fLocal_138, 0, 0, 0);
						}
						func_411(0, 0);
						clear_ped_tasks_immediately(player_ped_id());
						set_entity_coords(player_ped_id(), vLocal_127, 1, false, 0, 1);
						set_entity_heading(player_ped_id(), fLocal_130);
						force_ped_motion_state(player_ped_id(), -668482597, false, 0, 0);
						simulate_player_input_gait(player_id(), 1f, 2500, 10f, 1, 0);
					}
					if (!is_ped_injured(uLocal_313[2]))
					{
						set_entity_coords(uLocal_313[2], vLocal_135, 1, false, 0, 1);
						set_entity_heading(uLocal_313[2], fLocal_138);
						clear_ped_tasks_immediately(uLocal_313[2]);
						force_ped_motion_state(player_ped_id(), -668482597, false, 0, 0);
						set_ped_reset_flag(uLocal_313[2], 237, true);
					}
				}
			}
			set_gameplay_cam_relative_heading(0);
			set_gameplay_cam_relative_pitch(0, 1f);
			if (!is_cutscene_active())
			{
				if (!has_additional_text_loaded(false) || !has_additional_text_loaded(6))
				{
					while (!has_additional_text_loaded(false) || !has_additional_text_loaded(6))
					{
						wait(false);
					}
				}
				if (!is_ped_injured(uLocal_313[2]))
				{
					set_ped_as_enemy(uLocal_313[2], 0);
					set_ped_can_be_targetted(uLocal_313[2], false);
					set_ped_can_be_dragged_out(uLocal_313[2], 0);
					set_ped_relationship_group_hash(uLocal_313[2], 1862763509);
				}
				_0x81CBAE94390F9F89();
				clear_area(vLocal_108, 20f, 1, 0, 0, false);
				func_701(24);
				func_364(0, 1, 1, 0);
				iLocal_235 = 0;
				remove_cutscene();
				func_28(1);
			}
			break;
	}
	set_ped_max_move_blend_ratio(player_ped_id(), 1f);
}

bool func_411(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	
	Global_17118.f_13 = 0;
	if (is_ped_injured(player_ped_id()))
	{
		return true;
	}
	iVar0 = func_149(iParam0);
	iVar1 = func_93(iVar0);
	if (iVar1 == 0)
	{
		return true;
	}
	if (is_ped_model(player_ped_id(), iVar1))
	{
		return true;
	}
	request_model(iVar1);
	if (!has_model_loaded(iVar1))
	{
		return false;
	}
	if (is_ped_in_any_vehicle(player_ped_id(), 0))
	{
		iVar2 = get_vehicle_ped_is_in(player_ped_id(), 0);
		if (player_ped_id() == get_ped_in_vehicle_seat(iVar2, -1))
		{
			iVar3 = -1;
		}
		else if (player_ped_id() == get_ped_in_vehicle_seat(iVar2, false))
		{
			iVar3 = false;
		}
		else if (player_ped_id() == get_ped_in_vehicle_seat(iVar2, true))
		{
			iVar3 = true;
		}
		else if (player_ped_id() == get_ped_in_vehicle_seat(iVar2, 2))
		{
			iVar3 = 2;
		}
		else
		{
			iVar3 = -1;
		}
	}
	else
	{
		iVar2 = false;
	}
	if (does_entity_exist(iVar2) && is_vehicle_driveable(iVar2, 0))
	{
		clear_ped_tasks_immediately(player_ped_id());
		func_414(&(Global_17072[iParam0]), iVar0, iVar2, iVar3, iParam1, 0, 0);
	}
	else
	{
		vVar4 = {get_entity_coords(player_ped_id(), 1)};
		get_ground_z_for_3d_coord(vVar4, &(vVar4.f_2), 0);
		func_681(&(Global_17072[iParam0]), iVar0, vVar4, get_entity_heading(player_ped_id()), iParam1, 0, 0);
	}
	Global_17072.f_7 = iParam0;
	Global_17072.f_39 = 1;
	func_89(&Global_17072, 0, 0, 0);
	func_412(iParam0);
	return true;
}

void func_412(int iParam0)
{
	return;
	Global_17118.f_126 = 1;
	Global_17118.f_127 = func_413(iParam0);
	Global_17118.f_129 = get_game_timer();
}

int func_413(int iParam0)
{
	if (iParam0 == 0)
	{
		return 3;
	}
	else if (iParam0 == 1)
	{
		return 0;
	}
	else if (iParam0 == 2)
	{
		return 1;
	}
	else if (iParam0 == 3)
	{
		return 2;
	}
	return 0;
}

bool func_414(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (func_147(iParam1))
	{
		iVar0 = func_93(iParam1);
		request_model(iVar0);
		if (has_model_loaded(iVar0))
		{
			if (does_entity_exist(*iParam0))
			{
				delete_ped(iParam0);
			}
			if (does_entity_exist(iParam2) && is_vehicle_driveable(iParam2, 0))
			{
				*iParam0 = create_ped_inside_vehicle(iParam2, 26, iVar0, iParam3, 1, true);
				func_680(*iParam0, iParam1, iParam5);
				_0xE861D0B05C7662B8(*iParam0, 0, 0);
				func_673(*iParam0);
				func_668(*iParam0, 1, 0);
				func_667(*iParam0);
				func_664(*iParam0);
				func_416(*iParam0, iParam6);
				func_415(*iParam0);
				if (iParam4)
				{
					set_model_as_no_longer_needed(iVar0);
				}
			}
			return true;
		}
	}
	return false;
}

void func_415(int iParam0)
{
	int iVar0;
	
	if (is_ped_injured(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (does_entity_exist(Global_88980[iVar0]) && Global_88980[iVar0] == iParam0)
		{
			return;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!does_entity_exist(Global_88980[iVar0]))
		{
			Global_88980[iVar0] = iParam0;
			return;
		}
		iVar0++;
	}
}

bool func_416(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_148(iParam0);
	if (func_663(iVar0))
	{
		func_662(iVar0, 0);
		func_648(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		func_506(iParam0, 1);
		return true;
	}
	if (!iParam1)
	{
		if (func_504(iParam0))
		{
			func_662(iVar0, 0);
			func_648(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			func_506(iParam0, 1);
			return true;
		}
	}
	iVar1 = false;
	switch (iVar0)
	{
		case 0:
			if (Global_101154.f_7775.f_99.f_58[120] && !Global_101154.f_7775.f_99.f_58[122])
			{
				func_648(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				Global_101154.f_7775.f_99.f_58[121] = 1;
				return true;
			}
			if (Global_101154.f_7775.f_99.f_58[123])
			{
				Global_101154.f_7775.f_99.f_58[123] = 0;
				if (!is_ped_injured(iParam0))
				{
					if (func_485(iParam0, 3, 169))
					{
						func_648(iParam0, 3, 85, 0, -1, 0, 0, 0, -1, -1, -1, 0);
						return true;
					}
				}
			}
			if (func_485(iParam0, 12, 6))
			{
				func_648(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return true;
			}
			if (func_485(iParam0, 12, 17))
			{
				if (!func_417(get_entity_model(iParam0), 12, 17))
				{
					func_648(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return true;
				}
			}
			if (func_485(iParam0, 12, 20))
			{
				if (!func_417(get_entity_model(iParam0), 12, 20))
				{
					func_648(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return true;
				}
			}
			if (func_485(iParam0, 12, 21))
			{
				if (!func_417(get_entity_model(iParam0), 12, 21))
				{
					func_648(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return true;
				}
			}
			if (func_485(iParam0, 12, 22))
			{
				if (!func_417(get_entity_model(iParam0), 12, 22))
				{
					func_648(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return true;
				}
			}
			if (func_485(iParam0, 12, 11))
			{
				func_648(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return true;
			}
			if (func_485(iParam0, 12, 10))
			{
				func_648(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return true;
			}
			if (func_485(iParam0, 12, 50))
			{
				func_648(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return true;
			}
			if (func_485(iParam0, 14, 59))
			{
				func_648(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				iVar1 = true;
			}
			if (func_485(iParam0, 8, 22))
			{
				func_648(iParam0, 8, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				iVar1 = true;
			}
			if (iVar1)
			{
				return true;
			}
			if (func_485(iParam0, 12, 14))
			{
				func_648(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return true;
			}
			break;
		
		case 1:
			if (func_485(iParam0, 12, 13))
			{
				if (!func_417(get_entity_model(iParam0), 12, 13))
				{
					func_648(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return true;
				}
			}
			if (func_485(iParam0, 12, 14))
			{
				if (!func_417(get_entity_model(iParam0), 12, 14))
				{
					func_648(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return true;
				}
			}
			if (func_485(iParam0, 12, 15))
			{
				if (!func_417(get_entity_model(iParam0), 12, 15))
				{
					func_648(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return true;
				}
			}
			if (func_485(iParam0, 12, 4))
			{
				func_648(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return true;
			}
			if (func_485(iParam0, 12, 3))
			{
				func_648(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return true;
			}
			if (func_485(iParam0, 14, 82))
			{
				func_648(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				iVar1 = true;
			}
			if (func_485(iParam0, 8, 76))
			{
				func_648(iParam0, 8, 26, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				iVar1 = true;
			}
			if (iVar1)
			{
				return true;
			}
			if (func_485(iParam0, 12, 1))
			{
				func_648(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return true;
			}
			break;
		
		case 2:
			if (func_485(iParam0, 12, 12))
			{
				func_648(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return true;
			}
			if (func_485(iParam0, 12, 15))
			{
				func_648(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return true;
			}
			if (!iParam1)
			{
				if (func_485(iParam0, 3, 71))
				{
					func_648(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return true;
				}
			}
			if (func_485(iParam0, 12, 17))
			{
				if (!func_417(get_entity_model(iParam0), 12, 17))
				{
					func_648(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return true;
				}
			}
			if (func_485(iParam0, 12, 18))
			{
				if (!func_417(get_entity_model(iParam0), 12, 18))
				{
					func_648(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return true;
				}
			}
			if (func_485(iParam0, 12, 19))
			{
				if (!func_417(get_entity_model(iParam0), 12, 19))
				{
					func_648(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return true;
				}
			}
			if (func_485(iParam0, 12, 7))
			{
				func_648(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return true;
			}
			if (func_485(iParam0, 12, 6))
			{
				func_648(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return true;
			}
			if (func_485(iParam0, 14, 88))
			{
				func_648(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				iVar1 = true;
			}
			if (func_485(iParam0, 8, 17))
			{
				func_648(iParam0, 8, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				iVar1 = true;
			}
			if (iVar1)
			{
				return true;
			}
			if (func_485(iParam0, 12, 11))
			{
				func_648(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return true;
			}
			break;
	}
	return false;
}

int func_417(int iParam0, int iParam1, int iParam2)
{
	Global_69311[1 /*14*/] = {func_418(iParam0, iParam1, iParam2)};
	return is_bit_set(Global_69311[1 /*14*/].f_6, true);
}

struct<14> func_418(int iParam0, int iParam1, int iParam2)
{
	func_484();
	if (iParam0 == joaat("player_zero"))
	{
		func_466(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_one"))
	{
		func_447(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_two"))
	{
		func_419(iParam1, iParam2);
	}
	return Global_69311[0 /*14*/];
}

void func_419(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_446(iParam1);
			break;
		
		case 2:
			func_445(iParam1);
			break;
		
		case 3:
			func_442(iParam1);
			break;
		
		case 4:
			func_441(iParam1);
			break;
		
		case 6:
			func_440(iParam1);
			break;
		
		case 5:
			func_439(iParam1);
			break;
		
		case 8:
			func_438(iParam1);
			break;
		
		case 9:
			func_437(iParam1);
			break;
		
		case 10:
			func_436(iParam1);
			break;
		
		case 1:
			func_435(iParam1);
			break;
		
		case 7:
			func_434(iParam1);
			break;
		
		case 11:
			func_433(iParam1);
			break;
		
		case 12:
			func_432(iParam1);
			break;
		
		case 13:
			func_431(iParam1);
			break;
		
		case 14:
			func_420(iParam1);
			break;
	}
}

void func_420(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	Global_69311[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 8;
			break;
		
		case 154:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 2;
			break;
		
		case 88:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 10;
			break;
		
		case 89:
			StringCopy(&Var2, "PROPS_P2_E1", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 45;
			iVar8 = 10;
			break;
		
		case 90:
			StringCopy(&Var2, "PROPS_P2_E2", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar8 = 10;
			break;
		
		case 91:
			StringCopy(&Var2, "PROPS_P2_E2_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 10;
			break;
		
		case 92:
			StringCopy(&Var2, "PROPS_P2_E2_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 93:
			StringCopy(&Var2, "PROPS_P2_E2_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 52;
			iVar8 = 10;
			break;
		
		case 94:
			StringCopy(&Var2, "PROPS_P2_E2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 54;
			iVar8 = 10;
			break;
		
		case 95:
			StringCopy(&Var2, "PROPS_P2_E2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 54;
			iVar8 = 10;
			break;
		
		case 96:
			StringCopy(&Var2, "PROPS_P2_E2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 97:
			StringCopy(&Var2, "PROPS_P2_E2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 98:
			StringCopy(&Var2, "PROPS_P2_E2_8", 16);
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 58;
			iVar8 = 10;
			break;
		
		case 99:
			StringCopy(&Var2, "PROPS_P2_E2_9", 16);
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 58;
			iVar8 = 10;
			break;
		
		case 100:
			StringCopy(&Var2, "PROPS_P2_E3", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 101:
			StringCopy(&Var2, "PROPS_P2_E3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 102:
			StringCopy(&Var2, "PROPS_P2_E3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 103:
			StringCopy(&Var2, "PROPS_P2_E3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 104:
			StringCopy(&Var2, "PROPS_P2_E3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 105:
			StringCopy(&Var2, "PROPS_P2_E3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 106:
			StringCopy(&Var2, "PROPS_P2_E3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 107:
			StringCopy(&Var2, "PROPS_P2_E3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 108:
			StringCopy(&Var2, "PROPS_P2_E3_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 109:
			StringCopy(&Var2, "PROPS_P2_E3_9", 16);
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 110:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar8 = 10;
			break;
		
		case 111:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar8 = 10;
			break;
		
		case 112:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar8 = 10;
			break;
		
		case 113:
			StringCopy(&Var2, "PROPS_P2_E7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 60;
			iVar8 = 10;
			break;
		
		case 114:
			StringCopy(&Var2, "PROPS_P2_E7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 10;
			break;
		
		case 115:
			StringCopy(&Var2, "PROPS_P2_E7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 50;
			iVar8 = 10;
			break;
		
		case 116:
			StringCopy(&Var2, "PROPS_P2_E7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 59;
			iVar8 = 10;
			break;
		
		case 117:
			StringCopy(&Var2, "PROPS_P2_E7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 118:
			StringCopy(&Var2, "PROPS_P2_E7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 119:
			StringCopy(&Var2, "PROPS_P2_E7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 65;
			iVar8 = 10;
			break;
		
		case 120:
			StringCopy(&Var2, "PROPS_P2_E7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 59;
			iVar8 = 10;
			break;
		
		case 121:
			StringCopy(&Var2, "PROPS_P2_E7_8", 16);
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 79;
			iVar8 = 10;
			break;
		
		case 122:
			StringCopy(&Var2, "PROPS_P2_E7_9", 16);
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 79;
			iVar8 = 10;
			break;
		
		case 123:
			StringCopy(&Var2, "PROPS_P2_E8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 150;
			iVar8 = 10;
			break;
		
		case 124:
			StringCopy(&Var2, "PROPS_P2_E8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 150;
			iVar8 = 10;
			break;
		
		case 125:
			StringCopy(&Var2, "PROPS_P2_E8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 170;
			iVar8 = 10;
			break;
		
		case 126:
			StringCopy(&Var2, "PROPS_P2_E8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 127:
			StringCopy(&Var2, "PROPS_P2_E8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 180;
			iVar8 = 10;
			break;
		
		case 128:
			StringCopy(&Var2, "PROPS_P2_E8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 185;
			iVar8 = 10;
			break;
		
		case 129:
			StringCopy(&Var2, "PROPS_P2_E8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 189;
			iVar8 = 10;
			break;
		
		case 130:
			StringCopy(&Var2, "PROPS_P2_E8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 195;
			iVar8 = 10;
			break;
		
		case 131:
			StringCopy(&Var2, "PROPS_P2_E8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 210;
			iVar8 = 10;
			break;
		
		case 132:
			StringCopy(&Var2, "PROPS_P2_E8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 215;
			iVar8 = 10;
			break;
		
		case 133:
			StringCopy(&Var2, "PROPS_P2_E9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 165;
			iVar8 = 10;
			break;
		
		case 134:
			StringCopy(&Var2, "PROPS_P2_E9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 165;
			iVar8 = 10;
			break;
		
		case 135:
			StringCopy(&Var2, "PROPS_P2_E9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 169;
			iVar8 = 10;
			break;
		
		case 136:
			StringCopy(&Var2, "PROPS_P2_E9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 169;
			iVar8 = 10;
			break;
		
		case 137:
			StringCopy(&Var2, "PROPS_P2_E9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 138:
			StringCopy(&Var2, "PROPS_P2_E9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 139:
			StringCopy(&Var2, "PROPS_P2_E9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 140:
			StringCopy(&Var2, "PROPS_P2_E9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 189;
			iVar8 = 10;
			break;
		
		case 141:
			StringCopy(&Var2, "PROPS_P2_E9_8", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 195;
			iVar8 = 10;
			break;
		
		case 142:
			StringCopy(&Var2, "PROPS_P2_E9_9", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 195;
			iVar8 = 10;
			break;
		
		case 143:
			StringCopy(&Var2, "PROPS_P2_E10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 49;
			iVar8 = 10;
			break;
		
		case 144:
			StringCopy(&Var2, "PROPS_P2_E10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 10;
			break;
		
		case 145:
			StringCopy(&Var2, "PROPS_P2_E10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 52;
			iVar8 = 10;
			break;
		
		case 146:
			StringCopy(&Var2, "PROPS_P2_E10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 147:
			StringCopy(&Var2, "PROPS_P2_E10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 60;
			iVar8 = 10;
			break;
		
		case 148:
			StringCopy(&Var2, "PROPS_P2_E10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 58;
			iVar8 = 10;
			break;
		
		case 149:
			StringCopy(&Var2, "PROPS_P2_E10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 60;
			iVar8 = 10;
			break;
		
		case 150:
			StringCopy(&Var2, "PROPS_P2_E10_7", 16);
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 63;
			iVar8 = 10;
			break;
		
		case 151:
			StringCopy(&Var2, "PROPS_P2_E10_8", 16);
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 65;
			iVar8 = 10;
			break;
		
		case 152:
			StringCopy(&Var2, "PROPS_P2_E10_9", 16);
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 68;
			iVar8 = 10;
			break;
		
		case 153:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 100;
			iVar8 = 10;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "PROPS_P2_H2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 320;
			iVar8 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "PROPS_P2_H7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "PROPS_P2_H7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar8 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar8 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar8 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar8 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 10;
			iVar8 = 0;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 11;
			iVar8 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 12;
			iVar8 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 13;
			iVar8 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 14;
			iVar8 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 15;
			iVar8 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar8 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar8 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 270;
			iVar8 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 270;
			iVar8 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 200;
			iVar8 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 200;
			iVar8 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 350;
			iVar8 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 350;
			iVar8 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 450;
			iVar8 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 500;
			iVar8 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 500;
			iVar8 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 50;
			iVar8 = 0;
			break;
		
		case 57:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 0;
			break;
		
		case 58:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 59:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 60:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 61:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 62:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 63:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 64:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 65:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 66:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 67:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 68:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 69:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 70:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 25;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 71:
			StringCopy(&Var2, "PROPS_P1_H26_0", 16);
			iVar6 = 26;
			iVar7 = 0;
			iVar1 = 20;
			iVar8 = 0;
			break;
		
		case 72:
			StringCopy(&Var2, "PROPS_P1_H26_1", 16);
			iVar6 = 26;
			iVar7 = 1;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "PROPS_P1_H26_2", 16);
			iVar6 = 26;
			iVar7 = 2;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "PROPS_P1_H26_3", 16);
			iVar6 = 26;
			iVar7 = 3;
			iVar1 = 22;
			iVar8 = 0;
			break;
		
		case 75:
			StringCopy(&Var2, "PROPS_P1_H26_4", 16);
			iVar6 = 26;
			iVar7 = 4;
			iVar1 = 20;
			iVar8 = 0;
			break;
		
		case 76:
			StringCopy(&Var2, "PROPS_P1_H26_5", 16);
			iVar6 = 26;
			iVar7 = 5;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 77:
			StringCopy(&Var2, "PROPS_P1_H26_6", 16);
			iVar6 = 26;
			iVar7 = 6;
			iVar1 = 28;
			iVar8 = 0;
			break;
		
		case 78:
			StringCopy(&Var2, "PROPS_P1_H26_7", 16);
			iVar6 = 26;
			iVar7 = 7;
			iVar1 = 24;
			iVar8 = 0;
			break;
		
		case 79:
			StringCopy(&Var2, "PROPS_P1_H26_8", 16);
			iVar6 = 26;
			iVar7 = 8;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 80:
			StringCopy(&Var2, "PROPS_P1_H26_9", 16);
			iVar6 = 26;
			iVar7 = 9;
			iVar1 = 22;
			iVar8 = 0;
			break;
		
		case 81:
			StringCopy(&Var2, "PROPS_P1_H26_10", 16);
			iVar6 = 26;
			iVar7 = 10;
			iVar1 = 18;
			iVar8 = 0;
			break;
		
		case 82:
			StringCopy(&Var2, "PROPS_P1_H26_11", 16);
			iVar6 = 26;
			iVar7 = 11;
			iVar1 = 20;
			iVar8 = 0;
			break;
		
		case 83:
			StringCopy(&Var2, "PROPS_P1_H26_12", 16);
			iVar6 = 26;
			iVar7 = 12;
			iVar1 = 24;
			iVar8 = 0;
			break;
		
		case 84:
			StringCopy(&Var2, "PROPS_P1_H26_13", 16);
			iVar6 = 26;
			iVar7 = 13;
			iVar1 = 22;
			iVar8 = 0;
			break;
		
		case 85:
			StringCopy(&Var2, "PROPS_P1_H26_14", 16);
			iVar6 = 26;
			iVar7 = 14;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 86:
			StringCopy(&Var2, "PROPS_P1_H26_15", 16);
			iVar6 = 26;
			iVar7 = 15;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 87:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 27;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		default:
			func_429(iVar10, iParam0, 155);
			return;
			break;
	}
	func_421(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_421(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	var uVar1;
	
	*uParam0.f_6 = 0;
	*uParam0 = iParam9;
	*uParam0.f_1 = iParam2 % 32;
	*uParam0.f_2 = iParam2 / 32;
	*uParam0.f_3 = iParam4;
	*uParam0.f_4 = iParam5;
	*uParam0.f_7 = iParam6;
	StringCopy(uParam0.f_8, sParam3, 16);
	*uParam0.f_13 = iParam8;
	*uParam0.f_12 = func_428(iParam8);
	if ((*uParam0.f_2 >= 10 && *uParam0.f_5 >= 0) && *uParam0.f_5 < 3)
	{
		if (!iParam10)
		{
		}
		*uParam0.f_2 = 0;
	}
	if (get_hash_key(sParam3) != get_hash_key("NO_LABEL"))
	{
	}
	if (iParam7)
	{
		set_bit(uParam0.f_6, 3);
	}
	if (iParam10)
	{
		set_bit(uParam0.f_6, false);
		if (*uParam0.f_5 >= 0 && *uParam0.f_5 < 3)
		{
			set_bit(uParam0.f_6, 5);
		}
		set_bit(uParam0.f_6, true);
		set_bit(uParam0.f_6, 2);
		set_bit(uParam0.f_6, 6);
		if (func_13(14))
		{
			return;
		}
		if (iParam1 == 1)
		{
			if (_0x341DE7ED1D2A1BFD(Global_2621444, 1827025211, false))
			{
				set_bit(uParam0.f_6, 7);
			}
		}
		if (iParam1 == 12)
		{
			if (!func_426(Global_2621444, 1, 1, 1, -1))
			{
				clear_bit(uParam0.f_6, 2);
			}
			if (!func_426(Global_2621444, 2, 1, 1, -1))
			{
				set_bit(uParam0.f_6, 4);
			}
		}
		else if (iParam1 == 13)
		{
		}
		else if (iParam1 == 14)
		{
			if (!func_426(Global_2621444, 1, 1, 1, -1))
			{
				clear_bit(uParam0.f_6, 2);
			}
			if (!func_426(Global_2621444, 2, 1, 1, -1))
			{
				set_bit(uParam0.f_6, 4);
			}
		}
		else
		{
			if (!func_426(Global_2621444, 1, 1, 1, -1))
			{
				clear_bit(uParam0.f_6, 2);
			}
			if (!func_426(Global_2621444, 2, 1, 1, -1))
			{
				set_bit(uParam0.f_6, 4);
			}
		}
	}
	else if (*uParam0.f_5 >= 0 && *uParam0.f_5 < 3)
	{
		set_bit(uParam0.f_6, false);
		set_bit(uParam0.f_6, 5);
		if (func_425(iParam1, *uParam0.f_5, *uParam0.f_2, 0, *uParam0.f_1, 0, 0))
		{
			set_bit(uParam0.f_6, true);
		}
		if (func_425(iParam1, *uParam0.f_5, *uParam0.f_2, 1, *uParam0.f_1, 0, 0))
		{
			set_bit(uParam0.f_6, 2);
		}
		if (!func_425(iParam1, *uParam0.f_5, *uParam0.f_2, 2, *uParam0.f_1, 0, 0))
		{
			set_bit(uParam0.f_6, 4);
		}
	}
	else
	{
		set_bit(uParam0.f_6, false);
		if ((((((((((iParam1 == 11 || iParam1 == 4) || iParam1 == 6) || iParam1 == 1) || iParam1 == 14) || iParam1 == 2) || iParam1 == 8) || iParam1 == 9) || iParam1 == 10) || iParam1 == 7) || iParam1 == 12)
		{
			if (func_13(14))
			{
				return;
			}
			iVar0 = func_34(func_424(iParam1, *uParam0.f_2), Global_69309, 0);
			if (is_bit_set(iVar0, *uParam0.f_1))
			{
				set_bit(uParam0.f_6, true);
			}
			iVar0 = func_34(func_423(iParam1, *uParam0.f_2), Global_69309, 0);
			if (is_bit_set(iVar0, *uParam0.f_1))
			{
				set_bit(uParam0.f_6, 2);
			}
			if (func_422(iParam1, *uParam0.f_2, &uVar1))
			{
				iVar0 = func_34(uVar1, Global_69309, 0);
				if (!is_bit_set(iVar0, *uParam0.f_1))
				{
					set_bit(uParam0.f_6, 4);
				}
			}
		}
		else
		{
			set_bit(uParam0.f_6, true);
			set_bit(uParam0.f_6, 2);
		}
	}
	if (iParam1 == 14)
	{
		if (iParam4 == -1)
		{
			set_bit(uParam0.f_6, true);
			set_bit(uParam0.f_6, 2);
		}
	}
}

int func_422(int iParam0, int iParam1, var uParam2)
{
	*uParam2 = 971;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 972;
					break;
				
				case 3:
					*uParam2 = 1422;
					break;
				
				case 4:
					*uParam2 = 988;
					break;
				
				case 6:
					*uParam2 = 996;
					break;
				
				case 8:
					*uParam2 = 1423;
					break;
				
				case 9:
					*uParam2 = 1431;
					break;
				
				case 10:
					*uParam2 = 1433;
					break;
				
				case 1:
					*uParam2 = 1004;
					break;
				
				case 7:
					*uParam2 = 1434;
					break;
				
				case 11:
					*uParam2 = 980;
					break;
				
				case 14:
					*uParam2 = 1012;
					break;
				
				case 12:
					*uParam2 = 1023;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 973;
					break;
				
				case 4:
					*uParam2 = 989;
					break;
				
				case 6:
					*uParam2 = 997;
					break;
				
				case 8:
					*uParam2 = 1424;
					break;
				
				case 9:
					*uParam2 = 1432;
					break;
				
				case 7:
					*uParam2 = 1435;
					break;
				
				case 11:
					*uParam2 = 981;
					break;
				
				case 14:
					*uParam2 = 1013;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 974;
					break;
				
				case 4:
					*uParam2 = 990;
					break;
				
				case 6:
					*uParam2 = 998;
					break;
				
				case 8:
					*uParam2 = 1425;
					break;
				
				case 7:
					*uParam2 = 1436;
					break;
				
				case 11:
					*uParam2 = 982;
					break;
				
				case 14:
					*uParam2 = 1014;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 991;
					break;
				
				case 6:
					*uParam2 = 999;
					break;
				
				case 8:
					*uParam2 = 1426;
					break;
				
				case 11:
					*uParam2 = 983;
					break;
				
				case 14:
					*uParam2 = 1015;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 992;
					break;
				
				case 6:
					*uParam2 = 1000;
					break;
				
				case 8:
					*uParam2 = 1427;
					break;
				
				case 11:
					*uParam2 = 984;
					break;
				
				case 14:
					*uParam2 = 1016;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 993;
					break;
				
				case 6:
					*uParam2 = 1001;
					break;
				
				case 8:
					*uParam2 = 1428;
					break;
				
				case 11:
					*uParam2 = 985;
					break;
				
				case 14:
					*uParam2 = 1017;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 994;
					break;
				
				case 6:
					*uParam2 = 1002;
					break;
				
				case 8:
					*uParam2 = 1429;
					break;
				
				case 11:
					*uParam2 = 986;
					break;
				
				case 14:
					*uParam2 = 1018;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 995;
					break;
				
				case 6:
					*uParam2 = 1003;
					break;
				
				case 8:
					*uParam2 = 1430;
					break;
				
				case 11:
					*uParam2 = 987;
					break;
				
				case 14:
					*uParam2 = 1019;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1020;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1021;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1022;
					break;
			}
			break;
	}
	return *uParam2 != 971;
}

int func_423(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 920;
					break;
				
				case 3:
					return 1407;
					break;
				
				case 4:
					return 936;
					break;
				
				case 6:
					return 944;
					break;
				
				case 8:
					return 1408;
					break;
				
				case 9:
					return 1416;
					break;
				
				case 10:
					return 1418;
					break;
				
				case 1:
					return 952;
					break;
				
				case 7:
					return 1419;
					break;
				
				case 11:
					return 928;
					break;
				
				case 14:
					return 960;
					break;
				
				case 12:
					return 971;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 921;
					break;
				
				case 4:
					return 937;
					break;
				
				case 6:
					return 945;
					break;
				
				case 8:
					return 1409;
					break;
				
				case 9:
					return 1417;
					break;
				
				case 7:
					return 1420;
					break;
				
				case 11:
					return 929;
					break;
				
				case 14:
					return 961;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					return 922;
					break;
				
				case 4:
					return 938;
					break;
				
				case 6:
					return 946;
					break;
				
				case 8:
					return 1410;
					break;
				
				case 7:
					return 1421;
					break;
				
				case 11:
					return 930;
					break;
				
				case 14:
					return 962;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 939;
					break;
				
				case 6:
					return 947;
					break;
				
				case 8:
					return 1411;
					break;
				
				case 11:
					return 931;
					break;
				
				case 14:
					return 963;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					return 940;
					break;
				
				case 6:
					return 948;
					break;
				
				case 8:
					return 1412;
					break;
				
				case 11:
					return 932;
					break;
				
				case 14:
					return 964;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					return 941;
					break;
				
				case 6:
					return 949;
					break;
				
				case 8:
					return 1413;
					break;
				
				case 11:
					return 933;
					break;
				
				case 14:
					return 965;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					return 942;
					break;
				
				case 6:
					return 950;
					break;
				
				case 8:
					return 1414;
					break;
				
				case 11:
					return 934;
					break;
				
				case 14:
					return 966;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					return 943;
					break;
				
				case 6:
					return 951;
					break;
				
				case 8:
					return 1415;
					break;
				
				case 11:
					return 935;
					break;
				
				case 14:
					return 967;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 968;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 969;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 970;
					break;
			}
			break;
	}
	return 928;
}

int func_424(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 868;
					break;
				
				case 3:
					return 1392;
					break;
				
				case 4:
					return 884;
					break;
				
				case 6:
					return 892;
					break;
				
				case 8:
					return 1393;
					break;
				
				case 9:
					return 1401;
					break;
				
				case 10:
					return 1403;
					break;
				
				case 1:
					return 900;
					break;
				
				case 7:
					return 1404;
					break;
				
				case 11:
					return 876;
					break;
				
				case 14:
					return 908;
					break;
				
				case 12:
					return 919;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 869;
					break;
				
				case 4:
					return 885;
					break;
				
				case 6:
					return 893;
					break;
				
				case 8:
					return 1394;
					break;
				
				case 9:
					return 1402;
					break;
				
				case 7:
					return 1405;
					break;
				
				case 11:
					return 877;
					break;
				
				case 14:
					return 909;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					return 870;
					break;
				
				case 4:
					return 886;
					break;
				
				case 6:
					return 894;
					break;
				
				case 8:
					return 1395;
					break;
				
				case 7:
					return 1406;
					break;
				
				case 11:
					return 878;
					break;
				
				case 14:
					return 910;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 887;
					break;
				
				case 6:
					return 895;
					break;
				
				case 8:
					return 1396;
					break;
				
				case 11:
					return 879;
					break;
				
				case 14:
					return 911;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					return 888;
					break;
				
				case 6:
					return 896;
					break;
				
				case 8:
					return 1397;
					break;
				
				case 11:
					return 880;
					break;
				
				case 14:
					return 912;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					return 889;
					break;
				
				case 6:
					return 897;
					break;
				
				case 8:
					return 1398;
					break;
				
				case 11:
					return 881;
					break;
				
				case 14:
					return 913;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					return 890;
					break;
				
				case 6:
					return 898;
					break;
				
				case 8:
					return 1399;
					break;
				
				case 11:
					return 882;
					break;
				
				case 14:
					return 914;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					return 891;
					break;
				
				case 6:
					return 899;
					break;
				
				case 8:
					return 1400;
					break;
				
				case 11:
					return 883;
					break;
				
				case 14:
					return 915;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 916;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 917;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 918;
					break;
			}
			break;
	}
	return 876;
}

int func_425(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (iParam0 == 0)
	{
		if (iParam5 == 1)
		{
			set_bit(&(Global_101154.f_1826[uParam1 /*164*/][iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			clear_bit(&(Global_101154.f_1826[uParam1 /*164*/][iParam3]), iParam4);
		}
		return is_bit_set(Global_101154.f_1826[uParam1 /*164*/][iParam3], iParam4);
	}
	else if (iParam0 == 1)
	{
		if (iParam5 == 1)
		{
			set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_4[iParam3], iParam4);
	}
	else if (iParam0 == 2)
	{
		if (iParam5 == 1)
		{
			set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_8[iParam3], iParam4);
	}
	else if (iParam0 == 3)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_12[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_12[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_12[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_16[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_16[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_16[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_20[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_24[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_28[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_32[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_32[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_32[iParam3], iParam4);
		}
		else if (iParam2 == 6)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_36[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_36[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_36[iParam3], iParam4);
		}
		else if (iParam2 == 7)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_40[iParam3], iParam4);
		}
		else if (iParam2 == 8)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_44[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_44[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_44[iParam3], iParam4);
		}
		else if (iParam2 == 9)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_48[iParam3], iParam4);
		}
	}
	else if (iParam0 == 4)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_52[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_52[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_52[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_56[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_56[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_56[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_60[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_64[iParam3], iParam4);
		}
	}
	else if (iParam0 == 5)
	{
		if (iParam5 == 1)
		{
			set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_68[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_68[iParam3]), iParam4);
		}
		return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_68[iParam3], iParam4);
	}
	else if (iParam0 == 6)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_72[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_72[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_72[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_76[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_76[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_76[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_80[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_84[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_88[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_88[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_88[iParam3], iParam4);
		}
	}
	else if (iParam0 == 7)
	{
		if (iParam5 == 1)
		{
			set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_92[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_92[iParam3]), iParam4);
		}
		return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_92[iParam3], iParam4);
	}
	else if (iParam0 == 8)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_96[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_96[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_96[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_100[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_100[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_100[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_104[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_104[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_104[iParam3], iParam4);
		}
	}
	else if (iParam0 == 9)
	{
		if (iParam5 == 1)
		{
			set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_108[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_108[iParam3]), iParam4);
		}
		return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_108[iParam3], iParam4);
	}
	else if (iParam0 == 10)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_112[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_112[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_112[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_116[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_116[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_116[iParam3], iParam4);
		}
	}
	else if (iParam0 == 11)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_120[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_120[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_120[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_124[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_124[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_124[iParam3], iParam4);
		}
	}
	else if (iParam0 == 12)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_128[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_128[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_128[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_132[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_132[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_132[iParam3], iParam4);
		}
	}
	else if (iParam0 == 13)
	{
		if (iParam5 == 1)
		{
			set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_136[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_136[iParam3]), iParam4);
		}
		return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_136[iParam3], iParam4);
	}
	else if (iParam0 == 14)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_140[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_140[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_140[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_144[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_144[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_144[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_148[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_148[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_148[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_152[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_152[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_152[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_156[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_156[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_156[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_160[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_160[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_160[iParam3], iParam4);
		}
	}
	return false;
}

int func_426(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	
	iVar0 = Global_69309;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_427(uParam0, iParam1, &uVar2, &iVar1, iParam2, iParam3))
	{
		iVar3 = func_34(uVar2, iVar0, 0);
		return is_bit_set(iVar3, iVar1);
	}
	return false;
}

int func_427(var uParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	*uParam2 = 3949;
	iVar0 = -1;
	if (iParam4)
	{
		if (Global_2560780)
		{
			iVar0 = _0x1E77FA7A62EE6C4C(uParam0);
		}
		else
		{
			iVar0 = _0xF033419D1B81FAE8(uParam0);
		}
	}
	else if (iParam5)
	{
		iVar0 = _0x1E77FA7A62EE6C4C(uParam0);
	}
	else
	{
		iVar0 = _0xF033419D1B81FAE8(uParam0);
	}
	if (iVar0 == -1)
	{
		return false;
	}
	switch (iParam1)
	{
		case 1:
			switch (floor(to_float(iVar0) / 32f))
			{
				case 0:
					*uParam2 = 1751;
					break;
				
				case 1:
					*uParam2 = 1752;
					break;
				
				case 2:
					*uParam2 = 1753;
					break;
				
				case 3:
					*uParam2 = 1754;
					break;
				
				case 4:
					*uParam2 = 1755;
					break;
				
				case 5:
					*uParam2 = 1756;
					break;
				
				case 6:
					*uParam2 = 1763;
					break;
				
				case 7:
					*uParam2 = 1764;
					break;
				
				case 8:
					*uParam2 = 1765;
					break;
				
				case 9:
					*uParam2 = 1766;
					break;
				
				case 10:
					*uParam2 = 1767;
					break;
				
				case 11:
					*uParam2 = 1768;
					break;
				
				case 12:
					*uParam2 = 1769;
					break;
				
				case 13:
					*uParam2 = 1777;
					break;
				
				case 14:
					*uParam2 = 1778;
					break;
				
				case 15:
					*uParam2 = 1879;
					break;
				
				case 16:
					*uParam2 = 1880;
					break;
				
				case 17:
					*uParam2 = 1911;
					break;
				
				case 18:
					*uParam2 = 1925;
					break;
				
				case 19:
					*uParam2 = 1926;
					break;
				
				case 20:
					*uParam2 = 1927;
					break;
				
				case 21:
					*uParam2 = 1928;
					break;
				
				case 22:
					*uParam2 = 1929;
					break;
				
				case 23:
					*uParam2 = 2033;
					break;
				
				case 24:
					*uParam2 = 2034;
					break;
				
				case 25:
					*uParam2 = 2060;
					break;
				
				case 26:
					*uParam2 = 2061;
					break;
				
				case 27:
					*uParam2 = 2062;
					break;
				
				case 28:
					*uParam2 = 2063;
					break;
				
				case 29:
					*uParam2 = 2064;
					break;
				
				case 30:
					*uParam2 = 2065;
					break;
				
				case 31:
					*uParam2 = 2066;
					break;
				
				case 32:
					*uParam2 = 2067;
					break;
				
				case 33:
					*uParam2 = 2068;
					break;
				
				case 34:
					*uParam2 = 2069;
					break;
				
				case 35:
					*uParam2 = 2316;
					break;
				
				case 36:
					*uParam2 = 2317;
					break;
				
				case 37:
					*uParam2 = 2367;
					break;
				
				case 38:
					*uParam2 = 2368;
					break;
				
				case 39:
					*uParam2 = 2369;
					break;
				
				case 40:
					*uParam2 = 2370;
					break;
				
				case 41:
					*uParam2 = 2429;
					break;
				
				case 42:
					*uParam2 = 2430;
					break;
				
				case 43:
					*uParam2 = 2431;
					break;
				
				case 44:
					*uParam2 = 2432;
					break;
				
				case 45:
					*uParam2 = 2433;
					break;
				
				case 46:
					*uParam2 = 2434;
					break;
				
				case 47:
					*uParam2 = 2435;
					break;
				
				case 48:
					*uParam2 = 2436;
					break;
				
				case 49:
					*uParam2 = 2437;
					break;
				
				case 50:
					*uParam2 = 2438;
					break;
				
				case 51:
					*uParam2 = 2567;
					break;
				
				case 52:
					*uParam2 = 2568;
					break;
				
				case 53:
					*uParam2 = 2569;
					break;
				
				case 54:
					*uParam2 = 2570;
					break;
				
				case 55:
					*uParam2 = 2571;
					break;
				
				case 56:
					*uParam2 = 2572;
					break;
				
				case 57:
					*uParam2 = 2573;
					break;
				
				case 58:
					*uParam2 = 2574;
					break;
				
				case 59:
					*uParam2 = 2575;
					break;
				
				case 60:
					*uParam2 = 2576;
					break;
				
				case 61:
					*uParam2 = 2577;
					break;
				
				case 62:
					*uParam2 = 3174;
					break;
				
				case 63:
					*uParam2 = 3175;
					break;
				
				case 64:
					*uParam2 = 3176;
					break;
				
				case 65:
					*uParam2 = 3177;
					break;
				
				case 66:
					*uParam2 = 3178;
					break;
				
				case 67:
					*uParam2 = 3179;
					break;
				
				case 68:
					*uParam2 = 3249;
					break;
				
				case 69:
					*uParam2 = 3250;
					break;
				
				case 70:
					*uParam2 = 3251;
					break;
				
				case 71:
					*uParam2 = 3252;
					break;
				
				case 72:
					*uParam2 = 3253;
					break;
				
				case 73:
					*uParam2 = 3254;
					break;
				
				case 74:
					*uParam2 = 3255;
					break;
				
				case 75:
					*uParam2 = 3256;
					break;
				
				case 76:
					*uParam2 = 3257;
					break;
				
				case 77:
					*uParam2 = 3258;
					break;
				
				default:
					break;
			}
			break;
		
		case 2:
			switch (floor(to_float(iVar0) / 32f))
			{
				case 0:
					*uParam2 = 1757;
					break;
				
				case 1:
					*uParam2 = 1758;
					break;
				
				case 2:
					*uParam2 = 1759;
					break;
				
				case 3:
					*uParam2 = 1760;
					break;
				
				case 4:
					*uParam2 = 1761;
					break;
				
				case 5:
					*uParam2 = 1762;
					break;
				
				case 6:
					*uParam2 = 1770;
					break;
				
				case 7:
					*uParam2 = 1771;
					break;
				
				case 8:
					*uParam2 = 1772;
					break;
				
				case 9:
					*uParam2 = 1773;
					break;
				
				case 10:
					*uParam2 = 1774;
					break;
				
				case 11:
					*uParam2 = 1775;
					break;
				
				case 12:
					*uParam2 = 1776;
					break;
				
				case 13:
					*uParam2 = 1779;
					break;
				
				case 14:
					*uParam2 = 1780;
					break;
				
				case 15:
					*uParam2 = 1881;
					break;
				
				case 16:
					*uParam2 = 1882;
					break;
				
				case 17:
					*uParam2 = 1912;
					break;
				
				case 18:
					*uParam2 = 1930;
					break;
				
				case 19:
					*uParam2 = 1931;
					break;
				
				case 20:
					*uParam2 = 1932;
					break;
				
				case 21:
					*uParam2 = 1933;
					break;
				
				case 22:
					*uParam2 = 1934;
					break;
				
				case 23:
					*uParam2 = 2035;
					break;
				
				case 24:
					*uParam2 = 2036;
					break;
				
				case 25:
					*uParam2 = 2070;
					break;
				
				case 26:
					*uParam2 = 2071;
					break;
				
				case 27:
					*uParam2 = 2072;
					break;
				
				case 28:
					*uParam2 = 2073;
					break;
				
				case 29:
					*uParam2 = 2074;
					break;
				
				case 30:
					*uParam2 = 2075;
					break;
				
				case 31:
					*uParam2 = 2076;
					break;
				
				case 32:
					*uParam2 = 2077;
					break;
				
				case 33:
					*uParam2 = 2078;
					break;
				
				case 34:
					*uParam2 = 2079;
					break;
				
				case 35:
					*uParam2 = 2318;
					break;
				
				case 36:
					*uParam2 = 2319;
					break;
				
				case 37:
					*uParam2 = 2371;
					break;
				
				case 38:
					*uParam2 = 2372;
					break;
				
				case 39:
					*uParam2 = 2373;
					break;
				
				case 40:
					*uParam2 = 2374;
					break;
				
				case 41:
					*uParam2 = 2439;
					break;
				
				case 42:
					*uParam2 = 2440;
					break;
				
				case 43:
					*uParam2 = 2441;
					break;
				
				case 44:
					*uParam2 = 2442;
					break;
				
				case 45:
					*uParam2 = 2443;
					break;
				
				case 46:
					*uParam2 = 2444;
					break;
				
				case 47:
					*uParam2 = 2445;
					break;
				
				case 48:
					*uParam2 = 2446;
					break;
				
				case 49:
					*uParam2 = 2447;
					break;
				
				case 50:
					*uParam2 = 2448;
					break;
				
				case 51:
					*uParam2 = 2578;
					break;
				
				case 52:
					*uParam2 = 2579;
					break;
				
				case 53:
					*uParam2 = 2580;
					break;
				
				case 54:
					*uParam2 = 2581;
					break;
				
				case 55:
					*uParam2 = 2582;
					break;
				
				case 56:
					*uParam2 = 2583;
					break;
				
				case 57:
					*uParam2 = 2584;
					break;
				
				case 58:
					*uParam2 = 2585;
					break;
				
				case 59:
					*uParam2 = 2586;
					break;
				
				case 60:
					*uParam2 = 2587;
					break;
				
				case 61:
					*uParam2 = 2588;
					break;
				
				case 62:
					*uParam2 = 3180;
					break;
				
				case 63:
					*uParam2 = 3181;
					break;
				
				case 64:
					*uParam2 = 3182;
					break;
				
				case 65:
					*uParam2 = 3183;
					break;
				
				case 66:
					*uParam2 = 3184;
					break;
				
				case 67:
					*uParam2 = 3185;
					break;
				
				case 68:
					*uParam2 = 3259;
					break;
				
				case 69:
					*uParam2 = 3260;
					break;
				
				case 70:
					*uParam2 = 3261;
					break;
				
				case 71:
					*uParam2 = 3262;
					break;
				
				case 72:
					*uParam2 = 3263;
					break;
				
				case 73:
					*uParam2 = 3264;
					break;
				
				case 74:
					*uParam2 = 3265;
					break;
				
				case 75:
					*uParam2 = 3266;
					break;
				
				case 76:
					*uParam2 = 3267;
					break;
				
				case 77:
					*uParam2 = 3268;
					break;
				
				default:
					break;
			}
			break;
	}
	*uParam3 = iVar0 % 32;
	return *uParam2 != 3949;
}

int func_428(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 0;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 5:
			return 5;
			break;
		
		case 6:
			return 6;
			break;
		
		case 7:
			return 7;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 0;
			break;
		
		case 13:
			return 0;
			break;
	}
	return 0;
}

void func_429(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	struct<8> Var2;
	int iVar17;
	int iVar18;
	int iVar19;
	struct<10> Var20;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	struct<10> Var41;
	int iVar58;
	int iVar59;
	int iVar60;
	
	iVar0 = iParam1 - iParam2;
	iVar0 = iVar0;
	if (iVar0 < 0)
	{
		return;
	}
	iVar1 = Global_69311[0 /*14*/].f_5;
	if (iParam0 == 12)
	{
		iVar18 = 0;
		iVar19 = _0xF3FBE2D50A6A8C28(iVar1, 0);
		iVar17 = 0;
		while (iVar17 < iVar19)
		{
			get_shop_ped_query_outfit(iVar17, &Var2);
			if (!_is_dlc_data_empty(Var2))
			{
				if (iVar18 == iParam1 - iParam2)
				{
					Global_2621444 = Var2.f_1;
					Global_2621445 = Var2;
					func_421(&(Global_69311[0 /*14*/]), iParam0, iParam1, &(Var2.f_7), 0, 0, Var2.f_2, 0, -1, 2, 1);
					return;
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else if (iParam0 == 13)
	{
		func_421(&(Global_69311[0 /*14*/]), iParam0, iParam1, "NO_LABEL", 0, 0, 0, 1, -1, 2, 1);
	}
	else if (iParam0 == 14)
	{
		init_shop_ped_prop(&Var20);
		iVar39 = 0;
		iVar40 = _get_num_props_from_outfit(iVar1, 6, -1, 1, -1, -1);
		iVar38 = 0;
		while (iVar38 < iVar40)
		{
			get_shop_ped_query_prop(iVar38, &Var20);
			if (!_is_dlc_data_empty(Var20))
			{
				if (iVar39 == iParam1 - iParam2)
				{
					if (Var20.f_6 == 0)
					{
						iVar37 = 9;
					}
					else if (Var20.f_6 == 1)
					{
						iVar37 = 10;
					}
					else if (Var20.f_6 == 2)
					{
						iVar37 = 2;
					}
					else if (Var20.f_6 == 3)
					{
						iVar37 = 3;
					}
					else if (Var20.f_6 == 4)
					{
						iVar37 = 4;
					}
					else if (Var20.f_6 == 5)
					{
						iVar37 = 5;
					}
					else if (Var20.f_6 == 6)
					{
						iVar37 = 6;
					}
					else if (Var20.f_6 == 7)
					{
						iVar37 = 7;
					}
					else if (Var20.f_6 == 8)
					{
						iVar37 = 8;
					}
					else
					{
						iVar37 = -1;
					}
					Global_2621444 = Var20.f_1;
					Global_2621445 = Var20;
					func_421(&(Global_69311[0 /*14*/]), iParam0, iParam1, &(Var20.f_9), Var20.f_3, Var20.f_4, Var20.f_5, _0x341DE7ED1D2A1BFD(Var20.f_1, -2050632586, false), iVar37, 2, Var20.f_1 != 0);
					return;
				}
				iVar39++;
			}
			iVar38++;
		}
	}
	else
	{
		init_shop_ped_component(&Var41);
		iVar59 = 0;
		iVar60 = _get_num_props_from_outfit(iVar1, 6, -1, 0, -1, func_430(iParam0));
		iVar58 = 0;
		while (iVar58 < iVar60)
		{
			get_shop_ped_query_component(iVar58, &Var41);
			if (!_is_dlc_data_empty(Var41))
			{
				if (iVar59 == iParam1 - iParam2)
				{
					Global_2621444 = Var41.f_1;
					Global_2621445 = Var41;
					func_421(&(Global_69311[0 /*14*/]), iParam0, iParam1, &(Var41.f_9), Var41.f_3, Var41.f_4, Var41.f_5, _0x341DE7ED1D2A1BFD(Var41.f_1, -2050632586, false), -1, 2, Var41.f_1 != 0);
					return;
				}
				iVar59++;
			}
			iVar58++;
		}
	}
}

int func_430(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 6:
			return 6;
			break;
		
		case 5:
			return 5;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
			break;
		
		case 10:
			return 10;
			break;
		
		case 1:
			return 1;
			break;
		
		case 7:
			return 7;
			break;
		
		case 11:
			return 11;
			break;
	}
	return 0;
}

void func_431(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 13;
	Global_69311[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		default:
			func_429(iVar10, iParam0, 9);
			return;
			break;
	}
	func_421(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_432(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 12;
	Global_69311[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "OUTFIT_P2_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "OUTFIT_P2_5", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "OUTFIT_P2_6", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "OUTFIT_P2_7", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "OUTFIT_P2_8", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "OUTFIT_P2_9", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "OUTFIT_P2_10", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "OUTFIT_P2_12", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "OUTFIT_P2_13", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "OUTFIT_P2_14", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "OUTFIT_P2_15", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "OUTFIT_P2_16", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "OUTFIT_P2_17", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "OUTFIT_P2_18", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		case 15:
			StringCopy(&Var2, "OUTFIT_P2_19", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "OUTFIT_P2_20", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "OUTFIT_P2_21", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 18:
			StringCopy(&Var2, "OUTFIT_P2_22", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 19:
			StringCopy(&Var2, "OUTFIT_P2_23", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 20:
			StringCopy(&Var2, "OUTFIT_P2_24", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "OUTFIT_P2_25", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "OUTFIT_P2_26", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "OUTFIT_P2_27", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "OUTFIT_P2_28", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 119;
			break;
		
		case 25:
			StringCopy(&Var2, "OUTFIT_P2_29", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 99;
			break;
		
		case 26:
			StringCopy(&Var2, "OUTFIT_P2_30", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 129;
			break;
		
		case 27:
			StringCopy(&Var2, "OUTFIT_P2_44", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 125;
			break;
		
		case 28:
			StringCopy(&Var2, "OUTFIT_P2_45", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 120;
			break;
		
		case 29:
			StringCopy(&Var2, "OUTFIT_P2_46", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 139;
			break;
		
		case 30:
			StringCopy(&Var2, "OUTFIT_P2_47", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 149;
			break;
		
		case 31:
			StringCopy(&Var2, "OUTFIT_P2_48", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 145;
			break;
		
		case 32:
			StringCopy(&Var2, "OUTFIT_P2_49", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 140;
			break;
		
		case 33:
			StringCopy(&Var2, "OUTFIT_P2_50", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 135;
			break;
		
		case 34:
			StringCopy(&Var2, "OUTFIT_P2_31", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4900;
			break;
		
		case 35:
			StringCopy(&Var2, "OUTFIT_P2_32", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 36:
			StringCopy(&Var2, "OUTFIT_P2_33", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4500;
			break;
		
		case 37:
			StringCopy(&Var2, "OUTFIT_P2_34", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4900;
			break;
		
		case 38:
			StringCopy(&Var2, "OUTFIT_P2_35", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4500;
			break;
		
		case 39:
			StringCopy(&Var2, "OUTFIT_P2_36", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 40:
			StringCopy(&Var2, "OUTFIT_P2_37", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5500;
			break;
		
		case 41:
			StringCopy(&Var2, "OUTFIT_P2_38", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "OUTFIT_P2_39", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "OUTFIT_P2_40", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "OUTFIT_P2_41", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "OUTFIT_P2_42", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "OUTFIT_P2_43", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "OUTFIT_P2_12", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_429(iVar10, iParam0, 48);
			return;
			break;
	}
	func_421(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_433(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 11;
	Global_69311[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_429(iVar10, iParam0, 1);
			return;
			break;
	}
	func_421(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_434(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 7;
	Global_69311[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_429(iVar10, iParam0, 1);
			return;
			break;
	}
	func_421(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_435(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 1;
	Global_69311[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "BERD_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "BERD_P2_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "BERD_P2_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "BERD_P2_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "BERD_P2_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "BERD_P2_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		default:
			func_429(iVar10, iParam0, 6);
			return;
			break;
	}
	func_421(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_436(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 10;
	Global_69311[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 1;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 2;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 3;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 4;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 5;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 1;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 2;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 3;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 4;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 5;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 6;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 7;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 8;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 9;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 1;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 2;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 3;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 4;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 5;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 6;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 1;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 2;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 3;
			break;
		
		default:
			func_429(iVar10, iParam0, 33);
			return;
			break;
	}
	func_421(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_437(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 9;
	Global_69311[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 1;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 2;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 3;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 125;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 150;
			break;
		
		case 11:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 175;
			break;
		
		case 12:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 85;
			break;
		
		case 13:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 150;
			break;
		
		case 14:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 175;
			break;
		
		case 15:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 270;
			break;
		
		case 16:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 270;
			break;
		
		default:
			func_429(iVar10, iParam0, 17);
			return;
			break;
	}
	func_421(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_438(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 8;
	Global_69311[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "SPEC_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "SPEC_P2_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		default:
			func_429(iVar10, iParam0, 18);
			return;
			break;
	}
	func_421(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_439(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 5;
	Global_69311[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		default:
			func_429(iVar10, iParam0, 7);
			return;
			break;
	}
	func_421(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_440(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 6;
	Global_69311[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "FEET_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "FEET_P2_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 22;
			break;
		
		case 2:
			StringCopy(&Var2, "FEET_P2_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 45;
			break;
		
		case 3:
			StringCopy(&Var2, "FEET_P2_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 65;
			break;
		
		case 4:
			StringCopy(&Var2, "FEET_P2_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 58;
			break;
		
		case 5:
			StringCopy(&Var2, "FEET_P2_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 72;
			break;
		
		case 6:
			StringCopy(&Var2, "FEET_P2_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 68;
			break;
		
		case 7:
			StringCopy(&Var2, "FEET_P2_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 60;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "FEET_P2_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "FEET_P2_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "FEET_P2_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "FEET_P2_9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 680;
			break;
		
		case 18:
			StringCopy(&Var2, "FEET_P2_9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 650;
			break;
		
		case 19:
			StringCopy(&Var2, "FEET_P2_9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 670;
			break;
		
		case 20:
			StringCopy(&Var2, "FEET_P2_9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 700;
			break;
		
		case 21:
			StringCopy(&Var2, "FEET_P2_9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 680;
			break;
		
		case 22:
			StringCopy(&Var2, "FEET_P2_9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 720;
			break;
		
		case 23:
			StringCopy(&Var2, "FEET_P2_9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 740;
			break;
		
		case 24:
			StringCopy(&Var2, "FEET_P2_9_8", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 760;
			break;
		
		case 25:
			StringCopy(&Var2, "FEET_P2_9_9", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 780;
			break;
		
		case 26:
			StringCopy(&Var2, "FEET_P2_9_10", 16);
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 750;
			break;
		
		case 27:
			StringCopy(&Var2, "FEET_P2_9_11", 16);
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = 700;
			break;
		
		case 28:
			StringCopy(&Var2, "FEET_P2_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "FEET_P2_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 790;
			break;
		
		case 37:
			StringCopy(&Var2, "FEET_P2_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 750;
			break;
		
		case 38:
			StringCopy(&Var2, "FEET_P2_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 860;
			break;
		
		case 39:
			StringCopy(&Var2, "FEET_P2_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 750;
			break;
		
		case 40:
			StringCopy(&Var2, "FEET_P2_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 790;
			break;
		
		case 41:
			StringCopy(&Var2, "FEET_P2_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 42:
			StringCopy(&Var2, "FEET_P2_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 820;
			break;
		
		case 43:
			StringCopy(&Var2, "FEET_P2_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 800;
			break;
		
		case 44:
			StringCopy(&Var2, "FEET_P2_18_8", 16);
			iVar6 = 18;
			iVar7 = 8;
			iVar1 = 850;
			break;
		
		case 45:
			StringCopy(&Var2, "FEET_P2_18_9", 16);
			iVar6 = 18;
			iVar7 = 9;
			iVar1 = 870;
			break;
		
		case 46:
			StringCopy(&Var2, "FEET_P2_18_10", 16);
			iVar6 = 18;
			iVar7 = 10;
			iVar1 = 720;
			break;
		
		case 47:
			StringCopy(&Var2, "FEET_P2_18_11", 16);
			iVar6 = 18;
			iVar7 = 11;
			iVar1 = 740;
			break;
		
		case 48:
			StringCopy(&Var2, "FEET_P2_18_12", 16);
			iVar6 = 18;
			iVar7 = 12;
			iVar1 = 800;
			break;
		
		case 49:
			StringCopy(&Var2, "FEET_P2_18_13", 16);
			iVar6 = 18;
			iVar7 = 13;
			iVar1 = 750;
			break;
		
		case 50:
			StringCopy(&Var2, "FEET_P2_18_14", 16);
			iVar6 = 18;
			iVar7 = 14;
			iVar1 = 770;
			break;
		
		case 51:
			StringCopy(&Var2, "FEET_P2_18_15", 16);
			iVar6 = 18;
			iVar7 = 15;
			iVar1 = 860;
			break;
		
		case 52:
			StringCopy(&Var2, "FEET_P2_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 850;
			break;
		
		case 53:
			StringCopy(&Var2, "FEET_P2_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 800;
			break;
		
		case 54:
			StringCopy(&Var2, "FEET_P2_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 780;
			break;
		
		case 55:
			StringCopy(&Var2, "FEET_P2_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 890;
			break;
		
		case 56:
			StringCopy(&Var2, "FEET_P2_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 820;
			break;
		
		case 57:
			StringCopy(&Var2, "FEET_P2_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 58:
			StringCopy(&Var2, "FEET_P2_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 870;
			break;
		
		case 59:
			StringCopy(&Var2, "FEET_P2_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 930;
			break;
		
		case 60:
			StringCopy(&Var2, "FEET_P2_19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 880;
			break;
		
		case 61:
			StringCopy(&Var2, "FEET_P2_19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 900;
			break;
		
		case 62:
			StringCopy(&Var2, "FEET_P2_19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 920;
			break;
		
		case 63:
			StringCopy(&Var2, "FEET_P2_19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 970;
			break;
		
		case 64:
			StringCopy(&Var2, "FEET_P2_19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 990;
			break;
		
		case 65:
			StringCopy(&Var2, "FEET_P2_19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 960;
			break;
		
		case 66:
			StringCopy(&Var2, "FEET_P2_19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 980;
			break;
		
		case 67:
			StringCopy(&Var2, "FEET_P2_19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 950;
			break;
		
		case 68:
			StringCopy(&Var2, "FEET_P2_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 110;
			break;
		
		case 69:
			StringCopy(&Var2, "FEET_P2_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 70:
			StringCopy(&Var2, "FEET_P2_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 120;
			break;
		
		case 71:
			StringCopy(&Var2, "FEET_P2_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 110;
			break;
		
		case 72:
			StringCopy(&Var2, "FEET_P2_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			iVar1 = 125;
			break;
		
		case 73:
			StringCopy(&Var2, "FEET_P2_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 128;
			break;
		
		case 74:
			StringCopy(&Var2, "FEET_P2_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 135;
			break;
		
		case 75:
			StringCopy(&Var2, "FEET_P2_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 130;
			break;
		
		case 76:
			StringCopy(&Var2, "FEET_P2_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 145;
			break;
		
		case 77:
			StringCopy(&Var2, "FEET_P2_20_9", 16);
			iVar6 = 20;
			iVar7 = 9;
			iVar1 = 110;
			break;
		
		case 78:
			StringCopy(&Var2, "FEET_P2_20_10", 16);
			iVar6 = 20;
			iVar7 = 10;
			iVar1 = 120;
			break;
		
		case 79:
			StringCopy(&Var2, "FEET_P2_20_11", 16);
			iVar6 = 20;
			iVar7 = 11;
			iVar1 = 150;
			break;
		
		case 80:
			StringCopy(&Var2, "FEET_P2_20_12", 16);
			iVar6 = 20;
			iVar7 = 12;
			iVar1 = 125;
			break;
		
		case 81:
			StringCopy(&Var2, "FEET_P2_20_13", 16);
			iVar6 = 20;
			iVar7 = 13;
			iVar1 = 120;
			break;
		
		case 82:
			StringCopy(&Var2, "FEET_P2_20_14", 16);
			iVar6 = 20;
			iVar7 = 14;
			iVar1 = 130;
			break;
		
		case 83:
			StringCopy(&Var2, "FEET_P2_20_15", 16);
			iVar6 = 20;
			iVar7 = 15;
			iVar1 = 110;
			break;
		
		default:
			func_429(iVar10, iParam0, 84);
			return;
			break;
	}
	func_421(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_441(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 4;
	Global_69311[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "LEGS_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "LEGS_P2_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 95;
			break;
		
		case 2:
			StringCopy(&Var2, "LEGS_P2_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 129;
			break;
		
		case 3:
			StringCopy(&Var2, "LEGS_P2_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 115;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "LEGS_P2_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "LEGS_P2_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 750;
			break;
		
		case 20:
			StringCopy(&Var2, "LEGS_P2_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 650;
			break;
		
		case 21:
			StringCopy(&Var2, "LEGS_P2_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 850;
			break;
		
		case 22:
			StringCopy(&Var2, "LEGS_P2_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 850;
			break;
		
		case 23:
			StringCopy(&Var2, "LEGS_P2_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 750;
			break;
		
		case 24:
			StringCopy(&Var2, "LEGS_P2_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 690;
			break;
		
		case 25:
			StringCopy(&Var2, "LEGS_P2_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 820;
			break;
		
		case 26:
			StringCopy(&Var2, "LEGS_P2_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 650;
			break;
		
		case 27:
			StringCopy(&Var2, "LEGS_P2_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 690;
			break;
		
		case 28:
			StringCopy(&Var2, "LEGS_P2_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 690;
			break;
		
		case 29:
			StringCopy(&Var2, "LEGS_P2_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 820;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "LEGS_P2_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "LEGS_P2_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "LEGS_P2_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "LEGS_P2_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 58;
			break;
		
		case 36:
			StringCopy(&Var2, "LEGS_P2_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar1 = 68;
			break;
		
		case 37:
			StringCopy(&Var2, "LEGS_P2_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			iVar1 = 65;
			break;
		
		case 38:
			StringCopy(&Var2, "LEGS_P2_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 60;
			break;
		
		case 39:
			StringCopy(&Var2, "LEGS_P2_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 65;
			break;
		
		case 40:
			StringCopy(&Var2, "LEGS_P2_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 63;
			break;
		
		case 41:
			StringCopy(&Var2, "LEGS_P2_17_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			iVar1 = 60;
			break;
		
		case 42:
			StringCopy(&Var2, "LEGS_P2_17_7", 16);
			iVar6 = 17;
			iVar7 = 7;
			iVar1 = 58;
			break;
		
		case 43:
			StringCopy(&Var2, "LEGS_P2_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "LEGS_P2_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			break;
		
		case 45:
			StringCopy(&Var2, "LEGS_P2_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 99;
			break;
		
		case 46:
			StringCopy(&Var2, "LEGS_P2_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 105;
			break;
		
		case 47:
			StringCopy(&Var2, "LEGS_P2_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 110;
			break;
		
		case 48:
			StringCopy(&Var2, "LEGS_P2_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 110;
			break;
		
		case 49:
			StringCopy(&Var2, "LEGS_P2_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 99;
			break;
		
		case 50:
			StringCopy(&Var2, "LEGS_P2_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 110;
			break;
		
		case 51:
			StringCopy(&Var2, "LEGS_P2_18_8", 16);
			iVar6 = 18;
			iVar7 = 8;
			iVar1 = 110;
			break;
		
		case 52:
			StringCopy(&Var2, "LEGS_P2_18_9", 16);
			iVar6 = 18;
			iVar7 = 9;
			iVar1 = 105;
			break;
		
		case 53:
			StringCopy(&Var2, "LEGS_P2_18_10", 16);
			iVar6 = 18;
			iVar7 = 10;
			iVar1 = 105;
			break;
		
		case 54:
			StringCopy(&Var2, "LEGS_P2_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 15;
			break;
		
		case 55:
			StringCopy(&Var2, "LEGS_P2_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 15;
			break;
		
		case 56:
			StringCopy(&Var2, "LEGS_P2_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 15;
			break;
		
		case 57:
			StringCopy(&Var2, "LEGS_P2_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 15;
			break;
		
		case 58:
			StringCopy(&Var2, "LEGS_P2_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 15;
			break;
		
		case 59:
			StringCopy(&Var2, "LEGS_P2_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 15;
			break;
		
		case 60:
			StringCopy(&Var2, "LEGS_P2_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 15;
			break;
		
		case 61:
			StringCopy(&Var2, "LEGS_P2_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 15;
			break;
		
		case 62:
			StringCopy(&Var2, "LEGS_P2_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 600;
			break;
		
		case 63:
			StringCopy(&Var2, "LEGS_P2_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 600;
			break;
		
		case 64:
			StringCopy(&Var2, "LEGS_P2_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 600;
			break;
		
		case 65:
			StringCopy(&Var2, "LEGS_P2_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 600;
			break;
		
		case 66:
			StringCopy(&Var2, "LEGS_P2_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			iVar1 = 600;
			break;
		
		case 67:
			StringCopy(&Var2, "LEGS_P2_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 600;
			break;
		
		case 68:
			StringCopy(&Var2, "LEGS_P2_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 600;
			break;
		
		case 69:
			StringCopy(&Var2, "LEGS_P2_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 600;
			break;
		
		case 70:
			StringCopy(&Var2, "LEGS_P2_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 600;
			break;
		
		case 71:
			StringCopy(&Var2, "LEGS_P2_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 80;
			break;
		
		case 72:
			StringCopy(&Var2, "LEGS_P2_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 80;
			break;
		
		case 73:
			StringCopy(&Var2, "LEGS_P2_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 80;
			break;
		
		case 74:
			StringCopy(&Var2, "LEGS_P2_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 80;
			break;
		
		case 75:
			StringCopy(&Var2, "LEGS_P2_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 80;
			break;
		
		case 76:
			StringCopy(&Var2, "LEGS_P2_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 80;
			break;
		
		case 77:
			StringCopy(&Var2, "LEGS_P2_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 80;
			break;
		
		case 78:
			StringCopy(&Var2, "LEGS_P2_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 80;
			break;
		
		case 79:
			StringCopy(&Var2, "LEGS_P2_21_8", 16);
			iVar6 = 21;
			iVar7 = 8;
			iVar1 = 80;
			break;
		
		case 80:
			StringCopy(&Var2, "LEGS_P2_21_9", 16);
			iVar6 = 21;
			iVar7 = 9;
			iVar1 = 80;
			break;
		
		case 81:
			StringCopy(&Var2, "LEGS_P2_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			break;
		
		case 82:
			StringCopy(&Var2, "LEGS_P2_22_1", 16);
			iVar6 = 22;
			iVar7 = 1;
			iVar1 = 12;
			break;
		
		case 83:
			StringCopy(&Var2, "LEGS_P2_22_2", 16);
			iVar6 = 22;
			iVar7 = 2;
			iVar1 = 12;
			break;
		
		case 84:
			StringCopy(&Var2, "LEGS_P2_22_3", 16);
			iVar6 = 22;
			iVar7 = 3;
			iVar1 = 22;
			break;
		
		case 85:
			StringCopy(&Var2, "LEGS_P2_22_4", 16);
			iVar6 = 22;
			iVar7 = 4;
			iVar1 = 18;
			break;
		
		case 86:
			StringCopy(&Var2, "LEGS_P2_22_5", 16);
			iVar6 = 22;
			iVar7 = 5;
			iVar1 = 20;
			break;
		
		case 87:
			StringCopy(&Var2, "LEGS_P2_22_6", 16);
			iVar6 = 22;
			iVar7 = 6;
			iVar1 = 30;
			break;
		
		case 88:
			StringCopy(&Var2, "LEGS_P2_22_7", 16);
			iVar6 = 22;
			iVar7 = 7;
			iVar1 = 30;
			break;
		
		case 89:
			StringCopy(&Var2, "LEGS_P2_22_8", 16);
			iVar6 = 22;
			iVar7 = 8;
			iVar1 = 30;
			break;
		
		case 90:
			StringCopy(&Var2, "LEGS_P2_22_9", 16);
			iVar6 = 22;
			iVar7 = 9;
			iVar1 = 30;
			break;
		
		case 91:
			StringCopy(&Var2, "LEGS_P2_23_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			break;
		
		case 92:
			StringCopy(&Var2, "LEGS_P2_24_0", 16);
			iVar6 = 24;
			iVar7 = 0;
			break;
		
		case 93:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 25;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 0;
			break;
		
		case 95:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 1;
			break;
		
		case 96:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 2;
			break;
		
		case 97:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 3;
			break;
		
		case 98:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 4;
			break;
		
		case 99:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 5;
			break;
		
		case 100:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 6;
			break;
		
		case 101:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 7;
			break;
		
		case 102:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 8;
			break;
		
		case 103:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 9;
			break;
		
		default:
			func_429(iVar10, iParam0, 104);
			return;
			break;
	}
	func_421(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_442(int iParam0)
{
	if (iParam0 < 136)
	{
		func_444(iParam0);
	}
	else
	{
		func_443(iParam0);
	}
	if (Global_69311[0 /*14*/].f_2 == -1)
	{
		func_429(3, iParam0, 242);
	}
}

void func_443(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_69311[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 136:
			StringCopy(&Var2, "TORSO_P2_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 32;
			break;
		
		case 137:
			StringCopy(&Var2, "TORSO_P2_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 39;
			break;
		
		case 138:
			StringCopy(&Var2, "TORSO_P2_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 40;
			break;
		
		case 139:
			StringCopy(&Var2, "TORSO_P2_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 42;
			break;
		
		case 140:
			StringCopy(&Var2, "TORSO_P2_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 45;
			break;
		
		case 141:
			StringCopy(&Var2, "TORSO_P2_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 48;
			break;
		
		case 142:
			StringCopy(&Var2, "TORSO_P2_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 52;
			break;
		
		case 143:
			StringCopy(&Var2, "TORSO_P2_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 55;
			break;
		
		case 144:
			StringCopy(&Var2, "TORSO_P2_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar1 = 390;
			break;
		
		case 145:
			StringCopy(&Var2, "TORSO_P2_22_1", 16);
			iVar6 = 22;
			iVar7 = 1;
			iVar1 = 390;
			break;
		
		case 146:
			StringCopy(&Var2, "TORSO_P2_22_2", 16);
			iVar6 = 22;
			iVar7 = 2;
			iVar1 = 560;
			break;
		
		case 147:
			StringCopy(&Var2, "TORSO_P2_22_3", 16);
			iVar6 = 22;
			iVar7 = 3;
			iVar1 = 390;
			break;
		
		case 148:
			StringCopy(&Var2, "TORSO_P2_22_4", 16);
			iVar6 = 22;
			iVar7 = 4;
			iVar1 = 390;
			break;
		
		case 149:
			StringCopy(&Var2, "TORSO_P2_22_5", 16);
			iVar6 = 22;
			iVar7 = 5;
			iVar1 = 390;
			break;
		
		case 150:
			StringCopy(&Var2, "TORSO_P2_22_6", 16);
			iVar6 = 22;
			iVar7 = 6;
			iVar1 = 560;
			break;
		
		case 151:
			StringCopy(&Var2, "TORSO_P2_22_7", 16);
			iVar6 = 22;
			iVar7 = 7;
			iVar1 = 390;
			break;
		
		case 152:
			StringCopy(&Var2, "TORSO_P2_22_8", 16);
			iVar6 = 22;
			iVar7 = 8;
			iVar1 = 390;
			break;
		
		case 153:
			StringCopy(&Var2, "TORSO_P2_22_9", 16);
			iVar6 = 22;
			iVar7 = 9;
			iVar1 = 390;
			break;
		
		case 154:
			StringCopy(&Var2, "TORSO_P2_22_10", 16);
			iVar6 = 22;
			iVar7 = 10;
			iVar1 = 390;
			break;
		
		case 155:
			StringCopy(&Var2, "TORSO_P2_22_11", 16);
			iVar6 = 22;
			iVar7 = 11;
			iVar1 = 3950;
			break;
		
		case 156:
			StringCopy(&Var2, "TORSO_P2_23_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar1 = 150;
			break;
		
		case 157:
			StringCopy(&Var2, "TORSO_P2_23_1", 16);
			iVar6 = 23;
			iVar7 = 1;
			break;
		
		case 158:
			StringCopy(&Var2, "TORSO_P2_23_2", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar1 = 150;
			break;
		
		case 159:
			StringCopy(&Var2, "TORSO_P2_23_3", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar1 = 150;
			break;
		
		case 160:
			StringCopy(&Var2, "TORSO_P2_23_4", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar1 = 160;
			break;
		
		case 161:
			StringCopy(&Var2, "TORSO_P2_23_5", 16);
			iVar6 = 23;
			iVar7 = 5;
			break;
		
		case 162:
			StringCopy(&Var2, "TORSO_P2_24_0", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar1 = 19;
			break;
		
		case 163:
			StringCopy(&Var2, "TORSO_P2_24_1", 16);
			iVar6 = 24;
			iVar7 = 1;
			iVar1 = 20;
			break;
		
		case 164:
			StringCopy(&Var2, "TORSO_P2_24_2", 16);
			iVar6 = 24;
			iVar7 = 2;
			iVar1 = 19;
			break;
		
		case 165:
			StringCopy(&Var2, "TORSO_P2_24_3", 16);
			iVar6 = 24;
			iVar7 = 3;
			iVar1 = 22;
			break;
		
		case 166:
			StringCopy(&Var2, "TORSO_P2_24_4", 16);
			iVar6 = 24;
			iVar7 = 4;
			iVar1 = 20;
			break;
		
		case 167:
			StringCopy(&Var2, "TORSO_P2_24_5", 16);
			iVar6 = 24;
			iVar7 = 5;
			iVar1 = 28;
			break;
		
		case 168:
			StringCopy(&Var2, "TORSO_P2_24_6", 16);
			iVar6 = 24;
			iVar7 = 6;
			iVar1 = 28;
			break;
		
		case 169:
			StringCopy(&Var2, "TORSO_P2_24_7", 16);
			iVar6 = 24;
			iVar7 = 7;
			iVar1 = 25;
			break;
		
		case 170:
			StringCopy(&Var2, "TORSO_P2_24_8", 16);
			iVar6 = 24;
			iVar7 = 8;
			iVar1 = 22;
			break;
		
		case 171:
			StringCopy(&Var2, "TORSO_P2_24_9", 16);
			iVar6 = 24;
			iVar7 = 9;
			iVar1 = 19;
			break;
		
		case 172:
			StringCopy(&Var2, "TORSO_P2_24_10", 16);
			iVar6 = 24;
			iVar7 = 10;
			iVar1 = 22;
			break;
		
		case 173:
			StringCopy(&Var2, "TORSO_P2_24_11", 16);
			iVar6 = 24;
			iVar7 = 11;
			iVar1 = 19;
			break;
		
		case 174:
			StringCopy(&Var2, "TORSO_P2_24_12", 16);
			iVar6 = 24;
			iVar7 = 12;
			iVar1 = 20;
			break;
		
		case 175:
			StringCopy(&Var2, "TORSO_P2_24_13", 16);
			iVar6 = 24;
			iVar7 = 13;
			iVar1 = 25;
			break;
		
		case 176:
			StringCopy(&Var2, "TORSO_P2_24_14", 16);
			iVar6 = 24;
			iVar7 = 14;
			iVar1 = 20;
			break;
		
		case 177:
			StringCopy(&Var2, "TORSO_P2_24_15", 16);
			iVar6 = 24;
			iVar7 = 15;
			iVar1 = 28;
			break;
		
		case 178:
			StringCopy(&Var2, "TORSO_P2_25_0", 16);
			iVar6 = 25;
			iVar7 = 0;
			iVar1 = 35;
			break;
		
		case 179:
			StringCopy(&Var2, "TORSO_P2_25_1", 16);
			iVar6 = 25;
			iVar7 = 1;
			iVar1 = 40;
			break;
		
		case 180:
			StringCopy(&Var2, "TORSO_P2_25_2", 16);
			iVar6 = 25;
			iVar7 = 2;
			iVar1 = 45;
			break;
		
		case 181:
			StringCopy(&Var2, "TORSO_P2_25_3", 16);
			iVar6 = 25;
			iVar7 = 3;
			iVar1 = 45;
			break;
		
		case 182:
			StringCopy(&Var2, "TORSO_P2_25_4", 16);
			iVar6 = 25;
			iVar7 = 4;
			iVar1 = 49;
			break;
		
		case 183:
			StringCopy(&Var2, "TORSO_P2_25_5", 16);
			iVar6 = 25;
			iVar7 = 5;
			iVar1 = 820;
			break;
		
		case 184:
			StringCopy(&Var2, "TORSO_P2_25_6", 16);
			iVar6 = 25;
			iVar7 = 6;
			iVar1 = 790;
			break;
		
		case 185:
			StringCopy(&Var2, "TORSO_P2_25_7", 16);
			iVar6 = 25;
			iVar7 = 7;
			iVar1 = 820;
			break;
		
		case 186:
			StringCopy(&Var2, "TORSO_P2_25_8", 16);
			iVar6 = 25;
			iVar7 = 8;
			iVar1 = 929;
			break;
		
		case 187:
			StringCopy(&Var2, "TORSO_P2_25_9", 16);
			iVar6 = 25;
			iVar7 = 9;
			iVar1 = 40;
			break;
		
		case 188:
			StringCopy(&Var2, "TORSO_P2_25_10", 16);
			iVar6 = 25;
			iVar7 = 10;
			iVar1 = 850;
			break;
		
		case 189:
			StringCopy(&Var2, "TORSO_P2_25_11", 16);
			iVar6 = 25;
			iVar7 = 11;
			iVar1 = 790;
			break;
		
		case 190:
			StringCopy(&Var2, "TORSO_P2_26_0", 16);
			iVar6 = 26;
			iVar7 = 0;
			break;
		
		case 191:
			StringCopy(&Var2, "TORSO_P2_26_1", 16);
			iVar6 = 26;
			iVar7 = 1;
			break;
		
		case 192:
			StringCopy(&Var2, "TORSO_P2_26_2", 16);
			iVar6 = 26;
			iVar7 = 2;
			break;
		
		case 193:
			StringCopy(&Var2, "TORSO_P2_26_3", 16);
			iVar6 = 26;
			iVar7 = 3;
			break;
		
		case 194:
			StringCopy(&Var2, "TORSO_P2_26_4", 16);
			iVar6 = 26;
			iVar7 = 4;
			break;
		
		case 195:
			StringCopy(&Var2, "TORSO_P2_26_5", 16);
			iVar6 = 26;
			iVar7 = 5;
			break;
		
		case 196:
			StringCopy(&Var2, "TORSO_P2_26_6", 16);
			iVar6 = 26;
			iVar7 = 6;
			break;
		
		case 197:
			StringCopy(&Var2, "TORSO_P2_26_7", 16);
			iVar6 = 26;
			iVar7 = 7;
			break;
		
		case 198:
			StringCopy(&Var2, "TORSO_P2_26_8", 16);
			iVar6 = 26;
			iVar7 = 8;
			break;
		
		case 199:
			StringCopy(&Var2, "TORSO_P2_26_9", 16);
			iVar6 = 26;
			iVar7 = 9;
			break;
		
		case 200:
			StringCopy(&Var2, "TORSO_P2_27_0", 16);
			iVar6 = 27;
			iVar7 = 0;
			iVar1 = 2200;
			break;
		
		case 201:
			StringCopy(&Var2, "TORSO_P2_27_1", 16);
			iVar6 = 27;
			iVar7 = 1;
			iVar1 = 2500;
			break;
		
		case 202:
			StringCopy(&Var2, "TORSO_P2_27_2", 16);
			iVar6 = 27;
			iVar7 = 2;
			iVar1 = 2500;
			break;
		
		case 203:
			StringCopy(&Var2, "TORSO_P2_27_3", 16);
			iVar6 = 27;
			iVar7 = 3;
			iVar1 = 2200;
			break;
		
		case 204:
			StringCopy(&Var2, "TORSO_P2_27_4", 16);
			iVar6 = 27;
			iVar7 = 4;
			iVar1 = 2500;
			break;
		
		case 205:
			StringCopy(&Var2, "TORSO_P2_27_5", 16);
			iVar6 = 27;
			iVar7 = 5;
			iVar1 = 2500;
			break;
		
		case 206:
			StringCopy(&Var2, "TORSO_P2_27_6", 16);
			iVar6 = 27;
			iVar7 = 6;
			iVar1 = 2200;
			break;
		
		case 207:
			StringCopy(&Var2, "TORSO_P2_28_0", 16);
			iVar6 = 28;
			iVar7 = 0;
			iVar1 = 1100;
			break;
		
		case 208:
			StringCopy(&Var2, "TORSO_P2_28_1", 16);
			iVar6 = 28;
			iVar7 = 1;
			iVar1 = 1200;
			break;
		
		case 209:
			StringCopy(&Var2, "TORSO_P2_28_2", 16);
			iVar6 = 28;
			iVar7 = 2;
			iVar1 = 1220;
			break;
		
		case 210:
			StringCopy(&Var2, "TORSO_P2_28_3", 16);
			iVar6 = 28;
			iVar7 = 3;
			iVar1 = 1250;
			break;
		
		case 211:
			StringCopy(&Var2, "TORSO_P2_28_4", 16);
			iVar6 = 28;
			iVar7 = 4;
			iVar1 = 1300;
			break;
		
		case 212:
			StringCopy(&Var2, "TORSO_P2_28_5", 16);
			iVar6 = 28;
			iVar7 = 5;
			iVar1 = 1360;
			break;
		
		case 213:
			StringCopy(&Var2, "TORSO_P2_28_6", 16);
			iVar6 = 28;
			iVar7 = 6;
			iVar1 = 35;
			break;
		
		case 214:
			StringCopy(&Var2, "TORSO_P2_28_7", 16);
			iVar6 = 28;
			iVar7 = 7;
			iVar1 = 38;
			break;
		
		case 215:
			StringCopy(&Var2, "TORSO_P2_28_8", 16);
			iVar6 = 28;
			iVar7 = 8;
			iVar1 = 40;
			break;
		
		case 216:
			StringCopy(&Var2, "TORSO_P2_28_9", 16);
			iVar6 = 28;
			iVar7 = 9;
			iVar1 = 42;
			break;
		
		case 217:
			StringCopy(&Var2, "TORSO_P2_28_10", 16);
			iVar6 = 28;
			iVar7 = 10;
			iVar1 = 50;
			break;
		
		case 218:
			StringCopy(&Var2, "TORSO_P2_28_11", 16);
			iVar6 = 28;
			iVar7 = 11;
			iVar1 = 45;
			break;
		
		case 219:
			StringCopy(&Var2, "TORSO_P2_28_12", 16);
			iVar6 = 28;
			iVar7 = 12;
			iVar1 = 45;
			break;
		
		case 220:
			StringCopy(&Var2, "TORSO_P2_28_13", 16);
			iVar6 = 28;
			iVar7 = 13;
			iVar1 = 44;
			break;
		
		case 221:
			StringCopy(&Var2, "TORSO_P2_28_14", 16);
			iVar6 = 28;
			iVar7 = 14;
			iVar1 = 46;
			break;
		
		case 222:
			StringCopy(&Var2, "TORSO_P2_28_15", 16);
			iVar6 = 28;
			iVar7 = 15;
			iVar1 = 52;
			break;
		
		case 223:
			StringCopy(&Var2, "TORSO_P2_29_0", 16);
			iVar6 = 29;
			iVar7 = 0;
			iVar1 = 3200;
			break;
		
		case 224:
			StringCopy(&Var2, "TORSO_P2_29_1", 16);
			iVar6 = 29;
			iVar7 = 1;
			iVar1 = 3200;
			break;
		
		case 225:
			StringCopy(&Var2, "TORSO_P2_29_2", 16);
			iVar6 = 29;
			iVar7 = 2;
			iVar1 = 2550;
			break;
		
		case 226:
			StringCopy(&Var2, "TORSO_P2_29_3", 16);
			iVar6 = 29;
			iVar7 = 3;
			iVar1 = 2750;
			break;
		
		case 227:
			StringCopy(&Var2, "TORSO_P2_29_4", 16);
			iVar6 = 29;
			iVar7 = 4;
			iVar1 = 2590;
			break;
		
		case 228:
			StringCopy(&Var2, "TORSO_P2_29_5", 16);
			iVar6 = 29;
			iVar7 = 5;
			iVar1 = 2750;
			break;
		
		case 229:
			StringCopy(&Var2, "TORSO_P2_29_6", 16);
			iVar6 = 29;
			iVar7 = 6;
			iVar1 = 2550;
			break;
		
		case 230:
			StringCopy(&Var2, "TORSO_P2_29_7", 16);
			iVar6 = 29;
			iVar7 = 7;
			iVar1 = 2590;
			break;
		
		case 231:
			StringCopy(&Var2, "TORSO_P2_29_8", 16);
			iVar6 = 29;
			iVar7 = 8;
			iVar1 = 2720;
			break;
		
		case 232:
			StringCopy(&Var2, "TORSO_P2_29_9", 16);
			iVar6 = 29;
			iVar7 = 9;
			iVar1 = 2750;
			break;
		
		case 233:
			StringCopy(&Var2, "TORSO_P2_30_0", 16);
			iVar6 = 30;
			iVar7 = 0;
			iVar1 = 3250;
			break;
		
		case 234:
			StringCopy(&Var2, "TORSO_P2_30_1", 16);
			iVar6 = 30;
			iVar7 = 1;
			iVar1 = 2950;
			break;
		
		case 235:
			StringCopy(&Var2, "TORSO_P2_30_2", 16);
			iVar6 = 30;
			iVar7 = 2;
			iVar1 = 3100;
			break;
		
		case 236:
			StringCopy(&Var2, "TORSO_P2_30_3", 16);
			iVar6 = 30;
			iVar7 = 3;
			iVar1 = 3150;
			break;
		
		case 237:
			StringCopy(&Var2, "TORSO_P2_30_4", 16);
			iVar6 = 30;
			iVar7 = 4;
			iVar1 = 3240;
			break;
		
		case 238:
			StringCopy(&Var2, "TORSO_P2_30_5", 16);
			iVar6 = 30;
			iVar7 = 5;
			iVar1 = 3350;
			break;
		
		case 239:
			StringCopy(&Var2, "TORSO_P2_30_6", 16);
			iVar6 = 30;
			iVar7 = 6;
			iVar1 = 3400;
			break;
		
		case 240:
			StringCopy(&Var2, "TORSO_P2_30_7", 16);
			iVar6 = 30;
			iVar7 = 7;
			iVar1 = 3280;
			break;
		
		case 241:
			StringCopy(&Var2, "TORSO_P2_31_0", 16);
			iVar6 = 31;
			iVar7 = 0;
			break;
		
		default:
			return;
			break;
	}
	func_421(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_444(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_69311[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "TORSO_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "TORSO_P2_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 25;
			break;
		
		case 2:
			StringCopy(&Var2, "TORSO_P2_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "TORSO_P2_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 15;
			break;
		
		case 4:
			StringCopy(&Var2, "TORSO_P2_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 25;
			break;
		
		case 5:
			StringCopy(&Var2, "TORSO_P2_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 25;
			break;
		
		case 6:
			StringCopy(&Var2, "TORSO_P2_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 22;
			break;
		
		case 7:
			StringCopy(&Var2, "TORSO_P2_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 22;
			break;
		
		case 8:
			StringCopy(&Var2, "TORSO_P2_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 20;
			break;
		
		case 9:
			StringCopy(&Var2, "TORSO_P2_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 20;
			break;
		
		case 10:
			StringCopy(&Var2, "TORSO_P2_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 24;
			break;
		
		case 11:
			StringCopy(&Var2, "TORSO_P2_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 26;
			break;
		
		case 12:
			StringCopy(&Var2, "TORSO_P2_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 28;
			break;
		
		case 13:
			StringCopy(&Var2, "TORSO_P2_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 29;
			break;
		
		case 14:
			StringCopy(&Var2, "TORSO_P2_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 22;
			break;
		
		case 15:
			StringCopy(&Var2, "TORSO_P2_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 20;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "TORSO_P2_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 35;
			break;
		
		case 19:
			StringCopy(&Var2, "TORSO_P2_3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 22;
			break;
		
		case 20:
			StringCopy(&Var2, "TORSO_P2_3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 25;
			break;
		
		case 21:
			StringCopy(&Var2, "TORSO_P2_3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 38;
			break;
		
		case 22:
			StringCopy(&Var2, "TORSO_P2_3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 40;
			break;
		
		case 23:
			StringCopy(&Var2, "TORSO_P2_3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 40;
			break;
		
		case 24:
			StringCopy(&Var2, "TORSO_P2_3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 40;
			break;
		
		case 25:
			StringCopy(&Var2, "TORSO_P2_3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 40;
			break;
		
		case 26:
			StringCopy(&Var2, "TORSO_P2_3_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 40;
			break;
		
		case 27:
			StringCopy(&Var2, "TORSO_P2_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "TORSO_P2_4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 500;
			break;
		
		case 29:
			StringCopy(&Var2, "TORSO_P2_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 560;
			break;
		
		case 30:
			StringCopy(&Var2, "TORSO_P2_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 600;
			break;
		
		case 31:
			StringCopy(&Var2, "TORSO_P2_4_4tu", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 650;
			break;
		
		case 32:
			StringCopy(&Var2, "TORSO_P2_4_5tu", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 500;
			break;
		
		case 33:
			StringCopy(&Var2, "TORSO_P2_4_6tu", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 560;
			break;
		
		case 34:
			StringCopy(&Var2, "TORSO_P2_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 500;
			break;
		
		case 35:
			StringCopy(&Var2, "TORSO_P2_4_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 650;
			break;
		
		case 36:
			StringCopy(&Var2, "TORSO_P2_4_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 540;
			break;
		
		case 37:
			StringCopy(&Var2, "TORSO_P2_4_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 690;
			break;
		
		case 38:
			StringCopy(&Var2, "TORSO_P2_4_11", 16);
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 560;
			break;
		
		case 39:
			StringCopy(&Var2, "TORSO_P2_4_12", 16);
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = 590;
			break;
		
		case 40:
			StringCopy(&Var2, "TORSO_P2_4_13", 16);
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 690;
			break;
		
		case 41:
			StringCopy(&Var2, "TORSO_P2_4_14", 16);
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 540;
			break;
		
		case 42:
			StringCopy(&Var2, "TORSO_P2_4_15", 16);
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = 500;
			break;
		
		case 43:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar0 = true;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar0 = true;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar0 = true;
			break;
		
		case 48:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar0 = true;
			break;
		
		case 49:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 53:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 54:
			StringCopy(&Var2, "TORSO_P2_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "TORSO_P2_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			break;
		
		case 56:
			StringCopy(&Var2, "TORSO_P2_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 25;
			break;
		
		case 57:
			StringCopy(&Var2, "TORSO_P2_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 27;
			break;
		
		case 58:
			StringCopy(&Var2, "TORSO_P2_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 22;
			break;
		
		case 59:
			StringCopy(&Var2, "TORSO_P2_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 350;
			break;
		
		case 60:
			StringCopy(&Var2, "TORSO_P2_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 27;
			break;
		
		case 61:
			StringCopy(&Var2, "TORSO_P2_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 370;
			break;
		
		case 62:
			StringCopy(&Var2, "TORSO_P2_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 25;
			break;
		
		case 63:
			StringCopy(&Var2, "TORSO_P2_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 22;
			break;
		
		case 64:
			StringCopy(&Var2, "TORSO_P2_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 25;
			break;
		
		case 65:
			StringCopy(&Var2, "TORSO_P2_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			break;
		
		case 66:
			StringCopy(&Var2, "TORSO_P2_11_12", 16);
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 22;
			break;
		
		case 67:
			StringCopy(&Var2, "TORSO_P2_11_13", 16);
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 27;
			break;
		
		case 68:
			StringCopy(&Var2, "TORSO_P2_11_14", 16);
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 25;
			break;
		
		case 69:
			StringCopy(&Var2, "TORSO_P2_11_15", 16);
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 27;
			break;
		
		case 70:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar0 = true;
			iVar9 = 1;
			break;
		
		case 71:
			StringCopy(&Var2, "TORSO_P2_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			break;
		
		case 72:
			StringCopy(&Var2, "TORSO_P2_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 39;
			break;
		
		case 73:
			StringCopy(&Var2, "TORSO_P2_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 42;
			break;
		
		case 74:
			StringCopy(&Var2, "TORSO_P2_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 49;
			break;
		
		case 75:
			StringCopy(&Var2, "TORSO_P2_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 35;
			break;
		
		case 76:
			StringCopy(&Var2, "TORSO_P2_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 50;
			break;
		
		case 77:
			StringCopy(&Var2, "TORSO_P2_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 50;
			break;
		
		case 78:
			StringCopy(&Var2, "TORSO_P2_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 50;
			break;
		
		case 79:
			StringCopy(&Var2, "TORSO_P2_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 80:
			StringCopy(&Var2, "TORSO_P2_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 88;
			break;
		
		case 81:
			StringCopy(&Var2, "TORSO_P2_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 60;
			break;
		
		case 82:
			StringCopy(&Var2, "TORSO_P2_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 80;
			break;
		
		case 83:
			StringCopy(&Var2, "TORSO_P2_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 70;
			break;
		
		case 84:
			StringCopy(&Var2, "TORSO_P2_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 80;
			break;
		
		case 85:
			StringCopy(&Var2, "TORSO_P2_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 70;
			break;
		
		case 86:
			StringCopy(&Var2, "TORSO_P2_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 90;
			break;
		
		case 87:
			StringCopy(&Var2, "TORSO_P2_14_8", 16);
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 95;
			break;
		
		case 88:
			StringCopy(&Var2, "TORSO_P2_14_9", 16);
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 105;
			break;
		
		case 89:
			StringCopy(&Var2, "TORSO_P2_14_10", 16);
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = 95;
			break;
		
		case 90:
			StringCopy(&Var2, "TORSO_P2_14_11", 16);
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = 110;
			break;
		
		case 91:
			StringCopy(&Var2, "TORSO_P2_14_12", 16);
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = 98;
			break;
		
		case 92:
			StringCopy(&Var2, "TORSO_P2_14_13", 16);
			iVar6 = 14;
			iVar7 = 13;
			iVar1 = 88;
			break;
		
		case 93:
			StringCopy(&Var2, "TORSO_P2_14_14", 16);
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = 98;
			break;
		
		case 94:
			StringCopy(&Var2, "TORSO_P2_14_15", 16);
			iVar6 = 14;
			iVar7 = 15;
			iVar1 = 110;
			break;
		
		case 95:
			StringCopy(&Var2, "TORSO_P2_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 96:
			StringCopy(&Var2, "TORSO_P2_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 97:
			StringCopy(&Var2, "TORSO_P2_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 98:
			StringCopy(&Var2, "TORSO_P2_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			break;
		
		case 99:
			StringCopy(&Var2, "TORSO_P2_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 520;
			break;
		
		case 100:
			StringCopy(&Var2, "TORSO_P2_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 490;
			break;
		
		case 101:
			StringCopy(&Var2, "TORSO_P2_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 450;
			break;
		
		case 102:
			StringCopy(&Var2, "TORSO_P2_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 420;
			break;
		
		case 103:
			StringCopy(&Var2, "TORSO_P2_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 420;
			break;
		
		case 104:
			StringCopy(&Var2, "TORSO_P2_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 85;
			break;
		
		case 105:
			StringCopy(&Var2, "TORSO_P2_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 85;
			break;
		
		case 106:
			StringCopy(&Var2, "TORSO_P2_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 75;
			break;
		
		case 107:
			StringCopy(&Var2, "TORSO_P2_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 68;
			break;
		
		case 108:
			StringCopy(&Var2, "TORSO_P2_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 68;
			break;
		
		case 109:
			StringCopy(&Var2, "TORSO_P2_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 78;
			break;
		
		case 110:
			StringCopy(&Var2, "TORSO_P2_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 85;
			break;
		
		case 111:
			StringCopy(&Var2, "TORSO_P2_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 68;
			break;
		
		case 112:
			StringCopy(&Var2, "TORSO_P2_19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 75;
			break;
		
		case 113:
			StringCopy(&Var2, "TORSO_P2_19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 75;
			break;
		
		case 114:
			StringCopy(&Var2, "TORSO_P2_19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 78;
			break;
		
		case 115:
			StringCopy(&Var2, "TORSO_P2_19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 75;
			break;
		
		case 116:
			StringCopy(&Var2, "TORSO_P2_19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 75;
			break;
		
		case 117:
			StringCopy(&Var2, "TORSO_P2_19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 75;
			break;
		
		case 118:
			StringCopy(&Var2, "TORSO_P2_19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 78;
			break;
		
		case 119:
			StringCopy(&Var2, "TORSO_P2_19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 78;
			break;
		
		case 120:
			StringCopy(&Var2, "TORSO_P2_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 40;
			break;
		
		case 121:
			StringCopy(&Var2, "TORSO_P2_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 32;
			break;
		
		case 122:
			StringCopy(&Var2, "TORSO_P2_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 32;
			break;
		
		case 123:
			StringCopy(&Var2, "TORSO_P2_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 32;
			break;
		
		case 124:
			StringCopy(&Var2, "TORSO_P2_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			break;
		
		case 125:
			StringCopy(&Var2, "TORSO_P2_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 38;
			break;
		
		case 126:
			StringCopy(&Var2, "TORSO_P2_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 35;
			break;
		
		case 127:
			StringCopy(&Var2, "TORSO_P2_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 38;
			break;
		
		case 128:
			StringCopy(&Var2, "TORSO_P2_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 29;
			break;
		
		case 129:
			StringCopy(&Var2, "TORSO_P2_20_9", 16);
			iVar6 = 20;
			iVar7 = 9;
			iVar1 = 32;
			break;
		
		case 130:
			StringCopy(&Var2, "TORSO_P2_20_10", 16);
			iVar6 = 20;
			iVar7 = 10;
			iVar1 = 29;
			break;
		
		case 131:
			StringCopy(&Var2, "TORSO_P2_20_11", 16);
			iVar6 = 20;
			iVar7 = 11;
			iVar1 = 35;
			break;
		
		case 132:
			StringCopy(&Var2, "TORSO_P2_20_12", 16);
			iVar6 = 20;
			iVar7 = 12;
			iVar1 = 32;
			break;
		
		case 133:
			StringCopy(&Var2, "TORSO_P2_20_13", 16);
			iVar6 = 20;
			iVar7 = 13;
			iVar1 = 35;
			break;
		
		case 134:
			StringCopy(&Var2, "TORSO_P2_20_14", 16);
			iVar6 = 20;
			iVar7 = 14;
			iVar1 = 32;
			break;
		
		case 135:
			StringCopy(&Var2, "TORSO_P2_20_15", 16);
			iVar6 = 20;
			iVar7 = 15;
			iVar1 = 40;
			break;
		
		default:
			return;
			break;
	}
	func_421(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_445(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 2;
	Global_69311[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "HAIR_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "HAIR_P2_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "HAIR_P2_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "HAIR_P2_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "HAIR_P2_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "HAIR_P2_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "HAIR_P2_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "HAIR_P2_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "HAIR_P2_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		default:
			func_429(iVar10, iParam0, 9);
			return;
			break;
	}
	func_421(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_446(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 0;
	Global_69311[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 6;
			break;
		
		default:
			func_429(iVar10, iParam0, 7);
			return;
			break;
	}
	func_421(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_447(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_465(iParam1);
			break;
		
		case 2:
			func_464(iParam1);
			break;
		
		case 3:
			func_460(iParam1);
			break;
		
		case 4:
			func_459(iParam1);
			break;
		
		case 6:
			func_458(iParam1);
			break;
		
		case 5:
			func_457(iParam1);
			break;
		
		case 8:
			func_456(iParam1);
			break;
		
		case 9:
			func_455(iParam1);
			break;
		
		case 10:
			func_454(iParam1);
			break;
		
		case 1:
			func_453(iParam1);
			break;
		
		case 7:
			func_452(iParam1);
			break;
		
		case 11:
			func_451(iParam1);
			break;
		
		case 12:
			func_450(iParam1);
			break;
		
		case 13:
			func_449(iParam1);
			break;
		
		case 14:
			func_448(iParam1);
			break;
	}
}

void func_448(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	Global_69311[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 8;
			break;
		
		case 158:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 2;
			break;
		
		case 159:
			StringCopy(&Var2, "PROPS_P1_EA1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 4590;
			iVar8 = 2;
			break;
		
		case 160:
			StringCopy(&Var2, "PROPS_P1_EA1_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 4100;
			iVar8 = 2;
			break;
		
		case 161:
			StringCopy(&Var2, "PROPS_P1_EA1_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 3850;
			iVar8 = 2;
			break;
		
		case 162:
			StringCopy(&Var2, "PROPS_P1_EA1_3", 16);
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 1850;
			iVar8 = 2;
			break;
		
		case 163:
			StringCopy(&Var2, "PROPS_P1_EA1_4", 16);
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 5250;
			iVar8 = 2;
			break;
		
		case 164:
			StringCopy(&Var2, "PROPS_P1_EA1_5", 16);
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 2700;
			iVar8 = 2;
			break;
		
		case 165:
			StringCopy(&Var2, "PROPS_P1_EA1_6", 16);
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 3100;
			iVar8 = 2;
			break;
		
		case 166:
			StringCopy(&Var2, "PROPS_P1_EA1_7", 16);
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 5050;
			iVar8 = 2;
			break;
		
		case 167:
			StringCopy(&Var2, "PROPS_P1_EA2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 2500;
			iVar8 = 2;
			break;
		
		case 168:
			StringCopy(&Var2, "PROPS_P1_EA2_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 1950;
			iVar8 = 2;
			break;
		
		case 169:
			StringCopy(&Var2, "PROPS_P1_EA2_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 3900;
			iVar8 = 2;
			break;
		
		case 170:
			StringCopy(&Var2, "PROPS_P1_EA2_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 3550;
			iVar8 = 2;
			break;
		
		case 171:
			StringCopy(&Var2, "PROPS_P1_EA2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 4500;
			iVar8 = 2;
			break;
		
		case 172:
			StringCopy(&Var2, "PROPS_P1_EA2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 2700;
			iVar8 = 2;
			break;
		
		case 173:
			StringCopy(&Var2, "PROPS_P1_EA2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 3100;
			iVar8 = 2;
			break;
		
		case 174:
			StringCopy(&Var2, "PROPS_P1_EA2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 2950;
			iVar8 = 2;
			break;
		
		case 82:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 10;
			break;
		
		case 83:
			StringCopy(&Var2, "PROPS_P1_E1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 84:
			StringCopy(&Var2, "PROPS_P1_E1_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 85:
			StringCopy(&Var2, "PROPS_P1_E1_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 86:
			StringCopy(&Var2, "PROPS_P1_E1_3", 16);
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 87:
			StringCopy(&Var2, "PROPS_P1_E1_4", 16);
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 88:
			StringCopy(&Var2, "PROPS_P1_E1_5", 16);
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 89:
			StringCopy(&Var2, "PROPS_P1_E1_6", 16);
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 90:
			StringCopy(&Var2, "PROPS_P1_E1_7", 16);
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 91:
			StringCopy(&Var2, "PROPS_P1_E1_8", 16);
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 92:
			StringCopy(&Var2, "PROPS_P1_E1_9", 16);
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 93:
			StringCopy(&Var2, "PROPS_P1_E2", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar8 = 10;
			break;
		
		case 94:
			StringCopy(&Var2, "PROPS_P1_E3", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 110;
			iVar8 = 10;
			break;
		
		case 95:
			StringCopy(&Var2, "PROPS_P1_E4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 120;
			iVar8 = 10;
			break;
		
		case 96:
			StringCopy(&Var2, "PROPS_P1_E4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 128;
			iVar8 = 10;
			break;
		
		case 97:
			StringCopy(&Var2, "PROPS_P1_E4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 130;
			iVar8 = 10;
			break;
		
		case 98:
			StringCopy(&Var2, "PROPS_P1_E4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 140;
			iVar8 = 10;
			break;
		
		case 99:
			StringCopy(&Var2, "PROPS_P1_E4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 145;
			iVar8 = 10;
			break;
		
		case 100:
			StringCopy(&Var2, "PROPS_P1_E4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 135;
			iVar8 = 10;
			break;
		
		case 101:
			StringCopy(&Var2, "PROPS_P1_E4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 138;
			iVar8 = 10;
			break;
		
		case 102:
			StringCopy(&Var2, "PROPS_P1_E5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 110;
			iVar8 = 10;
			break;
		
		case 103:
			StringCopy(&Var2, "PROPS_P1_E5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 112;
			iVar8 = 10;
			break;
		
		case 104:
			StringCopy(&Var2, "PROPS_P1_E5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 115;
			iVar8 = 10;
			break;
		
		case 105:
			StringCopy(&Var2, "PROPS_P1_E5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 118;
			iVar8 = 10;
			break;
		
		case 106:
			StringCopy(&Var2, "PROPS_P1_E5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 120;
			iVar8 = 10;
			break;
		
		case 107:
			StringCopy(&Var2, "PROPS_P1_E5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 125;
			iVar8 = 10;
			break;
		
		case 108:
			StringCopy(&Var2, "PROPS_P1_E5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 128;
			iVar8 = 10;
			break;
		
		case 109:
			StringCopy(&Var2, "PROPS_P1_E5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 138;
			iVar8 = 10;
			break;
		
		case 110:
			StringCopy(&Var2, "PROPS_P1_E5_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 140;
			iVar8 = 10;
			break;
		
		case 111:
			StringCopy(&Var2, "PROPS_P1_E5_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 155;
			iVar8 = 10;
			break;
		
		case 112:
			StringCopy(&Var2, "PROPS_P1_E6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 113:
			StringCopy(&Var2, "PROPS_P1_E6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 114:
			StringCopy(&Var2, "PROPS_P1_E6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 58;
			iVar8 = 10;
			break;
		
		case 115:
			StringCopy(&Var2, "PROPS_P1_E6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 58;
			iVar8 = 10;
			break;
		
		case 116:
			StringCopy(&Var2, "PROPS_P1_E6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 60;
			iVar8 = 10;
			break;
		
		case 117:
			StringCopy(&Var2, "PROPS_P1_E6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 62;
			iVar8 = 10;
			break;
		
		case 118:
			StringCopy(&Var2, "PROPS_P1_E6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 65;
			iVar8 = 10;
			break;
		
		case 119:
			StringCopy(&Var2, "PROPS_P1_E6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 68;
			iVar8 = 10;
			break;
		
		case 120:
			StringCopy(&Var2, "PROPS_P1_E6_8", 16);
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 68;
			iVar8 = 10;
			break;
		
		case 121:
			StringCopy(&Var2, "PROPS_P1_E6_9", 16);
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 72;
			iVar8 = 10;
			break;
		
		case 122:
			StringCopy(&Var2, "PROPS_P1_E7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 145;
			iVar8 = 10;
			break;
		
		case 123:
			StringCopy(&Var2, "PROPS_P1_E7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 149;
			iVar8 = 10;
			break;
		
		case 124:
			StringCopy(&Var2, "PROPS_P1_E7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 139;
			iVar8 = 10;
			break;
		
		case 125:
			StringCopy(&Var2, "PROPS_P1_E7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 149;
			iVar8 = 10;
			break;
		
		case 126:
			StringCopy(&Var2, "PROPS_P1_E7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 135;
			iVar8 = 10;
			break;
		
		case 127:
			StringCopy(&Var2, "PROPS_P1_E7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 138;
			iVar8 = 10;
			break;
		
		case 128:
			StringCopy(&Var2, "PROPS_P1_E7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 140;
			iVar8 = 10;
			break;
		
		case 129:
			StringCopy(&Var2, "PROPS_P1_E7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 145;
			iVar8 = 10;
			break;
		
		case 130:
			StringCopy(&Var2, "PROPS_P1_E7_8", 16);
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 159;
			iVar8 = 10;
			break;
		
		case 131:
			StringCopy(&Var2, "PROPS_P1_E7_9", 16);
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 155;
			iVar8 = 10;
			break;
		
		case 132:
			StringCopy(&Var2, "PROPS_P1_E8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 198;
			iVar8 = 10;
			break;
		
		case 133:
			StringCopy(&Var2, "PROPS_P1_E8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 210;
			iVar8 = 10;
			break;
		
		case 134:
			StringCopy(&Var2, "PROPS_P1_E8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 185;
			iVar8 = 10;
			break;
		
		case 135:
			StringCopy(&Var2, "PROPS_P1_E8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 220;
			iVar8 = 10;
			break;
		
		case 136:
			StringCopy(&Var2, "PROPS_P1_E8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 190;
			iVar8 = 10;
			break;
		
		case 137:
			StringCopy(&Var2, "PROPS_P1_E8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 200;
			iVar8 = 10;
			break;
		
		case 138:
			StringCopy(&Var2, "PROPS_P1_E8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 208;
			iVar8 = 10;
			break;
		
		case 139:
			StringCopy(&Var2, "PROPS_P1_E8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 210;
			iVar8 = 10;
			break;
		
		case 140:
			StringCopy(&Var2, "PROPS_P1_E9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 165;
			iVar8 = 10;
			break;
		
		case 141:
			StringCopy(&Var2, "PROPS_P1_E9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 185;
			iVar8 = 10;
			break;
		
		case 142:
			StringCopy(&Var2, "PROPS_P1_E9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 190;
			iVar8 = 10;
			break;
		
		case 143:
			StringCopy(&Var2, "PROPS_P1_E9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 178;
			iVar8 = 10;
			break;
		
		case 144:
			StringCopy(&Var2, "PROPS_P1_E9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 180;
			iVar8 = 10;
			break;
		
		case 145:
			StringCopy(&Var2, "PROPS_P1_E9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 168;
			iVar8 = 10;
			break;
		
		case 146:
			StringCopy(&Var2, "PROPS_P1_E9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 170;
			iVar8 = 10;
			break;
		
		case 147:
			StringCopy(&Var2, "PROPS_P1_E9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 148:
			StringCopy(&Var2, "PROPS_P1_E9_8", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 170;
			iVar8 = 10;
			break;
		
		case 149:
			StringCopy(&Var2, "PROPS_P1_E9_9", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 178;
			iVar8 = 10;
			break;
		
		case 150:
			StringCopy(&Var2, "PROPS_P1_E10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 140;
			iVar8 = 10;
			break;
		
		case 151:
			StringCopy(&Var2, "PROPS_P1_E10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 145;
			iVar8 = 10;
			break;
		
		case 152:
			StringCopy(&Var2, "PROPS_P1_E10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 150;
			iVar8 = 10;
			break;
		
		case 153:
			StringCopy(&Var2, "PROPS_P1_E10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 165;
			iVar8 = 10;
			break;
		
		case 154:
			StringCopy(&Var2, "PROPS_P1_E10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 168;
			iVar8 = 10;
			break;
		
		case 155:
			StringCopy(&Var2, "PROPS_P1_E10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 178;
			iVar8 = 10;
			break;
		
		case 156:
			StringCopy(&Var2, "PROPS_P1_E10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 160;
			iVar8 = 10;
			break;
		
		case 157:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 100;
			iVar8 = 10;
			break;
		
		case 10:
			StringCopy(&Var2, "PROPS_P1_H0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 320;
			iVar8 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "PROPS_P1_H3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar8 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar8 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 8;
			iVar8 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 270;
			iVar8 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 270;
			iVar8 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 200;
			iVar8 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 200;
			iVar8 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 350;
			iVar8 = 0;
			break;
		
		case 31:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 350;
			iVar8 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 450;
			iVar8 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 500;
			iVar8 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 500;
			iVar8 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 50;
			iVar8 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 38:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 39:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "PROPS_P1_H19_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "PROPS_P1_H19_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "PROPS_P1_H19_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "PROPS_P1_H19_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "PROPS_P1_H19_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "PROPS_P1_H19_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "PROPS_P1_H19_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar8 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "PROPS_P1_H19_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar8 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "PROPS_P1_H19_8", 16);
			iVar6 = 16;
			iVar7 = 8;
			iVar8 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "PROPS_P1_H19_9", 16);
			iVar6 = 16;
			iVar7 = 9;
			iVar8 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "PROPS_P1_H19_10", 16);
			iVar6 = 16;
			iVar7 = 10;
			iVar8 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "PROPS_P1_H19_11", 16);
			iVar6 = 16;
			iVar7 = 11;
			iVar8 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "PROPS_P1_H19_12", 16);
			iVar6 = 16;
			iVar7 = 12;
			iVar8 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "PROPS_P1_H19_13", 16);
			iVar6 = 16;
			iVar7 = 13;
			iVar8 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "PROPS_P1_H19_14", 16);
			iVar6 = 16;
			iVar7 = 14;
			iVar8 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "PROPS_P1_H19_15", 16);
			iVar6 = 16;
			iVar7 = 15;
			iVar8 = 0;
			break;
		
		case 57:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 58:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 59:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 60:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 61:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 62:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 63:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 64:
			StringCopy(&Var2, "PROPS_P1_H19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 30;
			iVar8 = 0;
			break;
		
		case 65:
			StringCopy(&Var2, "PROPS_P1_H19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 30;
			iVar8 = 0;
			break;
		
		case 66:
			StringCopy(&Var2, "PROPS_P1_H19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 32;
			iVar8 = 0;
			break;
		
		case 67:
			StringCopy(&Var2, "PROPS_P1_H19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 35;
			iVar8 = 0;
			break;
		
		case 68:
			StringCopy(&Var2, "PROPS_P1_H19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 38;
			iVar8 = 0;
			break;
		
		case 69:
			StringCopy(&Var2, "PROPS_P1_H19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 42;
			iVar8 = 0;
			break;
		
		case 70:
			StringCopy(&Var2, "PROPS_P1_H19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 42;
			iVar8 = 0;
			break;
		
		case 71:
			StringCopy(&Var2, "PROPS_P1_H19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 40;
			iVar8 = 0;
			break;
		
		case 72:
			StringCopy(&Var2, "PROPS_P1_H19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 45;
			iVar8 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "PROPS_P1_H19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 48;
			iVar8 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "PROPS_P1_H19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 75:
			StringCopy(&Var2, "PROPS_P1_H19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 76:
			StringCopy(&Var2, "PROPS_P1_H19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 28;
			iVar8 = 0;
			break;
		
		case 77:
			StringCopy(&Var2, "PROPS_P1_H19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 28;
			iVar8 = 0;
			break;
		
		case 78:
			StringCopy(&Var2, "PROPS_P1_H19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 30;
			iVar8 = 0;
			break;
		
		case 79:
			StringCopy(&Var2, "PROPS_P1_H19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 35;
			iVar8 = 0;
			break;
		
		case 80:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 81:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		default:
			func_429(iVar10, iParam0, 175);
			return;
			break;
	}
	func_421(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_449(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 13;
	Global_69311[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_429(iVar10, iParam0, 9);
			return;
			break;
	}
	func_421(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_450(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 12;
	Global_69311[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "OUTFIT_P1_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "OUTFIT_P1_2", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "OUTFIT_P1_4", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "OUTFIT_P1_7", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "OUTFIT_P1_10", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "OUTFIT_P1_11", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "OUTFIT_P1_12", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "OUTFIT_P1_13", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "OUTFIT_P1_15", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "OUTFIT_P1_16", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "OUTFIT_P1_17", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		case 12:
			StringCopy(&Var2, "OUTFIT_P1_18", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "OUTFIT_P1_19", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 14:
			StringCopy(&Var2, "OUTFIT_P1_20", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 15:
			StringCopy(&Var2, "OUTFIT_P1_21", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 16:
			StringCopy(&Var2, "OUTFIT_P1_22", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "OUTFIT_P1_23", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "OUTFIT_P1_24", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "OUTFIT_P1_25", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "OUTFIT_P1_26", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "OUTFIT_P1_27", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "OUTFIT_P1_28", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4000;
			break;
		
		case 23:
			StringCopy(&Var2, "OUTFIT_P1_29", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4500;
			break;
		
		case 24:
			StringCopy(&Var2, "OUTFIT_P1_30", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4500;
			break;
		
		case 25:
			StringCopy(&Var2, "OUTFIT_P1_31", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4650;
			break;
		
		case 26:
			StringCopy(&Var2, "OUTFIT_P1_32", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4900;
			break;
		
		case 27:
			StringCopy(&Var2, "OUTFIT_P1_33", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5000;
			break;
		
		case 28:
			StringCopy(&Var2, "OUTFIT_P1_34", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4750;
			break;
		
		case 29:
			StringCopy(&Var2, "OUTFIT_P1_35", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4750;
			break;
		
		case 30:
			StringCopy(&Var2, "OUTFIT_P1_36", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5200;
			break;
		
		case 31:
			StringCopy(&Var2, "OUTFIT_P1_37", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5200;
			break;
		
		case 32:
			StringCopy(&Var2, "OUTFIT_P1_38", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5500;
			break;
		
		case 33:
			StringCopy(&Var2, "OUTFIT_P1_39", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 34:
			StringCopy(&Var2, "OUTFIT_P1_40", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 35:
			StringCopy(&Var2, "OUTFIT_P1_41", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 36:
			StringCopy(&Var2, "OUTFIT_P1_42", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 37:
			StringCopy(&Var2, "OUTFIT_P1_43", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 38:
			StringCopy(&Var2, "OUTFIT_P1_47", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 3000;
			break;
		
		case 39:
			StringCopy(&Var2, "OUTFIT_P1_48", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 3000;
			break;
		
		case 40:
			StringCopy(&Var2, "OUTFIT_P1_49", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 3000;
			break;
		
		case 41:
			StringCopy(&Var2, "OUTFIT_P1_10", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "OUTFIT_P1_50", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "OUTFIT_P1_51", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "OUTFIT_P1_52", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "OUTFIT_P1_53", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "OUTFIT_P1_54", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_429(iVar10, iParam0, 47);
			return;
			break;
	}
	func_421(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_451(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 11;
	Global_69311[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 1;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 2;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 3;
			break;
		
		case 5:
			StringCopy(&Var2, "JBIB_P1_1_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "JBIB_P1_1_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			break;
		
		case 7:
			StringCopy(&Var2, "JBIB_P1_1_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			break;
		
		case 8:
			StringCopy(&Var2, "JBIB_P1_1_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			break;
		
		case 9:
			StringCopy(&Var2, "JBIB_P1_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "JBIB_P1_3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			break;
		
		case 11:
			StringCopy(&Var2, "JBIB_P1_3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			break;
		
		case 12:
			StringCopy(&Var2, "JBIB_P1_3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			break;
		
		case 13:
			StringCopy(&Var2, "JBIB_P1_3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			break;
		
		case 14:
			StringCopy(&Var2, "JBIB_P1_3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			break;
		
		case 15:
			StringCopy(&Var2, "JBIB_P1_3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			break;
		
		case 16:
			StringCopy(&Var2, "JBIB_P1_3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			break;
		
		case 17:
			StringCopy(&Var2, "JBIB_P1_3_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			break;
		
		case 18:
			StringCopy(&Var2, "JBIB_P1_3_9", 16);
			iVar6 = 3;
			iVar7 = 9;
			break;
		
		case 19:
			StringCopy(&Var2, "JBIB_P1_3_10", 16);
			iVar6 = 3;
			iVar7 = 10;
			break;
		
		case 20:
			StringCopy(&Var2, "JBIB_P1_3_11", 16);
			iVar6 = 3;
			iVar7 = 11;
			break;
		
		case 21:
			StringCopy(&Var2, "JBIB_P1_3_12", 16);
			iVar6 = 3;
			iVar7 = 12;
			break;
		
		case 22:
			StringCopy(&Var2, "JBIB_P1_3_13", 16);
			iVar6 = 3;
			iVar7 = 13;
			break;
		
		case 23:
			StringCopy(&Var2, "JBIB_P1_3_14", 16);
			iVar6 = 3;
			iVar7 = 14;
			break;
		
		case 24:
			StringCopy(&Var2, "JBIB_P1_3_15", 16);
			iVar6 = 3;
			iVar7 = 15;
			break;
		
		case 25:
			StringCopy(&Var2, "JBIB_P1_3_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "JBIB_P1_3_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			break;
		
		case 27:
			StringCopy(&Var2, "JBIB_P1_3_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			break;
		
		case 28:
			StringCopy(&Var2, "JBIB_P1_3_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			break;
		
		case 29:
			StringCopy(&Var2, "JBIB_P1_3_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			break;
		
		case 30:
			StringCopy(&Var2, "JBIB_P1_3_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			break;
		
		case 31:
			StringCopy(&Var2, "JBIB_P1_3_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			break;
		
		case 32:
			StringCopy(&Var2, "JBIB_P1_3_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			break;
		
		case 33:
			StringCopy(&Var2, "JBIB_P1_3_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			break;
		
		case 34:
			StringCopy(&Var2, "JBIB_P1_3_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			break;
		
		case 35:
			StringCopy(&Var2, "JBIB_P1_3_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			break;
		
		case 36:
			StringCopy(&Var2, "JBIB_P1_3_11", 16);
			iVar6 = 4;
			iVar7 = 11;
			break;
		
		case 37:
			StringCopy(&Var2, "JBIB_P1_3_12", 16);
			iVar6 = 4;
			iVar7 = 12;
			break;
		
		case 38:
			StringCopy(&Var2, "JBIB_P1_3_13", 16);
			iVar6 = 4;
			iVar7 = 13;
			break;
		
		case 39:
			StringCopy(&Var2, "JBIB_P1_3_14", 16);
			iVar6 = 4;
			iVar7 = 14;
			break;
		
		case 40:
			StringCopy(&Var2, "JBIB_P1_3_15", 16);
			iVar6 = 4;
			iVar7 = 15;
			break;
		
		case 41:
			StringCopy(&Var2, "JBIB_P1_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "JBIB_P1_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "JBIB_P1_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			break;
		
		case 44:
			StringCopy(&Var2, "JBIB_P1_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "JBIB_P1_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "JBIB_P1_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "JBIB_P1_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "JBIB_P1_10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 48;
			break;
		
		case 49:
			StringCopy(&Var2, "JBIB_P1_10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 35;
			break;
		
		case 50:
			StringCopy(&Var2, "JBIB_P1_10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 32;
			break;
		
		case 51:
			StringCopy(&Var2, "JBIB_P1_10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 35;
			break;
		
		case 52:
			StringCopy(&Var2, "JBIB_P1_10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 48;
			break;
		
		case 53:
			StringCopy(&Var2, "JBIB_P1_10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 52;
			break;
		
		case 54:
			StringCopy(&Var2, "JBIB_P1_10_7", 16);
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 38;
			break;
		
		case 55:
			StringCopy(&Var2, "JBIB_P1_10_8", 16);
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 42;
			break;
		
		case 56:
			StringCopy(&Var2, "JBIB_P1_10_9", 16);
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 38;
			break;
		
		case 57:
			StringCopy(&Var2, "JBIB_P1_10_10", 16);
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 35;
			break;
		
		case 58:
			StringCopy(&Var2, "JBIB_P1_10_11", 16);
			iVar6 = 10;
			iVar7 = 11;
			iVar1 = 48;
			break;
		
		case 59:
			StringCopy(&Var2, "JBIB_P1_10_12", 16);
			iVar6 = 10;
			iVar7 = 12;
			iVar1 = 42;
			break;
		
		case 60:
			StringCopy(&Var2, "JBIB_P1_10_13", 16);
			iVar6 = 10;
			iVar7 = 13;
			iVar1 = 45;
			break;
		
		case 61:
			StringCopy(&Var2, "JBIB_P1_10_14", 16);
			iVar6 = 10;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 62:
			StringCopy(&Var2, "JBIB_P1_10_15", 16);
			iVar6 = 10;
			iVar7 = 15;
			iVar1 = 49;
			break;
		
		default:
			func_429(iVar10, iParam0, 63);
			return;
			break;
	}
	func_421(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_452(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 7;
	Global_69311[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_429(iVar10, iParam0, 1);
			return;
			break;
	}
	func_421(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_453(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 1;
	Global_69311[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "BERD_P1_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "BERD_P1_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "BERD_P1_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "BERD_P1_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "BERD_P1_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		default:
			func_429(iVar10, iParam0, 5);
			return;
			break;
	}
	func_421(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_454(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 10;
	Global_69311[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 1;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 2;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 3;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 4;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 5;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 1;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 2;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 3;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 4;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 5;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 6;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 1;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 2;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 3;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 4;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 5;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 6;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 7;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 8;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 9;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 10;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 11;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 12;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 13;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 14;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 15;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 1;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 2;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 3;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 4;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 5;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 6;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 1;
			break;
		
		case 41:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 2;
			break;
		
		case 42:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 3;
			break;
		
		case 43:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 4;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 5;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 6;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 7;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 1;
			break;
		
		case 49:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 2;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 3;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		default:
			func_429(iVar10, iParam0, 53);
			return;
			break;
	}
	func_421(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_455(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 9;
	Global_69311[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 125;
			break;
		
		case 6:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 150;
			break;
		
		case 7:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 175;
			break;
		
		case 8:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 85;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 150;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 175;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		default:
			func_429(iVar10, iParam0, 12);
			return;
			break;
	}
	func_421(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_456(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 8;
	Global_69311[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC_P1_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "SPEC_P1_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 195;
			break;
		
		case 12:
			StringCopy(&Var2, "SPEC_P1_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 195;
			break;
		
		case 13:
			StringCopy(&Var2, "SPEC_P1_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 195;
			break;
		
		case 14:
			StringCopy(&Var2, "SPEC_P1_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 250;
			break;
		
		case 15:
			StringCopy(&Var2, "SPEC_P1_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 250;
			break;
		
		case 16:
			StringCopy(&Var2, "SPEC_P1_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 250;
			break;
		
		case 17:
			StringCopy(&Var2, "SPEC_P1_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 195;
			break;
		
		case 18:
			StringCopy(&Var2, "SPEC_P1_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 250;
			break;
		
		case 19:
			StringCopy(&Var2, "SPEC_P1_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 250;
			break;
		
		case 20:
			StringCopy(&Var2, "SPEC_P1_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 250;
			break;
		
		case 21:
			StringCopy(&Var2, "SPEC_P1_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 250;
			break;
		
		case 22:
			StringCopy(&Var2, "SPEC_P1_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 195;
			break;
		
		case 23:
			StringCopy(&Var2, "SPEC_P1_11_12", 16);
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 250;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			break;
		
		case 29:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			break;
		
		case 30:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			break;
		
		case 31:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			break;
		
		case 32:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			break;
		
		case 33:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			break;
		
		case 34:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			break;
		
		case 35:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar6 = 15;
			iVar7 = 8;
			break;
		
		case 36:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar6 = 15;
			iVar7 = 9;
			break;
		
		case 37:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar6 = 15;
			iVar7 = 10;
			break;
		
		case 38:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar6 = 15;
			iVar7 = 11;
			break;
		
		case 39:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar6 = 15;
			iVar7 = 12;
			break;
		
		case 40:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar6 = 15;
			iVar7 = 13;
			break;
		
		case 41:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar6 = 15;
			iVar7 = 14;
			break;
		
		case 42:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar6 = 15;
			iVar7 = 15;
			break;
		
		case 43:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			break;
		
		case 45:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			break;
		
		case 46:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			break;
		
		case 47:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			break;
		
		case 48:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			break;
		
		case 49:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			break;
		
		case 50:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			break;
		
		case 51:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar6 = 16;
			iVar7 = 8;
			break;
		
		case 52:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar6 = 16;
			iVar7 = 9;
			break;
		
		case 53:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar6 = 16;
			iVar7 = 10;
			break;
		
		case 54:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar6 = 16;
			iVar7 = 11;
			break;
		
		case 55:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar6 = 16;
			iVar7 = 12;
			break;
		
		case 56:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar6 = 16;
			iVar7 = 13;
			break;
		
		case 57:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar6 = 16;
			iVar7 = 14;
			break;
		
		case 58:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar6 = 16;
			iVar7 = 15;
			break;
		
		case 59:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			break;
		
		case 60:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			break;
		
		case 61:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			break;
		
		case 62:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			break;
		
		case 63:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			break;
		
		case 64:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			break;
		
		case 65:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			break;
		
		case 66:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar6 = 17;
			iVar7 = 7;
			break;
		
		case 67:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar6 = 17;
			iVar7 = 8;
			break;
		
		case 68:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar6 = 17;
			iVar7 = 9;
			break;
		
		case 69:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar6 = 17;
			iVar7 = 10;
			break;
		
		case 70:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar6 = 17;
			iVar7 = 11;
			break;
		
		case 71:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar6 = 17;
			iVar7 = 12;
			break;
		
		case 72:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar6 = 17;
			iVar7 = 13;
			break;
		
		case 73:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar6 = 17;
			iVar7 = 14;
			break;
		
		case 74:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar6 = 17;
			iVar7 = 15;
			break;
		
		case 75:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 18;
			iVar7 = 0;
			break;
		
		case 76:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 19;
			iVar7 = 0;
			break;
		
		default:
			func_429(iVar10, iParam0, 77);
			return;
			break;
	}
	func_421(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_457(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 5;
	Global_69311[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		default:
			func_429(iVar10, iParam0, 7);
			return;
			break;
	}
	func_421(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_458(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 6;
	Global_69311[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "FEET_P1_00_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "FEET_P1_00_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 80;
			break;
		
		case 2:
			StringCopy(&Var2, "FEET_P1_00_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 80;
			break;
		
		case 3:
			StringCopy(&Var2, "FEET_P1_00_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 89;
			break;
		
		case 4:
			StringCopy(&Var2, "FEET_P1_00_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 45;
			break;
		
		case 5:
			StringCopy(&Var2, "FEET_P1_00_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 35;
			break;
		
		case 6:
			StringCopy(&Var2, "FEET_P1_00_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 89;
			break;
		
		case 7:
			StringCopy(&Var2, "FEET_P1_00_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 95;
			break;
		
		case 8:
			StringCopy(&Var2, "FEET_P1_00_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 115;
			break;
		
		case 9:
			StringCopy(&Var2, "FEET_P1_00_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 40;
			break;
		
		case 10:
			StringCopy(&Var2, "FEET_P1_00_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 145;
			break;
		
		case 11:
			StringCopy(&Var2, "FEET_P1_00_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 145;
			break;
		
		case 12:
			StringCopy(&Var2, "FEET_P1_01_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "FEET_P1_06_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "FEET_P1_06_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 180;
			break;
		
		case 20:
			StringCopy(&Var2, "FEET_P1_06_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 80;
			break;
		
		case 21:
			StringCopy(&Var2, "FEET_P1_06_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 200;
			break;
		
		case 22:
			StringCopy(&Var2, "FEET_P1_06_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 220;
			break;
		
		case 23:
			StringCopy(&Var2, "FEET_P1_06_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 235;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 25:
			StringCopy(&Var2, "FEET_P1_08_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 870;
			break;
		
		case 26:
			StringCopy(&Var2, "FEET_P1_08_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 870;
			break;
		
		case 27:
			StringCopy(&Var2, "FEET_P1_08_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 870;
			break;
		
		case 28:
			StringCopy(&Var2, "FEET_P1_08_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 1275;
			break;
		
		case 29:
			StringCopy(&Var2, "FEET_P1_08_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 1275;
			break;
		
		case 30:
			StringCopy(&Var2, "FEET_P1_08_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 1275;
			break;
		
		case 31:
			StringCopy(&Var2, "FEET_P1_08_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 1275;
			break;
		
		case 32:
			StringCopy(&Var2, "FEET_P1_08_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 1275;
			break;
		
		case 33:
			StringCopy(&Var2, "FEET_P1_08_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 1275;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "FEET_P1_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "FEET_P1_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "FEET_P1_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 50;
			break;
		
		case 38:
			StringCopy(&Var2, "FEET_P1_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 39:
			StringCopy(&Var2, "FEET_P1_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 50;
			break;
		
		case 40:
			StringCopy(&Var2, "FEET_P1_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 50;
			break;
		
		case 41:
			StringCopy(&Var2, "FEET_P1_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 50;
			break;
		
		case 42:
			StringCopy(&Var2, "FEET_P1_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 50;
			break;
		
		case 43:
			StringCopy(&Var2, "FEET_P1_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 50;
			break;
		
		case 44:
			StringCopy(&Var2, "FEET_P1_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 50;
			break;
		
		case 45:
			StringCopy(&Var2, "FEET_P1_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 50;
			break;
		
		case 46:
			StringCopy(&Var2, "FEET_P1_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 50;
			break;
		
		case 47:
			StringCopy(&Var2, "FEET_P1_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 50;
			break;
		
		case 48:
			StringCopy(&Var2, "FEET_P1_11_12", 16);
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 50;
			break;
		
		case 49:
			StringCopy(&Var2, "FEET_P1_11_13", 16);
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 50;
			break;
		
		case 50:
			StringCopy(&Var2, "FEET_P1_11_14", 16);
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 50;
			break;
		
		case 51:
			StringCopy(&Var2, "FEET_P1_11_15", 16);
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 50;
			break;
		
		case 52:
			StringCopy(&Var2, "FEET_P1_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "FEET_P1_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 25;
			break;
		
		case 54:
			StringCopy(&Var2, "FEET_P1_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 20;
			break;
		
		case 55:
			StringCopy(&Var2, "FEET_P1_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 24;
			break;
		
		case 56:
			StringCopy(&Var2, "FEET_P1_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 25;
			break;
		
		case 57:
			StringCopy(&Var2, "FEET_P1_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 27;
			break;
		
		case 58:
			StringCopy(&Var2, "FEET_P1_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 29;
			break;
		
		case 59:
			StringCopy(&Var2, "FEET_P1_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 27;
			break;
		
		case 60:
			StringCopy(&Var2, "FEET_P1_12_8", 16);
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 25;
			break;
		
		case 61:
			StringCopy(&Var2, "FEET_P1_12_9", 16);
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 30;
			break;
		
		case 62:
			StringCopy(&Var2, "FEET_P1_12_10", 16);
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 28;
			break;
		
		case 63:
			StringCopy(&Var2, "FEET_P1_12_11", 16);
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 30;
			break;
		
		case 64:
			StringCopy(&Var2, "FEET_P1_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 65:
			StringCopy(&Var2, "FEET_P1_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 155;
			break;
		
		case 66:
			StringCopy(&Var2, "FEET_P1_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 155;
			break;
		
		case 67:
			StringCopy(&Var2, "FEET_P1_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 165;
			break;
		
		case 68:
			StringCopy(&Var2, "FEET_P1_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 170;
			break;
		
		case 69:
			StringCopy(&Var2, "FEET_P1_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 160;
			break;
		
		case 70:
			StringCopy(&Var2, "FEET_P1_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 165;
			break;
		
		case 71:
			StringCopy(&Var2, "FEET_P1_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 170;
			break;
		
		case 72:
			StringCopy(&Var2, "FEET_P1_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 160;
			break;
		
		case 73:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "FEET_P1_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 720;
			break;
		
		case 75:
			StringCopy(&Var2, "FEET_P1_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 680;
			break;
		
		case 76:
			StringCopy(&Var2, "FEET_P1_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 650;
			break;
		
		case 77:
			StringCopy(&Var2, "FEET_P1_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 670;
			break;
		
		case 78:
			StringCopy(&Var2, "FEET_P1_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 700;
			break;
		
		case 79:
			StringCopy(&Var2, "FEET_P1_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 680;
			break;
		
		case 80:
			StringCopy(&Var2, "FEET_P1_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 720;
			break;
		
		case 81:
			StringCopy(&Var2, "FEET_P1_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 740;
			break;
		
		case 82:
			StringCopy(&Var2, "FEET_P1_16_8", 16);
			iVar6 = 16;
			iVar7 = 8;
			iVar1 = 760;
			break;
		
		case 83:
			StringCopy(&Var2, "FEET_P1_16_9", 16);
			iVar6 = 16;
			iVar7 = 9;
			iVar1 = 780;
			break;
		
		case 84:
			StringCopy(&Var2, "FEET_P1_16_10", 16);
			iVar6 = 16;
			iVar7 = 10;
			iVar1 = 750;
			break;
		
		case 85:
			StringCopy(&Var2, "FEET_P1_16_11", 16);
			iVar6 = 16;
			iVar7 = 11;
			iVar1 = 700;
			break;
		
		case 86:
			StringCopy(&Var2, "FEET_P1_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 790;
			break;
		
		case 87:
			StringCopy(&Var2, "FEET_P1_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar1 = 750;
			break;
		
		case 88:
			StringCopy(&Var2, "FEET_P1_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			iVar1 = 860;
			break;
		
		case 89:
			StringCopy(&Var2, "FEET_P1_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 750;
			break;
		
		case 90:
			StringCopy(&Var2, "FEET_P1_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 790;
			break;
		
		case 91:
			StringCopy(&Var2, "FEET_P1_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 92:
			StringCopy(&Var2, "FEET_P1_17_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			iVar1 = 820;
			break;
		
		case 93:
			StringCopy(&Var2, "FEET_P1_17_7", 16);
			iVar6 = 17;
			iVar7 = 7;
			iVar1 = 800;
			break;
		
		case 94:
			StringCopy(&Var2, "FEET_P1_17_8", 16);
			iVar6 = 17;
			iVar7 = 8;
			iVar1 = 850;
			break;
		
		case 95:
			StringCopy(&Var2, "FEET_P1_17_9", 16);
			iVar6 = 17;
			iVar7 = 9;
			iVar1 = 870;
			break;
		
		case 96:
			StringCopy(&Var2, "FEET_P1_17_10", 16);
			iVar6 = 17;
			iVar7 = 10;
			iVar1 = 720;
			break;
		
		case 97:
			StringCopy(&Var2, "FEET_P1_17_11", 16);
			iVar6 = 17;
			iVar7 = 11;
			iVar1 = 740;
			break;
		
		case 98:
			StringCopy(&Var2, "FEET_P1_17_12", 16);
			iVar6 = 17;
			iVar7 = 12;
			iVar1 = 800;
			break;
		
		case 99:
			StringCopy(&Var2, "FEET_P1_17_13", 16);
			iVar6 = 17;
			iVar7 = 13;
			iVar1 = 750;
			break;
		
		case 100:
			StringCopy(&Var2, "FEET_P1_17_14", 16);
			iVar6 = 17;
			iVar7 = 14;
			iVar1 = 770;
			break;
		
		case 101:
			StringCopy(&Var2, "FEET_P1_17_15", 16);
			iVar6 = 17;
			iVar7 = 15;
			iVar1 = 860;
			break;
		
		case 102:
			StringCopy(&Var2, "FEET_P1_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 850;
			break;
		
		case 103:
			StringCopy(&Var2, "FEET_P1_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 800;
			break;
		
		case 104:
			StringCopy(&Var2, "FEET_P1_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 780;
			break;
		
		case 105:
			StringCopy(&Var2, "FEET_P1_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 890;
			break;
		
		case 106:
			StringCopy(&Var2, "FEET_P1_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 820;
			break;
		
		case 107:
			StringCopy(&Var2, "FEET_P1_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 108:
			StringCopy(&Var2, "FEET_P1_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 870;
			break;
		
		case 109:
			StringCopy(&Var2, "FEET_P1_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 930;
			break;
		
		case 110:
			StringCopy(&Var2, "FEET_P1_18_8", 16);
			iVar6 = 18;
			iVar7 = 8;
			iVar1 = 880;
			break;
		
		case 111:
			StringCopy(&Var2, "FEET_P1_18_9", 16);
			iVar6 = 18;
			iVar7 = 9;
			iVar1 = 900;
			break;
		
		case 112:
			StringCopy(&Var2, "FEET_P1_18_10", 16);
			iVar6 = 18;
			iVar7 = 10;
			iVar1 = 920;
			break;
		
		case 113:
			StringCopy(&Var2, "FEET_P1_18_11", 16);
			iVar6 = 18;
			iVar7 = 11;
			iVar1 = 970;
			break;
		
		case 114:
			StringCopy(&Var2, "FEET_P1_18_12", 16);
			iVar6 = 18;
			iVar7 = 12;
			iVar1 = 990;
			break;
		
		case 115:
			StringCopy(&Var2, "FEET_P1_18_13", 16);
			iVar6 = 18;
			iVar7 = 13;
			iVar1 = 960;
			break;
		
		case 116:
			StringCopy(&Var2, "FEET_P1_18_14", 16);
			iVar6 = 18;
			iVar7 = 14;
			iVar1 = 980;
			break;
		
		case 117:
			StringCopy(&Var2, "FEET_P1_18_15", 16);
			iVar6 = 18;
			iVar7 = 15;
			iVar1 = 950;
			break;
		
		case 118:
			StringCopy(&Var2, "FEET_P1_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 110;
			break;
		
		case 119:
			StringCopy(&Var2, "FEET_P1_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 120:
			StringCopy(&Var2, "FEET_P1_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 120;
			break;
		
		case 121:
			StringCopy(&Var2, "FEET_P1_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 110;
			break;
		
		case 122:
			StringCopy(&Var2, "FEET_P1_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 125;
			break;
		
		case 123:
			StringCopy(&Var2, "FEET_P1_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 128;
			break;
		
		case 124:
			StringCopy(&Var2, "FEET_P1_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 135;
			break;
		
		case 125:
			StringCopy(&Var2, "FEET_P1_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 130;
			break;
		
		case 126:
			StringCopy(&Var2, "FEET_P1_19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 145;
			break;
		
		case 127:
			StringCopy(&Var2, "FEET_P1_19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 110;
			break;
		
		case 128:
			StringCopy(&Var2, "FEET_P1_19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 120;
			break;
		
		case 129:
			StringCopy(&Var2, "FEET_P1_19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 150;
			break;
		
		case 130:
			StringCopy(&Var2, "FEET_P1_19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 125;
			break;
		
		case 131:
			StringCopy(&Var2, "FEET_P1_19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 120;
			break;
		
		case 132:
			StringCopy(&Var2, "FEET_P1_19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 130;
			break;
		
		case 133:
			StringCopy(&Var2, "FEET_P1_19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 110;
			break;
		
		default:
			func_429(iVar10, iParam0, 134);
			return;
			break;
	}
	func_421(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_459(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 4;
	Global_69311[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "LEGS_P1_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "LEGS_P1_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 32;
			break;
		
		case 2:
			StringCopy(&Var2, "LEGS_P1_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 38;
			break;
		
		case 3:
			StringCopy(&Var2, "LEGS_P1_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 44;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 3;
			iVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 4;
			iVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 5;
			iVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "LEGS_P1_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "LEGS_P1_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "LEGS_P1_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 690;
			break;
		
		case 16:
			StringCopy(&Var2, "LEGS_P1_6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 720;
			break;
		
		case 17:
			StringCopy(&Var2, "LEGS_P1_6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 850;
			break;
		
		case 18:
			StringCopy(&Var2, "LEGS_P1_6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 850;
			break;
		
		case 19:
			StringCopy(&Var2, "LEGS_P1_6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 740;
			break;
		
		case 20:
			StringCopy(&Var2, "LEGS_P1_6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 750;
			break;
		
		case 21:
			StringCopy(&Var2, "LEGS_P1_6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 790;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar0 = true;
			break;
		
		case 24:
			StringCopy(&Var2, "LEGS_P1_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "LEGS_P1_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 145;
			break;
		
		case 26:
			StringCopy(&Var2, "LEGS_P1_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 140;
			break;
		
		case 27:
			StringCopy(&Var2, "LEGS_P1_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 148;
			break;
		
		case 28:
			StringCopy(&Var2, "LEGS_P1_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 150;
			break;
		
		case 29:
			StringCopy(&Var2, "LEGS_P1_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 154;
			break;
		
		case 30:
			StringCopy(&Var2, "LEGS_P1_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 158;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "LEGS_P1_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 820;
			break;
		
		case 34:
			StringCopy(&Var2, "LEGS_P1_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 820;
			break;
		
		case 35:
			StringCopy(&Var2, "LEGS_P1_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 850;
			break;
		
		case 36:
			StringCopy(&Var2, "LEGS_P1_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 850;
			break;
		
		case 37:
			StringCopy(&Var2, "LEGS_P1_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 920;
			break;
		
		case 38:
			StringCopy(&Var2, "LEGS_P1_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 950;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "LEGS_P1_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "LEGS_P1_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 45;
			break;
		
		case 42:
			StringCopy(&Var2, "LEGS_P1_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 48;
			break;
		
		case 43:
			StringCopy(&Var2, "LEGS_P1_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 45;
			break;
		
		case 44:
			StringCopy(&Var2, "LEGS_P1_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 48;
			break;
		
		case 45:
			StringCopy(&Var2, "LEGS_P1_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 52;
			break;
		
		case 46:
			StringCopy(&Var2, "LEGS_P1_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 55;
			break;
		
		case 47:
			StringCopy(&Var2, "LEGS_P1_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 58;
			break;
		
		case 48:
			StringCopy(&Var2, "LEGS_P1_13_8", 16);
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 60;
			break;
		
		case 49:
			StringCopy(&Var2, "LEGS_P1_13_9", 16);
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 58;
			break;
		
		case 50:
			StringCopy(&Var2, "LEGS_P1_13_10", 16);
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 62;
			break;
		
		case 51:
			StringCopy(&Var2, "LEGS_P1_13_11", 16);
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 65;
			break;
		
		case 52:
			StringCopy(&Var2, "LEGS_P1_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "LEGS_P1_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "LEGS_P1_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			break;
		
		case 55:
			StringCopy(&Var2, "LEGS_P1_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			break;
		
		case 56:
			StringCopy(&Var2, "LEGS_P1_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			break;
		
		case 57:
			StringCopy(&Var2, "LEGS_P1_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			break;
		
		case 58:
			StringCopy(&Var2, "LEGS_P1_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			break;
		
		case 59:
			StringCopy(&Var2, "LEGS_P1_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			break;
		
		case 60:
			StringCopy(&Var2, "LEGS_P1_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			break;
		
		case 61:
			StringCopy(&Var2, "LEGS_P1_15_8", 16);
			iVar6 = 15;
			iVar7 = 8;
			break;
		
		case 62:
			StringCopy(&Var2, "LEGS_P1_15_9", 16);
			iVar6 = 15;
			iVar7 = 9;
			break;
		
		case 63:
			StringCopy(&Var2, "LEGS_P1_15_10", 16);
			iVar6 = 15;
			iVar7 = 10;
			break;
		
		case 64:
			StringCopy(&Var2, "LEGS_P1_15_11", 16);
			iVar6 = 15;
			iVar7 = 11;
			break;
		
		case 65:
			StringCopy(&Var2, "LEGS_P1_15_12", 16);
			iVar6 = 15;
			iVar7 = 12;
			break;
		
		case 66:
			StringCopy(&Var2, "LEGS_P1_15_13", 16);
			iVar6 = 15;
			iVar7 = 13;
			break;
		
		case 67:
			StringCopy(&Var2, "LEGS_P1_15_14", 16);
			iVar6 = 15;
			iVar7 = 14;
			break;
		
		case 68:
			StringCopy(&Var2, "LEGS_P1_15_15", 16);
			iVar6 = 15;
			iVar7 = 15;
			break;
		
		case 69:
			StringCopy(&Var2, "LEGS_P1_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar0 = true;
			break;
		
		case 71:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "LEGS_P1_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "LEGS_P1_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 160;
			break;
		
		case 74:
			StringCopy(&Var2, "LEGS_P1_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 180;
			break;
		
		case 75:
			StringCopy(&Var2, "LEGS_P1_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 180;
			break;
		
		case 76:
			StringCopy(&Var2, "LEGS_P1_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			break;
		
		case 77:
			StringCopy(&Var2, "LEGS_P1_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			break;
		
		case 78:
			StringCopy(&Var2, "LEGS_P1_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 79:
			StringCopy(&Var2, "LEGS_P1_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 118;
			break;
		
		case 80:
			StringCopy(&Var2, "LEGS_P1_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 120;
			break;
		
		case 81:
			StringCopy(&Var2, "LEGS_P1_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 128;
			break;
		
		case 82:
			StringCopy(&Var2, "LEGS_P1_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 128;
			break;
		
		case 83:
			StringCopy(&Var2, "LEGS_P1_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			iVar1 = 130;
			break;
		
		case 84:
			StringCopy(&Var2, "LEGS_P1_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 145;
			break;
		
		case 85:
			StringCopy(&Var2, "LEGS_P1_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 138;
			break;
		
		case 86:
			StringCopy(&Var2, "LEGS_P1_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 132;
			break;
		
		case 87:
			StringCopy(&Var2, "LEGS_P1_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 148;
			break;
		
		case 88:
			StringCopy(&Var2, "LEGS_P1_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 118;
			break;
		
		case 89:
			StringCopy(&Var2, "LEGS_P1_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 118;
			break;
		
		case 90:
			StringCopy(&Var2, "LEGS_P1_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 118;
			break;
		
		case 91:
			StringCopy(&Var2, "LEGS_P1_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 129;
			break;
		
		case 92:
			StringCopy(&Var2, "LEGS_P1_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 135;
			break;
		
		case 93:
			StringCopy(&Var2, "LEGS_P1_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 135;
			break;
		
		case 94:
			StringCopy(&Var2, "LEGS_P1_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 118;
			break;
		
		case 95:
			StringCopy(&Var2, "LEGS_P1_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 118;
			break;
		
		case 96:
			StringCopy(&Var2, "LEGS_P1_21_8", 16);
			iVar6 = 21;
			iVar7 = 8;
			iVar1 = 118;
			break;
		
		case 97:
			StringCopy(&Var2, "LEGS_P1_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar1 = 55;
			break;
		
		case 98:
			StringCopy(&Var2, "LEGS_P1_22_1", 16);
			iVar6 = 22;
			iVar7 = 1;
			iVar1 = 55;
			break;
		
		case 99:
			StringCopy(&Var2, "LEGS_P1_22_2", 16);
			iVar6 = 22;
			iVar7 = 2;
			iVar1 = 59;
			break;
		
		case 100:
			StringCopy(&Var2, "LEGS_P1_22_3", 16);
			iVar6 = 22;
			iVar7 = 3;
			iVar1 = 59;
			break;
		
		case 101:
			StringCopy(&Var2, "LEGS_P1_22_4", 16);
			iVar6 = 22;
			iVar7 = 4;
			iVar1 = 65;
			break;
		
		case 102:
			StringCopy(&Var2, "LEGS_P1_22_5", 16);
			iVar6 = 22;
			iVar7 = 5;
			iVar1 = 65;
			break;
		
		case 103:
			StringCopy(&Var2, "LEGS_P1_22_6", 16);
			iVar6 = 22;
			iVar7 = 6;
			iVar1 = 69;
			break;
		
		case 104:
			StringCopy(&Var2, "LEGS_P1_22_7", 16);
			iVar6 = 22;
			iVar7 = 7;
			iVar1 = 69;
			break;
		
		case 105:
			StringCopy(&Var2, "LEGS_P1_22_8", 16);
			iVar6 = 22;
			iVar7 = 8;
			iVar1 = 75;
			break;
		
		case 106:
			StringCopy(&Var2, "LEGS_P1_22_9", 16);
			iVar6 = 22;
			iVar7 = 9;
			iVar1 = 75;
			break;
		
		case 107:
			StringCopy(&Var2, "LEGS_P1_22_10", 16);
			iVar6 = 22;
			iVar7 = 10;
			iVar1 = 65;
			break;
		
		case 108:
			StringCopy(&Var2, "LEGS_P1_22_11", 16);
			iVar6 = 22;
			iVar7 = 11;
			iVar1 = 65;
			break;
		
		case 109:
			StringCopy(&Var2, "LEGS_P1_22_12", 16);
			iVar6 = 22;
			iVar7 = 12;
			iVar1 = 65;
			break;
		
		case 110:
			StringCopy(&Var2, "LEGS_P1_22_13", 16);
			iVar6 = 22;
			iVar7 = 13;
			iVar1 = 65;
			break;
		
		case 111:
			StringCopy(&Var2, "LEGS_P1_23_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar1 = 38;
			break;
		
		case 112:
			StringCopy(&Var2, "LEGS_P1_23_1", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar1 = 38;
			break;
		
		case 113:
			StringCopy(&Var2, "LEGS_P1_23_2", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar1 = 28;
			break;
		
		case 114:
			StringCopy(&Var2, "LEGS_P1_23_3", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar1 = 34;
			break;
		
		case 115:
			StringCopy(&Var2, "LEGS_P1_23_4", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar1 = 36;
			break;
		
		case 116:
			StringCopy(&Var2, "LEGS_P1_23_5", 16);
			iVar6 = 23;
			iVar7 = 5;
			iVar1 = 32;
			break;
		
		default:
			func_429(iVar10, iParam0, 117);
			return;
			break;
	}
	func_421(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_460(int iParam0)
{
	if (iParam0 < 107)
	{
		func_463(iParam0);
	}
	else if (iParam0 < 227)
	{
		func_462(iParam0);
	}
	else
	{
		func_461(iParam0);
	}
	if (Global_69311[0 /*14*/].f_2 == -1)
	{
		func_429(3, iParam0, 318);
	}
}

void func_461(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_69311[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 227:
			StringCopy(&Var2, "TORSO_P1_18_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar9 = 3;
			break;
		
		case 228:
			StringCopy(&Var2, "TORSO_P1_18_1", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar9 = 3;
			break;
		
		case 229:
			StringCopy(&Var2, "TORSO_P1_18_2", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar9 = 3;
			break;
		
		case 230:
			StringCopy(&Var2, "TORSO_P1_18_3", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar9 = 3;
			break;
		
		case 231:
			StringCopy(&Var2, "TORSO_P1_18_4", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar9 = 3;
			break;
		
		case 232:
			StringCopy(&Var2, "TORSO_P1_18_5", 16);
			iVar6 = 23;
			iVar7 = 5;
			iVar9 = 3;
			break;
		
		case 233:
			StringCopy(&Var2, "TORSO_P1_18_6", 16);
			iVar6 = 23;
			iVar7 = 6;
			iVar9 = 3;
			break;
		
		case 234:
			StringCopy(&Var2, "TORSO_P1_18_7", 16);
			iVar6 = 23;
			iVar7 = 7;
			iVar9 = 3;
			break;
		
		case 235:
			StringCopy(&Var2, "TORSO_P1_18_8", 16);
			iVar6 = 23;
			iVar7 = 8;
			iVar9 = 3;
			break;
		
		case 236:
			StringCopy(&Var2, "TORSO_P1_18_9", 16);
			iVar6 = 23;
			iVar7 = 9;
			iVar9 = 3;
			break;
		
		case 237:
			StringCopy(&Var2, "TORSO_P1_18_10", 16);
			iVar6 = 23;
			iVar7 = 10;
			iVar9 = 3;
			break;
		
		case 238:
			StringCopy(&Var2, "TORSO_P1_18_11", 16);
			iVar6 = 23;
			iVar7 = 11;
			iVar9 = 3;
			break;
		
		case 239:
			StringCopy(&Var2, "TORSO_P1_18_12", 16);
			iVar6 = 23;
			iVar7 = 12;
			iVar9 = 3;
			break;
		
		case 240:
			StringCopy(&Var2, "TORSO_P1_18_13", 16);
			iVar6 = 23;
			iVar7 = 13;
			iVar9 = 3;
			break;
		
		case 241:
			StringCopy(&Var2, "TORSO_P1_18_14", 16);
			iVar6 = 23;
			iVar7 = 14;
			iVar9 = 3;
			break;
		
		case 242:
			StringCopy(&Var2, "TORSO_P1_18_15", 16);
			iVar6 = 23;
			iVar7 = 15;
			iVar9 = 3;
			break;
		
		case 243:
			StringCopy(&Var2, "TORSO_P1_24_0", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 244:
			StringCopy(&Var2, "TORSO_P1_24_1", 16);
			iVar6 = 24;
			iVar7 = 1;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 245:
			StringCopy(&Var2, "TORSO_P1_24_2", 16);
			iVar6 = 24;
			iVar7 = 2;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 246:
			StringCopy(&Var2, "TORSO_P1_24_3", 16);
			iVar6 = 24;
			iVar7 = 3;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 247:
			StringCopy(&Var2, "TORSO_P1_24_4", 16);
			iVar6 = 24;
			iVar7 = 4;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 248:
			StringCopy(&Var2, "TORSO_P1_24_5", 16);
			iVar6 = 24;
			iVar7 = 5;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 249:
			StringCopy(&Var2, "TORSO_P1_24_6", 16);
			iVar6 = 24;
			iVar7 = 6;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 250:
			StringCopy(&Var2, "TORSO_P1_24_7", 16);
			iVar6 = 24;
			iVar7 = 7;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 251:
			StringCopy(&Var2, "TORSO_P1_24_8", 16);
			iVar6 = 24;
			iVar7 = 8;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 252:
			StringCopy(&Var2, "TORSO_P1_24_9", 16);
			iVar6 = 24;
			iVar7 = 9;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 253:
			StringCopy(&Var2, "TORSO_P1_24_10", 16);
			iVar6 = 24;
			iVar7 = 10;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 254:
			StringCopy(&Var2, "TORSO_P1_24_11", 16);
			iVar6 = 24;
			iVar7 = 11;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 255:
			StringCopy(&Var2, "TORSO_P1_24_12", 16);
			iVar6 = 24;
			iVar7 = 12;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 256:
			StringCopy(&Var2, "TORSO_P1_24_13", 16);
			iVar6 = 24;
			iVar7 = 13;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 257:
			StringCopy(&Var2, "TORSO_P1_24_14", 16);
			iVar6 = 24;
			iVar7 = 14;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 258:
			StringCopy(&Var2, "TORSO_P1_24_15", 16);
			iVar6 = 24;
			iVar7 = 15;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 259:
			StringCopy(&Var2, "TORSO_P1_25_0", 16);
			iVar6 = 25;
			iVar7 = 0;
			iVar0 = true;
			iVar9 = 3;
			break;
		
		case 260:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 0;
			iVar9 = 1;
			break;
		
		case 261:
			StringCopy(&Var2, "TORSO_P1_27_0", 16);
			iVar6 = 27;
			iVar7 = 0;
			iVar1 = 150;
			break;
		
		case 262:
			StringCopy(&Var2, "TORSO_P1_27_1", 16);
			iVar6 = 27;
			iVar7 = 1;
			iVar1 = 160;
			break;
		
		case 263:
			StringCopy(&Var2, "TORSO_P1_27_2", 16);
			iVar6 = 27;
			iVar7 = 2;
			iVar1 = 150;
			break;
		
		case 264:
			StringCopy(&Var2, "TORSO_P1_27_3", 16);
			iVar6 = 27;
			iVar7 = 3;
			iVar1 = 150;
			break;
		
		case 265:
			StringCopy(&Var2, "TORSO_P1_27_4", 16);
			iVar6 = 27;
			iVar7 = 4;
			iVar1 = 160;
			break;
		
		case 266:
			StringCopy(&Var2, "TORSO_P1_27_5", 16);
			iVar6 = 27;
			iVar7 = 5;
			iVar1 = 160;
			break;
		
		case 267:
			StringCopy(&Var2, "TORSO_P1_28_0", 16);
			iVar6 = 28;
			iVar7 = 0;
			iVar1 = 88;
			break;
		
		case 268:
			StringCopy(&Var2, "TORSO_P1_28_1", 16);
			iVar6 = 28;
			iVar7 = 1;
			iVar1 = 60;
			break;
		
		case 269:
			StringCopy(&Var2, "TORSO_P1_28_2", 16);
			iVar6 = 28;
			iVar7 = 2;
			iVar1 = 70;
			break;
		
		case 270:
			StringCopy(&Var2, "TORSO_P1_28_3", 16);
			iVar6 = 28;
			iVar7 = 3;
			iVar1 = 80;
			break;
		
		case 271:
			StringCopy(&Var2, "TORSO_P1_28_4", 16);
			iVar6 = 28;
			iVar7 = 4;
			iVar1 = 90;
			break;
		
		case 272:
			StringCopy(&Var2, "TORSO_P1_28_5", 16);
			iVar6 = 28;
			iVar7 = 5;
			iVar1 = 80;
			break;
		
		case 273:
			StringCopy(&Var2, "TORSO_P1_28_6", 16);
			iVar6 = 28;
			iVar7 = 6;
			iVar1 = 70;
			break;
		
		case 274:
			StringCopy(&Var2, "TORSO_P1_28_7", 16);
			iVar6 = 28;
			iVar7 = 7;
			iVar1 = 95;
			break;
		
		case 275:
			StringCopy(&Var2, "TORSO_P1_28_8", 16);
			iVar6 = 28;
			iVar7 = 8;
			iVar1 = 105;
			break;
		
		case 276:
			StringCopy(&Var2, "TORSO_P1_28_9", 16);
			iVar6 = 28;
			iVar7 = 9;
			iVar1 = 95;
			break;
		
		case 277:
			StringCopy(&Var2, "TORSO_P1_28_10", 16);
			iVar6 = 28;
			iVar7 = 10;
			iVar1 = 110;
			break;
		
		case 278:
			StringCopy(&Var2, "TORSO_P1_28_11", 16);
			iVar6 = 28;
			iVar7 = 11;
			iVar1 = 98;
			break;
		
		case 279:
			StringCopy(&Var2, "TORSO_P1_28_12", 16);
			iVar6 = 28;
			iVar7 = 12;
			iVar1 = 88;
			break;
		
		case 280:
			StringCopy(&Var2, "TORSO_P1_28_13", 16);
			iVar6 = 28;
			iVar7 = 13;
			iVar1 = 98;
			break;
		
		case 281:
			StringCopy(&Var2, "TORSO_P1_28_14", 16);
			iVar6 = 28;
			iVar7 = 14;
			iVar1 = 110;
			break;
		
		case 282:
			StringCopy(&Var2, "TORSO_P1_28_15", 16);
			iVar6 = 28;
			iVar7 = 15;
			iVar1 = 98;
			break;
		
		case 283:
			StringCopy(&Var2, "TORSO_P1_29_0", 16);
			iVar6 = 29;
			iVar7 = 0;
			iVar1 = 250;
			break;
		
		case 284:
			StringCopy(&Var2, "TORSO_P1_29_1", 16);
			iVar6 = 29;
			iVar7 = 1;
			iVar1 = 270;
			break;
		
		case 285:
			StringCopy(&Var2, "TORSO_P1_29_2", 16);
			iVar6 = 29;
			iVar7 = 2;
			iVar1 = 280;
			break;
		
		case 286:
			StringCopy(&Var2, "TORSO_P1_29_3", 16);
			iVar6 = 29;
			iVar7 = 3;
			iVar1 = 275;
			break;
		
		case 287:
			StringCopy(&Var2, "TORSO_P1_29_4", 16);
			iVar6 = 29;
			iVar7 = 4;
			iVar1 = 290;
			break;
		
		case 288:
			StringCopy(&Var2, "TORSO_P1_29_5", 16);
			iVar6 = 29;
			iVar7 = 5;
			iVar1 = 35;
			break;
		
		case 289:
			StringCopy(&Var2, "TORSO_P1_29_6", 16);
			iVar6 = 29;
			iVar7 = 6;
			iVar1 = 35;
			break;
		
		case 290:
			StringCopy(&Var2, "TORSO_P1_29_7", 16);
			iVar6 = 29;
			iVar7 = 7;
			iVar1 = 35;
			break;
		
		case 291:
			StringCopy(&Var2, "TORSO_P1_29_8", 16);
			iVar6 = 29;
			iVar7 = 8;
			iVar1 = 295;
			break;
		
		case 292:
			StringCopy(&Var2, "TORSO_P1_29_9", 16);
			iVar6 = 29;
			iVar7 = 9;
			iVar1 = 35;
			break;
		
		case 293:
			StringCopy(&Var2, "TORSO_P1_29_10", 16);
			iVar6 = 29;
			iVar7 = 10;
			iVar1 = 35;
			break;
		
		case 294:
			StringCopy(&Var2, "TORSO_P1_29_11", 16);
			iVar6 = 29;
			iVar7 = 11;
			iVar1 = 35;
			break;
		
		case 295:
			StringCopy(&Var2, "TORSO_P1_29_12", 16);
			iVar6 = 29;
			iVar7 = 12;
			break;
		
		case 296:
			StringCopy(&Var2, "TORSO_P1_30_0", 16);
			iVar6 = 30;
			iVar7 = 0;
			iVar1 = 1750;
			break;
		
		case 297:
			StringCopy(&Var2, "TORSO_P1_30_1", 16);
			iVar6 = 30;
			iVar7 = 1;
			iVar1 = 1920;
			break;
		
		case 298:
			StringCopy(&Var2, "TORSO_P1_30_2", 16);
			iVar6 = 30;
			iVar7 = 2;
			iVar1 = 1890;
			break;
		
		case 299:
			StringCopy(&Var2, "TORSO_P1_30_3", 16);
			iVar6 = 30;
			iVar7 = 3;
			iVar1 = 1850;
			break;
		
		case 300:
			StringCopy(&Var2, "TORSO_P1_30_4", 16);
			iVar6 = 30;
			iVar7 = 4;
			iVar1 = 1750;
			break;
		
		case 301:
			StringCopy(&Var2, "TORSO_P1_30_5", 16);
			iVar6 = 30;
			iVar7 = 5;
			iVar1 = 1990;
			break;
		
		case 302:
			StringCopy(&Var2, "TORSO_P1_30_6", 16);
			iVar6 = 30;
			iVar7 = 6;
			iVar1 = 1820;
			break;
		
		case 303:
			StringCopy(&Var2, "TORSO_P1_30_7", 16);
			iVar6 = 30;
			iVar7 = 7;
			iVar1 = 1990;
			break;
		
		case 304:
			StringCopy(&Var2, "TORSO_P1_30_8", 16);
			iVar6 = 30;
			iVar7 = 8;
			iVar1 = 1920;
			break;
		
		case 305:
			StringCopy(&Var2, "TORSO_P1_30_9", 16);
			iVar6 = 30;
			iVar7 = 9;
			iVar1 = 1850;
			break;
		
		case 306:
			StringCopy(&Var2, "TORSO_P1_30_10", 16);
			iVar6 = 30;
			iVar7 = 10;
			iVar1 = 1990;
			break;
		
		case 307:
			StringCopy(&Var2, "TORSO_P1_30_11", 16);
			iVar6 = 30;
			iVar7 = 11;
			iVar1 = 1790;
			break;
		
		case 308:
			StringCopy(&Var2, "TORSO_P1_30_12", 16);
			iVar6 = 30;
			iVar7 = 12;
			iVar1 = 1790;
			break;
		
		case 309:
			StringCopy(&Var2, "TORSO_P1_31_0", 16);
			iVar6 = 31;
			iVar7 = 0;
			iVar1 = 69;
			break;
		
		case 310:
			StringCopy(&Var2, "TORSO_P1_31_1", 16);
			iVar6 = 31;
			iVar7 = 1;
			iVar1 = 75;
			break;
		
		case 311:
			StringCopy(&Var2, "TORSO_P1_31_2", 16);
			iVar6 = 31;
			iVar7 = 2;
			iVar1 = 75;
			break;
		
		case 312:
			StringCopy(&Var2, "TORSO_P1_31_3", 16);
			iVar6 = 31;
			iVar7 = 3;
			iVar1 = 79;
			break;
		
		case 313:
			StringCopy(&Var2, "TORSO_P1_31_4", 16);
			iVar6 = 31;
			iVar7 = 4;
			iVar1 = 79;
			break;
		
		case 314:
			StringCopy(&Var2, "TORSO_P1_31_5", 16);
			iVar6 = 31;
			iVar7 = 5;
			iVar1 = 89;
			break;
		
		case 315:
			StringCopy(&Var2, "TORSO_P1_31_6", 16);
			iVar6 = 31;
			iVar7 = 6;
			iVar1 = 85;
			break;
		
		case 316:
			StringCopy(&Var2, "TORSO_P1_31_7", 16);
			iVar6 = 31;
			iVar7 = 7;
			iVar1 = 85;
			break;
		
		case 317:
			StringCopy(&Var2, "TORSO_P1_31_8", 16);
			iVar6 = 31;
			iVar7 = 8;
			break;
		
		default:
			return;
			break;
	}
	func_421(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_462(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_69311[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 107:
			StringCopy(&Var2, "TORSO_P1_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 195;
			break;
		
		case 108:
			StringCopy(&Var2, "TORSO_P1_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 420;
			break;
		
		case 109:
			StringCopy(&Var2, "TORSO_P1_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 390;
			break;
		
		case 110:
			StringCopy(&Var2, "TORSO_P1_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 450;
			break;
		
		case 111:
			StringCopy(&Var2, "TORSO_P1_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 400;
			break;
		
		case 112:
			StringCopy(&Var2, "TORSO_P1_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 390;
			break;
		
		case 113:
			StringCopy(&Var2, "TORSO_P1_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 570;
			break;
		
		case 114:
			StringCopy(&Var2, "TORSO_P1_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 390;
			break;
		
		case 115:
			StringCopy(&Var2, "TORSO_P1_12_8", 16);
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 470;
			break;
		
		case 116:
			StringCopy(&Var2, "TORSO_P1_12_9", 16);
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 390;
			break;
		
		case 117:
			StringCopy(&Var2, "TORSO_P1_12_10", 16);
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 520;
			break;
		
		case 118:
			StringCopy(&Var2, "TORSO_P1_12_11", 16);
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 490;
			break;
		
		case 119:
			StringCopy(&Var2, "TORSO_P1_12_12", 16);
			iVar6 = 12;
			iVar7 = 12;
			iVar1 = 490;
			break;
		
		case 120:
			StringCopy(&Var2, "TORSO_P1_12_13", 16);
			iVar6 = 12;
			iVar7 = 13;
			iVar1 = 590;
			break;
		
		case 121:
			StringCopy(&Var2, "TORSO_P1_12_14", 16);
			iVar6 = 12;
			iVar7 = 14;
			iVar1 = 560;
			break;
		
		case 122:
			StringCopy(&Var2, "TORSO_P1_12_15", 16);
			iVar6 = 12;
			iVar7 = 15;
			iVar1 = 520;
			break;
		
		case 123:
			StringCopy(&Var2, "TORSO_P1_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			break;
		
		case 124:
			StringCopy(&Var2, "TORSO_P1_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			break;
		
		case 125:
			StringCopy(&Var2, "TORSO_P1_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			break;
		
		case 126:
			StringCopy(&Var2, "TORSO_P1_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 90;
			break;
		
		case 127:
			StringCopy(&Var2, "TORSO_P1_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 85;
			break;
		
		case 128:
			StringCopy(&Var2, "TORSO_P1_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 45;
			break;
		
		case 129:
			StringCopy(&Var2, "TORSO_P1_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 90;
			break;
		
		case 130:
			StringCopy(&Var2, "TORSO_P1_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 47;
			break;
		
		case 131:
			StringCopy(&Var2, "TORSO_P1_13_8", 16);
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 45;
			break;
		
		case 132:
			StringCopy(&Var2, "TORSO_P1_13_9", 16);
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 48;
			break;
		
		case 133:
			StringCopy(&Var2, "TORSO_P1_13_10", 16);
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 45;
			break;
		
		case 134:
			StringCopy(&Var2, "TORSO_P1_13_11", 16);
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 85;
			break;
		
		case 135:
			StringCopy(&Var2, "TORSO_P1_13_12", 16);
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = 45;
			break;
		
		case 136:
			StringCopy(&Var2, "TORSO_P1_13_13", 16);
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 47;
			break;
		
		case 137:
			StringCopy(&Var2, "TORSO_P1_13_14", 16);
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 138:
			StringCopy(&Var2, "TORSO_P1_13_15", 16);
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = 48;
			break;
		
		case 139:
			StringCopy(&Var2, "TORSO_P1_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 290;
			break;
		
		case 140:
			StringCopy(&Var2, "TORSO_P1_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 290;
			break;
		
		case 141:
			StringCopy(&Var2, "TORSO_P1_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 290;
			break;
		
		case 142:
			StringCopy(&Var2, "TORSO_P1_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 290;
			break;
		
		case 143:
			StringCopy(&Var2, "TORSO_P1_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 290;
			break;
		
		case 144:
			StringCopy(&Var2, "TORSO_P1_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 290;
			break;
		
		case 145:
			StringCopy(&Var2, "TORSO_P1_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 65;
			break;
		
		case 146:
			StringCopy(&Var2, "TORSO_P1_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 65;
			break;
		
		case 147:
			StringCopy(&Var2, "TORSO_P1_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 200;
			break;
		
		case 148:
			StringCopy(&Var2, "TORSO_P1_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 220;
			break;
		
		case 149:
			StringCopy(&Var2, "TORSO_P1_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 220;
			break;
		
		case 150:
			StringCopy(&Var2, "TORSO_P1_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 240;
			break;
		
		case 151:
			StringCopy(&Var2, "TORSO_P1_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			break;
		
		case 152:
			StringCopy(&Var2, "TORSO_P1_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 250;
			break;
		
		case 153:
			StringCopy(&Var2, "TORSO_P1_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 260;
			break;
		
		case 154:
			StringCopy(&Var2, "TORSO_P1_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 40;
			break;
		
		case 155:
			StringCopy(&Var2, "TORSO_P1_15_8", 16);
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 50;
			break;
		
		case 156:
			StringCopy(&Var2, "TORSO_P1_15_9", 16);
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 45;
			break;
		
		case 157:
			StringCopy(&Var2, "TORSO_P1_15_10", 16);
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 40;
			break;
		
		case 158:
			StringCopy(&Var2, "TORSO_P1_15_11", 16);
			iVar6 = 15;
			iVar7 = 11;
			iVar1 = 55;
			break;
		
		case 159:
			StringCopy(&Var2, "TORSO_P1_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 160:
			StringCopy(&Var2, "TORSO_P1_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 40;
			break;
		
		case 161:
			StringCopy(&Var2, "TORSO_P1_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar1 = 50;
			break;
		
		case 162:
			StringCopy(&Var2, "TORSO_P1_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			break;
		
		case 163:
			StringCopy(&Var2, "TORSO_P1_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 50;
			break;
		
		case 164:
			StringCopy(&Var2, "TORSO_P1_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 50;
			break;
		
		case 165:
			StringCopy(&Var2, "TORSO_P1_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 50;
			break;
		
		case 166:
			StringCopy(&Var2, "TORSO_P1_17_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			iVar1 = 50;
			break;
		
		case 167:
			StringCopy(&Var2, "TORSO_P1_17_7", 16);
			iVar6 = 17;
			iVar7 = 7;
			iVar1 = 50;
			break;
		
		case 168:
			StringCopy(&Var2, "TORSO_P1_17_8", 16);
			iVar6 = 17;
			iVar7 = 8;
			iVar1 = 50;
			break;
		
		case 169:
			StringCopy(&Var2, "TORSO_P1_17_9", 16);
			iVar6 = 17;
			iVar7 = 9;
			iVar1 = 50;
			break;
		
		case 170:
			StringCopy(&Var2, "TORSO_P1_17_10", 16);
			iVar6 = 17;
			iVar7 = 10;
			iVar1 = 50;
			break;
		
		case 171:
			StringCopy(&Var2, "TORSO_P1_17_11", 16);
			iVar6 = 17;
			iVar7 = 11;
			iVar1 = 50;
			break;
		
		case 172:
			StringCopy(&Var2, "TORSO_P1_17_12", 16);
			iVar6 = 17;
			iVar7 = 12;
			iVar1 = 50;
			break;
		
		case 173:
			StringCopy(&Var2, "TORSO_P1_17_13", 16);
			iVar6 = 17;
			iVar7 = 13;
			iVar1 = 50;
			break;
		
		case 174:
			StringCopy(&Var2, "TORSO_P1_17_14", 16);
			iVar6 = 17;
			iVar7 = 14;
			iVar1 = 50;
			break;
		
		case 175:
			StringCopy(&Var2, "TORSO_P1_17_15", 16);
			iVar6 = 17;
			iVar7 = 15;
			iVar1 = 50;
			break;
		
		case 176:
			StringCopy(&Var2, "TORSO_P1_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar9 = 3;
			break;
		
		case 177:
			StringCopy(&Var2, "TORSO_P1_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar9 = 3;
			break;
		
		case 178:
			StringCopy(&Var2, "TORSO_P1_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar9 = 3;
			break;
		
		case 179:
			StringCopy(&Var2, "TORSO_P1_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar9 = 3;
			break;
		
		case 180:
			StringCopy(&Var2, "TORSO_P1_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar9 = 3;
			break;
		
		case 181:
			StringCopy(&Var2, "TORSO_P1_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar9 = 3;
			break;
		
		case 182:
			StringCopy(&Var2, "TORSO_P1_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar9 = 3;
			break;
		
		case 183:
			StringCopy(&Var2, "TORSO_P1_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar9 = 3;
			break;
		
		case 184:
			StringCopy(&Var2, "TORSO_P1_18_8", 16);
			iVar6 = 18;
			iVar7 = 8;
			iVar9 = 3;
			break;
		
		case 185:
			StringCopy(&Var2, "TORSO_P1_18_9", 16);
			iVar6 = 18;
			iVar7 = 9;
			iVar9 = 3;
			break;
		
		case 186:
			StringCopy(&Var2, "TORSO_P1_18_10", 16);
			iVar6 = 18;
			iVar7 = 10;
			iVar9 = 3;
			break;
		
		case 187:
			StringCopy(&Var2, "TORSO_P1_18_11", 16);
			iVar6 = 18;
			iVar7 = 11;
			iVar9 = 3;
			break;
		
		case 188:
			StringCopy(&Var2, "TORSO_P1_18_12", 16);
			iVar6 = 18;
			iVar7 = 12;
			iVar9 = 3;
			break;
		
		case 189:
			StringCopy(&Var2, "TORSO_P1_18_13", 16);
			iVar6 = 18;
			iVar7 = 13;
			iVar9 = 3;
			break;
		
		case 190:
			StringCopy(&Var2, "TORSO_P1_18_14", 16);
			iVar6 = 18;
			iVar7 = 14;
			iVar9 = 3;
			break;
		
		case 191:
			StringCopy(&Var2, "TORSO_P1_18_15", 16);
			iVar6 = 18;
			iVar7 = 15;
			iVar9 = 3;
			break;
		
		case 192:
			StringCopy(&Var2, "TORSO_P1_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 193:
			StringCopy(&Var2, "TORSO_P1_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 440;
			iVar9 = 3;
			break;
		
		case 194:
			StringCopy(&Var2, "TORSO_P1_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 440;
			iVar9 = 3;
			break;
		
		case 195:
			StringCopy(&Var2, "TORSO_P1_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 520;
			iVar9 = 3;
			break;
		
		case 196:
			StringCopy(&Var2, "TORSO_P1_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 440;
			iVar9 = 3;
			break;
		
		case 197:
			StringCopy(&Var2, "TORSO_P1_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 440;
			iVar9 = 3;
			break;
		
		case 198:
			StringCopy(&Var2, "TORSO_P1_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 199:
			StringCopy(&Var2, "TORSO_P1_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 200:
			StringCopy(&Var2, "TORSO_P1_19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 201:
			StringCopy(&Var2, "TORSO_P1_19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 202:
			StringCopy(&Var2, "TORSO_P1_19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 203:
			StringCopy(&Var2, "TORSO_P1_19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 204:
			StringCopy(&Var2, "TORSO_P1_19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 520;
			iVar9 = 3;
			break;
		
		case 205:
			StringCopy(&Var2, "TORSO_P1_19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 520;
			iVar9 = 3;
			break;
		
		case 206:
			StringCopy(&Var2, "TORSO_P1_19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 520;
			iVar9 = 3;
			break;
		
		case 207:
			StringCopy(&Var2, "TORSO_P1_19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 440;
			iVar9 = 3;
			break;
		
		case 208:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar0 = true;
			iVar9 = 4;
			break;
		
		case 209:
			StringCopy(&Var2, "TORSO_P1_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 220;
			break;
		
		case 210:
			StringCopy(&Var2, "TORSO_P1_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 200;
			break;
		
		case 211:
			StringCopy(&Var2, "TORSO_P1_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 240;
			break;
		
		case 212:
			StringCopy(&Var2, "TORSO_P1_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 240;
			break;
		
		case 213:
			StringCopy(&Var2, "TORSO_P1_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 260;
			break;
		
		case 214:
			StringCopy(&Var2, "TORSO_P1_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 275;
			break;
		
		case 215:
			StringCopy(&Var2, "TORSO_P1_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 275;
			break;
		
		case 216:
			StringCopy(&Var2, "TORSO_P1_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 280;
			break;
		
		case 217:
			StringCopy(&Var2, "TORSO_P1_21_8", 16);
			iVar6 = 21;
			iVar7 = 8;
			iVar1 = 280;
			break;
		
		case 218:
			StringCopy(&Var2, "TORSO_P1_21_9", 16);
			iVar6 = 21;
			iVar7 = 9;
			iVar1 = 280;
			break;
		
		case 219:
			StringCopy(&Var2, "TORSO_P1_21_10", 16);
			iVar6 = 21;
			iVar7 = 10;
			iVar1 = 280;
			break;
		
		case 220:
			StringCopy(&Var2, "TORSO_P1_21_11", 16);
			iVar6 = 21;
			iVar7 = 11;
			iVar1 = 280;
			break;
		
		case 221:
			StringCopy(&Var2, "TORSO_P1_21_12", 16);
			iVar6 = 21;
			iVar7 = 12;
			iVar1 = 280;
			break;
		
		case 222:
			StringCopy(&Var2, "TORSO_P1_21_13", 16);
			iVar6 = 21;
			iVar7 = 13;
			iVar1 = 280;
			break;
		
		case 223:
			StringCopy(&Var2, "TORSO_P1_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar1 = 3100;
			iVar9 = 3;
			break;
		
		case 224:
			StringCopy(&Var2, "TORSO_P1_22_1", 16);
			iVar6 = 22;
			iVar7 = 1;
			iVar1 = 2800;
			iVar9 = 3;
			break;
		
		case 225:
			StringCopy(&Var2, "TORSO_P1_22_2", 16);
			iVar6 = 22;
			iVar7 = 2;
			iVar1 = 2500;
			iVar9 = 3;
			break;
		
		case 226:
			StringCopy(&Var2, "TORSO_P1_22_3", 16);
			iVar6 = 22;
			iVar7 = 3;
			iVar1 = 3000;
			iVar9 = 3;
			break;
		
		default:
			return;
			break;
	}
	func_421(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_463(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_69311[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "TORSO_P1_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "TORSO_P1_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "TORSO_P1_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 180;
			break;
		
		case 3:
			StringCopy(&Var2, "TORSO_P1_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 22;
			break;
		
		case 4:
			StringCopy(&Var2, "TORSO_P1_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 20;
			break;
		
		case 5:
			StringCopy(&Var2, "TORSO_P1_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 18;
			break;
		
		case 6:
			StringCopy(&Var2, "TORSO_P1_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 19;
			break;
		
		case 7:
			StringCopy(&Var2, "TORSO_P1_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 22;
			break;
		
		case 8:
			StringCopy(&Var2, "TORSO_P1_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 20;
			break;
		
		case 9:
			StringCopy(&Var2, "TORSO_P1_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 19;
			break;
		
		case 10:
			StringCopy(&Var2, "TORSO_P1_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 19;
			break;
		
		case 11:
			StringCopy(&Var2, "TORSO_P1_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 18;
			break;
		
		case 12:
			StringCopy(&Var2, "TORSO_P1_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 20;
			break;
		
		case 13:
			StringCopy(&Var2, "TORSO_P1_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 22;
			break;
		
		case 14:
			StringCopy(&Var2, "TORSO_P1_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 19;
			break;
		
		case 15:
			StringCopy(&Var2, "TORSO_P1_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 22;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar0 = true;
			iVar9 = 4;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar0 = true;
			iVar9 = 4;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar0 = true;
			iVar9 = 4;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 3;
			iVar0 = true;
			iVar9 = 4;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 4;
			iVar0 = true;
			iVar9 = 4;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 5;
			iVar0 = true;
			iVar9 = 4;
			break;
		
		case 22:
			StringCopy(&Var2, "TORSO_P1_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar0 = true;
			iVar9 = 3;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar0 = true;
			iVar9 = 1;
			break;
		
		case 24:
			StringCopy(&Var2, "TORSO_P1_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 20;
			iVar9 = 2;
			break;
		
		case 25:
			StringCopy(&Var2, "TORSO_P1_4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 22;
			iVar9 = 2;
			break;
		
		case 26:
			StringCopy(&Var2, "TORSO_P1_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 20;
			iVar9 = 2;
			break;
		
		case 27:
			StringCopy(&Var2, "TORSO_P1_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 25;
			iVar9 = 2;
			break;
		
		case 28:
			StringCopy(&Var2, "TORSO_P1_4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 23;
			iVar9 = 2;
			break;
		
		case 29:
			StringCopy(&Var2, "TORSO_P1_4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 25;
			iVar9 = 2;
			break;
		
		case 30:
			StringCopy(&Var2, "TORSO_P1_4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 28;
			iVar9 = 2;
			break;
		
		case 31:
			StringCopy(&Var2, "TORSO_P1_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 26;
			iVar9 = 2;
			break;
		
		case 32:
			StringCopy(&Var2, "TORSO_P1_4_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 24;
			iVar9 = 2;
			break;
		
		case 33:
			StringCopy(&Var2, "TORSO_P1_4_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 27;
			iVar9 = 2;
			break;
		
		case 34:
			StringCopy(&Var2, "TORSO_P1_4_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 29;
			iVar9 = 2;
			break;
		
		case 35:
			StringCopy(&Var2, "TORSO_P1_4_11", 16);
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 28;
			iVar9 = 2;
			break;
		
		case 36:
			StringCopy(&Var2, "TORSO_P1_4_12", 16);
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = 25;
			iVar9 = 2;
			break;
		
		case 37:
			StringCopy(&Var2, "TORSO_P1_4_13", 16);
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 22;
			iVar9 = 2;
			break;
		
		case 38:
			StringCopy(&Var2, "TORSO_P1_4_14", 16);
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 27;
			iVar9 = 2;
			break;
		
		case 39:
			StringCopy(&Var2, "TORSO_P1_4_15", 16);
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = 29;
			iVar9 = 2;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar0 = true;
			iVar9 = 4;
			break;
		
		case 41:
			StringCopy(&Var2, "TORSO_P1_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar9 = 3;
			break;
		
		case 42:
			StringCopy(&Var2, "TORSO_P1_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 1270;
			iVar9 = 3;
			break;
		
		case 43:
			StringCopy(&Var2, "TORSO_P1_6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 1270;
			iVar9 = 3;
			break;
		
		case 44:
			StringCopy(&Var2, "TORSO_P1_6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 1270;
			iVar9 = 3;
			break;
		
		case 45:
			StringCopy(&Var2, "TORSO_P1_6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 1090;
			iVar9 = 3;
			break;
		
		case 46:
			StringCopy(&Var2, "TORSO_P1_6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 1090;
			iVar9 = 3;
			break;
		
		case 47:
			StringCopy(&Var2, "TORSO_P1_6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 1120;
			iVar9 = 3;
			break;
		
		case 48:
			StringCopy(&Var2, "TORSO_P1_6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 1120;
			iVar9 = 3;
			break;
		
		case 49:
			StringCopy(&Var2, "TORSO_P1_6_8", 16);
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 1290;
			iVar9 = 3;
			break;
		
		case 50:
			StringCopy(&Var2, "TORSO_P1_6_9", 16);
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 1290;
			iVar9 = 3;
			break;
		
		case 51:
			StringCopy(&Var2, "TORSO_P1_6_10", 16);
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = 1320;
			iVar9 = 3;
			break;
		
		case 52:
			StringCopy(&Var2, "TORSO_P1_6_11", 16);
			iVar6 = 6;
			iVar7 = 11;
			iVar1 = 1320;
			iVar9 = 3;
			break;
		
		case 53:
			StringCopy(&Var2, "TORSO_P1_6_12", 16);
			iVar6 = 6;
			iVar7 = 12;
			iVar1 = 1590;
			iVar9 = 3;
			break;
		
		case 54:
			StringCopy(&Var2, "TORSO_P1_6_13", 16);
			iVar6 = 6;
			iVar7 = 13;
			iVar1 = 1590;
			iVar9 = 3;
			break;
		
		case 55:
			StringCopy(&Var2, "TORSO_P1_6_14", 16);
			iVar6 = 6;
			iVar7 = 14;
			iVar1 = 1590;
			iVar9 = 3;
			break;
		
		case 56:
			StringCopy(&Var2, "TORSO_P1_6_15", 16);
			iVar6 = 6;
			iVar7 = 15;
			iVar1 = 1320;
			iVar9 = 3;
			break;
		
		case 57:
			StringCopy(&Var2, "TORSO_P1_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 98;
			break;
		
		case 58:
			StringCopy(&Var2, "TORSO_P1_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 98;
			break;
		
		case 59:
			StringCopy(&Var2, "TORSO_P1_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 110;
			break;
		
		case 60:
			StringCopy(&Var2, "TORSO_P1_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 110;
			break;
		
		case 61:
			StringCopy(&Var2, "TORSO_P1_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 118;
			break;
		
		case 62:
			StringCopy(&Var2, "TORSO_P1_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 120;
			break;
		
		case 63:
			StringCopy(&Var2, "TORSO_P1_7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 120;
			break;
		
		case 64:
			StringCopy(&Var2, "TORSO_P1_7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 129;
			break;
		
		case 65:
			StringCopy(&Var2, "TORSO_P1_7_8", 16);
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 125;
			break;
		
		case 66:
			StringCopy(&Var2, "TORSO_P1_7_9", 16);
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 125;
			break;
		
		case 67:
			StringCopy(&Var2, "TORSO_P1_7_10", 16);
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 129;
			break;
		
		case 68:
			StringCopy(&Var2, "TORSO_P1_7_11", 16);
			iVar6 = 7;
			iVar7 = 11;
			iVar1 = 129;
			break;
		
		case 69:
			StringCopy(&Var2, "TORSO_P1_7_12", 16);
			iVar6 = 7;
			iVar7 = 12;
			iVar1 = 135;
			break;
		
		case 70:
			StringCopy(&Var2, "TORSO_P1_7_13", 16);
			iVar6 = 7;
			iVar7 = 13;
			iVar1 = 139;
			break;
		
		case 71:
			StringCopy(&Var2, "TORSO_P1_7_14", 16);
			iVar6 = 7;
			iVar7 = 14;
			iVar1 = 145;
			break;
		
		case 72:
			StringCopy(&Var2, "TORSO_P1_7_15", 16);
			iVar6 = 7;
			iVar7 = 15;
			iVar1 = 145;
			break;
		
		case 73:
			StringCopy(&Var2, "TORSO_P1_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "TORSO_P1_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			break;
		
		case 75:
			StringCopy(&Var2, "TORSO_P1_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			break;
		
		case 76:
			StringCopy(&Var2, "TORSO_P1_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			break;
		
		case 77:
			StringCopy(&Var2, "TORSO_P1_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 30;
			break;
		
		case 78:
			StringCopy(&Var2, "TORSO_P1_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 38;
			break;
		
		case 79:
			StringCopy(&Var2, "TORSO_P1_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 32;
			break;
		
		case 80:
			StringCopy(&Var2, "TORSO_P1_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 30;
			break;
		
		case 81:
			StringCopy(&Var2, "TORSO_P1_8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 33;
			break;
		
		case 82:
			StringCopy(&Var2, "TORSO_P1_8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 35;
			break;
		
		case 83:
			StringCopy(&Var2, "TORSO_P1_8_10", 16);
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 35;
			break;
		
		case 84:
			StringCopy(&Var2, "TORSO_P1_8_11", 16);
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 38;
			break;
		
		case 85:
			StringCopy(&Var2, "TORSO_P1_8_12", 16);
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 33;
			break;
		
		case 86:
			StringCopy(&Var2, "TORSO_P1_8_13", 16);
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 35;
			break;
		
		case 87:
			StringCopy(&Var2, "TORSO_P1_8_14", 16);
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 38;
			break;
		
		case 88:
			StringCopy(&Var2, "TORSO_P1_8_15", 16);
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 32;
			break;
		
		case 89:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 91:
			StringCopy(&Var2, "TORSO_P1_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 92:
			StringCopy(&Var2, "TORSO_P1_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 59;
			break;
		
		case 93:
			StringCopy(&Var2, "TORSO_P1_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			break;
		
		case 94:
			StringCopy(&Var2, "TORSO_P1_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 25;
			break;
		
		case 95:
			StringCopy(&Var2, "TORSO_P1_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 29;
			break;
		
		case 96:
			StringCopy(&Var2, "TORSO_P1_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 27;
			break;
		
		case 97:
			StringCopy(&Var2, "TORSO_P1_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 25;
			break;
		
		case 98:
			StringCopy(&Var2, "TORSO_P1_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 27;
			break;
		
		case 99:
			StringCopy(&Var2, "TORSO_P1_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 28;
			break;
		
		case 100:
			StringCopy(&Var2, "TORSO_P1_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 30;
			break;
		
		case 101:
			StringCopy(&Var2, "TORSO_P1_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 29;
			break;
		
		case 102:
			StringCopy(&Var2, "TORSO_P1_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 27;
			break;
		
		case 103:
			StringCopy(&Var2, "TORSO_P1_11_12", 16);
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 29;
			break;
		
		case 104:
			StringCopy(&Var2, "TORSO_P1_11_13", 16);
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 32;
			break;
		
		case 105:
			StringCopy(&Var2, "TORSO_P1_11_14", 16);
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 30;
			break;
		
		case 106:
			StringCopy(&Var2, "TORSO_P1_11_15", 16);
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 28;
			break;
		
		default:
			return;
			break;
	}
	func_421(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_464(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 2;
	Global_69311[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "HAIR_P1_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "HAIR_P1_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "HAIR_P1_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "HAIR_P1_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar9 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "HAIR_P1_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar9 = 3;
			break;
		
		case 5:
			StringCopy(&Var2, "HAIR_P1_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar9 = 3;
			break;
		
		case 6:
			StringCopy(&Var2, "HAIR_P1_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar9 = 3;
			break;
		
		case 7:
			StringCopy(&Var2, "HAIR_P1_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar9 = 3;
			break;
		
		case 8:
			StringCopy(&Var2, "HAIR_P1_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar9 = 3;
			break;
		
		case 9:
			StringCopy(&Var2, "HAIR_P1_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar9 = 3;
			break;
		
		case 10:
			StringCopy(&Var2, "HAIR_P1_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar9 = 3;
			break;
		
		case 11:
			StringCopy(&Var2, "HAIR_P1_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar9 = 3;
			break;
		
		case 12:
			StringCopy(&Var2, "HAIR_P1_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			iVar9 = 3;
			break;
		
		case 13:
			StringCopy(&Var2, "HAIR_P1_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			break;
		
		case 14:
			StringCopy(&Var2, "HAIR_P1_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			iVar9 = 3;
			break;
		
		case 15:
			StringCopy(&Var2, "HAIR_P1_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			iVar9 = 3;
			break;
		
		case 16:
			StringCopy(&Var2, "HAIR_P1_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar9 = 3;
			break;
		
		case 17:
			StringCopy(&Var2, "HAIR_P1_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar9 = 3;
			break;
		
		case 18:
			StringCopy(&Var2, "HAIR_P1_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar9 = 3;
			break;
		
		case 19:
			StringCopy(&Var2, "HAIR_P1_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		default:
			func_429(iVar10, iParam0, 21);
			return;
			break;
	}
	func_421(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_465(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 0;
	Global_69311[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 8;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 9;
			break;
		
		default:
			func_429(iVar10, iParam0, 10);
			return;
			break;
	}
	func_421(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_466(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_483(iParam1);
			break;
		
		case 2:
			func_482(iParam1);
			break;
		
		case 3:
			func_479(iParam1);
			break;
		
		case 4:
			func_478(iParam1);
			break;
		
		case 6:
			func_477(iParam1);
			break;
		
		case 5:
			func_476(iParam1);
			break;
		
		case 8:
			func_475(iParam1);
			break;
		
		case 9:
			func_474(iParam1);
			break;
		
		case 10:
			func_473(iParam1);
			break;
		
		case 1:
			func_472(iParam1);
			break;
		
		case 7:
			func_471(iParam1);
			break;
		
		case 11:
			func_470(iParam1);
			break;
		
		case 12:
			func_469(iParam1);
			break;
		
		case 13:
			func_468(iParam1);
			break;
		
		case 14:
			func_467(iParam1);
			break;
	}
}

void func_467(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	Global_69311[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 8;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "PROPS_P0_H1", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "PROPS_P0_H2", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 320;
			iVar8 = 11;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar8 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar8 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "PROPS_P0_H12", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 31:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 270;
			iVar8 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 270;
			iVar8 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 200;
			iVar8 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 200;
			iVar8 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 350;
			iVar8 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 350;
			iVar8 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 450;
			iVar8 = 0;
			break;
		
		case 38:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 500;
			iVar8 = 0;
			break;
		
		case 39:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 500;
			iVar8 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 50;
			iVar8 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 25;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 27;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 57:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 28;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 58:
			StringCopy(&Var2, "PROPS_P0_E0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 45;
			iVar8 = 10;
			break;
		
		case 59:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 10;
			break;
		
		case 60:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 10;
			break;
		
		case 61:
			StringCopy(&Var2, "PROPS_P0_E3", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 62:
			StringCopy(&Var2, "PROPS_P0_E4", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 58;
			iVar8 = 10;
			break;
		
		case 63:
			StringCopy(&Var2, "PROPS_P0_E4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 56;
			iVar8 = 10;
			break;
		
		case 64:
			StringCopy(&Var2, "PROPS_P0_E4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 60;
			iVar8 = 10;
			break;
		
		case 65:
			StringCopy(&Var2, "PROPS_P0_E4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 65;
			iVar8 = 10;
			break;
		
		case 66:
			StringCopy(&Var2, "PROPS_P0_E4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 62;
			iVar8 = 10;
			break;
		
		case 67:
			StringCopy(&Var2, "PROPS_P0_E4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 65;
			iVar8 = 10;
			break;
		
		case 68:
			StringCopy(&Var2, "PROPS_P0_E4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 68;
			iVar8 = 10;
			break;
		
		case 69:
			StringCopy(&Var2, "PROPS_P0_E4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 68;
			iVar8 = 10;
			break;
		
		case 70:
			StringCopy(&Var2, "PROPS_P0_E5", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 65;
			iVar8 = 10;
			break;
		
		case 71:
			StringCopy(&Var2, "PROPS_P0_E5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 72:
			StringCopy(&Var2, "PROPS_P0_E5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 72;
			iVar8 = 10;
			break;
		
		case 73:
			StringCopy(&Var2, "PROPS_P0_E5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 70;
			iVar8 = 10;
			break;
		
		case 74:
			StringCopy(&Var2, "PROPS_P0_E5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 74;
			iVar8 = 10;
			break;
		
		case 75:
			StringCopy(&Var2, "PROPS_P0_E5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 78;
			iVar8 = 10;
			break;
		
		case 76:
			StringCopy(&Var2, "PROPS_P0_E5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 82;
			iVar8 = 10;
			break;
		
		case 77:
			StringCopy(&Var2, "PROPS_P0_E5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 85;
			iVar8 = 10;
			break;
		
		case 78:
			StringCopy(&Var2, "PROPS_P0_E5_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 85;
			iVar8 = 10;
			break;
		
		case 79:
			StringCopy(&Var2, "PROPS_P0_E5_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar8 = 10;
			break;
		
		case 80:
			StringCopy(&Var2, "PROPS_P0_E6", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 81:
			StringCopy(&Var2, "PROPS_P0_E6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 82:
			StringCopy(&Var2, "PROPS_P0_E6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 83:
			StringCopy(&Var2, "PROPS_P0_E6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 84:
			StringCopy(&Var2, "PROPS_P0_E6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 85:
			StringCopy(&Var2, "PROPS_P0_E6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 86:
			StringCopy(&Var2, "PROPS_P0_E6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 87:
			StringCopy(&Var2, "PROPS_P0_E6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 88:
			StringCopy(&Var2, "PROPS_P0_E6_8", 16);
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 89:
			StringCopy(&Var2, "PROPS_P0_E6_9", 16);
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 90:
			StringCopy(&Var2, "PROPS_P0_E7", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar8 = 10;
			break;
		
		case 91:
			StringCopy(&Var2, "PROPS_P0_E8", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 170;
			iVar8 = 10;
			break;
		
		case 92:
			StringCopy(&Var2, "PROPS_P0_E8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 93:
			StringCopy(&Var2, "PROPS_P0_E8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 180;
			iVar8 = 10;
			break;
		
		case 94:
			StringCopy(&Var2, "PROPS_P0_E8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 185;
			iVar8 = 10;
			break;
		
		case 95:
			StringCopy(&Var2, "PROPS_P0_E8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 189;
			iVar8 = 10;
			break;
		
		case 96:
			StringCopy(&Var2, "PROPS_P0_E8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 195;
			iVar8 = 10;
			break;
		
		case 97:
			StringCopy(&Var2, "PROPS_P0_E8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 235;
			iVar8 = 10;
			break;
		
		case 98:
			StringCopy(&Var2, "PROPS_P0_E8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 245;
			iVar8 = 10;
			break;
		
		case 99:
			StringCopy(&Var2, "PROPS_P0_E8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 250;
			iVar8 = 10;
			break;
		
		case 100:
			StringCopy(&Var2, "PROPS_P0_E8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 275;
			iVar8 = 10;
			break;
		
		case 101:
			StringCopy(&Var2, "PROPS_P0_E8_10", 16);
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 280;
			iVar8 = 10;
			break;
		
		case 102:
			StringCopy(&Var2, "PROPS_P0_E8_11", 16);
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 295;
			iVar8 = 10;
			break;
		
		case 103:
			StringCopy(&Var2, "PROPS_P0_E9", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 179;
			iVar8 = 10;
			break;
		
		case 104:
			StringCopy(&Var2, "PROPS_P0_E9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 159;
			iVar8 = 10;
			break;
		
		case 105:
			StringCopy(&Var2, "PROPS_P0_E9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 165;
			iVar8 = 10;
			break;
		
		case 106:
			StringCopy(&Var2, "PROPS_P0_E9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 155;
			iVar8 = 10;
			break;
		
		case 107:
			StringCopy(&Var2, "PROPS_P0_E9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 108:
			StringCopy(&Var2, "PROPS_P0_E9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 185;
			iVar8 = 10;
			break;
		
		case 109:
			StringCopy(&Var2, "PROPS_P0_E9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 189;
			iVar8 = 10;
			break;
		
		case 110:
			StringCopy(&Var2, "PROPS_P0_E9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 225;
			iVar8 = 10;
			break;
		
		case 111:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 100;
			iVar8 = 10;
			break;
		
		case 112:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 2;
			break;
		
		default:
			func_429(iVar10, iParam0, 113);
			return;
			break;
	}
	func_421(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_468(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 13;
	Global_69311[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		default:
			func_429(iVar10, iParam0, 10);
			return;
			break;
	}
	func_421(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_469(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 12;
	Global_69311[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "OUTFIT_P0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "OUTFIT_P0_1", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "OUTFIT_P0_4", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "OUTFIT_P0_7", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "OUTFIT_P0_8", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "OUTFIT_P0_9", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "OUTFIT_P0_11", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "OUTFIT_P0_12", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "OUTFIT_P0_14", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "OUTFIT_P0_17", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "OUTFIT_P0_18", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "OUTFIT_P0_19", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "OUTFIT_P0_20", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "OUTFIT_P0_22", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		case 17:
			StringCopy(&Var2, "OUTFIT_P0_23", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "OUTFIT_P0_24", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "OUTFIT_P0_26", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "OUTFIT_P0_28", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 21:
			StringCopy(&Var2, "OUTFIT_P0_29", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 22:
			StringCopy(&Var2, "OUTFIT_P0_30", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 23:
			StringCopy(&Var2, "OUTFIT_P0_31", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "OUTFIT_P0_32", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "OUTFIT_P0_33", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "OUTFIT_P0_34", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "OUTFIT_P0_35", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "OUTFIT_P0_11", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "OUTFIT_P0_36", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4900;
			break;
		
		case 30:
			StringCopy(&Var2, "OUTFIT_P0_37", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 840;
			break;
		
		case 31:
			StringCopy(&Var2, "OUTFIT_P0_38", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "OUTFIT_P0_39", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "OUTFIT_P0_40", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "OUTFIT_P0_41", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "OUTFIT_P0_42", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "OUTFIT_P0_43", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "OUTFIT_P0_44", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 3900;
			break;
		
		case 38:
			StringCopy(&Var2, "OUTFIT_P0_45", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4000;
			break;
		
		case 39:
			StringCopy(&Var2, "OUTFIT_P0_46", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 40:
			StringCopy(&Var2, "OUTFIT_P0_47", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4600;
			break;
		
		case 41:
			StringCopy(&Var2, "OUTFIT_P0_48", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5500;
			break;
		
		case 42:
			StringCopy(&Var2, "OUTFIT_P0_49", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4400;
			break;
		
		case 43:
			StringCopy(&Var2, "OUTFIT_P0_50", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4400;
			break;
		
		case 44:
			StringCopy(&Var2, "OUTFIT_P0_51", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4900;
			break;
		
		case 45:
			StringCopy(&Var2, "OUTFIT_P0_52", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5500;
			break;
		
		case 46:
			StringCopy(&Var2, "OUTFIT_P0_53", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4500;
			break;
		
		case 47:
			StringCopy(&Var2, "OUTFIT_P0_54", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 48:
			StringCopy(&Var2, "OUTFIT_P0_55", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "OUTFIT_P0_17", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_429(iVar10, iParam0, 53);
			return;
			break;
	}
	func_421(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_470(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 11;
	Global_69311[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "JBIB_P0_02_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "JBIB_P0_02_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			break;
		
		case 4:
			StringCopy(&Var2, "JBIB_P0_02_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			break;
		
		case 5:
			StringCopy(&Var2, "JBIB_P0_02_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			break;
		
		case 6:
			StringCopy(&Var2, "JBIB_P0_02_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			break;
		
		case 7:
			StringCopy(&Var2, "JBIB_P0_02_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			break;
		
		case 8:
			StringCopy(&Var2, "JBIB_P0_03_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 390;
			break;
		
		case 9:
			StringCopy(&Var2, "JBIB_P0_03_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 390;
			break;
		
		case 10:
			StringCopy(&Var2, "JBIB_P0_03_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 420;
			break;
		
		case 11:
			StringCopy(&Var2, "JBIB_P0_03_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 420;
			break;
		
		case 12:
			StringCopy(&Var2, "JBIB_P0_03_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 490;
			break;
		
		case 13:
			StringCopy(&Var2, "JBIB_P0_03_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 490;
			break;
		
		case 14:
			StringCopy(&Var2, "JBIB_P0_03_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 540;
			break;
		
		case 15:
			StringCopy(&Var2, "JBIB_P0_03_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 540;
			break;
		
		case 16:
			StringCopy(&Var2, "JBIB_P0_03_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 550;
			break;
		
		case 17:
			StringCopy(&Var2, "JBIB_P0_03_9", 16);
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 540;
			break;
		
		case 18:
			StringCopy(&Var2, "JBIB_P0_04_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 850;
			break;
		
		case 19:
			StringCopy(&Var2, "JBIB_P0_04_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 850;
			break;
		
		case 20:
			StringCopy(&Var2, "JBIB_P0_04_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 890;
			break;
		
		case 21:
			StringCopy(&Var2, "JBIB_P0_04_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 890;
			break;
		
		case 22:
			StringCopy(&Var2, "JBIB_P0_04_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 920;
			break;
		
		case 23:
			StringCopy(&Var2, "JBIB_P0_04_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 920;
			break;
		
		case 24:
			StringCopy(&Var2, "JBIB_P0_04_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 950;
			break;
		
		case 25:
			StringCopy(&Var2, "JBIB_P0_04_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 980;
			break;
		
		case 26:
			StringCopy(&Var2, "JBIB_P0_04_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 1050;
			break;
		
		case 27:
			StringCopy(&Var2, "JBIB_P0_04_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 1100;
			break;
		
		case 28:
			StringCopy(&Var2, "JBIB_P0_05_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 1890;
			break;
		
		case 29:
			StringCopy(&Var2, "JBIB_P0_05_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 1820;
			break;
		
		case 30:
			StringCopy(&Var2, "JBIB_P0_05_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 1820;
			break;
		
		case 31:
			StringCopy(&Var2, "JBIB_P0_05_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 1850;
			break;
		
		case 32:
			StringCopy(&Var2, "JBIB_P0_05_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 1850;
			break;
		
		case 33:
			StringCopy(&Var2, "JBIB_P0_05_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 1900;
			break;
		
		case 34:
			StringCopy(&Var2, "JBIB_P0_05_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 1920;
			break;
		
		case 35:
			StringCopy(&Var2, "JBIB_P0_05_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 1980;
			break;
		
		case 36:
			StringCopy(&Var2, "JBIB_P0_05_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 2100;
			break;
		
		case 37:
			StringCopy(&Var2, "JBIB_P0_05_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 2120;
			break;
		
		case 38:
			StringCopy(&Var2, "JBIB_P0_05_10", 16);
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 2000;
			break;
		
		case 39:
			StringCopy(&Var2, "JBIB_P0_05_11", 16);
			iVar6 = 5;
			iVar7 = 11;
			iVar1 = 2200;
			break;
		
		case 40:
			StringCopy(&Var2, "JBIB_P0_05_12", 16);
			iVar6 = 5;
			iVar7 = 12;
			iVar1 = 2280;
			break;
		
		case 41:
			StringCopy(&Var2, "JBIB_P0_05_13", 16);
			iVar6 = 5;
			iVar7 = 13;
			iVar1 = 2300;
			break;
		
		case 42:
			StringCopy(&Var2, "JBIB_P0_05_14", 16);
			iVar6 = 5;
			iVar7 = 14;
			iVar1 = 2350;
			break;
		
		case 43:
			StringCopy(&Var2, "JBIB_P0_05_15", 16);
			iVar6 = 5;
			iVar7 = 15;
			iVar1 = 2280;
			break;
		
		case 44:
			StringCopy(&Var2, "JBIB_P0_06_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		default:
			func_429(iVar10, iParam0, 45);
			return;
			break;
	}
	func_421(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_471(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 7;
	Global_69311[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_429(iVar10, iParam0, 1);
			return;
			break;
	}
	func_421(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_472(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 1;
	Global_69311[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "BERD_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "BERD_P0_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "BERD_P0_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "BERD_P0_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "BERD_P0_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		default:
			func_429(iVar10, iParam0, 5);
			return;
			break;
	}
	func_421(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_473(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 10;
	Global_69311[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 1;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 2;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 3;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 4;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 5;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 6;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 7;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 1;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 2;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 3;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 4;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 5;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 1;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 2;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 3;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 4;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 5;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 6;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 1;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 2;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 3;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 4;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 5;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 6;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 7;
			break;
		
		case 36:
			StringCopy(&Var2, "DECL_P0_10_8", 16);
			iVar6 = 10;
			iVar7 = 8;
			break;
		
		case 37:
			StringCopy(&Var2, "DECL_P0_10_9", 16);
			iVar6 = 10;
			iVar7 = 9;
			break;
		
		case 38:
			StringCopy(&Var2, "DECL_P0_10_10", 16);
			iVar6 = 10;
			iVar7 = 10;
			break;
		
		case 39:
			StringCopy(&Var2, "DECL_P0_10_11", 16);
			iVar6 = 10;
			iVar7 = 11;
			break;
		
		case 40:
			StringCopy(&Var2, "DECL_P0_10_12", 16);
			iVar6 = 10;
			iVar7 = 12;
			break;
		
		case 41:
			StringCopy(&Var2, "DECL_P0_10_13", 16);
			iVar6 = 10;
			iVar7 = 13;
			break;
		
		case 42:
			StringCopy(&Var2, "DECL_P0_10_14", 16);
			iVar6 = 10;
			iVar7 = 14;
			break;
		
		case 43:
			StringCopy(&Var2, "DECL_P0_10_15", 16);
			iVar6 = 10;
			iVar7 = 15;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 1;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 2;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 3;
			break;
		
		default:
			func_429(iVar10, iParam0, 48);
			return;
			break;
	}
	func_421(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_474(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 9;
	Global_69311[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 1;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 125;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 150;
			break;
		
		case 11:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 175;
			break;
		
		case 12:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 85;
			break;
		
		case 13:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 150;
			break;
		
		case 14:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 175;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		default:
			func_429(iVar10, iParam0, 20);
			return;
			break;
	}
	func_421(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_475(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 8;
	Global_69311[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC_P0_10", 16);
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "SPEC_P0_16", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		default:
			func_429(iVar10, iParam0, 24);
			return;
			break;
	}
	func_421(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_476(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 5;
	Global_69311[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		default:
			func_429(iVar10, iParam0, 14);
			return;
			break;
	}
	func_421(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_477(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 6;
	Global_69311[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "FEET_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "FEET_P0_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 665;
			break;
		
		case 2:
			StringCopy(&Var2, "FEET_P0_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 620;
			break;
		
		case 3:
			StringCopy(&Var2, "FEET_P0_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 540;
			break;
		
		case 4:
			StringCopy(&Var2, "FEET_P0_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 580;
			break;
		
		case 5:
			StringCopy(&Var2, "FEET_P0_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 650;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "FEET_P0_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "FEET_P0_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "FEET_P0_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 64;
			break;
		
		case 22:
			StringCopy(&Var2, "FEET_P0_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 56;
			break;
		
		case 23:
			StringCopy(&Var2, "FEET_P0_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 69;
			break;
		
		case 24:
			StringCopy(&Var2, "FEET_P0_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 59;
			break;
		
		case 25:
			StringCopy(&Var2, "FEET_P0_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 62;
			break;
		
		case 26:
			StringCopy(&Var2, "FEET_P0_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 74;
			break;
		
		case 27:
			StringCopy(&Var2, "FEET_P0_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 68;
			break;
		
		case 28:
			StringCopy(&Var2, "FEET_P0_15_8", 16);
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 72;
			break;
		
		case 29:
			StringCopy(&Var2, "FEET_P0_15_9", 16);
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 70;
			break;
		
		case 30:
			StringCopy(&Var2, "FEET_P0_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 48;
			break;
		
		case 31:
			StringCopy(&Var2, "FEET_P0_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 48;
			break;
		
		case 32:
			StringCopy(&Var2, "FEET_P0_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 55;
			break;
		
		case 33:
			StringCopy(&Var2, "FEET_P0_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 75;
			break;
		
		case 34:
			StringCopy(&Var2, "FEET_P0_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 65;
			break;
		
		case 35:
			StringCopy(&Var2, "FEET_P0_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 68;
			break;
		
		case 36:
			StringCopy(&Var2, "FEET_P0_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 58;
			break;
		
		case 37:
			StringCopy(&Var2, "FEET_P0_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 68;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "FEET_P0_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 790;
			break;
		
		case 40:
			StringCopy(&Var2, "FEET_P0_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 750;
			break;
		
		case 41:
			StringCopy(&Var2, "FEET_P0_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 860;
			break;
		
		case 42:
			StringCopy(&Var2, "FEET_P0_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 750;
			break;
		
		case 43:
			StringCopy(&Var2, "FEET_P0_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 790;
			break;
		
		case 44:
			StringCopy(&Var2, "FEET_P0_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 45:
			StringCopy(&Var2, "FEET_P0_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 820;
			break;
		
		case 46:
			StringCopy(&Var2, "FEET_P0_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 800;
			break;
		
		case 47:
			StringCopy(&Var2, "FEET_P0_18_8", 16);
			iVar6 = 18;
			iVar7 = 8;
			iVar1 = 850;
			break;
		
		case 48:
			StringCopy(&Var2, "FEET_P0_18_9", 16);
			iVar6 = 18;
			iVar7 = 9;
			iVar1 = 870;
			break;
		
		case 49:
			StringCopy(&Var2, "FEET_P0_18_10", 16);
			iVar6 = 18;
			iVar7 = 10;
			iVar1 = 720;
			break;
		
		case 50:
			StringCopy(&Var2, "FEET_P0_18_11", 16);
			iVar6 = 18;
			iVar7 = 11;
			iVar1 = 740;
			break;
		
		case 51:
			StringCopy(&Var2, "FEET_P0_18_12", 16);
			iVar6 = 18;
			iVar7 = 12;
			iVar1 = 800;
			break;
		
		case 52:
			StringCopy(&Var2, "FEET_P0_18_13", 16);
			iVar6 = 18;
			iVar7 = 13;
			iVar1 = 750;
			break;
		
		case 53:
			StringCopy(&Var2, "FEET_P0_18_14", 16);
			iVar6 = 18;
			iVar7 = 14;
			iVar1 = 770;
			break;
		
		case 54:
			StringCopy(&Var2, "FEET_P0_18_15", 16);
			iVar6 = 18;
			iVar7 = 15;
			iVar1 = 860;
			break;
		
		case 55:
			StringCopy(&Var2, "FEET_P0_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 850;
			break;
		
		case 56:
			StringCopy(&Var2, "FEET_P0_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 800;
			break;
		
		case 57:
			StringCopy(&Var2, "FEET_P0_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 780;
			break;
		
		case 58:
			StringCopy(&Var2, "FEET_P0_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 890;
			break;
		
		case 59:
			StringCopy(&Var2, "FEET_P0_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 820;
			break;
		
		case 60:
			StringCopy(&Var2, "FEET_P0_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 61:
			StringCopy(&Var2, "FEET_P0_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 870;
			break;
		
		case 62:
			StringCopy(&Var2, "FEET_P0_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 930;
			break;
		
		case 63:
			StringCopy(&Var2, "FEET_P0_19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 880;
			break;
		
		case 64:
			StringCopy(&Var2, "FEET_P0_19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 900;
			break;
		
		case 65:
			StringCopy(&Var2, "FEET_P0_19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 920;
			break;
		
		case 66:
			StringCopy(&Var2, "FEET_P0_19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 970;
			break;
		
		case 67:
			StringCopy(&Var2, "FEET_P0_19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 990;
			break;
		
		case 68:
			StringCopy(&Var2, "FEET_P0_19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 960;
			break;
		
		case 69:
			StringCopy(&Var2, "FEET_P0_19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 980;
			break;
		
		case 70:
			StringCopy(&Var2, "FEET_P0_19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 950;
			break;
		
		case 71:
			StringCopy(&Var2, "FEET_P0_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 110;
			break;
		
		case 72:
			StringCopy(&Var2, "FEET_P0_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 73:
			StringCopy(&Var2, "FEET_P0_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 120;
			break;
		
		case 74:
			StringCopy(&Var2, "FEET_P0_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 110;
			break;
		
		case 75:
			StringCopy(&Var2, "FEET_P0_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			iVar1 = 125;
			break;
		
		case 76:
			StringCopy(&Var2, "FEET_P0_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 128;
			break;
		
		case 77:
			StringCopy(&Var2, "FEET_P0_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 135;
			break;
		
		case 78:
			StringCopy(&Var2, "FEET_P0_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 130;
			break;
		
		case 79:
			StringCopy(&Var2, "FEET_P0_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 145;
			break;
		
		case 80:
			StringCopy(&Var2, "FEET_P0_20_9", 16);
			iVar6 = 20;
			iVar7 = 9;
			iVar1 = 110;
			break;
		
		case 81:
			StringCopy(&Var2, "FEET_P0_20_10", 16);
			iVar6 = 20;
			iVar7 = 10;
			iVar1 = 120;
			break;
		
		case 82:
			StringCopy(&Var2, "FEET_P0_20_11", 16);
			iVar6 = 20;
			iVar7 = 11;
			iVar1 = 150;
			break;
		
		case 83:
			StringCopy(&Var2, "FEET_P0_20_12", 16);
			iVar6 = 20;
			iVar7 = 12;
			iVar1 = 125;
			break;
		
		case 84:
			StringCopy(&Var2, "FEET_P0_20_13", 16);
			iVar6 = 20;
			iVar7 = 13;
			iVar1 = 120;
			break;
		
		case 85:
			StringCopy(&Var2, "FEET_P0_20_14", 16);
			iVar6 = 20;
			iVar7 = 14;
			iVar1 = 130;
			break;
		
		case 86:
			StringCopy(&Var2, "FEET_P0_20_15", 16);
			iVar6 = 20;
			iVar7 = 15;
			iVar1 = 110;
			break;
		
		case 87:
			StringCopy(&Var2, "FEET_P0_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 720;
			break;
		
		case 88:
			StringCopy(&Var2, "FEET_P0_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 680;
			break;
		
		case 89:
			StringCopy(&Var2, "FEET_P0_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 650;
			break;
		
		case 90:
			StringCopy(&Var2, "FEET_P0_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 670;
			break;
		
		case 91:
			StringCopy(&Var2, "FEET_P0_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 700;
			break;
		
		case 92:
			StringCopy(&Var2, "FEET_P0_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 680;
			break;
		
		case 93:
			StringCopy(&Var2, "FEET_P0_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 720;
			break;
		
		case 94:
			StringCopy(&Var2, "FEET_P0_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 740;
			break;
		
		case 95:
			StringCopy(&Var2, "FEET_P0_21_8", 16);
			iVar6 = 21;
			iVar7 = 8;
			iVar1 = 760;
			break;
		
		case 96:
			StringCopy(&Var2, "FEET_P0_21_9", 16);
			iVar6 = 21;
			iVar7 = 9;
			iVar1 = 780;
			break;
		
		case 97:
			StringCopy(&Var2, "FEET_P0_21_10", 16);
			iVar6 = 21;
			iVar7 = 10;
			iVar1 = 750;
			break;
		
		case 98:
			StringCopy(&Var2, "FEET_P0_21_11", 16);
			iVar6 = 21;
			iVar7 = 11;
			iVar1 = 700;
			break;
		
		default:
			func_429(iVar10, iParam0, 99);
			return;
			break;
	}
	func_421(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_478(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 4;
	Global_69311[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "LEGS_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "LEGS_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "LEGS_P0_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "LEGS_P0_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "LEGS_P0_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "LEGS_P0_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "LEGS_P0_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "LEGS_P0_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "LEGS_P0_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			break;
		
		case 9:
			StringCopy(&Var2, "LEGS_P0_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			break;
		
		case 10:
			StringCopy(&Var2, "LEGS_P0_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			break;
		
		case 11:
			StringCopy(&Var2, "LEGS_P0_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			break;
		
		case 12:
			StringCopy(&Var2, "LEGS_P0_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			break;
		
		case 13:
			StringCopy(&Var2, "LEGS_P0_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			break;
		
		case 14:
			StringCopy(&Var2, "LEGS_P0_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			break;
		
		case 15:
			StringCopy(&Var2, "LEGS_P0_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "LEGS_P0_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 115;
			break;
		
		case 24:
			StringCopy(&Var2, "LEGS_P0_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 25:
			StringCopy(&Var2, "LEGS_P0_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 128;
			break;
		
		case 26:
			StringCopy(&Var2, "LEGS_P0_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 118;
			break;
		
		case 27:
			StringCopy(&Var2, "LEGS_P0_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 125;
			break;
		
		case 28:
			StringCopy(&Var2, "LEGS_P0_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 128;
			break;
		
		case 29:
			StringCopy(&Var2, "LEGS_P0_7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 128;
			break;
		
		case 30:
			StringCopy(&Var2, "LEGS_P0_7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 125;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar0 = true;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar0 = true;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar0 = true;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 41:
			StringCopy(&Var2, "LEGS_P0_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 68;
			break;
		
		case 42:
			StringCopy(&Var2, "LEGS_P0_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 68;
			break;
		
		case 43:
			StringCopy(&Var2, "LEGS_P0_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 68;
			break;
		
		case 44:
			StringCopy(&Var2, "LEGS_P0_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 68;
			break;
		
		case 45:
			StringCopy(&Var2, "LEGS_P0_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 68;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "LEGS_P0_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "LEGS_P0_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 550;
			break;
		
		case 49:
			StringCopy(&Var2, "LEGS_P0_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 650;
			break;
		
		case 50:
			StringCopy(&Var2, "LEGS_P0_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 875;
			break;
		
		case 51:
			StringCopy(&Var2, "LEGS_P0_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 820;
			break;
		
		case 52:
			StringCopy(&Var2, "LEGS_P0_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 720;
			break;
		
		case 53:
			StringCopy(&Var2, "LEGS_P0_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 750;
			break;
		
		case 54:
			StringCopy(&Var2, "LEGS_P0_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 850;
			break;
		
		case 55:
			StringCopy(&Var2, "LEGS_P0_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "LEGS_P0_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 48;
			break;
		
		case 57:
			StringCopy(&Var2, "LEGS_P0_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 48;
			break;
		
		case 58:
			StringCopy(&Var2, "LEGS_P0_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 38;
			break;
		
		case 59:
			StringCopy(&Var2, "LEGS_P0_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 38;
			break;
		
		case 60:
			StringCopy(&Var2, "LEGS_P0_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 42;
			break;
		
		case 61:
			StringCopy(&Var2, "LEGS_P0_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 58;
			break;
		
		case 62:
			StringCopy(&Var2, "LEGS_P0_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 46;
			break;
		
		case 63:
			StringCopy(&Var2, "LEGS_P0_16_8", 16);
			iVar6 = 16;
			iVar7 = 8;
			iVar1 = 46;
			break;
		
		case 64:
			StringCopy(&Var2, "LEGS_P0_16_9", 16);
			iVar6 = 16;
			iVar7 = 9;
			iVar1 = 46;
			break;
		
		case 65:
			StringCopy(&Var2, "LEGS_P0_16_10", 16);
			iVar6 = 16;
			iVar7 = 10;
			iVar1 = 68;
			break;
		
		case 66:
			StringCopy(&Var2, "LEGS_P0_16_11", 16);
			iVar6 = 16;
			iVar7 = 11;
			iVar1 = 58;
			break;
		
		case 67:
			StringCopy(&Var2, "LEGS_P0_16_12", 16);
			iVar6 = 16;
			iVar7 = 12;
			iVar1 = 50;
			break;
		
		case 68:
			StringCopy(&Var2, "LEGS_P0_16_13", 16);
			iVar6 = 16;
			iVar7 = 13;
			iVar1 = 68;
			break;
		
		case 69:
			StringCopy(&Var2, "LEGS_P0_16_14", 16);
			iVar6 = 16;
			iVar7 = 14;
			iVar1 = 68;
			break;
		
		case 70:
			StringCopy(&Var2, "LEGS_P0_16_15", 16);
			iVar6 = 16;
			iVar7 = 15;
			iVar1 = 42;
			break;
		
		case 71:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "LEGS_P0_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "LEGS_P0_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 250;
			break;
		
		case 74:
			StringCopy(&Var2, "LEGS_P0_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 250;
			break;
		
		case 75:
			StringCopy(&Var2, "LEGS_P0_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 290;
			break;
		
		case 76:
			StringCopy(&Var2, "LEGS_P0_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 270;
			break;
		
		case 77:
			StringCopy(&Var2, "LEGS_P0_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 270;
			break;
		
		case 78:
			StringCopy(&Var2, "LEGS_P0_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 15;
			break;
		
		case 79:
			StringCopy(&Var2, "LEGS_P0_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 12;
			break;
		
		case 80:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 81:
			StringCopy(&Var2, "LEGS_P0_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			break;
		
		case 82:
			StringCopy(&Var2, "LEGS_P0_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 118;
			break;
		
		case 83:
			StringCopy(&Var2, "LEGS_P0_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 110;
			break;
		
		case 84:
			StringCopy(&Var2, "LEGS_P0_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 88;
			break;
		
		case 85:
			StringCopy(&Var2, "LEGS_P0_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 95;
			break;
		
		case 86:
			StringCopy(&Var2, "LEGS_P0_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 95;
			break;
		
		case 87:
			StringCopy(&Var2, "LEGS_P0_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 98;
			break;
		
		case 88:
			StringCopy(&Var2, "LEGS_P0_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar1 = 140;
			break;
		
		case 89:
			StringCopy(&Var2, "LEGS_P0_23_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			break;
		
		case 90:
			StringCopy(&Var2, "LEGS_P0_23_1", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar1 = 150;
			break;
		
		case 91:
			StringCopy(&Var2, "LEGS_P0_23_2", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar1 = 130;
			break;
		
		case 92:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 93:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 25;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 95:
			StringCopy(&Var2, "LEGS_P0_27_0", 16);
			iVar6 = 27;
			iVar7 = 0;
			break;
		
		case 96:
			StringCopy(&Var2, "LEGS_P0_28_0", 16);
			iVar6 = 28;
			iVar7 = 0;
			iVar1 = 45;
			break;
		
		case 97:
			StringCopy(&Var2, "LEGS_P0_28_1", 16);
			iVar6 = 28;
			iVar7 = 1;
			iVar1 = 48;
			break;
		
		case 98:
			StringCopy(&Var2, "LEGS_P0_28_2", 16);
			iVar6 = 28;
			iVar7 = 2;
			iVar1 = 48;
			break;
		
		case 99:
			StringCopy(&Var2, "LEGS_P0_28_3", 16);
			iVar6 = 28;
			iVar7 = 3;
			iVar1 = 52;
			break;
		
		case 100:
			StringCopy(&Var2, "LEGS_P0_28_4", 16);
			iVar6 = 28;
			iVar7 = 4;
			iVar1 = 52;
			break;
		
		case 101:
			StringCopy(&Var2, "LEGS_P0_28_5", 16);
			iVar6 = 28;
			iVar7 = 5;
			iVar1 = 55;
			break;
		
		case 102:
			StringCopy(&Var2, "LEGS_P0_28_6", 16);
			iVar6 = 28;
			iVar7 = 6;
			iVar1 = 55;
			break;
		
		case 103:
			StringCopy(&Var2, "LEGS_P0_28_7", 16);
			iVar6 = 28;
			iVar7 = 7;
			iVar1 = 55;
			break;
		
		case 104:
			StringCopy(&Var2, "LEGS_P0_28_8", 16);
			iVar6 = 28;
			iVar7 = 8;
			iVar1 = 58;
			break;
		
		case 105:
			StringCopy(&Var2, "LEGS_P0_28_9", 16);
			iVar6 = 28;
			iVar7 = 9;
			iVar1 = 58;
			break;
		
		case 106:
			StringCopy(&Var2, "LEGS_P0_28_10", 16);
			iVar6 = 28;
			iVar7 = 10;
			iVar1 = 60;
			break;
		
		case 107:
			StringCopy(&Var2, "LEGS_P0_28_11", 16);
			iVar6 = 28;
			iVar7 = 11;
			iVar1 = 60;
			break;
		
		case 108:
			StringCopy(&Var2, "LEGS_P0_28_12", 16);
			iVar6 = 28;
			iVar7 = 12;
			iVar1 = 62;
			break;
		
		case 109:
			StringCopy(&Var2, "LEGS_P0_28_13", 16);
			iVar6 = 28;
			iVar7 = 13;
			iVar1 = 62;
			break;
		
		case 110:
			StringCopy(&Var2, "LEGS_P0_28_14", 16);
			iVar6 = 28;
			iVar7 = 14;
			iVar1 = 65;
			break;
		
		case 111:
			StringCopy(&Var2, "LEGS_P0_28_15", 16);
			iVar6 = 28;
			iVar7 = 15;
			iVar1 = 65;
			break;
		
		case 112:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 29;
			iVar7 = 0;
			break;
		
		default:
			func_429(iVar10, iParam0, 113);
			return;
			break;
	}
	func_421(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_479(int iParam0)
{
	if (iParam0 < 60)
	{
		func_481(iParam0);
	}
	else
	{
		func_480(iParam0);
	}
	if (Global_69311[0 /*14*/].f_2 == -1)
	{
		func_429(3, iParam0, 181);
	}
}

void func_480(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_69311[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 60:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 61:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 62:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 63:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 64:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar0 = true;
			break;
		
		case 65:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar0 = true;
			break;
		
		case 66:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar0 = true;
			break;
		
		case 67:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar0 = true;
			break;
		
		case 68:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar0 = true;
			break;
		
		case 69:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "TORSO_P0_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 120;
			break;
		
		case 71:
			StringCopy(&Var2, "TORSO_P0_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 120;
			break;
		
		case 72:
			StringCopy(&Var2, "TORSO_P0_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 120;
			break;
		
		case 73:
			StringCopy(&Var2, "TORSO_P0_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 120;
			break;
		
		case 74:
			StringCopy(&Var2, "TORSO_P0_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 120;
			break;
		
		case 75:
			StringCopy(&Var2, "TORSO_P0_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 120;
			break;
		
		case 76:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 77:
			StringCopy(&Var2, "TORSO_P0_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 78:
			StringCopy(&Var2, "TORSO_P0_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 20;
			break;
		
		case 79:
			StringCopy(&Var2, "TORSO_P0_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 24;
			break;
		
		case 80:
			StringCopy(&Var2, "TORSO_P0_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 22;
			break;
		
		case 81:
			StringCopy(&Var2, "TORSO_P0_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 25;
			break;
		
		case 82:
			StringCopy(&Var2, "TORSO_P0_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 25;
			break;
		
		case 83:
			StringCopy(&Var2, "TORSO_P0_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 22;
			break;
		
		case 84:
			StringCopy(&Var2, "TORSO_P0_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 27;
			break;
		
		case 85:
			StringCopy(&Var2, "TORSO_P0_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			break;
		
		case 86:
			StringCopy(&Var2, "TORSO_P0_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			break;
		
		case 87:
			StringCopy(&Var2, "TORSO_P0_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			break;
		
		case 88:
			StringCopy(&Var2, "TORSO_P0_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 48;
			break;
		
		case 89:
			StringCopy(&Var2, "TORSO_P0_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 40;
			break;
		
		case 90:
			StringCopy(&Var2, "TORSO_P0_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 45;
			break;
		
		case 91:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "TORSO_P0_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			break;
		
		case 93:
			StringCopy(&Var2, "TORSO_P0_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 190;
			break;
		
		case 94:
			StringCopy(&Var2, "TORSO_P0_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 190;
			break;
		
		case 95:
			StringCopy(&Var2, "TORSO_P0_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 190;
			break;
		
		case 96:
			StringCopy(&Var2, "TORSO_P0_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 210;
			break;
		
		case 97:
			StringCopy(&Var2, "TORSO_P0_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			break;
		
		case 98:
			StringCopy(&Var2, "TORSO_P0_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 99:
			StringCopy(&Var2, "TORSO_P0_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 55;
			break;
		
		case 100:
			StringCopy(&Var2, "TORSO_P0_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 110;
			break;
		
		case 101:
			StringCopy(&Var2, "TORSO_P0_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			iVar1 = 99;
			break;
		
		case 102:
			StringCopy(&Var2, "TORSO_P0_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 49;
			break;
		
		case 103:
			StringCopy(&Var2, "TORSO_P0_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 120;
			break;
		
		case 104:
			StringCopy(&Var2, "TORSO_P0_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 45;
			break;
		
		case 105:
			StringCopy(&Var2, "TORSO_P0_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 115;
			break;
		
		case 106:
			StringCopy(&Var2, "TORSO_P0_20_9", 16);
			iVar6 = 20;
			iVar7 = 9;
			iVar1 = 105;
			break;
		
		case 107:
			StringCopy(&Var2, "TORSO_P0_20_10", 16);
			iVar6 = 20;
			iVar7 = 10;
			iVar1 = 90;
			break;
		
		case 108:
			StringCopy(&Var2, "TORSO_P0_20_11", 16);
			iVar6 = 20;
			iVar7 = 11;
			iVar1 = 95;
			break;
		
		case 109:
			StringCopy(&Var2, "TORSO_P0_20_12", 16);
			iVar6 = 20;
			iVar7 = 12;
			iVar1 = 39;
			break;
		
		case 110:
			StringCopy(&Var2, "TORSO_P0_20_13", 16);
			iVar6 = 20;
			iVar7 = 13;
			iVar1 = 95;
			break;
		
		case 111:
			StringCopy(&Var2, "TORSO_P0_20_14", 16);
			iVar6 = 20;
			iVar7 = 14;
			iVar1 = 35;
			break;
		
		case 112:
			StringCopy(&Var2, "TORSO_P0_20_15", 16);
			iVar6 = 20;
			iVar7 = 15;
			iVar1 = 95;
			break;
		
		case 113:
			StringCopy(&Var2, "TORSO_P0_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 88;
			break;
		
		case 114:
			StringCopy(&Var2, "TORSO_P0_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 60;
			break;
		
		case 115:
			StringCopy(&Var2, "TORSO_P0_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 70;
			break;
		
		case 116:
			StringCopy(&Var2, "TORSO_P0_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 80;
			break;
		
		case 117:
			StringCopy(&Var2, "TORSO_P0_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 90;
			break;
		
		case 118:
			StringCopy(&Var2, "TORSO_P0_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 80;
			break;
		
		case 119:
			StringCopy(&Var2, "TORSO_P0_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 70;
			break;
		
		case 120:
			StringCopy(&Var2, "TORSO_P0_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 95;
			break;
		
		case 121:
			StringCopy(&Var2, "TORSO_P0_21_8", 16);
			iVar6 = 21;
			iVar7 = 8;
			iVar1 = 105;
			break;
		
		case 122:
			StringCopy(&Var2, "TORSO_P0_21_9", 16);
			iVar6 = 21;
			iVar7 = 9;
			iVar1 = 95;
			break;
		
		case 123:
			StringCopy(&Var2, "TORSO_P0_21_10", 16);
			iVar6 = 21;
			iVar7 = 10;
			iVar1 = 110;
			break;
		
		case 124:
			StringCopy(&Var2, "TORSO_P0_21_11", 16);
			iVar6 = 21;
			iVar7 = 11;
			iVar1 = 98;
			break;
		
		case 125:
			StringCopy(&Var2, "TORSO_P0_21_12", 16);
			iVar6 = 21;
			iVar7 = 12;
			iVar1 = 88;
			break;
		
		case 126:
			StringCopy(&Var2, "TORSO_P0_21_13", 16);
			iVar6 = 21;
			iVar7 = 13;
			iVar1 = 98;
			break;
		
		case 127:
			StringCopy(&Var2, "TORSO_P0_21_14", 16);
			iVar6 = 21;
			iVar7 = 14;
			iVar1 = 110;
			break;
		
		case 128:
			StringCopy(&Var2, "TORSO_P0_21_15", 16);
			iVar6 = 21;
			iVar7 = 15;
			iVar1 = 98;
			break;
		
		case 129:
			StringCopy(&Var2, "TORSO_P0_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			break;
		
		case 130:
			StringCopy(&Var2, "TORSO_P0_22_1", 16);
			iVar6 = 22;
			iVar7 = 1;
			iVar1 = 4950;
			break;
		
		case 131:
			StringCopy(&Var2, "TORSO_P0_22_2", 16);
			iVar6 = 22;
			iVar7 = 2;
			iVar1 = 4195;
			break;
		
		case 132:
			StringCopy(&Var2, "TORSO_P0_22_3", 16);
			iVar6 = 22;
			iVar7 = 3;
			iVar1 = 3195;
			break;
		
		case 133:
			StringCopy(&Var2, "TORSO_P0_22_4", 16);
			iVar6 = 22;
			iVar7 = 4;
			iVar1 = 2950;
			break;
		
		case 134:
			StringCopy(&Var2, "TORSO_P0_22_5", 16);
			iVar6 = 22;
			iVar7 = 5;
			iVar1 = 3950;
			break;
		
		case 135:
			StringCopy(&Var2, "TORSO_P0_23_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar1 = 3200;
			break;
		
		case 136:
			StringCopy(&Var2, "TORSO_P0_23_1", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar1 = 3200;
			break;
		
		case 137:
			StringCopy(&Var2, "TORSO_P0_23_2", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar1 = 3200;
			break;
		
		case 138:
			StringCopy(&Var2, "TORSO_P0_23_3", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar1 = 3200;
			break;
		
		case 139:
			StringCopy(&Var2, "TORSO_P0_23_4", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar1 = 3200;
			break;
		
		case 140:
			StringCopy(&Var2, "TORSO_P0_23_5", 16);
			iVar6 = 23;
			iVar7 = 5;
			iVar1 = 3200;
			break;
		
		case 141:
			StringCopy(&Var2, "TORSO_P0_23_6", 16);
			iVar6 = 23;
			iVar7 = 6;
			iVar1 = 3200;
			break;
		
		case 142:
			StringCopy(&Var2, "TORSO_P0_23_7", 16);
			iVar6 = 23;
			iVar7 = 7;
			iVar1 = 3200;
			break;
		
		case 143:
			StringCopy(&Var2, "TORSO_P0_23_8", 16);
			iVar6 = 23;
			iVar7 = 8;
			iVar1 = 3200;
			break;
		
		case 144:
			StringCopy(&Var2, "TORSO_P0_23_9", 16);
			iVar6 = 23;
			iVar7 = 9;
			iVar1 = 3200;
			break;
		
		case 145:
			StringCopy(&Var2, "TORSO_P0_23_10", 16);
			iVar6 = 23;
			iVar7 = 10;
			iVar1 = 3200;
			break;
		
		case 146:
			StringCopy(&Var2, "TORSO_P0_23_11", 16);
			iVar6 = 23;
			iVar7 = 11;
			iVar1 = 3200;
			break;
		
		case 147:
			StringCopy(&Var2, "TORSO_P0_23_12", 16);
			iVar6 = 23;
			iVar7 = 12;
			iVar1 = 3200;
			break;
		
		case 148:
			StringCopy(&Var2, "TORSO_P0_23_13", 16);
			iVar6 = 23;
			iVar7 = 13;
			iVar1 = 3200;
			break;
		
		case 149:
			StringCopy(&Var2, "TORSO_P0_23_14", 16);
			iVar6 = 23;
			iVar7 = 14;
			iVar1 = 3200;
			break;
		
		case 150:
			StringCopy(&Var2, "TORSO_P0_23_15", 16);
			iVar6 = 23;
			iVar7 = 15;
			iVar1 = 3200;
			break;
		
		case 151:
			StringCopy(&Var2, "TORSO_P0_24_0", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar1 = 1350;
			break;
		
		case 152:
			StringCopy(&Var2, "TORSO_P0_24_1", 16);
			iVar6 = 24;
			iVar7 = 1;
			iVar1 = 1400;
			break;
		
		case 153:
			StringCopy(&Var2, "TORSO_P0_24_2", 16);
			iVar6 = 24;
			iVar7 = 2;
			iVar1 = 1200;
			break;
		
		case 154:
			StringCopy(&Var2, "TORSO_P0_24_3", 16);
			iVar6 = 24;
			iVar7 = 3;
			iVar1 = 1250;
			break;
		
		case 155:
			StringCopy(&Var2, "TORSO_P0_24_4", 16);
			iVar6 = 24;
			iVar7 = 4;
			iVar1 = 1350;
			break;
		
		case 156:
			StringCopy(&Var2, "TORSO_P0_24_5", 16);
			iVar6 = 24;
			iVar7 = 5;
			iVar1 = 1300;
			break;
		
		case 157:
			StringCopy(&Var2, "TORSO_P0_24_6", 16);
			iVar6 = 24;
			iVar7 = 6;
			iVar1 = 1380;
			break;
		
		case 158:
			StringCopy(&Var2, "TORSO_P0_24_7", 16);
			iVar6 = 24;
			iVar7 = 7;
			iVar1 = 1340;
			break;
		
		case 159:
			StringCopy(&Var2, "TORSO_P0_24_8", 16);
			iVar6 = 24;
			iVar7 = 8;
			iVar1 = 1380;
			break;
		
		case 160:
			StringCopy(&Var2, "TORSO_P0_24_9", 16);
			iVar6 = 24;
			iVar7 = 9;
			iVar1 = 1250;
			break;
		
		case 161:
			StringCopy(&Var2, "TORSO_P0_25_0", 16);
			iVar6 = 25;
			iVar7 = 0;
			iVar1 = 840;
			break;
		
		case 162:
			StringCopy(&Var2, "TORSO_P0_25_1", 16);
			iVar6 = 25;
			iVar7 = 1;
			iVar1 = 840;
			break;
		
		case 163:
			StringCopy(&Var2, "TORSO_P0_25_2", 16);
			iVar6 = 25;
			iVar7 = 2;
			iVar1 = 840;
			break;
		
		case 164:
			StringCopy(&Var2, "TORSO_P0_25_3", 16);
			iVar6 = 25;
			iVar7 = 3;
			iVar1 = 840;
			break;
		
		case 165:
			StringCopy(&Var2, "TORSO_P0_25_4", 16);
			iVar6 = 25;
			iVar7 = 4;
			iVar1 = 840;
			break;
		
		case 166:
			StringCopy(&Var2, "TORSO_P0_25_5", 16);
			iVar6 = 25;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 167:
			StringCopy(&Var2, "TORSO_P0_25_6", 16);
			iVar6 = 25;
			iVar7 = 6;
			iVar1 = 840;
			break;
		
		case 168:
			StringCopy(&Var2, "TORSO_P0_25_7", 16);
			iVar6 = 25;
			iVar7 = 7;
			iVar1 = 840;
			break;
		
		case 169:
			StringCopy(&Var2, "TORSO_P0_26_0", 16);
			iVar6 = 26;
			iVar7 = 0;
			break;
		
		case 170:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 27;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 171:
			StringCopy(&Var2, "TORSO_P0_28_0", 16);
			iVar6 = 28;
			iVar7 = 0;
			break;
		
		case 172:
			StringCopy(&Var2, "TORSO_P0_28_1", 16);
			iVar6 = 28;
			iVar7 = 1;
			iVar1 = 130;
			break;
		
		case 173:
			StringCopy(&Var2, "TORSO_P0_28_2", 16);
			iVar6 = 28;
			iVar7 = 2;
			iVar1 = 110;
			break;
		
		case 174:
			StringCopy(&Var2, "TORSO_P0_29_0", 16);
			iVar6 = 29;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 175:
			StringCopy(&Var2, "TORSO_P0_30_0", 16);
			iVar6 = 30;
			iVar7 = 0;
			iVar1 = 290;
			break;
		
		case 176:
			StringCopy(&Var2, "TORSO_P0_30_1", 16);
			iVar6 = 30;
			iVar7 = 1;
			iVar1 = 320;
			break;
		
		case 177:
			StringCopy(&Var2, "TORSO_P0_31_0", 16);
			iVar6 = 31;
			iVar7 = 0;
			iVar1 = 59;
			break;
		
		case 178:
			StringCopy(&Var2, "TORSO_P0_31_1", 16);
			iVar6 = 31;
			iVar7 = 1;
			iVar1 = 55;
			break;
		
		case 179:
			StringCopy(&Var2, "TORSO_P0_31_2", 16);
			iVar6 = 31;
			iVar7 = 2;
			iVar1 = 59;
			break;
		
		case 180:
			StringCopy(&Var2, "TORSO_P0_31_3", 16);
			iVar6 = 31;
			iVar7 = 3;
			iVar1 = 49;
			break;
		
		default:
			return;
			break;
	}
	func_421(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_481(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_69311[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "TORSO_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "TORSO_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "TORSO_P0_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 3500;
			break;
		
		case 3:
			StringCopy(&Var2, "TORSO_P0_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "TORSO_P0_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "TORSO_P0_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "TORSO_P0_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "TORSO_P0_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "TORSO_P0_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			break;
		
		case 9:
			StringCopy(&Var2, "TORSO_P0_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			break;
		
		case 10:
			StringCopy(&Var2, "TORSO_P0_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			break;
		
		case 11:
			StringCopy(&Var2, "TORSO_P0_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			break;
		
		case 12:
			StringCopy(&Var2, "TORSO_P0_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			break;
		
		case 13:
			StringCopy(&Var2, "TORSO_P0_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			break;
		
		case 14:
			StringCopy(&Var2, "TORSO_P0_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			break;
		
		case 15:
			StringCopy(&Var2, "TORSO_P0_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 20;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 18;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 22;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 25;
			break;
		
		case 21:
			StringCopy(&Var2, "TORSO_P0_2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 19;
			break;
		
		case 22:
			StringCopy(&Var2, "TORSO_P0_2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 20;
			break;
		
		case 23:
			StringCopy(&Var2, "TORSO_P0_2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 22;
			break;
		
		case 24:
			StringCopy(&Var2, "TORSO_P0_2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 18;
			break;
		
		case 25:
			StringCopy(&Var2, "TORSO_P0_2_8", 16);
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 39;
			break;
		
		case 26:
			StringCopy(&Var2, "TORSO_P0_2_9", 16);
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 32;
			break;
		
		case 27:
			StringCopy(&Var2, "TORSO_P0_2_10", 16);
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 35;
			break;
		
		case 28:
			StringCopy(&Var2, "TORSO_P0_2_11", 16);
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = 35;
			break;
		
		case 29:
			StringCopy(&Var2, "TORSO_P0_2_12", 16);
			iVar6 = 2;
			iVar7 = 12;
			iVar1 = 210;
			break;
		
		case 30:
			StringCopy(&Var2, "TORSO_P0_2_13", 16);
			iVar6 = 2;
			iVar7 = 13;
			iVar1 = 250;
			break;
		
		case 31:
			StringCopy(&Var2, "TORSO_P0_2_14", 16);
			iVar6 = 2;
			iVar7 = 14;
			iVar1 = 290;
			break;
		
		case 32:
			StringCopy(&Var2, "TORSO_P0_2_15", 16);
			iVar6 = 2;
			iVar7 = 15;
			iVar1 = 310;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 38:
			StringCopy(&Var2, "TORSO_P0_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 150;
			break;
		
		case 39:
			StringCopy(&Var2, "TORSO_P0_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 160;
			break;
		
		case 40:
			StringCopy(&Var2, "TORSO_P0_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 150;
			break;
		
		case 41:
			StringCopy(&Var2, "TORSO_P0_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 150;
			break;
		
		case 42:
			StringCopy(&Var2, "TORSO_P0_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 160;
			break;
		
		case 43:
			StringCopy(&Var2, "TORSO_P0_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 160;
			break;
		
		case 44:
			StringCopy(&Var2, "TORSO_P0_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "TORSO_P0_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 52;
			break;
		
		case 46:
			StringCopy(&Var2, "TORSO_P0_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 52;
			break;
		
		case 47:
			StringCopy(&Var2, "TORSO_P0_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 55;
			break;
		
		case 48:
			StringCopy(&Var2, "TORSO_P0_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 55;
			break;
		
		case 49:
			StringCopy(&Var2, "TORSO_P0_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 58;
			break;
		
		case 50:
			StringCopy(&Var2, "TORSO_P0_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 58;
			break;
		
		case 51:
			StringCopy(&Var2, "TORSO_P0_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 62;
			break;
		
		case 52:
			StringCopy(&Var2, "TORSO_P0_8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 65;
			break;
		
		case 53:
			StringCopy(&Var2, "TORSO_P0_8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 65;
			break;
		
		case 54:
			StringCopy(&Var2, "TORSO_P0_8_10", 16);
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 68;
			break;
		
		case 55:
			StringCopy(&Var2, "TORSO_P0_8_11", 16);
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 68;
			break;
		
		case 56:
			StringCopy(&Var2, "TORSO_P0_8_12", 16);
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 55;
			break;
		
		case 57:
			StringCopy(&Var2, "TORSO_P0_8_13", 16);
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 62;
			break;
		
		case 58:
			StringCopy(&Var2, "TORSO_P0_8_14", 16);
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 58;
			break;
		
		case 59:
			StringCopy(&Var2, "TORSO_P0_8_15", 16);
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 58;
			break;
		
		default:
			return;
			break;
	}
	func_421(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_482(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 2;
	Global_69311[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "HAIR_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "HAIR_P0_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "HAIR_P0_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "HAIR_P0_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "HAIR_P0_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		default:
			func_429(iVar10, iParam0, 6);
			return;
			break;
	}
	func_421(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_483(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 0;
	Global_69311[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 6;
			break;
		
		default:
			func_429(iVar10, iParam0, 7);
			return;
			break;
	}
	func_421(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_484()
{
	Global_69311[0 /*14*/].f_1 = -1;
	Global_69311[0 /*14*/].f_2 = -1;
	Global_69311[0 /*14*/].f_5 = -1;
	Global_69311[0 /*14*/].f_3 = -1;
	Global_69311[0 /*14*/].f_4 = -1;
	Global_69311[0 /*14*/].f_7 = 0;
	Global_69311[0 /*14*/].f_6 = 0;
	Global_69311[0 /*14*/].f_13 = -1;
	Global_69311[0 /*14*/].f_12 = 0;
	Global_69311[0 /*14*/] = 0;
	StringCopy(&(Global_69311[0 /*14*/].f_8), "NO_LABEL", 16);
}

bool func_485(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar21;
	int iVar31;
	var uVar32;
	
	if (is_ped_injured(iParam0))
	{
		return false;
	}
	iVar0 = get_entity_model(iParam0);
	Global_69311[1 /*14*/] = {func_418(iVar0, iParam1, iParam2)};
	if (!is_bit_set(Global_69311[1 /*14*/].f_6, false))
	{
		return false;
	}
	if (iParam1 == 12)
	{
		uVar5 = {func_500(iVar0, iParam2)};
		iVar2 = 0;
		while (iVar2 <= 14)
		{
			if ((uVar5[iVar2] != -99 && iVar2 != 12) && iVar2 != 14)
			{
				if (!func_485(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar21 = {func_496(iVar0, uVar5[iVar2])};
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_485(iParam0, 14, uVar21[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_69311[2 /*14*/] = {func_418(iVar0, 14, iVar4)};
									if (Global_69311[2 /*14*/].f_12 == iVar3)
									{
										if (func_485(iParam0, 14, iVar4))
										{
											if (!func_488(iVar0, iParam2, 14, iVar4, &uVar5, &(Global_69311[2 /*14*/])))
											{
												return false;
											}
										}
									}
									iVar4++;
								}
							}
							iVar3++;
						}
					}
					else
					{
						iVar1 = func_486(iParam0, iVar2);
						Global_69311[2 /*14*/] = {func_418(iVar0, iVar2, iVar1)};
						if (!func_488(iVar0, iParam2, iVar2, iVar1, &uVar5, &(Global_69311[2 /*14*/])))
						{
							return false;
						}
					}
				}
			}
			iVar2++;
		}
		return true;
	}
	else if (iParam1 == 13)
	{
		uVar32 = {func_496(iVar0, iParam2)};
		iVar31 = 0;
		while (iVar31 <= 8)
		{
			if (!func_485(iParam0, 14, uVar32[iVar31]))
			{
				return false;
			}
			iVar31++;
		}
		return true;
	}
	else if (iParam1 == 14)
	{
		if (get_ped_prop_index(iParam0, Global_69311[1 /*14*/].f_12) == Global_69311[1 /*14*/].f_3 && (get_ped_prop_texture_index(iParam0, Global_69311[1 /*14*/].f_12) == Global_69311[1 /*14*/].f_4 || Global_69311[1 /*14*/].f_3 == -1))
		{
			return true;
		}
	}
	else if (Global_69311[1 /*14*/].f_3 == get_ped_drawable_variation(iParam0, func_430(iParam1)) && Global_69311[1 /*14*/].f_4 == get_ped_texture_variation(iParam0, func_430(iParam1)))
	{
		return true;
	}
	return false;
}

int func_486(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (((iParam1 == 12 || iParam1 == 13) || iParam1 == 14) || is_ped_injured(iParam0))
	{
		return -99;
	}
	iVar0 = func_430(iParam1);
	iVar1 = get_ped_drawable_variation(iParam0, iVar0);
	iVar2 = get_ped_texture_variation(iParam0, iVar0);
	return func_487(iParam0, iVar1, iVar2, iParam1);
}

int func_487(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_430(iParam3);
	iVar1 = get_number_of_ped_drawable_variations(iParam0, iVar0);
	iVar3 = 0;
	while (iVar3 <= iVar1 - 1)
	{
		iVar5 = get_number_of_ped_texture_variations(iParam0, iVar0, iVar3);
		if (iVar3 != iParam1)
		{
			iVar2 += iVar5;
		}
		else
		{
			iVar4 = 0;
			while (iVar4 <= iVar5 - 1)
			{
				if (iVar3 == iParam1 && iVar4 == iParam2)
				{
					return iVar2;
				}
				else
				{
					iVar2++;
				}
				iVar4++;
			}
		}
		iVar3++;
	}
	return -99;
}

bool func_488(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5)
{
	var uVar0;
	int iVar10;
	
	if (*uParam4[iParam2] == iParam3)
	{
		return true;
	}
	if ((*uParam4[iParam2] == -99 && iParam2 != 14) && iParam2 != 13)
	{
		return true;
	}
	if (iParam2 == 13 || (iParam2 == 14 && *uParam4[13] == 31))
	{
		if ((((((((iParam3 == 0 || iParam3 == 1) || iParam3 == 2) || iParam3 == 3) || iParam3 == 4) || iParam3 == 5) || iParam3 == 6) || iParam3 == 7) || iParam3 == 8)
		{
			return true;
		}
	}
	if (iParam3 == -99 || *uParam5.f_1 == -1)
	{
		return true;
	}
	if (iParam2 == 14)
	{
		uVar0 = {func_496(iParam0, *uParam4[13])};
		iVar10 = 0;
		while (iVar10 <= 8)
		{
			if (uVar0[iVar10] == iParam3)
			{
				return true;
			}
			iVar10++;
		}
	}
	if (func_495(iParam0, iParam2, iParam3))
	{
		return true;
	}
	if (iParam0 == joaat("player_zero"))
	{
		if (func_494(iParam0, iParam2, iParam3))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 18) || iParam1 == 50)
			{
				return false;
			}
			return true;
		}
		else if (func_493(iParam0, iParam2, iParam3))
		{
			if (((((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 4) || iParam1 == 5) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 14) || iParam1 == 18) || iParam1 == 50)
			{
				return false;
			}
			if (iParam2 == 8)
			{
				if (*uParam4[8] != 0)
				{
					return false;
				}
			}
			else if (iParam2 == 9)
			{
				if (*uParam4[9] != 0)
				{
					return false;
				}
			}
			return true;
		}
		else if (func_489(iParam0, iParam2, iParam3))
		{
			if (((((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 4) || iParam1 == 5) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 14) || iParam1 == 18) || iParam1 == 50)
			{
				return false;
			}
			return true;
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (func_494(iParam0, iParam2, iParam3))
		{
			if ((iParam1 == 3 || iParam1 == 5) || iParam1 == 7)
			{
				return false;
			}
			return true;
		}
		else if (func_493(iParam0, iParam2, iParam3))
		{
			if ((((iParam1 == 3 || iParam1 == 5) || iParam1 == 7) || iParam1 == 8) || iParam1 == 21)
			{
				if (iParam2 == 8)
				{
					if (iParam3 == 9)
					{
						if (iParam1 == 8 || iParam1 == 21)
						{
							return true;
						}
					}
					else
					{
						return false;
					}
				}
				else
				{
					return false;
				}
			}
			if (iParam2 == 8)
			{
				if (*uParam4[8] != 26)
				{
					return false;
				}
			}
			else if (iParam2 == 9)
			{
				if (*uParam4[9] != 0)
				{
					return false;
				}
				if (((iParam1 == 43 || iParam1 == 44) || iParam1 == 45) || iParam1 == 46)
				{
					if (iParam3 >= 5 && iParam3 <= 10)
					{
						return false;
					}
				}
			}
			else if (iParam2 == 14)
			{
				if (((iParam1 == 43 || iParam1 == 44) || iParam1 == 45) || iParam1 == 46)
				{
					if (iParam3 >= 26 && iParam3 <= 39)
					{
						return false;
					}
				}
			}
			return true;
		}
		else if (func_489(iParam0, iParam2, iParam3))
		{
			if (((((iParam1 == 3 || iParam1 == 3) || iParam1 == 5) || iParam1 == 7) || iParam1 == 8) || iParam1 == 21)
			{
				return false;
			}
			return true;
		}
		else if (iParam2 == 14)
		{
			if (iParam3 >= 159 && iParam3 <= 174)
			{
				return true;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 2)
		{
			if (iParam2 == 14 && iParam3 == 0)
			{
				return true;
			}
		}
		if (func_494(iParam0, iParam2, iParam3))
		{
			if (((((iParam1 == 1 || iParam1 == 2) || iParam1 == 6) || iParam1 == 8) || iParam1 == 45) || iParam1 == 12)
			{
				return false;
			}
			return true;
		}
		else if (func_493(iParam0, iParam2, iParam3))
		{
			if (((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 3) || iParam1 == 6) || iParam1 == 8) || iParam1 == 11) || iParam1 == 45) || iParam1 == 12)
			{
				return false;
			}
			if (iParam2 == 8)
			{
				if (*uParam4[8] != 15)
				{
					return false;
				}
			}
			else if (iParam2 == 9)
			{
				if (*uParam4[9] != 0)
				{
					return false;
				}
			}
			return true;
		}
		else if (func_489(iParam0, iParam2, iParam3))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 3) || iParam1 == 6) || iParam1 == 8) || iParam1 == 11) || iParam1 == 12)
			{
				return false;
			}
			return true;
		}
	}
	return false;
}

int func_489(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 == 16)
					{
						return true;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 14:
					if ((iParam2 == 40 || (iParam2 >= 41 && iParam2 <= 56)) || (iParam2 >= 64 && iParam2 <= 79))
					{
						return true;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 14:
					if ((iParam2 >= 17 && iParam2 <= 18) || (iParam2 >= 71 && iParam2 <= 86))
					{
						return true;
					}
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 >= 18 && iParam2 <= 130)
					{
						return true;
					}
					else if (iParam2 >= 10 && iParam2 <= 17)
					{
						return true;
					}
					else if (iParam2 >= 327)
					{
						return (_0x341DE7ED1D2A1BFD(func_490(iParam0, iParam2, 14, 3), -1757550583, true) || _0x341DE7ED1D2A1BFD(func_490(iParam0, iParam2, 14, 3), -1842686353, true));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						return (_0x341DE7ED1D2A1BFD(func_490(iParam0, iParam2, 1, 3), -1757550583, false) || _0x341DE7ED1D2A1BFD(func_490(iParam0, iParam2, 1, 3), -1842686353, false));
					}
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 >= 18 && iParam2 <= 130)
					{
						return true;
					}
					else if (iParam2 >= 10 && iParam2 <= 17)
					{
						return true;
					}
					else if (iParam2 >= 327)
					{
						return (_0x341DE7ED1D2A1BFD(func_490(iParam0, iParam2, 14, 4), -1757550583, true) || _0x341DE7ED1D2A1BFD(func_490(iParam0, iParam2, 14, 4), -1842686353, true));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						return (_0x341DE7ED1D2A1BFD(func_490(iParam0, iParam2, 1, 4), -1757550583, false) || _0x341DE7ED1D2A1BFD(func_490(iParam0, iParam2, 1, 4), -1842686353, false));
					}
					break;
			}
			break;
	}
	return false;
}

int func_490(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<2> Var0;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	struct<2> Var21;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	
	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		init_shop_ped_prop(&Var0);
		iVar18 = 0;
		iVar19 = iParam1 - func_492(iParam0);
		if (iVar19 < 0)
		{
			return -1;
		}
		iVar20 = _get_num_props_from_outfit(iParam3, 6, -1, 1, -1, -1);
		iVar17 = 0;
		while (iVar17 < iVar20)
		{
			get_shop_ped_query_prop(iVar17, &Var0);
			if (!_is_dlc_data_empty(Var0))
			{
				if (iVar18 == iVar19)
				{
					return Var0.f_1;
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else
	{
		init_shop_ped_component(&Var21);
		iVar39 = 0;
		iVar40 = iParam1 - func_491(iParam0, func_430(iParam2));
		if (iVar40 < 0)
		{
			return -1;
		}
		if ((iParam0 == Global_69432.f_26[iParam2] && iParam1 == Global_69432[iParam2]) && Global_69432.f_13[iParam2] != 0)
		{
			return Global_69432.f_13[iParam2];
		}
		iVar41 = _get_num_props_from_outfit(iParam3, 6, -1, 0, -1, func_430(iParam2));
		iVar38 = 0;
		while (iVar38 < iVar41)
		{
			get_shop_ped_query_component(iVar38, &Var21);
			if (!_is_dlc_data_empty(Var21))
			{
				if (iVar39 == iVar40)
				{
					Global_69432.f_13[iParam2] = Var21.f_1;
					Global_69432[iParam2] = iParam1;
					Global_69432.f_26[iParam2] = iParam0;
					return Var21.f_1;
				}
				iVar39++;
			}
			iVar38++;
		}
	}
	return -1;
}

int func_491(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 6;
					break;
				
				case 3:
					return 181;
					break;
				
				case 4:
					return 113;
					break;
				
				case 5:
					return 14;
					break;
				
				case 6:
					return 99;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 24;
					break;
				
				case 9:
					return 20;
					break;
				
				case 10:
					return 48;
					break;
				
				case 11:
					return 45;
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 21;
					break;
				
				case 3:
					return 318;
					break;
				
				case 4:
					return 117;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 134;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 77;
					break;
				
				case 9:
					return 12;
					break;
				
				case 10:
					return 53;
					break;
				
				case 11:
					return 63;
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 6;
					break;
				
				case 2:
					return 9;
					break;
				
				case 3:
					return 242;
					break;
				
				case 4:
					return 104;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 84;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 18;
					break;
				
				case 9:
					return 17;
					break;
				
				case 10:
					return 33;
					break;
				
				case 11:
					return 1;
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 91;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 92;
					break;
				
				case 8:
					return 241;
					break;
				
				case 9:
					return 46;
					break;
				
				case 10:
					return 7;
					break;
				
				case 11:
					return 237;
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 92;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 55;
					break;
				
				case 8:
					return 136;
					break;
				
				case 9:
					return 36;
					break;
				
				case 10:
					return 6;
					break;
				
				case 11:
					return 256;
					break;
			}
			break;
	}
	return -99;
}

int func_492(int iParam0)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			return 113;
			break;
		
		case joaat("player_one"):
			return 175;
			break;
		
		case joaat("player_two"):
			return 155;
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			return 327;
			break;
		
		case joaat("mp_f_freemode_01"):
			return 327;
			break;
	}
	return -99;
}

bool func_493(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == joaat("player_zero"))
	{
		if (iParam1 == 6)
		{
			if (iParam2 == 10)
			{
				return true;
			}
		}
		else if (iParam1 == 8)
		{
			if ((iParam2 == 9 || iParam2 == 7) || iParam2 == 23)
			{
				return true;
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 9 && iParam2 <= 14)
			{
				return true;
			}
		}
		else if (iParam1 == 14)
		{
			if ((((((((((((((((iParam2 == 12 || iParam2 == 59) || iParam2 == 60) || iParam2 == 31) || iParam2 == 32) || iParam2 == 33) || iParam2 == 34) || iParam2 == 35) || iParam2 == 36) || iParam2 == 37) || iParam2 == 38) || iParam2 == 39) || iParam2 == 40) || iParam2 == 41) || (iParam2 >= 42 && iParam2 <= 44)) || iParam2 == 54) || iParam2 == 55)
			{
				return true;
			}
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (iParam1 == 2)
		{
			if (iParam2 == 20)
			{
				return true;
			}
		}
		else if (iParam1 == 8)
		{
			if ((iParam2 == 3 || iParam2 == 5) || iParam2 == 9)
			{
				return true;
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 5 && iParam2 <= 10)
			{
				return true;
			}
		}
		else if (iParam1 == 14)
		{
			if (((((((((((((iParam2 == 82 || iParam2 == 10) || iParam2 == 26) || iParam2 == 27) || iParam2 == 28) || iParam2 == 29) || iParam2 == 30) || iParam2 == 31) || iParam2 == 32) || iParam2 == 33) || iParam2 == 34) || iParam2 == 35) || iParam2 == 36) || (iParam2 >= 37 && iParam2 <= 39))
			{
				return true;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 8)
		{
			if (iParam2 == 14 || iParam2 == 7)
			{
				return true;
			}
		}
		else if (iParam1 == 9)
		{
			if (((iParam2 == 8 || (iParam2 >= 9 && iParam2 <= 14)) || iParam2 == 15) || iParam2 == 16)
			{
				return true;
			}
		}
		else if (iParam1 == 14)
		{
			if (((((((((((((iParam2 == 88 || iParam2 == 12) || iParam2 == 47) || iParam2 == 48) || iParam2 == 49) || iParam2 == 50) || iParam2 == 51) || iParam2 == 52) || iParam2 == 53) || iParam2 == 54) || iParam2 == 55) || iParam2 == 56) || iParam2 == 57) || (iParam2 >= 58 && iParam2 <= 60))
			{
				return true;
			}
		}
	}
	else if (iParam0 == joaat("mp_m_freemode_01"))
	{
		if (iParam1 == 1)
		{
			if (iParam2 > 0)
			{
				if (iParam2 >= 26)
				{
					iVar0 = func_490(iParam0, iParam2, 1, 3);
					if (_0x341DE7ED1D2A1BFD(iVar0, -1757550583, false))
					{
						return false;
					}
				}
				return true;
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		if (iParam1 == 1)
		{
			if (iParam2 > 0)
			{
				if (iParam2 >= 26)
				{
					iVar1 = func_490(iParam0, iParam2, 1, 4);
					if (_0x341DE7ED1D2A1BFD(iVar1, -1757550583, false))
					{
						return false;
					}
				}
				return true;
			}
		}
	}
	return false;
}

int func_494(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			if (iParam1 == 14)
			{
				if ((((((((iParam2 == 58 || iParam2 == 61) || (iParam2 >= 62 && iParam2 <= 69)) || (iParam2 >= 70 && iParam2 <= 79)) || (iParam2 >= 80 && iParam2 <= 89)) || iParam2 == 90) || (iParam2 >= 91 && iParam2 <= 102)) || (iParam2 >= 103 && iParam2 <= 110)) || iParam2 == 111)
				{
					return true;
				}
			}
			break;
		
		case joaat("player_one"):
			if (iParam1 == 14)
			{
				if (((((((((((iParam2 >= 83 && iParam2 <= 92) || iParam2 == 93) || iParam2 == 94) || (iParam2 >= 95 && iParam2 <= 101)) || (iParam2 >= 102 && iParam2 <= 111)) || (iParam2 >= 112 && iParam2 <= 121)) || (iParam2 >= 122 && iParam2 <= 131)) || (iParam2 >= 132 && iParam2 <= 139)) || (iParam2 >= 140 && iParam2 <= 149)) || (iParam2 >= 150 && iParam2 <= 156)) || iParam2 == 157)
				{
					return true;
				}
			}
			break;
		
		case joaat("player_two"):
			if (iParam1 == 14)
			{
				if (((((((((iParam2 == 89 || (iParam2 >= 90 && iParam2 <= 99)) || (iParam2 >= 100 && iParam2 <= 109)) || iParam2 == 111) || iParam2 == 112) || (iParam2 >= 113 && iParam2 <= 122)) || (iParam2 >= 123 && iParam2 <= 132)) || (iParam2 >= 133 && iParam2 <= 142)) || (iParam2 >= 143 && iParam2 <= 152)) || iParam2 == 153)
				{
					return true;
				}
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			if (iParam1 == 14)
			{
				if (iParam2 >= 155 && iParam2 <= 318)
				{
					return true;
				}
				else if (iParam2 >= 327)
				{
					return _0x341DE7ED1D2A1BFD(func_490(iParam0, iParam2, 14, 3), 97230661, true);
				}
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if (iParam1 == 14)
			{
				if (iParam2 >= 155 && iParam2 <= 318)
				{
					return true;
				}
				else if (iParam2 >= 327)
				{
					return _0x341DE7ED1D2A1BFD(func_490(iParam0, iParam2, 14, 4), 97230661, true);
				}
			}
			break;
	}
	return false;
}

bool func_495(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 15)
					{
						return true;
					}
					break;
				
				case 9:
					if (iParam2 == 6)
					{
						return true;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 1 || iParam2 == 10)
					{
						return true;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 4)
					{
						return true;
					}
					break;
			}
			break;
	}
	return false;
}

struct<10> func_496(int iParam0, int iParam1)
{
	int iVar0;
	struct<10> Var1;
	
	Var1 = 9;
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		Var1[iVar0] = -99;
		iVar0++;
	}
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 31:
					func_499(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_499(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_499(&Var1, 19, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_499(&Var1, 14, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_499(&Var1, 18, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_499(&Var1, 0, 59, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_499(&Var1, 0, 60, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_499(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_499(&Var1, 0, 60, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_499(&Var1, 55, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_499(&Var1, 0, 1, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_497(&Var1, iParam0, iParam1, 10);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 31:
					func_499(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_499(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_499(&Var1, 0, 82, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_499(&Var1, 0, 1, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_499(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_499(&Var1, 41, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_499(&Var1, 40, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_499(&Var1, 41, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_499(&Var1, 0, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_499(&Var1, 69, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_497(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 31:
					func_499(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_499(&Var1, 11, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_499(&Var1, 17, 90, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_499(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_499(&Var1, 0, 88, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_499(&Var1, 0, 1, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_499(&Var1, 16, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_499(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_499(&Var1, 0, 123, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_499(&Var1, 69, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_497(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_499(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_499(&Var1, 129, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_499(&Var1, 90, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_499(&Var1, 23, 251, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_499(&Var1, 36, 262, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_499(&Var1, 88, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_499(&Var1, 125, 175, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_499(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_499(&Var1, 44, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_499(&Var1, 52, 189, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_499(&Var1, 0, 261, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_499(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_499(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_499(&Var1, 0, 212, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_499(&Var1, 64, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 14:
					func_499(&Var1, 61, 207, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_499(&Var1, 0, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_499(&Var1, 0, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_499(&Var1, 0, 229, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_499(&Var1, 36, 249, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_499(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_499(&Var1, 0, 174, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_499(&Var1, 35, 180, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_499(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_499(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 24:
					func_499(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_497(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_499(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_499(&Var1, 35, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_499(&Var1, 36, 178, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_499(&Var1, 53, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_499(&Var1, 38, 170, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_499(&Var1, 37, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_499(&Var1, 113, 203, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_499(&Var1, 114, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_499(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_499(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_499(&Var1, 0, 199, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_499(&Var1, 0, 182, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_499(&Var1, 0, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_499(&Var1, 107, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_499(&Var1, 109, 170, 2, 3, 4, 5, 323, 7, 8);
					break;
				
				case 14:
					func_499(&Var1, 119, 237, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_499(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_499(&Var1, 114, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_499(&Var1, 35, 268, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_499(&Var1, 0, 266, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_499(&Var1, 42, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_499(&Var1, 76, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_499(&Var1, 39, 235, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_499(&Var1, 41, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_499(&Var1, 111, 194, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_497(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
	}
	return Var1;
}

void func_497(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<4> Var1;
	vector3 vVar16;
	int iVar19;
	
	if (iParam2 != 0 && iParam2 != -99)
	{
		*iParam0[0] = 0;
		*iParam0[1] = 1;
		*iParam0[2] = 2;
		*iParam0[3] = 3;
		*iParam0[4] = 4;
		*iParam0[5] = 5;
		*iParam0[6] = 6;
		*iParam0[7] = 7;
		*iParam0[8] = 8;
		iVar0 = 0;
		if (iParam1 == joaat("player_zero"))
		{
			iVar0 = 0;
		}
		else if (iParam1 == joaat("player_one"))
		{
			iVar0 = 1;
		}
		else if (iParam1 == joaat("player_two"))
		{
			iVar0 = 2;
		}
		else if (iParam1 == joaat("mp_m_freemode_01"))
		{
			iVar0 = 3;
		}
		else if (iParam1 == joaat("mp_f_freemode_01"))
		{
			iVar0 = 4;
		}
		get_shop_ped_outfit(iParam2, &Var1);
		if (!_is_dlc_data_empty(Var1))
		{
			iVar19 = 0;
			while (iVar19 < Var1.f_3)
			{
				if (_0xA9F9C2E0FDE11CBB(Var1.f_1, iVar19, &vVar16) && vVar16.z != -1)
				{
					if ((vVar16.x != 0 && vVar16.x != -1) && vVar16.x != 1849449579)
					{
						*iParam0[vVar16.z] = func_498(iParam1, vVar16.x, 14, iVar0);
					}
					else if (vVar16.y != -1)
					{
						*iParam0[vVar16.z] = vVar16.y;
					}
				}
				iVar19++;
			}
		}
	}
}

int func_498(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<2> Var0;
	int iVar17;
	int iVar18;
	int iVar19;
	struct<2> Var20;
	int iVar37;
	int iVar38;
	int iVar39;
	
	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		init_shop_ped_prop(&Var0);
		iVar18 = 0;
		iVar19 = _get_num_props_from_outfit(iParam3, 6, -1, 1, -1, -1);
		iVar17 = 0;
		while (iVar17 < iVar19)
		{
			get_shop_ped_query_prop(iVar17, &Var0);
			if (!_is_dlc_data_empty(Var0))
			{
				if (iParam1 == Var0.f_1)
				{
					return func_492(iParam0) + iVar18;
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else
	{
		init_shop_ped_component(&Var20);
		iVar38 = 0;
		iVar39 = _get_num_props_from_outfit(iParam3, 6, -1, 0, -1, func_430(iParam2));
		iVar37 = 0;
		while (iVar37 < iVar39)
		{
			get_shop_ped_query_component(iVar37, &Var20);
			if (!_is_dlc_data_empty(Var20))
			{
				if (iParam1 == Var20.f_1)
				{
					return func_491(iParam0, func_430(iParam2)) + iVar38;
				}
				iVar38++;
			}
			iVar37++;
		}
	}
	return -99;
}

void func_499(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	*iParam0[0] = iParam1;
	*iParam0[1] = iParam2;
	*iParam0[2] = iParam3;
	*iParam0[3] = iParam4;
	*iParam0[4] = iParam5;
	*iParam0[5] = iParam6;
	*iParam0[6] = iParam7;
	*iParam0[7] = iParam8;
	*iParam0[8] = iParam9;
}

struct<16> func_500(int iParam0, int iParam1)
{
	int iVar0;
	struct<16> Var1;
	
	Var1 = 15;
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		Var1[iVar0] = -99;
		iVar0++;
	}
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					if (Global_101154.f_7775.f_99.f_58[120])
					{
						func_503(&Var1, -99, -99, 1, 1, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					else
					{
						func_503(&Var1, -99, -99, 0, 0, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					break;
				
				case 1:
					func_503(&Var1, -99, -99, 16, 16, 6, 1, 1, 0, 1, -99, 0, 0, 0);
					break;
				
				case 2:
					func_503(&Var1, -99, -99, 36, 21, 6, 1, 5, 0, 0, -99, 0, 0, 8);
					break;
				
				case 3:
					func_503(&Var1, -99, -99, 65, 36, 6, 0, 2, 0, 0, -99, 0, 0, 31);
					break;
				
				case 4:
					func_503(&Var1, -99, -99, 61, 32, 6, 0, 0, 7, 3, -99, 0, 0, 2);
					break;
				
				case 5:
					func_503(&Var1, -99, -99, Global_101154.f_1826.f_539.f_196[0], Global_101154.f_1826.f_539.f_200[0], 6, 3, 0, 0, 0, -99, 0, 0, 3);
					break;
				
				case 6:
					func_503(&Var1, -99, -99, 92, 72, 7, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_503(&Var1, -99, -99, 85, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 8:
					func_503(&Var1, -99, -99, 170, 80, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_503(&Var1, -99, -99, 171, 89, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_503(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 4);
					break;
				
				case 11:
					func_503(&Var1, -99, -99, 33, 18, 17, 10, 4, 8, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_503(&Var1, -99, -99, 35, 20, 9, 10, 23, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_503(&Var1, -99, -99, 69, 40, 13, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_503(&Var1, -99, -99, 62, 33, 38, 0, 8, 0, 0, -99, 0, 0, 6);
					break;
				
				case 15:
					func_503(&Var1, -99, -99, 63, 34, 6, 10, 0, 0, 4, -99, 0, 0, 31);
					break;
				
				case 16:
					func_503(&Var1, -99, -99, 174, 93, 18, 0, 18, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_503(&Var1, -99, -99, 76, 46, 6, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_503(&Var1, -99, -99, 35, 20, 9, 10, 0, 4, 0, -99, 0, 0, 7);
					break;
				
				case 19:
					func_503(&Var1, -99, -99, 64, 35, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_503(&Var1, -99, -99, 66, 37, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_503(&Var1, -99, -99, 67, 38, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_503(&Var1, -99, -99, 68, 39, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_503(&Var1, -99, -99, 177, 94, 19, 9, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_503(&Var1, -99, -99, 35, 20, 9, 10, 4, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_503(&Var1, -99, -99, 97, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_503(&Var1, -99, -99, 3, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_503(&Var1, -99, -99, 129, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_503(&Var1, -99, -99, 170, 80, 6, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_503(&Var1, -99, -99, 2, 2, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_503(&Var1, -99, -99, 161, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_503(&Var1, -99, -99, 3, 3, 0, 12, 0, 0, 0, -99, 0, 1, 31);
					break;
				
				case 32:
					func_503(&Var1, -99, -99, 85, 55, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_503(&Var1, -99, -99, 86, 4, 20, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_503(&Var1, -99, -99, 44, 97, 6, 0, 0, 0, 0, -99, 0, 2, 31);
					break;
				
				case 35:
					func_503(&Var1, -99, -99, 85, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_503(&Var1, -99, -99, 4, 4, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_503(&Var1, -99, -99, 5, 5, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_503(&Var1, -99, -99, 6, 6, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_503(&Var1, -99, -99, 7, 7, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_503(&Var1, -99, -99, 8, 8, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_503(&Var1, -99, -99, 9, 9, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_503(&Var1, -99, -99, 10, 10, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_503(&Var1, -99, -99, 11, 11, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_503(&Var1, -99, -99, 12, 12, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_503(&Var1, -99, -99, 13, 13, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 46:
					func_503(&Var1, -99, -99, 14, 14, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_503(&Var1, -99, -99, 15, 15, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 48:
					func_503(&Var1, -99, -99, 91, 71, 14, 13, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 49:
					func_503(&Var1, -99, -99, 35, 20, 9, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 50:
					func_503(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 9);
					break;
				
				case 51:
					func_503(&Var1, -99, -99, 169, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 52:
					func_503(&Var1, -99, -99, 169, 72, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_501(&Var1, iParam0, iParam1, 53);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					func_503(&Var1, -99, -99, 73, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_503(&Var1, -99, -99, 22, 10, 64, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 2:
					func_503(&Var1, -99, -99, Global_101154.f_1826.f_539.f_196[1], Global_101154.f_1826.f_539.f_200[1], 17, 2, 26, 0, 0, -99, 0, 45, 31);
					break;
				
				case 3:
					func_503(&Var1, -99, -99, 23, 11, 13, 5, 2, 4, 0, -99, 0, 0, 1);
					break;
				
				case 4:
					func_503(&Var1, -99, -99, 23, 11, 34, 5, 26, 0, 0, -99, 0, 0, 2);
					break;
				
				case 5:
					func_503(&Var1, -99, 20, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 6:
					func_503(&Var1, -99, -99, 40, 13, 14, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_503(&Var1, -99, -99, 90, 32, 17, 1, 8, 0, 1, -99, 0, 0, 3);
					break;
				
				case 8:
					func_503(&Var1, -99, -99, 17, 5, 12, 0, 26, 0, 2, -99, 0, 0, 5);
					break;
				
				case 9:
					func_503(&Var1, -99, -99, 16, 4, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_503(&Var1, -99, -99, 208, 71, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_503(&Var1, -99, -99, 259, 10, 35, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 12:
					func_503(&Var1, -99, -99, 18, 6, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_503(&Var1, -99, -99, 19, 7, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_503(&Var1, -99, -99, 20, 8, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_503(&Var1, -99, -99, 21, 9, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_503(&Var1, -99, -99, 135, 40, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_503(&Var1, -99, -99, 74, 24, 52, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_503(&Var1, -99, -99, 176, 53, 26, 5, 26, 0, 0, -99, 0, 41, 31);
					break;
				
				case 19:
					func_503(&Var1, -99, -99, 125, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_503(&Var1, -99, -99, 162, 24, 36, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_503(&Var1, -99, -99, 75, 24, 36, 0, 26, 0, 0, -99, 0, 0, 4);
					break;
				
				case 22:
					func_503(&Var1, -99, -99, 227, 53, 25, 0, 27, 0, 0, -99, 0, 25, 31);
					break;
				
				case 23:
					func_503(&Var1, -99, -99, 228, 54, 25, 0, 28, 0, 0, -99, 0, 26, 31);
					break;
				
				case 24:
					func_503(&Var1, -99, -99, 229, 55, 25, 0, 29, 0, 0, -99, 0, 27, 31);
					break;
				
				case 25:
					func_503(&Var1, -99, -99, 230, 56, 25, 0, 30, 0, 0, -99, 0, 28, 31);
					break;
				
				case 26:
					func_503(&Var1, -99, -99, 231, 57, 25, 0, 31, 0, 0, -99, 0, 29, 31);
					break;
				
				case 27:
					func_503(&Var1, -99, -99, 232, 58, 25, 0, 32, 0, 0, -99, 0, 30, 31);
					break;
				
				case 28:
					func_503(&Var1, -99, -99, 233, 59, 25, 0, 33, 0, 0, -99, 0, 31, 31);
					break;
				
				case 29:
					func_503(&Var1, -99, -99, 234, 60, 25, 0, 34, 0, 0, -99, 0, 32, 31);
					break;
				
				case 30:
					func_503(&Var1, -99, -99, 235, 61, 25, 0, 35, 0, 0, -99, 0, 33, 31);
					break;
				
				case 31:
					func_503(&Var1, -99, -99, 236, 62, 25, 0, 36, 0, 0, -99, 0, 34, 31);
					break;
				
				case 32:
					func_503(&Var1, -99, -99, 237, 63, 25, 0, 37, 0, 0, -99, 0, 35, 31);
					break;
				
				case 33:
					func_503(&Var1, -99, -99, 238, 64, 25, 0, 38, 0, 0, -99, 0, 36, 31);
					break;
				
				case 34:
					func_503(&Var1, -99, -99, 239, 65, 25, 0, 39, 0, 0, -99, 0, 37, 31);
					break;
				
				case 35:
					func_503(&Var1, -99, -99, 240, 66, 25, 0, 40, 0, 0, -99, 0, 38, 31);
					break;
				
				case 36:
					func_503(&Var1, -99, -99, 241, 67, 25, 0, 41, 0, 0, -99, 0, 39, 31);
					break;
				
				case 37:
					func_503(&Var1, -99, -99, 242, 68, 25, 0, 42, 0, 0, -99, 0, 40, 31);
					break;
				
				case 38:
					func_503(&Var1, -99, -99, 260, 72, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_503(&Var1, -99, -99, 125, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_503(&Var1, -99, -99, 123, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_503(&Var1, -99, -99, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_503(&Var1, -99, -99, 89, 22, 15, 6, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_503(&Var1, -99, -99, 317, 69, 17, 0, 0, 0, 51, -99, 0, 0, 6);
					break;
				
				case 44:
					func_503(&Var1, -99, -99, 30, 23, 16, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 45:
					func_503(&Var1, -99, -99, 106, 70, 17, 5, 26, 0, 0, -99, 0, 0, 8);
					break;
				
				case 46:
					func_503(&Var1, -99, -99, 117, 24, 20, 5, 26, 0, 52, -99, 0, 0, 31);
					break;
				
				default:
					func_501(&Var1, iParam0, iParam1, 47);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					func_503(&Var1, -99, -99, 0, 91, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_503(&Var1, -99, -99, 17, 5, 8, 2, 3, 0, 0, -99, 0, 0, 8);
					break;
				
				case 2:
					func_503(&Var1, -99, -99, 43, 8, 12, 3, 5, 0, 0, -99, 0, 0, 1);
					break;
				
				case 3:
					func_503(&Var1, -99, -99, 50, 14, 8, 0, 15, 6, 3, -99, 0, 0, 2);
					break;
				
				case 4:
					func_503(&Var1, -99, -99, Global_101154.f_1826.f_539.f_196[2], Global_101154.f_1826.f_539.f_200[2], 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 5:
					func_503(&Var1, -99, -99, 95, 33, 8, 0, 15, 0, 0, -99, 0, 0, 6);
					break;
				
				case 6:
					func_503(&Var1, -99, -99, 49, 13, 10, 4, 6, 0, 0, -99, 0, 0, 3);
					break;
				
				case 7:
					func_503(&Var1, -99, -99, 49, 13, 14, 4, 15, 0, 0, -99, 0, 0, 4);
					break;
				
				case 8:
					func_503(&Var1, -99, -99, 79, 32, 8, 5, 7, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_503(&Var1, -99, -99, 53, 17, 11, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_503(&Var1, -99, -99, 96, 81, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_503(&Var1, -99, -99, 51, 15, 33, 0, 8, 0, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_503(&Var1, -99, -99, 0, 93, 29, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_503(&Var1, -99, -99, 52, 16, 30, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_503(&Var1, -99, -99, 241, 92, 16, 0, 12, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_503(&Var1, -99, -99, 97, 34, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_503(&Var1, -99, -99, 44, 9, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_503(&Var1, -99, -99, 45, 10, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_503(&Var1, -99, -99, 46, 11, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 19:
					func_503(&Var1, -99, -99, 47, 12, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_503(&Var1, -99, -99, 161, 53, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_503(&Var1, -99, -99, 0, 44, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_503(&Var1, -99, -99, 98, 0, 28, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_503(&Var1, -99, -99, 27, 0, 31, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_503(&Var1, -99, -99, 190, 71, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_503(&Var1, -99, -99, 191, 72, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_503(&Var1, -99, -99, 192, 73, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_503(&Var1, -99, -99, 193, 74, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_503(&Var1, -99, -99, 194, 75, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_503(&Var1, -99, -99, 195, 76, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_503(&Var1, -99, -99, 196, 77, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_503(&Var1, -99, -99, 197, 78, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 32:
					func_503(&Var1, -99, -99, 198, 79, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_503(&Var1, -99, -99, 199, 80, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_503(&Var1, -99, -99, 200, 62, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 35:
					func_503(&Var1, -99, -99, 201, 63, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_503(&Var1, -99, -99, 202, 64, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_503(&Var1, -99, -99, 203, 65, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_503(&Var1, -99, -99, 204, 66, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_503(&Var1, -99, -99, 205, 67, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_503(&Var1, -99, -99, 206, 68, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_503(&Var1, -99, -99, 2, 43, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_503(&Var1, -99, -99, 55, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_503(&Var1, -99, -99, 0, 52, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_503(&Var1, -99, -99, 70, 30, 32, 6, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_503(&Var1, -99, -99, 19, 91, 28, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 46:
					func_503(&Var1, -99, -99, 0, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_503(&Var1, -99, -99, 79, 32, 8, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_501(&Var1, iParam0, iParam1, 48);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_503(&Var1, -99, -99, 0, 0, 10, -99, 0, -99, -99, 0, 0, 0, 31);
					break;
				
				case 1:
					func_503(&Var1, -99, -99, 1, 127, 38, -99, 2, 0, 0, 0, 0, 62, 0);
					break;
				
				case 2:
					func_503(&Var1, -99, -99, 0, 248, 45, -99, 240, 0, 0, 0, 0, 144, 1);
					break;
				
				case 3:
					func_503(&Var1, -99, -99, 4, 31, 25, -99, 240, 0, 0, 0, 0, 231, 2);
					break;
				
				case 4:
					func_503(&Var1, -99, -99, 1, 66, 10, -99, 21, 0, 0, 0, 0, 123, 3);
					break;
				
				case 5:
					func_503(&Var1, -99, -99, 1, 93, 141, -99, 3, 0, 0, 0, 0, 114, 4);
					break;
				
				case 6:
					func_503(&Var1, -99, -99, 1, 116, 113, -99, 7, 0, 0, 0, 0, 113, 5);
					break;
				
				case 7:
					func_503(&Var1, -99, -99, 1, 61, 136, -99, 27, 0, 0, 0, 0, 61, 6);
					break;
				
				case 8:
					func_503(&Var1, -99, -99, 0, 112, 10, -99, 240, 0, 0, 0, 0, 8, 7);
					break;
				
				case 9:
					func_503(&Var1, -99, -99, 4, 131, 24, -99, 240, 0, 0, 0, 0, 223, 8);
					break;
				
				case 10:
					func_503(&Var1, -99, -99, 1, 209, 188, -99, 208, 0, 0, 0, 0, 64, 9);
					break;
				
				case 11:
					func_503(&Var1, -99, -99, 1, 209, 160, -99, 211, 0, 0, 0, 43, 157, 10);
					break;
				
				case 12:
					func_503(&Var1, -99, -99, 1, 162, 174, -99, 201, 0, 0, 0, 0, 158, 11);
					break;
				
				case 13:
					func_503(&Var1, -99, -99, 1, 4, 240, -99, 34, 0, 0, 0, 0, 97, 12);
					break;
				
				case 14:
					func_503(&Var1, -99, -99, 1, 128, 232, -99, 43, 0, 0, 0, 0, 102, 13);
					break;
				
				case 15:
					func_503(&Var1, -99, -99, 1, 66, 65, -99, 224, 0, 0, 0, 0, 100, 14);
					break;
				
				case 16:
					func_503(&Var1, -99, -99, 1, 65, 172, -99, 202, 0, 0, 0, 0, 64, 15);
					break;
				
				case 17:
					func_503(&Var1, -99, -99, 1, 64, 10, -99, 1, 0, 0, 0, 0, 66, 16);
					break;
				
				case 18:
					func_503(&Var1, -99, -99, 5, 98, 80, -99, 240, 0, 0, 0, 0, 87, 17);
					break;
				
				case 19:
					func_503(&Var1, -99, -99, 5, 192, 96, -99, 240, 0, 0, 0, 0, 80, 18);
					break;
				
				case 20:
					func_503(&Var1, -99, -99, 1, 124, 96, -99, 11, 0, 0, 0, 0, 110, 19);
					break;
				
				case 21:
					func_503(&Var1, -99, -99, 0, 80, 114, -99, 240, 0, 0, 0, 0, 2, 20);
					break;
				
				case 22:
					func_503(&Var1, -99, -99, 6, 43, 112, -99, 82, 0, 0, 0, 0, 48, 21);
					break;
				
				case 23:
					func_503(&Var1, -99, -99, 1, 116, 144, -99, 2, 0, 0, 0, 0, 108, 22);
					break;
				
				case 24:
					func_503(&Var1, -99, -99, 1, 63, 38, -99, 3, 0, 0, 0, 0, 63, 23);
					break;
				
				case 25:
					func_503(&Var1, -99, -99, 2, 64, 10, -99, 240, 0, 0, 0, 0, 41, 24);
					break;
				
				default:
					func_501(&Var1, iParam0, iParam1, 26);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_503(&Var1, -99, -99, 0, 0, 0, -99, 0, -99, -99, 0, -99, 0, 31);
					break;
				
				case 1:
					func_503(&Var1, -99, -99, 5, 136, 241, -99, 47, 0, 0, 0, 0, 21, 31);
					break;
				
				case 2:
					func_503(&Var1, -99, -99, 4, 1, 96, -99, 32, 0, 0, 0, 7, 215, 0);
					break;
				
				case 3:
					func_503(&Var1, -99, -99, 1, 73, 241, -99, 3, 0, 0, 0, 0, 25, 1);
					break;
				
				case 4:
					func_503(&Var1, -99, -99, 2, 88, 217, -99, 32, 0, 0, 0, 0, 33, 2);
					break;
				
				case 5:
					func_503(&Var1, -99, -99, 9, 7, 98, -99, 32, 0, 0, 0, 7, 153, 3);
					break;
				
				case 6:
					func_503(&Var1, -99, -99, 1, 140, 241, -99, 7, 0, 0, 0, 31, 16, 4);
					break;
				
				case 7:
					func_503(&Var1, -99, -99, 4, 139, 112, -99, 32, 0, 0, 0, 49, 78, 5);
					break;
				
				case 8:
					func_503(&Var1, -99, -99, 1, 193, 48, -99, 108, 0, 0, 0, 0, 17, 6);
					break;
				
				case 9:
					func_503(&Var1, -99, -99, 5, 114, 97, -99, 103, 0, 0, 0, 0, 98, 7);
					break;
				
				case 10:
					func_503(&Var1, -99, -99, 9, 134, 239, -99, 32, 0, 0, 0, 2, 144, 8);
					break;
				
				case 11:
					func_503(&Var1, -99, -99, 5, 152, 96, -99, 10, 0, 0, 0, 31, 96, 9);
					break;
				
				case 12:
					func_503(&Var1, -99, -99, 6, 129, 1, -99, 96, 0, 0, 0, 5, 120, 10);
					break;
				
				case 13:
					func_503(&Var1, -99, -99, 5, 0, 0, -99, 10, 0, 0, 0, 0, 130, 31);
					break;
				
				case 14:
					func_503(&Var1, -99, -99, 4, 159, 96, -99, 32, 0, 0, 0, 22, 214, 11);
					break;
				
				case 15:
					func_503(&Var1, -99, -99, 9, 232, 213, -99, 32, 0, 0, 0, 22, 147, 12);
					break;
				
				case 16:
					func_503(&Var1, -99, -99, 2, 8, 98, -99, 32, 0, 0, 0, 33, 39, 13);
					break;
				
				case 17:
					func_503(&Var1, -99, -99, 5, 150, 235, -99, 106, 0, 0, 0, 0, 128, 14);
					break;
				
				case 18:
					func_503(&Var1, -99, -99, 6, 96, 97, -99, 7, 0, 0, 0, 32, 114, 15);
					break;
				
				case 19:
					func_503(&Var1, -99, -99, 4, 48, 64, -99, 32, 0, 0, 0, 0, 89, 16);
					break;
				
				case 20:
					func_503(&Var1, -99, -99, 4, 62, 64, -99, 32, 0, 0, 0, 0, 78, 17);
					break;
				
				case 21:
					func_503(&Var1, -99, -99, 4, 49, 65, -99, 32, 0, 0, 0, 8, 80, 31);
					break;
				
				case 22:
					func_503(&Var1, -99, -99, 3, 20, 16, -99, 32, 0, 0, 0, 0, 49, 18);
					break;
				
				case 23:
					func_503(&Var1, -99, -99, 0, 73, 178, -99, 32, 0, 0, 0, 38, 11, 19);
					break;
				
				case 24:
					func_503(&Var1, -99, -99, 5, 135, 53, -99, 9, 0, 0, 0, 29, 27, 20);
					break;
				
				case 25:
					func_503(&Var1, -99, -99, 7, 233, 176, -99, 120, 0, 0, 0, 11, 160, 21);
					break;
				
				case 26:
					func_503(&Var1, -99, -99, 4, 34, 179, -99, 32, 0, 0, 0, 0, 77, 22);
					break;
				
				case 27:
					func_503(&Var1, -99, -99, 15, 131, 93, -99, 32, 0, 0, 0, 0, 250, 23);
					break;
				
				default:
					func_501(&Var1, iParam0, iParam1, 28);
					break;
			}
			break;
	}
	return Var1;
}

void func_501(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<5> Var1;
	vector3 vVar16;
	int iVar19;
	
	*iParam0[0] = 0;
	*iParam0[2] = -99;
	*iParam0[3] = 0;
	*iParam0[4] = 0;
	*iParam0[6] = 0;
	*iParam0[5] = 0;
	*iParam0[8] = 0;
	*iParam0[9] = 0;
	*iParam0[10] = 0;
	*iParam0[1] = 0;
	*iParam0[7] = 0;
	*iParam0[11] = 0;
	*iParam0[13] = -99;
	*iParam0[14] = -99;
	iVar0 = 0;
	if (iParam1 == joaat("player_zero"))
	{
		iVar0 = 0;
		*iParam0[13] = 10 + iParam2 - iParam3;
	}
	else if (iParam1 == joaat("player_one"))
	{
		iVar0 = 1;
		*iParam0[13] = 9 + iParam2 - iParam3;
	}
	else if (iParam1 == joaat("player_two"))
	{
		iVar0 = 2;
		*iParam0[13] = 9 + iParam2 - iParam3;
	}
	else if (iParam1 == joaat("mp_m_freemode_01"))
	{
		iVar0 = 3;
	}
	else if (iParam1 == joaat("mp_f_freemode_01"))
	{
		iVar0 = 4;
	}
	_0xF3FBE2D50A6A8C28(iVar0, 0);
	get_shop_ped_query_outfit(iParam2 - iParam3, &Var1);
	if (!_is_dlc_data_empty(Var1))
	{
		iVar19 = 0;
		while (iVar19 < Var1.f_4)
		{
			if (_get_prop_from_outfit(Var1.f_1, iVar19, &vVar16))
			{
				if ((vVar16.x != 0 && vVar16.x != -1) && vVar16.x != 1849449579)
				{
					if (vVar16.z == 10)
					{
						*iParam0[func_502(vVar16.z)] = vVar16.x;
					}
					else
					{
						*iParam0[func_502(vVar16.z)] = func_498(iParam1, vVar16.x, func_502(vVar16.z), iVar0);
					}
				}
				else if (vVar16.y != -1)
				{
					*iParam0[func_502(vVar16.z)] = vVar16.y;
				}
			}
			iVar19++;
		}
		if (Var1.f_3 == 0)
		{
			*iParam0[13] = -99;
		}
		else
		{
			*iParam0[13] = Var1.f_1;
		}
	}
}

int func_502(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 6:
			return 6;
			break;
		
		case 5:
			return 5;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
			break;
		
		case 10:
			return 10;
			break;
		
		case 1:
			return 1;
			break;
		
		case 7:
			return 7;
			break;
		
		case 11:
			return 11;
			break;
	}
	return 0;
}

void func_503(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	*iParam0[0] = iParam1;
	*iParam0[2] = iParam2;
	*iParam0[3] = iParam3;
	*iParam0[4] = iParam4;
	*iParam0[6] = iParam5;
	*iParam0[5] = iParam6;
	*iParam0[8] = iParam7;
	*iParam0[9] = iParam8;
	*iParam0[10] = iParam9;
	*iParam0[1] = iParam10;
	*iParam0[7] = iParam11;
	*iParam0[11] = iParam12;
	*iParam0[13] = iParam13;
	*iParam0[14] = -99;
}

int func_504(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = get_entity_model(iParam0);
	iVar0 = func_486(iParam0, 4);
	return func_505(iVar1, 4, iVar0);
}

bool func_505(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == joaat("player_zero"))
	{
		if (iParam1 == 4)
		{
			if (iParam2 >= 72 && iParam2 <= 79)
			{
				return true;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 == 169 || (iParam2 >= 92 && iParam2 <= 96))
			{
				return true;
			}
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (iParam1 == 4)
		{
			if (iParam2 >= 72 && iParam2 <= 77)
			{
				return true;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 == 260)
			{
				return true;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 4)
		{
			if ((iParam2 >= 81 && iParam2 <= 90) || (iParam2 >= 94 && iParam2 <= 103))
			{
				return true;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 == 96)
			{
				return true;
			}
		}
	}
	return false;
}

void func_506(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<65> Var2;
	int iVar67;
	
	if (!is_ped_injured(iParam0))
	{
		iVar0 = func_148(iParam0);
		if (func_147(iVar0))
		{
			if (iVar0 == 2)
			{
				iVar1 = func_647(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					func_646(iVar0);
					func_508(iParam0, &(Global_101154.f_1826.f_539[iVar0 /*65*/]), 0);
				}
			}
			Var2 = 12;
			Var2.f_13 = 12;
			Var2.f_26 = 12;
			Var2.f_39 = 9;
			Var2.f_49 = 9;
			func_131(iParam0, &Var2, 1);
			Global_91068[iVar0 /*65*/] = {Var2};
			if (iParam0 == player_ped_id())
			{
				func_129();
			}
			if (get_hash_key(get_this_script_name()) != get_hash_key("clothes_shop_sp") || (_get_number_of_instances_of_streamed_script(joaat("lester1")) == 0 && _get_number_of_instances_of_streamed_script(joaat("michael4")) == 0))
			{
				if (iParam1 || ((((((!func_13(0) && !func_13(1)) && !func_13(2)) && !func_13(3)) && !func_13(4)) && !func_13(9)) && !func_13(10)))
				{
					Global_101154.f_1826.f_539[iVar0 /*65*/] = {Var2};
					Global_101154.f_1826.f_539.f_1619[iVar0] = func_507(iParam0);
					iVar67 = 0;
					while (iVar67 < 12)
					{
						Global_101154.f_1826.f_539.f_204[iVar67 /*4*/][iVar0] = func_486(iParam0, func_502(iVar67));
						iVar67++;
					}
					iVar67 = 0;
					while (iVar67 < 12)
					{
						Global_101154.f_1826.f_539.f_204[iVar67 /*4*/][iVar0] = func_486(iParam0, func_502(iVar67));
						iVar67++;
					}
					if (iVar0 == 0)
					{
						if (Global_101154.f_7775.f_99.f_58[121])
						{
							Global_101154.f_7775.f_99.f_58[122] = 1;
						}
					}
				}
			}
		}
	}
}

int func_507(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar4 = iVar1;
		iVar3 = get_number_of_ped_drawable_variations(iParam0, iVar4);
		iVar2 = 0;
		while (iVar2 < iVar3)
		{
			iVar0 += get_number_of_ped_texture_variations(iParam0, iVar4, iVar2);
			iVar2++;
		}
		iVar1++;
	}
	iVar5 = 0;
	while (iVar5 < 9)
	{
		iVar8 = iVar5;
		iVar7 = get_number_of_ped_prop_drawable_variations(iParam0, iVar8);
		iVar6 = 0;
		while (iVar6 < iVar7)
		{
			iVar0 += get_number_of_ped_prop_texture_variations(iParam0, iVar8, iVar6);
			iVar6++;
		}
		iVar5++;
	}
	return iVar0;
}

void func_508(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!is_ped_injured(iParam0))
	{
		iVar0 = func_148(iParam0);
		iVar1 = get_entity_model(iParam0);
		iVar3 = false;
		while (iVar3 < 12)
		{
			if (iVar3 != 1 || (iVar3 == 1 && !iParam2))
			{
				set_ped_component_variation(iParam0, iVar3, *uParam1.f_13[iVar3], *uParam1[iVar3], *uParam1.f_26[iVar3]);
			}
			iVar3++;
		}
		iVar3 = false;
		while (iVar3 < 9)
		{
			if (*uParam1.f_39[iVar3] != -1 && *uParam1.f_39[iVar3] != 255)
			{
				set_ped_prop_index(iParam0, iVar3, *uParam1.f_39[iVar3], *uParam1.f_49[iVar3], false);
			}
			else
			{
				clear_ped_prop(iParam0, iVar3);
			}
			iVar3++;
		}
		if (func_147(iVar0))
		{
			Global_101154.f_1826.f_539[iVar0 /*65*/].f_59 = *uParam1.f_59;
			Global_101154.f_1826.f_539[iVar0 /*65*/].f_60 = *uParam1.f_60;
			Global_101154.f_1826.f_539[iVar0 /*65*/].f_61 = *uParam1.f_61;
			if (func_645(iParam0, iVar1, &iVar2, 0))
			{
				func_648(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
			Global_101154.f_1826.f_539[iVar0 /*65*/].f_62 = *uParam1.f_62;
			Global_101154.f_1826.f_539[iVar0 /*65*/].f_63 = *uParam1.f_63;
			Global_101154.f_1826.f_539[iVar0 /*65*/].f_64 = *uParam1.f_64;
			if (func_643(iParam0, iVar1, &iVar2))
			{
				func_648(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
		}
		else if (network_is_game_in_progress() && get_entity_model(iParam0) == get_entity_model(player_ped_id()))
		{
			func_642(746, *uParam1.f_60, Global_69309, 1);
			func_642(747, *uParam1.f_61, Global_69309, 1);
			iVar4 = func_487(iParam0, *uParam1.f_13[2], *uParam1[2], 2);
			func_511(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, Global_69309, 0);
			if (!iParam2)
			{
				iVar5 = func_487(iParam0, *uParam1.f_13[1], *uParam1[1], 1);
				func_511(iParam0, 1, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_69309, 0);
			}
		}
		if (network_is_game_in_progress() && iParam0 == player_ped_id())
		{
			func_642(745, *uParam1.f_59, Global_69309, 1);
			func_642(2043, *uParam1.f_59, Global_69309, 1);
			func_509(161, 1, -1, 1);
		}
	}
}

void func_509(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_510())
	{
		iVar0 = Global_2490231[iParam0 /*5*/][func_35(iParam2)];
		if (iVar0 != 0)
		{
			stat_set_bool(iVar0, iParam1, iParam3);
		}
	}
}

bool func_510()
{
	return true;
	return false;
}

bool func_511(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	var uVar31;
	var uVar41;
	int iVar57;
	var uVar58;
	int iVar68;
	int iVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	int iVar75;
	int iVar76;
	int iVar77;
	int iVar78;
	int iVar79;
	int iVar80;
	int iVar81;
	int iVar82;
	int iVar83;
	int iVar84;
	int iVar85;
	int iVar86;
	int iVar87;
	int iVar88;
	int iVar89;
	int iVar90;
	int iVar91;
	float fVar92;
	int iVar93;
	int iVar94;
	int iVar95;
	int iVar96;
	int iVar97;
	int iVar98;
	int iVar99;
	int iVar100;
	int iVar101;
	int iVar102;
	int iVar103;
	int iVar104;
	int iVar105;
	int iVar106;
	int iVar107;
	int iVar108;
	int iVar109;
	var uVar110;
	int iVar111;
	int iVar112;
	int iVar113;
	int iVar114;
	int iVar115;
	int iVar116;
	var uVar117;
	int iVar118;
	int iVar119;
	int iVar120;
	int iVar121;
	int iVar122;
	
	if (!network_is_game_in_progress())
	{
		if ((Global_1315845 != 4 && Global_1315845 != 5) && Global_1315845 != 7)
		{
			return false;
		}
	}
	if (is_ped_injured(iParam0) || iParam2 == -99)
	{
		return false;
	}
	if (iParam0 == player_ped_id() && Global_2418472[player_id() /*313*/].f_220 == 2)
	{
		return false;
	}
	Global_69310++;
	iVar5 = get_entity_model(iParam0);
	iVar6 = -99;
	iVar7 = -99;
	iVar8 = -1;
	iVar9 = -99;
	iVar10 = -99;
	iVar11 = -1;
	iVar12 = -1;
	if (iParam5 == 0)
	{
		Global_69311[1 /*14*/] = {func_609(iVar5, iParam1, iParam2)};
		if (!func_608(iParam3))
		{
			Global_69310--;
			return false;
		}
		func_605(iVar5, iParam1, iParam2, 1);
	}
	if (iParam1 == 12)
	{
		uVar13 = Global_2621444;
		uVar14 = Global_2621445;
		clear_all_ped_props(iParam0);
		uVar15 = 15;
		if (iParam5 == 1)
		{
			uVar15 = {Global_69354};
		}
		else
		{
			uVar15 = {func_500(iVar5, iParam2)};
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar15[iVar0] != -99)
			{
				if (iVar0 == 10)
				{
					Global_69311[1 /*14*/] = {func_609(iVar5, 10, 0)};
					if (iParam4 == -1)
					{
						set_ped_component_variation(iParam0, func_430(iVar0), Global_69311[1 /*14*/].f_3, Global_69311[1 /*14*/].f_4, get_ped_palette_variation(iParam0, func_430(iVar0)));
					}
					else
					{
						set_ped_component_variation(iParam0, func_430(iVar0), Global_69311[1 /*14*/].f_3, Global_69311[1 /*14*/].f_4, iParam4);
					}
					if (is_bit_set(Global_69311[1 /*14*/].f_6, true))
					{
						func_605(iVar5, 10, 0, 1);
					}
				}
				else
				{
					Global_69311[1 /*14*/] = {func_609(iVar5, iVar0, uVar15[iVar0])};
					if (is_bit_set(Global_69311[1 /*14*/].f_6, false) || iVar0 == 13)
					{
						if (iVar0 == 13)
						{
							uVar31 = 9;
							if (iParam5 == 1)
							{
								uVar31 = {Global_69370};
							}
							else
							{
								uVar31 = {func_496(iVar5, uVar15[iVar0])};
							}
							iVar1 = 0;
							while (iVar1 <= 8)
							{
								Global_69311[1 /*14*/] = {func_609(iVar5, 14, uVar31[iVar1])};
								func_604(iParam0, Global_69311[1 /*14*/].f_12, Global_69311[1 /*14*/].f_3, Global_69311[1 /*14*/].f_4);
								if (is_bit_set(Global_69311[1 /*14*/].f_6, true))
								{
									func_605(iVar5, iVar0, uVar15[iVar0], 1);
								}
								iVar1++;
							}
						}
						else if (iVar0 != 14 && iVar0 != 12)
						{
							if (iVar0 != 1)
							{
								if (iParam4 == -1)
								{
									set_ped_component_variation(iParam0, func_430(iVar0), Global_69311[1 /*14*/].f_3, Global_69311[1 /*14*/].f_4, get_ped_palette_variation(iParam0, func_430(iVar0)));
								}
								else
								{
									set_ped_component_variation(iParam0, func_430(iVar0), Global_69311[1 /*14*/].f_3, Global_69311[1 /*14*/].f_4, iParam4);
								}
							}
							else
							{
								func_511(iParam0, iVar0, uVar15[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
							}
							if (is_bit_set(Global_69311[1 /*14*/].f_6, true))
							{
								func_605(iVar5, iVar0, uVar15[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_69311[1 /*14*/] = {func_609(iVar5, iVar0, func_603(iParam0, iVar0, -1))};
				if (is_bit_set(Global_69311[1 /*14*/].f_6, 3))
				{
					uVar41 = {func_500(iVar5, 0)};
					func_511(iParam0, iVar0, uVar41[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
			}
			iVar0++;
		}
		Global_2621444 = uVar13;
		Global_2621445 = uVar14;
		if (iParam5 == 0)
		{
			iVar57 = func_602();
			if (iVar57 != -1)
			{
				func_600(iVar57, 0, Global_69309);
			}
			func_598(iParam0, 11, uVar15[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar58 = {func_496(iVar5, iParam2)};
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_69311[1 /*14*/] = {func_609(iVar5, 14, uVar58[iVar1])};
			func_604(iParam0, Global_69311[1 /*14*/].f_12, Global_69311[1 /*14*/].f_3, Global_69311[1 /*14*/].f_4);
			if (is_bit_set(Global_69311[1 /*14*/].f_6, true))
			{
				func_605(iVar5, 14, uVar58[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_69310 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = func_596(iParam0, iVar5, 14, uVar58[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_511(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
						}
						iVar2++;
					}
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		iVar68 = get_hash_name_for_component(iParam0, true, get_ped_drawable_variation(iParam0, true), get_ped_texture_variation(iParam0, true));
		if (_0x341DE7ED1D2A1BFD(iVar68, 838607662, false))
		{
			iVar69 = func_486(iParam0, 1);
			iVar3 = func_596(iParam0, iVar5, 1, iVar69, 14, Global_69311[1 /*14*/].f_12);
			if (iVar3 != -99 && iVar3 != iParam2)
			{
				iVar7 = func_595(iVar5, 1, -1);
			}
		}
		func_604(iParam0, Global_69311[1 /*14*/].f_12, Global_69311[1 /*14*/].f_3, Global_69311[1 /*14*/].f_4);
		if (is_bit_set(Global_69311[1 /*14*/].f_6, true))
		{
			func_605(iVar5, iParam1, iParam2, 1);
		}
		if (iParam5 == 0)
		{
			if (Global_69310 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_596(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_511(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar2++;
				}
			}
		}
	}
	else
	{
		if (iParam1 == 11)
		{
			if (iParam5 == 0)
			{
				iVar70 = -1;
				if (is_bit_set(Global_69311[1 /*14*/].f_6, 6) && _0x341DE7ED1D2A1BFD(Global_2621444, -1996375172, 11))
				{
					_0xCC9682B8951C5229(iParam0, Global_1317072, Global_1317073, Global_1317074, 0);
					_0xCC9682B8951C5229(iParam0, Global_1317072, Global_1317073, Global_1317074, 1);
					_0xCC9682B8951C5229(iParam0, Global_1317072, Global_1317073, Global_1317074, 2);
					_0xCC9682B8951C5229(iParam0, Global_1317072, Global_1317073, Global_1317074, 3);
				}
				iVar71 = func_486(iParam0, 11);
				iVar72 = func_486(iParam0, 8);
				iVar73 = func_486(iParam0, 4);
				iVar8 = get_hash_name_for_component(iParam0, 8, get_ped_drawable_variation(iParam0, 8), get_ped_texture_variation(iParam0, 8));
				if (_0x341DE7ED1D2A1BFD(iVar8, 240476421, 8))
				{
					if (iVar5 == joaat("mp_m_freemode_01"))
					{
						iVar70 = func_490(iVar5, iParam2, 11, 3);
					}
					else if (iVar5 == joaat("mp_f_freemode_01"))
					{
						iVar70 = func_490(iVar5, iParam2, 11, 4);
					}
					if (((_0x341DE7ED1D2A1BFD(iVar70, 320460654, false) || _0x341DE7ED1D2A1BFD(iVar70, -2017999390, false)) || _0x341DE7ED1D2A1BFD(iVar70, -1410897066, false)) || _0x341DE7ED1D2A1BFD(iVar70, -826135203, false))
					{
					}
					else
					{
						iVar9 = func_486(iParam0, 8);
					}
				}
				iVar74 = get_hash_name_for_component(iParam0, 3, get_ped_drawable_variation(iParam0, 3), false);
				if (_0x341DE7ED1D2A1BFD(iVar74, -356646862, false))
				{
					iVar75 = func_594(iVar5, iVar72, iVar71, iVar73);
					if (iVar75 == -99)
					{
						iVar75 = func_596(iParam0, iVar5, 11, iVar71, 3, 0);
					}
					switch (iVar74)
					{
						case 1165919867:
						case 1606204151:
						case 1774276352:
						case 1934254610:
						case 980775017:
						case 399321881:
							iVar75 = 11;
							iVar70 = func_490(iVar5, iParam2, 11, 4);
							if (!_0x341DE7ED1D2A1BFD(iVar70, -530089825, false))
							{
								iVar75 = -99;
							}
							break;
					}
					if (iVar75 != -99)
					{
						iVar76 = iVar75;
						iVar77 = 0;
						while (iVar77 < 15)
						{
							if (func_593(iVar5, iVar76, iVar77) == iVar74)
							{
								iVar11 = iVar77;
								iVar12 = get_ped_texture_variation(iParam0, 3);
							}
							iVar77++;
						}
					}
				}
				iVar70 = -1;
				if ((iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 256) && _0x341DE7ED1D2A1BFD(func_490(iVar5, iParam2, 11, 4), -1200513218, false))
				{
					iVar71 = func_486(iParam0, 11);
					if (iVar71 >= 256)
					{
						iVar70 = func_490(iVar5, iVar71, 11, 4);
					}
					if (iVar71 >= 256 && _0x341DE7ED1D2A1BFD(iVar70, 1965569012, false))
					{
						iVar78 = func_591(iVar5, iVar71, iParam2, get_ped_texture_variation(iParam0, 11));
						if (iVar78 != -99)
						{
							func_511(iParam0, 8, iVar78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
							Global_69311[1 /*14*/] = {func_609(iVar5, iParam1, iParam2)};
						}
					}
				}
				else if (func_590(iVar5, iParam2))
				{
					if (iVar5 == joaat("mp_m_freemode_01"))
					{
						if (iVar71 >= 237)
						{
							iVar70 = func_490(iVar5, iVar71, 11, 3);
						}
					}
					else if (iVar5 == joaat("mp_f_freemode_01"))
					{
						if (iVar71 >= 256)
						{
							iVar70 = func_490(iVar5, iVar71, 11, 4);
						}
					}
					if (!func_590(iVar5, iVar71))
					{
						if ((iVar5 == joaat("mp_f_freemode_01") && iVar71 >= 256) && (_0x341DE7ED1D2A1BFD(iVar70, -1200513218, false) || _0x341DE7ED1D2A1BFD(iVar70, 1965569012, false)))
						{
						}
						else if ((iVar5 == joaat("mp_f_freemode_01") && iVar71 >= 256) && ((((((_0x341DE7ED1D2A1BFD(iVar70, 684992453, false) || _0x341DE7ED1D2A1BFD(iVar70, 916636514, false)) || _0x341DE7ED1D2A1BFD(iVar70, -1939378450, false)) || _0x341DE7ED1D2A1BFD(iVar70, -820724897, false)) || _0x341DE7ED1D2A1BFD(iVar70, 153792394, false)) || _0x341DE7ED1D2A1BFD(iVar70, -872449705, false)) || _0x341DE7ED1D2A1BFD(iVar70, 700658917, false)))
						{
						}
						else
						{
							iVar79 = func_591(iVar5, iVar71, iParam2, get_ped_texture_variation(iParam0, 11));
							if (iVar79 != -99)
							{
								func_511(iParam0, 8, iVar79, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
								Global_69311[1 /*14*/] = {func_609(iVar5, iParam1, iParam2)};
								iVar9 = -99;
							}
							else
							{
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									iVar80 = func_595(iVar5, 11, -1);
									Global_69311[1 /*14*/] = {func_609(iVar5, 11, iVar80)};
									iVar79 = func_591(iVar5, iVar80, iParam2, Global_69311[1 /*14*/].f_4);
									if (iVar79 == -99)
									{
										iVar79 = 240;
									}
								}
								else if (iVar5 == joaat("mp_f_freemode_01"))
								{
									iVar79 = 48;
								}
								func_511(iParam0, 8, iVar79, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
								Global_69311[1 /*14*/] = {func_609(iVar5, iParam1, iParam2)};
							}
						}
					}
					else
					{
						Global_69311[1 /*14*/] = {func_609(iVar5, 11, iVar71)};
						iVar81 = Global_69311[1 /*14*/].f_3;
						Global_69311[1 /*14*/] = {func_609(iVar5, 11, iParam2)};
						iVar82 = Global_69311[1 /*14*/].f_3;
						if (iVar81 != iVar82)
						{
							Global_69311[1 /*14*/] = {func_609(iVar5, 8, iVar72)};
							iVar83 = Global_69311[1 /*14*/].f_4;
							iVar84 = func_589(iVar5, iVar72, iVar83);
							if (iVar84 == -99)
							{
								iVar85 = iVar72;
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									if ((iParam2 >= 96 && iParam2 <= 107) || func_588(func_490(iVar5, iParam2, 11, 3)) == 6)
									{
										iVar84 = func_595(iVar5, 11, -1);
										Global_69311[1 /*14*/] = {func_609(iVar5, 11, iVar84)};
										iVar85 = func_591(iVar5, iVar84, iParam2, Global_69311[1 /*14*/].f_4);
									}
								}
								if (iVar5 == joaat("mp_f_freemode_01") && iVar72 == 32)
								{
									if (!_0x341DE7ED1D2A1BFD(func_490(iVar5, iParam2, 11, 4), -491588875, false))
									{
										iVar84 = func_595(iVar5, 11, -1);
										Global_69311[1 /*14*/] = {func_609(iVar5, 11, iVar84)};
										iVar85 = func_591(iVar5, iVar84, iParam2, Global_69311[1 /*14*/].f_4);
									}
								}
							}
							else
							{
								iVar85 = func_591(iVar5, iVar84, iParam2, iVar83);
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									if (_0x341DE7ED1D2A1BFD(func_490(iVar5, iParam2, 11, 3), -1719338724, false))
									{
										if (!func_587(iVar5, func_486(iParam0, 4), iVar84))
										{
											iVar85 = 240;
										}
									}
								}
								else if (iVar5 == joaat("mp_f_freemode_01"))
								{
									if (_0x341DE7ED1D2A1BFD(func_490(iVar5, iParam2, 11, 4), -1719338724, false))
									{
										if (!func_587(iVar5, func_486(iParam0, 4), iVar84))
										{
											iVar85 = 48;
										}
									}
								}
							}
							if (iVar85 != -99)
							{
								func_511(iParam0, 8, iVar85, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
							}
							else if (iVar5 == joaat("mp_m_freemode_01"))
							{
								iVar84 = func_595(iVar5, 11, -1);
								Global_69311[1 /*14*/] = {func_609(iVar5, 11, iVar84)};
								iVar85 = func_591(iVar5, iVar84, iParam2, Global_69311[1 /*14*/].f_4);
								if (iVar85 == -99)
								{
									iVar85 = 240;
								}
								func_511(iParam0, 8, iVar85, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
							}
							else if (iVar5 == joaat("mp_f_freemode_01"))
							{
								func_511(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
							}
							Global_69311[1 /*14*/] = {func_609(iVar5, iParam1, iParam2)};
						}
					}
				}
				else
				{
					func_585(iVar5, iParam2);
					set_ped_component_variation(iParam0, 10, false, false, get_ped_palette_variation(iParam0, 10));
				}
			}
			func_598(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_594(iVar5, func_603(iParam0, 8, -1), iParam2, func_603(iParam0, 4, -1));
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam5 == 0)
			{
				if (iParam8 == -1)
				{
					iParam8 = func_34(2143, iParam10, 0);
				}
				if (iParam9 == -1)
				{
					iParam9 = func_34(2150, iParam10, 0);
				}
				_set_ped_hair_color(iParam0, iParam8, iParam9);
			}
			if (iParam7 == 0)
			{
				func_556(iParam0, iParam2, iParam10, iParam11);
			}
		}
		else if (iParam1 == 8)
		{
			func_598(iParam0, iParam1, iParam2, iParam6, 0);
			iVar86 = func_486(iParam0, 11);
			if (func_590(iVar5, iVar86))
			{
				iVar87 = func_589(iVar5, iParam2, Global_69311[1 /*14*/].f_4);
				func_585(iVar5, iVar87);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_594(iVar5, iParam2, func_486(iParam0, 11), func_486(iParam0, 4));
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 1 && iParam2 <= 41)
			{
				iVar88 = func_486(iParam0, 7);
				if (!func_553(iVar5, iVar88, 9, -99, -99, -99, iParam0, 0, iParam2, -99, -99, -99))
				{
					set_ped_component_variation(iParam0, func_430(7), false, false, 0);
				}
			}
		}
		else if (iParam1 == 1)
		{
			if (((iVar5 == joaat("mp_m_freemode_01") && iParam2 >= 26) && _0x341DE7ED1D2A1BFD(Global_2621444, -921710083, false)) || ((iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 26) && _0x341DE7ED1D2A1BFD(Global_2621444, -921710083, false)))
			{
				iVar89 = func_34(2090, iParam10, 0);
				iVar90 = func_34(2091, iParam10, 0);
				iVar91 = func_34(2092, iParam10, 0);
				fVar92 = func_552(135, iParam10);
				if (iVar5 == joaat("mp_m_freemode_01"))
				{
					set_ped_head_blend_data(iParam0, 0, 0, 0, iVar89, iVar90, iVar91, 0f, fVar92, 0f, 0);
				}
				else if (iVar5 == joaat("mp_f_freemode_01"))
				{
					set_ped_head_blend_data(iParam0, 21, 0, 0, iVar89, iVar90, iVar91, 0f, fVar92, 0f, 0);
				}
				iVar93 = 0;
				while (iVar93 < 20)
				{
					_set_ped_face_feature(iParam0, iVar93, 0f);
					iVar93++;
				}
			}
			else
			{
				func_536(iParam0, Global_69309);
			}
			iVar94 = get_hash_name_for_component(iParam0, true, get_ped_drawable_variation(iParam0, true), get_ped_texture_variation(iParam0, true));
			iVar95 = get_hash_name_for_component(iParam0, true, Global_69311[1 /*14*/].f_3, Global_69311[1 /*14*/].f_4);
			if (_0x341DE7ED1D2A1BFD(iVar94, 838607662, false))
			{
				if (!_0x341DE7ED1D2A1BFD(iVar95, 838607662, false))
				{
					iVar96 = func_486(iParam0, 1);
					iVar97 = false;
					while (iVar97 < 9)
					{
						iVar3 = func_596(iParam0, iVar5, iParam1, iVar96, 14, iVar97);
						iVar98 = func_532(iParam0, iVar97);
						if (iVar3 == iVar98)
						{
							clear_ped_prop(iParam0, iVar97);
						}
						iVar97++;
					}
				}
			}
		}
		else if (iParam1 == 4)
		{
			iVar99 = func_486(iParam0, 11);
			iVar100 = func_486(iParam0, 8);
			if (iVar5 == joaat("mp_m_freemode_01"))
			{
				if (_0x341DE7ED1D2A1BFD(func_490(iVar5, iVar99, 11, 3), -1719338724, false))
				{
					if (!func_587(iVar5, iParam2, func_589(iVar5, iVar100, 0)))
					{
						func_511(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
						Global_69311[1 /*14*/] = {func_609(iVar5, iParam1, iParam2)};
					}
				}
			}
			else if (iVar5 == joaat("mp_f_freemode_01"))
			{
				if (_0x341DE7ED1D2A1BFD(func_490(iVar5, iVar99, 11, 4), -1719338724, false))
				{
					if (!func_587(iVar5, iParam2, func_589(iVar5, iVar100, 0)))
					{
						func_511(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
						Global_69311[1 /*14*/] = {func_609(iVar5, iParam1, iParam2)};
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_594(iVar5, func_486(iParam0, 8), func_486(iParam0, 11), iParam2);
			}
			iVar101 = get_hash_name_for_component(iParam0, 3, get_ped_drawable_variation(iParam0, 3), false);
			if (_0x341DE7ED1D2A1BFD(iVar101, -356646862, false))
			{
				iVar102 = func_594(iVar5, iVar100, iVar99, iParam2);
				if (iVar102 == -99)
				{
					iVar102 = func_596(iParam0, iVar5, 11, iVar99, 3, 0);
				}
				switch (iVar101)
				{
					case 1165919867:
					case 1606204151:
					case 1774276352:
					case 1934254610:
					case 980775017:
					case 399321881:
						iVar102 = 11;
						iVar103 = func_490(iVar5, iParam2, 11, 4);
						if (!_0x341DE7ED1D2A1BFD(iVar103, -530089825, false))
						{
							iVar102 = -99;
						}
						break;
				}
				if (iVar102 != -99)
				{
					iVar104 = iVar102;
					iVar105 = 0;
					while (iVar105 < 15)
					{
						if (func_593(iVar5, iVar104, iVar105) == iVar101)
						{
							iVar11 = iVar105;
							iVar12 = get_ped_texture_variation(iParam0, 3);
						}
						iVar105++;
					}
				}
			}
		}
		if (iParam4 == -1)
		{
			set_ped_component_variation(iParam0, func_430(iParam1), Global_69311[1 /*14*/].f_3, Global_69311[1 /*14*/].f_4, get_ped_palette_variation(iParam0, func_430(iParam1)));
		}
		else
		{
			set_ped_component_variation(iParam0, func_430(iParam1), Global_69311[1 /*14*/].f_3, Global_69311[1 /*14*/].f_4, iParam4);
		}
		if (iParam5 == 0)
		{
			if (Global_69310 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_596(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_511(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
						if (iVar2 == 3)
						{
							switch (Global_2621444)
							{
								case 1165919867:
								case 1606204151:
								case 1774276352:
								case 1934254610:
								case 980775017:
								case 399321881:
									iVar11 = -1;
									break;
							}
						}
						else if (iVar2 == 8)
						{
							if (iVar6 != -99)
							{
								iVar6 = func_594(iVar5, iVar3, func_486(iParam0, 11), func_486(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
			}
			if (iParam1 == 11 || iParam1 == 8)
			{
				if (func_531(iParam0))
				{
					iVar106 = func_530(iVar5, iParam1, iParam2);
					if (iVar106 > 0)
					{
						iVar106 += get_ped_texture_variation(iParam0, 9);
						if (!func_529(iParam0, 9, iVar106))
						{
							func_511(iParam0, 9, iVar106, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
						}
					}
					else
					{
						func_511(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar8 = get_hash_name_for_component(iParam0, 8, get_ped_drawable_variation(iParam0, 8), get_ped_texture_variation(iParam0, 8));
					if (_0x341DE7ED1D2A1BFD(iVar8, 240476421, 8))
					{
						func_511(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
					}
				}
				iVar107 = func_34(2032, -1, 0);
				if (get_ped_drawable_variation(iParam0, 5) != 0)
				{
					set_ped_component_variation(iParam0, 5, func_526(iParam0, iVar107), func_525(iParam0, iVar107), func_524(iParam0, iVar107));
				}
				if (iParam0 == player_ped_id())
				{
					set_player_parachute_variation_override(player_id(), 5, func_526(player_ped_id(), iVar107), func_525(player_ped_id(), iVar107), 0);
					set_player_parachute_pack_tint_index(player_id(), func_524(player_ped_id(), iVar107));
					func_521(player_id(), iVar107);
				}
			}
			if (iParam1 == 7)
			{
				if ((iVar5 == joaat("mp_m_freemode_01") && iParam2 >= 92) || (iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 55))
				{
					if (_0x341DE7ED1D2A1BFD(Global_2621444, -319568873, false))
					{
						func_511(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
					}
				}
			}
			if (iVar5 == joaat("mp_f_freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar108 = func_603(iParam0, 4, -1);
					iVar109 = iParam2;
				}
				else
				{
					iVar108 = iParam2;
					iVar109 = func_603(iParam0, 11, -1);
				}
				if (func_520(iVar5, 11, iVar109))
				{
					if (!func_519(iVar5, 4, iVar108))
					{
						if (func_518(iVar5, 4, iVar108, &uVar110))
						{
							func_511(iParam0, 4, uVar110, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
						}
					}
				}
				else if (func_519(iVar5, 4, iVar108))
				{
					if (func_517(iVar5, 4, iVar108, &uVar110))
					{
						func_511(iParam0, 4, uVar110, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
					}
				}
			}
			if (iParam1 == 4)
			{
				iVar111 = get_ped_drawable_variation(iParam0, 6);
				iVar112 = get_ped_texture_variation(iParam0, 6);
				iVar113 = get_hash_name_for_component(iParam0, 6, iVar111, iVar112);
				if (func_516(iVar5, iVar113))
				{
					if (_0x341DE7ED1D2A1BFD(iVar113, 1812005517, false) != func_515(iVar5, iParam2))
					{
						iVar114 = _0xC17AD0E5752BECDA(iVar113);
						iVar115 = 0;
						while (iVar115 < iVar114)
						{
							get_variant_component(iVar113, iVar115, &iVar116, &uVar117, &iVar118);
							if (iVar118 == 6)
							{
								if (iVar116 != 0 && iVar116 != 1849449579)
								{
									if (iVar5 == joaat("mp_m_freemode_01"))
									{
										func_511(iParam0, 6, func_498(iVar5, iVar116, 6, 3), 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
									}
									else if (iVar5 == joaat("mp_f_freemode_01"))
									{
										func_511(iParam0, 6, func_498(iVar5, iVar116, 6, 4), 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
									}
								}
							}
							iVar115++;
						}
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 1)
			{
				func_513(iParam0);
				iVar119 = get_ped_drawable_variation(iParam0, true);
				iVar120 = get_ped_texture_variation(iParam0, true);
				iVar121 = get_hash_name_for_component(iParam0, true, iVar119, iVar120);
				if (_0x341DE7ED1D2A1BFD(iVar121, 838607662, false))
				{
					iVar3 = func_596(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_511(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar3 = func_596(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_511(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_512(iParam0, &uVar4))
		{
			func_511(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	if (iVar6 != -99)
	{
		func_511(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
	}
	if (iVar9 != -99)
	{
		func_511(iParam0, 8, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
	}
	if (iVar7 != -99)
	{
		func_511(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	}
	if (iVar11 != -1)
	{
		iVar122 = func_593(iVar5, get_ped_drawable_variation(iParam0, 3), iVar11);
		if (iVar122 != -1)
		{
			if (iVar5 == joaat("mp_m_freemode_01"))
			{
				iVar10 = func_498(iVar5, iVar122, 3, 3);
			}
			else if (iVar5 == joaat("mp_f_freemode_01"))
			{
				iVar10 = func_498(iVar5, iVar122, 3, 4);
			}
			if (iVar10 != -99)
			{
				iVar10 += iVar12;
				func_511(iParam0, 3, iVar10, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
			}
		}
	}
	Global_69310--;
	return true;
}

bool func_512(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	*uParam1 = func_603(player_ped_id(), 2, -1);
	if (func_34(746, Global_69309, 0) != -99 && func_135())
	{
		if (func_255() == 4)
		{
			return true;
		}
		if (func_34(746, Global_69309, 0) == 0 && func_34(747, Global_69309, 0) == 0)
		{
			if (func_132(161, Global_69309))
			{
				if (func_34(2043, Global_69309, 0) == 0)
				{
					return false;
				}
			}
			else if (func_34(745, Global_69309, 0) == 0)
			{
				return false;
			}
		}
		iVar0 = func_34(746, Global_69309, 0);
		iVar1 = func_34(747, Global_69309, 0);
		if (!func_529(iParam0, iVar1, iVar0))
		{
			if (func_132(161, Global_69309))
			{
				*uParam1 = func_34(2043, Global_69309, 0);
			}
			else
			{
				*uParam1 = func_34(745, Global_69309, 0);
			}
			func_642(746, -99, Global_69309, 1);
			func_642(747, 2, Global_69309, 1);
			return true;
		}
	}
	return false;
}

void func_513(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = get_entity_model(iParam0);
	iVar1 = get_ped_drawable_variation(iParam0, 11);
	iVar2 = get_ped_texture_variation(iParam0, 11);
	iVar3 = get_ped_drawable_variation(iParam0, true);
	iVar4 = get_ped_texture_variation(iParam0, true);
	iVar5 = get_ped_drawable_variation(iParam0, 8);
	iVar6 = get_ped_texture_variation(iParam0, 8);
	iVar7 = get_hash_name_for_component(iParam0, 11, iVar1, iVar2);
	iVar8 = get_hash_name_for_component(iParam0, true, iVar3, iVar4);
	iVar9 = get_hash_name_for_component(iParam0, 8, iVar5, iVar6);
	if (_0x341DE7ED1D2A1BFD(iVar7, -317649054, false))
	{
		if (_0x341DE7ED1D2A1BFD(iVar8, 72391838, false))
		{
			if (!_0x341DE7ED1D2A1BFD(iVar7, -1889900289, false))
			{
				iVar1--;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar7, -1889900289, false))
		{
			iVar1++;
		}
		set_ped_component_variation(iParam0, 11, iVar1, iVar2, get_ped_palette_variation(iParam0, 11));
	}
	iVar10 = false;
	if (iVar0 == joaat("mp_m_freemode_01"))
	{
		if (!_0x341DE7ED1D2A1BFD(iVar7, 572416369, false))
		{
			iVar10 = true;
		}
		switch (iVar8)
		{
			case -486726551:
			case 219052171:
			case -1032068249:
			case -728660078:
			case -850691818:
			case -544072285:
			case -1811183977:
			case -1111303675:
			case 116190296:
			case -1282673470:
			case -936108522:
			case -671236695:
			case 1520550639:
			case 1816684092:
			case 2102823000:
			case -1866059977:
			case 1250403007:
			case 476038764:
			case 1863871456:
			case 351755390:
			case 1058844872:
			case 1549134650:
			case 1317097361:
			case -829567064:
			case -130604290:
			case -380009149:
			case 596212130:
			case 2140942786:
			case 1901696317:
			case -1797925843:
			case 790890703:
			case 1633873228:
			case 1272234544:
			case -672409000:
			case -1976713507:
			case -1902280196:
			case -115943475:
			case 1684425644:
			case 1983115079:
				iVar10 = true;
				break;
		}
	}
	else
	{
		if (!_0x341DE7ED1D2A1BFD(iVar7, -196114988, false))
		{
			iVar10 = true;
		}
		switch (iVar8)
		{
			case -1615510302:
			case 1527692182:
			case -2083484391:
			case -1372200477:
			case 761684042:
			case 534496565:
			case 303671729:
			case 39193130:
			case -162598372:
			case -393062749:
			case 2063387500:
			case 1633785910:
			case -874910415:
			case -1240415841:
			case 4970004:
			case -1695478944:
			case -450420789:
			case 257455149:
			case 1098963073:
			case -204554982:
			case 1027252245:
			case 1482249810:
			case 1657236270:
			case 633729300:
			case 461560974:
			case 39856713:
			case -130673163:
			case 1595499458:
			case 1424510816:
			case -1686217589:
			case 415037286:
			case 1095714954:
			case -1384675744:
			case -603364477:
			case 423419373:
			case -945505606:
			case -188672778:
			case 578089053:
			case 1418122368:
			case 39432231:
			case 998548092:
			case -539458143:
			case 1285512993:
			case 1384673675:
			case 207316274:
			case 924498608:
			case 1626705513:
			case -1951407139:
			case 1109577920:
			case 1943254053:
			case -706250677:
			case -933962458:
			case 2065187502:
			case 2143125494:
			case -728857530:
			case 113895612:
			case -106672527:
			case -1674341487:
			case -1426640612:
			case -1616110970:
			case -825558845:
			case -1062773636:
			case 1680712586:
			case 731446975:
			case -1441694810:
			case 1076144086:
			case 1291534723:
			case 1653763249:
			case -402884741:
			case 1982600156:
			case -1955185040:
			case -1722820061:
			case 519431533:
			case 1338441322:
			case -97470603:
			case -1293080337:
			case -1531999116:
			case 762322431:
			case 1318477899:
			case 199940853:
			case 1034403438:
			case 1715572641:
			case -2013146335:
			case 1085654154:
			case 962496867:
			case 1611716295:
			case 637461160:
			case -1137111266:
			case 316882033:
			case 590699797:
			case -385914710:
			case -1897876374:
			case -861786128:
			case -633615581:
			case -1298728310:
			case 2019526172:
			case -156630377:
			case 99852586:
			case 1543589216:
			case 1783097837:
			case -1876706754:
			case -1647782520:
			case -1394117691:
			case 977702533:
			case -670092377:
			case -908093624:
			case 1219695857:
			case 1919117393:
			case -534990310:
			case 445654672:
			case 329262298:
			case 22970455:
			case -476401343:
			case -706275878:
			case 1876083388:
			case -1114385357:
			case -840010097:
			case -2048003518:
			case 286623891:
			case 1792195596:
			case 1992938490:
			case -1364343871:
			case 721974080:
			case -45508669:
			case 1998385862:
			case 1222776401:
				iVar10 = true;
				break;
			}
	}
	if (iVar10)
	{
		if (_0x341DE7ED1D2A1BFD(iVar9, -1889900289, false) || _0x341DE7ED1D2A1BFD(iVar9, 1569775397, false))
		{
			if (iVar0 == joaat("mp_m_freemode_01"))
			{
				iVar5 = 15;
				iVar6 = false;
			}
			else
			{
				iVar5 = 14;
				iVar6 = false;
			}
		}
	}
	else if (_0x341DE7ED1D2A1BFD(iVar8, -1409448021, false))
	{
		if (_0x341DE7ED1D2A1BFD(iVar9, 1569775397, false))
		{
			iVar5++;
		}
		else
		{
			iVar5 = func_514(iParam0, 1);
			iVar6 = iVar2;
		}
	}
	else if (_0x341DE7ED1D2A1BFD(iVar9, -1889900289, false))
	{
		iVar5--;
	}
	else
	{
		iVar5 = func_514(iParam0, 0);
		iVar6 = iVar2;
	}
	set_ped_component_variation(iParam0, 8, iVar5, iVar6, get_ped_palette_variation(iParam0, 8));
}

var func_514(int iParam0, int iParam1)
{
	struct<4> Var0;
	int iVar17;
	
	iVar17 = get_entity_model(iParam0) == joaat("mp_m_freemode_01");
	Var0.f_3 = -1;
	if (iVar17)
	{
		if (iParam1)
		{
			get_shop_ped_component(-367850957, &Var0);
		}
		else
		{
			get_shop_ped_component(1241116144, &Var0);
		}
	}
	else if (iParam1)
	{
		get_shop_ped_component(555191698, &Var0);
	}
	else
	{
		get_shop_ped_component(-972757995, &Var0);
	}
	return Var0.f_3;
}

int func_515(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	iVar1 = -1;
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			if (iParam1 >= 256)
			{
				iVar0 = func_490(iParam0, iParam1, 4, 3);
				iVar1 = func_588(iVar0);
			}
			iVar2 = 1;
			if (((((((((((((iParam1 >= 32 && iParam1 <= 47) || (iParam1 >= 64 && iParam1 <= 79)) || (iParam1 >= 96 && iParam1 <= 111)) || (iParam1 >= 192 && iParam1 <= 207)) || (iParam1 >= 224 && iParam1 <= 239)) || (iParam1 >= 240 && iParam1 <= 255)) || iVar1 == 2) || iVar1 == 4) || iVar1 == 6) || iVar1 == 12) || iVar1 == 14) || iVar1 == 15) || _0x341DE7ED1D2A1BFD(iVar0, 320460654, false))
			{
				iVar2 = 0;
			}
			switch (iVar0)
			{
				case -439764935:
				case 1858824227:
				case -44268217:
				case 301706885:
				case 1283072893:
				case -1590178565:
				case 1995307108:
				case 1029014836:
				case -365568266:
				case -138446327:
				case -2034722819:
				case -1219513062:
				case 153704652:
				case 356276239:
				case 586511233:
				case 1558996842:
				case 1183988406:
				case 1000678684:
				case 761792674:
				case -145679239:
				case 686423978:
				case -763407658:
				case 74266289:
				case 987390769:
				case 1591372991:
				case 1834027448:
				case 913054691:
				case 1142372153:
				case -1698011990:
				case -1443101939:
				case 2133699953:
				case -1924511318:
				case -475531676:
				case -237137197:
				case 754461254:
				case -1155840382:
				case 629180074:
				case 859251223:
				case 1610316715:
				case 901392169:
				case -92983136:
				case 1346362420:
				case 485782942:
				case 312004063:
				case 6695290:
				case 1724446270:
				case -448105673:
				case -611098679:
				case -1111088081:
				case -1406369540:
				case -1912159043:
				case 2076516410:
				case 1919618438:
				case 45227112:
				case -2129094253:
				case -421370587:
				case -675363106:
					iVar2 = 0;
					break;
			}
			return iVar2;
			break;
		
		case joaat("mp_f_freemode_01"):
			if (iParam1 >= 256)
			{
				iVar0 = func_490(iParam0, iParam1, 4, 4);
				iVar1 = func_588(iVar0);
			}
			if (((((((((((((((((((((((((iParam1 >= 16 && iParam1 <= 31) || (iParam1 >= 48 && iParam1 <= 63)) || (iParam1 >= 64 && iParam1 <= 79)) || (iParam1 >= 96 && iParam1 <= 111)) || iVar1 == 1) || iVar1 == 3) || iVar1 == 4) || iVar1 == 6) || _0x341DE7ED1D2A1BFD(iVar0, 1863955539, false)) || _0x341DE7ED1D2A1BFD(iVar0, 2106216756, false)) || _0x341DE7ED1D2A1BFD(iVar0, -761463976, false)) || _0x341DE7ED1D2A1BFD(iVar0, 684992453, false)) || _0x341DE7ED1D2A1BFD(iVar0, 916636514, false)) || _0x341DE7ED1D2A1BFD(iVar0, -1939378450, false)) || _0x341DE7ED1D2A1BFD(iVar0, 264959411, false)) || _0x341DE7ED1D2A1BFD(iVar0, -1127835965, false)) || _0x341DE7ED1D2A1BFD(iVar0, -1119232689, false)) || _0x341DE7ED1D2A1BFD(iVar0, -1207283343, false)) || _0x341DE7ED1D2A1BFD(iVar0, -849839091, false)) || _0x341DE7ED1D2A1BFD(iVar0, -2088146832, false)) || _0x341DE7ED1D2A1BFD(iVar0, -1446333198, false)) || _0x341DE7ED1D2A1BFD(iVar0, -430330349, false)) || _0x341DE7ED1D2A1BFD(iVar0, -1103045158, false)) || _0x341DE7ED1D2A1BFD(iVar0, 1055526375, false)) || _0x341DE7ED1D2A1BFD(iVar0, -2020757158, false))
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_516(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			if (_0x341DE7ED1D2A1BFD(iParam1, -364248070, false))
			{
				return true;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if (_0x341DE7ED1D2A1BFD(iParam1, -364248070, false))
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_517(int iParam0, int iParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	switch (iParam0)
	{
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 4:
					if (iParam2 >= 256)
					{
						iVar0 = func_490(iParam0, iParam2, iParam1, 4);
						if (iVar0 != -1)
						{
							iVar1 = _0xC17AD0E5752BECDA(iVar0);
							iVar2 = 0;
							while (iVar2 < iVar1)
							{
								get_variant_component(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
								if (iVar5 == 4)
								{
									if (iVar3 != 0 && iVar3 != 1849449579)
									{
										if (!_0x341DE7ED1D2A1BFD(iVar3, -1100807313, false))
										{
											*uParam3 = func_498(iParam0, iVar3, iParam1, 4);
											return true;
										}
									}
								}
								iVar2++;
							}
						}
					}
					break;
			}
			break;
	}
	return false;
}

bool func_518(int iParam0, int iParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	switch (iParam0)
	{
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 4:
					if (iParam2 >= 256)
					{
						iVar0 = func_490(iParam0, iParam2, iParam1, 4);
						if (iVar0 != -1)
						{
							iVar1 = _0xC17AD0E5752BECDA(iVar0);
							iVar2 = 0;
							while (iVar2 < iVar1)
							{
								get_variant_component(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
								if (iVar5 == 4)
								{
									if (iVar3 != 0 && iVar3 != 1849449579)
									{
										if (_0x341DE7ED1D2A1BFD(iVar3, -1100807313, false))
										{
											*uParam3 = func_498(iParam0, iVar3, iParam1, 4);
											return true;
										}
									}
								}
								iVar2++;
							}
						}
					}
					break;
			}
			break;
	}
	return false;
}

bool func_519(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 4:
					if (iParam2 >= 256)
					{
						if (_0x341DE7ED1D2A1BFD(func_490(iParam0, iParam2, 4, 4), -1100807313, false))
						{
							return true;
						}
					}
					break;
			}
			break;
	}
	return false;
}

int func_520(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 11:
					if (iParam2 >= 256)
					{
						return _0x341DE7ED1D2A1BFD(func_490(iParam0, iParam2, 11, 4), -530089825, false);
					}
					break;
			}
			break;
	}
	return false;
}

void func_521(int iParam0, int iParam1)
{
	if (func_523())
	{
		if (iParam1 > 46)
		{
			set_player_parachute_pack_model_override(iParam0, 1766664132);
		}
		else if (iParam1 > 26)
		{
			set_player_parachute_pack_model_override(iParam0, 1277738372);
		}
		else if (iParam1 > 0)
		{
			set_player_parachute_pack_model_override(iParam0, 1269440357);
		}
		else
		{
			clear_player_parachute_pack_model_override(iParam0);
		}
	}
	else if (func_522())
	{
		if (iParam1 > 0)
		{
			set_player_parachute_pack_model_override(iParam0, 1479397204);
		}
		else
		{
			clear_player_parachute_pack_model_override(iParam0);
		}
	}
}

int func_522()
{
	return is_dlc_present(1428761799);
}

int func_523()
{
	return is_dlc_present(-1005876368);
}

bool func_524(int iParam0, int iParam1)
{
	return false;
}

int func_525(int iParam0, int iParam1)
{
	if (iParam1 > 51)
	{
		return iParam1 - 52;
	}
	if (iParam1 > 46)
	{
		return iParam1 - 47;
	}
	if (iParam1 > 26)
	{
		return iParam1 - 27;
	}
	if (iParam1 > 0)
	{
		return iParam1 - 1;
	}
	return iParam1;
}

int func_526(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar0 = get_ped_drawable_variation(iParam0, 11);
	if (get_ped_drawable_variation(iParam0, 9) != 0)
	{
		iVar1 = true;
	}
	iVar2 = get_entity_model(iParam0);
	iVar3 = get_hash_name_for_component(iParam0, 8, get_ped_drawable_variation(iParam0, 8), get_ped_texture_variation(iParam0, 8));
	if (_0x341DE7ED1D2A1BFD(iVar3, 240476421, 8))
	{
		if (iParam1 > 51)
		{
			return 51;
		}
		else if (iParam1 > 46)
		{
			return 51;
		}
		else if (iParam1 > 26)
		{
			return 50;
		}
		else if (iParam1 > 0)
		{
			return 49;
		}
		else
		{
			return 48;
		}
	}
	iVar4 = 0;
	if (iParam1 > 51 && iParam1 <= 61)
	{
		return iParam1;
	}
	else if (iParam1 > 46)
	{
		iVar4 = 30;
	}
	else if (iParam1 > 26)
	{
		iVar4 = 20;
	}
	else if (iParam1 > 0)
	{
		iVar4 = 9;
	}
	else
	{
		iVar4 = 0;
	}
	if (iVar0 > 15)
	{
		iVar5 = get_hash_name_for_component(iParam0, 11, iVar0, get_ped_texture_variation(iParam0, 11));
		if (_0x341DE7ED1D2A1BFD(iVar5, 655081063, false))
		{
			if (iVar1)
			{
				return 8 + iVar4;
			}
			else
			{
				return 2 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -530089825, false))
		{
			if (iVar1)
			{
				return 6 + iVar4;
			}
			else
			{
				return 6 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -713698407, false))
		{
			if (iParam1 > 46)
			{
				return 39;
			}
			else if (iParam1 > 26)
			{
				return 29;
			}
			else if (iParam1 > 0)
			{
				return 18;
			}
			else
			{
				return 19;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -1882920022, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (iVar1)
				{
					return 8 + iVar4;
				}
				else
				{
					return 2 + iVar4;
				}
			}
			else if (iVar1)
			{
				return 8 + iVar4;
			}
			else
			{
				return 2 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -317649054, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (iVar1)
				{
					return 8 + iVar4;
				}
				else
				{
					return 2 + iVar4;
				}
			}
			else if (iVar1)
			{
				return 8 + iVar4;
			}
			else
			{
				return 2 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, 1536649085, false))
		{
			iVar6 = func_528(iVar5, 0);
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				switch (iVar6)
				{
					case 0:
						return 2 + iVar4;
						break;
					
					case 2:
						if (iParam1 > 46)
						{
							return 39;
						}
						else if (iParam1 > 26)
						{
							return 29;
						}
						else if (iParam1 > 0)
						{
							return 18;
						}
						else
						{
							return 19;
						}
						break;
					
					default:
						iVar0 = func_588(iVar5);
						break;
				}
			}
			else
			{
				switch (iVar6)
				{
					case 2:
						return 7 + iVar4;
						break;
					
					default:
						iVar0 = func_588(iVar5);
						break;
					}
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, 248194463, false))
		{
			if (_0x341DE7ED1D2A1BFD(iVar5, -1347486026, false))
			{
				return 3 + iVar4;
			}
			else
			{
				return 7 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, 396458410, false))
		{
			iVar7 = func_527(iVar5, 0);
			switch (iVar7)
			{
				case 4:
					if (iParam1 > 46)
					{
						return 39;
					}
					else if (iParam1 > 26)
					{
						return 28;
					}
					else if (iParam1 > 0)
					{
						return 17;
					}
					else
					{
						return 8;
					}
					break;
				
				case 14:
					if (iParam1 > 46)
					{
						return 39;
					}
					else if (iParam1 > 26)
					{
						return 29;
					}
					else if (iParam1 > 0)
					{
						return 18;
					}
					else
					{
						return 19;
					}
					break;
				
				default:
					iVar0 = func_588(iVar5);
					break;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -779835469, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (iVar1)
				{
					return 8 + iVar4;
				}
				else
				{
					return 3 + iVar4;
				}
			}
			else if (iVar1)
			{
				return 8 + iVar4;
			}
			else
			{
				return 2 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -1119232689, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return 3 + iVar4;
			}
			else if (iVar1)
			{
				return 8 + iVar4;
			}
			else
			{
				return 1 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -2102859770, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return 2 + iVar4;
			}
			else
			{
				return 2 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, 1784133476, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return 2 + iVar4;
			}
			else if (iVar1)
			{
				return 8 + iVar4;
			}
			else
			{
				return 1 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -1607949555, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return 3 + iVar4;
			}
			else
			{
				return 4 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, 1976716889, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return 3 + iVar4;
			}
			else
			{
				return 8 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, 2099109084, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return 2 + iVar4;
			}
			else
			{
				return 8 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -1488441032, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (iParam1 > 46)
				{
					return 39;
				}
				else if (iParam1 > 26)
				{
					return 29;
				}
				else if (iParam1 > 0)
				{
					return 18;
				}
				else
				{
					return 19;
				}
			}
			else
			{
				return 4 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -1719167561, false) || _0x341DE7ED1D2A1BFD(iVar5, 1431529976, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return 3 + iVar4;
			}
			else
			{
				return 8 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -1274099003, false) || _0x341DE7ED1D2A1BFD(iVar5, 1723403459, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return 3 + iVar4;
			}
			else
			{
				return 8 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, 912543594, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return 2 + iVar4;
			}
		}
		else if ((_0x341DE7ED1D2A1BFD(iVar5, -1086258388, false) || _0x341DE7ED1D2A1BFD(iVar5, 103539798, false)) || _0x341DE7ED1D2A1BFD(iVar5, -994703884, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (iVar1)
				{
					return 8 + iVar4;
				}
				else
				{
					return 6 + iVar4;
				}
			}
			else if (iVar1)
			{
				return 8 + iVar4;
			}
			else
			{
				return 7 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, 2044466679, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (iParam1 > 46)
				{
					return 39;
				}
				else if (iParam1 > 26)
				{
					return 29;
				}
				else if (iParam1 > 0)
				{
					return 18;
				}
				else
				{
					return 19;
				}
			}
			else if (iVar1)
			{
				return 4 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -2020757158, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return 3 + iVar4;
			}
			else if (iVar1)
			{
				return 8 + iVar4;
			}
			else
			{
				return 2 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -1064262817, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (iVar1)
				{
					return 8 + iVar4;
				}
				else
				{
					return 2 + iVar4;
				}
			}
			else if (iVar1)
			{
				if (iParam1 > 51)
				{
					return 51;
				}
				else if (iParam1 > 46)
				{
					return 51;
				}
				else if (iParam1 > 26)
				{
					return 50;
				}
				else if (iParam1 > 0)
				{
					return 49;
				}
				else
				{
					return 48;
				}
			}
			else
			{
				return 8 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -1419806467, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return 7 + iVar4;
			}
			else
			{
				return 8 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -1053842259, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (iVar1)
				{
					return 8 + iVar4;
				}
				else
				{
					return 2 + iVar4;
				}
			}
			else
			{
				return 8 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -1358888880, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return 3 + iVar4;
			}
			else
			{
				return 4 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -441291342, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return 3 + iVar4;
			}
			else
			{
				return 8 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -747583185, false))
		{
			if (iVar2 == joaat("mp_f_freemode_01"))
			{
				if (iVar1)
				{
					if (iParam1 > 51)
					{
						return 51;
					}
					else if (iParam1 > 46)
					{
						return 51;
					}
					else if (iParam1 > 26)
					{
						return 50;
					}
					else if (iParam1 > 0)
					{
						return 49;
					}
					else
					{
						return 48;
					}
				}
				else
				{
					return 2 + iVar4;
				}
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -1986415230, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return 8 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -2088146832, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (iVar1)
				{
					return 8 + iVar4;
				}
				else
				{
					return 6 + iVar4;
				}
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -785939537, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (iVar1)
				{
					return 8 + iVar4;
				}
				else
				{
					return 3 + iVar4;
				}
			}
			else
			{
				return 8 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -872449705, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (iVar1)
				{
					return 8 + iVar4;
				}
				else
				{
					return 2 + iVar4;
				}
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, 700658917, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return 8 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, 1714969731, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (iVar1)
				{
					return 8 + iVar4;
				}
				else
				{
					return 2 + iVar4;
				}
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, 745826556, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return 8 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, 1055526375, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return 8 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, 144417099, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return 8 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, 492620493, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return 8 + iVar4;
			}
			else
			{
				return 8 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -416620954, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (iVar1)
				{
					return 8 + iVar4;
				}
				else
				{
					return 3 + iVar4;
				}
			}
			else
			{
				return 4 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -102825006, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (iVar1)
				{
					return 8 + iVar4;
				}
				else
				{
					return 2 + iVar4;
				}
			}
			else
			{
				return 7 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -733792105, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (iVar1)
				{
					return 8 + iVar4;
				}
				else
				{
					return 7 + iVar4;
				}
			}
			else
			{
				return 4 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, 137011325, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (iVar1)
				{
					return 8 + iVar4;
				}
				else
				{
					return 3 + iVar4;
				}
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -641612092, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return 6 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -1351486939, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (iVar1)
				{
					return 8 + iVar4;
				}
				else
				{
					return 2 + iVar4;
				}
			}
			else if (iVar1)
			{
				if (iParam1 > 51)
				{
					return 51;
				}
				else if (iParam1 > 46)
				{
					return 51;
				}
				else if (iParam1 > 26)
				{
					return 50;
				}
				else if (iParam1 > 0)
				{
					return 49;
				}
				else
				{
					return 48;
				}
			}
			else
			{
				return 2 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -2119756144, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (iVar1)
				{
					return 8 + iVar4;
				}
				else
				{
					return 3 + iVar4;
				}
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -1507532917, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (iParam1 > 51)
				{
					return 51;
				}
				else if (iParam1 > 46)
				{
					return 51;
				}
				else if (iParam1 > 26)
				{
					return 50;
				}
				else if (iParam1 > 0)
				{
					return 49;
				}
				else
				{
					return 48;
				}
			}
			else
			{
				return 7 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, 947651647, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return 8 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, 1965569012, false) && iVar2 == joaat("mp_f_freemode_01"))
		{
			if (iVar1)
			{
				return 8 + iVar4;
			}
			else
			{
				return 1 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, 2026620439, false) && iVar2 == joaat("mp_f_freemode_01"))
		{
			if (iVar1)
			{
				return 8 + iVar4;
			}
			else
			{
				return 2 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -1410897066, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return 3 + iVar4;
			}
			else
			{
				return 8 + iVar4;
			}
		}
		else if ((_0x341DE7ED1D2A1BFD(iVar5, -2017999390, false) || _0x341DE7ED1D2A1BFD(iVar5, 320460654, false)) || _0x341DE7ED1D2A1BFD(iVar5, -826135203, false))
		{
			return 7 + iVar4;
		}
		else
		{
			iVar0 = func_588(iVar5);
		}
	}
	if (iVar2 == joaat("mp_m_freemode_01"))
	{
		switch (iVar0)
		{
			case 0:
				if (iVar1)
				{
					return 2 + iVar4;
				}
				else
				{
					return 1 + iVar4;
				}
				break;
			
			case 1:
				if (iVar1)
				{
					return 2 + iVar4;
				}
				else
				{
					return 1 + iVar4;
				}
				break;
			
			case 2:
				if (iVar1)
				{
					return 7 + iVar4;
				}
				else
				{
					return 7 + iVar4;
				}
				break;
			
			case 3:
				if (iVar1)
				{
					return 3 + iVar4;
				}
				else
				{
					return 3 + iVar4;
				}
				break;
			
			case 4:
				if (iVar1)
				{
					return 3 + iVar4;
				}
				else
				{
					return 3 + iVar4;
				}
				break;
			
			case 5:
				if (iVar1)
				{
					return 2 + iVar4;
				}
				else
				{
					return 1 + iVar4;
				}
				break;
			
			case 6:
				if (iVar1)
				{
					return 2 + iVar4;
				}
				else
				{
					return 2 + iVar4;
				}
				break;
			
			case 7:
				if (iVar1)
				{
					return 3 + iVar4;
				}
				else
				{
					return 3 + iVar4;
				}
				break;
			
			case 8:
				if (iVar1)
				{
					return 8 + iVar4;
				}
				else
				{
					return 1 + iVar4;
				}
				break;
			
			case 9:
				if (iVar1)
				{
					return 2 + iVar4;
				}
				else
				{
					return 1 + iVar4;
				}
				break;
			
			case 10:
				if (iVar1)
				{
					return 3 + iVar4;
				}
				else
				{
					return 3 + iVar4;
				}
				break;
			
			case 11:
				if (iVar1)
				{
					return 8 + iVar4;
				}
				else
				{
					return 2 + iVar4;
				}
				break;
			
			case 12:
				if (iVar1)
				{
					return 2 + iVar4;
				}
				else
				{
					return 1 + iVar4;
				}
				break;
			
			case 13:
				if (iVar1)
				{
					return 7 + iVar4;
				}
				else
				{
					return 2 + iVar4;
				}
				break;
			
			case 14:
				if (iVar1)
				{
					return 6 + iVar4;
				}
				else
				{
					return 6 + iVar4;
				}
				break;
			
			case 15:
				if (iVar1)
				{
					return 2 + iVar4;
				}
				else
				{
					return 5 + iVar4;
				}
				break;
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				if (iVar1)
				{
					return 2 + iVar4;
				}
				else
				{
					return 1 + iVar4;
				}
				break;
			
			case 1:
				if (iVar1)
				{
					return 7 + iVar4;
				}
				else
				{
					return 7 + iVar4;
				}
				break;
			
			case 2:
				if (iVar1)
				{
					return 4 + iVar4;
				}
				else
				{
					return 3 + iVar4;
				}
				break;
			
			case 3:
				if (iVar1)
				{
					return 6 + iVar4;
				}
				else
				{
					return 5 + iVar4;
				}
				break;
			
			case 4:
				if (iVar1)
				{
					return 2 + iVar4;
				}
				else
				{
					return 1 + iVar4;
				}
				break;
			
			case 5:
				if (iVar1)
				{
					return 2 + iVar4;
				}
				else
				{
					return 1 + iVar4;
				}
				break;
			
			case 6:
				if (iVar1)
				{
					return 7 + iVar4;
				}
				else
				{
					return 7 + iVar4;
				}
				break;
			
			case 7:
				if (iVar1)
				{
					return 7 + iVar4;
				}
				else
				{
					return 7 + iVar4;
				}
				break;
			
			case 8:
				if (iVar1)
				{
					return 7 + iVar4;
				}
				else
				{
					return 7 + iVar4;
				}
				break;
			
			case 9:
				return 2 + iVar4;
				break;
			
			case 10:
				if (iVar1)
				{
					return 7 + iVar4;
				}
				else
				{
					return 7 + iVar4;
				}
				break;
			
			case 11:
				if (iVar1)
				{
					return 2 + iVar4;
				}
				else
				{
					return 1 + iVar4;
				}
				break;
			
			case 12:
				if (iVar1)
				{
					return 2 + iVar4;
				}
				else
				{
					return 1 + iVar4;
				}
				break;
			
			case 13:
				if (iVar1)
				{
					return 2 + iVar4;
				}
				else
				{
					return 1 + iVar4;
				}
				break;
			
			case 14:
				if (iVar1)
				{
					return 8 + iVar4;
				}
				else
				{
					return 4 + iVar4;
				}
				break;
			
			case 15:
				if (iVar1)
				{
					return 2 + iVar4;
				}
				else
				{
					return 1 + iVar4;
				}
				break;
			}
	}
	return 1 + iVar4;
	return 0;
}

int func_527(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	if (_0x341DE7ED1D2A1BFD(iParam0, 140732128, iParam1))
	{
		iVar0 = 0;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, 1863955539, iParam1))
	{
		iVar0 = 1;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, 2106216756, iParam1))
	{
		iVar0 = 2;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, -761463976, iParam1))
	{
		iVar0 = 3;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, 1627756587, iParam1))
	{
		iVar0 = 4;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, 684992453, iParam1))
	{
		iVar0 = 5;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, 916636514, iParam1))
	{
		iVar0 = 6;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, -1939378450, iParam1))
	{
		iVar0 = 7;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, 441715397, iParam1))
	{
		iVar0 = 8;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, 264959411, iParam1))
	{
		iVar0 = 9;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, -1127835965, iParam1))
	{
		iVar0 = 10;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, -820724897, iParam1))
	{
		iVar0 = 11;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, 153792394, iParam1))
	{
		iVar0 = 12;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, -672871169, iParam1))
	{
		iVar0 = 13;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, 572416369, iParam1))
	{
		iVar0 = 14;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, -196114988, iParam1))
	{
		iVar0 = 15;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, 1322269404, iParam1))
	{
		iVar0 = 16;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, 548036233, iParam1))
	{
		iVar0 = 17;
	}
	return iVar0;
}

int func_528(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	if (_0x341DE7ED1D2A1BFD(iParam0, -870074461, iParam1))
	{
		iVar0 = 0;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, -1174924468, iParam1))
	{
		iVar0 = 1;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, -868698159, iParam1))
	{
		iVar0 = 2;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, -1177480446, iParam1))
	{
		iVar0 = 3;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, -1347486026, iParam1))
	{
		iVar0 = 4;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, -1655154167, iParam1))
	{
		iVar0 = 5;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, -2105858993, iParam1))
	{
		iVar0 = 6;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, 1893564692, iParam1))
	{
		iVar0 = 7;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, 1710451520, iParam1))
	{
		iVar0 = 8;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, 1416808511, iParam1))
	{
		iVar0 = 9;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, 1641506460, iParam1))
	{
		iVar0 = 10;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, 699233865, iParam1))
	{
		iVar0 = 11;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, 393400788, iParam1))
	{
		iVar0 = 12;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, 216120498, iParam1))
	{
		iVar0 = 13;
	}
	return iVar0;
}

int func_529(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	var uVar24;
	int iVar34;
	var uVar35;
	var uVar45;
	
	if (is_ped_injured(iParam0))
	{
		return 0;
	}
	iVar0 = get_entity_model(iParam0);
	Global_69311[1 /*14*/] = {func_609(iVar0, iParam1, iParam2)};
	uVar2 = Global_2621444;
	uVar3 = Global_2621445;
	if (!is_bit_set(Global_69311[1 /*14*/].f_6, false))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar8 = {func_500(iVar0, iParam2)};
		iVar7 = 0;
		while (iVar7 < 7)
		{
			switch (iVar7)
			{
				case 0:
					iVar4 = 1;
					break;
				
				case 1:
					iVar4 = 4;
					break;
				
				case 2:
					iVar4 = 6;
					break;
				
				case 3:
					iVar4 = 7;
					break;
				
				case 4:
					iVar4 = 8;
					break;
				
				case 5:
					iVar4 = 11;
					break;
				
				case 6:
					iVar4 = 13;
					break;
			}
			if (uVar8[iVar4] != -99)
			{
				if (!func_529(iParam0, iVar4, uVar8[iVar4]))
				{
					Global_2621444 = uVar2;
					Global_2621445 = uVar3;
					return 0;
					if (iVar4 == 13)
					{
						uVar24 = {func_496(iVar0, uVar8[iVar4])};
						iVar5 = 0;
						while (iVar5 <= 8)
						{
							if (!func_529(iParam0, 14, uVar24[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_69311[2 /*14*/] = {func_609(iVar0, 14, iVar6)};
									if (Global_69311[2 /*14*/].f_12 == iVar5)
									{
										if (func_529(iParam0, 14, iVar6))
										{
											if (!func_488(iVar0, iParam2, 14, iVar6, &uVar8, &(Global_69311[2 /*14*/])))
											{
												Global_2621444 = uVar2;
												Global_2621445 = uVar3;
												return 0;
											}
										}
									}
									iVar6++;
								}
							}
							iVar5++;
						}
					}
					else
					{
						iVar1 = func_486(iParam0, iVar4);
						Global_69311[2 /*14*/] = {func_609(iVar0, iVar4, iVar1)};
						if (!func_488(iVar0, iParam2, iVar4, iVar1, &uVar8, &(Global_69311[2 /*14*/])))
						{
							Global_2621444 = uVar2;
							Global_2621445 = uVar3;
							return 0;
						}
					}
				}
			}
			iVar7++;
		}
		if (uVar8[10] != 0 && uVar8[10] != 1849449579)
		{
			if (func_34(1749, Global_69309, 0) != uVar8[10])
			{
				Global_2621444 = uVar2;
				Global_2621445 = uVar3;
				return 0;
			}
		}
		Global_2621444 = uVar2;
		Global_2621445 = uVar3;
		return 1;
	}
	else if (iParam1 == 13)
	{
		uVar35 = {func_496(iVar0, iParam2)};
		iVar34 = 0;
		while (iVar34 <= 8)
		{
			if (!func_529(iParam0, 14, uVar35[iVar34]))
			{
				return 0;
			}
			iVar34++;
		}
		return 1;
	}
	else if (iParam1 == 14)
	{
		if (get_ped_prop_index(iParam0, Global_69311[1 /*14*/].f_12) == Global_69311[1 /*14*/].f_3 && (get_ped_prop_texture_index(iParam0, Global_69311[1 /*14*/].f_12) == Global_69311[1 /*14*/].f_4 || Global_69311[1 /*14*/].f_3 == -1))
		{
			return 1;
		}
	}
	else
	{
		if (Global_69311[1 /*14*/].f_3 == get_ped_drawable_variation(iParam0, func_430(iParam1)) && Global_69311[1 /*14*/].f_4 == get_ped_texture_variation(iParam0, func_430(iParam1)))
		{
			return 1;
		}
		if (iParam1 == 4)
		{
			if (func_520(iVar0, 11, func_486(iParam0, 11)))
			{
				if (func_518(iVar0, 4, iParam2, &uVar45))
				{
					return func_529(iParam0, 4, uVar45);
				}
			}
			else if (func_517(iVar0, 4, iParam2, &uVar45))
			{
				return func_529(iParam0, 4, uVar45);
			}
		}
	}
	return 0;
}

int func_530(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	var uVar10;
	int iVar11;
	
	if (iParam1 == 11)
	{
		if (iParam0 == joaat("mp_m_freemode_01"))
		{
			if (((((iParam2 >= 0 && iParam2 <= 15) || (iParam2 >= 16 && iParam2 <= 31)) || (iParam2 >= 80 && iParam2 <= 95)) || (iParam2 >= 140 && iParam2 <= 155)) || (iParam2 >= 188 && iParam2 <= 203))
			{
				return 1;
			}
			else if (iParam2 >= 32 && iParam2 <= 47)
			{
				return 6;
			}
			else if (((iParam2 >= 48 && iParam2 <= 63) || (iParam2 >= 64 && iParam2 <= 79)) || (iParam2 >= 108 && iParam2 <= 123))
			{
				return 11;
			}
			else if (iParam2 >= 96 && iParam2 <= 107)
			{
				return 41;
			}
			else if (iParam2 >= 156 && iParam2 <= 171)
			{
				return 36;
			}
			else if (iParam2 >= 172 && iParam2 <= 187)
			{
				return 31;
			}
			else if (iParam2 >= 204 && iParam2 <= 219)
			{
				return 16;
			}
			else if ((iParam2 >= 220 && iParam2 <= 235) || (iParam2 >= 124 && iParam2 <= 139))
			{
				return 26;
			}
			else if (iParam2 == 236)
			{
				return 21;
			}
			else if (iParam2 >= 237)
			{
				iVar0 = func_490(iParam0, iParam2, 11, 3);
				if (iVar0 != -1)
				{
					iVar1 = _0xC17AD0E5752BECDA(iVar0);
					iVar2 = 0;
					while (iVar2 < iVar1)
					{
						get_variant_component(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
						if (iVar5 == 9)
						{
							if (iVar3 != 0 && iVar3 != 1849449579)
							{
								return func_498(iParam0, iVar3, 9, 3);
							}
							else
							{
								return uVar4;
							}
						}
						iVar2++;
					}
				}
				return -99;
			}
		}
		else if (iParam0 == joaat("mp_f_freemode_01"))
		{
			if ((((((iParam2 >= 0 && iParam2 <= 15) || (iParam2 >= 64 && iParam2 <= 79)) || (iParam2 >= 176 && iParam2 <= 191)) || (iParam2 >= 192 && iParam2 <= 207)) || (iParam2 >= 208 && iParam2 <= 223)) || (iParam2 >= 240 && iParam2 <= 255))
			{
				return 1;
			}
			else if (((iParam2 >= 16 && iParam2 <= 31) || (iParam2 >= 112 && iParam2 <= 127)) || (iParam2 >= 128 && iParam2 <= 143))
			{
				return 16;
			}
			else if (iParam2 >= 32 && iParam2 <= 47)
			{
				return 6;
			}
			else if (iParam2 >= 48 && iParam2 <= 63)
			{
				return 11;
			}
			else if ((iParam2 >= 96 && iParam2 <= 111) || (iParam2 >= 160 && iParam2 <= 175))
			{
				return 21;
			}
			else if (iParam2 >= 224 && iParam2 <= 239)
			{
				return 26;
			}
			else if (iParam2 >= 144 && iParam2 <= 159)
			{
				return 0;
			}
			else if (iParam2 >= 80 && iParam2 <= 95)
			{
				return 31;
			}
			else if (iParam2 >= 256)
			{
				iVar6 = func_490(iParam0, iParam2, 11, 4);
				if (iVar6 != -1)
				{
					iVar7 = _0xC17AD0E5752BECDA(iVar6);
					iVar8 = 0;
					while (iVar8 < iVar7)
					{
						get_variant_component(iVar6, iVar8, &iVar9, &uVar10, &iVar11);
						if (iVar11 == 9)
						{
							if (iVar9 != 0 && iVar9 != 1849449579)
							{
								return func_498(iParam0, iVar9, 9, 4);
							}
							else
							{
								return uVar10;
							}
						}
						iVar8++;
					}
				}
				return -99;
			}
		}
	}
	return -99;
}

bool func_531(int iParam0)
{
	int iVar0;
	
	if (!is_ped_injured(iParam0))
	{
		iVar0 = get_entity_model(iParam0);
		if (iVar0 == joaat("mp_m_freemode_01"))
		{
			if (func_486(iParam0, 9) != 0)
			{
				return true;
			}
		}
		else if (iVar0 == joaat("mp_f_freemode_01"))
		{
			if (func_486(iParam0, 9) != 0)
			{
				return true;
			}
		}
	}
	return false;
}

int func_532(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (is_ped_injured(iParam0))
	{
		return -99;
	}
	iVar0 = get_ped_prop_index(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return func_535(iParam1);
	}
	iVar1 = get_ped_prop_texture_index(iParam0, iParam1);
	return func_533(iParam0, iVar0, iVar1, iParam1);
}

int func_533(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (iParam1 == -1)
	{
		return func_535(iParam3);
	}
	iVar0 = get_entity_model(iParam0);
	iVar1 = get_hash_name_for_prop(iParam0, iParam3, iParam1, iParam2);
	if (iVar1 != -1 && iVar1 != 0)
	{
		if (iVar0 == joaat("mp_m_freemode_01"))
		{
			return func_498(get_entity_model(iParam0), iVar1, 14, 3);
		}
		else if (iVar0 == joaat("mp_f_freemode_01"))
		{
			return func_498(get_entity_model(iParam0), iVar1, 14, 4);
		}
	}
	iVar2 = get_number_of_ped_prop_drawable_variations(iParam0, iParam3);
	iVar4 = 0;
	while (iVar4 <= iVar2 - 1)
	{
		iVar6 = get_number_of_ped_prop_texture_variations(iParam0, iParam3, iVar4);
		if (iVar4 != iParam1)
		{
			iVar3 += iVar6;
		}
		else
		{
			iVar5 = 0;
			while (iVar5 <= iVar6 - 1)
			{
				if (iVar4 == iParam1 && iVar5 == iParam2)
				{
					iVar3 += func_534(iParam0, iParam3);
					return iVar3;
				}
				else
				{
					iVar3++;
				}
				iVar5++;
			}
		}
		iVar4++;
	}
	return func_535(iParam3);
}

int func_534(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = get_entity_model(iParam0);
	switch (iVar0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 58;
					break;
				
				case 2:
					return 112;
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 82;
					break;
				
				case 2:
					return 158;
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 88;
					break;
				
				case 2:
					return 154;
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 155;
					break;
				
				case 6:
					return 319;
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 155;
					break;
				
				case 6:
					return 319;
					break;
			}
			break;
	}
	return -99;
}

int func_535(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 5:
			return 5;
			break;
		
		case 6:
			return 6;
			break;
		
		case 7:
			return 7;
			break;
		
		case 8:
			return 8;
			break;
	}
	return 0;
}

void func_536(int iParam0, int iParam1)
{
	struct<10> Var0;
	int iVar10;
	int iVar11;
	int iVar12;