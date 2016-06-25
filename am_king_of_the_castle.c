#region Local Var
	auto uLocal_0 = 0;
	auto uLocal_1 = 0;
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
	auto uLocal_12 = 0;
	auto uLocal_13 = 0;
	float fLocal_14 = 0;
	auto uLocal_15 = 0;
	auto uLocal_16 = 0;
	int iLocal_17 = 0;
	char* sLocal_18 = 0;
	auto uLocal_19 = 0;
	auto uLocal_20 = 0;
	auto uLocal_21 = 0;
	auto uLocal_22 = 0;
	float fLocal_23 = 0;
	float fLocal_24 = 0;
	float fLocal_25 = 0;
	auto uLocal_26 = 0;
	auto uLocal_27 = 0;
	float fLocal_28 = 0;
	auto uLocal_29 = 0;
	auto uLocal_30 = 0;
	auto uLocal_31 = 0;
	float fLocal_32 = 0;
	float fLocal_33 = 0;
	auto uLocal_34 = 0;
	auto uLocal_35 = 0;
	int iLocal_36 = 0;
	auto uLocal_37 = 0;
	auto uLocal_38 = 0;
	auto uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	auto uLocal_44 = 0;
	auto uLocal_45 = 0;
	auto uLocal_46 = 0;
	auto uLocal_47 = 0;
	auto uLocal_48 = 0;
	auto uLocal_49 = 0;
	auto uLocal_50 = 0;
	auto uLocal_51 = 0;
	auto uLocal_52 = 0;
	auto uLocal_53 = 0;
	auto uLocal_54 = 0;
	auto uLocal_55 = 0;
	auto uLocal_56 = 0;
	auto uLocal_57 = 8;
	auto uLocal_58 = 0;
	auto uLocal_59 = 0;
	auto uLocal_60 = 0;
	auto uLocal_61 = 0;
	auto uLocal_62 = 0;
	auto uLocal_63 = 0;
	auto uLocal_64 = 0;
	auto uLocal_65 = 0;
	auto uLocal_66 = 2;
	auto uLocal_67 = 0;
	auto uLocal_68 = 0;
	auto uLocal_69 = 8;
	auto uLocal_70 = 0;
	auto uLocal_71 = 0;
	auto uLocal_72 = 0;
	auto uLocal_73 = 0;
	auto uLocal_74 = 0;
	auto uLocal_75 = 0;
	auto uLocal_76 = 0;
	auto uLocal_77 = 0;
	auto uLocal_78 = 8;
	auto uLocal_79 = 0;
	auto uLocal_80 = 0;
	auto uLocal_81 = 0;
	auto uLocal_82 = 0;
	auto uLocal_83 = 0;
	auto uLocal_84 = 0;
	auto uLocal_85 = 0;
	auto uLocal_86 = 0;
	float fLocal_87 = 0;
	auto uLocal_88 = 0;
	auto uLocal_89 = 0;
	float fLocal_90 = 0;
	float fLocal_91 = 0;
	float fLocal_92 = 0;
	float fLocal_93 = 0;
	float fLocal_94 = 0;
	auto uLocal_95 = 0;
	struct<284> Local_96 = 0;
	struct<12> Local_380 = 0;
	int iLocal_392 = 0;
	int iLocal_393 = 0;
	struct<5>[] Local_394 = new struct<5>[32];
	int iLocal_555 = 0;
	int iLocal_556 = 0;
	int iLocal_557 = 0;
	auto uLocal_558 = 0;
	auto uLocal_559 = 0;
	struct<18>[] Local_560 = new struct<18>[32];
	Vector3[] vLocal_1137 = new Vector3[32];
	auto uLocal_1234 = 0;
	auto uLocal_1235 = 0;
	auto uLocal_1236 = 0;
	auto uLocal_1237 = 0;
	auto uLocal_1238 = 0;
	auto uLocal_1239 = 0;
	auto uLocal_1240 = 0;
	struct<68>[] Local_1241 = new struct<68>[1];
	struct<47>[] Local_1310 = new struct<47>[32];
	auto uLocal_2815 = 0;
	auto uLocal_2816 = 0;
	auto uLocal_2817 = 0;
	auto uLocal_2818 = 0;
	auto uLocal_2819 = 0;
	auto uLocal_2820 = 0;
	auto uLocal_2821 = 0;
	auto uLocal_2822 = 0;
	auto uLocal_2823 = 0;
	auto uLocal_2824 = 0;
	auto uLocal_2825 = 0;
	auto uLocal_2826 = 0;
	auto uLocal_2827 = 0;
	auto uLocal_2828 = 0;
	auto uLocal_2829 = 0;
	auto uLocal_2830 = 0;
	auto uLocal_2831 = 0;
	auto uLocal_2832 = 0;
	auto uLocal_2833 = 0;
	auto uLocal_2834 = 0;
	auto uLocal_2835 = 0;
	auto uLocal_2836 = 0;
	auto uLocal_2837 = 0;
	auto uLocal_2838 = 0;
	auto uLocal_2839 = 0;
	auto uLocal_2840 = 0;
	auto uLocal_2841 = 0;
	auto uLocal_2842 = 0;
	auto uLocal_2843 = -1;
	auto uLocal_2844 = 0;
	auto uLocal_2845 = 0;
	auto uLocal_2846 = 0;
	auto uLocal_2847 = 0;
	auto uLocal_2848 = 0;
	auto uLocal_2849 = 0;
	auto uLocal_2850 = 0;
	auto uLocal_2851 = 1;
	auto uLocal_2852 = 0;
	auto uLocal_2853 = 32;
	auto uLocal_2854 = 0;
	auto uLocal_2855 = -1;
	auto uLocal_2856 = 0;
	auto uLocal_2857 = -1;
	auto uLocal_2858 = 0;
	auto uLocal_2859 = -1;
	auto uLocal_2860 = 0;
	auto uLocal_2861 = -1;
	auto uLocal_2862 = 0;
	auto uLocal_2863 = -1;
	auto uLocal_2864 = 0;
	auto uLocal_2865 = -1;
	auto uLocal_2866 = 0;
	auto uLocal_2867 = -1;
	auto uLocal_2868 = 0;
	auto uLocal_2869 = -1;
	auto uLocal_2870 = 0;
	auto uLocal_2871 = -1;
	auto uLocal_2872 = 0;
	auto uLocal_2873 = -1;
	auto uLocal_2874 = 0;
	auto uLocal_2875 = -1;
	auto uLocal_2876 = 0;
	auto uLocal_2877 = -1;
	auto uLocal_2878 = 0;
	auto uLocal_2879 = -1;
	auto uLocal_2880 = 0;
	auto uLocal_2881 = -1;
	auto uLocal_2882 = 0;
	auto uLocal_2883 = -1;
	auto uLocal_2884 = 0;
	auto uLocal_2885 = -1;
	auto uLocal_2886 = 0;
	auto uLocal_2887 = -1;
	auto uLocal_2888 = 0;
	auto uLocal_2889 = -1;
	auto uLocal_2890 = 0;
	auto uLocal_2891 = -1;
	auto uLocal_2892 = 0;
	auto uLocal_2893 = -1;
	auto uLocal_2894 = 0;
	auto uLocal_2895 = -1;
	auto uLocal_2896 = 0;
	auto uLocal_2897 = -1;
	auto uLocal_2898 = 0;
	auto uLocal_2899 = -1;
	auto uLocal_2900 = 0;
	auto uLocal_2901 = -1;
	auto uLocal_2902 = 0;
	auto uLocal_2903 = -1;
	auto uLocal_2904 = 0;
	auto uLocal_2905 = -1;
	auto uLocal_2906 = 0;
	auto uLocal_2907 = -1;
	auto uLocal_2908 = 0;
	auto uLocal_2909 = -1;
	auto uLocal_2910 = 0;
	auto uLocal_2911 = -1;
	auto uLocal_2912 = 0;
	auto uLocal_2913 = -1;
	auto uLocal_2914 = 0;
	auto uLocal_2915 = -1;
	auto uLocal_2916 = 0;
	auto uLocal_2917 = -1;
	auto uLocal_2918 = -1;
	auto uLocal_2919 = 0;
	auto uLocal_2920 = 0;
	auto uLocal_2921 = 0;
	auto uLocal_2922 = 0;
	auto uLocal_2923 = 0;
	auto uLocal_2924 = 32;
	auto uLocal_2925 = 0;
	auto uLocal_2926 = 0;
	auto uLocal_2927 = 0;
	auto uLocal_2928 = 0;
	auto uLocal_2929 = 0;
	auto uLocal_2930 = 0;
	auto uLocal_2931 = 0;
	auto uLocal_2932 = 0;
	auto uLocal_2933 = 0;
	auto uLocal_2934 = 0;
	auto uLocal_2935 = 0;
	auto uLocal_2936 = 0;
	auto uLocal_2937 = 0;
	auto uLocal_2938 = 0;
	auto uLocal_2939 = 0;
	auto uLocal_2940 = 0;
	auto uLocal_2941 = 0;
	auto uLocal_2942 = 0;
	auto uLocal_2943 = 0;
	auto uLocal_2944 = 0;
	auto uLocal_2945 = 0;
	auto uLocal_2946 = 0;
	auto uLocal_2947 = 0;
	auto uLocal_2948 = 0;
	auto uLocal_2949 = 0;
	auto uLocal_2950 = 0;
	auto uLocal_2951 = 0;
	auto uLocal_2952 = 0;
	auto uLocal_2953 = 0;
	auto uLocal_2954 = 0;
	auto uLocal_2955 = 0;
	auto uLocal_2956 = 0;
	auto uLocal_2957 = 0;
	auto uLocal_2958 = 0;
	auto uLocal_2959 = 0;
	auto uLocal_2960 = 0;
	auto uLocal_2961 = 0;
	auto uLocal_2962 = 0;
	auto uLocal_2963 = 0;
	auto uLocal_2964 = 0;
	auto uLocal_2965 = 0;
	auto uLocal_2966 = 0;
	auto uLocal_2967 = 0;
	auto uLocal_2968 = 0;
	auto uLocal_2969 = 0;
	auto uLocal_2970 = 0;
	auto uLocal_2971 = 0;
	auto uLocal_2972 = 0;
	auto uLocal_2973 = 0;
	auto uLocal_2974 = 0;
	auto uLocal_2975 = 0;
	auto uLocal_2976 = 0;
	auto uLocal_2977 = 0;
	auto uLocal_2978 = 0;
	auto uLocal_2979 = 0;
	auto uLocal_2980 = 0;
	auto uLocal_2981 = 0;
	auto uLocal_2982 = 0;
	auto uLocal_2983 = 0;
	auto uLocal_2984 = 0;
	auto uLocal_2985 = 0;
	auto uLocal_2986 = 0;
	auto uLocal_2987 = 0;
	auto uLocal_2988 = 0;
	auto uLocal_2989 = 0;
	auto uLocal_2990 = 0;
	auto uLocal_2991 = 0;
	auto uLocal_2992 = 0;
	auto uLocal_2993 = 0;
	auto uLocal_2994 = 0;
	auto uLocal_2995 = 0;
	auto uLocal_2996 = 0;
	auto uLocal_2997 = 0;
	auto uLocal_2998 = 0;
	auto uLocal_2999 = 0;
	auto uLocal_3000 = 0;
	auto uLocal_3001 = 0;
	auto uLocal_3002 = 0;
	auto uLocal_3003 = 0;
	auto uLocal_3004 = 0;
	auto uLocal_3005 = 0;
	auto uLocal_3006 = 0;
	auto uLocal_3007 = 0;
	auto uLocal_3008 = 0;
	auto uLocal_3009 = 0;
	auto uLocal_3010 = 0;
	auto uLocal_3011 = 0;
	auto uLocal_3012 = 0;
	auto uLocal_3013 = 0;
	auto uLocal_3014 = 0;
	auto uLocal_3015 = 0;
	auto uLocal_3016 = 0;
	auto uLocal_3017 = 0;
	auto uLocal_3018 = 0;
	auto uLocal_3019 = 0;
	auto uLocal_3020 = 0;
	auto uLocal_3021 = 0;
	auto uLocal_3022 = 0;
	auto uLocal_3023 = 0;
	auto uLocal_3024 = 0;
	auto uLocal_3025 = 0;
	auto uLocal_3026 = 0;
	auto uLocal_3027 = 0;
	auto uLocal_3028 = 0;
	auto uLocal_3029 = 0;
	auto uLocal_3030 = 0;
	auto uLocal_3031 = 0;
	auto uLocal_3032 = 0;
	auto uLocal_3033 = 0;
	auto uLocal_3034 = 0;
	auto uLocal_3035 = 0;
	auto uLocal_3036 = 0;
	auto uLocal_3037 = 0;
	auto uLocal_3038 = 0;
	auto uLocal_3039 = 0;
	auto uLocal_3040 = 0;
	auto uLocal_3041 = 0;
	auto uLocal_3042 = 0;
	auto uLocal_3043 = 0;
	auto uLocal_3044 = 0;
	auto uLocal_3045 = 0;
	auto uLocal_3046 = 0;
	auto uLocal_3047 = 0;
	auto uLocal_3048 = 0;
	auto uLocal_3049 = 0;
	auto uLocal_3050 = 0;
	auto uLocal_3051 = 0;
	auto uLocal_3052 = 0;
	auto uLocal_3053 = 0;
	auto uLocal_3054 = 0;
	auto uLocal_3055 = 0;
	auto uLocal_3056 = 0;
	auto uLocal_3057 = 0;
	auto uLocal_3058 = 0;
	auto uLocal_3059 = 0;
	auto uLocal_3060 = 0;
	auto uLocal_3061 = 0;
	auto uLocal_3062 = 0;
	auto uLocal_3063 = 0;
	auto uLocal_3064 = 0;
	auto uLocal_3065 = 0;
	auto uLocal_3066 = 0;
	auto uLocal_3067 = 0;
	auto uLocal_3068 = 0;
	auto uLocal_3069 = 0;
	auto uLocal_3070 = 0;
	auto uLocal_3071 = 0;
	auto uLocal_3072 = 0;
	auto uLocal_3073 = 0;
	auto uLocal_3074 = 0;
	auto uLocal_3075 = 0;
	auto uLocal_3076 = 0;
	auto uLocal_3077 = 0;
	auto uLocal_3078 = 0;
	auto uLocal_3079 = 0;
	auto uLocal_3080 = 0;
	auto uLocal_3081 = 0;
	auto uLocal_3082 = 0;
	auto uLocal_3083 = 0;
	auto uLocal_3084 = 0;
	auto uLocal_3085 = 0;
	auto uLocal_3086 = 0;
	auto uLocal_3087 = 0;
	auto uLocal_3088 = 0;
	auto uLocal_3089 = 0;
	auto uLocal_3090 = 0;
	auto uLocal_3091 = 0;
	auto uLocal_3092 = 0;
	auto uLocal_3093 = 0;
	auto uLocal_3094 = 0;
	auto uLocal_3095 = 0;
	auto uLocal_3096 = 0;
	auto uLocal_3097 = 0;
	auto uLocal_3098 = 0;
	auto uLocal_3099 = 0;
	auto uLocal_3100 = 0;
	auto uLocal_3101 = 0;
	auto uLocal_3102 = 0;
	auto uLocal_3103 = 0;
	auto uLocal_3104 = 0;
	auto uLocal_3105 = 0;
	auto uLocal_3106 = 0;
	auto uLocal_3107 = 0;
	auto uLocal_3108 = 0;
	auto uLocal_3109 = 0;
	auto uLocal_3110 = 0;
	auto uLocal_3111 = 0;
	auto uLocal_3112 = 0;
	auto uLocal_3113 = 0;
	auto uLocal_3114 = 0;
	auto uLocal_3115 = 0;
	auto uLocal_3116 = 0;
	auto uLocal_3117 = 0;
	auto uLocal_3118 = 0;
	auto uLocal_3119 = 0;
	auto uLocal_3120 = 0;
	auto uLocal_3121 = 0;
	auto uLocal_3122 = 0;
	auto uLocal_3123 = 0;
	auto uLocal_3124 = 0;
	auto uLocal_3125 = 0;
	auto uLocal_3126 = 0;
	auto uLocal_3127 = 0;
	auto uLocal_3128 = 0;
	auto uLocal_3129 = 0;
	auto uLocal_3130 = 0;
	auto uLocal_3131 = 0;
	auto uLocal_3132 = 0;
	auto uLocal_3133 = 0;
	auto uLocal_3134 = 0;
	auto uLocal_3135 = 0;
	auto uLocal_3136 = 0;
	auto uLocal_3137 = 0;
	auto uLocal_3138 = 0;
	auto uLocal_3139 = 0;
	auto uLocal_3140 = 0;
	auto uLocal_3141 = 0;
	auto uLocal_3142 = 0;
	auto uLocal_3143 = 0;
	auto uLocal_3144 = 0;
	auto uLocal_3145 = 0;
	auto uLocal_3146 = 0;
	auto uLocal_3147 = 0;
	auto uLocal_3148 = 0;
	auto uLocal_3149 = 0;
	auto uLocal_3150 = 0;
	auto uLocal_3151 = 0;
	auto uLocal_3152 = 0;
	auto uLocal_3153 = 0;
	auto uLocal_3154 = 0;
	auto uLocal_3155 = 0;
	auto uLocal_3156 = 0;
	auto uLocal_3157 = 0;
	auto uLocal_3158 = 0;
	auto uLocal_3159 = 0;
	auto uLocal_3160 = 0;
	auto uLocal_3161 = 0;
	auto uLocal_3162 = 0;
	auto uLocal_3163 = 0;
	auto uLocal_3164 = 0;
	auto uLocal_3165 = 0;
	auto uLocal_3166 = 0;
	auto uLocal_3167 = 0;
	auto uLocal_3168 = 0;
	auto uLocal_3169 = 0;
	auto uLocal_3170 = 0;
	auto uLocal_3171 = 0;
	auto uLocal_3172 = 0;
	auto uLocal_3173 = 0;
	auto uLocal_3174 = 0;
	auto uLocal_3175 = 0;
	auto uLocal_3176 = 0;
	auto uLocal_3177 = 0;
	auto uLocal_3178 = 0;
	auto uLocal_3179 = 0;
	auto uLocal_3180 = 0;
	auto uLocal_3181 = 0;
	auto uLocal_3182 = 0;
	auto uLocal_3183 = 0;
	auto uLocal_3184 = 0;
	auto uLocal_3185 = 0;
	auto uLocal_3186 = 0;
	auto uLocal_3187 = 0;
	auto uLocal_3188 = 0;
	auto uLocal_3189 = 0;
	auto uLocal_3190 = 0;
	auto uLocal_3191 = 0;
	auto uLocal_3192 = 0;
	auto uLocal_3193 = 0;
	auto uLocal_3194 = 0;
	auto uLocal_3195 = 0;
	auto uLocal_3196 = 0;
	auto uLocal_3197 = 0;
	auto uLocal_3198 = 0;
	auto uLocal_3199 = 0;
	auto uLocal_3200 = 0;
	auto uLocal_3201 = 0;
	auto uLocal_3202 = 0;
	auto uLocal_3203 = 0;
	auto uLocal_3204 = 0;
	auto uLocal_3205 = 0;
	auto uLocal_3206 = 0;
	auto uLocal_3207 = 0;
	auto uLocal_3208 = 0;
	auto uLocal_3209 = 0;
	auto uLocal_3210 = 0;
	auto uLocal_3211 = 0;
	auto uLocal_3212 = 0;
	auto uLocal_3213 = 0;
	auto uLocal_3214 = 0;
	auto uLocal_3215 = 0;
	auto uLocal_3216 = 0;
	auto uLocal_3217 = 0;
	auto uLocal_3218 = 0;
	auto uLocal_3219 = 0;
	auto uLocal_3220 = 0;
	auto uLocal_3221 = 0;
	auto uLocal_3222 = 0;
	auto uLocal_3223 = 0;
	auto uLocal_3224 = 0;
	auto uLocal_3225 = 0;
	auto uLocal_3226 = 0;
	auto uLocal_3227 = 0;
	auto uLocal_3228 = 0;
	auto uLocal_3229 = 0;
	auto uLocal_3230 = 0;
	auto uLocal_3231 = 0;
	auto uLocal_3232 = 0;
	auto uLocal_3233 = 0;
	auto uLocal_3234 = 0;
	auto uLocal_3235 = 0;
	auto uLocal_3236 = 0;
	auto uLocal_3237 = 0;
	auto uLocal_3238 = 0;
	auto uLocal_3239 = 0;
	auto uLocal_3240 = 0;
	auto uLocal_3241 = 0;
	auto uLocal_3242 = 0;
	auto uLocal_3243 = 0;
	auto uLocal_3244 = 0;
	auto uLocal_3245 = 0;
	auto uLocal_3246 = 0;
	auto uLocal_3247 = 0;
	auto uLocal_3248 = 0;
	auto uLocal_3249 = 0;
	auto uLocal_3250 = 0;
	auto uLocal_3251 = 0;
	auto uLocal_3252 = 0;
	auto uLocal_3253 = 0;
	auto uLocal_3254 = 0;
	auto uLocal_3255 = 0;
	auto uLocal_3256 = 0;
	auto uLocal_3257 = 0;
	auto uLocal_3258 = 0;
	auto uLocal_3259 = 0;
	auto uLocal_3260 = 0;
	auto uLocal_3261 = 0;
	auto uLocal_3262 = 0;
	auto uLocal_3263 = 0;
	auto uLocal_3264 = 0;
	auto uLocal_3265 = 0;
	auto uLocal_3266 = 0;
	auto uLocal_3267 = 0;
	auto uLocal_3268 = 0;
	auto uLocal_3269 = 0;
	auto uLocal_3270 = 0;
	auto uLocal_3271 = 0;
	auto uLocal_3272 = 0;
	auto uLocal_3273 = 0;
	auto uLocal_3274 = 0;
	auto uLocal_3275 = 0;
	auto uLocal_3276 = 0;
	auto uLocal_3277 = 0;
	auto uLocal_3278 = 0;
	auto uLocal_3279 = 0;
	auto uLocal_3280 = 0;
	auto uLocal_3281 = 0;
	auto uLocal_3282 = 0;
	auto uLocal_3283 = 0;
	auto uLocal_3284 = 0;
	auto uLocal_3285 = 0;
	auto uLocal_3286 = 0;
	auto uLocal_3287 = 0;
	auto uLocal_3288 = 0;
	auto uLocal_3289 = 0;
	auto uLocal_3290 = 0;
	auto uLocal_3291 = 0;
	auto uLocal_3292 = 0;
	auto uLocal_3293 = 0;
	auto uLocal_3294 = 0;
	auto uLocal_3295 = 0;
	auto uLocal_3296 = 0;
	auto uLocal_3297 = 0;
	auto uLocal_3298 = 0;
	auto uLocal_3299 = 0;
	auto uLocal_3300 = 0;
	auto uLocal_3301 = 0;
	auto uLocal_3302 = 0;
	auto uLocal_3303 = 0;
	auto uLocal_3304 = 0;
	auto uLocal_3305 = 0;
	auto uLocal_3306 = 0;
	auto uLocal_3307 = 0;
	auto uLocal_3308 = 0;
	auto uLocal_3309 = 0;
	auto uLocal_3310 = 0;
	auto uLocal_3311 = 0;
	auto uLocal_3312 = 0;
	auto uLocal_3313 = 0;
	auto uLocal_3314 = 0;
	auto uLocal_3315 = 0;
	auto uLocal_3316 = 0;
	auto uLocal_3317 = 0;
	auto uLocal_3318 = 0;
	auto uLocal_3319 = 0;
	auto uLocal_3320 = 0;
	auto uLocal_3321 = 0;
	auto uLocal_3322 = 0;
	auto uLocal_3323 = 0;
	auto uLocal_3324 = 0;
	auto uLocal_3325 = 0;
	auto uLocal_3326 = 0;
	auto uLocal_3327 = 0;
	auto uLocal_3328 = 0;
	auto uLocal_3329 = 0;
	auto uLocal_3330 = 0;
	auto uLocal_3331 = 0;
	auto uLocal_3332 = 0;
	auto uLocal_3333 = 0;
	auto uLocal_3334 = 0;
	auto uLocal_3335 = 0;
	auto uLocal_3336 = 0;
	auto uLocal_3337 = 0;
	auto uLocal_3338 = 0;
	auto uLocal_3339 = 0;
	auto uLocal_3340 = 0;
	int iLocal_3341 = 0;
	int iLocal_3342 = 0;
	int iLocal_3343 = 0;
	int iLocal_3344 = 0;
	int iLocal_3345 = 0;
	int iLocal_3346 = 0;
	int iLocal_3347 = 0;
	int iLocal_3348 = 0;
	int iLocal_3349 = 0;
	int iLocal_3350 = 0;
	int iLocal_3351 = 0;
	int iLocal_3352 = 0;
	auto uLocal_3353 = 0;
	int iLocal_3354 = 0;
	auto uLocal_3355 = 0;
	struct<20> Local_3356 = 0;
#endregion

void main()
{
	int iVar0;
	auto uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
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
	sLocal_18 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_87 = 0.05f + 0.275f - 0.01f;
	fLocal_90 = -0.05f;
	fLocal_91 = 0.92f;
	fLocal_92 = 1.94f;
	fLocal_93 = 2.99f;
	fLocal_94 = 3.7f;
	iLocal_392 = -1;
	iLocal_3350 = -1;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_658(player_id(), 0, 1))
	{
		func_643(Local_3356);
	}
	else
	{
		func_614();
	}
	while (true)
	{
		func_613();
		if (func_606())
		{
			func_614();
		}
		if (func_603(29))
		{
			func_614();
		}
		if (func_601())
		{
			func_614();
		}
		if (func_600())
		{
			func_614();
		}
		iLocal_3350 = -1;
		if (GAMEPLAY::IS_BIT_SET(iLocal_3342, player_id()))
		{
			if (GAMEPLAY::IS_BIT_SET(iLocal_3343, participant_id_to_int()))
			{
				if (!func_598(player_id()))
				{
					iLocal_3350 = participant_id_to_int();
				}
				else if (func_597() && !func_596())
				{
					iVar2 = func_594();
					if (is_ped_a_player(iVar2))
					{
						iVar3 = _network_get_ped_player(iVar2);
						if (network_is_player_a_participant(iVar3))
						{
							iVar4 = network_get_participant_index(iVar3);
							iLocal_3350 = iVar4;
						}
					}
				}
			}
		}
		func_573();
		if (func_572() < 2)
		{
			if (func_569(2, 0, 1, 0, 0))
			{
				GAMEPLAY::SET_BIT(&iLocal_555, 24);
				func_531(0, -1);
				func_614();
			}
		}
		iVar0 = 0;
		while (iVar0 < 1)
		{
			func_530(iVar0, -1);
			func_529(iVar0, -1);
			func_528(iVar0, uVar1);
			GAMEPLAY::CLEAR_BIT(&iLocal_555, false);
			iVar0++;
		}
		func_482();
		func_453();
		func_450();
		func_430();
		switch (func_429(participant_id_to_int()))
		{
			case 0:
				if (func_428() == 1)
				{
					func_420(141, func_427(0), 0, 0);
					func_419(1);
				}
				else if (func_428() == 4)
				{
					func_419(4);
				}
				break;
			
			case 1:
				if (func_428() == 1)
				{
					func_20();
				}
				else if (func_428() == 4)
				{
					func_19(&(Local_96.f_211));
					func_419(3);
				}
				break;
			
			case 3:
				if (func_18(&(Local_96.f_211)))
				{
					if (func_17(&(Local_96.f_211)))
					{
						iVar5 = true;
					}
				}
				else
				{
					iVar5 = true;
				}
				if (iVar5)
				{
					func_419(4);
				}
				break;
			
			case 2:
				func_419(4);
			
			case 4:
				func_614();
				break;
		}
		if (network_is_host_of_this_script())
		{
			switch (func_428())
			{
				case 0:
					func_16(1);
					break;
				
				case 1:
					func_1();
					break;
				
				case 4:
					break;
				}
		}
	}
}

void func_1()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	func_12();
	switch (func_572())
	{
		case 0:
			if (GAMEPLAY::IS_BIT_SET(Local_96.f_213, false))
			{
				if (!func_18(&(Local_96.f_1.f_3)))
				{
					func_11(&(Local_96.f_1.f_3), 0, 1);
				}
				func_10(1);
			}
			break;
		
		case 1:
			if (GAMEPLAY::IS_BIT_SET(Local_96.f_213, 2))
			{
				iVar2 = Global_262145.f_9139;
				if (func_18(&(Local_96.f_1.f_1)))
				{
					if (func_9(&(Local_96.f_1.f_1), 0, 0) >= iVar2)
					{
						iVar1 = true;
					}
				}
			}
			else
			{
				iVar2 = Global_262145.f_9140;
				if (func_18(&(Local_96.f_1.f_3)))
				{
					if (func_9(&(Local_96.f_1.f_3), 0, 0) >= iVar2)
					{
						iVar1 = true;
					}
				}
			}
			if (iVar1)
			{
				func_10(2);
			}
			break;
		
		case 2:
			if (GAMEPLAY::IS_BIT_SET(Local_96.f_213, true))
			{
				func_10(3);
			}
			break;
		
		case 3:
			func_10(4);
			break;
		
		case 4:
			func_16(4);
			break;
	}
	iVar0 = false;
	while (iVar0 < 1)
	{
		func_2(iVar0);
		iVar0++;
	}
}

void func_2(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar0 = func_8(iParam0);
	iVar1 = func_7(iParam0);
	iVar6 = func_18(&(Local_96.f_6[iParam0 /*204*/].f_70));
	if (iVar0 > -1)
	{
		if (GAMEPLAY::IS_BIT_SET(iLocal_3343, iVar0))
		{
			if (GAMEPLAY::IS_BIT_SET(iLocal_3342, iVar1))
			{
				if (!GAMEPLAY::IS_BIT_SET(iLocal_3344, iVar1))
				{
					fVar2 = func_6(iParam0, iVar0);
					if (func_18(&(Local_96.f_1.f_1)))
					{
						if (!func_18(&(Local_96.f_6[iParam0 /*204*/].f_70)))
						{
							func_11(&(Local_96.f_6[iParam0 /*204*/].f_70), 0, 1);
						}
						else if ((func_5(&(Local_96.f_6[iParam0 /*204*/].f_70), 1000, 0) && func_9(&(Local_96.f_1.f_1), 0, 0) <= Global_262145.f_9139) && func_572() != 2)
						{
							iVar7 = func_9(&(Local_96.f_6[iParam0 /*204*/].f_70), 0, 1);
							fVar3 = to_float(iVar7);
							fVar3 /= IntToFloat(Global_262145.f_9143 * 1000);
							fVar4 = to_float(Global_262145.f_9142) * fVar3;
							fVar2 += fVar4;
							func_4(iParam0, iVar0, fVar2);
							iVar5 = true;
						}
					}
				}
				else if (iVar6)
				{
					iVar5 = true;
				}
			}
			else if (iVar6)
			{
				iVar5 = true;
			}
		}
		else if (iVar6)
		{
			iVar5 = true;
		}
	}
	else if (iVar6)
	{
		iVar5 = true;
	}
	if (iVar5)
	{
		if (iVar6)
		{
			func_3(&(Local_96.f_6[iParam0 /*204*/].f_70));
			if (iVar0 > -1)
			{
				func_11(&(Local_96.f_6[iParam0 /*204*/].f_70), 0, 1);
			}
		}
	}
}

void func_3(auto uParam0)
{
	*uParam0.f_1 = 0;
}

void func_4(int iParam0, int iParam1, float fParam2)
{
	Local_96.f_6[iParam0 /*204*/].f_3[iParam1] = fParam2;
}

bool func_5(auto uParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		return true;
	}
	func_11(uParam0, iParam2, 0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !iParam2)
	{
		if (absi(get_time_difference(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
		{
			return true;
		}
	}
	else if (absi(get_time_difference(GAMEPLAY::GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		return true;
	}
	return false;
}

auto func_6(int iParam0, int iParam1)
{
	return Local_96.f_6[iParam0 /*204*/].f_3[iParam1];
}

auto func_7(int iParam0)
{
	return Local_96.f_6[iParam0 /*204*/].f_2;
}

auto func_8(int iParam0)
{
	return Local_96.f_6[iParam0 /*204*/].f_1;
}

int func_9(auto uParam0, int iParam1, int iParam2)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !iParam1)
	{
		if (!iParam2)
		{
			return get_time_difference(NETWORK::GET_NETWORK_TIME(), *uParam0);
		}
		else
		{
			return get_time_difference(NETWORK::_0x89023FBBF9200E9F(), *uParam0);
		}
	}
	return get_time_difference(GAMEPLAY::GET_GAME_TIMER(), *uParam0);
}

void func_10(int iParam0)
{
	Local_96.f_1 = iParam0;
}

void func_11(auto uParam0, int iParam1, int iParam2)
{
	if (*uParam0.f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !iParam1)
		{
			if (!iParam2)
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				*uParam0 = NETWORK::_0x89023FBBF9200E9F();
			}
		}
		else
		{
			*uParam0 = GAMEPLAY::GET_GAME_TIMER();
		}
		*uParam0.f_1 = 1;
	}
}

void func_12()
{
	int iVar0;
	struct<2> Var1;
	
	iVar0 = false;
	while (iVar0 < 1)
	{
		switch (func_15(iVar0))
		{
			case 0:
				if (func_14(iVar0))
				{
					if (!func_18(&(Local_96.f_1.f_1)))
					{
						Local_96.f_1.f_3 = {Var1};
						func_11(&(Local_96.f_1.f_1), 0, 1);
					}
					if (!func_18(&(Local_96.f_6[iVar0 /*204*/].f_70)))
					{
						func_11(&(Local_96.f_6[iVar0 /*204*/].f_70), 0, 1);
					}
					func_13(iVar0, 1);
					if (!GAMEPLAY::IS_BIT_SET(Local_96.f_213, 2))
					{
						GAMEPLAY::SET_BIT(&(Local_96.f_213), 2);
					}
				}
				break;
			
			case 1:
				if (!func_14(iVar0))
				{
					func_13(iVar0, 2);
				}
				break;
			
			case 2:
				if (func_14(iVar0))
				{
					func_13(iVar0, 1);
				}
				break;
		}
		iVar0++;
	}
}

void func_13(int iParam0, int iParam1)
{
	Local_96.f_6[iParam0 /*204*/] = iParam1;
}

auto func_14(int iParam0)
{
	return Local_1241[iParam0 /*68*/].f_36;
}

auto func_15(int iParam0)
{
	return Local_96.f_6[iParam0 /*204*/];
}

void func_16(int iParam0)
{
	Local_96 = iParam0;
}

bool func_17(auto uParam0)
{
	if (*uParam0.f_1)
	{
		if (absi(get_time_difference(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= 1000)
		{
			return true;
		}
	}
	return false;
}

auto func_18(auto uParam0)
{
	return *uParam0.f_1;
}

void func_19(auto uParam0)
{
	if (!*uParam0.f_1)
	{
		if (network_is_host_of_this_script())
		{
			func_11(uParam0, 0, 0);
		}
	}
}

void func_20()
{
	int iVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	char* sVar4;
	char* sVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	char* sVar9;
	int iVar10;
	
	func_401();
	func_400();
	func_398();
	if (func_396())
	{
		func_292(iVar0);
	}
	func_278(141, func_291(0), &uLocal_3355, to_float(Global_262145.f_9447), 1148846080, iLocal_3354);
	if (func_240(0, 1))
	{
		func_239();
	}
	switch (func_572())
	{
		case 0:
			break;
		
		case 1:
			func_238();
			iVar0 = false;
			while (iVar0 < 1)
			{
				func_203(iVar0);
				func_202(iVar0);
				func_200(iVar0);
				if (iLocal_3350 == participant_id_to_int())
				{
					if (!func_197(1, 0))
					{
						if (func_196(participant_id_to_int(), iVar0))
						{
							if (func_195(player_id()) == 141)
							{
								if (!GAMEPLAY::IS_BIT_SET(Local_394[participant_id_to_int() /*5*/].f_4, 2))
								{
									GAMEPLAY::SET_BIT(&(Local_394[participant_id_to_int() /*5*/].f_4), 2);
									func_184(1);
								}
							}
							if (!GAMEPLAY::IS_BIT_SET(Local_394[participant_id_to_int() /*5*/].f_4, 5))
							{
								GAMEPLAY::SET_BIT(&(Local_394[participant_id_to_int() /*5*/].f_4), 5);
							}
							if (func_8(iVar0) == participant_id_to_int())
							{
								if (!GAMEPLAY::IS_BIT_SET(iLocal_555, 20))
								{
									GAMEPLAY::SET_BIT(&iLocal_555, 20);
								}
							}
						}
						if (!GAMEPLAY::IS_BIT_SET(Local_394[participant_id_to_int() /*5*/].f_4, 4))
						{
							if (func_8(iVar0) == participant_id_to_int())
							{
								GAMEPLAY::SET_BIT(&(Local_394[participant_id_to_int() /*5*/].f_4), 4);
							}
						}
					}
					else
					{
						if (GAMEPLAY::IS_BIT_SET(Local_394[participant_id_to_int() /*5*/].f_4, 2))
						{
							GAMEPLAY::CLEAR_BIT(&(Local_394[participant_id_to_int() /*5*/].f_4), 2);
						}
						if (GAMEPLAY::IS_BIT_SET(Local_394[participant_id_to_int() /*5*/].f_4, 5))
						{
							GAMEPLAY::CLEAR_BIT(&(Local_394[participant_id_to_int() /*5*/].f_4), 5);
						}
						if (GAMEPLAY::IS_BIT_SET(Local_394[participant_id_to_int() /*5*/].f_4, 4))
						{
							GAMEPLAY::CLEAR_BIT(&(Local_394[participant_id_to_int() /*5*/].f_4), 4);
						}
						if (GAMEPLAY::IS_BIT_SET(Local_394[participant_id_to_int() /*5*/].f_4, 6))
						{
							GAMEPLAY::CLEAR_BIT(&(Local_394[participant_id_to_int() /*5*/].f_4), 6);
						}
						if (GAMEPLAY::IS_BIT_SET(Local_394[participant_id_to_int() /*5*/].f_4, 7))
						{
							GAMEPLAY::CLEAR_BIT(&(Local_394[participant_id_to_int() /*5*/].f_4), 7);
						}
					}
				}
				if (func_15(iVar0) == 0)
				{
					if (!GAMEPLAY::IS_BIT_SET(iLocal_555, 8))
					{
						if (!is_help_message_being_displayed())
						{
							if (!func_183())
							{
								if (iLocal_3350 == participant_id_to_int())
								{
									if (!func_240(0, 0))
									{
										if (GAMEPLAY::IS_BIT_SET(iLocal_3342, Local_560[participant_id_to_int() /*18*/].f_1))
										{
											if (!GAMEPLAY::IS_BIT_SET(iLocal_3344, Local_560[participant_id_to_int() /*18*/].f_1))
											{
												func_182("KOTC_1STHELP", 30000);
												func_181(0);
												play_sound_frontend(-1, "Event_Start_Text", "GTAO_FM_Events_Soundset", 0);
												GAMEPLAY::SET_BIT(&iLocal_555, 8);
											}
										}
									}
								}
							}
						}
					}
				}
				else
				{
					if (func_180("KOTC_1STHELP"))
					{
						clear_help(1);
					}
					if (!GAMEPLAY::IS_BIT_SET(iLocal_555, 8))
					{
						GAMEPLAY::SET_BIT(&iLocal_555, 8);
					}
				}
				if (iLocal_3350 == participant_id_to_int())
				{
					if (func_179(iVar0) <= 500f)
					{
						if (!GAMEPLAY::IS_BIT_SET(iLocal_555, 9))
						{
							set_wanted_level_multiplier(0f);
							GAMEPLAY::SET_BIT(&iLocal_555, 9);
						}
					}
					else if (GAMEPLAY::IS_BIT_SET(iLocal_555, 9))
					{
						set_wanted_level_multiplier(1f);
						GAMEPLAY::CLEAR_BIT(&iLocal_555, 9);
					}
				}
				if (iLocal_3350 != -1)
				{
					if (GAMEPLAY::IS_BIT_SET(iLocal_555, 14) && func_8(iVar0) != iLocal_3350)
					{
						if (!GAMEPLAY::IS_BIT_SET(iLocal_555, 21))
						{
							func_178(80);
							GAMEPLAY::SET_BIT(&iLocal_555, 21);
						}
					}
					else if (GAMEPLAY::IS_BIT_SET(iLocal_555, 21))
					{
						GAMEPLAY::CLEAR_BIT(&iLocal_555, 21);
					}
				}
				if (func_15(iVar0) != 0)
				{
					if (!GAMEPLAY::IS_BIT_SET(iLocal_555, 26))
					{
						func_155(141, 0f, 0f, 0, 0, 0, 0);
						GAMEPLAY::SET_BIT(&iLocal_555, 26);
					}
					if (!GAMEPLAY::IS_BIT_SET(iLocal_555, true))
					{
						if (iLocal_3350 != -1)
						{
							if (!func_240(0, 0))
							{
								if (GAMEPLAY::IS_BIT_SET(iLocal_3342, Local_560[iLocal_3350 /*18*/].f_1))
								{
									if (!GAMEPLAY::IS_BIT_SET(iLocal_3344, Local_560[iLocal_3350 /*18*/].f_1))
									{
										if (func_8(iVar0) != -1)
										{
											if (func_8(iVar0) != iLocal_3350)
											{
												sVar1 = "KOTC_STRAP2";
												if (func_154(player_id(), func_7(iVar0)))
												{
													sVar1 = "KOTC_STRAP2GN";
												}
												func_152(80, sVar1, get_player_name(func_7(iVar0)), func_153(), -1, "KOTC_START", func_153());
											}
											else
											{
												func_151(80, "KOTC_START2", "KOTC_STRAP1", func_153(), -1, func_153());
												GAMEPLAY::SET_BIT(&iLocal_555, 14);
												GAMEPLAY::SET_BIT(&iLocal_555, 15);
											}
										}
										else
										{
											func_151(80, "KOTC_START", "KOTC_STRAP3", func_153(), -1, func_153());
										}
										GAMEPLAY::SET_BIT(&iLocal_555, true);
									}
								}
							}
						}
					}
					else if (!GAMEPLAY::IS_BIT_SET(iLocal_555, 2))
					{
						if (func_150(80))
						{
							GAMEPLAY::SET_BIT(&iLocal_555, 2);
						}
					}
					else if (iLocal_3350 != -1)
					{
						if (func_8(iVar0) == iLocal_3350)
						{
							if (!GAMEPLAY::IS_BIT_SET(iLocal_555, 14))
							{
								if (!func_240(0, 0))
								{
									if (GAMEPLAY::IS_BIT_SET(iLocal_3342, Local_560[iLocal_3350 /*18*/].f_1))
									{
										if (!GAMEPLAY::IS_BIT_SET(iLocal_3344, Local_560[iLocal_3350 /*18*/].f_1))
										{
											func_151(80, "KOTC_START2", "KOTC_STRAP1", 1, -1, 2);
											GAMEPLAY::SET_BIT(&iLocal_555, 14);
										}
									}
								}
							}
							else if (!GAMEPLAY::IS_BIT_SET(iLocal_555, 15))
							{
								if (func_150(80))
								{
									GAMEPLAY::SET_BIT(&iLocal_555, 15);
								}
							}
						}
						else
						{
							if (GAMEPLAY::IS_BIT_SET(iLocal_555, 14))
							{
								GAMEPLAY::CLEAR_BIT(&iLocal_555, 14);
							}
							if (GAMEPLAY::IS_BIT_SET(iLocal_555, 15))
							{
								GAMEPLAY::CLEAR_BIT(&iLocal_555, 15);
							}
						}
					}
					else
					{
						if (GAMEPLAY::IS_BIT_SET(iLocal_555, 14))
						{
							GAMEPLAY::CLEAR_BIT(&iLocal_555, 14);
						}
						if (GAMEPLAY::IS_BIT_SET(iLocal_555, 15))
						{
							GAMEPLAY::CLEAR_BIT(&iLocal_555, 15);
						}
					}
				}
				else
				{
					func_149();
				}
				if (func_15(iVar0) == 1)
				{
					if (func_8(iVar0) != -1)
					{
						if (iLocal_3350 != -1)
						{
							if (func_8(iVar0) == iLocal_3350)
							{
								if (!func_240(1, 0))
								{
									func_146("KOTC_KINGOB1", 0);
								}
								else
								{
									func_149();
								}
								if (GAMEPLAY::IS_BIT_SET(iLocal_555, 10))
								{
									if (iLocal_3350 == participant_id_to_int())
									{
										if (!is_help_message_being_displayed())
										{
											if (!func_183())
											{
												if (!func_240(0, 0))
												{
													if (GAMEPLAY::IS_BIT_SET(iLocal_3342, Local_560[participant_id_to_int() /*18*/].f_1))
													{
														if (!GAMEPLAY::IS_BIT_SET(iLocal_3344, Local_560[participant_id_to_int() /*18*/].f_1))
														{
															if (GAMEPLAY::IS_BIT_SET(iLocal_555, 2))
															{
																if (!func_154(player_id(), func_7(iVar0)))
																{
																	if (!GAMEPLAY::IS_BIT_SET(iLocal_555, 10))
																	{
																		func_182("KOTC_YOUKNG", 30000);
																		func_181(1);
																		GAMEPLAY::SET_BIT(&iLocal_555, 6);
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
							else
							{
								if (iLocal_3350 == participant_id_to_int())
								{
									if (!GAMEPLAY::IS_BIT_SET(iLocal_555, 7))
									{
										if (func_145(participant_id_to_int()))
										{
											if (!is_help_message_being_displayed())
											{
												if (!func_183())
												{
													if (!func_240(0, 0))
													{
														if (GAMEPLAY::IS_BIT_SET(iLocal_3342, Local_560[participant_id_to_int() /*18*/].f_1))
														{
															if (!GAMEPLAY::IS_BIT_SET(iLocal_3344, Local_560[participant_id_to_int() /*18*/].f_1))
															{
																if (GAMEPLAY::IS_BIT_SET(iLocal_555, 2))
																{
																	if (!func_154(player_id(), func_7(iVar0)))
																	{
																		if (!GAMEPLAY::IS_BIT_SET(iLocal_555, 7))
																		{
																			func_182("KOTC_OTHRKG", 30000);
																			func_181(1);
																			GAMEPLAY::SET_BIT(&iLocal_555, 7);
																		}
																	}
																	else if (!GAMEPLAY::IS_BIT_SET(iLocal_555, 11))
																	{
																		func_126("KOTC_OTHRKGGN", func_144(), 1, "KOTC_KINGBLIP", func_127(player_id(), -2, 0, 0), -1);
																		func_181(1);
																		GAMEPLAY::SET_BIT(&iLocal_555, 11);
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
								if (((func_145(iLocal_3350) || GAMEPLAY::IS_BIT_SET(Local_394[iLocal_3350 /*5*/].f_4, 12)) && GAMEPLAY::IS_BIT_SET(iLocal_3343, func_8(iVar0))) && !func_240(1, 0))
								{
									if (func_154(player_id(), func_7(iVar0)))
									{
										func_123("KOTC_PERMKNGb", func_7(iVar0), "KOTC_KINGNAME", 1, func_127(player_id(), -2, 0, 0), 0);
									}
									else
									{
										func_112("KOTC_PERMKNG", &(Local_560[func_8(iVar0) /*18*/].f_2), 0, 1);
									}
								}
								else
								{
									func_149();
								}
							}
						}
						else
						{
							func_149();
						}
					}
					else if (iLocal_3350 != -1)
					{
						if (!func_240(1, 0))
						{
							if (func_196(participant_id_to_int(), iVar0))
							{
								func_146("KOTC_KLLALL", 0);
							}
							else
							{
								func_146("KOTC_ENTER", 0);
							}
						}
						else
						{
							func_149();
						}
						if (!GAMEPLAY::IS_BIT_SET(iLocal_555, 10))
						{
							if (iLocal_3350 == participant_id_to_int())
							{
								if (func_145(participant_id_to_int()))
								{
									if (!is_help_message_being_displayed())
									{
										if (!func_183())
										{
											if (!func_240(0, 0))
											{
												if (GAMEPLAY::IS_BIT_SET(iLocal_3342, Local_560[participant_id_to_int() /*18*/].f_1))
												{
													if (!GAMEPLAY::IS_BIT_SET(iLocal_3344, Local_560[participant_id_to_int() /*18*/].f_1))
													{
														if (func_111(iVar0))
														{
															func_182("KOTC_CONTS", 30000);
															func_181(1);
															GAMEPLAY::SET_BIT(&iLocal_555, 10);
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
					else
					{
						func_149();
					}
				}
				if (iLocal_3350 != -1)
				{
					if (func_15(iVar0) == 2)
					{
						if (func_145(participant_id_to_int()) && !func_240(1, 0))
						{
							func_146("KOTC_ENTER", 0);
						}
						else
						{
							func_149();
						}
					}
				}
				else
				{
					func_149();
				}
				func_85(iVar0);
				if (func_195(player_id()) == 141)
				{
					func_71(iVar0);
				}
				func_70();
				iVar0++;
			}
			break;
		
		case 2:
			iVar3 = -1;
			iVar0 = false;
			while (iVar0 < 1)
			{
				func_68(iVar0);
				func_66(iVar0);
				iVar0++;
			}
			func_149();
			func_239();
			func_62();
			sVar4 = "KOTC_OVER1";
			sVar5 = "KOTC_OVER2";
			iVar7 = -1;
			iVar0 = false;
			while (iVar0 < 1)
			{
				if (iLocal_3350 != -1)
				{
					if (GAMEPLAY::IS_BIT_SET(iLocal_555, 20))
					{
						iVar2 = 0;
						while (iVar2 < 3)
						{
							if (Local_96.f_6[iVar0 /*204*/].f_74[iVar2 /*4*/] == iLocal_3350)
							{
								if (Local_96.f_6[iVar0 /*204*/].f_74[iVar2 /*4*/].f_3 > 0f)
								{
									iVar3 = iVar2;
									iVar7 = iVar2;
									switch (iVar2)
									{
										case 0:
											sVar5 = "KOTC1ST_STR";
											sVar4 = "KOTC_WIN1";
											iVar6 = true;
											break;
										
										case 1:
											sVar5 = "KOTC2ND_STR";
											iVar6 = true;
											break;
										
										case 2:
											sVar5 = "KOTC3RD_STR";
											iVar6 = true;
											break;
										}
									}
							}
							iVar2++;
						}
					}
				}
				func_85(iVar0);
				if (Local_96.f_6[iVar0 /*204*/].f_74[0 /*4*/] == -1)
				{
					iVar8 = true;
				}
				else if (!GAMEPLAY::IS_BIT_SET(iLocal_3343, Local_96.f_6[iVar0 /*204*/].f_74[0 /*4*/]))
				{
					iVar8 = true;
				}
				else if (Local_96.f_6[iVar0 /*204*/].f_74[0 /*4*/].f_3 <= 0f)
				{
					iVar8 = true;
				}
				iVar0++;
			}
			if (iVar6)
			{
				Local_380.f_5 = 1;
			}
			if (!GAMEPLAY::IS_BIT_SET(Local_394[participant_id_to_int() /*5*/].f_4, true) && func_61())
			{
				if (!GAMEPLAY::IS_BIT_SET(iLocal_555, 3))
				{
					iVar0 = false;
					while (iVar0 < 1)
					{
						if (func_15(iVar0) == 0)
						{
							if (!func_240(0, 0))
							{
								func_60("KOTC_NOENTRY", 1);
							}
						}
						else if (iVar8)
						{
							if (iLocal_3350 != -1)
							{
								if (!func_240(0, 0))
								{
									if (!func_240(0, 0))
									{
										if (GAMEPLAY::IS_BIT_SET(iLocal_3342, Local_560[iLocal_3350 /*18*/].f_1))
										{
											if (!GAMEPLAY::IS_BIT_SET(iLocal_3344, Local_560[iLocal_3350 /*18*/].f_1))
											{
												if (func_145(iLocal_3350))
												{
													func_151(67, "KOTC_OVER1", "KOTC_NOWIN", 1, 15000, 2);
												}
												else
												{
													func_60("KOTC_NOWIN", 1);
												}
											}
										}
									}
								}
							}
						}
						else if (iVar6)
						{
							if (iLocal_3350 != -1)
							{
								if (!func_240(0, 0))
								{
									if (GAMEPLAY::IS_BIT_SET(iLocal_3342, Local_560[iLocal_3350 /*18*/].f_1))
									{
										if (!GAMEPLAY::IS_BIT_SET(iLocal_3344, Local_560[iLocal_3350 /*18*/].f_1))
										{
											if (func_145(iLocal_3350))
											{
												func_58(63, func_59(Local_96.f_6[iVar0 /*204*/].f_74[iVar7 /*4*/].f_3), sVar5, sVar4, 1, 15000, -1082130432, 2);
											}
											else
											{
												func_57(sVar5, func_59(Local_96.f_6[iVar0 /*204*/].f_74[iVar7 /*4*/].f_3), 1);
											}
										}
									}
								}
							}
						}
						else if (iLocal_3350 != -1)
						{
							if (!func_240(0, 0))
							{
								if (GAMEPLAY::IS_BIT_SET(iLocal_3342, Local_560[iLocal_3350 /*18*/].f_1))
								{
									if (!GAMEPLAY::IS_BIT_SET(iLocal_3344, Local_560[iLocal_3350 /*18*/].f_1))
									{
										if (func_145(iLocal_3350))
										{
											sVar5 = "KOTC_OVER3";
											if (func_55(Local_96.f_6[iVar0 /*204*/].f_74[0 /*4*/].f_1, 1))
											{
												sVar9 = func_50(Local_96.f_6[iVar0 /*204*/].f_74[0 /*4*/].f_1);
											}
											else
											{
												sVar9 = get_player_name(Local_96.f_6[iVar0 /*204*/].f_74[0 /*4*/].f_1);
											}
											func_41(71, func_59(Local_96.f_6[iVar0 /*204*/].f_74[0 /*4*/].f_3), sVar5, sVar9, sVar4, 1, 15000, 2);
										}
										else
										{
											sVar5 = "KOTC_OVER3";
											func_29(sVar5, Local_96.f_6[iVar0 /*204*/].f_74[0 /*4*/].f_1, 1, func_59(Local_96.f_6[iVar0 /*204*/].f_74[0 /*4*/].f_3), 0, 0, 0, 1, 1, 0);
										}
									}
								}
							}
						}
						iVar0++;
					}
					if (GAMEPLAY::IS_BIT_SET(iLocal_3342, Local_560[participant_id_to_int() /*18*/].f_1))
					{
						if (!GAMEPLAY::IS_BIT_SET(iLocal_3344, Local_560[participant_id_to_int() /*18*/].f_1))
						{
							GAMEPLAY::SET_BIT(&iLocal_555, 3);
						}
					}
				}
				if (GAMEPLAY::IS_BIT_SET(iLocal_555, 3))
				{
					if (!GAMEPLAY::IS_BIT_SET(iLocal_555, 4))
					{
						if (iLocal_3350 != -1)
						{
							if (((((((func_150(63) || func_150(71)) || func_150(67)) || !func_145(iLocal_3350)) || func_240(1, 1)) || is_pause_menu_active()) || func_15(0) == 0) || iLocal_3350 == -1)
							{
								GAMEPLAY::SET_BIT(&iLocal_555, 4);
							}
						}
						else
						{
							GAMEPLAY::SET_BIT(&iLocal_555, 4);
						}
					}
				}
				if (GAMEPLAY::IS_BIT_SET(iLocal_555, 4))
				{
					iVar0 = false;
					while (iVar0 < 1)
					{
						func_531(iVar0, iVar3);
						iVar0++;
					}
				}
			}
			iVar10 = true;
			if (func_240(0, 0))
			{
				iVar10 = false;
			}
			if (func_15(0) == 0)
			{
				iVar10 = false;
			}
			if (iLocal_3350 == -1)
			{
				iVar10 = false;
			}
			if (func_21(&uLocal_1234, iVar10) && GAMEPLAY::IS_BIT_SET(iLocal_555, 4))
			{
				if (!func_183() || is_pause_menu_active())
				{
					GAMEPLAY::SET_BIT(&iLocal_555, 17);
					if (GAMEPLAY::IS_BIT_SET(iLocal_555, 5))
					{
						GAMEPLAY::SET_BIT(&(Local_394[participant_id_to_int() /*5*/].f_4), true);
						func_419(3);
					}
				}
			}
			break;
		
		case 3:
			break;
		
		case 4:
			break;
	}
}

bool func_21(auto uParam0, int iParam1)
{
	int iVar0;
	
	if ((*uParam0 > 0 && !func_183()) && !(func_28(player_id(), 0) && (func_27(player_id()) || func_25(player_id()))))
	{
		func_24();
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_18(uParam0.f_3))
			{
				func_11(uParam0.f_3, 0, 0);
			}
			else if (func_5(uParam0.f_3, 1000, 0))
			{
				GAMEPLAY::SET_BIT(&(Global_1573883.f_1), 25);
				if (iParam1)
				{
					GAMEPLAY::SET_BIT(&(Global_2460486.f_4426), false);
					func_11(uParam0.f_5, 0, 0);
				}
				func_11(uParam0.f_1, 0, 0);
				func_23(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_18(uParam0.f_5))
			{
				if (func_5(uParam0.f_5, 3000, 0))
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
				func_22();
				func_23(uParam0, 2);
			}
			break;
		
		case 2:
			func_22();
			if (func_5(uParam0.f_1, 15000, 0))
			{
				if (func_180("AMEV_LBD_HELP"))
				{
					clear_help(1);
				}
				func_23(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_5(uParam0.f_1, 23500, 0))
			{
				GAMEPLAY::CLEAR_BIT(&(Global_2460486.f_4426), true);
				func_23(uParam0, 4);
				return true;
			}
			break;
		
		case 4:
			GAMEPLAY::CLEAR_BIT(&(Global_2460486.f_4426), true);
			return true;
	}
	return false;
}

void func_22()
{
	if (GAMEPLAY::IS_BIT_SET(Global_2460486.f_4426, false))
	{
		if (((((!is_radar_hidden() && !GAMEPLAY::IS_BIT_SET(Global_2460486.f_743, 2)) && func_658(player_id(), 1, 1)) && !Global_68058) && !Global_52930) && !is_screen_faded_out())
		{
			GAMEPLAY::SET_BIT(&(Global_2460486.f_4426), true);
			func_182("AMEV_LBD_HELP", -1);
			func_181(1);
			GAMEPLAY::CLEAR_BIT(&(Global_2460486.f_4426), false);
		}
	}
}

void func_23(auto uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_24()
{
	Global_2444574 = 1;
}

int func_25(int iParam0)
{
	return func_26(iParam0, 19);
}

int func_26(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_1610316[iParam0 /*174*/].f_10.f_4, iParam1);
}

int func_27(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_26(iParam0, 9);
	}
	return false;
}

bool func_28(int iParam0, int iParam1)
{
	if (Global_1610316[iParam0 /*174*/].f_10.f_28 != -1 || (iParam1 && Global_1610316[iParam0 /*174*/].f_10.f_27 != -1))
	{
		return true;
	}
	return false;
}

int func_29(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	int iVar0;
	struct<16> Var1;
	int iVar17;
	int iVar18;
	
	iVar0 = -1;
	if (_0x9DE986FC9A87C474(player_id(), iParam1) || iParam5)
	{
		if (!iParam4)
		{
			StringCopy(&Var1, get_player_name(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, get_player_name(iParam1), 64);
		}
		_set_notification_text_entry(sParam0);
		_0x39BBF623FC803EAC(iParam2);
		add_text_component_substring_player_name(func_39(&Var1));
		add_text_component_integer(iParam3);
		if (!iParam6)
		{
			iVar0 = _draw_notification(0, 1);
		}
		else
		{
			Global_2459440 = {func_38(iParam1)};
			if (network_clan_player_get_desc(&Global_2459370, 35, &Global_2459440))
			{
				iVar17 = 0;
				if (are_strings_equal(&(Global_2459370.f_22), "Leader") && Global_2459370.f_30 == 0)
				{
					iVar17 = 1;
				}
				if (Global_2459370.f_21 > 0)
				{
					iVar18 = 0;
				}
				else
				{
					iVar18 = 1;
				}
				if (iParam8)
				{
					if (iParam9)
					{
						Var1 = {func_37(&Var1)};
					}
					iVar0 = _0x137BC35589E34E1E(iVar18, _0x7543BB439F63792B(&Global_2459370, 35), &(Global_2459370.f_17), Global_2459370.f_30, iVar17, 0, Global_2459370, &Var1, Global_1317072, Global_1317073, Global_1317074);
				}
				else
				{
					iVar0 = _0x97C9E4E7024A8F2C(iVar18, _0x7543BB439F63792B(&Global_2459370, 35), &(Global_2459370.f_17), Global_2459370.f_30, iVar17, 0, Global_2459370, Global_1317072, Global_1317073, Global_1317074);
				}
			}
			else
			{
				iVar0 = _draw_notification(0, 1);
			}
		}
		func_30(14, sParam0, 1, &Var1, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_30(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_36() || !network_is_activity_session()) || !func_33(player_id(), 0))
	{
		return;
	}
	iVar0 = func_31(iParam2);
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

int func_31(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_1724230 - 1)
	{
		if (iParam0 > Global_1724230.f_5[iVar0 /*53*/].f_1)
		{
			func_32(iVar0);
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

void func_32(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1724230.f_5[iVar0 /*53*/] = {Global_1724230.f_5[iVar0 - 1 /*53*/]};
		iVar0 += -1;
	}
}

int func_33(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == player_id())
	{
		iVar0 = func_34(-1, 0) == 8;
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

int func_34(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_35();
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

auto func_35()
{
	return Global_1312747;
}

int func_36()
{
	return is_dlc_present(-1762644250);
}

struct<16> func_37(char* sParam0)
{
	char[64] cVar0;
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>", 64);
	return cVar0;
}

struct<13> func_38(int iParam0)
{
	struct<13> Var0;
	
	network_handle_from_player(iParam0, &Var0, 13);
	return Var0;
}

auto func_39(char* sParam0)
{
	char[64] cVar0;
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_40(&cVar0);
}

auto func_40(char[4] cParam0)
{
	return cParam0;
}

int func_41(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	struct<72> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_65 = 1;
	Var0.f_66 = 2;
	Var0.f_71 = -1;
	func_49(iParam0, &Var0, iParam1, sParam2, sParam4);
	StringCopy(&(Var0.f_23), sParam3, 64);
	Var0.f_65 = iParam5;
	Var0.f_6 = iParam6;
	Var0.f_66 = iParam7;
	return func_42(&Var0);
}

bool func_42(auto uParam0)
{
	int iVar0;
	
	if (*uParam0.f_1 == 1)
	{
		if (Global_2428492.f_2461)
		{
			return false;
		}
	}
	func_47(uParam0, *uParam0.f_16);
	func_45(uParam0);
	if (func_44(*uParam0.f_1))
	{
		if (Global_2428492.f_2171[0 /*72*/].f_2 == 0)
		{
			Global_2428492.f_2171[0 /*72*/] = {*uParam0};
			return true;
		}
		if (((Global_2428492.f_2171[0 /*72*/].f_1 == 13 || Global_2428492.f_2171[0 /*72*/].f_1 == 52) || Global_2428492.f_2171[0 /*72*/].f_1 == 53) || Global_2428492.f_2171[0 /*72*/].f_1 == 57)
		{
			Global_2428492.f_2171[0 /*72*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2428492.f_2171[iVar0 + 1 /*72*/] = {Global_2428492.f_2171[iVar0 /*72*/]};
			iVar0 += -1;
		}
		Global_2428492.f_2171[1 /*72*/] = {*uParam0};
		return true;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2428492.f_2171[iVar0 /*72*/].f_2 == 0)
		{
			Global_2428492.f_2171[iVar0 /*72*/] = {*uParam0};
			return true;
		}
		else
		{
			if (*uParam0.f_1 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_2428492.f_2171[iVar0 /*72*/].f_63), true);
				Global_2428492.f_2171[iVar0 /*72*/].f_2 = 5;
			}
			if (*uParam0.f_1 == 84)
			{
				if (func_43(Global_2428492.f_2171[iVar0 /*72*/].f_1))
				{
					Global_2428492.f_2171[iVar0 /*72*/].f_2 = 5;
					GAMEPLAY::SET_BIT(&(Global_2428492.f_2171[iVar0 /*72*/].f_63), false);
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_43(int iParam0)
{
	switch (iParam0)
	{
		case 86:
		case 85:
		case 88:
		case 89:
		case 84:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 87:
		case 97:
			return true;
		
		default:
	}
	return false;
}

bool func_44(int iParam0)
{
	if ((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 55) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10)
	{
		return true;
	}
	return false;
}

void func_45(auto uParam0)
{
	if (func_46(*uParam0.f_1))
	{
		*uParam0.f_66 = func_153();
	}
}

bool func_46(int iParam0)
{
	switch (iParam0)
	{
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
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
			return true;
		
		default:
	}
	return false;
}

void func_47(auto uParam0, int iParam1)
{
	if (func_46(*uParam0.f_1))
	{
		*uParam0.f_67 = 1;
	}
	if (iParam1 == func_48())
	{
		return;
	}
	if (func_43(*uParam0.f_1))
	{
		if (*uParam0.f_65 == 1)
		{
			*uParam0.f_67 = func_127(iParam1, -2, 0, 0);
		}
	}
}

int func_48()
{
	return -1;
}

void func_49(auto uParam0, auto uParam1, int iParam2, char* sParam3, char* sParam4)
{
	*uParam1.f_16 = func_48();
	*uParam1.f_17 = func_48();
	*uParam1.f_18 = func_48();
	*uParam1.f_1 = uParam0;
	*uParam1.f_2 = 1;
	StringCopy(uParam1.f_19, sParam4, 16);
	StringCopy(uParam1.f_8, sParam3, 32);
	*uParam1.f_3 = iParam2;
	*uParam1.f_65 = 1;
	*uParam1.f_68 = 1;
	*uParam1.f_69 = 1;
	*uParam1.f_67 = 0;
	StringCopy(uParam1.f_23, "", 64);
	StringCopy(uParam1.f_39, "", 64);
}

char* func_50(int iParam0)
{
	char* sVar0;
	int iVar1;
	
	if (iParam0 == player_id())
	{
		sVar0 = func_54(&(Global_1610316[iParam0 /*174*/].f_10.f_74));
		return sVar0;
	}
	if (((func_26(iParam0, 28) || func_26(player_id(), 28)) || func_53(iParam0)) && !func_52(iParam0))
	{
		return _get_label_text("GB_REST_ACC");
	}
	iVar1 = func_51(iParam0);
	if (iVar1 != func_48())
	{
		sVar0 = func_54(&(Global_1610316[iVar1 /*174*/].f_10.f_74));
		if (is_string_null_or_empty(sVar0))
		{
			return _get_label_text("GB_REST_ACC");
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

int func_51(int iParam0)
{
	if (iParam0 != func_48())
	{
		return Global_1610316[iParam0 /*174*/].f_10;
	}
	return func_48();
}

bool func_52(int iParam0)
{
	struct<13> Var0;
	
	Var0 = {func_38(iParam0)};
	if (is_durango_version() && _0xB57A49545BA53CE7(&Var0))
	{
		return true;
	}
	return false;
}

bool func_53(int iParam0)
{
	struct<13> Var0;
	
	Var0 = {func_38(iParam0)};
	if (is_orbis_version() || GAMEPLAY::IS_PC_VERSION())
	{
		if (_0x72D918C99BCACC54(0))
		{
			return false;
		}
	}
	else if (is_durango_version())
	{
		if (_0xB57A49545BA53CE7(&Var0))
		{
			return false;
		}
	}
	return true;
}

auto func_54(auto uParam0)
{
	return uParam0;
}

int func_55(int iParam0, int iParam1)
{
	if (!iParam1)
	{
		if (func_56(iParam0))
		{
			return false;
		}
	}
	return Global_1610316[iParam0 /*174*/].f_10 != func_48();
}

int func_56(int iParam0)
{
	if (iParam0 != func_48())
	{
		if (Global_1610316[iParam0 /*174*/].f_10 != func_48())
		{
			return Global_1610316[iParam0 /*174*/].f_10 == iParam0;
		}
	}
	return false;
}

int func_57(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = -1;
	_set_notification_text_entry(sParam0);
	add_text_component_integer(iParam1);
	iVar0 = _draw_notification(0, 1);
	func_30(3, sParam0, 1, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_58(int iParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<72> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_65 = 1;
	Var0.f_66 = 2;
	Var0.f_71 = -1;
	func_49(iParam0, &Var0, iParam1, sParam2, sParam3);
	Var0.f_65 = iParam4;
	Var0.f_6 = iParam5;
	Var0.f_7 = iParam6;
	Var0.f_66 = iParam7;
	return func_42(&Var0);
}

int func_59(float fParam0)
{
	int iVar0;
	
	iVar0 = floor(fParam0);
	iVar0 /= Global_262145.f_9142;
	iVar0 *= Global_262145.f_9142;
	return iVar0;
}

int func_60(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	_set_notification_text_entry(sParam0);
	iVar0 = _draw_notification(0, 1);
	func_30(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_61()
{
	return GAMEPLAY::IS_BIT_SET(Global_1573883.f_1, 25);
}

void func_62()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = 0;
		while (iVar1 < 8)
		{
			func_63(iVar0, iVar1);
			iVar1++;
		}
		iVar0++;
	}
}

void func_63(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_427(iParam0);
	if (iParam1 != -1)
	{
		iVar0 = iParam1;
	}
	if (GAMEPLAY::IS_BIT_SET(iLocal_556, iVar0))
	{
		set_minimap_component(func_65(iParam0, 0), 0, func_64(iParam0, 1));
		if (iVar0 == 4)
		{
			set_minimap_component(func_65(iParam0, 1), 0, func_64(iParam0, 1));
		}
		GAMEPLAY::CLEAR_BIT(&iLocal_556, iVar0);
	}
}

int func_64(int iParam0, int iParam1)
{
	if (func_8(iParam0) <= -1)
	{
		if (iParam1)
		{
			return 21;
		}
		return 21;
	}
	else if (func_8(iParam0) == participant_id_to_int())
	{
		return 9;
	}
	else if (func_154(player_id(), func_7(iParam0)))
	{
		return func_127(player_id(), -2, 0, 0);
	}
	return 6;
}

int func_65(int iParam0, int iParam1)
{
	switch (func_427(iParam0))
	{
		case 0:
			return 6;
		
		case 1:
			return 9;
		
		case 2:
			return 8;
		
		case 3:
			return 10;
		
		case 5:
			return 11;
		
		case 6:
			return 12;
		
		case 7:
			return 13;
		
		case 4:
			if (!iParam1)
			{
				return 7;
			}
			else
			{
				return 14;
			}
			break;
	}
	return 6;
}

void func_66(int iParam0)
{
	if (does_blip_exist(func_67(iParam0)))
	{
		remove_blip(&(Local_1241[iParam0 /*68*/].f_28));
	}
}

auto func_67(auto uParam0)
{
	return Local_1241[uParam0 /*68*/].f_28;
}

void func_68(int iParam0)
{
	if (does_blip_exist(func_69(iParam0)))
	{
		remove_blip(&(Local_1241[iParam0 /*68*/].f_27));
	}
}

auto func_69(int iParam0)
{
	return Local_1241[iParam0 /*68*/].f_27;
}

void func_70()
{
	int iVar0;
	
	if (iLocal_3350 != -1)
	{
		if (func_145(iLocal_3350))
		{
			iVar0 = true;
		}
	}
	if (iVar0)
	{
		if (!GAMEPLAY::IS_BIT_SET(iLocal_555, 16))
		{
			start_audio_scene("MP_Deathmatch_Type_Challenge_Scene");
			GAMEPLAY::SET_BIT(&iLocal_555, 16);
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(iLocal_555, 16))
	{
		stop_audio_scene("MP_Deathmatch_Type_Challenge_Scene");
		GAMEPLAY::CLEAR_BIT(&iLocal_555, 16);
	}
}

void func_71(int iParam0)
{
	if (iParam0 == iParam0)
	{
		iParam0 = iParam0;
	}
	if (((((func_145(participant_id_to_int()) && !func_240(1, 1)) && iLocal_3350 == participant_id_to_int()) && !func_82(player_id(), 0, 0)) && !func_81(player_id())) && !func_80())
	{
		if (!GAMEPLAY::IS_BIT_SET(iLocal_555, 18))
		{
			if (iLocal_3354 == 0)
			{
				iLocal_3354 = 1;
			}
			func_78(1, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
			func_74();
			GAMEPLAY::SET_BIT(&iLocal_555, 18);
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(iLocal_555, 18))
	{
		if (iLocal_3354)
		{
			iLocal_3354 = 0;
		}
		func_72();
		func_78(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
		GAMEPLAY::CLEAR_BIT(&iLocal_555, 18);
	}
}

void func_72()
{
	func_73();
	Global_2404956.f_635 = 0;
}

void func_73()
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2404956.f_636[iVar0 /*5*/] = {Var1};
		iVar0++;
	}
}

void func_74()
{
	int iVar0;
	int iVar1;
	Vector3 vVar2;
	auto uVar5;
	auto uVar6;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = 0;
		while (iVar1 < 60)
		{
			func_76(func_427(iVar0), iVar1, &vVar2, &uVar5, &uVar6);
			func_75(vVar2, uVar5, uVar6);
			iVar1++;
		}
		iVar0++;
	}
}

void func_75(Vector3 vParam0, auto uParam1, auto uParam2)
{
	if (!Global_2404956.f_634)
	{
	}
	if (Global_2404956.f_635 < 100)
	{
		if (vmag(vParam0) <= 0.01f)
		{
			return;
		}
		Global_2404956.f_636[Global_2404956.f_635 /*5*/] = {vParam0};
		Global_2404956.f_636[Global_2404956.f_635 /*5*/].f_3 = uParam3;
		Global_2404956.f_636[Global_2404956.f_635 /*5*/].f_4 = uParam4;
		Global_2404956.f_635++;
	}
}

void func_76(int iParam0, int iParam1, auto uParam2, auto uParam3, auto uParam4)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = {-1221.708f, -1849.335f, 1.251f};
					*uParam3 = 337.5771f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 1:
					*uParam2 = {-1237.67f, -1835.705f, 1.2517f};
					*uParam3 = 323.4358f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 2:
					*uParam2 = {-1249.548f, -1817.355f, 1.2506f};
					*uParam3 = 297.8504f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 3:
					*uParam2 = {-1248.685f, -1803.257f, 1.3833f};
					*uParam3 = 286.9426f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 4:
					*uParam2 = {-1248.991f, -1791.148f, 1.6577f};
					*uParam3 = 279.8152f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 5:
					*uParam2 = {-1255.678f, -1781.741f, 1.5292f};
					*uParam3 = 271.3008f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 6:
					*uParam2 = {-1245.86f, -1762.165f, 1.7061f};
					*uParam3 = 232.2266f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 7:
					*uParam2 = {-1245.333f, -1747.114f, 2.0783f};
					*uParam3 = 246.9348f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 8:
					*uParam2 = {-1231.577f, -1747.278f, 2.2692f};
					*uParam3 = 208.6838f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 9:
					*uParam2 = {-1220.947f, -1735.378f, 3.3682f};
					*uParam3 = 201.3756f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 10:
					*uParam2 = {-1210.075f, -1736.36f, 3.2672f};
					*uParam3 = 188.154f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 11:
					*uParam2 = {-1198.247f, -1731.74f, 3.3204f};
					*uParam3 = 194.4361f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 12:
					*uParam2 = {-1181.951f, -1730.004f, 3.3951f};
					*uParam3 = 177.6483f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 13:
					*uParam2 = {-1170.59f, -1719.653f, 3.3414f};
					*uParam3 = 159.2419f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 14:
					*uParam2 = {-1159.548f, -1712.506f, 3.327f};
					*uParam3 = 173.1471f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 15:
					*uParam2 = {-1164.51f, -1729.84f, 3.2972f};
					*uParam3 = 164.5387f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 16:
					*uParam2 = {-1153.682f, -1723.684f, 3.2673f};
					*uParam3 = 159.7204f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 17:
					*uParam2 = {-1144.7f, -1734.572f, 3.2823f};
					*uParam3 = 132.856f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 18:
					*uParam2 = {-1128.272f, -1755.871f, 3.0265f};
					*uParam3 = 111.5717f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 19:
					*uParam2 = {-1140.422f, -1768.454f, 3.1609f};
					*uParam3 = 108.3239f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 20:
					*uParam2 = {-1236.169f, -1851.284f, 1.2074f};
					*uParam3 = 330.7894f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 21:
					*uParam2 = {-1250.026f, -1849.988f, 0.8113f};
					*uParam3 = 315.2169f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 22:
					*uParam2 = {-1249.307f, -1832.01f, 1.2365f};
					*uParam3 = 308.724f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 23:
					*uParam2 = {-1262.08f, -1826.342f, 0.88f};
					*uParam3 = 291.1317f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 24:
					*uParam2 = {-1262.728f, -1810.021f, 1.2095f};
					*uParam3 = 279.2619f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 25:
					*uParam2 = {-1260.259f, -1797.316f, 1.24f};
					*uParam3 = 266.2758f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 26:
					*uParam2 = {-1274.153f, -1773.825f, 1.229f};
					*uParam3 = 253.8689f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 27:
					*uParam2 = {-1260.69f, -1766.211f, 1.6755f};
					*uParam3 = 244.6821f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 28:
					*uParam2 = {-1266.035f, -1751.414f, 1.7303f};
					*uParam3 = 225.9904f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 29:
					*uParam2 = {-1208.952f, -1720.76f, 3.4325f};
					*uParam3 = 190.2951f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 30:
					*uParam2 = {-1195.125f, -1711.339f, 3.4745f};
					*uParam3 = 177.7994f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 31:
					*uParam2 = {-1186.983f, -1699.157f, 3.4862f};
					*uParam3 = 185.7234f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 32:
					*uParam2 = {-1174.999f, -1703.776f, 3.4646f};
					*uParam3 = 172.7709f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 33:
					*uParam2 = {-1163.133f, -1699.905f, 3.4278f};
					*uParam3 = 169.2118f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 34:
					*uParam2 = {-1150.336f, -1701.652f, 3.3947f};
					*uParam3 = 148.2826f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 35:
					*uParam2 = {-1144.078f, -1687.13f, 3.4853f};
					*uParam3 = 149.4927f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 36:
					*uParam2 = {-1138.136f, -1707.854f, 3.387f};
					*uParam3 = 133.8241f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 37:
					*uParam2 = {-1140.055f, -1722.341f, 3.3376f};
					*uParam3 = 127.5326f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 38:
					*uParam2 = {-1116.763f, -1746.22f, 3.1299f};
					*uParam3 = 107.5649f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 39:
					*uParam2 = {-1108.207f, -1735.964f, 3.2643f};
					*uParam3 = 123.7412f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 40:
					*uParam2 = {-1227.086f, -1873.856f, 4.935f};
					*uParam3 = 337.0957f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 41:
					*uParam2 = {-1215.905f, -1861.876f, 4.9443f};
					*uParam3 = 346.5332f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 42:
					*uParam2 = {-1206.479f, -1854.022f, 5.0039f};
					*uParam3 = 346.756f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 43:
					*uParam2 = {-1234.57f, -1863.302f, 0.4019f};
					*uParam3 = 334.4932f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 44:
					*uParam2 = {-1261.542f, -1840.843f, 0.429f};
					*uParam3 = 308.3732f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 45:
					*uParam2 = {-1271.821f, -1799.404f, 0.9933f};
					*uParam3 = 276.274f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 46:
					*uParam2 = {-1284.195f, -1789.106f, 0.6971f};
					*uParam3 = 266.1992f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 47:
					*uParam2 = {-1257.971f, -1736.858f, 2.0784f};
					*uParam3 = 227.487f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 48:
					*uParam2 = {-1247.267f, -1725.901f, 3.2245f};
					*uParam3 = 214.7514f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 49:
					*uParam2 = {-1234.988f, -1722.898f, 3.5186f};
					*uParam3 = 220.7502f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 50:
					*uParam2 = {-1235.874f, -1703.238f, 3.0997f};
					*uParam3 = 214.0405f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 51:
					*uParam2 = {-1231.588f, -1682.849f, 2.571f};
					*uParam3 = 203.4435f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 52:
					*uParam2 = {-1215.568f, -1695.777f, 3.1209f};
					*uParam3 = 196.5891f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 53:
					*uParam2 = {-1132.415f, -1669.435f, 3.5755f};
					*uParam3 = 148.2112f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 54:
					*uParam2 = {-1159.309f, -1677.777f, 3.4694f};
					*uParam3 = 175.6314f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 55:
					*uParam2 = {-1129.18f, -1690.502f, 3.4678f};
					*uParam3 = 143.3497f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 56:
					*uParam2 = {-1119.669f, -1702.988f, 3.4241f};
					*uParam3 = 129.3894f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 57:
					*uParam2 = {-1120.063f, -1717.326f, 3.3807f};
					*uParam3 = 123.5869f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 58:
					*uParam2 = {-1111.901f, -1758.692f, 4.7663f};
					*uParam3 = 93.7592f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 59:
					*uParam2 = {-1122.059f, -1769.543f, 4.9921f};
					*uParam3 = 93.2178f;
					*uParam4 = func_77(iParam0, 2);
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = {1692.861f, -80.4741f, 174.6247f};
					*uParam3 = 22.7116f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 1:
					*uParam2 = {1699.049f, -73.278f, 175.3116f};
					*uParam3 = 36.6067f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 2:
					*uParam2 = {1686.15f, -72.261f, 173.9488f};
					*uParam3 = 33.5969f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 3:
					*uParam2 = {1673.573f, -76.8662f, 172.6441f};
					*uParam3 = 358.3647f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 4:
					*uParam2 = {1668.303f, -68.8711f, 172.6008f};
					*uParam3 = 344.7672f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 5:
					*uParam2 = {1664.004f, -81.4696f, 171.3247f};
					*uParam3 = 335.9399f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 6:
					*uParam2 = {1653.943f, -82.7018f, 170.2733f};
					*uParam3 = 316.5097f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 7:
					*uParam2 = {1642.184f, 16.9022f, 172.8744f};
					*uParam3 = 213.6659f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 8:
					*uParam2 = {1647.117f, 26.0881f, 172.469f};
					*uParam3 = 200.4823f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 9:
					*uParam2 = {1643.251f, 34.2645f, 171.8502f};
					*uParam3 = 198.3856f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 10:
					*uParam2 = {1652.155f, 38.4683f, 171.5731f};
					*uParam3 = 167.6548f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 11:
					*uParam2 = {1647.521f, 46.6361f, 171.515f};
					*uParam3 = 173.6852f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 12:
					*uParam2 = {1658.341f, 46.5354f, 171.4155f};
					*uParam3 = 142.775f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 13:
					*uParam2 = {1654.557f, 54.9274f, 171.5186f};
					*uParam3 = 158.0565f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 14:
					*uParam2 = {1679.687f, -62.2895f, 172.8752f};
					*uParam3 = 19.1425f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 15:
					*uParam2 = {1648.26f, -92.0332f, 169.0467f};
					*uParam3 = 320.4252f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 16:
					*uParam2 = {1641.12f, -90.8545f, 167.3707f};
					*uParam3 = 340.133f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 17:
					*uParam2 = {1632.839f, -88.4347f, 166.232f};
					*uParam3 = 275.8517f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 18:
					*uParam2 = {1624.526f, -82.0814f, 165.1201f};
					*uParam3 = 268.6114f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 19:
					*uParam2 = {1709.025f, -79.3046f, 176.215f};
					*uParam3 = 47.9711f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 20:
					*uParam2 = {1709.47f, -89.1149f, 176.8704f};
					*uParam3 = 45.0986f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 21:
					*uParam2 = {1719.762f, -89.4824f, 177.2371f};
					*uParam3 = 40.521f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 22:
					*uParam2 = {1715.411f, -97.7661f, 177.0435f};
					*uParam3 = 39.9521f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 23:
					*uParam2 = {1725.27f, -101.2808f, 177.3414f};
					*uParam3 = 28.2699f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 24:
					*uParam2 = {1664.762f, 51.6959f, 171.2758f};
					*uParam3 = 125.1599f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 25:
					*uParam2 = {1659.656f, 60.4243f, 171.7457f};
					*uParam3 = 155.8516f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 26:
					*uParam2 = {1671.615f, 58.2652f, 171.0533f};
					*uParam3 = 130.5652f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 27:
					*uParam2 = {1670.401f, 68.8127f, 170.8255f};
					*uParam3 = 142.8485f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 28:
					*uParam2 = {1680.824f, 64.6627f, 170.8684f};
					*uParam3 = 171.7255f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 29:
					*uParam2 = {1686.476f, 72.1055f, 170.6706f};
					*uParam3 = 118.2492f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 30:
					*uParam2 = {1724.498f, 78.3834f, 169.7617f};
					*uParam3 = 122.1907f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 31:
					*uParam2 = {1716.555f, 77.9f, 170.125f};
					*uParam3 = 133.2787f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 32:
					*uParam2 = {1718.658f, 69.3794f, 169.7158f};
					*uParam3 = 123.6501f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 33:
					*uParam2 = {1708.223f, 67.7488f, 170.122f};
					*uParam3 = 125.7215f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 34:
					*uParam2 = {1696.666f, 67.5787f, 170.4112f};
					*uParam3 = 130.5078f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 35:
					*uParam2 = {1688.924f, 64.4787f, 170.5247f};
					*uParam3 = 116.7526f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 36:
					*uParam2 = {1654.409f, 85.3155f, 178.6964f};
					*uParam3 = 185.1295f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 37:
					*uParam2 = {1642.521f, 61.9855f, 183.7891f};
					*uParam3 = 187.6025f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 38:
					*uParam2 = {1663.522f, 37.8715f, 170.7838f};
					*uParam3 = 181.9699f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 39:
					*uParam2 = {1663.431f, 25.7403f, 167.747f};
					*uParam3 = 165.7094f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 40:
					*uParam2 = {1660.156f, 12.794f, 165.1707f};
					*uParam3 = 184.4829f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 41:
					*uParam2 = {1658.881f, -53.3581f, 167.4092f};
					*uParam3 = 340.2356f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 42:
					*uParam2 = {1650.805f, -63.341f, 163.7801f};
					*uParam3 = 325.3763f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 43:
					*uParam2 = {1619.019f, -87.1216f, 164.7846f};
					*uParam3 = 285.7851f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 44:
					*uParam2 = {1616.216f, -76.6892f, 164.2788f};
					*uParam3 = 277.6688f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 45:
					*uParam2 = {1611.567f, -84.1719f, 164.6911f};
					*uParam3 = 279.2012f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 46:
					*uParam2 = {1606.564f, -73.1815f, 163.3484f};
					*uParam3 = 256.1666f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 47:
					*uParam2 = {1595.997f, -78.4415f, 162.1879f};
					*uParam3 = 273.5168f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 48:
					*uParam2 = {1596.441f, -69.8807f, 162.1016f};
					*uParam3 = 260.1767f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 49:
					*uParam2 = {1587.161f, -67.6343f, 161.2196f};
					*uParam3 = 253.1009f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 50:
					*uParam2 = {1582.353f, -76.1702f, 160.4171f};
					*uParam3 = 265.3223f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 51:
					*uParam2 = {1725.676f, -110.6558f, 177.8831f};
					*uParam3 = 34.6784f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 52:
					*uParam2 = {1736.203f, -108.6194f, 179.2085f};
					*uParam3 = 50.2519f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 53:
					*uParam2 = {1746.135f, -106.5357f, 180.7151f};
					*uParam3 = 65.9975f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 54:
					*uParam2 = {1749.594f, -96.7965f, 182.065f};
					*uParam3 = 79.3328f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 55:
					*uParam2 = {1758.513f, -98.7928f, 182.982f};
					*uParam3 = 82.5892f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 56:
					*uParam2 = {1760.473f, -88.7761f, 184.3481f};
					*uParam3 = 83.4158f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 57:
					*uParam2 = {1770.153f, -89.9473f, 186.0895f};
					*uParam3 = 69.9826f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 58:
					*uParam2 = {1772.731f, -80.3556f, 187.6041f};
					*uParam3 = 87.3442f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 59:
					*uParam2 = {1782.038f, -81.4923f, 188.8666f};
					*uParam3 = 92.9392f;
					*uParam4 = func_77(iParam0, 2);
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = {-358.9362f, 6101.992f, 30.5445f};
					*uParam3 = 124.1256f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 1:
					*uParam2 = {-348.5437f, 6102.846f, 30.5442f};
					*uParam3 = 115.8979f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 2:
					*uParam2 = {-354.9039f, 6112.223f, 30.5402f};
					*uParam3 = 155.6832f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 3:
					*uParam2 = {-341.2615f, 6111.447f, 30.542f};
					*uParam3 = 114.7182f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 4:
					*uParam2 = {-347.4731f, 6120.339f, 30.5401f};
					*uParam3 = 161.4131f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 5:
					*uParam2 = {-376.9227f, 6129.001f, 30.5322f};
					*uParam3 = 153.5222f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 6:
					*uParam2 = {-384.3775f, 6136.947f, 30.4047f};
					*uParam3 = 187.2874f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 7:
					*uParam2 = {-389.1951f, 6129.617f, 30.5795f};
					*uParam3 = 181.9189f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 8:
					*uParam2 = {-399.0005f, 6127.275f, 30.549f};
					*uParam3 = 204.8398f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 9:
					*uParam2 = {-383.5045f, 6120.464f, 30.5795f};
					*uParam3 = 140.9251f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 10:
					*uParam2 = {-391.13f, 6120.804f, 30.4824f};
					*uParam3 = 201.1372f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 11:
					*uParam2 = {-402.7893f, 6117.366f, 30.403f};
					*uParam3 = 226.6899f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 12:
					*uParam2 = {-412.6236f, 6114.75f, 30.403f};
					*uParam3 = 226.6899f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 13:
					*uParam2 = {-394.3771f, 6111.254f, 30.4438f};
					*uParam3 = 239.3517f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 14:
					*uParam2 = {-389.6141f, 6105.142f, 30.5445f};
					*uParam3 = 223.9884f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 15:
					*uParam2 = {-393.7008f, 6063.039f, 30.6001f};
					*uParam3 = 307.3006f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 16:
					*uParam2 = {-390.5935f, 6052.42f, 30.6001f};
					*uParam3 = 318.0318f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 17:
					*uParam2 = {-370.7218f, 6062.16f, 30.6001f};
					*uParam3 = 22.496f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 18:
					*uParam2 = {-360.3093f, 6063.834f, 30.6001f};
					*uParam3 = 37.8362f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 19:
					*uParam2 = {-342.4209f, 6079.654f, 30.3972f};
					*uParam3 = 68.9811f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 20:
					*uParam2 = {-341.2047f, 6070.171f, 30.4855f};
					*uParam3 = 63.9301f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 21:
					*uParam2 = {-329.9387f, 6066.402f, 30.3113f};
					*uParam3 = 44.5343f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 22:
					*uParam2 = {-335.7858f, 6122.277f, 31.2548f};
					*uParam3 = 129.6423f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 23:
					*uParam2 = {-342.0471f, 6128.171f, 31.2548f};
					*uParam3 = 142.1917f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 24:
					*uParam2 = {-349.7313f, 6135.283f, 31.2548f};
					*uParam3 = 158.8037f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 25:
					*uParam2 = {-356.2828f, 6125.203f, 30.5402f};
					*uParam3 = 199.7626f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 26:
					*uParam2 = {-359.0895f, 6139.214f, 30.5635f};
					*uParam3 = 124.4663f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 27:
					*uParam2 = {-369.4224f, 6152.725f, 30.4406f};
					*uParam3 = 161.3973f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 28:
					*uParam2 = {-375.9839f, 6141.022f, 30.4406f};
					*uParam3 = 161.3973f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 29:
					*uParam2 = {-369.7337f, 6134.166f, 30.5525f};
					*uParam3 = 136.8736f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 30:
					*uParam2 = {-359.228f, 6073.3f, 30.5975f};
					*uParam3 = 40.8648f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 31:
					*uParam2 = {-350.0499f, 6083.418f, 30.3773f};
					*uParam3 = 81.9925f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 32:
					*uParam2 = {-332.9335f, 6056.562f, 30.218f};
					*uParam3 = 34.6386f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 33:
					*uParam2 = {-319.7262f, 6071.655f, 30.4404f};
					*uParam3 = 98.0741f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 34:
					*uParam2 = {-305.5597f, 6086.671f, 30.3145f};
					*uParam3 = 105.1401f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 35:
					*uParam2 = {-315.9f, 6098.8f, 30.5622f};
					*uParam3 = 68.0701f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 36:
					*uParam2 = {-321.8067f, 6105.211f, 30.5847f};
					*uParam3 = 77.1148f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 37:
					*uParam2 = {-333.3944f, 6102.061f, 30.5452f};
					*uParam3 = 94.9811f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 38:
					*uParam2 = {-328.1533f, 6111.544f, 30.5992f};
					*uParam3 = 112.3565f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 39:
					*uParam2 = {-346.6402f, 6170.479f, 30.5104f};
					*uParam3 = 153.9383f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 40:
					*uParam2 = {-348.4091f, 6161.741f, 30.5903f};
					*uParam3 = 127.3381f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 41:
					*uParam2 = {-357.501f, 6164.666f, 30.3218f};
					*uParam3 = 165.9396f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 42:
					*uParam2 = {-362.3921f, 6158.998f, 30.4267f};
					*uParam3 = 164.6814f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 43:
					*uParam2 = {-299.2778f, 6094.682f, 30.3967f};
					*uParam3 = 97.7633f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 44:
					*uParam2 = {-403.1499f, 6144.179f, 30.5344f};
					*uParam3 = 192.2655f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 45:
					*uParam2 = {-419.8507f, 6128.894f, 30.3768f};
					*uParam3 = 226.1505f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 46:
					*uParam2 = {-403.4776f, 6109.125f, 30.432f};
					*uParam3 = 231.4631f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 47:
					*uParam2 = {-418.8898f, 6102.594f, 30.5063f};
					*uParam3 = 250.378f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 48:
					*uParam2 = {-423.8823f, 6087.721f, 30.3067f};
					*uParam3 = 249.7169f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 49:
					*uParam2 = {-409.3334f, 6087.301f, 30.6001f};
					*uParam3 = 255.2337f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 50:
					*uParam2 = {-415.4413f, 6074.564f, 30.6001f};
					*uParam3 = 295.8184f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 51:
					*uParam2 = {-424.9092f, 6072.749f, 30.4263f};
					*uParam3 = 283.0375f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 52:
					*uParam2 = {-420.9166f, 6060.098f, 30.5557f};
					*uParam3 = 253.9669f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 53:
					*uParam2 = {-410.8875f, 6060.549f, 30.6001f};
					*uParam3 = 233.6391f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 54:
					*uParam2 = {-401.7228f, 6048.293f, 30.6001f};
					*uParam3 = 316.9792f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 55:
					*uParam2 = {-410.8336f, 6049.957f, 30.7181f};
					*uParam3 = 282.7038f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 56:
					*uParam2 = {-388.0199f, 6039.768f, 30.5993f};
					*uParam3 = 17.0043f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 57:
					*uParam2 = {-395.2367f, 6033.086f, 30.6906f};
					*uParam3 = 344.4481f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 58:
					*uParam2 = {-385.8562f, 6026.026f, 30.7199f};
					*uParam3 = 19.855f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 59:
					*uParam2 = {-380.7711f, 6033.284f, 30.5989f};
					*uParam3 = 40.8827f;
					*uParam4 = func_77(iParam0, 2);
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					*uParam2 = {-692.3021f, 5591.033f, 31.803f};
					*uParam3 = 74.8653f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 1:
					*uParam2 = {-688.3215f, 5575.978f, 38.7867f};
					*uParam3 = 59.0735f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 2:
					*uParam2 = {-697.7473f, 5566.13f, 37.8698f};
					*uParam3 = 50.5049f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 3:
					*uParam2 = {-707.0853f, 5561.903f, 37.7135f};
					*uParam3 = 46.5953f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 4:
					*uParam2 = {-718.0601f, 5562.404f, 35.1231f};
					*uParam3 = 35.9231f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 5:
					*uParam2 = {-729.6589f, 5559.356f, 33.8316f};
					*uParam3 = 2.3291f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 6:
					*uParam2 = {-723.8281f, 5544.737f, 34.8933f};
					*uParam3 = 18.3278f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 7:
					*uParam2 = {-780.6183f, 5563.971f, 32.6778f};
					*uParam3 = 329.6704f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 8:
					*uParam2 = {-767.3f, 5569.303f, 35.3f};
					*uParam3 = 331.3245f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 9:
					*uParam2 = {-772.2f, 5581.6f, 32.6824f};
					*uParam3 = 301.3555f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 10:
					*uParam2 = {-778.3644f, 5588.715f, 32.6826f};
					*uParam3 = 270.8067f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 11:
					*uParam2 = {-768.7381f, 5595.103f, 32.6827f};
					*uParam3 = 230.1011f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 12:
					*uParam2 = {-782.3171f, 5573.262f, 32.6847f};
					*uParam3 = 294.6598f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 13:
					*uParam2 = {-781.341f, 5582.1f, 32.6771f};
					*uParam3 = 336.2302f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 14:
					*uParam2 = {-753.9799f, 5627.107f, 27.1403f};
					*uParam3 = 171.4856f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 15:
					*uParam2 = {-730.2549f, 5635.994f, 27.8518f};
					*uParam3 = 162.9716f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 16:
					*uParam2 = {-723.6004f, 5622.383f, 28.385f};
					*uParam3 = 172.2795f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 17:
					*uParam2 = {-718.595f, 5631.016f, 27.7666f};
					*uParam3 = 172.2795f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 18:
					*uParam2 = {-708.1818f, 5621.512f, 29.6452f};
					*uParam3 = 126.8752f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 19:
					*uParam2 = {-696.5601f, 5615.674f, 29.9981f};
					*uParam3 = 125.8635f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 20:
					*uParam2 = {-708.3126f, 5550.206f, 36.7429f};
					*uParam3 = 29.6831f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 21:
					*uParam2 = {-766.3f, 5544.3f, 32.6826f};
					*uParam3 = 30.2344f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 22:
					*uParam2 = {-749.5f, 5527.9f, 33.1f};
					*uParam3 = 346.3935f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 23:
					*uParam2 = {-768.97f, 5520.835f, 32.6799f};
					*uParam3 = 340.5899f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 24:
					*uParam2 = {-763.8516f, 5533.312f, 32.6785f};
					*uParam3 = 1.7896f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 25:
					*uParam2 = {-775.123f, 5542.04f, 32.6934f};
					*uParam3 = 349.4598f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 26:
					*uParam2 = {-766.6f, 5553.1f, 34.4f};
					*uParam3 = 1.046f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 27:
					*uParam2 = {-771.2969f, 5556.745f, 32.6834f};
					*uParam3 = 349.9529f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 28:
					*uParam2 = {-781.6904f, 5555.604f, 32.6802f};
					*uParam3 = 351.5664f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 29:
					*uParam2 = {-769.5516f, 5621.658f, 26.7823f};
					*uParam3 = 235.7381f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 30:
					*uParam2 = {-761.2958f, 5636.444f, 25.4519f};
					*uParam3 = 168.4409f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 31:
					*uParam2 = {-760.2766f, 5661.296f, 22.954f};
					*uParam3 = 164.5044f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 32:
					*uParam2 = {-741.7708f, 5648.583f, 25.8433f};
					*uParam3 = 171.5803f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 33:
					*uParam2 = {-731.1522f, 5650.561f, 27.2619f};
					*uParam3 = 172.6602f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 34:
					*uParam2 = {-721.4506f, 5664.842f, 26.6086f};
					*uParam3 = 175.8839f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 35:
					*uParam2 = {-719.6653f, 5647.082f, 28.1182f};
					*uParam3 = 166.6596f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 36:
					*uParam2 = {-708.6494f, 5641.488f, 29.7045f};
					*uParam3 = 139.2498f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 37:
					*uParam2 = {-698.6087f, 5635.278f, 31.1732f};
					*uParam3 = 130.991f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 38:
					*uParam2 = {-764.6f, 5648.1f, 23.8802f};
					*uParam3 = 183.034f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 39:
					*uParam2 = {-750.9f, 5666.5f, 23.3295f};
					*uParam3 = 231.3595f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 40:
					*uParam2 = {-719.377f, 5680.363f, 25.3398f};
					*uParam3 = 160.6696f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 41:
					*uParam2 = {-698.3569f, 5694.537f, 26.6459f};
					*uParam3 = 147.8193f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 42:
					*uParam2 = {-680.2346f, 5676.271f, 30.6741f};
					*uParam3 = 86.9398f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 43:
					*uParam2 = {-676.3746f, 5655.031f, 32.0498f};
					*uParam3 = 139.4649f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 44:
					*uParam2 = {-680.2036f, 5638.799f, 32.6927f};
					*uParam3 = 134.8275f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 45:
					*uParam2 = {-650.3818f, 5653.84f, 33.0871f};
					*uParam3 = 123.0167f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 46:
					*uParam2 = {-670.8715f, 5583.509f, 38.7761f};
					*uParam3 = 85.3828f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 47:
					*uParam2 = {-743.9585f, 5544.044f, 32.6886f};
					*uParam3 = 10.6683f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 48:
					*uParam2 = {-786.1422f, 5543.069f, 32.7461f};
					*uParam3 = 320.9388f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 49:
					*uParam2 = {-800.3854f, 5544.438f, 32.1822f};
					*uParam3 = 318.5256f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 50:
					*uParam2 = {-808.8489f, 5557.178f, 31.0331f};
					*uParam3 = 284.0945f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 51:
					*uParam2 = {-804.6185f, 5577.981f, 30.1522f};
					*uParam3 = 312.7694f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 52:
					*uParam2 = {-804.7294f, 5593.23f, 28.3762f};
					*uParam3 = 257.0917f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 53:
					*uParam2 = {-796.4553f, 5614.668f, 26.6406f};
					*uParam3 = 245.4986f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 54:
					*uParam2 = {-790.2338f, 5632.483f, 25.0732f};
					*uParam3 = 224.0737f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 55:
					*uParam2 = {-807.922f, 5624.847f, 24.5138f};
					*uParam3 = 240.116f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 56:
					*uParam2 = {-778.2f, 5620.3f, 27f};
					*uParam3 = 221.8036f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 57:
					*uParam2 = {-820.9523f, 5595.459f, 24.6204f};
					*uParam3 = 248.8524f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 58:
					*uParam2 = {-712.2f, 5689.9f, 26f};
					*uParam3 = 156.9858f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 59:
					*uParam2 = {-699.6256f, 5678.481f, 29.242f};
					*uParam3 = 137.245f;
					*uParam4 = func_77(iParam0, 2);
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					*uParam2 = {2504.708f, 3832.864f, 44.2233f};
					*uParam3 = 183.6139f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 1:
					*uParam2 = {2470.234f, 3832.214f, 39.2978f};
					*uParam3 = 221.0469f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 2:
					*uParam2 = {2469.984f, 3815.587f, 39.1223f};
					*uParam3 = 236.1043f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 3:
					*uParam2 = {2472.682f, 3802.595f, 39.5029f};
					*uParam3 = 252.6169f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 4:
					*uParam2 = {2448.337f, 3799.731f, 39.2155f};
					*uParam3 = 245.4931f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 5:
					*uParam2 = {2429.278f, 3803.292f, 38.8134f};
					*uParam3 = 251.2017f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 6:
					*uParam2 = {2461.768f, 3786.931f, 40.1218f};
					*uParam3 = 273.0054f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 7:
					*uParam2 = {2446.433f, 3784.864f, 39.6849f};
					*uParam3 = 253.3649f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 8:
					*uParam2 = {2431.84f, 3775.977f, 39.5771f};
					*uParam3 = 262.8813f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 9:
					*uParam2 = {2426.948f, 3759.106f, 40.5694f};
					*uParam3 = 286.9683f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 10:
					*uParam2 = {2413.091f, 3747.124f, 40.6396f};
					*uParam3 = 291.6124f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 11:
					*uParam2 = {2435.193f, 3749.984f, 41.1655f};
					*uParam3 = 292.603f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 12:
					*uParam2 = {2447.66f, 3752.583f, 41.4906f};
					*uParam3 = 297.6301f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 13:
					*uParam2 = {2458.258f, 3758.142f, 41.1153f};
					*uParam3 = 303.2986f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 14:
					*uParam2 = {2467.802f, 3750.602f, 41.4918f};
					*uParam3 = 303.2986f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 15:
					*uParam2 = {2473.253f, 3734.285f, 41.4643f};
					*uParam3 = 319.8912f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 16:
					*uParam2 = {2474.793f, 3718.189f, 43.5229f};
					*uParam3 = 353.5786f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 17:
					*uParam2 = {2494.569f, 3724.297f, 42.2386f};
					*uParam3 = 354.6885f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 18:
					*uParam2 = {2336.604f, 3786.805f, 35.4554f};
					*uParam3 = 271.7747f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 19:
					*uParam2 = {2449.885f, 3769.517f, 40.3259f};
					*uParam3 = 284.606f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 20:
					*uParam2 = {2486.191f, 3708.932f, 42.8584f};
					*uParam3 = 338.9825f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 21:
					*uParam2 = {2441.525f, 3726.493f, 49.833f};
					*uParam3 = 305.777f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 22:
					*uParam2 = {2435.716f, 3718.48f, 50.9846f};
					*uParam3 = 316.2304f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 23:
					*uParam2 = {2414.73f, 3734.144f, 41.656f};
					*uParam3 = 304.645f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 24:
					*uParam2 = {2397.829f, 3753.812f, 38.2667f};
					*uParam3 = 277.5322f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 25:
					*uParam2 = {2413.961f, 3768.889f, 38.9386f};
					*uParam3 = 262.8003f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 26:
					*uParam2 = {2418.116f, 3784.66f, 38.7937f};
					*uParam3 = 271.0046f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 27:
					*uParam2 = {2402.416f, 3792.671f, 38.1692f};
					*uParam3 = 252.6272f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 28:
					*uParam2 = {2392.174f, 3800.214f, 37.3174f};
					*uParam3 = 233.5119f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 29:
					*uParam2 = {2379.034f, 3800.104f, 36.6627f};
					*uParam3 = 253.7779f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 30:
					*uParam2 = {2421.42f, 3819.218f, 36.6498f};
					*uParam3 = 240.598f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 31:
					*uParam2 = {2433.665f, 3833.4f, 36.8711f};
					*uParam3 = 235.1875f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 32:
					*uParam2 = {2446.784f, 3840.43f, 36.9341f};
					*uParam3 = 232.4636f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 33:
					*uParam2 = {2462.195f, 3846.708f, 37.3552f};
					*uParam3 = 199.2328f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 34:
					*uParam2 = {2477.133f, 3855.754f, 37.2602f};
					*uParam3 = 202.825f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 35:
					*uParam2 = {2450.037f, 3811.51f, 39.475f};
					*uParam3 = 250.1392f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 36:
					*uParam2 = {2485.065f, 3829.442f, 39.1108f};
					*uParam3 = 211.7988f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 37:
					*uParam2 = {2484.83f, 3814.141f, 39.3918f};
					*uParam3 = 229.5693f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 38:
					*uParam2 = {2566.085f, 3806.854f, 64.6304f};
					*uParam3 = 105.4003f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 39:
					*uParam2 = {2585.664f, 3806.854f, 71.7304f};
					*uParam3 = 110.9439f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 40:
					*uParam2 = {2620.499f, 3798.988f, 78.4414f};
					*uParam3 = 80.1436f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 41:
					*uParam2 = {2612.831f, 3816.725f, 77.148f};
					*uParam3 = 105.885f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 42:
					*uParam2 = {2481.003f, 3874.722f, 38.2954f};
					*uParam3 = 168.6165f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 43:
					*uParam2 = {2439.931f, 3869.727f, 36.8359f};
					*uParam3 = 194.6768f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 44:
					*uParam2 = {2415.056f, 3867.74f, 36.4367f};
					*uParam3 = 227.8888f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 45:
					*uParam2 = {2405.057f, 3840.129f, 37.6172f};
					*uParam3 = 237.4134f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 46:
					*uParam2 = {2402.643f, 3831.987f, 37.3666f};
					*uParam3 = 243.847f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 47:
					*uParam2 = {2393.434f, 3820.804f, 37.399f};
					*uParam3 = 274.6625f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 48:
					*uParam2 = {2379.645f, 3814.471f, 37.141f};
					*uParam3 = 261.4475f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 49:
					*uParam2 = {2362.336f, 3795.185f, 36.6862f};
					*uParam3 = 270.3616f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 50:
					*uParam2 = {2347.031f, 3771.605f, 36.6862f};
					*uParam3 = 270.3616f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 51:
					*uParam2 = {2390.352f, 3771.605f, 37.0186f};
					*uParam3 = 277.3893f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 52:
					*uParam2 = {2376.869f, 3747.89f, 43.6471f};
					*uParam3 = 283.6571f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 53:
					*uParam2 = {2397.29f, 3720.224f, 45.2658f};
					*uParam3 = 309.3541f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 54:
					*uParam2 = {2389.842f, 3708.438f, 48.8025f};
					*uParam3 = 328.7773f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 55:
					*uParam2 = {2414.263f, 3688.072f, 55.1156f};
					*uParam3 = 318.0387f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 56:
					*uParam2 = {2425.977f, 3703.052f, 52.2051f};
					*uParam3 = 321.8817f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 57:
					*uParam2 = {2457.983f, 3723.803f, 47.774f};
					*uParam3 = 320.001f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 58:
					*uParam2 = {2467.429f, 3686.109f, 46.7001f};
					*uParam3 = 326.4034f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 59:
					*uParam2 = {2500.671f, 3701.153f, 40.9656f};
					*uParam3 = 343.9347f;
					*uParam4 = func_77(iParam0, 2);
					break;
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					*uParam2 = {-393.9336f, 1106.463f, 324.963f};
					*uParam3 = 3.7402f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 1:
					*uParam2 = {-410.0362f, 1109.404f, 324.9667f};
					*uParam3 = 333.049f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 2:
					*uParam2 = {-428.784f, 1115.099f, 325.868f};
					*uParam3 = 300.9811f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 3:
					*uParam2 = {-447.0386f, 1119.385f, 324.9694f};
					*uParam3 = 291.3791f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 4:
					*uParam2 = {-442.3369f, 1130.731f, 324.9604f};
					*uParam3 = 277.1605f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 5:
					*uParam2 = {-440.9719f, 1142.607f, 324.9557f};
					*uParam3 = 250.3044f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 6:
					*uParam2 = {-446.4467f, 1154.628f, 325.0045f};
					*uParam3 = 248.4445f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 7:
					*uParam2 = {-434.5363f, 1160.321f, 324.9632f};
					*uParam3 = 230.0039f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 8:
					*uParam2 = {-424.4414f, 1172.293f, 325.0043f};
					*uParam3 = 219.6946f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 9:
					*uParam2 = {-421.9871f, 1161.774f, 325.0063f};
					*uParam3 = 219.721f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 10:
					*uParam2 = {-427.4456f, 1148.051f, 325.0044f};
					*uParam3 = 230.6394f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 11:
					*uParam2 = {-428.7997f, 1136.869f, 325.0044f};
					*uParam3 = 260.5906f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 12:
					*uParam2 = {-431.5406f, 1126.397f, 325.0403f};
					*uParam3 = 280.8301f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 13:
					*uParam2 = {-416.0247f, 1120.771f, 324.9593f};
					*uParam3 = 308.4634f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 14:
					*uParam2 = {-419.4272f, 1131.455f, 325.0045f};
					*uParam3 = 267.8754f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 15:
					*uParam2 = {-418.7003f, 1142.939f, 324.962f};
					*uParam3 = 234.7959f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 16:
					*uParam2 = {-408.7494f, 1158.555f, 325.0084f};
					*uParam3 = 202.298f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 17:
					*uParam2 = {-411.2803f, 1169.951f, 324.9431f};
					*uParam3 = 205.6539f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 18:
					*uParam2 = {-398.8847f, 1164.101f, 325.0133f};
					*uParam3 = 184.3107f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 19:
					*uParam2 = {-388.1964f, 1173.05f, 324.8147f};
					*uParam3 = 166.4872f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 20:
					*uParam2 = {-368.8524f, 1165.414f, 324.8589f};
					*uParam3 = 143.9187f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 21:
					*uParam2 = {-378.9884f, 1168.124f, 324.9442f};
					*uParam3 = 138.8804f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 22:
					*uParam2 = {-386.2831f, 1186.969f, 324.8583f};
					*uParam3 = 168.679f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 23:
					*uParam2 = {-424.0227f, 1207.077f, 324.8583f};
					*uParam3 = 192.8885f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 24:
					*uParam2 = {-425.9954f, 1196.52f, 324.8583f};
					*uParam3 = 182.6931f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 25:
					*uParam2 = {-400.9391f, 1177.741f, 324.7394f};
					*uParam3 = 183.8522f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 26:
					*uParam2 = {-414.3408f, 1178.525f, 324.7417f};
					*uParam3 = 190.7249f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 27:
					*uParam2 = {-424.777f, 1183.848f, 324.7417f};
					*uParam3 = 204.1173f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 28:
					*uParam2 = {-438.3099f, 1184.969f, 324.9972f};
					*uParam3 = 216.3494f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 29:
					*uParam2 = {-440.8298f, 1174.33f, 324.9674f};
					*uParam3 = 236.8431f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 30:
					*uParam2 = {-450.9589f, 1165.905f, 324.9547f};
					*uParam3 = 238.6017f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 31:
					*uParam2 = {-459.008f, 1156.905f, 324.9622f};
					*uParam3 = 235.1455f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 32:
					*uParam2 = {-466.6086f, 1151.548f, 324.9625f};
					*uParam3 = 262.671f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 33:
					*uParam2 = {-463.0775f, 1140.172f, 325.0044f};
					*uParam3 = 255.8193f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 34:
					*uParam2 = {-453.6404f, 1141.622f, 325.0044f};
					*uParam3 = 270.7759f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 35:
					*uParam2 = {-468.3044f, 1126.492f, 324.9643f};
					*uParam3 = 263.469f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 36:
					*uParam2 = {-457.6102f, 1126.904f, 324.9546f};
					*uParam3 = 262.384f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 37:
					*uParam2 = {-385.6385f, 1102.252f, 324.7293f};
					*uParam3 = 25.2881f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 38:
					*uParam2 = {-383.8219f, 1093.566f, 324.3149f};
					*uParam3 = 2.7963f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 39:
					*uParam2 = {-390.1671f, 1092.119f, 325.2136f};
					*uParam3 = 20.6423f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 40:
					*uParam2 = {-399.5618f, 1081.56f, 326.7102f};
					*uParam3 = 304.4997f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 41:
					*uParam2 = {-390.9579f, 1075.828f, 323.3234f};
					*uParam3 = 339.4828f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 42:
					*uParam2 = {-386.3601f, 1084.166f, 323.7919f};
					*uParam3 = 354.7784f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 43:
					*uParam2 = {-343.6368f, 1155.187f, 324.7273f};
					*uParam3 = 115.9307f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 44:
					*uParam2 = {-350.9581f, 1163.98f, 324.5156f};
					*uParam3 = 116.0754f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 45:
					*uParam2 = {-359.8979f, 1158.566f, 324.6362f};
					*uParam3 = 120.9973f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 46:
					*uParam2 = {-399.4072f, 1196.483f, 324.7383f};
					*uParam3 = 182.8968f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 47:
					*uParam2 = {-400.8836f, 1210.983f, 325.0406f};
					*uParam3 = 195.0742f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 48:
					*uParam2 = {-381.3676f, 1203.004f, 324.8555f};
					*uParam3 = 162.6808f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 49:
					*uParam2 = {-377.298f, 1218.699f, 324.8556f};
					*uParam3 = 161.6516f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 50:
					*uParam2 = {-416.3955f, 1238.681f, 324.8614f};
					*uParam3 = 196.7896f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 51:
					*uParam2 = {-420.2233f, 1223.627f, 324.8551f};
					*uParam3 = 195.917f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 52:
					*uParam2 = {-449.2621f, 1187.425f, 324.988f};
					*uParam3 = 245.0986f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 53:
					*uParam2 = {-462.3227f, 1187.615f, 324.7824f};
					*uParam3 = 250.3676f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 54:
					*uParam2 = {-472.915f, 1142.98f, 324.9524f};
					*uParam3 = 260.1427f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 55:
					*uParam2 = {-476.2405f, 1120.76f, 324.9513f};
					*uParam3 = 281.8387f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 56:
					*uParam2 = {-480.6375f, 1107.113f, 324.9517f};
					*uParam3 = 330.5185f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 57:
					*uParam2 = {-467.9135f, 1119.13f, 324.975f};
					*uParam3 = 291.4161f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 58:
					*uParam2 = {-472.083f, 1186.256f, 324.4922f};
					*uParam3 = 248.7844f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 59:
					*uParam2 = {-336.9653f, 1155.261f, 324.8132f};
					*uParam3 = 116.8097f;
					*uParam4 = func_77(iParam0, 2);
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					*uParam2 = {457.789f, -1306.329f, 28.3817f};
					*uParam3 = 213.4484f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 1:
					*uParam2 = {462.9742f, -1315.816f, 28.3365f};
					*uParam3 = 211.6687f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 2:
					*uParam2 = {491.3282f, -1343.662f, 28.3462f};
					*uParam3 = 29.1021f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 3:
					*uParam2 = {488.5634f, -1353.807f, 28.365f};
					*uParam3 = 350.4963f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 4:
					*uParam2 = {489.778f, -1362.178f, 28.3936f};
					*uParam3 = 333.8013f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 5:
					*uParam2 = {487.9373f, -1371.324f, 28.3937f};
					*uParam3 = 350.2063f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 6:
					*uParam2 = {491.692f, -1377.681f, 28.4808f};
					*uParam3 = 6.2341f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 7:
					*uParam2 = {508.4521f, -1332.725f, 28.8217f};
					*uParam3 = 81.6066f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 8:
					*uParam2 = {482.3437f, -1302.914f, 28.3646f};
					*uParam3 = 185.9192f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 9:
					*uParam2 = {489.6881f, -1306.12f, 28.375f};
					*uParam3 = 181.4375f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 10:
					*uParam2 = {486.8906f, -1314.552f, 28.3349f};
					*uParam3 = 201.3654f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 11:
					*uParam2 = {510.3459f, -1328.159f, 28.4041f};
					*uParam3 = 38.9104f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 12:
					*uParam2 = {503.6635f, -1316.644f, 28.254f};
					*uParam3 = 78.5885f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 13:
					*uParam2 = {498.5652f, -1306.801f, 28.375f};
					*uParam3 = 181.4375f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 14:
					*uParam2 = {494.3388f, -1296.788f, 27.8975f};
					*uParam3 = 181.588f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 15:
					*uParam2 = {445.3724f, -1312.777f, 33.034f};
					*uParam3 = 231.2194f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 16:
					*uParam2 = {494.6642f, -1289.089f, 28.3994f};
					*uParam3 = 190.9093f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 17:
					*uParam2 = {512.1788f, -1296.798f, 29.0244f};
					*uParam3 = 127.6323f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 18:
					*uParam2 = {516.3178f, -1306.591f, 29.0325f};
					*uParam3 = 105.4519f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 19:
					*uParam2 = {522.4741f, -1315.716f, 28.6153f};
					*uParam3 = 86.1907f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 20:
					*uParam2 = {530.4f, -1324.764f, 28.611f};
					*uParam3 = 86.0417f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 21:
					*uParam2 = {512.5676f, -1266.132f, 29.2571f};
					*uParam3 = 138.7522f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 22:
					*uParam2 = {503.5058f, -1408.527f, 28.4094f};
					*uParam3 = 38.8401f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 23:
					*uParam2 = {494.4435f, -1405.518f, 28.4094f};
					*uParam3 = 10.3526f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 24:
					*uParam2 = {480.3399f, -1404.552f, 28.3783f};
					*uParam3 = 327.4608f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 25:
					*uParam2 = {486.9532f, -1397.729f, 28.4044f};
					*uParam3 = 9.2252f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 26:
					*uParam2 = {478.9936f, -1390.911f, 28.4649f};
					*uParam3 = 301.6067f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 27:
					*uParam2 = {491.3508f, -1387.024f, 28.4781f};
					*uParam3 = 349.894f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 28:
					*uParam2 = {423.8583f, -1342.402f, 34.9472f};
					*uParam3 = 261.565f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 29:
					*uParam2 = {436.9487f, -1354.909f, 32.8767f};
					*uParam3 = 281.1848f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 30:
					*uParam2 = {418.0431f, -1351.691f, 30.4924f};
					*uParam3 = 242.0479f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 31:
					*uParam2 = {420.5738f, -1360.155f, 31.3616f};
					*uParam3 = 258.2115f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 32:
					*uParam2 = {427.6197f, -1367.648f, 32.4927f};
					*uParam3 = 295.2934f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 33:
					*uParam2 = {464.2118f, -1407.325f, 28.4406f};
					*uParam3 = 264.6266f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 34:
					*uParam2 = {473.348f, -1411.325f, 28.4462f};
					*uParam3 = 282.62f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 35:
					*uParam2 = {482.7524f, -1415.458f, 28.2625f};
					*uParam3 = 321.8356f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 36:
					*uParam2 = {495.2037f, -1418.058f, 28.2691f};
					*uParam3 = 7.1158f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 37:
					*uParam2 = {503.2256f, -1399.498f, 29.6255f};
					*uParam3 = 163.0629f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 38:
					*uParam2 = {504.0861f, -1418.874f, 28.399f};
					*uParam3 = 19.1681f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 39:
					*uParam2 = {515.1004f, -1418.266f, 28.4334f};
					*uParam3 = 70.436f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 40:
					*uParam2 = {526.7444f, -1417.327f, 28.3217f};
					*uParam3 = 77.2632f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 41:
					*uParam2 = {537.8759f, -1339.477f, 28.7478f};
					*uParam3 = 32.234f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 42:
					*uParam2 = {523.1588f, -1342.832f, 28.402f};
					*uParam3 = 44.3382f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 43:
					*uParam2 = {516.2181f, -1333.808f, 28.4019f};
					*uParam3 = 42.2223f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 44:
					*uParam2 = {545.4319f, -1321.294f, 28.8519f};
					*uParam3 = 82.4327f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 45:
					*uParam2 = {543.2325f, -1310.26f, 29.2949f};
					*uParam3 = 90.2737f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 46:
					*uParam2 = {519.066f, -1293.935f, 27.1144f};
					*uParam3 = 165.5317f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 47:
					*uParam2 = {526.7755f, -1289.459f, 29.7686f};
					*uParam3 = 143.1124f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 48:
					*uParam2 = {523.58f, -1272.328f, 30.0824f};
					*uParam3 = 138.49f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 49:
					*uParam2 = {524.081f, -1260.682f, 29.5842f};
					*uParam3 = 132.1786f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 50:
					*uParam2 = {517.0681f, -1239.373f, 29.9303f};
					*uParam3 = 154.6133f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 51:
					*uParam2 = {516.2507f, -1253.02f, 29.6427f};
					*uParam3 = 162.9373f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 52:
					*uParam2 = {513.244f, -1278.351f, 29.7743f};
					*uParam3 = 150.8734f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 53:
					*uParam2 = {493.7339f, -1268.213f, 28.392f};
					*uParam3 = 179.546f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 54:
					*uParam2 = {494.1401f, -1281.491f, 28.394f};
					*uParam3 = 175.0507f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 55:
					*uParam2 = {555.4178f, -1356.743f, 28.7709f};
					*uParam3 = 50.8085f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 56:
					*uParam2 = {475.9386f, -1304.794f, 32.0473f};
					*uParam3 = 112.0399f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 57:
					*uParam2 = {465.516f, -1301.604f, 32.0473f};
					*uParam3 = 189.1235f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 58:
					*uParam2 = {440.8456f, -1321.148f, 30.3086f};
					*uParam3 = 235.1875f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 59:
					*uParam2 = {421.228f, -1316.188f, 30.3078f};
					*uParam3 = 236.0292f;
					*uParam4 = func_77(iParam0, 2);
					break;
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					*uParam2 = {-1432.451f, 236.9887f, 59.1671f};
					*uParam3 = 127.6804f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 1:
					*uParam2 = {-1434.54f, 243.4075f, 59.3382f};
					*uParam3 = 176.5221f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 2:
					*uParam2 = {-1425.965f, 233.6748f, 58.9327f};
					*uParam3 = 67.1914f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 3:
					*uParam2 = {-1431.833f, 176.7196f, 55.6359f};
					*uParam3 = 115.4533f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 4:
					*uParam2 = {-1436.571f, 168.3388f, 54.8029f};
					*uParam3 = 42.4646f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 5:
					*uParam2 = {-1441.14f, 162.3594f, 54.1846f};
					*uParam3 = 5.2323f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 6:
					*uParam2 = {-1526.297f, 160.2353f, 53.2037f};
					*uParam3 = 277.6807f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 7:
					*uParam2 = {-1518.497f, 145.7663f, 54.7527f};
					*uParam3 = 310.257f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 8:
					*uParam2 = {-1506.654f, 132.8194f, 54.7529f};
					*uParam3 = 324.8665f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 9:
					*uParam2 = {-1495.287f, 118.9496f, 54.7569f};
					*uParam3 = 328.5237f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 10:
					*uParam2 = {-1482.5f, 114.8686f, 54.589f};
					*uParam3 = 341.3174f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 11:
					*uParam2 = {-1465.16f, 114.8327f, 52.2589f};
					*uParam3 = 357.6763f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 12:
					*uParam2 = {-1451.507f, 64.7578f, 51.4041f};
					*uParam3 = 91.7588f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 13:
					*uParam2 = {-1461.18f, 63.8165f, 51.8802f};
					*uParam3 = 26.7651f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 14:
					*uParam2 = {-1502.689f, 44.4251f, 53.8926f};
					*uParam3 = 308.9227f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 15:
					*uParam2 = {-1470.511f, 65.7823f, 52.315f};
					*uParam3 = 20.0152f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 16:
					*uParam2 = {-1485.597f, 73.3039f, 53.7206f};
					*uParam3 = 353.3321f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 17:
					*uParam2 = {-1598.528f, 149.7495f, 58.6949f};
					*uParam3 = 277.3246f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 18:
					*uParam2 = {-1583.425f, 155.9397f, 57.9714f};
					*uParam3 = 236.3493f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 19:
					*uParam2 = {-1561.721f, 153.229f, 56.9434f};
					*uParam3 = 282.9456f;
					*uParam4 = func_77(iParam0, 0);
					break;
				
				case 20:
					*uParam2 = {-1597.874f, 138.8909f, 58.9224f};
					*uParam3 = 291.1977f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 21:
					*uParam2 = {-1624.61f, 118.2495f, 60.9528f};
					*uParam3 = 286.5444f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 22:
					*uParam2 = {-1635.546f, 98.7833f, 61.5816f};
					*uParam3 = 307.8016f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 23:
					*uParam2 = {-1615.593f, 74.5104f, 60.5005f};
					*uParam3 = 358.8846f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 24:
					*uParam2 = {-1623.266f, 72.784f, 60.7418f};
					*uParam3 = 303.1707f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 25:
					*uParam2 = {-1611.091f, 66.0932f, 60.1192f};
					*uParam3 = 8.1702f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 26:
					*uParam2 = {-1485.756f, 49.183f, 53.0408f};
					*uParam3 = 329.1895f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 27:
					*uParam2 = {-1464.841f, 52.066f, 52.0575f};
					*uParam3 = 26.7727f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 28:
					*uParam2 = {-1450.809f, 49.7653f, 51.6797f};
					*uParam3 = 42.6481f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 29:
					*uParam2 = {-1462.326f, 88.4265f, 53.8826f};
					*uParam3 = 353.3917f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 30:
					*uParam2 = {-1491.87f, 95.0945f, 54.1122f};
					*uParam3 = 314.473f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 31:
					*uParam2 = {-1476.808f, 108.3742f, 53.8967f};
					*uParam3 = 348.5514f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 32:
					*uParam2 = {-1443.964f, 153.6641f, 53.4228f};
					*uParam3 = 5.4015f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 33:
					*uParam2 = {-1422.558f, 161.544f, 55.0401f};
					*uParam3 = 41.9873f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 34:
					*uParam2 = {-1425.595f, 187.9517f, 56.689f};
					*uParam3 = 129.5252f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 35:
					*uParam2 = {-1411.395f, 239.4108f, 58.8958f};
					*uParam3 = 94.2972f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 36:
					*uParam2 = {-1415.572f, 249.2832f, 59.1409f};
					*uParam3 = 122.1957f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 37:
					*uParam2 = {-1459.738f, 238.6189f, 58.7949f};
					*uParam3 = 180.7222f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 38:
					*uParam2 = {-1573.812f, 161.2271f, 57.4846f};
					*uParam3 = 134.8161f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 39:
					*uParam2 = {-1589.462f, 172.0972f, 57.9565f};
					*uParam3 = 211.4448f;
					*uParam4 = func_77(iParam0, 1);
					break;
				
				case 40:
					*uParam2 = {-1599.631f, 177.347f, 58.4655f};
					*uParam3 = 218.6622f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 41:
					*uParam2 = {-1605.247f, 166.7319f, 58.6104f};
					*uParam3 = 240.273f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 42:
					*uParam2 = {-1610.489f, 133.2583f, 59.7152f};
					*uParam3 = 286.0001f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 43:
					*uParam2 = {-1609.133f, 118.5496f, 59.985f};
					*uParam3 = 309.8568f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 44:
					*uParam2 = {-1600.147f, 104.7807f, 60.079f};
					*uParam3 = 345.0445f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 45:
					*uParam2 = {-1595.336f, 88.6422f, 59.9101f};
					*uParam3 = 325.4662f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 46:
					*uParam2 = {-1571.039f, 95.7035f, 57.4104f};
					*uParam3 = 320.9921f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 47:
					*uParam2 = {-1528.822f, 60.1519f, 56.3681f};
					*uParam3 = 299.9443f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 48:
					*uParam2 = {-1581.063f, 69.4907f, 59.9072f};
					*uParam3 = 302.81f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 49:
					*uParam2 = {-1502.428f, 75.9977f, 54.5965f};
					*uParam3 = 333.9787f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 50:
					*uParam2 = {-1533.281f, 81.1755f, 55.8724f};
					*uParam3 = 288.1328f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 51:
					*uParam2 = {-1533.984f, 102.1409f, 55.8727f};
					*uParam3 = 232.9465f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 52:
					*uParam2 = {-1598.389f, 49.5038f, 59.7089f};
					*uParam3 = 24.7707f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 53:
					*uParam2 = {-1613.303f, 45.0376f, 60.9909f};
					*uParam3 = 352.9884f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 54:
					*uParam2 = {-1632.785f, 50.5315f, 61.543f};
					*uParam3 = 325.0906f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 55:
					*uParam2 = {-1636.258f, 69.9035f, 61.7993f};
					*uParam3 = 291.5305f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 56:
					*uParam2 = {-1429.691f, 143.2913f, 53.2468f};
					*uParam3 = 17.521f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 57:
					*uParam2 = {-1408.523f, 152.6476f, 54.6591f};
					*uParam3 = 54.2465f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 58:
					*uParam2 = {-1403.501f, 245.4762f, 59.2192f};
					*uParam3 = 112.9726f;
					*uParam4 = func_77(iParam0, 2);
					break;
				
				case 59:
					*uParam2 = {-1417.563f, 260.8751f, 59.5187f};
					*uParam3 = 146.682f;
					*uParam4 = func_77(iParam0, 2);
					break;
			}
			break;
	}
}

float func_77(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_9359;
				
				case 1:
					return Global_262145.f_9360;
				
				case 2:
					return Global_262145.f_9361;
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_9362;
				
				case 1:
					return Global_262145.f_9363;
				
				case 2:
					return Global_262145.f_9364;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_9365;
				
				case 1:
					return Global_262145.f_9366;
				
				case 2:
					return Global_262145.f_9367;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_9368;
				
				case 1:
					return Global_262145.f_9369;
				
				case 2:
					return Global_262145.f_9370;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_9371;
				
				case 1:
					return Global_262145.f_9372;
				
				case 2:
					return Global_262145.f_9373;
				
				default:
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_9374;
				
				case 1:
					return Global_262145.f_9375;
				
				case 2:
					return Global_262145.f_9376;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_9377;
				
				case 1:
					return Global_262145.f_9378;
				
				case 2:
					return Global_262145.f_9379;
				
				default:
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_9380;
				
				case 1:
					return Global_262145.f_9381;
				
				case 2:
					return Global_262145.f_9382;
				
				default:
			}
			break;
	}
	return 1f;
}

void func_78(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	if (iParam0)
	{
		Global_2404956.f_1139 = iParam1;
		Global_2404956.f_1140 = iParam2;
		Global_2404956.f_1141 = iParam10;
		func_72();
		func_79(8, 0, 0);
		Global_2404956.f_634 = 1;
		Global_2404956.f_1142 = iParam11;
		Global_2404956.f_1145 = iParam3;
		Global_2404956.f_1146 = iParam4;
		Global_2404956.f_1143 = iParam5;
		Global_2404956.f_1144 = iParam6;
		Global_2404956.f_1147 = iParam7;
		Global_2404956.f_1148 = iParam8;
		Global_2404956.f_1149 = iParam9;
	}
	else
	{
		func_72();
		func_79(0, 0, 0);
		Global_2404956.f_634 = 0;
	}
}

void func_79(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2409529 = 0;
	}
	Global_2404956.f_469 = iParam0;
	Global_2404956.f_469.f_1 = get_id_of_this_thread();
	Global_2404956.f_469.f_2 = iParam1;
	Global_2404956.f_469.f_3 = iParam2;
}

auto func_80()
{
	return Global_1573832;
}

bool func_81(int iParam0)
{
	if (GAMEPLAY::IS_BIT_SET(Global_1587523[iParam0 /*444*/].f_250.f_7, 14))
	{
		return true;
	}
	if (GAMEPLAY::IS_BIT_SET(Global_1587523[iParam0 /*444*/].f_250.f_7, 11))
	{
		return true;
	}
	return false;
}

bool func_82(int iParam0, int iParam1, int iParam2)
{
	if (Global_1587523[iParam0 /*444*/].f_250.f_9 > 0)
	{
		if (iParam1)
		{
			if (GAMEPLAY::IS_BIT_SET(Global_1587523[iParam0 /*444*/].f_250.f_7, false))
			{
				return true;
			}
		}
		else
		{
			return true;
		}
	}
	if (!iParam2)
	{
		if (func_83(iParam0))
		{
			return true;
		}
	}
	return false;
}

int func_83(int iParam0)
{
	if (iParam0 != func_48())
	{
		if (func_658(iParam0, 1, 1))
		{
			if (Global_2418472[iParam0 /*313*/].f_305.f_1 != -1)
			{
				return func_84(Global_2418472[iParam0 /*313*/].f_305.f_1) == 0;
			}
		}
	}
	return false;
}

int func_84(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
	}
	return -1;
}

void func_85(int iParam0)
{
	if (func_15(iParam0) != 0)
	{
		func_292(iParam0);
		func_86(iParam0);
	}
}

void func_86(int iParam0)
{
	int iVar0;
	var[] uVar1 = new var[3];
	int iVar5;
	int iVar6;
	int iVar7;
	int[] iVar8 = new int[3];
	
	if (iLocal_3350 == -1)
	{
		return;
	}
	if (func_240(0, 0))
	{
		return;
	}
	iVar6 = Global_262145.f_9139 + 1000 - func_9(&(Local_96.f_1.f_1), 0, 0);
	if (iVar6 < 0)
	{
		iVar6 = 0;
	}
	if (func_15(iParam0) == 0)
	{
		return;
	}
	if (iVar6 > 30000)
	{
		iVar7 = 1;
	}
	else
	{
		iVar7 = 6;
	}
	if (!GAMEPLAY::IS_BIT_SET(Local_394[iLocal_3350 /*5*/].f_4, 12))
	{
		if (!func_145(iLocal_3350))
		{
			func_108(iVar6, iVar7, func_109());
			return;
		}
	}
	func_107(iVar6);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Local_1241[iParam0 /*68*/].f_53[iVar0 /*4*/] = -1;
		Local_1241[iParam0 /*68*/].f_53[iVar0 /*4*/].f_1 = -1;
		Local_1241[iParam0 /*68*/].f_53[iVar0 /*4*/].f_2 = func_48();
		Local_1241[iParam0 /*68*/].f_53[iVar0 /*4*/].f_3 = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Local_1241[iParam0 /*68*/].f_53[iVar0 /*4*/] = Local_96.f_6[iParam0 /*204*/].f_74[iVar0 /*4*/];
		Local_1241[iParam0 /*68*/].f_53[iVar0 /*4*/].f_1 = Local_96.f_6[iParam0 /*204*/].f_74[iVar0 /*4*/].f_1;
		Local_1241[iParam0 /*68*/].f_53[iVar0 /*4*/].f_2 = Local_96.f_6[iParam0 /*204*/].f_74[iVar0 /*4*/].f_2;
		Local_1241[iParam0 /*68*/].f_53[iVar0 /*4*/].f_3 = to_float(func_59(Local_96.f_6[iParam0 /*204*/].f_74[iVar0 /*4*/].f_3));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uVar1[iVar0] = func_59(Local_1241[iParam0 /*68*/].f_53[iVar0 /*4*/].f_3);
		iVar8[iVar0] = 0;
		if (func_106(1))
		{
			if (Local_1241[iParam0 /*68*/].f_53[iVar0 /*4*/].f_1 != -1)
			{
				if (network_is_player_active(Local_1241[iParam0 /*68*/].f_53[iVar0 /*4*/].f_1))
				{
					if (func_55(Local_1241[iParam0 /*68*/].f_53[iVar0 /*4*/].f_1, 1))
					{
						iVar8[iVar0] = func_127(Local_1241[iParam0 /*68*/].f_53[iVar0 /*4*/].f_1, -2, 0, 0);
					}
				}
			}
		}
		iVar0++;
	}
	iVar5 = func_59(func_104(iParam0, iLocal_3350));
	func_87(Local_1241[iParam0 /*68*/].f_53[0 /*4*/].f_1, Local_1241[iParam0 /*68*/].f_53[1 /*4*/].f_1, Local_1241[iParam0 /*68*/].f_53[2 /*4*/].f_1, uVar1[0], uVar1[1], uVar1[2], iVar5, iVar6, &uLocal_3353, iVar7, func_109(), 1, iVar8[0], iVar8[1], iVar8[2]);
	if (Local_1241[iParam0 /*68*/].f_53[0 /*4*/] == participant_id_to_int())
	{
		if (!GAMEPLAY::IS_BIT_SET(iLocal_555, 23))
		{
			play_sound_frontend(-1, "Enter_1st", "GTAO_FM_Events_Soundset", 0);
			GAMEPLAY::SET_BIT(&iLocal_555, 23);
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(iLocal_555, 23))
	{
		play_sound_frontend(-1, "Lose_1st", "GTAO_FM_Events_Soundset", 0);
		GAMEPLAY::CLEAR_BIT(&iLocal_555, 23);
	}
}

void func_87(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, auto uParam8, int iParam9, char* sParam10, int iParam11, auto uParam12, auto uParam13, auto uParam14)
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	
	if (func_101(0) == 0)
	{
		return;
	}
	func_100();
	iVar1 = 0;
	if (((Global_2444115[0] != iParam0 || Global_2444115[1] != iParam1) || Global_2444115[2] != iParam2) || *uParam8)
	{
		iVar1 = 1;
	}
	Global_2444115[0] = iParam0;
	Global_2444115[1] = iParam1;
	Global_2444115[2] = iParam2;
	Global_2444115[3] = 0;
	Global_2444115[4] = 0;
	if (Global_2444115[0] != func_48())
	{
		if (iVar1 == 1)
		{
			sVar0 = get_player_name(Global_2444115[0]);
			Global_2444121[0 /*16*/] = {func_99(1, sVar0)};
		}
		if (iParam3 > 0)
		{
			func_96(iParam3, &(Global_2444121[0 /*16*/]), -1, 109, 8, 1, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, uParam12);
		}
	}
	if (Global_2444115[1] != func_48())
	{
		if (iVar1 == 1)
		{
			sVar0 = get_player_name(Global_2444115[1]);
			Global_2444121[1 /*16*/] = {func_99(2, sVar0)};
		}
		if (iParam4 > 0)
		{
			func_96(iParam4, &(Global_2444121[1 /*16*/]), -1, 108, 7, 1, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, uParam13);
		}
	}
	if (Global_2444115[2] != func_48())
	{
		if (iVar1 == 1)
		{
			sVar0 = get_player_name(Global_2444115[2]);
			Global_2444121[2 /*16*/] = {func_99(3, sVar0)};
		}
		if (iParam5 > 0)
		{
			func_96(iParam5, &(Global_2444121[2 /*16*/]), -1, 107, 6, 1, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, uParam14);
		}
	}
	switch (iParam11)
	{
		case 0:
			if (player_id() != func_48())
			{
				if (func_92(player_id()) == 0)
				{
					func_96(iParam6, get_player_name(player_id()), -1, 1, 5, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
				}
			}
			break;
		
		case 1:
			if (func_92(player_id()) == 0)
			{
				func_96(iParam6, "HUD_USCORE", -1, 1, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
			}
			break;
		
		case 2:
			if (func_92(player_id()) == 0)
			{
				func_96(iParam6, "HUD_UBEST", -1, 1, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
			}
			break;
		
		case 3:
			break;
	}
	sVar2 = "HUD_COUNTDOWN";
	if (!func_91(sParam10))
	{
		sVar2 = sParam10;
	}
	func_88(iParam7, sVar2, 0, 0, -1, 0, 3, 0, iParam9, 0, 0, 0, iParam9, 0, 0, 0);
	*uParam8 = 0;
}

void func_88(auto uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, auto uParam8, int iParam9, int iParam10, int iParam11, auto uParam12, int iParam13, int iParam14, int iParam15)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = false;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_90(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1339940.f_1 = 1;
		func_89(7, iVar0);
		Global_1339940.f_4109[iVar0] = uParam0;
		StringCopy(&(Global_1339940.f_4109.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1339940.f_4109.f_172[iVar0] = iParam2;
		Global_1339940.f_4109.f_216[iVar0] = iParam3;
		Global_1339940.f_4109.f_183[iVar0] = iParam4;
		Global_1339940.f_4109.f_194[iVar0] = iParam5;
		Global_1339940.f_4109.f_249[iVar0] = iParam6;
		Global_1339940.f_4109.f_260[iVar0] = iParam7;
		Global_1339940.f_4109.f_205[iVar0] = uParam8;
		Global_1339940.f_4109.f_314[iVar0] = iParam9;
		Global_1339940.f_4109.f_325[iVar0] = iParam10;
		Global_1339940.f_4109.f_357[iVar0] = iParam11;
		Global_1339940.f_4109.f_238[iVar0] = uParam12;
		Global_1339940.f_4109.f_271[iVar0] = iParam13;
		Global_1339940.f_4109.f_368[iVar0] = iParam14;
		Global_1339940.f_4109.f_379[iVar0] = iParam15;
	}
}

void func_89(int iParam0, int iParam1)
{
	GAMEPLAY::SET_BIT(&(Global_1339940.f_4726[iParam0]), iParam1);
}

int func_90(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_1339940.f_4726[iParam0], iParam1);
}

bool func_91(char* sParam0)
{
	if (is_string_null(sParam0))
	{
		return true;
	}
	else if (are_strings_equal(sParam0, "") || are_strings_equal(sParam0, "0"))
	{
		return true;
	}
	return false;
}

int func_92(int iParam0)
{
	if (iParam0 == player_id())
	{
		if ((func_95() && !func_94()) || func_93(player_id(), 21))
		{
			return true;
		}
		if (func_18(&(Global_1573883.f_13)))
		{
			if (!func_5(&(Global_1573883.f_13), Global_262145.f_14, 0))
			{
				return true;
			}
			func_3(&(Global_1573883.f_13));
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(Global_1610316[iParam0 /*174*/].f_1, 10))
	{
		return true;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1610316[iParam0 /*174*/].f_1, 9);
}

int func_93(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_2418472[iParam0 /*313*/].f_206, iParam1);
}

auto func_94()
{
	return Global_1312416.f_1;
}

auto func_95()
{
	return Global_1312416;
}

void func_96(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = -1;
	iVar1 = false;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_90(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1339940.f_1 = 1;
		func_89(6, iVar0);
		Global_1339940.f_3557[iVar0] = iParam0;
		StringCopy(&(Global_1339940.f_3557.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1339940.f_3557.f_183[iVar0] = iParam3;
		Global_1339940.f_3557.f_172[iVar0] = iParam2;
		Global_1339940.f_3557.f_260[iVar0] = iParam4;
		Global_1339940.f_3557.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1339940.f_3557.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1339940.f_3557.f_443[iVar0] = iParam7;
		Global_1339940.f_3557.f_454[iVar0] = iParam8;
		Global_1339940.f_3557.f_497[iVar0] = iParam9;
		Global_1339940.f_3557.f_508[iVar0] = iParam10;
		Global_1339940.f_3557.f_205[iVar0] = iParam11;
		Global_1339940.f_3557.f_216[iVar0] = iParam12;
		Global_1339940.f_3557.f_227[iVar0] = iParam13;
		Global_1339940.f_3557.f_238[iVar0] = iParam14;
		Global_1339940.f_3557.f_249[iVar0] = iParam15;
		Global_1339940.f_3557.f_519[iVar0] = iParam16;
		Global_1339940.f_3557.f_530[iVar0] = iParam17;
		Global_1339940.f_3557.f_541[iVar0] = iParam18;
		if (iParam15 == 4 && func_98())
		{
			Global_1339940.f_941 = 1;
		}
		if (GAMEPLAY::IS_PC_VERSION())
		{
			iVar2 = 0;
			_get_screen_active_resolution(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1339940.f_945 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1339940.f_944 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1339940.f_941 = 1;
			}
			if (func_97())
			{
				Global_1339940.f_945 = 1;
			}
		}
	}
}

bool func_97()
{
	int iVar0;
	auto uVar1;
	
	if (GAMEPLAY::IS_PC_VERSION())
	{
		_get_screen_active_resolution(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return true;
		}
	}
	return false;
}

bool func_98()
{
	if ((_get_ui_language_id() == 8 || _get_ui_language_id() == 9) || _get_ui_language_id() == 10)
	{
		return true;
	}
	return false;
}

struct<16> func_99(int iParam0, char* sParam1)
{
	char[64] cVar0;
	
	switch (iParam0)
	{
		case 0:
			StringCopy(&cVar0, sParam1, 64);
			return cVar0;
			break;
		
		case 1:
			StringCopy(&cVar0, _get_label_text("HUD_POSFIRST"), 64);
			break;
		
		case 2:
			StringCopy(&cVar0, _get_label_text("HUD_POSSECOND"), 64);
			break;
		
		case 3:
			StringCopy(&cVar0, _get_label_text("HUD_POSTHIRD"), 64);
			break;
		
		case 4:
			StringCopy(&cVar0, _get_label_text("HUD_POSFOURTH"), 64);
			break;
		
		case 5:
			StringCopy(&cVar0, _get_label_text("HUD_POSFIFTH"), 64);
			break;
	}
	StringConCat(&cVar0, " ", 64);
	StringConCat(&cVar0, sParam1, 64);
	return cVar0;
}

void func_100()
{
	hide_hud_component_this_frame(8);
	hide_hud_component_this_frame(9);
	hide_hud_component_this_frame(6);
	hide_hud_component_this_frame(7);
	Global_2444577 = 1;
}

bool func_101(int iParam0)
{
	if (func_103())
	{
		return false;
	}
	if (func_102())
	{
		return false;
	}
	if (!iParam0)
	{
		if (func_658(player_id(), 1, 1) == 0)
		{
			return false;
		}
	}
	return true;
}

int func_102()
{
	return Global_1587523[player_id() /*444*/].f_180 != 0;
}

int func_103()
{
	return GAMEPLAY::IS_BIT_SET(Global_2359301, 12);
}

float func_104(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	
	fVar0 = func_105(iParam0, iParam1);
	fVar1 = func_6(iParam0, iParam1);
	return fVar0 + fVar1;
}

auto func_105(int iParam0, int iParam1)
{
	return Local_96.f_6[iParam0 /*204*/].f_36[iParam1];
}

int func_106(int iParam0)
{
	return func_55(player_id(), iParam0);
}

void func_107(int iParam0)
{
	if (IntToFloat(iParam0) < get_frame_time())
	{
		if (GAMEPLAY::IS_BIT_SET(Global_2460486.f_4563, false))
		{
			if (!is_string_null_or_empty(&(Global_2460486.f_4565)))
			{
				set_radio_to_station_name(&(Global_2460486.f_4565));
			}
			set_user_radio_control_enabled(1);
			trigger_music_event("FM_COUNTDOWN_30S_FIRA");
			stop_audio_scene("GTAO_FM_Events_30_Sec_Countdown_Scene");
			set_audio_flag("DisableFlightMusic", 0);
			set_audio_flag("WantedMusicDisabled", 0);
			set_audio_flag("AllowScoreAndRadio", 0);
			if (Global_2460486.f_4573 > -1)
			{
				release_sound_id(Global_2460486.f_4573);
				Global_2460486.f_4573 = -1;
			}
			Global_2460486.f_4563 = 0;
		}
	}
	else if (iParam0 < 30000)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_2460486.f_4563, false))
		{
			if (GAMEPLAY::IS_BIT_SET(Global_2460486.f_4563, 4))
			{
				if (!GAMEPLAY::IS_BIT_SET(Global_2460486.f_4563, 2))
				{
					if (_0x109697E2FFBAC8A1())
					{
						if ((!are_strings_equal(get_radio_station_name(get_player_radio_station_index()), "OFF") && is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0)) && !is_string_null_or_empty(&(Global_2460486.f_4565)))
						{
							StringCopy(&(Global_2460486.f_4565), "", 32);
							trigger_music_event("FM_COUNTDOWN_30S_FIRA");
							stop_audio_scene("GTAO_FM_Events_30_Sec_Countdown_Scene");
							set_audio_flag("DisableFlightMusic", 0);
							set_audio_flag("WantedMusicDisabled", 0);
							set_audio_flag("AllowScoreAndRadio", 0);
							set_user_radio_control_enabled(1);
							GAMEPLAY::SET_BIT(&(Global_2460486.f_4563), 2);
						}
					}
				}
				else if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0) && GAMEPLAY::IS_BIT_SET(Global_2460486.f_4563, 5))
				{
					set_radio_to_station_name("OFF");
				}
			}
			else if (!GAMEPLAY::IS_BIT_SET(Global_2460486.f_4563, true))
			{
				if (iParam0 < 10000)
				{
					trigger_music_event("FM_COUNTDOWN_10S");
				}
				else if (iParam0 < 20000)
				{
					trigger_music_event("FM_COUNTDOWN_20S");
				}
				else
				{
					trigger_music_event("FM_COUNTDOWN_30S");
				}
				start_audio_scene("GTAO_FM_Events_30_Sec_Countdown_Scene");
				GAMEPLAY::SET_BIT(&(Global_2460486.f_4563), true);
			}
			else if (!GAMEPLAY::IS_BIT_SET(Global_2460486.f_4563, 4))
			{
				if (iParam0 < 27500)
				{
					if (get_player_radio_station_genre() != 0)
					{
						if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0) && !_0x0626A247D2405330())
						{
							StringCopy(&(Global_2460486.f_4565), get_player_radio_station_name(), 32);
							set_radio_to_station_name("OFF");
						}
						set_user_radio_control_enabled(1);
						GAMEPLAY::SET_BIT(&(Global_2460486.f_4563), 4);
					}
				}
			}
			if (iParam0 < 10000)
			{
				if (!GAMEPLAY::IS_BIT_SET(Global_2460486.f_4563, 3))
				{
					Global_2460486.f_4573 = AUDIO::GET_SOUND_ID();
					play_sound_frontend(Global_2460486.f_4573, "10S", "MP_MISSION_COUNTDOWN_SOUNDSET", 0);
					GAMEPLAY::SET_BIT(&(Global_2460486.f_4563), 3);
				}
			}
		}
		else if (iParam0 > 10000)
		{
			if (!GAMEPLAY::IS_BIT_SET(Global_2460486.f_4563, false))
			{
				Global_2460486.f_4563 = 0;
				Global_2460486.f_4573 = -1;
				prepare_music_event("FM_COUNTDOWN_30S_KILL");
				set_user_radio_control_enabled(0);
				trigger_music_event("FM_PRE_COUNTDOWN_30S");
				set_audio_flag("DisableFlightMusic", 1);
				set_audio_flag("WantedMusicDisabled", 1);
				set_audio_flag("AllowScoreAndRadio", 1);
				GAMEPLAY::SET_BIT(&(Global_2460486.f_4563), false);
				if (!is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0) || GAMEPLAY::IS_BIT_SET(Global_2460486.f_4563, 2))
				{
					GAMEPLAY::SET_BIT(&(Global_2460486.f_4563), 2);
					GAMEPLAY::SET_BIT(&(Global_2460486.f_4563), 5);
				}
				else
				{
					GAMEPLAY::CLEAR_BIT(&(Global_2460486.f_4563), 5);
					GAMEPLAY::CLEAR_BIT(&(Global_2460486.f_4563), 2);
				}
			}
		}
	}
	else if (iParam0 < 40000 && iParam0 > 30000)
	{
		if (!GAMEPLAY::IS_BIT_SET(Global_2460486.f_4563, false))
		{
			Global_2460486.f_4563 = 0;
			Global_2460486.f_4573 = -1;
			prepare_music_event("FM_COUNTDOWN_30S_KILL");
			set_user_radio_control_enabled(0);
			trigger_music_event("FM_PRE_COUNTDOWN_30S");
			set_audio_flag("DisableFlightMusic", 1);
			set_audio_flag("WantedMusicDisabled", 1);
			set_audio_flag("AllowScoreAndRadio", 1);
			GAMEPLAY::SET_BIT(&(Global_2460486.f_4563), false);
			if (!is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
			{
				GAMEPLAY::SET_BIT(&(Global_2460486.f_4563), 2);
				GAMEPLAY::SET_BIT(&(Global_2460486.f_4563), 5);
			}
			else
			{
				GAMEPLAY::CLEAR_BIT(&(Global_2460486.f_4563), 2);
				GAMEPLAY::CLEAR_BIT(&(Global_2460486.f_4563), 5);
			}
		}
	}
}

void func_108(int iParam0, int iParam1, char* sParam2)
{
	char* sVar0;
	
	if (func_101(0) == 0)
	{
		return;
	}
	sVar0 = "HUD_COUNTDOWN";
	if (!func_91(sParam2))
	{
		sVar0 = sParam2;
	}
	func_88(iParam0, sVar0, 0, 0, -1, 0, 3, 0, iParam1, 0, 0, 0, iParam1, 0, 0, 0);
}

char* func_109()
{
	return "HUD_COUNTDOWN";
	switch (func_195(player_id()))
	{
		case 131:
			return "AET_HOT_TARG";
		
		case 132:
			return "AET_CHK_COLL";
		
		case 133:
			switch (func_110())
			{
				case 0:
					return "AET_CHALL_LJ";
				
				case 1:
					return "AET_CHALL_LS";
				
				case 2:
					return "AET_CHALL_HS";
				
				case 3:
					return "AET_CHALL_LST";
				
				case 4:
					return "AET_CHALL_LW";
				
				case 5:
					return "AET_CHALL_NC";
				
				case 6:
					return "AET_CHALL_LP";
				
				case 7:
					return "AET_CHALL_VS";
				
				case 8:
					return "AET_CHALL_NM";
				
				case 9:
					return "AET_CHALL_RD";
				
				case 10:
					return "AET_CHALL_LF";
				
				case 11:
					return "AET_CHALL_LFL";
				
				case 12:
					return "AET_CHALL_LFI";
				
				case 13:
					return "AET_CHALL_LB";
				
				case 14:
					return "AET_CHALL_MB";
				
				case 15:
					return "AET_CHALL_HSH";
				
				case 16:
					return "AET_CHALL_DB";
				
				case 17:
					return "AET_CHALL_ML";
				
				case 18:
					return "AET_CHALL_LSN";
				
				default:
			}
			break;
		
		case 136:
			return "AET_PENNED";
		
		case 138:
			return "AET_PARCEL";
		
		case 139:
			return "AET_PROPERTY";
		
		case 140:
			return "AET_DDROP";
		
		case 141:
			return "AET_KCASTLE";
		
		case 144:
			return "AET_BLAST";
		
		case 129:
			return "AET_UWARF";
		
		case 146:
			return "AET_BEAST";
	}
	return "";
}

int func_110()
{
	if (func_195(player_id()) == 133)
	{
		return Global_2460486.f_4647;
	}
	return -1;
}

auto func_111(int iParam0)
{
	return Local_96.f_6[iParam0 /*204*/].f_72;
}

bool func_112(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	if (is_string_null_or_empty(sParam0))
	{
		return false;
	}
	if (_0x43E4111189E54F0E(sParam0) > 23)
	{
		return false;
	}
	if (is_string_null_or_empty(sParam1))
	{
		return false;
	}
	if (_0x43E4111189E54F0E(sParam1) > 63)
	{
		return false;
	}
	if (func_122(sParam0, sParam1) && Global_1312577.f_54 == Global_1312577.f_56)
	{
		return false;
	}
	func_116();
	Global_1312577 = 9;
	StringCopy(&(Global_1312577.f_1), get_this_script_name(), 24);
	Global_1312577.f_7 = get_hash_key(&(Global_1312577.f_1));
	StringCopy(&(Global_1312577.f_10), sParam0, 16);
	StringCopy(&(Global_1312577.f_14), sParam1, 64);
	Global_1312577.f_56 = iParam3;
	func_115();
	func_114(iParam2);
	func_113();
	return true;
}

void func_113()
{
	GAMEPLAY::SET_BIT(&(Global_1312577.f_57), true);
}

void func_114(int iParam0)
{
	if (iParam0)
	{
		GAMEPLAY::SET_BIT(&(Global_1312577.f_57), false);
		return;
	}
	GAMEPLAY::CLEAR_BIT(&(Global_1312577.f_57), false);
}

void func_115()
{
	Global_1312577.f_8 = get_time_offset(NETWORK::GET_NETWORK_TIME(), 86400000);
	Global_1312577.f_9 = NETWORK::GET_NETWORK_TIME();
}

void func_116()
{
	func_118();
	func_117(0);
}

void func_117(int iParam0)
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
	Global_1312577 = 19;
	StringCopy(&(Global_1312577.f_1), "", 24);
	Global_1312577.f_7 = 0;
	if (iVar0)
	{
		Global_1312577.f_8 = NETWORK::GET_NETWORK_TIME();
		Global_1312577.f_9 = NETWORK::GET_NETWORK_TIME();
	}
	StringCopy(&(Global_1312577.f_10), "", 16);
	StringCopy(&(Global_1312577.f_14), "", 64);
	StringCopy(&(Global_1312577.f_30), "", 64);
	Global_1312577.f_50 = 0;
	Global_1312577.f_51 = 0;
	Global_1312577.f_52 = 0;
	Global_1312577.f_53 = -1;
	Global_1312577.f_54 = 0;
	Global_1312577.f_57 = 0;
	if (iParam0)
	{
		return;
	}
}

void func_118()
{
	if (!func_121())
	{
	}
	if (func_120())
	{
		_0xE124FA80A759019C(&(Global_1312577.f_10));
		func_119();
		_0xFCC75460ABA29378();
	}
}

void func_119()
{
	switch (Global_1312577)
	{
		case 19:
			return;
		
		case 0:
			return;
		
		case 1:
			add_text_component_integer(Global_1312577.f_50);
			return;
		
		case 2:
			add_text_component_integer(Global_1312577.f_50);
			add_text_component_integer(Global_1312577.f_51);
			return;
		
		case 3:
			_add_text_component_item_string(&(Global_1312577.f_14));
			return;
		
		case 4:
			_add_text_component_item_string(&(Global_1312577.f_14));
			_add_text_component_item_string(&(Global_1312577.f_30));
			return;
		
		case 5:
			add_text_component_substring_player_name(&(Global_1312577.f_14));
			return;
		
		case 6:
			_0x39BBF623FC803EAC(Global_1312577.f_54);
			add_text_component_substring_player_name(&(Global_1312577.f_14));
			return;
		
		case 7:
			_add_text_component_item_string(&(Global_1312577.f_14));
			return;
		
		case 8:
			_0x39BBF623FC803EAC(Global_1312577.f_54);
			_add_text_component_item_string(&(Global_1312577.f_14));
			return;
		
		case 9:
			_0x5F68520888E69014(&(Global_1312577.f_14));
			return;
		
		case 10:
			add_text_component_substring_player_name(&(Global_1312577.f_14));
			add_text_component_substring_player_name(&(Global_1312577.f_30));
			return;
		
		case 12:
			add_text_component_substring_player_name(&(Global_1312577.f_14));
			_add_text_component_item_string(&(Global_1312577.f_30));
			return;
		
		case 11:
			_0x5F68520888E69014(&(Global_1312577.f_14));
			return;
		
		case 13:
			_0x39BBF623FC803EAC(Global_1312577.f_54);
			add_text_component_substring_player_name(&(Global_1312577.f_14));
			_0x39BBF623FC803EAC(Global_1312577.f_54);
			_add_text_component_item_string(&(Global_1312577.f_30));
			return;
		
		case 14:
			_0x39BBF623FC803EAC(Global_1312577.f_54);
			add_text_component_substring_player_name(&(Global_1312577.f_14));
			_0x39BBF623FC803EAC(Global_1312577.f_55);
			_add_text_component_item_string(&(Global_1312577.f_30));
			return;
		
		case 16:
			add_text_component_substring_player_name(&(Global_1312577.f_14));
			add_text_component_substring_player_name(&(Global_1312577.f_30));
			_0x39BBF623FC803EAC(Global_1312577.f_54);
			_add_text_component_item_string(&(Global_1312577.f_46));
			return;
		
		case 15:
			_0x39BBF623FC803EAC(Global_1312577.f_54);
			add_text_component_substring_player_name(&(Global_1312577.f_14));
			return;
		
		case 18:
			_0x39BBF623FC803EAC(Global_1312577.f_54);
			_add_text_component_item_string(&(Global_1312577.f_14));
			return;
		
		case 17:
			add_text_component_substring_player_name(&(Global_1312577.f_14));
			_0x39BBF623FC803EAC(Global_1312577.f_54);
			_add_text_component_item_string(&(Global_1312577.f_46));
			add_text_component_substring_player_name(&(Global_1312577.f_30));
			return;
		
		default:
	}
}

bool func_120()
{
	if (Global_1312577 == 19)
	{
		return false;
	}
	return true;
}

int func_121()
{
	if (!func_120())
	{
		return 0;
	}
	_0x853648FD1063A213(&(Global_1312577.f_10));
	func_119();
	return _0x8A9BA1AB3E237613();
}

int func_122(char* sParam0, char* sParam1)
{
	if (!func_120())
	{
		return false;
	}
	if (is_string_null_or_empty(sParam0))
	{
		return false;
	}
	if (is_string_null_or_empty(sParam1))
	{
		return false;
	}
	if (!get_hash_key(sParam0) == get_hash_key(&(Global_1312577.f_10)))
	{
		return false;
	}
	return get_hash_key(sParam1) == get_hash_key(&(Global_1312577.f_14));
}

void func_123(char* sParam0, int iParam1, char* sParam2, int iParam3, auto uParam4, int iParam5)
{
	if (func_124(sParam0, get_player_name(iParam1), sParam2, iParam5, iParam3))
	{
		Global_1312577 = 14;
		Global_1312577.f_54 = iParam3;
		Global_1312577.f_55 = uParam4;
	}
}

bool func_124(char* sParam0, char* sParam1, char* sParam2, int iParam3, auto uParam4)
{
	if (is_string_null_or_empty(sParam0))
	{
		return false;
	}
	if (_0x43E4111189E54F0E(sParam0) > 23)
	{
		return false;
	}
	if (is_string_null_or_empty(sParam1))
	{
		return false;
	}
	if (_0x43E4111189E54F0E(sParam1) > 63)
	{
		return false;
	}
	if (is_string_null_or_empty(sParam2))
	{
		return false;
	}
	if (_0x43E4111189E54F0E(sParam2) > 63)
	{
		return false;
	}
	if (func_125(sParam0, sParam1, sParam2) && Global_1312577.f_54 == Global_1312577.f_56)
	{
		return false;
	}
	func_116();
	Global_1312577 = 10;
	StringCopy(&(Global_1312577.f_1), get_this_script_name(), 24);
	Global_1312577.f_7 = get_hash_key(&(Global_1312577.f_1));
	StringCopy(&(Global_1312577.f_10), sParam0, 16);
	StringCopy(&(Global_1312577.f_14), sParam1, 64);
	StringCopy(&(Global_1312577.f_30), sParam2, 64);
	Global_1312577.f_56 = uParam4;
	func_115();
	func_114(iParam3);
	func_113();
	return true;
}

int func_125(char* sParam0, char* sParam1, char* sParam2)
{
	if (!func_120())
	{
		return false;
	}
	if (is_string_null_or_empty(sParam0))
	{
		return false;
	}
	if (is_string_null_or_empty(sParam1))
	{
		return false;
	}
	if (is_string_null_or_empty(sParam2))
	{
		return false;
	}
	if (!get_hash_key(sParam0) == get_hash_key(&(Global_1312577.f_10)))
	{
		return false;
	}
	if (!get_hash_key(sParam1) == get_hash_key(&(Global_1312577.f_14)))
	{
		return false;
	}
	return get_hash_key(sParam2) == get_hash_key(&(Global_1312577.f_30));
}

void func_126(char* sParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	_set_text_component_format(sParam0);
	if (!iParam2 == 0)
	{
		_0x39BBF623FC803EAC(iParam2);
	}
	add_text_component_substring_player_name(sParam1);
	if (!iParam4 == 0)
	{
		_0x39BBF623FC803EAC(iParam4);
	}
	_add_text_component_item_string(sParam3);
	_display_help_text_from_string_label(0, 0, false, iParam5);
}

int func_127(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_598(iParam0))
	{
		if (iParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (func_598(player_id()) || (func_143() && func_597()))
	{
		iVar0 = func_142();
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (is_ped_a_player(iVar0))
			{
				if (_network_get_ped_player(iVar0) != -1)
				{
					if (func_658(_network_get_ped_player(iVar0), 0, 1))
					{
						if ((iParam1 > -1 && network_is_activity_session()) && iParam1 < 4)
						{
							if (Global_1617379.f_66777[iParam1] != -1)
							{
								return func_141(iParam1, iParam0, 0);
							}
							else
							{
								return func_135(iParam0, _network_get_ped_player(iVar0), iParam1, iParam2, iParam3);
							}
						}
						else
						{
							return func_135(iParam0, _network_get_ped_player(iVar0), iParam1, iParam2, iParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && network_is_activity_session()) && iParam1 < 4)
			{
				if (Global_1617379.f_66777[iParam1] != -1)
				{
					return func_141(iParam1, iParam0, 0);
				}
				else
				{
					return func_128(0, -1, 0);
				}
			}
			else
			{
				return func_128(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && network_is_activity_session()) && iParam1 < 4)
	{
		if (Global_1617379.f_66777[iParam1] != -1)
		{
			return func_141(iParam1, iParam0, 0);
		}
		else
		{
			return func_135(iParam0, player_id(), iParam1, iParam2, iParam3);
		}
	}
	return func_135(iParam0, player_id(), iParam1, iParam2, iParam3);
}

int func_128(int iParam0, int iParam1, int iParam2)
{
	return func_129(player_id(), iParam0, iParam1, iParam2);
}

int func_129(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = get_player_team(iParam0);
	if (iParam1)
	{
		if (iParam2 > -1)
		{
			if (func_134(iVar0, iParam2, 0) && !GAMEPLAY::IS_BIT_SET(Global_1617379.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_133(1);
				}
				else
				{
					return func_133(0);
				}
			}
			else if (iParam3)
			{
				return 28;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1617379.f_4, 20))
			{
				return func_130(iVar0, iParam2, 1);
			}
			else
			{
				return func_130(iVar0, iParam2, 0);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_133(1);
	}
	return func_133(0);
}

int func_130(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_132(iParam0, iParam1);
	if (func_131(Global_1617379.f_70365))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (iParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			
			case 3:
				return 31;
			
			case 4:
				return 32;
			
			case 5:
				return 33;
			
			case 6:
				return 34;
			
			case 7:
				return 35;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			}
		
		default:
	}
	return 28;
}

bool func_131(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_7339[iVar0])
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_132(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_134(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_133(int iParam0)
{
	if (iParam0)
	{
		return 118;
	}
	return 116;
}

int func_134(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return true;
		}
		return false;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return true;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return GAMEPLAY::IS_BIT_SET(Global_1617379.f_39, false);
				
				case 1:
					return GAMEPLAY::IS_BIT_SET(Global_1617379.f_39, true);
				
				case 2:
					return GAMEPLAY::IS_BIT_SET(Global_1617379.f_39, 2);
				
				case 3:
					return GAMEPLAY::IS_BIT_SET(Global_1617379.f_39, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return GAMEPLAY::IS_BIT_SET(Global_1617379.f_39, 4);
				
				case 1:
					return GAMEPLAY::IS_BIT_SET(Global_1617379.f_39, 5);
				
				case 2:
					return GAMEPLAY::IS_BIT_SET(Global_1617379.f_39, 6);
				
				case 3:
					return GAMEPLAY::IS_BIT_SET(Global_1617379.f_39, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return GAMEPLAY::IS_BIT_SET(Global_1617379.f_39, 8);
				
				case 1:
					return GAMEPLAY::IS_BIT_SET(Global_1617379.f_39, 9);
				
				case 2:
					return GAMEPLAY::IS_BIT_SET(Global_1617379.f_39, 10);
				
				case 3:
					return GAMEPLAY::IS_BIT_SET(Global_1617379.f_39, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return GAMEPLAY::IS_BIT_SET(Global_1617379.f_39, 12);
				
				case 1:
					return GAMEPLAY::IS_BIT_SET(Global_1617379.f_39, 13);
				
				case 2:
					return GAMEPLAY::IS_BIT_SET(Global_1617379.f_39, 14);
				
				case 3:
					return GAMEPLAY::IS_BIT_SET(Global_1617379.f_39, 15);
				
				default:
			}
			break;
	}
	return false;
}

int func_135(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2 == -2)
	{
		iVar0 = get_player_team(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1587523[player_id() /*444*/] == 148)
	{
		iVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1587523[iVar2 /*444*/] == 148)
		{
			iVar1 = true;
		}
	}
	if (!iVar1)
	{
		if (iVar0 != -1)
		{
			if ((func_140(iParam1, iParam0, iVar0, 0) && !GAMEPLAY::IS_BIT_SET(Global_1617379.f_15, 18)) || ((func_134(get_player_team(iParam1), get_player_team(iParam0), 0) && GAMEPLAY::IS_BIT_SET(Global_1617379.f_15, 23)) && !GAMEPLAY::IS_BIT_SET(Global_1617379.f_15, 18)))
			{
				return func_133(1);
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1617379.f_15, 26))
			{
				return func_139(1);
			}
			else
			{
				return func_129(iParam1, 1, iVar0, iParam4);
			}
		}
		else if ((Global_1573837 || Global_1573828) || Global_1587523[iParam0 /*444*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1573837 == 1 && Global_1573847 == 0))
			{
				return func_133(1);
			}
			else
			{
				return func_129(iParam1, 1, iVar0, iParam4);
			}
		}
		if (Global_1573832 && Global_1573410.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar3 = func_138(iParam0);
	if (!iVar3 == -1)
	{
		return func_136(iVar3);
	}
	if (iParam3)
	{
		return 0;
	}
	return 1;
}

int func_136(int iParam0)
{
	int iVar0;
	
	iVar0 = func_137(iParam0);
	switch (iVar0)
	{
		case 0:
			return 192;
		
		case 1:
			return 193;
		
		case 2:
			return 194;
		
		case 3:
			return 195;
		
		case 4:
			return 196;
		
		case 5:
			return 197;
		
		case 6:
			return 198;
		
		case 7:
			return 199;
		
		case 8:
			return 200;
		
		case 9:
			return 201;
		
		case 10:
			return 202;
		
		case 11:
			return 203;
		
		case 12:
			return 204;
		
		case 13:
			return 205;
		
		case 14:
			return 206;
		
		default:
	}
	return 1;
}

auto func_137(auto uParam0)
{
	return Global_2413760.f_1946.f_44[uParam0 /*2*/].f_1;
}

int func_138(int iParam0)
{
	if (!iParam0 == func_48())
	{
		if (func_55(iParam0, 1))
		{
			return Global_2413760.f_1946.f_11[func_51(iParam0)];
		}
	}
	return -1;
}

int func_139(int iParam0)
{
	if (iParam0)
	{
		return 119;
	}
	return 116;
}

int func_140(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (get_player_team(iParam0) == -1 && get_player_team(iParam1) == -1)
			{
				return false;
			}
		}
		return get_player_team(iParam0) == get_player_team(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (get_player_team(iParam0) == -1 && iParam2 == -1)
			{
				return false;
			}
		}
		return get_player_team(iParam0) == iParam2;
	}
	return get_player_team(iParam0) == iParam2;
}

int func_141(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (Global_1617379.f_66777[iParam0] != -1 && Global_1617379.f_66777[iParam0] <= 4)
	{
		if (Global_1617379.f_66777[iParam0] == 0)
		{
			iVar0 = 15;
		}
		else if (Global_1617379.f_66777[iParam0] == 1)
		{
			iVar0 = 18;
		}
		else if (Global_1617379.f_66777[iParam0] == 2)
		{
			iVar0 = 24;
		}
		else if (Global_1617379.f_66777[iParam0] == 4)
		{
			if (GAMEPLAY::IS_BIT_SET(Global_1617379.f_15, 29))
			{
				iVar0 = 21;
			}
			else
			{
				iVar0 = 6;
			}
		}
		else
		{
			iVar0 = Global_1617379.f_66777[iParam0];
		}
	}
	else
	{
		iVar0 = func_129(iParam1, !iParam2, iParam0, 0);
	}
	return iVar0;
}

auto func_142()
{
	return Global_2359301.f_2;
}

int func_143()
{
	return GAMEPLAY::IS_BIT_SET(Global_1587523[player_id() /*444*/].f_39.f_18, 14);
}

char* func_144()
{
	int iVar0;
	char* sVar1;
	
	iVar0 = func_51(player_id());
	if (iVar0 != func_48())
	{
		if (iVar0 != player_id())
		{
			if (((func_26(iVar0, 28) || func_26(player_id(), 28)) || func_53(iVar0)) && !func_52(iVar0))
			{
				return _get_label_text("GB_REST_ACC");
			}
		}
		sVar1 = func_54(&(Global_1610316[iVar0 /*174*/].f_10.f_74));
		if (is_string_null_or_empty(sVar1))
		{
			return _get_label_text("GB_REST_ACC");
		}
		else
		{
			return sVar1;
		}
	}
	return "";
}

bool func_145(int iParam0)
{
	if (GAMEPLAY::IS_BIT_SET(Local_394[iParam0 /*5*/].f_4, 2))
	{
		return true;
	}
	if (GAMEPLAY::IS_BIT_SET(Local_394[iParam0 /*5*/].f_4, 3))
	{
		return true;
	}
	if (GAMEPLAY::IS_BIT_SET(Global_1610316[player_id() /*174*/].f_1, 13))
	{
		return true;
	}
	return false;
}

void func_146(char* sParam0, int iParam1)
{
	if (is_string_null_or_empty(sParam0))
	{
		return;
	}
	if (_0x43E4111189E54F0E(sParam0) > 23)
	{
		return;
	}
	if (func_147(sParam0))
	{
		return;
	}
	func_116();
	Global_1312577 = 0;
	StringCopy(&(Global_1312577.f_1), get_this_script_name(), 24);
	Global_1312577.f_7 = get_hash_key(&(Global_1312577.f_1));
	StringCopy(&(Global_1312577.f_10), sParam0, 16);
	func_115();
	func_114(iParam1);
	func_113();
}

int func_147(char* sParam0)
{
	if (!func_120())
	{
		return false;
	}
	if (Global_1312577 == 11)
	{
		return func_148(sParam0);
	}
	if (is_string_null_or_empty(sParam0))
	{
		return false;
	}
	return get_hash_key(sParam0) == get_hash_key(&(Global_1312577.f_10));
}

int func_148(char* sParam0)
{
	if (!func_120())
	{
		return false;
	}
	if (is_string_null_or_empty(sParam0))
	{
		return false;
	}
	return get_hash_key(sParam0) == get_hash_key(&(Global_1312577.f_14));
}

void func_149()
{
	if (!func_120())
	{
		return;
	}
	if (!get_hash_key(get_this_script_name()) == Global_1312577.f_7)
	{
		return;
	}
	func_116();
}

int func_150(int iParam0)
{
	return Global_2428492.f_2171[0 /*72*/].f_1 == iParam0;
}

int func_151(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	struct<72> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_65 = 1;
	Var0.f_66 = 2;
	Var0.f_71 = -1;
	func_49(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_65 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_66 = iParam5;
	return func_42(&Var0);
}

int func_152(int iParam0, char* sParam1, char* sParam2, auto uParam3, int iParam4, char* sParam5, auto uParam6)
{
	struct<72> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_65 = 1;
	Var0.f_66 = 2;
	Var0.f_71 = -1;
	func_49(iParam0, &Var0, -1, sParam1, sParam5);
	StringCopy(&(Var0.f_23), sParam2, 64);
	Var0.f_65 = uParam3;
	Var0.f_6 = iParam4;
	Var0.f_66 = uParam6;
	return func_42(&Var0);
}

int func_153()
{
	return 21;
}

bool func_154(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_51(iParam0);
	if (!iVar0 == func_48())
	{
		if (iVar0 == func_51(iParam1))
		{
			return true;
		}
	}
	return false;
}

void func_155(int iParam0, float fParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	set_audio_flag("DisableFlightMusic", 1);
	if (iParam0 != 133)
	{
		set_audio_flag("WantedMusicDisabled", 1);
	}
	Global_2460486.f_4573 = -1;
	iVar0 = (func_28(player_id(), 0) && func_27(player_id()));
	if (iParam6)
	{
		func_177(21, 1);
	}
	else
	{
		func_174(iParam0, -1);
		if (func_173(player_id()))
		{
			Global_1573883.f_3 = iParam0;
		}
		else
		{
			func_172(iParam0);
		}
		Global_1573883.f_4 = -1;
		if (func_173(player_id()))
		{
			GAMEPLAY::SET_BIT(&(Global_1573883.f_1), 5);
		}
		if ((func_95() && !func_94()) || func_93(player_id(), 21))
		{
			GAMEPLAY::SET_BIT(&(Global_1573883.f_1), 4);
		}
		GAMEPLAY::CLEAR_BIT(&(Global_1573883.f_1), 17);
		GAMEPLAY::SET_BIT(&(Global_1573883.f_1), 20);
		if (func_171(iParam0))
		{
			func_170();
		}
	}
	if (!iVar0)
	{
		if (fParam1 != 1f)
		{
			func_167(fParam1);
		}
		if (fParam2 != 1f)
		{
			set_wanted_level_multiplier(fParam2);
			if (iParam0 == 146)
			{
				set_max_wanted_level(0);
				set_player_wanted_level(player_id(), 0, 0);
				set_player_wanted_level_now(player_id(), 0);
			}
		}
		if (func_165(iParam0))
		{
			set_max_wanted_level(0);
			set_player_wanted_level(player_id(), 0, 0);
			set_player_wanted_level_now(player_id(), 0);
			GAMEPLAY::SET_BIT(&(Global_1573883.f_1), 8);
		}
		if (iParam3)
		{
			func_164(1);
			if (func_161(0))
			{
				GAMEPLAY::SET_BIT(&(Global_1573883.f_1), 9);
			}
			GAMEPLAY::SET_BIT(&(Global_1573883.f_1), 14);
		}
		if (iParam4)
		{
			func_159(1);
			GAMEPLAY::SET_BIT(&(Global_1573883.f_1), 12);
		}
		if (iParam5)
		{
			func_158();
			GAMEPLAY::SET_BIT(&(Global_1573883.f_1), 12);
		}
		if (!iParam6)
		{
			if (func_156(iParam0))
			{
				GAMEPLAY::SET_BIT(&(Global_1573883.f_1), 21);
			}
		}
	}
	Global_2459366 = 1;
}

bool func_156(int iParam0)
{
	switch (iParam0)
	{
		case 129:
		case 131:
		case 141:
		case 136:
		case 138:
		case 139:
		case 140:
		case 144:
		case 146:
			return true;
		
		default:
	}
	if (func_157())
	{
		return true;
	}
	return false;
}

bool func_157()
{
	switch (func_110())
	{
		case 15:
		case 16:
		case 17:
		case 18:
			return true;
		
		default:
	}
	return false;
}

void func_158()
{
	GAMEPLAY::SET_BIT(&(Global_2460486.f_4564), false);
}

void func_159(int iParam0)
{
	int iVar0;
	
	if (iParam0)
	{
		Global_91330.f_8 = 1;
	}
	else
	{
		Global_91330.f_8 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 45)
	{
		func_160(iVar0);
		iVar0++;
	}
}

void func_160(int iParam0)
{
	Global_91330.f_156[iParam0] = 1;
	Global_91330.f_155 = 1;
}

bool func_161(int iParam0)
{
	int iVar0;
	
	iVar0 = func_162(2512, -1, 0);
	if (iParam0 == 0)
	{
		if ((GAMEPLAY::IS_BIT_SET(iVar0, false) && GAMEPLAY::IS_BIT_SET(iVar0, true)) && GAMEPLAY::IS_BIT_SET(iVar0, 2))
		{
			return false;
		}
	}
	else if (iParam0 == 1)
	{
		if ((GAMEPLAY::IS_BIT_SET(iVar0, 3) && GAMEPLAY::IS_BIT_SET(iVar0, 4)) && GAMEPLAY::IS_BIT_SET(iVar0, 5))
		{
			return false;
		}
	}
	else if (iParam0 == 2)
	{
		if ((GAMEPLAY::IS_BIT_SET(iVar0, 6) && GAMEPLAY::IS_BIT_SET(iVar0, 7)) && GAMEPLAY::IS_BIT_SET(iVar0, 8))
		{
			return false;
		}
	}
	else if (iParam0 == 3)
	{
		if ((GAMEPLAY::IS_BIT_SET(iVar0, 9) && GAMEPLAY::IS_BIT_SET(iVar0, 10)) && GAMEPLAY::IS_BIT_SET(iVar0, 11))
		{
			return false;
		}
	}
	return true;
}

int func_162(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	auto uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2469339[iParam0 /*5*/][func_163(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_163(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_35();
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

void func_164(int iParam0)
{
	if (Global_978143 != -1 && iParam0)
	{
		return;
	}
	if (iParam0 == Global_2391042)
	{
		return;
	}
	Global_2391042 = iParam0;
	Global_2391044 = 0;
	Global_2391045 = 0;
}

bool func_165(int iParam0)
{
	switch (iParam0)
	{
		case 136:
		case 144:
		case 129:
			return true;
		
		case 141:
			if (func_166(player_id()))
			{
				return true;
			}
			break;
	}
	return false;
}

int func_166(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return GAMEPLAY::IS_BIT_SET(Global_1610316[iVar0 /*174*/].f_1, false);
	}
	return false;
}

void func_167(float fParam0)
{
	float fVar0;
	
	if (get_hash_key(get_this_script_name()) == func_168())
	{
		return;
	}
	fVar0 = Global_2460486.f_4655 - fParam0;
	if (is_thread_active(Global_2460486.f_4656))
	{
		if (!Global_2460486.f_4656 == get_id_of_this_thread() && absf(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_2460486.f_4655 = fParam0;
	Global_2460486.f_4656 = get_id_of_this_thread();
}

int func_168()
{
	switch (func_169())
	{
		case 0:
			return joaat("freemode");
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

auto func_169()
{
	return Global_25120;
}

void func_170()
{
	Global_2418472[player_id() /*313*/].f_198 = 0;
	GAMEPLAY::CLEAR_BIT(&(Global_2460486.f_4420), true);
}

bool func_171(int iParam0)
{
	switch (iParam0)
	{
		case 136:
			return true;
		
		default:
	}
	return false;
}

void func_172(int iParam0)
{
	Global_1610316[player_id() /*174*/] = iParam0;
}

int func_173(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1610316[iParam0 /*174*/].f_1, 2);
}

void func_174(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != -1 || iParam1 != -1)
	{
		iVar0 = iParam0;
		if (iVar0 == -1)
		{
			iVar0 = iParam1;
		}
		if (func_176(0) || func_176(func_175(iVar0)))
		{
			GAMEPLAY::SET_BIT(&(Global_1610316[player_id() /*174*/].f_1), 2);
		}
		else
		{
			GAMEPLAY::CLEAR_BIT(&(Global_1610316[player_id() /*174*/].f_1), 2);
		}
	}
}

int func_175(int iParam0)
{
	switch (iParam0)
	{
		case 131:
			return 10;
		
		case 132:
			return 1;
		
		case 133:
			return 2;
		
		case 136:
			return 11;
		
		case 138:
			return 5;
		
		case 139:
			return 6;
		
		case 129:
			return 8;
		
		case 140:
			return 4;
		
		case 141:
			return 9;
		
		case 144:
			return 3;
		
		case 146:
			return 7;
		
		default:
	}
	return 12;
}

int func_176(int iParam0)
{
	int iVar0;
	
	iVar0 = func_162(2458, -1, 0);
	return GAMEPLAY::IS_BIT_SET(iVar0, iParam0);
}

void func_177(int iParam0, int iParam1)
{
	if (iParam1)
	{
		if (!GAMEPLAY::IS_BIT_SET(Global_2418472[player_id() /*313*/].f_206, iParam0))
		{
			GAMEPLAY::SET_BIT(&(Global_2418472[player_id() /*313*/].f_206), iParam0);
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(Global_2418472[player_id() /*313*/].f_206, iParam0))
	{
		GAMEPLAY::CLEAR_BIT(&(Global_2418472[player_id() /*313*/].f_206), iParam0);
	}
}

void func_178(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2428492.f_2171[iVar0 /*72*/].f_1 == iParam0)
		{
			Global_2428492.f_2171[iVar0 /*72*/].f_2 = 5;
			GAMEPLAY::SET_BIT(&(Global_2428492.f_2171[iVar0 /*72*/].f_63), false);
		}
		iVar0++;
	}
}

auto func_179(int iParam0)
{
	return Local_1241[iParam0 /*68*/].f_40;
}

int func_180(char* sParam0)
{
	_0x0A24DA3A41B718F5(sParam0);
	return _0x10BDDBFC529428DD(0);
}

void func_181(int iParam0)
{
	unk_0xB9C362BABECDDC7A(3, 21, 200, 0, 0);
	if (iParam0 && !func_183())
	{
		play_sound_frontend(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", 0);
	}
}

void func_182(char* sParam0, int iParam1)
{
	_set_text_component_format(sParam0);
	_display_help_text_from_string_label(0, 0, false, iParam1);
}

int func_183()
{
	return Global_2428492.f_2171[0 /*72*/].f_1 != 0;
}

void func_184(int iParam0)
{
	auto uVar0;
	
	if (iParam0)
	{
		if (func_95())
		{
			func_187(0);
			func_186();
		}
		if (func_176(0))
		{
			uVar0 = func_162(2458, -1, 0);
			GAMEPLAY::CLEAR_BIT(&uVar0, false);
			func_186();
		}
		if (func_176(func_175(func_195(player_id()))))
		{
			uVar0 = func_162(2458, -1, 0);
			GAMEPLAY::CLEAR_BIT(&uVar0, func_175(func_195(player_id())));
			func_186();
		}
		if (func_185())
		{
			func_186();
		}
		if (func_195(player_id()) > -1)
		{
			GAMEPLAY::SET_BIT(&(Global_1610316[player_id() /*174*/].f_1), 7);
		}
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Global_1610316[player_id() /*174*/].f_1), 7);
	}
}

bool func_185()
{
	if (Global_2428492.f_648.f_5 == -1)
	{
		return false;
	}
	return true;
}

void func_186()
{
	if (func_185())
	{
		Global_2428492.f_648.f_16 = 1;
	}
}

void func_187(int iParam0)
{
	if (func_95())
	{
		if (iParam0 == 1)
		{
			if (Global_2460486.f_4254 == -1)
			{
				Global_2460486.f_4254 = 60000;
			}
			func_194(&(Global_2460486.f_4252), 0, 0);
			if (Global_2460486.f_4257 == -1)
			{
				Global_2460486.f_4257 = 10000;
			}
			func_194(&(Global_2460486.f_4255), 0, 0);
		}
		else
		{
			Global_1312416 = 0;
			func_193();
		}
		if ((!network_is_activity_session() && !func_192()) && !func_188(player_id()))
		{
			Global_978142 = 0;
		}
		Global_1610316[player_id() /*174*/].f_8 = 0;
	}
}

bool func_188(int iParam0)
{
	if (func_189(iParam0, 1))
	{
		if (Global_1587523[iParam0 /*444*/] != 6)
		{
			return true;
		}
	}
	return false;
}

bool func_189(int iParam0, int iParam1)
{
	if (iParam1)
	{
		if (func_190(iParam0))
		{
			return true;
		}
	}
	if (Global_1587523[iParam0 /*444*/] == -1)
	{
		return false;
	}
	return true;
}

int func_190(int iParam0)
{
	return func_191(iParam0);
}

int func_191(auto uParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1587523[uParam0 /*444*/].f_13.f_1, false);
}

auto func_192()
{
	return Global_2434762.f_713;
}

void func_193()
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_95())
		{
			if (func_658(player_id(), 1, 0))
			{
				set_ped_can_be_dragged_out(PLAYER::PLAYER_PED_ID(), 1);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, false);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 122, false);
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
			if (func_658(player_id(), 1, 1))
			{
				set_ped_can_be_dragged_out(PLAYER::PLAYER_PED_ID(), 0);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 122, true);
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

void func_194(auto uParam0, int iParam1, int iParam2)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !iParam1)
	{
		if (!iParam2)
		{
			*uParam0 = NETWORK::GET_NETWORK_TIME();
		}
		else
		{
			*uParam0 = NETWORK::_0x89023FBBF9200E9F();
		}
	}
	else
	{
		*uParam0 = GAMEPLAY::GET_GAME_TIMER();
	}
	*uParam0.f_1 = 1;
}

int func_195(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1610316[iVar0 /*174*/];
	}
	return -1;
}

auto func_196(int iParam0, int iParam1)
{
	return Local_394[iParam0 /*5*/].f_1[iParam1];
}

bool func_197(int iParam0, int iParam1)
{
	if (func_199(player_id()))
	{
		return true;
	}
	if (iParam0)
	{
		if (func_92(player_id()))
		{
			return true;
		}
	}
	if (iParam1)
	{
		if (func_198(player_id()))
		{
			return true;
		}
	}
	return false;
}

int func_198(int iParam0)
{
	return func_33(iParam0, 0);
}

int func_199(int iParam0)
{
	if (func_173(iParam0))
	{
		return true;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1610316[iParam0 /*174*/].f_1, 8);
}

void func_200(int iParam0)
{
	if (!GAMEPLAY::IS_BIT_SET(iLocal_555, 22))
	{
		if (iLocal_3350 == participant_id_to_int())
		{
			if (func_145(participant_id_to_int()))
			{
				if (!func_240(1, 1))
				{
					if (Local_96.f_6[iParam0 /*204*/].f_74[0 /*4*/] != -1)
					{
						if (Local_96.f_6[iParam0 /*204*/].f_74[0 /*4*/].f_3 > 0f)
						{
							if (Local_96.f_6[iParam0 /*204*/].f_74[0 /*4*/] != participant_id_to_int())
							{
								if (!func_154(player_id(), Local_96.f_6[iParam0 /*204*/].f_74[0 /*4*/].f_1))
								{
									func_201();
									GAMEPLAY::SET_BIT(&iLocal_555, 22);
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_201()
{
	GAMEPLAY::SET_BIT(&(Global_2460486.f_1641), 19);
}

void func_202(int iParam0)
{
	if (iLocal_392 != func_8(iParam0))
	{
		iLocal_392 = func_8(iParam0);
		if (iLocal_392 > -1)
		{
			iLocal_393++;
			GAMEPLAY::SET_BIT(&iLocal_555, 25);
		}
	}
}

void func_203(int iParam0)
{
	if (func_572() == 1)
	{
		if (func_8(iParam0) == participant_id_to_int() && !func_197(1, 0))
		{
			if (!func_166(player_id()))
			{
				func_204(1);
			}
		}
		else if (func_166(player_id()))
		{
			func_204(0);
		}
	}
}

void func_204(int iParam0)
{
	int iVar0;
	auto uVar1;
	
	if (iParam0)
	{
		Global_2445386 = func_195(player_id());
		if (Global_2445386 == -1)
		{
			Global_2445386 = Global_1573883.f_4;
		}
		if (func_237(Global_2445386) == 0)
		{
			if (func_236(1) > 0)
			{
				func_235(26, -1);
			}
		}
		if (func_95())
		{
			func_187(0);
			func_186();
		}
		if (func_176(0))
		{
			uVar1 = func_162(2458, -1, 0);
			GAMEPLAY::CLEAR_BIT(&uVar1, false);
			func_186();
		}
		if (func_176(func_175(func_195(player_id()))))
		{
			uVar1 = func_162(2458, -1, 0);
			GAMEPLAY::CLEAR_BIT(&uVar1, func_175(func_195(player_id())));
			func_186();
		}
		if (func_185())
		{
			func_186();
		}
		GAMEPLAY::SET_BIT(&(Global_1610316[player_id() /*174*/].f_1), false);
	}
	else
	{
		if ((!func_234() && !func_233()) && !func_232())
		{
			Global_2445386 = -1;
			func_231(26, -1);
		}
		else if (func_237(Global_2445386) == 0)
		{
			iVar0 = func_216(1);
			if (iVar0 > 0)
			{
				func_211(joaat("mpply_fmevn_cheat_end"), iVar0);
				func_207(1924, 1, -1);
				func_211(joaat("mpply_activity_ended"), 1);
			}
		}
		else if (func_205(26, -1))
		{
			Global_2445386 = -1;
			func_231(26, -1);
		}
		GAMEPLAY::CLEAR_BIT(&(Global_1610316[player_id() /*174*/].f_1), false);
	}
}

int func_205(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_35();
	}
	iVar0 = func_206(iParam1);
	iVar1 = get_profile_setting(iVar0);
	return GAMEPLAY::IS_BIT_SET(iVar1, iParam0);
}

int func_206(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_35();
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 909;
			break;
		
		case 1:
			iVar0 = 910;
			break;
		
		case 2:
			iVar0 = 911;
			break;
		
		case 3:
			iVar0 = 912;
			break;
		
		case 4:
			iVar0 = 913;
			break;
	}
	return iVar0;
}

void func_207(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_162(iParam0, func_163(iParam2), 0);
	iVar0 += iParam1;
	if (!func_210(iParam0))
	{
		func_209(iParam0, iVar0, iParam2, 1);
	}
	else
	{
		func_208(iParam0, iVar0, iParam2, 1);
	}
}

void func_208(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2469339[iParam0 /*5*/][func_163(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 780:
			Global_1347702[func_163(iParam2)] = iParam1;
			break;
		
		case 781:
			Global_1347708[func_163(iParam2)] = iParam1;
			break;
		
		case 782:
			Global_1347714[func_163(iParam2)] = iParam1;
			break;
		
		case 783:
			Global_1347720[func_163(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1347678[func_163(iParam2)] = iParam1;
			break;
		
		case 771:
			Global_1347684[func_163(iParam2)] = iParam1;
			break;
		
		case 772:
			Global_1347690[func_163(iParam2)] = iParam1;
			break;
		
		case 773:
			Global_1347696[func_163(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1347654[func_163(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1347660[func_163(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1347666[func_163(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1347672[func_163(iParam2)] = iParam1;
			break;
		
		case 750:
			Global_1347726[func_163(iParam2)] = iParam1;
			break;
		
		case 751:
			Global_1347732[func_163(iParam2)] = iParam1;
			break;
		
		case 752:
			Global_1347738[func_163(iParam2)] = iParam1;
			break;
		
		case 753:
			Global_1347744[func_163(iParam2)] = iParam1;
			break;
		
		case 1296:
			Global_1347750[func_163(iParam2)] = iParam1;
			break;
		
		case 632:
			Global_1347756[func_163(iParam2)] = iParam1;
			break;
		
		case 1271:
			Global_1347762[func_163(iParam2)] = iParam1;
			break;
		
		case 1868:
			Global_2492924[0 /*6*/][func_163(iParam2)] = iParam1;
			break;
		
		case 2259:
			Global_2492924[1 /*6*/][func_163(iParam2)] = iParam1;
			break;
		
		case 2907:
			Global_2492924[2 /*6*/][func_163(iParam2)] = iParam1;
			break;
		
		case 3036:
			Global_2492924[3 /*6*/][func_163(iParam2)] = iParam1;
			break;
		
		case 3891:
			Global_2492986[func_163(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1347768[func_163(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1347774[func_163(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1347780[func_163(iParam2)] = iParam1;
			break;
		
		case 1229:
			Global_1347786[func_163(iParam2)] = iParam1;
			break;
		
		case 3031:
			Global_2492955[0 /*5*/][func_163(iParam2)] = iParam1;
			break;
		
		case 3032:
			Global_2492955[1 /*5*/][func_163(iParam2)] = iParam1;
			break;
		
		case 3033:
			Global_2492955[2 /*5*/][func_163(iParam2)] = iParam1;
			break;
		
		case 3034:
			Global_2492955[3 /*5*/][func_163(iParam2)] = iParam1;
			break;
		
		case 3035:
			Global_2492955[4 /*5*/][func_163(iParam2)] = iParam1;
			break;
		
		case 3216:
			Global_2492991[0 /*5*/][func_163(iParam2)] = iParam1;
			break;
		
		case 3217:
			Global_2492991[1 /*5*/][func_163(iParam2)] = iParam1;
			break;
		
		case 3218:
			Global_2492991[2 /*5*/][func_163(iParam2)] = iParam1;
			break;
		
		case 3219:
			Global_2492991[3 /*5*/][func_163(iParam2)] = iParam1;
			break;
		
		case 3220:
			Global_2492991[4 /*5*/][func_163(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2493017[0 /*5*/][func_163(iParam2)] = iParam1;
			break;
		
		case 3222:
			Global_2493017[1 /*5*/][func_163(iParam2)] = iParam1;
			break;
		
		case 3223:
			Global_2493017[2 /*5*/][func_163(iParam2)] = iParam1;
			break;
		
		case 3224:
			Global_2493017[3 /*5*/][func_163(iParam2)] = iParam1;
			break;
		
		case 3225:
			Global_2493017[4 /*5*/][func_163(iParam2)] = iParam1;
			break;
		
		case 3199:
			Global_2492955[5 /*5*/][func_163(iParam2)] = iParam1;
			break;
		
		case 3205:
			Global_2492924[4 /*6*/][func_163(iParam2)] = iParam1;
			break;
		
		case 3243:
			Global_2493043[func_163(iParam2)] = iParam1;
			break;
		
		case 3244:
			Global_2493058[func_163(iParam2)] = iParam1;
			break;
		
		case 3245:
			Global_2493048[func_163(iParam2)] = iParam1;
			break;
		
		case 3246:
			Global_2493063[func_163(iParam2)] = iParam1;
			break;
		
		case 3247:
			Global_2493053[func_163(iParam2)] = iParam1;
			break;
		
		case 3248:
			Global_2493068[func_163(iParam2)] = iParam1;
			break;
		
		case 3269:
			Global_2493073[func_163(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_209(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2469339[iParam0 /*5*/][func_163(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

bool func_210(int iParam0)
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

void func_211(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_215(iParam0);
	iVar0 += iParam1;
	if (!func_214(iParam0))
	{
		func_213(iParam0, iVar0);
	}
	else
	{
		func_212(iParam0, iVar0);
	}
}

void func_212(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, 1);
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

void func_213(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, 1);
	}
}

bool func_214(int iParam0)
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

int func_215(int iParam0)
{
	int iVar0;
	auto uVar1;
	
	iVar0 = iParam0;
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_216(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2;
	iVar1 = 0;
	if (Global_2444103 == 0)
	{
		return 0;
	}
	if (func_232())
	{
		if (network_is_activity_session() || (func_230() || func_228()))
		{
			Global_2443089 = 1;
		}
	}
	Global_2444103 = 0;
	if (Global_1318743)
	{
		iVar0 = 1;
	}
	if (Global_2443089)
	{
		iVar0 = 1;
	}
	if (Global_2443088)
	{
		iVar0 = 1;
	}
	if (func_227(Global_100182.f_1, 32))
	{
		iVar0 = 1;
	}
	if (Global_2443014)
	{
		iVar0 = 1;
	}
	if (func_226(512))
	{
		iVar0 = 1;
	}
	if (func_225(128))
	{
		iVar0 = 1;
	}
	if (Global_1318767 == 1 && iVar1 == 0)
	{
		iVar0 = 0;
	}
	if (func_224())
	{
		iVar0 = 0;
	}
	if (Global_2443543)
	{
		iVar0 = 2;
	}
	if (iParam0 == 0)
	{
		if (!func_222())
		{
			if (Global_1617379.f_71004 == 0)
			{
				iVar0 = 0;
			}
		}
	}
	if (func_33(player_id(), 0))
	{
		iVar0 = 0;
	}
	if (func_221())
	{
		iVar0 = 0;
	}
	if ((Global_2443089 || Global_2443088) || Global_1318743)
	{
		if (func_228())
		{
			iVar0 = 0;
		}
	}
	Global_2443543 = 0;
	Global_2443088 = 0;
	Global_2443089 = 0;
	Global_1318743 = 0;
	Global_2443014 = 0;
	func_219(&(Global_100182.f_1), 32);
	func_218(512);
	func_217(128);
	return iVar0;
}

void func_217(int iParam0)
{
	Global_100239 -= (Global_100239 && iParam0);
}

void func_218(int iParam0)
{
	Global_100240 -= (Global_100240 && iParam0);
}

void func_219(auto uParam0, int iParam1)
{
	func_220(uParam0, iParam1);
}

void func_220(auto uParam0, auto uParam1)
{
	*uParam0 -= (*uParam0 && uParam1);
}

bool func_221()
{
	if (((Global_1573854 || Global_1573825) || func_33(player_id(), 0)) || func_143())
	{
		return true;
	}
	return false;
}

bool func_222()
{
	switch (func_223())
	{
		case 15:
		case 14:
		case 11:
		case 13:
		case 12:
		case 122:
			return true;
		
		default:
	}
	return false;
}

auto func_223()
{
	return Global_2435528.f_1.f_2818;
}

auto func_224()
{
	return Global_1315888;
}

int func_225(int iParam0)
{
	return (Global_100239 && iParam0) != 0;
}

int func_226(int iParam0)
{
	return (Global_100240 && iParam0) != 0;
}

int func_227(auto uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_228()
{
	if (func_237(Global_2445386))
	{
		return false;
	}
	if (func_229(player_id(), 146))
	{
		return true;
	}
	return false;
}

int func_229(int iParam0, int iParam1)
{
	if (Global_1610316[iParam0 /*174*/] == iParam1)
	{
		return func_166(iParam0);
	}
	return false;
}

bool func_230()
{
	if (func_237(Global_2445386))
	{
		return false;
	}
	if (func_166(player_id()))
	{
		return true;
	}
	return false;
}

void func_231(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_35();
	}
	switch (iParam0)
	{
		case 0:
			_0x723C1CE13FBFDB67(false, iParam1);
			break;
		
		default:
			iVar1 = func_206(iParam1);
			iVar0 = get_profile_setting(iVar1);
			if (GAMEPLAY::IS_BIT_SET(iVar0, iParam0))
			{
				GAMEPLAY::CLEAR_BIT(&iVar0, iParam0);
				_0x723C1CE13FBFDB67(iVar0, iParam1);
			}
			break;
	}
}

int func_232()
{
	return GAMEPLAY::IS_BIT_SET(Global_1312423, false);
}

auto func_233()
{
	return Global_1315880;
}

auto func_234()
{
	return Global_1315913;
}

void func_235(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_35();
	}
	switch (iParam0)
	{
		case 0:
			_0x723C1CE13FBFDB67(false, iParam1);
			break;
		
		default:
			iVar1 = func_206(iParam1);
			iVar0 = get_profile_setting(iVar1);
			if (!GAMEPLAY::IS_BIT_SET(iVar0, iParam0))
			{
				GAMEPLAY::SET_BIT(&iVar0, iParam0);
				_0x723C1CE13FBFDB67(iVar0, iParam1);
			}
			break;
	}
}

int func_236(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2;
	iVar1 = 0;
	if (Global_1318767 == 1 && iVar1 == 0)
	{
		iVar0 = 0;
	}
	if (func_224())
	{
		iVar0 = 0;
	}
	if (iParam0 == 0)
	{
		if (!func_222())
		{
			if (Global_1617379.f_71004 == 0)
			{
				iVar0 = 0;
			}
		}
	}
	if (func_33(player_id(), 0))
	{
		iVar0 = 0;
	}
	if (func_221())
	{
		iVar0 = 0;
	}
	Global_2444103 = 1;
	return iVar0;
}

bool func_237(int iParam0)
{
	switch (iParam0)
	{
		case 131:
			if (Global_262145.f_9339)
			{
				return true;
			}
			break;
		
		case 132:
			if (Global_262145.f_9341)
			{
				return true;
			}
			break;
		
		case 133:
			if (Global_262145.f_9338)
			{
				return true;
			}
			break;
		
		case 136:
			if (Global_262145.f_9342)
			{
				return true;
			}
			break;
		
		case 138:
			if (Global_262145.f_9343)
			{
				return true;
			}
			break;
		
		case 139:
			if (Global_262145.f_9344)
			{
				return true;
			}
			break;
		
		case 129:
			if (Global_262145.f_9340)
			{
				return true;
			}
			break;
		
		case 140:
			if (Global_262145.f_9345)
			{
				return true;
			}
			break;
		
		case 141:
			if (Global_262145.f_9346)
			{
				return true;
			}
			break;
		
		case 144:
			if (Global_262145.f_9347)
			{
				return true;
			}
			break;
		
		case 146:
			if (Global_262145.f_9348)
			{
				return true;
			}
			break;
	}
	return false;
}

void func_238()
{
	if (func_240(0, 0))
	{
		return;
	}
	if (GAMEPLAY::IS_BIT_SET(iLocal_555, 25))
	{
		if (iLocal_392 == participant_id_to_int())
		{
			if (Local_380.f_11 == 0)
			{
				Local_380.f_11 = _get_posix_time();
			}
		}
		GAMEPLAY::CLEAR_BIT(&iLocal_555, 25);
	}
}

void func_239()
{
	if (func_180("KOTC_1STHELP"))
	{
		clear_help(1);
	}
	if (func_180("KOTC_OTHRKG"))
	{
		clear_help(1);
	}
	if (func_180("KOTC_YOUKNG"))
	{
		clear_help(1);
	}
	if (func_180("KOTC_CONTS"))
	{
		clear_help(1);
	}
}

bool func_240(int iParam0, int iParam1)
{
	if (iParam0)
	{
	}
	if (GAMEPLAY::IS_BIT_SET(iLocal_555, 17))
	{
		return true;
	}
	if (func_277(player_id(), 1, 0))
	{
		return true;
	}
	if (func_102())
	{
		return true;
	}
	if (func_176(9))
	{
		return true;
	}
	if (func_176(0))
	{
		return true;
	}
	if (!func_255())
	{
		return true;
	}
	if (func_248())
	{
		return true;
	}
	if (func_243(4))
	{
		return true;
	}
	if (func_242())
	{
		return true;
	}
	if (func_197(iParam0, iParam1))
	{
		return true;
	}
	if (Global_1715399)
	{
		return true;
	}
	if (func_241(player_id()))
	{
		return true;
	}
	return false;
}

int func_241(int iParam0)
{
	if (!func_658(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1587523[iParam0 /*444*/].f_35;
}

int func_242()
{
	return Global_91330.f_297 > 0;
}

bool func_243(int iParam0)
{
	int iVar0;
	
	if (func_242())
	{
		iVar0 = 0;
		while (iVar0 < 45)
		{
			if (func_247(iVar0) == iParam0)
			{
				if (func_244(iVar0))
				{
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

int func_244(int iParam0)
{
	return func_245(iParam0, 6, 1);
}

int func_245(int iParam0, int iParam1, int iParam2)
{
	if (iParam2)
	{
		return GAMEPLAY::IS_BIT_SET(Global_91330.f_1300[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_169() == 0)
		{
			return GAMEPLAY::IS_BIT_SET(func_162(func_246(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return GAMEPLAY::IS_BIT_SET(Global_101154.f_668[iParam0], iParam1);
	}
	return false;
}

int func_246(int iParam0)
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

int func_247(int iParam0)
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

bool func_248()
{
	if (GAMEPLAY::IS_BIT_SET(Global_2460486.f_357.f_5, false))
	{
		return true;
	}
	if (func_250() && Global_1587523[player_id() /*444*/].f_87 != 3)
	{
		return true;
	}
	if (func_249() && Global_1587523[player_id() /*444*/].f_87 != 3)
	{
		return true;
	}
	if (Global_2394679)
	{
		return true;
	}
	if (Global_1573883.f_20)
	{
		return true;
	}
	return false;
}

int func_249()
{
	return GAMEPLAY::IS_BIT_SET(Global_2434762, 5);
}

bool func_250()
{
	if (((func_254() || func_253()) || func_252()) || func_251())
	{
		return true;
	}
	return false;
}

int func_251()
{
	return GAMEPLAY::IS_BIT_SET(Global_2434762, true);
}

int func_252()
{
	return GAMEPLAY::IS_BIT_SET(Global_2434762, 2);
}

int func_253()
{
	return GAMEPLAY::IS_BIT_SET(Global_2434762, 20);
}

auto func_254()
{
	return Global_2434762.f_574;
}

bool func_255()
{
	if (func_93(player_id(), 21))
	{
		return false;
	}
	if (network_is_in_tutorial_session())
	{
		return false;
	}
	if (network_is_in_mp_cutscene())
	{
		return false;
	}
	if (func_188(player_id()))
	{
		return false;
	}
	if (func_276())
	{
		return false;
	}
	if (func_275(player_id()))
	{
		return false;
	}
	if (func_274())
	{
		return false;
	}
	if (func_264(player_id()) == 3)
	{
		return false;
	}
	if (func_262(func_263()))
	{
		return false;
	}
	if (func_234())
	{
		return false;
	}
	if (func_102())
	{
		return false;
	}
	if (network_is_activity_session())
	{
		return false;
	}
	if (func_190(player_id()))
	{
		return false;
	}
	if (!func_260())
	{
		return false;
	}
	if (func_93(player_id(), 0) || func_93(player_id(), 3))
	{
		return false;
	}
	if ((func_93(player_id(), 12) || func_93(player_id(), 14)) || func_93(player_id(), 13))
	{
		return false;
	}
	if (func_82(player_id(), 0, 0))
	{
		return false;
	}
	if (func_259(player_id()))
	{
		return false;
	}
	if (func_242())
	{
		return false;
	}
	if (Global_1715399)
	{
		return false;
	}
	if (func_241(player_id()))
	{
		return false;
	}
	if (func_258())
	{
		return false;
	}
	if (func_256(player_id()) && Global_1587316.f_168)
	{
		return false;
	}
	return true;
}

bool func_256(int iParam0)
{
	if (func_257(Global_1587523[iParam0 /*444*/].f_250.f_9))
	{
		return true;
	}
	return false;
}

bool func_257(int iParam0)
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

bool func_258()
{
	if (Global_2552549.f_796 > -1)
	{
		return true;
	}
	return false;
}

int func_259(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1587523[iParam0 /*444*/].f_250.f_7, 11);
}

bool func_260()
{
	if (func_261() == 0)
	{
		return true;
	}
	return false;
}

auto func_261()
{
	return Global_1312466.f_18;
}

bool func_262(int iParam0)
{
	switch (iParam0)
	{
		case 85:
		case 86:
		case 87:
		case 97:
			return true;
		
		default:
	}
	return false;
}

auto func_263()
{
	return Global_2428492.f_2171[0 /*72*/].f_1;
}

int func_264(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	auto uVar3;
	auto uVar4;
	
	iVar0 = 2;
	iVar1 = ((func_273(iParam0) && !func_173(iParam0)) && !GAMEPLAY::IS_BIT_SET(Global_1610316[iParam0 /*174*/].f_1, 8));
	iVar2 = func_272(iParam0);
	uVar3 = func_95();
	uVar4 = func_266();
	if ((iVar1 && (func_265(iParam0) || func_166(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!iVar2 && !func_27(iParam0)) && !func_25(iParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2460486.f_4660.f_22 != iVar0)
	{
		Global_2460486.f_4660.f_22 = iVar0;
	}
	return iVar0;
}

int func_265(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return GAMEPLAY::IS_BIT_SET(Global_1610316[iVar0 /*174*/].f_1, 7);
	}
	return false;
}

bool func_266()
{
	if ((func_26(player_id(), 21) || func_26(player_id(), 22)) || func_270())
	{
		return true;
	}
	if (func_268())
	{
		func_267(22);
		return true;
	}
	return false;
}

void func_267(int iParam0)
{
	GAMEPLAY::SET_BIT(&(Global_1610316[player_id() /*174*/].f_10.f_4), iParam0);
}

bool func_268()
{
	if (func_28(player_id(), 0))
	{
		if ((func_95() && !func_94()) || func_93(player_id(), 21))
		{
			if (!func_26(player_id(), 27))
			{
				return true;
			}
		}
		else
		{
			func_269(27);
		}
	}
	return false;
}

void func_269(int iParam0)
{
	GAMEPLAY::CLEAR_BIT(&(Global_1610316[player_id() /*174*/].f_10.f_4), iParam0);
}

int func_270()
{
	return func_271(283, -1);
}

int func_271(int iParam0, int iParam1)
{
	int iVar0;
	auto uVar1;
	
	iVar0 = Global_2490231[iParam0 /*5*/][func_163(iParam1)];
	if (stat_get_bool(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_272(int iParam0)
{
	return func_26(iParam0, 20);
}

int func_273(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1610316[iVar0 /*174*/] != -1;
	}
	return false;
}

int func_274()
{
	return Global_1587523[player_id() /*444*/] == 5;
}

bool func_275(int iParam0)
{
	if (Global_2418472[iParam0 /*313*/].f_257.f_4 != 0 || Global_2418472[iParam0 /*313*/].f_257.f_5)
	{
		return true;
	}
	return false;
}

int func_276()
{
	return GAMEPLAY::IS_BIT_SET(Global_1587523[player_id() /*444*/].f_39.f_18, false);
}

bool func_277(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == func_48())
	{
		return false;
	}
	if (GAMEPLAY::IS_BIT_SET(Global_1587523[iParam0 /*444*/].f_250.f_7, false))
	{
		return true;
	}
	if (iParam1)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_1587523[iParam0 /*444*/].f_250.f_7, true))
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

void func_278(int iParam0, Vector3 vParam1, auto uParam2, float fParam3, float fParam4, auto uParam5)
{
	float fVar0;
	int iVar1;
	
	Global_1573883.f_6 = {vParam1};
	fVar0 = vdist(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), vParam1);
	if (fVar0 < fParam5 && !func_173(player_id()))
	{
		if (iParam0 != 146 && !func_93(player_id(), 21))
		{
			func_290(vParam1, 1, 0);
		}
		if ((!*uParam4 || GAMEPLAY::IS_BIT_SET(Global_1573883.f_1, 3)) && func_658(player_id(), 1, 1))
		{
			*uParam4 = 1;
			func_167(func_289(iParam0));
			set_wanted_level_multiplier(func_288(iParam0));
			if (iParam0 != 146)
			{
				iVar1 = func_287(iParam0);
				set_max_wanted_level(iVar1);
				if (get_player_wanted_level(player_id()) > iVar1)
				{
					set_player_wanted_level(player_id(), iVar1, 1);
					set_player_wanted_level_now(player_id(), 1);
				}
				GAMEPLAY::SET_BIT(&(Global_1573883.f_1), 8);
			}
			GAMEPLAY::SET_BIT(&(Global_1610316[player_id() /*174*/].f_1), 3);
			GAMEPLAY::CLEAR_BIT(&(Global_1573883.f_1), 3);
		}
	}
	else if ((iParam0 == 146 && fVar0 < fParam6) && !func_173(player_id()))
	{
		if (!GAMEPLAY::IS_BIT_SET(Global_1573883.f_1, 3) && func_658(player_id(), 1, 1))
		{
			func_286();
			set_wanted_level_multiplier(Global_262145.f_9351);
			GAMEPLAY::CLEAR_BIT(&(Global_1610316[player_id() /*174*/].f_1), 3);
			GAMEPLAY::SET_BIT(&(Global_1573883.f_1), 3);
		}
	}
	else if ((*uParam4 || GAMEPLAY::IS_BIT_SET(Global_1573883.f_1, 3)) && func_658(player_id(), 1, 1))
	{
		*uParam4 = 0;
		func_286();
		set_wanted_level_multiplier(1f);
		set_max_wanted_level(5);
		GAMEPLAY::CLEAR_BIT(&(Global_1573883.f_1), 8);
		GAMEPLAY::CLEAR_BIT(&(Global_1610316[player_id() /*174*/].f_1), 3);
		GAMEPLAY::CLEAR_BIT(&(Global_1573883.f_1), 3);
		if (iParam0 != 146 && uParam7)
		{
			func_279();
		}
	}
}

void func_279()
{
	Global_2404956.f_20 = {Global_2406765};
	Global_2404956.f_22 = {Global_2406767};
	func_284();
	func_280(1, 1);
}

void func_280(int iParam0, int iParam1)
{
	if (iParam1)
	{
		Global_2404956.f_39 = {Global_2406784};
	}
	else
	{
		Global_2404956.f_39 = {Global_2406784};
		Global_2404956.f_39.f_49 = {Global_2406784.f_49};
		Global_2404956.f_39.f_52 = Global_2406784.f_52;
		Global_2404956.f_39.f_53 = Global_2406784.f_53;
	}
	if (iParam0)
	{
		func_283();
	}
	func_78(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
	func_282(0);
	func_281();
}

void func_281()
{
	struct<4> Var0;
	
	if (Global_2404956.f_469.f_1 == get_id_of_this_thread())
	{
		Global_2404956.f_469 = {Var0};
	}
}

void func_282(int iParam0)
{
	if (iParam0)
	{
		Global_2404956.f_633 = 0;
	}
	else
	{
		Global_2404956.f_633 = 1;
	}
}

void func_283()
{
	Global_2404956.f_347 = {Global_2407092};
}

void func_284()
{
	func_285();
	Global_2404956.f_1280 = 0;
}

void func_285()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2404956.f_1281[iVar0 /*4*/] = {Var1};
		iVar0++;
	}
}

void func_286()
{
	if (is_thread_active(Global_2460486.f_4656))
	{
		if (!Global_2460486.f_4656 == get_id_of_this_thread() && Global_2460486.f_4655 < 1f)
		{
			return;
		}
	}
	Global_2460486.f_4656 = -1;
	Global_2460486.f_4655 = 1f;
}

int func_287(int iParam0)
{
	switch (iParam0)
	{
		case 131:
		case 138:
		case 140:
		case 139:
		case 141:
		case 146:
			return 0;
		
		case 144:
			return 0;
		
		default:
	}
	return 5;
}

float func_288(int iParam0)
{
	switch (iParam0)
	{
		case 131:
		case 138:
		case 140:
		case 139:
		case 141:
		case 146:
			return 0f;
		
		case 144:
			return 0f;
		
		default:
	}
	return 1f;
}

float func_289(int iParam0)
{
	switch (iParam0)
	{
		case 131:
		case 138:
		case 139:
		case 140:
		case 141:
		case 129:
		case 144:
		case 146:
			return 0f;
		
		default:
	}
	return 1f;
}

void func_290(Vector3 vParam0, int iParam1, int iParam2)
{
	Global_2404956.f_39.f_49 = {vParam0};
	Global_2404956.f_39.f_52 = iParam3;
	Global_2404956.f_39.f_53 = iParam4;
}

Vector3 func_291(int iParam0)
{
	return Local_1241[iParam0 /*68*/].f_24;
}

void func_292(int iParam0)
{
	int iVar0;
	
	if (func_240(0, 0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Local_1310[iVar0 /*47*/] = -1;
		Local_1310[iVar0 /*47*/].f_1 = func_48();
		Local_1310[iVar0 /*47*/].f_9 = 0;
		Local_1310[iVar0 /*47*/].f_30 = -1;
		if (Local_96.f_6[iParam0 /*204*/].f_74[iVar0 /*4*/] > -1)
		{
			Local_1310[iVar0 /*47*/] = Local_96.f_6[iParam0 /*204*/].f_74[iVar0 /*4*/];
			Local_1310[iVar0 /*47*/].f_1 = Local_96.f_6[iParam0 /*204*/].f_74[iVar0 /*4*/].f_1;
			Local_1310[iVar0 /*47*/].f_9 = func_59(Local_96.f_6[iParam0 /*204*/].f_74[iVar0 /*4*/].f_3);
		}
		iVar0++;
	}
	func_293(&Local_1310, &(Local_1241[iParam0 /*68*/].f_66), 23, &uLocal_2815, &uLocal_2924, -1, 0);
}

void func_293(int iParam0, int iParam1, int iParam2, auto uParam3, auto uParam4, int iParam5, int iParam6)
{
	int iVar0;
	int[] iVar1 = new int[32];
	int iVar34;
	int iVar35;
	char* sVar36;
	int iVar37;
	struct<4> Var38;
	int iVar42;
	int iVar43;
	int iVar44;
	float fVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	int iVar54;
	int iVar55;
	int iVar56;
	
	if (func_395(iParam2))
	{
		return;
	}
	fVar45 = -1f;
	iVar46 = -1;
	iVar47 = -1;
	iVar49 = false;
	iVar50 = 0;
	*uParam3.f_36 = 0;
	if (func_393() || iParam2 == 24)
	{
		if (func_355(iParam1, iParam2, uParam3, Global_1573685, 0, func_396()))
		{
			func_354(1);
			if ((!func_353() && !func_352()) || GAMEPLAY::IS_BIT_SET(Global_2460486.f_4426, true))
			{
				if (func_351())
				{
					func_349();
				}
				else
				{
					_set_screen_draw_position(76, 84);
					if (*uParam3.f_27 == 0)
					{
						func_348(1);
						Global_1573685 = 0;
						iVar54 = -1;
						if (Global_1573833 != 1)
						{
							func_347(iParam1);
							if (GAMEPLAY::IS_BIT_SET(*uParam3.f_33, 7))
							{
								GAMEPLAY::CLEAR_BIT(uParam3.f_33, 7);
							}
						}
						if (iParam2 == 24)
						{
							iVar52 = false;
							while (iVar52 < 32)
							{
								iVar1[iVar52] = -1;
								iVar52++;
							}
							iVar52 = false;
							while (iVar52 < 32)
							{
								if (func_658(int_to_playerindex(iVar52), 0, 1))
								{
									iVar35 = int_to_playerindex(iVar52);
									if (!func_33(iVar35, 0))
									{
										if ((_0x9DE986FC9A87C474(iVar35, player_id()) || Global_2418472[iVar35 /*313*/].f_232 != -1) || func_346(iVar35))
										{
											iVar44 = iVar35;
											if (func_56(iVar35))
											{
												iVar1[iVar44] = iVar55;
												iVar55++;
												iVar0++;
												func_343(&iVar1, iVar35, &iVar55, &iVar0);
											}
										}
									}
								}
								iVar52++;
							}
						}
						if (!func_341(player_id(), 0))
						{
							iVar34 = iVar0 > 0;
						}
						iVar52 = false;
						while (iVar52 < 32)
						{
							if (func_339())
							{
								if (func_658(int_to_playerindex(iVar52), 0, 1))
								{
									iVar35 = int_to_playerindex(iVar52);
								}
								else
								{
									iVar35 = func_48();
								}
							}
							else
							{
								iVar35 = *(iParam0[iVar52 /*47*/]).f_1;
							}
							if ((func_338(iVar35) && func_334(iVar35, iParam2)) && func_658(iVar35, 0, 1))
							{
								iVar44 = iVar35;
								iVar42 = Global_1587523[iVar44 /*444*/].f_195.f_6;
								Var38 = {func_329(iVar35)};
								if (iVar35 == player_id())
								{
									*uParam3.f_35 = iVar53;
								}
								StringCopy(uParam3.f_1, get_player_name(iVar35), 64);
								*(uParam4[iVar52 /*13*/]) = {func_38(iVar35)};
								iVar37 = func_323(iVar35);
								sVar36 = "";
								if (iVar37 != 0)
								{
									sVar36 = get_pedheadshot_txd_string(iVar37);
								}
								Global_1573685++;
								if (*(iParam0[iVar52 /*47*/]).f_22 != -1f)
								{
									fVar45 = *(iParam0[iVar52 /*47*/]).f_22;
								}
								if (*(iParam0[iVar52 /*47*/]).f_30 != -1)
								{
									iVar46 = *(iParam0[iVar52 /*47*/]).f_30;
								}
								if (*(iParam0[iVar52 /*47*/]).f_46 != -1)
								{
									iVar47 = *(iParam0[iVar52 /*47*/]).f_46;
								}
								iVar43 = *(iParam0[iVar52 /*47*/]).f_9;
								if ((*(iParam0[iVar52 /*47*/]).f_9 != -1 || *(iParam0[iVar52 /*47*/]).f_22 != -1f) || *(iParam0[iVar52 /*47*/]).f_30 != -1)
								{
									if (!func_339())
									{
										iVar50 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_318(&iVar43, &fVar45, *(iParam0[iVar52 /*47*/]).f_9, iParam5);
									StringCopy(uParam3.f_104, func_317(iParam5, 1, 0, 0), 16);
								}
								if (iParam6)
								{
									iVar48 = *(iParam0[iVar52 /*47*/]).f_2 + 1;
									if (iVar54 != iVar48)
									{
										iVar54 = iVar48;
									}
									else
									{
										iVar48 = -2;
									}
								}
								iVar51 = func_316(iVar35, 0);
								if (iVar34)
								{
									if (func_55(iVar35, 1) && iVar1[iVar44] != -1)
									{
										iVar53 = iVar1[iVar44];
									}
									else
									{
										iVar53 = iVar0 + iVar56;
										iVar56++;
									}
								}
								*(uParam3.f_38[iVar44 /*2*/]).f_1 = iVar53;
								if (func_315(iParam5))
								{
									func_314(iParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar43, iVar47, iParam0[iVar52 /*47*/].f_37, iParam0[iVar52 /*47*/].f_41, *(iParam0[iVar52 /*47*/]).f_45, iVar48, iParam6);
								}
								else
								{
									func_314(iParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar46, iVar47, iParam0[iVar52 /*47*/].f_37, iParam0[iVar52 /*47*/].f_41, *(iParam0[iVar52 /*47*/]).f_45, iVar48, iParam6);
								}
								GAMEPLAY::SET_BIT(&iVar49, iVar35);
								iVar53++;
							}
							iVar52++;
						}
						iVar52 = false;
						while (iVar52 < 32)
						{
							iVar35 = int_to_playerindex(iVar52);
							if (func_658(iVar35, 0, 1) && !GAMEPLAY::IS_BIT_SET(iVar49, iVar35))
							{
								iVar35 = int_to_playerindex(iVar52);
							}
							else
							{
								iVar35 = func_48();
							}
							if (func_338(iVar35))
							{
								if (func_658(int_to_playerindex(iVar52), 0, 1))
								{
									iVar44 = iVar35;
									iVar42 = Global_1587523[iVar44 /*444*/].f_195.f_6;
									Var38 = {func_329(iVar35)};
									*(uParam4[iVar52 /*13*/]) = {func_38(iVar35)};
									iVar37 = func_323(iVar35);
									sVar36 = "";
									if (iVar37 != 0)
									{
										sVar36 = get_pedheadshot_txd_string(iVar37);
									}
									Global_1573685++;
									iVar51 = func_316(iVar35, 1);
									if (iVar34)
									{
										if (func_55(iVar35, 1))
										{
											iVar53 = iVar1[iVar52];
										}
										else
										{
											iVar53 = iVar0 + iVar56;
											iVar56++;
										}
									}
									*(uParam3.f_38[iVar44 /*2*/]).f_1 = iVar53;
									func_306(get_player_name(iVar35), iParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar51, iVar50);
									iVar53++;
								}
							}
							iVar52++;
						}
						if (GAMEPLAY::IS_BIT_SET(*uParam3.f_33, 11))
						{
							func_303(uParam3, iParam1);
						}
						func_3(uParam3.f_21);
						func_302();
						*uParam3.f_27 = 2;
					}
					if (*uParam3.f_27 == 2)
					{
						if (!GAMEPLAY::IS_BIT_SET(*uParam3.f_33, 7))
						{
							func_301(uParam3, iParam1);
							func_300(iParam1, 0, 1);
							GAMEPLAY::SET_BIT(uParam3.f_33, 7);
						}
						func_301(uParam3, iParam1);
						if (!GAMEPLAY::IS_BIT_SET(*uParam3.f_33, 11))
						{
							GAMEPLAY::SET_BIT(uParam3.f_33, 11);
						}
						if (func_296(uParam3))
						{
							Global_1573833 = 1;
						}
						func_294(uParam3);
						if (Global_1573833 == 1)
						{
							*uParam3.f_27 = 0;
						}
						if (Global_1573833 == 2)
						{
							*uParam3.f_27 = 0;
						}
					}
					if (has_scaleform_movie_loaded(*iParam1))
					{
						_set_2d_layer(7);
						draw_scaleform_movie(*iParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						_set_2d_layer(4);
					}
				}
			}
		}
		else
		{
			*uParam3.f_27 = 0;
			func_302();
			func_348(0);
			if (GAMEPLAY::IS_BIT_SET(*uParam3.f_33, 7))
			{
				GAMEPLAY::CLEAR_BIT(uParam3.f_33, 7);
			}
			if (GAMEPLAY::IS_BIT_SET(*uParam3.f_33, 10))
			{
				GAMEPLAY::CLEAR_BIT(uParam3.f_33, 10);
			}
		}
	}
	_0xE3A3DB414A373DAB();
}

void func_294(auto uParam0)
{
	if (!func_18(uParam0.f_21))
	{
		func_11(uParam0.f_21, 0, 0);
	}
	else if (func_5(uParam0.f_21, 250, 0))
	{
		func_3(uParam0.f_21);
		func_295(0);
	}
}

void func_295(int iParam0)
{
	if (iParam0)
	{
		if (Global_1573833 != 2)
		{
			Global_1573833 = 2;
		}
	}
	else
	{
		switch (Global_1573833)
		{
			case 0:
				Global_1573833 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_296(auto uParam0)
{
	auto uVar0;
	int iVar1;
	struct<13> Var2;
	int iVar15;
	int iVar16;
	
	iVar16 = 0;
	uVar0 = *uParam0.f_37;
	iVar15 = int_to_playerindex(*uParam0.f_37);
	if (iVar15 != func_48() && func_658(iVar15, 0, 1))
	{
		Var2 = {func_38(iVar15)};
		iVar1 = func_299(uParam0, *uParam0.f_37);
		if (func_298(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (network_can_communicate_with_gamer(&Var2))
					{
						if (network_is_gamer_talking(&Var2))
						{
							iVar16 = 1;
							func_297(uParam0, uVar0, 2);
						}
					}
					else if (network_is_gamer_muted_by_me(&Var2))
					{
						iVar16 = 1;
						func_297(uParam0, uVar0, 1);
					}
					break;
				
				case 2:
					if (network_can_communicate_with_gamer(&Var2))
					{
						if (!network_is_gamer_talking(&Var2))
						{
							iVar16 = 1;
							func_297(uParam0, uVar0, 0);
						}
					}
					else
					{
						iVar16 = 1;
						func_297(uParam0, uVar0, 0);
					}
					break;
				
				case 1:
					if (network_can_communicate_with_gamer(&Var2))
					{
						if (!network_is_gamer_muted_by_me(&Var2))
						{
							iVar16 = 1;
							func_297(uParam0, uVar0, 0);
						}
					}
					else if (!network_is_gamer_muted_by_me(&Var2))
					{
						iVar16 = 1;
						func_297(uParam0, uVar0, 0);
					}
					break;
				}
			}
	}
	*uParam0.f_37++;
	if (*uParam0.f_37 >= 32)
	{
		*uParam0.f_37 = 0;
	}
	return iVar16;
}

void func_297(auto uParam0, auto uParam1, int iParam2)
{
	*uParam0.f_38[uParam1 /*2*/] = iParam2;
}

int func_298(auto uParam0, auto uParam1, auto uParam2, auto uParam3, auto uParam4, auto uParam5, auto uParam6, auto uParam7, auto uParam8, auto uParam9, auto uParam10, auto uParam11, auto uParam12)
{
	return network_is_handle_valid(&uParam0, 13);
}

auto func_299(auto uParam0, auto uParam1)
{
	return *uParam0.f_38[uParam1 /*2*/];
}

void func_300(int iParam0, int iParam1, int iParam2)
{
	if (_push_scaleform_movie_function(*iParam0, "COLLAPSE"))
	{
		_push_scaleform_movie_function_parameter_bool(iParam1);
		_pop_scaleform_movie_function_void();
	}
	if (iParam2 == 1)
	{
		if (_push_scaleform_movie_function(*iParam0, "DISPLAY_VIEW"))
		{
			_pop_scaleform_movie_function_void();
		}
	}
}

void func_301(auto uParam0, int iParam1)
{
	if (!GAMEPLAY::IS_BIT_SET(*uParam0.f_33, 10))
	{
		_push_scaleform_movie_function(*iParam1, "SET_HIGHLIGHT");
		_push_scaleform_movie_function_parameter_int(*uParam0.f_35);
		_pop_scaleform_movie_function_void();
		GAMEPLAY::SET_BIT(uParam0.f_33, 10);
	}
}

void func_302()
{
	if (Global_1573833 != 0)
	{
		Global_1573833 = 0;
	}
}

void func_303(auto uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = false;
	while (iVar0 < 32)
	{
		iVar2 = int_to_playerindex(iVar0);
		if (iVar2 != func_48())
		{
			if (func_658(iVar2, 0, 1))
			{
				if (*(uParam0.f_38[iVar0 /*2*/]).f_1 != -1)
				{
					iVar1 = func_305(*uParam0.f_38[iVar0 /*2*/], 0);
					func_304(iParam1, *(uParam0.f_38[iVar0 /*2*/]).f_1, iVar1, Global_1587523[iVar0 /*444*/].f_195.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_304(auto uParam0, int iParam1, int iParam2, int iParam3)
{
	if (has_scaleform_movie_loaded(*uParam0))
	{
		if (_push_scaleform_movie_function(*uParam0, "SET_ICON"))
		{
			_push_scaleform_movie_function_parameter_int(iParam1);
			_push_scaleform_movie_function_parameter_int(iParam2);
			if (iParam2 == 65)
			{
				_push_scaleform_movie_function_parameter_int(iParam3);
			}
			_pop_scaleform_movie_function_void();
		}
	}
}

int func_305(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 65;
	if (iParam1)
	{
		iVar0 = 116;
	}
	switch (iParam0)
	{
		case 2:
			return 47;
		
		case 1:
			return 49;
		
		default:
	}
	return iVar0;
}

void func_306(char* sParam0, int iParam1, auto uParam2, int iParam3, char* sParam4, auto uParam5, auto uParam6, auto uParam7, char* sParam8, int iParam9, int iParam10, int iParam11)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_313() && iParam3 < func_312())
	{
		iParam3 %= 16;
		iVar0 = iParam3 + 1;
		if (Global_1573687)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1573833 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (_push_scaleform_movie_function(*iParam1, sVar1))
		{
			_push_scaleform_movie_function_parameter_int(iParam3);
			if (GAMEPLAY::IS_BIT_SET(*uParam2.f_33, 8) || *uParam2.f_108 == 6)
			{
				func_311("");
			}
			else
			{
				_push_scaleform_movie_function_parameter_int(iParam9);
			}
			func_311(sParam0);
			_push_scaleform_movie_function_parameter_int(iParam10);
			if (*uParam2.f_108 == 6)
			{
				func_311("");
			}
			else
			{
				_push_scaleform_movie_function_parameter_int(65);
			}
			_push_scaleform_movie_function_parameter_int(-1);
			func_311("");
			if (*uParam2.f_108 == 6)
			{
				func_311("");
			}
			else
			{
				func_311(&sParam4);
			}
			_push_scaleform_movie_function_parameter_bool(*uParam2.f_36);
			_push_scaleform_movie_function_parameter_string(sParam8);
			_push_scaleform_movie_function_parameter_string(sParam8);
			if (func_310(uParam2))
			{
				func_309("DPAD_FRIEND");
			}
			else if (func_308(uParam2))
			{
				func_309("DPAD_FRIEND");
			}
			else if (func_307(uParam2))
			{
				func_309("DPAD_CREW");
			}
			else
			{
				func_309("");
			}
			_pop_scaleform_movie_function_void();
		}
	}
}

int func_307(auto uParam0)
{
	return GAMEPLAY::IS_BIT_SET(*uParam0.f_33, 6);
}

int func_308(auto uParam0)
{
	return GAMEPLAY::IS_BIT_SET(*uParam0.f_33, 5);
}

void func_309(char* sParam0)
{
	_begin_text_component(sParam0);
	_end_text_component();
}

bool func_310(auto uParam0)
{
	if (func_308(uParam0) && func_307(uParam0))
	{
		return true;
	}
	return false;
}

void func_311(char* sParam0)
{
	_0xE83A3E3557A56640(sParam0);
}

int func_312()
{
	int iVar0;
	
	if (Global_1573687)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_313()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1573687)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_314(int iParam0, auto uParam1, int iParam2, char* sParam3, auto uParam4, auto uParam5, auto uParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12, int iParam13, int iParam14, char* sParam15, char* sParam16, int iParam17, int iParam18, int iParam19)
{
	int iVar0;
	char* sVar1;
	
	if (iParam2 >= func_313() && iParam2 < func_312())
	{
		iParam2 %= 16;
		iVar0 = iParam2 + 1;
		if (Global_1573687)
		{
			iVar0 += 16;
		}
		if (iParam19)
		{
			iVar0 = iParam18;
			if (iVar0 == -2)
			{
				iParam9 = -1;
			}
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1573833 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (has_scaleform_movie_loaded(*iParam0))
		{
			if (_push_scaleform_movie_function(*iParam0, sVar1))
			{
				_push_scaleform_movie_function_parameter_int(iParam2);
				if (GAMEPLAY::IS_BIT_SET(*uParam1.f_33, 8) || *uParam1.f_108 == 6)
				{
					func_311("");
				}
				else
				{
					_push_scaleform_movie_function_parameter_int(iParam8);
				}
				if (*uParam1.f_108 == 6 && !is_string_null_or_empty(sParam15))
				{
					func_309(sParam15);
				}
				else
				{
					func_311(uParam1.f_1);
				}
				_push_scaleform_movie_function_parameter_int(iParam10);
				if (*uParam1.f_108 == 6)
				{
					func_311("");
				}
				else
				{
					_push_scaleform_movie_function_parameter_int(65);
				}
				if (iParam11 == 1)
				{
					_push_scaleform_movie_function_parameter_int(iVar0);
				}
				else
				{
					_push_scaleform_movie_function_parameter_int(-1);
				}
				if (func_339())
				{
					func_311("");
				}
				else if (*uParam1.f_108 == 6 && !is_string_null_or_empty(sParam15))
				{
					_begin_text_component("FM_AE_ONE_INT");
					_add_text_component_item_string(sParam15);
					add_text_component_integer(iParam17);
					_end_text_component();
				}
				else if (*uParam1.f_108 == 5 && !is_string_null_or_empty(sParam15))
				{
					_begin_text_component("FM_AE_ONE_INT");
					_add_text_component_item_string(sParam15);
					add_text_component_integer(iParam17);
					_end_text_component();
				}
				else if ((*uParam1.f_108 == 7 && !is_string_null_or_empty(sParam15)) && !is_string_null_or_empty(sParam16))
				{
					_begin_text_component("FM_AE_TWO_INT");
					_add_text_component_item_string(sParam15);
					_add_text_component_item_string(sParam16);
					add_text_component_integer(iParam17);
					_end_text_component();
				}
				else if (*uParam1.f_108 == 8 && !is_string_null_or_empty(uParam1.f_104))
				{
					_begin_text_component("FM_AE_UNIT");
					if (fParam12 != -1f)
					{
						add_text_component_float(fParam12, 1);
					}
					if (iParam9 != -1)
					{
						add_text_component_integer(iParam9);
					}
					_add_text_component_item_string(uParam1.f_104);
					_end_text_component();
				}
				else if (*uParam1.f_108 == 9)
				{
					_begin_text_component("FM_AE_CASH");
					_add_text_component_substring_cash(iParam9, 1);
					_end_text_component();
				}
				else if (iParam14 > -1)
				{
					if (iParam14 == 0 && !is_string_null_or_empty(uParam1.f_104))
					{
						func_309(uParam1.f_104);
					}
					else
					{
						func_311("");
					}
				}
				else if (iParam13 != -1)
				{
					_begin_text_component("STRING");
					add_text_component_substring_time(iParam13, 6);
					_end_text_component();
				}
				else if (fParam12 != -1f)
				{
					_begin_text_component("NUMBER");
					add_text_component_float(fParam12, 1);
					_end_text_component();
				}
				else if (iParam9 != -1)
				{
					_push_scaleform_movie_function_parameter_int(iParam9);
				}
				else
				{
					func_311("");
				}
				if (*uParam1.f_108 == 6)
				{
					func_311("");
				}
				else
				{
					func_311(&sParam3);
				}
				_push_scaleform_movie_function_parameter_bool(*uParam1.f_36);
				if (iParam11 == 1 || is_string_null_or_empty(sParam7))
				{
					func_311("");
					func_311("");
				}
				else
				{
					_push_scaleform_movie_function_parameter_string(sParam7);
					_push_scaleform_movie_function_parameter_string(sParam7);
				}
				if (func_310(uParam1))
				{
					func_309("DPAD_FRIEND");
				}
				else if (func_308(uParam1))
				{
					func_309("DPAD_FRIEND");
				}
				else if (func_307(uParam1))
				{
					func_309("DPAD_CREW");
				}
				else
				{
					func_309("");
				}
				_pop_scaleform_movie_function_void();
			}
		}
	}
}

bool func_315(int iParam0)
{
	return false;
	switch (iParam0)
	{
		case 11:
		case 12:
			return true;
		
		default:
	}
	return false;
}

int func_316(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!iParam1 && func_273(iParam0)) && !func_272(iParam0))
	{
		iVar0 = func_153();
	}
	iVar1 = func_138(iParam0);
	if (!iVar1 == -1)
	{
		return func_136(iVar1);
	}
	return iVar0;
}

char* func_317(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (_0xD3D15555431AB793())
			{
				if (iParam1)
				{
					return "AMCH_M_LB";
				}
				else if (iParam2)
				{
					return "AMCH_M";
				}
				else
				{
					return "AMCH_METRES";
				}
			}
			else if (iParam1)
			{
				return "AMCH_FT_LB";
			}
			else if (iParam2)
			{
				return "AMCH_FT";
			}
			else
			{
				return "AMCH_FEET";
			}
			break;
		
		case 2:
			if (_0xD3D15555431AB793())
			{
				if (iParam1)
				{
					return "AMCH_KMH_LB";
				}
				else if (iParam2)
				{
					return "AMCH_KMHN";
				}
				else
				{
					return "AMCH_KMH";
				}
			}
			else if (iParam1)
			{
				return "AMCH_MPH_LB";
			}
			else if (iParam2)
			{
				return "AMCH_MPHN";
			}
			else
			{
				return "AMCH_MPH";
			}
			break;
		
		case 7:
			if (iParam1 || iParam2)
			{
				return "";
			}
			else
			{
				return "AMCH_VEH";
			}
			break;
		
		case 15:
		case 16:
		case 17:
		case 18:
			if (iParam1 || iParam2)
			{
				return "";
			}
			else if (iParam3 != 1)
			{
				return "AMCH_KILLS";
			}
			else
			{
				return "AMCH_KILL";
			}
			break;
	}
	if (iParam1 || iParam2)
	{
		return "";
	}
	return "AMCH_EMPTY";
}

bool func_318(auto uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_322(iParam3))
	{
		*fParam1 = func_319(iParam3, iParam2) / 10f;
		return true;
	}
	if (func_315(iParam3))
	{
		*fParam1 = func_319(iParam3, iParam2) / 1000f;
		return true;
	}
	*uParam0 = iParam2;
	return false;
}

float func_319(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (_0xD3D15555431AB793())
			{
				return to_float(iParam1);
			}
			else
			{
				return func_321(to_float(iParam1));
			}
			break;
		
		case 2:
			if (_0xD3D15555431AB793())
			{
				return to_float(iParam1);
			}
			else
			{
				return func_320(to_float(iParam1));
			}
			break;
	}
	return to_float(iParam1);
}

float func_320(float fParam0)
{
	return fParam0 / 1.609344f;
}

float func_321(float fParam0)
{
	return fParam0 / 0.3048f;
}

bool func_322(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 3:
		case 5:
		case 4:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			return true;
		
		default:
	}
	return false;
}

int func_323(int iParam0)
{
	int iVar0;
	
	iVar0 = func_326(iParam0);
	if (iVar0 == -1)
	{
		func_324(iParam0, 1);
		return 0;
	}
	Global_1348553[iVar0 /*5*/].f_4 = 1;
	return Global_1348553[iVar0 /*5*/].f_2;
}

void func_324(int iParam0, int iParam1)
{
	if (!func_658(iParam0, 0, 1))
	{
		return;
	}
	if (func_326(iParam0) != -1)
	{
		return;
	}
	if (Global_1348716)
	{
		if (iParam0 == Global_1348716.f_1)
		{
			return;
		}
	}
	if (func_325(iParam0))
	{
		return;
	}
	if (Global_1348754 >= 32)
	{
		return;
	}
	Global_1348721[Global_1348754] = iParam0;
	Global_1348754++;
	if (iParam1)
	{
	}
}

bool func_325(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1348754)
	{
		if (Global_1348721[iVar0] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_326(int iParam0)
{
	int iVar0;
	
	if (!func_658(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1348714 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1348714)
	{
		if (Global_1348553[iVar0 /*5*/].f_1 == iParam0)
		{
			if (is_pedheadshot_valid(Global_1348553[iVar0 /*5*/].f_2) && is_pedheadshot_ready(Global_1348553[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_327(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_327(int iParam0)
{
	char[64] cVar0;
	char[64] cVar16;
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1348714)
	{
		return;
	}
	if (is_pedheadshot_valid(Global_1348553[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1348553[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, get_pedheadshot_txd_string(Global_1348553[iParam0 /*5*/].f_2), 64);
			_0x317EBA71D7543F52(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		unregister_pedheadshot(Global_1348553[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1348714)
	{
		Global_1348553[iVar32 /*5*/] = {Global_1348553[iVar33 /*5*/]};
		iVar32++;
		iVar33++;
	}
	func_328(&(Global_1348553[iVar32 /*5*/]));
	Global_1348714--;
}

void func_328(auto uParam0)
{
	*uParam0 = 0;
	*uParam0.f_1 = func_48();
	*uParam0.f_2 = 0;
	*uParam0.f_4 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		*uParam0.f_3 = NETWORK::GET_NETWORK_TIME();
	}
}

struct<4> func_329(int iParam0)
{
	struct<4> Var0;
	
	if (func_658(iParam0, 0, 1))
	{
		Global_2459440 = {func_38(iParam0)};
		if (is_durango_version())
		{
			if (func_298(Global_2459440))
			{
				if (!_0xB57A49545BA53CE7(&Global_2459440))
				{
					return Var0;
				}
			}
		}
		else if (!_0x72D918C99BCACC54(0))
		{
			return Var0;
		}
		if (func_333(&Global_2459440))
		{
			Global_2459370 = {func_331(iParam0)};
			func_330(&Global_2459370, &Var0);
		}
	}
	return Var0;
}

void func_330(auto uParam0, char* sParam1)
{
	_0xF45352426FF3A4F0(uParam0, 35, sParam1);
}

struct<35> func_331(int iParam0)
{
	struct<13> Var0;
	struct<35> Var13;
	
	if (func_332(iParam0))
	{
		return Global_1315947[player_id() /*35*/];
	}
	Var0 = {func_38(iParam0)};
	network_clan_player_get_desc(&Var13, 35, &Var0);
	return Var13;
}

bool func_332(int iParam0)
{
	if (iParam0 == player_id())
	{
		return true;
	}
	return false;
}

bool func_333(auto uParam0)
{
	if (is_player_online())
	{
		if (_network_player_is_in_clan() && network_clan_player_is_active(uParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_334(int iParam0, int iParam1)
{
	if (iParam1 == 23)
	{
		if ((func_173(iParam0) || func_337(iParam0)) || func_199(iParam0))
		{
			return false;
		}
	}
	if (!func_336(iParam0))
	{
		return false;
	}
	if ((!func_335(iParam0) && Global_2418472[iParam0 /*313*/].f_232 == -1) && !func_346(iParam0))
	{
		return false;
	}
	return true;
}

bool func_335(int iParam0)
{
	if (func_658(iParam0, 0, 1))
	{
		if (func_658(player_id(), 0, 1))
		{
			if (_0x9DE986FC9A87C474(iParam0, player_id()))
			{
				return true;
			}
		}
	}
	return false;
}

int func_336(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1587523[iParam0 /*444*/].f_131, 22);
}

int func_337(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (GAMEPLAY::IS_BIT_SET(Global_1610316[iParam0 /*174*/].f_1, 10) || GAMEPLAY::IS_BIT_SET(Global_1610316[iParam0 /*174*/].f_1, 9));
	}
	return false;
}

bool func_338(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_48())
	{
		return false;
	}
	if (func_33(iParam0, 0))
	{
		return false;
	}
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_1587523[iVar0 /*444*/].f_131, 2))
		{
			return false;
		}
	}
	return true;
}

bool func_339()
{
	switch (func_195(player_id()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return true;
			break;
	}
	if (func_272(player_id()))
	{
		switch (func_340(player_id()))
		{
			case 148:
			case 151:
			case 152:
			case 153:
			case 157:
			case 159:
			case 162:
			case 164:
			case 142:
				return true;
				break;
			}
	}
	return false;
}

int func_340(int iParam0)
{
	if (func_28(iParam0, 0))
	{
		return Global_1610316[iParam0 /*174*/].f_10.f_28;
	}
	return -1;
}

bool func_341(int iParam0, int iParam1)
{
	if (Global_1610316[iParam0 /*174*/].f_10.f_28 != -1 && func_342(Global_1610316[iParam0 /*174*/].f_10.f_28))
	{
		return true;
	}
	if (iParam1 && Global_1610316[iParam0 /*174*/].f_10.f_27 != -1)
	{
		if (func_342(Global_1610316[iParam0 /*174*/].f_10.f_27))
		{
			return true;
		}
	}
	return false;
}

bool func_342(int iParam0)
{
	switch (iParam0)
	{
		case 155:
		case 160:
		case 153:
		case 162:
		case 154:
		case 163:
		case 171:
		case 172:
			return true;
		
		default:
	}
	return false;
}

void func_343(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = false;
	while (iVar0 < 32)
	{
		if (func_658(int_to_playerindex(iVar0), 0, 1))
		{
			iVar1 = int_to_playerindex(iVar0);
			if (!func_33(iVar1, 0))
			{
				if ((_0x9DE986FC9A87C474(iVar1, player_id()) || Global_2418472[iVar1 /*313*/].f_232 != -1) || func_346(iVar1))
				{
					if (func_344(iVar1, iParam1, 0))
					{
						*iParam0[iVar0] = *iParam2;
						*iParam2++;
						*iParam3++;
					}
				}
			}
		}
		iVar0++;
	}
}

int func_344(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 != func_48())
	{
		if (!iParam2)
		{
			if (func_345(iParam0, iParam1))
			{
				return false;
			}
		}
		if (Global_1610316[iParam0 /*174*/].f_10 != func_48())
		{
			return iParam1 == Global_1610316[iParam0 /*174*/].f_10;
		}
	}
	return false;
}

int func_345(int iParam0, int iParam1)
{
	if (iParam1 != func_48())
	{
		if (iParam0 != func_48())
		{
			if (Global_1610316[iParam0 /*174*/].f_10 != func_48())
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

int func_346(int iParam0)
{
	return Global_1587523[iParam0 /*444*/].f_180 != 0;
}

void func_347(int iParam0)
{
	if (has_scaleform_movie_loaded(*iParam0))
	{
		_push_scaleform_movie_function(*iParam0, "SET_DATA_SLOT_EMPTY");
		_push_scaleform_movie_function_parameter_int(false);
		_pop_scaleform_movie_function_void();
	}
}

void func_348(int iParam0)
{
	if (iParam0)
	{
		if (Global_1338619.f_2 == 0)
		{
			Global_1338619.f_2 = 1;
		}
	}
	else if (Global_1338619.f_2 == 1)
	{
		Global_1338619.f_2 = 0;
	}
}

void func_349()
{
	if (GAMEPLAY::IS_BIT_SET(Global_2460486.f_4426, true))
	{
		if (func_183())
		{
			func_350();
		}
	}
}

void func_350()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2428492.f_2171[iVar0 /*72*/].f_2 != 0)
		{
			Global_2428492.f_2171[iVar0 /*72*/].f_2 = 5;
			GAMEPLAY::SET_BIT(&(Global_2428492.f_2171[iVar0 /*72*/].f_63), false);
		}
		iVar0++;
	}
}

bool func_351()
{
	if (GAMEPLAY::IS_BIT_SET(Global_2460486.f_4426, false) && func_183())
	{
		return true;
	}
	if (GAMEPLAY::IS_BIT_SET(Global_2460486.f_4426, true) && func_183())
	{
		return true;
	}
	return false;
}

bool func_352()
{
	if (func_183())
	{
		if (func_43(Global_2428492.f_2171[0 /*72*/].f_1))
		{
			return true;
		}
	}
	return false;
}

bool func_353()
{
	if (func_183())
	{
		if (func_46(Global_2428492.f_2171[0 /*72*/].f_1))
		{
			return true;
		}
	}
	return false;
}

void func_354(int iParam0)
{
	Global_1338619.f_1 = Global_1338619;
	Global_1338619 = iParam0;
}

bool func_355(int iParam0, int iParam1, auto uParam2, auto uParam3, int iParam4, int iParam5)
{
	struct<4> Var0;
	char* sVar4;
	int iVar5;
	int iVar6;
	float fVar7;
	int iVar8;
	
	StringCopy(&Var0, "", 16);
	iVar6 = func_392(iParam1);
	if (iParam1 == 17)
	{
		iVar5 = true;
	}
	fVar7 = func_391();
	if (iParam1 == 23 || iParam1 == 24)
	{
		if (func_390())
		{
			if (func_389() > 0 && Global_1573687)
			{
				_0x25F87B30C382FCA7();
				_0x55598D21339CB998(fVar7);
				hide_hud_component_this_frame(18);
				if (is_help_message_being_displayed())
				{
					hide_help_text_this_frame();
				}
				hide_hud_component_this_frame(10);
			}
		}
	}
	if (!iParam5)
	{
		if (!func_380())
		{
			func_379(iParam0, uParam2, 1);
			return false;
		}
	}
	if (GAMEPLAY::IS_BIT_SET(Global_2460486.f_4429, 26))
	{
		func_379(iParam0, uParam2, 1);
		return false;
	}
	if (!func_18(uParam2.f_19))
	{
		if (func_389() == 1)
		{
			func_378(iVar6, iParam0, 0);
			func_11(uParam2.f_19, 0, 0);
			func_379(iParam0, uParam2, 0);
		}
	}
	if (func_18(uParam2.f_19) || iParam5)
	{
		if (is_help_message_being_displayed())
		{
			hide_help_text_this_frame();
		}
		hide_hud_component_this_frame(10);
		if (func_5(uParam2.f_19, 10000, 0) || (func_389() == 0 && !iParam5))
		{
			func_379(iParam0, uParam2, 1);
			return false;
		}
		else
		{
			if (iVar5 == 0)
			{
				func_377();
				if (iParam1 == 23 || iParam1 == 24)
				{
					_0x25F87B30C382FCA7();
				}
				hide_hud_component_this_frame(18);
			}
			if (GAMEPLAY::IS_BIT_SET(*uParam2.f_33, false))
			{
				Global_1573685 = uParam3;
				Global_1573684 = 1;
				_0x55598D21339CB998(fVar7);
				if (iVar5)
				{
					if (*uParam2.f_34 != Global_1573686)
					{
						GAMEPLAY::CLEAR_BIT(uParam2.f_33, false);
					}
				}
				return true;
			}
			else
			{
				if (iVar5 == 0)
				{
					func_377();
					if (iParam1 == 23 || iParam1 == 24)
					{
						_0x25F87B30C382FCA7();
					}
					hide_hud_component_this_frame(18);
				}
				_0x55598D21339CB998(fVar7);
				if (func_378(iVar6, iParam0, 0))
				{
					func_347(iParam0);
					sVar4 = func_375(iParam1, &(Global_1617379.f_70372), iParam4);
					if (iParam4)
					{
						func_372(iParam0, sVar4, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 23)
					{
						func_366(iParam0, func_369(uParam2), func_367(uParam2), -1);
					}
					else if (iParam1 == 24)
					{
						func_363(iParam0, func_365(), func_364(), -1);
					}
					else if (iVar5)
					{
						*uParam2.f_34 = Global_1573686;
						func_372(iParam0, sVar4, "", 0, -1, Global_1573686, 1);
					}
					else
					{
						Var0 = {func_361(iParam1)};
						iVar8 = func_356(iParam1);
						func_372(iParam0, sVar4, &Var0, 1, iVar8, -1, 1);
					}
					GAMEPLAY::SET_BIT(uParam2.f_33, false);
				}
			}
		}
	}
	return false;
}

int func_356(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_360())
	{
		iVar0 = 2;
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 3;
			break;
		
		case 2:
			iVar0 = 3;
			break;
		
		case 1:
			iVar0 = 6;
			break;
		
		case 3:
			iVar0 = 5;
			break;
		
		case 22:
			iVar0 = 21;
			break;
		
		case 4:
		case 5:
		case 6:
		case 8:
			iVar0 = 4;
			break;
		
		case 7:
			iVar0 = 10;
			break;
		
		case 9:
		case 10:
		case 11:
		case 14:
			iVar0 = 2;
			break;
		
		case 12:
			iVar0 = 17;
			break;
		
		case 13:
			iVar0 = 18;
			break;
		
		case 15:
			if (func_359(player_id()))
			{
				iVar0 = 20;
			}
			if (func_358(player_id()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_357(player_id()))
	{
		iVar0 = 2;
	}
	return iVar0;
}

int func_357(int iParam0)
{
	return Global_2418472[iParam0 /*313*/].f_114 == 4;
}

int func_358(int iParam0)
{
	return Global_2418472[iParam0 /*313*/].f_114 == 7;
}

int func_359(int iParam0)
{
	return Global_2418472[iParam0 /*313*/].f_114 == 2;
}

int func_360()
{
	return Global_1617379.f_1 == 0;
}

struct<4> func_361(int iParam0)
{
	char[16] cVar0;
	
	StringCopy(&cVar0, "", 16);
	if (func_362(player_id()) || func_357(player_id()))
	{
		return cVar0;
	}
	switch (iParam0)
	{
		case 9:
		case 10:
		case 11:
		case 14:
		case 12:
		case 13:
		case 15:
			StringCopy(&cVar0, "LBD_DIF_", 16);
			StringIntConCat(&cVar0, Global_1617379.f_23, 16);
			break;
	}
	return cVar0;
}

int func_362(int iParam0)
{
	return Global_2418472[iParam0 /*313*/].f_114 == 5;
}

void func_363(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (has_scaleform_movie_loaded(*iParam0))
	{
		_push_scaleform_movie_function(*iParam0, "SET_TITLE");
		if (is_string_null_or_empty(sParam2))
		{
			func_309(sParam1);
		}
		else
		{
			_begin_text_component("FM_AE_BRACKT");
			_add_text_component_item_string(sParam1);
			_add_text_component_item_string(sParam2);
			_end_text_component();
		}
		func_309("");
		if (iParam3 != -1)
		{
			_push_scaleform_movie_function_parameter_int(iParam3);
		}
		_pop_scaleform_movie_function_void();
	}
}

char* func_364()
{
	switch (func_340(player_id()))
	{
		case 163:
			return "BD_SORT_1";
			break;
		
		case 160:
			return "BD_SORT_4";
			break;
		
		case 154:
			return "BD_SORT_3";
			break;
		
		case 155:
			return "BD_SORT_3";
			break;
	}
	return "";
}

char* func_365()
{
	switch (func_340(player_id()))
	{
		case 142:
			return "PIM_MAGM210";
			break;
		
		case 163:
			return "PIM_MAGM608";
			break;
		
		case 160:
			return "PIM_MAGM604";
			break;
		
		case 154:
			return "PIM_MAGM602";
			break;
		
		case 155:
			return "PIM_MAGM603";
			break;
		
		case 148:
			return "PIM_MAGM201";
			break;
		
		case 151:
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			return "PIM_MAGM601";
			break;
		
		case 157:
			return "PIM_MAGM207";
			break;
		
		case 159:
			return "PIM_MAGM206";
			break;
		
		case 162:
			return "PIM_MAGM607";
			break;
		
		case 164:
			return "PIM_MAGM212";
			break;
		
		case 166:
			return "GB_DPAD_HEAD";
		
		case 167:
			return "GB_DPAD_BUY";
		
		case 168:
			return "GB_DPAD_SELL";
		
		case 169:
			return "GB_DPAD_DEF";
		
		case 170:
			return "GB_DPAD_AIR";
		
		case 171:
			return "GB_DPAD_CASH";
		
		case 172:
			return "GB_DPAD_SAL";
		
		case 173:
			return "GB_DPAD_FRA";
	}
	return "";
}

void func_366(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (has_scaleform_movie_loaded(*iParam0))
	{
		_push_scaleform_movie_function(*iParam0, "SET_TITLE");
		if (is_string_null_or_empty(sParam2))
		{
			func_309(sParam1);
		}
		else if (func_195(player_id()) == 133)
		{
			_begin_text_component("FM_AE_BRACKT_C");
			_add_text_component_item_string(sParam1);
			_add_text_component_item_string(sParam2);
			_end_text_component();
		}
		else
		{
			_begin_text_component("FM_AE_BRACKT");
			_add_text_component_item_string(sParam1);
			_add_text_component_item_string(sParam2);
			_end_text_component();
		}
		func_309("");
		if (iParam3 != -1)
		{
			_push_scaleform_movie_function_parameter_int(iParam3);
		}
		_pop_scaleform_movie_function_void();
	}
}

char* func_367(auto uParam0)
{
	int iVar0;
	
	iVar0 = func_195(player_id());
	if (func_368())
	{
		if (*uParam0.f_103 != -1)
		{
			iVar0 = *uParam0.f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "";
		
		case 132:
			return "FM_AE_SORT_5";
		
		case 133:
			switch (func_110())
			{
				case 0:
					return "FM_AE_SORT_2";
				
				case 1:
					return "FM_AE_SORT_2";
				
				case 2:
					return "FM_AE_SORT_3";
				
				case 3:
					return "FM_AE_SORT_2";
				
				case 4:
					return "FM_AE_SORT_2";
				
				case 5:
					return "FM_AE_SORT_2";
				
				case 6:
					return "FM_AE_SORT_2";
				
				case 7:
					return "FM_AE_SORT_13";
				
				case 8:
					return "FM_AE_SORT_4";
				
				case 9:
					return "FM_AE_SORT_2";
				
				case 10:
					return "FM_AE_SORT_2";
				
				case 11:
					return "FM_AE_SORT_2";
				
				case 12:
					return "FM_AE_SORT_2";
				
				case 13:
					return "FM_AE_SORT_2";
				
				case 14:
					return "FM_AE_SORT_5";
				
				case 15:
					return "FM_AE_SORT_9";
				
				case 16:
					return "FM_AE_SORT_9";
				
				case 17:
					return "FM_AE_SORT_9";
				
				case 18:
					return "FM_AE_SORT_9";
				
				default:
			}
			break;
		
		case 136:
			return "";
		
		case 138:
			return "";
		
		case 139:
			return "FM_AE_SORT_10";
		
		case 140:
			return "";
		
		case 141:
			return "FM_AE_SORT_5";
		
		case 144:
			return "FM_AE_SORT_1";
		
		case 129:
			return "FM_AE_SORT_9";
	}
	return "";
}

auto func_368()
{
	return Global_1587522;
}

char* func_369(auto uParam0)
{
	int iVar0;
	
	iVar0 = func_195(player_id());
	if (func_368())
	{
		if (*uParam0.f_103 != -1)
		{
			iVar0 = *uParam0.f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "PIM_TA9";
		
		case 132:
			if (func_371() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_371() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_110())
			{
				case 0:
					return "AMCH_0SLC";
				
				case 1:
					return "AMCH_1SLC";
				
				case 2:
					return "AMCH_2SLC";
				
				case 3:
					return "AMCH_3SLC";
				
				case 4:
					return "AMCH_4SLC";
				
				case 5:
					return "AMCH_5SLC";
				
				case 6:
					return "AMCH_6SLC";
				
				case 7:
					return "AMCH_7SLC";
				
				case 8:
					return "AMCH_8SLC";
				
				case 9:
					return "AMCH_12SLC";
				
				case 10:
					return "AMCH_13SLC";
				
				case 11:
					return "AMCH_15SLC";
				
				case 12:
					return "AMCH_16SLC";
				
				case 13:
					return "AMCH_23SLC";
				
				case 14:
					return "AMCH_9SLC";
				
				case 15:
					return "AMCH_19SLC";
				
				case 16:
					return "AMCH_20SLC";
				
				case 17:
					return "AMCH_21SLC";
				
				case 18:
					return "AMCH_22SLC";
				
				default:
			}
			break;
		
		case 136:
			return "PIM_TA10";
		
		case 138:
			return "PIM_TA4";
		
		case 139:
			return "PIM_TA5";
		
		case 140:
			return "PIM_TA3";
		
		case 141:
			return "PIM_TA8";
		
		case 144:
			return "PIM_TA2";
		
		case 129:
			if (func_370() == 1)
			{
				return "FM_AE_TITL_12";
			}
			else
			{
				return "PIM_TA7";
			}
			break;
		
		case 146:
			return "PIM_TA6";
	}
	return "";
}

auto func_370()
{
	return Global_2460486.f_4650;
}

int func_371()
{
	if (func_195(player_id()) == 132)
	{
		return Global_2460486.f_4645;
	}
	return -1;
}

void func_372(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (has_scaleform_movie_loaded(*iParam0))
	{
		_push_scaleform_movie_function(*iParam0, "SET_TITLE");
		if (iParam3)
		{
			func_311(sParam1);
		}
		else if (iParam5 != -1)
		{
			_begin_text_component(sParam1);
			add_text_component_integer(iParam5);
			_end_text_component();
		}
		else
		{
			func_309(sParam1);
		}
		if (func_390() && iParam6)
		{
			if (func_374())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = true;
				iVar1 = 2;
			}
			_begin_text_component("LBD_DPD_CNT");
			add_text_component_integer(iVar0);
			add_text_component_integer(iVar1);
			_end_text_component();
		}
		else
		{
			func_309(sParam2);
		}
		if (iParam4 != -1)
		{
			_push_scaleform_movie_function_parameter_int(iParam4);
			if (func_373(player_id()))
			{
				_push_scaleform_movie_function_parameter_int(166);
			}
		}
		_pop_scaleform_movie_function_void();
	}
}

bool func_373(int iParam0)
{
	if (func_359(iParam0) || func_358(iParam0))
	{
		return true;
	}
	return false;
}

auto func_374()
{
	return Global_1573687;
}

char* func_375(int iParam0, char* sParam1, int iParam2)
{
	auto uVar0;
	
	if (iParam0 == 17)
	{
		uVar0 = func_376();
		return uVar0;
	}
	else if (iParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 21)
	{
		if (Global_1573851 == 0)
		{
			Global_1573851 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!is_string_null_or_empty(sParam1))
	{
		if (Global_1573851 == 1)
		{
			Global_1573851 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1573851 == 0)
		{
			Global_1573851 = 1;
		}
		switch (iParam0)
		{
			case 0:
				return "HUD_LBD_DM";
				break;
			
			case 1:
				return "HUD_LBD_TDM";
				break;
			
			case 5:
				return "HUD_LBD_GRCE";
				break;
			
			case 4:
			case 6:
				return "HUD_LBD_RCE";
				break;
			
			case 7:
				return "HUD_LBD_BRCE";
				break;
			
			case 15:
			case 11:
			case 14:
			case 12:
			case 10:
			case 9:
			case 13:
			case 16:
				return "HUD_TITLEMC";
				break;
			
			case 3:
				return "HUD_LBD_HRD";
				break;
			
			case 18:
				return "HUD_LBD_SHOO";
				break;
			}
	}
	return sParam1;
}

char* func_376()
{
	if (_0xFBCFA2EA2E206890())
	{
		return "HUD_LBD_FMF";
	}
	if (_0x74732C6CA90DA2B4())
	{
		return "HUD_LBD_FMC";
	}
	if (_0xF3929C2379B60CCE())
	{
		return "HUD_LBD_FMS";
	}
	if (_0xCEF70AA5B3F89BA1())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_377()
{
	Global_36611 = 1;
}

int func_378(int iParam0, int iParam1, int iParam2)
{
	if (iParam0)
	{
		*iParam1 = unk_0x67D02A194A2FC2BD("mp_mm_card_freemode");
	}
	else if (iParam2)
	{
		*iParam1 = unk_0x67D02A194A2FC2BD("MP_SPECTATOR_CARD");
	}
	else
	{
		*iParam1 = unk_0x67D02A194A2FC2BD("mp_matchmaking_card");
	}
	return has_scaleform_movie_loaded(*iParam1);
}

void func_379(int iParam0, auto uParam1, int iParam2)
{
	GAMEPLAY::CLEAR_BIT(uParam1.f_33, 7);
	Global_1573685 = 0;
	func_302();
	Global_1573684 = 0;
	*uParam1.f_27 = 0;
	if (iParam2)
	{
		if (func_18(uParam1.f_19))
		{
			func_3(uParam1.f_19);
		}
	}
	if (has_scaleform_movie_loaded(*iParam0))
	{
		set_scaleform_movie_as_no_longer_needed(iParam0);
	}
	if (GAMEPLAY::IS_BIT_SET(*uParam1.f_33, false))
	{
		GAMEPLAY::CLEAR_BIT(uParam1.f_33, false);
	}
	_0x55598D21339CB998(0f);
}

bool func_380()
{
	if (func_388())
	{
		return false;
	}
	if (func_274())
	{
		return false;
	}
	if (!func_386())
	{
		return false;
	}
	if (!func_260())
	{
		return false;
	}
	if (func_385(8, -1))
	{
		return false;
	}
	if (func_389() == 2)
	{
		return false;
	}
	if (Global_2460486.f_4404)
	{
		return false;
	}
	if (func_102())
	{
		return false;
	}
	else if (!func_189(player_id(), 1) && Global_1311716[0 /*4*/] > 0)
	{
		return false;
	}
	if (((func_384(1) || func_382(1)) || Global_17118.f_124) || Global_17118)
	{
		return false;
	}
	if (is_pause_menu_active())
	{
		return false;
	}
	if (func_598(player_id()))
	{
		return false;
	}
	if (Global_1715399)
	{
		return false;
	}
	if (Global_1715402)
	{
		return false;
	}
	if (func_381(0))
	{
		return false;
	}
	if (GAMEPLAY::IS_BIT_SET(Global_1587523[player_id() /*444*/].f_250.f_7, 4))
	{
		return false;
	}
	return true;
}

int func_381(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_2460486.f_4660.f_18, iParam0);
}

bool func_382(int iParam0)
{
	if (_0xFC859E2374407556())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (func_383(PLAYER::PLAYER_PED_ID()))
			{
				if (is_control_pressed(0, 25) || is_control_pressed(0, 68))
				{
					return false;
				}
			}
		}
	}
	if (Global_17118.f_130)
	{
		return false;
	}
	if (is_control_pressed(0, 19) || (!iParam0 && is_disabled_control_pressed(0, 19)))
	{
		return true;
	}
	if (GAMEPLAY::IS_PC_VERSION())
	{
		if (((is_control_pressed(0, 166) || is_control_pressed(0, 167)) || is_control_pressed(0, 168)) || is_control_pressed(0, 169))
		{
			return true;
		}
		if (!iParam0)
		{
			if (((is_disabled_control_pressed(0, 166) || is_disabled_control_pressed(0, 167)) || is_disabled_control_pressed(0, 168)) || is_disabled_control_pressed(0, 169))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_383(int iParam0)
{
	int iVar0;
	
	if (is_first_person_aim_cam_active())
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, 1);
			if ((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle"))
			{
				return true;
			}
		}
	}
	return false;
}

int func_384(int iParam0)
{
	if (iParam0)
	{
		return (Global_17118.f_4 && Global_17118.f_104 == 4);
	}
	return Global_17118.f_4;
}

int func_385(int iParam0, int iParam1)
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
	return GAMEPLAY::IS_BIT_SET(Global_1338622.f_949, iParam0);
}

bool func_386()
{
	if (func_387())
	{
		return true;
	}
	if (is_screen_faded_out())
	{
		return false;
	}
	if (is_screen_fading_out() || is_screen_fading_in())
	{
		return false;
	}
	if (is_frontend_fading())
	{
		return false;
	}
	return true;
}

auto func_387()
{
	return Global_1312438;
}

int func_388()
{
	return GAMEPLAY::GET_GAME_TIMER() <= Global_17257.f_5745 + 100;
}

auto func_389()
{
	return Global_1338622.f_68;
}

bool func_390()
{
	if (Global_1573686 > 16)
	{
		return true;
	}
	return false;
}

float func_391()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = 1f - 1f - get_safe_zone_size();
	fVar0 = 1f - fVar1 - fVar2;
	return fVar0;
}

bool func_392(int iParam0)
{
	switch (iParam0)
	{
		case 17:
		case 23:
		case 24:
			return true;
			break;
	}
	return false;
}

bool func_393()
{
	if (func_396())
	{
		return true;
	}
	if (func_199(player_id()))
	{
		return false;
	}
	if (func_368())
	{
		return true;
	}
	if (func_273(player_id()))
	{
		switch (func_195(player_id()))
		{
			case 131:
			case 132:
			case 133:
			case 136:
			case 138:
			case 139:
			case 141:
			case 144:
			case 146:
				return true;
				break;
			
			case 140:
				if (!func_394(player_id()))
				{
					return true;
				}
				break;
			
			case 129:
				if (!func_394(player_id()))
				{
					return true;
				}
				break;
			}
	}
	return false;
}

int func_394(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1610316[iParam0 /*174*/].f_1, 4);
}

bool func_395(int iParam0)
{
	if ((iParam0 == 24 && func_273(player_id())) && !func_272(player_id()))
	{
		return true;
	}
	if (iParam0 == 23)
	{
		if (func_28(player_id(), 0) && func_272(player_id()))
		{
			return true;
		}
		if (func_264(player_id()) == 3)
		{
			return true;
		}
	}
	return false;
}

int func_396()
{
	if (func_397(player_id()))
	{
		return Global_1318849;
	}
	return 0;
}

int func_397(int iParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_33(iParam0, 0))
		{
			return network_player_is_rockstar_dev(iParam0);
		}
	}
	return false;
}

void func_398()
{
	if (!func_18(&uLocal_558))
	{
		if (func_399(participant_id_to_int()))
		{
			func_11(&uLocal_558, 0, 1);
		}
	}
}

bool func_399(int iParam0)
{
	if (GAMEPLAY::IS_BIT_SET(Local_394[iParam0 /*5*/].f_4, 5))
	{
		return true;
	}
	if (GAMEPLAY::IS_BIT_SET(Local_394[iParam0 /*5*/].f_4, 4))
	{
		return true;
	}
	if (GAMEPLAY::IS_BIT_SET(Local_394[iParam0 /*5*/].f_4, 6))
	{
		return true;
	}
	if (GAMEPLAY::IS_BIT_SET(Local_394[iParam0 /*5*/].f_4, 7))
	{
		return true;
	}
	return false;
}

void func_400()
{
	if (func_240(1, 1))
	{
		if (!GAMEPLAY::IS_BIT_SET(Local_394[participant_id_to_int() /*5*/].f_4, 8))
		{
			GAMEPLAY::SET_BIT(&(Local_394[participant_id_to_int() /*5*/].f_4), 8);
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(Local_394[participant_id_to_int() /*5*/].f_4, 8))
	{
		GAMEPLAY::CLEAR_BIT(&(Local_394[participant_id_to_int() /*5*/].f_4), 8);
	}
	if (func_240(0, 1))
	{
		if (!GAMEPLAY::IS_BIT_SET(Local_394[participant_id_to_int() /*5*/].f_4, 9))
		{
			GAMEPLAY::SET_BIT(&(Local_394[participant_id_to_int() /*5*/].f_4), 9);
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(Local_394[participant_id_to_int() /*5*/].f_4, 9))
	{
		GAMEPLAY::CLEAR_BIT(&(Local_394[participant_id_to_int() /*5*/].f_4), 9);
	}
	if (func_240(1, 0))
	{
		if (!GAMEPLAY::IS_BIT_SET(Local_394[participant_id_to_int() /*5*/].f_4, 10))
		{
			GAMEPLAY::SET_BIT(&(Local_394[participant_id_to_int() /*5*/].f_4), 10);
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(Local_394[participant_id_to_int() /*5*/].f_4, 10))
	{
		GAMEPLAY::CLEAR_BIT(&(Local_394[participant_id_to_int() /*5*/].f_4), 10);
	}
	if (func_240(0, 0))
	{
		if (!GAMEPLAY::IS_BIT_SET(Local_394[participant_id_to_int() /*5*/].f_4, 11))
		{
			GAMEPLAY::SET_BIT(&(Local_394[participant_id_to_int() /*5*/].f_4), 11);
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(Local_394[participant_id_to_int() /*5*/].f_4, 11))
	{
		GAMEPLAY::CLEAR_BIT(&(Local_394[participant_id_to_int() /*5*/].f_4), 11);
	}
}

void func_401()
{
	int iVar0;
	
	iVar0 = false;
	while (iVar0 < 1)
	{
		func_408(iVar0);
		func_402(iVar0);
		switch (func_15(iVar0))
		{
			case 0:
				break;
			
			case 1:
				break;
			
			case 2:
				break;
		}
		iVar0++;
	}
}

void func_402(int iParam0)
{
	if (func_240(0, 0) || iLocal_3350 == -1)
	{
		func_66(iParam0);
		func_68(iParam0);
		func_63(iParam0, -1);
		return;
	}
	if (func_7(iParam0) == -1)
	{
		if (func_196(participant_id_to_int(), iParam0))
		{
			func_68(iParam0);
		}
		else
		{
			func_404(iParam0);
		}
	}
	else
	{
		func_68(iParam0);
	}
	if (iLocal_3351 != func_64(iParam0, 1))
	{
		switch (iLocal_3352)
		{
			case 0:
				func_63(iParam0, -1);
				iLocal_3352++;
				break;
			
			case 1:
				func_403(iParam0);
				iLocal_3351 = func_64(iParam0, 1);
				iLocal_3352 = 0;
				break;
			}
	}
}

void func_403(int iParam0)
{
	if (!GAMEPLAY::IS_BIT_SET(iLocal_556, func_427(iParam0)))
	{
		set_minimap_component(func_65(iParam0, 0), 1, func_64(iParam0, 1));
		if (func_427(iParam0) == 4)
		{
			set_minimap_component(func_65(iParam0, 1), 1, func_64(iParam0, 1));
		}
		GAMEPLAY::SET_BIT(&iLocal_556, func_427(iParam0));
	}
}

void func_404(int iParam0)
{
	if (!does_blip_exist(func_69(iParam0)))
	{
		func_407(iParam0, add_blip_for_coord(func_291(iParam0)));
		set_blip_priority(func_69(iParam0), 12);
		if (does_text_label_exist("KOTC_AREANAME"))
		{
			set_blip_name_from_text_file(func_69(iParam0), "KOTC_AREANAME");
		}
		set_blip_sprite(func_69(iParam0), 438);
		func_405(&(Local_1241[iParam0 /*68*/].f_27), func_64(iParam0, 1));
		if (!GAMEPLAY::IS_BIT_SET(iLocal_555, 13))
		{
			set_blip_flashes(Local_1241[iParam0 /*68*/].f_27, 1);
			set_blip_flash_timer(Local_1241[iParam0 /*68*/].f_27, 7000);
			GAMEPLAY::SET_BIT(&iLocal_555, 13);
		}
		if (!GAMEPLAY::IS_BIT_SET(iLocal_555, 12))
		{
			flash_minimap_display();
			GAMEPLAY::SET_BIT(&iLocal_555, 12);
		}
		_0x75A16C3DA34F1245(func_69(iParam0), true);
		_0xC4278F70131BAA6D(func_69(iParam0), 1);
	}
	else
	{
		func_405(&(Local_1241[iParam0 /*68*/].f_27), func_64(iParam0, 0));
		if (does_blip_exist(func_69(iParam0)))
		{
			if (does_text_label_exist("KOTC_AREANAME"))
			{
				set_blip_name_from_text_file(func_69(iParam0), "KOTC_AREANAME");
			}
		}
	}
}

void func_405(auto uParam0, int iParam1)
{
	if (does_blip_exist(*uParam0))
	{
		set_blip_colour(*uParam0, func_406(iParam1));
	}
}

int func_406(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iParam0)
	{
		case 1:
			return 4;
		
		case 0:
			return 4;
		
		case 6:
			return 59;
		
		case 18:
			return 2;
		
		case 13:
			return 5;
		
		case 116:
			return 38;
		
		case 28:
			return 6;
		
		case 29:
			return 7;
		
		case 30:
			return 8;
		
		case 31:
			return 9;
		
		case 32:
			return 10;
		
		case 33:
			return 11;
		
		case 34:
			return 12;
		
		case 35:
			return 13;
		
		case 36:
			return 14;
		
		case 37:
			return 15;
		
		case 38:
			return 16;
		
		case 39:
			return 17;
		
		case 40:
			return 18;
		
		case 41:
			return 19;
		
		case 42:
			return 20;
		
		case 43:
			return 21;
		
		case 44:
			return 22;
		
		case 45:
			return 23;
		
		case 46:
			return 24;
		
		case 47:
			return 25;
		
		case 48:
			return 26;
		
		case 49:
			return 27;
		
		case 50:
			return 28;
		
		case 51:
			return 29;
		
		case 52:
			return 30;
		
		case 53:
			return 31;
		
		case 54:
			return 32;
		
		case 55:
			return 33;
		
		case 56:
			return 34;
		
		case 57:
			return 35;
		
		case 58:
			return 36;
		
		case 59:
			return 37;
		
		case 9:
			return 57;
		
		case 10:
			return 53;
		
		case 118:
			return 57;
		
		case 14:
			return 56;
		
		case 3:
			return 55;
		
		case 21:
			return 50;
		
		case 15:
			return 51;
		
		case 20:
			return 52;
		
		case 11:
			return 54;
		
		case 23:
			return 58;
		
		case 12:
			return 60;
		
		case 24:
			return 61;
		
		case 4:
			return 62;
		
		default:
	}
	get_hud_colour(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return iVar0 * 16777216 + iVar1 * 65536 + iVar2 * 256 + iVar3;
	return 0;
}

void func_407(auto uParam0, int iParam1)
{
	Local_1241[uParam0 /*68*/].f_27 = iParam1;
}

void func_408(int iParam0)
{
	int iVar0;
	Vector3[] vVar1 = new Vector3[3];
	Vector3[] vVar11 = new Vector3[3];
	var[] uVar21 = new var[3];
	Vector3[] vVar25 = new Vector3[3];
	var[] uVar35 = new var[3];
	int iVar39;
	float fVar40;
	float fVar41;
	
	fVar40 = 10f;
	fVar41 = 25f;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (func_427(iParam0) == 7)
		{
			fVar40 = 5f;
			fVar41 = 9f;
		}
		vVar1[iVar0 /*3*/] = {func_418(iParam0, iVar0)};
		vVar11[iVar0 /*3*/] = {func_417(iParam0, iVar0)};
		uVar21[iVar0] = func_416(iParam0, iVar0);
		func_415(iParam0, iVar0, &(vVar25[iVar0 /*3*/]), &(uVar35[iVar0]));
		if (GAMEPLAY::IS_BIT_SET(iLocal_3343, participant_id_to_int()))
		{
			if (GAMEPLAY::IS_BIT_SET(iLocal_3342, Local_560[participant_id_to_int() /*18*/].f_1))
			{
				if (!GAMEPLAY::IS_BIT_SET(iLocal_3344, Local_560[participant_id_to_int() /*18*/].f_1))
				{
					if (!func_240(1, 1))
					{
						if (iLocal_3350 == participant_id_to_int())
						{
							if (!is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1))
							{
								if ((!func_414(vVar1[iVar0 /*3*/]) && !func_414(vVar11[iVar0 /*3*/])) && uVar21[iVar0] > 0f)
								{
									if (is_entity_in_angled_area(vLocal_1137[player_id() /*3*/].f_2, vVar1[iVar0 /*3*/], vVar11[iVar0 /*3*/], uVar21[iVar0], 0, true, 0))
									{
										iVar39 = true;
									}
								}
								if (func_427(iParam0) == 7)
								{
									if (func_413(iParam0) < 0f)
									{
										if (func_413(iParam0) <= fVar40 && func_413(iParam0) >= fVar40 * -1f)
										{
											if (func_412(iParam0) <= fVar41)
											{
												iVar39 = true;
											}
										}
									}
								}
								else if (!func_414(vVar25[iVar0 /*3*/]))
								{
									if (func_411(iParam0, iVar0) < 0f)
									{
										if (func_411(iParam0, iVar0) >= uVar35[iVar0] * -1f)
										{
											if (func_410(iParam0, iVar0) <= uVar35[iVar0])
											{
												iVar39 = true;
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
		iVar0++;
	}
	func_409(iParam0, iVar39);
}

void func_409(int iParam0, int iParam1)
{
	Local_394[participant_id_to_int() /*5*/].f_1[iParam0] = iParam1;
	if (iParam1)
	{
		GAMEPLAY::SET_BIT(&(Local_394[participant_id_to_int() /*5*/].f_3), iParam0);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Local_394[participant_id_to_int() /*5*/].f_3), iParam0);
	}
}

auto func_410(int iParam0, int iParam1)
{
	return Local_1241[iParam0 /*68*/].f_41[iParam1];
}

auto func_411(int iParam0, int iParam1)
{
	return Local_1241[iParam0 /*68*/].f_45[iParam1];
}

auto func_412(int iParam0)
{
	return Local_1241[iParam0 /*68*/].f_38;
}

auto func_413(int iParam0)
{
	return Local_1241[iParam0 /*68*/].f_39;
}

bool func_414(Vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_415(int iParam0, int iParam1, auto uParam2, float fParam3)
{
	switch (iParam1)
	{
		case 0:
			switch (func_427(iParam0))
			{
				case 0:
					*uParam2 = {0f, 0f, 0f};
					*fParam3 = 0f;
					break;
				
				case 2:
					*uParam2 = {0f, 0f, 0f};
					*fParam3 = 0f;
					break;
				
				case 4:
					*uParam2 = {2515.966f, 3777.477f, 51.767f};
					*fParam3 = 5.3f;
					break;
				
				case 1:
					*uParam2 = {0f, 0f, 0f};
					*fParam3 = 0f;
					break;
				
				case 3:
					*uParam2 = {0f, 0f, 0f};
					*fParam3 = 0f;
					break;
				
				case 5:
					*uParam2 = {0f, 0f, 0f};
					*fParam3 = 0f;
					break;
				
				case 6:
					*uParam2 = {0f, 0f, 0f};
					*fParam3 = 0f;
					break;
				
				case 7:
					*uParam2 = {0f, 0f, 0f};
					*fParam3 = 0f;
					break;
			}
			break;
		
		case 1:
			switch (func_427(iParam0))
			{
				case 0:
					*uParam2 = {0f, 0f, 0f};
					*fParam3 = 0f;
					break;
				
				case 2:
					*uParam2 = {0f, 0f, 0f};
					*fParam3 = 0f;
					break;
				
				case 4:
					*uParam2 = {2515.315f, 3789.364f, 52.088f};
					*fParam3 = 3.35f;
					break;
				
				case 1:
					*uParam2 = {0f, 0f, 0f};
					*fParam3 = 0f;
					break;
				
				case 3:
					*uParam2 = {0f, 0f, 0f};
					*fParam3 = 0f;
					break;
				
				case 5:
					*uParam2 = {0f, 0f, 0f};
					*fParam3 = 0f;
					break;
				
				case 6:
					*uParam2 = {0f, 0f, 0f};
					*fParam3 = 0f;
					break;
				
				case 7:
					*uParam2 = {0f, 0f, 0f};
					*fParam3 = 0f;
					break;
			}
			break;
		
		case 2:
			switch (func_427(iParam0))
			{
				case 0:
					*uParam2 = {0f, 0f, 0f};
					*fParam3 = 0f;
					break;
				
				case 2:
					*uParam2 = {0f, 0f, 0f};
					*fParam3 = 0f;
					break;
				
				case 4:
					*uParam2 = {0f, 0f, 0f};
					*fParam3 = 0f;
					break;
				
				case 1:
					*uParam2 = {0f, 0f, 0f};
					*fParam3 = 0f;
					break;
				
				case 3:
					*uParam2 = {0f, 0f, 0f};
					*fParam3 = 0f;
					break;
				
				case 5:
					*uParam2 = {0f, 0f, 0f};
					*fParam3 = 0f;
					break;
				
				case 6:
					*uParam2 = {0f, 0f, 0f};
					*fParam3 = 0f;
					break;
				
				case 7:
					*uParam2 = {0f, 0f, 0f};
					*fParam3 = 0f;
					break;
			}
			break;
	}
}

auto func_416(int iParam0, int iParam1)
{
	return Local_1241[iParam0 /*68*/].f_20[iParam1];
}

Vector3 func_417(int iParam0, int iParam1)
{
	return Local_1241[iParam0 /*68*/].f_10[iParam1 /*3*/];
}

Vector3 func_418(int iParam0, int iParam1)
{
	return Local_1241[iParam0 /*68*/][iParam1 /*3*/];
}

void func_419(int iParam0)
{
	Local_394[participant_id_to_int() /*5*/] = iParam0;
}

void func_420(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 136:
			switch (iParam1)
			{
				case 0:
					func_421("kwUfKUus6EuQyNSL8KpY-w");
					func_421("yMTOFLfO2UKwzKrmgPP7kg");
					func_421("9mGvlJ1Cxk-HxC2zkAwdQg");
					break;
				
				case 2:
					func_421("tP5HSeCA0UiHnkRzakdO2Q");
					func_421("uEkrqoerQEmQ0uZRtp4rkw");
					func_421("xIXaDwts7kKz0sbMnwYlCQ");
					break;
				
				case 3:
					func_421("UOTaXepxrUOUEU7QtfBvGQ");
					break;
			}
			break;
		
		case 139:
			switch (iParam1)
			{
				case 1:
					func_421("OZ5hEthzqUSuK_x9YuO4uw");
					break;
				
				case 2:
					func_421("uEkrqoerQEmQ0uZRtp4rkw");
					break;
			}
			break;
		
		case 138:
			switch (iParam1)
			{
				case 2:
					func_421("lyrTwqWnP0SqGuK4GdrgDg");
					break;
				
				case 3:
					func_421("uEkrqoerQEmQ0uZRtp4rkw");
					func_421("92t91kL3Wkqvl2Kc82cNSA");
					func_421("43Yoc5jfr0OwGfW9UP5TXA");
					break;
				
				case 5:
					func_421("WfnWlxu780CwC7LLUrLljw");
					break;
				
				case 6:
					func_421("lowxnyELLUCxqy_Q1uslIg");
					break;
				
				case 7:
					func_421("QmlvLMLCwkOvoZlkAstYxw");
					break;
			}
			break;
		
		case 141:
			switch (iParam1)
			{
				case 0:
					func_421("TT4ifq2kgEG6G1fCUYHXSQ");
					break;
			}
			break;
		
		case 134:
			switch (iParam1)
			{
				case 1:
					func_421("QmlvLMLCwkOvoZlkAstYxw");
					break;
				
				case 4:
					func_421("fOfm7nzMLkav0ldcSCNAzA");
					func_421("JMbOeJ2-ak-02KwNLtnOJg");
					break;
				
				case 5:
					func_421("3AAj-muvN0iHI5IMyGlboA");
					break;
				
				case 0:
					func_421("lyrTwqWnP0SqGuK4GdrgDg");
					break;
				
				case 9:
					func_421("Ma78E44OMkGfYPmCPZXUNA");
					func_421("Pqz3l_Dhg0ar0yHiz2wMqQ");
					break;
				
				case 19:
					func_421("ZmoxEY6L60WSR-7I5IUjPg");
					break;
				
				case 10:
					func_421("gxmtJHj2OUWQDt8nNMy3TQ");
					break;
			}
			break;
		
		case 140:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							func_421("lowxnyELLUCxqy_Q1uslIg");
							break;
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 2:
							func_421("dCWpYaU7CU-Bxz5s2qGjaA");
							break;
					}
					break;
				
				case 2:
					func_421("QmlvLMLCwkOvoZlkAstYxw");
					break;
				
				case 3:
					switch (iParam2)
					{
						case 1:
							func_421("Cl3Gh6-LMkuZ7Z_jPqSE8g");
							break;
						
						case 2:
							func_421("TT4ifq2kgEG6G1fCUYHXSQ");
							break;
					}
					break;
				
				case 4:
					func_421("A0vXbIK2WEmiVSUNYRGpvA");
					switch (iParam2)
					{
						case 2:
							func_421("3AAj-muvN0iHI5IMyGlboA");
							break;
					}
					break;
			}
			break;
		
		case 129:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							func_421("kXry-nXRbEC6ktiopjDDcg");
							break;
						
						case 1:
							func_421("JCMcBpPl9UWmcdOYFza0Tg");
							break;
						
						case 2:
							func_421("ZmoxEY6L60WSR-7I5IUjPg");
							break;
						
						case 3:
							func_421("fOfm7nzMLkav0ldcSCNAzA");
							func_421("JMbOeJ2-ak-02KwNLtnOJg");
							break;
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							func_421("OZ5hEthzqUSuK_x9YuO4uw");
							break;
						
						case 1:
							func_421("lyrTwqWnP0SqGuK4GdrgDg");
							break;
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							func_421("QmlvLMLCwkOvoZlkAstYxw");
							break;
						
						case 2:
							func_421("yMTOFLfO2UKwzKrmgPP7kg");
							break;
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 3:
							func_421("xIXaDwts7kKz0sbMnwYlCQ");
							break;
					}
					break;
				
				case 4:
					switch (iParam2)
					{
						case 1:
							func_421("gaJhsFMzFkyl3al5SRa6fQ");
							break;
					}
					break;
				
				case 5:
					switch (iParam2)
					{
						case 1:
							func_421("JCMcBpPl9UWmcdOYFza0Tg");
							break;
						
						case 2:
							func_421("ZmoxEY6L60WSR-7I5IUjPg");
							break;
						
						case 3:
							func_421("fOfm7nzMLkav0ldcSCNAzA");
							func_421("JMbOeJ2-ak-02KwNLtnOJg");
							break;
					}
					break;
				
				case 6:
					switch (iParam2)
					{
						case 0:
							func_421("OZ5hEthzqUSuK_x9YuO4uw");
							break;
						
						case 1:
							func_421("lyrTwqWnP0SqGuK4GdrgDg");
							break;
					}
					break;
				
				case 7:
					switch (iParam2)
					{
						case 0:
							func_421("QmlvLMLCwkOvoZlkAstYxw");
							break;
						
						case 2:
							func_421("yMTOFLfO2UKwzKrmgPP7kg");
							break;
					}
					break;
				
				case 8:
					switch (iParam2)
					{
						case 3:
							func_421("xIXaDwts7kKz0sbMnwYlCQ");
							break;
					}
					break;
			}
			break;
		
		case 131:
			switch (iParam3)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 1:
									func_421("UOTaXepxrUOUEU7QtfBvGQ");
									break;
								
								case 2:
									func_421("xIXaDwts7kKz0sbMnwYlCQ");
									break;
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									func_421("kXry-nXRbEC6ktiopjDDcg");
									break;
								
								case 2:
									func_421("QmlvLMLCwkOvoZlkAstYxw");
									break;
								
								case 3:
									func_421("gxmtJHj2OUWQDt8nNMy3TQ");
									break;
								
								case 4:
									func_421("A0vXbIK2WEmiVSUNYRGpvA");
									break;
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 0:
									func_421("dCWpYaU7CU-Bxz5s2qGjaA");
									break;
								
								case 2:
									func_421("aGBjo2rKi0yMDLl3a2ATGA");
									func_421("yMTOFLfO2UKwzKrmgPP7kg");
									break;
								
								case 3:
									func_421("lhGatLUmgke_87surSFS5g");
									break;
							}
							break;
						
						case 3:
							switch (iParam2)
							{
								case 1:
									func_421("VmS_SI5wSE2LuL9qItQqbw");
									break;
								
								case 4:
									func_421("f2lnL6wZPkGWUowu0yLm1Q");
									func_421("ZmoxEY6L60WSR-7I5IUjPg");
									break;
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 1:
									func_421("Ma78E44OMkGfYPmCPZXUNA");
									break;
								
								case 2:
									func_421("TT4ifq2kgEG6G1fCUYHXSQ");
									break;
							}
							break;
						
						case 5:
							switch (iParam2)
							{
								case 0:
									func_421("W-OJzHlM-0ym9PsIASYZtw");
									func_421("uEkrqoerQEmQ0uZRtp4rkw");
									break;
								
								case 1:
									func_421("3AAj-muvN0iHI5IMyGlboA");
									break;
								
								case 3:
									func_421("TjGz31AMYE6bGCjAIitu6w");
									func_421("A0vXbIK2WEmiVSUNYRGpvA");
									break;
							}
							break;
						
						case 6:
							switch (iParam2)
							{
								case 2:
									func_421("QmlvLMLCwkOvoZlkAstYxw");
									func_421("BktATxH9R0Wp2x0kWSbqjw");
									break;
								
								case 3:
									func_421("BktATxH9R0Wp2x0kWSbqjw");
									func_421("kXry-nXRbEC6ktiopjDDcg");
									break;
								
								case 4:
									func_421("f2lnL6wZPkGWUowu0yLm1Q");
									break;
							}
							break;
					}
					break;
				
				case 1:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 1:
									func_421("kXry-nXRbEC6ktiopjDDcg");
									break;
								
								case 3:
									func_421("PY8hdiWoAkudg9SpK8G2xQ");
									break;
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									func_421("TT4ifq2kgEG6G1fCUYHXSQ");
									break;
								
								case 1:
									func_421("9mGvlJ1Cxk-HxC2zkAwdQg");
									break;
								
								case 2:
									func_421("tP5HSeCA0UiHnkRzakdO2Q");
									break;
								
								case 3:
									func_421("kXry-nXRbEC6ktiopjDDcg");
									break;
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 3:
									func_421("Cl3Gh6-LMkuZ7Z_jPqSE8g");
									break;
							}
							break;
					}
					break;
				
				case 2:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									func_421("Pqz3l_Dhg0ar0yHiz2wMqQ");
									break;
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 4:
									func_421("W-OJzHlM-0ym9PsIASYZtw");
									break;
							}
							break;
					}
					break;
			}
			break;
	}
}

void func_421(char* sParam0)
{
	int iVar0;
	int iVar1;
	
	if (is_string_null_or_empty(sParam0))
	{
		return;
	}
	iVar0 = get_hash_key(sParam0);
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311741)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_2359718[iVar1 /*26*/].f_12, 11))
		{
			if (func_422(&(Global_2359718[iVar1 /*26*/].f_15)) == iVar0)
			{
				if (!GAMEPLAY::IS_BIT_SET(Global_2359718[iVar1 /*26*/].f_13, 26))
				{
					GAMEPLAY::SET_BIT(&(Global_2359718[iVar1 /*26*/].f_13), 26);
				}
				return;
			}
		}
		iVar1++;
	}
}

int func_422(auto uParam0)
{
	struct<12> Var0;
	int iVar12;
	int iVar13;
	
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_11 = -1;
	iVar12 = 0;
	iVar13 = func_424(uParam0);
	if (iVar13 == -1)
	{
		return iVar12;
	}
	switch (*uParam0.f_2)
	{
		case 63:
			Var0 = {func_423(uParam0)};
			return Var0.f_1;
		
		case 62:
			return iVar12;
		
		default:
	}
	return iVar12;
}

struct<12> func_423(auto uParam0)
{
	struct<12> Var0;
	int iVar12;
	
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_11 = -1;
	iVar12 = func_424(uParam0);
	if (iVar12 == -1)
	{
		return Var0;
	}
	switch (*uParam0.f_2)
	{
		case 63:
			return Global_794608.f_98389[iVar12 /*12*/];
		
		case 62:
			return Global_906487.f_18805[iVar12 /*12*/];
		
		default:
	}
	return Var0;
}

int func_424(auto uParam0)
{
	int iVar0;
	
	if (is_string_null_or_empty(uParam0.f_3))
	{
		return -1;
	}
	if (func_426(*uParam0.f_1))
	{
		if (func_425(uParam0))
		{
			return 9999;
		}
		return -1;
	}
	iVar0 = 0;
	switch (*uParam0.f_2)
	{
		case 63:
			if (GAMEPLAY::IS_BIT_SET(Global_794608.f_4[*uParam0.f_1 /*88*/].f_76, 13))
			{
				if (are_strings_equal(&(Global_794608.f_4[*uParam0.f_1 /*88*/]), uParam0.f_3))
				{
					return *uParam0.f_1;
				}
			}
			if (!GAMEPLAY::IS_BIT_SET(Global_794608.f_4[*uParam0.f_1 /*88*/].f_76, 13))
			{
				if (Global_1310987.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 1118)
			{
				if (GAMEPLAY::IS_BIT_SET(Global_794608.f_4[iVar0 /*88*/].f_76, 13))
				{
					if (are_strings_equal(&(Global_794608.f_4[iVar0 /*88*/]), uParam0.f_3))
					{
						*uParam0.f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		
		case 62:
			if (GAMEPLAY::IS_BIT_SET(Global_906487.f_1204[*uParam0.f_1 /*88*/].f_76, 13))
			{
				if (are_strings_equal(&(Global_906487.f_1204[*uParam0.f_1 /*88*/]), uParam0.f_3))
				{
					return *uParam0.f_1;
				}
			}
			if (!GAMEPLAY::IS_BIT_SET(Global_906487.f_1204[*uParam0.f_1 /*88*/].f_76, 13))
			{
				if (Global_1310987.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 200)
			{
				if (GAMEPLAY::IS_BIT_SET(Global_906487.f_1204[iVar0 /*88*/].f_76, 13))
				{
					if (are_strings_equal(&(Global_906487.f_1204[iVar0 /*88*/]), uParam0.f_3))
					{
						*uParam0.f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		
		case 40:
			return *uParam0.f_1;
		
		default:
	}
	if (*uParam0.f_2 == player_id())
	{
		if (GAMEPLAY::IS_BIT_SET(Global_949333.f_5[*uParam0.f_1 /*88*/].f_76, 13))
		{
			if (are_strings_equal(&(Global_949333.f_5[*uParam0.f_1 /*88*/]), uParam0.f_3))
			{
				return *uParam0.f_1;
			}
		}
		if (GAMEPLAY::IS_BIT_SET(Global_949333.f_5[*uParam0.f_1 /*88*/].f_76, 13))
		{
			if (Global_1310987.f_5)
			{
				return -1;
			}
		}
		iVar0 = 0;
		while (iVar0 < 62)
		{
			if (GAMEPLAY::IS_BIT_SET(Global_949333.f_5[iVar0 /*88*/].f_76, 13))
			{
				if (are_strings_equal(&(Global_949333.f_5[iVar0 /*88*/]), uParam0.f_3))
				{
					*uParam0.f_1 = iVar0;
					return iVar0;
				}
			}
			iVar0++;
		}
		return -1;
	}
	else if (*uParam0.f_2 < 32)
	{
		return -1;
	}
	return -1;
}

bool func_425(auto uParam0)
{
	if (Global_2398013)
	{
		if (are_strings_equal(&(Global_2398013.f_1), uParam0.f_3))
		{
			return true;
		}
	}
	return false;
}

int func_426(int iParam0)
{
	return iParam0 == 9999;
}

auto func_427(int iParam0)
{
	return Local_96.f_6[iParam0 /*204*/].f_69;
}

auto func_428()
{
	return Local_96;
}

auto func_429(int iParam0)
{
	return Local_394[iParam0 /*5*/];
}

void func_430()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	auto uVar4;
	int iVar5;
	
	iVar0 = -1;
	iVar1 = -1;
	if (!GAMEPLAY::IS_BIT_SET(Local_394[participant_id_to_int() /*5*/].f_4, false))
	{
		iVar2 = 0;
		while (iVar2 < 1)
		{
			if (func_427(iVar2) > -1)
			{
				iVar3 = 0;
				while (iVar3 < 3)
				{
					func_448(iVar2, iVar3, func_449(iVar2, iVar3));
					func_446(iVar2, iVar3, func_447(iVar2, iVar3));
					func_444(iVar2, func_445(iVar2));
					func_442(iVar2, iVar3, func_443(iVar2, iVar3));
					GAMEPLAY::SET_BIT(&(Local_394[participant_id_to_int() /*5*/].f_4), false);
					iVar3++;
				}
			}
			iVar2++;
		}
	}
	iVar2 = 0;
	while (iVar2 < 1)
	{
		if (network_is_host_of_this_script())
		{
			if (func_441(iVar2) <= 1)
			{
				func_440(iVar2, 0);
			}
			else
			{
				func_440(iVar2, 1);
			}
		}
		if (func_8(iVar2) == -1)
		{
			if (!func_111(iVar2))
			{
				GAMEPLAY::SET_BIT(&iLocal_555, false);
			}
		}
		else if (!func_14(iVar2))
		{
			iVar5 = true;
			if (network_is_host_of_this_script())
			{
				func_440(iVar2, 0);
			}
		}
		else
		{
			iVar0 = func_8(iVar2);
			iVar1 = func_7(iVar2);
			if (!func_111(iVar2))
			{
				if (network_is_host_of_this_script())
				{
					if (iVar0 > -1)
					{
						if (!GAMEPLAY::IS_BIT_SET(iLocal_3343, iVar0))
						{
							GAMEPLAY::SET_BIT(&iLocal_555, false);
						}
						if (!GAMEPLAY::IS_BIT_SET(iLocal_3342, iVar0))
						{
							GAMEPLAY::SET_BIT(&iLocal_555, false);
						}
						if (GAMEPLAY::IS_BIT_SET(iLocal_3344, iVar0))
						{
							GAMEPLAY::SET_BIT(&iLocal_555, false);
						}
						if (!func_196(iVar0, iVar2))
						{
							GAMEPLAY::SET_BIT(&iLocal_555, false);
						}
					}
				}
			}
			else if (iVar0 > -1)
			{
				if (!GAMEPLAY::IS_BIT_SET(iLocal_3343, iVar0))
				{
					iVar5 = true;
				}
				if (!GAMEPLAY::IS_BIT_SET(iLocal_3342, iVar1))
				{
					iVar5 = true;
				}
				if (GAMEPLAY::IS_BIT_SET(iLocal_3344, iVar1))
				{
					iVar5 = true;
				}
				if (!func_196(iVar0, iVar2))
				{
					iVar5 = true;
				}
			}
		}
		if (iVar5)
		{
			if (network_is_host_of_this_script())
			{
				func_439(iVar2, -1);
				func_438(iVar2, -1);
			}
			func_437(iVar2, uVar4);
		}
		if (GAMEPLAY::IS_BIT_SET(iLocal_555, false))
		{
			if (func_436(iVar2) > -1 && func_435(iVar2) > -1)
			{
				if (network_is_host_of_this_script())
				{
					func_439(iVar2, func_436(iVar2));
					func_438(iVar2, func_435(iVar2));
					func_437(iVar2, func_434(iVar2));
					if (!GAMEPLAY::IS_BIT_SET(Local_96.f_6[iVar2 /*204*/].f_203, func_436(iVar2)))
					{
						GAMEPLAY::SET_BIT(&(Local_96.f_6[iVar2 /*204*/].f_203), func_436(iVar2));
					}
				}
			}
		}
		if (network_is_host_of_this_script())
		{
			func_431(iVar2);
		}
		iVar2++;
	}
}

void func_431(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<14> Var2;
	auto uVar16;
	auto uVar17;
	auto uVar18;
	
	iVar0 = 31;
	while (iVar0 >= 0)
	{
		iVar1 = 31;
		while (iVar1 >= 0)
		{
			if (iVar1 - 1 >= 0)
			{
				if (Local_96.f_6[iParam0 /*204*/].f_74[iVar1 /*4*/].f_3 > Local_96.f_6[iParam0 /*204*/].f_74[iVar1 - 1 /*4*/].f_3)
				{
					uVar16 = Local_96.f_6[iParam0 /*204*/].f_74[iVar1 /*4*/].f_3;
					uVar17 = Local_96.f_6[iParam0 /*204*/].f_74[iVar1 /*4*/];
					uVar18 = Local_96.f_6[iParam0 /*204*/].f_74[iVar1 /*4*/].f_1;
					Local_96.f_6[iParam0 /*204*/].f_74[iVar1 /*4*/].f_3 = Local_96.f_6[iParam0 /*204*/].f_74[iVar1 - 1 /*4*/].f_3;
					Local_96.f_6[iParam0 /*204*/].f_74[iVar1 /*4*/] = Local_96.f_6[iParam0 /*204*/].f_74[iVar1 - 1 /*4*/];
					Local_96.f_6[iParam0 /*204*/].f_74[iVar1 /*4*/].f_1 = Local_96.f_6[iParam0 /*204*/].f_74[iVar1 - 1 /*4*/].f_1;
					Local_96.f_6[iParam0 /*204*/].f_74[iVar1 - 1 /*4*/].f_3 = uVar16;
					Local_96.f_6[iParam0 /*204*/].f_74[iVar1 - 1 /*4*/] = uVar17;
					Local_96.f_6[iParam0 /*204*/].f_74[iVar1 - 1 /*4*/].f_1 = uVar18;
				}
				if (iVar1 - 1 == 0 && Local_96.f_6[iParam0 /*204*/].f_74[iVar1 - 1 /*4*/].f_3 > 0f)
				{
					if (!Local_96.f_283 == Local_96.f_6[iParam0 /*204*/].f_74[iVar1 - 1 /*4*/])
					{
						Local_96.f_283 = Local_96.f_6[iParam0 /*204*/].f_74[iVar1 - 1 /*4*/];
						Var2.f_2 = 165;
						Var2.f_10 = int_to_playerindex(Local_96.f_6[iParam0 /*204*/].f_74[iVar1 - 1 /*4*/].f_1);
						func_432(Var2, func_433(1));
					}
				}
			}
			iVar1 += -1;
		}
		iVar0 += -1;
	}
}

void func_432(struct<2> Param0, auto uParam1, auto uParam2, auto uParam3, auto uParam4, auto uParam5, auto uParam6, auto uParam7, auto uParam8, auto uParam9, auto uParam10, auto uParam11, auto uParam12, int iParam13)
{
	Param0 = 0;
	Param0.f_1 = player_id();
	if (!iParam14 == 0)
	{
		trigger_script_event(1, &Param0, 14, iParam14);
	}
}

auto func_433(int iParam0)
{
	auto uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = false;
	while (iVar1 < _network_get_num_participants_host())
	{
		if (network_is_participant_active(int_to_participantindex(iVar1)))
		{
			iVar2 = network_get_player_index(int_to_participantindex(iVar1));
			if (func_658(iVar2, 0, 0))
			{
				if (iVar2 != player_id() || iParam0)
				{
					GAMEPLAY::SET_BIT(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

auto func_434(int iParam0)
{
	return Local_1241[iParam0 /*68*/].f_31;
}

auto func_435(int iParam0)
{
	return Local_1241[iParam0 /*68*/].f_35;
}

auto func_436(int iParam0)
{
	return Local_1241[iParam0 /*68*/].f_34;
}

void func_437(int iParam0, auto uParam1)
{
	Local_1241[iParam0 /*68*/].f_30 = uParam1;
}

void func_438(int iParam0, int iParam1)
{
	Local_96.f_6[iParam0 /*204*/].f_2 = iParam1;
}

void func_439(int iParam0, int iParam1)
{
	if (iParam1 != func_8(iParam0))
	{
	}
	Local_96.f_6[iParam0 /*204*/].f_1 = iParam1;
}

void func_440(int iParam0, int iParam1)
{
	Local_96.f_6[iParam0 /*204*/].f_72 = iParam1;
}

auto func_441(int iParam0)
{
	return Local_1241[iParam0 /*68*/].f_37;
}

void func_442(int iParam0, int iParam1, auto uParam2)
{
	Local_1241[iParam0 /*68*/].f_20[iParam1] = uParam2;
}

float func_443(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (func_427(iParam0))
			{
				case 0:
					return 23f;
				
				case 2:
					return 6f;
				
				case 4:
					return 7f;
				
				case 1:
					return 8.25f;
				
				case 3:
					return 16.5f;
				
				case 5:
					return 9.65f;
				
				case 6:
					return 9.15f;
				
				case 7:
					return 0f;
				
				default:
			}
			break;
		
		case 1:
			switch (func_427(iParam0))
			{
				case 0:
					return 23f;
				
				case 2:
					return 0f;
				
				case 4:
					return 0f;
				
				case 1:
					return 3.5f;
				
				case 3:
					return 0f;
				
				case 5:
					return 0f;
				
				case 6:
					return 0f;
				
				case 7:
					return 0f;
				
				default:
			}
			break;
		
		case 2:
			switch (func_427(iParam0))
			{
				case 0:
					return 23f;
				
				case 2:
					return 0f;
				
				case 4:
					return 0f;
				
				case 1:
					return 0f;
				
				case 3:
					return 0f;
				
				case 5:
					return 0f;
				
				case 6:
					return 0f;
				
				case 7:
					return 0f;
				
				default:
			}
			break;
	}
	return 0f;
}

void func_444(int iParam0, Vector3 vParam1)
{
	Local_1241[iParam0 /*68*/].f_24 = {vParam1};
}

Vector3 func_445(int iParam0)
{
	switch (func_427(iParam0))
	{
		case 0:
			return -1195.435f, -1788.217f, 14.6269f;
		
		case 2:
			return -379.8141f, 6087.215f, 43.2552f;
		
		case 4:
			return 2516.59f, 3784.677f, 52.0053f;
		
		case 1:
			return 1667.193f, -27.4697f, 183.774f;
		
		case 3:
			return -746.2f, 5594.6f, 41.7f;
		
		case 5:
			return -389.3f, 1135.7f, 322.6f;
		
		case 6:
			return 473.6f, -1339.1f, 35.2f;
		
		case 7:
			return -1459.651f, 179.275f, 53f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_446(int iParam0, int iParam1, Vector3 vParam2)
{
	Local_1241[iParam0 /*68*/].f_10[iParam1 /*3*/] = {vParam2};
}

Vector3 func_447(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (func_427(iParam0))
			{
				case 0:
					return -1178.575f, -1795.219f, 22.42828f;
				
				case 2:
					return -377.4193f, 6083.058f, 46.63536f;
				
				case 4:
					return 2518.118f, 3772.498f, 58.13546f;
				
				case 1:
					return 1673.975f, -24.62664f, 199.2563f;
				
				case 3:
					return -756.4877f, 5594.868f, 44.17008f;
				
				case 5:
					return -391.5381f, 1125.141f, 325.0288f;
				
				case 6:
					return 470.2388f, -1335.768f, 38.44154f;
				
				case 7:
					return 0f, 0f, 0f;
				
				default:
			}
			break;
		
		case 1:
			switch (func_427(iParam0))
			{
				case 0:
					return -1180.375f, -1777.348f, 22.48125f;
				
				case 2:
					return 0f, 0f, 0f;
				
				case 4:
					return 0f, 0f, 0f;
				
				case 1:
					return 1676.203f, -25.81484f, 200.1802f;
				
				case 3:
					return 0f, 0f, 0f;
				
				case 5:
					return 0f, 0f, 0f;
				
				case 6:
					return 0f, 0f, 0f;
				
				case 7:
					return 0f, 0f, 0f;
				
				default:
			}
			break;
		
		case 2:
			switch (func_427(iParam0))
			{
				case 0:
					return -1194.205f, -1806.82f, 22.48f;
				
				case 2:
					return 0f, 0f, 0f;
				
				case 4:
					return 0f, 0f, 0f;
				
				case 1:
					return 0f, 0f, 0f;
				
				case 3:
					return 0f, 0f, 0f;
				
				case 5:
					return 0f, 0f, 0f;
				
				case 6:
					return 0f, 0f, 0f;
				
				case 7:
					return 0f, 0f, 0f;
				
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_448(int iParam0, int iParam1, Vector3 vParam2)
{
	Local_1241[iParam0 /*68*/][iParam1 /*3*/] = {vParam2};
}

Vector3 func_449(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (func_427(iParam0))
			{
				case 0:
					return -1212.381f, -1780.108f, 7.481341f;
				
				case 2:
					return -381.2328f, 6089.681f, 34.37778f;
				
				case 4:
					return 2516.82f, 3795.646f, 49.82948f;
				
				case 1:
					return 1660.532f, -27.94882f, 181.587f;
				
				case 3:
					return -736.0183f, 5595.02f, 40.53122f;
				
				case 5:
					return -386.508f, 1144.122f, 321.5792f;
				
				case 6:
					return 479.0627f, -1343.186f, 34.14154f;
				
				case 7:
					return 0f, 0f, 0f;
				
				default:
			}
			break;
		
		case 1:
			switch (func_427(iParam0))
			{
				case 0:
					return -1209.83f, -1798.181f, 7.481341f;
				
				case 2:
					return 0f, 0f, 0f;
				
				case 4:
					return 0f, 0f, 0f;
				
				case 1:
					return 1669.613f, -27.26755f, 182.2874f;
				
				case 3:
					return 0f, 0f, 0f;
				
				case 5:
					return 0f, 0f, 0f;
				
				case 6:
					return 0f, 0f, 0f;
				
				case 7:
					return 0f, 0f, 0f;
				
				default:
			}
			break;
		
		case 2:
			switch (func_427(iParam0))
			{
				case 0:
					return -1197.333f, -1769.584f, 7.474364f;
				
				case 2:
					return 0f, 0f, 0f;
				
				case 4:
					return 0f, 0f, 0f;
				
				case 1:
					return 0f, 0f, 0f;
				
				case 3:
					return 0f, 0f, 0f;
				
				case 5:
					return 0f, 0f, 0f;
				
				case 6:
					return 0f, 0f, 0f;
				
				case 7:
					return 0f, 0f, 0f;
				
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_450()
{
	func_452();
	iLocal_3341++;
	func_451();
}

void func_451()
{
	if (iLocal_3341 >= _network_get_num_participants_host() - 1)
	{
		iLocal_3341 = 0;
	}
}

void func_452()
{
	if (iLocal_3341 == 0)
	{
	}
}

void func_453()
{
	int iVar0;
	int iVar1;
	int iVar2;
	auto uVar3;
	struct<16> Var4;
	Vector3 vVar20;
	float fVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	float fVar32;
	float fVar33;
	Vector3 vVar34;
	float fVar37;
	float fVar38;
	float fVar39;
	float fVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	int iVar44;
	
	iVar0 = -1;
	iVar1 = -1;
	iVar1 = false;
	while (iVar1 < 32)
	{
		vLocal_1137[iVar1 /*3*/] = func_48();
		vLocal_1137[iVar1 /*3*/].f_1 = -1;
		vLocal_1137[iVar1 /*3*/].f_2 = uVar3;
		GAMEPLAY::CLEAR_BIT(&iLocal_3342, iVar1);
		GAMEPLAY::CLEAR_BIT(&iLocal_3344, iVar1);
		iVar1++;
	}
	iVar0 = false;
	while (iVar0 < 32)
	{
		Local_560[iVar0 /*18*/] = func_481();
		Local_560[iVar0 /*18*/].f_1 = -1;
		GAMEPLAY::CLEAR_BIT(&iLocal_3343, iVar0);
		if (network_is_host_of_this_script())
		{
			iVar25 = 0;
			while (iVar25 < 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Local_96.f_6[iVar25 /*204*/].f_73), iVar0);
				iVar25++;
			}
		}
		Local_560[iVar0 /*18*/].f_2 = {Var4};
		iVar0++;
	}
	iVar25 = 0;
	while (iVar25 < 1)
	{
		func_480(iVar25, 0);
		func_479(iVar25, 0);
		func_478(iVar25, 0f);
		func_477(iVar25, 0f);
		func_476(iVar25, 0f);
		iVar28 = 0;
		while (iVar28 < 3)
		{
			func_475(iVar25, iVar28, 0f);
			func_474(iVar25, iVar28, 0f);
			func_473(iVar25, iVar28, 0f);
			iVar28++;
		}
		iVar25++;
	}
	iVar30 = true;
	iVar31 = true;
	iVar0 = false;
	while (iVar0 < _network_get_num_participants_host())
	{
		if (network_is_participant_active(iVar0))
		{
			Local_560[iVar0 /*18*/] = iVar0;
			GAMEPLAY::SET_BIT(&iLocal_3343, iVar0);
			iVar2 = network_get_player_index(Local_560[iVar0 /*18*/]);
			iVar1 = iVar2;
			if (func_658(iVar2, 0, 1))
			{
				vLocal_1137[iVar1 /*3*/] = iVar2;
				Local_560[iVar0 /*18*/].f_1 = iVar1;
				vLocal_1137[iVar1 /*3*/].f_1 = iVar0;
				vLocal_1137[iVar1 /*3*/].f_2 = get_player_ped(iVar2);
				StringCopy(&(Local_560[iVar0 /*18*/].f_2), get_player_name(iVar2), 64);
				iVar27++;
				if (func_399(iVar0))
				{
					iVar29++;
				}
				GAMEPLAY::SET_BIT(&iLocal_3342, iVar1);
				if ((ENTITY::IS_ENTITY_DEAD(vLocal_1137[iVar1 /*3*/].f_2, 0) || PED::IS_PED_INJURED(vLocal_1137[iVar1 /*3*/].f_2)) || !is_player_playing(vLocal_1137[iVar1 /*3*/]))
				{
					GAMEPLAY::SET_BIT(&iLocal_3344, iVar1);
				}
				if (network_is_host_of_this_script())
				{
					if (!GAMEPLAY::IS_BIT_SET(Local_394[iVar0 /*5*/].f_4, false))
					{
						iVar30 = false;
					}
					if (!GAMEPLAY::IS_BIT_SET(Local_394[iVar0 /*5*/].f_4, true))
					{
						iVar31 = false;
					}
				}
				func_471(iVar1, 2);
				if (func_199(iVar1))
				{
					if (network_is_host_of_this_script())
					{
						func_469(iVar0);
					}
				}
				if (func_92(iVar1))
				{
					if (network_is_host_of_this_script())
					{
						func_469(iVar0);
					}
				}
				if (func_198(iVar1))
				{
					if (network_is_host_of_this_script())
					{
						func_469(iVar0);
					}
				}
			}
		}
		else
		{
			GAMEPLAY::CLEAR_BIT(&iLocal_3343, iVar0);
			if (func_572() <= 1)
			{
				if (network_is_host_of_this_script())
				{
					func_469(iVar0);
				}
			}
		}
		iVar25 = 0;
		while (iVar25 < 1)
		{
			if (!GAMEPLAY::IS_BIT_SET(Local_96.f_213, true))
			{
				if (network_is_host_of_this_script())
				{
					func_468(iVar0, iVar25);
				}
			}
			if (GAMEPLAY::IS_BIT_SET(iLocal_3343, iVar0))
			{
				if (GAMEPLAY::IS_BIT_SET(iLocal_3342, iVar1))
				{
					if (!GAMEPLAY::IS_BIT_SET(Local_96.f_213, true))
					{
						if (network_is_host_of_this_script())
						{
							func_467(iVar0, iVar1, iVar25, func_104(iVar25, iVar0));
						}
					}
					if (!GAMEPLAY::IS_BIT_SET(iLocal_3344, iVar1))
					{
						if (iVar0 == participant_id_to_int())
						{
							fVar32 = func_466(vLocal_1137[iVar1 /*3*/].f_2, func_291(iVar25), 0);
							fVar33 = func_466(vLocal_1137[iVar1 /*3*/].f_2, func_291(iVar25), 1);
							vVar34 = {ENTITY::GET_ENTITY_COORDS(vLocal_1137[iVar1 /*3*/].f_2, 1)};
							fVar37 = Local_1241[iVar25 /*68*/].f_24.f_2 - vVar34.z;
							func_478(iVar25, fVar32);
							func_477(iVar25, fVar37);
							func_476(iVar25, fVar33);
							iVar28 = 0;
							while (iVar28 < 3)
							{
								vVar20 = {0f, 0f, 0f};
								fVar23 = 0f;
								func_415(iVar25, iVar28, &vVar20, &fVar23);
								if (!func_414(vVar20))
								{
									fVar38 = func_466(vLocal_1137[iVar1 /*3*/].f_2, vVar20, 0);
									fVar39 = func_466(vLocal_1137[iVar1 /*3*/].f_2, vVar20, 1);
									fVar40 = vVar20.z - vVar34.z;
									func_475(iVar25, iVar28, fVar38);
									func_474(iVar25, iVar28, fVar40);
									func_473(iVar25, iVar28, fVar39);
								}
								iVar28++;
							}
						}
						if (func_196(iVar0, iVar25))
						{
							func_480(iVar25, 1);
							iVar26 = func_441(iVar25);
							iVar26++;
							func_479(iVar25, iVar26);
							if (func_8(iVar25) != iVar0 && func_7(iVar25) != iVar1)
							{
								if (func_436(iVar25) == -1)
								{
									func_530(iVar25, iVar0);
								}
								if (func_435(iVar25) == -1)
								{
									func_529(iVar25, iVar1);
								}
								func_528(iVar25, vLocal_1137[iVar1 /*3*/].f_2);
							}
							if (network_is_host_of_this_script())
							{
								GAMEPLAY::SET_BIT(&(Local_96.f_6[iVar25 /*204*/].f_73), iVar0);
							}
						}
					}
					if (iVar0 == participant_id_to_int())
					{
						if (!GAMEPLAY::IS_BIT_SET(iLocal_3344, iVar1))
						{
							if (func_179(iVar25) <= IntToFloat(Global_262145.f_9447))
							{
								if (!GAMEPLAY::IS_BIT_SET(Local_394[iVar0 /*5*/].f_4, 12))
								{
									GAMEPLAY::SET_BIT(&(Local_394[iVar0 /*5*/].f_4), 12);
								}
							}
							else if (func_179(iVar25) >= IntToFloat(Global_262145.f_9448))
							{
								if (GAMEPLAY::IS_BIT_SET(Local_394[iVar0 /*5*/].f_4, 12))
								{
									GAMEPLAY::CLEAR_BIT(&(Local_394[iVar0 /*5*/].f_4), 12);
								}
							}
							if (!func_197(1, 0))
							{
								if (func_179(iVar25) <= IntToFloat(Global_262145.f_9447))
								{
									if (!GAMEPLAY::IS_BIT_SET(Local_394[iVar0 /*5*/].f_4, 3))
									{
										GAMEPLAY::SET_BIT(&(Local_394[iVar0 /*5*/].f_4), 3);
									}
								}
								else if (func_179(iVar25) >= IntToFloat(Global_262145.f_9448))
								{
									if (GAMEPLAY::IS_BIT_SET(Local_394[iVar0 /*5*/].f_4, 3))
									{
										GAMEPLAY::CLEAR_BIT(&(Local_394[iVar0 /*5*/].f_4), 3);
									}
								}
							}
							else if (GAMEPLAY::IS_BIT_SET(Local_394[iVar0 /*5*/].f_4, 3))
							{
								GAMEPLAY::CLEAR_BIT(&(Local_394[iVar0 /*5*/].f_4), 3);
							}
						}
					}
				}
				iVar24 = 6;
				if (player_id() != vLocal_1137[iVar1 /*3*/])
				{
					if (func_154(player_id(), vLocal_1137[iVar1 /*3*/]))
					{
						iVar24 = func_127(player_id(), -2, 0, 0);
					}
				}
				if (!GAMEPLAY::IS_BIT_SET(iLocal_3344, iVar1))
				{
					if (func_240(0, 0))
					{
						func_465(iVar1);
					}
					else if (func_7(iVar25) != iVar1)
					{
						func_465(iVar1);
					}
					else if (func_572() != 1)
					{
						func_465(iVar1);
					}
					else
					{
						func_460(iVar1);
						if (iVar0 != participant_id_to_int())
						{
							if (func_145(participant_id_to_int()))
							{
								get_hud_colour(iVar24, &iVar41, &iVar42, &iVar43, &iVar44);
								iVar44 = 100;
								draw_marker(2, ENTITY::GET_ENTITY_COORDS(vLocal_1137[iVar1 /*3*/].f_2, 1) + Vector(1.5f, 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, iVar41, iVar42, iVar43, iVar44, 1, 1, 2, 0, 0, 0, 0);
							}
						}
					}
				}
				if (func_459(vLocal_1137[iVar1 /*3*/]))
				{
					func_454(vLocal_1137[iVar1 /*3*/], func_406(iVar24), func_455(iVar0, iVar1, iVar25));
				}
			}
			iVar25++;
		}
		iVar0++;
	}
	if (network_is_host_of_this_script())
	{
		if (iVar30)
		{
			GAMEPLAY::SET_BIT(&(Local_96.f_213), false);
		}
		else
		{
			GAMEPLAY::CLEAR_BIT(&(Local_96.f_213), false);
		}
		if (iVar31)
		{
			GAMEPLAY::SET_BIT(&(Local_96.f_213), true);
		}
		else
		{
			GAMEPLAY::CLEAR_BIT(&(Local_96.f_213), true);
		}
	}
	if (iVar29 > iLocal_557)
	{
		iLocal_557 = iVar29;
	}
	if (iVar27 > iLocal_3345)
	{
		iLocal_3345 = iVar27;
	}
	else
	{
		Local_96.f_216 = iLocal_3345 - iVar27;
	}
}

void func_454(int iParam0, auto uParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_48())
	{
		return;
	}
	if (get_hash_key(get_this_script_name()) == func_168())
	{
		return;
	}
	iVar0 = iParam0;
	if (func_459(iParam0))
	{
		if (iParam2)
		{
			GAMEPLAY::SET_BIT(&(Global_2412879.f_386), iVar0);
			Global_2412879.f_559[iParam0] = get_id_of_this_thread();
			Global_2412879.f_427[iVar0] = uParam1;
		}
		else
		{
			GAMEPLAY::CLEAR_BIT(&(Global_2412879.f_386), iVar0);
			Global_2412879.f_559[iParam0] = -1;
		}
	}
}

bool func_455(int iParam0, int iParam1, int iParam2)
{
	if (func_240(0, 0))
	{
		return false;
	}
	if (iParam0 == participant_id_to_int())
	{
		return false;
	}
	if (func_456(iParam1))
	{
		return false;
	}
	if (iParam0 == func_8(iParam2))
	{
		return true;
	}
	if (participant_id_to_int() != func_8(iParam2))
	{
		return false;
	}
	return true;
}

int func_456(int iParam0)
{
	if (iParam0 == player_id())
	{
		return func_95();
	}
	return GAMEPLAY::IS_BIT_SET(Global_1338622.f_241.f_136[func_458(10) /*33*/][iParam0], func_457(10));
}

int func_457(int iParam0)
{
	return iParam0 % 32;
}

int func_458(int iParam0)
{
	return iParam0 / 32;
}

bool func_459(int iParam0)
{
	if (!is_thread_active(Global_2412879.f_559[iParam0]) || Global_2412879.f_559[iParam0] == get_id_of_this_thread())
	{
		return true;
	}
	return false;
}

void func_460(int iParam0)
{
	int iVar0;
	
	iVar0 = 6;
	if (iParam0 > -1)
	{
		if (GAMEPLAY::IS_BIT_SET(iLocal_3342, iParam0))
		{
			if (!GAMEPLAY::IS_BIT_SET(iLocal_3344, iParam0))
			{
				if (func_154(player_id(), vLocal_1137[iParam0 /*3*/]))
				{
					iVar0 = func_127(player_id(), -2, 0, 0);
				}
				func_463(vLocal_1137[iParam0 /*3*/], 439, 1);
				if (func_459(vLocal_1137[iParam0 /*3*/]))
				{
					func_454(vLocal_1137[iParam0 /*3*/], func_406(iVar0), 1);
				}
				func_461(vLocal_1137[iParam0 /*3*/], 1, 1);
				GAMEPLAY::SET_BIT(&iLocal_3349, iParam0);
			}
		}
	}
}

void func_461(int iParam0, int iParam1, int iParam2)
{
	if (iParam1)
	{
		if (func_658(iParam0, 1, 1))
		{
			Global_2412879.f_625[iParam0] = get_id_of_this_thread();
			GAMEPLAY::SET_BIT(&(Global_2412879.f_364), iParam0);
			func_462(iParam0, iParam2);
		}
	}
	else
	{
		func_462(iParam0, iParam2);
		GAMEPLAY::CLEAR_BIT(&(Global_2412879.f_364), iParam0);
		Global_2412879.f_625[iParam0] = -1;
	}
}

void func_462(int iParam0, int iParam1)
{
	if (iParam1)
	{
		GAMEPLAY::SET_BIT(&(Global_2412879.f_365), iParam0);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Global_2412879.f_365), iParam0);
	}
	if (does_blip_exist(Global_2412879[iParam0]))
	{
		if (iParam1)
		{
			set_blip_as_short_range(Global_2412879[iParam0], false);
		}
		else
		{
			set_blip_as_short_range(Global_2412879[iParam0], true);
		}
	}
}

void func_463(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	auto uVar1;
	
	if (iParam0 == func_48())
	{
		return;
	}
	if (get_hash_key(get_this_script_name()) == func_168())
	{
		return;
	}
	iVar0 = iParam0;
	uVar1 = iParam1;
	if (!is_thread_active(Global_2412879.f_526[iParam0]) || Global_2412879.f_526[iParam0] == get_id_of_this_thread())
	{
		if (iParam2)
		{
			if (!GAMEPLAY::IS_BIT_SET(Global_2412879.f_385, iVar0))
			{
				func_464();
			}
			GAMEPLAY::SET_BIT(&(Global_2412879.f_385), iVar0);
			Global_2412879.f_394[iVar0] = uVar1;
			Global_2412879.f_526[iParam0] = get_id_of_this_thread();
		}
		else
		{
			if (GAMEPLAY::IS_BIT_SET(Global_2412879.f_385, iVar0))
			{
				func_464();
			}
			GAMEPLAY::CLEAR_BIT(&(Global_2412879.f_385), iVar0);
			Global_2412879.f_526[iParam0] = -1;
		}
	}
}

void func_464()
{
	Global_2412879.f_880 = 1;
}

void func_465(int iParam0)
{
	int iVar0;
	
	iVar0 = 6;
	if (GAMEPLAY::IS_BIT_SET(iLocal_3349, iParam0))
	{
		if (iParam0 > -1)
		{
			if (GAMEPLAY::IS_BIT_SET(iLocal_3342, iParam0))
			{
				if (!GAMEPLAY::IS_BIT_SET(iLocal_3344, iParam0))
				{
					if (player_id() != vLocal_1137[iParam0 /*3*/])
					{
						if (func_154(player_id(), vLocal_1137[iParam0 /*3*/]))
						{
							iVar0 = func_127(player_id(), -2, 0, 0);
						}
					}
					func_463(vLocal_1137[iParam0 /*3*/], 439, 0);
					if (func_459(vLocal_1137[iParam0 /*3*/]))
					{
						func_454(vLocal_1137[iParam0 /*3*/], func_406(iVar0), 0);
					}
					func_461(vLocal_1137[iParam0 /*3*/], 0, 0);
					GAMEPLAY::CLEAR_BIT(&iLocal_3349, iParam0);
				}
			}
		}
	}
}

float func_466(int iParam0, Vector3 vParam1, int iParam2)
{
	Vector3 vVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		vVar0 = {ENTITY::GET_ENTITY_COORDS(iParam0, 1)};
	}
	else
	{
		vVar0 = {ENTITY::GET_ENTITY_COORDS(iParam0, 0)};
	}
	return get_distance_between_coords(vVar0, vParam1, iParam4);
}

void func_467(int iParam0, int iParam1, int iParam2, auto uParam3)
{
	Local_96.f_6[iParam2 /*204*/].f_74[iParam0 /*4*/] = iParam0;
	Local_96.f_6[iParam2 /*204*/].f_74[iParam0 /*4*/].f_1 = iParam1;
	Local_96.f_6[iParam2 /*204*/].f_74[iParam0 /*4*/].f_2 = iParam1;
	Local_96.f_6[iParam2 /*204*/].f_74[iParam0 /*4*/].f_3 = uParam3;
}

void func_468(int iParam0, int iParam1)
{
	Local_96.f_6[iParam1 /*204*/].f_74[iParam0 /*4*/] = -1;
	Local_96.f_6[iParam1 /*204*/].f_74[iParam0 /*4*/].f_1 = -1;
	Local_96.f_6[iParam1 /*204*/].f_74[iParam0 /*4*/].f_2 = func_48();
	Local_96.f_6[iParam1 /*204*/].f_74[iParam0 /*4*/].f_3 = -1f;
}

void func_469(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (func_6(iVar0, iParam0) > 0f || func_105(iVar0, iParam0) > 0f)
		{
			func_4(iVar0, iParam0, 0f);
			func_470(iVar0, iParam0, 0f);
		}
		iVar1 = 0;
		while (iVar1 < 32)
		{
			if (Local_96.f_217[iVar1] > 0f)
			{
				if (Local_96.f_250[iVar1] == iParam0)
				{
					Local_96.f_217[iVar1] = 0f;
					Local_96.f_250[iVar1] = -1;
				}
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_470(int iParam0, int iParam1, float fParam2)
{
	Local_96.f_6[iParam0 /*204*/].f_36[iParam1] = fParam2;
}

void func_471(int iParam0, int iParam1)
{
	int iVar0;
	
	if (GAMEPLAY::IS_BIT_SET(Global_1573883.f_1, false))
	{
		return;
	}
	if (func_18(&(Global_1573883.f_18)))
	{
		return;
	}
	if (GAMEPLAY::IS_BIT_SET(Global_1573883.f_2, iParam0))
	{
		if (Global_1573883 < iParam1 && GAMEPLAY::IS_BIT_SET(Global_1573883.f_1, true))
		{
			GAMEPLAY::SET_BIT(&(Global_1573883.f_1), false);
			return;
		}
		if (Global_1573883 != 0)
		{
			GAMEPLAY::SET_BIT(&(Global_1573883.f_1), true);
		}
		Global_1573883 = 0;
		Global_1573883.f_2 = 0;
	}
	GAMEPLAY::SET_BIT(&(Global_1573883.f_2), iParam0);
	iVar0 = true;
	if (func_173(iParam0))
	{
		iVar0 = false;
	}
	if (func_472(iParam0))
	{
		iVar0 = false;
	}
	if (func_33(iParam0, 0))
	{
		iVar0 = false;
	}
	if (func_199(iParam0))
	{
		iVar0 = false;
	}
	if (iVar0)
	{
		Global_1573883++;
	}
}

int func_472(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1610316[iParam0 /*174*/].f_1, 10);
}

void func_473(int iParam0, int iParam1, float fParam2)
{
	Local_1241[iParam0 /*68*/].f_49[iParam1] = fParam2;
}

void func_474(int iParam0, int iParam1, float fParam2)
{
	Local_1241[iParam0 /*68*/].f_45[iParam1] = fParam2;
}

void func_475(int iParam0, int iParam1, float fParam2)
{
	Local_1241[iParam0 /*68*/].f_41[iParam1] = fParam2;
}

void func_476(int iParam0, float fParam1)
{
	Local_1241[iParam0 /*68*/].f_40 = fParam1;
}

void func_477(int iParam0, float fParam1)
{
	Local_1241[iParam0 /*68*/].f_39 = fParam1;
}

void func_478(int iParam0, float fParam1)
{
	Local_1241[iParam0 /*68*/].f_38 = fParam1;
}

void func_479(int iParam0, int iParam1)
{
	Local_1241[iParam0 /*68*/].f_37 = iParam1;
}

void func_480(int iParam0, int iParam1)
{
	Local_1241[iParam0 /*68*/].f_36 = iParam1;
}

int func_481()
{
	return -1;
}

void func_482()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < get_number_of_events(1))
	{
		iVar1 = get_event_at_index(1, iVar0);
		if (iVar1 == 179)
		{
			func_483(iVar0);
		}
		if (iVar1 == 152)
		{
		}
		iVar0++;
	}
}

void func_483(int iParam0)
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
	struct<4> Var11;
	float fVar21;
	struct<14> Var22;
	
	iVar6 = -1;
	iVar7 = -1;
	iVar8 = -1;
	get_event_data(1, iParam0, &Var11, 10);
	if (ENTITY::DOES_ENTITY_EXIST(Var11))
	{
		if (is_entity_a_ped(Var11))
		{
			iVar0 = get_ped_index_from_entity_index(Var11);
			if (is_ped_a_player(iVar0))
			{
				iVar2 = _network_get_ped_player(iVar0);
				if (network_is_player_a_participant(iVar2))
				{
					iVar4 = network_get_participant_index(iVar2);
					if (network_is_participant_active(iVar4))
					{
						iVar7 = iVar4;
					}
				}
				if (iVar7 != -1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Var11.f_1))
					{
						if (is_entity_a_ped(Var11.f_1))
						{
							iVar1 = get_ped_index_from_entity_index(Var11.f_1);
							if (is_ped_a_player(iVar1))
							{
								iVar3 = _network_get_ped_player(iVar1);
								iVar8 = iVar3;
								if (network_is_player_a_participant(iVar3))
								{
									iVar5 = network_get_participant_index(iVar3);
									if (network_is_participant_active(iVar5))
									{
										iVar6 = iVar5;
									}
									if (iVar6 != -1)
									{
										if (iVar6 != iVar7)
										{
											iVar9 = 0;
											while (iVar9 < 1)
											{
												if (iVar6 == func_8(iVar9))
												{
													if (!func_197(1, 0))
													{
														if (iVar7 == participant_id_to_int())
														{
															if (!GAMEPLAY::IS_BIT_SET(Local_394[participant_id_to_int() /*5*/].f_4, 7))
															{
																GAMEPLAY::SET_BIT(&(Local_394[participant_id_to_int() /*5*/].f_4), 7);
															}
														}
													}
													if (Var11.f_3)
													{
														if (iVar6 == participant_id_to_int())
														{
															if (iLocal_3348 < func_527())
															{
																iLocal_3348++;
																func_487(0, iVar1, "", -1859646258, 2131309714, func_526(), 1, -1, 0, 0);
																Local_380.f_7 += func_526();
															}
															else
															{
																iLocal_3348++;
															}
														}
														if (network_is_host_of_this_script())
														{
															fVar21 = func_105(iVar9, iVar6);
															fVar21 += IntToFloat(Global_262145.f_9144);
															func_470(iVar9, iVar6, fVar21);
														}
													}
												}
												else if (iVar7 == func_8(iVar9))
												{
													if (iVar6 == participant_id_to_int())
													{
														if (!func_197(1, 0))
														{
															if (!GAMEPLAY::IS_BIT_SET(Local_394[participant_id_to_int() /*5*/].f_4, 6))
															{
																GAMEPLAY::SET_BIT(&(Local_394[participant_id_to_int() /*5*/].f_4), 6);
															}
															if (!GAMEPLAY::IS_BIT_SET(Local_394[participant_id_to_int() /*5*/].f_4, 2))
															{
																GAMEPLAY::SET_BIT(&(Local_394[participant_id_to_int() /*5*/].f_4), 2);
																func_184(1);
															}
														}
														if (Var11.f_3)
														{
															if (iLocal_3346 < func_486())
															{
																iLocal_3346++;
																func_487(0, iVar1, "", -1859646258, 2131309714, func_485(), 1, -1, 0, 0);
																Local_380.f_7 += func_485();
															}
															else
															{
																iLocal_3346++;
															}
														}
													}
													if (iVar7 == participant_id_to_int())
													{
														iLocal_3347++;
													}
													if (func_196(iVar6, iVar9))
													{
														if (Var11.f_3)
														{
															if (network_is_host_of_this_script())
															{
																if (func_436(iVar9) == -1)
																{
																	func_530(iVar9, iVar6);
																}
																if (func_435(iVar9) == -1)
																{
																	func_529(iVar9, iVar8);
																}
																GAMEPLAY::SET_BIT(&iLocal_555, false);
															}
														}
													}
													else if (Var11.f_3)
													{
														if (network_is_host_of_this_script())
														{
															Var22.f_2 = 195;
															Var22.f_10 = iVar3;
															iVar10 = false;
															while (iVar10 < 32)
															{
																if (GAMEPLAY::IS_BIT_SET(iLocal_3343, iVar10))
																{
																	if (GAMEPLAY::IS_BIT_SET(iLocal_3342, Local_560[iVar10 /*18*/].f_1))
																	{
																		if (!GAMEPLAY::IS_BIT_SET(Local_394[iVar10 /*5*/].f_4, 9) && !GAMEPLAY::IS_BIT_SET(Local_394[iVar10 /*5*/].f_4, 10))
																		{
																			if (func_145(iVar10))
																			{
																				func_432(Var22, func_484(Local_560[iVar10 /*18*/].f_1));
																			}
																		}
																	}
																}
																iVar10++;
															}
														}
													}
												}
												iVar9++;
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

auto func_484(int iParam0)
{
	auto uVar0;
	
	GAMEPLAY::SET_BIT(&uVar0, iParam0);
	return uVar0;
}

auto func_485()
{
	return Global_262145.f_8949;
}

auto func_486()
{
	return Global_262145.f_8951;
}

int func_487(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9)
{
	return func_488(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, iParam9);
}

int func_488(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_498(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (is_entity_a_ped(iParam1))
			{
				iVar1 = get_ped_index_from_entity_index(iParam1);
				func_494(get_ped_bone_coords(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8);
			}
		}
	}
	else
	{
		func_489(iParam1, iVar0, sParam8);
	}
	return iVar0;
}

void func_489(int iParam0, int iParam1, char* sParam2)
{
	Vector3 vVar0;
	
	vVar0 = {func_492(iParam0, 1)};
	if (iParam0 == func_491(PLAYER::PLAYER_PED_ID()))
	{
		func_490(1);
	}
	func_494(vVar0, iParam1, 0, sParam2);
}

void func_490(int iParam0)
{
	Global_2428492.f_1355 = iParam0;
}

int func_491(int iParam0)
{
	return iParam0;
}

Vector3 func_492(int iParam0, int iParam1)
{
	Vector3 vVar0;
	float fVar3;
	Vector3 vVar4;
	Vector3 vVar7;
	float fVar10;
	
	if (iParam0 == func_493(PLAYER::PLAYER_PED_ID()) && _0xEE778F8C7E1142E2(_0x19CAFA3C87F7C2FF()) == 4)
	{
		vVar0 = {get_offset_from_entity_in_world_coords(iParam0, 0f, 2f, -0.2f)};
	}
	else
	{
		vVar0 = {ENTITY::GET_ENTITY_COORDS(iParam0, 0)};
	}
	fVar3 = 0f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		fVar3 = get_entity_heading(iParam0);
	}
	get_model_dimensions(ENTITY::GET_ENTITY_MODEL(iParam0), &vVar4, &vVar7);
	if (iParam1)
	{
		fVar10 = vVar7.z + 0.18f;
	}
	else
	{
		fVar10 = vVar4.z + 0.18f;
	}
	vVar0 = {_get_object_offset_from_coords(vVar0, fVar3, 0f, 0f, fVar10)};
	return vVar0;
}

int func_493(int iParam0)
{
	return iParam0;
}

void func_494(Vector3 vParam0, int iParam1, int iParam2, char* sParam3)
{
	int iVar0;
	int iVar1;
	
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2428492.f_774[iVar0 /*29*/].f_6 == 0 || Global_2428492.f_774[iVar0 /*29*/].f_6 == 6)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2428492.f_774[iVar1 /*29*/] = {vParam0};
			Global_2428492.f_774[iVar1 /*29*/].f_6 = 1;
			Global_2428492.f_774[iVar1 /*29*/].f_4 = func_497(Global_2428492.f_774[iVar1 /*29*/], &Global_1312317, &Global_1312318);
			Global_2428492.f_774[iVar1 /*29*/].f_7 = NETWORK::GET_NETWORK_TIME();
			Global_2428492.f_774[iVar1 /*29*/].f_3 = iParam3;
			Global_2428492.f_774[iVar1 /*29*/].f_8 = iParam4;
			Global_2428492.f_774[iVar1 /*29*/].f_9 = func_496();
			Global_2428492.f_774[iVar1 /*29*/].f_10 = func_495();
			StringCopy(&(Global_2428492.f_774[iVar1 /*29*/].f_22), sParam5, 16);
		}
	}
}

bool func_495()
{
	if (Global_2428492.f_1355)
	{
		Global_2428492.f_1355 = 0;
		return true;
	}
	Global_2428492.f_1355 = 0;
	return false;
}

auto func_496()
{
	auto uVar0;
	
	uVar0 = Global_2428492.f_1357;
	Global_2428492.f_1357 = 1;
	return uVar0;
}

float func_497(Vector3 vParam0, auto uParam1, auto uParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = get_distance_between_coords(get_gameplay_cam_coord(), vParam0, 1);
	if (fVar0 < 5f)
	{
		*uParam3 = 0.402f;
		*uParam4 = 0.476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam3 = 0.212f;
		*uParam4 = 0.286f;
		return 1f;
	}
	fVar1 = 1f - fVar0 - 5f / 20f - 5f;
	fVar2 = fVar1 * 0.402f - 0.212f;
	fVar3 = fVar1 * 0.476f - 0.286f;
	*uParam3 = fVar2 + 0.212f;
	*uParam4 = fVar3 + 0.286f;
	return fVar1;
}

auto func_498(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	auto uVar0;
	
	uVar0 = func_499(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, iParam7);
	return uVar0;
}

int func_499(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_525(player_id()) || func_524(player_id()))
	{
		if (Global_262145.f_7596 > 8000)
		{
			iVar2 = 8000;
		}
		else
		{
			iVar2 = Global_262145.f_7596;
		}
	}
	else if (Global_262145.f_5039 > 5000)
	{
		iVar2 = 5000;
	}
	else
	{
		iVar2 = Global_262145.f_5039;
	}
	if (func_91(sParam2))
	{
	}
	if (func_523())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = round(IntToFloat(iParam3) * IntToFloat(iParam4) + fVar0);
		iVar1 = func_521(iVar1);
		fVar3 = to_float(iVar1) * Global_262145.f_1;
		iVar1 = round(fVar3);
		if (iParam10)
		{
			iVar1 = func_520(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_517(0, &iVar1);
					break;
				
				case 3:
					func_517(1, &iVar1);
					break;
				
				case 1:
					func_514(&iVar1);
					break;
				}
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (iParam7)
		{
			func_207(1157, iVar1, -1);
			if (iParam1 == 0)
			{
				func_506(func_513(player_id()) + iVar1, iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				playstats_award_xp(iVar1, iParam8, iParam9);
				if (Global_1587523[player_id() /*444*/].f_39.f_2 != -1)
				{
					func_207(1158, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_502(iVar1);
				}
			}
		}
		if (iParam5)
		{
		}
		if (iParam7)
		{
			if (iParam6 == -1)
			{
				func_500(func_501(player_id()) + iVar1);
			}
			else
			{
				func_500(func_501(player_id()) + iParam6);
			}
		}
		if (iParam7)
		{
		}
	}
	return iVar1;
}

void func_500(int iParam0)
{
	if (func_523())
	{
		Global_1587523[player_id() /*444*/].f_195.f_5 = iParam0;
		func_213(joaat("mpply_globalxp"), iParam0);
	}
}

int func_501(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_658(iParam0, 0, 1))
		{
			if (iParam0 == player_id())
			{
				return func_215(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1587523[iParam0 /*444*/].f_195.f_5;
			}
		}
		else
		{
			return func_215(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

void func_502(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = {func_38(player_id())};
	if (_network_player_is_in_clan())
	{
		if (network_clan_player_is_active(&Var0))
		{
			iVar13 = func_504(func_505(&Var0));
			if (iVar13 == 0)
			{
				func_503(&Global_1347641, iParam0);
				func_212(joaat("mpply_crew_local_xp_0"), Global_1347641);
			}
			else if (iVar13 == 1)
			{
				func_503(&Global_1347642, iParam0);
				func_212(joaat("mpply_crew_local_xp_1"), Global_1347642);
			}
			else if (iVar13 == 2)
			{
				func_503(&Global_1347643, iParam0);
				func_212(joaat("mpply_crew_local_xp_2"), Global_1347643);
			}
			else if (iVar13 == 3)
			{
				func_503(&Global_1347644, iParam0);
				func_212(joaat("mpply_crew_local_xp_3"), Global_1347644);
			}
			else if (iVar13 == 4)
			{
				func_503(&Global_1347645, iParam0);
				func_212(joaat("mpply_crew_local_xp_4"), Global_1347645);
			}
		}
	}
}

void func_503(auto uParam0, int iParam1)
{
	*uParam0 += iParam1;
}

int func_504(int iParam0)
{
	if (iParam0 == Global_1347636)
	{
		return 0;
	}
	else if (iParam0 == Global_1347637)
	{
		return 1;
	}
	else if (iParam0 == Global_1347638)
	{
		return 2;
	}
	else if (iParam0 == Global_1347639)
	{
		return 3;
	}
	else if (iParam0 == Global_1347640)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

auto func_505(auto uParam0)
{
	if (_network_player_is_in_clan())
	{
		if (network_clan_player_is_active(uParam0))
		{
			return Global_2443013;
		}
	}
	return Global_2443013;
}

void func_506(int iParam0, int iParam1, int iParam2)
{
	if (func_523())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_7571 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1347756[func_163(-1)])
				{
					playstats_award_xp(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1347756[func_163(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_7570 == 0)
		{
			if (iParam0 == 0)
			{
				playstats_award_xp(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_7570 == 0)
		{
			if (iParam0 < 0)
			{
				playstats_award_xp(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_512(player_id()))
		{
			Global_1587523[player_id() /*444*/].f_195.f_1 = iParam0;
			Global_1587523[player_id() /*444*/].f_195.f_6 = func_510(iParam0, 1);
		}
		func_208(632, iParam0, -1, 1);
		func_209(633, func_510(iParam0, 1), -1, 1);
		Global_1347756[func_163(-1)] = iParam0;
		func_507(7, 0);
	}
}

void func_507(int iParam0, int iParam1)
{
	auto uVar0;
	
	if (func_509(iParam0, iParam1))
	{
		uVar0 = func_508();
		Global_2442990[uVar0] = iParam0;
	}
}

int func_508()
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

bool func_509(int iParam0, auto uParam1)
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

int func_510(int iParam0, int iParam1)
{
	if (iParam1)
	{
	}
	return func_511(iParam0, 0);
}

int func_511(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = false;
	iVar3 = iVar1 - iVar2 / 2;
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_275884[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_275884[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1--;
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = to_float(iVar1) - to_float(iVar2) / 2f + to_float(iVar2);
		iVar3 = round(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_512(int iParam0)
{
	if (iParam0 == -1)
	{
		return false;
	}
	else
	{
		return GAMEPLAY::IS_BIT_SET(Global_2428492.f_1, iParam0);
	}
	return true;
}

int func_513(int iParam0)
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == player_id())
			{
				return Global_1347756[func_163(-1)];
			}
			else if (func_512(iParam0))
			{
				return Global_1587523[iParam0 /*444*/].f_195.f_1;
			}
		}
	}
	else
	{
		return Global_1347756[func_163(-1)];
	}
	return 0;
}

void func_514(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = get_player_team(player_id());
	iVar0 = false;
	while (iVar0 < _network_get_num_participants_host())
	{
		iVar4 = int_to_participantindex(iVar0);
		if (network_is_participant_active(iVar4))
		{
			iVar5 = network_get_player_index(iVar4);
			if (get_player_team(iVar5) != -1)
			{
				if (get_player_team(iVar5) == iVar1 || func_134(get_player_team(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != player_id())
					{
						if (func_516(player_id(), iVar5))
						{
							iVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (iVar3)
	{
		iVar6 = round(func_515(*iParam0, 100) * 10f * Global_262145.f_4211);
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = round(func_515(*iParam0, 100) * 20f * Global_262145.f_4204);
	}
	*iParam0 += iVar6;
	*iParam0 += iVar7;
}

float func_515(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = to_float(iParam0);
	fVar1 = to_float(iParam1);
	fVar2 = fVar0 / fVar1;
	return fVar2;
}

bool func_516(int iParam0, int iParam1)
{
	if (_network_player_is_in_clan())
	{
		Global_2459440 = {func_38(iParam0)};
		Global_2459453 = {func_38(iParam1)};
		if (network_clan_player_is_active(&Global_2459440))
		{
			if (network_clan_player_is_active(&Global_2459453))
			{
				network_clan_player_get_desc(&Global_2459370, 35, &Global_2459440);
				network_clan_player_get_desc(&Global_2459405, 35, &Global_2459453);
				if (Global_2459370 == Global_2459405)
				{
					return true;
				}
			}
		}
	}
	return false;
}

void func_517(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (iParam0)
	{
		iVar0 = 0;
		while (iVar0 < _network_get_num_participants_host())
		{
			iVar3 = iVar0;
			if (network_is_participant_active(iVar3))
			{
				iVar4 = network_get_player_index(iVar3);
				if (func_658(iVar4, 0, 1))
				{
					if (iVar4 != player_id())
					{
						iVar1++;
						if (func_516(player_id(), iVar4))
						{
							iVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar4 = iVar0;
			if (func_658(iVar4, 1, 1))
			{
				if (iVar4 != player_id())
				{
					if (func_518(player_id(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_516(player_id(), iVar4))
						{
							iVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (iVar2)
	{
		iVar5 = round(func_515(*iParam1, 100) * 10f * Global_262145.f_4211);
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = round(func_515(*iParam1, 100) * 20f * Global_262145.f_4204);
	}
	*iParam1 += iVar5;
	*iParam1 += iVar6;
}

float func_518(int iParam0, int iParam1)
{
	return vdist(func_519(iParam0), func_519(iParam1));
	return 0f;
}

Vector3 func_519(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(get_player_ped(iParam0), 0);
}

auto func_520(int iParam0)
{
	int iVar0;
	
	if (CONTROLS::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = round(func_515(*iParam0, 100) * 25f);
	*iParam0 += iVar0;
	return *iParam0;
}

int func_521(int iParam0)
{
	if (iParam0 < 0)
	{
		if (absi(iParam0) > func_513(player_id()))
		{
			iParam0 = -func_513(player_id());
		}
	}
	if (func_522(8000, 0, 0) > 0)
	{
		if (func_522(8000, 0, 0) < iParam0 + func_513(player_id()))
		{
			iParam0 = func_522(8000, 0, 0) - func_513(player_id());
		}
	}
	return iParam0;
}

auto func_522(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 0)
	{
	}
	if (iParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_275884[iParam0];
}

bool func_523()
{
	return true;
}

int func_524(int iParam0)
{
	return Global_2418472[iParam0 /*313*/].f_114 == 2;
}

int func_525(int iParam0)
{
	return Global_2418472[iParam0 /*313*/].f_114 == 7;
}

auto func_526()
{
	return Global_262145.f_8950;
}

auto func_527()
{
	return Global_262145.f_8952;
}

void func_528(int iParam0, auto uParam1)
{
	Local_1241[iParam0 /*68*/].f_31 = uParam1;
}

void func_529(int iParam0, int iParam1)
{
	Local_1241[iParam0 /*68*/].f_35 = iParam1;
}

void func_530(int iParam0, int iParam1)
{
	Local_1241[iParam0 /*68*/].f_34 = iParam1;
}

void func_531(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	auto uVar3;
	auto uVar4;
	
	if (!GAMEPLAY::IS_BIT_SET(iLocal_555, 5))
	{
		if (func_15(iParam0) != 0)
		{
			if (!func_199(player_id()))
			{
				if (!func_92(player_id()))
				{
					if (func_399(participant_id_to_int()))
					{
						if (iParam1 <= 2)
						{
							if (func_145(participant_id_to_int()) || func_399(participant_id_to_int()))
							{
								func_554(func_568(iParam1), &iVar0, &iVar1, &iVar2);
							}
						}
						else
						{
							func_553(1);
						}
						if (iVar1 > 0)
						{
							func_552();
							func_487(0, PLAYER::PLAYER_PED_ID(), "", -1636175450, -1253457806, iVar1, 1, -1, 0, 0);
							Local_380.f_7 += iVar1;
						}
						if (iVar0 > 0)
						{
							func_543(&iVar0, 1);
						}
						iVar0 += iVar2;
						if (iVar0 > 0)
						{
							if (func_542())
							{
								func_533(-212607085, iVar0, &uVar3, 0, 1, 0);
							}
							else
							{
								_0xFB6DB092FBAE29E6(iVar0, "AM_KING_OF_THE_HILL", &uVar4);
							}
							Local_380.f_6 += iVar0;
							if (!Global_262145.f_9354)
							{
								if (Local_380.f_6 > 0)
								{
									func_532(16, Local_380.f_6);
								}
							}
							Global_2445403 = iVar0;
						}
					}
					else
					{
						func_553(0);
					}
				}
				else
				{
					func_553(0);
				}
			}
			else
			{
				func_553(0);
			}
		}
		else
		{
			func_553(0);
		}
		GAMEPLAY::SET_BIT(&iLocal_555, 5);
	}
}

void func_532(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		Global_2460486.f_269 = iParam0;
		if (iParam1 > Global_262145.f_4989)
		{
			iParam1 = Global_262145.f_4989;
		}
		Global_2460486.f_270 = iParam1;
		Global_2460486.f_271 = 0;
	}
}

void func_533(int iParam0, int iParam1, auto uParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (!func_542())
	{
		return;
	}
	iVar0 = 1;
	if (iParam4)
	{
		iVar0 = 4;
	}
	else if (iParam3)
	{
		iVar0 = 2;
	}
	else if (iParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
		case 1850983186:
		case 763367758:
		case 1941570214:
		case 665109499:
		case -1330755006:
			if (iParam1 > 0)
			{
				func_534(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -31156877:
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
			func_534(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

bool func_534(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = false;
	if (!func_542())
	{
		iVar0 = true;
	}
	if (!iVar0)
	{
		if (!_0xB24F0944DA203D9E(func_35()) || _0x810E8431C0614BF9())
		{
			Global_2558637 = 1;
			return false;
		}
		if (Global_2444207)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
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
		iVar1++;
	}
	if (!iVar2)
	{
		return false;
	}
	*uParam0 = 5;
	iVar3 = 2147483647;
	if (iVar0 || _0x3C5FD37B5499582E(&iVar3, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if (iVar0 || _0x39BE7CEA8D9CC8E6(iVar3))
		{
			*uParam0 = func_541(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
			if (iVar0)
			{
				if (*uParam0 != -1)
				{
					Global_2558146[*uParam0 /*73*/].f_66 = 1;
				}
			}
			Global_2558628 = 1;
			return true;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_2558636 = 1;
			Global_2558639 = iParam4;
			Global_2558641 = iParam3;
			Global_2558642 = 1;
			Global_2558640 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_2558639 = iParam4;
			Global_2558641 = iParam3;
			Global_2558642 = 1;
			Global_2558640 = iParam5;
		}
		iVar4 = false;
		if (iVar4)
		{
			func_540(1, iParam4);
			Global_2558636 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_535(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return false;
}

void func_535(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			GAMEPLAY::SET_BIT(&(Global_2418472[player_id() /*313*/].f_121.f_71), false);
			break;
	}
	if (iParam0 != -1)
	{
		func_536(iParam0);
	}
}

void func_536(int iParam0)
{
	int iVar0;
	
	iVar0 = false;
	if (!func_542())
	{
		iVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_539(iParam0))
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
		func_537(&(Global_2558146[iParam0 /*73*/]));
	}
}

void func_537(auto uParam0)
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
	func_538(uParam0.f_8.f_3);
	func_538(uParam0.f_8.f_16);
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

void func_538(auto uParam0)
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

int func_539(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2558146[iParam0 /*73*/].f_5 == 1;
	}
	return false;
}

void func_540(int iParam0, int iParam1)
{
	Global_2445534 = iParam1;
	Global_2445533 = iParam0;
}

int func_541(int iParam0, auto uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, auto uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2558146[iVar0 /*73*/].f_2 == 0)
		{
			if (!func_542())
			{
				iParam0 = iVar0 + 900;
			}
			Global_2558146[iVar0 /*73*/].f_2 = 1;
			Global_2558146[iVar0 /*73*/].f_1 = iParam5;
			Global_2558146[iVar0 /*73*/].f_3 = uParam1;
			Global_2558146[iVar0 /*73*/].f_4 = iParam2;
			Global_2558146[iVar0 /*73*/].f_7 = iParam3;
			Global_2558146[iVar0 /*73*/].f_5 = 0;
			Global_2558146[iVar0 /*73*/] = iParam0;
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

bool func_542()
{
	if (GAMEPLAY::IS_PC_VERSION())
	{
		return true;
	}
	return false;
}

void func_543(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_551())
		{
			if (func_106(0))
			{
				if (network_is_player_active(func_550()))
				{
					if (func_549() == 100)
					{
						iVar0 = *iParam0;
						*iParam0 = 0;
					}
					else
					{
						iVar0 = *iParam0 / 100 * func_549();
						*iParam0 -= iVar0;
					}
					func_547(&iVar0, 0);
					if (iParam1 == 1)
					{
						func_546("GB_BCUT_TICK1", func_550(), iVar0, 0, 0, 1, 1);
					}
					func_545(20);
					func_544(func_550(), iVar0, 1);
				}
			}
		}
	}
}

void func_544(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	
	if (func_658(iParam0, 0, 1))
	{
		Var0 = 447;
		Var0.f_1 = player_id();
		Var0.f_2 = iParam1;
		Var0.f_3 = iParam2;
		trigger_script_event(1, &Var0, 5, func_484(iParam0));
	}
}

void func_545(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0 / 32;
	iVar1 = iParam0 % 32;
	GAMEPLAY::SET_BIT(&(Global_2460486.f_4660.f_7[iVar0]), iVar1);
}

int func_546(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	struct<16> Var1;
	
	iVar0 = -1;
	if (_0x9DE986FC9A87C474(player_id(), iParam1) || iParam5)
	{
		if (!iParam4)
		{
			StringCopy(&Var1, get_player_name(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, get_player_name(iParam1), 64);
		}
		_set_notification_text_entry(sParam0);
		_0x39BBF623FC803EAC(func_127(iParam1, -2, 1, 0));
		add_text_component_substring_player_name(func_39(&Var1));
		if (!iParam3 == 0)
		{
			_0x39BBF623FC803EAC(iParam3);
		}
		add_text_component_integer(iParam2);
		iVar0 = _draw_notification(0, 1);
		func_30(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_547(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1)
	{
		iVar1 = func_548(1);
	}
	else
	{
		iVar1 = func_548(0);
	}
	iVar0 = *iParam0 / 100 * iVar1;
	*iParam0 -= iVar0;
}

int func_548(int iParam0)
{
	if (iParam0)
	{
		return round(0.05f * 100f);
	}
	return Global_262145.f_10329;
}

auto func_549()
{
	return Global_262145.f_10328;
}

auto func_550()
{
	return Global_1610316[player_id() /*174*/].f_10;
}

int func_551()
{
	return func_56(player_id());
}

void func_552()
{
	Global_2444573 = 1;
}

void func_553(int iParam0)
{
	if (iParam0)
	{
		if (func_161(1))
		{
			GAMEPLAY::SET_BIT(&Global_1573907, true);
		}
	}
	else if (func_161(2))
	{
		GAMEPLAY::SET_BIT(&Global_1573907, 2);
	}
}

void func_554(float fParam0, auto uParam1, auto uParam2, auto uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_9(&uLocal_558, 0, 0) / 60 / 1000;
	if (iVar0 > Global_262145.f_9385)
	{
		iVar0 = Global_262145.f_9385;
	}
	else if (iVar0 < 1)
	{
		iVar0 = 1;
	}
	*uParam3 = func_567() * iVar0;
	*uParam2 = func_566() * iVar0;
	if (fParam0 > 0f)
	{
		iVar1 = Global_262145.f_9139 / 60 / 1000;
		if (iVar1 > func_565())
		{
			iVar1 = func_565();
		}
		iVar2 = iLocal_557;
		if (iVar2 > func_564())
		{
			iVar2 = func_564();
		}
		*uParam1 = round(IntToFloat(func_557(func_563(), func_562(), iVar1, fParam0, func_561(), func_560(), func_559(), iVar2)) * Global_262145.f_9412);
		*uParam2 += round(IntToFloat(func_557(func_556(), func_555(), iVar1, fParam0, func_561(), func_560(), func_559(), iVar2)) * Global_262145.f_9413);
	}
}

auto func_555()
{
	return Global_262145.f_8946;
}

auto func_556()
{
	return Global_262145.f_8948;
}

int func_557(int iParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7)
{
	return func_558(round(IntToFloat(iParam0) * fParam3 + IntToFloat(iParam1) * fParam3 * IntToFloat(iParam2) * fParam4 * IntToFloat(iParam7) * fParam5 / fParam6), 50, 0);
}

int func_558(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = iParam0 / iParam1;
	iVar0 *= iParam1;
	iVar1 = iVar0 + iParam1;
	iVar2 = iParam0 - iVar0;
	iVar3 = iVar1 - iParam0;
	if (iVar2 >= iVar3)
	{
		if (iParam2 == 1)
		{
		}
		return iVar1;
	}
	if (iParam2 == 1)
	{
	}
	return iVar0;
}

auto func_559()
{
	return Global_262145.f_8955;
}

auto func_560()
{
	return Global_262145.f_8954;
}

auto func_561()
{
	return Global_262145.f_8953;
}

auto func_562()
{
	return Global_262145.f_8945;
}

auto func_563()
{
	return Global_262145.f_8947;
}

auto func_564()
{
	return Global_262145.f_9298;
}

auto func_565()
{
	return Global_262145.f_9297;
}

auto func_566()
{
	return Global_262145.f_8944;
}

auto func_567()
{
	return Global_262145.f_8943;
}

float func_568(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_8956;
		
		case 1:
			return Global_262145.f_8957;
		
		case 2:
			return Global_262145.f_8958;
		
		default:
	}
	return 0f;
}

bool func_569(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4)
{
	if (_0xCF61D4B4702EE9EB() < iParam0)
	{
		if (iParam2)
		{
			func_571(sParam3, sParam4, 1);
		}
		if (func_205(26, -1))
		{
			func_231(26, -1);
		}
		return true;
	}
	if (func_18(&(Global_1573883.f_18)))
	{
		if (!func_5(&(Global_1573883.f_18), 7500, 0))
		{
			return false;
		}
		func_3(&(Global_1573883.f_18));
	}
	if (func_570())
	{
		if (iParam2)
		{
			func_571(sParam3, sParam4, 0);
		}
		if (func_205(26, -1))
		{
			func_231(26, -1);
		}
		return true;
	}
	if (iParam1 && network_get_num_participants() < iParam0)
	{
		if (iParam2)
		{
			func_571(sParam3, sParam4, 1);
		}
		if (func_205(26, -1))
		{
			func_231(26, -1);
		}
		return true;
	}
	return false;
}

int func_570()
{
	return GAMEPLAY::IS_BIT_SET(Global_1573883.f_1, false);
}

void func_571(char* sParam0, char* sParam1, int iParam2)
{
	if ((!GAMEPLAY::IS_BIT_SET(Global_1573883.f_1, 2) && !func_173(player_id())) && !func_199(player_id()))
	{
		if (is_string_null_or_empty(sParam0))
		{
			sParam0 = "FMEVEN_NUM1";
		}
		if (is_string_null_or_empty(sParam1))
		{
			if (iParam2)
			{
				sParam1 = "FMEVEN_NUM2";
			}
			else
			{
				sParam1 = "FMEVEN_NUM3";
			}
		}
		func_151(65, sParam0, sParam1, 1, -1, 2);
		GAMEPLAY::SET_BIT(&(Global_1573883.f_1), 2);
	}
}

auto func_572()
{
	return Local_96.f_1;
}

void func_573()
{
	if (GAMEPLAY::IS_BIT_SET(Global_1573883.f_1, 6))
	{
		func_592();
		GAMEPLAY::CLEAR_BIT(&(Global_1573883.f_1), 6);
	}
	if (!GAMEPLAY::IS_BIT_SET(Global_1573883.f_1, 7))
	{
		if (GAMEPLAY::IS_BIT_SET(Global_1573883.f_1, 4) || GAMEPLAY::IS_BIT_SET(Global_1573883.f_1, 16))
		{
			if (((!is_radar_hidden() && !is_help_message_being_displayed()) && !func_183()) && func_658(player_id(), 1, 1))
			{
				GAMEPLAY::SET_BIT(&(Global_1573883.f_1), 7);
				func_182("FME_PASINT", 30000);
				func_181(1);
			}
		}
		else if (GAMEPLAY::IS_BIT_SET(Global_1573883.f_1, 17))
		{
			if (func_95() && !func_94())
			{
				GAMEPLAY::CLEAR_BIT(&(Global_1573883.f_1), 17);
				GAMEPLAY::SET_BIT(&(Global_1573883.f_1), 16);
			}
		}
	}
	if (!GAMEPLAY::IS_BIT_SET(Global_1573883.f_1, 23))
	{
		if (((((!is_radar_hidden() && !GAMEPLAY::IS_BIT_SET(Global_2460486.f_743, 2)) && func_658(player_id(), 1, 1)) && !Global_68058) && !Global_52930) && !is_help_message_being_displayed())
		{
			if (func_590())
			{
				func_182("AMEV_GA_RP", -1);
				func_181(1);
				GAMEPLAY::SET_BIT(&(Global_1573883.f_1), 23);
			}
		}
	}
	if (is_pause_menu_active() && get_pause_menu_state() == 15)
	{
		if (func_166(player_id()))
		{
			if (!_0x84698AB38D0C6636(1344549371))
			{
				_0xDD564BDD0472C936(1344549371);
			}
		}
		else if (_0x84698AB38D0C6636(1344549371))
		{
			object_decal_toggle(1344549371);
		}
	}
	if (GAMEPLAY::IS_BIT_SET(Global_1573883.f_1, 9))
	{
		if ((((!is_radar_hidden() && !is_help_message_being_displayed()) && !func_183()) && func_658(player_id(), 1, 1)) && !func_93(player_id(), 21))
		{
			GAMEPLAY::CLEAR_BIT(&(Global_1573883.f_1), 9);
			func_589(0);
			func_182("FME_TBL00", -1);
			func_181(1);
		}
	}
	if (func_273(player_id()))
	{
		if (!GAMEPLAY::IS_BIT_SET(Global_1573883.f_1, 18))
		{
			if ((func_93(player_id(), 21) && GAMEPLAY::IS_BIT_SET(Global_1573883.f_1, 20)) && !GAMEPLAY::IS_BIT_SET(Global_1573883.f_1, 19))
			{
				GAMEPLAY::SET_BIT(&(Global_1573883.f_1), 18);
			}
		}
		else if (GAMEPLAY::IS_BIT_SET(Global_1573883.f_1, 18))
		{
			if (((((!is_radar_hidden() && !is_help_message_being_displayed()) && !func_183()) && func_658(player_id(), 1, 1)) && is_screen_faded_in()) && !Global_2460486.f_4654)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_1573883.f_1), 18);
				GAMEPLAY::SET_BIT(&(Global_1573883.f_1), 19);
				func_182("AMTT_RPAS", -1);
				func_181(1);
			}
		}
	}
	if (((((func_273(player_id()) && !func_173(player_id())) && func_195(player_id()) != 146) && !func_199(player_id())) && !func_92(player_id())) && !func_583())
	{
		if (func_165(func_195(player_id())))
		{
			unk_0xFAC75988A7D078D3(player_id());
		}
		if (!GAMEPLAY::IS_BIT_SET(Global_1573883.f_1, 22))
		{
			GAMEPLAY::SET_BIT(&(Global_1573883.f_1), 22);
		}
		if (func_265(player_id()) || func_157())
		{
			if (!GAMEPLAY::IS_BIT_SET(Global_1573883.f_1, 10))
			{
				if (func_581(func_195(player_id())))
				{
					if (func_161(0) && !Global_2391042)
					{
						GAMEPLAY::SET_BIT(&(Global_1573883.f_1), 9);
					}
					func_164(1);
					GAMEPLAY::SET_BIT(&(Global_1573883.f_1), 14);
				}
				GAMEPLAY::SET_BIT(&(Global_1573883.f_1), 10);
			}
		}
		if (func_166(player_id()))
		{
			if (!GAMEPLAY::IS_BIT_SET(Global_1573883.f_1, 11))
			{
				if (!Global_91330.f_8)
				{
					GAMEPLAY::SET_BIT(&(Global_1573883.f_1), 12);
					func_159(1);
				}
				if (!func_580())
				{
					GAMEPLAY::SET_BIT(&(Global_1573883.f_1), 13);
					func_158();
				}
				if (!Global_2391042)
				{
					GAMEPLAY::SET_BIT(&(Global_1573883.f_1), 14);
					if (func_161(0) && !Global_2391042)
					{
						GAMEPLAY::SET_BIT(&(Global_1573883.f_1), 9);
					}
					func_164(1);
				}
				GAMEPLAY::SET_BIT(&(Global_1573883.f_1), 11);
			}
		}
		else
		{
			func_578(0);
		}
	}
	else
	{
		func_578(1);
	}
	func_574();
	if (func_156(func_195(player_id())) && !GAMEPLAY::IS_BIT_SET(Global_1573883.f_1, 21))
	{
		GAMEPLAY::SET_BIT(&(Global_1573883.f_1), 21);
	}
	if ((func_95() && !func_94()) || func_93(player_id(), 21))
	{
		if (!GAMEPLAY::IS_BIT_SET(Global_1610316[player_id() /*174*/].f_1, 10))
		{
			GAMEPLAY::SET_BIT(&(Global_1610316[player_id() /*174*/].f_1), 10);
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(Global_1610316[player_id() /*174*/].f_1, 10))
	{
		GAMEPLAY::CLEAR_BIT(&(Global_1610316[player_id() /*174*/].f_1), 10);
	}
}

void func_574()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_183())
	{
		iVar2 = 62;
		iVar2 = 0;
		while (iVar2 < 82)
		{
			if (func_150(iVar2))
			{
				iVar0 = iVar2;
				if (iVar0 == 62 || iVar0 >= 80)
				{
					iVar1 = 15000;
				}
				else
				{
					iVar1 = 3000;
				}
				if (GAMEPLAY::IS_BIT_SET(Global_1573883.f_1, 26))
				{
					GAMEPLAY::CLEAR_BIT(&(Global_1573883.f_1), 26);
				}
				func_575(iVar0, iVar1);
				iVar2 = 82;
			}
			iVar2++;
		}
	}
	else if (!GAMEPLAY::IS_BIT_SET(Global_1573883.f_1, 26))
	{
		func_3(&(Global_1573883.f_21));
		GAMEPLAY::SET_BIT(&(Global_1573883.f_1), 26);
	}
}

void func_575(int iParam0, int iParam1)
{
	if (!func_18(&(Global_1573883.f_21)))
	{
		func_11(&(Global_1573883.f_21), 0, 0);
	}
	else if (func_5(&(Global_1573883.f_21), iParam1, 0))
	{
		if (func_389() > 0)
		{
			func_178(iParam0);
			if (func_180("AMEV_LBD_HELP"))
			{
				clear_help(1);
			}
			func_3(&(Global_1573883.f_21));
		}
	}
	else
	{
		func_577(0);
		func_576();
	}
}

void func_576()
{
	Global_2460486.f_4391 = 0;
}

void func_577(int iParam0)
{
	Global_1338622.f_68 = iParam0;
}

void func_578(int iParam0)
{
	if ((GAMEPLAY::IS_BIT_SET(Global_1573883.f_1, 11) || (GAMEPLAY::IS_BIT_SET(Global_1573883.f_1, 10) && iParam0)) || (GAMEPLAY::IS_BIT_SET(Global_1573883.f_1, 22) && iParam0))
	{
		if (GAMEPLAY::IS_BIT_SET(Global_1573883.f_1, 12))
		{
			GAMEPLAY::CLEAR_BIT(&(Global_1573883.f_1), 12);
			func_159(0);
		}
		if (GAMEPLAY::IS_BIT_SET(Global_1573883.f_1, 13))
		{
			GAMEPLAY::CLEAR_BIT(&(Global_1573883.f_1), 13);
			func_579();
		}
		if (GAMEPLAY::IS_BIT_SET(Global_1573883.f_1, 14) && !func_28(player_id(), 0))
		{
			GAMEPLAY::CLEAR_BIT(&(Global_1573883.f_1), 14);
			func_164(0);
		}
		GAMEPLAY::CLEAR_BIT(&(Global_1573883.f_1), 11);
		GAMEPLAY::CLEAR_BIT(&(Global_1573883.f_1), 10);
		GAMEPLAY::CLEAR_BIT(&(Global_1573883.f_1), 22);
	}
}

void func_579()
{
	GAMEPLAY::CLEAR_BIT(&(Global_2460486.f_4564), false);
}

int func_580()
{
	return GAMEPLAY::IS_BIT_SET(Global_2460486.f_4564, false);
}

int func_581(int iParam0)
{
	switch (iParam0)
	{
		case 129:
		case 132:
		case 136:
		case 138:
		case 139:
		case 140:
		case 141:
			return 1;
		
		case 131:
		case 146:
			return func_166(player_id());
		
		case 133:
			return (func_157() || func_582(func_110()));
		
		default:
	}
	return 0;
}

bool func_582(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 10:
		case 6:
		case 12:
		case 11:
		case 14:
			return true;
		
		default:
	}
	return false;
}

bool func_583()
{
	if (((((((((func_254() || func_253()) || func_252()) || func_102()) || (func_249() && !network_is_activity_session())) || (func_586() && !func_585())) || Global_2394645) || Global_2394645.f_1 != 0) || Global_2394718 != 0) || (func_584() == 2 && !network_is_activity_session()))
	{
		return true;
	}
	return false;
}

auto func_584()
{
	return Global_978143;
}

int func_585()
{
	return GAMEPLAY::IS_BIT_SET(Global_2434762.f_2, 27);
}

int func_586()
{
	if (func_588() || func_587())
	{
		return Global_1587523[player_id() /*444*/].f_87 == 8;
	}
	return false;
}

auto func_587()
{
	return Global_2434762.f_610;
}

int func_588()
{
	return GAMEPLAY::IS_BIT_SET(Global_2434762.f_2, 11);
}

void func_589(int iParam0)
{
	int iVar0;
	
	iVar0 = func_162(2512, -1, 0);
	if (iParam0 == 0)
	{
		if (!GAMEPLAY::IS_BIT_SET(iVar0, false))
		{
			GAMEPLAY::SET_BIT(&iVar0, false);
		}
		else if (!GAMEPLAY::IS_BIT_SET(iVar0, true))
		{
			GAMEPLAY::SET_BIT(&iVar0, true);
		}
		else if (!GAMEPLAY::IS_BIT_SET(iVar0, 2))
		{
			GAMEPLAY::SET_BIT(&iVar0, 2);
		}
	}
	else if (iParam0 == 1)
	{
		if (!GAMEPLAY::IS_BIT_SET(iVar0, 3))
		{
			GAMEPLAY::SET_BIT(&iVar0, 3);
		}
		else if (!GAMEPLAY::IS_BIT_SET(iVar0, 4))
		{
			GAMEPLAY::SET_BIT(&iVar0, 4);
		}
		else if (!GAMEPLAY::IS_BIT_SET(iVar0, 5))
		{
			GAMEPLAY::SET_BIT(&iVar0, 5);
		}
	}
	else if (iParam0 == 2)
	{
		if (!GAMEPLAY::IS_BIT_SET(iVar0, 6))
		{
			GAMEPLAY::SET_BIT(&iVar0, 6);
		}
		else if (!GAMEPLAY::IS_BIT_SET(iVar0, 7))
		{
			GAMEPLAY::SET_BIT(&iVar0, 7);
		}
		else if (!GAMEPLAY::IS_BIT_SET(iVar0, 8))
		{
			GAMEPLAY::SET_BIT(&iVar0, 8);
		}
	}
	else if (iParam0 == 3)
	{
		if (!GAMEPLAY::IS_BIT_SET(iVar0, 9))
		{
			GAMEPLAY::SET_BIT(&iVar0, 9);
		}
		else if (!GAMEPLAY::IS_BIT_SET(iVar0, 10))
		{
			GAMEPLAY::SET_BIT(&iVar0, 10);
		}
		else if (!GAMEPLAY::IS_BIT_SET(iVar0, 11))
		{
			GAMEPLAY::SET_BIT(&iVar0, 11);
		}
	}
	func_209(2512, iVar0, -1, 1);
}

bool func_590()
{
	int iVar0;
	
	if (!func_18(&(Global_1573883.f_15)))
	{
		func_11(&(Global_1573883.f_15), 0, 0);
		Global_1573883.f_17 = 0;
	}
	else if (func_5(&(Global_1573883.f_15), 1000, 0))
	{
		if (network_is_participant_active(int_to_participantindex(Global_1573883.f_17)))
		{
			iVar0 = network_get_player_index(int_to_participantindex(Global_1573883.f_17));
			if (network_is_player_active(iVar0))
			{
				if (func_658(iVar0, 1, 1) && func_591(iVar0, 6))
				{
					if (vdist(func_519(player_id()), func_519(iVar0)) < 80f)
					{
						return true;
					}
				}
			}
		}
		Global_1573883.f_17++;
		if (Global_1573883.f_17 >= 32)
		{
			Global_1573883.f_17 = 0;
			func_3(&(Global_1573883.f_15));
		}
	}
	return false;
}

bool func_591(int iParam0, int iParam1)
{
	int iVar0;
	
	if (Global_1312447 != 0)
	{
		return false;
	}
	if (!func_512(iParam0))
	{
		return false;
	}
	iVar0 = iParam0;
	if (Global_1587523[iVar0 /*444*/] == iParam1)
	{
		return true;
	}
	return false;
}

void func_592()
{
	set_max_wanted_level(5);
	func_286();
	set_wanted_level_multiplier(1f);
	GAMEPLAY::CLEAR_BIT(&(Global_1573883.f_1), 8);
	func_593();
}

void func_593()
{
	if (Global_1724872)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_1724873, false))
		{
			GAMEPLAY::CLEAR_BIT(&Global_2467235, false);
		}
		if (GAMEPLAY::IS_BIT_SET(Global_1724873, true))
		{
			GAMEPLAY::CLEAR_BIT(&Global_2467235, true);
		}
		if (GAMEPLAY::IS_BIT_SET(Global_1724873, 5))
		{
			GAMEPLAY::CLEAR_BIT(&Global_2467235, 5);
		}
		if (_does_door_exist(-355737150))
		{
			_set_door_acceleration_limit(-355737150, 1, 0, 0);
		}
		if (_does_door_exist(-580979506))
		{
			_set_door_acceleration_limit(-580979506, 1, 0, 0);
		}
		if (_does_door_exist(-1426452475))
		{
			_set_door_acceleration_limit(-1426452475, 1, 0, 0);
		}
		if (_does_door_exist(745417724))
		{
			_set_door_acceleration_limit(745417724, 1, 0, 0);
		}
		if (_does_door_exist(-1305304906))
		{
			_set_door_acceleration_limit(-1305304906, 1, 0, 0);
		}
		if (_does_door_exist(-1543175077))
		{
			_set_door_acceleration_limit(-1543175077, 1, 0, 0);
		}
		if (_does_door_exist(-811770997))
		{
			_set_door_acceleration_limit(-811770997, 1, 0, 0);
		}
		Global_1724873 = 0;
	}
	Global_1724872 = 0;
}

auto func_594()
{
	if (ENTITY::DOES_ENTITY_EXIST(func_595()))
	{
		return func_595();
	}
	return func_142();
}

auto func_595()
{
	return Global_2359301.f_3;
}

int func_596()
{
	return GAMEPLAY::IS_BIT_SET(Global_2359301, 11);
}

int func_597()
{
	return GAMEPLAY::IS_BIT_SET(Global_2359301, 4);
}

bool func_598(int iParam0)
{
	if (func_33(iParam0, 0))
	{
		return true;
	}
	if (func_599())
	{
		if (iParam0 == player_id())
		{
			return true;
		}
	}
	if (GAMEPLAY::IS_BIT_SET(Global_2418472[iParam0 /*313*/].f_194, 2))
	{
		return true;
	}
	return false;
}

int func_599()
{
	return GAMEPLAY::IS_BIT_SET(Global_2359301, 3);
}

auto func_600()
{
	return Global_1573883.f_23;
}

bool func_601()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_2460486.f_4561)
	{
		return false;
	}
	iVar2 = NETWORK::_0x89023FBBF9200E9F();
	if (func_18(&(Local_96.f_1.f_1)))
	{
		iVar0 = func_602(&iVar2, &(Local_96.f_1.f_1));
		iVar1 = Global_262145.f_9139;
	}
	else if (func_18(&(Local_96.f_1.f_3)))
	{
		iVar0 = func_602(&iVar2, &(Local_96.f_1.f_3));
		iVar1 = Global_262145.f_9140;
	}
	else
	{
		return false;
	}
	iVar1 += 300000;
	if (iVar0 > iVar1)
	{
		return true;
	}
	return false;
}

int func_602(int iParam0, auto uParam1)
{
	return absi(get_time_difference(*iParam0, *uParam1));
}

int func_603(int iParam0)
{
	return !func_604(iParam0);
}

bool func_604(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			if (Global_262145.f_5064)
			{
				return false;
			}
			if (func_93(player_id(), 7))
			{
				return false;
			}
			if (GAMEPLAY::IS_BIT_SET(Global_1587523[player_id() /*444*/].f_250.f_7, false) || GAMEPLAY::IS_BIT_SET(Global_1587523[player_id() /*444*/].f_250.f_7, true))
			{
				return false;
			}
			break;
		
		case 5:
			if (Global_262145.f_5065)
			{
				return false;
			}
			if (func_93(player_id(), 7))
			{
				return false;
			}
			if (GAMEPLAY::IS_BIT_SET(Global_1587523[player_id() /*444*/].f_250.f_7, false) || GAMEPLAY::IS_BIT_SET(Global_1587523[player_id() /*444*/].f_250.f_7, true))
			{
				return false;
			}
			break;
		
		case 6:
			if (Global_262145.f_5066)
			{
				return false;
			}
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 9:
			if (Global_262145.f_5067)
			{
				return false;
			}
			if (func_93(player_id(), 7))
			{
				return false;
			}
			if (GAMEPLAY::IS_BIT_SET(Global_1587523[player_id() /*444*/].f_250.f_7, false) || GAMEPLAY::IS_BIT_SET(Global_1587523[player_id() /*444*/].f_250.f_7, true))
			{
				return false;
			}
			break;
		
		case 15:
			if (func_605(4))
			{
				return false;
			}
			if (func_93(player_id(), 7))
			{
				return false;
			}
			if (GAMEPLAY::IS_BIT_SET(Global_1587523[player_id() /*444*/].f_250.f_7, false) || GAMEPLAY::IS_BIT_SET(Global_1587523[player_id() /*444*/].f_250.f_7, true))
			{
				return false;
			}
			break;
		
		case 17:
			if (func_605(4))
			{
				return false;
			}
			if (func_93(player_id(), 7))
			{
				return false;
			}
			if (GAMEPLAY::IS_BIT_SET(Global_1587523[player_id() /*444*/].f_250.f_7, false) || GAMEPLAY::IS_BIT_SET(Global_1587523[player_id() /*444*/].f_250.f_7, true))
			{
				return false;
			}
			break;
		
		case 16:
			if (func_605(4))
			{
				return false;
			}
			if (func_93(player_id(), 7))
			{
				return false;
			}
			if (GAMEPLAY::IS_BIT_SET(Global_1587523[player_id() /*444*/].f_250.f_7, false) || GAMEPLAY::IS_BIT_SET(Global_1587523[player_id() /*444*/].f_250.f_7, true))
			{
				return false;
			}
			break;
		
		case 18:
		case 21:
		case 22:
		case 23:
			if (func_605(4))
			{
				return false;
			}
			if (func_93(player_id(), 7))
			{
				return false;
			}
			if (GAMEPLAY::IS_BIT_SET(Global_1587523[player_id() /*444*/].f_250.f_7, false) || GAMEPLAY::IS_BIT_SET(Global_1587523[player_id() /*444*/].f_250.f_7, true))
			{
				return false;
			}
			break;
		
		case 19:
			if (func_605(4))
			{
				return false;
			}
			if (func_93(player_id(), 7))
			{
				return false;
			}
			break;
		
		case 20:
			if (func_605(4))
			{
				return false;
			}
			if (func_93(player_id(), 7))
			{
				return false;
			}
			break;
		
		case 10:
			break;
		
		case 11:
			break;
		
		case 12:
			break;
	}
	return true;
}

bool func_605(int iParam0)
{
	int iVar0;
	
	iVar0 = false;
	iVar0 = false;
	while (iVar0 < 32)
	{
		if (func_658(int_to_playerindex(iVar0), 0, 1))
		{
			if (GAMEPLAY::IS_BIT_SET(Global_2418472[iVar0 /*313*/].f_206, iParam0))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_606()
{
	int iVar0;
	
	func_610(&iVar0);
	if (iVar0)
	{
		return true;
	}
	if (Global_1315888 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return true;
		}
	}
	if (func_609())
	{
		return true;
	}
	if (Global_2445442)
	{
		return true;
	}
	if (func_608())
	{
		return true;
	}
	if (func_607(157))
	{
		if (!func_254())
		{
			return true;
		}
	}
	if (func_607(155))
	{
		return true;
	}
	if (!network_is_signed_online())
	{
		return true;
	}
	if (func_168() != 0)
	{
		if (_get_number_of_instances_of_streamed_script(func_168()) == 0)
		{
			return true;
		}
	}
	return false;
}

bool func_607(int iParam0)
{
	if (get_event_exists(1, iParam0))
	{
		return true;
	}
	return false;
}

auto func_608()
{
	return Global_2443085;
}

auto func_609()
{
	return Global_2434762.f_569;
}

void func_610(auto uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	Vector3 vVar4;
	
	iVar0 = 0;
	while (iVar0 < get_number_of_events(1))
	{
		iVar1 = get_event_at_index(1, iVar0);
		if (iVar1 == 168)
		{
			get_event_data(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 339:
					func_611(iVar0);
					break;
				
				case 2:
					get_event_data(1, iVar0, &vVar4, 3);
					if (vVar4.z == 55)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_611(int iParam0)
{
	Vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (get_event_data(1, iParam0, &vVar0, 3))
	{
		if (func_658(vVar0.y, 1, 1))
		{
			iVar3 = get_player_ped(vVar0.y);
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				if (is_ped_in_any_vehicle(iVar3, 0))
				{
					iVar4 = get_vehicle_ped_is_in(iVar3, 0);
					if (is_vehicle_window_intact(iVar4, vVar0.z) && network_get_this_script_is_network_script())
					{
						if (func_612(iVar4, &iVar5))
						{
							remove_vehicle_window(iVar4, vVar0.z);
						}
						if (iVar5)
						{
							set_vehicle_as_no_longer_needed(&iVar4);
						}
					}
				}
			}
		}
	}
}

bool func_612(int iParam0, auto uParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!is_entity_a_mission_entity(iParam0))
		{
			if (network_get_entity_is_local(iParam0))
			{
				set_entity_as_mission_entity(iParam0, false, 1);
				*uParam1 = 1;
			}
		}
		if (does_entity_belong_to_this_script(iParam0, 0))
		{
			if (network_has_control_of_entity(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_613()
{
	wait(0);
}

void func_614()
{
	int iVar0;
	
	func_149();
	func_642(141);
	func_624(141, 0, GAMEPLAY::IS_BIT_SET(iLocal_555, 5));
	func_239();
	func_184(0);
	if (GAMEPLAY::IS_BIT_SET(iLocal_555, 16))
	{
		stop_audio_scene("MP_Deathmatch_Type_Challenge_Scene");
		GAMEPLAY::CLEAR_BIT(&iLocal_555, 16);
	}
	set_wanted_level_multiplier(1f);
	func_62();
	iVar0 = 0;
	while (iVar0 < 1)
	{
		func_621(iVar0);
		iVar0++;
	}
	func_281();
	func_619();
	func_618(0);
	func_177(29, 0);
	if (func_606())
	{
		Local_380.f_5 = 5;
	}
	else if (GAMEPLAY::IS_BIT_SET(iLocal_555, 24))
	{
		Local_380.f_5 = 6;
	}
	else if (Local_380.f_5 != 1)
	{
		Local_380.f_5 = 2;
	}
	Local_380 = Local_96.f_214;
	Local_380.f_1 = Local_96.f_215;
	Local_380.f_4 = Local_96.f_216;
	Local_380.f_3 = iLocal_557;
	Local_380.f_10 = _get_posix_time() - Local_380.f_9;
	if (!Global_262145.f_9354)
	{
		if (Local_380.f_6 > 0)
		{
			if (Local_380.f_5 == 1)
			{
				func_617();
			}
		}
	}
	if (participant_id_to_int() != -1)
	{
		func_616(Local_380, iLocal_393, iLocal_3348, iLocal_3347, func_59(func_104(0, participant_id_to_int())), -1, -1);
	}
	func_615();
}

void func_615()
{
	terminate_this_thread();
}

void func_616(struct<12> Param0, auto uParam1, int iParam2, int iParam3, auto uParam4, int iParam5, int iParam6)
{
	char* sVar0;
	struct<13> Var1;
	struct<14> Var14;
	struct<18> Var28;
	struct<14> Var52;
	struct<13> Var66;
	struct<14> Var79;
	struct<14> Var93;
	struct<16> Var107;
	struct<13> Var123;
	struct<14> Var136;
	struct<14> Var150;
	struct<13> Var164;
	
	sVar0 = get_this_script_name();
	if (Param0.f_9 == 0)
	{
		Param0.f_10 = 0;
	}
	if (Param0.f_8 > Param0.f_9)
	{
		Param0.f_8 = Param0.f_9;
	}
	if (Global_69489)
	{
		if (are_strings_equal(sVar0, "am_hot_target"))
		{
			Var1 = {Param0};
			Var1.f_12 = uParam12;
			unk_0xBFAFDB5FAAA5C5AB(&Var1);
		}
		else if (are_strings_equal(sVar0, "freemode"))
		{
			Var14 = {Param0};
			Var14.f_12 = uParam12;
			Var14.f_13 = iParam13;
			unk_0xBAA2F0490E146BE8(&Var14);
		}
		else if (are_strings_equal(sVar0, "am_cp_collection"))
		{
			Var28 = {Param0};
			Var28.f_12 = uParam12;
			Var28.f_13 = iParam13;
			Var28.f_14 = iParam14;
			Var28.f_15 = uParam15;
			Var28.f_16 = iParam16;
			Var28.f_17 = iParam17;
			unk_0x3DE3AA516FB126A4(&Var28);
		}
		else if (are_strings_equal(sVar0, "am_challenges"))
		{
			Var52 = {Param0};
			Var52.f_12 = uParam12;
			Var52.f_13 = to_float(iParam13);
			if (iParam14 == 1)
			{
				Var52.f_13 /= 10f;
			}
			unk_0x6A60E43998228229(&Var52);
		}
		else if (are_strings_equal(sVar0, "am_penned_in"))
		{
			unk_0x1A7CE7CD3E653485(&Param0);
		}
		else if (are_strings_equal(sVar0, "am_pass_the_parcel"))
		{
			Var66 = {Param0};
			Var66.f_12 = uParam12;
			unk_0x419615486BBF1956(&Var66);
		}
		else if (are_strings_equal(sVar0, "am_hot_property"))
		{
			Var79 = {Param0};
			Var79.f_12 = uParam12;
			Var79.f_13 = iParam13;
			unk_0x84DFC579C2FC214C(&Var79);
		}
		else if (are_strings_equal(sVar0, "am_dead_drop"))
		{
			Var93 = {Param0};
			Var93.f_12 = uParam12;
			Var93.f_13 = iParam13;
			unk_0x0A9C7F36E5D7B683(&Var93);
		}
		else if (are_strings_equal(sVar0, "am_king_of_the_castle"))
		{
			Var107 = {Param0};
			Var107.f_12 = uParam12;
			Var107.f_13 = iParam13;
			Var107.f_14 = iParam14;
			Var107.f_15 = uParam15;
			unk_0x164C5FF663790845(&Var107);
		}
		else if (are_strings_equal(sVar0, "AM_CRIMINAL_DAMAGE"))
		{
			Var123 = {Param0};
			Var123.f_12 = uParam12;
			unk_0xEDBF6C9B0D2C65C8(&Var123);
		}
		else if (are_strings_equal(sVar0, "AM_KILL_LIST"))
		{
			if (iParam14 == 0)
			{
				Var136 = {Param0};
				Var136.f_12 = uParam12;
				Var136.f_13 = iParam13;
				unk_0x8C9D11605E59D955(&Var136);
			}
			else
			{
				Var150 = {Param0};
				Var150.f_12 = uParam12;
				Var150.f_13 = iParam13;
				unk_0x6551B1F7F6CD46EA(&Var150);
			}
		}
		else if (are_strings_equal(sVar0, "am_hunt_the_beast"))
		{
			Var164 = {Param0};
			Var164.f_12 = uParam12;
			unk_0x2CD90358F67D0AA8(&Var164);
		}
	}
}

void func_617()
{
	GAMEPLAY::SET_BIT(&(Global_2460486.f_1641), 18);
}

void func_618(int iParam0)
{
	if (iParam0)
	{
		if (!GAMEPLAY::IS_BIT_SET(Global_2460486.f_1641, 9))
		{
			GAMEPLAY::SET_BIT(&(Global_2460486.f_1641), 9);
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(Global_2460486.f_1641, 9))
	{
		GAMEPLAY::CLEAR_BIT(&(Global_2460486.f_1641), 9);
	}
}

void func_619()
{
	if (Global_2410702.f_6 == get_id_of_this_thread())
	{
		func_620();
	}
}

void func_620()
{
	struct<25> Var0;
	
	if (is_thread_active(Global_2410702.f_6))
	{
		if (!Global_2410702.f_6 == get_id_of_this_thread())
		{
			return;
		}
	}
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Global_2410702 = {Var0};
	Global_2410702.f_6 = -1;
}

void func_621(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_623(iParam0))
	{
		func_622(iVar0);
		iVar0++;
	}
	func_281();
	func_619();
	func_290(func_291(iParam0), 0, 0);
}

void func_622(int iParam0)
{
	struct<12> Var0;
	
	if (iParam0 > -1 && iParam0 < 10)
	{
		if (Global_2404956.f_347[iParam0 /*12*/].f_9)
		{
			Global_2404956.f_347[iParam0 /*12*/] = {Var0};
		}
	}
}

int func_623(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		
		case 4:
			return 1;
		
		case 2:
			return 2;
		
		case 1:
			return 3;
		
		case 3:
			return 3;
		
		case 5:
			return 4;
		
		case 6:
			return 4;
		
		case 7:
			return 4;
		
		default:
	}
	return 0;
}

void func_624(int iParam0, int iParam1, int iParam2)
{
	auto uVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
	}
	if (player_id() != -1)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_1610316[player_id() /*174*/].f_1, 13))
		{
			GAMEPLAY::CLEAR_BIT(&(Global_1610316[player_id() /*174*/].f_1), 13);
		}
		if (GAMEPLAY::IS_BIT_SET(Global_1610316[player_id() /*174*/].f_1, 14))
		{
			GAMEPLAY::CLEAR_BIT(&(Global_1610316[player_id() /*174*/].f_1), 14);
		}
	}
	if (GAMEPLAY::IS_BIT_SET(Global_1573883.f_1, 21))
	{
		GAMEPLAY::CLEAR_BIT(&(Global_1573883.f_1), 21);
	}
	func_638();
	set_audio_flag("DisableFlightMusic", 0);
	set_audio_flag("WantedMusicDisabled", 0);
	if (iParam1)
	{
		uVar0 = func_637(func_195(player_id()));
		func_177(21, 0);
	}
	else
	{
		if ((iParam2 && player_id() != -1) && func_636(player_id()) >= 12)
		{
			func_635(2524, -1);
			iVar1 = func_162(2524, -1, 0);
			if (iVar1 == 2)
			{
				GAMEPLAY::SET_BIT(&Global_1573908, false);
			}
			else if (iVar1 == 4)
			{
				GAMEPLAY::SET_BIT(&Global_1573908, true);
			}
			else if (iVar1 == 6)
			{
				GAMEPLAY::SET_BIT(&Global_1573908, 2);
			}
			else if (iVar1 == 8)
			{
				GAMEPLAY::SET_BIT(&Global_1573908, 3);
			}
			else if (iVar1 == 10)
			{
				GAMEPLAY::SET_BIT(&Global_1573908, 4);
			}
			else if (iVar1 == 12)
			{
				GAMEPLAY::SET_BIT(&Global_1573908, 5);
			}
		}
		func_634();
		func_633();
		func_632();
		if ((!func_27(player_id()) && !func_25(player_id())) && !func_80())
		{
			func_279();
		}
		func_631();
		if (!GAMEPLAY::IS_BIT_SET(Global_1727391.f_3, false) && !GAMEPLAY::IS_BIT_SET(Global_1727391.f_3, true))
		{
			func_592();
		}
		func_630();
		GAMEPLAY::CLEAR_BIT(&(Global_2460486.f_1645), 2);
		func_629();
		func_628();
	}
	if (_0x84698AB38D0C6636(1344549371))
	{
		object_decal_toggle(1344549371);
	}
	if (!iParam1 || uVar0)
	{
		if ((player_id() != -1 && !func_93(player_id(), 21)) && !func_28(player_id(), 0))
		{
			func_164(0);
			func_159(0);
			func_627();
		}
	}
	if (iParam2 && !iParam1)
	{
		if (func_205(26, -1))
		{
			Global_2445386 = -1;
			func_231(26, -1);
		}
	}
	if (!func_625())
	{
		Global_2459366 = 1;
	}
}

bool func_625()
{
	if (((!func_373(player_id()) && !func_357(player_id())) && func_195(player_id()) != 146) && !func_626())
	{
		return false;
	}
	return true;
}

bool func_626()
{
	if ((Global_1617379 == 0 && network_is_activity_session()) && ((((((Global_1617379.f_5 != 0 || Global_1617379.f_88495 > 0) || GAMEPLAY::IS_BIT_SET(Global_1617379.f_4, 15)) || GAMEPLAY::IS_BIT_SET(Global_1617379.f_4, 18)) || GAMEPLAY::IS_BIT_SET(Global_1617379.f_4, 19)) || GAMEPLAY::IS_BIT_SET(Global_1617379.f_4, 28)) || GAMEPLAY::IS_BIT_SET(Global_1617379.f_4, 27)))
	{
		return true;
	}
	return false;
}

void func_627()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1311741)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_2359718[iVar0 /*26*/].f_12, 11))
		{
			if (GAMEPLAY::IS_BIT_SET(Global_2359718[iVar0 /*26*/].f_13, 26))
			{
				GAMEPLAY::CLEAR_BIT(&(Global_2359718[iVar0 /*26*/].f_13), 26);
			}
		}
		iVar0++;
	}
}

void func_628()
{
	Global_1610316[player_id() /*174*/].f_7 = 0;
}

void func_629()
{
	if (GAMEPLAY::IS_BIT_SET(Global_2460486.f_4563, true))
	{
		GAMEPLAY::CLEAR_BIT(&(Global_2460486.f_4563), true);
	}
	if (Global_2460486.f_4563 > 0)
	{
		trigger_music_event("FM_COUNTDOWN_30S_KILL");
		trigger_music_event("FM_COUNTDOWN_30S_FIRA");
		stop_audio_scene("GTAO_FM_Events_30_Sec_Countdown_Scene");
		set_user_radio_control_enabled(1);
		Global_2460486.f_4563 = 0;
		set_audio_flag("DisableFlightMusic", 0);
		set_audio_flag("WantedMusicDisabled", 0);
		set_audio_flag("AllowScoreAndRadio", 0);
		if (!are_strings_equal(get_this_script_name(), "am_pi_menu"))
		{
			if (Global_2460486.f_4573 > -1)
			{
				release_sound_id(Global_2460486.f_4573);
				Global_2460486.f_4573 = -1;
			}
		}
	}
}

void func_630()
{
	struct<24> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Global_1573883 = {Var0};
}

void func_631()
{
	auto uVar0;
	
	Global_1318849 = uVar0;
}

void func_632()
{
	Global_2460486.f_4564 = 0;
}

void func_633()
{
	if (player_id() != -1)
	{
		Global_1610316[player_id() /*174*/].f_1 = 0;
	}
}

void func_634()
{
	int iVar0;
	
	iVar0 = player_id();
	if (iVar0 != -1)
	{
		Global_1610316[iVar0 /*174*/] = -1;
	}
}

void func_635(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_162(iParam0, func_163(iParam1), 0);
	iVar0++;
	if (!func_210(iParam0))
	{
		func_209(iParam0, iVar0, iParam1, 1);
	}
	else
	{
		func_208(iParam0, iVar0, iParam1, 1);
	}
}

auto func_636(int iParam0)
{
	return Global_1587523[iParam0 /*444*/].f_195.f_6;
}

bool func_637(int iParam0)
{
	switch (iParam0)
	{
		case 133:
		case 132:
		case 138:
		case 144:
		case 140:
		case 139:
		case 131:
		case 141:
		case -1:
			return true;
		
		case 146:
			if (func_166(player_id()))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_638()
{
	if (GAMEPLAY::IS_BIT_SET(Global_2460486.f_1642, 3) || GAMEPLAY::IS_BIT_SET(Global_2460486.f_1642, 4))
	{
		if (is_screen_faded_out() || is_screen_fading_out())
		{
			do_screen_fade_in(800);
		}
	}
	if (GAMEPLAY::IS_BIT_SET(Global_2460486.f_1642, 5))
	{
		GAMEPLAY::CLEAR_BIT(&(Global_2460486.f_1642), 5);
	}
	if (GAMEPLAY::IS_BIT_SET(Global_2460486.f_1642, 3))
	{
		GAMEPLAY::CLEAR_BIT(&(Global_2460486.f_1642), 3);
	}
	if (GAMEPLAY::IS_BIT_SET(Global_2460486.f_1642, 4))
	{
		GAMEPLAY::CLEAR_BIT(&(Global_2460486.f_1642), 4);
	}
	func_641(0);
	func_640(0);
	func_639(0);
}

void func_639(int iParam0)
{
	if (Global_2460486.f_4379 != iParam0)
	{
		Global_2460486.f_4379 = iParam0;
	}
}

void func_640(int iParam0)
{
	if (Global_2460486.f_4378 != iParam0)
	{
		if (iParam0)
		{
		}
		Global_2460486.f_4378 = iParam0;
	}
}

void func_641(int iParam0)
{
	if (Global_2460486.f_4376 != iParam0)
	{
		Global_2460486.f_4376 = iParam0;
	}
}

void func_642(int iParam0)
{
	if (iParam0 == iParam0)
	{
	}
}

void func_643(struct<20> Param0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar3 = func_657(Param0);
	func_656(iVar3, Param0);
	func_655(0, -1, 0);
	func_653(141);
	network_register_host_broadcast_variables(&Local_96, 284);
	network_register_player_broadcast_variables(&Local_394, 161);
	if (!func_652())
	{
		func_614();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		set_this_script_can_be_paused(0);
		func_177(29, 1);
		if (network_is_host_of_this_script())
		{
			iVar0 = func_648();
			func_645(func_647(141, iVar0, 0, 0));
			iVar1 = 0;
			while (iVar1 < 1)
			{
				func_644(iVar1, iVar0);
				iVar1++;
			}
			_0x6DEE77AFF8C21BD1(&(Local_96.f_214), &(Local_96.f_215));
		}
		Local_380.f_2 = _0xCF61D4B4702EE9EB();
		Local_380.f_9 = _get_posix_time();
		Local_380.f_8 = _get_posix_time();
		iVar2 = 0;
		while (iVar2 < 32)
		{
			Local_96.f_250[iVar2] = -1;
			iVar2++;
		}
		func_419(0);
	}
	else
	{
		func_614();
	}
}

void func_644(int iParam0, int iParam1)
{
	Local_96.f_6[iParam0 /*204*/].f_69 = iParam1;
}

void func_645(auto uParam0)
{
	Vector3 vVar0;
	int iVar3;
	
	vVar0.x = 415;
	vVar0.y = player_id();
	vVar0.z = uParam0;
	iVar3 = func_646(1, 1);
	if (!iVar3 == 0)
	{
		trigger_script_event(1, &vVar0, 3, iVar3);
	}
}

auto func_646(int iParam0, int iParam1)
{
	auto uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = false;
	while (iVar1 < 32)
	{
		iVar2 = int_to_playerindex(iVar1);
		if (func_658(iVar2, 0, 0))
		{
			if (iVar2 != player_id() || iParam0)
			{
				if (iParam1)
				{
					GAMEPLAY::SET_BIT(&uVar0, iVar1);
				}
				else if (!func_33(iVar2, 0))
				{
					GAMEPLAY::SET_BIT(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_647(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 136:
		case 139:
		case 141:
		case 133:
		case 138:
		case 144:
			return iParam1;
		
		case 132:
			switch (iParam2)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						case 3:
							return 3;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 4;
						
						case 1:
							return 5;
						
						case 2:
							return 6;
						
						case 3:
							return 7;
						
						default:
					}
					break;
			}
			break;
		
		case 131:
			switch (iParam3)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									return 0;
								
								case 1:
									return 1;
								
								case 2:
									return 2;
								
								case 3:
									return 3;
								
								case 4:
									return 4;
								
								default:
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									return 5;
								
								case 1:
									return 6;
								
								case 2:
									return 7;
								
								case 3:
									return 8;
								
								case 4:
									return 9;
								
								default:
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 0:
									return 10;
								
								case 1:
									return 11;
								
								case 2:
									return 12;
								
								case 3:
									return 13;
								
								case 4:
									return 14;
								
								default:
							}
							break;
						
						case 3:
							switch (iParam2)
							{
								case 0:
									return 15;
								
								case 1:
									return 16;
								
								case 2:
									return 17;
								
								case 3:
									return 18;
								
								case 4:
									return 19;
								
								default:
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 0:
									return 20;
								
								case 1:
									return 21;
								
								case 2:
									return 22;
								
								case 3:
									return 24;
								
								case 4:
									return 25;
								
								default:
							}
							break;
						
						case 5:
							switch (iParam2)
							{
								case 0:
									return 26;
								
								case 1:
									return 27;
								
								case 2:
									return 28;
								
								case 3:
									return 29;
								
								case 4:
									return 30;
								
								default:
							}
							break;
						
						case 6:
							switch (iParam2)
							{
								case 0:
									return 31;
								
								case 1:
									return 32;
								
								case 2:
									return 33;
								
								case 3:
									return 34;
								
								case 4:
									return 35;
								
								default:
							}
							break;
					}
					break;
				
				case 1:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									return 0;
								
								case 1:
									return 1;
								
								case 2:
									return 2;
								
								case 3:
									return 3;
								
								case 4:
									return 4;
								
								default:
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									return 5;
								
								case 1:
									return 6;
								
								case 2:
									return 7;
								
								case 3:
									return 8;
								
								case 4:
									return 9;
								
								default:
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 0:
									return 10;
								
								case 1:
									return 11;
								
								case 2:
									return 12;
								
								case 3:
									return 13;
								
								case 4:
									return 14;
								
								default:
							}
							break;
					}
					break;
				
				case 2:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									return 41;
								
								default:
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 1:
									return 42;
								
								default:
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 2:
									return 43;
								
								default:
							}
							break;
						
						case 3:
							switch (iParam2)
							{
								case 3:
									return 44;
								
								default:
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 4:
									return 45;
								
								default:
							}
							break;
					}
					break;
			}
			break;
		
		case 129:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						case 3:
							return 3;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 4;
						
						case 1:
							return 5;
						
						case 2:
							return 6;
						
						case 3:
							return 7;
						
						case 4:
							return 8;
						
						default:
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 9;
						
						case 1:
							return 10;
						
						case 2:
							return 11;
						
						default:
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							return 12;
						
						case 1:
							return 13;
						
						case 2:
							return 14;
						
						case 3:
							return 15;
						
						case 4:
							return 16;
						
						default:
					}
					break;
				
				case 4:
					switch (iParam2)
					{
						case 0:
							return 17;
						
						case 1:
							return 18;
						
						case 2:
							return 19;
						
						case 3:
							return 20;
						
						case 4:
							return 21;
						
						default:
					}
					break;
				
				case 5:
					switch (iParam2)
					{
						case 0:
							return 22;
						
						case 1:
							return 24;
						
						case 2:
							return 25;
						
						case 3:
							return 26;
						
						default:
					}
					break;
				
				case 6:
					switch (iParam2)
					{
						case 0:
							return 27;
						
						case 1:
							return 28;
						
						case 2:
							return 29;
						
						default:
					}
					break;
				
				case 7:
					switch (iParam2)
					{
						case 0:
							return 30;
						
						case 1:
							return 31;
						
						case 2:
							return 32;
						
						default:
					}
					break;
				
				case 8:
					switch (iParam2)
					{
						case 0:
							return 33;
						
						case 1:
							return 34;
						
						case 2:
							return 35;
						
						case 3:
							return 36;
						
						default:
					}
					break;
				
				case 9:
					switch (iParam2)
					{
						case 0:
							return 37;
						
						case 1:
							return 38;
						
						case 2:
							return 39;
						
						case 3:
							return 40;
						
						default:
					}
					break;
			}
			break;
		
		case 140:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						
						case 1:
							return 4;
						
						case 2:
							return 5;
						
						default:
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 6;
						
						case 1:
							return 7;
						
						case 2:
							return 8;
						
						default:
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							return 9;
						
						case 1:
							return 10;
						
						case 2:
							return 11;
						
						default:
					}
					break;
				
				case 4:
					switch (iParam2)
					{
						case 0:
							return 12;
						
						case 1:
							return 13;
						
						case 2:
							return 14;
						
						default:
					}
					break;
			}
			break;
		
		case 146:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						
						case 1:
							return 4;
						
						case 2:
							return 5;
						
						default:
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 6;
						
						case 1:
							return 7;
						
						case 2:
							return 8;
						
						default:
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							return 9;
						
						case 1:
							return 10;
						
						case 2:
							return 11;
						
						default:
					}
					break;
			}
			break;
	}
	return -1;
}

auto func_648()
{
	int iVar0;
	int[] iVar1 = new int[8];
	int iVar10;
	auto uVar11;
	
	iVar10 = 0;
	while (iVar10 <= 7)
	{
		if (func_651(iVar10) && !func_649(141, iVar10, 0, 0))
		{
			iVar1[iVar0] = iVar10;
			iVar0++;
		}
		iVar10++;
	}
	uVar11 = iVar1[get_random_int_in_range(0, iVar0)];
	return uVar11;
}

bool func_649(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 132:
		case 144:
			return false;
		
		default:
	}
	iVar1 = func_650(iParam0);
	iVar0 = 0;
	while (iVar0 < 19)
	{
		if (iVar0 < Global_262145.f_6481)
		{
			if (Global_2454809.f_124[iVar0 /*2*/] == iVar1 && Global_2454809.f_124[iVar0 /*2*/].f_1 == func_647(iParam0, iParam1, iParam2, iParam3))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

int func_650(int iParam0)
{
	switch (iParam0)
	{
		case 136:
			return 12;
		
		case 139:
			return 14;
		
		case 141:
			return 16;
		
		case 133:
			return 9;
		
		case 138:
			return 13;
		
		case 144:
			return 17;
		
		case 132:
			return 8;
		
		case 131:
			return 10;
		
		case 146:
			return 18;
		
		case 129:
			return 11;
		
		case 140:
			return 15;
		
		default:
	}
	return -1;
}

bool func_651(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_262145.f_9145)
			{
				return false;
			}
			break;
		
		case 4:
			if (Global_262145.f_9146)
			{
				return false;
			}
			break;
		
		case 2:
			if (Global_262145.f_9147)
			{
				return false;
			}
			break;
		
		case 1:
			if (Global_262145.f_9148)
			{
				return false;
			}
			break;
		
		case 3:
			if (Global_262145.f_9149)
			{
				return false;
			}
			break;
		
		case 5:
			if (Global_262145.f_9150)
			{
				return false;
			}
			break;
		
		case 6:
			if (Global_262145.f_9151)
			{
				return false;
			}
			break;
		
		case 7:
			if (Global_262145.f_9152)
			{
				return false;
			}
			break;
	}
	return true;
}

bool func_652()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return false;
		}
		if (_0x5D10B3795F3FC886())
		{
			return true;
		}
		if (func_609())
		{
			return false;
		}
		if (func_607(155))
		{
			return false;
		}
		if (iVar0 >= 3600)
		{
			return false;
		}
		wait(0);
	}
	return false;
}

void func_653(int iParam0)
{
	func_630();
	func_654();
	func_632();
	Global_1573883.f_4 = iParam0;
	Global_1573883.f_5 = iParam0;
	func_174(iParam0, -1);
	func_194(&(Global_1573883.f_18), 0, 0);
	Global_2460486.f_4426 = 0;
	Global_2444115[0] = func_48();
	Global_2444115[1] = func_48();
	Global_2444115[2] = func_48();
	Global_2444115[3] = func_48();
	Global_2444115[4] = func_48();
	func_628();
	func_350();
	if (func_95() && !func_94())
	{
		GAMEPLAY::SET_BIT(&(Global_1573883.f_1), 16);
	}
	else
	{
		GAMEPLAY::SET_BIT(&(Global_1573883.f_1), 17);
	}
}

void func_654()
{
	auto uVar0;
	
	Global_1573907 = uVar0;
}

bool func_655(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = network_get_script_status();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!iParam2)
			{
				func_615();
			}
			else
			{
				return false;
			}
		}
		if (!func_224())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!iParam2)
					{
						func_615();
					}
					else
					{
						return false;
					}
				}
				if (func_609())
				{
					if (!iParam2)
					{
						func_615();
					}
					else
					{
						return false;
					}
				}
				if (func_607(155))
				{
					if (!iParam2)
					{
						func_615();
					}
					else
					{
						return false;
					}
				}
			}
			else if (!network_is_in_session())
			{
				if (!iParam2)
				{
					func_615();
				}
				else
				{
					return false;
				}
			}
		}
		wait(0);
		iVar0 = network_get_script_status();
	}
	if (iParam1 > -1)
	{
		Global_1312502 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!iParam2)
			{
				func_615();
			}
			else
			{
				return false;
			}
		}
	}
	else if (!network_is_in_session())
	{
		if (!iParam2)
		{
			func_615();
		}
		else
		{
			return false;
		}
	}
	return true;
}

void func_656(int iParam0, struct<17> Param1, auto uParam2, auto uParam3, auto uParam4)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_615();
	}
	network_set_this_script_is_network_script(iParam0, 0, Param1.f_16);
}

int func_657(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 2:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
			return 32;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 73:
			return 32;
		
		case 74:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 32;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 80:
			return 32;
		
		case 78:
			return 32;
		
		case 79:
			return 32;
		
		case 83:
			return 32;
		
		case 84:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 32;
		
		case 91:
			return 2;
		
		case 96:
			return 1;
		
		case 92:
			return 2;
		
		case 93:
			return 4;
		
		case 94:
			return 2;
		
		case 95:
			return 2;
		
		case 77:
			return 1;
		
		case 97:
			return 2;
		
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
			return 0;
		
		case 105:
			return 1;
		
		case 104:
			return 4;
		
		default:
	}
	return 0;
}

bool func_658(int iParam0, int iParam1, int iParam2)
{
	auto uVar0;
	
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

