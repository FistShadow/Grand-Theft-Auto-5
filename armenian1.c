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
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	var uLocal_60 = 8;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 2;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 8;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 8;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	var uLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	var uLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	float[] fLocal_124 = new float[117];
	float[] fLocal_242 = new float[117];
	float[] fLocal_360 = new float[117];
	float[] fLocal_478 = new float[117];
	float[] fLocal_596 = new float[117];
	float fLocal_714 = 0;
	float fLocal_715 = 0;
	float fLocal_716 = 0;
	float fLocal_717 = 0;
	float[] fLocal_718 = new float[38];
	float[] fLocal_757 = new float[38];
	float[] fLocal_796 = new float[38];
	float[] fLocal_835 = new float[38];
	float[] fLocal_874 = new float[38];
	float[] fLocal_913 = new float[38];
	float[] fLocal_952 = new float[15];
	float[] fLocal_968 = new float[15];
	float[] fLocal_984 = new float[15];
	float[] fLocal_1000 = new float[15];
	float fLocal_1016 = 0;
	float fLocal_1017 = 0;
	float fLocal_1018 = 0;
	float fLocal_1019 = 0;
	float fLocal_1020 = 0;
	float fLocal_1021 = 0;
	float fLocal_1022 = 0;
	float fLocal_1023 = 0;
	float fLocal_1024 = 0;
	float fLocal_1025 = 0;
	float fLocal_1026 = 0;
	float fLocal_1027 = 0;
	float fLocal_1028 = 0;
	float fLocal_1029 = 0;
	float fLocal_1030 = 0;
	float fLocal_1031 = 0;
	float fLocal_1032 = 0;
	float fLocal_1033 = 0;
	float fLocal_1034 = 0;
	float fLocal_1035 = 0;
	float fLocal_1036 = 0;
	int[] iLocal_1037 = new int[117];
	int[] iLocal_1155 = new int[117];
	int[] iLocal_1273 = new int[117];
	int[] iLocal_1391 = new int[38];
	int[] iLocal_1430 = new int[38];
	int[] iLocal_1469 = new int[38];
	int[] iLocal_1508 = new int[15];
	int iLocal_1524 = 0;
	int iLocal_1525 = 0;
	int iLocal_1526 = 0;
	int iLocal_1527 = 0;
	int iLocal_1528 = 0;
	int iLocal_1529 = 0;
	int iLocal_1530 = 0;
	int iLocal_1531 = 0;
	int iLocal_1532 = 0;
	int iLocal_1533 = 0;
	int iLocal_1534 = 0;
	int iLocal_1535 = 0;
	int iLocal_1536 = 0;
	int iLocal_1537 = 0;
	int iLocal_1538 = 0;
	int iLocal_1539 = 0;
	int iLocal_1540 = 0;
	vector3[] vLocal_1541 = new vector3[117];
	vector3[] vLocal_1893 = new vector3[15];
	vector3[] vLocal_1939 = new vector3[38];
	vector3 vLocal_2054 = 0;
	vector3 vLocal_2057 = 0;
	vector3 vLocal_2060 = 0;
	var uLocal_2063 = 0;
	var uLocal_2064 = 0;
	var uLocal_2065 = 0;
	var uLocal_2066 = 0;
	var uLocal_2067 = 0;
	var uLocal_2068 = 0;
	vector3 vLocal_2069 = 0;
	vector3 vLocal_2072 = 0;
	vector3 vLocal_2075 = 0;
	vector3 vLocal_2078 = 0;
	char[64] cLocal_2081 = 0;
	int iLocal_2097 = 0;
	int[] iLocal_2098 = new int[117];
	int[] iLocal_2216 = new int[15];
	int[] iLocal_2232 = new int[38];
	int iLocal_2271 = 0;
	int iLocal_2272 = 0;
	int iLocal_2273 = 0;
	int[] iLocal_2274 = new int[117];
	int[] iLocal_2392 = new int[15];
	int[] iLocal_2408 = new int[15];
	int[] iLocal_2424 = new int[38];
	int[] iLocal_2463 = new int[10];
	int iLocal_2474 = 0;
	int iLocal_2475 = 0;
	int iLocal_2476 = 0;
	var uLocal_2477 = 15;
	var uLocal_2478 = 0;
	var uLocal_2479 = 0;
	var uLocal_2480 = 0;
	var uLocal_2481 = 0;
	var uLocal_2482 = 0;
	var uLocal_2483 = 0;
	var uLocal_2484 = 0;
	var uLocal_2485 = 0;
	var uLocal_2486 = 0;
	var uLocal_2487 = 0;
	var uLocal_2488 = 0;
	var uLocal_2489 = 0;
	var uLocal_2490 = 0;
	var uLocal_2491 = 0;
	var uLocal_2492 = 0;
	int iLocal_2493 = 0;
	int iLocal_2494 = 0;
	int iLocal_2495 = 0;
	int iLocal_2496 = 0;
	int iLocal_2497 = 0;
	int iLocal_2498 = 0;
	int iLocal_2499 = 0;
	int iLocal_2500 = 0;
	int iLocal_2501 = 0;
	int iLocal_2502 = 0;
	int iLocal_2503 = 0;
	int iLocal_2504 = 0;
	int iLocal_2505 = 0;
	int iLocal_2506 = 0;
	int iLocal_2507 = 0;
	int iLocal_2508 = 0;
	int iLocal_2509 = 0;
	int iLocal_2510 = 0;
	int iLocal_2511 = 0;
	int iLocal_2512 = 0;
	int iLocal_2513 = 0;
	int iLocal_2514 = 0;
	int iLocal_2515 = 0;
	int iLocal_2516 = 0;
	int iLocal_2517 = 0;
	int iLocal_2518 = 0;
	int iLocal_2519 = 0;
	int iLocal_2520 = 0;
	int iLocal_2521 = 0;
	int iLocal_2522 = 0;
	int iLocal_2523 = 0;
	int iLocal_2524 = 0;
	int iLocal_2525 = 0;
	int iLocal_2526 = 0;
	int iLocal_2527 = 0;
	int iLocal_2528 = 0;
	int iLocal_2529 = 0;
	int iLocal_2530 = 0;
	int iLocal_2531 = 0;
	int iLocal_2532 = 0;
	int iLocal_2533 = 0;
	int iLocal_2534 = 0;
	int iLocal_2535 = 0;
	int iLocal_2536 = 0;
	int iLocal_2537 = 0;
	int iLocal_2538 = 0;
	int iLocal_2539 = 0;
	int iLocal_2540 = 0;
	int iLocal_2541 = 0;
	int iLocal_2542 = 0;
	int iLocal_2543 = 0;
	int iLocal_2544 = 0;
	int iLocal_2545 = 0;
	int iLocal_2546 = 0;
	int[] iLocal_2547 = new int[80];
	float fLocal_2628 = 0;
	float fLocal_2629 = 0;
	float fLocal_2630 = 0;
	Vector3 fLocal_2631 = 0;
	Vector3 fLocal_2632 = 0;
	Vector3 fLocal_2633 = 0;
	Vector3 fLocal_2634 = 0;
	Vector3 fLocal_2635 = 0;
	float fLocal_2636 = 0;
	Vector3 fLocal_2637 = 0;
	float fLocal_2638 = 0;
	Vector3 fLocal_2639 = 0;
	Vector3 fLocal_2640 = 0;
	Vector3 fLocal_2641 = 0;
	Vector3 fLocal_2642 = 0;
	int iLocal_2643 = 0;
	int iLocal_2644 = 0;
	int iLocal_2645 = 0;
	int iLocal_2646 = 0;
	int iLocal_2647 = 0;
	int iLocal_2648 = 0;
	int iLocal_2649 = 0;
	var uLocal_2650 = 0;
	var uLocal_2651 = 0;
	int iLocal_2652 = 0;
	int iLocal_2653 = 0;
	int iLocal_2654 = 0;
	int iLocal_2655 = 0;
	int iLocal_2656 = 0;
	int iLocal_2657 = 0;
	int[] iLocal_2658 = new int[10];
	int iLocal_2669 = 0;
	int iLocal_2670 = 0;
	int iLocal_2671 = 0;
	int iLocal_2672 = 0;
	int iLocal_2673 = 0;
	int iLocal_2674 = 0;
	int iLocal_2675 = 0;
	int iLocal_2676 = 0;
	int iLocal_2677 = 0;
	int iLocal_2678 = 0;
	int iLocal_2679 = 0;
	var uLocal_2680 = 0;
	int iLocal_2681 = 0;
	int iLocal_2682 = 0;
	int iLocal_2683 = 0;
	int iLocal_2684 = 0;
	int iLocal_2685 = 0;
	int iLocal_2686 = 0;
	int iLocal_2687 = 0;
	int iLocal_2688 = 0;
	int iLocal_2689 = 0;
	int iLocal_2690 = 0;
	int iLocal_2691 = 0;
	int iLocal_2692 = 0;
	int iLocal_2693 = 0;
	int iLocal_2694 = 0;
	int iLocal_2695 = 0;
	int iLocal_2696 = 0;
	int iLocal_2697 = 0;
	int iLocal_2698 = 0;
	int iLocal_2699 = 0;
	int iLocal_2700 = 0;
	int iLocal_2701 = 0;
	int iLocal_2702 = 0;
	int iLocal_2703 = 0;
	int iLocal_2704 = 0;
	int iLocal_2705 = 0;
	int iLocal_2706 = 0;
	int iLocal_2707 = 0;
	int iLocal_2708 = 0;
	int iLocal_2709 = 0;
	int iLocal_2710 = 0;
	int iLocal_2711 = 0;
	int iLocal_2712 = 0;
	int iLocal_2713 = 0;
	int iLocal_2714 = 0;
	int iLocal_2715 = 0;
	int iLocal_2716 = 0;
	int iLocal_2717 = 0;
	int iLocal_2718 = 0;
	int iLocal_2719 = 0;
	int iLocal_2720 = 0;
	int iLocal_2721 = 0;
	var uLocal_2722 = 10;
	var uLocal_2723 = 0;
	var uLocal_2724 = 0;
	var uLocal_2725 = 0;
	var uLocal_2726 = 0;
	var uLocal_2727 = 0;
	var uLocal_2728 = 0;
	var uLocal_2729 = 0;
	var uLocal_2730 = 0;
	var uLocal_2731 = 0;
	var uLocal_2732 = 0;
	vector3 vLocal_2733 = 0;
	vector3 vLocal_2736 = 0;
	vector3 vLocal_2739 = 0;
	vector3 vLocal_2742 = 0;
	vector3 vLocal_2745 = 0;
	vector3 vLocal_2748 = 0;
	vector3 vLocal_2751 = 0;
	vector3 vLocal_2754 = 0;
	vector3 vLocal_2757 = 0;
	vector3 vLocal_2760 = 0;
	vector3 vLocal_2763 = 0;
	vector3 vLocal_2766 = 0;
	vector3 vLocal_2769 = 0;
	vector3 vLocal_2772 = 0;
	vector3 vLocal_2775 = 0;
	vector3 vLocal_2778 = 0;
	vector3 vLocal_2781 = 0;
	char* sLocal_2784 = 0;
	char* sLocal_2785 = 0;
	char* sLocal_2786 = 0;
	char* sLocal_2787 = 0;
	char* sLocal_2788 = 0;
	char* sLocal_2789 = 0;
	char* sLocal_2790 = 0;
	char* sLocal_2791 = 0;
	char* sLocal_2792 = 0;
	char* sLocal_2793 = 0;
	char* sLocal_2794 = 0;
	char* sLocal_2795 = 0;
	char* sLocal_2796 = 0;
	char* sLocal_2797 = 0;
	char* sLocal_2798 = 0;
	char* sLocal_2799 = 0;
	char* sLocal_2800 = 0;
	char* sLocal_2801 = 0;
	int iLocal_2802 = 0;
	int iLocal_2803 = 0;
	int iLocal_2804 = 0;
	int iLocal_2805 = 0;
	int iLocal_2806 = 0;
	int iLocal_2807 = 0;
	int iLocal_2808 = 0;
	int[] iLocal_2809 = new int[4];
	int[] iLocal_2814 = new int[1];
	int[] iLocal_2816 = new int[20];
	int iLocal_2837 = 0;
	int iLocal_2838 = 0;
	int iLocal_2839 = 0;
	int iLocal_2840 = 0;
	int[] iLocal_2841 = new int[2];
	int iLocal_2844 = 0;
	int iLocal_2845 = 0;
	int iLocal_2846 = 0;
	int[] iLocal_2847 = new int[10];
	int[] iLocal_2858 = new int[20];
	int[] iLocal_2879 = new int[2];
	int iLocal_2882 = 0;
	int iLocal_2883 = 0;
	int iLocal_2884 = 0;
	int iLocal_2885 = 0;
	var uLocal_2886 = 0;
	int iLocal_2887 = 0;
	int[] iLocal_2888 = new int[8];
	int iLocal_2897 = 0;
	int iLocal_2898 = 0;
	int[] iLocal_2899 = new int[2];
	int iLocal_2902 = 0;
	int iLocal_2903 = 0;
	int iLocal_2904 = 0;
	int[] iLocal_2905 = new int[16];
	int[] iLocal_2922 = new int[2];
	int[] iLocal_2925 = new int[2];
	int iLocal_2928 = 0;
	int[] iLocal_2929 = new int[2];
	int iLocal_2932 = 0;
	int iLocal_2933 = 0;
	int iLocal_2934 = 0;
	int iLocal_2935 = 0;
	int iLocal_2936 = 0;
	int iLocal_2937 = 0;
	int iLocal_2938 = 0;
	int iLocal_2939 = 0;
	int iLocal_2940 = 0;
	int iLocal_2941 = 0;
	int iLocal_2942 = 0;
	int iLocal_2943 = 0;
	int iLocal_2944 = 0;
	int iLocal_2945 = 0;
	int iLocal_2946 = 0;
	int iLocal_2947 = 0;
	int iLocal_2948 = 0;
	int iLocal_2949 = 0;
	int iLocal_2950 = 0;
	int iLocal_2951 = 0;
	int iLocal_2952 = 0;
	int iLocal_2953 = 0;
	int iLocal_2954 = 0;
	int iLocal_2955 = 0;
	int iLocal_2956 = 0;
	int iLocal_2957 = 0;
	int iLocal_2958 = 0;
	int iLocal_2959 = 0;
	int iLocal_2960 = 0;
	int iLocal_2961 = 0;
	int iLocal_2962 = 0;
	int iLocal_2963 = 0;
	int iLocal_2964 = 0;
	int iLocal_2965 = 0;
	int iLocal_2966 = 0;
	struct<5> Local_2967 = 0;
	vector3 vLocal_2972 = 0;
	var uLocal_2975 = 0;
	var uLocal_2976 = 0;
	struct<2> Local_2977 = 0;
	var uLocal_2979 = 0;
	var uLocal_2980 = 0;
	var uLocal_2981 = 0;
	struct<5>[] Local_2982 = new struct<5>[4];
	struct<5>[] Local_3003 = new struct<5>[2];
	int iLocal_3014 = 0;
	var uLocal_3015 = 0;
	var uLocal_3016 = 0;
	var uLocal_3017 = 0;
	var uLocal_3018 = 0;
	struct<7>[] Local_3019 = new struct<7>[6];
	vector3 vLocal_3062 = 0;
	var uLocal_3065 = 0;
	var uLocal_3066 = 0;
	struct<5>[] Local_3067 = new struct<5>[2];
	struct<7>[] Local_3078 = new struct<7>[2];
	struct<2> Local_3093 = 0;
	struct<14> Local_3095 = 0;
	var uLocal_3109 = 0;
	var uLocal_3110 = 0;
	var uLocal_3111 = 0;
	var uLocal_3112 = 3;
	var uLocal_3113 = 0;
	var uLocal_3114 = 0;
	var uLocal_3115 = 0;
	var uLocal_3116 = 0;
	var uLocal_3117 = 0;
	var uLocal_3118 = 0;
	var uLocal_3119 = 0;
	var uLocal_3120 = 4;
	var uLocal_3121 = 0;
	var uLocal_3122 = 0;
	var uLocal_3123 = 0;
	var uLocal_3124 = 0;
	var uLocal_3125 = 0;
	var uLocal_3126 = 0;
	var uLocal_3127 = 0;
	var uLocal_3128 = 4;
	var uLocal_3129 = 0;
	var uLocal_3130 = 0;
	var uLocal_3131 = 0;
	var uLocal_3132 = 0;
	var uLocal_3133 = 4;
	var uLocal_3134 = 0;
	var uLocal_3135 = 0;
	var uLocal_3136 = 0;
	var uLocal_3137 = 0;
	var uLocal_3138 = 4;
	var uLocal_3139 = 0;
	var uLocal_3140 = 0;
	var uLocal_3141 = 0;
	var uLocal_3142 = 0;
	var uLocal_3143 = 0;
	var uLocal_3144 = 4;
	var uLocal_3145 = 0;
	var uLocal_3146 = 0;
	var uLocal_3147 = 0;
	var uLocal_3148 = 0;
	var uLocal_3149 = 4;
	var uLocal_3150 = 0;
	var uLocal_3151 = 0;
	var uLocal_3152 = 0;
	var uLocal_3153 = 0;
	var uLocal_3154 = 4;
	var uLocal_3155 = 0;
	var uLocal_3156 = 0;
	var uLocal_3157 = 0;
	var uLocal_3158 = 0;
	var uLocal_3159 = 0;
	var uLocal_3160 = 0;
	var uLocal_3161 = 0;
	var uLocal_3162 = 0;
	var uLocal_3163 = 0;
	int iLocal_3164 = 0;
	int iLocal_3165 = 0;
	int iLocal_3166 = 0;
	int iLocal_3167 = 0;
	char* sLocal_3168 = 0;
	struct<10>[] Local_3169 = new struct<10>[16];
	var uLocal_3330 = 0;
	var uLocal_3331 = 0;
	var uLocal_3332 = 0;
	var uLocal_3333 = 0;
	var uLocal_3334 = 0;
	var uLocal_3335 = 0;
	var uLocal_3336 = -1;
	var uLocal_3337 = 0;
	var uLocal_3338 = 0;
	var uLocal_3339 = 0;
	var uLocal_3340 = 0;
	var uLocal_3341 = 0;
	var uLocal_3342 = 0;
	var uLocal_3343 = 1000;
	var uLocal_3344 = 1000;
	var uLocal_3345 = 0;
	int iLocal_3346 = 0;
	int iLocal_3347 = 0;
#endregion

void main()
{
	int iVar0;
	
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
	iLocal_58 = _0x4A9923385BDB9DAD();
	iLocal_59 = _get_blip_info_id_iterator();
	iLocal_93 = true;
	iLocal_100 = true;
	iLocal_122 = true;
	fLocal_1016 = 120f;
	fLocal_1017 = 0f;
	fLocal_1019 = 1f;
	fLocal_1020 = 0f;
	fLocal_1021 = 1f;
	fLocal_1022 = 30f;
	fLocal_1024 = 1f;
	fLocal_1025 = 5f;
	fLocal_1026 = 1f;
	fLocal_1027 = 1f;
	fLocal_1028 = 100f;
	fLocal_1029 = 100f;
	fLocal_1030 = 0f;
	fLocal_1031 = 7000f;
	fLocal_1032 = 0f;
	fLocal_1033 = 0f;
	fLocal_1034 = 0.3f;
	fLocal_1035 = 0.5f;
	fLocal_1036 = 50f;
	iLocal_1527 = -1;
	iLocal_1535 = -1;
	iLocal_1536 = -1;
	iLocal_2508 = true;
	iLocal_2509 = true;
	iLocal_2531 = true;
	fLocal_2628 = 0f;
	fLocal_2629 = 0f;
	fLocal_2630 = 0f;
	fLocal_2631 = 123.744f;
	fLocal_2632 = -77.7f;
	fLocal_2633 = -87.9f;
	fLocal_2634 = 322.2873f;
	fLocal_2635 = 316.722f;
	fLocal_2636 = 251.8757f;
	fLocal_2637 = 0.4923f;
	fLocal_2638 = 0f;
	fLocal_2639 = 17.3f;
	fLocal_2640 = -160.9f;
	fLocal_2641 = 153.3213f;
	fLocal_2642 = 159.5713f;
	iLocal_2669 = -1;
	iLocal_2670 = -1;
	iLocal_2687 = -1;
	iLocal_2688 = -1;
	iLocal_2689 = -1;
	iLocal_2690 = -1;
	iLocal_2691 = -1;
	iLocal_2720 = -1;
	vLocal_2733 = {-31.17f, -1090.754f, 25.4344f};
	vLocal_2736 = {0f, 0f, 0f};
	vLocal_2739 = {-25.4559f, -1426.998f, 29.656f};
	vLocal_2742 = {-56.8445f, -1107.244f, 24.4344f};
	vLocal_2745 = {-33.6656f, -1092.602f, 30.4344f};
	vLocal_2748 = {-16.1017f, -1079.592f, 25.6721f};
	vLocal_2751 = {-40.54f, -1096.27f, 25.43f};
	vLocal_2754 = {-42f, -1095.5f, 25.43f};
	vLocal_2757 = {-1899.216f, -593.5246f, 10.8973f};
	vLocal_2760 = {-1899.791f, -594.6526f, 10.8853f};
	vLocal_2763 = {-1883.565f, -575.7982f, 10.7861f};
	vLocal_2766 = {-24.9598f, -1437.647f, 29.6552f};
	vLocal_2769 = {-42.95f, -1097.3f, 25.41f};
	vLocal_2772 = {-43.98f, -1095.47f, 25.41f};
	vLocal_2775 = {-29.9308f, -1089.822f, 25.4221f};
	vLocal_2778 = {-34.2931f, -1089.394f, 25.4222f};
	vLocal_2781 = {-1663.97f, -1126.7f, 30.7f};
	sLocal_2784 = "mattarmenian";
	sLocal_2785 = "armenian_1_int";
	sLocal_2786 = "armenian_1_mcs_1";
	sLocal_2787 = "arm_1_mcs_2_concat";
	sLocal_2788 = "missarmenian1walktocar";
	sLocal_2789 = "missarmenian1@dealership";
	sLocal_2790 = "missarmenian1banter";
	sLocal_2791 = "missarmenian1movieextras";
	sLocal_2792 = "missarmenian1ig_13";
	sLocal_2793 = "missarmenian1leadinout";
	sLocal_2794 = "missarmenian1leadinoutarmenian_1_mcs_1_leadinout";
	sLocal_2795 = "arm1_01";
	sLocal_2796 = "arm1_05";
	sLocal_2797 = "missarmenian1driving_taunts@lamar_1";
	sLocal_2798 = "missarmenian1driving_taunts@lamar_2";
	sLocal_2799 = "missarmenian1driving_taunts@franklin";
	sLocal_2800 = "missarmenian1leadinoutarm_1_ig_14_leadinout";
	sLocal_2801 = "MISSFINALE_C2IG_5";
	iLocal_2944 = joaat("ninef2");
	iLocal_2945 = joaat("rapidgt2");
	iLocal_2946 = joaat("manana");
	iLocal_2947 = joaat("p_sec_gate_01_s");
	iLocal_2948 = joaat("p_sec_gate_01_s_col");
	iLocal_2949 = joaat("s_m_m_armoured_01");
	iLocal_2950 = joaat("s_m_m_security_01");
	iLocal_2951 = joaat("a_m_y_beach_02");
	iLocal_2952 = joaat("p_cs_shirt_01_s");
	iLocal_2953 = joaat("v_ilev_fa_warddoorl");
	iLocal_2954 = joaat("v_ilev_fa_warddoorr");
	iLocal_2955 = joaat("prop_ld_health_pack");
	iLocal_2956 = joaat("jetmax");
	iLocal_2957 = joaat("marquis");
	iLocal_2958 = joaat("a_m_y_beach_01");
	iLocal_2959 = joaat("prop_phone_ing");
	iLocal_2960 = joaat("prop_ld_ferris_wheel");
	iLocal_2961 = joaat("prop_ferris_car_01");
	iLocal_2962 = joaat("a_f_y_beach_01");
	iLocal_2963 = joaat("a_m_y_beach_01");
	iLocal_2964 = joaat("a_f_y_fitness_02");
	iLocal_2965 = joaat("a_m_y_beachvesp_01");
	iLocal_2966 = joaat("a_f_y_hipster_02");
	iLocal_3167 = 1;
	set_mission_flag(1);
	if (has_force_cleanup_occurred(3))
	{
		set_fade_in_after_death_arrest(0);
		func_822();
		iLocal_3166 = 1;
		Global_86636 = 3;
		func_814();
	}
	func_800();
	set_clock_time(8, 0, 0);
	set_clock_date(6, 5, 2009);
	if (func_799())
	{
		iVar0 = func_798();
		if (Global_85788)
		{
			iVar0++;
		}
		if (iVar0 == 0)
		{
			_0x7EC6F9A478A6A512();
			func_797(1, 0);
		}
		else if (iVar0 == 1)
		{
			func_797(4, 0);
		}
		else if (iVar0 == 2)
		{
			if (Global_85788)
			{
				func_797(5, 0);
			}
			else
			{
				func_797(6, 0);
			}
		}
		else if (iVar0 == 3)
		{
			if (Global_85788)
			{
				func_797(9, 0);
			}
			else
			{
				func_797(10, 0);
			}
		}
		else if (iVar0 > 3)
		{
			if (Global_85788)
			{
				func_797(11, 0);
			}
			else
			{
				func_797(11, 0);
			}
		}
		set_current_ped_weapon(player_ped_id(), joaat("weapon_unarmed"), true);
		iLocal_2535 = true;
	}
	else
	{
		func_767(0, "OPENING_CUTSCENE", 0, 0, 0, 1);
	}
	while (true)
	{
		wait(0);
		_0x208784099002BC30("M_FranklinAndLamar", 0);
		if (iLocal_2535)
		{
			if (iLocal_3166 == 1)
			{
				iLocal_2535 = false;
			}
		}
		if (!func_766(138))
		{
			if (_0xEE778F8C7E1142E2(1) == 4 || _0xEE778F8C7E1142E2(0) == 4)
			{
				func_765(138, 1);
			}
		}
		if (iLocal_3165 < 11)
		{
			if (does_entity_exist(Local_3078[0 /*7*/]))
			{
				if (!is_vehicle_driveable(Local_3078[0 /*7*/], 0))
				{
					if (!is_vehicle_driveable(Local_3078[1 /*7*/], 0))
					{
						func_752(4);
					}
					else
					{
						func_752(3);
					}
				}
			}
			if (does_entity_exist(Local_3078[1 /*7*/]))
			{
				if (!is_vehicle_driveable(Local_3078[1 /*7*/], 0))
				{
					if (!is_vehicle_driveable(Local_3078[0 /*7*/], 0))
					{
						func_752(4);
					}
					else
					{
						func_752(3);
					}
				}
			}
		}
		else if (does_entity_exist(Local_3078[iLocal_2644 /*7*/]))
		{
			if (!is_vehicle_driveable(Local_3078[iLocal_2644 /*7*/], 0))
			{
				func_752(2);
			}
		}
		if (iLocal_3165 > 2)
		{
			if (does_entity_exist(Local_3078[iLocal_2644 /*7*/]))
			{
				if (is_vehicle_driveable(Local_3078[iLocal_2644 /*7*/], 0))
				{
					if (func_751(&(Local_3078[iLocal_2644 /*7*/])))
					{
						func_752(7);
					}
				}
			}
		}
		if (iLocal_3165 < 11)
		{
			if (does_entity_exist(iLocal_2805))
			{
				if (is_vehicle_driveable(iLocal_2805, 0))
				{
					if (iLocal_3165 > 9)
					{
						if (func_751(&iLocal_2805))
						{
							func_752(8);
						}
					}
				}
				else
				{
					func_752(6);
				}
			}
		}
		if (does_entity_exist(Local_2967))
		{
			if (is_ped_injured(Local_2967))
			{
				func_752(1);
			}
		}
		if (does_entity_exist(vLocal_2972.x))
		{
			if (is_ped_injured(vLocal_2972.x))
			{
				func_752(19);
			}
		}
		if (does_entity_exist(Local_2977))
		{
			if (is_ped_injured(Local_2977))
			{
				func_752(20);
			}
		}
		if (iLocal_3165 > 5)
		{
			func_750();
		}
		if (iLocal_3165 >= 10)
		{
			func_731(&uLocal_3120, 1, 1);
		}
		if (!iLocal_2546)
		{
			if (iLocal_3165 >= 6)
			{
				func_729(4, player_ped_id());
				iLocal_2546 = 1;
			}
		}
		switch (iLocal_3165)
		{
			case 0:
				func_480();
				break;
			
			case 1:
				func_478();
				break;
			
			case 2:
				func_476();
				break;
			
			case 3:
			case 4:
				func_388();
				break;
			
			case 5:
				func_360();
				break;
			
			case 6:
				func_343();
				break;
			
			case 7:
				func_338();
				break;
			
			case 8:
				func_334();
				break;
			
			case 9:
				func_319();
				break;
			
			case 10:
				func_235();
				break;
			
			case 11:
				func_2();
				break;
			
			case 12:
				break;
			
			case 13:
				break;
			
			case 14:
				break;
			
			case 15:
				break;
			
			case 16:
				break;
			
			case 17:
				break;
			
			case 18:
				break;
			
			case 19:
				break;
		}
		func_1();
	}
}

void func_1()
{
	float fVar0;
	
	if (!Local_3093.f_1)
	{
		if (iLocal_3165 == 3)
		{
			if (iLocal_2508)
			{
			}
			else if (has_vehicle_recording_been_loaded(iLocal_2649, sLocal_2784))
			{
				fVar0 = get_total_duration_of_vehicle_recording(iLocal_2649, sLocal_2784);
				Local_3093 = fLocal_2628 / fVar0 * 99f;
				special_ability_deplete_meter(player_id(), 1);
				special_ability_charge_normalized(player_id(), Local_3093 / 100f, 1);
			}
		}
		else if (iLocal_3165 == 6)
		{
			if (!iLocal_2508)
			{
				if (!Local_3093.f_1)
				{
					Local_3093 += 1f * timestep();
					if (Local_3093 > 100f)
					{
						Local_3093 = 100f;
					}
					special_ability_deplete_meter(player_id(), 1);
					special_ability_charge_normalized(player_id(), Local_3093 / 100f, 1);
				}
			}
		}
	}
}

void func_2()
{
	int iVar0;
	vector3 vVar1;
	
	if (iLocal_3166 == 4)
	{
		if (iLocal_2643 != 99)
		{
			if (iLocal_2535)
			{
				func_234(-13.9541f, -1446.656f, 30.5515f, 335.0142f, 0, 0);
				iLocal_2643 = 99;
			}
			else
			{
				set_entity_coords(player_ped_id(), -13.9541f, -1446.656f, 30.5515f, 1, false, 0, 1);
				freeze_entity_position(player_ped_id(), true);
				load_scene(-13.9541f, -1446.656f, 30.5515f);
				freeze_entity_position(player_ped_id(), false);
				iLocal_2643 = 99;
			}
		}
		else if (func_229(-17.8292f, -1458.012f, 29.4598f, 0, 0) && func_188(vLocal_2766, fLocal_2637, 0))
		{
			func_185(0, -1, 0);
			if (is_vehicle_driveable(iLocal_2805, 0))
			{
				set_ped_into_vehicle(player_ped_id(), iLocal_2805, -1);
				if (!is_ped_injured(Local_2967))
				{
					set_ped_into_vehicle(Local_2967, iLocal_2805, false);
				}
			}
			iLocal_3166 = 0;
		}
	}
	if (iLocal_3166 == 0)
	{
		if (is_player_control_on(player_id()))
		{
			set_player_control(player_id(), false, 768);
		}
		request_cutscene(sLocal_2787, 8);
		request_model(iLocal_2952);
		request_model(iLocal_2953);
		request_model(iLocal_2954);
		request_model(iLocal_2955);
		func_99(sLocal_2787);
		if (((((has_model_loaded(iLocal_2952) && has_model_loaded(iLocal_2953)) && has_model_loaded(iLocal_2954)) && has_model_loaded(iLocal_2955)) && timera() > 1000) && (!func_98() || func_97()))
		{
			iVar0 = false;
			if (is_pc_version())
			{
				iVar0 = func_96();
			}
			else
			{
				iVar0 = has_cutscene_loaded();
			}
			if (iVar0)
			{
				set_current_ped_weapon(player_ped_id(), joaat("weapon_unarmed"), false);
				set_frontend_radio_active(0);
				if (is_audio_scene_active("ARM_1_GO_HOME"))
				{
					stop_audio_scene("ARM_1_GO_HOME");
				}
				iLocal_2897 = create_object(iLocal_2952, -11.7f, -1439.255f, 30.099f, 1, true, false);
				iLocal_2898 = create_object_no_offset(iLocal_2955, -17.92f, -1436.34f, 30.2033f, 1, 1, 0);
				set_entity_heading(iLocal_2898, -158.75f);
				freeze_entity_position(iLocal_2898, true);
				iLocal_2899[0] = create_object(iLocal_2953, -12.7f, -1439.255f, 20.099f, 1, true, false);
				iLocal_2899[1] = create_object(iLocal_2954, -10.7f, -1439.255f, 20.099f, 1, true, false);
				set_model_as_no_longer_needed(iLocal_2952);
				set_model_as_no_longer_needed(iLocal_2955);
				set_model_as_no_longer_needed(iLocal_2953);
				set_model_as_no_longer_needed(iLocal_2954);
				register_entity_for_cutscene(iLocal_2897, "Franklins_shirt", 0, false, 0);
				register_entity_for_cutscene(iLocal_2899[0], "Closet_Door_L", 0, false, 0);
				register_entity_for_cutscene(iLocal_2899[1], "Closet_Door_R", 0, false, 0);
				create_model_hide(-18.3539f, -1438.784f, 31.305f, 3f, joaat("v_ilev_frnkwarddr1"), 0);
				create_model_hide(-18.3594f, -1438.133f, 31.305f, 3f, joaat("v_ilev_frnkwarddr2"), 0);
				func_71(48, 0);
				func_71(47, 0);
				_door_control(joaat("v_ilev_fa_roomdoor"), -15.989f, -1436.03f, 31.199f, true, 0f, 0f, -1f);
				func_69();
				func_60(1, 1, 1, 0);
				_0x293220DA1B46CEBC(5f, 0f, 3);
				start_cutscene(8);
				_0x48621C9FCA3EBD28(4);
				if (!func_59(0))
				{
					Global_86636 = 1;
				}
				iLocal_2643 = 0;
				iLocal_2502 = 0;
				iLocal_3166 = 1;
			}
		}
	}
	if (iLocal_3166 == 1)
	{
		if (was_cutscene_skipped())
		{
			set_cutscene_fade_values(0, 0, 0, 0);
			iLocal_2502 = 1;
			iLocal_3166 = 3;
		}
		if (iLocal_2933 == 0)
		{
			iLocal_2933 = get_interior_at_coords_with_type(-14.6461f, -1437.332f, 31.116f, "v_franklins");
		}
		else if (!is_interior_ready(iLocal_2933))
		{
			_0x2CA429C029CCF247(iLocal_2933);
		}
		vVar1 = {_get_gameplay_cam_rot(2)};
		if (!does_entity_exist(iLocal_2897))
		{
			request_model(iLocal_2952);
			if (has_model_loaded(iLocal_2952))
			{
				iLocal_2897 = create_object_no_offset(iLocal_2952, -19.126f, -1438.791f, 31.6833f, 1, 1, 0);
				set_entity_rotation(iLocal_2897, -3.744568f, -0.022376f, 14.53727f, 2, 1);
				freeze_entity_position(iLocal_2897, true);
				set_entity_visible(iLocal_2897, false, 0);
				set_model_as_no_longer_needed(iLocal_2952);
			}
		}
		switch (iLocal_2643)
		{
			case 0:
				if (is_cutscene_playing())
				{
					set_player_control(player_id(), false, 0);
					clear_prints();
					clear_help(1);
					if (is_vehicle_driveable(iLocal_2805, 0))
					{
						set_entity_coords(iLocal_2805, -25.169f, -1427.966f, 29.6567f, 1, false, 0, 1);
						set_entity_heading(iLocal_2805, 0.9548f);
						set_vehicle_engine_on(iLocal_2805, false, 0, 0);
						set_vehicle_fixed(iLocal_2805);
					}
					func_57(&Local_2967, 1);
					clear_area(-17.8292f, -1458.012f, 29.4598f, 100f, 1, 0, 0, false);
					func_56();
					iLocal_2643++;
				}
				break;
			
			case 1:
				hide_hud_component_this_frame(2);
				if (get_cutscene_time() > 21500)
				{
					func_55("AR1_BARBERS", 7000);
					iLocal_2643++;
				}
				break;
			
			case 2:
				if (get_cutscene_time() > 26700)
				{
					if (func_54(0))
					{
						func_51(0, 0, 1, 0, 0);
					}
					func_50(19, 1);
					func_50(20, 1);
					func_50(21, 1);
					func_50(22, 1);
					func_50(23, 1);
					func_50(24, 1);
					func_50(25, 1);
					settimera(0);
					settimerb(0);
					iLocal_2643++;
				}
				break;
			
			case 3:
				set_gameplay_cam_relative_heading(vVar1.z - get_entity_heading(player_ped_id()));
				if (timera() > 3000)
				{
					func_55("AR1_SAVE1", -1);
					display_radar(true);
					register_synchronised_script_speech();
					if (!does_blip_exist(iLocal_2882))
					{
						iLocal_2882 = func_48(-14.3803f, -1438.514f, 30.1015f, 0);
						set_blip_sprite(iLocal_2882, 40);
						set_blip_flashes(iLocal_2882, 1);
					}
					settimerb(0);
					iLocal_2534 = 0;
					iLocal_2643++;
				}
				break;
			
			case 4:
				set_gameplay_cam_relative_heading(vVar1.z - get_entity_heading(player_ped_id()));
				register_synchronised_script_speech();
				if (timerb() > 5000)
				{
					if (does_object_of_type_exist_at_coords(-14.8691f, -1441.159f, 31.1932f, 3f, joaat("v_ilev_fa_frontdoor"), 0))
					{
						set_state_of_closest_door_of_type(joaat("v_ilev_fa_frontdoor"), -14.8691f, -1441.159f, 31.1932f, true, 0f, 0);
					}
					display_radar(false);
					settimerb(0);
					iLocal_2534 = 0;
					iLocal_2643++;
				}
				break;
			
			case 5:
				if (!iLocal_2534)
				{
					if (func_47("AR1_SAVE1"))
					{
						if (timera() > 8750)
						{
							clear_help(0);
							iLocal_2534 = 1;
						}
					}
				}
				if (timera() > 9500)
				{
					func_55("AR1_TVHELP", -1);
					settimerb(0);
					iLocal_2534 = 0;
					iLocal_2643++;
				}
				break;
			
			case 6:
				if (timerb() > 5000)
				{
					iLocal_2534 = 0;
					iLocal_2643++;
				}
				break;
			
			case 7:
				if (!iLocal_2534)
				{
					if (func_47("AR1_TVHELP"))
					{
						if (timera() > 15000)
						{
							clear_help(0);
							iLocal_2534 = 1;
						}
					}
				}
				if (timera() > 16000)
				{
					func_55("AR1_MEDIHELP", -1);
					settimerb(0);
					iLocal_2534 = 0;
					iLocal_2643++;
				}
				break;
			
			case 8:
				if (timerb() > 5000)
				{
					iLocal_2534 = 0;
					iLocal_2643++;
				}
				break;
			
			case 9:
				if (!iLocal_2534)
				{
					if (func_47("AR1_MEDIHELP"))
					{
						if (timera() > 22500)
						{
							clear_help(0);
							iLocal_2534 = 1;
						}
					}
				}
				if (timera() > 23500)
				{
					_door_control(joaat("v_ilev_fa_roomdoor"), -15.989f, -1436.03f, 31.199f, false, 0f, 0f, 0f);
					func_55("AR1_SAVE2", -1);
					settimerb(0);
					iLocal_2534 = 0;
					iLocal_2643++;
				}
				break;
			
			case 10:
				if (timerb() > 5000)
				{
					func_55("AR1_SAVE2B", -1);
					settimerb(0);
					iLocal_2534 = 0;
					iLocal_2643++;
				}
				break;
			
			case 11:
				if (timerb() > 5000)
				{
					settimerb(0);
					iLocal_2534 = 0;
					iLocal_2643++;
				}
				break;
			
			case 12:
				if (!iLocal_2534)
				{
					if (func_47("AR1_SAVE2B"))
					{
						if (timera() > 35000)
						{
							clear_help(0);
							iLocal_2534 = 1;
						}
					}
				}
				if (timera() > 36000)
				{
					func_55("AR1_SAVE3", -1);
					settimerb(0);
					iLocal_2643++;
				}
				break;
			
			case 13:
				if (timerb() > 7000)
				{
					clear_help(0);
					iLocal_2643++;
				}
				break;
		}
		if (does_entity_exist(iLocal_2897))
		{
			if (can_set_exit_state_for_registered_entity("Franklins_shirt", false))
			{
				freeze_entity_position(iLocal_2897, true);
			}
		}
		if (does_entity_exist(iLocal_2899[0]))
		{
			if (can_set_exit_state_for_registered_entity("Closet_Door_L", false))
			{
				freeze_entity_position(iLocal_2899[0], true);
			}
		}
		if (does_entity_exist(iLocal_2899[1]))
		{
			if (can_set_exit_state_for_registered_entity("Closet_Door_R", false))
			{
				freeze_entity_position(iLocal_2899[1], true);
			}
		}
		if (can_set_exit_state_for_camera(0))
		{
			if (does_entity_exist(iLocal_2897))
			{
				set_entity_visible(iLocal_2897, true, 0);
			}
			set_gameplay_cam_relative_heading(0f);
			set_gameplay_cam_relative_pitch(0f, 1f);
		}
		if (!is_cutscene_active())
		{
			iLocal_3166 = 2;
		}
	}
	if (iLocal_3166 == 2)
	{
		func_57(&Local_2967, 1);
		clear_help(1);
		_0x81CBAE94390F9F89();
		if (iLocal_2502 && is_screen_faded_out())
		{
			clear_ped_tasks_immediately(player_ped_id());
			set_gameplay_cam_relative_heading(0f);
			set_gameplay_cam_relative_pitch(0f, 1f);
			func_46(get_entity_coords(player_ped_id(), 1), 20f, 1, 10000);
		}
		func_31();
		_door_control(joaat("v_ilev_fa_roomdoor"), -15.989f, -1436.03f, 31.199f, false, 0f, 0f, 0f);
		if (does_object_of_type_exist_at_coords(-14.8691f, -1441.159f, 31.1932f, 3f, joaat("v_ilev_fa_frontdoor"), 0))
		{
			set_state_of_closest_door_of_type(joaat("v_ilev_fa_frontdoor"), -14.8691f, -1441.159f, 31.1932f, true, 0f, 0);
		}
		func_60(0, 1, 1, 0);
		set_frontend_radio_active(1);
		func_56();
		func_4(0);
	}
	if (iLocal_3166 == 3)
	{
		func_3();
		set_cutscene_fade_values(0, 0, 0, 0);
		stop_cutscene(0);
		iLocal_2502 = 1;
		iLocal_3166 = 1;
	}
}

void func_3()
{
	if (!is_screen_faded_out())
	{
		if (!is_screen_fading_out())
		{
			do_screen_fade_out(800);
		}
		while (!is_screen_faded_out())
		{
			wait(0);
		}
	}
}

void func_4(int iParam0)
{
	if (iParam0)
	{
		if (!has_cutscene_finished())
		{
			stop_cutscene(0);
		}
		remove_cutscene();
		while (is_cutscene_active())
		{
			wait(0);
		}
		func_56();
	}
	func_14(5, 1);
	func_11(2, 1);
	special_ability_unlock(func_9(1));
	func_31();
	func_8(6, 0, 1);
	func_5(0, 0);
	func_814();
}

void func_5(int iParam0, int iParam1)
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
		if ((func_59(0) && Global_69735.f_1 == 1) && func_7(Global_69735))
		{
		}
		else
		{
			Global_55749 = 1;
		}
	}
	if (Global_101154.f_7775 || func_59(0))
	{
		iVar0 = func_6();
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

int func_6()
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

bool func_7(int iParam0)
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

void func_8(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == 11 || iParam0 == -1)
	{
		return;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return;
	}
	iVar0 = is_bit_set(Global_101154.f_7775.f_99.f_219[iParam0], iParam1);
	if (iVar0 == iParam2)
	{
		return;
	}
	if (iParam2)
	{
		set_bit(&(Global_101154.f_7775.f_99.f_219[iParam0]), iParam1);
	}
	else
	{
		clear_bit(&(Global_101154.f_7775.f_99.f_219[iParam0]), iParam1);
	}
}

int func_9(int iParam0)
{
	if (func_10(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_10(int iParam0)
{
	return iParam0 < 3;
}

void func_11(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1)
	{
		if (!func_13(iParam0, 0))
		{
			func_12(iParam0, 1, 0);
			func_12(iParam0, 2, 0);
			func_12(iParam0, 3, 0);
			func_12(iParam0, 4, 0);
			func_12(iParam0, 0, 1);
			Global_68319[iParam0] = 1;
		}
	}
	else
	{
		func_12(iParam0, 0, 0);
	}
}

void func_12(int iParam0, int iParam1, int iParam2)
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

int func_13(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return false;
	}
	return is_bit_set(Global_101154.f_18807[iParam0], iParam1);
}

void func_14(int iParam0, int iParam1)
{
	if (iParam0 == 10)
	{
		return;
	}
	if (iParam1)
	{
		set_bit(&(Global_101154.f_5919[iParam0]), false);
	}
	else
	{
		clear_bit(&(Global_101154.f_5919[iParam0]), false);
	}
	set_save_house(Global_86649[iParam0 /*10*/].f_8, iParam1, 1);
	func_20(iParam0);
	func_18(iParam0, 0);
	func_16(iParam0);
	func_15(iParam0);
}

void func_15(int iParam0)
{
	if (iParam0 == 10)
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			set_bit(&(Global_31499[38 / 32]), 38 % 32);
			func_71(38, 0);
			set_bit(&(Global_31499[41 / 32]), 41 % 32);
			func_71(41, 0);
			set_bit(&(Global_31499[43 / 32]), 43 % 32);
			func_71(43, 0);
			set_bit(&(Global_31499[42 / 32]), 42 % 32);
			func_71(42, 0);
			set_bit(&(Global_31499[44 / 32]), 44 % 32);
			func_71(44, 0);
			break;
		
		case 1:
			set_bit(&(Global_31499[51 / 32]), 51 % 32);
			func_71(51, 0);
			break;
		
		case 2:
			set_bit(&(Global_31499[51 / 32]), 51 % 32);
			func_71(51, 0);
			break;
		
		case 3:
			set_bit(&(Global_31499[53 / 32]), 53 % 32);
			func_71(53, 0);
			break;
		
		case 4:
			set_bit(&(Global_31499[81 / 32]), 81 % 32);
			func_71(81, 0);
			set_bit(&(Global_31499[82 / 32]), 82 % 32);
			func_71(82, 0);
			break;
		
		case 5:
			set_bit(&(Global_31499[47 / 32]), 47 % 32);
			func_71(47, 0);
			set_bit(&(Global_31499[50 / 32]), 50 % 32);
			func_71(50, 0);
			break;
		
		case 6:
			set_bit(&(Global_31499[50 / 32]), 50 % 32);
			func_71(50, 0);
			break;
	}
}

void func_16(int iParam0)
{
	if (iParam0 == 10)
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
		case 1:
			if (func_17(1))
			{
				set_save_house(Global_86649[1 /*10*/].f_8, true, 1);
				set_save_house(Global_86649[0 /*10*/].f_8, func_17(0), 0);
			}
			else if (func_17(0))
			{
				set_save_house(Global_86649[0 /*10*/].f_8, true, 1);
				set_save_house(Global_86649[1 /*10*/].f_8, func_17(1), 0);
			}
			break;
		
		case 2:
		case 3:
		case 4:
			if (func_17(3))
			{
				set_save_house(Global_86649[3 /*10*/].f_8, true, 1);
				set_save_house(Global_86649[4 /*10*/].f_8, func_17(4), 0);
				set_save_house(Global_86649[2 /*10*/].f_8, func_17(2), 0);
			}
			else if (func_17(4))
			{
				set_save_house(Global_86649[4 /*10*/].f_8, true, 1);
				set_save_house(Global_86649[3 /*10*/].f_8, func_17(3), 0);
				set_save_house(Global_86649[2 /*10*/].f_8, func_17(2), 0);
			}
			else if (func_17(2))
			{
				set_save_house(Global_86649[2 /*10*/].f_8, true, 1);
				set_save_house(Global_86649[3 /*10*/].f_8, func_17(3), 0);
				set_save_house(Global_86649[4 /*10*/].f_8, func_17(4), 0);
			}
			break;
		
		case 5:
		case 6:
			if (func_17(6))
			{
				set_save_house(Global_86649[6 /*10*/].f_8, true, 1);
				set_save_house(Global_86649[5 /*10*/].f_8, func_17(5), 0);
			}
			else if (func_17(5))
			{
				set_save_house(Global_86649[5 /*10*/].f_8, true, 1);
				set_save_house(Global_86649[6 /*10*/].f_8, func_17(6), 0);
			}
			break;
	}
}

int func_17(int iParam0)
{
	return is_bit_set(Global_101154.f_5919[iParam0], false);
}

void func_18(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<8> Var3;
	int iVar11;
	
	if (iParam0 == 10)
	{
		return;
	}
	iVar11 = is_bit_set(Global_101154.f_5919[iParam0], false);
	if (iParam0 == 5 && is_bit_set(Global_101154.f_5919[6], false))
	{
		iVar11 = true;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		StringCopy(&Var3, "", 32);
		iVar2 = 10;
		while (func_19(iVar0, iVar1, &Var3, &iVar2))
		{
			if (iVar2 == iParam0)
			{
				if (iVar11)
				{
					if (iParam1)
					{
						unk_0xDA05194260CDCDF9(get_hash_key(&Var3), 0);
					}
				}
				_0xF2E1A7133DD356A6(get_hash_key(&Var3), iVar11);
			}
			iVar1++;
		}
		iVar0++;
	}
}

bool func_19(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*iParam3 = 0;
				return true;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*iParam3 = 1;
				return true;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*iParam3 = 5;
				return true;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*iParam3 = 6;
				return true;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*iParam3 = 2;
				return true;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*iParam3 = 3;
				return true;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*iParam3 = 4;
				return true;
			}
			break;
	}
	return false;
}

void func_20(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 10)
	{
		return;
	}
	if (Global_86649[iParam0 /*10*/].f_7 == 263)
	{
		return;
	}
	iVar0 = false;
	if (is_bit_set(Global_101154.f_5919[iParam0], false))
	{
		if (Global_86649[iParam0 /*10*/].f_9 != func_27())
		{
			iVar0 = true;
		}
		else if (!func_25(iParam0))
		{
			iVar0 = true;
		}
	}
	if (iParam0 == 5)
	{
		if (func_17(6))
		{
			iVar0 = false;
		}
	}
	if (func_22(14))
	{
		iVar0 = false;
	}
	func_21(Global_86649[iParam0 /*10*/].f_7, iVar0, 0);
}

void func_21(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (!iParam2)
	{
		iVar1 = is_bit_set(Global_25433[iVar0 /*23*/].f_11, 15);
		if (iVar1 == iParam1)
		{
			return;
		}
	}
	if (iParam1 != is_bit_set(Global_25433[iVar0 /*23*/].f_11, false))
	{
		set_bit(&(Global_25433[iVar0 /*23*/].f_11), 18);
		if (Global_25430 == 1)
		{
			Global_25431 = 1;
		}
		Global_25430 = 1;
	}
	if (iParam1)
	{
		set_bit(&(Global_25433[iVar0 /*23*/].f_11), false);
		set_bit(&(Global_25433[iVar0 /*23*/].f_11), 15);
		set_bit(&(Global_25433[iVar0 /*23*/].f_11), 3);
	}
	else
	{
		clear_bit(&(Global_25433[iVar0 /*23*/].f_11), false);
		clear_bit(&(Global_25433[iVar0 /*23*/].f_11), 15);
	}
	if (!is_bit_set(Global_25433[iVar0 /*23*/].f_11, false))
	{
		if (does_blip_exist(Global_25433[iVar0 /*23*/].f_19))
		{
			set_this_script_can_remove_blips_created_by_any_script(1);
			remove_blip(&(Global_25433[iVar0 /*23*/].f_19));
			set_this_script_can_remove_blips_created_by_any_script(0);
		}
	}
}

bool func_22(int iParam0)
{
	if (Global_35711 == 15)
	{
		return false;
	}
	if (func_23(iParam0))
	{
		return false;
	}
	return true;
}

int func_23(int iParam0)
{
	return func_24(iParam0, Global_35711);
}

bool func_24(int iParam0, int iParam1)
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

bool func_25(int iParam0)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (Global_91330.f_294 == 0)
	{
		return false;
	}
	if (iParam0 == 10)
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (func_25(iVar0))
			{
				return true;
			}
			iVar0++;
		}
	}
	else if (!is_ped_injured(player_ped_id()))
	{
		func_26(iParam0, &sVar1);
		iVar9 = get_interior_at_coords_with_type(Global_86649[iParam0 /*10*/].f_3, &sVar1);
		if (iVar9 != 0 && Global_91330.f_294 == iVar9)
		{
			return true;
		}
	}
	return false;
}

int func_26(int iParam0, char* sParam1)
{
	StringCopy(sParam1, "", 32);
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "v_michael", 32);
			break;
		
		case 5:
			StringCopy(sParam1, "v_franklins", 32);
			break;
		
		case 6:
			StringCopy(sParam1, "v_franklinshouse", 32);
			break;
		
		case 2:
		case 1:
			if (is_ipl_active("TrevorsTrailer"))
			{
				StringCopy(sParam1, "v_trailer", 32);
			}
			else if (is_ipl_active("TrevorsTrailerTidy"))
			{
				StringCopy(sParam1, "V_TrailerTIDY", 32);
			}
			else if (is_ipl_active("TrevorsTrailerTrash"))
			{
				StringCopy(sParam1, "V_TrailerTRASH", 32);
			}
			break;
		
		case 3:
			StringCopy(sParam1, "v_trevors", 32);
			break;
		
		case 4:
			StringCopy(sParam1, "v_strip3", 32);
			break;
		
		case 8:
		case 7:
		case 9:
			StringCopy(sParam1, "v_psycheoffice", 32);
			break;
	}
	return !are_strings_equal(sParam1, "");
}

var func_27()
{
	func_28();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_28()
{
	int iVar0;
	
	if (does_entity_exist(player_ped_id()))
	{
		if (func_9(Global_101154.f_1826.f_539.f_3549) != get_entity_model(player_ped_id()))
		{
			iVar0 = func_30(player_ped_id());
			if (func_10(iVar0) && (!func_29(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_10(Global_101154.f_1826.f_539.f_3549))
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

int func_29(int iParam0)
{
	return Global_35711 == iParam0;
}

int func_30(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (does_entity_exist(iParam0))
	{
		iVar1 = get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_9(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

void func_31()
{
	func_32(0, 1, 0);
	func_32(1, 1, 0);
	func_32(2, 1, 0);
	func_32(3, 1, 0);
	func_32(4, 1, 0);
	func_32(5, 1, 0);
	func_32(6, 1, 0);
}

void func_32(int iParam0, int iParam1, int iParam2)
{
	if (iParam1)
	{
		if (!func_45(iParam0, 0, 0))
		{
			if (iParam2 && Global_91330.f_17[iParam0])
			{
				if (func_44(iParam0) == 3 && !func_43(iParam0))
				{
					func_42(iParam0);
					func_41(iParam0, 0, 0);
					func_34(iParam0, 1, 0);
					func_33(iParam0);
				}
				else
				{
					func_41(iParam0, 1, 0);
					func_33(iParam0);
				}
			}
			else
			{
				func_41(iParam0, 0, 0);
				func_34(iParam0, 1, 0);
				func_33(iParam0);
			}
		}
		else
		{
			func_34(iParam0, 1, 0);
			func_33(iParam0);
		}
	}
	else if (func_45(iParam0, 0, 0))
	{
		func_34(iParam0, 0, 0);
		func_34(iParam0, 1, 0);
		func_33(iParam0);
	}
}

void func_33(int iParam0)
{
	Global_91330.f_156[iParam0] = 1;
	Global_91330.f_155 = 1;
}

void func_34(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam2)
	{
		clear_bit(&(Global_91330.f_1300[iParam0]), iParam1);
	}
	else if (network_is_game_in_progress())
	{
		if (func_40() == 0)
		{
			iVar0 = func_38(func_39(iParam0), -1, 0);
			clear_bit(&iVar0, iParam1);
			func_35(func_39(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		clear_bit(&(Global_101154.f_668[iParam0]), iParam1);
	}
}

void func_35(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2469339[iParam0 /*5*/][func_36(iParam2)];
	if (iVar0 != 0)
	{
		stat_set_int(iVar0, iParam1, iParam3);
	}
}

int func_36(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_37();
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

var func_37()
{
	return Global_1312747;
}

int func_38(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2469339[iParam0 /*5*/][func_36(iParam1)];
	if (stat_get_int(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_39(int iParam0)
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

var func_40()
{
	return Global_25120;
}

void func_41(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam2)
	{
		set_bit(&(Global_91330.f_1300[iParam0]), iParam1);
	}
	else if (network_is_game_in_progress())
	{
		if (func_40() == 0)
		{
			iVar0 = func_38(func_39(iParam0), -1, 0);
			set_bit(&iVar0, iParam1);
			func_35(func_39(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		set_bit(&(Global_101154.f_668[iParam0]), iParam1);
	}
}

void func_42(int iParam0)
{
	if (Global_91330.f_17[iParam0])
	{
		func_41(iParam0, 10, 1);
		func_41(iParam0, 19, 1);
	}
}

int func_43(int iParam0)
{
	return func_45(iParam0, 5, 1);
}

int func_44(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 5;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
	}
	return 5;
}

int func_45(int iParam0, int iParam1, int iParam2)
{
	if (iParam2)
	{
		return is_bit_set(Global_91330.f_1300[iParam0], iParam1);
	}
	else if (network_is_game_in_progress())
	{
		if (func_40() == 0)
		{
			return is_bit_set(func_38(func_39(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return is_bit_set(Global_101154.f_668[iParam0], iParam1);
	}
	return false;
}

void func_46(vector3 vParam0, float fParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = get_game_timer();
	while (get_game_timer() - iVar0 < iParam5)
	{
		if (!is_new_load_scene_active())
		{
			_new_load_scene_start_safe(vParam0, fParam3, iParam4);
		}
		else if (is_new_load_scene_loaded())
		{
			iVar0 = 0;
		}
		wait(0);
	}
	new_load_scene_stop();
}

int func_47(char* sParam0)
{
	_0x0A24DA3A41B718F5(sParam0);
	return _0x10BDDBFC529428DD(0);
}

int func_48(vector3 vParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = add_blip_for_coord(vParam0);
	set_blip_scale(iVar0, func_49(network_is_game_in_progress(), 1f, 1f));
	set_blip_route(iVar0, iParam3);
	return iVar0;
}

float func_49(int iParam0, float fParam1, float fParam2)
{
	if (iParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_50(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (iParam1 == is_bit_set(Global_25433[iVar0 /*23*/].f_11, 7))
	{
		return;
	}
	if (iParam1)
	{
		set_bit(&(Global_25433[iVar0 /*23*/].f_11), 7);
	}
	else
	{
		clear_bit(&(Global_25433[iVar0 /*23*/].f_11), 7);
	}
	if (Global_25430 == 1)
	{
		Global_25431 = 1;
	}
	Global_25430 = 1;
	set_bit(&(Global_25433[iVar0 /*23*/].f_11), 18);
}

void func_51(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (iParam0 != -1)
	{
		if (!func_54(iParam0))
		{
			return;
		}
		Global_25180[iParam0 /*11*/].f_5 = 1;
		Global_25180[iParam0 /*11*/] = iParam1;
		Global_25180[iParam0 /*11*/].f_1 = iParam2;
		Global_25180[iParam0 /*11*/].f_9 = iParam4;
		Global_25180[iParam0 /*11*/].f_7 = iParam3;
		if (func_53(iParam0))
		{
			set_tv_channel(-1);
			_0xF7B38B8305F1FE8B(iParam1, func_52(iParam2), iParam4);
			set_tv_channel(iParam1);
		}
	}
	StringCopy(&Global_25258, get_this_script_name(), 24);
}

char* func_52(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 1:
			sVar0 = "PL_STD_CNT";
			break;
		
		case 2:
			sVar0 = "PL_STD_WZL";
			break;
		
		case 3:
			sVar0 = "PL_LO_CNT";
			break;
		
		case 4:
			sVar0 = "PL_LO_WZL";
			break;
		
		case 7:
			sVar0 = "PL_SP_WORKOUT";
			break;
		
		case 8:
			sVar0 = "PL_SP_INV";
			break;
		
		case 9:
			sVar0 = "PL_SP_INV_EXP";
			break;
		
		case 5:
			sVar0 = "PL_LO_RS";
			break;
		
		case 6:
			sVar0 = "PL_LO_RS_CUTSCENE";
			break;
		
		case 10:
			sVar0 = "PL_SP_PLSH1_INTRO";
			break;
		
		case 11:
			sVar0 = "PL_LES1_FAME_OR_SHAME";
			break;
		
		case 12:
			sVar0 = "PL_STD_WZL_FOS_EP2";
			break;
		
		case 13:
			sVar0 = "PL_MP_WEAZEL";
			break;
		
		case 14:
			sVar0 = "PL_MP_CCTV";
			break;
	}
	return sVar0;
}

bool func_53(int iParam0)
{
	if (iParam0 != -1)
	{
		if (Global_25180[iParam0 /*11*/].f_2)
		{
			return true;
		}
	}
	return false;
}

bool func_54(int iParam0)
{
	if (iParam0 != -1)
	{
		if (Global_25180[iParam0 /*11*/].f_6)
		{
			return true;
		}
	}
	return false;
}

void func_55(char* sParam0, int iParam1)
{
	_set_text_component_format(sParam0);
	_display_help_text_from_string_label(0, 0, true, iParam1);
}

void func_56()
{
	if (!is_screen_faded_in())
	{
		if (!is_screen_fading_in())
		{
			do_screen_fade_in(800);
		}
		while (!is_screen_faded_in())
		{
			wait(0);
		}
	}
}

void func_57(int iParam0, int iParam1)
{
	if (does_entity_exist(*iParam0))
	{
		if (!is_ped_injured(*iParam0))
		{
			stop_synchronized_entity_anim(*iParam0, -8f, 1);
			if (!is_ped_in_any_vehicle(*iParam0, 0) && !is_ped_getting_into_a_vehicle(*iParam0))
			{
				if ((is_entity_attached_to_any_object(*iParam0) || is_entity_attached_to_any_ped(*iParam0)) || is_entity_attached_to_any_vehicle(*iParam0))
				{
					detach_entity(*iParam0, 1, true);
				}
				freeze_entity_position(*iParam0, false);
			}
			if (!is_ped_in_any_vehicle(*iParam0, 0))
			{
				set_entity_collision(*iParam0, true, 0);
			}
			if (is_ped_group_member(*iParam0, func_58()))
			{
				remove_ped_from_group(*iParam0);
			}
			if (!iParam1)
			{
				set_ped_keep_task(*iParam0, true);
			}
		}
		if (iParam1)
		{
			delete_ped(iParam0);
		}
		else
		{
			set_ped_as_no_longer_needed(iParam0);
		}
	}
}

int func_58()
{
	return get_player_group(get_player_index());
}

int func_59(int iParam0)
{
	if (!iParam0 && _get_number_of_instances_of_streamed_script(joaat("benchmark")) > 0)
	{
		return true;
	}
	return is_bit_set(Global_69737, false);
}

void func_60(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam0)
	{
		special_ability_deactivate_fast(player_id());
		set_all_random_peds_flee(player_id(), 1);
		set_police_ignore_player(player_id(), 1);
		func_68(1);
		_0xA8FDB297A8D25FBA();
		_0xFDB423997FA30340();
		if (Global_14413.f_1 > 3)
		{
			if (is_mobile_phone_call_ongoing())
			{
				stop_scripted_conversation(false);
			}
			if (!func_67())
			{
				Global_14413.f_1 = 3;
			}
			Global_15712 = 5;
		}
		func_66(1, iParam3, iParam2, 0);
		Global_55755 = 1;
		Global_68061 = 1;
		Global_69487 = 1;
	}
	else
	{
		func_68(0);
		_0xE1CD1E48E025E661();
		Global_55755 = 0;
		if (iParam1)
		{
			_0x03FC694AE06C5A20();
		}
		set_all_random_peds_flee(player_id(), 0);
		set_police_ignore_player(player_id(), 0);
		func_66(0, iParam3, iParam2, 0);
		if (network_is_game_in_progress())
		{
			if (((!is_ped_injured(player_ped_id()) && !func_64(player_id())) && !func_62(player_id(), 0)) && !func_61())
			{
				set_entity_invincible(player_ped_id(), false);
			}
		}
		else if (!is_ped_injured(player_ped_id()) && !func_64(player_id()))
		{
			set_entity_invincible(player_ped_id(), false);
		}
		Global_69487 = 0;
	}
}

int func_61()
{
	return is_bit_set(Global_1587523[player_id() /*444*/].f_39.f_18, 14);
}

int func_62(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == player_id())
	{
		iVar0 = func_63(-1, 0) == 8;
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

int func_63(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_37();
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

bool func_64(int iParam0)
{
	if (func_62(iParam0, 0))
	{
		return true;
	}
	if (func_65())
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

int func_65()
{
	return is_bit_set(Global_2359301, 3);
}

int func_66(int iParam0, int iParam1, var uParam2, int iParam3)
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

bool func_67()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return true;
	}
	return false;
}

void func_68(int iParam0)
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

void func_69()
{
	Global_14578 = 0;
	func_70();
}

void func_70()
{
	restart_scripted_conversation();
	Global_16723 = 0;
	if (is_scripted_conversation_ongoing())
	{
		stop_scripted_conversation(false);
		Global_15712 = 6;
	}
}

void func_71(int iParam0, int iParam1)
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
			func_73(iParam0);
			if (is_bit_set(Global_31499[iParam0 / 32], iParam0 % 32))
			{
				func_72(iParam0);
			}
		}
	}
}

void func_72(int iParam0)
{
	if (!is_bit_set(Global_32442.f_228[iParam0 / 32], iParam0 % 23))
	{
		set_bit(&(Global_32442.f_228[iParam0 / 32]), iParam0 % 23);
		Global_32442[Global_32442.f_227] = iParam0;
		Global_32442.f_227++;
	}
}

void func_73(int iParam0)
{
	struct<7> Var0;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	
	if (!func_94())
	{
		return;
	}
	if (is_ped_injured(player_ped_id()))
	{
		return;
	}
	Var0 = {func_93(iParam0)};
	if (is_bit_set(Var0.f_4, 2))
	{
		func_79(iParam0, &Var0);
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
			iVar9 = func_76(iParam0);
		}
		else
		{
			iVar9 = 0;
		}
		if (func_29(14))
		{
			iVar9 = 0;
		}
	}
	else if (is_bit_set(Var0.f_4, true) && _get_number_of_instances_of_streamed_script(joaat("ambient_solomon")) == 0)
	{
		if (func_74())
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
		func_72(iParam0);
		if (Global_31517[iParam0] < 2)
		{
			Global_31517[iParam0]++;
		}
	}
}

bool func_74()
{
	if (is_player_wanted_level_greater(player_id(), 0))
	{
		return false;
	}
	switch (func_75())
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

var func_75()
{
	func_28();
	return Global_101154.f_1826.f_539.f_3549;
}

bool func_76(int iParam0)
{
	int iVar0;
	
	iVar0 = func_75();
	if (func_77(iParam0))
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
		if (func_10(iVar0))
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
			if (func_10(iVar0))
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
			if (func_10(iVar0))
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
			if (func_10(iVar0))
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
				if (func_10(iVar0))
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
				if (func_10(iVar0))
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
			if (func_10(iVar0))
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

bool func_77(int iParam0)
{
	int iVar0;
	
	if ((iParam0 == 40 || iParam0 == 49) || iParam0 == 52)
	{
		if (!is_ped_injured(player_ped_id()))
		{
			if (is_ped_in_any_vehicle(player_ped_id(), 1))
			{
				iVar0 = get_entity_model(func_78(get_vehicle_ped_is_in(player_ped_id(), 1)));
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

int func_78(int iParam0)
{
	return iParam0;
}

void func_79(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (!is_bit_set(*uParam1.f_4, 2))
	{
		return;
	}
	iVar0 = func_82();
	iVar1 = func_81(iVar0);
	switch (iParam0)
	{
		case 133:
		case 134:
		case 201:
		case 202:
			if (func_80(iParam0))
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
			if (func_80(iParam0))
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
			if (func_80(iParam0))
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
			if (func_80(iParam0))
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
			if (!func_80(iParam0))
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
			if (!func_80(iParam0))
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
				if (!func_80(iParam0))
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
				if (!func_80(iParam0))
				{
					Global_101154.f_5951[iParam0] = 1;
					_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
				}
			}
			break;
		
		case 70:
		case 71:
		case 72:
			if (!func_80(iParam0) && _get_number_of_instances_of_streamed_script(Global_82399[26 /*34*/].f_6) == 0)
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
			if (!func_80(iParam0))
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
			if (!func_80(iParam0))
			{
				Global_101154.f_5951[iParam0] = 1;
				_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
			}
			break;
		
		case 193:
			if (!func_80(iParam0))
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
			if (!func_80(iParam0))
			{
				Global_101154.f_5951[iParam0] = 1;
				_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
			}
			break;
		
		case 80:
			if (!func_80(iParam0))
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
			if (!func_80(iParam0))
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
				if (!func_80(iParam0))
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
				if (!func_80(iParam0))
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
				if (!func_80(iParam0))
				{
					Global_101154.f_5951[iParam0] = 1;
					_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
				}
			}
			break;
		
		case 216:
			if (!func_80(iParam0))
			{
				Global_101154.f_5951[iParam0] = 1;
				_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
			}
			break;
		
		case 217:
		case 218:
			if (!func_80(iParam0))
			{
				Global_101154.f_5951[iParam0] = 1;
				_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
			}
			break;
		
		case 219:
		case 220:
		case 221:
		case 222:
			if (func_80(iParam0))
			{
				Global_101154.f_5951[iParam0] = 0;
				_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
			}
			break;
	}
}

int func_80(int iParam0)
{
	struct<7> Var0;
	int iVar7;
	
	Var0 = {func_93(iParam0)};
	iVar7 = _0x160AA1B32F6139B8(Var0.f_5);
	return ((iVar7 == 1 || iVar7 == 4) || iVar7 == 2);
}

int func_81(int iParam0)
{
	return shift_right(iParam0, 9) & 31;
}

var func_82()
{
	var uVar0;
	
	func_92(&uVar0, get_clock_seconds());
	func_91(&uVar0, get_clock_minutes());
	func_90(&uVar0, get_clock_hours());
	func_85(&uVar0, get_clock_day_of_month());
	func_84(&uVar0, get_clock_month());
	func_83(&uVar0, get_clock_year());
	return uVar0;
}

void func_83(var uParam0, int iParam1)
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

void func_84(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 -= *uParam0 & 15;
	*uParam0 = (*uParam0 || iParam1);
}

void func_85(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_89(*uParam0);
	iVar1 = func_87(*uParam0);
	if (iParam1 < 1 || iParam1 > func_86(iVar0, iVar1))
	{
		return;
	}
	*uParam0 -= *uParam0 & 496;
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

int func_86(int iParam0, int iParam1)
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

var func_87(int iParam0)
{
	return shift_right(iParam0, 26) & 31 * func_88(is_bit_set(iParam0, 31), -1, 1) + 2011;
}

int func_88(int iParam0, int iParam1, int iParam2)
{
	if (iParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_89(var uParam0)
{
	return uParam0 & 15;
}

void func_90(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 -= *uParam0 & 15872;
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_91(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 -= *uParam0 & 1032192;
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_92(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 -= *uParam0 & 66060288;
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

struct<7> func_93(int iParam0)
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

bool func_94()
{
	if ((func_40() == -1 || func_40() == 999) && !func_95() == 0)
	{
		return true;
	}
	return false;
}

var func_95()
{
	return Global_25121;
}

int func_96()
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

bool func_97()
{
	if (Global_16723 == 1)
	{
		return true;
	}
	return false;
}

bool func_98()
{
	if (Global_15712 != 0 || is_scripted_conversation_ongoing())
	{
		return true;
	}
	return false;
}

void func_99(char* sParam0)
{
	int iVar0;
	
	iVar0 = get_hash_key(sParam0);
	if (_0xB56BBBCC2955D9CB())
	{
		if (iVar0 == 846233810)
		{
			func_100("Franklin", player_ped_id(), 0, 2);
			set_cutscene_ped_component_variation("Lamar", 2, 0, 0, false);
			set_cutscene_ped_component_variation("Lamar", 3, 0, 0, false);
			set_cutscene_ped_component_variation("Lamar", 4, 0, 0, false);
			set_cutscene_ped_component_variation("Lamar", 5, 2, 0, false);
			set_cutscene_ped_component_variation("Lamar", 9, 0, 0, false);
			set_cutscene_ped_component_variation("Lamar", 8, 0, 0, false);
			set_cutscene_ped_component_variation("Michael", 3, 0, 0, false);
			set_cutscene_ped_component_variation("Michael", 4, 0, 0, false);
			set_cutscene_ped_component_variation("Michael", 5, 0, 0, false);
			set_cutscene_ped_component_variation("Michael", 6, 0, 0, false);
			set_cutscene_ped_component_variation("Michael", 9, 0, 0, false);
			set_cutscene_ped_component_variation("Michael", 8, 0, 0, false);
			set_cutscene_ped_component_variation("Michael", 11, 0, 0, false);
		}
		else if (iVar0 == 2029898270)
		{
			func_100("Franklin", player_ped_id(), 0, 2);
			if (!is_ped_injured(Local_2967))
			{
				_0x2A56C06EBEF2B0D9("Lamar", Local_2967, 0);
			}
			set_cutscene_ped_component_variation("Siemon", 3, 1, 0, false);
			set_cutscene_ped_component_variation("Jimmy", 3, 4, 0, false);
			set_cutscene_ped_component_variation("Jimmy", true, 1, 0, false);
			set_cutscene_ped_component_variation("Jimmy", 2, 2, 0, false);
			set_cutscene_ped_component_variation("Jimmy", 4, 0, 0, false);
			set_cutscene_ped_component_variation("Jimmy", 6, 0, 0, false);
			set_cutscene_ped_component_variation("Jimmy", 8, 3, 0, false);
			set_cutscene_ped_component_variation("Jimmy", 10, 2, 0, false);
		}
		else if (iVar0 == -2000131661)
		{
			func_100("Franklin", player_ped_id(), 0, 2);
			if (!is_ped_injured(Local_2967))
			{
				_0x2A56C06EBEF2B0D9("Lamar", Local_2967, 0);
			}
		}
	}
}

void func_100(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	struct<50> Var0;
	int iVar65;
	
	Var0 = 12;
	Var0.f_13 = 12;
	Var0.f_26 = 12;
	Var0.f_39 = 9;
	Var0.f_49 = 9;
	func_101(iParam1, &Var0, iParam3);
	iVar65 = false;
	while (iVar65 < 12)
	{
		set_cutscene_ped_component_variation(sParam0, iVar65, Var0.f_13[iVar65], Var0[iVar65], iParam2);
		iVar65++;
	}
	iVar65 = false;
	while (iVar65 < 9)
	{
		if (Var0.f_39[iVar65] == -1 || Var0.f_39[iVar65] == 255)
		{
			set_cutscene_ped_prop_variation(sParam0, iVar65, -1, 0, iParam2);
		}
		else
		{
			set_cutscene_ped_prop_variation(sParam0, iVar65, Var0.f_39[iVar65], Var0.f_49[iVar65], iParam2);
		}
		iVar65++;
	}
}

void func_101(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	struct<50> Var2;
	struct<14> Var67;
	int iVar81;
	int iVar82;
	int iVar83;
	int iVar84;
	int iVar85;
	int iVar86;
	
	Var2 = 12;
	Var2.f_13 = 12;
	Var2.f_26 = 12;
	Var2.f_39 = 9;
	Var2.f_49 = 9;
	iVar81 = get_entity_model(iParam0);
	func_181(iParam0, &Var2, 0);
	func_181(iParam0, uParam1, iParam2);
	iVar82 = 0;
	iVar83 = 0;
	iVar0 = false;
	while (iVar0 < 12)
	{
		if (*uParam1.f_13[iVar0] != Var2.f_13[iVar0] || *uParam1[iVar0] != Var2[iVar0])
		{
			if (func_178(iVar81, func_180(iVar0), func_179(iParam0, Var2.f_13[iVar0], Var2[iVar0], func_180(iVar0)), &iVar1))
			{
				Var67 = {func_112(iVar81, 2, *uParam1.f_59)};
				*uParam1.f_13[2] = Var67.f_3;
				*uParam1[2] = Var67.f_4;
				iVar82 = 1;
			}
			if (func_110(iVar81, func_180(iVar0), func_179(iParam0, Var2.f_13[iVar0], Var2[iVar0], func_180(iVar0)), &iVar1))
			{
				Var67 = {func_112(iVar81, 1, *uParam1.f_62)};
				*uParam1.f_13[1] = Var67.f_3;
				*uParam1[1] = Var67.f_4;
				iVar83 = 1;
			}
		}
		iVar0++;
	}
	iVar0 = false;
	while (iVar0 < 9)
	{
		if (*uParam1.f_39[iVar0] != Var2.f_39[iVar0] || *uParam1.f_49[iVar0] != Var2.f_49[iVar0])
		{
			if (func_178(iVar81, 14, func_103(iParam0, Var2.f_39[iVar0], Var2.f_49[iVar0], iVar0), &iVar1))
			{
				Var67 = {func_112(iVar81, 2, *uParam1.f_59)};
				*uParam1.f_13[2] = Var67.f_3;
				*uParam1[2] = Var67.f_4;
				iVar82 = 1;
			}
			if (func_110(iVar81, 14, func_103(iParam0, Var2.f_39[iVar0], Var2.f_49[iVar0], iVar0), &iVar1))
			{
				Var67 = {func_112(iVar81, 1, *uParam1.f_62)};
				*uParam1.f_13[1] = Var67.f_3;
				*uParam1[1] = Var67.f_4;
				iVar83 = 1;
			}
		}
		iVar0++;
	}
	if (iVar83 || iVar82)
	{
		iVar84 = func_179(iParam0, *uParam1.f_13[1], *uParam1[1], 1);
		iVar85 = func_179(iParam0, *uParam1.f_13[2], *uParam1[2], 2);
		iVar86 = func_102(iVar81, iVar85, iVar84);
		if (iVar86 != -99)
		{
			Var67 = {func_112(iVar81, 0, iVar86)};
			*uParam1.f_13[0] = Var67.f_3;
			*uParam1[0] = Var67.f_4;
		}
	}
}

int func_102(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			if (iParam1 == 1)
			{
				if (iParam2 == 0)
				{
					return 1;
				}
				else if (iParam2 == 4)
				{
					return 5;
				}
				else
				{
					return 3;
				}
			}
			else if (iParam2 == 0)
			{
				return 0;
			}
			else if (iParam2 == 4)
			{
				return 4;
			}
			else
			{
				return 2;
			}
			break;
		
		case joaat("player_one"):
			if (iParam1 >= 0 && iParam1 <= 15)
			{
				if (iParam2 == 0)
				{
					return 0;
				}
				else
				{
					return 3;
				}
			}
			else if (iParam1 >= 16 && iParam1 <= 17)
			{
				if (iParam2 == 0)
				{
					return 2;
				}
				else
				{
					return 5;
				}
			}
			else if (iParam1 == 18)
			{
				if (iParam2 == 0)
				{
					return 6;
				}
				else
				{
					return 7;
				}
			}
			else if (iParam1 == 19)
			{
				if (iParam2 == 0)
				{
					return 1;
				}
				else
				{
					return 4;
				}
			}
			else if (iParam2 == 0)
			{
				return 1;
			}
			else
			{
				return 4;
			}
			break;
		
		case joaat("player_two"):
			if (iParam1 == 2)
			{
				if (iParam2 == 0)
				{
					return 2;
				}
				else
				{
					return 3;
				}
			}
			else if (iParam1 == 3)
			{
				if (iParam2 == 0)
				{
					return 4;
				}
				else
				{
					return 6;
				}
			}
			else if (iParam1 == 8)
			{
				return 5;
			}
			else if (iParam2 == 0)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
	}
	return -99;
}

int func_103(int iParam0, int iParam1, int iParam2, int iParam3)
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
		return func_109(iParam3);
	}
	iVar0 = get_entity_model(iParam0);
	iVar1 = get_hash_name_for_prop(iParam0, iParam3, iParam1, iParam2);
	if (iVar1 != -1 && iVar1 != 0)
	{
		if (iVar0 == joaat("mp_m_freemode_01"))
		{
			return func_105(get_entity_model(iParam0), iVar1, 14, 3);
		}
		else if (iVar0 == joaat("mp_f_freemode_01"))
		{
			return func_105(get_entity_model(iParam0), iVar1, 14, 4);
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
					iVar3 += func_104(iParam0, iParam3);
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
	return func_109(iParam3);
}

int func_104(int iParam0, int iParam1)
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

int func_105(int iParam0, int iParam1, int iParam2, int iParam3)
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
					return func_108(iParam0) + iVar18;
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
		iVar39 = _get_num_props_from_outfit(iParam3, 6, -1, 0, -1, func_107(iParam2));
		iVar37 = 0;
		while (iVar37 < iVar39)
		{
			get_shop_ped_query_component(iVar37, &Var20);
			if (!_is_dlc_data_empty(Var20))
			{
				if (iParam1 == Var20.f_1)
				{
					return func_106(iParam0, func_107(iParam2)) + iVar38;
				}
				iVar38++;
			}
			iVar37++;
		}
	}
	return -99;
}

int func_106(int iParam0, int iParam1)
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

int func_107(int iParam0)
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

int func_108(int iParam0)
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

int func_109(int iParam0)
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

bool func_110(int iParam0, int iParam1, int iParam2, int iParam3)
{
	var uVar0;
	
	*iParam3 = -99;
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 10:
					if (iParam2 >= 44 && iParam2 <= 47)
					{
						*iParam3 = 0;
					}
					break;
				
				case 14:
					if (((((((iParam2 >= 31 && iParam2 <= 32) || (iParam2 >= 33 && iParam2 <= 34)) || (iParam2 >= 35 && iParam2 <= 36)) || iParam2 == 37) || (iParam2 >= 38 && iParam2 <= 39)) || (iParam2 >= 40 && iParam2 <= 41)) || (iParam2 >= 42 && iParam2 <= 44))
					{
						*iParam3 = 0;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 10:
					if (iParam2 >= 47 && iParam2 <= 50)
					{
						*iParam3 = 0;
					}
					break;
				
				case 14:
					if (((((iParam2 >= 26 && iParam2 <= 27) || (iParam2 >= 28 && iParam2 <= 29)) || (iParam2 >= 30 && iParam2 <= 31)) || iParam2 == 32) || (iParam2 >= 35 && iParam2 <= 36))
					{
						*iParam3 = 0;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 9:
					if (iParam2 >= 15 && iParam2 <= 16)
					{
						*iParam3 = 0;
					}
					break;
				
				case 10:
					if (iParam2 >= 29 && iParam2 <= 32)
					{
						*iParam3 = 0;
					}
					break;
				
				case 14:
					if (((((((iParam2 >= 47 && iParam2 <= 48) || (iParam2 >= 49 && iParam2 <= 50)) || (iParam2 >= 51 && iParam2 <= 52)) || iParam2 == 53) || (iParam2 >= 54 && iParam2 <= 55)) || (iParam2 >= 56 && iParam2 <= 57)) || (iParam2 >= 58 && iParam2 <= 60))
					{
						*iParam3 = 0;
					}
					break;
			}
			break;
	}
	if (*iParam3 != -99)
	{
		uVar0 = func_111(iParam0);
		Global_101154.f_1826.f_539[uVar0 /*65*/].f_63 = iParam2;
		Global_101154.f_1826.f_539[uVar0 /*65*/].f_64 = iParam1;
		return true;
	}
	return false;
}

int func_111(int iParam0)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			return 0;
			break;
		
		case joaat("player_one"):
			return 1;
			break;
		
		case joaat("player_two"):
			return 2;
			break;
		
		default:
			break;
	}
	return 145;
}

struct<14> func_112(int iParam0, int iParam1, int iParam2)
{
	func_177();
	if (iParam0 == joaat("player_zero"))
	{
		func_159(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_one"))
	{
		func_140(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_two"))
	{
		func_113(iParam1, iParam2);
	}
	return Global_69311[0 /*14*/];
}

void func_113(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_139(iParam1);
			break;
		
		case 2:
			func_138(iParam1);
			break;
		
		case 3:
			func_135(iParam1);
			break;
		
		case 4:
			func_134(iParam1);
			break;
		
		case 6:
			func_133(iParam1);
			break;
		
		case 5:
			func_132(iParam1);
			break;
		
		case 8:
			func_131(iParam1);
			break;
		
		case 9:
			func_130(iParam1);
			break;
		
		case 10:
			func_129(iParam1);
			break;
		
		case 1:
			func_128(iParam1);
			break;
		
		case 7:
			func_127(iParam1);
			break;
		
		case 11:
			func_126(iParam1);
			break;
		
		case 12:
			func_125(iParam1);
			break;
		
		case 13:
			func_124(iParam1);
			break;
		
		case 14:
			func_114(iParam1);
			break;
	}
}

void func_114(int iParam0)
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
			func_123(iVar10, iParam0, 155);
			return;
			break;
	}
	func_115(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_115(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
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
	*uParam0.f_12 = func_122(iParam8);
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
		if (func_29(14))
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
			if (!func_120(Global_2621444, 1, 1, 1, -1))
			{
				clear_bit(uParam0.f_6, 2);
			}
			if (!func_120(Global_2621444, 2, 1, 1, -1))
			{
				set_bit(uParam0.f_6, 4);
			}
		}
		else if (iParam1 == 13)
		{
		}
		else if (iParam1 == 14)
		{
			if (!func_120(Global_2621444, 1, 1, 1, -1))
			{
				clear_bit(uParam0.f_6, 2);
			}
			if (!func_120(Global_2621444, 2, 1, 1, -1))
			{
				set_bit(uParam0.f_6, 4);
			}
		}
		else
		{
			if (!func_120(Global_2621444, 1, 1, 1, -1))
			{
				clear_bit(uParam0.f_6, 2);
			}
			if (!func_120(Global_2621444, 2, 1, 1, -1))
			{
				set_bit(uParam0.f_6, 4);
			}
		}
	}
	else if (*uParam0.f_5 >= 0 && *uParam0.f_5 < 3)
	{
		set_bit(uParam0.f_6, false);
		set_bit(uParam0.f_6, 5);
		if (func_119(iParam1, *uParam0.f_5, *uParam0.f_2, 0, *uParam0.f_1, 0, 0))
		{
			set_bit(uParam0.f_6, true);
		}
		if (func_119(iParam1, *uParam0.f_5, *uParam0.f_2, 1, *uParam0.f_1, 0, 0))
		{
			set_bit(uParam0.f_6, 2);
		}
		if (!func_119(iParam1, *uParam0.f_5, *uParam0.f_2, 2, *uParam0.f_1, 0, 0))
		{
			set_bit(uParam0.f_6, 4);
		}
	}
	else
	{
		set_bit(uParam0.f_6, false);
		if ((((((((((iParam1 == 11 || iParam1 == 4) || iParam1 == 6) || iParam1 == 1) || iParam1 == 14) || iParam1 == 2) || iParam1 == 8) || iParam1 == 9) || iParam1 == 10) || iParam1 == 7) || iParam1 == 12)
		{
			if (func_29(14))
			{
				return;
			}
			iVar0 = func_38(func_118(iParam1, *uParam0.f_2), Global_69309, 0);
			if (is_bit_set(iVar0, *uParam0.f_1))
			{
				set_bit(uParam0.f_6, true);
			}
			iVar0 = func_38(func_117(iParam1, *uParam0.f_2), Global_69309, 0);
			if (is_bit_set(iVar0, *uParam0.f_1))
			{
				set_bit(uParam0.f_6, 2);
			}
			if (func_116(iParam1, *uParam0.f_2, &iVar1))
			{
				iVar0 = func_38(iVar1, Global_69309, 0);
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

int func_116(int iParam0, int iParam1, var uParam2)
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

int func_117(int iParam0, int iParam1)
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

int func_118(int iParam0, int iParam1)
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

int func_119(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

int func_120(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
	if (func_121(uParam0, iParam1, &iVar2, &iVar1, iParam2, iParam3))
	{
		iVar3 = func_38(iVar2, iVar0, 0);
		return is_bit_set(iVar3, iVar1);
	}
	return false;
}

int func_121(var uParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)
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

int func_122(int iParam0)
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

void func_123(int iParam0, int iParam1, int iParam2)
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
					func_115(&(Global_69311[0 /*14*/]), iParam0, iParam1, &(Var2.f_7), 0, 0, Var2.f_2, 0, -1, 2, 1);
					return;
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else if (iParam0 == 13)
	{
		func_115(&(Global_69311[0 /*14*/]), iParam0, iParam1, "NO_LABEL", 0, 0, 0, 1, -1, 2, 1);
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
					func_115(&(Global_69311[0 /*14*/]), iParam0, iParam1, &(Var20.f_9), Var20.f_3, Var20.f_4, Var20.f_5, _0x341DE7ED1D2A1BFD(Var20.f_1, -2050632586, false), iVar37, 2, Var20.f_1 != 0);
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
		iVar60 = _get_num_props_from_outfit(iVar1, 6, -1, 0, -1, func_107(iParam0));
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
					func_115(&(Global_69311[0 /*14*/]), iParam0, iParam1, &(Var41.f_9), Var41.f_3, Var41.f_4, Var41.f_5, _0x341DE7ED1D2A1BFD(Var41.f_1, -2050632586, false), -1, 2, Var41.f_1 != 0);
					return;
				}
				iVar59++;
			}
			iVar58++;
		}
	}
}

void func_124(int iParam0)
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
			func_123(iVar10, iParam0, 9);
			return;
			break;
	}
	func_115(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_125(int iParam0)
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
			func_123(iVar10, iParam0, 48);
			return;
			break;
	}
	func_115(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_126(int iParam0)
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
			func_123(iVar10, iParam0, 1);
			return;
			break;
	}
	func_115(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_127(int iParam0)
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
			func_123(iVar10, iParam0, 1);
			return;
			break;
	}
	func_115(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_128(int iParam0)
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
			func_123(iVar10, iParam0, 6);
			return;
			break;
	}
	func_115(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_129(int iParam0)
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
			func_123(iVar10, iParam0, 33);
			return;
			break;
	}
	func_115(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
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
			func_123(iVar10, iParam0, 17);
			return;
			break;
	}
	func_115(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
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
			func_123(iVar10, iParam0, 18);
			return;
			break;
	}
	func_115(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
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
			func_123(iVar10, iParam0, 7);
			return;
			break;
	}
	func_115(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
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
			func_123(iVar10, iParam0, 84);
			return;
			break;
	}
	func_115(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
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
			func_123(iVar10, iParam0, 104);
			return;
			break;
	}
	func_115(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_135(int iParam0)
{
	if (iParam0 < 136)
	{
		func_137(iParam0);
	}
	else
	{
		func_136(iParam0);
	}
	if (Global_69311[0 /*14*/].f_2 == -1)
	{
		func_123(3, iParam0, 242);
	}
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
	func_115(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
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
	func_115(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
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
			func_123(iVar10, iParam0, 9);
			return;
			break;
	}
	func_115(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
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
			func_123(iVar10, iParam0, 7);
			return;
			break;
	}
	func_115(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_140(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_158(iParam1);
			break;
		
		case 2:
			func_157(iParam1);
			break;
		
		case 3:
			func_153(iParam1);
			break;
		
		case 4:
			func_152(iParam1);
			break;
		
		case 6:
			func_151(iParam1);
			break;
		
		case 5:
			func_150(iParam1);
			break;
		
		case 8:
			func_149(iParam1);
			break;
		
		case 9:
			func_148(iParam1);
			break;
		
		case 10:
			func_147(iParam1);
			break;
		
		case 1:
			func_146(iParam1);
			break;
		
		case 7:
			func_145(iParam1);
			break;
		
		case 11:
			func_144(iParam1);
			break;
		
		case 12:
			func_143(iParam1);
			break;
		
		case 13:
			func_142(iParam1);
			break;
		
		case 14:
			func_141(iParam1);
			break;
	}
}

void func_141(int iParam0)
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
			func_123(iVar10, iParam0, 175);
			return;
			break;
	}
	func_115(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
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
			func_123(iVar10, iParam0, 9);
			return;
			break;
	}
	func_115(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
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
			func_123(iVar10, iParam0, 47);
			return;
			break;
	}
	func_115(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
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
			func_123(iVar10, iParam0, 63);
			return;
			break;
	}
	func_115(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
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
			func_123(iVar10, iParam0, 1);
			return;
			break;
	}
	func_115(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_146(int iParam0)
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
			func_123(iVar10, iParam0, 5);
			return;
			break;
	}
	func_115(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
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
			func_123(iVar10, iParam0, 53);
			return;
			break;
	}
	func_115(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
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
			func_123(iVar10, iParam0, 12);
			return;
			break;
	}
	func_115(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
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
			func_123(iVar10, iParam0, 77);
			return;
			break;
	}
	func_115(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
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
			func_123(iVar10, iParam0, 7);
			return;
			break;
	}
	func_115(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
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
			func_123(iVar10, iParam0, 134);
			return;
			break;
	}
	func_115(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
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
			func_123(iVar10, iParam0, 117);
			return;
			break;
	}
	func_115(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_153(int iParam0)
{
	if (iParam0 < 107)
	{
		func_156(iParam0);
	}
	else if (iParam0 < 227)
	{
		func_155(iParam0);
	}
	else
	{
		func_154(iParam0);
	}
	if (Global_69311[0 /*14*/].f_2 == -1)
	{
		func_123(3, iParam0, 318);
	}
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
	func_115(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
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
	func_115(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
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
	func_115(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
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
			func_123(iVar10, iParam0, 21);
			return;
			break;
	}
	func_115(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
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
			func_123(iVar10, iParam0, 10);
			return;
			break;
	}
	func_115(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_159(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_176(iParam1);
			break;
		
		case 2:
			func_175(iParam1);
			break;
		
		case 3:
			func_172(iParam1);
			break;
		
		case 4:
			func_171(iParam1);
			break;
		
		case 6:
			func_170(iParam1);
			break;
		
		case 5:
			func_169(iParam1);
			break;
		
		case 8:
			func_168(iParam1);
			break;
		
		case 9:
			func_167(iParam1);
			break;
		
		case 10:
			func_166(iParam1);
			break;
		
		case 1:
			func_165(iParam1);
			break;
		
		case 7:
			func_164(iParam1);
			break;
		
		case 11:
			func_163(iParam1);
			break;
		
		case 12:
			func_162(iParam1);
			break;
		
		case 13:
			func_161(iParam1);
			break;
		
		case 14:
			func_160(iParam1);
			break;
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
			func_123(iVar10, iParam0, 113);
			return;
			break;
	}
	func_115(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
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
			func_123(iVar10, iParam0, 10);
			return;
			break;
	}
	func_115(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
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
			func_123(iVar10, iParam0, 53);
			return;
			break;
	}
	func_115(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
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
			func_123(iVar10, iParam0, 45);
			return;
			break;
	}
	func_115(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
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
			func_123(iVar10, iParam0, 1);
			return;
			break;
	}
	func_115(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_165(int iParam0)
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
			func_123(iVar10, iParam0, 5);
			return;
			break;
	}
	func_115(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
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
			func_123(iVar10, iParam0, 48);
			return;
			break;
	}
	func_115(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
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
			func_123(iVar10, iParam0, 20);
			return;
			break;
	}
	func_115(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
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
			func_123(iVar10, iParam0, 24);
			return;
			break;
	}
	func_115(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
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
			func_123(iVar10, iParam0, 14);
			return;
			break;
	}
	func_115(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
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
			func_123(iVar10, iParam0, 99);
			return;
			break;
	}
	func_115(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
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
			func_123(iVar10, iParam0, 113);
			return;
			break;
	}
	func_115(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_172(int iParam0)
{
	if (iParam0 < 60)
	{
		func_174(iParam0);
	}
	else
	{
		func_173(iParam0);
	}
	if (Global_69311[0 /*14*/].f_2 == -1)
	{
		func_123(3, iParam0, 181);
	}
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
	func_115(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
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
	func_115(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
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
			func_123(iVar10, iParam0, 6);
			return;
			break;
	}
	func_115(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
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
			func_123(iVar10, iParam0, 7);
			return;
			break;
	}
	func_115(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_177()
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

bool func_178(int iParam0, int iParam1, int iParam2, int iParam3)
{
	var uVar0;
	
	*iParam3 = -99;
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 7 || iParam2 == 23)
					{
						*iParam3 = 1;
					}
					break;
				
				case 9:
					if (iParam2 == 8 || (iParam2 >= 9 && iParam2 <= 14))
					{
						*iParam3 = 1;
					}
					break;
				
				case 10:
					if (iParam2 >= 44 && iParam2 <= 47)
					{
						*iParam3 = 1;
					}
					break;
				
				case 14:
					if ((((((iParam2 >= 31 && iParam2 <= 32) || (iParam2 >= 33 && iParam2 <= 34)) || (iParam2 >= 35 && iParam2 <= 36)) || iParam2 == 37) || (iParam2 >= 40 && iParam2 <= 41)) || iParam2 == 46)
					{
						*iParam3 = 1;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 2:
					if (iParam2 == 20)
					{
						*iParam3 = 20;
					}
					break;
				
				case 8:
					if (iParam2 == 4)
					{
						*iParam3 = 19;
					}
					break;
				
				case 9:
					if (iParam2 >= 5 && iParam2 <= 10)
					{
						*iParam3 = 19;
					}
					break;
				
				case 10:
					if (iParam2 >= 47 && iParam2 <= 50)
					{
						*iParam3 = 19;
					}
					break;
				
				case 14:
					if (((((iParam2 >= 26 && iParam2 <= 27) || (iParam2 >= 28 && iParam2 <= 29)) || (iParam2 >= 30 && iParam2 <= 31)) || iParam2 == 32) || (iParam2 >= 35 && iParam2 <= 36))
					{
						*iParam3 = 19;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 7)
					{
						*iParam3 = 2;
					}
					break;
				
				case 9:
					if ((iParam2 >= 9 && iParam2 <= 14) || (iParam2 >= 15 && iParam2 <= 16))
					{
						*iParam3 = 2;
					}
					break;
				
				case 10:
					if (iParam2 >= 29 && iParam2 <= 32)
					{
						*iParam3 = 2;
					}
					break;
				
				case 14:
					if ((((((iParam2 >= 47 && iParam2 <= 48) || (iParam2 >= 49 && iParam2 <= 50)) || (iParam2 >= 51 && iParam2 <= 52)) || iParam2 == 53) || (iParam2 >= 56 && iParam2 <= 57)) || iParam2 == 62)
					{
						*iParam3 = 2;
					}
					break;
			}
			break;
	}
	if (*iParam3 != -99)
	{
		uVar0 = func_111(iParam0);
		Global_101154.f_1826.f_539[uVar0 /*65*/].f_60 = iParam2;
		Global_101154.f_1826.f_539[uVar0 /*65*/].f_61 = iParam1;
		return true;
	}
	return false;
}

int func_179(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_107(iParam3);
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

int func_180(int iParam0)
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

void func_181(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (!is_ped_injured(iParam0))
	{
		iVar0 = func_30(iParam0);
		iVar1 = false;
		while (iVar1 < 12)
		{
			func_184(iParam0, iVar1, uParam1.f_13[iVar1], uParam1[iVar1], uParam1.f_26[iVar1], iParam2, 145);
			iVar1++;
		}
		iVar1 = false;
		while (iVar1 < 9)
		{
			func_183(iParam0, iVar1, uParam1.f_39[iVar1], uParam1.f_49[iVar1], iParam2, 145);
			iVar1++;
		}
		if (func_10(iVar0))
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
			if (func_182(161, -1))
			{
				*uParam1.f_59 = func_38(2043, Global_69309, 0);
			}
			else
			{
				*uParam1.f_59 = func_38(745, Global_69309, 0);
			}
			*uParam1.f_60 = func_38(746, Global_69309, 0);
			*uParam1.f_61 = func_38(747, Global_69309, 0);
		}
		if (network_is_game_in_progress() && iParam0 == player_ped_id())
		{
			if (func_182(161, -1))
			{
				*uParam1.f_59 = func_38(2043, Global_69309, 0);
			}
			else
			{
				*uParam1.f_59 = func_38(745, Global_69309, 0);
			}
		}
	}
}

int func_182(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2490231[iParam0 /*5*/][func_36(iParam1)];
	if (stat_get_bool(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_183(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	iVar0 = func_30(iParam0);
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

void func_184(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	iVar0 = func_30(iParam0);
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

void func_185(int iParam0, int iParam1, int iParam2)
{
	if (func_799() && func_187())
	{
		while (Global_91273 != 6)
		{
			wait(0);
		}
		set_game_paused(false);
		if (does_entity_exist(player_ped_id()))
		{
			if (!is_ped_injured(player_ped_id()))
			{
				clear_ped_wetness(player_ped_id());
			}
		}
		if (iParam0 != 0)
		{
			if (!is_ped_injured(player_ped_id()))
			{
				if (does_entity_exist(iParam0))
				{
					if (is_vehicle_driveable(iParam0, 0))
					{
						if (!is_ped_in_vehicle(player_ped_id(), iParam0, 0))
						{
							set_ped_into_vehicle(player_ped_id(), iParam0, iParam1);
							set_gameplay_cam_relative_pitch(0f, 1f);
							set_gameplay_cam_relative_heading(0f);
							wait(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1)
		{
			if (is_player_playing(player_id()))
			{
				set_player_control(player_id(), true, 0);
			}
		}
		_stop_all_screen_effects();
		func_186(0);
	}
}

void func_186(int iParam0)
{
	if (iParam0 == 1)
	{
		set_bit(&(Global_91278.f_20), 13);
	}
	else
	{
		clear_bit(&(Global_91278.f_20), 13);
	}
}

int func_187()
{
	return is_bit_set(Global_91278.f_20, 13);
}

bool func_188(vector3 vParam0, Vector3 fParam1, int iParam2)
{
	if (!is_vehicle_driveable(iLocal_2805, 0))
	{
		func_228(1, 1);
		if (func_226(1, 1))
		{
			if (iParam4)
			{
				return true;
			}
			else if (func_189(&iLocal_2805, 1, vParam0, fParam3, 1, 1))
			{
				_set_vehicle_door_breakable(iLocal_2805, 0, false);
				_set_vehicle_door_breakable(iLocal_2805, 1, false);
				set_vehicle_automatically_attaches(iLocal_2805, false, 0);
				set_vehicle_strong(iLocal_2805, true);
				set_vehicle_has_strong_axles(iLocal_2805, true);
				_0x6FDDAD856E36988A(iLocal_2805, 1);
				return true;
			}
		}
	}
	else
	{
		return true;
	}
	return false;
}

bool func_189(int iParam0, int iParam1, vector3 vParam2, Vector3 fParam3, int iParam4, int iParam5)
{
	int iVar0;
	var uVar1;
	struct<97> Var5;
	int iVar103;
	int iVar104;
	int iVar105;
	char[16] cVar106;
	int iVar110;
	
	if (func_10(iParam1))
	{
		Var5.f_11 = 12;
		Var5.f_31 = 49;
		Var5.f_81 = 2;
		func_225(iParam1, &Var5, iParam7);
		if (Var5 == 0)
		{
			return true;
		}
		if (does_entity_exist(*iParam0))
		{
			if (get_entity_model(*iParam0) != Var5)
			{
			}
			return true;
		}
		if ((iParam1 == 0 && !Global_101154.f_1826.f_539.f_3544) && Global_101154.f_7775.f_99.f_58[131])
		{
			Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/] = 0;
		}
		if (Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/] == Var5)
		{
			request_model(Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/]);
			if (has_model_loaded(Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/]))
			{
				*iParam0 = create_vehicle(Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/], vParam2, fParam5, 0, 0);
				set_vehicle_on_ground_properly(*iParam0);
				_0xAB04325045427AAE(*iParam0, 0);
				_0x428BACCDF5E26EAD(*iParam0, false);
				set_vehicle_has_strong_axles(*iParam0, true);
				set_entity_health(*iParam0, 1250);
				set_vehicle_engine_health(*iParam0, 1250f);
				set_vehicle_petrol_tank_health(*iParam0, 1250f);
				Var5.f_3 = 1250;
				set_vehicle_colours(*iParam0, Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_5, Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_6);
				set_vehicle_extra_colours(*iParam0, Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_7, Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_8);
				set_vehicle_dirt_level(*iParam0, Var5.f_2);
				iVar103 = 0;
				while (iVar103 < 12)
				{
					set_vehicle_extra(*iParam0, iVar103 + 1, !Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_11[iVar103]);
					iVar103++;
				}
				if (Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_24)
				{
					set_convertible_roof(*iParam0, Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_24);
				}
				if (func_224(&uVar1, &iVar0))
				{
					set_vehicle_number_plate_text(*iParam0, &uVar1);
					set_vehicle_number_plate_text_index(*iParam0, iVar0);
				}
				else
				{
					set_vehicle_number_plate_text(*iParam0, &(Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_27));
					if (Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_26 >= 0 && Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_26 < get_number_of_vehicle_number_plates())
					{
						set_vehicle_number_plate_text_index(*iParam0, Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_26);
					}
				}
				set_vehicle_tyre_smoke_color(*iParam0, Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_84, Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_85, Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_86);
				set_vehicle_tyres_can_burst(*iParam0, Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_88);
				set_vehicle_window_tint(*iParam0, Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_87);
				_set_vehicle_neon_lights_colour(*iParam0, Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_93, Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_94, Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_95);
				_set_vehicle_neon_light_enabled(*iParam0, 2, is_bit_set(Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_92, 28));
				_set_vehicle_neon_light_enabled(*iParam0, 3, is_bit_set(Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_92, 29));
				_set_vehicle_neon_light_enabled(*iParam0, 0, is_bit_set(Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_92, 30));
				_set_vehicle_neon_light_enabled(*iParam0, 1, is_bit_set(Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_92, 31));
				if (get_vehicle_livery_count(*iParam0) > 1 && Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_89 >= 0)
				{
					set_vehicle_livery(*iParam0, Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_89);
				}
				if (Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_90 > -1)
				{
					if (!is_this_model_a_bicycle(get_entity_model(*iParam0)))
					{
						if (is_this_model_a_bike(get_entity_model(*iParam0)))
						{
							if (Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_90 == 6)
							{
								set_vehicle_wheel_type(*iParam0, Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_90);
							}
						}
						else
						{
							set_vehicle_wheel_type(*iParam0, Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_90);
						}
					}
				}
				func_220(iParam0, &(Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_31), &(Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_81));
				_set_vehicle_paint_fade(*iParam0, Var5.f_96);
				if (iParam1 == 2)
				{
					if (get_entity_model(*iParam0) == joaat("bodhi2"))
					{
						func_218(iParam0);
					}
				}
				if (iParam6)
				{
					set_model_as_no_longer_needed(Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/]);
				}
				func_217(*iParam0, iParam1);
				return true;
			}
		}
		else if (Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/] == Var5)
		{
			request_model(Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/]);
			if (has_model_loaded(Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/]))
			{
				*iParam0 = create_vehicle(Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/], vParam2, fParam5, 0, 0);
				set_vehicle_on_ground_properly(*iParam0);
				_0xAB04325045427AAE(*iParam0, 0);
				_0x428BACCDF5E26EAD(*iParam0, false);
				set_vehicle_has_strong_axles(*iParam0, true);
				set_entity_health(*iParam0, 1250);
				set_vehicle_engine_health(*iParam0, 1250f);
				set_vehicle_petrol_tank_health(*iParam0, 1250f);
				Var5.f_3 = 1250;
				set_vehicle_colours(*iParam0, Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_5, Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_6);
				set_vehicle_extra_colours(*iParam0, Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_7, Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_8);
				set_vehicle_dirt_level(*iParam0, Var5.f_2);
				iVar104 = 0;
				while (iVar104 < 12)
				{
					set_vehicle_extra(*iParam0, iVar104 + 1, !Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_11[iVar104]);
					iVar104++;
				}
				if (Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_24)
				{
					set_convertible_roof(*iParam0, Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_24);
				}
				if (func_224(&uVar1, &iVar0))
				{
					set_vehicle_number_plate_text(*iParam0, &uVar1);
					set_vehicle_number_plate_text_index(*iParam0, iVar0);
				}
				else
				{
					set_vehicle_number_plate_text(*iParam0, &(Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_27));
					if (Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_26 >= 0 && Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_26 < get_number_of_vehicle_number_plates())
					{
						set_vehicle_number_plate_text_index(*iParam0, Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_26);
					}
				}
				set_vehicle_tyre_smoke_color(*iParam0, Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_84, Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_85, Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_86);
				set_vehicle_tyres_can_burst(*iParam0, Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_88);
				set_vehicle_window_tint(*iParam0, Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_87);
				_set_vehicle_neon_lights_colour(*iParam0, Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_93, Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_94, Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_95);
				_set_vehicle_neon_light_enabled(*iParam0, 2, is_bit_set(Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_92, 28));
				_set_vehicle_neon_light_enabled(*iParam0, 3, is_bit_set(Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_92, 29));
				_set_vehicle_neon_light_enabled(*iParam0, 0, is_bit_set(Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_92, 30));
				_set_vehicle_neon_light_enabled(*iParam0, 1, is_bit_set(Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_92, 31));
				if (get_vehicle_livery_count(*iParam0) > 1 && Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_89 >= 0)
				{
					set_vehicle_livery(*iParam0, Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_89);
				}
				if (Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_90 > -1)
				{
					if (!is_this_model_a_bicycle(get_entity_model(*iParam0)))
					{
						if (is_this_model_a_bike(get_entity_model(*iParam0)))
						{
							if (Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_90 == 6)
							{
								set_vehicle_wheel_type(*iParam0, Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_90);
							}
						}
						else
						{
							set_vehicle_wheel_type(*iParam0, Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_90);
						}
					}
				}
				func_220(iParam0, &(Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_31), &(Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_81));
				_set_vehicle_paint_fade(*iParam0, Var5.f_96);
				if (iParam1 == 2)
				{
					if (get_entity_model(*iParam0) == joaat("bodhi2"))
					{
						func_218(iParam0);
					}
				}
				if (iParam6)
				{
					set_model_as_no_longer_needed(Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/]);
				}
				func_217(*iParam0, iParam1);
				return true;
			}
		}
		else
		{
			request_model(Var5);
			if (has_model_loaded(Var5))
			{
				iVar105 = true;
				*iParam0 = create_vehicle(Var5, vParam2, fParam5, 1, 1);
				set_vehicle_on_ground_properly(*iParam0);
				_0xAB04325045427AAE(*iParam0, 0);
				_0x428BACCDF5E26EAD(*iParam0, false);
				set_vehicle_has_strong_axles(*iParam0, true);
				StringCopy(&cVar106, get_vehicle_number_plate_text(*iParam0), 16);
				set_entity_health(*iParam0, 1250);
				set_vehicle_engine_health(*iParam0, 1250f);
				set_vehicle_petrol_tank_health(*iParam0, 1250f);
				Var5.f_3 = 1250;
				set_vehicle_colours(*iParam0, Var5.f_5, Var5.f_6);
				set_vehicle_extra_colours(*iParam0, Var5.f_7, Var5.f_8);
				set_vehicle_dirt_level(*iParam0, Var5.f_2);
				iVar110 = 0;
				while (iVar110 < 12)
				{
					set_vehicle_extra(*iParam0, iVar110 + 1, !Var5.f_11[iVar110]);
					iVar110++;
				}
				if (Var5.f_24)
				{
					set_convertible_roof(*iParam0, Var5.f_24);
				}
				if (func_224(&uVar1, &iVar0))
				{
					set_vehicle_number_plate_text(*iParam0, &uVar1);
					set_vehicle_number_plate_text_index(*iParam0, iVar0);
				}
				else
				{
					set_vehicle_number_plate_text(*iParam0, &(Var5.f_27));
					if (Var5.f_26 >= 0 && Var5.f_26 < get_number_of_vehicle_number_plates())
					{
						set_vehicle_number_plate_text_index(*iParam0, Var5.f_26);
					}
				}
				set_vehicle_tyre_smoke_color(*iParam0, Var5.f_84, Var5.f_85, Var5.f_86);
				set_vehicle_tyres_can_burst(*iParam0, Var5.f_88);
				set_vehicle_window_tint(*iParam0, Var5.f_87);
				_set_vehicle_neon_lights_colour(*iParam0, Var5.f_93, Var5.f_94, Var5.f_95);
				_set_vehicle_neon_light_enabled(*iParam0, 2, is_bit_set(Var5.f_92, 28));
				_set_vehicle_neon_light_enabled(*iParam0, 3, is_bit_set(Var5.f_92, 29));
				_set_vehicle_neon_light_enabled(*iParam0, 0, is_bit_set(Var5.f_92, 30));
				_set_vehicle_neon_light_enabled(*iParam0, 1, is_bit_set(Var5.f_92, 31));
				if (get_vehicle_livery_count(*iParam0) > 1 && Var5.f_89 >= 0)
				{
					set_vehicle_livery(*iParam0, Var5.f_89);
				}
				if (Var5.f_90 > -1)
				{
					if (!is_this_model_a_bicycle(get_entity_model(*iParam0)))
					{
						if (is_this_model_a_bike(get_entity_model(*iParam0)))
						{
							if (Var5.f_90 == 6)
							{
								set_vehicle_wheel_type(*iParam0, Var5.f_90);
							}
						}
						else
						{
							set_vehicle_wheel_type(*iParam0, Var5.f_90);
						}
					}
				}
				func_220(iParam0, &(Var5.f_31), &(Var5.f_81));
				_set_vehicle_paint_fade(*iParam0, Var5.f_96);
				if (iParam1 == 1)
				{
					if (get_entity_model(*iParam0) == joaat("bagger") && !Global_101154.f_7775.f_99.f_58[118])
					{
						set_vehicle_number_plate_text(*iParam0, &cVar106);
						iVar105 = false;
					}
				}
				else if (iParam1 == 2)
				{
					if (get_entity_model(*iParam0) == joaat("bodhi2"))
					{
						func_218(iParam0);
					}
				}
				else if (((iParam1 == 0 && !Global_101154.f_1826.f_539.f_3544) && Global_101154.f_7775.f_99.f_58[131]) && get_entity_model(*iParam0) == joaat("tailgater"))
				{
					set_vehicle_mod(*iParam0, 6, 1, false);
					set_vehicle_mod(*iParam0, 14, 7, false);
					set_vehicle_mod(*iParam0, 11, 2, false);
					set_vehicle_mod(*iParam0, 2, 3, false);
					set_vehicle_mod(*iParam0, 7, 5, false);
					set_vehicle_mod(*iParam0, 0, 0, false);
					set_vehicle_mod(*iParam0, 3, 3, false);
					set_vehicle_mod(*iParam0, 13, 1, false);
					set_vehicle_mod(*iParam0, 4, 3, false);
					set_vehicle_mod(*iParam0, 12, 2, false);
					toggle_vehicle_mod(*iParam0, 22, true);
					set_vehicle_wheel_type(*iParam0, 2);
					set_vehicle_mod(*iParam0, 23, 11, false);
					set_vehicle_window_tint(*iParam0, 2);
					Global_101154.f_1826.f_539.f_3544 = 1;
					func_190(iParam1, iParam0, 0, 1);
				}
				if (iParam6)
				{
					set_model_as_no_longer_needed(Var5);
				}
				if (iVar105)
				{
					func_217(*iParam0, iParam1);
				}
				return true;
			}
		}
	}
	return false;
}

void func_190(int iParam0, int iParam1, int iParam2, int iParam3)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	
	if ((func_10(iParam0) && does_entity_exist(*iParam1)) && is_vehicle_driveable(*iParam1, 0))
	{
		if (iParam2 > Global_101154.f_1826.f_539.f_1635)
		{
			return;
		}
		if (iParam2 == 0)
		{
		}
		else if (iParam2 == 1)
		{
		}
		else if (iParam2 == 2)
		{
		}
		else if (iParam2 == 3)
		{
			func_199(*iParam1, iParam0);
		}
		if (get_num_mod_kits(*iParam1) != 0)
		{
			set_vehicle_mod_kit(*iParam1, 0);
		}
		Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/] = get_entity_model(*iParam1);
		if (get_vehicle_trailer_vehicle(*iParam1, &iVar1))
		{
			Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_1 = get_entity_model(iVar1);
		}
		Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_2 = get_vehicle_dirt_level(*iParam1);
		Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_3 = get_entity_health(*iParam1);
		Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[0] = is_vehicle_extra_turned_on(*iParam1, 1);
		Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[1] = is_vehicle_extra_turned_on(*iParam1, 2);
		Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[2] = is_vehicle_extra_turned_on(*iParam1, 3);
		Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[3] = is_vehicle_extra_turned_on(*iParam1, 4);
		Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[4] = is_vehicle_extra_turned_on(*iParam1, 5);
		Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[5] = is_vehicle_extra_turned_on(*iParam1, 6);
		Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[6] = is_vehicle_extra_turned_on(*iParam1, 7);
		Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[7] = is_vehicle_extra_turned_on(*iParam1, 8);
		Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[8] = is_vehicle_extra_turned_on(*iParam1, 9);
		Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[9] = is_vehicle_extra_turned_on(*iParam1, 10);
		Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[10] = is_vehicle_extra_turned_on(*iParam1, 11);
		Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[11] = is_vehicle_extra_turned_on(*iParam1, 12);
		if (is_vehicle_a_convertible(*iParam1, 0))
		{
			iVar2 = get_convertible_roof_state(*iParam1);
			if (iVar2 == 0 || iVar2 == 5)
			{
				Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_24 = 1;
			}
			else
			{
				Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_24 = 0;
			}
		}
		else
		{
			Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_24 = 0;
		}
		Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_25 = get_player_radio_station_index();
		StringCopy(&(Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_27), get_vehicle_number_plate_text(*iParam1), 16);
		Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_26 = get_vehicle_number_plate_text_index(*iParam1);
		get_vehicle_colours(*iParam1, &(Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_5), &(Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_6));
		get_vehicle_extra_colours(*iParam1, &(Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_7), &(Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_8));
		get_vehicle_tyre_smoke_color(*iParam1, &(Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_84), &(Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_85), &(Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_86));
		Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_88 = get_vehicle_tyres_can_burst(*iParam1);
		Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_87 = get_vehicle_window_tint(*iParam1);
		Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_89 = get_vehicle_livery(*iParam1);
		Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_90 = get_vehicle_wheel_type(*iParam1);
		_get_vehicle_neon_lights_colour(*iParam1, &(Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_93), &(Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_94), &(Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_95));
		if (_is_vehicle_neon_light_enabled(*iParam1, 2))
		{
			set_bit(&(Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_92), 28);
		}
		else
		{
			clear_bit(&(Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_92), 28);
		}
		if (_is_vehicle_neon_light_enabled(*iParam1, 3))
		{
			set_bit(&(Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_92), 29);
		}
		else
		{
			clear_bit(&(Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_92), 29);
		}
		if (_is_vehicle_neon_light_enabled(*iParam1, 0))
		{
			set_bit(&(Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_92), 30);
		}
		else
		{
			clear_bit(&(Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_92), 30);
		}
		if (_is_vehicle_neon_light_enabled(*iParam1, 1))
		{
			set_bit(&(Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_92), 31);
		}
		else
		{
			clear_bit(&(Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_92), 31);
		}
		Global_101154.f_1826.f_539.f_3545[iParam0] = 10;
		if ((get_vehicle_mod_kit(*iParam1) >= 0 && get_vehicle_mod_kit(*iParam1) < 255) && func_195(*iParam1, 0, &uVar0))
		{
			func_194(iParam1, &(Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31), &(Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_81));
			if (iParam3)
			{
				Global_101154.f_24643[iParam0 /*43*/].f_40 = 1;
				Global_101154.f_24643[iParam0 /*43*/] = Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/];
				Global_101154.f_24643[iParam0 /*43*/].f_3 = Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_87;
				Global_101154.f_24643[iParam0 /*43*/].f_4 = Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_84;
				Global_101154.f_24643[iParam0 /*43*/].f_5 = Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_85;
				Global_101154.f_24643[iParam0 /*43*/].f_6 = Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_86;
				Global_101154.f_24643[iParam0 /*43*/].f_10 = Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_90;
				Global_101154.f_24643[iParam0 /*43*/].f_16 = !Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_88;
				Global_101154.f_24643[iParam0 /*43*/].f_19 = {Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_27};
				Global_101154.f_24643[iParam0 /*43*/].f_23 = Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_26;
				Global_101154.f_24643[iParam0 /*43*/].f_7 = Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[11];
				Global_101154.f_24643[iParam0 /*43*/].f_8 = Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[12];
				Global_101154.f_24643[iParam0 /*43*/].f_9 = Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[23];
				Global_101154.f_24643[iParam0 /*43*/].f_11 = Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[4];
				Global_101154.f_24643[iParam0 /*43*/].f_12 = Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[15];
				Global_101154.f_24643[iParam0 /*43*/].f_13 = Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[16];
				Global_101154.f_24643[iParam0 /*43*/].f_14 = Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[14];
				Global_101154.f_24643[iParam0 /*43*/].f_15 = Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[22];
				Global_101154.f_24643[iParam0 /*43*/].f_18 = Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[20];
				Global_101154.f_24643[iParam0 /*43*/].f_17 = Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[18];
				Global_101154.f_24643[iParam0 /*43*/].f_24 = get_num_vehicle_mods(*iParam1, 11) + 1;
				Global_101154.f_24643[iParam0 /*43*/].f_25 = get_num_vehicle_mods(*iParam1, 12) + 1;
				Global_101154.f_24643[iParam0 /*43*/].f_26 = get_num_vehicle_mods(*iParam1, 4) + 1;
				Global_101154.f_24643[iParam0 /*43*/].f_27 = get_num_vehicle_mods(*iParam1, 23) + 1;
				Global_101154.f_24643[iParam0 /*43*/].f_28 = get_num_vehicle_mods(*iParam1, 14) + 1;
				Global_101154.f_24643[iParam0 /*43*/].f_29 = get_num_vehicle_mods(*iParam1, 16) + 1;
				Global_101154.f_24643[iParam0 /*43*/].f_30 = get_num_vehicle_mods(*iParam1, 15) + 1;
				Global_101154.f_24643[iParam0 /*43*/].f_32 = _0xEEBFC7A7EFDC35B4(*iParam1);
				Global_101154.f_24643[iParam0 /*43*/].f_33[0] = get_vehicle_default_horn(*iParam1);
				Global_101154.f_24643[iParam0 /*43*/].f_33[1] = get_vehicle_mod_modifier_value(*iParam1, 14, 0);
				Global_101154.f_24643[iParam0 /*43*/].f_33[2] = get_vehicle_mod_modifier_value(*iParam1, 14, 1);
				Global_101154.f_24643[iParam0 /*43*/].f_33[3] = get_vehicle_mod_modifier_value(*iParam1, 14, 2);
				Global_101154.f_24643[iParam0 /*43*/].f_33[4] = get_vehicle_mod_modifier_value(*iParam1, 14, 3);
				Global_101154.f_24643[iParam0 /*43*/].f_39 = get_vehicle_mod_kit_type(*iParam1);
				Global_101154.f_24643[iParam0 /*43*/].f_31 = func_193(*iParam1);
				Global_101154.f_24643[iParam0 /*43*/].f_33[0] = _0xACB5DCCA1EC76840(*iParam1);
				get_vehicle_mod_color_1(*iParam1, &iVar4, &uVar5, &uVar6);
				if (iVar4 == 0)
				{
					iVar3 = 0;
				}
				else if (iVar4 == 1)
				{
					iVar3 = 1;
				}
				else if (iVar4 == 3)
				{
					iVar3 = 2;
				}
				else if (iVar4 == 4)
				{
					iVar3 = 3;
				}
				else if (iVar4 == 5)
				{
					iVar3 = 4;
				}
				else
				{
					iVar3 = -1;
				}
				func_191(Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_5, Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_7, iVar3, 1, &(Global_101154.f_24643[iParam0 /*43*/].f_1));
				get_vehicle_mod_color_2(*iParam1, &iVar4, &uVar5);
				if (iVar4 == 0)
				{
					iVar3 = 0;
				}
				else if (iVar4 == 1)
				{
					iVar3 = 1;
				}
				else if (iVar4 == 3)
				{
					iVar3 = 2;
				}
				else if (iVar4 == 4)
				{
					iVar3 = 3;
				}
				else if (iVar4 == 5)
				{
					iVar3 = 4;
				}
				else
				{
					iVar3 = -1;
				}
				func_191(Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_6, -1, iVar3, 0, &(Global_101154.f_24643[iParam0 /*43*/].f_2));
			}
		}
	}
}

bool func_191(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar6;
	int iVar7;
	
	iVar0 = 0;
	while (func_192(iVar0, &sVar2, &iVar1, &iVar6, &iVar7))
	{
		if ((iParam0 == iVar6 && (!iParam3 || iParam1 == iVar7)) && ((iParam2 == iVar1 || iParam2 == -1) || iParam2 == 255))
		{
			*uParam4 = iVar0;
			return true;
		}
		iVar0++;
	}
	iParam0 = -1;
	iParam1 = -1;
	*uParam4 = -1;
	return false;
}

int func_192(int iParam0, char* sParam1, var uParam2, var uParam3, var uParam4)
{
	*uParam2 = -1;
	*uParam3 = -1;
	*uParam4 = -1;
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "BR BLACK_STEEL", 16);
			*uParam2 = 3;
			*uParam3 = 118;
			*uParam4 = 3;
			break;
		
		case 1:
			StringCopy(sParam1, "BLACK_GRAPHITE", 16);
			*uParam2 = 0;
			*uParam3 = 147;
			*uParam4 = 4;
			break;
		
		case 2:
			StringCopy(sParam1, "CHOCOLATE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 96;
			*uParam4 = 0;
			break;
		
		case 3:
			StringCopy(sParam1, "PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 71;
			*uParam4 = 145;
			break;
		
		case 4:
			StringCopy(sParam1, "HOT PINK", 16);
			*uParam2 = 0;
			*uParam3 = 135;
			*uParam4 = 135;
			break;
		
		case 5:
			StringCopy(sParam1, "FORMULA_RED", 16);
			*uParam2 = 0;
			*uParam3 = 29;
			*uParam4 = 28;
			break;
		
		case 6:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 64;
			*uParam4 = 68;
			break;
		
		case 7:
			StringCopy(sParam1, "ULTRA_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 70;
			*uParam4 = 0;
			break;
		
		case 8:
			StringCopy(sParam1, "RACING_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 50;
			*uParam4 = 0;
			break;
		
		case 9:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 2;
			*uParam3 = 55;
			*uParam4 = 0;
			break;
		
		case 10:
			StringCopy(sParam1, "RACE_YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 89;
			*uParam4 = 0;
			break;
		
		case 11:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 38;
			*uParam4 = 0;
			break;
		
		case 12:
			StringCopy(sParam1, "GOLD", 16);
			*uParam2 = 0;
			*uParam3 = 37;
			*uParam4 = 106;
			break;
		
		case 13:
			StringCopy(sParam1, "SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 4;
			*uParam4 = 111;
			break;
		
		case 14:
			StringCopy(sParam1, "CHROME", 16);
			*uParam2 = 4;
			*uParam3 = 120;
			*uParam4 = 0;
			break;
		
		case 15:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 1;
			*uParam3 = 111;
			*uParam4 = 0;
			break;
		
		case 16:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 0;
			*uParam3 = 0;
			*uParam4 = 10;
			break;
		
		case 17:
			StringCopy(sParam1, "GRAPHITE", 16);
			*uParam2 = 0;
			*uParam3 = 1;
			*uParam4 = 5;
			break;
		
		case 18:
			StringCopy(sParam1, "ANTHR_BLACK", 16);
			*uParam2 = 0;
			*uParam3 = 11;
			*uParam4 = 2;
			break;
		
		case 19:
			StringCopy(sParam1, "BLACK_STEEL", 16);
			*uParam2 = 0;
			*uParam3 = 2;
			*uParam4 = 5;
			break;
		
		case 20:
			StringCopy(sParam1, "DARK_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 3;
			*uParam4 = 6;
			break;
		
		case 21:
			StringCopy(sParam1, "BLUE_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 5;
			*uParam4 = 111;
			break;
		
		case 22:
			StringCopy(sParam1, "ROLLED_STEEL", 16);
			*uParam2 = 0;
			*uParam3 = 6;
			*uParam4 = 4;
			break;
		
		case 23:
			StringCopy(sParam1, "SHADOW_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 7;
			*uParam4 = 5;
			break;
		
		case 24:
			StringCopy(sParam1, "STONE_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 8;
			*uParam4 = 5;
			break;
		
		case 25:
			StringCopy(sParam1, "MIDNIGHT_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 9;
			*uParam4 = 7;
			break;
		
		case 26:
			StringCopy(sParam1, "CAST_IRON_SIL", 16);
			*uParam2 = 0;
			*uParam3 = 10;
			*uParam4 = 7;
			break;
		
		case 27:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 0;
			*uParam3 = 27;
			*uParam4 = 36;
			break;
		
		case 28:
			StringCopy(sParam1, "TORINO_RED", 16);
			*uParam2 = 0;
			*uParam3 = 28;
			*uParam4 = 28;
			break;
		
		case 29:
			StringCopy(sParam1, "LAVA_RED", 16);
			*uParam2 = 0;
			*uParam3 = 150;
			*uParam4 = 42;
			break;
		
		case 30:
			StringCopy(sParam1, "BLAZE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 30;
			*uParam4 = 36;
			break;
		
		case 31:
			StringCopy(sParam1, "GRACE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 31;
			*uParam4 = 27;
			break;
		
		case 32:
			StringCopy(sParam1, "GARNET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 32;
			*uParam4 = 25;
			break;
		
		case 33:
			StringCopy(sParam1, "SUNSET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 33;
			*uParam4 = 47;
			break;
		
		case 34:
			StringCopy(sParam1, "CABERNET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 34;
			*uParam4 = 47;
			break;
		
		case 35:
			StringCopy(sParam1, "WINE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 143;
			*uParam4 = 31;
			break;
		
		case 36:
			StringCopy(sParam1, "CANDY_RED", 16);
			*uParam2 = 0;
			*uParam3 = 35;
			*uParam4 = 25;
			break;
		
		case 37:
			StringCopy(sParam1, "PINK", 16);
			*uParam2 = 0;
			*uParam3 = 137;
			*uParam4 = 3;
			break;
		
		case 38:
			StringCopy(sParam1, "SALMON_PINK", 16);
			*uParam2 = 0;
			*uParam3 = 136;
			*uParam4 = 5;
			break;
		
		case 39:
			StringCopy(sParam1, "SUNRISE_ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 36;
			*uParam4 = 26;
			break;
		
		case 40:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 38;
			*uParam4 = 37;
			break;
		
		case 41:
			StringCopy(sParam1, "BRIGHT_ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 138;
			*uParam4 = 89;
			break;
		
		case 42:
			StringCopy(sParam1, "BRONZE", 16);
			*uParam2 = 0;
			*uParam3 = 90;
			*uParam4 = 102;
			break;
		
		case 43:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 88;
			*uParam4 = 88;
			break;
		
		case 44:
			StringCopy(sParam1, "RACE_YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 89;
			*uParam4 = 88;
			break;
		
		case 45:
			StringCopy(sParam1, "FLUR_YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 91;
			*uParam4 = 91;
			break;
		
		case 46:
			StringCopy(sParam1, "DARK_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 49;
			*uParam4 = 52;
			break;
		
		case 47:
			StringCopy(sParam1, "RACING_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 50;
			*uParam4 = 53;
			break;
		
		case 48:
			StringCopy(sParam1, "SEA_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 51;
			*uParam4 = 66;
			break;
		
		case 49:
			StringCopy(sParam1, "OLIVE_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 52;
			*uParam4 = 59;
			break;
		
		case 50:
			StringCopy(sParam1, "BRIGHT_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 53;
			*uParam4 = 59;
			break;
		
		case 51:
			StringCopy(sParam1, "PETROL_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 54;
			*uParam4 = 60;
			break;
		
		case 52:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 92;
			*uParam4 = 92;
			break;
		
		case 53:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 141;
			*uParam4 = 73;
			break;
		
		case 54:
			StringCopy(sParam1, "GALAXY_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 61;
			*uParam4 = 63;
			break;
		
		case 55:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 62;
			*uParam4 = 68;
			break;
		
		case 56:
			StringCopy(sParam1, "SAXON_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 63;
			*uParam4 = 87;
			break;
		
		case 57:
			StringCopy(sParam1, "MARINER_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 65;
			*uParam4 = 87;
			break;
		
		case 58:
			StringCopy(sParam1, "HARBOR_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 66;
			*uParam4 = 60;
			break;
		
		case 59:
			StringCopy(sParam1, "DIAMOND_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 67;
			*uParam4 = 67;
			break;
		
		case 60:
			StringCopy(sParam1, "SURF_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 68;
			*uParam4 = 68;
			break;
		
		case 61:
			StringCopy(sParam1, "NAUTICAL_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 69;
			*uParam4 = 74;
			break;
		
		case 62:
			StringCopy(sParam1, "RACING_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 73;
			*uParam4 = 73;
			break;
		
		case 63:
			StringCopy(sParam1, "ULTRA_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 70;
			*uParam4 = 70;
			break;
		
		case 64:
			StringCopy(sParam1, "LIGHT_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 74;
			*uParam4 = 74;
			break;
		
		case 65:
			StringCopy(sParam1, "CHOCOLATE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 96;
			*uParam4 = 95;
			break;
		
		case 66:
			StringCopy(sParam1, "BISON_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 101;
			*uParam4 = 95;
			break;
		
		case 67:
			StringCopy(sParam1, "CREEK_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 95;
			*uParam4 = 97;
			break;
		
		case 68:
			StringCopy(sParam1, "UMBER_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 94;
			*uParam4 = 104;
			break;
		
		case 69:
			StringCopy(sParam1, "MAPLE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 97;
			*uParam4 = 98;
			break;
		
		case 70:
			StringCopy(sParam1, "BEECHWOOD_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 103;
			*uParam4 = 104;
			break;
		
		case 71:
			StringCopy(sParam1, "SIENNA_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 104;
			*uParam4 = 104;
			break;
		
		case 72:
			StringCopy(sParam1, "SADDLE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 98;
			*uParam4 = 95;
			break;
		
		case 73:
			StringCopy(sParam1, "MOSS_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 100;
			*uParam4 = 100;
			break;
		
		case 74:
			StringCopy(sParam1, "WOODBEECH_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 102;
			*uParam4 = 105;
			break;
		
		case 75:
			StringCopy(sParam1, "STRAW_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 99;
			*uParam4 = 106;
			break;
		
		case 76:
			StringCopy(sParam1, "SANDY_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 105;
			*uParam4 = 105;
			break;
		
		case 77:
			StringCopy(sParam1, "BLEECHED_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 106;
			*uParam4 = 106;
			break;
		
		case 78:
			StringCopy(sParam1, "SPIN_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 72;
			*uParam4 = 64;
			break;
		
		case 79:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 146;
			*uParam4 = 145;
			break;
		
		case 80:
			StringCopy(sParam1, "BRIGHT_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 145;
			*uParam4 = 74;
			break;
		
		case 81:
			StringCopy(sParam1, "CREAM", 16);
			*uParam2 = 0;
			*uParam3 = 107;
			*uParam4 = 107;
			break;
		
		case 82:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 0;
			*uParam3 = 111;
			*uParam4 = 0;
			break;
		
		case 83:
			StringCopy(sParam1, "FROST_WHITE", 16);
			*uParam2 = 0;
			*uParam3 = 112;
			*uParam4 = 0;
			break;
		
		case 84:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 1;
			*uParam3 = 0;
			*uParam4 = 0;
			break;
		
		case 85:
			StringCopy(sParam1, "BLACK_GRAPHITE", 16);
			*uParam2 = 1;
			*uParam3 = 147;
			*uParam4 = 0;
			break;
		
		case 86:
			StringCopy(sParam1, "GRAPHITE", 16);
			*uParam2 = 1;
			*uParam3 = 1;
			*uParam4 = 0;
			break;
		
		case 87:
			StringCopy(sParam1, "ANTHR_BLACK", 16);
			*uParam2 = 1;
			*uParam3 = 11;
			*uParam4 = 0;
			break;
		
		case 88:
			StringCopy(sParam1, "BLACK_STEEL", 16);
			*uParam2 = 1;
			*uParam3 = 2;
			*uParam4 = 0;
			break;
		
		case 89:
			StringCopy(sParam1, "DARK_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 3;
			*uParam4 = 2;
			break;
		
		case 90:
			StringCopy(sParam1, "SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 4;
			*uParam4 = 4;
			break;
		
		case 91:
			StringCopy(sParam1, "BLUE_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 5;
			*uParam4 = 5;
			break;
		
		case 92:
			StringCopy(sParam1, "ROLLED_STEEL", 16);
			*uParam2 = 1;
			*uParam3 = 6;
			*uParam4 = 0;
			break;
		
		case 93:
			StringCopy(sParam1, "SHADOW_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 7;
			*uParam4 = 0;
			break;
		
		case 94:
			StringCopy(sParam1, "STONE_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 8;
			*uParam4 = 0;
			break;
		
		case 95:
			StringCopy(sParam1, "MIDNIGHT_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 9;
			*uParam4 = 0;
			break;
		
		case 96:
			StringCopy(sParam1, "CAST_IRON_SIL", 16);
			*uParam2 = 1;
			*uParam3 = 10;
			*uParam4 = 0;
			break;
		
		case 97:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 1;
			*uParam3 = 27;
			*uParam4 = 0;
			break;
		
		case 98:
			StringCopy(sParam1, "TORINO_RED", 16);
			*uParam2 = 1;
			*uParam3 = 28;
			*uParam4 = 0;
			break;
		
		case 99:
			StringCopy(sParam1, "FORMULA_RED", 16);
			*uParam2 = 1;
			*uParam3 = 29;
			*uParam4 = 0;
			break;
		
		case 100:
			StringCopy(sParam1, "LAVA_RED", 16);
			*uParam2 = 1;
			*uParam3 = 150;
			*uParam4 = 0;
			break;
		
		case 101:
			StringCopy(sParam1, "BLAZE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 30;
			*uParam4 = 0;
			break;
		
		case 102:
			StringCopy(sParam1, "GRACE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 31;
			*uParam4 = 0;
			break;
		
		case 103:
			StringCopy(sParam1, "GARNET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 32;
			*uParam4 = 0;
			break;
		
		case 104:
			StringCopy(sParam1, "SUNSET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 33;
			*uParam4 = 0;
			break;
		
		case 105:
			StringCopy(sParam1, "CABERNET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 34;
			*uParam4 = 0;
			break;
		
		case 106:
			StringCopy(sParam1, "WINE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 143;
			*uParam4 = 0;
			break;
		
		case 107:
			StringCopy(sParam1, "CANDY_RED", 16);
			*uParam2 = 1;
			*uParam3 = 35;
			*uParam4 = 0;
			break;
		
		case 108:
			StringCopy(sParam1, "HOT PINK", 16);
			*uParam2 = 1;
			*uParam3 = 135;
			*uParam4 = 0;
			break;
		
		case 109:
			StringCopy(sParam1, "PINK", 16);
			*uParam2 = 1;
			*uParam3 = 137;
			*uParam4 = 0;
			break;
		
		case 110:
			StringCopy(sParam1, "SALMON_PINK", 16);
			*uParam2 = 1;
			*uParam3 = 136;
			*uParam4 = 0;
			break;
		
		case 111:
			StringCopy(sParam1, "SUNRISE_ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 36;
			*uParam4 = 0;
			break;
		
		case 112:
			StringCopy(sParam1, "BRIGHT_ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 138;
			*uParam4 = 0;
			break;
		
		case 113:
			StringCopy(sParam1, "GOLD", 16);
			*uParam2 = 1;
			*uParam3 = 99;
			*uParam4 = 99;
			break;
		
		case 114:
			StringCopy(sParam1, "BRONZE", 16);
			*uParam2 = 1;
			*uParam3 = 90;
			*uParam4 = 102;
			break;
		
		case 115:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 88;
			*uParam4 = 0;
			break;
		
		case 116:
			StringCopy(sParam1, "FLUR_YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 91;
			*uParam4 = 0;
			break;
		
		case 117:
			StringCopy(sParam1, "DARK_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 49;
			*uParam4 = 0;
			break;
		
		case 118:
			StringCopy(sParam1, "SEA_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 51;
			*uParam4 = 0;
			break;
		
		case 119:
			StringCopy(sParam1, "OLIVE_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 52;
			*uParam4 = 0;
			break;
		
		case 120:
			StringCopy(sParam1, "BRIGHT_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 53;
			*uParam4 = 0;
			break;
		
		case 121:
			StringCopy(sParam1, "PETROL_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 54;
			*uParam4 = 0;
			break;
		
		case 122:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 92;
			*uParam4 = 0;
			break;
		
		case 123:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 141;
			*uParam4 = 0;
			break;
		
		case 124:
			StringCopy(sParam1, "GALAXY_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 61;
			*uParam4 = 0;
			break;
		
		case 125:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 62;
			*uParam4 = 0;
			break;
		
		case 126:
			StringCopy(sParam1, "SAXON_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 63;
			*uParam4 = 0;
			break;
		
		case 127:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 64;
			*uParam4 = 0;
			break;
		
		case 128:
			StringCopy(sParam1, "MARINER_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 65;
			*uParam4 = 0;
			break;
		
		case 129:
			StringCopy(sParam1, "HARBOR_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 66;
			*uParam4 = 0;
			break;
		
		case 130:
			StringCopy(sParam1, "DIAMOND_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 67;
			*uParam4 = 0;
			break;
		
		case 131:
			StringCopy(sParam1, "SURF_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 68;
			*uParam4 = 0;
			break;
		
		case 132:
			StringCopy(sParam1, "NAUTICAL_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 69;
			*uParam4 = 0;
			break;
		
		case 133:
			StringCopy(sParam1, "RACING_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 73;
			*uParam4 = 0;
			break;
		
		case 134:
			StringCopy(sParam1, "LIGHT_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 74;
			*uParam4 = 0;
			break;
		
		case 135:
			StringCopy(sParam1, "BISON_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 101;
			*uParam4 = 0;
			break;
		
		case 136:
			StringCopy(sParam1, "CREEK_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 95;
			*uParam4 = 0;
			break;
		
		case 137:
			StringCopy(sParam1, "UMBER_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 94;
			*uParam4 = 0;
			break;
		
		case 138:
			StringCopy(sParam1, "MAPLE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 97;
			*uParam4 = 0;
			break;
		
		case 139:
			StringCopy(sParam1, "BEECHWOOD_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 103;
			*uParam4 = 0;
			break;
		
		case 140:
			StringCopy(sParam1, "SIENNA_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 104;
			*uParam4 = 0;
			break;
		
		case 141:
			StringCopy(sParam1, "SADDLE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 98;
			*uParam4 = 0;
			break;
		
		case 142:
			StringCopy(sParam1, "MOSS_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 100;
			*uParam4 = 0;
			break;
		
		case 143:
			StringCopy(sParam1, "WOODBEECH_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 102;
			*uParam4 = 0;
			break;
		
		case 144:
			StringCopy(sParam1, "STRAW_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 99;
			*uParam4 = 0;
			break;
		
		case 145:
			StringCopy(sParam1, "SANDY_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 105;
			*uParam4 = 0;
			break;
		
		case 146:
			StringCopy(sParam1, "BLEECHED_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 106;
			*uParam4 = 0;
			break;
		
		case 147:
			StringCopy(sParam1, "PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 71;
			*uParam4 = 0;
			break;
		
		case 148:
			StringCopy(sParam1, "SPIN_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 72;
			*uParam4 = 0;
			break;
		
		case 149:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 142;
			*uParam4 = 0;
			break;
		
		case 150:
			StringCopy(sParam1, "BRIGHT_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 145;
			*uParam4 = 0;
			break;
		
		case 151:
			StringCopy(sParam1, "CREAM", 16);
			*uParam2 = 1;
			*uParam3 = 107;
			*uParam4 = 0;
			break;
		
		case 152:
			StringCopy(sParam1, "FROST_WHITE", 16);
			*uParam2 = 1;
			*uParam3 = 112;
			*uParam4 = 0;
			break;
		
		case 153:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 2;
			*uParam3 = 12;
			*uParam4 = 0;
			break;
		
		case 154:
			StringCopy(sParam1, "GREY", 16);
			*uParam2 = 2;
			*uParam3 = 13;
			*uParam4 = 0;
			break;
		
		case 155:
			StringCopy(sParam1, "LIGHT_GREY", 16);
			*uParam2 = 2;
			*uParam3 = 14;
			*uParam4 = 0;
			break;
		
		case 156:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 2;
			*uParam3 = 131;
			*uParam4 = 0;
			break;
		
		case 157:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 83;
			*uParam4 = 0;
			break;
		
		case 158:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 82;
			*uParam4 = 0;
			break;
		
		case 159:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 84;
			*uParam4 = 0;
			break;
		
		case 160:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 2;
			*uParam3 = 149;
			*uParam4 = 0;
			break;
		
		case 161:
			StringCopy(sParam1, "Purple", 16);
			*uParam2 = 2;
			*uParam3 = 148;
			*uParam4 = 0;
			break;
		
		case 162:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 2;
			*uParam3 = 39;
			*uParam4 = 0;
			break;
		
		case 163:
			StringCopy(sParam1, "DARK_RED", 16);
			*uParam2 = 2;
			*uParam3 = 40;
			*uParam4 = 0;
			break;
		
		case 164:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 2;
			*uParam3 = 41;
			*uParam4 = 0;
			break;
		
		case 165:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 2;
			*uParam3 = 42;
			*uParam4 = 0;
			break;
		
		case 166:
			StringCopy(sParam1, "GREEN", 16);
			*uParam2 = 2;
			*uParam3 = 128;
			*uParam4 = 0;
			break;
		
		case 167:
			StringCopy(sParam1, "MATTE_FOR", 16);
			*uParam2 = 2;
			*uParam3 = 151;
			*uParam4 = 0;
			break;
		
		case 168:
			StringCopy(sParam1, "MATTE_FOIL", 16);
			*uParam2 = 2;
			*uParam3 = 155;
			*uParam4 = 0;
			break;
		
		case 169:
			StringCopy(sParam1, "MATTE_OD", 16);
			*uParam2 = 2;
			*uParam3 = 152;
			*uParam4 = 0;
			break;
		
		case 170:
			StringCopy(sParam1, "MATTE_DIRT", 16);
			*uParam2 = 2;
			*uParam3 = 153;
			*uParam4 = 0;
			break;
		
		case 171:
			StringCopy(sParam1, "MATTE_DESERT", 16);
			*uParam2 = 2;
			*uParam3 = 154;
			*uParam4 = 0;
			break;
		
		case 172:
			StringCopy(sParam1, "BR_STEEL", 16);
			*uParam2 = 3;
			*uParam3 = 117;
			*uParam4 = 18;
			break;
		
		case 173:
			StringCopy(sParam1, "BR_ALUMINIUM", 16);
			*uParam2 = 3;
			*uParam3 = 119;
			*uParam4 = 5;
			break;
		
		case 174:
			StringCopy(sParam1, "GOLD_P", 16);
			*uParam2 = 3;
			*uParam3 = 158;
			*uParam4 = 160;
			break;
		
		case 175:
			StringCopy(sParam1, "GOLD_S", 16);
			*uParam2 = 3;
			*uParam3 = 159;
			*uParam4 = 160;
			break;
	}
	return *uParam2 != -1;
}

float func_193(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	
	iVar0 = 100000;
	iVar1 = 65000;
	iVar2 = 50000;
	iVar3 = 20000;
	iVar4 = 20000;
	iVar5 = iVar4;
	if (((does_entity_exist(iParam0) && is_vehicle_driveable(iParam0, 0)) && get_vehicle_mod_kit(iParam0) >= 0) && get_vehicle_mod_kit(iParam0) < 255)
	{
		if (get_vehicle_mod_kit_type(iParam0) == 3)
		{
			iVar5 = iVar0;
		}
		else if (get_vehicle_mod_kit_type(iParam0) == 1)
		{
			iVar5 = iVar1;
		}
		else if (get_vehicle_mod_kit_type(iParam0) == 2)
		{
			iVar5 = iVar2;
		}
		else if (get_vehicle_mod_kit_type(iParam0) == 0)
		{
			if (is_this_model_a_bike(get_entity_model(iParam0)))
			{
				iVar5 = iVar3;
			}
			else
			{
				iVar5 = iVar4;
			}
		}
	}
	fVar6 = to_float(iVar5) / to_float(iVar4);
	return fVar6;
}

bool func_194(int iParam0, var uParam1, var uParam2)
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

bool func_195(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	*uParam2 = 0;
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (!is_vehicle_driveable(iParam0, 0))
	{
		return false;
	}
	if (!is_model_a_vehicle(get_entity_model(iParam0)))
	{
		return false;
	}
	iVar0 = get_entity_model(iParam0);
	if (!func_197(iVar0, iParam1, uParam2))
	{
		return false;
	}
	if (is_big_vehicle(iParam0))
	{
		*uParam2 = 2;
		return false;
	}
	if (!network_is_game_in_progress())
	{
		if ((func_196(iParam0) && get_entity_model(iParam0) != joaat("sentinel2")) && get_entity_model(iParam0) != joaat("issi2"))
		{
			*uParam2 = 2;
			return false;
		}
	}
	return true;
}

bool func_196(int iParam0)
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

bool func_197(int iParam0, int iParam1, var uParam2)
{
	if (!iParam1)
	{
		if ((((((((((((((iParam0 == joaat("police") || iParam0 == joaat("policeold1")) || iParam0 == joaat("policeold2")) || iParam0 == joaat("police2")) || iParam0 == joaat("police3")) || iParam0 == joaat("police4")) || iParam0 == joaat("fbi")) || iParam0 == joaat("fbi2")) || iParam0 == joaat("polmav")) || iParam0 == joaat("policeb")) || iParam0 == joaat("policet")) || iParam0 == joaat("riot")) || iParam0 == joaat("sheriff")) || iParam0 == joaat("pranger")) || iParam0 == joaat("sheriff2"))
		{
			*uParam2 = 1;
			return false;
		}
	}
	if (((((((iParam0 == joaat("ambulance") || iParam0 == 1938952078) || iParam0 == joaat("taxi")) || iParam0 == joaat("lguard")) || iParam0 == joaat("ripley")) || iParam0 == joaat("dilettante2")) || iParam0 == joaat("airbus")) || iParam0 == joaat("airtug"))
	{
		*uParam2 = 2;
		return false;
	}
	if (((iParam0 == joaat("burrito") || iParam0 == joaat("rumpo2")) || iParam0 == joaat("speedo")) || iParam0 == joaat("speedo2"))
	{
		*uParam2 = 2;
		return false;
	}
	if (((iParam0 == joaat("scorcher") || iParam0 == joaat("bmx")) || iParam0 == joaat("cruiser")) || iParam0 == joaat("fixter"))
	{
		*uParam2 = 2;
		return false;
	}
	if (((((((((((((((((((iParam0 == joaat("caddy") || iParam0 == joaat("forklift")) || iParam0 == joaat("caddy2")) || iParam0 == joaat("crusader")) || iParam0 == joaat("tribike")) || iParam0 == joaat("tribike2")) || iParam0 == joaat("tribike3")) || iParam0 == joaat("tractor")) || iParam0 == joaat("tractor2")) || iParam0 == joaat("mower")) || iParam0 == joaat("tornado4")) || iParam0 == joaat("docktug")) || iParam0 == joaat("stretch")) || iParam0 == joaat("bison2")) || iParam0 == joaat("bison3")) || iParam0 == joaat("benson")) || iParam0 == joaat("pounder")) || iParam0 == joaat("submersible")) || iParam0 == joaat("emperor3")) || iParam0 == joaat("dune2"))
	{
		*uParam2 = 2;
		return false;
	}
	if (((!is_this_model_a_car(iParam0) && !is_this_model_a_bike(iParam0)) && iParam0 != joaat("blazer")) && iParam0 != joaat("blazer3"))
	{
		*uParam2 = 2;
		return false;
	}
	if (iParam0 == joaat("monster"))
	{
		*uParam2 = 2;
		return false;
	}
	if ((iParam0 == joaat("insurgent") || iParam0 == joaat("technical")) || iParam0 == joaat("limo2"))
	{
		*uParam2 = 2;
		return false;
	}
	if (network_is_game_in_progress())
	{
		if (func_198(iParam0))
		{
			*uParam2 = 2;
			return false;
		}
	}
	if (!network_is_game_in_progress())
	{
		if (iParam0 == joaat("insurgent") || iParam0 == joaat("insurgent2"))
		{
			*uParam2 = 2;
		}
	}
	return true;
}

bool func_198(int iParam0)
{
	switch (iParam0)
	{
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("forklift"):
			return true;
			break;
	}
	return false;
}

void func_199(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_203(iParam0))
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
	func_200(iParam0, &(Global_101154.f_18807.f_5510));
}

void func_200(int iParam0, var uParam1)
{
	int iVar0;
	
	if (is_vehicle_driveable(iParam0, 0))
	{
		func_202(uParam1);
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
		func_194(&iParam0, uParam1.f_9, uParam1.f_59);
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (is_vehicle_extra_turned_on(iParam0, iVar0 + 1))
			{
				set_bit(uParam1.f_77, func_201(iVar0 + 1));
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

int func_201(int iParam0)
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

void func_202(var uParam0)
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

bool func_203(int iParam0)
{
	if ((((((((((!does_entity_exist(iParam0) || !is_vehicle_driveable(iParam0, 0)) || func_216(iParam0, 0, 0)) || func_216(iParam0, 1, 0)) || func_216(iParam0, 2, 0)) || func_215(iParam0) != 145) || func_214(iParam0)) || func_213(iParam0)) || func_196(iParam0)) || func_212(iParam0)) || !func_204(get_entity_model(iParam0)))
	{
		if (func_213(iParam0))
		{
		}
		if (func_213(iParam0))
		{
		}
		if (func_216(iParam0, 0, 0))
		{
		}
		if (func_216(iParam0, 1, 0))
		{
		}
		if (func_216(iParam0, 2, 0))
		{
		}
		if (func_215(iParam0) != 145)
		{
		}
		return false;
	}
	return true;
}

bool func_204(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	if (!func_205(iParam0, 0))
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

bool func_205(int iParam0, int iParam1)
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
		if (!func_211())
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
		if ((((!func_210() && !func_209()) && !func_208()) && !func_207()) && !func_211())
		{
			return false;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((is_durango_version() || is_pc_version()) || is_orbis_version())
		{
		}
		else if (!func_208())
		{
			return false;
		}
	}
	if (iParam1)
	{
		if (!func_206(iParam0))
		{
			return false;
		}
	}
	return true;
}

int func_206(int iParam0)
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

bool func_207()
{
	return false;
}

bool func_208()
{
	return true;
}

bool func_209()
{
	return true;
}

bool func_210()
{
	if (is_dlc_present(-1226939934))
	{
		return true;
	}
	return false;
}

bool func_211()
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

bool func_212(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = get_entity_model(iParam0);
	sVar1 = get_vehicle_number_plate_text(iParam0);
	if (iVar0 == joaat("speedo") && are_strings_equal(sVar1, "LAMAR G "))
	{
		return true;
	}
	if (!func_205(iVar0, 0))
	{
		return true;
	}
	return false;
}

bool func_213(int iParam0)
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

bool func_214(int iParam0)
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

bool func_216(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!does_entity_exist(iParam0) || !is_vehicle_driveable(iParam0, 0))
	{
		return false;
	}
	iVar0 = 0;
	while (func_19(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!iParam2 || is_bit_set(Global_101154.f_5919[iVar9], false))
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

void func_217(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!does_entity_exist(Global_88942[iVar0]))
		{
			Global_88942[iVar0] = iParam0;
			Global_88952[iVar0] = iParam1;
			Global_88962[iVar0] = get_entity_model(iParam0);
			if (is_this_model_a_car(Global_88962[iVar0]))
			{
				Global_88990[iParam1 /*3*/][0] = -1;
			}
			else
			{
				Global_88990[iParam1 /*3*/][1] = -1;
			}
			iVar0 = 9;
		}
		if (iVar0 == 8)
		{
		}
		iVar0++;
	}
}

void func_218(var uParam0)
{
	if (!func_219(*uParam0))
	{
		set_vehicle_extra(*uParam0, 5, !Global_101154.f_7775.f_99.f_58[119]);
	}
}

int func_219(int iParam0)
{
	return is_vehicle_extra_turned_on(iParam0, 5);
}

bool func_220(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!is_vehicle_driveable(*uParam0, 0))
	{
		return false;
	}
	if (get_num_mod_kits(*uParam0) == 0)
	{
		return false;
	}
	set_vehicle_mod_kit(*uParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			toggle_vehicle_mod(*uParam0, iVar1, *uParam1[iVar0] > 0);
		}
		else if (get_vehicle_mod(*uParam0, iVar1) != *uParam1[iVar0] - 1)
		{
			remove_vehicle_mod(*uParam0, iVar1);
			if (*uParam1[iVar0] > 0)
			{
				if (iVar0 == 23)
				{
					set_vehicle_mod(*uParam0, iVar1, *uParam1[iVar0] - 1, *uParam2[0] > 0);
				}
				else if (iVar0 == 24)
				{
					set_vehicle_mod(*uParam0, iVar1, *uParam1[iVar0] - 1, *uParam2[1] > 0);
				}
				else
				{
					set_vehicle_mod(*uParam0, iVar1, *uParam1[iVar0] - 1, false);
				}
			}
		}
		iVar0++;
	}
	if (func_223(get_entity_model(*uParam0), 1) && get_vehicle_mod(*uParam0, 24) != func_222(*uParam0, *uParam1[38] - 1))
	{
		set_vehicle_mod(*uParam0, 24, func_222(*uParam0, *uParam1[38] - 1), false);
	}
	if (func_221(*uParam0))
	{
		set_vehicle_strong(*uParam0, true);
		set_vehicle_has_strong_axles(*uParam0, true);
	}
	return true;
}

bool func_221(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char[16] cVar3;
	
	if ((does_entity_exist(iParam0) && is_vehicle_driveable(iParam0, 0)) && get_num_mod_kits(iParam0) > 0)
	{
		set_vehicle_mod_kit(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (get_vehicle_mod(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, get_mod_text_label(iParam0, iVar1, get_vehicle_mod(iParam0, iVar1)), 16);
				iVar2 = get_hash_key(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == get_hash_key("MNU_CAGE") || iVar2 == get_hash_key("SABRE_CAG"))
					{
						return true;
					}
				}
			}
			iVar0++;
		}
	}
	return false;
}

int func_222(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	if (does_entity_exist(iParam0) && is_vehicle_driveable(iParam0, 0))
	{
		switch (get_entity_model(iParam0))
		{
			case joaat("tornado5"):
				switch (iParam1)
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
						return 4;
						break;
				}
				break;
			
			case joaat("faction3"):
				return 3;
				break;
		}
		iVar0 = get_num_vehicle_mods(iParam0, 38);
		iVar1 = get_num_vehicle_mods(iParam0, 24);
		fVar2 = to_float(iParam1 + 1) / to_float(iVar0);
		iVar3 = floor(to_float(iVar1) * fVar2) - 1;
		if (iVar3 < 0)
		{
			iVar3 = 0;
		}
		if (iVar3 >= iVar0)
		{
			iVar3 = iVar0 - 1;
		}
		return iVar3;
	}
	return 0;
}

bool func_223(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("faction2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("moonbeam2"):
		case joaat("primo2"):
		case joaat("voodoo"):
			return true;
			break;
		
		case joaat("sabregt2"):
			if (!Global_262145.f_11649)
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_262145.f_11650)
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_262145.f_11648)
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_262145.f_11651)
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_262145.f_11653)
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_262145.f_11652)
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		
		case joaat("sultanrs"):
		case joaat("banshee2"):
			if (iParam1 & 1 != 0)
			{
				return false;
			}
			return true;
			break;
	}
	return false;
}

bool func_224(var uParam0, int iParam1)
{
	if (network_is_game_in_progress())
	{
	}
	else if (Global_101154.f_24643.f_261)
	{
		*uParam0 = {Global_101154.f_24643.f_267};
		*iParam1 = Global_101154.f_24643.f_271;
		return true;
	}
	return false;
}

void func_225(int iParam0, var uParam1, int iParam2)
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

int func_226(int iParam0, int iParam1)
{
	if (func_10(iParam0))
	{
		return has_model_loaded(func_227(iParam0, iParam1));
	}
	else if (iParam0 != 145)
	{
	}
	return false;
}

int func_227(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_10(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_225(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_228(int iParam0, int iParam1)
{
	if (func_10(iParam0))
	{
		request_model(func_227(iParam0, iParam1));
	}
	else if (iParam0 != 145)
	{
	}
}

bool func_229(vector3 vParam0, Vector3 fParam1, int iParam2)
{
	int iVar0;
	
	if (!does_entity_exist(Local_2967) || iParam4)
	{
		if (!does_entity_exist(Local_2967))
		{
			if (func_231(&Local_2967, 19, vParam0, fParam3, 1))
			{
				iVar0 = true;
			}
		}
		else
		{
			iVar0 = true;
		}
		if (iVar0)
		{
			set_ped_component_variation(Local_2967, 2, 0, 0, 0);
			set_ped_component_variation(Local_2967, 3, 0, 0, 0);
			set_ped_component_variation(Local_2967, 4, 0, 0, 0);
			set_ped_component_variation(Local_2967, 5, 2, 0, 0);
			set_ped_component_variation(Local_2967, 9, 0, 0, 0);
			set_ped_component_variation(Local_2967, 8, 0, 0, 0);
			set_ped_can_be_targetted(Local_2967, false);
			set_ped_relationship_group_hash(Local_2967, 1862763509);
			set_ped_config_flag(Local_2967, 182, true);
			func_230(&Local_3169, 5, Local_2967, "LAMAR", 0, 1);
			return true;
		}
	}
	else
	{
		if (Local_3169[5 /*10*/] != Local_2967)
		{
			func_230(&Local_3169, 5, Local_2967, "LAMAR", 0, 1);
		}
		return true;
	}
	return false;
}

void func_230(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

bool func_231(int iParam0, int iParam1, vector3 vParam2, Vector3 fParam3, int iParam4)
{
	int iVar0;
	
	if (!func_10(iParam1))
	{
		iVar0 = func_233(iParam1);
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
					set_ped_component_variation(*iParam0, 5, 2, 0, 0);
				}
			}
			func_232(*iParam0, iParam1);
			if (iParam6)
			{
				set_model_as_no_longer_needed(iVar0);
			}
			return true;
		}
	}
	return false;
}

bool func_232(var uParam0, int iParam1)
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

int func_233(int iParam0)
{
	if (!func_10(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_234(vector3 vParam0, Vector3 fParam1, int iParam2, int iParam3)
{
	if (func_799())
	{
		set_this_script_can_be_paused(0);
		clear_bit(&(Global_91278.f_20), 2);
		set_game_paused(true);
		if (is_player_playing(player_id()))
		{
			set_player_control(player_id(), false, 0);
		}
		Global_91274 = {vParam0};
		Global_91277 = fParam3;
		Global_91273 = 1;
		if (iParam4 == 1)
		{
			set_bit(&(Global_91278.f_20), 14);
		}
		else
		{
			clear_bit(&(Global_91278.f_20), 14);
		}
		if (iParam5 == 1)
		{
			set_bit(&(Global_91278.f_20), 24);
		}
		else
		{
			clear_bit(&(Global_91278.f_20), 24);
		}
		func_186(1);
	}
}

void func_235()
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	int[] iVar6 = new int[1];
	float fVar8;
	int iVar9;
	struct<4> Var10;
	var uVar14;
	int iVar18;
	int iVar19;
	int iVar20;
	float fVar21;
	int iVar22;
	
	if (iLocal_3166 == 4)
	{
		if (iLocal_2932 == 0)
		{
			iLocal_2932 = get_interior_at_coords_with_type(-38.62f, -1099.01f, 27.31f, "v_carshowroom");
		}
		set_entity_coords(player_ped_id(), vLocal_2751, 1, false, 0, 1);
		_0x2CA429C029CCF247(iLocal_2932);
		if (iLocal_2535)
		{
			func_234(vLocal_2751, fLocal_2632, 0, 0);
		}
		else
		{
			set_entity_coords(player_ped_id(), vLocal_2751, 1, false, 0, 1);
			set_entity_heading(player_ped_id(), fLocal_2632);
			freeze_entity_position(player_ped_id(), true);
			load_scene(vLocal_2751);
			wait(0);
		}
		func_318();
		while ((((((((((!is_interior_ready(iLocal_2932) || !func_317(0)) || !func_316(0)) || !does_entity_exist(Local_2967)) || !does_entity_exist(Local_3078[0 /*7*/])) || !does_entity_exist(Local_3078[1 /*7*/])) || !does_entity_exist(iLocal_2805)) || !does_entity_exist(Local_2977)) || !does_entity_exist(vLocal_2972.x)) || !has_vehicle_asset_loaded(func_227(1, 1))) || !has_anim_dict_loaded(sLocal_2794))
		{
			request_vehicle_asset(func_227(1, 1), 3);
			request_anim_dict(sLocal_2794);
			_0x2CA429C029CCF247(iLocal_2932);
			func_229(vLocal_2754, fLocal_2633, 0);
			func_315(34.0424f, -638.7692f, 30.6252f, 0);
			func_314(44.0424f, -638.7692f, 30.6252f, 0);
			func_188(vLocal_2748, fLocal_2631, 0);
			func_313(vLocal_2769, fLocal_2639, 0);
			func_310(vLocal_2772, fLocal_2640, 0);
			wait(0);
		}
		func_185(0, -1, 0);
		freeze_entity_position(player_ped_id(), false);
		func_309();
		func_308();
		set_entity_coords(player_ped_id(), vLocal_2751, 1, false, 0, 1);
		set_entity_heading(player_ped_id(), fLocal_2632);
		freeze_entity_position(player_ped_id(), false);
		if (is_vehicle_driveable(Local_3078[iLocal_2644 /*7*/], 0))
		{
			set_entity_coords(Local_3078[iLocal_2644 /*7*/], -30.5774f, -1090.563f, 25.4222f, 1, false, 0, 1);
			set_entity_heading(Local_3078[iLocal_2644 /*7*/], 159.6013f);
			freeze_entity_position(Local_3078[iLocal_2644 /*7*/], true);
			set_vehicle_is_considered_by_player(Local_3078[iLocal_2644 /*7*/], 0);
		}
		iLocal_2690 = add_navmesh_blocking_object(-59f, -1095.8f, 25.4223f, 10f, 4f, 3f, func_307(-67.2459f), 0, 7);
		iLocal_2691 = add_navmesh_blocking_object(-37.4137f, -1108.567f, 25.4223f, 4f, 4f, 3f, 72.3459f, 0, 7);
		func_306();
		iLocal_2643 = 99;
		iLocal_2516 = 1;
		iLocal_3166 = 0;
	}
	if (iLocal_3166 == 0)
	{
		if (iLocal_2932 != 0)
		{
			if (is_interior_ready(iLocal_2932))
			{
				unpin_interior(iLocal_2932);
				iLocal_2932 = 0;
			}
		}
		if (is_vehicle_driveable(Local_3078[0 /*7*/], 0))
		{
			set_vehicle_engine_on(Local_3078[0 /*7*/], false, 0, 0);
			set_vehicle_is_considered_by_player(Local_3078[0 /*7*/], 0);
		}
		if (is_vehicle_driveable(Local_3078[1 /*7*/], 0))
		{
			set_vehicle_engine_on(Local_3078[1 /*7*/], false, 0, 0);
			set_vehicle_is_considered_by_player(Local_3078[1 /*7*/], 0);
		}
		if (is_vehicle_driveable(iLocal_2805, 0))
		{
			set_vehicle_fixed(iLocal_2805);
		}
		if (is_screen_faded_out())
		{
			set_entity_coords(player_ped_id(), -38.077f, -1096.467f, 25.4223f, 1, false, 0, 1);
			set_entity_heading(player_ped_id(), 296.617f);
			if (!is_ped_injured(Local_2967))
			{
				set_entity_coords(Local_2967, vLocal_2754, 1, false, 0, 1);
				set_entity_heading(Local_2967, fLocal_2633);
			}
			while (!func_317(0))
			{
				wait(0);
			}
			if (iLocal_2643 != 99)
			{
				func_46(vLocal_2751, 100f, 1, 5000);
			}
			if (is_vehicle_driveable(iLocal_2805, 0) && !is_ped_injured(Local_2967))
			{
				task_enter_vehicle(Local_2967, iLocal_2805, 40000, false, 1f, 1, 0);
			}
			simulate_player_input_gait(player_id(), 1f, 2000, 296.617f, 0, 0);
			wait(500);
			set_gameplay_cam_relative_heading(0f);
			set_gameplay_cam_relative_pitch(0f, 1f);
		}
		func_305(1);
		if (!is_audio_scene_active("ARM_1_GO_HOME"))
		{
			start_audio_scene("ARM_1_GO_HOME");
		}
		if (!is_ped_injured(Local_2977) && !is_ped_injured(vLocal_2972.x))
		{
			if (has_anim_dict_loaded(sLocal_2794))
			{
				iLocal_2709 = create_synchronized_scene(-39.546f, -1092.79f, 25.422f, 0f, 0f, 0f, 2);
				task_synchronized_scene(vLocal_2972.x, iLocal_2709, sLocal_2794, "_leadout_simeon", 1000f, -1.5f, 5, 0, 1000f, 0);
				task_synchronized_scene(Local_2977, iLocal_2709, sLocal_2794, "_leadout_jimmy", 1000f, -1.5f, 5, 0, 1000f, 0);
				set_synchronized_scene_phase(iLocal_2709, 0f);
			}
			task_look_at_entity(vLocal_2972.x, Local_2977, -1, 2048, 2);
		}
		func_56();
		set_player_control(player_id(), true, 0);
		set_max_wanted_level(5);
		if (!is_entity_dead(Local_3078[0 /*7*/], 0))
		{
			freeze_entity_position(Local_3078[0 /*7*/], false);
			_0x3910051CCECDB00C(Local_3078[0 /*7*/], true);
			clear_entity_last_damage_entity(Local_3078[0 /*7*/]);
		}
		if (!is_entity_dead(Local_3078[1 /*7*/], 0))
		{
			freeze_entity_position(Local_3078[1 /*7*/], false);
			_0x3910051CCECDB00C(Local_3078[1 /*7*/], true);
			clear_entity_last_damage_entity(Local_3078[1 /*7*/]);
		}
		func_304(&(iLocal_2814[0]), 0);
		func_303();
		func_71(48, 1);
		func_71(47, 1);
		func_767(3, "GO_TO_HOUSE", 1, 0, 0, 1);
		settimera(0);
		vLocal_2972.z = 0;
		iLocal_2701 = 0;
		iLocal_2712 = 0;
		iLocal_2643 = 0;
		iLocal_2522 = 0;
		iLocal_3166 = 1;
	}
	if (iLocal_3166 == 1)
	{
		func_71(49, 3);
		if (timera() < 3000)
		{
			_0xAF66DCEE6609B148();
		}
		if (!is_ped_injured(Local_2967))
		{
			if (!iLocal_2522)
			{
				set_bit(&(Local_3095.f_13), 10);
				set_ped_max_move_blend_ratio(Local_2967, 1f);
				if (!is_entity_dead(iLocal_2805, 0) && is_ped_sitting_in_vehicle(player_ped_id(), iLocal_2805))
				{
					clear_bit(&(Local_3095.f_13), 10);
					if (!is_ped_in_vehicle(Local_2967, iLocal_2805, 0))
					{
						task_enter_vehicle(Local_2967, iLocal_2805, 20000, false, 2f, 1, 0);
					}
					iLocal_2522 = 1;
				}
			}
		}
		switch (iLocal_2643)
		{
			case 0:
				if (!does_blip_exist(iLocal_2882))
				{
					if (is_vehicle_driveable(iLocal_2805, 0))
					{
						iLocal_2882 = func_301(iLocal_2805, 0, 0);
					}
				}
				if (!iLocal_2547[62])
				{
					if (!func_299(&Local_3095, 1))
					{
						func_230(&Local_3169, 6, Local_2977, "JIMMY", 0, 1);
						func_230(&Local_3169, 4, vLocal_2972.x, "SIMEON", 0, 1);
						if (func_298(&Local_3169, "ARM1AUD", "ARM1_GETINJ", 7, 0, 0, 0))
						{
							iLocal_2547[62] = 1;
						}
					}
				}
				else if (func_288(&Local_3169, "ARM1AUD", "ARM1_LEAVEG", "ARM1_LEAVEG_1", 7, 0, 0))
				{
					iLocal_2547[53] = 1;
					iLocal_2643++;
				}
				break;
			
			case 1:
				if (does_blip_exist(iLocal_2882))
				{
					remove_blip(&iLocal_2882);
				}
				if (func_254(&Local_3095, vLocal_2739, 0.001f, 0.001f, 2f, 1, Local_2967, iLocal_2805, "AR1_HOME", "AR1_WAIT", "CMN_GENGETINY", "CMN_GENGETBCKY", 0, 1, 1, -1))
				{
					iLocal_2643++;
				}
				else if (does_blip_exist(Local_3095.f_5))
				{
					if (!iLocal_2547[54])
					{
						if (iLocal_2701 == 0)
						{
							iLocal_2701 = get_game_timer();
						}
						else if (get_game_timer() - iLocal_2701 > 7000)
						{
							if (!is_help_message_being_displayed())
							{
								if (func_253("AR1_HOME", 0, 0))
								{
									clear_prints();
								}
								func_55("AR1_VIEWSTATS", 15000);
								iLocal_2547[54] = 1;
								iLocal_2701 = 0;
							}
						}
					}
					else if (!iLocal_2547[55])
					{
						if (!is_control_pressed(0, 19))
						{
							iLocal_2701 = get_game_timer();
						}
						else if (get_game_timer() - iLocal_2701 > 250 && func_252(1))
						{
							func_55("AR1_VIEWSTATS2", 15000);
							iLocal_2547[55] = 1;
						}
					}
					if (iLocal_2516)
					{
						remove_vehicle_asset(func_227(1, 1));
						iLocal_2516 = 0;
					}
					fVar1 = 12f;
					fVar2 = get_entity_speed(iLocal_2805);
					if (fVar2 < 3f)
					{
						fVar2 = 3f;
					}
					else if (fVar2 > fVar1)
					{
						fVar2 = fVar1;
					}
					fVar0 = 2f + fVar2 - 3f / fVar1 - 3f * 8.5f;
					if (is_entity_in_angled_area(player_ped_id(), -27.6771f, -1427.279f, 29.66922f, -23.04911f, -1427.3f, 32.1599f, fVar0, 0, true, 0) && func_251(1, 1, 1))
					{
						func_247(&Local_3095, 1, 0);
						set_wanted_level_multiplier(0f);
						fLocal_2638 = fVar2;
						iLocal_2643++;
					}
					else if (timera() > 1000 && func_246(player_ped_id(), Local_2967))
					{
						if (func_97())
						{
							func_245(0);
						}
						if (!iLocal_2547[56])
						{
							if (!func_299(&Local_3095, 1))
							{
								if (func_298(&Local_3169, "ARM1AUD", "ARM1_DRIV2A", 7, 0, 0, 0))
								{
									iLocal_2547[56] = 1;
								}
							}
						}
						else if (!iLocal_2547[58])
						{
							if (is_entity_in_angled_area(player_ped_id(), -16.96474f, -1462.947f, 29.15786f, -17.41634f, -1431.48f, 36.68279f, 22.25f, 0, true, 0))
							{
								if (!func_299(&Local_3095, 1))
								{
									if (func_298(&Local_3169, "ARM1AUD", "ARM1_ATHOME", 7, 0, 0, 0))
									{
										iLocal_2547[58] = 1;
									}
								}
								else
								{
									func_243();
								}
							}
						}
					}
				}
				else if (iLocal_2547[56] || iLocal_2547[58])
				{
					if (!func_97())
					{
						func_245(1);
					}
				}
				break;
			
			case 2:
				if (is_ped_sitting_in_any_vehicle(player_ped_id()))
				{
					iVar3 = get_vehicle_ped_is_in(player_ped_id(), 0);
				}
				if (is_vehicle_driveable(iVar3, 0))
				{
					disable_control_action(0, 27, 1);
					if (fLocal_2638 > 3f && fLocal_2638 < 12f)
					{
						fVar5 = 2f;
					}
					else
					{
						fVar5 = 3.5f;
					}
					if (func_242(iVar3, fVar5, 1, 1056964608, 0, 1, 0))
					{
						set_player_control(player_id(), false, 768);
						iVar4 = true;
					}
				}
				else
				{
					iVar4 = true;
				}
				if (func_97())
				{
					func_245(0);
				}
				if (!iLocal_2547[58])
				{
					if (func_299(&Local_3095, 0))
					{
						func_243();
					}
					else if (func_298(&Local_3169, "ARM1AUD", "ARM1_ATHOME", 7, 0, 0, 0))
					{
						iLocal_2547[58] = 1;
					}
				}
				else if (iVar4)
				{
					set_player_control(player_id(), false, 768);
					iLocal_3166 = 2;
				}
				break;
		}
		if (is_pc_version())
		{
			if (vdist2(get_entity_coords(player_ped_id(), 1), vLocal_2739) < 20f * 20f)
			{
				request_cutscene(sLocal_2787, 8);
				func_99(sLocal_2787);
			}
			else if (vdist2(get_entity_coords(player_ped_id(), 1), vLocal_2739) > 30f * 30f)
			{
				if (is_cutscene_active())
				{
					remove_cutscene();
				}
			}
		}
		else if (vdist2(get_entity_coords(player_ped_id(), 1), vLocal_2739) < 100f * 100f)
		{
			request_cutscene(sLocal_2787, 8);
			func_99(sLocal_2787);
		}
		else if (vdist2(get_entity_coords(player_ped_id(), 1), vLocal_2739) > 120f * 120f)
		{
			if (is_cutscene_active())
			{
				remove_cutscene();
			}
		}
		if (does_blip_exist(Local_3095.f_5))
		{
			if (!iLocal_2547[59])
			{
				if (is_entity_in_angled_area(player_ped_id(), -24.22909f, -1451.201f, 29.76049f, -23.50623f, -1430.866f, 32.15756f, 7f, 0, true, 0))
				{
					func_55("AR1_GARHELP1", 15000);
					iLocal_2547[59] = 1;
				}
			}
		}
		if (!iLocal_2547[60])
		{
			if (is_vehicle_driveable(iLocal_2805, 0))
			{
				if (vdist2(get_entity_coords(player_ped_id(), 1), get_entity_coords(iLocal_2805, 1)) < 225f && is_entity_on_screen(iLocal_2805))
				{
					func_55("AR1_UNIQUE", 15000);
					iLocal_2547[60] = 1;
				}
			}
		}
		else if (!iLocal_2547[61])
		{
			if (!is_help_message_being_displayed())
			{
				func_55("AR1_APPHELP", 15000);
				iLocal_2547[61] = 1;
			}
		}
		if (!is_ped_injured(vLocal_2972.x) && !is_ped_injured(Local_2977))
		{
			switch (vLocal_2972.z)
			{
				case 0:
					if ((is_synchronized_scene_running(iLocal_2709) && get_synchronized_scene_phase(iLocal_2709) > 0f) || !is_synchronized_scene_running(iLocal_2709))
					{
						get_ped_nearby_vehicles(vLocal_2972.x, &iVar6);
						if (is_vehicle_driveable(iVar6[0], 0))
						{
							task_enter_vehicle(Local_2977, iVar6[0], 20000, -1, 1f, 1, 0);
							task_enter_vehicle(vLocal_2972.x, iVar6[0], 20000, false, 1f, 1, 0);
							set_blocking_of_non_temporary_events(Local_2977, true);
							set_blocking_of_non_temporary_events(vLocal_2972.x, true);
							iLocal_2714 = 0;
							iLocal_2715 = 0;
							vLocal_2972.z++;
						}
					}
					break;
				
				case 1:
					if (is_ped_sitting_in_any_vehicle(Local_2977))
					{
						iVar6[0] = get_vehicle_ped_is_in(Local_2977, 0);
						if (!is_entity_dead(iVar6[0], 0))
						{
							fVar8 = vdist2(get_entity_coords(player_ped_id(), 1), get_entity_coords(iVar6[0], 1));
							if (fVar8 < 225f)
							{
								if (get_game_timer() - iLocal_2713 > 0)
								{
									iVar9 = get_interior_from_entity(player_ped_id());
									if (iVar9 != 0)
									{
										if (!func_299(&Local_3095, 1))
										{
											if (!iLocal_2547[76])
											{
												if (func_298(&Local_3169, "ARM1AUD", "ARM1_RADIO1", 7, 0, 0, 0))
												{
													set_vehicle_engine_on(iVar6[0], true, 1, 0);
													set_vehicle_radio_loud(iVar6[0], 1);
													set_veh_radio_station(iVar6[0], "RADIO_01_CLASS_ROCK");
													iLocal_2547[76] = 1;
													iLocal_2713 = get_game_timer() + get_random_int_in_range(8000, 13000);
												}
											}
											else if (iLocal_2714 < 5)
											{
												if (iLocal_2714 == 0)
												{
													StringCopy(&Var10, "ARM1_GETINJ2", 16);
												}
												else if (iLocal_2714 == 1)
												{
													StringCopy(&Var10, "ARM1_GETINJ3", 16);
												}
												else if (iLocal_2714 == 2)
												{
													StringCopy(&Var10, "ARM1_GETINJ4", 16);
												}
												else if (iLocal_2714 == 3)
												{
													StringCopy(&Var10, "ARM1_GETINJ5", 16);
												}
												else if (iLocal_2714 == 4)
												{
													StringCopy(&Var10, "ARM1_GETINJ6", 16);
												}
												if (func_298(&Local_3169, "ARM1AUD", &Var10, 7, 0, 0, 0))
												{
													iLocal_2714++;
													iLocal_2713 = get_game_timer() + get_random_int_in_range(8000, 13000);
												}
											}
											else if (!iLocal_2547[77])
											{
												if (func_298(&Local_3169, "ARM1AUD", "ARM1_FNKLEV1", 7, 0, 0, 0))
												{
													task_look_at_entity(vLocal_2972.x, player_ped_id(), 2000, 2048, 2);
													iLocal_2547[77] = 1;
												}
											}
										}
									}
								}
							}
							MemCopy(&uVar14, {func_241()}, 4);
							if (are_strings_equal(&uVar14, "ARM1_GETINJ"))
							{
								if (fVar8 > 400f)
								{
									func_243();
								}
							}
							if (get_game_timer() - iLocal_2712 > 0)
							{
								if (has_entity_been_damaged_by_entity(iVar6[0], player_ped_id(), 1))
								{
									func_752(18);
									iVar18 = get_random_int_in_range(0, 2);
									iVar19 = get_random_int_in_range(0, 2);
									if (iVar18 == 0)
									{
										if (iVar19 == 0)
										{
											func_239(Local_2977, "GENERIC_INSULT_MED", 3);
										}
										else
										{
											func_239(Local_2977, "GENERIC_CURSE_MED", 3);
										}
										iLocal_2712 = get_game_timer() + get_random_int_in_range(4000, 7000);
									}
									else if (iLocal_2715 < 3)
									{
										if (!func_299(&Local_3095, 1))
										{
											if (func_298(&Local_3169, "ARM1AUD", "ARM1_FNKLEV2", 7, 0, 0, 0))
											{
												iLocal_2712 = get_game_timer() + get_random_int_in_range(4000, 7000);
												iLocal_2715++;
											}
										}
									}
									else
									{
										if (iVar19 == 0)
										{
											func_239(Local_2977, "GENERIC_INSULT_HIGH", 3);
										}
										else
										{
											func_239(Local_2977, "GENERIC_CURSE_HIGH", 3);
										}
										iLocal_2712 = get_game_timer() + get_random_int_in_range(4000, 7000);
									}
								}
							}
							clear_entity_last_damage_entity(iVar6[0]);
							iVar20 = 0;
							while (iVar20 < iLocal_2809)
							{
								if (iLocal_2809[iVar20] != iVar6[0])
								{
									if (has_entity_been_damaged_by_entity(iLocal_2809[iVar20], player_ped_id(), 1))
									{
										func_752(18);
									}
								}
								iVar20++;
							}
							if (!is_vehicle_driveable(iVar6[0], 0))
							{
								func_752(14);
							}
						}
					}
					break;
				}
		}
		fVar21 = vdist2(get_entity_coords(player_ped_id(), 1), -20.2493f, -1082.746f, 25.6579f);
		if (iLocal_2932 != 0)
		{
			if (fVar21 > 1600f)
			{
				if (is_interior_ready(iLocal_2932))
				{
					unpin_interior(iLocal_2932);
					iLocal_2932 = 0;
				}
			}
		}
		if (fVar21 > 10000f)
		{
			if (does_entity_exist(Local_2977))
			{
				func_57(&Local_2977, 1);
				func_57(&vLocal_2972, 1);
				remove_anim_dict(sLocal_2794);
				func_238(0, -1);
				func_304(&(Local_3078[0 /*7*/]), 0);
				func_304(&(Local_3078[1 /*7*/]), 0);
				if (iLocal_2504)
				{
					func_304(&(iLocal_2809[0]), 0);
					func_304(&(iLocal_2809[1]), 0);
					func_304(&(iLocal_2809[2]), 0);
					func_304(&(iLocal_2809[3]), 0);
					set_all_vehicle_generators_active_in_area(vLocal_2742, vLocal_2745, true, 1);
					iLocal_2504 = 0;
				}
			}
		}
		if (does_entity_exist(Local_3078[0 /*7*/]))
		{
			if (fVar21 > 22500f)
			{
				func_304(&(Local_3078[0 /*7*/]), 0);
				func_304(&(Local_3078[1 /*7*/]), 0);
			}
		}
		if (!is_ped_injured(Local_2967) && is_vehicle_driveable(iLocal_2805, 0))
		{
			if (vdist2(get_entity_coords(Local_2967, 1), get_entity_coords(player_ped_id(), 1)) > 90000f && is_ped_in_vehicle(player_ped_id(), iLocal_2805, 0))
			{
				func_752(9);
			}
			if (vdist2(get_entity_coords(iLocal_2805, 1), get_entity_coords(player_ped_id(), 1)) > 90000f)
			{
				func_752(13);
			}
		}
		if (is_vehicle_driveable(Local_3078[0 /*7*/], 0) && is_vehicle_driveable(Local_3078[1 /*7*/], 0))
		{
			if ((((has_entity_been_damaged_by_weapon(Local_3078[0 /*7*/], 0, 2) && !has_entity_been_damaged_by_weapon(Local_3078[0 /*7*/], joaat("weapon_unarmed"), 0)) || (has_entity_been_damaged_by_weapon(Local_3078[1 /*7*/], 0, 2) && !has_entity_been_damaged_by_weapon(Local_3078[1 /*7*/], joaat("weapon_unarmed"), 0))) || has_entity_been_damaged_by_any_vehicle(Local_3078[0 /*7*/])) || has_entity_been_damaged_by_any_vehicle(Local_3078[1 /*7*/]))
			{
				if (has_entity_been_damaged_by_entity(Local_3078[0 /*7*/], player_ped_id(), 1) || has_entity_been_damaged_by_entity(Local_3078[1 /*7*/], player_ped_id(), 1))
				{
					func_752(12);
				}
			}
		}
	}
	if (iLocal_3166 == 2)
	{
		func_237();
		func_304(&(Local_3078[iLocal_2644 /*7*/]), 1);
		func_304(&(Local_3078[iLocal_2645 /*7*/]), 1);
		func_57(&Local_2977, 1);
		func_57(&vLocal_2972, 1);
		remove_anim_dict(sLocal_2794);
		set_wanted_level_multiplier(1f);
		if (iLocal_2690 != -1)
		{
			remove_navmesh_blocking_object(iLocal_2690);
			iLocal_2690 = -1;
		}
		if (iLocal_2691 != -1)
		{
			remove_navmesh_blocking_object(iLocal_2691);
			iLocal_2691 = -1;
		}
		iVar22 = 0;
		iVar22 = 0;
		while (iVar22 < iLocal_2888)
		{
			func_236(&(iLocal_2888[iVar22]), 0);
			iVar22++;
		}
		settimera(0);
		iLocal_2643 = 0;
		iLocal_3166 = 0;
		iLocal_3165 = 11;
	}
	if (iLocal_3166 == 3)
	{
		if (is_vehicle_driveable(iLocal_2805, 0))
		{
			if (!is_ped_injured(Local_2967))
			{
				if (!is_ped_in_vehicle(Local_2967, iLocal_2805, 0))
				{
					set_ped_into_vehicle(Local_2967, iLocal_2805, false);
				}
			}
			if (!is_ped_in_vehicle(player_ped_id(), iLocal_2805, 0))
			{
				set_ped_into_vehicle(player_ped_id(), iLocal_2805, -1);
			}
			set_entity_coords(iLocal_2805, vLocal_2739, 1, false, 0, 1);
		}
		load_scene(vLocal_2739);
		iLocal_3166 = 1;
	}
}

void func_236(int iParam0, int iParam1)
{
	if (does_entity_exist(*iParam0))
	{
		if (is_entity_attached(*iParam0))
		{
			detach_entity(*iParam0, 1, true);
		}
		if (iParam1)
		{
			delete_object(iParam0);
		}
		else
		{
			set_object_as_no_longer_needed(iParam0);
		}
	}
}

void func_237()
{
	if (does_blip_exist(iLocal_2882))
	{
		remove_blip(&iLocal_2882);
	}
	if (does_blip_exist(Local_2967.f_1))
	{
		remove_blip(&(Local_2967.f_1));
	}
	if (does_blip_exist(Local_2977.f_1))
	{
		remove_blip(&(Local_2977.f_1));
	}
	if (does_blip_exist(vLocal_2972.y))
	{
		remove_blip(&(vLocal_2972.f_1));
	}
	if (does_blip_exist(iLocal_2883))
	{
		remove_blip(&iLocal_2883);
	}
	if (does_blip_exist(iLocal_2884))
	{
		remove_blip(&iLocal_2884);
	}
	remove_blip(&(Local_3078[0 /*7*/].f_1));
	remove_blip(&(Local_3078[1 /*7*/].f_1));
}

void func_238(int iParam0, int iParam1)
{
	int iVar0;
	
	Global_55762 = iParam0;
	iVar0 = 0;
	while (iVar0 < Global_67844)
	{
		if (iParam1 == -1 || Global_67845[iVar0 /*9*/] == iParam1)
		{
			if (Global_67845[iVar0 /*9*/].f_6 != iParam0)
			{
				Global_67845[iVar0 /*9*/].f_6 = iParam0;
				Global_67845[iVar0 /*9*/].f_7 = 1;
				Global_67845[iVar0 /*9*/].f_8 = 0;
			}
		}
		iVar0++;
	}
}

void func_239(int iParam0, char* sParam1, int iParam2)
{
	_play_ambient_speech1(iParam0, sParam1, func_240(iParam2), 1);
}

int func_240(int iParam0)
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

struct<6> func_241()
{
	char[24] cVar0;
	
	StringCopy(&cVar0, "NULL", 24);
	if (Global_15712 == 4)
	{
		return Global_15331;
	}
	return cVar0;
}

bool func_242(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, int iParam5, int iParam6)
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

void func_243()
{
	Global_14578 = 0;
	func_244();
}

void func_244()
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

void func_245(int iParam0)
{
	Global_16723 = iParam0;
}

bool func_246(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!is_ped_injured(iParam0))
	{
		if (is_ped_sitting_in_any_vehicle(iParam0))
		{
			iVar0 = get_vehicle_ped_is_in(iParam0, 0);
			if (is_vehicle_driveable(iVar0, 0))
			{
				if (!is_ped_injured(iParam1))
				{
					if (is_ped_sitting_in_vehicle(iParam1, iVar0))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

void func_247(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (is_bit_set(*iParam0.f_13, 30))
	{
		iParam1 = true;
	}
	func_250(iParam0);
	iVar0 = false;
	while (iVar0 < 3)
	{
		if (does_blip_exist(*iParam0.f_1[iVar0]))
		{
			remove_blip(iParam0.f_1[iVar0]);
		}
		func_249(iVar0, iParam0);
		func_248(iVar0, iParam0);
		iVar0++;
	}
	iVar0 = false;
	while (iVar0 < 31)
	{
		if (iVar0 != 8)
		{
			clear_bit(iParam0.f_13, iVar0);
			clear_bit(iParam0.f_14, iVar0);
		}
		iVar0++;
	}
	if (does_blip_exist(*iParam0))
	{
		remove_blip(iParam0);
	}
	*iParam0.f_6 = 0;
	*iParam0.f_12 = 0;
	*iParam0.f_15 = 0;
	iVar0 = false;
	while (iVar0 < 3)
	{
		if (!is_ped_injured(*iParam0.f_17[iVar0]))
		{
			set_ped_can_play_ambient_anims(*iParam0.f_17[iVar0], 1);
			set_ped_can_play_ambient_base_anims(*iParam0.f_17[iVar0], 1);
			if (iParam2)
			{
				set_ped_config_flag(*iParam0.f_17[iVar0], 32, true);
				set_ped_config_flag(*iParam0.f_17[iVar0], 305, false);
			}
			set_ped_config_flag(*iParam0.f_17[iVar0], 268, false);
			if (iParam1)
			{
				if (is_ped_group_member(*iParam0.f_17[iVar0], func_58()) && *iParam0.f_17[iVar0] != player_ped_id())
				{
					remove_ped_from_group(*iParam0.f_17[iVar0]);
				}
			}
			if (!is_bit_set(*iParam0.f_13, 29))
			{
				set_ped_using_action_mode(*iParam0.f_17[iVar0], false, -1, 0);
			}
			*iParam0.f_17[iVar0] = 0;
		}
		iVar0++;
	}
	if (is_player_playing(player_id()))
	{
		set_ped_can_play_ambient_anims(player_ped_id(), 1);
		set_ped_can_play_ambient_base_anims(player_ped_id(), 1);
	}
	if (is_player_playing(player_id()))
	{
		if (iParam2)
		{
			set_ped_config_flag(player_ped_id(), 32, true);
		}
	}
	*iParam0.f_21 = 0;
}

void func_248(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			clear_bit(iParam1.f_13, 17);
			break;
		
		case 1:
			clear_bit(iParam1.f_13, 18);
			break;
		
		case 2:
			clear_bit(iParam1.f_13, 19);
			break;
	}
}

void func_249(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			clear_bit(uParam1.f_13, 14);
			break;
		
		case 1:
			clear_bit(uParam1.f_13, 15);
			break;
		
		case 2:
			clear_bit(uParam1.f_13, 16);
			break;
	}
}

void func_250(var uParam0)
{
	if (does_blip_exist(*uParam0.f_5))
	{
		remove_blip(uParam0.f_5);
	}
}

bool func_251(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (is_minigame_in_progress())
	{
		return false;
	}
	if (iParam0)
	{
		if (is_entity_dead(player_ped_id(), 0))
		{
			return false;
		}
	}
	iVar0 = false;
	if (is_ped_in_any_vehicle(player_ped_id(), 0))
	{
		if (!is_ped_sitting_in_any_vehicle(player_ped_id()))
		{
			return false;
		}
		iVar0 = get_vehicle_ped_is_in(player_ped_id(), 0);
		if (iParam0)
		{
			if (is_entity_dead(iVar0, 0))
			{
				return false;
			}
		}
		if (iParam2)
		{
			if (!is_entity_dead(iVar0, 0))
			{
				if (get_ped_in_vehicle_seat(iVar0, -1) != player_ped_id())
				{
					return false;
				}
			}
		}
		if (!is_entity_dead(iVar0, 0))
		{
			if (get_entity_upright_value(iVar0) < 0.95f || get_entity_upright_value(iVar0) > 1.011f)
			{
				return false;
			}
		}
	}
	else if (iParam1)
	{
		return false;
	}
	if (!is_player_ready_for_cutscene(player_id()))
	{
		return false;
	}
	if (!can_player_start_mission(player_id()))
	{
		return false;
	}
	return true;
}

int func_252(int iParam0)
{
	if (iParam0)
	{
		return (Global_17118.f_4 && Global_17118.f_104 == 4);
	}
	return Global_17118.f_4;
}

var func_253(char* sParam0, int iParam1, char* sParam2)
{
	_0x853648FD1063A213(sParam0);
	if (iParam1 == 1)
	{
		_add_text_component_item_string(sParam2);
	}
	return _0x8A9BA1AB3E237613();
}

int func_254(int iParam0, vector3 vParam1, vector3 vParam2, int iParam3, int iParam4, int iParam5, char* sParam6, char* sParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	return func_255(iParam0, vParam1, vParam4, iParam7, iParam8, 0, 0, iParam9, sParam10, sParam11, sParam11, sParam11, sParam11, sParam12, sParam13, iParam14, iParam15, iParam16, iParam17);
}

int func_255(int iParam0, vector3 vParam1, vector3 vParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11, char* sParam12, char* sParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18)
{
	return func_256(iParam0, vParam1, vParam4, func_287(), func_287(), iParam7, 5, iParam8, iParam9, iParam10, iParam11, sParam12, sParam13, sParam14, sParam15, sParam16, sParam17, iParam19, iParam20, sParam18, 0, 0, iParam21, iParam22, 0, 0, 0, 1, 1065353216);
}

bool func_256(int iParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3, vector3 vParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, char* sParam11, char* sParam12, char* sParam13, char* sParam14, char* sParam15, char* sParam16, int iParam17, int iParam18, char* sParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, int iParam26, int iParam27, float fParam28)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	vVar3 = {vParam1 + Vector(1f, 0f, 0f)};
	*iParam0.f_17[0] = iParam15;
	*iParam0.f_17[1] = iParam16;
	*iParam0.f_17[2] = iParam17;
	*iParam0.f_16 = iParam15;
	func_286(iParam0);
	func_285(iParam0);
	func_284();
	if (func_268(iParam0, *iParam0.f_17[0], *iParam0.f_17[1], *iParam0.f_17[2], sParam20, sParam21, sParam22, sParam23, *iParam0.f_8, iParam25, iParam18, 0, 0, iParam32, iParam33, iParam34, iParam14, iParam26))
	{
		func_267(sParam20);
		func_267(sParam21);
		func_267(sParam22);
		func_267(sParam23);
		if (is_screen_faded_in())
		{
			iVar1 = false;
			if (is_vehicle_driveable(iParam18, 0))
			{
				if (is_ped_in_vehicle(player_ped_id(), iParam18, 0))
				{
					set_bit(iParam0.f_13, 3);
					if (!is_bit_set(*iParam0.f_13, 9))
					{
						clear_bit(iParam0.f_13, 4);
					}
					if (is_bit_set(*iParam0.f_13, 23))
					{
						clear_bit(iParam0.f_13, 23);
					}
					set_bit(iParam0.f_13, 9);
					iVar1 = true;
				}
			}
			else if (iParam14 == 4 || iParam14 == 5)
			{
				if (func_265(iParam0, iParam29))
				{
					set_bit(iParam0.f_13, 3);
					if (!is_bit_set(*iParam0.f_13, 9))
					{
						clear_bit(iParam0.f_13, 4);
					}
					set_bit(iParam0.f_13, 9);
					iVar1 = true;
				}
			}
			else
			{
				iVar1 = true;
			}
			if (iVar1)
			{
				func_267(sParam24);
				func_267(sParam27);
				func_267("MORE_SEATS");
				if (iParam26 && is_player_wanted_level_greater(player_id(), 0))
				{
					if (does_blip_exist(*iParam0.f_5))
					{
						remove_blip(iParam0.f_5);
						func_267(sParam19);
					}
					if (does_blip_exist(*iParam0))
					{
						remove_blip(iParam0);
					}
					if ((!func_299(iParam0, 1) && !func_264(iParam0)) && !is_bit_set(*iParam0.f_13, false))
					{
						if (iParam30)
						{
							func_262(iParam0, "LOSE_WANTED", 0);
							if (!is_ped_injured(*iParam0.f_17[0]))
							{
								func_239(*iParam0.f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						set_bit(iParam0.f_13, false);
						clear_bit(iParam0.f_13, true);
					}
				}
				else
				{
					if (is_bit_set(*iParam0.f_13, false))
					{
						func_267("LOSE_WANTED");
						clear_bit(iParam0.f_13, false);
						set_bit(iParam0.f_13, true);
					}
					if (is_bit_set(*iParam0.f_13, true))
					{
						if (!func_299(iParam0, 1))
						{
							if (!is_ped_injured(*iParam0.f_17[0]))
							{
								func_239(*iParam0.f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							clear_bit(iParam0.f_13, true);
						}
					}
					if (!does_blip_exist(*iParam0.f_5))
					{
						if (does_blip_exist(*iParam0))
						{
							remove_blip(iParam0);
						}
						*iParam0.f_5 = func_48(vVar3, 0);
						if (!iParam31 == -1)
						{
							set_blip_sprite(*iParam0.f_5, iParam31);
						}
						if (iParam35)
						{
							func_261(*iParam0.f_5, iParam0);
						}
					}
					else if (!func_260(vVar3, get_blip_coords(*iParam0.f_5), 0.1f, 0))
					{
						set_blip_coords(*iParam0.f_5, vVar3);
						if (iParam35)
						{
							func_261(*iParam0.f_5, iParam0);
						}
					}
					if (!func_299(iParam0, 2))
					{
						if (!is_bit_set(*iParam0.f_13, 2))
						{
							func_262(iParam0, sParam19, 0);
							set_bit(iParam0.f_13, 2);
						}
					}
					if (iParam14 == 4 || iParam14 == 5)
					{
						if (is_bit_set(*iParam0.f_13, 13))
						{
							iParam13 = false;
						}
					}
					iVar1 = false;
					iVar6 = false;
					iVar7 = 0;
					if ((iParam14 == 1 || iParam14 == 3) || iParam14 == 5)
					{
						iVar6 = true;
					}
					if (iParam14 == 2 || iParam14 == 3)
					{
						iVar7 = 1;
					}
					else if (iParam14 == 4 || iParam14 == 5)
					{
						iVar7 = 2;
					}
					if (iParam28)
					{
						is_entity_at_coord(player_ped_id(), vParam1, vParam4, iParam13, iVar6, iVar7);
						if (is_entity_in_angled_area(player_ped_id(), vParam7, vParam10, fParam36, 0, iVar6, iVar7))
						{
							iVar1 = true;
						}
					}
					else if (is_entity_at_coord(player_ped_id(), vParam1, vParam4, iParam13, iVar6, iVar7))
					{
						iVar1 = true;
					}
					if (iVar1)
					{
						iVar1 = true;
						iVar2 = 0;
						while (iVar2 < 3)
						{
							if (!is_ped_injured(*iParam0.f_17[iVar2]))
							{
								if (iParam14 == 4 || iParam14 == 5)
								{
									iVar0 = get_vehicle_ped_is_in(player_ped_id(), 0);
									if (!is_ped_in_vehicle(*iParam0.f_17[iVar2], iVar0, 0))
									{
										iVar1 = false;
									}
								}
								else if (iParam18 != 0)
								{
									if (!is_ped_in_vehicle(*iParam0.f_17[iVar2], iParam18, 0))
									{
										iVar1 = false;
									}
								}
								else if (!is_ped_group_member(*iParam0.f_17[iVar2], func_58()) || !func_259(*iParam0.f_17[iVar2], 1))
								{
									iVar1 = false;
								}
							}
							iVar2++;
						}
						if (iVar1)
						{
							if (func_257(iParam0))
							{
								func_267(sParam19);
								func_267(sParam24);
								func_267(sParam20);
								func_267(sParam21);
								func_267(sParam22);
								func_267(sParam23);
								func_267("LOSE_WANTED");
								func_267("MORE_SEATS");
								func_267(sParam27);
								func_247(iParam0, 1, 0);
								return true;
							}
						}
					}
				}
			}
			else if (does_entity_exist(iParam18))
			{
				if ((iParam26 && is_player_wanted_level_greater(player_id(), 0)) && (!is_bit_set(*iParam0.f_13, 9) && !is_bit_set(*iParam0.f_13, 22)))
				{
					func_267(sParam24);
					func_267(sParam27);
					if (does_blip_exist(*iParam0.f_5) || does_blip_exist(*iParam0))
					{
						remove_blip(iParam0.f_5);
						remove_blip(iParam0);
						func_267(sParam19);
					}
					if ((!func_299(iParam0, 1) && !func_264(iParam0)) && !is_bit_set(*iParam0.f_13, false))
					{
						if (iParam30)
						{
							func_262(iParam0, "LOSE_WANTED", 0);
							if (!is_ped_injured(*iParam0.f_17[0]))
							{
								func_239(*iParam0.f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						set_bit(iParam0.f_13, false);
						clear_bit(iParam0.f_13, true);
					}
				}
				else
				{
					if (is_bit_set(*iParam0.f_13, false))
					{
						func_267("LOSE_WANTED");
						clear_bit(iParam0.f_13, false);
						set_bit(iParam0.f_13, true);
					}
					if (is_bit_set(*iParam0.f_13, true))
					{
						if (!func_299(iParam0, 1))
						{
							if (!is_ped_injured(*iParam0.f_17[0]))
							{
								func_239(*iParam0.f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							clear_bit(iParam0.f_13, true);
						}
					}
					if (is_vehicle_driveable(iParam18, 0))
					{
						if (!does_blip_exist(*iParam0))
						{
							if (does_blip_exist(*iParam0.f_5))
							{
								remove_blip(iParam0.f_5);
								func_267(sParam19);
							}
							*iParam0 = func_301(iParam18, 0, 0);
							set_blip_display(*iParam0, 2);
							if (!is_bit_set(*iParam0.f_13, 4))
							{
								func_261(*iParam0, iParam0);
							}
						}
						if (!func_299(iParam0, 2))
						{
							if (!is_bit_set(*iParam0.f_13, 3))
							{
								func_262(iParam0, sParam24, 0);
								set_bit(iParam0.f_13, 3);
								clear_bit(iParam0.f_13, 4);
							}
							else if (is_bit_set(*iParam0.f_13, 9))
							{
								if (!is_string_null(sParam27))
								{
									if (!is_bit_set(*iParam0.f_13, 4))
									{
										func_262(iParam0, sParam27, 0);
										set_bit(iParam0.f_13, 4);
									}
								}
								else if (!is_bit_set(*iParam0.f_13, 4))
								{
									func_262(iParam0, sParam24, 0);
									set_bit(iParam0.f_13, 4);
								}
								if (!is_bit_set(*iParam0.f_13, 23))
								{
									if (!is_ped_injured(*iParam0.f_17[0]))
									{
										func_239(*iParam0.f_17[0], "GET_IN_CAR", 3);
									}
									set_bit(iParam0.f_13, 23);
								}
							}
						}
					}
				}
			}
			else
			{
				if (does_blip_exist(*iParam0.f_5))
				{
					remove_blip(iParam0.f_5);
					func_267(sParam19);
				}
				if (iParam14 == 4 || iParam14 == 5)
				{
					if (iParam29 > 0)
					{
						if (!func_299(iParam0, 2))
						{
							if (is_ped_sitting_in_any_vehicle(player_ped_id()))
							{
								if (!is_bit_set(*iParam0.f_13, 13))
								{
									iVar8 = false;
									iVar9 = 0;
									iVar2 = 0;
									while (iVar2 < 3)
									{
										if (!is_ped_injured(*iParam0.f_17[iVar2]))
										{
											iVar8++;
										}
										iVar2++;
									}
									iVar9 = get_random_int_in_range(0, iVar8);
									if (!is_ped_injured(*iParam0.f_17[iVar9]))
									{
										func_239(*iParam0.f_17[iVar9], "NEED_A_BIGGER_VEHICLE", 3);
									}
									func_262(iParam0, "MORE_SEATS", 0);
									set_bit(iParam0.f_13, 13);
								}
							}
							else if (!is_bit_set(*iParam0.f_13, 3))
							{
								func_262(iParam0, sParam24, 0);
								set_bit(iParam0.f_13, 3);
								clear_bit(iParam0.f_13, 4);
							}
							else if (!is_bit_set(*iParam0.f_13, 4))
							{
								if (is_bit_set(*iParam0.f_13, 9))
								{
									func_262(iParam0, sParam27, 0);
									set_bit(iParam0.f_13, 4);
								}
							}
						}
					}
					else if (!func_299(iParam0, 2))
					{
						if (!is_bit_set(*iParam0.f_13, 3))
						{
							func_262(iParam0, sParam24, 0);
							set_bit(iParam0.f_13, 3);
							clear_bit(iParam0.f_13, 4);
						}
						else if (is_bit_set(*iParam0.f_13, 9))
						{
							if (!is_string_null(sParam27))
							{
								if (!is_bit_set(*iParam0.f_13, 4))
								{
									func_262(iParam0, sParam27, 0);
									set_bit(iParam0.f_13, 4);
								}
							}
							else if (!is_bit_set(*iParam0.f_13, 4))
							{
								func_262(iParam0, sParam24, 0);
								set_bit(iParam0.f_13, 4);
							}
						}
					}
				}
			}
		}
	}
	else
	{
		if (is_bit_set(*iParam0.f_13, false))
		{
			clear_bit(iParam0.f_13, false);
		}
		func_267(sParam19);
		func_267(sParam24);
		func_267(sParam27);
		func_267(sParam24);
		func_267("LOSE_WANTED");
		if (does_blip_exist(*iParam0.f_5))
		{
			remove_blip(iParam0.f_5);
		}
		if (does_blip_exist(*iParam0))
		{
			remove_blip(iParam0);
		}
	}
	clear_bit(iParam0.f_13, 11);
	clear_bit(iParam0.f_13, 12);
	return false;
}

bool func_257(int iParam0)
{
	if (is_bit_set(*iParam0.f_13, 12))
	{
		if (func_258(player_ped_id()))
		{
			if (func_251(1, 0, 1) || is_bit_set(*iParam0.f_13, 7))
			{
				return true;
			}
		}
	}
	else if (func_251(1, 0, 1) || is_bit_set(*iParam0.f_13, 7))
	{
		return true;
	}
	return false;
}

bool func_258(int iParam0)
{
	float fVar0;
	
	if (!is_ped_injured(iParam0))
	{
		fVar0 = get_entity_speed(iParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return true;
		}
	}
	return false;
}

bool func_259(int iParam0, int iParam1)
{
	if (!is_ped_injured(iParam0))
	{
		if (is_ped_sitting_in_any_vehicle(player_ped_id()) && iParam1)
		{
			if (func_246(player_ped_id(), iParam0))
			{
				set_group_separation_range(func_58(), 50f);
				return true;
			}
		}
		else if (is_ped_group_member(iParam0, func_58()))
		{
			set_group_separation_range(func_58(), 50f);
			return true;
		}
	}
	else
	{
		return true;
	}
	return false;
}

bool func_260(vector3 vParam0, vector3 vParam1, float fParam2, int iParam3)
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

void func_261(int iParam0, int iParam1)
{
	if (does_blip_exist(iParam0))
	{
		if (does_blip_exist(*iParam1.f_6))
		{
			set_blip_route(*iParam1.f_6, false);
		}
		_0x3DDA37128DD1ACA8(0);
		_0x67EEDEA1B9BAFD94();
		*iParam1.f_6 = iParam0;
		set_blip_route(iParam0, true);
	}
}

void func_262(int iParam0, char* sParam1, int iParam2)
{
	if (!iParam2)
	{
		if (!is_string_null(sParam1))
		{
			if (!are_strings_equal(sParam1, ""))
			{
				func_263(sParam1, 7500, 1);
			}
		}
	}
	*iParam0.f_10 = get_game_timer();
}

void func_263(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	_set_text_entry_2(sParam0);
	_draw_subtitle_timed(iParam1, 1);
}

bool func_264(int iParam0)
{
	if (!is_ped_injured(*iParam0.f_16))
	{
		if (is_ambient_speech_playing(*iParam0.f_16))
		{
			return true;
		}
	}
	return false;
}

bool func_265(int iParam0, int iParam1)
{
	int iVar0;
	
	if (is_ped_in_any_vehicle(player_ped_id(), 0))
	{
		iVar0 = get_vehicle_ped_is_in(player_ped_id(), 0);
		if (func_266(iVar0, iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

bool func_266(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (is_vehicle_driveable(iParam0, 0))
	{
		iVar0 = 0;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (does_entity_exist(*iParam1.f_17[iVar2]))
			{
				iVar0++;
			}
			iVar2++;
		}
		iVar1 = get_vehicle_max_number_of_passengers(iParam0);
		if (iParam2 > 0)
		{
			if (iVar1 >= iParam2)
			{
				if (iParam2 > 1)
				{
					if (!_0xF7F203E31F96F6A1(iParam0, 1))
					{
						return true;
					}
				}
				else
				{
					return true;
				}
			}
		}
		else if (iVar1 >= iVar0)
		{
			if (iVar0 > 1)
			{
				if (!_0xF7F203E31F96F6A1(iParam0, 1))
				{
					return true;
				}
			}
			else
			{
				return true;
			}
		}
	}
	return false;
}

void func_267(char* sParam0)
{
	if (!is_string_null(sParam0))
	{
		clear_this_print(sParam0);
	}
}

bool func_268(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, char* sParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, var uParam13, var uParam14, var uParam15, int iParam16, int iParam17)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int[] iVar7 = new int[3];
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	var[] uVar15 = new var[3];
	var[] uVar19 = new var[3];
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	vector3 vVar28;
	int iVar31;
	int iVar32;
	
	iVar4 = 0;
	*iParam0.f_17[0] = uParam1;
	*iParam0.f_17[1] = uParam2;
	*iParam0.f_17[2] = uParam3;
	*iParam0.f_16 = uParam1;
	uVar15[0] = uParam4;
	uVar15[1] = uParam5;
	uVar15[2] = uParam6;
	uVar19[0] = uParam13;
	uVar19[1] = uParam14;
	uVar19[2] = uParam15;
	iVar6 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar3 = 0;
	iVar7[0] = 0;
	iVar7[1] = 0;
	iVar7[2] = 0;
	iVar0 = false;
	while (iVar0 < 3)
	{
		if (!is_ped_injured(*iParam0.f_17[iVar0]))
		{
			iVar3++;
		}
		if (is_player_wanted_level_greater(player_id(), 0))
		{
			if (!is_bit_set(*iParam0.f_13, 29) && !is_bit_set(*iParam0.f_13, 28))
			{
				if (!is_ped_injured(*iParam0.f_17[iVar0]))
				{
					set_ped_using_action_mode(*iParam0.f_17[iVar0], true, -1, 0);
				}
				if (iVar0 == 2)
				{
					set_bit(iParam0.f_13, 28);
				}
			}
		}
		else if (!is_bit_set(*iParam0.f_13, 29) && is_bit_set(*iParam0.f_13, 28))
		{
			if (!is_ped_injured(*iParam0.f_17[iVar0]))
			{
				set_ped_using_action_mode(*iParam0.f_17[iVar0], false, -1, 0);
			}
			if (iVar0 == 2)
			{
				clear_bit(iParam0.f_13, 28);
			}
		}
		iVar0++;
	}
	if (iVar3 == 0)
	{
		return true;
	}
	if (is_bit_set(*iParam0.f_13, 26))
	{
		iVar23 = false;
		if (!does_entity_exist(*iParam0.f_21))
		{
			iVar25 = 64;
			iVar25 |= 65536;
			iVar25 |= 2048;
			iVar25 |= 1;
			iVar25 |= 2;
			iVar25 |= 4;
			iVar25 |= 32;
			iVar25 |= 16;
			iVar25 |= 8;
			iVar24 = get_closest_vehicle(get_entity_coords(player_ped_id(), 1), 50f, false, iVar25);
			if (is_vehicle_driveable(iVar24, 0))
			{
				*iParam0.f_21 = iVar24;
			}
		}
		if (is_vehicle_driveable(*iParam0.f_21, 0))
		{
			if (vdist2(get_entity_coords(player_ped_id(), 1), get_entity_coords(*iParam0.f_21, 1)) < 400f)
			{
				if (!is_ped_sitting_in_any_vehicle(player_ped_id()))
				{
					if (!is_player_wanted_level_greater(player_id(), 0) || !iParam17)
					{
						if (func_266(*iParam0.f_21, iParam0, iVar3))
						{
							iVar0 = false;
							while (iVar0 < 3)
							{
								if (!is_ped_injured(*iParam0.f_17[iVar0]))
								{
									set_ped_max_move_blend_ratio(*iParam0.f_17[iVar0], 1f);
									if (is_ped_group_member(*iParam0.f_17[iVar0], func_58()))
									{
										remove_ped_from_group(*iParam0.f_17[iVar0]);
									}
									if (get_script_task_status(*iParam0.f_17[iVar0], -1794415470) == 7 && !func_283(*iParam0.f_17[iVar0], *iParam0.f_21))
									{
										if (!is_ped_ragdoll(*iParam0.f_17[iVar0]) && !is_ped_getting_up(*iParam0.f_17[iVar0]))
										{
											set_blocking_of_non_temporary_events(*iParam0.f_17[iVar0], true);
											task_enter_vehicle(*iParam0.f_17[iVar0], *iParam0.f_21, 60000, iVar0, 1f, 1, 0);
											set_ped_group_member_passenger_index(*iParam0.f_17[iVar0], iVar0);
										}
									}
								}
								iVar0++;
							}
							return true;
						}
						else
						{
							iVar23 = true;
						}
					}
					else
					{
						iVar23 = true;
					}
				}
				else
				{
					iVar23 = true;
				}
			}
			else
			{
				iVar23 = true;
			}
		}
		else
		{
			iVar23 = true;
		}
		if (iVar23)
		{
			clear_bit(iParam0.f_13, 26);
			iVar0 = false;
			while (iVar0 < 3)
			{
				if (!is_ped_injured(*iParam0.f_17[iVar0]))
				{
					if (!is_ped_getting_into_a_vehicle(*iParam0.f_17[iVar0]) && !*iParam0.f_15)
					{
						clear_ped_tasks(*iParam0.f_17[iVar0]);
					}
					if (!is_ped_group_member(*iParam0.f_17[iVar0], func_58()))
					{
						if (func_281(iParam0, *iParam0.f_17[iVar0], fParam8, 1))
						{
							set_ped_as_group_member(*iParam0.f_17[iVar0], func_58());
						}
					}
				}
				iVar0++;
			}
		}
	}
	if (!is_bit_set(*iParam0.f_13, 26))
	{
		if ((!func_280(iParam0) && is_ped_sitting_in_any_vehicle(player_ped_id())) && !does_entity_exist(iParam10))
		{
			iVar13 = get_vehicle_ped_is_in(player_ped_id(), 0);
			if (is_vehicle_driveable(iVar13, 0))
			{
				if (!is_bit_set(*iParam0.f_13, 13))
				{
					if (iParam16 == 4 || iParam16 == 5)
					{
					}
					if (!func_299(iParam0, 2))
					{
						iVar26 = false;
						iVar27 = 0;
						iVar0 = false;
						while (iVar0 < 3)
						{
							if (!is_ped_injured(*iParam0.f_17[iVar0]))
							{
								iVar26++;
							}
							iVar0++;
						}
						iVar27 = get_random_int_in_range(0, iVar26);
						if (!is_ped_injured(*iParam0.f_17[iVar27]))
						{
							func_239(*iParam0.f_17[iVar27], "NEED_A_BIGGER_VEHICLE", 3);
						}
						func_262(iParam0, "MORE_SEATS", 0);
						set_bit(iParam0.f_13, 13);
					}
				}
				iVar12 = true;
			}
		}
		else
		{
			iVar12 = false;
			clear_bit(iParam0.f_13, 13);
			func_267("MORE_SEATS");
		}
		if (!does_entity_exist(iParam10))
		{
			if ((!is_ped_injured(*iParam0.f_17[0]) || !is_ped_injured(*iParam0.f_17[1])) || !is_ped_injured(*iParam0.f_17[2]))
			{
				if (!is_bit_set(*iParam0.f_13, 31))
				{
					if (is_ped_sitting_in_any_vehicle(player_ped_id()) && !func_299(iParam0, 2))
					{
						iVar13 = get_vehicle_ped_is_in(player_ped_id(), 0);
						if (func_279(iVar13, iParam0))
						{
							func_262(iParam0, "CMN_VEHSUIT", 0);
							set_bit(iParam0.f_13, 31);
						}
					}
				}
				else if (!is_ped_sitting_in_any_vehicle(player_ped_id()))
				{
					clear_bit(iParam0.f_13, 31);
					func_267("CMN_VEHSUIT");
				}
			}
		}
		if (is_vehicle_driveable(iParam10, 0))
		{
			if (is_ped_sitting_in_vehicle(player_ped_id(), iParam10))
			{
				if (is_control_just_pressed(0, 75))
				{
					set_bit(iParam0.f_13, 21);
				}
			}
			else if (is_bit_set(*iParam0.f_13, 21))
			{
				clear_bit(iParam0.f_13, 21);
			}
		}
		iVar0 = false;
		while (iVar0 < 3)
		{
			if (does_entity_exist(*iParam0.f_17[iVar0]))
			{
				if (!is_ped_injured(*iParam0.f_17[iVar0]))
				{
					if (!is_ped_group_member(*iParam0.f_17[iVar0], func_58()))
					{
						set_ped_dies_in_water(*iParam0.f_17[iVar0], 1);
					}
					else
					{
						set_ped_dies_in_water(*iParam0.f_17[iVar0], 0);
					}
					if (is_ped_sitting_in_any_vehicle(player_ped_id()))
					{
						iVar13 = get_vehicle_ped_is_in(player_ped_id(), 0);
						if (is_vehicle_driveable(iVar13, 0))
						{
							if (is_ped_group_member(*iParam0.f_17[iVar0], func_58()))
							{
								if (!func_280(iParam0) && is_ped_sitting_in_any_vehicle(player_ped_id()))
								{
									if (!func_278(*iParam0.f_17[iVar0]))
									{
										remove_ped_from_group(*iParam0.f_17[iVar0]);
									}
								}
							}
						}
						if (iVar13 != iParam10 && !is_entity_dead(iVar13, 0))
						{
							if (is_ped_sitting_in_vehicle(*iParam0.f_17[iVar0], iVar13))
							{
								if (is_entity_in_water(iVar13) && !is_vehicle_on_all_wheels(iVar13))
								{
									vVar28 = {get_entity_coords(iVar13, 1)};
									if (vVar28.z < -1f)
									{
										task_leave_vehicle(*iParam0.f_17[iVar0], iVar13, 64);
									}
								}
							}
						}
					}
					iVar11 = true;
					if (!is_ped_group_member(*iParam0.f_17[iVar0], func_58()))
					{
						if (is_ped_sitting_in_any_vehicle(*iParam0.f_17[iVar0]))
						{
							iVar13 = get_vehicle_ped_is_in(*iParam0.f_17[iVar0], 0);
							if (!is_entity_dead(iVar13, 0))
							{
								if (is_vehicle_driveable(iParam10, 0))
								{
									if (iVar13 != iParam10)
									{
										if (!is_ped_sitting_in_vehicle(player_ped_id(), iVar13))
										{
											if (get_entity_speed(iVar13) > 5f)
											{
												task_leave_vehicle(*iParam0.f_17[iVar0], iVar13, 4160);
											}
											else
											{
												task_leave_vehicle(*iParam0.f_17[iVar0], iVar13, 64);
											}
											iVar11 = false;
										}
									}
								}
								else
								{
									if (is_ped_sitting_in_any_vehicle(player_ped_id()))
									{
										iVar31 = get_vehicle_ped_is_in(player_ped_id(), 0);
									}
									if (is_vehicle_driveable(iVar31, 0))
									{
										if (iVar13 != iVar31)
										{
											if (get_entity_speed(iVar13) > 5f)
											{
												task_leave_vehicle(*iParam0.f_17[iVar0], iVar13, 4160);
											}
											else
											{
												task_leave_vehicle(*iParam0.f_17[iVar0], iVar13, 64);
											}
											iVar11 = false;
										}
									}
								}
							}
						}
					}
					if (is_ped_group_member(*iParam0.f_17[iVar0], func_58()))
					{
						iVar32 = get_vehicle_ped_is_using(player_ped_id());
						if (does_entity_exist(iVar32))
						{
							if (func_266(iVar32, iParam0, 0))
							{
								if (func_277(iVar0, iParam0) || !is_bit_set(*iParam0.f_13, 27))
								{
									set_ped_group_member_passenger_index(*iParam0.f_17[iVar0], iVar0);
									func_248(iVar0, iParam0);
									iVar4++;
									if (iVar4 >= iVar3)
									{
										set_bit(iParam0.f_13, 27);
									}
								}
							}
							else if (!func_277(iVar0, iParam0))
							{
								if (get_entity_model(iVar32) == joaat("sentinel2"))
								{
									set_ped_group_member_passenger_index(*iParam0.f_17[iVar0], 4);
								}
								else
								{
									set_ped_group_member_passenger_index(*iParam0.f_17[iVar0], 2);
								}
								func_276(iVar0, iParam0);
							}
						}
					}
					if ((!is_ped_group_member(*iParam0.f_17[iVar0], func_58()) && !func_275(*iParam0.f_17[iVar0], iParam10)) && !func_274(*iParam0.f_17[iVar0], iParam10))
					{
						if (func_281(iParam0, *iParam0.f_17[iVar0], fParam8, iParam11))
						{
							if (!is_ped_group_member(*iParam0.f_17[iVar0], func_58()))
							{
								if (((!is_ped_ragdoll(*iParam0.f_17[iVar0]) && !is_ped_getting_up(*iParam0.f_17[iVar0])) && !is_ped_jumping_out_of_vehicle(*iParam0.f_17[iVar0])) && !is_ped_getting_into_a_vehicle(*iParam0.f_17[iVar0]))
								{
									iVar14 = get_script_task_status(*iParam0.f_17[iVar0], -1794415470);
									if (iVar14 == 7)
									{
										clear_ped_tasks(*iParam0.f_17[iVar0]);
									}
									set_ped_as_group_member(*iParam0.f_17[iVar0], func_58());
									iVar11 = false;
								}
							}
						}
						if (iVar11)
						{
							if (!does_blip_exist(*iParam0.f_1[iVar0]))
							{
								*iParam0.f_11 = get_game_timer();
								*iParam0.f_1[iVar0] = func_301(*iParam0.f_17[iVar0], 0, 0);
								set_blip_display(*iParam0.f_1[iVar0], 2);
								if (iParam9)
								{
									func_261(*iParam0.f_1[iVar0], iParam0);
								}
							}
						}
						iVar6 = 0;
					}
					else if (does_blip_exist(*iParam0.f_1[iVar0]))
					{
						if (((func_259(*iParam0.f_17[iVar0], 1) || func_275(*iParam0.f_17[iVar0], iParam10)) || iParam12) || (is_vehicle_driveable(iParam10, 0) && !is_ped_in_vehicle(player_ped_id(), iParam10, 0)))
						{
							if (does_blip_exist(*iParam0.f_1[iVar0]))
							{
								remove_blip(iParam0.f_1[iVar0]);
								func_267(uVar15[iVar0]);
							}
						}
						else
						{
							if (iParam9)
							{
								func_261(*iParam0.f_1[iVar0], iParam0);
							}
							iVar6 = 0;
						}
					}
					else if (is_vehicle_driveable(iParam10, 0))
					{
						if (!is_ped_sitting_in_vehicle(*iParam0.f_17[iVar0], iParam10))
						{
							if ((is_entity_at_entity(*iParam0.f_17[iVar0], iParam10, 20f, 20f, 5f, 0, 1, 0) && !is_bit_set(*iParam0.f_13, 11)) && !((iParam17 && is_player_wanted_level_greater(player_id(), 0)) && !is_ped_in_vehicle(player_ped_id(), iParam10, 0)))
							{
								if (is_ped_sitting_in_any_vehicle(*iParam0.f_17[iVar0]))
								{
									if (!is_ped_in_vehicle(*iParam0.f_17[iVar0], iParam10, 0))
									{
										if (!func_259(*iParam0.f_17[iVar0], 1))
										{
											if (func_258(*iParam0.f_17[iVar0]))
											{
												iVar14 = get_script_task_status(*iParam0.f_17[iVar0], 451360105);
												if (iVar14 == 7)
												{
													task_leave_any_vehicle(*iParam0.f_17[iVar0], 0, 0);
												}
											}
										}
									}
								}
								else
								{
									if (is_ped_group_member(*iParam0.f_17[iVar0], func_58()))
									{
										if ((((!is_ped_jumping_out_of_vehicle(*iParam0.f_17[iVar0]) && !is_ped_ragdoll(*iParam0.f_17[iVar0])) && !is_ped_getting_up(*iParam0.f_17[iVar0])) && !is_ped_getting_into_a_vehicle(*iParam0.f_17[iVar0])) && !is_entity_on_fire(iParam10))
										{
											remove_ped_from_group(*iParam0.f_17[iVar0]);
										}
									}
									iVar14 = get_script_task_status(*iParam0.f_17[iVar0], -1794415470);
									if (iVar14 == 7 && !func_283(*iParam0.f_17[iVar0], iParam10))
									{
										if (((((!is_ped_jumping_out_of_vehicle(*iParam0.f_17[iVar0]) && !is_ped_jumping_out_of_vehicle(player_ped_id())) && !func_273(*iParam0.f_17[iVar0], 2f)) && !is_ped_ragdoll(*iParam0.f_17[iVar0])) && !is_ped_getting_up(*iParam0.f_17[iVar0])) && !is_entity_on_fire(iParam10))
										{
											set_blocking_of_non_temporary_events(*iParam0.f_17[iVar0], true);
											if (is_bit_set(*iParam0.f_13, 10))
											{
												set_ped_max_move_blend_ratio(*iParam0.f_17[iVar0], 1f);
											}
											task_enter_vehicle(*iParam0.f_17[iVar0], iParam10, 60000, iVar0, 2f, 1, 0);
											set_ped_get_out_upside_down_vehicle(*iParam0.f_17[iVar0], 0);
										}
									}
									else if (is_ped_in_vehicle(player_ped_id(), iParam10, 0))
									{
										*iParam0.f_1[iVar0] = func_301(*iParam0.f_17[iVar0], 0, 0);
										set_blip_display(*iParam0.f_1[iVar0], 2);
										iVar6 = 0;
									}
								}
							}
							else if (!is_ped_group_member(*iParam0.f_17[iVar0], func_58()))
							{
								if (func_281(iParam0, *iParam0.f_17[iVar0], fParam8, iParam11))
								{
									if (!is_ped_ragdoll(*iParam0.f_17[iVar0]) && !is_ped_getting_up(*iParam0.f_17[iVar0]))
									{
										iVar14 = get_script_task_status(*iParam0.f_17[iVar0], -1794415470);
										if (iVar14 == 7)
										{
											clear_ped_tasks(*iParam0.f_17[iVar0]);
										}
										set_blocking_of_non_temporary_events(*iParam0.f_17[iVar0], false);
										set_ped_as_group_member(*iParam0.f_17[iVar0], func_58());
									}
								}
							}
						}
						else if (is_ped_sitting_in_vehicle(player_ped_id(), iParam10))
						{
							if (!is_ped_group_member(*iParam0.f_17[iVar0], func_58()))
							{
								if (!is_bit_set(*iParam0.f_13, 21))
								{
									set_ped_as_group_member(*iParam0.f_17[iVar0], func_58());
								}
							}
							else if (is_bit_set(*iParam0.f_13, 21))
							{
								remove_ped_from_group(*iParam0.f_17[iVar0]);
								set_bit(iParam0.f_13, 21);
							}
						}
						else if (is_ped_group_member(*iParam0.f_17[iVar0], func_58()) && !is_entity_on_fire(iParam10))
						{
							remove_ped_from_group(*iParam0.f_17[iVar0]);
						}
					}
				}
				else if (does_blip_exist(*iParam0.f_1[iVar0]))
				{
					remove_blip(iParam0.f_1[iVar0]);
					func_267(uVar15[iVar0]);
				}
			}
			iVar0++;
		}
		iVar0 = false;
		while (iVar0 < 3)
		{
			if (does_blip_exist(*iParam0.f_1[iVar0]))
			{
				iVar7[iVar0] = 1;
				iVar1++;
			}
			iVar0++;
		}
		if (!func_299(iParam0, 2))
		{
			if (iVar1 > 0)
			{
				iVar0 = false;
				while (iVar0 < 3)
				{
					if (iVar7[iVar0])
					{
						if (!is_ped_injured(*iParam0.f_17[iVar0]))
						{
							if (func_278(*iParam0.f_17[iVar0]) || is_entity_at_entity(*iParam0.f_17[iVar0], player_ped_id(), *iParam0.f_8, *iParam0.f_8, *iParam0.f_8, 0, 1, 0))
							{
								iVar1--;
								iVar7[iVar0] = 0;
							}
						}
					}
					else if (!is_ped_injured(*iParam0.f_17[iVar0]))
					{
						if (!is_entity_at_entity(*iParam0.f_17[iVar0], player_ped_id(), *iParam0.f_8 * 0.85f, *iParam0.f_8 * 0.85f, *iParam0.f_8, 0, 1, 0) && !func_278(*iParam0.f_17[iVar0]))
						{
						}
					}
					iVar0++;
				}
			}
			iVar5 = get_game_timer();
			if (iVar5 - *iParam0.f_11 > 1500 || iVar3 == 1)
			{
				if (iVar1 > 0)
				{
					if (*iParam0.f_12 < iVar1)
					{
						if ((iVar1 == iVar3 || iVar2 + iVar1 == iVar3) && iVar3 > 1)
						{
							if (!is_bit_set(*iParam0.f_13, 5))
							{
								func_262(iParam0, sParam7, 0);
								set_bit(iParam0.f_13, 5);
								*iParam0.f_12 = iVar1;
							}
							else
							{
								*iParam0.f_12 = iVar1;
							}
						}
						else
						{
							iVar0 = false;
							while (iVar0 < 3)
							{
								if (iVar7[iVar0])
								{
									if (!func_272(iVar0, iParam0))
									{
										if (!is_string_null(uVar19[iVar0]))
										{
											if (!are_strings_equal(uVar19[iVar0], ""))
											{
												func_270(iParam0, uVar15[iVar0], uVar19[iVar0], 0);
												func_269(iVar0, iParam0);
												*iParam0.f_12 = iVar1;
											}
										}
										if (!func_272(iVar0, iParam0))
										{
											func_262(iParam0, uVar15[iVar0], 0);
											func_269(iVar0, iParam0);
											*iParam0.f_12 = iVar1;
										}
									}
									else
									{
										*iParam0.f_12 = iVar1;
									}
								}
								iVar0++;
							}
						}
					}
				}
				else
				{
					*iParam0.f_12 = 0;
				}
			}
		}
		clear_bit(iParam0.f_13, 10);
		if (iVar6 && !iVar12)
		{
			iVar0 = false;
			while (iVar0 < 3)
			{
				if (does_blip_exist(*iParam0.f_1[iVar0]))
				{
					remove_blip(iParam0.f_1[iVar0]);
					func_267(uVar15[iVar0]);
				}
				iVar0++;
			}
			func_267("MORE_SEATS");
			return true;
		}
	}
	return false;
}

void func_269(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			set_bit(iParam1.f_13, 14);
			break;
		
		case 1:
			set_bit(iParam1.f_13, 15);
			break;
		
		case 2:
			set_bit(iParam1.f_13, 16);
			break;
	}
}

void func_270(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (!iParam3)
	{
		if (!is_string_null(sParam1))
		{
			if (!are_strings_equal(sParam1, ""))
			{
				func_271(sParam1, sParam2, 7500, 1);
			}
		}
	}
	*iParam0.f_10 = get_game_timer();
}

void func_271(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	_set_text_entry_2(sParam0);
	_add_text_component_item_string(sParam1);
	_draw_subtitle_timed(iParam2, 1);
}

int func_272(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return is_bit_set(*iParam1.f_13, 14);
		
		case 1:
			return is_bit_set(*iParam1.f_13, 15);
		
		case 2:
			return is_bit_set(*iParam1.f_13, 16);
		
		default:
	}
	return false;
}

bool func_273(int iParam0, float fParam1)
{
	int iVar0;
	
	if (is_ped_in_any_vehicle(iParam0, 0))
	{
		iVar0 = get_vehicle_ped_is_in(iParam0, 0);
		if (!is_entity_dead(iVar0, 0))
		{
			if (get_entity_speed(iVar0) > fParam1)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_274(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!is_ped_injured(iParam0))
	{
		if (!is_ped_group_member(iParam0, func_58()))
		{
			iVar0 = set_exclusive_phone_relationships(iParam0);
			if (is_vehicle_driveable(iParam1, 0))
			{
				if (is_entity_at_entity(iParam0, iParam1, 20f + 10f, 20f + 10f, 10f, 0, 1, 0))
				{
					if (iVar0 == iParam1)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_275(int iParam0, int iParam1)
{
	if (!is_ped_injured(iParam0))
	{
		if (does_entity_exist(iParam1))
		{
			if (is_vehicle_driveable(iParam1, 0))
			{
				if (is_ped_sitting_in_vehicle(iParam0, iParam1))
				{
					return true;
				}
			}
		}
	}
	return false;
}

void func_276(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			set_bit(iParam1.f_13, 17);
			break;
		
		case 1:
			set_bit(iParam1.f_13, 18);
			break;
		
		case 2:
			set_bit(iParam1.f_13, 19);
			break;
	}
}

int func_277(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return is_bit_set(*iParam1.f_13, 17);
		
		case 1:
			return is_bit_set(*iParam1.f_13, 18);
		
		case 2:
			return is_bit_set(*iParam1.f_13, 19);
		
		default:
	}
	return false;
}

bool func_278(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (is_player_playing(player_id()))
	{
		iVar0 = get_vehicle_ped_is_using(player_ped_id());
		if (is_vehicle_driveable(iVar0, 0))
		{
			if (!is_ped_injured(iParam0))
			{
				iVar1 = get_vehicle_ped_is_using(iParam0);
				if (is_vehicle_driveable(iVar1, 0))
				{
					if (iVar0 == iVar1)
					{
						if (is_entity_at_entity(player_ped_id(), iParam0, 20f, 20f, 20f, 0, 1, 0) && is_entity_at_entity(iParam0, iVar1, 20f, 20f, 20f, 0, 1, 0))
						{
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_279(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (is_vehicle_driveable(iParam0, 0))
	{
		if (get_entity_model(iParam0) == joaat("bus") || get_entity_model(iParam0) == joaat("coach"))
		{
			iVar0 = 0;
			iVar1 = 0;
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < 3)
			{
				if (!is_ped_injured(*iParam1.f_17[iVar2]))
				{
					iVar0++;
				}
				iVar2++;
			}
			iVar3 = get_ped_in_vehicle_seat(iParam0, false);
			if (!is_ped_injured(iVar3))
			{
				if ((iVar3 == *iParam1.f_17[0] || iVar3 == *iParam1.f_17[1]) || iVar3 == *iParam1.f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			iVar4 = get_ped_in_vehicle_seat(iParam0, true);
			if (!is_ped_injured(iVar4))
			{
				if ((iVar4 == *iParam1.f_17[0] || iVar4 == *iParam1.f_17[1]) || iVar4 == *iParam1.f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			iVar5 = get_ped_in_vehicle_seat(iParam0, 2);
			if (!is_ped_injured(iVar5))
			{
				if ((iVar5 == *iParam1.f_17[0] || iVar5 == *iParam1.f_17[1]) || iVar5 == *iParam1.f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			if (iVar1 < iVar0)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_280(int iParam0)
{
	int iVar0;
	
	if (is_ped_sitting_in_any_vehicle(player_ped_id()))
	{
		iVar0 = get_vehicle_ped_is_in(player_ped_id(), 0);
		if (func_266(iVar0, iParam0, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_281(int iParam0, int iParam1, float fParam2, int iParam3)
{
	int iVar0;
	
	if (!is_ped_injured(iParam1))
	{
		if (is_ped_sitting_in_any_vehicle(iParam1))
		{
			iVar0 = get_vehicle_ped_is_in(iParam1, 0);
			if (!is_entity_dead(iVar0, 0))
			{
				if (is_vehicle_driveable(iVar0, 0))
				{
					if (is_ped_sitting_in_vehicle(player_ped_id(), iVar0))
					{
						if (func_280(iParam0))
						{
							return true;
						}
					}
					else if (iParam3)
					{
						return true;
					}
				}
				else if (is_entity_at_entity(player_ped_id(), iParam1, fParam2, fParam2, 3f, 0, 1, 0))
				{
					return true;
				}
			}
		}
		else if (is_entity_at_entity(player_ped_id(), iParam1, fParam2, fParam2, 3f, 0, 1, 0))
		{
			if (!iParam3)
			{
				iVar0 = get_vehicle_ped_is_using(player_ped_id());
				if (does_entity_exist(iVar0))
				{
					if (func_266(iVar0, iParam0, 0))
					{
						if (is_vehicle_driveable(iVar0, 0))
						{
							if (func_282(iVar0))
							{
								return true;
							}
						}
					}
				}
				else
				{
					return true;
				}
			}
			else
			{
				return true;
			}
		}
	}
	return false;
}

bool func_282(int iParam0)
{
	float fVar0;
	
	if (!is_entity_dead(iParam0, 0))
	{
		fVar0 = get_entity_speed(iParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return true;
		}
	}
	return false;
}

bool func_283(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!is_ped_injured(iParam0))
	{
		if (is_vehicle_driveable(iParam1, 0))
		{
			iVar0 = get_vehicle_ped_is_using(iParam0);
			if (iVar0 == iParam1)
			{
				return true;
			}
		}
	}
	return false;
}

void func_284()
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

void func_285(var uParam0)
{
	int iVar0;
	
	if (!is_bit_set(*uParam0.f_13, 25))
	{
		if (is_player_playing(player_id()))
		{
			set_ped_config_flag(player_ped_id(), 32, false);
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (does_entity_exist(*uParam0.f_17[iVar0]))
			{
				if (!is_ped_injured(*uParam0.f_17[iVar0]))
				{
					set_ped_config_flag(*uParam0.f_17[iVar0], 32, false);
					set_ped_config_flag(*uParam0.f_17[iVar0], 305, true);
					set_ped_config_flag(*uParam0.f_17[iVar0], 268, true);
					set_ped_get_out_upside_down_vehicle(*uParam0.f_17[iVar0], 0);
				}
			}
			iVar0++;
		}
		set_bit(uParam0.f_13, 25);
	}
}

void func_286(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (does_entity_exist(*uParam0.f_17[iVar0]))
		{
			if (!is_ped_injured(*uParam0.f_17[iVar0]))
			{
				if (is_ped_sitting_in_any_vehicle(*uParam0.f_17[iVar0]))
				{
					set_ped_can_play_ambient_anims(*uParam0.f_17[iVar0], 0);
					set_ped_can_play_ambient_base_anims(*uParam0.f_17[iVar0], 0);
				}
			}
		}
		iVar0++;
	}
	if (is_player_playing(player_id()))
	{
		if (!is_ped_injured(player_ped_id()))
		{
			if (is_ped_sitting_in_any_vehicle(player_ped_id()))
			{
				set_ped_can_play_ambient_anims(player_ped_id(), 0);
				set_ped_can_play_ambient_base_anims(player_ped_id(), 0);
			}
		}
	}
}

Vector3 func_287()
{
	vector3 vVar0;
	
	return vVar0;
}

int func_288(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_297(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_289(sParam2, iParam4, 0);
}

bool func_289(char* sParam0, int iParam1, int iParam2)
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
					func_296();
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
		if (func_295(8, -1))
		{
			return false;
		}
		Global_15788 = {Global_15782};
		func_294();
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
				func_293();
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
				if (func_292())
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
			if (func_67())
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
			func_291();
			Global_15722 = iParam2;
		}
		Global_15714 = iParam1;
		StringCopy(&Global_15331, sParam0, 24);
		Global_14578 = 0;
		func_290();
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
		func_296();
	}
	return false;
}

void func_290()
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

void func_291()
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

bool func_292()
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

void func_293()
{
	if (func_29(14))
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
		Global_14413 = func_75();
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

void func_294()
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

int func_295(int iParam0, int iParam1)
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

void func_296()
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

void func_297(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_298(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_297(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_289(sParam2, iParam3, 0);
}

bool func_299(int iParam0, int iParam1)
{
	if (iParam1 != 1 || is_subtitle_preference_switched_on())
	{
		if (is_message_being_displayed())
		{
			return true;
		}
		if (func_300(iParam0))
		{
			return true;
		}
	}
	if (iParam1 != 2 || is_subtitle_preference_switched_on())
	{
		if (func_98() && !func_97())
		{
			return true;
		}
	}
	return false;
}

bool func_300(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = get_game_timer();
	iVar0 = iVar1 - *uParam0.f_10;
	if (iVar0 < 35)
	{
		return true;
	}
	return false;
}

int func_301(int iParam0, int iParam1, int iParam2)
{
	return func_302(iParam0, !iParam1, iParam2);
}

int func_302(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	iVar0 = add_blip_for_entity(iParam0);
	if (is_entity_a_vehicle(iParam0))
	{
		set_blip_scale(iVar0, func_49(network_is_game_in_progress(), 1f, 1f));
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
		set_blip_scale(iVar0, func_49(network_is_game_in_progress(), 0.7f, 0.7f));
		set_blip_as_friendly(iVar0, iParam1);
	}
	else if (is_entity_an_object(iParam0))
	{
		set_blip_scale(iVar0, func_49(network_is_game_in_progress(), 0.7f, 0.7f));
	}
	return iVar0;
}

void func_303()
{
	int iVar0;
	int iVar1;
	
	iVar0 = iLocal_2547;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		iLocal_2547[iVar1] = 0;
		iVar1++;
	}
}

void func_304(int iParam0, int iParam1)
{
	if (does_entity_exist(*iParam0))
	{
		if (!is_entity_dead(*iParam0, 0))
		{
			stop_synchronized_entity_anim(*iParam0, -8f, 1);
			if (is_entity_attached(*iParam0))
			{
				detach_entity(*iParam0, 1, true);
			}
		}
		if (iParam1)
		{
			delete_vehicle(iParam0);
		}
		else
		{
			set_vehicle_as_no_longer_needed(iParam0);
		}
	}
}

void func_305(int iParam0)
{
	set_all_vehicle_generators_active_in_area(-44.9779f, -1093.988f, 19.4526f, -30.0332f, -1074.433f, 39.4526f, !iParam0, 1);
	set_all_vehicle_generators_active_in_area(-20.801f, -1084.057f, 20.8603f, -3.4886f, -1050.998f, 31.8603f, !iParam0, 1);
	if (iParam0)
	{
		clear_area_of_vehicles(-37f, -1087f, 26f, 5f, 0, 0, 0, 0, false);
	}
}

void func_306()
{
	if (iLocal_2940 == 0)
	{
		iLocal_2940 = add_scenario_blocking_area(-49.41105f, -1078.832f, 20.47327f, -44.08052f, -1071.936f, 39.47327f, 0, 1, 1, 1);
	}
	if (iLocal_2941 == 0)
	{
		iLocal_2941 = add_scenario_blocking_area(-54.5514f, -1111.473f, 22.2924f, -39.9018f, -1104.013f, 39.7759f, 0, 1, 1, 1);
	}
}

float func_307(float fParam0)
{
	return fParam0 * 0.01745329f;
}

void func_308()
{
	if (is_vehicle_driveable(Local_3078[0 /*7*/], 0) && is_vehicle_driveable(Local_3078[1 /*7*/], 0))
	{
		lower_convertible_roof(Local_3078[0 /*7*/], 1);
		lower_convertible_roof(Local_3078[1 /*7*/], 1);
	}
}

void func_309()
{
	if (is_vehicle_driveable(Local_3078[iLocal_2645 /*7*/], 0))
	{
		set_entity_heading(Local_3078[iLocal_2645 /*7*/], fLocal_2642);
		set_entity_coords(Local_3078[iLocal_2645 /*7*/], vLocal_2778, 1, false, 0, 1);
		freeze_entity_position(Local_3078[iLocal_2645 /*7*/], true);
		set_vehicle_is_considered_by_player(Local_3078[iLocal_2645 /*7*/], 0);
	}
}

bool func_310(vector3 vParam0, Vector3 fParam1, int iParam2)
{
	if (!does_entity_exist(vLocal_2972.x))
	{
		func_312(18);
		if (func_311(18))
		{
			if (!iParam4)
			{
				if (func_231(&vLocal_2972, 18, vParam0, fParam3, 1))
				{
					set_ped_component_variation(vLocal_2972.x, 3, 1, 0, 0);
					set_ped_can_be_targetted(vLocal_2972.x, false);
					set_ped_relationship_group_hash(vLocal_2972.x, 1862763509);
				}
			}
			return true;
		}
	}
	else
	{
		return true;
	}
	return false;
}

int func_311(int iParam0)
{
	if (!func_10(iParam0))
	{
		return has_model_loaded(func_233(iParam0));
	}
	else if (iParam0 != 145)
	{
	}
	return false;
}

void func_312(int iParam0)
{
	if (!func_10(iParam0))
	{
		request_model(func_233(iParam0));
	}
	else if (iParam0 != 145)
	{
	}
}

bool func_313(vector3 vParam0, Vector3 fParam1, int iParam2)
{
	if (!does_entity_exist(Local_2977))
	{
		func_312(14);
		if (func_311(14))
		{
			if (!iParam4)
			{
				if (func_231(&Local_2977, 14, vParam0, fParam3, 1))
				{
					set_ped_component_variation(Local_2977, 3, 4, 0, 0);
					set_ped_component_variation(Local_2977, true, 1, 0, 0);
					set_ped_component_variation(Local_2977, 2, 2, 0, 0);
					set_ped_component_variation(Local_2977, 4, 0, 1, 0);
					set_ped_component_variation(Local_2977, 6, 0, 1, 0);
					set_ped_component_variation(Local_2977, 8, 3, 0, 0);
					set_ped_component_variation(Local_2977, 10, 2, 0, 0);
					set_ped_can_be_targetted(Local_2977, false);
					set_ped_relationship_group_hash(Local_2977, 1862763509);
				}
			}
			return true;
		}
	}
	else
	{
		return true;
	}
	return false;
}

bool func_314(vector3 vParam0, Vector3 fParam1)
{
	if (!does_entity_exist(Local_3078[1 /*7*/]))
	{
		request_model(iLocal_2945);
		if (has_model_loaded(iLocal_2945))
		{
			Local_3078[1 /*7*/] = create_vehicle(iLocal_2945, vParam0, fParam3, 1, 1);
			set_vehicle_on_ground_properly(Local_3078[1 /*7*/]);
			set_vehicle_dirt_level(Local_3078[1 /*7*/], 0f);
			set_vehicle_colours(Local_3078[1 /*7*/], 28, 28);
			set_vehicle_extra_colours(Local_3078[1 /*7*/], 23, 0);
			set_vehicle_strong(Local_3078[1 /*7*/], true);
			set_vehicle_has_strong_axles(Local_3078[1 /*7*/], true);
			set_vehicle_tyres_can_burst(Local_3078[1 /*7*/], false);
			set_entity_health(Local_3078[1 /*7*/], 2000);
			set_vehicle_automatically_attaches(Local_3078[1 /*7*/], false, 0);
			set_vehicle_number_plate_text(Local_3078[1 /*7*/], "2603AM56");
			_0x51BB2D88D31A914B(Local_3078[1 /*7*/], false);
			_0x192547247864DFDD(Local_3078[1 /*7*/], false);
			_0xE12ABE5E3A389A6C(Local_3078[1 /*7*/], 0);
			_0xA80AE305E0A3044F(Local_3078[1 /*7*/], 0);
			_0xDFFCEF48E511DB48(Local_3078[1 /*7*/], 1);
			set_model_as_no_longer_needed(iLocal_2945);
			return true;
		}
	}
	else
	{
		return true;
	}
	return false;
}

bool func_315(vector3 vParam0, Vector3 fParam1)
{
	if (!does_entity_exist(Local_3078[0 /*7*/]))
	{
		request_model(iLocal_2944);
		if (has_model_loaded(iLocal_2944))
		{
			Local_3078[0 /*7*/] = create_vehicle(iLocal_2944, vParam0, fParam3, 1, 1);
			set_vehicle_on_ground_properly(Local_3078[0 /*7*/]);
			set_vehicle_dirt_level(Local_3078[0 /*7*/], 0f);
			set_vehicle_colours(Local_3078[0 /*7*/], 111, 111);
			set_vehicle_extra_colours(Local_3078[0 /*7*/], 111, 0);
			set_entity_health(Local_3078[0 /*7*/], 2000);
			set_vehicle_strong(Local_3078[0 /*7*/], true);
			set_vehicle_has_strong_axles(Local_3078[0 /*7*/], true);
			set_vehicle_tyres_can_burst(Local_3078[0 /*7*/], false);
			set_vehicle_automatically_attaches(Local_3078[0 /*7*/], false, 0);
			set_vehicle_number_plate_text(Local_3078[0 /*7*/], "5912FL34");
			_0x51BB2D88D31A914B(Local_3078[0 /*7*/], false);
			_0x192547247864DFDD(Local_3078[0 /*7*/], false);
			_0xE12ABE5E3A389A6C(Local_3078[0 /*7*/], 0);
			_0xA80AE305E0A3044F(Local_3078[0 /*7*/], 0);
			_0xDFFCEF48E511DB48(Local_3078[0 /*7*/], 1);
			set_model_as_no_longer_needed(iLocal_2944);
			return true;
		}
	}
	else
	{
		return true;
	}
	return false;
}

bool func_316(int iParam0)
{
	vector3 vVar0;
	int iVar3;
	
	if (!iLocal_2504)
	{
		vVar0 = {vLocal_2742 + Vector(vLocal_2745.z - vLocal_2745.z, vLocal_2745.y - vLocal_2745.y, vLocal_2745.x - vLocal_2742.x)};
		clear_area_of_vehicles(vVar0, 30f, 0, 0, 0, 0, false);
		set_all_vehicle_generators_active_in_area(vLocal_2742, vLocal_2745, false, 1);
		iLocal_2504 = 1;
	}
	request_model(joaat("bjxl"));
	request_model(joaat("ninef"));
	if (has_model_loaded(joaat("bjxl")) && has_model_loaded(joaat("ninef")))
	{
		if (!iParam0)
		{
			if (!does_entity_exist(iLocal_2809[0]))
			{
				iLocal_2809[0] = create_vehicle(joaat("ninef"), -49.9f, -1094.7f, 26.1366f, 96.8607f, 1, 1);
				set_vehicle_colours(iLocal_2809[0], 31, 0);
				set_vehicle_extra_colours(iLocal_2809[0], 42, 0);
				_0x3910051CCECDB00C(iLocal_2809[0], true);
				iLocal_2809[1] = create_vehicle(joaat("bjxl"), -46.5f, -1097.5f, 26.35f, 108.8107f, 1, 1);
				set_vehicle_colours(iLocal_2809[1], 126, 126);
				set_vehicle_extra_colours(iLocal_2809[1], 126, 0);
				set_vehicle_number_plate_text(iLocal_2809[1], "57EIG117");
				_0x3910051CCECDB00C(iLocal_2809[1], true);
				iLocal_2809[2] = create_vehicle(joaat("ninef"), -41.7f, -1099.5f, 26.0304f, 137.6117f, 1, 1);
				set_vehicle_colours(iLocal_2809[2], 1, 1);
				set_vehicle_extra_colours(iLocal_2809[2], 15, 0);
				_0x3910051CCECDB00C(iLocal_2809[2], true);
				iLocal_2809[3] = create_vehicle(joaat("bjxl"), -36.8f, -1101.2f, 26.0912f, 151.7322f, 1, 1);
				set_vehicle_colours(iLocal_2809[3], 1, 111);
				set_vehicle_extra_colours(iLocal_2809[3], 4, 0);
				_0x3910051CCECDB00C(iLocal_2809[3], true);
			}
			set_model_as_no_longer_needed(joaat("bjxl"));
			set_model_as_no_longer_needed(joaat("ninef"));
			iVar3 = 0;
			iVar3 = 0;
			while (iVar3 < iLocal_2809)
			{
				if (is_vehicle_driveable(iLocal_2809[iVar3], 0))
				{
					set_vehicle_is_considered_by_player(iLocal_2809[iVar3], 0);
				}
				iVar3++;
			}
		}
		return true;
	}
	return false;
}

bool func_317(int iParam0)
{
	if (!does_entity_exist(iLocal_2814[0]))
	{
		request_model(joaat("blista"));
		if (has_model_loaded(joaat("blista")))
		{
			if (!iParam0)
			{
				clear_area(-11.6041f, -1080.867f, 25.6721f, 20f, 1, 0, 0, false);
				iLocal_2814[0] = create_vehicle(joaat("blista"), -8.6907f, -1082.098f, 25.6721f, 128.8319f, 1, 1);
				set_model_as_no_longer_needed(joaat("blista"));
			}
			return true;
		}
	}
	else
	{
		return true;
	}
	return false;
}

void func_318()
{
	if (iLocal_2644 == iLocal_2645)
	{
		iLocal_2644 = Global_88045;
		if (iLocal_2644 == 0)
		{
			iLocal_2645 = 1;
		}
		else
		{
			iLocal_2645 = 0;
		}
	}
}

void func_319()
{
	if (iLocal_3166 == 4)
	{
		if (iLocal_2643 != 99)
		{
			if (iLocal_2932 == 0)
			{
				iLocal_2932 = get_interior_at_coords_with_type(-38.62f, -1099.01f, 27.31f, "v_carshowroom");
			}
			set_entity_coords(player_ped_id(), vLocal_2769, 1, false, 0, 1);
			_0x2CA429C029CCF247(iLocal_2932);
			if (is_interior_ready(iLocal_2932))
			{
				if (iLocal_2535)
				{
					func_234(vLocal_2769, 335.0142f, 0, 0);
					iLocal_2643 = 99;
				}
				else
				{
					set_entity_coords(player_ped_id(), vLocal_2769, 1, false, 0, 1);
					freeze_entity_position(player_ped_id(), true);
					load_scene(vLocal_2769);
					freeze_entity_position(player_ped_id(), false);
					iLocal_2643 = 99;
				}
			}
		}
		else
		{
			request_anim_dict(sLocal_2794);
			func_318();
			if ((((((((func_229(vLocal_2754, fLocal_2633, 0) && func_315(34.0424f, -638.7692f, 30.6252f, 0)) && func_314(44.0424f, -638.7692f, 30.6252f, 0)) && func_188(vLocal_2748, fLocal_2631, 0)) && func_313(vLocal_2769, fLocal_2639, 0)) && func_310(vLocal_2772, fLocal_2640, 0)) && func_317(0)) && func_316(0)) && has_anim_dict_loaded(sLocal_2794))
			{
				func_185(0, -1, 0);
				func_309();
				func_308();
				set_entity_coords(player_ped_id(), vLocal_2751, 1, false, 0, 1);
				set_entity_heading(player_ped_id(), fLocal_2632);
				func_306();
				iLocal_2516 = 1;
				iLocal_3166 = 0;
			}
		}
	}
	if (iLocal_3166 == 0)
	{
		if (is_player_control_on(player_id()))
		{
			set_player_control(player_id(), false, 256);
		}
		request_cutscene(sLocal_2786, 8);
		func_99(sLocal_2786);
		if (!is_entity_dead(Local_3078[0 /*7*/], 0))
		{
			_0x97CE68CB032583F0(Local_3078[0 /*7*/], 1);
		}
		if (!is_entity_dead(Local_3078[1 /*7*/], 0))
		{
			_0x97CE68CB032583F0(Local_3078[1 /*7*/], 1);
		}
		if (func_96() && (!func_299(&Local_3095, 1) || timera() > 5000))
		{
			if (!is_ped_injured(Local_2967))
			{
				task_clear_look_at(Local_2967);
				register_entity_for_cutscene(Local_2967, "Lamar", 0, false, 0);
			}
			if (!is_ped_injured(Local_2977))
			{
				register_entity_for_cutscene(Local_2977, "Jimmy", 0, false, 0);
			}
			if (!is_ped_injured(vLocal_2972.x))
			{
				register_entity_for_cutscene(vLocal_2972.x, "Siemon", 0, false, 0);
			}
			if (is_vehicle_driveable(iLocal_2809[0], 0))
			{
				register_entity_for_cutscene(iLocal_2809[0], "ninef^1", 0, false, 0);
			}
			if (is_vehicle_driveable(iLocal_2809[1], 0))
			{
				register_entity_for_cutscene(iLocal_2809[1], "Jimmys_Car", 0, false, 0);
			}
			if (is_vehicle_driveable(iLocal_2809[2], 0))
			{
				register_entity_for_cutscene(iLocal_2809[2], "Franklin_stealcar", 0, false, 0);
			}
			if (is_vehicle_driveable(iLocal_2809[3], 0))
			{
				register_entity_for_cutscene(iLocal_2809[3], "bjxl^1", 0, false, 0);
			}
			start_cutscene(0);
			iLocal_2690 = add_navmesh_blocking_object(-59f, -1095.8f, 25.4223f, 10f, 4f, 3f, func_307(-67.2459f), 0, 7);
			iLocal_2691 = add_navmesh_blocking_object(-37.4137f, -1108.567f, 25.4223f, 4f, 4f, 3f, func_307(72.3459f), 0, 7);
			func_69();
			func_60(1, 1, 1, 0);
			task_clear_look_at(player_ped_id());
			_0x48621C9FCA3EBD28(4);
			settimerb(0);
			settimera(0);
			iLocal_2643 = 0;
			iLocal_3166 = 1;
		}
	}
	if (iLocal_3166 == 1)
	{
		switch (iLocal_2643)
		{
			case 0:
				if (is_cutscene_playing())
				{
					clear_prints();
					clear_help(1);
					if (is_vehicle_driveable(Local_3078[iLocal_2644 /*7*/], 0))
					{
						set_entity_collision(Local_3078[iLocal_2644 /*7*/], true, 0);
						set_entity_coords(Local_3078[iLocal_2644 /*7*/], vLocal_2775, 1, false, 0, 1);
						set_entity_heading(Local_3078[iLocal_2644 /*7*/], fLocal_2641);
						set_vehicle_on_ground_properly(Local_3078[iLocal_2644 /*7*/]);
						freeze_entity_position(Local_3078[iLocal_2644 /*7*/], true);
						set_vehicle_doors_locked(Local_3078[iLocal_2644 /*7*/], 3);
						set_vehicle_engine_on(Local_3078[iLocal_2644 /*7*/], false, 0, 0);
					}
					stop_gameplay_hint(1);
					remove_anim_dict(sLocal_2800);
					remove_anim_dict(sLocal_2794);
					func_56();
					iLocal_2643++;
				}
				break;
		}
		func_188(vLocal_2748, fLocal_2631, 0);
		if (was_cutscene_skipped())
		{
			set_cutscene_fade_values(0, 0, 0, 0);
			iLocal_2502 = 1;
		}
		if (!is_cutscene_active())
		{
			iLocal_3166 = 2;
		}
		else
		{
			if (can_set_exit_state_for_camera(0))
			{
				set_gameplay_cam_relative_heading(0f);
				set_gameplay_cam_relative_pitch(0f, 1f);
			}
			if (can_set_exit_state_for_registered_entity("Franklin", get_entity_model(player_ped_id())))
			{
				simulate_player_input_gait(player_id(), 1f, 2000, fLocal_2632, 0, 0);
			}
			if (!is_ped_injured(Local_2967))
			{
				if (can_set_exit_state_for_registered_entity("Lamar", get_entity_model(Local_2967)))
				{
					set_entity_coords(Local_2967, vLocal_2754, 1, false, 0, 1);
					set_entity_heading(Local_2967, fLocal_2633);
					if (is_vehicle_driveable(iLocal_2805, 0))
					{
						task_enter_vehicle(Local_2967, iLocal_2805, 40000, false, 1f, 1, 0);
						force_ped_motion_state(Local_2967, -668482597, false, 1, 0);
					}
				}
			}
		}
		request_anim_dict(sLocal_2794);
	}
	if (iLocal_3166 == 2)
	{
		_0x81CBAE94390F9F89();
		func_237();
		func_60(0, 1, 1, 0);
		settimera(0);
		iLocal_2643 = 0;
		iLocal_3166 = 0;
		iLocal_3165 = 10;
		func_320(1, 0);
	}
	if (iLocal_3166 == 3)
	{
		func_3();
		_0x81CBAE94390F9F89();
		set_cutscene_fade_values(0, 0, 0, 0);
		if (is_cutscene_playing())
		{
			stop_cutscene(0);
		}
		remove_cutscene();
		while (is_cutscene_active() || !func_188(vLocal_2748, fLocal_2631, 0))
		{
			wait(0);
		}
		if (is_vehicle_driveable(iLocal_2805, 0))
		{
			set_entity_coords(iLocal_2805, vLocal_2748, 1, false, 0, 1);
			set_entity_heading(iLocal_2805, fLocal_2631);
		}
		if (is_vehicle_driveable(Local_3078[iLocal_2644 /*7*/], 0))
		{
			set_entity_collision(Local_3078[iLocal_2644 /*7*/], true, 0);
			set_entity_heading(Local_3078[iLocal_2644 /*7*/], fLocal_2641);
			set_entity_coords(Local_3078[iLocal_2644 /*7*/], vLocal_2775, 1, false, 0, 1);
			set_vehicle_on_ground_properly(Local_3078[iLocal_2644 /*7*/]);
			freeze_entity_position(Local_3078[iLocal_2644 /*7*/], true);
			set_vehicle_doors_locked(Local_3078[iLocal_2644 /*7*/], 3);
			set_vehicle_engine_on(Local_3078[iLocal_2644 /*7*/], false, 0, 0);
		}
		if (!is_ped_injured(Local_2967))
		{
			set_entity_coords(Local_2967, vLocal_2754, 1, false, 0, 1);
			set_entity_heading(Local_2967, fLocal_2633);
		}
		set_entity_coords(player_ped_id(), vLocal_2751, 1, false, 0, 1);
		set_entity_heading(player_ped_id(), fLocal_2632);
		iLocal_3166 = 2;
	}
}

int func_320(int iParam0, int iParam1)
{
	if (is_bit_set(Global_91278.f_20, 17))
	{
		return 0;
	}
	return func_321(iParam0, iParam1);
}

int func_321(int iParam0, int iParam1)
{
	if (iParam0 >= 70)
	{
		return 0;
	}
	return func_322(iParam0, iParam1);
}

bool func_322(int iParam0, int iParam1)
{
	if (func_29(14) && !func_333(iParam0))
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
	if (func_332(&Global_2563627))
	{
		if (func_330(&Global_2563627, iParam0))
		{
			return false;
		}
		if (func_323(&Global_2563627, iParam0))
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

bool func_323(var uParam0, int iParam1)
{
	int iVar0;
	var[] uVar1 = new var[70];
	
	if (has_achievement_been_passed(iParam1))
	{
		return false;
	}
	if (func_29(14) && !func_333(iParam1))
	{
		return false;
	}
	if (func_330(uParam0, iParam1))
	{
		return false;
	}
	if (func_329(uParam0) < 0f)
	{
		func_328(uParam0, 0);
	}
	func_326(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0 - 1)
	{
		uVar1[iVar0 + 1] = *uParam0[iVar0];
		iVar0++;
	}
	func_324(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		*uParam0[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return true;
}

bool func_324(var uParam0, int iParam1)
{
	int iVar0;
	
	if (has_achievement_been_passed(iParam1))
	{
		return false;
	}
	if (func_29(14) && !func_333(iParam1))
	{
		return false;
	}
	if (func_330(uParam0, iParam1))
	{
		return false;
	}
	if (func_329(uParam0) < 0f)
	{
		func_328(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_325(uParam0, iVar0))
		{
			*uParam0[iVar0] = iParam1;
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_325(var uParam0, int iParam1)
{
	return *uParam0[iParam1] == 70;
}

void func_326(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_327(uParam0, iVar0);
		iVar0++;
	}
	func_328(uParam0, Global_2563626 - 0.5f);
}

void func_327(var uParam0, int iParam1)
{
	*uParam0[iParam1] = 70;
}

void func_328(var uParam0, float fParam1)
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

var func_329(var uParam0)
{
	return *uParam0.f_72;
}

int func_330(var uParam0, int iParam1)
{
	return func_331(uParam0, iParam1) != -1;
}

int func_331(var uParam0, int iParam1)
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

int func_332(var uParam0)
{
	return *uParam0.f_71 == 1;
}

bool func_333(int iParam0)
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

void func_334()
{
	int iVar0;
	
	if (iLocal_3166 == 4)
	{
		if (iLocal_2643 != 99)
		{
			if (iLocal_2932 == 0)
			{
				iLocal_2932 = get_interior_at_coords_with_type(-38.62f, -1099.01f, 27.31f, "v_carshowroom");
			}
			set_entity_coords(player_ped_id(), vLocal_2751, 1, false, 0, 1);
			_0x2CA429C029CCF247(iLocal_2932);
			if (is_interior_ready(iLocal_2932))
			{
				if (iLocal_2535)
				{
					func_234(vLocal_2751, 335.0142f, 0, 0);
					iLocal_2643 = 99;
				}
				else
				{
					set_entity_coords(player_ped_id(), vLocal_2751, 1, false, 0, 1);
					freeze_entity_position(player_ped_id(), true);
					load_scene(vLocal_2751);
					freeze_entity_position(player_ped_id(), false);
					iLocal_2643 = 99;
				}
			}
		}
		else
		{
			func_318();
			if (((((func_229(vLocal_2754, fLocal_2633, 0) && func_315(34.0424f, -638.7692f, 30.6252f, 0)) && func_314(44.0424f, -638.7692f, 30.6252f, 0)) && func_188(vLocal_2748, fLocal_2631, 0)) && func_317(0)) && func_316(0))
			{
				func_185(0, -1, 0);
				func_309();
				func_308();
				func_306();
				iLocal_2516 = 1;
				iLocal_2542 = false;
				iLocal_3166 = 0;
			}
		}
	}
	if (iLocal_3166 == 0)
	{
		request_anim_dict(sLocal_2794);
		request_anim_dict(sLocal_2800);
		request_model(iLocal_2959);
		if ((((((func_313(vLocal_2769, fLocal_2639, 0) && func_310(vLocal_2772, fLocal_2640, 0)) && func_229(-37.542f, -1084.87f, 25.4344f, 246.4778f, 0)) && has_anim_dict_loaded(sLocal_2794)) && has_anim_dict_loaded(sLocal_2800)) && has_model_loaded(iLocal_2959)) && (!is_ped_injured(Local_2967) && _0x7350823473013C02(Local_2967)))
		{
			new_load_scene_stop();
			if (is_screen_faded_out())
			{
				func_230(&Local_3169, 6, Local_2977, "JIMMY", 0, 1);
				func_230(&Local_3169, 4, vLocal_2972.x, "SIMEON", 0, 1);
				func_337(&Local_3169, "ARM1AUD", "ARM1_MCS1LI", 7, 0, 0, 0, 0);
				while (!func_317(0))
				{
					wait(0);
				}
				if (iLocal_2643 != 99)
				{
					func_46(vLocal_2775, 300f, 1, 10000);
				}
			}
			if (is_vehicle_driveable(Local_3078[iLocal_2644 /*7*/], 0))
			{
				if (!iLocal_2542)
				{
					if (is_playback_going_on_for_vehicle(Local_3078[iLocal_2644 /*7*/]))
					{
						stop_playback_recorded_vehicle(Local_3078[iLocal_2644 /*7*/]);
					}
					set_entity_collision(Local_3078[iLocal_2644 /*7*/], true, 0);
					freeze_entity_position(Local_3078[iLocal_2644 /*7*/], false);
					set_entity_heading(Local_3078[iLocal_2644 /*7*/], fLocal_2641);
					set_entity_coords(Local_3078[iLocal_2644 /*7*/], vLocal_2775, 1, false, 0, 1);
					set_vehicle_engine_on(Local_3078[iLocal_2644 /*7*/], false, 0, 0);
					set_vehicle_is_considered_by_player(Local_3078[iLocal_2644 /*7*/], 0);
					if (!is_ped_in_vehicle(player_ped_id(), Local_3078[iLocal_2644 /*7*/], 0))
					{
						set_ped_into_vehicle(player_ped_id(), Local_3078[iLocal_2644 /*7*/], -1);
					}
					task_clear_look_at(player_ped_id());
					if (is_screen_faded_out() && _0xEE778F8C7E1142E2(0) == 4)
					{
						task_leave_any_vehicle(player_ped_id(), 0, 0);
						wait(100);
					}
					else
					{
						task_leave_any_vehicle(player_ped_id(), 100, 0);
					}
				}
				else
				{
					set_entity_visible(Local_3078[iLocal_2644 /*7*/], true, 0);
					set_entity_visible(player_ped_id(), true, 0);
				}
			}
			if (is_vehicle_driveable(Local_3078[iLocal_2645 /*7*/], 0))
			{
				freeze_entity_position(Local_3078[iLocal_2645 /*7*/], false);
				set_vehicle_engine_on(Local_3078[iLocal_2645 /*7*/], false, 0, 0);
				set_vehicle_is_considered_by_player(Local_3078[iLocal_2645 /*7*/], 0);
				set_entity_heading(Local_3078[iLocal_2645 /*7*/], fLocal_2642);
				set_entity_coords(Local_3078[iLocal_2645 /*7*/], vLocal_2778, 1, false, 0, 1);
			}
			iVar0 = 0;
			if (!is_ped_injured(Local_2967))
			{
				clear_ped_tasks_immediately(Local_2967);
				Local_2967.f_4 = create_synchronized_scene(-30.995f, -1094.7f, 25.423f, 0f, 0f, -18.72f, 2);
				if (is_screen_faded_out())
				{
					task_synchronized_scene(Local_2967, Local_2967.f_4, sLocal_2800, "leadin_loop", 1000f, -4f, 5, 145, 1000f, 0);
					set_synchronized_scene_rate(Local_2967.f_4, 1f);
					set_synchronized_scene_looped(Local_2967.f_4, true);
					iVar0 = 1;
				}
				else
				{
					task_synchronized_scene(Local_2967, Local_2967.f_4, sLocal_2800, "leadin_action", 1000f, -4f, 5, 145, 1000f, 0);
					set_synchronized_scene_rate(Local_2967.f_4, 0.98f);
					set_synchronized_scene_looped(Local_2967.f_4, false);
				}
				task_look_at_entity(Local_2967, player_ped_id(), -1, 2048, 2);
				iLocal_2903 = create_object(iLocal_2959, -30.99f, -1094.082f, 25.423f, 1, true, false);
				attach_entity_to_entity(iLocal_2903, Local_2967, get_ped_bone_index(Local_2967, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				set_model_as_no_longer_needed(iLocal_2959);
			}
			clear_help(1);
			destroy_all_cams(0);
			render_script_cams(false, false, 3000, 1, 0, 0);
			func_60(0, 1, 1, 0);
			display_hud(true);
			display_radar(true);
			set_gameplay_cam_relative_heading(0f);
			set_gameplay_cam_relative_pitch(0f, 1f);
			set_all_vehicle_generators_active_in_area(-66.2173f, -1121.954f, 14.8642f, -41.2857f, -1111.164f, 34.8642f, true, 1);
			remove_anim_dict(sLocal_2789);
			func_305(1);
			func_303();
			trigger_music_event("ARM1_RADIO_ON");
			if (!is_screen_faded_in())
			{
				if (!is_screen_fading_in())
				{
					do_screen_fade_in(800);
				}
				while (!is_screen_faded_in())
				{
					if (!is_entity_dead(Local_3078[0 /*7*/], 0))
					{
						_0x97CE68CB032583F0(Local_3078[0 /*7*/], 1);
					}
					if (!is_entity_dead(Local_3078[1 /*7*/], 0))
					{
						_0x97CE68CB032583F0(Local_3078[1 /*7*/], 1);
					}
					wait(0);
				}
			}
			if (iVar0 && !is_ped_injured(Local_2967))
			{
				Local_2967.f_4 = create_synchronized_scene(-30.995f, -1094.7f, 25.423f, 0f, 0f, -18.72f, 2);
				task_synchronized_scene(Local_2967, Local_2967.f_4, sLocal_2800, "leadin_action", 8f, -4f, 5, 145, 1000f, 0);
				set_synchronized_scene_phase(Local_2967.f_4, 0f);
				set_synchronized_scene_rate(Local_2967.f_4, 0.97f);
				set_synchronized_scene_looped(Local_2967.f_4, false);
			}
			if (!is_ped_injured(Local_2977) && !is_ped_injured(vLocal_2972.x))
			{
				iLocal_2709 = create_synchronized_scene(-39.546f, -1092.79f, 25.422f, 0f, 0f, 0f, 2);
				task_synchronized_scene(vLocal_2972.x, iLocal_2709, sLocal_2794, "_leadin_simeon", 1000f, -1.5f, 5, 0, 1000f, 0);
				task_synchronized_scene(Local_2977, iLocal_2709, sLocal_2794, "_leadin_jimmy", 1000f, -1.5f, 5, 0, 1000f, 0);
				set_synchronized_scene_phase(iLocal_2709, 0.35f);
			}
			set_player_control(player_id(), true, 0);
			func_336();
			set_ped_max_move_blend_ratio(player_ped_id(), 1f);
			settimera(0);
			iLocal_2643 = 0;
			iLocal_3166 = 1;
		}
	}
	if (iLocal_3166 == 1)
	{
		func_336();
		set_ped_max_move_blend_ratio(player_ped_id(), 1f);
		if ((!iLocal_2547[52] && !is_ped_injured(vLocal_2972.x)) && !is_ped_injured(Local_2977))
		{
			func_335();
			iLocal_2547[52] = 1;
		}
		if (!is_entity_dead(Local_3078[0 /*7*/], 0))
		{
			_0x97CE68CB032583F0(Local_3078[0 /*7*/], 1);
		}
		if (!is_entity_dead(Local_3078[1 /*7*/], 0))
		{
			_0x97CE68CB032583F0(Local_3078[1 /*7*/], 1);
		}
		if (iLocal_2543)
		{
			if (!is_ped_in_any_vehicle(player_ped_id(), 0))
			{
				_0x2A2173E46DAECD12(1, iLocal_3167);
				iLocal_2543 = 0;
			}
			else
			{
				disable_control_action(0, 0, 1);
			}
		}
		switch (iLocal_2643)
		{
			case 0:
				if (is_entity_in_angled_area(player_ped_id(), -34.0797f, -1094.802f, 25.17234f, -35.01475f, -1097.344f, 27.67234f, 9.5f, 0, true, 0))
				{
					set_gameplay_coord_hint(get_entity_coords(iLocal_2809[1], 0), -1, 2500, 2000, 0);
					_0xF8BDBF3D573049A1(0.6f);
					_0x5D7B620DAE436138(0.015f);
					_0xC92717EF615B6704(0.05f);
					set_gameplay_hint_fov(30f);
					get_is_multiplayer_brief(1);
					set_player_control(player_id(), false, 0);
					task_follow_nav_mesh_to_coord(player_ped_id(), -39.6f, -1097f, 25.6f, 1f, -1, 0.25f, 5, 40000f);
					if (!is_ped_injured(vLocal_2972.x))
					{
						task_look_at_entity(player_ped_id(), vLocal_2972.x, -1, 2048, 2);
					}
					iLocal_2643++;
				}
				break;
		}
		if ((!is_ped_injured(vLocal_2972.x) && !is_ped_injured(Local_2977)) && !is_ped_injured(Local_2967))
		{
			if (!does_blip_exist(vLocal_2972.y))
			{
				vLocal_2972.y = func_301(vLocal_2972.x, 0, 0);
			}
			set_ped_move_rate_override(player_ped_id(), 0.87f);
			if (func_299(&Local_3095, 0))
			{
				if (is_synchronized_scene_running(iLocal_2709) && get_synchronized_scene_phase(iLocal_2709) >= 0.9f)
				{
					func_243();
				}
			}
			if (does_entity_exist(iLocal_2903))
			{
				if (has_anim_event_fired(Local_2967, -2033458239))
				{
					func_236(&iLocal_2903, 1);
				}
			}
			if (((is_entity_in_angled_area(player_ped_id(), -38.59081f, -1095.907f, 25.4223f, -51.04851f, -1100.539f, 27.4223f, 10.5f, 0, true, 0) || is_entity_in_angled_area(player_ped_id(), -26.40492f, -1086.267f, 25.57324f, -31.38518f, -1084.528f, 27.57324f, 2.25f, 0, true, 0)) || is_entity_in_angled_area(player_ped_id(), -37.61462f, -1108.704f, 25.45593f, -38.44304f, -1110.918f, 27.43603f, 2.25f, 0, true, 0)) || (is_synchronized_scene_running(iLocal_2709) && get_synchronized_scene_phase(iLocal_2709) >= 0.99f))
			{
				iLocal_3166 = 2;
			}
		}
		request_cutscene(sLocal_2786, 8);
		func_99(sLocal_2786);
	}
	if (iLocal_3166 == 2)
	{
		func_237();
		func_243();
		func_236(&iLocal_2903, 1);
		settimera(0);
		iLocal_2643 = 0;
		iLocal_3166 = 0;
		iLocal_3165 = 9;
	}
	if (iLocal_3166 == 3)
	{
		iLocal_3166 = 2;
	}
}

void func_335()
{
	start_preloaded_conversation();
	Global_16704 = 0;
}

void func_336()
{
	disable_control_action(0, 21, 1);
	disable_control_action(0, 22, 1);
	disable_control_action(0, 24, 1);
	disable_control_action(0, 257, 1);
	disable_control_action(0, 44, 1);
	disable_control_action(0, 36, 1);
	disable_control_action(0, 23, 1);
	disable_control_action(0, 263, 1);
	disable_control_action(0, 264, 1);
	disable_control_action(0, 143, 1);
	disable_control_action(0, 262, 1);
	disable_control_action(0, 261, 1);
	disable_control_action(0, 25, 1);
	disable_control_action(0, 45, 1);
	disable_control_action(0, 141, 1);
	disable_control_action(0, 140, 1);
	disable_control_action(0, 142, 1);
	disable_control_action(0, 37, 1);
}

int func_337(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	func_297(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	Global_16705 = 1;
	Global_16709 = 0;
	Global_16707 = iParam7;
	Global_2621441 = 0;
	return func_289(sParam2, iParam3, 0);
}

void func_338()
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	int iVar10;
	int iVar11;
	
	set_vehicle_density_multiplier_this_frame(0f);
	_0xA76359FC80B2438E(1f);
	if (iLocal_3166 == 4)
	{
		if (iLocal_2643 != 99)
		{
			if (iLocal_2535)
			{
				func_234(vLocal_2748, 335.0142f, 0, 0);
				iLocal_2643 = 99;
			}
			else
			{
				set_entity_coords(player_ped_id(), vLocal_2748, 1, false, 0, 1);
				freeze_entity_position(player_ped_id(), true);
				load_scene(vLocal_2748);
				freeze_entity_position(player_ped_id(), false);
				iLocal_2643 = 99;
			}
		}
		else
		{
			if (iLocal_2932 == 0)
			{
				iLocal_2932 = get_interior_at_coords_with_type(-38.62f, -1099.01f, 27.31f, "v_carshowroom");
			}
			_0x2CA429C029CCF247(iLocal_2932);
			func_318();
			if ((((func_229(-37.542f, -1084.87f, 25.4344f, 246.4778f, 0) && func_315(34.0424f, -638.7692f, 30.6252f, 0)) && func_314(44.0424f, -638.7692f, 30.6252f, 0)) && func_188(vLocal_2748, fLocal_2631, 0)) && is_interior_ready(iLocal_2932))
			{
				func_185(0, -1, 0);
				func_342();
				func_309();
				func_308();
				func_306();
				func_305(1);
				iLocal_2536 = false;
				iLocal_3166 = 0;
			}
		}
	}
	if (iLocal_3166 == 0)
	{
		disable_control_action(0, 75, 1);
		request_vehicle_recording(330, sLocal_2784);
		request_vehicle_recording(331, sLocal_2784);
		request_vehicle_recording(332, sLocal_2784);
		request_vehicle_recording(333, sLocal_2784);
		request_anim_dict(sLocal_2789);
		if (((((func_316(1) && has_vehicle_recording_been_loaded(330, sLocal_2784)) && has_vehicle_recording_been_loaded(331, sLocal_2784)) && has_vehicle_recording_been_loaded(332, sLocal_2784)) && has_vehicle_recording_been_loaded(333, sLocal_2784)) && (has_anim_dict_loaded(sLocal_2789) || !iLocal_2531))
		{
			clear_prints();
			clear_help(1);
			func_237();
			func_247(&Local_3095, 1, 0);
			set_player_control(player_id(), false, 0);
			_stop_recording_and_save_clip();
			if (is_vehicle_driveable(iLocal_2805, 0))
			{
				set_entity_coords(iLocal_2805, vLocal_2748, 1, false, 0, 1);
				set_entity_heading(iLocal_2805, fLocal_2631);
				set_vehicle_on_ground_properly(iLocal_2805);
			}
			if (is_vehicle_driveable(Local_3078[iLocal_2645 /*7*/], 0))
			{
				set_vehicle_engine_on(Local_3078[iLocal_2645 /*7*/], false, 0, 0);
				set_vehicle_doors_locked(Local_3078[iLocal_2645 /*7*/], 3);
			}
			func_304(&(iLocal_2809[0]), 1);
			func_304(&(iLocal_2809[1]), 1);
			func_304(&(iLocal_2809[2]), 1);
			func_304(&(iLocal_2809[3]), 1);
			set_number_of_parked_vehicles(0);
			clear_area(-42.8436f, -1111.725f, 25.4355f, 100f, 1, 0, 0, false);
			func_316(0);
			set_all_vehicle_generators_active_in_area(-66.2173f, -1121.954f, 14.8642f, -41.2857f, -1111.164f, 34.8642f, false, 1);
			if (is_audio_scene_active("ARM_1_DRIVE_TO_DEALERSHIP"))
			{
				stop_audio_scene("ARM_1_DRIVE_TO_DEALERSHIP");
			}
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < iLocal_2809)
			{
				if (iVar0 == 0)
				{
					set_entity_coords_no_offset(iLocal_2809[0], -49.9f, -1094.7f, 26.0416f, 0, 0, 1);
				}
				else if (iVar0 == 1)
				{
					set_entity_coords_no_offset(iLocal_2809[1], -46.5f, -1097.5f, 26.35f, 0, 0, 1);
				}
				else if (iVar0 == 2)
				{
					set_entity_coords_no_offset(iLocal_2809[2], -41.7f, -1099.5f, 26.0304f, 0, 0, 1);
				}
				else if (iVar0 == 3)
				{
					set_entity_coords_no_offset(iLocal_2809[3], -36.8f, -1101.2f, 26.3321f, 0, 0, 1);
				}
				freeze_entity_position(iLocal_2809[iVar0], true);
				iVar0++;
			}
			if (!is_ped_injured(Local_2967))
			{
				set_entity_visible(Local_2967, true, 0);
				set_entity_invincible(Local_2967, false);
				set_entity_collision(Local_2967, true, 0);
				freeze_entity_position(Local_2967, false);
			}
			clear_area(get_entity_coords(Local_3078[iLocal_2644 /*7*/], 1), 10f, 1, 0, 0, false);
			clear_area_of_cops(get_entity_coords(Local_3078[iLocal_2644 /*7*/], 1), 200f, 0);
			if (is_vehicle_driveable(Local_3078[iLocal_2644 /*7*/], 0))
			{
				set_vehicle_doors_shut(Local_3078[iLocal_2644 /*7*/], 1);
				if (!is_ped_sitting_in_vehicle(player_ped_id(), Local_3078[iLocal_2644 /*7*/]))
				{
					clear_ped_tasks_immediately(player_ped_id());
					set_ped_into_vehicle(player_ped_id(), Local_3078[iLocal_2644 /*7*/], -1);
				}
				if (get_entity_speed(Local_3078[iLocal_2644 /*7*/]) < 30f)
				{
					vVar1 = {get_entity_rotation(Local_3078[iLocal_2644 /*7*/], 2)};
					if (absf(vVar1.y) < 30f && absf(vVar1.x) < 45f)
					{
						iLocal_2536 = true;
					}
				}
			}
			if (iLocal_2536)
			{
				if (!iLocal_2515)
				{
					set_roads_in_area(-89.0913f, -1133.143f, 0.886f, 13.5596f, -1053.273f, 53.886f, true, 1);
					if (is_vehicle_driveable(Local_3078[iLocal_2644 /*7*/], 0))
					{
						task_vehicle_drive_to_coord(player_ped_id(), Local_3078[iLocal_2644 /*7*/], -27.3f, -1082f, 26.2f, 15f, 0, get_entity_model(Local_3078[iLocal_2644 /*7*/]), 4456448, 2f, 5f);
					}
				}
			}
			else if (is_vehicle_driveable(Local_3078[iLocal_2644 /*7*/], 0))
			{
				if (!iLocal_2515)
				{
					if (iLocal_2644 == 0)
					{
						if (iLocal_2514)
						{
							start_playback_recorded_vehicle(Local_3078[iLocal_2644 /*7*/], 330, sLocal_2784, 1);
							func_341(&(Local_3078[iLocal_2644 /*7*/]), 4535f);
						}
						else
						{
							start_playback_recorded_vehicle(Local_3078[iLocal_2644 /*7*/], 331, sLocal_2784, 1);
							func_341(&(Local_3078[iLocal_2644 /*7*/]), 2200f);
						}
					}
					else if (iLocal_2514)
					{
						start_playback_recorded_vehicle(Local_3078[iLocal_2644 /*7*/], 332, sLocal_2784, 1);
						func_341(&(Local_3078[iLocal_2644 /*7*/]), 4435f);
					}
					else
					{
						start_playback_recorded_vehicle(Local_3078[iLocal_2644 /*7*/], 333, sLocal_2784, 1);
						func_341(&(Local_3078[iLocal_2644 /*7*/]), 3000f);
					}
					_0x1F2E4E06DEA8992B(Local_3078[iLocal_2644 /*7*/], 1);
				}
			}
			destroy_all_cams(0);
			if (iLocal_2531)
			{
				iLocal_2885 = create_cam("DEFAULT_ANIMATED_CAMERA", true);
				if (iLocal_2514)
				{
					iLocal_2679 = create_synchronized_scene(-58.096f, -1099.135f, 25.565f, 0f, 0f, -20f, 2);
					play_synchronized_cam_anim(iLocal_2885, iLocal_2679, "car_dealership_int_ltr_cam", sLocal_2789);
					set_synchronized_scene_phase(iLocal_2679, 0f);
				}
				else
				{
					iLocal_2679 = create_synchronized_scene(-58.096f, -1101.335f, 25.565f, 0f, 0f, -20f, 2);
					play_synchronized_cam_anim(iLocal_2885, iLocal_2679, "car_dealership_int_rtl_cam", sLocal_2789);
					set_synchronized_scene_phase(iLocal_2679, 0f);
				}
			}
			else
			{
				iLocal_2885 = create_cam("DEFAULT_SPLINE_CAMERA", false);
				_0xD1B0F412F109EA5D(iLocal_2885, 2);
				if (iLocal_2515)
				{
					_0x0FB82563989CF4FB(iLocal_2885, create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", -77.54986f, -1116.585f, 27.78851f, 0.939515f, -0.028141f, -58.80625f, 35.0707f, 1, 2), 0, 3);
				}
				else if (iLocal_2514)
				{
					_0x0FB82563989CF4FB(iLocal_2885, create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", -77.71259f, -1116.481f, 27.74226f, 0.890156f, -0.013359f, -38.18335f, 35.0707f, 1, 2), 0, 3);
				}
				else
				{
					_0x0FB82563989CF4FB(iLocal_2885, create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", -77.88025f, -1116.144f, 27.74217f, 0.890156f, -0.013359f, -94.54407f, 35.0707f, 1, 2), 0, 3);
				}
				_0x0FB82563989CF4FB(iLocal_2885, create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", -77.58225f, -1116.546f, 27.78374f, 0.890799f, -0.014147f, -60.93074f, 35.0707f, 1, 2), 5000, 1);
				_0x0FB82563989CF4FB(iLocal_2885, create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", -77.09956f, -1117.414f, 27.78397f, 0.890799f, -0.014147f, -60.93074f, 35.0707f, 1, 2), 6700, 1);
			}
			set_cam_active(iLocal_2885, true);
			render_script_cams(true, false, 3000, 1, 0, 0);
			func_60(1, 1, 1, 0);
			display_hud(false);
			display_radar(false);
			trigger_music_event("ARM1_RADIO_OFF");
			if (iLocal_2515)
			{
				settimerb(1500);
			}
			else
			{
				settimerb(0);
			}
			_0x293220DA1B46CEBC(4f, 12f, 4);
			func_56();
			iLocal_2542 = false;
			iLocal_2502 = 0;
			iLocal_2643 = 0;
			iLocal_3166 = 1;
		}
	}
	if (iLocal_3166 == 1)
	{
		set_pad_shake(0, 0, 0);
		func_229(-37.542f, -1084.87f, 25.4344f, 246.4778f, 0);
		switch (iLocal_2643)
		{
			case 0:
				if (timerb() > 4500 && !iLocal_2542)
				{
					set_entity_collision(Local_3078[iLocal_2644 /*7*/], false, 0);
					if (!is_playback_going_on_for_vehicle(Local_3078[iLocal_2644 /*7*/]))
					{
						freeze_entity_position(Local_3078[iLocal_2644 /*7*/], true);
					}
				}
				request_anim_dict(sLocal_2794);
				request_anim_dict(sLocal_2800);
				if (iLocal_2514)
				{
					vVar4 = {vLocal_2769};
					vVar7 = {vLocal_2772};
				}
				else
				{
					vVar4 = {-51.6f, -1091.9f, 25.9f};
					vVar7 = {-51f, -1090.1f, 25.7f};
				}
				if (func_313(vVar4, fLocal_2639, 0) && func_310(vVar7, fLocal_2640, 0))
				{
					func_230(&Local_3169, 6, Local_2977, "JIMMY", 0, 1);
					func_230(&Local_3169, 4, vLocal_2972.x, "SIMEON", 0, 1);
					func_337(&Local_3169, "ARM1AUD", "ARM1_MCS1LI", 7, 0, 0, 0, 0);
					if (has_anim_dict_loaded(sLocal_2794) && timerb() > 8500)
					{
						iLocal_3166 = 2;
					}
				}
				if (!iLocal_2547[51])
				{
					if (timerb() > 2500)
					{
						func_55("AR1_SHOWROOM", 13000);
						iLocal_2547[51] = 1;
					}
				}
				if (!iLocal_2543)
				{
					if (timerb() > 8300)
					{
						iVar10 = _0xEE778F8C7E1142E2(0);
						iVar11 = _0xEE778F8C7E1142E2(1);
						if (((iVar10 == 4 && iVar11 != 4) && get_follow_vehicle_cam_zoom_level() != 4) || (iVar10 != 4 && (iVar11 == 4 || get_follow_vehicle_cam_zoom_level() == 4)))
						{
							iLocal_3167 = iVar11;
							_0x2A2173E46DAECD12(1, iVar10);
							iLocal_2543 = 1;
						}
					}
				}
				if (is_vehicle_driveable(Local_3078[iLocal_2644 /*7*/], 0))
				{
					if (_is_vehicle_engine_on(Local_3078[iLocal_2644 /*7*/]))
					{
						if (timerb() > 8000)
						{
							set_vehicle_engine_on(Local_3078[iLocal_2644 /*7*/], false, 0, 0);
						}
					}
				}
				if (timerb() > 5000)
				{
					if (!is_entity_dead(Local_3078[0 /*7*/], 0))
					{
						_0x97CE68CB032583F0(Local_3078[0 /*7*/], 1);
					}
					if (!is_entity_dead(Local_3078[1 /*7*/], 0))
					{
						_0x97CE68CB032583F0(Local_3078[1 /*7*/], 1);
					}
				}
				break;
		}
		if (func_339(1000))
		{
			iLocal_2502 = 1;
			iLocal_3166 = 3;
		}
		func_317(0);
	}
	if (iLocal_3166 == 2)
	{
		remove_vehicle_recording(330, sLocal_2784);
		remove_vehicle_recording(331, sLocal_2784);
		remove_vehicle_recording(332, sLocal_2784);
		remove_vehicle_recording(333, sLocal_2784);
		set_number_of_parked_vehicles(-1);
		set_roads_back_to_original(-89.0913f, -1133.143f, 0.886f, 13.5596f, -1053.273f, 53.886f, 1);
		iLocal_2643 = 0;
		iLocal_3166 = 0;
		iLocal_3165 = 8;
	}
	if (iLocal_3166 == 3)
	{
		if (!is_screen_faded_out())
		{
			if (!is_screen_fading_out())
			{
				do_screen_fade_out(800);
			}
			while (!is_screen_faded_out())
			{
				set_vehicle_density_multiplier_this_frame(0f);
				wait(0);
			}
		}
		if (is_vehicle_driveable(iLocal_2805, 0))
		{
			set_entity_coords(iLocal_2805, vLocal_2748, 1, false, 0, 1);
			set_entity_heading(iLocal_2805, fLocal_2631);
		}
		iLocal_2542 = false;
		iLocal_3166 = 2;
	}
}

bool func_339(int iParam0)
{
	if (is_screen_faded_in())
	{
		if (get_game_timer() - Global_28 > iParam0)
		{
			Global_27 = get_game_timer();
		}
		Global_28 = get_game_timer();
		if (get_game_timer() - Global_27 > iParam0)
		{
			if (func_340())
			{
				Global_27 = get_game_timer();
				return true;
			}
		}
	}
	return false;
}

bool func_340()
{
	if (is_pause_menu_active())
	{
		return false;
	}
	if (is_control_just_pressed(0, 18) || is_control_just_pressed(2, 18))
	{
		return true;
	}
	return false;
}

void func_341(int iParam0, float fParam1)
{
	if (!is_entity_dead(*iParam0, 0))
	{
		if (is_playback_going_on_for_vehicle(*iParam0))
		{
			skip_time_in_playback_recorded_vehicle(*iParam0, fParam1 - get_time_position_in_recording(*iParam0));
		}
	}
}

void func_342()
{
	if (is_vehicle_driveable(Local_3078[iLocal_2644 /*7*/], 0))
	{
		if (!is_ped_in_vehicle(player_ped_id(), Local_3078[iLocal_2644 /*7*/], 0))
		{
			set_ped_into_vehicle(player_ped_id(), Local_3078[iLocal_2644 /*7*/], -1);
		}
	}
}

void func_343()
{
	struct<82> Var0;
	int iVar98;
	int iVar99;
	int iVar100;
	int iVar101;
	int iVar102;
	
	if (iLocal_3166 == 4)
	{
		if (iLocal_2535)
		{
			func_234(35.2234f, -646.9493f, 30.6292f, 335.0142f, 0, 0);
			iLocal_2643 = 99;
		}
		else
		{
			set_entity_coords(player_ped_id(), 35.2234f, -646.9493f, 30.6292f, 1, false, 0, 1);
			freeze_entity_position(player_ped_id(), true);
			load_scene(35.2234f, -646.9493f, 30.6292f);
			wait(0);
			freeze_entity_position(player_ped_id(), false);
			iLocal_2643 = 99;
		}
		func_318();
		func_355(180, 0, 0, 1, 0);
		request_model(joaat("police3"));
		request_model(joaat("s_m_y_cop_01"));
		request_vehicle_recording(300, sLocal_2784);
		while (((((!does_entity_exist(Local_2967) || !does_entity_exist(Local_3078[0 /*7*/])) || !does_entity_exist(Local_3078[1 /*7*/])) || !has_model_loaded(joaat("police3"))) || !has_model_loaded(joaat("s_m_y_cop_01"))) || !has_vehicle_recording_been_loaded(300, sLocal_2784))
		{
			func_229(-25.356f, -1086.305f, 25.5721f, 52.8017f, 0);
			func_315(34.0424f, -638.7692f, 30.6252f, 0);
			func_314(44.0424f, -638.7692f, 30.6252f, 0);
			request_model(joaat("police3"));
			request_model(joaat("s_m_y_cop_01"));
			request_vehicle_recording(300, sLocal_2784);
			wait(0);
		}
		func_185(0, -1, 0);
		func_342();
		func_309();
		func_308();
		func_354();
		special_ability_reset(player_id());
		clear_ped_wetness(player_ped_id());
		set_create_random_cops(false);
		clear_area_of_cops(44.4942f, -634.8408f, 34.55825f, 400f, 0);
		iLocal_2803 = create_vehicle(joaat("police3"), 87.5619f, -588.9714f, 30.599f, 160.1988f, 1, 1);
		set_vehicle_engine_on(iLocal_2803, true, 1, 0);
		set_vehicle_siren(iLocal_2803, true);
		start_playback_recorded_vehicle_with_flags(iLocal_2803, 300, sLocal_2784, 1, 0, 786603);
		func_341(&iLocal_2803, 10500f);
		set_model_as_no_longer_needed(joaat("police3"));
		iLocal_2841[0] = create_ped_inside_vehicle(iLocal_2803, 6, joaat("s_m_y_cop_01"), -1, 1, true);
		give_weapon_to_ped(iLocal_2841[0], joaat("weapon_pistol"), -1, false, true);
		set_ped_combat_attributes(iLocal_2841[0], 2, false);
		set_blocking_of_non_temporary_events(iLocal_2841[0], false);
		iLocal_2841[1] = create_ped_inside_vehicle(iLocal_2803, 6, joaat("s_m_y_cop_01"), false, 1, true);
		give_weapon_to_ped(iLocal_2841[1], joaat("weapon_pistol"), -1, false, true);
		set_ped_combat_attributes(iLocal_2841[1], 2, false);
		set_blocking_of_non_temporary_events(iLocal_2841[1], false);
		set_model_as_no_longer_needed(joaat("s_m_y_cop_01"));
		if (!is_ped_injured(Local_2967))
		{
			set_entity_coords(Local_2967, -32.912f, -1086.304f, 29.2035f, 1, false, 0, 1);
			freeze_entity_position(Local_2967, true);
			set_entity_collision(Local_2967, false, 0);
			set_entity_visible(Local_2967, false, 0);
		}
		if (is_vehicle_driveable(Local_3078[iLocal_2644 /*7*/], 0))
		{
			set_vehicle_engine_on(Local_3078[iLocal_2644 /*7*/], true, 1, 0);
			if (iLocal_2644 == 0)
			{
				set_entity_heading(Local_3078[iLocal_2644 /*7*/], 337.9254f);
				set_entity_coords(Local_3078[iLocal_2644 /*7*/], 35.9457f, -646.1738f, 30.6258f, 1, false, 0, 1);
			}
			else
			{
				set_entity_heading(Local_3078[iLocal_2644 /*7*/], 335.015f);
				set_entity_coords(Local_3078[iLocal_2644 /*7*/], 35.2234f, -646.9493f, 30.6292f, 1, false, 0, 1);
			}
		}
		func_355(180, 0, 0, 1, 0);
		set_gameplay_cam_relative_heading(-50.5f - get_entity_heading(player_ped_id()));
		set_gameplay_cam_relative_pitch(0f, 1f);
		wait(500);
		iLocal_3166 = 0;
	}
	if (iLocal_3166 == 0)
	{
		set_wanted_level_multiplier(1f);
		set_player_wanted_level(player_id(), 2, 0);
		set_player_wanted_level_now(player_id(), 0);
		set_max_wanted_level(2);
		_0xBC9490CA15AEA8FB(player_id());
		set_vehicle_density_multiplier_this_frame(1f);
		set_vehicle_population_budget(3);
		set_ped_population_budget(3);
		set_player_control(player_id(), true, 0);
		enable_special_ability(player_id(), 1);
		_0xDC0F817884CDD856(3, true);
		set_create_random_cops(false);
		clear_area_of_cops(get_entity_coords(player_ped_id(), 1), 200f, 0);
		func_353(1);
		iLocal_2515 = false;
		iLocal_2514 = false;
		iLocal_2517 = 0;
		if (iLocal_2541)
		{
			Local_3093.f_1 = 0;
		}
		if (!Local_3093.f_1)
		{
			iLocal_2547[19] = 0;
		}
		func_306();
		func_305(1);
		func_352(9, 1);
		func_351(1);
		func_71(48, 1);
		func_71(47, 1);
		if (!is_audio_scene_active("ARM_1_LOSE_COPS"))
		{
			start_audio_scene("ARM_1_LOSE_COPS");
		}
		if (is_screen_faded_out())
		{
			clear_area_of_vehicles(get_entity_coords(player_ped_id(), 1), 100f, 0, 0, 0, 0, false);
		}
		func_56();
		if (is_vehicle_driveable(Local_3078[iLocal_2644 /*7*/], 0))
		{
			set_entity_can_be_damaged(Local_3078[iLocal_2644 /*7*/], 1);
			set_entity_invincible(Local_3078[iLocal_2644 /*7*/], false);
			_0x1AA8A837D2169D94(Local_3078[iLocal_2644 /*7*/], 0);
		}
		func_350(2, 0);
		set_player_control(player_id(), true, 0);
		_0x293220DA1B46CEBC(0f, 15f, 3);
		func_767(2, "LOSE_COPS", 0, 0, 0, 1);
		settimera(0);
		iLocal_2537 = 0;
		iLocal_2686 = 0;
		iLocal_2685 = get_game_timer();
		iLocal_2703 = 0;
		iLocal_2643 = 0;
		iLocal_3166 = 1;
	}
	if (iLocal_3166 == 1)
	{
		func_349(0, 1);
		if (get_game_timer() - iLocal_2685 < 7000)
		{
			_0xBC9490CA15AEA8FB(player_id());
			_0x4669B3ED80F24B4E(player_id());
			set_player_wanted_centre_position(player_id(), get_entity_coords(player_ped_id(), 1));
			_0xDC64D2C53493ED12(player_id());
		}
		if (is_vehicle_driveable(iLocal_2803, 0))
		{
			if (!is_playback_going_on_for_vehicle(iLocal_2803))
			{
				if (iLocal_2686 == 0)
				{
					if (!is_ped_injured(iLocal_2841[0]))
					{
						task_arrest_ped(iLocal_2841[0], player_ped_id());
					}
					if (!is_ped_injured(iLocal_2841[1]))
					{
						task_arrest_ped(iLocal_2841[1], player_ped_id());
					}
					iLocal_2686 = get_game_timer();
				}
				else if (get_game_timer() - iLocal_2686 > 2000)
				{
					func_57(&(iLocal_2841[0]), 0);
					func_57(&(iLocal_2841[1]), 0);
					func_304(&iLocal_2803, 0);
				}
			}
		}
		switch (iLocal_2643)
		{
			case 0:
				if (get_game_timer() - iLocal_2685 > 120000 || !is_player_wanted_level_greater(player_id(), 0))
				{
					set_create_random_cops(true);
					iLocal_2643++;
				}
				break;
		}
		if (!iLocal_2547[75])
		{
			if (!is_player_wanted_level_greater(player_id(), 0))
			{
				play_police_report("SCRIPTED_SCANNER_REPORT_ARMENIAN_1_02", 0f);
				iLocal_2547[75] = 1;
			}
		}
		if (func_347(&Local_3095, vLocal_2733, 0.001f, 0.001f, 2f, 1, Local_3078[iLocal_2644 /*7*/], "AR1_GOGARAGE", "", "CMN_GENGETBCK", 1, 0, 1, -1))
		{
			iLocal_3166 = 2;
		}
		if (!iLocal_2537)
		{
			if (!is_scripted_conversation_ongoing())
			{
				play_police_report("SCRIPTED_SCANNER_REPORT_ARMENIAN_1_01", 0f);
				iLocal_2537 = 1;
			}
		}
		if (does_blip_exist(Local_3095.f_5))
		{
			if (vdist2(get_entity_coords(player_ped_id(), 1), vLocal_2733) < 10000f)
			{
				request_vehicle_recording(330, sLocal_2784);
				request_vehicle_recording(331, sLocal_2784);
				request_vehicle_recording(332, sLocal_2784);
				request_vehicle_recording(333, sLocal_2784);
				Var0.f_11 = 12;
				Var0.f_31 = 49;
				Var0.f_81 = 2;
				func_225(1, &Var0, 0);
				request_model(Var0);
			}
			iVar98 = is_entity_in_angled_area(player_ped_id(), -58.52349f, -1072.446f, 25.51242f, -47.36769f, -1076.728f, 28.77682f, 14.75f, 0, true, 0);
			iVar99 = is_entity_in_angled_area(player_ped_id(), -11.13597f, -1091.419f, 25.42208f, -24.34815f, -1126.346f, 29.78418f, 13f, 0, true, 0);
			if (iVar98 || iVar99)
			{
				iLocal_2514 = iVar98;
				iLocal_3166 = 2;
			}
			if (((is_entity_in_angled_area(player_ped_id(), -26.30199f, -1092.126f, 25.43398f, -34.19631f, -1089.122f, 28.43427f, 3f, 0, true, 0) || is_entity_in_angled_area(player_ped_id(), -32.19282f, -1086.231f, 25.43401f, -35.28241f, -1094.512f, 28.43435f, 1.5f, 0, true, 0)) || is_entity_in_angled_area(player_ped_id(), -26.85529f, -1088.089f, 25.43394f, -28.94933f, -1094.195f, 28.43419f, 1.5f, 0, true, 0)) || is_entity_in_angled_area(player_ped_id(), -21.09365f, -1085.448f, 25.60689f, -32.26557f, -1081.161f, 28.40192f, 7.75f, 0, true, 0))
			{
				iLocal_2515 = true;
				iLocal_3166 = 2;
			}
		}
		if (!is_scripted_conversation_ongoing())
		{
			func_57(&Local_2967, 1);
		}
		if (is_player_wanted_level_greater(player_id(), 0))
		{
			if (is_vehicle_driveable(Local_3078[iLocal_2644 /*7*/], 0) && is_ped_in_vehicle(player_ped_id(), Local_3078[iLocal_2644 /*7*/], 0))
			{
				if (!is_help_message_being_displayed())
				{
					if (timera() > 3000)
					{
						if (!iLocal_2547[45])
						{
							func_55("AR1_COPHELP1", 13000);
							iLocal_2547[45] = 1;
							flash_wanted_display(1);
						}
						else if (!iLocal_2547[46])
						{
							flash_wanted_display(0);
							func_55("AR1_COPHELP2", 13000);
							iLocal_2547[46] = 1;
						}
						else if (!iLocal_2547[47])
						{
							func_55("AR1_COPHELP2B", 13000);
							iLocal_2547[47] = 1;
						}
						else if (!iLocal_2547[48])
						{
							func_55("AR1_COPHELP3", 13000);
							iLocal_2547[48] = 1;
						}
						else if (!iLocal_2547[49])
						{
							func_55("AR1_DUCKHELP", 13000);
							iLocal_2547[49] = 1;
						}
					}
				}
				if (!iLocal_2547[50])
				{
					if (!func_299(&Local_3095, 0))
					{
						func_239(player_ped_id(), "GENERIC_CURSE_MED", 4);
						iLocal_2547[50] = 1;
					}
				}
			}
			if (is_entity_in_angled_area(player_ped_id(), -21.09365f, -1085.448f, 25.60689f, -32.26557f, -1081.161f, 28.40192f, 7.75f, 0, true, 0))
			{
				func_752(22);
			}
		}
		else
		{
			if (!iLocal_2547[49] && !is_help_message_being_displayed())
			{
				func_55("AR1_DUCKHELP", 13000);
				iLocal_2547[49] = 1;
			}
			if (!iLocal_2517)
			{
				flash_wanted_display(0);
				func_346(0, -1);
				iLocal_2517 = 1;
			}
		}
		if (iLocal_2547[49] && func_47("AR1_DUCKHELP"))
		{
			if (is_control_pressed(0, 73))
			{
				if (get_game_timer() - iLocal_2721 > 500)
				{
					clear_help(1);
				}
			}
			else
			{
				iLocal_2721 = get_game_timer();
			}
		}
		if (!does_blip_exist(Local_3095))
		{
			if (!Local_3093.f_1)
			{
				if (iLocal_2547[49] || !is_player_wanted_level_greater(player_id(), 0))
				{
					if (!iLocal_2547[19])
					{
						if (!is_help_message_being_displayed())
						{
							if (_is_input_disabled(0))
							{
								func_55("AR1_RAGEBAR_KM", 13000);
							}
							else
							{
								func_55("AR1_RAGEBAR", 13000);
							}
							iLocal_2547[19] = 1;
							flash_ability_bar(10000);
						}
					}
				}
				if (is_special_ability_active(player_id()))
				{
					func_345();
					Local_3093.f_1 = 1;
				}
			}
		}
		else
		{
			if (func_47("AR1_RAGEBAR"))
			{
				func_345();
			}
			if (is_pc_version())
			{
				if (func_47("AR1_RAGEBAR_KM"))
				{
					func_345();
				}
			}
		}
		if (iLocal_2932 == 0)
		{
			iLocal_2932 = get_interior_at_coords_with_type(-38.62f, -1099.01f, 27.31f, "v_carshowroom");
		}
		iVar100 = vdist2(get_entity_coords(player_ped_id(), 1), -38.62f, -1099.01f, 27.31f) > 62500f;
		iVar101 = vdist2(get_entity_coords(player_ped_id(), 1), -38.62f, -1099.01f, 27.31f) < 40000f;
		if (iVar101)
		{
			func_188(vLocal_2748, fLocal_2631, 0);
			request_anim_dict(sLocal_2789);
			if (is_interior_ready(iLocal_2932))
			{
				if (!func_344())
				{
					func_316(0);
				}
			}
			else
			{
				_0x2CA429C029CCF247(iLocal_2932);
			}
		}
		else if (iVar100)
		{
			func_316(1);
			func_304(&(iLocal_2809[0]), 1);
			func_304(&(iLocal_2809[1]), 1);
			func_304(&(iLocal_2809[2]), 1);
			func_304(&(iLocal_2809[3]), 1);
			if (does_entity_exist(iLocal_2805))
			{
				if (vdist2(get_entity_coords(player_ped_id(), 1), get_entity_coords(iLocal_2805, 1)) > 40000f)
				{
					func_304(&iLocal_2805, 1);
				}
			}
			remove_anim_dict(sLocal_2789);
			if (is_interior_ready(iLocal_2932))
			{
				unpin_interior(iLocal_2932);
			}
		}
		if (is_vehicle_driveable(Local_3078[iLocal_2644 /*7*/], 0))
		{
			if (vdist2(get_entity_coords(player_ped_id(), 1), get_entity_coords(Local_3078[iLocal_2644 /*7*/], 1)) > 40000f)
			{
				func_752(13);
			}
		}
		if (vdist2(get_entity_coords(player_ped_id(), 1), -26.27152f, -1083.751f, 25.43581f) < 40000f)
		{
			if (!is_new_load_scene_active())
			{
				_new_load_scene_start_safe(-46.17491f, -1105.761f, 26.16539f, 35f, 0);
			}
		}
		else if (vdist2(get_entity_coords(player_ped_id(), 1), -26.27152f, -1083.751f, 25.43581f) > 62500f)
		{
			if (is_new_load_scene_active())
			{
				new_load_scene_stop();
			}
		}
		switch (iLocal_2703)
		{
			case 0:
				if (!is_player_wanted_level_greater(player_id(), 0))
				{
					if (is_audio_scene_active("ARM_1_LOSE_COPS"))
					{
						stop_audio_scene("ARM_1_LOSE_COPS");
					}
					if (!is_audio_scene_active("ARM_1_DRIVE_TO_DEALERSHIP"))
					{
						start_audio_scene("ARM_1_DRIVE_TO_DEALERSHIP");
					}
					iLocal_2703++;
				}
				break;
			}
	}
	if (iLocal_3166 == 2)
	{
		disable_control_action(0, 75, 1);
		iVar102 = 0;
		iVar102 = 0;
		while (iVar102 < iLocal_2922)
		{
			func_236(&(iLocal_2922[iVar102]), 0);
			iVar102++;
		}
		iVar102 = 0;
		while (iVar102 < iLocal_2925)
		{
			func_236(&(iLocal_2925[iVar102]), 0);
			iVar102++;
		}
		remove_anim_dict("map_objects");
		func_353(0);
		func_355(180, 0, 0, 1, 0);
		flash_wanted_display(0);
		func_352(9, 0);
		func_243();
		settimera(0);
		iLocal_2643 = 0;
		iLocal_3166 = 0;
		iLocal_3165 = 7;
	}
	if (iLocal_3166 == 3)
	{
		func_797(7, 1);
	}
}

bool func_344()
{
	if (does_entity_exist(iLocal_2809[0]))
	{
		if (does_entity_exist(iLocal_2809[1]))
		{
			if (does_entity_exist(iLocal_2809[2]))
			{
				if (does_entity_exist(iLocal_2809[3]))
				{
					return true;
				}
			}
		}
	}
	return false;
}

void func_345()
{
	if ((func_47("AR1_RAGEBAR") || func_47("AR1_RAGEHOW")) || func_47("AR1_RAGESTAT"))
	{
		clear_help(1);
	}
	if (is_pc_version())
	{
		if (func_47("AR1_RAGEBAR_KM"))
		{
			clear_help(1);
		}
	}
	flash_ability_bar(0);
}

void func_346(int iParam0, int iParam1)
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

int func_347(int iParam0, vector3 vParam1, vector3 vParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	return func_256(iParam0, vParam1, vParam4, func_287(), func_287(), iParam7, 5, 0, 0, 0, iParam8, sParam9, func_348(), func_348(), func_348(), func_348(), sParam10, 0, iParam12, sParam11, 0, iParam13, iParam14, iParam15, 0, 0, 0, 1, 1065353216);
}

var func_348()
{
	var uVar0;
	
	return uVar0;
}

bool func_349(int iParam0, int iParam1)
{
	if (!does_entity_exist(iLocal_2925[0]))
	{
		request_model(iLocal_2947);
		request_model(iLocal_2948);
		if (has_model_loaded(iLocal_2947) && has_model_loaded(iLocal_2948))
		{
			if (!iParam0)
			{
				if (!iParam1)
				{
					iLocal_2922[0] = create_object(iLocal_2947, -72.785f, -682.29f, 32.77f, 1, true, false);
					iLocal_2922[1] = create_object(iLocal_2947, 25f, -664.5f, 30.76f, 1, true, false);
					set_entity_heading(iLocal_2922[0], 69.743f);
					set_entity_heading(iLocal_2922[1], 339.996f);
					freeze_entity_position(iLocal_2922[0], true);
					freeze_entity_position(iLocal_2922[1], true);
					set_entity_lod_dist(iLocal_2922[0], 250);
					set_entity_lod_dist(iLocal_2922[1], 250);
				}
				iLocal_2925[0] = create_object(iLocal_2948, -72.785f, -682.29f, 32.87f, 1, true, false);
				iLocal_2925[1] = create_object(iLocal_2948, 25f, -664.5f, 30.86f, 1, true, false);
				set_entity_heading(iLocal_2925[0], -110.257f);
				set_entity_heading(iLocal_2925[1], 339.996f);
				freeze_entity_position(iLocal_2925[0], true);
				freeze_entity_position(iLocal_2925[1], true);
				set_entity_lod_dist(iLocal_2925[0], 250);
				set_entity_lod_dist(iLocal_2925[1], 250);
				set_model_as_no_longer_needed(iLocal_2947);
				set_model_as_no_longer_needed(iLocal_2948);
			}
			return true;
		}
	}
	else
	{
		return true;
	}
	return false;
}

void func_350(int iParam0, int iParam1)
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

void func_351(int iParam0)
{
	if (iParam0)
	{
		if (iLocal_2669 == -1)
		{
			iLocal_2669 = _0x918C7B2D2FF3928B(25.40665f, -664.5241f, 30.37865f, 10.39396f, -690.48f, 35.73986f, 19.25f);
		}
		if (iLocal_2670 == -1)
		{
			iLocal_2670 = _0x918C7B2D2FF3928B(14.52216f, -684.6943f, 30.08809f, -85.90411f, -678.752f, 38.47314f, 52.5f);
		}
	}
	else
	{
		if (iLocal_2669 != -1)
		{
			remove_dispatch_spawn_blocking_area(iLocal_2669);
			iLocal_2669 = -1;
		}
		if (iLocal_2670 != -1)
		{
			remove_dispatch_spawn_blocking_area(iLocal_2670);
			iLocal_2670 = -1;
		}
	}
}

void func_352(int iParam0, int iParam1)
{
	if (iParam1)
	{
		set_bit(&Global_25364, iParam0);
	}
	else
	{
		clear_bit(&Global_25364, iParam0);
	}
}

void func_353(int iParam0)
{
	if (iParam0)
	{
		StringCopy(&Global_100210, get_this_script_name(), 24);
		Global_100204 = 1;
	}
	else
	{
		StringCopy(&Global_100210, "NULL", 24);
		Global_100204 = 0;
	}
}

void func_354()
{
	Local_3093 = 99f;
	special_ability_charge_normalized(player_id(), Local_3093 / 100f, 1);
}

void func_355(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (iParam0 != 198)
	{
		if (Global_69489)
		{
			Global_2428492.f_74.f_227[iParam0] = iParam1;
		}
		else
		{
			Global_101154.f_5951.f_227[iParam0] = iParam1;
		}
		Global_32679[iParam0] = iParam2;
		Global_32878[iParam0] = 1;
		func_358(iParam0, iParam3, iParam4, 0);
		func_356(iParam0, iParam1);
	}
}

void func_356(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 12:
			if (iParam1 == 0)
			{
				set_ambient_zone_state_persistent("AZ_PORT_OF_LS_UNDERWATER_CREAKS", 0, 0);
			}
			else
			{
				set_ambient_zone_state_persistent("AZ_PORT_OF_LS_UNDERWATER_CREAKS", 1, 0);
			}
			break;
		
		case 71:
			if (iParam1 != 1)
			{
				set_ambient_zone_list_state_persistent("HEIST_SWEATSHOP_ZONES", 0, 0);
			}
			else
			{
				set_ambient_zone_list_state_persistent("HEIST_SWEATSHOP_ZONES", 1, 0);
			}
			break;
		
		case 65:
			if (iParam1 == 1)
			{
				func_357(0, 0);
			}
			else
			{
				func_357(0, 1);
			}
			break;
		
		case 6:
			if (iParam1 == 1)
			{
				set_ambient_zone_state_persistent("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", 1, 0);
			}
			else
			{
				set_ambient_zone_state_persistent("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", 0, 0);
			}
			break;
		
		case 174:
			if (iParam1 == 2)
			{
				_0xB4BBFD9CD8B3922B("V_CARSHOWROOM_PS_WINDOW_UNBROKEN");
			}
			break;
		
		case 37:
			if (iParam1 == 1)
			{
				set_static_emitter_enabled("TREVOR1_TRAILER_PARK_MAIN_STAGE_RADIO", 0);
				set_static_emitter_enabled("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_01", 0);
				set_static_emitter_enabled("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_02", 0);
				set_static_emitter_enabled("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_03", 0);
			}
			break;
	}
}

void func_357(int iParam0, int iParam1)
{
	if (iParam1)
	{
		set_bit(&Global_99794, iParam0);
	}
	else
	{
		clear_bit(&Global_99794, iParam0);
	}
	Global_99793 = 1;
}

int func_358(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	struct<5> Var3;
	var uVar98;
	int iVar99;
	int iVar100;
	
	iVar0 = false;
	Var3.f_4 = 3;
	Var3.f_8 = 3;
	Var3.f_64 = 3;
	Var3.f_75 = 3;
	Var3.f_91 = 3;
	func_359(&Var3, iParam0);
	if (func_94())
	{
		iVar1 = Global_101154.f_5951.f_227[iParam0];
	}
	else
	{
		iVar1 = Global_2428492.f_74.f_227[iParam0];
	}
	uVar2 = Global_33077[iParam0];
	if (is_ped_injured(player_ped_id()) && !iParam3)
	{
	}
	else
	{
		iVar99 = true;
		if (get_hash_key(get_this_script_name()) != get_hash_key("standard_global_reg"))
		{
			if (iParam2 == 0)
			{
				if (Global_32679[iParam0] && get_distance_between_coords(get_entity_coords(player_ped_id(), 0), Var3, 1) < 200f)
				{
					iVar99 = false;
				}
				if (!is_player_playing(player_id()) || is_ped_being_arrested(player_ped_id()))
				{
					if (!is_screen_faded_out())
					{
						iVar99 = false;
					}
				}
			}
		}
		if (is_new_load_scene_active() && (!is_player_switch_in_progress() || get_player_switch_state() != 5))
		{
			iVar99 = false;
		}
		if (iVar99)
		{
			switch (Var3.f_3)
			{
				case 0:
					if (iVar1 == 2)
					{
					}
					else
					{
						if (Var3.f_4[iVar1] != 0)
						{
							remove_model_hide(Var3, 10f, Var3.f_4[iVar1], false);
						}
						if (Var3.f_4[uVar2] != 0)
						{
							create_model_hide(Var3, 10f, Var3.f_4[uVar2], 1);
						}
						Global_34273[iParam0] = 1;
					}
					iVar0 = true;
					break;
				
				case 1:
					if (iVar1 == 0)
					{
						if (get_hash_key(&(Var3.f_8[1 /*8*/])) != get_hash_key("") && get_hash_key(&(Var3.f_8[1 /*8*/])) != get_hash_key(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (is_ipl_active(&(Var3.f_8[1 /*8*/])))
							{
								remove_ipl(&(Var3.f_8[1 /*8*/]));
							}
						}
						if ((get_hash_key(&(Var3.f_8[2 /*8*/])) != get_hash_key("") && get_hash_key(&(Var3.f_8[2 /*8*/])) != get_hash_key("REMOVE_ALL_STATES")) && get_hash_key(&(Var3.f_8[2 /*8*/])) != get_hash_key(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (is_ipl_active(&(Var3.f_8[2 /*8*/])))
							{
								remove_ipl(&(Var3.f_8[2 /*8*/]));
							}
						}
						if (get_hash_key(&(Var3.f_8[0 /*8*/])) != get_hash_key(""))
						{
							if (!is_ipl_active(&(Var3.f_8[0 /*8*/])))
							{
								request_ipl(&(Var3.f_8[0 /*8*/]));
							}
						}
						if (get_hash_key(&(Var3.f_34)) != get_hash_key(""))
						{
							if (!is_ipl_active(&(Var3.f_34)))
							{
								request_ipl(&(Var3.f_34));
							}
						}
					}
					else if (iVar1 == 1)
					{
						if (get_hash_key(&(Var3.f_34)) != get_hash_key(""))
						{
							if (is_ipl_active(&(Var3.f_34)))
							{
								remove_ipl(&(Var3.f_34));
							}
						}
						if (get_hash_key(&(Var3.f_8[0 /*8*/])) != get_hash_key("") && get_hash_key(&(Var3.f_8[0 /*8*/])) != get_hash_key(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (is_ipl_active(&(Var3.f_8[0 /*8*/])))
							{
								remove_ipl(&(Var3.f_8[0 /*8*/]));
							}
						}
						if ((get_hash_key(&(Var3.f_8[2 /*8*/])) != get_hash_key("") && get_hash_key(&(Var3.f_8[2 /*8*/])) != get_hash_key("REMOVE_ALL_STATES")) && get_hash_key(&(Var3.f_8[2 /*8*/])) != get_hash_key(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (is_ipl_active(&(Var3.f_8[2 /*8*/])))
							{
								remove_ipl(&(Var3.f_8[2 /*8*/]));
							}
						}
						if (get_hash_key(&(Var3.f_8[1 /*8*/])) != get_hash_key(""))
						{
							if (!is_ipl_active(&(Var3.f_8[1 /*8*/])))
							{
								request_ipl(&(Var3.f_8[1 /*8*/]));
							}
						}
					}
					else if (iVar1 == 2)
					{
						if (get_hash_key(&(Var3.f_34)) != get_hash_key(""))
						{
							if (is_ipl_active(&(Var3.f_34)))
							{
								remove_ipl(&(Var3.f_34));
							}
						}
						if (get_hash_key(&(Var3.f_8[0 /*8*/])) != get_hash_key("") && get_hash_key(&(Var3.f_8[0 /*8*/])) != get_hash_key(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (is_ipl_active(&(Var3.f_8[0 /*8*/])))
							{
								remove_ipl(&(Var3.f_8[0 /*8*/]));
							}
						}
						if (get_hash_key(&(Var3.f_8[1 /*8*/])) != get_hash_key("") && get_hash_key(&(Var3.f_8[1 /*8*/])) != get_hash_key(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (is_ipl_active(&(Var3.f_8[1 /*8*/])))
							{
								remove_ipl(&(Var3.f_8[1 /*8*/]));
							}
						}
						if (get_hash_key(&(Var3.f_8[2 /*8*/])) != get_hash_key("") && get_hash_key(&(Var3.f_8[2 /*8*/])) != get_hash_key("REMOVE_ALL_STATES"))
						{
							if (!is_ipl_active(&(Var3.f_8[2 /*8*/])))
							{
								request_ipl(&(Var3.f_8[2 /*8*/]));
							}
						}
					}
					Global_34074[iParam0] = 1;
					Global_34273[iParam0] = 1;
					iVar0 = true;
					break;
				
				case 2:
					iVar100 = get_interior_at_coords_with_type(Var3, &(Var3.f_42));
					if (iVar100 != 0)
					{
						if (get_hash_key(&(Var3.f_50)) != get_hash_key(""))
						{
							if (_is_interior_prop_enabled(iVar100, &(Var3.f_50)))
							{
								_disable_interior_prop(iVar100, &(Var3.f_50));
							}
						}
						if (iVar1 == 0)
						{
							if (get_hash_key(&(Var3.f_8[1 /*8*/])) != get_hash_key(""))
							{
								if (_is_interior_prop_enabled(iVar100, &(Var3.f_8[1 /*8*/])))
								{
									_disable_interior_prop(iVar100, &(Var3.f_8[1 /*8*/]));
								}
							}
							if ((get_hash_key(&(Var3.f_8[2 /*8*/])) != get_hash_key("") && get_hash_key(&(Var3.f_8[2 /*8*/])) != get_hash_key("REMOVE_ALL_STATES")) && get_hash_key(&(Var3.f_8[2 /*8*/])) != get_hash_key(&(Var3.f_8[iVar1 /*8*/])))
							{
								if (_is_interior_prop_enabled(iVar100, &(Var3.f_8[2 /*8*/])))
								{
									_disable_interior_prop(iVar100, &(Var3.f_8[2 /*8*/]));
								}
							}
							if (get_hash_key(&(Var3.f_8[0 /*8*/])) != get_hash_key(""))
							{
								if (!_is_interior_prop_enabled(iVar100, &(Var3.f_8[0 /*8*/])))
								{
									_enable_interior_prop(iVar100, &(Var3.f_8[0 /*8*/]));
								}
							}
						}
						else if (iVar1 == 1)
						{
							if (get_hash_key(&(Var3.f_8[0 /*8*/])) != get_hash_key(""))
							{
								if (_is_interior_prop_enabled(iVar100, &(Var3.f_8[0 /*8*/])))
								{
									_disable_interior_prop(iVar100, &(Var3.f_8[0 /*8*/]));
								}
							}
							if ((get_hash_key(&(Var3.f_8[2 /*8*/])) != get_hash_key("") && get_hash_key(&(Var3.f_8[2 /*8*/])) != get_hash_key("REMOVE_ALL_STATES")) && get_hash_key(&(Var3.f_8[2 /*8*/])) != get_hash_key(&(Var3.f_8[iVar1 /*8*/])))
							{
								if (_is_interior_prop_enabled(iVar100, &(Var3.f_8[2 /*8*/])))
								{
									_disable_interior_prop(iVar100, &(Var3.f_8[2 /*8*/]));
								}
							}
							if (get_hash_key(&(Var3.f_8[1 /*8*/])) != get_hash_key(""))
							{
								if (!_is_interior_prop_enabled(iVar100, &(Var3.f_8[1 /*8*/])))
								{
									_enable_interior_prop(iVar100, &(Var3.f_8[1 /*8*/]));
								}
							}
						}
						else if (iVar1 == 2)
						{
							if (get_hash_key(&(Var3.f_8[0 /*8*/])) != get_hash_key(""))
							{
								if (_is_interior_prop_enabled(iVar100, &(Var3.f_8[0 /*8*/])))
								{
									_disable_interior_prop(iVar100, &(Var3.f_8[0 /*8*/]));
								}
							}
							if (get_hash_key(&(Var3.f_8[1 /*8*/])) != get_hash_key(""))
							{
								if (_is_interior_prop_enabled(iVar100, &(Var3.f_8[1 /*8*/])))
								{
									_disable_interior_prop(iVar100, &(Var3.f_8[1 /*8*/]));
								}
							}
							if (get_hash_key(&(Var3.f_8[2 /*8*/])) != get_hash_key("") && get_hash_key(&(Var3.f_8[2 /*8*/])) != get_hash_key("REMOVE_ALL_STATES"))
							{
								if (!_is_interior_prop_enabled(iVar100, &(Var3.f_8[2 /*8*/])))
								{
									_enable_interior_prop(iVar100, &(Var3.f_8[2 /*8*/]));
								}
							}
						}
						if (iParam1)
						{
							refresh_interior(iVar100);
						}
					}
					Global_34273[iParam0] = 1;
					Global_34074[iParam0] = 1;
					iVar0 = true;
					break;
				
				case 3:
					if (get_distance_between_coords(Var3, get_entity_coords(player_ped_id(), 0), 1) < 250f)
					{
						uVar98 = _0xB48FCED898292E52(Var3, 25f, &(Var3.f_8[0 /*8*/]));
						if (_0x52AF537A0C5B8AAD(uVar98))
						{
							if (iVar1 == 0)
							{
								_0x5C29F698D404C5E1(uVar98, 3);
								Global_34273[iParam0] = 1;
								iVar0 = true;
							}
							else if (iVar1 == 1)
							{
								if ((_0x899BA936634A322E(uVar98) != 6 && _0x899BA936634A322E(uVar98) != 7) && _0x899BA936634A322E(uVar98) != 8)
								{
									_0x5C29F698D404C5E1(uVar98, 10);
									Global_34273[iParam0] = 1;
									iVar0 = true;
								}
							}
							else if (iVar1 == 2)
							{
								iVar0 = true;
							}
						}
					}
					break;
				
				case 4:
					if (iVar1 == 0)
					{
						remove_model_swap(Var3, 50f, Var3.f_4[1], Var3.f_4[0], 0);
						clear_bit(&(Global_32425[iParam0 / 32]), iParam0 % 32);
					}
					else if (iVar1 == 1)
					{
						create_model_swap(Var3, 50f, Var3.f_4[0], Var3.f_4[1], 1);
						set_bit(&(Global_32425[iParam0 / 32]), iParam0 % 32);
					}
					iVar0 = true;
					break;
			}
			if (iVar0)
			{
				Global_32878[iParam0] = 0;
				Global_33077[iParam0] = iVar1;
				if (!func_94())
				{
					if (!Global_33674[iParam0])
					{
						Global_33674[iParam0] = 1;
						Global_33873++;
					}
				}
			}
		}
	}
	return iVar0;
}

bool func_359(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		*uParam0.f_4[iVar0] = 0;
		StringCopy(uParam0.f_8[iVar0 /*8*/], "", 32);
		*uParam0.f_64[iVar0] = 0;
		*uParam0.f_75[iVar0] = 0;
		*uParam0.f_91[iVar0] = 0;
		iVar0++;
	}
	*uParam0 = {0f, 0f, 0f};
	*uParam0.f_3 = 0;
	*uParam0.f_33 = 0;
	StringCopy(uParam0.f_34, "", 32);
	StringCopy(uParam0.f_42, "", 32);
	StringCopy(uParam0.f_50, "", 32);
	*uParam0.f_58 = {0f, 0f, 0f};
	*uParam0.f_61 = {0f, 0f, 0f};
	*uParam0.f_68 = {0f, 0f, 0f};
	*uParam0.f_71 = {0f, 0f, 0f};
	*uParam0.f_74 = 0f;
	*uParam0.f_79 = {0f, 0f, 0f};
	*uParam0.f_82 = {0f, 0f, 0f};
	*uParam0.f_85 = {0f, 0f, 0f};
	*uParam0.f_88 = {0f, 0f, 0f};
	switch (iParam1)
	{
		case 3:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "TRV1_Trail_start", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "TRV1_Trail_end", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "TRV1_Trail_Finish", 32);
			*uParam0.f_33 = 1;
			*uParam0 = {-24.685f, 3032.92f, 40.331f};
			break;
		
		case 4:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "CS3_05_water_grp1", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "CS3_05_water_grp2", 32);
			*uParam0 = {-24.685f, 3032.92f, 40.331f};
			break;
		
		case 0:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "gasstation_ipl_group1", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "gasstation_ipl_group2", 32);
			*uParam0 = {-93.4f, 6410.9f, 36.8f};
			break;
		
		case 1:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "DES_Smash2_startimap", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "DES_Smash2_endimap", 32);
			*uParam0 = {890.3647f, -2367.289f, 28.10582f};
			break;
		
		case 2:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "DES_StiltHouse_imapstart", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "DES_StiltHouse_imapend", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "des_stilthouse_rebuild", 32);
			*uParam0.f_33 = 0;
			*uParam0 = {-1020.5f, 663.41f, 154.75f};
			*uParam0.f_58 = {-1018.913f, 603.2904f, 105.6611f};
			*uParam0.f_61 = {-1038.913f, 639.2904f, 135.6611f};
			*uParam0.f_64[0] = 1;
			*uParam0.f_64[1] = 0;
			break;
		
		case 5:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "bnkheist_apt_norm", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "bnkheist_apt_dest", 32);
			break;
		
		case 196:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "bnkheist_apt_dest_vfx", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "REMOVE_ALL_STATES", 32);
			*uParam0.f_33 = 1;
			break;
		
		case 6:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "crashed_cargoplane", 32);
			break;
		
		case 7:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "prop_jb700_covered", 32);
			*uParam0 = {490.8999f, -1334.068f, 28.3298f};
			break;
		
		case 8:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "prop_entityXF_covered", 32);
			*uParam0 = {490.8999f, -1334.068f, 28.3298f};
			break;
		
		case 9:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "prop_cheetah_covered", 32);
			*uParam0 = {490.8999f, -1334.068f, 28.3298f};
			break;
		
		case 10:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "prop_ztype_covered", 32);
			*uParam0 = {490.8999f, -1334.068f, 28.3298f};
			break;
		
		case 11:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "BH1_48_Killed_Michael", 32);
			break;
		
		case 12:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "cargoship", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "sunkcargoship", 32);
			*uParam0.f_68 = {-162.8918f, -2365.769f, 0f};
			*uParam0.f_71 = {190.75f, 31.25f, 21f};
			*uParam0.f_74 = 0f;
			*uParam0.f_75[0] = 0;
			*uParam0.f_75[1] = 1;
			break;
		
		case 13:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "ship_occ_grp1", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "ship_occ_grp2", 32);
			break;
		
		case 14:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "smboat", 32);
			break;
		
		case 15:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "gasparticle_grp2", 32);
			*uParam0 = {-95.2f, 6411.3f, 31.5f};
			break;
		
		case 16:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "CS1_02_cf_offmission", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "CS1_02_cf_onmission1", 32);
			*uParam0 = {-146.3837f, 6161.5f, 30.2062f};
			break;
		
		case 17:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "CS1_02_cf_onmission2", 32);
			*uParam0 = {-146.3837f, 6161.5f, 30.2062f};
			break;
		
		case 18:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "CS1_02_cf_onmission3", 32);
			*uParam0 = {-146.3837f, 6161.5f, 30.2062f};
			break;
		
		case 19:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "CS1_02_cf_onmission4", 32);
			*uParam0 = {-146.3837f, 6161.5f, 30.2062f};
			break;
		
		case 20:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "jetstealtunnel", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			*uParam0 = {801.7f, -1810.8f, 23.3f};
			break;
		
		case 21:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "Jetsteal_ipl_grp1", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "Jetsteal_ipl_grp2", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "REMOVE_ALL_STATES", 32);
			*uParam0.f_33 = 1;
			*uParam0 = {787.3967f, -1808.858f, 29.8532f};
			*uParam0.f_58 = {814f, -1750f, 20f};
			*uParam0.f_61 = {790f, -1899f, 35f};
			*uParam0.f_64[0] = 1;
			*uParam0.f_64[1] = 0;
			*uParam0.f_64[2] = 0;
			break;
		
		case 22:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "BH1_47_JoshHse_UnBurnt", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "BH1_47_JoshHse_Burnt", 32);
			break;
		
		case 23:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "bh1_47_joshhse_firevfx", 32);
			break;
		
		case 24:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "SC1_30_Keep_Closed", 32);
			break;
		
		case 25:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "triathlon2_VBprops", 32);
			break;
		
		case 26:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "DT1_05_REQUEST", 32);
			*uParam0 = {163.4f, -745.7f, 251f};
			break;
		
		case 27:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "FBI_colPLUG", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			*uParam0 = {74.29f, -736.05f, 46.76f};
			break;
		
		case 28:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "FBI_repair", 32);
			*uParam0 = {74.29f, -736.05f, 46.76f};
			break;
		
		case 29:
			*uParam0.f_3 = 4;
			*uParam0.f_4[0] = joaat("dt1_05_build1_h");
			*uParam0.f_4[1] = joaat("dt1_05_build1_damage");
			*uParam0 = {136.004f, -749.287f, 153.302f};
			break;
		
		case 30:
			*uParam0.f_3 = 4;
			*uParam0.f_4[0] = -112041596;
			*uParam0.f_4[1] = joaat("dt1_05_build1_damage_lod");
			*uParam0 = {136.004f, -749.287f, 153.302f};
			break;
		
		case 31:
			*uParam0.f_3 = 4;
			*uParam0.f_4[0] = -186270611;
			*uParam0.f_4[1] = joaat("dt1_05_damage_slod");
			*uParam0 = {178.534f, -668.835f, 37.2113f};
			break;
		
		case 32:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "FIB_heist_lights", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			*uParam0 = {136.004f, -749.287f, 153.302f};
			break;
		
		case 33:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "FIB_heist_dmg", 32);
			*uParam0 = {136.004f, -749.287f, 153.302f};
			break;
		
		case 34:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "DT1_05_rubble", 32);
			*uParam0 = {74.29f, -736.05f, 46.76f};
			break;
		
		case 35:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "FIBlobbyfake", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "FIBlobby", 32);
			*uParam0 = {105.4557f, -745.4835f, 44.7548f};
			break;
		
		case 36:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "DT1_05_HC_REMOVE", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "DT1_05_HC_REQ", 32);
			*uParam0 = {169f, -670.3f, 41.9f};
			break;
		
		case 37:
			*uParam0.f_3 = 1;
			*uParam0 = {50.2f, 3743.9f, 40.9f};
			*uParam0.f_79 = {16.9757f, 3614.307f, 30.0677f};
			*uParam0.f_82 = {145.2451f, 3748.912f, 49.6958f};
			*uParam0.f_85 = {16.9757f, 3614.307f, 30.0677f};
			*uParam0.f_88 = {145.2451f, 3748.912f, 49.6958f};
			*uParam0.f_91[0] = 0;
			*uParam0.f_91[1] = 1;
			break;
		
		case 38:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "trailerparkA_grp1", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "trailerparkA_grp2", 32);
			*uParam0 = {50.2f, 3743.9f, 40.9f};
			break;
		
		case 39:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "occl_trailerA_grp1", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			*uParam0 = {50.2f, 3743.9f, 40.9f};
			break;
		
		case 40:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "trailerparkB_grp1", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "trailerparkB_grp2", 32);
			*uParam0 = {106.7f, 3732.1f, 40.8f};
			break;
		
		case 41:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "occl_trailerB_grp1", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			*uParam0 = {106.7f, 3732.1f, 40.8f};
			break;
		
		case 42:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "trailerparkC_grp1", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "trailerparkC_grp2", 32);
			*uParam0 = {72.7f, 3695.4f, 42f};
			break;
		
		case 43:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "occl_trailerC_grp1", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			*uParam0 = {72.7f, 3695.4f, 42f};
			break;
		
		case 44:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "trailerparkD_grp1", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "trailerparkD_grp2", 32);
			*uParam0 = {43.8f, 3699.7f, 41.3f};
			break;
		
		case 45:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "occl_trailerD_grp1", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			*uParam0 = {43.8f, 3699.7f, 41.3f};
			break;
		
		case 46:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "trailerparkE_grp1", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "trailerparkE_grp2", 32);
			*uParam0 = {28.5f, 3668f, 40.4f};
			break;
		
		case 47:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "occl_trailerE_grp1", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			*uParam0 = {28.5f, 3668f, 40.4f};
			break;
		
		case 48:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_34, "des_methtrailer", 32);
			StringCopy(uParam0.f_8[0 /*8*/], "methtrailer_grp1", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "methtrailer_grp2", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "methtrailer_grp3", 32);
			*uParam0.f_33 = 1;
			*uParam0 = {29.4838f, 3735.593f, 38.688f};
			*uParam0.f_68 = {31.134f, 3738.783f, 39.062f};
			*uParam0.f_71 = {13.6f, 20f, 8.9f};
			*uParam0.f_74 = 48f;
			*uParam0.f_75[0] = 0;
			*uParam0.f_75[1] = 1;
			*uParam0.f_75[2] = 1;
			break;
		
		case 49:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "occl_meth_grp1", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			*uParam0 = {29.4838f, 3735.593f, 38.688f};
			break;
		
		case 50:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "des_farmhs_startimap", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "des_farmhs_endimap", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "REMOVE_ALL_STATES", 32);
			*uParam0.f_33 = 1;
			*uParam0 = {2450.595f, 4959.929f, 44.2575f};
			*uParam0.f_79 = {2383.756f, 4929.988f, 39.52461f};
			*uParam0.f_82 = {2505.756f, 5023.988f, 67.52461f};
			break;
		
		case 55:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "des_farmhs_start_occl", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "des_farmhs_end_occl", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "", 32);
			*uParam0 = {2450.595f, 4959.929f, 44.2575f};
			break;
		
		case 51:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "farm", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "farm", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "farm_burnt", 32);
			*uParam0.f_33 = 1;
			*uParam0 = {2444.8f, 4976.4f, 50.5f};
			break;
		
		case 52:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "farm_props", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "farm_burnt_props", 32);
			*uParam0.f_33 = 1;
			*uParam0 = {2447.9f, 4973.4f, 47.7f};
			break;
		
		case 53:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "des_farmhouse", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "des_farmhouse", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "REMOVE_ALL_STATES", 32);
			*uParam0.f_33 = 1;
			*uParam0 = {2447.9f, 4973.4f, 47.7f};
			break;
		
		case 54:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "farmint_cap", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "farmint", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "", 32);
			*uParam0 = {2447.9f, 4973.4f, 47.7f};
			break;
		
		case 56:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "tankerexp_grp0", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "tankerexp_grp3", 32);
			*uParam0 = {1676.415f, -1626.37f, 111.4848f};
			break;
		
		case 57:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "tankerexp_grp1", 32);
			*uParam0 = {1676.415f, -1626.37f, 111.4848f};
			break;
		
		case 58:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "tankerexp_grp2", 32);
			*uParam0 = {1676.415f, -1626.37f, 111.4848f};
			break;
		
		case 59:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "DES_tankerexp", 32);
			*uParam0 = {1676.415f, -1626.37f, 111.4848f};
			break;
		
		case 60:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "dockcrane1", 32);
			*uParam0 = {889.3f, -2910.9f, 40f};
			break;
		
		case 61:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "CanyonRvrShallow", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "CanyonRvrDeep", 32);
			*uParam0 = {-1600.619f, 4443.457f, 0.725f};
			break;
		
		case 62:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "Garage_door_locked", 32);
			*uParam0 = {966.1f, -114.8f, 75.2f};
			break;
		
		case 63:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "ch1_02_closed", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "ch1_02_open", 32);
			*uParam0 = {-3086.428f, 339.2523f, 6.3717f};
			break;
		
		case 64:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "ferris_finale_Anim", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			*uParam0 = {-1675.178f, -1143.605f, 12.0175f};
			break;
		
		case 65:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "railing_start", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "railing_end", 32);
			*uParam0 = {-532.1309f, 4526.187f, 88.7955f};
			break;
		
		case 66:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "canyonriver01", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "canyonriver01_traincrash", 32);
			*uParam0 = {-532.1309f, 4526.187f, 88.7955f};
			break;
		
		case 67:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "DT1_05_WOFFM", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "DT1_05_FIB2_Mission", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "DT1_05_WOFFM", 32);
			*uParam0 = {131.29f, -631.22f, 261.85f};
			break;
		
		case 68:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "coronertrash", 32);
			*uParam0 = {233.9f, -1355f, 30.3f};
			break;
		
		case 69:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "Coroner_Int_off", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "Coroner_Int_on", 32);
			*uParam0 = {234.4f, -1355.6f, 40.5f};
			break;
		
		case 70:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "id2_14_pre_no_int", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			*uParam0 = {716.84f, -962.05f, 31.59f};
			break;
		
		case 71:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "id2_14_during1", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "id2_14_during2", 32);
			*uParam0 = {716.84f, -962.05f, 31.59f};
			break;
		
		case 72:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "id2_14_on_fire", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "id2_14_post_no_int", 32);
			*uParam0 = {716.84f, -962.05f, 31.59f};
			break;
		
		case 73:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "id2_14_during_door", 32);
			*uParam0 = {716.84f, -962.05f, 31.59f};
			break;
		
		case 74:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "burnt_switch_off", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			*uParam0 = {716.84f, -962.05f, 31.59f};
			break;
		
		case 75:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "RC12B_Default", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "RC12B_Destroyed", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "RC12B_Fixed", 32);
			*uParam0.f_33 = 0;
			*uParam0 = {330.4596f, -584.8196f, 42.3174f};
			break;
		
		case 76:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "RC12B_HospitalInterior", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			*uParam0.f_33 = 0;
			*uParam0 = {330.4596f, -584.8196f, 42.3174f};
			break;
		
		case 105:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "SM_15_BldGRAF1", 32);
			*uParam0 = {330.4596f, -584.8196f, 42.3174f};
			break;
		
		case 106:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "CH3_RD2_BishopsChickenGraffiti", 32);
			*uParam0 = {1861.28f, 2402.11f, 58.53f};
			break;
		
		case 107:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "FruitBB", 32);
			*uParam0 = {-1327.46f, -274.82f, 54.25f};
			break;
		
		case 108:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "CS5_04_MazeBillboardGraffiti", 32);
			*uParam0 = {2697.32f, 3162.18f, 58.1f};
			break;
		
		case 109:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "CS5_Roads_RonOilGraffiti", 32);
			*uParam0 = {2119.12f, 3058.21f, 53.25f};
			break;
		
		case 110:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "ap1_03_bbrd_dcl", 32);
			*uParam0 = {-804.25f, -2276.88f, 23.59f};
			break;
		
		case 111:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "HW1_02_OldBill", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "HW1_02_NewBill", 32);
			*uParam0 = {296.5f, 173.3f, 100.4f};
			break;
		
		case 112:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "HW1_Emissive_OldBill", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "HW1_Emissive_NewBill", 32);
			*uParam0 = {296.5f, 173.3f, 100.4f};
			break;
		
		case 77:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "", 32);
			*uParam0.f_33 = 1;
			*uParam0 = {480.9554f, -1321.21f, 28.2037f};
			*uParam0.f_85 = {508.3f, -1299.3f, 39.4f};
			*uParam0.f_88 = {459.9f, -1363.2f, 21.4f};
			*uParam0.f_91[0] = 0;
			*uParam0.f_91[1] = 1;
			*uParam0.f_91[2] = 0;
			break;
		
		case 78:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "TrevorsTrailer", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "TrevorsTrailerTrash", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "TrevorsTrailerTidy", 32);
			*uParam0 = {1973f, 3815f, 34f};
			*uParam0.f_33 = 0;
			break;
		
		case 79:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "scafstartimap", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "scafendimap", 32);
			*uParam0 = {-1088.6f, -1650.6f, 6.4f};
			break;
		
		case 80:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "chop_props", 32);
			*uParam0 = {-13.83f, -1455.45f, 31.81f};
			break;
		
		case 113:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "AP1_04_TriAf01", 32);
			*uParam0 = {-1277.629f, -2030.913f, 1.2823f};
			break;
		
		case 114:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "CS2_06_TriAf02", 32);
			*uParam0 = {2384.969f, 4277.583f, 30.379f};
			break;
		
		case 115:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "CS4_04_TriAf03", 32);
			*uParam0 = {1577.881f, 3836.107f, 30.7717f};
			break;
		
		case 87:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "DT1_21_prop_lift_on", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			*uParam0 = {-180.5771f, -1016.928f, 28.2893f};
			break;
		
		case 88:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "jewel2fake", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "post_hiest_unload", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "bh1_16_refurb", 32);
			*uParam0 = {-630.4205f, -236.7843f, 37.057f};
			*uParam0.f_79 = {-623.6868f - 11f, -231.935f - 11f, 40.30703f - 3.25f};
			*uParam0.f_82 = {-623.6868f + 11f, -231.935f + 11f, 40.30703f + 3.25f};
			break;
		
		case 89:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "bh1_16_doors_shut", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "refit_unload", 32);
			*uParam0 = {-583.1606f, -282.3967f, 35.394f};
			break;
		
		case 90:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "v_tunnel_hole_swap", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "v_tunnel_hole", 32);
			*uParam0 = {-14.651f, -604.3639f, 25.1823f};
			break;
		
		case 91:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "cs5_4_trains", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			*uParam0 = {2773.61f, 2835.327f, 35.1903f};
			break;
		
		case 94:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "airfield", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			*uParam0 = {1743.682f, 3286.251f, 40.0875f};
			break;
		
		case 95:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "REMOVE_ALL_STATES", 32);
			*uParam0.f_33 = 1;
			*uParam0 = {1222.9f, 1877.9f, 79.9f};
			*uParam0.f_58 = {1206.8f, 1803f, 43.9f};
			*uParam0.f_61 = {1329f, 2060.4f, 143.9f};
			*uParam0.f_64[0] = 0;
			*uParam0.f_64[1] = 1;
			*uParam0.f_64[2] = 0;
			break;
		
		case 104:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "SC1_01_OldBill", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "SC1_01_NewBill", 32);
			*uParam0 = {-351f, -1324f, 44.02f};
			break;
		
		case 103:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "DT1_17_OldBill", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "DT1_17_NewBill", 32);
			*uParam0 = {391.81f, -962.71f, 41.97f};
			break;
		
		case 102:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "SC1_14_OldBill", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "SC1_14_NewBill", 32);
			*uParam0 = {424.2f, -1944.31f, 33.09f};
			break;
		
		case 92:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "ld_rail_01_track", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			*uParam0 = {2626.374f, 2949.869f, 39.1409f};
			break;
		
		case 93:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "ld_rail_02_track", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			*uParam0 = {2626.374f, 2949.869f, 39.1409f};
			break;
		
		case 118:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "V_Michael_M_items", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "V_Michael_M_moved", 32);
			StringCopy(uParam0.f_42, "V_Michael", 32);
			*uParam0 = {-811.2679f, 179.3344f, 75.7408f};
			break;
		
		case 116:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "V_Michael_D_items", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "V_Michael_D_Moved", 32);
			StringCopy(uParam0.f_42, "V_Michael", 32);
			*uParam0 = {-802.0311f, 172.9131f, 75.7408f};
			break;
		
		case 117:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "V_Michael_S_items", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "V_Michael_S_items_swap", 32);
			StringCopy(uParam0.f_42, "V_Michael", 32);
			*uParam0 = {-808.033f, 172.1309f, 75.7406f};
			break;
		
		case 119:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "V_Michael_L_Items", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "V_Michael_L_Moved", 32);
			StringCopy(uParam0.f_42, "V_Michael", 32);
			*uParam0 = {-808.033f, 172.1309f, 75.7406f};
			break;
		
		case 120:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "V_Michael_M_items_swap", 32);
			StringCopy(uParam0.f_42, "V_Michael", 32);
			*uParam0 = {-808.033f, 172.1309f, 75.7406f};
			break;
		
		case 122:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "V_Michael_FameShame", 32);
			StringCopy(uParam0.f_42, "V_Michael", 32);
			*uParam0 = {-802.0311f, 172.9131f, 75.7408f};
			break;
		
		case 121:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "V_Michael_JewelHeist", 32);
			StringCopy(uParam0.f_42, "V_Michael", 32);
			*uParam0 = {-813.3f, 177.5f, 75.76f};
			break;
		
		case 123:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "Michael_premier", 32);
			StringCopy(uParam0.f_42, "V_Michael", 32);
			*uParam0 = {-813.3f, 177.5f, 75.76f};
			break;
		
		case 124:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "V_Michael_plane_ticket", 32);
			StringCopy(uParam0.f_42, "V_Michael", 32);
			*uParam0 = {-813.3f, 177.5f, 75.76f};
			break;
		
		case 170:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "burgershot_yoga", 32);
			StringCopy(uParam0.f_42, "V_Michael", 32);
			*uParam0 = {-813.3f, 177.5f, 75.76f};
			break;
		
		case 171:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "V_Michael_Scuba", 32);
			StringCopy(uParam0.f_42, "V_Michael_Garage", 32);
			*uParam0 = {-810.5301f, 187.7868f, 71.4786f};
			break;
		
		case 125:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "V_Michael_bed_tidy", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "V_Michael_bed_Messy", 32);
			StringCopy(uParam0.f_42, "V_Michael", 32);
			*uParam0 = {-811.2679f, 179.3344f, 75.7408f};
			break;
		
		case 164:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "Jewel_Gasmasks", 32);
			StringCopy(uParam0.f_42, "V_Sweat", 32);
			*uParam0 = {707.2563f, -965.147f, 29.4179f};
			break;
		
		case 165:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "V_53_Agency _Overalls", 32);
			StringCopy(uParam0.f_42, "V_Sweat", 32);
			*uParam0 = {707.2563f, -965.147f, 29.4179f};
			break;
		
		case 166:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "V_53_Agency_Blueprint", 32);
			StringCopy(uParam0.f_42, "V_Sweat", 32);
			*uParam0 = {707.2563f, -965.147f, 29.4179f};
			break;
		
		case 167:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "V_35_KitBag", 32);
			StringCopy(uParam0.f_42, "V_Sweat", 32);
			*uParam0 = {707.2563f, -965.147f, 29.4179f};
			break;
		
		case 168:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "V_35_Body_Armour", 32);
			StringCopy(uParam0.f_42, "V_Sweat", 32);
			*uParam0 = {707.2563f, -965.147f, 29.4179f};
			break;
		
		case 169:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "V_35_Fireman", 32);
			StringCopy(uParam0.f_42, "V_Sweat", 32);
			*uParam0 = {707.2563f, -965.147f, 29.4179f};
			break;
		
		case 126:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "V_26_Trevor_Helmet1", 32);
			StringCopy(uParam0.f_42, "V_Trailer", 32);
			*uParam0 = {1973.805f, 3818.555f, 32.4363f};
			break;
		
		case 127:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "V_26_Trevor_Helmet3", 32);
			StringCopy(uParam0.f_42, "V_TrailerTRASH", 32);
			*uParam0 = {1973.805f, 3818.555f, 32.4363f};
			break;
		
		case 128:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "V_26_Trevor_Helmet2", 32);
			StringCopy(uParam0.f_42, "V_TrailerTidy", 32);
			*uParam0 = {1973.805f, 3818.555f, 32.4363f};
			break;
		
		case 129:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "V_24_Trevor_Briefcase1", 32);
			StringCopy(uParam0.f_42, "V_Trailer", 32);
			*uParam0 = {1973.805f, 3818.555f, 32.4363f};
			break;
		
		case 130:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "V_24_Trevor_Briefcase3", 32);
			StringCopy(uParam0.f_42, "V_TrailerTRASH", 32);
			*uParam0 = {1973.805f, 3818.555f, 32.4363f};
			break;
		
		case 131:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "V_24_Trevor_Briefcase2", 32);
			StringCopy(uParam0.f_42, "V_TrailerTidy", 32);
			*uParam0 = {1973.805f, 3818.555f, 32.4363f};
			break;
		
		case 132:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "V_26_Michael_Stay1", 32);
			StringCopy(uParam0.f_42, "V_Trailer", 32);
			*uParam0 = {1973.805f, 3818.555f, 32.4363f};
			break;
		
		case 133:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "V_26_Michael_Stay3", 32);
			StringCopy(uParam0.f_42, "V_TrailerTRASH", 32);
			*uParam0 = {1973.805f, 3818.555f, 32.4363f};
			break;
		
		case 134:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "V_26_Michael_Stay2", 32);
			StringCopy(uParam0.f_42, "V_TrailerTidy", 32);
			*uParam0 = {1973.805f, 3818.555f, 32.4363f};
			break;
		
		case 179:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "shutter_open", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "shutter_closed", 32);
			StringCopy(uParam0.f_42, "v_carshowroom", 32);
			*uParam0 = {-30.8793f, -1088.336f, 25.4221f};
			*uParam0.f_68 = {-29.3f, -1086.35f, 25.57f};
			*uParam0.f_71 = {5.5f, 3f, 2f};
			*uParam0.f_74 = -10f;
			*uParam0.f_75[0] = 0;
			*uParam0.f_75[1] = 1;
			break;
		
		case 174:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "csr_beforeMission", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "csr_afterMissionA", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "csr_afterMissionB", 32);
			StringCopy(uParam0.f_50, "csr_inMission", 32);
			*uParam0.f_33 = 0;
			StringCopy(uParam0.f_42, "v_carshowroom", 32);
			*uParam0 = {-59.7936f, -1098.784f, 27.2612f};
			break;
		
		case 175:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "", 32);
			StringCopy(uParam0.f_42, "v_carshowroom", 32);
			*uParam0 = {-49.21f, -1090.28f, 25.42f};
			*uParam0.f_68 = {-49.21f, -1090.28f, 25.42f};
			*uParam0.f_71 = {2.5f, 3f, 3f};
			*uParam0.f_74 = 0f;
			*uParam0.f_75[0] = 0;
			*uParam0.f_75[1] = 1;
			*uParam0.f_75[2] = 0;
			break;
		
		case 176:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "", 32);
			StringCopy(uParam0.f_42, "v_carshowroom", 32);
			*uParam0 = {-49.28f, -1092.66f, 25.42f};
			*uParam0.f_68 = {-49.28f, -1092.66f, 25.42f};
			*uParam0.f_71 = {3f, 1f, 3f};
			*uParam0.f_74 = 0f;
			*uParam0.f_75[0] = 0;
			*uParam0.f_75[1] = 1;
			*uParam0.f_75[2] = 0;
			break;
		
		case 177:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "", 32);
			StringCopy(uParam0.f_42, "v_carshowroom", 32);
			*uParam0 = {-53.07f, -1096.73f, 25.5f};
			*uParam0.f_68 = {-53.07f, -1096.73f, 25.5f};
			*uParam0.f_71 = {1f, 3f, 2f};
			*uParam0.f_74 = -45f;
			*uParam0.f_75[0] = 0;
			*uParam0.f_75[1] = 1;
			*uParam0.f_75[2] = 0;
			break;
		
		case 178:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "carshowroom_broken", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "carshowroom_boarded", 32);
			*uParam0.f_33 = 0;
			*uParam0 = {-59.7936f, -1098.784f, 27.2612f};
			break;
		
		case 173:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "shr_int", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "fakeint", 32);
			*uParam0.f_33 = 0;
			*uParam0 = {-59.7936f, -1098.784f, 27.2612f};
			break;
		
		case 180:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "DT1_03_Shutter", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			StringCopy(uParam0.f_42, "", 32);
			*uParam0 = {23.9346f, -669.7552f, 30.8853f};
			break;
		
		case 181:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "Hospitaldoorsanim", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "Hospitaldoorsfixed", 32);
			StringCopy(uParam0.f_42, "v_hospital", 32);
			*uParam0.f_33 = 0;
			*uParam0 = {300.9423f, -586.1784f, 42.2919f};
			break;
		
		case 135:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "swap_clean_apt", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "layer_mess_A", 32);
			StringCopy(uParam0.f_42, "v_trevors", 32);
			*uParam0 = {-1157.129f, -1523.028f, 9.6327f};
			break;
		
		case 136:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "layer_mess_B", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "", 32);
			StringCopy(uParam0.f_42, "v_trevors", 32);
			*uParam0 = {-1157.129f, -1523.028f, 9.6327f};
			break;
		
		case 137:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "layer_mess_C", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "", 32);
			StringCopy(uParam0.f_42, "v_trevors", 32);
			*uParam0 = {-1157.129f, -1523.028f, 9.6327f};
			break;
		
		case 138:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "layer_sextoys_a", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "", 32);
			StringCopy(uParam0.f_42, "v_trevors", 32);
			*uParam0 = {-1157.129f, -1523.028f, 9.6327f};
			break;
		
		case 139:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "layer_wade_shit", 32);
			StringCopy(uParam0.f_42, "v_trevors", 32);
			*uParam0 = {-1157.129f, -1523.028f, 9.6327f};
			break;
		
		case 140:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "swap_wade_sofa_A", 32);
			StringCopy(uParam0.f_42, "v_trevors", 32);
			*uParam0 = {-1157.129f, -1523.028f, 9.6327f};
			break;
		
		case 141:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "layer_debra_pic", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			StringCopy(uParam0.f_42, "v_trevors", 32);
			*uParam0 = {-1157.129f, -1523.028f, 9.6327f};
			break;
		
		case 142:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "layer_torture", 32);
			StringCopy(uParam0.f_42, "v_trevors", 32);
			*uParam0 = {-1157.129f, -1523.028f, 9.6327f};
			break;
		
		case 143:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "swap_sofa_A", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "swap_sofa_B", 32);
			StringCopy(uParam0.f_42, "v_trevors", 32);
			*uParam0 = {-1157.129f, -1523.028f, 9.6327f};
			break;
		
		case 144:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "layer_whiskey", 32);
			StringCopy(uParam0.f_42, "v_trevors", 32);
			*uParam0 = {-1157.129f, -1523.028f, 9.6327f};
			break;
		
		case 145:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "swap_mrJam_A", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "swap_mrJam_B", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "", 32);
			StringCopy(uParam0.f_42, "v_trevors", 32);
			*uParam0 = {-1157.129f, -1523.028f, 9.6327f};
			break;
		
		case 146:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "swap_mrJam_C", 32);
			StringCopy(uParam0.f_42, "v_trevors", 32);
			*uParam0 = {-1157.129f, -1523.028f, 9.6327f};
			break;
		
		case 147:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "vb_30_emissive", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "vb_30_murder", 32);
			*uParam0.f_33 = 0;
			*uParam0 = {-1150.039f, -1521.761f, 9.6331f};
			break;
		
		case 148:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "vb_30_crimetape", 32);
			*uParam0.f_33 = 0;
			*uParam0 = {-1150.039f, -1521.761f, 9.6331f};
			break;
		
		case 149:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "sheriff_cap", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			*uParam0.f_33 = 0;
			*uParam0 = {1856.029f, 3682.998f, 33.2675f};
			break;
		
		case 150:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "CS1_16_Sheriff_Cap", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			*uParam0.f_33 = 0;
			*uParam0 = {-440.5073f, 6018.766f, 30.49f};
			break;
		
		case 151:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "ufo", 32);
			*uParam0.f_33 = 0;
			*uParam0 = {487.31f, 5588.386f, 793.0532f};
			break;
		
		case 152:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "ufo_eye", 32);
			*uParam0.f_33 = 0;
			*uParam0 = {487.31f, 5588.386f, 793.0532f};
			break;
		
		case 153:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "V_57_FranklinStuff", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "V_57_Franklin_LEFT", 32);
			StringCopy(uParam0.f_42, "v_franklins", 32);
			*uParam0 = {-13.9623f, -1440.614f, 30.1015f};
			break;
		
		case 154:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "V_57_GangBandana", 32);
			StringCopy(uParam0.f_42, "v_franklins", 32);
			*uParam0 = {-13.9623f, -1440.614f, 30.1015f};
			break;
		
		case 155:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "V_57_Safari", 32);
			StringCopy(uParam0.f_42, "v_franklins", 32);
			*uParam0 = {-13.9623f, -1440.614f, 30.1015f};
			break;
		
		case 172:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "V_19_Trevor_Mess", 32);
			StringCopy(uParam0.f_42, "v_strip3", 32);
			*uParam0 = {96.4811f, -1291.294f, 28.2688f};
			break;
		
		case 182:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "", 32);
			*uParam0.f_33 = 0;
			*uParam0 = {139.5795f, -3092.962f, 8.64631f};
			*uParam0.f_79 = {Vector(8.64631f, -3092.962f, 139.5795f) - Vector(4.1875f, 24f, 33.3125f)};
			*uParam0.f_82 = {Vector(8.64631f, -3092.962f, 139.5795f) + Vector(4.1875f, 24f, 33.3125f)};
			*uParam0.f_85 = {Vector(8.64631f, -3092.962f, 139.5795f) - Vector(4.1875f, 24f, 33.3125f)};
			*uParam0.f_88 = {Vector(8.64631f, -3092.962f, 139.5795f) + Vector(4.1875f, 24f, 33.3125f)};
			*uParam0.f_91[0] = 0;
			*uParam0.f_91[1] = 1;
			*uParam0.f_91[2] = 1;
			break;
		
		case 183:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "", 32);
			*uParam0.f_33 = 0;
			*uParam0 = {203.7784f, -3131.767f, 7.041344f};
			*uParam0.f_79 = {Vector(7.041344f, -3131.767f, 203.7784f) - Vector(2.5625f, 2.75f, 4.875f)};
			*uParam0.f_82 = {Vector(7.041344f, -3131.767f, 203.7784f) + Vector(2.5625f, 2.75f, 4.875f)};
			break;
		
		case 184:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "", 32);
			*uParam0.f_33 = 0;
			*uParam0 = {144.7706f, -2982.659f, 7.952507f};
			*uParam0.f_79 = {Vector(7.952507f, -2982.659f, 144.7706f) - Vector(3.125f, 3.4375f, 5.3125f)};
			*uParam0.f_82 = {Vector(7.952507f, -2982.659f, 144.7706f) + Vector(3.125f, 3.4375f, 5.3125f)};
			break;
		
		case 185:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "", 32);
			*uParam0.f_33 = 1;
			*uParam0 = {-1154.965f, -1520.983f, 9.132731f};
			*uParam0.f_79 = {-1154.965f, -1520.983f, 9.132731f};
			*uParam0.f_82 = {-1158.965f, -1524.983f, 11.63273f};
			break;
		
		case 187:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "", 32);
			*uParam0.f_33 = 1;
			*uParam0 = {-1052.204f, 371.9537f, 67.914f};
			*uParam0.f_79 = {-1052.204f, 371.9537f, 67.914f};
			*uParam0.f_82 = {-1048.064f, 368.0221f, 70.9128f};
			break;
		
		case 186:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "", 32);
			*uParam0.f_33 = 1;
			*uParam0 = {1954.984f, 3792.991f, 30.3086f};
			*uParam0.f_79 = {1954.984f, 3792.991f, 30.3086f};
			*uParam0.f_82 = {1983.45f, 3830.78f, 36.2726f};
			break;
		
		case 188:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "", 32);
			*uParam0.f_33 = 1;
			*uParam0 = {-1122.202f, 48.5724f, 51.4652f};
			*uParam0.f_79 = {-1122.202f, 48.5724f, 51.4652f};
			*uParam0.f_82 = {-1076.233f, 92.1041f, 60.0617f};
			break;
		
		case 81:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "KorizTempWalls", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "", 32);
			*uParam0.f_33 = 0;
			*uParam0 = {-2199.138f, 223.4648f, 181.1118f};
			break;
		
		case 82:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "mic3_chopper_debris", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "", 32);
			*uParam0.f_33 = 0;
			*uParam0 = {-2242.785f, 263.4779f, 173.6154f};
			break;
		
		case 83:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "chemgrill_grp1", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			*uParam0 = {3832.9f, 3665.5f, -23.4f};
			break;
		
		case 84:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "Plane_crash_trench", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "", 32);
			*uParam0.f_33 = 0;
			*uParam0 = {2814.7f, 4758.5f, 47.9f};
			break;
		
		case 85:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "golfflags", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			*uParam0 = {-1096.505f, 4.5754f, 49.8103f};
			break;
		
		case 86:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "yogagame", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			*uParam0 = {-781.6566f, 186.8937f, 71.8352f};
			break;
		
		case 189:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "Carwash_with_spinners", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "Carwash_without_spinners", 32);
			*uParam0.f_33 = 0;
			*uParam0 = {55.7f, -1391.3f, 30.5f};
			break;
		
		case 190:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "KT_CarWash", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "KT_CarWash_NoBrush", 32);
			*uParam0.f_33 = 0;
			*uParam0 = {700.091f, -933.641f, 20.308f};
			break;
		
		case 191:
			*uParam0.f_3 = 1;
			*uParam0 = {-1096.381f, -836.17f, 36.6755f};
			*uParam0.f_85 = {*uParam0 - Vector(25f, 25f, 15f)};
			*uParam0.f_88 = {*uParam0 + Vector(25f, 25f, 15f)};
			*uParam0.f_91[0] = 1;
			*uParam0.f_91[1] = 0;
			break;
		
		case 192:
			*uParam0.f_3 = 1;
			*uParam0 = {449.6558f, -980.1375f, 42.6918f};
			*uParam0.f_85 = {*uParam0 - Vector(25f, 25f, 15f)};
			*uParam0.f_88 = {*uParam0 + Vector(25f, 25f, 15f)};
			*uParam0.f_91[0] = 1;
			*uParam0.f_91[1] = 0;
			break;
		
		case 193:
			*uParam0.f_3 = 1;
			*uParam0 = {363.0175f, -1598.079f, 35.9502f};
			*uParam0.f_85 = {*uParam0 - Vector(25f, 25f, 15f)};
			*uParam0.f_88 = {*uParam0 + Vector(25f, 25f, 15f)};
			*uParam0.f_91[0] = 1;
			*uParam0.f_91[1] = 0;
			break;
		
		case 194:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "CS3_07_MPGates", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "", 32);
			*uParam0 = {-1601.424f, 2808.213f, 16.2598f};
			break;
		
		case 97:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "DT1_03_Gr_Closed", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			*uParam0 = {23.7318f, -647.2123f, 37.9549f};
			break;
		
		case 98:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "FINBANK", 32);
			*uParam0 = {12.9689f, -648.4698f, 9.7693f};
			break;
		
		case 99:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "PAPER1_RCM_ALT", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "PAPER1_RCM", 32);
			*uParam0 = {-1459.127f, 486.1281f, 115.2016f};
			break;
		
		case 100:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "SP1_10_fake_interior", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "SP1_10_real_interior", 32);
			*uParam0 = {-248.4916f, -2010.509f, 34.5743f};
			break;
		
		case 101:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "facelobbyfake", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "facelobby", 32);
			*uParam0 = {-1081.347f, -263.1502f, 38.7152f};
			break;
		
		case 195:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "atriumglstatic", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "atriumglmission", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "atriumglcut", 32);
			*uParam0 = {136.1795f, -750.701f, 262.0516f};
			break;
		
		case 197:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "racetrack01", 32);
			*uParam0 = {2096f, 3168.7f, 42.9f};
			break;
	}
	switch (iParam1)
	{
		case 156:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "showhome_only", 32);
			StringCopy(uParam0.f_42, "v_franklinshouse", 32);
			*uParam0 = {7.0256f, 537.3075f, 175.0281f};
			break;
		
		case 157:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "franklin_unpacking", 32);
			StringCopy(uParam0.f_42, "v_franklinshouse", 32);
			*uParam0 = {7.0256f, 537.3075f, 175.0281f};
			break;
		
		case 158:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "franklin_settled", 32);
			StringCopy(uParam0.f_42, "v_franklinshouse", 32);
			*uParam0 = {7.0256f, 537.3075f, 175.0281f};
			break;
		
		case 163:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "progress_tshirt", 32);
			StringCopy(uParam0.f_42, "v_franklinshouse", 32);
			*uParam0 = {7.0256f, 537.3075f, 175.0281f};
			break;
		
		case 159:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "bong_and_wine", 32);
			StringCopy(uParam0.f_42, "v_franklinshouse", 32);
			*uParam0 = {7.0256f, 537.3075f, 175.0281f};
			break;
		
		case 161:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "progress_flyer", 32);
			StringCopy(uParam0.f_42, "v_franklinshouse", 32);
			*uParam0 = {7.0256f, 537.3075f, 175.0281f};
			break;
		
		case 162:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "progress_tux", 32);
			StringCopy(uParam0.f_42, "v_franklinshouse", 32);
			*uParam0 = {7.0256f, 537.3075f, 175.0281f};
			break;
		
		case 160:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "locked", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "unlocked", 32);
			StringCopy(uParam0.f_42, "v_franklinshouse", 32);
			*uParam0 = {7.0256f, 537.3075f, 175.0281f};
			break;
		
		case 96:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "chophillskennel", 32);
			*uParam0 = {19.0568f, 536.4818f, 169.6277f};
			break;
	}
	return true;
}

void func_360()
{
	vector3 vVar0;
	Vector3 fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	var uVar7;
	
	vVar0 = {39.0428f, -638.7694f, 30.6267f};
	fVar3 = 335.0152f;
	if (iLocal_2645 == 0)
	{
		vVar0 = {39.3644f, -638.0751f, 30.6267f};
		fVar3 = 335.0097f;
	}
	if (iLocal_3166 == 4)
	{
		if (iLocal_2643 != 99)
		{
			if (iLocal_2535)
			{
				func_234(vVar0, fVar3, 0, 0);
				iLocal_2643 = 99;
			}
			else
			{
				set_entity_coords(player_ped_id(), vVar0, 1, false, 0, 1);
				freeze_entity_position(player_ped_id(), true);
				load_scene(vVar0);
				freeze_entity_position(player_ped_id(), false);
				iLocal_2643 = 99;
			}
		}
		else
		{
			func_318();
			if ((func_229(vVar0 + Vector(3f, 1f, 0f), 0, 0) && func_315(vVar0, 0)) && func_314(vVar0 + Vector(0f, 3f, 0f), 0))
			{
				func_185(0, -1, 0);
				func_342();
				func_387();
				func_308();
				func_386();
				func_354();
				func_385();
				special_ability_reset(player_id());
				if (is_vehicle_driveable(Local_3078[iLocal_2645 /*7*/], 0))
				{
					_0x153973AB99FE8980(Local_3078[iLocal_2645 /*7*/], "ARM_1_LAMARS_CAR", 0f);
				}
				iLocal_2509 = true;
				iLocal_3166 = 0;
			}
		}
	}
	if (iLocal_3166 == 0)
	{
		request_vehicle_recording(iLocal_2646, sLocal_2784);
		request_vehicle_recording(iLocal_2647, sLocal_2784);
		request_vehicle_recording(iLocal_2648, sLocal_2784);
		request_vehicle_recording(300, sLocal_2784);
		request_model(joaat("police3"));
		request_model(joaat("s_m_y_cop_01"));
		request_anim_dict("map_objects");
		request_anim_dict(sLocal_2790);
		if (((((((((func_349(1, 0) && has_vehicle_recording_been_loaded(iLocal_2646, sLocal_2784)) && has_vehicle_recording_been_loaded(iLocal_2647, sLocal_2784)) && has_vehicle_recording_been_loaded(iLocal_2648, sLocal_2784)) && has_vehicle_recording_been_loaded(300, sLocal_2784)) && has_model_loaded(joaat("police3"))) && has_model_loaded(joaat("s_m_y_cop_01"))) && has_anim_dict_loaded("map_objects")) && has_anim_dict_loaded(sLocal_2790)) && (iLocal_2509 || (!iLocal_2509 && timerb() > 1000)))
		{
			if (is_vehicle_driveable(Local_3078[iLocal_2645 /*7*/], 0))
			{
				freeze_entity_position(Local_3078[iLocal_2645 /*7*/], false);
				if (is_playback_going_on_for_vehicle(Local_3078[iLocal_2645 /*7*/]))
				{
					stop_playback_recorded_vehicle(Local_3078[iLocal_2645 /*7*/]);
				}
				if (iLocal_2645 == 1)
				{
					remove_vehicle_recording(5, sLocal_2784);
				}
				else
				{
					remove_vehicle_recording(5, sLocal_2784);
				}
				set_vehicle_indicator_lights(Local_3078[iLocal_2645 /*7*/], 0, 0);
				set_vehicle_indicator_lights(Local_3078[iLocal_2645 /*7*/], 1, 0);
			}
			func_367(0, 1);
			func_366();
			func_304(&iLocal_2804, 0);
			set_current_ped_weapon(player_ped_id(), joaat("weapon_unarmed"), false);
			func_236(&iLocal_2902, 0);
			func_57(&vLocal_3062, 1);
			if (iLocal_2935 != 0)
			{
				unpin_interior(iLocal_2935);
				iLocal_2935 = 0;
			}
			if (!is_ped_injured(Local_2967))
			{
				clear_ped_secondary_task(Local_2967);
				clear_ped_secondary_task(player_ped_id());
				set_ped_can_play_ambient_anims(Local_2967, 0);
				set_ped_can_play_ambient_base_anims(Local_2967, 0);
				task_look_at_entity(player_ped_id(), Local_2967, 20000, 2096, 4);
				task_look_at_entity(Local_2967, player_ped_id(), 20000, 2096, 4);
			}
			func_349(0, 0);
			play_entity_anim(iLocal_2922[1], "p_sec_gate_01_s_close", "map_objects", 4f, false, 1, 0, 0f, 0);
			force_entity_ai_and_animation_update(iLocal_2922[1]);
			set_entity_visible(iLocal_2922[1], false, 0);
			set_entity_collision(iLocal_2925[0], false, 0);
			set_entity_collision(iLocal_2925[1], false, 0);
			clear_prints();
			clear_help(1);
			func_69();
			set_player_control(player_id(), false, 0);
			set_create_random_cops(false);
			clear_area(44.4942f, -634.8408f, 34.55825f, 200f, 1, 0, 0, false);
			iLocal_2803 = create_vehicle(joaat("police3"), 7.542f, -578.0831f, 36.6983f, 336.2658f, 1, 1);
			set_vehicle_engine_on(iLocal_2803, true, 1, 0);
			set_model_as_no_longer_needed(joaat("police3"));
			iLocal_2841[0] = create_ped_inside_vehicle(iLocal_2803, 6, joaat("s_m_y_cop_01"), -1, 1, true);
			give_weapon_to_ped(iLocal_2841[0], joaat("weapon_pistol"), -1, false, true);
			set_ped_combat_attributes(iLocal_2841[0], 2, false);
			iLocal_2841[1] = create_ped_inside_vehicle(iLocal_2803, 6, joaat("s_m_y_cop_01"), false, 1, true);
			give_weapon_to_ped(iLocal_2841[1], joaat("weapon_pistol"), -1, false, true);
			set_ped_combat_attributes(iLocal_2841[1], 2, false);
			set_model_as_no_longer_needed(joaat("s_m_y_cop_01"));
			set_frontend_radio_active(0);
			if (is_vehicle_driveable(Local_3078[iLocal_2644 /*7*/], 0))
			{
				set_vehicle_doors_shut(Local_3078[iLocal_2644 /*7*/], 1);
				roll_down_windows(Local_3078[iLocal_2644 /*7*/]);
				lower_convertible_roof(Local_3078[iLocal_2644 /*7*/], 1);
				if (!is_ped_sitting_in_vehicle(player_ped_id(), Local_3078[iLocal_2644 /*7*/]))
				{
					clear_ped_tasks_immediately(player_ped_id());
					set_ped_into_vehicle(player_ped_id(), Local_3078[iLocal_2644 /*7*/], -1);
				}
			}
			stop_audio_scenes();
			release_named_script_audio_bank("CAR_CRASHES_01");
			release_named_script_audio_bank("CAR_CRASHES_MED_01");
			if (iLocal_2509)
			{
				fVar4 = func_364(get_entity_coords(Local_3078[iLocal_2644 /*7*/], 1), iLocal_2648, sLocal_2784, 20);
				fVar5 = func_364(get_entity_coords(Local_3078[iLocal_2645 /*7*/], 1), iLocal_2647, sLocal_2784, 20);
				if (fVar4 < 1000f)
				{
					fVar4 = 1000f;
				}
				if (fVar5 < 1000f)
				{
					fVar5 = 1000f;
				}
				if (absf(fVar5 - fVar4) < 750f)
				{
					if (fVar5 - fVar4 > 0f)
					{
						fVar5 += 500f;
					}
					else
					{
						fVar4 += 500f;
					}
				}
				if (iLocal_2493)
				{
					if (is_vehicle_driveable(Local_3078[iLocal_2645 /*7*/], 0))
					{
						start_playback_recorded_vehicle(Local_3078[iLocal_2645 /*7*/], iLocal_2647, sLocal_2784, 1);
						if (is_screen_faded_out())
						{
							func_341(&(Local_3078[iLocal_2645 /*7*/]), 2500f);
						}
						else
						{
							func_341(&(Local_3078[iLocal_2645 /*7*/]), fVar5);
						}
						_0x1F2E4E06DEA8992B(Local_3078[iLocal_2645 /*7*/], 1);
						_0xDFFCEF48E511DB48(Local_3078[iLocal_2645 /*7*/], 1);
						play_sound_from_entity(-1, "Lamar_Throttle_Blip", Local_3078[iLocal_2645 /*7*/], 0, 0, 0);
					}
					if (is_vehicle_driveable(Local_3078[iLocal_2644 /*7*/], 0))
					{
						start_playback_recorded_vehicle(Local_3078[iLocal_2644 /*7*/], iLocal_2648, sLocal_2784, 1);
						if (is_screen_faded_out())
						{
							func_341(&(Local_3078[iLocal_2644 /*7*/]), 1500f);
						}
						else
						{
							func_341(&(Local_3078[iLocal_2644 /*7*/]), fVar4);
						}
						_0x1F2E4E06DEA8992B(Local_3078[iLocal_2644 /*7*/], 1);
						play_sound_from_entity(-1, "Franklin_Throttle_Blip", Local_3078[iLocal_2644 /*7*/], 0, 0, 0);
					}
				}
				else
				{
					if (is_vehicle_driveable(Local_3078[iLocal_2645 /*7*/], 0))
					{
						start_playback_recorded_vehicle(Local_3078[iLocal_2645 /*7*/], iLocal_2647, sLocal_2784, 1);
						func_341(&(Local_3078[iLocal_2645 /*7*/]), get_total_duration_of_vehicle_recording(iLocal_2647, sLocal_2784) - 200f);
						_0x1F2E4E06DEA8992B(Local_3078[iLocal_2645 /*7*/], 1);
						_0xDFFCEF48E511DB48(Local_3078[iLocal_2645 /*7*/], 1);
					}
					if (is_vehicle_driveable(Local_3078[iLocal_2644 /*7*/], 0))
					{
						start_playback_recorded_vehicle(Local_3078[iLocal_2644 /*7*/], iLocal_2648, sLocal_2784, 1);
						if (is_screen_faded_out())
						{
							func_341(&(Local_3078[iLocal_2644 /*7*/]), 1500f);
						}
						else
						{
							func_341(&(Local_3078[iLocal_2644 /*7*/]), fVar4);
						}
						_0x1F2E4E06DEA8992B(Local_3078[iLocal_2644 /*7*/], 1);
						play_sound_from_entity(-1, "Franklin_Throttle_Blip", Local_3078[iLocal_2644 /*7*/], 0, 0, 0);
					}
					if (!is_ped_injured(Local_2967))
					{
						task_look_at_coord(Local_2967, get_offset_from_entity_in_world_coords(Local_3078[iLocal_2645 /*7*/], -2.5729f, 0.4432f, 0.4889f), 20000, 2096, 4);
					}
				}
				iLocal_2885 = create_cam("DEFAULT_SCRIPTED_CAMERA", true);
				if (iLocal_2523)
				{
					set_cam_params(iLocal_2885, 43.50769f, -636.9529f, 31.88593f, -5.839731f, -0.072286f, 141.0281f, 28.4257f, false, 1, 1, 2);
					set_cam_params(iLocal_2885, 43.44817f, -636.9048f, 31.88602f, -5.839731f, -0.072286f, 141.0281f, 28.4257f, 6500, 0, 0, 2);
				}
				else
				{
					set_cam_params(iLocal_2885, 44.4942f, -634.8408f, 34.55825f, -9.333186f, 0.007438f, 141.6949f, 34.99998f, false, 1, 1, 2);
					set_cam_params(iLocal_2885, 45.33989f, -634.41f, 31.49674f, -1.446978f, -0.011956f, 131.2897f, 34.99998f, 4500, 3, 3, 2);
				}
				shake_cam(iLocal_2885, "HAND_SHAKE", 0.05f);
				render_script_cams(true, false, 3000, 1, 0, 0);
				display_radar(false);
				display_hud(false);
				func_60(1, 1, 1, 0);
			}
			if (is_vehicle_driveable(Local_3078[iLocal_2644 /*7*/], 0))
			{
				set_entity_can_be_damaged(Local_3078[iLocal_2644 /*7*/], 0);
				set_entity_invincible(Local_3078[iLocal_2644 /*7*/], true);
				_0x1AA8A837D2169D94(Local_3078[iLocal_2644 /*7*/], 1);
				if (is_vehicle_driveable(Local_3078[iLocal_2645 /*7*/], 0))
				{
					if (vdist2(get_entity_coords(Local_3078[iLocal_2645 /*7*/], 1), 40.40989f, -635.81f, 31.09674f) > vdist2(get_entity_coords(Local_3078[iLocal_2644 /*7*/], 1), 40.40989f, -635.81f, 31.09674f))
					{
						func_363(5);
					}
				}
			}
			special_ability_deactivate(player_id());
			start_audio_scene("ARM_1_COPS_ARRIVE");
			func_56();
			settimerb(0);
			settimera(0);
			Local_2967.f_2 = 0;
			_0x48621C9FCA3EBD28(4);
			iLocal_2679 = -1;
			iLocal_2530 = false;
			iLocal_2544 = 0;
			iLocal_2643 = 0;
			iLocal_3166 = 1;
		}
	}
	if (iLocal_3166 == 1)
	{
		func_362(1);
		if (is_synchronized_scene_running(iLocal_2679))
		{
			fVar6 = get_synchronized_scene_phase(iLocal_2679);
		}
		if (!is_entity_dead(Local_3078[iLocal_2645 /*7*/], 0))
		{
			_0x97CE68CB032583F0(Local_3078[iLocal_2645 /*7*/], 1);
		}
		if (!is_entity_dead(Local_3078[iLocal_2644 /*7*/], 0))
		{
			_0x97CE68CB032583F0(Local_3078[iLocal_2644 /*7*/], 1);
		}
		if (!is_entity_visible(iLocal_2922[1]))
		{
			if (timerb() > 10)
			{
				set_entity_visible(iLocal_2922[1], true, 0);
			}
		}
		switch (iLocal_2643)
		{
			case 0:
				if (!iLocal_2547[43])
				{
					if (iLocal_2494)
					{
						if (iLocal_2495)
						{
							if (func_337(&Local_3169, "ARM1AUD", "ARM1_DISS4", 7, 0, 0, 0, 0))
							{
								iLocal_2547[43] = 1;
							}
						}
						else if (func_337(&Local_3169, "ARM1AUD", "ARM1_DISS3", 7, 0, 0, 0, 0))
						{
							iLocal_2547[43] = 1;
						}
					}
					else if (iLocal_2493)
					{
						if (func_337(&Local_3169, "ARM1AUD", "ARM1_DISS1", 7, 0, 0, 0, 0))
						{
							iLocal_2547[43] = 1;
						}
					}
					else if (func_337(&Local_3169, "ARM1AUD", "ARM1_DISS2", 7, 0, 0, 0, 0))
					{
						iLocal_2547[43] = 1;
					}
				}
				if (iLocal_2509)
				{
					if (is_vehicle_driveable(Local_3078[iLocal_2645 /*7*/], 0))
					{
						if (is_playback_going_on_for_vehicle(Local_3078[iLocal_2645 /*7*/]))
						{
							if (get_total_duration_of_vehicle_recording(iLocal_2647, sLocal_2784) - get_time_position_in_recording(Local_3078[iLocal_2645 /*7*/]) < 200f)
							{
								set_playback_speed(Local_3078[iLocal_2645 /*7*/], 0f);
							}
						}
					}
					if (is_vehicle_driveable(Local_3078[iLocal_2644 /*7*/], 0))
					{
						if (is_playback_going_on_for_vehicle(Local_3078[iLocal_2644 /*7*/]))
						{
							if (get_total_duration_of_vehicle_recording(iLocal_2648, sLocal_2784) - get_time_position_in_recording(Local_3078[iLocal_2644 /*7*/]) < 200f)
							{
								set_playback_speed(Local_3078[iLocal_2644 /*7*/], 0f);
							}
						}
					}
				}
				request_model(joaat("police3"));
				request_model(joaat("s_m_y_cop_01"));
				request_anim_dict(sLocal_2790);
				if (((((timerb() > 4500 || !iLocal_2509) && has_model_loaded(joaat("police3"))) && has_model_loaded(joaat("s_m_y_cop_01"))) && has_anim_dict_loaded(sLocal_2790)) && iLocal_2547[43])
				{
					if ((is_vehicle_driveable(Local_3078[iLocal_2645 /*7*/], 0) && is_vehicle_driveable(Local_3078[iLocal_2644 /*7*/], 0)) && !is_ped_injured(Local_2967))
					{
						if (is_playback_going_on_for_vehicle(Local_3078[iLocal_2645 /*7*/]))
						{
							stop_playback_recorded_vehicle(Local_3078[iLocal_2645 /*7*/]);
						}
						remove_vehicle_recording(iLocal_2647, sLocal_2784);
						freeze_entity_position(Local_3078[iLocal_2645 /*7*/], false);
						start_playback_recorded_vehicle(Local_3078[iLocal_2645 /*7*/], iLocal_2646, sLocal_2784, 0);
						_0x1F2E4E06DEA8992B(Local_3078[iLocal_2645 /*7*/], 0);
						set_playback_speed(Local_3078[iLocal_2645 /*7*/], 0f);
						play_sound_from_entity(iLocal_2656, "Idling_Throttle_Blip_Loop", Local_3078[iLocal_2645 /*7*/], "ARM_1_SOUNDSET", 0, 0);
						if (is_playback_going_on_for_vehicle(Local_3078[iLocal_2644 /*7*/]))
						{
							stop_playback_recorded_vehicle(Local_3078[iLocal_2644 /*7*/]);
						}
						remove_vehicle_recording(iLocal_2648, sLocal_2784);
						set_entity_coords(Local_3078[iLocal_2644 /*7*/], vVar0, 1, false, 0, 1);
						set_entity_heading(Local_3078[iLocal_2644 /*7*/], fVar3);
						set_vehicle_on_ground_properly(Local_3078[iLocal_2644 /*7*/]);
						freeze_entity_position(Local_3078[iLocal_2644 /*7*/], true);
						clear_ped_tasks_immediately(player_ped_id());
						clear_ped_tasks_immediately(Local_2967);
						task_clear_look_at(Local_2967);
						task_clear_look_at(player_ped_id());
						Local_2967.f_4 = create_synchronized_scene(0f, 0f, 0f, 0f, 0f, 0f, 2);
						iLocal_2678 = create_synchronized_scene(0f, 0f, 0f, 0f, 0f, 0f, 2);
						if (iLocal_2644 == 0)
						{
							attach_synchronized_scene_to_entity(iLocal_2678, Local_3078[0 /*7*/], get_entity_bone_index_by_name(Local_3078[0 /*7*/], "seat_dside_f"));
							attach_synchronized_scene_to_entity(Local_2967.f_4, Local_3078[1 /*7*/], get_entity_bone_index_by_name(Local_3078[1 /*7*/], "seat_dside_f"));
						}
						else
						{
							attach_synchronized_scene_to_entity(iLocal_2678, Local_3078[1 /*7*/], get_entity_bone_index_by_name(Local_3078[1 /*7*/], "seat_dside_f"));
							attach_synchronized_scene_to_entity(Local_2967.f_4, Local_3078[0 /*7*/], get_entity_bone_index_by_name(Local_3078[0 /*7*/], "seat_dside_f"));
						}
						if (iLocal_2494)
						{
							if (iLocal_2495)
							{
								task_synchronized_scene(player_ped_id(), iLocal_2678, sLocal_2790, "CarRace_Banter_bothtrashed_FRANKLIN", 1000f, -1000f, 0, 0, 1000f, 0);
								task_synchronized_scene(Local_2967, Local_2967.f_4, sLocal_2790, "CarRace_Banter_bothtrashed_LAMAR", 1000f, -1000f, 0, 0, 1000f, 0);
								iLocal_2530 = true;
							}
							else
							{
								task_synchronized_scene(player_ped_id(), iLocal_2678, sLocal_2790, "CarRace_Banter_thatbucket_FRANKLIN", 1000f, -1000f, 0, 0, 1000f, 0);
								task_synchronized_scene(Local_2967, Local_2967.f_4, sLocal_2790, "CarRace_Banter_thatbucket_LAMAR", 1000f, -1000f, 0, 0, 1000f, 0);
								iLocal_2530 = true;
							}
						}
						else if (iLocal_2493)
						{
							task_synchronized_scene(player_ped_id(), iLocal_2678, sLocal_2790, "CarRace_Banter_FlowThrough_FRANKLIN", 1000f, -1000f, 0, 0, 1000f, 0);
							task_synchronized_scene(Local_2967, Local_2967.f_4, sLocal_2790, "CarRace_Banter_FlowThrough_LAMAR", 1000f, -1000f, 0, 0, 1000f, 0);
							iLocal_2530 = true;
						}
						else
						{
							task_synchronized_scene(player_ped_id(), iLocal_2678, sLocal_2790, "CarRace_Banter_MoveSome_FRANKLIN", 1000f, -1000f, 0, 0, 1000f, 0);
							task_synchronized_scene(Local_2967, Local_2967.f_4, sLocal_2790, "CarRace_Banter_MoveSome_LAMAR", 1000f, -1000f, 0, 0, 1000f, 0);
							iLocal_2530 = true;
						}
					}
					destroy_all_cams(0);
					new_load_scene_stop();
					if (iLocal_2530)
					{
						iLocal_2885 = create_cam("DEFAULT_ANIMATED_CAMERA", true);
						iLocal_2679 = create_synchronized_scene(40.715f, -638.31f, 30.675f, 0f, 0f, 66f, 2);
						if (iLocal_2494)
						{
							if (iLocal_2495)
							{
								play_synchronized_cam_anim(iLocal_2885, iLocal_2679, "CarRace_Banter_bothtrashed_cam", sLocal_2790);
							}
							else
							{
								play_synchronized_cam_anim(iLocal_2885, iLocal_2679, "CarRace_Banter_thatbucket_cam", sLocal_2790);
							}
						}
						else if (iLocal_2493)
						{
							play_synchronized_cam_anim(iLocal_2885, iLocal_2679, "carrace_banter_flowthrough_cam", sLocal_2790);
						}
						else
						{
							play_synchronized_cam_anim(iLocal_2885, iLocal_2679, "carrace_banter_movesome_cam", sLocal_2790);
						}
					}
					else
					{
						iLocal_2885 = create_cam("DEFAULT_SCRIPTED_CAMERA", true);
						if (iLocal_2645 == 1)
						{
							set_cam_params(iLocal_2885, 36.59747f, -637.1707f, 31.80989f, -3.324733f, -0.009855f, -122.2542f, 21.89666f, false, 1, 1, 2);
							set_cam_params(iLocal_2885, 36.59521f, -637.1694f, 31.76422f, -3.324733f, -0.009855f, -122.2542f, 21.89666f, 15000, 0, 0, 2);
						}
						else
						{
							set_cam_params(iLocal_2885, 36.91358f, -636.7665f, 31.83924f, -3.589668f, -0.002839f, -124.8351f, 21.70874f, false, 1, 1, 2);
							set_cam_params(iLocal_2885, 36.91154f, -636.7663f, 31.80007f, -3.589668f, -0.002839f, -124.8351f, 21.70874f, 15000, 0, 0, 2);
						}
					}
					if (!iLocal_2509)
					{
						shake_cam(iLocal_2885, "HAND_SHAKE", 0.05f);
						render_script_cams(true, false, 3000, 1, 0, 0);
						set_player_control(player_id(), false, 0);
						display_radar(false);
						display_hud(false);
						set_widescreen_borders(true, 0);
					}
					settimerb(0);
					iLocal_2643++;
				}
				break;
			
			case 1:
				if (!iLocal_2547[42])
				{
					func_335();
					iLocal_2547[42] = 1;
				}
				else if (!func_299(&Local_3095, 0) || timerb() > 20000)
				{
					if (is_vehicle_driveable(iLocal_2803, 0))
					{
						if (!is_ped_injured(iLocal_2841[0]) && !is_ped_sitting_in_vehicle(iLocal_2841[0], iLocal_2803))
						{
							set_ped_into_vehicle(iLocal_2841[0], iLocal_2803, -1);
						}
						set_vehicle_engine_on(iLocal_2803, true, 1, 0);
						set_vehicle_siren(iLocal_2803, true);
						set_vehicle_lights(iLocal_2803, 2);
						set_siren_with_no_driver(iLocal_2803, 1);
						settimerb(0);
						iLocal_2643++;
					}
				}
				break;
			
			case 2:
				request_vehicle_recording(300, sLocal_2784);
				if ((timerb() > 1000 || fVar6 > 0.99f) && has_vehicle_recording_been_loaded(300, sLocal_2784))
				{
					if (is_vehicle_driveable(iLocal_2803, 0))
					{
						if (is_playback_going_on_for_vehicle(iLocal_2803))
						{
							stop_playback_recorded_vehicle(iLocal_2803);
						}
						remove_vehicle_recording(301, sLocal_2784);
						start_playback_recorded_vehicle_with_flags(iLocal_2803, 300, sLocal_2784, 1, 0, 786603);
						func_341(&iLocal_2803, 500f);
						_0x1F2E4E06DEA8992B(iLocal_2803, 1);
						set_playback_speed(iLocal_2803, 0.1f);
					}
					if (!is_ped_injured(Local_2967))
					{
						Local_2967.f_4 = create_synchronized_scene(0f, 0f, 0f, 0f, 0f, 0f, 2);
						iLocal_2678 = create_synchronized_scene(0f, 0f, 0f, 0f, 0f, 0f, 2);
						if (iLocal_2644 == 0)
						{
							attach_synchronized_scene_to_entity(iLocal_2678, Local_3078[0 /*7*/], get_entity_bone_index_by_name(Local_3078[0 /*7*/], "seat_dside_f"));
							attach_synchronized_scene_to_entity(Local_2967.f_4, Local_3078[1 /*7*/], get_entity_bone_index_by_name(Local_3078[1 /*7*/], "seat_dside_f"));
						}
						else
						{
							attach_synchronized_scene_to_entity(iLocal_2678, Local_3078[1 /*7*/], get_entity_bone_index_by_name(Local_3078[1 /*7*/], "seat_dside_f"));
							attach_synchronized_scene_to_entity(Local_2967.f_4, Local_3078[0 /*7*/], get_entity_bone_index_by_name(Local_3078[0 /*7*/], "seat_dside_f"));
						}
						task_synchronized_scene(player_ped_id(), iLocal_2678, sLocal_2790, "CarRace_Banter_cops_FRANKLIN", 1000f, -1000f, 0, 0, 1000f, 0);
						set_synchronized_scene_phase(iLocal_2678, 0.1f);
						task_synchronized_scene(Local_2967, Local_2967.f_4, sLocal_2790, "CarRace_Banter_cops_LAMAR", 1000f, -1000f, 0, 0, 1000f, 0);
					}
					if (iLocal_2530)
					{
						destroy_all_cams(0);
						iLocal_2885 = create_cam("DEFAULT_ANIMATED_CAMERA", true);
						iLocal_2679 = create_synchronized_scene(40.715f, -638.31f, 30.675f, 0f, 0f, 66f, 2);
						play_synchronized_cam_anim(iLocal_2885, iLocal_2679, "CarRace_Banter_cops_cam", sLocal_2790);
					}
					else
					{
						shake_cam(iLocal_2885, "HAND_SHAKE", 0.05f);
						set_cam_params(iLocal_2885, 46.84201f, -636.4459f, 31.56392f, -0.180864f, 0.105875f, 110.3526f, 30.89239f, false, 1, 1, 2);
						set_cam_params(iLocal_2885, 46.88197f, -636.5637f, 31.60283f, -0.098123f, 0.105875f, 105.78f, 30.89239f, 16000, 0, 0, 2);
					}
					settimerb(0);
					iLocal_2643++;
				}
				break;
			
			case 3:
				if (!iLocal_2547[44])
				{
					if (!func_299(&Local_3095, 0))
					{
						func_298(&Local_3169, "ARM1AUD", "ARM1_COPS", 7, 0, 0, 0);
					}
					MemCopy(&uVar7, {func_361()}, 4);
					if (are_strings_equal(&uVar7, "ARM1_COPS_3"))
					{
						settimerb(0);
						iLocal_2547[44] = 1;
					}
				}
				if (timerb() > 3000)
				{
					if (is_vehicle_driveable(Local_3078[iLocal_2645 /*7*/], 0))
					{
						set_playback_speed(Local_3078[iLocal_2645 /*7*/], 1f);
						if (!has_sound_finished(iLocal_2656))
						{
							stop_sound(iLocal_2656);
						}
						settimerb(0);
						iLocal_2643++;
					}
				}
				break;
			
			case 4:
				if (!iLocal_2544)
				{
					if (_0xEE778F8C7E1142E2(1) == 4 || get_follow_vehicle_cam_zoom_level() == 4)
					{
						if (timerb() > 2200)
						{
							_start_screen_effect("CamPushInNeutral", false, 0);
							play_sound_frontend(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
							iLocal_2544 = 1;
						}
					}
				}
				if (timerb() > 2500 || fVar6 > 0.99f)
				{
					iLocal_3166 = 2;
				}
				break;
		}
		if (func_339(1000))
		{
			iLocal_3166 = 3;
		}
	}
	if (iLocal_3166 == 2)
	{
		_0x81CBAE94390F9F89();
		_0x293220DA1B46CEBC(0f, 10f, 3);
		clear_help(1);
		set_model_as_no_longer_needed(joaat("police3"));
		set_model_as_no_longer_needed(joaat("s_m_y_cop_01"));
		func_362(0);
		set_entity_collision(iLocal_2925[0], true, 0);
		set_entity_collision(iLocal_2925[1], true, 0);
		if (is_vehicle_driveable(Local_3078[iLocal_2644 /*7*/], 0))
		{
			stop_synchronized_entity_anim(player_ped_id(), -8f, 1);
			clear_ped_tasks_immediately(player_ped_id());
			set_ped_into_vehicle(player_ped_id(), Local_3078[iLocal_2644 /*7*/], -1);
			set_vehicle_brake_lights(Local_3078[iLocal_2644 /*7*/], 0);
		}
		if (!is_ped_injured(Local_2967))
		{
			stop_synchronized_entity_anim(Local_2967, -8f, 1);
			clear_ped_tasks_immediately(Local_2967);
			task_clear_look_at(Local_2967);
			set_entity_coords(Local_2967, -32.912f, -1086.304f, 29.2035f, 1, false, 0, 1);
			freeze_entity_position(Local_2967, true);
			set_entity_collision(Local_2967, false, 0);
			set_entity_visible(Local_2967, false, 0);
		}
		if (is_vehicle_driveable(Local_3078[iLocal_2644 /*7*/], 0))
		{
			if (is_playback_going_on_for_vehicle(Local_3078[iLocal_2644 /*7*/]))
			{
				stop_playback_recorded_vehicle(Local_3078[iLocal_2644 /*7*/]);
			}
			remove_vehicle_recording(iLocal_2648, sLocal_2784);
			freeze_entity_position(Local_3078[iLocal_2644 /*7*/], false);
			if (iLocal_2644 == 0)
			{
				set_entity_heading(Local_3078[iLocal_2644 /*7*/], 337.9254f);
				set_entity_coords(Local_3078[iLocal_2644 /*7*/], 35.9457f, -646.1738f, 30.6258f, 1, false, 0, 1);
			}
			else
			{
				set_entity_heading(Local_3078[iLocal_2644 /*7*/], 335.015f);
				set_entity_coords(Local_3078[iLocal_2644 /*7*/], 35.2234f, -646.9493f, 30.6292f, 1, false, 0, 1);
			}
		}
		if (is_vehicle_driveable(Local_3078[iLocal_2645 /*7*/], 0))
		{
			if (is_playback_going_on_for_vehicle(Local_3078[iLocal_2645 /*7*/]))
			{
				stop_playback_recorded_vehicle(Local_3078[iLocal_2645 /*7*/]);
			}
			remove_vehicle_recording(iLocal_2647, sLocal_2784);
			remove_vehicle_recording(iLocal_2646, sLocal_2784);
			_0x18EB48CFC41F2EA0(Local_3078[iLocal_2645 /*7*/], 0f);
			func_309();
		}
		if (is_screen_faded_out())
		{
			func_46(35.9457f, -646.1738f, 30.6258f, 200f, 1, 5000);
		}
		if (is_vehicle_driveable(iLocal_2803, 0))
		{
			if (is_playback_going_on_for_vehicle(iLocal_2803))
			{
				func_341(&iLocal_2803, 10500f);
				set_playback_speed(iLocal_2803, 1f);
				_0x1F2E4E06DEA8992B(iLocal_2803, 1);
			}
			if (!is_ped_injured(iLocal_2841[0]))
			{
				set_blocking_of_non_temporary_events(iLocal_2841[0], false);
			}
			if (!is_ped_injured(iLocal_2841[1]))
			{
				set_blocking_of_non_temporary_events(iLocal_2841[1], false);
			}
		}
		clear_area_of_vehicles(81.9f, -600.2f, 32.5f, 30f, 0, 0, 0, 0, false);
		if ((does_cam_exist(iLocal_2885) && _0xEE778F8C7E1142E2(1) != 4) && get_follow_vehicle_cam_zoom_level() != 4)
		{
			destroy_cam(iLocal_2885, 0);
			if (iLocal_2644 == 0)
			{
				iLocal_2885 = create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", 34.02319f, -647.5784f, 31.91944f, -1.429148f, 0f, -47.80906f, 50.02792f, 1, 2);
			}
			else
			{
				iLocal_2885 = create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", 33.33243f, -648.7061f, 31.86157f, -0.377383f, 0f, -47.84317f, 50.02792f, 1, 2);
			}
			wait(0);
		}
		remove_anim_dict(sLocal_2790);
		set_frontend_radio_active(1);
		task_clear_look_at(player_ped_id());
		set_player_control(player_id(), true, 0);
		display_radar(true);
		display_hud(true);
		set_widescreen_borders(false, 0);
		func_60(0, 1, 1, 0);
		stop_audio_scene("ARM_1_COPS_ARRIVE");
		set_gameplay_cam_relative_heading(-50.5f - get_entity_heading(player_ped_id()));
		set_gameplay_cam_relative_pitch(0f, 1f);
		if (_0xEE778F8C7E1142E2(1) == 4 || get_follow_vehicle_cam_zoom_level() == 4)
		{
			render_script_cams(false, false, 3000, 1, 0, 0);
		}
		else
		{
			_0xC819F3CBB62BF692(0, 0f, 3, 0);
		}
		new_load_scene_stop();
		iLocal_3166 = 0;
		iLocal_3165 = 6;
	}
	if (iLocal_3166 == 3)
	{
		if (!is_screen_faded_out())
		{
			if (!is_screen_fading_out())
			{
				do_screen_fade_out(800);
			}
			while (!is_screen_faded_out())
			{
				if (!is_entity_dead(Local_3078[iLocal_2645 /*7*/], 0))
				{
					_0x97CE68CB032583F0(Local_3078[iLocal_2645 /*7*/], 1);
				}
				if (!is_entity_dead(Local_3078[iLocal_2644 /*7*/], 0))
				{
					_0x97CE68CB032583F0(Local_3078[iLocal_2644 /*7*/], 1);
				}
				wait(0);
			}
		}
		clear_prints();
		func_69();
		if (is_vehicle_driveable(iLocal_2803, 0))
		{
			if (is_playback_going_on_for_vehicle(iLocal_2803))
			{
				stop_playback_recorded_vehicle(iLocal_2803);
			}
			set_vehicle_siren(iLocal_2803, true);
			set_vehicle_lights(iLocal_2803, 2);
			set_siren_with_no_driver(iLocal_2803, 1);
			remove_vehicle_recording(301, sLocal_2784);
			start_playback_recorded_vehicle(iLocal_2803, 300, sLocal_2784, 1);
		}
		if (!has_sound_finished(iLocal_2656))
		{
			stop_sound(iLocal_2656);
		}
		if (does_entity_exist(iLocal_2922[1]))
		{
			if (is_entity_playing_anim(iLocal_2922[1], "map_objects", "p_sec_gate_01_s_close", 3))
			{
				set_entity_anim_current_time(iLocal_2922[1], "map_objects", "p_sec_gate_01_s_close", 0.99f);
			}
		}
		iLocal_3166 = 2;
	}
}

struct<6> func_361()
{
	char[24] cVar0;
	int iVar6;
	
	StringCopy(&cVar0, "NULL", 24);
	if (Global_15712 == 4)
	{
		iVar6 = get_current_scripted_conversation_line();
		iVar6 += Global_16722;
		if (iVar6 > -1)
		{
			return Global_14580[iVar6 /*6*/];
		}
		else
		{
			return cVar0;
		}
	}
	return cVar0;
}

bool func_362(int iParam0)
{
	if (iParam0)
	{
		if (iLocal_2937 == 0)
		{
			iLocal_2937 = get_interior_at_coords_with_type(89.7f, -694.9f, 32.7f, "dt1_05_carpark");
		}
		else if (is_interior_ready(iLocal_2937))
		{
			return true;
		}
		else
		{
			_0x2CA429C029CCF247(iLocal_2937);
		}
	}
	else if (iLocal_2937 != 0)
	{
		unpin_interior(iLocal_2937);
		iLocal_2937 = 0;
	}
	return false;
}

void func_363(int iParam0)
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

float func_364(vector3 vParam0, int iParam1, char* sParam2, int iParam3)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	
	iVar0 = get_vehicle_recording_id(iParam3, sParam4);
	fVar1 = get_total_duration_of_vehicle_recording_id(iVar0);
	fVar2 = fVar1 / 2f;
	fVar3 = fVar1 / 2f;
	iVar4 = 0;
	while (iVar4 <= iParam5)
	{
		if (vdist2(vParam0, _0x92523B76657A517D(iVar0, func_365(fVar2 - fVar3, 0f, fVar1))) < vdist2(vParam0, _0x92523B76657A517D(iVar0, func_365(fVar2 + fVar3, 0f, fVar1))))
		{
			fVar3 /= 2f;
			fVar2 -= fVar3;
		}
		if (vdist2(vParam0, _0x92523B76657A517D(iVar0, func_365(fVar2 - fVar3, 0f, fVar1))) > vdist2(vParam0, _0x92523B76657A517D(iVar0, func_365(fVar2 + fVar3, 0f, fVar1))))
		{
			fVar3 /= 2f;
			fVar2 += fVar3;
		}
		iVar4++;
	}
	return fVar2;
}

float func_365(float fParam0, float fParam1, float fParam2)
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

void func_366()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_2424)
	{
		if (iLocal_1391[iVar0] > 0)
		{
			remove_vehicle_recording(iLocal_1391[iVar0], sLocal_2784);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_2274)
	{
		if (iLocal_1037[iVar0] > 0)
		{
			remove_vehicle_recording(iLocal_1037[iVar0], sLocal_2784);
		}
		iVar0++;
	}
}

void func_367(int iParam0, int iParam1)
{
	if (!is_string_null_or_empty(&cLocal_2081))
	{
		iLocal_106 = 0;
		func_384();
		remove_relationship_group(iLocal_2097);
		set_roads_back_to_original(-9999f, -9999f, -9999f, 9999f, 9999f, 9999f, 1);
		if (is_player_playing(player_id()))
		{
			set_air_drag_multiplier_for_players_vehicle(player_id(), 1f);
			set_dispatch_cops_for_player(player_id(), 1);
			set_create_random_cops(true);
		}
		if (iLocal_122)
		{
			set_model_as_no_longer_needed(func_383());
		}
		set_model_as_no_longer_needed(func_382());
		set_model_as_no_longer_needed(func_381());
		set_model_as_no_longer_needed(func_380());
		if (!is_screen_faded_out() && !iParam0)
		{
			func_379();
			func_378();
			func_375();
		}
		else
		{
			func_371();
			func_370();
		}
		if (iParam1)
		{
			func_368(0);
		}
	}
}

void func_368(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 45)
	{
		func_369(iVar0, iParam0);
		iVar0++;
	}
}

void func_369(int iParam0, int iParam1)
{
	if (iParam1)
	{
		if (!func_45(iParam0, 2, 1))
		{
			func_41(iParam0, 2, 1);
		}
	}
	else if (func_45(iParam0, 2, 1))
	{
		func_34(iParam0, 2, 1);
	}
}

void func_370()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 117)
	{
		iLocal_2274[iVar0] = 0;
		vLocal_1541[iVar0 /*3*/] = {0f, 0f, 0f};
		fLocal_124[iVar0] = 0f;
		fLocal_242[iVar0] = 0f;
		fLocal_360[iVar0] = 0f;
		fLocal_478[iVar0] = 0f;
		iLocal_1037[iVar0] = 0;
		fLocal_596[iVar0] = 0f;
		iLocal_1155[iVar0] = 0;
		iLocal_2098[iVar0] = 0;
		iLocal_1273[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		iLocal_2392[iVar0] = 0;
		iVar0++;
	}
	iLocal_1524 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		iLocal_2408[iVar0] = 0;
		vLocal_1893[iVar0 /*3*/] = {0f, 0f, 0f};
		fLocal_952[iVar0] = 0f;
		fLocal_968[iVar0] = 0f;
		fLocal_984[iVar0] = 0f;
		fLocal_1000[iVar0] = 0f;
		iLocal_1508[iVar0] = 0;
		iLocal_2216[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iLocal_2463[iVar0] = 0;
		iVar0++;
	}
	iLocal_1526 = 0;
	iVar0 = 0;
	while (iVar0 < 38)
	{
		iLocal_2424[iVar0] = 0;
		vLocal_1939[iVar0 /*3*/] = {0f, 0f, 0f};
		fLocal_718[iVar0] = 0f;
		fLocal_757[iVar0] = 0f;
		fLocal_796[iVar0] = 0f;
		fLocal_835[iVar0] = 0f;
		iLocal_1391[iVar0] = 0;
		fLocal_874[iVar0] = 0f;
		iLocal_1430[iVar0] = 0;
		iLocal_2232[iVar0] = 0;
		iLocal_1469[iVar0] = 0;
		iVar0++;
	}
	iLocal_1525 = 0;
	iLocal_1528 = 0;
	iLocal_1531 = 0;
	iLocal_1532 = 0;
	iLocal_1533 = 0;
}

void func_371()
{
	func_374();
	func_373();
	func_372();
}

void func_372()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 38)
	{
		if (does_entity_exist(iLocal_2424[iVar0]))
		{
			if (is_vehicle_driveable(iLocal_2424[iVar0], 0))
			{
				if (is_playback_going_on_for_vehicle(iLocal_2424[iVar0]))
				{
					stop_playback_recorded_vehicle(iLocal_2424[iVar0]);
				}
				iVar1 = get_ped_in_vehicle_seat(iLocal_2424[iVar0], -1);
				if (does_entity_exist(iVar1) && iVar1 != player_ped_id())
				{
					if (is_entity_a_mission_entity(iVar1))
					{
						delete_ped(&iVar1);
					}
				}
			}
			if (is_entity_a_mission_entity(iLocal_2424[iVar0]))
			{
				delete_vehicle(&(iLocal_2424[iVar0]));
			}
		}
		iLocal_1430[iVar0] = 0;
		if (!iLocal_102 && !iLocal_115)
		{
			if (iLocal_1391[iVar0] > 0)
			{
				remove_vehicle_recording(iLocal_1391[iVar0], &cLocal_2081);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 38)
	{
		if (!iLocal_2232[iVar0] == 0)
		{
			set_model_as_no_longer_needed(iLocal_2232[iVar0]);
		}
		iVar0++;
	}
}

void func_373()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (does_entity_exist(iLocal_2408[iVar0]))
		{
			if (is_entity_a_mission_entity(iLocal_2408[iVar0]))
			{
				delete_vehicle(&(iLocal_2408[iVar0]));
			}
		}
		iLocal_1508[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!iLocal_2216[iVar0] == 0)
		{
			set_model_as_no_longer_needed(iLocal_2216[iVar0]);
		}
		iVar0++;
	}
	iLocal_1529 = 0;
	iLocal_1526 = 0;
}

void func_374()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 117)
	{
		if (does_entity_exist(iLocal_2274[iVar0]))
		{
			if (is_vehicle_driveable(iLocal_2274[iVar0], 0))
			{
				if (is_playback_going_on_for_vehicle(iLocal_2274[iVar0]))
				{
					stop_playback_recorded_vehicle(iLocal_2274[iVar0]);
				}
				iVar1 = get_ped_in_vehicle_seat(iLocal_2274[iVar0], -1);
				if (does_entity_exist(iVar1) && iVar1 != player_ped_id())
				{
					if (is_entity_a_mission_entity(iVar1))
					{
						delete_ped(&iVar1);
					}
				}
			}
			if (is_entity_a_mission_entity(iLocal_2274[iVar0]))
			{
				delete_vehicle(&(iLocal_2274[iVar0]));
			}
		}
		if (!iLocal_102 && !iLocal_115)
		{
			if (iLocal_1037[iVar0] > 0)
			{
				remove_vehicle_recording(iLocal_1037[iVar0], &cLocal_2081);
			}
		}
		iLocal_1155[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 117)
	{
		if (!iLocal_2098[iVar0] == 0)
		{
			set_model_as_no_longer_needed(iLocal_2098[iVar0]);
		}
		iVar0++;
	}
	iLocal_1528 = 0;
	iLocal_1524 = 0;
}

void func_375()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 38)
	{
		if (does_entity_exist(iLocal_2424[iVar0]))
		{
			if (is_vehicle_driveable(iLocal_2424[iVar0], 0))
			{
				if (is_playback_going_on_for_vehicle(iLocal_2424[iVar0]))
				{
					stop_playback_recorded_vehicle(iLocal_2424[iVar0]);
				}
			}
			func_377(iLocal_2424[iVar0]);
			func_376(iLocal_2424[iVar0]);
		}
		iLocal_1430[iVar0] = 0;
		iLocal_1469[iVar0] = 0;
		if (!iLocal_102 && !iLocal_115)
		{
			if (iLocal_1391[iVar0] > 0)
			{
				remove_vehicle_recording(iLocal_1391[iVar0], &cLocal_2081);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 38)
	{
		if (!iLocal_2232[iVar0] == 0)
		{
			set_model_as_no_longer_needed(iLocal_2232[iVar0]);
		}
		iVar0++;
	}
	iLocal_1530 = 0;
}

void func_376(int iParam0)
{
	if (does_entity_exist(iParam0))
	{
		set_vehicle_as_no_longer_needed(&iParam0);
	}
}

void func_377(int iParam0)
{
	float fVar0;
	int iVar1;
	
	if (is_vehicle_driveable(iParam0, 0))
	{
		iVar1 = get_ped_in_vehicle_seat(iParam0, -1);
		if (!is_ped_injured(iVar1))
		{
			if (!iVar1 == player_ped_id())
			{
				fVar0 = get_entity_speed(iParam0);
				if (fVar0 < 8f)
				{
					fVar0 = 8f;
				}
				if (fVar0 > 62.9f)
				{
					fVar0 = 62.9f;
				}
				task_vehicle_mission(iVar1, iParam0, false, 1, fVar0, 786603, 5f, 5f, 1);
				set_ped_flee_attributes(iVar1, 8192, true);
				if (iLocal_123)
				{
					set_ped_flee_attributes(iVar1, 65536, true);
					set_ped_flee_attributes(iVar1, 2, false);
				}
				set_ped_combat_attributes(iVar1, 6, false);
			}
		}
	}
}

void func_378()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (does_entity_exist(iLocal_2408[iVar0]))
		{
			if (!is_entity_dead(iLocal_2408[iVar0], 0))
			{
				set_entity_collision(iLocal_2408[iVar0], true, 0);
			}
			func_376(iLocal_2408[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!iLocal_2216[iVar0] == 0)
		{
			set_model_as_no_longer_needed(iLocal_2216[iVar0]);
		}
		iVar0++;
	}
	iLocal_1529 = 0;
	iLocal_1526 = 0;
}

void func_379()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 117)
	{
		if (does_entity_exist(iLocal_2274[iVar0]))
		{
			if (!is_entity_dead(iLocal_2274[iVar0], 0))
			{
				set_entity_collision(iLocal_2274[iVar0], true, 0);
			}
			if (is_vehicle_driveable(iLocal_2274[iVar0], 0))
			{
				if (is_playback_going_on_for_vehicle(iLocal_2274[iVar0]))
				{
					stop_playback_recorded_vehicle(iLocal_2274[iVar0]);
				}
			}
			func_377(iLocal_2274[iVar0]);
			func_376(iLocal_2274[iVar0]);
		}
		iLocal_1155[iVar0] = 0;
		iLocal_1273[iVar0] = 0;
		if (!iLocal_102 && !iLocal_115)
		{
			if (iLocal_1037[iVar0] > 0)
			{
				remove_vehicle_recording(iLocal_1037[iVar0], &cLocal_2081);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 117)
	{
		if (!iLocal_2098[iVar0] == 0)
		{
			set_model_as_no_longer_needed(iLocal_2098[iVar0]);
		}
		iVar0++;
	}
	iLocal_1528 = 0;
	iLocal_1524 = 0;
}

int func_380()
{
	return joaat("s_m_y_cop_01");
}

int func_381()
{
	return joaat("police");
}

int func_382()
{
	return joaat("sultan");
}

int func_383()
{
	if (iLocal_2271 == 0)
	{
		return joaat("a_m_y_business_01");
	}
	return iLocal_2271;
}

void func_384()
{
	set_all_vehicle_generators_active();
	set_number_of_parked_vehicles(-1);
	set_garbage_trucks(1);
	set_all_low_priority_vehicle_generators_active(1);
	set_vehicle_density_multiplier_this_frame(1f);
	set_vehicle_population_budget(3);
	set_ped_population_budget(3);
}

void func_385()
{
	remove_ipl("DT1_03_Shutter");
	func_355(180, 1, 0, 1, 0);
}

void func_386()
{
	if (iLocal_2645 == 1)
	{
		iLocal_2646 = 9;
		iLocal_2647 = 313;
		iLocal_2648 = 312;
	}
	else
	{
		iLocal_2646 = 8;
		iLocal_2647 = 311;
		iLocal_2648 = 310;
	}
}

void func_387()
{
	if (!is_ped_injured(Local_2967))
	{
		if (is_vehicle_driveable(Local_3078[iLocal_2645 /*7*/], 0))
		{
			if (!is_ped_in_vehicle(Local_2967, Local_3078[iLocal_2645 /*7*/], 0))
			{
				set_ped_into_vehicle(Local_2967, Local_3078[iLocal_2645 /*7*/], -1);
			}
		}
	}
}

void func_388()
{
	float fVar0;
	vector3 vVar1;
	Vector3 fVar4;
	vector3 vVar5;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	float fVar12;
	int iVar13;
	var uVar14;
	struct<6> Var15;
	char[24] cVar21;
	struct<6> Var27;
	char[24] cVar33;
	int iVar39;
	char* sVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	int iVar44;
	int iVar45;
	int iVar46;
	struct<6> Var47;
	
	fVar0 = 1250f;
	if (iLocal_3165 == 4)
	{
		fVar0 = 83500f;
	}
	if (iLocal_3166 == 4)
	{
		vVar1 = {Local_3078[0 /*7*/].f_2};
		fVar4 = fLocal_2635;
		if (iLocal_3165 == 4)
		{
			vVar1 = {-1155.198f, -873.2174f, 10.6185f};
			fVar4 = -150f;
		}
		if (iLocal_2535)
		{
			func_234(vVar1, fVar4, 0, 0);
			iLocal_2643 = 99;
		}
		else
		{
			set_entity_coords(player_ped_id(), vVar1, 1, false, 0, 1);
			set_entity_heading(player_ped_id(), fVar4);
			freeze_entity_position(player_ped_id(), true);
			load_scene(get_entity_coords(player_ped_id(), 1));
			wait(0);
			freeze_entity_position(player_ped_id(), false);
			iLocal_2643 = 99;
		}
		func_318();
		request_model(iLocal_2951);
		while ((((!func_475() || !does_entity_exist(Local_2967)) || !does_entity_exist(Local_3078[0 /*7*/])) || !does_entity_exist(Local_3078[1 /*7*/])) || !has_model_loaded(iLocal_2951))
		{
			func_229(vLocal_2757, 0, 0);
			func_315(Local_3078[0 /*7*/].f_2, Local_3078[0 /*7*/].f_5);
			func_314(Local_3078[1 /*7*/].f_2, Local_3078[1 /*7*/].f_5);
			request_model(iLocal_2951);
			request_script_audio_bank("CAR_CRASHES_01", false);
			request_script_audio_bank("CAR_CRASHES_MED_01", false);
			wait(0);
		}
		func_185(0, -1, 0);
		func_342();
		func_387();
		func_308();
		func_474(1);
		special_ability_reset(player_id());
		if (iLocal_3165 == 3)
		{
			iLocal_2845 = create_ped(26, iLocal_2951, -1886.833f, -579.0045f, 10.8163f, 315.0557f, 1, true);
			set_ped_component_variation(iLocal_2845, false, 0, 0, 0);
			set_ped_component_variation(iLocal_2845, 3, 0, 0, 0);
			set_ped_component_variation(iLocal_2845, 4, 0, 1, 0);
			set_ped_component_variation(iLocal_2845, 8, 1, 0, 0);
			task_look_at_entity(iLocal_2845, player_ped_id(), -1, 0, 2);
		}
		set_model_as_no_longer_needed(iLocal_2951);
		if (is_vehicle_driveable(Local_3078[iLocal_2644 /*7*/], 0))
		{
			if (iLocal_3165 == 4)
			{
				set_entity_coords(Local_3078[iLocal_2644 /*7*/], -1153.198f, -875.2174f, 10.6185f, 1, false, 0, 1);
				set_entity_heading(Local_3078[iLocal_2644 /*7*/], -150f);
			}
			set_vehicle_engine_on(Local_3078[iLocal_2644 /*7*/], true, 1, 0);
		}
		set_initial_player_station("RADIO_03_HIPHOP_NEW");
		freeze_radio_station("RADIO_03_HIPHOP_NEW");
		set_radio_auto_unfreeze(0);
		set_radio_track("RADIO_03_HIPHOP_NEW", "ARM1_RADIO_STARTS");
		func_473(sLocal_2784, iLocal_2649, 1, 1);
		func_471();
		func_470(1);
		func_469(joaat("a_m_m_bevhills_02"));
		iLocal_112 = 1;
		iLocal_118 = true;
		fLocal_1028 = 200f;
		iLocal_1535 = iLocal_1391[15];
		func_468(fVar0 + 4000f, fVar0 - 5000f);
		wait(500);
		if (is_vehicle_driveable(Local_3078[iLocal_2645 /*7*/], 0) && is_vehicle_driveable(Local_3078[iLocal_2644 /*7*/], 0))
		{
			start_playback_recorded_vehicle(Local_3078[iLocal_2645 /*7*/], iLocal_2649, sLocal_2784, 1);
			func_341(&(Local_3078[iLocal_2645 /*7*/]), fVar0);
			func_467(Local_3078[iLocal_2645 /*7*/], fVar0);
			if (iLocal_3165 == 3)
			{
				special_ability_deplete_meter(player_id(), 1);
				enable_special_ability(player_id(), 0);
			}
			else
			{
				set_entity_heading(Local_3078[iLocal_2644 /*7*/], 210.9189f);
				set_entity_coords(Local_3078[iLocal_2644 /*7*/], -1153.198f, -875.2174f, 10.6185f, 1, false, 0, 1);
				set_vehicle_on_ground_properly(Local_3078[iLocal_2644 /*7*/]);
				enable_special_ability(player_id(), 1);
			}
			set_gameplay_cam_relative_heading(0f);
			set_gameplay_cam_relative_pitch(0f, 1f);
			wait(100);
			iLocal_3166 = 0;
		}
	}
	if (iLocal_3166 == 0)
	{
		func_386();
		set_wanted_level_multiplier(0f);
		set_vehicle_population_budget(1);
		set_ped_population_budget(2);
		iLocal_2497 = 0;
		iLocal_2498 = 0;
		iLocal_2499 = 0;
		iLocal_2496 = false;
		iLocal_2505 = 0;
		iLocal_2506 = 0;
		iLocal_2518 = 0;
		iLocal_2529 = 0;
		iLocal_2532 = 0;
		iLocal_2539 = 0;
		fLocal_2629 = 1f;
		iLocal_2654 = 0;
		Local_3093.f_1 = 0;
		Local_3093 = 0f;
		func_303();
		func_466(1);
		func_465(1);
		func_464(1);
		func_353(1);
		func_765(61, 0);
		set_all_random_peds_flee(player_id(), 1);
		set_ped_config_flag(player_ped_id(), 32, false);
		unfreeze_radio_station("RADIO_03_HIPHOP_NEW");
		set_radio_auto_unfreeze(1);
		func_463(Local_3078[iLocal_2644 /*7*/], -1);
		func_238(Local_3078[iLocal_2644 /*7*/], -1);
		settimera(0);
		settimerb(0);
		if (is_vehicle_driveable(Local_3078[iLocal_2644 /*7*/], 0))
		{
			_0x1AA8A837D2169D94(Local_3078[iLocal_2644 /*7*/], 1);
			iLocal_2683 = get_entity_health(Local_3078[iLocal_2644 /*7*/]);
		}
		if (is_vehicle_driveable(Local_3078[iLocal_2645 /*7*/], 0))
		{
			activate_physics(Local_3078[iLocal_2645 /*7*/]);
			_0xDFFCEF48E511DB48(Local_3078[iLocal_2645 /*7*/], 1);
			_0x1F9FB66F3A3842D2(Local_3078[iLocal_2645 /*7*/], 1);
			_0x153973AB99FE8980(Local_3078[iLocal_2645 /*7*/], "ARM_1_LAMARS_CAR", 0f);
			iLocal_2684 = get_entity_health(Local_3078[iLocal_2645 /*7*/]);
		}
		if (!is_ped_injured(Local_2967))
		{
			set_blocking_of_non_temporary_events(Local_2967, true);
			set_ped_config_flag(Local_2967, 116, false);
			set_ped_config_flag(Local_2967, 118, false);
			set_ped_config_flag(Local_2967, 208, true);
			set_ped_lod_multiplier(Local_2967, 2f);
		}
		if (is_audio_scene_active("ARM_1_GET_IN_CAR_SCENE"))
		{
			stop_audio_scene("ARM_1_GET_IN_CAR_SCENE");
		}
		if (iLocal_3165 == 3)
		{
			if (!is_audio_scene_active("ARM_1_DRIVE_START"))
			{
				start_audio_scene("ARM_1_DRIVE_START");
			}
			enable_special_ability(player_id(), 0);
		}
		else
		{
			enable_special_ability(player_id(), 1);
			iLocal_2547[1] = 1;
			iLocal_2547[12] = 1;
			iLocal_2547[13] = 1;
			iLocal_2547[14] = 1;
			iLocal_2547[15] = 1;
			iLocal_2547[16] = 1;
			if (iLocal_2508)
			{
				iLocal_2547[19] = 1;
				iLocal_2547[20] = 1;
				iLocal_2547[21] = 1;
				Local_3093.f_1 = 1;
				iLocal_2541 = true;
			}
			func_767(1, "CHASE_MID_POINT", 0, 0, 0, 1);
		}
		iLocal_2687 = add_navmesh_blocking_object(-334.1819f, -673.7113f, 33.33865f, 28.25f, 3f, 3f, 175.8f, 0, 7);
		iLocal_2688 = add_navmesh_blocking_object(-1138.2f, -723.6f, 20f, 10f, 10f, 3f, 91.3f, 0, 7);
		_set_unk_map_flag(2);
		if (is_screen_faded_out())
		{
			settimerb(0);
			while (timerb() < 500)
			{
				func_468(fVar0 + 5000f, fVar0 - 5000f);
				func_462();
				func_461();
				func_435(Local_3078[iLocal_2645 /*7*/], 1f);
				wait(0);
			}
			if (iLocal_3165 == 4)
			{
				if (is_vehicle_driveable(Local_3078[iLocal_2644 /*7*/], 0))
				{
					set_vehicle_forward_speed(Local_3078[iLocal_2644 /*7*/], 20f);
				}
			}
			do_screen_fade_in(800);
			while (!is_screen_faded_in())
			{
				func_468(fVar0 + 5000f, fVar0 - 5000f);
				func_461();
				func_435(Local_3078[iLocal_2645 /*7*/], 1f);
				func_432();
				wait(0);
			}
		}
		set_player_control(player_id(), true, 0);
		if (is_vehicle_driveable(Local_3078[iLocal_2644 /*7*/], 0))
		{
			_0x1AA8A837D2169D94(Local_3078[iLocal_2644 /*7*/], 1);
		}
		if (iLocal_3165 == 3)
		{
			special_ability_fill_meter(player_id(), 1);
		}
		iLocal_3347 = get_game_timer();
		func_385();
		iLocal_2702 = 0;
		iLocal_2704 = 0;
		iLocal_2705 = 0;
		iLocal_2706 = 0;
		iLocal_2692 = 0;
		iLocal_2521 = false;
		iLocal_2693 = 0;
		iLocal_2511 = 0;
		iLocal_2526 = false;
		iLocal_2643 = 0;
		iLocal_3166 = 1;
	}
	if (iLocal_3166 == 1)
	{
		func_432();
		vVar5 = {get_entity_coords(player_ped_id(), 1)};
		if (!is_ped_injured(iLocal_2845))
		{
			if (!iLocal_2521)
			{
				if ((fLocal_2628 > 15000f || (is_vehicle_driveable(Local_3078[iLocal_2644 /*7*/], 0) && get_entity_speed(Local_3078[iLocal_2644 /*7*/]) > 1f)) || is_sphere_visible(-1885f, -577.6f, 12.1f, 1f))
				{
					iLocal_2521 = true;
				}
			}
			else if (!is_ped_in_combat(iLocal_2845, false) && get_script_task_status(iLocal_2845, 780511057) != 1)
			{
				task_combat_ped(iLocal_2845, player_ped_id(), 0, 16);
			}
			if (vdist2(vVar5, get_entity_coords(iLocal_2845, 1)) > 2500f)
			{
				if (!is_entity_on_screen(iLocal_2845))
				{
					func_57(&iLocal_2845, 0);
				}
			}
		}
		if (iLocal_3346 == 0 && get_game_timer() - iLocal_3347 > 10000)
		{
			_0x81CBAE94390F9F89();
			iLocal_3346 = 1;
		}
		request_anim_dict(sLocal_2798);
		request_anim_dict(sLocal_2797);
		request_anim_dict(sLocal_2799);
		request_script_audio_bank("CAR_CRASHES_01", false);
		request_script_audio_bank("CAR_CRASHES_MED_01", false);
		if (is_vehicle_driveable(Local_3078[iLocal_2644 /*7*/], 0) && is_vehicle_driveable(Local_3078[iLocal_2645 /*7*/], 0))
		{
			if (iLocal_2643 == 0)
			{
				if (is_playback_going_on_for_vehicle(Local_3078[iLocal_2644 /*7*/]))
				{
					fVar8 = get_time_position_in_recording(Local_3078[iLocal_2644 /*7*/]);
					if (get_vehicle_door_lock_status(Local_3078[iLocal_2644 /*7*/]) != 4)
					{
						set_vehicle_doors_locked(Local_3078[iLocal_2644 /*7*/], 4);
					}
					if ((iLocal_2644 == 1 && fVar8 > 3900f) || (iLocal_2644 == 0 && fVar8 > 3600f))
					{
						stop_playback_recorded_vehicle(Local_3078[iLocal_2644 /*7*/]);
						remove_vehicle_recording(Local_3078[iLocal_2644 /*7*/].f_6, sLocal_2784);
					}
				}
				else if (get_vehicle_door_lock_status(Local_3078[iLocal_2644 /*7*/]) != 1)
				{
					set_vehicle_doors_locked(Local_3078[iLocal_2644 /*7*/], 1);
				}
			}
			fVar9 = vdist2(vVar5, get_entity_coords(Local_3078[iLocal_2645 /*7*/], 1));
			iVar10 = get_closest_vehicle(vVar5, 10f, false, func_431());
			if (is_playback_going_on_for_vehicle(Local_3078[iLocal_2645 /*7*/]))
			{
				fLocal_2628 = get_time_position_in_recording(Local_3078[iLocal_2645 /*7*/]);
				if (iLocal_2520)
				{
					func_428(&fLocal_2629, Local_3078[iLocal_2644 /*7*/], Local_3078[iLocal_2645 /*7*/]);
				}
				else
				{
					func_427(&fLocal_2629, Local_3078[iLocal_2644 /*7*/], Local_3078[iLocal_2645 /*7*/]);
				}
				fLocal_1031 = 7000f;
				func_461();
				func_435(Local_3078[iLocal_2645 /*7*/], fLocal_2629);
				set_playback_speed(Local_3078[iLocal_2645 /*7*/], fLocal_2629);
				func_424();
				func_423(&(Local_3078[iLocal_2645 /*7*/]), fLocal_2628);
				if (!iLocal_2511)
				{
					if (fLocal_2628 > 50500f && fLocal_2628 < 51100f)
					{
						set_entity_collision(Local_3078[iLocal_2645 /*7*/], false, 0);
						iLocal_2511 = 1;
					}
				}
				else if (fLocal_2628 > 51100f)
				{
					set_entity_collision(Local_3078[iLocal_2645 /*7*/], true, 0);
					iLocal_2511 = 0;
				}
				if (!iLocal_2496)
				{
					if (fLocal_2628 > get_total_duration_of_vehicle_recording(iLocal_2649, sLocal_2784) - 4000f)
					{
						if (is_playback_going_on_for_vehicle(Local_3078[iLocal_2645 /*7*/]))
						{
							stop_playback_recorded_vehicle(Local_3078[iLocal_2645 /*7*/]);
						}
						func_367(0, 1);
						clear_entity_last_damage_entity(Local_3078[iLocal_2645 /*7*/]);
						iLocal_2493 = false;
						iLocal_2496 = true;
					}
				}
				if (!iLocal_2529)
				{
					if (iLocal_2645 == 0 && fLocal_2628 >= 54635f)
					{
						iVar11 = get_closest_object_of_type(-1052.49f, -476.15f, 36.66f, 5f, -1184516519, 0, 0, 1);
						if (does_entity_exist(iVar11))
						{
							set_entity_invincible(Local_3078[iLocal_2645 /*7*/], true);
							_0xE7E4C198B0185900(iVar11, 1, 0);
							_0xE7E4C198B0185900(iVar11, 2, 0);
						}
						iLocal_2529 = 1;
					}
				}
				else if (fLocal_2628 > 56000f && fLocal_2628 < 56500f)
				{
					set_entity_invincible(Local_3078[iLocal_2645 /*7*/], false);
				}
			}
			if (iLocal_3165 == 3)
			{
				if (fLocal_2628 > 83000f)
				{
					if (is_vehicle_driveable(Local_3078[iLocal_2645 /*7*/], 0) && is_entity_on_screen(Local_3078[iLocal_2645 /*7*/]))
					{
						func_767(1, "CHASE_MID_POINT", 0, 0, 0, 1);
						iLocal_3165 = 4;
					}
				}
			}
			if (is_control_just_pressed(0, 75))
			{
				if (is_ped_in_vehicle(player_ped_id(), Local_3078[iLocal_2644 /*7*/], 0))
				{
					clear_ped_secondary_task(player_ped_id());
				}
			}
			if (fLocal_2628 < 28500f)
			{
				fVar12 = 160000f;
			}
			else
			{
				fVar12 = 60000f;
			}
			if (is_ped_sitting_in_vehicle(player_ped_id(), Local_3078[iLocal_2644 /*7*/]))
			{
				func_422(iVar10);
				func_421(iVar10);
				if (func_253("CMN_GENGETBCK", 0, 0))
				{
					clear_prints();
				}
				if (!iLocal_101)
				{
					iLocal_2677 = get_game_timer();
				}
				if (iLocal_2508)
				{
					if (!iLocal_2547[19])
					{
						if (((iLocal_2547[1] && (iLocal_2547[12] || !func_418(1, 1, 0))) && !func_253("AR1_CHASE", 0, 0)) && fLocal_2628 > 17200f)
						{
							if (!is_help_message_being_displayed())
							{
								if (iLocal_2692 == 0)
								{
									iLocal_2692 = get_game_timer();
								}
								else if (get_game_timer() - iLocal_2692 > 2500)
								{
									if (_is_input_disabled(0))
									{
										func_55("AR1_RAGEBAR_KM", 17000);
									}
									else
									{
										func_55("AR1_RAGEBAR", 17000);
									}
									iLocal_2547[19] = 1;
									iLocal_2692 = 0;
									enable_special_ability(player_id(), 1);
									flash_ability_bar(10000);
								}
							}
						}
					}
					else if (!iLocal_2547[20])
					{
						if (iLocal_2692 == 0)
						{
							if (is_special_ability_active(player_id()))
							{
								iLocal_2692 = get_game_timer();
							}
						}
						else if (get_game_timer() - iLocal_2692 > 2000)
						{
							func_55("AR1_RAGEHOW", 13000);
							iLocal_2547[20] = 1;
							iLocal_2692 = get_game_timer();
							flash_ability_bar(0);
						}
					}
					else if (!iLocal_2547[21])
					{
						if (get_game_timer() - iLocal_2692 > 10000 && !is_help_message_being_displayed())
						{
							func_55("AR1_RAGESTAT", 13000);
							iLocal_2547[21] = 1;
							iLocal_2692 = get_game_timer();
							flash_ability_bar(0);
						}
					}
					else if (!iLocal_2547[22])
					{
						if (!is_special_ability_active(player_id()))
						{
							iLocal_2692 = get_game_timer();
						}
						else if (get_game_timer() - iLocal_2692 > 500 && !is_help_message_being_displayed())
						{
							if (_is_input_disabled(0))
							{
								func_55("AR1_RAGEDEACT_KM", 13000);
							}
							else
							{
								func_55("AR1_RAGEDEACT", 13000);
							}
							iLocal_2547[22] = 1;
							iLocal_2692 = get_game_timer();
						}
					}
					if (!Local_3093.f_1)
					{
						if (is_special_ability_active(player_id()))
						{
							func_345();
							Local_3093.f_1 = 1;
						}
					}
				}
				if (iLocal_2547[1])
				{
					if (!iLocal_2547[12])
					{
						if (iLocal_2693 == 0)
						{
							iLocal_2693 = get_game_timer();
						}
						else if (get_game_timer() - iLocal_2693 > 5000)
						{
							if ((is_player_control_on(player_id()) && func_418(1, 1, 0)) && !is_help_message_being_displayed())
							{
								iLocal_2547[12] = 1;
								iLocal_2693 = get_game_timer();
							}
						}
					}
					else if (func_47("AR1_CAMHELP"))
					{
						if (get_game_timer() - iLocal_2693 > 6000)
						{
							clear_help(0);
							iLocal_2693 = get_game_timer();
						}
					}
					if (!is_help_message_being_displayed())
					{
						if (((fLocal_2628 > 60000f && !iLocal_2547[13]) && is_entity_in_angled_area(player_ped_id(), -1210.676f, -578.6287f, 25.42328f, -1272.775f, -627.6569f, 37.72716f, 25f, 0, true, 0)) && is_player_control_on(player_id()))
						{
							func_55("AR1_BRAKE", 13000);
							iLocal_2547[13] = 1;
						}
						if (fLocal_2628 > 100000f)
						{
							get_vehicle_lights_state(Local_3078[iLocal_2644 /*7*/], &iVar13, &uVar14);
							if (!iLocal_2547[23])
							{
								if (is_entity_in_angled_area(player_ped_id(), -349.8183f, -716.8513f, 37.1367f, -351.9376f, -819.9261f, 29.76863f, 16.5f, 0, true, 0))
								{
									if (iVar13 == 0)
									{
										func_55("AR1_HEADHELP", 13000);
										iLocal_2547[23] = 1;
									}
									else
									{
										iLocal_2547[23] = 1;
									}
								}
							}
						}
						if (fLocal_2628 > 70000f)
						{
							if (!iLocal_2547[24])
							{
								if (is_entity_in_angled_area(player_ped_id(), -1134.825f, -900.8605f, 30.00168f, -1002.171f, -1127.49f, -2.783524f, 27.5f, 0, true, 0))
								{
									func_55("AR1_JUMPHELP", 13000);
									iLocal_2547[24] = 1;
								}
							}
						}
						if (fLocal_2628 > 100500f && fLocal_2628 < 106500f)
						{
							if (!iLocal_2547[79])
							{
								func_55("AR1_VEHCAMH", 13000);
								iLocal_2547[79] = 1;
							}
						}
						if (fLocal_2628 > 125000f)
						{
							if (!iLocal_2547[25])
							{
								if (is_entity_in_angled_area(player_ped_id(), -150.1928f, -653.9603f, 38.70139f, -69.53586f, -683.4604f, 31.17117f, 16.5f, 0, true, 0))
								{
									func_55("AR1_JUMPHELP2", 13000);
									iLocal_2547[25] = 1;
								}
							}
						}
					}
					if (iLocal_2547[79])
					{
						if (func_47("AR1_VEHCAMH"))
						{
							if (is_control_just_pressed(0, 0))
							{
								clear_help(1);
							}
						}
					}
					if (get_game_timer() - iLocal_2700 > 10000)
					{
						if (get_game_timer() - iLocal_2677 > 0)
						{
							if (is_entity_in_angled_area(Local_3078[iLocal_2644 /*7*/], get_offset_from_entity_in_world_coords(Local_3078[iLocal_2645 /*7*/], 0f, 1f, -2f), get_offset_from_entity_in_world_coords(Local_3078[iLocal_2645 /*7*/], 0f, 8f, 2f), 4f, 0, true, 0))
							{
								start_vehicle_horn(Local_3078[iLocal_2645 /*7*/], 1500, 0, 0);
								iLocal_2700 = get_game_timer();
							}
						}
					}
					if (!func_299(&Local_3095, 1))
					{
						if (is_player_control_on(player_id()))
						{
							if (iLocal_2652 == 0 || (get_game_timer() - iLocal_2652 > 20000 && fLocal_2628 < 144600f))
							{
								if (is_entity_touching_entity(Local_3078[0 /*7*/], Local_3078[1 /*7*/]))
								{
									if (func_298(&Local_3169, "ARM1AUD", "ARM1_CRASH", 7, 0, 0, 0))
									{
										Var15 = {func_361()};
										if (are_strings_equal(&Var15, "ARM1_CRASH_01"))
										{
											StringCopy(&cVar21, "thatscominoutourchecks", 24);
										}
										else if (are_strings_equal(&Var15, "ARM1_CRASH_02"))
										{
											StringCopy(&cVar21, "stoprubbinup", 24);
										}
										else if (are_strings_equal(&Var15, "ARM1_CRASH_03"))
										{
											StringCopy(&cVar21, "imabouttotake", 24);
										}
										else if (are_strings_equal(&Var15, "ARM1_CRASH_04"))
										{
											StringCopy(&cVar21, "imgonnatell", 24);
										}
										else if (are_strings_equal(&Var15, "ARM1_CRASH_05"))
										{
											StringCopy(&cVar21, "ayyofrank", 24);
										}
										else
										{
											StringCopy(&cVar21, "stoprubbinup", 24);
										}
										if (has_anim_dict_loaded(sLocal_2798))
										{
											task_play_anim(Local_2967, sLocal_2798, &cVar21, 8f, -8f, -1, 32, 0, 0, 0, 0);
										}
										iLocal_2652 = get_game_timer();
										iLocal_2505 = 0;
										iLocal_2506 = 0;
									}
								}
							}
							if (get_game_timer() - iLocal_2653 > 16000 && !iLocal_2506)
							{
								if (!iLocal_2505)
								{
									if ((fLocal_2628 > 20000f && fLocal_2628 < 144600f) && (fLocal_2628 < 55000f || fLocal_2628 > 60500f))
									{
										if (fVar9 < 400f)
										{
											if (func_298(&Local_3169, "ARM1AUD", "ARM1_TEASE", 7, 0, 0, 0))
											{
												Var27 = {func_361()};
												if (are_strings_equal(&Var27, "ARM1_TEASE_01"))
												{
													StringCopy(&cVar33, "hahahakeepup", 24);
												}
												else if (are_strings_equal(&Var27, "ARM1_TEASE_02"))
												{
													StringCopy(&cVar33, "manthisismeanttobe", 24);
												}
												else if (are_strings_equal(&Var27, "ARM1_TEASE_03"))
												{
													StringCopy(&cVar33, "rememberthis", 24);
												}
												else if (are_strings_equal(&Var27, "ARM1_TEASE_04"))
												{
													StringCopy(&cVar33, "cmonfrank", 24);
												}
												else if (are_strings_equal(&Var27, "ARM1_TEASE_05"))
												{
													StringCopy(&cVar33, "youaintfuckin", 24);
												}
												else if (are_strings_equal(&Var27, "ARM1_TEASE_06"))
												{
													StringCopy(&cVar33, "skoolinyoass", 24);
												}
												else if (are_strings_equal(&Var27, "ARM1_TEASE_07"))
												{
													StringCopy(&cVar33, "keeppoping", 24);
												}
												else
												{
													StringCopy(&cVar33, "cmonmynigga", 24);
												}
												if (has_anim_dict_loaded(sLocal_2797))
												{
													task_play_anim(Local_2967, sLocal_2797, &cVar33, 8f, -8f, -1, 32, 0, 0, 0, 0);
												}
												iLocal_2505 = 1;
											}
										}
									}
								}
								else if (func_298(&Local_3169, "ARM1AUD", "ARM1_RESP", 7, 0, 0, 0))
								{
									iLocal_2653 = get_game_timer();
									iLocal_2505 = 0;
								}
							}
							if (!iLocal_2506)
							{
								if (!iLocal_2505)
								{
									if (!iLocal_2547[26])
									{
										if (fLocal_2628 > 8000f && fLocal_2628 < 15000f)
										{
											if (func_298(&Local_3169, "ARM1AUD", "ARM1_RING", 7, 0, 0, 0))
											{
												iLocal_2547[26] = 1;
												iLocal_2526 = true;
											}
										}
									}
									else if (!iLocal_2547[72])
									{
										if (func_298(&Local_3169, "ARM1AUD", "ARM1_INDIC", 7, 0, 0, 0))
										{
											iLocal_2547[72] = 1;
											iLocal_2506 = 1;
										}
									}
									if (fVar9 < 2500f)
									{
										if (fLocal_2628 > 42000f && fLocal_2628 < 43000f)
										{
											iLocal_2506 = func_298(&Local_3169, "ARM1AUD", "ARM1_RIGHT", 7, 0, 0, 0);
										}
										if (fLocal_2628 > 48000f && fLocal_2628 < 49000f)
										{
											iLocal_2506 = func_298(&Local_3169, "ARM1AUD", "ARM1_RIGHT", 7, 0, 0, 0);
										}
										if (fLocal_2628 > 49000f && fLocal_2628 < 52000f)
										{
											if (!iLocal_2547[73])
											{
												if (get_random_int_in_range(0, 2) == 0)
												{
													if (func_298(&Local_3169, "ARM1AUD", "ARM1_STDIO", 7, 0, 0, 0))
													{
														iLocal_2506 = 0;
														iLocal_2505 = 0;
														iLocal_2547[73] = 1;
													}
												}
												else if (func_298(&Local_3169, "ARM1AUD", "ARM1_STDIO2", 7, 0, 0, 0))
												{
													iLocal_2506 = 0;
													iLocal_2505 = 0;
													iLocal_2547[73] = 1;
												}
											}
										}
										if (fLocal_2628 > 61000f && fLocal_2628 < 62000f)
										{
											if (get_random_int_in_range(0, 2) == 0)
											{
												iLocal_2506 = func_298(&Local_3169, "ARM1AUD", "ARM1_ALLEY", 7, 0, 0, 0);
											}
											else
											{
												iLocal_2506 = func_298(&Local_3169, "ARM1AUD", "ARM1_ALLEY2", 7, 0, 0, 0);
											}
										}
										if (fLocal_2628 > 78000f && fLocal_2628 < 79000f)
										{
											iLocal_2506 = func_298(&Local_3169, "ARM1AUD", "ARM1_LEFT", 7, 0, 0, 0);
										}
										if (fLocal_2628 > 95500f && fLocal_2628 < 96500f)
										{
											iLocal_2506 = func_298(&Local_3169, "ARM1AUD", "ARM1_LEFT", 7, 0, 0, 0);
										}
										if (fLocal_2628 > 119300f && fLocal_2628 < 120300f)
										{
											iLocal_2506 = func_298(&Local_3169, "ARM1AUD", "ARM1_RIGHT", 7, 0, 0, 0);
										}
										if (fLocal_2628 > 123500f && fLocal_2628 < 124500f)
										{
											if (get_random_int_in_range(0, 2) == 0)
											{
												iLocal_2506 = func_298(&Local_3169, "ARM1AUD", "ARM1_PARK", 7, 0, 0, 0);
											}
											else
											{
												iLocal_2506 = func_298(&Local_3169, "ARM1AUD", "ARM1_PARK3", 7, 0, 0, 0);
											}
										}
									}
								}
							}
							else if (func_298(&Local_3169, "ARM1AUD", "ARM1_OKAY", 7, 0, 0, 0))
							{
								iLocal_2506 = 0;
								iLocal_2505 = 0;
							}
							if (!iLocal_2505 && !iLocal_2506)
							{
								if (fLocal_2628 > 141500f && fLocal_2628 < 142500f)
								{
									if (!iLocal_2547[28])
									{
										if (fVar9 < 2500f)
										{
											if (get_random_int_in_range(0, 2) == 0)
											{
												if (func_298(&Local_3169, "ARM1AUD", "ARM1_BANK", 7, 0, 0, 0))
												{
													iLocal_2547[28] = 1;
													iLocal_2506 = 0;
													iLocal_2505 = 0;
												}
											}
											else if (func_298(&Local_3169, "ARM1AUD", "ARM1_BANK2", 7, 0, 0, 0))
											{
												iLocal_2547[28] = 1;
												iLocal_2506 = 0;
												iLocal_2505 = 0;
											}
										}
									}
								}
								if (fLocal_2628 > 50000f)
								{
									if (!iLocal_2547[15])
									{
										if (iLocal_2547[0])
										{
											if (is_entity_in_angled_area(player_ped_id(), -1055.957f, -480.5382f, 42.98192f, -1169.248f, -545.5168f, 27.53709f, 24f, 0, true, 0))
											{
												if (func_298(&Local_3169, "ARM1AUD", "ARM1_ALIEN", 7, 0, 0, 0))
												{
													iLocal_2547[15] = 1;
													iLocal_2506 = 0;
													iLocal_2505 = 0;
												}
											}
											else
											{
												iLocal_2547[15] = 1;
												iLocal_2506 = 0;
												iLocal_2505 = 0;
											}
										}
									}
								}
								if (fLocal_2628 > 87150f && fLocal_2628 < 88150f)
								{
									if (!iLocal_2547[29])
									{
										if (fVar9 < 2500f)
										{
											if (func_298(&Local_3169, "ARM1AUD", "ARM1_HILL", 7, 0, 0, 0))
											{
												iLocal_2547[29] = 1;
												iLocal_2506 = 0;
												iLocal_2505 = 0;
											}
										}
									}
								}
								if (fLocal_2628 > 20000f && fVar9 > 6400f)
								{
									if (!iLocal_2496)
									{
										if (!iLocal_2547[30])
										{
											if (get_game_timer() - iLocal_2697 > 10000)
											{
												if (func_298(&Local_3169, "ARM1AUD", "ARM1_WRONG", 7, 0, 0, 0))
												{
													iLocal_2547[30] = 1;
													iLocal_2506 = 0;
													iLocal_2505 = 0;
													iLocal_2695++;
													iLocal_2697 = get_game_timer();
												}
											}
										}
									}
									if (!iLocal_2547[31])
									{
										if (get_game_timer() - iLocal_2698 > 10000 && get_game_timer() - iLocal_2697 > 4000)
										{
											if (fVar9 > 10000f)
											{
												if (func_298(&Local_3169, "ARM1AUD", "ARM1_WARN", 7, 0, 0, 0))
												{
													iLocal_2547[31] = 1;
													iLocal_2506 = 0;
													iLocal_2505 = 0;
													iLocal_2696++;
													iLocal_2698 = get_game_timer();
												}
											}
										}
									}
									if (!iLocal_2547[32])
									{
										if (get_game_timer() - iLocal_2699 > 10000 && get_game_timer() - iLocal_2698 > 4000)
										{
											if (fVar9 > 22500f)
											{
												if (func_298(&Local_3169, "ARM1AUD", "ARM1_WARN", 7, 0, 0, 0))
												{
													iLocal_2547[32] = 1;
													iLocal_2506 = 0;
													iLocal_2505 = 0;
													iLocal_2696++;
													iLocal_2699 = get_game_timer();
												}
											}
										}
									}
								}
								else
								{
									if (iLocal_2695 < 4)
									{
										iLocal_2547[30] = 1;
									}
									if (iLocal_2696 < 5)
									{
										iLocal_2547[31] = 1;
										iLocal_2547[32] = 1;
									}
								}
								if (((fLocal_2628 > 25000f && fLocal_2628 < 144600f) && get_game_timer() - iLocal_2676 > 15000) && get_game_timer() - iLocal_2677 > 0)
								{
									if (get_game_timer() - iLocal_2677 < 1000 && fVar9 < 400f)
									{
										if (func_298(&Local_3169, "ARM1AUD", "ARM1_FRONT4", 7, 0, 0, 0))
										{
											iLocal_2506 = 0;
											iLocal_2505 = 0;
											iLocal_2676 = get_game_timer();
										}
									}
									if ((get_game_timer() - iLocal_2677 > 2000 && fVar9 < 3600f) && fVar9 > 400f)
									{
										if (!iLocal_2547[33])
										{
											if (func_298(&Local_3169, "ARM1AUD", "ARM1_FRONT1", 7, 0, 0, 0))
											{
												iLocal_2506 = 0;
												iLocal_2505 = 0;
												iLocal_2547[33] = 1;
												iLocal_2676 = get_game_timer();
											}
										}
										else if (!iLocal_2547[34])
										{
											if (func_298(&Local_3169, "ARM1AUD", "ARM1_FRONT2", 7, 0, 0, 0))
											{
												iLocal_2506 = 0;
												iLocal_2505 = 0;
												iLocal_2547[34] = 1;
												iLocal_2676 = get_game_timer();
											}
										}
										else if (!iLocal_2547[35])
										{
											if (func_298(&Local_3169, "ARM1AUD", "ARM1_FRONT3", 7, 0, 0, 0))
											{
												iLocal_2506 = 0;
												iLocal_2505 = 0;
												iLocal_2547[35] = 1;
												iLocal_2676 = get_game_timer();
											}
										}
									}
								}
								if (get_game_timer() - iLocal_2675 > 10000)
								{
									if (fVar9 < 2500f)
									{
										if (((fLocal_2628 > 17000f && fLocal_2628 < 25000f) || (fLocal_2628 > 32000f && fLocal_2628 < 39500f)) || (fLocal_2628 > 102000f && fLocal_2628 < 108000f))
										{
											iVar39 = get_random_int_in_range(0, 6);
											if (iVar39 == 0)
											{
												sVar40 = "ARM1_CHAT1";
												iVar41 = 65;
											}
											else if (iVar39 == 1)
											{
												sVar40 = "ARM1_CHAT2";
												iVar41 = 66;
											}
											else if (iVar39 == 2)
											{
												sVar40 = "ARM1_CHAT3";
												iVar41 = 67;
											}
											else if (iVar39 == 3)
											{
												sVar40 = "ARM1_CHAT4";
												iVar41 = 68;
											}
											else if (iVar39 == 4)
											{
												sVar40 = "ARM1_CHAT6";
												iVar41 = 70;
											}
											else
											{
												sVar40 = "ARM1_CHAT7";
												iVar41 = 71;
											}
											if (!iLocal_2547[16] && !iLocal_2547[17])
											{
												if (!iLocal_2547[37])
												{
													if (!iLocal_2547[26])
													{
														sVar40 = "ARM1_RING";
														iVar41 = 18;
													}
													else
													{
														iLocal_2547[37] = 1;
													}
												}
												if (iLocal_2547[37])
												{
													if (func_414() == 0)
													{
														sVar40 = "ARM1_TOW2";
														iVar41 = 17;
													}
													else
													{
														sVar40 = "ARM1_TOW2";
														iVar41 = 17;
													}
												}
											}
											if (!iLocal_2547[iVar41])
											{
												if (func_298(&Local_3169, "ARM1AUD", sVar40, 7, 0, 0, 0))
												{
													if (are_strings_equal(sVar40, "ARM1_RING"))
													{
														iLocal_2547[37] = 1;
														iLocal_2526 = true;
													}
													else
													{
														iLocal_2506 = 0;
														iLocal_2505 = 0;
														iLocal_2547[iVar41] = 1;
														iLocal_2675 = get_game_timer();
													}
												}
											}
										}
									}
								}
							}
						}
					}
					if (fLocal_2628 > 10000f)
					{
						iVar42 = false;
						if (((iVar10 == iLocal_2424[0] || iVar10 == iLocal_2424[1]) || iVar10 == iLocal_2424[6]) || iVar10 == iLocal_2274[114])
						{
							iVar42 = true;
						}
						if (get_game_timer() - iLocal_2657 > 3000 || (iVar42 && get_game_timer() - iLocal_2657 > 1000))
						{
							if (!func_98())
							{
								if (!is_entity_dead(iVar10, 0) && iVar10 != Local_3078[iLocal_2645 /*7*/])
								{
									iVar43 = false;
									iVar44 = 0;
									if (iVar42)
									{
										iVar44 = 1;
									}
									else if (is_entity_touching_entity(iVar10, Local_3078[iLocal_2644 /*7*/]))
									{
										iVar43 = true;
									}
									else if (absf(get_entity_speed(iVar10)) > 2f)
									{
										if (absf(get_entity_heading(iVar10) - get_entity_heading(Local_3078[iLocal_2644 /*7*/])) > 60f)
										{
											iVar44 = 1;
										}
									}
									if (iVar43 || iVar44)
									{
										iLocal_2844 = get_ped_in_vehicle_seat(iVar10, -1);
										if (!is_ped_injured(iLocal_2844))
										{
											if (iVar43)
											{
												func_239(iLocal_2844, "GENERIC_CURSE_HIGH", 6);
											}
											else
											{
												func_239(iLocal_2844, "GENERIC_INSULT_HIGH", 6);
											}
											iLocal_2657 = get_game_timer();
										}
									}
								}
							}
						}
					}
				}
				if (!iLocal_2496)
				{
					if (!does_blip_exist(Local_3078[iLocal_2645 /*7*/].f_1))
					{
						func_237();
						Local_3078[iLocal_2645 /*7*/].f_1 = func_301(Local_3078[iLocal_2645 /*7*/], 0, 0);
					}
					func_413(Local_3078[iLocal_2645 /*7*/].f_1, Local_3078[iLocal_2645 /*7*/], sqrt(fVar12), 0.8f, 0);
					if (!iLocal_2547[38])
					{
						if (!is_ped_injured(iLocal_2845))
						{
							if (iLocal_2521)
							{
								func_230(&Local_3169, 7, iLocal_2845, "BABYDICK", 0, 1);
								func_412(iLocal_2845, "ARM1_CUAA", "BABYDICK", 6);
								iLocal_2547[38] = 1;
							}
						}
						else
						{
							iLocal_2547[38] = 1;
						}
					}
					if (!iLocal_2547[1])
					{
						if (!func_299(&Local_3095, 2))
						{
							func_263("AR1_CHASE", 6000, 0);
							iLocal_2547[1] = 1;
						}
					}
					if ((fLocal_2628 > get_total_duration_of_vehicle_recording(iLocal_2649, sLocal_2784) - 6000f && fVar9 < 400f) || (fLocal_2628 > 135000f && is_entity_in_angled_area(player_ped_id(), 13.99176f, -675.8222f, 31.48455f, 20.46627f, -688.1566f, 34.48455f, 4f, 0, true, 0)))
					{
						iLocal_2493 = true;
						iLocal_2509 = true;
						iLocal_3166 = 2;
					}
				}
				else
				{
					vLocal_2736 = {get_offset_from_entity_in_world_coords(Local_3078[iLocal_2645 /*7*/], -6f, 0f, 0f)};
					if (!does_blip_exist(iLocal_2882))
					{
						func_237();
						iLocal_2882 = func_48(vLocal_2736, 0);
					}
					if (!does_blip_exist(iLocal_2884))
					{
						iLocal_2884 = func_48(-88.1825f, -675.9736f, 34.2665f, 1);
						set_blip_alpha(iLocal_2884, 0);
					}
					if (!iLocal_2547[39] && !func_299(&Local_3095, 2))
					{
						func_263("AR1_PARK", 7500, 0);
						iLocal_2547[39] = 1;
					}
					if (vdist2(get_entity_coords(Local_3078[iLocal_2644 /*7*/], 1), vLocal_2736) < 25f)
					{
						set_player_control(player_id(), false, 0);
						iLocal_2493 = false;
						iLocal_2509 = false;
						iLocal_3166 = 2;
					}
					if (is_entity_in_angled_area(Local_3078[iLocal_2644 /*7*/], 25.32066f, -664.571f, 30.62743f, 13.76605f, -690.2087f, 36.02796f, 12.75f, 0, true, 0))
					{
						iLocal_2493 = false;
						iLocal_2509 = true;
						iLocal_3166 = 2;
					}
				}
				if (fLocal_2628 > get_total_duration_of_vehicle_recording(iLocal_2649, sLocal_2784) - 55000f)
				{
					request_vehicle_recording(iLocal_2646, sLocal_2784);
					request_vehicle_recording(iLocal_2647, sLocal_2784);
					request_vehicle_recording(iLocal_2648, sLocal_2784);
					request_vehicle_recording(300, sLocal_2784);
					if (fLocal_2628 > get_total_duration_of_vehicle_recording(iLocal_2649, sLocal_2784) - 20000f)
					{
						request_model(joaat("police3"));
						request_model(joaat("s_m_y_cop_01"));
						func_349(1, 0);
						request_anim_dict("map_objects");
						request_anim_dict(sLocal_2790);
					}
				}
			}
			else
			{
				if (!does_blip_exist(Local_3078[iLocal_2644 /*7*/].f_1))
				{
					func_237();
					Local_3078[iLocal_2644 /*7*/].f_1 = func_411(Local_3078[iLocal_2644 /*7*/], 0, 0);
				}
				if (func_253("AR1_PARK", 0, 0))
				{
					clear_prints();
				}
				if (!iLocal_2547[40])
				{
					func_263("CMN_GENGETBCK", 7500, 0);
					iLocal_2547[40] = 1;
				}
				if ((((func_47("AR1_CAMHELP") || func_47("AR1_HEADHELP")) || func_47("AR1_HINTHELP")) || func_47("AR1_BRAKE")) || func_47("AR1_VEHCAMH"))
				{
					clear_help(1);
				}
				func_345();
				iLocal_2506 = 0;
				iLocal_2505 = 0;
				if (vdist2(vVar5, get_entity_coords(Local_3078[iLocal_2644 /*7*/], 1)) > 40000f)
				{
					func_752(13);
				}
			}
			if (!is_ped_injured(Local_2967))
			{
				if (fVar9 > fVar12)
				{
					func_752(5);
				}
				if (is_entity_on_fire(Local_2967))
				{
					if (get_game_timer() - iLocal_2717 > 1000)
					{
						set_entity_health(Local_2967, false);
					}
				}
				else
				{
					iLocal_2717 = get_game_timer();
				}
			}
		}
		if (!is_entity_dead(Local_3078[iLocal_2645 /*7*/], 0))
		{
			if (!is_playback_going_on_for_vehicle(Local_3078[iLocal_2645 /*7*/]))
			{
				if (timera() > 10000)
				{
					freeze_entity_position(Local_3078[iLocal_2645 /*7*/], true);
					if (has_entity_been_damaged_by_entity(Local_3078[iLocal_2645 /*7*/], player_ped_id(), 1))
					{
						iVar45 = _0x42A4BEB35D372407(Local_3078[iLocal_2645 /*7*/]) + _0x2C8CBFE1EA5FC631(Local_3078[iLocal_2645 /*7*/]);
						if ((get_vehicle_petrol_tank_health(Local_3078[iLocal_2645 /*7*/]) < 200f || get_vehicle_engine_health(Local_3078[iLocal_2645 /*7*/]) < 200f) || iVar45 > 2)
						{
							func_752(21);
						}
						if (get_game_timer() - iLocal_2719 > 0)
						{
							func_239(Local_2967, "GENERIC_INSULT_HIGH", 3);
							task_look_at_entity(Local_2967, player_ped_id(), 1000, 2048, 2);
							iLocal_2719 = get_game_timer() + get_random_int_in_range(4000, 7000);
							clear_entity_last_damage_entity(Local_3078[iLocal_2645 /*7*/]);
						}
					}
				}
			}
			if (is_entity_on_fire(Local_3078[iLocal_2645 /*7*/]))
			{
				func_752(21);
			}
		}
		if (iLocal_3165 == 3)
		{
			func_392(&uLocal_3334, Local_3078[iLocal_2645 /*7*/], "AR1_CAMHELP", 0, 1, 1, 1);
		}
		else
		{
			func_392(&uLocal_3334, Local_3078[iLocal_2645 /*7*/], "AR1_CAMHELP", 0, 1, 0, 1);
		}
		if (is_gameplay_hint_active() && !is_control_pressed(0, 80))
		{
			if (get_game_timer() - iLocal_2718 > 5000 && !is_help_message_being_displayed())
			{
				if (!iLocal_2547[78])
				{
					func_55("AR1_CAMHELP2", -1);
					iLocal_2547[78] = 1;
				}
			}
		}
		else
		{
			if (!is_gameplay_hint_active() && func_47("AR1_CAMHELP2"))
			{
				clear_help(1);
			}
			iLocal_2718 = get_game_timer();
		}
		if (iLocal_3165 == 3)
		{
			switch (iLocal_2702)
			{
				case 0:
					if (iLocal_2526)
					{
						if (is_audio_scene_active("ARM_1_DRIVE_START"))
						{
							stop_audio_scene("ARM_1_DRIVE_START");
						}
						if (!is_audio_scene_active("ARM_1_DRIVE_PHONE_LAMAR"))
						{
							start_audio_scene("ARM_1_DRIVE_PHONE_LAMAR");
						}
						iLocal_2702++;
					}
					break;
				
				case 1:
					Var47 = {func_241()};
					if (iLocal_2547[26])
					{
						if (iLocal_2547[72])
						{
							if (!are_strings_equal("ARM1_INDIC", &Var47))
							{
								iVar46 = true;
							}
						}
					}
					else if (iLocal_2547[16] || iLocal_2547[17])
					{
						if (!are_strings_equal("ARM1_TOW", &Var47) && !are_strings_equal("ARM1_TOW2", &Var47))
						{
							iVar46 = true;
						}
					}
					if (iVar46)
					{
						if (is_audio_scene_active("ARM_1_DRIVE_PHONE_LAMAR"))
						{
							stop_audio_scene("ARM_1_DRIVE_PHONE_LAMAR");
						}
						if (!is_audio_scene_active("ARM_1_DRIVE_FOLLOW_LAMAR"))
						{
							start_audio_scene("ARM_1_DRIVE_FOLLOW_LAMAR");
						}
						iLocal_2702++;
					}
					break;
			}
			switch (iLocal_2704)
			{
				case 0:
					if (fLocal_2628 > 51500f)
					{
						if (is_entity_in_angled_area(player_ped_id(), -1048.17f, -473.1709f, 43.59984f, -1062.492f, -486.3139f, 30.66454f, 26.25f, 0, true, 0))
						{
							if (is_audio_scene_active("ARM_1_DRIVE_FOLLOW_LAMAR"))
							{
								stop_audio_scene("ARM_1_DRIVE_FOLLOW_LAMAR");
							}
							if (!is_audio_scene_active("ARM_1_DRIVE_THROUGH_STUDIO"))
							{
								start_audio_scene("ARM_1_DRIVE_THROUGH_STUDIO");
							}
							iLocal_2704++;
						}
					}
					break;
				
				case 1:
					if (is_entity_in_angled_area(player_ped_id(), -1214.699f, -582.2675f, 34.07594f, -1209.03f, -578.9652f, 21.30647f, 26.25f, 0, true, 0) || is_entity_in_angled_area(player_ped_id(), -1048.203f, -472.5669f, 43.38507f, -1046.014f, -466.9206f, 30.80215f, 45.75f, 0, true, 0))
					{
						if (is_audio_scene_active("ARM_1_DRIVE_THROUGH_STUDIO"))
						{
							stop_audio_scene("ARM_1_DRIVE_THROUGH_STUDIO");
						}
						iLocal_2704++;
					}
					break;
				
				case 2:
					if (!is_audio_scene_active("ARM_1_DRIVE_TO_CANALS"))
					{
						start_audio_scene("ARM_1_DRIVE_TO_CANALS");
					}
					iLocal_2704++;
					break;
				}
		}
		switch (iLocal_2705)
		{
			case 0:
				if (fLocal_2628 > 80000f)
				{
					if (is_entity_in_angled_area(player_ped_id(), -1169.196f, -849.9986f, 21.09482f, -961.9859f, -1197.101f, -1.209268f, 136.5f, 0, true, 0))
					{
						if (is_audio_scene_active("ARM_1_DRIVE_TO_CANALS"))
						{
							stop_audio_scene("ARM_1_DRIVE_TO_CANALS");
						}
						iLocal_2705++;
					}
				}
				break;
			
			case 1:
				if (!is_audio_scene_active("ARM_1_DRIVE_OVER_BRIDGES"))
				{
					start_audio_scene("ARM_1_DRIVE_OVER_BRIDGES");
				}
				iLocal_2705++;
				break;
		}
		switch (iLocal_2706)
		{
			case 0:
				if (fLocal_2628 > 120000f)
				{
					if (is_entity_in_angled_area(player_ped_id(), -313.1678f, -834.3452f, 40.87144f, -288.5447f, -647.5313f, 27.05053f, 115.5f, 0, true, 0))
					{
						if (is_audio_scene_active("ARM_1_DRIVE_OVER_BRIDGES"))
						{
							stop_audio_scene("ARM_1_DRIVE_OVER_BRIDGES");
						}
						iLocal_2706++;
					}
				}
				break;
			
			case 1:
				if (!is_audio_scene_active("ARM_1_DRIVE_THROUGH_GARAGE"))
				{
					start_audio_scene("ARM_1_DRIVE_THROUGH_GARAGE");
				}
				iLocal_2706++;
				break;
		}
		if (is_gameplay_hint_active())
		{
			if (!is_audio_scene_active("ARM_1_LAMAR_FOCUS_CAM"))
			{
				start_audio_scene("ARM_1_LAMAR_FOCUS_CAM");
			}
		}
		else if (is_audio_scene_active("ARM_1_LAMAR_FOCUS_CAM"))
		{
			stop_audio_scene("ARM_1_LAMAR_FOCUS_CAM");
		}
		if (!iLocal_2508)
		{
			disable_control_action(0, 28, 1);
		}
		if (vdist2(vVar5, -202.4f, -638.9f, 33.7f) < 22500f)
		{
			if (iLocal_2936 == 0)
			{
				iLocal_2936 = get_interior_at_coords_with_type(-202.4f, -638.9f, 33.7f, "dt1_02_carpark");
			}
			else if (!is_interior_ready(iLocal_2936))
			{
				_0x2CA429C029CCF247(iLocal_2936);
			}
		}
		else if (vdist2(vVar5, -202.4f, -638.9f, 33.7f) > 40000f)
		{
			if (iLocal_2936 != 0)
			{
				unpin_interior(iLocal_2936);
				iLocal_2936 = 0;
			}
		}
		if (fLocal_2628 > 100000f)
		{
			if (vdist2(vVar5, 34f, -638.5f, 31.6f) < 22500f)
			{
				if (!is_new_load_scene_active())
				{
					new_load_scene_start(46.6f, -624.3f, 32.1f, func_391(-1.1f, 0f, 137.4f), 100f, 0);
				}
			}
			else if (vdist2(vVar5, 34f, -638.5f, 31.6f) > 40000f)
			{
				if (is_new_load_scene_active())
				{
					new_load_scene_stop();
				}
			}
		}
	}
	if (iLocal_3166 == 2)
	{
		clear_prints();
		clear_help(1);
		func_237();
		func_466(0);
		func_464(0);
		func_353(0);
		func_247(&Local_3095, 1, 0);
		func_390(&uLocal_3334, 0, 0);
		if (iLocal_2936 != 0)
		{
			unpin_interior(iLocal_2936);
			iLocal_2936 = 0;
		}
		func_1();
		iLocal_2494 = false;
		iLocal_2495 = false;
		if (is_vehicle_driveable(Local_3078[iLocal_2645 /*7*/], 0) && is_vehicle_driveable(Local_3078[iLocal_2644 /*7*/], 0))
		{
			_0x1F9FB66F3A3842D2(Local_3078[iLocal_2645 /*7*/], 0);
			_0x1AA8A837D2169D94(Local_3078[iLocal_2644 /*7*/], 0);
			if (iLocal_2511)
			{
				set_entity_collision(Local_3078[iLocal_2645 /*7*/], true, 0);
				iLocal_2511 = 0;
			}
			if (iLocal_2683 - get_entity_health(Local_3078[iLocal_2644 /*7*/]) > 250)
			{
				func_765(61, 1);
				iLocal_2494 = true;
			}
			if (iLocal_2684 - get_entity_health(Local_3078[iLocal_2645 /*7*/]) > 250)
			{
				iLocal_2495 = true;
			}
			_set_vehicle_engine_power_multiplier(Local_3078[iLocal_2644 /*7*/], 0f);
		}
		func_389(iLocal_2806);
		func_304(&iLocal_2806, 1);
		if (iLocal_2687 != -1)
		{
			remove_navmesh_blocking_object(iLocal_2687);
			iLocal_2687 = -1;
		}
		if (iLocal_2688 != -1)
		{
			remove_navmesh_blocking_object(iLocal_2688);
			iLocal_2688 = -1;
		}
		remove_anim_dict(sLocal_2791);
		remove_anim_dict(sLocal_2798);
		remove_anim_dict(sLocal_2797);
		remove_anim_dict(sLocal_2799);
		set_all_random_peds_flee(player_id(), 0);
		set_aggressive_horns(0);
		settimerb(0);
		_set_unk_map_flag(0);
		set_ped_population_budget(3);
		func_465(0);
		iLocal_2643 = 0;
		iLocal_3166 = 0;
		iLocal_3165 = 5;
	}
	if (iLocal_3166 == 3)
	{
		func_797(5, 1);
	}
}

void func_389(int iParam0)
{
	if (is_vehicle_driveable(iParam0, 0))
	{
		if (is_playback_going_on_for_vehicle(iParam0))
		{
			stop_playback_recorded_vehicle(iParam0);
		}
	}
}

void func_390(var uParam0, int iParam1, int iParam2)
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
		if (*uParam0.f_11)
		{
			_start_screen_effect("FocusOut", false, 0);
			play_sound_frontend(-1, "FocusOut", "HintCamSounds", 1);
			*uParam0.f_11 = 0;
		}
	}
	set_cinematic_button_active(true);
	*uParam0.f_1 = 0;
	*uParam0 = 0;
	*uParam0.f_2 = -1;
	*uParam0.f_8 = 0;
	*uParam0.f_5 = 0;
	*uParam0.f_6 = 0;
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
	if (!is_string_null(*uParam0.f_3))
	{
		if (func_47(*uParam0.f_3))
		{
			clear_help(1);
		}
	}
	if (!is_string_null(sVar0))
	{
		if (func_47(sVar0))
		{
			clear_help(1);
		}
	}
}

Vector3 func_391(vector3 vParam0)
{
	return -sin(vParam0.z) * cos(vParam0.x), cos(vParam0.z) * cos(vParam0.x), sin(vParam0.x);
}

void func_392(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_393(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, iParam4, iParam5, iParam6);
}

void func_393(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, int iParam5, var uParam6, int iParam7)
{
	func_394(uParam0, iParam1, vParam2, sParam5, iParam6, iParam7, uParam8, iParam9);
}

void func_394(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, int iParam5, var uParam6, int iParam7)
{
	if (!is_ped_in_any_vehicle(player_ped_id(), 1))
	{
		func_390(uParam0, 0, 0);
	}
	*uParam0.f_6 = 2;
	func_395(uParam0, iParam1, vParam2, sParam5, iParam6, iParam7, uParam8, iParam9);
}

void func_395(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, int iParam5, var uParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	
	if (*uParam0.f_1 && is_gameplay_hint_active())
	{
		if (get_game_timer() >= *uParam0.f_8 + *uParam0.f_9)
		{
			*uParam0.f_1 = 0;
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
	if (func_47(iVar0))
	{
		func_410();
	}
	if (func_409(iParam1) && is_entity_visible(iParam1))
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
			if (func_404(uParam0, iParam7, iParam9, 0))
			{
				func_400(uParam0, iParam1, vParam2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (*uParam0.f_6 == 2)
			{
				if (func_399(iVar0))
				{
					if ((is_string_null(*uParam0.f_3) && !is_string_null(iVar0)) && is_ped_in_any_vehicle(player_ped_id(), 0))
					{
						if ((iVar1 && !is_help_message_being_displayed()) && uParam8)
						{
							if (!func_47(iVar0))
							{
								func_55(iVar0, -1);
								*uParam0.f_3 = iVar0;
								if (are_strings_equal("CMN_HINT", iVar0))
								{
									func_398(1);
								}
							}
						}
					}
				}
			}
			else if (func_399(iVar0))
			{
				if (is_string_null(*uParam0.f_3) && !is_string_null(iVar0))
				{
					if (((is_entity_on_screen(iParam1) && iVar1) && !is_help_message_being_displayed()) && uParam8)
					{
						if (!func_47(iVar0))
						{
							func_55(iVar0, -1);
							*uParam0.f_3 = iVar0;
							if (are_strings_equal("CMN_HINT", iVar0))
							{
								func_398(1);
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
				if (func_47(sParam5))
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
						func_390(uParam0, iVar0, 1);
					}
				}
				else if (is_ped_in_any_heli(player_ped_id()))
				{
					if (_0xEE778F8C7E1142E2(6) == 3 || _0xEE778F8C7E1142E2(6) == 4)
					{
						func_390(uParam0, iVar0, 1);
					}
				}
				else if (is_ped_in_any_plane(player_ped_id()))
				{
					if (_0xEE778F8C7E1142E2(4) == 3 || _0xEE778F8C7E1142E2(4) == 4)
					{
						func_390(uParam0, iVar0, 1);
					}
				}
				else if (is_ped_in_any_sub(player_ped_id()))
				{
					if (_0xEE778F8C7E1142E2(5) == 3 || _0xEE778F8C7E1142E2(5) == 4)
					{
						func_390(uParam0, iVar0, 1);
					}
				}
				else if (is_ped_on_any_bike(player_ped_id()))
				{
					if (_0xEE778F8C7E1142E2(2) == 3 || _0xEE778F8C7E1142E2(2) == 4)
					{
						func_390(uParam0, iVar0, 1);
					}
				}
				else if (get_follow_vehicle_cam_view_mode() == 3 || get_follow_vehicle_cam_view_mode() == 4)
				{
					func_390(uParam0, iVar0, 1);
				}
			}
			if (!func_404(uParam0, iParam7, iParam9, 0))
			{
				if ((!*uParam0 && !*uParam0.f_1) && !func_397(uParam0))
				{
					func_396(uParam0);
				}
			}
		}
	}
	else
	{
		func_390(uParam0, iVar0, 0);
	}
}

void func_396(var uParam0)
{
	if (func_409(player_ped_id()))
	{
		task_clear_look_at(player_ped_id());
	}
	if (is_gameplay_hint_active())
	{
		set_cinematic_button_active(true);
		stop_gameplay_hint(0);
		stop_audio_scene("HINT_CAM_SCENE");
		_stop_screen_effect("FocusIn");
		if (*uParam0.f_11)
		{
			_start_screen_effect("FocusOut", false, 0);
			play_sound_frontend(-1, "FocusOut", "HintCamSounds", 1);
			*uParam0.f_11 = 0;
		}
	}
	*uParam0.f_2 = -1;
	*uParam0 = 1;
}

bool func_397(var uParam0)
{
	int iVar0;
	
	if (*uParam0.f_2 > 0)
	{
		iVar0 = *uParam0.f_10 / 2;
		if (*uParam0.f_2 + iVar0 > get_game_timer())
		{
			return true;
		}
	}
	return false;
}

int func_398(int iParam0)
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

bool func_399(char* sParam0)
{
	if (!func_418(1, 1, 0))
	{
		if ((!is_string_null_or_empty(sParam0) && func_47(sParam0)) || func_47("CMN_HINT"))
		{
			clear_help(1);
		}
		return false;
	}
	switch (Global_35711)
	{
		case 0:
		case 3:
			if (func_398(0) < 3)
			{
				return true;
			}
			break;
		
		case 4:
			if (func_398(0) < 1)
			{
				return true;
			}
			break;
		
		case 5:
		case 15:
			if (func_398(0) < 1)
			{
				return true;
			}
			break;
		
		default:
			break;
	}
	return false;
}

void func_400(var uParam0, int iParam1, vector3 vParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (is_entity_dead(iParam1, 0))
	{
		func_390(uParam0, 0, 0);
	}
	if (func_403(vParam2, 0f, 0f, 0f, 0))
	{
		if (is_entity_a_ped(iParam1))
		{
			iVar0 = get_ped_index_from_entity_index(iParam1);
			if (!is_ped_in_any_vehicle(iVar0, 0))
			{
				if (is_ped_a_player(iVar0))
				{
					if (!func_401())
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
	iVar1 = *uParam0.f_9;
	iVar2 = *uParam0.f_10;
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
	*uParam0.f_11 = 1;
	*uParam0.f_8 = get_game_timer();
	*uParam0.f_1 = 1;
	*uParam0 = 0;
}

int func_401()
{
	return func_402(player_id());
}

bool func_402(int iParam0)
{
	if (get_entity_model(get_player_ped(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return true;
	}
	return false;
}

int func_403(vector3 vParam0, vector3 vParam1, int iParam2)
{
	if (iParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_404(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (*uParam0.f_1)
	{
		if (get_game_timer() >= *uParam0.f_8 + *uParam0.f_9)
		{
			*uParam0.f_1 = 0;
		}
	}
	switch (*uParam0.f_5)
	{
		case 0:
			*uParam0.f_7 = 0;
			if (*uParam0.f_6 == 0)
			{
				if (is_ped_in_any_vehicle(player_ped_id(), 1))
				{
					if (func_408(iParam1, iParam2, iParam3))
					{
						*uParam0.f_4 = get_game_timer();
						*uParam0.f_5 = 1;
						*uParam0.f_7 = 1;
					}
				}
				else if (func_407(iParam1, iParam2, iParam3))
				{
					*uParam0.f_4 = get_game_timer();
					*uParam0.f_5 = 1;
					*uParam0.f_7 = 1;
				}
			}
			else if (*uParam0.f_6 == 1)
			{
				if (func_407(iParam1, iParam2, iParam3))
				{
					*uParam0.f_4 = get_game_timer();
					*uParam0.f_5 = 1;
					*uParam0.f_7 = 1;
				}
			}
			else if (*uParam0.f_6 == 2)
			{
				if (func_408(iParam1, iParam2, iParam3))
				{
					*uParam0.f_4 = get_game_timer();
					*uParam0.f_5 = 1;
					*uParam0.f_7 = 1;
				}
			}
			if (func_397(uParam0))
			{
				*uParam0.f_7 = 1;
				*uParam0.f_5 = 4;
			}
			break;
		
		case 1:
			if (get_game_timer() - *uParam0.f_4 <= 500)
			{
				if (*uParam0.f_6 == 0)
				{
					if (is_ped_in_any_vehicle(player_ped_id(), 1))
					{
						if (!func_408(iParam1, iParam2, iParam3))
						{
							*uParam0.f_4 = get_game_timer();
							*uParam0.f_5 = 3;
						}
					}
					else if (!func_407(iParam1, iParam2, iParam3))
					{
						*uParam0.f_4 = get_game_timer();
						*uParam0.f_5 = 3;
					}
				}
				else if (*uParam0.f_6 == 1)
				{
					if (!func_407(iParam1, iParam2, iParam3))
					{
						*uParam0.f_4 = get_game_timer();
						*uParam0.f_5 = 3;
					}
				}
				else if (*uParam0.f_6 == 2)
				{
					if (!func_408(iParam1, iParam2, iParam3))
					{
						*uParam0.f_4 = get_game_timer();
						*uParam0.f_5 = 3;
					}
				}
			}
			else
			{
				*uParam0.f_5 = 2;
			}
			break;
		
		case 2:
			if (*uParam0.f_6 == 0)
			{
				if (is_ped_in_any_vehicle(player_ped_id(), 1))
				{
					if (!func_408(iParam1, iParam2, iParam3))
					{
						*uParam0.f_5 = 0;
					}
				}
				else if (!func_407(iParam1, iParam2, iParam3))
				{
					*uParam0.f_5 = 0;
				}
			}
			else if (*uParam0.f_6 == 1)
			{
				if (!func_407(iParam1, iParam2, iParam3) || is_ped_in_any_vehicle(player_ped_id(), 1))
				{
					*uParam0.f_5 = 0;
				}
			}
			else if (*uParam0.f_6 == 2)
			{
				if (!is_ped_in_any_vehicle(player_ped_id(), 1) || get_is_task_active(player_ped_id(), 2))
				{
					*uParam0.f_5 = 0;
				}
				else if (!func_408(iParam1, iParam2, iParam3))
				{
					*uParam0.f_5 = 0;
				}
			}
			break;
		
		case 3:
			if (get_game_timer() - *uParam0.f_4 > 500)
			{
				if (*uParam0.f_6 == 0)
				{
					if (is_ped_in_any_vehicle(player_ped_id(), 1))
					{
						if (func_406(iParam1, iParam2, iParam3))
						{
							*uParam0.f_5 = 0;
						}
					}
					else if (func_405(iParam1, iParam2, iParam3))
					{
						*uParam0.f_5 = 0;
					}
				}
				else if (*uParam0.f_6 == 1)
				{
					if (is_ped_in_any_vehicle(player_ped_id(), 1) || func_405(iParam1, iParam2, iParam3))
					{
						*uParam0.f_5 = 0;
					}
				}
				else if (*uParam0.f_6 == 2)
				{
					if (!is_ped_in_any_vehicle(player_ped_id(), 1) || get_is_task_active(player_ped_id(), 2))
					{
						*uParam0.f_5 = 0;
					}
					else if (func_406(iParam1, iParam2, iParam3))
					{
						*uParam0.f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_397(uParam0))
			{
				*uParam0.f_5 = 0;
			}
			break;
	}
	if (!func_418(iParam1, iParam2, iParam3))
	{
		*uParam0.f_5 = 0;
		*uParam0.f_7 = 0;
	}
	if (*uParam0.f_7)
	{
		func_410();
		return true;
	}
	else
	{
		return false;
	}
	return false;
}

bool func_405(int iParam0, int iParam1, int iParam2)
{
	if (!func_418(iParam0, iParam1, iParam2))
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

bool func_406(int iParam0, int iParam1, int iParam2)
{
	if (!func_418(iParam0, iParam1, iParam2))
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

bool func_407(int iParam0, int iParam1, int iParam2)
{
	if (!func_418(iParam0, iParam1, iParam2))
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

bool func_408(int iParam0, int iParam1, int iParam2)
{
	if (!func_418(iParam0, iParam1, iParam2))
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

bool func_409(int iParam0)
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

void func_410()
{
	set_bit(&Global_2284, 4);
}

int func_411(int iParam0, int iParam1, int iParam2)
{
	return func_302(iParam0, !iParam1, iParam2);
}

void func_412(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	_play_ambient_speech_with_voice(iParam0, sParam1, sParam2, func_240(iParam3), 0);
}

void func_413(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = fParam2 * fParam3;
	if (does_blip_exist(iParam0))
	{
		if ((does_entity_exist(iParam1) && does_entity_exist(player_ped_id())) && !is_ped_injured(player_ped_id()))
		{
			if (is_entity_a_vehicle(iParam1))
			{
				if (is_vehicle_driveable(get_vehicle_index_from_entity_index(iParam1), 0))
				{
					fVar1 = get_distance_between_coords(get_entity_coords(player_ped_id(), 1), get_entity_coords(iParam1, 1), 1);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = round(255f * fVar1 - fVar2 / fParam2 - fVar2);
						if (iVar0 <= 0)
						{
							iVar0 = false;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						set_blip_flashes(iParam0, 1);
						set_blip_alpha(iParam0, 255 - iVar0);
					}
					else
					{
						set_blip_flashes(iParam0, 0);
						set_blip_alpha(iParam0, 255);
					}
				}
			}
			else if (is_entity_a_ped(iParam1))
			{
				if (!is_ped_injured(get_ped_index_from_entity_index(iParam1)))
				{
					fVar1 = get_distance_between_coords(get_entity_coords(player_ped_id(), 1), get_entity_coords(iParam1, 1), 1);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = round(255f * fVar1 - fVar2 / fParam2 - fVar2);
						if (iVar0 <= 0)
						{
							iVar0 = false;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						set_blip_flashes(iParam0, 1);
						set_blip_alpha(iParam0, 255 - iVar0);
					}
					else
					{
						set_blip_flashes(iParam0, 0);
						set_blip_alpha(iParam0, 255);
					}
				}
			}
		}
	}
}

int func_414()
{
	int iVar0;
	
	iVar0 = func_416(get_this_script_name(), 1);
	if (iVar0 == -1)
	{
		return -1;
	}
	return func_415(iVar0);
}

int func_415(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return -1;
	}
	return Global_101154.f_7775.f_330[iParam0 /*6*/].f_1;
}

int func_416(char* sParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = get_hash_key(sParam0);
	iVar1 = func_417(iVar0, 1);
	if (iVar1 == -1 && !iParam1)
	{
	}
	return iVar1;
}

int func_417(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 94)
	{
		if (Global_82399[iVar0 /*34*/].f_6 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	if (!iParam1)
	{
	}
	return -1;
}

bool func_418(int iParam0, int iParam1, int iParam2)
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
	if (func_420(0))
	{
		return false;
	}
	if (func_419())
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

int func_419()
{
	return get_game_timer() <= Global_17257.f_5745 + 100;
}

bool func_420(int iParam0)
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

void func_421(int iParam0)
{
	vector3 vVar0;
	
	if (get_game_timer() - iLocal_2655 > 5000)
	{
		if (!func_299(&Local_3095, 1))
		{
			if (iParam0 != Local_3078[iLocal_2645 /*7*/])
			{
				if (is_vehicle_driveable(iParam0, 0) && is_vehicle_driveable(Local_3078[iLocal_2644 /*7*/], 0))
				{
					if (!has_entity_been_damaged_by_entity(Local_3078[iLocal_2644 /*7*/], iParam0, 1))
					{
						if (get_entity_speed(Local_3078[iLocal_2644 /*7*/]) > 15f && get_entity_speed(iParam0) > 1f)
						{
							if (absf(get_entity_heading(Local_3078[iLocal_2644 /*7*/]) - get_entity_heading(iParam0)) > 60f)
							{
								vVar0 = {get_offset_from_entity_given_world_coords(Local_3078[iLocal_2644 /*7*/], get_entity_coords(iParam0, 1))};
								if (vVar0.y < -1.5f && vVar0.y > -5f)
								{
									if (absf(vVar0.x) < 4f)
									{
										if (func_298(&Local_3169, "ARM1AUD", "ARM1_NEAR", 7, 0, 0, 0))
										{
											iLocal_2655 = get_game_timer();
											if ((fLocal_2628 < 144600f && get_convertible_roof_state(Local_3078[iLocal_2644 /*7*/]) == 2) && is_entity_upright(Local_3078[iLocal_2644 /*7*/], 90f))
											{
												if (has_anim_dict_loaded(sLocal_2799) && !is_entity_playing_anim(player_ped_id(), sLocal_2799, "learnhowtouseastick", 3))
												{
													task_play_anim(player_ped_id(), sLocal_2799, "learnhowtouseastick", 8f, -8f, -1, 32, 0, 0, 0, 0);
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_422(int iParam0)
{
	int iVar0;
	
	if (get_game_timer() - iLocal_2654 > 2000)
	{
		if (iParam0 != Local_3078[iLocal_2645 /*7*/])
		{
			if (is_vehicle_driveable(iParam0, 0))
			{
				if (vdist2(get_entity_coords(iParam0, 1), get_entity_coords(player_ped_id(), 1)) < 9f)
				{
					if (get_entity_speed(Local_3078[iLocal_2644 /*7*/]) - get_entity_speed(iParam0) > 3f || absf(get_entity_heading(Local_3078[iLocal_2644 /*7*/]) - get_entity_heading(iParam0)) > 60f)
					{
						iVar0 = get_ped_in_vehicle_seat(iParam0, -1);
						if (!is_ped_injured(iVar0))
						{
							start_vehicle_horn(iParam0, 2000, 0, 0);
							iLocal_2654 = get_game_timer();
						}
					}
				}
			}
		}
	}
}

void func_423(var uParam0, float fParam1)
{
	if (is_vehicle_driveable(*uParam0, 0))
	{
		if ((((((((((fParam1 > 10000f && fParam1 < 12500f) || (fParam1 > 23000f && fParam1 < 25000f)) || (fParam1 > 42500f && fParam1 < 45000f)) || (fParam1 > 48000f && fParam1 < 50500f)) || (fParam1 > 60500f && fParam1 < 63500f)) || (fParam1 > 78750f && fParam1 < 80500f)) || (fParam1 > 95750f && fParam1 < 98000f)) || (fParam1 > 110750f && fParam1 < 113000f)) || (fParam1 > 119000f && fParam1 < 121000f)) || (fParam1 > 123750f && fParam1 < 126000f))
		{
			set_vehicle_brake_lights(*uParam0, 1);
		}
		if (((((((fParam1 > 10000f && fParam1 < 12500f) || (fParam1 > 42500f && fParam1 < 45000f)) || (fParam1 > 48000f && fParam1 < 51000f)) || (fParam1 > 71250f && fParam1 < 73200f)) || (fParam1 > 74250f && fParam1 < 76000f)) || (fParam1 > 110750f && fParam1 < 113500f)) || (fParam1 > 119000f && fParam1 < 121250f))
		{
			set_vehicle_indicator_lights(*uParam0, 0, 1);
		}
		else
		{
			set_vehicle_indicator_lights(*uParam0, 0, 0);
		}
		if ((((((fParam1 > 23000f && fParam1 < 25000f) || (fParam1 > 61000f && fParam1 < 64000f)) || (fParam1 > 78500f && fParam1 < 81000f)) || (fParam1 > 95750f && fParam1 < 98500f)) || (fParam1 > 115000f && fParam1 < 115750f)) || (fParam1 > 123500f && fParam1 < 126500f))
		{
			set_vehicle_indicator_lights(*uParam0, 1, 1);
		}
		else
		{
			set_vehicle_indicator_lights(*uParam0, 1, 0);
		}
	}
}

void func_424()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	int iVar8;
	int[] iVar9 = new int[3];
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	float fVar17;
	vector3 vVar18;
	vector3 vVar21;
	char[64] cVar24;
	char[64] cVar40;
	int iVar56;
	float fVar57;
	float fVar58;
	float fVar59;
	int iVar60;
	int iVar61;
	int iVar62;
	int iVar63;
	int[] iVar64 = new int[4];
	int iVar69;
	int iVar70;
	int iVar71;
	vector3 vVar72;
	Vector3 fVar75;
	int iVar76;
	int iVar77;
	char* sVar78;
	vector3 vVar79;
	
	iVar0 = false;
	iVar1 = false;
	vVar2 = {get_entity_coords(player_ped_id(), 1)};
	if (!is_ped_injured(Local_2967))
	{
		vVar5 = {get_entity_coords(Local_2967, 1)};
	}
	if (!iLocal_2532)
	{
		iVar8 = false;
		if (!is_entity_dead(iLocal_2424[9], 0))
		{
			if (has_entity_been_damaged_by_entity(iLocal_2424[9], player_ped_id(), 1))
			{
				iVar8 = true;
			}
		}
		if (!is_entity_dead(iLocal_2424[10], 0))
		{
			if (has_entity_been_damaged_by_entity(iLocal_2424[10], player_ped_id(), 1))
			{
				iVar8 = true;
			}
		}
		if (!is_entity_dead(iLocal_2424[11], 0))
		{
			if (has_entity_been_damaged_by_entity(iLocal_2424[11], player_ped_id(), 1))
			{
				iVar8 = true;
			}
		}
		if (iVar8)
		{
			if (!is_entity_dead(iLocal_2424[9], 0))
			{
				iVar9[0] = get_ped_in_vehicle_seat(iLocal_2424[9], -1);
				if (!is_ped_injured(iVar9[0]))
				{
					if (is_playback_going_on_for_vehicle(iLocal_2424[9]))
					{
						stop_playback_recorded_vehicle(iLocal_2424[9]);
					}
					task_vehicle_mission_ped_target(iVar9[0], iLocal_2424[9], player_ped_id(), 8, 70f, 786468, 300f, 300f, 1);
					set_ped_keep_task(iVar9[0], true);
				}
			}
			if (!is_entity_dead(iLocal_2424[10], 0))
			{
				iVar9[1] = get_ped_in_vehicle_seat(iLocal_2424[10], -1);
				if (!is_ped_injured(iVar9[1]))
				{
					if (is_playback_going_on_for_vehicle(iLocal_2424[10]))
					{
						stop_playback_recorded_vehicle(iLocal_2424[10]);
					}
					task_vehicle_mission_ped_target(iVar9[1], iLocal_2424[10], player_ped_id(), 8, 70f, 786468, 300f, 300f, 1);
					set_ped_keep_task(iVar9[1], true);
				}
			}
			if (!is_entity_dead(iLocal_2424[11], 0))
			{
				iVar9[2] = get_ped_in_vehicle_seat(iLocal_2424[11], -1);
				if (!is_ped_injured(iVar9[2]))
				{
					if (is_playback_going_on_for_vehicle(iLocal_2424[11]))
					{
						stop_playback_recorded_vehicle(iLocal_2424[11]);
					}
					task_vehicle_mission_ped_target(iVar9[2], iLocal_2424[11], player_ped_id(), 8, 70f, 786468, 300f, 300f, 1);
					set_ped_keep_task(iVar9[2], true);
				}
			}
			iLocal_2532 = 1;
		}
	}
	if (iLocal_2232[9] == joaat("cruiser"))
	{
		if (!is_entity_dead(iLocal_2424[9], 0))
		{
			if (!iLocal_2512)
			{
				if (vdist2(get_entity_coords(iLocal_2424[9], 1), vVar2) < 100f)
				{
					play_sound_from_entity(-1, "Bike_Bell", iLocal_2424[9], "ARM_1_SOUNDSET", 0, 0);
					iLocal_2512 = 1;
				}
			}
		}
		else
		{
			iLocal_2512 = 0;
		}
	}
	if (iLocal_2232[15] == joaat("packer"))
	{
		if (iLocal_1430[15] < 99 && fLocal_2628 < fLocal_874[15] + 10000f)
		{
			if (fLocal_2628 > fLocal_874[15] - 10000f && !does_entity_exist(iLocal_2808))
			{
				request_model(joaat("tanker"));
			}
			request_vehicle_recording(993, sLocal_2784);
		}
		if (is_vehicle_driveable(iLocal_2424[15], 0))
		{
			if (!does_entity_exist(iLocal_2808))
			{
				if (fLocal_2628 < fLocal_874[15] + 10000f)
				{
					request_model(joaat("tanker"));
					if (has_model_loaded(joaat("tanker")) && !iVar0)
					{
						iLocal_2808 = create_vehicle(joaat("tanker"), get_offset_from_entity_in_world_coords(iLocal_2424[15], 0f, -10f, 0f), get_entity_heading(iLocal_2424[15]), 1, 1);
						_0x3910051CCECDB00C(iLocal_2808, true);
						_0x3910051CCECDB00C(iLocal_2424[15], true);
						attach_vehicle_to_trailer(iLocal_2424[15], iLocal_2808, 1f);
						set_model_as_no_longer_needed(joaat("tanker"));
						iVar0 = true;
					}
				}
			}
			else if (is_playback_going_on_for_vehicle(iLocal_2424[15]))
			{
				if (!is_entity_dead(iLocal_2808, 0))
				{
					if (!is_playback_going_on_for_vehicle(iLocal_2808))
					{
						request_vehicle_recording(993, sLocal_2784);
						if (has_vehicle_recording_been_loaded(993, sLocal_2784))
						{
							start_playback_recorded_vehicle(iLocal_2808, 993, sLocal_2784, 1);
							func_341(&iLocal_2808, get_time_position_in_recording(iLocal_2424[15]));
						}
					}
					else
					{
						set_playback_speed(iLocal_2808, fLocal_2629);
					}
				}
				if (!iLocal_2497 && (vdist2(vVar2, get_entity_coords(iLocal_2424[15], 1)) < 625f || vdist2(vVar5, get_entity_coords(iLocal_2424[15], 1)) < 400f))
				{
					start_vehicle_horn(iLocal_2424[15], 3000, -2087385909, 0);
					iLocal_2497 = 1;
				}
			}
			else if (fLocal_2628 > fLocal_874[15] + 10000f && (!is_entity_on_screen(iLocal_2424[15]) || !is_player_control_on(player_id())))
			{
				func_304(&(iLocal_2424[15]), 0);
				func_304(&iLocal_2808, 0);
			}
		}
		if (!does_entity_exist(iLocal_2424[15]))
		{
			if (does_entity_exist(iLocal_2808))
			{
				func_304(&iLocal_2808, 0);
			}
		}
	}
	if (iLocal_2232[32] == joaat("bus"))
	{
		if (!is_entity_dead(iLocal_2424[32], 0))
		{
			if (vdist2(vVar2, get_entity_coords(iLocal_2424[32], 1)) < 900f)
			{
				if (!iLocal_2498)
				{
					start_vehicle_horn(iLocal_2424[32], 3000, -2087385909, 0);
					if (iLocal_2681 == 0)
					{
						set_vehicle_lights(iLocal_2424[32], 2);
						iLocal_2681 = get_game_timer();
					}
					_0x293220DA1B46CEBC(2f, 2f, 2);
					iLocal_2498 = 1;
				}
			}
			if (iLocal_2498 && iLocal_2681 != 0)
			{
				if (get_game_timer() - iLocal_2681 > 2000)
				{
					set_vehicle_lights(iLocal_2424[32], 1);
					iLocal_2681 = 0;
				}
			}
		}
		else
		{
			iLocal_2498 = 0;
			iLocal_2681 = 0;
		}
	}
	if (iLocal_2232[33] == joaat("burrito3"))
	{
		if (is_vehicle_driveable(iLocal_2424[33], 0))
		{
			if (!iLocal_2539)
			{
				set_vehicle_colours(iLocal_2424[33], 111, 111);
				set_vehicle_extra_colours(iLocal_2424[33], 111, 111);
				iLocal_2539 = 1;
			}
			if (vdist2(vVar2, get_entity_coords(iLocal_2424[33], 1)) < 100f)
			{
				if (!iLocal_2499)
				{
					start_vehicle_horn(iLocal_2424[33], 2000, -2087385909, 0);
					iLocal_2499 = 1;
				}
			}
		}
		else
		{
			iLocal_2499 = 0;
			iLocal_2539 = 0;
		}
	}
	if (iLocal_2232[14] == joaat("benson"))
	{
		if (is_vehicle_driveable(iLocal_2424[14], 0))
		{
			if (!iLocal_2500)
			{
				set_vehicle_colours(iLocal_2424[14], 4, 4);
				set_vehicle_extra_colours(iLocal_2424[14], 4, 4);
				iLocal_2500 = 1;
			}
		}
		else
		{
			iLocal_2500 = 0;
		}
	}
	if (iLocal_2098[91] == joaat("maverick"))
	{
		if (is_vehicle_driveable(iLocal_2274[91], 0))
		{
			if (!iLocal_2501)
			{
				set_vehicle_engine_on(iLocal_2274[91], true, 1, 0);
				set_heli_blades_full_speed(iLocal_2274[91]);
				set_vehicle_colours(iLocal_2274[91], 128, 0);
				set_vehicle_extra_colours(iLocal_2274[91], 128, 0);
				iLocal_2501 = 1;
			}
		}
		else
		{
			iLocal_2501 = 0;
		}
	}
	iVar13 = 0;
	iVar14 = false;
	iVar15 = false;
	iVar16 = 0;
	fVar17 = 0f;
	iVar56 = joaat("s_m_m_movalien_01");
	if (fLocal_2628 < 43000f)
	{
		iVar13 = 0;
		while (iVar13 < Local_2982)
		{
			Local_2982[iVar13 /*5*/].f_2 = 0;
			iVar13++;
		}
		iVar13 = 0;
		while (iVar13 < Local_3003)
		{
			Local_3003[iVar13 /*5*/].f_2 = 0;
			iVar13++;
		}
	}
	else
	{
		iVar13 = 0;
		while (iVar13 < Local_2982)
		{
			if (iVar13 == 0)
			{
				StringCopy(&cVar40, "largegroup_flee_r_f_a", 64);
			}
			else if (iVar13 == 1)
			{
				StringCopy(&cVar40, "largegroup_flee_l_f_b", 64);
			}
			else if (iVar13 == 2)
			{
				StringCopy(&cVar40, "largegroup_flee_l_m_c", 64);
			}
			else if (iVar13 == 3)
			{
				StringCopy(&cVar40, "largegroup_flee_r_m_d", 64);
			}
			if (Local_2982[iVar13 /*5*/].f_2 == 0)
			{
				if (fLocal_2628 < 55000f)
				{
					request_model(iVar56);
					request_anim_dict(sLocal_2791);
					if ((has_model_loaded(iVar56) && has_anim_dict_loaded(sLocal_2791)) && !iVar0)
					{
						if (iVar13 == 0)
						{
							StringCopy(&cVar24, "largegroup_loop_f_a", 64);
						}
						else if (iVar13 == 1)
						{
							StringCopy(&cVar24, "largegroup_loop_f_b", 64);
						}
						else if (iVar13 == 2)
						{
							StringCopy(&cVar24, "largegroup_loop_m_c", 64);
						}
						else if (iVar13 == 3)
						{
							StringCopy(&cVar24, "largegroup_loop_m_d", 64);
						}
						vVar18 = {get_anim_initial_offset_position(sLocal_2791, &cVar24, -1107.37f, -504.73f, 34.36f, 0f, 0f, 32.2f, 0f, 2)};
						vVar21 = {get_anim_initial_offset_rotation(sLocal_2791, &cVar24, -1107.37f, -504.73f, 34.36f, 0f, 0f, 32.2f, 0f, 2)};
						Local_2982[iVar13 /*5*/] = create_ped(26, iVar56, vVar18, vVar21.z, 1, true);
						set_entity_coords_no_offset(Local_2982[iVar13 /*5*/], vVar18, 0, 0, 1);
						task_play_anim(Local_2982[iVar13 /*5*/], sLocal_2791, &cVar24, 1000f, -8f, -1, 9, 0, 0, 0, 0);
						freeze_entity_position(Local_2982[iVar13 /*5*/], true);
						set_entity_collision(Local_2982[iVar13 /*5*/], false, 0);
						set_blocking_of_non_temporary_events(Local_2982[iVar13 /*5*/], true);
						set_entity_only_damaged_by_player(Local_2982[iVar13 /*5*/], true);
						if (iVar13 == 2)
						{
							func_230(&Local_3169, 2, Local_2982[iVar13 /*5*/], "EXTRA1", 0, 1);
						}
						else if (iVar13 == 3)
						{
							set_model_as_no_longer_needed(iVar56);
							func_230(&Local_3169, 3, Local_2982[iVar13 /*5*/], "EXTRA2", 0, 1);
						}
						set_ped_component_variation(Local_2982[iVar13 /*5*/], 4, 0, 0, 0);
						set_ped_component_variation(Local_2982[iVar13 /*5*/], 3, 0, 0, 0);
						if (iVar13 % 2 == 0)
						{
							set_ped_component_variation(Local_2982[iVar13 /*5*/], false, 1, 0, 0);
							set_ped_component_variation(Local_2982[iVar13 /*5*/], 5, 1, 0, 0);
						}
						else
						{
							set_ped_component_variation(Local_2982[iVar13 /*5*/], false, 0, 0, 0);
							set_ped_component_variation(Local_2982[iVar13 /*5*/], 5, 0, 0, 0);
						}
						Local_2982[iVar13 /*5*/].f_2 = 1;
						Local_2982[iVar13 /*5*/].f_3 = 0;
						iVar0 = true;
					}
				}
			}
			else
			{
				if (!is_ped_injured(Local_2982[iVar13 /*5*/]))
				{
					fVar17 = vdist2(vVar2, get_entity_coords(Local_2982[iVar13 /*5*/], 1));
					if (fVar17 < 1600f)
					{
						iVar16 = 1;
					}
					if (Local_2982[iVar13 /*5*/].f_2 == 1)
					{
						if (!iVar14)
						{
							if (is_vehicle_driveable(Local_3078[iLocal_2644 /*7*/], 0) && is_vehicle_driveable(Local_3078[iLocal_2645 /*7*/], 0))
							{
								fVar57 = vdist(vVar2, get_entity_coords(Local_2982[iVar13 /*5*/], 1)) / get_entity_speed(Local_3078[iLocal_2644 /*7*/]);
								fVar58 = vdist(vVar5, get_entity_coords(Local_2982[iVar13 /*5*/], 1)) / get_entity_speed(Local_3078[iLocal_2645 /*7*/]);
								if (fVar57 < 2f)
								{
									iVar15 = true;
								}
								else if (fVar58 < 3f)
								{
									if (fLocal_2629 > 0.7f)
									{
										iVar15 = true;
									}
								}
								iVar14 = true;
							}
						}
						if (iVar15)
						{
							freeze_entity_position(Local_2982[iVar13 /*5*/], false);
							set_entity_collision(Local_2982[iVar13 /*5*/], true, 0);
							if (iVar13 == 0)
							{
								task_play_anim(Local_2982[iVar13 /*5*/], sLocal_2791, &cVar40, 8f, -8f, -1, 8, 0.05f, 0, 0, 0);
							}
							else if (iVar13 == 1)
							{
								task_play_anim(Local_2982[iVar13 /*5*/], sLocal_2791, &cVar40, 8f, -8f, -1, 8, 0.05f, 0, 0, 0);
							}
							else if (iVar13 == 2)
							{
								task_play_anim(Local_2982[iVar13 /*5*/], sLocal_2791, &cVar40, 8f, -8f, -1, 8, 0.05f, 0, 0, 0);
							}
							else if (iVar13 == 3)
							{
								task_play_anim(Local_2982[iVar13 /*5*/], sLocal_2791, &cVar40, 8f, -8f, -1, 8, 0.05f, 0, 0, 0);
							}
							Local_2982[iVar13 /*5*/].f_2++;
						}
					}
					else if (Local_2982[iVar13 /*5*/].f_2 == 2)
					{
						if (is_ped_ragdoll(Local_2982[iVar13 /*5*/]))
						{
							Local_2982[iVar13 /*5*/].f_2 = 100;
						}
						else if (!is_entity_playing_anim(Local_2982[iVar13 /*5*/], sLocal_2791, &cVar40, 3) || get_entity_speed(Local_2982[iVar13 /*5*/]) < 0.1f)
						{
							if (vdist2(get_entity_coords(Local_2982[iVar13 /*5*/], 1), vVar2) < 100f)
							{
								Local_2982[iVar13 /*5*/].f_2 = 100;
							}
						}
					}
					else if (Local_2982[iVar13 /*5*/].f_2 == 100)
					{
						if (get_script_task_status(Local_2982[iVar13 /*5*/], 1805844857) != 1)
						{
							task_smart_flee_ped(Local_2982[iVar13 /*5*/], player_ped_id(), 200f, -1, 0, 0);
							set_ped_keep_task(Local_2982[iVar13 /*5*/], true);
						}
					}
				}
				else if (Local_3169[2 /*10*/] == Local_2982[iVar13 /*5*/])
				{
					func_426(&Local_3169, 2);
				}
				else if (Local_3169[3 /*10*/] == Local_2982[iVar13 /*5*/])
				{
					func_426(&Local_3169, 3);
				}
				if (does_entity_exist(Local_2982[iVar13 /*5*/]))
				{
					if ((fLocal_2628 > 64000f || !is_player_control_on(player_id())) && !iVar1)
					{
						if (!is_ped_injured(Local_2982[iVar13 /*5*/]))
						{
							task_smart_flee_ped(Local_2982[iVar13 /*5*/], player_ped_id(), 200f, -1, 0, 0);
							set_ped_keep_task(Local_2982[iVar13 /*5*/], true);
						}
						func_57(&(Local_2982[iVar13 /*5*/]), 0);
						iVar1 = true;
					}
				}
				else if (iVar13 == 0)
				{
					if (iLocal_3165 == 4)
					{
						remove_anim_dict(sLocal_2791);
					}
				}
			}
			iVar13++;
		}
		if (iVar16 && !iLocal_2547[0])
		{
			if (!func_299(&Local_3095, 1))
			{
				if (!is_ped_injured(Local_3169[2 /*10*/]) && !is_ped_injured(Local_3169[3 /*10*/]))
				{
					if (func_288(&Local_3169, "ARM1AUD", "ARM1_EXTRAS2", "ARM1_EXTRAS2_1", 7, 0, 0))
					{
						_0x293220DA1B46CEBC(2.5f, 4.5f, 3);
						iLocal_2547[0] = 1;
					}
				}
			}
		}
		iVar14 = false;
		iVar15 = false;
		iVar13 = 0;
		while (iVar13 < Local_3003)
		{
			if (Local_3003[iVar13 /*5*/].f_2 == 0)
			{
				if (fLocal_2628 < 55000f)
				{
					request_model(iVar56);
					request_anim_dict(sLocal_2791);
					if ((has_model_loaded(iVar56) && has_anim_dict_loaded(sLocal_2791)) && !iVar0)
					{
						if (iVar13 == 0)
						{
							StringCopy(&cVar24, "smallgroup_loop_f_a", 64);
						}
						else if (iVar13 == 1)
						{
							StringCopy(&cVar24, "smallgroup_loop_m_b", 64);
						}
						vVar18 = {get_anim_initial_offset_position(sLocal_2791, &cVar24, -1139.247f, -524.062f, 32.021f, 0f, 0f, 20f, 0f, 2)};
						vVar21 = {get_anim_initial_offset_rotation(sLocal_2791, &cVar24, -1139.247f, -524.062f, 32.021f, 0f, 0f, 20f, 0f, 2)};
						Local_3003[iVar13 /*5*/] = create_ped(26, iVar56, vVar18, vVar21.z, 1, true);
						set_entity_coords_no_offset(Local_3003[iVar13 /*5*/], vVar18, 0, 0, 1);
						task_play_anim(Local_3003[iVar13 /*5*/], sLocal_2791, &cVar24, 1000f, -8f, -1, 9, 0, 0, 0, 0);
						freeze_entity_position(Local_3003[iVar13 /*5*/], true);
						set_blocking_of_non_temporary_events(Local_3003[iVar13 /*5*/], true);
						if (iVar13 == 1)
						{
							set_model_as_no_longer_needed(iVar56);
						}
						set_ped_component_variation(Local_3003[iVar13 /*5*/], 4, 0, 0, 0);
						set_ped_component_variation(Local_3003[iVar13 /*5*/], 3, 0, 0, 0);
						if (iVar13 % 2 == 0)
						{
							set_ped_component_variation(Local_3003[iVar13 /*5*/], false, 1, 0, 0);
							set_ped_component_variation(Local_3003[iVar13 /*5*/], 5, 1, 0, 0);
						}
						else
						{
							set_ped_component_variation(Local_3003[iVar13 /*5*/], false, 0, 0, 0);
							set_ped_component_variation(Local_3003[iVar13 /*5*/], 5, 0, 0, 0);
						}
						Local_3003[iVar13 /*5*/].f_2 = 1;
						Local_3003[iVar13 /*5*/].f_3 = 0;
						iVar0 = true;
					}
				}
			}
			else
			{
				if (!is_ped_injured(Local_3003[iVar13 /*5*/]))
				{
					if (iVar13 == 0)
					{
						StringCopy(&cVar40, "smallgroup_flee_f_a", 64);
					}
					else if (iVar13 == 1)
					{
						StringCopy(&cVar40, "smallgroup_flee_m_b", 64);
					}
					if (Local_3003[iVar13 /*5*/].f_2 == 1)
					{
						if (!iVar14 && is_vehicle_driveable(Local_3078[iLocal_2644 /*7*/], 0))
						{
							fVar59 = vdist(vVar2, get_entity_coords(Local_3003[iVar13 /*5*/], 1)) / get_entity_speed(Local_3078[iLocal_2644 /*7*/]);
							iVar15 = fVar59 < 1.8f;
							iVar14 = true;
						}
						if (iVar15)
						{
							freeze_entity_position(Local_3003[iVar13 /*5*/], false);
							task_play_anim(Local_3003[iVar13 /*5*/], sLocal_2791, &cVar40, 8f, -8f, -1, 8, 0.05f, 0, 0, 0);
							Local_3003[iVar13 /*5*/].f_2++;
						}
					}
					else if (Local_3003[iVar13 /*5*/].f_2 == 2)
					{
						if (is_ped_ragdoll(Local_3003[iVar13 /*5*/]))
						{
							Local_3003[iVar13 /*5*/].f_2 = 100;
						}
						else if (!is_entity_playing_anim(Local_3003[iVar13 /*5*/], sLocal_2791, &cVar40, 3))
						{
							if (vdist2(get_entity_coords(Local_3003[iVar13 /*5*/], 1), vVar2) < 100f)
							{
								Local_2982[iVar13 /*5*/].f_2 = 100;
							}
						}
						else
						{
							set_entity_anim_speed(Local_3003[iVar13 /*5*/], sLocal_2791, &cVar40, 0.95f);
						}
					}
					else if (Local_2982[iVar13 /*5*/].f_2 == 100)
					{
						if (get_script_task_status(Local_3003[iVar13 /*5*/], 1805844857) != 1)
						{
							task_smart_flee_ped(Local_3003[iVar13 /*5*/], player_ped_id(), 200f, -1, 0, 0);
							set_ped_keep_task(Local_3003[iVar13 /*5*/], true);
						}
					}
				}
				if ((does_entity_exist(Local_3003[iVar13 /*5*/]) && (fLocal_2628 > 64000f || !is_player_control_on(player_id()))) && !iVar1)
				{
					if (!is_ped_injured(Local_3003[iVar13 /*5*/]))
					{
						task_smart_flee_ped(Local_3003[iVar13 /*5*/], player_ped_id(), 200f, -1, 0, 0);
						set_ped_keep_task(Local_3003[iVar13 /*5*/], true);
					}
					func_57(&(Local_3003[iVar13 /*5*/]), 0);
					iVar1 = true;
				}
			}
			iVar13++;
		}
	}
	stat_get_int(joaat("sp0_kills"), &iVar60, -1);
	stat_get_int(joaat("sp1_kills"), &iVar61, -1);
	stat_get_int(joaat("sp2_kills"), &iVar62, -1);
	iVar63 = iVar60 + iVar61 + iVar62;
	if (!iLocal_2518 && Local_2982[0 /*5*/].f_2 > 0)
	{
		if (iVar63 > iLocal_2694)
		{
			get_ped_nearby_peds(player_ped_id(), &iVar64, -1);
			iVar13 = 0;
			while (iVar13 < iVar64)
			{
				if (does_entity_exist(iVar64[iVar13]))
				{
					if (get_entity_model(iVar64[iVar13]) == iVar56)
					{
						if (is_ped_injured(iVar64[iVar13]))
						{
							if (vdist2(get_entity_coords(iVar64[iVar13], 0), get_entity_coords(Local_3078[iLocal_2644 /*7*/], 0)) < 100f)
							{
								func_363(6);
								iLocal_2518 = 1;
							}
						}
						else if (has_entity_been_damaged_by_entity(iVar64[iVar13], player_ped_id(), 1))
						{
							func_363(6);
							iLocal_2518 = 1;
						}
					}
				}
				iVar13++;
			}
		}
		iVar69 = 0;
		while (iVar69 < get_number_of_events(0))
		{
			iVar71 = get_event_at_index(0, iVar69);
			if (iVar71 == 139)
			{
				get_event_data(0, iVar69, &iVar70, 1);
				if (does_entity_exist(iVar70))
				{
					if (get_entity_model(iVar70) == iVar56)
					{
						func_363(6);
						iLocal_2518 = 1;
					}
				}
			}
			iVar69++;
		}
	}
	iLocal_2694 = iVar63;
	if (fLocal_2628 < 20000f)
	{
		Local_3067[0 /*5*/].f_2 = 0;
		Local_3067[1 /*5*/].f_2 = 0;
	}
	else if (fLocal_2628 > 43000f)
	{
		iVar13 = 0;
		while (iVar13 < Local_3067)
		{
			switch (Local_3067[iVar13 /*5*/].f_2)
			{
				case 0:
					if (iVar13 == 0)
					{
						vVar72 = {-1048.134f, -476.2388f, 35.805f};
						fVar75 = 316.5925f;
					}
					else
					{
						vVar72 = {-1210.121f, -570.0335f, 26.3435f};
						fVar75 = 295.8782f;
					}
					if (vdist2(get_entity_coords(player_ped_id(), 1), vVar72) < 40000f)
					{
						request_model(iLocal_2950);
						if (has_model_loaded(iLocal_2950) && !iVar0)
						{
							Local_3067[iVar13 /*5*/] = create_ped(26, iLocal_2950, vVar72, fVar75, 1, true);
							task_look_at_entity(Local_3067[iVar13 /*5*/], player_ped_id(), -1, 0, 2);
							set_blocking_of_non_temporary_events(Local_3067[iVar13 /*5*/], true);
							set_model_as_no_longer_needed(iLocal_2950);
							Local_3067[iVar13 /*5*/].f_2++;
							iVar0 = true;
						}
					}
					break;
				
				case 1:
					iVar76 = false;
					if (!is_ped_injured(Local_3067[iVar13 /*5*/]))
					{
						if (iVar13 == 0)
						{
							if (!is_ped_injured(Local_2967))
							{
								if (vdist2(get_entity_coords(player_ped_id(), 1), get_entity_coords(Local_3067[iVar13 /*5*/], 1)) < 900f || (vdist2(get_entity_coords(player_ped_id(), 1), get_entity_coords(Local_2967, 1)) < 900f && vdist2(get_entity_coords(Local_3067[iVar13 /*5*/], 1), get_entity_coords(Local_2967, 1)) < 100f))
								{
									iVar76 = true;
								}
							}
						}
						else
						{
							iVar76 = vdist2(get_entity_coords(player_ped_id(), 1), get_entity_coords(Local_3067[iVar13 /*5*/], 1)) < 6400f;
						}
						if (iVar76)
						{
							func_239(Local_3067[iVar13 /*5*/], "FIGHT", 6);
							Local_3067[iVar13 /*5*/].f_2++;
						}
					}
					break;
				
				case 2:
					if (!is_ped_injured(Local_3067[iVar13 /*5*/]))
					{
						if ((!is_ped_in_combat(Local_3067[iVar13 /*5*/], false) && get_script_task_status(Local_3067[iVar13 /*5*/], 780511057) != 1) && get_script_task_status(Local_3067[iVar13 /*5*/], 242628503) != 1)
						{
							task_combat_ped(Local_3067[iVar13 /*5*/], player_ped_id(), 0, 16);
							set_ped_keep_task(Local_3067[iVar13 /*5*/], true);
						}
					}
					break;
			}
			if (does_entity_exist(Local_3067[iVar13 /*5*/]))
			{
				if (is_ped_injured(Local_3067[iVar13 /*5*/]))
				{
					func_57(&(Local_3067[iVar13 /*5*/]), 0);
				}
				else if (fLocal_2628 > 66000f)
				{
					if (vdist2(get_entity_coords(player_ped_id(), 1), get_entity_coords(Local_3067[iVar13 /*5*/], 1)) > 10000f)
					{
						func_57(&(Local_3067[iVar13 /*5*/]), 0);
					}
				}
			}
			iVar13++;
		}
	}
	if (fLocal_2628 < 60000f)
	{
		iVar13 = 0;
		while (iVar13 < Local_3019)
		{
			Local_3019[iVar13 /*7*/].f_1 = 0;
			iVar13++;
		}
	}
	else
	{
		iVar77 = joaat("a_c_seagull");
		sVar78 = "creatures@gull@move";
		iVar13 = 0;
		while (iVar13 < Local_3019)
		{
			if (Local_3019[iVar13 /*7*/].f_1 == 0)
			{
				if (fLocal_2628 < 72000f)
				{
					request_model(iVar77);
					request_anim_dict(sVar78);
					if ((has_model_loaded(iVar77) && has_anim_dict_loaded(sVar78)) && !iVar0)
					{
						if (iVar13 == 0)
						{
							Local_3019[iVar13 /*7*/] = create_ped(26, iVar77, Vector(19.3756f, -730.0198f, -1161.135f) + Vector(-0.15f, 0f, 0f), 278.8218f, 1, true);
						}
						else if (iVar13 == 1)
						{
							Local_3019[iVar13 /*7*/] = create_ped(26, iVar77, Vector(19.4617f, -728.611f, -1160.762f) + Vector(-0.15f, 0f, 0f), 322.6699f, 1, true);
						}
						else if (iVar13 == 2)
						{
							Local_3019[iVar13 /*7*/] = create_ped(26, iVar77, Vector(19.5456f, -727.3837f, -1162.735f) + Vector(-0.15f, 0f, 0f), 32.0168f, 1, true);
						}
						else if (iVar13 == 3)
						{
							Local_3019[iVar13 /*7*/] = create_ped(26, iVar77, Vector(19.3279f, -730.7355f, -1160.644f) + Vector(-0.15f, 0f, 0f), 152.0615f, 1, true);
						}
						else if (iVar13 == 4)
						{
							Local_3019[iVar13 /*7*/] = create_ped(26, iVar77, Vector(19.4121f, -730.381f, -1155.033f) + Vector(-0.15f, 0f, 0f), 352.3865f, 1, true);
						}
						else if (iVar13 == 5)
						{
							Local_3019[iVar13 /*7*/] = create_ped(26, iVar77, Vector(19.7718f, -723.8991f, -1152.808f) + Vector(-0.15f, 0f, 0f), 25.9012f, 1, true);
							set_model_as_no_longer_needed(iVar77);
						}
						task_play_anim(Local_3019[iVar13 /*7*/], sVar78, "idle", 8f, -8f, -1, 9, 0, 0, 0, 0);
						set_blocking_of_non_temporary_events(Local_3019[iVar13 /*7*/], true);
						set_ped_can_ragdoll(Local_3019[iVar13 /*7*/], 0);
						set_entity_invincible(Local_3019[iVar13 /*7*/], true);
						freeze_entity_position(Local_3019[iVar13 /*7*/], true);
						set_entity_collision(Local_3019[iVar13 /*7*/], false, 0);
						Local_3019[iVar13 /*7*/].f_1 = 1;
						Local_3019[iVar13 /*7*/].f_6 = 0f;
						iVar0 = true;
					}
				}
			}
			else if (does_entity_exist(Local_3019[iVar13 /*7*/]))
			{
				if (!is_ped_injured(Local_3019[iVar13 /*7*/]))
				{
					switch (Local_3019[iVar13 /*7*/].f_1)
					{
						case 1:
							if (request_script_audio_bank("ARM_1_BIRDS", false))
							{
								vVar79 = {get_entity_coords(Local_3019[iVar13 /*7*/], 1)};
								if (vdist2(vVar2, vVar79) < 900f || (vdist2(vVar5, vVar79) < 900f && fLocal_2629 > 0.7f))
								{
									if (iVar13 == 0)
									{
										play_sound_from_entity(-1, "Birds", Local_3019[iVar13 /*7*/], "ARM_1_SOUNDSET", 0, 0);
										if (vdist2(vVar2, vVar79) < 2500f)
										{
											_0x293220DA1B46CEBC(2f, 2f, 3);
										}
									}
									Local_3019[iVar13 /*7*/].f_2 = get_game_timer();
									Local_3019[iVar13 /*7*/].f_1++;
								}
							}
							break;
						
						case 2:
							if (get_game_timer() - Local_3019[iVar13 /*7*/].f_2 > 500)
							{
								freeze_entity_position(Local_3019[iVar13 /*7*/], false);
								set_entity_collision(Local_3019[iVar13 /*7*/], true, 0);
								Local_3019[iVar13 /*7*/].f_3 = {func_391(get_entity_rotation(Local_3019[iVar13 /*7*/], 2) + Vector(0f, 0f, 45f))};
								Local_3019[iVar13 /*7*/].f_6 += 14f - Local_3019[iVar13 /*7*/].f_6 * 0.5f;
								set_entity_velocity(Local_3019[iVar13 /*7*/], Local_3019[iVar13 /*7*/].f_3 * Vector(Local_3019[iVar13 /*7*/].f_6, Local_3019[iVar13 /*7*/].f_6, Local_3019[iVar13 /*7*/].f_6));
								task_play_anim(Local_3019[iVar13 /*7*/], sVar78, "flapping", 4f, -8f, -1, 9, 0, 0, 0, 0);
								Local_3019[iVar13 /*7*/].f_1++;
							}
							break;
						
						case 3:
							Local_3019[iVar13 /*7*/].f_6 += 14f - Local_3019[iVar13 /*7*/].f_6 * 0.5f;
							set_entity_velocity(Local_3019[iVar13 /*7*/], Local_3019[iVar13 /*7*/].f_3 * Vector(Local_3019[iVar13 /*7*/].f_6, Local_3019[iVar13 /*7*/].f_6, Local_3019[iVar13 /*7*/].f_6));
							if (is_entity_playing_anim(Local_3019[iVar13 /*7*/], sVar78, "flapping", 3))
							{
								set_entity_anim_speed(Local_3019[iVar13 /*7*/], sVar78, "flapping", 4f);
								Local_3019[iVar13 /*7*/].f_1++;
							}
							break;
						
						case 4:
							Local_3019[iVar13 /*7*/].f_6 += 14f - Local_3019[iVar13 /*7*/].f_6 * 0.5f;
							set_entity_velocity(Local_3019[iVar13 /*7*/], Local_3019[iVar13 /*7*/].f_3 * Vector(Local_3019[iVar13 /*7*/].f_6, Local_3019[iVar13 /*7*/].f_6, Local_3019[iVar13 /*7*/].f_6));
							break;
						}
				}
				if ((fLocal_2628 > 82000f || !is_player_control_on(player_id())) && !iVar1)
				{
					func_57(&(Local_3019[iVar13 /*7*/]), 0);
					iVar1 = true;
				}
			}
			else if (iVar13 == 0)
			{
				remove_anim_dict(sVar78);
				release_named_script_audio_bank("ARM_1_BIRDS");
			}
			iVar13++;
		}
	}
	if (fLocal_2628 < 20000f)
	{
		vLocal_3062.z = 0;
	}
	else if (fLocal_2628 > 120000f)
	{
		switch (vLocal_3062.z)
		{
			case 0:
				request_model(iLocal_2949);
				if (has_model_loaded(iLocal_2949) && !iVar0)
				{
					vLocal_3062.x = create_ped(26, iLocal_2949, -73.6282f, -676.848f, 32.9306f, 69.2552f, 1, true);
					freeze_entity_position(vLocal_3062.x, true);
					task_stand_still(vLocal_3062.x, -1);
					set_blocking_of_non_temporary_events(vLocal_3062.x, true);
					set_model_as_no_longer_needed(iLocal_2949);
					vLocal_3062.z++;
					iVar0 = true;
				}
				break;
			
			case 1:
				if (!is_ped_injured(vLocal_3062.x))
				{
					if (is_entity_static(vLocal_3062.x))
					{
						if (vdist2(get_entity_coords(vLocal_3062.x, 1), get_entity_coords(player_ped_id(), 1)) < 2500f)
						{
							freeze_entity_position(vLocal_3062.x, false);
						}
					}
					else if ((fLocal_2628 < 144600f && vdist2(get_entity_coords(vLocal_3062.x, 1), get_entity_coords(player_ped_id(), 1)) < 25f) || fLocal_2628 > 145600f)
					{
						vLocal_3062.z++;
					}
				}
				break;
			
			case 2:
				if (!is_ped_injured(vLocal_3062.x))
				{
					if (!is_ped_in_combat(vLocal_3062.x, false) && get_script_task_status(vLocal_3062.x, 780511057) != 1)
					{
						func_239(vLocal_3062.x, "FIGHT", 24);
						task_combat_ped(vLocal_3062.x, player_ped_id(), 0, 16);
					}
				}
				break;
		}
		if (vLocal_3062.z > 0)
		{
			if (is_ped_injured(vLocal_3062.x))
			{
				func_57(&vLocal_3062, 0);
			}
		}
	}
	if (iLocal_2216[14] == joaat("stockade"))
	{
		if (!is_entity_dead(iLocal_2408[14], 0))
		{
			if (!is_entity_static(iLocal_2408[14]))
			{
				freeze_entity_position(iLocal_2408[14], true);
				set_vehicle_is_considered_by_player(iLocal_2408[14], 0);
			}
		}
	}
	if (!does_entity_exist(iLocal_2902))
	{
		if (vdist2(vVar2, -7.1741f, -658.6362f, 33.8238f) < 10000f)
		{
			func_425(-7.1741f, -658.6362f, 33.8238f, 0f, 0f, 4.5837f, 0);
		}
	}
}

bool func_425(vector3 vParam0, vector3 vParam1, int iParam2)
{
	if (!does_entity_exist(iLocal_2902))
	{
		request_model(joaat("prop_vault_shutter"));
		if (!iParam6)
		{
			if (iLocal_2935 == 0)
			{
				iLocal_2935 = get_interior_at_coords_with_type(-7.9f, -662.2f, 34.7f, "dt1_03_carpark");
			}
			else
			{
				_0x2CA429C029CCF247(iLocal_2935);
			}
		}
		if (has_model_loaded(joaat("prop_vault_shutter")))
		{
			if (!iParam6)
			{
				if (iLocal_2935 != 0)
				{
					if (is_interior_ready(iLocal_2935))
					{
						iLocal_2902 = create_object_no_offset(joaat("prop_vault_shutter"), vParam0, 1, 1, 0);
						set_entity_rotation(iLocal_2902, vParam3, 2, 1);
						freeze_entity_position(iLocal_2902, true);
						force_room_for_entity(iLocal_2902, iLocal_2935, -565398557);
						set_model_as_no_longer_needed(joaat("prop_vault_shutter"));
						return true;
					}
				}
			}
			else
			{
				return true;
			}
		}
	}
	else
	{
		return true;
	}
	return false;
}

void func_426(var uParam0, int iParam1)
{
	if (*(uParam0[iParam1 /*10*/]).f_7 == 1)
	{
		*(uParam0[iParam1 /*10*/]).f_7 = 0;
	}
}

void func_427(float fParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	vector3 vVar17;
	int iVar20;
	
	if (is_vehicle_driveable(iParam2, 0) && is_vehicle_driveable(iParam1, 0))
	{
		vVar0 = {get_entity_coords(iParam1, 1)};
		vVar3 = {get_entity_coords(iParam2, 1)};
		fVar6 = vdist(vVar0, vVar3);
		fVar7 = 4.5f;
		fVar8 = 7f;
		fVar9 = 40f;
		fVar10 = 100f;
		fVar11 = 30f;
		fVar12 = 1f;
		fVar13 = 0f;
		fVar14 = 0f;
		fVar15 = get_entity_speed(iParam2) - get_entity_speed(iParam1);
		if (is_special_ability_active(player_id()))
		{
			fVar13 = 0.025f;
			fVar14 = -35f;
		}
		else
		{
			fVar13 = 0.01f;
			fVar14 = -15f;
		}
		if (fLocal_2628 < 7500f)
		{
			fVar8 = 10f;
			fVar9 = 50f;
		}
		if (fLocal_2628 > 8000f && fLocal_2628 < 12000f)
		{
			fVar8 = 30f;
			fVar9 = 55f;
		}
		if (fLocal_2628 > 26000f && fLocal_2628 < 30000f)
		{
			fVar8 = 13f;
			fVar9 = 45f;
		}
		if (fLocal_2628 > 40000f && fLocal_2628 < 45500f)
		{
			fVar8 = 15f;
			fVar9 = 45f;
		}
		if (fLocal_2628 > 46000f && fLocal_2628 < 51000f)
		{
			fVar13 *= 0.7f;
			fVar8 = 22f;
			fVar9 = 50f;
		}
		if (fLocal_2628 > 60000f && fLocal_2628 < 64000f)
		{
			fVar13 *= 0.7f;
			fVar8 = 22f;
			fVar9 = 50f;
		}
		if (fLocal_2628 > 65000f && fLocal_2628 < 70000f)
		{
			fVar13 *= 0.7f;
			fVar8 = 15f;
			fVar9 = 50f;
		}
		if (fLocal_2628 > 77500f && fLocal_2628 < 81500f)
		{
			fVar8 = 18f;
			fVar9 = 45f;
		}
		if (fLocal_2628 > 83500f && fLocal_2628 < 87500f)
		{
			fVar13 *= 0.7f;
			fVar8 = 20f;
			fVar9 = 45f;
		}
		if (fLocal_2628 > 87500f && fLocal_2628 < 98500f)
		{
			fVar13 *= 0.7f;
			fVar8 = 25f;
			fVar9 = 50f;
		}
		if (fLocal_2628 > 108000f && fLocal_2628 < 113500f)
		{
			fVar13 *= 0.7f;
			fVar8 = 22f;
			fVar9 = 50f;
		}
		if (fLocal_2628 > 119000f && fLocal_2628 < 121500f)
		{
			fVar8 = 25f;
			fVar9 = 50f;
		}
		if (fLocal_2628 > 122000f && fLocal_2628 < 125000f)
		{
			fVar8 = 15f;
			fVar9 = 45f;
		}
		if (fLocal_2628 > 126000f && fLocal_2628 < 131500f)
		{
			fVar8 = 11f;
			fVar9 = 30f;
			fVar10 = 60f;
		}
		if (fLocal_2628 > 131500f && fLocal_2628 < 137700f)
		{
			fVar13 *= 0.7f;
			fVar8 = 12f;
			fVar9 = 45f;
		}
		if (fLocal_2628 > 140900f && fLocal_2628 < 144600f)
		{
			fVar8 = 15f;
			fVar9 = 30f;
		}
		if (fLocal_2628 > 145600f && fLocal_2628 < 149400f)
		{
			fVar8 = 8f;
			fVar9 = 20f;
			fVar10 = 80f;
		}
		fVar16 = 0f;
		vVar17 = {get_offset_from_entity_given_world_coords(iParam2, vVar0)};
		if (vVar17.y < 1f)
		{
			if (fVar6 > fVar9)
			{
				iVar20 = false;
				if (fVar6 > fVar10)
				{
					if (fVar6 > 200f)
					{
						iVar20 = true;
					}
					fVar6 = fVar10;
				}
				fVar16 = fVar6 - fVar9 / fVar10 - fVar9;
				if (is_entity_on_screen(iParam2) && !iVar20)
				{
					if (fVar15 > 10f)
					{
						fVar12 = 0.7f - 0.2f * fVar16;
					}
					else
					{
						fVar12 = 0.7f - 0.1f * fVar16;
					}
				}
				else
				{
					fVar12 = 0.7f - 0.5f * fVar16;
				}
				fVar14 *= 0.5f;
			}
			else if (fVar6 > fVar8)
			{
				fVar16 = fVar6 - fVar8 / fVar9 - fVar8;
				fVar12 = 1f - 0.3f * fVar16;
			}
			else
			{
				if (fVar6 < fVar7)
				{
					fVar6 = fVar7;
				}
				fVar16 = fVar8 - fVar6 / fVar8 - fVar7;
				if (is_special_ability_active(player_id()))
				{
					fVar12 = 1f + fVar16 * 2f;
				}
				else
				{
					fVar12 = 1f + fVar16;
				}
			}
		}
		else
		{
			if (fVar6 > fVar11)
			{
				fVar6 = fVar11;
			}
			fVar16 = fVar6 / fVar11;
			if (fVar15 > 0f)
			{
				fVar16 *= 0.5f;
			}
			if (is_special_ability_active(player_id()))
			{
				fVar12 = 2f + fVar16;
			}
			else if (get_entity_speed(iParam1) < 5f && fVar15 > 0f)
			{
				fVar12 = 0.6f + fVar16;
			}
			else
			{
				fVar12 = 1f + fVar16;
			}
		}
		if (!is_ped_sitting_in_vehicle(player_ped_id(), iParam1))
		{
			fVar12 = 1f;
		}
		if (fLocal_2628 < 19000f)
		{
			if (is_entity_in_angled_area(player_ped_id(), -2013.521f, -410.929f, 10.10326f, -2005.117f, -399.6596f, 15.68106f, 14f, 0, true, 0))
			{
				if (fVar12 < 1f)
				{
					fVar12 = 1f;
				}
			}
		}
		if (fLocal_2628 > 65000f && fLocal_2628 < 78000f)
		{
			if (is_entity_in_angled_area(player_ped_id(), -1327.701f, -648.2095f, 35.88271f, -1196.131f, -817.1476f, 13.71532f, 33.75f, 0, true, 0))
			{
				if (fLocal_2628 < 75000f)
				{
					fVar12 = 1.5f;
				}
				else
				{
					fVar12 = 1.2f;
				}
			}
		}
		if (fLocal_2628 > 86500f && fLocal_2628 < 96500f)
		{
			if (fVar12 < 0.7f)
			{
				fVar12 = 0.7f;
			}
		}
		if (fLocal_2628 > get_total_duration_of_vehicle_recording(iLocal_2649, sLocal_2784) - 4000f)
		{
			if (fVar12 < 1f)
			{
				fVar12 = 1f;
			}
		}
		else if (fLocal_2628 > 137400f)
		{
			if (fVar12 > 1f)
			{
				fVar12 = 1f;
			}
		}
		if (*fParam0 < 1f && fVar12 > *fParam0)
		{
			fVar13 *= 2f;
		}
		if (fVar12 > 1f)
		{
			fVar14 -= fVar12 - 1f * 10f;
		}
		_set_vehicle_engine_power_multiplier(Local_3078[iLocal_2644 /*7*/], fVar14);
		*fParam0 += fVar12 - *fParam0 * fVar13 * 30f * timestep();
	}
}

void func_428(float fParam0, int iParam1, int iParam2)
{
	float fVar0;
	float fVar1;
	
	if (is_vehicle_driveable(iParam2, 0) && is_vehicle_driveable(iParam1, 0))
	{
		fVar0 = 1f;
		fVar1 = 0.01f;
		if (is_special_ability_active(player_id()))
		{
			fVar1 = 0.025f;
		}
		if (fLocal_2628 < 7500f)
		{
			func_430(&fVar0, &iParam1, iParam2, 4.5f, 10f, 50f, 100f, 30f, 1f, 0.7f, 0.5f, 2f, 1, 15f, 25f, 1);
		}
		else if (fLocal_2628 > 8000f && fLocal_2628 < 12000f)
		{
			func_430(&fVar0, &iParam1, iParam2, 4.5f, 30f, 55f, 100f, 30f, 1f, 0.7f, 0.5f, 2f, 1, 15f, 25f, 1);
		}
		else if (fLocal_2628 > 26000f && fLocal_2628 < 30000f)
		{
			func_430(&fVar0, &iParam1, iParam2, 4.5f, 20f, 55f, 100f, 30f, 1f, 0.7f, 0.5f, 2f, 1, 15f, 25f, 1);
		}
		else if (fLocal_2628 > 40000f && fLocal_2628 < 45500f)
		{
			func_430(&fVar0, &iParam1, iParam2, 4.5f, 30f, 55f, 100f, 30f, 1f, 0.7f, 0.5f, 2f, 1, 15f, 25f, 1);
		}
		else if (fLocal_2628 > 46000f && fLocal_2628 < 51000f)
		{
			func_430(&fVar0, &iParam1, iParam2, 4.5f, 45f, 50f, 100f, 30f, 1f, 0.7f, 0.5f, 2f, 1, 15f, 25f, 1);
		}
		else if (fLocal_2628 > 60000f && fLocal_2628 < 64000f)
		{
			func_430(&fVar0, &iParam1, iParam2, 4.5f, 50f, 60f, 100f, 30f, 1f, 0.7f, 0.5f, 2f, 1, 15f, 25f, 1);
		}
		else if (fLocal_2628 > 77500f && fLocal_2628 < 81500f)
		{
			func_430(&fVar0, &iParam1, iParam2, 4.5f, 25f, 50f, 100f, 30f, 1f, 0.7f, 0.5f, 2f, 1, 15f, 25f, 1);
		}
		else if (fLocal_2628 > 83500f && fLocal_2628 < 87500f)
		{
			func_430(&fVar0, &iParam1, iParam2, 4.5f, 30f, 55f, 100f, 30f, 1f, 0.7f, 0.5f, 2f, 1, 15f, 25f, 1);
		}
		else if (fLocal_2628 > 87500f && fLocal_2628 < 98500f)
		{
			func_430(&fVar0, &iParam1, iParam2, 4.5f, 40f, 60f, 100f, 30f, 1f, 0.7f, 0.5f, 2f, 1, 15f, 25f, 1);
			fVar1 *= 0.7f;
		}
		else if (fLocal_2628 > 108000f && fLocal_2628 < 113500f)
		{
			func_430(&fVar0, &iParam1, iParam2, 4.5f, 35f, 55f, 100f, 30f, 1f, 0.7f, 0.5f, 2f, 1, 15f, 25f, 1);
		}
		else if (fLocal_2628 > 119000f && fLocal_2628 < 121500f)
		{
			func_430(&fVar0, &iParam1, iParam2, 4.5f, 35f, 55f, 100f, 30f, 1f, 0.7f, 0.5f, 2f, 1, 15f, 25f, 1);
		}
		else if (fLocal_2628 > 122000f && fLocal_2628 < 125000f)
		{
			func_430(&fVar0, &iParam1, iParam2, 4.5f, 20f, 50f, 100f, 30f, 1f, 0.7f, 0.5f, 2f, 1, 15f, 25f, 1);
		}
		else if (fLocal_2628 > 126000f && fLocal_2628 < 131500f)
		{
			func_430(&fVar0, &iParam1, iParam2, 4.5f, 15f, 30f, 60f, 30f, 1f, 0.7f, 0.5f, 2f, 1, 15f, 25f, 1);
		}
		else if (fLocal_2628 > 131500f && fLocal_2628 < 137700f)
		{
			func_430(&fVar0, &iParam1, iParam2, 4.5f, 15f, 50f, 100f, 30f, 1f, 0.7f, 0.5f, 2f, 1, 15f, 25f, 1);
		}
		else if (fLocal_2628 > 140900f && fLocal_2628 < 144600f)
		{
			func_430(&fVar0, &iParam1, iParam2, 4.5f, 15f, 30f, 100f, 30f, 1f, 0.7f, 0.5f, 2f, 1, 15f, 25f, 1);
		}
		else if (fLocal_2628 > 145600f && fLocal_2628 < 149400f)
		{
			func_430(&fVar0, &iParam1, iParam2, 4.5f, 8f, 20f, 80f, 30f, 1f, 0.7f, 0.5f, 2f, 1, 15f, 25f, 1);
		}
		else
		{
			func_430(&fVar0, &iParam1, iParam2, 4.5f, 10f, 50f, 100f, 30f, 1f, 0.7f, 0.5f, 2f, 1, 15f, 25f, 1);
		}
		if (!is_ped_sitting_in_vehicle(player_ped_id(), iParam1))
		{
			fVar0 = 1f;
		}
		if (fLocal_2628 < 19000f)
		{
			if (is_entity_in_angled_area(player_ped_id(), -2013.521f, -410.929f, 10.10326f, -2005.117f, -399.6596f, 15.68106f, 14f, 0, true, 0))
			{
				if (fVar0 < 1f)
				{
					fVar0 = 1f;
				}
			}
		}
		if (fLocal_2628 > 65000f && fLocal_2628 < 78000f)
		{
			if (is_entity_in_angled_area(player_ped_id(), -1327.701f, -648.2095f, 35.88271f, -1196.131f, -817.1476f, 13.71532f, 33.75f, 0, true, 0))
			{
				if (fLocal_2628 < 75000f)
				{
					fVar0 = 1.5f;
				}
				else
				{
					fVar0 = 1.2f;
				}
			}
		}
		if (fLocal_2628 > get_total_duration_of_vehicle_recording(iLocal_2649, sLocal_2784) - 4000f)
		{
			if (fVar0 < 1f)
			{
				fVar0 = 1f;
			}
		}
		else if (fLocal_2628 > 137600f)
		{
			if (fVar0 > 1f)
			{
				fVar0 = 1f;
			}
		}
		func_429(fParam0, fVar0, fVar1);
	}
}

void func_429(var uParam0, float fParam1, float fParam2)
{
	*uParam0 += fParam1 - *uParam0 * fParam2 * 30f * timestep();
}

void func_430(float fParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9, float fParam10, float fParam11, int iParam12, float fParam13, float fParam14, int iParam15)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	int iVar13;
	float fVar14;
	float fVar15;
	
	vVar0 = {get_entity_coords(*iParam1, 1)};
	vVar3 = {get_entity_coords(iParam2, 1)};
	vVar6 = {get_offset_from_entity_given_world_coords(iParam2, vVar0)};
	fVar9 = vdist(vVar0, vVar3);
	fVar10 = 0f;
	fVar11 = fParam11 - 1f;
	fVar12 = 1f - fParam9;
	if (vVar6.y < 1f)
	{
		if (fVar9 > fParam5)
		{
			iVar13 = 0;
			if (fVar9 > fParam6)
			{
				if (fVar9 > fParam6 * 2f)
				{
					iVar13 = 1;
				}
				fVar9 = fParam6;
			}
			fVar10 = fVar9 - fParam5 / fParam6 - fParam5;
			if (!is_entity_on_screen(iParam2) || iVar13)
			{
				*fParam0 = fParam9 - fParam9 - fParam10 * fVar10;
			}
			else
			{
				*fParam0 = fParam9;
			}
		}
		else if (fVar9 > fParam4)
		{
			fVar10 = fVar9 - fParam4 / fParam5 - fParam4;
			*fParam0 = 1f - fVar12 * fVar10;
		}
		else
		{
			if (fVar9 < fParam3)
			{
				fVar9 = fParam3;
			}
			fVar10 = fParam4 - fVar9 / fParam4 - fParam3;
			if (is_special_ability_active(player_id()) && iParam15)
			{
				*fParam0 = 1f + fVar10 * fVar11 * 2f;
			}
			else
			{
				*fParam0 = 1f + fVar10 * fVar11;
			}
		}
	}
	else
	{
		if (fVar9 > fParam7)
		{
			fVar9 = fParam7;
		}
		fVar10 = fVar9 / fParam7;
		fVar14 = get_entity_speed(iParam2) - get_entity_speed(*iParam1);
		if (fVar14 > 0f)
		{
			fVar10 *= 0.5f;
		}
		if (is_special_ability_active(player_id()) && iParam15)
		{
			*fParam0 = 2f + fVar10;
		}
		else if (get_entity_speed(*iParam1) < 5f && fVar14 > 0f)
		{
			*fParam0 = 0.6f + fVar10;
		}
		else
		{
			*fParam0 = 1f + fVar10;
		}
	}
	*fParam0 *= fParam8;
	if (iParam12)
	{
		fVar15 = fParam13;
		if (is_special_ability_active(player_id()) && iParam15)
		{
			fParam14 *= 2f;
			fParam13 *= 2f;
		}
		if (*fParam0 > 1f)
		{
			fVar15 = fParam13 + fParam14 - fParam13 * *fParam0 - 1f;
		}
		_set_vehicle_engine_power_multiplier(*iParam1, -fVar15);
	}
}

int func_431()
{
	return 2086;
}

void func_432()
{
	if (!Global_14413.f_1 == 1)
	{
		if (func_420(0))
		{
			func_433(0);
		}
		set_bit(&Global_2284, 2);
	}
}

void func_433(int iParam0)
{
	if (Global_14571)
	{
		func_434(0, 0);
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
	if (!func_67())
	{
		Global_14413.f_1 = 3;
	}
}

void func_434(int iParam0, int iParam1)
{
	if (iParam0)
	{
		if (func_420(0))
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

void func_435(int iParam0, float fParam1)
{
	float fVar0;
	vector3 vVar1;
	int iVar4;
	
	fVar0 = get_frame_time();
	fVar0 *= 1000f;
	iLocal_121 = false;
	if (!iLocal_103)
	{
		if (iLocal_102)
		{
			func_460();
			if (is_player_playing(player_id()))
			{
				vVar1 = {get_entity_coords(player_ped_id(), 1)};
				clear_area(vVar1, 1000f, 1, 0, 0, false);
			}
			iLocal_103 = true;
		}
	}
	else if (!iLocal_102)
	{
		func_384();
		iLocal_103 = false;
	}
	if (iLocal_102)
	{
		fParam1 = 1f;
		set_vehicle_density_multiplier_this_frame(0f);
	}
	if (!iLocal_96)
	{
		if (iLocal_91)
		{
			fLocal_1021 = 0f;
		}
		else
		{
			fLocal_1021 = 1f;
		}
		if (is_vehicle_driveable(iParam0, 0))
		{
			if (is_playback_going_on_for_vehicle(iParam0))
			{
				if (is_player_playing(player_id()))
				{
					if (func_459(player_ped_id(), iParam0))
					{
						iLocal_101 = true;
					}
					else
					{
						iLocal_101 = false;
					}
				}
				fLocal_1018 = get_time_position_in_recording(iParam0);
				set_playback_speed(iParam0, fParam1 * fLocal_1019 * fLocal_1021);
				if (iLocal_100)
				{
					func_458(iParam0, fLocal_1018);
					func_457(iParam0, fLocal_1028);
					if (fLocal_1023 > 1000f)
					{
						if (iLocal_1540 == 0)
						{
							func_456(iParam0, fLocal_1028);
						}
						fVar0 = fLocal_1018 + 4000f + to_float(iLocal_1540) * 2000f;
						func_455(iParam0, fVar0, fLocal_1022);
						iLocal_1540++;
						if (iLocal_1540 > 2)
						{
							fLocal_1023 = 0f;
						}
					}
					else
					{
						iLocal_1540 = false;
						fLocal_1023 += get_frame_time() * 1000f;
					}
				}
			}
		}
		iVar4 = 0;
		if (is_vehicle_driveable(iParam0, 0))
		{
			if (is_playback_going_on_for_vehicle(iParam0))
			{
				iVar4 = 1;
			}
		}
		if (fLocal_1018 == 0f || is_screen_faded_out())
		{
			iVar4 = 1;
		}
		if (iVar4 && !iLocal_108)
		{
			if (!iLocal_90)
			{
				func_452(iParam0, fParam1 * fLocal_1019 * fLocal_1021, 0);
				if (!iLocal_111)
				{
				}
				iLocal_111 = 0;
			}
			if (iLocal_93)
			{
				func_451(iParam0);
			}
			if (!iLocal_90)
			{
				func_438(iParam0, fParam1 * fLocal_1019 * fLocal_1021, 0);
			}
		}
		if (iLocal_98)
		{
			if (is_player_playing(player_id()))
			{
				if (is_ped_in_any_vehicle(player_ped_id(), 0))
				{
					iLocal_2474 = get_vehicle_ped_is_in(player_ped_id(), 0);
					vLocal_2054 = {get_entity_coords(iLocal_2474, 1)};
					get_entity_quaternion(iLocal_2474, &fLocal_714, &fLocal_715, &fLocal_716, &fLocal_717);
				}
			}
			iLocal_98 = 0;
		}
		if (iLocal_97)
		{
			if (does_entity_exist(iLocal_2474))
			{
				func_376(iLocal_2475);
				iLocal_2475 = iLocal_2474;
			}
			if (is_vehicle_driveable(iLocal_2475, 0))
			{
				set_entity_coords(iLocal_2475, vLocal_2054, 1, false, 0, 1);
				set_entity_quaternion(iLocal_2475, fLocal_714, fLocal_715, fLocal_716, fLocal_717);
			}
			fLocal_1017 = fLocal_1020;
			iLocal_90 = 1;
			iLocal_97 = 0;
		}
		if (iLocal_90)
		{
			while (!func_436(&iParam0, fLocal_1017))
			{
				wait(0);
			}
			iLocal_91 = 1;
		}
		if (iLocal_104)
		{
			iLocal_104 = 0;
		}
	}
}

bool func_436(int iParam0, float fParam1)
{
	if (!iLocal_105)
	{
		iLocal_90 = 1;
		func_371();
		if (is_vehicle_driveable(*iParam0, 0))
		{
			if (is_playback_going_on_for_vehicle(*iParam0))
			{
				stop_playback_recorded_vehicle(*iParam0);
				set_vehicle_fixed(*iParam0);
			}
			if (!iLocal_1527 == -1)
			{
				while (!func_437(iParam0, iLocal_1527, fParam1, 1, 0, 0, 0, 0))
				{
					wait(0);
				}
				if (!iLocal_95)
				{
					iLocal_91 = 1;
					fLocal_1021 = 0f;
					iLocal_1528 = 0;
					iLocal_1530 = 0;
					iLocal_1529 = 0;
					iLocal_1524 = 0;
					iLocal_1525 = 0;
					iLocal_1526 = 0;
					iLocal_1531 = 0;
					iLocal_1532 = 0;
					iLocal_1533 = 0;
				}
			}
		}
		iLocal_105 = 1;
	}
	else
	{
		if (is_vehicle_driveable(*iParam0, 0))
		{
			if (is_playback_going_on_for_vehicle(*iParam0))
			{
				set_playback_speed(*iParam0, 1f * fLocal_1019 * fLocal_1021);
				func_437(iParam0, iLocal_1527, fParam1, 1, 0, 0, 0, 0);
			}
		}
		fLocal_1018 = fParam1;
		iLocal_1534 = 0;
		iLocal_1537 = 0;
		fLocal_1033 = 0f;
		fLocal_1032 = 0f;
		func_438(*iParam0, 1f * fLocal_1019 * fLocal_1021, 1);
		func_452(*iParam0, 1f * fLocal_1019 * fLocal_1021, 1);
		func_451(*iParam0);
		if ((iLocal_1531 == 0 && iLocal_1532 == 0) && iLocal_1533 == 0)
		{
			iLocal_91 = 0;
			iLocal_90 = 0;
			iLocal_105 = 0;
			return true;
		}
	}
	return false;
}

bool func_437(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	float fVar0;
	
	if (iParam1 > 0)
	{
		request_vehicle_recording(iParam1, &cLocal_2081);
		if (has_vehicle_recording_been_loaded(iParam1, &cLocal_2081))
		{
			if (is_vehicle_driveable(*iParam0, 0))
			{
				if (!is_playback_going_on_for_vehicle(*iParam0))
				{
					freeze_entity_position(*iParam0, false);
					if (iParam4)
					{
						start_playback_recorded_vehicle_using_ai(*iParam0, iParam1, &cLocal_2081, 10f, 786603);
					}
					else
					{
						if (iParam1 != iLocal_1535 && iParam1 != iLocal_1536)
						{
							if (iParam7)
							{
								start_playback_recorded_vehicle_with_flags(*iParam0, iParam1, &cLocal_2081, 2 | 4, 0, 786603);
							}
							else if (iParam6)
							{
								start_playback_recorded_vehicle_with_flags(*iParam0, iParam1, &cLocal_2081, 1 | 4, 0, 786603);
							}
							else
							{
								start_playback_recorded_vehicle(*iParam0, iParam1, &cLocal_2081, 1);
							}
						}
						else
						{
							start_playback_recorded_vehicle(*iParam0, iParam1, &cLocal_2081, 1);
						}
						skip_time_in_playback_recorded_vehicle(*iParam0, fParam2);
						if (iParam5)
						{
							_0x1F2E4E06DEA8992B(*iParam0, 1);
						}
						return true;
					}
				}
				else if (get_current_playback_for_vehicle(*iParam0) == get_vehicle_recording_id(iParam1, &cLocal_2081))
				{
					fVar0 = get_time_position_in_recording(*iParam0);
					skip_time_in_playback_recorded_vehicle(*iParam0, fParam2 - fVar0);
					if (!iParam3)
					{
						stop_playback_recorded_vehicle(*iParam0);
						request_vehicle_recording(iParam1, &cLocal_2081);
					}
					if (iParam5)
					{
						_0x1F2E4E06DEA8992B(*iParam0, 1);
					}
					return true;
				}
				else
				{
					stop_playback_recorded_vehicle(*iParam0);
					freeze_entity_position(*iParam0, false);
					if (iParam4)
					{
						start_playback_recorded_vehicle_using_ai(*iParam0, iParam1, &cLocal_2081, 10f, 786603);
					}
					else if (iParam1 != iLocal_1535 && iParam1 != iLocal_1536)
					{
						if (iParam7)
						{
							start_playback_recorded_vehicle_with_flags(*iParam0, iParam1, &cLocal_2081, 2 | 4, 0, 786603);
						}
						else if (iParam6)
						{
							start_playback_recorded_vehicle_with_flags(*iParam0, iParam1, &cLocal_2081, 1 | 4, 0, 786603);
						}
						else
						{
							start_playback_recorded_vehicle(*iParam0, iParam1, &cLocal_2081, 1);
						}
					}
					else
					{
						start_playback_recorded_vehicle(*iParam0, iParam1, &cLocal_2081, 1);
					}
					skip_time_in_playback_recorded_vehicle(*iParam0, fParam2);
					if (iParam5)
					{
						_0x1F2E4E06DEA8992B(*iParam0, 1);
					}
					return true;
				}
			}
		}
	}
	return false;
}

void func_438(int iParam0, float fParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	float fVar12;
	float fVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	var uVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	
	iVar15 = is_player_playing(player_id());
	iVar16 = can_create_random_driver();
	uVar17 = can_create_random_bike_rider();
	iVar18 = false;
	if (iVar15)
	{
		if (is_ped_in_any_vehicle(player_ped_id(), 0))
		{
			iVar2 = get_vehicle_ped_is_in(player_ped_id(), 0);
		}
		vVar9 = {get_entity_coords(player_ped_id(), 1)};
	}
	if (is_vehicle_driveable(iParam0, 0))
	{
		iVar0 = iLocal_1530;
		while (iVar0 < 38)
		{
			if (iLocal_1430[iVar0] != 99)
			{
				if (iLocal_1430[iVar0] == 0)
				{
					if (iLocal_1391[iVar0] > 0)
					{
						if (!iLocal_90)
						{
							if (fLocal_1018 > fLocal_874[iVar0] - 7000f * fParam1)
							{
								if (func_450(iLocal_2232[iVar0]))
								{
									set_bit(&(iLocal_1469[iVar0]), false);
								}
								else if (is_this_model_a_bike(iLocal_2232[iVar0]))
								{
									set_bit(&(iLocal_1469[iVar0]), 2);
								}
								clear_bit(&(iLocal_1469[iVar0]), true);
								iLocal_1430[iVar0]++;
								iLocal_1532++;
							}
						}
						else
						{
							fVar12 = fLocal_1018 - fLocal_874[iVar0];
							fVar12 *= fLocal_913[iVar0];
							if (fVar12 >= 0f)
							{
								if (fVar12 < func_449(iLocal_1391[iVar0]))
								{
									if (func_450(iLocal_2232[iVar0]))
									{
										set_bit(&(iLocal_1469[iVar0]), false);
									}
									else if (is_this_model_a_bike(iLocal_2232[iVar0]))
									{
										set_bit(&(iLocal_1469[iVar0]), 2);
									}
									clear_bit(&(iLocal_1469[iVar0]), true);
									iLocal_1430[iVar0]++;
									iLocal_1532++;
								}
								else
								{
									iLocal_1430[iVar0] = 99;
								}
							}
						}
					}
					else
					{
						iLocal_1430[iVar0] = 99;
					}
				}
				else if (iLocal_1430[iVar0] == 1)
				{
					iVar14 = false;
					request_vehicle_recording(iLocal_1391[iVar0], &cLocal_2081);
					if (is_bit_set(iLocal_1469[iVar0], false))
					{
						request_model(func_380());
						iVar14 = has_model_loaded(func_380());
					}
					else if (!iLocal_117 && ((!is_bit_set(iLocal_1469[iVar0], 2) && iVar16) || (is_bit_set(iLocal_1469[iVar0], 2) && uVar17)))
					{
						iVar14 = true;
					}
					else
					{
						request_model(func_383());
						iVar14 = has_model_loaded(func_383());
					}
					if (iVar14)
					{
						if (!does_entity_exist(iLocal_2424[iVar0]))
						{
							request_model(iLocal_2232[iVar0]);
							if (has_model_loaded(iLocal_2232[iVar0]) && has_vehicle_recording_been_loaded(iLocal_1391[iVar0], &cLocal_2081))
							{
								if (fLocal_1018 >= fLocal_874[iVar0] - fLocal_1031 * fParam1)
								{
									if ((iLocal_104 || iParam2) || (!iLocal_121 && !func_448(vLocal_1939[iVar0 /*3*/], vVar9, 5f, fLocal_1029)))
									{
										if (iLocal_100)
										{
											func_447(vLocal_1939[iVar0 /*3*/], vVar9, fLocal_1022);
										}
										iLocal_2424[iVar0] = create_vehicle(iLocal_2232[iVar0], vLocal_1939[iVar0 /*3*/], 0, 0, 0);
										if (iLocal_2232[iVar0] == joaat("polmav"))
										{
											set_vehicle_livery(iLocal_2424[iVar0], 0);
										}
										if (uLocal_113 && !is_bit_set(iLocal_1469[iVar0], false))
										{
											func_446(iLocal_2424[iVar0]);
										}
										if (is_bit_set(iLocal_1469[iVar0], 3))
										{
											_0x3910051CCECDB00C(iLocal_2424[iVar0], true);
										}
										set_entity_coords_no_offset(iLocal_2424[iVar0], vLocal_1939[iVar0 /*3*/], 0, 0, 1);
										set_entity_quaternion(iLocal_2424[iVar0], fLocal_718[iVar0], fLocal_757[iVar0], fLocal_796[iVar0], fLocal_835[iVar0]);
										if (is_this_model_a_car(iLocal_2232[iVar0]) || is_this_model_a_bike(iLocal_2232[iVar0]))
										{
											set_vehicle_on_ground_properly(iLocal_2424[iVar0]);
										}
										if (!is_bit_set(iLocal_1469[iVar0], false))
										{
											set_vehicle_engine_on(iLocal_2424[iVar0], true, 1, 0);
											if (get_clock_hours() > 19 || get_clock_hours() < 7)
											{
												set_vehicle_lights(iLocal_2424[iVar0], 3);
											}
										}
										freeze_entity_position(iLocal_2424[iVar0], true);
										set_model_as_no_longer_needed(iLocal_2232[iVar0]);
										iLocal_1532--;
										iLocal_1430[iVar0]++;
										iLocal_121 = true;
									}
								}
							}
						}
						else if (!is_entity_dead(iLocal_2424[iVar0], 0) && is_vehicle_driveable(iLocal_2424[iVar0], 0))
						{
							set_entity_coords_no_offset(iLocal_2424[iVar0], vLocal_1939[iVar0 /*3*/], 0, 0, 1);
							set_entity_quaternion(iLocal_2424[iVar0], fLocal_718[iVar0], fLocal_757[iVar0], fLocal_796[iVar0], fLocal_835[iVar0]);
							if (is_this_model_a_car(iLocal_2232[iVar0]) || is_this_model_a_bike(iLocal_2232[iVar0]))
							{
								set_vehicle_on_ground_properly(iLocal_2424[iVar0]);
							}
							freeze_entity_position(iLocal_2424[iVar0], true);
							set_model_as_no_longer_needed(iLocal_2232[iVar0]);
							iLocal_1532--;
							iLocal_1430[iVar0]++;
						}
					}
				}
				else if (iLocal_1430[iVar0] == 2)
				{
					request_vehicle_recording(iLocal_1391[iVar0], &cLocal_2081);
					if (!is_bit_set(iLocal_1469[iVar0], true))
					{
						iVar14 = false;
						if (is_bit_set(iLocal_1469[iVar0], false))
						{
							request_model(func_380());
							iVar14 = has_model_loaded(func_380());
							iVar19 = 2;
						}
						else if (!iLocal_117 && ((!is_bit_set(iLocal_1469[iVar0], 2) && iVar16) || (is_bit_set(iLocal_1469[iVar0], 2) && uVar17)))
						{
							iVar14 = true;
							iVar19 = 1;
						}
						else
						{
							request_model(func_383());
							iVar14 = has_model_loaded(func_383());
							iVar19 = 0;
						}
						if (!is_entity_dead(iLocal_2424[iVar0], 0))
						{
							if (!iLocal_121 && is_vehicle_seat_free(iLocal_2424[iVar0], -1))
							{
								if (iVar14)
								{
									if ((vdist2(get_entity_coords(iLocal_2424[iVar0], 1), vVar9) < 10000f || iParam2) || iLocal_104)
									{
										func_444(&(iLocal_2424[iVar0]), iVar19, 1);
										set_bit(&(iLocal_1469[iVar0]), true);
									}
								}
							}
						}
					}
					if (is_vehicle_driveable(iLocal_2424[iVar0], 0))
					{
						if (fLocal_1018 >= fLocal_874[iVar0])
						{
							if (12 > iLocal_1525)
							{
								fVar12 = fLocal_1018 - fLocal_874[iVar0];
								fVar12 *= fLocal_913[iVar0];
								if (has_vehicle_recording_been_loaded(iLocal_1391[iVar0], &cLocal_2081))
								{
									if (fVar12 < get_total_duration_of_vehicle_recording(iLocal_1391[iVar0], &cLocal_2081))
									{
										vVar3 = {get_entity_coords(iLocal_2424[iVar0], 1)};
										vVar6 = {get_position_of_vehicle_recording_at_time(iLocal_1391[iVar0], fVar12, &cLocal_2081)};
										if (((!func_448(vVar3, vVar9, 5f, fLocal_1029) && func_448(vVar6, vVar9, 5f, fLocal_1029)) && !iLocal_104) && !iParam2)
										{
											if (!is_bit_set(iLocal_1469[iVar0], true))
											{
												func_444(&(iLocal_2424[iVar0]), iVar19, 1);
											}
											iLocal_1525++;
											iLocal_1430[iVar0]++;
										}
										else if (((!iLocal_121 || is_bit_set(iLocal_1469[iVar0], true)) || iLocal_104) || iParam2)
										{
											if (func_437(&(iLocal_2424[iVar0]), iLocal_1391[iVar0], fVar12, 1, 0, 0, iLocal_119, iLocal_118))
											{
												set_playback_speed(iLocal_2424[iVar0], fParam1 * fLocal_913[iVar0]);
												if (is_vehicle_driveable(iLocal_2424[iVar0], 0))
												{
													if (is_bit_set(iLocal_1469[iVar0], false))
													{
														set_vehicle_engine_on(iLocal_2424[iVar0], true, 1, 0);
														set_vehicle_siren(iLocal_2424[iVar0], true);
														set_vehicle_lights(iLocal_2424[iVar0], 2);
														if (!is_this_model_a_bike(iLocal_2232[iVar0]))
														{
															set_siren_with_no_driver(iLocal_2424[iVar0], 1);
														}
													}
												}
												if (!is_bit_set(iLocal_1469[iVar0], true))
												{
													func_444(&(iLocal_2424[iVar0]), iVar19, 1);
												}
												iLocal_1525++;
												iLocal_1430[iVar0]++;
											}
										}
									}
									else
									{
										if (!is_bit_set(iLocal_1469[iVar0], true))
										{
											func_444(&(iLocal_2424[iVar0]), iVar19, 1);
										}
										iLocal_1525++;
										iLocal_1430[iVar0]++;
									}
								}
							}
							else
							{
								if (!is_bit_set(iLocal_1469[iVar0], true))
								{
									func_444(&(iLocal_2424[iVar0]), iVar19, 1);
								}
								iLocal_1525++;
								iLocal_1430[iVar0]++;
							}
						}
					}
					else
					{
						if (!is_bit_set(iLocal_1469[iVar0], true))
						{
							func_444(&(iLocal_2424[iVar0]), iVar19, 1);
						}
						iLocal_1525++;
						iLocal_1430[iVar0]++;
					}
				}
				else if (iLocal_1430[iVar0] == 3)
				{
					if (is_vehicle_driveable(iLocal_2424[iVar0], 0))
					{
						if (is_playback_going_on_for_vehicle(iLocal_2424[iVar0]))
						{
							iVar1 = get_ped_in_vehicle_seat(iLocal_2424[iVar0], -1);
							if (!is_ped_injured(iVar1))
							{
								if (iVar15)
								{
									if (((!iLocal_94 && !iLocal_91) && !iLocal_110) && (((!iLocal_119 && !iLocal_118) && is_entity_touching_entity(player_ped_id(), iLocal_2424[iVar0])) || func_443(iLocal_2424[iVar0])))
									{
										if (does_entity_exist(iVar2))
										{
											iVar14 = false;
											if (iLocal_112)
											{
												iVar14 = true;
											}
											else
											{
												fVar13 = get_entity_speed(iVar2);
												if (fVar13 < 1f)
												{
													iVar14 = true;
												}
												else if (absf(fVar13 - get_entity_speed(iLocal_2424[iVar0])) > 15f)
												{
													iVar14 = true;
												}
												else if (!func_442(iLocal_2424[iVar0], iVar2, 45f))
												{
													iVar14 = true;
												}
												else if (func_440(iVar2, iLocal_2424[iVar0], 0))
												{
													iVar14 = true;
												}
											}
											if (iVar14)
											{
												func_439(iLocal_2424[iVar0]);
												iLocal_1430[iVar0]++;
											}
										}
									}
									else
									{
										set_playback_speed(iLocal_2424[iVar0], fParam1 * fLocal_913[iVar0]);
									}
								}
							}
							else
							{
								stop_playback_recorded_vehicle(iLocal_2424[iVar0]);
							}
						}
						else
						{
							iLocal_1430[iVar0]++;
						}
					}
					else
					{
						iLocal_1430[iVar0]++;
					}
				}
				else if (iLocal_1430[iVar0] == 4)
				{
					if (is_vehicle_driveable(iLocal_2424[iVar0], 0))
					{
						if (!is_playback_going_on_for_vehicle(iLocal_2424[iVar0]))
						{
							iLocal_1430[iVar0]++;
						}
						else
						{
							iVar1 = get_ped_in_vehicle_seat(iLocal_2424[iVar0], -1);
							if (!is_ped_injured(iVar1))
							{
								set_playback_speed(iLocal_2424[iVar0], fParam1 * fLocal_913[iVar0]);
							}
							else
							{
								stop_playback_recorded_vehicle(iLocal_2424[iVar0]);
							}
							if (has_vehicle_recording_been_loaded(iLocal_1391[iVar0], &cLocal_2081))
							{
								if (fLocal_1018 > fLocal_874[iVar0] + get_total_duration_of_vehicle_recording(iLocal_1391[iVar0], &cLocal_2081))
								{
									stop_playback_recorded_vehicle(iLocal_2424[iVar0]);
								}
							}
							else
							{
								stop_playback_recorded_vehicle(iLocal_2424[iVar0]);
							}
						}
					}
					else
					{
						iLocal_1430[iVar0]++;
					}
				}
				else if (iLocal_1430[iVar0] == 5)
				{
					if (!iLocal_2424[iVar0] == iLocal_2476)
					{
						if (is_vehicle_driveable(iLocal_2424[iVar0], 0))
						{
							iVar1 = get_ped_in_vehicle_seat(iLocal_2424[iVar0], -1);
							if (!is_ped_injured(iVar1))
							{
								iVar20 = get_script_task_status(iVar1, 242628503);
								if (iVar20 == 7)
								{
									fVar13 = get_entity_speed(iLocal_2424[iVar0]);
									if (fVar13 < 8f)
									{
										fVar13 = 8f;
									}
									if (fVar13 > 62.9f)
									{
										fVar13 = 62.9f;
									}
									set_drive_task_cruise_speed(iVar1, fVar13);
								}
							}
						}
						if (!iLocal_102 && !iLocal_115)
						{
							if (iLocal_1391[iVar0] > 0)
							{
								remove_vehicle_recording(iLocal_1391[iVar0], &cLocal_2081);
							}
						}
						if (!iLocal_92)
						{
							if (!iLocal_120)
							{
								func_376(iLocal_2424[iVar0]);
							}
						}
						else if (does_entity_exist(iLocal_2424[iVar0]))
						{
							delete_vehicle(&(iLocal_2424[iVar0]));
						}
					}
					iLocal_1525--;
					iLocal_1430[iVar0] = 99;
				}
				if (!iVar18)
				{
					iLocal_1530 = iVar0;
					iVar18 = true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		func_375();
	}
}

void func_439(int iParam0)
{
	if (is_vehicle_driveable(iParam0, 0))
	{
		func_377(iParam0);
		set_playback_to_use_ai(iParam0, 786603);
	}
}

bool func_440(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	vector3 vVar15;
	
	if (is_vehicle_driveable(iParam0, 0))
	{
		vVar0 = {get_entity_coords(iParam0, 1)};
	}
	if (is_vehicle_driveable(iParam1, 0))
	{
		vVar3 = {get_entity_coords(iParam1, 1)};
		if (iParam2)
		{
			vVar15 = {get_entity_velocity(iParam1)};
			vVar12 = {vVar15 / FtoV(vmag(vVar15))};
		}
		else
		{
			vVar6 = {get_offset_from_entity_in_world_coords(iParam1, 0f, 5f, 0f)};
			vVar12 = {vVar6 - vVar3};
		}
	}
	vVar9 = {vVar3 - vVar0};
	vVar9.z = 0f;
	vVar12.z = 0f;
	if (func_441(vVar9, vVar12) < 0f)
	{
		return true;
	}
	return false;
}

float func_441(vector3 vParam0, vector3 vParam1)
{
	return vParam0.x * vParam3.x + vParam0.y * vParam3.y + vParam0.z * vParam3.z;
}

bool func_442(int iParam0, int iParam1, float fParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	
	if (is_vehicle_driveable(iParam0, 0))
	{
		vVar0 = {get_entity_speed_vector(iParam0, 0)};
	}
	else
	{
		return false;
	}
	if (is_vehicle_driveable(iParam1, 0))
	{
		vVar3 = {get_entity_speed_vector(iParam1, 0)};
	}
	else
	{
		return false;
	}
	vVar0.z = 0f;
	vVar3.z = 0f;
	fVar6 = func_441(vVar0, vVar3);
	if (fVar6 < 0f)
	{
		return false;
	}
	fVar6 = get_angle_between_2d_vectors(vVar0.x, vVar0.y, vVar3.x, vVar3.y);
	if (!fVar6 < fParam2)
	{
		return false;
	}
	return true;
}

bool func_443(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iLocal_116)
	{
		iVar1 = get_players_last_vehicle();
		if (!is_entity_dead(iVar1, 0))
		{
			iVar2 = get_entity_model(iVar1);
			if (iVar2 == joaat("phantom"))
			{
				if (is_vehicle_attached_to_trailer(iVar1))
				{
					if (get_vehicle_trailer_vehicle(iVar1, &iVar0))
					{
						if (is_vehicle_driveable(iVar0, 0))
						{
							if (is_entity_touching_entity(iVar0, iParam0))
							{
								return true;
							}
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_444(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!is_entity_dead(*uParam0, 0))
	{
		if (is_vehicle_seat_free(*uParam0, -1))
		{
			if (iParam1 == 2)
			{
				iVar0 = create_ped_inside_vehicle(*uParam0, 6, func_380(), -1, 0, false);
				set_ped_relationship_group_hash(iVar0, iLocal_2097);
				set_model_as_no_longer_needed(func_380());
			}
			else if (iParam1 == 1)
			{
				iVar0 = create_random_ped_as_driver(*uParam0, 1);
				if (is_this_model_a_bike(get_entity_model(*uParam0)))
				{
					give_ped_helmet(iVar0, 1, 4096, -1);
				}
			}
			else
			{
				iVar0 = create_ped_inside_vehicle(*uParam0, 4, func_383(), -1, 0, false);
				if (iLocal_122)
				{
					set_model_as_no_longer_needed(func_383());
				}
			}
			if (iParam2)
			{
				set_entity_only_damaged_by_player(iVar0, true);
				set_ped_suffers_critical_hits(iVar0, 0);
				set_ped_config_flag(iVar0, 32, false);
			}
			if (iLocal_123)
			{
				set_ped_flee_attributes(iVar0, 8192, true);
				set_ped_flee_attributes(iVar0, 65536, true);
				set_ped_flee_attributes(iVar0, 2, false);
				_0x25367DE49D64CF16(*uParam0, 1);
			}
			set_blocking_of_non_temporary_events(iVar0, true);
			func_445(iVar0);
			iLocal_121 = true;
			return true;
		}
		else
		{
			return true;
		}
	}
	return false;
}

void func_445(int iParam0)
{
	if (does_entity_exist(iParam0))
	{
		set_ped_as_no_longer_needed(&iParam0);
	}
}

void func_446(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = get_random_int_in_range(0, 12);
	if (iLocal_2272 >= -1 && iLocal_2273 >= -1)
	{
		while (iVar0 == iLocal_2272 || iVar0 == iLocal_2273)
		{
			iVar0++;
		}
	}
	else if (iLocal_2272 >= -1)
	{
		if (iVar0 == iLocal_2272)
		{
			iVar0++;
		}
	}
	iVar1 = iVar0;
	switch (iVar1)
	{
		case 0:
			set_vehicle_colours(iParam0, 0, 0);
			break;
		
		case 1:
			set_vehicle_colours(iParam0, 2, 2);
			break;
		
		case 2:
			set_vehicle_colours(iParam0, 4, 4);
			break;
		
		case 3:
			set_vehicle_colours(iParam0, 27, 27);
			break;
		
		case 4:
			set_vehicle_colours(iParam0, 7, 7);
			break;
		
		case 5:
			set_vehicle_colours(iParam0, 73, 73);
			break;
		
		case 6:
			set_vehicle_colours(iParam0, 68, 68);
			break;
		
		case 7:
			set_vehicle_colours(iParam0, 62, 62);
			break;
		
		case 8:
			set_vehicle_colours(iParam0, 132, 132);
			break;
		
		case 9:
			set_vehicle_colours(iParam0, 117, 0);
			break;
		
		case 10:
			set_vehicle_colours(iParam0, 52, 52);
			break;
		
		case 11:
			set_vehicle_colours(iParam0, 88, 88);
			break;
		
		case 12:
			set_vehicle_colours(iParam0, 1, 1);
			break;
		
		case 13:
			set_vehicle_colours(iParam0, 36, 36);
			break;
		
		case 14:
			set_vehicle_colours(iParam0, 95, 95);
			break;
		
		default:
			set_vehicle_colours(iParam0, 73, 73);
			break;
	}
}

void func_447(vector3 vParam0, vector3 vParam1, float fParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = true;
	if (!iLocal_103)
	{
		if (!func_448(vParam0, vParam3, fParam6, 200f))
		{
			if (is_player_playing(player_id()))
			{
				iVar1 = get_players_last_vehicle();
				if (!is_entity_dead(iVar1, 0))
				{
					if (is_entity_at_coord(iVar1, vParam0, fParam6, fParam6, fParam6, false, true, 0))
					{
						iVar0 = false;
					}
				}
			}
			if (iVar0)
			{
				clear_area_of_vehicles(vParam0, fParam6, 0, 0, 0, 0, false);
			}
		}
	}
}

bool func_448(vector3 vParam0, vector3 vParam1, float fParam2, float fParam3)
{
	if (!is_screen_faded_out())
	{
		if (!iLocal_103)
		{
			if (!iLocal_90)
			{
				if (vmag2(vParam3 - vParam0) - fParam6 < fParam7 * fParam7)
				{
					if (is_sphere_visible(vParam0, fParam6))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

float func_449(int iParam0)
{
	float fVar0;
	
	request_vehicle_recording(iParam0, &cLocal_2081);
	while (!has_vehicle_recording_been_loaded(iParam0, &cLocal_2081))
	{
		wait(0);
	}
	fVar0 = get_total_duration_of_vehicle_recording(iParam0, &cLocal_2081);
	remove_vehicle_recording(iParam0, &cLocal_2081);
	return fVar0;
}

bool func_450(int iParam0)
{
	if (((((((iParam0 == joaat("police") || iParam0 == joaat("police2")) || iParam0 == joaat("police3")) || iParam0 == joaat("policeb")) || iParam0 == joaat("policet")) || iParam0 == joaat("polmav")) || iParam0 == joaat("pranger")) || iParam0 == joaat("sheriff"))
	{
		return true;
	}
	return false;
}

void func_451(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	int iVar7;
	int iVar8;
	
	if (is_player_playing(player_id()))
	{
		vVar1 = {get_entity_coords(player_ped_id(), 1)};
	}
	if (is_vehicle_driveable(iParam0, 0))
	{
		iVar7 = false;
		iVar8 = false;
		iVar0 = iLocal_1529;
		while (iVar0 < 15)
		{
			switch (iLocal_1508[iVar0])
			{
				case 0:
					if (!iLocal_2216[iVar0] == 0)
					{
						if (is_entity_at_coord(iParam0, vLocal_1893[iVar0 /*3*/], fLocal_1016, fLocal_1016, fLocal_1016, false, true, 0))
						{
							iLocal_1531++;
							iLocal_1508[iVar0]++;
						}
					}
					else
					{
						iLocal_1508[iVar0] = 99;
					}
					break;
				
				case 1:
					if (10 > iLocal_1526)
					{
						if (!does_entity_exist(iLocal_2408[iVar0]))
						{
							request_model(iLocal_2216[iVar0]);
							if (has_model_loaded(iLocal_2216[iVar0]))
							{
								if ((iLocal_90 || iLocal_104) || (!iLocal_121 && !func_448(vLocal_1893[iVar0 /*3*/], vVar1, 5f, fLocal_1029)))
								{
									if (iLocal_100)
									{
										func_447(vLocal_1893[iVar0 /*3*/], vVar1, fLocal_1022);
									}
									iLocal_2408[iVar0] = create_vehicle(iLocal_2216[iVar0], vLocal_1893[iVar0 /*3*/], 0, 0, 0);
									if (iLocal_2216[iVar0] == joaat("polmav"))
									{
										set_vehicle_livery(iLocal_2408[iVar0], 0);
									}
									set_entity_quaternion(iLocal_2408[iVar0], fLocal_952[iVar0], fLocal_968[iVar0], fLocal_984[iVar0], fLocal_1000[iVar0]);
									set_model_as_no_longer_needed(iLocal_2216[iVar0]);
									if (is_vehicle_model(iLocal_2408[iVar0], func_381()))
									{
										set_vehicle_siren(iLocal_2408[iVar0], true);
										if (!is_this_model_a_bike(iLocal_2216[iVar0]))
										{
											set_siren_with_no_driver(iLocal_2408[iVar0], 1);
										}
									}
									if (is_vehicle_model(iLocal_2408[iVar0], func_382()))
									{
										set_vehicle_colours(iLocal_2408[iVar0], 0, 0);
									}
									_0x3910051CCECDB00C(iLocal_2408[iVar0], true);
									iLocal_1531--;
									iLocal_1526++;
									iLocal_1508[iVar0]++;
									iLocal_121 = true;
								}
							}
						}
						else
						{
							iLocal_1531--;
							iLocal_1526++;
							iLocal_1508[iVar0]++;
						}
					}
					break;
				
				case 2:
					if (!iVar7)
					{
						if (is_vehicle_driveable(iLocal_2408[iVar0], 0))
						{
							vVar4 = {get_entity_coords(iLocal_2408[iVar0], 1)};
						}
						if (fLocal_1030 == 0f || vdist2(vVar1, vVar4) < fLocal_1030 * fLocal_1030)
						{
							if (!func_440(iLocal_2408[iVar0], iParam0, 0))
							{
								if (!iLocal_92)
								{
									func_376(iLocal_2408[iVar0]);
								}
								else
								{
									delete_vehicle(&(iLocal_2408[iVar0]));
								}
								iLocal_1526--;
								iLocal_1508[iVar0] = 99;
								iVar7 = true;
							}
						}
					}
					break;
			}
			if (iLocal_1508[iVar0] != 99)
			{
				if (!iVar8)
				{
					iLocal_1529 = iVar0;
					iVar8 = true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		func_378();
	}
}

void func_452(int iParam0, float fParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	float fVar15;
	float fVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	var uVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	vector3 vVar25;
	
	iVar5 = false;
	iVar18 = is_player_playing(player_id());
	iVar19 = can_create_random_driver();
	uVar20 = can_create_random_bike_rider();
	if (iVar18)
	{
		if (is_ped_in_any_vehicle(player_ped_id(), 0))
		{
			iVar5 = get_vehicle_ped_is_in(player_ped_id(), 0);
		}
		vVar12 = {get_entity_coords(player_ped_id(), 1)};
	}
	iVar1 = 0;
	if (is_vehicle_driveable(iParam0, 0))
	{
		if (is_playback_going_on_for_vehicle(iParam0))
		{
			fLocal_1018 = get_time_position_in_recording(iParam0);
		}
		iVar22 = -1;
		iVar23 = false;
		iVar24 = false;
		iVar0 = iLocal_1528;
		while (iVar0 < 117 && !iVar23)
		{
			if (iLocal_1155[iVar0] != 99)
			{
				if (iLocal_1155[iVar0] == 0)
				{
					if (iLocal_1037[iVar0] > 0 && iLocal_2098[iVar0] != 0)
					{
						if (!iLocal_90)
						{
							if (fLocal_1018 < fLocal_596[iVar0] + 20000f)
							{
								if (fLocal_1018 >= fLocal_596[iVar0] - 7000f * fParam1)
								{
									if (func_450(iLocal_2098[iVar0]))
									{
										set_bit(&(iLocal_1273[iVar0]), false);
									}
									else if (is_this_model_a_bike(iLocal_2098[iVar0]))
									{
										set_bit(&(iLocal_1273[iVar0]), 2);
									}
									clear_bit(&(iLocal_1273[iVar0]), true);
									iLocal_1533++;
									iLocal_1155[iVar0]++;
								}
								else if (iVar1 > 2)
								{
									iVar23 = true;
								}
								else
								{
									iVar1++;
								}
							}
							else
							{
								func_454(iVar0, 1090519040);
							}
						}
						else
						{
							fVar15 = fLocal_1018 - fLocal_596[iVar0];
							if (fVar15 >= 0f)
							{
								if (fVar15 < func_449(iLocal_1037[iVar0]))
								{
									if (func_450(iLocal_2098[iVar0]))
									{
										set_bit(&(iLocal_1273[iVar0]), false);
									}
									else if (is_this_model_a_bike(iLocal_2098[iVar0]))
									{
										set_bit(&(iLocal_1273[iVar0]), 2);
									}
									clear_bit(&(iLocal_1273[iVar0]), true);
									iLocal_1533++;
									iLocal_1155[iVar0]++;
								}
								else
								{
									func_454(iVar0, 1090519040);
								}
							}
						}
					}
					else
					{
						func_454(iVar0, 1090519040);
					}
				}
				else if (iLocal_1155[iVar0] == 1)
				{
					request_vehicle_recording(iLocal_1037[iVar0], &cLocal_2081);
					iVar17 = false;
					if (is_bit_set(iLocal_1273[iVar0], false))
					{
						request_model(func_380());
						if (has_model_loaded(func_380()))
						{
							iVar17 = true;
						}
					}
					else if (!iLocal_117 && ((!is_bit_set(iLocal_1273[iVar0], 2) && iVar19) || (is_bit_set(iLocal_1273[iVar0], 2) && uVar20)))
					{
						iVar17 = true;
					}
					else
					{
						request_model(func_383());
						iVar17 = has_model_loaded(func_383());
					}
					if (!does_entity_exist(iLocal_2274[iVar0]))
					{
						request_model(iLocal_2098[iVar0]);
						if ((has_model_loaded(iLocal_2098[iVar0]) && has_vehicle_recording_been_loaded(iLocal_1037[iVar0], &cLocal_2081)) && iVar17)
						{
							if (fLocal_1018 >= fLocal_596[iVar0] - fLocal_1031 * fParam1)
							{
								if ((iLocal_104 || iParam2) || (!iLocal_121 && !func_448(vLocal_1541[iVar0 /*3*/], vVar12, 5f, fLocal_1029)))
								{
									if (iLocal_100)
									{
										func_447(vLocal_1541[iVar0 /*3*/], vVar12, fLocal_1022);
									}
									iLocal_2274[iVar0] = create_vehicle(iLocal_2098[iVar0], vLocal_1541[iVar0 /*3*/], 0, 0, 0);
									if (iLocal_2098[iVar0] == joaat("polmav"))
									{
										set_vehicle_livery(iLocal_2274[iVar0], 0);
									}
									if (uLocal_113 && !is_bit_set(iLocal_1273[iVar0], false))
									{
										func_446(iLocal_2274[iVar0]);
									}
									set_entity_coords_no_offset(iLocal_2274[iVar0], vLocal_1541[iVar0 /*3*/], 0, 0, 1);
									set_entity_quaternion(iLocal_2274[iVar0], fLocal_124[iVar0], fLocal_242[iVar0], fLocal_360[iVar0], fLocal_478[iVar0]);
									if (is_this_model_a_car(iLocal_2098[iVar0]) || is_this_model_a_bike(iLocal_2098[iVar0]))
									{
										set_vehicle_on_ground_properly(iLocal_2274[iVar0]);
									}
									if (is_bit_set(iLocal_1273[iVar0], 3))
									{
										_0x3910051CCECDB00C(iLocal_2274[iVar0], true);
									}
									if (!is_bit_set(iLocal_1273[iVar0], false))
									{
										set_vehicle_engine_on(iLocal_2274[iVar0], true, 1, 0);
										if (get_clock_hours() > 19 || get_clock_hours() < 7)
										{
											set_vehicle_lights(iLocal_2274[iVar0], 3);
										}
									}
									freeze_entity_position(iLocal_2274[iVar0], true);
									set_entity_only_damaged_by_player(iLocal_2274[iVar0], true);
									set_model_as_no_longer_needed(iLocal_2098[iVar0]);
									iLocal_1533--;
									iLocal_1155[iVar0]++;
									iLocal_121 = true;
								}
								else if (fLocal_1018 > fLocal_596[iVar0])
								{
									iLocal_1533--;
									func_454(iVar0, 1090519040);
								}
							}
						}
					}
				}
				else if (iLocal_1155[iVar0] == 2)
				{
					iVar17 = false;
					if (((iVar3 < 8 && (iVar0 > iLocal_1539 || iLocal_1539 == 0)) || iLocal_104) || iParam2)
					{
						if (!is_bit_set(iLocal_1273[iVar0], true))
						{
							if (is_bit_set(iLocal_1273[iVar0], false))
							{
								request_model(func_380());
								iVar17 = has_model_loaded(func_380());
								iVar21 = 2;
							}
							else if (!iLocal_117 && ((!is_bit_set(iLocal_1273[iVar0], 2) && iVar19) || (is_bit_set(iLocal_1273[iVar0], 2) && uVar20)))
							{
								iVar17 = true;
								iVar21 = 1;
							}
							else
							{
								request_model(func_383());
								iVar17 = has_model_loaded(func_383());
								iVar21 = 0;
							}
							if (!is_entity_dead(iLocal_2274[iVar0], 0))
							{
								if (!iLocal_121 && is_vehicle_seat_free(iLocal_2274[iVar0], -1))
								{
									if (iVar17)
									{
										if ((vdist2(get_entity_coords(iLocal_2274[iVar0], 1), vVar12) < 10000f || iParam2) || iLocal_104)
										{
											func_444(&(iLocal_2274[iVar0]), iVar21, 0);
											set_bit(&(iLocal_1273[iVar0]), true);
										}
									}
								}
							}
						}
						if (is_vehicle_driveable(iLocal_2274[iVar0], 0))
						{
							request_vehicle_recording(iLocal_1037[iVar0], &cLocal_2081);
							if (fLocal_1018 >= fLocal_596[iVar0])
							{
								if (15 > iLocal_1524)
								{
									fVar15 = fLocal_1018 - fLocal_596[iVar0];
									if (has_vehicle_recording_been_loaded(iLocal_1037[iVar0], &cLocal_2081))
									{
										if (fVar15 < get_total_duration_of_vehicle_recording(iLocal_1037[iVar0], &cLocal_2081))
										{
											vVar6 = {get_entity_coords(iLocal_2274[iVar0], 1)};
											vVar9 = {get_position_of_vehicle_recording_at_time(iLocal_1037[iVar0], fVar15, &cLocal_2081)};
											if (!func_448(vVar6, vVar12, 5f, fLocal_1029) && func_448(vVar9, vVar12, 5f, fLocal_1029))
											{
												if (!is_bit_set(iLocal_1273[iVar0], true))
												{
													func_444(&(iLocal_2274[iVar0]), iVar21, 0);
												}
												func_454(iVar0, 1090519040);
											}
											else if (((!iLocal_121 || is_bit_set(iLocal_1273[iVar0], true)) || iLocal_104) || iParam2)
											{
												if (func_437(&(iLocal_2274[iVar0]), iLocal_1037[iVar0], fVar15, 1, 0, 0, 1, iLocal_118))
												{
													if (!is_bit_set(iLocal_1273[iVar0], true))
													{
														func_444(&(iLocal_2274[iVar0]), iVar21, 0);
													}
													set_entity_collision(iLocal_2274[iVar0], true, 0);
													set_playback_speed(iLocal_2274[iVar0], fParam1);
													iLocal_1524++;
													iLocal_1155[iVar0]++;
												}
											}
										}
										else
										{
											if (!is_bit_set(iLocal_1273[iVar0], true))
											{
												func_444(&(iLocal_2274[iVar0]), iVar21, 0);
											}
											func_454(iVar0, 1090519040);
										}
									}
									else if (fVar15 > get_total_duration_of_vehicle_recording(iLocal_1037[iVar0], &cLocal_2081))
									{
										if (!is_bit_set(iLocal_1273[iVar0], true))
										{
											func_444(&(iLocal_2274[iVar0]), iVar21, 0);
										}
										func_454(iVar0, 1090519040);
									}
								}
								else
								{
									if (!is_bit_set(iLocal_1273[iVar0], true))
									{
										func_444(&(iLocal_2274[iVar0]), iVar21, 0);
									}
									func_454(iVar0, 1090519040);
								}
							}
							else if (iLocal_101 && !iLocal_109)
							{
								if (!is_bit_set(iLocal_1273[iVar0], true))
								{
									func_444(&(iLocal_2274[iVar0]), iVar21, 0);
								}
								func_454(iVar0, 1090519040);
							}
						}
						else
						{
							if (!is_bit_set(iLocal_1273[iVar0], true))
							{
								func_444(&(iLocal_2274[iVar0]), iVar21, 0);
							}
							func_454(iVar0, 1090519040);
						}
						iVar3++;
						iLocal_1539 = iVar0;
					}
				}
				else if (iLocal_1155[iVar0] == 3)
				{
					if (is_vehicle_driveable(iLocal_2274[iVar0], 0))
					{
						if (is_playback_going_on_for_vehicle(iLocal_2274[iVar0]))
						{
							iVar4 = get_ped_in_vehicle_seat(iLocal_2274[iVar0], -1);
							if (!is_ped_injured(iVar4))
							{
								if (iVar18)
								{
									iVar24 = false;
									if (!iLocal_99)
									{
										if ((!iLocal_94 && !iLocal_91) && func_443(iLocal_2274[iVar0]))
										{
											if (iVar2 < 3 && (iVar0 > iLocal_1538 || iLocal_1538 == 0))
											{
												if (!is_entity_dead(iVar5, 0))
												{
													iVar17 = false;
													if (!func_453(iLocal_2274[iVar0], iVar5) || func_440(iVar5, iLocal_2274[iVar0], 0))
													{
														iVar24 = true;
													}
												}
												iLocal_1538 = iVar0;
												iVar2++;
											}
										}
										else if (((!iLocal_114 && !is_bit_set(iLocal_1273[iVar0], 4)) && iVar2 < 3) && (iVar0 > iLocal_1538 || iLocal_1538 == 0))
										{
											vVar25 = {get_offset_from_entity_given_world_coords(iParam0, get_entity_coords(iLocal_2274[iVar0], 1))};
											if (vVar25.y < 0f)
											{
												if (absf(vVar25.y) > absf(vVar25.x))
												{
													iVar24 = true;
												}
											}
											iVar2++;
											iLocal_1538 = iVar0;
										}
									}
									if (iVar24)
									{
										func_439(iLocal_2274[iVar0]);
										iLocal_1155[iVar0]++;
									}
									else
									{
										set_playback_speed(iLocal_2274[iVar0], fParam1);
									}
								}
							}
							else
							{
								stop_playback_recorded_vehicle(iLocal_2274[iVar0]);
							}
						}
						else
						{
							iLocal_1155[iVar0]++;
						}
					}
					else
					{
						iLocal_1155[iVar0]++;
					}
				}
				else if (iLocal_1155[iVar0] == 4)
				{
					if (is_vehicle_driveable(iLocal_2274[iVar0], 0))
					{
						if (!is_playback_going_on_for_vehicle(iLocal_2274[iVar0]))
						{
							iLocal_1155[iVar0]++;
						}
						else
						{
							iVar4 = get_ped_in_vehicle_seat(iLocal_2274[iVar0], -1);
							if (!is_ped_injured(iVar4))
							{
								set_playback_speed(iLocal_2274[iVar0], fParam1);
							}
							else
							{
								stop_playback_recorded_vehicle(iLocal_2274[iVar0]);
							}
							if (has_vehicle_recording_been_loaded(iLocal_1037[iVar0], &cLocal_2081))
							{
								if (fLocal_1018 > fLocal_596[iVar0] + get_total_duration_of_vehicle_recording(iLocal_1037[iVar0], &cLocal_2081))
								{
									stop_playback_recorded_vehicle(iLocal_2274[iVar0]);
								}
							}
							else
							{
								stop_playback_recorded_vehicle(iLocal_2274[iVar0]);
							}
						}
					}
					else
					{
						iLocal_1155[iVar0]++;
					}
				}
				else if (iLocal_1155[iVar0] == 5)
				{
					if (!is_entity_dead(iLocal_2274[iVar0], 0))
					{
						fVar16 = get_entity_speed(iLocal_2274[iVar0]);
					}
					iLocal_1524--;
					func_454(iVar0, fVar16);
				}
				if (iVar22 == -1)
				{
					iVar22 = iVar0;
				}
			}
			iVar0++;
		}
		if (iVar22 != -1)
		{
			iLocal_1528 = iVar22;
		}
		if (iVar2 < 3)
		{
			iLocal_1538 = 0;
		}
		if (iVar3 < 8)
		{
			iLocal_1539 = 0;
		}
	}
	else
	{
		func_379();
	}
}

bool func_453(int iParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	
	if (is_vehicle_driveable(iParam0, 0))
	{
		vVar0 = {get_entity_speed_vector(iParam0, 0)};
	}
	else
	{
		return false;
	}
	if (is_vehicle_driveable(iParam1, 0))
	{
		vVar3 = {get_entity_speed_vector(iParam1, 0)};
	}
	else
	{
		return false;
	}
	vVar0.z = 0f;
	vVar3.z = 0f;
	fVar6 = func_441(vVar0, vVar3);
	if (fVar6 < 0f)
	{
		return false;
	}
	return true;
}

void func_454(int iParam0, float fParam1)
{
	int iVar0;
	
	if (!iLocal_2098[iParam0] == 0)
	{
		set_model_as_no_longer_needed(iLocal_2098[iParam0]);
	}
	if (!is_entity_dead(iLocal_2274[iParam0], 0))
	{
		set_entity_collision(iLocal_2274[iParam0], true, 0);
		freeze_entity_position(iLocal_2274[iParam0], false);
		iVar0 = get_ped_in_vehicle_seat(iLocal_2274[iParam0], -1);
		if (!is_ped_injured(iVar0) && iVar0 != player_ped_id())
		{
			set_blocking_of_non_temporary_events(iVar0, false);
			if (fParam1 < 8f)
			{
				fParam1 = 8f;
			}
			if (fParam1 > 62.9f)
			{
				fParam1 = 62.9f;
			}
			task_vehicle_mission(iVar0, iLocal_2274[iParam0], false, 1, fParam1, 786603, 5f, 5f, 1);
			set_ped_flee_attributes(iVar0, 8192, true);
			if (iLocal_123)
			{
				set_ped_flee_attributes(iVar0, 65536, true);
				set_ped_flee_attributes(iVar0, 2, false);
			}
			set_ped_combat_attributes(iVar0, 6, false);
			set_drive_task_cruise_speed(iVar0, fParam1);
		}
	}
	if (!iLocal_92)
	{
		if (!iLocal_120)
		{
			func_445(iVar0);
			func_376(iLocal_2274[iParam0]);
		}
	}
	else
	{
		if (does_entity_exist(iVar0))
		{
			delete_ped(&iVar0);
		}
		if (does_entity_exist(iLocal_2274[iParam0]))
		{
			delete_vehicle(&(iLocal_2274[iParam0]));
		}
	}
	if (!iLocal_102 && !iLocal_115)
	{
		if (iLocal_1037[iParam0] > 0)
		{
			remove_vehicle_recording(iLocal_1037[iParam0], &cLocal_2081);
		}
	}
	iLocal_1155[iParam0] = 99;
}

void func_455(int iParam0, float fParam1, float fParam2)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	float fVar13;
	
	if (is_player_playing(player_id()))
	{
		vVar10 = {get_entity_coords(player_ped_id(), 1)};
	}
	if (is_vehicle_driveable(iParam0, 0))
	{
		if (is_playback_going_on_for_vehicle(iParam0))
		{
			iVar0 = get_current_playback_for_vehicle(iParam0);
			vVar1 = {_0x92523B76657A517D(iVar0, fParam1)};
			vVar4 = {get_entity_coords(iParam0, 1)};
			vVar7 = {vVar4 - vVar1};
			fVar13 = vmag(vVar7);
			if (fVar13 > fParam2)
			{
				fVar13 = fParam2;
			}
			func_447(vVar1, vVar10, fVar13);
		}
	}
}

void func_456(int iParam0, float fParam1)
{
	if (!iLocal_103)
	{
		if (!is_entity_dead(iParam0, 0))
		{
			if (is_player_playing(player_id()))
			{
				if (vdist2(get_entity_coords(iParam0, 1), get_entity_coords(player_ped_id(), 1)) > fParam1 * fParam1)
				{
					set_vehicle_population_budget(1);
				}
				else
				{
					set_vehicle_population_budget(0);
				}
			}
		}
	}
}

void func_457(int iParam0, float fParam1)
{
	if (!iLocal_103)
	{
		if (!is_entity_dead(iParam0, 0))
		{
			if (is_player_playing(player_id()))
			{
				if (vdist2(get_entity_coords(iParam0, 1), get_entity_coords(player_ped_id(), 1)) > fParam1 * fParam1)
				{
					set_vehicle_density_multiplier_this_frame(1f);
				}
				else
				{
					set_vehicle_density_multiplier_this_frame(0f);
				}
			}
		}
	}
}

void func_458(int iParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	
	if (!is_entity_dead(iParam0, 0) && is_playback_going_on_for_vehicle(iParam0))
	{
		fVar1 = fLocal_1032 + 2000f;
		fVar2 = fLocal_1033 + 2000f;
		iVar4 = false;
		if (fVar1 < fParam1 + 25000f)
		{
			iVar0 = get_current_playback_for_vehicle(iParam0);
			if (fVar1 <= get_total_duration_of_vehicle_recording_id(iVar0))
			{
				if (iLocal_1534 == 0)
				{
					vLocal_2069 = {_0x92523B76657A517D(iVar0, fLocal_1032)};
					iLocal_1534++;
				}
				else if (iLocal_1534 == 1)
				{
					vLocal_2072 = {_0x92523B76657A517D(iVar0, fVar1)};
					iLocal_1534++;
				}
				else if (!iLocal_121)
				{
					if (vLocal_2069.x > vLocal_2072.x)
					{
						fVar3 = vLocal_2069.x;
						vLocal_2069.x = vLocal_2072.x;
						vLocal_2072.x = fVar3;
					}
					if (vLocal_2069.y > vLocal_2072.y)
					{
						fVar3 = vLocal_2069.y;
						vLocal_2069.y = vLocal_2072.y;
						vLocal_2072.y = fVar3;
					}
					if (vLocal_2069.z > vLocal_2072.z)
					{
						fVar3 = vLocal_2069.z;
						vLocal_2069.z = vLocal_2072.z;
						vLocal_2072.z = fVar3;
					}
					vLocal_2069 = {vLocal_2069 - Vector(fLocal_1036, fLocal_1036, fLocal_1036)};
					vLocal_2072 = {vLocal_2072 + Vector(fLocal_1036, fLocal_1036, fLocal_1036)};
					set_roads_in_area(vLocal_2069, vLocal_2072, false, 0);
					fLocal_1032 = fVar1;
					iLocal_1534 = 0;
				}
			}
		}
		if (fVar2 < fParam1 - 8000f)
		{
			iVar0 = get_current_playback_for_vehicle(iParam0);
			if (iLocal_1537 == 0)
			{
				vLocal_2075 = {_0x92523B76657A517D(iVar0, fLocal_1033)};
				iLocal_1537++;
			}
			else if (iLocal_1537 == 1)
			{
				vLocal_2078 = {_0x92523B76657A517D(iVar0, fVar2)};
				iLocal_1537++;
			}
			else if (!iLocal_121 && !iVar4)
			{
				if (vLocal_2075.x > vLocal_2078.x)
				{
					fVar3 = vLocal_2075.x;
					vLocal_2075.x = vLocal_2078.x;
					vLocal_2078.x = fVar3;
				}
				if (vLocal_2075.y > vLocal_2078.y)
				{
					fVar3 = vLocal_2075.y;
					vLocal_2075.y = vLocal_2078.y;
					vLocal_2078.y = fVar3;
				}
				if (vLocal_2075.z > vLocal_2078.z)
				{
					fVar3 = vLocal_2075.z;
					vLocal_2075.z = vLocal_2078.z;
					vLocal_2078.z = fVar3;
				}
				vLocal_2075 = {vLocal_2075 - Vector(fLocal_1036, fLocal_1036, fLocal_1036)};
				vLocal_2078 = {vLocal_2078 + Vector(fLocal_1036, fLocal_1036, fLocal_1036)};
				set_roads_back_to_original(vLocal_2075, vLocal_2078, 1);
				fLocal_1033 = fVar2;
				iLocal_1537 = 0;
			}
		}
	}
}

bool func_459(int iParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	float fVar15;
	
	if (!is_ped_injured(iParam0))
	{
		if (!is_entity_dead(iParam1, 0))
		{
			if (is_ped_in_vehicle(iParam0, iParam1, 0))
			{
				return false;
			}
		}
	}
	if (!is_entity_dead(iParam0, 0))
	{
		vVar0 = {get_entity_coords(iParam0, 1)};
	}
	if (is_vehicle_driveable(iParam1, 0))
	{
		vVar3 = {get_entity_coords(iParam1, 1)};
		vVar6 = {get_offset_from_entity_in_world_coords(iParam1, 0f, 5f, 0f)};
		vVar12 = {vVar6 - vVar3};
	}
	vVar9 = {vVar3 - vVar0};
	vVar9.z = 0f;
	vVar12.z = 0f;
	fVar15 = func_441(vVar9, vVar12);
	if (fVar15 < 0f)
	{
		return true;
	}
	return false;
}

void func_460()
{
	set_all_vehicle_generators_active_in_area(-9000f, -9000f, -1000f, 9000f, 9000f, 1500f, false, 1);
	set_number_of_parked_vehicles(0);
	set_garbage_trucks(0);
	set_all_low_priority_vehicle_generators_active(0);
	set_vehicle_density_multiplier_this_frame(0f);
	set_vehicle_population_budget(0);
	set_ped_population_budget(3);
}

void func_461()
{
	iLocal_111 = 1;
}

void func_462()
{
	iLocal_104 = 1;
}

void func_463(var uParam0, int iParam1)
{
	Global_55760 = uParam0;
	Global_55761 = iParam1;
}

void func_464(int iParam0)
{
	if (iParam0)
	{
		if (iLocal_2938 == 0)
		{
			iLocal_2938 = add_scenario_blocking_area(-1196.229f, -575.1415f, 0.879524f, -1035.999f, -474.7514f, 68.87952f, 0, 1, 1, 1);
		}
		set_ped_paths_in_area(-1714.315f, -567.0828f, 30.83458f, -1680.67f, -557.9427f, 39.83458f, false, 0);
		set_ped_paths_in_area(-373.6247f, -835.738f, 30.4071f, -327.3391f, -822.5929f, 38.0959f, false, 0);
		set_ped_paths_in_area(-353.9807f, -683.04f, 30.5587f, -316.4468f, -669.6537f, 37.2847f, false, 0);
		set_ped_paths_in_area(-1287.162f, -651.963f, 25.4564f, -1256.621f, -625.6708f, 29.6292f, false, 0);
		set_ped_non_creation_area(-373.6247f, -835.738f, 30.4071f, -327.3391f, -822.5929f, 38.0959f);
	}
	else
	{
		if (iLocal_2938 != 0)
		{
			remove_scenario_blocking_area(iLocal_2938, 0);
			iLocal_2938 = 0;
		}
		if (iLocal_2939 != 0)
		{
			remove_scenario_blocking_area(iLocal_2939, 0);
			iLocal_2939 = 0;
		}
		set_ped_paths_back_to_original(-1714.315f, -567.0828f, 30.83458f, -1680.67f, -557.9427f, 39.83458f, 0);
		set_ped_paths_back_to_original(-373.6247f, -835.738f, 30.4071f, -327.3391f, -822.5929f, 38.0959f, 0);
		set_ped_paths_back_to_original(-353.9807f, -683.04f, 30.5587f, -316.4468f, -669.6537f, 37.2847f, 0);
		set_ped_paths_back_to_original(-1287.162f, -651.963f, 25.4564f, -1256.621f, -625.6708f, 29.6292f, 0);
		clear_ped_non_creation_area();
	}
}

void func_465(int iParam0)
{
	if (iParam0)
	{
		if (!iLocal_2527)
		{
			create_forced_object(-1052.49f, -476.15f, 36.6f, 5f, -1184516519, 1);
			create_forced_object(-1207.25f, -578.08f, 26.17f, 5f, -136782495, 1);
			create_forced_object(-1208.322f, -579.1413f, 26.27f, 5f, 307771752, 1);
			iLocal_2527 = 1;
		}
	}
	else if (iLocal_2527)
	{
		remove_forced_object(-1052.49f, -476.15f, 36.6f, 5f, -1184516519);
		remove_forced_object(-1207.25f, -578.08f, 26.17f, 5f, -136782495);
		remove_forced_object(-1208.322f, -579.1413f, 26.27f, 5f, 307771752);
		iLocal_2527 = 0;
	}
}

void func_466(int iParam0)
{
	Global_68319.f_138 = iParam0;
}

void func_467(int iParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	int iVar2;
	vector3 vVar3;
	
	if (is_vehicle_driveable(iParam0, 0))
	{
		if (is_playback_going_on_for_vehicle(iParam0))
		{
			func_462();
			func_437(&iParam0, iLocal_1527, fParam1, 1, 0, 1, 0, 0);
			fLocal_1018 = fParam1;
			iVar0 = 0;
			while (iVar0 < 38)
			{
				if (iLocal_1430[iVar0] > 2 && iLocal_1430[iVar0] < 6)
				{
					iVar2 = false;
					if (does_entity_exist(iLocal_2424[iVar0]))
					{
						if (!is_entity_dead(iLocal_2424[iVar0], 0))
						{
							if (is_playback_going_on_for_vehicle(iLocal_2424[iVar0]))
							{
								fVar1 = fParam1 - fLocal_874[iVar0];
								fVar1 *= fLocal_913[iVar0];
								if (fVar1 >= 0f)
								{
									if (fVar1 < func_449(iLocal_1391[iVar0]))
									{
										func_437(&(iLocal_2424[iVar0]), iLocal_1391[iVar0], fVar1, 1, 0, 1, iLocal_119, iLocal_118);
									}
									else
									{
										iVar2 = true;
									}
								}
								else
								{
									iVar2 = true;
								}
							}
							else
							{
								iVar2 = true;
							}
						}
						else
						{
							iVar2 = true;
						}
					}
					else
					{
						iVar2 = true;
					}
					if (iVar2)
					{
						iLocal_1430[iVar0] = 99;
						iLocal_1525--;
					}
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < 117)
			{
				if (iLocal_1155[iVar0] > 2 && iLocal_1155[iVar0] < 6)
				{
					iVar2 = false;
					if (does_entity_exist(iLocal_2274[iVar0]))
					{
						if (!is_entity_dead(iLocal_2274[iVar0], 0))
						{
							if (is_playback_going_on_for_vehicle(iLocal_2274[iVar0]))
							{
								fVar1 = fParam1 - fLocal_596[iVar0];
								if (fVar1 >= 0f)
								{
									if (fVar1 < func_449(iLocal_1037[iVar0]))
									{
										func_437(&(iLocal_2274[iVar0]), iLocal_1037[iVar0], fVar1, 1, 0, 1, 1, iLocal_118);
									}
									else
									{
										iVar2 = true;
									}
								}
								else
								{
									iVar2 = true;
								}
							}
							else
							{
								iVar2 = true;
							}
						}
						else
						{
							iVar2 = true;
						}
					}
					else
					{
						iVar2 = true;
					}
					if (iVar2)
					{
						iLocal_1155[iVar0] = 99;
						iLocal_1524--;
					}
				}
				iVar0++;
			}
			iLocal_1528 = 0;
			iLocal_1530 = 0;
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (iLocal_1508[iVar0] > 2)
				{
					if (does_entity_exist(iLocal_2408[iVar0]))
					{
						if (!is_entity_dead(iLocal_2408[iVar0], 0))
						{
							set_entity_as_mission_entity(iLocal_2408[iVar0], true, 0);
							iLocal_1526++;
							iLocal_1508[iVar0] = 2;
						}
					}
					else
					{
						iLocal_1508[iVar0] = 0;
					}
				}
				iVar0++;
			}
			iLocal_1529 = 0;
			iLocal_1534 = 0;
			iLocal_1537 = 0;
			fLocal_1033 = fParam1;
			fLocal_1032 = fParam1;
			vVar3 = {get_entity_coords(iParam0, 1)};
			vLocal_2057 = {vVar3 - Vector(100f, 100f, 100f)};
			vLocal_2060 = {vVar3 + Vector(100f, 100f, 100f)};
			set_roads_in_area(vLocal_2057, vLocal_2060, false, 0);
		}
	}
}

void func_468(float fParam0, float fParam1)
{
	int iVar0;
	
	if (fLocal_2628 < fParam0)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < iLocal_2274)
		{
			if (iLocal_1037[iVar0] != 0)
			{
				if (fLocal_596[iVar0] < fParam0 && fLocal_596[iVar0] > fParam1 - 10000f)
				{
					request_model(iLocal_2098[iVar0]);
					request_vehicle_recording(iLocal_1037[iVar0], sLocal_2784);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_2424)
		{
			if (iLocal_1391[iVar0] != 0)
			{
				if (fLocal_874[iVar0] < fParam0 && fLocal_874[iVar0] > fParam1 - 10000f)
				{
					if (!does_entity_exist(iLocal_2424[iVar0]))
					{
						request_model(iLocal_2232[iVar0]);
					}
					request_vehicle_recording(iLocal_1391[iVar0], sLocal_2784);
				}
			}
			iVar0++;
		}
	}
}

void func_469(int iParam0)
{
	iLocal_2271 = iParam0;
}

void func_470(int iParam0)
{
	iLocal_117 = iParam0;
}

void func_471()
{
	vLocal_1541[0 /*3*/] = {-1869.447f, -533.4042f, 11.262f};
	fLocal_124[0] = -0.0008f;
	fLocal_242[0] = -0.0089f;
	fLocal_360[0] = 0.4259f;
	fLocal_478[0] = 0.9047f;
	iLocal_1037[0] = 47;
	fLocal_596[0] = 2000f;
	iLocal_2098[0] = joaat("intruder");
	vLocal_1541[1 /*3*/] = {-2017.498f, -425.4558f, 11.0772f};
	fLocal_124[1] = -0.0102f;
	fLocal_242[1] = -0.0039f;
	fLocal_360[1] = 0.4351f;
	fLocal_478[1] = 0.9003f;
	iLocal_1037[1] = 250;
	fLocal_596[1] = 2050f;
	iLocal_2098[1] = joaat("intruder");
	vLocal_1541[2 /*3*/] = {-2140.079f, -363.5818f, 12.776f};
	fLocal_124[2] = 0.0018f;
	fLocal_242[2] = -0.0046f;
	fLocal_360[2] = 0.8084f;
	fLocal_478[2] = -0.5886f;
	iLocal_1037[2] = 251;
	fLocal_596[2] = 2100f;
	iLocal_2098[2] = joaat("intruder");
	vLocal_1541[3 /*3*/] = {-1994.432f, -437.5106f, 11.7305f};
	fLocal_124[3] = -0.0021f;
	fLocal_242[3] = -0.0005f;
	fLocal_360[3] = 0.4319f;
	fLocal_478[3] = 0.9019f;
	iLocal_1037[3] = 284;
	fLocal_596[3] = 2500f;
	iLocal_2098[3] = joaat("bus");
	vLocal_1541[4 /*3*/] = {-1924.532f, -488.042f, 11.3844f};
	fLocal_124[4] = -0.0082f;
	fLocal_242[4] = -0.0039f;
	fLocal_360[4] = 0.4332f;
	fLocal_478[4] = 0.9012f;
	iLocal_1037[4] = 67;
	fLocal_596[4] = 3000f;
	iLocal_2098[4] = joaat("manana");
	vLocal_1541[5 /*3*/] = {-1941.44f, -481.0277f, 11.408f};
	fLocal_124[5] = -0.0022f;
	fLocal_242[5] = -0.0095f;
	fLocal_360[5] = 0.4264f;
	fLocal_478[5] = 0.9045f;
	iLocal_1037[5] = 68;
	fLocal_596[5] = 3050f;
	iLocal_2098[5] = joaat("intruder");
	vLocal_1541[6 /*3*/] = {-2057.131f, -404.9521f, 10.7321f};
	fLocal_124[6] = 0.0017f;
	fLocal_242[6] = -0.0034f;
	fLocal_360[6] = 0.9104f;
	fLocal_478[6] = -0.4136f;
	iLocal_1037[6] = 30;
	fLocal_596[6] = 5000f;
	iLocal_2098[6] = joaat("manana");
	vLocal_1541[7 /*3*/] = {-2036.544f, -436.0986f, 11.0454f};
	fLocal_124[7] = 0.0002f;
	fLocal_242[7] = 0.0039f;
	fLocal_360[7] = 0.9073f;
	fLocal_478[7] = -0.4204f;
	iLocal_1037[7] = 31;
	fLocal_596[7] = 5040f;
	iLocal_2098[7] = joaat("manana");
	vLocal_1541[8 /*3*/] = {-1984.741f, -437.6598f, 11.2996f};
	fLocal_124[8] = -0.0053f;
	fLocal_242[8] = -0.0097f;
	fLocal_360[8] = 0.4337f;
	fLocal_478[8] = 0.901f;
	iLocal_1037[8] = 32;
	fLocal_596[8] = 5080f;
	iLocal_2098[8] = joaat("intruder");
	vLocal_1541[9 /*3*/] = {-1927.496f, -498.7926f, 11.3251f};
	fLocal_124[9] = 0.0041f;
	fLocal_242[9] = 0.0017f;
	fLocal_360[9] = 0.4102f;
	fLocal_478[9] = 0.912f;
	iLocal_1037[9] = 35;
	fLocal_596[9] = 5120f;
	iLocal_2098[9] = joaat("intruder");
	vLocal_1541[10 /*3*/] = {-2114.016f, -377.4624f, 12.3287f};
	fLocal_124[10] = -0.0107f;
	fLocal_242[10] = -0.0139f;
	fLocal_360[10] = 0.85f;
	fLocal_478[10] = -0.5266f;
	iLocal_1037[10] = 36;
	fLocal_596[10] = 5160f;
	iLocal_2098[10] = joaat("intruder");
	vLocal_1541[11 /*3*/] = {-2155.57f, -357.4149f, 12.5796f};
	fLocal_124[11] = -0.0008f;
	fLocal_242[11] = -0.0001f;
	fLocal_360[11] = 0.8151f;
	fLocal_478[11] = -0.5793f;
	iLocal_1037[11] = 33;
	fLocal_596[11] = 5200f;
	iLocal_2098[11] = joaat("manana");
	vLocal_1541[12 /*3*/] = {-1955.973f, -417.3983f, 17.2001f};
	fLocal_124[12] = -0.0326f;
	fLocal_242[12] = -0.0247f;
	fLocal_360[12] = 0.4751f;
	fLocal_478[12] = 0.879f;
	iLocal_1037[12] = 39;
	fLocal_596[12] = 9500f;
	iLocal_2098[12] = joaat("intruder");
	vLocal_1541[13 /*3*/] = {-1760.451f, -547.8943f, 35.8235f};
	fLocal_124[13] = -0.0664f;
	fLocal_242[13] = -0.0238f;
	fLocal_360[13] = 0.4498f;
	fLocal_478[13] = 0.8904f;
	iLocal_1037[13] = 44;
	fLocal_596[13] = 14100f;
	iLocal_2098[13] = joaat("manana");
	vLocal_1541[14 /*3*/] = {-1883.877f, -465.7772f, 23.5569f};
	fLocal_124[14] = -0.0264f;
	fLocal_242[14] = -0.0213f;
	fLocal_360[14] = 0.4694f;
	fLocal_478[14] = 0.8823f;
	iLocal_1037[14] = 43;
	fLocal_596[14] = 16733f;
	iLocal_2098[14] = joaat("intruder");
	vLocal_1541[15 /*3*/] = {-1844.132f, -499.3117f, 27.1005f};
	fLocal_124[15] = -0.0111f;
	fLocal_242[15] = 0.0344f;
	fLocal_360[15] = 0.8823f;
	fLocal_478[15] = -0.4693f;
	iLocal_1037[15] = 46;
	fLocal_596[15] = 16781f;
	iLocal_2098[15] = joaat("intruder");
	vLocal_1541[16 /*3*/] = {-1669.54f, -574.1034f, 33.3805f};
	fLocal_124[16] = 0.0115f;
	fLocal_242[16] = -0.0228f;
	fLocal_360[16] = 0.8892f;
	fLocal_478[16] = -0.4567f;
	iLocal_1037[16] = 252;
	fLocal_596[16] = 20000f;
	iLocal_2098[16] = joaat("intruder");
	vLocal_1541[17 /*3*/] = {-1553.639f, -643.6885f, 28.7234f};
	fLocal_124[17] = 0.0099f;
	fLocal_242[17] = -0.0012f;
	fLocal_360[17] = 0.6289f;
	fLocal_478[17] = 0.7774f;
	iLocal_1037[17] = 253;
	fLocal_596[17] = 20050f;
	iLocal_2098[17] = joaat("intruder");
	vLocal_1541[18 /*3*/] = {-1612.959f, -618.0091f, 31.3797f};
	fLocal_124[18] = 0.0086f;
	fLocal_242[18] = -0.026f;
	fLocal_360[18] = 0.9021f;
	fLocal_478[18] = -0.4307f;
	iLocal_1037[18] = 254;
	fLocal_596[18] = 20100f;
	iLocal_2098[18] = joaat("manana");
	vLocal_1541[19 /*3*/] = {-1598.341f, -514.3162f, 34.7884f};
	fLocal_124[19] = -0.0217f;
	fLocal_242[19] = -0.001f;
	fLocal_360[19] = 0.9766f;
	fLocal_478[19] = 0.214f;
	iLocal_1037[19] = 255;
	fLocal_596[19] = 20150f;
	iLocal_2098[19] = joaat("manana");
	vLocal_1541[21 /*3*/] = {-1664.326f, -561.4086f, 33.5174f};
	fLocal_124[21] = 0.0283f;
	fLocal_242[21] = 0.0288f;
	fLocal_360[21] = 0.2157f;
	fLocal_478[21] = 0.9756f;
	iLocal_1037[21] = 50;
	fLocal_596[21] = 21869f;
	iLocal_2098[21] = joaat("intruder");
	vLocal_1541[22 /*3*/] = {-1617.147f, -600.6409f, 32.0157f};
	fLocal_124[22] = 0.026f;
	fLocal_242[22] = 0.0126f;
	fLocal_360[22] = 0.4342f;
	fLocal_478[22] = 0.9003f;
	iLocal_1037[22] = 72;
	fLocal_596[22] = 22500f;
	iLocal_2098[22] = joaat("manana");
	vLocal_1541[23 /*3*/] = {-1650.525f, -560.737f, 33.0326f};
	fLocal_124[23] = 0.0204f;
	fLocal_242[23] = -0.0131f;
	fLocal_360[23] = 0.8283f;
	fLocal_478[23] = 0.5597f;
	iLocal_1037[23] = 51;
	fLocal_596[23] = 22584f;
	iLocal_2098[23] = joaat("manana");
	vLocal_1541[24 /*3*/] = {-1626.837f, -568.3124f, 33.0075f};
	fLocal_124[24] = 0.0218f;
	fLocal_242[24] = 0.0175f;
	fLocal_360[24] = -0.418f;
	fLocal_478[24] = 0.908f;
	iLocal_1037[24] = 34;
	fLocal_596[24] = 25000f;
	iLocal_2098[24] = joaat("manana");
	vLocal_1541[25 /*3*/] = {-1553.567f, -492.1296f, 35.1499f};
	fLocal_124[25] = -0.0086f;
	fLocal_242[25] = -0.0063f;
	fLocal_360[25] = 0.87f;
	fLocal_478[25] = 0.4929f;
	iLocal_1037[25] = 49;
	fLocal_596[25] = 25050f;
	iLocal_2098[25] = joaat("manana");
	vLocal_1541[26 /*3*/] = {-1566.882f, -512.4595f, 35.1885f};
	fLocal_124[26] = 0.001f;
	fLocal_242[26] = -0.009f;
	fLocal_360[26] = -0.484f;
	fLocal_478[26] = 0.875f;
	iLocal_1037[26] = 57;
	fLocal_596[26] = 27000f;
	iLocal_2098[26] = joaat("pcj");
	vLocal_1541[27 /*3*/] = {-1405.661f, -398.7107f, 36.196f};
	fLocal_124[27] = -0.001f;
	fLocal_242[27] = -0.0172f;
	fLocal_360[27] = 0.8676f;
	fLocal_478[27] = 0.4969f;
	iLocal_1037[27] = 79;
	fLocal_596[27] = 28900f;
	iLocal_2098[27] = joaat("intruder");
	vLocal_1541[29 /*3*/] = {-1385.979f, -406.3781f, 36.1497f};
	fLocal_124[29] = 0.003f;
	fLocal_242[29] = 0.0057f;
	fLocal_360[29] = -0.4769f;
	fLocal_478[29] = 0.8789f;
	iLocal_1037[29] = 256;
	fLocal_596[29] = 30000f;
	iLocal_2098[29] = joaat("manana");
	vLocal_1541[30 /*3*/] = {-1511.846f, -486.1111f, 35.2985f};
	fLocal_124[30] = 0.0015f;
	fLocal_242[30] = 0.001f;
	fLocal_360[30] = -0.4916f;
	fLocal_478[30] = 0.8708f;
	iLocal_1037[30] = 61;
	fLocal_596[30] = 30912f;
	iLocal_2098[30] = joaat("intruder");
	vLocal_1541[31 /*3*/] = {-1503.279f, -453.5208f, 35.1137f};
	fLocal_124[31] = 0.0005f;
	fLocal_242[31] = 0.0009f;
	fLocal_360[31] = 0.8742f;
	fLocal_478[31] = 0.4855f;
	iLocal_1037[31] = 62;
	fLocal_596[31] = 30962f;
	iLocal_2098[31] = joaat("intruder");
	vLocal_1541[32 /*3*/] = {-1441.961f, -436.8392f, 35.318f};
	fLocal_124[32] = 0.0051f;
	fLocal_242[32] = -0.0027f;
	fLocal_360[32] = -0.4849f;
	fLocal_478[32] = 0.8746f;
	iLocal_1037[32] = 60;
	fLocal_596[32] = 31000f;
	iLocal_2098[32] = joaat("manana");
	vLocal_1541[33 /*3*/] = {-1429.472f, -475.7137f, 33.7061f};
	fLocal_124[33] = 0.0134f;
	fLocal_242[33] = 0.0239f;
	fLocal_360[33] = 0.2968f;
	fLocal_478[33] = 0.9545f;
	iLocal_1037[33] = 56;
	fLocal_596[33] = 31050f;
	iLocal_2098[33] = joaat("intruder");
	vLocal_1541[35 /*3*/] = {-1280.433f, -384.1887f, 36.0295f};
	fLocal_124[35] = 0.0126f;
	fLocal_242[35] = 0.0032f;
	fLocal_360[35] = 0.2431f;
	fLocal_478[35] = 0.9699f;
	iLocal_1037[35] = 257;
	fLocal_596[35] = 33000f;
	iLocal_2098[35] = joaat("manana");
	vLocal_1541[36 /*3*/] = {-1343.594f, -355.1015f, 36.2497f};
	fLocal_124[36] = -0.0052f;
	fLocal_242[36] = -0.0032f;
	fLocal_360[36] = 0.8108f;
	fLocal_478[36] = 0.5852f;
	iLocal_1037[36] = 69;
	fLocal_596[36] = 33994f;
	iLocal_2098[36] = joaat("manana");
	vLocal_1541[37 /*3*/] = {-1216.532f, -307.827f, 37.3348f};
	fLocal_124[37] = -0.0036f;
	fLocal_242[37] = 0.0027f;
	fLocal_360[37] = -0.5369f;
	fLocal_478[37] = 0.8436f;
	iLocal_1037[37] = 65;
	fLocal_596[37] = 35000f;
	iLocal_2098[37] = joaat("manana");
	vLocal_1541[38 /*3*/] = {-1105.849f, -222.9649f, 37.3392f};
	fLocal_124[38] = -0.006f;
	fLocal_242[38] = 0.0021f;
	fLocal_360[38] = 0.8546f;
	fLocal_478[38] = 0.5192f;
	iLocal_1037[38] = 258;
	fLocal_596[38] = 36000f;
	iLocal_2098[38] = joaat("manana");
	vLocal_1541[39 /*3*/] = {-1080.295f, -214.4883f, 37.4765f};
	fLocal_124[39] = -0.0017f;
	fLocal_242[39] = -0.0037f;
	fLocal_360[39] = 0.8656f;
	fLocal_478[39] = 0.5006f;
	iLocal_1037[39] = 259;
	fLocal_596[39] = 36100f;
	iLocal_2098[39] = joaat("intruder");
	vLocal_1541[40 /*3*/] = {-1193.581f, -297.1006f, 37.7095f};
	fLocal_124[40] = -0.001f;
	fLocal_242[40] = 0.0003f;
	fLocal_360[40] = -0.5278f;
	fLocal_478[40] = 0.8494f;
	iLocal_1037[40] = 260;
	fLocal_596[40] = 36200f;
	iLocal_2098[40] = joaat("burrito3");
	vLocal_1541[41 /*3*/] = {-1020.427f, -177.1401f, 37.4026f};
	fLocal_124[41] = -0.0125f;
	fLocal_242[41] = 0.0031f;
	fLocal_360[41] = 0.8613f;
	fLocal_478[41] = 0.5079f;
	iLocal_1037[41] = 261;
	fLocal_596[41] = 36300f;
	iLocal_2098[41] = joaat("intruder");
	vLocal_1541[42 /*3*/] = {-1267.442f, -336.0135f, 36.4325f};
	fLocal_124[42] = -0.0032f;
	fLocal_242[42] = -0.0065f;
	fLocal_360[42] = -0.51f;
	fLocal_478[42] = 0.8602f;
	iLocal_1037[42] = 70;
	fLocal_596[42] = 37000f;
	iLocal_2098[42] = joaat("intruder");
	vLocal_1541[44 /*3*/] = {-1272.121f, -343.9194f, 36.2108f};
	fLocal_124[44] = 0.0064f;
	fLocal_242[44] = -0.004f;
	fLocal_360[44] = -0.5243f;
	fLocal_478[44] = 0.8515f;
	iLocal_1037[44] = 75;
	fLocal_596[44] = 37140f;
	iLocal_2098[44] = joaat("intruder");
	vLocal_1541[45 /*3*/] = {-1031.842f, -289.7789f, 37.6673f};
	fLocal_124[45] = -0.007f;
	fLocal_242[45] = -0.0007f;
	fLocal_360[45] = 0.2092f;
	fLocal_478[45] = 0.9778f;
	iLocal_1037[45] = 85;
	fLocal_596[45] = 37200f;
	iLocal_2098[45] = joaat("burrito3");
	vLocal_1541[48 /*3*/] = {-1284.529f, -330.2454f, 36.3752f};
	fLocal_124[48] = -0.0032f;
	fLocal_242[48] = -0.0043f;
	fLocal_360[48] = 0.852f;
	fLocal_478[48] = 0.5235f;
	iLocal_1037[48] = 201;
	fLocal_596[48] = 37950f;
	iLocal_2098[48] = joaat("intruder");
	vLocal_1541[49 /*3*/] = {-961.5755f, -200.8471f, 37.1363f};
	fLocal_124[49] = -0.0379f;
	fLocal_242[49] = 0.02f;
	fLocal_360[49] = 0.8755f;
	fLocal_478[49] = 0.4814f;
	iLocal_1037[49] = 262;
	fLocal_596[49] = 39000f;
	iLocal_2098[49] = joaat("intruder");
	vLocal_1541[50 /*3*/] = {-1030.6f, -250.964f, 37.2496f};
	fLocal_124[50] = 0.0131f;
	fLocal_242[50] = 0.0248f;
	fLocal_360[50] = -0.5153f;
	fLocal_478[50] = 0.8565f;
	iLocal_1037[50] = 263;
	fLocal_596[50] = 39050f;
	iLocal_2098[50] = joaat("manana");
	vLocal_1541[51 /*3*/] = {-1212.09f, -293.2291f, 37.3428f};
	fLocal_124[51] = 0.0037f;
	fLocal_242[51] = 0.0035f;
	fLocal_360[51] = 0.8554f;
	fLocal_478[51] = 0.5179f;
	iLocal_1037[51] = 202;
	fLocal_596[51] = 39600f;
	iLocal_2098[51] = joaat("manana");
	vLocal_1541[52 /*3*/] = {-1045.851f, -276.7056f, 37.2715f};
	fLocal_124[52] = -0.0005f;
	fLocal_242[52] = 0f;
	fLocal_360[52] = 0.9753f;
	fLocal_478[52] = -0.2209f;
	iLocal_1037[52] = 73;
	fLocal_596[52] = 40000f;
	iLocal_2098[52] = joaat("manana");
	vLocal_1541[53 /*3*/] = {-1018.158f, -236.3702f, 37.3773f};
	fLocal_124[53] = 0.0028f;
	fLocal_242[53] = -0.0089f;
	fLocal_360[53] = 0.8524f;
	fLocal_478[53] = 0.5227f;
	iLocal_1037[53] = 94;
	fLocal_596[53] = 40200f;
	iLocal_2098[53] = joaat("intruder");
	vLocal_1541[54 /*3*/] = {-992.8951f, -381.1576f, 37.394f};
	fLocal_124[54] = 0.0005f;
	fLocal_242[54] = -0.0092f;
	fLocal_360[54] = 0.9712f;
	fLocal_478[54] = -0.2382f;
	iLocal_1037[54] = 170;
	fLocal_596[54] = 42500f;
	iLocal_2098[54] = joaat("manana");
	vLocal_1541[55 /*3*/] = {-943.202f, -420.0762f, 37.3229f};
	fLocal_124[55] = -0.0044f;
	fLocal_242[55] = 0.0127f;
	fLocal_360[55] = 0.8549f;
	fLocal_478[55] = 0.5186f;
	iLocal_1037[55] = 264;
	fLocal_596[55] = 43000f;
	iLocal_2098[55] = joaat("intruder");
	vLocal_1541[56 /*3*/] = {-973.2485f, -426.7131f, 37.4479f};
	fLocal_124[56] = -0.0159f;
	fLocal_242[56] = -0.0064f;
	fLocal_360[56] = 0.9638f;
	fLocal_478[56] = -0.2662f;
	iLocal_1037[56] = 265;
	fLocal_596[56] = 43200f;
	iLocal_2098[56] = joaat("intruder");
	vLocal_1541[57 /*3*/] = {-1003.615f, -333.3123f, 36.9974f};
	fLocal_124[57] = 0f;
	fLocal_242[57] = 0f;
	fLocal_360[57] = 0.2417f;
	fLocal_478[57] = 0.9703f;
	iLocal_1037[57] = 86;
	fLocal_596[57] = 43753f;
	iLocal_2098[57] = joaat("intruder");
	vLocal_1541[58 /*3*/] = {-910.7939f, -480.5219f, 36.1598f};
	fLocal_124[58] = -0.0004f;
	fLocal_242[58] = -0.0009f;
	fLocal_360[58] = 0.8607f;
	fLocal_478[58] = 0.509f;
	iLocal_1037[58] = 266;
	fLocal_596[58] = 44000f;
	iLocal_2098[58] = joaat("manana");
	vLocal_1541[59 /*3*/] = {-903.4105f, -534.6552f, 34.3315f};
	fLocal_124[59] = 0.025f;
	fLocal_242[59] = 0.0193f;
	fLocal_360[59] = 0.2328f;
	fLocal_478[59] = 0.972f;
	iLocal_1037[59] = 267;
	fLocal_596[59] = 44200f;
	iLocal_2098[59] = joaat("manana");
	vLocal_1541[60 /*3*/] = {-1001.246f, -349.769f, 37.5263f};
	fLocal_124[60] = -0.0195f;
	fLocal_242[60] = -0.0038f;
	fLocal_360[60] = 0.2914f;
	fLocal_478[60] = 0.9564f;
	iLocal_1037[60] = 89;
	fLocal_596[60] = 45271f;
	iLocal_2098[60] = joaat("intruder");
	vLocal_1541[61 /*3*/] = {-944.2744f, -457.4497f, 37.0746f};
	fLocal_124[61] = 0.0051f;
	fLocal_242[61] = -0.0062f;
	fLocal_360[61] = 0.2376f;
	fLocal_478[61] = 0.9713f;
	iLocal_1037[61] = 90;
	fLocal_596[61] = 46500f;
	iLocal_2098[61] = joaat("intruder");
	vLocal_1541[62 /*3*/] = {-1066.392f, -457.1241f, 36.0125f};
	fLocal_124[62] = -0.021f;
	fLocal_242[62] = -0.0058f;
	fLocal_360[62] = 0.8835f;
	fLocal_478[62] = -0.468f;
	iLocal_1037[62] = 108;
	fLocal_596[62] = 47600f;
	iLocal_2098[62] = joaat("manana");
	func_472(62, 0);
	vLocal_1541[63 /*3*/] = {-1372.2f, -703.8073f, 23.8866f};
	fLocal_124[63] = 0.0254f;
	fLocal_242[63] = 0.0194f;
	fLocal_360[63] = -0.435f;
	fLocal_478[63] = 0.8999f;
	iLocal_1037[63] = 95;
	fLocal_596[63] = 52500f;
	iLocal_2098[63] = joaat("manana");
	vLocal_1541[64 /*3*/] = {-1359.666f, -694.3884f, 24.9078f};
	fLocal_124[64] = 0.0261f;
	fLocal_242[64] = 0.0166f;
	fLocal_360[64] = -0.4655f;
	fLocal_478[64] = 0.8845f;
	iLocal_1037[64] = 13;
	fLocal_596[64] = 54500f;
	iLocal_2098[64] = joaat("pcj");
	vLocal_1541[65 /*3*/] = {-1251.42f, -580.7559f, 27.7332f};
	fLocal_124[65] = 0.0033f;
	fLocal_242[65] = -0.0427f;
	fLocal_360[65] = 0.9369f;
	fLocal_478[65] = -0.347f;
	iLocal_1037[65] = 93;
	fLocal_596[65] = 55000f;
	iLocal_2098[65] = joaat("intruder");
	vLocal_1541[66 /*3*/] = {-1186.866f, -629.9144f, 23.4611f};
	fLocal_124[66] = 0.0371f;
	fLocal_242[66] = 0.0124f;
	fLocal_360[66] = 0.3335f;
	fLocal_478[66] = 0.942f;
	iLocal_1037[66] = 268;
	fLocal_596[66] = 55050f;
	iLocal_2098[66] = joaat("manana");
	vLocal_1541[67 /*3*/] = {-1104.092f, -750.3582f, 18.9453f};
	fLocal_124[67] = -0.0083f;
	fLocal_242[67] = -0.0215f;
	fLocal_360[67] = 0.9362f;
	fLocal_478[67] = -0.3506f;
	iLocal_1037[67] = 115;
	fLocal_596[67] = 66000f;
	iLocal_2098[67] = joaat("manana");
	vLocal_1541[68 /*3*/] = {-1100.658f, -748.1008f, 19.0332f};
	fLocal_124[68] = 0.0156f;
	fLocal_242[68] = -0.0216f;
	fLocal_360[68] = 0.9336f;
	fLocal_478[68] = -0.3572f;
	iLocal_1037[68] = 116;
	fLocal_596[68] = 66050f;
	iLocal_2098[68] = joaat("pcj");
	vLocal_1541[69 /*3*/] = {-1109.135f, -719.9675f, 19.9357f};
	fLocal_124[69] = 0.0113f;
	fLocal_242[69] = -0.0008f;
	fLocal_360[69] = 0.3447f;
	fLocal_478[69] = 0.9386f;
	iLocal_1037[69] = 154;
	fLocal_596[69] = 66100f;
	iLocal_2098[69] = joaat("intruder");
	vLocal_1541[70 /*3*/] = {-1161.234f, -685.1978f, 21.6411f};
	fLocal_124[70] = -0.0033f;
	fLocal_242[70] = -0.0261f;
	fLocal_360[70] = 0.9396f;
	fLocal_478[70] = -0.3413f;
	iLocal_1037[70] = 156;
	fLocal_596[70] = 66500f;
	iLocal_2098[70] = joaat("intruder");
	vLocal_1541[71 /*3*/] = {-1094.919f, -761.551f, 18.9358f};
	fLocal_124[71] = -0.0024f;
	fLocal_242[71] = -0.0034f;
	fLocal_360[71] = 0.9406f;
	fLocal_478[71] = -0.3395f;
	iLocal_1037[71] = 272;
	fLocal_596[71] = 69000f;
	iLocal_2098[71] = joaat("intruder");
	vLocal_1541[72 /*3*/] = {-1085.727f, -737.9604f, 18.5164f};
	fLocal_124[72] = 0.0186f;
	fLocal_242[72] = 0.0051f;
	fLocal_360[72] = 0.2729f;
	fLocal_478[72] = 0.9619f;
	iLocal_1037[72] = 101;
	fLocal_596[72] = 69902f;
	iLocal_2098[72] = joaat("intruder");
	vLocal_1541[73 /*3*/] = {-1191.977f, -862.7239f, 13.4924f};
	fLocal_124[73] = 0.0167f;
	fLocal_242[73] = -0.0078f;
	fLocal_360[73] = -0.4888f;
	fLocal_478[73] = 0.8722f;
	iLocal_1037[73] = 109;
	fLocal_596[73] = 70000f;
	iLocal_2098[73] = joaat("pcj");
	vLocal_1541[74 /*3*/] = {-1017.11f, -801.2603f, 16.2402f};
	fLocal_124[74] = 0.0237f;
	fLocal_242[74] = -0.0005f;
	fLocal_360[74] = 0.5066f;
	fLocal_478[74] = 0.8619f;
	iLocal_1037[74] = 269;
	fLocal_596[74] = 70050f;
	iLocal_2098[74] = joaat("manana");
	vLocal_1541[75 /*3*/] = {-1042.967f, -723.3073f, 19.0664f};
	fLocal_124[75] = -0.0227f;
	fLocal_242[75] = -0.0131f;
	fLocal_360[75] = 0.9117f;
	fLocal_478[75] = 0.4101f;
	iLocal_1037[75] = 270;
	fLocal_596[75] = 70100f;
	iLocal_2098[75] = joaat("manana");
	vLocal_1541[76 /*3*/] = {-986.264f, -811.2874f, 15.3855f};
	fLocal_124[76] = 0.0037f;
	fLocal_242[76] = 0.0064f;
	fLocal_360[76] = 0.497f;
	fLocal_478[76] = 0.8677f;
	iLocal_1037[76] = 271;
	fLocal_596[76] = 70150f;
	iLocal_2098[76] = joaat("manana");
	vLocal_1541[78 /*3*/] = {-1099.207f, -723.0576f, 19.5426f};
	fLocal_124[78] = 0.0172f;
	fLocal_242[78] = 0.0138f;
	fLocal_360[78] = 0.2758f;
	fLocal_478[78] = 0.961f;
	iLocal_1037[78] = 96;
	fLocal_596[78] = 70242f;
	iLocal_2098[78] = joaat("intruder");
	vLocal_1541[79 /*3*/] = {-1128.739f, -796.869f, 16.4235f};
	fLocal_124[79] = -0.0331f;
	fLocal_242[79] = -0.0425f;
	fLocal_360[79] = 0.9062f;
	fLocal_478[79] = 0.4193f;
	iLocal_1037[79] = 104;
	fLocal_596[79] = 74000f;
	iLocal_2098[79] = joaat("manana");
	vLocal_1541[80 /*3*/] = {-1155.636f, -834.2766f, 13.8095f};
	fLocal_124[80] = 0.0081f;
	fLocal_242[80] = -0.0058f;
	fLocal_360[80] = -0.4207f;
	fLocal_478[80] = 0.9071f;
	iLocal_1037[80] = 105;
	fLocal_596[80] = 74050f;
	iLocal_2098[80] = joaat("manana");
	vLocal_1541[81 /*3*/] = {-1175.993f, -835.8189f, 13.826f};
	fLocal_124[81] = -0.0051f;
	fLocal_242[81] = 0.0066f;
	fLocal_360[81] = 0.9051f;
	fLocal_478[81] = 0.4251f;
	iLocal_1037[81] = 273;
	fLocal_596[81] = 75000f;
	iLocal_2098[81] = joaat("intruder");
	vLocal_1541[82 /*3*/] = {-1110.68f, -919.0346f, 2.2867f};
	fLocal_124[82] = -0.0002f;
	fLocal_242[82] = -0.0064f;
	fLocal_360[82] = 0.8645f;
	fLocal_478[82] = 0.5025f;
	iLocal_1037[82] = 203;
	fLocal_596[82] = 82357f;
	iLocal_2098[82] = joaat("manana");
	vLocal_1541[83 /*3*/] = {-1014.5f, -1099.901f, 1.3071f};
	fLocal_124[83] = -0.0089f;
	fLocal_242[83] = -0.0024f;
	fLocal_360[83] = 0.2603f;
	fLocal_478[83] = 0.9655f;
	iLocal_1037[83] = 113;
	fLocal_596[83] = 84818f;
	iLocal_2098[83] = joaat("intruder");
	vLocal_1541[84 /*3*/] = {-989.3825f, -1154.471f, 2.0856f};
	fLocal_124[84] = -0.0107f;
	fLocal_242[84] = 0.0386f;
	fLocal_360[84] = 0.9645f;
	fLocal_478[84] = -0.2611f;
	iLocal_1037[84] = 119;
	fLocal_596[84] = 86732f;
	iLocal_2098[84] = joaat("intruder");
	vLocal_1541[85 /*3*/] = {-925.1222f, -1200.272f, 4.4888f};
	fLocal_124[85] = 0.0002f;
	fLocal_242[85] = 0f;
	fLocal_360[85] = 0.8763f;
	fLocal_478[85] = 0.4818f;
	iLocal_1037[85] = 134;
	fLocal_596[85] = 92700f;
	iLocal_2098[85] = joaat("manana");
	vLocal_1541[86 /*3*/] = {-983.4543f, -1252.494f, 5.2503f};
	fLocal_124[86] = -0.004f;
	fLocal_242[86] = 0.0161f;
	fLocal_360[86] = -0.5021f;
	fLocal_478[86] = 0.8646f;
	iLocal_1037[86] = 274;
	fLocal_596[86] = 93000f;
	iLocal_2098[86] = joaat("intruder");
	vLocal_1541[87 /*3*/] = {-849.5126f, -1152.512f, 6.0559f};
	fLocal_124[87] = -0.0229f;
	fLocal_242[87] = -0.019f;
	fLocal_360[87] = 0.7997f;
	fLocal_478[87] = 0.5997f;
	iLocal_1037[87] = 130;
	fLocal_596[87] = 95518f;
	iLocal_2098[87] = joaat("manana");
	vLocal_1541[88 /*3*/] = {-848.8896f, -1205.208f, 5.6769f};
	fLocal_124[88] = -0.0236f;
	fLocal_242[88] = -0.0291f;
	fLocal_360[88] = 0.2576f;
	fLocal_478[88] = 0.9655f;
	iLocal_1037[88] = 126;
	fLocal_596[88] = 97000f;
	iLocal_2098[88] = joaat("intruder");
	vLocal_1541[89 /*3*/] = {-873.4331f, -1135.991f, 6.2755f};
	fLocal_124[89] = 0.0124f;
	fLocal_242[89] = -0.0485f;
	fLocal_360[89] = 0.9657f;
	fLocal_478[89] = -0.2547f;
	iLocal_1037[89] = 125;
	fLocal_596[89] = 97050f;
	iLocal_2098[89] = joaat("manana");
	vLocal_1541[91 /*3*/] = {-667.5715f, -873.9283f, 41.4232f};
	fLocal_124[91] = 0.0242f;
	fLocal_242[91] = -0.0155f;
	fLocal_360[91] = -0.6235f;
	fLocal_478[91] = 0.7813f;
	iLocal_1037[91] = 25;
	fLocal_596[91] = 104000f;
	iLocal_2098[91] = joaat("maverick");
	vLocal_1541[92 /*3*/] = {-668.2998f, -1048.541f, 16.3267f};
	fLocal_124[92] = 0.0058f;
	fLocal_242[92] = -0.0334f;
	fLocal_360[92] = 0.8869f;
	fLocal_478[92] = 0.4606f;
	iLocal_1037[92] = 26;
	fLocal_596[92] = 104500f;
	iLocal_2098[92] = joaat("intruder");
	vLocal_1541[93 /*3*/] = {-646.0926f, -913.8471f, 23.5267f};
	fLocal_124[93] = -0.0178f;
	fLocal_242[93] = -0.0373f;
	fLocal_360[93] = 0.999f;
	fLocal_478[93] = 0.0153f;
	iLocal_1037[93] = 136;
	fLocal_596[93] = 106500f;
	iLocal_2098[93] = joaat("intruder");
	vLocal_1541[94 /*3*/] = {-636.0123f, -980.1482f, 20.8531f};
	fLocal_124[94] = 0.0095f;
	fLocal_242[94] = -0.0064f;
	fLocal_360[94] = -0.0199f;
	fLocal_478[94] = 0.9997f;
	iLocal_1037[94] = 276;
	fLocal_596[94] = 107000f;
	iLocal_2098[94] = joaat("manana");
	vLocal_1541[95 /*3*/] = {-679.2947f, -959.8151f, 20.1611f};
	fLocal_124[95] = 0.039f;
	fLocal_242[95] = 0.0031f;
	fLocal_360[95] = -0.7025f;
	fLocal_478[95] = 0.7106f;
	iLocal_1037[95] = 277;
	fLocal_596[95] = 108000f;
	iLocal_2098[95] = joaat("manana");
	vLocal_1541[96 /*3*/] = {-645.9667f, -872.5993f, 24.0909f};
	fLocal_124[96] = -0.0308f;
	fLocal_242[96] = 0.003f;
	fLocal_360[96] = 0.9995f;
	fLocal_478[96] = -0.0065f;
	iLocal_1037[96] = 278;
	fLocal_596[96] = 108050f;
	iLocal_2098[96] = joaat("manana");
	vLocal_1541[97 /*3*/] = {-532.2497f, -1015.102f, 22.4589f};
	fLocal_124[97] = 0.0006f;
	fLocal_242[97] = 0.0229f;
	fLocal_360[97] = 0.0582f;
	fLocal_478[97] = 0.998f;
	iLocal_1037[97] = 279;
	fLocal_596[97] = 112000f;
	iLocal_2098[97] = joaat("manana");
	vLocal_1541[98 /*3*/] = {-492.1226f, -871.4891f, 29.2373f};
	fLocal_124[98] = 0.0305f;
	fLocal_242[98] = -0.0002f;
	fLocal_360[98] = -0.0364f;
	fLocal_478[98] = 0.9989f;
	iLocal_1037[98] = 152;
	fLocal_596[98] = 114001f;
	iLocal_2098[98] = joaat("manana");
	vLocal_1541[99 /*3*/] = {-477.283f, -845.0166f, 29.9852f};
	fLocal_124[99] = -0.0032f;
	fLocal_242[99] = -0.0105f;
	fLocal_360[99] = 0.7135f;
	fLocal_478[99] = -0.7006f;
	iLocal_1037[99] = 148;
	fLocal_596[99] = 116000f;
	iLocal_2098[99] = joaat("intruder");
	vLocal_1541[100 /*3*/] = {-517.6269f, -758.5123f, 31.4468f};
	fLocal_124[100] = -0.0165f;
	fLocal_242[100] = -0.026f;
	fLocal_360[100] = 0.9731f;
	fLocal_478[100] = -0.2283f;
	iLocal_1037[100] = 280;
	fLocal_596[100] = 117000f;
	iLocal_2098[100] = joaat("manana");
	vLocal_1541[101 /*3*/] = {-496.5247f, -816.1506f, 30.0963f};
	fLocal_124[101] = -0.0035f;
	fLocal_242[101] = -0.0011f;
	fLocal_360[101] = -0.0339f;
	fLocal_478[101] = 0.9994f;
	iLocal_1037[101] = 281;
	fLocal_596[101] = 117050f;
	iLocal_2098[101] = joaat("intruder");
	vLocal_1541[102 /*3*/] = {-502.5592f, -804.7895f, 30.2477f};
	fLocal_124[102] = 0.0037f;
	fLocal_242[102] = -0.0047f;
	fLocal_360[102] = 0.9996f;
	fLocal_478[102] = -0.0291f;
	iLocal_1037[102] = 157;
	fLocal_596[102] = 118845f;
	iLocal_2098[102] = joaat("intruder");
	vLocal_1541[103 /*3*/] = {-367.6438f, -834.8538f, 31.2414f};
	fLocal_124[103] = -0.0128f;
	fLocal_242[103] = 0.0035f;
	fLocal_360[103] = 0.6848f;
	fLocal_478[103] = 0.7286f;
	iLocal_1037[103] = 158;
	fLocal_596[103] = 119000f;
	iLocal_2098[103] = joaat("pcj");
	vLocal_1541[104 /*3*/] = {-286.6659f, -846.1884f, 31.3065f};
	fLocal_124[104] = -0.0127f;
	fLocal_242[104] = -0.0018f;
	fLocal_360[104] = 0.6461f;
	fLocal_478[104] = 0.7631f;
	iLocal_1037[104] = 282;
	fLocal_596[104] = 120000f;
	iLocal_2098[104] = joaat("intruder");
	vLocal_1541[105 /*3*/] = {-233.8871f, -869.6703f, 29.988f};
	fLocal_124[105] = 0.0115f;
	fLocal_242[105] = 0.0067f;
	fLocal_360[105] = 0.5974f;
	fLocal_478[105] = 0.8018f;
	iLocal_1037[105] = 283;
	fLocal_596[105] = 120050f;
	iLocal_2098[105] = joaat("intruder");
	vLocal_1541[106 /*3*/] = {-507.5561f, -826.8052f, 29.621f};
	fLocal_124[106] = 0f;
	fLocal_242[106] = -0.0021f;
	fLocal_360[106] = 1f;
	fLocal_478[106] = 0.0026f;
	iLocal_1037[106] = 155;
	fLocal_596[106] = 120449f;
	iLocal_2098[106] = joaat("intruder");
	vLocal_1541[107 /*3*/] = {-387.642f, -844.1628f, 31.0928f};
	fLocal_124[107] = -0.0048f;
	fLocal_242[107] = 0.0048f;
	fLocal_360[107] = 0.735f;
	fLocal_478[107] = -0.6781f;
	iLocal_1037[107] = 205;
	fLocal_596[107] = 123701f;
	iLocal_2098[107] = joaat("manana");
	vLocal_1541[108 /*3*/] = {-332.0064f, -860.2901f, 31.1178f};
	fLocal_124[108] = -0.0038f;
	fLocal_242[108] = 0.0044f;
	fLocal_360[108] = 0.7627f;
	fLocal_478[108] = -0.6467f;
	iLocal_1037[108] = 206;
	fLocal_596[108] = 124493f;
	iLocal_2098[108] = joaat("manana");
	vLocal_1541[109 /*3*/] = {-316.7719f, -857.1534f, 31.1568f};
	fLocal_124[109] = -0.003f;
	fLocal_242[109] = 0.0034f;
	fLocal_360[109] = 0.7628f;
	fLocal_478[109] = -0.6466f;
	iLocal_1037[109] = 207;
	fLocal_596[109] = 124955f;
	iLocal_2098[109] = joaat("manana");
	vLocal_1541[110 /*3*/] = {-369.826f, -661.4047f, 31.1689f};
	fLocal_124[110] = 0.0061f;
	fLocal_242[110] = -0.0061f;
	fLocal_360[110] = -0.7071f;
	fLocal_478[110] = 0.7071f;
	iLocal_1037[110] = 166;
	fLocal_596[110] = 130000f;
	iLocal_2098[110] = joaat("intruder");
	vLocal_1541[111 /*3*/] = {-248.7058f, -603.2553f, 33.5757f};
	fLocal_124[111] = -0.0274f;
	fLocal_242[111] = -0.0092f;
	fLocal_360[111] = 0.9839f;
	fLocal_478[111] = 0.1762f;
	iLocal_1037[111] = 285;
	fLocal_596[111] = 130050f;
	iLocal_2098[111] = joaat("intruder");
	vLocal_1541[112 /*3*/] = {-247.1978f, -612.5249f, 33.4505f};
	fLocal_124[112] = -0.0124f;
	fLocal_242[112] = -0.0091f;
	fLocal_360[112] = 0.9849f;
	fLocal_478[112] = 0.1726f;
	iLocal_1037[112] = 286;
	fLocal_596[112] = 130100f;
	iLocal_2098[112] = joaat("manana");
	vLocal_1541[113 /*3*/] = {-243.4324f, -620.572f, 33.707f};
	fLocal_124[113] = -0.0019f;
	fLocal_242[113] = -0.0092f;
	fLocal_360[113] = 0.9875f;
	fLocal_478[113] = 0.1574f;
	iLocal_1037[113] = 287;
	fLocal_596[113] = 130150f;
	iLocal_2098[113] = joaat("burrito3");
	vLocal_1541[114 /*3*/] = {-277.3765f, -654.3015f, 32.7939f};
	fLocal_124[114] = -0.0041f;
	fLocal_242[114] = 0.0062f;
	fLocal_360[114] = 0.6547f;
	fLocal_478[114] = 0.7558f;
	iLocal_1037[114] = 208;
	fLocal_596[114] = 133831f;
	iLocal_2098[114] = joaat("intruder");
	vLocal_1541[115 /*3*/] = {-226.6089f, -599.454f, 33.7347f};
	fLocal_124[115] = 0.0071f;
	fLocal_242[115] = -0.0012f;
	fLocal_360[115] = -0.1741f;
	fLocal_478[115] = 0.9847f;
	iLocal_1037[115] = 164;
	fLocal_596[115] = 137506f;
	iLocal_2098[115] = joaat("intruder");
	vLocal_1939[0 /*3*/] = {-1829.17f, -579.5376f, 10.9467f};
	fLocal_718[0] = -0.0059f;
	fLocal_757[0] = -0.0026f;
	fLocal_796[0] = 0.4222f;
	fLocal_835[0] = 0.9065f;
	iLocal_1391[0] = 38;
	fLocal_874[0] = 0f;
	fLocal_913[0] = 1f;
	iLocal_2232[0] = joaat("manana");
	vLocal_1939[1 /*3*/] = {-1940.012f, -473.7903f, 11.9182f};
	fLocal_718[1] = -0.004f;
	fLocal_757[1] = 0.0114f;
	fLocal_796[1] = 0.4266f;
	fLocal_835[1] = 0.9043f;
	iLocal_1391[1] = 516;
	fLocal_874[1] = 1500f;
	fLocal_913[1] = 1f;
	iLocal_2232[1] = joaat("flatbed");
	vLocal_1939[2 /*3*/] = {-1893.909f, -519.8182f, 11.2157f};
	fLocal_718[2] = 0.001f;
	fLocal_757[2] = 0.0005f;
	fLocal_796[2] = 0.4314f;
	fLocal_835[2] = 0.9022f;
	iLocal_1391[2] = 52;
	fLocal_874[2] = 2000f;
	fLocal_913[2] = 1f;
	iLocal_2232[2] = joaat("youga");
	vLocal_1939[3 /*3*/] = {-1875.374f, -542.2328f, 11.2263f};
	fLocal_718[3] = -0.007f;
	fLocal_757[3] = -0.0033f;
	fLocal_796[3] = 0.4363f;
	fLocal_835[3] = 0.8998f;
	iLocal_1391[3] = 45;
	fLocal_874[3] = 3000f;
	fLocal_913[3] = 1f;
	iLocal_2232[3] = joaat("manana");
	vLocal_1939[4 /*3*/] = {-1732.982f, -524.2459f, 37.3373f};
	fLocal_718[4] = 0.0203f;
	fLocal_757[4] = -0.025f;
	fLocal_796[4] = 0.9005f;
	fLocal_835[4] = -0.4336f;
	iLocal_1391[4] = 501;
	fLocal_874[4] = 19000f;
	fLocal_913[4] = 1f;
	iLocal_2232[4] = joaat("intruder");
	vLocal_1939[5 /*3*/] = {-1568.396f, -522.3314f, 34.8755f};
	fLocal_718[5] = -0.001f;
	fLocal_757[5] = 0.0003f;
	fLocal_796[5] = -0.4567f;
	fLocal_835[5] = 0.8896f;
	iLocal_1391[5] = 54;
	fLocal_874[5] = 27947f;
	fLocal_913[5] = 1f;
	iLocal_2232[5] = joaat("intruder");
	vLocal_1939[6 /*3*/] = {-1405.994f, -412.4767f, 36.0144f};
	fLocal_718[6] = -0.0127f;
	fLocal_757[6] = 0.0028f;
	fLocal_796[6] = -0.4831f;
	fLocal_835[6] = 0.8754f;
	iLocal_1391[6] = 509;
	fLocal_874[6] = 28000f;
	fLocal_913[6] = 1f;
	iLocal_2232[6] = joaat("manana");
	vLocal_1939[7 /*3*/] = {-1518.792f, -386.8024f, 41.1265f};
	fLocal_718[7] = 0.0254f;
	fLocal_757[7] = -0.0525f;
	fLocal_796[7] = 0.9088f;
	fLocal_835[7] = -0.4131f;
	iLocal_1391[7] = 23;
	fLocal_874[7] = 29000f;
	fLocal_913[7] = 1f;
	iLocal_2232[7] = joaat("intruder");
	vLocal_1939[8 /*3*/] = {-1350.02f, -427.0193f, 34.9505f};
	fLocal_718[8] = 0.0377f;
	fLocal_757[8] = 0.0064f;
	fLocal_796[8] = 0.3218f;
	fLocal_835[8] = 0.946f;
	iLocal_1391[8] = 510;
	fLocal_874[8] = 31000f;
	fLocal_913[8] = 1f;
	iLocal_2232[8] = joaat("intruder");
	vLocal_1939[9 /*3*/] = {-1007.464f, -361.0907f, 37.5214f};
	fLocal_718[9] = -0.0193f;
	fLocal_757[9] = 0.011f;
	fLocal_796[9] = 0.9759f;
	fLocal_835[9] = -0.2173f;
	iLocal_1391[9] = 503;
	fLocal_874[9] = 43500f;
	fLocal_913[9] = 1f;
	iLocal_2232[9] = joaat("cruiser");
	vLocal_1939[10 /*3*/] = {-1007.293f, -357.3345f, 37.5357f};
	fLocal_718[10] = -0.0075f;
	fLocal_757[10] = 0.0251f;
	fLocal_796[10] = 0.972f;
	fLocal_835[10] = -0.2335f;
	iLocal_1391[10] = 502;
	fLocal_874[10] = 44000f;
	fLocal_913[10] = 1f;
	iLocal_2232[10] = joaat("cruiser");
	vLocal_1939[11 /*3*/] = {-1010.937f, -358.4532f, 37.5252f};
	fLocal_718[11] = -0.0052f;
	fLocal_757[11] = 0.0138f;
	fLocal_796[11] = 0.9724f;
	fLocal_835[11] = -0.233f;
	iLocal_1391[11] = 504;
	fLocal_874[11] = 44100f;
	fLocal_913[11] = 1f;
	iLocal_2232[11] = joaat("cruiser");
	vLocal_1939[12 /*3*/] = {-1013.893f, -392.8538f, 36.0627f};
	fLocal_718[12] = 0.0589f;
	fLocal_757[12] = -0.0367f;
	fLocal_796[12] = -0.5154f;
	fLocal_835[12] = 0.8542f;
	iLocal_1391[12] = 84;
	fLocal_874[12] = 46000f;
	fLocal_913[12] = 1f;
	iLocal_2232[12] = joaat("manana");
	vLocal_1939[14 /*3*/] = {-1294.739f, -621.9509f, 26.9939f};
	fLocal_718[14] = 0.0257f;
	fLocal_757[14] = 0.0005f;
	fLocal_796[14] = 0.281f;
	fLocal_835[14] = 0.9594f;
	iLocal_1391[14] = 511;
	fLocal_874[14] = 55000f;
	fLocal_913[14] = 1f;
	iLocal_2232[14] = joaat("benson");
	vLocal_1939[15 /*3*/] = {-1138.311f, -811.2895f, 15.7751f};
	fLocal_718[15] = 0.0298f;
	fLocal_757[15] = -0.0129f;
	fLocal_796[15] = -0.4436f;
	fLocal_835[15] = 0.8956f;
	iLocal_1391[15] = 992;
	fLocal_874[15] = 67000f;
	fLocal_913[15] = 1f;
	iLocal_2232[15] = joaat("packer");
	vLocal_1939[16 /*3*/] = {-1163.071f, -741.886f, 19.4365f};
	fLocal_718[16] = -0.002f;
	fLocal_757[16] = -0.0283f;
	fLocal_796[16] = 0.9308f;
	fLocal_835[16] = -0.3644f;
	iLocal_1391[16] = 515;
	fLocal_874[16] = 69000f;
	fLocal_913[16] = 1f;
	iLocal_2232[16] = joaat("burrito3");
	vLocal_1939[17 /*3*/] = {-1201.002f, -821.8204f, 14.7233f};
	fLocal_718[17] = -0.016f;
	fLocal_757[17] = -0.0359f;
	fLocal_796[17] = 0.8871f;
	fLocal_835[17] = -0.4599f;
	iLocal_1391[17] = 512;
	fLocal_874[17] = 71500f;
	fLocal_913[17] = 1f;
	iLocal_2232[17] = joaat("youga");
	vLocal_1939[18 /*3*/] = {-1259.113f, -907.3938f, 10.8468f};
	fLocal_718[18] = 0.0139f;
	fLocal_757[18] = -0.0091f;
	fLocal_796[18] = -0.4673f;
	fLocal_835[18] = 0.884f;
	iLocal_1391[18] = 513;
	fLocal_874[18] = 71600f;
	fLocal_913[18] = 1f;
	iLocal_2232[18] = joaat("manana");
	vLocal_1939[19 /*3*/] = {-960.4544f, -1235.358f, 5.109f};
	fLocal_718[19] = -0.0003f;
	fLocal_757[19] = 0.0005f;
	fLocal_796[19] = -0.5006f;
	fLocal_835[19] = 0.8657f;
	iLocal_1391[19] = 11;
	fLocal_874[19] = 83000f;
	fLocal_913[19] = 1f;
	iLocal_2232[19] = joaat("benson");
	vLocal_1939[20 /*3*/] = {-1030.321f, -1135.573f, 1.6671f};
	fLocal_718[20] = 0.0094f;
	fLocal_757[20] = -0.0037f;
	fLocal_796[20] = -0.4742f;
	fLocal_835[20] = 0.8804f;
	iLocal_1391[20] = 507;
	fLocal_874[20] = 88000f;
	fLocal_913[20] = 1f;
	iLocal_2232[20] = joaat("intruder");
	vLocal_1939[21 /*3*/] = {-776.4766f, -1115.119f, 10.0461f};
	fLocal_718[21] = 0.0003f;
	fLocal_757[21] = 0f;
	fLocal_796[21] = 0.8673f;
	fLocal_835[21] = 0.4978f;
	iLocal_1391[21] = 20;
	fLocal_874[21] = 96000f;
	fLocal_913[21] = 1f;
	iLocal_2232[21] = joaat("manana");
	vLocal_1939[22 /*3*/] = {-729.9686f, -1088.154f, 11.462f};
	fLocal_718[22] = -0.0111f;
	fLocal_757[22] = -0.0437f;
	fLocal_796[22] = 0.8583f;
	fLocal_835[22] = 0.5112f;
	iLocal_1391[22] = 506;
	fLocal_874[22] = 98000f;
	fLocal_913[22] = 1f;
	iLocal_2232[22] = joaat("intruder");
	vLocal_1939[23 /*3*/] = {-792.2863f, -1091.038f, 10.797f};
	fLocal_718[23] = -0.0186f;
	fLocal_757[23] = -0.0192f;
	fLocal_796[23] = 0.9698f;
	fLocal_835[23] = -0.2422f;
	iLocal_1391[23] = 12;
	fLocal_874[23] = 100700f;
	fLocal_913[23] = 1f;
	iLocal_2232[23] = joaat("benson");
	vLocal_1939[24 /*3*/] = {-733.6007f, -1164.01f, 9.9703f};
	fLocal_718[24] = -0.0104f;
	fLocal_757[24] = -0.0027f;
	fLocal_796[24] = 0.2836f;
	fLocal_835[24] = 0.9589f;
	iLocal_1391[24] = 17;
	fLocal_874[24] = 101000f;
	fLocal_913[24] = 1f;
	iLocal_2232[24] = joaat("intruder");
	vLocal_1939[25 /*3*/] = {-799.6644f, -1066.371f, 11.3241f};
	fLocal_718[25] = 0.0092f;
	fLocal_757[25] = -0.0294f;
	fLocal_796[25] = 0.9687f;
	fLocal_835[25] = -0.2464f;
	iLocal_1391[25] = 132;
	fLocal_874[25] = 101500f;
	fLocal_913[25] = 1f;
	iLocal_2232[25] = joaat("manana");
	vLocal_1939[26 /*3*/] = {-641.2161f, -945.9627f, 21.1608f};
	fLocal_718[26] = -0.0126f;
	fLocal_757[26] = -0.0188f;
	fLocal_796[26] = 0.9977f;
	fLocal_835[26] = 0.064f;
	iLocal_1391[26] = 24;
	fLocal_874[26] = 103000f;
	fLocal_913[26] = 1f;
	iLocal_2232[26] = joaat("manana");
	vLocal_1939[28 /*3*/] = {-622.8137f, -964.5755f, 20.95f};
	fLocal_718[28] = -0.0052f;
	fLocal_757[28] = -0.0167f;
	fLocal_796[28] = -0.4032f;
	fLocal_835[28] = 0.915f;
	iLocal_1391[28] = 149;
	fLocal_874[28] = 109446f;
	fLocal_913[28] = 1f;
	iLocal_2232[28] = joaat("intruder");
	vLocal_1939[29 /*3*/] = {-527.2289f, -948.6147f, 22.9859f};
	fLocal_718[29] = 0.0037f;
	fLocal_757[29] = 0.0266f;
	fLocal_796[29] = -0.1871f;
	fLocal_835[29] = 0.982f;
	iLocal_1391[29] = 514;
	fLocal_874[29] = 113000f;
	fLocal_913[29] = 1f;
	iLocal_2232[29] = joaat("manana");
	vLocal_1939[30 /*3*/] = {-507.5158f, -866.4927f, 29.2588f};
	fLocal_718[30] = -0.0191f;
	fLocal_757[30] = -0.0472f;
	fLocal_796[30] = 0.9921f;
	fLocal_835[30] = 0.1146f;
	iLocal_1391[30] = 22;
}

{
	{
