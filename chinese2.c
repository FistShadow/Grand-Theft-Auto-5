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
	auto uLocal_18 = 0;
	auto uLocal_19 = 0;
	char* sLocal_20 = 0;
	float fLocal_21 = 0;
	auto uLocal_22 = 0;
	auto uLocal_23 = 0;
	auto uLocal_24 = 0;
	float fLocal_25 = 0;
	float fLocal_26 = 0;
	auto uLocal_27 = 0;
	auto uLocal_28 = 0;
	auto uLocal_29 = 0;
	auto uLocal_30 = 0;
	int iLocal_31 = 0;
	auto uLocal_32 = 0;
	auto uLocal_33 = 0;
	float fLocal_34 = 0;
	float fLocal_35 = 0;
	float fLocal_36 = 0;
	auto uLocal_37 = 0;
	auto uLocal_38 = 0;
	auto uLocal_39 = 0;
	auto uLocal_40 = 0;
	auto uLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	auto uLocal_46 = 0;
	auto uLocal_47 = 0;
	auto uLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	char* sLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
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
	auto uLocal_70 = 0;
	Vector3 vLocal_71 = 0;
	float fLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int[] iLocal_78 = new int[10];
	struct<165> Local_89 = 16;
	char* sLocal_254 = 0;
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
	int iLocal_269 = 0;
	int iLocal_270 = 0;
	int iLocal_271 = 0;
	float fLocal_272 = 0;
	float fLocal_273 = 0;
	Vector3 vLocal_274 = 0;
	Vector3 vLocal_277 = 0;
	int iLocal_280 = 0;
	struct<5>[] Local_281 = new struct<5>[31];
	int iLocal_437 = 0;
	int iLocal_438 = 0;
	int iLocal_439 = 0;
	int iLocal_440 = 0;
	int iLocal_441 = 0;
	int iLocal_442 = 0;
	int iLocal_443 = 0;
	struct<5>[] Local_444 = new struct<5>[61];
	float fLocal_750 = 0;
	int iLocal_751 = 0;
	Vector3 vLocal_752 = 0;
	struct<33>[] Local_755 = new struct<33>[26];
	int iLocal_1614 = 0;
	int iLocal_1615 = 0;
	int iLocal_1616 = 0;
	int iLocal_1617 = 0;
	int iLocal_1618 = 0;
	struct<24>[] Local_1619 = new struct<24>[26];
	Vector3 vLocal_2244 = 0;
	Vector3 vLocal_2247 = 0;
	Vector3 vLocal_2250 = 0;
	Vector3 vLocal_2253 = 0;
	Vector3 vLocal_2256 = 0;
	Vector3 vLocal_2259 = 0;
	Vector3 vLocal_2262 = 0;
	Vector3 vLocal_2265 = 0;
	Vector3 vLocal_2268 = 0;
	Vector3 vLocal_2271 = 0;
	Vector3[] vLocal_2274 = new Vector3[21];
	char* sLocal_2338 = 0;
	int iLocal_2339 = 0;
	int iLocal_2340 = 0;
	int iLocal_2341 = 0;
	int iLocal_2342 = 0;
	struct<6>[] Local_2343 = new struct<6>[6];
	struct<18>[] Local_2380 = new struct<18>[4];
	float fLocal_2453 = 0;
	int iLocal_2454 = 0;
	int[] iLocal_2455 = new int[4];
	int[] iLocal_2460 = new int[4];
	Vector3[] vLocal_2465 = new Vector3[13];
	int iLocal_2505 = 0;
	int iLocal_2506 = 0;
	int iLocal_2507 = 0;
	int iLocal_2508 = 0;
	int iLocal_2509 = 0;
	int iLocal_2510 = 0;
	int iLocal_2511 = 0;
	int iLocal_2512 = 0;
	char* sLocal_2513 = 0;
	int iLocal_2514 = 0;
	struct<6>[] Local_2515 = new struct<6>[20];
	int iLocal_2636 = 0;
	int iLocal_2637 = 0;
	int iLocal_2638 = 0;
	float fLocal_2639 = 0;
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
	int[] iLocal_2651 = new int[5];
	int[] iLocal_2657 = new int[10];
	int iLocal_2668 = 0;
	Vector3 vLocal_2669 = 0;
	auto uLocal_2672 = 0;
	int iLocal_2673 = 0;
	float fLocal_2674 = 0;
	int iLocal_2675 = 0;
	int iLocal_2676 = 0;
	int iLocal_2677 = 0;
	int iLocal_2678 = 0;
	int iLocal_2679 = 0;
	int iLocal_2680 = 0;
	int iLocal_2681 = 0;
	int iLocal_2682 = 0;
	struct<7> Local_2683 = 0;
	auto uLocal_2690 = 1092616192;
	auto uLocal_2691 = 1101004800;
	auto uLocal_2692 = 0;
	auto uLocal_2693 = 0;
	auto uLocal_2694 = 0;
	auto uLocal_2695 = 0;
	auto uLocal_2696 = 0;
	auto uLocal_2697 = 0;
	auto uLocal_2698 = 0;
	auto uLocal_2699 = 0;
	auto uLocal_2700 = 3;
	auto uLocal_2701 = 0;
	auto uLocal_2702 = 0;
	auto uLocal_2703 = 0;
	auto uLocal_2704 = 0;
	auto uLocal_2705 = 0;
	auto uLocal_2706 = 0;
	auto uLocal_2707 = 0;
	auto uLocal_2708 = 16;
	auto uLocal_2709 = 0;
	auto uLocal_2710 = 0;
	auto uLocal_2711 = 0;
	auto uLocal_2712 = 0;
	auto uLocal_2713 = 0;
	auto uLocal_2714 = 0;
	auto uLocal_2715 = 0;
	auto uLocal_2716 = 0;
	auto uLocal_2717 = 0;
	auto uLocal_2718 = 0;
	auto uLocal_2719 = 0;
	auto uLocal_2720 = 0;
	auto uLocal_2721 = 0;
	auto uLocal_2722 = 0;
	auto uLocal_2723 = 0;
	auto uLocal_2724 = 0;
	auto uLocal_2725 = 0;
	auto uLocal_2726 = 0;
	auto uLocal_2727 = 0;
	auto uLocal_2728 = 0;
	auto uLocal_2729 = 0;
	auto uLocal_2730 = 0;
	auto uLocal_2731 = 0;
	auto uLocal_2732 = 0;
	auto uLocal_2733 = 0;
	auto uLocal_2734 = 0;
	auto uLocal_2735 = 0;
	auto uLocal_2736 = 0;
	auto uLocal_2737 = 0;
	auto uLocal_2738 = 0;
	auto uLocal_2739 = 0;
	auto uLocal_2740 = 0;
	auto uLocal_2741 = 0;
	auto uLocal_2742 = 0;
	auto uLocal_2743 = 0;
	auto uLocal_2744 = 0;
	auto uLocal_2745 = 0;
	auto uLocal_2746 = 0;
	auto uLocal_2747 = 0;
	auto uLocal_2748 = 0;
	auto uLocal_2749 = 0;
	auto uLocal_2750 = 0;
	auto uLocal_2751 = 0;
	auto uLocal_2752 = 0;
	auto uLocal_2753 = 0;
	auto uLocal_2754 = 0;
	auto uLocal_2755 = 0;
	auto uLocal_2756 = 0;
	auto uLocal_2757 = 0;
	auto uLocal_2758 = 0;
	auto uLocal_2759 = 0;
	auto uLocal_2760 = 0;
	auto uLocal_2761 = 0;
	auto uLocal_2762 = 0;
	auto uLocal_2763 = 0;
	auto uLocal_2764 = 0;
	auto uLocal_2765 = 0;
	auto uLocal_2766 = 0;
	auto uLocal_2767 = 0;
	auto uLocal_2768 = 0;
	auto uLocal_2769 = 0;
	auto uLocal_2770 = 0;
	auto uLocal_2771 = 0;
	auto uLocal_2772 = 0;
	auto uLocal_2773 = 0;
	auto uLocal_2774 = 0;
	auto uLocal_2775 = 0;
	auto uLocal_2776 = 0;
	auto uLocal_2777 = 0;
	auto uLocal_2778 = 0;
	auto uLocal_2779 = 0;
	auto uLocal_2780 = 0;
	auto uLocal_2781 = 0;
	auto uLocal_2782 = 0;
	auto uLocal_2783 = 0;
	auto uLocal_2784 = 0;
	auto uLocal_2785 = 0;
	auto uLocal_2786 = 0;
	auto uLocal_2787 = 0;
	auto uLocal_2788 = 0;
	auto uLocal_2789 = 0;
	auto uLocal_2790 = 0;
	auto uLocal_2791 = 0;
	auto uLocal_2792 = 0;
	auto uLocal_2793 = 0;
	auto uLocal_2794 = 0;
	auto uLocal_2795 = 0;
	auto uLocal_2796 = 0;
	auto uLocal_2797 = 0;
	auto uLocal_2798 = 0;
	auto uLocal_2799 = 0;
	auto uLocal_2800 = 0;
	auto uLocal_2801 = 0;
	auto uLocal_2802 = 0;
	auto uLocal_2803 = 0;
	auto uLocal_2804 = 0;
	auto uLocal_2805 = 0;
	auto uLocal_2806 = 0;
	auto uLocal_2807 = 0;
	auto uLocal_2808 = 0;
	auto uLocal_2809 = 0;
	auto uLocal_2810 = 0;
	auto uLocal_2811 = 0;
	auto uLocal_2812 = 0;
	auto uLocal_2813 = 0;
	auto uLocal_2814 = 0;
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
	auto uLocal_2843 = 0;
	auto uLocal_2844 = 0;
	auto uLocal_2845 = 0;
	auto uLocal_2846 = 0;
	auto uLocal_2847 = 0;
	auto uLocal_2848 = 0;
	auto uLocal_2849 = 0;
	auto uLocal_2850 = 0;
	auto uLocal_2851 = 0;
	auto uLocal_2852 = 0;
	auto uLocal_2853 = 0;
	auto uLocal_2854 = 0;
	auto uLocal_2855 = 0;
	auto uLocal_2856 = 0;
	auto uLocal_2857 = 0;
	auto uLocal_2858 = 0;
	auto uLocal_2859 = 0;
	auto uLocal_2860 = 0;
	auto uLocal_2861 = 0;
	auto uLocal_2862 = 0;
	auto uLocal_2863 = 0;
	auto uLocal_2864 = 0;
	auto uLocal_2865 = 0;
	auto uLocal_2866 = 0;
	auto uLocal_2867 = 0;
	auto uLocal_2868 = 0;
	auto uLocal_2869 = 0;
	auto uLocal_2870 = 0;
	auto uLocal_2871 = 0;
	auto uLocal_2872 = 0;
	int iLocal_2873 = 0;
	int iLocal_2874 = 0;
	int iLocal_2875 = 0;
	int iLocal_2876 = 0;
	int iLocal_2877 = 0;
	int iLocal_2878 = 0;
	int iLocal_2879 = 0;
	int iLocal_2880 = 0;
	int iLocal_2881 = 0;
	int iLocal_2882 = 0;
	int iLocal_2883 = 0;
	int iLocal_2884 = 0;
	int iLocal_2885 = 0;
	int iLocal_2886 = 0;
	int iLocal_2887 = 0;
	int iLocal_2888 = 0;
	Vector3[] vLocal_2889 = new Vector3[9];
	struct<10>[] Local_2917 = new struct<10>[20];
	int iLocal_3118 = 0;
	int iLocal_3119 = 0;
	struct<8>[] Local_3120 = new struct<8>[27];
	struct<4>[] Local_3337 = new struct<4>[5];
	struct<7>[] Local_3358 = new struct<7>[17];
	Vector3[] vLocal_3478 = new Vector3[4];
	int iLocal_3491 = 0;
	char[24] cLocal_3492 = 0;
	char[24] cLocal_3498 = 0;
	int iLocal_3504 = 0;
	int iLocal_3505 = 0;
	int iLocal_3506 = 0;
	int iLocal_3507 = 0;
	int iLocal_3508 = 0;
	char* sLocal_3509 = 0;
	char* sLocal_3510 = 0;
	int[] iLocal_3511 = new int[10];
	auto uLocal_3522 = 16;
	auto uLocal_3523 = 0;
	auto uLocal_3524 = 0;
	auto uLocal_3525 = 0;
	auto uLocal_3526 = 0;
	auto uLocal_3527 = 0;
	auto uLocal_3528 = 0;
	auto uLocal_3529 = 0;
	auto uLocal_3530 = 0;
	auto uLocal_3531 = 0;
	auto uLocal_3532 = 0;
	auto uLocal_3533 = 0;
	auto uLocal_3534 = 0;
	auto uLocal_3535 = 0;
	auto uLocal_3536 = 0;
	auto uLocal_3537 = 0;
	auto uLocal_3538 = 0;
	auto uLocal_3539 = 0;
	auto uLocal_3540 = 0;
	auto uLocal_3541 = 0;
	auto uLocal_3542 = 0;
	auto uLocal_3543 = 0;
	auto uLocal_3544 = 0;
	auto uLocal_3545 = 0;
	auto uLocal_3546 = 0;
	auto uLocal_3547 = 0;
	auto uLocal_3548 = 0;
	auto uLocal_3549 = 0;
	auto uLocal_3550 = 0;
	auto uLocal_3551 = 0;
	auto uLocal_3552 = 0;
	auto uLocal_3553 = 0;
	auto uLocal_3554 = 0;
	auto uLocal_3555 = 0;
	auto uLocal_3556 = 0;
	auto uLocal_3557 = 0;
	auto uLocal_3558 = 0;
	auto uLocal_3559 = 0;
	auto uLocal_3560 = 0;
	auto uLocal_3561 = 0;
	auto uLocal_3562 = 0;
	auto uLocal_3563 = 0;
	auto uLocal_3564 = 0;
	auto uLocal_3565 = 0;
	auto uLocal_3566 = 0;
	auto uLocal_3567 = 0;
	auto uLocal_3568 = 0;
	auto uLocal_3569 = 0;
	auto uLocal_3570 = 0;
	auto uLocal_3571 = 0;
	auto uLocal_3572 = 0;
	auto uLocal_3573 = 0;
	auto uLocal_3574 = 0;
	auto uLocal_3575 = 0;
	auto uLocal_3576 = 0;
	auto uLocal_3577 = 0;
	auto uLocal_3578 = 0;
	auto uLocal_3579 = 0;
	auto uLocal_3580 = 0;
	auto uLocal_3581 = 0;
	auto uLocal_3582 = 0;
	auto uLocal_3583 = 0;
	auto uLocal_3584 = 0;
	auto uLocal_3585 = 0;
	auto uLocal_3586 = 0;
	auto uLocal_3587 = 0;
	auto uLocal_3588 = 0;
	auto uLocal_3589 = 0;
	auto uLocal_3590 = 0;
	auto uLocal_3591 = 0;
	auto uLocal_3592 = 0;
	auto uLocal_3593 = 0;
	auto uLocal_3594 = 0;
	auto uLocal_3595 = 0;
	auto uLocal_3596 = 0;
	auto uLocal_3597 = 0;
	auto uLocal_3598 = 0;
	auto uLocal_3599 = 0;
	auto uLocal_3600 = 0;
	auto uLocal_3601 = 0;
	auto uLocal_3602 = 0;
	auto uLocal_3603 = 0;
	auto uLocal_3604 = 0;
	auto uLocal_3605 = 0;
	auto uLocal_3606 = 0;
	auto uLocal_3607 = 0;
	auto uLocal_3608 = 0;
	auto uLocal_3609 = 0;
	auto uLocal_3610 = 0;
	auto uLocal_3611 = 0;
	auto uLocal_3612 = 0;
	auto uLocal_3613 = 0;
	auto uLocal_3614 = 0;
	auto uLocal_3615 = 0;
	auto uLocal_3616 = 0;
	auto uLocal_3617 = 0;
	auto uLocal_3618 = 0;
	auto uLocal_3619 = 0;
	auto uLocal_3620 = 0;
	auto uLocal_3621 = 0;
	auto uLocal_3622 = 0;
	auto uLocal_3623 = 0;
	auto uLocal_3624 = 0;
	auto uLocal_3625 = 0;
	auto uLocal_3626 = 0;
	auto uLocal_3627 = 0;
	auto uLocal_3628 = 0;
	auto uLocal_3629 = 0;
	auto uLocal_3630 = 0;
	auto uLocal_3631 = 0;
	auto uLocal_3632 = 0;
	auto uLocal_3633 = 0;
	auto uLocal_3634 = 0;
	auto uLocal_3635 = 0;
	auto uLocal_3636 = 0;
	auto uLocal_3637 = 0;
	auto uLocal_3638 = 0;
	auto uLocal_3639 = 0;
	auto uLocal_3640 = 0;
	auto uLocal_3641 = 0;
	auto uLocal_3642 = 0;
	auto uLocal_3643 = 0;
	auto uLocal_3644 = 0;
	auto uLocal_3645 = 0;
	auto uLocal_3646 = 0;
	auto uLocal_3647 = 0;
	auto uLocal_3648 = 0;
	auto uLocal_3649 = 0;
	auto uLocal_3650 = 0;
	auto uLocal_3651 = 0;
	auto uLocal_3652 = 0;
	auto uLocal_3653 = 0;
	auto uLocal_3654 = 0;
	auto uLocal_3655 = 0;
	auto uLocal_3656 = 0;
	auto uLocal_3657 = 0;
	auto uLocal_3658 = 0;
	auto uLocal_3659 = 0;
	auto uLocal_3660 = 0;
	auto uLocal_3661 = 0;
	auto uLocal_3662 = 0;
	auto uLocal_3663 = 0;
	auto uLocal_3664 = 0;
	auto uLocal_3665 = 0;
	auto uLocal_3666 = 0;
	auto uLocal_3667 = 0;
	auto uLocal_3668 = 0;
	auto uLocal_3669 = 0;
	auto uLocal_3670 = 0;
	auto uLocal_3671 = 0;
	auto uLocal_3672 = 0;
	auto uLocal_3673 = 0;
	auto uLocal_3674 = 0;
	auto uLocal_3675 = 0;
	auto uLocal_3676 = 0;
	auto uLocal_3677 = 0;
	auto uLocal_3678 = 0;
	auto uLocal_3679 = 0;
	auto uLocal_3680 = 0;
	auto uLocal_3681 = 0;
	auto uLocal_3682 = 0;
	auto uLocal_3683 = 0;
	auto uLocal_3684 = 0;
	auto uLocal_3685 = 0;
	auto uLocal_3686 = 0;
	int iLocal_3687 = 0;
	int iLocal_3688 = 0;
	int iLocal_3689 = 0;
	int iLocal_3690 = 0;
#endregion

void main()
{
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
	iLocal_31 = 3;
	fLocal_34 = 80f;
	fLocal_35 = 140f;
	fLocal_36 = 180f;
	iLocal_42 = 1;
	iLocal_43 = 65;
	iLocal_44 = 49;
	iLocal_45 = 64;
	iLocal_49 = _0x4A9923385BDB9DAD();
	iLocal_50 = _get_blip_info_id_iterator();
	iLocal_61 = -1;
	iLocal_62 = -1;
	iLocal_77 = true;
	iLocal_266 = -1;
	iLocal_269 = -1;
	fLocal_272 = 0.5f;
	fLocal_273 = 0f;
	iLocal_438 = 1;
	fLocal_750 = 160f;
	sLocal_2338 = "CHI2AUD";
	iLocal_2676 = -1;
	iLocal_2884 = -1;
	set_mission_flag(1);
	if (has_force_cleanup_occurred(3))
	{
		func_410();
		func_409(2);
	}
	fLocal_750 = 160f;
	while (true)
	{
		if (!is_ped_injured(player_ped_id()))
		{
			func_129();
			func_127();
			if (iLocal_2511 >= 7)
			{
				func_119();
			}
			func_117();
			func_78();
			func_3();
			func_2();
			func_1();
			_0x208784099002BC30("m_Chinese2", 0);
		}
		iLocal_3687 = 0;
		wait(0);
	}
}

void func_1()
{
	if (iLocal_3505)
	{
		if (is_interior_ready(iLocal_3504))
		{
			_0x2CA429C029CCF247(iLocal_3504);
			iLocal_3505 = 0;
		}
	}
}

bool func_2()
{
	if (iLocal_3506)
	{
		if (iLocal_3507)
		{
			if (prepare_music_event(sLocal_3509))
			{
				if (trigger_music_event(sLocal_3509))
				{
					iLocal_3506 = 0;
					iLocal_3507 = 0;
					return true;
				}
			}
		}
		else if (trigger_music_event(sLocal_3509))
		{
			iLocal_3506 = 0;
			return true;
		}
	}
	else if (iLocal_3508)
	{
		if (prepare_music_event(sLocal_3510))
		{
			iLocal_3508 = 0;
		}
	}
	return false;
}

void func_3()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < Local_2515)
	{
		if (Local_2515[iVar0 /*6*/].f_1 == 1)
		{
			switch (Local_2515[iVar0 /*6*/])
			{
				case 0:
					switch (Local_2515[iVar0 /*6*/].f_2)
					{
						case 0:
							if (is_cutscene_playing())
							{
								Local_2515[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 1:
							func_69(1992.804f, 3053.31f, 45.77715f, 1989.681f, 3055.295f, 49.09001f, 3.25f, 1995.202f, 3062.156f, 46.0491f, 59.7235f, 10f, 20f, 9f, 1, 1, 1, 0, 0);
							func_69(1994.427f, 3045.136f, 45.34013f, 1981.903f, 3053.235f, 49.79153f, 9.5f, 1995.202f, 3062.156f, 46.0491f, 59.7235f, 10f, 20f, 9f, 1, 1, 1, 0, 0);
							func_69(1985.404f, 3075.057f, 44.84953f, 2017.102f, 3057.435f, 53.71896f, 33f, 1995.202f, 3062.156f, 46.0491f, 59.7235f, 10f, 20f, 9f, 1, 1, 1, 0, 0);
							iLocal_2506 = get_players_last_vehicle();
							if (func_68(iLocal_2506) && func_67(iLocal_2506, 1995.202f, 3062.156f, 46.0491f, 1) < 5f)
							{
								request_vehicle_asset(get_entity_model(iLocal_2506), 3);
							}
							Local_2515[iVar0 /*6*/].f_1 = 0;
							break;
					}
					break;
				
				case 2:
					if (iLocal_2511 >= 3)
					{
						Local_2515[iVar0 /*6*/].f_2 = -1;
					}
					switch (Local_2515[iVar0 /*6*/].f_2)
					{
						case -1:
							func_66();
							func_64();
							break;
						
						case 0:
							if (func_67(player_ped_id(), 2442.55f, 4967.51f, 54.35f, 1) < 1300f || func_63(39))
							{
								if (func_67(player_ped_id(), 2442.55f, 4967.51f, 54.35f, 1) > 500f)
								{
									Local_2515[iVar0 /*6*/].f_2++;
								}
							}
							break;
						
						case 1:
							if (func_60("PHN2", 1, player_ped_id(), "Trevor", 8, 0, "ONEIL", -1, 0, 0))
							{
								Local_2515[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 2:
							if (!func_59())
							{
								if (func_35("CHI2_ONEILPH", 1, player_ped_id(), "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_2515[iVar0 /*6*/].f_1 = 0;
								}
							}
							break;
					}
					break;
				
				case 3:
					if (iLocal_2511 >= 3)
					{
						Local_2515[iVar0 /*6*/].f_2 = -1;
						Local_2515[iVar0 /*6*/].f_1 = 0;
					}
					switch (Local_2515[iVar0 /*6*/].f_2)
					{
						case 0:
							if (func_35("CHI2_boom", 1, player_ped_id(), "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_2515[iVar0 /*6*/].f_2++;
							}
							iLocal_2888 = 0;
							Local_2515[iVar0 /*6*/].f_5 = get_game_timer() + 3000;
							break;
						
						case 1:
							if (!func_59())
							{
								if (!func_34())
								{
									if (!is_ped_in_any_vehicle(player_ped_id(), 0))
									{
										if (get_game_timer() > Local_2515[iVar0 /*6*/].f_5)
										{
											if (iLocal_2888 < 13)
											{
												if (func_35("DRI1", 2, player_ped_id(), "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
												{
													iLocal_2888++;
													Local_2515[iVar0 /*6*/].f_5 = get_game_timer() + get_random_int_in_range(4000, 10000);
												}
											}
											else
											{
												Local_2515[iVar0 /*6*/].f_1 = 0;
											}
										}
									}
								}
							}
							break;
					}
					break;
				
				case 4:
					if (is_ped_in_any_vehicle(player_ped_id(), 0))
					{
						iVar1 = get_vehicle_ped_is_in(player_ped_id(), 0);
						if (!is_entity_in_air(iVar1))
						{
							if (func_33(6f, 2))
							{
								task_leave_any_vehicle(player_ped_id(), 0, 0);
								Local_2515[iVar0 /*6*/].f_1 = 0;
							}
						}
					}
					else
					{
						Local_2515[iVar0 /*6*/].f_1 = 0;
					}
					break;
				
				case 5:
					switch (Local_2515[iVar0 /*6*/].f_2)
					{
						case -20:
							if (get_distance_between_coords(get_entity_coords(player_ped_id(), 1), 2460.073f, 4964.176f, 46.2405f, 1) < 250f)
							{
								request_model(joaat("a_m_m_hillbilly_01"));
								request_model(-1853453107);
								Local_2515[iVar0 /*6*/].f_2++;
							}
							break;
						
						case -19:
							if (has_model_loaded(joaat("a_m_m_hillbilly_01")) && has_model_loaded(-1853453107))
							{
								request_model(joaat("a_m_m_hillbilly_02"));
								Local_2515[iVar0 /*6*/].f_2++;
							}
							break;
						
						case -18:
							if (has_model_loaded(joaat("a_m_m_hillbilly_02")))
							{
								request_model(joaat("burrito"));
								Local_2515[iVar0 /*6*/].f_2++;
							}
							break;
						
						case -17:
							if (has_model_loaded(joaat("burrito")))
							{
								request_model(joaat("a_m_y_methhead_01"));
								Local_2515[iVar0 /*6*/].f_2++;
							}
							break;
						
						case -16:
							if (has_model_loaded(joaat("a_m_y_methhead_01")))
							{
								request_model(joaat("prop_ld_can_01"));
								request_model(joaat("prop_cs_fertilizer"));
								request_model(joaat("prop_cs_beer_bot_01"));
								request_model(joaat("prop_phone_ing"));
								request_model(joaat("dubsta"));
								request_anim_dict("misschinese2_bank5");
								request_anim_dict("misschinese2_bank1");
								request_anim_dict("reaction@male_stand@big_variations@b");
								request_anim_dict("reaction@male_stand@big_intro@left");
								request_anim_dict("reaction@male_stand@big_intro@right");
								request_anim_dict("reaction@male_stand@big_intro@backward");
								request_anim_dict("misschinese2_barrelRoll");
								request_anim_set("move_m@gangster@var_e");
								request_anim_set("move_m@gangster@var_f");
								request_anim_set("move_m@gangster@generic");
								Local_2515[iVar0 /*6*/].f_2++;
							}
							break;
						
						case -15:
							if (has_model_loaded(joaat("dubsta")))
							{
								func_32(22, 0);
								func_32(8, 0);
								set_roads_in_area(Vector(44.8113f, 4961.045f, 2469.985f) - Vector(100f, 100f, 100f), Vector(44.8113f, 4961.045f, 2469.985f) + Vector(100f, 100f, 100f), false, 1);
								Local_2515[iVar0 /*6*/].f_2 = 1;
							}
							break;
						
						case 0:
							if (get_distance_between_coords(get_entity_coords(player_ped_id(), 1), 2460.073f, 4964.176f, 46.2405f, 1) < 250f)
							{
								request_model(joaat("a_m_m_hillbilly_01"));
								request_model(joaat("a_m_m_hillbilly_02"));
								request_model(joaat("a_m_y_methhead_01"));
								request_model(joaat("prop_ld_can_01"));
								request_model(joaat("prop_cs_fertilizer"));
								request_model(joaat("burrito"));
								request_model(joaat("prop_cs_beer_bot_01"));
								if (iLocal_2511 <= 3)
								{
									request_model(joaat("prop_phone_ing"));
									request_model(joaat("dubsta"));
								}
								request_anim_dict("misschinese2_bank5");
								request_anim_dict("misschinese2_bank1");
								request_anim_dict("reaction@male_stand@big_variations@b");
								request_anim_dict("reaction@male_stand@big_intro@left");
								request_anim_dict("reaction@male_stand@big_intro@right");
								request_anim_dict("reaction@male_stand@big_intro@backward");
								request_anim_dict("misschinese2_barrelRoll");
								request_anim_set("move_m@gangster@var_e");
								request_anim_set("move_m@gangster@var_f");
								request_anim_set("move_m@gangster@generic");
								func_32(22, 0);
								func_32(8, 0);
								set_roads_in_area(Vector(44.8113f, 4961.045f, 2469.985f) - Vector(100f, 100f, 100f), Vector(44.8113f, 4961.045f, 2469.985f) + Vector(100f, 100f, 100f), false, 1);
								Local_2515[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 1:
							if (((((((((((((((has_model_loaded(joaat("a_m_m_hillbilly_01")) && has_model_loaded(joaat("a_m_m_hillbilly_02"))) && has_model_loaded(joaat("a_m_y_methhead_01"))) && has_model_loaded(joaat("burrito"))) && has_model_loaded(joaat("prop_cs_fertilizer"))) && has_model_loaded(joaat("prop_cs_beer_bot_01"))) && has_model_loaded(joaat("prop_ld_can_01"))) && has_anim_dict_loaded("misschinese2_bank5")) && has_anim_dict_loaded("misschinese2_bank1")) && has_anim_dict_loaded("misschinese2_barrelRoll")) && has_anim_dict_loaded("reaction@male_stand@big_variations@b")) && has_anim_dict_loaded("reaction@male_stand@big_intro@left")) && has_anim_dict_loaded("reaction@male_stand@big_intro@right")) && has_anim_dict_loaded("reaction@male_stand@big_intro@backward")) && ((iLocal_2511 <= 3 && has_model_loaded(joaat("prop_phone_ing"))) || iLocal_2511 > 3)) && ((iLocal_2511 <= 3 && has_model_loaded(joaat("dubsta"))) || iLocal_2511 > 3))
							{
								Local_2515[iVar0 /*6*/].f_2 = 4;
							}
							if (get_distance_between_coords(get_entity_coords(player_ped_id(), 1), 2460.073f, 4964.176f, 46.2405f, 1) > 300f)
							{
								set_model_as_no_longer_needed(joaat("a_m_m_hillbilly_01"));
								set_model_as_no_longer_needed(joaat("a_m_m_hillbilly_02"));
								set_model_as_no_longer_needed(joaat("a_m_y_methhead_01"));
								set_model_as_no_longer_needed(joaat("burrito"));
								set_model_as_no_longer_needed(joaat("prop_cs_fertilizer"));
								set_model_as_no_longer_needed(joaat("prop_cs_beer_bot_01"));
								set_model_as_no_longer_needed(joaat("prop_ld_can_01"));
								remove_anim_dict("misschinese2_bank5");
								remove_anim_dict("misschinese2_bank1");
								remove_anim_dict("reaction@male_stand@big_variations@b");
								remove_anim_dict("reaction@male_stand@big_intro@left");
								remove_anim_dict("reaction@male_stand@big_intro@right");
								remove_anim_dict("reaction@male_stand@big_intro@backward");
								remove_anim_dict("misschinese2_barrelRoll");
								remove_anim_set("move_m@gangster@var_e");
								remove_anim_set("move_m@gangster@var_f");
								remove_anim_set("move_m@gangster@generic");
								set_model_as_no_longer_needed(joaat("prop_phone_ing"));
								set_model_as_no_longer_needed(joaat("dubsta"));
								set_roads_in_area(Vector(44.8113f, 4961.045f, 2469.985f) - Vector(100f, 100f, 100f), Vector(44.8113f, 4961.045f, 2469.985f) + Vector(100f, 100f, 100f), true, 1);
								func_31(22, 1);
								func_31(8, 1);
								if (iLocal_2678 != 0)
								{
									unpin_interior(iLocal_2678);
									iLocal_2678 = 0;
								}
								Local_2515[iVar0 /*6*/].f_2 = -20;
							}
							break;
						
						case 4:
							if (get_distance_between_coords(get_entity_coords(player_ped_id(), 1), 2460.073f, 4964.176f, 46.2405f, 1) > 300f)
							{
								Local_2515[iVar0 /*6*/].f_2 = 1;
							}
							else if (iLocal_2511 >= 3 && !func_30(22))
							{
								func_27();
								Local_2515[iVar0 /*6*/].f_1 = 0;
							}
							break;
						
						case 5:
							break;
					}
					break;
				
				case 22:
					switch (Local_2515[iVar0 /*6*/].f_2)
					{
						case -1:
							if (iLocal_2678 != 0)
							{
								unpin_interior(iLocal_2678);
							}
							iLocal_2678 = 0;
							break;
						
						case 0:
							iLocal_2678 = get_interior_at_coords(2440.492f, 4969.948f, 52.5247f);
							Local_2515[iVar0 /*6*/].f_2++;
							break;
						
						case 1:
							if (!is_valid_interior(iLocal_2678))
							{
								iLocal_2678 = get_interior_at_coords(2440.492f, 4969.948f, 52.5247f);
							}
							else
							{
								_0x2CA429C029CCF247(iLocal_2678);
								Local_2515[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 2:
							Local_2515[iVar0 /*6*/].f_1 = 0;
							break;
					}
					break;
				
				case 6:
					switch (Local_2515[iVar0 /*6*/].f_2)
					{
						case 0:
							func_19(50, 0, 0, 1, 0);
							func_19(51, 0, 0, 1, 0);
							func_19(52, 0, 0, 1, 0);
							func_19(53, 0, 0, 1, 0);
							func_19(54, 1, 0, 1, 0);
							Local_2515[iVar0 /*6*/].f_2++;
							break;
						
						case 1:
							break;
					}
					break;
				
				case 7:
					if (Local_2515[iVar0 /*6*/].f_2 == 0)
					{
						iVar2 = func_18(8);
						if (iVar2 != -1)
						{
							if (!is_ped_injured(Local_755[iVar2 /*33*/]))
							{
								if (get_script_task_status(Local_755[iVar2 /*33*/], 1785177548) == 7)
								{
									iVar2 = func_18(9);
									if (iVar2 != -1)
									{
										if (!is_ped_injured(Local_755[iVar2 /*33*/]))
										{
											if (get_script_task_status(Local_755[iVar2 /*33*/], 1785177548) == 7)
											{
												remove_anim_dict("misschinese2_bank5");
												Local_2515[iVar0 /*6*/].f_1 = 0;
											}
										}
									}
								}
							}
							else
							{
								iVar2 = func_18(9);
								if (iVar2 != -1)
								{
									if (!is_ped_injured(Local_755[iVar2 /*33*/]))
									{
										if (get_script_task_status(Local_755[iVar2 /*33*/], 1785177548) == 7)
										{
											remove_anim_dict("misschinese2_bank5");
											Local_2515[iVar0 /*6*/].f_1 = 0;
										}
									}
									else
									{
										remove_anim_dict("misschinese2_bank5");
									}
								}
							}
						}
					}
					break;
				
				case 8:
					switch (Local_2515[iVar0 /*6*/].f_2)
					{
						case -1:
							remove_scenario_blocking_areas();
							break;
						
						case 0:
							add_scenario_blocking_area(Vector(58.6179f, 4972.897f, 2445.654f) - Vector(100f, 100f, 100f), Vector(58.6179f, 4972.897f, 2445.654f) + Vector(100f, 100f, 100f), 0, 1, 1, 1);
							Local_2515[iVar0 /*6*/].f_2++;
							break;
						
						case 1:
							if (!is_ped_injured(player_ped_id()))
							{
								if (get_distance_between_coords(get_entity_coords(player_ped_id(), 0), 2473.061f, 4981.482f, 24.64584f, 1) < 250f)
								{
									Local_2515[iVar0 /*6*/].f_2++;
								}
							}
							break;
						
						case 2:
							set_ped_density_multiplier_this_frame(0f);
							set_vehicle_density_multiplier_this_frame(0f);
							set_scenario_ped_density_multiplier_this_frame(0f, 0f);
							if (get_distance_between_coords(get_entity_coords(player_ped_id(), 0), 2473.061f, 4981.482f, 24.64584f, 1) > 250f)
							{
								Local_2515[iVar0 /*6*/].f_2++;
							}
							break;
					}
					break;
				
				case 9:
					switch (Local_2515[iVar0 /*6*/].f_2)
					{
						case -1:
							_0xDC0F817884CDD856(3, true);
							_0xDC0F817884CDD856(5, true);
							_0xDC0F817884CDD856(1, true);
							_0xDC0F817884CDD856(7, true);
							break;
						
						case 0:
							if (func_67(player_ped_id(), 2578.523f, 4982.284f, 51.4416f, 1) < 500f)
							{
								_0xDC0F817884CDD856(3, false);
								_0xDC0F817884CDD856(5, false);
								_0xDC0F817884CDD856(1, false);
								_0xDC0F817884CDD856(7, false);
								Local_2515[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 1:
							if (func_67(player_ped_id(), 2578.523f, 4982.284f, 51.4416f, 1) > 500f)
							{
								_0xDC0F817884CDD856(3, true);
								_0xDC0F817884CDD856(5, true);
								_0xDC0F817884CDD856(1, true);
								_0xDC0F817884CDD856(7, true);
								Local_2515[iVar0 /*6*/].f_2 = 0;
							}
							break;
					}
					break;
				
				case 25:
					switch (Local_2515[iVar0 /*6*/].f_2)
					{
						case 0:
							func_17(player_ped_id(), 149);
							Local_2515[iVar0 /*6*/].f_2++;
							break;
						
						case 1:
							if (is_ped_in_any_vehicle(player_ped_id(), 0))
							{
								iVar3 = get_vehicle_ped_is_in(player_ped_id(), 0);
								func_17(iVar3, 152);
								func_16(iVar3, -1);
								Local_2515[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 2:
							if (!is_ped_in_any_vehicle(player_ped_id(), 0))
							{
								func_17(0, 152);
								func_16(0, -1);
								Local_2515[iVar0 /*6*/].f_2 = 1;
							}
							break;
					}
					break;
				
				case 10:
					break;
				
				case 11:
					break;
				
				case 14:
					switch (Local_2515[iVar0 /*6*/].f_2)
					{
						case 0:
							Local_2515[iVar0 /*6*/].f_5 = get_game_timer() + 7000;
							Local_2515[iVar0 /*6*/].f_2++;
							break;
						
						case 1:
							if (get_game_timer() > Local_2515[iVar0 /*6*/].f_5)
							{
								set_entity_coords(player_ped_id(), 2466.385f, 4953.096f, 44.1228f, 1, false, 0, 1);
								set_entity_heading(player_ped_id(), 221f);
								task_go_straight_to_coord(player_ped_id(), 2475.075f, 4945.965f, 44.0228f, 1f, 20000, 1193033728, 0.5f);
								force_ped_motion_state(player_ped_id(), -668482597, false, 0, 0);
								Local_2515[iVar0 /*6*/].f_1 = 0;
							}
							break;
					}
					break;
				
				case 13:
					if (load_stream("CHINESE2_FARMHOUSE_EXPLOSION_MOLOTOV_MASTER", 0))
					{
						play_stream_frontend();
						Local_2515[iVar0 /*6*/].f_1 = 0;
					}
					break;
				
				case 12:
					switch (Local_2515[iVar0 /*6*/].f_2)
					{
						case 0:
							uLocal_2672 = _0xB48FCED898292E52(2457.15f, 4968.79f, 48.677f, 45f, "DES_FarmHs");
							if (_0x52AF537A0C5B8AAD(uLocal_2672))
							{
								_0x5C29F698D404C5E1(uLocal_2672, 2);
								Local_2515[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 1:
							if (_0x899BA936634A322E(uLocal_2672) == 3)
							{
								_0x5C29F698D404C5E1(uLocal_2672, 4);
								Local_2515[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 2:
							if (iLocal_2673 == 1)
							{
								if (_0x899BA936634A322E(uLocal_2672) == 5)
								{
									_0x5C29F698D404C5E1(uLocal_2672, 6);
									start_audio_scene("CHI_2_RAYFIRE");
									create_model_hide(2457.15f, 4968.79f, 48.677f, 100f, 965837842, 1);
									create_model_hide(2457.15f, 4968.79f, 48.677f, 100f, 247384786, 1);
									create_model_hide(2457.15f, 4968.79f, 48.677f, 100f, -247908770, 0);
									Local_2515[iVar0 /*6*/].f_2++;
								}
							}
							break;
						
						case 3:
							func_15("CHN2_EXPLODE", 1, "CHN2_EXPLODE");
							Local_2515[iVar0 /*6*/].f_1 = 0;
							break;
					}
					break;
				
				case 16:
					if (Local_2515[iVar0 /*6*/].f_2 != -1)
					{
						if (!has_ped_got_weapon(player_ped_id(), joaat("weapon_petrolcan"), 0) || !does_pickup_exist(uLocal_2675))
						{
							iLocal_2679 = get_closest_object_of_type(get_entity_coords(player_ped_id(), 1), 20f, get_weapontype_model(joaat("weapon_petrolcan")), 0, 0, 1);
							if (iLocal_2679 != 0)
							{
								if (does_blip_exist(iLocal_2677))
								{
									remove_blip(&iLocal_2677);
								}
								iLocal_2677 = func_13(iLocal_2679);
								func_12(1);
								func_11(0, 157);
							}
						}
						else
						{
							Local_2515[iVar0 /*6*/].f_5 = 0;
							func_12(0);
							if (does_blip_exist(iLocal_2677))
							{
								remove_blip(&iLocal_2677);
							}
							func_10(157, 0);
							if (iLocal_2649 == 0)
							{
								iLocal_2649 = get_ammo_in_ped_weapon(player_ped_id(), joaat("weapon_petrolcan"));
							}
							else
							{
								func_9(158, iLocal_2649 - get_ammo_in_ped_weapon(player_ped_id(), joaat("weapon_petrolcan")), 1);
							}
						}
						if (func_8())
						{
							func_11(0, 157);
							Local_2515[iVar0 /*6*/].f_1 = 0;
							func_32(17, 0);
						}
					}
					break;
				
				case 18:
					break;
				
				case 17:
					if (is_entity_in_angled_area(player_ped_id(), 2447.671f, 4951.438f, 43.25576f, 2454.664f, 4957.856f, 47.89117f, 6.8125f, 0, true, 0) && get_game_timer() > Local_2515[iVar0 /*6*/].f_5)
					{
						if (does_blip_exist(iLocal_2677))
						{
							remove_blip(&iLocal_2677);
						}
						Local_2515[iVar0 /*6*/].f_1 = 0;
					}
					else
					{
						switch (Local_2515[iVar0 /*6*/].f_2)
						{
							case 0:
								if (!func_59())
								{
									func_7("FRMSHP", 7500, 1);
									Local_2515[iVar0 /*6*/].f_5 = get_game_timer() + 2000;
									iLocal_2677 = func_5(2450f, 4954f, 45f, 0);
									Local_2515[iVar0 /*6*/].f_2++;
								}
								break;
							}
					}
					break;
				
				case 20:
					if (!is_bit_set(Local_2515[iVar0 /*6*/].f_5, false))
					{
						iLocal_2885 = func_18(4);
						if (iLocal_2885 != -1)
						{
							set_bit(&(Local_2515[iVar0 /*6*/].f_5), false);
						}
					}
					else if (!is_bit_set(Local_2515[iVar0 /*6*/].f_5, true))
					{
						if (!is_ped_injured(Local_755[iLocal_2885 /*33*/]) && does_entity_exist(Local_755[iLocal_2885 /*33*/].f_20))
						{
							if (is_entity_playing_anim(Local_755[iLocal_2885 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", 3) && is_entity_attached(Local_755[iLocal_2885 /*33*/].f_20))
							{
								set_bit(&(Local_2515[iVar0 /*6*/].f_5), true);
							}
						}
					}
					else if (!is_bit_set(Local_2515[iVar0 /*6*/].f_5, 2))
					{
						if (is_ped_injured(Local_755[iLocal_2885 /*33*/]))
						{
							set_bit(&(Local_2515[iVar0 /*6*/].f_5), 2);
						}
						if (!is_ped_injured(Local_755[iLocal_2885 /*33*/]))
						{
							if (!is_entity_playing_anim(Local_755[iLocal_2885 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", 3))
							{
								set_bit(&(Local_2515[iVar0 /*6*/].f_5), 2);
							}
							if (get_script_task_status(Local_755[iLocal_2885 /*33*/], -2017877118) == 2 || get_script_task_status(Local_755[iLocal_2885 /*33*/], -2017877118) == 7)
							{
								set_bit(&(Local_2515[iVar0 /*6*/].f_5), 2);
							}
							if (is_ped_in_combat(Local_755[iLocal_2885 /*33*/], player_ped_id()) || Local_1619[iLocal_2885 /*24*/].f_3 > 3)
							{
								set_bit(&(Local_2515[iVar0 /*6*/].f_5), 2);
							}
						}
					}
					else if (does_entity_exist(Local_755[iLocal_2885 /*33*/].f_20) && is_entity_attached(Local_755[iLocal_2885 /*33*/].f_20))
					{
						detach_entity(Local_755[iLocal_2885 /*33*/].f_20, 0, false);
					}
					if (!is_bit_set(Local_2515[iVar0 /*6*/].f_5, 4))
					{
						iLocal_2886 = func_18(5);
						if (iLocal_2886 != -1)
						{
							set_bit(&(Local_2515[iVar0 /*6*/].f_5), 4);
						}
					}
					else if (!is_bit_set(Local_2515[iVar0 /*6*/].f_5, 5))
					{
						if (!is_ped_injured(Local_755[iLocal_2886 /*33*/]))
						{
							if (does_entity_exist(Local_755[iLocal_2886 /*33*/].f_20))
							{
								if (is_entity_playing_anim(Local_755[iLocal_2886 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", 3))
								{
									if (is_entity_attached(Local_755[iLocal_2886 /*33*/].f_20))
									{
										set_bit(&(Local_2515[iVar0 /*6*/].f_5), 5);
									}
								}
							}
						}
					}
					else if (!is_bit_set(Local_2515[iVar0 /*6*/].f_5, 6))
					{
						if (is_ped_injured(Local_755[iLocal_2886 /*33*/]))
						{
							set_bit(&(Local_2515[iVar0 /*6*/].f_5), 6);
						}
						if (!is_ped_injured(Local_755[iLocal_2886 /*33*/]))
						{
							if (!is_entity_playing_anim(Local_755[iLocal_2886 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", 3))
							{
								set_bit(&(Local_2515[iVar0 /*6*/].f_5), 6);
							}
							if (get_script_task_status(Local_755[iLocal_2886 /*33*/], -2017877118) == 2 || get_script_task_status(Local_755[iLocal_2886 /*33*/], -2017877118) == 7)
							{
								set_bit(&(Local_2515[iVar0 /*6*/].f_5), 6);
							}
							if (is_ped_in_combat(Local_755[iLocal_2886 /*33*/], player_ped_id()) || Local_1619[iLocal_2886 /*24*/].f_3 > 3)
							{
								set_bit(&(Local_2515[iVar0 /*6*/].f_5), 6);
							}
						}
					}
					else if (does_entity_exist(Local_755[iLocal_2886 /*33*/].f_20) && is_entity_attached(Local_755[iLocal_2886 /*33*/].f_20))
					{
						detach_entity(Local_755[iLocal_2886 /*33*/].f_20, 0, false);
					}
					break;
				
				case 21:
					break;
				
				case 23:
					iVar4 = 0;
					switch (Local_2515[iVar0 /*6*/].f_2)
					{
						case 1:
							iLocal_2657[0] = create_object_no_offset(joaat("prop_ld_can_01"), 2494.496f, 4970.916f, 44.5112f, 1, 1, 0);
							set_entity_rotation(iLocal_2657[0], -3.44f, 0f, 38.88f, 2, 1);
							iLocal_2657[1] = create_object_no_offset(joaat("prop_ld_can_01"), 2494.863f, 4970.595f, 44.5425f, 1, 1, 0);
							set_entity_rotation(iLocal_2657[1], -3.44f, 0f, 38.88f, 2, 1);
							iLocal_2657[2] = create_object_no_offset(joaat("prop_ld_can_01"), 2494.896f, 4970.417f, 44.5475f, 1, 1, 0);
							set_entity_rotation(iLocal_2657[2], -3.44f, 0f, 38.88f, 2, 1);
							iLocal_2657[3] = create_object_no_offset(joaat("prop_ld_can_01"), 2494.795f, 4970.246f, 44.5525f, 1, 1, 0);
							set_entity_rotation(iLocal_2657[3], -3.44f, 0f, 38.88f, 2, 1);
							iLocal_2657[4] = create_object_no_offset(joaat("prop_ld_can_01"), 2494.204f, 4970.269f, 44.5201f, 1, 1, 0);
							set_entity_rotation(iLocal_2657[4], -3.44f, 0f, 38.88f, 2, 1);
							iLocal_2657[5] = create_object_no_offset(joaat("prop_ld_can_01"), 2494.372f, 4970.744f, 44.51f, 1, 1, 0);
							set_entity_rotation(iLocal_2657[5], -3.44f, 0f, 38.88f, 2, 1);
							iLocal_2657[6] = create_object_no_offset(joaat("prop_ld_can_01"), 2494.372f, 4971.092f, 44.4987f, 1, 1, 0);
							set_entity_rotation(iLocal_2657[6], -3.44f, 0f, 38.88f, 2, 1);
							iLocal_2657[7] = create_object_no_offset(joaat("prop_ld_can_01"), 2493.77f, 4971f, 44.6287f, 1, 1, 0);
							set_entity_rotation(iLocal_2657[7], 3.955f, 0f, 139.68f, 2, 1);
							iLocal_2657[8] = create_object_no_offset(joaat("prop_ld_can_01"), 2493.98f, 4971.279f, 44.6038f, 1, 1, 0);
							set_entity_rotation(iLocal_2657[8], 3.955f, 0f, 139.68f, 2, 1);
							iLocal_2657[9] = create_object_no_offset(joaat("prop_ld_can_01"), 2494.104f, 4971.438f, 44.5826f, 1, 1, 0);
							set_entity_rotation(iLocal_2657[9], 3.955f, 0f, 139.68f, 2, 1);
							iVar4 = 0;
							while (iVar4 < iLocal_2657)
							{
								set_entity_dynamic(iLocal_2657[iVar4], 1);
								freeze_entity_position(iLocal_2657[iVar4], true);
								iVar4++;
							}
							Local_2515[iVar0 /*6*/].f_2++;
							break;
						
						case 0:
							if (!does_entity_exist(iLocal_2680) && !does_entity_exist(iLocal_2681))
							{
								if (does_object_of_type_exist_at_coords(2493.5f, 4969.2f, 43.9f, 1f, -921781850, 0) && does_object_of_type_exist_at_coords(2493.4f, 4971.8f, 43.6f, 1f, -1853453107, 0))
								{
									iLocal_2680 = get_closest_object_of_type(2493.5f, 4969.2f, 43.9f, 1f, -921781850, 1, 0, 1);
									freeze_entity_position(iLocal_2680, true);
									create_model_hide(2493.4f, 4971.8f, 43.6f, 1f, -1853453107, 0);
									iLocal_2681 = create_object(-1853453107, 2493.427f, 4971.729f, 43.54362f, 1, true, false);
									set_entity_rotation(iLocal_2681, -1.436373f, 0.176147f, -36.6601f, 2, 1);
									freeze_entity_position(iLocal_2681, true);
									func_32(24, 0);
									Local_2515[iVar0 /*6*/].f_2++;
								}
							}
							else
							{
								delete_object(&iLocal_2681);
								iLocal_2681 = create_object(-1853453107, 2493.427f, 4971.729f, 43.54362f, 1, true, false);
								set_entity_rotation(iLocal_2681, -1.436373f, 0.176147f, -36.6601f, 2, 1);
								freeze_entity_position(iLocal_2681, true);
								func_32(24, 0);
								Local_2515[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 2:
							iVar4 = 0;
							iVar4 = 0;
							while (iVar4 < iLocal_2657)
							{
								if (does_entity_exist(iLocal_2657[iVar4]))
								{
									freeze_entity_position(iLocal_2657[iVar4], false);
								}
								iVar4++;
							}
							Local_2515[iVar0 /*6*/].f_1 = 0;
							Local_2515[iVar0 /*6*/].f_1 = 0;
							break;
					}
					break;
				
				case 24:
					if (!is_bit_set(Local_2515[iVar0 /*6*/].f_5, false))
					{
						if (does_entity_exist(iLocal_2680))
						{
							if (!is_ped_injured(player_ped_id()))
							{
								if (has_entity_been_damaged_by_entity(iLocal_2680, player_ped_id(), 1) || func_4(player_ped_id(), iLocal_2680, 1) < 30f)
								{
									freeze_entity_position(iLocal_2680, false);
									set_bit(&(Local_2515[iVar0 /*6*/].f_5), false);
								}
							}
						}
					}
					if (!is_bit_set(Local_2515[iVar0 /*6*/].f_5, true))
					{
						if (does_entity_exist(iLocal_2681))
						{
							if (!is_ped_injured(player_ped_id()))
							{
								if (has_entity_been_damaged_by_entity(iLocal_2681, player_ped_id(), 1) || func_4(player_ped_id(), iLocal_2681, 1) < 30f)
								{
									freeze_entity_position(iLocal_2681, false);
									set_bit(&(Local_2515[iVar0 /*6*/].f_5), true);
								}
							}
						}
					}
					if ((is_bit_set(Local_2515[iVar0 /*6*/].f_5, false) && is_bit_set(Local_2515[iVar0 /*6*/].f_5, true)) || iLocal_2511 == 6)
					{
						if (does_entity_exist(iLocal_2680))
						{
							freeze_entity_position(iLocal_2680, false);
						}
						if (does_entity_exist(iLocal_2681))
						{
							freeze_entity_position(iLocal_2681, false);
						}
						Local_2515[iVar0 /*6*/].f_1 = 0;
					}
					break;
				
				case 26:
					switch (Local_2515[iVar0 /*6*/].f_2)
					{
						case -1:
							if (does_entity_exist(Local_755[12 /*33*/]))
							{
								delete_ped(&(Local_755[12 /*33*/]));
							}
							if (does_entity_exist(Local_755[13 /*33*/]))
							{
								delete_ped(&(Local_755[13 /*33*/]));
							}
							if (does_entity_exist(Local_755[14 /*33*/]))
							{
								delete_ped(&(Local_755[14 /*33*/]));
							}
							set_model_as_no_longer_needed(joaat("ig_janet"));
							set_model_as_no_longer_needed(joaat("ig_old_man1a"));
							set_model_as_no_longer_needed(joaat("ig_old_man2"));
							Local_2515[iVar0 /*6*/].f_1 = 0;
							break;
						
						case 0:
							request_anim_dict("MISSChinese2_crystalMazeMCS1_IG");
							Local_2515[iVar0 /*6*/].f_2++;
							break;
						
						case 1:
							if (has_anim_dict_loaded("MISSChinese2_crystalMazeMCS1_IG"))
							{
								if (has_cutscene_finished() || !is_cutscene_playing())
								{
									if (does_entity_exist(Local_755[13 /*33*/]) && !is_ped_injured(Local_755[13 /*33*/]))
									{
										set_entity_coords(Local_755[13 /*33*/], 1986.06f, 3051.708f, 46.2151f, 1, false, 0, 1);
									}
									if (does_entity_exist(Local_755[14 /*33*/]) && !is_ped_injured(Local_755[14 /*33*/]))
									{
										set_entity_coords(Local_755[14 /*33*/], 1986.105f, 3051.659f, 46.2151f, 1, false, 0, 1);
									}
									Local_2515[iVar0 /*6*/].f_2++;
								}
							}
							break;
						
						case 2:
							if (does_scenario_exist_in_area(1984.89f, 3052.46f, 46.98f, 0.3f, 1) && does_scenario_exist_in_area(1985.322f, 3053.087f, 46.98f, 0.3f, 1))
							{
								if (!does_entity_exist(Local_755[13 /*33*/]))
								{
									Local_755[13 /*33*/] = PED::CREATE_PED(26, joaat("ig_old_man1a"), 1987.231f, 3052.741f, 46.214f, 0, 1, true);
								}
								if (!does_entity_exist(Local_755[14 /*33*/]))
								{
									Local_755[14 /*33*/] = PED::CREATE_PED(26, joaat("ig_old_man2"), 1987.231f, 3052.741f, 46.214f, 0, 1, true);
								}
								if (!does_entity_exist(Local_755[12 /*33*/]))
								{
									Local_755[12 /*33*/] = PED::CREATE_PED(26, joaat("ig_janet"), 1987.231f, 3052.741f, 46.214f, 0, 1, true);
								}
								set_bit(&(Local_2515[iVar0 /*6*/].f_5), true);
								task_use_nearest_scenario_to_coord_warp(Local_755[14 /*33*/], 1984.89f, 3052.46f, 46.98f, 0.3f, 0);
								_0x2208438012482A1A(Local_755[14 /*33*/], 1, 1);
								set_blocking_of_non_temporary_events(Local_755[14 /*33*/], false);
								set_bit(&(Local_2515[iVar0 /*6*/].f_5), false);
								task_use_nearest_scenario_to_coord_warp(Local_755[13 /*33*/], 1985.322f, 3053.087f, 46.98f, 0.3f, 0);
								_0x2208438012482A1A(Local_755[13 /*33*/], 1, 1);
								set_blocking_of_non_temporary_events(Local_755[13 /*33*/], false);
								if (!is_synchronized_scene_running(Local_2515[iVar0 /*6*/].f_5))
								{
									Local_2515[iVar0 /*6*/].f_5 = create_synchronized_scene(1987.231f, 3052.741f, 46.214f, 0f, 0f, 57.6f, 2);
									set_synchronized_scene_looped(Local_2515[iVar0 /*6*/].f_5, true);
								}
								task_synchronized_scene(Local_755[12 /*33*/], Local_2515[iVar0 /*6*/].f_5, "MISSChinese2_crystalMazeMCS1_IG", "bar_peds_action_janet", 1000f, -1000f, 1, 0, 1000f, 0);
								_0x2208438012482A1A(Local_755[12 /*33*/], 1, 1);
								set_blocking_of_non_temporary_events(Local_755[12 /*33*/], false);
								Local_2515[iVar0 /*6*/].f_5 = 0;
								Local_2515[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 3:
							if (has_cutscene_finished() || !is_cutscene_playing())
							{
							}
							if (!is_ped_injured(Local_755[13 /*33*/]) && !is_ped_injured(Local_755[14 /*33*/]))
							{
								PED::SET_PED_CONFIG_FLAG(Local_755[13 /*33*/], 152, true);
								PED::SET_PED_CONFIG_FLAG(Local_755[14 /*33*/], 152, true);
								if (is_bit_set(Local_2515[iVar0 /*6*/].f_5, false) && is_bit_set(Local_2515[iVar0 /*6*/].f_5, true))
								{
									Local_2515[iVar0 /*6*/].f_2++;
								}
								else
								{
									if (get_script_task_status(Local_755[13 /*33*/], 993674639) != 1)
									{
										if (does_scenario_exist_in_area(1984.89f, 3052.46f, 46.98f, 0.3f, 1))
										{
											set_bit(&(Local_2515[iVar0 /*6*/].f_5), false);
											task_use_nearest_scenario_to_coord_warp(Local_755[13 /*33*/], 1984.89f, 3052.46f, 46.98f, 0.3f, 0);
											set_blocking_of_non_temporary_events(Local_755[13 /*33*/], false);
										}
									}
									else
									{
										set_bit(&(Local_2515[iVar0 /*6*/].f_5), false);
									}
									if (get_script_task_status(Local_755[14 /*33*/], 993674639) != 1)
									{
										if (does_scenario_exist_in_area(1985.322f, 3053.087f, 46.98f, 0.3f, 1))
										{
											set_bit(&(Local_2515[iVar0 /*6*/].f_5), true);
											task_use_nearest_scenario_to_coord_warp(Local_755[14 /*33*/], 1985.322f, 3053.087f, 46.98f, 0.3f, 0);
											set_blocking_of_non_temporary_events(Local_755[14 /*33*/], false);
										}
									}
									else
									{
										set_bit(&(Local_2515[iVar0 /*6*/].f_5), true);
									}
								}
							}
							break;
						
						case 4:
							if (func_67(player_ped_id(), 1991.419f, 3054.915f, 47.533f, 1) > 150f)
							{
								Local_2515[iVar0 /*6*/].f_2 = -1;
							}
							break;
						
						case 6:
							if (!is_ped_injured(Local_755[12 /*33*/]))
							{
								task_smart_flee_ped(Local_755[12 /*33*/], player_ped_id(), 100f, -1, 0, 0);
								set_ped_keep_task(Local_755[12 /*33*/], true);
								set_ped_as_no_longer_needed(&(Local_755[12 /*33*/]));
							}
							if (!is_ped_injured(Local_755[13 /*33*/]))
							{
								task_smart_flee_ped(Local_755[13 /*33*/], player_ped_id(), 100f, -1, 0, 0);
								set_ped_keep_task(Local_755[13 /*33*/], true);
								set_ped_as_no_longer_needed(&(Local_755[13 /*33*/]));
							}
							if (!is_ped_injured(Local_755[14 /*33*/]))
							{
								task_smart_flee_ped(Local_755[14 /*33*/], player_ped_id(), 100f, -1, 0, 0);
								set_ped_keep_task(Local_755[14 /*33*/], true);
								set_ped_as_no_longer_needed(&(Local_755[14 /*33*/]));
							}
							Local_2515[iVar0 /*6*/].f_2 = 7;
							break;
						
						case 7:
							if (func_67(player_ped_id(), 1991.419f, 3054.915f, 47.533f, 1) > 150f)
							{
								Local_2515[iVar0 /*6*/].f_2 = -1;
							}
							break;
					}
					break;
				
				case 27:
					create_forced_object(2444.176f, 4974.077f, 56.4066f, 30f, 1194028902, 1);
					create_forced_object(2444.176f, 4974.077f, 56.4066f, 30f, joaat("v_ilev_fh_frntdoor"), 1);
					Local_2515[iVar0 /*6*/].f_1 = 0;
					break;
				
				case 29:
					break;
			}
			if (Local_2515[iVar0 /*6*/].f_2 == -1)
			{
				Local_2515[iVar0 /*6*/].f_1 = 0;
				Local_2515[iVar0 /*6*/].f_2 = 0;
				Local_2515[iVar0 /*6*/].f_3 = 0;
				Local_2515[iVar0 /*6*/].f_4 = 0;
				Local_2515[iVar0 /*6*/].f_5 = 0;
			}
		}
		iVar0++;
	}
}

float func_4(int iParam0, int iParam1, int iParam2)
{
	Vector3 vVar0;
	Vector3 vVar3;
	
	if (!is_entity_dead(iParam0, 0))
	{
		vVar0 = {get_entity_coords(iParam0, 1)};
	}
	else
	{
		vVar0 = {get_entity_coords(iParam0, 0)};
	}
	if (!is_entity_dead(iParam1, 0))
	{
		vVar3 = {get_entity_coords(iParam1, 1)};
	}
	else
	{
		vVar3 = {get_entity_coords(iParam1, 0)};
	}
	return get_distance_between_coords(vVar0, vVar3, iParam2);
}

int func_5(Vector3 vParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = add_blip_for_coord(vParam0);
	set_blip_scale(iVar0, func_6(network_is_game_in_progress(), 1f, 1f));
	set_blip_route(iVar0, iParam3);
	return iVar0;
}

float func_6(int iParam0, float fParam1, float fParam2)
{
	if (iParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_7(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	_set_text_entry_2(sParam0);
	_draw_subtitle_timed(iParam1, 0);
}

bool func_8()
{
	if (iLocal_269 == 0)
	{
		return true;
	}
	return false;
}

void func_9(int iParam0, int iParam1, int iParam2)
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

void func_10(int iParam0, int iParam1)
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

void func_11(int iParam0, int iParam1)
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

void func_12(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 1)
	{
		if (iLocal_262 == 0)
		{
			iVar0 = 0;
			while (iVar0 < Local_444)
			{
				if (does_blip_exist(Local_444[iVar0 /*5*/].f_3))
				{
					if (get_blip_alpha(Local_444[iVar0 /*5*/].f_3) < 255)
					{
						remove_blip(&(Local_444[iVar0 /*5*/].f_3));
					}
					else
					{
						set_blip_alpha(Local_444[iVar0 /*5*/].f_3, 0);
					}
				}
				iVar0++;
			}
			iLocal_262 = 1;
		}
	}
	else if (iLocal_262)
	{
		iVar0 = 0;
		while (iVar0 < Local_444)
		{
			if (does_blip_exist(Local_444[iVar0 /*5*/].f_3))
			{
				set_blip_alpha(Local_444[iVar0 /*5*/].f_3, 255);
			}
			else
			{
				Local_444[iVar0 /*5*/].f_3 = func_5(Local_444[iVar0 /*5*/], 0);
				_0x54318C915D27E4CE(Local_444[iVar0 /*5*/].f_3, 1);
				set_blip_scale(Local_444[iVar0 /*5*/].f_3, 0.4f);
				set_blip_alpha(Local_444[iVar0 /*5*/].f_3, 0);
				set_blip_colour(Local_444[iVar0 /*5*/].f_3, 5);
				_0x75A16C3DA34F1245(Local_444[iVar0 /*5*/].f_3, false);
			}
			iVar0++;
		}
		iLocal_262 = 0;
	}
}

int func_13(int iParam0)
{
	return func_14(iParam0, 1, 0);
}

int func_14(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	iVar0 = add_blip_for_entity(iParam0);
	if (is_entity_a_vehicle(iParam0))
	{
		set_blip_scale(iVar0, func_6(network_is_game_in_progress(), 1f, 1f));
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
		set_blip_scale(iVar0, func_6(network_is_game_in_progress(), 0.7f, 0.7f));
		set_blip_as_friendly(iVar0, iParam1);
	}
	else if (is_entity_an_object(iParam0))
	{
		set_blip_scale(iVar0, func_6(network_is_game_in_progress(), 0.7f, 0.7f));
	}
	return iVar0;
}

void func_15(char* sParam0, int iParam1, char* sParam2)
{
	iLocal_3506 = 1;
	iLocal_3507 = iParam1;
	sLocal_3509 = sParam0;
	sLocal_3510 = sParam2;
}

void func_16(int iParam0, int iParam1)
{
	Global_55760 = iParam0;
	Global_55761 = iParam1;
}

void func_17(int iParam0, int iParam1)
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

int func_18(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_755)
	{
		if (Local_755[iVar0 /*33*/].f_2 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_19(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
		func_22(iParam0, iParam3, iParam4, 0);
		func_20(iParam0, iParam1);
	}
}

void func_20(int iParam0, int iParam1)
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
				func_21(0, 0);
			}
			else
			{
				func_21(0, 1);
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

void func_21(int iParam0, int iParam1)
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

int func_22(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	auto uVar2;
	struct<5> Var3;
	auto uVar98;
	int iVar99;
	int iVar100;
	
	iVar0 = false;
	Var3.f_4 = 3;
	Var3.f_8 = 3;
	Var3.f_64 = 3;
	Var3.f_75 = 3;
	Var3.f_91 = 3;
	func_26(&Var3, iParam0);
	if (func_23())
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
				if (!func_23())
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

bool func_23()
{
	if ((func_25() == -1 || func_25() == 999) && !func_24() == 0)
	{
		return true;
	}
	return false;
}

auto func_24()
{
	return Global_25121;
}

auto func_25()
{
	return Global_25120;
}

bool func_26(auto uParam0, int iParam1)
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

void func_27()
{
	int iVar0;
	
	func_32(27, 0);
	clear_area(2479.875f, 4980.868f, 44.82052f, 60f, 1, 0, 0, false);
	iLocal_2507 = create_vehicle(joaat("burrito"), 2479.579f, 4980.503f, 44.8051f, 341.8158f, 1, 1);
	set_vehicle_colour_combination(iLocal_2507, 1);
	set_vehicle_livery(iLocal_2507, 2);
	set_vehicle_on_ground_properly(iLocal_2507);
	if (iLocal_2511 < 5)
	{
		func_29(1, 1, 4);
		func_29(1, 1, 5);
		func_29(1, 1, 2);
		func_29(1, 1, 1);
		func_29(1, 1, 6);
		func_29(1, 1, 7);
		func_29(1, 1, 3);
		func_29(1, 1, 0);
		func_29(1, 1, 8);
		func_29(1, 1, 9);
	}
	if (iLocal_2511 < 6)
	{
		func_29(2, 1, 10);
		func_29(2, 1, 11);
		func_29(2, 1, 18);
		func_29(2, 1, 19);
	}
	if (iLocal_2511 < 7)
	{
		func_29(2, 1, 12);
		func_29(2, 1, 13);
		func_29(2, 1, 14);
		func_29(2, 1, 15);
		func_29(2, 1, 16);
		func_29(2, 1, 17);
		func_29(2, 1, 20);
		func_29(5, 1, 23);
	}
	if (iLocal_2511 == 7)
	{
		request_anim_dict("DEAD");
		while (!has_anim_dict_loaded("DEAD"))
		{
			func_28(323, 1);
		}
		Local_755[15 /*33*/] = PED::CREATE_PED(26, joaat("a_m_y_methhead_01"), 2436.901f, 4959.1f, 45.8106f, 209.7559f, 1, true);
		task_play_anim(Local_755[15 /*33*/], "DEAD", "DEAD_C", 1000f, -1000f, -1, 1, 0, 0, 0, 0);
		_0x2208438012482A1A(Local_755[15 /*33*/], 1, 0);
		disable_ped_pain_audio(Local_755[15 /*33*/], 1);
		Local_755[16 /*33*/] = PED::CREATE_PED(26, joaat("a_m_m_hillbilly_01"), 2440.266f, 4970.705f, 45.8306f, 15.7982f, 1, true);
		task_play_anim(Local_755[16 /*33*/], "DEAD", "DEAD_D", 1000f, -1000f, -1, 1, 0, 0, 0, 0);
		_0x2208438012482A1A(Local_755[16 /*33*/], 1, 0);
		disable_ped_pain_audio(Local_755[16 /*33*/], 1);
		Local_755[17 /*33*/] = PED::CREATE_PED(26, joaat("a_m_m_hillbilly_02"), 2443.42f, 4974.523f, 45.8106f, 121.834f, 1, true);
		task_play_anim(Local_755[17 /*33*/], "DEAD", "DEAD_E", 1000f, -1000f, -1, 1, 0, 0, 0, 0);
		_0x2208438012482A1A(Local_755[17 /*33*/], 1, 0);
		disable_ped_pain_audio(Local_755[17 /*33*/], 1);
		Local_755[18 /*33*/] = PED::CREATE_PED(26, joaat("a_m_y_methhead_01"), 2448.888f, 4971.561f, 45.8106f, 194.7676f, 1, true);
		task_play_anim(Local_755[18 /*33*/], "DEAD", "DEAD_G", 1000f, -1000f, -1, 1, 0, 0, 0, 0);
		_0x2208438012482A1A(Local_755[18 /*33*/], 1, 0);
		disable_ped_pain_audio(Local_755[18 /*33*/], 1);
		while (((!is_entity_playing_anim(Local_755[15 /*33*/], "DEAD", "DEAD_C", 3) || !is_entity_playing_anim(Local_755[16 /*33*/], "DEAD", "DEAD_D", 3)) || !is_entity_playing_anim(Local_755[17 /*33*/], "DEAD", "DEAD_E", 3)) || !is_entity_playing_anim(Local_755[18 /*33*/], "DEAD", "DEAD_G", 3))
		{
			func_28(54343, 1);
			if (((!is_ped_injured(Local_755[15 /*33*/]) && !is_ped_injured(Local_755[16 /*33*/])) && !is_ped_injured(Local_755[17 /*33*/])) && !is_ped_injured(Local_755[18 /*33*/]))
			{
			}
		}
		set_entity_health(Local_755[15 /*33*/], false);
		set_entity_health(Local_755[16 /*33*/], false);
		set_entity_health(Local_755[17 /*33*/], false);
		set_entity_health(Local_755[18 /*33*/], false);
		remove_anim_dict("DEAD");
	}
	func_32(23, 0);
	iVar0 = 0;
	set_bit(&iVar0, 3);
	set_bit(&iVar0, 8);
	set_bit(&iVar0, true);
	set_bit(&iVar0, 2);
	set_bit(&iVar0, 4);
	uLocal_2650 = create_pickup(joaat("pickup_health_standard"), 2446.896f, 4990.972f, 45.5477f, iVar0, -1, 1, false);
	if (!_0x0EAEB0DB4B132399(iLocal_2510))
	{
		iLocal_2510 = add_navmesh_blocking_object(2464.956f, 4990.051f, 44.48415f, 2.5f, 3.125f, 2.0625f, 0f, 0, 7);
	}
	iLocal_2651[0] = create_pickup_rotate(joaat("pickup_health_standard"), 2444.497f, 4975.956f, 50.565f, 0f, 0f, 100f, iVar0, -1, 2, 1, false);
	add_pickup_to_interior_room_by_name(iLocal_2651[0], "V_8_Bed1Rm");
	iLocal_2651[1] = create_pickup_rotate(joaat("pickup_health_standard"), 2443.4f, 4978.52f, 46.8107f, 0f, 0f, 100f, iVar0, -1, 2, 1, false);
	add_pickup_to_interior_room_by_name(iLocal_2651[1], "V_8_KitchnRm");
	iLocal_2651[3] = create_pickup_rotate(joaat("pickup_health_standard"), 2441.028f, 4963.851f, 46.5605f, 0f, 0f, -80.6f, iVar0, -1, 2, 1, false);
	add_pickup_to_interior_room_by_name(iLocal_2651[3], "V_8_StudyRm");
	iLocal_2651[4] = create_pickup_rotate(joaat("pickup_health_standard"), 2435.165f, 4971.467f, 45.91f, 0f, 0f, -50.4f, iVar0, -1, 2, 1, false);
	add_pickup_to_interior_room_by_name(iLocal_2651[4], "V_8_Hall2Rm");
	iVar0 = 0;
	set_bit(&iVar0, 2);
	set_bit(&iVar0, true);
	set_bit(&iVar0, 3);
	iLocal_2651[2] = create_pickup_rotate(joaat("pickup_weapon_sawnoffshotgun"), 2438.788f, 4970.79f, 50.565f, 0f, 0f, 0f, iVar0, -1, 2, 1, false);
	add_pickup_to_interior_room_by_name(iLocal_2651[2], "V_8_Bed1Rm");
}

void func_28(int iParam0, int iParam1)
{
	iParam0 = iParam0;
	iParam1 = iParam1;
	wait(0);
}

void func_29(int iParam0, int iParam1, int iParam2)
{
	auto uVar0;
	
	uVar0 = iParam2;
	Local_755[uVar0 /*33*/].f_1 = iParam0;
	Local_755[uVar0 /*33*/].f_3 = iParam1;
	Local_755[uVar0 /*33*/].f_2 = iParam2;
	Local_755[uVar0 /*33*/].f_5 = 0;
}

bool func_30(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_2515)
	{
		if (Local_2515[iVar0 /*6*/].f_1 == 1)
		{
			if (Local_2515[iVar0 /*6*/] == iParam0)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_31(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_2515)
	{
		if (Local_2515[iVar0 /*6*/] == iParam0)
		{
			Local_2515[iVar0 /*6*/].f_2 = -1;
			if (!iParam1)
			{
				Local_2515[iVar0 /*6*/].f_1 = 0;
			}
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_32(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_2515)
	{
		if (Local_2515[iVar0 /*6*/].f_1 == 1)
		{
			if (Local_2515[iVar0 /*6*/] == iParam0)
			{
				return false;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_2515)
	{
		if (Local_2515[iVar0 /*6*/].f_1 == 0)
		{
			Local_2515[iVar0 /*6*/].f_1 = 1;
			Local_2515[iVar0 /*6*/] = iParam0;
			Local_2515[iVar0 /*6*/].f_2 = 0;
			Local_2515[iVar0 /*6*/].f_3 = iParam1;
			Local_2515[iVar0 /*6*/].f_4 = 0;
			Local_2515[iVar0 /*6*/].f_5 = 0;
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_33(float fParam0, int iParam1)
{
	int iVar0;
	
	if (!is_ped_in_any_vehicle(player_ped_id(), 0))
	{
		return true;
	}
	iVar0 = get_vehicle_ped_is_in(player_ped_id(), 0);
	if (is_vehicle_driveable(iVar0, 0))
	{
		if (get_ped_in_vehicle_seat(iVar0, -1) == player_ped_id())
		{
			if (!is_vehicle_stopped(iVar0))
			{
				_task_bring_vehicle_to_halt(iVar0, fParam0, iParam1, 0);
				return false;
			}
		}
		else
		{
			return true;
		}
	}
	if (is_ped_stopped(player_ped_id()))
	{
		return true;
	}
	if (is_vehicle_driveable(iVar0, 0))
	{
		if (is_vehicle_stopped(iVar0))
		{
			return true;
		}
	}
	return false;
}

int func_34()
{
	return Global_91330.f_296 > 0;
}

bool func_35(char* sParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, char* sParam12, int iParam13)
{
	if (!iLocal_3687)
	{
		iLocal_3687 = 1;
		vLocal_3478[0 /*3*/] = iParam1;
		vLocal_3478[0 /*3*/].f_1 = iParam2;
		vLocal_3478[0 /*3*/].f_2 = sParam3;
		vLocal_3478[1 /*3*/] = iParam4;
		vLocal_3478[1 /*3*/].f_1 = iParam5;
		vLocal_3478[1 /*3*/].f_2 = sParam6;
		vLocal_3478[2 /*3*/] = iParam7;
		vLocal_3478[2 /*3*/].f_1 = iParam8;
		vLocal_3478[2 /*3*/].f_2 = sParam9;
		vLocal_3478[3 /*3*/] = iParam10;
		vLocal_3478[3 /*3*/].f_1 = iParam11;
		vLocal_3478[3 /*3*/].f_2 = sParam12;
		func_58(sParam0, iParam1, iParam4, iParam7, iParam10);
		func_55(iParam1, iParam2, sParam3);
		if (iParam4 != -1)
		{
			func_55(iParam4, iParam5, sParam6);
		}
		if (iParam7 != -1)
		{
			func_55(iParam7, iParam8, sParam9);
		}
		if (iParam10 != -1)
		{
			func_55(iParam10, iParam11, sParam12);
		}
		if (!func_53())
		{
			if (is_message_being_displayed() && is_subtitle_preference_switched_on())
			{
				if (func_36(&uLocal_3522, "CHI2AUD", sParam0, iParam13, 1, 0, 0))
				{
					iLocal_3491 = 1;
					return true;
				}
			}
			else if (func_36(&uLocal_3522, "CHI2AUD", sParam0, iParam13, 0, 0, 0))
			{
				iLocal_3491 = 0;
				return true;
			}
		}
	}
	return false;
}

int func_36(auto uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_52(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_37(sParam2, iParam3, 0);
}

bool func_37(char* sParam0, int iParam1, int iParam2)
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
					func_51();
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
		if (func_50(8, -1))
		{
			return false;
		}
		Global_15788 = {Global_15782};
		func_49();
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
				func_42();
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
				if (func_41())
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
			if (func_40())
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
			func_39();
			Global_15722 = iParam2;
		}
		Global_15714 = iParam1;
		StringCopy(&Global_15331, sParam0, 24);
		Global_14578 = 0;
		func_38();
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
		func_51();
	}
	return false;
}

void func_38()
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

void func_39()
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

bool func_40()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return true;
	}
	return false;
}

bool func_41()
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

void func_42()
{
	if (func_48(14))
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
		Global_14413 = func_43();
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

auto func_43()
{
	func_44();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_44()
{
	int iVar0;
	
	if (does_entity_exist(player_ped_id()))
	{
		if (func_47(Global_101154.f_1826.f_539.f_3549) != get_entity_model(player_ped_id()))
		{
			iVar0 = func_46(player_ped_id());
			if (func_45(iVar0) && (!func_48(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_45(Global_101154.f_1826.f_539.f_3549))
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

int func_45(int iParam0)
{
	return iParam0 < 3;
}

int func_46(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (does_entity_exist(iParam0))
	{
		iVar1 = get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_47(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_47(int iParam0)
{
	if (func_45(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_48(int iParam0)
{
	return Global_35711 == iParam0;
}

void func_49()
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

int func_50(int iParam0, int iParam1)
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

void func_51()
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

void func_52(auto uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

bool func_53()
{
	Vector3 vVar0;
	
	if (Global_14413.f_1 > 3)
	{
		return true;
	}
	if (func_54())
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

bool func_54()
{
	if (_get_number_of_instances_of_streamed_script(joaat("cellphone_flashhand")) > 0)
	{
		return true;
	}
	return false;
}

void func_55(int iParam0, int iParam1, char* sParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_3511)
	{
		if (iLocal_3511[iVar0] == iParam1)
		{
			func_57(&uLocal_3522, iVar0);
			iLocal_3511[iVar0] = 0;
		}
		iVar0++;
	}
	if (iLocal_3511[iParam0] != 0)
	{
		func_57(&uLocal_3522, iParam0);
	}
	func_56(&uLocal_3522, iParam0, iParam1, sParam2, 0, 1);
	iLocal_3511[iParam0] = iParam1;
}

void func_56(auto uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_57(auto uParam0, int iParam1)
{
	if (*(uParam0[iParam1 /*10*/]).f_7 == 1)
	{
		*(uParam0[iParam1 /*10*/]).f_7 = 0;
	}
}

void func_58(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	
	if (is_string_null_or_empty(sLocal_51) || !are_strings_equal(sLocal_51, sParam0))
	{
		sLocal_51 = sParam0;
		iVar0 = 0;
		while (iVar0 <= 15)
		{
			if (Local_89[iVar0 /*10*/].f_7)
			{
				if (((iVar0 != iParam1 && iVar0 != iParam2) && iVar0 != iParam3) && iVar0 != iParam4)
				{
					func_57(&Local_89, iVar0);
				}
			}
			iVar0++;
		}
	}
}

bool func_59()
{
	if (Global_15712 != 0 || is_scripted_conversation_ongoing())
	{
		return true;
	}
	return false;
}

bool func_60(char* sParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, char* sParam9)
{
	if (!is_message_being_displayed() || is_subtitle_preference_switched_on())
	{
		if (func_62(iParam1) != iParam2 || iParam2 == 0)
		{
			func_55(iParam1, iParam2, sParam3);
		}
		if (iParam4 != -1)
		{
			if (func_62(iParam4) != iParam5 || iParam5 == 0)
			{
				func_55(iParam4, iParam5, sParam6);
			}
		}
		if (iParam7 != -1)
		{
			if (func_62(iParam7) != iParam8 || iParam8 == 0)
			{
				func_55(iParam7, iParam8, sParam9);
			}
		}
		if (func_61(&uLocal_3522, 39, "CHI2AUD", sParam0, 9, 0, 0, 1))
		{
			return true;
		}
	}
	return false;
}

int func_61(auto uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	func_52(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
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
	Global_2621441 = 0;
	return func_37(sParam3, iParam4, iParam7);
}

auto func_62(int iParam0)
{
	return iLocal_3511[iParam0];
}

bool func_63(int iParam0)
{
	if ((Global_16826 || Global_16825) || Global_16827)
	{
		if (iParam0 == 130)
		{
		}
		else
		{
			return false;
		}
	}
	if (Global_117[iParam0 /*10*/].f_8 != 138)
	{
		if (Global_14413.f_1 == 10)
		{
			if (Global_1598 == iParam0)
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

void func_64()
{
	Global_14578 = 0;
	func_65();
}

void func_65()
{
	if (is_mobile_phone_call_ongoing() || Global_14412 == 1)
	{
		restart_scripted_conversation();
		Global_16723 = 0;
		stop_scripted_conversation(false);
		Global_15712 = 6;
		Global_14413.f_1 = Global_14415;
		return;
	}
}

void func_66()
{
	Global_14578 = 0;
	func_51();
}

float func_67(int iParam0, Vector3 vParam1, int iParam2)
{
	Vector3 vVar0;
	
	if (!is_entity_dead(iParam0, 0))
	{
		vVar0 = {get_entity_coords(iParam0, 1)};
	}
	else
	{
		vVar0 = {get_entity_coords(iParam0, 0)};
	}
	return get_distance_between_coords(vVar0, vParam1, iParam4);
}

bool func_68(int iParam0)
{
	if (does_entity_exist(iParam0))
	{
		if (is_vehicle_driveable(iParam0, 0))
		{
			return true;
		}
	}
	return false;
}

void func_69(Vector3 vParam0, Vector3 vParam1, float fParam2, Vector3 vParam3, Vector3 fParam4, Vector3 vParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	func_70(vParam0, vParam3, fParam6, vParam7, fParam10, vParam11, iParam14, iParam15, iParam16, iParam17, iParam18);
}

void func_70(Vector3 vParam0, Vector3 vParam1, float fParam2, Vector3 vParam3, Vector3 fParam4, Vector3 vParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	Vector3 vVar4;
	Vector3 vVar7;
	Vector3 vVar10;
	int iVar13;
	int iVar14;
	int iVar15;
	
	if (iParam15)
	{
		iParam15 = false;
	}
	iVar2 = true;
	iVar3 = 0;
	iVar0 = get_players_last_vehicle();
	if (does_entity_exist(iVar0))
	{
		if (!is_entity_a_mission_entity(iVar0))
		{
			set_entity_as_mission_entity(iVar0, true, 0);
			iVar3 = 1;
		}
		if (is_vehicle_driveable(iVar0, 0))
		{
			if (iParam18)
			{
				func_77(iVar0);
			}
			if (is_entity_in_angled_area(iVar0, vParam0, vParam3, fParam6, 0, true, 0))
			{
				iVar1 = true;
			}
			else
			{
				vVar10 = {get_entity_coords(iVar0, 1)};
				if ((vVar10.z > vParam0.z && vVar10.z < vParam3.z) || (vVar10.z > vParam3.z && vVar10.z < vParam0.z))
				{
					if (func_74(iVar0, vParam0, vParam3, fParam6))
					{
						iVar1 = true;
					}
				}
			}
			if (is_vehicle_driveable(iVar0, 0))
			{
				if (is_vehicle_model(iVar0, joaat("taxi")))
				{
					if (get_ped_in_vehicle_seat(iVar0, -1) != player_ped_id() && get_ped_in_vehicle_seat(iVar0, -1) != 0)
					{
						if (get_distance_between_coords(vParam0 + vParam3 / Vector(2f, 2f, 2f), get_entity_coords(iVar0, 1), 1) < 20f)
						{
							iVar1 = true;
							iVar2 = false;
						}
					}
				}
			}
			if (iParam16)
			{
				if (func_72(iVar0, func_43(), 1))
				{
					iVar1 = false;
				}
			}
			if (iVar1)
			{
				if (!func_71(vParam11))
				{
					if (is_vehicle_driveable(iVar0, 0))
					{
						iVar13 = get_entity_model(iVar0);
						_0xDF7E3EEB29642C38(iVar0, &vVar4, &vVar7);
						if (is_this_model_a_heli(iVar13))
						{
							vParam11.x += 3f;
							vParam11.y += 3f;
						}
						if (((iVar13 == joaat("zentorno") || iVar13 == joaat("btype")) || iVar13 == joaat("dubsta3")) || iVar13 == joaat("monster"))
						{
							vParam11 = {vParam11 * Vector(1.1f, 1.1f, 1.1f)};
						}
						else if (iVar13 == joaat("t20") || iVar13 == joaat("virgo"))
						{
							vParam11 = {vParam11 * Vector(1.2f, 1.2f, 1.2f)};
						}
						if (vVar7.x - vVar4.x > vParam11.x)
						{
							iVar2 = false;
						}
						else if (vVar7.y - vVar4.y > vParam11.y)
						{
							iVar2 = false;
						}
						else if (vVar7.z - vVar4.z > vParam11.z)
						{
							iVar2 = false;
						}
					}
				}
				if (is_vehicle_driveable(iVar0, 0))
				{
					if (iVar2)
					{
						clear_area_of_vehicles(vParam7, 5f, 0, 0, 0, 0, false);
						set_entity_heading(iVar0, fParam10);
						set_entity_coords(iVar0, vParam7, 1, false, 0, 1);
						set_vehicle_on_ground_properly(iVar0);
						if (iParam17)
						{
							set_vehicle_engine_on(iVar0, false, 1, 0);
							set_vehicle_doors_shut(iVar0, 1);
						}
					}
					else
					{
						if (!is_entity_a_mission_entity(iVar0) || !does_entity_belong_to_this_script(iVar0, 1))
						{
							set_entity_as_mission_entity(iVar0, true, 1);
						}
						if (is_ped_in_vehicle(player_ped_id(), iVar0, 0))
						{
							set_entity_coords(player_ped_id(), get_entity_coords(iVar0, 1), 1, false, 0, 1);
						}
						delete_vehicle(&iVar0);
					}
				}
			}
			if (iParam14)
			{
				clear_angled_area_of_vehicles(vParam0, vParam3, fParam6, 0, 0, 0, 0, 0);
			}
			if (iVar3 == 1)
			{
				if (does_entity_exist(iVar0))
				{
					if (is_entity_a_mission_entity(iVar0))
					{
						set_vehicle_as_no_longer_needed(&iVar0);
					}
				}
			}
		}
		else
		{
			if (!is_entity_a_mission_entity(iVar0))
			{
				set_entity_as_mission_entity(iVar0, true, 0);
			}
			iVar14 = get_ped_in_vehicle_seat(iVar0, -1);
			if (does_entity_exist(iVar14) && !is_ped_injured(iVar14))
			{
				set_entity_coords(iVar14, get_entity_coords(iVar14, 1), 1, false, 0, 1);
			}
			iVar15 = _get_vehicle_model_max_number_of_passengers(get_entity_model(iVar0));
			if (iVar15 <= 2)
			{
				iVar14 = get_ped_in_vehicle_seat(iVar0, false);
				if (does_entity_exist(iVar14) && !is_ped_injured(iVar14))
				{
					set_entity_coords(iVar14, get_entity_coords(iVar14, 1), 1, false, 0, 1);
				}
			}
			if (iVar15 <= 4)
			{
				iVar14 = get_ped_in_vehicle_seat(iVar0, true);
				if (does_entity_exist(iVar14) && !is_ped_injured(iVar14))
				{
					set_entity_coords(iVar14, get_entity_coords(iVar14, 1), 1, false, 0, 1);
				}
				iVar14 = get_ped_in_vehicle_seat(iVar0, 2);
				if (does_entity_exist(iVar14) && !is_ped_injured(iVar14))
				{
					set_entity_coords(iVar14, get_entity_coords(iVar14, 1), 1, false, 0, 1);
				}
			}
			delete_vehicle(&iVar0);
		}
	}
}

bool func_71(Vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_72(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	char* sVar1;
	auto uVar9;
	
	if (!does_entity_exist(iParam0) || !is_vehicle_driveable(iParam0, 0))
	{
		return false;
	}
	iVar0 = 0;
	while (func_73(iParam1, iVar0, &sVar1, &uVar9))
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

bool func_73(int iParam0, int iParam1, char* sParam2, auto uParam3)
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

bool func_74(int iParam0, Vector3 vParam1, Vector3 vParam2, float fParam3)
{
	Vector3 vVar0;
	Vector3 vVar3;
	Vector3 vVar6;
	Vector3 vVar9;
	Vector3 vVar12;
	Vector3 vVar15;
	Vector3[] vVar18 = new Vector3[4];
	struct<2> Var31;
	struct<2> Var34;
	
	if (is_vehicle_driveable(iParam0, 0))
	{
		vParam1.z = vParam4.z;
		vVar0 = {func_76(vParam1 - vParam4)};
		vVar3 = {vVar0};
		vVar0.x = -vVar3.y;
		vVar0.y = vVar3.x;
		vVar0.z = 0f;
		vVar6 = {vParam1 - vVar0 * Vector(fParam7 / 2f, fParam7 / 2f, fParam7 / 2f)};
		vVar9 = {vParam1 + vVar0 * Vector(fParam7 / 2f, fParam7 / 2f, fParam7 / 2f)};
		vVar12 = {vParam4 - vVar0 * Vector(fParam7 / 2f, fParam7 / 2f, fParam7 / 2f)};
		vVar15 = {vParam4 + vVar0 * Vector(fParam7 / 2f, fParam7 / 2f, fParam7 / 2f)};
		get_model_dimensions(get_entity_model(iParam0), &Var31, &Var34);
		vVar18[0 /*3*/] = {get_offset_from_entity_in_world_coords(iParam0, Var31, Var31.f_1, 0f)};
		vVar18[1 /*3*/] = {get_offset_from_entity_in_world_coords(iParam0, Var31, Var34.f_1, 0f)};
		vVar18[2 /*3*/] = {get_offset_from_entity_in_world_coords(iParam0, Var34, Var31.f_1, 0f)};
		vVar18[3 /*3*/] = {get_offset_from_entity_in_world_coords(iParam0, Var34, Var34.f_1, 0f)};
		if (((((((((((((((func_75(vVar18[0 /*3*/], vVar18[1 /*3*/], vVar6, vVar9) || func_75(vVar18[0 /*3*/], vVar18[1 /*3*/], vVar9, vVar15)) || func_75(vVar18[0 /*3*/], vVar18[1 /*3*/], vVar12, vVar15)) || func_75(vVar18[0 /*3*/], vVar18[1 /*3*/], vVar6, vVar12)) || func_75(vVar18[1 /*3*/], vVar18[3 /*3*/], vVar6, vVar9)) || func_75(vVar18[1 /*3*/], vVar18[3 /*3*/], vVar9, vVar15)) || func_75(vVar18[1 /*3*/], vVar18[3 /*3*/], vVar12, vVar15)) || func_75(vVar18[1 /*3*/], vVar18[3 /*3*/], vVar6, vVar12)) || func_75(vVar18[3 /*3*/], vVar18[2 /*3*/], vVar6, vVar9)) || func_75(vVar18[3 /*3*/], vVar18[2 /*3*/], vVar9, vVar15)) || func_75(vVar18[3 /*3*/], vVar18[2 /*3*/], vVar12, vVar15)) || func_75(vVar18[3 /*3*/], vVar18[2 /*3*/], vVar6, vVar12)) || func_75(vVar18[2 /*3*/], vVar18[0 /*3*/], vVar6, vVar9)) || func_75(vVar18[2 /*3*/], vVar18[0 /*3*/], vVar9, vVar15)) || func_75(vVar18[2 /*3*/], vVar18[0 /*3*/], vVar12, vVar15)) || func_75(vVar18[2 /*3*/], vVar18[0 /*3*/], vVar6, vVar12))
		{
			return true;
		}
	}
	return false;
}

bool func_75(struct<2> Param0, auto uParam1, struct<2> Param2, auto uParam3, struct<2> Param4, auto uParam5, struct<2> Param6, auto uParam7)
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
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	
	fVar0 = Param0;
	fVar1 = Param0.f_1;
	fVar2 = Param3;
	fVar3 = Param3.f_1;
	fVar4 = Param6;
	fVar5 = Param6.f_1;
	fVar6 = Param9;
	fVar7 = Param9.f_1;
	fVar8 = fVar2 - fVar0;
	fVar9 = fVar3 - fVar1;
	fVar10 = fVar6 - fVar4;
	fVar11 = fVar7 - fVar5;
	fVar12 = -fVar9 * fVar0 - fVar4 + fVar8 * fVar1 - fVar5 / -fVar10 * fVar9 + fVar8 * fVar11;
	fVar13 = fVar10 * fVar1 - fVar5 - fVar11 * fVar0 - fVar4 / -fVar10 * fVar9 + fVar8 * fVar11;
	if (((fVar12 >= 0f && fVar12 <= 1f) && fVar13 >= 0f) && fVar13 <= 1f)
	{
		return true;
	}
	return false;
}

Vector3 func_76(Vector3 vParam0)
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

void func_77(int iParam0)
{
	if (does_entity_exist(iParam0))
	{
		if (is_vehicle_driveable(iParam0, 0))
		{
			if (get_vehicle_engine_health(iParam0) <= 200f)
			{
				set_vehicle_engine_health(iParam0, 500f);
			}
			if (get_vehicle_petrol_tank_health(iParam0) <= 700f)
			{
				set_vehicle_engine_health(iParam0, 900f);
			}
			if (get_entity_health(iParam0) < 200)
			{
				set_vehicle_engine_health(iParam0, 500f);
			}
		}
	}
}

void func_78()
{
	if (iLocal_2511 >= 3)
	{
		if (iLocal_2511 > 3)
		{
			func_103(&Local_1619, &vLocal_2274, vLocal_2253, vLocal_2256, vLocal_2259, vLocal_2262, vLocal_2250, vLocal_2271, vLocal_2244, vLocal_2247, vLocal_2265, vLocal_2268);
		}
		func_79();
	}
}

void func_79()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = 0;
	while (iVar0 < Local_1619)
	{
		if ((!is_ped_injured(Local_755[iVar0 /*33*/]) && !is_ped_dead_or_dying(Local_755[iVar0 /*33*/], 1)) || Local_1619[iVar0 /*24*/].f_3 == 1)
		{
			switch (Local_1619[iVar0 /*24*/].f_3)
			{
				case 1:
					switch (Local_755[iVar0 /*33*/].f_1)
					{
						case 1:
							switch (Local_755[iVar0 /*33*/].f_2)
							{
								case 2:
									if (func_101(iVar0, joaat("a_m_m_hillbilly_01"), 2451.818f, 4985.704f, 50.5678f, 227.842f, joaat("weapon_assaultrifle"), 1, 0))
									{
										func_100(&Local_1619, iVar0, Local_755[iVar0 /*33*/], 0, 1, 0);
										func_99(iVar0, 5, 0, 0);
									}
									break;
								
								case 1:
									if (func_101(iVar0, joaat("a_m_m_hillbilly_01"), 2455.085f, 4974.466f, 50.5677f, 246.051f, joaat("weapon_assaultrifle"), 1, 0))
									{
										func_100(&Local_1619, iVar0, Local_755[iVar0 /*33*/], 0, 1, 0);
										func_99(iVar0, 14, 0, 0);
									}
									break;
								
								case 6:
									if (func_101(iVar0, joaat("a_m_m_hillbilly_02"), 2461.609f, 4993.675f, 44.9821f, -90f, joaat("weapon_assaultrifle"), 1, 0))
									{
										func_100(&Local_1619, iVar0, Local_755[iVar0 /*33*/], 0, 0, 0);
										func_99(iVar0, 7, 0, 0);
										Local_755[iVar0 /*33*/].f_4 = 7;
									}
									break;
								
								case 7:
									if (func_101(iVar0, joaat("a_m_m_hillbilly_01"), 2462.887f, 4993.614f, 44.9474f, 89.8899f, joaat("weapon_assaultrifle"), 1, 0))
									{
										func_100(&Local_1619, iVar0, Local_755[iVar0 /*33*/], 0, 0, 0);
										func_99(iVar0, 7, 1, 0);
										Local_755[iVar0 /*33*/].f_4 = 7;
									}
									break;
								
								case 3:
									if (func_101(iVar0, joaat("a_m_y_methhead_01"), 2460.651f, 4970.813f, 45.5765f, 240.2054f, joaat("weapon_assaultrifle"), 0, 0))
									{
										func_100(&Local_1619, iVar0, Local_755[iVar0 /*33*/], 1, 0, 0);
										func_99(iVar0, 16, 0, 0);
									}
									break;
								
								case 0:
									if (func_101(iVar0, joaat("a_m_y_methhead_01"), 2443.138f, 4966.709f, 50.5677f, 246.051f, joaat("weapon_assaultrifle"), 1, 0))
									{
										func_100(&Local_1619, iVar0, Local_755[iVar0 /*33*/], 1, 1, 0);
										func_99(iVar0, 15, 0, 0);
									}
									break;
								
								case 4:
									if (iLocal_2511 == 3)
									{
										if (func_101(iVar0, joaat("a_m_m_hillbilly_02"), 2457.098f, 4954.283f, 44.1304f, 316.5498f, joaat("weapon_pistol"), 0, 0))
										{
											Local_755[iVar0 /*33*/].f_20 = create_object(joaat("prop_cs_fertilizer"), 2460.098f, 4957.283f, 44.1304f, 1, true, false);
											Local_755[iVar0 /*33*/].f_5 = 1;
											func_99(iVar0, 3, 0, 0);
										}
									}
									else if (func_101(iVar0, joaat("a_m_m_hillbilly_02"), 2478.32f, 4982.325f, 44.8913f, 49.5021f, joaat("weapon_pistol"), 0, 0))
									{
										func_100(&Local_1619, iVar0, Local_755[iVar0 /*33*/], 0, 0, 0);
										Local_755[iVar0 /*33*/].f_20 = create_object(joaat("prop_cs_fertilizer"), 2478.444f, 4976.921f, 44.5614f, 1, true, false);
										Local_755[iVar0 /*33*/].f_5 = 1;
										func_99(iVar0, 2, 0, 0);
									}
									break;
								
								case 5:
									if (iLocal_2511 == 3)
									{
										if (func_101(iVar0, joaat("a_m_m_hillbilly_02"), 2454.753f, 4951.719f, 44.1445f, 316.5541f, joaat("weapon_pistol"), 0, 0))
										{
											Local_755[iVar0 /*33*/].f_20 = create_object(joaat("prop_cs_fertilizer"), 2455.753f, 4952.719f, 44.1445f, 1, true, false);
											Local_755[iVar0 /*33*/].f_5 = 1;
											func_99(iVar0, 3, 0, 0);
										}
									}
									else if (func_101(iVar0, joaat("a_m_m_hillbilly_01"), 2475.873f, 4984.426f, 45.0916f, 45.8993f, joaat("weapon_pistol"), 0, 0))
									{
										func_100(&Local_1619, iVar0, Local_755[iVar0 /*33*/], 0, 0, 0);
										Local_755[iVar0 /*33*/].f_20 = create_object(joaat("prop_cs_fertilizer"), 2476.582f, 4978.492f, 44.5734f, 1, true, false);
										Local_755[iVar0 /*33*/].f_5++;
										func_99(iVar0, 2, 0, 0);
									}
									break;
								
								case 8:
									if (func_101(iVar0, joaat("a_m_m_hillbilly_02"), 2505.451f, 4970.663f, 43.548f, 49.5021f, joaat("weapon_pistol"), 1, 0))
									{
										func_100(&Local_1619, iVar0, Local_755[iVar0 /*33*/], 0, 0, 0);
										Local_755[iVar0 /*33*/].f_14 = create_synchronized_scene(2505.451f, 4970.663f, 43.548f, 0f, 0f, 88.725f, 2);
										func_98(Local_755[iVar0 /*33*/], 20f, 5f, 90f, -90f, 60f);
										set_ambient_voice_name(Local_755[iVar0 /*33*/], "A_M_M_HillBilly_02_WHITE_MINI_02");
										task_synchronized_scene(Local_755[iVar0 /*33*/], Local_755[iVar0 /*33*/].f_14, "misschinese2_bank5", "peds_shootcans_a", 1000f, -4f, 1, 0, 1000f, 0);
										set_synchronized_scene_looped(Local_755[iVar0 /*33*/].f_14, true);
										_0x2208438012482A1A(Local_755[iVar0 /*33*/], 0, 0);
										func_99(iVar0, 4, 0, Local_755[iVar0 /*33*/].f_14);
										func_32(7, 0);
									}
									break;
								
								case 9:
									if (func_101(iVar0, joaat("a_m_m_hillbilly_01"), 2505.451f, 4970.663f, 43.548f, 49.5021f, joaat("weapon_pistol"), 1, 0))
									{
										Local_755[iVar0 /*33*/].f_14 = create_synchronized_scene(2507.879f, 4970.188f, 43.5f, 0f, 0f, 93.42f, 2);
										set_synchronized_scene_looped(Local_755[iVar0 /*33*/].f_14, true);
										func_100(&Local_1619, iVar0, Local_755[iVar0 /*33*/], 0, 0, 0);
										task_synchronized_scene(Local_755[iVar0 /*33*/], Local_755[iVar0 /*33*/].f_14, "misschinese2_bank5", "peds_shootcans_b", 1000f, -4f, 1, 0, 1000f, 0);
										_0x2208438012482A1A(Local_755[iVar0 /*33*/], 0, 0);
										func_99(iVar0, 4, 0, Local_755[iVar0 /*33*/].f_14);
									}
									break;
							}
							if (does_entity_exist(Local_755[iVar0 /*33*/]))
							{
								set_entity_load_collision_flag(Local_755[iVar0 /*33*/], true);
								set_ped_to_load_cover(Local_755[iVar0 /*33*/], 1);
							}
							break;
						
						case 2:
							switch (Local_755[iVar0 /*33*/].f_2)
							{
								case 10:
									if (iLocal_2511 < 5)
									{
										if (func_101(iVar0, joaat("a_m_m_hillbilly_01"), 2458.57f, 4987.584f, 45.8107f, 233.842f, joaat("weapon_pistol"), 0, 0))
										{
											func_99(iVar0, 14, 0, 0);
											func_100(&Local_1619, iVar0, Local_755[iVar0 /*33*/], 0, 1, 0);
										}
									}
									else if (func_101(iVar0, joaat("a_m_m_hillbilly_01"), 2454.627f, 4995.726f, 45.2011f, 233.842f, joaat("weapon_pistol"), 0, 0))
									{
										func_100(&Local_1619, iVar0, Local_755[iVar0 /*33*/], 0, 1, 0);
										func_99(iVar0, 23, 0, 0);
									}
									break;
								
								case 11:
									if (iLocal_2511 < 5)
									{
										if (func_101(iVar0, joaat("a_m_y_methhead_01"), 2442.994f, 4985.164f, 45.8103f, 303.409f, joaat("weapon_microsmg"), 0, 0))
										{
											func_100(&Local_1619, iVar0, Local_755[iVar0 /*33*/], 1, 1, 0);
											func_99(iVar0, 14, 0, 0);
										}
									}
									else if (func_101(iVar0, joaat("a_m_y_methhead_01"), 2450.371f, 4995.103f, 44.9282f, 303.409f, joaat("weapon_microsmg"), 0, 0))
									{
										func_100(&Local_1619, iVar0, Local_755[iVar0 /*33*/], 1, 1, 0);
										func_99(iVar0, 23, 0, 0);
									}
									break;
								
								case 12:
									if (func_101(iVar0, joaat("a_m_y_methhead_01"), 2433.124f, 4967.804f, 46.293f, 63.7673f, joaat("weapon_pumpshotgun"), 0, 1))
									{
										func_99(iVar0, 25, 0, 0);
										func_100(&Local_1619, iVar0, Local_755[iVar0 /*33*/], 0, 1, 0);
									}
									break;
								
								case 13:
									if (func_101(iVar0, joaat("a_m_m_hillbilly_02"), 2432.091f, 4968.833f, 46.298f, 63.7673f, joaat("weapon_pistol"), 0, 1))
									{
										func_99(iVar0, 25, 0, 0);
										func_100(&Local_1619, iVar0, Local_755[iVar0 /*33*/], 0, 1, 0);
									}
									break;
								
								case 14:
									if (func_101(iVar0, joaat("a_m_m_hillbilly_01"), 2431.485f, 4964.779f, 45.8106f, -137.5f, joaat("weapon_pistol"), 0, 1))
									{
										func_99(iVar0, 25, 0, 0);
										func_100(&Local_1619, iVar0, Local_755[iVar0 /*33*/], 0, 1, 0);
									}
									break;
								
								case 15:
									if (func_101(iVar0, joaat("a_m_y_methhead_01"), 2440.385f, 4965.429f, 45.8106f, 63.7673f, joaat("weapon_pumpshotgun"), 0, 1))
									{
										func_99(iVar0, 25, 0, 0);
										func_100(&Local_1619, iVar0, Local_755[iVar0 /*33*/], 0, 1, 0);
									}
									break;
								
								case 16:
									if (func_101(iVar0, joaat("a_m_m_hillbilly_02"), 2439.741f, 4964.89f, 45.8106f, 130.3988f, joaat("weapon_microsmg"), 0, 1))
									{
										func_99(iVar0, 25, 0, 0);
										func_100(&Local_1619, iVar0, Local_755[iVar0 /*33*/], 0, 1, 0);
									}
									break;
								
								case 17:
									if (func_101(iVar0, joaat("a_m_m_hillbilly_01"), 2438.707f, 4964.094f, 45.8106f, 127.6523f, joaat("weapon_pistol"), 0, 1))
									{
										set_ped_accuracy(Local_755[iVar0 /*33*/], 5);
										func_99(iVar0, 25, 0, 0);
										func_100(&Local_1619, iVar0, Local_755[iVar0 /*33*/], 0, 1, 0);
									}
									break;
								
								case 18:
									if (iLocal_2511 < 5)
									{
										if (func_101(iVar0, joaat("a_m_m_hillbilly_01"), 2440.929f, 4976.921f, 45.8106f, -130f, joaat("weapon_pistol"), 0, 1))
										{
											func_99(iVar0, 7, 0, 0);
											Local_755[iVar0 /*33*/].f_4 = 7;
											func_100(&Local_1619, iVar0, Local_755[iVar0 /*33*/], 0, 0, 0);
										}
									}
									else if (func_101(iVar0, joaat("a_m_m_hillbilly_01"), 2452.052f, 4956.689f, 43.8957f, 230.7673f, joaat("weapon_pistol"), 0, 1))
									{
										func_99(iVar0, 23, 0, 0);
										func_100(&Local_1619, iVar0, Local_755[iVar0 /*33*/], 0, 0, 0);
									}
									break;
								
								case 19:
									if (iLocal_2511 < 5)
									{
										if (func_101(iVar0, joaat("a_m_m_hillbilly_02"), 2442.926f, 4975.148f, 45.8106f, 46.7673f, joaat("weapon_pistol"), 0, 1))
										{
											func_99(iVar0, 7, 0, 0);
											func_100(&Local_1619, iVar0, Local_755[iVar0 /*33*/], 0, 0, 0);
											Local_755[iVar0 /*33*/].f_4 = 7;
										}
									}
									else if (func_101(iVar0, joaat("a_m_m_hillbilly_02"), 2449.338f, 4954.127f, 43.9299f, 46.7673f, joaat("weapon_pistol"), 0, 1))
									{
										func_100(&Local_1619, iVar0, Local_755[iVar0 /*33*/], 0, 0, 0);
										func_99(iVar0, 23, 0, 0);
									}
									break;
								
								case 20:
									if (func_101(iVar0, joaat("a_m_m_hillbilly_01"), 2449.114f, 4981.984f, 45.8102f, 130.7673f, joaat("weapon_microsmg"), 0, 1))
									{
										func_99(iVar0, 7, 0, 0);
										Local_755[iVar0 /*33*/].f_4 = 32;
										func_100(&Local_1619, iVar0, Local_755[iVar0 /*33*/], 1, 0, 0);
									}
									break;
								
								case 21:
									if (func_101(iVar0, joaat("a_m_m_hillbilly_02"), 2447.553f, 4980.515f, 45.8096f, 311.7673f, joaat("weapon_microsmg"), 0, 1))
									{
										func_99(iVar0, 7, 0, 0);
										Local_755[iVar0 /*33*/].f_4 = 7;
										func_100(&Local_1619, iVar0, Local_755[iVar0 /*33*/], 1, 0, 0);
									}
									break;
							}
							if (!is_ped_injured(Local_755[iVar0 /*33*/]))
							{
								set_entity_load_collision_flag(Local_755[iVar0 /*33*/], true);
							}
							break;
						
						case 5:
							switch (Local_755[iVar0 /*33*/].f_2)
							{
								case 22:
									if (func_101(iVar0, joaat("a_m_m_hillbilly_01"), 2439.258f, 4976.201f, 45.8106f, 116.815f, joaat("weapon_unarmed"), 0, 1))
									{
										func_99(iVar0, 28, 0, 0);
									}
									break;
								
								case 23:
									if (func_101(iVar0, joaat("a_m_y_methhead_01"), 2433.292f, 4968.534f, 42.348f, 105.5f, joaat("weapon_unarmed"), 0, 1))
									{
										func_99(iVar0, 30, 0, 0);
									}
									break;
							}
							break;
					}
					if (!is_ped_injured(Local_755[iVar0 /*33*/]))
					{
						_0x3910051CCECDB00C(Local_755[iVar0 /*33*/], true);
						Local_1619[iVar0 /*24*/].f_3 = 3;
						iVar0--;
					}
					break;
				
				case 3:
					if (Local_1619[iVar0 /*24*/].f_3 <= 3)
					{
						switch (Local_755[iVar0 /*33*/].f_3)
						{
							case 3:
								switch (Local_755[iVar0 /*33*/].f_5)
								{
									case 0:
										if (does_entity_exist(Local_755[iVar0 /*33*/].f_20))
										{
											if (does_entity_have_drawable(Local_755[iVar0 /*33*/].f_20) && does_entity_have_physics(Local_755[iVar0 /*33*/].f_20))
											{
												attach_entity_to_entity(Local_755[iVar0 /*33*/].f_20, Local_755[iVar0 /*33*/], get_ped_bone_index(Local_755[iVar0 /*33*/], 60309), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
												Local_755[iVar0 /*33*/].f_5++;
											}
											if (does_entity_exist(Local_755[iVar0 /*33*/].f_20))
											{
												if (Local_755[iVar0 /*33*/].f_2 == 4)
												{
													task_play_anim(Local_755[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", 1000f, -1f, -1, 1, 0, 0, 0, 0);
												}
												else
												{
													task_play_anim(Local_755[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", 1000f, -1f, -1, 1, 0, 0, 0, 0);
												}
												set_entity_load_collision_flag(Local_755[iVar0 /*33*/], true);
												_0x2208438012482A1A(Local_755[iVar0 /*33*/], 0, 0);
												Local_755[iVar0 /*33*/].f_5++;
											}
										}
										break;
									
									case 1:
										break;
								}
								break;
							
							case 2:
								if (Local_755[iVar0 /*33*/].f_5 < 7)
								{
									func_97(Local_755[iVar0 /*33*/], &(Local_755[iVar0 /*33*/].f_25), -1, 0, 1, 0, -1082130432, 0, -1);
								}
								if (is_entity_playing_anim(Local_755[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", 3))
								{
									set_entity_anim_speed(Local_755[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", 1.4f);
								}
								if (is_entity_playing_anim(Local_755[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", 3))
								{
									set_entity_anim_speed(Local_755[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", 1.4f);
								}
								if (does_entity_exist(Local_755[iVar0 /*33*/].f_20))
								{
									if (Local_755[iVar0 /*33*/].f_5 > 2 && Local_755[iVar0 /*33*/].f_5 <= 6)
									{
										if (is_entity_attached(Local_755[iVar0 /*33*/].f_20))
										{
											Local_755[iVar0 /*33*/].f_12 = func_96(get_entity_coords(Local_755[iVar0 /*33*/], 1), Local_755[iVar0 /*33*/].f_6, 1) - get_entity_heading(Local_755[iVar0 /*33*/]);
											Local_755[iVar0 /*33*/].f_12 = func_95(Local_755[iVar0 /*33*/].f_12 / 4f, -15f, 15f);
											if (!is_ped_ragdoll(Local_755[iVar0 /*33*/]))
											{
												set_entity_heading(Local_755[iVar0 /*33*/], get_entity_heading(Local_755[iVar0 /*33*/]) + timestep() * Local_755[iVar0 /*33*/].f_12);
											}
										}
									}
								}
								switch (Local_755[iVar0 /*33*/].f_5)
								{
									case 0:
										if (does_entity_exist(Local_755[iVar0 /*33*/].f_20))
										{
											if (does_entity_have_drawable(Local_755[iVar0 /*33*/].f_20) && does_entity_have_physics(Local_755[iVar0 /*33*/].f_20))
											{
												attach_entity_to_entity(Local_755[iVar0 /*33*/].f_20, Local_755[iVar0 /*33*/], get_ped_bone_index(Local_755[iVar0 /*33*/], 60309), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
												func_32(20, 0);
												Local_755[iVar0 /*33*/].f_5++;
											}
										}
									
									case 1:
										if (does_entity_exist(Local_755[iVar0 /*33*/].f_20))
										{
											if (func_67(Local_755[iVar0 /*33*/], 2495.779f, 5004.715f, 43.87337f, 1) < 99f)
											{
												if (Local_755[iVar0 /*33*/].f_2 == 4)
												{
													task_play_anim(Local_755[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", 1000f, -1f, -1, 1, 0, 0, 0, 0);
												}
												else
												{
													task_play_anim(Local_755[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", 1000f, -1f, -1, 1, 0, 0, 0, 0);
												}
												_0x2208438012482A1A(Local_755[iVar0 /*33*/], 0, 0);
												set_entity_load_collision_flag(Local_755[iVar0 /*33*/], true);
												Local_755[iVar0 /*33*/].f_5++;
											}
										}
										break;
									
									case 2:
										if (is_entity_playing_anim(Local_755[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", 3) || is_entity_playing_anim(Local_755[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", 3))
										{
											Local_755[iVar0 /*33*/].f_6 = {2466.903f, 4996.254f, 45.5443f};
											Local_755[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 3:
										if (is_entity_at_coord(Local_755[iVar0 /*33*/], Local_755[iVar0 /*33*/].f_6, 1.5f, 1.5f, 2f, false, true, 0))
										{
											Local_755[iVar0 /*33*/].f_6 = {2461.332f, 4998.94f, 45.359f};
											Local_755[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 4:
										if (is_entity_at_coord(Local_755[iVar0 /*33*/], Local_755[iVar0 /*33*/].f_6, 1.5f, 1.5f, 2f, false, true, 0))
										{
											Local_755[iVar0 /*33*/].f_6 = {2455.984f, 4997.404f, 45.2645f};
											Local_755[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 5:
										if (is_entity_at_coord(Local_755[iVar0 /*33*/], Local_755[iVar0 /*33*/].f_6, 1.5f, 1.5f, 2f, false, true, 0))
										{
											if (Local_755[iVar0 /*33*/].f_2 == 5)
											{
												Local_755[iVar0 /*33*/].f_6 = {2452.091f, 4993.674f, 45.1404f};
												Local_755[iVar0 /*33*/].f_5++;
											}
											else
											{
												Local_755[iVar0 /*33*/].f_6 = {2454.091f, 4995.674f, 45.1404f};
												Local_755[iVar0 /*33*/].f_5++;
											}
										}
										break;
									
									case 6:
										if (is_entity_at_coord(Local_755[iVar0 /*33*/], Local_755[iVar0 /*33*/].f_6, 1.5f, 1.5f, 2f, false, true, 0))
										{
											if (is_entity_playing_anim(Local_755[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", 3))
											{
												stop_anim_task(Local_755[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", -1.5f);
											}
											if (is_entity_playing_anim(Local_755[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", 3))
											{
												stop_anim_task(Local_755[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", -1.5f);
											}
											Local_755[iVar0 /*33*/].f_6 = {0f, 0f, 0f};
											if (does_entity_exist(Local_755[iVar0 /*33*/].f_20))
											{
												detach_entity(Local_755[iVar0 /*33*/].f_20, 0, true);
											}
											if (func_68(iLocal_2507))
											{
												if (Local_755[iVar0 /*33*/].f_2 == 4)
												{
													set_ped_movement_clipset(Local_755[iVar0 /*33*/], "move_m@gangster@var_e", 0.25f);
													task_enter_vehicle(Local_755[iVar0 /*33*/], iLocal_2507, -1, -1, 1f, 1, 0);
													func_99(func_18(6), 14, 0, 0);
													func_99(func_18(7), 33, 0, 0);
												}
												else
												{
													set_ped_movement_clipset(Local_755[iVar0 /*33*/], "move_m@gangster@var_f", 0.25f);
													task_enter_vehicle(Local_755[iVar0 /*33*/], iLocal_2507, -1, false, 1f, 1, 0);
												}
											}
											Local_755[iVar0 /*33*/].f_5++;
											Local_755[iVar0 /*33*/].f_14 = 0;
											Local_755[iVar0 /*33*/].f_15 = 0;
										}
										break;
									
									case 7:
										func_94(iVar0);
										if (is_ped_in_any_vehicle(Local_755[iVar0 /*33*/], 0))
										{
											set_entity_load_collision_flag(Local_755[iVar0 /*33*/], false);
											Local_755[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 8:
										if (func_68(iLocal_2507))
										{
											if (!is_vehicle_seat_free(iLocal_2507, -1))
											{
												if (Local_755[iVar0 /*33*/].f_2 == 4)
												{
													if (!is_vehicle_seat_free(iLocal_2507, false))
													{
														iVar1 = func_18(5);
														if (iVar1 >= 0)
														{
															if (!is_ped_injured(Local_755[iVar1 /*33*/]))
															{
																if (is_ped_sitting_in_any_vehicle(Local_755[iVar1 /*33*/]))
																{
																	func_93();
																	task_vehicle_drive_to_coord(false, iLocal_2507, 2367.668f, 5098.645f, 46.8185f, 12f, 0, joaat("burrito"), 786599, 5f, 5f);
																	task_vehicle_drive_wander(false, iLocal_2507, 19f, 786599);
																	func_92(&(Local_755[iVar0 /*33*/]), 0);
																	func_91(25, 1);
																	Local_755[iVar0 /*33*/].f_5++;
																}
															}
														}
													}
												}
											}
											if (!is_vehicle_seat_free(iLocal_2507, false))
											{
												if (Local_755[iVar0 /*33*/].f_2 == 5)
												{
													Local_755[iVar0 /*33*/].f_5++;
												}
											}
										}
										break;
									
									case 9:
										break;
								}
								break;
							
							case 5:
								switch (Local_755[iVar0 /*33*/].f_5)
								{
									case 0:
										func_93();
										task_follow_nav_mesh_to_coord(false, 2459.646f, 4977.735f, 50.5678f, 1f, 20000, 0.25f, 0, 40000f);
										task_follow_nav_mesh_to_coord(false, 2456.221f, 4974.685f, 50.5678f, 1f, 20000, 0.25f, 0, 40000f);
										task_ped_slide_to_coord(false, 2456.221f, 4974.685f, 50.5678f, 92.5678f, 0.75f);
										task_achieve_heading(false, 92.5678f, 0);
										func_92(&(Local_755[iVar0 /*33*/]), 0);
										Local_755[iVar0 /*33*/].f_5++;
										break;
									
									case 1:
										if (get_script_task_status(Local_755[iVar0 /*33*/], 242628503) == 7)
										{
											func_99(iVar0, 7, 0, 9000);
											iVar2 = 1;
											if (iVar2 != -1)
											{
												func_99(iVar2, 7, 0, 9000);
											}
										}
										break;
									
									case 2:
										func_93();
										task_follow_nav_mesh_to_coord(false, 2450.491f, 4986.83f, 50.5677f, 1f, 20000, 0.25f, 0, 40000f);
										task_achieve_heading(false, 309.5567f, 0);
										task_pause(false, 2000);
										func_92(&(Local_755[iVar0 /*33*/]), 0);
										Local_755[iVar0 /*33*/].f_5++;
										break;
									
									case 3:
										if (get_script_task_status(Local_755[iVar0 /*33*/], 242628503) == 7)
										{
											Local_755[iVar0 /*33*/].f_5 = 0;
										}
										break;
								}
								break;
							
							case 6:
								if (get_script_task_status(Local_755[iVar0 /*33*/], 993674639) == 7 && Local_755[iVar0 /*33*/].f_5 > 1)
								{
									Local_755[iVar0 /*33*/].f_5 = 0;
								}
								switch (Local_755[iVar0 /*33*/].f_5)
								{
									case 0:
										WEAPON::SET_CURRENT_PED_WEAPON(Local_755[iVar0 /*33*/], joaat("weapon_unarmed"), true);
										task_achieve_heading(Local_755[iVar0 /*33*/], 219f, 1500);
										Local_755[iVar0 /*33*/].f_5++;
										break;
									
									case 1:
										if (get_script_task_status(Local_755[iVar0 /*33*/], 1920390111) == 7)
										{
											task_start_scenario_in_place(Local_755[iVar0 /*33*/], "WORLD_HUMAN_GUARD_STAND_ARMY", 0, 0);
											Local_755[iVar0 /*33*/].f_5++;
										}
										break;
								}
								break;
							
							case 32:
								if (!is_ped_injured(Local_755[iVar0 /*33*/]))
								{
									if (Local_755[iVar0 /*33*/].f_1 == 1 || func_4(player_ped_id(), Local_755[iVar0 /*33*/], 1) < 20f)
									{
										func_97(Local_755[iVar0 /*33*/], &(Local_755[iVar0 /*33*/].f_25), -1, 0, 1, 0, -1082130432, 0, -1);
									}
									if (Local_755[iVar0 /*33*/].f_5 < 10)
									{
									}
									switch (Local_755[iVar0 /*33*/].f_5)
									{
										case 0:
											task_start_scenario_in_place(Local_755[iVar0 /*33*/], "WORLD_HUMAN_AA_SMOKE", Local_755[iVar0 /*33*/].f_14, 0);
											Local_755[iVar0 /*33*/].f_5++;
											break;
										
										case 1:
											if (func_4(player_ped_id(), Local_755[iVar0 /*33*/], 1) < 10f)
											{
												iVar3 = get_random_int_in_range(false, 3);
												if (iVar3 == 0)
												{
													_play_ambient_speech_with_voice(Local_755[iVar0 /*33*/], "GENERIC_CURSE_MED", "A_M_M_Hillbilly_01_White_mini_03", "SPEECH_PARAMS_FORCE_SHOUTED", 0);
												}
												else if (iVar3 == 1)
												{
													_play_ambient_speech_with_voice(Local_755[iVar0 /*33*/], "GENERIC_INSULT_MED", "A_M_M_Hillbilly_01_White_mini_03", "SPEECH_PARAMS_FORCE_SHOUTED", 0);
												}
												else
												{
													_play_ambient_speech_with_voice(Local_755[iVar0 /*33*/], "CHAT_STATE", "A_M_M_Hillbilly_01_White_mini_03", "SPEECH_PARAMS_FORCE_SHOUTED", 0);
												}
												Local_755[iVar0 /*33*/].f_5++;
												Local_755[iVar0 /*33*/].f_14 = get_game_timer() + get_random_int_in_range(5000, 10000);
											}
											break;
										
										case 2:
											if (get_game_timer() > Local_755[iVar0 /*33*/].f_14)
											{
												Local_755[iVar0 /*33*/].f_5 = 1;
											}
											break;
										
										case 10:
											if (func_35("CHI2_hear", 8, Local_755[iVar0 /*33*/], "ONEILGUARD1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												Local_755[iVar0 /*33*/].f_5++;
												Local_755[iVar0 /*33*/].f_14 = get_game_timer() + 1000;
											}
											break;
										
										case 11:
											if (get_game_timer() > Local_755[iVar0 /*33*/].f_14)
											{
												task_turn_ped_to_face_coord(Local_755[iVar0 /*33*/], get_entity_coords(player_ped_id(), 1), 5000);
												Local_755[iVar0 /*33*/].f_5++;
												Local_755[iVar0 /*33*/].f_14 = get_game_timer() + 5000;
											}
											break;
										
										case 12:
											if (can_ped_hear_player(player_id(), Local_755[iVar0 /*33*/]) && func_67(Local_755[iVar0 /*33*/], 2448.003f, 4982.305f, 45.8519f, 1) < 10f)
											{
												if (get_game_timer() > Local_755[iVar0 /*33*/].f_14 - 3000)
												{
													task_follow_nav_mesh_to_coord(Local_755[iVar0 /*33*/], get_entity_coords(player_ped_id(), 1), 1f, 20000, 0.25f, 0, 40000f);
													Local_755[iVar0 /*33*/].f_5 = 15;
												}
											}
											else if (get_game_timer() > Local_755[iVar0 /*33*/].f_14)
											{
												if (func_35("CHI2_nope", 8, Local_755[iVar0 /*33*/], "ONEILGUARD1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
												{
													Local_755[iVar0 /*33*/].f_5++;
												}
											}
											break;
										
										case 13:
											func_93();
											task_follow_nav_mesh_to_coord(false, 2449.114f, 4981.984f, 45.8102f, 1f, 20000, 0.25f, 0, 40000f);
											task_achieve_heading(false, 127.6328f, 3000);
											func_92(&(Local_755[iVar0 /*33*/]), 0);
											Local_755[iVar0 /*33*/].f_14 = get_game_timer() + 3000;
											Local_755[iVar0 /*33*/].f_5++;
											break;
										
										case 14:
											if (get_game_timer() > Local_755[iVar0 /*33*/].f_14 || get_script_task_status(Local_755[iVar0 /*33*/], 242628503) == 7)
											{
												Local_755[iVar0 /*33*/].f_5 = 0;
											}
											break;
										
										case 15:
											if (func_35("CHI2_hear", 8, Local_755[iVar0 /*33*/], "ONEILGUARD1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												Local_755[iVar0 /*33*/].f_5++;
											}
											break;
										
										case 16:
											if (get_script_task_status(Local_755[iVar0 /*33*/], 713668775) == 7)
											{
												Local_755[iVar0 /*33*/].f_14 = get_game_timer() + 3000;
												Local_755[iVar0 /*33*/].f_5 = 12;
											}
											break;
										}
								}
								break;
							
							case 33:
								switch (Local_755[iVar0 /*33*/].f_5)
								{
									case 0:
										Local_755[iVar0 /*33*/].f_14 = get_game_timer() + 3000;
										Local_755[iVar0 /*33*/].f_5++;
										break;
									
									case 1:
										if (get_game_timer() > Local_755[iVar0 /*33*/].f_14)
										{
											if (func_68(iLocal_2507))
											{
												task_enter_vehicle(Local_755[iVar0 /*33*/], iLocal_2507, 20000, true, 1f, 1, 0);
												Local_755[iVar0 /*33*/].f_5++;
												Local_755[iVar0 /*33*/].f_14 = 0;
												Local_755[iVar0 /*33*/].f_15 = 0;
											}
										}
										break;
									
									case 2:
										func_94(iVar0);
										break;
								}
								break;
							
							case 7:
								if (Local_755[iVar0 /*33*/].f_1 == 1 || func_4(player_ped_id(), Local_755[iVar0 /*33*/], 1) < 20f)
								{
									func_97(Local_755[iVar0 /*33*/], &(Local_755[iVar0 /*33*/].f_25), -1, 0, 1, 0, -1082130432, 0, -1);
								}
								switch (Local_755[iVar0 /*33*/].f_5)
								{
									case 0:
										iVar4 = joaat("weapon_unarmed");
										if (get_current_ped_weapon(Local_755[iVar0 /*33*/], &iVar4, 1))
										{
											task_swap_weapon(Local_755[iVar0 /*33*/], 0);
										}
										Local_755[iVar0 /*33*/].f_5++;
										break;
									
									case 1:
										if (!get_current_ped_weapon(Local_755[iVar0 /*33*/], &iVar4, 1))
										{
											func_93();
											if (iVar0 == 1)
											{
												if (!is_ped_injured(Local_755[2 /*33*/]))
												{
													task_turn_ped_to_face_entity(false, Local_755[2 /*33*/], 2000);
												}
											}
											else if (iVar0 == 2)
											{
												if (!is_ped_injured(Local_755[1 /*33*/]))
												{
													task_turn_ped_to_face_entity(false, Local_755[1 /*33*/], 2000);
												}
											}
											else if (iVar0 == 6)
											{
												if (!is_ped_injured(Local_755[7 /*33*/]))
												{
													task_turn_ped_to_face_entity(false, Local_755[7 /*33*/], 2000);
												}
											}
											else if (iVar0 == 7)
											{
												if (!is_ped_injured(Local_755[6 /*33*/]))
												{
													task_turn_ped_to_face_entity(false, Local_755[6 /*33*/], 2000);
												}
											}
											if (Local_755[iVar0 /*33*/].f_14 != 0)
											{
												task_start_scenario_in_place(false, "WORLD_HUMAN_HANG_OUT_STREET", Local_755[iVar0 /*33*/].f_14, 0);
											}
											else
											{
												task_start_scenario_in_place(false, "WORLD_HUMAN_HANG_OUT_STREET", 0, 0);
											}
											func_92(&(Local_755[iVar0 /*33*/]), 0);
											Local_755[iVar0 /*33*/].f_5++;
											Local_755[iVar0 /*33*/].f_15 = get_game_timer() + 15000;
										}
										break;
									
									case 2:
										if (get_script_task_status(Local_755[iVar0 /*33*/], 242628503) == 7 || get_game_timer() > Local_755[iVar0 /*33*/].f_15)
										{
											clear_ped_tasks(Local_755[iVar0 /*33*/]);
											Local_755[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 3:
										if (get_script_task_status(Local_755[iVar0 /*33*/], 242628503) == 7)
										{
											if (Local_755[iVar0 /*33*/].f_4 == 5)
											{
												task_swap_weapon(Local_755[iVar0 /*33*/], 1);
												Local_755[iVar0 /*33*/].f_5++;
											}
											else
											{
												Local_755[iVar0 /*33*/].f_5++;
											}
										}
										break;
									
									case 4:
										if (get_script_task_status(Local_755[iVar0 /*33*/], 716706914) == 7)
										{
											if (Local_755[iVar0 /*33*/].f_4 == 5)
											{
												func_99(iVar0, Local_755[iVar0 /*33*/].f_4, 2, 0);
											}
											else
											{
												func_99(iVar0, Local_755[iVar0 /*33*/].f_4, 0, 0);
											}
										}
										break;
								}
								break;
							
							case 13:
								switch (Local_755[iVar0 /*33*/].f_5)
								{
									case 0:
										task_start_scenario_in_place(Local_755[iVar0 /*33*/], "WORLD_HUMAN_GUARD_STAND", 0, 0);
										_0x2208438012482A1A(Local_755[iVar0 /*33*/], 0, 0);
										Local_755[iVar0 /*33*/].f_5++;
										break;
								}
								break;
							
							case 14:
								switch (Local_755[iVar0 /*33*/].f_5)
								{
									case 0:
										task_start_scenario_in_place(Local_755[iVar0 /*33*/], "WORLD_HUMAN_AA_SMOKE", 0, 0);
										_0x2208438012482A1A(Local_755[iVar0 /*33*/], 0, 0);
										Local_755[iVar0 /*33*/].f_5++;
										break;
									
									case 1:
										if (get_script_task_status(Local_755[iVar0 /*33*/], 993674639) == 7)
										{
											Local_755[iVar0 /*33*/].f_5 = 0;
										}
										break;
								}
								break;
							
							case 15:
								switch (Local_755[iVar0 /*33*/].f_5)
								{
									case 0:
										task_start_scenario_in_place(Local_755[iVar0 /*33*/], "WORLD_HUMAN_BINOCULARS", 0, 0);
										_0x2208438012482A1A(Local_755[iVar0 /*33*/], 0, 0);
										Local_755[iVar0 /*33*/].f_5++;
										break;
								}
								break;
							
							case 16:
								switch (Local_755[iVar0 /*33*/].f_5)
								{
									case 0:
										task_start_scenario_in_place(Local_755[iVar0 /*33*/], "WORLD_HUMAN_DRINKING", 0, 0);
										_0x2208438012482A1A(Local_755[iVar0 /*33*/], 0, 0);
										Local_755[iVar0 /*33*/].f_5++;
										break;
								}
								break;
							
							case 17:
								if (Local_755[iVar0 /*33*/].f_5 < 10)
								{
									if (can_ped_hear_player(player_id(), Local_755[iVar0 /*33*/]))
									{
										Local_755[iVar0 /*33*/].f_5 = 10;
									}
								}
								switch (Local_755[iVar0 /*33*/].f_5)
								{
									case 0:
										request_anim_dict("misscarsteal2peeing");
										Local_755[iVar0 /*33*/].f_5++;
										Local_755[iVar0 /*33*/].f_14 = 0;
										break;
									
									case 1:
										if (has_anim_dict_loaded("misscarsteal2peeing"))
										{
											task_start_scenario_in_place(Local_755[iVar0 /*33*/], "WORLD_HUMAN_DRINKING", 0, 1);
											Local_755[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 2:
										if (func_4(player_ped_id(), Local_755[iVar0 /*33*/], 1) < 21.6f)
										{
											task_play_anim(Local_755[iVar0 /*33*/], "misscarsteal2peeing", "peeing_loop", 8f, -8f, 25000, 1, 0, 0, 0, 0);
											Local_755[iVar0 /*33*/].f_5++;
											Local_755[iVar0 /*33*/].f_14 = get_game_timer() + 23000;
										}
										break;
									
									case 3:
										if (get_game_timer() > Local_755[iVar0 /*33*/].f_14)
										{
											Local_755[iVar0 /*33*/].f_14 = -1;
											task_start_scenario_in_place(Local_755[iVar0 /*33*/], "WORLD_HUMAN_DRINKING", 0, 1);
											Local_755[iVar0 /*33*/].f_5++;
										}
										break;
								}
								break;
							
							case 18:
								switch (Local_755[iVar0 /*33*/].f_5)
								{
									case 0:
										func_93();
										task_follow_nav_mesh_to_coord(false, 2434.891f, 4973.864f, 50.5679f, 1f, 20000, 0.25f, 0, 40000f);
										task_start_scenario_in_place(false, "WORLD_HUMAN_BINOCULARS", 0, 0);
										func_92(&(Local_755[iVar0 /*33*/]), 0);
										Local_755[iVar0 /*33*/].f_5++;
										break;
								}
								break;
							
							case 25:
								switch (Local_755[iVar0 /*33*/].f_5)
								{
									case 0:
										switch (Local_755[iVar0 /*33*/].f_2)
										{
											case 12:
												if (does_scenario_exist_in_area(2433.04f, 4967.87f, 46.28f, 0.8f, 0))
												{
													task_use_nearest_scenario_to_coord_warp(Local_755[iVar0 /*33*/], 2433.04f, 4967.87f, 46.28f, 0.8f, 0);
													Local_755[iVar0 /*33*/].f_5++;
												}
												break;
											
											case 13:
												if (does_scenario_exist_in_area(2432.56f, 4968.38f, 46.27f, 0.8f, 0))
												{
													task_use_nearest_scenario_to_coord_warp(Local_755[iVar0 /*33*/], 2432.56f, 4968.38f, 46.27f, 0.8f, 0);
													Local_755[iVar0 /*33*/].f_5++;
												}
												break;
											
											case 14:
												if (does_scenario_exist_in_area(2433.12f, 4965.59f, 46.27f, 0.8f, 0))
												{
													task_use_nearest_scenario_to_coord_warp(Local_755[iVar0 /*33*/], 2433.12f, 4965.59f, 46.27f, 0.8f, 0);
													Local_755[iVar0 /*33*/].f_5++;
												}
												break;
											
											case 15:
												if (does_scenario_exist_in_area(2439.61f, 4960.99f, 46.27f, 0.4f, 0))
												{
													task_use_nearest_scenario_to_coord_warp(Local_755[iVar0 /*33*/], 2439.697f, 4960.996f, 46.28f, 0.4f, 0);
													Local_755[iVar0 /*33*/].f_5++;
												}
												break;
											
											case 16:
												if (does_scenario_exist_in_area(2440.16f, 4962.99f, 46.27f, 0.4f, 0))
												{
													task_use_nearest_scenario_to_coord_warp(Local_755[iVar0 /*33*/], 2440.16f, 4962.99f, 46.27f, 0.4f, 0);
													Local_755[iVar0 /*33*/].f_5++;
												}
												break;
											
											case 17:
												if (does_scenario_exist_in_area(2438.23f, 4962.25f, 46.27f, 0.4f, 0))
												{
													task_use_nearest_scenario_to_coord_warp(Local_755[iVar0 /*33*/], 2438.23f, 4962.25f, 46.27f, 0.4f, 0);
													Local_755[iVar0 /*33*/].f_5++;
												}
												break;
										}
										break;
									
									case 1:
										if (get_script_task_status(Local_755[iVar0 /*33*/], 1647992574) == 7)
										{
											Local_755[iVar0 /*33*/].f_5 = 0;
										}
										break;
								}
								break;
							
							case 28:
								switch (Local_755[iVar0 /*33*/].f_5)
								{
									case 0:
										if (is_player_targetting_entity(player_id(), Local_755[iVar0 /*33*/]) || (func_90(get_entity_coords(Local_755[iVar0 /*33*/], 1), 1f, 1120403456) && is_entity_in_angled_area(player_ped_id(), 2448.583f, 4969.292f, 45.1856f, 2439.538f, 4978.061f, 46.82762f, 5.75f, 0, true, 0)))
										{
											task_hands_up(Local_755[iVar0 /*33*/], 20000, false, -1, 0);
											Local_755[iVar0 /*33*/].f_5 = 2;
										}
										break;
									
									case 2:
										if (func_35("WRK1", 1, Local_755[iVar0 /*33*/], "CHIN2Goon2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_755[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 3:
										if (is_player_targetting_entity(player_id(), Local_755[iVar0 /*33*/]) || (func_90(get_entity_coords(Local_755[iVar0 /*33*/], 1), 1f, 1120403456) && is_entity_in_angled_area(player_ped_id(), 2448.583f, 4969.292f, 45.1856f, 2439.538f, 4978.061f, 46.82762f, 5.75f, 0, true, 0)))
										{
											if (func_35("TRV1", 1, player_ped_id(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												Local_755[iVar0 /*33*/].f_5++;
												Local_755[iVar0 /*33*/].f_14 = get_game_timer() + 2000;
											}
										}
										else
										{
											Local_755[iVar0 /*33*/].f_5++;
											Local_755[iVar0 /*33*/].f_14 = get_game_timer() + 2000;
										}
										break;
									
									case 4:
										if (get_game_timer() > Local_755[iVar0 /*33*/].f_14)
										{
											task_smart_flee_ped(Local_755[iVar0 /*33*/], player_ped_id(), 200f, 200000, 0, 0);
											set_ped_keep_task(Local_755[iVar0 /*33*/], true);
											set_ped_as_no_longer_needed(&(Local_755[iVar0 /*33*/]));
											Local_755[iVar0 /*33*/].f_5++;
										}
										break;
								}
								break;
							
							case 30:
								if (!is_ped_injured(Local_755[iVar0 /*33*/]))
								{
									if (Local_755[iVar0 /*33*/].f_5 < 8)
									{
										if (has_ped_been_damaged_by_weapon(Local_755[iVar0 /*33*/], false, 2))
										{
											if (!has_ped_got_weapon(Local_755[iVar0 /*33*/], false, 2))
											{
												give_weapon_to_ped(Local_755[iVar0 /*33*/], joaat("weapon_pistol"), -1, false, true);
												task_combat_ped(Local_755[iVar0 /*33*/], player_ped_id(), 0, 16);
												func_88();
												set_blocking_of_non_temporary_events(Local_755[iVar0 /*33*/], false);
												task_combat_ped(Local_755[iVar0 /*33*/], player_ped_id(), 0, 16);
												PED::PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_755[iVar0 /*33*/], iLocal_1616);
												Local_755[iVar0 /*33*/].f_5 = 999;
											}
										}
									}
								}
								switch (Local_755[iVar0 /*33*/].f_5)
								{
									case 0:
										request_anim_dict("misschinese2_crystalmaze");
										request_weapon_asset(joaat("weapon_sawnoffshotgun"), 31, 0);
										set_blocking_of_non_temporary_events(Local_755[iVar0 /*33*/], true);
										PED::PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_755[iVar0 /*33*/], iLocal_1616);
										Local_755[iVar0 /*33*/].f_5++;
										break;
									
									case 1:
										if (has_anim_dict_loaded("misschinese2_crystalmaze") && has_weapon_asset_loaded(joaat("weapon_sawnoffshotgun")))
										{
											if (!is_ped_injured(Local_755[iVar0 /*33*/]))
											{
												iLocal_2875 = create_synchronized_scene(2435.312f, 4967.087f, 41.35f, 0f, 0f, 11.4f, 2);
												set_synchronized_scene_looped(iLocal_2875, true);
												task_synchronized_scene(Local_755[iVar0 /*33*/], iLocal_2875, "misschinese2_crystalmaze", "_cower_loop", 1000f, -8f, 0, 0, 1000f, 0);
												if (!does_entity_exist(iLocal_2878))
												{
													iLocal_2878 = create_weapon_object(joaat("weapon_sawnoffshotgun"), 40, 2433.59f, 4969.7f, 42.1854f, 1, 1f, 0, 0, 1);
													set_entity_rotation(iLocal_2878, 90f, 0f, 0f, 2, 1);
												}
												task_look_at_entity(Local_755[iVar0 /*33*/], player_ped_id(), -1, 0, 2);
												Local_755[iVar0 /*33*/].f_5++;
											}
										}
										break;
									
									case 2:
										if ((iLocal_2511 == 4 || iLocal_2511 == 5) || iLocal_2511 == 6)
										{
											if (func_87(11))
											{
												Local_755[iVar0 /*33*/].f_5++;
											}
										}
										if (iLocal_2511 > 6)
										{
											Local_755[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 3:
										iLocal_2874 = create_synchronized_scene(2435.312f, 4967.087f, 41.35f, 0f, 0f, 11.4f, 2);
										task_synchronized_scene(Local_755[iVar0 /*33*/], iLocal_2874, "misschinese2_crystalmaze", "_cower_to_stand", 4f, -8f, 0, 0, 1000f, 0);
										task_look_at_entity(Local_755[iVar0 /*33*/], player_ped_id(), -1, 0, 2);
										Local_755[iVar0 /*33*/].f_5++;
										break;
									
									case 4:
										if (func_35("CHI2_DALE", 4, Local_755[iVar0 /*33*/], "ONEIL", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_755[iVar0 /*33*/].f_5++;
										}
										if ((is_synchronized_scene_running(iLocal_2874) && get_synchronized_scene_phase(iLocal_2874) > 0.98f) || !is_synchronized_scene_running(iLocal_2874))
										{
											Local_755[iVar0 /*33*/].f_5 = 5;
										}
										break;
									
									case 5:
										if ((is_synchronized_scene_running(iLocal_2874) && get_synchronized_scene_phase(iLocal_2874) > 0.98f) || !is_synchronized_scene_running(iLocal_2874))
										{
											iLocal_2873 = create_synchronized_scene(2435.312f, 4967.087f, 41.35f, 0f, 0f, 11.4f, 2);
											set_synchronized_scene_looped(iLocal_2873, true);
											task_synchronized_scene(Local_755[iVar0 /*33*/], iLocal_2873, "misschinese2_crystalmaze", "_stand_loop", 4f, -8f, 0, 0, 1000f, 0);
											Local_755[iVar0 /*33*/].f_5++;
											Local_755[iVar0 /*33*/].f_14 = get_game_timer() + get_random_int_in_range(1000, 2000);
										}
										break;
									
									case 6:
										if (!is_synchronized_scene_running(iLocal_2876) || iLocal_2876 == 0)
										{
											if (get_game_timer() > Local_755[iVar0 /*33*/].f_14)
											{
												iLocal_2876 = create_synchronized_scene(2435.312f, 4967.087f, 41.35f, 0f, 0f, 11.4f, 2);
												if (get_random_int_in_range(false, 2) == 1)
												{
													task_synchronized_scene(Local_755[iVar0 /*33*/], iLocal_2876, "misschinese2_crystalmaze", "_stand_loop_a", 4f, -8f, 0, 0, 1000f, 0);
												}
												else
												{
													task_synchronized_scene(Local_755[iVar0 /*33*/], iLocal_2876, "misschinese2_crystalmaze", "_stand_loop_b", 4f, -8f, 0, 0, 1000f, 0);
												}
											}
										}
										if (!is_synchronized_scene_running(iLocal_2873) || iLocal_2873 == 0)
										{
											if ((is_synchronized_scene_running(iLocal_2876) && get_synchronized_scene_phase(iLocal_2876) > 0.98f) || !is_synchronized_scene_running(iLocal_2876))
											{
												iLocal_2873 = create_synchronized_scene(2435.312f, 4967.087f, 41.35f, 0f, 0f, 11.4f, 2);
												set_synchronized_scene_looped(iLocal_2873, true);
												task_synchronized_scene(Local_755[iVar0 /*33*/], iLocal_2873, "misschinese2_crystalmaze", "_stand_loop", 4f, -8f, 0, 0, 1000f, 0);
												Local_755[iVar0 /*33*/].f_14 = get_game_timer() + get_random_int_in_range(1000, 2000);
											}
										}
										if (!func_59() || (func_67(player_ped_id(), 2430.09f, 4965.93f, 41.55f, 1) > 3.438f && !is_entity_in_angled_area(player_ped_id(), 2427.079f, 4964.971f, 41.81169f, 2432.589f, 4959.331f, 48.7548f, 3.3125f, 0, true, 0)))
										{
											func_85();
											Local_755[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 7:
										if (func_35("CHI2_DALEG", 4, Local_755[iVar0 /*33*/], "ONEIL", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_755[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 8:
										iLocal_2877 = create_synchronized_scene(2435.312f, 4967.087f, 41.35f, 0f, 0f, 11.4f, 2);
										task_synchronized_scene(Local_755[iVar0 /*33*/], iLocal_2877, "misschinese2_crystalmaze", "_stand_to_aim", 4f, -8f, 0, 0, 1000f, 0);
										give_weapon_object_to_ped(iLocal_2878, Local_755[iVar0 /*33*/]);
										Local_755[iVar0 /*33*/].f_5++;
										break;
									
									case 9:
										if ((is_synchronized_scene_running(iLocal_2877) && get_synchronized_scene_phase(iLocal_2877) > 0.98f) || !is_synchronized_scene_running(iLocal_2877))
										{
											set_ped_target_loss_response(Local_755[iVar0 /*33*/], 1);
											clear_ped_tasks(Local_755[iVar0 /*33*/]);
											task_aim_gun_at_entity(Local_755[iVar0 /*33*/], player_ped_id(), -1, 1);
											Local_755[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 10:
										if (!func_59())
										{
											if (func_35("CHI2_DALEA", 4, Local_755[iVar0 /*33*/], "ONEIL", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												set_blocking_of_non_temporary_events(Local_755[iVar0 /*33*/], false);
												task_combat_ped(Local_755[iVar0 /*33*/], player_ped_id(), 0, 16);
												Local_755[iVar0 /*33*/].f_14 = get_game_timer() + get_random_int_in_range(3000, 4000);
												Local_755[iVar0 /*33*/].f_15 = 0;
												Local_755[iVar0 /*33*/].f_5++;
											}
										}
										break;
									
									case 11:
										if (get_game_timer() > Local_755[iVar0 /*33*/].f_14)
										{
											if (Local_755[iVar0 /*33*/].f_15 < 4)
											{
												if (func_35("CHI2_DALEA", 4, Local_755[iVar0 /*33*/], "ONEIL", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
												{
													Local_755[iVar0 /*33*/].f_5++;
													Local_755[iVar0 /*33*/].f_14 = get_game_timer() + get_random_int_in_range(3000, 4000);
													Local_755[iVar0 /*33*/].f_15++;
												}
											}
										}
										break;
									
									case 999:
										if (func_35("CHI2_DALEA", 4, Local_755[iVar0 /*33*/], "ONEIL", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_755[iVar0 /*33*/].f_5++;
										}
										break;
								}
								break;
							
							case 31:
								if (!is_ped_injured(Local_755[iVar0 /*33*/]))
								{
									if (is_bullet_in_area(get_entity_coords(Local_755[iVar0 /*33*/], 1), 2f, 1))
									{
										Local_755[iVar0 /*33*/].f_5 = 5;
									}
								}
								switch (Local_755[iVar0 /*33*/].f_5)
								{
									case 0:
										if (func_84("FRMFLC", 0, 0))
										{
											Local_755[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 1:
										if (func_35("WRK2", 1, Local_755[iVar0 /*33*/], "oneilcook", 2, player_ped_id(), "trevor", -1, 0, 0, -1, 0, 0, 8))
										{
											Local_755[iVar0 /*33*/].f_5++;
											Local_755[iVar0 /*33*/].f_14 = get_game_timer() + 1300;
										}
										break;
									
									case 2:
										if (get_game_timer() > Local_755[iVar0 /*33*/].f_14)
										{
											task_hands_up(Local_755[iVar0 /*33*/], 20000, false, -1, 0);
											Local_755[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 3:
										if (!func_59())
										{
											Local_755[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 4:
										if (!func_59())
										{
											func_99(iVar0, 27, 0, 0);
										}
										break;
									
									case 5:
										task_smart_flee_ped(Local_755[iVar0 /*33*/], player_ped_id(), 50f, 1000, 0, 0);
										Local_755[iVar0 /*33*/].f_5++;
										break;
									
									case 6:
										if (func_82("WRK2"))
										{
											if (get_current_scripted_conversation_line() == 1 || get_current_scripted_conversation_line() == 5)
											{
												func_81(0);
											}
											else
											{
												func_81(1);
											}
										}
										func_99(iVar0, 27, 0, 0);
										break;
								}
								break;
							
							case 27:
								switch (Local_755[iVar0 /*33*/].f_5)
								{
									case 0:
										func_93();
										task_set_blocking_of_non_temporary_events(false, 1);
										task_smart_flee_ped(false, player_ped_id(), 200f, 999999, 0, 0);
										task_cower(false, -1);
										func_92(&(Local_755[iVar0 /*33*/]), 0);
										set_ped_keep_task(Local_755[iVar0 /*33*/], true);
										set_ped_as_no_longer_needed(&(Local_755[iVar0 /*33*/]));
										if (does_blip_exist(Local_755[iVar0 /*33*/].f_19))
										{
											remove_blip(&(Local_755[iVar0 /*33*/].f_19));
										}
										Local_755[iVar0 /*33*/].f_5++;
										break;
								}
								break;
							
							case 4:
								if (iLocal_2881 == 1)
								{
									if (is_synchronized_scene_running(Local_755[iVar0 /*33*/].f_14))
									{
										set_synchronized_scene_phase(Local_755[iVar0 /*33*/].f_14, 0.69f);
									}
									if (iVar0 == 9)
									{
										iLocal_2881 = 0;
									}
								}
								if (iLocal_2882 == 1)
								{
									if (is_synchronized_scene_running(Local_755[iVar0 /*33*/].f_14))
									{
										set_synchronized_scene_phase(Local_755[iVar0 /*33*/].f_14, 0f);
									}
									if (iVar0 == 9)
									{
										iLocal_2882 = 0;
									}
									Local_755[iVar0 /*33*/].f_5 = 0;
								}
								if (Local_755[iVar0 /*33*/].f_2 == 8)
								{
									if (is_synchronized_scene_running(Local_755[iVar0 /*33*/].f_14))
									{
										if (Local_755[iVar0 /*33*/].f_5 == 0)
										{
											if (!func_30(23) || iLocal_2511 == 3)
											{
												if (get_script_task_status(Local_755[iVar0 /*33*/], 1785177548) == 1)
												{
													if (get_synchronized_scene_phase(Local_755[iVar0 /*33*/].f_14) > 0.024f && get_synchronized_scene_phase(Local_755[iVar0 /*33*/].f_14) < 0.033f)
													{
														iVar5 = 0;
														if (!is_ped_injured(Local_755[iVar0 /*33*/]))
														{
															iVar6 = joaat("weapon_unarmed");
															if (get_current_ped_weapon(Local_755[iVar0 /*33*/], &iVar6, 1))
															{
																set_ped_accuracy(Local_755[iVar0 /*33*/], 100);
																if (iVar6 == joaat("weapon_pistol"))
																{
																	if (func_80(&iVar5))
																	{
																		set_ammo_in_clip(Local_755[iVar0 /*33*/], joaat("weapon_pistol"), 12);
																		set_ped_shoots_at_coord(Local_755[iVar0 /*33*/], get_entity_coords(iLocal_2657[iVar5], 1), 0);
																		func_97(Local_755[iVar0 /*33*/], &(Local_755[iVar0 /*33*/].f_25), -1, 0, 1, 0, -1082130432, 0, -1);
																		Local_755[iVar0 /*33*/].f_5 = 1;
																	}
																	else
																	{
																		set_ammo_in_clip(Local_755[iVar0 /*33*/], joaat("weapon_pistol"), 12);
																		set_ped_shoots_at_coord(Local_755[iVar0 /*33*/], 2493.1f, 4971f, 44.9f, 0);
																		func_97(Local_755[iVar0 /*33*/], &(Local_755[iVar0 /*33*/].f_25), -1, 0, 1, 0, -1082130432, 0, -1);
																		Local_755[iVar0 /*33*/].f_5 = 1;
																	}
																}
															}
														}
													}
												}
											}
										}
										else if (Local_755[iVar0 /*33*/].f_5 == 1)
										{
											if (get_synchronized_scene_phase(Local_755[iVar0 /*33*/].f_14) > 0.04f)
											{
												Local_755[iVar0 /*33*/].f_5 = 2;
												if (iLocal_2879 == 0)
												{
													_play_ambient_speech_with_voice(Local_755[iVar0 /*33*/], "generic_cheer", "A_M_M_Hillbilly_01_White_mini_02", "SPEECH_PARAMS_FORCE_SHOUTED", 0);
												}
											}
										}
										else if (Local_755[iVar0 /*33*/].f_5 == 2)
										{
											if (get_synchronized_scene_phase(Local_755[iVar0 /*33*/].f_14) > 0.6f)
											{
												Local_755[iVar0 /*33*/].f_5 = 0;
											}
										}
									}
								}
								if (Local_755[iVar0 /*33*/].f_5 == 3)
								{
									if (get_script_task_status(Local_755[iVar0 /*33*/], 2106541073) == 7)
									{
										func_99(iVar0, 7, 0, 0);
									}
								}
								break;
							}
					}
					break;
				
				case 5:
				case 6:
					if (Local_1619[iVar0 /*24*/].f_20)
					{
						switch (Local_755[iVar0 /*33*/].f_2)
						{
							case 20:
							case 21:
							case 16:
							case 12:
							case 13:
							case 14:
								switch (Local_1619[iVar0 /*24*/].f_4)
								{
									case 1:
										set_ped_angled_defensive_area(Local_755[iVar0 /*33*/], 2431.704f, 4961.62f, 45.33136f, 2455.376f, 4985.934f, 48.68555f, 13.5625f, 0, 0);
										task_combat_ped(Local_755[iVar0 /*33*/], player_ped_id(), 0, 16);
										set_ped_target_loss_response(Local_755[iVar0 /*33*/], 1);
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_755[iVar0 /*33*/], 50, true);
										Local_1619[iVar0 /*24*/].f_4++;
										break;
								}
								break;
							
							case 17:
								switch (Local_1619[iVar0 /*24*/].f_4)
								{
									case 1:
										set_ped_angled_defensive_area(Local_755[iVar0 /*33*/], 2431.704f, 4961.62f, 45.33136f, 2455.376f, 4985.934f, 48.68555f, 13.5625f, 0, 0);
										task_combat_ped(Local_755[iVar0 /*33*/], player_ped_id(), 0, 16);
										set_ped_target_loss_response(Local_755[iVar0 /*33*/], 1);
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_755[iVar0 /*33*/], 50, true);
										Local_1619[iVar0 /*24*/].f_4++;
										break;
								}
								break;
							
							case 15:
								switch (Local_1619[iVar0 /*24*/].f_4)
								{
									case 1:
										set_ped_angled_defensive_area(Local_755[iVar0 /*33*/], 2437.982f, 4959.021f, 45.31057f, 2432.93f, 4961.941f, 48.69256f, 3.1875f, 0, 0);
										task_combat_ped(Local_755[iVar0 /*33*/], player_ped_id(), 0, 16);
										set_ped_target_loss_response(Local_755[iVar0 /*33*/], 1);
										Local_1619[iVar0 /*24*/].f_4++;
										break;
									
									case 2:
										if (func_87(18))
										{
											remove_ped_defensive_area(Local_755[iVar0 /*33*/], 0);
											Local_1619[iVar0 /*24*/].f_4++;
										}
										break;
								}
								break;
							
							case 10:
							case 18:
							case 19:
							case 11:
								switch (Local_1619[iVar0 /*24*/].f_4)
								{
									case 1:
										task_combat_ped(Local_755[iVar0 /*33*/], player_ped_id(), 0, 16);
										set_ped_target_loss_response(Local_755[iVar0 /*33*/], 1);
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_755[iVar0 /*33*/], 50, true);
										if (iLocal_1614 == 0)
										{
											remove_ped_defensive_area(Local_755[iVar0 /*33*/], 0);
											set_ped_sphere_defensive_area(Local_755[iVar0 /*33*/], 2451.677f, 4954.251f, 44.988f, 3f, 0, 0);
											iLocal_1614++;
											Local_1619[iVar0 /*24*/].f_4++;
										}
										else
										{
											Local_1619[iVar0 /*24*/].f_4 = get_game_timer() + iLocal_1614 * 4000;
											iLocal_1614++;
										}
										Local_755[iVar0 /*33*/].f_1 = 1;
										break;
									
									case 2:
										if (func_67(Local_755[iVar0 /*33*/], 2451.677f, 4954.251f, 44.988f, 1) < 3f)
										{
											remove_ped_defensive_area(Local_755[iVar0 /*33*/], 0);
											Local_1619[iVar0 /*24*/].f_4++;
										}
										break;
									
									case 3:
										break;
									
									default:
										if (get_game_timer() > Local_1619[iVar0 /*24*/].f_4)
										{
											remove_ped_defensive_area(Local_755[iVar0 /*33*/], 0);
											set_ped_sphere_defensive_area(Local_755[iVar0 /*33*/], 2451.677f, 4954.251f, 44.988f, 3f, 0, 0);
											Local_1619[iVar0 /*24*/].f_4 = 2;
										}
										break;
								}
								break;
							
							case 1:
								switch (Local_1619[iVar0 /*24*/].f_4)
								{
									case 1:
										set_ped_angled_defensive_area(Local_755[iVar0 /*33*/], 2453.084f, 4969.897f, 50.44285f, 2460.996f, 4977.822f, 53.38035f, 2.9375f, 0, 0);
										task_combat_ped(Local_755[iVar0 /*33*/], player_ped_id(), 0, 16);
										set_ped_target_loss_response(Local_755[iVar0 /*33*/], 1);
										Local_1619[iVar0 /*24*/].f_4++;
										break;
								}
								break;
							
							case 0:
								switch (Local_1619[iVar0 /*24*/].f_4)
								{
									case 1:
										set_ped_angled_defensive_area(Local_755[iVar0 /*33*/], 2442.963f, 4964.217f, 50.44285f, 2449.251f, 4970.534f, 53.38035f, 2f, 0, 0);
										task_combat_ped(Local_755[iVar0 /*33*/], player_ped_id(), 0, 16);
										set_ped_target_loss_response(Local_755[iVar0 /*33*/], 1);
										Local_1619[iVar0 /*24*/].f_4++;
										break;
								}
								break;
							
							case 2:
								switch (Local_1619[iVar0 /*24*/].f_4)
								{
									case 1:
										set_ped_angled_defensive_area(Local_755[iVar0 /*33*/], 2461.362f, 4976.084f, 50.44285f, 2448.743f, 4988.774f, 53.60143f, 2f, 0, 0);
										task_combat_ped(Local_755[iVar0 /*33*/], player_ped_id(), 0, 16);
										set_ped_target_loss_response(Local_755[iVar0 /*33*/], 1);
										Local_1619[iVar0 /*24*/].f_4++;
										break;
								}
								break;
							}
					}
					break;
				}
		}
		iVar0++;
	}
}

bool func_80(int iParam0)
{
	int iVar0;
	int iVar1;
	
	*iParam0 = 0;
	iVar0 = 0;
	*iParam0 = get_random_int_in_range(false, 10);
	iVar1 = false;
	while (!iVar1)
	{
		if (does_entity_exist(iLocal_2657[*iParam0]) && is_entity_in_angled_area(iLocal_2657[*iParam0], 2495.017f, 4970.17f, 44.21808f, 2493.501f, 4971.556f, 45.40248f, 1.375f, 0, true, 0))
		{
			return true;
		}
		else
		{
			*iParam0++;
			iVar0++;
			if (*iParam0 == iLocal_2657)
			{
				*iParam0 = 0;
			}
		}
		if (iVar0 == 10)
		{
			return false;
		}
	}
	return false;
}

void func_81(int iParam0)
{
	iLocal_3491 = 0;
	if (iParam0)
	{
		func_85();
	}
	else
	{
		func_88();
	}
}

bool func_82(char* sParam0)
{
	struct<6> Var0;
	
	Var0 = {func_83()};
	if (are_strings_equal(&Var0, sParam0))
	{
		return true;
	}
	return false;
}

struct<6> func_83()
{
	char[24] cVar0;
	
	StringCopy(&cVar0, "NULL", 24);
	if (Global_15712 == 4)
	{
		return Global_15331;
	}
	return cVar0;
}

auto func_84(char* sParam0, int iParam1, char* sParam2)
{
	_0x853648FD1063A213(sParam0);
	if (iParam1 == 1)
	{
		_add_text_component_item_string(sParam2);
	}
	return _0x8A9BA1AB3E237613();
}

void func_85()
{
	Global_14578 = 0;
	func_86();
}

void func_86()
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

bool func_87(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0 - Local_3120[0 /*8*/];
	if (iVar0 >= 0 && iVar0 < Local_3120)
	{
		if (Local_3120[iVar0 /*8*/] == iParam0)
		{
			if (Local_3120[iVar0 /*8*/].f_2)
			{
				return true;
			}
		}
		else if (Local_3120[iVar0 /*8*/] != 0)
		{
		}
	}
	return false;
}

void func_88()
{
	Global_14578 = 0;
	func_89();
}

void func_89()
{
	restart_scripted_conversation();
	Global_16723 = 0;
	if (is_scripted_conversation_ongoing())
	{
		stop_scripted_conversation(false);
		Global_15712 = 6;
	}
}

bool func_90(Vector3 vParam0, float fParam1, float fParam2)
{
	if (is_sphere_visible(vParam0, fParam3))
	{
		if (!is_entity_at_coord(player_ped_id(), vParam0, fParam4, fParam4, fParam4, false, false, 0))
		{
			return false;
		}
		else if (is_screen_faded_out())
		{
			return false;
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_91(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_3120)
	{
		if (iParam0 == Local_3120[iVar0 /*8*/])
		{
			if (iParam1 == 1)
			{
				Local_3120[iVar0 /*8*/].f_2 = 1;
			}
			else
			{
				Local_3120[iVar0 /*8*/].f_2 = 0;
			}
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_92(int iParam0, int iParam1)
{
	if (iParam1)
	{
		set_sequence_to_repeat(iLocal_257, 1);
	}
	close_sequence_task(iLocal_257);
	if (!is_ped_dead_or_dying(*iParam0, 1))
	{
		task_perform_sequence(*iParam0, iLocal_257);
	}
	clear_sequence_task(&iLocal_257);
}

void func_93()
{
	open_sequence_task(&iLocal_257);
}

void func_94(int iParam0)
{
	Local_755[iParam0 /*33*/].f_15 += floor(timestep() * 1000f);
	switch (Local_755[iParam0 /*33*/].f_2)
	{
		case 7:
			if (Local_755[iParam0 /*33*/].f_15 > 2000 && !is_bit_set(Local_755[iParam0 /*33*/].f_14, false))
			{
				task_look_at_coord(Local_755[iParam0 /*33*/], 2505.634f, 4996.994f, 46.6624f, 4000, 0, 2);
				set_bit(&(Local_755[iParam0 /*33*/].f_14), false);
			}
			else if (Local_755[iParam0 /*33*/].f_15 > 8000 && !is_bit_set(Local_755[iParam0 /*33*/].f_14, true))
			{
				task_look_at_coord(Local_755[iParam0 /*33*/], 2472.297f, 4962.687f, 47.2297f, 6000, 0, 2);
				set_bit(&(Local_755[iParam0 /*33*/].f_14), true);
			}
			break;
		
		case 5:
			if (Local_755[iParam0 /*33*/].f_15 > 3000 && !is_bit_set(Local_755[iParam0 /*33*/].f_14, false))
			{
				if (!is_ped_injured(Local_755[6 /*33*/]))
				{
					task_look_at_entity(Local_755[iParam0 /*33*/], Local_755[6 /*33*/], 4000, 0, 2);
					set_bit(&(Local_755[iParam0 /*33*/].f_14), false);
				}
			}
			else if (Local_755[iParam0 /*33*/].f_15 > 11000 && !is_bit_set(Local_755[iParam0 /*33*/].f_14, true))
			{
				task_look_at_coord(Local_755[iParam0 /*33*/], 2494.634f, 5001.994f, 46.6624f, 7000, 0, 2);
				set_bit(&(Local_755[iParam0 /*33*/].f_14), true);
			}
			else if (Local_755[iParam0 /*33*/].f_15 > 20000 && !is_bit_set(Local_755[iParam0 /*33*/].f_14, 2))
			{
				task_look_at_coord(Local_755[iParam0 /*33*/], 2477.634f, 4966.994f, 46.6624f, 7000, 0, 2);
				set_bit(&(Local_755[iParam0 /*33*/].f_14), 2);
			}
			break;
		
		case 4:
			if (Local_755[iParam0 /*33*/].f_15 > 3000 && !is_bit_set(Local_755[iParam0 /*33*/].f_14, false))
			{
				task_look_at_coord(Local_755[iParam0 /*33*/], 2505.634f, 4996.994f, 46.6624f, 5000, 0, 2);
				set_bit(&(Local_755[iParam0 /*33*/].f_14), false);
			}
			else if (Local_755[iParam0 /*33*/].f_15 > 10000 && !is_bit_set(Local_755[iParam0 /*33*/].f_14, true))
			{
				task_look_at_coord(Local_755[iParam0 /*33*/], 2461.449f, 4977.48f, 51.7483f, 6000, 0, 2);
				set_bit(&(Local_755[iParam0 /*33*/].f_14), true);
			}
			else if (Local_755[iParam0 /*33*/].f_15 > 18000 && !is_bit_set(Local_755[iParam0 /*33*/].f_14, 2))
			{
				task_look_at_coord(Local_755[iParam0 /*33*/], 2505.634f, 4996.994f, 46.6624f, 6000, 0, 2);
				set_bit(&(Local_755[iParam0 /*33*/].f_14), 2);
			}
			break;
	}
}

float func_95(float fParam0, float fParam1, float fParam2)
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

float func_96(struct<2> Param0, Vector3 fParam1, struct<2> Param2, float fParam3, int iParam4)
{
	float fVar0;
	Vector3 fVar1;
	Vector3 fVar2;
	
	fVar1 = Param3 - Param0;
	fVar2 = Param3.f_1 - Param0.f_1;
	if (fVar2 != 0f)
	{
		fVar0 = atan2(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam6 == 1)
	{
		fVar0 *= -1f;
		if (fVar0 < 0f)
		{
			fVar0 += 360f;
		}
	}
	return fVar0;
}

bool func_97(int iParam0, auto uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, char* sParam7, int iParam8)
{
	if (iParam3 == 0)
	{
		iParam3 = get_player_index();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!is_ped_injured(iParam0))
	{
		if (!does_ped_have_ai_blip(iParam0))
		{
			if (iParam8 == -1)
			{
				_0xD30C50DF888D58B5(iParam0, 1);
			}
			else
			{
				unk_0xB13DCB4C6FAAD238(iParam0, 1, iParam8);
			}
			*uParam1.f_7 = iParam0;
			_0xE52B8E7F85D39A08(iParam0, iParam2);
			_0x97C65887D4B37FA9(iParam0, fParam6);
			if (does_blip_exist(*uParam1))
			{
				set_blip_priority(*uParam1, 7);
			}
		}
		_0x0C4BBF625CA98C4E(iParam0, iParam4);
		hide_special_ability_lockon_operation(iParam0, iParam5);
		*uParam1 = _0x7CD934010E115C2C(iParam0);
		if (!is_bit_set(*uParam1.f_6, 2))
		{
			if (does_blip_exist(*uParam1))
			{
				if (!is_string_null_or_empty(sParam7))
				{
					begin_text_command_set_blip_name("MCUSTBLIP");
					add_text_component_substring_player_name(sParam7);
					end_text_command_set_blip_name(*uParam1);
				}
				set_bit(uParam1.f_6, 2);
			}
		}
		if (is_ped_in_any_vehicle(iParam0, 0))
		{
			*uParam1.f_1 = _0x56176892826A4FE8(iParam0);
			if (!is_bit_set(*uParam1.f_6, 3))
			{
				if (does_blip_exist(*uParam1.f_1))
				{
					set_blip_priority(*uParam1.f_1, 7);
					set_bit(uParam1.f_6, 3);
				}
			}
		}
		else if (does_blip_exist(*uParam1.f_1))
		{
			*uParam1.f_1 = 0;
			clear_bit(uParam1.f_6, 3);
		}
	}
	else
	{
		return true;
	}
	return false;
}

void func_98(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	if (!is_ped_injured(iParam0))
	{
		set_ped_seeing_range(iParam0, fParam1);
		set_ped_visual_field_peripheral_range(iParam0, fParam2);
		set_ped_visual_field_center_angle(iParam0, fParam3 / 2f);
		set_ped_visual_field_min_angle(iParam0, fParam4);
		set_ped_visual_field_max_angle(iParam0, fParam5);
	}
}

void func_99(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (!is_ped_injured(Local_755[iParam0 /*33*/]))
	{
		if (iParam0 >= 0)
		{
			Local_755[iParam0 /*33*/].f_4 = Local_755[iParam0 /*33*/].f_3;
			Local_755[iParam0 /*33*/].f_3 = iParam1;
			Local_755[iParam0 /*33*/].f_5 = iParam2;
			Local_755[iParam0 /*33*/].f_6 = {0f, 0f, 0f};
			Local_755[iParam0 /*33*/].f_9 = {0f, 0f, 0f};
			Local_755[iParam0 /*33*/].f_12 = 0f;
			Local_755[iParam0 /*33*/].f_13 = 0f;
			Local_755[iParam0 /*33*/].f_14 = iParam3;
			Local_755[iParam0 /*33*/].f_15 = 0;
			Local_1619[iParam0 /*24*/].f_3 = 3;
		}
	}
}

void func_100(int iParam0, int iParam1, auto uParam2, int iParam3, int iParam4, int iParam5)
{
	*iParam0[iParam1 /*24*/] = uParam2;
	*(iParam0[iParam1 /*24*/]).f_8 = iParam3;
	*(iParam0[iParam1 /*24*/]).f_20 = iParam4;
	*(iParam0[iParam1 /*24*/]).f_21 = iParam5;
	if (iParam1 > iLocal_52)
	{
		iLocal_52 = iParam1 + 1;
	}
}

bool func_101(int iParam0, int iParam1, Vector3 vParam2, Vector3 fParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	iParam1 = iParam1;
	iParam8 = iParam8;
	if (Local_755[iParam0 /*33*/].f_1 != 1 && Local_755[iParam0 /*33*/].f_1 != 0)
	{
		iVar0 = get_interior_at_coords(vParam2);
		if (iVar0 == 0)
		{
			return false;
		}
		else if (!is_interior_ready(iVar0))
		{
			return false;
		}
	}
	switch (iLocal_751)
	{
		case 0:
			Local_755[iParam0 /*33*/] = PED::CREATE_PED(26, joaat("a_m_m_hillbilly_01"), vParam2, fParam5, 1, true);
			set_ped_default_component_variation(Local_755[iParam0 /*33*/]);
			set_ped_component_variation(Local_755[iParam0 /*33*/], false, 0, 1, 0);
			set_ped_component_variation(Local_755[iParam0 /*33*/], 2, 0, 1, 0);
			set_ped_component_variation(Local_755[iParam0 /*33*/], 3, 1, 1, 0);
			set_ped_component_variation(Local_755[iParam0 /*33*/], 4, 1, 1, 0);
			break;
		
		case 1:
			Local_755[iParam0 /*33*/] = PED::CREATE_PED(26, joaat("a_m_m_hillbilly_02"), vParam2, fParam5, 1, true);
			set_ped_default_component_variation(Local_755[iParam0 /*33*/]);
			set_ped_component_variation(Local_755[iParam0 /*33*/], 2, 1, 0, 0);
			set_ped_component_variation(Local_755[iParam0 /*33*/], 4, 0, 1, 0);
			break;
		
		case 2:
			Local_755[iParam0 /*33*/] = PED::CREATE_PED(26, joaat("a_m_y_methhead_01"), vParam2, fParam5, 1, true);
			set_ped_default_component_variation(Local_755[iParam0 /*33*/]);
			set_ped_component_variation(Local_755[iParam0 /*33*/], false, 0, 1, 0);
			set_ped_component_variation(Local_755[iParam0 /*33*/], 3, 1, 0, 0);
			break;
		
		case 3:
			Local_755[iParam0 /*33*/] = PED::CREATE_PED(26, joaat("a_m_m_hillbilly_01"), vParam2, fParam5, 1, true);
			set_ped_default_component_variation(Local_755[iParam0 /*33*/]);
			set_ped_component_variation(Local_755[iParam0 /*33*/], false, 0, 2, 0);
			set_ped_component_variation(Local_755[iParam0 /*33*/], 2, 1, 2, 0);
			set_ped_component_variation(Local_755[iParam0 /*33*/], 3, 1, 0, 0);
			set_ped_component_variation(Local_755[iParam0 /*33*/], 4, 1, 0, 0);
			break;
		
		case 4:
			Local_755[iParam0 /*33*/] = PED::CREATE_PED(26, joaat("a_m_m_hillbilly_02"), vParam2, fParam5, 1, true);
			set_ped_default_component_variation(Local_755[iParam0 /*33*/]);
			set_ped_component_variation(Local_755[iParam0 /*33*/], false, 0, 2, 0);
			set_ped_component_variation(Local_755[iParam0 /*33*/], 3, 1, 0, 0);
			break;
		
		case 5:
			Local_755[iParam0 /*33*/] = PED::CREATE_PED(26, joaat("a_m_y_methhead_01"), vParam2, fParam5, 1, true);
			set_ped_default_component_variation(Local_755[iParam0 /*33*/]);
			set_ped_component_variation(Local_755[iParam0 /*33*/], 4, 1, 2, 0);
			break;
		
		case 6:
			Local_755[iParam0 /*33*/] = PED::CREATE_PED(26, joaat("a_m_m_hillbilly_01"), vParam2, fParam5, 1, true);
			set_ped_default_component_variation(Local_755[iParam0 /*33*/]);
			set_ped_component_variation(Local_755[iParam0 /*33*/], 2, 1, 0, 0);
			set_ped_component_variation(Local_755[iParam0 /*33*/], 3, 0, 1, 0);
			set_ped_component_variation(Local_755[iParam0 /*33*/], 4, 0, 1, 0);
			break;
		
		case 7:
			Local_755[iParam0 /*33*/] = PED::CREATE_PED(26, joaat("a_m_m_hillbilly_02"), vParam2, fParam5, 1, true);
			set_ped_default_component_variation(Local_755[iParam0 /*33*/]);
			set_ped_component_variation(Local_755[iParam0 /*33*/], false, 0, 1, 0);
			set_ped_component_variation(Local_755[iParam0 /*33*/], 2, 2, 0, 0);
			set_ped_component_variation(Local_755[iParam0 /*33*/], 3, 2, 0, 0);
			set_ped_component_variation(Local_755[iParam0 /*33*/], 4, 0, 2, 0);
			break;
		
		case 8:
			Local_755[iParam0 /*33*/] = PED::CREATE_PED(26, joaat("a_m_y_methhead_01"), vParam2, fParam5, 1, true);
			set_ped_default_component_variation(Local_755[iParam0 /*33*/]);
			set_ped_component_variation(Local_755[iParam0 /*33*/], 3, 1, 0, 0);
			set_ped_component_variation(Local_755[iParam0 /*33*/], 4, 1, 0, 0);
			break;
		
		case 9:
			Local_755[iParam0 /*33*/] = PED::CREATE_PED(26, joaat("a_m_m_hillbilly_02"), vParam2, fParam5, 1, true);
			set_ped_default_component_variation(Local_755[iParam0 /*33*/]);
			set_ped_component_variation(Local_755[iParam0 /*33*/], false, 0, 2, 0);
			set_ped_component_variation(Local_755[iParam0 /*33*/], 3, 1, 2, 0);
			break;
		
		case 10:
			Local_755[iParam0 /*33*/] = PED::CREATE_PED(26, joaat("a_m_y_methhead_01"), vParam2, fParam5, 1, true);
			set_ped_default_component_variation(Local_755[iParam0 /*33*/]);
			set_ped_component_variation(Local_755[iParam0 /*33*/], 3, 0, 1, 0);
			set_ped_component_variation(Local_755[iParam0 /*33*/], 4, 0, 1, 0);
			break;
		
		case 11:
			Local_755[iParam0 /*33*/] = PED::CREATE_PED(26, joaat("a_m_m_hillbilly_02"), vParam2, fParam5, 1, true);
			set_ped_default_component_variation(Local_755[iParam0 /*33*/]);
			set_ped_component_variation(Local_755[iParam0 /*33*/], 2, 2, 0, 0);
			set_ped_component_variation(Local_755[iParam0 /*33*/], 3, 2, 2, 0);
			break;
		
		case 12:
			Local_755[iParam0 /*33*/] = PED::CREATE_PED(26, joaat("a_m_m_hillbilly_01"), vParam2, fParam5, 1, true);
			set_ped_default_component_variation(Local_755[iParam0 /*33*/]);
			set_ped_component_variation(Local_755[iParam0 /*33*/], false, 0, 2, 0);
			set_ped_component_variation(Local_755[iParam0 /*33*/], 2, 0, 2, 0);
			set_ped_component_variation(Local_755[iParam0 /*33*/], 3, 1, 2, 0);
			set_ped_component_variation(Local_755[iParam0 /*33*/], 4, 1, 2, 0);
			break;
		
		case 13:
			Local_755[iParam0 /*33*/] = PED::CREATE_PED(26, joaat("a_m_m_hillbilly_02"), vParam2, fParam5, 1, true);
			set_ped_default_component_variation(Local_755[iParam0 /*33*/]);
			set_ped_component_variation(Local_755[iParam0 /*33*/], false, 0, 1, 0);
			set_ped_component_variation(Local_755[iParam0 /*33*/], 2, 1, 0, 0);
			set_ped_component_variation(Local_755[iParam0 /*33*/], 3, 1, 1, 0);
			set_ped_component_variation(Local_755[iParam0 /*33*/], 4, 0, 2, 0);
			break;
		
		case 14:
			Local_755[iParam0 /*33*/] = PED::CREATE_PED(26, joaat("a_m_y_methhead_01"), vParam2, fParam5, 1, true);
			set_ped_default_component_variation(Local_755[iParam0 /*33*/]);
			set_ped_component_variation(Local_755[iParam0 /*33*/], false, 0, 1, 0);
			set_ped_component_variation(Local_755[iParam0 /*33*/], 3, 0, 2, 0);
			set_ped_component_variation(Local_755[iParam0 /*33*/], 4, 0, 2, 0);
			break;
		
		case 15:
			Local_755[iParam0 /*33*/] = PED::CREATE_PED(26, joaat("a_m_m_hillbilly_02"), vParam2, fParam5, 1, true);
			set_ped_default_component_variation(Local_755[iParam0 /*33*/]);
			set_ped_component_variation(Local_755[iParam0 /*33*/], false, 0, 1, 0);
			set_ped_component_variation(Local_755[iParam0 /*33*/], 2, 2, 0, 0);
			set_ped_component_variation(Local_755[iParam0 /*33*/], 4, 0, 2, 0);
			break;
		
		case 16:
			Local_755[iParam0 /*33*/] = PED::CREATE_PED(26, joaat("a_m_y_methhead_01"), vParam2, fParam5, 1, true);
			set_ped_default_component_variation(Local_755[iParam0 /*33*/]);
			set_ped_component_variation(Local_755[iParam0 /*33*/], false, 0, 2, 0);
			set_ped_component_variation(Local_755[iParam0 /*33*/], 3, 0, 1, 0);
			set_ped_component_variation(Local_755[iParam0 /*33*/], 4, 1, 1, 0);
			break;
		
		case 17:
			Local_755[iParam0 /*33*/] = PED::CREATE_PED(26, joaat("a_m_m_hillbilly_02"), vParam2, fParam5, 1, true);
			set_ped_default_component_variation(Local_755[iParam0 /*33*/]);
			set_ped_component_variation(Local_755[iParam0 /*33*/], false, 0, 2, 0);
			set_ped_component_variation(Local_755[iParam0 /*33*/], 2, 2, 0, 0);
			set_ped_component_variation(Local_755[iParam0 /*33*/], 3, 1, 2, 0);
			set_ped_component_variation(Local_755[iParam0 /*33*/], 4, 0, 1, 0);
			break;
	}
	if (iLocal_751 > 17)
	{
		Local_755[iParam0 /*33*/] = PED::CREATE_PED(26, joaat("a_m_y_methhead_01"), vParam2, fParam5, 1, true);
		set_ped_random_component_variation(Local_755[iParam0 /*33*/], 0);
	}
	iLocal_751++;
	if (Local_755[iParam0 /*33*/].f_1 == 5)
	{
		set_blocking_of_non_temporary_events(Local_755[iParam0 /*33*/], true);
		PED::PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_755[iParam0 /*33*/], iLocal_1617);
	}
	else
	{
		give_weapon_to_ped(Local_755[iParam0 /*33*/], iParam6, 3000, iParam7, true);
		PED::PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_755[iParam0 /*33*/], iLocal_1616);
		set_ped_as_enemy(Local_755[iParam0 /*33*/], 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_755[iParam0 /*33*/], 9, true);
		set_ped_hearing_range(Local_755[iParam0 /*33*/], 120f);
		set_ped_seeing_range(Local_755[iParam0 /*33*/], 22f);
		set_ped_id_range(Local_755[iParam0 /*33*/], 22f);
		PED::SET_PED_CONFIG_FLAG(Local_755[iParam0 /*33*/], 118, false);
		PED::SET_COMBAT_FLOAT(Local_755[iParam0 /*33*/], 14, 3f);
		if (Local_755[iParam0 /*33*/].f_1 == 2)
		{
			set_ped_accuracy(Local_755[iParam0 /*33*/], 12);
		}
		else
		{
			set_ped_accuracy(Local_755[iParam0 /*33*/], 45);
		}
		set_ped_dies_when_injured(Local_755[iParam0 /*33*/], true);
		set_entity_only_damaged_by_player(Local_755[iParam0 /*33*/], true);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_755[iParam0 /*33*/], 15, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_755[iParam0 /*33*/], 17, false);
		func_102(Local_755[iParam0 /*33*/], 1);
	}
	stop_ped_weapon_firing_when_dropped(Local_755[iParam0 /*33*/]);
	_0x3910051CCECDB00C(Local_755[iParam0 /*33*/], true);
	_0xEC6935EBE0847B90(Local_755[iParam0 /*33*/], 0f, 0f, 0f);
	_0x5B6010B3CBC29095(Local_755[iParam0 /*33*/], 1);
	_0xCEDA60A74219D064(Local_755[iParam0 /*33*/], 1);
	set_entity_health(Local_755[iParam0 /*33*/], 150);
	return true;
}

void func_102(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	if (iParam1)
	{
		iVar0 = 0;
		while (iVar0 < 64)
		{
			if (Global_55779[iVar0 /*2*/] != 0)
			{
				if (Global_55779[iVar0 /*2*/] == iParam0)
				{
					return;
				}
			}
			iVar0++;
		}
	}
	if (64 == Global_55778)
	{
		return;
	}
	iVar1 = -1;
	iVar2 = 0;
	while (iVar1 == -1 && iVar2 != 64)
	{
		if (Global_55779[iVar2 /*2*/] == 0)
		{
			iVar1 = iVar2;
		}
		iVar2++;
	}
	if (iVar1 == -1)
	{
		return;
	}
	Global_55779[iVar1 /*2*/] = iParam0;
	Global_55779[iVar1 /*2*/].f_1 = 7;
	Global_55778++;
}

void func_103(auto uParam0, auto uParam1, Vector3 vParam2, Vector3 vParam3, Vector3 vParam4, Vector3 vParam5, Vector3 vParam6, Vector3 vParam7, Vector3 vParam8, Vector3 vParam9, Vector3 vParam10, Vector3 vParam11)
{
	if (iLocal_52 > 0)
	{
		func_115(uParam0, vParam20, vParam23, vParam14, vParam17);
		func_107(uParam0, uParam1, vParam2, vParam5, vParam8);
		func_104(uParam0, vParam11, vParam14, vParam17, vParam20, vParam23, vParam26, vParam29);
	}
}

void func_104(auto uParam0, Vector3 vParam1, Vector3 vParam2, Vector3 vParam3, Vector3 vParam4, Vector3 vParam5, Vector3 vParam6, Vector3 vParam7)
{
	if (is_gameplay_cam_rendering())
	{
		if (iLocal_77)
		{
			if (((iLocal_60 > iLocal_68 || iLocal_69 != iLocal_61) || (iLocal_60 < iLocal_68 && iLocal_60 == 8)) || (iLocal_60 == 10 && iLocal_53 == 0))
			{
				iLocal_67 = 1;
				iLocal_68 = iLocal_60;
				iLocal_69 = iLocal_61;
			}
			switch (iLocal_67)
			{
				case 1:
					if (iLocal_61 > -1)
					{
						if (!is_ped_dead_or_dying(*uParam0[iLocal_61 /*24*/], 1))
						{
							switch (iLocal_60)
							{
								case 8:
									if (!iLocal_53)
									{
										if (!iLocal_56)
										{
											if (!iLocal_76)
											{
												if (!func_82(vParam13.y))
												{
													func_88();
													if (func_105(vParam13.y, vParam13.z, *uParam0[iLocal_61 /*24*/], vParam13.x, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
													{
														iLocal_67 = 2;
													}
												}
											}
											else
											{
												iLocal_67 = 2;
											}
										}
										else if (!func_82(vParam10.y))
										{
											func_88();
											if (func_105(vParam10.y, vParam10.z, *uParam0[iLocal_61 /*24*/], vParam10.x, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												iLocal_67 = 2;
											}
										}
									}
									else
									{
										iLocal_67 = 2;
									}
									break;
								
								case 7:
									iLocal_76 = 0;
									func_88();
									if (func_105(vParam1.y, vParam1.z, *uParam0[iLocal_61 /*24*/], vParam1.x, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
									{
										iLocal_67 = 2;
									}
									break;
								
								case 5:
									iLocal_76 = 0;
									func_88();
									if (func_105(vParam16.y, vParam16.z, *uParam0[iLocal_61 /*24*/], vParam16.x, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
									{
										iLocal_67 = 2;
									}
									break;
								
								case 3:
									if (!iLocal_53 && !iLocal_76)
									{
										func_88();
										if (func_105(vParam19.y, vParam19.z, *uParam0[iLocal_61 /*24*/], vParam19.x, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											iLocal_67 = 2;
										}
									}
									else
									{
										iLocal_67 = 2;
									}
									break;
								
								case 6:
									if (!iLocal_56)
									{
										if (((!func_82(vParam4.y) && !func_82(vParam7.y)) && !func_82(vParam10.y)) && !func_82(vParam13.y))
										{
											iLocal_76 = 0;
											func_88();
											if (func_105(vParam4.y, vParam4.z, *uParam0[iLocal_61 /*24*/], vParam4.x, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												iLocal_67 = 2;
											}
										}
									}
									else
									{
										iLocal_67 = 2;
									}
									break;
								
								case 10:
								case 9:
									if (!iLocal_56)
									{
										if (((!func_82(vParam4.y) && !func_82(vParam7.y)) && !func_82(vParam10.y)) && !func_82(vParam13.y))
										{
											iLocal_76 = 0;
											func_88();
											if (func_105(vParam7.y, vParam7.z, *uParam0[iLocal_61 /*24*/], vParam7.x, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												iLocal_67 = 2;
											}
										}
									}
									else
									{
										if (!iLocal_53)
										{
											if (func_105(vParam10.y, vParam10.z, *uParam0[iLocal_61 /*24*/], vParam10.x, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												iLocal_76 = 0;
												iLocal_67 = 2;
											}
										}
										iLocal_67 = 2;
									}
									break;
							}
						}
						else
						{
							iLocal_67 = 2;
						}
					}
					else
					{
						iLocal_67 = 2;
					}
					break;
				
				case 2:
					if (!func_59())
					{
						iLocal_67 = 0;
					}
					break;
				}
			}
	}
}

bool func_105(char* sParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, char* sParam12, int iParam13)
{
	func_58(sParam0, iParam1, iParam4, iParam7, iParam10);
	func_106(iParam1, iParam2, sParam3);
	if (iParam4 != -1)
	{
		func_106(iParam4, iParam5, sParam6);
	}
	if (iParam7 != -1)
	{
		func_106(iParam7, iParam8, sParam9);
	}
	if (iParam10 != -1)
	{
		func_106(iParam10, iParam11, sParam12);
	}
	if (!func_53())
	{
		if (!is_message_being_displayed())
		{
			if (func_36(&Local_89, sLocal_254, sParam0, iParam13, 0, 0, 0))
			{
				iLocal_256 = 0;
				return true;
			}
			else if (iLocal_255 != get_game_timer())
			{
				iLocal_256++;
				iLocal_255 = get_game_timer();
				if (iLocal_256 >= 10)
				{
					iLocal_256 = 0;
					return true;
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
	return false;
}

void func_106(int iParam0, int iParam1, char* sParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_78)
	{
		if (iLocal_78[iVar0] == iParam1)
		{
			func_57(&Local_89, iVar0);
			iLocal_78[iVar0] = 0;
		}
		iVar0++;
	}
	if (iLocal_78[iParam0] != 0)
	{
		func_57(&Local_89, iParam0);
	}
	func_56(&Local_89, iParam0, iParam1, sParam2, 0, 1);
	iLocal_78[iParam0] = iParam1;
}

void func_107(auto uParam0, auto uParam1, Vector3 vParam2, Vector3 vParam3, Vector3 vParam4)
{
	int iVar0;
	float fVar1;
	int iVar2;
	Vector3 vVar3;
	int iVar6;
	Vector3 vVar7;
	Vector3 vVar10;
	float fVar13;
	int iVar14;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!is_ped_dead_or_dying(*uParam0[iVar0 /*24*/], 1) && !is_ped_being_stealth_killed(*uParam0[iVar0 /*24*/]))
		{
			if (!*(uParam0[iVar0 /*24*/]).f_21)
			{
				switch (*(uParam0[iVar0 /*24*/]).f_3)
				{
					case 4:
						if ((is_ped_using_scenario(*uParam0[iVar0 /*24*/], "PROP_HUMAN_SEAT_CHAIR") || is_ped_using_scenario(*uParam0[iVar0 /*24*/], "PROP_HUMAN_SEAT_ARMCHAIR")) || get_script_task_status(*uParam0[iVar0 /*24*/], 1785177548) == 1)
						{
							if (!is_ped_injured(*uParam0[iVar0 /*24*/]))
							{
								clear_ped_tasks(*uParam0[iVar0 /*24*/]);
							}
							if (!is_ped_dead_or_dying(*uParam0[iVar0 /*24*/], 1))
							{
								_0xF1C03A5352243A30(*uParam0[iVar0 /*24*/]);
							}
						}
						else if (get_script_task_status(*uParam0[iVar0 /*24*/], 1647992574) == 7)
						{
							switch (*(uParam0[iVar0 /*24*/]).f_4)
							{
								case 0:
									if (!is_ped_dead_or_dying(*uParam0[iVar0 /*24*/], 1))
									{
										_0xF1C03A5352243A30(*uParam0[iVar0 /*24*/]);
									}
									if (!is_ped_using_scenario(*uParam0[iVar0 /*24*/], "PROP_HUMAN_SEAT_CHAIR") && !is_ped_using_scenario(*uParam0[iVar0 /*24*/], "PROP_HUMAN_SEAT_ARMCHAIR"))
									{
										if (is_ped_in_any_vehicle(*uParam0[iVar0 /*24*/], 0))
										{
											iVar2 = get_vehicle_ped_is_using(*uParam0[iVar0 /*24*/]);
											if (is_vehicle_driveable(iVar2, 0))
											{
												if (is_playback_going_on_for_vehicle(iVar2))
												{
													vVar3 = {get_entity_velocity(iVar2)};
													stop_playback_recorded_vehicle(iVar2);
													set_entity_velocity(iVar2, vVar3);
													task_leave_any_vehicle(*uParam0[iVar0 /*24*/], 0, 0);
												}
											}
										}
										if (!is_ped_in_any_vehicle(*uParam0[iVar0 /*24*/], 0))
										{
											switch (*(uParam0[iVar0 /*24*/]).f_1)
											{
												case 2:
													switch (*(uParam0[iVar0 /*24*/]).f_5)
													{
														case 0:
															if (*(uParam0[iVar0 /*24*/]).f_10 >= 0)
															{
																if (does_entity_exist(*uParam0[*(uParam0[iVar0 /*24*/]).f_10 /*24*/]))
																{
																	fVar1 = func_113(*uParam0[iVar0 /*24*/], *uParam0[*(uParam0[iVar0 /*24*/]).f_10 /*24*/]);
																	if (fVar1 > -45f && fVar1 < 45f)
																	{
																		*(uParam0[iVar0 /*24*/]).f_5 = 1;
																	}
																	else if (fVar1 > -135f && fVar1 <= -45f)
																	{
																		*(uParam0[iVar0 /*24*/]).f_5 = 2;
																	}
																	else if (fVar1 >= 45f && fVar1 <= 135f)
																	{
																		*(uParam0[iVar0 /*24*/]).f_5 = 3;
																	}
																	else
																	{
																		*(uParam0[iVar0 /*24*/]).f_5 = 4;
																	}
																	*(uParam0[iVar0 /*24*/]).f_11 = get_game_timer() + 500;
																}
																else
																{
																	*(uParam0[iVar0 /*24*/]).f_1 = 0;
																}
															}
															break;
														
														case 1:
															if (get_game_timer() > *(uParam0[iVar0 /*24*/]).f_11)
															{
																func_93();
																task_set_blocking_of_non_temporary_events(false, 1);
																task_play_anim(false, "misschinese2_bank1", "react_forward_small_intro_a", 4f, -4f, -1, 0, 0, 0, 0, 0);
																task_set_blocking_of_non_temporary_events(false, 0);
																func_92(uParam0[iVar0 /*24*/], 0);
																*(uParam0[iVar0 /*24*/]).f_4++;
															}
															break;
														
														case 2:
															if (get_game_timer() > *(uParam0[iVar0 /*24*/]).f_11)
															{
																func_93();
																task_set_blocking_of_non_temporary_events(false, 1);
																task_play_anim(false, "misschinese2_bank1", "react_left_small_intro_a", 4f, -4f, -1, 0, 0, 0, 0, 0);
																task_set_blocking_of_non_temporary_events(false, 0);
																func_92(uParam0[iVar0 /*24*/], 0);
																*(uParam0[iVar0 /*24*/]).f_4++;
															}
															break;
														
														case 3:
															if (get_game_timer() > *(uParam0[iVar0 /*24*/]).f_11)
															{
																func_93();
																task_set_blocking_of_non_temporary_events(false, 1);
																task_play_anim(false, "misschinese2_bank1", "react_right_small_intro_a", 4f, -4f, -1, 0, 0, 0, 0, 0);
																task_set_blocking_of_non_temporary_events(false, 0);
																func_92(uParam0[iVar0 /*24*/], 0);
																*(uParam0[iVar0 /*24*/]).f_4++;
															}
															break;
														
														case 4:
															if (get_game_timer() > *(uParam0[iVar0 /*24*/]).f_11)
															{
																func_93();
																task_set_blocking_of_non_temporary_events(false, 1);
																task_play_anim(false, "misschinese2_bank1", "react_backward_small_intro_a", 4f, -4f, -1, 0, 0, 0, 0, 0);
																task_set_blocking_of_non_temporary_events(false, 0);
																func_92(uParam0[iVar0 /*24*/], 0);
																*(uParam0[iVar0 /*24*/]).f_4++;
															}
															break;
													}
													break;
												
												case 7:
													if (*(uParam0[iVar0 /*24*/]).f_5 < 2)
													{
														clear_ped_tasks(*uParam0[iVar0 /*24*/]);
														*(uParam0[iVar0 /*24*/]).f_5 = iLocal_63;
														iLocal_63++;
														if (iLocal_63 == 2)
														{
															iLocal_63 = 0;
														}
													}
													switch (*(uParam0[iVar0 /*24*/]).f_5)
													{
														case 0:
															WEAPON::SET_CURRENT_PED_WEAPON(*uParam0[iVar0 /*24*/], get_best_ped_weapon(*uParam0[iVar0 /*24*/], 0), true);
															func_93();
															if (!is_ped_in_any_vehicle(*uParam0[iVar0 /*24*/], 1))
															{
																task_set_blocking_of_non_temporary_events(false, 1);
																task_play_anim(false, "misschinese2_bank1", "buddy_shot_b", 4f, -4f, -1, 0, 0, 0, 0, 0);
																task_set_blocking_of_non_temporary_events(false, 0);
															}
															else
															{
																*(uParam0[iVar0 /*24*/]).f_4++;
															}
															task_combat_hated_targets_around_ped(false, 200f, 0);
															func_92(uParam0[iVar0 /*24*/], 0);
															*(uParam0[iVar0 /*24*/]).f_5 = get_game_timer() + 3000;
															break;
														
														case 1:
															func_93();
															task_set_blocking_of_non_temporary_events(false, 1);
															iVar6 = func_112();
															task_set_blocking_of_non_temporary_events(false, 0);
															task_combat_hated_targets_around_ped(false, 200f, 0);
															func_92(uParam0[iVar0 /*24*/], 0);
															*(uParam0[iVar0 /*24*/]).f_5 = get_game_timer() + iVar6;
															break;
														
														default:
															if (is_entity_playing_anim(*uParam0[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b", 3))
															{
																if (get_entity_anim_current_time(*uParam0[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b") < 0.2f)
																{
																	set_entity_anim_current_time(*uParam0[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b", 0.2f);
																}
															}
															if (get_game_timer() > *(uParam0[iVar0 /*24*/]).f_5)
															{
																*(uParam0[iVar0 /*24*/]).f_4++;
															}
															break;
													}
													break;
												
												case 5:
													if (*(uParam0[iVar0 /*24*/]).f_5 <= 2)
													{
														*(uParam0[iVar0 /*24*/]).f_5 = iLocal_64;
														iLocal_64++;
														if (iLocal_64 == 2)
														{
															iLocal_64 = 0;
														}
													}
													if (!is_ped_in_any_vehicle(*uParam0[iVar0 /*24*/], 1))
													{
														switch (*(uParam0[iVar0 /*24*/]).f_5)
														{
															case 0:
																set_blocking_of_non_temporary_events(*uParam0[iVar0 /*24*/], true);
																task_play_anim(*uParam0[iVar0 /*24*/], "misschinese2_bank1", "alert_gunshot", 4f, -4f, -1, 8, 0, 0, 0, 0);
																*(uParam0[iVar0 /*24*/]).f_5 = 3;
																break;
															
															case 1:
																set_blocking_of_non_temporary_events(*uParam0[iVar0 /*24*/], true);
																task_play_anim(*uParam0[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b", 4f, -4f, -1, 8, 0, 0, 0, 0);
																WEAPON::SET_CURRENT_PED_WEAPON(*uParam0[iVar0 /*24*/], get_best_ped_weapon(*uParam0[iVar0 /*24*/], 0), true);
																*(uParam0[iVar0 /*24*/]).f_5 = 3;
																break;
															
															case 3:
																if (is_entity_playing_anim(*uParam0[iVar0 /*24*/], "misschinese2_bank1", "alert_gunshot", 3))
																{
																	if (get_entity_anim_current_time(*uParam0[iVar0 /*24*/], "misschinese2_bank1", "alert_gunshot") > 0.95f)
																	{
																		if (func_110(iVar0, uParam0, 0))
																		{
																			*(uParam0[iVar0 /*24*/]).f_5 = 4;
																		}
																		else
																		{
																			task_play_anim(*uParam0[iVar0 /*24*/], "reaction@male_stand@big_variations@b", "react_big_variations_d", 4f, -2f, get_random_int_in_range(4000, 6000), 8, 0, 0, 0, 0);
																			*(uParam0[iVar0 /*24*/]).f_5 = 6;
																		}
																	}
																}
																if (is_entity_playing_anim(*uParam0[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b", 3))
																{
																	if (get_entity_anim_current_time(*uParam0[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b") > 0.95f)
																	{
																		if (func_110(iVar0, uParam0, 0))
																		{
																			*(uParam0[iVar0 /*24*/]).f_5 = 5;
																		}
																		else
																		{
																			task_play_anim(*uParam0[iVar0 /*24*/], "reaction@male_stand@big_variations@b", "react_big_variations_e", 4f, -2f, get_random_int_in_range(4000, 6000), 8, 0, 0, 0, 0);
																			*(uParam0[iVar0 /*24*/]).f_5 = 6;
																		}
																	}
																}
																break;
															
															case 4:
																if (absf(get_entity_heading(*uParam0[iVar0 /*24*/]) - *(uParam0[iVar0 /*24*/]).f_18) < 10f)
																{
																	task_play_anim(*uParam0[iVar0 /*24*/], "reaction@male_stand@big_variations@b", "react_big_variations_d", 4f, -2f, get_random_int_in_range(6000, 9000), 8, 0, 0, 0, 0);
																	*(uParam0[iVar0 /*24*/]).f_5 = 6;
																}
																break;
															
															case 5:
																if (absf(get_entity_heading(*uParam0[iVar0 /*24*/]) - *(uParam0[iVar0 /*24*/]).f_18) < 10f)
																{
																	task_play_anim(*uParam0[iVar0 /*24*/], "reaction@male_stand@big_variations@b", "react_big_variations_f", 4f, -2f, get_random_int_in_range(6000, 9000), 8, 0, 0, 0, 0);
																	*(uParam0[iVar0 /*24*/]).f_5 = 6;
																}
																break;
															
															case 6:
																if (get_script_task_status(*uParam0[iVar0 /*24*/], -2017877118) == 7)
																{
																	*(uParam0[iVar0 /*24*/]).f_5 = 0;
																	*(uParam0[iVar0 /*24*/]).f_4++;
																}
																break;
														}
													}
													else
													{
														*(uParam0[iVar0 /*24*/]).f_5 = 0;
														*(uParam0[iVar0 /*24*/]).f_4++;
													}
													break;
												
												case 4:
													switch (*(uParam0[iVar0 /*24*/]).f_5)
													{
														case 0:
															*(uParam0[iVar0 /*24*/]).f_5 = get_game_timer() + get_random_int_in_range(false, 2000);
															break;
														
														default:
															if (get_game_timer() > *(uParam0[iVar0 /*24*/]).f_5)
															{
																*(uParam0[iVar0 /*24*/]).f_3 = 5;
																*(uParam0[iVar0 /*24*/]).f_1 = 0;
																*(uParam0[iVar0 /*24*/]).f_4 = 0;
															}
															break;
													}
													break;
												
												case 8:
													if (*(uParam0[iVar0 /*24*/]).f_3 != 6 && *(uParam0[iVar0 /*24*/]).f_3 != 5)
													{
														*(uParam0[iVar0 /*24*/]).f_3 = 5;
														*(uParam0[iVar0 /*24*/]).f_4 = 0;
													}
													break;
												
												case 10:
													if (*(uParam0[iVar0 /*24*/]).f_3 != 6)
													{
														*(uParam0[iVar0 /*24*/]).f_3 = 6;
														*(uParam0[iVar0 /*24*/]).f_4 = 0;
													}
													break;
												
												case 3:
													switch (*(uParam0[iVar0 /*24*/]).f_5)
													{
														case 0:
															*(uParam0[iVar0 /*24*/]).f_5 = get_game_timer() + get_random_int_in_range(false, 2000);
															break;
														
														default:
															if (get_game_timer() > *(uParam0[iVar0 /*24*/]).f_5)
															{
																if (*(uParam0[iVar0 /*24*/]).f_3 != 6 && *(uParam0[iVar0 /*24*/]).f_3 != 5)
																{
																	*(uParam0[iVar0 /*24*/]).f_3 = 5;
																	*(uParam0[iVar0 /*24*/]).f_1 = 0;
																	*(uParam0[iVar0 /*24*/]).f_4 = 0;
																}
															}
															break;
													}
													break;
												
												case 1:
													iLocal_62 = iVar0;
													if (func_109(iVar0, uParam0, "", vParam2, vParam5, vParam8, 0))
													{
														*(uParam0[iVar0 /*24*/]).f_3 = 5;
														*(uParam0[iVar0 /*24*/]).f_1 = 0;
														*(uParam0[iVar0 /*24*/]).f_4 = 0;
													}
													break;
												
												case 6:
													switch (*(uParam0[iVar0 /*24*/]).f_5)
													{
														case 0:
															if (iLocal_65 == 0)
															{
																if (!is_ped_in_any_vehicle(*uParam0[iVar0 /*24*/], 1))
																{
																	vVar7 = {get_entity_coords(*uParam0[iVar0 /*24*/], 1)};
																	vVar10 = {get_entity_coords(player_ped_id(), 1)};
																	fVar13 = atan(vVar10.z - vVar7.z / func_4(*uParam0[iVar0 /*24*/], player_ped_id(), 0));
																	if (fVar13 > 20f)
																	{
																		*(uParam0[iVar0 /*24*/]).f_5 = 1;
																	}
																	else if (fVar13 < -20f)
																	{
																		*(uParam0[iVar0 /*24*/]).f_5 = 2;
																	}
																	else
																	{
																		*(uParam0[iVar0 /*24*/]).f_5 = 3;
																	}
																}
																else
																{
																	*(uParam0[iVar0 /*24*/]).f_3 = 6;
																	*(uParam0[iVar0 /*24*/]).f_1 = 10;
																	*(uParam0[iVar0 /*24*/]).f_4 = 0;
																}
																iLocal_65++;
															}
															else
															{
																*(uParam0[iVar0 /*24*/]).f_3 = 6;
																*(uParam0[iVar0 /*24*/]).f_1 = 10;
																*(uParam0[iVar0 /*24*/]).f_4 = 0;
															}
															break;
														
														case 1:
															func_93();
															task_set_blocking_of_non_temporary_events(false, 1);
															task_turn_ped_to_face_entity(false, player_ped_id(), 1000);
															task_play_anim(false, "misschinese2_bank1", "spot_high", 4f, -8f, -1, 0, 0, 0, 0, 0);
															task_set_blocking_of_non_temporary_events(false, 0);
															func_92(uParam0[iVar0 /*24*/], 0);
															*(uParam0[iVar0 /*24*/]).f_5 = 4;
															break;
														
														case 2:
															func_93();
															task_set_blocking_of_non_temporary_events(false, 1);
															task_turn_ped_to_face_entity(false, player_ped_id(), 1000);
															task_play_anim(false, "misschinese2_bank1", "spot_low", 4f, -8f, -1, 0, 0, 0, 0, 0);
															task_set_blocking_of_non_temporary_events(false, 0);
															func_92(uParam0[iVar0 /*24*/], 0);
															*(uParam0[iVar0 /*24*/]).f_5 = 4;
															break;
														
														case 3:
															func_93();
															task_set_blocking_of_non_temporary_events(false, 1);
															task_turn_ped_to_face_entity(false, player_ped_id(), 1000);
															task_play_anim(false, "misschinese2_bank1", "spot_mid", 4f, -8f, -1, 0, 0, 0, 0, 0);
															task_set_blocking_of_non_temporary_events(false, 0);
															func_92(uParam0[iVar0 /*24*/], 0);
															*(uParam0[iVar0 /*24*/]).f_5 = 4;
															break;
														
														case 4:
															if (iLocal_56)
															{
																if (absf(func_113(*uParam0[iVar0 /*24*/], player_ped_id())) < 20f)
																{
																	if (is_entity_playing_anim(*uParam0[iVar0 /*24*/], "misschinese2_bank1", "spot_high", 3))
																	{
																		if (get_entity_anim_current_time(*uParam0[iVar0 /*24*/], "misschinese2_bank1", "spot_high") > func_108(func_4(*uParam0[iVar0 /*24*/], player_ped_id(), 1) + 5f / 35f, 0.27f, 0.9f))
																		{
																			*(uParam0[iVar0 /*24*/]).f_3 = 6;
																			*(uParam0[iVar0 /*24*/]).f_1 = 10;
																			*(uParam0[iVar0 /*24*/]).f_4 = 0;
																		}
																	}
																	if (is_entity_playing_anim(*uParam0[iVar0 /*24*/], "misschinese2_bank1", "spot_mid", 3))
																	{
																		if (get_entity_anim_current_time(*uParam0[iVar0 /*24*/], "misschinese2_bank1", "spot_mid") > func_108(func_4(*uParam0[iVar0 /*24*/], player_ped_id(), 1) + 5f / 35f, 0.27f, 0.9f))
																		{
																			*(uParam0[iVar0 /*24*/]).f_3 = 6;
																			*(uParam0[iVar0 /*24*/]).f_1 = 10;
																			*(uParam0[iVar0 /*24*/]).f_4 = 0;
																		}
																	}
																	if (is_entity_playing_anim(*uParam0[iVar0 /*24*/], "misschinese2_bank1", "spot_low", 3))
																	{
																		if (get_entity_anim_current_time(*uParam0[iVar0 /*24*/], "misschinese2_bank1", "spot_low") > func_108(func_4(*uParam0[iVar0 /*24*/], player_ped_id(), 1) + 5f / 35f, 0.27f, 0.9f))
																		{
																			*(uParam0[iVar0 /*24*/]).f_3 = 6;
																			*(uParam0[iVar0 /*24*/]).f_1 = 10;
																			*(uParam0[iVar0 /*24*/]).f_4 = 0;
																		}
																	}
																}
																else
																{
																	*(uParam0[iVar0 /*24*/]).f_3 = 6;
																	*(uParam0[iVar0 /*24*/]).f_1 = 10;
																	*(uParam0[iVar0 /*24*/]).f_4 = 0;
																}
															}
															break;
													}
													break;
											}
										}
										else
										{
											*(uParam0[iVar0 /*24*/]).f_4++;
										}
									}
									break;
								
								case 1:
									if (!*(uParam0[iVar0 /*24*/]).f_21)
									{
										if (is_entity_playing_anim(*uParam0[iVar0 /*24*/], "misschinese2_bank1", "alert_gunshot", 3))
										{
											iVar14 = true;
											if (get_entity_anim_current_time(*uParam0[iVar0 /*24*/], "misschinese2_bank1", "alert_gunshot") > 0.9f)
											{
												iVar14 = false;
											}
										}
										if (is_entity_playing_anim(*uParam0[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b", 3))
										{
											iVar14 = true;
											if (get_entity_anim_current_time(*uParam0[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b") > 0.9f)
											{
												iVar14 = false;
											}
										}
										if (is_entity_playing_anim(*uParam0[iVar0 /*24*/], "misschinese2_bank1", "reaction_forward_big_intro_a", 3))
										{
											iVar14 = true;
											if (get_entity_anim_current_time(*uParam0[iVar0 /*24*/], "misschinese2_bank1", "reaction_forward_big_intro_a") > 0.9f)
											{
												iVar14 = false;
											}
										}
										if (is_entity_playing_anim(*uParam0[iVar0 /*24*/], "misschinese2_bank1", "alert_body", 3))
										{
											iVar14 = true;
											if (get_entity_anim_current_time(*uParam0[iVar0 /*24*/], "misschinese2_bank1", "alert_body") > 0.9f)
											{
												iVar14 = false;
											}
										}
										if (is_entity_playing_anim(*uParam0[iVar0 /*24*/], "misschinese2_bank1", "react_forward_small_intro_a", 3))
										{
											iVar14 = true;
											if (get_entity_anim_current_time(*uParam0[iVar0 /*24*/], "misschinese2_bank1", "react_forward_small_intro_a") > 0.9f)
											{
												iVar14 = false;
											}
										}
										if (is_entity_playing_anim(*uParam0[iVar0 /*24*/], "misschinese2_bank1", "react_backward_small_intro_a", 3))
										{
											iVar14 = true;
											if (get_entity_anim_current_time(*uParam0[iVar0 /*24*/], "misschinese2_bank1", "react_backward_small_intro_a") > 0.9f)
											{
												iVar14 = false;
											}
										}
										if (is_entity_playing_anim(*uParam0[iVar0 /*24*/], "misschinese2_bank1", "react_left_small_intro_a", 3))
										{
											iVar14 = true;
											if (get_entity_anim_current_time(*uParam0[iVar0 /*24*/], "misschinese2_bank1", "react_left_small_intro_a") > 0.9f)
											{
												iVar14 = false;
											}
										}
										if (is_entity_playing_anim(*uParam0[iVar0 /*24*/], "misschinese2_bank1", "react_right_small_intro_a", 3))
										{
											iVar14 = true;
											if (get_entity_anim_current_time(*uParam0[iVar0 /*24*/], "misschinese2_bank1", "react_right_small_intro_a") > 0.9f)
											{
												iVar14 = false;
											}
										}
										if (!iVar14)
										{
											*(uParam0[iVar0 /*24*/]).f_4 = 2;
											*(uParam0[iVar0 /*24*/]).f_5 = get_game_timer() + 2000;
											task_combat_ped(*uParam0[iVar0 /*24*/], player_ped_id(), 0, 16);
											set_entity_load_collision_flag(*uParam0[iVar0 /*24*/], true);
											set_ped_target_loss_response(*uParam0[iVar0 /*24*/], 1);
										}
									}
									break;
								
								case 2:
									if (get_game_timer() > *(uParam0[iVar0 /*24*/]).f_5)
									{
										*(uParam0[iVar0 /*24*/]).f_3 = 5;
										*(uParam0[iVar0 /*24*/]).f_1 = 0;
										*(uParam0[iVar0 /*24*/]).f_4 = 0;
									}
									break;
								}
						}
						break;
					
					case 5:
					case 6:
						if (is_ped_using_scenario(*uParam0[iVar0 /*24*/], "PROP_HUMAN_SEAT_CHAIR") || is_ped_using_any_scenario(*uParam0[iVar0 /*24*/]))
						{
							if (!is_ped_injured(*uParam0[iVar0 /*24*/]))
							{
								clear_ped_tasks(*uParam0[iVar0 /*24*/]);
							}
						}
						else
						{
							switch (*(uParam0[iVar0 /*24*/]).f_4)
							{
								case 0:
									*(uParam0[iVar0 /*24*/]).f_11 = 0;
									if ((iVar0 == 12 || iVar0 == 13) || iVar0 == 14)
									{
									}
									WEAPON::SET_CURRENT_PED_WEAPON(*uParam0[iVar0 /*24*/], get_best_ped_weapon(*uParam0[iVar0 /*24*/], 0), true);
									set_blocking_of_non_temporary_events(*uParam0[iVar0 /*24*/], false);
									_0xA3A9299C4F2ADB98(*uParam0[iVar0 /*24*/]);
									PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0[iVar0 /*24*/], 50, true);
									set_ped_flee_attributes(*uParam0[iVar0 /*24*/], 512, true);
									*(uParam0[iVar0 /*24*/]).f_4++;
									break;
								
								case 1:
									if (!*(uParam0[iVar0 /*24*/]).f_20)
									{
										*(uParam1[0 /*3*/]) = {*(uParam1[0 /*3*/])};
										iLocal_66 = iLocal_66;
										uLocal_70 = uLocal_70;
										task_combat_ped(*uParam0[iVar0 /*24*/], player_ped_id(), 0, 16);
										set_entity_load_collision_flag(*uParam0[iVar0 /*24*/], true);
										set_ped_target_loss_response(*uParam0[iVar0 /*24*/], 1);
										*(uParam0[iVar0 /*24*/]).f_4++;
										*(uParam0[iVar0 /*24*/]).f_11 = get_game_timer() + get_random_int_in_range(20000, 35000);
									}
									break;
								}
						}
						break;
					}
				}
		}
		iVar0++;
	}
}

float func_108(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 < fParam1)
	{
		return fParam1;
	}
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	return fParam0;
}

bool func_109(int iParam0, auto uParam1, char* sParam2, Vector3 vParam3, Vector3 vParam4, Vector3 vParam5, int iParam6)
{
	switch (*(uParam1[iParam0 /*24*/]).f_5)
	{
		case 0:
			if (!are_strings_equal("chi2_hear", vParam3.y))
			{
				if (func_59())
				{
					if (!func_82(vParam3.y))
					{
						func_85();
					}
				}
				if (func_105(vParam3.y, vParam3.z, *uParam1[iParam0 /*24*/], vParam3.x, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
				{
					*(uParam1[iParam0 /*24*/].f_12) = {get_entity_coords(*uParam1[iParam0 /*24*/], 1)};
					*(uParam1[iParam0 /*24*/]).f_18 = get_entity_heading(*uParam1[iParam0 /*24*/]);
					*(uParam1[iParam0 /*24*/]).f_5 = 0;
					*(uParam1[iParam0 /*24*/]).f_5++;
					*(uParam1[iParam0 /*24*/]).f_11 = get_game_timer() + 1000;
				}
			}
			else
			{
				*(uParam1[iParam0 /*24*/].f_12) = {get_entity_coords(*uParam1[iParam0 /*24*/], 1)};
				*(uParam1[iParam0 /*24*/]).f_18 = get_entity_heading(*uParam1[iParam0 /*24*/]);
				*(uParam1[iParam0 /*24*/]).f_5++;
			}
			break;
		
		case 1:
			if (get_game_timer() > *(uParam1[iParam0 /*24*/]).f_11)
			{
				task_turn_ped_to_face_coord(*uParam1[iParam0 /*24*/], get_entity_coords(player_ped_id(), 1), 5000);
				*(uParam1[iParam0 /*24*/]).f_5++;
				*(uParam1[iParam0 /*24*/]).f_11 = get_game_timer() + 5000;
			}
			break;
		
		case 2:
			if (!are_strings_equal("chi2_hear", vParam3.y))
			{
				if ((can_ped_hear_player(player_id(), *uParam1[iParam0 /*24*/]) || iLocal_75 == 1) && func_67(*uParam1[iParam0 /*24*/], *(uParam1[iParam0 /*24*/].f_12), 1) < *(uParam1[iParam0 /*24*/]).f_19)
				{
					if (get_game_timer() > *(uParam1[iParam0 /*24*/]).f_11 - 3000)
					{
						task_follow_nav_mesh_to_coord(*uParam1[iParam0 /*24*/], get_entity_coords(player_ped_id(), 1), 1f, 20000, 0.1f, 0, 40000f);
						*(uParam1[iParam0 /*24*/].f_15) = {get_entity_coords(player_ped_id(), 1)};
						*(uParam1[iParam0 /*24*/]).f_5 = 5;
					}
				}
				else if (get_game_timer() > *(uParam1[iParam0 /*24*/]).f_11)
				{
					if (func_105(vParam9.y, vParam9.z, *uParam1[iParam0 /*24*/], vParam9.x, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						if (iParam12)
						{
						}
						*(uParam1[iParam0 /*24*/]).f_5++;
					}
				}
			}
			else if (get_game_timer() > *(uParam1[iParam0 /*24*/]).f_11)
			{
				task_achieve_heading(*uParam1[iParam0 /*24*/], *(uParam1[iParam0 /*24*/]).f_18, 2000);
				*(uParam1[iParam0 /*24*/]).f_5 = 4;
			}
			break;
		
		case 3:
			func_93();
			task_follow_nav_mesh_to_coord(false, *(uParam1[iParam0 /*24*/].f_12), 1f, 20000, 0.2f, 4096, 40000f);
			task_achieve_heading(false, *(uParam1[iParam0 /*24*/]).f_18, 2000);
			func_92(uParam1[iParam0 /*24*/], 0);
			*(uParam1[iParam0 /*24*/]).f_11 = get_game_timer() + 3000;
			*(uParam1[iParam0 /*24*/]).f_5++;
			break;
		
		case 4:
			if (get_script_task_status(*uParam1[iParam0 /*24*/], 242628503) == 7 || (are_strings_equal("chi2_hear", vParam3.y) && get_script_task_status(*uParam1[iParam0 /*24*/], 1920390111) == 7))
			{
				if (!are_strings_equal(sParam2, ""))
				{
					task_start_scenario_in_place(*uParam1[iParam0 /*24*/], sParam2, 0, 1);
				}
				*(uParam1[iParam0 /*24*/]).f_4 = 0;
				*(uParam1[iParam0 /*24*/]).f_5 = 0;
				*(uParam1[iParam0 /*24*/]).f_1 = 0;
				*(uParam1[iParam0 /*24*/]).f_2 = 0;
				if (are_strings_equal("chi2_hear", vParam3.y))
				{
					*(uParam1[iParam0 /*24*/]).f_3 = 3;
				}
				else
				{
					*(uParam1[iParam0 /*24*/]).f_3 = 2;
				}
				iLocal_62 = -1;
			}
			break;
		
		case 5:
			if (func_105(vParam3.y, vParam6.z, *uParam1[iParam0 /*24*/], vParam3.x, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
			{
				*(uParam1[iParam0 /*24*/]).f_5++;
			}
			break;
		
		case 6:
			if (func_67(*uParam1[iParam0 /*24*/], *(uParam1[iParam0 /*24*/].f_15), 1) < 2f || get_script_task_status(*uParam1[iParam0 /*24*/], 713668775) == 7)
			{
				if (!is_ped_injured(*uParam1[iParam0 /*24*/]))
				{
					clear_ped_tasks(*uParam1[iParam0 /*24*/]);
					func_93();
					task_look_at_coord(false, get_offset_from_entity_in_world_coords(*uParam1[iParam0 /*24*/], -5f, 3f, 0f), 2500, 0, 2);
					task_look_at_coord(false, get_offset_from_entity_in_world_coords(*uParam1[iParam0 /*24*/], 5f, 3f, 0f), 2500, 0, 2);
					func_92(uParam1[iParam0 /*24*/], 0);
					*(uParam1[iParam0 /*24*/]).f_11 = get_game_timer() + 3000;
					*(uParam1[iParam0 /*24*/]).f_5 = 2;
				}
			}
			break;
	}
	return false;
}

bool func_110(int iParam0, auto uParam1, int iParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar1 = 1000f;
	iVar3 = -1;
	if (!is_ped_dead_or_dying(*uParam1[iParam0 /*24*/], 1))
	{
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (is_ped_dead_or_dying(*uParam1[iVar0 /*24*/], 1) && does_entity_exist(*uParam1[iVar0 /*24*/]))
			{
				fVar2 = func_4(*uParam1[iVar0 /*24*/], *uParam1[iParam0 /*24*/], 1);
				if (fVar2 < fVar1)
				{
					fVar1 = fVar2;
					iVar3 = iVar0;
				}
			}
			iVar0++;
		}
		if (iVar3 == -1)
		{
			return false;
		}
		else
		{
			*(uParam1[iParam0 /*24*/]).f_18 = func_113(*uParam1[iParam0 /*24*/], *uParam1[iVar3 /*24*/]);
			if (absf(*(uParam1[iParam0 /*24*/]).f_18) > 20f)
			{
				if (iParam2)
				{
					task_turn_ped_to_face_entity(false, *uParam1[iVar3 /*24*/], 0);
				}
				else
				{
					task_turn_ped_to_face_entity(*uParam1[iParam0 /*24*/], *uParam1[iVar3 /*24*/], 0);
				}
				*(uParam1[iParam0 /*24*/]).f_18 = func_111(*uParam1[iParam0 /*24*/], *uParam1[iVar3 /*24*/], 1);
				return true;
			}
		}
	}
	return false;
}

float func_111(int iParam0, int iParam1, int iParam2)
{
	Vector3 vVar0;
	Vector3 vVar3;
	
	vVar0 = {get_entity_coords(iParam0, 0)};
	vVar3 = {get_entity_coords(iParam1, 0)};
	return func_96(vVar0, vVar3, iParam2);
}

int func_112()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar1 = -1;
	task_play_anim(false, "misschinese2_bank1", "reaction_forward_big_intro_a", 4f, -2f, 1400, 0, 0, 0, 0, 0);
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		iVar2 = get_random_int_in_range(false, 3);
		iVar3 = get_random_int_in_range(1100, 1800);
		iVar4 += iVar3;
		if (iVar2 == iVar1)
		{
			iVar2++;
			if (iVar2 > 2)
			{
				iVar2 = 0;
			}
		}
		iVar1 = iVar2;
		switch (iVar2)
		{
			case 0:
				iVar2 = get_random_int_in_range(false, 4);
				switch (iVar2)
				{
					case 0:
						task_play_anim(false, "reaction@male_stand@big_intro@left", "reaction_left_big_intro_a", 4f, -2f, iVar3, 0, 0, 0, 0, 0);
						break;
					
					case 1:
						task_play_anim(false, "reaction@male_stand@big_intro@left", "reaction_left_big_intro_b", 4f, -2f, iVar3, 0, 0, 0, 0, 0);
						break;
					
					case 2:
						task_play_anim(false, "reaction@male_stand@big_intro@left", "reaction_left_big_intro_c", 4f, -2f, iVar3, 0, 0, 0, 0, 0);
						break;
				}
				break;
			
			case 1:
				iVar2 = get_random_int_in_range(false, 4);
				switch (iVar2)
				{
					case 0:
						task_play_anim(false, "reaction@male_stand@big_intro@right", "reaction_right_big_intro_a", 4f, -2f, iVar3, 0, 0, 0, 0, 0);
						break;
					
					case 1:
						task_play_anim(false, "reaction@male_stand@big_intro@right", "reaction_right_big_intro_b", 4f, -2f, iVar3, 0, 0, 0, 0, 0);
						break;
					
					case 2:
						task_play_anim(false, "reaction@male_stand@big_intro@right", "reaction_right_big_intro_c", 4f, -2f, iVar3, 0, 0, 0, 0, 0);
						break;
				}
				break;
			
			case 2:
				iVar2 = get_random_int_in_range(false, 4);
				switch (iVar2)
				{
					case 0:
						task_play_anim(false, "reaction@male_stand@big_intro@backward", "reaction_backward_big_intro_a", 4f, -2f, iVar3, 0, 0, 0, 0, 0);
						break;
					
					case 1:
						task_play_anim(false, "reaction@male_stand@big_intro@backward", "reaction_backward_big_intro_b", 4f, -2f, iVar3, 0, 0, 0, 0, 0);
						break;
					
					case 2:
						task_play_anim(false, "reaction@male_stand@big_intro@backward", "reaction_backward_big_intro_c", 4f, -2f, iVar3, 0, 0, 0, 0, 0);
						break;
				}
				break;
		}
		iVar0++;
	}
	return iVar4;
}

float func_113(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam0) && does_entity_exist(iParam1))
	{
		return func_114(iParam0, get_entity_coords(iParam1, 0));
	}
	return 0f;
}

float func_114(int iParam0, Vector3 vParam1)
{
	float fVar0;
	
	if (does_entity_exist(iParam0))
	{
		if (!is_entity_dead(iParam0, 0))
		{
			fVar0 = func_96(get_entity_coords(iParam0, 0), vParam1, 1);
			return fVar0 - get_entity_heading(iParam0);
		}
	}
	return 0f;
}

void func_115(auto uParam0, struct<2> Param1, auto uParam2, struct<2> Param3, auto uParam4, struct<2> Param5, auto uParam6, struct<2> Param7, auto uParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	Vector3 vVar3;
	Vector3 vVar6;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	float fVar16;
	int iVar17;
	
	if (!iLocal_53 == 1)
	{
		iLocal_258 = false;
		if (is_ped_shooting(player_ped_id()) || is_control_pressed(0, 24))
		{
			iVar0 = 0;
			while (iVar0 < *uParam0)
			{
				if (!is_ped_dead_or_dying(*uParam0[iVar0 /*24*/], 1))
				{
					iVar1++;
				}
				iVar0++;
			}
			if (iLocal_259 == 0)
			{
				iLocal_259 = iVar1;
			}
			if (iVar1 < iLocal_259)
			{
				iLocal_259 = iVar1;
				iLocal_258 = true;
			}
		}
		iVar2 = 4;
		while (iVar2 > 0)
		{
			if (!is_ped_dead_or_dying(*uParam0[iLocal_58 /*24*/], 1))
			{
				if (*(uParam0[iLocal_58 /*24*/]).f_3 > 3 && *(uParam0[iLocal_58 /*24*/]).f_1 > 1)
				{
					iVar0 = 0;
					while (iVar0 < *uParam0)
					{
						if (!is_ped_dead_or_dying(*uParam0[iVar0 /*24*/], 1))
						{
							if (iVar0 != iLocal_58)
							{
								if (*(uParam0[iVar0 /*24*/]).f_3 <= 4)
								{
									if (func_4(*uParam0[iVar0 /*24*/], *uParam0[iLocal_58 /*24*/], 1) < 8f)
									{
										if ((get_interior_from_entity(*uParam0[iLocal_58 /*24*/]) != 0 && get_interior_from_entity(*uParam0[iVar0 /*24*/]) != 0) || (get_interior_from_entity(*uParam0[iLocal_58 /*24*/]) == 0 && get_interior_from_entity(*uParam0[iVar0 /*24*/]) == 0))
										{
											vVar3 = {get_entity_coords(*uParam0[iVar0 /*24*/], 1)};
											vVar6 = {get_entity_coords(*uParam0[iLocal_58 /*24*/], 0)};
											if (absf(vVar3.z - vVar6.z) < 2f)
											{
												*(uParam0[iVar0 /*24*/]).f_7 = 1;
												*(uParam0[iVar0 /*24*/]).f_10 = iLocal_58;
											}
										}
									}
								}
							}
						}
						iVar0++;
					}
				}
				else
				{
					fVar9 = 10f;
					fVar10 = 11f;
					*(uParam0[iLocal_58 /*24*/]).f_22 = -1;
					*(uParam0[iLocal_58 /*24*/]).f_23 = -1;
					iVar0 = 0;
					while (iVar0 < *uParam0)
					{
						if (iVar0 != iLocal_58)
						{
							if (does_entity_exist(*uParam0[iVar0 /*24*/]))
							{
								fVar11 = func_4(*uParam0[iVar0 /*24*/], *uParam0[iLocal_58 /*24*/], 1);
								if (fVar11 < 10f)
								{
									fVar12 = func_113(*uParam0[iLocal_58 /*24*/], *uParam0[iVar0 /*24*/]);
									if (fVar12 > -90f && fVar12 < 90f)
									{
										if (fVar11 < fVar9)
										{
											*(uParam0[iLocal_58 /*24*/]).f_23 = *(uParam0[iLocal_58 /*24*/]).f_22;
											*(uParam0[iLocal_58 /*24*/]).f_22 = iVar0;
											fVar10 = fVar9;
											fVar9 = fVar11;
										}
										else if (fVar11 < fVar10)
										{
											fVar10 = fVar11;
											*(uParam0[iLocal_58 /*24*/]).f_23 = iVar0;
										}
									}
								}
							}
						}
						iVar0++;
					}
				}
			}
			iLocal_58++;
			if (iLocal_58 >= *uParam0)
			{
				iLocal_58 = 0;
			}
			iVar2--;
		}
	}
	if (is_ped_in_any_heli(player_ped_id()))
	{
		iVar13 = get_vehicle_ped_is_in(player_ped_id(), 0);
		if (is_vehicle_driveable(iVar13, 0))
		{
			if (_is_vehicle_engine_on(iVar13))
			{
				iVar14 = 1;
			}
		}
	}
	if (is_explosion_in_sphere(-1, vLocal_71, fLocal_74))
	{
		iLocal_54 = true;
	}
	if (!iLocal_55)
	{
		if (func_82(Param1.f_1) || func_82(Param4.f_1))
		{
			iLocal_59 = get_game_timer() + 1000;
			iLocal_55 = 1;
		}
		if (func_82(Param7.f_1) || func_82(Param10.f_1))
		{
			iLocal_59 = get_game_timer() + 1000;
			iLocal_55 = 1;
		}
	}
	else if (((!func_82(Param1.f_1) && !func_82(Param4.f_1)) && !func_82(Param7.f_1)) && !func_82(Param10.f_1))
	{
		iLocal_55 = 0;
	}
	else if (get_game_timer() > iLocal_59)
	{
		if (func_82(Param1.f_1) || func_82(Param4.f_1))
		{
			iLocal_53 = true;
		}
		if (func_82(Param7.f_1) || func_82(Param10.f_1))
		{
			iLocal_56 = true;
		}
	}
	iLocal_60 = 0;
	iVar15 = -1;
	fVar16 = 13f;
	iLocal_57 = 0;
	if (is_ped_in_any_vehicle(player_ped_id(), 0))
	{
		iVar17 = get_vehicle_ped_is_using(player_ped_id());
	}
	if (iLocal_62 == -1)
	{
		iLocal_75 = 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!is_ped_dead_or_dying(*uParam0[iVar0 /*24*/], 1))
		{
			if (*(uParam0[iVar0 /*24*/]).f_3 != 7)
			{
				*(uParam0[iVar0 /*24*/]).f_2 = *(uParam0[iVar0 /*24*/]).f_1;
				*(uParam0[iVar0 /*24*/]).f_1 = 0;
				if (*(uParam0[iVar0 /*24*/]).f_3 <= 4)
				{
					if (iLocal_62 == -1)
					{
						if (is_vehicle_driveable(iVar17, 0))
						{
							if (_is_vehicle_engine_on(iVar17))
							{
								iLocal_75 = 1;
								fVar16 = 20f;
							}
							if (is_vehicle_siren_on(iVar17))
							{
								iLocal_75 = 1;
								fVar16 = 50f;
							}
						}
						if (can_ped_hear_player(player_id(), *uParam0[iVar0 /*24*/]) || (is_vehicle_driveable(iVar17, 0) && _is_vehicle_engine_on(iVar17)))
						{
							if (func_4(player_ped_id(), *uParam0[iVar0 /*24*/], 1) < fVar16)
							{
								if (*(uParam0[iVar0 /*24*/]).f_8)
								{
									if (get_interior_from_entity(player_ped_id()) == get_interior_from_entity(*uParam0[iVar0 /*24*/]))
									{
										fVar16 = func_4(player_ped_id(), *uParam0[iVar0 /*24*/], 1);
										iVar15 = iVar0;
										*(uParam0[iVar0 /*24*/]).f_1 = 1;
										*(uParam0[iVar0 /*24*/]).f_19 = fVar16 + 5f;
									}
								}
							}
						}
					}
					if (*(uParam0[iVar0 /*24*/]).f_7)
					{
						*(uParam0[iVar0 /*24*/]).f_7 = 0;
						*(uParam0[iVar0 /*24*/]).f_1 = 2;
					}
					if (iLocal_54)
					{
						*(uParam0[iVar0 /*24*/]).f_1 = 3;
					}
					if (iLocal_53)
					{
						*(uParam0[iVar0 /*24*/]).f_1 = 4;
					}
					if (iLocal_258)
					{
					}
					if (!iLocal_258 && !is_ped_ragdoll(*uParam0[iVar0 /*24*/]))
					{
						if (is_ped_responding_to_event(*uParam0[iVar0 /*24*/], 123))
						{
							*(uParam0[iVar0 /*24*/]).f_1 = 7;
						}
						if (has_ped_received_event(*uParam0[iVar0 /*24*/], 123))
						{
							*(uParam0[iVar0 /*24*/]).f_1 = 7;
							if (is_ped_responding_to_event(*uParam0[iVar0 /*24*/], 17))
							{
							}
						}
						if (*(uParam0[iVar0 /*24*/]).f_9)
						{
							if (has_bullet_impacted_in_area(get_entity_coords(*uParam0[iVar0 /*24*/], 1), 4f, 1, 1))
							{
								*(uParam0[iVar0 /*24*/]).f_1 = 7;
							}
						}
						else if (has_bullet_impacted_in_area(get_entity_coords(*uParam0[iVar0 /*24*/], 1), 6f, 1, 1))
						{
							*(uParam0[iVar0 /*24*/]).f_1 = 7;
						}
						if (is_ped_responding_to_event(*uParam0[iVar0 /*24*/], 124))
						{
							*(uParam0[iVar0 /*24*/]).f_1 = 7;
						}
						if (is_bullet_in_area(get_entity_coords(*uParam0[iVar0 /*24*/], 1), 1f, 1))
						{
							*(uParam0[iVar0 /*24*/]).f_1 = 7;
						}
					}
					if (*(uParam0[iVar0 /*24*/]).f_3 < 4)
					{
						if (*(uParam0[iVar0 /*24*/]).f_22 != -1)
						{
							if (does_entity_exist(*uParam0[*(uParam0[iVar0 /*24*/]).f_22 /*24*/]))
							{
								if (is_ped_dead_or_dying(*uParam0[*(uParam0[iVar0 /*24*/]).f_22 /*24*/], 1))
								{
									if (has_entity_clear_los_to_entity_in_front(*uParam0[iVar0 /*24*/], *uParam0[*(uParam0[iVar0 /*24*/]).f_22 /*24*/]))
									{
										*(uParam0[iVar0 /*24*/]).f_1 = 5;
									}
								}
							}
						}
						if (*(uParam0[iVar0 /*24*/]).f_23 != -1)
						{
							if (does_entity_exist(*uParam0[*(uParam0[iVar0 /*24*/]).f_23 /*24*/]))
							{
								if (is_ped_dead_or_dying(*uParam0[*(uParam0[iVar0 /*24*/]).f_23 /*24*/], 1))
								{
									if (has_entity_clear_los_to_entity_in_front(*uParam0[iVar0 /*24*/], *uParam0[*(uParam0[iVar0 /*24*/]).f_23 /*24*/]))
									{
										*(uParam0[iVar0 /*24*/]).f_1 = 5;
									}
								}
							}
						}
					}
				}
				if (*(uParam0[iVar0 /*24*/]).f_3 <= 5)
				{
					if (*(uParam0[iVar0 /*24*/]).f_1 == 0)
					{
						if (*(uParam0[iVar0 /*24*/]).f_3 > 4 || is_ped_in_combat(*uParam0[iVar0 /*24*/], false))
						{
							*(uParam0[iVar0 /*24*/]).f_1 = 8;
						}
					}
					if (((is_ped_responding_to_event(*uParam0[iVar0 /*24*/], 1) || has_ped_received_event(*uParam0[iVar0 /*24*/], 1)) || (is_ped_in_combat(*uParam0[iVar0 /*24*/], false) && can_ped_in_combat_see_target(*uParam0[iVar0 /*24*/], player_ped_id()))) || (func_116(*uParam0[iVar0 /*24*/]) && has_ped_received_event(*uParam0[iVar0 /*24*/], 1)))
					{
						if (*(uParam0[iVar0 /*24*/]).f_3 > 4)
						{
							*(uParam0[iVar0 /*24*/]).f_1 = 9;
						}
						else
						{
							*(uParam0[iVar0 /*24*/]).f_1 = 6;
						}
					}
				}
				if (iVar14 && func_4(player_ped_id(), *uParam0[iVar0 /*24*/], 1) < 50f)
				{
					*(uParam0[iVar0 /*24*/]).f_1 = 6;
				}
				if (*(uParam0[iVar0 /*24*/]).f_3 <= 6)
				{
					if (iLocal_56)
					{
						*(uParam0[iVar0 /*24*/]).f_1 = 10;
					}
				}
				if (*(uParam0[iVar0 /*24*/]).f_1 <= *(uParam0[iVar0 /*24*/]).f_2)
				{
					*(uParam0[iVar0 /*24*/]).f_1 = *(uParam0[iVar0 /*24*/]).f_2;
				}
				else
				{
					*(uParam0[iVar0 /*24*/]).f_3 = 4;
					*(uParam0[iVar0 /*24*/]).f_4 = 0;
					*(uParam0[iVar0 /*24*/]).f_5 = 0;
				}
				if (*(uParam0[iVar0 /*24*/]).f_1 > iLocal_60)
				{
					iLocal_60 = *(uParam0[iVar0 /*24*/]).f_1;
					iLocal_61 = iVar0;
				}
			}
			else
			{
				*(uParam0[iVar0 /*24*/]).f_3 = 0;
				*(uParam0[iVar0 /*24*/]).f_1 = 0;
			}
			if (*(uParam0[iVar0 /*24*/]).f_3 > 3)
			{
				iLocal_57 = 1;
			}
		}
		iVar0++;
	}
	if (iLocal_62 == -1)
	{
		if (iVar15 != -1)
		{
			if (1 > *(uParam0[iVar15 /*24*/]).f_1)
			{
				*(uParam0[iVar15 /*24*/]).f_1 = 1;
				iLocal_62 = iVar15;
			}
		}
	}
	else if (is_ped_dead_or_dying(*uParam0[iLocal_62 /*24*/], 1))
	{
		iLocal_62 = -1;
	}
}

bool func_116(int iParam0)
{
	if (is_entity_playing_anim(iParam0, "misschinese2_bank1", "alert_gunshot", 3))
	{
		return true;
	}
	if (is_entity_playing_anim(iParam0, "misschinese2_bank1", "buddy_shot_b", 3))
	{
		return true;
	}
	if (is_entity_playing_anim(iParam0, "misschinese2_bank1", "reaction_forward_big_intro_a", 3))
	{
		return true;
	}
	if (is_entity_playing_anim(iParam0, "misschinese2_bank1", "alert_body", 3))
	{
		return true;
	}
	if (is_entity_playing_anim(iParam0, "misschinese2_bank1", "react_forward_small_intro_a", 3))
	{
		return true;
	}
	if (is_entity_playing_anim(iParam0, "misschinese2_bank1", "react_backward_small_intro_a", 3))
	{
		return true;
	}
	if (is_entity_playing_anim(iParam0, "misschinese2_bank1", "react_left_small_intro_a", 3))
	{
		return true;
	}
	if (is_entity_playing_anim(iParam0, "misschinese2_bank1", "react_right_small_intro_a", 3))
	{
		return true;
	}
	return false;
}

void func_117()
{
	if (iLocal_3491)
	{
		if (is_string_null_or_empty(&cLocal_3498))
		{
			if (func_59())
			{
				if (is_scripted_conversation_ongoing())
				{
					if (!is_message_being_displayed())
					{
						cLocal_3492 = {func_118()};
						cLocal_3498 = {func_83()};
						StringCopy(&cLocal_3498, "", 24);
						if (!is_string_null_or_empty(&cLocal_3492) && !are_strings_equal(&cLocal_3492, "NULL"))
						{
							cLocal_3498 = {func_83()};
							func_85();
						}
						else
						{
							iLocal_3491 = 0;
							StringCopy(&cLocal_3498, "", 24);
							StringCopy(&cLocal_3492, "", 24);
						}
					}
				}
			}
			else
			{
				iLocal_3491 = 0;
				StringCopy(&cLocal_3498, "", 24);
				StringCopy(&cLocal_3492, "", 24);
			}
		}
		else
		{
			if (is_scripted_conversation_ongoing())
			{
				if (!func_82(&cLocal_3498))
				{
					iLocal_3491 = 0;
					StringCopy(&cLocal_3498, "", 24);
					StringCopy(&cLocal_3492, "", 24);
				}
			}
			if (!is_string_null_or_empty(&cLocal_3498))
			{
				vLocal_3478[0 /*3*/] = {vLocal_3478[0 /*3*/]};
			}
		}
	}
}

struct<6> func_118()
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

void func_119()
{
	if (!is_ped_injured(player_ped_id()))
	{
		func_126();
		func_125();
		func_123();
		func_120();
	}
}

void func_120()
{
	int iVar0;
	Vector3 vVar1;
	float fVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	vVar1 = {0f, 0f, 0f};
	if (iLocal_437 == 0)
	{
		if (get_closest_fire_pos(&vVar1, Local_444[0 /*5*/]))
		{
			fVar4 = 0f;
			fVar7 = 999999f;
			iVar0 = 0;
			while (iVar0 < Local_444)
			{
				if (iVar0 > 0)
				{
					fVar4 += get_distance_between_coords(Local_444[iVar0 - 1 /*5*/], Local_444[iVar0 /*5*/], 1);
				}
				if (Local_444[iVar0 /*5*/].f_4)
				{
					if (get_closest_fire_pos(&vVar1, Local_444[iVar0 /*5*/]))
					{
						fVar6 = get_distance_between_coords(Local_444[iVar0 /*5*/], vVar1, 1);
						if (fVar6 < fVar7)
						{
							fVar7 = fVar6;
							fVar8 = fVar4;
							iVar5 = iVar0;
						}
					}
				}
				iVar0++;
			}
			if (fVar7 < fLocal_272)
			{
				iVar5 = iVar5;
				iLocal_437 = 1;
				iLocal_439 = get_game_timer();
				fVar8 = fVar8;
				vLocal_277 = {Local_444[iVar5 /*5*/]};
				iLocal_280 = iVar5;
				iLocal_440 = iVar5 * 2;
				iLocal_442 = iLocal_440;
				iLocal_443 = iLocal_440;
				if (iLocal_443 < 0)
				{
					iLocal_443 = 0;
				}
				if (iLocal_442 >= Local_444 * 2)
				{
					iLocal_442 = Local_444 * 2 - 1;
				}
			}
		}
	}
	if (iLocal_437 == 1)
	{
		_0xD9454B5752C857DC();
		fVar9 = to_float(get_game_timer() - iLocal_439) / fLocal_750;
		iVar10 = floor(fVar9 / 1f / 2f) - 1;
		iVar11 = iLocal_440 + iVar10;
		iVar12 = iLocal_440 - iVar10;
		if (iVar11 >= 122)
		{
			iVar11 = 121;
		}
		if (iVar12 < 0)
		{
			iVar12 = 0;
		}
		if (iVar11 > iLocal_442)
		{
			iVar0 = iLocal_442 + 1;
			while (iVar0 <= iVar11)
			{
				iVar13 = iVar0 / 2;
				if (iVar13 < Local_444)
				{
					if (Local_444[iVar13 /*5*/].f_4)
					{
						func_121(iVar0, 1);
					}
					else
					{
						iVar11 = iVar0 - 1;
						iVar0 = iVar11 + 1;
					}
				}
				iVar0++;
			}
			iLocal_442 = iVar11;
		}
		if (iVar12 < iLocal_443)
		{
			iVar0 = iLocal_443 - 1;
			while (iVar0 >= iVar12)
			{
				iVar13 = iVar0 / 2;
				if (iVar13 < Local_444)
				{
					if (Local_444[iVar13 /*5*/].f_4)
					{
						func_121(iVar0, 1);
					}
					else
					{
						iVar12 = iVar0 + 1;
						iVar0 = iVar12 - 1;
					}
				}
				iVar0 += -1;
			}
			iLocal_443 = iVar12;
		}
		iVar0 = 0;
		while (iVar0 < Local_281)
		{
			if (get_game_timer() - Local_281[iVar0 /*5*/].f_4 > 1000)
			{
				fade_decals_in_range(Local_281[iVar0 /*5*/].f_1, 0.4f, 1f);
			}
			if (get_game_timer() - Local_281[iVar0 /*5*/].f_4 > 6000)
			{
				remove_script_fire(Local_281[iVar0 /*5*/]);
			}
			iVar0++;
		}
	}
}

void func_121(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 >= 0)
	{
		if (iParam0 % 2 == 1)
		{
			iVar0 = iParam0 / 2;
			if (iVar0 + 1 < 61)
			{
				func_122(Local_444[iParam0 / 2 /*5*/] + Local_444[iParam0 / 2 + 1 /*5*/] / Vector(2f, 2f, 2f) + Vector(fLocal_273, fLocal_273, fLocal_273), iParam1);
			}
		}
		else if (iParam0 / 2 < 61)
		{
			func_122(Local_444[iParam0 / 2 /*5*/] + Vector(fLocal_273, fLocal_273, fLocal_273), iParam1);
		}
	}
}

void func_122(Vector3 vParam0, int iParam1)
{
	if (iLocal_438 == 0)
	{
		iParam3 = 0;
	}
	remove_script_fire(Local_281[iLocal_441 /*5*/]);
	if (Local_281[iLocal_441 /*5*/].f_4 != 0)
	{
		fade_decals_in_range(Local_281[iLocal_441 /*5*/].f_1, 0.4f, 1f);
	}
	Local_281[iLocal_441 /*5*/].f_4 = get_game_timer();
	Local_281[iLocal_441 /*5*/].f_1 = {vParam0};
	Local_281[iLocal_441 /*5*/] = start_script_fire(vParam0, iLocal_270, iParam3);
	iLocal_441++;
	if (iLocal_441 >= 31)
	{
		iLocal_441 = 0;
	}
}

void func_123()
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	
	if (iLocal_265)
	{
		get_current_ped_weapon(player_ped_id(), &iVar1, 1);
		if (iVar1 == joaat("weapon_petrolcan"))
		{
			if (is_control_pressed(0, 24) && is_ped_shooting(player_ped_id()))
			{
				if (iLocal_271 == 0)
				{
					_0x293220DA1B46CEBC(2f, 8f, 4);
					iLocal_271 = get_game_timer() + 250;
				}
				if (get_game_timer() > iLocal_271)
				{
					if (!iLocal_261)
					{
						fVar4 = 9999.9f;
						vLocal_274 = {func_124()};
						iVar0 = 0;
						while (iVar0 < Local_444)
						{
							if (does_blip_exist(Local_444[iVar0 /*5*/].f_3))
							{
								fVar2 = get_distance_between_coords(vLocal_274, get_blip_coords(Local_444[iVar0 /*5*/].f_3), 1);
								fVar3 = get_distance_between_coords(Local_444[iVar0 /*5*/], get_blip_coords(Local_444[iVar0 /*5*/].f_3), 1);
								if (fVar3 == 0f || fVar2 < fVar3)
								{
									if (fVar2 < 2f)
									{
										Local_444[iVar0 /*5*/] = {vLocal_274};
									}
								}
								if (fVar2 < fVar4)
								{
									fVar4 = fVar2;
									iVar5 = iVar0;
								}
							}
							iVar0++;
						}
						if (fVar4 < 2f)
						{
							if (iLocal_267 != -1)
							{
								if (absi(iLocal_268 - iVar5) > 1)
								{
									iLocal_268 = -1;
								}
								if (iLocal_268 == -1)
								{
									iLocal_268 = iLocal_267;
								}
								if (absi(iLocal_268 - iVar5) < 3 && absi(iLocal_268 - iVar5) > 0)
								{
									if (iLocal_268 < iVar5)
									{
										iVar6 = iLocal_268;
										while (iVar6 <= iVar5 - 1)
										{
											if (does_blip_exist(Local_444[iVar6 /*5*/].f_3))
											{
												if (get_blip_alpha(Local_444[iVar6 /*5*/].f_3) > 0)
												{
													set_blip_alpha(Local_444[iVar6 /*5*/].f_3, 0);
													Local_444[iVar6 /*5*/].f_4 = 1;
													iLocal_269--;
												}
											}
											iVar6++;
										}
									}
									else
									{
										iVar6 = iVar5 + 1;
										while (iVar6 <= iLocal_268)
										{
											if (does_blip_exist(Local_444[iVar6 /*5*/].f_3))
											{
												if (get_blip_alpha(Local_444[iVar6 /*5*/].f_3) > 0)
												{
													set_blip_alpha(Local_444[iVar6 /*5*/].f_3, 0);
													Local_444[iVar6 /*5*/].f_4 = 1;
													iLocal_269--;
												}
											}
											iVar6++;
										}
									}
									iLocal_268 = iLocal_267;
								}
								if (iVar5 == 0)
								{
									if (does_blip_exist(Local_444[iVar5 /*5*/].f_3))
									{
										if (get_blip_alpha(Local_444[iVar5 /*5*/].f_3) > 0)
										{
											set_blip_alpha(Local_444[iVar5 /*5*/].f_3, 0);
											Local_444[iVar5 /*5*/].f_4 = 1;
											iLocal_269--;
										}
									}
								}
								if (iVar5 == 60)
								{
									if (does_blip_exist(Local_444[iVar5 /*5*/].f_3))
									{
										if (get_blip_alpha(Local_444[iVar5 /*5*/].f_3) > 0)
										{
											set_blip_alpha(Local_444[iVar5 /*5*/].f_3, 0);
											Local_444[iVar5 /*5*/].f_4 = 1;
											iLocal_269--;
										}
									}
								}
								if (iVar5 < 60)
								{
									if (func_71(Local_444[iVar5 + 1 /*5*/]))
									{
										if (does_blip_exist(Local_444[iVar5 /*5*/].f_3))
										{
											if (get_blip_alpha(Local_444[iVar5 /*5*/].f_3) > 0)
											{
												set_blip_alpha(Local_444[iVar5 /*5*/].f_3, 0);
												Local_444[iVar5 /*5*/].f_4 = 1;
												iLocal_269--;
											}
										}
									}
								}
							}
							iLocal_267 = iVar5;
						}
					}
				}
			}
			else
			{
				iLocal_267 = -1;
				iLocal_268 = -1;
				iLocal_271 = 0;
			}
		}
	}
}

Vector3 func_124()
{
	int iVar0;
	int iVar1;
	Vector3 vVar2;
	Vector3 vVar5;
	auto uVar8;
	
	iVar0 = get_current_ped_weapon_entity_index(player_ped_id());
	if (does_entity_exist(iVar0))
	{
		iVar1 = get_entity_bone_index_by_name(iVar0, "Gun_Nuzzle");
		iVar1 = 1;
		vVar2 = {get_world_position_of_entity_bone(iVar0, iVar1)};
		vVar2 = {_get_object_offset_from_coords(vVar2, get_entity_heading(iVar0), 0.35f, 0f, -0.15f)};
		get_ground_z_for_3d_coord(vVar2, &uVar8, 0);
		vVar5 = {vVar2.x, vVar2.y, uVar8};
	}
	return vVar5;
}

void func_125()
{
	int iVar0;
	
	if (iLocal_263)
	{
		if (iLocal_437)
		{
			iVar0 = 0;
			while (iVar0 < Local_281)
			{
				remove_script_fire(Local_281[iVar0 /*5*/]);
				iVar0++;
			}
		}
		iLocal_263 = 0;
		iLocal_437 = 1;
		iLocal_439 = get_game_timer();
		iVar0 = 0;
		while (iVar0 < Local_444)
		{
			Local_444[iVar0 /*5*/].f_4 = 1;
			iVar0++;
		}
		if (iLocal_266 != -1)
		{
			iLocal_443 = iLocal_266;
			iLocal_442 = iLocal_266;
			iLocal_440 = iLocal_266;
		}
		else
		{
			iLocal_443 = -1;
			iLocal_442 = -1;
			iLocal_440 = iLocal_266;
		}
		iLocal_441 = 1;
	}
}

void func_126()
{
	if (!iLocal_264)
	{
		iLocal_264 = 1;
	}
}

void func_127()
{
	int iVar0;
	
	if (iLocal_2511 >= 4)
	{
		iVar0 = 0;
		while (iVar0 < Local_755)
		{
			if (does_entity_exist(Local_755[iVar0 /*33*/]))
			{
				if (!Local_755[iVar0 /*33*/].f_23)
				{
					if (is_ped_injured(Local_755[iVar0 /*33*/]))
					{
						Local_755[iVar0 /*33*/].f_23 = 1;
						func_9(151, 1, 0);
					}
				}
				if (get_ped_relationship_group_hash(Local_755[iVar0 /*33*/]) == iLocal_1616)
				{
					func_97(Local_755[iVar0 /*33*/], &(Local_755[iVar0 /*33*/].f_25), -1, 0, 0, 0, -1082130432, 0, -1);
				}
			}
			else if (Local_755[iVar0 /*33*/] != 0)
			{
				func_128(&(Local_755[iVar0 /*33*/].f_25));
				Local_755[iVar0 /*33*/] = 0;
			}
			iVar0++;
		}
	}
}

void func_128(int iParam0)
{
	int iVar0;
	struct<8> Var1;
	
	if (does_blip_exist(*iParam0))
	{
		remove_blip(iParam0);
		iVar0 = true;
	}
	if (does_blip_exist(*iParam0.f_1))
	{
		remove_blip(iParam0.f_1);
		iVar0 = true;
	}
	if (does_entity_exist(*iParam0.f_7))
	{
		if (!is_ped_injured(*iParam0.f_7))
		{
			if (does_ped_have_ai_blip(*iParam0.f_7))
			{
				_0xD30C50DF888D58B5(*iParam0.f_7, 0);
			}
		}
		iVar0 = true;
	}
	if (iVar0)
	{
		*iParam0 = {Var1};
	}
}

void func_129()
{
	int iVar0;
	
	iVar0 = iLocal_2511;
	func_348();
	switch (iLocal_2511)
	{
		case 0:
			func_263();
			break;
		
		case 1:
			func_260();
			break;
		
		case 2:
			func_216();
			break;
		
		case 3:
			func_201();
			break;
		
		case 4:
			func_200();
			break;
		
		case 5:
			func_200();
			break;
		
		case 6:
			func_200();
			break;
		
		case 7:
			func_196();
			break;
		
		case 8:
			func_175();
			break;
		
		case 9:
			func_143();
			break;
	}
	if (iLocal_2511 != iVar0)
	{
		iLocal_2512 = 0;
	}
	if (iLocal_2514)
	{
		func_130(0);
	}
}

void func_130(char* sParam0)
{
	while (!trigger_music_event("CHN2_MISSION_FAIL"))
	{
		func_28(21, 1);
	}
	if (!is_string_null_or_empty(sParam0))
	{
		sLocal_2513 = sParam0;
	}
	if (is_string_null(sLocal_2513))
	{
		sLocal_2513 = "CHFAIL";
	}
	func_132(sLocal_2513);
	while (!func_131())
	{
		func_28(2, 0);
	}
	func_409(1);
}

bool func_131()
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

void func_132(char* sParam0)
{
	func_142(sParam0);
	func_133(0);
}

void func_133(int iParam0)
{
	int iVar0;
	
	if (Global_101154.f_7775 || func_141(0))
	{
		iVar0 = func_140();
		if (!func_134(iVar0))
		{
			return;
		}
		set_bit(&(Global_82363[iVar0 /*5*/].f_1), 5);
		Global_91314 = iParam0;
	}
}

bool func_134(int iParam0)
{
	auto uVar0;
	int iVar1;
	
	func_139();
	if (is_player_playing(player_id()))
	{
		start_firing_amnesty(5000);
	}
	uVar0 = Global_82363[iParam0 /*5*/];
	iVar1 = Global_69758.f_109[uVar0 /*4*/];
	func_138(iVar1, 1);
	_0xC9A763D8FE87436A(player_id());
	special_ability_deactivate(player_id());
	func_135(&(Global_101154.f_1826.f_539), iVar1);
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

void func_135(auto uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	Vector3 vVar2;
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
			if (!func_137(Global_101154.f_17223[iVar0], &vVar2, &fVar5))
			{
				Global_101154.f_17223[iVar0] = 318;
				func_136(uParam0.f_1524[iVar0]);
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

void func_136(auto uParam0)
{
	*uParam0 = -15;
}

int func_137(int iParam0, auto uParam1, float fParam2)
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
			return func_137(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_137(8, uParam1, fParam2);
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

void func_138(int iParam0, int iParam1)
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

void func_139()
{
	Global_91313 = 1;
	if (is_player_being_arrested(player_id(), 1))
	{
		if (is_string_null_or_empty(&Global_69721))
		{
			switch (func_43())
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
			switch (func_43())
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

int func_140()
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

int func_141(int iParam0)
{
	if (!iParam0 && _get_number_of_instances_of_streamed_script(joaat("benchmark")) > 0)
	{
		return true;
	}
	return is_bit_set(Global_69737, false);
}

void func_142(char* sParam0)
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

void func_143()
{
	func_170(46, 52);
	func_160(1, 49, 0, 2, 48, 1, 0, 1, 0, 1, 0);
	func_160(2, 52, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(3, 53, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(4, 54, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(5, 55, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_157(0, 27, 0, 0, 1, 0, 1, 0, 1, 0);
	func_149(0, 12, 0, 0, 1, 0, 1, 0);
	func_148();
	if (func_147(1, 49))
	{
		func_144();
	}
}

void func_144()
{
	clear_prints();
	func_145(0, 0);
	func_409(0);
}

void func_145(int iParam0, int iParam1)
{
	int iVar0;
	auto uVar1;
	auto uVar2;
	
	if (!Global_55751)
	{
		Global_55751 = iParam1;
	}
	if (iParam0)
	{
		if ((func_141(0) && Global_69735.f_1 == 1) && func_146(Global_69735))
		{
		}
		else
		{
			Global_55749 = 1;
		}
	}
	if (Global_101154.f_7775 || func_141(0))
	{
		iVar0 = func_140();
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

bool func_146(int iParam0)
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

bool func_147(int iParam0, int iParam1)
{
	if (Local_2917[iParam0 /*10*/] == iParam1)
	{
		if (Local_2917[iParam0 /*10*/].f_3 == 1)
		{
			return true;
		}
	}
	return false;
}

void func_148()
{
	Vector3 vVar0;
	
	vVar0 = {get_entity_coords(player_ped_id(), 1)};
	if (is_entity_in_angled_area(player_ped_id(), 2432.476f, 4953.242f, 43.05545f, 2466.34f, 4986.15f, 57.25303f, 14.4375f, 0, true, 0))
	{
		if (vVar0.z < 50f)
		{
			if ((((is_entity_in_angled_area(player_ped_id(), 2436.762f, 4956.011f, 44.49009f, 2443.38f, 4962.625f, 48.2233f, 1.5f, 0, true, 0) || is_entity_in_angled_area(player_ped_id(), 2447.669f, 4966.554f, 44.95141f, 2452.497f, 4969.825f, 48.89074f, 2.3125f, 0, true, 0)) || is_entity_in_angled_area(player_ped_id(), 2454.863f, 4968.686f, 44.95141f, 2460.505f, 4974.409f, 48.82641f, 1.6875f, 0, true, 0)) || is_entity_in_angled_area(player_ped_id(), 2459.058f, 4977.546f, 44.95141f, 2460.411f, 4979.302f, 48.82641f, 1.6875f, 0, true, 0)) || is_entity_in_angled_area(player_ped_id(), 2457.602f, 4984.746f, 44.73669f, 2461.977f, 4989.49f, 48.47844f, 1.6875f, 0, true, 0))
			{
				if (!is_entity_on_fire(player_ped_id()))
				{
					start_entity_fire(player_ped_id());
				}
			}
		}
		else if ((((((is_entity_in_angled_area(player_ped_id(), 2454.179f, 4995.281f, 44.54151f, 2453.096f, 4993.905f, 48.32043f, 1.6875f, 0, true, 0) || is_entity_in_angled_area(player_ped_id(), 2449.401f, 4990.354f, 44.92924f, 2447.717f, 4988.865f, 48.82129f, 1.6875f, 0, true, 0)) || is_entity_in_angled_area(player_ped_id(), 2443.906f, 4990.104f, 44.4446f, 2439.007f, 4985.271f, 48.30458f, 1.6875f, 0, true, 0)) || is_entity_in_angled_area(player_ped_id(), 2439.602f, 4982.387f, 44.95141f, 2440.797f, 4981.365f, 48.82642f, 1.6875f, 0, true, 0)) || is_entity_in_angled_area(player_ped_id(), 2440.259f, 4980.671f, 44.95142f, 2434.769f, 4975.055f, 48.82642f, 1.6875f, 0, true, 0)) || is_entity_in_angled_area(player_ped_id(), 2432.165f, 4972.586f, 44.29909f, 2430.114f, 4970.545f, 48.21086f, 1.6875f, 0, true, 0)) || is_entity_in_angled_area(player_ped_id(), 2428.46f, 4968.569f, 44.81597f, 2426.632f, 4966.603f, 48.29342f, 1.6875f, 0, true, 0))
		{
			if (!is_entity_on_fire(player_ped_id()))
			{
				start_entity_fire(player_ped_id());
			}
		}
	}
	else if (is_entity_in_angled_area(player_ped_id(), 2455.487f, 4997.566f, 43.1101f, 2423.653f, 4962.837f, 57.34888f, 14.4375f, 0, true, 0))
	{
		if (vVar0.z < 50f)
		{
			if ((is_entity_in_angled_area(player_ped_id(), 2442.913f, 4965.273f, 50.15687f, 2444.49f, 4967.41f, 53.81783f, 1.6875f, 0, true, 0) || is_entity_in_angled_area(player_ped_id(), 2445.239f, 4969.07f, 49.94284f, 2450.365f, 4972.188f, 54.03251f, 2.375f, 0, true, 0)) || is_entity_in_angled_area(player_ped_id(), 2452.332f, 4971.817f, 49.94283f, 2457.977f, 4977.583f, 53.88097f, 2.375f, 0, true, 0))
			{
				if (!is_entity_on_fire(player_ped_id()))
				{
					start_entity_fire(player_ped_id());
				}
			}
		}
		else if ((is_entity_in_angled_area(player_ped_id(), 2457.621f, 4978.462f, 49.94283f, 2453.932f, 4982.161f, 53.81783f, 2.375f, 0, true, 0) || is_entity_in_angled_area(player_ped_id(), 2452.054f, 4984.156f, 49.94283f, 2448.12f, 4987.809f, 53.81316f, 2.375f, 0, true, 0)) || is_entity_in_angled_area(player_ped_id(), 2442.014f, 4980.539f, 49.94283f, 2435.796f, 4971.945f, 53.90388f, 2.375f, 0, true, 0))
		{
			if (!is_entity_on_fire(player_ped_id()))
			{
				start_entity_fire(player_ped_id());
			}
		}
	}
}

void func_149(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	
	if (Local_3337[iParam0 /*4*/] != iParam1)
	{
		Local_3337[iParam0 /*4*/].f_1 = 0;
		Local_3337[iParam0 /*4*/] = iParam1;
	}
	if (!Local_3337[iParam0 /*4*/].f_1)
	{
		if (func_152(iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, 1, 0))
		{
			switch (Local_3337[iParam0 /*4*/])
			{
				case 0:
					break;
				
				case 1:
					if (!is_help_message_being_displayed())
					{
						set_special_ability_multiplier(2f);
						Local_3337[iParam0 /*4*/].f_1 = 1;
					}
					break;
				
				case 4:
					if (is_special_ability_meter_full(player_id()))
					{
						if (_is_input_disabled(0))
						{
							func_151("USESPEC_KM", -1);
						}
						else
						{
							func_151("USESPEC", -1);
						}
					}
					Local_3337[iParam0 /*4*/].f_1 = 1;
					break;
				
				case 3:
					switch (Local_3337[iParam0 /*4*/].f_2)
					{
						case 0:
							func_151("FRMFLE", -1);
							Local_3337[iParam0 /*4*/].f_1 = 1;
							break;
					}
					break;
				
				case 5:
					if (!func_59() && !is_message_being_displayed())
					{
						func_7("FRMLK", 7500, 1);
						Local_3337[iParam0 /*4*/].f_1 = 1;
					}
					break;
				
				case 2:
					func_7("FRMSNP", 7500, 1);
					Local_3337[iParam0 /*4*/].f_1 = 1;
					break;
				
				case 11:
					switch (Local_3337[iParam0 /*4*/].f_2)
					{
						case 0:
							if (get_ped_stealth_movement(player_ped_id()))
							{
								Local_3337[iParam0 /*4*/].f_3 = get_game_timer() + 1000;
								Local_3337[iParam0 /*4*/].f_2++;
							}
							break;
						
						case 1:
							if (get_game_timer() > Local_3337[iParam0 /*4*/].f_3)
							{
								if (_is_input_disabled(0))
								{
									func_151("FRMSTLTH_KM", -1);
								}
								else
								{
									func_151("FRMSTLTH", -1);
								}
								Local_3337[iParam0 /*4*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 6:
					switch (Local_3337[iParam0 /*4*/].f_2)
					{
						case 0:
							if (get_profile_setting(211) != 0)
							{
								Local_3337[iParam0 /*4*/].f_3 = get_game_timer() + 4000;
								Local_3337[iParam0 /*4*/].f_2++;
							}
							break;
						
						case 1:
							if (get_game_timer() > Local_3337[iParam0 /*4*/].f_3)
							{
								iVar0 = joaat("weapon_unarmed");
								get_current_ped_weapon(player_ped_id(), &iVar0, 1);
								if ((iVar0 != joaat("weapon_sniperrifle") && iVar0 != joaat("weapon_heavysniper")) && iVar0 != joaat("weapon_unarmed"))
								{
									if (!is_message_being_displayed() && !is_help_message_being_displayed())
									{
										if (!func_59())
										{
											if (!is_ped_in_any_vehicle(player_ped_id(), 0))
											{
												func_151("FRMSHOT", -1);
												Local_3337[iParam0 /*4*/].f_1 = 1;
											}
										}
									}
								}
							}
							break;
					}
					break;
				
				case 7:
					func_7("FRMFLC", 7500, 1);
					set_blip_name_from_text_file(iLocal_2677, "FRMBLIPB");
					Local_3337[iParam0 /*4*/].f_1 = 1;
					break;
				
				case 8:
					switch (Local_3337[iParam0 /*4*/].f_2)
					{
						case 0:
							func_151("FRMPET2", -1);
							Local_3337[iParam0 /*4*/].f_2++;
							break;
						
						case 1:
							if (!func_59())
							{
								func_150("FRMTRL", 7500, 1);
								Local_3337[iParam0 /*4*/].f_2++;
							}
							break;
						
						case 2:
							iVar1 = joaat("weapon_unarmed");
							if (get_current_ped_weapon(player_ped_id(), &iVar1, 1))
							{
								if (iVar1 == joaat("weapon_petrolcan"))
								{
									if (is_control_pressed(0, 24))
									{
										clear_help(1);
									}
								}
							}
							if (!is_help_message_being_displayed())
							{
								func_151("FRMTRL2", -1);
								Local_3337[iParam0 /*4*/].f_2++;
							}
							break;
						
						case 3:
							if (func_8())
							{
								if (!func_59())
								{
									if (get_interior_from_entity(player_ped_id()) != 0)
									{
										if (!does_blip_exist(iLocal_2677))
										{
											clear_prints();
											func_7("FRMSHP", 7500, 1);
											iLocal_2677 = func_5(2454.895f, 4950.895f, 44.1488f, 0);
										}
									}
									else if (func_67(player_ped_id(), 2454.895f, 4950.895f, 44.1488f, 1) < 5f)
									{
										clear_prints();
										if (does_blip_exist(iLocal_2677))
										{
											remove_blip(&iLocal_2677);
										}
										func_7("FRMIGN", 7500, 1);
										start_audio_scene("CHI_2_SHOOT_GAS");
										Local_3337[iParam0 /*4*/].f_2++;
									}
								}
							}
							break;
						
						case 4:
							if (func_87(37))
							{
								if (func_84("FRMIGN", 0, 0))
								{
									clear_prints();
								}
							}
							if (get_interior_from_entity(player_ped_id()) != 0)
							{
								Local_3337[iParam0 /*4*/].f_2 = 3;
							}
							break;
					}
					break;
				
				case 9:
					func_151("FRMMISS", -1);
					Local_3337[iParam0 /*4*/].f_1 = 1;
					break;
				
				case 10:
					if (func_87(34))
					{
						func_7("FRMFRH", 7500, 1);
					}
					else
					{
						func_7("FRMFRG", 7500, 1);
					}
					Local_3337[iParam0 /*4*/].f_1 = 1;
					break;
				
				case 12:
					func_7("FRMLEAVE", 1, 1);
					if (func_87(48))
					{
						clear_prints();
						Local_3337[iParam0 /*4*/].f_1 = 1;
					}
					break;
				
				case 13:
					func_7("LOSE_WANTED", 7500, 1);
					break;
				}
			}
	}
}

void func_150(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	_set_text_entry_2(sParam0);
	_draw_subtitle_timed(iParam1, 1);
}

void func_151(char* sParam0, int iParam1)
{
	_set_text_component_format(sParam0);
	_display_help_text_from_string_label(0, 0, true, iParam1);
}

bool func_152(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	iLocal_3118 = false;
	iLocal_3119 = 0;
	if (func_153(&iLocal_3118, &iLocal_3119, iParam0, iParam1))
	{
		if (func_153(&iLocal_3118, &iLocal_3119, iParam2, iParam3))
		{
			if (func_153(&iLocal_3118, &iLocal_3119, iParam4, iParam5))
			{
				if (func_153(&iLocal_3118, &iLocal_3119, iParam6, iParam7))
				{
				}
			}
		}
	}
	if (iLocal_3118)
	{
		return true;
	}
	return false;
}

bool func_153(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam2)
	{
		case 0:
			*iParam0 = 1;
			break;
		
		case 1:
			return false;
			break;
		
		case 2:
			if (iParam3 == 0 || (iParam3 != 0 && func_87(iParam3)))
			{
				*iParam0 = 1;
			}
			break;
		
		case 3:
			if (iParam3 == 0 || (iParam3 != 0 && func_156(iParam3)))
			{
				*iParam0 = 1;
			}
			break;
		
		case 6:
			if (iParam3 == 0 || (iParam3 != 0 && func_87(iParam3)))
			{
				*iParam0 = 1;
			}
			break;
		
		case 8:
			if (*iParam0)
			{
				return false;
			}
			else
			{
				*iParam1 = 1;
				if (iParam3 == 0 || (iParam3 != 0 && func_87(iParam3)))
				{
					*iParam0 = 1;
				}
			}
			break;
		
		case 4:
			if (iParam3 != 0 && func_156(iParam3))
			{
				*iParam0 = 0;
			}
			break;
		
		case 5:
			if (iParam3 != 0 && func_87(iParam3))
			{
				*iParam0 = 0;
			}
			break;
		
		case 7:
			if (func_155(iParam3))
			{
				if (func_156(iParam3))
				{
					*iParam0 = 1;
				}
				else
				{
					*iParam0 = 0;
				}
			}
			else
			{
				if (func_87(iParam3))
				{
					func_154(iParam3);
				}
				*iParam0 = 0;
			}
			break;
	}
	return true;
}

void func_154(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0 - Local_3120[0 /*8*/];
	if (Local_3120[iVar0 /*8*/] == iParam0)
	{
		Local_3120[iVar0 /*8*/].f_3 = 1;
	}
}

bool func_155(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0 - Local_3120[0 /*8*/];
	if (Local_3120[iVar0 /*8*/] == iParam0)
	{
		if (Local_3120[iVar0 /*8*/].f_3)
		{
			return true;
		}
	}
	return false;
}

bool func_156(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0 - Local_3120[0 /*8*/];
	if (iVar0 >= 0 && iVar0 < Local_3120)
	{
		if (Local_3120[iVar0 /*8*/] == iParam0)
		{
			if (!Local_3120[iVar0 /*8*/].f_2)
			{
				return true;
			}
		}
		else if (Local_3120[iVar0 /*8*/] != 0)
		{
		}
	}
	else
	{
		return true;
	}
	return false;
}

void func_157(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	int iVar6;
	
	if (Local_3358[iParam0 /*7*/] != iParam1)
	{
		Local_3358[iParam0 /*7*/].f_1 = 0;
		Local_3358[iParam0 /*7*/] = iParam1;
	}
	if (!Local_3358[iParam0 /*7*/].f_1)
	{
		if (func_152(iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9))
		{
			if (!Local_3358[iParam0 /*7*/].f_2)
			{
				Local_3358[iParam0 /*7*/].f_2 = 1;
			}
			switch (Local_3358[iParam0 /*7*/])
			{
				case 0:
					break;
				
				case 1:
					if (func_35("TRV_WTF", 1, player_ped_id(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_3358[iParam0 /*7*/].f_1 = 1;
					}
					break;
				
				case 2:
					switch (Local_3358[iParam0 /*7*/].f_3)
					{
						case 0:
							Local_3358[iParam0 /*7*/].f_4 = get_game_timer() + 2000;
							Local_3358[iParam0 /*7*/].f_3++;
							break;
						
						case 1:
							if (get_game_timer() > Local_3358[iParam0 /*7*/].f_4)
							{
								if (func_59())
								{
									Local_3358[iParam0 /*7*/].f_4 = get_game_timer() + 2000;
								}
								else
								{
									iVar0 = 0;
									if (func_159(&iVar0, 2, 1))
									{
										if (func_35("RAGE", 1, player_ped_id(), "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_3358[iParam0 /*7*/].f_4 = get_game_timer() + get_random_int_in_range(8000, 14000);
										}
									}
									else
									{
										Local_3358[iParam0 /*7*/].f_1 = 1;
									}
								}
							}
							break;
					}
					break;
				
				case 4:
					Local_3358[iParam0 /*7*/].f_4 = func_18(23);
					if (Local_3358[iParam0 /*7*/].f_4 != -1)
					{
						if (!is_ped_injured(Local_755[Local_3358[iParam0 /*7*/].f_4 /*33*/]))
						{
							if (func_35("COOKSEE", 3, Local_755[Local_3358[iParam0 /*7*/].f_4 /*33*/], "ONEILCOOK", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_3358[iParam0 /*7*/].f_1 = 1;
							}
						}
						else
						{
							Local_3358[iParam0 /*7*/].f_1 = 1;
						}
					}
					break;
				
				case 3:
					switch (Local_3358[iParam0 /*7*/].f_3)
					{
						case 0:
							Local_3358[iParam0 /*7*/].f_4 = func_18(15);
							Local_3358[iParam0 /*7*/].f_5 = func_18(16);
							if (Local_3358[iParam0 /*7*/].f_4 != -1 && Local_3358[iParam0 /*7*/].f_5 != -1)
							{
								Local_3358[iParam0 /*7*/].f_3++;
							}
							break;
						
						case 1:
							if (is_ped_injured(Local_755[Local_3358[iParam0 /*7*/].f_4 /*33*/]))
							{
								Local_3358[iParam0 /*7*/].f_4 = Local_3358[iParam0 /*7*/].f_5;
								if (!is_ped_injured(Local_755[Local_3358[iParam0 /*7*/].f_4 /*33*/]))
								{
									Local_3358[iParam0 /*7*/].f_3++;
								}
								else
								{
									Local_3358[iParam0 /*7*/].f_1 = 1;
								}
							}
							else
							{
								Local_3358[iParam0 /*7*/].f_3++;
							}
							break;
						
						case 2:
							if (!is_ped_injured(Local_755[Local_3358[iParam0 /*7*/].f_4 /*33*/]))
							{
								if (func_35("ONEILGUARD8", 5, Local_755[Local_3358[iParam0 /*7*/].f_4 /*33*/], "ONEILGUARD1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_3358[iParam0 /*7*/].f_3++;
								}
							}
							else
							{
								Local_3358[iParam0 /*7*/].f_1 = 1;
							}
							break;
						
						case 3:
							if (!is_ped_injured(Local_755[Local_3358[iParam0 /*7*/].f_4 /*33*/]))
							{
								if (func_35("ONEILGUARD9", 5, Local_755[Local_3358[iParam0 /*7*/].f_4 /*33*/], "ONEILGUARD1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_3358[iParam0 /*7*/].f_3++;
								}
							}
							else
							{
								Local_3358[iParam0 /*7*/].f_1 = 1;
							}
							break;
						
						case 4:
							if (func_159(&iVar1, 2, 1))
							{
								if (iVar1 != Local_3358[iParam0 /*7*/].f_4)
								{
									Local_3358[iParam0 /*7*/].f_4 = iVar1;
									Local_3358[iParam0 /*7*/].f_3++;
								}
								else
								{
									Local_3358[iParam0 /*7*/].f_1 = 1;
								}
							}
							else
							{
								Local_3358[iParam0 /*7*/].f_1 = 1;
							}
							break;
						
						case 5:
							if (!is_ped_injured(Local_755[Local_3358[iParam0 /*7*/].f_4 /*33*/]))
							{
								if (func_35("ONEILGUARD10", 5, Local_755[Local_3358[iParam0 /*7*/].f_4 /*33*/], "ONEILGUARD2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_3358[iParam0 /*7*/].f_1 = 1;
								}
							}
							else
							{
								Local_3358[iParam0 /*7*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 5:
					Local_3358[iParam0 /*7*/].f_4 = func_18(23);
					if (Local_3358[iParam0 /*7*/].f_4 != -1)
					{
						if (!is_ped_injured(Local_755[Local_3358[iParam0 /*7*/].f_4 /*33*/]))
						{
							if (func_35("ONEILGUARD11", 6, Local_755[Local_3358[iParam0 /*7*/].f_4 /*33*/], "ONEILGUARD2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_3358[iParam0 /*7*/].f_1 = 1;
							}
						}
						else
						{
							Local_3358[iParam0 /*7*/].f_1 = 1;
						}
					}
					break;
				
				case 6:
					Local_3358[iParam0 /*7*/].f_4 = func_18(23);
					if (Local_3358[iParam0 /*7*/].f_4 != -1)
					{
						if (!is_ped_injured(Local_755[Local_3358[iParam0 /*7*/].f_4 /*33*/]))
						{
							if (func_35("ONEILGUARD12", 6, Local_755[Local_3358[iParam0 /*7*/].f_4 /*33*/], "ONEILGUARD2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_3358[iParam0 /*7*/].f_1 = 1;
							}
						}
						else
						{
							Local_3358[iParam0 /*7*/].f_1 = 1;
						}
					}
					break;
				
				case 7:
					if (func_35("CHI2_drive", 1, player_ped_id(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_3358[iParam0 /*7*/].f_1 = 1;
					}
					break;
				
				case 9:
					switch (Local_3358[iParam0 /*7*/].f_3)
					{
						case 0:
							if (!is_ped_injured(Local_755[Local_3358[iParam0 /*7*/].f_4 /*33*/]))
							{
								Local_3358[iParam0 /*7*/].f_3 = get_random_int_in_range(true, 3);
							}
							break;
						
						case 1:
							if (func_35("SEETREVOR", 3, Local_755[Local_3358[iParam0 /*7*/].f_4 /*33*/], "CHIN2goon1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_3358[iParam0 /*7*/].f_1 = 1;
							}
							break;
						
						case 2:
							if (func_35("GOON2TREV", 4, Local_755[Local_3358[iParam0 /*7*/].f_4 /*33*/], "CHIN2goon2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_3358[iParam0 /*7*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 10:
					switch (Local_3358[iParam0 /*7*/].f_3)
					{
						case 0:
							if (get_game_timer() > Local_3358[iParam0 /*7*/].f_4)
							{
								if (func_159(&(Local_3358[iParam0 /*7*/].f_5), 1, 1))
								{
									Local_3358[iParam0 /*7*/].f_3++;
								}
							}
							break;
						
						case 1:
							if (!is_ped_injured(Local_755[Local_3358[iParam0 /*7*/].f_5 /*33*/]))
							{
								if (Local_3358[iParam0 /*7*/].f_6 < 3)
								{
									if (func_35("ONEILGUARD5", 5, Local_755[Local_3358[iParam0 /*7*/].f_5 /*33*/], "ONEILGUARD1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
									{
										Local_3358[iParam0 /*7*/].f_4 = get_game_timer() + get_random_int_in_range(7000, 12000);
										Local_3358[iParam0 /*7*/].f_6++;
										Local_3358[iParam0 /*7*/].f_3 = 0;
									}
								}
								else if (Local_3358[iParam0 /*7*/].f_6 < 6)
								{
									if (func_35("ONEILGUARD6", 6, Local_755[Local_3358[iParam0 /*7*/].f_5 /*33*/], "ONEILGUARD2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
									{
										Local_3358[iParam0 /*7*/].f_4 = get_game_timer() + get_random_int_in_range(7000, 12000);
										Local_3358[iParam0 /*7*/].f_6++;
										Local_3358[iParam0 /*7*/].f_3 = 0;
									}
								}
								else
								{
									Local_3358[iParam0 /*7*/].f_1 = 1;
								}
							}
							else
							{
								Local_3358[iParam0 /*7*/].f_3 = 0;
							}
							break;
					}
					break;
				
				case 11:
					switch (Local_3358[iParam0 /*7*/].f_3)
					{
						case 0:
							if (get_game_timer() > Local_3358[iParam0 /*7*/].f_4)
							{
								if (func_159(&(Local_3358[iParam0 /*7*/].f_5), 1, 1))
								{
									Local_3358[iParam0 /*7*/].f_3++;
								}
							}
							break;
						
						case 1:
							if (!is_ped_injured(Local_755[Local_3358[iParam0 /*7*/].f_5 /*33*/]))
							{
								switch (Local_3358[iParam0 /*7*/].f_6)
								{
									case 0:
									case 2:
									case 5:
									case 9:
										if (func_35("COOKATT", 3, Local_755[Local_3358[iParam0 /*7*/].f_5 /*33*/], "oneilcook", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_3358[iParam0 /*7*/].f_4 = get_game_timer() + get_random_int_in_range(7000, 12000);
											Local_3358[iParam0 /*7*/].f_6++;
											Local_3358[iParam0 /*7*/].f_3 = 0;
										}
										break;
									
									case 1:
									case 6:
									case 8:
									case 11:
										if (func_35("GOONATT", 3, Local_755[Local_3358[iParam0 /*7*/].f_5 /*33*/], "chin2goon1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_3358[iParam0 /*7*/].f_4 = get_game_timer() + get_random_int_in_range(7000, 12000);
											Local_3358[iParam0 /*7*/].f_6++;
											Local_3358[iParam0 /*7*/].f_3 = 0;
										}
										break;
									
									case 3:
									case 4:
									case 7:
									case 10:
										if (func_35("GOON2ATTO", 4, Local_755[Local_3358[iParam0 /*7*/].f_5 /*33*/], "chin2goon2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_3358[iParam0 /*7*/].f_4 = get_game_timer() + get_random_int_in_range(7000, 12000);
											Local_3358[iParam0 /*7*/].f_6++;
											Local_3358[iParam0 /*7*/].f_3 = 0;
										}
										break;
									
									case 12:
										Local_3358[iParam0 /*7*/].f_1 = 1;
										break;
								}
							}
							else
							{
								Local_3358[iParam0 /*7*/].f_3 = 0;
							}
							break;
					}
					break;
				
				case 12:
					switch (Local_3358[iParam0 /*7*/].f_3)
					{
						case 0:
							if (get_game_timer() > Local_3358[iParam0 /*7*/].f_4)
							{
								if (func_159(&(Local_3358[iParam0 /*7*/].f_5), 2, 1))
								{
									Local_3358[iParam0 /*7*/].f_3++;
								}
							}
							break;
						
						case 1:
							if (!is_ped_injured(Local_755[Local_3358[iParam0 /*7*/].f_5 /*33*/]))
							{
								switch (Local_3358[iParam0 /*7*/].f_6)
								{
									case 0:
									case 2:
									case 5:
									case 9:
										if (func_35("GOONIN", 3, Local_755[Local_3358[iParam0 /*7*/].f_5 /*33*/], "chin2goon1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_3358[iParam0 /*7*/].f_4 = get_game_timer() + get_random_int_in_range(6000, 10000);
											Local_3358[iParam0 /*7*/].f_6++;
											Local_3358[iParam0 /*7*/].f_3 = 0;
										}
										break;
									
									case 1:
									case 6:
									case 8:
									case 11:
										if (func_35("GOON2ATTI", 4, Local_755[Local_3358[iParam0 /*7*/].f_5 /*33*/], "chin2goon2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_3358[iParam0 /*7*/].f_4 = get_game_timer() + get_random_int_in_range(6000, 10000);
											Local_3358[iParam0 /*7*/].f_6++;
											Local_3358[iParam0 /*7*/].f_3 = 0;
										}
										break;
									
									case 3:
									case 4:
									case 7:
									case 10:
										if (func_35("ATTACKIN", 3, Local_755[Local_3358[iParam0 /*7*/].f_5 /*33*/], "ONEILCOOK", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_3358[iParam0 /*7*/].f_4 = get_game_timer() + get_random_int_in_range(6000, 10000);
											Local_3358[iParam0 /*7*/].f_6++;
											Local_3358[iParam0 /*7*/].f_3 = 0;
										}
										break;
									
									case 12:
										Local_3358[iParam0 /*7*/].f_1 = 1;
										break;
								}
							}
							else
							{
								Local_3358[iParam0 /*7*/].f_3 = 0;
							}
							break;
					}
					break;
				
				case 14:
					switch (Local_3358[iParam0 /*7*/].f_3)
					{
						case 0:
							iVar2 = 0;
							while (iVar2 < Local_755)
							{
								if (Local_755[iVar2 /*33*/].f_1 == 2)
								{
									if (!is_ped_injured(Local_755[iVar2 /*33*/]))
									{
										if (is_ped_in_combat(Local_755[iVar2 /*33*/], false))
										{
											if (can_ped_in_combat_see_target(Local_755[iVar2 /*33*/], player_ped_id()))
											{
												Local_3358[iParam0 /*7*/].f_4 = iVar2;
												Local_3358[iParam0 /*7*/].f_3++;
											}
										}
									}
								}
								iVar2++;
							}
							break;
						
						case 1:
							if (func_35("G2TREVIN", 4, Local_755[Local_3358[iParam0 /*7*/].f_4 /*33*/], "chin2goon2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_3358[iParam0 /*7*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 15:
					switch (Local_3358[iParam0 /*7*/].f_3)
					{
						case 0:
							if (!is_ped_injured(Local_755[Local_3358[iParam0 /*7*/].f_4 /*33*/]))
							{
								if (func_35("ONEILGUARD3", 5, Local_755[Local_3358[iParam0 /*7*/].f_4 /*33*/], "ONEILGUARD1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_3358[iParam0 /*7*/].f_3++;
								}
							}
							break;
						
						case 1:
							if (!is_ped_injured(Local_755[Local_3358[iParam0 /*7*/].f_4 /*33*/]))
							{
								if (func_35("ONEILGUARD1", 5, Local_755[Local_3358[iParam0 /*7*/].f_4 /*33*/], "ONEILGUARD1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_3358[iParam0 /*7*/].f_1 = 1;
								}
							}
							break;
					}
					break;
				
				case 16:
					switch (Local_3358[iParam0 /*7*/].f_3)
					{
						case 0:
							if (func_159(&(Local_3358[iParam0 /*7*/].f_4), 1, 1))
							{
								Local_3358[iParam0 /*7*/].f_3++;
							}
							break;
						
						case 1:
							if (func_35("ONEILGUARD7", 5, Local_755[Local_3358[iParam0 /*7*/].f_4 /*33*/], "oneilguard2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_3358[iParam0 /*7*/].f_3++;
							}
							break;
						
						case 2:
							if (func_35("CHI2_app", 1, player_ped_id(), "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_3358[iParam0 /*7*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 17:
					if (func_35("CHI2_app", 1, player_ped_id(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_3358[iParam0 /*7*/].f_1 = 1;
					}
					break;
				
				case 19:
					switch (Local_3358[iParam0 /*7*/].f_3)
					{
						case 0:
							if (func_82("ONEILGUARD4") || func_82("SEETREVOR"))
							{
								Local_3358[iParam0 /*7*/].f_3++;
							}
							break;
						
						case 1:
							if (func_35("CHI2_HARD", 1, player_ped_id(), "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_3358[iParam0 /*7*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 20:
					switch (Local_3358[iParam0 /*7*/].f_3)
					{
						case 0:
							if (get_game_timer() > Local_3358[iParam0 /*7*/].f_5)
							{
								fVar4 = 999f;
								Local_3358[iParam0 /*7*/].f_4 = -1;
								iVar3 = 0;
								while (iVar3 < Local_755)
								{
									if (Local_755[iVar3 /*33*/].f_1 == 2)
									{
										if (!is_ped_injured(Local_755[iVar3 /*33*/]))
										{
											fVar5 = func_4(player_ped_id(), Local_755[iVar3 /*33*/], 1);
											if (fVar5 < fVar4)
											{
												fVar4 = fVar5;
												Local_3358[iParam0 /*7*/].f_4 = iVar3;
											}
										}
									}
									iVar3++;
								}
								if (Local_3358[iParam0 /*7*/].f_4 == -1)
								{
									Local_3358[iParam0 /*7*/].f_1 = 1;
								}
								else
								{
									Local_3358[iParam0 /*7*/].f_3++;
								}
							}
							break;
						
						case 1:
							if (!is_ped_injured(Local_755[Local_3358[iParam0 /*7*/].f_4 /*33*/]))
							{
								if (func_35("CHI2_outs", 5, Local_755[Local_3358[iParam0 /*7*/].f_4 /*33*/], "Oneilguard1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_3358[iParam0 /*7*/].f_1 = 1;
								}
							}
							else
							{
								Local_3358[iParam0 /*7*/].f_5 = get_game_timer() + 6000;
								Local_3358[iParam0 /*7*/].f_3 = 0;
							}
							break;
					}
					break;
				
				case 18:
					switch (Local_3358[iParam0 /*7*/].f_3)
					{
						case 0:
							iVar6 = 0;
							while (iVar6 < Local_755)
							{
								if (Local_755[iVar6 /*33*/].f_2 == 8)
								{
									Local_3358[iParam0 /*7*/].f_4 = iVar6;
								}
								if (Local_755[iVar6 /*33*/].f_2 == 9)
								{
									Local_3358[iParam0 /*7*/].f_5 = iVar6;
								}
								iVar6++;
							}
							Local_3358[iParam0 /*7*/].f_3++;
							break;
						
						case 1:
							if (!func_59())
							{
								if (is_synchronized_scene_running(Local_755[Local_3358[iParam0 /*7*/].f_4 /*33*/].f_14))
								{
									if (get_synchronized_scene_phase(Local_755[Local_3358[iParam0 /*7*/].f_4 /*33*/].f_14) > 0.15f)
									{
										if (get_synchronized_scene_phase(Local_755[Local_3358[iParam0 /*7*/].f_4 /*33*/].f_14) < 0.65f)
										{
											if (func_4(Local_755[Local_3358[iParam0 /*7*/].f_4 /*33*/], player_ped_id(), 1) < 30f)
											{
												Local_3358[iParam0 /*7*/].f_3 = 3;
											}
										}
									}
								}
							}
							break;
						
						case 2:
							if (!is_ped_injured(Local_755[Local_3358[iParam0 /*7*/].f_4 /*33*/]))
							{
								Local_3358[iParam0 /*7*/].f_3++;
							}
							else
							{
								Local_3358[iParam0 /*7*/].f_3 = 1;
							}
							break;
						
						case 3:
							if (!is_ped_injured(Local_755[Local_3358[iParam0 /*7*/].f_5 /*33*/]))
							{
								_play_ambient_speech_with_voice(Local_755[Local_3358[iParam0 /*7*/].f_5 /*33*/], "generic_cheer", "A_M_M_Hillbilly_01_White_mini_03", "SPEECH_PARAMS_FORCE_SHOUTED", 0);
								Local_3358[iParam0 /*7*/].f_3++;
							}
							else
							{
								Local_3358[iParam0 /*7*/].f_3 = 1;
							}
							break;
						
						case 4:
							if (!is_ped_injured(Local_755[Local_3358[iParam0 /*7*/].f_4 /*33*/]))
							{
								if (is_synchronized_scene_running(Local_755[Local_3358[iParam0 /*7*/].f_4 /*33*/].f_14))
								{
									if (get_synchronized_scene_phase(Local_755[Local_3358[iParam0 /*7*/].f_4 /*33*/].f_14) > 0.75f)
									{
										Local_3358[iParam0 /*7*/].f_3 = 1;
									}
								}
							}
							break;
					}
					break;
				
				case 21:
					if (func_35("CHI2_find", 1, player_ped_id(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						_0x293220DA1B46CEBC(5f, 8f, 4);
						Local_3358[iParam0 /*7*/].f_1 = 1;
					}
					break;
				
				case 26:
					if (func_158())
					{
						if (func_35("CHI2_pourmis", 1, player_ped_id(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
						{
							Local_3358[iParam0 /*7*/].f_1 = 1;
						}
					}
					break;
				
				case 27:
					if (func_35("CHI2_boom", 1, player_ped_id(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_3358[iParam0 /*7*/].f_1 = 1;
					}
					break;
				
				case 22:
					switch (Local_3358[iParam0 /*7*/].f_3)
					{
						case 0:
							Local_3358[iParam0 /*7*/].f_4 = 2500;
							Local_3358[iParam0 /*7*/].f_5 = 0;
							Local_3358[iParam0 /*7*/].f_3 = 1;
							break;
						
						case 1:
							Local_3358[iParam0 /*7*/].f_4 -= floor(timestep() * 1000f);
							if (Local_3358[iParam0 /*7*/].f_4 <= 0)
							{
								Local_3358[iParam0 /*7*/].f_3 = 2;
							}
							break;
						
						case 2:
							if (Local_3358[iParam0 /*7*/].f_5 < 14)
							{
								if (func_35("CHI2_pour", 1, player_ped_id(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_3358[iParam0 /*7*/].f_3 = 1;
									Local_3358[iParam0 /*7*/].f_4 = 12000 + get_random_int_in_range(3000, 5000);
									Local_3358[iParam0 /*7*/].f_5++;
								}
							}
							break;
					}
					break;
				
				case 23:
					if (func_35("CHI2_light", 1, player_ped_id(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_3358[iParam0 /*7*/].f_1 = 1;
					}
					break;
				
				case 24:
					if (func_35("CHI2_boom", 1, player_ped_id(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_3358[iParam0 /*7*/].f_1 = 1;
					}
					break;
				
				case 25:
					if (func_35("CHI2_burn", 1, player_ped_id(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_3358[iParam0 /*7*/].f_1 = 1;
					}
					break;
				}
			}
	}
}

bool func_158()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < Local_444)
	{
		if (Local_444[iVar0 /*5*/].f_4 == 1)
		{
			if (iVar2 == 0)
			{
				iVar2 = 1;
				iVar1++;
				if (iVar1 > 1)
				{
					return true;
				}
			}
		}
		else if (iVar2 == 1)
		{
			iVar2 = 0;
		}
		iVar0++;
	}
	return false;
}

bool func_159(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 9999f;
	*iParam0 = -1;
	iVar0 = 0;
	while (iVar0 < Local_755)
	{
		if (Local_755[iVar0 /*33*/].f_1 == iParam1)
		{
			if (iParam2 == 0 || (iParam2 == 1 && !is_ped_injured(Local_755[iVar0 /*33*/])))
			{
				fVar1 = func_4(player_ped_id(), Local_755[iVar0 /*33*/], 1);
				if (fVar1 < fVar2)
				{
					fVar2 = fVar1;
					*iParam0 = iVar0;
				}
			}
		}
		iVar0++;
	}
	if (*iParam0 != -1)
	{
		return true;
	}
	return false;
}

void func_160(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
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
	auto uVar16;
	
	if (Local_2917[iParam0 /*10*/] != iParam1 || Local_2917[iParam0 /*10*/].f_1 == 0)
	{
		Local_2917[iParam0 /*10*/] = iParam1;
		Local_2917[iParam0 /*10*/].f_1 = 1;
		Local_2917[iParam0 /*10*/].f_3 = 0;
		Local_2917[iParam0 /*10*/].f_6 = 0;
		Local_2917[iParam0 /*10*/].f_4 = 0;
		Local_2917[iParam0 /*10*/].f_7 = 0;
		Local_2917[iParam0 /*10*/].f_8 = 0;
		Local_2917[iParam0 /*10*/].f_9 = 0f;
	}
	if (Local_2917[iParam0 /*10*/].f_2 && iParam2 == 0)
	{
		iVar0 = true;
	}
	else
	{
		iVar0 = func_152(iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, iParam10);
	}
	if (iParam2 == 1 && !iVar0)
	{
		Local_2917[iParam0 /*10*/].f_2 = 0;
	}
	if (Local_2917[iParam0 /*10*/].f_3 == 0 || Local_2917[iParam0 /*10*/].f_6 == -1)
	{
		if (iVar0 == 1)
		{
			if (!Local_2917[iParam0 /*10*/].f_2)
			{
				Local_2917[iParam0 /*10*/].f_2 = 1;
			}
			switch (Local_2917[iParam0 /*10*/])
			{
				case 1:
					break;
				
				case 2:
					switch (Local_2917[iParam0 /*10*/].f_6)
					{
						case 0:
							start_audio_scene("CHI_2_DRIVE_TO_FARMHOUSE");
							Local_2917[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if (!is_ped_in_any_vehicle(player_ped_id(), 0))
							{
								stop_audio_scene("CHI_2_DRIVE_TO_FARMHOUSE");
								Local_2917[iParam0 /*10*/].f_3 = 1;
							}
							break;
					}
					break;
				
				case 3:
					if (func_67(player_ped_id(), 1991.05f, 3054.262f, 46.2147f, 1) > 250f)
					{
						if (does_entity_exist(Local_755[11 /*33*/]))
						{
							delete_ped(&(Local_755[11 /*33*/]));
						}
						if (does_entity_exist(Local_755[10 /*33*/]))
						{
							delete_ped(&(Local_755[10 /*33*/]));
						}
						if (does_entity_exist(Local_755[12 /*33*/]))
						{
							delete_ped(&(Local_755[12 /*33*/]));
						}
						if (does_entity_exist(Local_755[13 /*33*/]))
						{
							delete_ped(&(Local_755[13 /*33*/]));
						}
						if (does_entity_exist(Local_755[14 /*33*/]))
						{
							delete_ped(&(Local_755[14 /*33*/]));
						}
						set_model_as_no_longer_needed(joaat("ig_janet"));
						set_model_as_no_longer_needed(joaat("ig_janet"));
						set_model_as_no_longer_needed(joaat("ig_old_man1a"));
						set_model_as_no_longer_needed(joaat("ig_old_man2"));
						set_model_as_no_longer_needed(joaat("ig_taocheng"));
						set_model_as_no_longer_needed(joaat("ig_taostranslator"));
						remove_anim_dict("misschinese2_crystalmaze");
						remove_anim_dict("MISSChinese2_crystalMazeMCS1_IG");
						remove_anim_dict("missrampageintrooutro");
						if (iLocal_2884 != -1)
						{
							if (_0x0EAEB0DB4B132399(iLocal_2884))
							{
								remove_navmesh_blocking_object(iLocal_2884);
							}
						}
						clear_ped_non_creation_area();
						func_31(26, 1);
						Local_2917[iParam0 /*10*/].f_3 = 1;
					}
					break;
				
				case 5:
					if (load_stream("CHI_2_FARMHOUSE_INTRO", "CHINESE2_FARMHOUSE_INTRODUCTION"))
					{
						Local_2917[iParam0 /*10*/].f_3 = 1;
					}
					break;
				
				case 4:
					if (func_67(player_ped_id(), 2457.49f, 4977.095f, 50.56783f, 1) < 400f)
					{
						func_32(27, 0);
						set_vehicle_population_budget(1);
						set_ped_population_budget(1);
						prefetch_srl("chinese2_farmhouse_cutscene");
						Local_2917[iParam0 /*10*/].f_3 = 1;
					}
					break;
				
				case 7:
					if ((!is_ped_injured(Local_755[12 /*33*/]) && !is_ped_injured(Local_755[13 /*33*/])) && !is_ped_injured(Local_755[14 /*33*/]))
					{
						if (func_169(6, 6) < 2)
						{
							if (is_entity_in_angled_area(player_ped_id(), 1981.257f, 3050.721f, 41.08995f, 1984.257f, 3055.543f, 49.47314f, 3.0625f, 0, true, 0))
							{
								if (get_script_task_status(Local_755[12 /*33*/], 150319005) == 7)
								{
									task_look_at_entity(Local_755[13 /*33*/], player_ped_id(), -1, 0, 2);
									task_look_at_entity(Local_755[14 /*33*/], player_ped_id(), -1, 0, 2);
									task_look_at_entity(Local_755[12 /*33*/], player_ped_id(), -1, 0, 2);
								}
							}
						}
					}
					break;
				
				case 8:
					fVar1 = func_67(player_ped_id(), 2450.214f, 4979.208f, 60.8422f, 1);
					if (fVar1 < 900f)
					{
						if (is_ped_in_any_vehicle(player_ped_id(), 0))
						{
							iVar4 = get_vehicle_ped_is_in(player_ped_id(), 0);
							if (is_vehicle_driveable(iVar4, 0))
							{
								if (is_this_model_a_heli(get_entity_model(iVar4)) || is_this_model_a_plane(get_entity_model(iVar4)))
								{
									fVar2 = 900f - fVar1;
									if (fVar2 < 0f)
									{
										fVar2 = 0f;
									}
									fVar2 /= 900f;
									fVar2 *= 10000f;
									fVar3 = get_entity_speed(iVar4);
									fVar2 *= fVar3 / 35f;
									if (fVar3 > 35f)
									{
										apply_force_to_entity_center_of_mass(iVar4, 1, 0f, -fVar2, 0f, 0, 1, 0, 0);
									}
								}
							}
						}
					}
					break;
				
				case 9:
					if (is_entity_playing_anim(player_ped_id(), "missrampageintrooutro", "trvram_6_1h_run_outro", 3))
					{
						Local_2917[iParam0 /*10*/].f_6 = 1;
						set_ped_reset_flag(player_ped_id(), 321, true);
						if (has_anim_event_fired(player_ped_id(), get_hash_key("walkinterruptible")))
						{
							force_ped_motion_state(player_ped_id(), -1871534317, false, 0, 0);
							if (func_168())
							{
								clear_ped_tasks(player_ped_id());
								Local_2917[iParam0 /*10*/].f_3 = 1;
							}
						}
					}
					else if (Local_2917[iParam0 /*10*/].f_6 == 1)
					{
						remove_anim_dict("missrampageintrooutro");
						Local_2917[iParam0 /*10*/].f_3 = 1;
					}
					break;
				
				case 6:
					switch (Local_2917[iParam0 /*10*/].f_6)
					{
						case 0:
							if ((!is_ped_injured(Local_755[12 /*33*/]) && !is_ped_injured(Local_755[13 /*33*/])) && !is_ped_injured(Local_755[14 /*33*/]))
							{
								PED::PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_755[12 /*33*/], iLocal_2636);
								PED::PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_755[13 /*33*/], iLocal_2636);
								PED::PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_755[14 /*33*/], iLocal_2636);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_755[12 /*33*/], 17, true);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_755[13 /*33*/], 17, true);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_755[14 /*33*/], 17, true);
								clear_entity_last_damage_entity(Local_755[12 /*33*/]);
								clear_entity_last_damage_entity(Local_755[13 /*33*/]);
								clear_entity_last_damage_entity(Local_755[14 /*33*/]);
								Local_2917[iParam0 /*10*/].f_6++;
							}
							break;
						
						case 1:
							if ((is_ped_injured(Local_755[12 /*33*/]) || is_ped_injured(Local_755[13 /*33*/])) || is_ped_injured(Local_755[14 /*33*/]))
							{
								Local_2917[iParam0 /*10*/].f_6++;
							}
							if (!is_ped_injured(Local_755[12 /*33*/]))
							{
								if (has_entity_been_damaged_by_any_ped(Local_755[12 /*33*/]))
								{
									Local_2917[iParam0 /*10*/].f_6 = 2;
								}
							}
							if (!is_ped_injured(Local_755[13 /*33*/]))
							{
								if (has_entity_been_damaged_by_any_ped(Local_755[13 /*33*/]))
								{
									Local_2917[iParam0 /*10*/].f_6 = 2;
								}
							}
							if (!is_ped_injured(Local_755[14 /*33*/]))
							{
								if (has_entity_been_damaged_by_any_ped(Local_755[14 /*33*/]))
								{
									Local_2917[iParam0 /*10*/].f_6 = 2;
								}
							}
							break;
						
						case 2:
							if (!is_ped_injured(Local_755[12 /*33*/]))
							{
								task_smart_flee_ped(Local_755[12 /*33*/], player_ped_id(), 100f, -1, 0, 0);
								set_ped_keep_task(Local_755[12 /*33*/], true);
								set_ped_as_no_longer_needed(&(Local_755[12 /*33*/]));
							}
							if (!is_ped_injured(Local_755[13 /*33*/]))
							{
								task_smart_flee_ped(Local_755[13 /*33*/], player_ped_id(), 100f, -1, 0, 0);
								set_ped_keep_task(Local_755[13 /*33*/], true);
								set_ped_as_no_longer_needed(&(Local_755[13 /*33*/]));
							}
							if (!is_ped_injured(Local_755[14 /*33*/]))
							{
								task_smart_flee_ped(Local_755[14 /*33*/], player_ped_id(), 100f, -1, 0, 0);
								set_ped_keep_task(Local_755[14 /*33*/], true);
								set_ped_as_no_longer_needed(&(Local_755[14 /*33*/]));
								Local_2917[iParam0 /*10*/].f_3 = 1;
							}
							break;
					}
					break;
				
				case 10:
					switch (Local_2917[iParam0 /*10*/].f_6)
					{
						case 0:
							prefetch_srl("chinese2_explosion_cutscene");
							stop_stream();
							Local_2917[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if (iLocal_2648 == 1)
							{
								if (load_stream("CHINESE2_FARMHOUSE_EXPLOSION_MOLOTOV_MASTER", 0))
								{
									Local_2917[iParam0 /*10*/].f_6++;
								}
							}
							if (iLocal_2648 == 2)
							{
								if (load_stream("CHINESE2_FARMHOUSE_EXPLOSION_STICKY_BOMB_MASTER", 0))
								{
									Local_2917[iParam0 /*10*/].f_6++;
								}
							}
							if (iLocal_2648 == 3)
							{
								if (load_stream("CHINESE2_FARMHOUSE_EXPLOSION_SHOOT_GASOLINE_MASTER", 0))
								{
									Local_2917[iParam0 /*10*/].f_6++;
								}
							}
							break;
						
						case 2:
							if (is_srl_loaded())
							{
								Local_2917[iParam0 /*10*/].f_6 = 10;
							}
							break;
					}
					break;
				
				case 11:
					switch (Local_2917[iParam0 /*10*/].f_6)
					{
						case 1:
							if (get_game_timer() > Local_2917[iParam0 /*10*/].f_7)
							{
								if (is_valid_interior(get_interior_from_entity(player_ped_id())))
								{
									add_explosion(get_entity_coords(player_ped_id(), 1) + Vector(0f, get_random_float_in_range(0f, 4f), get_random_float_in_range(0f, 4f)), 16, 1.5f, 1, 0, 1f);
									Local_2917[iParam0 /*10*/].f_9--;
									Local_2917[iParam0 /*10*/].f_7 = get_game_timer() + get_random_int_in_range(250, 520);
								}
								else
								{
									Local_2917[iParam0 /*10*/].f_6 = 2;
								}
							}
							break;
						
						case 2:
							break;
						
						default:
							iVar5 = false;
							while (iVar5 < vLocal_2889.x)
							{
								if (!is_bit_set(Local_2917[iParam0 /*10*/].f_7, iVar5))
								{
									if (is_explosion_in_sphere(-1, vLocal_2889[iVar5 /*3*/], 5f))
									{
										set_bit(&(Local_2917[iParam0 /*10*/].f_7), iVar5);
										if (Local_2917[iParam0 /*10*/].f_6 == 0)
										{
											Local_2917[iParam0 /*10*/].f_6 = get_game_timer() + 1500;
										}
									}
								}
								iVar5++;
							}
							if (get_game_timer() > Local_2917[iParam0 /*10*/].f_8)
							{
								Local_2917[iParam0 /*10*/].f_8 = 0;
								iVar5 = false;
								while (iVar5 < vLocal_2889.x)
								{
									if (!is_bit_set(Local_2917[iParam0 /*10*/].f_7, iVar5 + 9) && is_bit_set(Local_2917[iParam0 /*10*/].f_7, iVar5))
									{
										add_explosion(vLocal_2889[iVar5 /*3*/], 16, 1.5f, 1, 0, 1f);
										set_bit(&(Local_2917[iParam0 /*10*/].f_7), iVar5 + 9);
										iVar5 = 8;
										Local_2917[iParam0 /*10*/].f_8 = get_game_timer() + get_random_int_in_range(150, 320);
									}
									iVar5++;
								}
							}
							if (Local_2917[iParam0 /*10*/].f_6 != 0)
							{
								if (get_game_timer() > Local_2917[iParam0 /*10*/].f_6)
								{
									Local_2917[iParam0 /*10*/].f_6 = 1;
									Local_2917[iParam0 /*10*/].f_7 = get_game_timer() + 300;
									Local_2917[iParam0 /*10*/].f_9 = 16f;
								}
							}
							break;
					}
					break;
				
				case 12:
					iVar6 = func_18(8);
					iVar7 = func_18(9);
					func_99(iVar6, 20, 0, 0);
					func_99(iVar7, 20, 0, 0);
					Local_2917[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 42:
					switch (Local_2917[iParam0 /*10*/].f_6)
					{
						case 0:
							set_initial_player_station("RADIO_01_CLASS_ROCK");
							Local_2917[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if (is_ped_in_any_vehicle(player_ped_id(), 0))
							{
								if (_0x109697E2FFBAC8A1())
								{
									iLocal_2506 = get_vehicle_ped_is_in(player_ped_id(), 0);
									if (is_vehicle_driveable(iLocal_2506, 0))
									{
										if (!_is_vehicle_engine_on(iLocal_2506))
										{
											Local_2917[iParam0 /*10*/].f_6++;
										}
									}
								}
							}
							break;
						
						case 2:
							if (prepare_music_event("CHN2_TREV_RADIO_1_FRTA"))
							{
								Local_2917[iParam0 /*10*/].f_6++;
							}
							break;
							break;
						
						case 3:
							if (trigger_music_event("CHN2_TREV_RADIO_1_FRTA"))
							{
								Local_2917[iParam0 /*10*/].f_6++;
							}
							break;
						
						case 4:
							if (func_68(iLocal_2506))
							{
								if (is_ped_in_vehicle(player_ped_id(), iLocal_2506, 0))
								{
									if (_is_vehicle_engine_on(iLocal_2506))
									{
										Local_2917[iParam0 /*10*/].f_7 += get_game_timer() + 7000;
										Local_2917[iParam0 /*10*/].f_6++;
									}
								}
							}
							break;
						
						case 5:
							if (func_68(iLocal_2506))
							{
								if (is_ped_in_vehicle(player_ped_id(), iLocal_2506, 0))
								{
									if (get_game_timer() > Local_2917[iParam0 /*10*/].f_7)
									{
										if (get_player_radio_station_genre() != 6 && get_player_radio_station_genre() != 0)
										{
											if (_0x3A48AB4445D499BE() != 0)
											{
												if (func_35("CHI2_rad", 1, player_ped_id(), "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
												{
													Local_2917[iParam0 /*10*/].f_6++;
												}
											}
											else
											{
												Local_2917[iParam0 /*10*/].f_6++;
											}
										}
										else
										{
											Local_2917[iParam0 /*10*/].f_7 = get_game_timer() + 5000;
										}
									}
								}
							}
							break;
						
						case 6:
							if (func_82("CHI2_rad"))
							{
								Local_2917[iParam0 /*10*/].f_6++;
							}
							break;
						
						case 7:
							if (!func_82("CHI2_rad"))
							{
								if (func_68(iLocal_2506))
								{
									if (is_ped_in_vehicle(player_ped_id(), iLocal_2506, 0))
									{
										if (!is_control_pressed(0, 85))
										{
											if (get_player_radio_station_genre() != 6)
											{
												if (iLocal_2676 == -1)
												{
													iLocal_2676 = get_sound_id();
													play_sound_frontend(iLocal_2676, "Change_Station_Loud", "Radio_Soundset", 1);
													Local_2917[iParam0 /*10*/].f_6++;
												}
											}
											else
											{
												Local_2917[iParam0 /*10*/].f_6 = 9;
											}
										}
									}
								}
							}
							break;
						
						case 8:
							if (!is_control_pressed(0, 85))
							{
								if (trigger_music_event("CHN2_TREV_RADIO_2_FRTA"))
								{
									start_audio_scene("CHI_2_DRIVE_ROCK_RADIO");
									Local_2917[iParam0 /*10*/].f_6++;
								}
							}
							break;
						
						case 9:
							if (func_68(iLocal_2506))
							{
								if (is_ped_in_vehicle(player_ped_id(), iLocal_2506, 0))
								{
									if (get_player_radio_station_genre() == 6)
									{
										if (_0x3A48AB4445D499BE() != 0)
										{
											if (func_35("CHI2_radb", 1, player_ped_id(), "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												Local_2917[iParam0 /*10*/].f_6++;
											}
										}
										else
										{
											Local_2917[iParam0 /*10*/].f_6++;
										}
									}
								}
							}
							break;
					}
					break;
				
				case 48:
					func_31(9, 1);
					set_wanted_level_multiplier(1f);
					set_player_wanted_level(player_id(), 2, 0);
					set_player_wanted_level_now(player_id(), 0);
					set_max_wanted_level(5);
					Local_2917[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 49:
					if (!func_90(2448.25f, 4974.92f, 55.11f, 20f, 500f) || func_87(49))
					{
						if (iLocal_2678 != 0)
						{
							unpin_interior(iLocal_2678);
						}
						iLocal_2678 = 0;
						func_19(50, 2, 0, 1, 0);
						func_19(51, 2, 0, 1, 0);
						func_19(52, 2, 0, 1, 0);
						func_19(53, 2, 0, 1, 0);
						func_19(54, 1, 0, 1, 0);
						func_19(55, 1, 0, 1, 0);
						Local_2917[iParam0 /*10*/].f_3 = 1;
					}
					break;
				
				case 50:
					switch (Local_2917[iParam0 /*10*/].f_6)
					{
						case 0:
							if (has_ped_got_weapon(player_ped_id(), joaat("weapon_petrolcan"), 0))
							{
								Local_2917[iParam0 /*10*/].f_7 = get_ammo_in_ped_weapon(player_ped_id(), joaat("weapon_petrolcan"));
								Local_2917[iParam0 /*10*/].f_6++;
							}
							break;
						
						case 1:
							if (has_ped_got_weapon(player_ped_id(), joaat("weapon_petrolcan"), 0))
							{
								iVar8 = get_ammo_in_ped_weapon(player_ped_id(), joaat("weapon_petrolcan"));
								if (iVar8 > Local_2917[iParam0 /*10*/].f_7)
								{
									Local_2917[iParam0 /*10*/].f_7 = iVar8;
								}
								else if (iVar8 < Local_2917[iParam0 /*10*/].f_7)
								{
									func_9(158, Local_2917[iParam0 /*10*/].f_7 - iVar8, 0);
									Local_2917[iParam0 /*10*/].f_7 = iVar8;
								}
							}
							if (get_current_ped_weapon(player_ped_id(), &iVar9, 1))
							{
								if (iVar9 == joaat("weapon_petrolcan"))
								{
									if (is_control_pressed(0, 24))
									{
										if (Local_2917[iParam0 /*10*/].f_8 == 0)
										{
											func_10(157, 0);
											Local_2917[iParam0 /*10*/].f_8 = 1;
										}
									}
									else if (Local_2917[iParam0 /*10*/].f_8 == 1)
									{
										func_11(0, 157);
										Local_2917[iParam0 /*10*/].f_8 = 0;
									}
								}
								else if (Local_2917[iParam0 /*10*/].f_8 == 1)
								{
									func_11(0, 157);
									Local_2917[iParam0 /*10*/].f_8 = 0;
								}
							}
							else if (Local_2917[iParam0 /*10*/].f_8 == 1)
							{
								func_11(0, 157);
								Local_2917[iParam0 /*10*/].f_8 = 0;
							}
							break;
					}
					break;
				
				case 51:
					switch (Local_2917[iParam0 /*10*/].f_6)
					{
						case 0:
							Local_2917[iParam0 /*10*/].f_7 = -1;
							Local_2917[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if (get_current_ped_weapon(player_ped_id(), &iVar10, 1))
							{
								if (iVar10 == joaat("weapon_petrolcan"))
								{
									if (is_control_pressed(0, 24))
									{
										if (Local_2917[iParam0 /*10*/].f_7 == -1)
										{
											Local_2917[iParam0 /*10*/].f_7 = get_ammo_in_ped_weapon(player_ped_id(), joaat("weapon_petrolcan"));
										}
										if (iLocal_269 == 0)
										{
											Local_2917[iParam0 /*10*/].f_9 += timestep() * 2f;
										}
										else if (iLocal_269 < 30 && Local_2917[iParam0 /*10*/].f_9 < 70f)
										{
											Local_2917[iParam0 /*10*/].f_9 += timestep() * 1.5f;
										}
										else
										{
											Local_2917[iParam0 /*10*/].f_9 += timestep();
										}
										iVar11 = floor(IntToFloat(Local_2917[iParam0 /*10*/].f_7) * 1f - Local_2917[iParam0 /*10*/].f_9 / 90f);
										if (iVar11 > 0)
										{
											set_ped_ammo(player_ped_id(), iVar10, iVar11);
										}
										else
										{
											set_ped_ammo(player_ped_id(), iVar10, false);
										}
									}
								}
							}
							break;
					}
					break;
				
				case 52:
					func_15("CHN2_STOP_TRACK", 0, func_167());
					Local_2917[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 53:
					set_ambient_zone_list_state("AZL_CHN2_METH_LAB_FARM_FIRE", 1, 1);
					func_166(1);
					Local_2917[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 54:
					func_166(0);
					Local_2917[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 55:
					set_vehicle_population_budget(3);
					set_ped_population_budget(3);
					Local_2917[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 56:
					switch (Local_2917[iParam0 /*10*/].f_6)
					{
						case 0:
							if (does_entity_exist(Local_755[4 /*33*/].f_20))
							{
								set_object_as_no_longer_needed(&(Local_755[4 /*33*/].f_20));
							}
							if (does_entity_exist(Local_755[5 /*33*/].f_20))
							{
								set_object_as_no_longer_needed(&(Local_755[5 /*33*/].f_20));
							}
							iVar12 = 0;
							while (iVar12 < iLocal_2657)
							{
								if (does_entity_exist(iLocal_2657[iVar12]))
								{
									set_object_as_no_longer_needed(&(iLocal_2657[iVar12]));
								}
								iVar12++;
							}
							set_model_as_no_longer_needed(joaat("prop_cs_beer_bot_01"));
							set_model_as_no_longer_needed(joaat("prop_ld_can_01"));
							set_model_as_no_longer_needed(joaat("prop_cs_fertilizer"));
							Local_2917[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if (is_ped_injured(Local_755[23 /*33*/]))
							{
								if (does_entity_exist(iLocal_2878))
								{
									set_object_as_no_longer_needed(&iLocal_2878);
									remove_weapon_asset(joaat("weapon_sawnoffshotgun"));
									Local_2917[iParam0 /*10*/].f_3 = 1;
								}
							}
							break;
					}
					break;
				
				case 47:
					if (!is_ped_injured(Local_755[11 /*33*/]))
					{
						if (!is_ambient_speech_playing(Local_755[11 /*33*/]))
						{
							if (get_game_timer() > Local_2917[iParam0 /*10*/].f_7)
							{
								if (!is_ped_injured(Local_755[11 /*33*/]))
								{
									_play_ambient_speech_with_voice(Local_755[11 /*33*/], "WHIMPER", "WAVELOAD_PAIN_MALE", "SPEECH_PARAMS_FORCE_NORMAL", 0);
									Local_2917[iParam0 /*10*/].f_7 = get_game_timer() + get_random_int_in_range(3500, 5000);
								}
							}
						}
					}
					break;
				
				case 41:
					switch (Local_2917[iParam0 /*10*/].f_6)
					{
						case 0:
							request_model(joaat("ig_taocheng"));
							request_model(joaat("ig_taostranslator"));
							request_anim_dict("misschinese2_crystalmaze");
							if (iLocal_2884 == -1 || (iLocal_2884 != -1 && !_0x0EAEB0DB4B132399(iLocal_2884)))
							{
								iLocal_2884 = add_navmesh_blocking_object(1991.081f, 3054.517f, 46.71474f, 4f, 4f, 4f, 0f, 0, 3);
							}
							Local_2917[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if ((has_anim_dict_loaded("misschinese2_crystalmaze") && has_model_loaded(joaat("ig_taocheng"))) && has_model_loaded(joaat("ig_taostranslator")))
							{
								if (!does_entity_exist(Local_755[11 /*33*/]))
								{
									Local_755[11 /*33*/] = PED::CREATE_PED(26, joaat("ig_taocheng"), 1991.988f, 3054.51f, 46.215f, 0, 1, true);
									PED::PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_755[11 /*33*/], iLocal_1618);
									set_ped_can_be_targetted(Local_755[11 /*33*/], false);
								}
								else if (!is_ped_injured(Local_755[11 /*33*/]))
								{
									PED::PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_755[11 /*33*/], iLocal_1618);
									set_ped_can_be_targetted(Local_755[11 /*33*/], false);
								}
								if (!does_entity_exist(Local_755[10 /*33*/]))
								{
									Local_755[10 /*33*/] = PED::CREATE_PED(26, joaat("ig_taostranslator"), 1991.988f, 3054.51f, 46.215f, 0, 1, true);
									PED::PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_755[10 /*33*/], iLocal_1618);
									set_ped_can_be_targetted(Local_755[10 /*33*/], false);
									set_ped_prop_index(Local_755[10 /*33*/], true, 0, 1, false);
								}
								else if (!is_ped_injured(Local_755[10 /*33*/]))
								{
									PED::PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_755[10 /*33*/], iLocal_1618);
									set_ped_can_be_targetted(Local_755[10 /*33*/], false);
								}
								if (!is_ped_injured(Local_755[11 /*33*/]))
								{
									if (!is_synchronized_scene_running(Local_2917[iParam0 /*10*/].f_7))
									{
										Local_2917[iParam0 /*10*/].f_7 = create_synchronized_scene(1991.988f, 3054.51f, 46.215f, 0f, 0f, 50.76f, 2);
										_0x394B9CD12435C981(Local_2917[iParam0 /*10*/].f_7, true);
									}
									task_synchronized_scene(Local_755[11 /*33*/], Local_2917[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_A_TaoCheng", 1000f, -4f, 257, 16, 1000f, 0);
								}
								if (!is_ped_injured(Local_755[10 /*33*/]))
								{
									if (!is_synchronized_scene_running(Local_2917[iParam0 /*10*/].f_7))
									{
										Local_2917[iParam0 /*10*/].f_7 = create_synchronized_scene(1991.988f, 3054.51f, 46.215f, 0f, 0f, 50.76f, 2);
										_0x394B9CD12435C981(Local_2917[iParam0 /*10*/].f_7, true);
									}
									task_synchronized_scene(Local_755[10 /*33*/], Local_2917[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_A_taotranslator", 1000f, -4f, 257, 16, 1000f, 0);
								}
								Local_2917[iParam0 /*10*/].f_6++;
							}
							break;
						
						case 2:
							if (!is_ped_injured(Local_755[10 /*33*/]) && !is_ped_injured(Local_755[11 /*33*/]))
							{
								set_ped_component_variation(Local_755[10 /*33*/], false, 0, 0, 0);
								set_blocking_of_non_temporary_events(Local_755[11 /*33*/], true);
								set_blocking_of_non_temporary_events(Local_755[10 /*33*/], true);
								if (!is_synchronized_scene_running(Local_2917[iParam0 /*10*/].f_7))
								{
									Local_2917[iParam0 /*10*/].f_7 = create_synchronized_scene(1991.988f, 3054.51f, 46.215f, 0f, 0f, 50.76f, 2);
									task_synchronized_scene(Local_755[11 /*33*/], Local_2917[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_A_TaoCheng", 1000f, -4f, 257, 16, 1000f, 0);
									task_synchronized_scene(Local_755[10 /*33*/], Local_2917[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_A_taotranslator", 1000f, -4f, 257, 16, 1000f, 0);
									_0x394B9CD12435C981(Local_2917[iParam0 /*10*/].f_7, true);
								}
								PED::SET_PED_CONFIG_FLAG(Local_755[11 /*33*/], 118, false);
								PED::SET_PED_CONFIG_FLAG(Local_755[11 /*33*/], 208, true);
								PED::SET_PED_CONFIG_FLAG(Local_755[10 /*33*/], 118, false);
								PED::SET_PED_CONFIG_FLAG(Local_755[10 /*33*/], 208, true);
								Local_2917[iParam0 /*10*/].f_6 = 900;
							}
							break;
						
						case 900:
							if (!is_ped_injured(Local_755[11 /*33*/]))
							{
								if (!is_ped_ragdoll(Local_755[11 /*33*/]))
								{
									if (is_synchronized_scene_running(Local_2917[iParam0 /*10*/].f_7))
									{
										if (get_synchronized_scene_phase(Local_2917[iParam0 /*10*/].f_7) == 1f)
										{
											Local_2917[iParam0 /*10*/].f_7 = create_synchronized_scene(1991.988f, 3054.51f, 46.215f, 0f, 0f, 50.76f, 2);
											_0x394B9CD12435C981(Local_2917[iParam0 /*10*/].f_7, true);
											if (get_random_int_in_range(false, 3) < 2)
											{
												task_synchronized_scene(Local_755[11 /*33*/], Local_2917[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_Base_TaoCheng", 1000f, -4f, 257, 16, 1000f, 0);
												if (!is_ped_injured(Local_755[10 /*33*/]))
												{
													if (!is_ped_ragdoll(Local_755[10 /*33*/]))
													{
														if (!is_bit_set(Local_2917[iParam0 /*10*/].f_8, false))
														{
															task_synchronized_scene(Local_755[10 /*33*/], Local_2917[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_Base_taotranslator", 1000f, -4f, 257, 16, 1000f, 0);
														}
													}
												}
											}
											else
											{
												task_synchronized_scene(Local_755[11 /*33*/], Local_2917[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_A_TaoCheng", 1000f, -4f, 257, 16, 1000f, 0);
												if (!is_ped_injured(Local_755[10 /*33*/]))
												{
													if (!is_ped_ragdoll(Local_755[10 /*33*/]))
													{
														if (!is_bit_set(Local_2917[iParam0 /*10*/].f_8, false))
														{
															task_synchronized_scene(Local_755[10 /*33*/], Local_2917[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_A_taotranslator", 1000f, -4f, 257, 16, 1000f, 0);
														}
													}
												}
											}
										}
									}
									else
									{
										Local_2917[iParam0 /*10*/].f_7 = create_synchronized_scene(1991.988f, 3054.51f, 46.215f, 0f, 0f, 50.76f, 2);
										task_synchronized_scene(Local_755[11 /*33*/], Local_2917[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_A_TaoCheng", 1000f, -4f, 257, 16, 1000f, 0);
										_0x394B9CD12435C981(Local_2917[iParam0 /*10*/].f_7, true);
									}
								}
							}
							if (!is_ped_injured(Local_755[10 /*33*/]))
							{
								if (((has_entity_been_damaged_by_entity(Local_755[10 /*33*/], player_ped_id(), 1) || is_ped_ragdoll(Local_755[10 /*33*/])) || is_ped_injured(Local_755[11 /*33*/])) || (!is_ped_injured(Local_755[10 /*33*/]) && get_script_task_status(Local_755[10 /*33*/], 1785177548) == 2))
								{
									if (!is_bit_set(Local_2917[iParam0 /*10*/].f_8, false))
									{
										clear_ped_tasks(Local_755[10 /*33*/]);
										func_93();
										task_smart_flee_ped(false, player_ped_id(), 30f, 20000, 0, 0);
										task_cower(false, -1);
										func_92(&(Local_755[10 /*33*/]), 0);
										set_bit(&(Local_2917[iParam0 /*10*/].f_8), false);
									}
								}
							}
							if (!is_ped_injured(Local_755[11 /*33*/]))
							{
								if (((has_entity_been_damaged_by_entity(Local_755[11 /*33*/], player_ped_id(), 1) || is_ped_ragdoll(Local_755[11 /*33*/])) || is_bit_set(Local_2917[iParam0 /*10*/].f_8, true)) || (!is_ped_injured(Local_755[11 /*33*/]) && get_script_task_status(Local_755[11 /*33*/], 1785177548) == 2))
								{
									set_entity_health(Local_755[11 /*33*/], false);
									if (!is_ped_ragdoll(Local_755[11 /*33*/]))
									{
									}
								}
							}
							if (func_67(player_ped_id(), 1991.988f, 3054.51f, 46.215f, 1) > 200f)
							{
								if (does_entity_exist(Local_755[11 /*33*/]) && does_entity_exist(Local_755[10 /*33*/]))
								{
									delete_ped(&(Local_755[11 /*33*/]));
									delete_ped(&(Local_755[10 /*33*/]));
								}
								set_model_as_no_longer_needed(joaat("ig_taocheng"));
								set_model_as_no_longer_needed(joaat("ig_taostranslator"));
								remove_anim_dict("misschinese2_crystalmaze");
								if (iLocal_2884 != -1)
								{
									if (_0x0EAEB0DB4B132399(iLocal_2884))
									{
										remove_navmesh_blocking_object(iLocal_2884);
									}
								}
								Local_2917[iParam0 /*10*/].f_3 = 1;
							}
							break;
					}
					if (func_67(player_ped_id(), 1995.169f, 3062.162f, 46.049f, 1) < 7f)
					{
						if (!is_ped_injured(Local_755[11 /*33*/]))
						{
							if (get_script_task_status(Local_755[11 /*33*/], 150319005) != 1)
							{
								task_look_at_entity(Local_755[11 /*33*/], player_ped_id(), 4000, 2096, 2);
							}
						}
						if (!is_ped_injured(Local_755[10 /*33*/]))
						{
							if (get_script_task_status(Local_755[10 /*33*/], 150319005) != 1)
							{
								task_look_at_entity(Local_755[10 /*33*/], player_ped_id(), 4000, 2096, 2);
							}
						}
					}
					break;
				
				case 13:
					iVar13 = 0;
					iLocal_2887 = 0;
					iVar13 = 0;
					while (iVar13 < Local_755)
					{
						if (does_entity_exist(Local_755[iVar13 /*33*/]))
						{
							if (is_ped_injured(Local_755[iVar13 /*33*/]))
							{
								if (Local_755[iVar13 /*33*/].f_21 == 0)
								{
									if (((get_ped_cause_of_death(Local_755[iVar13 /*33*/]) == 392730790 || get_ped_cause_of_death(Local_755[iVar13 /*33*/]) == joaat("weapon_heavysniper")) || get_ped_cause_of_death(Local_755[iVar13 /*33*/]) == joaat("weapon_remotesniper")) || get_ped_cause_of_death(Local_755[iVar13 /*33*/]) == joaat("weapon_sniperrifle"))
									{
										iLocal_2887++;
									}
									Local_755[iVar13 /*33*/].f_21 = 1;
								}
							}
						}
						iVar13++;
					}
					if (iLocal_2887 > 0)
					{
					}
					if (iLocal_2887 > 1)
					{
						func_165(150);
						Local_2917[iParam0 /*10*/].f_3 = 1;
					}
					break;
				
				case 14:
					func_15("CHN2_SNIPE_START", 0, "CHN2_EXPLODE");
					_0x293220DA1B46CEBC(4f, 15f, 4);
					Local_2917[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 15:
					if (func_87(9))
					{
						func_15("CHN2_SPOTTED", 0, "CHN2_EXPLODE");
					}
					else
					{
						func_15("CHN2_TO_HOUSE", 0, "CHN2_EXPLODE");
					}
					Local_2917[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 16:
					if (does_pickup_exist(uLocal_2675))
					{
						remove_pickup(iLocal_2675);
					}
					iVar14 = 0;
					set_bit(&iVar14, 3);
					set_bit(&iVar14, 8);
					set_bit(&iVar14, true);
					if (!does_pickup_exist(iLocal_2675))
					{
						iLocal_2675 = create_pickup(joaat("pickup_weapon_petrolcan"), 2436.775f, 4967.487f, 41.4f, iVar14, -1, 1, false);
						add_pickup_to_interior_room_by_name(iLocal_2675, "V_8_BasementRm");
						iLocal_2677 = func_164(iLocal_2675);
						set_blip_name_from_text_file(iLocal_2677, "FRMBLIP");
					}
					Local_2917[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 17:
					if (!func_30(5))
					{
						func_166(1);
						start_audio_scene("CHI_2_SHOOTOUT_STEALTH");
						_set_unk_map_flag(1);
						Local_2917[iParam0 /*10*/].f_3 = 1;
					}
					break;
				
				case 19:
					remove_anim_dict("misschinese2_barrelRoll");
					remove_anim_set("move_m@gangster@var_e");
					remove_anim_set("move_m@gangster@var_f");
					remove_anim_set("move_m@gangster@generic");
					remove_anim_dict("misschinese2_bank5");
					Local_2917[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 20:
					switch (Local_2917[iParam0 /*10*/].f_6)
					{
						case 0:
							Local_2917[iParam0 /*10*/].f_7 = get_game_timer() + 4000;
							Local_2917[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if (get_game_timer() > Local_2917[iParam0 /*10*/].f_7)
							{
								Local_2917[iParam0 /*10*/].f_7 = 0;
								while (Local_2917[iParam0 /*10*/].f_7 < Local_755)
								{
									if (!is_ped_injured(Local_755[Local_2917[iParam0 /*10*/].f_7 /*33*/]))
									{
										if (get_interior_from_entity(Local_755[Local_2917[iParam0 /*10*/].f_7 /*33*/]) == 0)
										{
											Local_755[Local_2917[iParam0 /*10*/].f_7 /*33*/].f_1 = 5;
											Local_1619[Local_2917[iParam0 /*10*/].f_7 /*24*/].f_3 = 7;
											Local_1619[Local_2917[iParam0 /*10*/].f_7 /*24*/].f_4 = 0;
											Local_1619[Local_2917[iParam0 /*10*/].f_7 /*24*/].f_5 = 0;
											func_99(Local_2917[iParam0 /*10*/].f_7, 27, 0, 0);
											PED::PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_755[Local_2917[iParam0 /*10*/].f_7 /*33*/], iLocal_1617);
											func_128(&(Local_755[Local_2917[iParam0 /*10*/].f_7 /*33*/].f_25));
										}
									}
									Local_2917[iParam0 /*10*/].f_7++;
								}
							}
							break;
					}
					break;
				
				case 21:
					Local_2917[iParam0 /*10*/].f_7 = 0;
					while (Local_2917[iParam0 /*10*/].f_7 < Local_755)
					{
						if (!is_ped_injured(Local_755[Local_2917[iParam0 /*10*/].f_7 /*33*/]))
						{
							if (is_entity_in_angled_area(Local_755[Local_2917[iParam0 /*10*/].f_7 /*33*/], 2457.885f, 4981.169f, 50.00518f, 2441.58f, 4965.088f, 56.24006f, 34.3125f, 0, true, 0))
							{
								delete_ped(&(Local_755[Local_2917[iParam0 /*10*/].f_7 /*33*/]));
							}
						}
						Local_2917[iParam0 /*10*/].f_7++;
					}
					Local_2917[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 22:
					func_15("CHN2_ENTER_HOUSE", 0, "CHN2_EXPLODE");
					Local_2917[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 23:
					iVar15 = 0;
					while (iVar15 < Local_755)
					{
						if (!is_ped_injured(Local_755[iVar15 /*33*/]))
						{
							if (get_room_key_from_entity(Local_755[iVar15 /*33*/]) != get_hash_key("V_8_BasementRm"))
							{
								func_99(iVar15, 27, 0, 0);
								Local_755[iVar15 /*33*/].f_1 = 5;
								Local_1619[iVar15 /*24*/].f_3 = 7;
								Local_755[iVar15 /*33*/].f_5 = 0;
							}
						}
						iVar15++;
					}
					Local_2917[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 24:
					switch (Local_2917[iParam0 /*10*/].f_6)
					{
						case 0:
							Local_2917[iParam0 /*10*/].f_7 = func_18(10);
							if (Local_2917[iParam0 /*10*/].f_7 != -1)
							{
								Local_2917[iParam0 /*10*/].f_6++;
							}
							break;
						
						case 1:
							if (!is_ped_injured(Local_755[Local_2917[iParam0 /*10*/].f_7 /*33*/]))
							{
								func_99(Local_2917[iParam0 /*10*/].f_7, 18, 0, 0);
								Local_2917[iParam0 /*10*/].f_3 = 1;
							}
							else
							{
								Local_2917[iParam0 /*10*/].f_3 = 1;
							}
							break;
					}
					break;
				
				case 25:
					if (is_ped_shooting(player_ped_id()) || func_87(9))
					{
						set_ped_using_action_mode(player_ped_id(), true, -1, 0);
						Local_2917[iParam0 /*10*/].f_3 = 1;
					}
					break;
				
				case 26:
					stop_audio_scene("CHI_2_SHOOTOUT_STEALTH");
					Local_2917[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 27:
					start_audio_scene("CHI_2_SHOOTOUT_ENEMIES_ALERTED");
					Local_2917[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 28:
					if (is_audio_scene_active("CHI_2_SHOOTOUT_ENEMIES_ALERTED"))
					{
						stop_audio_scene("CHI_2_SHOOTOUT_ENEMIES_ALERTED");
					}
					Local_2917[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 44:
					if (!is_audio_scene_active("CHI_2_SHOOTOUT_IN_HOUSE"))
					{
						if (func_87(12))
						{
							start_audio_scene("CHI_2_SHOOTOUT_IN_HOUSE");
						}
					}
					else if (func_156(12))
					{
						stop_audio_scene("CHI_2_SHOOTOUT_IN_HOUSE");
					}
					break;
				
				case 45:
					if ((func_87(9) || (!is_ped_injured(Local_755[8 /*33*/]) && is_ped_in_combat(Local_755[8 /*33*/], false))) || (!is_ped_injured(Local_755[9 /*33*/]) && is_ped_in_combat(Local_755[9 /*33*/], false)))
					{
						if (!is_ped_injured(Local_755[8 /*33*/]))
						{
							set_ped_accuracy(Local_755[8 /*33*/], 45);
						}
						if (!is_ped_injured(Local_755[9 /*33*/]))
						{
							set_ped_accuracy(Local_755[9 /*33*/], 45);
						}
						Local_2917[iParam0 /*10*/].f_3 = 1;
					}
					break;
				
				case 29:
					if (func_87(9))
					{
						Local_2917[iParam0 /*10*/].f_7 = 0;
						while (Local_2917[iParam0 /*10*/].f_7 < Local_755)
						{
							if (!is_ped_injured(Local_755[Local_2917[iParam0 /*10*/].f_7 /*33*/]))
							{
								set_ped_seeing_range(Local_755[Local_2917[iParam0 /*10*/].f_7 /*33*/], 60f);
							}
							Local_2917[iParam0 /*10*/].f_7++;
						}
						Local_2917[iParam0 /*10*/].f_3 = 1;
					}
					else
					{
						switch (Local_2917[iParam0 /*10*/].f_6)
						{
							case 0:
								if (func_87(12))
								{
									Local_2917[iParam0 /*10*/].f_7 = 0;
									while (Local_2917[iParam0 /*10*/].f_7 < Local_755)
									{
										if (!is_ped_injured(Local_755[Local_2917[iParam0 /*10*/].f_7 /*33*/]))
										{
											if (Local_755[Local_2917[iParam0 /*10*/].f_7 /*33*/].f_1 == 1)
											{
												set_ped_seeing_range(Local_755[Local_2917[iParam0 /*10*/].f_7 /*33*/], 5f);
											}
										}
										Local_2917[iParam0 /*10*/].f_7++;
									}
									Local_2917[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 1:
								if (func_156(12))
								{
									Local_2917[iParam0 /*10*/].f_7 = 0;
									while (Local_2917[iParam0 /*10*/].f_7 < Local_755)
									{
										if (!is_ped_injured(Local_755[Local_2917[iParam0 /*10*/].f_7 /*33*/]))
										{
											if (Local_755[Local_2917[iParam0 /*10*/].f_7 /*33*/].f_1 == 1)
											{
												set_ped_seeing_range(Local_755[Local_2917[iParam0 /*10*/].f_7 /*33*/], 30f);
											}
										}
										Local_2917[iParam0 /*10*/].f_7++;
									}
									Local_2917[iParam0 /*10*/].f_6 = 0;
								}
								break;
							}
					}
					break;
				
				case 46:
					switch (Local_2917[iParam0 /*10*/].f_6)
					{
						case 0:
							request_anim_dict("misschinese2_crystalmaze");
							Local_2917[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if (has_anim_dict_loaded("misschinese2_crystalmaze"))
							{
								if (!is_ped_injured(Local_755[23 /*33*/]))
								{
									Local_2917[iParam0 /*10*/].f_7 = create_synchronized_scene(2435.312f, 4967.087f, 41.35f, 0f, 0f, 11.4f, 2);
									set_synchronized_scene_looped(Local_2917[iParam0 /*10*/].f_7, true);
									task_synchronized_scene(Local_755[Local_2917[iParam0 /*10*/].f_7 /*33*/], Local_2917[iParam0 /*10*/].f_8, "misschinese2_crystalmaze", "_stand_to_aim", 1000f, -8f, 0, 0, 1000f, 0);
									Local_2917[iParam0 /*10*/].f_6++;
								}
							}
							break;
						
						case 2:
							break;
					}
					break;
				
				case 30:
					switch (Local_2917[iParam0 /*10*/].f_6)
					{
						case 0:
							request_model(joaat("blazer"));
							Local_2917[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if (has_model_loaded(joaat("blazer")))
							{
								iLocal_2508 = create_vehicle(joaat("blazer"), 2478.587f, 4941.803f, 43.6736f, 227.2903f, 1, 1);
								set_vehicle_on_ground_properly(iLocal_2508);
								Local_2917[iParam0 /*10*/].f_3 = 1;
							}
							break;
					}
					break;
				
				case 31:
					set_ped_using_action_mode(player_ped_id(), false, -1, 0);
					func_163(0);
					func_161();
					Local_2917[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 32:
					switch (Local_2917[iParam0 /*10*/].f_6)
					{
						case 0:
							if (func_87(29))
							{
								if (does_blip_exist(iLocal_2677))
								{
									remove_blip(&iLocal_2677);
								}
								func_12(0);
								if (func_84("FRMFLC", 0, 0))
								{
									clear_prints();
								}
								func_10(157, 0);
								_0x293220DA1B46CEBC(3f, 10f, 4);
								if (iLocal_2649 == 0)
								{
									iLocal_2649 = get_ammo_in_ped_weapon(player_ped_id(), joaat("weapon_petrolcan"));
								}
								Local_2917[iParam0 /*10*/].f_6++;
							}
							break;
						
						case 1:
							if (!func_87(29))
							{
								func_9(158, iLocal_2649 - get_ammo_in_ped_weapon(player_ped_id(), joaat("weapon_petrolcan")), 1);
								iLocal_2679 = get_closest_object_of_type(get_entity_coords(player_ped_id(), 1), 20f, get_weapontype_model(joaat("weapon_petrolcan")), 0, 0, 1);
								if (iLocal_2679 != 0)
								{
									if (does_blip_exist(iLocal_2677))
									{
										remove_blip(&iLocal_2677);
									}
									iLocal_2677 = func_13(iLocal_2679);
									func_12(1);
									func_11(0, 157);
								}
								Local_2917[iParam0 /*10*/].f_6 = 0;
							}
							break;
					}
					if (func_8())
					{
						func_11(0, 157);
						Local_2917[iParam0 /*10*/].f_3 = 1;
						func_32(17, 0);
					}
					break;
				
				case 33:
					switch (Local_2917[iParam0 /*10*/].f_6)
					{
						case 0:
							request_waypoint_recording("arm2_30");
							Local_2917[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if (get_is_waypoint_recording_loaded("arm2_30"))
							{
								if (func_87(29))
								{
									use_waypoint_recording_as_assisted_movement_route("arm2_30", 1, 1f, 0.5f);
									assisted_movement_set_route_properties("arm2_30", 2);
									Local_2917[iParam0 /*10*/].f_6++;
								}
							}
							break;
						
						case 2:
							if (!func_87(29))
							{
								use_waypoint_recording_as_assisted_movement_route("arm2_30", 0, 1f, 0.5f);
								Local_2917[iParam0 /*10*/].f_6 = 1;
							}
							break;
					}
					break;
				
				case 34:
					if (!is_ped_injured(player_ped_id()))
					{
						if (get_interior_from_entity(player_ped_id()) == 0)
						{
							if (func_67(player_ped_id(), 2451.08f, 4961.463f, 44.4392f, 1) < 20f)
							{
								set_radar_as_interior_this_frame(0, 0f, 0f, 0, 0);
							}
						}
					}
					break;
				
				case 35:
					func_15("CHN2_JERRY_CAN", 0, "CHN2_EXPLODE");
					Local_2917[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 36:
					func_15("CHN2_EXIT_HOUSE", 0, "CHN2_EXPLODE");
					play_sound_from_coord(iLocal_2668, "FarmhouseFire_Ignite", vLocal_2669, "CHINESE2_SOUNDS", 0, 0, 0);
					Local_2917[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 37:
					start_audio_scene("CHI_2_POUR_GAS");
					Local_2917[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 38:
					switch (Local_2917[iParam0 /*10*/].f_6)
					{
						case 0:
							SCRIPT::REQUEST_SCRIPT_audio_bank("FARMHOUSE_FIRE", false);
							SCRIPT::REQUEST_SCRIPT_audio_bank("FARMHOUSE_FIRE_BG", false);
							break;
					}
					break;
				
				case 39:
					switch (Local_2917[iParam0 /*10*/].f_6)
					{
						case 0:
							Local_2917[iParam0 /*10*/].f_7 = func_18(4);
							Local_2917[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if (func_67(Local_755[Local_2917[iParam0 /*10*/].f_7 /*33*/], 2454.895f, 4950.895f, 44.1488f, 1) > 100f && func_4(Local_755[Local_2917[iParam0 /*10*/].f_7 /*33*/], player_ped_id(), 1) > 100f)
							{
								uVar16 = func_18(4);
								func_128(&(Local_755[uVar16 /*33*/].f_25));
								if (!is_ped_injured(Local_755[uVar16 /*33*/]))
								{
									set_ped_keep_task(Local_755[uVar16 /*33*/], true);
									set_ped_as_no_longer_needed(&(Local_755[uVar16 /*33*/]));
								}
								Local_755[uVar16 /*33*/] = 0;
								uVar16 = func_18(5);
								func_128(&(Local_755[uVar16 /*33*/].f_25));
								if (!is_ped_injured(Local_755[uVar16 /*33*/]))
								{
									set_ped_keep_task(Local_755[uVar16 /*33*/], true);
									set_ped_as_no_longer_needed(&(Local_755[uVar16 /*33*/]));
								}
								Local_755[uVar16 /*33*/] = 0;
								uVar16 = func_18(7);
								if (!is_ped_injured(Local_755[uVar16 /*33*/]))
								{
									set_ped_keep_task(Local_755[uVar16 /*33*/], true);
									set_ped_as_no_longer_needed(&(Local_755[uVar16 /*33*/]));
								}
								func_128(&(Local_755[uVar16 /*33*/].f_25));
								Local_755[uVar16 /*33*/] = 0;
								if (is_vehicle_driveable(iLocal_2507, 0))
								{
									set_vehicle_as_no_longer_needed(&iLocal_2507);
								}
								Local_2917[iParam0 /*10*/].f_3 = 1;
							}
							break;
					}
					break;
				
				case 40:
					if (func_101(24, joaat("a_m_m_hillbilly_01"), 2433.123f, 4960.47f, 45.8218f, 301f, joaat("weapon_smg"), 1, 1))
					{
						set_ped_accuracy(Local_755[24 /*33*/], 100);
						if (!is_ped_injured(Local_755[15 /*33*/]))
						{
							set_ped_accuracy(Local_755[15 /*33*/], 100);
						}
						if (!is_ped_injured(Local_755[16 /*33*/]))
						{
							set_ped_accuracy(Local_755[16 /*33*/], 100);
						}
						if (!is_ped_injured(Local_755[17 /*33*/]))
						{
							set_ped_accuracy(Local_755[17 /*33*/], 100);
						}
						task_combat_ped(Local_755[24 /*33*/], player_ped_id(), 0, 16);
						set_ped_target_loss_response(Local_755[24 /*33*/], 1);
						set_entity_health(Local_755[24 /*33*/], 200);
						Local_2917[iParam0 /*10*/].f_3 = 1;
					}
					break;
			}
			if (Local_2917[iParam0 /*10*/].f_6 == -1)
			{
				Local_2917[iParam0 /*10*/].f_3 = 1;
				Local_2917[iParam0 /*10*/].f_6 = 0;
				Local_2917[iParam0 /*10*/].f_1 = 0;
			}
		}
	}
}

void func_161()
{
	int iVar0;
	int iVar1;
	Vector3 vVar2;
	
	iVar0 = 0;
	while (iVar0 < Local_444)
	{
		if (!func_162(Local_444[iVar0 /*5*/], 0f, 0f, 0f, 0))
		{
			stop_fire_in_range(Local_444[iVar0 /*5*/], 4f);
			clear_area(Local_444[iVar0 /*5*/], 2f, 1, 0, 0, false);
			iVar1 = 0;
			while (iVar1 < Local_755)
			{
				if (does_entity_exist(Local_755[iVar1 /*33*/]))
				{
					vVar2 = {get_entity_coords(Local_755[iVar1 /*33*/], 0)};
					if (vdist2(vVar2, Local_444[iVar0 /*5*/]) < 2f && vVar2.z > 43.9f)
					{
						delete_ped(&(Local_755[iVar1 /*33*/]));
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

int func_162(Vector3 vParam0, Vector3 vParam1, int iParam2)
{
	if (iParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

void func_163(int iParam0)
{
	int iVar0;
	
	iLocal_265 = true;
	iLocal_269 = 0;
	iLocal_267 = -1;
	iLocal_443 = 0;
	iLocal_443 = 0;
	iLocal_437 = 0;
	if (iParam0 == 0)
	{
		iLocal_262 = 1;
	}
	iVar0 = 0;
	while (iVar0 < Local_444)
	{
		remove_decals_in_range(Local_444[iVar0 /*5*/], 1f);
		if (!does_blip_exist(Local_444[iVar0 /*5*/].f_3))
		{
			if (!func_162(Local_444[iVar0 /*5*/], 0f, 0f, 0f, 0))
			{
				iLocal_269++;
				Local_444[iVar0 /*5*/].f_3 = func_5(Local_444[iVar0 /*5*/], 0);
				_0x54318C915D27E4CE(Local_444[iVar0 /*5*/].f_3, 1);
				set_blip_scale(Local_444[iVar0 /*5*/].f_3, 0.4f);
				_0x75A16C3DA34F1245(Local_444[iVar0 /*5*/].f_3, false);
				if (!iParam0)
				{
					set_blip_alpha(Local_444[iVar0 /*5*/].f_3, 0);
				}
				set_blip_colour(Local_444[iVar0 /*5*/].f_3, 5);
			}
		}
		else
		{
			Local_444[iVar0 /*5*/] = {get_blip_coords(Local_444[iVar0 /*5*/].f_3)};
			if (!iParam0)
			{
				set_blip_alpha(Local_444[iVar0 /*5*/].f_3, 0);
			}
			else
			{
				set_blip_alpha(Local_444[iVar0 /*5*/].f_3, 255);
			}
			iLocal_269++;
		}
		Local_444[iVar0 /*5*/].f_4 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_281)
	{
		Local_281[iVar0 /*5*/].f_1 = {0f, 0f, 0f};
		Local_281[iVar0 /*5*/].f_4 = 0;
		iVar0++;
	}
}

int func_164(int iParam0)
{
	int iVar0;
	
	if (!does_pickup_exist(uParam0))
	{
		return 0;
	}
	iVar0 = add_blip_for_pickup(iParam0);
	set_blip_scale(iVar0, func_6(network_is_game_in_progress(), 0.7f, 0.7f));
	return iVar0;
}

void func_165(int iParam0)
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

void func_166(int iParam0)
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

auto func_167()
{
	auto uVar0;
	
	return uVar0;
}

bool func_168()
{
	if (((((get_control_value(2, 30) != 127 || get_control_value(2, 31) != 127) || is_control_pressed(2, 24)) || is_control_pressed(2, 25)) || get_control_value(2, 2) != 127) || get_control_value(2, 1) != 127)
	{
		return true;
	}
	return false;
}

int func_169(int iParam0, int iParam1)
{
	if (Local_2917[iParam0 /*10*/] == iParam1)
	{
		return Local_2917[iParam0 /*10*/].f_6;
	}
	return -1;
}

void func_170(int iParam0, int iParam1)
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
	
	iVar0 = iParam1 - iParam0;
	if (Local_3120[0 /*8*/] != iParam0 && Local_3120[iVar0 /*8*/] != iParam1)
	{
		iVar2 = 0;
		iVar1 = 0;
		while (iVar1 < Local_3120)
		{
			if (iVar1 <= iVar0)
			{
				Local_3120[iVar1 /*8*/] = iParam0 + iVar2;
				Local_3120[iVar1 /*8*/].f_1 = 1;
				Local_3120[iVar1 /*8*/].f_2 = 0;
				Local_3120[iVar1 /*8*/].f_3 = 0;
				iVar2++;
			}
			else
			{
				Local_3120[iVar1 /*8*/].f_1 = 0;
			}
			iVar1++;
		}
	}
	iVar3 = 0;
	while (iVar3 < Local_3120)
	{
		switch (Local_3120[iVar3 /*8*/])
		{
			case 2:
				if (!Local_3120[iVar3 /*8*/].f_2)
				{
					if (Local_3120[iVar3 /*8*/].f_4 == 0)
					{
						if (func_84("FRMCHSE_1", 0, 0))
						{
							Local_3120[iVar3 /*8*/].f_4 = 1;
						}
					}
					else if (!func_84("FRMCHSE_1", 0, 0))
					{
						Local_3120[iVar3 /*8*/].f_2 = 1;
					}
				}
				break;
			
			case 3:
				Local_3120[iVar3 /*8*/].f_2 = 0;
				if (is_ped_in_any_vehicle(player_ped_id(), 0))
				{
					Local_3120[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 6:
				if (!Local_3120[iVar3 /*8*/].f_2)
				{
					if (func_156(7))
					{
						if (has_bullet_impacted_in_area(2493.155f, 4970.315f, 43.88038f, 3.25f, 1, 1) || is_bullet_in_area(2493.155f, 4970.315f, 43.88038f, 3.25f, 1))
						{
							Local_3120[iVar3 /*8*/].f_2 = 1;
						}
					}
					else
					{
						Local_3120[iVar3 /*8*/].f_1 = 0;
					}
				}
				break;
			
			case 7:
				if (!Local_3120[iVar3 /*8*/].f_2)
				{
					switch (Local_3120[iVar3 /*8*/].f_4)
					{
						case 0:
							Local_3120[iVar3 /*8*/].f_5 = func_18(8);
							Local_3120[iVar3 /*8*/].f_6 = func_18(9);
							Local_3120[iVar3 /*8*/].f_4++;
							break;
						
						case 1:
							if (Local_3120[iVar3 /*8*/].f_5 != -1 && Local_3120[iVar3 /*8*/].f_6 != -1)
							{
								if (does_entity_exist(Local_755[Local_3120[iVar3 /*8*/].f_5 /*33*/]) && does_entity_exist(Local_755[Local_3120[iVar3 /*8*/].f_6 /*33*/]))
								{
									if (is_ped_injured(Local_755[Local_3120[iVar3 /*8*/].f_5 /*33*/]) || is_ped_injured(Local_755[Local_3120[iVar3 /*8*/].f_6 /*33*/]))
									{
										Local_3120[iVar3 /*8*/].f_2 = 1;
									}
								}
							}
							break;
						}
				}
				break;
			
			case 9:
				if (iLocal_53)
				{
					Local_3120[iVar3 /*8*/].f_2 = 1;
					Local_3120[iVar3 /*8*/].f_1 = 0;
				}
				break;
			
			case 11:
				Local_3120[iVar3 /*8*/].f_2 = 0;
				if (get_room_key_from_entity(player_ped_id()) == get_hash_key("V_8_BasementRm"))
				{
					Local_3120[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 12:
				Local_3120[iVar3 /*8*/].f_2 = 0;
				if (get_interior_from_entity(player_ped_id()) != 0 && is_entity_in_angled_area(player_ped_id(), 2421.331f, 4954.833f, 25.32829f, 2466.796f, 4996.822f, 66.07018f, 37.1875f, 0, true, 0))
				{
					Local_3120[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 13:
				Local_3120[iVar3 /*8*/].f_2 = 0;
				if (func_87(12))
				{
					if (!is_entity_in_angled_area(player_ped_id(), 2457.885f, 4981.169f, 50.00518f, 2441.58f, 4965.088f, 56.24006f, 34.3125f, 0, true, 0))
					{
						Local_3120[iVar3 /*8*/].f_2 = 1;
					}
				}
				break;
			
			case 14:
				if (!Local_3120[iVar3 /*8*/].f_2)
				{
					if (func_67(player_ped_id(), 2451.517f, 4973.122f, 44.2646f, 1) < 50f)
					{
						Local_3120[iVar3 /*8*/].f_2 = 1;
					}
				}
				break;
			
			case 15:
				switch (Local_3120[iVar3 /*8*/].f_4)
				{
					case 0:
						Local_3120[iVar3 /*8*/].f_5 = func_18(17);
						if (Local_3120[iVar3 /*8*/].f_5 != -1)
						{
							Local_3120[iVar3 /*8*/].f_4++;
						}
						break;
					
					case 1:
						if (does_entity_exist(Local_755[Local_3120[iVar3 /*8*/].f_5 /*33*/]))
						{
							if (is_ped_injured(Local_755[Local_3120[iVar3 /*8*/].f_5 /*33*/]))
							{
								if (func_67(Local_755[Local_3120[iVar3 /*8*/].f_5 /*33*/], 2427.851f, 4964.972f, 43.1704f, 1) < 3f)
								{
									Local_3120[iVar3 /*8*/].f_2 = 1;
									Local_3120[iVar3 /*8*/].f_4++;
								}
								else
								{
									Local_3120[iVar3 /*8*/].f_1 = 0;
								}
							}
						}
						break;
				}
				break;
			
			case 16:
				if (!Local_3120[iVar3 /*8*/].f_2)
				{
					switch (Local_3120[iVar3 /*8*/].f_4)
					{
						case 0:
							if (!func_30(5))
							{
								Local_3120[iVar3 /*8*/].f_4++;
							}
							break;
						
						case 1:
							iVar5 = false;
							iVar6 = false;
							iVar4 = false;
							while (iVar4 < Local_755)
							{
								if (!is_ped_injured(Local_755[iVar4 /*33*/]))
								{
									iVar5 = true;
									if (Local_755[iVar4 /*33*/].f_1 == 1)
									{
										iVar6 = true;
										iVar4 = Local_755;
									}
								}
								iVar4++;
							}
							if (!iVar5)
							{
								Local_3120[iVar3 /*8*/].f_2 = 1;
							}
							else
							{
								Local_3120[iVar3 /*8*/].f_2 = 0;
							}
							if (iVar6)
							{
								func_91(10, 0);
							}
							else
							{
								func_91(10, 1);
							}
							break;
						}
				}
				break;
			
			case 23:
				if (!Local_3120[iVar3 /*8*/].f_2)
				{
					if (func_87(9))
					{
						Local_3120[iVar3 /*8*/].f_2 = 1;
						iVar8 = 0;
						iVar7 = false;
						while (iVar7 < Local_755)
						{
							if (Local_755[iVar7 /*33*/].f_1 == 1)
							{
								if (!is_ped_injured(Local_755[iVar7 /*33*/]))
								{
									iVar8++;
									if (iVar8 > 1)
									{
										Local_3120[iVar3 /*8*/].f_2 = 0;
										iVar7 = Local_755;
									}
								}
							}
							iVar7++;
						}
					}
				}
				break;
			
			case 24:
				switch (Local_3120[iVar3 /*8*/].f_4)
				{
					case 0:
						if (func_67(player_ped_id(), 2446.674f, 4977.788f, 57.4583f, 1) < 250f)
						{
							Local_3120[iVar3 /*8*/].f_4++;
						}
						break;
					
					case 1:
						if (is_ped_in_any_vehicle(player_ped_id(), 0))
						{
							iVar9 = get_vehicle_ped_is_in(player_ped_id(), 0);
							if (is_this_model_a_heli(get_entity_model(iVar9)) || is_this_model_a_plane(get_entity_model(iVar9)))
							{
								if (func_67(player_ped_id(), 2446.674f, 4977.788f, 57.4583f, 0) > 700f)
								{
									Local_3120[iVar3 /*8*/].f_2 = 1;
								}
							}
							else
							{
								iVar10 = true;
							}
						}
						else
						{
							iVar10 = true;
						}
						if (iVar10)
						{
							if (func_67(player_ped_id(), 2446.674f, 4977.788f, 57.4583f, 1) > 250f)
							{
								Local_3120[iVar3 /*8*/].f_2 = 1;
							}
						}
						break;
				}
				break;
			
			case 26:
				if (func_67(player_ped_id(), 2441.065f, 4968.819f, 45.83075f, 1) < 2.75f)
				{
					if (!is_ped_injured(Local_755[15 /*33*/]))
					{
						if (func_67(Local_755[15 /*33*/], 2439.386f, 4962.049f, 45.9047f, 1) < 3f)
						{
							Local_3120[iVar3 /*8*/].f_2 = 1;
						}
					}
					if (!is_ped_injured(Local_755[16 /*33*/]))
					{
						if (func_67(Local_755[16 /*33*/], 2439.386f, 4962.049f, 45.9047f, 1) < 3f)
						{
							Local_3120[iVar3 /*8*/].f_2 = 1;
						}
					}
					if (!is_ped_injured(Local_755[17 /*33*/]))
					{
						if (func_67(Local_755[17 /*33*/], 2439.386f, 4962.049f, 45.9047f, 1) < 3f)
						{
							Local_3120[iVar3 /*8*/].f_2 = 1;
						}
					}
					Local_3120[iVar3 /*8*/].f_1 = 0;
				}
				break;
			
			case 27:
				switch (Local_3120[iVar3 /*8*/].f_4)
				{
					case 0:
						if (!is_ped_injured(Local_755[4 /*33*/]) && is_ped_sitting_in_any_vehicle(Local_755[4 /*33*/]))
						{
							Local_3120[iVar3 /*8*/].f_4++;
						}
						if (!is_ped_injured(Local_755[5 /*33*/]) && is_ped_sitting_in_any_vehicle(Local_755[5 /*33*/]))
						{
							Local_3120[iVar3 /*8*/].f_4++;
						}
						if (!is_ped_injured(Local_755[7 /*33*/]) && is_ped_sitting_in_any_vehicle(Local_755[7 /*33*/]))
						{
							Local_3120[iVar3 /*8*/].f_4++;
						}
						Local_3120[iVar3 /*8*/].f_5 = get_game_timer() + 8000;
						break;
					
					case 1:
						if (is_vehicle_driveable(iLocal_2507, 0))
						{
							if (func_90(get_entity_coords(iLocal_2507, 1), 5f, 150f))
							{
								Local_3120[iVar3 /*8*/].f_6 += floor(timestep() * 1000f);
							}
						}
						if (Local_3120[iVar3 /*8*/].f_6 > 1500)
						{
							Local_3120[iVar3 /*8*/].f_2 = 1;
						}
						if (get_game_timer() > Local_3120[iVar3 /*8*/].f_5)
						{
							Local_3120[iVar3 /*8*/].f_4++;
						}
						break;
				}
				break;
			
			case 30:
				switch (Local_3120[iVar3 /*8*/].f_4)
				{
					case 0:
						if (does_pickup_exist(iLocal_2675))
						{
							if (does_pickup_object_exist(iLocal_2675))
							{
								Local_3120[iVar3 /*8*/].f_4++;
							}
						}
						break;
					
					case 1:
						if (does_pickup_exist(iLocal_2675))
						{
							if (!does_pickup_object_exist(iLocal_2675))
							{
								if (is_explosion_in_sphere(-1, 2435.252f, 4966.748f, 41.3476f, 4f))
								{
									Local_3120[iVar3 /*8*/].f_2 = 1;
								}
								Local_3120[iVar3 /*8*/].f_4++;
							}
						}
						break;
				}
				break;
			
			case 8:
				if (iLocal_57 && !iLocal_53)
				{
					Local_3120[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 17:
				if (is_entity_in_angled_area(player_ped_id(), 2442.819f, 4970.283f, 45.2481f, 2439.625f, 4966.862f, 48.14596f, 3.4375f, 0, true, 0))
				{
					Local_3120[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 18:
				if (is_entity_in_angled_area(player_ped_id(), 2434.671f, 4959.104f, 44.85109f, 2440.5f, 4965.189f, 48.1231f, 3.625f, 0, true, 0))
				{
					Local_3120[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 19:
				if (is_entity_in_angled_area(player_ped_id(), 2432.467f, 4959.473f, 44.94133f, 2430.797f, 4961.173f, 48.30901f, 1.5625f, 0, true, 0))
				{
					Local_3120[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 21:
				if (iLocal_56)
				{
					Local_3120[iVar3 /*8*/].f_2 = 1;
					Local_3120[iVar3 /*8*/].f_1 = 0;
				}
				break;
			
			case 32:
				Local_3120[iVar3 /*8*/].f_2 = 0;
				if (is_entity_in_angled_area(player_ped_id(), 2447.671f, 4951.438f, 43.25576f, 2454.664f, 4957.856f, 47.89117f, 6.8125f, 0, true, 0))
				{
					Local_3120[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 33:
				switch (Local_3120[iVar3 /*8*/].f_4)
				{
					case 0:
						if (has_ped_got_weapon(player_ped_id(), joaat("weapon_petrolcan"), 0))
						{
							Local_3120[iVar3 /*8*/].f_4++;
						}
						break;
					
					case 1:
						if (!has_ped_got_weapon(player_ped_id(), joaat("weapon_petrolcan"), 0))
						{
							Local_3120[iVar3 /*8*/].f_2 = 1;
						}
						break;
				}
				break;
			
			case 29:
				Local_3120[iVar3 /*8*/].f_2 = 0;
				switch (Local_3120[iVar3 /*8*/].f_5)
				{
					case 0:
						if (has_ped_got_weapon(player_ped_id(), joaat("weapon_petrolcan"), 0))
						{
							Local_3120[iVar3 /*8*/].f_5 = 10;
						}
						else
						{
							Local_3120[iVar3 /*8*/].f_5 = 20;
						}
						break;
				}
				if (has_ped_got_weapon(player_ped_id(), joaat("weapon_petrolcan"), 0))
				{
					if (Local_3120[iVar3 /*8*/].f_5 == 20)
					{
					}
					Local_3120[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 34:
				if (!Local_3120[iVar3 /*8*/].f_2 == 1)
				{
					if (func_8())
					{
						func_11(0, 157);
						Local_3120[iVar3 /*8*/].f_2 = 1;
					}
				}
				break;
			
			case 35:
				if (Local_444[0 /*5*/].f_4 == 1)
				{
					Local_3120[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 36:
				Local_3120[iVar3 /*8*/].f_2 = 0;
				iVar11 = joaat("weapon_unarmed");
				if (get_current_ped_weapon(player_ped_id(), &iVar11, 1))
				{
					if (iVar11 == joaat("weapon_petrolcan"))
					{
						if (is_control_pressed(0, 24))
						{
							Local_3120[iVar3 /*8*/].f_2 = 1;
						}
					}
				}
				break;
			
			case 44:
				if (is_explosion_in_angled_area(-1, 2435.776f, 4963.067f, 39.34265f, 2428.118f, 4971.287f, 43.67327f, 11.875f))
				{
					if (!is_explosion_in_angled_area(24, 2435.776f, 4963.067f, 39.34265f, 2428.118f, 4971.287f, 43.67327f, 11.875f) && !is_explosion_in_angled_area(22, 2435.776f, 4963.067f, 39.34265f, 2428.118f, 4971.287f, 43.67327f, 11.875f))
					{
						Local_3120[iVar3 /*8*/].f_2 = 1;
					}
				}
				break;
			
			case 41:
				switch (Local_3120[iVar3 /*8*/].f_4)
				{
					case 0:
						if (func_174())
						{
							iVar12 = func_173();
							if (iVar12 <= 17)
							{
								func_91(37, 1);
							}
							else
							{
								Local_3120[iVar3 /*8*/].f_2 = 1;
							}
							Local_3120[iVar3 /*8*/].f_4++;
						}
						break;
				}
				break;
			
			case 38:
				if (!Local_3120[iVar3 /*8*/].f_2)
				{
					if (func_172(17))
					{
						Local_3120[iVar3 /*8*/].f_2 = 1;
					}
				}
				break;
			
			case 40:
				Local_3120[iVar3 /*8*/].f_2 = 0;
				if (get_interior_from_entity(player_ped_id()) != 0)
				{
					Local_3120[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 42:
				if (func_67(player_ped_id(), 2439.52f, 4969.67f, 52.65f, 1) > 42.5f)
				{
					Local_3120[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 43:
				if (func_67(player_ped_id(), 2439.52f, 4969.67f, 52.65f, 1) > 60f)
				{
					Local_3120[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 39:
				if (func_171())
				{
					if (!func_174())
					{
						Local_3120[iVar3 /*8*/].f_2 = 1;
					}
				}
				break;
			
			case 47:
				switch (Local_3120[iVar3 /*8*/].f_4)
				{
					case 0:
						Local_3120[iVar3 /*8*/].f_5 = get_game_timer() + 30000;
						Local_3120[iVar3 /*8*/].f_4++;
						break;
					
					case 1:
						if (get_game_timer() > Local_3120[iVar3 /*8*/].f_5)
						{
							Local_3120[iVar3 /*8*/].f_2 = 1;
							Local_3120[iVar3 /*8*/].f_4++;
						}
						break;
				}
				break;
			
			case 48:
				Local_3120[iVar3 /*8*/].f_2 = 0;
				if (!Local_3120[iVar3 /*8*/].f_2)
				{
					if (func_67(player_ped_id(), 2448.25f, 4974.92f, 55.11f, 1) > 300f)
					{
						Local_3120[iVar3 /*8*/].f_2 = 1;
					}
				}
				break;
			
			case 51:
				if (func_147(1, 49))
				{
					Local_3120[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 49:
				Local_3120[iVar3 /*8*/].f_2 = 0;
				if (!Local_3120[iVar3 /*8*/].f_2)
				{
					if (func_67(player_ped_id(), 2448.25f, 4974.92f, 55.11f, 1) > 500f)
					{
						Local_3120[iVar3 /*8*/].f_2 = 1;
					}
				}
				break;
			
			case 50:
				Local_3120[iVar3 /*8*/].f_2 = 0;
				if (get_player_wanted_level(player_id()) > 0)
				{
					Local_3120[iVar3 /*8*/].f_2 = 1;
				}
				break;
		}
		iVar3++;
	}
}

bool func_171()
{
	if (iLocal_437 == 1)
	{
		return true;
	}
	return false;
}

bool func_172(int iParam0)
{
	if (get_number_of_fires_in_range(Local_444[iParam0 /*5*/], 0.6f) > 0)
	{
		return true;
	}
	return false;
}

int func_173()
{
	return iLocal_280;
}

bool func_174()
{
	int iVar0;
	
	iVar0 = Local_444 - 1;
	while (iVar0 >= 0)
	{
		if (Local_444[iVar0 /*5*/].f_4)
		{
			if (get_number_of_fires_in_range(Local_444[iVar0 /*5*/], 0.6f) > 0)
			{
				vLocal_277 = {Local_444[iVar0 /*5*/]};
				iLocal_280 = iVar0;
				return true;
			}
		}
		else
		{
			return false;
		}
		iVar0 += -1;
	}
	return false;
}

void func_175()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	_0x27CFB1B1E078CB2D();
	if ((func_195() && iLocal_2512 > 0) && get_game_timer() > iLocal_2641)
	{
		while (!is_screen_faded_out())
		{
			do_screen_fade_out(1000);
			func_28(28, 1);
		}
		iLocal_3690 = 0;
		while (!func_194())
		{
			func_28(32322, 1);
		}
		set_entity_coords(player_ped_id(), 2474.97f, 4946.047f, 44.0297f, 1, false, 0, 1);
		set_entity_heading(player_ped_id(), 230.6937f);
		set_ped_stealth_movement(player_ped_id(), 0, 0);
		set_ped_using_action_mode(player_ped_id(), false, -1, 0);
		WEAPON::SET_CURRENT_PED_WEAPON(player_ped_id(), joaat("weapon_unarmed"), true);
		_0x2208438012482A1A(player_ped_id(), 0, 0);
		func_186(0, 1, 1, 0);
		destroy_all_cams(0);
		render_script_cams(false, false, 3000, 1, 0, 0);
		set_player_control(player_id(), true, 0);
		set_gameplay_cam_relative_heading(0f);
		set_gameplay_cam_relative_pitch(0f, 1f);
		clear_prints();
		_0xDDC635D5B3262C56("SLOW_MO_METH_HOUSE_RAYFIRE");
		uLocal_2672 = _0xB48FCED898292E52(2457.15f, 4968.79f, 48.677f, 45f, "DES_FarmHs");
		func_31(12, 1);
		iLocal_2640 = 0;
		iLocal_2645 = iLocal_2645;
		iLocal_2645 = 99;
		iLocal_2512 = 99;
		iLocal_2454 = 3;
		fLocal_2453 = 10000f;
		create_model_hide(2457.15f, 4968.79f, 48.677f, 100f, 965837842, 1);
		create_model_hide(2457.15f, 4968.79f, 48.677f, 100f, 247384786, 1);
		create_model_hide(2457.15f, 4968.79f, 48.677f, 100f, -247908770, 0);
		stop_stream();
		_0x81CBAE94390F9F89();
		iLocal_2647 = true;
	}
	hide_hud_and_radar_this_frame();
	switch (iLocal_2512)
	{
		case 0:
			func_194();
			iLocal_2647 = false;
			iVar0 = 49;
			while (iVar0 <= 55)
			{
				Local_444[iVar0 /*5*/] = {Local_444[iVar0 /*5*/] + Vector(0.6f, 0f, 0f)};
				iVar0++;
			}
			if (is_audio_scene_active("CHI_2_POUR_GAS"))
			{
				stop_audio_scene("CHI_2_POUR_GAS");
			}
			if (is_audio_scene_active("CHI_2_SHOOT_GAS"))
			{
				stop_audio_scene("CHI_2_SHOOT_GAS");
			}
			start_audio_scene("CHI_2_GAS_TRAIL_FIRE");
			iLocal_2641 = get_game_timer() + 1000;
			clear_area(2570.53f, 4982.057f, 50.6819f, 100f, 1, 0, 0, false);
			set_player_control(player_id(), false, 0);
			WEAPON::SET_CURRENT_PED_WEAPON(player_ped_id(), joaat("weapon_unarmed"), true);
			func_81(0);
			iLocal_3491 = 0;
			func_81(1);
			clear_prints();
			func_185(2467.775f, 4954.415f, 42.87803f, 2477.089f, 4945.079f, 46.16654f, 4.0625f, 2486.854f, 4939.086f, 43.2578f, 230f, 1, 1, 1, 0, 0);
			if (is_ped_in_any_vehicle(player_ped_id(), 0))
			{
				set_entity_coords(player_ped_id(), 2455.941f, 4952.801f, 44.112f, 1, false, 0, 1);
			}
			set_time_scale(1f);
			remove_anim_dict("misschinese2_barrelRoll");
			remove_anim_set("move_m@gangster@var_e");
			remove_anim_set("move_m@gangster@var_f");
			remove_anim_set("move_m@gangster@generic");
			remove_anim_dict("misschinese2_bank5");
			remove_anim_dict("misschinese2_bank1");
			remove_anim_dict("reaction@male_stand@big_variations@b");
			remove_anim_dict("reaction@male_stand@big_intro@left");
			remove_anim_dict("reaction@male_stand@big_intro@right");
			remove_anim_dict("reaction@male_stand@big_intro@backward");
			set_model_as_no_longer_needed(joaat("a_m_m_hillbilly_02"));
			set_model_as_no_longer_needed(joaat("a_m_y_methhead_01"));
			set_model_as_no_longer_needed(joaat("prop_cs_fertilizer"));
			set_model_as_no_longer_needed(joaat("burrito"));
			set_model_as_no_longer_needed(joaat("prop_cs_beer_bot_01"));
			set_ped_stealth_movement(player_ped_id(), 0, 0);
			iVar1 = 0;
			while (iVar1 < Local_755)
			{
				if (does_entity_exist(Local_755[iVar1 /*33*/]))
				{
					delete_ped(&(Local_755[iVar1 /*33*/]));
				}
				if (does_entity_exist(Local_755[iVar1 /*33*/].f_20))
				{
					delete_object(&(Local_755[iVar1 /*33*/].f_20));
				}
				iVar1++;
			}
			iLocal_2512++;
			break;
		
		case 1:
			if (is_screen_faded_out() && !is_screen_fading_in())
			{
				do_screen_fade_in(1000);
			}
			iLocal_2512++;
			break;
	}
	if (iLocal_2342)
	{
		iLocal_2342 = 0;
		iVar2 = 0;
		while (iVar2 < Local_2380)
		{
			iVar2++;
		}
		iVar2 = 0;
		while (iVar2 < Local_2343)
		{
			iVar2++;
		}
	}
	iVar2 = 0;
	while (iVar2 < Local_2380)
	{
		if (iLocal_2455[iVar2])
		{
			iLocal_2455[iVar2] = 0;
			Local_2380[iVar2 /*18*/] = {get_cam_coord(get_rendering_cam())};
			Local_2380[iVar2 /*18*/].f_3 = {get_cam_rot(get_rendering_cam(), 2)};
			Local_2380[iVar2 /*18*/].f_14 = get_cam_fov(get_rendering_cam());
		}
		if (iLocal_2460[iVar2])
		{
			iLocal_2460[iVar2] = 0;
			Local_2380[iVar2 /*18*/].f_6 = {get_cam_coord(get_rendering_cam())};
			Local_2380[iVar2 /*18*/].f_9 = {get_cam_rot(get_rendering_cam(), 2)};
			Local_2380[iVar2 /*18*/].f_15 = get_cam_fov(get_rendering_cam());
		}
		iVar2++;
	}
	if (iLocal_2340)
	{
		iLocal_2340 = 0;
		iLocal_2341 = false;
		iLocal_2673 = 0;
		clear_area(2431.097f, 4967.043f, 41.3476f, 20f, 1, 0, 0, false);
		func_184();
	}
	if (!iLocal_2341)
	{
		if (is_srl_loaded())
		{
			_0xBEB2D9A1D9A8F55A(5, 5, 5, 5);
			begin_srl();
			iLocal_2454 = -1;
			destroy_all_cams(0);
			func_186(1, 1, 1, 0);
			request_anim_dict("misschinese2_crystalmaze");
			iLocal_2341 = true;
			Local_2343[0 /*6*/] = 0;
			Local_2343[1 /*6*/] = 0;
			Local_2343[2 /*6*/] = 0;
			Local_2343[3 /*6*/] = 0;
			Local_2343[0 /*6*/].f_4 = 0;
			Local_2343[0 /*6*/].f_5 = 0;
			Local_2343[1 /*6*/].f_4 = 0;
			Local_2343[1 /*6*/].f_5 = 0;
			Local_2343[2 /*6*/].f_4 = 0;
			Local_2343[2 /*6*/].f_5 = 0;
			Local_2343[3 /*6*/].f_4 = 0;
			Local_2343[3 /*6*/].f_5 = 0;
			func_32(12, 0);
			play_stream_frontend();
			_0x48621C9FCA3EBD28(4);
			switch (iLocal_2648)
			{
				case 3:
					settimera(0);
					break;
				
				case 2:
					Local_2343[0 /*6*/] = 1;
					Local_2343[1 /*6*/] = 1;
					settimera(10900);
					iLocal_2454 = 2;
					fLocal_2453 = 10000f;
					break;
				
				case 1:
					Local_2343[0 /*6*/] = 1;
					settimera(6400);
					iLocal_2454 = 1;
					fLocal_2453 = 10000f;
					break;
			}
			iLocal_2505 = 0;
		}
	}
	if (iLocal_2341)
	{
		set_srl_time(to_float(timera()));
	}
	if (iLocal_2341)
	{
		fLocal_2453 += timestep();
		if (iLocal_2454 == -1 || ((iLocal_2454 != -1 && iLocal_2454 < 4) && fLocal_2453 > Local_2380[iLocal_2454 /*18*/].f_13 / 1000f))
		{
			iLocal_2454++;
			if (iLocal_2454 == 3)
			{
				if (has_anim_dict_loaded("misschinese2_crystalmaze"))
				{
					iLocal_2637 = create_camera(964613260, 1);
					iLocal_2638 = create_synchronized_scene(2452.914f, 4962.096f, 45.585f, 0f, 0f, 45f, 2);
					play_synchronized_cam_anim(iLocal_2637, iLocal_2638, "trevor_barn_walk_cam", "misschinese2_crystalmaze");
					if (!is_ped_injured(player_ped_id()))
					{
						task_synchronized_scene(player_ped_id(), iLocal_2638, "misschinese2_crystalmaze", "trevor_barn_walk", 1000f, -8f, 0, 0, 1000f, 0);
					}
					render_script_cams(true, false, 3000, 1, 0, 0);
					func_184();
					set_game_pauses_for_streaming(1);
					fLocal_2453 = 0f;
				}
			}
			else if (iLocal_2454 < 4)
			{
				destroy_all_cams(0);
				iLocal_2637 = create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", Local_2380[iLocal_2454 /*18*/], Local_2380[iLocal_2454 /*18*/].f_3, Local_2380[iLocal_2454 /*18*/].f_14, 1, 2);
				set_cam_params(iLocal_2637, Local_2380[iLocal_2454 /*18*/].f_6, Local_2380[iLocal_2454 /*18*/].f_9, Local_2380[iLocal_2454 /*18*/].f_15, floor(Local_2380[iLocal_2454 /*18*/].f_12), Local_2380[iLocal_2454 /*18*/].f_16, 1, 2);
				render_script_cams(true, false, 3000, 1, 0, 0);
				if (iLocal_2454 < 2)
				{
					func_183(Local_2380[iLocal_2454 /*18*/].f_17, 1, 1);
				}
				else
				{
					func_183(Local_2380[iLocal_2454 /*18*/].f_17, 1, 0);
				}
				fLocal_2453 = 0f;
			}
			else if (!iLocal_2339)
			{
				destroy_all_cams(0);
				render_script_cams(false, false, 3000, 1, 0, 0);
				if (func_182() && !iLocal_2647)
				{
					_start_screen_effect("CamPushInNeutral", false, 0);
					play_sound_frontend(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
				}
				set_player_control(player_id(), true, 0);
				set_game_pauses_for_streaming(0);
				set_gameplay_cam_relative_heading(0f);
				set_gameplay_cam_relative_pitch(0f, 1f);
				func_181(0, 0, 1, 0);
				stop_audio_scene("CHI_2_GAS_TRAIL_FIRE");
				_0x5C29F698D404C5E1(uLocal_2672, 9);
				set_time_scale(1f);
				end_srl();
				if (is_screen_faded_out())
				{
					while (_0x899BA936634A322E(uLocal_2672) != 10)
					{
						func_28(29, 1);
					}
					do_screen_fade_in(1000);
				}
				_0x81CBAE94390F9F89();
				func_176(9);
			}
		}
		iVar3 = 0;
		while (iVar3 < Local_2343)
		{
			if (!Local_2343[iVar3 /*6*/])
			{
				if (iLocal_2454 == Local_2343[iVar3 /*6*/].f_1 && fLocal_2453 > Local_2343[iVar3 /*6*/].f_2 / 1000f)
				{
					switch (iVar3)
					{
						case 0:
							switch (Local_2343[iVar3 /*6*/].f_4)
							{
								case 0:
									iLocal_2505 = 0;
									if (get_game_timer() > Local_2343[iVar3 /*6*/].f_5)
									{
										func_122(vLocal_2465[iLocal_2505 /*3*/], 0);
										Local_2343[iVar3 /*6*/].f_5 = get_game_timer() + 200;
										Local_2343[iVar3 /*6*/].f_4++;
									}
									break;
								
								case 1:
									if (get_game_timer() > Local_2343[iVar3 /*6*/].f_5)
									{
										func_122(vLocal_2465[iLocal_2505 /*3*/] + vLocal_2465[iLocal_2505 + 1 /*3*/] / Vector(2f, 2f, 2f), 0);
										iLocal_2505++;
										if (iLocal_2505 >= 12)
										{
											Local_2343[iVar3 /*6*/].f_4 = 10;
											Local_2343[iVar3 /*6*/] = 1;
										}
										else
										{
											Local_2343[iVar3 /*6*/].f_5 = get_game_timer() + 200;
											Local_2343[iVar3 /*6*/].f_4 = 2;
										}
									}
									break;
								
								case 2:
									if (get_game_timer() > Local_2343[iVar3 /*6*/].f_5)
									{
										func_122(vLocal_2465[iLocal_2505 /*3*/], 0);
										Local_2343[iVar3 /*6*/].f_5 = get_game_timer() + 200;
										if (iLocal_2505 == 2)
										{
											Local_2343[iVar3 /*6*/].f_4 = 3;
										}
										else
										{
											Local_2343[iVar3 /*6*/].f_4 = 1;
										}
									}
									break;
								
								case 3:
									if (get_game_timer() > Local_2343[iVar3 /*6*/].f_5)
									{
										func_122(vLocal_2465[iLocal_2505 /*3*/] + vLocal_2465[iLocal_2505 + 1 /*3*/] / Vector(2f, 2f, 2f), 0);
										func_122(vLocal_2465[iLocal_2505 /*3*/] + vLocal_2465[iLocal_2505 + 2 /*3*/] / Vector(2f, 2f, 2f), 0);
										Local_2343[iVar3 /*6*/].f_5 = get_game_timer() + 200;
										Local_2343[iVar3 /*6*/].f_4 = 4;
										iLocal_2505 = 3;
									}
									break;
								
								case 4:
									if (get_game_timer() > Local_2343[iVar3 /*6*/].f_5)
									{
										func_122(vLocal_2465[iLocal_2505 /*3*/], 0);
										func_122(vLocal_2465[iLocal_2505 + 1 /*3*/], 0);
										Local_2343[iVar3 /*6*/].f_5 = get_game_timer() + 200;
										Local_2343[iVar3 /*6*/].f_4 = 5;
									}
									break;
								
								case 5:
									if (get_game_timer() > Local_2343[iVar3 /*6*/].f_5)
									{
										func_122(vLocal_2465[iLocal_2505 /*3*/] + vLocal_2465[iLocal_2505 + 2 /*3*/] / Vector(2f, 2f, 2f), 0);
										func_122(vLocal_2465[iLocal_2505 + 1 /*3*/] + vLocal_2465[iLocal_2505 + 3 /*3*/] / Vector(2f, 2f, 2f), 0);
										Local_2343[iVar3 /*6*/].f_5 = get_game_timer() + 200;
										Local_2343[iVar3 /*6*/].f_4 = 6;
										iLocal_2505 = 5;
									}
									break;
								
								case 6:
									if (get_game_timer() > Local_2343[iVar3 /*6*/].f_5)
									{
										func_122(vLocal_2465[iLocal_2505 /*3*/], 0);
										func_122(vLocal_2465[iLocal_2505 + 1 /*3*/], 0);
										Local_2343[iVar3 /*6*/].f_5 = get_game_timer() + 200;
										Local_2343[iVar3 /*6*/].f_4 = 2;
										iLocal_2505 = 7;
									}
									break;
							}
							break;
						
						case 1:
							add_explosion(2432.534f, 4968.383f, 42.2389f, 4, 0.5f, 1, 0, 1f);
							Local_2343[iVar3 /*6*/] = 1;
							break;
						
						case 2:
							iLocal_2673 = 1;
							Local_2343[iVar3 /*6*/] = 1;
							break;
						
						case 3:
							if (does_cam_exist(iLocal_2637))
							{
								shake_cam(iLocal_2637, "LARGE_EXPLOSION_SHAKE", fLocal_2639);
								set_cam_motion_blur_strength(iLocal_2637, 0.1f);
								Local_2343[iVar3 /*6*/] = 1;
							}
							break;
						
						case 4:
							switch (Local_2343[iVar3 /*6*/].f_4)
							{
								case 0:
									set_entity_coords(player_ped_id(), 2473.208f, 4947.625f, 44.0664f, 1, false, 0, 1);
									set_entity_heading(player_ped_id(), 223.493f);
									set_gameplay_cam_relative_heading(0f);
									set_gameplay_cam_relative_pitch(-7f, 1f);
									if (func_182())
									{
										force_ped_motion_state(player_ped_id(), 1063765679, true, 0, 0);
										simulate_player_input_gait(player_id(), 1f, 3000, 0, 1, 0);
									}
									else
									{
										force_ped_motion_state(player_ped_id(), -668482597, true, 0, 0);
										simulate_player_input_gait(player_id(), 1f, 500, 0, 1, 0);
									}
									Local_2343[iVar3 /*6*/].f_4++;
									break;
								
								case 1:
									break;
							}
							break;
						
						case 5:
							switch (Local_2343[iVar3 /*6*/].f_4)
							{
								case 0:
									fLocal_2674 = 1f;
									Local_2343[iVar3 /*6*/].f_4++;
									Local_2343[iVar3 /*6*/].f_5 = get_game_timer() + 1300;
									_0xD01005D2BA2EB778("SLOW_MO_METH_HOUSE_RAYFIRE");
									break;
								
								case 1:
									fLocal_2674 -= timestep() * 1f;
									if (fLocal_2674 < 0.2f)
									{
										fLocal_2674 = 0.2f;
									}
									set_time_scale(fLocal_2674);
									if (get_game_timer() > Local_2343[iVar3 /*6*/].f_5)
									{
										Local_2343[iVar3 /*6*/].f_4++;
									}
									break;
								
								case 2:
									fLocal_2674 += timestep() * 1f;
									if (fLocal_2674 > 1f)
									{
										fLocal_2674 = 1f;
										Local_2343[iVar3 /*6*/].f_4++;
										Local_2343[iVar3 /*6*/] = 1;
									}
									_0xDDC635D5B3262C56("SLOW_MO_METH_HOUSE_RAYFIRE");
									set_time_scale(fLocal_2674);
									break;
							}
							break;
						}
					}
			}
			iVar3++;
		}
	}
}

void func_176(int iParam0)
{
	func_180();
	func_179();
	func_178();
	func_177();
	if (iParam0 == 11)
	{
		iLocal_2511++;
	}
	else
	{
		iLocal_2511 = iParam0;
	}
}

void func_177()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_3358)
	{
		Local_3358[iVar0 /*7*/] = 0;
		Local_3358[iVar0 /*7*/].f_1 = 0;
		Local_3358[iVar0 /*7*/].f_3 = 0;
		Local_3358[iVar0 /*7*/].f_2 = 0;
		Local_3358[iVar0 /*7*/].f_4 = 0;
		Local_3358[iVar0 /*7*/].f_5 = 0;
		Local_3358[iVar0 /*7*/].f_6 = 0;
		iVar0++;
	}
}

void func_178()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_2917)
	{
		if (Local_2917[iVar0 /*10*/].f_4)
		{
			Local_2917[iVar0 /*10*/].f_1 = 1;
			Local_2917[iVar0 /*10*/].f_6 = -1;
			func_160(iVar0, Local_2917[iVar0 /*10*/], 0, 0, 0, 1, 0, 1, 0, 1, 0);
		}
		Local_2917[iVar0 /*10*/] = 0;
		Local_2917[iVar0 /*10*/].f_1 = 0;
		Local_2917[iVar0 /*10*/].f_2 = 0;
		Local_2917[iVar0 /*10*/].f_3 = 0;
		Local_2917[iVar0 /*10*/].f_6 = 0;
		Local_2917[iVar0 /*10*/].f_4 = 0;
		Local_2917[iVar0 /*10*/].f_5 = 0;
		Local_2917[iVar0 /*10*/].f_7 = 0;
		Local_2917[iVar0 /*10*/].f_8 = 0;
		Local_2917[iVar0 /*10*/].f_9 = 0f;
		iVar0++;
	}
}

void func_179()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_3120)
	{
		Local_3120[iVar0 /*8*/] = 0;
		Local_3120[iVar0 /*8*/].f_1 = 0;
		Local_3120[iVar0 /*8*/].f_2 = 0;
		Local_3120[iVar0 /*8*/].f_3 = 0;
		Local_3120[iVar0 /*8*/].f_4 = 0;
		Local_3120[iVar0 /*8*/].f_5 = 0;
		iVar0++;
	}
}

void func_180()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_3337)
	{
		Local_3337[iVar0 /*4*/] = 0;
		Local_3337[iVar0 /*4*/].f_1 = 0;
		Local_3337[iVar0 /*4*/].f_2 = 0;
		Local_3337[iVar0 /*4*/].f_3 = 0;
		iVar0++;
	}
}

int func_181(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (is_pc_version())
	{
		if (_0xA0FE76168A189DDB() != iParam0 && iParam2)
		{
			_0x20746F7B1032A3C7(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

bool func_182()
{
	if (_0xEE778F8C7E1142E2(_0x19CAFA3C87F7C2FF()) == 4)
	{
		return true;
	}
	return false;
}

void func_183(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iLocal_438 = iParam2;
	if (iParam0 > -1)
	{
		iLocal_437 = 1;
		iLocal_439 = get_game_timer();
		iLocal_440 = iParam0 * 2;
		iLocal_442 = iLocal_440;
		if (iParam1)
		{
			iLocal_443 = 0;
		}
		else
		{
			iLocal_443 = iLocal_440;
		}
		iVar0 = 0;
		while (iVar0 < Local_444)
		{
			Local_444[iVar0 /*5*/].f_4 = 1;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < Local_281)
		{
			remove_script_fire(Local_281[iVar0 /*5*/]);
			if (Local_281[iVar0 /*5*/].f_4 != 0)
			{
				fade_decals_in_range(Local_281[iVar0 /*5*/].f_1, 0.4f, 1f);
			}
			Local_281[iVar0 /*5*/].f_4 = 0;
			iVar0++;
		}
	}
}

void func_184()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_281)
	{
		remove_script_fire(Local_281[iVar0 /*5*/]);
		Local_281[iVar0 /*5*/].f_4 = 0;
		iVar0++;
	}
	func_163(0);
	iVar0 = 0;
	while (iVar0 < Local_444)
	{
		if (does_blip_exist(Local_444[iVar0 /*5*/].f_3))
		{
			remove_blip(&(Local_444[iVar0 /*5*/].f_3));
		}
		Local_444[iVar0 /*5*/].f_4 = 0;
		iVar0++;
	}
	iLocal_269 = -1;
}

void func_185(Vector3 vParam0, Vector3 vParam1, float fParam2, Vector3 vParam3, Vector3 fParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	func_70(vParam0, vParam3, fParam6, vParam7, fParam10, 0f, 0f, 0f, iParam11, iParam12, iParam13, iParam14, iParam15);
}

void func_186(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam0)
	{
		special_ability_deactivate_fast(player_id());
		set_all_random_peds_flee(player_id(), 1);
		set_police_ignore_player(player_id(), 1);
		func_193(1);
		_0xA8FDB297A8D25FBA();
		_0xFDB423997FA30340();
		if (Global_14413.f_1 > 3)
		{
			if (is_mobile_phone_call_ongoing())
			{
				stop_scripted_conversation(false);
			}
			if (!func_40())
			{
				Global_14413.f_1 = 3;
			}
			Global_15712 = 5;
		}
		func_181(1, iParam3, iParam2, 0);
		Global_55755 = 1;
		Global_68061 = 1;
		Global_69487 = 1;
	}
	else
	{
		func_193(0);
		_0xE1CD1E48E025E661();
		Global_55755 = 0;
		if (iParam1)
		{
			_0x03FC694AE06C5A20();
		}
		set_all_random_peds_flee(player_id(), 0);
		set_police_ignore_player(player_id(), 0);
		func_181(0, iParam3, iParam2, 0);
		if (network_is_game_in_progress())
		{
			if (((!is_ped_injured(player_ped_id()) && !func_191(player_id())) && !func_188(player_id(), 0)) && !func_187())
			{
				set_entity_invincible(player_ped_id(), false);
			}
		}
		else if (!is_ped_injured(player_ped_id()) && !func_191(player_id()))
		{
			set_entity_invincible(player_ped_id(), false);
		}
		Global_69487 = 0;
	}
}

int func_187()
{
	return is_bit_set(Global_1587523[player_id() /*444*/].f_39.f_18, 14);
}

int func_188(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == player_id())
	{
		iVar0 = func_189(-1, 0) == 8;
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

int func_189(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_190();
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

auto func_190()
{
	return Global_1312747;
}

bool func_191(int iParam0)
{
	if (func_188(iParam0, 0))
	{
		return true;
	}
	if (func_192())
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

int func_192()
{
	return is_bit_set(Global_2359301, 3);
}

void func_193(int iParam0)
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

bool func_194()
{
	switch (iLocal_3690)
	{
		case 0:
			request_model(joaat("cs2_03_fmhse_vfx_parent"));
			request_model(joaat("cs2_03_fmhse_vfx_parent001"));
			request_model(joaat("cs2_03_fmhse_vfx_parent002"));
			request_model(joaat("cs2_03_fmhse_vfx_parent003"));
			request_model(joaat("cs2_03_fmhse_vfx_parent004"));
			request_model(joaat("cs2_03_fmhse_vfx_parent005"));
			request_model(joaat("cs2_03_fmhse_vfx_parent006"));
			request_model(joaat("cs2_03_fmhse_vfx_parent007"));
			request_model(joaat("cs2_03_fmhse_vfx_parent008"));
			request_model(joaat("cs2_03_fmhse_vfx_parent009"));
			request_model(joaat("cs2_03_fmhse_vfx_parent010"));
			request_model(joaat("cs2_03_fmhse_vfx_parent011"));
			request_model(joaat("cs2_03_fmhse_vfx_parent012"));
			request_model(joaat("cs2_03_fmhse_vfx_parent013"));
			request_model(joaat("cs2_03_fmhse_vfx_parent014"));
			request_model(joaat("cs2_03_fmhse_vfx_parent015"));
			iLocal_3690++;
			break;
		
		case 1:
			if (((((((((((((((has_model_loaded(joaat("cs2_03_fmhse_vfx_parent")) && has_model_loaded(joaat("cs2_03_fmhse_vfx_parent001"))) && has_model_loaded(joaat("cs2_03_fmhse_vfx_parent002"))) && has_model_loaded(joaat("cs2_03_fmhse_vfx_parent003"))) && has_model_loaded(joaat("cs2_03_fmhse_vfx_parent004"))) && has_model_loaded(joaat("cs2_03_fmhse_vfx_parent005"))) && has_model_loaded(joaat("cs2_03_fmhse_vfx_parent006"))) && has_model_loaded(joaat("cs2_03_fmhse_vfx_parent007"))) && has_model_loaded(joaat("cs2_03_fmhse_vfx_parent008"))) && has_model_loaded(joaat("cs2_03_fmhse_vfx_parent009"))) && has_model_loaded(joaat("cs2_03_fmhse_vfx_parent010"))) && has_model_loaded(joaat("cs2_03_fmhse_vfx_parent011"))) && has_model_loaded(joaat("cs2_03_fmhse_vfx_parent012"))) && has_model_loaded(joaat("cs2_03_fmhse_vfx_parent013"))) && has_model_loaded(joaat("cs2_03_fmhse_vfx_parent014"))) && has_model_loaded(joaat("cs2_03_fmhse_vfx_parent015")))
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_195()
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

void func_196()
{
	_0x27CFB1B1E078CB2D();
	func_170(28, 45);
	func_149(0, 7, 0, 0, 1, 0, 1, 0);
	func_149(1, 8, 2, 29, 1, 0, 1, 0);
	func_149(2, 9, 2, 35, 5, 34, 1, 0);
	func_149(3, 10, 2, 42, 1, 0, 1, 0);
	func_157(0, 21, 2, 29, 1, 0, 1, 0, 1, 0);
	func_157(1, 22, 2, 36, 5, 34, 1, 0, 1, 0);
	func_157(2, 26, 0, 0, 1, 0, 1, 0, 1, 0);
	func_157(3, 23, 2, 37, 1, 0, 1, 0, 1, 0);
	func_198(4, 25, 3, 23, 1, 0, 1, 0, 1, 0);
	func_160(0, 30, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(1, 31, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(2, 32, 1, 3, 34, 1, 0, 1, 0, 1, 0);
	func_160(3, 33, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(4, 34, 1, 3, 34, 1, 0, 1, 0, 1, 0);
	func_160(5, 35, 0, 2, 29, 1, 0, 1, 0, 1, 0);
	func_160(6, 36, 0, 2, 37, 1, 0, 1, 0, 1, 0);
	func_160(7, 37, 0, 2, 29, 1, 0, 1, 0, 1, 0);
	func_160(8, 38, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(9, 56, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(10, 11, 0, 2, 44, 1, 0, 1, 0, 1, 0);
	func_160(11, 50, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(12, 51, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_197(0, 2, 33, 5, 34);
	func_197(4, 2, 43, 1, 0);
	func_197(2, 2, 39, 1, 0);
	if (iLocal_2648 == 0)
	{
		if (func_87(37) && !func_87(44))
		{
			iLocal_2648 = 3;
		}
		if (func_87(41) && !func_87(44))
		{
			iLocal_2646 = 1;
			iLocal_2648 = 1;
		}
		if (func_169(10, 11) == 2)
		{
			iLocal_2648 = 2;
			iLocal_2646 = 1;
		}
	}
	func_160(13, 10, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	if ((((func_87(37) && func_87(38)) || iLocal_2646) && func_169(13, 10) == 10) && !func_82("CHI2_light"))
	{
		func_197(1, 2, 40, 1, 0);
		if (does_blip_exist(iLocal_2677))
		{
			remove_blip(&iLocal_2677);
		}
		_0x293220DA1B46CEBC(10f, 5f, 4);
		func_12(1);
		func_176(11);
	}
}

void func_197(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_152(iParam1, iParam2, iParam3, iParam4, 1, 0, 1, 0))
	{
		switch (iParam0)
		{
			case 0:
				func_130("CHFAIL1");
				break;
			
			case 1:
				func_130("FRMSOON");
				break;
			
			case 2:
				func_130("FRMTRAI");
				break;
			
			case 3:
				if (does_entity_exist(Local_755[11 /*33*/]))
				{
					if (is_ped_injured(Local_755[11 /*33*/]))
					{
						func_130("FRMCHI");
					}
				}
				if (does_entity_exist(Local_755[10 /*33*/]))
				{
					if (is_ped_injured(Local_755[10 /*33*/]))
					{
						func_130("FRMCHI2");
					}
				}
				break;
			
			case 4:
				func_130("CHFAIL2");
				break;
			
			case 5:
				func_130("FRMGASF");
				break;
			}
	}
}

void func_198(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	if (!Local_3358[iParam0 /*7*/].f_1)
	{
		if (func_199(iParam2, iParam3))
		{
			func_157(iParam0, iParam1, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 1, 0);
		}
	}
}

bool func_199(auto uParam0, int iParam1)
{
	if (Local_3358[uParam0 /*7*/] == iParam1)
	{
		if (Local_3358[uParam0 /*7*/].f_1)
		{
			return true;
		}
	}
	else if (Local_3358[uParam0 /*7*/] != 0)
	{
	}
	return false;
}

void func_200()
{
	func_170(5, 31);
	func_149(0, 2, 0, 0, 1, 0, 1, 0);
	func_149(1, 3, 2, 8, 1, 0, 1, 0);
	func_149(2, 5, 2, 9, 1, 0, 1, 0);
	func_149(3, 11, 0, 0, 1, 0, 1, 0);
	func_149(4, 4, 2, 12, 1, 0, 1, 0);
	func_160(0, 17, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(1, 13, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(2, 14, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(3, 16, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(4, 15, 0, 2, 14, 6, 9, 1, 0, 1, 0);
	func_160(7, 19, 0, 2, 9, 1, 0, 1, 0, 1, 0);
	func_160(8, 20, 0, 2, 12, 4, 9, 1, 0, 1, 0);
	func_160(9, 21, 0, 2, 12, 4, 13, 1, 0, 1, 0);
	func_160(10, 22, 0, 2, 12, 1, 0, 1, 0, 1, 0);
	func_160(11, 23, 0, 2, 11, 1, 0, 1, 0, 1, 0);
	func_160(12, 24, 0, 2, 14, 1, 0, 1, 0, 1, 0);
	func_160(5, 26, 0, 2, 11, 6, 16, 6, 9, 1, 0);
	func_160(6, 27, 0, 2, 9, 1, 0, 1, 0, 1, 0);
	func_160(14, 40, 0, 2, 26, 1, 0, 1, 0, 1, 0);
	func_160(13, 39, 0, 2, 25, 1, 0, 1, 0, 1, 0);
	func_160(15, 28, 0, 2, 11, 6, 16, 1, 0, 1, 0);
	func_160(16, 29, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(17, 43, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(18, 44, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(19, 45, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_157(0, 1, 0, 0, 1, 0, 1, 0, 1, 0);
	func_157(2, 2, 2, 21, 5, 16, 1, 0, 1, 0);
	func_157(3, 3, 2, 12, 4, 17, 1, 0, 1, 0);
	func_157(4, 5, 2, 18, 1, 0, 1, 0, 1, 0);
	func_157(5, 6, 2, 19, 1, 0, 1, 0, 1, 0);
	func_157(6, 7, 2, 27, 5, 9, 1, 0, 1, 0);
	func_157(7, 10, 2, 9, 5, 21, 5, 12, 1, 0);
	func_157(8, 11, 2, 9, 4, 21, 5, 12, 1, 0);
	func_157(9, 14, 2, 9, 4, 12, 1, 0, 1, 0);
	func_157(10, 12, 2, 9, 4, 12, 1, 0, 1, 0);
	func_157(11, 13, 0, 0, 1, 0, 1, 0, 1, 0);
	func_157(12, 16, 2, 9, 4, 23, 5, 12, 1, 0);
	func_157(13, 17, 2, 14, 5, 12, 4, 9, 1, 0);
	func_157(14, 18, 3, 20, 1, 0, 1, 0, 1, 0);
	func_157(15, 19, 0, 0, 1, 0, 1, 0, 1, 0);
	func_157(16, 20, 2, 9, 4, 10, 4, 14, 5, 12);
	func_197(4, 2, 24, 1, 0);
	func_197(5, 2, 30, 1, 0);
	if (func_87(11) && func_87(29))
	{
		func_176(7);
	}
}

void func_201()
{
	Vector3 vVar0;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	_0x9A75585FB2E54FAD(2004.447f, 3076.807f, 46.6069f, 10f);
	_0xE36A98D8AB3D3C66(1);
	if (((func_195() && iLocal_2512 > 0) && iLocal_2512 < 7) && get_game_timer() > iLocal_2641)
	{
		iLocal_2512 = 10;
		iLocal_2640 = 0;
		iLocal_2647 = true;
	}
	if (iLocal_2512 < 10)
	{
		if (is_screen_faded_out() && !is_screen_fading_in())
		{
			do_screen_fade_in(1000);
		}
	}
	if (iLocal_2880)
	{
		set_srl_time(to_float(timera()));
	}
	hide_hud_and_radar_this_frame();
	switch (iLocal_2512)
	{
		case 0:
			if (is_srl_loaded())
			{
				request_cutscene("CHI_2_MCS_5", 8);
				iLocal_2879 = 1;
				iLocal_2647 = false;
				_0xBEB2D9A1D9A8F55A(5, 5, 5, 5);
				begin_srl();
				_set_far_shadows_suppressed(0);
				iLocal_2883 = 0;
				iLocal_2880 = 1;
				vVar0 = {get_entity_coords(player_ped_id(), 1)};
				fVar3 = func_96(2458.223f, 4986.042f, 49.05241f, vVar0, 1);
				if (fVar3 > 180f)
				{
					fVar3 -= 360f;
				}
				if (is_ped_in_any_vehicle(player_ped_id(), 0))
				{
					iVar4 = get_vehicle_ped_is_in(player_ped_id(), 0);
				}
				if (((is_vehicle_driveable(iVar4, 0) && is_this_model_a_heli(get_entity_model(iVar4))) && is_entity_in_air(iVar4)) || ((is_vehicle_driveable(iVar4, 0) && is_this_model_a_plane(get_entity_model(iVar4))) && is_entity_in_air(iVar4)))
				{
					if (fVar3 < func_215(-2.5f) && fVar3 > func_215(0.5f))
					{
						iLocal_2512 = 6;
						settimera(30000);
						set_srl_time(30000f);
						iLocal_2640 = 36000;
					}
					else
					{
						iLocal_2512 = 7;
						settimera(36000);
						set_srl_time(36000f);
						iLocal_2640 = 42000;
					}
				}
				else
				{
					if (does_entity_exist(iVar4))
					{
						if (is_vehicle_driveable(iVar4, 0))
						{
							if (!(is_this_model_a_heli(get_entity_model(iVar4)) && is_entity_in_air(iVar4)) && !(is_this_model_a_plane(get_entity_model(iVar4)) && is_entity_in_air(iVar4)))
							{
								set_vehicle_on_ground_properly(iVar4);
							}
						}
					}
					if (fVar3 < func_215(-1.33f) && fVar3 > func_215(-1.92f))
					{
						iLocal_2512 = 1;
						settimera(0);
						set_srl_time(0f);
						iLocal_2640 = 6000;
					}
					else if (fVar3 < func_215(0.96f) && fVar3 > func_215(-1.33f))
					{
						iLocal_2512 = 2;
						settimera(6000);
						set_srl_time(6000f);
						iLocal_2640 = 12000;
					}
					else if (fVar3 < func_215(2.29f) && fVar3 > func_215(0.96f))
					{
						iLocal_2512 = 3;
						settimera(12000);
						set_srl_time(12000f);
						iLocal_2640 = 18000;
					}
					else if (fVar3 < func_215(-2.81f) || fVar3 > func_215(2.29f))
					{
						iLocal_2512 = 4;
						settimera(18000);
						set_srl_time(18000f);
						iLocal_2640 = 24000;
					}
					else
					{
						settimera(24000);
						set_srl_time(24000f);
						iLocal_2640 = 30000;
						iLocal_2512 = 5;
					}
				}
				iLocal_2881 = 1;
				destroy_all_cams(0);
				func_210(&Local_2683, 1, 0);
				if (is_ped_in_any_vehicle(player_ped_id(), 0))
				{
					iLocal_260 = get_vehicle_ped_is_in(player_ped_id(), 0);
					vLocal_752 = {get_entity_velocity(iLocal_260)};
					freeze_entity_position(iLocal_260, true);
					set_entity_visible(iLocal_260, false, 0);
				}
				play_stream_frontend();
				if (iLocal_2512 == 1)
				{
					iLocal_2883 = 1;
					func_69(2559.012f, 4958.518f, 36.02959f, 2585.447f, 4993.435f, 64.62565f, 48f, 2594.651f, 4948.114f, 38.0899f, 283.7287f, 22f, 22f, 15f, 1, 1, 1, 0, 0);
					if (does_entity_exist(iVar4))
					{
						if (is_vehicle_driveable(iVar4, 0))
						{
							set_vehicle_engine_on(iVar4, false, 1, 0);
						}
					}
					clear_area(2445.139f, 4978.642f, 52.1489f, 150f, 1, 1, 0, false);
					clear_area(2578.523f, 4982.284f, 51.4416f, 13f, 1, 0, 0, false);
					set_entity_coords(player_ped_id(), 2578.419f, 4981.901f, 50.587f, 1, false, 0, 1);
					set_entity_heading(player_ped_id(), 49.2184f);
					clear_ped_tasks_immediately(player_ped_id());
					_0x2208438012482A1A(player_ped_id(), 0, 0);
					set_ped_min_move_blend_ratio(player_ped_id(), 1f);
					force_ped_motion_state(player_ped_id(), -668482597, false, 0, 0);
					open_sequence_task(&iVar5);
					task_go_straight_to_coord(false, 2570.543f, 4982.002f, 50.6795f, 1f, 20000, 1193033728, 0.5f);
					task_achieve_heading(false, 88.7065f, 0);
					close_sequence_task(iVar5);
					task_perform_sequence(player_ped_id(), iVar5);
					clear_sequence_task(&iVar5);
					iLocal_2637 = create_cam("DEFAULT_SPLINE_CAMERA", true);
					add_cam_spline_node(iLocal_2637, 2538.6f, 4976.9f, 50.6f, -1.8f, 0f, 93.2f, 5000, 3, 2);
					add_cam_spline_node(iLocal_2637, 2536.153f, 4976.7f, 50.5267f, -1.8f, 0f, 93.2f, 6000, 3, 2);
					set_cam_fov(iLocal_2637, 34.9f);
					_0xD1B0F412F109EA5D(iLocal_2637, 0);
				}
				else
				{
					switch (iLocal_2512)
					{
						case 2:
							iLocal_2637 = create_cam("DEFAULT_SPLINE_CAMERA", true);
							add_cam_spline_node(iLocal_2637, 2426.8f, 5088.3f, 51.2f, 0f, 0f, -169f, 5000, 3, 2);
							add_cam_spline_node(iLocal_2637, 2427.8f, 5087.2f, 51.2f, 0f, 0f, -169.7f, 6000, 3, 2);
							set_cam_fov(iLocal_2637, 28.5f);
							_0xD1B0F412F109EA5D(iLocal_2637, 0);
							break;
						
						case 3:
							iLocal_2637 = create_cam("DEFAULT_SPLINE_CAMERA", true);
							add_cam_spline_node(iLocal_2637, 2326.3f, 4985.6f, 51.5f, 0f, 0f, -89.1f, 5000, 3, 2);
							add_cam_spline_node(iLocal_2637, 2328f, 4985.4f, 52.1f, 0f, 0f, -89.1f, 6000, 3, 2);
							set_cam_fov(iLocal_2637, 28.5f);
							_0xD1B0F412F109EA5D(iLocal_2637, 0);
							break;
						
						case 4:
							iLocal_2637 = create_cam("DEFAULT_SPLINE_CAMERA", true);
							add_cam_spline_node(iLocal_2637, 2403.6f, 4889.7f, 47.5f, 3.4f, 0f, -19.5f, 5000, 3, 2);
							add_cam_spline_node(iLocal_2637, Vector(47.5f, 4889.7f, 2403.6f) + Vector(0.07f, 2.15f, 0.8f), 3.4f, 0f, -19.5f, 6000, 3, 2);
							set_cam_fov(iLocal_2637, 29.8f);
							_0xD1B0F412F109EA5D(iLocal_2637, 0);
							break;
						
						case 5:
							iLocal_2637 = create_cam("DEFAULT_SPLINE_CAMERA", true);
							add_cam_spline_node(iLocal_2637, 2493.4f, 4934.8f, 45.7f, 5.2f, 0f, 48f, 5000, 3, 2);
							add_cam_spline_node(iLocal_2637, Vector(45.7f, 4934.8f, 2493.4f) + Vector(0f, 1f, -1f), 5.2f, 0f, 48f, 6000, 3, 2);
							set_cam_fov(iLocal_2637, 28.5f);
							_0xD1B0F412F109EA5D(iLocal_2637, 0);
							break;
						
						case 6:
							iLocal_2637 = create_cam("DEFAULT_SPLINE_CAMERA", true);
							add_cam_spline_node(iLocal_2637, 2570.6f, 4982f, 151.6f, -47.9f, 0f, 88.1f, 5000, 3, 2);
							add_cam_spline_node(iLocal_2637, 2487.8f, 4896.9f, 151.9f, -47.2f, 0f, 28.8f, 15000, 3, 2);
							set_cam_fov(iLocal_2637, 28.5f);
							_0xD1B0F412F109EA5D(iLocal_2637, 0);
							break;
						
						case 7:
							iLocal_2637 = create_cam("DEFAULT_SPLINE_CAMERA", true);
							add_cam_spline_node(iLocal_2637, 2487.8f, 4896.9f, 151.9f, -47.2f, 0f, 28.8f, 5000, 3, 2);
							add_cam_spline_node(iLocal_2637, 2570.6f, 4982f, 151.6f, -47.9f, 0f, 88.1f, 15000, 3, 2);
							set_cam_fov(iLocal_2637, 28.5f);
							_0xD1B0F412F109EA5D(iLocal_2637, 0);
							break;
						}
				}
				if (iLocal_2512 < 6)
				{
					shake_cam(iLocal_2637, "Hand_shake", 0.2f);
				}
				else
				{
					shake_cam(iLocal_2637, "Hand_shake", 0.7f);
				}
				set_cam_active(iLocal_2637, true);
				render_script_cams(true, false, 3000, 1, 0, 0);
				_0x48621C9FCA3EBD28(4);
				start_audio_scene("CHI_2_FARMHOUSE_OVERVIEW");
				func_205(1);
				set_wanted_level_multiplier(0f);
				set_max_wanted_level(0);
				clear_prints();
				clear_help(1);
				set_player_control(player_id(), false, 32);
				func_186(1, 1, 1, 0);
				set_ped_stealth_movement(player_ped_id(), 0, 0);
				iLocal_2641 = get_game_timer() + 1000;
				iVar6 = 0;
				while (iVar6 < Local_755)
				{
					if (!is_ped_injured(Local_755[iVar6 /*33*/]))
					{
						stop_ped_speaking(Local_755[iVar6 /*33*/], 1);
					}
					iVar6++;
				}
				iLocal_2642 = PED::CREATE_PED(26, joaat("a_m_y_methhead_01"), 2460.449f, 4976.938f, 45.5765f, 243.4917f, 1, true);
				give_weapon_to_ped(iLocal_2642, joaat("weapon_microsmg"), -1, true, true);
				if (!is_ped_injured(iLocal_2642))
				{
					func_93();
					task_set_blocking_of_non_temporary_events(false, 1);
					task_follow_nav_mesh_to_coord(false, 2463.016f, 4974.97f, 45.5765f, 1f, -1, 0.5f, 1, 40000f);
					task_follow_nav_mesh_to_coord(false, 2452.833f, 4964.785f, 45.5765f, 1f, -1, 0.5f, 1, 40000f);
					task_pause(false, 500);
					task_follow_nav_mesh_to_coord(false, 2460.449f, 4976.938f, 45.5765f, 1f, -1, 0.5f, 0, 40000f);
					func_92(&iLocal_2642, 1);
				}
				iLocal_2509 = create_vehicle(joaat("dubsta"), 2479.961f, 4990f, 45.8f, -5.37f, 1, 1);
				func_15("CHN2_MISSION_START", 1, "CHN2_EXPLODE");
				iLocal_2512 = 3;
			}
			break;
		
		case 3:
			if (timera() > iLocal_2640)
			{
				destroy_all_cams(0);
				iLocal_2637 = create_cam("DEFAULT_SPLINE_CAMERA", true);
				add_cam_spline_node(iLocal_2637, 2445.944f, 4962.986f, 51.4782f, 7.9159f, 0f, 34.5909f, 5000, 3, 2);
				add_cam_spline_node(iLocal_2637, 2445.684f, 4963.368f, 51.6659f, 3.6033f, 0f, 34.5909f, 3500, 3, 2);
				set_cam_fov(iLocal_2637, 34f);
				_0xD1B0F412F109EA5D(iLocal_2637, 0);
				shake_cam(iLocal_2637, "Hand_shake", 0.5f);
				iLocal_2640 += 3500;
				iLocal_2512++;
			}
			break;
		
		case 4:
			if (timera() > iLocal_2640)
			{
				destroy_all_cams(0);
				iLocal_2637 = create_cam("DEFAULT_SPLINE_CAMERA", true);
				add_cam_spline_node(iLocal_2637, 2465.07f, 4946.688f, 45.3372f, 7.1461f, 0f, 30.9281f, 5000, 3, 2);
				add_cam_spline_node(iLocal_2637, 2466.011f, 4947.377f, 45.3509f, 7.1461f, 0f, 32.3761f, 3000, 3, 2);
				set_cam_fov(iLocal_2637, 34f);
				_0xD1B0F412F109EA5D(iLocal_2637, 0);
				shake_cam(iLocal_2637, "Hand_shake", 0.5f);
				iLocal_2640 += 3000;
				iLocal_2512++;
			}
			break;
		
		case 5:
			iLocal_2882 = 1;
			if (timera() > iLocal_2640)
			{
				iLocal_2882 = 1;
				destroy_all_cams(0);
				iLocal_2637 = create_cam("DEFAULT_SPLINE_CAMERA", true);
				add_cam_spline_node(iLocal_2637, 2509.691f, 4971.024f, 44.1325f, 7.2578f, 0f, 88.5226f, 5000, 3, 2);
				add_cam_spline_node(iLocal_2637, 2509.415f, 4971.163f, 44.1674f, 6.6554f, 0f, 89.4229f, 2500, 3, 2);
				set_cam_fov(iLocal_2637, 37.34f);
				_0xD1B0F412F109EA5D(iLocal_2637, 0);
				shake_cam(iLocal_2637, "Hand_shake", 0.5f);
				iLocal_2640 += 2500;
				iLocal_2512++;
			}
			break;
		
		case 6:
			if (timera() > iLocal_2640)
			{
				if (func_204())
				{
					clear_prints();
					clear_help(1);
					_0x70894BD0915C5BCA(6.818f);
					if (is_vehicle_driveable(iLocal_2509, 0))
					{
						register_entity_for_cutscene(iLocal_2509, "EXL_2_abandoned_car", 1, joaat("dubsta"), 0);
					}
					start_cutscene(0);
					iLocal_2879 = 0;
					iLocal_2512 = 11;
				}
			}
			break;
		
		case 10:
			if (does_entity_exist(iLocal_260) && is_vehicle_driveable(iLocal_260, 0))
			{
				request_vehicle_high_detail_model(iLocal_260);
			}
			if (!is_screen_faded_out() && !is_screen_fading_out())
			{
				do_screen_fade_out(500);
			}
			if ((is_screen_faded_out() && !is_cutscene_playing()) || (is_cutscene_active() && can_set_exit_state_for_camera(1)))
			{
				iLocal_2512++;
			}
			break;
		
		case 11:
			if (does_entity_exist(iLocal_260) && is_vehicle_driveable(iLocal_260, 0))
			{
				request_vehicle_high_detail_model(iLocal_260);
			}
			if ((is_screen_faded_out() && !is_cutscene_playing()) || (is_cutscene_active() && can_set_exit_state_for_camera(1)))
			{
				destroy_all_cams(0);
				render_script_cams(false, false, 3000, 1, 0, 0);
				if (func_182() && !iLocal_2647)
				{
					_start_screen_effect("CamPushInNeutral", false, 0);
					play_sound_frontend(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
				}
				_0x81CBAE94390F9F89();
				if (func_67(player_ped_id(), 2570.543f, 4982.002f, 50.6795f, 1) < 15f && func_67(player_ped_id(), 2570.543f, 4982.002f, 50.6795f, 1) > 1f)
				{
					set_entity_coords(player_ped_id(), 2570.543f, 4982.002f, 50.6795f, 1, false, 0, 1);
					set_entity_heading(player_ped_id(), 98.21f);
				}
				else if (!is_ped_in_any_vehicle(player_ped_id(), 0))
				{
					set_entity_heading(player_ped_id(), func_96(get_entity_coords(player_ped_id(), 1), 2458.223f, 4986.042f, 49.05241f, 1));
				}
				set_gameplay_cam_relative_heading(0f);
				set_gameplay_cam_relative_pitch(-6.3f, 1f);
				_0x70894BD0915C5BCA(6.818f);
				_0x2208438012482A1A(player_ped_id(), 0, 0);
				stop_stream();
				stop_audio_scene("CHI_2_FARMHOUSE_OVERVIEW");
				clear_prints();
				clear_help(1);
				set_player_control(player_id(), true, 0);
				func_205(0);
				if (has_ped_got_weapon(player_ped_id(), joaat("weapon_sniperrifle"), 0))
				{
					if (get_ammo_in_ped_weapon(player_ped_id(), joaat("weapon_sniperrifle")) < 15)
					{
						add_ammo_to_ped(player_ped_id(), joaat("weapon_sniperrifle"), 50);
					}
				}
				func_186(0, 1, 1, 0);
				if (does_entity_exist(iLocal_2642))
				{
					delete_ped(&iLocal_2642);
				}
				iLocal_2885 = func_18(4);
				if (iLocal_2885 != -1)
				{
					if (!is_ped_injured(Local_755[iLocal_2885 /*33*/]))
					{
						delete_ped(&(Local_755[iLocal_2885 /*33*/]));
					}
					if (does_entity_exist(Local_755[iLocal_2885 /*33*/].f_20))
					{
						delete_object(&(Local_755[iLocal_2885 /*33*/].f_20));
					}
					Local_1619[iLocal_2885 /*24*/].f_3 = 1;
					Local_755[iLocal_2885 /*33*/].f_5 = 0;
					Local_755[iLocal_2885 /*33*/].f_14 = 0;
					Local_755[iLocal_2885 /*33*/].f_3 = 2;
				}
				iLocal_2886 = func_18(5);
				if (iLocal_2886 != -1)
				{
					if (!is_ped_injured(Local_755[iLocal_2886 /*33*/]))
					{
						delete_ped(&(Local_755[iLocal_2886 /*33*/]));
					}
					if (does_entity_exist(Local_755[iLocal_2886 /*33*/].f_20))
					{
						delete_object(&(Local_755[iLocal_2886 /*33*/].f_20));
					}
					Local_1619[iLocal_2886 /*24*/].f_3 = 1;
					Local_755[iLocal_2886 /*33*/].f_5 = 0;
					Local_755[iLocal_2886 /*33*/].f_14 = 0;
					Local_755[iLocal_2886 /*33*/].f_3 = 2;
				}
				func_31(20, 0);
				if (!is_ped_injured(iLocal_2643))
				{
					delete_ped(&iLocal_2643);
				}
				if (!is_ped_injured(iLocal_2644))
				{
					delete_ped(&iLocal_2644);
				}
				if (func_68(iLocal_2509))
				{
					delete_vehicle(&iLocal_2509);
				}
				if (does_entity_exist(iLocal_2682))
				{
					delete_object(&iLocal_2682);
				}
				func_202();
				iLocal_751 = 0;
				func_27();
				set_model_as_no_longer_needed(joaat("prop_phone_ing"));
				set_model_as_no_longer_needed(joaat("dubsta"));
				iVar7 = 0;
				while (iVar7 < Local_755)
				{
					if (!is_ped_injured(Local_755[iVar7 /*33*/]))
					{
						stop_ped_speaking(Local_755[iVar7 /*33*/], 0);
					}
					iVar7++;
				}
				set_gameplay_cam_relative_heading(0f);
				set_gameplay_cam_relative_pitch(-6.3f, 1f);
				if (does_entity_exist(iLocal_260))
				{
					if (is_vehicle_driveable(iLocal_260, 0))
					{
						freeze_entity_position(iLocal_260, false);
						if (is_this_model_a_plane(get_entity_model(iLocal_260)))
						{
							set_entity_velocity(iLocal_260, vLocal_752);
							set_ped_into_vehicle(player_ped_id(), iLocal_260, -1);
						}
						set_vehicle_engine_on(iLocal_260, true, 1, 0);
						if (is_this_model_a_heli(get_entity_model(iLocal_260)))
						{
							set_entity_rotation(iLocal_260, 0f, 0f, get_entity_heading(iLocal_260), 2, 1);
							set_heli_blades_full_speed(iLocal_260);
							set_entity_velocity(iLocal_260, 1f, 1f, 1f);
							set_ped_into_vehicle(player_ped_id(), iLocal_260, -1);
						}
						if (iLocal_2883 == 0)
						{
							set_ped_into_vehicle(player_ped_id(), iLocal_260, -1);
						}
						set_entity_visible(iLocal_260, true, 0);
					}
				}
				set_entity_visible(player_ped_id(), true, 0);
				special_ability_fill_meter(player_id(), 1);
				end_srl();
				if (is_screen_faded_out())
				{
					do_screen_fade_in(1000);
				}
				_set_far_shadows_suppressed(1);
				func_176(11);
			}
			break;
	}
}

void func_202()
{
	int iVar0;
	
	if (does_entity_exist(iLocal_2507))
	{
		delete_vehicle(&iLocal_2507);
	}
	iVar0 = 0;
	while (iVar0 < Local_755)
	{
		if (does_entity_exist(Local_755[iVar0 /*33*/]))
		{
			delete_ped(&(Local_755[iVar0 /*33*/]));
		}
		if (does_entity_exist(Local_755[iVar0 /*33*/].f_20))
		{
			delete_object(&(Local_755[iVar0 /*33*/].f_20));
		}
		Local_755[iVar0 /*33*/].f_3 = 0;
		Local_755[iVar0 /*33*/].f_4 = 0;
		Local_755[iVar0 /*33*/].f_6 = {0f, 0f, 0f};
		Local_755[iVar0 /*33*/].f_9 = {0f, 0f, 0f};
		Local_755[iVar0 /*33*/].f_2 = 25;
		Local_755[iVar0 /*33*/].f_5 = 0;
		Local_755[iVar0 /*33*/].f_12 = 0f;
		Local_755[iVar0 /*33*/].f_13 = 0f;
		Local_755[iVar0 /*33*/].f_14 = 0;
		Local_755[iVar0 /*33*/].f_15 = 0;
		Local_755[iVar0 /*33*/].f_17 = 0;
		Local_755[iVar0 /*33*/].f_16 = 0;
		Local_755[iVar0 /*33*/].f_21 = 0;
		Local_755[iVar0 /*33*/].f_22 = 0;
		Local_1619[iVar0 /*24*/].f_3 = 1;
		iVar0++;
	}
	if (does_pickup_exist(uLocal_2650))
	{
		remove_pickup(iLocal_2650);
	}
	iVar0 = 0;
	while (iVar0 < iLocal_2651)
	{
		if (does_pickup_exist(iLocal_2651[iVar0]))
		{
			remove_pickup(iLocal_2651[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_2657)
	{
		if (does_entity_exist(iLocal_2657[iVar0]))
		{
			delete_object(&(iLocal_2657[iVar0]));
		}
		iVar0++;
	}
	func_203(&Local_1619, &uLocal_2708, sLocal_2338, 12f, 2482.197f, 4975.367f, 44.7288f, 121f, 1);
}

void func_203(auto uParam0, auto uParam1, char* sParam2, float fParam3, Vector3 vParam4, float fParam5, int iParam6)
{
	int iVar0;
	
	iLocal_57 = iLocal_57;
	uLocal_70 = fParam3;
	vLocal_71 = {vParam4};
	fLocal_74 = fParam7;
	Local_89 = {*uParam1};
	sLocal_254 = sParam2;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		*(uParam0[iVar0 /*24*/]).f_1 = 0;
		*(uParam0[iVar0 /*24*/]).f_2 = 0;
		*(uParam0[iVar0 /*24*/]).f_3 = iParam8;
		*(uParam0[iVar0 /*24*/]).f_4 = 0;
		*(uParam0[iVar0 /*24*/]).f_5 = 0;
		*(uParam0[iVar0 /*24*/]).f_7 = 0;
		*(uParam0[iVar0 /*24*/]).f_8 = 0;
		*(uParam0[iVar0 /*24*/]).f_10 = 0;
		*(uParam0[iVar0 /*24*/]).f_11 = 0;
		*(uParam0[iVar0 /*24*/].f_12) = {0f, 0f, 0f};
		*(uParam0[iVar0 /*24*/].f_15) = {0f, 0f, 0f};
		*(uParam0[iVar0 /*24*/]).f_18 = 0f;
		iVar0++;
	}
	iLocal_53 = false;
	iLocal_54 = false;
	iLocal_55 = 0;
	iLocal_56 = false;
	iLocal_57 = 0;
	iLocal_77 = true;
	iLocal_76 = 0;
	iLocal_58 = 0;
	iLocal_60 = 0;
	iLocal_61 = -1;
	iLocal_62 = -1;
	iLocal_63 = 0;
	iLocal_64 = 0;
	iLocal_65 = 0;
	iLocal_66 = 0;
	iLocal_67 = 0;
	iLocal_68 = 0;
	iLocal_69 = 0;
	block_decision_maker_event(-455129387, 31);
	iLocal_52 = 0;
}

int func_204()
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

void func_205(int iParam0)
{
	if (iParam0)
	{
		func_209();
		if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
		{
			set_bit(&Global_2284, 16);
		}
		Global_14413.f_1 = 1;
		if (func_208(0))
		{
			func_206(0);
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

void func_206(int iParam0)
{
	if (Global_14571)
	{
		func_207(0, 0);
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
	if (!func_40())
	{
		Global_14413.f_1 = 3;
	}
}

void func_207(int iParam0, int iParam1)
{
	if (iParam0)
	{
		if (func_208(0))
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

bool func_208(int iParam0)
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

void func_209()
{
	if (Global_14413.f_1 == 9 || Global_14413.f_1 == 10)
	{
		Global_15765 = 0;
		Global_15761 = 1;
	}
}

void func_210(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (is_bit_set(*iParam0.f_13, 30))
	{
		iParam1 = true;
	}
	func_214(iParam0);
	iVar0 = false;
	while (iVar0 < 3)
	{
		if (does_blip_exist(*iParam0.f_1[iVar0]))
		{
			remove_blip(iParam0.f_1[iVar0]);
		}
		func_213(iVar0, iParam0);
		func_212(iVar0, iParam0);
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
				PED::SET_PED_CONFIG_FLAG(*iParam0.f_17[iVar0], 32, true);
				PED::SET_PED_CONFIG_FLAG(*iParam0.f_17[iVar0], 305, false);
			}
			PED::SET_PED_CONFIG_FLAG(*iParam0.f_17[iVar0], 268, false);
			if (iParam1)
			{
				if (is_ped_group_member(*iParam0.f_17[iVar0], func_211()) && *iParam0.f_17[iVar0] != player_ped_id())
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
			PED::SET_PED_CONFIG_FLAG(player_ped_id(), 32, true);
		}
	}
	*iParam0.f_21 = 0;
}

int func_211()
{
	return get_player_group(get_player_index());
}

void func_212(int iParam0, auto uParam1)
{
	switch (iParam0)
	{
		case 0:
			clear_bit(uParam1.f_13, 17);
			break;
		
		case 1:
			clear_bit(uParam1.f_13, 18);
			break;
		
		case 2:
			clear_bit(uParam1.f_13, 19);
			break;
	}
}

void func_213(int iParam0, auto uParam1)
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

void func_214(auto uParam0)
{
	if (does_blip_exist(*uParam0.f_5))
	{
		remove_blip(uParam0.f_5);
	}
}

float func_215(float fParam0)
{
	return fParam0 * 57.29578f;
}

void func_216()
{
	int iVar0;
	
	func_170(1, 4);
	func_160(0, 2, 0, 2, 3, 1, 0, 1, 0, 1, 0);
	func_160(1, 3, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(2, 41, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(3, 42, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(4, 47, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(5, 4, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(6, 6, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(7, 7, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(8, 8, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(9, 9, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(10, 5, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_149(0, 1, 2, 2, 1, 0, 1, 0);
	func_197(3, 0, 0, 1, 0);
	if ((func_67(player_ped_id(), 2458.223f, 4986.042f, 49.05241f, 0) < 107.9f || is_entity_in_angled_area(player_ped_id(), 2374.441f, 4930.564f, 34.73784f, 2478.099f, 5077.488f, 60.63246f, 185f, 0, false, 0)) || is_entity_in_angled_area(player_ped_id(), 2396.726f, 4887.434f, 33.85329f, 2510.54f, 5003.356f, 58.01184f, 158.25f, 0, false, 0))
	{
		if (does_blip_exist(Local_2683.f_5))
		{
			set_blip_route(Local_2683.f_6, false);
		}
		func_176(11);
	}
	else
	{
		switch (iLocal_2512)
		{
			case 0:
				func_32(2, 0);
				func_32(3, 0);
				func_32(1, 0);
				func_32(5, 0);
				func_259(5, -20);
				set_wanted_level_multiplier(0f);
				set_max_wanted_level(0);
				iLocal_2512++;
				break;
			
			case 1:
				if (func_219(&Local_2683, 2608.151f, 4949.754f, 39.4f, 9f, 9f, 2f, 1, "FRMCHSE_1", 1, 1, -1))
				{
					_0x293220DA1B46CEBC(6f, 6f, 3);
					iLocal_2512++;
					func_210(&Local_2683, 1, 0);
					func_31(3, 1);
					if (is_audio_scene_active("CHI_2_DRIVE_TO_FARMHOUSE"))
					{
						stop_audio_scene("CHI_2_DRIVE_TO_FARMHOUSE");
					}
					if (is_audio_scene_active("CHI_2_DRIVE_ROCK_RADIO"))
					{
						stop_audio_scene("CHI_2_DRIVE_ROCK_RADIO");
					}
				}
				break;
			
			case 2:
				if (is_ped_in_any_vehicle(player_ped_id(), 0))
				{
					iVar0 = get_vehicle_ped_is_using(player_ped_id());
					if (func_218(iVar0, 10f, 2, 1056964608, 0, 1, 0))
					{
						if (func_217(5) > 2)
						{
							iLocal_2512++;
						}
					}
				}
				else
				{
					iLocal_2512++;
				}
				break;
			
			case 3:
				if (func_219(&Local_2683, 2573.63f, 4983.677f, 50.6978f, 12f, 12f, 2f, 0, "FRMCHSE_5", 1, 1, -1))
				{
					if (is_audio_scene_active("CHI_2_DRIVE_ROCK_RADIO"))
					{
						stop_audio_scene("CHI_2_DRIVE_ROCK_RADIO");
					}
					_0x293220DA1B46CEBC(5f, 10f, 4);
					func_176(11);
				}
				if (does_blip_exist(Local_2683.f_5))
				{
					set_blip_route(Local_2683.f_6, false);
				}
				break;
			}
	}
}

int func_217(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_2515)
	{
		if (Local_2515[iVar0 /*6*/].f_1 == 1)
		{
			if (Local_2515[iVar0 /*6*/] == iParam0)
			{
				return Local_2515[iVar0 /*6*/].f_2;
			}
		}
		iVar0++;
	}
	return -1;
}

bool func_218(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, int iParam5, int iParam6)
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

int func_219(int iParam0, Vector3 vParam1, Vector3 vParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	return func_220(iParam0, vParam1, vParam4, func_258(), func_258(), iParam7, 1, 0, 0, 0, 0, sParam8, func_167(), func_167(), func_167(), func_167(), func_167(), 0, iParam9, func_167(), 0, 0, iParam10, iParam11, 0, 0, 0, 1, 1065353216);
}

bool func_220(int iParam0, Vector3 vParam1, Vector3 vParam2, Vector3 vParam3, Vector3 vParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, char* sParam11, char* sParam12, char* sParam13, char* sParam14, char* sParam15, char* sParam16, int iParam17, int iParam18, char* sParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, int iParam26, int iParam27, float fParam28)
{
	int iVar0;
	int iVar1;
	int iVar2;
	Vector3 vVar3;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	vVar3 = {vParam1 + Vector(1f, 0f, 0f)};
	*iParam0.f_17[0] = iParam15;
	*iParam0.f_17[1] = iParam16;
	*iParam0.f_17[2] = iParam17;
	*iParam0.f_16 = iParam15;
	func_257(iParam0);
	func_256(iParam0);
	func_255();
	if (func_239(iParam0, *iParam0.f_17[0], *iParam0.f_17[1], *iParam0.f_17[2], sParam20, sParam21, sParam22, sParam23, *iParam0.f_8, iParam25, iParam18, 0, 0, iParam32, iParam33, iParam34, iParam14, iParam26))
	{
		func_238(sParam20);
		func_238(sParam21);
		func_238(sParam22);
		func_238(sParam23);
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
				if (func_236(iParam0, iParam29))
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
				func_238(sParam24);
				func_238(sParam27);
				func_238("MORE_SEATS");
				if (iParam26 && is_player_wanted_level_greater(player_id(), 0))
				{
					if (does_blip_exist(*iParam0.f_5))
					{
						remove_blip(iParam0.f_5);
						func_238(sParam19);
					}
					if (does_blip_exist(*iParam0))
					{
						remove_blip(iParam0);
					}
					if ((!func_233(iParam0, 1) && !func_232(iParam0)) && !is_bit_set(*iParam0.f_13, false))
					{
						if (iParam30)
						{
							func_231(iParam0, "LOSE_WANTED", 0);
							if (!is_ped_injured(*iParam0.f_17[0]))
							{
								func_229(*iParam0.f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
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
						func_238("LOSE_WANTED");
						clear_bit(iParam0.f_13, false);
						set_bit(iParam0.f_13, true);
					}
					if (is_bit_set(*iParam0.f_13, true))
					{
						if (!func_233(iParam0, 1))
						{
							if (!is_ped_injured(*iParam0.f_17[0]))
							{
								func_229(*iParam0.f_17[0], "LOSE_WANTED_LEVEL", 3);
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
						*iParam0.f_5 = func_5(vVar3, 0);
						if (!iParam31 == -1)
						{
							set_blip_sprite(*iParam0.f_5, iParam31);
						}
						if (iParam35)
						{
							func_228(*iParam0.f_5, iParam0);
						}
					}
					else if (!func_227(vVar3, get_blip_coords(*iParam0.f_5), 0.1f, 0))
					{
						set_blip_coords(*iParam0.f_5, vVar3);
						if (iParam35)
						{
							func_228(*iParam0.f_5, iParam0);
						}
					}
					if (!func_233(iParam0, 2))
					{
						if (!is_bit_set(*iParam0.f_13, 2))
						{
							func_231(iParam0, sParam19, 0);
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
								else if (!is_ped_group_member(*iParam0.f_17[iVar2], func_211()) || !func_225(*iParam0.f_17[iVar2], 1))
								{
									iVar1 = false;
								}
							}
							iVar2++;
						}
						if (iVar1)
						{
							if (func_222(iParam0))
							{
								func_238(sParam19);
								func_238(sParam24);
								func_238(sParam20);
								func_238(sParam21);
								func_238(sParam22);
								func_238(sParam23);
								func_238("LOSE_WANTED");
								func_238("MORE_SEATS");
								func_238(sParam27);
								func_210(iParam0, 1, 0);
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
					func_238(sParam24);
					func_238(sParam27);
					if (does_blip_exist(*iParam0.f_5) || does_blip_exist(*iParam0))
					{
						remove_blip(iParam0.f_5);
						remove_blip(iParam0);
						func_238(sParam19);
					}
					if ((!func_233(iParam0, 1) && !func_232(iParam0)) && !is_bit_set(*iParam0.f_13, false))
					{
						if (iParam30)
						{
							func_231(iParam0, "LOSE_WANTED", 0);
							if (!is_ped_injured(*iParam0.f_17[0]))
							{
								func_229(*iParam0.f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
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
						func_238("LOSE_WANTED");
						clear_bit(iParam0.f_13, false);
						set_bit(iParam0.f_13, true);
					}
					if (is_bit_set(*iParam0.f_13, true))
					{
						if (!func_233(iParam0, 1))
						{
							if (!is_ped_injured(*iParam0.f_17[0]))
							{
								func_229(*iParam0.f_17[0], "LOSE_WANTED_LEVEL", 3);
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
								func_238(sParam19);
							}
							*iParam0 = func_221(iParam18, 0, 0);
							set_blip_display(*iParam0, 2);
							if (!is_bit_set(*iParam0.f_13, 4))
							{
								func_228(*iParam0, iParam0);
							}
						}
						if (!func_233(iParam0, 2))
						{
							if (!is_bit_set(*iParam0.f_13, 3))
							{
								func_231(iParam0, sParam24, 0);
								set_bit(iParam0.f_13, 3);
								clear_bit(iParam0.f_13, 4);
							}
							else if (is_bit_set(*iParam0.f_13, 9))
							{
								if (!is_string_null(sParam27))
								{
									if (!is_bit_set(*iParam0.f_13, 4))
									{
										func_231(iParam0, sParam27, 0);
										set_bit(iParam0.f_13, 4);
									}
								}
								else if (!is_bit_set(*iParam0.f_13, 4))
								{
									func_231(iParam0, sParam24, 0);
									set_bit(iParam0.f_13, 4);
								}
								if (!is_bit_set(*iParam0.f_13, 23))
								{
									if (!is_ped_injured(*iParam0.f_17[0]))
									{
										func_229(*iParam0.f_17[0], "GET_IN_CAR", 3);
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
					func_238(sParam19);
				}
				if (iParam14 == 4 || iParam14 == 5)
				{
					if (iParam29 > 0)
					{
						if (!func_233(iParam0, 2))
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
									iVar9 = get_random_int_in_range(false, iVar8);
									if (!is_ped_injured(*iParam0.f_17[iVar9]))
									{
										func_229(*iParam0.f_17[iVar9], "NEED_A_BIGGER_VEHICLE", 3);
									}
									func_231(iParam0, "MORE_SEATS", 0);
									set_bit(iParam0.f_13, 13);
								}
							}
							else if (!is_bit_set(*iParam0.f_13, 3))
							{
								func_231(iParam0, sParam24, 0);
								set_bit(iParam0.f_13, 3);
								clear_bit(iParam0.f_13, 4);
							}
							else if (!is_bit_set(*iParam0.f_13, 4))
							{
								if (is_bit_set(*iParam0.f_13, 9))
								{
									func_231(iParam0, sParam27, 0);
									set_bit(iParam0.f_13, 4);
								}
							}
						}
					}
					else if (!func_233(iParam0, 2))
					{
						if (!is_bit_set(*iParam0.f_13, 3))
						{
							func_231(iParam0, sParam24, 0);
							set_bit(iParam0.f_13, 3);
							clear_bit(iParam0.f_13, 4);
						}
						else if (is_bit_set(*iParam0.f_13, 9))
						{
							if (!is_string_null(sParam27))
							{
								if (!is_bit_set(*iParam0.f_13, 4))
								{
									func_231(iParam0, sParam27, 0);
									set_bit(iParam0.f_13, 4);
								}
							}
							else if (!is_bit_set(*iParam0.f_13, 4))
							{
								func_231(iParam0, sParam24, 0);
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
		func_238(sParam19);
		func_238(sParam24);
		func_238(sParam27);
		func_238(sParam24);
		func_238("LOSE_WANTED");
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

int func_221(int iParam0, int iParam1, int iParam2)
{
	return func_14(iParam0, !iParam1, iParam2);
}

bool func_222(int iParam0)
{
	if (is_bit_set(*iParam0.f_13, 12))
	{
		if (func_224(player_ped_id()))
		{
			if (func_223(1, 0, 1) || is_bit_set(*iParam0.f_13, 7))
			{
				return true;
			}
		}
	}
	else if (func_223(1, 0, 1) || is_bit_set(*iParam0.f_13, 7))
	{
		return true;
	}
	return false;
}

bool func_223(int iParam0, int iParam1, int iParam2)
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

bool func_224(int iParam0)
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

bool func_225(int iParam0, int iParam1)
{
	if (!is_ped_injured(iParam0))
	{
		if (is_ped_sitting_in_any_vehicle(player_ped_id()) && iParam1)
		{
			if (func_226(player_ped_id(), iParam0))
			{
				set_group_separation_range(func_211(), 50f);
				return true;
			}
		}
		else if (is_ped_group_member(iParam0, func_211()))
		{
			set_group_separation_range(func_211(), 50f);
			return true;
		}
	}
	else
	{
		return true;
	}
	return false;
}

bool func_226(int iParam0, int iParam1)
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

bool func_227(Vector3 vParam0, Vector3 vParam1, float fParam2, int iParam3)
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

void func_228(int iParam0, int iParam1)
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

void func_229(int iParam0, char* sParam1, int iParam2)
{
	_play_ambient_speech1(iParam0, sParam1, func_230(iParam2), 1);
}

int func_230(int iParam0)
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

void func_231(int iParam0, char* sParam1, int iParam2)
{
	if (!iParam2)
	{
		if (!is_string_null(sParam1))
		{
			if (!are_strings_equal(sParam1, ""))
			{
				func_150(sParam1, 7500, 1);
			}
		}
	}
	*iParam0.f_10 = get_game_timer();
}

bool func_232(int iParam0)
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

bool func_233(int iParam0, int iParam1)
{
	if (iParam1 != 1 || is_subtitle_preference_switched_on())
	{
		if (is_message_being_displayed())
		{
			return true;
		}
		if (func_235(iParam0))
		{
			return true;
		}
	}
	if (iParam1 != 2 || is_subtitle_preference_switched_on())
	{
		if (func_59() && !func_234())
		{
			return true;
		}
	}
	return false;
}

bool func_234()
{
	if (Global_16723 == 1)
	{
		return true;
	}
	return false;
}

bool func_235(auto uParam0)
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

bool func_236(auto uParam0, int iParam1)
{
	int iVar0;
	
	if (is_ped_in_any_vehicle(player_ped_id(), 0))
	{
		iVar0 = get_vehicle_ped_is_in(player_ped_id(), 0);
		if (func_237(iVar0, uParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

bool func_237(int iParam0, auto uParam1, int iParam2)
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
			if (does_entity_exist(*uParam1.f_17[iVar2]))
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

void func_238(char* sParam0)
{
	if (!is_string_null(sParam0))
	{
		clear_this_print(sParam0);
	}
}

bool func_239(auto uParam0, auto uParam1, auto uParam2, auto uParam3, auto uParam4, auto uParam5, auto uParam6, char* sParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, auto uParam13, auto uParam14, auto uParam15, int iParam16, int iParam17)
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
	Vector3 vVar28;
	int iVar31;
	int iVar32;
	
	iVar4 = 0;
	*uParam0.f_17[0] = uParam1;
	*uParam0.f_17[1] = uParam2;
	*uParam0.f_17[2] = uParam3;
	*uParam0.f_16 = uParam1;
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
		if (!is_ped_injured(*uParam0.f_17[iVar0]))
		{
			iVar3++;
		}
		if (is_player_wanted_level_greater(player_id(), 0))
		{
			if (!is_bit_set(*uParam0.f_13, 29) && !is_bit_set(*uParam0.f_13, 28))
			{
				if (!is_ped_injured(*uParam0.f_17[iVar0]))
				{
					set_ped_using_action_mode(*uParam0.f_17[iVar0], true, -1, 0);
				}
				if (iVar0 == 2)
				{
					set_bit(uParam0.f_13, 28);
				}
			}
		}
		else if (!is_bit_set(*uParam0.f_13, 29) && is_bit_set(*uParam0.f_13, 28))
		{
			if (!is_ped_injured(*uParam0.f_17[iVar0]))
			{
				set_ped_using_action_mode(*uParam0.f_17[iVar0], false, -1, 0);
			}
			if (iVar0 == 2)
			{
				clear_bit(uParam0.f_13, 28);
			}
		}
		iVar0++;
	}
	if (iVar3 == 0)
	{
		return true;
	}
	if (is_bit_set(*uParam0.f_13, 26))
	{
		iVar23 = false;
		if (!does_entity_exist(*uParam0.f_21))
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
				*uParam0.f_21 = iVar24;
			}
		}
		if (is_vehicle_driveable(*uParam0.f_21, 0))
		{
			if (vdist2(get_entity_coords(player_ped_id(), 1), get_entity_coords(*uParam0.f_21, 1)) < 400f)
			{
				if (!is_ped_sitting_in_any_vehicle(player_ped_id()))
				{
					if (!is_player_wanted_level_greater(player_id(), 0) || !iParam17)
					{
						if (func_237(*uParam0.f_21, uParam0, iVar3))
						{
							iVar0 = false;
							while (iVar0 < 3)
							{
								if (!is_ped_injured(*uParam0.f_17[iVar0]))
								{
									set_ped_max_move_blend_ratio(*uParam0.f_17[iVar0], 1f);
									if (is_ped_group_member(*uParam0.f_17[iVar0], func_211()))
									{
										remove_ped_from_group(*uParam0.f_17[iVar0]);
									}
									if (get_script_task_status(*uParam0.f_17[iVar0], -1794415470) == 7 && !func_254(*uParam0.f_17[iVar0], *uParam0.f_21))
									{
										if (!is_ped_ragdoll(*uParam0.f_17[iVar0]) && !is_ped_getting_up(*uParam0.f_17[iVar0]))
										{
											set_blocking_of_non_temporary_events(*uParam0.f_17[iVar0], true);
											task_enter_vehicle(*uParam0.f_17[iVar0], *uParam0.f_21, 60000, iVar0, 1f, 1, 0);
											set_ped_group_member_passenger_index(*uParam0.f_17[iVar0], iVar0);
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
			clear_bit(uParam0.f_13, 26);
			iVar0 = false;
			while (iVar0 < 3)
			{
				if (!is_ped_injured(*uParam0.f_17[iVar0]))
				{
					if (!is_ped_getting_into_a_vehicle(*uParam0.f_17[iVar0]) && !*uParam0.f_15)
					{
						clear_ped_tasks(*uParam0.f_17[iVar0]);
					}
					if (!is_ped_group_member(*uParam0.f_17[iVar0], func_211()))
					{
						if (func_252(uParam0, *uParam0.f_17[iVar0], fParam8, 1))
						{
							set_ped_as_group_member(*uParam0.f_17[iVar0], func_211());
						}
					}
				}
				iVar0++;
			}
		}
	}
	if (!is_bit_set(*uParam0.f_13, 26))
	{
		if ((!func_251(uParam0) && is_ped_sitting_in_any_vehicle(player_ped_id())) && !does_entity_exist(iParam10))
		{
			iVar13 = get_vehicle_ped_is_in(player_ped_id(), 0);
			if (is_vehicle_driveable(iVar13, 0))
			{
				if (!is_bit_set(*uParam0.f_13, 13))
				{
					if (iParam16 == 4 || iParam16 == 5)
					{
					}
					if (!func_233(uParam0, 2))
					{
						iVar26 = false;
						iVar27 = 0;
						iVar0 = false;
						while (iVar0 < 3)
						{
							if (!is_ped_injured(*uParam0.f_17[iVar0]))
							{
								iVar26++;
							}
							iVar0++;
						}
						iVar27 = get_random_int_in_range(false, iVar26);
						if (!is_ped_injured(*uParam0.f_17[iVar27]))
						{
							func_229(*uParam0.f_17[iVar27], "NEED_A_BIGGER_VEHICLE", 3);
						}
						func_231(uParam0, "MORE_SEATS", 0);
						set_bit(uParam0.f_13, 13);
					}
				}
				iVar12 = true;
			}
		}
		else
		{
			iVar12 = false;
			clear_bit(uParam0.f_13, 13);
			func_238("MORE_SEATS");
		}
		if (!does_entity_exist(iParam10))
		{
			if ((!is_ped_injured(*uParam0.f_17[0]) || !is_ped_injured(*uParam0.f_17[1])) || !is_ped_injured(*uParam0.f_17[2]))
			{
				if (!is_bit_set(*uParam0.f_13, 31))
				{
					if (is_ped_sitting_in_any_vehicle(player_ped_id()) && !func_233(uParam0, 2))
					{
						iVar13 = get_vehicle_ped_is_in(player_ped_id(), 0);
						if (func_250(iVar13, uParam0))
						{
							func_231(uParam0, "CMN_VEHSUIT", 0);
							set_bit(uParam0.f_13, 31);
						}
					}
				}
				else if (!is_ped_sitting_in_any_vehicle(player_ped_id()))
				{
					clear_bit(uParam0.f_13, 31);
					func_238("CMN_VEHSUIT");
				}
			}
		}
		if (is_vehicle_driveable(iParam10, 0))
		{
			if (is_ped_sitting_in_vehicle(player_ped_id(), iParam10))
			{
				if (is_control_just_pressed(0, 75))
				{
					set_bit(uParam0.f_13, 21);
				}
			}
			else if (is_bit_set(*uParam0.f_13, 21))
			{
				clear_bit(uParam0.f_13, 21);
			}
		}
		iVar0 = false;
		while (iVar0 < 3)
		{
			if (does_entity_exist(*uParam0.f_17[iVar0]))
			{
				if (!is_ped_injured(*uParam0.f_17[iVar0]))
				{
					if (!is_ped_group_member(*uParam0.f_17[iVar0], func_211()))
					{
						set_ped_dies_in_water(*uParam0.f_17[iVar0], 1);
					}
					else
					{
						set_ped_dies_in_water(*uParam0.f_17[iVar0], 0);
					}
					if (is_ped_sitting_in_any_vehicle(player_ped_id()))
					{
						iVar13 = get_vehicle_ped_is_in(player_ped_id(), 0);
						if (is_vehicle_driveable(iVar13, 0))
						{
							if (is_ped_group_member(*uParam0.f_17[iVar0], func_211()))
							{
								if (!func_251(uParam0) && is_ped_sitting_in_any_vehicle(player_ped_id()))
								{
									if (!func_249(*uParam0.f_17[iVar0]))
									{
										remove_ped_from_group(*uParam0.f_17[iVar0]);
									}
								}
							}
						}
						if (iVar13 != iParam10 && !is_entity_dead(iVar13, 0))
						{
							if (is_ped_sitting_in_vehicle(*uParam0.f_17[iVar0], iVar13))
							{
								if (is_entity_in_water(iVar13) && !is_vehicle_on_all_wheels(iVar13))
								{
									vVar28 = {get_entity_coords(iVar13, 1)};
									if (vVar28.z < -1f)
									{
										task_leave_vehicle(*uParam0.f_17[iVar0], iVar13, 64);
									}
								}
							}
						}
					}
					iVar11 = true;
					if (!is_ped_group_member(*uParam0.f_17[iVar0], func_211()))
					{
						if (is_ped_sitting_in_any_vehicle(*uParam0.f_17[iVar0]))
						{
							iVar13 = get_vehicle_ped_is_in(*uParam0.f_17[iVar0], 0);
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
												task_leave_vehicle(*uParam0.f_17[iVar0], iVar13, 4160);
											}
											else
											{
												task_leave_vehicle(*uParam0.f_17[iVar0], iVar13, 64);
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
												task_leave_vehicle(*uParam0.f_17[iVar0], iVar13, 4160);
											}
											else
											{
												task_leave_vehicle(*uParam0.f_17[iVar0], iVar13, 64);
											}
											iVar11 = false;
										}
									}
								}
							}
						}
					}
					if (is_ped_group_member(*uParam0.f_17[iVar0], func_211()))
					{
						iVar32 = get_vehicle_ped_is_using(player_ped_id());
						if (does_entity_exist(iVar32))
						{
							if (func_237(iVar32, uParam0, 0))
							{
								if (func_248(iVar0, uParam0) || !is_bit_set(*uParam0.f_13, 27))
								{
									set_ped_group_member_passenger_index(*uParam0.f_17[iVar0], iVar0);
									func_212(iVar0, uParam0);
									iVar4++;
									if (iVar4 >= iVar3)
									{
										set_bit(uParam0.f_13, 27);
									}
								}
							}
							else if (!func_248(iVar0, uParam0))
							{
								if (get_entity_model(iVar32) == joaat("sentinel2"))
								{
									set_ped_group_member_passenger_index(*uParam0.f_17[iVar0], 4);
								}
								else
								{
									set_ped_group_member_passenger_index(*uParam0.f_17[iVar0], 2);
								}
								func_247(iVar0, uParam0);
							}
						}
					}
					if ((!is_ped_group_member(*uParam0.f_17[iVar0], func_211()) && !func_246(*uParam0.f_17[iVar0], iParam10)) && !func_245(*uParam0.f_17[iVar0], iParam10))
					{
						if (func_252(uParam0, *uParam0.f_17[iVar0], fParam8, iParam11))
						{
							if (!is_ped_group_member(*uParam0.f_17[iVar0], func_211()))
							{
								if (((!is_ped_ragdoll(*uParam0.f_17[iVar0]) && !is_ped_getting_up(*uParam0.f_17[iVar0])) && !is_ped_jumping_out_of_vehicle(*uParam0.f_17[iVar0])) && !is_ped_getting_into_a_vehicle(*uParam0.f_17[iVar0]))
								{
									iVar14 = get_script_task_status(*uParam0.f_17[iVar0], -1794415470);
									if (iVar14 == 7)
									{
										clear_ped_tasks(*uParam0.f_17[iVar0]);
									}
									set_ped_as_group_member(*uParam0.f_17[iVar0], func_211());
									iVar11 = false;
								}
							}
						}
						if (iVar11)
						{
							if (!does_blip_exist(*uParam0.f_1[iVar0]))
							{
								*uParam0.f_11 = get_game_timer();
								*uParam0.f_1[iVar0] = func_221(*uParam0.f_17[iVar0], 0, 0);
								set_blip_display(*uParam0.f_1[iVar0], 2);
								if (iParam9)
								{
									func_228(*uParam0.f_1[iVar0], uParam0);
								}
							}
						}
						iVar6 = 0;
					}
					else if (does_blip_exist(*uParam0.f_1[iVar0]))
					{
						if (((func_225(*uParam0.f_17[iVar0], 1) || func_246(*uParam0.f_17[iVar0], iParam10)) || iParam12) || (is_vehicle_driveable(iParam10, 0) && !is_ped_in_vehicle(player_ped_id(), iParam10, 0)))
						{
							if (does_blip_exist(*uParam0.f_1[iVar0]))
							{
								remove_blip(uParam0.f_1[iVar0]);
								func_238(uVar15[iVar0]);
							}
						}
						else
						{
							if (iParam9)
							{
								func_228(*uParam0.f_1[iVar0], uParam0);
							}
							iVar6 = 0;
						}
					}
					else if (is_vehicle_driveable(iParam10, 0))
					{
						if (!is_ped_sitting_in_vehicle(*uParam0.f_17[iVar0], iParam10))
						{
							if ((is_entity_at_entity(*uParam0.f_17[iVar0], iParam10, 20f, 20f, 5f, 0, 1, 0) && !is_bit_set(*uParam0.f_13, 11)) && !((iParam17 && is_player_wanted_level_greater(player_id(), 0)) && !is_ped_in_vehicle(player_ped_id(), iParam10, 0)))
							{
								if (is_ped_sitting_in_any_vehicle(*uParam0.f_17[iVar0]))
								{
									if (!is_ped_in_vehicle(*uParam0.f_17[iVar0], iParam10, 0))
									{
										if (!func_225(*uParam0.f_17[iVar0], 1))
										{
											if (func_224(*uParam0.f_17[iVar0]))
											{
												iVar14 = get_script_task_status(*uParam0.f_17[iVar0], 451360105);
												if (iVar14 == 7)
												{
													task_leave_any_vehicle(*uParam0.f_17[iVar0], 0, 0);
												}
											}
										}
									}
								}
								else
								{
									if (is_ped_group_member(*uParam0.f_17[iVar0], func_211()))
									{
										if ((((!is_ped_jumping_out_of_vehicle(*uParam0.f_17[iVar0]) && !is_ped_ragdoll(*uParam0.f_17[iVar0])) && !is_ped_getting_up(*uParam0.f_17[iVar0])) && !is_ped_getting_into_a_vehicle(*uParam0.f_17[iVar0])) && !is_entity_on_fire(iParam10))
										{
											remove_ped_from_group(*uParam0.f_17[iVar0]);
										}
									}
									iVar14 = get_script_task_status(*uParam0.f_17[iVar0], -1794415470);
									if (iVar14 == 7 && !func_254(*uParam0.f_17[iVar0], iParam10))
									{
										if (((((!is_ped_jumping_out_of_vehicle(*uParam0.f_17[iVar0]) && !is_ped_jumping_out_of_vehicle(player_ped_id())) && !func_244(*uParam0.f_17[iVar0], 2f)) && !is_ped_ragdoll(*uParam0.f_17[iVar0])) && !is_ped_getting_up(*uParam0.f_17[iVar0])) && !is_entity_on_fire(iParam10))
										{
											set_blocking_of_non_temporary_events(*uParam0.f_17[iVar0], true);
											if (is_bit_set(*uParam0.f_13, 10))
											{
												set_ped_max_move_blend_ratio(*uParam0.f_17[iVar0], 1f);
											}
											task_enter_vehicle(*uParam0.f_17[iVar0], iParam10, 60000, iVar0, 2f, 1, 0);
											set_ped_get_out_upside_down_vehicle(*uParam0.f_17[iVar0], 0);
										}
									}
									else if (is_ped_in_vehicle(player_ped_id(), iParam10, 0))
									{
										*uParam0.f_1[iVar0] = func_221(*uParam0.f_17[iVar0], 0, 0);
										set_blip_display(*uParam0.f_1[iVar0], 2);
										iVar6 = 0;
									}
								}
							}
							else if (!is_ped_group_member(*uParam0.f_17[iVar0], func_211()))
							{
								if (func_252(uParam0, *uParam0.f_17[iVar0], fParam8, iParam11))
								{
									if (!is_ped_ragdoll(*uParam0.f_17[iVar0]) && !is_ped_getting_up(*uParam0.f_17[iVar0]))
									{
										iVar14 = get_script_task_status(*uParam0.f_17[iVar0], -1794415470);
										if (iVar14 == 7)
										{
											clear_ped_tasks(*uParam0.f_17[iVar0]);
										}
										set_blocking_of_non_temporary_events(*uParam0.f_17[iVar0], false);
										set_ped_as_group_member(*uParam0.f_17[iVar0], func_211());
									}
								}
							}
						}
						else if (is_ped_sitting_in_vehicle(player_ped_id(), iParam10))
						{
							if (!is_ped_group_member(*uParam0.f_17[iVar0], func_211()))
							{
								if (!is_bit_set(*uParam0.f_13, 21))
								{
									set_ped_as_group_member(*uParam0.f_17[iVar0], func_211());
								}
							}
							else if (is_bit_set(*uParam0.f_13, 21))
							{
								remove_ped_from_group(*uParam0.f_17[iVar0]);
								set_bit(uParam0.f_13, 21);
							}
						}
						else if (is_ped_group_member(*uParam0.f_17[iVar0], func_211()) && !is_entity_on_fire(iParam10))
						{
							remove_ped_from_group(*uParam0.f_17[iVar0]);
						}
					}
				}
				else if (does_blip_exist(*uParam0.f_1[iVar0]))
				{
					remove_blip(uParam0.f_1[iVar0]);
					func_238(uVar15[iVar0]);
				}
			}
			iVar0++;
		}
		iVar0 = false;
		while (iVar0 < 3)
		{
			if (does_blip_exist(*uParam0.f_1[iVar0]))
			{
				iVar7[iVar0] = 1;
				iVar1++;
			}
			iVar0++;
		}
		if (!func_233(uParam0, 2))
		{
			if (iVar1 > 0)
			{
				iVar0 = false;
				while (iVar0 < 3)
				{
					if (iVar7[iVar0])
					{
						if (!is_ped_injured(*uParam0.f_17[iVar0]))
						{
							if (func_249(*uParam0.f_17[iVar0]) || is_entity_at_entity(*uParam0.f_17[iVar0], player_ped_id(), *uParam0.f_8, *uParam0.f_8, *uParam0.f_8, 0, 1, 0))
							{
								iVar1--;
								iVar7[iVar0] = 0;
							}
						}
					}
					else if (!is_ped_injured(*uParam0.f_17[iVar0]))
					{
						if (!is_entity_at_entity(*uParam0.f_17[iVar0], player_ped_id(), *uParam0.f_8 * 0.85f, *uParam0.f_8 * 0.85f, *uParam0.f_8, 0, 1, 0) && !func_249(*uParam0.f_17[iVar0]))
						{
						}
					}
					iVar0++;
				}
			}
			iVar5 = get_game_timer();
			if (iVar5 - *uParam0.f_11 > 1500 || iVar3 == 1)
			{
				if (iVar1 > 0)
				{
					if (*uParam0.f_12 < iVar1)
					{
						if ((iVar1 == iVar3 || iVar2 + iVar1 == iVar3) && iVar3 > 1)
						{
							if (!is_bit_set(*uParam0.f_13, 5))
							{
								func_231(uParam0, sParam7, 0);
								set_bit(uParam0.f_13, 5);
								*uParam0.f_12 = iVar1;
							}
							else
							{
								*uParam0.f_12 = iVar1;
							}
						}
						else
						{
							iVar0 = false;
							while (iVar0 < 3)
							{
								if (iVar7[iVar0])
								{
									if (!func_243(iVar0, uParam0))
									{
										if (!is_string_null(uVar19[iVar0]))
										{
											if (!are_strings_equal(uVar19[iVar0], ""))
											{
												func_241(uParam0, uVar15[iVar0], uVar19[iVar0], 0);
												func_240(iVar0, uParam0);
												*uParam0.f_12 = iVar1;
											}
										}
										if (!func_243(iVar0, uParam0))
										{
											func_231(uParam0, uVar15[iVar0], 0);
											func_240(iVar0, uParam0);
											*uParam0.f_12 = iVar1;
										}
									}
									else
									{
										*uParam0.f_12 = iVar1;
									}
								}
								iVar0++;
							}
						}
					}
				}
				else
				{
					*uParam0.f_12 = 0;
				}
			}
		}
		clear_bit(uParam0.f_13, 10);
		if (iVar6 && !iVar12)
		{
			iVar0 = false;
			while (iVar0 < 3)
			{
				if (does_blip_exist(*uParam0.f_1[iVar0]))
				{
					remove_blip(uParam0.f_1[iVar0]);
					func_238(uVar15[iVar0]);
				}
				iVar0++;
			}
			func_238("MORE_SEATS");
			return true;
		}
	}
	return false;
}

void func_240(int iParam0, auto uParam1)
{
	switch (iParam0)
	{
		case 0:
			set_bit(uParam1.f_13, 14);
			break;
		
		case 1:
			set_bit(uParam1.f_13, 15);
			break;
		
		case 2:
			set_bit(uParam1.f_13, 16);
			break;
	}
}

void func_241(auto uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (!iParam3)
	{
		if (!is_string_null(sParam1))
		{
			if (!are_strings_equal(sParam1, ""))
			{
				func_242(sParam1, sParam2, 7500, 1);
			}
		}
	}
	*uParam0.f_10 = get_game_timer();
}

void func_242(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	_set_text_entry_2(sParam0);
	_add_text_component_item_string(sParam1);
	_draw_subtitle_timed(iParam2, 1);
}

int func_243(int iParam0, auto uParam1)
{
	switch (iParam0)
	{
		case 0:
			return is_bit_set(*uParam1.f_13, 14);
		
		case 1:
			return is_bit_set(*uParam1.f_13, 15);
		
		case 2:
			return is_bit_set(*uParam1.f_13, 16);
		
		default:
	}
	return false;
}

bool func_244(int iParam0, float fParam1)
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

bool func_245(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!is_ped_injured(iParam0))
	{
		if (!is_ped_group_member(iParam0, func_211()))
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

bool func_246(int iParam0, int iParam1)
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

void func_247(int iParam0, auto uParam1)
{
	switch (iParam0)
	{
		case 0:
			set_bit(uParam1.f_13, 17);
			break;
		
		case 1:
			set_bit(uParam1.f_13, 18);
			break;
		
		case 2:
			set_bit(uParam1.f_13, 19);
			break;
	}
}

int func_248(int iParam0, auto uParam1)
{
	switch (iParam0)
	{
		case 0:
			return is_bit_set(*uParam1.f_13, 17);
		
		case 1:
			return is_bit_set(*uParam1.f_13, 18);
		
		case 2:
			return is_bit_set(*uParam1.f_13, 19);
		
		default:
	}
	return false;
}

bool func_249(int iParam0)
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

bool func_250(int iParam0, auto uParam1)
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
				if (!is_ped_injured(*uParam1.f_17[iVar2]))
				{
					iVar0++;
				}
				iVar2++;
			}
			iVar3 = get_ped_in_vehicle_seat(iParam0, false);
			if (!is_ped_injured(iVar3))
			{
				if ((iVar3 == *uParam1.f_17[0] || iVar3 == *uParam1.f_17[1]) || iVar3 == *uParam1.f_17[2])
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
				if ((iVar4 == *uParam1.f_17[0] || iVar4 == *uParam1.f_17[1]) || iVar4 == *uParam1.f_17[2])
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
				if ((iVar5 == *uParam1.f_17[0] || iVar5 == *uParam1.f_17[1]) || iVar5 == *uParam1.f_17[2])
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

bool func_251(auto uParam0)
{
	int iVar0;
	
	if (is_ped_sitting_in_any_vehicle(player_ped_id()))
	{
		iVar0 = get_vehicle_ped_is_in(player_ped_id(), 0);
		if (func_237(iVar0, uParam0, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_252(auto uParam0, int iParam1, float fParam2, int iParam3)
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
						if (func_251(uParam0))
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
					if (func_237(iVar0, uParam0, 0))
					{
						if (is_vehicle_driveable(iVar0, 0))
						{
							if (func_253(iVar0))
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

bool func_253(int iParam0)
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

bool func_254(int iParam0, int iParam1)
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

void func_255()
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

void func_256(auto uParam0)
{
	int iVar0;
	
	if (!is_bit_set(*uParam0.f_13, 25))
	{
		if (is_player_playing(player_id()))
		{
			PED::SET_PED_CONFIG_FLAG(player_ped_id(), 32, false);
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (does_entity_exist(*uParam0.f_17[iVar0]))
			{
				if (!is_ped_injured(*uParam0.f_17[iVar0]))
				{
					PED::SET_PED_CONFIG_FLAG(*uParam0.f_17[iVar0], 32, false);
					PED::SET_PED_CONFIG_FLAG(*uParam0.f_17[iVar0], 305, true);
					PED::SET_PED_CONFIG_FLAG(*uParam0.f_17[iVar0], 268, true);
					set_ped_get_out_upside_down_vehicle(*uParam0.f_17[iVar0], 0);
				}
			}
			iVar0++;
		}
		set_bit(uParam0.f_13, 25);
	}
}

void func_257(auto uParam0)
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

Vector3 func_258()
{
	Vector3 vVar0;
	
	return vVar0;
}

bool func_259(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		if (Local_2515[iVar0 /*6*/] == iParam0)
		{
			if (Local_2515[iVar0 /*6*/].f_1 == 1)
			{
				Local_2515[iVar0 /*6*/].f_2 = iParam1;
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_260()
{
	int iVar0;
	int iVar1;
	
	set_ped_density_multiplier_this_frame(0f);
	set_scenario_ped_density_multiplier_this_frame(0f, 0f);
	switch (iLocal_2512)
	{
		case 0:
			iLocal_2506 = get_players_last_vehicle();
			set_player_control(player_id(), false, 0);
			if (func_204())
			{
				request_anim_dict("MISSChinese2_crystalMazeMCS1_IG");
				request_model(joaat("ig_old_man2"));
				request_model(joaat("ig_old_man1a"));
				request_model(joaat("ig_janet"));
				request_model(joaat("ig_taocheng"));
				request_model(joaat("ig_taostranslator"));
				request_anim_dict("misschinese2_crystalmaze");
				request_anim_dict("missrampageintrooutro");
				set_ped_stealth_movement(player_ped_id(), 0, 0);
				func_186(1, 1, 1, 0);
				if (does_entity_exist(Global_88108.f_9[0]))
				{
					Local_755[14 /*33*/] = Global_88108.f_9[2];
					Local_755[13 /*33*/] = Global_88108.f_9[1];
					Local_755[11 /*33*/] = Global_88108.f_9[4];
					Local_755[10 /*33*/] = Global_88108.f_9[3];
					Local_755[12 /*33*/] = Global_88108.f_9[0];
					set_entity_as_mission_entity(Local_755[14 /*33*/], true, 1);
					set_entity_as_mission_entity(Local_755[13 /*33*/], true, 1);
					set_entity_as_mission_entity(Local_755[11 /*33*/], true, 1);
					set_entity_as_mission_entity(Local_755[10 /*33*/], true, 1);
					set_entity_as_mission_entity(Local_755[12 /*33*/], true, 1);
					if (!is_ped_injured(Local_755[13 /*33*/]))
					{
						register_entity_for_cutscene(Local_755[13 /*33*/], "Old_Man1A", 0, joaat("ig_old_man1a"), 0);
					}
					if (!is_ped_injured(Local_755[14 /*33*/]))
					{
						register_entity_for_cutscene(Local_755[14 /*33*/], "Old_Man2", 0, joaat("ig_old_man2"), 0);
					}
					if (!is_ped_injured(Local_755[11 /*33*/]))
					{
						register_entity_for_cutscene(Local_755[11 /*33*/], "tao", 0, joaat("ig_taocheng"), 0);
					}
					if (!is_ped_injured(Local_755[10 /*33*/]))
					{
						register_entity_for_cutscene(Local_755[10 /*33*/], "Taos_Translator", 0, joaat("ig_taostranslator"), 0);
					}
					if (!is_ped_injured(Local_755[12 /*33*/]))
					{
						register_entity_for_cutscene(Local_755[12 /*33*/], "Janet", 0, joaat("ig_janet"), 0);
					}
				}
				else
				{
					Local_755[13 /*33*/] = PED::CREATE_PED(26, joaat("ig_old_man1a"), 1987.231f, 3052.741f, 46.214f, 0, 1, true);
					register_entity_for_cutscene(Local_755[13 /*33*/], "Old_Man1A", 0, joaat("ig_old_man1a"), 0);
					Local_755[14 /*33*/] = PED::CREATE_PED(26, joaat("ig_old_man2"), 1987.231f, 3052.741f, 46.214f, 0, 1, true);
					register_entity_for_cutscene(Local_755[14 /*33*/], "Old_Man2", 0, joaat("ig_old_man2"), 0);
					if (does_entity_exist(Local_755[11 /*33*/]))
					{
						if (!is_ped_injured(Local_755[11 /*33*/]))
						{
							register_entity_for_cutscene(Local_755[11 /*33*/], "tao", 0, joaat("ig_taocheng"), 0);
						}
					}
					else
					{
						register_entity_for_cutscene(Local_755[11 /*33*/], "tao", 2, joaat("ig_taocheng"), 0);
					}
					register_entity_for_cutscene(Local_755[10 /*33*/], "Taos_Translator", 2, joaat("ig_taostranslator"), 0);
					Local_755[12 /*33*/] = PED::CREATE_PED(26, joaat("ig_janet"), 1987.231f, 3052.741f, 46.214f, 0, 1, true);
					register_entity_for_cutscene(Local_755[12 /*33*/], "Janet", 0, joaat("ig_janet"), 0);
				}
				func_262();
				start_cutscene(0);
				_0x48621C9FCA3EBD28(4);
				clear_area_of_peds(1991.22f, 3054.884f, 50.27741f, 87f, 0);
				clear_area_of_projectiles(1991.22f, 3054.884f, 50.27741f, 87f, 0);
				add_scenario_blocking_area(Vector(50.27741f, 3054.884f, 1991.22f) - Vector(40f, 40f, 40f), Vector(50.27741f, 3054.884f, 1991.22f) + Vector(40f, 40f, 40f), 0, 1, 1, 1);
				set_ped_non_creation_area(Vector(50.27741f, 3054.884f, 1991.22f) - Vector(40f, 40f, 40f), Vector(50.27741f, 3054.884f, 1991.22f) + Vector(0f, 40f, 40f));
				func_32(0, 0);
				func_32(26, 0);
				iLocal_3689 = 0;
				iLocal_2512++;
			}
			break;
		
		case 1:
			if (is_cutscene_playing())
			{
				if (is_screen_faded_out())
				{
					do_screen_fade_in(1000);
				}
				iLocal_2512++;
			}
			break;
		
		case 2:
			if (is_cutscene_playing())
			{
				if (iLocal_3689 == 0)
				{
					func_261(13);
					iLocal_3689++;
				}
			}
			if (!does_entity_exist(Local_755[13 /*33*/]))
			{
				if (can_set_exit_state_for_registered_entity("Old_Man1A", false))
				{
					Local_755[13 /*33*/] = get_ped_index_from_entity_index(get_entity_index_of_registered_entity("Old_Man1A", false));
				}
			}
			if (!does_entity_exist(Local_755[14 /*33*/]))
			{
				if (can_set_exit_state_for_registered_entity("Old_Man2", false))
				{
					Local_755[14 /*33*/] = get_ped_index_from_entity_index(get_entity_index_of_registered_entity("Old_Man2", false));
				}
			}
			if (!does_entity_exist(Local_755[11 /*33*/]))
			{
				if (can_set_exit_state_for_registered_entity("tao", false))
				{
					Local_755[11 /*33*/] = get_ped_index_from_entity_index(get_entity_index_of_registered_entity("tao", false));
				}
			}
			if (!does_entity_exist(Local_755[10 /*33*/]))
			{
				if (can_set_exit_state_for_registered_entity("Taos_Translator", false))
				{
					Local_755[10 /*33*/] = get_ped_index_from_entity_index(get_entity_index_of_registered_entity("Taos_Translator", false));
				}
			}
			if (!does_entity_exist(Local_755[12 /*33*/]))
			{
				if (can_set_exit_state_for_registered_entity("Janet", false))
				{
					Local_755[12 /*33*/] = get_ped_index_from_entity_index(get_entity_index_of_registered_entity("Janet", false));
				}
			}
			if (can_set_exit_state_for_registered_entity("tao", false))
			{
				if (!is_ped_injured(Local_755[11 /*33*/]))
				{
					PED::PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_755[11 /*33*/], iLocal_1618);
					set_ped_can_be_targetted(Local_755[11 /*33*/], false);
					iVar0 = create_synchronized_scene(1991.988f, 3054.51f, 46.215f, 0f, 0f, 50.76f, 2);
					task_synchronized_scene(Local_755[11 /*33*/], iVar0, "misschinese2_crystalmaze", "2int_Loop_A_TaoCheng", 1000f, -4f, 1, 16, 1000f, 0);
				}
			}
			if (can_set_exit_state_for_registered_entity("Taos_Translator", false))
			{
				if (!is_ped_injured(Local_755[10 /*33*/]))
				{
					PED::PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_755[10 /*33*/], iLocal_1618);
					set_ped_can_be_targetted(Local_755[10 /*33*/], false);
					iVar1 = create_synchronized_scene(1991.988f, 3054.51f, 46.215f, 0f, 0f, 50.76f, 2);
					task_synchronized_scene(Local_755[10 /*33*/], iVar1, "misschinese2_crystalmaze", "2int_Loop_A_taotranslator", 1000f, -4f, 1, 16, 1000f, 0);
				}
			}
			if (can_set_exit_state_for_registered_entity("Trevor", false))
			{
				iLocal_2506 = get_players_last_vehicle();
				if (func_68(iLocal_2506) && func_67(iLocal_2506, 1995.202f, 3062.156f, 46.0491f, 1) < 5f)
				{
					set_ped_into_vehicle(player_ped_id(), iLocal_2506, -1);
					_0x2208438012482A1A(player_ped_id(), 0, 0);
					remove_vehicle_asset(get_entity_model(iLocal_2506));
				}
				else if (has_anim_dict_loaded("missrampageintrooutro"))
				{
					set_entity_coords(player_ped_id(), 1992.135f, 3057.467f, 46.06f, 1, false, 0, 1);
					set_entity_heading(player_ped_id(), 325.4678f);
					task_play_anim(player_ped_id(), "missrampageintrooutro", "trvram_6_1h_run_outro", 1000f, -4f, -1, 0, 0.1f, 0, 0, 0);
					_0x2208438012482A1A(player_ped_id(), 1, 0);
				}
				else
				{
					set_entity_coords(player_ped_id(), 1992.919f, 3057.906f, 46.0567f, 1, false, 0, 1);
					set_entity_heading(player_ped_id(), 337.2537f);
					force_ped_motion_state(player_ped_id(), -668482597, false, 0, 0);
					set_ped_min_move_blend_ratio(player_ped_id(), 1f);
					_0x2208438012482A1A(player_ped_id(), 1, 0);
				}
			}
			if (can_set_exit_state_for_camera(0))
			{
				_0xE3E2C1B4C59DBC77(6);
				func_186(0, 1, 1, 0);
				set_player_control(player_id(), true, 0);
				set_gameplay_cam_relative_heading(0f);
				set_gameplay_cam_relative_pitch(-7f, 1f);
				if (is_screen_faded_out())
				{
					load_scene(1992.135f, 3057.467f, 46.06f);
				}
				_0x81CBAE94390F9F89();
				_0x293220DA1B46CEBC(0f, 7f, 3);
				func_176(11);
			}
			break;
	}
}

void func_261(int iParam0)
{
	if (Global_88533 != -1)
	{
		if (iParam0 == Global_88533)
		{
			Global_88537 = 1;
			return;
		}
	}
}

void func_262()
{
	int iVar0;
	
	if (!is_entity_dead(player_ped_id(), 0))
	{
		set_entity_proofs(player_ped_id(), false, false, false, false, false, false, 0, false);
		PED::SET_PED_CONFIG_FLAG(player_ped_id(), 157, true);
		set_entity_invincible(player_ped_id(), false);
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (does_entity_exist(Global_88980[iVar0]))
		{
			if (!is_entity_dead(Global_88980[iVar0], 0))
			{
				set_entity_proofs(Global_88980[iVar0], false, false, false, false, false, false, 0, false);
				set_entity_invincible(Global_88980[iVar0], false);
			}
		}
		iVar0++;
	}
	if ((Global_35711 != 0 && Global_35711 != 3) && Global_35711 != 2)
	{
		set_max_wanted_level(5);
		set_wanted_level_multiplier(1f);
	}
}

void func_263()
{
	int iVar0;
	
	switch (iLocal_2512)
	{
		case 0:
			request_additional_text("FRMCHSE", false);
			while (!has_additional_text_loaded(false))
			{
				func_28(27, 1);
			}
			func_56(&uLocal_2708, 0, player_ped_id(), "TREVOR", 0, 1);
			func_56(&uLocal_2708, 8, 0, "PED8", 0, 1);
			func_32(9, 1);
			func_32(29, 1);
			func_32(21, 1);
			func_347();
			stop_fire_in_range(2442.69f, 4970.348f, 46.33f, 30f);
			_set_weather_type_over_time("EXTRASUNNY", 120f);
			vLocal_2889[0 /*3*/] = {2428.47f, 4968.91f, 42.11f};
			vLocal_2889[1 /*3*/] = {2431.14f, 4972.06f, 42.19f};
			vLocal_2889[2 /*3*/] = {2433.05f, 4969.22f, 42.26f};
			vLocal_2889[3 /*3*/] = {2437.71f, 4968.13f, 42.45f};
			vLocal_2889[4 /*3*/] = {2436.12f, 4964.76f, 42.19f};
			vLocal_2889[5 /*3*/] = {2432.13f, 4961.97f, 41.35f};
			vLocal_2889[6 /*3*/] = {2430.07f, 4963.78f, 41.35f};
			vLocal_2889[7 /*3*/] = {2434f, 4963.04f, 41.53f};
			vLocal_2889[8 /*3*/] = {2435.637f, 4969.699f, 42.19639f};
			Local_444[0 /*5*/] = {2450.376f, 4955.83f, 43.9394f};
			Local_444[1 /*5*/] = {2449.815f, 4956.678f, 43.9894f};
			Local_444[2 /*5*/] = {2449.606f, 4957.675f, 44.0646f};
			Local_444[3 /*5*/] = {2449.739f, 4958.731f, 44.1544f};
			Local_444[4 /*5*/] = {2450.141f, 4959.745f, 44.2487f};
			Local_444[5 /*5*/] = {2450.685f, 4960.582f, 44.3219f};
			Local_444[6 /*5*/] = {2451.492f, 4961.333f, 44.4439f};
			Local_444[7 /*5*/] = {2452.174f, 4962.099f, 44.5787f};
			Local_444[8 /*5*/] = {2452.717f, 4962.906f, 44.9141f};
			Local_444[9 /*5*/] = {2453.35f, 4963.579f, 45.3558f};
			Local_444[10 /*5*/] = {2453.754f, 4964.565f, 45.5766f};
			Local_444[11 /*5*/] = {2453.226f, 4965.539f, 45.5766f};
			Local_444[12 /*5*/] = {2452.472f, 4966.293f, 45.5766f};
			Local_444[13 /*5*/] = {2451.869f, 4967.104f, 45.5766f};
			Local_444[14 /*5*/] = {2451.529f, 4968.083f, 45.5766f};
			Local_444[15 /*5*/] = {2452.327f, 4968.712f, 45.5766f};
			Local_444[16 /*5*/] = {2452.796f, 4969.643f, 45.8107f};
			Local_444[17 /*5*/] = {2453.261f, 4970.541f, 45.8106f};
			Local_444[18 /*5*/] = {2453.58f, 4971.548f, 45.8104f};
			Local_444[19 /*5*/] = {2452.808f, 4972.267f, 45.8306f};
			Local_444[20 /*5*/] = {2452.049f, 4972.928f, 45.8306f};
			Local_444[21 /*5*/] = {2451.241f, 4973.599f, 45.8306f};
			Local_444[22 /*5*/] = {2450.248f, 4973.889f, 45.8306f};
			Local_444[23 /*5*/] = {2449.207f, 4973.784f, 45.8105f};
			Local_444[24 /*5*/] = {2448.172f, 4973.814f, 45.8106f};
			Local_444[25 /*5*/] = {2447.153f, 4973.771f, 45.8106f};
			Local_444[26 /*5*/] = {2446.138f, 4973.724f, 45.8106f};
			Local_444[27 /*5*/] = {2445.128f, 4973.689f, 45.8106f};
			Local_444[28 /*5*/] = {2444.256f, 4973.056f, 45.8106f};
			Local_444[29 /*5*/] = {2443.669f, 4972.194f, 45.8106f};
			Local_444[30 /*5*/] = {2443.119f, 4971.275f, 45.8106f};
			Local_444[31 /*5*/] = {2442.661f, 4970.359f, 45.8106f};
			Local_444[32 /*5*/] = {2442.267f, 4969.425f, 45.8106f};
			Local_444[33 /*5*/] = {2441.708f, 4968.502f, 45.8306f};
			Local_444[34 /*5*/] = {2441.264f, 4967.534f, 45.8106f};
			Local_444[35 /*5*/] = {2440.873f, 4966.538f, 45.8106f};
			Local_444[36 /*5*/] = {2440.382f, 4965.634f, 45.8106f};
			Local_444[37 /*5*/] = {2439.71f, 4964.882f, 45.8106f};
			Local_444[38 /*5*/] = {2438.933f, 4964.146f, 45.8106f};
			Local_444[39 /*5*/] = {2438.166f, 4963.502f, 45.8106f};
			Local_444[40 /*5*/] = {2437.555f, 4962.709f, 45.8106f};
			Local_444[41 /*5*/] = {2436.901f, 4961.95f, 45.8106f};
			Local_444[42 /*5*/] = {2436.075f, 4961.257f, 45.8106f};
			Local_444[43 /*5*/] = {2435.08f, 4961.004f, 45.8118f};
			Local_444[44 /*5*/] = {2434.066f, 4960.713f, 45.8181f};
			Local_444[45 /*5*/] = {2433.045f, 4960.594f, 45.8192f};
			Local_444[46 /*5*/] = {2432.065f, 4960.25f, 45.813f};
			Local_444[47 /*5*/] = {2431.233f, 4960.809f, 45.8089f};
			Local_444[48 /*5*/] = {2430.575f, 4961.574f, 45.5917f};
			Local_444[49 /*5*/] = {2429.889f, 4962.028f, 44.9345f};
			Local_444[50 /*5*/] = {2429.26f, 4962.595f, 44.2774f};
			Local_444[51 /*5*/] = {2428.691f, 4963.279f, 43.6202f};
			Local_444[52 /*5*/] = {2428.073f, 4963.911f, 42.9631f};
			Local_444[53 /*5*/] = {2428.239f, 4964.922f, 42.9631f};
			Local_444[54 /*5*/] = {2428.961f, 4965.455f, 42.3059f};
			Local_444[55 /*5*/] = {2429.45f, 4966.224f, 41.8679f};
			Local_444[56 /*5*/] = {2430.073f, 4966.82f, 41.3476f};
			Local_444[57 /*5*/] = {2431.097f, 4967.043f, 41.3476f};
			Local_444[58 /*5*/] = {2431.89f, 4966.403f, 41.3476f};
			Local_444[59 /*5*/] = {2432.768f, 4965.902f, 41.3476f};
			Local_444[60 /*5*/] = {2433.776f, 4965.613f, 41.3476f};
			Local_2343[0 /*6*/].f_3 = "Table Flames";
			Local_2343[0 /*6*/] = 0;
			Local_2343[1 /*6*/].f_3 = "Table Explosion";
			Local_2343[1 /*6*/] = 0;
			Local_2343[2 /*6*/].f_3 = "House Explosion";
			Local_2343[2 /*6*/] = 0;
			Local_2343[3 /*6*/].f_3 = "Cam Shake";
			Local_2343[3 /*6*/] = 0;
			Local_2343[4 /*6*/].f_3 = "Position player";
			Local_2343[4 /*6*/] = 0;
			Local_2343[5 /*6*/].f_3 = "Slow mo";
			Local_2343[5 /*6*/] = 0;
			Local_2343[0 /*6*/].f_1 = 2;
			Local_2343[0 /*6*/].f_2 = 1000f;
			Local_2343[1 /*6*/].f_1 = 2;
			Local_2343[1 /*6*/].f_2 = 4200f;
			Local_2343[2 /*6*/].f_1 = 3;
			Local_2343[2 /*6*/].f_2 = 0f;
			Local_2343[3 /*6*/].f_1 = 3;
			Local_2343[3 /*6*/].f_2 = 0f;
			Local_2343[4 /*6*/].f_1 = 3;
			Local_2343[4 /*6*/].f_2 = 3200f;
			Local_2343[5 /*6*/].f_1 = 3;
			Local_2343[5 /*6*/].f_2 = 700f;
			Local_2380[0 /*18*/] = {2454.83f, 4974.96f, 46.4489f};
			Local_2380[0 /*18*/].f_3 = {2.9627f, 0.077f, 115.874f};
			Local_2380[0 /*18*/].f_14 = 39.703f;
			Local_2380[0 /*18*/].f_6 = {2454.41f, 4974.93f, 46.4691f};
			Local_2380[0 /*18*/].f_9 = {2.6238f, 0.077f, 114.001f};
			Local_2380[0 /*18*/].f_15 = 39.703f;
			Local_2380[0 /*18*/].f_12 = 2500f;
			Local_2380[0 /*18*/].f_13 = 2500f;
			Local_2380[0 /*18*/].f_16 = 0;
			Local_2380[0 /*18*/].f_17 = 18;
			Local_2380[1 /*18*/] = {2435.41f, 4960.94f, 45.9568f};
			Local_2380[1 /*18*/].f_3 = {6.677f, 0f, -49.4853f};
			Local_2380[1 /*18*/].f_14 = 58.9114f;
			Local_2380[1 /*18*/].f_6 = {2435.11f, 4960.62f, 45.9441f};
			Local_2380[1 /*18*/].f_9 = {6.3596f, 0f, -44.8248f};
			Local_2380[1 /*18*/].f_15 = 58.9114f;
			Local_2380[1 /*18*/].f_12 = 3200f;
			Local_2380[1 /*18*/].f_13 = 1900f;
			Local_2380[1 /*18*/].f_16 = 0;
			Local_2380[1 /*18*/].f_17 = 34;
			Local_2380[2 /*18*/] = {2434.77f, 4969.56f, 42.3654f};
			Local_2380[2 /*18*/].f_3 = {5.2773f, -0.1511f, 132.167f};
			Local_2380[2 /*18*/].f_14 = 35.1297f;
			Local_2380[2 /*18*/].f_6 = {2434.66f, 4969.68f, 42.3657f};
			Local_2380[2 /*18*/].f_9 = {5.2773f, -0.1511f, 132.167f};
			Local_2380[2 /*18*/].f_15 = 35.1297f;
			Local_2380[2 /*18*/].f_12 = 3500f;
			Local_2380[2 /*18*/].f_13 = 4500f;
			Local_2380[2 /*18*/].f_16 = 3;
			Local_2380[2 /*18*/].f_17 = 49;
			Local_2380[3 /*18*/] = {2472.1f, 4943.1f, 45.3f};
			Local_2380[3 /*18*/].f_3 = {6f, 0f, 25.3f};
			Local_2380[3 /*18*/].f_14 = 33.1297f;
			Local_2380[3 /*18*/].f_6 = {2472.1f, 4943.1f, 45.3f};
			Local_2380[3 /*18*/].f_9 = {5.5f, 0f, 35.6f};
			Local_2380[3 /*18*/].f_15 = 33.1297f;
			Local_2380[3 /*18*/].f_12 = 3500f;
			Local_2380[3 /*18*/].f_13 = 3500f;
			Local_2380[3 /*18*/].f_16 = 0;
			Local_2380[3 /*18*/].f_17 = -1;
			fLocal_2639 = 0.06f;
			func_166(1);
			vLocal_2465[0 /*3*/] = {2432.74f, 4963.43f, 41.35f};
			vLocal_2465[1 /*3*/] = {2432.02f, 4962.61f, 41.35f};
			vLocal_2465[2 /*3*/] = {2431.06f, 4961.83f, 41.35f};
			vLocal_2465[3 /*3*/] = {2430.84f, 4961.08f, 42.09f};
			vLocal_2465[4 /*3*/] = {2430.53f, 4962.47f, 42f};
			vLocal_2465[5 /*3*/] = {2430.81f, 4961.1f, 42.8f};
			vLocal_2465[6 /*3*/] = {2429.74f, 4961.98f, 42.32f};
			vLocal_2465[7 /*3*/] = {2433.5f, 4966.76f, 41.35f};
			vLocal_2465[8 /*3*/] = {2433.24f, 4967.42f, 41.35f};
			vLocal_2465[9 /*3*/] = {2433.15f, 4967.43f, 42.19f};
			vLocal_2465[10 /*3*/] = {2432.53f, 4967.89f, 42.4f};
			vLocal_2465[11 /*3*/] = {2432.48f, 4969.07f, 42.19f};
			vLocal_2465[12 /*3*/] = {2433.36f, 4969.44f, 42.31f};
			vLocal_2274[0 /*3*/] = {2552.692f, 4978.566f, 45.32309f};
			vLocal_2274[1 /*3*/] = {2562.534f, 5013.502f, 47.46302f};
			vLocal_2274[2 /*3*/] = {2553.885f, 4945.661f, 47.49305f};
			vLocal_2274[3 /*3*/] = {2515.545f, 4936.428f, 42.88382f};
			vLocal_2274[4 /*3*/] = {2497.318f, 4967.818f, 43.59557f};
			vLocal_2274[5 /*3*/] = {2481.376f, 4951.766f, 43.99859f};
			vLocal_2274[6 /*3*/] = {2522.044f, 4956.372f, 43.71605f};
			vLocal_2274[7 /*3*/] = {2529.048f, 4985.627f, 43.86848f};
			vLocal_2274[8 /*3*/] = {2502.503f, 4987.245f, 46.62669f};
			vLocal_2274[9 /*3*/] = {2464.891f, 4939.949f, 44.25646f};
			vLocal_2274[10 /*3*/] = {2447.16f, 4940.272f, 44.15766f};
			vLocal_2274[11 /*3*/] = {2376.537f, 4946.399f, 41.77232f};
			vLocal_2274[12 /*3*/] = {2395.232f, 4995.63f, 44.68909f};
			vLocal_2274[13 /*3*/] = {2419.819f, 4991.936f, 45.36976f};
			vLocal_2274[14 /*3*/] = {2436.319f, 5011.725f, 45.84694f};
			vLocal_2274[15 /*3*/] = {2407.765f, 5023.079f, 47.77091f};
			vLocal_2274[16 /*3*/] = {2479.016f, 5028.829f, 42.98806f};
			vLocal_2274[17 /*3*/] = {2434.704f, 5042.713f, 45.34462f};
			vLocal_2274[18 /*3*/] = {2513.93f, 5039.333f, 51.02121f};
			vLocal_2274[19 /*3*/] = {2477.882f, 4986.437f, 44.99511f};
			vLocal_2274[20 /*3*/] = {2450.058f, 5011.858f, 44.89032f};
			func_203(&Local_1619, &uLocal_2708, sLocal_2338, 12f, 2482.197f, 4975.367f, 44.7288f, 121f, 1);
			func_346(&vLocal_2244, "ONEILGUARD4", 5, "ONEILGUARD1");
			func_346(&vLocal_2247, "ONEILGUARD4", 5, "ONEILGUARD1");
			func_346(&vLocal_2259, "CHI2_nope", 8, "ONEILGUARD1");
			func_346(&vLocal_2250, "SEETREVOR", 3, "chin2goon1");
			func_346(&vLocal_2253, "CHI2_hear", 8, "ONEILGUARD1");
			func_346(&vLocal_2256, "CHI2_hear", 8, "ONEILGUARD1");
			func_346(&vLocal_2262, "ONEILGUARD3", 5, "ONEILGUARD1");
			func_346(&vLocal_2265, "ONEILGUARD2", 5, "ONEILGUARD1");
			func_346(&vLocal_2268, "ONEILGUARD4", 5, "ONEILGUARD1");
			func_346(&vLocal_2271, "GOON2TREV", 4, "CHIN2goon2");
			func_32(6, 1);
			func_32(25, 1);
			iLocal_2506 = _0xB2D06FAEDE65B577();
			set_vehicle_model_is_suppressed(joaat("bodhi2"), true);
			add_relationship_group("TAOGROUP", &iLocal_1618);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_1618, 1862763509);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, iLocal_1618);
			func_17(0, -1);
			set_scenario_group_enabled("Chinese2_Lunch", false);
			set_scenario_group_enabled("CHINESE2_HILLBILLIES", false);
			if (func_345())
			{
				iVar0 = func_344();
				if (Global_85788 == 1)
				{
					iVar0++;
				}
				switch (iVar0)
				{
					case 0:
						func_264(2, 1, 0);
						do_screen_fade_in(1000);
						break;
					
					case 1:
						if (Global_85788 == 1)
						{
							func_264(3, 1, 0);
						}
						else
						{
							func_264(4, 1, 0);
							do_screen_fade_in(1000);
						}
						break;
					
					case 2:
						func_264(6, 1, 0);
						do_screen_fade_in(1000);
						break;
					
					case 3:
						func_264(7, 1, 0);
						do_screen_fade_in(1000);
						break;
					
					case 4:
						if (Global_85788 == 1)
						{
							func_264(8, 1, 0);
						}
						else
						{
							func_264(9, 1, 0);
							do_screen_fade_in(1000);
						}
						break;
					
					case 5:
						func_264(10, 1, 0);
						do_screen_fade_in(1000);
						func_144();
						break;
				}
			}
			else if (func_141(0))
			{
				func_264(1, 0, 1);
			}
			else
			{
				func_176(11);
			}
			break;
	}
}

void func_264(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	func_339(3);
	func_32(6, 0);
	iLocal_2512 = 0;
	iLocal_2511 = iParam0;
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			request_model(joaat("ig_old_man2"));
			request_model(joaat("ig_old_man1a"));
			request_model(joaat("ig_janet"));
			request_model(joaat("ig_taocheng"));
			request_model(joaat("ig_taostranslator"));
			request_cutscene("chinese_2_int", 8);
			while (((((!has_model_loaded(joaat("ig_old_man2")) || !has_model_loaded(joaat("ig_old_man1a"))) || !has_model_loaded(joaat("ig_janet"))) || !has_model_loaded(joaat("ig_taocheng"))) || !has_model_loaded(joaat("ig_taostranslator"))) || !has_cutscene_loaded())
			{
				func_28(323, 1);
			}
			while (!func_336(&(Local_755[11 /*33*/]), 21, 1985.666f, 3052.661f, 46.2151f, 0, 1))
			{
				wait(0);
			}
			set_entity_coords(player_ped_id(), 1992.878f, 3057.846f, 46.0568f, 1, false, 0, 1);
			set_entity_heading(player_ped_id(), 311f);
			set_ped_component_variation(Local_755[11 /*33*/], 9, 1, 0, 0);
			break;
		
		case 2:
			if (iParam1)
			{
				func_335(1992.878f, 3057.846f, 46.0568f, 311f, 1, 0);
			}
			else
			{
				if (func_68(iLocal_2506))
				{
					set_entity_coords(iLocal_2506, 1994.387f, 3061.94f, 46.0491f, 1, false, 0, 1);
					set_entity_heading(iLocal_2506, 50.7724f);
				}
				set_gameplay_cam_relative_heading(0f);
				set_gameplay_cam_relative_pitch(-7f, 1f);
				load_scene(1992.878f, 3057.846f, 46.0568f);
			}
			add_scenario_blocking_area(Vector(50.27741f, 3054.884f, 1991.22f) - Vector(40f, 40f, 40f), Vector(50.27741f, 3054.884f, 1991.22f) + Vector(40f, 40f, 40f), 0, 1, 1, 1);
			set_ped_non_creation_area(Vector(50.27741f, 3054.884f, 1991.22f) - Vector(40f, 40f, 40f), Vector(50.27741f, 3054.884f, 1991.22f) + Vector(0f, 40f, 40f));
			clear_area(1984.997f, 3052.905f, 46.8556f, 10f, 1, 0, 0, false);
			func_276(1, 0, iParam2);
			request_model(joaat("ig_taocheng"));
			request_model(joaat("ig_taostranslator"));
			request_model(joaat("ig_old_man1a"));
			request_model(joaat("ig_old_man2"));
			request_model(joaat("ig_janet"));
			request_anim_dict("misschinese2_crystalmaze");
			while (((((!has_model_loaded(joaat("ig_taocheng")) || !has_model_loaded(joaat("ig_taostranslator"))) || !has_model_loaded(joaat("ig_old_man1a"))) || !has_model_loaded(joaat("ig_old_man2"))) || !has_model_loaded(joaat("ig_janet"))) || !has_anim_dict_loaded("misschinese2_crystalmaze"))
			{
				func_28(3, 1);
			}
			if (!iParam1)
			{
				if (func_68(iLocal_2506))
				{
					set_ped_into_vehicle(player_ped_id(), iLocal_2506, -1);
					set_entity_coords(iLocal_2506, 1994.387f, 3061.94f, 46.0491f, 1, false, 0, 1);
					set_entity_heading(iLocal_2506, 50.7724f);
				}
				else
				{
					set_entity_coords(player_ped_id(), 1992.878f, 3057.846f, 46.0568f, 1, false, 0, 1);
					set_entity_heading(player_ped_id(), 311f);
				}
			}
			func_28(85, 1);
			func_160(2, 41, 0, 0, 0, 1, 0, 1, 0, 1, 0);
			while (func_169(2, 41) != 900)
			{
				func_160(2, 41, 0, 0, 0, 1, 0, 1, 0, 1, 0);
				func_28(4, 1);
			}
			func_32(26, 0);
			if (iParam1)
			{
				if (func_68(iLocal_2506))
				{
					func_273(iLocal_2506, -1, 1);
				}
				else
				{
					func_273(0, -1, 1);
				}
			}
			break;
		
		case 3:
			if (iParam1)
			{
				func_335(2574.049f, 4981.824f, 50.44f, 50f, 1, 0);
			}
			else
			{
				set_entity_coords(player_ped_id(), 2570.543f, 4982.002f, 50.6795f, 0, true, 0, 1);
				set_entity_heading(player_ped_id(), 98.21f);
				set_gameplay_cam_relative_heading(0f);
				set_gameplay_cam_relative_pitch(-7f, 1f);
				load_scene(2458.508f, 4984.504f, 52.3461f);
				func_28(323, 1);
			}
			set_vehicle_population_budget(1);
			set_ped_population_budget(1);
			set_wanted_level_multiplier(0f);
			func_276(0, 0, 0);
			prefetch_srl("chinese2_farmhouse_cutscene");
			func_28(34, 1);
			func_32(5, 0);
			while (func_30(5))
			{
				func_3();
				func_28(5, 1);
			}
			while (!func_223(1, 0, 1))
			{
				func_28(6, 1);
			}
			func_15("CHN2_MISSION_START", 1, "CHN2_EXPLODE");
			while (!func_2())
			{
				func_28(7, 1);
			}
			while (!is_srl_loaded())
			{
				func_28(878, 1);
			}
			if (iParam1)
			{
				func_273(0, -1, 1);
			}
			func_160(10, 5, 0, 0, 0, 1, 0, 1, 0, 1, 0);
			while (!func_147(10, 5))
			{
				func_160(10, 5, 0, 0, 0, 1, 0, 1, 0, 1, 0);
				func_28(234, 1);
			}
			break;
		
		case 4:
			if (iParam1)
			{
				func_335(func_272(), func_271(), 1, 0);
			}
			else
			{
				set_entity_coords(player_ped_id(), 2570.543f, 4982.002f, 50.6795f, 0, true, 0, 1);
				set_entity_heading(player_ped_id(), 98.21f);
				set_gameplay_cam_relative_heading(0f);
				set_gameplay_cam_relative_pitch(-7f, 1f);
				load_scene(2570.543f, 4982.002f, 50.6795f);
				func_28(323, 1);
			}
			set_vehicle_population_budget(1);
			set_ped_population_budget(1);
			func_276(0, 1, 0);
			set_wanted_level_multiplier(0f);
			func_32(5, 0);
			while (func_30(5))
			{
				func_3();
				func_28(8, 1);
			}
			iVar0 = func_270(2);
			if (iVar0 != 0 && iVar0 != joaat("weapon_unarmed"))
			{
				if (has_ped_got_weapon(player_ped_id(), iVar0, 0))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(player_ped_id(), iVar0, true);
				}
			}
			func_15("CHN2_MISSION_START", 1, "CHN2_EXPLODE");
			while (!func_2())
			{
				func_28(9, 1);
			}
			if (iParam1)
			{
				if ((does_entity_exist(iLocal_2506) && is_vehicle_driveable(iLocal_2506, 0)) && func_269())
				{
					func_273(iLocal_2506, -1, 1);
					if (is_vehicle_driveable(iLocal_2506, 0))
					{
						set_vehicle_engine_on(iLocal_2506, true, 1, 0);
						if (is_this_model_a_plane(get_entity_model(iLocal_2506)))
						{
							set_vehicle_forward_speed(iLocal_2506, 15f);
						}
						if (is_this_model_a_heli(get_entity_model(iLocal_2506)))
						{
							set_heli_blades_full_speed(iLocal_2506);
							set_entity_velocity(iLocal_2506, 1f, 1f, 1f);
						}
					}
				}
				else
				{
					func_273(0, -1, 1);
				}
			}
			if (get_distance_between_coords(func_272(), 2570.538f, 4982.031f, 50.6239f, 1) < 10f)
			{
				set_entity_coords(player_ped_id(), 2570.538f, 4982.031f, 50.6239f, 1, false, 0, 1);
				set_entity_heading(player_ped_id(), 98f);
			}
			if (!is_ped_in_any_vehicle(player_ped_id(), 0))
			{
				func_267(player_ped_id(), get_entity_coords(player_ped_id(), 1));
			}
			break;
		
		case 5:
			set_vehicle_population_budget(1);
			set_ped_population_budget(1);
			set_entity_coords(player_ped_id(), 2572.01f, 4981.678f, 50.6698f, 1, false, 0, 1);
			set_entity_heading(player_ped_id(), 90.3911f);
			set_gameplay_cam_relative_heading(0f);
			set_gameplay_cam_relative_pitch(0f, 1f);
			set_wanted_level_multiplier(0f);
			func_32(5, 0);
			func_166(1);
			while (func_30(5))
			{
				func_3();
				func_28(10, 1);
			}
			func_276(0, 0, 0);
			func_15("CHN2_TO_HOUSE_RESTART", 0, "CHN2_EXPLODE");
			while (!func_2())
			{
				func_28(11, 1);
			}
			func_266(0, 1, 1);
			set_gameplay_cam_relative_heading(0f);
			set_gameplay_cam_relative_pitch(-7f, 1f);
			break;
		
		case 6:
			if (iParam1)
			{
				func_335(2450.871f, 4960.999f, 44.3759f, 351f, 1, 0);
			}
			else
			{
				set_entity_coords(player_ped_id(), 2450.871f, 4960.999f, 44.3759f, 0, true, 0, 1);
				set_entity_heading(player_ped_id(), 351.3911f);
				load_scene(2432.982f, 4964.823f, 41.3476f);
				func_28(325, 1);
				set_gameplay_cam_relative_heading(0f);
				set_gameplay_cam_relative_pitch(-7f, 1f);
			}
			func_276(0, 0, 0);
			set_vehicle_population_budget(1);
			set_ped_population_budget(1);
			wait(1);
			func_32(5, 0);
			func_166(1);
			while (func_30(5))
			{
				func_3();
				func_28(12, 1);
			}
			set_wanted_level_multiplier(0f);
			func_15("CHN2_ENTER_HOUSE_RESTART", 0, "CHN2_EXPLODE");
			while (!func_2())
			{
				func_28(13, 1);
			}
			func_266(0, 1, 1);
			if (iParam1)
			{
				func_273(0, -1, 1);
			}
			if (!is_ped_in_any_vehicle(player_ped_id(), 0))
			{
				func_267(player_ped_id(), get_entity_coords(player_ped_id(), 1));
			}
			break;
		
		case 7:
			if (iParam1)
			{
				func_335(2435.319f, 4966.153f, 41.3476f, 104.2964f, 1, 0);
			}
			else
			{
				set_entity_coords(player_ped_id(), 2435.319f, 4966.153f, 41.3476f, 1, false, 0, 1);
				set_entity_heading(player_ped_id(), 104.2964f);
				load_scene(2432.982f, 4964.823f, 41.3476f);
				wait(1);
				set_gameplay_cam_relative_heading(0f);
				set_gameplay_cam_relative_pitch(-7f, 1f);
			}
			set_vehicle_population_budget(1);
			set_ped_population_budget(1);
			func_166(1);
			func_276(0, 0, 0);
			freeze_entity_position(player_ped_id(), true);
			iLocal_2678 = get_interior_at_coords(2432.982f, 4964.823f, 41.3476f);
			while (!is_valid_interior(iLocal_2678))
			{
				iLocal_2678 = get_interior_at_coords(2432.982f, 4964.823f, 41.3476f);
				func_28(14, 1);
			}
			while (!is_interior_ready(iLocal_2678))
			{
				func_28(15, 1);
			}
			set_interior_active(iLocal_2678, 1);
			unpin_interior(iLocal_2678);
			iLocal_2678 = 0;
			request_weapon_asset(joaat("weapon_petrolcan"), 31, 0);
			request_anim_dict("misschinese2_crystalmaze");
			while (!has_weapon_asset_loaded(joaat("weapon_petrolcan")) || !has_anim_dict_loaded("misschinese2_crystalmaze"))
			{
				func_28(16, 1);
			}
			func_32(11, 0);
			freeze_entity_position(player_ped_id(), false);
			func_32(5, 0);
			while (func_30(5))
			{
				func_3();
				func_28(17, 1);
			}
			set_wanted_level_multiplier(0f);
			request_model(joaat("blazer"));
			while (!has_model_loaded(joaat("blazer")))
			{
				func_28(18, 1);
			}
			func_265(0, 7, 1);
			give_weapon_to_ped(player_ped_id(), joaat("weapon_petrolcan"), 4500, true, true);
			func_163(0);
			func_15("CHN2_PETROL_RESTART", 0, "CHN2_EXPLODE");
			while (!func_2())
			{
				func_28(19, 1);
			}
			if (iParam1)
			{
				func_273(0, -1, 1);
			}
			break;
		
		case 8:
			if (iParam1)
			{
				func_335(2453.124f, 4952.071f, 45.125f, 285f, 1, 0);
			}
			else
			{
				set_entity_coords(player_ped_id(), 2453.124f, 4952.071f, 45.125f, 1, false, 0, 1);
				set_entity_heading(player_ped_id(), 285.8625f);
				load_scene(2453.124f, 4952.071f, 45.125f);
				wait(1);
				set_gameplay_cam_relative_heading(0f);
				set_gameplay_cam_relative_pitch(-7f, 1f);
			}
			func_276(0, 0, 0);
			if (!is_srl_loaded())
			{
				prefetch_srl("chinese2_explosion_cutscene");
			}
			set_vehicle_population_budget(1);
			set_ped_population_budget(1);
			request_model(joaat("blazer"));
			while (!has_model_loaded(joaat("blazer")))
			{
				func_28(20, 1);
			}
			iLocal_2508 = create_vehicle(joaat("blazer"), 2478.587f, 4941.803f, 43.6736f, 227.2903f, 1, 1);
			set_vehicle_on_ground_properly(iLocal_2508);
			iLocal_2678 = get_interior_at_coords(2432.982f, 4964.823f, 41.3476f);
			while (!is_valid_interior(iLocal_2678))
			{
				iLocal_2678 = get_interior_at_coords(2432.982f, 4964.823f, 41.3476f);
				func_28(21, 1);
			}
			while (!is_interior_ready(iLocal_2678))
			{
				func_28(22, 1);
			}
			iLocal_2648 = 3;
			set_interior_active(iLocal_2678, 1);
			unpin_interior(iLocal_2678);
			iLocal_2678 = 0;
			while (!has_model_loaded(joaat("blazer")) || !is_srl_loaded())
			{
				func_28(24, 1);
			}
			if (iParam1)
			{
				func_273(0, -1, 1);
			}
			while (!load_stream("CHINESE2_FARMHOUSE_EXPLOSION_SHOOT_GASOLINE_MASTER", 0))
			{
				func_28(23, 1);
			}
			break;
		
		case 9:
			if (iParam1)
			{
				func_335(2472.3f, 4948.181f, 44.0937f, 220f, 1, 0);
			}
			else
			{
				set_entity_coords(player_ped_id(), 2472.3f, 4948.181f, 44.0937f, 1, false, 0, 1);
				set_entity_heading(player_ped_id(), 220.8569f);
				load_scene(2453.124f, 4952.071f, 45.125f);
				wait(1);
				set_gameplay_cam_relative_heading(0f);
				set_gameplay_cam_relative_pitch(-7f, 1f);
			}
			func_31(6, 0);
			set_vehicle_population_budget(3);
			set_ped_population_budget(3);
			request_model(joaat("blazer"));
			while ((!has_model_loaded(joaat("blazer")) || !SCRIPT::REQUEST_SCRIPT_audio_bank("FARMHOUSE_FIRE", false)) || !SCRIPT::REQUEST_SCRIPT_audio_bank("FARMHOUSE_FIRE_BG", false))
			{
				func_28(25, 1);
			}
			iLocal_2508 = create_vehicle(joaat("blazer"), 2478.587f, 4941.803f, 43.6736f, 227.2903f, 1, 1);
			set_vehicle_on_ground_properly(iLocal_2508);
			func_276(0, 0, 0);
			load_scene(2453.124f, 4952.071f, 45.125f);
			func_19(50, 0, 0, 1, 0);
			func_19(51, 0, 0, 1, 0);
			func_19(52, 0, 0, 1, 0);
			func_19(53, 0, 0, 1, 0);
			func_19(54, 1, 0, 1, 0);
			func_19(55, 1, 0, 1, 0);
			uLocal_2672 = _0xB48FCED898292E52(2457.15f, 4968.79f, 48.677f, 45f, "DES_FarmHs");
			while (!_0x52AF537A0C5B8AAD(uLocal_2672))
			{
				func_28(161, 1);
			}
			_0x5C29F698D404C5E1(uLocal_2672, 9);
			remove_model_hide(2457.15f, 4968.79f, 48.677f, 100f, 965837842, false);
			remove_model_hide(2457.15f, 4968.79f, 48.677f, 100f, 247384786, false);
			remove_model_hide(2457.15f, 4968.79f, 48.677f, 100f, -247908770, false);
			if (iParam1)
			{
				func_273(0, -1, 1);
			}
			break;
		
		case 10:
			func_31(6, 0);
			if (iParam1)
			{
				func_335(2625.776f, 4802.217f, 32.5747f, 206f, 1, 0);
			}
			else
			{
				set_entity_coords(player_ped_id(), 2625.776f, 4802.217f, 32.5747f, 1, false, 0, 1);
				set_entity_heading(player_ped_id(), 206.4254f);
				set_gameplay_cam_relative_heading(0f);
				set_gameplay_cam_relative_pitch(-7f, 1f);
				load_scene(2625.776f, 4802.217f, 32.5747f);
			}
			set_vehicle_population_budget(3);
			set_ped_population_budget(3);
			_0x5C29F698D404C5E1(uLocal_2672, 9);
			func_19(50, 2, 0, 1, 0);
			func_19(51, 2, 0, 1, 0);
			func_19(52, 2, 0, 1, 0);
			func_19(53, 2, 0, 1, 0);
			func_19(54, 1, 0, 1, 0);
			func_19(55, 1, 0, 1, 0);
			if (iParam1)
			{
				func_273(0, -1, 1);
			}
			break;
	}
}

void func_265(int iParam0, int iParam1, int iParam2)
{
	Local_3337[iParam0 /*4*/].f_1 = iParam2;
	Local_3337[iParam0 /*4*/] = iParam1;
}

void func_266(int iParam0, int iParam1, int iParam2)
{
	Local_3358[iParam0 /*7*/].f_1 = iParam2;
	Local_3358[iParam0 /*7*/] = iParam1;
}

Vector3 func_267(int iParam0, Vector3 vParam1)
{
	auto uVar0;
	
	vParam1.z += 0.15f;
	if (get_ground_z_for_3d_coord(vParam1, &uVar0, 0))
	{
		vParam1.z = uVar0;
	}
	if (func_268(iParam0))
	{
		set_entity_coords(iParam0, vParam1, 1, false, 0, 1);
	}
	return vParam1;
}

int func_268(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	return !is_entity_dead(iParam0, 0);
}

auto func_269()
{
	return Global_95496.f_2311.f_8;
}

auto func_270(int iParam0)
{
	if (Global_91315 > 0)
	{
		return Global_95496.f_21[iParam0];
	}
	return Global_93091.f_21[iParam0];
}

auto func_271()
{
	return Global_95496.f_2305.f_3;
}

Vector3 func_272()
{
	return Global_95496.f_2305;
}

void func_273(int iParam0, int iParam1, int iParam2)
{
	if (func_345() && func_275())
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
		func_274(0);
	}
}

void func_274(int iParam0)
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

int func_275()
{
	return is_bit_set(Global_91278.f_20, 13);
}

void func_276(int iParam0, int iParam1, int iParam2)
{
	if (iParam0)
	{
		if (func_334())
		{
			if (func_331(func_333(), 10f, 20f, 9f, 1))
			{
				func_330();
				while (!func_329())
				{
					func_28(54455, 1);
				}
				if (iParam2)
				{
					iLocal_2506 = func_328(1994.387f, 3061.94f, 46.0491f, 50f);
				}
				else
				{
					iLocal_2506 = func_328(0f, 0f, 0f, 0f);
				}
			}
		}
	}
	else if (func_327())
	{
		func_325();
		while (!func_324())
		{
			func_28(544, 1);
		}
		iLocal_2506 = func_277(0f, 0f, 0f, 0f);
	}
	if (iParam1)
	{
		if (func_269())
		{
			if (is_vehicle_driveable(iLocal_2506, 0))
			{
				set_ped_into_vehicle(player_ped_id(), iLocal_2506, -1);
			}
		}
	}
}

int func_277(Vector3 vParam0, Vector3 fParam1)
{
	return func_278(&(Global_95496.f_2311), vParam0, fParam3, 0);
}

int func_278(auto uParam0, Vector3 vParam1, Vector3 fParam2, int iParam3)
{
	int iVar0;
	Vector3 vVar1;
	int iVar4;
	auto uVar5;
	int iVar8;
	
	if (func_323(uParam0))
	{
		if (func_162(vParam1, 0f, 0f, 0f, 0))
		{
			vParam1 = {*uParam0};
			fParam4 = *uParam0.f_6;
		}
		if (*uParam0.f_12.f_66 == joaat("monster") || *uParam0.f_12.f_66 == joaat("marshall"))
		{
			if (is_point_in_angled_area(vParam1, -816.8716f, 185.6238f, 71.40275f, -807.4894f, 189.3762f, 75.27323f, 6.5f, 0, true))
			{
				vParam1 = {-850.93f, 158.82f, 65.7f};
				fParam4 = 89.5f;
			}
		}
		if (func_322(uParam0))
		{
			clear_area(vParam1, 5f, 1, 0, 0, false);
			func_321(vParam1, 5f, 0);
			iVar0 = create_vehicle(*uParam0.f_12.f_66, vParam1, fParam4, 1, 1);
			if (does_entity_exist(iVar0))
			{
				vVar1 = {get_entity_coords(iVar0, 1)};
				if (vdist2(vVar1, -1151.15f, -1530.32f, 7.48925f) <= 3f)
				{
					set_entity_coords_no_offset(iVar0, vParam1, 0, 0, 1);
				}
				func_313(iVar0, uParam0.f_12, 0, 1);
				iVar4 = true;
				if (is_this_model_a_boat(*uParam0.f_12.f_66) || _is_this_model_an_emergency_boat(*uParam0.f_12.f_66))
				{
					if (!test_probe_against_water(vParam1.x, vParam1.y, vParam1.z + 30f, vParam1.x, vParam1.y, vParam1.z - 30f, &uVar5))
					{
						iVar4 = false;
					}
				}
				if (iVar4)
				{
					set_vehicle_on_ground_properly(iVar0);
				}
				if (*uParam0.f_7 == 1)
				{
					if (iParam5)
					{
						if (is_this_model_a_car(get_entity_model(iVar0)))
						{
							func_312(*uParam0.f_11, 1);
						}
						else if (is_this_model_a_bike(get_entity_model(iVar0)))
						{
							func_312(*uParam0.f_11, 2);
						}
					}
					_0xAB04325045427AAE(iVar0, 0);
					_0x428BACCDF5E26EAD(iVar0, false);
					set_vehicle_has_strong_axles(iVar0, true);
					func_311(iVar0, *uParam0.f_11);
				}
				else if ((!func_309(iVar0, *uParam0.f_3, *uParam0.f_8) && *uParam0.f_10) && are_strings_equal(get_this_script_name(), "startup_positioning"))
				{
					iVar8 = func_308(iVar0);
					if (iVar8 == -1)
					{
						*uParam0.f_10 = 0;
					}
					else
					{
						func_301(iVar8);
					}
				}
				if (((Global_91278 != 13 && Global_91278 != 10) && Global_91278 != 11) && Global_91278 != 12)
				{
					if (get_hash_key(&(Global_91278.f_3)) == Global_69307)
					{
						if (*uParam0.f_12.f_66 == Global_101154.f_18807.f_69[21 /*78*/].f_66)
						{
							func_298(24, 0);
							func_301(24);
						}
					}
				}
				if (*uParam0.f_9 == 1)
				{
					func_279(iVar0, *uParam0.f_11);
				}
				set_model_as_no_longer_needed(*uParam0.f_12.f_66);
				vVar1 = {get_entity_coords(iVar0, 1)};
			}
			return iVar0;
		}
	}
	return iVar0;
}

void func_279(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_284(iParam0))
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
				iParam1 = 0;
			}
			else if (get_entity_model(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
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
	func_280(iParam0, &(Global_101154.f_18807.f_5510));
}

void func_280(int iParam0, auto uParam1)
{
	int iVar0;
	
	if (is_vehicle_driveable(iParam0, 0))
	{
		func_283(uParam1);
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
		func_282(&iParam0, uParam1.f_9, uParam1.f_59);
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (is_vehicle_extra_turned_on(iParam0, iVar0 + 1))
			{
				set_bit(uParam1.f_77, func_281(iVar0 + 1));
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

int func_281(int iParam0)
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

bool func_282(int iParam0, auto uParam1, auto uParam2)
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

void func_283(auto uParam0)
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

bool func_284(int iParam0)
{
	if ((((((((((!does_entity_exist(iParam0) || !is_vehicle_driveable(iParam0, 0)) || func_72(iParam0, 0, 0)) || func_72(iParam0, 1, 0)) || func_72(iParam0, 2, 0)) || func_297(iParam0) != 145) || func_296(iParam0)) || func_295(iParam0)) || func_294(iParam0)) || func_293(iParam0)) || !func_285(get_entity_model(iParam0)))
	{
		if (func_295(iParam0))
		{
		}
		if (func_295(iParam0))
		{
		}
		if (func_72(iParam0, 0, 0))
		{
		}
		if (func_72(iParam0, 1, 0))
		{
		}
		if (func_72(iParam0, 2, 0))
		{
		}
		if (func_297(iParam0) != 145)
		{
		}
		return false;
	}
	return true;
}

bool func_285(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	if (!func_286(iParam0, 0))
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

bool func_286(int iParam0, int iParam1)
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
		if (!func_292())
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
		if ((((!func_291() && !func_290()) && !func_289()) && !func_288()) && !func_292())
		{
			return false;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((is_durango_version() || is_pc_version()) || is_orbis_version())
		{
		}
		else if (!func_289())
		{
			return false;
		}
	}
	if (iParam1)
	{
		if (!func_287(iParam0))
		{
			return false;
		}
	}
	return true;
}

int func_287(int iParam0)
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

bool func_288()
{
	return false;
}

bool func_289()
{
	return true;
}

bool func_290()
{
	return true;
}

bool func_291()
{
	if (is_dlc_present(-1226939934))
	{
		return true;
	}
	return false;
}

bool func_292()
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

bool func_293(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = get_entity_model(iParam0);
	sVar1 = get_vehicle_number_plate_text(iParam0);
	if (iVar0 == joaat("speedo") && are_strings_equal(sVar1, "LAMAR G "))
	{
		return true;
	}
	if (!func_286(iVar0, 0))
	{
		return true;
	}
	return false;
}

bool func_294(int iParam0)
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

bool func_295(int iParam0)
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

bool func_296(int iParam0)
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

int func_297(int iParam0)
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

void func_298(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1)
	{
		if (!func_300(iParam0, 0))
		{
			func_299(iParam0, 1, 0);
			func_299(iParam0, 2, 0);
			func_299(iParam0, 3, 0);
			func_299(iParam0, 4, 0);
			func_299(iParam0, 0, 1);
			Global_68319[iParam0] = 1;
		}
	}
	else
	{
		func_299(iParam0, 0, 0);
	}
}

void func_299(int iParam0, int iParam1, int iParam2)
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

int func_300(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return false;
	}
	return is_bit_set(Global_101154.f_18807[iParam0], iParam1);
}

void func_301(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (func_305(&(Global_68319.f_555[0 /*21*/]), iParam0))
	{
		if (does_entity_exist(Global_68319.f_139[iParam0]))
		{
			iVar0 = true;
			if (!is_ped_injured(player_ped_id()))
			{
				if (is_vehicle_driveable(Global_68319.f_139[iParam0], 0))
				{
					if (is_ped_in_vehicle(player_ped_id(), Global_68319.f_139[iParam0], 0))
					{
						iVar0 = false;
					}
				}
			}
			if (iVar0)
			{
				set_entity_as_mission_entity(Global_68319.f_139[iParam0], true, 1);
				delete_vehicle(&(Global_68319.f_139[iParam0]));
			}
		}
		Global_68319[iParam0] = 1;
		if (is_bit_set(Global_68319.f_555[0 /*21*/].f_9, 13))
		{
			if (((((iParam0 == 24 && func_300(iParam0, 0)) && Global_69228.f_66 == 0) && Global_101154.f_18807.f_1958[Global_68319.f_555[0 /*21*/].f_14] != 0) && Global_101154.f_18807.f_1958[Global_68319.f_555[0 /*21*/].f_14] > 3) && (!func_303(0, Global_68319.f_555[0 /*21*/].f_12) || !func_303(1, Global_68319.f_555[0 /*21*/].f_12)))
			{
				func_302(&(Global_101154.f_18807.f_69[Global_68319.f_555[0 /*21*/].f_14 /*78*/]), &Global_69228);
				Global_69306 = Global_101154.f_18807.f_5591;
			}
			func_298(iParam0, 0);
		}
	}
}

void func_302(auto uParam0, auto uParam1)
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

int func_303(int iParam0, int iParam1)
{
	int iVar0;
	
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iParam0 < 0 || iParam0 >= func_304(&(Global_101154.f_18807.f_5038[iVar0 /*157*/])))
	{
		return 0;
	}
	return func_286(Global_101154.f_18807.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66, 0);
}

auto func_304(auto uParam0)
{
	return *uParam0;
}

int func_305(auto uParam0, int iParam1)
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
			*uParam0.f_4 = func_306(0, 1);
			*uParam0.f_12 = 0;
			set_bit(uParam0.f_9, 20);
			set_bit(uParam0.f_9, 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = {1970.943f, 3801.684f, 31.1396f};
			*uParam0.f_3 = 301.3964f;
			*uParam0.f_4 = func_306(0, 1);
			*uParam0.f_12 = 0;
			set_bit(uParam0.f_9, 20);
			set_bit(uParam0.f_9, 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = {-22.6297f, -1439.137f, 29.6549f};
			*uParam0.f_3 = 180.0808f;
			*uParam0.f_4 = func_306(1, 1);
			*uParam0.f_12 = 1;
			set_bit(uParam0.f_9, 20);
			set_bit(uParam0.f_9, 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = {-22.5229f, -1434.699f, 29.6552f};
			*uParam0.f_3 = 141.6114f;
			*uParam0.f_4 = func_306(1, 2);
			*uParam0.f_12 = 1;
			set_bit(uParam0.f_9, 19);
			set_bit(uParam0.f_9, 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = {10.9281f, 545.669f, 174.7951f};
			*uParam0.f_3 = 61.392f;
			*uParam0.f_4 = func_306(1, 1);
			*uParam0.f_12 = 1;
			set_bit(uParam0.f_9, 20);
			set_bit(uParam0.f_9, 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = {6.1093f, 544.9742f, 174.2835f};
			*uParam0.f_3 = 92.1548f;
			*uParam0.f_4 = func_306(1, 2);
			*uParam0.f_12 = 1;
			set_bit(uParam0.f_9, 19);
			set_bit(uParam0.f_9, 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = {1981.416f, 3808.131f, 31.1384f};
			*uParam0.f_3 = 117.2557f;
			*uParam0.f_4 = func_306(2, 1);
			*uParam0.f_12 = 2;
			set_bit(uParam0.f_9, 20);
			set_bit(uParam0.f_9, 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = {-1158.488f, -1529.367f, 3.8995f};
			*uParam0.f_3 = 35.7505f;
			*uParam0.f_4 = func_306(2, 1);
			*uParam0.f_12 = 2;
			set_bit(uParam0.f_9, 20);
			set_bit(uParam0.f_9, 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = {148.2868f, -1270.569f, 28.2252f};
			*uParam0.f_3 = 208.4685f;
			*uParam0.f_4 = func_306(2, 1);
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
			if (func_292())
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
			if (func_292())
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
		if (!func_162(Global_101154.f_18807.f_1864[*uParam0.f_14 /*3*/], 0f, 0f, 0f, 0))
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
		if (!func_162(Global_101154.f_1826.f_539.f_2816[1 /*10*/][*uParam0.f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = {Global_101154.f_1826.f_539.f_2816[1 /*10*/][*uParam0.f_12 /*3*/]};
			*uParam0.f_3 = Global_101154.f_1826.f_539.f_2837[1 /*4*/][*uParam0.f_12];
		}
	}
	else if (is_bit_set(*uParam0.f_9, 20))
	{
		if (!func_162(Global_101154.f_1826.f_539.f_2816[0 /*10*/][*uParam0.f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = {Global_101154.f_1826.f_539.f_2816[0 /*10*/][*uParam0.f_12 /*3*/]};
			*uParam0.f_3 = Global_101154.f_1826.f_539.f_2837[0 /*4*/][*uParam0.f_12];
		}
	}
	return iVar0;
}

int func_306(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_45(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_307(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_307(int iParam0, auto uParam1, int iParam2)
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

int func_308(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if ((does_entity_exist(Global_68319.f_484[iVar0]) && !is_entity_dead(Global_68319.f_484[iVar0], 0)) && is_vehicle_driveable(Global_68319.f_484[iVar0], 0))
		{
			get_vehicle_colours(iParam0, &iVar1, &iVar2);
			get_vehicle_colours(Global_68319.f_484[iVar0], &iVar3, &iVar4);
			if (((get_entity_model(iParam0) == get_entity_model(Global_68319.f_484[iVar0]) && get_vehicle_livery(iParam0) == get_vehicle_livery(Global_68319.f_484[iVar0])) && iVar1 == iVar2) && iVar3 == iVar4)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

bool func_309(int iParam0, Vector3 vParam1, int iParam2)
{
	int iVar0;
	var[] uVar1 = new var[3];
	int iVar5;
	int iVar6;
	
	iVar0 = get_entity_model(iParam0);
	switch (iVar0)
	{
		case joaat("cargobob"):
			if (func_310(iParam0, Global_68319.f_139[38], 0))
			{
				func_301(38);
				return true;
			}
			break;
		
		case 1938952078:
			if (func_310(iParam0, Global_68319.f_139[43], 1))
			{
				func_301(43);
				return true;
			}
			break;
		
		case joaat("cuban800"):
			iVar5 = get_ped_nearby_vehicles(player_ped_id(), &uVar1);
			iVar6 = 0;
			while (iVar6 <= iVar5 - 1)
			{
				if (func_310(iParam0, uVar1[iVar6], 1) && func_227(get_entity_coords(uVar1[iVar6], 1), 2136.133f, 4780.563f, 39.9702f, 5f, 0))
				{
					if ((!iParam4 || func_162(vParam1, 0f, 0f, 0f, 0)) || get_distance_between_coords(get_entity_coords(iParam0, 1), get_entity_coords(uVar1[iVar6], 1), 1) < 10f)
					{
						delete_vehicle(&iParam0);
						return true;
					}
					else
					{
						return false;
					}
				}
				iVar6++;
			}
			break;
		
		case joaat("luxor2"):
			if ((does_entity_exist(Global_68319.f_484[14]) && is_vehicle_driveable(iParam0, 0)) && is_vehicle_driveable(Global_68319.f_484[14], 0))
			{
				if (get_entity_model(Global_68319.f_484[14]) == joaat("luxor2") && get_vehicle_livery(iParam0) == get_vehicle_livery(Global_68319.f_484[14]))
				{
					func_301(14);
					return true;
				}
			}
			break;
		
		case joaat("swift2"):
			if ((does_entity_exist(Global_68319.f_484[20]) && is_vehicle_driveable(iParam0, 0)) && is_vehicle_driveable(Global_68319.f_484[20], 0))
			{
				if (get_entity_model(Global_68319.f_484[20]) == joaat("swift2") && get_vehicle_livery(iParam0) == get_vehicle_livery(Global_68319.f_484[20]))
				{
					func_301(20);
					return true;
				}
			}
			break;
	}
	return false;
}

bool func_310(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((does_entity_exist(iParam1) && !is_entity_dead(iParam1, 0)) && is_vehicle_driveable(iParam1, 0))
	{
		if (iParam2)
		{
			get_vehicle_colours(iParam0, &iVar0, &iVar1);
			get_vehicle_colours(iParam1, &iVar2, &iVar3);
			if (iVar0 == iVar2 && iVar1 == iVar3)
			{
				return true;
			}
		}
		else
		{
			return true;
		}
	}
	return false;
}

void func_311(int iParam0, auto uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!does_entity_exist(Global_88942[iVar0]))
		{
			Global_88942[iVar0] = iParam0;
			Global_88952[iVar0] = uParam1;
			Global_88962[iVar0] = get_entity_model(iParam0);
			if (is_this_model_a_car(Global_88962[iVar0]))
			{
				Global_88990[uParam1 /*3*/][0] = -1;
			}
			else
			{
				Global_88990[uParam1 /*3*/][1] = -1;
			}
			iVar0 = 9;
		}
		if (iVar0 == 8)
		{
		}
		iVar0++;
	}
}

void func_312(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (does_entity_exist(Global_88942[iVar0]))
		{
			if (iParam0 == 145 || Global_88952[iVar0] == iParam0)
			{
				if (iParam1 == 0 || get_entity_model(Global_88942[iVar0]) == func_306(iParam0, iParam1))
				{
					if (!is_ped_in_vehicle(player_ped_id(), Global_88942[iVar0], 0))
					{
						set_entity_as_mission_entity(Global_88942[iVar0], false, 1);
						delete_vehicle(&(Global_88942[iVar0]));
						Global_88952[iVar0] = 145;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_313(int iParam0, auto uParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (is_vehicle_driveable(iParam0, 0))
	{
		if (get_hash_key(uParam1.f_1) != 0)
		{
			set_vehicle_number_plate_text(iParam0, uParam1.f_1);
		}
		if (*uParam1 >= 0 && *uParam1 < get_number_of_vehicle_number_plates())
		{
			set_vehicle_number_plate_text_index(iParam0, *uParam1);
		}
		if (*uParam1.f_66 == joaat("sovereign"))
		{
			*uParam1.f_5 = 111;
			*uParam1.f_6 = 111;
			*uParam1.f_7 = 111;
			*uParam1.f_8 = 156;
		}
		else if (*uParam1.f_66 == joaat("casco"))
		{
			iVar0 = 1;
			if (is_bit_set(*uParam1.f_77, func_281(iVar0 + 1)))
			{
			}
			else
			{
				set_bit(uParam1.f_77, func_281(iVar0 + 1));
			}
		}
		else if (*uParam1.f_66 == joaat("sandking") || *uParam1.f_66 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (is_bit_set(*uParam1.f_77, func_281(iVar1 + 1)))
			{
			}
			else
			{
				set_bit(uParam1.f_77, func_281(iVar1 + 1));
			}
		}
		if (is_bit_set(*uParam1.f_77, 13))
		{
			set_vehicle_custom_primary_colour(iParam0, *uParam1.f_71, *uParam1.f_72, *uParam1.f_73);
		}
		else
		{
			clear_vehicle_custom_primary_colour(iParam0);
		}
		if (is_bit_set(*uParam1.f_77, 12))
		{
			set_vehicle_custom_secondary_colour(iParam0, *uParam1.f_71, *uParam1.f_72, *uParam1.f_73);
		}
		else
		{
			clear_vehicle_custom_secondary_colour(iParam0);
		}
		set_vehicle_colours(iParam0, *uParam1.f_5, *uParam1.f_6);
		if (*uParam1.f_7 < 0)
		{
			*uParam1.f_7 = 0;
		}
		if (*uParam1.f_8 < 0)
		{
			*uParam1.f_8 = 0;
		}
		set_vehicle_extra_colours(iParam0, *uParam1.f_7, *uParam1.f_8);
		if (((is_bit_set(*uParam1.f_77, 15) || func_320(iParam0)) || (((*uParam1.f_62 == 0 && *uParam1.f_63 == 0) && *uParam1.f_64 == 0) && *uParam1.f_9[20] > 0)) && func_319())
		{
			*uParam1.f_62 = 0;
			*uParam1.f_63 = 0;
			*uParam1.f_64 = 0;
		}
		else if ((*uParam1.f_62 == 0 && *uParam1.f_63 == 0) && *uParam1.f_64 == 0)
		{
			*uParam1.f_62 = 255;
			*uParam1.f_63 = 255;
			*uParam1.f_64 = 255;
		}
		set_vehicle_tyre_smoke_color(iParam0, *uParam1.f_62, *uParam1.f_63, *uParam1.f_64);
		if (*uParam1.f_65 == -1 && *uParam1.f_66 != joaat("granger"))
		{
			set_vehicle_window_tint(iParam0, 0);
		}
		else
		{
			set_vehicle_window_tint(iParam0, 0);
			set_vehicle_window_tint(iParam0, *uParam1.f_65);
		}
		set_vehicle_tyres_can_burst(iParam0, !is_bit_set(*uParam1.f_77, 9));
		if (iParam2)
		{
			set_vehicle_doors_locked(iParam0, *uParam1.f_70);
		}
		_set_vehicle_neon_lights_colour(iParam0, *uParam1.f_74, *uParam1.f_75, *uParam1.f_76);
		_set_vehicle_neon_light_enabled(iParam0, 2, is_bit_set(*uParam1.f_77, 28));
		_set_vehicle_neon_light_enabled(iParam0, 3, is_bit_set(*uParam1.f_77, 29));
		_set_vehicle_neon_light_enabled(iParam0, 0, is_bit_set(*uParam1.f_77, 30));
		_set_vehicle_neon_light_enabled(iParam0, 1, is_bit_set(*uParam1.f_77, 31));
		set_vehicle_is_stolen(iParam0, is_bit_set(*uParam1.f_77, 10));
		if (get_vehicle_livery_count(iParam0) > 1 && *uParam1.f_67 >= 0)
		{
			set_vehicle_livery(iParam0, *uParam1.f_67);
		}
		if (*uParam1.f_69 > -1 && *uParam1.f_69 < 255)
		{
			if (!is_this_model_a_bicycle(get_entity_model(iParam0)))
			{
				if (is_this_model_a_bike(get_entity_model(iParam0)))
				{
					if (*uParam1.f_69 == 6)
					{
						func_318(iParam0, *uParam1.f_69);
					}
				}
				else
				{
					func_318(iParam0, *uParam1.f_69);
				}
			}
		}
		if (is_vehicle_a_convertible(iParam0, 0))
		{
			if ((*uParam1.f_68 == 0 || *uParam1.f_68 == 3) || *uParam1.f_68 == 5)
			{
				raise_convertible_roof(iParam0, 1);
			}
			else
			{
				lower_convertible_roof(iParam0, 1);
			}
		}
		if (iParam3)
		{
			func_314(&iParam0, uParam1.f_9, uParam1.f_59);
		}
		if (!is_this_model_a_heli(*uParam1.f_66) && !is_this_model_a_boat(*uParam1.f_66))
		{
			iVar2 = 0;
			while (iVar2 <= 11)
			{
				if (is_bit_set(*uParam1.f_77, func_281(iVar2 + 1)))
				{
					if (!is_vehicle_extra_turned_on(iParam0, iVar2 + 1))
					{
						set_vehicle_extra(iParam0, iVar2 + 1, false);
					}
				}
				else if (is_vehicle_extra_turned_on(iParam0, iVar2 + 1))
				{
					set_vehicle_extra(iParam0, iVar2 + 1, true);
				}
				iVar2++;
			}
		}
		if (is_this_model_a_plane(*uParam1.f_66))
		{
			if (!is_bit_set(*uParam1.f_77, 23))
			{
				if (is_bit_set(*uParam1.f_77, 22))
				{
					_set_vehicle_landing_gear(iParam0, 2);
				}
				else
				{
					_set_vehicle_landing_gear(iParam0, 3);
				}
			}
			else
			{
				_set_vehicle_landing_gear(iParam0, 4);
			}
		}
		if (is_bit_set(*uParam1.f_77, 27))
		{
			decor_set_bool(iParam0, "IgnoredByQuickSave", 1);
		}
		else
		{
			decor_set_bool(iParam0, "IgnoredByQuickSave", 0);
		}
	}
}

bool func_314(int iParam0, auto uParam1, auto uParam2)
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
	set_vehicle_mod_kit(*iParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			toggle_vehicle_mod(*iParam0, iVar1, *uParam1[iVar0] > 0);
		}
		else if (get_vehicle_mod(*iParam0, iVar1) != *uParam1[iVar0] - 1)
		{
			remove_vehicle_mod(*iParam0, iVar1);
			if (*uParam1[iVar0] > 0)
			{
				if (iVar0 == 23)
				{
					set_vehicle_mod(*iParam0, iVar1, *uParam1[iVar0] - 1, *uParam2[0] > 0);
				}
				else if (iVar0 == 24)
				{
					set_vehicle_mod(*iParam0, iVar1, *uParam1[iVar0] - 1, *uParam2[1] > 0);
				}
				else
				{
					set_vehicle_mod(*iParam0, iVar1, *uParam1[iVar0] - 1, false);
				}
			}
		}
		iVar0++;
	}
	if (func_317(get_entity_model(*iParam0), 1) && get_vehicle_mod(*iParam0, 24) != func_316(*iParam0, *uParam1[38] - 1))
	{
		set_vehicle_mod(*iParam0, 24, func_316(*iParam0, *uParam1[38] - 1), false);
	}
	if (func_315(*iParam0))
	{
		set_vehicle_strong(*iParam0, true);
		set_vehicle_has_strong_axles(*iParam0, true);
	}
	return true;
}

bool func_315(int iParam0)
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

int func_316(int iParam0, int iParam1)
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

bool func_317(int iParam0, int iParam1)
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

void func_318(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (get_num_mod_kits(iParam0) > 0)
	{
		set_vehicle_mod_kit(iParam0, 0);
		iVar0 = get_vehicle_mod(iParam0, 24);
		iVar1 = get_vehicle_mod_variation(iParam0, 24);
		set_vehicle_wheel_type(iParam0, iParam1);
		if (iVar0 == -1)
		{
			remove_vehicle_mod(iParam0, 24);
		}
		else
		{
			set_vehicle_mod(iParam0, 24, iVar0, iVar1 == 1);
		}
	}
}

int func_319()
{
	return is_dlc_present(-1691188696);
}

int func_320(int iParam0)
{
	int iVar0;
	
	if (does_entity_exist(iParam0))
	{
		if (is_vehicle_driveable(iParam0, 0))
		{
			if (decor_is_registered_as_type("MPBitset", 3))
			{
				if (decor_exist_on(iParam0, "MPBitset"))
				{
					iVar0 = decor_get_int(iParam0, "MPBitset");
				}
				return is_bit_set(iVar0, 4);
			}
		}
	}
	return false;
}

void func_321(Vector3 vParam0, float fParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_305(&(Global_68319.f_555[0 /*21*/]), iVar0))
		{
			if (get_distance_between_coords(vParam0, Global_68319.f_555[0 /*21*/], iParam4) <= fParam3)
			{
				func_301(iVar0);
			}
		}
		iVar0++;
	}
}

bool func_322(auto uParam0)
{
	if (func_323(uParam0))
	{
		if (has_model_loaded(*uParam0.f_12.f_66))
		{
			return true;
		}
		else
		{
			return false;
		}
		return true;
	}
	else
	{
		return false;
	}
	return true;
}

bool func_323(auto uParam0)
{
	if (*uParam0.f_12.f_66 == 0)
	{
		return false;
	}
	if (!func_286(*uParam0.f_12.f_66, 0))
	{
		return false;
	}
	if (*uParam0.f_12.f_66 == joaat("stunt") && func_227(*uParam0, 1694.62f, 3276.27f, 41.31f, 1056964608, 0))
	{
		return false;
	}
	return true;
}

int func_324()
{
	return func_322(&(Global_95496.f_2311));
}

void func_325()
{
	func_326(&(Global_95496.f_2311));
}

void func_326(auto uParam0)
{
	if (func_323(uParam0))
	{
		request_model(*uParam0.f_12.f_66);
	}
}

int func_327()
{
	return func_323(&(Global_95496.f_2311));
}

int func_328(Vector3 vParam0, Vector3 fParam1)
{
	return func_278(&(Global_93091.f_2311), vParam0, fParam3, 0);
}

int func_329()
{
	return func_322(&(Global_93091.f_2311));
}

void func_330()
{
	func_326(&(Global_93091.f_2311));
}

bool func_331(int iParam0, Vector3 vParam1, int iParam2)
{
	Vector3 vVar0;
	Vector3 vVar3;
	
	if (iParam0 == 0)
	{
		return false;
	}
	if (iParam4 == 1)
	{
		vParam1 = {func_332()};
	}
	get_model_dimensions(iParam0, &vVar0, &vVar3);
	if (vVar3.x - vVar0.x > vParam1.x)
	{
		return false;
	}
	else if (vVar3.y - vVar0.y > vParam1.y)
	{
		return false;
	}
	else if (vVar3.z - vVar0.z > vParam1.z)
	{
		return false;
	}
	return true;
}

Vector3 func_332()
{
	return 2.55f, 5.665f, 2.55f;
}

auto func_333()
{
	return Global_93091.f_2311.f_12.f_66;
}

int func_334()
{
	return func_323(&(Global_93091.f_2311));
}

void func_335(Vector3 vParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_345())
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
		func_274(1);
	}
}

bool func_336(int iParam0, int iParam1, Vector3 vParam2, Vector3 fParam3, int iParam4)
{
	int iVar0;
	
	if (!func_45(iParam1))
	{
		iVar0 = func_338(iParam1);
		request_model(iVar0);
		if (has_model_loaded(iVar0))
		{
			if (does_entity_exist(*iParam0))
			{
				delete_ped(iParam0);
			}
			*iParam0 = PED::CREATE_PED(26, iVar0, vParam2, fParam5, 0, false);
			set_ped_default_component_variation(*iParam0);
			if (iVar0 == joaat("ig_lamardavis"))
			{
				if (get_ped_drawable_variation(*iParam0, 3) == 0)
				{
					set_ped_component_variation(*iParam0, 5, 2, 0, 0);
				}
			}
			func_337(*iParam0, iParam1);
			if (iParam6)
			{
				set_model_as_no_longer_needed(iVar0);
			}
			return true;
		}
	}
	return false;
}

bool func_337(auto uParam0, int iParam1)
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

int func_338(int iParam0)
{
	if (!func_45(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_339(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_178();
	func_179();
	func_180();
	func_177();
	end_srl();
	set_vehicle_population_budget(3);
	set_ped_population_budget(3);
	iLocal_3491 = 0;
	iLocal_2649 = 0;
	iLocal_2645 = 0;
	iLocal_2512 = 0;
	iLocal_1614 = 0;
	iLocal_2646 = 0;
	iLocal_2879 = 0;
	iLocal_2880 = 0;
	while (is_cutscene_active())
	{
		if (is_cutscene_playing())
		{
			stop_cutscene(1);
		}
		else
		{
			remove_cutscene();
		}
		func_28(0, 0);
	}
	if (does_pickup_exist(iLocal_2650))
	{
		remove_pickup(iLocal_2650);
	}
	iVar0 = 0;
	while (iVar0 < iLocal_2651)
	{
		if (does_pickup_exist(iLocal_2651[iVar0]))
		{
			remove_pickup(iLocal_2651[iVar0]);
		}
		iVar0++;
	}
	iLocal_3506 = 0;
	iLocal_3507 = 0;
	iLocal_3508 = 0;
	sLocal_3509 = "";
	sLocal_3510 = "";
	func_184();
	iLocal_63 = 0;
	iLocal_64 = 0;
	iLocal_65 = 0;
	set_special_ability_multiplier(1f);
	func_343();
	render_script_cams(false, false, 3000, 1, 0, 0);
	destroy_all_cams(0);
	func_186(0, 1, 1, 0);
	func_28(32, 0);
	set_time_scale(1f);
	clear_prints();
	func_210(&Local_2683, 1, 0);
	func_66();
	func_64();
	remove_scenario_blocking_areas();
	_set_unk_map_flag(0);
	set_roads_back_to_original(Vector(44.8113f, 4961.045f, 2469.985f) - Vector(100f, 100f, 100f), Vector(44.8113f, 4961.045f, 2469.985f) + Vector(100f, 100f, 100f), 1);
	if (iParam0 == 0)
	{
		create_model_hide(2457.15f, 4968.79f, 48.677f, 100f, 965837842, 1);
		create_model_hide(2457.15f, 4968.79f, 48.677f, 100f, 247384786, 1);
		create_model_hide(2457.15f, 4968.79f, 48.677f, 100f, -247908770, 0);
		Global_33874 = 1;
	}
	set_ambient_zone_list_state("AZL_CHN2_METH_LAB_FARM_FIRE", 0, 1);
	if (iParam0 != 3)
	{
		set_scenario_group_enabled("Chinese2_Lunch", true);
		set_scenario_group_enabled("CHINESE2_HILLBILLIES", false);
	}
	set_player_control(player_id(), true, 0);
	if (iLocal_2884 != -1)
	{
		if (_0x0EAEB0DB4B132399(iLocal_2884))
		{
			remove_navmesh_blocking_object(iLocal_2884);
		}
	}
	if (iParam0 == 1 || iParam0 == 2)
	{
		func_341(player_ped_id(), 2);
	}
	iVar0 = 0;
	while (iVar0 < Local_755)
	{
		if (iVar0 == 14)
		{
		}
		if (does_entity_exist(Local_755[iVar0 /*33*/]))
		{
			if (!is_ped_injured(Local_755[iVar0 /*33*/]))
			{
				if (iParam0 == 3)
				{
					clear_ped_tasks_immediately(Local_755[iVar0 /*33*/]);
				}
			}
			if (iParam0 == 0 || iParam0 == 2)
			{
				if (iVar0 == 14)
				{
				}
				if (!is_ped_injured(Local_755[iVar0 /*33*/]))
				{
					set_ped_keep_task(Local_755[iVar0 /*33*/], true);
					set_ped_as_no_longer_needed(&(Local_755[iVar0 /*33*/]));
				}
			}
			else
			{
				if (iVar0 == 14)
				{
				}
				delete_ped(&(Local_755[iVar0 /*33*/]));
			}
		}
		Local_755[iVar0 /*33*/].f_3 = 0;
		Local_755[iVar0 /*33*/].f_4 = 0;
		Local_755[iVar0 /*33*/].f_6 = {0f, 0f, 0f};
		Local_755[iVar0 /*33*/].f_9 = {0f, 0f, 0f};
		Local_755[iVar0 /*33*/].f_2 = 25;
		Local_755[iVar0 /*33*/].f_5 = 0;
		Local_755[iVar0 /*33*/].f_12 = 0f;
		Local_755[iVar0 /*33*/].f_13 = 0f;
		Local_755[iVar0 /*33*/].f_14 = 0;
		Local_755[iVar0 /*33*/].f_15 = 0;
		Local_755[iVar0 /*33*/].f_17 = 0;
		Local_755[iVar0 /*33*/].f_16 = 0;
		Local_755[iVar0 /*33*/].f_21 = 0;
		Local_755[iVar0 /*33*/].f_22 = 0;
		Local_1619[iVar0 /*24*/].f_3 = 1;
		if (does_entity_exist(Local_755[iVar0 /*33*/].f_20))
		{
			delete_object(&(Local_755[iVar0 /*33*/].f_20));
		}
		remove_relationship_group(Local_755[iVar0 /*33*/].f_24);
		iVar0++;
	}
	if (iParam0 != 3)
	{
		func_340();
	}
	else
	{
		func_203(&Local_1619, &uLocal_2708, sLocal_2338, 12f, 2482.197f, 4975.367f, 44.7288f, 121f, 1);
	}
	if (does_entity_exist(iLocal_2878))
	{
		delete_object(&iLocal_2878);
	}
	if (iParam0 != 0 && iParam0 != 2)
	{
		clear_area(2438.433f, 4970.416f, 53.1778f, 450f, 1, 0, 0, false);
		stop_fire_in_range(2442.69f, 4970.348f, 46.33f, 30f);
	}
	iVar0 = 0;
	while (iVar0 < Local_2515)
	{
		if ((Local_2515[iVar0 /*6*/].f_1 == 1 && Local_2515[iVar0 /*6*/].f_3 == 0) || Local_2515[iVar0 /*6*/].f_3 == 0)
		{
			Local_2515[iVar0 /*6*/].f_2 = -1;
			Local_2515[iVar0 /*6*/].f_4 = 0;
			Local_2515[iVar0 /*6*/].f_5 = 0;
			Local_2515[iVar0 /*6*/].f_1 = 0;
		}
		iVar0++;
	}
	func_3();
	if (does_blip_exist(iLocal_2677))
	{
		remove_blip(&iLocal_2677);
	}
	iVar1 = 0;
	while (iVar1 < iLocal_2657)
	{
		if (does_entity_exist(iLocal_2657[iVar1]))
		{
			delete_object(&(iLocal_2657[iVar1]));
		}
		iVar1++;
	}
	if (does_entity_exist(iLocal_2506))
	{
		if (iParam0 != 0 && iParam0 != 2)
		{
			if (is_vehicle_driveable(iLocal_2506, 0))
			{
				if (does_entity_belong_to_this_script(iLocal_2506, 1))
				{
					if (is_ped_injured(player_ped_id()))
					{
						set_vehicle_as_no_longer_needed(&iLocal_2506);
					}
					else
					{
						set_vehicle_as_no_longer_needed(&iLocal_2506);
					}
				}
			}
		}
	}
	if (does_entity_exist(iLocal_2507))
	{
		if (iParam0 != 0)
		{
			if (is_ped_injured(player_ped_id()))
			{
				set_vehicle_as_no_longer_needed(&iLocal_2507);
			}
			else
			{
				set_vehicle_as_no_longer_needed(&iLocal_2507);
			}
		}
		else
		{
			set_vehicle_as_no_longer_needed(&iLocal_2507);
		}
	}
	if (does_entity_exist(iLocal_2508))
	{
		if (func_68(iLocal_2508))
		{
			set_vehicle_as_no_longer_needed(&iLocal_2508);
		}
	}
	if (does_pickup_exist(iLocal_2675))
	{
		remove_pickup(iLocal_2675);
	}
	if (iParam0 == 0)
	{
		if (does_entity_exist(iLocal_2680))
		{
			freeze_entity_position(iLocal_2680, false);
			set_object_as_no_longer_needed(&iLocal_2680);
		}
		if (does_entity_exist(iLocal_2681))
		{
			freeze_entity_position(iLocal_2681, false);
			set_object_as_no_longer_needed(&iLocal_2681);
		}
	}
	if (does_entity_exist(iLocal_2642))
	{
		delete_ped(&iLocal_2642);
	}
	remove_decals_in_range(2439.687f, 4971.541f, 45.9442f, 150f);
	if (iParam0 != 2)
	{
		if (does_entity_exist(Local_755[12 /*33*/]))
		{
			delete_ped(&(Local_755[12 /*33*/]));
		}
		if (does_entity_exist(Local_755[13 /*33*/]))
		{
			delete_ped(&(Local_755[13 /*33*/]));
		}
		if (does_entity_exist(Local_755[14 /*33*/]))
		{
			delete_ped(&(Local_755[14 /*33*/]));
		}
		if (does_entity_exist(Local_755[11 /*33*/]))
		{
			delete_ped(&(Local_755[11 /*33*/]));
		}
		if (does_entity_exist(Local_755[10 /*33*/]))
		{
			delete_ped(&(Local_755[10 /*33*/]));
		}
	}
	set_model_as_no_longer_needed(joaat("a_m_m_hillbilly_01"));
	set_model_as_no_longer_needed(joaat("a_m_m_hillbilly_02"));
	set_model_as_no_longer_needed(joaat("prop_cs_fertilizer"));
	set_model_as_no_longer_needed(joaat("burrito"));
	set_model_as_no_longer_needed(joaat("ig_janet"));
	set_model_as_no_longer_needed(joaat("ig_old_man1a"));
	set_model_as_no_longer_needed(joaat("ig_old_man2"));
	set_model_as_no_longer_needed(joaat("ig_taocheng"));
	set_model_as_no_longer_needed(joaat("ig_taostranslator"));
	set_model_as_no_longer_needed(joaat("ig_janet"));
	remove_anim_set("move_m@gangster@var_e");
	remove_anim_set("move_m@gangster@var_f");
	remove_anim_set("move_m@gangster@generic");
	remove_anim_dict("misschinese2_barrelRoll");
	remove_anim_dict("reaction@male_stand@big_variations@b");
	remove_anim_dict("reaction@male_stand@big_intro@left");
	remove_anim_dict("reaction@male_stand@big_intro@right");
	remove_anim_dict("reaction@male_stand@big_intro@backward");
	remove_anim_dict("misschinese2_bank1");
	remove_anim_dict("misschinese2_bank5");
	remove_anim_dict("misschinese2_crystalmazemcs1_ig");
	if (iParam0 != 3)
	{
		if (has_ped_got_weapon(player_ped_id(), joaat("weapon_petrolcan"), 0))
		{
			remove_weapon_from_ped(player_ped_id(), joaat("weapon_petrolcan"));
		}
	}
	iLocal_2641 = 0;
	iLocal_751 = 0;
	if (is_audio_scene_active("CHI_2_DRIVE_TO_FARMHOUSE"))
	{
		stop_audio_scene("CHI_2_DRIVE_TO_FARMHOUSE");
	}
	if (is_audio_scene_active("CHI_2_DRIVE_ROCK_RADIO"))
	{
		stop_audio_scene("CHI_2_DRIVE_ROCK_RADIO");
	}
	if (is_audio_scene_active("CHI_2_FARMHOUSE_OVERVIEW"))
	{
		stop_audio_scene("CHI_2_FARMHOUSE_OVERVIEW");
	}
	if (is_audio_scene_active("CHI_2_SHOOTOUT_STEALTH"))
	{
		stop_audio_scene("CHI_2_SHOOTOUT_STEALTH");
	}
	if (is_audio_scene_active("CHI_2_SHOOTOUT_ENEMIES_ALERTED"))
	{
		stop_audio_scene("CHI_2_SHOOTOUT_ENEMIES_ALERTED");
	}
	if (is_audio_scene_active("CHI_2_POUR_GAS"))
	{
		stop_audio_scene("CHI_2_POUR_GAS");
	}
	if (is_audio_scene_active("CHI_2_SHOOT_GAS"))
	{
		stop_audio_scene("CHI_2_SHOOT_GAS");
	}
	if (is_audio_scene_active("CHI_2_GAS_TRAIL_FIRE"))
	{
		stop_audio_scene("CHI_2_GAS_TRAIL_FIRE");
	}
	if (is_audio_scene_active("CHI_2_RAYFIRE"))
	{
		stop_audio_scene("CHI_2_RAYFIRE");
	}
	stop_stream();
	if (iParam0 != 0)
	{
		func_15("CHN2_STOP_TRACK", 0, func_167());
		while (!func_2())
		{
			func_28(0, 0);
		}
	}
	if (iParam0 != 3)
	{
		func_166(0);
	}
	if (iParam0 != 0)
	{
		uLocal_2672 = _0xB48FCED898292E52(2457.15f, 4968.79f, 48.677f, 45f, "DES_FarmHs");
		if (iLocal_2673)
		{
			if (_0x52AF537A0C5B8AAD(uLocal_2672))
			{
				_0x5C29F698D404C5E1(uLocal_2672, 2);
			}
			iLocal_2673 = 0;
		}
	}
}

void func_340()
{
	unblock_decision_maker_event(-455129387, 31);
}

void func_341(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (does_entity_exist(iParam0))
	{
		if (get_current_ped_weapon(iParam0, &iVar0, 0))
		{
			if (iVar0 != 0 && iVar0 != joaat("weapon_unarmed"))
			{
				if (!func_342(iParam1, iVar0))
				{
					iVar0 = 0;
				}
			}
		}
	}
	if (Global_91315 > 0)
	{
		Global_95496.f_21[iParam1] = iVar0;
	}
	else
	{
		Global_93091.f_21[iParam1] = iVar0;
	}
}

bool func_342(auto uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_91315 > 0)
	{
		iVar0 = 0;
		while (iVar0 < 44)
		{
			if (Global_95496.f_812[uParam0 /*284*/][iVar0 /*3*/] == iParam1)
			{
				if (Global_95496.f_812[uParam0 /*284*/][iVar0 /*3*/].f_1 > 0)
				{
					return true;
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			if (Global_95496.f_812[uParam0 /*284*/].f_133[iVar0 /*3*/] == iParam1)
			{
				if (Global_95496.f_812[uParam0 /*284*/].f_133[iVar0 /*3*/].f_1 > 0)
				{
					return true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 44)
		{
			if (Global_93091.f_812[uParam0 /*284*/][iVar0 /*3*/] == iParam1)
			{
				if (Global_93091.f_812[uParam0 /*284*/][iVar0 /*3*/].f_1 > 0)
				{
					return true;
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			if (Global_93091.f_812[uParam0 /*284*/].f_133[iVar0 /*3*/] == iParam1)
			{
				if (Global_93091.f_812[uParam0 /*284*/].f_133[iVar0 /*3*/].f_1 > 0)
				{
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

void func_343()
{
	int iVar0;
	
	Global_55778 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 64)
	{
		Global_55779[iVar0 /*2*/] = 0;
		iVar0++;
	}
}

int func_344()
{
	if (!Global_91278 == 10 && !Global_91278 == 9)
	{
		return 0;
	}
	return Global_91278.f_2;
}

bool func_345()
{
	if (Global_91278 == 10 || Global_91278 == 9)
	{
		return true;
	}
	return false;
}

void func_346(auto uParam0, char* sParam1, int iParam2, char* sParam3)
{
	*uParam0 = sParam3;
	*uParam0.f_1 = sParam1;
	*uParam0.f_2 = iParam2;
}

void func_347()
{
	add_relationship_group("MYFRIEND", &iLocal_1615);
	add_relationship_group("FOE", &iLocal_1616);
	add_relationship_group("IGNORE", &iLocal_1617);
	add_relationship_group("BARpeds", &iLocal_2636);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, iLocal_2636, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, get_ped_relationship_group_hash(player_ped_id()), iLocal_1616);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_1616, get_ped_relationship_group_hash(player_ped_id()));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_1615, iLocal_1617);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_1616, iLocal_1617);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_1617, get_ped_relationship_group_hash(player_ped_id()));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_1617, iLocal_1616);
}

void func_348()
{
	switch (iLocal_3688)
	{
		case 0:
			if (iLocal_2511 >= 4)
			{
				func_349(1, "Snipe from hill", 0, 0, 0, 1);
				iLocal_3688++;
			}
			break;
		
		case 1:
			if (iLocal_2511 >= 4 && iLocal_2511 < 7)
			{
				if (func_87(12) || iLocal_2511 == 6)
				{
					func_349(2, "Inside House", 0, 0, 0, 1);
					iLocal_3688++;
				}
			}
			else if (iLocal_2511 == 7)
			{
				if (has_ped_got_weapon(player_ped_id(), joaat("weapon_petrolcan"), 0))
				{
					func_349(2, "Inside House", 0, 0, 0, 1);
					iLocal_3688++;
				}
			}
			else if (iLocal_2511 > 7)
			{
				func_349(2, "Inside House", 0, 0, 0, 1);
				iLocal_3688++;
			}
			break;
		
		case 2:
			if (iLocal_2511 >= 7)
			{
				func_349(3, "Pour petrol trail", 0, 0, 0, 1);
				iLocal_3688++;
			}
			break;
		
		case 3:
			if (iLocal_2511 == 9)
			{
				func_349(4, "Leave the farm house", 1, 0, 0, 1);
				iLocal_3688++;
			}
			break;
	}
}

void func_349(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char[8] cVar3;
	int iVar5;
	auto uVar6;
	int iVar10;
	
	if (iParam3 == 1)
	{
		if (!are_strings_equal("FinaleC2", get_this_script_name()))
		{
		}
	}
	iVar0 = 0;
	if (iParam3 == 1)
	{
		if (iParam0 != Global_91315)
		{
			iVar0 = 1;
		}
	}
	else if (iParam0 > Global_91315)
	{
		iVar0 = 1;
	}
	if (iVar0 == 1)
	{
		func_408(1);
		if (iParam0 <= Global_91315)
		{
		}
		iVar1 = func_406(get_this_script_name(), 1);
		if (iVar1 != -1 && iVar1 != 94)
		{
			Global_101154.f_7775.f_330[iVar1 /*6*/].f_1 = 0;
			iVar2 = func_404(iVar1);
			cVar3 = {Global_82399[iVar1 /*34*/].f_8};
			if (iVar1 == 90)
			{
				switch (Global_101154.f_7775.f_99.f_205[7])
				{
					case 1:
						StringConCat(&cVar3, "A", 8);
						break;
					
					case 2:
						StringConCat(&cVar3, "B", 8);
						break;
					}
			}
			playstats_mission_checkpoint(&cVar3, iVar2, Global_91315, iParam0);
		}
		else
		{
			iVar5 = func_399(get_this_script_name(), 1);
			if (iVar5 != -1)
			{
				Global_101154.f_17264[iVar5 /*6*/].f_4 = 0;
				MemCopy(&uVar6, {func_398(iVar5)}, 4);
				playstats_mission_checkpoint(&uVar6, 0, Global_91315, iParam0);
			}
			else
			{
				iVar10 = func_397(&(Global_91278.f_3));
				if (iVar10 > -1)
				{
					Global_101154.f_29511.f_4[iVar10] = 0;
				}
			}
		}
		Global_85789 = iParam2;
		Global_91315 = iParam0;
		func_350(iParam0, sParam1, iParam4, iParam5);
		if (are_strings_equal(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_91315)
	{
	}
}

void func_350(int iParam0, auto uParam1, int iParam2, int iParam3)
{
	func_351(&Global_95496, get_this_script_name(), iParam0, uParam1, iParam3, iParam2);
}

void func_351(auto uParam0, char* sParam1, auto uParam2, auto uParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = func_43();
	*uParam0.f_1 = func_386();
	_get_weather_type_transition(uParam0.f_6, uParam0.f_7, uParam0.f_8);
	if (!is_ped_injured(player_ped_id()))
	{
		func_374(uParam0.f_2305, 0);
		func_373(player_ped_id());
		func_367(player_ped_id(), 0);
		get_current_ped_weapon(player_ped_id(), uParam0.f_2, 1);
		if (*uParam0.f_2 == 0 || *uParam0.f_2 == joaat("object"))
		{
			*uParam0.f_2 = joaat("weapon_unarmed");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		*uParam0.f_17[iVar1] = Global_101154.f_1826.f_539.f_294[iVar1];
		if (iVar1 == func_366())
		{
			func_360(player_ped_id(), uParam0.f_616[iVar1 /*65*/], 1);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 12)
			{
				*(uParam0.f_616[iVar1 /*65*/])[iVar0] = Global_91068[iVar1 /*65*/][iVar0];
				*(uParam0.f_616[iVar1 /*65*/].f_13)[iVar0] = Global_91068[iVar1 /*65*/].f_13[iVar0];
				iVar0++;
			}
			*(uParam0.f_616[iVar1 /*65*/]).f_59 = Global_91068[iVar1 /*65*/].f_59;
			*(uParam0.f_616[iVar1 /*65*/]).f_60 = Global_91068[iVar1 /*65*/].f_60;
			*(uParam0.f_616[iVar1 /*65*/]).f_61 = Global_91068[iVar1 /*65*/].f_61;
			*(uParam0.f_616[iVar1 /*65*/]).f_62 = Global_91068[iVar1 /*65*/].f_62;
			*(uParam0.f_616[iVar1 /*65*/]).f_63 = Global_91068[iVar1 /*65*/].f_63;
			*(uParam0.f_616[iVar1 /*65*/]).f_64 = Global_91068[iVar1 /*65*/].f_64;
			iVar0 = 0;
			while (iVar0 < 9)
			{
				*(uParam0.f_616[iVar1 /*65*/].f_39)[iVar0] = Global_91068[iVar1 /*65*/].f_39[iVar0];
				*(uParam0.f_616[iVar1 /*65*/].f_49)[iVar0] = Global_91068[iVar1 /*65*/].f_49[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			*(uParam0.f_812[iVar1 /*284*/][iVar0 /*3*/]) = {Global_101154.f_1826.f_539.f_298[iVar1 /*284*/][iVar0 /*3*/]};
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			*(uParam0.f_812[iVar1 /*284*/].f_133[iVar0 /*3*/]) = {Global_101154.f_1826.f_539.f_298[iVar1 /*284*/].f_133[iVar0 /*3*/]};
			iVar0++;
		}
		switch (iVar1)
		{
			case 0:
				stat_get_int(joaat("sp0_weap_purch_0"), uParam0.f_1665[iVar1 /*32*/][0], -1);
				stat_get_int(joaat("sp0_weap_purch_1"), uParam0.f_1665[iVar1 /*32*/][1], -1);
				stat_get_int(joaat("sp0_weap_addon_purch_0"), uParam0.f_1665[iVar1 /*32*/].f_5[0], -1);
				stat_get_int(joaat("sp0_weap_addon_purch_1"), uParam0.f_1665[iVar1 /*32*/].f_5[1], -1);
				stat_get_int(joaat("sp0_weap_addon_purch_2"), uParam0.f_1665[iVar1 /*32*/].f_5[2], -1);
				stat_get_int(joaat("sp0_weap_addon_purch_3"), uParam0.f_1665[iVar1 /*32*/].f_5[3], -1);
				stat_get_int(joaat("sp0_weap_addon_purch_4"), uParam0.f_1665[iVar1 /*32*/].f_5[4], -1);
				stat_get_int(joaat("sp0_weap_tint_purch_0"), uParam0.f_1665[iVar1 /*32*/].f_16[0], -1);
				stat_get_int(joaat("sp0_weap_tint_purch_1"), uParam0.f_1665[iVar1 /*32*/].f_16[1], -1);
				stat_get_int(joaat("sp0_weap_tint_purch_2"), uParam0.f_1665[iVar1 /*32*/].f_16[2], -1);
				stat_get_int(joaat("sp0_weap_tint_purch_3"), uParam0.f_1665[iVar1 /*32*/].f_16[3], -1);
				stat_get_int(joaat("sp0_weap_tint_purch_4"), uParam0.f_1665[iVar1 /*32*/].f_16[4], -1);
				stat_get_int(joaat("sp0_weap_tint_purch_5"), uParam0.f_1665[iVar1 /*32*/].f_16[5], -1);
				stat_get_int(joaat("sp0_weap_tint_purch_6"), uParam0.f_1665[iVar1 /*32*/].f_16[6], -1);
				stat_get_int(joaat("sp0_weap_tint_purch_7"), uParam0.f_1665[iVar1 /*32*/].f_16[7], -1);
				stat_get_int(joaat("sp0_weap_tint_purch_8"), uParam0.f_1665[iVar1 /*32*/].f_16[8], -1);
				stat_get_int(joaat("sp0_weap_tint_purch_9"), uParam0.f_1665[iVar1 /*32*/].f_16[9], -1);
				stat_get_int(joaat("sp0_weap_tint_purch_10"), uParam0.f_1665[iVar1 /*32*/].f_16[10], -1);
				stat_get_int(joaat("sp0_weap_tint_purch_11"), uParam0.f_1665[iVar1 /*32*/].f_16[11], -1);
				break;
			
			case 1:
				stat_get_int(joaat("sp1_weap_purch_0"), uParam0.f_1665[iVar1 /*32*/][0], -1);
				stat_get_int(joaat("sp1_weap_purch_1"), uParam0.f_1665[iVar1 /*32*/][1], -1);
				stat_get_int(joaat("sp1_weap_addon_purch_0"), uParam0.f_1665[iVar1 /*32*/].f_5[0], -1);
				stat_get_int(joaat("sp1_weap_addon_purch_1"), uParam0.f_1665[iVar1 /*32*/].f_5[1], -1);
				stat_get_int(joaat("sp1_weap_addon_purch_2"), uParam0.f_1665[iVar1 /*32*/].f_5[2], -1);
				stat_get_int(joaat("sp1_weap_addon_purch_3"), uParam0.f_1665[iVar1 /*32*/].f_5[3], -1);
				stat_get_int(joaat("sp1_weap_addon_purch_4"), uParam0.f_1665[iVar1 /*32*/].f_5[4], -1);
				stat_get_int(joaat("sp1_weap_tint_purch_0"), uParam0.f_1665[iVar1 /*32*/].f_16[0], -1);
				stat_get_int(joaat("sp1_weap_tint_purch_1"), uParam0.f_1665[iVar1 /*32*/].f_16[1], -1);
				stat_get_int(joaat("sp1_weap_tint_purch_2"), uParam0.f_1665[iVar1 /*32*/].f_16[2], -1);
				stat_get_int(joaat("sp1_weap_tint_purch_3"), uParam0.f_1665[iVar1 /*32*/].f_16[3], -1);
				stat_get_int(joaat("sp1_weap_tint_purch_4"), uParam0.f_1665[iVar1 /*32*/].f_16[4], -1);
				stat_get_int(joaat("sp1_weap_tint_purch_5"), uParam0.f_1665[iVar1 /*32*/].f_16[5], -1);
				stat_get_int(joaat("sp1_weap_tint_purch_6"), uParam0.f_1665[iVar1 /*32*/].f_16[6], -1);
				stat_get_int(joaat("sp1_weap_tint_purch_7"), uParam0.f_1665[iVar1 /*32*/].f_16[7], -1);
				stat_get_int(joaat("sp1_weap_tint_purch_8"), uParam0.f_1665[iVar1 /*32*/].f_16[8], -1);
				stat_get_int(joaat("sp1_weap_tint_purch_9"), uParam0.f_1665[iVar1 /*32*/].f_16[9], -1);
				stat_get_int(joaat("sp1_weap_tint_purch_10"), uParam0.f_1665[iVar1 /*32*/].f_16[10], -1);
				stat_get_int(joaat("sp1_weap_tint_purch_11"), uParam0.f_1665[iVar1 /*32*/].f_16[11], -1);
				break;
			
			case 2:
				stat_get_int(joaat("sp2_weap_purch_0"), uParam0.f_1665[iVar1 /*32*/][0], -1);
				stat_get_int(joaat("sp2_weap_purch_1"), uParam0.f_1665[iVar1 /*32*/][1], -1);
				stat_get_int(joaat("sp2_weap_addon_purch_0"), uParam0.f_1665[iVar1 /*32*/].f_5[0], -1);
				stat_get_int(joaat("sp2_weap_addon_purch_1"), uParam0.f_1665[iVar1 /*32*/].f_5[1], -1);
				stat_get_int(joaat("sp2_weap_addon_purch_2"), uParam0.f_1665[iVar1 /*32*/].f_5[2], -1);
				stat_get_int(joaat("sp2_weap_addon_purch_3"), uParam0.f_1665[iVar1 /*32*/].f_5[3], -1);
				stat_get_int(joaat("sp2_weap_addon_purch_4"), uParam0.f_1665[iVar1 /*32*/].f_5[4], -1);
				stat_get_int(joaat("sp2_weap_tint_purch_0"), uParam0.f_1665[iVar1 /*32*/].f_16[0], -1);
				stat_get_int(joaat("sp2_weap_tint_purch_1"), uParam0.f_1665[iVar1 /*32*/].f_16[1], -1);
				stat_get_int(joaat("sp2_weap_tint_purch_2"), uParam0.f_1665[iVar1 /*32*/].f_16[2], -1);
				stat_get_int(joaat("sp2_weap_tint_purch_3"), uParam0.f_1665[iVar1 /*32*/].f_16[3], -1);
				stat_get_int(joaat("sp2_weap_tint_purch_4"), uParam0.f_1665[iVar1 /*32*/].f_16[4], -1);
				stat_get_int(joaat("sp2_weap_tint_purch_5"), uParam0.f_1665[iVar1 /*32*/].f_16[5], -1);
				stat_get_int(joaat("sp2_weap_tint_purch_6"), uParam0.f_1665[iVar1 /*32*/].f_16[6], -1);
				stat_get_int(joaat("sp2_weap_tint_purch_7"), uParam0.f_1665[iVar1 /*32*/].f_16[7], -1);
				stat_get_int(joaat("sp2_weap_tint_purch_8"), uParam0.f_1665[iVar1 /*32*/].f_16[8], -1);
				stat_get_int(joaat("sp2_weap_tint_purch_9"), uParam0.f_1665[iVar1 /*32*/].f_16[9], -1);
				stat_get_int(joaat("sp2_weap_tint_purch_10"), uParam0.f_1665[iVar1 /*32*/].f_16[10], -1);
				stat_get_int(joaat("sp2_weap_tint_purch_11"), uParam0.f_1665[iVar1 /*32*/].f_16[11], -1);
				break;
		}
		*uParam0.f_9[iVar1] = Global_101154.f_25089.f_233[iVar1 /*69*/].f_1;
		*uParam0.f_13[iVar1] = Global_52923[iVar1];
		*(uParam0.f_25[0 /*295*/][iVar1 /*98*/]) = {Global_101154.f_1826.f_539.f_1635[0 /*295*/][iVar1 /*98*/]};
		*(uParam0.f_25[1 /*295*/][iVar1 /*98*/]) = {Global_101154.f_1826.f_539.f_1635[1 /*295*/][iVar1 /*98*/]};
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			*(uParam0.f_2259[iVar1 /*15*/])[iVar0] = Global_101154.f_1826.f_493[iVar1 /*15*/][iVar0];
			*(uParam0.f_2259[iVar1 /*15*/].f_5)[iVar0] = Global_101154.f_1826.f_493[iVar1 /*15*/].f_5[iVar0];
			*(uParam0.f_2259[iVar1 /*15*/].f_10)[iVar0] = Global_101154.f_1826.f_493[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			*(uParam0.f_1766[iVar1 /*164*/])[iVar0] = Global_101154.f_1826[iVar1 /*164*/][iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_4)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_4[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_8)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_8[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_12)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_12[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_16)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_16[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_20)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_20[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_24)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_24[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_28)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_28[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_32)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_32[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_36)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_36[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_40)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_40[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_44)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_44[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_48)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_48[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_52)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_52[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_56)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_56[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_60)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_60[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_64)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_64[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_68)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_68[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_72)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_72[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_76)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_76[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_80)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_80[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_84)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_84[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_88)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_88[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_92)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_92[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_96)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_96[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_100)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_100[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_104)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_104[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_108)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_108[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_112)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_112[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_116)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_116[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_120)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_120[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_124)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_124[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_128)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_128[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_132)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_132[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_136)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_136[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_140)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_140[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_144)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_144[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_148)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_148[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_152)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_152[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_156)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_156[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_160)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	stat_get_int(joaat("sp0_special_ability"), uParam0.f_1762[0], -1);
	stat_get_int(joaat("sp1_special_ability"), uParam0.f_1762[1], -1);
	stat_get_int(joaat("sp2_special_ability"), uParam0.f_1762[2], -1);
	*uParam0.f_5 = 145;
	if (iParam4 == 1)
	{
		func_353(uParam0.f_2311, uParam0, iParam5, 1, 1, 0);
	}
	func_352(uParam0.f_2401);
	uParam3 = uParam3;
	uParam2 = uParam2;
}

bool func_352(auto uParam0)
{
	*uParam0 = Global_87460;
	*uParam0.f_1 = Global_87461;
	*uParam0.f_2 = 0;
	*uParam0.f_3 = 0;
	return true;
}

void func_353(auto uParam0, auto uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam2 == 0)
	{
		iParam2 = player_ped_id();
	}
	if (does_entity_exist(iParam2))
	{
		*uParam1.f_5 = func_46(iParam2);
	}
	if (func_359(iParam2, &iVar0, iParam3, iParam5))
	{
		func_354(uParam0, uParam1, iVar0, iParam4);
	}
	else if (does_entity_exist(iVar0))
	{
		if (!is_entity_dead(iVar0, 0))
		{
			if (is_vehicle_model(iVar0, joaat("skylift")) && is_ped_in_vehicle(player_ped_id(), iVar0, 0))
			{
				func_354(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

bool func_354(auto uParam0, auto uParam1, int iParam2, int iParam3)
{
	if (is_vehicle_driveable(iParam2, 0))
	{
		func_356(uParam0, iParam2, iParam3);
		*uParam1.f_4 = iParam2;
		if (func_355(iParam2))
		{
			*uParam1.f_3 = 1;
		}
		else
		{
			*uParam1.f_3 = 0;
		}
		return true;
	}
	return false;
}

bool func_355(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (Global_91278.f_22[iVar0] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_356(auto uParam0, int iParam1, int iParam2)
{
	func_280(iParam1, uParam0.f_12);
	*uParam0.f_7 = func_358(iParam1, 145, 0);
	*uParam0.f_11 = func_297(iParam1);
	if (!*uParam0.f_7)
	{
		if (!*uParam0.f_10)
		{
			*uParam0.f_10 = func_357(iParam1);
		}
	}
	if (iParam2 == 1)
	{
		*uParam0 = {get_entity_coords(iParam1, 1)};
		*uParam0.f_6 = get_entity_heading(iParam1);
		*uParam0.f_3 = {get_entity_velocity(iParam1)};
		if (is_entity_in_angled_area(iParam1, -1154.326f, -1523.871f, 3.262189f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, true, 0))
		{
			*uParam0 = {-1160.095f, -1515.407f, 3.1496f};
			*uParam0.f_6 = 305.6424f;
		}
		if (Global_69224 == iParam1)
		{
			*uParam0.f_9 = 1;
		}
	}
	if (is_ped_in_any_vehicle(player_ped_id(), 0))
	{
		*uParam0.f_8 = 1;
	}
	else
	{
		*uParam0.f_8 = 0;
	}
}

bool func_357(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (does_entity_exist(Global_68319.f_484[iVar0]))
		{
			if (iParam0 == Global_68319.f_484[iVar0])
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_358(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (!is_vehicle_driveable(iParam0, 0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (does_entity_exist(Global_88942[iVar0]))
		{
			if (Global_88942[iVar0] == iParam0)
			{
				if (iParam1 == 145 || iParam1 == Global_88952[iVar0])
				{
					if (iParam2 == 0 || get_entity_model(iParam0) == func_306(iParam1, iParam2))
					{
						return true;
					}
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_359(int iParam0, auto uParam1, int iParam2, int iParam3)
{
	char* sVar0;
	
	if (does_entity_exist(iParam0))
	{
		if (!is_ped_injured(iParam0))
		{
			if (iParam0 == player_ped_id())
			{
				*uParam1 = get_players_last_vehicle();
			}
			else
			{
				*uParam1 = get_vehicle_ped_is_in(iParam0, 1);
			}
			if (does_entity_exist(*uParam1))
			{
				if (is_vehicle_driveable(*uParam1, 0))
				{
					if (iParam2 == 0 || get_distance_between_coords(get_entity_coords(*uParam1, 1), get_entity_coords(iParam0, 1), 1) < 100f)
					{
						if (is_vehicle_model(*uParam1, joaat("taxi")))
						{
							if (get_ped_in_vehicle_seat(*uParam1, -1) != iParam0 && get_ped_in_vehicle_seat(*uParam1, -1) != 0)
							{
								return false;
							}
						}
						if (func_72(*uParam1, func_43(), 1))
						{
							sVar0 = get_this_script_name();
							if (!are_strings_equal(sVar0, "save_anywhere"))
							{
								return false;
							}
							else if (!is_ped_in_any_vehicle(iParam0, 1))
							{
								return false;
							}
						}
						if (iParam3 == 1)
						{
							if (decor_exist_on(*uParam1, "IgnoredByQuickSave"))
							{
								if (decor_get_bool(*uParam1, "IgnoredByQuickSave"))
								{
									return false;
								}
							}
						}
						else if (is_vehicle_model(*uParam1, joaat("blimp")))
						{
							return false;
						}
						return true;
					}
				}
			}
		}
	}
	return false;
}

void func_360(int iParam0, auto uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (!is_ped_injured(iParam0))
	{
		iVar0 = func_46(iParam0);
		iVar1 = false;
		while (iVar1 < 12)
		{
			func_365(iParam0, iVar1, uParam1.f_13[iVar1], uParam1[iVar1], uParam1.f_26[iVar1], iParam2, 145);
			iVar1++;
		}
		iVar1 = false;
		while (iVar1 < 9)
		{
			func_364(iParam0, iVar1, uParam1.f_39[iVar1], uParam1.f_49[iVar1], iParam2, 145);
			iVar1++;
		}
		if (func_45(iVar0))
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
			if (func_363(161, -1))
			{
				*uParam1.f_59 = func_361(2043, Global_69309, 0);
			}
			else
			{
				*uParam1.f_59 = func_361(745, Global_69309, 0);
			}
			*uParam1.f_60 = func_361(746, Global_69309, 0);
			*uParam1.f_61 = func_361(747, Global_69309, 0);
		}
		if (network_is_game_in_progress() && iParam0 == player_ped_id())
		{
			if (func_363(161, -1))
			{
				*uParam1.f_59 = func_361(2043, Global_69309, 0);
			}
			else
			{
				*uParam1.f_59 = func_361(745, Global_69309, 0);
			}
		}
	}
}

int func_361(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	auto uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2469339[iParam0 /*5*/][func_362(iParam1)];
	if (stat_get_int(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_362(auto uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_190();
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

int func_363(int iParam0, int iParam1)
{
	int iVar0;
	auto uVar1;
	
	iVar0 = Global_2490231[iParam0 /*5*/][func_362(iParam1)];
	if (stat_get_bool(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_364(int iParam0, int iParam1, auto uParam2, auto uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	iVar0 = func_46(iParam0);
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

void func_365(int iParam0, int iParam1, auto uParam2, auto uParam3, auto uParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	iVar0 = func_46(iParam0);
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

auto func_366()
{
	func_44();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_367(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_46(iParam0);
	if (func_45(iVar0) && !is_ped_injured(iParam0))
	{
		if (iParam0 == player_ped_id())
		{
			func_368(iParam0, &(Global_101154.f_1826.f_539.f_298[iVar0 /*284*/]));
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

void func_368(int iParam0, auto uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	Vector3 vVar4;
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
			iVar3 = func_372(iVar0);
			if (iVar3 != 0)
			{
				vVar4.x = get_ped_weapontype_in_slot(iParam0, func_372(iVar0));
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
					iVar2 = func_370(vVar4.x, iVar1);
					while (iVar2 != 0)
					{
						if (has_ped_got_weapon_component(iParam0, vVar4.x, iVar2))
						{
							set_bit(&(vVar4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_370(vVar4.x, iVar1);
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
			if ((get_dlc_weapon_data(iVar7, &Var9) && !func_369(Var9.f_1)) && iVar70 < 50)
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

bool func_369(int iParam0)
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

int func_370(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	auto uVar2;
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
				iVar1 = func_371(iParam0, &uVar2);
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

int func_371(int iParam0, auto uParam1)
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

int func_372(int iParam0)
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

void func_373(int iParam0)
{
	int iVar0;
	
	iVar0 = func_46(iParam0);
	if (func_45(iVar0) && !is_ped_injured(iParam0))
	{
		Global_101154.f_1826.f_539.f_294[iVar0] = get_ped_armour(iParam0);
	}
}

void func_374(auto uParam0, int iParam1)
{
	int iVar0;
	Vector3 vVar1;
	auto uVar4;
	int iVar5;
	
	*uParam0 = {get_entity_coords(player_ped_id(), 1)};
	*uParam0.f_3 = get_entity_heading(player_ped_id());
	*uParam0.f_5 = get_ped_parachute_state(player_ped_id());
	if (is_player_playing(player_id()))
	{
		*uParam0.f_4 = get_player_wanted_level(player_id());
	}
	if (vdist(*uParam0, 320.9934f, 265.2515f, 82.1221f) < 10f)
	{
		*uParam0 = {301.2162f, 202.1357f, 103.3797f};
		*uParam0.f_3 = 156.5144f;
	}
	else if (vdist(*uParam0, 377.153f, -717.567f, 10.0536f) < 10f)
	{
		*uParam0 = {394.2567f, -713.5439f, 28.2853f};
		*uParam0.f_3 = 276.6273f;
	}
	else if (vdist(*uParam0, -1425.564f, -244.3f, 15.8053f) < 10f)
	{
		*uParam0 = {-1423.472f, -214.2539f, 45.5004f};
		*uParam0.f_3 = 353.8757f;
	}
	else if (_get_number_of_instances_of_streamed_script(joaat("finale_choice")) > 0)
	{
		*uParam0 = {4.2587f, 525.0214f, 173.6281f};
		*uParam0.f_3 = 203.6746f;
	}
	else if (is_bit_set(Global_69737, 4))
	{
		*uParam0 = {452.0255f, 5571.85f, 780.1859f};
		*uParam0.f_3 = 78.9858f;
	}
	else if (is_bit_set(Global_69737, 5))
	{
		*uParam0 = {-745.4462f, 5595.146f, 40.6594f};
		*uParam0.f_3 = 261.747f;
	}
	else if (is_bit_set(Global_69737, 6))
	{
		*uParam0 = {-1675.521f, -1125.59f, 12.091f};
		*uParam0.f_3 = 271.8208f;
	}
	else if (is_bit_set(Global_69737, 7))
	{
		*uParam0 = {-1631.219f, -1112.805f, 12.0212f};
		*uParam0.f_3 = 316.8879f;
	}
	else if (get_interior_from_entity(player_ped_id()) == get_interior_at_coords_with_type(1272.659f, -1715.467f, 53.7715f, "v_lesters"))
	{
		*uParam0 = {1276.956f, -1725.189f, 53.6551f};
		*uParam0.f_3 = 204.1703f;
	}
	else if (is_entity_in_angled_area(player_ped_id(), -415.4365f, 2068.289f, 113.3002f, -564.9516f, 1884.703f, 134.0403f, 258.75f, 0, true, 0) || is_entity_in_angled_area(player_ped_id(), -596.4706f, 2089.921f, 125.4128f, -581.2134f, 2036.256f, 136.2836f, 9.5f, 0, true, 0))
	{
		*uParam0 = {-601.59f, 2099.197f, 128.8928f};
		*uParam0.f_3 = 204.7498f;
	}
	else if (vdist(*uParam0, -1007.393f, -477.9584f, 52.5357f) < 8f)
	{
		*uParam0 = {-1018.376f, -483.9436f, 36.0964f};
		*uParam0.f_3 = 114.7664f;
	}
	else if (vdist(*uParam0, 480.6662f, -1317.808f, 28.20303f) < 15f)
	{
		*uParam0 = {497.7238f, -1310.932f, 28.2372f};
		*uParam0.f_3 = 289.3663f;
	}
	else if (vdist(*uParam0, 2329.527f, 2571.311f, 45.6779f) < 5f)
	{
		*uParam0 = {2316.93f, 2594.153f, 45.7199f};
		*uParam0.f_3 = 348.1325f;
	}
	if (iParam1 == 1)
	{
		if (func_377(&iVar0))
		{
			if (func_376(iVar0, &vVar1, &uVar4))
			{
				vVar1.z++;
				*uParam0 = {vVar1};
				*uParam0.f_3 = uVar4;
			}
		}
		else if (is_entity_in_angled_area(player_ped_id(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, true, 0))
		{
			iVar5 = func_43();
			if (iVar5 == 0)
			{
				*uParam0 = {-65.1234f, 81.2517f, 70.5644f};
				*uParam0.f_3 = 71.6237f;
			}
			else if (iVar5 == 1)
			{
				*uParam0 = {-68.5531f, -1824.377f, 25.9424f};
				*uParam0.f_3 = 215.8295f;
			}
			else if (iVar5 == 2)
			{
				*uParam0 = {-220.8189f, -1162.302f, 22.0242f};
				*uParam0.f_3 = 70.2711f;
			}
		}
		else if (is_entity_in_angled_area(player_ped_id(), 483.7175f, -1326.63f, 28.2135f, 474.9644f, -1307.998f, 34.49498f, 12f, 0, true, 0))
		{
			*uParam0 = {495.4108f, -1306.08f, 29.2883f};
			*uParam0.f_3 = 213.6273f;
		}
		else if (is_entity_in_angled_area(player_ped_id(), -1146.77f, -1534.22f, 3.37f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, true, 0))
		{
			*uParam0 = {-1160.095f, -1515.407f, 3.1496f};
			*uParam0.f_3 = 305.6424f;
		}
		else if (is_entity_in_angled_area(player_ped_id(), 439.5432f, -996.9769f, 24.88307f, 428.2935f, -997.0192f, 28.57458f, 8.5f, 0, true, 0))
		{
			*uParam0 = {431.8853f, -1013.133f, 28.7907f};
			*uParam0.f_3 = 186.6814f;
		}
		else if (func_375(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f))
		{
			*uParam0 = {279.4137f, -585.8815f, 43.2502f};
			*uParam0.f_3 = 48.8028f;
		}
	}
}

bool func_375(Vector3 vParam0, char* sParam1, Vector3 vParam2)
{
	int iVar0;
	int iVar1;
	
	if (!_are_coords_colliding_with_exterior(vParam0))
	{
		iVar0 = get_interior_at_coords_with_type(vParam4, sParam3);
		if (!is_valid_interior(iVar0))
		{
			return false;
		}
		iVar1 = get_interior_from_collision(vParam0);
		if (iVar1 == iVar0)
		{
			return true;
		}
	}
	return false;
}

int func_376(int iParam0, auto uParam1, auto uParam2)
{
	*uParam1 = {0f, 0f, 0f};
	*uParam2 = 0f;
	switch (iParam0)
	{
		case 0:
			*uParam1 = {-829.842f, -191.7454f, 36.4386f};
			*uParam2 = 29.5061f;
			break;
		
		case 1:
			*uParam1 = {129.8484f, -1716.528f, 28.0702f};
			*uParam2 = 50.3483f;
			break;
		
		case 2:
			*uParam1 = {-1296.913f, -1120.999f, 5.3951f};
			*uParam2 = 0.9933f;
			break;
		
		case 3:
			*uParam1 = {1938.028f, 3718.736f, 31.3154f};
			*uParam2 = 118.2305f;
			break;
		
		case 4:
			*uParam1 = {1197.866f, -469.3809f, 65.0885f};
			*uParam2 = 346.4477f;
			break;
		
		case 5:
			*uParam1 = {-32.2161f, -135.8212f, 56.0532f};
			*uParam2 = 186.0052f;
			break;
		
		case 6:
			*uParam1 = {-287.7696f, 6238.081f, 30.2902f};
			*uParam2 = 316.1349f;
			break;
		
		case 7:
			*uParam1 = {99.2876f, -1395.16f, 28.2759f};
			*uParam2 = 320.2739f;
			break;
		
		case 8:
			*uParam1 = {1679.445f, 4819.056f, 41.0035f};
			*uParam2 = 4.6192f;
			break;
		
		case 9:
			*uParam1 = {411.3063f, -809.1863f, 28.1554f};
			*uParam2 = 1.8972f;
			break;
		
		case 10:
			*uParam1 = {-1088.054f, 2699.167f, 19.2748f};
			*uParam2 = 129.7382f;
			break;
		
		case 11:
			*uParam1 = {1194.163f, 2695.644f, 36.9225f};
			*uParam2 = 1.1454f;
			break;
		
		case 12:
			*uParam1 = {-821.2829f, -1088.027f, 10.0499f};
			*uParam2 = 120.5883f;
			break;
		
		case 13:
			*uParam1 = {-3.3416f, 6521.303f, 30.2961f};
			*uParam2 = 316.4451f;
			break;
		
		case 14:
			*uParam1 = {-1208.417f, -785.9635f, 16.0139f};
			*uParam2 = 36.3181f;
			break;
		
		case 15:
			*uParam1 = {623.1845f, 2739.191f, 40.9588f};
			*uParam2 = 3.5411f;
			break;
		
		case 16:
			*uParam1 = {130.9555f, -198.2084f, 53.41f};
			*uParam2 = 251.3506f;
			break;
		
		case 17:
			*uParam1 = {-3164.065f, 1067.317f, 19.6778f};
			*uParam2 = 101.2229f;
			break;
		
		case 18:
			*uParam1 = {-713.2797f, -174.2767f, 35.8962f};
			*uParam2 = 29.8138f;
			break;
		
		case 19:
			*uParam1 = {-147.0616f, -306.4322f, 37.7912f};
			*uParam2 = 160.4526f;
			break;
		
		case 20:
			*uParam1 = {-1461.355f, -230.6092f, 48.3064f};
			*uParam2 = 318.7851f;
			break;
		
		case 21:
			*uParam1 = {-1347.739f, -1278.573f, 3.8952f};
			*uParam2 = 17.9365f;
			break;
		
		case 22:
			*uParam1 = {325.6833f, 164.3263f, 102.4425f};
			*uParam2 = 68.6407f;
			break;
		
		case 23:
			*uParam1 = {1858.774f, 3742.393f, 32.0779f};
			*uParam2 = 301.2329f;
			break;
		
		case 24:
			*uParam1 = {-286.3272f, 6202.802f, 30.3323f};
			*uParam2 = 225.1334f;
			break;
		
		case 25:
			*uParam1 = {-1161.596f, -1417.7f, 3.712f};
			*uParam2 = 246.9161f;
			break;
		
		case 26:
			*uParam1 = {1308.952f, -1660.611f, 50.2362f};
			*uParam2 = 163.5456f;
			break;
		
		case 27:
			*uParam1 = {-3161.585f, 1074.214f, 19.6847f};
			*uParam2 = 98.6092f;
			break;
		
		case 28:
			*uParam1 = {28.423f, -1110.814f, 28.2848f};
			*uParam2 = 85.2495f;
			break;
		
		case 29:
			*uParam1 = {1704.966f, 3749.709f, 33.0188f};
			*uParam2 = 45.6778f;
			break;
		
		case 30:
			*uParam1 = {223.949f, -38.7894f, 68.6483f};
			*uParam2 = 159.4265f;
			break;
		
		case 31:
			*uParam1 = {837.7854f, -1017.963f, 26.3045f};
			*uParam2 = 181.0445f;
			break;
		
		case 32:
			*uParam1 = {-313.1914f, 6093.351f, 30.4625f};
			*uParam2 = 315.8405f;
			break;
		
		case 33:
			*uParam1 = {-663.4631f, -952.8069f, 20.3143f};
			*uParam2 = 92.6796f;
			break;
		
		case 34:
			*uParam1 = {-1323.06f, -392.8577f, 35.4596f};
			*uParam2 = 210.7398f;
			break;
		
		case 35:
			*uParam1 = {-1106.102f, 2684.35f, 18.0953f};
			*uParam2 = 127.0383f;
			break;
		
		case 36:
			*uParam1 = {-3157.932f, 1081.309f, 19.6953f};
			*uParam2 = 100.2942f;
			break;
		
		case 37:
			*uParam1 = {2562.882f, 312.8641f, 107.4612f};
			*uParam2 = 179.205f;
			break;
		
		case 38:
			*uParam1 = {822.48f, -2142.875f, 27.8496f};
			*uParam2 = 355.0598f;
			break;
		
		case 39:
			*uParam1 = {-1137.053f, -1993.916f, 12.1677f};
			*uParam2 = 43.1213f;
			break;
		
		case 40:
			*uParam1 = {717.8107f, -1084.081f, 21.3094f};
			*uParam2 = 93.2649f;
			break;
		
		case 41:
			*uParam1 = {-387.6789f, -128.2568f, 37.6796f};
			*uParam2 = 119.1085f;
			break;
		
		case 42:
			*uParam1 = {117.8835f, 6599.415f, 31.0134f};
			*uParam2 = 90.7225f;
			break;
		
		case 43:
			*uParam1 = {1201.709f, 2664.813f, 36.8102f};
			*uParam2 = 133.9002f;
			break;
		
		case 44:
			*uParam1 = {-200.1521f, -1297.502f, 30.296f};
			*uParam2 = 269.0687f;
			break;
	}
	return !func_162(*uParam1, 0f, 0f, 0f, 0);
}

bool func_377(auto uParam0)
{
	if (!is_entity_dead(player_ped_id(), 0) && !is_ped_injured(player_ped_id()))
	{
		if (func_34())
		{
			*uParam0 = func_382(get_entity_coords(player_ped_id(), 0), 5, -1, 0, 1, -1);
			if (func_381(*uParam0) && !func_378(*uParam0))
			{
				return true;
			}
		}
	}
	return false;
}

int func_378(int iParam0)
{
	return func_379(iParam0, 0, 1);
}

int func_379(int iParam0, int iParam1, int iParam2)
{
	if (iParam2)
	{
		return is_bit_set(Global_91330.f_1300[iParam0], iParam1);
	}
	else if (network_is_game_in_progress())
	{
		if (func_25() == 0)
		{
			return is_bit_set(func_361(func_380(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return is_bit_set(Global_101154.f_668[iParam0], iParam1);
	}
	return false;
}

int func_380(int iParam0)
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

int func_381(int iParam0)
{
	return func_379(iParam0, 5, 1);
}

int func_382(Vector3 vParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 44)
	{
		if (iParam3 == 5 || iParam3 == func_385(iVar0))
		{
			if (!iParam5 || func_384(iVar0))
			{
				fVar1 = get_distance_between_coords(vParam0, func_383(iVar0, 0), 1);
				if (((fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam4) || iParam4 == -1)) && (iParam6 || iVar0 != 21)) && iVar0 != iParam7)
				{
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

Vector3 func_383(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1:
			return 0f, 0f, 0f;
			break;
		
		case 0:
			return -821.9946f, -187.1776f, 36.5689f;
			break;
		
		case 1:
			return 133.5702f, -1710.918f, 28.2916f;
			break;
		
		case 2:
			return -1287.082f, -1116.558f, 5.9901f;
			break;
		
		case 3:
			return 1933.119f, 3726.079f, 31.8444f;
			break;
		
		case 4:
			return 1208.333f, -470.917f, 65.208f;
			break;
		
		case 5:
			return -30.7448f, -148.4921f, 56.0765f;
			break;
		
		case 6:
			return -280.8165f, 6231.771f, 30.6955f;
			break;
		
		case 7:
			return 80.665f, -1391.669f, 28.3761f;
			break;
		
		case 8:
			return 1687.881f, 4820.55f, 41.0096f;
			break;
		
		case 9:
			return 419.531f, -807.5787f, 28.4896f;
			break;
		
		case 10:
			return -1094.049f, 2704.171f, 18.0873f;
			break;
		
		case 11:
			return 1197.972f, 2704.22f, 37.1572f;
			break;
		
		case 12:
			return -818.6218f, -1077.533f, 10.3282f;
			break;
		
		case 13:
			return -0.2361f, 6516.045f, 30.8684f;
			break;
		
		case 14:
			return -1199.809f, -776.6886f, 16.3237f;
			break;
		
		case 15:
			return 618.1857f, 2752.567f, 41.0881f;
			break;
		
		case 16:
			return 126.6853f, -212.5027f, 53.5578f;
			break;
		
		case 17:
			return -3168.966f, 1055.287f, 19.8632f;
			break;
		
		case 18:
			return -715.3598f, -155.7742f, 36.4105f;
			break;
		
		case 19:
			return -158.2199f, -304.9663f, 38.735f;
			break;
		
		case 20:
			return -1455.005f, -233.1862f, 48.7936f;
			break;
		
		case 21:
			return -1335.973f, -1278.555f, 3.8598f;
			break;
		
		case 22:
			return 321.6098f, 179.4165f, 102.5865f;
			break;
		
		case 23:
			return 1861.685f, 3750.08f, 32.0318f;
			break;
		
		case 24:
			return -290.1603f, 6199.095f, 30.4871f;
			break;
		
		case 25:
			return -1153.948f, -1425.019f, 3.9544f;
			break;
		
		case 26:
			return 1322.455f, -1651.125f, 51.1885f;
			break;
		
		case 27:
			return -3169.42f, 1074.727f, 19.8343f;
			break;
		
		case 28:
			return 17.6804f, -1114.288f, 28.797f;
			break;
		
		case 29:
			return 1697.979f, 3753.2f, 33.7053f;
			break;
		
		case 30:
			return 245.2711f, -45.8126f, 68.941f;
			break;
		
		case 31:
			return 844.1248f, -1025.571f, 27.1948f;
			break;
		
		case 32:
			return -325.8904f, 6077.026f, 30.4548f;
			break;
		
		case 33:
			return -664.2178f, -943.3646f, 20.8292f;
			break;
		
		case 34:
			return -1313.948f, -390.9637f, 35.592f;
			break;
		
		case 35:
			return -1111.238f, 2688.463f, 17.6131f;
			break;
		
		case 36:
			return -3165.231f, 1082.855f, 19.8438f;
			break;
		
		case 37:
			return 2569.612f, 302.576f, 107.7349f;
			break;
		
		case 38:
			return 811.8699f, -2149.102f, 28.6363f;
			break;
		
		case 39:
			return -1147.314f, -1992.434f, 12.1803f;
			break;
		
		case 40:
			return 724.524f, -1089.081f, 21.1692f;
			break;
		
		case 41:
			return -354.5272f, -135.4011f, 38.185f;
			break;
		
		case 42:
			return 113.2615f, 6624.28f, 30.7871f;
			break;
		
		case 43:
			return 1174.707f, 2644.45f, 36.7552f;
			break;
		
		case 44:
			if (iParam1)
			{
				return -211.5f, -1324.2f, 30.296f;
			}
			else
			{
				return -205.6654f, -1311.113f, 30.296f;
			}
			break;
	}
	return 1000000f, 1000000f, 1000000f;
}

int func_384(int iParam0)
{
	return func_379(iParam0, 0, 0);
}

int func_385(int iParam0)
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

auto func_386()
{
	auto uVar0;
	
	func_396(&uVar0, get_clock_seconds());
	func_395(&uVar0, get_clock_minutes());
	func_394(&uVar0, get_clock_hours());
	func_389(&uVar0, get_clock_day_of_month());
	func_388(&uVar0, get_clock_month());
	func_387(&uVar0, get_clock_year());
	return uVar0;
}

void func_387(auto uParam0, int iParam1)
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

void func_388(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 -= *uParam0 & 15;
	*uParam0 = (*uParam0 || iParam1);
}

void func_389(auto uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_393(*uParam0);
	iVar1 = func_391(*uParam0);
	if (iParam1 < 1 || iParam1 > func_390(iVar0, iVar1))
	{
		return;
	}
	*uParam0 -= *uParam0 & 496;
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

int func_390(int iParam0, int iParam1)
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

auto func_391(int iParam0)
{
	return shift_right(iParam0, 26) & 31 * func_392(is_bit_set(iParam0, 31), -1, 1) + 2011;
}

int func_392(int iParam0, int iParam1, int iParam2)
{
	if (iParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_393(auto uParam0)
{
	return uParam0 & 15;
}

void func_394(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 -= *uParam0 & 15872;
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_395(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 -= *uParam0 & 1032192;
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_396(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 -= *uParam0 & 66060288;
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

int func_397(char* sParam0)
{
	if (are_strings_equal("BailBond1", sParam0))
	{
		return 0;
	}
	else if (are_strings_equal("BailBond2", sParam0))
	{
		return 1;
	}
	else if (are_strings_equal("BailBond3", sParam0))
	{
		return 2;
	}
	else if (are_strings_equal("BailBond4", sParam0))
	{
		return 3;
	}
	return -1;
}

struct<2> func_398(int iParam0)
{
	char[8] cVar0;
	
	StringCopy(&cVar0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&cVar0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&cVar0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&cVar0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&cVar0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&cVar0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&cVar0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&cVar0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&cVar0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&cVar0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&cVar0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&cVar0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&cVar0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&cVar0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&cVar0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&cVar0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&cVar0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&cVar0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&cVar0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&cVar0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&cVar0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&cVar0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&cVar0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&cVar0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&cVar0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&cVar0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&cVar0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&cVar0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&cVar0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&cVar0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&cVar0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&cVar0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&cVar0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&cVar0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&cVar0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&cVar0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&cVar0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&cVar0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&cVar0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&cVar0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&cVar0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&cVar0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&cVar0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&cVar0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&cVar0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&cVar0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&cVar0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&cVar0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&cVar0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&cVar0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&cVar0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&cVar0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&cVar0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&cVar0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&cVar0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&cVar0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&cVar0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&cVar0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&cVar0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&cVar0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&cVar0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&cVar0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&cVar0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&cVar0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return cVar0;
}

int func_399(char* sParam0, int iParam1)
{
	int iVar0;
	char* sVar1;
	int iVar33;
	int iVar34;
	
	iVar33 = get_hash_key(sParam0);
	iVar34 = 0;
	iVar34 = 0;
	while (iVar34 < 63)
	{
		iVar0 = iVar34;
		func_400(iVar0, &sVar1);
		if (get_hash_key(sVar1) == iVar33)
		{
			return iVar0;
		}
		iVar34++;
	}
	if (iParam1 == 0)
	{
	}
	return -1;
}

void func_400(int iParam0, auto uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_401(uParam1, "Abigail1", func_403(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_402(iParam0), 1, 0);
			break;
		
		case 1:
			func_401(uParam1, "Abigail2", func_403(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_402(iParam0), 1, 0);
			break;
		
		case 2:
			func_401(uParam1, "Barry1", func_403(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_402(iParam0), 1, 0);
			break;
		
		case 3:
			func_401(uParam1, "Barry2", func_403(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_402(iParam0), 1, 1);
			break;
		
		case 4:
			func_401(uParam1, "Barry3", func_403(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_402(iParam0), 0, 0);
			break;
		
		case 5:
			func_401(uParam1, "Barry3A", func_403(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_402(iParam0), 0, 1);
			break;
		
		case 6:
			func_401(uParam1, "Barry3C", func_403(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_402(iParam0), 0, 1);
			break;
		
		case 7:
			func_401(uParam1, "Barry4", func_403(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_402(iParam0), 0, 0);
			break;
		
		case 8:
			func_401(uParam1, "Dreyfuss1", func_403(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_402(iParam0), 0, 0);
			break;
		
		case 9:
			func_401(uParam1, "Epsilon1", func_403(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_402(iParam0), 0, 0);
			break;
		
		case 10:
			func_401(uParam1, "Epsilon2", func_403(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_402(iParam0), 1, 0);
			break;
		
		case 11:
			func_401(uParam1, "Epsilon3", func_403(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_402(iParam0), 0, 0);
			break;
		
		case 12:
			func_401(uParam1, "Epsilon4", func_403(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_402(iParam0), 0, 0);
			break;
		
		case 13:
			func_401(uParam1, "Epsilon5", func_403(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_402(iParam0), 1, 0);
			break;
		
		case 14:
			func_401(uParam1, "Epsilon6", func_403(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_402(iParam0), 0, 1);
			break;
		
		case 15:
			func_401(uParam1, "Epsilon7", func_403(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_402(iParam0), 0, 0);
			break;
		
		case 16:
			func_401(uParam1, "Epsilon8", func_403(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_402(iParam0), 1, 0);
			break;
		
		case 17:
			func_401(uParam1, "Extreme1", func_403(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_402(iParam0), 0, 1);
			break;
		
		case 18:
			func_401(uParam1, "Extreme2", func_403(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_402(iParam0), 0, 1);
			break;
		
		case 19:
			func_401(uParam1, "Extreme3", func_403(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_402(iParam0), 0, 1);
			break;
		
		case 20:
			func_401(uParam1, "Extreme4", func_403(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_402(iParam0), 0, 0);
			break;
		
		case 21:
			func_401(uParam1, "Fanatic1", func_403(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_402(iParam0), 1, 0);
			break;
		
		case 22:
			func_401(uParam1, "Fanatic2", func_403(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_402(iParam0), 1, 0);
			break;
		
		case 23:
			func_401(uParam1, "Fanatic3", func_403(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_402(iParam0), 0, 1);
			break;
		
		case 24:
			func_401(uParam1, "Hao1", func_403(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_402(iParam0), 0, 1);
			break;
		
		case 25:
			func_401(uParam1, "Hunting1", func_403(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_402(iParam0), 0, 1);
			break;
		
		case 26:
			func_401(uParam1, "Hunting2", func_403(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_402(iParam0), 0, 1);
			break;
		
		case 27:
			func_401(uParam1, "Josh1", func_403(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_402(iParam0), 1, 0);
			break;
		
		case 28:
			func_401(uParam1, "Josh2", func_403(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_402(iParam0), 1, 1);
			break;
		
		case 29:
			func_401(uParam1, "Josh3", func_403(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_402(iParam0), 1, 1);
			break;
		
		case 30:
			func_401(uParam1, "Josh4", func_403(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_402(iParam0), 1, 0);
			break;
		
		case 31:
			func_401(uParam1, "Maude1", func_403(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_402(iParam0), 0, 1);
			break;
		
		case 32:
			func_401(uParam1, "Minute1", func_403(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_402(iParam0), 0, 1);
			break;
		
		case 33:
			func_401(uParam1, "Minute2", func_403(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_402(iParam0), 0, 1);
			break;
		
		case 34:
			func_401(uParam1, "Minute3", func_403(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_402(iParam0), 0, 1);
			break;
		
		case 35:
			func_401(uParam1, "MrsPhilips1", func_403(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_402(iParam0), 0, 0);
			break;
		
		case 36:
			func_401(uParam1, "MrsPhilips2", func_403(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_402(iParam0), 0, 0);
			break;
		
		case 37:
			func_401(uParam1, "Nigel1", func_403(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_402(iParam0), 1, 0);
			break;
		
		case 38:
			func_401(uParam1, "Nigel1A", func_403(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_402(iParam0), 1, 1);
			break;
		
		case 39:
			func_401(uParam1, "Nigel1B", func_403(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_402(iParam0), 1, 1);
			break;
		
		case 40:
			func_401(uParam1, "Nigel1C", func_403(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_402(iParam0), 1, 1);
			break;
		
		case 41:
			func_401(uParam1, "Nigel1D", func_403(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_402(iParam0), 1, 1);
			break;
		
		case 42:
			func_401(uParam1, "Nigel2", func_403(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_402(iParam0), 1, 1);
			break;
		
		case 43:
			func_401(uParam1, "Nigel3", func_403(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_402(iParam0), 1, 1);
			break;
		
		case 44:
			func_401(uParam1, "Omega1", func_403(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_402(iParam0), 0, 0);
			break;
		
		case 45:
			func_401(uParam1, "Omega2", func_403(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_402(iParam0), 0, 0);
			break;
		
		case 46:
			func_401(uParam1, "Paparazzo1", func_403(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_402(iParam0), 0, 1);
			break;
		
		case 47:
			func_401(uParam1, "Paparazzo2", func_403(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_402(iParam0), 0, 1);
			break;
		
		case 48:
			func_401(uParam1, "Paparazzo3", func_403(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_402(iParam0), 0, 0);
			break;
		
		case 49:
			func_401(uParam1, "Paparazzo3A", func_403(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_402(iParam0), 0, 1);
			break;
		
		case 50:
			func_401(uParam1, "Paparazzo3B", func_403(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_402(iParam0), 0, 1);
			break;
		
		case 51:
			func_401(uParam1, "Paparazzo4", func_403(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_402(iParam0), 0, 0);
			break;
		
		case 52:
			func_401(uParam1, "Rampage1", func_403(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_402(iParam0), 0, 0);
			break;
		
		case 54:
			func_401(uParam1, "Rampage3", func_403(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_402(iParam0), 1, 0);
			break;
		
		case 55:
			func_401(uParam1, "Rampage4", func_403(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_402(iParam0), 1, 0);
			break;
		
		case 56:
			func_401(uParam1, "Rampage5", func_403(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_402(iParam0), 0, 0);
			break;
		
		case 53:
			func_401(uParam1, "Rampage2", func_403(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_402(iParam0), 1, 0);
			break;
		
		case 57:
			func_401(uParam1, "TheLastOne", func_403(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_402(iParam0), 0, 1);
			break;
		
		case 58:
			func_401(uParam1, "Tonya1", func_403(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_402(iParam0), 0, 1);
			break;
		
		case 59:
			func_401(uParam1, "Tonya2", func_403(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_402(iParam0), 0, 1);
			break;
		
		case 60:
			func_401(uParam1, "Tonya3", func_403(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_402(iParam0), 0, 1);
			break;
		
		case 61:
			func_401(uParam1, "Tonya4", func_403(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_402(iParam0), 0, 1);
			break;
		
		case 62:
			func_401(uParam1, "Tonya5", func_403(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_402(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_401(auto uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, Vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, auto uParam19, int iParam20, int iParam21)
{
	*uParam0.f_4 = iParam5;
	*uParam0 = sParam1;
	*uParam0.f_1 = {Param2};
	*uParam0.f_3 = iParam4;
	*uParam0.f_5 = iParam6;
	*uParam0.f_6 = {vParam7};
	*uParam0.f_9 = iParam10;
	StringCopy(uParam0.f_10, sParam11, 16);
	*uParam0.f_14 = iParam12;
	*uParam0.f_15 = iParam13;
	StringCopy(uParam0.f_16, sParam14, 24);
	*uParam0.f_22 = iParam15;
	*uParam0.f_23 = iParam16;
	*uParam0.f_24 = iParam17;
	*uParam0.f_25 = iParam18;
	*uParam0.f_26 = iParam19;
	*uParam0.f_27 = iParam20;
	*uParam0.f_28 = iParam21;
	*uParam0.f_29 = uParam22;
	*uParam0.f_30 = iParam23;
	*uParam0.f_31 = iParam24;
}

bool func_402(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return false;
			break;
		
		case 1:
			return false;
			break;
		
		case 2:
			return true;
			break;
		
		case 3:
			return true;
			break;
		
		case 4:
			return false;
			break;
		
		case 5:
			return true;
			break;
		
		case 6:
			return true;
			break;
		
		case 7:
			return false;
			break;
		
		case 8:
			return true;
			break;
		
		case 9:
			return false;
			break;
		
		case 10:
			return false;
			break;
		
		case 11:
			return false;
			break;
		
		case 12:
			return true;
			break;
		
		case 13:
			return false;
			break;
		
		case 14:
			return true;
			break;
		
		case 15:
			return false;
			break;
		
		case 16:
			return true;
			break;
		
		case 17:
			return true;
			break;
		
		case 18:
			return true;
			break;
		
		case 19:
			return true;
			break;
		
		case 20:
			return true;
			break;
		
		case 21:
			return true;
			break;
		
		case 22:
			return true;
			break;
		
		case 23:
			return true;
			break;
		
		case 24:
			return true;
			break;
		
		case 25:
			return true;
			break;
		
		case 26:
			return true;
			break;
		
		case 27:
			return false;
			break;
		
		case 28:
			return true;
			break;
		
		case 29:
			return true;
			break;
		
		case 30:
			return true;
			break;
		
		case 31:
			return false;
			break;
		
		case 32:
			return true;
			break;
		
		case 33:
			return true;
			break;
		
		case 34:
			return true;
			break;
		
		case 35:
			return false;
			break;
		
		case 36:
			return false;
			break;
		
		case 37:
			return false;
			break;
		
		case 38:
			return true;
			break;
		
		case 39:
			return true;
			break;
		
		case 40:
			return true;
			break;
		
		case 41:
			return true;
			break;
		
		case 42:
			return true;
			break;
		
		case 43:
			return true;
			break;
		
		case 44:
			return false;
			break;
		
		case 45:
			return false;
			break;
		
		case 46:
			return true;
			break;
		
		case 47:
			return true;
			break;
		
		case 48:
			return false;
			break;
		
		case 49:
			return true;
			break;
		
		case 50:
			return true;
			break;
		
		case 51:
			return true;
			break;
		
		case 52:
			return true;
			break;
		
		case 54:
			return true;
			break;
		
		case 55:
			return true;
			break;
		
		case 56:
			return true;
			break;
		
		case 53:
			return true;
			break;
		
		case 57:
			return true;
			break;
		
		case 58:
			return true;
			break;
		
		case 59:
			return true;
			break;
		
		case 60:
			return true;
			break;
		
		case 61:
			return true;
			break;
		
		case 62:
			return true;
			break;
		
		default:
			break;
	}
	return false;
}

struct<2> func_403(int iParam0)
{
	char[8] cVar0;
	struct<2> Var2;
	
	StringCopy(&cVar0, "", 8);
	Var2 = {func_398(iParam0)};
	if (is_string_null_or_empty(&Var2))
	{
	}
	else
	{
		StringCopy(&cVar0, "RC_", 8);
		StringConCat(&cVar0, &Var2, 8);
	}
	return cVar0;
}

int func_404(int iParam0)
{
	switch (iParam0)
	{
		case 69:
		case 70:
			return func_405(Global_101154.f_7775.f_99.f_205[10]);
			break;
		
		case 74:
		case 75:
			return func_405(Global_101154.f_7775.f_99.f_205[8]);
			break;
		
		case 84:
		case 85:
			return func_405(Global_101154.f_7775.f_99.f_205[11]);
			break;
		
		case 90:
			return func_405(Global_101154.f_7775.f_99.f_205[7]);
			break;
		
		case 93:
			return func_405(Global_101154.f_7775.f_99.f_205[9]);
			break;
	}
	return 0;
}

int func_405(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 3:
		case 5:
		case 6:
		case 8:
			return 0;
			break;
		
		case 2:
		case 4:
		case 7:
		case 9:
			return 1;
			break;
	}
	return -1;
}

int func_406(char* sParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = get_hash_key(sParam0);
	iVar1 = func_407(iVar0, 1);
	if (iVar1 == -1 && !iParam1)
	{
	}
	return iVar1;
}

int func_407(int iParam0, int iParam1)
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

void func_408(int iParam0)
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

void func_409(int iParam0)
{
	func_339(iParam0);
	_set_far_shadows_suppressed(1);
	set_all_vehicle_generators_active();
	set_wanted_level_multiplier(1f);
	set_max_wanted_level(5);
	_0xDC0F817884CDD856(3, true);
	func_205(0);
	func_88();
	clear_prints();
	if (_0x0EAEB0DB4B132399(iLocal_2510))
	{
		remove_navmesh_blocking_object(iLocal_2510);
	}
	if (!is_ped_injured(player_ped_id()))
	{
		remove_weapon_from_ped(player_ped_id(), joaat("weapon_petrolcan"));
		clear_ped_tasks(player_ped_id());
	}
	if (!is_ped_injured(player_ped_id()))
	{
		if (get_interior_from_entity(player_ped_id()) != 0)
		{
			if (func_67(player_ped_id(), 2444.098f, 4977.795f, 48.9959f, 1) < 100f)
			{
				set_entity_coords(player_ped_id(), 2463.811f, 4961.747f, 44.176f, 1, false, 0, 1);
				set_entity_heading(player_ped_id(), 20f);
			}
		}
	}
	if (iParam0 == 1 || iParam0 == 2)
	{
		func_19(50, 0, 0, 1, 0);
		func_19(51, 0, 0, 1, 0);
		func_19(52, 0, 0, 1, 0);
		func_19(53, 0, 0, 1, 0);
		func_19(54, 0, 0, 1, 0);
		func_19(55, 0, 0, 1, 0);
	}
	terminate_this_thread();
}

void func_410()
{
	int iVar0;
	
	if (SCRIPT::HAS_SCRIPT_LOADED("buddyDeathResponse"))
	{
		SYSTEM::START_NEW_SCRIPT("buddyDeathResponse", 1424);
	}
	if (Global_101154.f_7775 || func_141(0))
	{
		if (!func_411())
		{
			iVar0 = func_140();
			if (iVar0 != -1)
			{
				if (!func_134(iVar0))
				{
					return;
				}
				set_bit(&(Global_82363[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_139();
		}
	}
}

bool func_411()
{
	if (((Global_91278 == 13 || Global_91278 == 10) || Global_91278 == 11) || Global_91278 == 12)
	{
		return false;
	}
	return true;
}

