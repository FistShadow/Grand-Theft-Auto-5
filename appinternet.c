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
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0;
	float fLocal_31 = 0;
	float fLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
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
	int[] iLocal_50 = new int[100];
	int[] iLocal_151 = new int[20];
	var[] uLocal_172 = new var[20];
	int iLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 8;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 2;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 8;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 8;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	int iLocal_235 = 0;
	struct<10> Local_236 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	float fLocal_253 = 0;
	float fLocal_254 = 0;
	int iLocal_255 = 0;
	int iLocal_256 = 0;
	int iLocal_257 = 0;
	int[] iLocal_258 = new int[50];
	int[] iLocal_309 = new int[50];
	int[] iLocal_360 = new int[50];
	int[] iLocal_411 = new int[50];
	int iLocal_462 = 0;
	int iLocal_463 = 0;
	int[] iLocal_464 = new int[20];
	int iLocal_485 = 0;
	int iLocal_486 = 0;
	float fLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	float fLocal_490 = 0;
	float fLocal_491 = 0;
	float fLocal_492 = 0;
	float fLocal_493 = 0;
	float fLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	int iLocal_497 = 0;
	int iLocal_498 = 0;
	int iLocal_499 = 0;
	int iLocal_500 = 0;
	int iLocal_501 = 0;
	int iLocal_502 = 0;
	int iLocal_503 = 0;
	int iLocal_504 = 0;
	int iLocal_505 = 0;
	int iLocal_506 = 0;
	int iLocal_507 = 0;
	int iLocal_508 = 0;
	int iLocal_509 = 0;
	int iLocal_510 = 0;
	int iLocal_511 = 0;
	int iLocal_512 = 0;
	int iLocal_513 = 0;
	int iLocal_514 = 0;
	int iLocal_515 = 0;
	int iLocal_516 = 0;
	int iLocal_517 = 0;
	int iLocal_518 = 0;
	int iLocal_519 = 0;
	int iLocal_520 = 0;
	int iLocal_521 = 0;
	int iLocal_522 = 0;
	int iLocal_523 = 0;
	char[64] cLocal_524 = 0;
	int iLocal_540 = 0;
	Vector3 fLocal_541 = 0;
	int iLocal_542 = 0;
	int iLocal_543 = 0;
	var uLocal_544 = 16;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	var uLocal_700 = 0;
	var uLocal_701 = 0;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	int iLocal_709 = 0;
	int iLocal_710 = 0;
	int iLocal_711 = 0;
	int iLocal_712 = 0;
	int iLocal_713 = 0;
	int iLocal_714 = 0;
	struct<57> Local_715 = 0;
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
	var uLocal_1023 = 0;
	var uLocal_1024 = 0;
	var uLocal_1025 = 0;
	var uLocal_1026 = 0;
	var uLocal_1027 = 0;
	var uLocal_1028 = 0;
	struct<57> Local_1029 = 0;
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
	var uLocal_1324 = 0;
	var uLocal_1325 = 0;
	var uLocal_1326 = 0;
	var uLocal_1327 = 0;
	var uLocal_1328 = 0;
	var uLocal_1329 = 0;
	var uLocal_1330 = 0;
	var uLocal_1331 = 0;
	var uLocal_1332 = 0;
	var uLocal_1333 = 0;
	var uLocal_1334 = 0;
	var uLocal_1335 = 0;
	var uLocal_1336 = 0;
	var uLocal_1337 = 0;
	var uLocal_1338 = 0;
	var uLocal_1339 = 0;
	var uLocal_1340 = 0;
	var uLocal_1341 = 0;
	var uLocal_1342 = 0;
	int iLocal_1343 = 0;
	vector3 vLocal_1344 = 0;
	int iLocal_1347 = 0;
	int iLocal_1348 = 0;
	int iLocal_1349 = 0;
	struct<16>[] Local_1350 = new struct<16>[10];
	struct<16>[] Local_1511 = new struct<16>[2];
	int iLocal_1544 = 0;
	int iLocal_1545 = 0;
	int iLocal_1546 = 0;
	vector3 vLocal_1547 = 0;
	var uLocal_1550 = 0;
	var uLocal_1551 = 0;
	var uLocal_1552 = 0;
	struct<13> Local_1553 = 0;
	int iLocal_1566 = 0;
	int iLocal_1567 = 0;
	struct<954> Local_1568 = 32;
	var uLocal_2522 = 0;
	var uLocal_2523 = 0;
	var uLocal_2524 = 0;
	var uLocal_2525 = 0;
	var uLocal_2526 = 0;
	var uLocal_2527 = 0;
	var uLocal_2528 = 0;
	var uLocal_2529 = 0;
	var uLocal_2530 = 0;
	var uLocal_2531 = 0;
	var uLocal_2532 = 0;
	var uLocal_2533 = 0;
	int iLocal_2534 = 0;
	int iLocal_2535 = 0;
	int iLocal_2536 = 0;
	int iLocal_2537 = 0;
	int iLocal_2538 = 0;
	int iLocal_2539 = 0;
	int iLocal_2540 = 0;
	int iLocal_2541 = 0;
	int iLocal_2542 = 0;
	char[64] cLocal_2543 = 0;
	int iLocal_2559 = 0;
	int iLocal_2560 = 0;
	struct<16>[] Local_2561 = new struct<16>[1];
	var uLocal_2578 = 0;
	var uLocal_2579 = 0;
	var uLocal_2580 = 0;
	var uLocal_2581 = 0;
	var uLocal_2582 = 0;
	var uLocal_2583 = 0;
	var uLocal_2584 = 0;
	int iLocal_2585 = 0;
	int iLocal_2586 = 0;
	int iLocal_2587 = 0;
	char[24] cLocal_2588 = 0;
	int iLocal_2594 = 0;
	int iLocal_2595 = 0;
	var uLocal_2596 = 0;
	int iLocal_2597 = 0;
	int iLocal_2598 = 0;
	int iLocal_2599 = 0;
	int iLocal_2600 = 0;
	int iLocal_2601 = 0;
	int iLocal_2602 = 0;
	int iLocal_2603 = 0;
	int iLocal_2604 = 0;
	int iLocal_2605 = 0;
	int iLocal_2606 = 0;
	int iLocal_2607 = 0;
	int iLocal_2608 = 0;
	int iLocal_2609 = 0;
	int iLocal_2610 = 0;
	int iLocal_2611 = 0;
	int iLocal_2612 = 0;
	int iLocal_2613 = 0;
	int iLocal_2614 = 0;
	int iLocal_2615 = 0;
	int iLocal_2616 = 0;
	int iLocal_2617 = 0;
	int iLocal_2618 = 0;
	int iLocal_2619 = 0;
	int iLocal_2620 = 0;
	int iLocal_2621 = 0;
	int iLocal_2622 = 0;
	int iLocal_2623 = 0;
	Vector3 fLocal_2624 = 0;
	Vector3 fLocal_2625 = 0;
	Vector3 fLocal_2626 = 0;
	Vector3 fLocal_2627 = 0;
	int iLocal_2628 = 0;
	int iLocal_2629 = 0;
	int iLocal_2630 = 0;
	int iLocal_2631 = 0;
	int iLocal_2632 = 0;
	int iLocal_2633 = 0;
	int iLocal_2634 = 0;
	int iLocal_2635 = 0;
	int iLocal_2636 = 0;
	int iLocal_2637 = 0;
	int iLocal_2638 = 0;
	int iLocal_2639 = 0;
	int iLocal_2640 = 0;
	int iLocal_2641 = 0;
	int iLocal_2642 = 0;
	int iLocal_2643 = 0;
	int iLocal_2644 = 0;
	int iLocal_2645 = 0;
	int iLocal_2646 = 0;
	int iLocal_2647 = 0;
	int iLocal_2648 = 0;
	int iLocal_2649 = 0;
	int iLocal_2650 = 0;
	int iLocal_2651 = 0;
	int iLocal_2652 = 0;
	int iLocal_2653 = 0;
	int iLocal_2654 = 0;
	int iLocal_2655 = 0;
	int iLocal_2656 = 0;
	int iLocal_2657 = 0;
	int iLocal_2658 = 0;
	char[16] cLocal_2659 = 0;
	int iLocal_2663 = 0;
	int iLocal_2664 = 0;
	int iLocal_2665 = 0;
#endregion

void main()
{
	var uVar0;
	int iVar321;
	int iVar322;
	int iVar323;
	int iVar324;
	int iVar325;
	int iVar326;
	int iVar327;
	int iVar328;
	int iVar329;
	int iVar330;
	char[64] cVar331;
	int iVar347;
	int iVar348;
	int iVar349;
	int iVar350;
	int iVar351;
	float fVar352;
	int iVar353;
	int iVar354;
	int iVar355;
	int iVar356;
	
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
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	iLocal_46 = -1;
	iLocal_47 = -1;
	iLocal_49 = -1;
	iLocal_235 = true;
	fLocal_487 = 0.05f + 0.275f - 0.01f;
	fLocal_490 = -0.05f;
	fLocal_491 = 0.92f;
	fLocal_492 = 1.94f;
	fLocal_493 = 2.99f;
	fLocal_494 = 3.7f;
	iLocal_505 = 1;
	iLocal_510 = -1;
	iLocal_511 = 1;
	iLocal_518 = -1;
	iLocal_519 = -1;
	iLocal_520 = -1;
	iLocal_521 = -1;
	iLocal_522 = -1;
	fLocal_541 = 0f;
	iLocal_711 = -1;
	iLocal_714 = -1;
	iLocal_2586 = true;
	iLocal_2587 = 182494798;
	StringCopy(&cLocal_2588, "", 24);
	iLocal_2595 = -1;
	iLocal_2598 = -1;
	iLocal_2599 = -1;
	iLocal_2600 = -1;
	fLocal_2624 = 0f;
	fLocal_2625 = 0f;
	fLocal_2626 = 0f;
	fLocal_2627 = 0f;
	iLocal_2635 = -1;
	iLocal_2639 = -1;
	iLocal_2640 = -1;
	iLocal_2665 = -1;
	Global_55737 = 0;
	Global_68233 = -1;
	Global_55738 = 0;
	func_1058(&Global_68117);
	if (Global_69489)
	{
		Global_68236 = func_1055(4137, -1, -1);
		Global_68236.f_1 = func_1055(4139, -1, -1);
		Global_68236.f_2 = func_1055(4138, -1, -1);
		Global_68236.f_4 = func_1055(4140, -1, -1);
		Global_68236.f_3 = func_1055(4141, -1, -1);
		Global_68236.f_5 = {func_1054(54, 56, -1)};
		StringCopy(&(Global_68236.f_21), "", 64);
		if (is_string_null_or_empty(&(Global_68236.f_5)))
		{
			StringCopy(&(Global_68236.f_21), _get_label_text("YACHT_GSY"), 64);
		}
		Global_68236.f_37 = func_1053(3147, -1, 0);
		func_1051();
		StringCopy(&(Global_68274.f_21), "", 64);
	}
	func_1050();
	func_1049();
	uVar0 = 160;
	if (func_1048())
	{
		terminate_this_thread();
	}
	if (Global_3)
	{
		terminate_this_thread();
	}
	func_1047();
	Global_55735 = 1;
	network_set_script_is_safe_for_network_game();
	iLocal_1545 = 0;
	if (_get_number_of_instances_of_streamed_script(joaat("appinternet")) > 1)
	{
		return;
	}
	if (is_stunt_jump_in_progress())
	{
		Global_14413.f_1 = 3;
		return;
	}
	func_1046(1, 0, 0);
	iVar321 = 0;
	iVar322 = 0;
	iVar323 = 0;
	iLocal_497 = false;
	Global_68094 = 0;
	Global_68061 = 0;
	iVar324 = unk_0x67D02A194A2FC2BD("font_lib_web");
	while (!has_scaleform_movie_loaded(iVar324))
	{
		wait(0);
	}
	if (func_1045(1, 1, 1, 1))
	{
		iLocal_506 = 1;
	}
	if (Global_68069 == 2)
	{
	}
	if (iLocal_507 == 0)
	{
		iLocal_507 = unk_0x67D02A194A2FC2BD("web_browser");
	}
	iVar325 = Global_68235 + Global_68070;
	while (!has_scaleform_movie_loaded(iLocal_507))
	{
		wait(0);
	}
	func_1044(0);
	if (!is_player_dead(get_player_index()))
	{
		Global_68116 = get_entity_health(get_player_ped(get_player_index()));
	}
	func_1034();
	if (Global_68069 == 2)
	{
		iVar325 -= Global_68235;
		if (iVar325 > 0)
		{
			wait(iVar325);
		}
		play_sound_frontend(-1, "ATM_WINDOW", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
	}
	if (get_is_widescreen())
	{
		func_1033(&iLocal_507, "SET_WIDESCREEN", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
	else
	{
		func_1033(&iLocal_507, "SET_WIDESCREEN", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
	if (Global_68069 == 2)
	{
		func_1033(&iLocal_507, "SET_BROWSER_SKIN", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
	else if (Global_69489)
	{
		func_1033(&iLocal_507, "SET_BROWSER_SKIN", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
	else
	{
		switch (func_1029())
		{
			case 0:
				func_1033(&iLocal_507, "SET_BROWSER_SKIN", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				break;
			
			case 1:
				func_1033(&iLocal_507, "SET_BROWSER_SKIN", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
				break;
			
			case 2:
				func_1033(&iLocal_507, "SET_BROWSER_SKIN", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
				break;
			}
	}
	Global_68058 = 1;
	iVar326 = false;
	func_1027(1);
	if (is_player_playing(player_id()))
	{
		set_ped_config_flag(player_ped_id(), 185, true);
	}
	if (Global_69489)
	{
		_0xC2D15BEF167E27BC();
		set_multiplayer_bank_cash();
		func_1026();
	}
	if (!Global_68094)
	{
		if (is_help_message_being_displayed())
		{
			clear_help(1);
		}
	}
	while (Global_68058)
	{
		if (Global_69489 && iLocal_2585)
		{
			func_1016();
		}
		if (iLocal_2664 || iLocal_2663)
		{
			if (!is_game_in_control_of_music())
			{
				stop_stream();
				stop_audio_scene("WEB_EPSILONISM_SITE_MUSIC_SCENE");
				iLocal_2664 = 0;
				iLocal_2663 = 0;
			}
		}
		if (iLocal_498)
		{
			func_1046(1, 0, 0);
			iLocal_498 = 0;
		}
		else
		{
			iVar327 = _0xE3B05614DCE1D014(0);
			if (iVar327 == 0)
			{
				if (iLocal_500)
				{
					iLocal_498 = 1;
					iLocal_500 = 0;
				}
			}
			else if (!iLocal_500)
			{
				iLocal_498 = 1;
				iLocal_500 = 1;
			}
			iVar328 = 0;
			if (iVar328 == 0)
			{
				if (iLocal_499)
				{
					iLocal_498 = 1;
					iLocal_499 = 0;
				}
			}
			else if (!iLocal_499)
			{
				iLocal_498 = 1;
				iLocal_499 = 1;
			}
			if (_0x6CD79468A1E595C6(2))
			{
				iLocal_498 = 1;
			}
		}
		func_1034();
		if ((!func_1014() || func_1013()) || is_screen_faded_out())
		{
			Global_68058 = 0;
			Global_68061 = 1;
		}
		if (is_cutscene_playing())
		{
			Global_68058 = 0;
			Global_68061 = 1;
		}
		if (Global_68058)
		{
			if (iLocal_2560 == 1)
			{
				iLocal_2560 = 0;
				func_1011();
			}
			if (iLocal_1545 > 3)
			{
				if (get_current_website_id() == 2)
				{
					if (_0x01A358D9128B7A86() != 7 && _0x01A358D9128B7A86() != 8)
					{
						if (iLocal_1545 != 6)
						{
							iLocal_1545 = 0;
						}
					}
				}
			}
			switch (iLocal_1545)
			{
				case 0:
					if (func_1010(player_id()))
					{
						func_1009();
						func_1004();
					}
					break;
				
				case 1:
					if (iLocal_2537 == 0)
					{
						func_1003(0, 6);
					}
					else
					{
						func_1003(5 * iLocal_2537, 6);
					}
					break;
				
				case 2:
					func_1002();
					break;
				
				case 3:
					if (iLocal_2537 == 0)
					{
						func_999(0, 5);
					}
					else
					{
						func_999(0, 5);
					}
					break;
				
				case 4:
					if (iLocal_2559 == 0)
					{
						func_994();
						func_1004();
					}
					break;
				
				case 5:
					if (iLocal_2559 == 0)
					{
						func_982();
					}
					break;
				
				case 6:
					if (iLocal_2559 == 0)
					{
						func_981();
					}
					break;
			}
			if (iLocal_2633)
			{
				if (Global_68074 != -1)
				{
					switch (Global_68074)
					{
						case 10:
						case 11:
						case 12:
						case 13:
						case 15:
						case 16:
						case 26:
							if (Global_68073 == 15)
							{
								if (Global_68077 == 2)
								{
									if (!iLocal_2641 && Global_68074 == 26)
									{
									}
									else
									{
										iVar329 = -1;
										if (func_980(iLocal_2638, Global_68074, Global_68315))
										{
											iVar329 = 1;
										}
										func_919(Global_68074, iVar329, -1);
									}
								}
								else if (Global_68077 == 3)
								{
									func_918(Global_68074, 9, -1, -1);
								}
							}
							else if (Global_68073 == 4)
							{
								if (Global_68074 == 26 && Global_68077 == 3)
								{
									func_916(func_917(44, 0));
								}
							}
							break;
						
						case 14:
							func_915(iLocal_507);
							break;
						
						case 6:
							if (Global_68077 >= 4)
							{
								func_914(iLocal_507, Global_68077);
							}
							else
							{
								func_913(iLocal_507, Global_68077);
							}
							break;
						
						case 20:
							if (iLocal_521 == 4)
							{
								if (Global_68077 == 0 && Global_68216 < 2)
								{
									if (func_912(func_1029()) >= 199)
									{
										func_911(func_1029(), 1, 199);
										_push_scaleform_movie_function(iLocal_507, "SET_DATA_SLOT");
										_push_scaleform_movie_function_parameter_int(false);
										_push_scaleform_movie_function_parameter_int(2);
										_pop_scaleform_movie_function_void();
										Global_68216 = 2;
									}
									else
									{
										play_sound_frontend(-1, "Click_Fail", "WEB_NAVIGATION_SOUNDS_PHONE", 1);
										func_910("WWW_THECHILDRENOFTHEMOUNTAIN_COM_S_PAYMENTERROR");
									}
								}
							}
							else if (iLocal_521 == 6)
							{
								if (Global_68077 == 0 && Global_68216 < 3)
								{
									if (func_912(func_1029()) >= 4999)
									{
										func_911(func_1029(), 1, 4999);
										_push_scaleform_movie_function(iLocal_507, "SET_DATA_SLOT");
										_push_scaleform_movie_function_parameter_int(false);
										_push_scaleform_movie_function_parameter_int(3);
										_pop_scaleform_movie_function_void();
										Global_68216 = 3;
									}
									else
									{
										play_sound_frontend(-1, "Click_Fail", "WEB_NAVIGATION_SOUNDS_PHONE", 1);
										func_910("WWW_THECHILDRENOFTHEMOUNTAIN_COM_S_PAYMENTERROR");
									}
								}
							}
							else if (iLocal_521 == 8)
							{
								if (Global_68077 == 0 && Global_68216 < 5)
								{
									if (func_912(func_1029()) >= 9999)
									{
										func_911(func_1029(), 1, 9999);
										_push_scaleform_movie_function(iLocal_507, "SET_DATA_SLOT");
										_push_scaleform_movie_function_parameter_int(false);
										_push_scaleform_movie_function_parameter_int(5);
										_pop_scaleform_movie_function_void();
										Global_68216 = 5;
									}
									else
									{
										play_sound_frontend(-1, "Click_Fail", "WEB_NAVIGATION_SOUNDS_PHONE", 1);
										func_910("WWW_THECHILDRENOFTHEMOUNTAIN_COM_S_PAYMENTERROR");
									}
								}
							}
							break;
						
						case 21:
							if (Global_69489)
							{
								if (Global_68073 == 3)
								{
									func_907(Global_68077);
								}
								else if (Global_68073 == 4)
								{
									func_906(Global_68077);
								}
								else if (Global_68073 == 5)
								{
									func_905(Global_68077);
								}
								else if (Global_68073 == 8)
								{
									func_889(iLocal_507, Global_68077, 434336/*func_891*/);
								}
							}
							break;
						
						case 27:
							if (Global_69489)
							{
								if (Global_68073 == 11 && Global_68077 == 0)
								{
									iVar330 = func_888();
									func_916(Global_1049163[iVar330 /*1924*/]);
									func_886(iVar330, "_S_WAYPOINT_D_SET", 0, 0, 1);
								}
							}
							break;
						
						default:
							break;
					}
				}
				else
				{
					switch (Global_68076)
					{
						case -1582107009:
							if (!iLocal_516)
							{
								if (iLocal_521 == 2 && Global_68077 == 6)
								{
									func_885("PL_WEB_FOS");
								}
								else if (iLocal_521 == 1 && Global_68077 == 8)
								{
									func_885("PL_WEB_FOS");
								}
								else if (iLocal_521 == 4 && Global_68077 == 8)
								{
									func_885("PL_WEB_FOS");
								}
								else if (iLocal_521 == 4 && Global_68077 == 8)
								{
									func_885("PL_WEB_FOS");
								}
							}
							break;
						
						case -1144347054:
							if (!iLocal_516)
							{
								if (Global_68077 == 7)
								{
									func_885("PL_WEB_HOWITZER");
								}
							}
							break;
						
						case -399181701:
							if (!iLocal_516)
							{
								if (Global_68077 == 6)
								{
									func_885("PL_WEB_KFLF");
								}
							}
							break;
						
						case 168455551:
							if (!(is_pc_version() && !is_dlc_present(729266842)))
							{
								if (!iLocal_516)
								{
									if (Global_68077 == 6)
									{
										func_885("PL_WEB_PRB2");
									}
								}
							}
							break;
						
						case -650963915:
							if (!iLocal_516)
							{
								if (Global_68077 == 8)
								{
									func_885("PL_WEB_RANGERS");
								}
							}
							break;
						
						case -361339786:
							if (!iLocal_516)
							{
								if (Global_68077 == 3)
								{
									func_885("PL_WEB_RS");
								}
							}
							break;
						
						case -405709583:
							if (Global_68077 == 5)
							{
							}
							break;
						
						case -1015187353:
							if (Global_68073 == 2)
							{
								switch (Global_68077)
								{
									case 0:
										func_883(0, &uLocal_544);
										break;
									
									case 1:
										func_883(1, &uLocal_544);
										break;
									
									case 2:
										func_883(2, &uLocal_544);
										break;
									
									case 3:
										func_883(3, &uLocal_544);
										break;
									
									case 4:
										func_883(4, &uLocal_544);
										break;
									
									case 5:
										func_883(5, &uLocal_544);
										break;
									
									case 6:
										func_883(6, &uLocal_544);
										break;
									}
							}
							break;
						
						default:
							break;
						}
				}
				iLocal_2633 = 0;
			}
			if (_0x2432784ACA090DA4(0))
			{
				clear_floating_help(0, 1);
			}
			if (_0x2432784ACA090DA4(1))
			{
				clear_floating_help(1, 1);
			}
			func_891(0, 0);
			wait(0);
			set_input_exclusive(0, Global_14384);
			set_input_exclusive(0, Global_14385);
			if (Global_68060)
			{
				func_849(iLocal_507);
			}
			else
			{
				func_1044(0);
				if (iLocal_2628 == 3)
				{
					func_1033(&iLocal_507, "SET_ANALOG_STICK_INPUT", 0f, 0f, 33f, -1082130432, -1082130432);
				}
				else
				{
					func_1033(&iLocal_507, "SET_ANALOG_STICK_INPUT", 0f, 0f, 0f, -1082130432, -1082130432);
				}
			}
			if (!iVar326)
			{
				StringCopy(&cVar331, "WWW_EYEFIND_INFO", 64);
				switch (Global_68069)
				{
					case 2:
						StringCopy(&cVar331, "WWW_BANK_COM", 64);
						break;
					
					case 1:
						StringCopy(&cVar331, "WWW_EYEFIND_INFO", 64);
						break;
					
					case 3:
						StringCopy(&cVar331, "WWW_LIFEINVADER_COM", 64);
						Global_68068 = -1;
						break;
					
					case 4:
						Global_68068 = -1;
						StringCopy(&cVar331, "WWW_LIFEINVADER_COM_S_USER584348_3", 64);
						break;
					
					case 7:
						cVar331 = {Global_68042};
						break;
					
					case 5:
						StringCopy(&cVar331, "WWW_BAWSAQ_COM", 64);
						break;
					
					case 6:
						cVar331 = {Global_2434762.f_658.f_12};
						break;
				}
				_push_scaleform_movie_function(iLocal_507, "GO_TO_WEBPAGE");
				_begin_text_component("STRING");
				add_text_component_substring_website(&cVar331);
				_end_text_component();
				_pop_scaleform_movie_function_void();
				if (are_strings_equal(&cVar331, "WWW_EYEFIND_INFO"))
				{
					func_847();
					Global_68073 = 1;
					Global_68074 = 2;
					_push_scaleform_movie_function(iLocal_507, "SET_DATA_SLOT_EMPTY");
					_pop_scaleform_movie_function_void();
					func_840(iLocal_507, 1, &uVar0, 0);
					Global_68071 = get_game_timer();
				}
				iVar326 = true;
			}
			if (iLocal_514 != 0)
			{
				if (iLocal_497)
				{
					Global_68058 = 0;
				}
			}
			if (!iLocal_2602)
			{
				iVar347 = 0;
				iVar348 = false;
				switch (iLocal_514)
				{
					case 0:
						while (!has_scaleform_container_movie_loaded_into_parent(iLocal_507) && !iVar348)
						{
							func_1044(0);
							if (_is_input_just_disabled(2))
							{
								_push_scaleform_movie_function(iLocal_507, "SET_MOUSE_INPUT");
								_push_scaleform_movie_function_parameter_float(get_disabled_control_normal(2, 239));
								_push_scaleform_movie_function_parameter_float(get_disabled_control_normal(2, 240));
								_pop_scaleform_movie_function_void();
							}
							else
							{
								_push_scaleform_movie_function(iLocal_507, "SET_ANALOG_STICK_INPUT");
								_push_scaleform_movie_function_parameter_float(0f);
								_push_scaleform_movie_function_parameter_float(0f);
								_push_scaleform_movie_function_parameter_float(0f);
								_pop_scaleform_movie_function_void();
								fLocal_541 = 0f;
							}
							iVar347 += floor(0f + 1000f * timestep());
							if (iVar347 > 10000)
							{
								iVar348 = true;
							}
							func_891(0, 0);
							if (((!has_scaleform_container_movie_loaded_into_parent(iLocal_507) && !iVar348) && iVar347 > 2000) && ((is_control_just_pressed(2, 202) || is_disabled_control_just_pressed(2, 202)) || (is_control_just_pressed(2, 238) && !is_warning_message_active())))
							{
								func_1011();
								set_scaleform_movie_as_no_longer_needed(&iLocal_507);
								return;
							}
							wait(0);
						}
						if (!iVar348)
						{
							iLocal_514 = 2;
						}
						else
						{
							func_1011();
						}
						break;
					
					case 2:
						_push_scaleform_movie_function(iLocal_507, "INITIALISE_WEBSITE");
						_pop_scaleform_movie_function_void();
						_push_scaleform_movie_function(iLocal_507, "IS_SITE_DYNAMIC");
						uLocal_2596 = _pop_scaleform_movie_function();
						iVar347 = Global_68235 + 6000;
						iVar348 = false;
						while (!_0x768FF8961BA904D6(uLocal_2596) && !iVar348)
						{
							func_1044(0);
							if (_is_input_just_disabled(2))
							{
								_push_scaleform_movie_function(iLocal_507, "SET_MOUSE_INPUT");
								_push_scaleform_movie_function_parameter_float(get_disabled_control_normal(2, 239));
								_push_scaleform_movie_function_parameter_float(get_disabled_control_normal(2, 240));
								_pop_scaleform_movie_function_void();
							}
							else
							{
								_push_scaleform_movie_function(iLocal_507, "SET_ANALOG_STICK_INPUT");
								_push_scaleform_movie_function_parameter_float(0f);
								_push_scaleform_movie_function_parameter_float(0f);
								_push_scaleform_movie_function_parameter_float(0f);
								_pop_scaleform_movie_function_void();
								fLocal_541 = 0f;
							}
							func_891(0, 0);
							if (Global_68235 > iVar347)
							{
								iVar348 = true;
							}
							else
							{
								wait(0);
							}
						}
						if (!iVar348)
						{
							iLocal_2597 = _0x2DE7EFA66B906036(uLocal_2596);
						}
						else
						{
							iLocal_2597 = 0;
						}
						func_839();
						if (iLocal_2597 == 1)
						{
							iLocal_520 = -1;
							iLocal_521 = 0;
							iLocal_518 = -1;
							iLocal_519 = 0;
							iLocal_2601 = true;
							iVar321 = 10;
							while (iVar321 != 0)
							{
								iVar321--;
								if (_is_input_just_disabled(2))
								{
									_push_scaleform_movie_function(iLocal_507, "SET_MOUSE_INPUT");
									_push_scaleform_movie_function_parameter_float(get_disabled_control_normal(2, 239));
									_push_scaleform_movie_function_parameter_float(get_disabled_control_normal(2, 240));
									_pop_scaleform_movie_function_void();
								}
								else
								{
									_push_scaleform_movie_function(iLocal_507, "SET_ANALOG_STICK_INPUT");
									_push_scaleform_movie_function_parameter_float(0f);
									_push_scaleform_movie_function_parameter_float(0f);
									_push_scaleform_movie_function_parameter_float(0f);
									_pop_scaleform_movie_function_void();
									fLocal_541 = 0f;
								}
								func_891(0, 0);
								wait(0);
							}
							iVar322 = _0x01A358D9128B7A86();
							iVar323 = get_current_website_id();
							if (iVar322 != 0)
							{
								if (iVar322 != iLocal_2599)
								{
									iLocal_2600 = iLocal_2599;
									iLocal_2599 = iVar322;
								}
							}
							else
							{
								iVar322 = iLocal_2599;
							}
							if (iVar323 != 0)
							{
								if (iVar323 != iLocal_2598)
								{
									iLocal_515 = 0;
								}
								iLocal_2598 = iVar323;
							}
							else
							{
								iVar323 = iLocal_2598;
							}
							switch (Global_68069)
							{
								case 0:
									if (iVar323 == 2)
									{
										func_847();
									}
									func_729(iVar323, iVar322, iLocal_507, &uVar0, &uLocal_544, 1);
									iLocal_505 = 0;
									if (iVar323 == 6)
									{
										if (iLocal_235)
										{
											while (!has_additional_text_loaded(4))
											{
												func_891(0, 0);
												wait(0);
											}
											if (has_additional_text_loaded(4))
											{
											}
											Global_68071 = get_game_timer() - 120;
										}
									}
									break;
								
								case 3:
								case 4:
									iLocal_2632 = true;
									func_729(iVar323, iVar322, iLocal_507, &uVar0, &uLocal_544, 1);
									break;
							}
						}
						else
						{
							iVar321 = 10;
							while (iVar321 != 0)
							{
								iVar321--;
								if (_is_input_just_disabled(2))
								{
									_push_scaleform_movie_function(iLocal_507, "SET_MOUSE_INPUT");
									_push_scaleform_movie_function_parameter_float(get_disabled_control_normal(2, 239));
									_push_scaleform_movie_function_parameter_float(get_disabled_control_normal(2, 240));
									_pop_scaleform_movie_function_void();
								}
								else
								{
									_push_scaleform_movie_function(iLocal_507, "SET_ANALOG_STICK_INPUT");
									_push_scaleform_movie_function_parameter_float(0f);
									_push_scaleform_movie_function_parameter_float(0f);
									_push_scaleform_movie_function_parameter_float(0f);
									_pop_scaleform_movie_function_void();
									fLocal_541 = 0f;
								}
								func_891(0, 0);
								wait(0);
							}
							func_103();
							iLocal_2601 = false;
							if (Global_68076 == -1582107009)
							{
								if (func_102(20))
								{
								}
								else
								{
									_push_scaleform_movie_function(iLocal_507, "SET_DATA_SLOT");
									_push_scaleform_movie_function_parameter_int(false);
									_push_scaleform_movie_function_parameter_bool(true);
									_pop_scaleform_movie_function_void();
								}
							}
							if ((_get_number_of_instances_of_streamed_script(joaat("act_cinema")) != 0 || _get_number_of_instances_of_streamed_script(joaat("ob_tv")) != 0) || _get_number_of_instances_of_streamed_script(joaat("am_mp_property_int")) != 0)
							{
								if (((((Global_68076 == -1582107009 || Global_68076 == -1144347054) || Global_68076 == -399181701) || Global_68076 == 168455551) || Global_68076 == -650963915) || Global_68076 == -361339786)
								{
									func_101();
								}
								else
								{
									iLocal_517 = 0;
								}
							}
							if (is_pc_version() && !is_dlc_present(729266842))
							{
								if (Global_68076 == 168455551)
								{
									func_101();
								}
							}
							if (Global_68076 == -405709583)
							{
								func_101();
							}
						}
						iLocal_514 = 3;
						iLocal_2602 = true;
						break;
				}
			}
			else
			{
				if (iLocal_497)
				{
					Global_68058 = 0;
				}
				if (!has_scaleform_container_movie_loaded_into_parent(iLocal_507))
				{
					if (iLocal_2664 || iLocal_2663)
					{
						stop_stream();
						iLocal_2664 = 0;
						iLocal_2663 = 0;
					}
					if (has_additional_text_loaded(4))
					{
						clear_additional_text(4, false);
						func_99();
					}
					iLocal_2602 = false;
					Global_68072 = 0;
					iLocal_514 = 0;
				}
				else
				{
					iVar349 = false;
					if (iLocal_2601)
					{
						iLocal_2636 = _0x01A358D9128B7A86();
						iVar323 = get_current_website_id();
						iVar350 = iLocal_2598;
						if (iVar323 != 0)
						{
							iLocal_2598 = iVar323;
						}
						if (iLocal_2636 != 0)
						{
							iLocal_2599 = iLocal_2636;
						}
						if ((iLocal_2599 != iLocal_2600 || iLocal_2598 != iVar350) || Global_68075 != Global_68076)
						{
							Global_68075 = Global_68076;
							iLocal_2629 = false;
							iVar351 = false;
							switch (iLocal_2598)
							{
								case 4:
									if (iVar350 != 4)
									{
										Global_55735 = 1;
									}
									iVar351 = true;
									break;
								
								case 5:
									if (!iLocal_2664)
									{
										iLocal_2663 = 1;
									}
									break;
								
								case 6:
									if (!func_96(0) && !iLocal_2632)
									{
									}
									else
									{
										switch (iLocal_2599)
										{
											case 6:
												Global_68064 = 1;
												break;
											
											case 8:
												Global_68065 = 1;
												break;
											}
									}
									break;
								
								case 7:
									if (iVar350 != 7)
									{
										Global_55735 = 1;
									}
									iVar351 = true;
									break;
							}
							func_39(iVar351);
							if (iLocal_2598 == 2)
							{
								func_847();
							}
							func_729(iLocal_2598, iLocal_2599, iLocal_507, &uVar0, &uLocal_544, iLocal_505);
							iLocal_505 = 1;
							iLocal_2600 = iLocal_2599;
							if (iLocal_2663)
							{
								if (is_game_in_control_of_music())
								{
									while (!load_stream("MUSIC", "EPSILONISM_SITE_SOUNDS"))
									{
										func_1044(0);
										if (_is_input_just_disabled(2))
										{
											_push_scaleform_movie_function(iLocal_507, "SET_MOUSE_INPUT");
											_push_scaleform_movie_function_parameter_float(get_disabled_control_normal(2, 239));
											_push_scaleform_movie_function_parameter_float(get_disabled_control_normal(2, 240));
											_pop_scaleform_movie_function_void();
										}
										else
										{
											_push_scaleform_movie_function(iLocal_507, "SET_ANALOG_STICK_INPUT");
											_push_scaleform_movie_function_parameter_float(0f);
											_push_scaleform_movie_function_parameter_float(0f);
											_push_scaleform_movie_function_parameter_float(0f);
											_pop_scaleform_movie_function_void();
											fLocal_541 = 0f;
										}
										func_891(0, 0);
										wait(0);
									}
									iLocal_2664 = 1;
									play_stream_frontend();
									iLocal_2663 = 0;
									start_audio_scene("WEB_EPSILONISM_SITE_MUSIC_SCENE");
								}
								else
								{
									iLocal_2664 = 0;
									iLocal_2663 = 0;
								}
							}
						}
						else
						{
							if (Global_52927)
							{
								if (Global_68073 == 4)
								{
									if (!(iLocal_2599 == 9 || iLocal_2599 == 8))
									{
										Global_68072 = 1;
									}
								}
							}
							Global_52927 = 0;
							if (Global_68072)
							{
								if (iLocal_2598 == 2)
								{
									func_847();
								}
								Global_68072 = 0;
								func_729(iLocal_2598, iLocal_2599, iLocal_507, &uVar0, &uLocal_544, iLocal_505);
								iLocal_505 = 1;
							}
						}
					}
					else
					{
						iLocal_2629 = false;
						func_103();
					}
					if (!iVar349)
					{
						if (Global_68233 > -1)
						{
							if (Global_68233 < Global_68235)
							{
								_push_scaleform_movie_function(iLocal_507, "GO_TO_WEBPAGE");
								_begin_text_component("STRING");
								add_text_component_substring_website(&Global_68217);
								_end_text_component();
								_pop_scaleform_movie_function_void();
								Global_68233 = -1;
							}
						}
					}
				}
				if (iLocal_2601)
				{
					if (iLocal_2598 == 4 || iLocal_2598 == 7)
					{
						fVar352 = 0f + 1f * timestep();
						iVar353 = floor(fVar352 * 1000f);
						func_38(joaat("time_spent_on_stockmarket"), iVar353);
					}
				}
				iLocal_501 = 1;
				if (Global_68069 != 7)
				{
					if (func_37())
					{
						if ((!Global_101154.f_25089.f_470 && !Global_69489) && !func_36())
						{
							func_34();
						}
					}
				}
			}
			if (Global_68317 != iLocal_2665)
			{
				if (Global_68317 > 6)
				{
					Global_68317 = -1;
				}
				if (iLocal_2665 == -1 && Global_68317 > 0)
				{
					pause_clock(true);
					func_32();
				}
				else if (Global_68317 == -1 && iLocal_2665 > 0)
				{
					pause_clock(false);
				}
				if (Global_68317 > -1 && Global_68317 < 6)
				{
					_push_scaleform_movie_function(iLocal_507, "PROXY_FUNCTION");
					_push_scaleform_movie_function_parameter_int(false);
					_push_scaleform_movie_function_parameter_int(Global_68317);
					_pop_scaleform_movie_function_void();
				}
				iLocal_2665 = Global_68317;
			}
			if (Global_68317 > -1)
			{
				func_19();
			}
			if (iLocal_516)
			{
				if (is_pause_menu_active())
				{
					_push_scaleform_movie_function(iLocal_507, "SUPRESS_HISTORY");
					_push_scaleform_movie_function_parameter_bool(false);
					_pop_scaleform_movie_function_void();
					set_tv_channel(-1);
					stop_audio_scene("INTERNET_BROWSER_VIDEO_SCENE");
					iLocal_516 = 0;
				}
				else
				{
					set_text_render_id(get_default_script_rendertarget_render_id());
					_set_2d_layer(4);
					_0xC6372ECD45D73BCD(1);
					draw_tv_channel(0.5f, 0.5f, 0.5f, 0.5f, 0f, 255, 255, 255, 255);
				}
			}
		}
		else
		{
			wait(200);
		}
		if (func_18(8, -1))
		{
			Global_68061 = 1;
		}
		if (func_17())
		{
			Global_68061 = 1;
		}
		if (Global_68061 == 1)
		{
			if (iLocal_2602)
			{
				Global_68061 = 0;
				func_1011();
			}
		}
		if (iLocal_2629)
		{
			if (iLocal_2631 > 20)
			{
				func_15("BUSY");
				if (iLocal_2630)
				{
					Global_68084 += 1 + Global_68084 + 1 / 50;
					Global_68072 = 1;
					if (Global_68084 > Global_68086)
					{
						Global_68084 = Global_68086;
					}
				}
				else
				{
					Global_68084 -= 1 + Global_68084 + 1 / 100;
					Global_68072 = 1;
				}
			}
			else
			{
				iLocal_2631++;
			}
		}
		if (iLocal_497)
		{
			Global_68058 = 0;
		}
		if (is_player_dead(get_player_index()) || func_14())
		{
			func_1011();
		}
		if (Global_69489 && func_13())
		{
			func_1011();
		}
		if (Global_69489 && func_12())
		{
			func_1011();
		}
		if (!Global_69489 && func_11())
		{
			func_1011();
		}
	}
	if (Global_69489)
	{
		_0x95CF81BD06EE1887();
		remove_multiplayer_bank_cash();
	}
	func_1011();
	_push_scaleform_movie_function(iLocal_507, "SUPRESS_HISTORY");
	_push_scaleform_movie_function_parameter_bool(false);
	_pop_scaleform_movie_function_void();
	_push_scaleform_movie_function(iLocal_507, "SHUTDOWN_MOVIE");
	_pop_scaleform_movie_function_void();
	iLocal_501 = 0;
	func_10();
	wait(0);
	set_scaleform_movie_as_no_longer_needed(&iLocal_507);
	iLocal_507 = 0;
	set_scaleform_movie_as_no_longer_needed(&iLocal_508);
	iLocal_508 = 0;
	if (iLocal_509 != 0)
	{
		set_scaleform_movie_as_no_longer_needed(&iLocal_509);
		iLocal_509 = 0;
	}
	iVar354 = get_game_timer();
	while (has_scaleform_movie_loaded(iLocal_508) && get_game_timer() <= iVar354 + 500)
	{
		func_10();
		wait(0);
	}
	iLocal_508 = 0;
	if (iLocal_2664 || iLocal_2663)
	{
		stop_stream();
		stop_audio_scene("WEB_EPSILONISM_SITE_MUSIC_SCENE");
		iLocal_2664 = 0;
	}
	Global_68069 = 0;
	if (iLocal_502)
	{
		display_radar(true);
	}
	if (iLocal_503)
	{
		stop_audio_scene("WEB_GENERAL_BROWSING_SCENE");
	}
	if (iLocal_504)
	{
		stop_audio_scene("GTAO_Computer_Screen_Active_Scene");
		iLocal_504 = 0;
	}
	func_5("BS_TUT_1", 1);
	iVar354 = get_game_timer();
	while (has_scaleform_movie_loaded(iLocal_507) && get_game_timer() <= iVar354 + 500)
	{
		func_10();
		wait(0);
	}
	iLocal_507 = 0;
	func_10();
	wait(0);
	if (iLocal_540)
	{
		func_2(3, 0);
		iLocal_540 = 0;
	}
	iVar355 = Global_68235 + 500;
	iVar356 = 10;
	while (iVar356 > 0)
	{
		func_10();
		Global_68235 += round(0f + 1000f * timestep());
		wait(0);
		iVar356--;
	}
	set_scaleform_movie_as_no_longer_needed(&iVar324);
	while (iVar355 > Global_68235)
	{
		func_10();
		Global_68235 += round(0f + 1000f * timestep());
		wait(0);
	}
	clear_additional_text(4, true);
	if (Global_69489)
	{
		func_1();
	}
	set_scaleform_movie_as_no_longer_needed(&iLocal_1567);
	_0x8817605C2BA76200();
	if (is_player_playing(player_id()))
	{
		set_ped_config_flag(player_ped_id(), 185, false);
	}
	Global_55737 = 0;
	if (func_1045(0, 0, iLocal_506, 1))
	{
		iLocal_506 = 0;
	}
}

void func_1()
{
	Global_2428492.f_648.f_9 = 0;
}

void func_2(int iParam0, int iParam1)
{
	var uVar0;
	
	if (func_4(iParam0, iParam1))
	{
		uVar0 = func_3();
		Global_2442990[uVar0] = iParam0;
	}
}

int func_3()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2442990[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_4(int iParam0, var uParam1)
{
	if (Global_1315901)
	{
		return false;
	}
	if (iParam0 == 22)
	{
		return true;
	}
	if ((((((((uParam1 || !Global_1315913) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return true;
	}
	else
	{
		return false;
	}
	return true;
}

void func_5(char* sParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (Global_99796 && iParam1)
	{
		if (func_9(sParam0) && !is_help_message_fading_out())
		{
			clear_help(0);
		}
	}
	iVar0 = 0;
	while (iVar0 < Global_101154.f_24935.f_145)
	{
		if (are_strings_equal(sParam0, &(Global_101154.f_24935[iVar0 /*16*/])))
		{
			iVar1 = iVar0;
			while (iVar1 <= Global_101154.f_24935.f_145 - 2)
			{
				func_8(iVar1, iVar1 + 1);
				iVar1++;
			}
			func_7(Global_101154.f_24935.f_145 - 1);
			Global_101154.f_24935.f_145--;
			func_6();
			return;
		}
		iVar0++;
	}
}

void func_6()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_101154.f_24935.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_101154.f_24935.f_145)
	{
		if (is_bit_set(Global_101154.f_24935[iVar0 /*16*/].f_11, false))
		{
			if (Global_101154.f_24935[iVar0 /*16*/].f_12 > Global_101154.f_24935.f_146[0])
			{
				Global_101154.f_24935.f_146[0] = Global_101154.f_24935[iVar0 /*16*/].f_12;
			}
		}
		if (is_bit_set(Global_101154.f_24935[iVar0 /*16*/].f_11, true))
		{
			if (Global_101154.f_24935[iVar0 /*16*/].f_12 > Global_101154.f_24935.f_146[1])
			{
				Global_101154.f_24935.f_146[1] = Global_101154.f_24935[iVar0 /*16*/].f_12;
			}
		}
		if (is_bit_set(Global_101154.f_24935[iVar0 /*16*/].f_11, 2))
		{
			if (Global_101154.f_24935[iVar0 /*16*/].f_12 > Global_101154.f_24935.f_146[2])
			{
				Global_101154.f_24935.f_146[2] = Global_101154.f_24935[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

void func_7(int iParam0)
{
	StringCopy(&(Global_101154.f_24935[iParam0 /*16*/]), "", 16);
	StringCopy(&(Global_101154.f_24935[iParam0 /*16*/].f_4), "", 16);
	Global_101154.f_24935[iParam0 /*16*/].f_8 = 0;
	Global_101154.f_24935[iParam0 /*16*/].f_9 = 0;
	Global_101154.f_24935[iParam0 /*16*/].f_11 = 0;
	Global_101154.f_24935[iParam0 /*16*/].f_10 = -1;
	Global_101154.f_24935[iParam0 /*16*/].f_12 = 0;
	Global_101154.f_24935[iParam0 /*16*/].f_13 = 0;
	Global_101154.f_24935[iParam0 /*16*/].f_14 = 0;
	Global_101154.f_24935[iParam0 /*16*/].f_15 = 0;
}

void func_8(int iParam0, var uParam1)
{
	Global_101154.f_24935[iParam0 /*16*/] = {Global_101154.f_24935[uParam1 /*16*/]};
	Global_101154.f_24935[iParam0 /*16*/].f_4 = {Global_101154.f_24935[uParam1 /*16*/].f_4};
	Global_101154.f_24935[iParam0 /*16*/].f_8 = Global_101154.f_24935[uParam1 /*16*/].f_8;
	Global_101154.f_24935[iParam0 /*16*/].f_10 = Global_101154.f_24935[uParam1 /*16*/].f_10;
	Global_101154.f_24935[iParam0 /*16*/].f_9 = Global_101154.f_24935[uParam1 /*16*/].f_9;
	Global_101154.f_24935[iParam0 /*16*/].f_11 = Global_101154.f_24935[uParam1 /*16*/].f_11;
	Global_101154.f_24935[iParam0 /*16*/].f_12 = Global_101154.f_24935[uParam1 /*16*/].f_12;
	Global_101154.f_24935[iParam0 /*16*/].f_13 = Global_101154.f_24935[uParam1 /*16*/].f_13;
	Global_101154.f_24935[iParam0 /*16*/].f_14 = Global_101154.f_24935[uParam1 /*16*/].f_14;
	Global_101154.f_24935[iParam0 /*16*/].f_15 = Global_101154.f_24935[uParam1 /*16*/].f_15;
}

int func_9(char* sParam0)
{
	_0x0A24DA3A41B718F5(sParam0);
	return _0x10BDDBFC529428DD(0);
}

void func_10()
{
	func_1034();
	disable_all_control_actions(0);
	disable_all_control_actions(2);
	if (!iLocal_501)
	{
		return;
	}
	enable_control_action(2, 201, 1);
	enable_control_action(2, 202, 1);
	enable_control_action(2, 187, 1);
	enable_control_action(2, 205, 1);
	enable_control_action(2, 189, 1);
	enable_control_action(2, 207, 1);
	enable_control_action(2, 206, 1);
	enable_control_action(2, 190, 1);
	enable_control_action(2, 208, 1);
	enable_control_action(2, 217, 1);
	enable_control_action(2, 188, 1);
	enable_control_action(2, 203, 1);
	enable_control_action(2, 204, 1);
	enable_control_action(2, 195, 1);
	enable_control_action(2, 196, 1);
	enable_control_action(2, 197, 1);
	enable_control_action(2, 198, 1);
	enable_control_action(2, 237, 1);
	enable_control_action(2, 238, 1);
	enable_control_action(2, 239, 1);
	enable_control_action(2, 240, 1);
	enable_control_action(2, 241, 1);
	enable_control_action(2, 242, 1);
	set_input_exclusive(2, 190);
	set_input_exclusive(2, 189);
	set_input_exclusive(2, 187);
	set_input_exclusive(2, 188);
	enable_control_action(0, 0, 1);
	if (!_0xEE778F8C7E1142E2(_0x19CAFA3C87F7C2FF()) == 4)
	{
		enable_control_action(0, 1, 1);
		enable_control_action(0, 2, 1);
		enable_control_action(0, 3, 1);
		enable_control_action(0, 4, 1);
		enable_control_action(0, 5, 1);
		enable_control_action(0, 6, 1);
	}
	enable_control_action(0, 95, 1);
	enable_control_action(0, 98, 1);
	enable_control_action(0, 209, 1);
	enable_control_action(0, 210, 1);
	enable_control_action(0, 228, 1);
	enable_control_action(0, 229, 1);
	enable_control_action(0, 230, 1);
	enable_control_action(0, 231, 1);
	enable_control_action(0, 218, 1);
	enable_control_action(0, 219, 1);
	enable_control_action(0, 220, 1);
	enable_control_action(0, 221, 1);
	set_input_exclusive(2, 237);
	set_input_exclusive(2, 238);
	set_input_exclusive(2, 241);
	set_input_exclusive(2, 242);
	enable_control_action(2, 241, 1);
	if (!(_is_input_disabled(2) && (_0xE3B05614DCE1D014(0) != 0 && !iLocal_516)))
	{
		enable_control_action(2, 199, 1);
	}
	_0xEB2D525B57F42B40();
}

var func_11()
{
	return Global_68059;
}

var func_12()
{
	return Global_1715861;
}

int func_13()
{
	return Global_1587523[player_id() /*444*/].f_180 != 0;
}

int func_14()
{
	if (!network_is_game_in_progress())
	{
		return Global_89089.f_44 == 1;
	}
	return false;
}

void func_15(char* sParam0)
{
	int iVar0;
	
	iVar0 = get_hash_key(sParam0);
	if (iLocal_2587 == iVar0)
	{
		return;
	}
	iLocal_2587 = iVar0;
	_push_scaleform_movie_function(iLocal_507, "SET_CURSOR_STATE");
	func_16(sParam0);
	_pop_scaleform_movie_function_void();
}

void func_16(char* sParam0)
{
	_begin_text_component(sParam0);
	_end_text_component();
}

bool func_17()
{
	if (((Global_91278 == 13 || Global_91278 == 10) || Global_91278 == 11) || Global_91278 == 12)
	{
		return false;
	}
	return true;
}

int func_18(int iParam0, int iParam1)
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

void func_19()
{
	if (!func_31() && Global_68317 != -1)
	{
		if (!iLocal_2658)
		{
			if (func_20(&uLocal_544, "EPSWAUD", &cLocal_2659, 9, 0, 1, 0))
			{
				iLocal_2658 = 1;
			}
		}
		else
		{
			iLocal_2658 = 0;
			Global_68317++;
			switch (Global_68317)
			{
				case 2:
					StringCopy(&cLocal_2659, "EPSW_VOICE2", 16);
					break;
				
				case 3:
					StringCopy(&cLocal_2659, "EPSW_VOICE3", 16);
					break;
				
				case 4:
					StringCopy(&cLocal_2659, "EPSW_VOICE4", 16);
					break;
				
				case 5:
					StringCopy(&cLocal_2659, "EPSW_VOICE5", 16);
					break;
				
				case 6:
					_push_scaleform_movie_function(iLocal_507, "PROXY_FUNCTION");
					_push_scaleform_movie_function_parameter_int(6);
					_push_scaleform_movie_function_parameter_int(Global_68317);
					_pop_scaleform_movie_function_void();
					Global_68317 = -1;
					break;
				
				default:
					Global_68317 = -1;
					break;
				}
			}
	}
}

int func_20(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_30(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	Global_2621441 = 1;
	return func_21(sParam2, iParam3, 0);
}

bool func_21(char* sParam0, int iParam1, int iParam2)
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
					func_29();
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
		if (func_18(8, -1))
		{
			return false;
		}
		Global_15788 = {Global_15782};
		func_28();
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
				func_26();
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
				if (func_25())
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
			if (func_24())
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
			func_23();
			Global_15722 = iParam2;
		}
		Global_15714 = iParam1;
		StringCopy(&Global_15331, sParam0, 24);
		Global_14578 = 0;
		func_22();
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
		func_29();
	}
	return false;
}

void func_22()
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

void func_23()
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

bool func_24()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return true;
	}
	return false;
}

bool func_25()
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

void func_26()
{
	if (func_27(14))
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
		Global_14413 = func_1029();
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

int func_27(int iParam0)
{
	return Global_35711 == iParam0;
}

void func_28()
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

void func_29()
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

void func_30(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_15166 = {*uParam0};
	Global_1599 = iParam1;
	StringCopy(&Global_15782, sParam2, 24);
	Global_16701 = uParam5;
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

bool func_31()
{
	if (Global_15712 != 0 || is_scripted_conversation_ongoing())
	{
		return true;
	}
	return false;
}

void func_32()
{
	func_33(&uLocal_544, 0, 0, "CRIS", 0, 1);
	iLocal_2658 = 0;
	StringCopy(&cLocal_2659, "EPSW_VOICE1", 16);
}

void func_33(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_34()
{
	if (iLocal_543 == 0)
	{
		func_35(1);
		iLocal_542 = Global_68235 + 7500;
		if (!is_player_dead(get_player_index()))
		{
			Global_68116 = get_entity_health(get_player_ped(get_player_index()));
		}
		iLocal_543++;
	}
	if (iLocal_543 != 0)
	{
		switch (iLocal_543)
		{
			case 1:
				Global_68094 = 1;
				StringCopy(&Global_68095, "BROWTUT1", 16);
				if (_is_input_disabled(2))
				{
					StringCopy(&Global_68095, "BROWTUT1_KM", 16);
				}
				break;
			
			case 2:
				StringCopy(&Global_68095, "BROWTUT2", 16);
				if (_is_input_disabled(2))
				{
					StringCopy(&Global_68095, "BROWTUT2_KM", 16);
				}
				break;
			
			case 3:
				StringCopy(&Global_68095, "BROWTUT3", 16);
				if (_is_input_disabled(2))
				{
					StringCopy(&Global_68095, "BROWTUT3_KM", 16);
				}
				break;
			
			case 4:
				StringCopy(&Global_68095, "BROWTUT4", 16);
				break;
			
			case 5:
				StringCopy(&Global_68095, "BROWTUT5", 16);
				if (_is_input_disabled(2))
				{
					StringCopy(&Global_68095, "BROWTUT5_KM", 16);
				}
				break;
			
			case 6:
				if (is_orbis_version())
				{
					StringCopy(&Global_68095, "BROWTUT1a", 16);
				}
				else
				{
					iLocal_543++;
				}
				break;
			
			default:
				Global_68094 = 0;
				iLocal_543 = 0;
				Global_101154.f_25089.f_470 = 1;
				func_35(0);
				break;
		}
		if (iLocal_542 < Global_68235)
		{
			iLocal_542 = Global_68235 + 7500;
			iLocal_543++;
		}
	}
}

void func_35(int iParam0)
{
	if (!iParam0)
	{
		Global_99798 = get_game_timer() + 250;
	}
	Global_99795 = iParam0;
}

bool func_36()
{
	if (Global_35711 == 15)
	{
		return false;
	}
	return true;
}

bool func_37()
{
	if (Global_101154.f_24935.f_145 > 0)
	{
		return false;
	}
	return true;
}

void func_38(int iParam0, int iParam1)
{
	int iVar0;
	
	stat_get_int(iParam0, &iVar0, -1);
	iVar0 += iParam1;
	stat_set_int(iParam0, iVar0, 1);
}

void func_39(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0)
	{
		if (!Global_69489)
		{
			if (!Global_101154.f_25089.f_99 && !Global_68093)
			{
				if (Global_101154.f_25089.f_470)
				{
					if (!Global_101154.f_25089.f_99)
					{
						func_94("BS_TUT_1", 2, 0, 1000, 10000, 7, 0, 0, 0);
						Global_101154.f_25089.f_99 = 1;
					}
				}
			}
		}
		if (iLocal_2599 == 8)
		{
			if (iLocal_2600 == 6)
			{
				Global_68080 = 1;
			}
			if (iLocal_2600 == 7)
			{
				Global_68080 = 0;
			}
		}
		if (iLocal_2599 == 9)
		{
			if (iLocal_2600 == 8)
			{
				if (Global_68080)
				{
					switch (func_1029())
					{
						case 0:
							iVar0 = 0;
							iVar1 = 0;
							break;
						
						case 2:
							iVar0 = 2;
							iVar1 = 2;
							break;
						
						case 1:
							iVar0 = 1;
							iVar1 = 1;
							break;
					}
					if (Global_68084 >= 0)
					{
						func_83(iVar1, iVar0, Global_68083, Global_68084, Global_68087);
					}
				}
				else
				{
					switch (func_1029())
					{
						case 0:
							iVar2 = 0;
							iVar3 = 0;
							break;
						
						case 2:
							iVar2 = 2;
							iVar3 = 2;
							break;
						
						case 1:
							iVar2 = 1;
							iVar3 = 1;
							break;
					}
					if (Global_68084 > 0)
					{
						func_79(iVar3, iVar2, Global_68083, Global_68084, Global_68087);
					}
				}
			}
			else if (iLocal_2600 == 16)
			{
				Global_68083 = -2;
				switch (func_1029())
				{
					case 0:
						iVar4 = 0;
						iVar5 = 0;
						break;
					
					case 2:
						iVar4 = 2;
						iVar5 = 2;
						break;
					
					case 1:
						iVar4 = 1;
						iVar5 = 1;
						break;
				}
				func_40(iVar5, iVar4);
			}
		}
		if (iLocal_2600 == 4)
		{
			if (iLocal_2599 == 6 || iLocal_2599 == 7)
			{
				Global_68084 = 0;
			}
		}
		if (iLocal_2599 == 4)
		{
			if (iLocal_2600 == 3 || iLocal_2600 == 2)
			{
				Global_68083 = -1;
			}
		}
	}
}

void func_40(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	Vector3 fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	float fVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	Vector3 fVar13;
	float fVar14;
	
	iVar0 = 0;
	iVar1 = 0;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	iVar6 = false;
	iVar7 = 0;
	while (iVar7 < 10)
	{
		if (func_78(iParam1, iVar7) > 0)
		{
			fVar8 = func_76(func_77(iParam1, iVar7));
			if (fVar8 > 0f)
			{
				iVar9 = func_78(iParam1, iVar7);
				iVar0 += iVar9;
				iVar1++;
				fVar10 = IntToFloat(func_78(iParam1, iVar7)) * fVar8;
				fVar11 = func_71(iParam1, iVar7);
				fVar2 += fVar10;
				fVar12 = fVar10 - fVar11;
				if (fVar12 > 0f)
				{
					fVar4 += fVar12;
				}
				else
				{
					fVar5 += -fVar12;
				}
				fVar3 += fVar12;
				if (!iVar6 && fVar12 > 0f)
				{
					iVar6 = true;
				}
			}
		}
		iVar7++;
	}
	if (iVar0 == 0)
	{
		return;
	}
	fVar13 = to_float(func_70(iParam0));
	fVar14 = fVar2 + fVar13;
	if (fVar13 < 1f)
	{
		fVar13 = 1f;
	}
	Global_68106 = fVar14 / fVar13 * 100f;
	Global_101154.f_25089.f_441 += floor(fVar2);
	if (!func_69(0))
	{
		if (iVar6)
		{
			func_69(1);
		}
	}
	if (Global_55732 == 0)
	{
		Global_55732 = floor(fVar2);
	}
	if (Global_55732 == 0)
	{
		return;
	}
	if (!func_44(iParam0, 1, 2, Global_55732, 0))
	{
		return;
	}
	Global_55732 = 0;
	iVar7 = 0;
	iVar7 = 0;
	while (iVar7 < 10)
	{
		func_43(iParam1, iVar7, 0, 0);
		iVar7++;
	}
	Global_68102 = iVar0;
	Global_68103 = iVar1;
	Global_68104 = fVar4;
	Global_68105 = fVar5;
	Global_68100 = fVar2;
	Global_68101 = fVar3;
	func_41(iParam1);
}

void func_41(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 80)
	{
		if (Global_48048[iVar0 /*36*/].f_8)
		{
			iVar1 = Global_48048[iVar0 /*36*/].f_35;
			if (iVar1 > -1)
			{
				iVar2 = func_42(iParam0, iVar0);
				if (Global_48048[iVar0 /*36*/].f_9 <= 0f)
				{
					iVar2 = false;
				}
				stat_set_int(Global_50929[iVar1 /*7*/].f_3[iParam0], iVar2, 1);
			}
		}
		iVar0++;
	}
}

int func_42(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		switch (iParam0)
		{
			case 0:
				if (Global_101154.f_25089[iVar0] == iParam1)
				{
					if (Global_101154.f_25089.f_22[iVar0] > 0)
					{
						return Global_101154.f_25089.f_22[iVar0];
					}
				}
				break;
			
			case 1:
				if (Global_101154.f_25089.f_33[iVar0] == iParam1)
				{
					if (Global_101154.f_25089.f_55[iVar0] > 0)
					{
						return Global_101154.f_25089.f_55[iVar0];
					}
				}
				break;
			
			case 2:
				if (Global_101154.f_25089.f_66[iVar0] == iParam1)
				{
					if (Global_101154.f_25089.f_88[iVar0] > 0)
					{
						return Global_101154.f_25089.f_88[iVar0];
					}
				}
				break;
		}
		iVar0++;
	}
	return 0;
}

void func_43(int iParam0, int iParam1, int iParam2, int iParam3)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 < 0 || iParam1 > 9)
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			uVar0 = Global_101154.f_25089[iParam1];
			break;
		
		case 1:
			uVar0 = Global_101154.f_25089.f_33[iParam1];
			break;
		
		case 2:
			uVar0 = Global_101154.f_25089.f_66[iParam1];
			break;
	}
	if (Global_48048[uVar0 /*36*/].f_9 <= 0f)
	{
		return;
	}
	iVar1 = false;
	if (iParam3)
	{
		switch (iParam0)
		{
			case 0:
				Global_101154.f_25089.f_22[iParam1] += iParam2;
				iVar1 = Global_101154.f_25089.f_22[iParam1];
				break;
			
			case 1:
				Global_101154.f_25089.f_55[iParam1] += iParam2;
				iVar1 = Global_101154.f_25089.f_55[iParam1];
				break;
			
			case 2:
				Global_101154.f_25089.f_88[iParam1] += iParam2;
				iVar1 = Global_101154.f_25089.f_88[iParam1];
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				Global_101154.f_25089.f_22[iParam1] = iParam2;
				iVar1 = Global_101154.f_25089.f_22[iParam1];
				break;
			
			case 1:
				Global_101154.f_25089.f_55[iParam1] = iParam2;
				iVar1 = Global_101154.f_25089.f_55[iParam1];
				break;
			
			case 2:
				Global_101154.f_25089.f_88[iParam1] = iParam2;
				iVar1 = Global_101154.f_25089.f_88[iParam1];
				break;
			}
	}
	if (Global_48048[uVar0 /*36*/].f_8)
	{
		iVar2 = Global_48048[uVar0 /*36*/].f_35;
		if (iVar2 > -1)
		{
			stat_set_int(Global_50929[iVar2 /*7*/].f_3[iParam0], iVar1, 1);
		}
	}
	return;
}

bool func_44(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_68();
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
					func_67(99, 1);
					func_38(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_38(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_38(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_52(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_51(5))
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
							func_38(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_38(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_38(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_51(1))
					{
						fVar0 = 0f;
						iVar1 = true;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_38(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_38(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_38(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_38(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_38(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_38(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_38(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_38(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_38(joaat("sp2_money_spent_property"), iParam3);
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
									func_38(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_38(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_38(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_38(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_38(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_38(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_51(0))
							{
								fVar0 = 0f;
								iVar1 = false;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_38(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_38(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_38(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_38(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_38(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_38(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_50(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_67(95, iParam3);
					break;
				
				case 1:
					func_67(97, iParam3);
					break;
				
				case 2:
					func_67(96, iParam3);
					break;
			}
			func_67(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = floor(fVar0 * to_float(iParam3));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_47(iVar1);
		return true;
	}
	else if (fVar0 != 1f)
	{
		func_47(iVar1);
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
					func_38(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_38(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_38(joaat("sp2_total_cash_earned"), iParam3);
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
	func_46(iParam0);
	if (Global_35711 == 15)
	{
		func_45(0);
	}
	return true;
}

void func_45(int iParam0)
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

void func_46(int iParam0)
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

void func_47(int iParam0)
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
	else if (is_bit_set(Global_101154.f_25089.f_471, iParam0) || is_bit_set(Global_2097152[func_49() /*10375*/].f_7704.f_10, iParam0))
	{
		iVar0 = true;
		clear_bit(&(Global_101154.f_25089.f_471), iParam0);
		clear_bit(&(Global_2097152[func_49() /*10375*/].f_7704.f_10), iParam0);
	}
	if (iVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		_set_notification_text_entry("COUP_RED");
		_add_text_component_item_string(func_48(iParam0));
		_set_notification_message(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_48(int iParam0)
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

int func_49()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_50(int iParam0)
{
	func_67(93, iParam0);
	func_67(29, iParam0);
	func_67(30, iParam0);
}

int func_51(int iParam0)
{
	if (!network_is_game_in_progress())
	{
		return is_bit_set(Global_101154.f_25089.f_471, iParam0);
	}
	return is_bit_set(Global_2097152[func_49() /*10375*/].f_7704.f_10, iParam0);
}

bool func_52(int iParam0)
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
		func_66(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return false;
	}
	func_53(27, 1);
	return true;
}

int func_53(int iParam0, int iParam1)
{
	if (iParam0 >= 70)
	{
		return 0;
	}
	return func_54(iParam0, iParam1);
}

bool func_54(int iParam0, int iParam1)
{
	if (func_27(14) && !func_65(iParam0))
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
	if (func_64(&Global_2563627))
	{
		if (func_62(&Global_2563627, iParam0))
		{
			return false;
		}
		if (func_55(&Global_2563627, iParam0))
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

bool func_55(var uParam0, int iParam1)
{
	int iVar0;
	var[] uVar1 = new var[70];
	
	if (has_achievement_been_passed(iParam1))
	{
		return false;
	}
	if (func_27(14) && !func_65(iParam1))
	{
		return false;
	}
	if (func_62(uParam0, iParam1))
	{
		return false;
	}
	if (func_61(uParam0) < 0f)
	{
		func_60(uParam0, 0);
	}
	func_58(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0 - 1)
	{
		uVar1[iVar0 + 1] = *uParam0[iVar0];
		iVar0++;
	}
	func_56(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		*uParam0[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return true;
}

bool func_56(var uParam0, int iParam1)
{
	int iVar0;
	
	if (has_achievement_been_passed(iParam1))
	{
		return false;
	}
	if (func_27(14) && !func_65(iParam1))
	{
		return false;
	}
	if (func_62(uParam0, iParam1))
	{
		return false;
	}
	if (func_61(uParam0) < 0f)
	{
		func_60(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_57(uParam0, iVar0))
		{
			*uParam0[iVar0] = iParam1;
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_57(var uParam0, int iParam1)
{
	return *uParam0[iParam1] == 70;
}

void func_58(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_59(uParam0, iVar0);
		iVar0++;
	}
	func_60(uParam0, Global_2563626 - 0.5f);
}

void func_59(var uParam0, int iParam1)
{
	*uParam0[iParam1] = 70;
}

void func_60(var uParam0, float fParam1)
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

var func_61(var uParam0)
{
	return *uParam0.f_72;
}

int func_62(var uParam0, int iParam1)
{
	return func_63(uParam0, iParam1) != -1;
}

int func_63(var uParam0, int iParam1)
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

int func_64(var uParam0)
{
	return *uParam0.f_71 == 1;
}

bool func_65(int iParam0)
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

int func_66(int iParam0, int iParam1)
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

void func_67(int iParam0, int iParam1)
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

void func_68()
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

bool func_69(int iParam0)
{
	if (Global_101154.f_25089.f_441 <= 0 && !iParam0)
	{
		return false;
	}
	if (has_achievement_been_passed(28))
	{
		return false;
	}
	func_53(28, 1);
	return true;
}

var func_70(int iParam0)
{
	return Global_52923[iParam0];
}

float func_71(int iParam0, int iParam1)
{
	float fVar0;
	
	if (iParam1 < 0 || iParam1 > 9)
	{
		return 0f;
	}
	fVar0 = func_72(func_77(iParam0, iParam1));
	if (fVar0 > 0f)
	{
		switch (iParam0)
		{
			case 0:
				return Global_101154.f_25089.f_11[iParam1];
			
			case 1:
				return Global_101154.f_25089.f_44[iParam1];
			
			case 2:
				return Global_101154.f_25089.f_77[iParam1];
			}
		
		default:
	}
	return 0f;
}

float func_72(var uParam0)
{
	int iVar0;
	float fVar1;
	
	iVar0 = uParam0;
	fVar1 = Global_48048[uParam0 /*36*/].f_9 * func_73(iVar0);
	return to_float(floor(fVar1 * 100f)) / 100f;
}

float func_73(int iParam0)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	Vector3 fVar11;
	Vector3 fVar12;
	
	fVar0 = 1f;
	switch (iParam0)
	{
		case 61:
			if (Global_101154.f_7775.f_99.f_58[131])
			{
				fVar0 = 0.5f;
			}
			break;
		
		case 73:
			if (func_75(25))
			{
				fVar0 *= 3f;
			}
			else
			{
				if (func_75(74) || func_75(75))
				{
					fVar0 *= 0.95f;
				}
				if (func_75(14))
				{
					fVar0 *= 0.98f;
				}
				if (func_75(16))
				{
					fVar0 *= 0.98f;
				}
				if (func_75(48))
				{
					fVar0 *= 0.98f;
				}
				if (func_75(24))
				{
					fVar0 *= 0.98f;
				}
				if (func_75(27))
				{
					fVar0 *= 0.5f;
				}
			}
			break;
		
		case 66:
			if (func_75(49))
			{
				fVar0 *= 0.5f;
			}
			if (func_75(10))
			{
				fVar0 *= 0.95f;
			}
			break;
		
		case 59:
			if (func_75(93))
			{
				if (!func_75(47))
				{
					fVar0 *= 0.9f;
				}
			}
			if (func_75(38))
			{
				if (!func_75(28))
				{
					fVar0 *= 0.9f;
				}
			}
			if (func_75(84))
			{
				if (!func_75(28))
				{
					fVar0 *= 0.9f;
				}
			}
			break;
		
		case 69:
			if (func_75(90))
			{
				if (!func_75(14))
				{
					fVar0 *= 0.7f;
				}
			}
			break;
		
		case 16:
			if (func_75(28))
			{
				fVar0 *= 2f;
			}
			break;
		
		case 52:
			if (func_75(93))
			{
				if (!func_75(28))
				{
					fVar0 *= 0.6f;
				}
			}
			break;
		
		case 56:
			if (func_75(61))
			{
				if (!func_75(49))
				{
					fVar0 *= 0.5f;
				}
			}
			break;
	}
	if (Global_101154.f_25089.f_442 < 1)
	{
		return fVar0;
	}
	iVar1 = -1;
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 8)
	{
		if (Global_101154.f_25089.f_443[iVar2] == iParam0)
		{
			iVar1 = iVar2;
		}
		iVar2++;
	}
	if (iVar1 > -1)
	{
		fVar0 = func_74(Global_101154.f_25089.f_452[iVar1], Global_101154.f_25089.f_461[iVar1]);
	}
	if (fVar0 > 1f)
	{
		fVar3 = fVar0 - 1f;
		iVar4 = iParam0;
		iVar5 = func_78(0, iVar4);
		iVar6 = func_78(1, iVar4);
		iVar7 = func_78(2, iVar4);
		if (iVar5 + iVar6 + iVar7 > 0)
		{
			iVar8 = Global_52923[0] + Global_52923[1] + Global_52923[2];
			iVar2 = 0;
			while (iVar2 < 10)
			{
				if (Global_101154.f_25089.f_22[iVar2] > 0)
				{
					iVar8 += floor(Global_101154.f_25089.f_11[iVar2]);
				}
				if (Global_101154.f_25089.f_55[iVar2] > 0)
				{
					iVar8 += floor(Global_101154.f_25089.f_44[iVar2]);
				}
				if (Global_101154.f_25089.f_88[iVar2] > 0)
				{
					iVar8 += floor(Global_101154.f_25089.f_77[iVar2]);
				}
				iVar2++;
			}
			iVar9 = 700000000;
			iVar10 = 1000000000;
			if (iVar8 > iVar10)
			{
				fVar3 = 0f;
			}
			else if (iVar8 < iVar9)
			{
				fVar3 = 1f;
			}
			else
			{
				fVar11 = to_float(iVar8 - iVar9);
				fVar12 = to_float(iVar10 - iVar9);
				fVar3 *= 1f - fVar11 / fVar12;
			}
		}
		fVar0 = 1f + fVar3;
	}
	return fVar0;
}

float func_74(int iParam0, int iParam1)
{
	float fVar0;
	int iVar1;
	Vector3 fVar2;
	int iVar3;
	Vector3 fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	
	fVar0 = 0f;
	if (iParam0 < 1)
	{
		return 1f;
	}
	iVar1 = is_bit_set(iParam1, false);
	fVar2 = to_float(iParam0);
	iVar3 = 0;
	if (is_bit_set(iParam1, 3))
	{
		iVar3++;
	}
	if (is_bit_set(iParam1, 4))
	{
		iVar3 += 2;
	}
	if (is_bit_set(iParam1, 5))
	{
		iVar3 += 4;
	}
	if (is_bit_set(iParam1, 20))
	{
		iVar3 += 8;
	}
	fVar4 = to_float(3 * iVar3);
	if (is_bit_set(iParam1, 2))
	{
		fVar4 *= 7f;
	}
	if (is_bit_set(iParam1, true))
	{
		if (func_75(21))
		{
			return 1f;
		}
	}
	else if (fVar4 < 1f)
	{
		return 1f;
	}
	fVar5 = 1f - fVar2 / fVar4;
	if (is_bit_set(iParam1, 16))
	{
		fVar0 -= 0.5f;
	}
	if (is_bit_set(iParam1, 17))
	{
		fVar0 -= 0.25f;
	}
	if (is_bit_set(iParam1, 18))
	{
		fVar0 -= 0.1f;
	}
	if (is_bit_set(iParam1, 19))
	{
		fVar0 -= 0.33f;
	}
	if (iVar1)
	{
		fVar0 = -fVar0;
	}
	if (!is_bit_set(iParam1, true))
	{
		if (is_bit_set(iParam1, 6))
		{
			fVar6 = 0f;
			if (is_bit_set(iParam1, 8))
			{
				fVar6 += 0.5f;
			}
			if (is_bit_set(iParam1, 9))
			{
				fVar6 += 0.25f;
			}
			if (is_bit_set(iParam1, 10))
			{
				fVar6 += 0.125f;
			}
			if (fVar5 < fVar6)
			{
				fVar7 = fVar5 / fVar6;
				if (is_bit_set(iParam1, 7))
				{
					fVar7 = 1f - fVar7;
					fVar7 *= fVar7;
					fVar7 = 1f - fVar7;
				}
				fVar0 *= fVar7;
			}
		}
		if (is_bit_set(iParam1, 11))
		{
			fVar8 = 0f;
			if (is_bit_set(iParam1, 13))
			{
				fVar8 += 0.5f;
			}
			if (is_bit_set(iParam1, 14))
			{
				fVar8 += 0.25f;
			}
			if (is_bit_set(iParam1, 15))
			{
				fVar8 += 0.125f;
			}
			fVar9 = 1f - fVar8;
			if (fVar5 > fVar9)
			{
				fVar10 = fVar5 - fVar9 / fVar8;
				if (is_bit_set(iParam1, 12))
				{
					fVar10 *= fVar10;
				}
				fVar0 *= 1f - fVar10;
			}
		}
	}
	fVar0 = 1f + fVar0;
	return fVar0;
}

var func_75(int iParam0)
{
	return Global_101154.f_7775.f_330[iParam0 /*6*/];
}

var func_76(int iParam0)
{
	var uVar0;
	int iVar1;
	
	if (Global_48048[iParam0 /*36*/].f_8)
	{
		uVar0 = func_72(iParam0);
	}
	else
	{
		iVar1 = Global_48048[iParam0 /*36*/].f_13 - 1;
		if (iVar1 < 0)
		{
			iVar1 = 15;
		}
		uVar0 = Global_48048[iParam0 /*36*/].f_14[iVar1];
	}
	return uVar0;
}

int func_77(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 9)
	{
		return 31;
	}
	switch (iParam0)
	{
		case 0:
			return Global_101154.f_25089[iParam1];
		
		case 1:
			return Global_101154.f_25089.f_33[iParam1];
		
		case 2:
			return Global_101154.f_25089.f_66[iParam1];
		
		default:
	}
	return 31;
}

int func_78(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 9)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			return Global_101154.f_25089.f_22[iParam1];
			break;
		
		case 1:
			return Global_101154.f_25089.f_55[iParam1];
			break;
		
		case 2:
			return Global_101154.f_25089.f_88[iParam1];
			break;
	}
	return 0;
}

void func_79(int iParam0, int iParam1, int iParam2, int iParam3, Vector3 fParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	
	iVar0 = -1;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 10)
	{
		if (func_77(iParam1, iVar1) == iParam2)
		{
			if (func_78(iParam1, iVar1) > 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 == -1)
	{
		return;
	}
	iVar2 = func_78(iParam1, iVar0);
	fVar3 = func_71(iParam1, iVar0);
	if (func_78(iParam1, iVar0) < iParam3)
	{
		return;
	}
	if (!func_44(iParam0, 1, 2, floor(fParam4), 0))
	{
		return;
	}
	fVar4 = fParam4 - func_71(iParam1, iVar0) / IntToFloat(func_78(iParam1, iVar0)) * IntToFloat(iParam3);
	if (fVar4 <= -50000f)
	{
		func_81();
	}
	func_80(iParam1, iVar0, -fParam4, 1);
	func_43(iParam1, iVar0, -iParam3, 1);
	Global_101154.f_25089.f_441 += floor(fParam4);
	if (!func_69(0))
	{
		fVar5 = to_float(iParam3) / to_float(iVar2);
		fVar6 = fVar3 * fVar5;
		if (fParam4 > fVar6)
		{
			func_69(1);
		}
	}
	if (Global_48048[iParam2 /*36*/].f_8)
	{
		iVar7 = Global_48048[iParam2 /*36*/].f_35;
		if (iVar7 > -1)
		{
			stat_set_int(Global_50929[iVar7 /*7*/].f_3[iParam1], func_78(iParam1, iVar0), 1);
		}
	}
	if (fVar4 > 100000f)
	{
		_0x11FF1C80276097ED(joaat("sp0_crouched_and_shot"), 20, 0);
	}
	else if (fVar4 < 0f)
	{
		if (fVar4 < -100000f)
		{
			_0x11FF1C80276097ED(joaat("sp0_crouched_and_shot"), 30, 0);
		}
	}
	if (Global_48048[iParam2 /*36*/].f_8)
	{
		func_41(iParam1);
	}
}

void func_80(int iParam0, int iParam1, float fParam2, int iParam3)
{
	if (iParam1 < 0 || iParam1 > 9)
	{
		return;
	}
	if (iParam3)
	{
		switch (iParam0)
		{
			case 0:
				Global_101154.f_25089.f_11[iParam1] += fParam2;
				if (Global_101154.f_25089.f_11[iParam1] < 0f)
				{
					Global_101154.f_25089.f_11[iParam1] = 0f;
				}
				break;
			
			case 1:
				Global_101154.f_25089.f_44[iParam1] += fParam2;
				if (Global_101154.f_25089.f_44[iParam1] < 0f)
				{
					Global_101154.f_25089.f_44[iParam1] = 0f;
				}
				break;
			
			case 2:
				Global_101154.f_25089.f_77[iParam1] += fParam2;
				if (Global_101154.f_25089.f_77[iParam1] < 0f)
				{
					Global_101154.f_25089.f_77[iParam1] = 0f;
				}
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				Global_101154.f_25089.f_11[iParam1] = fParam2;
				if (Global_101154.f_25089.f_11[iParam1] < 0f)
				{
					Global_101154.f_25089.f_11[iParam1] = 0f;
				}
				break;
			
			case 1:
				Global_101154.f_25089.f_44[iParam1] = fParam2;
				if (Global_101154.f_25089.f_44[iParam1] < 0f)
				{
					Global_101154.f_25089.f_44[iParam1] = 0f;
				}
				break;
			
			case 2:
				Global_101154.f_25089.f_77[iParam1] = fParam2;
				if (Global_101154.f_25089.f_77[iParam1] < 0f)
				{
					Global_101154.f_25089.f_77[iParam1] = 0f;
				}
				break;
			}
	}
	return;
}

void func_81()
{
	var uVar0;
	
	uVar0 = func_82(76);
	Global_2411218[uVar0 /*83*/] = 76;
	StringCopy(&(Global_2411218[uVar0 /*83*/].f_18[0 /*16*/]), "", 64);
}

int func_82(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_2411218[iVar1 /*83*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_2411218[iVar1 /*83*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

void func_83(int iParam0, int iParam1, int iParam2, int iParam3, float fParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_93(iParam1, iParam2);
	if (iVar0 == -1)
	{
		Global_55737 = 1;
		return;
	}
	Global_55737 = 0;
	if (func_78(iParam1, iVar0) == 0)
	{
		func_80(iParam1, iVar0, 0f, 0);
	}
	iVar1 = ceil(fParam4);
	iVar2 = false;
	if (iVar1 > Global_52923[iParam0])
	{
		iVar1 = Global_52923[iParam0];
		iVar2 = true;
	}
	if (!func_44(iParam0, 0, 2, iVar1, iVar2))
	{
		return;
	}
	func_43(iParam1, iVar0, iParam3, 1);
	func_80(iParam1, iVar0, fParam4, 1);
	func_92(iParam1, iVar0, iParam2);
	Global_101154.f_25089.f_441 -= ceil(fParam4);
	if (fParam4 > 1000000f)
	{
		func_91();
	}
	func_84(310, 0, 0);
	if (iParam3 < 1)
	{
		return;
	}
	if (Global_48048[iParam2 /*36*/].f_8)
	{
		iVar3 = Global_48048[iParam2 /*36*/].f_35;
		if (iVar3 > -1)
		{
			stat_set_int(Global_50929[iVar3 /*7*/].f_3[iParam1], func_78(iParam1, iVar0), 1);
		}
	}
	if (fParam4 > 1000000f)
	{
		_0x11FF1C80276097ED(joaat("sp0_crouched_and_shot"), 10, 0);
	}
	if (Global_48048[iParam2 /*36*/].f_8)
	{
		func_41(iParam1);
	}
	if (Global_35711 == 15)
	{
		func_45(1);
	}
}

void func_84(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_89(891 + iParam0, 1, -1, 1);
	}
	iVar0 = true;
	if (Global_101154.f_8884[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_101154.f_8884[iParam0 /*12*/].f_6 == 11 || Global_101154.f_8884[iParam0 /*12*/].f_6 == 12)
		{
			iVar0 = false;
		}
	}
	else
	{
		Global_101154.f_8884[iParam0 /*12*/].f_5 = 1;
		Global_101154.f_8884[iParam0 /*12*/].f_10 = iParam1;
		Global_101154.f_8884[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			_0x11FF1C80276097ED(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			_0x11FF1C80276097ED(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			_0x11FF1C80276097ED(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (iVar0)
	{
		func_85();
	}
}

void func_85()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	Vector3 fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_100890 = 0;
	Global_100891 = 0;
	Global_100892 = 0;
	Global_100893 = 0;
	Global_100894 = 0;
	Global_100895 = 0;
	Global_100896 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_101154.f_8884.f_3853;
	Global_101154.f_8884.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_101154.f_8884[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_101154.f_8884[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_100890++;
					fVar1 += Global_101154.f_8884[iVar0 /*12*/].f_4;
					break;
				
				case 3:
					Global_100891++;
					fVar2 += Global_101154.f_8884[iVar0 /*12*/].f_4;
					break;
				
				case 5:
					Global_100892++;
					fVar3 += Global_101154.f_8884[iVar0 /*12*/].f_4;
					break;
				
				case 7:
					Global_100893++;
					fVar4 += Global_101154.f_8884[iVar0 /*12*/].f_4;
					break;
				
				case 9:
					Global_100894++;
					fVar5 += Global_101154.f_8884[iVar0 /*12*/].f_4 * 4f;
					break;
				
				case 11:
					Global_100895++;
					fVar6 += Global_101154.f_8884[iVar0 /*12*/].f_4;
					break;
				
				case 13:
					Global_100896++;
					fVar7 += Global_101154.f_8884[iVar0 /*12*/].f_4;
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_100873 > 0)
	{
		if (Global_100890 == Global_100873)
		{
			fVar1 = 55f;
		}
	}
	if (Global_100874 > 0)
	{
		if (Global_100891 == Global_100874)
		{
			fVar2 = 10f;
		}
	}
	if (Global_100875 > 0)
	{
		if (Global_100892 == Global_100875)
		{
			fVar3 = 0f;
		}
	}
	if (Global_100876 > 0)
	{
		if (Global_100893 == Global_100876)
		{
			fVar4 = 10f;
		}
	}
	if (Global_100877 > 0)
	{
		if (((Global_100894 == Global_100877 || Global_100877 * 10 / Global_100894 < 41) || Global_100894 > Global_100880) || Global_100894 == Global_100880)
		{
			if (!is_bit_set(Global_101154.f_8884.f_3856, 14))
			{
				if (Global_100894 == Global_100877)
				{
					_0x11FF1C80276097ED(joaat("num_rndevents_completed"), Global_100877, 0);
					set_bit(&(Global_101154.f_8884.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_100878 > 0)
	{
		if (Global_100895 == Global_100878)
		{
			fVar6 = 15f;
		}
	}
	if (Global_100879 > 0)
	{
		if (Global_100896 == Global_100879)
		{
			fVar7 = 5f;
		}
	}
	Global_101154.f_8884.f_3853 = fVar1 + fVar2 + fVar3 + fVar4 + fVar5 + fVar6 + fVar7;
	if (Global_100894 > Global_100880 || Global_100894 == Global_100880)
	{
		iVar9 = Global_100880;
	}
	else
	{
		iVar9 = Global_100894;
	}
	stat_set_int(joaat("num_missions_completed"), Global_100890, 1);
	stat_set_int(joaat("num_missions_available"), Global_100873, 1);
	stat_set_int(joaat("num_minigames_completed"), Global_100891, 1);
	stat_set_int(joaat("num_minigames_available"), Global_100874, 1);
	stat_set_int(joaat("num_oddjobs_completed"), Global_100892, 1);
	stat_set_int(joaat("num_oddjobs_available"), Global_100875, 1);
	stat_set_int(joaat("num_rndpeople_completed"), Global_100893, 1);
	stat_set_int(joaat("num_rndpeople_available"), Global_100876, 1);
	stat_set_int(joaat("num_rndevents_completed"), iVar9, 1);
	stat_set_int(joaat("num_rndevents_available"), Global_100880, 1);
	stat_set_int(joaat("num_misc_completed"), Global_100896 + Global_100895, 1);
	stat_set_int(joaat("num_misc_available"), Global_100879 + Global_100878, 1);
	Global_100897 = Global_100890 * 100 / Global_100873;
	Global_100899 = Global_100892 + Global_100891 * 100 / Global_100875 + Global_100874;
	Global_100898 = Global_100893 + iVar9 * 100 / Global_100876 + Global_100880;
	Global_100900 = Global_100895 + Global_100896 * 100 / Global_100878 + Global_100879;
	stat_set_float(joaat("total_progress_made"), Global_101154.f_8884.f_3853, 1);
	stat_set_int(joaat("percent_story_missions"), Global_100897, 1);
	stat_set_int(joaat("percent_ambient_missions"), Global_100898, 1);
	stat_set_int(joaat("percent_oddjobs"), Global_100899, 1);
	if (fVar8 > 0f && floor(fVar8) < floor(Global_101154.f_8884.f_3853))
	{
		func_66(13, floor(Global_101154.f_8884.f_3853));
	}
	if (!_0xBEDB96A7584AA8CF())
	{
		if (!Global_69489)
		{
			if (func_88() == 2 == 0 && !network_is_game_in_progress())
			{
				if (network_is_cloud_available())
				{
					Global_100888 = 0;
				}
				if (!Global_55749)
				{
					func_86();
				}
			}
		}
	}
}

bool func_86()
{
	if (func_87(0))
	{
		return false;
	}
	if (Global_91317.f_8)
	{
		if (Global_91317.f_10 > 0)
		{
			return false;
		}
	}
	else if (Global_91317.f_10 > 1)
	{
		return false;
	}
	Global_91317.f_10++;
	return true;
}

int func_87(int iParam0)
{
	if (!iParam0 && _get_number_of_instances_of_streamed_script(joaat("benchmark")) > 0)
	{
		return true;
	}
	return is_bit_set(Global_69737, false);
}

var func_88()
{
	return Global_25120;
}

int func_89(int iParam0, int iParam1, int iParam2, int iParam3)
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
	int iVar11;
	int iVar12;
	
	if (iParam2 == -1)
	{
		iParam2 = func_90();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = _0x80C75307B1C42837(iParam0 - 0, 0, 1, iParam2);
		iVar1 = iParam0 - 0 - _0xF4D8E7AC2A27758C(iParam0 - 0) * 64;
		iVar0 = stat_set_bool_masked(iVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = _0x80C75307B1C42837(iParam0 - 192, 1, 1, iParam2);
		iVar1 = iParam0 - 192 - _0xF4D8E7AC2A27758C(iParam0 - 192) * 64;
		iVar0 = stat_set_bool_masked(iVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = _0x80C75307B1C42837(iParam0 - 513, 0, 0, 0);
		iVar1 = iParam0 - 513 - _0xF4D8E7AC2A27758C(iParam0 - 513) * 64;
		iVar0 = stat_set_bool_masked(iVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = _0x80C75307B1C42837(iParam0 - 705, 1, 0, 0);
		iVar1 = iParam0 - 705 - _0xF4D8E7AC2A27758C(iParam0 - 705) * 64;
		iVar0 = stat_set_bool_masked(iVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = _0xC4BB08EE7907471E(iParam0 - 3111, 0, 1, iParam2);
		iVar1 = iParam0 - 3111 - _0xF4D8E7AC2A27758C(iParam0 - 3111) * 64;
		iVar0 = stat_set_bool_masked(iVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = _0xC4BB08EE7907471E(iParam0 - 2919, 0, 0, 0);
		iVar1 = iParam0 - 2919 - _0xF4D8E7AC2A27758C(iParam0 - 2919) * 64;
		iVar0 = stat_set_bool_masked(iVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = _0xBA52FF538ED2BC71(iParam0 - 4207, 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = iParam0 - 4207 - _0xF4D8E7AC2A27758C(iParam0 - 4207) * 64;
		iVar0 = stat_set_bool_masked(iVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = _0xBA52FF538ED2BC71(iParam0 - 4335, 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = iParam0 - 4335 - _0xF4D8E7AC2A27758C(iParam0 - 4335) * 64;
		iVar0 = stat_set_bool_masked(iVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = _0xBA52FF538ED2BC71(iParam0 - 6029, 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = iParam0 - 6029 - _0xF4D8E7AC2A27758C(iParam0 - 6029) * 64;
		iVar0 = stat_set_bool_masked(iVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = _0xBA52FF538ED2BC71(iParam0 - 7385, 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = iParam0 - 7385 - _0xF4D8E7AC2A27758C(iParam0 - 7385) * 64;
		iVar0 = stat_set_bool_masked(iVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = _0xBA52FF538ED2BC71(iParam0 - 7321, 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = iParam0 - 7321 - _0xF4D8E7AC2A27758C(iParam0 - 7321) * 64;
		iVar0 = stat_set_bool_masked(iVar12, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

var func_90()
{
	return Global_1312747;
}

void func_91()
{
	var uVar0;
	
	uVar0 = func_82(77);
	Global_2411218[uVar0 /*83*/] = 77;
	StringCopy(&(Global_2411218[uVar0 /*83*/].f_18[0 /*16*/]), "", 64);
}

void func_92(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 9)
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			Global_101154.f_25089[iParam1] = iParam2;
			break;
		
		case 1:
			Global_101154.f_25089.f_33[iParam1] = iParam2;
			break;
		
		case 2:
			Global_101154.f_25089.f_66[iParam1] = iParam2;
			break;
	}
	return;
}

int func_93(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	iVar1 = false;
	iVar2 = 0;
	while (iVar2 < 10)
	{
		if (func_78(iParam0, iVar2) == 0 && !iVar1)
		{
			iVar0 = iVar2;
		}
		if (func_77(iParam0, iVar2) == iParam1 && func_78(iParam0, iVar2) > 0)
		{
			iVar1 = true;
			iVar0 = iVar2;
		}
		iVar2++;
	}
	return iVar0;
}

void func_94(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_95(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_95(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (are_strings_equal(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_101154.f_24935.f_145)
	{
		if (are_strings_equal(&(Global_101154.f_24935[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_101154.f_24935.f_145 < 9)
	{
		StringCopy(&(Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_4), sParam1, 16);
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_8 = get_game_timer() + iParam3;
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_9 = iParam5;
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_11 = iParam6;
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_12 = uParam2;
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_13 = iParam7;
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_14 = iParam8;
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_10 = get_game_timer() + iParam3 + iParam4;
		}
		else
		{
			Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_10 = -1;
		}
		Global_101154.f_24935.f_145++;
		func_6();
	}
}

bool func_96(int iParam0)
{
	if (Global_35711 == 15)
	{
		return false;
	}
	if (func_97(iParam0))
	{
		return false;
	}
	return true;
}

int func_97(int iParam0)
{
	return func_98(iParam0, Global_35711);
}

bool func_98(int iParam0, int iParam1)
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

void func_99()
{
	int iVar0;
	
	iLocal_46 = -1;
	iLocal_47 = -1;
	iLocal_49 = -1;
	iLocal_48 = 0;
	iVar0 = 0;
	while (iVar0 <= 99)
	{
		iLocal_50[iVar0] = 211;
		iVar0++;
	}
	func_100();
}

void func_100()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 20)
	{
		iLocal_151[iVar0] = -1;
		iVar0++;
	}
	iLocal_193 = 0;
}

void func_101()
{
	_push_scaleform_movie_function(iLocal_507, "DISABLE_VIDEO");
	_push_scaleform_movie_function_parameter_bool(true);
	_pop_scaleform_movie_function_void();
	_push_scaleform_movie_function(iLocal_507, "UPDATE_TEXT");
	_pop_scaleform_movie_function_void();
	iLocal_517 = 1;
}

int func_102(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_101154.f_7775.f_330[iParam0 /*6*/];
}

void func_103()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = _0x01A358D9128B7A86();
	iVar1 = get_current_website_id();
	if ((iLocal_519 == 18 && (iLocal_521 == 1 || iLocal_521 == 2)) && Global_69489)
	{
		if (Global_68115)
		{
			func_721(iLocal_507);
			Global_68115 = 0;
		}
	}
	if ((iLocal_519 == 27 && (iLocal_521 == 1 || iLocal_521 == 2)) && Global_69489)
	{
		if (Global_68115)
		{
			func_710(iLocal_507, 0);
			Global_68115 = 0;
		}
	}
	iVar2 = false;
	if (iVar0 > 0)
	{
		if (iLocal_521 != iVar0)
		{
			iVar2 = true;
		}
		iLocal_521 = iVar0;
		Global_68107 = 0;
	}
	else
	{
		Global_68107 = 1;
	}
	if (iVar1 > 0)
	{
		if (iLocal_519 != iVar1)
		{
			iVar2 = true;
		}
		iLocal_519 = iVar1;
	}
	else
	{
		Global_68107 = 1;
	}
	if (Global_68074 != iLocal_519)
	{
		iLocal_515 = 0;
	}
	Global_68073 = iLocal_521;
	Global_68074 = iLocal_519;
	if (iVar2)
	{
		iLocal_521 = iVar0;
		iLocal_519 = iVar1;
		Global_68073 = iLocal_521;
		Global_68074 = iLocal_519;
		func_104();
	}
}

void func_104()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = false;
	if (iLocal_520 != iLocal_521 || iLocal_518 != iLocal_519)
	{
		func_702(iLocal_519);
	}
	iVar1 = _0xE3B05614DCE1D014(2);
	if (iVar1 == 0)
	{
	}
	else if (iVar1 < iLocal_522)
	{
	}
	if (iLocal_520 != iLocal_521 || iVar1 < iLocal_522)
	{
		if (iLocal_2637)
		{
			iLocal_2637 = 0;
		}
		if (func_701(iLocal_519, iLocal_521 - 3) && func_698(func_700(iLocal_519, iLocal_521)) == 0)
		{
			func_697(-1, -1, 1);
			func_918(iLocal_519, 9, func_700(iLocal_519, iLocal_521), -1);
		}
		else if (iLocal_519 == iLocal_518 || iVar1 < iLocal_522)
		{
			iLocal_2637 = 0;
			switch (iLocal_519)
			{
				case 10:
				case 11:
				case 12:
				case 13:
				case 15:
				case 16:
				case 26:
					iLocal_2637 = 0;
					if (iLocal_521 != iLocal_520 || iVar1 < iLocal_522)
					{
						iVar2 = func_700(iLocal_519, iLocal_521);
						if (iVar2 != -1)
						{
							iLocal_2637 = 1;
							if (func_696(iVar2, iLocal_519, &iLocal_2637, &Global_68315, &Global_68316))
							{
							}
						}
						if (Global_69489 && (((((iVar2 == 215 || iVar2 == 217) || iVar2 == 243) || iVar2 == 244) || iVar2 == 257) || iVar2 == 253))
						{
							if (is_string_null_or_empty(&Global_68095) || !are_strings_equal(&Global_68095, "HELP_PASSIVE"))
							{
								Global_68094 = 1;
								StringCopy(&Global_68095, "HELP_PASSIVE", 16);
								iLocal_542 = Global_68235 + 7500;
							}
						}
						else if (!is_string_null_or_empty(&Global_68095) && are_strings_equal(&Global_68095, "HELP_PASSIVE"))
						{
							if (is_help_message_being_displayed())
							{
								if (func_9(&Global_68095))
								{
									clear_help(1);
								}
							}
							Global_68094 = 0;
							StringCopy(&Global_68095, "", 16);
						}
					}
					if (func_695(iLocal_519, iLocal_521))
					{
						func_694(&iLocal_713);
					}
					else if (func_693(iLocal_519, iLocal_521))
					{
						func_692(iLocal_519);
					}
					func_561(iLocal_519, iLocal_520, iLocal_521);
					break;
				
				case 17:
					switch (iLocal_521)
					{
						case 2:
							if (func_559())
							{
								func_910("WWW_IWILLSURVIVEITALL_COM_S_MY_D_PORTFOLIO");
							}
							break;
						
						case 15:
							if (!func_556())
							{
								func_910("WWW_IWILLSURVIVEITALL_COM_S_PURCHASE_D_ERROR");
							}
							break;
					}
					break;
				
				case 27:
					if (iLocal_521 == 10)
					{
						if (Global_68077 == 7 && iLocal_520 == 9)
						{
							iVar3 = func_888();
							func_194(iVar3);
						}
					}
					if (iLocal_521 != iLocal_520)
					{
						iLocal_2637 = 1;
					}
					break;
				
				case 18:
					iLocal_2637 = 0;
					if (iLocal_521 != iLocal_520)
					{
						if (func_193(iLocal_510))
						{
							if (!iLocal_512)
							{
								iLocal_511 = 1;
								iLocal_2637 = 1;
							}
						}
					}
					if ((iLocal_520 == 21 && !func_193(iLocal_510)) || (iLocal_520 == 27 && func_193(iLocal_510)))
					{
						if (iLocal_521 == 4)
						{
							if (iLocal_510 > -1)
							{
								func_194(iLocal_510);
							}
						}
					}
					if (iLocal_520 == 21 || (iLocal_520 == 27 && func_193(iLocal_510)))
					{
						if (iLocal_521 == 5)
						{
							if (iLocal_510 > -1)
							{
								func_916(Global_1049163[iLocal_510 /*1924*/]);
							}
						}
					}
					if (iLocal_521 == 23)
					{
						_push_scaleform_movie_function(iLocal_507, "SET_DATA_SLOT_EMPTY");
						_pop_scaleform_movie_function_void();
						_push_scaleform_movie_function(iLocal_507, "SET_DATA_SLOT");
						_push_scaleform_movie_function_parameter_int(false);
						func_16("VHSITPURFH");
						_pop_scaleform_movie_function_void();
						_push_scaleform_movie_function(iLocal_507, "SET_DATA_SLOT");
						_push_scaleform_movie_function_parameter_int(true);
						switch (iLocal_712)
						{
							case 3:
								func_16("LAR_IRANK");
								break;
							
							case 2:
								func_16("LAR_ICASH");
								break;
							
							case 1:
								func_16("LAR_NLOCK");
								break;
							
							case 4:
								func_16("LAR_IRANKC");
								break;
							
							case 6:
								func_16("LAR_SAVTRB");
								break;
							
							case 0:
								break;
							
							case 5:
								break;
							
							default:
								break;
						}
						_pop_scaleform_movie_function_void();
						_push_scaleform_movie_function(iLocal_507, "UPDATE_TEXT");
						_pop_scaleform_movie_function_void();
					}
					break;
				
				case 20:
					if (iLocal_521 == 1)
					{
						if (Global_68216 == 3)
						{
							while (!func_184(-606278748, 6, 2, 144, 1000, 5000, -1, 0, -1, 0))
							{
								wait(0);
							}
							_push_scaleform_movie_function(iLocal_507, "SET_DATA_SLOT");
							_push_scaleform_movie_function_parameter_int(false);
							_push_scaleform_movie_function_parameter_int(4);
							_pop_scaleform_movie_function_void();
							_push_scaleform_movie_function(iLocal_507, "UPDATE_TEXT");
							_pop_scaleform_movie_function_void();
							Global_68216 = 4;
						}
					}
					else if (iLocal_521 == 14)
					{
						if (Global_68216 == 5)
						{
							while (!func_184(-414580094, 6, 2, 144, 1000, 5000, -1, 0, -1, 0))
							{
								wait(0);
							}
							func_105(joaat("player_one"), 3, 295, 1, 1);
							Global_68216 = 6;
						}
					}
					break;
			}
		}
		else
		{
			if (Global_68315 != 0)
			{
				Global_68315 = 0;
			}
			if (Global_68316 != 0)
			{
				Global_68316 = 0;
			}
			switch (iLocal_519)
			{
				case 20:
					if (iLocal_521 == 1 && Global_68216 < 1)
					{
						while (!func_184(-921778680, 6, 2, 144, 1000, 5000, -1, 0, -1, 0))
						{
							wait(0);
						}
						_push_scaleform_movie_function(iLocal_507, "SET_DATA_SLOT");
						_push_scaleform_movie_function_parameter_int(false);
						_push_scaleform_movie_function_parameter_int(true);
						_pop_scaleform_movie_function_void();
						_push_scaleform_movie_function(iLocal_507, "UPDATE_TEXT");
						_pop_scaleform_movie_function_void();
						Global_68216 = 1;
					}
					break;
				
				case 10:
				case 11:
				case 12:
				case 13:
				case 15:
				case 16:
				case 26:
					iLocal_2637 = 0;
					iVar4 = func_700(iLocal_519, iLocal_521);
					if (iVar4 != -1)
					{
						iLocal_2637 = 1;
						if (func_696(iVar4, iLocal_519, &iLocal_2637, &Global_68315, &Global_68316))
						{
						}
					}
					break;
				}
		}
		iVar0 = true;
	}
	else if (iLocal_518 != iLocal_519)
	{
		if (iLocal_519 == 27)
		{
			iVar0 = true;
		}
	}
	if (iVar0)
	{
		Global_68115 = 1;
	}
	iLocal_522 = iVar1;
	switch (iLocal_519)
	{
		case 19:
			if ((iLocal_518 == 19 && iLocal_520 == 1) && iLocal_521 == 15)
			{
				iVar5 = func_1029();
				switch (iVar5)
				{
					case 0:
						if (!Global_101154.f_8739.f_129[0])
						{
							if (func_912(0) < 500)
							{
								func_910("WWW_THEREALITYMILL_COM_S_PURCHASE_D_ERROR");
							}
							else
							{
								func_44(0, 0, 93, 500, 0);
								Global_101154.f_8739.f_129[0] = 1;
							}
						}
						break;
					
					case 1:
						if (!Global_101154.f_8739.f_129[1])
						{
							if (func_912(1) < 500)
							{
								func_910("WWW_THEREALITYMILL_COM_S_PURCHASE_D_ERROR");
							}
							else
							{
								func_44(1, 0, 93, 500, 0);
								Global_101154.f_8739.f_129[1] = 1;
							}
						}
						break;
					
					case 2:
						if (!Global_101154.f_8739.f_129[2])
						{
							if (func_912(2) < 500)
							{
								func_910("WWW_THEREALITYMILL_COM_S_PURCHASE_D_ERROR");
							}
							else
							{
								func_44(2, 0, 93, 500, 0);
								Global_101154.f_8739.f_129[2] = 1;
							}
						}
						break;
					}
			}
			break;
		
		case 9:
			if (iLocal_2634)
			{
				if (!Global_69489)
				{
					if (iLocal_521 == 5)
					{
						iLocal_2634 = 0;
						switch (iLocal_2635)
						{
							case 6:
								func_916(-1569.525f, 444.04f, 108.135f);
								break;
							
							case 7:
								func_916(-1352.88f, 613.77f, 134.34f);
								break;
							
							case 8:
								func_916(-1469.2f, -5.33f, 53.105f);
								break;
							
							case 9:
								func_916(-1632.833f, -413.8573f, 39.9441f);
								break;
							
							case 10:
								func_916(-1774.225f, -430.03f, 44.04f);
								break;
							
							case 11:
								func_916(-380.75f, 427.79f, 110.97f);
								break;
							
							case 12:
								func_916(-163.2826f, 989.2324f, 234.0641f);
								break;
							
							case 13:
								func_916(-492.2117f, 585.2451f, 122f);
								break;
							
							case 14:
								func_916(-818.84f, 434.74f, 88.15f);
								break;
							
							case 15:
								func_916(-910.1f, 784.344f, 184.471f);
								break;
							
							case 16:
								func_916(-825.92f, -26.67f, 38.68f);
								break;
							
							case 17:
								func_916(-1103.5f, 587.29f, 102.865f);
								break;
							
							case 18:
								func_916(-1253.255f, 496.615f, 93.82f);
								break;
							
							case 19:
								func_916(166.55f, 487.31f, 142.12f);
								break;
							
							case 20:
								func_916(-1163.859f, 319.19f, 67.96f);
								break;
							
							default:
								break;
							}
						}
				}
			}
			else
			{
				iLocal_2634 = 1;
			}
			iLocal_2635 = iLocal_521;
			break;
	}
	iLocal_518 = iLocal_519;
	iLocal_520 = iLocal_521;
}

bool func_105(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar19;
	int iVar29;
	
	Global_69311[1 /*14*/] = {func_119(iParam0, iParam1, iParam2)};
	if (is_bit_set(Global_69311[1 /*14*/].f_6, false) && !is_bit_set(Global_69311[1 /*14*/].f_6, 6))
	{
		if (iParam3)
		{
			func_118(iParam1, Global_69311[1 /*14*/].f_5, Global_69311[1 /*14*/].f_2, 1, Global_69311[1 /*14*/].f_1, 1, 0);
			if (iParam1 == 12)
			{
				iVar0 = 1;
				if (iParam0 == joaat("player_zero"))
				{
					if (iParam2 == 31)
					{
						iVar0 = 0;
					}
				}
				if (iVar0 == 1)
				{
					uVar3 = {func_114(iParam0, iParam2)};
					iVar1 = 0;
					while (iVar1 <= 14)
					{
						if ((uVar3[iVar1] != -99 && iVar1 != 12) && iVar1 != 14)
						{
							if (iVar1 != 13)
							{
								func_105(iParam0, iVar1, uVar3[iVar1], 1, 1);
								func_113(iParam0, iVar1, uVar3[iVar1], 1);
							}
							else
							{
								uVar19 = {func_106(iParam0, uVar3[iVar1])};
								iVar2 = 0;
								while (iVar2 <= 8)
								{
									func_105(iParam0, 14, uVar19[iVar2], 1, 1);
									func_113(iParam0, 14, uVar19[iVar2], 1);
									iVar2++;
								}
							}
						}
						iVar1++;
					}
				}
			}
		}
		else
		{
			func_118(iParam1, Global_69311[1 /*14*/].f_5, Global_69311[1 /*14*/].f_2, 1, Global_69311[1 /*14*/].f_1, 0, 1);
		}
		if (iParam4 == 1 && iParam3 == 1)
		{
			switch (iParam0)
			{
				case joaat("player_zero"):
					break;
				
				case joaat("player_one"):
					switch (iParam1)
					{
						case 3:
							if (iParam2 >= 176 && iParam2 <= 191)
							{
								iVar29 = 227 + Global_69311[1 /*14*/].f_4;
								func_105(iParam0, 3, iVar29, 1, 0);
							}
							else if (iParam2 >= 227 && iParam2 <= 242)
							{
								iVar29 = 176 + Global_69311[1 /*14*/].f_4;
								func_105(iParam0, 3, iVar29, 1, 0);
							}
							break;
						
						case 11:
							if (iParam2 >= 9 && iParam2 <= 24)
							{
								iVar29 = 25 + Global_69311[1 /*14*/].f_4;
								func_105(iParam0, 11, iVar29, 1, 0);
							}
							else if (iParam2 >= 25 && iParam2 <= 40)
							{
								iVar29 = 9 + Global_69311[1 /*14*/].f_4;
								func_105(iParam0, 11, iVar29, 1, 0);
							}
							break;
						
						case 8:
							if (iParam2 >= 27 && iParam2 <= 42)
							{
								iVar29 = 43 + Global_69311[1 /*14*/].f_4;
								func_105(iParam0, 8, iVar29, 1, 0);
								iVar29 = 59 + Global_69311[1 /*14*/].f_4;
								func_105(iParam0, 8, iVar29, 1, 0);
							}
							else if (iParam2 >= 43 && iParam2 <= 58)
							{
								iVar29 = 27 + Global_69311[1 /*14*/].f_4;
								func_105(iParam0, 8, iVar29, 1, 0);
								iVar29 = 59 + Global_69311[1 /*14*/].f_4;
								func_105(iParam0, 8, iVar29, 1, 0);
							}
							else if (iParam2 >= 59 && iParam2 <= 74)
							{
								iVar29 = 27 + Global_69311[1 /*14*/].f_4;
								func_105(iParam0, 8, iVar29, 1, 0);
								iVar29 = 43 + Global_69311[1 /*14*/].f_4;
								func_105(iParam0, 8, iVar29, 1, 0);
							}
							break;
						
						case 14:
							if (iParam2 >= 64 && iParam2 <= 79)
							{
								iVar29 = 41 + Global_69311[1 /*14*/].f_4;
								func_105(iParam0, 14, iVar29, 1, 0);
							}
							break;
					}
					break;
				
				case joaat("player_two"):
					switch (iParam1)
					{
						case 4:
							if (iParam2 >= 81 && iParam2 <= 90)
							{
								iVar29 = 94 + Global_69311[1 /*14*/].f_4;
								func_105(iParam0, 4, iVar29, 1, 0);
							}
							break;
						
						case 12:
							if (iParam2 == 2)
							{
								func_105(iParam0, 14, 17, 1, 0);
							}
							break;
					}
					break;
				}
		}
		return true;
	}
	return false;
}

struct<10> func_106(int iParam0, int iParam1)
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
					func_112(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_112(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_112(&Var1, 19, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_112(&Var1, 14, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_112(&Var1, 18, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_112(&Var1, 0, 59, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_112(&Var1, 0, 60, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_112(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_112(&Var1, 0, 60, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_112(&Var1, 55, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_112(&Var1, 0, 1, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_107(&Var1, iParam0, iParam1, 10);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 31:
					func_112(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_112(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_112(&Var1, 0, 82, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_112(&Var1, 0, 1, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_112(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_112(&Var1, 41, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_112(&Var1, 40, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_112(&Var1, 41, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_112(&Var1, 0, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_112(&Var1, 69, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_107(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 31:
					func_112(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_112(&Var1, 11, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_112(&Var1, 17, 90, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_112(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_112(&Var1, 0, 88, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_112(&Var1, 0, 1, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_112(&Var1, 16, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_112(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_112(&Var1, 0, 123, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_112(&Var1, 69, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_107(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_112(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_112(&Var1, 129, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_112(&Var1, 90, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_112(&Var1, 23, 251, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_112(&Var1, 36, 262, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_112(&Var1, 88, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_112(&Var1, 125, 175, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_112(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_112(&Var1, 44, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_112(&Var1, 52, 189, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_112(&Var1, 0, 261, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_112(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_112(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_112(&Var1, 0, 212, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_112(&Var1, 64, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 14:
					func_112(&Var1, 61, 207, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_112(&Var1, 0, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_112(&Var1, 0, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_112(&Var1, 0, 229, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_112(&Var1, 36, 249, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_112(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_112(&Var1, 0, 174, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_112(&Var1, 35, 180, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_112(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_112(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 24:
					func_112(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_107(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_112(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_112(&Var1, 35, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_112(&Var1, 36, 178, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_112(&Var1, 53, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_112(&Var1, 38, 170, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_112(&Var1, 37, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_112(&Var1, 113, 203, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_112(&Var1, 114, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_112(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_112(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_112(&Var1, 0, 199, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_112(&Var1, 0, 182, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_112(&Var1, 0, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_112(&Var1, 107, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_112(&Var1, 109, 170, 2, 3, 4, 5, 323, 7, 8);
					break;
				
				case 14:
					func_112(&Var1, 119, 237, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_112(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_112(&Var1, 114, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_112(&Var1, 35, 268, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_112(&Var1, 0, 266, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_112(&Var1, 42, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_112(&Var1, 76, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_112(&Var1, 39, 235, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_112(&Var1, 41, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_112(&Var1, 111, 194, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_107(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
	}
	return Var1;
}

void func_107(int iParam0, int iParam1, int iParam2, int iParam3)
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
						*iParam0[vVar16.z] = func_108(iParam1, vVar16.x, 14, iVar0);
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

int func_108(int iParam0, int iParam1, int iParam2, int iParam3)
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
					return func_111(iParam0) + iVar18;
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
		iVar39 = _get_num_props_from_outfit(iParam3, 6, -1, 0, -1, func_110(iParam2));
		iVar37 = 0;
		while (iVar37 < iVar39)
		{
			get_shop_ped_query_component(iVar37, &Var20);
			if (!_is_dlc_data_empty(Var20))
			{
				if (iParam1 == Var20.f_1)
				{
					return func_109(iParam0, func_110(iParam2)) + iVar38;
				}
				iVar38++;
			}
			iVar37++;
		}
	}
	return -99;
}

int func_109(int iParam0, int iParam1)
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

int func_110(int iParam0)
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

int func_111(int iParam0)
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

void func_112(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
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

bool func_113(int iParam0, int iParam1, int iParam2, int iParam3)
{
	Global_69311[1 /*14*/] = {func_119(iParam0, iParam1, iParam2)};
	if (is_bit_set(Global_69311[1 /*14*/].f_6, false) && !is_bit_set(Global_69311[1 /*14*/].f_6, 6))
	{
		if (iParam3)
		{
			func_118(iParam1, Global_69311[1 /*14*/].f_5, Global_69311[1 /*14*/].f_2, 0, Global_69311[1 /*14*/].f_1, 1, 0);
		}
		else
		{
			func_118(iParam1, Global_69311[1 /*14*/].f_5, Global_69311[1 /*14*/].f_2, 0, Global_69311[1 /*14*/].f_1, 0, 1);
		}
		return true;
	}
	return false;
}

struct<16> func_114(int iParam0, int iParam1)
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
						func_117(&Var1, -99, -99, 1, 1, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					else
					{
						func_117(&Var1, -99, -99, 0, 0, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					break;
				
				case 1:
					func_117(&Var1, -99, -99, 16, 16, 6, 1, 1, 0, 1, -99, 0, 0, 0);
					break;
				
				case 2:
					func_117(&Var1, -99, -99, 36, 21, 6, 1, 5, 0, 0, -99, 0, 0, 8);
					break;
				
				case 3:
					func_117(&Var1, -99, -99, 65, 36, 6, 0, 2, 0, 0, -99, 0, 0, 31);
					break;
				
				case 4:
					func_117(&Var1, -99, -99, 61, 32, 6, 0, 0, 7, 3, -99, 0, 0, 2);
					break;
				
				case 5:
					func_117(&Var1, -99, -99, Global_101154.f_1826.f_539.f_196[0], Global_101154.f_1826.f_539.f_200[0], 6, 3, 0, 0, 0, -99, 0, 0, 3);
					break;
				
				case 6:
					func_117(&Var1, -99, -99, 92, 72, 7, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_117(&Var1, -99, -99, 85, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 8:
					func_117(&Var1, -99, -99, 170, 80, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_117(&Var1, -99, -99, 171, 89, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_117(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 4);
					break;
				
				case 11:
					func_117(&Var1, -99, -99, 33, 18, 17, 10, 4, 8, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_117(&Var1, -99, -99, 35, 20, 9, 10, 23, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_117(&Var1, -99, -99, 69, 40, 13, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_117(&Var1, -99, -99, 62, 33, 38, 0, 8, 0, 0, -99, 0, 0, 6);
					break;
				
				case 15:
					func_117(&Var1, -99, -99, 63, 34, 6, 10, 0, 0, 4, -99, 0, 0, 31);
					break;
				
				case 16:
					func_117(&Var1, -99, -99, 174, 93, 18, 0, 18, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_117(&Var1, -99, -99, 76, 46, 6, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_117(&Var1, -99, -99, 35, 20, 9, 10, 0, 4, 0, -99, 0, 0, 7);
					break;
				
				case 19:
					func_117(&Var1, -99, -99, 64, 35, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_117(&Var1, -99, -99, 66, 37, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_117(&Var1, -99, -99, 67, 38, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_117(&Var1, -99, -99, 68, 39, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_117(&Var1, -99, -99, 177, 94, 19, 9, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_117(&Var1, -99, -99, 35, 20, 9, 10, 4, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_117(&Var1, -99, -99, 97, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_117(&Var1, -99, -99, 3, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_117(&Var1, -99, -99, 129, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_117(&Var1, -99, -99, 170, 80, 6, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_117(&Var1, -99, -99, 2, 2, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_117(&Var1, -99, -99, 161, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_117(&Var1, -99, -99, 3, 3, 0, 12, 0, 0, 0, -99, 0, 1, 31);
					break;
				
				case 32:
					func_117(&Var1, -99, -99, 85, 55, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_117(&Var1, -99, -99, 86, 4, 20, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_117(&Var1, -99, -99, 44, 97, 6, 0, 0, 0, 0, -99, 0, 2, 31);
					break;
				
				case 35:
					func_117(&Var1, -99, -99, 85, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_117(&Var1, -99, -99, 4, 4, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_117(&Var1, -99, -99, 5, 5, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_117(&Var1, -99, -99, 6, 6, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_117(&Var1, -99, -99, 7, 7, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_117(&Var1, -99, -99, 8, 8, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_117(&Var1, -99, -99, 9, 9, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_117(&Var1, -99, -99, 10, 10, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_117(&Var1, -99, -99, 11, 11, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_117(&Var1, -99, -99, 12, 12, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_117(&Var1, -99, -99, 13, 13, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 46:
					func_117(&Var1, -99, -99, 14, 14, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_117(&Var1, -99, -99, 15, 15, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 48:
					func_117(&Var1, -99, -99, 91, 71, 14, 13, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 49:
					func_117(&Var1, -99, -99, 35, 20, 9, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 50:
					func_117(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 9);
					break;
				
				case 51:
					func_117(&Var1, -99, -99, 169, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 52:
					func_117(&Var1, -99, -99, 169, 72, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_115(&Var1, iParam0, iParam1, 53);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					func_117(&Var1, -99, -99, 73, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_117(&Var1, -99, -99, 22, 10, 64, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 2:
					func_117(&Var1, -99, -99, Global_101154.f_1826.f_539.f_196[1], Global_101154.f_1826.f_539.f_200[1], 17, 2, 26, 0, 0, -99, 0, 45, 31);
					break;
				
				case 3:
					func_117(&Var1, -99, -99, 23, 11, 13, 5, 2, 4, 0, -99, 0, 0, 1);
					break;
				
				case 4:
					func_117(&Var1, -99, -99, 23, 11, 34, 5, 26, 0, 0, -99, 0, 0, 2);
					break;
				
				case 5:
					func_117(&Var1, -99, 20, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 6:
					func_117(&Var1, -99, -99, 40, 13, 14, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_117(&Var1, -99, -99, 90, 32, 17, 1, 8, 0, 1, -99, 0, 0, 3);
					break;
				
				case 8:
					func_117(&Var1, -99, -99, 17, 5, 12, 0, 26, 0, 2, -99, 0, 0, 5);
					break;
				
				case 9:
					func_117(&Var1, -99, -99, 16, 4, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_117(&Var1, -99, -99, 208, 71, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_117(&Var1, -99, -99, 259, 10, 35, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 12:
					func_117(&Var1, -99, -99, 18, 6, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_117(&Var1, -99, -99, 19, 7, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_117(&Var1, -99, -99, 20, 8, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_117(&Var1, -99, -99, 21, 9, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_117(&Var1, -99, -99, 135, 40, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_117(&Var1, -99, -99, 74, 24, 52, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_117(&Var1, -99, -99, 176, 53, 26, 5, 26, 0, 0, -99, 0, 41, 31);
					break;
				
				case 19:
					func_117(&Var1, -99, -99, 125, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_117(&Var1, -99, -99, 162, 24, 36, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_117(&Var1, -99, -99, 75, 24, 36, 0, 26, 0, 0, -99, 0, 0, 4);
					break;
				
				case 22:
					func_117(&Var1, -99, -99, 227, 53, 25, 0, 27, 0, 0, -99, 0, 25, 31);
					break;
				
				case 23:
					func_117(&Var1, -99, -99, 228, 54, 25, 0, 28, 0, 0, -99, 0, 26, 31);
					break;
				
				case 24:
					func_117(&Var1, -99, -99, 229, 55, 25, 0, 29, 0, 0, -99, 0, 27, 31);
					break;
				
				case 25:
					func_117(&Var1, -99, -99, 230, 56, 25, 0, 30, 0, 0, -99, 0, 28, 31);
					break;
				
				case 26:
					func_117(&Var1, -99, -99, 231, 57, 25, 0, 31, 0, 0, -99, 0, 29, 31);
					break;
				
				case 27:
					func_117(&Var1, -99, -99, 232, 58, 25, 0, 32, 0, 0, -99, 0, 30, 31);
					break;
				
				case 28:
					func_117(&Var1, -99, -99, 233, 59, 25, 0, 33, 0, 0, -99, 0, 31, 31);
					break;
				
				case 29:
					func_117(&Var1, -99, -99, 234, 60, 25, 0, 34, 0, 0, -99, 0, 32, 31);
					break;
				
				case 30:
					func_117(&Var1, -99, -99, 235, 61, 25, 0, 35, 0, 0, -99, 0, 33, 31);
					break;
				
				case 31:
					func_117(&Var1, -99, -99, 236, 62, 25, 0, 36, 0, 0, -99, 0, 34, 31);
					break;
				
				case 32:
					func_117(&Var1, -99, -99, 237, 63, 25, 0, 37, 0, 0, -99, 0, 35, 31);
					break;
				
				case 33:
					func_117(&Var1, -99, -99, 238, 64, 25, 0, 38, 0, 0, -99, 0, 36, 31);
					break;
				
				case 34:
					func_117(&Var1, -99, -99, 239, 65, 25, 0, 39, 0, 0, -99, 0, 37, 31);
					break;
				
				case 35:
					func_117(&Var1, -99, -99, 240, 66, 25, 0, 40, 0, 0, -99, 0, 38, 31);
					break;
				
				case 36:
					func_117(&Var1, -99, -99, 241, 67, 25, 0, 41, 0, 0, -99, 0, 39, 31);
					break;
				
				case 37:
					func_117(&Var1, -99, -99, 242, 68, 25, 0, 42, 0, 0, -99, 0, 40, 31);
					break;
				
				case 38:
					func_117(&Var1, -99, -99, 260, 72, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_117(&Var1, -99, -99, 125, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_117(&Var1, -99, -99, 123, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_117(&Var1, -99, -99, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_117(&Var1, -99, -99, 89, 22, 15, 6, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_117(&Var1, -99, -99, 317, 69, 17, 0, 0, 0, 51, -99, 0, 0, 6);
					break;
				
				case 44:
					func_117(&Var1, -99, -99, 30, 23, 16, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 45:
					func_117(&Var1, -99, -99, 106, 70, 17, 5, 26, 0, 0, -99, 0, 0, 8);
					break;
				
				case 46:
					func_117(&Var1, -99, -99, 117, 24, 20, 5, 26, 0, 52, -99, 0, 0, 31);
					break;
				
				default:
					func_115(&Var1, iParam0, iParam1, 47);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					func_117(&Var1, -99, -99, 0, 91, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_117(&Var1, -99, -99, 17, 5, 8, 2, 3, 0, 0, -99, 0, 0, 8);
					break;
				
				case 2:
					func_117(&Var1, -99, -99, 43, 8, 12, 3, 5, 0, 0, -99, 0, 0, 1);
					break;
				
				case 3:
					func_117(&Var1, -99, -99, 50, 14, 8, 0, 15, 6, 3, -99, 0, 0, 2);
					break;
				
				case 4:
					func_117(&Var1, -99, -99, Global_101154.f_1826.f_539.f_196[2], Global_101154.f_1826.f_539.f_200[2], 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 5:
					func_117(&Var1, -99, -99, 95, 33, 8, 0, 15, 0, 0, -99, 0, 0, 6);
					break;
				
				case 6:
					func_117(&Var1, -99, -99, 49, 13, 10, 4, 6, 0, 0, -99, 0, 0, 3);
					break;
				
				case 7:
					func_117(&Var1, -99, -99, 49, 13, 14, 4, 15, 0, 0, -99, 0, 0, 4);
					break;
				
				case 8:
					func_117(&Var1, -99, -99, 79, 32, 8, 5, 7, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_117(&Var1, -99, -99, 53, 17, 11, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_117(&Var1, -99, -99, 96, 81, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_117(&Var1, -99, -99, 51, 15, 33, 0, 8, 0, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_117(&Var1, -99, -99, 0, 93, 29, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_117(&Var1, -99, -99, 52, 16, 30, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_117(&Var1, -99, -99, 241, 92, 16, 0, 12, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_117(&Var1, -99, -99, 97, 34, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_117(&Var1, -99, -99, 44, 9, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_117(&Var1, -99, -99, 45, 10, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_117(&Var1, -99, -99, 46, 11, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 19:
					func_117(&Var1, -99, -99, 47, 12, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_117(&Var1, -99, -99, 161, 53, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_117(&Var1, -99, -99, 0, 44, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_117(&Var1, -99, -99, 98, 0, 28, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_117(&Var1, -99, -99, 27, 0, 31, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_117(&Var1, -99, -99, 190, 71, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_117(&Var1, -99, -99, 191, 72, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_117(&Var1, -99, -99, 192, 73, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_117(&Var1, -99, -99, 193, 74, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_117(&Var1, -99, -99, 194, 75, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_117(&Var1, -99, -99, 195, 76, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_117(&Var1, -99, -99, 196, 77, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_117(&Var1, -99, -99, 197, 78, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 32:
					func_117(&Var1, -99, -99, 198, 79, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_117(&Var1, -99, -99, 199, 80, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_117(&Var1, -99, -99, 200, 62, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 35:
					func_117(&Var1, -99, -99, 201, 63, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_117(&Var1, -99, -99, 202, 64, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_117(&Var1, -99, -99, 203, 65, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_117(&Var1, -99, -99, 204, 66, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_117(&Var1, -99, -99, 205, 67, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_117(&Var1, -99, -99, 206, 68, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_117(&Var1, -99, -99, 2, 43, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_117(&Var1, -99, -99, 55, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_117(&Var1, -99, -99, 0, 52, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_117(&Var1, -99, -99, 70, 30, 32, 6, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_117(&Var1, -99, -99, 19, 91, 28, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 46:
					func_117(&Var1, -99, -99, 0, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_117(&Var1, -99, -99, 79, 32, 8, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_115(&Var1, iParam0, iParam1, 48);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_117(&Var1, -99, -99, 0, 0, 10, -99, 0, -99, -99, 0, 0, 0, 31);
					break;
				
				case 1:
					func_117(&Var1, -99, -99, 1, 127, 38, -99, 2, 0, 0, 0, 0, 62, 0);
					break;
				
				case 2:
					func_117(&Var1, -99, -99, 0, 248, 45, -99, 240, 0, 0, 0, 0, 144, 1);
					break;
				
				case 3:
					func_117(&Var1, -99, -99, 4, 31, 25, -99, 240, 0, 0, 0, 0, 231, 2);
					break;
				
				case 4:
					func_117(&Var1, -99, -99, 1, 66, 10, -99, 21, 0, 0, 0, 0, 123, 3);
					break;
				
				case 5:
					func_117(&Var1, -99, -99, 1, 93, 141, -99, 3, 0, 0, 0, 0, 114, 4);
					break;
				
				case 6:
					func_117(&Var1, -99, -99, 1, 116, 113, -99, 7, 0, 0, 0, 0, 113, 5);
					break;
				
				case 7:
					func_117(&Var1, -99, -99, 1, 61, 136, -99, 27, 0, 0, 0, 0, 61, 6);
					break;
				
				case 8:
					func_117(&Var1, -99, -99, 0, 112, 10, -99, 240, 0, 0, 0, 0, 8, 7);
					break;
				
				case 9:
					func_117(&Var1, -99, -99, 4, 131, 24, -99, 240, 0, 0, 0, 0, 223, 8);
					break;
				
				case 10:
					func_117(&Var1, -99, -99, 1, 209, 188, -99, 208, 0, 0, 0, 0, 64, 9);
					break;
				
				case 11:
					func_117(&Var1, -99, -99, 1, 209, 160, -99, 211, 0, 0, 0, 43, 157, 10);
					break;
				
				case 12:
					func_117(&Var1, -99, -99, 1, 162, 174, -99, 201, 0, 0, 0, 0, 158, 11);
					break;
				
				case 13:
					func_117(&Var1, -99, -99, 1, 4, 240, -99, 34, 0, 0, 0, 0, 97, 12);
					break;
				
				case 14:
					func_117(&Var1, -99, -99, 1, 128, 232, -99, 43, 0, 0, 0, 0, 102, 13);
					break;
				
				case 15:
					func_117(&Var1, -99, -99, 1, 66, 65, -99, 224, 0, 0, 0, 0, 100, 14);
					break;
				
				case 16:
					func_117(&Var1, -99, -99, 1, 65, 172, -99, 202, 0, 0, 0, 0, 64, 15);
					break;
				
				case 17:
					func_117(&Var1, -99, -99, 1, 64, 10, -99, 1, 0, 0, 0, 0, 66, 16);
					break;
				
				case 18:
					func_117(&Var1, -99, -99, 5, 98, 80, -99, 240, 0, 0, 0, 0, 87, 17);
					break;
				
				case 19:
					func_117(&Var1, -99, -99, 5, 192, 96, -99, 240, 0, 0, 0, 0, 80, 18);
					break;
				
				case 20:
					func_117(&Var1, -99, -99, 1, 124, 96, -99, 11, 0, 0, 0, 0, 110, 19);
					break;
				
				case 21:
					func_117(&Var1, -99, -99, 0, 80, 114, -99, 240, 0, 0, 0, 0, 2, 20);
					break;
				
				case 22:
					func_117(&Var1, -99, -99, 6, 43, 112, -99, 82, 0, 0, 0, 0, 48, 21);
					break;
				
				case 23:
					func_117(&Var1, -99, -99, 1, 116, 144, -99, 2, 0, 0, 0, 0, 108, 22);
					break;
				
				case 24:
					func_117(&Var1, -99, -99, 1, 63, 38, -99, 3, 0, 0, 0, 0, 63, 23);
					break;
				
				case 25:
					func_117(&Var1, -99, -99, 2, 64, 10, -99, 240, 0, 0, 0, 0, 41, 24);
					break;
				
				default:
					func_115(&Var1, iParam0, iParam1, 26);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_117(&Var1, -99, -99, 0, 0, 0, -99, 0, -99, -99, 0, -99, 0, 31);
					break;
				
				case 1:
					func_117(&Var1, -99, -99, 5, 136, 241, -99, 47, 0, 0, 0, 0, 21, 31);
					break;
				
				case 2:
					func_117(&Var1, -99, -99, 4, 1, 96, -99, 32, 0, 0, 0, 7, 215, 0);
					break;
				
				case 3:
					func_117(&Var1, -99, -99, 1, 73, 241, -99, 3, 0, 0, 0, 0, 25, 1);
					break;
				
				case 4:
					func_117(&Var1, -99, -99, 2, 88, 217, -99, 32, 0, 0, 0, 0, 33, 2);
					break;
				
				case 5:
					func_117(&Var1, -99, -99, 9, 7, 98, -99, 32, 0, 0, 0, 7, 153, 3);
					break;
				
				case 6:
					func_117(&Var1, -99, -99, 1, 140, 241, -99, 7, 0, 0, 0, 31, 16, 4);
					break;
				
				case 7:
					func_117(&Var1, -99, -99, 4, 139, 112, -99, 32, 0, 0, 0, 49, 78, 5);
					break;
				
				case 8:
					func_117(&Var1, -99, -99, 1, 193, 48, -99, 108, 0, 0, 0, 0, 17, 6);
					break;
				
				case 9:
					func_117(&Var1, -99, -99, 5, 114, 97, -99, 103, 0, 0, 0, 0, 98, 7);
					break;
				
				case 10:
					func_117(&Var1, -99, -99, 9, 134, 239, -99, 32, 0, 0, 0, 2, 144, 8);
					break;
				
				case 11:
					func_117(&Var1, -99, -99, 5, 152, 96, -99, 10, 0, 0, 0, 31, 96, 9);
					break;
				
				case 12:
					func_117(&Var1, -99, -99, 6, 129, 1, -99, 96, 0, 0, 0, 5, 120, 10);
					break;
				
				case 13:
					func_117(&Var1, -99, -99, 5, 0, 0, -99, 10, 0, 0, 0, 0, 130, 31);
					break;
				
				case 14:
					func_117(&Var1, -99, -99, 4, 159, 96, -99, 32, 0, 0, 0, 22, 214, 11);
					break;
				
				case 15:
					func_117(&Var1, -99, -99, 9, 232, 213, -99, 32, 0, 0, 0, 22, 147, 12);
					break;
				
				case 16:
					func_117(&Var1, -99, -99, 2, 8, 98, -99, 32, 0, 0, 0, 33, 39, 13);
					break;
				
				case 17:
					func_117(&Var1, -99, -99, 5, 150, 235, -99, 106, 0, 0, 0, 0, 128, 14);
					break;
				
				case 18:
					func_117(&Var1, -99, -99, 6, 96, 97, -99, 7, 0, 0, 0, 32, 114, 15);
					break;
				
				case 19:
					func_117(&Var1, -99, -99, 4, 48, 64, -99, 32, 0, 0, 0, 0, 89, 16);
					break;
				
				case 20:
					func_117(&Var1, -99, -99, 4, 62, 64, -99, 32, 0, 0, 0, 0, 78, 17);
					break;
				
				case 21:
					func_117(&Var1, -99, -99, 4, 49, 65, -99, 32, 0, 0, 0, 8, 80, 31);
					break;
				
				case 22:
					func_117(&Var1, -99, -99, 3, 20, 16, -99, 32, 0, 0, 0, 0, 49, 18);
					break;
				
				case 23:
					func_117(&Var1, -99, -99, 0, 73, 178, -99, 32, 0, 0, 0, 38, 11, 19);
					break;
				
				case 24:
					func_117(&Var1, -99, -99, 5, 135, 53, -99, 9, 0, 0, 0, 29, 27, 20);
					break;
				
				case 25:
					func_117(&Var1, -99, -99, 7, 233, 176, -99, 120, 0, 0, 0, 11, 160, 21);
					break;
				
				case 26:
					func_117(&Var1, -99, -99, 4, 34, 179, -99, 32, 0, 0, 0, 0, 77, 22);
					break;
				
				case 27:
					func_117(&Var1, -99, -99, 15, 131, 93, -99, 32, 0, 0, 0, 0, 250, 23);
					break;
				
				default:
					func_115(&Var1, iParam0, iParam1, 28);
					break;
			}
			break;
	}
	return Var1;
}

void func_115(int iParam0, int iParam1, int iParam2, int iParam3)
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
						*iParam0[func_116(vVar16.z)] = vVar16.x;
					}
					else
					{
						*iParam0[func_116(vVar16.z)] = func_108(iParam1, vVar16.x, func_116(vVar16.z), iVar0);
					}
				}
				else if (vVar16.y != -1)
				{
					*iParam0[func_116(vVar16.z)] = vVar16.y;
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

int func_116(int iParam0)
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

void func_117(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
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

int func_118(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

struct<14> func_119(int iParam0, int iParam1, int iParam2)
{
	func_183();
	if (iParam0 == joaat("player_zero"))
	{
		func_165(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_one"))
	{
		func_146(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_two"))
	{
		func_120(iParam1, iParam2);
	}
	return Global_69311[0 /*14*/];
}

void func_120(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_145(iParam1);
			break;
		
		case 2:
			func_144(iParam1);
			break;
		
		case 3:
			func_141(iParam1);
			break;
		
		case 4:
			func_140(iParam1);
			break;
		
		case 6:
			func_139(iParam1);
			break;
		
		case 5:
			func_138(iParam1);
			break;
		
		case 8:
			func_137(iParam1);
			break;
		
		case 9:
			func_136(iParam1);
			break;
		
		case 10:
			func_135(iParam1);
			break;
		
		case 1:
			func_134(iParam1);
			break;
		
		case 7:
			func_133(iParam1);
			break;
		
		case 11:
			func_132(iParam1);
			break;
		
		case 12:
			func_131(iParam1);
			break;
		
		case 13:
			func_130(iParam1);
			break;
		
		case 14:
			func_121(iParam1);
			break;
	}
}

void func_121(int iParam0)
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
			func_129(iVar10, iParam0, 155);
			return;
			break;
	}
	func_122(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_122(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	*uParam0.f_6 = 0;
	*uParam0 = iParam9;
	*uParam0.f_1 = iParam2 % 32;
	*uParam0.f_2 = iParam2 / 32;
	*uParam0.f_3 = iParam4;
	*uParam0.f_4 = iParam5;
	*uParam0.f_7 = iParam6;
	StringCopy(uParam0.f_8, sParam3, 16);
	*uParam0.f_13 = iParam8;
	*uParam0.f_12 = func_128(iParam8);
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
		if (func_27(14))
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
			if (!func_126(Global_2621444, 1, 1, 1, -1))
			{
				clear_bit(uParam0.f_6, 2);
			}
			if (!func_126(Global_2621444, 2, 1, 1, -1))
			{
				set_bit(uParam0.f_6, 4);
			}
		}
		else if (iParam1 == 13)
		{
		}
		else if (iParam1 == 14)
		{
			if (!func_126(Global_2621444, 1, 1, 1, -1))
			{
				clear_bit(uParam0.f_6, 2);
			}
			if (!func_126(Global_2621444, 2, 1, 1, -1))
			{
				set_bit(uParam0.f_6, 4);
			}
		}
		else
		{
			if (!func_126(Global_2621444, 1, 1, 1, -1))
			{
				clear_bit(uParam0.f_6, 2);
			}
			if (!func_126(Global_2621444, 2, 1, 1, -1))
			{
				set_bit(uParam0.f_6, 4);
			}
		}
	}
	else if (*uParam0.f_5 >= 0 && *uParam0.f_5 < 3)
	{
		set_bit(uParam0.f_6, false);
		set_bit(uParam0.f_6, 5);
		if (func_118(iParam1, *uParam0.f_5, *uParam0.f_2, 0, *uParam0.f_1, 0, 0))
		{
			set_bit(uParam0.f_6, true);
		}
		if (func_118(iParam1, *uParam0.f_5, *uParam0.f_2, 1, *uParam0.f_1, 0, 0))
		{
			set_bit(uParam0.f_6, 2);
		}
		if (!func_118(iParam1, *uParam0.f_5, *uParam0.f_2, 2, *uParam0.f_1, 0, 0))
		{
			set_bit(uParam0.f_6, 4);
		}
	}
	else
	{
		set_bit(uParam0.f_6, false);
		if ((((((((((iParam1 == 11 || iParam1 == 4) || iParam1 == 6) || iParam1 == 1) || iParam1 == 14) || iParam1 == 2) || iParam1 == 8) || iParam1 == 9) || iParam1 == 10) || iParam1 == 7) || iParam1 == 12)
		{
			if (func_27(14))
			{
				return;
			}
			iVar0 = func_1053(func_125(iParam1, *uParam0.f_2), Global_69309, 0);
			if (is_bit_set(iVar0, *uParam0.f_1))
			{
				set_bit(uParam0.f_6, true);
			}
			iVar0 = func_1053(func_124(iParam1, *uParam0.f_2), Global_69309, 0);
			if (is_bit_set(iVar0, *uParam0.f_1))
			{
				set_bit(uParam0.f_6, 2);
			}
			if (func_123(iParam1, *uParam0.f_2, &iVar1))
			{
				iVar0 = func_1053(iVar1, Global_69309, 0);
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

int func_123(int iParam0, int iParam1, var uParam2)
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

int func_124(int iParam0, int iParam1)
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

int func_125(int iParam0, int iParam1)
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

int func_126(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = Global_69309;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_127(uParam0, iParam1, &iVar2, &iVar1, iParam2, iParam3))
	{
		iVar3 = func_1053(iVar2, iVar0, 0);
		return is_bit_set(iVar3, iVar1);
	}
	return false;
}

int func_127(var uParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)
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

int func_128(int iParam0)
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

void func_129(int iParam0, int iParam1, int iParam2)
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
					func_122(&(Global_69311[0 /*14*/]), iParam0, iParam1, &(Var2.f_7), 0, 0, Var2.f_2, 0, -1, 2, 1);
					return;
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else if (iParam0 == 13)
	{
		func_122(&(Global_69311[0 /*14*/]), iParam0, iParam1, "NO_LABEL", 0, 0, 0, 1, -1, 2, 1);
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
					func_122(&(Global_69311[0 /*14*/]), iParam0, iParam1, &(Var20.f_9), Var20.f_3, Var20.f_4, Var20.f_5, _0x341DE7ED1D2A1BFD(Var20.f_1, -2050632586, false), iVar37, 2, Var20.f_1 != 0);
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
		iVar60 = _get_num_props_from_outfit(iVar1, 6, -1, 0, -1, func_110(iParam0));
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
					func_122(&(Global_69311[0 /*14*/]), iParam0, iParam1, &(Var41.f_9), Var41.f_3, Var41.f_4, Var41.f_5, _0x341DE7ED1D2A1BFD(Var41.f_1, -2050632586, false), -1, 2, Var41.f_1 != 0);
					return;
				}
				iVar59++;
			}
			iVar58++;
		}
	}
}

void func_130(int iParam0)
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
			func_129(iVar10, iParam0, 9);
			return;
			break;
	}
	func_122(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_131(int iParam0)
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
			func_129(iVar10, iParam0, 48);
			return;
			break;
	}
	func_122(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_132(int iParam0)
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
			func_129(iVar10, iParam0, 1);
			return;
			break;
	}
	func_122(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_133(int iParam0)
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
			func_129(iVar10, iParam0, 1);
			return;
			break;
	}
	func_122(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_134(int iParam0)
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
			func_129(iVar10, iParam0, 6);
			return;
			break;
	}
	func_122(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_135(int iParam0)
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
			func_129(iVar10, iParam0, 33);
			return;
			break;
	}
	func_122(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_136(int iParam0)
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
			func_129(iVar10, iParam0, 17);
			return;
			break;
	}
	func_122(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_137(int iParam0)
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
			func_129(iVar10, iParam0, 18);
			return;
			break;
	}
	func_122(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_138(int iParam0)
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
			func_129(iVar10, iParam0, 7);
			return;
			break;
	}
	func_122(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_139(int iParam0)
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
			func_129(iVar10, iParam0, 84);
			return;
			break;
	}
	func_122(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_140(int iParam0)
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
			func_129(iVar10, iParam0, 104);
			return;
			break;
	}
	func_122(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_141(int iParam0)
{
	if (iParam0 < 136)
	{
		func_143(iParam0);
	}
	else
	{
		func_142(iParam0);
	}
	if (Global_69311[0 /*14*/].f_2 == -1)
	{
		func_129(3, iParam0, 242);
	}
}

void func_142(int iParam0)
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
	func_122(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_143(int iParam0)
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
	func_122(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_144(int iParam0)
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
			func_129(iVar10, iParam0, 9);
			return;
			break;
	}
	func_122(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_145(int iParam0)
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
			func_129(iVar10, iParam0, 7);
			return;
			break;
	}
	func_122(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_146(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_164(iParam1);
			break;
		
		case 2:
			func_163(iParam1);
			break;
		
		case 3:
			func_159(iParam1);
			break;
		
		case 4:
			func_158(iParam1);
			break;
		
		case 6:
			func_157(iParam1);
			break;
		
		case 5:
			func_156(iParam1);
			break;
		
		case 8:
			func_155(iParam1);
			break;
		
		case 9:
			func_154(iParam1);
			break;
		
		case 10:
			func_153(iParam1);
			break;
		
		case 1:
			func_152(iParam1);
			break;
		
		case 7:
			func_151(iParam1);
			break;
		
		case 11:
			func_150(iParam1);
			break;
		
		case 12:
			func_149(iParam1);
			break;
		
		case 13:
			func_148(iParam1);
			break;
		
		case 14:
			func_147(iParam1);
			break;
	}
}

void func_147(int iParam0)
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
			func_129(iVar10, iParam0, 175);
			return;
			break;
	}
	func_122(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_148(int iParam0)
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
			func_129(iVar10, iParam0, 9);
			return;
			break;
	}
	func_122(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_149(int iParam0)
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
			func_129(iVar10, iParam0, 47);
			return;
			break;
	}
	func_122(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_150(int iParam0)
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
			func_129(iVar10, iParam0, 63);
			return;
			break;
	}
	func_122(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_151(int iParam0)
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
			func_129(iVar10, iParam0, 1);
			return;
			break;
	}
	func_122(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_152(int iParam0)
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
			func_129(iVar10, iParam0, 5);
			return;
			break;
	}
	func_122(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_153(int iParam0)
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
			func_129(iVar10, iParam0, 53);
			return;
			break;
	}
	func_122(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_154(int iParam0)
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
			func_129(iVar10, iParam0, 12);
			return;
			break;
	}
	func_122(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_155(int iParam0)
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
			func_129(iVar10, iParam0, 77);
			return;
			break;
	}
	func_122(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_156(int iParam0)
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
			func_129(iVar10, iParam0, 7);
			return;
			break;
	}
	func_122(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_157(int iParam0)
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
			func_129(iVar10, iParam0, 134);
			return;
			break;
	}
	func_122(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_158(int iParam0)
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
			func_129(iVar10, iParam0, 117);
			return;
			break;
	}
	func_122(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_159(int iParam0)
{
	if (iParam0 < 107)
	{
		func_162(iParam0);
	}
	else if (iParam0 < 227)
	{
		func_161(iParam0);
	}
	else
	{
		func_160(iParam0);
	}
	if (Global_69311[0 /*14*/].f_2 == -1)
	{
		func_129(3, iParam0, 318);
	}
}

void func_160(int iParam0)
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
	func_122(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_161(int iParam0)
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
	func_122(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_162(int iParam0)
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
	func_122(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_163(int iParam0)
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
			func_129(iVar10, iParam0, 21);
			return;
			break;
	}
	func_122(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_164(int iParam0)
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
			func_129(iVar10, iParam0, 10);
			return;
			break;
	}
	func_122(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_165(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_182(iParam1);
			break;
		
		case 2:
			func_181(iParam1);
			break;
		
		case 3:
			func_178(iParam1);
			break;
		
		case 4:
			func_177(iParam1);
			break;
		
		case 6:
			func_176(iParam1);
			break;
		
		case 5:
			func_175(iParam1);
			break;
		
		case 8:
			func_174(iParam1);
			break;
		
		case 9:
			func_173(iParam1);
			break;
		
		case 10:
			func_172(iParam1);
			break;
		
		case 1:
			func_171(iParam1);
			break;
		
		case 7:
			func_170(iParam1);
			break;
		
		case 11:
			func_169(iParam1);
			break;
		
		case 12:
			func_168(iParam1);
			break;
		
		case 13:
			func_167(iParam1);
			break;
		
		case 14:
			func_166(iParam1);
			break;
	}
}

void func_166(int iParam0)
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
			func_129(iVar10, iParam0, 113);
			return;
			break;
	}
	func_122(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_167(int iParam0)
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
			func_129(iVar10, iParam0, 10);
			return;
			break;
	}
	func_122(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_168(int iParam0)
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
			func_129(iVar10, iParam0, 53);
			return;
			break;
	}
	func_122(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_169(int iParam0)
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
			func_129(iVar10, iParam0, 45);
			return;
			break;
	}
	func_122(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_170(int iParam0)
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
			func_129(iVar10, iParam0, 1);
			return;
			break;
	}
	func_122(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_171(int iParam0)
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
			func_129(iVar10, iParam0, 5);
			return;
			break;
	}
	func_122(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_172(int iParam0)
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
			func_129(iVar10, iParam0, 48);
			return;
			break;
	}
	func_122(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_173(int iParam0)
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
			func_129(iVar10, iParam0, 20);
			return;
			break;
	}
	func_122(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_174(int iParam0)
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
			func_129(iVar10, iParam0, 24);
			return;
			break;
	}
	func_122(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_175(int iParam0)
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
			func_129(iVar10, iParam0, 14);
			return;
			break;
	}
	func_122(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_176(int iParam0)
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
			func_129(iVar10, iParam0, 99);
			return;
			break;
	}
	func_122(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_177(int iParam0)
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
			func_129(iVar10, iParam0, 113);
			return;
			break;
	}
	func_122(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_178(int iParam0)
{
	if (iParam0 < 60)
	{
		func_180(iParam0);
	}
	else
	{
		func_179(iParam0);
	}
	if (Global_69311[0 /*14*/].f_2 == -1)
	{
		func_129(3, iParam0, 181);
	}
}

void func_179(int iParam0)
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
	func_122(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_180(int iParam0)
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
	func_122(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_181(int iParam0)
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
			func_129(iVar10, iParam0, 6);
			return;
			break;
	}
	func_122(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_182(int iParam0)
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
			func_129(iVar10, iParam0, 7);
			return;
			break;
	}
	func_122(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_183()
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

bool func_184(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	struct<10> Var0;
	struct<10> Var10;
	int iVar20;
	int iVar21;
	
	if (func_87(0))
	{
		return false;
	}
	if (iParam4 < 0)
	{
		return false;
	}
	if (iParam5 < 0)
	{
		return false;
	}
	if (iParam6 == 76)
	{
		return false;
	}
	if (iParam7 == 235)
	{
		return false;
	}
	if (iParam3 < 3)
	{
		if (is_bit_set(iParam2, iParam3))
		{
			return false;
		}
	}
	if (iParam2 < 1 || iParam2 > 7)
	{
		return false;
	}
	if (Global_101154.f_6378.f_866 < 10)
	{
		Var0 = iParam0;
		Var0.f_3 = func_192(iParam1);
		Var0.f_4 = get_game_timer() + iParam4;
		Var0.f_5 = iParam5;
		Var0.f_1 = iParam9;
		Var0.f_2 = iParam2;
		Var0.f_6 = iParam3;
		Var0.f_7 = iParam6;
		Var0.f_8 = iParam7;
		Var0.f_9 = iParam8;
		clear_bit(&(Var0.f_1), false);
		Global_101154.f_6378.f_765[Global_101154.f_6378.f_866 /*10*/] = {Var0};
		Global_101154.f_6378.f_866++;
		return true;
	}
	else
	{
		Var10 = {func_191(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9)};
		iVar20 = 0;
		func_190(&iVar20);
		iVar21 = func_189(Var10, Global_101154.f_6378.f_765[iVar20 /*10*/]);
		if (iVar21 == 2)
		{
			func_187(Global_101154.f_6378.f_765[iVar20 /*10*/]);
			Global_101154.f_6378.f_765[iVar20 /*10*/] = {Var10};
			func_186(&Var10);
			return true;
		}
		else if (iVar21 == 1)
		{
			if (func_185(Var10))
			{
				func_187(Global_101154.f_6378.f_765[iVar20 /*10*/]);
				Global_101154.f_6378.f_765[iVar20 /*10*/] = {Var10};
				func_186(&Var10);
				return true;
			}
			else
			{
				if (!func_185(Global_101154.f_6378.f_765[iVar20 /*10*/]))
				{
					Global_101154.f_6378.f_765[iVar20 /*10*/] = {Var10};
					func_186(&Var10);
					return true;
				}
				func_186(&Var10);
				return true;
			}
		}
		else
		{
			func_187(Var10);
			func_186(&Var10);
			return true;
		}
	}
	return false;
}

bool func_185(struct<9> Param0, var uParam1)
{
	if (Param0.f_8 == 0)
	{
		return false;
	}
	return true;
}

void func_186(var uParam0)
{
	struct<10> Var0;
	
	*uParam0 = {Var0};
}

void func_187(struct<10> Param0)
{
	if (func_185(Param0))
	{
		func_188(Param0.f_8, 0);
	}
}

void func_188(int iParam0, int iParam1)
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_101154.f_7303[iParam0] = 1;
	Global_101154.f_7303.f_236[iParam0] = get_game_timer() + iParam1;
}

int func_189(struct<4> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, struct<4> Param7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13)
{
	int iVar0;
	int iVar1;
	
	iVar0 = Param0.f_3;
	iVar1 = Param10.f_3;
	if (iVar0 > iVar1)
	{
		return 2;
	}
	if (iVar0 < iVar1)
	{
		return 0;
	}
	return 1;
}

void func_190(int iParam0)
{
	int iVar0;
	
	*iParam0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_101154.f_6378.f_866)
	{
		if (func_189(Global_101154.f_6378.f_765[iVar0 /*10*/], Global_101154.f_6378.f_765[*iParam0 /*10*/]) == 0)
		{
			*iParam0 = iVar0;
		}
		iVar0++;
	}
}

struct<10> func_191(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8, var uParam9)
{
	struct<10> Var0;
	
	Var0 = uParam0;
	Var0.f_3 = func_192(iParam1);
	Var0.f_4 = get_game_timer() + iParam4;
	Var0.f_5 = iParam5;
	Var0.f_1 = uParam9;
	Var0.f_2 = iParam2;
	Var0.f_6 = iParam3;
	Var0.f_7 = iParam6;
	Var0.f_8 = iParam7;
	Var0.f_9 = uParam8;
	clear_bit(&(Var0.f_1), false);
	return Var0;
}

int func_192(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 4:
			return 5;
			break;
		
		case 7:
			return 4;
			break;
		
		case 2:
			return 3;
			break;
		
		case 1:
			return 2;
			break;
		
		case 3:
			return 1;
			break;
		
		case 5:
		case 6:
			return 0;
			break;
	}
	return 7;
}

bool func_193(int iParam0)
{
	switch (iParam0)
	{
		case 83:
		case 84:
		case 85:
		case 87:
		case 88:
		case 89:
		case 90:
			return true;
			break;
	}
	return false;
}

void func_194(int iParam0)
{
	struct<2> Var0;
	int iVar77;
	int iVar78;
	int iVar79;
	int iVar80;
	struct<4> Var81;
	int iVar85;
	int iVar86;
	int iVar87;
	int iVar88;
	int iVar89;
	int iVar90;
	int iVar91;
	int iVar92;
	int iVar93;
	int iVar94;
	int iVar95;
	int iVar96;
	int iVar97;
	int iVar98;
	int iVar99;
	int iVar100;
	struct<4> Var101;
	int iVar105;
	int iVar106;
	int iVar107;
	int iVar108;
	int iVar109;
	int iVar110;
	int iVar111;
	int iVar112;
	int iVar113;
	int iVar114;
	int iVar115;
	int iVar116;
	int iVar117;
	int iVar118;
	int iVar119;
	int iVar120;
	int iVar121;
	int iVar122;
	struct<16> Var123;
	var uVar139;
	int iVar140;
	var uVar141;
	var uVar142;
	var uVar143;
	var uVar144;
	var uVar145;
	struct<19> Var146;
	int iVar165;
	int iVar166;
	var uVar167;
	int iVar168;
	var uVar169;
	var uVar170;
	var uVar171;
	var uVar172;
	var uVar173;
	struct<19> Var174;
	int iVar193;
	int iVar194;
	struct<16> Var195;
	int iVar211;
	int iVar212;
	int iVar213;
	int iVar214;
	int iVar215;
	int iVar216;
	int iVar217;
	struct<16> Var218;
	
	Var0.f_1 = 65;
	iVar77 = -1;
	iVar80 = false;
	if (iParam0 < 0)
	{
		return;
	}
	if (!func_548(60, 0, 0))
	{
		if (func_547(get_player_index()) < 5)
		{
			iLocal_712 = 3;
		}
		else
		{
			iLocal_712 = 4;
		}
		func_886(iParam0, "_S_PURCHASE_D_ERROR", 0, 0, 0);
		play_sound_frontend(-1, "Click_Fail", "WEB_NAVIGATION_SOUNDS_PHONE", 1);
		iLocal_511 = 1;
		iLocal_512 = false;
		return;
	}
	Var81 = {func_546(iParam0)};
	iVar85 = 0;
	iVar88 = -1;
	if (func_545(iParam0))
	{
		iVar88 = func_544(iParam0);
		iVar85 = func_543(iVar88);
		iVar86 = func_542(iVar88, -1);
		if (iVar86 == iParam0 && !func_541(iVar86))
		{
			play_sound_frontend(-1, "Click_Fail", "WEB_NAVIGATION_SOUNDS_PHONE", 1);
			return;
		}
		if (iVar86 == iParam0)
		{
			iVar87 = false;
		}
		else
		{
			iVar87 = ceil(to_float(func_540(iParam0)) * Global_262145.f_77);
		}
	}
	else
	{
		iVar78 = 0;
		while (iVar78 < 6)
		{
			if (iVar85 < func_543(iVar78))
			{
				iVar85 = func_543(iVar78);
			}
			iVar78++;
		}
		iVar78 = 0;
		while (iVar78 < 6)
		{
			iVar86 = func_542(iVar78, -1);
			if (iVar86 == iParam0)
			{
				play_sound_frontend(-1, "Click_Fail", "WEB_NAVIGATION_SOUNDS_PHONE", 1);
				return;
			}
			iVar78++;
		}
		iVar87 = ceil(to_float(func_540(iParam0)) * Global_262145.f_77);
	}
	if (func_541(iParam0))
	{
		iVar87 += func_536(iParam0, &iLocal_2649, &iLocal_2650, &iLocal_2651, &iLocal_2652, &iLocal_2653, &iLocal_2654, &iLocal_2655, &iLocal_2656);
	}
	if (func_533(iParam0))
	{
		iVar87 = false;
	}
	iVar89 = iVar87 - iVar85;
	if (func_541(iParam0))
	{
		if (iVar86 == iParam0)
		{
			iVar91 = false;
			iVar92 = false;
			iVar93 = false;
			iVar94 = false;
			iVar95 = false;
			iVar96 = false;
			iVar97 = false;
			iVar98 = false;
			iVar89 = func_536(iParam0, &iVar91, &iVar92, &iVar93, &iVar94, &iVar95, &iVar96, &iVar97, &iVar98);
			iVar79 = iVar89;
			iVar80 = true;
		}
		if (iVar80 && Global_2443113)
		{
			func_886(iParam0, "_S_PURCHASE_D_ERROR", 0, 0, 0);
			play_sound_frontend(-1, "Click_Fail", "WEB_NAVIGATION_SOUNDS_PHONE", 1);
			return;
		}
	}
	iVar99 = _0x76EF28DA05EA395A();
	iVar100 = _0xA40F9C2623F6A8B5(-1);
	if (iVar89 > 0)
	{
		if (iVar99 + iVar100 < iVar89)
		{
			if (iVar89 <= 0 || (iVar89 > 0 && iVar99 + iVar100 < iVar89))
			{
				iLocal_712 = 2;
				func_886(iParam0, "_S_PURCHASE_D_ERROR", 0, 0, 0);
				iLocal_511 = 1;
				iLocal_512 = false;
				Var101 = {func_546(iParam0)};
				func_697(get_hash_key(&Var101), iVar89, 0);
				play_sound_frontend(-1, "Click_Fail", "WEB_NAVIGATION_SOUNDS_PHONE", 1);
				return;
			}
			if (iVar89 <= 0 || (iVar89 > 0 && _has_item_been_unlocked(iVar89, false, true, 0, -1)))
			{
				iLocal_712 = 2;
				func_886(iParam0, "_S_PURCHASE_D_ERROR", 0, 0, 0);
				iLocal_511 = 1;
				iLocal_512 = false;
				Var101 = {func_546(iParam0)};
				func_697(get_hash_key(&Var101), iVar89, 0);
				play_sound_frontend(-1, "Click_Fail", "WEB_NAVIGATION_SOUNDS_PHONE", 1);
				return;
			}
		}
	}
	if (func_193(iParam0))
	{
		if (func_532(iLocal_511, iParam0))
		{
			iLocal_712 = 6;
			func_886(iParam0, "_S_PURCHASE_D_ERROR", 0, 0, 0);
			play_sound_frontend(-1, "Click_Fail", "WEB_NAVIGATION_SOUNDS_PHONE", 1);
			iLocal_511 = 1;
			iLocal_512 = false;
			return;
		}
	}
	if (((func_542(0, -1) > 0 && iVar88 == -1) && !iVar80) || ((iVar88 != -1 && func_542(iVar88, -1) > 0) && !iVar80))
	{
		while (!func_458(&Var0, &iVar77, iParam0, iVar88) && func_457())
		{
			func_456();
			func_454();
			wait(0);
			Global_17257.f_7827 = 1;
		}
		func_456();
		func_454();
		wait(0);
		Global_17257.f_7827 = 1;
		iLocal_508 = 0;
	}
	else if (iVar88 != -1)
	{
		iVar77 = iVar88;
	}
	else
	{
		iVar77 = false;
	}
	if (iVar77 == -1)
	{
		iLocal_712 = 5;
		func_886(iParam0, "_S_PURCHASE_D_ERROR", 0, 0, 0);
		iLocal_511 = 1;
		iLocal_512 = false;
		Global_68233 = Global_68235;
		play_sound_frontend(-1, "Click_Fail", "WEB_NAVIGATION_SOUNDS_PHONE", 1);
		return;
	}
	else if (iVar80)
	{
		iVar90 = iVar79;
	}
	else
	{
		iVar90 = iVar87 - func_543(iVar77);
		if (func_541(iParam0))
		{
			if (iVar90 < 0)
			{
				iVar90 = false;
			}
		}
	}
	if (iVar90 > 0)
	{
		if (iVar99 + iVar100 + func_543(iVar77) < iVar90)
		{
			iLocal_712 = 2;
			func_886(iParam0, "_S_PURCHASE_D_ERROR", 0, 0, 0);
			iLocal_511 = 1;
			iLocal_512 = false;
			Var101 = {func_546(iParam0)};
			func_697(get_hash_key(&Var101), iVar90, 0);
			play_sound_frontend(-1, "Click_Fail", "WEB_NAVIGATION_SOUNDS_PHONE", 1);
			return;
		}
		if (!_has_item_been_unlocked(iVar90, false, true, 0, -1))
		{
			iLocal_712 = 2;
			func_886(iParam0, "_S_PURCHASE_D_ERROR", 0, 0, 0);
			iLocal_511 = 1;
			iLocal_512 = false;
			Var101 = {func_546(iParam0)};
			func_697(get_hash_key(&Var101), iVar90, 0);
			play_sound_frontend(-1, "Click_Fail", "WEB_NAVIGATION_SOUNDS_PHONE", 1);
			return;
		}
	}
	if (func_541(iParam0))
	{
		if (!is_string_null_or_empty(&(Global_68274.f_21)))
		{
			if (!func_448())
			{
				iLocal_712 = 6;
				func_886(iParam0, "_S_PURCHASE_D_ERROR", 0, 0, 0);
				play_sound_frontend(-1, "Click_Fail", "WEB_NAVIGATION_SOUNDS_PHONE", 1);
				iLocal_511 = 1;
				iLocal_512 = false;
				return;
			}
		}
	}
	if (func_447())
	{
		iVar105 = 0;
		if (func_533(iParam0))
		{
			iVar105 = 1;
		}
		if (func_545(iParam0))
		{
			if (iVar86 == iParam0)
			{
				iVar87 = false;
			}
			else
			{
				iVar87 = ceil(to_float(func_540(iParam0)) * Global_262145.f_77);
			}
		}
		iLocal_709 = 1;
		iLocal_710 = 0;
		iVar106 = func_445(iParam0, iVar105);
		iVar107 = func_444(iVar77);
		iVar108 = func_542(iVar77, -1);
		if (func_193(iParam0))
		{
			iVar111 = 0;
			if (func_443(iParam0) == 88 && iLocal_511 - 1 == 4)
			{
				if (func_542(5, -1) != iParam0)
				{
					iVar111 = 1;
				}
			}
			iVar109 = func_442(iLocal_511 - 1, iParam0, iVar111);
		}
		else
		{
			iVar109 = func_442(-1, iParam0, 0);
		}
		iVar110 = func_441(iVar77);
		iVar112 = false;
		iVar113 = 0;
		if (iVar108 > 0)
		{
			iVar114 = 0;
			iVar112 = func_543(iVar77);
			if (func_533(iVar108))
			{
				if (((((iVar77 == 0 && func_438(116, -1, -1)) || (iVar77 == 1 && func_438(117, -1, -1))) || (iVar77 == 2 && func_438(118, -1, -1))) || (iVar77 == 3 && func_438(119, -1, -1))) || (iVar77 == 4 && func_438(120, -1, -1)))
				{
					iVar114 = 1;
					iVar112 = false;
				}
			}
			iVar113 = func_445(iVar108, iVar114);
		}
		iVar115 = -1;
		while (func_380(&iVar115, iVar87, iVar77, 1394405165, 1372920054, iVar106, iVar107, 0, iVar112, iVar113, 0, iVar109, iVar110))
		{
			func_891(0, 0);
			wait(0);
		}
		switch (iVar115)
		{
			case 0:
				iLocal_712 = 6;
				func_886(iParam0, "_S_PURCHASE_D_ERROR", 0, 0, 0);
				play_sound_frontend(-1, "Click_Fail", "WEB_NAVIGATION_SOUNDS_PHONE", 1);
				iLocal_511 = 1;
				iLocal_512 = false;
				return;
				break;
			
			case 2:
				break;
			
			default:
				break;
		}
	}
	if (!func_541(iParam0))
	{
		func_886(iParam0, "_S_PURCHASE_D_SUCCESS", 1, 0, 0);
	}
	else
	{
		func_377(&iVar116, &iVar117, &iVar118, &iVar119, &iVar120, &iVar121, &iVar122);
		if (iVar77 >= 0 && iVar77 <= 89)
		{
			func_376(iVar77);
		}
		if (func_375(iVar77, -1) != iVar116)
		{
			set_bit(&Global_4007465, 8);
		}
		func_374(5, &iVar116);
		if (func_373(iVar117))
		{
			func_372(3200, 1, -1, 1);
			set_bit(&(Global_1587523[player_id() /*444*/].f_250.f_7), 29);
		}
		else
		{
			func_372(3200, 0, -1, 1);
			clear_bit(&(Global_1587523[player_id() /*444*/].f_250.f_7), 29);
		}
		if (is_bit_set(Global_1587523[player_id() /*444*/].f_250.f_80, 8))
		{
			clear_bit(&(Global_1587523[player_id() /*444*/].f_250.f_80), 8);
		}
		if (is_bit_set(Global_1587523[player_id() /*444*/].f_250.f_80, 10))
		{
			clear_bit(&(Global_1587523[player_id() /*444*/].f_250.f_80), 10);
		}
		func_372(3272, iVar118, -1, 1);
		func_372(3273, iVar119, -1, 1);
		Global_1610316[player_id() /*174*/].f_172 = iVar118;
		Global_1610316[player_id() /*174*/].f_173 = iVar119;
		if (func_373(iVar120))
		{
			if (!func_371())
			{
				set_bit(&Global_4007465, 2);
			}
			func_372(3201, 1, -1, 1);
		}
		else
		{
			func_372(3201, 0, -1, 1);
		}
		if (func_373(iVar121))
		{
			if (!func_370())
			{
				set_bit(&Global_4007465, 4);
			}
			func_372(3202, 1, -1, 1);
		}
		else
		{
			func_372(3202, 0, -1, 1);
		}
		if (func_373(iVar122))
		{
			if (!func_369())
			{
				set_bit(&Global_4007465, 3);
			}
			func_372(3203, 1, -1, 1);
			set_bit(&(Global_1587523[player_id() /*444*/].f_250.f_80), 13);
		}
		else
		{
			func_372(3203, 0, -1, 1);
			clear_bit(&(Global_1587523[player_id() /*444*/].f_250.f_80), 13);
		}
		if (!is_string_null_or_empty(&(Global_68274.f_21)))
		{
			if (func_368(player_id()))
			{
				func_367(&(Global_68274.f_21), 1);
				func_365(&(Global_68274.f_21), 1);
				func_363();
			}
			else
			{
				func_365(&(Global_68274.f_21), 1);
			}
		}
		else if (!func_368(player_id()))
		{
			Var123 = {func_1054(45, 46, -1)};
			if (is_string_null_or_empty(&Var123))
			{
				func_365(_get_label_text("GB_REST_ACC"), 1);
			}
		}
		if (!iVar80)
		{
			if (is_bit_set(Global_1587523[player_id() /*444*/].f_250.f_7, 27))
			{
				clear_bit(&(Global_1587523[player_id() /*444*/].f_250.f_7), 27);
			}
			if (is_bit_set(Global_1587523[player_id() /*444*/].f_250.f_7, 28))
			{
				clear_bit(&(Global_1587523[player_id() /*444*/].f_250.f_7), 28);
			}
		}
		if (!func_373(iVar120))
		{
			func_326(0);
			func_325();
		}
		if ((func_541(Global_1587523[player_id() /*444*/].f_250.f_9) && is_bit_set(Global_1587523[player_id() /*444*/].f_250.f_7, false)) && iVar80)
		{
			if (func_321() && !is_bit_set(Global_1587523[player_id() /*444*/].f_250.f_7, 21))
			{
				set_bit(&(Global_1587523[player_id() /*444*/].f_250.f_7), 21);
			}
			else
			{
				clear_bit(&(Global_1587523[player_id() /*444*/].f_250.f_7), 21);
			}
			if (!is_bit_set(Global_1587523[player_id() /*444*/].f_250.f_7, 17))
			{
				set_bit(&(Global_1587523[player_id() /*444*/].f_250.f_7), 17);
			}
			if (is_bit_set(Global_1587523[player_id() /*444*/].f_250.f_7, 16))
			{
				clear_bit(&(Global_1587523[player_id() /*444*/].f_250.f_7), 16);
			}
			if (is_bit_set(Global_1587523[player_id() /*444*/].f_250.f_7, 18))
			{
				clear_bit(&(Global_1587523[player_id() /*444*/].f_250.f_7), 18);
			}
			if (!is_bit_set(Global_1587523[player_id() /*444*/].f_250.f_80, 7))
			{
				set_bit(&(Global_1587523[player_id() /*444*/].f_250.f_80), 7);
			}
			Global_3934084 = iVar116;
			Global_3934086 = 1;
		}
		else if (iVar80)
		{
			Global_3934084 = iVar116;
			if (!is_bit_set(Global_1587523[player_id() /*444*/].f_250.f_80, 7))
			{
				set_bit(&(Global_1587523[player_id() /*444*/].f_250.f_80), 7);
			}
		}
		func_886(iParam0, "_S_PURCHASE_D_SUCCESS", 1, iVar80, 0);
	}
	if (iVar90 >= 0 && (iVar90 == 0 || (iVar90 > 0 && (func_447() || _has_item_been_unlocked(iVar90, false, true, 0, -1)))))
	{
		Var101 = {func_546(iVar77)};
		if (iVar90 > 0)
		{
			func_317(joaat("mpply_ingamestore_moneyspent"), iVar90);
		}
		if (func_543(iVar77) > 0 && !iVar80)
		{
			if (func_447())
			{
				_0x9507D4271988E1AE(func_315(func_316()));
			}
			Var101 = {func_546(func_542(iVar77, -1))};
			network_earn_from_property(func_543(iVar77), get_hash_key(&Var101));
		}
		if (func_447())
		{
			_0x9507D4271988E1AE(func_315(func_316()));
		}
		if (func_541(iParam0))
		{
			if (iVar87 > 0)
			{
				func_377(&uVar139, &iVar140, &uVar141, &uVar142, &uVar143, &uVar144, &uVar145);
				Var146.f_1 = -1;
				Var146.f_3 = -1;
				Var146.f_5 = -1;
				Var146.f_7 = -1;
				Var146.f_9 = -1;
				Var146.f_11 = -1;
				Var146.f_13 = -1;
				Var146.f_15 = -1;
				Var146.f_16 = -1;
				Var146.f_17 = -1;
				Var146.f_18 = -1;
				if (!iVar80)
				{
					Var146 = iParam0;
					Var146.f_1 = func_540(iParam0);
					Var146.f_2 = uVar139;
					Var146.f_3 = iLocal_2649;
					Var146.f_4 = func_314(iVar140);
					Var146.f_5 = iLocal_2650;
					Var146.f_6 = Global_68274.f_40;
					Var146.f_7 = iLocal_2651 + iLocal_2652 + iLocal_2653;
					Var146.f_8 = uVar143;
					Var146.f_9 = iLocal_2654;
					Var146.f_10 = uVar144;
					Var146.f_11 = iLocal_2655;
					Var146.f_12 = uVar145;
					Var146.f_13 = iLocal_2656;
					iVar165 = Var146.f_1 + Var146.f_3 + Var146.f_5 + Var146.f_7 + Var146.f_9 + Var146.f_11 + Var146.f_13;
					unk_0x69EF772B192614C1(iVar165, &Var146, 0, 1);
				}
				else
				{
					Var146 = iParam0;
					Var146.f_1 = func_540(iParam0);
					if (iLocal_2649 != 0)
					{
						Var146.f_2 = uVar139;
						Var146.f_3 = iLocal_2649;
						iVar166 += Var146.f_3;
					}
					if (iLocal_2650 != 0)
					{
						Var146.f_4 = func_314(iVar140);
						Var146.f_5 = iLocal_2650;
						iVar166 += Var146.f_5;
					}
					Var146.f_6 = Global_68274.f_40;
					Var146.f_7 = iLocal_2651 + iLocal_2652 + iLocal_2653;
					iVar166 += Var146.f_7;
					if (iLocal_2654 != 0)
					{
						Var146.f_8 = uVar143;
						Var146.f_9 = iLocal_2654;
						iVar166 += Var146.f_9;
					}
					if (iLocal_2655 != 0)
					{
						Var146.f_10 = uVar144;
						Var146.f_11 = iLocal_2655;
						iVar166 += Var146.f_11;
					}
					if (iLocal_2656 != 0)
					{
						Var146.f_12 = uVar145;
						Var146.f_13 = iLocal_2656;
						iVar166 += Var146.f_13;
					}
					unk_0x8E243837643D9583(iVar166, &Var146, 0, 1);
					iVar87 = iVar90;
				}
			}
		}
		else
		{
			Var101 = {func_546(iParam0)};
			network_buy_property(iVar87, get_hash_key(&Var101), false, true);
		}
		if (func_447())
		{
			func_310(func_316());
		}
	}
	else if (iVar90 < 0)
	{
		if (func_543(iVar77) > 0 && !iVar80)
		{
			if (func_447())
			{
				_0x9507D4271988E1AE(func_315(func_316()));
			}
			Var101 = {func_546(func_542(iVar77, -1))};
			network_earn_from_property(func_543(iVar77), get_hash_key(&Var101));
		}
		if (func_447())
		{
			_0x9507D4271988E1AE(func_315(func_316()));
		}
		if (func_541(iParam0))
		{
			if (iVar87 > 0)
			{
				func_377(&uVar167, &iVar168, &uVar169, &uVar170, &uVar171, &uVar172, &uVar173);
				Var174.f_1 = -1;
				Var174.f_3 = -1;
				Var174.f_5 = -1;
				Var174.f_7 = -1;
				Var174.f_9 = -1;
				Var174.f_11 = -1;
				Var174.f_13 = -1;
				Var174.f_15 = -1;
				Var174.f_16 = -1;
				Var174.f_17 = -1;
				Var174.f_18 = -1;
				if (!iVar80)
				{
					Var174 = iParam0;
					Var174.f_1 = func_540(iParam0);
					Var174.f_2 = uVar167;
					Var174.f_3 = iLocal_2649;
					Var174.f_4 = func_314(iVar168);
					Var174.f_5 = iLocal_2650;
					Var174.f_6 = Global_68274.f_40;
					Var174.f_7 = iLocal_2651 + iLocal_2652 + iLocal_2653;
					Var174.f_8 = uVar171;
					Var174.f_9 = iLocal_2654;
					Var174.f_10 = uVar172;
					Var174.f_11 = iLocal_2655;
					Var174.f_12 = uVar173;
					Var174.f_13 = iLocal_2656;
					iVar193 = Var174.f_1 + Var174.f_3 + Var174.f_5 + Var174.f_7 + Var174.f_9 + Var174.f_11 + Var174.f_13;
					unk_0x69EF772B192614C1(iVar193, &Var174, 0, 1);
				}
				else
				{
					Var174 = iParam0;
					Var174.f_1 = func_540(iParam0);
					if (iLocal_2649 != 0)
					{
						Var174.f_2 = uVar167;
						Var174.f_3 = iLocal_2649;
						iVar194 += Var174.f_3;
					}
					if (iLocal_2650 != 0)
					{
						Var174.f_4 = func_314(iVar168);
						Var174.f_5 = iLocal_2650;
						iVar194 += Var174.f_5;
					}
					Var174.f_6 = Global_68274.f_40;
					Var174.f_7 = iLocal_2651 + iLocal_2652 + iLocal_2653;
					iVar194 += Var174.f_7;
					if (iLocal_2654 != 0)
					{
						Var174.f_8 = uVar171;
						Var174.f_9 = iLocal_2654;
						iVar194 += Var174.f_9;
					}
					if (iLocal_2655 != 0)
					{
						Var174.f_10 = uVar172;
						Var174.f_11 = iLocal_2655;
						iVar194 += Var174.f_11;
					}
					if (iLocal_2656 != 0)
					{
						Var174.f_12 = uVar173;
						Var174.f_13 = iLocal_2656;
						iVar194 += Var174.f_13;
					}
					unk_0x8E243837643D9583(iVar194, &Var174, 0, 1);
					iVar87 = iVar90;
				}
			}
		}
		else
		{
			Var101 = {func_546(iParam0)};
			network_buy_property(iVar87, get_hash_key(&Var101), false, true);
		}
		if (func_447())
		{
			func_310(func_316());
		}
	}
	else if (!func_533(iParam0))
	{
		play_sound_frontend(-1, "Click_Fail", "WEB_NAVIGATION_SOUNDS_PHONE", 1);
		return;
	}
	if (func_542(iVar77, -1) > 0 && !iVar80)
	{
		func_307(88, 1, -1);
	}
	if (iVar77 >= 0 && iVar77 <= 89)
	{
		func_376(iVar77);
	}
	if (iVar77 == 0)
	{
		if (func_542(iVar77, -1) <= 0)
		{
			func_306();
		}
		func_305(1271, iParam0, -1, 1);
		func_372(1479, _get_posix_time(), -1, 1);
		func_372(1476, iParam0, -1, 1);
		func_372(1477, _get_posix_time(), -1, 1);
		func_303(1232, -1);
		if (!func_533(iParam0))
		{
			Global_2097152[func_49() /*10375*/].f_7704.f_3 = ceil(to_float(func_540(iParam0)) * Global_262145.f_77);
		}
		else
		{
			Global_2097152[func_49() /*10375*/].f_7704.f_3 = 0;
		}
		func_372(1478, Global_2097152[func_49() /*10375*/].f_7704.f_3, -1, 1);
		if (func_302(iParam0))
		{
			func_374(iVar77, &iLocal_511);
			Global_1587523[player_id() /*444*/].f_250.f_58[iVar77] = iLocal_511;
		}
		if (iVar87 == 0)
		{
			func_89(116, 1, -1, 1);
		}
		else
		{
			func_89(116, 0, -1, 1);
		}
	}
	else if (iVar77 == 1)
	{
		if (func_542(1, -1) <= 0)
		{
			func_301();
		}
		func_305(1868, iParam0, -1, 1);
		func_303(1232, -1);
		if (!func_533(iParam0))
		{
			Global_2097152[func_49() /*10375*/].f_7704.f_778 = ceil(to_float(func_540(iParam0)) * Global_262145.f_77);
		}
		else
		{
			Global_2097152[func_49() /*10375*/].f_7704.f_778 = 0;
		}
		func_372(1869, Global_2097152[func_49() /*10375*/].f_7704.f_778, -1, 1);
		if (func_302(iParam0))
		{
			func_374(iVar77, &iLocal_511);
			Global_1587523[player_id() /*444*/].f_250.f_58[iVar77] = iLocal_511;
		}
		if (iVar87 == 0)
		{
			func_89(117, 1, -1, 1);
		}
		else
		{
			func_89(117, 0, -1, 1);
		}
	}
	else if (iVar77 == 2)
	{
		if (func_542(2, -1) <= 0)
		{
			func_300();
		}
		func_305(2259, iParam0, -1, 1);
		func_303(1232, -1);
		if (!func_533(iParam0))
		{
			Global_2097152[func_49() /*10375*/].f_7704.f_779[0] = ceil(to_float(func_540(iParam0)) * Global_262145.f_77);
		}
		else
		{
			Global_2097152[func_49() /*10375*/].f_7704.f_779[0] = 0;
		}
		func_372(2260, Global_2097152[func_49() /*10375*/].f_7704.f_779[0], -1, 1);
		if (func_302(iParam0))
		{
			func_374(iVar77, &iLocal_511);
			Global_1587523[player_id() /*444*/].f_250.f_58[iVar77] = iLocal_511;
		}
		if (iVar87 == 0)
		{
			func_89(118, 1, -1, 1);
		}
		else
		{
			func_89(118, 0, -1, 1);
		}
	}
	else if (iVar77 == 3)
	{
		func_305(2907, iParam0, -1, 1);
		func_303(1232, -1);
		if (!func_533(iParam0))
		{
			Global_2097152[func_49() /*10375*/].f_7704.f_779[1] = ceil(to_float(func_540(iParam0)) * Global_262145.f_77);
		}
		else
		{
			Global_2097152[func_49() /*10375*/].f_7704.f_779[1] = 0;
		}
		func_372(2908, Global_2097152[func_49() /*10375*/].f_7704.f_779[1], -1, 1);
		if (func_302(iParam0))
		{
			func_374(iVar77, &iLocal_511);
			Global_1587523[player_id() /*444*/].f_250.f_58[iVar77] = iLocal_511;
		}
		if (iVar87 == 0)
		{
			func_89(119, 1, -1, 1);
		}
		else
		{
			func_89(119, 0, -1, 1);
		}
	}
	else if (iVar77 == 4)
	{
		func_305(3036, iParam0, -1, 1);
		func_303(1232, -1);
		if (!func_533(iParam0))
		{
			Global_2097152[func_49() /*10375*/].f_7704.f_779[iVar77 - 2] = ceil(to_float(func_540(iParam0)) * Global_262145.f_77);
		}
		else
		{
			Global_2097152[func_49() /*10375*/].f_7704.f_779[iVar77 - 2] = 0;
		}
		func_372(3037, Global_2097152[func_49() /*10375*/].f_7704.f_779[iVar77 - 2], -1, 1);
		if (func_302(iParam0))
		{
			func_374(iVar77, &iLocal_511);
			Global_1587523[player_id() /*444*/].f_250.f_58[iVar77] = iLocal_511;
		}
		if (iVar87 == 0)
		{
			func_89(120, 1, -1, 1);
		}
		else
		{
			func_89(120, 0, -1, 1);
		}
	}
	else if (iVar77 == 5)
	{
		if (func_542(5, -1) <= 0)
		{
			func_295("OFFPURCH_TICK", 1);
			func_294(47);
			if ((!func_293(player_id(), 1) && func_292() < func_291()) && !network_is_activity_session())
			{
				if (!is_string_null_or_empty(&(Global_68274.f_21)))
				{
					func_367(&(Global_68274.f_21), 1);
					func_365(&(Global_68274.f_21), 1);
					func_363();
				}
				else
				{
					Var195 = {func_1054(45, 46, -1)};
					if (!is_string_null_or_empty(&Var195))
					{
						func_367(&Var195, 1);
						func_365(&Var195, 1);
					}
					else
					{
						func_367(_get_label_text("GB_REST_ACC"), 1);
						func_365(_get_label_text("GB_REST_ACC"), 1);
					}
				}
				func_223(1);
				func_212();
			}
		}
		func_204(1);
		func_305(3205, iParam0, -1, 1);
		func_303(1232, -1);
		if (!func_533(iParam0))
		{
			Global_2097152[func_49() /*10375*/].f_7704.f_779[iVar77 - 2] = ceil(to_float(func_540(iParam0)) * Global_262145.f_77);
		}
		else
		{
			Global_2097152[func_49() /*10375*/].f_7704.f_779[iVar77 - 2] = 0;
		}
		func_372(3206, Global_2097152[func_49() /*10375*/].f_7704.f_779[iVar77 - 2], -1, 1);
		func_377(&iVar211, &iVar212, &iVar213, &iVar214, &iVar215, &iVar216, &iVar217);
		if (func_193(iParam0))
		{
			if (func_375(iVar77, -1) != iVar211)
			{
				set_bit(&Global_4007465, 8);
			}
			func_374(iVar77, &iVar211);
			if (func_373(iVar212))
			{
				func_372(3200, 1, -1, 1);
				set_bit(&(Global_1587523[player_id() /*444*/].f_250.f_7), 29);
			}
			else
			{
				func_372(3200, 0, -1, 1);
				clear_bit(&(Global_1587523[player_id() /*444*/].f_250.f_7), 29);
			}
			if (is_bit_set(Global_1587523[player_id() /*444*/].f_250.f_80, 8))
			{
				clear_bit(&(Global_1587523[player_id() /*444*/].f_250.f_80), 8);
			}
			if (is_bit_set(Global_1587523[player_id() /*444*/].f_250.f_80, 10))
			{
				clear_bit(&(Global_1587523[player_id() /*444*/].f_250.f_80), 10);
			}
			func_372(3272, iVar213, -1, 1);
			func_372(3273, iVar214, -1, 1);
			Global_1610316[player_id() /*174*/].f_172 = iVar213;
			Global_1610316[player_id() /*174*/].f_173 = iVar214;
			if (func_373(iVar215))
			{
				if (!func_371())
				{
					set_bit(&Global_4007465, 2);
				}
				func_372(3201, 1, -1, 1);
			}
			else
			{
				func_372(3201, 0, -1, 1);
			}
			if (func_373(iVar216))
			{
				if (!func_370())
				{
					set_bit(&Global_4007465, 4);
				}
				func_372(3202, 1, -1, 1);
			}
			else
			{
				func_372(3202, 0, -1, 1);
			}
			if (func_373(iVar217))
			{
				if (!func_369())
				{
					set_bit(&Global_4007465, 3);
				}
				func_372(3203, 1, -1, 1);
				set_bit(&(Global_1587523[player_id() /*444*/].f_250.f_80), 13);
			}
			else
			{
				func_372(3203, 0, -1, 1);
				clear_bit(&(Global_1587523[player_id() /*444*/].f_250.f_80), 13);
			}
			if (!iVar80)
			{
				if (is_bit_set(Global_1587523[player_id() /*444*/].f_250.f_7, 27))
				{
					clear_bit(&(Global_1587523[player_id() /*444*/].f_250.f_7), 27);
				}
				if (is_bit_set(Global_1587523[player_id() /*444*/].f_250.f_7, 28))
				{
					clear_bit(&(Global_1587523[player_id() /*444*/].f_250.f_7), 28);
				}
			}
			if (!func_373(iVar215))
			{
				func_326(0);
				func_325();
			}
			Global_1587523[player_id() /*444*/].f_250.f_58[iVar77] = iLocal_511;
			if (!is_string_null_or_empty(&(Global_68274.f_21)))
			{
				if (func_368(player_id()) || !func_293(player_id(), 1))
				{
					func_367(&(Global_68274.f_21), 1);
					func_365(&(Global_68274.f_21), 1);
					func_363();
				}
				else
				{
					func_365(&(Global_68274.f_21), 1);
				}
			}
			else if (!func_368(player_id()))
			{
				Var218 = {func_1054(45, 46, -1)};
				if (is_string_null_or_empty(&Var218))
				{
					func_365(_get_label_text("GB_REST_ACC"), 1);
				}
			}
			if ((func_541(Global_1587523[player_id() /*444*/].f_250.f_9) && is_bit_set(Global_1587523[player_id() /*444*/].f_250.f_7, false)) && iVar80)
			{
				if (func_321() && !is_bit_set(Global_1587523[player_id() /*444*/].f_250.f_7, 21))
				{
					set_bit(&(Global_1587523[player_id() /*444*/].f_250.f_7), 21);
				}
				else
				{
					clear_bit(&(Global_1587523[player_id() /*444*/].f_250.f_7), 21);
				}
				if (!is_bit_set(Global_1587523[player_id() /*444*/].f_250.f_7, 17))
				{
					set_bit(&(Global_1587523[player_id() /*444*/].f_250.f_7), 17);
				}
				if (is_bit_set(Global_1587523[player_id() /*444*/].f_250.f_7, 16))
				{
					clear_bit(&(Global_1587523[player_id() /*444*/].f_250.f_7), 16);
				}
				if (is_bit_set(Global_1587523[player_id() /*444*/].f_250.f_7, 18))
				{
					clear_bit(&(Global_1587523[player_id() /*444*/].f_250.f_7), 18);
				}
				if (!is_bit_set(Global_1587523[player_id() /*444*/].f_250.f_80, 7))
				{
					set_bit(&(Global_1587523[player_id() /*444*/].f_250.f_80), 7);
				}
				Global_3934084 = iVar211;
				Global_3934086 = 1;
			}
			else if (iVar80)
			{
				Global_3934084 = iVar211;
				if (!is_bit_set(Global_1587523[player_id() /*444*/].f_250.f_80, 7))
				{
					set_bit(&(Global_1587523[player_id() /*444*/].f_250.f_80), 7);
				}
			}
		}
	}
	switch (func_203(iParam0))
	{
		case 4:
		case 5:
		case 6:
			func_201(100, 1, -1, 1);
			func_201(102, 1, -1, 1);
		
		case 1:
		case 2:
		case 3:
			func_201(102, 1, -1, 1);
			break;
	}
	play_sound_frontend(-1, "Click_Special", "WEB_NAVIGATION_SOUNDS_PHONE", 1);
	iLocal_540 = 1;
	func_195(0);
	if (func_541(iParam0))
	{
		func_710(iLocal_507, 1);
		func_886(iParam0, "_S_PURCHASE_D_SUCCESS", 1, iVar80, 0);
	}
	else
	{
		func_721(iLocal_507);
	}
	iLocal_511 = 1;
	iLocal_512 = false;
}

bool func_195(int iParam0)
{
	if (!func_198())
	{
		return false;
	}
	if (!Global_69489)
	{
		return false;
	}
	if (has_achievement_been_passed(49))
	{
		return false;
	}
	if (iParam0 == 1)
	{
	}
	if (!func_196(100, -1))
	{
		if (iParam0 == 1)
		{
		}
		return false;
	}
	if (!func_196(102, -1))
	{
		if (iParam0 == 1)
		{
		}
		return false;
	}
	if (!func_196(101, -1))
	{
		if (iParam0 == 1)
		{
		}
		return false;
	}
	func_53(49, 1);
	return true;
}

int func_196(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2490231[iParam0 /*5*/][func_197(iParam1)];
	if (stat_get_bool(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_197(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_90();
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

bool func_198()
{
	if (func_200() && func_199(0))
	{
		return true;
	}
	return false;
}

var func_199(int iParam0)
{
	return Global_1312369[iParam0];
}

var func_200()
{
	return func_199(func_90() + 1);
}

void func_201(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_202())
	{
		iVar0 = Global_2490231[iParam0 /*5*/][func_197(iParam2)];
		if (iVar0 != 0)
		{
			stat_set_bool(iVar0, iParam1, iParam3);
		}
	}
}

bool func_202()
{
	return true;
	return false;
}

int func_203(int iParam0)
{
	switch (iParam0)
	{
		case 86:
			return 7;
			break;
		
		case 87:
		case 88:
		case 89:
		case 90:
			return 8;
			break;
		
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
		case 83:
		case 84:
		case 85:
			return 6;
			break;
		
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 66:
		case 67:
		case 68:
		case 69:
			return 5;
			break;
		
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			return 4;
			break;
		
		case 24:
		case 26:
		case 27:
		case 54:
		case 56:
		case 57:
			return 3;
			break;
		
		case 25:
		case 28:
		case 32:
		case 33:
		case 50:
		case 52:
		case 53:
		case 55:
			return 2;
			break;
		
		case 29:
		case 30:
		case 31:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 51:
		case 58:
		case 59:
		case 60:
			return 1;
			break;
	}
	return 0;
}

void func_204(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0)
	{
		set_bit(&(Global_1587523[player_id() /*444*/].f_250.f_7), 26);
		iVar1 = func_1053(2511, -1, 0);
		if (!is_bit_set(iVar1, 22))
		{
			set_bit(&iVar1, 22);
			func_372(2511, iVar1, -1, 1);
			iVar0 = true;
		}
		func_205(func_207(0), 3, iVar0);
	}
	else
	{
		clear_bit(&(Global_1587523[player_id() /*444*/].f_250.f_7), 26);
	}
}

void func_205(int iParam0, int iParam1, int iParam2)
{
	Global_2969 = iParam0;
	if (Global_117[iParam0 /*10*/].f_8 != 138)
	{
		func_26();
		if (iParam1 == 4)
		{
			Global_101154.f_32575[iParam0 /*29*/].f_12[0] = 1;
			Global_101154.f_32575[iParam0 /*29*/].f_12[1] = 1;
			Global_101154.f_32575[iParam0 /*29*/].f_12[2] = 1;
			Global_101154.f_32575[iParam0 /*29*/].f_24[0] = 1;
			Global_101154.f_32575[iParam0 /*29*/].f_24[1] = 1;
			Global_101154.f_32575[iParam0 /*29*/].f_24[2] = 1;
		}
		else
		{
			if (Global_101154.f_32575[iParam0 /*29*/].f_12[iParam1] == 1 && Global_101154.f_32575[iParam0 /*29*/].f_24[iParam1] == 1)
			{
				iParam2 = false;
			}
			Global_101154.f_32575[iParam0 /*29*/].f_12[iParam1] = 1;
			Global_101154.f_32575[iParam0 /*29*/].f_24[iParam1] = 1;
		}
		if (iParam2)
		{
			if (!Global_69489)
			{
				if (iParam1 != 4)
				{
					if (Global_14413 != iParam1)
					{
						Global_2942[iParam1 /*4*/] = {Global_101154.f_32575[iParam0 /*29*/].f_3};
						Global_2959[iParam1] = 1;
						Global_2964[iParam1] = iParam0;
					}
					else if (iParam0 == Global_14413)
					{
					}
					else
					{
						Global_2893[1 /*6*/] = {Global_101154.f_32575[iParam0 /*29*/].f_3};
						Global_2893[1 /*6*/].f_5 = iParam1;
						func_206();
					}
				}
				else
				{
					Global_2893[1 /*6*/] = {Global_101154.f_32575[iParam0 /*29*/].f_3};
					Global_2893[1 /*6*/].f_5 = iParam1;
					func_206();
				}
			}
			else
			{
				Global_2893[1 /*6*/] = {Global_101154.f_32575[iParam0 /*29*/].f_3};
				Global_2893[1 /*6*/].f_5 = iParam1;
				func_206();
			}
		}
	}
}

void func_206()
{
	char[64] cVar0;
	char[64] cVar16;
	char* sVar32;
	
	StringCopy(&cVar0, _get_label_text(&(Global_101154.f_32575[Global_2969 /*29*/].f_7)), 64);
	if (Global_2988 == 0)
	{
		_set_notification_text_entry("");
		StringCopy(&cVar16, _get_label_text(&(Global_2893[1 /*6*/])), 64);
		sVar32 = _get_label_text("CELL_253");
		_set_notification_message(&cVar0, &cVar0, 0, 3, sVar32, &cVar16);
	}
	else
	{
		_set_notification_text_entry("CELL_255");
		_add_text_component_item_string(&(Global_2893[1 /*6*/]));
		_set_notification_message(&cVar0, &cVar0, 0, 3, "", 0);
	}
	clear_bit(&Global_2283, false);
}

int func_207(int iParam0)
{
	if (func_208(iParam0))
	{
		return 75;
	}
	return 74;
}

int func_208(int iParam0)
{
	int iVar0;
	
	if (iParam0)
	{
		iVar0 = func_211(player_id());
		if (((iVar0 != player_id() && iVar0 != func_210()) && network_is_player_active(iVar0)) && iVar0 != -1)
		{
			if (func_209(iVar0))
			{
				return true;
			}
			return false;
		}
	}
	return func_1053(3200, -1, 0) != 0;
}

int func_209(int iParam0)
{
	return is_bit_set(Global_1587523[iParam0 /*444*/].f_250.f_7, 29);
}

int func_210()
{
	return -1;
}

int func_211(int iParam0)
{
	if (iParam0 != func_210())
	{
		return Global_1610316[iParam0 /*174*/].f_10;
	}
	return func_210();
}

void func_212()
{
	if (Global_1312416.f_1 == 1)
	{
		func_213(0);
		Global_1312416.f_1 = 0;
		Global_1610316[player_id() /*174*/].f_9 = 0;
	}
}

void func_213(int iParam0)
{
	if (func_222())
	{
		if (iParam0 == 1)
		{
			if (Global_2460486.f_4254 == -1)
			{
				Global_2460486.f_4254 = 60000;
			}
			func_221(&(Global_2460486.f_4252), 0, 0);
			if (Global_2460486.f_4257 == -1)
			{
				Global_2460486.f_4257 = 10000;
			}
			func_221(&(Global_2460486.f_4255), 0, 0);
		}
		else
		{
			Global_1312416 = 0;
			func_219();
		}
		if ((!network_is_activity_session() && !func_218()) && !func_214(player_id()))
		{
			Global_978142 = 0;
		}
		Global_1610316[player_id() /*174*/].f_8 = 0;
	}
}

bool func_214(int iParam0)
{
	if (func_215(iParam0, 1))
	{
		if (Global_1587523[iParam0 /*444*/] != 6)
		{
			return true;
		}
	}
	return false;
}

bool func_215(var uParam0, int iParam1)
{
	if (iParam1)
	{
		if (func_216(uParam0))
		{
			return true;
		}
	}
	if (Global_1587523[uParam0 /*444*/] == -1)
	{
		return false;
	}
	return true;
}

int func_216(var uParam0)
{
	return func_217(uParam0);
}

int func_217(var uParam0)
{
	return is_bit_set(Global_1587523[uParam0 /*444*/].f_13.f_1, false);
}

var func_218()
{
	return Global_2434762.f_713;
}

void func_219()
{
	if (network_is_game_in_progress())
	{
		if (!func_222())
		{
			if (func_220(player_id(), 1, 0))
			{
				set_ped_can_be_dragged_out(player_ped_id(), 1);
				set_ped_config_flag(player_ped_id(), 342, false);
				set_ped_config_flag(player_ped_id(), 122, false);
			}
			set_player_vehicle_defense_modifier(player_id(), 1f);
			_0x1B857666604B1A74(0);
			network_set_friendly_fire_option(1);
			if (Global_1312416.f_1 == 0 || Global_1312416.f_2 == 1)
			{
				Global_1312416.f_2 = 0;
				use_player_colour_instead_of_team_colour(0);
			}
		}
		else
		{
			if (func_220(player_id(), 1, 1))
			{
				set_ped_can_be_dragged_out(player_ped_id(), 0);
				set_current_ped_weapon(player_ped_id(), joaat("weapon_unarmed"), true);
				set_ped_config_flag(player_ped_id(), 342, true);
				set_ped_config_flag(player_ped_id(), 122, true);
				set_player_vehicle_defense_modifier(player_id(), 0.5f);
				if (Global_1312416.f_1 == 0 || Global_1312416.f_2 == 1)
				{
					use_player_colour_instead_of_team_colour(1);
				}
			}
			_0x1B857666604B1A74(1);
			network_set_friendly_fire_option(0);
		}
	}
}

bool func_220(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = iParam0;
	if (network_is_player_active(iParam0))
	{
		if (iParam1)
		{
			if (!is_player_playing(iParam0))
			{
				return false;
			}
		}
		if (iParam2)
		{
			if (!Global_2428492.f_3[uVar0])
			{
				return false;
			}
		}
		return true;
	}
	return false;
}

void func_221(var uParam0, int iParam1, int iParam2)
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

var func_222()
{
	return Global_1312416;
}

void func_223(int iParam0)
{
	struct<14> Var0;
	
	func_262(1, 1);
	if (iParam0)
	{
		if (func_261(88) || func_261(95))
		{
			func_260();
		}
		func_294(17);
		Var0.f_2 = 183;
		func_258(Var0, func_259(0, 1));
		func_235();
		if (!func_234(player_id()))
		{
			func_224(82, "GB_TXTMSG_INIT", 2, 0, 0, 0, 0, 1, 0, 1);
		}
	}
}

bool func_224(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	clear_bit(&Global_2283, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_225(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, iParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (iParam7 == 1)
		{
			Global_2990 = iParam6;
			Global_2893[3 /*6*/] = {Global_101154.f_32575[iParam0 /*29*/].f_3};
			Global_2970 = iParam0;
			set_bit(&Global_2283, true);
			set_bit(&Global_2283, 7);
		}
		return true;
	}
	return false;
}

bool func_225(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, int iParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (are_strings_equal(sParam14, sParam15))
	{
	}
	func_26();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_14413 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_14413 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_14413 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (is_player_playing(player_id()))
		{
			if (is_ped_swimming_under_water(player_ped_id()))
			{
				return false;
			}
		}
		if (Global_101154.f_12741[Global_14413 /*20*/].f_17 == 1)
		{
			return false;
		}
		if (_get_number_of_instances_of_streamed_script(joaat("apptextmessage")) > 0)
		{
			return false;
		}
		if (_get_number_of_instances_of_streamed_script(joaat("apptextmessage")) > 0)
		{
			return false;
		}
	}
	if (func_233() == 0)
	{
		func_231();
		return false;
	}
	func_230(Global_16779);
	StringCopy(&(Global_101154.f_12831[Global_16779 /*104*/]), sParam1, 64);
	Global_101154.f_12831[Global_16779 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_101154.f_12831[Global_16779 /*104*/].f_24 = iParam2;
	}
	Global_101154.f_12831[Global_16779 /*104*/].f_25 = iParam7;
	Global_101154.f_12831[Global_16779 /*104*/].f_26 = uParam8;
	Global_101154.f_12831[Global_16779 /*104*/].f_29 = uParam9;
	Global_101154.f_12831[Global_16779 /*104*/].f_30 = uParam12;
	Global_101154.f_12831[Global_16779 /*104*/].f_31 = uParam11;
	Global_101154.f_12831[Global_16779 /*104*/].f_28 = 0;
	Global_101154.f_12831[Global_16779 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_101154.f_12831[Global_16779 /*104*/].f_33), sParam4, 64);
	Global_101154.f_12831[Global_16779 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_101154.f_12831[Global_16779 /*104*/].f_50), sParam5, 64);
	Global_101154.f_12831[Global_16779 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_101154.f_12831[Global_16779 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_101154.f_12831[Global_16779 /*104*/].f_83), sParam15, 64);
	if (is_bit_set(Global_2283, 10))
	{
		Global_101154.f_12831[Global_16779 /*104*/].f_99[0] = 1;
		Global_101154.f_12831[Global_16779 /*104*/].f_99[1] = 1;
		Global_101154.f_12831[Global_16779 /*104*/].f_99[2] = 1;
		Global_2989 = 4;
		func_229(0);
		func_229(2);
		func_229(1);
	}
	else
	{
		func_26();
		switch (iParam16)
		{
			case 3:
				Global_101154.f_12831[Global_16779 /*104*/].f_99[Global_14413] = 1;
				break;
			
			case 0:
				Global_101154.f_12831[Global_16779 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_101154.f_12831[Global_16779 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_101154.f_12831[Global_16779 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_14413)
			{
				case 0:
					func_229(0);
					Global_2989 = 0;
					break;
				
				case 1:
					func_229(1);
					Global_2989 = 1;
					break;
				
				case 2:
					func_229(2);
					Global_2989 = 2;
					break;
				
				case 3:
					func_229(3);
					Global_2989 = 3;
					break;
				
				default:
					Global_2989 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (is_bit_set(Global_2283, 10))
		{
			Global_101154.f_12741[0 /*20*/].f_17 = 1;
			Global_101154.f_12741[1 /*20*/].f_17 = 1;
			Global_101154.f_12741[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_101154.f_12741[Global_14413 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_101154.f_12741[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_101154.f_12741[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_101154.f_12741[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_16781[Global_16779] = 0;
	if (iParam10)
	{
		func_26();
		if (Global_14356)
		{
			StringCopy(&Global_14402, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_14413)
			{
				case 0:
					StringCopy(&Global_14402, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_14402, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_14402, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_14402, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_3088[Global_14413 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_1013())
			{
				play_sound_frontend(-1, "Text_Arrive_Tone", &Global_14402, 1);
			}
		}
	}
	if (!Global_14572)
	{
		if (Global_14413.f_1 == 6)
		{
			func_228(Global_14394, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_226(1);
			func_228(Global_14394, "DISPLAY_VIEW", 1f, to_float(Global_14393), -1082130432, -1082130432, -1082130432);
		}
	}
	return true;
}

void func_226(int iParam0)
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
	
	Global_16780 = 0;
	Global_2888 = iParam0;
	iVar0 = false;
	while (iVar0 < 9)
	{
		Global_2852[iVar0] = 0;
		iVar0++;
	}
	iVar0 = false;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_27(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2290[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2290[iVar1 /*15*/].f_4)
					{
						if (Global_2852[iVar0] == 0)
						{
							Global_2816[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (is_bit_set(Global_2284, 3))
								{
									iVar2 = 42;
									Global_14575 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14575 = 0;
								}
								_push_scaleform_movie_function(Global_14394, "SET_DATA_SLOT");
								_push_scaleform_movie_function_parameter_int(true);
								_push_scaleform_movie_function_parameter_int(iVar0);
								_push_scaleform_movie_function_parameter_int(Global_2290[iVar1 /*15*/].f_10);
								_push_scaleform_movie_function_parameter_int(false);
								func_16(&(Global_2290[iVar1 /*15*/]));
								_push_scaleform_movie_function_parameter_int(iVar2);
								_pop_scaleform_movie_function_void();
							}
							if (Global_2443081)
							{
								if (iVar1 == 14)
								{
									func_227(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(Global_16775), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_2852[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2290[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2290[iVar1 /*15*/].f_4)
					{
						if (Global_2852[iVar0] == 0)
						{
							Global_2816[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_101154.f_12831[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_101154.f_12831[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_101154.f_12831[iVar3 /*104*/].f_99[Global_14413] == 1)
											{
												Global_16780++;
											}
										}
									}
									iVar3++;
								}
								func_227(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(Global_16780), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_69489)
								{
									iVar4 = false;
									iVar4 = Global_2562131;
									func_227(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(iVar4), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14413)
									{
										case 0:
											iVar5 = Global_36844;
											break;
										
										case 1:
											iVar5 = Global_36845;
											break;
										
										case 2:
											iVar5 = Global_36846;
											break;
										
										default:
											break;
									}
									func_227(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(iVar5), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_227(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(Global_16775), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								_push_scaleform_movie_function(Global_14394, "SET_DATA_SLOT");
								_push_scaleform_movie_function_parameter_int(true);
								_push_scaleform_movie_function_parameter_int(iVar0);
								_push_scaleform_movie_function_parameter_int(Global_2290[iVar1 /*15*/].f_10);
								_push_scaleform_movie_function_parameter_int(false);
								func_16(&(Global_2290[iVar1 /*15*/]));
								_push_scaleform_movie_function_parameter_int(Global_2289);
								_pop_scaleform_movie_function_void();
							}
							else if (iVar1 == 2)
							{
								if (is_bit_set(Global_2284, 6))
								{
									iVar6 = 42;
								}
								else
								{
									iVar6 = 255;
								}
								_push_scaleform_movie_function(Global_14394, "SET_DATA_SLOT");
								_push_scaleform_movie_function_parameter_int(true);
								_push_scaleform_movie_function_parameter_int(iVar0);
								_push_scaleform_movie_function_parameter_int(Global_2290[iVar1 /*15*/].f_10);
								_push_scaleform_movie_function_parameter_int(false);
								func_16(&(Global_2290[iVar1 /*15*/]));
								_push_scaleform_movie_function_parameter_int(iVar6);
								_pop_scaleform_movie_function_void();
							}
							else if (iVar1 == 3)
							{
								if (is_bit_set(Global_2284, 3))
								{
									iVar7 = 42;
									Global_14575 = 1;
								}
								else
								{
									iVar7 = 255;
									Global_14575 = 0;
								}
								_push_scaleform_movie_function(Global_14394, "SET_DATA_SLOT");
								_push_scaleform_movie_function_parameter_int(true);
								_push_scaleform_movie_function_parameter_int(iVar0);
								_push_scaleform_movie_function_parameter_int(Global_2290[iVar1 /*15*/].f_10);
								_push_scaleform_movie_function_parameter_int(false);
								func_16(&(Global_2290[iVar1 /*15*/]));
								_push_scaleform_movie_function_parameter_int(iVar7);
								_pop_scaleform_movie_function_void();
							}
							else if (iVar1 == 8)
							{
								_push_scaleform_movie_function(Global_14394, "SET_DATA_SLOT");
								_push_scaleform_movie_function_parameter_int(true);
								_push_scaleform_movie_function_parameter_int(iVar0);
								_push_scaleform_movie_function_parameter_int(Global_2290[iVar1 /*15*/].f_10);
								_push_scaleform_movie_function_parameter_int(false);
								func_16(&(Global_2290[iVar1 /*15*/]));
								_push_scaleform_movie_function_parameter_int(42);
								_pop_scaleform_movie_function_void();
							}
							else if ((iVar1 == 23 && are_strings_equal(&(Global_2290[iVar1 /*15*/]), "CELL_BENWEB")) && is_bit_set(Global_2284, 6))
							{
								_push_scaleform_movie_function(Global_14394, "SET_DATA_SLOT");
								_push_scaleform_movie_function_parameter_int(true);
								_push_scaleform_movie_function_parameter_int(iVar0);
								_push_scaleform_movie_function_parameter_int(Global_2290[iVar1 /*15*/].f_10);
								_push_scaleform_movie_function_parameter_int(false);
								func_16(&(Global_2290[iVar1 /*15*/]));
								_push_scaleform_movie_function_parameter_int(42);
								_pop_scaleform_movie_function_void();
							}
							else if (Global_2290[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar8 = false;
								iVar8 = Global_1609099.f_1;
								func_227(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(iVar8), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_227(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(false), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_2852[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_227(int iParam0, char* sParam1, Vector3 fParam2, Vector3 fParam3, Vector3 fParam4, Vector3 fParam5, Vector3 fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	_push_scaleform_movie_function(iParam0, sParam1);
	_push_scaleform_movie_function_parameter_int(round(fParam2));
	if (fParam3 != -1f)
	{
		_push_scaleform_movie_function_parameter_int(round(fParam3));
	}
	if (fParam4 != -1f)
	{
		_push_scaleform_movie_function_parameter_int(round(fParam4));
	}
	if (fParam5 != -1f)
	{
		_push_scaleform_movie_function_parameter_int(round(fParam5));
	}
	if (fParam6 != -1f)
	{
		_push_scaleform_movie_function_parameter_int(round(fParam6));
	}
	if (!is_string_null_or_empty(sParam7))
	{
		func_16(sParam7);
	}
	if (!is_string_null_or_empty(sParam8))
	{
		func_16(sParam8);
	}
	if (!is_string_null_or_empty(sParam9))
	{
		func_16(sParam9);
	}
	if (!is_string_null_or_empty(sParam10))
	{
		func_16(sParam10);
	}
	if (!is_string_null_or_empty(sParam11))
	{
		func_16(sParam11);
	}
	_pop_scaleform_movie_function_void();
}

void func_228(int iParam0, char* sParam1, Vector3 fParam2, Vector3 fParam3, Vector3 fParam4, Vector3 fParam5, Vector3 fParam6)
{
	_push_scaleform_movie_function(iParam0, sParam1);
	_push_scaleform_movie_function_parameter_int(round(fParam2));
	if (fParam3 != -1f)
	{
		_push_scaleform_movie_function_parameter_int(round(fParam3));
	}
	if (fParam4 != -1f)
	{
		_push_scaleform_movie_function_parameter_int(round(fParam4));
	}
	if (fParam5 != -1f)
	{
		_push_scaleform_movie_function_parameter_int(round(fParam5));
	}
	if (fParam6 != -1f)
	{
		_push_scaleform_movie_function_parameter_int(round(fParam6));
	}
	_pop_scaleform_movie_function_void();
}

void func_229(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_101154.f_12741[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_230(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	iVar0 = get_clock_seconds();
	iVar1 = get_clock_minutes();
	iVar2 = get_clock_hours();
	iVar3 = get_clock_day_of_month();
	uVar4 = get_clock_month() + 1;
	iVar5 = get_clock_year();
	Global_101154.f_12831[uParam0 /*104*/].f_18 = iVar0;
	Global_101154.f_12831[uParam0 /*104*/].f_18.f_1 = iVar1;
	Global_101154.f_12831[uParam0 /*104*/].f_18.f_2 = iVar2;
	Global_101154.f_12831[uParam0 /*104*/].f_18.f_3 = iVar3;
	Global_101154.f_12831[uParam0 /*104*/].f_18.f_4 = uVar4;
	Global_101154.f_12831[uParam0 /*104*/].f_18.f_5 = iVar5;
}

void func_231()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69489)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	Global_16779 = 34;
	Global_101154.f_12831[Global_16779 /*104*/].f_18 = -1;
	Global_101154.f_12831[Global_16779 /*104*/].f_18.f_1 = 0;
	Global_101154.f_12831[Global_16779 /*104*/].f_18.f_2 = 0;
	Global_101154.f_12831[Global_16779 /*104*/].f_18.f_3 = 0;
	Global_101154.f_12831[Global_16779 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_232(Global_101154.f_12831[iVar2 /*104*/].f_18, Global_101154.f_12831[Global_16779 /*104*/].f_18))
		{
			Global_16779 = iVar2;
		}
		iVar2++;
	}
	Global_101154.f_12831[Global_16779 /*104*/].f_24 = 1;
}

bool func_232(struct<6> Param0, struct<6> Param1)
{
	struct<4> Var0;
	struct<4> Var6;
	int iVar12;
	int iVar13;
	
	if (Param0.f_5 < Param6.f_5)
	{
		return false;
	}
	if (Param0.f_5 > Param6.f_5)
	{
		return true;
	}
	if (Param0.f_5 == Param6.f_5)
	{
		if (Param0.f_4 < Param6.f_4)
		{
			return false;
		}
		if (Param0.f_4 > Param6.f_4)
		{
			return true;
		}
		if (Param0.f_4 == Param6.f_4)
		{
			Var0 = Param0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = Param0.f_3 * 86400;
			iVar12 = Var0 + Var0.f_1 + Var0.f_2 + Var0.f_3;
			Var6 = Param6;
			Var6.f_1 = Param6.f_1 * 60;
			Var6.f_2 = Param6.f_2 * 3600;
			Var6.f_3 = Param6.f_3 * 86400;
			iVar13 = Var6 + Var6.f_1 + Var6.f_2 + Var6.f_3;
			if (iVar12 > iVar13 || iVar12 == iVar13)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	return false;
}

bool func_233()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69489)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_101154.f_12831[iVar2 /*104*/].f_24 == 0)
		{
			Global_16779 = iVar2;
			return true;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_16779 = 34;
	Global_101154.f_12831[Global_16779 /*104*/].f_18 = -1;
	Global_101154.f_12831[Global_16779 /*104*/].f_18.f_1 = 0;
	Global_101154.f_12831[Global_16779 /*104*/].f_18.f_2 = 0;
	Global_101154.f_12831[Global_16779 /*104*/].f_18.f_3 = 0;
	Global_101154.f_12831[Global_16779 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_101154.f_12831[iVar2 /*104*/].f_24 == 0 || Global_101154.f_12831[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_232(Global_101154.f_12831[iVar2 /*104*/].f_18, Global_101154.f_12831[Global_16779 /*104*/].f_18))
			{
				Global_16779 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_16779 == 34)
	{
		return false;
	}
	Global_101154.f_12831[Global_16779 /*104*/].f_99[0] = 0;
	Global_101154.f_12831[Global_16779 /*104*/].f_99[1] = 0;
	Global_101154.f_12831[Global_16779 /*104*/].f_99[2] = 0;
	return true;
}

int func_234(int iParam0)
{
	if (iParam0 == -1)
	{
		return false;
	}
	return is_bit_set(Global_1587523[iParam0 /*444*/].f_250.f_7, 26);
}

void func_235()
{
	if ((!func_254() && func_241()) && func_236(player_id()))
	{
		func_295("GB_INFO_LFG", 1);
	}
}

bool func_236(int iParam0)
{
	if (iParam0 == func_210())
	{
		return false;
	}
	if (!func_220(iParam0, 0, 1))
	{
		return false;
	}
	if (func_239(iParam0, 0))
	{
		return false;
	}
	if (is_bit_set(Global_1587523[iParam0 /*444*/].f_131, 2) || is_bit_set(Global_1587523[iParam0 /*444*/].f_131, 5))
	{
		return false;
	}
	if (func_237(iParam0))
	{
		return false;
	}
	return true;
}

int func_237(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_238(iParam0, 9);
	}
	return false;
}

int func_238(int iParam0, int iParam1)
{
	return is_bit_set(Global_1610316[iParam0 /*174*/].f_10.f_4, iParam1);
}

int func_239(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == player_id())
	{
		iVar0 = func_240(-1, 0) == 8;
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

int func_240(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_90();
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

bool func_241()
{
	int iVar0;
	int iVar1;
	
	iVar0 = false;
	while (iVar0 < 32)
	{
		iVar1 = int_to_playerindex(iVar0);
		if (func_220(iVar1, 0, 1))
		{
			if (iVar1 != player_id())
			{
				if (func_238(iVar1, 15) && func_242(iVar1, 0, 0))
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_242(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == func_210())
	{
		return false;
	}
	if (!func_220(iParam0, 0, 1))
	{
		return false;
	}
	if (func_239(iParam0, 0))
	{
		return false;
	}
	if (func_252(iParam0))
	{
		return false;
	}
	if (is_bit_set(Global_1587523[iParam0 /*444*/].f_131, 2) || is_bit_set(Global_1587523[iParam0 /*444*/].f_131, 5))
	{
		return false;
	}
	if (func_251(iParam0))
	{
		return false;
	}
	if (iParam2)
	{
		if (func_249(iParam0, iParam1, 1))
		{
			return false;
		}
		if (func_248(iParam0))
		{
			return false;
		}
	}
	else if (func_293(iParam0, 1))
	{
		return false;
	}
	if (func_247(iParam0))
	{
		return false;
	}
	if (func_237(iParam0))
	{
		return false;
	}
	if (func_243(iParam0))
	{
		return false;
	}
	return true;
}

int func_243(int iParam0)
{
	return func_244(iParam0) > 0;
}

int func_244(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (func_220(iParam0, 0, 1))
	{
		if (Global_1610316[iParam0 /*174*/].f_10.f_117 != -1)
		{
			iVar0 = Global_1610316[iParam0 /*174*/].f_10.f_117;
		}
		else
		{
			iVar0 = func_246(joaat("mpply_vipgameplaydisabledtimer"));
		}
		iVar1 = iVar0 + func_245() - _get_posix_time();
		return iVar1;
	}
	return -1;
}

var func_245()
{
	return Global_262145.f_12331;
}

int func_246(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (stat_get_int(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_247(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return is_bit_set(Global_1610316[iVar0 /*174*/].f_1, false);
	}
	return false;
}

int func_248(int iParam0)
{
	return func_238(iParam0, 20);
}

int func_249(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 != func_210())
	{
		if (!iParam2)
		{
			if (func_250(iParam0, iParam1))
			{
				return false;
			}
		}
		if (Global_1610316[iParam0 /*174*/].f_10 != func_210())
		{
			return iParam1 == Global_1610316[iParam0 /*174*/].f_10;
		}
	}
	return false;
}

int func_250(int iParam0, int iParam1)
{
	if (iParam1 != func_210())
	{
		if (iParam0 != func_210())
		{
			if (Global_1610316[iParam0 /*174*/].f_10 != func_210())
			{
				if (Global_1610316[iParam0 /*174*/].f_10 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return false;
}

int func_251(int iParam0)
{
	return func_238(iParam0, 30);
}

bool func_252(int iParam0)
{
	if (!func_238(iParam0, 2))
	{
		return true;
	}
	if (func_238(iParam0, 1))
	{
		return true;
	}
	if (func_253(iParam0) > 0)
	{
		return true;
	}
	return false;
}

var func_253(int iParam0)
{
	return Global_1610316[iParam0 /*174*/].f_10.f_18;
}

bool func_254()
{
	int iVar0;
	var uVar1;
	char[64] cVar17;
	
	iVar0 = 0;
	while (iVar0 < func_257())
	{
		if (Global_1610316[player_id() /*174*/].f_10.f_10[iVar0] == func_210())
		{
			StringCopy(&cVar17, "", 64);
			cVar17 = {func_255(func_256(iVar0))};
			if (are_strings_equal(&cVar17, &uVar1))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

struct<16> func_255(var uParam0)
{
	return Global_2435528.f_3065.f_18[uParam0 /*16*/];
}

int func_256(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 1;
		
		case 2:
			return 2;
		
		default:
	}
	return 0;
}

var func_257()
{
	return Global_262145.f_10303;
}

void func_258(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)
{
	Param0 = 0;
	Param0.f_1 = player_id();
	if (!iParam14 == 0)
	{
		trigger_script_event(1, &Param0, 14, iParam14);
	}
}

var func_259(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = false;
	while (iVar1 < 32)
	{
		iVar2 = int_to_playerindex(iVar1);
		if (func_220(iVar2, 0, 0))
		{
			if (iVar2 != player_id() || iParam0)
			{
				if (iParam1)
				{
					set_bit(&uVar0, iVar1);
				}
				else if (!func_239(iVar2, 0))
				{
					set_bit(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

void func_260()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2428492.f_2171[iVar0 /*72*/].f_2 != 0)
		{
			Global_2428492.f_2171[iVar0 /*72*/].f_2 = 5;
			set_bit(&(Global_2428492.f_2171[iVar0 /*72*/].f_63), false);
		}
		iVar0++;
	}
}

int func_261(int iParam0)
{
	return Global_2428492.f_2171[0 /*72*/].f_1 == iParam0;
}

void func_262(int iParam0, int iParam1)
{
	var uVar0;
	int iVar6;
	int iVar7;
	var uVar8;
	var uVar9;
	char* sVar10;
	char[64] cVar11;
	int iVar27;
	int iVar28;
	
	if (!func_198())
	{
		return;
	}
	iVar7 = 1;
	if (func_234(player_id()))
	{
		iVar7 = 2;
	}
	if (Global_1610316[player_id() /*174*/].f_10 != player_id())
	{
		if (iParam1)
		{
			unk_0x3EBEAC6C3F81F6BD(iVar7);
			func_288(0);
			func_287(0);
			func_286(21);
			func_286(22);
		}
		Global_1610316[player_id() /*174*/].f_10 = player_id();
		unk_0x6BC0ACD0673ACEBE(func_90(), &uVar8, &uVar9);
		func_285(uVar8, uVar9);
		sVar10 = _network_player_get_user_id(player_id(), &uVar0);
		StringCopy(&cVar11, sVar10, 64);
		func_284(cVar11);
		func_283();
		if (func_1053(3892, -1, 0) <= 0)
		{
			iVar6 = _get_posix_time();
		}
		else
		{
			iVar6 = func_1053(3892, -1, 0) - 43200;
		}
		func_280(iVar6);
		if (decor_is_registered_as_type("Player_Boss", 3))
		{
			decor_set_int(player_ped_id(), "Player_Boss", player_id());
		}
		Global_1610316[player_id() /*174*/].f_10.f_19 = -1;
		Global_1610316[player_id() /*174*/].f_10.f_20 = -1;
		Global_2460486.f_4660.f_25 = -1;
		func_273();
		func_213(0);
		if (iParam0)
		{
			func_294(0);
		}
		if (Global_2460486.f_4660.f_61 != func_210())
		{
			Global_2460486.f_4660.f_61 = func_210();
		}
		if (is_bit_set(Global_2460486.f_1643, 15))
		{
			clear_bit(&(Global_2460486.f_1643), 15);
		}
		if (func_272(15))
		{
			func_271(15);
		}
		if (!func_270() && !network_is_activity_session())
		{
			func_269();
			func_268(2);
		}
		func_372(3932, 2, -1, 1);
		func_286(31);
		func_267();
		func_264();
		if (!func_263(82, 3))
		{
			iVar27 = false;
			iVar28 = func_1053(3889, -1, 0);
			if (!is_bit_set(iVar28, 11))
			{
				set_bit(&iVar28, 11);
				func_372(3889, iVar28, -1, 1);
				iVar27 = true;
			}
			func_205(82, 3, iVar27);
		}
	}
}

bool func_263(int iParam0, int iParam1)
{
	if (Global_101154.f_32575[iParam0 /*29*/].f_12[iParam1] == 1)
	{
		return true;
	}
	return false;
}

void func_264()
{
	struct<16> Var0;
	
	Var0 = {func_1054(45, 46, -1)};
	func_365(&Var0, 0);
	if ((!is_durango_version() && _0x595F028698072DD9(0, -1, 1)) || func_266())
	{
		func_286(28);
	}
	else
	{
		func_265(28);
	}
}

void func_265(int iParam0)
{
	set_bit(&(Global_1610316[player_id() /*174*/].f_10.f_4), iParam0);
}

bool func_266()
{
	if (_0x66B59CFFD78467AF() == 0)
	{
		return false;
	}
	if (is_ps3_version())
	{
		if (_0xAEEF48CDF5B6CE7C(1, -1))
		{
			if (network_have_online_privileges())
			{
				return true;
			}
		}
	}
	if (is_orbis_version())
	{
		if (_0x72D918C99BCACC54(1))
		{
			if (network_have_online_privileges())
			{
				return true;
			}
		}
	}
	if (is_xbox360_version() || is_durango_version())
	{
		if (_0x595F028698072DD9(0, -3, 1))
		{
			return true;
		}
	}
	if (is_pc_version())
	{
		if (_0xAEEF48CDF5B6CE7C(0, -1))
		{
			if (network_have_online_privileges())
			{
				return true;
			}
		}
	}
	return false;
}

void func_267()
{
	struct<16> Var0;
	
	Var0 = {func_1054(55, 57, -1)};
	func_367(&Var0, 0);
	if ((!is_durango_version() && _0x595F028698072DD9(0, -1, 1)) || func_266())
	{
		func_286(28);
	}
	else
	{
		func_265(28);
	}
}

void func_268(int iParam0)
{
	set_bit(&(Global_2391017.f_2), iParam0);
	if (Global_2391017)
	{
		return;
	}
	Global_2391017 = 1;
	Global_2391017.f_1 = 0;
}

void func_269()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_2390943.f_28[iVar0 /*2*/] != -1 && Global_2390943.f_28[iVar0 /*2*/].f_1 != 0)
		{
			if (does_blip_exist(Global_2390943.f_28[iVar0 /*2*/].f_1))
			{
				set_blip_as_short_range(Global_2390943.f_28[iVar0 /*2*/].f_1, true);
			}
		}
		iVar0++;
	}
}

var func_270()
{
	return Global_2434762.f_615;
}

void func_271(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0 / 32;
	iVar1 = iParam0 % 32;
	clear_bit(&(Global_2460486.f_4660.f_7[iVar0]), iVar1);
}

int func_272(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0 / 32;
	iVar1 = iParam0 % 32;
	return is_bit_set(Global_2460486.f_4660.f_7[iVar0], iVar1);
}

void func_273()
{
	int iVar0;
	int iVar1;
	
	iVar0 = false;
	while (iVar0 < 32)
	{
		iVar1 = int_to_playerindex(iVar0);
		if (network_is_player_active(iVar1))
		{
			func_275(1, iVar1);
			if (iVar1 != player_id())
			{
				func_274(iVar1);
			}
		}
		iVar0++;
	}
}

void func_274(int iParam0)
{
	int iVar0;
	
	if (is_bit_set(Global_1610316[player_id() /*174*/].f_10.f_70, iParam0))
	{
		iVar0 = get_player_ped(iParam0);
		set_ped_can_be_targetted_by_player(iVar0, player_id(), 1);
		unk_0x55FCC0C390620314(player_id(), iParam0, 1);
		unk_0x55FCC0C390620314(iParam0, player_id(), 1);
		func_275(1, iParam0);
		clear_bit(&(Global_1610316[player_id() /*174*/].f_10.f_70), iParam0);
	}
}

void func_275(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_220(iParam1, 0, 1))
	{
		iVar1 = get_player_ped(iParam1);
		if (does_entity_exist(iVar1) && !is_entity_dead(iVar1, 0))
		{
			if (is_ped_in_any_vehicle(iVar1, 0))
			{
				iVar0 = get_vehicle_ped_is_in(iVar1, 0);
				if (does_entity_exist(iVar0) && !is_entity_dead(iVar0, 0))
				{
					_0x7D6F9A3EF26136A0(iVar0, iParam0, 1);
					if (func_249(iParam1, func_279(), 1))
					{
						if (func_279() == iParam1)
						{
							if (Global_2460486.f_4660.f_62[3] != iVar0)
							{
								Global_2460486.f_4660.f_62[3] = iVar0;
							}
						}
						else
						{
							iVar2 = func_276(func_279(), iParam1);
							if (iVar2 != -1)
							{
								if (Global_2460486.f_4660.f_62[iVar2] != iVar0)
								{
									Global_2460486.f_4660.f_62[iVar2] = iVar0;
								}
							}
						}
					}
				}
			}
			else if (!iParam0)
			{
				if (func_249(iParam1, func_279(), 1))
				{
					if (func_279() == iParam1)
					{
						if (does_entity_exist(Global_2460486.f_4660.f_62[3]) && !is_entity_dead(Global_2460486.f_4660.f_62[3], 0))
						{
							_0x7D6F9A3EF26136A0(Global_2460486.f_4660.f_62[3], true, 1);
							Global_2460486.f_4660.f_62[3] = 0;
						}
					}
					else
					{
						iVar3 = func_276(func_279(), iParam1);
						if (iVar3 != -1)
						{
							if (does_entity_exist(Global_2460486.f_4660.f_62[iVar3]) && !is_entity_dead(Global_2460486.f_4660.f_62[iVar3], 0))
							{
								_0x7D6F9A3EF26136A0(Global_2460486.f_4660.f_62[iVar3], true, 1);
								Global_2460486.f_4660.f_62[iVar3] = 0;
							}
						}
					}
				}
			}
		}
	}
}

int func_276(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_368(iParam0))
	{
		if (func_249(iParam1, iParam0, 0) || func_278(iParam1, iParam0))
		{
			iVar0 = 0;
			while (iVar0 < func_257())
			{
				if (func_277(iParam0, iVar0) == iParam1)
				{
					return iVar0;
				}
				iVar0++;
			}
		}
	}
	return -1;
}

int func_277(int iParam0, int iParam1)
{
	if (func_368(iParam0))
	{
		if (iParam1 > -1 && iParam1 < 3)
		{
			return Global_1610316[iParam0 /*174*/].f_10.f_10[iParam1];
		}
	}
	return func_210();
}

int func_278(int iParam0, int iParam1)
{
	if (iParam1 != func_210())
	{
		if (Global_1610316[iParam0 /*174*/].f_10.f_21 != func_210())
		{
			return iParam1 == Global_1610316[iParam0 /*174*/].f_10.f_21;
		}
	}
	return false;
}

var func_279()
{
	return Global_1610316[player_id() /*174*/].f_10;
}

void func_280(int iParam0)
{
	if (!func_198())
	{
		return;
	}
	Global_1610316[player_id() /*174*/].f_10.f_1 = iParam0;
	if (func_1053(3892, -1, 0) != func_281(player_id()))
	{
		func_372(3892, func_281(player_id()), -1, 1);
	}
}

int func_281(int iParam0)
{
	if (func_282(iParam0) == -1)
	{
		return -1;
	}
	return func_282(iParam0) + 43200;
}

var func_282(var uParam0)
{
	return Global_1610316[uParam0 /*174*/].f_10.f_1;
}

void func_283()
{
	if (is_pc_version())
	{
		unk_0x265559DA40B3F327(1);
		unk_0x6A1738B4323FE2D9(-1755491431);
	}
}

void func_284(char[64] cParam0)
{
	Global_2435528.f_3065.f_2 = {cParam0};
}

void func_285(var uParam0, var uParam1)
{
	Global_1610316[player_id() /*174*/].f_10.f_7[0] = uParam0;
	Global_1610316[player_id() /*174*/].f_10.f_7[1] = uParam1;
}

void func_286(int iParam0)
{
	clear_bit(&(Global_1610316[player_id() /*174*/].f_10.f_4), iParam0);
}

void func_287(int iParam0)
{
	func_201(204, iParam0, -1, 1);
}

void func_288(int iParam0)
{
	if (iParam0)
	{
		if (func_290(4))
		{
			func_265(21);
			func_265(22);
		}
		func_265(31);
		func_289(iParam0);
	}
	else
	{
		if (func_238(player_id(), 21))
		{
			func_286(21);
			if (!func_290(3) && func_290(4))
			{
				func_265(22);
			}
		}
		func_286(31);
		func_289(iParam0);
	}
}

void func_289(int iParam0)
{
	func_201(283, iParam0, -1, 1);
}

int func_290(int iParam0)
{
	return is_bit_set(Global_2460486.f_4660.f_18, iParam0);
}

var func_291()
{
	return Global_262145.f_10305;
}

int func_292()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = false;
	while (iVar0 < 32)
	{
		iVar2 = int_to_playerindex(iVar0);
		if (network_is_player_active(iVar2))
		{
			if (func_368(iVar2))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_293(int iParam0, int iParam1)
{
	if (!iParam1)
	{
		if (func_368(iParam0))
		{
			return false;
		}
	}
	return Global_1610316[iParam0 /*174*/].f_10 != func_210();
}

void func_294(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0 / 32;
	iVar1 = iParam0 % 32;
	set_bit(&(Global_2460486.f_4660.f_7[iVar0]), iVar1);
}

int func_295(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	_set_notification_text_entry(sParam0);
	iVar0 = _draw_notification(0, 1);
	func_296(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_296(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_299() || !network_is_activity_session()) || !func_239(player_id(), 0))
	{
		return;
	}
	iVar0 = func_297(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1724230.f_5[iVar0 /*53*/] = iParam0;
		Global_1724230.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1724230.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1724230.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1724230.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1724230.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1724230.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1724230.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1724230.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1724230.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1724230.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1724230.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_297(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_1724230 - 1)
	{
		if (iParam0 > Global_1724230.f_5[iVar0 /*53*/].f_1)
		{
			func_298(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1724230++;
	if (Global_1724230 > 5)
	{
		Global_1724230 = 5;
		return Global_1724230;
	}
	return Global_1724230 - 1;
}

void func_298(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1724230.f_5[iVar0 /*53*/] = {Global_1724230.f_5[iVar0 - 1 /*53*/]};
		iVar0 += -1;
	}
}

int func_299()
{
	return is_dlc_present(-1762644250);
}

void func_300()
{
	var uVar0;
	
	uVar0 = func_82(17);
	Global_2411218[uVar0 /*83*/] = 17;
	StringCopy(&(Global_2411218[uVar0 /*83*/].f_18[0 /*16*/]), "-StraightIntoFreemode", 64);
}

void func_301()
{
	var uVar0;
	
	uVar0 = func_82(16);
	Global_2411218[uVar0 /*83*/] = 16;
	StringCopy(&(Global_2411218[uVar0 /*83*/].f_18[0 /*16*/]), "-StraightIntoFreemode", 64);
}

bool func_302(int iParam0)
{
	switch (iParam0)
	{
		case 83:
		case 84:
		case 85:
			return true;
			break;
	}
	return false;
}

void func_303(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_1053(iParam0, func_197(iParam1), 0);
	iVar0++;
	if (!func_304(iParam0))
	{
		func_372(iParam0, iVar0, iParam1, 1);
	}
	else
	{
		func_305(iParam0, iVar0, iParam1, 1);
	}
}

bool func_304(int iParam0)
{
	if (Global_1347635)
	{
		switch (iParam0)
		{
			case 780:
			case 781:
			case 782:
			case 783:
			case 770:
			case 771:
			case 772:
			case 773:
			case 760:
			case 761:
			case 762:
			case 763:
			case 750:
			case 751:
			case 752:
			case 753:
			case 1296:
			case 632:
			case 1271:
			case 757:
			case 758:
			case 759:
			case 1229:
			case 1868:
			case 2259:
			case 2907:
			case 3036:
			case 3891:
			case 3031:
			case 3032:
			case 3033:
			case 3034:
			case 3035:
			case 3216:
			case 3217:
			case 3218:
			case 3219:
			case 3220:
			case 3221:
			case 3222:
			case 3223:
			case 3224:
			case 3225:
			case 3205:
			case 3199:
			case 3243:
			case 3244:
			case 3245:
			case 3246:
			case 3247:
			case 3248:
			case 3269:
				return true;
				break;
			}
	}
	return false;
}

void func_305(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2469339[iParam0 /*5*/][func_197(iParam2)];
	if (iVar0 != 0)
	{
		stat_set_int(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 780:
			Global_1347702[func_197(iParam2)] = iParam1;
			break;
		
		case 781:
			Global_1347708[func_197(iParam2)] = iParam1;
			break;
		
		case 782:
			Global_1347714[func_197(iParam2)] = iParam1;
			break;
		
		case 783:
			Global_1347720[func_197(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1347678[func_197(iParam2)] = iParam1;
			break;
		
		case 771:
			Global_1347684[func_197(iParam2)] = iParam1;
			break;
		
		case 772:
			Global_1347690[func_197(iParam2)] = iParam1;
			break;
		
		case 773:
			Global_1347696[func_197(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1347654[func_197(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1347660[func_197(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1347666[func_197(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1347672[func_197(iParam2)] = iParam1;
			break;
		
		case 750:
			Global_1347726[func_197(iParam2)] = iParam1;
			break;
		
		case 751:
			Global_1347732[func_197(iParam2)] = iParam1;
			break;
		
		case 752:
			Global_1347738[func_197(iParam2)] = iParam1;
			break;
		
		case 753:
			Global_1347744[func_197(iParam2)] = iParam1;
			break;
		
		case 1296:
			Global_1347750[func_197(iParam2)] = iParam1;
			break;
		
		case 632:
			Global_1347756[func_197(iParam2)] = iParam1;
			break;
		
		case 1271:
			Global_1347762[func_197(iParam2)] = iParam1;
			break;
		
		case 1868:
			Global_2492924[0 /*6*/][func_197(iParam2)] = iParam1;
			break;
		
		case 2259:
			Global_2492924[1 /*6*/][func_197(iParam2)] = iParam1;
			break;
		
		case 2907:
			Global_2492924[2 /*6*/][func_197(iParam2)] = iParam1;
			break;
		
		case 3036:
			Global_2492924[3 /*6*/][func_197(iParam2)] = iParam1;
			break;
		
		case 3891:
			Global_2492986[func_197(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1347768[func_197(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1347774[func_197(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1347780[func_197(iParam2)] = iParam1;
			break;
		
		case 1229:
			Global_1347786[func_197(iParam2)] = iParam1;
			break;
		
		case 3031:
			Global_2492955[0 /*5*/][func_197(iParam2)] = iParam1;
			break;
		
		case 3032:
			Global_2492955[1 /*5*/][func_197(iParam2)] = iParam1;
			break;
		
		case 3033:
			Global_2492955[2 /*5*/][func_197(iParam2)] = iParam1;
			break;
		
		case 3034:
			Global_2492955[3 /*5*/][func_197(iParam2)] = iParam1;
			break;
		
		case 3035:
			Global_2492955[4 /*5*/][func_197(iParam2)] = iParam1;
			break;
		
		case 3216:
			Global_2492991[0 /*5*/][func_197(iParam2)] = iParam1;
			break;
		
		case 3217:
			Global_2492991[1 /*5*/][func_197(iParam2)] = iParam1;
			break;
		
		case 3218:
			Global_2492991[2 /*5*/][func_197(iParam2)] = iParam1;
			break;
		
		case 3219:
			Global_2492991[3 /*5*/][func_197(iParam2)] = iParam1;
			break;
		
		case 3220:
			Global_2492991[4 /*5*/][func_197(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2493017[0 /*5*/][func_197(iParam2)] = iParam1;
			break;
		
		case 3222:
			Global_2493017[1 /*5*/][func_197(iParam2)] = iParam1;
			break;
		
		case 3223:
			Global_2493017[2 /*5*/][func_197(iParam2)] = iParam1;
			break;
		
		case 3224:
			Global_2493017[3 /*5*/][func_197(iParam2)] = iParam1;
			break;
		
		case 3225:
			Global_2493017[4 /*5*/][func_197(iParam2)] = iParam1;
			break;
		
		case 3199:
			Global_2492955[5 /*5*/][func_197(iParam2)] = iParam1;
			break;
		
		case 3205:
			Global_2492924[4 /*6*/][func_197(iParam2)] = iParam1;
			break;
		
		case 3243:
			Global_2493043[func_197(iParam2)] = iParam1;
			break;
		
		case 3244:
			Global_2493058[func_197(iParam2)] = iParam1;
			break;
		
		case 3245:
			Global_2493048[func_197(iParam2)] = iParam1;
			break;
		
		case 3246:
			Global_2493063[func_197(iParam2)] = iParam1;
			break;
		
		case 3247:
			Global_2493053[func_197(iParam2)] = iParam1;
			break;
		
		case 3248:
			Global_2493068[func_197(iParam2)] = iParam1;
			break;
		
		case 3269:
			Global_2493073[func_197(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_306()
{
	var uVar0;
	
	uVar0 = func_82(15);
	Global_2411218[uVar0 /*83*/] = 15;
	StringCopy(&(Global_2411218[uVar0 /*83*/].f_18[0 /*16*/]), "-StraightIntoFreemode", 64);
}

void func_307(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_309(iParam0, func_197(iParam2));
	iVar0 += iParam1;
	func_308(iParam0, iVar0, iParam2);
}

void func_308(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = Global_2492260[uParam0 /*5*/][func_197(iParam2)];
	stat_set_int(iVar0, iParam1, 1);
}

int func_309(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2492260[uParam0 /*5*/][func_197(iParam1)];
	if (stat_get_int(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_310(int iParam0)
{
	int iVar0;
	
	iVar0 = false;
	if (!func_447())
	{
		iVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_313(iParam0))
		{
			if (!iVar0)
			{
				unk_0xFA336E7F40C0A0D0();
			}
		}
		else if (!iVar0)
		{
			_0xE2A99A9B524BEFFF(Global_2558146[iParam0 /*73*/]);
		}
		func_311(&(Global_2558146[iParam0 /*73*/]));
	}
}

void func_311(var uParam0)
{
	*uParam0 = 0;
	*uParam0 = 2147483647;
	*uParam0.f_1 = 0;
	*uParam0.f_2 = 0;
	*uParam0.f_3 = -1593119440;
	*uParam0.f_4 = -2085313189;
	*uParam0.f_5 = 0;
	*uParam0.f_6 = 1227573907;
	*uParam0.f_7 = -1161833819;
	*uParam0.f_8 = 0;
	*uParam0.f_8.f_1 = 0;
	*uParam0.f_8.f_2 = 0;
	func_312(uParam0.f_8.f_3);
	func_312(uParam0.f_8.f_16);
	StringCopy(uParam0.f_8.f_29, "", 32);
	StringCopy(uParam0.f_8.f_37, "", 24);
	StringCopy(uParam0.f_8.f_43, "", 16);
	StringCopy(uParam0.f_8.f_47, "", 16);
	*uParam0.f_8.f_51 = 0;
	*uParam0.f_8.f_52 = 0;
	*uParam0.f_8.f_53 = 0;
	*uParam0.f_8.f_54 = 0;
	*uParam0.f_8.f_55 = 0;
	*uParam0.f_8.f_56 = 0;
	*uParam0.f_66 = 0;
	*uParam0.f_67 = 0;
	*uParam0.f_68 = 0;
	*uParam0.f_69 = 0;
	*uParam0.f_70 = 0;
	*uParam0.f_71 = 0;
	*uParam0.f_72 = 0;
}

void func_312(var uParam0)
{
	*uParam0 = 0;
	*uParam0.f_1 = 0;
	*uParam0.f_2 = 0;
	*uParam0.f_3 = 0;
	*uParam0.f_4 = 0;
	*uParam0.f_5 = 0;
	*uParam0.f_6 = 0;
	*uParam0.f_7 = 0;
	*uParam0.f_8 = 0;
	*uParam0.f_9 = 0;
	*uParam0.f_10 = 0;
	*uParam0.f_11 = 0;
	*uParam0.f_12 = 0;
}

int func_313(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2558146[iParam0 /*73*/].f_5 == 1;
	}
	return false;
}

int func_314(int iParam0)
{
	if (iParam0 == 0)
	{
		if (get_entity_model(player_ped_id()) == joaat("mp_m_freemode_01"))
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	if (get_entity_model(player_ped_id()) == joaat("mp_m_freemode_01"))
	{
		return 3;
	}
	return 4;
}

int func_315(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2558146[iParam0 /*73*/];
	}
	return -1;
}

int func_316()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_315(iVar0) != 2147483647)
		{
			if (func_313(iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_317(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_246(iParam0);
	iVar0 += iParam1;
	if (!func_320(iParam0))
	{
		func_319(iParam0, iVar0);
	}
	else
	{
		func_318(iParam0, iVar0);
	}
}

void func_318(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		stat_set_int(iVar0, iParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1347636 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1347638 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1347638 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1347639 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1347640 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1347641 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1347642 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1347643 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1347644 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1347645 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1347646 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1347647 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1347648 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1347649 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1347650 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1347651 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1347652 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_319(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		stat_set_int(iVar0, iParam1, 1);
	}
}

bool func_320(int iParam0)
{
	if (Global_1347635)
	{
		switch (iParam0)
		{
			case joaat("mpply_crew_0_id"):
			case joaat("mpply_crew_1_id"):
			case joaat("mpply_crew_2_id"):
			case joaat("mpply_crew_3_id"):
			case joaat("mpply_crew_4_id"):
			case joaat("mpply_crew_local_xp_0"):
			case joaat("mpply_crew_local_xp_1"):
			case joaat("mpply_crew_local_xp_2"):
			case joaat("mpply_crew_local_xp_3"):
			case joaat("mpply_crew_local_xp_4"):
			case joaat("mpply_became_cheater_num"):
			case joaat("mpply_friendly"):
			case joaat("mpply_offensive_language"):
			case joaat("mpply_griefing"):
			case joaat("mpply_helpful"):
			case joaat("mpply_offensive_tagplate"):
			case joaat("mpply_offensive_ugc"):
				return true;
				break;
			}
	}
	return false;
}

bool func_321()
{
	int iVar0;
	int iVar1;
	
	iVar1 = false;
	while (iVar1 < 32)
	{
		iVar0 = int_to_playerindex(iVar1);
		if (func_220(iVar0, 0, 1) && iVar0 != player_id())
		{
			if (func_323(player_id(), iVar0, 1, 0) && !func_322(iVar0))
			{
				return true;
			}
		}
		iVar1++;
	}
	return false;
}

int func_322(int iParam0)
{
	return is_bit_set(Global_1587523[iParam0 /*444*/].f_250.f_7, 11);
}

bool func_323(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_324(iParam0, 1, 0) && func_324(iParam1, 1, 0))
	{
		if (Global_1587523[iParam0 /*444*/].f_250.f_10 == Global_1587523[iParam1 /*444*/].f_250.f_10 && Global_1587523[iParam0 /*444*/].f_250.f_9 == Global_1587523[iParam1 /*444*/].f_250.f_9)
		{
			if (!iParam2)
			{
				return true;
			}
			else
			{
				if (is_bit_set(Global_1587523[iParam0 /*444*/].f_250.f_7, 3) && is_bit_set(Global_1587523[iParam1 /*444*/].f_250.f_7, 3))
				{
					return true;
				}
				if (!is_bit_set(Global_1587523[iParam0 /*444*/].f_250.f_7, 3) && !is_bit_set(Global_1587523[iParam1 /*444*/].f_250.f_7, 3))
				{
					return true;
				}
			}
		}
	}
	if (iParam3)
	{
		if (Global_2418472[iParam0 /*313*/].f_305.f_1 != -1 && Global_2418472[iParam0 /*313*/].f_305.f_1 == Global_2418472[iParam1 /*313*/].f_305.f_1)
		{
			return true;
		}
	}
	return false;
}

bool func_324(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == func_210())
	{
		return false;
	}
	if (is_bit_set(Global_1587523[iParam0 /*444*/].f_250.f_7, false))
	{
		return true;
	}
	if (iParam1)
	{
		if (is_bit_set(Global_1587523[iParam0 /*444*/].f_250.f_7, true))
		{
			return true;
		}
	}
	if (iParam2)
	{
		if (Global_2418472[iParam0 /*313*/].f_305.f_1 != -1)
		{
			return true;
		}
	}
	return false;
}

void func_325()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 7386;
	iVar1 = 7449;
	iVar2 = iVar0;
	while (iVar2 <= iVar1)
	{
		func_89(iVar2, 0, -1, 1);
		iVar2++;
	}
	func_89(7466, 0, -1, 1);
	iVar0 = 7450;
	iVar1 = 7457;
	iVar2 = iVar0;
	while (iVar2 <= iVar1)
	{
		func_89(iVar2, 0, -1, 1);
		iVar2++;
	}
}

void func_326(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= 71)
	{
		iVar1 = func_362(iVar0);
		if (func_361(iVar1))
		{
			if (func_355(iVar1, -1, 0) || func_353(iVar1))
			{
				if (!iParam0)
				{
					if (!is_entity_dead(player_ped_id(), 0))
					{
						give_weapon_to_ped(player_ped_id(), iVar1, false, false, false);
						func_340(iVar1);
						func_329(iVar1);
					}
				}
				else if (func_438(func_328(iVar1), -1, -1) || func_327(get_weapontype_group(iVar1), iVar1))
				{
					if (!is_entity_dead(player_ped_id(), 0))
					{
						remove_weapon_from_ped(player_ped_id(), iVar1);
					}
				}
				else if (!is_entity_dead(player_ped_id(), 0))
				{
					give_weapon_to_ped(player_ped_id(), iVar1, false, false, false);
					func_340(iVar1);
					func_329(iVar1);
				}
			}
		}
		iVar0++;
	}
}

bool func_327(int iParam0, int iParam1)
{
	if (iParam1 == joaat("weapon_knuckle"))
	{
		if (func_438(7450, -1, -1))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (iParam1 == joaat("weapon_musket"))
	{
		if (func_438(7454, -1, -1))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	switch (iParam0)
	{
		case -728555052:
			if (func_438(7450, -1, -1))
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		
		case 416676503:
			if (func_438(7451, -1, -1))
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		
		case -1569042529:
			if (func_438(7456, -1, -1))
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		
		case -1212426201:
			if (func_438(7455, -1, -1))
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		
		case 860033945:
			if (func_438(7454, -1, -1))
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		
		case 1548507267:
			if (func_438(7457, -1, -1))
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		
		case 1159398588:
		case -957766203:
			if (func_438(7452, -1, -1))
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		
		case 970310034:
			if (func_438(7453, -1, -1))
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
	}
	if (iParam1 == joaat("weapon_petrolcan") && func_438(7457, -1, -1))
	{
		return true;
	}
	return false;
}

int func_328(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			return 7387;
			break;
		
		case joaat("weapon_combatpistol"):
			return 7388;
			break;
		
		case joaat("weapon_appistol"):
			return 7389;
			break;
		
		case joaat("weapon_smg"):
			return 7390;
			break;
		
		case joaat("weapon_assaultrifle"):
			return 7391;
			break;
		
		case joaat("weapon_carbinerifle"):
			return 7392;
			break;
		
		case joaat("weapon_advancedrifle"):
			return 7393;
			break;
		
		case joaat("weapon_mg"):
			return 7394;
			break;
		
		case joaat("weapon_combatmg"):
			return 7395;
			break;
		
		case joaat("weapon_pumpshotgun"):
			return 7396;
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			return 7397;
			break;
		
		case joaat("weapon_assaultshotgun"):
			return 7398;
			break;
		
		case joaat("weapon_sniperrifle"):
			return 7399;
			break;
		
		case joaat("weapon_grenadelauncher"):
			return 7400;
			break;
		
		case joaat("weapon_rpg"):
			return 7401;
			break;
		
		case joaat("weapon_minigun"):
			return 7402;
			break;
		
		case joaat("weapon_grenade"):
			return 7403;
			break;
		
		case joaat("weapon_smokegrenade"):
			return 7404;
			break;
		
		case joaat("weapon_stickybomb"):
			return 7405;
			break;
		
		case joaat("weapon_molotov"):
			return 7406;
			break;
		
		case joaat("weapon_flare"):
			return 7407;
			break;
		
		case joaat("weapon_knife"):
			return 7408;
			break;
		
		case joaat("weapon_nightstick"):
			return 7409;
			break;
		
		case joaat("weapon_hammer"):
			return 7410;
			break;
		
		case joaat("weapon_pistol50"):
			return 7411;
			break;
		
		case joaat("weapon_assaultsmg"):
			return 7412;
			break;
		
		case -947031628:
			return 7413;
			break;
		
		case joaat("weapon_bullpupshotgun"):
			return 7414;
			break;
		
		case -572349828:
			return 7415;
			break;
		
		case 392730790:
			return 7416;
			break;
		
		case joaat("weapon_specialcarbine"):
			return 7417;
			break;
		
		case joaat("weapon_bottle"):
			return 7418;
			break;
		
		case joaat("weapon_bullpuprifle"):
			return 7419;
			break;
		
		case joaat("weapon_heavypistol"):
			return 7420;
			break;
		
		case joaat("weapon_snspistol"):
			return 7421;
			break;
		
		case joaat("weapon_dagger"):
			return 7422;
			break;
		
		case joaat("weapon_vintagepistol"):
			return 7423;
			break;
		
		case joaat("weapon_gusenberg"):
			return 7424;
			break;
		
		case joaat("weapon_flaregun"):
			return 7425;
			break;
		
		case joaat("weapon_firework"):
			return 7426;
			break;
		
		case joaat("weapon_musket"):
			return 7427;
			break;
		
		case -1523701417:
			return 7428;
			break;
		
		case joaat("weapon_heavyshotgun"):
			return 7429;
			break;
		
		case joaat("weapon_marksmanrifle"):
			return 7430;
			break;
		
		case joaat("weapon_hominglauncher"):
			return 7431;
			break;
		
		case joaat("weapon_proxmine"):
			return 7432;
			break;
		
		case joaat("weapon_snowball"):
			return 7433;
			break;
		
		case joaat("weapon_combatpdw"):
			return 7434;
			break;
		
		case joaat("weapon_knuckle"):
			return 7435;
			break;
		
		case joaat("weapon_marksmanpistol"):
			return 7436;
			break;
		
		case joaat("weapon_hatchet"):
			return 7437;
			break;
		
		case joaat("weapon_compactrifle"):
			return 7438;
			break;
		
		case joaat("weapon_dbshotgun"):
			return 7439;
			break;
		
		case joaat("weapon_machete"):
			return 7440;
			break;
		
		case joaat("weapon_machinepistol"):
			return 7441;
			break;
		
		case joaat("weapon_flashlight"):
			return 7442;
			break;
		
		case joaat("weapon_revolver"):
			return 7443;
			break;
		
		case joaat("weapon_switchblade"):
			return 7444;
			break;
		
		case joaat("weapon_microsmg"):
			return 7445;
			break;
		
		case joaat("weapon_heavysniper"):
			return 7446;
			break;
		
		case joaat("weapon_petrolcan"):
			return 7447;
			break;
		
		case joaat("weapon_golfclub"):
			return 7448;
			break;
		
		case joaat("weapon_bat"):
			return 7449;
			break;
		
		case joaat("weapon_crowbar"):
			return 7466;
			break;
	}
	return 7386;
}

void func_329(int iParam0)
{
	int iVar0;
	var uVar1;
	
	if (func_88() != 1 && func_88() != 2)
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			uVar1 = func_339(iParam0, iVar0);
			if (func_332(uVar1, -1) && func_330(iParam0))
			{
				set_ped_weapon_tint_index(player_ped_id(), iParam0, iVar0);
			}
			iVar0++;
		}
	}
}

bool func_330(int iParam0)
{
	if (has_ped_got_weapon(player_ped_id(), iParam0, 0))
	{
		return true;
	}
	if (has_ped_got_weapon(player_ped_id(), iParam0, 0))
	{
		if (func_331(iParam0) == 0)
		{
			return true;
		}
	}
	return false;
}

bool func_331(int iParam0)
{
	if ((((((((((iParam0 == joaat("gadget_parachute") || iParam0 == joaat("weapon_knife")) || iParam0 == joaat("weapon_bat")) || iParam0 == joaat("weapon_crowbar")) || iParam0 == joaat("weapon_nightstick")) || iParam0 == joaat("weapon_golfclub")) || iParam0 == joaat("weapon_hammer")) || iParam0 == joaat("weapon_bat")) || iParam0 == joaat("weapon_bottle")) || iParam0 == joaat("weapon_dagger")) || iParam0 == joaat("weapon_hatchet"))
	{
		return false;
	}
	return true;
}

int func_332(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (func_338())
	{
		return false;
	}
	iVar0 = func_334(uParam0, iParam1);
	iVar1 = uParam0;
	return is_bit_set(iVar0, func_333(iVar1));
}

int func_333(int iParam0)
{
	return iParam0 % 32;
}

var func_334(var uParam0, int iParam1)
{
	var uVar0;
	
	uVar0 = func_1053(func_335(uParam0), iParam1, 0);
	return uVar0;
}

int func_335(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_337(iVar0);
	if ((func_88() == 0 || func_336() == 0) || (func_88() == 999 && func_336() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 698;
				break;
			
			case 1:
				return 699;
				break;
			
			case 2:
				return 700;
				break;
			
			case 3:
				return 701;
				break;
			
			case 4:
				return 702;
				break;
			
			case 5:
				return 703;
				break;
			
			case 6:
				return 704;
				break;
			
			case 7:
				return 705;
				break;
			
			case 8:
				return 706;
				break;
			
			case 9:
				return 2046;
				break;
			
			case 10:
				return 2058;
				break;
			
			case 11:
				return 2085;
				break;
			
			case 12:
				return 2407;
				break;
			
			case 13:
				return 2926;
				break;
			}
	}
	return 3949;
}

var func_336()
{
	return Global_25121;
}

int func_337(int iParam0)
{
	return iParam0 / 32;
}

var func_338()
{
	return Global_1315890;
}

int func_339(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			switch (iParam1)
			{
				case 1:
					return 76;
					break;
				
				case 2:
					return 16;
					break;
				
				case 3:
					return 136;
					break;
				
				case 4:
					return 56;
					break;
				
				case 5:
					return 116;
					break;
				
				case 6:
					return 96;
					break;
				
				case 7:
					return 36;
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam1)
			{
				case 1:
					return 77;
					break;
				
				case 2:
					return 17;
					break;
				
				case 3:
					return 137;
					break;
				
				case 4:
					return 57;
					break;
				
				case 5:
					return 117;
					break;
				
				case 6:
					return 97;
					break;
				
				case 7:
					return 37;
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam1)
			{
				case 1:
					return 78;
					break;
				
				case 2:
					return 18;
					break;
				
				case 3:
					return 138;
					break;
				
				case 4:
					return 58;
					break;
				
				case 5:
					return 118;
					break;
				
				case 6:
					return 98;
					break;
				
				case 7:
					return 38;
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam1)
			{
				case 1:
					return 79;
					break;
				
				case 2:
					return 19;
					break;
				
				case 3:
					return 139;
					break;
				
				case 4:
					return 59;
					break;
				
				case 5:
					return 119;
					break;
				
				case 6:
					return 99;
					break;
				
				case 7:
					return 39;
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (iParam1)
			{
				case 1:
					return 80;
					break;
				
				case 2:
					return 20;
					break;
				
				case 3:
					return 140;
					break;
				
				case 4:
					return 60;
					break;
				
				case 5:
					return 120;
					break;
				
				case 6:
					return 100;
					break;
				
				case 7:
					return 40;
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam1)
			{
				case 1:
					return 81;
					break;
				
				case 2:
					return 21;
					break;
				
				case 3:
					return 141;
					break;
				
				case 4:
					return 61;
					break;
				
				case 5:
					return 121;
					break;
				
				case 6:
					return 101;
					break;
				
				case 7:
					return 41;
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam1)
			{
				case 1:
					return 82;
					break;
				
				case 2:
					return 22;
					break;
				
				case 3:
					return 142;
					break;
				
				case 4:
					return 62;
					break;
				
				case 5:
					return 122;
					break;
				
				case 6:
					return 102;
					break;
				
				case 7:
					return 42;
					break;
			}
			break;
		
		case joaat("weapon_snspistol"):
			switch (iParam1)
			{
				case 1:
					return 215;
					break;
				
				case 2:
					return 209;
					break;
				
				case 3:
					return 210;
					break;
				
				case 4:
					return 211;
					break;
				
				case 5:
					return 212;
					break;
				
				case 6:
					return 213;
					break;
				
				case 7:
					return 214;
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			switch (iParam1)
			{
				case 1:
					return 208;
					break;
				
				case 2:
					return 202;
					break;
				
				case 3:
					return 203;
					break;
				
				case 4:
					return 204;
					break;
				
				case 5:
					return 205;
					break;
				
				case 6:
					return 206;
					break;
				
				case 7:
					return 207;
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam1)
			{
				case 1:
					return 83;
					break;
				
				case 2:
					return 23;
					break;
				
				case 3:
					return 143;
					break;
				
				case 4:
					return 63;
					break;
				
				case 5:
					return 123;
					break;
				
				case 6:
					return 103;
					break;
				
				case 7:
					return 43;
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam1)
			{
				case 1:
					return 84;
					break;
				
				case 2:
					return 24;
					break;
				
				case 3:
					return 144;
					break;
				
				case 4:
					return 64;
					break;
				
				case 5:
					return 124;
					break;
				
				case 6:
					return 104;
					break;
				
				case 7:
					return 44;
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam1)
			{
				case 1:
					return 85;
					break;
				
				case 2:
					return 25;
					break;
				
				case 3:
					return 145;
					break;
				
				case 4:
					return 65;
					break;
				
				case 5:
					return 125;
					break;
				
				case 6:
					return 105;
					break;
				
				case 7:
					return 45;
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (iParam1)
			{
				case 1:
					return 87;
					break;
				
				case 2:
					return 27;
					break;
				
				case 3:
					return 147;
					break;
				
				case 4:
					return 67;
					break;
				
				case 5:
					return 127;
					break;
				
				case 6:
					return 107;
					break;
				
				case 7:
					return 47;
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (iParam1)
			{
				case 1:
					return 86;
					break;
				
				case 2:
					return 26;
					break;
				
				case 3:
					return 146;
					break;
				
				case 4:
					return 66;
					break;
				
				case 5:
					return 126;
					break;
				
				case 6:
					return 106;
					break;
				
				case 7:
					return 46;
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam1)
			{
				case 1:
					return 88;
					break;
				
				case 2:
					return 28;
					break;
				
				case 3:
					return 148;
					break;
				
				case 4:
					return 68;
					break;
				
				case 5:
					return 128;
					break;
				
				case 6:
					return 108;
					break;
				
				case 7:
					return 48;
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam1)
			{
				case 1:
					return 91;
					break;
				
				case 2:
					return 31;
					break;
				
				case 3:
					return 151;
					break;
				
				case 4:
					return 71;
					break;
				
				case 5:
					return 131;
					break;
				
				case 6:
					return 111;
					break;
				
				case 7:
					return 51;
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (iParam1)
			{
				case 1:
					return 92;
					break;
				
				case 2:
					return 32;
					break;
				
				case 3:
					return 152;
					break;
				
				case 4:
					return 72;
					break;
				
				case 5:
					return 132;
					break;
				
				case 6:
					return 112;
					break;
				
				case 7:
					return 52;
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam1)
			{
				case 1:
					return 93;
					break;
				
				case 2:
					return 33;
					break;
				
				case 3:
					return 153;
					break;
				
				case 4:
					return 73;
					break;
				
				case 5:
					return 133;
					break;
				
				case 6:
					return 113;
					break;
				
				case 7:
					return 53;
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam1)
			{
				case 1:
					return 95;
					break;
				
				case 2:
					return 35;
					break;
				
				case 3:
					return 155;
					break;
				
				case 4:
					return 75;
					break;
				
				case 5:
					return 135;
					break;
				
				case 6:
					return 115;
					break;
				
				case 7:
					return 55;
					break;
			}
			break;
		
		case joaat("weapon_rpg"):
			switch (iParam1)
			{
				case 1:
					return 94;
					break;
				
				case 2:
					return 34;
					break;
				
				case 3:
					return 154;
					break;
				
				case 4:
					return 74;
					break;
				
				case 5:
					return 134;
					break;
				
				case 6:
					return 114;
					break;
				
				case 7:
					return 54;
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam1)
			{
				case 1:
					return 194;
					break;
				
				case 2:
					return 173;
					break;
				
				case 3:
					return 174;
					break;
				
				case 4:
					return 175;
					break;
				
				case 5:
					return 176;
					break;
				
				case 6:
					return 177;
					break;
				
				case 7:
					return 178;
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam1)
			{
				case 1:
					return 192;
					break;
				
				case 2:
					return 161;
					break;
				
				case 3:
					return 162;
					break;
				
				case 4:
					return 163;
					break;
				
				case 5:
					return 164;
					break;
				
				case 6:
					return 165;
					break;
				
				case 7:
					return 166;
					break;
			}
			break;
		
		case -947031628:
			switch (iParam1)
			{
				case 1:
					return 191;
					break;
				
				case 2:
					return 185;
					break;
				
				case 3:
					return 186;
					break;
				
				case 4:
					return 187;
					break;
				
				case 5:
					return 188;
					break;
				
				case 6:
					return 189;
					break;
				
				case 7:
					return 190;
					break;
			}
			break;
		
		case -572349828:
			switch (iParam1)
			{
				case 1:
					return 193;
					break;
				
				case 2:
					return 179;
					break;
				
				case 3:
					return 180;
					break;
				
				case 4:
					return 181;
					break;
				
				case 5:
					return 182;
					break;
				
				case 6:
					return 183;
					break;
				
				case 7:
					return 184;
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam1)
			{
				case 1:
					return 201;
					break;
				
				case 2:
					return 195;
					break;
				
				case 3:
					return 196;
					break;
				
				case 4:
					return 197;
					break;
				
				case 5:
					return 198;
					break;
				
				case 6:
					return 199;
					break;
				
				case 7:
					return 200;
					break;
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			switch (iParam1)
			{
				case 1:
					return 223;
					break;
				
				case 2:
					return 217;
					break;
				
				case 3:
					return 218;
					break;
				
				case 4:
					return 219;
					break;
				
				case 5:
					return 220;
					break;
				
				case 6:
					return 221;
					break;
				
				case 7:
					return 222;
					break;
			}
			break;
		
		case joaat("weapon_heavypistol"):
			switch (iParam1)
			{
				case 1:
					return 230;
					break;
				
				case 2:
					return 224;
					break;
				
				case 3:
					return 225;
					break;
				
				case 4:
					return 226;
					break;
				
				case 5:
					return 227;
					break;
				
				case 6:
					return 228;
					break;
				
				case 7:
					return 229;
					break;
			}
			break;
		
		case joaat("weapon_gusenberg"):
			switch (iParam1)
			{
				case 1:
					return 231;
					break;
				
				case 2:
					return 232;
					break;
				
				case 3:
					return 233;
					break;
				
				case 4:
					return 234;
					break;
				
				case 5:
					return 235;
					break;
				
				case 6:
					return 236;
					break;
				
				case 7:
					return 237;
					break;
			}
			break;
		
		case joaat("weapon_vintagepistol"):
			switch (iParam1)
			{
				case 1:
					return 254;
					break;
				
				case 2:
					return 248;
					break;
				
				case 3:
					return 249;
					break;
				
				case 4:
					return 250;
					break;
				
				case 5:
					return 251;
					break;
				
				case 6:
					return 252;
					break;
				
				case 7:
					return 253;
					break;
			}
			break;
		
		case joaat("weapon_musket"):
			switch (iParam1)
			{
				case 1:
					return 266;
					break;
				
				case 2:
					return 267;
					break;
				
				case 3:
					return 268;
					break;
				
				case 4:
					return 269;
					break;
				
				case 5:
					return 270;
					break;
				
				case 6:
					return 271;
					break;
				
				case 7:
					return 272;
					break;
			}
			break;
		
		case joaat("weapon_firework"):
			switch (iParam1)
			{
				case 1:
					return 273;
					break;
				
				case 2:
					return 274;
					break;
				
				case 3:
					return 275;
					break;
				
				case 4:
					return 276;
					break;
				
				case 5:
					return 277;
					break;
				
				case 6:
					return 278;
					break;
				
				case 7:
					return 279;
					break;
			}
			break;
		
		case joaat("weapon_flaregun"):
			switch (iParam1)
			{
				case 1:
					return 280;
					break;
				
				case 2:
					return 281;
					break;
				
				case 3:
					return 282;
					break;
				
				case 4:
					return 283;
					break;
				
				case 5:
					return 284;
					break;
				
				case 6:
					return 285;
					break;
				
				case 7:
					return 286;
					break;
			}
			break;
		
		case joaat("weapon_marksmanrifle"):
			switch (iParam1)
			{
				case 1:
					return 331;
					break;
				
				case 2:
					return 332;
					break;
				
				case 3:
					return 333;
					break;
				
				case 4:
					return 334;
					break;
				
				case 5:
					return 335;
					break;
				
				case 6:
					return 336;
					break;
				
				case 7:
					return 337;
					break;
			}
			break;
		
		case joaat("weapon_heavyshotgun"):
			switch (iParam1)
			{
				case 1:
					return 324;
					break;
				
				case 2:
					return 325;
					break;
				
				case 3:
					return 326;
					break;
				
				case 4:
					return 327;
					break;
				
				case 5:
					return 328;
					break;
				
				case 6:
					return 329;
					break;
				
				case 7:
					return 330;
					break;
			}
			break;
		
		case joaat("weapon_hominglauncher"):
			switch (iParam1)
			{
				case 1:
					return 365;
					break;
				
				case 2:
					return 366;
					break;
				
				case 3:
					return 367;
					break;
				
				case 4:
					return 368;
					break;
				
				case 5:
					return 369;
					break;
				
				case 6:
					return 370;
					break;
				
				case 7:
					return 371;
					break;
			}
			break;
		
		case joaat("weapon_railgun"):
			switch (iParam1)
			{
				case 1:
					return 338;
					break;
				
				case 2:
					return 339;
					break;
				
				case 3:
					return 340;
					break;
				
				case 4:
					return 341;
					break;
				
				case 5:
					return 342;
					break;
				
				case 6:
					return 343;
					break;
				
				case 7:
					return 344;
					break;
			}
			break;
		
		case joaat("weapon_marksmanpistol"):
			switch (iParam1)
			{
				case 1:
					return 390;
					break;
				
				case 2:
					return 384;
					break;
				
				case 3:
					return 385;
					break;
				
				case 4:
					return 386;
					break;
				
				case 5:
					return 387;
					break;
				
				case 6:
					return 388;
					break;
				
				case 7:
					return 389;
					break;
			}
			break;
		
		case joaat("weapon_combatpdw"):
			switch (iParam1)
			{
				case 1:
					return 377;
					break;
				
				case 2:
					return 378;
					break;
				
				case 3:
					return 379;
					break;
				
				case 4:
					return 380;
					break;
				
				case 5:
					return 381;
					break;
				
				case 6:
					return 382;
					break;
				
				case 7:
					return 383;
					break;
			}
			break;
		
		case joaat("weapon_machinepistol"):
			switch (iParam1)
			{
				case 1:
					return 397;
					break;
				
				case 2:
					return 391;
					break;
				
				case 3:
					return 392;
					break;
				
				case 4:
					return 393;
					break;
				
				case 5:
					return 394;
					break;
				
				case 6:
					return 395;
					break;
				
				case 7:
					return 396;
					break;
			}
			break;
		
		case joaat("weapon_dbshotgun"):
			switch (iParam1)
			{
				case 1:
					return 404;
					break;
				
				case 2:
					return 398;
					break;
				
				case 3:
					return 399;
					break;
				
				case 4:
					return 400;
					break;
				
				case 5:
					return 401;
					break;
				
				case 6:
					return 402;
					break;
				
				case 7:
					return 403;
					break;
			}
			break;
		
		case joaat("weapon_compactrifle"):
			switch (iParam1)
			{
				case 1:
					return 411;
					break;
				
				case 2:
					return 405;
					break;
				
				case 3:
					return 406;
					break;
				
				case 4:
					return 407;
					break;
				
				case 5:
					return 408;
					break;
				
				case 6:
					return 409;
					break;
				
				case 7:
					return 410;
					break;
			}
			break;
		
		case joaat("weapon_revolver"):
			switch (iParam1)
			{
				case 1:
					return 412;
					break;
				
				case 2:
					return 413;
					break;
				
				case 3:
					return 414;
					break;
				
				case 4:
					return 415;
					break;
				
				case 5:
					return 416;
					break;
				
				case 6:
					return 417;
					break;
				
				case 7:
					return 418;
					break;
			}
			break;
	}
	return 0;
}

void func_340(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (func_88() != 1 && func_88() != 2)
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (func_352(&iVar1, iParam0, iVar0))
			{
				if (func_349(iVar1, iParam0, -1))
				{
					if (func_344(iVar1, iParam0, -1))
					{
						if (func_330(iParam0))
						{
							give_weapon_component_to_ped(player_ped_id(), iParam0, iVar1);
						}
						else
						{
							func_341(iParam0, 0);
						}
					}
				}
			}
			iVar0++;
		}
	}
}

char* func_341(int iParam0, int iParam1)
{
	struct<32> Var0;
	
	switch (iParam0)
	{
		case 0:
			if (iParam1)
			{
				return "WTU_INVALID";
			}
			else
			{
				return "WT_INVALID";
			}
			break;
		
		case joaat("weapon_unarmed"):
			if (iParam1)
			{
				return "WTU_UNARMED";
			}
			else
			{
				return "WT_UNARMED";
			}
			break;
		
		case joaat("weapon_pistol"):
			if (iParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		
		case joaat("weapon_combatpistol"):
			if (iParam1)
			{
				return "WTU_PIST_CBT";
			}
			else
			{
				return "WT_PIST_CBT";
			}
			break;
		
		case joaat("weapon_appistol"):
			if (iParam1)
			{
				return "WTU_PIST_AP";
			}
			else
			{
				return "WT_PIST_AP";
			}
			break;
		
		case joaat("weapon_smg"):
			if (iParam1)
			{
				return "WTU_SMG";
			}
			else
			{
				return "WT_SMG";
			}
			break;
		
		case joaat("weapon_microsmg"):
			if (iParam1)
			{
				return "WTU_SMG_MCR";
			}
			else
			{
				return "WT_SMG_MCR";
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			if (iParam1)
			{
				return "WTU_RIFLE_ASL";
			}
			else
			{
				return "WT_RIFLE_ASL";
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			if (iParam1)
			{
				return "WTU_RIFLE_CBN";
			}
			else
			{
				return "WT_RIFLE_CBN";
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			if (iParam1)
			{
				return "WTU_RIFLE_ADV";
			}
			else
			{
				return "WT_RIFLE_ADV";
			}
			break;
		
		case joaat("weapon_mg"):
			if (iParam1)
			{
				return "WTU_MG";
			}
			else
			{
				return "WT_MG";
			}
			break;
		
		case joaat("weapon_combatmg"):
			if (iParam1)
			{
				return "WTU_MG_CBT";
			}
			else
			{
				return "WT_MG_CBT";
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			if (iParam1)
			{
				return "WTU_SG_PMP";
			}
			else
			{
				return "WT_SG_PMP";
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			if (iParam1)
			{
				return "WTU_SG_SOF";
			}
			else
			{
				return "WT_SG_SOF";
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			if (iParam1)
			{
				return "WTU_SG_ASL";
			}
			else
			{
				return "WT_SG_ASL";
			}
			break;
		
		case joaat("weapon_heavysniper"):
			if (iParam1)
			{
				return "WTU_SNIP_HVY";
			}
			else
			{
				return "WT_SNIP_HVY";
			}
			break;
		
		case joaat("weapon_remotesniper"):
			if (iParam1)
			{
				return "WTU_SNIP_RMT";
			}
			else
			{
				return "WT_SNIP_RMT";
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			if (iParam1)
			{
				return "WTU_SNIP_RIF";
			}
			else
			{
				return "WT_SNIP_RIF";
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			if (iParam1)
			{
				return "WTU_GL";
			}
			else
			{
				return "WT_GL";
			}
			break;
		
		case joaat("weapon_rpg"):
			if (iParam1)
			{
				return "WTU_RPG";
			}
			else
			{
				return "WT_RPG";
			}
			break;
		
		case joaat("weapon_minigun"):
			if (iParam1)
			{
				return "WTU_MINIGUN";
			}
			else
			{
				return "WT_MINIGUN";
			}
			break;
		
		case joaat("weapon_grenade"):
			if (iParam1)
			{
				return "WTU_GNADE";
			}
			else
			{
				return "WT_GNADE";
			}
			break;
		
		case joaat("weapon_smokegrenade"):
			if (iParam1)
			{
				return "WTU_GNADE_SMK";
			}
			else
			{
				return "WT_GNADE_SMK";
			}
			break;
		
		case joaat("weapon_stickybomb"):
			if (iParam1)
			{
				return "WTU_GNADE_STK";
			}
			else
			{
				return "WT_GNADE_STK";
			}
			break;
		
		case joaat("weapon_molotov"):
			if (iParam1)
			{
				return "WTU_MOLOTOV";
			}
			else
			{
				return "WT_MOLOTOV";
			}
			break;
		
		case joaat("weapon_stungun"):
			if (iParam1)
			{
				return "WTU_STUN";
			}
			else
			{
				return "WT_STUN";
			}
			break;
		
		case joaat("weapon_petrolcan"):
			if (iParam1)
			{
				return "WTU_PETROL";
			}
			else
			{
				return "WT_PETROL";
			}
			break;
		
		case joaat("weapon_electric_fence"):
			if (iParam1)
			{
				return "WTU_ELCFEN";
			}
			else
			{
				return "WT_ELCFEN";
			}
			break;
		
		case joaat("vehicle_weapon_tank"):
			if (iParam1)
			{
				return "WTU_V_TANK";
			}
			else
			{
				return "WT_V_TANK";
			}
			break;
		
		case joaat("vehicle_weapon_space_rocket"):
			if (iParam1)
			{
				return "WTU_V_SPACERKT";
			}
			else
			{
				return "WT_V_SPACERKT";
			}
			break;
		
		case joaat("vehicle_weapon_player_laser"):
			if (iParam1)
			{
				return "WTU_V_PLRLSR";
			}
			else
			{
				return "WT_V_PLRLSR";
			}
			break;
		
		case joaat("object"):
			if (iParam1)
			{
				return "WTU_OBJECT";
			}
			else
			{
				return "WT_OBJECT";
			}
			break;
		
		case joaat("gadget_parachute"):
			if (iParam1)
			{
				return "WTU_PARA";
			}
			else
			{
				return "WT_PARA";
			}
			break;
		
		case 1742569970:
			if (iParam1)
			{
				return "WTU_A_RPG";
			}
			else
			{
				return "WT_A_RPG";
			}
			break;
		
		case -1474608608:
			if (iParam1)
			{
				return "WTU_A_TANK";
			}
			else
			{
				return "WT_A_TANK";
			}
			break;
		
		case 527765612:
			if (iParam1)
			{
				return "WTU_A_SPACERKT";
			}
			else
			{
				return "WT_A_SPACERKT";
			}
			break;
		
		case -165357558:
			if (iParam1)
			{
				return "WTU_A_PLRLSR";
			}
			else
			{
				return "WT_A_PLRLSR";
			}
			break;
		
		case -1372674932:
			if (iParam1)
			{
				return "WTU_A_ENMYLSR";
			}
			else
			{
				return "WT_A_ENMYLSR";
			}
			break;
		
		case joaat("weapon_knife"):
			if (iParam1)
			{
				return "WTU_KNIFE";
			}
			else
			{
				return "WT_KNIFE";
			}
			break;
		
		case joaat("weapon_nightstick"):
			if (iParam1)
			{
				return "WTU_NGTSTK";
			}
			else
			{
				return "WT_NGTSTK";
			}
			break;
		
		case joaat("weapon_hammer"):
			if (iParam1)
			{
				return "WTU_HAMMER";
			}
			else
			{
				return "WT_HAMMER";
			}
			break;
		
		case joaat("weapon_bat"):
			if (iParam1)
			{
				return "WTU_BAT";
			}
			else
			{
				return "WT_BAT";
			}
			break;
		
		case joaat("weapon_crowbar"):
			if (iParam1)
			{
				return "WTU_CROWBAR";
			}
			else
			{
				return "WT_CROWBAR";
			}
			break;
		
		case joaat("weapon_golfclub"):
			if (iParam1)
			{
				return "WTU_GOLFCLUB";
			}
			else
			{
				return "WT_GOLFCLUB";
			}
			break;
		
		case joaat("weapon_rammed_by_car"):
			if (iParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		
		case joaat("weapon_run_over_by_car"):
			if (iParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			if (iParam1)
			{
				return "WTU_SMG_ASL";
			}
			else
			{
				return "WT_SMG_ASL";
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			if (iParam1)
			{
				return "WTU_SG_BLP";
			}
			else
			{
				return "WT_SG_BLP";
			}
			break;
		
		case joaat("weapon_pistol50"):
			if (iParam1)
			{
				return "WTU_PIST_50";
			}
			else
			{
				return "WT_PIST_50";
			}
			break;
		
		case joaat("weapon_bottle"):
			if (iParam1)
			{
				return "WTU_BOTTLE";
			}
			else
			{
				return "WT_BOTTLE";
			}
			break;
		
		case joaat("weapon_gusenberg"):
			if (iParam1)
			{
				return "WTU_GUSENBERG";
			}
			else
			{
				return "WT_GUSENBERG";
			}
			break;
		
		case joaat("weapon_snspistol"):
			if (iParam1)
			{
				return "WTU_SNSPISTOL";
			}
			else
			{
				return "WT_SNSPISTOL";
			}
			break;
		
		case joaat("weapon_vintagepistol"):
			if (iParam1)
			{
				return "WTU_VPISTOL";
			}
			else
			{
				return "WT_VPISTOL";
			}
			break;
		
		case joaat("weapon_dagger"):
			if (iParam1)
			{
				return "WTU_DAGGER";
			}
			else
			{
				return "WT_DAGGER";
			}
			break;
		
		case joaat("weapon_flaregun"):
			if (iParam1)
			{
				return "WTU_FLAREGUN";
			}
			else
			{
				return "WT_FLAREGUN";
			}
			break;
		
		case joaat("weapon_heavypistol"):
			if (iParam1)
			{
				return "WTU_HEAVYPSTL";
			}
			else
			{
				return "WT_HEAVYPSTL";
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			if (iParam1)
			{
				return "WTU_RIFLE_SCBN";
			}
			else
			{
				return "WT_RIFLE_SCBN";
			}
			break;
		
		case joaat("weapon_musket"):
			if (iParam1)
			{
				return "WTU_MUSKET";
			}
			else
			{
				return "WT_MUSKET";
			}
			break;
		
		case joaat("weapon_firework"):
			if (iParam1)
			{
				return "WTU_FWRKLNCHR";
			}
			else
			{
				return "WT_FWRKLNCHR";
			}
			break;
		
		case joaat("weapon_marksmanrifle"):
			if (iParam1)
			{
				return "WTU_MKRIFLE";
			}
			else
			{
				return "WT_MKRIFLE";
			}
			break;
		
		case joaat("weapon_heavyshotgun"):
			if (iParam1)
			{
				return "WTU_HVYSHOT";
			}
			else
			{
				return "WT_HVYSHOT";
			}
			break;
		
		case joaat("weapon_proxmine"):
			if (iParam1)
			{
				return "WTU_PRXMINE";
			}
			else
			{
				return "WT_PRXMINE";
			}
			break;
		
		case joaat("weapon_hominglauncher"):
			if (iParam1)
			{
				return "WTU_HOMLNCH";
			}
			else
			{
				return "WT_HOMLNCH";
			}
			break;
		
		case joaat("weapon_hatchet"):
			if (iParam1)
			{
				return "WTU_HATCHET";
			}
			else
			{
				return "WT_HATCHET";
			}
			break;
		
		case joaat("weapon_combatpdw"):
			if (iParam1)
			{
				return "WTU_COMBATPDW";
			}
			else
			{
				return "WT_COMBATPDW";
			}
			break;
		
		case joaat("weapon_knuckle"):
			if (iParam1)
			{
				return "WTU_KNUCKLE";
			}
			else
			{
				return "WT_KNUCKLE";
			}
			break;
		
		case joaat("weapon_marksmanpistol"):
			if (iParam1)
			{
				return "WTU_MKPISTOL";
			}
			else
			{
				return "WT_MKPISTOL";
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			if (iParam1)
			{
				return "WTU_BULLRIFLE";
			}
			else
			{
				return "WT_BULLRIFLE";
			}
			break;
		
		case joaat("weapon_machete"):
			if (iParam1)
			{
				return "WTU_MACHETE";
			}
			else
			{
				return "WT_MACHETE";
			}
			break;
		
		case joaat("weapon_machinepistol"):
			if (iParam1)
			{
				return "WTU_MCHPIST";
			}
			else
			{
				return "WT_MCHPIST";
			}
			break;
		
		case joaat("weapon_flashlight"):
			if (iParam1)
			{
				return "WTU_FLASHLIGHT";
			}
			else
			{
				return "WT_FLASHLIGHT";
			}
			break;
		
		case joaat("weapon_dbshotgun"):
			if (iParam1)
			{
				return "WTU_DBSHGN";
			}
			else
			{
				return "WT_DBSHGN";
			}
			break;
		
		case joaat("weapon_compactrifle"):
			if (iParam1)
			{
				return "WTU_CMPRIFLE";
			}
			else
			{
				return "WT_CMPRIFLE";
			}
			break;
		
		case joaat("weapon_switchblade"):
			if (iParam1)
			{
				return "WTU_SWBLADE";
			}
			else
			{
				return "WT_SWBLADE";
			}
			break;
		
		case joaat("weapon_revolver"):
			if (iParam1)
			{
				return "WTU_REVOLVER";
			}
			else
			{
				return "WT_REVOLVER";
			}
			break;
		
		case joaat("weapon_cougar"):
			return "WT_RAGE";
			break;
		
		default:
			if (func_343(iParam0, &Var0) != -1)
			{
				if (iParam1)
				{
					return func_342(&(Var0.f_31));
				}
				else
				{
					return func_342(&(Var0.f_7));
				}
			}
			break;
	}
	return "WT_INVALID";
}

var func_342(var uParam0)
{
	return uParam0;
}

int func_343(int iParam0, var uParam1)
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

int func_344(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_338())
	{
		return false;
	}
	iVar0 = func_347(iParam0, iParam1, iParam2);
	iVar1 = func_345(iParam0, iParam1);
	return is_bit_set(iVar0, func_333(iVar1));
}

int func_345(int iParam0, int iParam1)
{
	return func_346(iParam0, iParam1);
}

int func_346(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case joaat("weapon_pistol"):
			switch (iParam0)
			{
				case joaat("component_pistol_clip_01"):
					return 1;
					break;
				
				case joaat("component_pistol_clip_02"):
					return 2;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 3;
					break;
				
				case joaat("component_at_pi_supp_02"):
					return 4;
					break;
				
				case joaat("component_pistol_varmod_luxe"):
					return 175;
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam0)
			{
				case joaat("component_combatpistol_clip_01"):
					return 5;
					break;
				
				case joaat("component_combatpistol_clip_02"):
					return 6;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 7;
					break;
				
				case joaat("component_at_pi_supp"):
					return 8;
					break;
				
				case joaat("component_combatpistol_varmod_lowrider"):
					return 186;
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam0)
			{
				case joaat("component_appistol_clip_01"):
					return 11;
					break;
				
				case joaat("component_appistol_clip_02"):
					return 12;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 13;
					break;
				
				case joaat("component_at_pi_supp"):
					return 14;
					break;
				
				case joaat("component_appistol_varmod_luxe"):
					return 164;
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam0)
			{
				case joaat("component_microsmg_clip_01"):
					return 15;
					break;
				
				case joaat("component_microsmg_clip_02"):
					return 16;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 17;
					break;
				
				case joaat("component_at_scope_macro"):
					return 18;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 19;
					break;
				
				case joaat("component_microsmg_varmod_luxe"):
					return 174;
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (iParam0)
			{
				case joaat("component_smg_clip_01"):
					return 22;
					break;
				
				case joaat("component_smg_clip_02"):
					return 23;
					break;
				
				case joaat("component_smg_clip_03"):
					return 207;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 24;
					break;
				
				case joaat("component_at_scope_macro_02"):
					return 25;
					break;
				
				case joaat("component_at_pi_supp"):
					return 26;
					break;
				
				case joaat("component_smg_varmod_luxe"):
					return 179;
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam0)
			{
				case joaat("component_assaultrifle_clip_01"):
					return 27;
					break;
				
				case joaat("component_assaultrifle_clip_02"):
					return 28;
					break;
				
				case joaat("component_assaultrifle_clip_03"):
					return 201;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 29;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 30;
					break;
				
				case joaat("component_at_scope_macro"):
					return 31;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 32;
					break;
				
				case joaat("component_assaultrifle_varmod_luxe"):
					return 165;
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam0)
			{
				case joaat("component_carbinerifle_clip_01"):
					return 33;
					break;
				
				case joaat("component_carbinerifle_clip_02"):
					return 34;
					break;
				
				case joaat("component_carbinerifle_clip_03"):
					return 202;
					break;
				
				case joaat("component_at_railcover_01"):
					return 35;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 36;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 37;
					break;
				
				case joaat("component_at_scope_medium"):
					return 38;
					break;
				
				case joaat("component_at_ar_supp"):
					return 39;
					break;
				
				case joaat("component_carbinerifle_varmod_luxe"):
					return 168;
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam0)
			{
				case joaat("component_advancedrifle_clip_01"):
					return 44;
					break;
				
				case joaat("component_advancedrifle_clip_02"):
					return 45;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 47;
					break;
				
				case joaat("component_at_scope_small"):
					return 48;
					break;
				
				case joaat("component_at_ar_supp"):
					return 49;
					break;
				
				case joaat("component_advancedrifle_varmod_luxe"):
					return 163;
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam0)
			{
				case joaat("component_mg_clip_01"):
					return 50;
					break;
				
				case joaat("component_mg_clip_02"):
					return 51;
					break;
				
				case joaat("component_at_scope_small_02"):
					return 52;
					break;
				
				case joaat("component_mg_varmod_lowrider"):
					return 187;
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam0)
			{
				case joaat("component_combatmg_clip_01"):
					return 53;
					break;
				
				case joaat("component_combatmg_clip_02"):
					return 54;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 55;
					break;
				
				case joaat("component_at_scope_medium"):
					return 56;
					break;
				
				case joaat("component_combatmg_varmod_lowrider"):
					return 188;
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (iParam0)
			{
				case joaat("component_at_sr_supp"):
					return 59;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 60;
					break;
				
				case joaat("component_pumpshotgun_varmod_lowrider"):
					return 193;
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam0)
			{
				case joaat("component_assaultshotgun_clip_01"):
					return 64;
					break;
				
				case joaat("component_assaultshotgun_clip_02"):
					return 65;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 66;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 67;
					break;
				
				case joaat("component_at_ar_supp"):
					return 68;
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam0)
			{
				case joaat("component_sniperrifle_clip_01"):
					return 69;
					break;
				
				case joaat("component_at_scope_large"):
					return 70;
					break;
				
				case joaat("component_at_scope_max"):
					return 71;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 72;
					break;
				
				case joaat("component_sniperrifle_varmod_luxe"):
					return 180;
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (iParam0)
			{
				case joaat("component_heavysniper_clip_01"):
					return 76;
					break;
				
				case joaat("component_at_scope_max"):
					return 77;
					break;
				
				case joaat("component_at_scope_large"):
					return 82;
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam0)
			{
				case joaat("component_at_ar_afgrip"):
					return 78;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 79;
					break;
				
				case joaat("component_at_scope_small"):
					return 80;
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam0)
			{
				case joaat("component_minigun_clip_01"):
					return 81;
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam0)
			{
				case joaat("component_assaultsmg_clip_01"):
					return 83;
					break;
				
				case joaat("component_assaultsmg_clip_02"):
					return 84;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 85;
					break;
				
				case joaat("component_at_scope_macro"):
					return 86;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 87;
					break;
				
				case joaat("component_assaultsmg_varmod_lowrider"):
					return 189;
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam0)
			{
				case joaat("component_at_ar_afgrip"):
					return 88;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 89;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 90;
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam0)
			{
				case joaat("component_pistol50_clip_01"):
					return 91;
					break;
				
				case joaat("component_pistol50_clip_02"):
					return 92;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 93;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 94;
					break;
				
				case joaat("component_pistol50_varmod_luxe"):
					return 176;
					break;
			}
			break;
		
		case 392730790:
			switch (iParam0)
			{
				case 195735895:
					return 95;
					break;
				
				case joaat("component_at_scope_large"):
					return 96;
					break;
				
				case joaat("component_at_scope_max"):
					return 97;
					break;
				
				case joaat("component_at_ar_supp"):
					return 98;
					break;
			}
			break;
		
		case -947031628:
			switch (iParam0)
			{
				case 1525977990:
					return 99;
					break;
				
				case 1824470811:
					return 100;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 101;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 102;
					break;
				
				case joaat("component_at_scope_medium"):
					return 103;
					break;
				
				case joaat("component_at_ar_supp"):
					return 104;
					break;
			}
			break;
		
		case -572349828:
			switch (iParam0)
			{
				case -890514874:
					return 105;
					break;
				
				case -507117574:
					return 106;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 107;
					break;
				
				case joaat("component_at_scope_medium"):
					return 108;
					break;
			}
			break;
		
		case -1887867191:
			switch (iParam0)
			{
				case -124428919:
					return 109;
					break;
				
				case 1048471894:
					return 110;
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			switch (iParam0)
			{
				case joaat("component_specialcarbine_clip_01"):
					return 111;
					break;
				
				case joaat("component_specialcarbine_clip_02"):
					return 112;
					break;
				
				case joaat("component_specialcarbine_clip_03"):
					return 208;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 113;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 114;
					break;
				
				case joaat("component_at_scope_medium"):
					return 115;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 116;
					break;
				
				case joaat("component_specialcarbine_varmod_lowrider"):
					return 190;
					break;
			}
			break;
		
		case joaat("weapon_snspistol"):
			switch (iParam0)
			{
				case joaat("component_snspistol_clip_01"):
					return 117;
					break;
				
				case joaat("component_snspistol_clip_02"):
					return 118;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 119;
					break;
				
				case joaat("component_at_pi_supp"):
					return 120;
					break;
				
				case joaat("component_snspistol_varmod_lowrider"):
					return 191;
					break;
			}
			break;
		
		case joaat("weapon_heavypistol"):
			switch (iParam0)
			{
				case joaat("component_heavypistol_clip_01"):
					return 121;
					break;
				
				case joaat("component_heavypistol_clip_02"):
					return 122;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 123;
					break;
				
				case joaat("component_at_pi_supp"):
					return 124;
					break;
				
				case joaat("component_heavypistol_varmod_luxe"):
					return 171;
					break;
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			switch (iParam0)
			{
				case joaat("component_bullpuprifle_clip_01"):
					return 131;
					break;
				
				case joaat("component_bullpuprifle_clip_02"):
					return 132;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 127;
					break;
				
				case joaat("component_at_ar_supp"):
					return 128;
					break;
				
				case joaat("component_at_scope_small"):
					return 129;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 130;
					break;
				
				case joaat("component_bullpuprifle_varmod_low"):
					return 192;
					break;
			}
			break;
		
		case joaat("weapon_gusenberg"):
			switch (iParam0)
			{
				case joaat("component_gusenberg_clip_01"):
					return 125;
					break;
				
				case joaat("component_gusenberg_clip_02"):
					return 126;
					break;
			}
			break;
		
		case joaat("weapon_vintagepistol"):
			switch (iParam0)
			{
				case joaat("component_vintagepistol_clip_01"):
					return 133;
					break;
				
				case joaat("component_vintagepistol_clip_02"):
					return 134;
					break;
				
				case joaat("component_at_pi_supp"):
					return 136;
					break;
			}
			break;
		
		case joaat("weapon_heavyshotgun"):
			switch (iParam0)
			{
				case joaat("component_heavyshotgun_clip_01"):
					return 137;
					break;
				
				case joaat("component_heavyshotgun_clip_02"):
					return 140;
					break;
				
				case joaat("component_heavyshotgun_clip_03"):
					return 205;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 145;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 146;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 147;
					break;
			}
			break;
		
		case joaat("weapon_marksmanrifle"):
			switch (iParam0)
			{
				case joaat("component_marksmanrifle_clip_01"):
					return 138;
					break;
				
				case joaat("component_marksmanrifle_clip_02"):
					return 139;
					break;
				
				case joaat("component_at_scope_large_fixed_zoom"):
					return 141;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 142;
					break;
				
				case joaat("component_at_ar_supp"):
					return 143;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 144;
					break;
				
				case 371102273:
					return 172;
					break;
			}
			break;
		
		case joaat("weapon_combatpdw"):
			switch (iParam0)
			{
				case joaat("component_combatpdw_clip_01"):
					return 149;
					break;
				
				case joaat("component_combatpdw_clip_02"):
					return 150;
					break;
				
				case joaat("component_combatpdw_clip_03"):
					return 203;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 151;
					break;
				
				case joaat("component_at_scope_small"):
					return 152;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 153;
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (iParam0)
			{
				case joaat("component_sawnoffshotgun_varmod_luxe"):
					return 178;
					break;
			}
			break;
		
		case joaat("weapon_marksmanpistol"):
			switch (iParam0)
			{
				case joaat("component_marksmanpistol_clip_01"):
					return 148;
					break;
			}
			break;
		
		case joaat("weapon_knuckle"):
			switch (iParam0)
			{
				case joaat("component_knuckle_varmod_pimp"):
					return 154;
					break;
				
				case joaat("component_knuckle_varmod_ballas"):
					return 155;
					break;
				
				case joaat("component_knuckle_varmod_dollar"):
					return 156;
					break;
				
				case joaat("component_knuckle_varmod_diamond"):
					return 157;
					break;
				
				case joaat("component_knuckle_varmod_hate"):
					return 158;
					break;
				
				case joaat("component_knuckle_varmod_love"):
					return 159;
					break;
				
				case joaat("component_knuckle_varmod_player"):
					return 160;
					break;
				
				case joaat("component_knuckle_varmod_king"):
					return 161;
					break;
				
				case joaat("component_knuckle_varmod_vagos"):
					return 162;
					break;
			}
			break;
		
		case joaat("weapon_machinepistol"):
			switch (iParam0)
			{
				case joaat("component_machinepistol_clip_01"):
					return 184;
					break;
				
				case joaat("component_machinepistol_clip_02"):
					return 185;
					break;
				
				case joaat("component_machinepistol_clip_03"):
					return 206;
					break;
				
				case joaat("component_at_pi_supp"):
					return 183;
					break;
			}
			break;
		
		case joaat("weapon_switchblade"):
			switch (iParam0)
			{
				case joaat("component_switchblade_varmod_var1"):
					return 194;
					break;
				
				case joaat("component_switchblade_varmod_var2"):
					return 195;
					break;
			}
			break;
		
		case joaat("weapon_revolver"):
			switch (iParam0)
			{
				case joaat("component_revolver_clip_01"):
					return 196;
					break;
				
				case joaat("component_revolver_varmod_boss"):
					return 197;
					break;
				
				case joaat("component_revolver_varmod_goon"):
					return 198;
					break;
			}
			break;
		
		case joaat("weapon_compactrifle"):
			switch (iParam0)
			{
				case joaat("component_compactrifle_clip_01"):
					return 199;
					break;
				
				case joaat("component_compactrifle_clip_02"):
					return 200;
					break;
				
				case joaat("component_compactrifle_clip_03"):
					return 204;
					break;
			}
			break;
	}
	return 0;
}

var func_347(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_1053(func_348(iParam0, iParam1), iParam2, 0);
	return uVar0;
}

int func_348(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_345(iParam0, iParam1);
	iVar1 = func_337(iVar0);
	if ((func_88() == 0 || func_336() == 0) || (func_88() == 999 && func_336() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 680;
				break;
			
			case 1:
				return 681;
				break;
			
			case 2:
				return 682;
				break;
			
			case 3:
				return 683;
				break;
			
			case 4:
				return 1745;
				break;
			
			case 5:
				return 2413;
				break;
			
			case 6:
				return 2805;
				break;
			}
	}
	return 1745;
}

int func_349(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_338())
	{
		return false;
	}
	iVar0 = func_350(iParam0, iParam1, iParam2);
	iVar1 = func_345(iParam0, iParam1);
	return is_bit_set(iVar0, func_333(iVar1));
}

var func_350(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_1053(func_351(iParam0, iParam1), iParam2, 0);
	return uVar0;
}

int func_351(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_345(iParam0, iParam1);
	iVar1 = func_337(iVar0);
	if ((func_88() == 0 || func_336() == 0) || (func_88() == 999 && func_336() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 803;
				break;
			
			case 1:
				return 804;
				break;
			
			case 2:
				return 805;
				break;
			
			case 3:
				return 806;
				break;
			
			case 4:
				return 1743;
				break;
			
			case 5:
				return 2411;
				break;
			
			case 6:
				return 2803;
				break;
			}
	}
	return 3949;
}

int func_352(var uParam0, int iParam1, int iParam2)
{
	*uParam0 = 0;
	switch (iParam1)
	{
		case joaat("weapon_pistol"):
			switch (iParam2)
			{
				case 0:
					*uParam0 = joaat("component_pistol_clip_01");
					break;
				
				case 1:
					*uParam0 = joaat("component_pistol_clip_02");
					break;
				
				case 2:
					*uParam0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					*uParam0 = joaat("component_at_pi_supp_02");
					break;
				
				case 4:
					*uParam0 = joaat("component_pistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam2)
			{
				case 0:
					*uParam0 = joaat("component_combatpistol_clip_01");
					break;
				
				case 1:
					*uParam0 = joaat("component_combatpistol_clip_02");
					break;
				
				case 2:
					*uParam0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					*uParam0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					*uParam0 = joaat("component_combatpistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam2)
			{
				case 0:
					*uParam0 = joaat("component_appistol_clip_01");
					break;
				
				case 1:
					*uParam0 = joaat("component_appistol_clip_02");
					break;
				
				case 2:
					*uParam0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					*uParam0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					*uParam0 = joaat("component_appistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam2)
			{
				case 0:
					*uParam0 = joaat("component_microsmg_clip_01");
					break;
				
				case 1:
					*uParam0 = joaat("component_microsmg_clip_02");
					break;
				
				case 2:
					*uParam0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					*uParam0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					*uParam0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					*uParam0 = joaat("component_microsmg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (iParam2)
			{
				case 0:
					*uParam0 = joaat("component_smg_clip_01");
					break;
				
				case 1:
					*uParam0 = joaat("component_smg_clip_02");
					break;
				
				case 2:
					*uParam0 = joaat("component_smg_clip_03");
					break;
				
				case 3:
					*uParam0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					*uParam0 = joaat("component_at_pi_supp");
					break;
				
				case 5:
					*uParam0 = joaat("component_at_scope_macro_02");
					break;
				
				case 6:
					*uParam0 = joaat("component_smg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam2)
			{
				case 0:
					*uParam0 = joaat("component_assaultrifle_clip_01");
					break;
				
				case 1:
					*uParam0 = joaat("component_assaultrifle_clip_02");
					break;
				
				case 2:
					*uParam0 = joaat("component_assaultrifle_clip_03");
					break;
				
				case 3:
					*uParam0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					*uParam0 = joaat("component_at_ar_flsh");
					break;
				
				case 5:
					*uParam0 = joaat("component_at_scope_macro");
					break;
				
				case 6:
					*uParam0 = joaat("component_at_ar_supp_02");
					break;
				
				case 7:
					*uParam0 = joaat("component_assaultrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam2)
			{
				case 0:
					*uParam0 = joaat("component_carbinerifle_clip_01");
					break;
				
				case 1:
					*uParam0 = joaat("component_carbinerifle_clip_02");
					break;
				
				case 2:
					*uParam0 = joaat("component_carbinerifle_clip_03");
					break;
				
				case 3:
					*uParam0 = joaat("component_at_railcover_01");
					break;
				
				case 4:
					*uParam0 = joaat("component_at_ar_afgrip");
					break;
				
				case 5:
					*uParam0 = joaat("component_at_ar_flsh");
					break;
				
				case 6:
					*uParam0 = joaat("component_at_scope_medium");
					break;
				
				case 7:
					*uParam0 = joaat("component_at_ar_supp");
					break;
				
				case 8:
					*uParam0 = joaat("component_carbinerifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam2)
			{
				case 0:
					*uParam0 = joaat("component_advancedrifle_clip_01");
					break;
				
				case 1:
					*uParam0 = joaat("component_advancedrifle_clip_02");
					break;
				
				case 2:
					*uParam0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					*uParam0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					*uParam0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					*uParam0 = joaat("component_advancedrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam2)
			{
				case 0:
					*uParam0 = joaat("component_mg_clip_01");
					break;
				
				case 1:
					*uParam0 = joaat("component_mg_clip_02");
					break;
				
				case 2:
					*uParam0 = joaat("component_at_scope_small_02");
					break;
				
				case 3:
					*uParam0 = joaat("component_mg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam2)
			{
				case 0:
					*uParam0 = joaat("component_combatmg_clip_01");
					break;
				
				case 1:
					*uParam0 = joaat("component_combatmg_clip_02");
					break;
				
				case 2:
					*uParam0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					*uParam0 = joaat("component_at_scope_medium");
					break;
				
				case 4:
					*uParam0 = joaat("component_combatmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (iParam2)
			{
				case 0:
					*uParam0 = joaat("component_at_sr_supp");
					break;
				
				case 1:
					*uParam0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					*uParam0 = joaat("component_pumpshotgun_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam2)
			{
				case 0:
					*uParam0 = joaat("component_assaultshotgun_clip_01");
					break;
				
				case 1:
					*uParam0 = joaat("component_assaultshotgun_clip_02");
					break;
				
				case 2:
					*uParam0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					*uParam0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					*uParam0 = joaat("component_at_ar_supp");
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam2)
			{
				case 0:
					*uParam0 = joaat("component_sniperrifle_clip_01");
					break;
				
				case 1:
					*uParam0 = joaat("component_at_scope_large");
					break;
				
				case 2:
					*uParam0 = joaat("component_at_scope_max");
					break;
				
				case 3:
					*uParam0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					*uParam0 = joaat("component_sniperrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (iParam2)
			{
				case 0:
					*uParam0 = joaat("component_heavysniper_clip_01");
					break;
				
				case 1:
					*uParam0 = joaat("component_at_scope_large");
					break;
				
				case 2:
					*uParam0 = joaat("component_at_scope_max");
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam2)
			{
				case 0:
					*uParam0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					*uParam0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					*uParam0 = joaat("component_at_scope_small");
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam2)
			{
				case 0:
					*uParam0 = joaat("component_minigun_clip_01");
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam2)
			{
				case 0:
					*uParam0 = joaat("component_assaultsmg_clip_01");
					break;
				
				case 1:
					*uParam0 = joaat("component_assaultsmg_clip_02");
					break;
				
				case 2:
					*uParam0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					*uParam0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					*uParam0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					*uParam0 = joaat("component_assaultsmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam2)
			{
				case 0:
					*uParam0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					*uParam0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					*uParam0 = joaat("component_at_ar_supp_02");
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam2)
			{
				case 0:
					*uParam0 = joaat("component_pistol50_clip_01");
					break;
				
				case 1:
					*uParam0 = joaat("component_pistol50_clip_02");
					break;
				
				case 2:
					*uParam0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					*uParam0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					*uParam0 = joaat("component_pistol50_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			switch (iParam2)
			{
				case 0:
					*uParam0 = joaat("component_specialcarbine_clip_01");
					break;
				
				case 1:
					*uParam0 = joaat("component_specialcarbine_clip_02");
					break;
				
				case 2:
					*uParam0 = joaat("component_specialcarbine_clip_03");
					break;
				
				case 3:
					*uParam0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					*uParam0 = joaat("component_at_ar_flsh");
					break;
				
				case 5:
					*uParam0 = joaat("component_at_scope_medium");
					break;
				
				case 6:
					*uParam0 = joaat("component_at_ar_supp_02");
					break;
				
				case 7:
					*uParam0 = joaat("component_specialcarbine_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_snspistol"):
			switch (iParam2)
			{
				case 0:
					*uParam0 = joaat("component_snspistol_clip_01");
					break;
				
				case 1:
					*uParam0 = joaat("component_snspistol_clip_02");
					break;
				
				case 2:
					*uParam0 = joaat("component_snspistol_varmod_lowrider");
					break;
				
				case 3:
					*uParam0 = joaat("component_snspistol_varmod_lowrider");
					break;
				
				case 4:
					*uParam0 = joaat("component_snspistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_heavypistol"):
			switch (iParam2)
			{
				case 0:
					*uParam0 = joaat("component_heavypistol_clip_01");
					break;
				
				case 1:
					*uParam0 = joaat("component_heavypistol_clip_02");
					break;
				
				case 2:
					*uParam0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					*uParam0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					*uParam0 = joaat("component_heavypistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			switch (iParam2)
			{
				case 0:
					*uParam0 = joaat("component_bullpuprifle_clip_01");
					break;
				
				case 1:
					*uParam0 = joaat("component_bullpuprifle_clip_02");
					break;
				
				case 2:
					*uParam0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					*uParam0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					*uParam0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					*uParam0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					*uParam0 = joaat("component_bullpuprifle_varmod_low");
					break;
			}
			break;
		
		case joaat("weapon_gusenberg"):
			switch (iParam2)
			{
				case 0:
					*uParam0 = joaat("component_gusenberg_clip_01");
					break;
				
				case 1:
					*uParam0 = joaat("component_gusenberg_clip_02");
					break;
			}
			break;
		
		case joaat("weapon_vintagepistol"):
			switch (iParam2)
			{
				case 0:
					*uParam0 = joaat("component_vintagepistol_clip_01");
					break;
				
				case 1:
					*uParam0 = joaat("component_vintagepistol_clip_02");
					break;
				
				case 3:
					*uParam0 = joaat("component_at_pi_supp");
					break;
			}
			break;
		
		case joaat("weapon_heavyshotgun"):
			switch (iParam2)
			{
				case 0:
					*uParam0 = joaat("component_heavyshotgun_clip_01");
					break;
				
				case 1:
					*uParam0 = joaat("component_heavyshotgun_clip_02");
					break;
				
				case 2:
					*uParam0 = joaat("component_heavyshotgun_clip_03");
					break;
				
				case 3:
					*uParam0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					*uParam0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					*uParam0 = joaat("component_at_ar_afgrip");
					break;
			}
			break;
		
		case joaat("weapon_marksmanrifle"):
			switch (iParam2)
			{
				case 0:
					*uParam0 = joaat("component_marksmanrifle_clip_01");
					break;
				
				case 1:
					*uParam0 = joaat("component_marksmanrifle_clip_02");
					break;
				
				case 2:
					*uParam0 = joaat("component_at_scope_large_fixed_zoom");
					break;
				
				case 3:
					*uParam0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					*uParam0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					*uParam0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					*uParam0 = 371102273;
					break;
			}
			break;
		
		case joaat("weapon_combatpdw"):
			switch (iParam2)
			{
				case 0:
					*uParam0 = joaat("component_combatpdw_clip_01");
					break;
				
				case 1:
					*uParam0 = joaat("component_combatpdw_clip_02");
					break;
				
				case 2:
					*uParam0 = joaat("component_combatpdw_clip_03");
					break;
				
				case 3:
					*uParam0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					*uParam0 = joaat("component_at_scope_small");
					break;
				
				case 5:
					*uParam0 = joaat("component_at_ar_afgrip");
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (iParam2)
			{
				case 0:
					*uParam0 = joaat("component_sawnoffshotgun_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_marksmanpistol"):
			switch (iParam2)
			{
				case 0:
					*uParam0 = joaat("component_marksmanpistol_clip_01");
					break;
			}
			break;
		
		case joaat("weapon_knuckle"):
			switch (iParam2)
			{
				case 0:
					*uParam0 = joaat("component_knuckle_varmod_pimp");
					break;
				
				case 1:
					*uParam0 = joaat("component_knuckle_varmod_ballas");
					break;
				
				case 2:
					*uParam0 = joaat("component_knuckle_varmod_dollar");
					break;
				
				case 3:
					*uParam0 = joaat("component_knuckle_varmod_diamond");
					break;
				
				case 4:
					*uParam0 = joaat("component_knuckle_varmod_hate");
					break;
				
				case 5:
					*uParam0 = joaat("component_knuckle_varmod_love");
					break;
				
				case 6:
					*uParam0 = joaat("component_knuckle_varmod_player");
					break;
				
				case 7:
					*uParam0 = joaat("component_knuckle_varmod_king");
					break;
				
				case 8:
					*uParam0 = joaat("component_knuckle_varmod_vagos");
					break;
			}
			break;
		
		case joaat("weapon_machinepistol"):
			switch (iParam2)
			{
				case 0:
					*uParam0 = joaat("component_machinepistol_clip_01");
					break;
				
				case 1:
					*uParam0 = joaat("component_machinepistol_clip_02");
					break;
				
				case 2:
					*uParam0 = joaat("component_machinepistol_clip_03");
					break;
				
				case 3:
					*uParam0 = joaat("component_at_pi_supp");
					break;
			}
			break;
		
		case joaat("weapon_switchblade"):
			switch (iParam2)
			{
				case 0:
					*uParam0 = joaat("component_switchblade_varmod_var1");
					break;
				
				case 1:
					*uParam0 = joaat("component_switchblade_varmod_var2");
					break;
			}
			break;
		
		case joaat("weapon_revolver"):
			switch (iParam2)
			{
				case 0:
					*uParam0 = joaat("component_revolver_clip_01");
					break;
				
				case 1:
					*uParam0 = joaat("component_revolver_varmod_boss");
					break;
				
				case 2:
					*uParam0 = joaat("component_revolver_varmod_goon");
					break;
			}
			break;
		
		case joaat("weapon_compactrifle"):
			switch (iParam2)
			{
				case 0:
					*uParam0 = joaat("component_compactrifle_clip_01");
					break;
				
				case 1:
					*uParam0 = joaat("component_compactrifle_clip_02");
					break;
				
				case 2:
					*uParam0 = joaat("component_compactrifle_clip_03");
					break;
			}
			break;
	}
	return *uParam0 != 0;
}

bool func_353(int iParam0)
{
	if (iParam0 == joaat("weapon_molotov") && get_ammo_in_ped_weapon(player_ped_id(), iParam0) > 0)
	{
		return true;
	}
	if (((iParam0 == joaat("weapon_golfclub") || iParam0 == joaat("weapon_crowbar")) || iParam0 == joaat("weapon_bat")) && func_1053(func_354(iParam0), -1, 0) > 0)
	{
		return true;
	}
	return false;
}

int func_354(int iParam0)
{
	if (func_88() == 0 || func_336() == 0)
	{
		switch (iParam0)
		{
			case joaat("weapon_knife"):
				return 192;
				break;
			
			case joaat("weapon_nightstick"):
				return 199;
				break;
			
			case joaat("weapon_pistol"):
				return 250;
				break;
			
			case joaat("weapon_combatpistol"):
				return 260;
				break;
			
			case joaat("weapon_appistol"):
				return 280;
				break;
			
			case joaat("weapon_snspistol"):
				return 1738;
				break;
			
			case joaat("weapon_microsmg"):
				return 290;
				break;
			
			case joaat("weapon_smg"):
				return 300;
				break;
			
			case joaat("weapon_assaultrifle"):
				return 319;
				break;
			
			case joaat("weapon_carbinerifle"):
				return 328;
				break;
			
			case joaat("weapon_specialcarbine"):
				return 3369;
				break;
			
			case joaat("weapon_advancedrifle"):
				return 337;
				break;
			
			case joaat("weapon_mg"):
				return 346;
				break;
			
			case joaat("weapon_combatmg"):
				return 355;
				break;
			
			case joaat("weapon_pumpshotgun"):
				return 373;
				break;
			
			case joaat("weapon_sawnoffshotgun"):
				return 383;
				break;
			
			case joaat("weapon_assaultshotgun"):
				return 401;
				break;
			
			case joaat("weapon_stungun"):
				return 411;
				break;
			
			case joaat("weapon_sniperrifle"):
				return 420;
				break;
			
			case joaat("weapon_heavysniper"):
				return 429;
				break;
			
			case joaat("weapon_grenadelauncher"):
				return 438;
				break;
			
			case joaat("weapon_rpg"):
				return 445;
				break;
			
			case joaat("weapon_minigun"):
				return 454;
				break;
			
			case joaat("weapon_grenade"):
				return 462;
				break;
			
			case joaat("weapon_smokegrenade"):
				return 471;
				break;
			
			case joaat("weapon_stickybomb"):
				return 479;
				break;
			
			case joaat("weapon_molotov"):
				return 488;
				break;
			
			case joaat("weapon_petrolcan"):
				return 579;
				break;
			
			case joaat("weapon_pistol50"):
				return 270;
				break;
			
			case -572349828:
				return 364;
				break;
			
			case joaat("weapon_assaultsmg"):
				return 310;
				break;
			
			case 392730790:
				return 432;
				break;
			
			case joaat("weapon_hammer"):
				return 227;
				break;
			
			case joaat("weapon_bullpupshotgun"):
				return 392;
				break;
			
			case joaat("weapon_bottle"):
				return 1728;
				break;
			
			case joaat("weapon_heavypistol"):
				return 3359;
				break;
			
			case joaat("weapon_bullpuprifle"):
				return 3379;
				break;
			
			case joaat("weapon_gusenberg"):
				return 3389;
				break;
			
			case joaat("gadget_parachute"):
				return 576;
				break;
			
			case joaat("weapon_vintagepistol"):
				return 3672;
				break;
			
			case joaat("weapon_dagger"):
				return 3662;
				break;
			
			case joaat("weapon_musket"):
				return 3692;
				break;
			
			case joaat("weapon_firework"):
				return 3682;
				break;
			
			case joaat("weapon_heavyshotgun"):
				return 3770;
				break;
			
			case joaat("weapon_marksmanrifle"):
				return 3780;
				break;
			
			case joaat("weapon_proxmine"):
				return 3796;
				break;
			
			case joaat("weapon_hominglauncher"):
				return 3804;
				break;
			
			case joaat("weapon_combatpdw"):
				return 3814;
				break;
			
			case joaat("weapon_knuckle"):
				return 3821;
				break;
			
			case joaat("weapon_marksmanpistol"):
				return 3831;
				break;
			
			case joaat("weapon_hatchet"):
				return 3788;
				break;
			
			case joaat("weapon_machete"):
				return 3839;
				break;
			
			case joaat("weapon_machinepistol"):
				return 3849;
				break;
			
			case joaat("weapon_dbshotgun"):
				return 3877;
				break;
			
			case joaat("weapon_compactrifle"):
				return 3867;
				break;
			
			case joaat("weapon_flashlight"):
				return 3885;
				break;
			
			case joaat("weapon_golfclub"):
				return 241;
				break;
			
			case joaat("weapon_bat"):
				return 234;
				break;
			
			case joaat("weapon_crowbar"):
				return 206;
				break;
			}
	}
	return 479;
}

int func_355(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (iParam2 == 0)
	{
	}
	if (func_338())
	{
		return false;
	}
	if (func_198() == 0)
	{
		return false;
	}
	if (iParam0 != joaat("gadget_parachute"))
	{
		if (func_196(func_360(iParam0), -1))
		{
			return false;
		}
	}
	iVar0 = func_358(iParam0, iParam1);
	iVar1 = func_356(iParam0);
	return is_bit_set(iVar0, func_333(iVar1));
}

int func_356(int iParam0)
{
	return func_357(iParam0);
}

int func_357(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_unarmed"):
			return 0;
			break;
		
		case joaat("weapon_pistol"):
			return 1;
			break;
		
		case joaat("weapon_combatpistol"):
			return 2;
			break;
		
		case joaat("weapon_appistol"):
			return 3;
			break;
		
		case joaat("weapon_pistol50"):
			return 4;
			break;
		
		case joaat("weapon_smg"):
			return 5;
			break;
		
		case joaat("weapon_assaultsmg"):
			return 6;
			break;
		
		case joaat("weapon_microsmg"):
			return 7;
			break;
		
		case joaat("weapon_assaultrifle"):
			return 8;
			break;
		
		case joaat("weapon_carbinerifle"):
			return 9;
			break;
		
		case -947031628:
			return 10;
			break;
		
		case joaat("weapon_advancedrifle"):
			return 11;
			break;
		
		case joaat("weapon_mg"):
			return 12;
			break;
		
		case joaat("weapon_combatmg"):
			return 13;
			break;
		
		case -572349828:
			return 14;
			break;
		
		case joaat("weapon_stickybomb"):
			return 15;
			break;
		
		case joaat("weapon_grenade"):
			return 16;
			break;
		
		case joaat("weapon_smokegrenade"):
			return 17;
			break;
		
		case joaat("weapon_remotesniper"):
			return 18;
			break;
		
		case 392730790:
			return 19;
			break;
		
		case joaat("weapon_sniperrifle"):
			return 20;
			break;
		
		case joaat("weapon_heavysniper"):
			return 21;
			break;
		
		case joaat("weapon_pumpshotgun"):
			return 22;
			break;
		
		case joaat("weapon_bullpupshotgun"):
			return 23;
			break;
		
		case joaat("weapon_assaultshotgun"):
			return 24;
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			return 25;
			break;
		
		case joaat("weapon_grenadelauncher"):
			return 26;
			break;
		
		case joaat("weapon_rpg"):
			return 27;
			break;
		
		case joaat("weapon_minigun"):
			return 28;
			break;
		
		case -344484024:
			return 29;
			break;
		
		case -1887867191:
			return 30;
			break;
		
		case joaat("weapon_stungun"):
			return 31;
			break;
		
		case -837150131:
			return 32;
			break;
		
		case joaat("gadget_parachute"):
			return 33;
			break;
		
		case joaat("weapon_knife"):
			return 34;
			break;
		
		case joaat("weapon_nightstick"):
			return 35;
			break;
		
		case joaat("weapon_hammer"):
			return 36;
			break;
		
		case joaat("weapon_bat"):
			return 37;
			break;
		
		case joaat("weapon_crowbar"):
			return 38;
			break;
		
		case joaat("weapon_golfclub"):
			return 39;
			break;
		
		case joaat("weapon_grenadelauncher_smoke"):
			return 40;
			break;
		
		case joaat("weapon_molotov"):
			return 41;
			break;
		
		case joaat("weapon_fireextinguisher"):
			return 42;
			break;
		
		case joaat("weapon_petrolcan"):
			return 43;
			break;
		
		case joaat("weapon_digiscanner"):
			return 44;
			break;
		
		case joaat("weapon_bottle"):
			return 45;
			break;
		
		case joaat("weapon_specialcarbine"):
			return 46;
			break;
		
		case joaat("weapon_snspistol"):
			return 47;
			break;
		
		case joaat("weapon_heavypistol"):
			return 49;
			break;
		
		case joaat("weapon_bullpuprifle"):
			return 48;
			break;
		
		case joaat("weapon_gusenberg"):
			return 50;
			break;
		
		case joaat("weapon_dagger"):
			return 51;
			break;
		
		case joaat("weapon_vintagepistol"):
			return 52;
			break;
		
		case joaat("weapon_flaregun"):
			return 57;
			break;
		
		case joaat("weapon_musket"):
			return 53;
			break;
		
		case joaat("weapon_firework"):
			return 54;
			break;
		
		case joaat("weapon_marksmanrifle"):
			return 56;
			break;
		
		case joaat("weapon_heavyshotgun"):
			return 55;
			break;
		
		case joaat("weapon_proxmine"):
			return 60;
			break;
		
		case joaat("weapon_hominglauncher"):
			return 61;
			break;
		
		case joaat("weapon_hatchet"):
			return 58;
			break;
		
		case joaat("weapon_railgun"):
			return 59;
			break;
		
		case joaat("weapon_combatpdw"):
			return 64;
			break;
		
		case joaat("weapon_knuckle"):
			return 62;
			break;
		
		case joaat("weapon_marksmanpistol"):
			return 63;
			break;
		
		case joaat("weapon_machete"):
			return 65;
			break;
		
		case joaat("weapon_machinepistol"):
			return 68;
			break;
		
		case joaat("weapon_dbshotgun"):
			return 66;
			break;
		
		case joaat("weapon_compactrifle"):
			return 67;
			break;
		
		case joaat("weapon_flashlight"):
			return 69;
			break;
		
		case joaat("weapon_revolver"):
			return 70;
			break;
		
		case joaat("weapon_switchblade"):
			return 71;
			break;
	}
	return 0;
}

var func_358(int iParam0, int iParam1)
{
	var uVar0;
	
	uVar0 = func_1053(func_359(iParam0), iParam1, 0);
	return uVar0;
}

int func_359(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_356(iParam0);
	iVar1 = func_337(iVar0);
	if ((func_88() == 0 || func_336() == 0) || (func_88() == 999 && func_336() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 792;
				break;
			
			case 1:
				return 793;
				break;
			
			case 2:
				return 2396;
				break;
			}
	}
	return 3949;
}

int func_360(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_unarmed"):
			return 18;
			break;
		
		case joaat("weapon_grenade"):
			return 66;
			break;
		
		case joaat("weapon_smokegrenade"):
			return 68;
			break;
		
		case joaat("weapon_stickybomb"):
			return 70;
			break;
		
		case joaat("weapon_molotov"):
			return 72;
			break;
		
		case joaat("weapon_pistol"):
			return 18;
			break;
		
		case joaat("weapon_combatpistol"):
			return 40;
			break;
		
		case joaat("weapon_pistol50"):
			return 22;
			break;
		
		case joaat("weapon_appistol"):
			return 24;
			break;
		
		case joaat("weapon_microsmg"):
			return 26;
			break;
		
		case joaat("weapon_smg"):
			return 28;
			break;
		
		case joaat("weapon_assaultsmg"):
			return 30;
			break;
		
		case joaat("weapon_assaultrifle"):
			return 32;
			break;
		
		case joaat("weapon_carbinerifle"):
			return 34;
			break;
		
		case joaat("weapon_advancedrifle"):
			return 36;
			break;
		
		case joaat("weapon_mg"):
			return 38;
			break;
		
		case -572349828:
			return 42;
			break;
		
		case joaat("weapon_pumpshotgun"):
			return 44;
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			return 46;
			break;
		
		case joaat("weapon_bullpupshotgun"):
			return 48;
			break;
		
		case joaat("weapon_assaultshotgun"):
			return 50;
			break;
		
		case joaat("weapon_sniperrifle"):
			return 54;
			break;
		
		case joaat("weapon_heavysniper"):
			return 56;
			break;
		
		case joaat("weapon_grenadelauncher"):
			return 60;
			break;
		
		case joaat("weapon_rpg"):
			return 62;
			break;
		
		case joaat("weapon_minigun"):
			return 64;
			break;
		
		case joaat("weapon_stungun"):
			return 52;
			break;
		
		case joaat("weapon_petrolcan"):
			return 75;
			break;
		
		case joaat("weapon_knife"):
			return 2;
			break;
		
		case joaat("weapon_nightstick"):
			return 4;
			break;
		
		case joaat("weapon_hammer"):
			return 12;
			break;
		
		case joaat("weapon_bat"):
			return 14;
			break;
		
		case joaat("weapon_crowbar"):
			return 6;
			break;
		
		case joaat("weapon_golfclub"):
			return 16;
			break;
		
		case 392730790:
			return 58;
			break;
		
		case joaat("weapon_combatmg"):
			return 40;
			break;
		
		case joaat("weapon_bottle"):
			return 143;
			break;
		
		case joaat("weapon_specialcarbine"):
			return 208;
			break;
		
		case joaat("weapon_snspistol"):
			return 145;
			break;
		
		case joaat("weapon_heavypistol"):
			return 206;
			break;
		
		case joaat("weapon_bullpuprifle"):
			return 210;
			break;
		
		case joaat("weapon_gusenberg"):
			return 212;
			break;
		
		case joaat("weapon_dagger"):
			return 233;
			break;
		
		case joaat("weapon_vintagepistol"):
			return 235;
			break;
		
		case joaat("weapon_firework"):
			return 237;
			break;
		
		case joaat("weapon_musket"):
			return 239;
			break;
		
		case joaat("weapon_heavyshotgun"):
			return 251;
			break;
		
		case joaat("weapon_marksmanrifle"):
			return 253;
			break;
		
		case joaat("weapon_proxmine"):
			return 257;
			break;
		
		case joaat("weapon_hominglauncher"):
			return 259;
			break;
		
		case joaat("weapon_combatpdw"):
			return 261;
			break;
		
		case joaat("weapon_knuckle"):
			return 263;
			break;
		
		case joaat("weapon_marksmanpistol"):
			return 265;
			break;
		
		case joaat("weapon_hatchet"):
			return 255;
			break;
		
		case joaat("weapon_machete"):
			return 267;
			break;
		
		case joaat("weapon_machinepistol"):
			return 269;
			break;
		
		case joaat("weapon_compactrifle"):
			return 272;
			break;
		
		case joaat("weapon_dbshotgun"):
			return 274;
			break;
		
		case joaat("weapon_flashlight"):
			return 276;
			break;
		
		case joaat("weapon_revolver"):
			return 279;
			break;
		
		case joaat("weapon_switchblade"):
			return 281;
			break;
	}
	return 2;
}

bool func_361(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
		case joaat("weapon_combatpistol"):
		case joaat("weapon_appistol"):
		case joaat("weapon_microsmg"):
		case joaat("weapon_smg"):
		case joaat("weapon_assaultrifle"):
		case joaat("weapon_carbinerifle"):
		case joaat("weapon_advancedrifle"):
		case joaat("weapon_mg"):
		case joaat("weapon_combatmg"):
		case joaat("weapon_pumpshotgun"):
		case joaat("weapon_sawnoffshotgun"):
		case joaat("weapon_assaultshotgun"):
		case joaat("weapon_sniperrifle"):
		case joaat("weapon_heavysniper"):
		case joaat("weapon_grenadelauncher"):
		case joaat("weapon_rpg"):
		case joaat("weapon_minigun"):
		case joaat("weapon_grenade"):
		case joaat("weapon_smokegrenade"):
		case joaat("weapon_stickybomb"):
		case joaat("weapon_molotov"):
		case joaat("weapon_flare"):
		case joaat("weapon_knife"):
		case joaat("weapon_nightstick"):
		case joaat("weapon_hammer"):
		case joaat("weapon_pistol50"):
		case joaat("weapon_assaultsmg"):
		case -947031628:
		case joaat("weapon_bullpupshotgun"):
		case -572349828:
		case 392730790:
		case joaat("weapon_specialcarbine"):
		case joaat("weapon_bottle"):
		case joaat("weapon_bullpuprifle"):
		case joaat("weapon_heavypistol"):
		case joaat("weapon_snspistol"):
		case joaat("weapon_dagger"):
		case joaat("weapon_vintagepistol"):
		case joaat("weapon_gusenberg"):
		case joaat("weapon_flaregun"):
		case joaat("weapon_firework"):
		case joaat("weapon_musket"):
		case -1523701417:
		case joaat("weapon_heavyshotgun"):
		case joaat("weapon_marksmanrifle"):
		case joaat("weapon_hominglauncher"):
		case joaat("weapon_proxmine"):
		case joaat("weapon_snowball"):
		case joaat("weapon_combatpdw"):
		case joaat("weapon_knuckle"):
		case joaat("weapon_marksmanpistol"):
		case joaat("weapon_hatchet"):
		case joaat("weapon_compactrifle"):
		case joaat("weapon_dbshotgun"):
		case joaat("weapon_machete"):
		case joaat("weapon_machinepistol"):
		case joaat("weapon_flashlight"):
		case joaat("weapon_revolver"):
		case joaat("weapon_switchblade"):
		case joaat("weapon_petrolcan"):
		case joaat("weapon_bat"):
		case joaat("weapon_crowbar"):
		case joaat("weapon_golfclub"):
			return true;
			break;
	}
	return false;
}

int func_362(int iParam0)
{
	switch (iParam0)
	{
		case 34:
			return joaat("weapon_knife");
			break;
		
		case 1:
			return joaat("weapon_pistol");
			break;
		
		case 2:
			return joaat("weapon_combatpistol");
			break;
		
		case 3:
			return joaat("weapon_appistol");
			break;
		
		case 5:
			return joaat("weapon_smg");
			break;
		
		case 7:
			return joaat("weapon_microsmg");
			break;
		
		case 8:
			return joaat("weapon_assaultrifle");
			break;
		
		case 9:
			return joaat("weapon_carbinerifle");
			break;
		
		case 11:
			return joaat("weapon_advancedrifle");
			break;
		
		case 12:
			return joaat("weapon_mg");
			break;
		
		case 13:
			return joaat("weapon_combatmg");
			break;
		
		case 15:
			return joaat("weapon_stickybomb");
			break;
		
		case 16:
			return joaat("weapon_grenade");
			break;
		
		case 17:
			return joaat("weapon_smokegrenade");
			break;
		
		case 60:
			return joaat("weapon_proxmine");
			break;
		
		case 18:
			return joaat("weapon_remotesniper");
			break;
		
		case 20:
			return joaat("weapon_sniperrifle");
			break;
		
		case 21:
			return joaat("weapon_heavysniper");
			break;
		
		case 56:
			return joaat("weapon_marksmanrifle");
			break;
		
		case 22:
			return joaat("weapon_pumpshotgun");
			break;
		
		case 24:
			return joaat("weapon_assaultshotgun");
			break;
		
		case 25:
			return joaat("weapon_sawnoffshotgun");
			break;
		
		case 55:
			return joaat("weapon_heavyshotgun");
			break;
		
		case 26:
			return joaat("weapon_grenadelauncher");
			break;
		
		case 27:
			return joaat("weapon_rpg");
			break;
		
		case 28:
			return joaat("weapon_minigun");
			break;
		
		case 61:
			return joaat("weapon_hominglauncher");
			break;
		
		case 31:
			return joaat("weapon_stungun");
			break;
		
		case 33:
			return joaat("gadget_parachute");
			break;
		
		case 35:
			return joaat("weapon_nightstick");
			break;
		
		case 43:
			return joaat("weapon_petrolcan");
			break;
		
		case 45:
			return joaat("weapon_bottle");
			break;
		
		case 46:
			return joaat("weapon_specialcarbine");
			break;
		
		case 47:
			return joaat("weapon_snspistol");
			break;
		
		case 48:
			return joaat("weapon_bullpuprifle");
			break;
		
		case 49:
			return joaat("weapon_heavypistol");
			break;
		
		case 23:
			return joaat("weapon_bullpupshotgun");
			break;
		
		case 50:
			return joaat("weapon_gusenberg");
			break;
		
		case 51:
			return joaat("weapon_dagger");
			break;
		
		case 52:
			return joaat("weapon_vintagepistol");
			break;
		
		case 57:
			return joaat("weapon_flaregun");
			break;
		
		case 53:
			return joaat("weapon_musket");
			break;
		
		case 54:
			return joaat("weapon_firework");
			break;
		
		case 58:
			return joaat("weapon_hatchet");
			break;
		
		case 59:
			return joaat("weapon_railgun");
			break;
		
		case 64:
			return joaat("weapon_combatpdw");
			break;
		
		case 62:
			return joaat("weapon_knuckle");
			break;
		
		case 63:
			return joaat("weapon_marksmanpistol");
			break;
		
		case 65:
			return joaat("weapon_machete");
			break;
		
		case 68:
			return joaat("weapon_machinepistol");
			break;
		
		case 66:
			return joaat("weapon_dbshotgun");
			break;
		
		case 67:
			return joaat("weapon_compactrifle");
			break;
		
		case 69:
			return joaat("weapon_flashlight");
			break;
		
		case 70:
			return joaat("weapon_revolver");
			break;
		
		case 71:
			return joaat("weapon_switchblade");
			break;
		
		case 36:
			return joaat("weapon_hammer");
			break;
		
		case 4:
			return joaat("weapon_pistol50");
			break;
		
		case 6:
			return joaat("weapon_assaultsmg");
			break;
		
		case 41:
			return joaat("weapon_molotov");
			break;
		
		case 39:
			return joaat("weapon_golfclub");
			break;
		
		case 38:
			return joaat("weapon_crowbar");
			break;
		
		case 37:
			return joaat("weapon_bat");
			break;
	}
	return joaat("weapon_unarmed");
}

void func_363()
{
	int iVar0;
	struct<2> Var1;
	
	Var1 = 454;
	Var1.f_1 = player_id();
	iVar0 = 0;
	while (iVar0 < func_257())
	{
		if (Global_1610316[player_id() /*174*/].f_10.f_10[iVar0] != func_210())
		{
			if (network_is_player_active(Global_1610316[player_id() /*174*/].f_10.f_10[iVar0]))
			{
				trigger_script_event(1, &Var1, 2, func_364(Global_1610316[player_id() /*174*/].f_10.f_10[iVar0]));
			}
		}
		iVar0++;
	}
}

var func_364(int iParam0)
{
	var uVar0;
	
	set_bit(&uVar0, iParam0);
	return uVar0;
}

void func_365(char* sParam0, int iParam1)
{
	if (iParam1)
	{
		if (!is_string_null_or_empty(sParam0))
		{
			func_366(45, 46, sParam0, -1, 1);
		}
	}
	if (!is_string_null_or_empty(sParam0))
	{
		StringCopy(&(Global_1610316[player_id() /*174*/].f_10.f_132), sParam0, 64);
	}
	if ((!is_durango_version() && _0x595F028698072DD9(0, -1, 1)) || func_266())
	{
		func_286(28);
	}
	else
	{
		func_265(28);
	}
}

void func_366(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	char[32] cVar2;
	char[32] cVar10;
	int iVar18;
	int iVar19;
	
	if (func_202())
	{
		iVar0 = Global_2491657[iParam0 /*5*/][func_197(iParam3)];
		iVar1 = Global_2491657[iParam1 /*5*/][func_197(iParam3)];
		if (iVar0 != 0 && iVar1 != 0)
		{
			StringCopy(&cVar2, "", 32);
			StringCopy(&cVar10, "", 32);
			iVar18 = get_length_of_literal_string(sParam2);
			if (iVar18 > 0)
			{
				iVar19 = 10;
				if (iVar18 < 10)
				{
					iVar19 = iVar18;
				}
				StringCopy(&cVar2, _get_text_substring_safe(sParam2, 0, iVar19, 31), 32);
				if (iVar18 > 10)
				{
					StringCopy(&cVar10, _get_text_substring_safe(sParam2, 10, iVar18, 31), 32);
				}
			}
			stat_set_string(iVar0, &cVar2, iParam4);
			stat_set_string(iVar1, &cVar10, iParam4);
		}
	}
}

void func_367(char* sParam0, int iParam1)
{
	if (iParam1)
	{
		func_366(55, 57, sParam0, -1, 1);
	}
	StringCopy(&(Global_1610316[player_id() /*174*/].f_10.f_74), sParam0, 64);
	if ((!is_durango_version() && _0x595F028698072DD9(0, -1, 1)) || func_266())
	{
		func_286(28);
	}
	else
	{
		func_265(28);
	}
}

int func_368(int iParam0)
{
	if (iParam0 != func_210())
	{
		if (Global_1610316[iParam0 /*174*/].f_10 != func_210())
		{
			return Global_1610316[iParam0 /*174*/].f_10 == iParam0;
		}
	}
	return false;
}

int func_369()
{
	return func_1053(3203, -1, 0) != 0;
}

int func_370()
{
	return func_1053(3202, -1, 0) != 0;
}

int func_371()
{
	return func_1053(3201, -1, 0) != 0;
}

void func_372(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2469339[iParam0 /*5*/][func_197(iParam2)];
	if (iVar0 != 0)
	{
		stat_set_int(iVar0, iParam1, iParam3);
	}
}

bool func_373(int iParam0)
{
	if (iParam0 == 1)
	{
		return true;
	}
	return false;
}

void func_374(int iParam0, int iParam1)
{
	if (*iParam1 == -1)
	{
		*iParam1 = 1;
	}
	if (iParam0 == 0)
	{
		func_305(3031, *iParam1, -1, 1);
	}
	else if (iParam0 == 1)
	{
		func_305(3032, *iParam1, -1, 1);
	}
	else if (iParam0 == 2)
	{
		func_305(3033, *iParam1, -1, 1);
	}
	else if (iParam0 == 3)
	{
		func_305(3034, *iParam1, -1, 1);
	}
	else if (iParam0 == 4)
	{
		func_305(3035, *iParam1, -1, 1);
	}
	else if (iParam0 == 5)
	{
		func_305(3199, *iParam1, -1, 1);
	}
}

var func_375(int iParam0, int iParam1)
{
	var uVar0;
	
	uVar0 = iParam1;
	if (iParam1 == -1)
	{
		uVar0 = func_90();
	}
	return Global_2492955[iParam0 /*5*/][uVar0];
}

void func_376(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		Global_2097152[func_49() /*10375*/].f_5388.f_12 = 0;
		Global_2097152[func_49() /*10375*/].f_5388.f_13 = 0;
		Global_2097152[func_49() /*10375*/].f_5388.f_14 = 0;
	}
	else if (iParam0 == 1)
	{
		Global_2097152[func_49() /*10375*/].f_5388.f_15 = 0;
		Global_2097152[func_49() /*10375*/].f_5388.f_16 = 0;
		Global_2097152[func_49() /*10375*/].f_5388.f_17 = 0;
	}
	else if (iParam0 == 2)
	{
		Global_2097152[func_49() /*10375*/].f_5388.f_18 = 0;
		Global_2097152[func_49() /*10375*/].f_5388.f_19 = 0;
		Global_2097152[func_49() /*10375*/].f_5388.f_20 = 0;
	}
	else if (iParam0 == 3)
	{
		Global_2097152[func_49() /*10375*/].f_5388.f_21 = 0;
		Global_2097152[func_49() /*10375*/].f_5388.f_22 = 0;
		Global_2097152[func_49() /*10375*/].f_5388.f_23 = 0;
	}
	else if (iParam0 == 4)
	{
		Global_2097152[func_49() /*10375*/].f_5388.f_24 = 0;
		Global_2097152[func_49() /*10375*/].f_5388.f_25 = 0;
		Global_2097152[func_49() /*10375*/].f_5388.f_26 = 0;
	}
	else if (iParam0 == 99)
	{
		Global_2097152[func_49() /*10375*/].f_5388.f_27 = 0;
		Global_2097152[func_49() /*10375*/].f_5388.f_28 = 0;
		Global_2097152[func_49() /*10375*/].f_5388.f_29 = 0;
	}
	else if (iParam0 >= 5)
	{
		iVar0 = 0;
		while (iVar0 < 1)
		{
			Global_2097152[func_49() /*10375*/].f_5388.f_32[iVar0] = 0;
			Global_2097152[func_49() /*10375*/].f_5388.f_34[iVar0] = 0;
			Global_2097152[func_49() /*10375*/].f_5388.f_36[iVar0] = 0;
			iVar0++;
		}
	}
}

void func_377(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	*uParam0 = func_378(func_379(_0xE3B05614DCE1D014(12), 6, 4));
	*uParam1 = func_379(_0xE3B05614DCE1D014(12), 10, 1);
	*uParam2 = func_379(_0xE3B05614DCE1D014(12), 11, 4);
	*uParam3 = func_379(_0xE3B05614DCE1D014(12), 15, 4);
	*uParam4 = func_379(_0xE3B05614DCE1D014(12), 19, 1);
	*uParam5 = func_379(_0xE3B05614DCE1D014(12), 20, 1);
	*uParam6 = func_379(_0xE3B05614DCE1D014(12), 21, 1);
}

int func_378(int iParam0)
{
	if (iParam0 == 0)
	{
		return 5;
	}
	else if (iParam0 == 1)
	{
		return 6;
	}
	else if (iParam0 == 2)
	{
		return 4;
	}
	else if (iParam0 == 3)
	{
		return 1;
	}
	else if (iParam0 == 4)
	{
		return 2;
	}
	else if (iParam0 == 5)
	{
		return 3;
	}
	else if (iParam0 == 6)
	{
		return 7;
	}
	else if (iParam0 == 7)
	{
		return 8;
	}
	else if (iParam0 == 8)
	{
		return 9;
	}
	return 1;
}

int func_379(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = shift_left(true, iParam2) - 1;
	iVar0 = shift_left(iVar0, iParam1);
	return shift_right((iParam0 && iVar0), iParam1);
}

bool func_380(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	var uVar6;
	var uVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	if (iLocal_709)
	{
		if (!func_457())
		{
			iLocal_710 = 3;
		}
		switch (iLocal_710)
		{
			case 0:
				iVar0 = iParam1;
				if (func_437(iParam5))
				{
					iVar0 += iLocal_2649 + iLocal_2650 + iLocal_2651 + iLocal_2652 + iLocal_2653 + iLocal_2654 + iLocal_2655 + iLocal_2656;
				}
				if (iParam9 != 0)
				{
					if ((iParam3 != 1394405165 || !func_437(iParam5)) || iParam5 != iParam9)
					{
						iVar0 -= iParam8;
					}
				}
				if (iParam7 != 0)
				{
					switch (iParam7)
					{
						case 118439962:
							iVar0 = ceil(0.9f * to_float(iParam1));
							break;
						
						case 1514966546:
							iVar0 = ceil(0.9f * to_float(iParam1));
							break;
						
						case 1776242445:
							iVar0 = ceil(0.9f * to_float(iParam1));
							break;
						
						default:
							break;
						}
				}
				iVar1 = 0;
				iVar2 = 0;
				iVar3 = iVar0;
				if (_0x76EF28DA05EA395A() > 0)
				{
					if (_0x76EF28DA05EA395A() >= iVar3)
					{
						iVar2 = iVar3;
					}
					else
					{
						iVar2 = iVar3 - iVar3 - _0x76EF28DA05EA395A();
					}
					iVar3 -= iVar2;
				}
				if (iVar3 > 0)
				{
					if (_0xA40F9C2623F6A8B5(-1) > 0)
					{
						if (_0xA40F9C2623F6A8B5(-1) >= iVar3)
						{
							iVar1 = iVar3;
						}
						else
						{
							iVar1 = iVar3 - iVar3 - _0xA40F9C2623F6A8B5(-1);
						}
						iVar3 -= iVar1;
					}
				}
				if (iParam3 == 1394405165)
				{
					if (!func_437(iParam5))
					{
						if (func_433(78225582, iParam3, iParam5, iParam4, 1, iParam1, iParam2, 4, iParam6, 3) && func_433(78225582, iParam3, iParam11, iParam4, 1, 0, 0, 4, iParam12, 3))
						{
							if (iParam9 != 0)
							{
								if (func_433(78225582, iParam3, iParam9, iParam4, 1, iParam8, 1, 4, iParam6, 3))
								{
								}
								else
								{
									iLocal_710 = 3;
									return true;
								}
							}
							if (iParam7 != 0)
							{
								if (func_433(78225582, iParam3, iParam6, iParam4, 1, iVar0, iParam2, 4, iParam7, 3))
								{
								}
								else
								{
									iLocal_710 = 3;
									return true;
								}
							}
							if (iLocal_710 != 3)
							{
								if (func_431())
								{
									_0x170F541E1CADD1DE(1);
									_set_player_cash_change(-iVar1, -iVar2);
									iLocal_710 = 1;
								}
								else
								{
									iLocal_710 = 3;
								}
							}
						}
						else
						{
							iLocal_710 = 3;
						}
					}
					else
					{
						uVar4 = Global_68274.f_40;
						func_377(&iVar5, &uVar6, &uVar7, &iVar8, &iVar9, &iVar10, &iVar11);
						iVar5--;
						if (iParam5 != iParam9)
						{
							if (func_433(78225582, iParam3, iParam5, iParam4, 1, iParam1, iParam2, 4, iParam6, 3))
							{
								if (iParam9 != 0)
								{
									if (func_433(78225582, iParam3, iParam9, iParam4, 1, iParam8, 1, 4, iParam6, 3))
									{
									}
									else
									{
										iLocal_710 = 3;
										return true;
									}
								}
								if (func_433(78225582, iParam3, iParam11, iParam4, 1, 0, 0, 4, iParam12, 3))
								{
								}
								else
								{
									iLocal_710 = 3;
									return true;
								}
								if (iParam7 != 0)
								{
									if (func_433(78225582, iParam3, iParam6, iParam4, 1, iVar0, iParam2, 4, iParam7, 3))
									{
									}
									else
									{
										iLocal_710 = 3;
										return true;
									}
								}
								if (func_425(iParam5, 1906937290, iVar5, iLocal_2649, uVar6, iLocal_2650, uVar4, iLocal_2651, uVar7, iLocal_2652, iVar8, iLocal_2653, iVar9, iLocal_2654, iVar10, iLocal_2655, iVar11, iLocal_2656))
								{
								}
								else
								{
									iLocal_710 = 3;
								}
								if (iLocal_710 != 3)
								{
									if (func_431())
									{
										_0x170F541E1CADD1DE(1);
										_set_player_cash_change(-iVar1, -iVar2);
										iLocal_710 = 1;
									}
									else
									{
										iLocal_710 = 3;
									}
								}
							}
							else
							{
								iLocal_710 = 3;
							}
						}
						else
						{
							if (iParam7 != 0)
							{
								if (func_433(78225582, iParam3, iParam6, iParam4, 1, iVar0, iParam2, 4, iParam7, 3))
								{
								}
								else
								{
									iLocal_710 = 3;
									return true;
								}
							}
							if (func_425(iParam5, 1906937290, iVar5, iLocal_2649, uVar6, iLocal_2650, uVar4, iLocal_2651, uVar7, iLocal_2652, iVar8, iLocal_2653, iVar9, iLocal_2654, iVar10, iLocal_2655, iVar11, iLocal_2656))
							{
							}
							else
							{
								iLocal_710 = 3;
							}
							if (iLocal_710 != 3)
							{
								if (func_431())
								{
									_0x170F541E1CADD1DE(1);
									_set_player_cash_change(-iVar1, -iVar2);
									iLocal_710 = 1;
								}
								else
								{
									iLocal_710 = 3;
								}
							}
						}
					}
				}
				else if (iParam3 == -1224924353 && func_424(iParam5))
				{
					if (func_1053(3146, -1, 0) == 0)
					{
						if (func_433(78225582, iParam3, func_423(iParam5), iParam4, 1, 0, iParam2, 4, iParam6, 3))
						{
							if (func_422(0, iParam3, Global_68236, iLocal_2643, Global_68236.f_2, iLocal_2646, Global_68236.f_1, iLocal_2647, Global_68236.f_4, iLocal_2644, Global_68236.f_3, iLocal_2645, Global_68236.f_37, iLocal_2648))
							{
								if (func_431())
								{
									_0x170F541E1CADD1DE(1);
									_set_player_cash_change(-iVar1, -iVar2);
									iLocal_710 = 1;
								}
								else
								{
									iLocal_710 = 3;
								}
							}
							else
							{
								iLocal_710 = 3;
							}
						}
						else
						{
							iLocal_710 = 3;
						}
					}
					else if (func_422(0, -2121967344, Global_68236, iLocal_2643, Global_68236.f_2, iLocal_2646, Global_68236.f_1, iLocal_2647, Global_68236.f_4, iLocal_2644, Global_68236.f_3, iLocal_2645, Global_68236.f_37, iLocal_2648))
					{
						if (func_431())
						{
							_0x170F541E1CADD1DE(1);
							_set_player_cash_change(-iVar1, -iVar2);
							iLocal_710 = 1;
						}
						else
						{
							iLocal_710 = 3;
						}
					}
					else
					{
						iLocal_710 = 3;
					}
				}
				else if (iParam3 == -1224924353)
				{
					if (func_433(78225582, iParam3, iParam5, iParam4, 1, iParam1, iParam2, 4, iParam6, 3))
					{
						if (iParam7 != 0)
						{
							if (func_433(78225582, iParam3, iParam6, iParam4, 1, iVar0, iParam2, 4, iParam7, 3))
							{
							}
							else
							{
								iLocal_710 = 3;
								return true;
							}
						}
						if (func_383(iLocal_2639, iParam10, 1))
						{
							if (func_431())
							{
								_0x170F541E1CADD1DE(1);
								_set_player_cash_change(-iVar1, -iVar2);
								iLocal_710 = 1;
							}
							else
							{
								iLocal_710 = 3;
							}
						}
						else
						{
							iLocal_710 = 3;
						}
					}
					else
					{
						iLocal_710 = 3;
					}
				}
				else if (func_433(78225582, iParam3, iParam5, iParam4, 1, iParam1, iParam2, 4, iParam6, 3))
				{
					if (iParam7 != 0)
					{
						if (func_433(78225582, iParam3, iParam7, iParam4, 1, iParam1, iParam2, 4, iParam5, 3))
						{
						}
						else
						{
							iLocal_710 = 3;
							return true;
						}
					}
					if (func_431())
					{
						_0x170F541E1CADD1DE(1);
						_set_player_cash_change(-iVar1, -iVar2);
						iLocal_710 = 1;
					}
					else
					{
						iLocal_710 = 3;
					}
				}
				else
				{
					iLocal_710 = 3;
				}
				break;
			
			case 1:
				if (func_382(func_316()))
				{
					if (func_381(func_316()) == 2)
					{
						iLocal_710 = 2;
					}
					else
					{
						iLocal_710 = 3;
					}
				}
				break;
			
			case 2:
				iLocal_709 = 0;
				iLocal_710 = 0;
				_0x170F541E1CADD1DE(0);
				hide_hud_component_this_frame(13);
				*iParam0 = 2;
				return false;
				break;
			
			case 3:
				func_310(func_316());
				iLocal_709 = 0;
				iLocal_710 = 0;
				_0x170F541E1CADD1DE(0);
				hide_hud_component_this_frame(13);
				*iParam0 = 0;
				return false;
				break;
		}
		return true;
	}
	if (iLocal_710 == 3)
	{
		iLocal_710 = 0;
		*iParam0 = 0;
		return false;
	}
	iLocal_710 = 0;
	*iParam0 = -1;
	return false;
}

int func_381(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2558146[iParam0 /*73*/].f_2;
	}
	return 0;
}

int func_382(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2558146[iParam0 /*73*/].f_2 != 1;
	}
	return false;
}

bool func_383(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	char* sVar7;
	char* sVar11;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	var uVar19;
	int iVar20;
	var uVar21;
	var uVar22;
	var uVar23;
	var uVar24;
	var uVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	char* sVar39;
	
	uVar19 = func_421(get_entity_model(iParam1));
	if (((!Global_2561834 || !does_entity_exist(iParam1)) || !is_vehicle_driveable(iParam1, 0)) || get_num_mod_kits(iParam1) <= 0)
	{
		if (get_num_mod_kits(iParam1) <= 0 && func_420(get_entity_model(iParam1)))
		{
			func_419(iParam1, &iVar0, &sVar3, &iVar15, &iVar1, &sVar7, &iVar16, &iVar2, &sVar11, &iVar17, &iVar18, 0);
			if (!func_418(iParam0, "PACKED_MP_VEH_COLOUR1_0_v", &sVar3, 1, 24, uVar19, iVar0, iVar15))
			{
				return false;
			}
			if (!func_418(iParam0, "PACKED_MP_VEH_COLOUR_EXTRA1_0_v", &sVar11, 3, 24, uVar19, iVar2, iVar17))
			{
				return false;
			}
			if (!func_416(iParam0, "PACKED_MP_VEH_PRIMARY_COLOUR_GROUP_v", func_417(iVar0)))
			{
				return false;
			}
			if (!func_418(iParam0, "PACKED_MP_VEH_COLOUR2_0_v", &sVar7, 2, 25, uVar19, iVar1, iVar16))
			{
				return false;
			}
			if (!func_416(iParam0, "PACKED_MP_VEH_SECONDARY_COLOUR_GROUP_v", func_417(iVar1)))
			{
				return false;
			}
		}
		return true;
	}
	if (iParam0 == -1)
	{
		iParam0 = 0;
	}
	iVar20 = true;
	if ((((((((((((((iParam0 == 10 || iParam0 == 11) || iParam0 == 12) || iParam0 == 23) || iParam0 == 24) || iParam0 == 25) || iParam0 == 36) || iParam0 == 37) || iParam0 == 38) || iParam0 == 49) || iParam0 == 50) || iParam0 == 51) || iParam0 == 62) || iParam0 == 63) || iParam0 == 64)
	{
		iVar20 = false;
	}
	if (does_entity_exist(iParam1) && is_vehicle_driveable(iParam1, 0))
	{
		uVar21 = func_414(get_entity_model(iParam1));
		uVar22 = func_413(get_entity_model(iParam1));
		uVar23 = func_412(get_entity_model(iParam1));
		uVar24 = func_411(get_entity_model(iParam1));
		if (iVar20)
		{
			if (!func_410(iParam0, "PACKED_MP_VEH_MOD_IDX_0_v", "VEM_SPOILER", get_vehicle_mod(iParam1, 0) + 1, 14, uVar21, -1))
			{
				return false;
			}
			if (!func_410(iParam0, "PACKED_MP_VEH_MOD_IDX_1_v", "VEM_BUMPER_F", get_vehicle_mod(iParam1, 1) + 1, 34, uVar21, -1))
			{
				return false;
			}
			if (!func_410(iParam0, "PACKED_MP_VEH_MOD_IDX_2_v", "VEM_BUMPER_R", get_vehicle_mod(iParam1, 2) + 11, 35, uVar21, -1))
			{
				return false;
			}
			if (!func_410(iParam0, "PACKED_MP_VEH_MOD_IDX_3_v", "VEM_SKIRT", get_vehicle_mod(iParam1, 3) + 1, 13, uVar21, -1))
			{
				return false;
			}
			if (!func_410(iParam0, "PACKED_MP_VEH_MOD_IDX_4_v", "VEM_EXHAUST", get_vehicle_mod(iParam1, 4) + 1, 6, uVar21, -1))
			{
				return false;
			}
			if (!func_410(iParam0, "PACKED_MP_VEH_MOD_IDX_5_v", "VEM_CHASSIS", get_vehicle_mod(iParam1, 5) + 1, 4, uVar21, -1))
			{
				return false;
			}
			if (!func_410(iParam0, "PACKED_MP_VEH_MOD_IDX_6_v", "VEM_GRILL", get_vehicle_mod(iParam1, 6) + 1, 8, uVar21, -1))
			{
				return false;
			}
			if (!func_410(iParam0, "PACKED_MP_VEH_MOD_IDX_7_v", "VEM_HOOD", get_vehicle_mod(iParam1, 7) + 1, 9, uVar21, -1))
			{
				return false;
			}
			if (!func_410(iParam0, "PACKED_MP_VEH_MOD_IDX_8_v", "VEM_FENDER_L", get_vehicle_mod(iParam1, 8) + 1, 36, uVar21, -1))
			{
				return false;
			}
			if (!func_410(iParam0, "PACKED_MP_VEH_MOD_IDX_9_v", "VEM_FENDER_R", get_vehicle_mod(iParam1, 9) + 6, 37, uVar21, -1))
			{
				return false;
			}
			if (!func_410(iParam0, "PACKED_MP_VEH_MOD_IDX_10_v", "VEM_ROOF", get_vehicle_mod(iParam1, 10) + 1, 12, uVar21, -1))
			{
				return false;
			}
			if (!func_410(iParam0, "PACKED_MP_VEH_MOD_IDX_11_v", "VEM_ENGINE", get_vehicle_mod(iParam1, 11) + 1, 5, uVar21, -1))
			{
				return false;
			}
			if (!func_410(iParam0, "PACKED_MP_VEH_MOD_IDX_12_v", "VEM_BRAKE", get_vehicle_mod(iParam1, 12) + 1, 2, uVar21, -1))
			{
				return false;
			}
			if (!func_410(iParam0, "PACKED_MP_VEH_MOD_IDX_13_v", "VEM_TRANS", get_vehicle_mod(iParam1, 13) + 1, 16, uVar21, -1))
			{
				return false;
			}
			if (!func_410(iParam0, "PACKED_MP_VEH_MOD_IDX_15_v", "VEM_SUSPENSION", get_vehicle_mod(iParam1, 15) + 1, 15, uVar21, -1))
			{
				return false;
			}
			if (!func_410(iParam0, "PACKED_MP_VEH_MOD_IDX_16_v", "VEM_ARMOUR", get_vehicle_mod(iParam1, 16) + 1, 1, uVar21, -1))
			{
				return false;
			}
			if (!func_410(iParam0, "PACKED_MP_VEH_MOD_IDX_18_v", "VEM_TURBO", func_409(is_toggle_mod_on(iParam1, 18)), 17, uVar21, -1))
			{
				return false;
			}
			if (!func_410(iParam0, "PACKED_MP_VEH_MOD_IDX_22_v", "VEM_HLIGHT", func_409(is_toggle_mod_on(iParam1, 22)), 11, uVar21, -1))
			{
				return false;
			}
			if (!func_410(iParam0, "PACKED_MP_VEH_MOD_IDX_S_0_v", "VEM_SUPERMOD_0", get_vehicle_mod(iParam1, 25) + 1, 41, uVar22, -1))
			{
				return false;
			}
			if (!func_410(iParam0, "PACKED_MP_VEH_MOD_IDX_S_1_v", "VEM_SUPERMOD_1", get_vehicle_mod(iParam1, 26) + 1, 42, uVar22, -1))
			{
				return false;
			}
			if (!func_410(iParam0, "PACKED_MP_VEH_MOD_IDX_S_2_v", "VEM_SUPERMOD_2", get_vehicle_mod(iParam1, 27) + 1, 43, uVar22, -1))
			{
				return false;
			}
			if (!func_410(iParam0, "PACKED_MP_VEH_MOD_IDX_S_3_v", "VEM_SUPERMOD_3", get_vehicle_mod(iParam1, 28) + 1, 44, uVar22, -1))
			{
				return false;
			}
			if (!func_410(iParam0, "PACKED_MP_VEH_MOD_IDX_S_4_v", "VEM_SUPERMOD_4", get_vehicle_mod(iParam1, 29) + 1, 45, uVar22, -1))
			{
				return false;
			}
			if (!func_410(iParam0, "PACKED_MP_VEH_MOD_IDX_S_5_v", "VEM_SUPERMOD_5", get_vehicle_mod(iParam1, 30) + 1, 46, uVar22, -1))
			{
				return false;
			}
			if (!func_410(iParam0, "PACKED_MP_VEH_MOD_IDX_S_6_v", "VEM_SUPERMOD_6", get_vehicle_mod(iParam1, 31) + 1, 47, uVar22, -1))
			{
				return false;
			}
			if (!func_410(iParam0, "PACKED_MP_VEH_MOD_IDX_S_7_v", "VEM_SUPERMOD_7", get_vehicle_mod(iParam1, 32) + 1, 48, uVar22, -1))
			{
				return false;
			}
			if (!func_410(iParam0, "PACKED_MP_VEH_MOD_IDX_S_8_v", "VEM_SUPERMOD_8", get_vehicle_mod(iParam1, 33) + 1, 49, uVar22, -1))
			{
				return false;
			}
			if (!func_410(iParam0, "PACKED_MP_VEH_MOD_IDX_S_9_v", "VEM_SUPERMOD_9", get_vehicle_mod(iParam1, 34) + 1, 50, uVar22, -1))
			{
				return false;
			}
			if (!func_410(iParam0, "PACKED_MP_VEH_MOD_IDX_S_10_v", "VEM_SUPERMOD_10", get_vehicle_mod(iParam1, 35) + 1, 51, uVar22, -1))
			{
				return false;
			}
			if (!func_410(iParam0, "PACKED_MP_VEH_MOD_IDX_S_11_v", "VEM_SUPERMOD_11", get_vehicle_mod(iParam1, 36) + 1, 52, uVar22, -1))
			{
				return false;
			}
			if (!func_410(iParam0, "PACKED_MP_VEH_MOD_IDX_S_12_v", "VEM_SUPERMOD_12", get_vehicle_mod(iParam1, 37) + 1, 53, uVar22, -1))
			{
				return false;
			}
			if (!func_410(iParam0, "PACKED_MP_VEH_MOD_IDX_S_13_v", "VEM_SUPERMOD_13", get_vehicle_mod(iParam1, 38) + 1, 54, uVar22, -1))
			{
				return false;
			}
			if (!func_410(iParam0, "PACKED_MP_VEH_MOD_IDX_S_14_v", "VEM_SUPERMOD_14", get_vehicle_mod(iParam1, 39) + 1, 55, uVar22, -1))
			{
				return false;
			}
			if (!func_410(iParam0, "PACKED_MP_VEH_MOD_IDX_S_15_v", "VEM_SUPERMOD_15", get_vehicle_mod(iParam1, 40) + 1, 56, uVar22, -1))
			{
				return false;
			}
			if (!func_410(iParam0, "PACKED_MP_VEH_MOD_IDX_S_16_v", "VEM_SUPERMOD_16", get_vehicle_mod(iParam1, 41) + 1, 57, uVar22, -1))
			{
				return false;
			}
			if (!func_410(iParam0, "PACKED_MP_VEH_MOD_IDX_S_17_v", "VEM_SUPERMOD_17", get_vehicle_mod(iParam1, 42) + 1, 58, uVar22, -1))
			{
				return false;
			}
			if (!func_410(iParam0, "PACKED_MP_VEH_MOD_IDX_S_18_v", "VEM_SUPERMOD_18", get_vehicle_mod(iParam1, 43) + 1, 59, uVar22, -1))
			{
				return false;
			}
			if (!func_410(iParam0, "PACKED_MP_VEH_MOD_IDX_S_19_v", "VEM_SUPERMOD_19", get_vehicle_mod(iParam1, 44) + 1, 60, uVar22, -1))
			{
				return false;
			}
			if (!func_410(iParam0, "PACKED_MP_VEH_MOD_IDX_S_20_v", "VEM_SUPERMOD_20", get_vehicle_mod(iParam1, 45) + 1, 61, uVar22, -1))
			{
				return false;
			}
			if (!func_410(iParam0, "PACKED_MP_VEH_MOD_IDX_S_21_v", "VEM_SUPERMOD_21", get_vehicle_mod(iParam1, 46) + 1, 62, uVar22, -1))
			{
				return false;
			}
			if (!func_410(iParam0, "PACKED_MP_VEH_MOD_IDX_S_22_v", "VEM_SUPERMOD_22", get_vehicle_mod(iParam1, 47) + 1, 63, uVar22, -1))
			{
				return false;
			}
			if (!func_410(iParam0, "PACKED_MP_VEH_MOD_IDX_S_23_v", "VEM_SUPERMOD_23", get_vehicle_mod(iParam1, 48) + 1, 64, uVar23, -1))
			{
				return false;
			}
		}
		if (iVar20)
		{
			uVar25 = func_408(_0x4593CF82AA179706(iParam1, 14, get_vehicle_mod(iParam1, 14)));
			if (!func_406(iParam0, "PACKED_MP_VEH_MOD_IDX_14_v", func_407(uVar25), 10, uVar21))
			{
				return false;
			}
		}
		if (iVar20)
		{
			if (!func_405(iParam0, "PACKED_MP_VEH_MOD_IDX_23_v", iParam1, 23, uVar24))
			{
				return false;
			}
			if (!func_405(iParam0, "PACKED_MP_VEH_MOD_IDX_24_v", iParam1, 24, uVar24))
			{
				return false;
			}
		}
		if (!func_403(iParam0, "PACKED_MP_VEH_WHEEL_TYPE_0_v", iParam1))
		{
			return false;
		}
		if (iVar20)
		{
			iVar26 = 0;
			switch (get_vehicle_window_tint(iParam1))
			{
				case 0:
					iVar26 = 0;
					break;
				
				case 3:
					iVar26 = 1;
					break;
				
				case 2:
					iVar26 = 2;
					break;
				
				case 1:
					iVar26 = 3;
					break;
				
				case 4:
					iVar26 = 4;
					break;
				
				case 5:
					iVar26 = 5;
					break;
			}
			if (!func_410(iParam0, "PACKED_MP_VEH_WINDOW_TINT_0_v", "VEM_CMOD_WIN", iVar26, 33, uVar21, -1))
			{
				return false;
			}
		}
		if (iVar20)
		{
			iVar27 = 0;
			switch (get_vehicle_number_plate_text_index(iParam1))
			{
				case 3:
					iVar27 = 0;
					break;
				
				case 0:
					iVar27 = 1;
					break;
				
				case 4:
					iVar27 = 2;
					break;
				
				case 2:
					iVar27 = 3;
					break;
				
				case 1:
					iVar27 = 4;
					break;
			}
			if (!func_410(iParam0, "PACKED_MP_VEH_PLATE_ID_v", "VEM_CMOD_PLA", iVar27, 23, uVar21, -1))
			{
				return false;
			}
		}
		if (iVar20)
		{
			if (get_vehicle_mod_variation(iParam1, 23) == 0)
			{
				if (!func_410(iParam0, "PACKED_MP_VEH_MOD_VAR_0_v", "VEM_CMOD_TYR", 0, 31, uVar21, -1))
				{
					return false;
				}
			}
			else if (!func_410(iParam0, "PACKED_MP_VEH_MOD_VAR_0_v", "VEM_CMOD_TYR", 1, 32, uVar21, -1))
			{
				return false;
			}
			if (get_vehicle_mod_variation(iParam1, 24) == 0)
			{
				if (!func_410(iParam0, "PACKED_MP_VEH_MOD_VAR_1_v", "VEM_CMOD_TYR", 0, 31, uVar21, -1))
				{
					return false;
				}
			}
			else if (!func_410(iParam0, "PACKED_MP_VEH_MOD_VAR_1_v", "VEM_CMOD_TYR", 1, 32, uVar21, -1))
			{
				return false;
			}
		}
		func_419(iParam1, &iVar0, &sVar3, &iVar15, &iVar1, &sVar7, &iVar16, &iVar2, &sVar11, &iVar17, &iVar18, 1);
		iVar28 = func_402(iVar18);
		if (!func_410(iParam0, "PACKED_MP_VEH_COLOUR_EXTRA2_0_v", "VEM_CMOD_COL5", iVar28, 29, uVar19, -1))
		{
			return false;
		}
		set_vehicle_colours(iParam1, iVar15, iVar16);
		set_vehicle_extra_colours(iParam1, iVar17, iVar18);
		if (!func_418(iParam0, "PACKED_MP_VEH_COLOUR1_0_v", &sVar3, 1, 24, uVar19, iVar0, iVar15))
		{
			return false;
		}
		if (!func_418(iParam0, "PACKED_MP_VEH_COLOUR_EXTRA1_0_v", &sVar11, 3, 24, uVar19, iVar2, iVar17))
		{
			return false;
		}
		if (!func_416(iParam0, "PACKED_MP_VEH_PRIMARY_COLOUR_GROUP_v", func_417(iVar0)))
		{
			return false;
		}
		if (!func_418(iParam0, "PACKED_MP_VEH_COLOUR2_0_v", &sVar7, 2, 25, uVar19, iVar1, iVar16))
		{
			return false;
		}
		if (!func_416(iParam0, "PACKED_MP_VEH_SECONDARY_COLOUR_GROUP_v", func_417(iVar1)))
		{
			return false;
		}
		get_vehicle_tyre_smoke_color(iParam1, &iVar29, &iVar30, &iVar31);
		switch (func_399(iVar29, iVar30, iVar31))
		{
			case 1:
				iVar32 = 3;
				break;
			
			case 2:
				iVar32 = 4;
				break;
			
			case 3:
				iVar32 = 5;
				break;
			
			case 4:
				iVar32 = 6;
				break;
			
			case 5:
				iVar32 = 11;
				break;
			
			case 6:
				iVar32 = 7;
				break;
			
			case 7:
				iVar32 = 10;
				break;
			
			case 8:
				iVar32 = 8;
				break;
			
			case 9:
				iVar32 = 12;
				break;
			
			case 10:
				iVar32 = 13;
				break;
			
			case 11:
				iVar32 = -1;
				break;
			
			case 12:
				iVar32 = 9;
				break;
		}
		if (iVar20)
		{
			if (!func_398(iParam0, "PACKED_NG_VEHICLE_SMOKE_v", "VEM_CMOD_TYR", iVar32, 18, uVar21))
			{
				return false;
			}
		}
		iVar33 = func_397(_is_vehicle_neon_light_enabled(iParam1, 2), (_is_vehicle_neon_light_enabled(iParam1, 0) || _is_vehicle_neon_light_enabled(iParam1, 1)), _is_vehicle_neon_light_enabled(iParam1, 3));
		if (iVar20)
		{
			if (!func_396(iParam0, "PACKED_NG_VEHICLE_NEON_KIT_v", "VEM_CMOD_NEONLAY", iVar33, 21, uVar21, 1))
			{
				return false;
			}
		}
		_get_vehicle_neon_lights_colour(iParam1, &iVar29, &iVar30, &iVar31);
		iVar34 = func_393(iVar29, iVar30, iVar31);
		if (iVar20)
		{
			if (!func_396(iParam0, "PACKED_NG_VEHICLE_NEON_v", "VEM_CMOD_NEONCOL", iVar34, 21, uVar21, 0))
			{
				return false;
			}
		}
		if (get_vehicle_livery_count(iParam1) > 1)
		{
			if (!func_410(iParam0, "PACKED_MP_VEH_LIVERY_0_v", "VEM_LIVERY", get_vehicle_livery(iParam1), 26, uVar21, func_392(get_entity_model(iParam1))))
			{
				return false;
			}
		}
		if (unk_0x5ECB40269053C0D4(iParam1) > 1)
		{
			if (!func_410(iParam0, "PACKED_MP_VEH_LIVERY2_0_v", "VEM_LIVERY2", unk_0x60190048C0764A26(iParam1), 39, uVar23, func_392(get_entity_model(iParam1))))
			{
				return false;
			}
		}
		if (iVar20)
		{
			if (!get_vehicle_tyres_can_burst(iParam1))
			{
				if (!func_391(iParam0, "PACKED_NG_VEHICLE_BPT_v", "VEM_CMOD_TYR_2", 30, uVar21))
				{
					return false;
				}
			}
		}
		if (iVar20)
		{
			unk_0x7D1464D472D32136(iParam1, &iVar38);
			iVar35 = false;
			iVar36 = 0;
			while (func_390(iVar36, &iVar37) && !iVar35)
			{
				if (iVar37 == iVar38)
				{
					iVar35 = true;
					sVar39 = func_389(iVar36);
				}
				else
				{
					iVar36++;
				}
			}
			if (iVar35)
			{
				func_388(iParam0, "PACKED_LR_VEHICLE_COLOUR_5_v", sVar39, 38, 5, 3);
			}
			unk_0xB7635E80A5C31BFF(iParam1, &iVar38);
			iVar35 = false;
			iVar36 = 0;
			while (func_387(iVar36, &iVar37) && !iVar35)
			{
				if (iVar37 == iVar38)
				{
					iVar35 = true;
					sVar39 = func_386(iVar36);
				}
				else
				{
					iVar36++;
				}
			}
			if (!iVar35)
			{
				if (iVar38 == 0)
				{
					sVar39 = "VEM_COLOUR_6_BLACK_t65_v3";
					iVar35 = true;
				}
				else if (iVar38 == 132)
				{
					sVar39 = "VEM_COLOUR_6_DEFAULT_t65_v3";
					iVar35 = true;
				}
			}
			if (iVar35)
			{
				func_388(iParam0, "PACKED_LR_VEHICLE_COLOUR_6_v", sVar39, 65, 6, 3);
			}
		}
		if (iParam2 && iVar20)
		{
			if (!func_385(iParam0, "PACKED_NG_VEHICLE_INSURANCE_v", get_entity_model(iParam1)))
			{
				return false;
			}
		}
		else if (iVar20)
		{
			if (!func_384(iParam0, "PACKED_NG_VEHICLE_INSURANCE_v"))
			{
				return false;
			}
		}
		return true;
	}
	return false;
}

int func_384(int iParam0, char* sParam1)
{
	char[64] cVar0;
	char[64] cVar16;
	
	if (_0x27F76CC6C55AD30E())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar16, "VEM_INSURANCE_NONE", 64);
	if (!_0x247F0F73A182EA0B(get_hash_key(&cVar16)))
	{
		return 1;
	}
	return func_433(78225582, -1224924353, get_hash_key(&cVar16), 478352891, 1, 0, 1, 4, get_hash_key(&cVar0), 3);
}

int func_385(int iParam0, char* sParam1, int iParam2)
{
	char[64] cVar0;
	struct<4> Var16;
	char[64] cVar20;
	
	if (_0x27F76CC6C55AD30E())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&Var16, get_display_name_from_vehicle_model(iParam2), 16);
	if (is_string_null_or_empty(&Var16) || get_hash_key(&Var16) == -515263000)
	{
		return 1;
	}
	StringConCat(&cVar20, "VEM_INSURANCE_", 64);
	StringConCat(&cVar20, &Var16, 64);
	switch (iParam2)
	{
		case joaat("dubsta2"):
		case joaat("cavalcade2"):
		case joaat("mesa2"):
		case joaat("rapidgt2"):
		case joaat("emperor2"):
			StringConCat(&cVar20, "2", 64);
			break;
		
		case joaat("mesa3"):
		case joaat("emperor3"):
		case joaat("burrito3"):
			StringConCat(&cVar20, "3", 64);
			break;
		
		case joaat("tornado4"):
			StringConCat(&cVar20, "4", 64);
			break;
	}
	if (!_0x247F0F73A182EA0B(get_hash_key(&cVar20)))
	{
		return 1;
	}
	return func_433(78225582, -1224924353, get_hash_key(&cVar20), 478352891, 1, 0, 1, 4, get_hash_key(&cVar0), 3);
}

char* func_386(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SILVER";
			break;
		
		case 1:
			return "BLUE_SILVER";
			break;
		
		case 2:
			return "ROLLED_STEEL";
			break;
		
		case 3:
			return "SHADOW_SILVER";
			break;
		
		case 4:
			return "WHITE";
			break;
		
		case 5:
			return "FROST_WHITE";
			break;
		
		case 6:
			return "CREAM";
			break;
		
		case 7:
			return "SIENNA_BROWN";
			break;
		
		case 8:
			return "SADDLE_BROWN";
			break;
		
		case 9:
			return "MOSS_BROWN";
			break;
		
		case 10:
			return "WOODBEECH_BROWN";
			break;
		
		case 11:
			return "STRAW_BROWN";
			break;
		
		case 12:
			return "SANDY_BROWN";
			break;
		
		case 13:
			return "BLEECHED_BROWN";
			break;
		
		case 14:
			return "GOLD";
			break;
		
		case 15:
			return "BRONZE";
			break;
		
		case 16:
			return "YELLOW";
			break;
		
		case 17:
			return "RACE_YELLOW";
			break;
		
		case 18:
			return "FLUR_YELLOW";
			break;
		
		case 19:
			return "ORANGE";
			break;
		
		case 20:
			return "BRIGHT_ORANGE";
			break;
		
		case 21:
			return "SUNRISE_ORANGE";
			break;
		
		case 22:
			return "RED";
			break;
		
		case 23:
			return "TORINO_RED";
			break;
		
		case 24:
			return "FORMULA_RED";
			break;
		
		case 25:
			return "LAVA_RED";
			break;
		
		case 26:
			return "BLAZE_RED";
			break;
		
		case 27:
			return "GRACE_RED";
			break;
		
		case 28:
			return "GARNET_RED";
			break;
		
		case 29:
			return "CANDY_RED";
			break;
		
		case 30:
			return "HOT PINK";
			break;
		
		case 31:
			return "PINK";
			break;
		
		case 32:
			return "SALMON_PINK";
			break;
		
		case 33:
			return "PURPLE";
			break;
		
		case 34:
			return "BRIGHT_PURPLE";
			break;
		
		case 35:
			return "SAXON_BLUE";
			break;
		
		case 36:
			return "BLUE";
			break;
		
		case 37:
			return "MARINER_BLUE";
			break;
		
		case 38:
			return "HARBOR_BLUE";
			break;
		
		case 39:
			return "DIAMOND_BLUE";
			break;
		
		case 40:
			return "SURF_BLUE";
			break;
		
		case 41:
			return "NAUTICAL_BLUE";
			break;
		
		case 42:
			return "RACING_BLUE";
			break;
		
		case 43:
			return "ULTRA_BLUE";
			break;
		
		case 44:
			return "LIGHT_BLUE";
			break;
		
		case 45:
			return "SEA_GREEN";
			break;
		
		case 46:
			return "BRIGHT_GREEN";
			break;
		
		case 47:
			return "PETROL_GREEN";
			break;
		
		case 48:
			return "LIME_GREEN";
			break;
	}
	return "";
}

int func_387(int iParam0, int iParam1)
{
	*iParam1 = -1;
	switch (iParam0)
	{
		case 0:
			*iParam1 = 4;
			break;
		
		case 1:
			*iParam1 = 5;
			break;
		
		case 2:
			*iParam1 = 6;
			break;
		
		case 3:
			*iParam1 = 7;
			break;
		
		case 4:
			*iParam1 = 111;
			break;
		
		case 5:
			*iParam1 = 112;
			break;
		
		case 6:
			*iParam1 = 107;
			break;
		
		case 7:
			*iParam1 = 104;
			break;
		
		case 8:
			*iParam1 = 98;
			break;
		
		case 9:
			*iParam1 = 100;
			break;
		
		case 10:
			*iParam1 = 102;
			break;
		
		case 11:
			*iParam1 = 99;
			break;
		
		case 12:
			*iParam1 = 105;
			break;
		
		case 13:
			*iParam1 = 106;
			break;
		
		case 14:
			*iParam1 = 37;
			break;
		
		case 15:
			*iParam1 = 90;
			break;
		
		case 16:
			*iParam1 = 88;
			break;
		
		case 17:
			*iParam1 = 89;
			break;
		
		case 18:
			*iParam1 = 91;
			break;
		
		case 19:
			*iParam1 = 38;
			break;
		
		case 20:
			*iParam1 = 138;
			break;
		
		case 21:
			*iParam1 = 36;
			break;
		
		case 22:
			*iParam1 = 27;
			break;
		
		case 23:
			*iParam1 = 28;
			break;
		
		case 24:
			*iParam1 = 29;
			break;
		
		case 25:
			*iParam1 = 150;
			break;
		
		case 26:
			*iParam1 = 30;
			break;
		
		case 27:
			*iParam1 = 31;
			break;
		
		case 28:
			*iParam1 = 32;
			break;
		
		case 29:
			*iParam1 = 35;
			break;
		
		case 30:
			*iParam1 = 135;
			break;
		
		case 31:
			*iParam1 = 137;
			break;
		
		case 32:
			*iParam1 = 136;
			break;
		
		case 33:
			*iParam1 = 71;
			break;
		
		case 34:
			*iParam1 = 145;
			break;
		
		case 35:
			*iParam1 = 63;
			break;
		
		case 36:
			*iParam1 = 64;
			break;
		
		case 37:
			*iParam1 = 65;
			break;
		
		case 38:
			*iParam1 = 66;
			break;
		
		case 39:
			*iParam1 = 67;
			break;
		
		case 40:
			*iParam1 = 68;
			break;
		
		case 41:
			*iParam1 = 69;
			break;
		
		case 42:
			*iParam1 = 73;
			break;
		
		case 43:
			*iParam1 = 70;
			break;
		
		case 44:
			*iParam1 = 74;
			break;
		
		case 45:
			*iParam1 = 51;
			break;
		
		case 46:
			*iParam1 = 53;
			break;
		
		case 47:
			*iParam1 = 54;
			break;
		
		case 48:
			*iParam1 = 92;
			break;
	}
	return *iParam1 != -1;
}

int func_388(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	char[64] cVar0;
	char[64] cVar16;
	
	if (_0x27F76CC6C55AD30E())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar16, sParam2, 64);
	if (!_0x247F0F73A182EA0B(get_hash_key(&cVar16)))
	{
		StringCopy(&cVar16, "VEM_COLOUR_", 64);
		StringIntConCat(&cVar16, iParam4, 64);
		StringConCat(&cVar16, "_", 64);
		StringConCat(&cVar16, sParam2, 64);
		StringConCat(&cVar16, "_t", 64);
		StringIntConCat(&cVar16, iParam3, 64);
		StringConCat(&cVar16, "_v", 64);
		StringIntConCat(&cVar16, iParam5, 64);
	}
	if (!_0x247F0F73A182EA0B(get_hash_key(&cVar16)))
	{
		return 1;
	}
	return func_433(78225582, -1224924353, get_hash_key(&cVar16), 478352891, 1, 0, 1, 4, get_hash_key(&cVar0), 3);
}

char* func_389(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BLACK";
			break;
		
		case 1:
			return "GRAPHITE";
			break;
		
		case 2:
			return "ANTHR_BLACK";
			break;
		
		case 3:
			return "BLACK_STEEL";
			break;
		
		case 4:
			return "DARK_SILVER";
			break;
		
		case 5:
			return "BLUE_SILVER";
			break;
		
		case 6:
			return "ROLLED_STEEL";
			break;
		
		case 7:
			return "SHADOW_SILVER";
			break;
		
		case 8:
			return "STONE_SILVER";
			break;
		
		case 9:
			return "MIDNIGHT_SILVER";
			break;
		
		case 10:
			return "CAST_IRON_SIL";
			break;
		
		case 11:
			return "RED";
			break;
		
		case 12:
			return "TORINO_RED";
			break;
		
		case 13:
			return "LAVA_RED";
			break;
		
		case 14:
			return "BLAZE_RED";
			break;
		
		case 15:
			return "GRACE_RED";
			break;
		
		case 16:
			return "GARNET_RED";
			break;
		
		case 17:
			return "SUNSET_RED";
			break;
		
		case 18:
			return "CABERNET_RED";
			break;
		
		case 19:
			return "WINE_RED";
			break;
		
		case 20:
			return "CANDY_RED";
			break;
		
		case 21:
			return "PINK";
			break;
		
		case 22:
			return "SALMON_PINK";
			break;
		
		case 23:
			return "SUNRISE_ORANGE";
			break;
		
		case 24:
			return "ORANGE";
			break;
		
		case 25:
			return "BRIGHT_ORANGE";
			break;
		
		case 26:
			return "BRONZE";
			break;
		
		case 27:
			return "YELLOW";
			break;
		
		case 28:
			return "RACE_YELLOW";
			break;
		
		case 29:
			return "FLUR_YELLOW";
			break;
		
		case 30:
			return "DARK_GREEN";
			break;
		
		case 31:
			return "RACING_GREEN";
			break;
		
		case 32:
			return "SEA_GREEN";
			break;
		
		case 33:
			return "OLIVE_GREEN";
			break;
		
		case 34:
			return "BRIGHT_GREEN";
			break;
		
		case 35:
			return "PETROL_GREEN";
			break;
		
		case 36:
			return "LIME_GREEN";
			break;
		
		case 37:
			return "MIDNIGHT_BLUE";
			break;
		
		case 38:
			return "GALAXY_BLUE";
			break;
		
		case 39:
			return "DARK_BLUE";
			break;
		
		case 40:
			return "SAXON_BLUE";
			break;
		
		case 41:
			return "MARINER_BLUE";
			break;
		
		case 42:
			return "HARBOR_BLUE";
			break;
		
		case 43:
			return "DIAMOND_BLUE";
			break;
		
		case 44:
			return "SURF_BLUE";
			break;
		
		case 45:
			return "NAUTICAL_BLUE";
			break;
		
		case 46:
			return "RACING_BLUE";
			break;
		
		case 47:
			return "ULTRA_BLUE";
			break;
		
		case 48:
			return "LIGHT_BLUE";
			break;
		
		case 49:
			return "CHOCOLATE_BROWN";
			break;
		
		case 50:
			return "BISON_BROWN";
			break;
		
		case 51:
			return "CREEK_BROWN";
			break;
		
		case 52:
			return "UMBER_BROWN";
			break;
		
		case 53:
			return "MAPLE_BROWN";
			break;
		
		case 54:
			return "BEECHWOOD_BROWN";
			break;
		
		case 55:
			return "SIENNA_BROWN";
			break;
		
		case 56:
			return "SADDLE_BROWN";
			break;
		
		case 57:
			return "MOSS_BROWN";
			break;
		
		case 58:
			return "WOODBEECH_BROWN";
			break;
		
		case 59:
			return "STRAW_BROWN";
			break;
		
		case 60:
			return "SANDY_BROWN";
			break;
		
		case 61:
			return "BLEECHED_BROWN";
			break;
		
		case 62:
			return "SPIN_PURPLE";
			break;
		
		case 63:
			return "MIGHT_PURPLE";
			break;
		
		case 64:
			return "BRIGHT_PURPLE";
			break;
		
		case 65:
			return "CREAM";
			break;
		
		case 66:
			return "WHITE";
			break;
		
		case 67:
			return "FROST_WHITE";
			break;
	}
	return "";
}

int func_390(int iParam0, var uParam1)
{
	*uParam1 = -1;
	switch (iParam0)
	{
		case 0:
			*uParam1 = 0;
			break;
		
		case 1:
			*uParam1 = 1;
			break;
		
		case 2:
			*uParam1 = 11;
			break;
		
		case 3:
			*uParam1 = 2;
			break;
		
		case 4:
			*uParam1 = 3;
			break;
		
		case 5:
			*uParam1 = 5;
			break;
		
		case 6:
			*uParam1 = 6;
			break;
		
		case 7:
			*uParam1 = 7;
			break;
		
		case 8:
			*uParam1 = 8;
			break;
		
		case 9:
			*uParam1 = 9;
			break;
		
		case 10:
			*uParam1 = 10;
			break;
		
		case 11:
			*uParam1 = 27;
			break;
		
		case 12:
			*uParam1 = 28;
			break;
		
		case 13:
			*uParam1 = 150;
			break;
		
		case 14:
			*uParam1 = 30;
			break;
		
		case 15:
			*uParam1 = 31;
			break;
		
		case 16:
			*uParam1 = 32;
			break;
		
		case 17:
			*uParam1 = 33;
			break;
		
		case 18:
			*uParam1 = 34;
			break;
		
		case 19:
			*uParam1 = 143;
			break;
		
		case 20:
			*uParam1 = 35;
			break;
		
		case 21:
			*uParam1 = 137;
			break;
		
		case 22:
			*uParam1 = 136;
			break;
		
		case 23:
			*uParam1 = 36;
			break;
		
		case 24:
			*uParam1 = 38;
			break;
		
		case 25:
			*uParam1 = 138;
			break;
		
		case 26:
			*uParam1 = 90;
			break;
		
		case 27:
			*uParam1 = 88;
			break;
		
		case 28:
			*uParam1 = 89;
			break;
		
		case 29:
			*uParam1 = 91;
			break;
		
		case 30:
			*uParam1 = 49;
			break;
		
		case 31:
			*uParam1 = 50;
			break;
		
		case 32:
			*uParam1 = 51;
			break;
		
		case 33:
			*uParam1 = 52;
			break;
		
		case 34:
			*uParam1 = 53;
			break;
		
		case 35:
			*uParam1 = 54;
			break;
		
		case 36:
			*uParam1 = 92;
			break;
		
		case 37:
			*uParam1 = 141;
			break;
		
		case 38:
			*uParam1 = 61;
			break;
		
		case 39:
			*uParam1 = 62;
			break;
		
		case 40:
			*uParam1 = 63;
			break;
		
		case 41:
			*uParam1 = 65;
			break;
		
		case 42:
			*uParam1 = 66;
			break;
		
		case 43:
			*uParam1 = 67;
			break;
		
		case 44:
			*uParam1 = 68;
			break;
		
		case 45:
			*uParam1 = 69;
			break;
		
		case 46:
			*uParam1 = 73;
			break;
		
		case 47:
			*uParam1 = 70;
			break;
		
		case 48:
			*uParam1 = 74;
			break;
		
		case 49:
			*uParam1 = 96;
			break;
		
		case 50:
			*uParam1 = 101;
			break;
		
		case 51:
			*uParam1 = 95;
			break;
		
		case 52:
			*uParam1 = 94;
			break;
		
		case 53:
			*uParam1 = 97;
			break;
		
		case 54:
			*uParam1 = 103;
			break;
		
		case 55:
			*uParam1 = 104;
			break;
		
		case 56:
			*uParam1 = 98;
			break;
		
		case 57:
			*uParam1 = 100;
			break;
		
		case 58:
			*uParam1 = 102;
			break;
		
		case 59:
			*uParam1 = 99;
			break;
		
		case 60:
			*uParam1 = 105;
			break;
		
		case 61:
			*uParam1 = 106;
			break;
		
		case 62:
			*uParam1 = 72;
			break;
		
		case 63:
			*uParam1 = 146;
			break;
		
		case 64:
			*uParam1 = 145;
			break;
		
		case 65:
			*uParam1 = 107;
			break;
		
		case 66:
			*uParam1 = 111;
			break;
		
		case 67:
			*uParam1 = 112;
			break;
	}
	return *uParam1 != -1;
}

int func_391(int iParam0, char* sParam1, char* sParam2, int iParam3, var uParam4)
{
	char[64] cVar0;
	char[64] cVar16;
	
	if (_0x27F76CC6C55AD30E())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar16, sParam2, 64);
	StringConCat(&cVar16, "_t", 64);
	StringIntConCat(&cVar16, iParam3, 64);
	StringConCat(&cVar16, "_v", 64);
	StringIntConCat(&cVar16, uParam4, 64);
	if (!_0x247F0F73A182EA0B(get_hash_key(&cVar16)))
	{
		return 1;
	}
	return func_433(78225582, -1224924353, get_hash_key(&cVar16), 478352891, 1, 0, 1, 4, get_hash_key(&cVar0), 3);
}

int func_392(int iParam0)
{
	switch (iParam0)
	{
		case joaat("windsor"):
			return 1;
			break;
	}
	return -1;
}

int func_393(int iParam0, int iParam1, int iParam2)
{
	if ((iParam0 == 222 && iParam1 == 222) && iParam2 == 255)
	{
		return 0;
	}
	if ((iParam0 == 2 && iParam1 == 21) && iParam2 == 255)
	{
		return 1;
	}
	if ((iParam0 == 3 && iParam1 == 83) && iParam2 == 255)
	{
		return 2;
	}
	if ((iParam0 == 0 && iParam1 == 255) && iParam2 == 140)
	{
		return 3;
	}
	if ((iParam0 == 94 && iParam1 == 255) && iParam2 == 1)
	{
		return 4;
	}
	if ((iParam0 == 255 && iParam1 == 255) && iParam2 == 0)
	{
		return 5;
	}
	if ((iParam0 == 255 && iParam1 == 150) && iParam2 == 5)
	{
		return 6;
	}
	if ((iParam0 == 255 && iParam1 == 62) && iParam2 == 0)
	{
		return 7;
	}
	if ((iParam0 == 255 && iParam1 == 1) && iParam2 == 1)
	{
		return 8;
	}
	if ((iParam0 == 255 && iParam1 == 50) && iParam2 == 100)
	{
		return 9;
	}
	if ((iParam0 == 255 && iParam1 == 5) && iParam2 == 190)
	{
		return 10;
	}
	if ((iParam0 == 35 && iParam1 == 1) && iParam2 == 255)
	{
		return 11;
	}
	if ((iParam0 == 15 && iParam1 == 3) && iParam2 == 255)
	{
		return 12;
	}
	if ((network_is_game_in_progress() && func_394()) && Global_1317071)
	{
		if ((iParam0 == Global_1317072 && iParam1 == Global_1317073) && iParam2 == Global_1317074)
		{
			return 13;
		}
	}
	return 0;
}

bool func_394()
{
	struct<13> Var0;
	
	if (is_player_online())
	{
		if ((network_is_signed_online() && network_is_signed_in()) && _0x67A5589628E0CFF6())
		{
			Var0 = {func_395()};
			if (_network_player_is_in_clan() && network_clan_player_is_active(&Var0))
			{
				return true;
			}
		}
	}
	return false;
}

struct<13> func_395()
{
	struct<13> Var0;
	
	network_get_local_handle(&Var0, 13);
	return Var0;
}

int func_396(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, var uParam5, int iParam6)
{
	char[64] cVar0;
	char[64] cVar16;
	
	if (_0x27F76CC6C55AD30E())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar16, sParam2, 64);
	StringConCat(&cVar16, "_", 64);
	if (iParam3 == 0 && !iParam6)
	{
		StringConCat(&cVar16, "255", 64);
	}
	else
	{
		StringIntConCat(&cVar16, iParam3, 64);
	}
	StringConCat(&cVar16, "_t", 64);
	StringIntConCat(&cVar16, iParam4, 64);
	StringConCat(&cVar16, "_v", 64);
	StringIntConCat(&cVar16, uParam5, 64);
	if (!_0x247F0F73A182EA0B(get_hash_key(&cVar16)))
	{
		return 1;
	}
	return func_433(78225582, -1224924353, get_hash_key(&cVar16), 478352891, 1, 0, 1, 4, get_hash_key(&cVar0), 3);
}

int func_397(int iParam0, int iParam1, int iParam2)
{
	if ((iParam2 && iParam1) && iParam0)
	{
		return 7;
	}
	else if ((iParam2 && iParam1) && !iParam0)
	{
		return 6;
	}
	else if ((!iParam2 && iParam1) && iParam0)
	{
		return 5;
	}
	else if ((iParam2 && !iParam1) && iParam0)
	{
		return 4;
	}
	else if ((!iParam2 && iParam1) && !iParam0)
	{
		return 3;
	}
	else if ((iParam2 && !iParam1) && !iParam0)
	{
		return 2;
	}
	else if ((!iParam2 && !iParam1) && iParam0)
	{
		return 1;
	}
	return 0;
}

int func_398(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	char[64] cVar0;
	char[64] cVar16;
	
	if (_0x27F76CC6C55AD30E())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar16, sParam2, 64);
	StringConCat(&cVar16, "_", 64);
	if (iParam3 == -1)
	{
		StringConCat(&cVar16, "PAT", 64);
	}
	else
	{
		StringIntConCat(&cVar16, iParam3, 64);
	}
	StringConCat(&cVar16, "_t", 64);
	StringIntConCat(&cVar16, iParam4, 64);
	StringConCat(&cVar16, "_v", 64);
	StringIntConCat(&cVar16, uParam5, 64);
	if (!_0x247F0F73A182EA0B(get_hash_key(&cVar16)))
	{
		return 1;
	}
	return func_433(78225582, -1224924353, get_hash_key(&cVar16), 478352891, 1, 0, 1, 4, get_hash_key(&cVar0), 3);
}

int func_399(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	
	if ((iParam0 == 255 && iParam1 == 255) && iParam2 == 255)
	{
		return 1;
	}
	if ((iParam0 == 0 && iParam1 == 0) && iParam2 == 0)
	{
		return 11;
	}
	if ((iParam0 == 255 && iParam1 == 127) && iParam2 == 0)
	{
		return 6;
	}
	if ((iParam0 == 252 && iParam1 == 238) && iParam2 == 0)
	{
		return 4;
	}
	if ((iParam0 == 0 && iParam1 == 174) && iParam2 == 239)
	{
		return 3;
	}
	if ((iParam0 == 226 && iParam1 == 6) && iParam2 == 6)
	{
		return 8;
	}
	if ((iParam0 == 20 && iParam1 == 20) && iParam2 == 20)
	{
		return 2;
	}
	if ((iParam0 == Global_1317072 && iParam1 == Global_1317073) && iParam2 == Global_1317074)
	{
		return 12;
	}
	if (func_401())
	{
		get_hud_colour(21, &iVar0, &iVar1, &iVar2, &uVar3);
		if ((iParam0 == iVar0 && iParam1 == iVar1) && iParam2 == iVar2)
		{
			return 5;
		}
		get_hud_colour(18, &iVar0, &iVar1, &iVar2, &uVar3);
		if ((iParam0 == iVar0 && iParam1 == iVar1) && iParam2 == iVar2)
		{
			return 7;
		}
		if (((iParam0 == 114 && iParam1 == 204) && iParam2 == 114) || ((iParam0 == 102 && iParam1 == 152) && iParam2 == 104))
		{
			return 7;
		}
	}
	if (func_400())
	{
		get_hud_colour(24, &iVar4, &iVar5, &iVar6, &uVar7);
		if ((iParam0 == iVar4 && iParam1 == iVar5) && iParam2 == iVar6)
		{
			return 9;
		}
		get_hud_colour(107, &iVar4, &iVar5, &iVar6, &uVar7);
		if ((iParam0 == iVar4 && iParam1 == iVar5) && iParam2 == iVar6)
		{
			return 10;
		}
	}
	return 1;
}

int func_400()
{
	return is_dlc_present(1785846048);
}

int func_401()
{
	return is_dlc_present(42019760);
}

int func_402(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 156:
			iVar0 = 0;
			break;
		
		case 0:
			iVar0 = 1;
			break;
		
		case 1:
			iVar0 = 2;
			break;
		
		case 11:
			iVar0 = 3;
			break;
		
		case 2:
			iVar0 = 4;
			break;
		
		case 8:
			iVar0 = 5;
			break;
		
		case 122:
			iVar0 = 6;
			break;
		
		case 27:
			iVar0 = 7;
			break;
		
		case 30:
			iVar0 = 8;
			break;
		
		case 45:
			iVar0 = 9;
			break;
		
		case 35:
			iVar0 = 10;
			break;
		
		case 33:
			iVar0 = 11;
			break;
		
		case 136:
			iVar0 = 12;
			break;
		
		case 135:
			iVar0 = 13;
			break;
		
		case 36:
			iVar0 = 14;
			break;
		
		case 41:
			iVar0 = 15;
			break;
		
		case 138:
			iVar0 = 16;
			break;
		
		case 37:
			iVar0 = 17;
			break;
		
		case 99:
			iVar0 = 18;
			break;
		
		case 90:
			iVar0 = 19;
			break;
		
		case 95:
			iVar0 = 20;
			break;
		
		case 115:
			iVar0 = 21;
			break;
		
		case 109:
			iVar0 = 22;
			break;
		
		case 153:
			iVar0 = 23;
			break;
		
		case 154:
			iVar0 = 24;
			break;
		
		case 88:
			iVar0 = 25;
			break;
		
		case 89:
			iVar0 = 26;
			break;
		
		case 91:
			iVar0 = 27;
			break;
		
		case 55:
			iVar0 = 28;
			break;
		
		case 125:
			iVar0 = 29;
			break;
		
		case 53:
			iVar0 = 30;
			break;
		
		case 56:
			iVar0 = 31;
			break;
		
		case 151:
			iVar0 = 32;
			break;
		
		case 82:
			iVar0 = 33;
			break;
		
		case 64:
			iVar0 = 34;
			break;
		
		case 87:
			iVar0 = 35;
			break;
		
		case 70:
			iVar0 = 36;
			break;
		
		case 140:
			iVar0 = 37;
			break;
		
		case 81:
			iVar0 = 38;
			break;
		
		case 145:
			iVar0 = 39;
			break;
		
		case 142:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

int func_403(int iParam0, char* sParam1, int iParam2)
{
	char[64] cVar0;
	int iVar16;
	
	if (_0x27F76CC6C55AD30E())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	iVar16 = func_404(get_vehicle_wheel_type(iParam2));
	if (!_0x247F0F73A182EA0B(iVar16))
	{
		return 1;
	}
	return func_433(78225582, -1224924353, iVar16, 478352891, 1, 0, 1, 4, get_hash_key(&cVar0), 3);
}

int func_404(int iParam0)
{
	char[32] cVar0;
	
	StringCopy(&cVar0, "VEM_", 32);
	switch (iParam0)
	{
		case -1:
			StringConCat(&cVar0, "MWT_INVALID", 32);
			break;
		
		case 0:
			StringConCat(&cVar0, "MWT_SPORT", 32);
			break;
		
		case 1:
			StringConCat(&cVar0, "MWT_MUSCLE", 32);
			break;
		
		case 2:
			StringConCat(&cVar0, "MWT_LOWRIDER", 32);
			break;
		
		case 3:
			StringConCat(&cVar0, "MWT_SUV", 32);
			break;
		
		case 4:
			StringConCat(&cVar0, "MWT_OFFROAD", 32);
			break;
		
		case 5:
			StringConCat(&cVar0, "MWT_TUNER", 32);
			break;
		
		case 6:
			StringConCat(&cVar0, "MWT_BIKE", 32);
			break;
		
		case 7:
			StringConCat(&cVar0, "MWT_HIEND", 32);
			break;
		
		case 8:
			StringConCat(&cVar0, "MWT_SUPERMOD1", 32);
			break;
		
		case 9:
			StringConCat(&cVar0, "MWT_SUPERMOD2", 32);
			break;
	}
	StringConCat(&cVar0, "_t", 32);
	StringIntConCat(&cVar0, iParam0, 32);
	StringConCat(&cVar0, "_v0", 32);
	return get_hash_key(&cVar0);
}

int func_405(int iParam0, char* sParam1, int iParam2, int iParam3, var uParam4)
{
	char[64] cVar0;
	char[64] cVar16;
	int iVar32;
	
	if (_0x27F76CC6C55AD30E())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar16, "VEM_", 64);
	iVar32 = get_vehicle_mod(iParam2, iParam3);
	if (iVar32 == -1 || (iParam3 == 24 && !is_this_model_a_bike(get_entity_model(iParam2))))
	{
		if (is_this_model_a_bike(get_entity_model(iParam2)))
		{
			StringConCat(&cVar16, "CMOD_WHE_B_0", 64);
		}
		else
		{
			StringConCat(&cVar16, "CMOD_WHE_0", 64);
		}
	}
	else
	{
		StringConCat(&cVar16, get_mod_text_label(iParam2, iParam3, iVar32), 64);
	}
	StringConCat(&cVar16, "_t19_v", 64);
	StringIntConCat(&cVar16, uParam4, 64);
	if (!_0x247F0F73A182EA0B(get_hash_key(&cVar16)))
	{
		return 1;
	}
	return func_433(78225582, -1224924353, get_hash_key(&cVar16), 478352891, 1, 0, 1, 4, get_hash_key(&cVar0), 3);
}

int func_406(int iParam0, char* sParam1, char* sParam2, int iParam3, var uParam4)
{
	char[64] cVar0;
	char[64] cVar16;
	
	if (_0x27F76CC6C55AD30E())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar16, "VEM_", 64);
	StringConCat(&cVar16, sParam2, 64);
	StringConCat(&cVar16, "_t", 64);
	StringIntConCat(&cVar16, iParam3, 64);
	StringConCat(&cVar16, "_v", 64);
	StringIntConCat(&cVar16, uParam4, 64);
	if (!_0x247F0F73A182EA0B(get_hash_key(&cVar16)))
	{
		return 1;
	}
	return func_433(78225582, -1224924353, get_hash_key(&cVar16), 478352891, 1, 0, 1, 4, get_hash_key(&cVar0), 3);
}

char* func_407(var uParam0)
{
	char* sVar0;
	int iVar1;
	
	sVar0 = "";
	iVar1 = uParam0;
	switch (iVar1)
	{
		case 0:
			sVar0 = "CMOD_HRN_0";
			break;
		
		case 1:
			sVar0 = "HORN_INDI_1";
			break;
		
		case 2:
			sVar0 = "HORN_INDI_2";
			break;
		
		case 3:
			sVar0 = "HORN_INDI_3";
			break;
		
		case 4:
			sVar0 = "HORN_INDI_4";
			break;
		
		case 5:
			sVar0 = "HORN_HIPS1";
			break;
		
		case 6:
			sVar0 = "HORN_HIPS2";
			break;
		
		case 7:
			sVar0 = "HORN_HIPS3";
			break;
		
		case 8:
			sVar0 = "HORN_HIPS4";
			break;
		
		case 9:
			sVar0 = "HORN_CNOTE_C0";
			break;
		
		case 10:
			sVar0 = "HORN_CNOTE_D0";
			break;
		
		case 11:
			sVar0 = "HORN_CNOTE_E0";
			break;
		
		case 12:
			sVar0 = "HORN_CNOTE_F0";
			break;
		
		case 13:
			sVar0 = "HORN_CNOTE_G0";
			break;
		
		case 14:
			sVar0 = "HORN_CNOTE_A0";
			break;
		
		case 15:
			sVar0 = "HORN_CNOTE_B0";
			break;
		
		case 16:
			sVar0 = "HORN_CNOTE_C1";
			break;
		
		case 17:
			sVar0 = "HORN_CLAS1";
			break;
		
		case 18:
			sVar0 = "HORN_CLAS2";
			break;
		
		case 19:
			sVar0 = "HORN_CLAS3";
			break;
		
		case 20:
			sVar0 = "HORN_CLAS4";
			break;
		
		case 21:
			sVar0 = "HORN_CLAS5";
			break;
		
		case 22:
			sVar0 = "HORN_CLAS6";
			break;
		
		case 23:
			sVar0 = "HORN_CLAS7";
			break;
		
		case 24:
			sVar0 = "HORN_LUXE1";
			break;
		
		case 25:
			sVar0 = "HORN_LUXE2";
			break;
		
		case 26:
			sVar0 = "HORN_LUXE3";
			break;
		
		case 30:
			sVar0 = "HORN_LOWRDER1";
			break;
		
		case 31:
			sVar0 = "HORN_LOWRDER2";
			break;
		
		case 34:
			sVar0 = "HORN_HWEEN1";
			break;
		
		case 35:
			sVar0 = "HORN_HWEEN2";
			break;
		
		case 38:
			sVar0 = "HORN_XM15_1";
			break;
		
		case 39:
			sVar0 = "HORN_XM15_2";
			break;
		
		case 40:
			sVar0 = "HORN_XM15_3";
			break;
		
		case 46:
			sVar0 = "CMOD_HRN_CLO";
			break;
		
		case 45:
			sVar0 = "CMOD_HRN_COP";
			break;
		
		case 44:
			sVar0 = "CMOD_HRN_TRK";
			break;
		
		case 47:
			sVar0 = "CMOD_HRN_MUS1";
			break;
		
		case 48:
			sVar0 = "CMOD_HRN_MUS2";
			break;
		
		case 49:
			sVar0 = "CMOD_HRN_MUS3";
			break;
		
		case 50:
			sVar0 = "CMOD_HRN_MUS4";
			break;
		
		case 51:
			sVar0 = "CMOD_HRN_MUS5";
			break;
		
		case 52:
			sVar0 = "CMOD_HRN_SAD";
			break;
	}
	return sVar0;
}

int func_408(int iParam0)
{
	switch (iParam0)
	{
		case -722822506:
			return 1;
			break;
		
		case -493570582:
			return 2;
			break;
		
		case -1451310145:
			return 3;
			break;
		
		case -953155807:
			return 4;
			break;
		
		case 444549672:
			return 5;
			break;
		
		case 1603064898:
			return 6;
			break;
		
		case 240366033:
			return 7;
			break;
		
		case 960137118:
			return 8;
			break;
		
		case 771284519:
			return 9;
			break;
		
		case -1708346067:
			return 10;
			break;
		
		case 283386134:
			return 11;
			break;
		
		case -410464896:
			return 12;
			break;
		
		case 265723083:
			return 13;
			break;
		
		case 1746883687:
			return 14;
			break;
		
		case 1919870950:
			return 15;
			break;
		
		case 1085277077:
			return 16;
			break;
		
		case -666433007:
			return 17;
			break;
		
		case -402413174:
			return 18;
			break;
		
		case -182074418:
			return 19;
			break;
		
		case 116877169:
			return 20;
			break;
		
		case -1609983577:
			return 21;
			break;
		
		case -1312277212:
			return 22;
			break;
		
		case -1091676304:
			return 23;
			break;
		
		case -1394589232:
			return 24;
			break;
		
		case -1095309955:
			return 25;
			break;
		
		case -338772048:
			return 26;
			break;
		
		case 2099578296:
			return 27;
			break;
		
		case 676333254:
			return 28;
			break;
		
		case 1373384483:
			return 29;
			break;
		
		case 310529291:
			return 30;
			break;
		
		case 55291550:
			return 31;
			break;
		
		case -1329398309:
			return 32;
			break;
		
		case 965054819:
			return 33;
			break;
		
		case -1378191490:
			return 34;
			break;
		
		case -1683107035:
			return 35;
			break;
		
		case -580260344:
			return 36;
			break;
		
		case -1088196937:
			return 37;
			break;
		
		case 55862314:
			return 38;
			break;
		
		case 400002352:
			return 39;
			break;
		
		case 560832604:
			return 40;
			break;
		
		case -2138224118:
			return 41;
			break;
		
		case 897484282:
			return 42;
			break;
		
		case 314232747:
			return 43;
			break;
		
		case 1307678422:
			return 46;
			break;
		
		case -208525380:
			return 45;
			break;
		
		case 1646559452:
			return 44;
			break;
		
		case 50707886:
			return 47;
			break;
		
		case 273438779:
			return 48;
			break;
		
		case 1592391033:
			return 49;
			break;
		
		case -319516276:
			return 50;
			break;
		
		case 993865248:
			return 51;
			break;
		
		case 632950117:
			return 52;
			break;
	}
	return 0;
}

bool func_409(int iParam0)
{
	if (iParam0)
	{
		return true;
	}
	return false;
}

int func_410(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, var uParam5, int iParam6)
{
	char[64] cVar0;
	char[64] cVar16;
	
	if (_0x27F76CC6C55AD30E())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar16, sParam2, 64);
	StringConCat(&cVar16, "_", 64);
	if (iParam4 == 33)
	{
		if (iParam3 < 0 || iParam3 > 3)
		{
			iParam3 = 0;
		}
	}
	StringIntConCat(&cVar16, iParam3, 64);
	if (iParam6 != -1)
	{
		StringConCat(&cVar16, "_n", 64);
		StringIntConCat(&cVar16, iParam6, 64);
	}
	StringConCat(&cVar16, "_t", 64);
	StringIntConCat(&cVar16, iParam4, 64);
	StringConCat(&cVar16, "_v", 64);
	StringIntConCat(&cVar16, uParam5, 64);
	if (!_0x247F0F73A182EA0B(get_hash_key(&cVar16)))
	{
		return 1;
	}
	return func_433(78225582, -1224924353, get_hash_key(&cVar16), 478352891, 1, 0, 1, 4, get_hash_key(&cVar0), 3);
}

int func_411(int iParam0)
{
	switch (iParam0)
	{
		case joaat("faction3"):
			return 12;
			break;
	}
	return func_421(iParam0);
}

int func_412(int iParam0)
{
	switch (iParam0)
	{
		case joaat("btype2"):
			return 9;
			break;
		
		case joaat("lurcher"):
			return 8;
			break;
		
		case joaat("sultanrs"):
			return 6;
			break;
		
		case joaat("banshee2"):
			return 7;
			break;
		
		case joaat("btype3"):
			return 5;
			break;
	}
	return 3;
}

int func_413(int iParam0)
{
	switch (iParam0)
	{
		case joaat("virgo2"):
			return 10;
			break;
		
		case joaat("slamvan3"):
			return 11;
			break;
	}
	switch (iParam0)
	{
		case joaat("sultanrs"):
			return 6;
			break;
		
		case joaat("banshee2"):
			return 7;
			break;
	}
	switch (iParam0)
	{
		case joaat("btype3"):
			return 5;
			break;
	}
	switch (iParam0)
	{
		case joaat("faction3"):
			return 3;
			break;
		
		case joaat("minivan2"):
			return 3;
			break;
		
		case joaat("sabregt2"):
			return 3;
			break;
		
		case joaat("slamvan3"):
			return 3;
			break;
		
		case joaat("tornado5"):
			return 3;
			break;
		
		case joaat("virgo2"):
			return 3;
			break;
	}
	return 3;
}

int func_414(int iParam0)
{
	switch (iParam0)
	{
		case joaat("virgo2"):
			return 10;
			break;
		
		case joaat("slamvan3"):
			return 11;
			break;
	}
	switch (iParam0)
	{
		case joaat("sultanrs"):
			return 6;
			break;
		
		case joaat("banshee2"):
			return 7;
			break;
	}
	switch (iParam0)
	{
		case joaat("btype3"):
			return 5;
			break;
	}
	switch (iParam0)
	{
		case joaat("faction3"):
			return 3;
			break;
		
		case joaat("minivan2"):
			return 0;
			break;
		
		case joaat("sabregt2"):
			return 0;
			break;
		
		case joaat("slamvan3"):
			return 0;
			break;
		
		case joaat("tornado5"):
			return 0;
			break;
		
		case joaat("virgo2"):
			return 3;
			break;
		
		case joaat("virgo3"):
			return 3;
			break;
	}
	if (func_415(iParam0))
	{
		return 3;
	}
	if (is_this_model_a_bike(iParam0))
	{
		return 4;
	}
	switch (iParam0)
	{
		case joaat("adder"):
			return 3;
			break;
		
		case joaat("airbus"):
			return 0;
			break;
		
		case joaat("akuma"):
			return 4;
			break;
		
		case joaat("alpha"):
			return 3;
			break;
		
		case joaat("annihilator"):
			return 0;
			break;
		
		case joaat("asea"):
			return 0;
			break;
		
		case joaat("asterope"):
			return 0;
			break;
		
		case joaat("baller2"):
			return 2;
			break;
		
		case joaat("banshee"):
			return 3;
			break;
		
		case joaat("barracks"):
			return 0;
			break;
		
		case joaat("bati"):
			return 4;
			break;
		
		case joaat("bati2"):
			return 4;
			break;
		
		case joaat("besra"):
			return 0;
			break;
		
		case joaat("bfinjection"):
			return 0;
			break;
		
		case joaat("bifta"):
			return 0;
			break;
		
		case joaat("bison"):
			return 2;
			break;
		
		case joaat("blade"):
			return 3;
			break;
		
		case joaat("blazer"):
			return 0;
			break;
		
		case joaat("blazer3"):
			return 0;
			break;
		
		case joaat("bmx"):
			return 0;
			break;
		
		case joaat("bobcatxl"):
			return 2;
			break;
		
		case joaat("bodhi2"):
			return 0;
			break;
		
		case joaat("btype"):
			return 0;
			break;
		
		case joaat("buffalo"):
			return 0;
			break;
		
		case joaat("buffalo2"):
			return 1;
			break;
		
		case joaat("bullet"):
			return 3;
			break;
		
		case joaat("bus"):
			return 0;
			break;
		
		case joaat("buzzard"):
			return 0;
			break;
		
		case joaat("carbonizzare"):
			return 3;
			break;
		
		case joaat("carbonrs"):
			return 3;
			break;
		
		case joaat("cavalcade"):
			return 2;
			break;
		
		case joaat("cavalcade2"):
			return 2;
			break;
		
		case joaat("cheetah"):
			return 3;
			break;
		
		case joaat("coach"):
			return 0;
			break;
		
		case joaat("cogcabrio"):
			return 3;
			break;
		
		case joaat("comet2"):
			return 3;
			break;
		
		case joaat("coquette"):
			return 3;
			break;
		
		case joaat("coquette2"):
			return 1;
			break;
		
		case joaat("cruiser"):
			return 0;
			break;
		
		case joaat("crusader"):
			return 0;
			break;
		
		case joaat("cuban800"):
			return 0;
			break;
		
		case joaat("dilettante"):
			return 0;
			break;
		
		case joaat("dilettante2"):
			return 0;
			break;
		
		case joaat("dominator"):
			return 1;
			break;
		
		case joaat("dominator2"):
			return 1;
			break;
		
		case joaat("double"):
			return 4;
			break;
		
		case joaat("dubsta3"):
			return 3;
			break;
		
		case joaat("dump"):
			return 0;
			break;
		
		case joaat("dune"):
			return 0;
			break;
		
		case joaat("duster"):
			return 0;
			break;
		
		case joaat("elegy2"):
			return 3;
			break;
		
		case joaat("entityxf"):
			return 3;
			break;
		
		case joaat("exemplar"):
			return 3;
			break;
		
		case joaat("f620"):
			return 1;
			break;
		
		case joaat("faggio2"):
			return 4;
			break;
		
		case joaat("felon"):
			return 0;
			break;
		
		case joaat("felon2"):
			return 0;
			break;
		
		case joaat("feltzer2"):
			return 3;
			break;
		
		case joaat("frogger"):
			return 0;
			break;
		
		case joaat("frogger2"):
			return 0;
			break;
		
		case joaat("fugitive"):
			return 0;
			break;
		
		case joaat("fusilade"):
			return 1;
			break;
		
		case joaat("gauntlet"):
			return 0;
			break;
		
		case joaat("gauntlet2"):
			return 0;
			break;
		
		case joaat("glendale"):
			return 3;
			break;
		
		case joaat("granger"):
			return 2;
			break;
		
		case joaat("gresley"):
			return 2;
			break;
		
		case joaat("hexer"):
			return 4;
			break;
		
		case joaat("hotknife"):
			return 3;
			break;
		
		case joaat("huntley"):
			return 1;
			break;
		
		case joaat("hydra"):
			return 0;
			break;
		
		case joaat("infernus"):
			return 3;
			break;
		
		case joaat("ingot"):
			return 0;
			break;
		
		case joaat("intruder"):
			return 0;
			break;
		
		case joaat("issi2"):
			return 0;
			break;
		
		case joaat("jackal"):
			return 1;
			break;
		
		case joaat("jb700"):
			return 3;
			break;
		
		case joaat("jester"):
			return 3;
			break;
		
		case joaat("jester2"):
			return 3;
			break;
		
		case joaat("jetmax"):
			return 0;
			break;
		
		case joaat("journey"):
			return 0;
			break;
		
		case joaat("kalahari"):
			return 0;
			break;
		
		case joaat("khamelion"):
			return 3;
			break;
		
		case joaat("landstalker"):
			return 2;
			break;
		
		case joaat("luxor"):
			return 0;
			break;
		
		case joaat("mammatus"):
			return 0;
			break;
		
		case joaat("marquis"):
			return 0;
			break;
		
		case joaat("massacro"):
			return 3;
			break;
		
		case joaat("massacro2"):
			return 3;
			break;
		
		case joaat("maverick"):
			return 0;
			break;
		
		case joaat("mesa"):
			return 2;
			break;
		
		case joaat("mesa2"):
			return 2;
			break;
		
		case joaat("mesa3"):
			return 2;
			break;
		
		case joaat("miljet"):
			return 0;
			break;
		
		case joaat("minivan"):
			return 0;
			break;
		
		case joaat("monroe"):
			return 3;
			break;
		
		case joaat("monster"):
			return 0;
			break;
		
		case joaat("mule"):
			return 0;
			break;
		
		case joaat("mule2"):
			return 0;
			break;
		
		case joaat("mule3"):
			return 0;
			break;
	}
	switch (iParam0)
	{
		case joaat("nemesis"):
			return 4;
			break;
		
		case joaat("ninef"):
			return 3;
			break;
		
		case joaat("ninef2"):
			return 3;
			break;
		
		case joaat("oracle"):
			return 1;
			break;
		
		case joaat("oracle2"):
			return 1;
			break;
		
		case joaat("panto"):
			return 3;
			break;
		
		case joaat("paradise"):
			return 0;
			break;
		
		case joaat("pcj"):
			return 4;
			break;
		
		case joaat("penumbra"):
			return 1;
			break;
		
		case joaat("picador"):
			return 0;
			break;
		
		case joaat("pigalle"):
			return 3;
			break;
		
		case joaat("premier"):
			return 0;
			break;
		
		case joaat("primo"):
			return 0;
			break;
		
		case joaat("radi"):
			return 0;
			break;
		
		case joaat("rancherxl"):
			return 2;
			break;
		
		case joaat("rancherxl2"):
			return 2;
			break;
		
		case joaat("rapidgt"):
			return 3;
			break;
		
		case joaat("ratloader"):
			return 2;
			break;
		
		case joaat("ratloader2"):
			return 2;
			break;
		
		case joaat("rebel"):
			return 2;
			break;
		
		case joaat("rebel2"):
			return 2;
			break;
		
		case joaat("regina"):
			return 0;
			break;
		
		case joaat("rentalbus"):
			return 0;
			break;
		
		case joaat("rhapsody"):
			return 3;
			break;
		
		case joaat("rhino"):
			return 0;
			break;
		
		case joaat("rocoto"):
			return 2;
			break;
		
		case joaat("ruffian"):
			return 4;
			break;
		
		case joaat("rumpo"):
			return 0;
			break;
		
		case joaat("sadler"):
			return 2;
			break;
		
		case joaat("sanchez"):
			return 4;
			break;
		
		case joaat("sanchez2"):
			return 4;
			break;
		
		case joaat("sandking"):
			return 2;
			break;
		
		case joaat("sandking2"):
			return 2;
			break;
		
		case joaat("schafter2"):
			return 1;
			break;
		
		case joaat("schwarzer"):
			return 1;
			break;
		
		case joaat("scorcher"):
			return 0;
			break;
		
		case joaat("seashark"):
			return 0;
			break;
		
		case joaat("seminole"):
			return 2;
			break;
		
		case joaat("sentinel"):
			return 1;
			break;
		
		case joaat("sentinel2"):
			return 1;
			break;
		
		case joaat("shamal"):
			return 0;
			break;
		
		case joaat("sovereign"):
			return 4;
			break;
		
		case joaat("speeder"):
			return 0;
			break;
		
		case joaat("squalo"):
			return 0;
			break;
		
		case joaat("stanier"):
			return 0;
			break;
		
		case joaat("stinger"):
			return 3;
			break;
		
		case joaat("stingergt"):
			return 3;
			break;
		
		case joaat("stratum"):
			return 0;
			break;
		
		case joaat("stretch"):
			return 0;
			break;
		
		case joaat("stunt"):
			return 0;
			break;
		
		case joaat("suntrap"):
			return 0;
			break;
		
		case joaat("superd"):
			return 3;
			break;
		
		case joaat("surano"):
			return 3;
			break;
		
		case joaat("surfer"):
			return 0;
			break;
		
		case joaat("surge"):
			return 0;
			break;
		
		case joaat("tailgater"):
			return 0;
			break;
		
		case joaat("thrust"):
			return 4;
			break;
		
		case joaat("titan"):
			return 0;
			break;
		
		case joaat("tribike"):
			return 4;
			break;
		
		case joaat("tribike2"):
			return 4;
			break;
		
		case joaat("tribike3"):
			return 4;
			break;
		
		case joaat("tropic"):
			return 0;
			break;
		
		case joaat("turismor"):
			return 3;
			break;
		
		case joaat("vacca"):
			return 3;
			break;
		
		case joaat("vader"):
			return 4;
			break;
		
		case joaat("valkyrie"):
			return 0;
			break;
		
		case joaat("velum"):
			return 0;
			break;
		
		case joaat("vestra"):
			return 0;
			break;
		
		case joaat("vigero"):
			return 1;
			break;
		
		case joaat("voltic"):
			return 3;
			break;
		
		case joaat("warrener"):
			return 3;
			break;
		
		case joaat("washington"):
			return 0;
			break;
		
		case joaat("youga"):
			return 2;
			break;
		
		case joaat("zentorno"):
			return 3;
			break;
		
		case joaat("zion"):
			return 1;
			break;
		
		case joaat("zion2"):
			return 1;
			break;
		
		case joaat("ztype"):
			return 3;
			break;
		
		case joaat("swift"):
			return 0;
			break;
		
		case joaat("innovation"):
			return 4;
			break;
		
		case joaat("hakuchou"):
			return 4;
			break;
		
		case joaat("furoregt"):
			return 0;
			break;
		
		case joaat("kuruma"):
			return 3;
			break;
		
		case joaat("blista2"):
			return 0;
			break;
		
		case joaat("blista3"):
			return 0;
			break;
		
		case joaat("buffalo3"):
			return 1;
			break;
		
		case joaat("dodo"):
			return 0;
			break;
		
		case joaat("dominator"):
			return 1;
			break;
		
		case joaat("dominator2"):
			return 1;
			break;
		
		case joaat("dukes"):
			return 1;
			break;
		
		case joaat("dukes2"):
			return 0;
			break;
		
		case joaat("marshall"):
			return 0;
			break;
		
		case joaat("stalion"):
			return 0;
			break;
		
		case joaat("stalion2"):
			return 0;
			break;
		
		case joaat("submersible"):
			return 0;
			break;
		
		case joaat("submersible2"):
			return 0;
			break;
	}
	switch (iParam0)
	{
		case joaat("bagger"):
			return 4;
			break;
		
		case joaat("baller"):
			return 2;
			break;
		
		case joaat("bjxl"):
			return 2;
			break;
		
		case joaat("blista"):
			return 0;
			break;
		
		case joaat("blista2"):
			return 0;
			break;
		
		case joaat("buccaneer"):
			return 0;
			break;
		
		case joaat("daemon"):
			return 4;
			break;
		
		case joaat("dloader"):
			return 0;
			break;
		
		case joaat("fq2"):
			return 0;
			break;
		
		case joaat("habanero"):
			return 0;
			break;
		
		case joaat("manana"):
			return 0;
			break;
		
		case joaat("patriot"):
			return 2;
			break;
		
		case joaat("peyote"):
			return 0;
			break;
		
		case joaat("phoenix"):
			return 0;
			break;
		
		case joaat("prairie"):
			return 0;
			break;
		
		case joaat("sabregt"):
			return 0;
			break;
		
		case joaat("serrano"):
			return 2;
			break;
		
		case joaat("speedo"):
			return 0;
			break;
		
		case joaat("speedo2"):
			return 0;
			break;
		
		case joaat("voodoo2"):
			return 0;
			break;
		
		case joaat("romero"):
			return 0;
			break;
		
		case joaat("surfer2"):
			return 0;
			break;
		
		case joaat("emperor2"):
			return 0;
			break;
		
		case joaat("dubsta2"):
			return 2;
			break;
		
		case joaat("blazer2"):
			return 0;
			break;
		
		case joaat("oracle2"):
			return 1;
			break;
		
		case joaat("cavalcade2"):
			return 2;
			break;
		
		case joaat("dubsta"):
			return 2;
			break;
		
		case joaat("rapidgt2"):
			return 1;
			break;
		
		case joaat("boxville4"):
			return 0;
			break;
		
		case joaat("mesa"):
			return 2;
			break;
	}
	switch (iParam0)
	{
		case joaat("windsor"):
		case joaat("osiris"):
		case joaat("feltzer3"):
		case joaat("virgo"):
			return 3;
			break;
		
		case joaat("faction"):
		case joaat("faction2"):
		case joaat("moonbeam2"):
		case joaat("moonbeam"):
			return 3;
			break;
		
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("primo2"):
		case joaat("voodoo"):
			return 0;
			break;
		
		case joaat("btype2"):
		case joaat("lurcher"):
			return 3;
			break;
	}
	return 0;
}

bool func_415(int iParam0)
{
	switch (iParam0)
	{
		case joaat("adder"):
		case joaat("banshee"):
		case joaat("bullet"):
		case joaat("carbonizzare"):
		case joaat("carbonrs"):
		case joaat("cheetah"):
		case joaat("cogcabrio"):
		case joaat("comet2"):
		case joaat("coquette"):
		case joaat("elegy2"):
		case joaat("entityxf"):
		case joaat("exemplar"):
		case joaat("feltzer2"):
		case joaat("hotknife"):
		case joaat("infernus"):
		case joaat("jb700"):
		case joaat("khamelion"):
		case joaat("monroe"):
		case joaat("ninef"):
		case joaat("ninef2"):
		case joaat("rapidgt"):
		case joaat("rapidgt2"):
		case joaat("stinger"):
		case joaat("stingergt"):
		case joaat("superd"):
		case joaat("surano"):
		case joaat("vacca"):
		case joaat("voltic"):
		case joaat("ztype"):
		case joaat("dubsta3"):
		case joaat("blade"):
		case joaat("glendale"):
		case joaat("rhapsody"):
		case joaat("warrener"):
		case joaat("panto"):
		case joaat("pigalle"):
		case joaat("casco"):
		case joaat("kuruma2"):
		case joaat("lectro"):
		case joaat("insurgent"):
		case joaat("insurgent2"):
		case joaat("technical"):
			return true;
			break;
		
		case joaat("windsor"):
		case joaat("osiris"):
		case joaat("feltzer3"):
		case joaat("virgo"):
			return true;
			break;
		
		case joaat("faction"):
		case joaat("faction2"):
		case joaat("moonbeam"):
		case joaat("moonbeam2"):
			return true;
			break;
		
		case joaat("faction3"):
		case joaat("virgo2"):
			return true;
			break;
		
		case joaat("baller3"):
		case joaat("baller4"):
		case joaat("cognoscenti"):
		case joaat("cog55"):
		case joaat("limo2"):
		case joaat("mamba"):
		case joaat("nightshade"):
		case joaat("schafter3"):
		case joaat("schafter4"):
		case joaat("verlierer2"):
			return true;
			break;
		
		case joaat("tampa"):
			return true;
			break;
		
		case joaat("banshee2"):
			return true;
			break;
		
		case joaat("bestiagts"):
		case joaat("brickade"):
		case joaat("fmj"):
		case joaat("nimbus"):
		case joaat("pfister811"):
		case joaat("prototipo"):
		case joaat("rumpo3"):
		case joaat("seven70"):
		case joaat("tug"):
		case joaat("volatus"):
		case joaat("windsor2"):
		case joaat("xls"):
		case joaat("xls2"):
		case joaat("reaper"):
			return true;
			break;
	}
	return false;
}

int func_416(int iParam0, char* sParam1, int iParam2)
{
	char[64] cVar0;
	
	if (_0x27F76CC6C55AD30E())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	if (!_0x247F0F73A182EA0B(iParam2))
	{
		return 1;
	}
	return func_433(78225582, -1224924353, iParam2, 478352891, 1, 0, 1, 4, get_hash_key(&cVar0), 3);
}

int func_417(int iParam0)
{
	char[32] cVar0;
	
	StringCopy(&cVar0, "VEM_", 32);
	switch (iParam0)
	{
		case 0:
			StringConCat(&cVar0, "MCT_METALLIC", 32);
			break;
		
		case 1:
			StringConCat(&cVar0, "MCT_CLASSIC", 32);
			break;
		
		case 2:
			StringConCat(&cVar0, "MCT_PEARLESCENT", 32);
			break;
		
		case 3:
			StringConCat(&cVar0, "MCT_MATTE", 32);
			break;
		
		case 4:
			StringConCat(&cVar0, "MCT_METALS", 32);
			break;
		
		case 5:
			StringConCat(&cVar0, "MCT_CHROME", 32);
			break;
		
		case 6:
			StringConCat(&cVar0, "MCT_INVALID", 32);
			iParam0 = 255;
			break;
	}
	StringConCat(&cVar0, "_t", 32);
	StringIntConCat(&cVar0, iParam0, 32);
	StringConCat(&cVar0, "_v0", 32);
	return get_hash_key(&cVar0);
}

int func_418(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, var uParam5, int iParam6, int iParam7)
{
	char[64] cVar0;
	char[64] cVar16;
	
	if (_0x27F76CC6C55AD30E())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringConCat(&cVar16, "VEM_", 64);
	if (iParam3 == 1)
	{
		StringConCat(&cVar16, "COLOUR_1_", 64);
	}
	else if (iParam3 == 2)
	{
		StringConCat(&cVar16, "COLOUR_2_", 64);
	}
	else if (iParam3 == 3)
	{
		StringConCat(&cVar16, "COLOUR_EXTRA_1_", 64);
	}
	if (iParam6 == 5)
	{
		StringConCat(&cVar16, "MCT_CHROME_", 64);
	}
	else if (iParam6 == 1)
	{
		StringConCat(&cVar16, "MCT_CLASSIC_", 64);
	}
	else if (iParam6 == 0)
	{
		StringConCat(&cVar16, "MCT_METALLIC_", 64);
	}
	else if (iParam6 == 4)
	{
		StringConCat(&cVar16, "MCT_METALS_", 64);
	}
	else if (iParam6 == 3)
	{
		StringConCat(&cVar16, "MCT_MATTE_", 64);
	}
	else if (iParam6 == 2)
	{
		StringConCat(&cVar16, "MCT_PEARLESCENT_", 64);
	}
	else if (iParam6 == 6)
	{
		StringConCat(&cVar16, "MCT_NONE_", 64);
	}
	StringConCat(&cVar16, sParam2, 64);
	StringConCat(&cVar16, "_t", 64);
	StringIntConCat(&cVar16, iParam4, 64);
	StringConCat(&cVar16, "_v", 64);
	StringIntConCat(&cVar16, uParam5, 64);
	if (iParam6 == 6)
	{
		StringCopy(&cVar16, "VEM_COLOUR_MCT_NONE_", 64);
		StringIntConCat(&cVar16, iParam7, 64);
	}
	if (!_0x247F0F73A182EA0B(get_hash_key(&cVar16)))
	{
		return 1;
	}
	return func_433(78225582, -1224924353, get_hash_key(&cVar16), 478352891, 1, 0, 1, 4, get_hash_key(&cVar0), 3);
}

void func_419(int iParam0, int iParam1, char* sParam2, var uParam3, int iParam4, char* sParam5, var uParam6, int iParam7, char* sParam8, var uParam9, var uParam10, int iParam11)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	var uVar9;
	
	get_vehicle_colours(iParam0, uParam3, uParam6);
	get_vehicle_extra_colours(iParam0, uParam9, uParam10);
	StringCopy(sParam2, "", 16);
	StringCopy(sParam5, "", 16);
	StringCopy(sParam8, "", 16);
	if (iParam11)
	{
		get_vehicle_mod_color_1(iParam0, iParam1, &uVar0, &iVar2);
		get_vehicle_mod_color_2(iParam0, iParam4, &uVar1);
	}
	if (iParam11)
	{
		iVar3 = 0;
		while (iVar3 != 6)
		{
			iVar5 = get_num_mod_colors(iVar3, 1);
			iVar4 = 0;
			while (iVar4 < iVar5)
			{
				set_vehicle_mod_color_1(iParam0, iVar3, iVar4, iVar2);
				get_vehicle_colours(iParam0, &iVar6, &uVar9);
				if (iVar6 == *uParam3)
				{
					*iParam1 = iVar3;
					StringCopy(sParam2, _get_vehicle_mod_color_1_text_label(iParam0, 0), 16);
					iVar4 = iVar5 + 1;
				}
				iVar4++;
			}
			if (is_string_null_or_empty(sParam2))
			{
				iVar3++;
			}
			else
			{
				iVar3 = 6;
			}
		}
	}
	if (is_string_null_or_empty(sParam2))
	{
		*iParam1 = 6;
		IntToString(sParam2, *uParam3, 16);
	}
	if (iParam11)
	{
		iVar4 = 0;
		iVar5 = get_num_mod_colors(0, 1);
		iVar4 = 0;
		while (iVar4 < iVar5)
		{
			set_vehicle_mod_color_1(iParam0, 0, iVar4, iVar4);
			get_vehicle_extra_colours(iParam0, &iVar8, &uVar9);
			if (iVar8 == *uParam9)
			{
				StringCopy(sParam8, _get_vehicle_mod_color_1_text_label(iParam0, 0), 16);
				iVar4 = iVar5 + 1;
			}
			iVar4++;
		}
	}
	if (is_string_null_or_empty(sParam8))
	{
		IntToString(sParam8, *uParam9, 16);
		*iParam7 = 6;
	}
	else
	{
		*iParam7 = *iParam1;
	}
	if (iParam11)
	{
		iVar3 = 0;
		while (iVar3 != 6)
		{
			iVar4 = 0;
			iVar5 = get_num_mod_colors(iVar3, 1);
			iVar4 = 0;
			while (iVar4 < iVar5)
			{
				set_vehicle_mod_color_2(iParam0, iVar3, iVar4);
				get_vehicle_colours(iParam0, &uVar9, &iVar7);
				if (iVar7 == *uParam6)
				{
					*iParam4 = iVar3;
					StringCopy(sParam5, _get_vehicle_mod_color_2_text_label(iParam0), 16);
					iVar4 = iVar5 + 1;
				}
				iVar4++;
			}
			if (is_string_null_or_empty(sParam5))
			{
				iVar3++;
			}
			else
			{
				iVar3 = 6;
			}
		}
	}
	if (is_string_null_or_empty(sParam5))
	{
		*iParam4 = 6;
		IntToString(sParam5, *uParam6, 16);
	}
	set_vehicle_colours(iParam0, *uParam3, *uParam6);
	set_vehicle_extra_colours(iParam0, *uParam9, *uParam10);
}

bool func_420(int iParam0)
{
	if (iParam0 == joaat("bmx"))
	{
		return true;
	}
	if (iParam0 == joaat("cruiser"))
	{
		return true;
	}
	if (iParam0 == joaat("scorcher"))
	{
		return true;
	}
	if ((iParam0 == joaat("tribike") || iParam0 == joaat("tribike2")) || iParam0 == joaat("tribike3"))
	{
		return true;
	}
	if (iParam0 == joaat("fixter"))
	{
		return true;
	}
	return false;
}

int func_421(int iParam0)
{
	switch (iParam0)
	{
		case joaat("faction2"):
		case joaat("moonbeam2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("primo2"):
		case joaat("voodoo"):
		case joaat("sultanrs"):
		case joaat("banshee2"):
		case joaat("btype3"):
		case joaat("faction3"):
		case joaat("minivan2"):
		case joaat("sabregt2"):
		case joaat("slamvan3"):
		case joaat("tornado5"):
		case joaat("virgo2"):
			return 3;
			break;
	}
	return func_414(iParam0);
}

bool func_422(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4, int iParam5, var uParam6, int iParam7, var uParam8, int iParam9, var uParam10, int iParam11, var uParam12, int iParam13)
{
	char[64] cVar0;
	char[64] cVar16;
	
	if (iParam0 == -1)
	{
		iParam0 = 0;
	}
	if (iParam3 != 0 || func_1053(3146, -1, 0) == 0)
	{
		StringCopy(&cVar0, "VEM_YACHT_MOD_", 64);
		StringIntConCat(&cVar0, uParam2, 64);
		StringConCat(&cVar0, "_v0", 64);
		StringCopy(&cVar16, "PACKED_MP_CHAR_YACHT_MOD_v", 64);
		StringIntConCat(&cVar16, iParam0, 64);
		if (_0x247F0F73A182EA0B(get_hash_key(&cVar0)) && _0x247F0F73A182EA0B(get_hash_key(&cVar16)))
		{
			if (!func_433(78225582, iParam1, get_hash_key(&cVar0), -897111558, 1, iParam3, 1, 4, get_hash_key(&cVar16), 3))
			{
			}
		}
	}
	if (iParam5 != 0 || func_1053(3146, -1, 0) == 0)
	{
		StringCopy(&cVar0, "VEM_YACHT_LIGHT_", 64);
		StringIntConCat(&cVar0, uParam4, 64);
		StringConCat(&cVar0, "_v0", 64);
		StringCopy(&cVar16, "PACKED_MP_CHAR_YACHT_LIGHTING_v", 64);
		StringIntConCat(&cVar16, iParam0, 64);
		if (_0x247F0F73A182EA0B(get_hash_key(&cVar0)) && _0x247F0F73A182EA0B(get_hash_key(&cVar16)))
		{
			if (!func_433(78225582, iParam1, get_hash_key(&cVar0), -897111558, 1, iParam5, 1, 4, get_hash_key(&cVar16), 3))
			{
			}
		}
	}
	if (iParam7 != 0 || func_1053(3146, -1, 0) == 0)
	{
		StringCopy(&cVar0, "VEM_YACHT_FIX_", 64);
		StringIntConCat(&cVar0, uParam6, 64);
		StringConCat(&cVar0, "_v0", 64);
		StringCopy(&cVar16, "PACKED_MP_CHAR_YACHT_FIXTURE_v", 64);
		StringIntConCat(&cVar16, iParam0, 64);
		if (_0x247F0F73A182EA0B(get_hash_key(&cVar0)) && _0x247F0F73A182EA0B(get_hash_key(&cVar16)))
		{
			if (!func_433(78225582, iParam1, get_hash_key(&cVar0), -897111558, 1, iParam7, 1, 4, get_hash_key(&cVar16), 3))
			{
			}
		}
	}
	if (iParam9 != 0 || func_1053(3146, -1, 0) == 0)
	{
		StringCopy(&cVar0, "VEM_YACHT_FLAG_", 64);
		StringIntConCat(&cVar0, uParam8, 64);
		StringConCat(&cVar0, "_v0", 64);
		StringCopy(&cVar16, "PACKED_MP_CHAR_YACHT_FLAG_v", 64);
		StringIntConCat(&cVar16, iParam0, 64);
		if (_0x247F0F73A182EA0B(get_hash_key(&cVar0)) && _0x247F0F73A182EA0B(get_hash_key(&cVar16)))
		{
			if (!func_433(78225582, iParam1, get_hash_key(&cVar0), -897111558, 1, iParam9, 1, 4, get_hash_key(&cVar16), 3))
			{
			}
		}
	}
	if (iParam11 != 0 || func_1053(3146, -1, 0) == 0)
	{
		StringCopy(&cVar0, "VEM_YACHT_COL_", 64);
		StringIntConCat(&cVar0, uParam10, 64);
		StringConCat(&cVar0, "_v0", 64);
		StringCopy(&cVar16, "PACKED_MP_CHAR_YACHT_COLOR_v", 64);
		StringIntConCat(&cVar16, iParam0, 64);
		if (_0x247F0F73A182EA0B(get_hash_key(&cVar0)) && _0x247F0F73A182EA0B(get_hash_key(&cVar16)))
		{
			if (!func_433(78225582, iParam1, get_hash_key(&cVar0), -897111558, 1, iParam11, 1, 4, get_hash_key(&cVar16), 3))
			{
			}
		}
	}
	if (iParam13 != 0 || func_1053(3146, -1, 0) == 0)
	{
		StringCopy(&cVar0, "VEM_YACHT_NAME_", 64);
		StringIntConCat(&cVar0, uParam12, 64);
		StringConCat(&cVar0, "_v0", 64);
		StringCopy(&cVar16, "PACKED_MP_CHAR_YACHT_NAME_ID_v", 64);
		StringIntConCat(&cVar16, iParam0, 64);
		if (_0x247F0F73A182EA0B(get_hash_key(&cVar0)) && _0x247F0F73A182EA0B(get_hash_key(&cVar16)))
		{
			if (!func_433(78225582, iParam1, get_hash_key(&cVar0), -897111558, 1, iParam13, 1, 4, get_hash_key(&cVar16), 3))
			{
			}
		}
	}
	return true;
}

int func_423(int iParam0)
{
	switch (iParam0)
	{
		case -611303783:
		case 2142748233:
			return 2142748233;
			break;
	}
	return 0;
}

bool func_424(int iParam0)
{
	switch (iParam0)
	{
		case 2142748233:
		case -611303783:
			return true;
			break;
	}
	return false;
}

bool func_425(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, int iParam5, var uParam6, int iParam7, var uParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	char* sVar0;
	int iVar16;
	int iVar17;
	int iVar18;
	
	if (!func_437(iParam0))
	{
	}
	if (iParam3 != 0 || func_542(5, -1) == 0)
	{
		if (iParam2 != -1)
		{
			iVar17 = 0;
			func_428(&sVar0, iParam2, func_430(iParam0), iVar17);
			iVar16 = func_427(0);
			if (_0x247F0F73A182EA0B(get_hash_key(&sVar0)) && _0x247F0F73A182EA0B(iVar16))
			{
				if (!func_433(78225582, iParam1, get_hash_key(&sVar0), 1372920054, 1, iParam3, 1, 4, iVar16, 3))
				{
				}
			}
		}
	}
	if (iParam5 != 0 || func_542(5, -1) == 0)
	{
		func_426(&sVar0, 1, uParam4, 0);
		iVar16 = func_427(1);
		if (_0x247F0F73A182EA0B(get_hash_key(&sVar0)) && _0x247F0F73A182EA0B(iVar16))
		{
			if (!func_433(78225582, iParam1, get_hash_key(&sVar0), 1372920054, 1, iParam5, 1, 4, iVar16, 3))
			{
			}
		}
	}
	if (iParam7 != 0 || func_542(5, -1) == 0)
	{
		func_426(&sVar0, 7, uParam6, 0);
		iVar16 = func_427(7);
		if (_0x247F0F73A182EA0B(get_hash_key(&sVar0)) && _0x247F0F73A182EA0B(iVar16))
		{
			if (!func_433(78225582, iParam1, get_hash_key(&sVar0), 1372920054, 1, iParam7, 1, 4, iVar16, 3))
			{
			}
		}
	}
	if (iParam9 != 0 || func_542(5, -1) == 0)
	{
		iVar18 = 0;
		if (iParam9 == 0)
		{
			iVar18 = 1;
		}
		func_426(&sVar0, 2, uParam8, iVar18);
		iVar16 = func_427(2);
		if (_0x247F0F73A182EA0B(get_hash_key(&sVar0)) && _0x247F0F73A182EA0B(iVar16))
		{
			if (!func_433(78225582, iParam1, get_hash_key(&sVar0), 1372920054, 1, iParam9, 1, 4, iVar16, 3))
			{
			}
		}
	}
	if (iParam10 != func_1053(3273, -1, 0) || func_542(5, -1) == 0)
	{
		func_426(&sVar0, 3, iParam10, 0);
		iVar16 = func_427(3);
		if (_0x247F0F73A182EA0B(get_hash_key(&sVar0)) && _0x247F0F73A182EA0B(iVar16))
		{
			if (!func_433(78225582, iParam1, get_hash_key(&sVar0), 1372920054, 1, iParam11, 1, 4, iVar16, 3))
			{
			}
		}
	}
	if (iParam13 != 0 || func_542(5, -1) == 0)
	{
		func_426(&sVar0, 4, iParam12, 0);
		iVar16 = func_427(4);
		if (_0x247F0F73A182EA0B(get_hash_key(&sVar0)) && _0x247F0F73A182EA0B(iVar16))
		{
			if (!func_433(78225582, iParam1, get_hash_key(&sVar0), 1372920054, 1, iParam13, 1, 4, iVar16, 3))
			{
			}
		}
	}
	if (iParam15 != 0 || func_542(5, -1) == 0)
	{
		func_426(&sVar0, 5, iParam14, 0);
		iVar16 = func_427(5);
		if (_0x247F0F73A182EA0B(get_hash_key(&sVar0)) && _0x247F0F73A182EA0B(iVar16))
		{
			if (!func_433(78225582, iParam1, get_hash_key(&sVar0), 1372920054, 1, iParam15, 1, 4, iVar16, 3))
			{
			}
		}
	}
	if (iParam17 != 0 || func_542(5, -1) == 0)
	{
		func_426(&sVar0, 6, iParam16, 0);
		iVar16 = func_427(6);
		if (_0x247F0F73A182EA0B(get_hash_key(&sVar0)) && _0x247F0F73A182EA0B(iVar16))
		{
			if (!func_433(78225582, iParam1, get_hash_key(&sVar0), 1372920054, 1, iParam17, 1, 4, iVar16, 3))
			{
			}
		}
	}
	return true;
}

void func_426(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	struct<4> Var0;
	
	switch (iParam1)
	{
		case 0:
			return;
			break;
		
		case 1:
			StringCopy(&Var0, "PM_PERSON_", 16);
			StringIntConCat(&Var0, iParam2, 16);
			break;
		
		case 2:
			StringCopy(&Var0, "PM_FONT_", 16);
			StringIntConCat(&Var0, iParam2, 16);
			break;
		
		case 3:
			StringCopy(&Var0, "PM_COLOUR_", 16);
			StringIntConCat(&Var0, iParam2, 16);
			break;
		
		case 4:
			StringCopy(&Var0, "PM_GUNLOCK_", 16);
			StringIntConCat(&Var0, iParam2, 16);
			break;
		
		case 5:
			StringCopy(&Var0, "PM_CASHLOCK_", 16);
			StringIntConCat(&Var0, iParam2, 16);
			break;
		
		case 6:
			StringCopy(&Var0, "PM_ACCOM_", 16);
			StringIntConCat(&Var0, iParam2, 16);
			break;
		
		case 7:
			StringCopy(&Var0, "PM_NAME_", 16);
			StringIntConCat(&Var0, iParam2, 16);
			break;
	}
	StringCopy(sParam0, "PR_", 64);
	StringConCat(sParam0, &Var0, 64);
	StringConCat(sParam0, "_t", 64);
	StringIntConCat(sParam0, iParam3, 64);
	StringConCat(sParam0, "_v0", 64);
}

int func_427(int iParam0)
{
	char[64] cVar0;
	
	switch (iParam0)
	{
		case 0:
			StringCopy(&cVar0, "MP_STAT_PROP_OFFICE_VAR_v0", 64);
			break;
		
		case 1:
			StringCopy(&cVar0, "MP_STAT_PROP_OFFICE_PERSONNEL_v0", 64);
			break;
		
		case 2:
			StringCopy(&cVar0, "MP_STAT_FONT_PLAYER_OFFICE_v0", 64);
			break;
		
		case 3:
			StringCopy(&cVar0, "MP_STAT_COLOUR_PLAYER_OFFICE_v0", 64);
			break;
		
		case 4:
			StringCopy(&cVar0, "MP_STAT_PROP_OFFICE_LOCKER_GUN_v0", 64);
			break;
		
		case 5:
			StringCopy(&cVar0, "MP_STAT_PROP_OFFICE_LOCKER_CASH_v0", 64);
			break;
		
		case 6:
			StringCopy(&cVar0, "MP_STAT_PROP_OFFICE_ACCOMMODATION_v0", 64);
			break;
		
		case 7:
			StringCopy(&cVar0, "MP_STAT_PROP_OFFICE_NAME_ID_v0", 64);
			break;
	}
	if (is_string_null_or_empty(&cVar0))
	{
		return -1;
	}
	return get_hash_key(&cVar0);
}

void func_428(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	struct<4> Var0;
	
	StringCopy(&Var0, func_429(iParam1, iParam2), 16);
	StringCopy(sParam0, "PR_", 64);
	StringConCat(sParam0, &Var0, 64);
	StringConCat(sParam0, "_t", 64);
	StringIntConCat(sParam0, iParam3, 64);
	StringConCat(sParam0, "_v0", 64);
}

char* func_429(int iParam0, int iParam1)
{
	if (func_443(iParam1) == 83)
	{
		switch (iParam0)
		{
			case 0:
				return "PM_APT_VAR_0";
				break;
			
			case 1:
				return "PM_APT_VAR_1";
				break;
			
			case 2:
				return "PM_APT_VAR_2";
				break;
			
			case 3:
				return "PM_APT_VAR_3";
				break;
			
			case 4:
				return "PM_APT_VAR_4";
				break;
			
			case 5:
				return "PM_APT_VAR_5";
				break;
			
			case 6:
				return "PM_APT_VAR_6";
				break;
			
			case 7:
				return "PM_APT_VAR_7";
				break;
		}
	}
	else if (func_443(iParam1) == 88)
	{
		switch (iParam0)
		{
			case 0:
				return "PM_OFF_VAR_3";
				break;
			
			case 1:
				return "PM_OFF_VAR_4";
				break;
			
			case 2:
				return "PM_OFF_VAR_5";
				break;
			
			case 3:
				return "PM_OFF_VAR_2";
				break;
			
			case 4:
				return "PM_OFF_VAR_0";
				break;
			
			case 5:
				return "PM_OFF_VAR_1";
				break;
			
			case 6:
				return "PM_OFF_VAR_6";
				break;
			
			case 7:
				return "PM_OFF_VAR_7";
				break;
			
			case 8:
				return "PM_OFF_VAR_8";
				break;
			}
	}
	return "NONE";
}

int func_430(int iParam0)
{
	switch (iParam0)
	{
		case -784377220:
			return 87;
			break;
		
		case -513584270:
			return 88;
			break;
		
		case 615718995:
			return 89;
			break;
		
		case -1853414437:
			return 90;
			break;
	}
	return 0;
}

bool func_431()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = false;
	if (!func_447())
	{
		iVar0 = true;
	}
	iVar1 = func_316();
	if (iVar1 == -1)
	{
		return false;
	}
	if (!iVar0)
	{
		if (!_0xB24F0944DA203D9E(func_90()) || _0x810E8431C0614BF9())
		{
			if (func_432(Global_2558146[iVar1 /*73*/].f_6, Global_2558146[iVar1 /*73*/].f_4, Global_2558146[iVar1 /*73*/].f_1) == 1)
			{
				Global_2558637 = 1;
			}
			return false;
		}
		if (Global_2444207)
		{
			if (Global_2558146[iVar1 /*73*/].f_6 == 1067618600 || Global_2558146[iVar1 /*73*/].f_6 == -1303831698)
			{
				Global_2558638 = 1;
				return false;
			}
		}
	}
	iVar2 = func_315(iVar1);
	if (iVar2 != 2147483647)
	{
		if (iVar0 || _0x39BE7CEA8D9CC8E6(iVar2))
		{
			if (iVar0)
			{
				Global_2558146[iVar1 /*73*/].f_66 = 1;
			}
			Global_2558146[iVar1 /*73*/].f_72 = 0;
			Global_2558628 = 1;
			return true;
		}
	}
	return false;
}

int func_432(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == -433440095 || iParam0 == 1474183246)
	{
		switch (iParam1)
		{
			case 1940862352:
				if (iParam2 >= 10000)
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case -31156877:
				if (iParam2 >= 1000)
				{
					return 1;
				}
				else
				{
					return 2;
				}
				break;
			
			case 1718438689:
			case -1027218631:
			case -1398318418:
			case 1652884147:
			case -57868256:
			case -1216489292:
			case -46622315:
			case -352356931:
			case -990286235:
			case 563463121:
			case 1734805203:
			case 941287179:
			case -1186079845:
			case -1985150258:
			case -1127021384:
			case -109201286:
			case 312105838:
			case 1982688246:
			case -661030418:
			case 1301046174:
			case -1586170317:
			case 393059668:
			case 23796958:
			case -1077156170:
			case 1780666425:
			case -2043695058:
			case -1922554349:
			case 1287308202:
			case 691372038:
			case 1480707108:
			case 1512499951:
			case 562283735:
			case -154732333:
			case -1362660491:
			case 645708827:
			case 767907967:
			case -1970151306:
			case 718859568:
			case -1955564771:
			case 892388724:
			case 1349151477:
			case 1620609399:
			case 1961641934:
			case 210955503:
			case -59668082:
			case 1736933716:
			case -1468524125:
			case 111573502:
			case 1525644423:
			case 968073639:
			case 1577781788:
			case -934465332:
			case -1194253122:
			case -212607085:
			case -815546555:
			case 1048226110:
			case 569170531:
			case -856006867:
			case 848090538:
				return 1;
				break;
			
			case 1515774909:
			case 1173654533:
			case -899802304:
			case -663944335:
			case 1208553146:
			case -613221010:
			case -671062876:
			case 291576838:
			case -1276678868:
			case 711665950:
			case -407201236:
			case -754024203:
			case -1885444887:
			case 1931729587:
			case 1064954035:
			case -180141073:
			case 2131324797:
			case 283351220:
			case 1108628223:
			case -876847842:
			case 68030260:
				return 2;
				break;
			
			default:
				return 0;
				break;
		}
	}
	else if ((iParam0 == -1134853190 || iParam0 == 925407197) || iParam0 == -1589378882)
	{
		return 0;
	}
	return 1;
}

bool func_433(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	
	iVar0 = false;
	if (!func_447())
	{
		iVar0 = true;
	}
	if (!iVar0)
	{
		if (!_0xB24F0944DA203D9E(func_90()) || _0x810E8431C0614BF9())
		{
			Global_2558637 = 1;
			return false;
		}
		if (Global_2444207)
		{
			if (iParam1 == 1067618600 || iParam1 == -1303831698)
			{
				Global_2558638 = 1;
				return false;
			}
		}
	}
	iVar1 = func_316();
	if (iVar1 == -1)
	{
		if (!func_435(&iVar1, iParam0, iParam1, iParam3, iParam7, iParam9))
		{
			return false;
		}
	}
	if (iVar1 != -1)
	{
		if (iParam8 != 0 && func_434(iParam1))
		{
			Var2 = iParam8;
			Var2.f_1 = iParam2;
			Var2.f_2 = iParam5;
			Var2.f_3 = iParam6;
		}
		else
		{
			Var2 = iParam2;
			Var2.f_1 = iParam8;
			Var2.f_2 = iParam5;
			Var2.f_3 = iParam6;
		}
		Global_2558146[iVar1 /*73*/].f_70 = Var2;
		Global_2558146[iVar1 /*73*/].f_71 = Var2.f_1;
		if (iVar0 || _0xF30980718C8ED876(&Var2, iParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_434(int iParam0)
{
	switch (iParam0)
	{
		case -221807075:
		case -1224924353:
		case -2121967344:
		case 1394405165:
		case -2052814106:
		case 1701289268:
		case -1796535835:
		case -1928802392:
		case 581564040:
		case 23048035:
		case 2117376854:
		case -1377881127:
		case -504675202:
		case 1906937290:
		case -1616616027:
		case -1799524201:
		case 269396419:
		case 69656641:
			return true;
			break;
	}
	return false;
}

bool func_435(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = false;
	if (!func_447())
	{
		iVar0 = true;
	}
	if (!iVar0)
	{
		if (!_0xB24F0944DA203D9E(func_90()) || _0x810E8431C0614BF9())
		{
			Global_2558637 = 1;
			return false;
		}
		if (Global_2444207)
		{
			if (iParam2 == 1067618600 || iParam2 == -1303831698)
			{
				Global_2558638 = 1;
				return false;
			}
		}
	}
	iVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2558146[iVar1 /*73*/].f_2 == 0)
		{
			iVar2 = true;
		}
		else if (Global_2558146[iVar1 /*73*/].f_5 == 1)
		{
			return false;
		}
		iVar1++;
	}
	if (!iVar2)
	{
		return false;
	}
	*iParam0 = 0;
	if (!iVar0)
	{
		if (_0xA65568121DF2EA26())
		{
			unk_0xFA336E7F40C0A0D0();
		}
	}
	if (iVar0 || _network_shop_basket_start(&uVar3, iParam2, iParam3, iParam4))
	{
		*iParam0 = func_436(uVar3, uParam1, -2085313189, iParam3, iParam2, 0, 1, iParam4, uParam5);
		return true;
	}
	return false;
}

int func_436(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2558146[iVar0 /*73*/].f_2 == 0)
		{
			if (!func_447())
			{
				uParam0 = iVar0 + 900;
			}
			Global_2558146[iVar0 /*73*/].f_2 = 1;
			Global_2558146[iVar0 /*73*/].f_1 = iParam5;
			Global_2558146[iVar0 /*73*/].f_3 = uParam1;
			Global_2558146[iVar0 /*73*/].f_4 = iParam2;
			Global_2558146[iVar0 /*73*/].f_7 = iParam3;
			Global_2558146[iVar0 /*73*/].f_5 = 0;
			Global_2558146[iVar0 /*73*/] = uParam0;
			Global_2558146[iVar0 /*73*/].f_6 = iParam4;
			Global_2558146[iVar0 /*73*/].f_69 = uParam8;
			Global_2558146[iVar0 /*73*/].f_68 = iParam7;
			Global_2558146[iVar0 /*73*/].f_72 = 0;
			Global_2558628 = 0;
			if (iParam6)
			{
				Global_2558146[iVar0 /*73*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_437(int iParam0)
{
	return func_430(iParam0) != 0;
}

int func_438(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_90();
	}
	iVar1 = func_440(iParam0, iParam1);
	uVar2 = func_439(iParam0);
	if (0 != iVar1)
	{
		iVar0 = stat_get_bool_masked(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_439(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = iParam0 - 0 - _0xF4D8E7AC2A27758C(iParam0 - 0) * 64;
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = iParam0 - 192 - _0xF4D8E7AC2A27758C(iParam0 - 192) * 64;
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = iParam0 - 513 - _0xF4D8E7AC2A27758C(iParam0 - 513) * 64;
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = iParam0 - 705 - _0xF4D8E7AC2A27758C(iParam0 - 705) * 64;
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = iParam0 - 2919 - _0xF4D8E7AC2A27758C(iParam0 - 2919) * 64;
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = iParam0 - 3111 - _0xF4D8E7AC2A27758C(iParam0 - 3111) * 64;
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = iParam0 - 4335 - _0xF4D8E7AC2A27758C(iParam0 - 4335) * 64;
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = iParam0 - 4207 - _0xF4D8E7AC2A27758C(iParam0 - 4207) * 64;
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = iParam0 - 6029 - _0xF4D8E7AC2A27758C(iParam0 - 6029) * 64;
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = iParam0 - 7385 - _0xF4D8E7AC2A27758C(iParam0 - 7385) * 64;
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = iParam0 - 7321 - _0xF4D8E7AC2A27758C(iParam0 - 7321) * 64;
	}
	return iVar0;
}

int func_440(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_90();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = _0x80C75307B1C42837(iParam0 - 0, 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = _0x80C75307B1C42837(iParam0 - 192, 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = _0x80C75307B1C42837(iParam0 - 513, 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = _0x80C75307B1C42837(iParam0 - 705, 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = _0xC4BB08EE7907471E(iParam0 - 2919, 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = _0xC4BB08EE7907471E(iParam0 - 3111, 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = _0xBA52FF538ED2BC71(iParam0 - 4335, 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = _0xBA52FF538ED2BC71(iParam0 - 4207, 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = _0xBA52FF538ED2BC71(iParam0 - 6029, 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = _0xBA52FF538ED2BC71(iParam0 - 7321, 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = _0xBA52FF538ED2BC71(iParam0 - 7385, 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	return iVar0;
}

int func_441(int iParam0)
{
	char[64] cVar0;
	
	switch (iParam0)
	{
		case 0:
			StringCopy(&cVar0, "MP_STAT_APPARTMENT_VAR_0_v0", 64);
			break;
		
		case 1:
			StringCopy(&cVar0, "MP_STAT_APPARTMENT_VAR_1_v0", 64);
			break;
		
		case 2:
			StringCopy(&cVar0, "MP_STAT_APPARTMENT_VAR_2_v0", 64);
			break;
		
		case 3:
			StringCopy(&cVar0, "MP_STAT_APPARTMENT_VAR_3_v0", 64);
			break;
		
		case 4:
			StringCopy(&cVar0, "MP_STAT_APPARTMENT_VAR_4_v0", 64);
			break;
		
		case 5:
			StringCopy(&cVar0, "MP_STAT_PROP_OFFICE_VAR_v0", 64);
			break;
	}
	if (is_string_null_or_empty(&cVar0))
	{
		return -1;
	}
	return get_hash_key(&cVar0);
}

int func_442(int iParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	func_428(&sVar0, iParam0, iParam1, iParam2);
	return get_hash_key(&sVar0);
}

int func_443(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			return 1;
			break;
		
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 69:
		case 68:
		case 66:
		case 67:
			return 8;
			break;
		
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
			return 17;
			break;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
			return 61;
			break;
		
		case 73:
		case 74:
		case 75:
		case 76:
			return 73;
			break;
		
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
			return 77;
			break;
		
		case 83:
		case 84:
		case 85:
			return 83;
			break;
		
		case 86:
			return 86;
			break;
		
		case 87:
		case 88:
		case 89:
		case 90:
			return 88;
			break;
	}
	return -1;
}

int func_444(int iParam0)
{
	char[64] cVar0;
	
	switch (iParam0)
	{
		case 0:
			StringCopy(&cVar0, "MP_STAT_PROPERTY_HOUSE_v0", 64);
			break;
		
		case 1:
			StringCopy(&cVar0, "MP_STAT_MULTI_PROPERTY_1_v0", 64);
			break;
		
		case 2:
			StringCopy(&cVar0, "MP_STAT_MULTI_PROPERTY_2_v0", 64);
			break;
		
		case 3:
			StringCopy(&cVar0, "MP_STAT_MULTI_PROPERTY_3_v0", 64);
			break;
		
		case 4:
			StringCopy(&cVar0, "MP_STAT_MULTI_PROPERTY_4_v0", 64);
			break;
		
		case 5:
			StringCopy(&cVar0, "MP_STAT_PROP_OFFICE_v0", 64);
			break;
	}
	if (is_string_null_or_empty(&cVar0))
	{
		return -1;
	}
	return get_hash_key(&cVar0);
}

int func_445(int iParam0, int iParam1)
{
	char* sVar0;
	
	func_446(&sVar0, iParam0, iParam1);
	return get_hash_key(&sVar0);
}

void func_446(char* sParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	
	Var0 = {func_546(iParam1)};
	StringCopy(sParam0, "PR_", 64);
	StringConCat(sParam0, &Var0, 64);
	StringConCat(sParam0, "_t0_v", 64);
	StringIntConCat(sParam0, iParam2, 64);
}

bool func_447()
{
	if (is_pc_version())
	{
		return true;
	}
	return false;
}

bool func_448()
{
	int iVar0;
	
	iVar0 = Global_262145.f_10646;
	if (func_234(player_id()))
	{
		iVar0 = Global_262145.f_13668;
	}
	if ((((func_453(player_id()) || func_452(player_id())) || func_451(player_id())) || func_449(player_id())) || !_has_item_been_unlocked(iVar0, false, true, 0, -1))
	{
		return false;
	}
	return true;
}

bool func_449(int iParam0)
{
	if (func_450(iParam0))
	{
		return true;
	}
	if (func_248(iParam0))
	{
		return true;
	}
	return false;
}

int func_450(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return is_bit_set(Global_1610316[iVar0 /*174*/].f_1, 7);
	}
	return false;
}

bool func_451(int iParam0)
{
	if (func_247(iParam0))
	{
		return true;
	}
	if (func_237(iParam0))
	{
		return true;
	}
	return false;
}

bool func_452(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < func_257())
	{
		iVar1 = Global_1610316[iParam0 /*174*/].f_10.f_10[iVar0];
		if (iVar1 != func_210())
		{
			if (network_is_player_active(iVar1))
			{
				if (func_450(iVar1))
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_453(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < func_257())
	{
		iVar1 = Global_1610316[iParam0 /*174*/].f_10.f_10[iVar0];
		if (iVar1 != func_210())
		{
			if (network_is_player_active(iVar1))
			{
				if (func_247(iVar1))
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

void func_454()
{
	if (!Global_14413.f_1 == 1)
	{
		if (func_455(0))
		{
			func_1027(0);
		}
		set_bit(&Global_2284, 2);
	}
}

bool func_455(int iParam0)
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

void func_456()
{
	Global_17118.f_6 = 1;
}

bool func_457()
{
	if (Global_69489 && func_12())
	{
		return false;
	}
	if (!Global_69489 && func_11())
	{
		return false;
	}
	if (is_player_switch_in_progress())
	{
		return false;
	}
	return true;
}

bool func_458(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (((((!network_is_game_in_progress() || func_13()) || !func_220(player_id(), 1, 1)) || Global_1315839) || Global_1315844) || Global_2435528.f_3287.f_32)
	{
		if (Global_1315844)
		{
		}
		*iParam1 = -1;
		func_531(uParam0);
		return true;
	}
	iVar0 = ceil(to_float(Global_1049163[iParam2 /*1924*/].f_32) * Global_262145.f_77);
	hide_help_text_this_frame();
	func_530();
	func_456();
	set_input_exclusive(2, 202);
	set_input_exclusive(2, 201);
	set_input_exclusive(2, 189);
	set_input_exclusive(2, 190);
	set_input_exclusive(2, 174);
	set_input_exclusive(2, 175);
	set_input_exclusive(2, 180);
	set_input_exclusive(2, 181);
	if (_is_input_disabled(2))
	{
		set_input_exclusive(0, 24);
		set_input_exclusive(0, 257);
		enable_control_action(2, 237, 1);
		enable_control_action(2, 238, 1);
		enable_control_action(2, 242, 1);
		enable_control_action(2, 241, 1);
		disable_control_action(2, 2, 1);
		disable_control_action(2, 1, 1);
		disable_control_action(0, 24, 1);
		disable_control_action(0, 257, 1);
		if (!is_pause_menu_active() && !is_warning_message_active())
		{
			set_input_exclusive(2, 202);
			set_input_exclusive(2, 201);
		}
		func_527(0, 0, 0, 1);
		_show_cursor_this_frame();
	}
	set_bit(uParam0.f_72, true);
	if (func_525(0, -1, 0))
	{
		if (func_220(player_id(), 1, 1))
		{
			if (!is_bit_set(*uParam0.f_72, false))
			{
				func_505(uParam0, iParam3);
				set_bit(uParam0.f_72, false);
				func_501(uParam0, iParam2);
				if (!is_bit_set(*uParam0.f_75, 2))
				{
					func_475(1, -1, 1, 0, 1, -1082130432, 0, 0);
				}
			}
			else if ((!is_pause_menu_active() && !func_18(8, -1)) && !Global_2434762.f_658.f_5)
			{
				if (!is_bit_set(*uParam0.f_75, false))
				{
					if ((func_474() || (func_473() && Global_2562129 == *uParam0.f_69)) || (is_warning_message_active() && is_control_just_pressed(2, 201)))
					{
						play_sound_frontend(-1, "SELECT", "HUD_FREEMODE_SOUNDSET", 1);
						iVar1 = _0x76EF28DA05EA395A();
						iVar2 = _0xA40F9C2623F6A8B5(-1);
						if (iVar1 + iVar2 >= iVar0 - func_543(*uParam0.f_1[*uParam0.f_69]))
						{
							if (!is_bit_set(*uParam0.f_75, 2) && func_542(*uParam0.f_1[*uParam0.f_69], -1) != 0)
							{
								if (Global_262145.f_7245 && *uParam0.f_1[*uParam0.f_69] >= 2)
								{
									set_bit(uParam0.f_72, 6);
									clear_bit(uParam0.f_72, false);
								}
								else if (func_472(player_id()) || func_471(player_id()))
								{
									set_bit(uParam0.f_72, 5);
								}
								else
								{
									func_468(1, -1);
									set_bit(uParam0.f_75, 2);
									clear_bit(uParam0.f_72, false);
									return false;
								}
							}
							else if (Global_262145.f_7245 && *uParam0.f_1[*uParam0.f_69] >= 2)
							{
								set_bit(uParam0.f_72, 6);
								clear_bit(uParam0.f_72, false);
							}
							else if (*uParam0.f_1[*uParam0.f_69] == 0)
							{
								*iParam1 = *uParam0.f_1[*uParam0.f_69];
								clear_bit(uParam0.f_72, false);
								func_531(uParam0);
								return true;
							}
							else
							{
								*iParam1 = *uParam0.f_1[*uParam0.f_69];
								clear_bit(uParam0.f_72, false);
								func_531(uParam0);
								return true;
							}
						}
						else
						{
							set_bit(uParam0.f_72, 2);
						}
						set_bit(uParam0.f_75, false);
					}
				}
				else if (!is_control_just_released(2, 176) && !is_disabled_control_just_pressed(2, 176))
				{
					clear_bit(uParam0.f_75, false);
				}
				if (!is_bit_set(*uParam0.f_75, true))
				{
					if ((func_467() || (func_466() && Global_2562129 > -1)) || (is_warning_message_active() && is_control_just_pressed(2, 202)))
					{
						play_sound_frontend(-1, "CANCEL", "HUD_FREEMODE_SOUNDSET", 1);
						if (!is_bit_set(*uParam0.f_75, 2))
						{
							func_531(uParam0);
							*iParam1 = -1;
							return true;
						}
						else
						{
							clear_bit(uParam0.f_75, 2);
							clear_bit(uParam0.f_72, false);
						}
						set_bit(uParam0.f_75, true);
					}
				}
				else if (!is_control_pressed(2, 202))
				{
					clear_bit(uParam0.f_75, true);
				}
				if (!is_bit_set(*uParam0.f_75, 2))
				{
					if (!is_bit_set(*uParam0.f_75, 4))
					{
						if ((is_control_pressed(2, 172) || is_disabled_control_just_pressed(2, 172)) || func_465(0, 0, 0))
						{
							play_sound_frontend(-1, "NAV_UP_DOWN", "HUD_FREEMODE_SOUNDSET", 1);
							*uParam0.f_69--;
							set_bit(uParam0.f_75, 4);
							clear_bit(uParam0.f_72, false);
							func_464(uParam0.f_73);
						}
					}
					else if (func_461(uParam0, 172))
					{
						clear_bit(uParam0.f_75, 4);
					}
					if (!is_bit_set(*uParam0.f_75, 5))
					{
						if ((is_control_pressed(2, 173) || is_disabled_control_just_pressed(2, 173)) || func_460(0, 0, 0))
						{
							play_sound_frontend(-1, "NAV_UP_DOWN", "HUD_FREEMODE_SOUNDSET", 1);
							*uParam0.f_69++;
							set_bit(uParam0.f_75, 5);
							clear_bit(uParam0.f_72, false);
							func_464(uParam0.f_73);
						}
					}
					else if (func_461(uParam0, 173))
					{
						clear_bit(uParam0.f_75, 5);
					}
				}
				if (func_473())
				{
					if (Global_2562129 != *uParam0.f_69)
					{
						*uParam0.f_69 = Global_2562129;
						func_459(*uParam0.f_69, 1, 1);
						play_sound_frontend(-1, "SELECT", "HUD_FREEMODE_SOUNDSET", 1);
					}
				}
				if (*uParam0.f_69 >= *uParam0.f_71)
				{
					*uParam0.f_69 = 0;
				}
				if (*uParam0.f_69 < 0)
				{
					*uParam0.f_69 = *uParam0.f_71 - 1;
				}
				func_501(uParam0, iParam2);
				if (!is_bit_set(*uParam0.f_75, 2) && !is_warning_message_active())
				{
					func_475(1, -1, 1, 0, 1, -1082130432, 0, 0);
				}
			}
		}
	}
	return false;
}

void func_459(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	Global_17257.f_5606 = uParam0;
	Global_17257.f_5741 = iParam2;
	if (Global_17257.f_5606 < Global_17257.f_5605)
	{
		Global_17257.f_5605 = Global_17257.f_5606;
	}
	else if ((Global_17257.f_5599 && Global_17257.f_5606 > Global_17257.f_5607) || (!Global_17257.f_5599 && Global_17257.f_5606 >= Global_17257.f_5605 + Global_17257.f_5095))
	{
		iVar0 = Global_17257.f_5605;
		while (iVar0 <= Global_17257.f_5606)
		{
			if (iVar0 >= 0 && iVar0 < 127)
			{
				if (Global_17257.f_4959[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_17257.f_5095 && Global_17257.f_5605 < 128)
		{
			Global_17257.f_5605++;
			iVar1 = 0;
			iVar0 = Global_17257.f_5605;
			while (iVar0 <= Global_17257.f_5606)
			{
				if (iVar0 >= 0 && iVar0 < 127)
				{
					if (Global_17257.f_4959[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_17257.f_5598 = 0;
	Global_17257.f_5599 = 0;
	if (iParam1)
	{
		StringCopy(&(Global_17257.f_4562), "", 16);
		StringCopy(&(Global_2562053.f_21), "", 16);
	}
}

bool func_460(int iParam0, int iParam1, int iParam2)
{
	if (_is_input_disabled(2))
	{
		if (Global_2562129 == -3)
		{
			if ((is_control_pressed(2, 237) && iParam0) || is_control_just_pressed(2, 237))
			{
				return true;
			}
		}
		if (iParam2 == 0)
		{
			if (is_control_pressed(2, 242) || (is_disabled_control_pressed(2, 242) && iParam1))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_461(var uParam0, int iParam1)
{
	if ((!is_control_pressed(2, iParam1) && !is_disabled_control_just_pressed(2, iParam1)) || func_462(uParam0.f_73, 250, 1))
	{
		return true;
	}
	return false;
}

bool func_462(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		return true;
	}
	func_463(uParam0, iParam2, 0);
	if (network_is_game_in_progress() && !iParam2)
	{
		if (absi(get_time_difference(get_network_time(), *uParam0)) >= iParam1)
		{
			return true;
		}
	}
	else if (absi(get_time_difference(get_game_timer(), *uParam0)) >= iParam1)
	{
		return true;
	}
	return false;
}

void func_463(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0.f_1 == 0)
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
}

void func_464(var uParam0)
{
	*uParam0.f_1 = 0;
}

bool func_465(int iParam0, int iParam1, int iParam2)
{
	if (_is_input_disabled(2))
	{
		if (Global_2562129 == -2)
		{
			if ((is_control_pressed(2, 237) && iParam0) || is_control_just_pressed(2, 237))
			{
				return true;
			}
		}
		if (iParam2 == 0)
		{
			if (is_control_pressed(2, 241) || (is_disabled_control_pressed(2, 241) && iParam1))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_466()
{
	if (_is_input_disabled(2))
	{
		if (is_control_just_pressed(2, 238))
		{
			return true;
		}
	}
	return false;
}

bool func_467()
{
	if (_is_input_disabled(2))
	{
		if (((is_disabled_control_just_pressed(2, 177) && !is_disabled_control_just_pressed(2, 237)) && !is_disabled_control_just_pressed(2, 238)) && !_network_is_text_chat_active())
		{
			return true;
		}
	}
	else if (is_disabled_control_just_pressed(2, 177))
	{
		return true;
	}
	return false;
}

void func_468(int iParam0, int iParam1)
{
	var uVar0;
	
	if (!func_470(&uVar0, 0, iParam1))
	{
		return;
	}
	if (Global_17257.f_7862)
	{
		reset_hud_component_values(15);
		Global_17257.f_7862 = 0;
	}
	_0x55598D21339CB998(0f);
	if (Global_17257.f_5498[uVar0])
	{
		clear_additional_text(9, false);
		Global_17257.f_5498[uVar0] = 0;
	}
	if (Global_17257.f_5484[uVar0])
	{
		set_streamed_texture_dict_as_no_longer_needed("CommonMenu");
		Global_17257.f_5484[uVar0] = 0;
	}
	if (Global_17257.f_5491[uVar0])
	{
		set_streamed_texture_dict_as_no_longer_needed("MPShopSale");
		Global_17257.f_5491[uVar0] = 0;
	}
	if (iParam0)
	{
		func_469(&(Global_17257.f_5530[uVar0 /*10*/]));
		Global_17257.f_5591[uVar0] = 0;
	}
	else
	{
		Global_17257.f_5591[uVar0] = 0;
	}
}

void func_469(int iParam0)
{
	if (*iParam0.f_9 != 0)
	{
		if (has_scaleform_movie_loaded(*iParam0))
		{
			set_scaleform_movie_as_no_longer_needed(iParam0);
		}
		*iParam0 = 0;
		*iParam0.f_9 = 0;
	}
}

bool func_470(var uParam0, int iParam1, int iParam2)
{
	char[64] cVar0;
	int iVar16;
	int iVar17;
	int iVar18;
	
	if (iParam2 == -1)
	{
		if (network_is_game_in_progress() && network_get_this_script_is_network_script())
		{
			iParam2 = _0x638A3A81733086DB();
		}
	}
	StringCopy(&cVar0, get_this_script_name(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = get_hash_key(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6)
	{
		if (Global_17257.f_5591[iVar17] == iVar16)
		{
			*uParam0 = iVar17;
			return true;
		}
		else if (Global_17257.f_5591[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (iParam1)
	{
		if (iVar18 != -1)
		{
			Global_17257.f_5591[iVar18] = iVar16;
			*uParam0 = iVar18;
			return true;
		}
	}
	return false;
}

int func_471(int iParam0)
{
	return Global_2418472[iParam0 /*313*/].f_114 == 2;
}

int func_472(int iParam0)
{
	return Global_2418472[iParam0 /*313*/].f_114 == 7;
}

bool func_473()
{
	if (_is_input_disabled(2))
	{
		if (Global_2562129 > -1)
		{
			if (is_control_just_pressed(2, 237))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_474()
{
	if (_is_input_disabled(2))
	{
		if (((is_disabled_control_just_pressed(2, 176) && !is_disabled_control_just_pressed(2, 237)) && !is_disabled_control_just_pressed(2, 238)) && !_network_is_text_chat_active())
		{
			return true;
		}
	}
	else if (is_disabled_control_just_pressed(2, 176))
	{
		return true;
	}
	return false;
}

void func_475(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5, int iParam6, int iParam7)
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
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	int iVar32;
	float fVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	vector3 vVar37;
	int iVar40;
	float fVar41;
	float fVar42;
	float fVar43;
	float fVar44;
	float fVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	float fVar49;
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	float fVar54;
	float fVar55;
	float fVar56;
	int iVar57;
	int iVar58;
	float fVar59;
	float fVar60;
	float fVar61;
	float fVar62;
	int iVar63;
	float fVar64;
	float fVar65;
	int iVar66;
	int iVar67;
	int iVar68;
	int iVar69;
	int iVar70;
	
	if (!func_470(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_499(0, iParam6))
	{
		return;
	}
	_set_screen_draw_position(76, 84);
	_0xF5A2C681787E579D(-0.05f, -0.05f, 0f, 0f);
	fVar55 = 0f;
	if (Global_17257)
	{
		if (func_497(29, 1, 1, &fVar35, &fVar36, iParam7))
		{
			fVar55 = fVar36;
			fVar55 += 0f;
		}
		else
		{
			Global_17257 = 0;
		}
	}
	if (get_hash_key(&(Global_17257.f_1)) == get_hash_key("HIDE"))
	{
		fVar56 = Global_17255;
	}
	else
	{
		fVar56 = Global_17255 + fVar55 + 0.034722f + 0f;
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_17256;
	}
	fVar59 = 1f;
	if (iParam7)
	{
		_get_screen_active_resolution(&iVar57, &iVar58);
		fVar60 = _get_screen_aspect_ratio(0);
		if (func_496())
		{
			iVar57 = round(to_float(iVar58) * fVar60);
		}
		fVar61 = to_float(iVar57) / to_float(iVar58);
		fVar59 = fVar61 / fVar60;
		if (func_496())
		{
			fVar59 = 1f;
		}
		iVar57 = round(to_float(iVar57) / fVar59);
		iVar58 = round(to_float(iVar58) / fVar59);
	}
	else
	{
		get_screen_resolution(&iVar57, &iVar58);
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_17257.f_5598)
		{
			if (get_hash_key(&(Global_17257.f_1)) == get_hash_key("HIDE"))
			{
				fVar49 = Global_17255;
			}
			else
			{
				if (Global_17257)
				{
					draw_sprite(func_495(29), func_493(29, 1), Global_17254 + fParam5 * 0.5f, Global_17255 + fVar55 - 0f * 0.5f, fParam5, fVar55 - 0f, 0f, 255, 255, 255, 255, 0);
				}
				if (Global_17257.f_7832)
				{
					iVar1 = Global_17257.f_7828;
					iVar2 = Global_17257.f_7829;
					iVar3 = Global_17257.f_7830;
					iVar4 = Global_17257.f_7831;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_492(Global_17254, Global_17255 + fVar55, fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar49 = Global_17255 + fVar55 + 0.034722f + 0f;
				if (get_hash_key(&(Global_17257.f_1)) != 0)
				{
					func_491();
					_set_text_entry(&(Global_17257.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_17257.f_68)
					{
						if (Global_17257.f_5[iVar14] == 2)
						{
							add_text_component_integer(Global_17257.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_17257.f_5[iVar14] == 3)
						{
							add_text_component_float(Global_17257.f_14[iVar16], Global_17257.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_17257.f_5[iVar14] == 1)
						{
							_add_text_component_item_string(&(Global_17257.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17257.f_5[iVar14] == 8)
						{
							_add_text_component_item_string(&(Global_17257.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17257.f_5[iVar14] == 5)
						{
							add_text_component_substring_player_name(&(Global_17257.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17257.f_5[iVar14] == 6)
						{
							_add_text_component_item_string(&(Global_17257.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17257.f_5[iVar14] == 7)
						{
							add_text_component_substring_player_name(&(Global_17257.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					_draw_text(Global_17254 + 0.00390625f, Global_17255 + fVar55 + 0.00416664f, 0);
				}
				if (Global_17257.f_5601 > Global_17257.f_5095)
				{
					if (Global_17257.f_5604 != 0)
					{
						func_491();
						func_489(Global_17254 + fParam5 - 0.00390625f - func_490("CM_ITEM_COUNT", Global_17257.f_5604, Global_17257.f_5603), Global_17255 + fVar55 + 0.00416664f, "CM_ITEM_COUNT", Global_17257.f_5604, Global_17257.f_5603);
					}
				}
			}
			iVar6 = Global_17257.f_5605;
			iVar9 = 0;
			fVar62 = fVar49;
			if (Global_17257.f_7842)
			{
				iVar1 = Global_17257.f_7838;
				iVar2 = Global_17257.f_7839;
				iVar3 = Global_17257.f_7840;
				iVar4 = Global_17257.f_7841;
			}
			else
			{
				get_hud_colour(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_17257.f_5095 && iVar6 <= Global_17257.f_5088)
			{
				if (iVar6 >= 0)
				{
					if (Global_17257.f_5355[iVar6])
					{
						if (Global_17257.f_5226[iVar6] && iVar6 != Global_17257.f_5605)
						{
							fVar49 += 0.00277776f;
						}
						fVar54 = 0.034722f;
						if (Global_17257.f_5612[iVar6] != 0f)
						{
							fVar54 = Global_17257.f_5612[iVar6];
						}
						fVar49 += fVar54;
						iVar9++;
					}
				}
				iVar6++;
			}
			if (iParam3)
			{
				if (iVar9 <= 1)
				{
					fVar54 = 0.034722f;
					fVar49 += fVar54;
					iVar9++;
					if (Global_17257.f_5088 <= 1)
					{
						Global_17257.f_5088++;
					}
					iVar52 = 1;
				}
			}
			draw_sprite("CommonMenu", "Gradient_Bgd", Global_17254 + fParam5 * 0.5f, fVar62 + fVar49 - fVar62 * 0.5f - 0.00138888f, fParam5, fVar49 - fVar62, 0f, 255, 255, 255, 255, 0);
			if (Global_17257.f_5601 > Global_17257.f_5095)
			{
				if (Global_17257.f_7847)
				{
					iVar1 = Global_17257.f_7843;
					iVar2 = Global_17257.f_7844;
					iVar3 = Global_17257.f_7845;
					iVar4 = Global_17257.f_7846;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_492(Global_17254, fVar49 + 0f, fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				vVar37 = {get_texture_resolution("CommonMenu", "shop_arrows_upANDdown")};
				vVar37.x *= 0.5f / fVar59;
				vVar37.y *= 0.5f / fVar59;
				if (Global_17257.f_7860)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					get_hud_colour(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				draw_sprite("CommonMenu", "shop_arrows_upANDdown", Global_17254 + fParam5 * 0.5f, fVar49 + 0f + 0.034722f * 0.5f, vVar37.x / 1280f * fVar59, vVar37.y / 720f * fVar59, 0f, iVar1, iVar2, iVar3, iVar4, 0);
				fVar49 += 0f + 0.034722f;
			}
			if (get_hash_key(&(Global_17257.f_4562)) != 0 && Global_17257.f_4636 != -1)
			{
				fVar49 += 0.00277776f * 2f;
				fVar41 = Global_17254 + 0.0046875f;
				if (Global_17257.f_4638 != 0)
				{
					func_497(Global_17257.f_4638, 1, 1, &fVar35, &fVar36, iParam7);
					fVar41 = Global_17254 + fVar35 + 0.00078125f * 4f - 0.00078125f * 1f;
				}
				func_488(fVar41);
				_set_text_gxt_entry(&(Global_17257.f_4562));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17257.f_4632)
				{
					if (Global_17257.f_4566[iVar14] == 2)
					{
						add_text_component_integer(Global_17257.f_4571[iVar15]);
						iVar15++;
					}
					else if (Global_17257.f_4566[iVar14] == 3)
					{
						add_text_component_float(Global_17257.f_4575[iVar16], Global_17257.f_4579[iVar16]);
						iVar16++;
					}
					else if (Global_17257.f_4566[iVar14] == 1)
					{
						_add_text_component_item_string(&(Global_17257.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17257.f_4566[iVar14] == 5)
					{
						add_text_component_substring_player_name(&(Global_17257.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17257.f_4566[iVar14] == 6)
					{
						_add_text_component_item_string(&(Global_17257.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17257.f_4566[iVar14] == 7)
					{
						add_text_component_substring_player_name(&(Global_17257.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = _0x9040DFB09BE75706(fVar41, fVar49 + 0.00277776f);
				get_hud_colour(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_492(Global_17254, fVar49 - 0.00277776f, fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17257.f_7852)
				{
					iVar1 = Global_17257.f_7848;
					iVar2 = Global_17257.f_7849;
					iVar3 = Global_17257.f_7850;
					iVar4 = Global_17257.f_7851;
				}
				else
				{
					get_hud_colour(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				draw_sprite("CommonMenu", "Gradient_Bgd", Global_17254 + fParam5 * 0.5f, fVar49 + _get_text_scale_height(0.35f, 0) * IntToFloat(iVar6) + 0.00138888f * 13f + 0.00138888f * 5f * IntToFloat(iVar6 - 1) * 0.5f - 0.00138888f, fParam5, _get_text_scale_height(0.35f, 0) * IntToFloat(iVar6) + 0.00138888f * 13f + 0.00138888f * 5f * IntToFloat(iVar6 - 1), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_488(fVar41);
				_set_text_entry(&(Global_17257.f_4562));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17257.f_4632)
				{
					if (Global_17257.f_4566[iVar14] == 2)
					{
						add_text_component_integer(Global_17257.f_4571[iVar15]);
						iVar15++;
					}
					else if (Global_17257.f_4566[iVar14] == 3)
					{
						add_text_component_float(Global_17257.f_4575[iVar16], Global_17257.f_4579[iVar16]);
						iVar16++;
					}
					else if (Global_17257.f_4566[iVar14] == 1)
					{
						_add_text_component_item_string(&(Global_17257.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17257.f_4566[iVar14] == 5)
					{
						add_text_component_substring_player_name(&(Global_17257.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17257.f_4566[iVar14] == 6)
					{
						_add_text_component_item_string(&(Global_17257.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17257.f_4566[iVar14] == 7)
					{
						add_text_component_substring_player_name(&(Global_17257.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17257.f_4566[iVar14] == 8)
					{
						_add_text_component_item_string(&(Global_17257.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				_draw_text(fVar41, fVar49 + 0.00277776f, 0);
				if (Global_17257.f_4638 != 0)
				{
					func_497(Global_17257.f_4638, 1, 1, &fVar35, &fVar36, iParam7);
					func_487(Global_17257.f_4638, 1, &iVar46, &iVar47, &iVar48);
					draw_sprite(func_495(Global_17257.f_4638), func_493(Global_17257.f_4638, 1), Global_17254 + fVar35 * 0.5f + 0.00078125f * 2f, fVar49 + fVar36 * 0.5f - 0.00138888f * 4f, fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
				}
				fVar49 += _get_text_scale_height(0.35f, 0) * IntToFloat(iVar6) + 0.00138888f * 13f + 0.00138888f * 5f * IntToFloat(iVar6 - 1);
				if (Global_17257.f_4636 > 0)
				{
					if (get_game_timer() - Global_17257.f_4637 > Global_17257.f_4636)
					{
						StringCopy(&(Global_17257.f_4562), "", 16);
						Global_17257.f_4636 = -1;
					}
				}
			}
			if (get_hash_key(&(Global_2562053.f_21)) != 0 && Global_2562053.f_65 != -1)
			{
				fVar49 += 0.00277776f * 2f;
				fVar41 = Global_17254 + 0.0046875f;
				if (Global_2562053.f_67 != 0)
				{
					func_497(Global_2562053.f_67, 1, 1, &fVar35, &fVar36, iParam7);
					fVar41 = Global_17254 + fVar35 + 0.00078125f * 4f - 0.00078125f * 1f;
				}
				func_488(fVar41);
				_set_text_gxt_entry(&(Global_2562053.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_2562053.f_61)
				{
					if (Global_2562053.f_25[iVar14] == 2)
					{
						add_text_component_integer(Global_2562053.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_2562053.f_25[iVar14] == 3)
					{
						add_text_component_float(Global_2562053.f_34[iVar16], Global_2562053.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_2562053.f_25[iVar14] == 1)
					{
						_add_text_component_item_string(&(Global_2562053.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2562053.f_25[iVar14] == 5)
					{
						add_text_component_substring_player_name(&(Global_2562053.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2562053.f_25[iVar14] == 6)
					{
						_add_text_component_item_string(&(Global_2562053.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2562053.f_25[iVar14] == 7)
					{
						add_text_component_substring_player_name(&(Global_2562053.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2562053.f_25[iVar14] == 8)
					{
						_add_text_component_item_string(&(Global_2562053.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = _0x9040DFB09BE75706(fVar41, fVar49 + 0.00277776f);
				get_hud_colour(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_492(Global_17254, fVar49 - 0.00277776f, fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17257.f_7852)
				{
					iVar1 = Global_17257.f_7848;
					iVar2 = Global_17257.f_7849;
					iVar3 = Global_17257.f_7850;
					iVar4 = Global_17257.f_7851;
				}
				else
				{
					get_hud_colour(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				draw_sprite("CommonMenu", "Gradient_Bgd", Global_17254 + fParam5 * 0.5f, fVar49 + _get_text_scale_height(0.35f, 0) * IntToFloat(iVar6) + 0.00138888f * 13f + 0.00138888f * 5f * IntToFloat(iVar6 - 1) * 0.5f - 0.00138888f, fParam5, _get_text_scale_height(0.35f, 0) * IntToFloat(iVar6) + 0.00138888f * 13f + 0.00138888f * 5f * IntToFloat(iVar6 - 1), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_488(fVar41);
				_set_text_entry(&(Global_2562053.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_2562053.f_61)
				{
					if (Global_2562053.f_25[iVar14] == 2)
					{
						add_text_component_integer(Global_2562053.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_2562053.f_25[iVar14] == 3)
					{
						add_text_component_float(Global_2562053.f_34[iVar16], Global_2562053.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_2562053.f_25[iVar14] == 1)
					{
						_add_text_component_item_string(&(Global_2562053.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2562053.f_25[iVar14] == 8)
					{
						_add_text_component_item_string(&(Global_2562053.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2562053.f_25[iVar14] == 5)
					{
						add_text_component_substring_player_name(&(Global_2562053.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2562053.f_25[iVar14] == 6)
					{
						_add_text_component_item_string(&(Global_2562053.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2562053.f_25[iVar14] == 7)
					{
						add_text_component_substring_player_name(&(Global_2562053.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				_draw_text(fVar41, fVar49 + 0.00277776f, 0);
				if (Global_2562053.f_67 != 0)
				{
					func_497(Global_2562053.f_67, 1, 1, &fVar35, &fVar36, iParam7);
					func_487(Global_2562053.f_67, 1, &iVar46, &iVar47, &iVar48);
					draw_sprite(func_495(Global_2562053.f_67), func_493(Global_2562053.f_67, 1), Global_17254 + fVar35 * 0.5f + 0.00078125f * 2f, fVar49 + fVar36 * 0.5f - 0.00138888f * 4f, fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
				}
				fVar49 += _get_text_scale_height(0.35f, 0) * IntToFloat(iVar6) + 0.00138888f * 13f + 0.00138888f * 5f * IntToFloat(iVar6 - 1);
				if (Global_2562053.f_65 > 0)
				{
					if (get_game_timer() - Global_2562053.f_66 > Global_2562053.f_65)
					{
						StringCopy(&(Global_2562053.f_21), "", 16);
						Global_2562053.f_65 = -1;
					}
				}
			}
			func_483(iVar57, iParam1, 0, 0, 0, 0, iParam4, 1, 0);
			_set_screen_draw_position(76, 84);
			_0xF5A2C681787E579D(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_17257.f_5598)
		{
			iVar19 = 0;
			iVar23 = 0;
			iVar20 = 0;
			iVar21 = 0;
			iVar22 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar63 = Global_17257.f_5088;
			if (Global_17257.f_5599)
			{
				iVar63 = Global_17257.f_5602 - 1;
			}
			fVar64 = 0f;
			fVar65 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar63)
			{
				fVar54 = 0.034722f;
				if (Global_17257.f_5612[iVar6] != 0f)
				{
					fVar54 = Global_17257.f_5612[iVar6];
				}
				if (Global_17257.f_5599)
				{
					iVar6 = Global_17257.f_7488[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				iVar32 = false;
				if (iVar6 >= Global_17257.f_5605 && iVar9 < Global_17257.f_5095)
				{
					iVar32 = true;
					if (Global_17257.f_5606 == iVar6)
					{
						fVar65 = fVar64;
					}
					if (Global_17257.f_5226[iVar6])
					{
						iVar12++;
					}
					fVar34 = fVar56 + fVar64 + 0.00277776f * IntToFloat(iVar12) + 0.00277776f;
				}
				Global_17257.f_5746[iVar6] = fVar34;
				fVar33 = Global_17254 + 0.0046875f;
				iVar40 = false;
				iVar31 = Global_17257.f_5606 == iVar6;
				if ((iVar31 && iVar5 == 1) && iVar32)
				{
					iVar66 = 255;
					iVar67 = 255;
					iVar68 = 255;
					iVar69 = 255;
					if (Global_17257.f_7854)
					{
						get_hud_colour(Global_17257.f_7853, &iVar66, &iVar67, &iVar68, &iVar69);
					}
					else
					{
						get_hud_colour(1, &iVar66, &iVar67, &iVar68, &iVar69);
					}
					draw_sprite("CommonMenu", "Gradient_Nav", Global_17254 + fParam5 * 0.5f, fVar56 + fVar65 + 0.00277776f * IntToFloat(iVar12) + fVar54 * 0.5f, fParam5, fVar54, 0f, iVar66, iVar67, iVar68, iVar69, 0);
					Global_17257.f_5744 = fVar34;
				}
				if (iVar52 && iVar7 == iVar63)
				{
					func_481(iVar31, 1, 0, 0, 0, 0);
					_set_text_entry("DFLT_MNU_OPT");
					_draw_text(fVar33, fVar34, 0);
					iVar40 = true;
				}
				else
				{
					iVar8 = false;
					while (iVar8 < Global_17257.f_5096)
					{
						if (is_bit_set(Global_17257.f_4959[iVar6], iVar8) || Global_17257.f_4926[iVar8] == 5)
						{
							if (Global_17257.f_5599)
							{
								iVar19 = Global_17257.f_7499[iVar9 * Global_17257.f_5096 + iVar8];
								iVar20 = Global_17257.f_7540[iVar9 * Global_17257.f_5096 + iVar8];
								iVar21 = Global_17257.f_7581[iVar9 * Global_17257.f_5096 + iVar8];
								iVar22 = Global_17257.f_7622[iVar9 * Global_17257.f_5096 + iVar8];
								iVar23 = Global_17257.f_7663[iVar9 * Global_17257.f_5096 + iVar8];
							}
							else
							{
								Global_17257.f_7499[iVar9 * Global_17257.f_5096 + iVar8] = iVar19;
								Global_17257.f_7540[iVar9 * Global_17257.f_5096 + iVar8] = iVar20;
								Global_17257.f_7581[iVar9 * Global_17257.f_5096 + iVar8] = iVar21;
								Global_17257.f_7622[iVar9 * Global_17257.f_5096 + iVar8] = iVar22;
								Global_17257.f_7663[iVar9 * Global_17257.f_5096 + iVar8] = iVar23;
							}
							iVar70 = 0;
							iVar53 = false;
							if (Global_17257.f_5878[0] != -1)
							{
								if (iVar6 * 5 + iVar8 == Global_17257.f_5875[0])
								{
									iVar53 = true;
									iVar70 = 0;
								}
							}
							if (Global_17257.f_5878[1] != -1)
							{
								if (iVar6 * 5 + iVar8 == Global_17257.f_5875[1])
								{
									iVar53 = true;
									iVar70 = 1;
								}
							}
							if (Global_17257.f_4932[iVar8] != -1f)
							{
								fVar33 = Global_17254 + 0.0046875f + Global_17257.f_4932[iVar8];
							}
							if ((iVar8 < 4 && Global_17257.f_4932[iVar8 + 1] != -1f) && fVar33 < Global_17257.f_4932[iVar8 + 1])
							{
								fVar45 = Global_17257.f_4932[iVar8 + 1] - fVar33;
							}
							else
							{
								fVar45 = Global_17254 + Global_17256 - 0.0046875f - fVar33;
							}
							if ((Global_17257.f_4945[iVar8] && Global_17257.f_5741) && iVar31)
							{
								iVar51 = true;
							}
							else
							{
								iVar51 = false;
							}
							switch (Global_17257.f_4926[iVar8])
							{
								case 0:
									break;
								
								case 1:
									iVar24 = iVar19;
									if (iVar5 == 1 && iVar32)
									{
										if (!Global_17257.f_5599)
										{
											fVar42 = 0f;
											fVar43 = 0f;
											iVar25 = 0;
											iVar26 = 0;
											iVar27 = 0;
											iVar28 = 0;
											iVar29 = 0;
											if (get_hash_key(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
											{
												iVar50 = false;
												iVar14 = 0;
												while (iVar14 < 4)
												{
													if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_17257.f_2124[iVar24 /*5*/][iVar14] == 8)
													{
														iVar50 = true;
													}
													iVar14++;
												}
												func_481(iVar31, Global_17257.f_1610[iVar24], Global_17257.f_1867[iVar24], iVar53, iVar70, iVar50);
												_set_text_entry_for_width(&(Global_17257.f_73[iVar24 /*6*/]));
											}
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 1)
												{
													iVar25++;
													if (get_hash_key(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
													{
														_add_text_component_item_string(&(Global_17257.f_73[iVar24 + iVar25 /*6*/]));
													}
												}
												else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 8)
												{
													iVar25++;
													if (get_hash_key(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
													{
														_add_text_component_item_string(&(Global_17257.f_73[iVar24 + iVar25 /*6*/]));
													}
												}
												else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 5)
												{
													if (get_hash_key(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
													{
														add_text_component_substring_player_name(&(Global_2443586[iVar23 + iVar29 /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 6)
												{
													if (get_hash_key(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
													{
														_add_text_component_item_string(&(Global_2443586[iVar23 + iVar29 /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 7)
												{
													if (get_hash_key(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
													{
														add_text_component_substring_player_name(&(Global_2443586[iVar23 + iVar29 /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 2)
												{
													if (get_hash_key(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
													{
														add_text_component_integer(Global_17257.f_3918[iVar20 + iVar26]);
													}
													iVar26++;
												}
												else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 3)
												{
													if (get_hash_key(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
													{
														add_text_component_float(Global_17257.f_4175[iVar21 + iVar27], Global_17257.f_4304[iVar21 + iVar27]);
													}
													iVar27++;
												}
												else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 4)
												{
													iVar28++;
												}
												iVar14++;
											}
											if (get_hash_key(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
											{
												fVar42 = _get_text_screen_width(1);
											}
											if (iVar28 > 0)
											{
												iVar14 = 0;
												while (iVar14 < iVar28)
												{
													if (func_497(Global_17257.f_4433[iVar22 + iVar14], iVar31, 0, &fVar35, &fVar36, iParam7))
													{
														fVar43 += fVar35;
														if (iVar14 > 0)
														{
															fVar43 -= 0.00078125f * 4f;
														}
														if (Global_17257.f_4433[iVar22 + iVar14] == 2 || Global_17257.f_4433[iVar22 + iVar14] == 48)
														{
															fVar43 -= 0.00078125f * 5f;
														}
													}
													iVar14++;
												}
											}
											fVar41 = 0f;
											if (Global_17257.f_4953[iVar8] == 2)
											{
												fVar41 += fVar45 - fVar42 + fVar43 + 0.00078125f * 1f;
											}
											else if (Global_17257.f_4953[iVar8] == 0)
											{
												fVar41 += fVar45 - fVar33 * 0.5f - fVar42 + fVar43 * 0.5f;
											}
											Global_17257.f_7704[iVar9 * Global_17257.f_5096 + iVar8] = fVar41;
											Global_17257.f_7745[iVar9 * Global_17257.f_5096 + iVar8] = fVar42;
											Global_17257.f_7786[iVar9 * Global_17257.f_5096 + iVar8] = fVar43;
										}
										else
										{
											fVar41 = Global_17257.f_7704[iVar9 * Global_17257.f_5096 + iVar8];
											fVar42 = Global_17257.f_7745[iVar9 * Global_17257.f_5096 + iVar8];
											fVar43 = Global_17257.f_7786[iVar9 * Global_17257.f_5096 + iVar8];
										}
										if (iVar51)
										{
											if (func_497(26, 1, 0, &fVar35, &fVar36, iParam7))
											{
												if (Global_17257.f_4953[iVar8] == 2)
												{
													fVar41 -= fVar35 * 2f;
												}
												fVar44 = fVar35 * 0.5f;
												if (func_497(26, 1, 1, &fVar35, &fVar36, iParam7))
												{
													func_487(26, 1, &iVar46, &iVar47, &iVar48);
													draw_sprite(func_495(26), func_493(26, 1), fVar33 + fVar41 + fVar44, fVar34 - 0.00277776f + fVar54 * 0.5f, fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_497(27, 1, 0, &fVar35, &fVar36, iParam7))
											{
												fVar41 += fVar35;
												fVar44 = fVar35 * 0.5f;
												if (func_497(27, 1, 1, &fVar35, &fVar36, iParam7))
												{
													func_487(27, 1, &iVar46, &iVar47, &iVar48);
													draw_sprite(func_495(27), func_493(27, 1), fVar33 + fVar41 + fVar44 + fVar42 + fVar43, fVar34 - 0.00277776f + fVar54 * 0.5f, fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										iVar30 = 0;
										if (get_hash_key(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
										{
											iVar50 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_17257.f_2124[iVar24 /*5*/][iVar14] == 8)
												{
													iVar50 = true;
												}
												iVar14++;
											}
											func_481(iVar31, Global_17257.f_1610[iVar24], Global_17257.f_1867[iVar24], iVar53, 0, iVar50);
											if (Global_17257.f_7858 && Global_17257.f_7859 == iVar6)
											{
												func_480(iVar31);
											}
											_set_text_entry(&(Global_17257.f_73[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (get_hash_key(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
												{
													_add_text_component_item_string(&(Global_17257.f_73[iVar24 + iVar25 /*6*/]));
												}
												iVar30 = 1;
											}
											else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (get_hash_key(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
												{
													_add_text_component_item_string(&(Global_17257.f_73[iVar24 + iVar25 /*6*/]));
												}
												iVar30 = 8;
											}
											else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 5)
											{
												if (get_hash_key(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
												{
													add_text_component_substring_player_name(&(Global_2443586[iVar23 + iVar29 /*16*/]));
												}
												iVar29++;
												iVar30 = 5;
											}
											else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 6)
											{
												if (get_hash_key(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
												{
													_add_text_component_item_string(&(Global_2443586[iVar23 + iVar29 /*16*/]));
												}
												iVar29++;
												iVar30 = 6;
											}
											else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 7)
											{
												if (get_hash_key(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
												{
													add_text_component_substring_player_name(&(Global_2443586[iVar23 + iVar29 /*16*/]));
												}
												iVar29++;
												iVar30 = 6;
											}
											else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 2)
											{
												if (get_hash_key(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
												{
													add_text_component_integer(Global_17257.f_3918[iVar20 + iVar26]);
												}
												iVar26++;
												iVar30 = 2;
											}
											else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 3)
											{
												if (get_hash_key(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
												{
													add_text_component_float(Global_17257.f_4175[iVar21 + iVar27], Global_17257.f_4304[iVar21 + iVar27]);
												}
												iVar27++;
												iVar30 = 3;
											}
											else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 4)
											{
												if (Global_17257.f_4433[iVar22 + iVar28] == 2 || Global_17257.f_4433[iVar22 + iVar28] == 48)
												{
													if (func_497(Global_17257.f_4433[iVar22 + iVar28], iVar31, 0, &fVar35, &fVar36, iParam7))
													{
														fVar41 += fVar35 * 0.5f;
														if (func_497(Global_17257.f_4433[iVar22 + iVar28], iVar31, 1, &fVar35, &fVar36, iParam7))
														{
															func_487(Global_17257.f_4433[iVar22 + iVar28], iVar31, &iVar46, &iVar47, &iVar48);
															if (Global_17257.f_4953[iVar8] == 2)
															{
																draw_sprite(func_495(Global_17257.f_4433[iVar22 + iVar28]), func_493(Global_17257.f_4433[iVar22 + iVar28], iVar31), fVar33 + fVar41 - 0.00078125f * 8f + 0.00078125f * 4f, fVar34 - 0.00277776f + fVar54 * 0.5f, fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else
															{
																draw_sprite(func_495(Global_17257.f_4433[iVar22 + iVar28]), func_493(Global_17257.f_4433[iVar22 + iVar28], iVar31), fVar33 + fVar41 - 0.00078125f * 8f, fVar34 - 0.00277776f + fVar54 * 0.5f, fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															fVar41 += 0.00078125f * 3f;
														}
													}
												}
												iVar28++;
												iVar30 = 4;
											}
											iVar14++;
										}
										if (get_hash_key(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
										{
											if (iVar30 == 4 && Global_17257.f_4953[iVar8] == 2)
											{
												_draw_text(fVar33 + fVar41 + 0.00078125f * 7f, fVar34, 0);
											}
											else
											{
												_draw_text(fVar33 + fVar41, fVar34, 0);
											}
										}
										if (iVar28 > 0)
										{
											fVar41 += 6f * 0.00078125f;
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (Global_17257.f_4433[iVar22 + iVar14] != 2 && Global_17257.f_4433[iVar22 + iVar14] != 48)
												{
													if (func_497(Global_17257.f_4433[iVar22 + iVar14], iVar31, 0, &fVar35, &fVar36, iParam7))
													{
														fVar41 += fVar35 * 0.5f;
														if (func_497(Global_17257.f_4433[iVar22 + iVar14], iVar31, 1, &fVar35, &fVar36, iParam7))
														{
															func_487(Global_17257.f_4433[iVar22 + iVar14], iVar31, &iVar46, &iVar47, &iVar48);
															if (Global_17257.f_4433[iVar22 + iVar14] == 30)
															{
																draw_sprite(func_495(Global_17257.f_4433[iVar22 + iVar14]), func_493(Global_17257.f_4433[iVar22 + iVar14], iVar31), Global_17254 + fVar35 * 0.5f, fVar34 + 0.00277776f + fVar36 * 0.5f - 0.00078125f * 11f, fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else if (Global_17257.f_4953[iVar8] == 2)
															{
																draw_sprite(func_495(Global_17257.f_4433[iVar22 + iVar14]), func_493(Global_17257.f_4433[iVar22 + iVar14], iVar31), fVar33 + fVar41 + fVar42 - 0.00078125f * 8f + 0.00078125f * 4f, fVar34 - 0.00277776f + fVar54 * 0.5f, fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else
															{
																draw_sprite(func_495(Global_17257.f_4433[iVar22 + iVar14]), func_493(Global_17257.f_4433[iVar22 + iVar14], iVar31), fVar33 + fVar41 + fVar42 - 0.00078125f * 12f, fVar34 - 0.00277776f + fVar54 * 0.5f, fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
														}
														fVar41 += 12f * 0.00078125f;
													}
												}
												iVar14++;
											}
										}
									}
									iVar40 = true;
									iVar19++;
									iVar14 = 0;
									while (iVar14 < 4)
									{
										if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 1)
										{
											iVar19++;
										}
										else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 8)
										{
											iVar19++;
										}
										else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 2)
										{
											iVar20++;
										}
										else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 3)
										{
											iVar21++;
										}
										else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 4)
										{
											iVar22++;
										}
										else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 5)
										{
											iVar23++;
										}
										else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 6)
										{
											iVar23++;
										}
										else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 7)
										{
											iVar23++;
										}
										iVar14++;
									}
									break;
								
								case 2:
									if (iVar5 == 1 && iVar32)
									{
										if (!Global_17257.f_5599)
										{
											func_481(iVar31, Global_17257.f_1610[iVar24], Global_17257.f_1867[iVar24], iVar53, 0, 0);
											if (Global_17257.f_7858 && Global_17257.f_7859 == iVar6)
											{
												func_480(iVar31);
											}
											_set_text_entry_for_width("NUMBER");
											add_text_component_integer(Global_17257.f_3918[iVar20]);
											fVar42 = _get_text_screen_width(1);
											fVar41 = 0f;
											if (Global_17257.f_4953[iVar8] == 2)
											{
												fVar41 += fVar45 - fVar42 + 0.00078125f * 1f;
											}
											else if (Global_17257.f_4953[iVar8] == 0)
											{
												fVar41 += fVar45 - fVar33 * 0.5f - fVar42 * 0.5f;
											}
											Global_17257.f_7704[iVar9 * Global_17257.f_5096 + iVar8] = fVar41;
											Global_17257.f_7745[iVar9 * Global_17257.f_5096 + iVar8] = fVar42;
										}
										else
										{
											fVar41 = Global_17257.f_7704[iVar9 * Global_17257.f_5096 + iVar8];
											fVar42 = Global_17257.f_7745[iVar9 * Global_17257.f_5096 + iVar8];
										}
										if (iVar51)
										{
											if (func_497(26, 1, 0, &fVar35, &fVar36, iParam7))
											{
												if (Global_17257.f_4953[iVar8] == 2)
												{
													fVar41 -= fVar35 * 2f;
												}
												fVar44 = fVar35 * 0.5f;
												if (func_497(26, 1, 1, &fVar35, &fVar36, iParam7))
												{
													func_487(26, 1, &iVar46, &iVar47, &iVar48);
													draw_sprite(func_495(26), func_493(26, 1), fVar33 + fVar41 + fVar44, fVar34 - 0.00277776f + fVar54 * 0.5f, fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_497(27, 1, 0, &fVar35, &fVar36, iParam7))
											{
												fVar41 += fVar35;
												fVar44 = fVar35 * 0.5f;
												if (func_497(27, 1, 1, &fVar35, &fVar36, iParam7))
												{
													func_487(27, 1, &iVar46, &iVar47, &iVar48);
													draw_sprite(func_495(27), func_493(27, 1), fVar33 + fVar41 + fVar44 + fVar42 + fVar43, fVar34 - 0.00277776f + fVar54 * 0.5f, fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										func_481(iVar31, Global_17257.f_1610[iVar24], Global_17257.f_1867[iVar24], iVar53, 0, 0);
										func_479(fVar33 + fVar41, fVar34, "NUMBER", Global_17257.f_3918[iVar20], 0);
									}
									iVar40 = true;
									iVar20++;
									break;
								
								case 3:
									if (iVar5 == 1 && iVar32)
									{
										if (!Global_17257.f_5599)
										{
											func_481(iVar31, Global_17257.f_1610[iVar24], Global_17257.f_1867[iVar24], iVar53, 0, 0);
											if (Global_17257.f_7858 && Global_17257.f_7859 == iVar6)
											{
												func_480(iVar31);
											}
											_set_text_entry_for_width("NUMBER");
											add_text_component_float(Global_17257.f_4175[iVar21], Global_17257.f_4304[iVar21]);
											fVar42 = _get_text_screen_width(1);
											fVar41 = 0f;
											if (Global_17257.f_4953[iVar8] == 2)
											{
												fVar41 += fVar45 - fVar42 + 0.00078125f * 1f;
											}
											else if (Global_17257.f_4953[iVar8] == 0)
											{
												fVar41 += fVar45 - fVar33 * 0.5f - fVar42 * 0.5f;
											}
											Global_17257.f_7704[iVar9 * Global_17257.f_5096 + iVar8] = fVar41;
											Global_17257.f_7745[iVar9 * Global_17257.f_5096 + iVar8] = fVar42;
										}
										else
										{
											fVar41 = Global_17257.f_7704[iVar9 * Global_17257.f_5096 + iVar8];
											fVar42 = Global_17257.f_7745[iVar9 * Global_17257.f_5096 + iVar8];
										}
										if (iVar51)
										{
											if (func_497(26, 1, 0, &fVar35, &fVar36, 0))
											{
												if (Global_17257.f_4953[iVar8] == 2)
												{
													fVar41 -= fVar35 * 2f;
												}
												fVar44 = fVar35 * 0.5f;
												if (func_497(26, 1, 1, &fVar35, &fVar36, iParam7))
												{
													func_487(26, 1, &iVar46, &iVar47, &iVar48);
													draw_sprite(func_495(26), func_493(26, 1), fVar33 + fVar41 + fVar44, fVar34 - 0.00277776f + fVar54 * 0.5f, fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_497(27, 1, 0, &fVar35, &fVar36, iParam7))
											{
												fVar41 += fVar35;
												fVar44 = fVar35 * 0.5f;
												if (func_497(27, 1, 1, &fVar35, &fVar36, iParam7))
												{
													func_487(27, 1, &iVar46, &iVar47, &iVar48);
													draw_sprite(func_495(27), func_493(27, 1), fVar33 + fVar41 + fVar44 + fVar42 + fVar43, fVar34 - 0.00277776f + fVar54 * 0.5f, fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										func_481(iVar31, Global_17257.f_1610[iVar24], Global_17257.f_1867[iVar24], iVar53, 0, 0);
										func_478(fVar33 + fVar41, fVar34, "NUMBER", Global_17257.f_4175[iVar21], Global_17257.f_4304[iVar21]);
									}
									iVar40 = true;
									iVar21++;
									break;
								
								case 4:
									if (iVar5 == 1 && iVar32)
									{
										if (func_497(Global_17257.f_4433[iVar22], iVar31, 0, &fVar35, &fVar36, iParam7))
										{
											if (!Global_17257.f_5599)
											{
												fVar43 = fVar35;
												fVar41 = 0f;
												if (Global_17257.f_4953[iVar8] == 2)
												{
													fVar41 += fVar45 - fVar43 + 0.00078125f * 1f;
												}
												else if (Global_17257.f_4953[iVar8] == 0)
												{
													fVar41 += fVar45 - fVar33 * 0.5f - fVar43 * 0.5f;
												}
												Global_17257.f_7704[iVar9 * Global_17257.f_5096 + iVar8] = fVar41;
												Global_17257.f_7786[iVar9 * Global_17257.f_5096 + iVar8] = fVar43;
											}
											else
											{
												fVar41 = Global_17257.f_7704[iVar9 * Global_17257.f_5096 + iVar8];
												fVar43 = Global_17257.f_7786[iVar9 * Global_17257.f_5096 + iVar8];
											}
											if (iVar51)
											{
												if (func_497(26, 1, 0, &fVar35, &fVar36, iParam7))
												{
													if (Global_17257.f_4953[iVar8] == 2)
													{
														fVar41 -= fVar35 * 2f;
													}
													fVar44 = fVar35 * 0.5f;
													if (func_497(26, 1, 1, &fVar35, &fVar36, iParam7))
													{
														func_487(26, 1, &iVar46, &iVar47, &iVar48);
														draw_sprite(func_495(26), func_493(26, 1), fVar33 + fVar41 + fVar44, fVar34 - 0.00277776f + fVar54 * 0.5f, fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
													}
												}
												if (func_497(27, 1, 0, &fVar35, &fVar36, iParam7))
												{
													fVar41 += fVar35;
													fVar44 = fVar35 * 0.5f;
													if (func_497(27, 1, 1, &fVar35, &fVar36, iParam7))
													{
														func_487(27, 1, &iVar46, &iVar47, &iVar48);
														draw_sprite(func_495(27), func_493(27, 1), fVar33 + fVar41 + fVar44 + fVar42 + fVar43, fVar34 - 0.00277776f + fVar54 * 0.5f, fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
													}
												}
											}
											if (func_497(Global_17257.f_4433[iVar22], iVar31, 1, &fVar35, &fVar36, iParam7))
											{
												func_487(Global_17257.f_4433[iVar22], iVar31, &iVar46, &iVar47, &iVar48);
												draw_sprite(func_495(Global_17257.f_4433[iVar22]), func_493(Global_17257.f_4433[iVar22], iVar31), fVar33 + fVar41 + fVar35 * 0.5f, fVar34 - 0.00277776f + fVar54 * 0.5f, fVar35 * func_477(Global_17257.f_4433[iVar22]), fVar36 * func_477(Global_17257.f_4433[iVar22]), 0f, iVar46, iVar47, iVar48, 255, 0);
											}
										}
									}
									iVar40 = true;
									iVar22++;
									break;
								
								case 5:
									iVar40 = true;
									break;
							}
							if (Global_17257.f_4926[iVar8] == 5)
							{
								if (Global_17257.f_4938[iVar8] > 0.05f)
								{
									fVar33 += Global_17257.f_4938[iVar8];
								}
								else
								{
									fVar33 += 0.05f;
								}
							}
							else
							{
								fVar33 += Global_17257.f_4938[iVar8];
								if (Global_17257.f_4945[iVar8])
								{
									if (func_497(26, 1, 1, &fVar35, &fVar36, iParam7))
									{
										fVar33 -= fVar35;
									}
								}
							}
						}
						else
						{
							fVar33 += Global_17257.f_4938[iVar8];
						}
						iVar8++;
					}
				}
				if (iVar40)
				{
					if (iVar32)
					{
						Global_17257.f_7488[iVar9] = iVar6;
						Global_17257.f_5607 = iVar6;
						iVar9++;
						if (Global_17257.f_5226[iVar6])
						{
							iVar13++;
						}
						if (Global_17257.f_5612[iVar6] != 0f)
						{
							fVar64 += Global_17257.f_5612[iVar6];
						}
						else
						{
							fVar64 += 0.034722f;
						}
					}
					if (!Global_17257.f_5598)
					{
						Global_17257.f_5355[iVar6] = 1;
						if (Global_17257.f_5097[iVar6])
						{
							if (iVar31)
							{
								Global_17257.f_5604 = 0;
							}
						}
						else
						{
							iVar11++;
							if (iVar31)
							{
								Global_17257.f_5604 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_17257.f_5598)
			{
				Global_17257.f_5600 = fVar56 + fVar64 + 0.00277776f * IntToFloat(iVar12);
				Global_17257.f_5603 = iVar11;
				Global_17257.f_5601 = iVar10;
				Global_17257.f_5598 = 1;
			}
		}
		iVar5++;
	}
	if (!Global_17257.f_5599)
	{
		Global_17257.f_5602 = iVar9;
		Global_17257.f_5599 = 1;
	}
	Global_17257.f_5743 = fVar49;
	Global_17257.f_5745 = get_game_timer();
	_0x55598D21339CB998(Global_17257.f_5743);
	if (!Global_17257.f_7827)
	{
		func_454();
	}
	Global_17257.f_7827 = 0;
	if (iParam2)
	{
		hide_hud_component_this_frame(10);
	}
	hide_hud_component_this_frame(6);
	hide_hud_component_this_frame(7);
	hide_hud_component_this_frame(9);
	hide_hud_component_this_frame(8);
	if (iParam0)
	{
		func_476(1);
	}
	_0xE3A3DB414A373DAB();
}

void func_476(int iParam0)
{
	Global_1339940.f_932 = iParam0;
}

float func_477(int iParam0)
{
	switch (iParam0)
	{
		case 35:
		case 34:
		case 47:
		case 46:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 43:
		case 44:
		case 45:
			return 0.85f;
			break;
	}
	return 1f;
}

void func_478(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4)
{
	_set_text_entry(sParam2);
	add_text_component_float(fParam3, iParam4);
	_draw_text(fParam0, fParam1, 0);
}

void func_479(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	_set_text_entry(sParam2);
	add_text_component_integer(iParam3);
	_draw_text(fParam0, fParam1, iParam4);
}

void func_480(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (iParam0)
	{
		get_hud_colour(Global_17257.f_7855[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		get_hud_colour(Global_17257.f_7855[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	set_text_colour(iVar0, iVar1, iVar2, 255);
}

void func_481(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2)
	{
		if (iParam3)
		{
			func_482(Global_17257.f_5878[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (iParam0 == 0)
				{
					get_hud_colour(1, &iVar0, &iVar1, &iVar2, &iVar3);
				}
			}
			else if ((iVar0 > 230 && iVar1 > 230) && iVar2 > 230)
			{
				if (iParam0)
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = 0;
				}
			}
			set_text_colour(iVar0, iVar1, iVar2, 255);
		}
		else if (iParam1)
		{
			if (iParam0)
			{
				get_hud_colour(14, &iVar0, &iVar1, &iVar2, &iVar3);
				set_text_colour(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				get_hud_colour(12, &iVar0, &iVar1, &iVar2, &iVar3);
				set_text_colour(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (iParam0)
		{
			set_text_colour(155, 155, 155, 255);
		}
		else
		{
			set_text_colour(155, 155, 155, 255);
		}
	}
	else if (iParam1)
	{
		if (iParam0)
		{
			set_text_colour(0, 0, 0, floor(255f * 0.8f));
		}
		else
		{
			get_hud_colour(1, &iVar0, &iVar1, &iVar2, &iVar3);
			set_text_colour(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (iParam0)
	{
		set_text_colour(155, 155, 155, 255);
	}
	else
	{
		set_text_colour(155, 155, 155, 255);
	}
	set_text_scale(0f, 0.35f);
	set_text_justification(1);
	if (iParam5)
	{
		set_text_scale(0f, 0.425f);
		set_text_font(4);
	}
	else
	{
		set_text_font(0);
	}
	set_text_wrap(0f, 1f);
	set_text_centre(0);
	set_text_dropshadow(0, 0, 0, 0, 0);
	set_text_edge(0, 0, 0, 0, 0);
}

void func_482(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 8;
			*uParam2 = 8;
			*uParam3 = 8;
			break;
		
		case 1:
			*uParam1 = 37;
			*uParam2 = 37;
			*uParam3 = 39;
			break;
		
		case 22:
			*uParam1 = 140;
			*uParam2 = 146;
			*uParam3 = 154;
			break;
		
		case 23:
			*uParam1 = 91;
			*uParam2 = 93;
			*uParam3 = 94;
			break;
		
		case 6:
			*uParam1 = 81;
			*uParam2 = 84;
			*uParam3 = 89;
			break;
		
		case 111:
			*uParam1 = 240;
			*uParam2 = 240;
			*uParam3 = 240;
			break;
		
		case 28:
			*uParam1 = 150;
			*uParam2 = 8;
			*uParam3 = 0;
			break;
		
		case 34:
			*uParam1 = 38;
			*uParam2 = 3;
			*uParam3 = 6;
			break;
		
		case 88:
			*uParam1 = 245;
			*uParam2 = 137;
			*uParam3 = 15;
			break;
		
		case 45:
			*uParam1 = 74;
			*uParam2 = 22;
			*uParam3 = 7;
			break;
		
		case 56:
			*uParam1 = 45;
			*uParam2 = 58;
			*uParam3 = 53;
			break;
		
		case 58:
			*uParam1 = 71;
			*uParam2 = 120;
			*uParam3 = 60;
			break;
		
		case 54:
			*uParam1 = 77;
			*uParam2 = 98;
			*uParam3 = 104;
			break;
		
		case 73:
			*uParam1 = 14;
			*uParam2 = 49;
			*uParam3 = 109;
			break;
		
		case 68:
			*uParam1 = 22;
			*uParam2 = 34;
			*uParam3 = 72;
			break;
		
		case 140:
			*uParam1 = 0;
			*uParam2 = 174;
			*uParam3 = 239;
			break;
		
		case 131:
			*uParam1 = 255;
			*uParam2 = 183;
			*uParam3 = 0;
			break;
		
		case 90:
			*uParam1 = 142;
			*uParam2 = 140;
			*uParam3 = 70;
			break;
		
		case 97:
			*uParam1 = 156;
			*uParam2 = 141;
			*uParam3 = 113;
			break;
		
		case 89:
			*uParam1 = 145;
			*uParam2 = 115;
			*uParam3 = 71;
			break;
		
		case 105:
			*uParam1 = 98;
			*uParam2 = 68;
			*uParam3 = 40;
			break;
		
		case 100:
			*uParam1 = 124;
			*uParam2 = 27;
			*uParam3 = 68;
			break;
		
		case 99:
			*uParam1 = 114;
			*uParam2 = 42;
			*uParam3 = 63;
			break;
		
		case 136:
			*uParam1 = 246;
			*uParam2 = 151;
			*uParam3 = 153;
			break;
		
		case 49:
			*uParam1 = 32;
			*uParam2 = 32;
			*uParam3 = 44;
			break;
		
		case 146:
			*uParam1 = 26;
			*uParam2 = 1;
			*uParam3 = 23;
			break;
		
		default:
			*uParam1 = 255;
			*uParam2 = 255;
			*uParam3 = 255;
			break;
	}
}

void func_483(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (!func_470(&uVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_499(iParam4, iParam8))
	{
		return;
	}
	if (func_485())
	{
		return;
	}
	if (_network_is_text_chat_active())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_239(player_id(), 0))
		{
			return;
		}
	}
	if (is_pc_version())
	{
		if (update_onscreen_keyboard() == 0 || _network_is_text_chat_active())
		{
			return;
		}
	}
	if (Global_17257.f_4639 != 0)
	{
		if (_0x6CD79468A1E595C6(2))
		{
			iVar1 = false;
			while (iVar1 < Global_17257.f_4639)
			{
				if (Global_17257.f_4896[iVar1] != 344)
				{
					StringCopy(&(Global_17257.f_4641[iVar1 /*16*/]), _get_control_action_name(2, Global_17257.f_4896[iVar1], true), 64);
				}
				else if (Global_17257.f_4909[iVar1] != 31)
				{
					StringCopy(&(Global_17257.f_4641[iVar1 /*16*/]), _0x80C2FD58D720C801(2, Global_17257.f_4909[iVar1], true), 64);
				}
				iVar1++;
			}
			Global_17257.f_4640 = 0;
		}
		if (!Global_17257.f_4640)
		{
			_push_scaleform_movie_function(Global_17257.f_5530[uVar0 /*10*/], "CLEAR_ALL");
			_pop_scaleform_movie_function_void();
			_push_scaleform_movie_function(Global_17257.f_5530[uVar0 /*10*/], "SET_MAX_WIDTH");
			_push_scaleform_movie_function_parameter_float(1f - Global_17257.f_4951 / 100f);
			_pop_scaleform_movie_function_void();
			if (is_pc_version())
			{
				_push_scaleform_movie_function(Global_17257.f_5530[uVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				_push_scaleform_movie_function_parameter_bool(true);
				_pop_scaleform_movie_function_void();
			}
			iVar1 = false;
			while (iVar1 < Global_17257.f_4639)
			{
				if (get_hash_key(&(Global_17257.f_4834[iVar1 /*4*/])) != get_hash_key("PREV"))
				{
					_push_scaleform_movie_function(Global_17257.f_5530[uVar0 /*10*/], "SET_DATA_SLOT");
					_push_scaleform_movie_function_parameter_int(iVar1);
					func_484(&(Global_17257.f_4641[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && get_hash_key(&(Global_17257.f_4834[iVar2 /*4*/])) == get_hash_key("PREV"))
					{
						func_484(&(Global_17257.f_4641[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_17257.f_4883[iVar1] == -1)
					{
						func_16(&(Global_17257.f_4834[iVar1 /*4*/]));
					}
					else
					{
						_begin_text_component(&(Global_17257.f_4834[iVar1 /*4*/]));
						if (iParam5)
						{
							add_text_component_substring_time(iParam2, 70);
						}
						else
						{
							add_text_component_integer(iParam2);
						}
						_end_text_component();
					}
					if (is_pc_version())
					{
						if (Global_17257.f_4896[iVar1] != 344 && is_bit_set(Global_17257.f_4922, iVar1))
						{
							_push_scaleform_movie_function_parameter_bool(true);
							_push_scaleform_movie_function_parameter_int(Global_17257.f_4896[iVar1]);
						}
						else
						{
							_push_scaleform_movie_function_parameter_bool(false);
							_push_scaleform_movie_function_parameter_int(344);
						}
					}
					_pop_scaleform_movie_function_void();
				}
				iVar1++;
			}
			if (get_hash_key(&(Global_2562053.f_16)) != get_hash_key(""))
			{
				_push_scaleform_movie_function(Global_17257.f_5530[uVar0 /*10*/], "SET_DATA_SLOT");
				_push_scaleform_movie_function_parameter_int(Global_17257.f_4639);
				func_484(&Global_2562053);
				if (Global_2562053.f_20 == -1)
				{
					func_16(&(Global_2562053.f_16));
				}
				else
				{
					_begin_text_component(&(Global_2562053.f_16));
					if (iParam5)
					{
						add_text_component_substring_time(iParam2, 70);
					}
					else
					{
						add_text_component_integer(iParam2);
					}
					_end_text_component();
				}
				_pop_scaleform_movie_function_void();
			}
			_push_scaleform_movie_function(Global_17257.f_5530[uVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			_push_scaleform_movie_function_parameter_int(false);
			_push_scaleform_movie_function_parameter_int(false);
			_push_scaleform_movie_function_parameter_int(false);
			_push_scaleform_movie_function_parameter_int(80);
			_pop_scaleform_movie_function_void();
			_push_scaleform_movie_function(Global_17257.f_5530[uVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_17257.f_4952)
			{
				_push_scaleform_movie_function_parameter_int(true);
			}
			else
			{
				_push_scaleform_movie_function_parameter_int(false);
			}
			_pop_scaleform_movie_function_void();
			Global_17257.f_4640 = 1;
		}
		iVar1 = false;
		while (iVar1 < Global_17257.f_4639)
		{
			if (Global_17257.f_4883[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					_push_scaleform_movie_function(Global_17257.f_5530[uVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					_push_scaleform_movie_function_parameter_int(iVar1);
					_begin_text_component(&(Global_17257.f_4834[iVar1 /*4*/]));
					if (iParam5)
					{
						add_text_component_substring_time(iParam2, 70);
					}
					else
					{
						add_text_component_integer(iParam2);
					}
					_end_text_component();
					_pop_scaleform_movie_function_void();
				}
			}
			iVar1++;
		}
		if (Global_2562053.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				_push_scaleform_movie_function(Global_17257.f_5530[uVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				_push_scaleform_movie_function_parameter_int(iVar1);
				_begin_text_component(&(Global_2562053.f_16));
				if (iParam5)
				{
					add_text_component_substring_time(iParam2, 70);
				}
				else
				{
					add_text_component_integer(iParam2);
				}
				_end_text_component();
				_pop_scaleform_movie_function_void();
			}
		}
		_set_screen_draw_position(76, 66);
		_0xF5A2C681787E579D(0f, 0f, 0f, 0f);
		if (iParam6)
		{
			if (!Global_17257.f_7862)
			{
				set_hud_component_position(15, 0f, -0.0375f);
				Global_17257.f_7862 = 1;
			}
		}
		else if (Global_17257.f_7862)
		{
			reset_hud_component_values(15);
			Global_17257.f_7862 = 0;
		}
		_0xE3A3DB414A373DAB();
		if (Global_17257.f_4925)
		{
			_set_screen_draw_position(82, 66);
			_0xF5A2C681787E579D(0f, 0f, 0f, 0f);
			draw_scaleform_movie(Global_17257.f_5530[uVar0 /*10*/], Global_17257.f_4923, Global_17257.f_4924, 1f, 1f, 255, 255, 255, 255, 0);
			_0xE3A3DB414A373DAB();
		}
		else
		{
			draw_scaleform_movie_fullscreen(Global_17257.f_5530[uVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_484(char* sParam0)
{
	_0xE83A3E3557A56640(sParam0);
}

bool func_485()
{
	vector3 vVar0;
	
	if (Global_14413.f_1 > 3)
	{
		return true;
	}
	if (func_486())
	{
		vVar0 = {0f, -500f, 0f};
		get_mobile_phone_position(&vVar0);
		if (Global_14358 == 0)
		{
			if (vVar0.y > -119f)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		else if (vVar0.y > -101f)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	return false;
}

bool func_486()
{
	if (_get_number_of_instances_of_streamed_script(joaat("cellphone_flashhand")) > 0)
	{
		return true;
	}
	return false;
}

void func_487(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	var uVar0;
	
	get_hud_colour(1, iParam2, iParam3, iParam4, &uVar0);
	switch (iParam0)
	{
		case 28:
			*iParam2 = 194;
			*iParam3 = 80;
			*iParam4 = 80;
			break;
		
		case 15:
		case 4:
		case 16:
		case 26:
		case 27:
		case 35:
		case 34:
		case 47:
		case 46:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 43:
		case 44:
		case 45:
		case 49:
			if (iParam1)
			{
				*iParam2 = 0;
				*iParam3 = 0;
				*iParam4 = 0;
			}
			break;
	}
}

void func_488(float fParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	get_hud_colour(1, &iVar0, &iVar1, &iVar2, &iVar3);
	set_text_font(0);
	set_text_scale(0f, 0.35f);
	set_text_leading(2);
	set_text_colour(iVar0, iVar1, iVar2, iVar3);
	set_text_wrap(fParam0, Global_17254 + Global_17256 - 0.0046875f);
	set_text_centre(0);
	set_text_dropshadow(0, 0, 0, 0, 0);
	set_text_edge(0, 0, 0, 0, 0);
}

void func_489(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	_set_text_entry(sParam2);
	add_text_component_integer(iParam3);
	add_text_component_integer(iParam4);
	_draw_text(fParam0, fParam1, 0);
}

float func_490(char* sParam0, int iParam1, int iParam2)
{
	if (!is_string_null(sParam0))
	{
		if (get_hash_key(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_491();
	_set_text_entry_for_width(sParam0);
	add_text_component_integer(iParam1);
	add_text_component_integer(iParam2);
	return _get_text_screen_width(1);
}

void func_491()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	get_hud_colour(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_17257.f_7837)
	{
		iVar0 = Global_17257.f_7833;
		iVar1 = Global_17257.f_7834;
		iVar2 = Global_17257.f_7835;
		iVar3 = Global_17257.f_7836;
	}
	set_text_font(0);
	set_text_scale(0f, 0.35f);
	set_text_colour(iVar0, iVar1, iVar2, iVar3);
	set_text_wrap(Global_17254 + 0.0046875f, Global_17254 + Global_17256 - 0.0046875f);
	set_text_centre(0);
	set_text_dropshadow(0, 0, 0, 0, 0);
	set_text_edge(0, 0, 0, 0, 0);
}

void func_492(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	draw_rect(fParam0 + fParam2 * 0.5f, fParam1 + fParam3 * 0.5f, fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

var func_493(int iParam0, int iParam1)
{
	char*[] sVar0 = new char*[2];
	
	if (!is_string_null_or_empty(&(Global_17257.f_6687[iParam0 /*16*/])))
	{
		return func_494(&(Global_17257.f_6687[iParam0 /*16*/]));
	}
	switch (iParam0)
	{
		case 3:
			sVar0[0] = "MP_hostCrown";
			sVar0[1] = "MP_hostCrown";
			break;
		
		case 21:
			sVar0[0] = "MP_SpecItem_Coke";
			sVar0[1] = "MP_SpecItem_Coke";
			break;
		
		case 22:
			sVar0[0] = "MP_SpecItem_Heroin";
			sVar0[1] = "MP_SpecItem_Heroin";
			break;
		
		case 23:
			sVar0[0] = "MP_SpecItem_Weed";
			sVar0[1] = "MP_SpecItem_Weed";
			break;
		
		case 24:
			sVar0[0] = "MP_SpecItem_Meth";
			sVar0[1] = "MP_SpecItem_Meth";
			break;
		
		case 25:
			sVar0[0] = "MP_SpecItem_Cash";
			sVar0[1] = "MP_SpecItem_Cash";
			break;
		
		case 1:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 2:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 4:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 6:
			sVar0[0] = "Shop_Box_CrossB";
			sVar0[1] = "Shop_Box_Cross";
			break;
		
		case 7:
			sVar0[0] = "Shop_Box_BlankB";
			sVar0[1] = "Shop_Box_Blank";
			break;
		
		case 5:
			sVar0[0] = "Shop_Box_TickB";
			sVar0[1] = "Shop_Box_Tick";
			break;
		
		case 8:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 9:
			sVar0[0] = "Shop_Clothing_Icon_B";
			sVar0[1] = "Shop_Clothing_Icon_A";
			break;
		
		case 10:
			sVar0[0] = "Shop_GunClub_Icon_B";
			sVar0[1] = "Shop_GunClub_Icon_A";
			break;
		
		case 17:
			sVar0[0] = "Shop_Ammo_Icon_B";
			sVar0[1] = "Shop_Ammo_Icon_A";
			break;
		
		case 18:
			sVar0[0] = "Shop_Armour_Icon_B";
			sVar0[1] = "Shop_Armour_Icon_A";
			break;
		
		case 19:
			sVar0[0] = "Shop_Health_Icon_B";
			sVar0[1] = "Shop_Health_Icon_A";
			break;
		
		case 20:
			sVar0[0] = "Shop_MakeUp_Icon_B";
			sVar0[1] = "Shop_MakeUp_Icon_A";
			break;
		
		case 11:
			sVar0[0] = "Shop_Tattoos_Icon_B";
			sVar0[1] = "Shop_Tattoos_Icon_A";
			break;
		
		case 12:
			sVar0[0] = "Shop_Garage_Icon_B";
			sVar0[1] = "Shop_Garage_Icon_A";
			break;
		
		case 13:
			sVar0[0] = "Shop_Garage_Bike_Icon_B";
			sVar0[1] = "Shop_Garage_Bike_Icon_A";
			break;
		
		case 14:
			sVar0[0] = "Shop_Barber_Icon_B";
			sVar0[1] = "Shop_Barber_Icon_A";
			break;
		
		case 15:
			sVar0[0] = "shop_Lock";
			sVar0[1] = "shop_Lock";
			break;
		
		case 16:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 26:
			sVar0[0] = "arrowleft";
			sVar0[1] = "arrowleft";
			break;
		
		case 27:
			sVar0[0] = "arrowright";
			sVar0[1] = "arrowright";
			break;
		
		case 28:
			sVar0[0] = "MP_AlertTriangle";
			sVar0[1] = "MP_AlertTriangle";
			break;
		
		case 29:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 31:
			sVar0[0] = "Shop_Michael_Icon_B";
			sVar0[1] = "Shop_Michael_Icon_A";
			break;
		
		case 32:
			sVar0[0] = "Shop_Franklin_Icon_B";
			sVar0[1] = "Shop_Franklin_Icon_A";
			break;
		
		case 33:
			sVar0[0] = "Shop_Trevor_Icon_B";
			sVar0[1] = "Shop_Trevor_Icon_A";
			break;
		
		case 48:
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
			break;
		
		case 49:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 0:
			sVar0[0] = "";
			sVar0[1] = "";
			break;
	}
	if (iParam1)
	{
		return sVar0[0];
	}
	return sVar0[1];
}

var func_494(var uParam0)
{
	return uParam0;
}

char* func_495(int iParam0)
{
	if (!is_string_null_or_empty(&(Global_17257.f_5886[iParam0 /*16*/])))
	{
		return func_494(&(Global_17257.f_5886[iParam0 /*16*/]));
	}
	if (iParam0 == 48)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

bool func_496()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	_get_screen_active_resolution(&iVar0, &iVar1);
	fVar2 = to_float(iVar0) / to_float(iVar1);
	if (fVar2 > 3.5f)
	{
		return true;
	}
	return false;
}

bool func_497(int iParam0, int iParam1, int iParam2, float fParam3, float fParam4, int iParam5)
{
	char* sVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	vector3 vVar7;
	
	sVar0 = func_495(iParam0);
	sVar1 = func_493(iParam0, iParam1);
	if (get_hash_key(sVar1) != 0)
	{
		fVar4 = 1f;
		if (iParam5)
		{
			_get_screen_active_resolution(&iVar2, &iVar3);
			fVar5 = _get_screen_aspect_ratio(0);
			if (func_496())
			{
				iVar2 = round(to_float(iVar3) * fVar5);
			}
			fVar6 = to_float(iVar2) / to_float(iVar3);
			fVar4 = fVar6 / fVar5;
			if (func_496())
			{
				fVar4 = 1f;
			}
			if (_get_number_of_instances_of_streamed_script(joaat("director_mode")) > 0)
			{
				get_screen_resolution(&iVar2, &iVar3);
			}
			iVar2 = round(to_float(iVar2) / fVar4);
			iVar3 = round(to_float(iVar3) / fVar4);
		}
		else
		{
			get_screen_resolution(&iVar2, &iVar3);
		}
		vVar7 = {get_texture_resolution(sVar0, sVar1)};
		vVar7.x *= func_498(iParam0) / fVar4;
		vVar7.y *= func_498(iParam0) / fVar4;
		if (!iParam2)
		{
			vVar7.x -= 2f;
			vVar7.y -= 2f;
		}
		if (iParam0 == 30)
		{
			vVar7.x = 288f;
			vVar7.y = 106f;
		}
		*fParam3 = vVar7.x / IntToFloat(iVar2) * IntToFloat(iVar2 / iVar3);
		*fParam4 = vVar7.y / IntToFloat(iVar3) / vVar7.x / IntToFloat(iVar2) * *fParam3;
		if (!iParam5)
		{
			if (!get_is_widescreen() && iParam0 != 30)
			{
				*fParam3 *= 1.33f;
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_17256)
			{
				*fParam4 *= Global_17256 / *fParam3;
				*fParam3 = Global_17256;
			}
		}
		return true;
	}
	return false;
}

float func_498(int iParam0)
{
	switch (iParam0)
	{
		case 33:
		case 4:
		case 11:
		case 31:
		case 20:
		case 15:
		case 10:
		case 12:
		case 13:
		case 32:
		case 9:
		case 5:
		case 6:
		case 7:
		case 14:
		case 18:
		case 19:
		case 17:
		case 28:
		case 26:
		case 27:
		case 49:
			return 0.5f;
			break;
	}
	return 1f;
}

bool func_499(int iParam0, int iParam1)
{
	if (Global_2428492.f_1358.f_688 != 0)
	{
		return true;
	}
	if ((((((((!is_screen_faded_in() || (func_18(8, -1) && func_500() != 64)) || (get_pause_menu_state() != 0 && !iParam1)) || (is_player_switch_in_progress() && !iParam0)) || _0x2EAC52B4019E2782()) || Global_69749) || Global_17257.f_7861) || is_warning_message_active()) || Global_91330.f_1352)
	{
		return false;
	}
	return true;
}

var func_500()
{
	return Global_1315846;
}

void func_501(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (is_bit_set(*uParam0.f_75, 2))
	{
		if (func_504(iParam1) < func_504(func_542(*uParam0.f_1[*uParam0.f_69], -1)))
		{
			iVar0 = true;
		}
		iVar1 = func_543(*uParam0.f_1[*uParam0.f_69]);
		func_503(iVar1, iVar0);
	}
	else
	{
		clear_bit(uParam0.f_72, 4);
		clear_bit(uParam0.f_72, 3);
		if (is_bit_set(*uParam0.f_72, 2))
		{
			func_502("MP_REP_PROP_4", 100, 0);
		}
		else if (is_bit_set(*uParam0.f_72, 5))
		{
			func_502("MP_PROP_HEI_0", 100, 0);
		}
		else if (is_bit_set(*uParam0.f_72, 6))
		{
			func_502("PROP3RDDIS", 1000, 0);
		}
		else
		{
			func_502("MP_REP_PROP_3", 100, 0);
		}
	}
}

void func_502(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	StringCopy(&(Global_17257.f_4562), sParam0, 16);
	Global_17257.f_4632 = 0;
	Global_17257.f_4633 = 0;
	Global_17257.f_4634 = 0;
	Global_17257.f_4635 = 0;
	Global_17257.f_4636 = iParam1;
	Global_17257.f_4637 = get_game_timer();
	Global_17257.f_4638 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17257.f_4566[iVar0] = 0;
		iVar0++;
	}
}

void func_503(int iParam0, int iParam1)
{
	char* sVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar2 = 0;
	iVar3 = -1;
	iVar4 = 0;
	sVar0 = "BRSCRWTEX";
	if (iParam1)
	{
		sVar1 = "BRDISPROP2B1";
		iVar2 = "BRSHETPROSUB1";
	}
	else
	{
		sVar1 = "BRDISPROPB1";
		iVar2 = "BRSHETPROSUB1";
	}
	iVar3 = iParam0;
	if (iVar3 < 0)
	{
		iVar3 *= -1;
	}
	if (iParam0 < 0)
	{
		iVar4 = "BRSHETMAK";
	}
	else
	{
		iVar4 = "BRSHETPRSA";
	}
	_set_warning_message_3(sVar0, sVar1, 18, iVar2, 1, iVar3, 0, iVar4, 0, 1);
}

int func_504(int iParam0)
{
	switch (func_203(iParam0))
	{
		case 6:
		case 3:
			return 10;
			break;
		
		case 5:
		case 2:
			return 6;
			break;
		
		case 4:
		case 1:
			return 2;
			break;
	}
	return 0;
}

void func_505(var uParam0, int iParam1)
{
	int iVar0;
	struct<4> Var1;
	int iVar5;
	int iVar6;
	
	func_524(0);
	if (is_bit_set(*uParam0.f_75, 2))
	{
	}
	else
	{
		func_523(1, 1, 0, 0, 0);
		func_522(1, 2, 1, 1, 1);
		func_521(0, 0, 0, 0, 0);
		if (func_542(1, -1) > 0)
		{
			func_520("MP_REP_PROP_0");
		}
		else
		{
			func_520("MP_REP_PROP_0b");
		}
		iVar5 = 0;
		while (iVar5 < 6)
		{
			iVar6 = func_542(iVar5, -1);
			if ((!func_519(iVar5) && iParam1 == -1) || (func_519(iVar5) && iParam1 == iVar5))
			{
				if (iVar6 > 0)
				{
					if (!func_518())
					{
						if (!func_517() && !func_516(iVar6))
						{
							func_512(iVar0, &(Global_1049163[iVar6 /*1924*/].f_16), 0, 1, 0, 0);
						}
						else
						{
							Var1 = {Global_1049163[iVar6 /*1924*/].f_16};
							StringConCat(&Var1, "S", 16);
							func_512(iVar0, &Var1, 0, 1, 0, 0);
						}
					}
					else
					{
						func_512(iVar0, "PIM_DNAME", 1, 1, 0, 0);
						func_511(_get_label_text(&(Global_1049163[iVar6 /*1924*/].f_16)), 0, 1);
					}
					func_512(iVar0, "CUST_GAR_COST", 1, 1, 0, 0);
					func_508(func_543(iVar5), 0);
					*uParam0.f_1[iVar0] = iVar5;
					iVar0++;
				}
				else if (iVar5 > 0)
				{
					if (func_542(iVar5 - 1, -1) > 0 || (func_519(iVar5) && iParam1 == iVar5))
					{
						func_512(iVar0, "MP_REP_PROP_1", 0, 1, 0, 0);
						*uParam0.f_1[iVar0] = iVar5;
						iVar0++;
					}
				}
			}
			iVar5++;
		}
		clear_bit(uParam0.f_72, 2);
		clear_bit(uParam0.f_72, 5);
		*uParam0.f_71 = iVar0;
		func_459(*uParam0.f_69, 1, 1);
		func_507(-1);
		func_506(176, "BB_SELECT", -1);
		func_506(177, "BB_BACK", -1);
	}
}

void func_506(int iParam0, char* sParam1, int iParam2)
{
	char* sVar0;
	
	sVar0 = _get_control_action_name(2, iParam0, true);
	if (Global_17257.f_4639 >= 12)
	{
		StringCopy(&Global_2562053, sVar0, 64);
		StringCopy(&(Global_2562053.f_16), sParam1, 16);
		Global_2562053.f_20 = iParam2;
		return;
		return;
	}
	clear_bit(&(Global_17257.f_4922), Global_17257.f_4639);
	StringCopy(&(Global_17257.f_4641[Global_17257.f_4639 /*16*/]), sVar0, 64);
	StringCopy(&(Global_17257.f_4834[Global_17257.f_4639 /*4*/]), sParam1, 16);
	Global_17257.f_4883[Global_17257.f_4639] = iParam2;
	Global_17257.f_4896[Global_17257.f_4639] = iParam0;
	Global_17257.f_4909[Global_17257.f_4639] = 31;
	Global_17257.f_4639++;
}

void func_507(int iParam0)
{
	int iVar0;
	var uVar1;
	
	Global_17257.f_4639 = 0;
	Global_17257.f_4640 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_17257.f_4834[iVar0 /*4*/]), "", 16);
		Global_17257.f_4883[iVar0] = -1;
		Global_17257.f_4896[iVar0] = 344;
		Global_17257.f_4909[iVar0] = 31;
		iVar0++;
	}
	Global_17257.f_4922 = 0;
	StringCopy(&(Global_2562053.f_16), "", 16);
	Global_2562053.f_20 = -1;
	if (is_pc_version())
	{
		if (!func_470(&uVar1, 0, iParam0))
		{
			return;
		}
		_push_scaleform_movie_function(Global_17257.f_5530[uVar1 /*10*/], "TOGGLE_MOUSE_BUTTONS");
		_push_scaleform_movie_function_parameter_bool(false);
		_pop_scaleform_movie_function_void();
	}
}

void func_508(var uParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	if (Global_17257.f_5092 >= 256)
	{
		return;
	}
	if (Global_17257.f_5610 >= 4)
	{
		return;
	}
	if (Global_17257.f_5611 != 1)
	{
		return;
	}
	if (Global_17257.f_5610 >= Global_17257.f_5608)
	{
		return;
	}
	Global_17257.f_3918[Global_17257.f_5092] = uParam0;
	Global_17257.f_5092++;
	Global_17257.f_2124[Global_17257.f_5609 /*5*/][Global_17257.f_5610] = 2;
	Global_17257.f_5610++;
	if (Global_17257.f_5610 >= Global_17257.f_5608)
	{
		fVar0 = func_510();
		if (Global_17257.f_4945[Global_17257.f_5089] && Global_17257.f_5610 == Global_17257.f_5608)
		{
			func_497(26, 1, 0, &fVar1, &fVar2, 0);
			fVar0 += fVar1 * 2f;
		}
		if (fVar0 > Global_17257.f_4938[Global_17257.f_5089 - 1])
		{
			Global_17257.f_4938[Global_17257.f_5089 - 1] = fVar0;
		}
	}
	if (iParam1)
	{
		if (Global_17257.f_5610 >= Global_17257.f_5608)
		{
			fVar3 = func_509();
			if (fVar3 > Global_17257.f_5612[Global_17257.f_5088])
			{
				Global_17257.f_5612[Global_17257.f_5088] = fVar3;
			}
		}
	}
}

float func_509()
{
	int iVar0;
	int iVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	iVar0 = 0;
	while (iVar0 < Global_17257.f_5610)
	{
		if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar0] == 4)
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_17257.f_4433[Global_17257.f_5094 - iVar1 + iVar0] != 0)
		{
			if (func_497(Global_17257.f_4433[Global_17257.f_5094 - iVar1 + iVar0], 1, 0, &uVar3, &fVar4, 0))
			{
				if (fVar4 > fVar2)
				{
					fVar2 = fVar4;
				}
			}
		}
		iVar0++;
	}
	if (fVar2 > _get_text_scale_height(0.35f, 0))
	{
		return fVar2;
	}
	return _get_text_scale_height(0.35f, 0);
}

float func_510()
{
	float fVar0;
	float fVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	iVar7 = 0;
	while (iVar7 < Global_17257.f_5610)
	{
		if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar7] == 1)
		{
		}
		else if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar7] == 8)
		{
		}
		else if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar7] == 2)
		{
			iVar3++;
		}
		else if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar7] == 3)
		{
			iVar4++;
		}
		else if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar7] == 4)
		{
			iVar5++;
		}
		else if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar7] == 5)
		{
			iVar6++;
		}
		else if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar7] == 6)
		{
			iVar6++;
		}
		else if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar7] == 7)
		{
			iVar6++;
		}
		iVar7++;
	}
	func_481(0, 1, 0, 0, 0, iVar6 > 0);
	if (get_hash_key(&(Global_17257.f_73[Global_17257.f_5609 /*6*/])) != 0)
	{
		_set_text_entry_for_width(&(Global_17257.f_73[Global_17257.f_5609 /*6*/]));
	}
	iVar7 = 0;
	while (iVar7 < Global_17257.f_5610)
	{
		if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar7] == 1)
		{
			iVar8++;
			if (get_hash_key(&(Global_17257.f_73[Global_17257.f_5609 /*6*/])) != 0)
			{
				_add_text_component_item_string(&(Global_17257.f_73[Global_17257.f_5609 + iVar8 /*6*/]));
			}
		}
		else if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar7] == 8)
		{
			iVar8++;
			if (get_hash_key(&(Global_17257.f_73[Global_17257.f_5609 /*6*/])) != 0)
			{
				_add_text_component_item_string(&(Global_17257.f_73[Global_17257.f_5609 + iVar8 /*6*/]));
			}
		}
		else if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar7] == 2)
		{
			if (get_hash_key(&(Global_17257.f_73[Global_17257.f_5609 /*6*/])) != 0)
			{
				add_text_component_integer(Global_17257.f_3918[Global_17257.f_5092 - iVar3 + iVar9]);
			}
			iVar9++;
		}
		else if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar7] == 3)
		{
			if (get_hash_key(&(Global_17257.f_73[Global_17257.f_5609 /*6*/])) != 0)
			{
				add_text_component_float(Global_17257.f_4175[Global_17257.f_5093 - iVar4 + iVar10], Global_17257.f_4304[Global_17257.f_5093 - iVar4 + iVar10]);
			}
			iVar10++;
		}
		else if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar7] == 5)
		{
			if (get_hash_key(&(Global_17257.f_73[Global_17257.f_5609 /*6*/])) != 0)
			{
				add_text_component_substring_player_name(&(Global_2443586[Global_17257.f_5091 - iVar6 + iVar11 /*16*/]));
			}
			iVar11++;
		}
		else if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar7] == 6)
		{
			if (get_hash_key(&(Global_17257.f_73[Global_17257.f_5609 /*6*/])) != 0)
			{
				_add_text_component_item_string(&(Global_2443586[Global_17257.f_5091 - iVar6 + iVar11 /*16*/]));
			}
			iVar11++;
		}
		else if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar7] == 7)
		{
			if (get_hash_key(&(Global_17257.f_73[Global_17257.f_5609 /*6*/])) != 0)
			{
				add_text_component_substring_player_name(&(Global_2443586[Global_17257.f_5091 - iVar6 + iVar11 /*16*/]));
			}
			iVar11++;
		}
		iVar7++;
	}
	if (get_hash_key(&(Global_17257.f_73[Global_17257.f_5609 /*6*/])) != 0)
	{
		fVar0 = _get_text_screen_width(1);
	}
	iVar7 = 0;
	while (iVar7 < iVar5)
	{
		if (Global_17257.f_4433[Global_17257.f_5094 - iVar5 + iVar7] != 0)
		{
			func_497(Global_17257.f_4433[Global_17257.f_5094 - iVar5 + iVar7], 1, 0, &fVar1, &uVar2, 0);
			fVar0 += fVar1;
		}
		iVar7++;
	}
	return fVar0;
}

void func_511(char* sParam0, int iParam1, int iParam2)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	
	if (Global_17257.f_5091 >= 32)
	{
		return;
	}
	if (Global_17257.f_5610 >= 4)
	{
		return;
	}
	if (Global_17257.f_5611 != 1)
	{
		return;
	}
	if (Global_17257.f_5610 >= Global_17257.f_5608)
	{
		return;
	}
	StringCopy(&(Global_2443586[Global_17257.f_5091 /*16*/]), sParam0, 64);
	Global_17257.f_5091++;
	Global_17257.f_2124[Global_17257.f_5609 /*5*/][Global_17257.f_5610] = 5;
	Global_17257.f_5610++;
	fVar0 = func_510();
	if (iParam2)
	{
	}
	if (Global_17257.f_5610 >= Global_17257.f_5608)
	{
		fVar0 = func_510();
		if (Global_17257.f_4945[Global_17257.f_5089] && Global_17257.f_5610 == Global_17257.f_5608)
		{
			func_497(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 += fVar1 * 2f;
		}
		if (fVar0 > Global_17257.f_4938[Global_17257.f_5089 - 1])
		{
			Global_17257.f_4938[Global_17257.f_5089 - 1] = fVar0;
		}
	}
	if (iParam1)
	{
		if (Global_17257.f_5610 >= Global_17257.f_5608)
		{
			fVar3 = func_509();
			if (fVar3 > Global_17257.f_5612[Global_17257.f_5088])
			{
				Global_17257.f_5612[Global_17257.f_5088] = fVar3;
			}
		}
	}
}

void func_512(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_17257.f_5088 > iParam0)
	{
		return;
	}
	if (Global_17257.f_5088 >= 128)
	{
		return;
	}
	if (Global_17257.f_5090 >= 256)
	{
		return;
	}
	if (Global_17257.f_5610 < Global_17257.f_5608)
	{
		return;
	}
	if (Global_17257.f_5088 != iParam0)
	{
		Global_17257.f_5088 = iParam0;
		Global_17257.f_5089 = 0;
	}
	iVar0 = Global_17257.f_4926[Global_17257.f_5089];
	if (iVar0 != 1)
	{
		while (Global_17257.f_5089 < 4 && iVar0 != 1)
		{
			Global_17257.f_5089++;
			iVar0 = Global_17257.f_4926[Global_17257.f_5089];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_17257.f_73[Global_17257.f_5090 /*6*/]), sParam1, 24);
	if (!is_string_null_or_empty(sParam1) && !does_text_label_exist(sParam1))
	{
	}
	Global_17257.f_1610[Global_17257.f_5090] = iParam3;
	Global_17257.f_1867[Global_17257.f_5090] = iParam4;
	Global_17257.f_5090++;
	if (!iParam3)
	{
		func_515(Global_17257.f_5088, 1);
	}
	else
	{
		func_515(Global_17257.f_5088, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_514(&(Global_17257.f_73[Global_17257.f_5090 /*6*/]));
		if (Global_17257.f_4945[Global_17257.f_5089])
		{
			func_497(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 += fVar2 * 2f;
		}
		if (fVar1 > Global_17257.f_4938[Global_17257.f_5089])
		{
			Global_17257.f_4938[Global_17257.f_5089] = fVar1;
		}
	}
	if (iParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_513(&(Global_17257.f_73[Global_17257.f_5090 /*6*/]));
			if (fVar4 > Global_17257.f_5612[iParam0])
			{
				Global_17257.f_5612[iParam0] = fVar4;
			}
		}
	}
	set_bit(&(Global_17257.f_4959[iParam0]), Global_17257.f_5089);
	Global_17257.f_5089++;
	Global_17257.f_5611 = 1;
	Global_17257.f_5609 = Global_17257.f_5090 - 1;
	Global_17257.f_5610 = 0;
	Global_17257.f_5608 = iParam2;
}

float func_513(char* sParam0)
{
	if (!does_text_label_exist(sParam0))
	{
	}
	return _get_text_scale_height(0.35f, 0);
}

float func_514(char* sParam0)
{
	if (!is_string_null(sParam0))
	{
		if (get_hash_key(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_481(0, 1, 0, 0, 0, 0);
	_set_text_entry_for_width(sParam0);
	return _get_text_screen_width(1);
}

void func_515(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = floor(to_float(iParam0) / 32f);
	if (iParam1)
	{
		set_bit(&(Global_17257.f_5881[iVar0]), iParam0 - iVar0 * 32);
	}
	else
	{
		clear_bit(&(Global_17257.f_5881[iVar0]), iParam0 - iVar0 * 32);
	}
}

bool func_516(int iParam0)
{
	if ((iParam0 == 83 || iParam0 == 84) || iParam0 == 85)
	{
		return true;
	}
	return false;
}

bool func_517()
{
	switch (_get_ui_language_id())
	{
		case 9:
			return true;
		
		default:
	}
	return false;
}

bool func_518()
{
	switch (_get_ui_language_id())
	{
		case 7:
		case 5:
			return true;
		
		default:
	}
	return false;
}

bool func_519(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return true;
			break;
		
		case -1:
			return false;
			break;
	}
	return false;
}

void func_520(char* sParam0)
{
	int iVar0;
	
	StringCopy(&(Global_17257.f_1), sParam0, 16);
	Global_17257.f_68 = 0;
	Global_17257.f_69 = 0;
	Global_17257.f_70 = 0;
	Global_17257.f_71 = 0;
	Global_17257.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17257.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_521(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17257.f_4945[0] = iParam0;
	Global_17257.f_4945[1] = iParam1;
	Global_17257.f_4945[2] = iParam2;
	Global_17257.f_4945[3] = iParam3;
	Global_17257.f_4945[4] = iParam4;
}

void func_522(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17257.f_4953[0] = iParam0;
	Global_17257.f_4953[1] = iParam1;
	Global_17257.f_4953[2] = iParam2;
	Global_17257.f_4953[3] = iParam3;
	Global_17257.f_4953[4] = iParam4;
}

void func_523(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17257.f_4926[0] = iParam0;
	Global_17257.f_4926[1] = iParam1;
	Global_17257.f_4926[2] = iParam2;
	Global_17257.f_4926[3] = iParam3;
	Global_17257.f_4926[4] = iParam4;
	Global_17257.f_5096 = 0;
	if (iParam0 != 0)
	{
		Global_17257.f_5096++;
	}
	if (iParam1 != 0)
	{
		Global_17257.f_5096++;
	}
	if (iParam2 != 0)
	{
		Global_17257.f_5096++;
	}
	if (iParam3 != 0)
	{
		Global_17257.f_5096++;
	}
	if (iParam4 != 0)
	{
		Global_17257.f_5096++;
	}
}

void func_524(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 256)
	{
		StringCopy(&(Global_17257.f_73[iVar0 /*6*/]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_17257.f_2124[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		StringCopy(&(Global_2443586[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_17257.f_3918[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_17257.f_4175[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_17257.f_4433[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_17257.f_4959[iVar0] = 0;
		Global_17257.f_5097[iVar0] = 0;
		Global_17257.f_5226[iVar0] = 0;
		Global_17257.f_5746[iVar0] = 0f;
		Global_17257.f_5355[iVar0] = 0;
		Global_17257.f_5612[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_17257.f_4926[iVar0] = 0;
		Global_17257.f_4938[iVar0] = 0f;
		Global_17257.f_4932[iVar0] = -1f;
		Global_17257.f_4945[iVar0] = 0;
		Global_17257.f_4953[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_17257.f_4834[iVar0 /*4*/]), "", 16);
		Global_17257.f_4883[iVar0] = -1;
		Global_17257.f_4896[iVar0] = 344;
		Global_17257.f_4909[iVar0] = 31;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 50)
	{
		StringCopy(&(Global_17257.f_5886[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_17257.f_6687[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	StringCopy(&(Global_2562053.f_16), "", 16);
	Global_2562053.f_20 = -1;
	Global_17257 = 0;
	Global_17257.f_5088 = 0;
	Global_17257.f_5089 = 0;
	Global_17257.f_5090 = 0;
	Global_17257.f_5092 = 0;
	Global_17257.f_5093 = 0;
	Global_17257.f_5094 = 0;
	Global_17257.f_5091 = 0;
	Global_17257.f_5741 = 0;
	Global_17257.f_5606 = 0;
	Global_17257.f_5605 = 0;
	Global_17257.f_5607 = 0;
	StringCopy(&(Global_17257.f_4562), "", 16);
	Global_17257.f_4632 = 0;
	Global_17257.f_4633 = 0;
	Global_17257.f_4634 = 0;
	Global_17257.f_4635 = 0;
	Global_17257.f_4636 = 0;
	Global_17257.f_4637 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17257.f_4566[iVar0] = 0;
		iVar0++;
	}
	Global_17257.f_4638 = 0;
	StringCopy(&(Global_2562053.f_21), "", 16);
	Global_2562053.f_61 = 0;
	Global_2562053.f_62 = 0;
	Global_2562053.f_63 = 0;
	Global_2562053.f_64 = 0;
	Global_2562053.f_65 = 0;
	Global_2562053.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_2562053.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_2562053.f_67 = 0;
	StringCopy(&(Global_17257.f_1), "", 16);
	Global_17257.f_4944 = 0f;
	Global_17257.f_68 = 0;
	Global_17257.f_69 = 0;
	Global_17257.f_70 = 0;
	Global_17257.f_71 = 0;
	Global_17257.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17257.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_17257.f_5611 = 0;
	Global_17257.f_5610 = 0;
	Global_17257.f_5608 = 0;
	Global_17257.f_5609 = 0;
	Global_17257.f_4639 = 0;
	Global_17257.f_4640 = 0;
	Global_17257.f_5095 = 10;
	Global_17257.f_5096 = 0;
	Global_17257.f_5743 = 0f;
	Global_17257.f_5744 = 0f;
	Global_17257.f_5598 = 0;
	Global_17257.f_5599 = 0;
	Global_17257.f_5600 = 0f;
	Global_17257.f_5601 = 0;
	Global_17257.f_5603 = 0;
	Global_17257.f_5602 = 0;
	Global_17257.f_5604 = 0;
	Global_17257.f_7858 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_17257.f_5875[iVar0] = -1;
		Global_17257.f_5878[iVar0] = -1;
		iVar0++;
	}
	Global_17257.f_4951 = 0f;
	Global_17257.f_4922 = 0;
	Global_17257.f_4952 = 0;
	iVar0 = 0;
	while (iVar0 < Global_17257.f_5881)
	{
		Global_17257.f_5881[iVar0] = 0;
		iVar0++;
	}
	Global_17257.f_7837 = 0;
	Global_17257.f_7832 = 0;
	Global_17257.f_7842 = 0;
	Global_17257.f_7847 = 0;
	Global_17257.f_7852 = 0;
	Global_17257.f_7854 = 0;
	Global_17257.f_7860 = 0;
	Global_17254 = 0.05f;
	Global_17255 = 0.05f;
	Global_17256 = 0.225f;
	fVar2 = _get_screen_aspect_ratio(0);
	if (iParam0)
	{
		Global_17256 = 0.225f * 16f / 9f / fVar2;
	}
	else if (fVar2 < 1.77777f)
	{
		Global_17256 = 0.225f * 16f / 9f / fVar2;
	}
	else
	{
		Global_17256 = 0.225f;
	}
}

int func_525(char* sParam0, int iParam1, int iParam2)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (!func_470(&uVar0, 1, iParam1))
	{
		return false;
	}
	iVar1 = true;
	StringCopy(&(Global_17257.f_5505[uVar0 /*4*/]), sParam0, 16);
	if (!is_string_null_or_empty(&(Global_17257.f_5505[uVar0 /*4*/])))
	{
		request_additional_text(&(Global_17257.f_5505[uVar0 /*4*/]), 9);
		Global_17257.f_5498[uVar0] = 1;
		if (!has_this_additional_text_loaded(&(Global_17257.f_5505[uVar0 /*4*/]), 9))
		{
			iVar1 = false;
		}
	}
	request_streamed_texture_dict("CommonMenu", false);
	Global_17257.f_5484[uVar0] = 1;
	if (!has_streamed_texture_dict_loaded("CommonMenu"))
	{
		iVar1 = false;
	}
	if (iParam2)
	{
		request_streamed_texture_dict("MPShopSale", false);
		Global_17257.f_5491[uVar0] = 1;
		if (!has_streamed_texture_dict_loaded("MPShopSale"))
		{
			iVar1 = false;
		}
	}
	iVar2 = false;
	StringCopy(&(Global_17257.f_5530[uVar0 /*10*/].f_1), "instructional_buttons", 24);
	iVar2 = func_526(&(Global_17257.f_5530[uVar0 /*10*/]));
	if (!iVar1 || !iVar2)
	{
	}
	return (iVar1 && iVar2);
}

int func_526(var uParam0)
{
	switch (*uParam0.f_9)
	{
		case 0:
			if (!has_scaleform_movie_loaded(*uParam0))
			{
				*uParam0 = unk_0x67D02A194A2FC2BD(uParam0.f_1);
				*uParam0.f_9 = 1;
				if (*uParam0.f_7)
				{
					if (has_scaleform_movie_loaded(*uParam0))
					{
						*uParam0.f_8 = get_game_timer();
						*uParam0.f_9 = 2;
					}
				}
			}
			else
			{
				*uParam0.f_8 = get_game_timer();
				*uParam0.f_9 = 2;
			}
			break;
		
		case 1:
			if (has_scaleform_movie_loaded(*uParam0))
			{
				*uParam0.f_8 = get_game_timer();
				*uParam0.f_9 = 2;
			}
			break;
		
		case 2:
			if (!has_scaleform_movie_loaded(*uParam0))
			{
				*uParam0.f_9 = 0;
			}
			break;
	}
	return *uParam0.f_9 == 2;
}

void func_527(int iParam0, int iParam1, int iParam2, int iParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	fVar6 = 0.034722f / 2f;
	iVar13 = -1;
	if (!_is_input_disabled(2))
	{
		Global_2562129 = -1;
		return;
	}
	_0x5B73C77D9EB66E24(1);
	fVar0 = Global_17254;
	fVar2 = fVar0 + Global_17256;
	fVar3 = Global_17257.f_5600;
	fVar1 = Global_17257.f_5600 - IntToFloat(Global_17257.f_5602) * 0.034722f;
	if (iParam2)
	{
		fVar3 += 0.034722f;
		fVar1 += 0.034722f;
	}
	if (Global_17257.f_5602 < 1)
	{
		fVar1 = Global_17257.f_5600 - 0.034722f;
	}
	_set_screen_draw_position(76, 84);
	_0xF5A2C681787E579D(-0.05f, -0.05f, 0f, 0f);
	fVar4 = fVar0;
	fVar5 = fVar1;
	_0x6DD8F5AA635EB4B2(fVar0, fVar1, &fVar0, &fVar1);
	_0x6DD8F5AA635EB4B2(fVar2, fVar3, &fVar2, &fVar3);
	_0xE3A3DB414A373DAB();
	func_529();
	if (Global_2562129 == -6)
	{
		return;
	}
	Global_2562129 = -1;
	fVar7 = Global_2562123;
	fVar8 = Global_2562124;
	if (Global_17257.f_5603 > Global_17257.f_5602)
	{
		if (((Global_2562123 >= fVar0 && Global_2562123 <= fVar2) && Global_2562124 >= fVar3) && Global_2562124 < fVar3 + fVar6)
		{
			Global_2562129 = -2;
			if (iParam3)
			{
				func_528(0);
			}
			return;
		}
		if (((Global_2562123 >= fVar0 && Global_2562123 <= fVar2) && Global_2562124 >= fVar3 + fVar6) && Global_2562124 < fVar3 + 0.034722f)
		{
			Global_2562129 = -3;
			if (iParam3)
			{
				func_528(0);
			}
			return;
		}
	}
	if (((fVar7 >= fVar0 && fVar7 <= fVar2) && fVar8 >= fVar1) && fVar8 <= fVar3)
	{
		fVar9 = fVar8 - fVar1;
		iVar13 = floor(fVar9 / 0.034722f);
		if (Global_17257.f_5603 == -1)
		{
			Global_2562129 = 0;
			iVar13 = false;
			return;
		}
		iVar11 = 148;
		iVar12 = iVar11 / Global_17257.f_5602;
		iVar10 = 32 + iVar11 - iVar12 * iVar13;
		if (iParam3)
		{
			if (!iParam1 || iVar13 != 0)
			{
				_set_screen_draw_position(76, 84);
				_0xF5A2C681787E579D(-0.05f, -0.05f, 0f, 0f);
				func_492(fVar4, fVar5 + IntToFloat(iVar13) * 0.034722f, Global_17256, 0.034722f - 0.0015f, 255, 255, 255, iVar10);
				_0xE3A3DB414A373DAB();
			}
		}
		Global_2562129 = Global_17257.f_7488[iVar13];
		return;
	}
	if (!iParam0)
	{
		if (fVar7 < fVar2)
		{
			Global_2562129 = -4;
			return;
		}
		if (fVar8 > 0.9f)
		{
			Global_2562129 = -5;
			return;
		}
	}
	else if (fVar7 < fVar2 && fVar8 < fVar3 + 0.25f)
	{
		Global_2562129 = -4;
		return;
	}
	Global_2562129 = -1;
}

void func_528(int iParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 0.034722f / 2f;
	if (iParam0)
	{
		iVar3 = 48;
	}
	else
	{
		iVar3 = 210;
	}
	fVar0 = Global_17254;
	fVar1 = Global_17257.f_5600;
	_set_screen_draw_position(76, 84);
	_0xF5A2C681787E579D(-0.05f, -0.05f, 0f, 0f);
	if (Global_2562129 == -2)
	{
		func_492(fVar0, fVar1, Global_17256, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_2562129 == -3)
	{
		func_492(fVar0, fVar1 + fVar2, Global_17256, fVar2, 255, 255, 255, iVar3);
	}
	_0xE3A3DB414A373DAB();
}

void func_529()
{
	Global_2562125 = Global_2562123;
	Global_2562126 = Global_2562124;
	Global_2562123 = get_disabled_control_normal(2, 239);
	Global_2562124 = get_disabled_control_normal(2, 240);
	Global_2562127 = Global_2562123 - Global_2562125;
	Global_2562128 = Global_2562124 - Global_2562126;
}

void func_530()
{
	Global_2460486.f_4391 = 0;
}

void func_531(var uParam0)
{
	*uParam0 = 0;
	*uParam0.f_69 = 0;
	*uParam0.f_71 = 0;
	*uParam0.f_72 = 0;
	*uParam0.f_75 = 0;
	func_468(1, -1);
}

int func_532(int iParam0, int iParam1)
{
	if (func_443(iParam1) == 83)
	{
		switch (iParam0)
		{
			case 0:
				return Global_262145.f_10594;
			
			case 1:
				return Global_262145.f_10595;
			
			case 2:
				return Global_262145.f_10596;
			
			case 3:
				return Global_262145.f_10597;
			
			case 4:
				return Global_262145.f_10598;
			
			case 5:
				return Global_262145.f_10599;
			
			case 6:
				return Global_262145.f_10600;
			
			case 7:
				return Global_262145.f_10601;
			
			default:
		}
	}
	else if (func_443(iParam1) == 88)
	{
		switch (iParam0)
		{
			case 0:
				return 0;
			
			case 1:
				return 0;
			
			case 2:
				return 0;
			
			case 3:
				return 0;
			
			case 4:
				return 0;
			
			case 5:
				return 0;
			
			case 6:
				return 0;
			
			case 7:
				return 0;
			
			case 8:
				return 0;
			}
		
		default:
	}
	return 0;
}

bool func_533(int iParam0)
{
	if (func_535() && func_534())
	{
		if (iParam0 == 31)
		{
			return true;
		}
	}
	return false;
}

bool func_534()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (is_bit_set(Global_25, 5))
	{
		if (is_bit_set(Global_25, true) || is_bit_set(Global_25, 3))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (stat_get_int(joaat("sp_unlock_exclus_content"), &iVar0, -1))
	{
		if (is_bit_set(iVar0, 5))
		{
			if (is_bit_set(iVar0, true) || is_bit_set(iVar0, 3))
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	if (stat_slot_is_loaded(0))
	{
		if (Global_138275.f_3)
		{
			iVar2 = joaat("mpply_plat_up_lb_check");
			if (stat_get_int(iVar2, &iVar1, -1))
			{
				if (is_bit_set(iVar1, 5))
				{
					return true;
				}
			}
		}
	}
	if (_0x5AA3BEFA29F03AD4())
	{
		iVar3 = get_profile_setting(866);
		if (is_bit_set(iVar3, true) || is_bit_set(iVar3, 3))
		{
			return true;
		}
	}
	if (network_is_signed_in())
	{
		if (_network_are_ros_available())
		{
			if (_0x91B87C55093DE351())
			{
				stat_get_int(joaat("sp_unlock_exclus_content"), &iVar4, -1);
				set_bit(&iVar4, true);
				set_bit(&iVar4, 3);
				set_bit(&iVar4, 5);
				set_bit(&Global_25, true);
				set_bit(&Global_25, 3);
				set_bit(&Global_25, 5);
				stat_set_int(joaat("sp_unlock_exclus_content"), iVar4, 1);
				if (_0x5AA3BEFA29F03AD4())
				{
					iVar4 = get_profile_setting(866);
					set_bit(&iVar4, true);
					set_bit(&iVar4, 3);
					_0xDAC073C7901F9E15(iVar4);
				}
				return true;
			}
		}
	}
	return false;
}

bool func_535()
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

int func_536(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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
	struct<16> Var10;
	
	iVar0 = func_542(5, -1);
	iVar1 = 0;
	func_377(&iVar2, &iVar3, &iVar4, &iVar5, &iVar6, &iVar7, &iVar8);
	*iParam1 = 0;
	if (func_375(5, -1) != iVar2)
	{
		iVar9 = func_539(iVar2);
		if (func_447())
		{
			*iParam1 = func_538(iVar2 - 1, iParam0);
		}
		else
		{
			*iParam1 = func_538(iVar2 - 1, iParam0);
		}
		if (iVar0 != iParam0 && iVar9 == 0)
		{
			*iParam1 = 0;
		}
		else
		{
			iVar1 += *iParam1;
		}
	}
	*iParam2 = 0;
	if (iVar0 != iParam0)
	{
	}
	else if (func_1053(3200, -1, 0) != iVar3)
	{
		if (!func_208(0))
		{
			*iParam2 = func_537(1, 1);
			iVar1 += *iParam2;
		}
		else
		{
			*iParam2 = func_537(1, 0);
			iVar1 += *iParam2;
		}
	}
	*iParam3 = 0;
	*iParam4 = 0;
	*iParam5 = 0;
	if (iVar0 != iParam0)
	{
	}
	else
	{
		if (!is_string_null_or_empty(&(Global_68274.f_21)))
		{
			Var10 = {func_1054(45, 46, -1)};
			if (!is_string_null_or_empty(&Var10) && !are_strings_equal(&(Global_68274.f_21), &Var10))
			{
				*iParam3 = func_537(7, -1);
				iVar1 += *iParam3;
			}
		}
		if (iVar4 != func_1053(3272, -1, 0))
		{
			*iParam4 = func_537(2, -1);
			iVar1 += *iParam4;
		}
		if (iVar5 != func_1053(3273, -1, 0))
		{
			*iParam5 = func_537(3, -1);
			iVar1 += *iParam5;
		}
	}
	*iParam6 = 0;
	if (func_373(iVar6))
	{
		if (iVar0 != iParam0)
		{
			*iParam6 = func_537(4, -1);
			iVar1 += *iParam6;
		}
		else if (!func_371())
		{
			*iParam6 = func_537(4, -1);
			iVar1 += *iParam6;
		}
	}
	*iParam7 = 0;
	if (func_373(iVar7))
	{
		if (iVar0 != iParam0)
		{
			*iParam7 = func_537(5, -1);
			iVar1 += *iParam7;
		}
		else if (!func_370())
		{
			*iParam7 = func_537(5, -1);
			iVar1 += *iParam7;
		}
	}
	*iParam8 = 0;
	if (func_373(iVar8))
	{
		if (iVar0 != iParam0)
		{
			*iParam8 = func_537(6, -1);
			iVar1 += *iParam8;
		}
		else if (!func_369())
		{
			*iParam8 = func_537(6, -1);
			iVar1 += *iParam8;
		}
	}
	return iVar1;
}

int func_537(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				return Global_262145.f_12826;
			}
			else if (iParam1 == 1)
			{
				return Global_262145.f_12827;
			}
			return 0;
		
		case 2:
			return Global_262145.f_13669;
		
		case 3:
			return 0;
		
		case 4:
			return Global_262145.f_12828;
		
		case 5:
			return Global_262145.f_12829;
		
		case 6:
			return Global_262145.f_12830;
		
		case 7:
			return Global_262145.f_13668;
	}
	return 0;
}

int func_538(int iParam0, int iParam1)
{
	int iVar0;
	char* sVar1;
	int iVar17;
	int iVar18;
	char[16] cVar19;
	char[16] cVar23;
	
	if (network_is_game_in_progress() && is_pc_version())
	{
		iVar0 = 0;
		func_428(&sVar1, iParam0, iParam1, iVar0);
		iVar17 = get_hash_key(&sVar1);
		if (_0x247F0F73A182EA0B(iVar17))
		{
			iVar18 = _network_shop_get_price(iVar17, -300552292, 1);
			StringCopy(&cVar19, func_429(iParam0, iParam1), 16);
			return iVar18;
		}
		else
		{
			StringCopy(&cVar23, func_429(iParam0, iParam1), 16);
		}
	}
	if (func_443(iParam1) == 83)
	{
		switch (iParam0)
		{
			case 0:
				return Global_262145.f_10789;
			
			case 1:
				return Global_262145.f_10790;
			
			case 2:
				return Global_262145.f_10791;
			
			case 3:
				return Global_262145.f_10792;
			
			case 4:
				return Global_262145.f_10793;
			
			case 5:
				return Global_262145.f_10794;
			
			case 6:
				return Global_262145.f_10795;
			
			case 7:
				return Global_262145.f_10796;
			
			default:
		}
	}
	else if (func_443(iParam1) == 88)
	{
		switch (iParam0)
		{
			case 0:
				return Global_262145.f_12820;
			
			case 1:
				return Global_262145.f_12821;
			
			case 2:
				return Global_262145.f_12822;
			
			case 3:
				return Global_262145.f_12819;
			
			case 4:
				return Global_262145.f_12817;
			
			case 5:
				return Global_262145.f_12818;
			
			case 6:
				return Global_262145.f_12823;
			
			case 7:
				return Global_262145.f_12824;
			
			case 8:
				return Global_262145.f_12825;
			}
		
		default:
	}
	return 0;
}

int func_539(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_378(iVar0) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0;
}

int func_540(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (func_447())
	{
		iVar0 = 0;
		if (func_533(iParam0))
		{
			iVar0 = 1;
		}
		iVar1 = func_445(iParam0, iVar0);
		if (_0x247F0F73A182EA0B(iVar1))
		{
			return _network_shop_get_price(iVar1, 426439576, 1);
		}
	}
	return Global_1049163[iParam0 /*1924*/].f_32;
}

bool func_541(int iParam0)
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return true;
			break;
	}
	return false;
}

int func_542(int iParam0, int iParam1)
{
	var uVar0;
	
	uVar0 = iParam1;
	if (iParam1 == -1)
	{
		uVar0 = func_90();
	}
	if (iParam0 == 0)
	{
		return Global_1347762[uVar0];
	}
	else if (iParam0 == 99)
	{
		return Global_2492986[uVar0];
	}
	else if (iParam0 >= 1)
	{
		if (iParam0 >= 6)
		{
			return 0;
		}
		return Global_2492924[iParam0 - 1 /*6*/][uVar0];
	}
	return 0;
}

int func_543(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (func_542(iParam0, -1) > 0)
	{
		iVar1 = 0;
		if (func_447())
		{
			iVar1 = round(IntToFloat(func_540(func_542(iParam0, -1))) * 0.5f);
		}
		if (iParam0 == 0)
		{
			iVar1 = round(IntToFloat(Global_2097152[func_49() /*10375*/].f_7704.f_3) * 0.5f);
		}
		else if (iParam0 == 1)
		{
			iVar1 = round(IntToFloat(Global_2097152[func_49() /*10375*/].f_7704.f_778) * 0.5f);
		}
		else if (iParam0 < 6)
		{
			iVar0 = iParam0 - 2;
			iVar1 = round(IntToFloat(Global_2097152[func_49() /*10375*/].f_7704.f_779[iVar0]) * 0.5f);
		}
		if (iParam0 == 5)
		{
		}
		return iVar1;
	}
	return 0;
}

int func_544(int iParam0)
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return 5;
			break;
	}
	return -1;
}

bool func_545(int iParam0)
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return true;
			break;
		
		case -1:
			return false;
			break;
	}
	return false;
}

struct<4> func_546(int iParam0)
{
	char[16] cVar0;
	
	switch (iParam0)
	{
		case 1:
			StringCopy(&cVar0, "MP_PROP_1", 16);
			break;
		
		case 2:
			StringCopy(&cVar0, "MP_PROP_2", 16);
			break;
		
		case 3:
			StringCopy(&cVar0, "MP_PROP_3", 16);
			break;
		
		case 4:
			StringCopy(&cVar0, "MP_PROP_4", 16);
			break;
		
		case 5:
			StringCopy(&cVar0, "MP_PROP_5", 16);
			break;
		
		case 6:
			StringCopy(&cVar0, "MP_PROP_6", 16);
			break;
		
		case 7:
			StringCopy(&cVar0, "MP_PROP_7", 16);
			break;
		
		case 8:
			StringCopy(&cVar0, "MP_PROP_8", 16);
			break;
		
		case 9:
			StringCopy(&cVar0, "MP_PROP_9", 16);
			break;
		
		case 10:
			StringCopy(&cVar0, "MP_PROP_10", 16);
			break;
		
		case 11:
			StringCopy(&cVar0, "MP_PROP_11", 16);
			break;
		
		case 12:
			StringCopy(&cVar0, "MP_PROP_12", 16);
			break;
		
		case 13:
			StringCopy(&cVar0, "MP_PROP_13", 16);
			break;
		
		case 14:
			StringCopy(&cVar0, "MP_PROP_14", 16);
			break;
		
		case 15:
			StringCopy(&cVar0, "MP_PROP_15", 16);
			break;
		
		case 16:
			StringCopy(&cVar0, "MP_PROP_16", 16);
			break;
		
		case 17:
			StringCopy(&cVar0, "MP_PROP_17", 16);
			break;
		
		case 18:
			StringCopy(&cVar0, "MP_PROP_18", 16);
			break;
		
		case 19:
			StringCopy(&cVar0, "MP_PROP_19", 16);
			break;
		
		case 20:
			StringCopy(&cVar0, "MP_PROP_20", 16);
			break;
		
		case 21:
			StringCopy(&cVar0, "MP_PROP_21", 16);
			break;
		
		case 22:
			StringCopy(&cVar0, "MP_PROP_22", 16);
			break;
		
		case 23:
			StringCopy(&cVar0, "MP_PROP_23", 16);
			break;
		
		case 24:
			StringCopy(&cVar0, "MP_PROP_24", 16);
			break;
		
		case 25:
			StringCopy(&cVar0, "MP_PROP_25", 16);
			break;
		
		case 26:
			StringCopy(&cVar0, "MP_PROP_26", 16);
			break;
		
		case 27:
			StringCopy(&cVar0, "MP_PROP_27", 16);
			break;
		
		case 28:
			StringCopy(&cVar0, "MP_PROP_28", 16);
			break;
		
		case 29:
			StringCopy(&cVar0, "MP_PROP_29", 16);
			break;
		
		case 30:
			StringCopy(&cVar0, "MP_PROP_30", 16);
			break;
		
		case 31:
			StringCopy(&cVar0, "MP_PROP_31", 16);
			break;
		
		case 32:
			StringCopy(&cVar0, "MP_PROP_32", 16);
			break;
		
		case 33:
			StringCopy(&cVar0, "MP_PROP_33", 16);
			break;
		
		case 34:
			StringCopy(&cVar0, "MP_PROP_34", 16);
			break;
		
		case 35:
			StringCopy(&cVar0, "MP_PROP_35", 16);
			break;
		
		case 36:
			StringCopy(&cVar0, "MP_PROP_36", 16);
			break;
		
		case 37:
			StringCopy(&cVar0, "MP_PROP_37", 16);
			break;
		
		case 38:
			StringCopy(&cVar0, "MP_PROP_38", 16);
			break;
		
		case 39:
			StringCopy(&cVar0, "MP_PROP_39", 16);
			break;
		
		case 40:
			StringCopy(&cVar0, "MP_PROP_40", 16);
			break;
		
		case 41:
			StringCopy(&cVar0, "MP_PROP_41", 16);
			break;
		
		case 42:
			StringCopy(&cVar0, "MP_PROP_42", 16);
			break;
		
		case 43:
			StringCopy(&cVar0, "MP_PROP_43", 16);
			break;
		
		case 44:
			StringCopy(&cVar0, "MP_PROP_44", 16);
			break;
		
		case 45:
			StringCopy(&cVar0, "MP_PROP_45", 16);
			break;
		
		case 46:
			StringCopy(&cVar0, "MP_PROP_46", 16);
			break;
		
		case 47:
			StringCopy(&cVar0, "MP_PROP_48", 16);
			break;
		
		case 48:
			StringCopy(&cVar0, "MP_PROP_49", 16);
			break;
		
		case 49:
			StringCopy(&cVar0, "MP_PROP_50", 16);
			break;
		
		case 50:
			StringCopy(&cVar0, "MP_PROP_51", 16);
			break;
		
		case 51:
			StringCopy(&cVar0, "MP_PROP_52", 16);
			break;
		
		case 52:
			StringCopy(&cVar0, "MP_PROP_57", 16);
			break;
		
		case 53:
			StringCopy(&cVar0, "MP_PROP_59", 16);
			break;
		
		case 54:
			StringCopy(&cVar0, "MP_PROP_60", 16);
			break;
		
		case 55:
			StringCopy(&cVar0, "MP_PROP_61", 16);
			break;
		
		case 56:
			StringCopy(&cVar0, "MP_PROP_62", 16);
			break;
		
		case 57:
			StringCopy(&cVar0, "MP_PROP_63", 16);
			break;
		
		case 58:
			StringCopy(&cVar0, "MP_PROP_64", 16);
			break;
		
		case 59:
			StringCopy(&cVar0, "MP_PROP_65", 16);
			break;
		
		case 60:
			StringCopy(&cVar0, "MP_PROP_66", 16);
			break;
		
		case 61:
			StringCopy(&cVar0, "MP_PROP_67", 16);
			break;
		
		case 62:
			StringCopy(&cVar0, "MP_PROP_68", 16);
			break;
		
		case 63:
			StringCopy(&cVar0, "MP_PROP_69", 16);
			break;
		
		case 64:
			StringCopy(&cVar0, "MP_PROP_70", 16);
			break;
		
		case 65:
			StringCopy(&cVar0, "MP_PROP_71", 16);
			break;
		
		case 66:
			StringCopy(&cVar0, "MP_PROP_72", 16);
			break;
		
		case 67:
			StringCopy(&cVar0, "MP_PROP_73", 16);
			break;
		
		case 68:
			StringCopy(&cVar0, "MP_PROP_74", 16);
			break;
		
		case 69:
			StringCopy(&cVar0, "MP_PROP_75", 16);
			break;
		
		case 70:
			StringCopy(&cVar0, "MP_PROP_76", 16);
			break;
		
		case 71:
			StringCopy(&cVar0, "MP_PROP_77", 16);
			break;
		
		case 72:
			StringCopy(&cVar0, "MP_PROP_78", 16);
			break;
		
		case 83:
			StringCopy(&cVar0, "MP_PROP_79", 16);
			break;
		
		case 84:
			StringCopy(&cVar0, "MP_PROP_80", 16);
			break;
		
		case 85:
			StringCopy(&cVar0, "MP_PROP_81", 16);
			break;
		
		case 73:
			StringCopy(&cVar0, "MP_PROP_83", 16);
			break;
		
		case 74:
			StringCopy(&cVar0, "MP_PROP_84", 16);
			break;
		
		case 75:
			StringCopy(&cVar0, "MP_PROP_85", 16);
			break;
		
		case 76:
			StringCopy(&cVar0, "MP_PROP_86", 16);
			break;
		
		case 77:
			StringCopy(&cVar0, "MP_PROP_87", 16);
			break;
		
		case 78:
			StringCopy(&cVar0, "MP_PROP_89", 16);
			break;
		
		case 79:
			StringCopy(&cVar0, "MP_PROP_90", 16);
			break;
		
		case 80:
			StringCopy(&cVar0, "MP_PROP_92", 16);
			break;
		
		case 81:
			StringCopy(&cVar0, "MP_PROP_94", 16);
			break;
		
		case 82:
			StringCopy(&cVar0, "MP_PROP_95", 16);
			break;
		
		case 86:
			StringCopy(&cVar0, "PM_SPAWN_Y", 16);
			break;
		
		case 87:
			StringCopy(&cVar0, "MP_PROP_OFF1", 16);
			break;
		
		case 88:
			StringCopy(&cVar0, "MP_PROP_OFF2", 16);
			break;
		
		case 89:
			StringCopy(&cVar0, "MP_PROP_OFF3", 16);
			break;
		
		case 90:
			StringCopy(&cVar0, "MP_PROP_OFF4", 16);
			break;
	}
	return cVar0;
}

var func_547(int iParam0)
{
	return Global_1587523[iParam0 /*444*/].f_195.f_6;
}

int func_548(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (Global_262145.f_6088 == 1)
	{
		if (iParam0 == 67)
		{
			return true;
		}
		if (iParam0 == 74)
		{
			return true;
		}
		if (func_552(player_id(), 85))
		{
			if (((((iParam0 == 64 || iParam0 == 77) || iParam0 == 61) || iParam0 == 81) || iParam0 == 63) || iParam0 == 62)
			{
				return true;
			}
		}
		if ((((((((((iParam0 == 66 || iParam0 == 116) || iParam0 == 103) || iParam0 == 104) || iParam0 == 105) || iParam0 == 119) || iParam0 == 88) || iParam0 == 75) || iParam0 == 95) || iParam0 == 65) || iParam0 == 98)
		{
			return true;
		}
	}
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 == 31)
	{
		if (Global_262145.f_4868 == 1)
		{
			return true;
		}
	}
	if (func_551() || func_550())
	{
		return true;
	}
	iVar0 = iParam0;
	iVar1 = iVar0 / 32;
	iVar0 %= 32;
	if (iParam1)
	{
		if (iParam0 == 3)
		{
			if (func_549())
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	if (iParam2)
	{
		return false;
	}
	return is_bit_set(Global_1573873[iVar1], iVar0);
}

bool func_549()
{
	int iVar0;
	
	if (Global_1312446)
	{
		return true;
	}
	if (is_bit_set(Global_2460486.f_1638, 23))
	{
		return true;
	}
	if (func_551())
	{
		return true;
	}
	if (func_550())
	{
		return true;
	}
	iVar0 = Global_1347750[func_197(-1)];
	if (is_bit_set(iVar0, 7))
	{
		set_bit(&(Global_2460486.f_1638), 23);
		return true;
	}
	return false;
}

var func_550()
{
	return Global_1315901;
}

var func_551()
{
	return Global_1315903;
}

int func_552(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	if (!func_555())
	{
		return false;
	}
	if (func_554())
	{
		return false;
	}
	if (iParam1 == 86)
	{
		return true;
	}
	uVar0 = func_553(iParam1);
	iVar1 = uVar0;
	return is_bit_set(Global_1587523[iParam0 /*444*/].f_345, iVar1);
}

int func_553(int iParam0)
{
	switch (iParam0)
	{
		case 86:
			return 0;
		
		case 19:
			return 1;
		
		case 12:
			return 2;
		
		case 31:
			return 3;
		
		case 20:
			return 4;
		
		case 18:
			return 5;
		
		case 2:
			return 6;
		
		case 76:
			return 7;
		
		default:
	}
	return 1;
}

int func_554()
{
	return is_bit_set(Global_1587523[player_id() /*444*/].f_135, 3);
}

int func_555()
{
	if (Global_1312446)
	{
		return 1;
	}
	if (func_551())
	{
		return 1;
	}
	if (func_550())
	{
		return 1;
	}
	return func_196(120, -1);
}

bool func_556()
{
	if (func_559())
	{
		return true;
	}
	switch (func_1029())
	{
		case 0:
			if (func_912(0) < 10000)
			{
				return false;
			}
			else
			{
				func_558(111, 1);
				func_557();
				func_44(0, 0, 92, 10000, 1);
			}
			break;
		
		case 2:
			if (func_912(2) < 10000)
			{
				return false;
			}
			else
			{
				func_558(113, 1);
				func_557();
				func_44(2, 0, 92, 10000, 1);
			}
			break;
		
		case 1:
			if (func_912(1) < 10000)
			{
				return false;
			}
			else
			{
				func_558(112, 1);
				func_557();
				func_44(1, 0, 92, 10000, 1);
			}
			break;
	}
	func_86();
	return true;
}

void func_557()
{
	if (Global_69489)
	{
		return;
	}
	if (is_player_dead(get_player_index()))
	{
		return;
	}
	if (is_entity_dead(get_player_ped(get_player_index()), 0))
	{
		return;
	}
	_play_ambient_speech1(get_player_ped(get_player_index()), "PURCHASE_ONLINE", "SPEECH_PARAMS_FORCE", 1);
}

void func_558(int iParam0, int iParam1)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return;
	}
	if (Global_101154.f_7775.f_99.f_58[iParam0] == iParam1)
	{
		return;
	}
	Global_101154.f_7775.f_99.f_58[iParam0] = iParam1;
}

bool func_559()
{
	switch (func_1029())
	{
		case 0:
			if (func_560(111))
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		
		case 2:
			if (func_560(113))
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		
		case 1:
			if (func_560(112))
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
	}
	return true;
}

int func_560(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_101154.f_7775.f_99.f_58[iParam0];
}

void func_561(int iParam0, int iParam1, int iParam2)
{
	struct<2> Var0;
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
	int iVar92;
	
	Var0.f_1 = 65;
	iVar77 = -1;
	iVar78 = -1;
	iVar80 = false;
	iVar83 = false;
	if (iParam0 == 16)
	{
		if (iParam2 == 34)
		{
			iVar83 = true;
		}
	}
	else if (iParam0 == 13)
	{
		if (iParam2 == 12 || iParam2 == 26)
		{
			iVar83 = true;
		}
	}
	else if (iParam0 != 16)
	{
		if (iParam2 == 12)
		{
			iVar83 = true;
		}
	}
	if (iParam0 == 13)
	{
		iVar79 = func_700(iParam0, iParam1);
		if (iVar79 == 245)
		{
			switch (iParam1)
			{
				case 19:
					Global_68315 = 0;
					Global_68236 = func_1055(4137, -1, -1);
					Global_68236.f_1 = func_1055(4139, -1, -1);
					Global_68236.f_2 = func_1055(4138, -1, -1);
					Global_68236.f_4 = func_1055(4140, -1, -1);
					Global_68236.f_3 = func_1055(4141, -1, -1);
					Global_68236.f_5 = {func_1054(54, 56, -1)};
					StringCopy(&(Global_68236.f_21), "", 64);
					if (is_string_null_or_empty(&(Global_68236.f_5)))
					{
						StringCopy(&(Global_68236.f_21), _get_label_text("YACHT_GSY"), 64);
					}
					Global_68236.f_37 = func_1053(3147, -1, 0);
					break;
				
				case 20:
					break;
				
				case 21:
					break;
				
				case 22:
					break;
				
				case 23:
					break;
				
				case 24:
					break;
				
				case 29:
					break;
				
				case 25:
					break;
				
				case 26:
					break;
				
				case 27:
					break;
				
				case 28:
					func_694(&iLocal_713);
					break;
				
				default:
					break;
				}
			}
	}
	if (iVar83)
	{
		if (func_691(iParam0, iParam1 - 3) || (iParam1 > 2 && iParam1 < 34))
		{
			iVar79 = func_700(iParam0, iParam1);
			if (!Global_69489)
			{
				iVar84 = func_980(iVar79, iParam0, Global_68315);
				iVar81 = func_689(iVar79, iParam0, iVar84, 0);
				if (func_688(iVar79, func_1029()))
				{
					func_918(iParam0, 4, iVar79, iVar81);
					return;
				}
				if (iVar79 == 200 && Global_101154.f_29598.f_7)
				{
					func_918(iParam0, 4, iVar79, iVar81);
					return;
				}
				if (iVar81 > 0 && iVar81 > func_912(func_1029()))
				{
					func_918(iParam0, 2, iVar79, iVar81);
					return;
				}
				if (!func_687(iVar79))
				{
					func_918(iParam0, 1, iVar79, iVar81);
					return;
				}
				if (!func_686(iVar79, func_1029()))
				{
					func_918(iParam0, 5, iVar79, iVar81);
					return;
				}
				switch (iParam0)
				{
					case 10:
						if (func_51(3))
						{
							iVar81 = ceil(0.9f * to_float(iVar81));
							iVar80 = true;
						}
						break;
					
					case 11:
						if (func_51(4))
						{
							iVar81 = ceil(0.9f * to_float(iVar81));
							iVar80 = true;
						}
						break;
					
					case 12:
						if (func_51(2))
						{
							iVar81 = ceil(0.9f * to_float(iVar81));
							iVar80 = true;
						}
						break;
				}
				if (iVar80)
				{
					switch (iParam0)
					{
						case 10:
							func_47(3);
							break;
						
						case 11:
							func_47(4);
							break;
						
						case 12:
							func_47(2);
							break;
						}
				}
				switch (iParam0)
				{
					case 10:
						func_911(func_1029(), 85, iVar81);
						break;
					
					case 11:
						func_911(func_1029(), 87, iVar81);
						break;
					
					case 12:
						func_911(func_1029(), 86, iVar81);
						break;
					
					case 13:
						func_911(func_1029(), 88, iVar81);
						break;
					
					case 15:
						func_911(func_1029(), 89, iVar81);
						break;
					
					case 16:
						func_911(func_1029(), 90, iVar81);
						break;
					
					case 26:
						func_911(func_1029(), 91, iVar81);
						break;
					
					default:
						break;
				}
				stat_get_int(joaat("sp0_sp_money_spent_on_vehicles"), &iVar85, -1);
				stat_get_int(joaat("sp1_sp_money_spent_on_vehicles"), &iVar86, -1);
				stat_get_int(joaat("sp2_sp_money_spent_on_vehicles"), &iVar87, -1);
				switch (func_1029())
				{
					case 0:
						stat_set_int(joaat("sp0_sp_money_spent_on_vehicles"), iVar85 + iVar81, 1);
						break;
					
					case 1:
						stat_set_int(joaat("sp1_sp_money_spent_on_vehicles"), iVar86 + iVar81, 1);
						break;
					
					case 2:
						stat_set_int(joaat("sp2_sp_money_spent_on_vehicles"), iVar87 + iVar81, 1);
						break;
				}
				func_557();
				func_651(iVar79, func_1029(), &Global_68117, iParam0);
				func_910(func_650(iParam0, iVar79));
				play_sound_frontend(-1, "Click_Special", " WEB_NAVIGATION_SOUNDS_PHONE", 1);
			}
			else
			{
				iLocal_2639 = -1;
				iLocal_2642 = -1;
				iLocal_2640 = -1;
				iVar88 = func_980(iVar79, iParam0, Global_68315);
				iVar89 = -1;
				if (iVar88)
				{
					iVar89 = 1;
				}
				iVar81 = func_638(iVar79, iVar88);
				if (func_637(iVar79))
				{
					if (func_542(0, -1) < 1)
					{
						func_918(iParam0, 1, iVar79, iVar81);
						return;
					}
				}
				else
				{
					iVar90 = func_636(iVar79, Global_68315);
					if (iVar79 == 245)
					{
						iVar91 = _0xE3B05614DCE1D014(11);
						Global_68236.f_3 = func_379(iVar91, 6, 6);
						Global_68236.f_2 = func_379(iVar91, 12, 6);
						Global_68236.f_4 = func_379(iVar91, 18, 6);
						Global_68236 = func_379(iVar91, 24, 2);
						Global_68236.f_1 = func_379(iVar91, 26, 2);
						if (!func_635(&Global_68236))
						{
							func_918(iParam0, 10, iVar79, iVar81);
							return;
						}
						if (func_634(iVar90))
						{
							Global_68236 += 3;
						}
						iVar81 = func_633(func_634(iVar90), Global_68236.f_3, Global_68236.f_2, Global_68236.f_4, Global_68236, Global_68236.f_1, &(Global_68236.f_21), &iLocal_2645, &iLocal_2646, &iLocal_2644, &iLocal_2643, &iLocal_2647, &iLocal_2648);
					}
					else if (func_634(iVar90))
					{
						func_918(iParam0, 4, iVar79, iVar81);
						return;
					}
				}
				if (Global_69489)
				{
					switch (iParam0)
					{
						case 10:
						case 16:
						case 26:
							iVar81 = ceil(Global_262145.f_78 * to_float(iVar81));
							break;
						
						case 11:
						case 12:
							if (func_632(iVar79) == 1)
							{
								iVar81 = ceil(Global_262145.f_79 * to_float(iVar81));
							}
							else
							{
								iVar81 = ceil(Global_262145.f_80 * to_float(iVar81));
							}
							break;
						
						case 13:
							iVar81 = ceil(Global_262145.f_81 * to_float(iVar81));
							break;
						
						case 15:
							iVar81 = ceil(Global_262145.f_82 * to_float(iVar81));
							break;
					}
					if (Global_262145.f_6089)
					{
						switch (iParam0)
						{
							case 10:
								iVar81 = ceil(100f - Global_262145.f_6780 / 100f * to_float(iVar81));
								break;
							
							case 11:
								iVar81 = ceil(100f - Global_262145.f_6781 / 100f * to_float(iVar81));
								break;
							
							case 16:
								iVar81 = ceil(100f - Global_262145.f_6782 / 100f * to_float(iVar81));
								break;
							}
						}
				}
				if (iVar81 > 0 && !_has_item_been_unlocked(iVar81, false, true, 0, -1))
				{
					func_918(iParam0, 2, iVar79, iVar81);
					return;
				}
				if (func_631())
				{
					func_918(iParam0, 10, iVar79, iVar81);
					return;
				}
				iLocal_2638 = iVar79;
				func_624(iLocal_2638, &Global_68117, 1, 145, iVar89);
				if (!func_637(iVar79))
				{
					iVar92 = 0;
					if (!func_597(iParam0, iVar79, iVar81, &iVar92))
					{
						func_918(iParam0, iVar92, iVar79, iVar81);
					}
					else
					{
						if (iLocal_713 != 4 && iLocal_713 != 6)
						{
							func_587(iVar79, 0, iParam0, -1);
						}
						func_585(func_636(iVar79, Global_68315));
						func_584();
						if (iLocal_713 != 4 && iLocal_713 != 6)
						{
							func_583();
							func_2(3, 0);
						}
					}
					return;
				}
				if ((func_542(1, -1) < 1 && func_542(2, -1) < 1) && func_542(3, -1) < 1)
				{
					iVar82 = func_582(1, 0, func_420(Global_68117.f_66), 0, -1);
					iVar78 = func_576(1, 0, func_420(Global_68117.f_66), 0, -1, 0);
				}
				else
				{
					iVar82 = -1;
				}
				if (iVar82 == -1 || iVar78 == -1)
				{
					Global_17257.f_7827 = 1;
					iVar78 = -1;
					while (!func_562(&Var0, &iVar77, &iVar78, func_420(Global_68117.f_66), 0) && func_457())
					{
						func_456();
						func_454();
						wait(0);
						Global_17257.f_7827 = 1;
					}
					Global_17257.f_7827 = 0;
					iLocal_2639 = iVar77;
					iLocal_2640 = iVar78;
					func_1046(0, 0, 0);
					if (iVar77 == -1 || iVar78 == -1)
					{
						func_918(iParam0, 9, iVar79, iVar81);
						return;
					}
				}
				else
				{
					iLocal_2639 = iVar82;
				}
				iLocal_2641 = 1;
				if (func_919(iParam0, iVar89, iVar81))
				{
					func_587(iVar79, Global_68315, iParam0, iLocal_2642);
				}
				else
				{
					func_918(iParam0, 10, iVar79, iVar81);
				}
			}
		}
	}
}

bool func_562(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	if ((((!network_is_game_in_progress() || !func_220(player_id(), 1, 1)) || func_13()) || Global_1315839) || Global_2435528.f_3287.f_32)
	{
		*iParam1 = -1;
		func_531(uParam0);
		return true;
	}
	iVar0 = false;
	hide_help_text_this_frame();
	func_530();
	func_456();
	set_input_exclusive(2, 202);
	set_input_exclusive(2, 201);
	set_input_exclusive(2, 189);
	set_input_exclusive(2, 190);
	set_input_exclusive(2, 241);
	set_input_exclusive(2, 242);
	set_input_exclusive(2, 180);
	set_input_exclusive(2, 181);
	if (_is_input_disabled(2))
	{
		set_input_exclusive(0, 24);
		set_input_exclusive(0, 257);
		enable_control_action(2, 237, 1);
		enable_control_action(2, 238, 1);
		enable_control_action(2, 242, 1);
		enable_control_action(2, 241, 1);
		disable_control_action(2, 2, 1);
		disable_control_action(2, 1, 1);
		disable_control_action(0, 24, 1);
		disable_control_action(0, 257, 1);
		if (!is_pause_menu_active() && !is_warning_message_active())
		{
			set_input_exclusive(2, 202);
			set_input_exclusive(2, 201);
		}
		func_527(0, 0, 0, 1);
		_show_cursor_this_frame();
	}
	set_bit(uParam0.f_72, true);
	if (func_525(0, -1, 0))
	{
		if (func_220(player_id(), 1, 1))
		{
			if (!is_bit_set(*uParam0.f_72, false))
			{
				func_565(uParam0, iParam3, iParam4);
				set_bit(uParam0.f_72, false);
				func_564(uParam0, iParam4, iVar1);
				func_475(1, -1, 1, 0, 1, -1082130432, 0, 0);
			}
			else if ((!is_pause_menu_active() && !func_18(8, -1)) && !Global_2434762.f_658.f_5)
			{
				if (_is_input_disabled(2))
				{
					if (func_473())
					{
						if (*uParam0.f_68 == 0)
						{
							if (Global_2562129 != *uParam0.f_69)
							{
								*uParam0.f_69 = Global_2562129;
								play_sound_frontend(-1, "NAV_UP_DOWN", "HUD_FREEMODE_SOUNDSET", 1);
								clear_bit(uParam0.f_72, false);
							}
							else
							{
								iVar0 = true;
							}
						}
						else if (Global_2562129 != *uParam0.f_70)
						{
							*uParam0.f_70 = Global_2562129;
							play_sound_frontend(-1, "NAV_UP_DOWN", "HUD_FREEMODE_SOUNDSET", 1);
							clear_bit(uParam0.f_72, false);
						}
						else
						{
							iVar0 = true;
						}
					}
				}
				if (!is_bit_set(*uParam0.f_75, false))
				{
					if (((is_control_just_pressed(2, 201) || func_474()) || iVar0) || (is_warning_message_active() && is_control_just_pressed(2, 201)))
					{
						play_sound_frontend(-1, "SELECT", "HUD_FREEMODE_SOUNDSET", 1);
						if (*uParam0.f_68 == 0)
						{
							if (*uParam0.f_1[*uParam0.f_69] >= 0)
							{
								*iParam2 = func_576(1, 0, iParam3, func_542(*uParam0.f_1[*uParam0.f_69], -1), -1, 0);
								if (*iParam2 >= 0)
								{
									func_563(*iParam2, iParam1, 1);
									if (*iParam1 < 0)
									{
										*iParam1 = func_582(1, 0, iParam3, 0, -1);
									}
								}
								if (*iParam1 >= 0 && *iParam2 >= 0)
								{
									clear_bit(uParam0.f_72, false);
									func_531(uParam0);
									return true;
								}
							}
							*uParam0.f_68 = 1;
							clear_bit(uParam0.f_72, false);
							iVar1 = true;
						}
						else if (!is_bit_set(*uParam0.f_75, 2) && !is_bit_set(*uParam0.f_67, *uParam0.f_70))
						{
							func_507(-1);
							func_506(176, "BB_YES", -1);
							func_506(177, "BB_NO", -1);
							set_bit(uParam0.f_75, 2);
						}
						else
						{
							*iParam2 = *uParam0.f_1[*uParam0.f_70];
							func_563(*iParam2, iParam1, 1);
							if (*iParam1 < 0)
							{
								*iParam1 = func_582(1, 0, iParam3, 0, -1);
							}
							if (*iParam1 >= 0 && *iParam2 >= 0)
							{
								clear_bit(uParam0.f_72, false);
								func_531(uParam0);
							}
							else
							{
								func_531(uParam0);
								*iParam1 = -1;
								return true;
							}
							return true;
						}
						set_bit(uParam0.f_75, false);
					}
				}
				else if (!is_control_pressed(2, 201) && !iVar0)
				{
					clear_bit(uParam0.f_75, false);
				}
				if (!is_bit_set(*uParam0.f_75, true))
				{
					if ((((func_467() || is_control_just_pressed(2, 238)) || is_control_just_pressed(2, 202)) || (func_466() && Global_2562129 > -1)) || (is_warning_message_active() && is_control_just_pressed(2, 202)))
					{
						play_sound_frontend(-1, "CANCEL", "HUD_FREEMODE_SOUNDSET", 1);
						if (*uParam0.f_68 == 0)
						{
							func_564(uParam0, iParam4, iVar1);
							func_475(1, -1, 1, 0, 1, -1082130432, 0, 0);
							func_531(uParam0);
							*iParam1 = -1;
							return true;
						}
						else if (!is_bit_set(*uParam0.f_75, 2))
						{
							*uParam0.f_68 = 0;
							iVar1 = true;
							clear_bit(uParam0.f_72, false);
						}
						else
						{
							func_507(-1);
							func_506(176, "BB_SELECT", -1);
							func_506(177, "BB_BACK", -1);
							clear_bit(uParam0.f_75, 2);
						}
						set_bit(uParam0.f_75, true);
					}
				}
				else if ((!is_control_pressed(2, 202) && !is_control_pressed(2, 238)) && !func_467())
				{
					clear_bit(uParam0.f_75, true);
				}
				if (!is_bit_set(*uParam0.f_75, 2))
				{
					if (!is_bit_set(*uParam0.f_75, 4))
					{
						if ((is_control_pressed(2, 172) || is_disabled_control_just_pressed(2, 172)) || is_disabled_control_just_pressed(2, 241))
						{
							if (*uParam0.f_68 == 0)
							{
								*uParam0.f_69--;
							}
							else
							{
								*uParam0.f_70--;
							}
							play_sound_frontend(-1, "NAV_UP_DOWN", "HUD_FREEMODE_SOUNDSET", 1);
							set_bit(uParam0.f_75, 4);
							clear_bit(uParam0.f_72, false);
							func_464(uParam0.f_73);
						}
					}
					else if (func_461(uParam0, 172))
					{
						clear_bit(uParam0.f_75, 4);
					}
					if (!is_bit_set(*uParam0.f_75, 5))
					{
						if ((is_control_pressed(2, 173) || is_disabled_control_just_pressed(2, 173)) || is_disabled_control_just_pressed(2, 242))
						{
							if (*uParam0.f_68 == 0)
							{
								*uParam0.f_69++;
							}
							else
							{
								*uParam0.f_70++;
							}
							play_sound_frontend(-1, "NAV_UP_DOWN", "HUD_FREEMODE_SOUNDSET", 1);
							set_bit(uParam0.f_75, 5);
							clear_bit(uParam0.f_72, false);
							func_464(uParam0.f_73);
						}
					}
					else if (func_461(uParam0, 173))
					{
						clear_bit(uParam0.f_75, 5);
					}
				}
				if (*uParam0.f_68 == 0)
				{
					if (*uParam0.f_69 >= *uParam0.f_71)
					{
						*uParam0.f_69 = 0;
					}
					if (*uParam0.f_69 < 0)
					{
						*uParam0.f_69 = *uParam0.f_71 - 1;
					}
				}
				else
				{
					if (*uParam0.f_70 >= *uParam0.f_71)
					{
						*uParam0.f_70 = 0;
					}
					if (*uParam0.f_70 < 0)
					{
						*uParam0.f_70 = *uParam0.f_71 - 1;
					}
				}
				func_564(uParam0, iParam4, iVar1);
				if (!is_bit_set(*uParam0.f_75, 2) && !is_warning_message_active())
				{
					func_475(1, -1, 1, 0, 1, -1082130432, 0, 0);
				}
			}
		}
	}
	return false;
}

void func_563(int iParam0, int iParam1, int iParam2)
{
	if (Global_262145.f_8120)
	{
		*iParam1 = iParam0;
	}
	if (iParam0 >= 0)
	{
		*iParam1 = Global_1724580[iParam0] - 1;
		if (iParam2)
		{
		}
	}
	else
	{
		*iParam1 = -1;
	}
}

void func_564(var uParam0, int iParam1, int iParam2)
{
	if (!iParam2)
	{
		if (*uParam0.f_68 == 0)
		{
			func_502("DEL_VEH_SEL1", 100, 0);
		}
		else if (is_bit_set(*uParam0.f_75, 2))
		{
			_set_warning_message_2("PLYVEH_CM_CONT", "PLYVEH_CM_1B", 36, 0, 0, -1, 0, 0, 1);
		}
		else if (is_bit_set(*uParam0.f_67, *uParam0.f_70))
		{
			func_502("DEL_VEH_SEL2", 100, 0);
		}
		else if (iParam1)
		{
			func_502("MP_PROP_SC_3", 100, 0);
		}
		else
		{
			func_502("MP_PROP_SC_1", 100, 0);
		}
	}
}

void func_565(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<4> Var6;
	int iVar10;
	int iVar11;
	int iVar12;
	struct<6> Var13;
	
	iVar0 = false;
	func_524(0);
	if (iParam2)
	{
		func_571(func_575());
	}
	func_523(1, 1, 0, 0, 0);
	func_522(1, 2, 1, 1, 1);
	func_521(0, 0, 0, 0, 0);
	iVar2 = false;
	iVar12 = 1;
	switch (*uParam0.f_68)
	{
		case 0:
			func_520("DEL_VEH_SEL0");
			iVar1 = 0;
			while (iVar1 < 6)
			{
				iVar3 = func_542(iVar1, -1);
				if (iVar3 > 0 && func_570(iVar3))
				{
					if (!func_518())
					{
						if (!func_517() && !func_516(iVar3))
						{
							func_512(iVar0, &(Global_1049163[iVar3 /*1924*/].f_16), 0, 1, 0, 0);
						}
						else
						{
							Var6 = {Global_1049163[iVar3 /*1924*/].f_16};
							StringConCat(&Var6, "S", 16);
							func_512(iVar0, &Var6, 0, 1, 0, 0);
						}
					}
					else
					{
						func_512(iVar0, "PIM_DNAME", 1, 1, 0, 0);
						func_511(_get_label_text(&(Global_1049163[iVar3 /*1924*/].f_16)), 0, 1);
					}
					*uParam0.f_1[iVar0] = iVar1;
					iVar0++;
				}
				iVar1++;
			}
			*uParam0.f_71 = iVar0;
			func_459(*uParam0.f_69, 1, 1);
			break;
		
		case 1:
			func_520("DEL_VEH_SEL3");
			*uParam0.f_67 = 0;
			iVar4 = 0 + 13 * *uParam0.f_69;
			iVar3 = func_542(*uParam0.f_69, -1);
			iVar5 = 10 + 13 * *uParam0.f_69;
			iVar1 = 0;
			while (iVar1 < 13)
			{
				iVar10 = iVar1 + iVar4;
				iVar2 = false;
				if (iVar3 <= 0)
				{
					iVar2 = true;
				}
				else if (Global_1049163[iVar3 /*1924*/].f_33 == 2)
				{
					if (iVar10 >= iVar4 + 2 && iVar10 != iVar5)
					{
						iVar2 = true;
					}
				}
				else if (Global_1049163[iVar3 /*1924*/].f_33 == 6)
				{
					if ((iVar10 >= iVar4 + 6 && iVar10 != iVar5) && iVar10 != iVar5 + 1)
					{
						iVar2 = true;
					}
				}
				if (!iParam1)
				{
					if (iVar10 >= iVar5)
					{
						iVar2 = true;
					}
				}
				else if (iVar10 < iVar5)
				{
					iVar2 = true;
				}
				if (!iVar2)
				{
					func_563(iVar10, &iVar11, 1);
					if ((iVar11 >= 0 && Global_1321273[iVar11 /*138*/].f_66 != 0) && is_model_in_cdimage(Global_1321273[iVar11 /*138*/].f_66))
					{
						iVar12 = 1;
						StringCopy(&Var13, "", 24);
						if (func_569(&(Global_1321273[iVar11 /*138*/])))
						{
							iVar12++;
						}
						if (func_568(Global_1321273[iVar11 /*138*/].f_66, Global_1321273[iVar11 /*138*/].f_77, Global_1321273[iVar11 /*138*/].f_9[10]) && func_567(Global_1321273[iVar11 /*138*/].f_66))
						{
							iVar12++;
						}
						if (is_bit_set(Global_1321273[iVar11 /*138*/].f_99, true))
						{
							if (is_bit_set(Global_1321273[iVar11 /*138*/].f_99, 2) && !iParam1)
							{
								StringCopy(&Var13, "MP_MAN_VEH_S0", 24);
								StringIntConCat(&Var13, iVar12, 24);
								func_512(iVar0, &Var13, iVar12, 1, 0, 0);
								func_566(get_display_name_from_vehicle_model(Global_1321273[iVar11 /*138*/].f_66), 0);
								if (func_569(&(Global_1321273[iVar11 /*138*/])))
								{
									func_566("VEH_LIVERY", 0);
								}
								if (func_568(Global_1321273[iVar11 /*138*/].f_66, Global_1321273[iVar11 /*138*/].f_77, Global_1321273[iVar11 /*138*/].f_9[10]) && func_567(Global_1321273[iVar11 /*138*/].f_66))
								{
									func_566("VEH_TOPL", 0);
								}
								*uParam0.f_1[iVar0] = iVar10;
								iVar0++;
							}
							else
							{
								func_512(iVar0, "MP_MAN_VEH_S", 0, 1, 0, 0);
								*uParam0.f_1[iVar0] = iVar10;
								set_bit(uParam0.f_67, iVar0);
								iVar0++;
							}
						}
						else if (iParam1)
						{
							if (func_420(Global_1321273[iVar11 /*138*/].f_66))
							{
								if (is_bit_set(Global_1321273[iVar11 /*138*/].f_99, 6))
								{
									StringCopy(&Var13, "MP_MAN_VEH_S1", 24);
									StringIntConCat(&Var13, iVar12, 24);
									func_512(iVar0, &Var13, iVar12, 1, 0, 0);
									func_566(get_display_name_from_vehicle_model(Global_1321273[iVar11 /*138*/].f_66), 0);
									if (func_569(&(Global_1321273[iVar11 /*138*/])))
									{
										func_566("VEH_LIVERY", 0);
									}
									if (func_568(Global_1321273[iVar11 /*138*/].f_66, Global_1321273[iVar11 /*138*/].f_77, Global_1321273[iVar11 /*138*/].f_9[10]) && func_567(Global_1321273[iVar11 /*138*/].f_66))
									{
										func_566("VEH_TOPL", 0);
									}
								}
								else
								{
									StringCopy(&Var13, "PIL_MP_VEH_0", 24);
									StringIntConCat(&Var13, iVar12, 24);
									func_512(iVar0, &Var13, iVar12, 1, 0, 0);
									func_566(get_display_name_from_vehicle_model(Global_1321273[iVar11 /*138*/].f_66), 0);
									if (func_569(&(Global_1321273[iVar11 /*138*/])))
									{
										func_566("VEH_LIVERY", 0);
									}
									if (func_568(Global_1321273[iVar11 /*138*/].f_66, Global_1321273[iVar11 /*138*/].f_77, Global_1321273[iVar11 /*138*/].f_9[10]) && func_567(Global_1321273[iVar11 /*138*/].f_66))
									{
										func_566("VEH_TOPL", 0);
									}
								}
								*uParam0.f_1[iVar0] = iVar10;
								iVar0++;
							}
						}
						else if (!func_420(Global_1321273[iVar11 /*138*/].f_66))
						{
							if (is_bit_set(Global_1321273[iVar11 /*138*/].f_99, 6))
							{
								StringCopy(&Var13, "MP_MAN_VEH_S1", 24);
								StringIntConCat(&Var13, iVar12, 24);
								func_512(iVar0, &Var13, iVar12, 1, 0, 0);
								func_566(get_display_name_from_vehicle_model(Global_1321273[iVar11 /*138*/].f_66), 0);
								if (func_569(&(Global_1321273[iVar11 /*138*/])))
								{
									func_566("VEH_LIVERY", 0);
								}
								if (func_568(Global_1321273[iVar11 /*138*/].f_66, Global_1321273[iVar11 /*138*/].f_77, Global_1321273[iVar11 /*138*/].f_9[10]) && func_567(Global_1321273[iVar11 /*138*/].f_66))
								{
									func_566("VEH_TOPL", 0);
								}
							}
							else
							{
								StringCopy(&Var13, "PIL_MP_VEH_0", 24);
								StringIntConCat(&Var13, iVar12, 24);
								func_512(iVar0, &Var13, iVar12, 1, 0, 0);
								func_566(get_display_name_from_vehicle_model(Global_1321273[iVar11 /*138*/].f_66), 0);
								if (func_569(&(Global_1321273[iVar11 /*138*/])))
								{
									func_566("VEH_LIVERY", 0);
								}
								if (func_568(Global_1321273[iVar11 /*138*/].f_66, Global_1321273[iVar11 /*138*/].f_77, Global_1321273[iVar11 /*138*/].f_9[10]) && func_567(Global_1321273[iVar11 /*138*/].f_66))
								{
									func_566("VEH_TOPL", 0);
								}
							}
							*uParam0.f_1[iVar0] = iVar10;
							iVar0++;
						}
					}
					else
					{
						func_512(iVar0, "MP_MAN_VEH_S", 0, 1, 0, 0);
						*uParam0.f_1[iVar0] = iVar10;
						set_bit(uParam0.f_67, iVar0);
						iVar0++;
					}
				}
				iVar1++;
			}
			*uParam0.f_71 = iVar0;
			if (*uParam0.f_70 >= *uParam0.f_71)
			{
				*uParam0.f_70 = 0;
			}
			func_459(*uParam0.f_70, 1, 1);
			break;
	}
	func_507(-1);
	func_506(176, "BB_SELECT", -1);
	func_506(177, "BB_BACK", -1);
}

void func_566(char* sParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	
	if (Global_17257.f_5090 >= 256)
	{
		return;
	}
	if (Global_17257.f_5610 >= 4)
	{
		return;
	}
	if (Global_17257.f_5611 != 1)
	{
		return;
	}
	if (Global_17257.f_5610 >= Global_17257.f_5608)
	{
		return;
	}
	StringCopy(&(Global_17257.f_73[Global_17257.f_5090 /*6*/]), sParam0, 24);
	Global_17257.f_5090++;
	Global_17257.f_2124[Global_17257.f_5609 /*5*/][Global_17257.f_5610] = 1;
	Global_17257.f_5610++;
	if (Global_17257.f_5610 >= Global_17257.f_5608)
	{
		fVar0 = func_510();
		if (Global_17257.f_4945[Global_17257.f_5089] && Global_17257.f_5610 == Global_17257.f_5608)
		{
			func_497(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 += fVar1 * 2f;
		}
		if (fVar0 > Global_17257.f_4938[Global_17257.f_5089 - 1])
		{
			Global_17257.f_4938[Global_17257.f_5089 - 1] = fVar0;
		}
	}
	if (iParam1)
	{
		if (Global_17257.f_5610 >= Global_17257.f_5608)
		{
			fVar3 = func_509();
			if (fVar3 > Global_17257.f_5612[Global_17257.f_5088])
			{
				Global_17257.f_5612[Global_17257.f_5088] = fVar3;
			}
		}
	}
}

bool func_567(int iParam0)
{
	switch (iParam0)
	{
		case joaat("faction3"):
			return false;
			break;
	}
	return true;
}

bool func_568(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case joaat("banshee"):
		case joaat("banshee2"):
			if (!is_bit_set(iParam1, true))
			{
				return true;
			}
			break;
		
		case joaat("stinger"):
		case joaat("coquette2"):
		case joaat("coquette3"):
			if (!is_bit_set(iParam1, true))
			{
				return true;
			}
			break;
		
		case joaat("chino"):
		case joaat("voltic"):
		case joaat("stalion"):
		case joaat("chino2"):
		case joaat("faction"):
		case joaat("faction2"):
		case joaat("faction3"):
			if (!is_bit_set(iParam1, true) && !is_bit_set(iParam1, 2))
			{
				return true;
			}
			break;
		
		case joaat("buccaneer2"):
			if ((!is_bit_set(iParam1, true) && !is_bit_set(iParam1, 2)) && !is_bit_set(iParam1, 3))
			{
				return true;
			}
			break;
		
		case joaat("coquette"):
			if (!is_bit_set(iParam1, true) && iParam2 != 1)
			{
				return true;
			}
			break;
		
		case joaat("mamba"):
			if (!is_bit_set(iParam1, 2))
			{
				return true;
			}
			break;
		
		case joaat("pfister811"):
			if (!is_bit_set(iParam1, false) && iParam2 != 1)
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_569(var uParam0)
{
	switch (*uParam0.f_66)
	{
		case joaat("windsor"):
			if (*uParam0.f_67 > 0)
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_570(int iParam0)
{
	switch (iParam0)
	{
		case 86:
		case 87:
		case 88:
		case 89:
		case 90:
			return false;
			break;
	}
	return true;
}

void func_571(int iParam0)
{
	char* sVar0;
	
	sVar0 = func_574(iParam0);
	if (!is_string_null_or_empty(sVar0))
	{
		func_572(1, sVar0, sVar0);
	}
}

void func_572(int iParam0, char* sParam1, char* sParam2)
{
	Global_17257 = iParam0;
	func_573(29, sParam1, sParam2);
}

void func_573(int iParam0, char* sParam1, char* sParam2)
{
	StringCopy(&(Global_17257.f_5886[iParam0 /*16*/]), sParam1, 64);
	StringCopy(&(Global_17257.f_6687[iParam0 /*16*/]), sParam2, 64);
}

char* func_574(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "ShopUI_Title_HighEndSalon";
			break;
		
		case 1:
		case 4:
		case 6:
			return "ShopUI_Title_Barber";
			break;
		
		case 2:
			return "ShopUI_Title_Barber2";
			break;
		
		case 3:
			return "ShopUI_Title_Barber3";
			break;
		
		case 5:
			return "ShopUI_Title_Barber4";
			break;
		
		case 7:
		case 8:
		case 10:
		case 11:
		case 13:
			return "ShopUI_Title_LowEndFashion";
			break;
		
		case 9:
		case 12:
			return "ShopUI_Title_LowEndFashion2";
			break;
		
		case 14:
		case 15:
		case 16:
		case 17:
			return "ShopUI_Title_MidFashion";
			break;
		
		case 18:
		case 19:
		case 20:
			return "ShopUI_Title_HighEndFashion";
			break;
		
		case 21:
			return "ShopUI_Title_Movie_Masks";
			break;
		
		case 22:
			return "ShopUI_Title_Tattoos";
			break;
		
		case 23:
		case 24:
			return "ShopUI_Title_Tattoos2";
			break;
		
		case 25:
			return "ShopUI_Title_Tattoos3";
			break;
		
		case 26:
			return "ShopUI_Title_Tattoos4";
			break;
		
		case 27:
			return "ShopUI_Title_Tattoos5";
			break;
		
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
			return "ShopUI_Title_GunClub";
			break;
		
		case 39:
		case 40:
		case 41:
		case 43:
			return "ShopUI_Title_Carmod";
			break;
		
		case 42:
			return "ShopUI_Title_Carmod2";
			break;
		
		case 44:
			return "ShopUI_Title_Supermod";
			break;
	}
	return "";
}

var func_575()
{
	return Global_91330.f_380;
}

int func_576(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (Global_262145.f_8120)
	{
		if (iParam5)
		{
			return func_581(iParam0, iParam1, iParam2, iParam3, iParam4);
		}
		else
		{
			return func_582(iParam0, iParam1, iParam2, iParam3, iParam4);
		}
	}
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (func_580(iVar1))
		{
		}
		else if (func_542(iVar1, iParam4) >= Global_1049163)
		{
			return -1;
		}
		else if (func_542(iVar1, iParam4) > 0 && func_542(iVar1, iParam4) <= 90)
		{
			iVar2 = 0;
			if ((iParam3 == 0 || iParam3 == -1) || iParam3 == func_542(iVar1, iParam4))
			{
				iVar4 = Global_1049163[func_542(iVar1, iParam4) /*1924*/].f_33;
				if (iParam2)
				{
					if (iVar4 == 10)
					{
						iVar3 = 3;
					}
					else if (iVar4 == 6)
					{
						iVar3 = 2;
					}
					else
					{
						iVar3 = 1;
					}
					iVar2 = 10;
				}
				else
				{
					iVar3 = iVar4;
					iVar2 = 0;
				}
				iVar2 += 13 * iVar1;
				switch (iParam0)
				{
					case 0:
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar6 = -1;
							iVar7 = iVar2 + iVar0;
							if (iParam5)
							{
								func_578(iVar7, &iVar6, iParam4);
							}
							else
							{
								func_563(iVar7, &iVar6, 1);
							}
							if (iVar6 >= 0)
							{
								if (iParam5)
								{
									if (func_1053(func_577(4, iVar6), iParam4, 0) == 0)
									{
										return iVar6;
									}
									else
									{
										iVar5 = func_1053(func_577(1, iVar6), iParam4, 0);
										if (iParam1)
										{
											if (is_bit_set(iVar5, false))
											{
												return iVar6;
											}
										}
									}
								}
								else if (Global_1321273[iVar6 /*138*/].f_66 == 0)
								{
									return iVar7;
								}
								else if (iParam1)
								{
									if (is_bit_set(Global_1321273[iVar6 /*138*/].f_99, false))
									{
										return iVar7;
									}
								}
							}
							else
							{
								return iVar7;
							}
							iVar0++;
						}
						break;
					
					case 1:
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar6 = -1;
							iVar7 = iVar2 + iVar0;
							if (iParam5)
							{
								func_578(iVar7, &iVar6, iParam4);
							}
							else
							{
								func_563(iVar7, &iVar6, 1);
							}
							if (iVar6 >= 0)
							{
								if (iParam5)
								{
									if (func_1053(func_577(4, iVar6), iParam4, 0) == 0)
									{
										return iVar7;
									}
								}
								else if (Global_1321273[iVar6 /*138*/].f_66 == 0)
								{
									return iVar7;
								}
							}
							else
							{
								return iVar7;
							}
							iVar0++;
						}
						if (iParam1)
						{
							iVar0 = 0;
							while (iVar0 < iVar3)
							{
								iVar6 = -1;
								iVar7 = iVar2 + iVar0;
								if (iParam5)
								{
									func_578(iVar7, &iVar6, iParam4);
								}
								else
								{
									func_563(iVar7, &iVar6, 1);
								}
								if (iVar6 >= 0)
								{
									if (iParam5)
									{
										iVar5 = func_1053(func_577(1, iVar6), iParam4, 0);
										if (is_bit_set(iVar5, false))
										{
											return iVar7;
										}
									}
									else if (is_bit_set(Global_1321273[iVar6 /*138*/].f_99, false))
									{
										return iVar7;
									}
								}
								else
								{
									return iVar7;
								}
								iVar0++;
							}
						}
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar6 = -1;
							iVar7 = iVar2 + iVar0;
							if (iParam5)
							{
								func_578(iVar7, &iVar6, iParam4);
							}
							else
							{
								func_563(iVar7, &iVar6, 1);
							}
							if (iVar6 >= 0)
							{
								if (iParam5)
								{
									iVar5 = func_1053(func_577(1, iVar6), iParam4, 0);
									if (is_bit_set(iVar5, true) && !is_bit_set(iVar5, 2))
									{
										return iVar7;
									}
								}
								else if (is_bit_set(Global_1321273[iVar6 /*138*/].f_99, true) && !is_bit_set(Global_1321273[iVar6 /*138*/].f_99, 2))
								{
									return iVar7;
								}
							}
							else
							{
								return iVar7;
							}
							iVar0++;
						}
						break;
					
					case 2:
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar6 = -1;
							iVar7 = iVar2 + iVar0;
							if (iParam5)
							{
								func_578(iVar7, &iVar6, iParam4);
							}
							else
							{
								func_563(iVar7, &iVar6, 1);
							}
							if (iVar6 >= 0)
							{
								if (iParam5)
								{
									if (func_1053(func_577(4, iVar6), iParam4, 0) == 0)
									{
										return iVar7;
									}
									else
									{
										iVar5 = func_1053(func_577(1, iVar6), iParam4, 0);
										if (iParam1)
										{
											if (is_bit_set(iVar5, false))
											{
												return iVar7;
											}
											else if (is_bit_set(iVar5, true))
											{
												return iVar7;
											}
										}
										else if (is_bit_set(iVar5, true))
										{
											return iVar7;
										}
									}
								}
								else if (Global_1321273[iVar6 /*138*/].f_66 == 0)
								{
									return iVar7;
								}
								else if (iParam1)
								{
									if (is_bit_set(Global_1321273[iVar6 /*138*/].f_99, false))
									{
										return iVar7;
									}
									else if (is_bit_set(Global_1321273[iVar6 /*138*/].f_99, true))
									{
										return iVar7;
									}
								}
								else if (is_bit_set(Global_1321273[iVar6 /*138*/].f_99, true))
								{
									return iVar7;
								}
							}
							else
							{
								return iVar7;
							}
							iVar0++;
						}
						break;
					}
				}
		}
		iVar1++;
	}
	return -1;
}

int func_577(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return 1622;
				
				case 1:
					return 1629;
				
				case 2:
					return 1636;
				
				case 3:
					return 1643;
				
				case 4:
					return 1650;
				
				case 5:
					return 1657;
				
				case 6:
					return 1664;
				
				case 7:
					return 1671;
				
				case 8:
					return 1678;
				
				case 9:
					return 1685;
				
				case 10:
					return 1692;
				
				case 11:
					return 1698;
				
				case 12:
					return 1704;
				
				case 13:
					return 1710;
				
				case 14:
					return 1787;
				
				case 15:
					return 1794;
				
				case 16:
					return 1801;
				
				case 17:
					return 1808;
				
				case 18:
					return 1815;
				
				case 19:
					return 1822;
				
				case 20:
					return 1829;
				
				case 21:
					return 1836;
				
				case 22:
					return 1843;
				
				case 23:
					return 1850;
				
				case 24:
					return 1856;
				
				case 25:
					return 1862;
				
				case 26:
					return 2157;
				
				case 27:
					return 2164;
				
				case 28:
					return 2171;
				
				case 29:
					return 2178;
				
				case 30:
					return 2185;
				
				case 31:
					return 2192;
				
				case 32:
					return 2199;
				
				case 33:
					return 2206;
				
				case 34:
					return 2213;
				
				case 35:
					return 2220;
				
				case 36:
					return 2227;
				
				case 37:
					return 2233;
				
				case 38:
					return 2239;
				
				case 39:
					return 2806;
				
				case 40:
					return 2813;
				
				case 41:
					return 2820;
				
				case 42:
					return 2827;
				
				case 43:
					return 2834;
				
				case 44:
					return 2841;
				
				case 45:
					return 2848;
				
				case 46:
					return 2855;
				
				case 47:
					return 2862;
				
				case 48:
					return 2869;
				
				case 49:
					return 2876;
				
				case 50:
					return 2882;
				
				case 51:
					return 2888;
				
				case 52:
					return 2930;
				
				case 53:
					return 2937;
				
				case 54:
					return 2944;
				
				case 55:
					return 2951;
				
				case 56:
					return 2958;
				
				case 57:
					return 2965;
				
				case 58:
					return 2972;
				
				case 59:
					return 2979;
				
				case 60:
					return 2986;
				
				case 61:
					return 2993;
				
				case 62:
					return 3000;
				
				case 63:
					return 3006;
				
				case 64:
					return 3012;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 1623;
				
				case 1:
					return 1630;
				
				case 2:
					return 1637;
				
				case 3:
					return 1644;
				
				case 4:
					return 1651;
				
				case 5:
					return 1658;
				
				case 6:
					return 1665;
				
				case 7:
					return 1672;
				
				case 8:
					return 1679;
				
				case 9:
					return 1686;
				
				case 10:
					return 1693;
				
				case 11:
					return 1699;
				
				case 12:
					return 1705;
				
				case 13:
					return 1711;
				
				case 14:
					return 1788;
				
				case 15:
					return 1795;
				
				case 16:
					return 1802;
				
				case 17:
					return 1809;
				
				case 18:
					return 1816;
				
				case 19:
					return 1823;
				
				case 20:
					return 1830;
				
				case 21:
					return 1837;
				
				case 22:
					return 1844;
				
				case 23:
					return 1851;
				
				case 24:
					return 1857;
				
				case 25:
					return 1863;
				
				case 26:
					return 2158;
				
				case 27:
					return 2165;
				
				case 28:
					return 2172;
				
				case 29:
					return 2179;
				
				case 30:
					return 2186;
				
				case 31:
					return 2193;
				
				case 32:
					return 2200;
				
				case 33:
					return 2207;
				
				case 34:
					return 2214;
				
				case 35:
					return 2221;
				
				case 36:
					return 2228;
				
				case 37:
					return 2234;
				
				case 38:
					return 2240;
				
				case 39:
					return 2807;
				
				case 40:
					return 2814;
				
				case 41:
					return 2821;
				
				case 42:
					return 2828;
				
				case 43:
					return 2835;
				
				case 44:
					return 2842;
				
				case 45:
					return 2849;
				
				case 46:
					return 2856;
				
				case 47:
					return 2863;
				
				case 48:
					return 2870;
				
				case 49:
					return 2877;
				
				case 50:
					return 2883;
				
				case 51:
					return 2889;
				
				case 52:
					return 2931;
				
				case 53:
					return 2938;
				
				case 54:
					return 2945;
				
				case 55:
					return 2952;
				
				case 56:
					return 2959;
				
				case 57:
					return 2966;
				
				case 58:
					return 2973;
				
				case 59:
					return 2980;
				
				case 60:
					return 2987;
				
				case 61:
					return 2994;
				
				case 62:
					return 3001;
				
				case 63:
					return 3007;
				
				case 64:
					return 3013;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 1624;
				
				case 1:
					return 1631;
				
				case 2:
					return 1638;
				
				case 3:
					return 1645;
				
				case 4:
					return 1652;
				
				case 5:
					return 1659;
				
				case 6:
					return 1666;
				
				case 7:
					return 1673;
				
				case 8:
					return 1680;
				
				case 9:
					return 1687;
				
				case 10:
					return 1694;
				
				case 11:
					return 1700;
				
				case 12:
					return 1706;
				
				case 13:
					return 1712;
				
				case 14:
					return 1789;
				
				case 15:
					return 1796;
				
				case 16:
					return 1803;
				
				case 17:
					return 1810;
				
				case 18:
					return 1817;
				
				case 19:
					return 1824;
				
				case 20:
					return 1831;
				
				case 21:
					return 1838;
				
				case 22:
					return 1845;
				
				case 23:
					return 1852;
				
				case 24:
					return 1858;
				
				case 25:
					return 1864;
				
				case 26:
					return 2159;
				
				case 27:
					return 2166;
				
				case 28:
					return 2173;
				
				case 29:
					return 2180;
				
				case 30:
					return 2187;
				
				case 31:
					return 2194;
				
				case 32:
					return 2201;
				
				case 33:
					return 2208;
				
				case 34:
					return 2215;
				
				case 35:
					return 2222;
				
				case 36:
					return 2229;
				
				case 37:
					return 2235;
				
				case 38:
					return 2241;
				
				case 39:
					return 2808;
				
				case 40:
					return 2815;
				
				case 41:
					return 2822;
				
				case 42:
					return 2829;
				
				case 43:
					return 2836;
				
				case 44:
					return 2843;
				
				case 45:
					return 2850;
				
				case 46:
					return 2857;
				
				case 47:
					return 2864;
				
				case 48:
					return 2871;
				
				case 49:
					return 2878;
				
				case 50:
					return 2884;
				
				case 51:
					return 2890;
				
				case 52:
					return 2932;
				
				case 53:
					return 2939;
				
				case 54:
					return 2946;
				
				case 55:
					return 2953;
				
				case 56:
					return 2960;
				
				case 57:
					return 2967;
				
				case 58:
					return 2974;
				
				case 59:
					return 2981;
				
				case 60:
					return 2988;
				
				case 61:
					return 2995;
				
				case 62:
					return 3002;
				
				case 63:
					return 3008;
				
				case 64:
					return 3014;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return 1625;
				
				case 1:
					return 1632;
				
				case 2:
					return 1639;
				
				case 3:
					return 1646;
				
				case 4:
					return 1653;
				
				case 5:
					return 1660;
				
				case 6:
					return 1667;
				
				case 7:
					return 1674;
				
				case 8:
					return 1681;
				
				case 9:
					return 1688;
				
				case 10:
					return 1695;
				
				case 11:
					return 1701;
				
				case 12:
					return 1707;
				
				case 13:
					return 1713;
				
				case 14:
					return 1790;
				
				case 15:
					return 1797;
				
				case 16:
					return 1804;
				
				case 17:
					return 1811;
				
				case 18:
					return 1818;
				
				case 19:
					return 1825;
				
				case 20:
					return 1832;
				
				case 21:
					return 1839;
				
				case 22:
					return 1846;
				
				case 23:
					return 1853;
				
				case 24:
					return 1859;
				
				case 25:
					return 1865;
				
				case 26:
					return 2160;
				
				case 27:
					return 2167;
				
				case 28:
					return 2174;
				
				case 29:
					return 2181;
				
				case 30:
					return 2188;
				
				case 31:
					return 2195;
				
				case 32:
					return 2202;
				
				case 33:
					return 2209;
				
				case 34:
					return 2216;
				
				case 35:
					return 2223;
				
				case 36:
					return 2230;
				
				case 37:
					return 2236;
				
				case 38:
					return 2242;
				
				case 39:
					return 2809;
				
				case 40:
					return 2816;
				
				case 41:
					return 2823;
				
				case 42:
					return 2830;
				
				case 43:
					return 2837;
				
				case 44:
					return 2844;
				
				case 45:
					return 2851;
				
				case 46:
					return 2858;
				
				case 47:
					return 2865;
				
				case 48:
					return 2872;
				
				case 49:
					return 2879;
				
				case 50:
					return 2885;
				
				case 51:
					return 2891;
				
				case 52:
					return 2933;
				
				case 53:
					return 2940;
				
				case 54:
					return 2947;
				
				case 55:
					return 2954;
				
				case 56:
					return 2961;
				
				case 57:
					return 2968;
				
				case 58:
					return 2975;
				
				case 59:
					return 2982;
				
				case 60:
					return 2989;
				
				case 61:
					return 2996;
				
				case 62:
					return 3003;
				
				case 63:
					return 3009;
				
				case 64:
					return 3015;
				
				default:
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return 1626;
				
				case 1:
					return 1633;
				
				case 2:
					return 1640;
				
				case 3:
					return 1647;
				
				case 4:
					return 1654;
				
				case 5:
					return 1661;
				
				case 6:
					return 1668;
				
				case 7:
					return 1675;
				
				case 8:
					return 1682;
				
				case 9:
					return 1689;
				
				case 10:
					return 1696;
				
				case 11:
					return 1702;
				
				case 12:
					return 1708;
				
				case 13:
					return 1714;
				
				case 14:
					return 1791;
				
				case 15:
					return 1798;
				
				case 16:
					return 1805;
				
				case 17:
					return 1812;
				
				case 18:
					return 1819;
				
				case 19:
					return 1826;
				
				case 20:
					return 1833;
				
				case 21:
					return 1840;
				
				case 22:
					return 1847;
				
				case 23:
					return 1854;
				
				case 24:
					return 1860;
				
				case 25:
					return 1866;
				
				case 26:
					return 2161;
				
				case 27:
					return 2168;
				
				case 28:
					return 2175;
				
				case 29:
					return 2182;
				
				case 30:
					return 2189;
				
				case 31:
					return 2196;
				
				case 32:
					return 2203;
				
				case 33:
					return 2210;
				
				case 34:
					return 2217;
				
				case 35:
					return 2224;
				
				case 36:
					return 2231;
				
				case 37:
					return 2237;
				
				case 38:
					return 2243;
				
				case 39:
					return 2810;
				
				case 40:
					return 2817;
				
				case 41:
					return 2824;
				
				case 42:
					return 2831;
				
				case 43:
					return 2838;
				
				case 44:
					return 2845;
				
				case 45:
					return 2852;
				
				case 46:
					return 2859;
				
				case 47:
					return 2866;
				
				case 48:
					return 2873;
				
				case 49:
					return 2880;
				
				case 50:
					return 2886;
				
				case 51:
					return 2892;
				
				case 52:
					return 2934;
				
				case 53:
					return 2941;
				
				case 54:
					return 2948;
				
				case 55:
					return 2955;
				
				case 56:
					return 2962;
				
				case 57:
					return 2969;
				
				case 58:
					return 2976;
				
				case 59:
					return 2983;
				
				case 60:
					return 2990;
				
				case 61:
					return 2997;
				
				case 62:
					return 3004;
				
				case 63:
					return 3010;
				
				case 64:
					return 3016;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return 1628;
				
				case 1:
					return 1635;
				
				case 2:
					return 1642;
				
				case 3:
					return 1649;
				
				case 4:
					return 1656;
				
				case 5:
					return 1663;
				
				case 6:
					return 1670;
				
				case 7:
					return 1677;
				
				case 8:
					return 1684;
				
				case 9:
					return 1691;
				
				case 13:
					return 1716;
				
				case 14:
					return 1793;
				
				case 15:
					return 1800;
				
				case 16:
					return 1807;
				
				case 17:
					return 1814;
				
				case 18:
					return 1821;
				
				case 19:
					return 1828;
				
				case 20:
					return 1835;
				
				case 21:
					return 1842;
				
				case 22:
					return 1849;
				
				case 26:
					return 2163;
				
				case 27:
					return 2170;
				
				case 28:
					return 2177;
				
				case 29:
					return 2184;
				
				case 30:
					return 2191;
				
				case 31:
					return 2198;
				
				case 32:
					return 2205;
				
				case 33:
					return 2212;
				
				case 34:
					return 2219;
				
				case 35:
					return 2226;
				
				case 39:
					return 2812;
				
				case 40:
					return 2819;
				
				case 41:
					return 2826;
				
				case 42:
					return 2833;
				
				case 43:
					return 2840;
				
				case 44:
					return 2847;
				
				case 45:
					return 2854;
				
				case 46:
					return 2861;
				
				case 47:
					return 2868;
				
				case 48:
					return 2875;
				
				case 52:
					return 2936;
				
				case 53:
					return 2943;
				
				case 54:
					return 2950;
				
				case 55:
					return 2957;
				
				case 56:
					return 2964;
				
				case 57:
					return 2971;
				
				case 58:
					return 2978;
				
				case 59:
					return 2985;
				
				case 60:
					return 2992;
				
				case 61:
					return 2999;
				
				default:
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					return 1627;
				
				case 1:
					return 1634;
				
				case 2:
					return 1641;
				
				case 3:
					return 1648;
				
				case 4:
					return 1655;
				
				case 5:
					return 1662;
				
				case 6:
					return 1669;
				
				case 7:
					return 1676;
				
				case 8:
					return 1683;
				
				case 9:
					return 1690;
				
				case 10:
					return 1697;
				
				case 11:
					return 1703;
				
				case 12:
					return 1709;
				
				case 13:
					return 1715;
				
				case 14:
					return 1792;
				
				case 15:
					return 1799;
				
				case 16:
					return 1806;
				
				case 17:
					return 1813;
				
				case 18:
					return 1820;
				
				case 19:
					return 1827;
				
				case 20:
					return 1834;
				
				case 21:
					return 1841;
				
				case 22:
					return 1848;
				
				case 23:
					return 1855;
				
				case 24:
					return 1861;
				
				case 25:
					return 1867;
				
				case 26:
					return 2162;
				
				case 27:
					return 2169;
				
				case 28:
					return 2176;
				
				case 29:
					return 2183;
				
				case 30:
					return 2190;
				
				case 31:
					return 2197;
				
				case 32:
					return 2204;
				
				case 33:
					return 2211;
				
				case 34:
					return 2218;
				
				case 35:
					return 2225;
				
				case 36:
					return 2232;
				
				case 37:
					return 2238;
				
				case 38:
					return 2244;
				
				case 39:
					return 2811;
				
				case 40:
					return 2818;
				
				case 41:
					return 2825;
				
				case 42:
					return 2832;
				
				case 43:
					return 2839;
				
				case 44:
					return 2846;
				
				case 45:
					return 2853;
				
				case 46:
					return 2860;
				
				case 47:
					return 2867;
				
				case 48:
					return 2874;
				
				case 49:
					return 2881;
				
				case 50:
					return 2887;
				
				case 51:
					return 2893;
				
				case 52:
					return 2935;
				
				case 53:
					return 2942;
				
				case 54:
					return 2949;
				
				case 55:
					return 2956;
				
				case 56:
					return 2963;
				
				case 57:
					return 2970;
				
				case 58:
					return 2977;
				
				case 59:
					return 2984;
				
				case 60:
					return 2991;
				
				case 61:
					return 2998;
				
				case 62:
					return 3005;
				
				case 63:
					return 3011;
				
				case 64:
					return 3017;
				
				default:
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 0:
					return 3737;
				
				case 1:
					return 3738;
				
				case 2:
					return 3739;
				
				case 3:
					return 3740;
				
				case 4:
					return 3741;
				
				case 5:
					return 3742;
				
				case 6:
					return 3743;
				
				case 7:
					return 3744;
				
				case 8:
					return 3745;
				
				case 9:
					return 3746;
				
				case 10:
					return 3747;
				
				case 11:
					return 3748;
				
				case 12:
					return 3749;
				
				case 13:
					return 3750;
				
				case 14:
					return 3751;
				
				case 15:
					return 3752;
				
				case 16:
					return 3753;
				
				case 17:
					return 3754;
				
				case 18:
					return 3755;
				
				case 19:
					return 3756;
				
				case 20:
					return 3757;
				
				case 21:
					return 3758;
				
				case 22:
					return 3759;
				
				case 23:
					return 3760;
				
				case 24:
					return 3761;
				
				case 25:
					return 3762;
				
				case 26:
					return 2246;
				
				case 27:
					return 2247;
				
				case 28:
					return 2248;
				
				case 29:
					return 2249;
				
				case 30:
					return 2250;
				
				case 31:
					return 2251;
				
				case 32:
					return 2252;
				
				case 33:
					return 2253;
				
				case 34:
					return 2254;
				
				case 35:
					return 2255;
				
				case 36:
					return 2256;
				
				case 37:
					return 2257;
				
				case 38:
					return 2258;
				
				case 39:
					return 2894;
				
				case 40:
					return 2895;
				
				case 41:
					return 2896;
				
				case 42:
					return 2897;
				
				case 43:
					return 2898;
				
				case 44:
					return 2899;
				
				case 45:
					return 2900;
				
				case 46:
					return 2901;
				
				case 47:
					return 2902;
				
				case 48:
					return 2903;
				
				case 49:
					return 2904;
				
				case 50:
					return 2905;
				
				case 51:
					return 2906;
				
				case 52:
					return 3018;
				
				case 53:
					return 3019;
				
				case 54:
					return 3020;
				
				case 55:
					return 3021;
				
				case 56:
					return 3022;
				
				case 57:
					return 3023;
				
				case 58:
					return 3024;
				
				case 59:
					return 3025;
				
				case 60:
					return 3026;
				
				case 61:
					return 3027;
				
				case 62:
					return 3028;
				
				case 63:
					return 3029;
				
				case 64:
					return 3030;
				
				default:
			}
			break;
	}
	return 1622;
}

void func_578(int iParam0, int iParam1, int iParam2)
{
	*iParam1 = func_1055(func_579(iParam0), iParam2, -1) - 1;
}

int func_579(int iParam0)
{
	if (iParam0 <= 38)
	{
		return 4036 + iParam0;
	}
	else if (iParam0 <= 48)
	{
		return 5905 + iParam0 - 39;
	}
	else if (iParam0 <= 51)
	{
		return 6025 + iParam0 - 49;
	}
	else if (iParam0 <= 65)
	{
		return 7199 + iParam0 - 52;
	}
	return 4036 + iParam0;
}

bool func_580(int iParam0)
{
	switch (iParam0)
	{
		case 5:
		case 99:
			return true;
			break;
	}
	return false;
}

int func_581(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar6 = func_447();
	iVar6 = true;
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if ((iVar6 || func_542(iVar1, iParam4) > 0) && !func_580(iVar1))
		{
			iVar2 = 0;
			if ((iVar6 || iParam3 == 0) || iParam3 == func_542(iVar1, iParam4))
			{
				if (iVar6)
				{
					iVar4 = 10;
				}
				else
				{
					iVar4 = Global_1049163[func_542(iVar1, iParam4) /*1924*/].f_33;
				}
				if (iParam2)
				{
					if (iVar4 == 10)
					{
						iVar3 = 3;
					}
					else if (iVar4 == 6)
					{
						iVar3 = 2;
					}
					else
					{
						iVar3 = 1;
					}
					iVar2 = 10;
				}
				else
				{
					iVar3 = iVar4;
					iVar2 = 0;
				}
				iVar2 += 13 * iVar1;
				switch (iParam0)
				{
					case 0:
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar7 = iVar2 + iVar0;
							if (func_1053(func_577(4, iVar7), iParam4, 0) == 0)
							{
								return iVar7;
							}
							else
							{
								iVar5 = func_1053(func_577(1, iVar7), iParam4, 0);
								if (iParam1)
								{
									if (is_bit_set(iVar5, false))
									{
										return iVar7;
									}
								}
							}
							iVar0++;
						}
						break;
					
					case 1:
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar7 = iVar2 + iVar0;
							if (func_1053(func_577(4, iVar7), iParam4, 0) == 0)
							{
								return iVar7;
							}
							iVar0++;
						}
						if (iParam1)
						{
							iVar0 = 0;
							while (iVar0 < iVar3)
							{
								iVar7 = iVar2 + iVar0;
								iVar5 = func_1053(func_577(1, iVar7), iParam4, 0);
								if (is_bit_set(iVar5, false))
								{
									return iVar7;
								}
								iVar0++;
							}
						}
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar7 = iVar2 + iVar0;
							iVar5 = func_1053(func_577(1, iVar7), iParam4, 0);
							if (is_bit_set(iVar5, true) && !is_bit_set(iVar5, 2))
							{
								return iVar7;
							}
							iVar0++;
						}
						break;
					
					case 2:
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar7 = iVar2 + iVar0;
							if (func_1053(func_577(4, iVar7), iParam4, 0) == 0)
							{
								return iVar7;
							}
							else
							{
								iVar5 = func_1053(func_577(1, iVar7), iParam4, 0);
								if (iParam1)
								{
									if (is_bit_set(iVar5, false))
									{
										return iVar7;
									}
									else if (is_bit_set(iVar5, true))
									{
										return iVar7;
									}
								}
								else if (is_bit_set(iVar5, true))
								{
									return iVar7;
								}
							}
							iVar0++;
						}
						break;
					}
				}
		}
		iVar1++;
	}
	return -1;
}

int func_582(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar5 = func_447();
	iVar5 = true;
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (func_580(iVar1))
		{
		}
		else if (!iVar5 && func_542(iVar1, iParam4) >= Global_1049163)
		{
			return -1;
		}
		else if (iVar5 || (func_542(iVar1, iParam4) > 0 && func_542(iVar1, iParam4) <= 90))
		{
			iVar2 = 0;
			if ((iVar5 || iParam3 == 0) || iParam3 == func_542(iVar1, iParam4))
			{
				if (iVar5)
				{
					iVar4 = 10;
				}
				else
				{
					iVar4 = Global_1049163[func_542(iVar1, iParam4) /*1924*/].f_33;
				}
				if (iParam2)
				{
					if (iVar4 == 10)
					{
						iVar3 = 3;
					}
					else if (iVar4 == 6)
					{
						iVar3 = 2;
					}
					else
					{
						iVar3 = 1;
					}
					iVar2 = 10;
				}
				else
				{
					iVar3 = iVar4;
					iVar2 = 0;
				}
				iVar2 += 13 * iVar1;
				switch (iParam0)
				{
					case 0:
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar6 = iVar2 + iVar0;
							if (Global_1321273[iVar6 /*138*/].f_66 == 0)
							{
								return iVar6;
							}
							else if (iParam1)
							{
								if (is_bit_set(Global_1321273[iVar6 /*138*/].f_99, false))
								{
									return iVar6;
								}
							}
							iVar0++;
						}
						break;
					
					case 1:
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar6 = iVar2 + iVar0;
							if (Global_1321273[iVar6 /*138*/].f_66 == 0)
							{
								return iVar6;
							}
							iVar0++;
						}
						if (iParam1)
						{
							iVar0 = 0;
							while (iVar0 < iVar3)
							{
								iVar6 = iVar2 + iVar0;
								if (is_bit_set(Global_1321273[iVar6 /*138*/].f_99, false))
								{
									return iVar6;
								}
								iVar0++;
							}
						}
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar6 = iVar2 + iVar0;
							if (is_bit_set(Global_1321273[iVar6 /*138*/].f_99, true) && !is_bit_set(Global_1321273[iVar6 /*138*/].f_99, 2))
							{
								return iVar6;
							}
							iVar0++;
						}
						break;
					
					case 2:
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar6 = iVar2 + iVar0;
							if (Global_1321273[iVar6 /*138*/].f_66 == 0)
							{
								return iVar6;
							}
							else if (iParam1)
							{
								if (is_bit_set(Global_1321273[iVar6 /*138*/].f_99, false))
								{
									return iVar6;
								}
								else if (is_bit_set(Global_1321273[iVar6 /*138*/].f_99, true))
								{
									return iVar6;
								}
							}
							else if (is_bit_set(Global_1321273[iVar6 /*138*/].f_99, true))
							{
								return iVar6;
							}
							iVar0++;
						}
						break;
					}
				}
		}
		iVar1++;
	}
	return -1;
}

void func_583()
{
	func_372(1717, Global_2097152[func_49() /*10375*/].f_5383, -1, 1);
	func_372(1718, Global_2097152[func_49() /*10375*/].f_5383.f_1[0], -1, 1);
	func_372(1719, Global_2097152[func_49() /*10375*/].f_5383.f_1[1], -1, 1);
	func_372(1720, Global_2097152[func_49() /*10375*/].f_5383.f_1[2], -1, 1);
}

void func_584()
{
	if (!Global_2460486.f_4660.f_136)
	{
		Global_2460486.f_4660.f_136 = 1;
	}
}

void func_585(int iParam0)
{
	if (iParam0 != -1)
	{
		set_bit(&(Global_2097152[func_49() /*10375*/].f_5383.f_1[iParam0 / 32]), iParam0 % 32);
		Global_2097152[func_49() /*10375*/].f_5383 = _get_posix_time();
		func_583();
		func_586();
	}
}

void func_586()
{
}

void func_587(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<6> Var1;
	struct<16> Var7;
	int iVar23;
	char[24] cVar24;
	int iVar30;
	int iVar31;
	
	StringCopy(&Var7, func_595(iParam0), 64);
	if (iParam0 == 166)
	{
		StringCopy(&Var7, func_595(165), 64);
	}
	iVar23 = false;
	if (func_636(iParam0, iParam1) != -1)
	{
		iVar0 = 41;
		iVar23 = true;
	}
	switch (iParam2)
	{
		case 10:
			iVar0 = 138;
			if (iVar23)
			{
				StringCopy(&Var1, "TXT_CAR_BASEPEG", 24);
			}
			else
			{
				StringCopy(&Var1, "TXT_CAR_GARN", 24);
			}
			break;
		
		case 11:
			iVar0 = 141;
			if (iVar23)
			{
				StringCopy(&Var1, "TXT_CAR_BASEPEG", 24);
			}
			else
			{
				StringCopy(&Var1, "TXT_CAR_GARN", 24);
			}
			break;
		
		case 12:
			iVar0 = 140;
			if (iVar23)
			{
				StringCopy(&Var1, "TXT_CAR_BASEPEG", 24);
			}
			else
			{
				StringCopy(&Var1, "TXT_CAR_GARN", 24);
			}
			break;
		
		case 13:
			iVar0 = 139;
			if (iVar23)
			{
				StringCopy(&Var1, "TXT_CAR_BASEPEG", 24);
			}
			else
			{
				StringCopy(&Var1, "TXT_CAR_GARN", 24);
			}
			break;
		
		case 15:
			iVar0 = 142;
			if (iVar23)
			{
				StringCopy(&Var1, "TXT_CAR_BASEPEG", 24);
			}
			else
			{
				StringCopy(&Var1, "TXT_CAR_GARN", 24);
			}
			break;
		
		case 16:
			iVar0 = 143;
			if (iVar23)
			{
				StringCopy(&Var1, "TXT_CAR_BASEPEG", 24);
			}
			else
			{
				StringCopy(&Var1, "TXT_CAR_GARN", 24);
				if (!func_594(iParam0))
				{
					StringCopy(&cVar24, "", 24);
					switch (iParam1)
					{
						case 1:
							StringCopy(&cVar24, "TXT_CAR_GARN0", 24);
							break;
						
						case 2:
							StringCopy(&cVar24, "TXT_CAR_GARN1", 24);
							break;
						
						case 3:
							StringCopy(&cVar24, "TXT_CAR_GARN2", 24);
							break;
						
						case 4:
							StringCopy(&cVar24, "TXT_CAR_GARN3", 24);
							break;
						
						case 5:
							StringCopy(&cVar24, "TXT_CAR_GARN4", 24);
							break;
						
						case 6:
							StringCopy(&cVar24, "TXT_CAR_GARN5", 24);
							break;
						
						case 7:
							StringCopy(&cVar24, "TXT_CAR_GARN6", 24);
							break;
						
						case 8:
							StringCopy(&cVar24, "TXT_CAR_GARN7", 24);
							break;
					}
					if (!is_string_null_or_empty(&cVar24) && does_text_label_exist(&cVar24))
					{
						Var1 = {cVar24};
					}
				}
			}
			break;
		
		case 26:
			iVar0 = 81;
			if (iVar23)
			{
				StringCopy(&Var1, "TXT_CAR_BASEPEG", 24);
			}
			else
			{
				StringCopy(&Var1, "TXT_CAR_GARN", 24);
			}
			break;
		
		default:
			break;
	}
	if (_get_ui_language_id() == 7 || _get_ui_language_id() == 10)
	{
		if (iVar23)
		{
			StringCopy(&Var1, "TXT_VEH_BASEPEG", 24);
		}
		else
		{
			StringCopy(&Var1, "TXT_VEH_GARN", 24);
		}
		StringCopy(&Var7, "", 64);
	}
	if (func_636(iParam0, iParam1) != -1)
	{
		if (iParam0 == 245)
		{
			func_590(iParam2, iParam0, &Var7, 0);
			if (!iLocal_513)
			{
				if (!Global_262145.f_10579)
				{
					if (!func_263(79, 3))
					{
						iVar30 = false;
						iVar31 = func_1053(2511, -1, 0);
						if (!is_bit_set(iVar31, 17))
						{
							set_bit(&iVar31, 17);
							func_372(2511, iVar31, -1, 1);
							iVar30 = true;
						}
						func_205(79, 3, iVar30);
					}
					if (get_entity_model(player_ped_id()) == joaat("mp_m_freemode_01"))
					{
						StringCopy(&Var1, "TXT_YACHT_M", 24);
					}
					else
					{
						StringCopy(&Var1, "TXT_YACHT_F", 24);
					}
					func_588(79, &Var1, &Var7, "", 3000, -1, -1);
				}
			}
		}
		else
		{
			func_590(iParam2, iParam0, &Var7, 1);
			func_588(iVar0, &Var1, &Var7, "", 120000, -1, -1);
		}
	}
	else if (iParam3 == -1)
	{
	}
	else
	{
		func_590(iParam2, iParam0, &Var7, 0);
		func_588(iVar0, &Var1, &Var7, "", 120000, 1, iParam3);
	}
	func_1044(0);
	if (_is_input_just_disabled(2))
	{
		_push_scaleform_movie_function(iLocal_507, "SET_MOUSE_INPUT");
		_push_scaleform_movie_function_parameter_float(get_disabled_control_normal(2, 239));
		_push_scaleform_movie_function_parameter_float(get_disabled_control_normal(2, 240));
		_pop_scaleform_movie_function_void();
	}
	else
	{
		_push_scaleform_movie_function(iLocal_507, "SET_ANALOG_STICK_INPUT");
		_push_scaleform_movie_function_parameter_float(0f);
		_push_scaleform_movie_function_parameter_float(0f);
		_push_scaleform_movie_function_parameter_float(0f);
		_pop_scaleform_movie_function_void();
		fLocal_541 = 0f;
	}
	func_891(1, 0);
	wait(0);
}

void func_588(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar1 = -1;
	iVar2 = -1;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_589(&(Global_2460486.f_2103[iVar0 /*44*/].f_41)))
		{
			if (are_strings_equal(&(Global_2460486.f_2103[iVar0 /*44*/]), sParam1))
			{
				if (iParam6 != -1)
				{
					if (iParam6 == Global_2460486.f_2103[iVar0 /*44*/].f_40)
					{
						iVar1 = iVar0;
						iVar4 = true;
					}
				}
			}
		}
		if (!func_589(&(Global_2460486.f_2103[iVar0 /*44*/].f_41)))
		{
			if (iVar2 == -1)
			{
				iVar2 = iVar0;
			}
		}
		if (iVar4)
		{
			iVar0 = 39;
		}
		iVar0++;
	}
	iVar3 = iVar1;
	if (iVar3 == -1)
	{
		iVar3 = iVar2;
	}
	if (iVar3 >= 0)
	{
		Global_2460486.f_2103[iVar3 /*44*/].f_6 = iParam0;
		StringCopy(&(Global_2460486.f_2103[iVar3 /*44*/]), sParam1, 24);
		StringCopy(&(Global_2460486.f_2103[iVar3 /*44*/].f_7), sParam2, 64);
		StringCopy(&(Global_2460486.f_2103[iVar3 /*44*/].f_23), sParam3, 64);
		Global_2460486.f_2103[iVar3 /*44*/].f_39 = iParam5;
		Global_2460486.f_2103[iVar3 /*44*/].f_40 = iParam6;
		func_463(&(Global_2460486.f_2103[iVar3 /*44*/].f_41), 1, 0);
		Global_2460486.f_2103[iVar3 /*44*/].f_43 = iParam4;
	}
}

var func_589(var uParam0)
{
	return *uParam0.f_1;
}

void func_590(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	char[32] cVar0;
	char[32] cVar8;
	char[64] cVar16;
	
	if (network_is_game_in_progress())
	{
		func_593();
		StringCopy(&cVar0, "", 32);
		StringCopy(&cVar8, "", 32);
		StringCopy(&cVar16, "", 64);
		if (iParam3)
		{
			StringCopy(&cVar0, _get_label_text(&(Global_101154.f_32575[41 /*29*/].f_7)), 32);
			StringCopy(&cVar8, "DELVIRLP", 32);
			if (is_string_null_or_empty(sParam2))
			{
				StringCopy(&cVar8, "DELVIRLB", 32);
			}
		}
		else
		{
			if (iParam1 == 245)
			{
				if (!iLocal_513)
				{
					if (func_591())
					{
						StringCopy(&cVar8, "DELVIRLY", 32);
					}
					else
					{
						StringCopy(&cVar8, "DELVIRLYS", 32);
					}
				}
				else
				{
					StringCopy(&cVar8, "DELVIRLYR", 32);
				}
				cVar16 = {func_1054(54, 56, -1)};
				if (is_string_null_or_empty(&cVar16))
				{
					StringConCat(&cVar8, "a", 32);
				}
			}
			else
			{
				StringCopy(&cVar8, "DELVIRL", 32);
				if (is_string_null_or_empty(sParam2))
				{
					StringCopy(&cVar8, "DELVIRLG", 32);
				}
			}
			switch (iParam0)
			{
				case 10:
					StringCopy(&cVar0, "CHAR_CARSITE", 32);
					break;
				
				case 11:
					StringCopy(&cVar0, "CHAR_PLANESITE", 32);
					break;
				
				case 12:
					StringCopy(&cVar0, "CHAR_MILSITE", 32);
					break;
				
				case 13:
					StringCopy(&cVar0, "CHAR_BOATSITE", 32);
					break;
				
				case 15:
					StringCopy(&cVar0, "CHAR_BIKESITE", 32);
					break;
				
				case 16:
					StringCopy(&cVar0, "CHAR_CARSITE2", 32);
					break;
				
				case 26:
					StringCopy(&cVar0, "CHAR_CARSITE3", 32);
					break;
				
				default:
					break;
				}
		}
		_set_notification_text_entry(&cVar8);
		if (!is_string_null_or_empty(sParam2) && !iParam1 == 245)
		{
			_add_text_component_item_string(sParam2);
		}
		else if (!is_string_null_or_empty(&cVar16) && iParam1 == 245)
		{
			add_text_component_substring_player_name(&cVar16);
		}
		_set_notification_message(&cVar0, &cVar0, 0, 0, "DELPURCN", 0);
	}
}

bool func_591()
{
	if (!func_592(player_id(), 1) && !Global_1587523[player_id() /*444*/] == 122)
	{
		return true;
	}
	return false;
}

bool func_592(int iParam0, int iParam1)
{
	if (iParam1)
	{
		if (func_216(iParam0))
		{
			return true;
		}
	}
	if ((((Global_1587523[iParam0 /*444*/] == 2 || Global_1587523[iParam0 /*444*/] == 1) || Global_1587523[iParam0 /*444*/] == 0) || Global_1587523[iParam0 /*444*/] == 3) || Global_1587523[iParam0 /*444*/] == 8)
	{
		return true;
	}
	return false;
}

void func_593()
{
	var uVar0;
	
	uVar0 = func_82(21);
	Global_2411218[uVar0 /*83*/] = 21;
	StringCopy(&(Global_2411218[uVar0 /*83*/].f_18[0 /*16*/]), "-StraightIntoFreemode", 64);
}

bool func_594(int iParam0)
{
	if (((((((iParam0 == 94 || iParam0 == 68) || iParam0 == 101) || iParam0 == 164) || iParam0 == 200) || iParam0 == 219) || iParam0 == 231) || iParam0 == 232)
	{
		return true;
	}
	return false;
}

char* func_595(int iParam0)
{
	if (iParam0 == -1)
	{
		return "";
	}
	if (func_596(iParam0, -1) == 0)
	{
		return "";
	}
	switch (iParam0)
	{
		case 0:
			return "ZTYPE";
		
		case 1:
			return "STINGER";
		
		case 2:
			return "JB700";
		
		case 3:
			return "CHEETAH";
		
		case 4:
			return "ENTITYXF";
		
		case 5:
			return "ADDER";
		
		case 6:
			return "MONROE";
		
		case 7:
			return "COGCABRI";
		
		case 9:
			return "DODO";
		
		case 12:
			return "CUBAN800";
		
		case 13:
			return "DUSTER";
		
		case 14:
			return "LUXOR";
		
		case 10:
			return "SHAMAL";
		
		case 11:
			return "STUNT";
		
		case 113:
			return "VESTRA";
		
		case 15:
			return "FROGGER";
		
		case 16:
			return "MAVERICK";
		
		case 17:
			return "RHINO";
		
		case 18:
			return "TITAN";
		
		case 19:
			return "CARGOBOB";
		
		case 20:
			return "BUZZARD";
		
		case 21:
			return "CRUSADER";
		
		case 22:
			return "BARRACKS";
		
		case 23:
			return "MARINA";
		
		case 24:
			return "MARQUIS";
		
		case 25:
			return "JETMAX";
		
		case 26:
			return "SPEEDER";
		
		case 27:
			return "SQUALO";
		
		case 28:
			return "SUNTRAP";
		
		case 29:
			return "TROPIC";
		
		case 30:
			return "SEASHARK";
		
		case 32:
			return "SUNTRAP";
		
		case 31:
			return "SUBMERSIBLE";
		
		case 258:
			return "TUG";
		
		case 33:
			return "BMX";
		
		case 34:
			return "SCORCHER";
		
		case 35:
			return "TRIBIKE";
		
		case 36:
			return "TRIBIKE2";
		
		case 37:
			return "TRIBIKE3";
		
		case 38:
			return "CRUISER";
		
		case 39:
			return "SCHWARZE";
		
		case 40:
			return "ZION";
		
		case 41:
			return "GAUNTLET";
		
		case 42:
			return "VIGERO";
		
		case 43:
			return "ISSI2";
		
		case 44:
			return "INFERNUS";
		
		case 45:
			return "SURANO";
		
		case 46:
			return "VACCA";
		
		case 47:
			return "NINEF";
		
		case 48:
			return "COMET2";
		
		case 49:
			return "BANSHEE";
		
		case 50:
			return "FELTZER";
		
		case 51:
			return "BFINJECT";
		
		case 52:
			return "SANDKING";
		
		case 53:
			return "FUGITIVE";
		
		case 54:
			return "DILETTAN";
		
		case 55:
			return "SUPERD";
		
		case 56:
			return "EXEMPLAR";
		
		case 57:
			return "BALLER2";
		
		case 58:
			return "CAVCADE";
		
		case 59:
			return "ROCOTO";
		
		case 60:
			return "FELON";
		
		case 61:
			return "ORACLE";
		
		case 62:
			return "BATI";
		
		case 63:
			return "AKUMA";
		
		case 64:
			return "RUFFIAN";
		
		case 65:
			return "VADER";
		
		case 66:
			return "BLAZER";
		
		case 67:
			return "PCJ";
		
		case 68:
			return "SANCHEZ";
		
		case 69:
			return "FAGGIO";
		
		default:
	}
	switch (iParam0)
	{
		case 70:
			return "BULLET";
		
		case 71:
			return "CARBONIZ";
		
		case 72:
			return "COQUETTE";
		
		case 73:
			return "NINEF2";
		
		case 74:
			return "RAPIDGT";
		
		case 75:
			return "RAPIDGT";
		
		case 76:
			return "STINGERG";
		
		case 77:
			return "VOLTIC";
		
		case 78:
			return "ANNIHL";
		
		case 79:
			return "MAMMATUS";
		
		case 80:
			return "VELUM";
		
		case 81:
			return "DUMP";
		
		case 82:
			return "AIRBUS";
		
		case 83:
			return "BUS";
		
		case 84:
			return "COACH";
		
		case 85:
			return "JOURNEY";
		
		case 86:
			return "MULE";
		
		case 87:
			return "RENTBUS";
		
		case 88:
			return "STRETCH";
		
		case 89:
			return "BISON";
		
		case 90:
			return "DOUBLE";
		
		case 91:
			return "FELON2";
		
		case 92:
			return "HEXER";
		
		case 93:
			return "ZION2";
		
		case 94:
			return "BATI2";
		
		case 95:
			return "ELEGY2";
		
		case 96:
			return "KHAMEL";
		
		case 97:
			return "HOTKNIFE";
		
		case 98:
			return "CARBON";
		
		case 99:
			return "BIFTA";
		
		case 100:
			return "KALAHARI";
		
		case 101:
			return "PARADISE";
		
		case 102:
			return "SPEEDER";
		
		case 103:
			return "BODHI2";
		
		case 104:
			return "DUNE";
		
		case 105:
			return "REBEL";
		
		case 106:
			return "SADLER";
		
		case 107:
			return "SANCHEZ2";
		
		case 108:
			return "SANDKIN2";
		
		case 109:
			return "ROOSEVELT";
		
		case 111:
			return "JESTER";
		
		case 114:
			return "MASSACRO";
		
		case 112:
			return "TURISMOR";
		
		case 115:
			return "ZENTORNO";
		
		case 116:
			return "HUNTLEY";
		
		case 110:
			return "ALPHA";
		
		case 117:
			return "COQUETTE_TLESS";
		
		case 118:
			return "BANSHEE_TLESS";
		
		case 119:
			return "STINGER_TLESS";
		
		case 120:
			return "VOLTIC_HTOP";
		
		case 121:
			return "THRUST";
		
		case 128:
			return "ASEA";
		
		case 129:
			return "ASTROPE";
		
		case 130:
			return "BOBCATXL";
		
		case 131:
			return "CAVCADE";
		
		case 132:
			return "GRANGER";
		
		case 133:
			return "INGOT";
		
		case 134:
			return "INTRUDER";
		
		case 135:
			return "MINIVAN";
		
		case 136:
			return "PREMIER";
		
		case 137:
			return "RADI";
		
		case 138:
			return "RANCHERX";
		
		case 139:
			return "RLOADER";
		
		case 140:
			return "STANIER";
		
		case 141:
			return "STRATUM";
		
		case 142:
			return "WASHINGT";
		
		case 122:
			return "DOMINATO";
		
		case 123:
			return "F620";
		
		case 124:
			return "FUSILADE";
		
		case 125:
			return "PENUMBRA";
		
		case 126:
			return "SENTINEL";
		
		case 127:
			return "SENTINEL2";
		
		case 143:
			return "BLADE";
		
		case 144:
			return "WARRENER";
		
		case 145:
			return "GLENDALE";
		
		case 146:
			return "RHAPSODY";
		
		case 147:
			return "PANTO";
		
		case 148:
			return "DUBSTA3";
		
		case 149:
			return "PIGALLE";
		
		case 150:
			return "PICADOR";
		
		case 151:
			return "REGINA";
		
		case 152:
			return "SURFER";
		
		case 153:
			return "YOUGA";
		
		case 154:
			return "BLAZER3";
		
		case 155:
			return "REBEL2";
		
		case 156:
			return "PRIMO";
		
		case 157:
			return "BUFFALO";
		
		case 158:
			return "BUFFALO2";
		
		case 159:
			return "TAILGATER";
		
		case 161:
			return "SOVEREIGN";
		
		case 160:
			return "MONSTER";
		
		case 162:
			return "MILJET";
		
		case 163:
			return "BESRA";
		
		case 164:
			return "SWIFT";
		
		case 165:
			return "COQUETTE2";
		
		case 166:
			return "COQUETTE2_TLESS";
		
		case 167:
			return "INNOVATION";
		
		case 168:
			return "HAKUCHOU";
		
		case 169:
			return "FURORE";
		
		case 170:
			return "KALAHARI_TLESS";
		
		case 187:
			return "VALKYRIE";
		
		case 177:
			return "HYDRA";
		
		case 185:
			return "SAVAGE";
		
		case 174:
			return "ENDURO";
		
		case 171:
			return "BOXVILLE4";
		
		case 172:
			return "CASCO";
		
		case 173:
			return "DINGHY3";
		
		case 175:
			return "GBURRITO2";
		
		case 176:
			return "GUARDIAN";
		
		case 178:
			return "INSURGENT";
		
		case 179:
			return "INSURGENT2";
		
		case 180:
			return "KURUMA";
		
		case 181:
			return "KURUMA2";
		
		case 182:
			return "LECTRO";
		
		case 183:
			return "MULE3";
		
		case 184:
			return "PBUS";
		
		case 186:
			return "TECHNICAL";
		
		case 188:
			return "VELUM2";
		
		case 189:
			return "GRESLEY";
		
		case 190:
			return "JACKAL";
		
		case 191:
			return "LANDSTALKER";
		
		case 192:
		
