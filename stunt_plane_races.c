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
	float fLocal_12 = 0;
	float fLocal_13 = 0;
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
	int iLocal_28 = 0;
	float fLocal_29 = 0;
	Vector3 vLocal_30 = 0;
	float fLocal_33 = 0;
	float fLocal_34 = 0;
	auto uLocal_35 = 0;
	auto uLocal_36 = 0;
	auto uLocal_37 = 0;
	auto uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	Vector3 vLocal_45 = 0;
	Vector3 vLocal_48 = 0;
	struct<328> Local_51 = 0;
	auto uLocal_379 = 0;
	auto uLocal_380 = 0;
	auto uLocal_381 = 0;
	auto uLocal_382 = 0;
	auto uLocal_383 = 0;
	auto uLocal_384 = 0;
	auto uLocal_385 = 0;
	auto uLocal_386 = 0;
	auto uLocal_387 = 0;
	auto uLocal_388 = 0;
	auto uLocal_389 = 0;
	auto uLocal_390 = 8;
	auto uLocal_391 = 0;
	auto uLocal_392 = 0;
	auto uLocal_393 = 0;
	auto uLocal_394 = 4;
	auto uLocal_395 = 0;
	auto uLocal_396 = 0;
	auto uLocal_397 = 0;
	auto uLocal_398 = 0;
	auto uLocal_399 = 0;
	auto uLocal_400 = 0;
	auto uLocal_401 = 0;
	auto uLocal_402 = 0;
	auto uLocal_403 = 0;
	auto uLocal_404 = 0;
	auto uLocal_405 = 0;
	auto uLocal_406 = 0;
	auto uLocal_407 = 0;
	auto uLocal_408 = 0;
	auto uLocal_409 = 4;
	auto uLocal_410 = 0;
	auto uLocal_411 = 0;
	auto uLocal_412 = 0;
	auto uLocal_413 = 0;
	auto uLocal_414 = 0;
	auto uLocal_415 = 0;
	auto uLocal_416 = 0;
	auto uLocal_417 = 0;
	auto uLocal_418 = 0;
	auto uLocal_419 = 0;
	auto uLocal_420 = 0;
	auto uLocal_421 = 0;
	auto uLocal_422 = 0;
	auto uLocal_423 = 0;
	auto uLocal_424 = 4;
	auto uLocal_425 = 0;
	auto uLocal_426 = 0;
	auto uLocal_427 = 0;
	auto uLocal_428 = 0;
	auto uLocal_429 = 0;
	auto uLocal_430 = 0;
	auto uLocal_431 = 0;
	auto uLocal_432 = 0;
	auto uLocal_433 = 0;
	auto uLocal_434 = 0;
	auto uLocal_435 = 0;
	auto uLocal_436 = 0;
	auto uLocal_437 = 0;
	auto uLocal_438 = 0;
	auto uLocal_439 = 4;
	auto uLocal_440 = 0;
	auto uLocal_441 = 0;
	auto uLocal_442 = 0;
	auto uLocal_443 = 0;
	auto uLocal_444 = 0;
	auto uLocal_445 = 0;
	auto uLocal_446 = 0;
	auto uLocal_447 = 0;
	auto uLocal_448 = 0;
	auto uLocal_449 = 0;
	auto uLocal_450 = 0;
	auto uLocal_451 = 0;
	auto uLocal_452 = 0;
	auto uLocal_453 = 0;
	auto uLocal_454 = 4;
	auto uLocal_455 = 0;
	auto uLocal_456 = 0;
	auto uLocal_457 = 0;
	auto uLocal_458 = 0;
	auto uLocal_459 = 0;
	auto uLocal_460 = 0;
	auto uLocal_461 = 0;
	auto uLocal_462 = 0;
	auto uLocal_463 = 0;
	auto uLocal_464 = 0;
	auto uLocal_465 = 0;
	auto uLocal_466 = 0;
	auto uLocal_467 = 0;
	auto uLocal_468 = 0;
	auto uLocal_469 = 4;
	auto uLocal_470 = 0;
	auto uLocal_471 = 0;
	auto uLocal_472 = 0;
	auto uLocal_473 = 0;
	auto uLocal_474 = 0;
	auto uLocal_475 = 0;
	auto uLocal_476 = 0;
	auto uLocal_477 = 0;
	auto uLocal_478 = 0;
	auto uLocal_479 = 0;
	auto uLocal_480 = 0;
	auto uLocal_481 = 0;
	auto uLocal_482 = 0;
	auto uLocal_483 = 0;
	auto uLocal_484 = 4;
	auto uLocal_485 = 0;
	auto uLocal_486 = 0;
	auto uLocal_487 = 0;
	auto uLocal_488 = 0;
	auto uLocal_489 = 0;
	auto uLocal_490 = 0;
	auto uLocal_491 = 0;
	auto uLocal_492 = 0;
	auto uLocal_493 = 0;
	auto uLocal_494 = 0;
	auto uLocal_495 = 0;
	auto uLocal_496 = 0;
	auto uLocal_497 = 0;
	auto uLocal_498 = 0;
	auto uLocal_499 = 4;
	auto uLocal_500 = 0;
	auto uLocal_501 = 0;
	auto uLocal_502 = 0;
	auto uLocal_503 = 0;
	auto uLocal_504 = 0;
	auto uLocal_505 = 0;
	auto uLocal_506 = 0;
	auto uLocal_507 = 0;
	auto uLocal_508 = 0;
	auto uLocal_509 = 0;
	auto uLocal_510 = 0;
	auto uLocal_511 = 0;
	auto uLocal_512 = 0;
	auto uLocal_513 = 0;
	auto uLocal_514 = 0;
	auto uLocal_515 = 0;
	auto uLocal_516 = 0;
	Vector3 vLocal_517 = 0;
	int iLocal_520 = 0;
	int iLocal_521 = 0;
	int iLocal_522 = 0;
	auto uLocal_523 = 0;
	auto uLocal_524 = 0;
	int iLocal_525 = 0;
	int iLocal_526 = 0;
	int iLocal_527 = 0;
	int iLocal_528 = 0;
	int iLocal_529 = 0;
	int iLocal_530 = 0;
	int[] iLocal_531 = new int[5];
	float fLocal_537 = 0;
	float fLocal_538 = 0;
	auto uLocal_539 = 0;
	auto uLocal_540 = 0;
	auto uLocal_541 = 0;
	auto uLocal_542 = 0;
	auto uLocal_543 = 0;
	auto uLocal_544 = 0;
	auto uLocal_545 = 0;
	auto uLocal_546 = 0;
	auto uLocal_547 = 0;
	auto uLocal_548 = 0;
	auto uLocal_549 = 0;
	auto uLocal_550 = 0;
	auto uLocal_551 = 0;
	auto uLocal_552 = 0;
	auto uLocal_553 = 8;
	auto uLocal_554 = 0;
	auto uLocal_555 = 0;
	auto uLocal_556 = 0;
	auto uLocal_557 = 0;
	auto uLocal_558 = 0;
	auto uLocal_559 = 0;
	auto uLocal_560 = 0;
	auto uLocal_561 = 0;
	auto uLocal_562 = 2;
	auto uLocal_563 = 0;
	auto uLocal_564 = 0;
	auto uLocal_565 = 8;
	auto uLocal_566 = 0;
	auto uLocal_567 = 0;
	auto uLocal_568 = 0;
	auto uLocal_569 = 0;
	auto uLocal_570 = 0;
	auto uLocal_571 = 0;
	auto uLocal_572 = 0;
	auto uLocal_573 = 0;
	auto uLocal_574 = 8;
	auto uLocal_575 = 0;
	auto uLocal_576 = 0;
	auto uLocal_577 = 0;
	auto uLocal_578 = 0;
	auto uLocal_579 = 0;
	auto uLocal_580 = 0;
	auto uLocal_581 = 0;
	auto uLocal_582 = 0;
	float fLocal_583 = 0;
	auto uLocal_584 = 0;
	auto uLocal_585 = 0;
	float fLocal_586 = 0;
	float fLocal_587 = 0;
	float fLocal_588 = 0;
	float fLocal_589 = 0;
	float fLocal_590 = 0;
	auto uLocal_591 = 0;
	int iLocal_592 = 0;
	auto uLocal_593 = 35;
	auto uLocal_594 = 0;
	auto uLocal_595 = 0;
	auto uLocal_596 = 0;
	auto uLocal_597 = 0;
	auto uLocal_598 = 0;
	auto uLocal_599 = 0;
	auto uLocal_600 = 0;
	auto uLocal_601 = 0;
	auto uLocal_602 = 0;
	auto uLocal_603 = 0;
	auto uLocal_604 = 0;
	auto uLocal_605 = 0;
	auto uLocal_606 = 0;
	auto uLocal_607 = 0;
	auto uLocal_608 = 0;
	auto uLocal_609 = 0;
	auto uLocal_610 = 0;
	auto uLocal_611 = 0;
	auto uLocal_612 = 0;
	auto uLocal_613 = 0;
	auto uLocal_614 = 0;
	auto uLocal_615 = 0;
	auto uLocal_616 = 0;
	auto uLocal_617 = 0;
	auto uLocal_618 = 0;
	auto uLocal_619 = 0;
	auto uLocal_620 = 0;
	auto uLocal_621 = 0;
	auto uLocal_622 = 0;
	auto uLocal_623 = 0;
	auto uLocal_624 = 0;
	auto uLocal_625 = 0;
	auto uLocal_626 = 0;
	auto uLocal_627 = 0;
	auto uLocal_628 = 0;
	auto uLocal_629 = 0;
	auto uLocal_630 = 0;
	auto uLocal_631 = 0;
	auto uLocal_632 = 0;
	auto uLocal_633 = 0;
	auto uLocal_634 = 0;
	auto uLocal_635 = 0;
	auto uLocal_636 = 0;
	auto uLocal_637 = 0;
	auto uLocal_638 = 0;
	auto uLocal_639 = 0;
	auto uLocal_640 = 0;
	auto uLocal_641 = 0;
	auto uLocal_642 = 0;
	auto uLocal_643 = 0;
	auto uLocal_644 = 0;
	auto uLocal_645 = 0;
	auto uLocal_646 = 0;
	auto uLocal_647 = 0;
	auto uLocal_648 = 0;
	auto uLocal_649 = 0;
	auto uLocal_650 = 0;
	auto uLocal_651 = 0;
	auto uLocal_652 = 0;
	auto uLocal_653 = 0;
	auto uLocal_654 = 0;
	auto uLocal_655 = 0;
	auto uLocal_656 = 0;
	auto uLocal_657 = 0;
	auto uLocal_658 = 0;
	auto uLocal_659 = 0;
	auto uLocal_660 = 0;
	auto uLocal_661 = 0;
	auto uLocal_662 = 0;
	auto uLocal_663 = 0;
	auto uLocal_664 = 0;
	auto uLocal_665 = 0;
	auto uLocal_666 = 0;
	auto uLocal_667 = 0;
	auto uLocal_668 = 0;
	auto uLocal_669 = 0;
	auto uLocal_670 = 0;
	auto uLocal_671 = 0;
	auto uLocal_672 = 0;
	auto uLocal_673 = 0;
	auto uLocal_674 = 0;
	auto uLocal_675 = 0;
	auto uLocal_676 = 0;
	auto uLocal_677 = 0;
	auto uLocal_678 = 0;
	auto uLocal_679 = 0;
	auto uLocal_680 = 0;
	auto uLocal_681 = 0;
	auto uLocal_682 = 0;
	auto uLocal_683 = 0;
	auto uLocal_684 = 0;
	auto uLocal_685 = 0;
	auto uLocal_686 = 0;
	auto uLocal_687 = 0;
	auto uLocal_688 = 0;
	auto uLocal_689 = 0;
	auto uLocal_690 = 0;
	auto uLocal_691 = 0;
	auto uLocal_692 = 0;
	auto uLocal_693 = 0;
	auto uLocal_694 = 0;
	auto uLocal_695 = 0;
	auto uLocal_696 = 0;
	auto uLocal_697 = 0;
	auto uLocal_698 = 0;
	auto uLocal_699 = 0;
	auto uLocal_700 = 0;
	auto uLocal_701 = 0;
	auto uLocal_702 = 0;
	auto uLocal_703 = 0;
	auto uLocal_704 = 0;
	auto uLocal_705 = 0;
	auto uLocal_706 = 0;
	auto uLocal_707 = 0;
	auto uLocal_708 = 0;
	auto uLocal_709 = 0;
	auto uLocal_710 = 0;
	auto uLocal_711 = 0;
	auto uLocal_712 = 0;
	auto uLocal_713 = 0;
	auto uLocal_714 = 0;
	auto uLocal_715 = 0;
	auto uLocal_716 = 0;
	auto uLocal_717 = 0;
	auto uLocal_718 = 0;
	auto uLocal_719 = 0;
	auto uLocal_720 = 0;
	auto uLocal_721 = 0;
	auto uLocal_722 = 0;
	auto uLocal_723 = 0;
	auto uLocal_724 = 0;
	auto uLocal_725 = 0;
	auto uLocal_726 = 0;
	auto uLocal_727 = 0;
	auto uLocal_728 = 0;
	auto uLocal_729 = 0;
	auto uLocal_730 = 0;
	auto uLocal_731 = 0;
	auto uLocal_732 = 0;
	auto uLocal_733 = 0;
	auto uLocal_734 = 0;
	auto uLocal_735 = 0;
	auto uLocal_736 = 0;
	auto uLocal_737 = 0;
	auto uLocal_738 = 0;
	auto uLocal_739 = 0;
	auto uLocal_740 = 0;
	auto uLocal_741 = 0;
	auto uLocal_742 = 0;
	auto uLocal_743 = 0;
	auto uLocal_744 = 0;
	auto uLocal_745 = 0;
	auto uLocal_746 = 0;
	auto uLocal_747 = 0;
	auto uLocal_748 = 0;
	auto uLocal_749 = 0;
	auto uLocal_750 = 0;
	auto uLocal_751 = 0;
	auto uLocal_752 = 0;
	auto uLocal_753 = 0;
	auto uLocal_754 = 0;
	auto uLocal_755 = 0;
	auto uLocal_756 = 0;
	auto uLocal_757 = 0;
	auto uLocal_758 = 0;
	auto uLocal_759 = 0;
	auto uLocal_760 = 0;
	auto uLocal_761 = 0;
	auto uLocal_762 = 0;
	auto uLocal_763 = 0;
	auto uLocal_764 = 0;
	auto uLocal_765 = 0;
	auto uLocal_766 = 0;
	auto uLocal_767 = 0;
	auto uLocal_768 = 0;
	auto uLocal_769 = 0;
	auto uLocal_770 = 0;
	auto uLocal_771 = 0;
	auto uLocal_772 = 0;
	auto uLocal_773 = 0;
	auto uLocal_774 = 0;
	auto uLocal_775 = 0;
	auto uLocal_776 = 0;
	auto uLocal_777 = 0;
	auto uLocal_778 = 0;
	auto uLocal_779 = 0;
	auto uLocal_780 = 0;
	auto uLocal_781 = 0;
	auto uLocal_782 = 0;
	auto uLocal_783 = 0;
	auto uLocal_784 = 0;
	auto uLocal_785 = 0;
	auto uLocal_786 = 0;
	auto uLocal_787 = 0;
	auto uLocal_788 = 0;
	auto uLocal_789 = 0;
	auto uLocal_790 = 0;
	auto uLocal_791 = 0;
	auto uLocal_792 = 0;
	auto uLocal_793 = 0;
	auto uLocal_794 = 0;
	auto uLocal_795 = 0;
	auto uLocal_796 = 0;
	auto uLocal_797 = 0;
	auto uLocal_798 = 0;
	auto uLocal_799 = 0;
	auto uLocal_800 = 0;
	auto uLocal_801 = 0;
	auto uLocal_802 = 0;
	auto uLocal_803 = 0;
	auto uLocal_804 = 0;
	auto uLocal_805 = 0;
	auto uLocal_806 = 0;
	auto uLocal_807 = 0;
	auto uLocal_808 = 0;
	auto uLocal_809 = 0;
	auto uLocal_810 = 0;
	auto uLocal_811 = 0;
	auto uLocal_812 = 0;
	auto uLocal_813 = 0;
	auto uLocal_814 = 0;
	auto uLocal_815 = 0;
	auto uLocal_816 = 0;
	auto uLocal_817 = 0;
	auto uLocal_818 = 0;
	auto uLocal_819 = 0;
	auto uLocal_820 = 0;
	auto uLocal_821 = 0;
	auto uLocal_822 = 0;
	auto uLocal_823 = 0;
	auto uLocal_824 = 0;
	auto uLocal_825 = 0;
	auto uLocal_826 = 0;
	auto uLocal_827 = 0;
	auto uLocal_828 = 0;
	auto uLocal_829 = 0;
	auto uLocal_830 = 0;
	auto uLocal_831 = 0;
	auto uLocal_832 = 0;
	auto uLocal_833 = 0;
	auto uLocal_834 = 0;
	auto uLocal_835 = 0;
	auto uLocal_836 = 0;
	auto uLocal_837 = 0;
	auto uLocal_838 = 0;
	auto uLocal_839 = 0;
	auto uLocal_840 = 0;
	auto uLocal_841 = 0;
	auto uLocal_842 = 0;
	auto uLocal_843 = 0;
	auto uLocal_844 = 0;
	auto uLocal_845 = 0;
	auto uLocal_846 = 0;
	auto uLocal_847 = 0;
	auto uLocal_848 = 0;
	auto uLocal_849 = 0;
	auto uLocal_850 = 0;
	auto uLocal_851 = 0;
	auto uLocal_852 = 0;
	auto uLocal_853 = 0;
	auto uLocal_854 = 0;
	auto uLocal_855 = 0;
	auto uLocal_856 = 0;
	auto uLocal_857 = 0;
	auto uLocal_858 = 0;
	auto uLocal_859 = 0;
	auto uLocal_860 = 0;
	auto uLocal_861 = 0;
	auto uLocal_862 = 0;
	auto uLocal_863 = 0;
	auto uLocal_864 = 0;
	auto uLocal_865 = 0;
	auto uLocal_866 = 0;
	auto uLocal_867 = 0;
	auto uLocal_868 = 0;
	auto uLocal_869 = 0;
	auto uLocal_870 = 0;
	auto uLocal_871 = 0;
	auto uLocal_872 = 0;
	auto uLocal_873 = 0;
	auto uLocal_874 = 0;
	auto uLocal_875 = 0;
	auto uLocal_876 = 0;
	auto uLocal_877 = 0;
	auto uLocal_878 = 0;
	auto uLocal_879 = 0;
	auto uLocal_880 = 0;
	auto uLocal_881 = 0;
	auto uLocal_882 = 0;
	auto uLocal_883 = 0;
	auto uLocal_884 = 0;
	auto uLocal_885 = 0;
	auto uLocal_886 = 0;
	auto uLocal_887 = 0;
	auto uLocal_888 = 0;
	auto uLocal_889 = 0;
	auto uLocal_890 = 0;
	auto uLocal_891 = 0;
	auto uLocal_892 = 0;
	auto uLocal_893 = 0;
	auto uLocal_894 = 0;
	auto uLocal_895 = 0;
	auto uLocal_896 = 0;
	auto uLocal_897 = 0;
	auto uLocal_898 = 0;
	auto uLocal_899 = 0;
	auto uLocal_900 = 0;
	auto uLocal_901 = 0;
	auto uLocal_902 = 0;
	auto uLocal_903 = 0;
	auto uLocal_904 = 0;
	auto uLocal_905 = 0;
	auto uLocal_906 = 0;
	auto uLocal_907 = 0;
	auto uLocal_908 = 0;
	auto uLocal_909 = 50;
	auto uLocal_910 = 0;
	auto uLocal_911 = 0;
	auto uLocal_912 = 0;
	auto uLocal_913 = 0;
	auto uLocal_914 = 0;
	auto uLocal_915 = 0;
	auto uLocal_916 = 0;
	auto uLocal_917 = 0;
	auto uLocal_918 = 0;
	auto uLocal_919 = 0;
	auto uLocal_920 = 0;
	auto uLocal_921 = 0;
	auto uLocal_922 = 0;
	auto uLocal_923 = 0;
	auto uLocal_924 = 0;
	auto uLocal_925 = 0;
	auto uLocal_926 = 0;
	auto uLocal_927 = 0;
	auto uLocal_928 = 0;
	auto uLocal_929 = 0;
	auto uLocal_930 = 0;
	auto uLocal_931 = 0;
	auto uLocal_932 = 0;
	auto uLocal_933 = 0;
	auto uLocal_934 = 0;
	auto uLocal_935 = 0;
	auto uLocal_936 = 0;
	auto uLocal_937 = 0;
	auto uLocal_938 = 0;
	auto uLocal_939 = 0;
	auto uLocal_940 = 0;
	auto uLocal_941 = 0;
	auto uLocal_942 = 0;
	auto uLocal_943 = 0;
	auto uLocal_944 = 0;
	auto uLocal_945 = 0;
	auto uLocal_946 = 0;
	auto uLocal_947 = 0;
	auto uLocal_948 = 0;
	auto uLocal_949 = 0;
	auto uLocal_950 = 0;
	auto uLocal_951 = 0;
	auto uLocal_952 = 0;
	auto uLocal_953 = 0;
	auto uLocal_954 = 0;
	auto uLocal_955 = 0;
	auto uLocal_956 = 0;
	auto uLocal_957 = 0;
	auto uLocal_958 = 0;
	auto uLocal_959 = 0;
	auto uLocal_960 = 0;
	auto uLocal_961 = 0;
	auto uLocal_962 = 0;
	auto uLocal_963 = 0;
	auto uLocal_964 = 0;
	auto uLocal_965 = 0;
	auto uLocal_966 = 0;
	auto uLocal_967 = 0;
	auto uLocal_968 = 0;
	auto uLocal_969 = 0;
	auto uLocal_970 = 0;
	auto uLocal_971 = 0;
	auto uLocal_972 = 0;
	auto uLocal_973 = 0;
	auto uLocal_974 = 0;
	auto uLocal_975 = 0;
	auto uLocal_976 = 0;
	auto uLocal_977 = 0;
	auto uLocal_978 = 0;
	auto uLocal_979 = 0;
	auto uLocal_980 = 0;
	auto uLocal_981 = 0;
	auto uLocal_982 = 0;
	auto uLocal_983 = 0;
	auto uLocal_984 = 0;
	auto uLocal_985 = 0;
	auto uLocal_986 = 0;
	auto uLocal_987 = 0;
	auto uLocal_988 = 0;
	auto uLocal_989 = 0;
	auto uLocal_990 = 0;
	auto uLocal_991 = 0;
	auto uLocal_992 = 0;
	auto uLocal_993 = 0;
	auto uLocal_994 = 0;
	auto uLocal_995 = 0;
	auto uLocal_996 = 0;
	auto uLocal_997 = 0;
	auto uLocal_998 = 0;
	auto uLocal_999 = 0;
	auto uLocal_1000 = 0;
	auto uLocal_1001 = 0;
	auto uLocal_1002 = 0;
	auto uLocal_1003 = 0;
	auto uLocal_1004 = 0;
	auto uLocal_1005 = 0;
	auto uLocal_1006 = 0;
	auto uLocal_1007 = 0;
	auto uLocal_1008 = 0;
	auto uLocal_1009 = 0;
	auto uLocal_1010 = 0;
	auto uLocal_1011 = 0;
	auto uLocal_1012 = 0;
	auto uLocal_1013 = 40;
	auto uLocal_1014 = 0;
	auto uLocal_1015 = 0;
	auto uLocal_1016 = 0;
	auto uLocal_1017 = 0;
	auto uLocal_1018 = 0;
	auto uLocal_1019 = 0;
	auto uLocal_1020 = 0;
	auto uLocal_1021 = 0;
	auto uLocal_1022 = 0;
	auto uLocal_1023 = 0;
	auto uLocal_1024 = 0;
	auto uLocal_1025 = 0;
	auto uLocal_1026 = 0;
	auto uLocal_1027 = 0;
	auto uLocal_1028 = 0;
	auto uLocal_1029 = 0;
	auto uLocal_1030 = 0;
	auto uLocal_1031 = 0;
	auto uLocal_1032 = 0;
	auto uLocal_1033 = 0;
	auto uLocal_1034 = 0;
	auto uLocal_1035 = 0;
	auto uLocal_1036 = 0;
	auto uLocal_1037 = 0;
	auto uLocal_1038 = 0;
	auto uLocal_1039 = 0;
	auto uLocal_1040 = 0;
	auto uLocal_1041 = 0;
	auto uLocal_1042 = 0;
	auto uLocal_1043 = 0;
	auto uLocal_1044 = 0;
	auto uLocal_1045 = 0;
	auto uLocal_1046 = 0;
	auto uLocal_1047 = 0;
	auto uLocal_1048 = 0;
	auto uLocal_1049 = 0;
	auto uLocal_1050 = 0;
	auto uLocal_1051 = 0;
	auto uLocal_1052 = 0;
	auto uLocal_1053 = 0;
	auto uLocal_1054 = 0;
	auto uLocal_1055 = 0;
	auto uLocal_1056 = 0;
	auto uLocal_1057 = 0;
	auto uLocal_1058 = 0;
	auto uLocal_1059 = 0;
	auto uLocal_1060 = 0;
	auto uLocal_1061 = 0;
	auto uLocal_1062 = 0;
	auto uLocal_1063 = 0;
	auto uLocal_1064 = 0;
	auto uLocal_1065 = 0;
	auto uLocal_1066 = 0;
	auto uLocal_1067 = 0;
	auto uLocal_1068 = 0;
	auto uLocal_1069 = 0;
	auto uLocal_1070 = 0;
	auto uLocal_1071 = 0;
	auto uLocal_1072 = 0;
	auto uLocal_1073 = 0;
	auto uLocal_1074 = 0;
	auto uLocal_1075 = 0;
	auto uLocal_1076 = 0;
	auto uLocal_1077 = 0;
	auto uLocal_1078 = 0;
	auto uLocal_1079 = 0;
	auto uLocal_1080 = 0;
	auto uLocal_1081 = 0;
	auto uLocal_1082 = 0;
	auto uLocal_1083 = 0;
	auto uLocal_1084 = 0;
	auto uLocal_1085 = 0;
	auto uLocal_1086 = 0;
	auto uLocal_1087 = 0;
	auto uLocal_1088 = 0;
	auto uLocal_1089 = 0;
	auto uLocal_1090 = 0;
	auto uLocal_1091 = 0;
	auto uLocal_1092 = 0;
	auto uLocal_1093 = 0;
	auto uLocal_1094 = 0;
	auto uLocal_1095 = 0;
	auto uLocal_1096 = 0;
	auto uLocal_1097 = 0;
	auto uLocal_1098 = 0;
	auto uLocal_1099 = 0;
	auto uLocal_1100 = 0;
	auto uLocal_1101 = 0;
	auto uLocal_1102 = 0;
	auto uLocal_1103 = 0;
	auto uLocal_1104 = 0;
	auto uLocal_1105 = 0;
	auto uLocal_1106 = 0;
	auto uLocal_1107 = 0;
	auto uLocal_1108 = 0;
	auto uLocal_1109 = 0;
	auto uLocal_1110 = 0;
	auto uLocal_1111 = 0;
	auto uLocal_1112 = 0;
	auto uLocal_1113 = 0;
	auto uLocal_1114 = 0;
	auto uLocal_1115 = 0;
	auto uLocal_1116 = 0;
	auto uLocal_1117 = 0;
	auto uLocal_1118 = 0;
	auto uLocal_1119 = 0;
	auto uLocal_1120 = 0;
	auto uLocal_1121 = 0;
	auto uLocal_1122 = 0;
	auto uLocal_1123 = 0;
	auto uLocal_1124 = 0;
	auto uLocal_1125 = 0;
	auto uLocal_1126 = 0;
	auto uLocal_1127 = 0;
	auto uLocal_1128 = 0;
	auto uLocal_1129 = 0;
	auto uLocal_1130 = 0;
	auto uLocal_1131 = 0;
	auto uLocal_1132 = 0;
	auto uLocal_1133 = 0;
	auto uLocal_1134 = 0;
	auto uLocal_1135 = 0;
	auto uLocal_1136 = 0;
	auto uLocal_1137 = 0;
	auto uLocal_1138 = 0;
	auto uLocal_1139 = 0;
	auto uLocal_1140 = 0;
	auto uLocal_1141 = 0;
	auto uLocal_1142 = 0;
	auto uLocal_1143 = 0;
	auto uLocal_1144 = 0;
	auto uLocal_1145 = 0;
	auto uLocal_1146 = 0;
	auto uLocal_1147 = 0;
	auto uLocal_1148 = 0;
	auto uLocal_1149 = 0;
	auto uLocal_1150 = 0;
	auto uLocal_1151 = 0;
	auto uLocal_1152 = 0;
	auto uLocal_1153 = 0;
	auto uLocal_1154 = 0;
	auto uLocal_1155 = 0;
	auto uLocal_1156 = 0;
	auto uLocal_1157 = 0;
	auto uLocal_1158 = 0;
	auto uLocal_1159 = 0;
	auto uLocal_1160 = 0;
	auto uLocal_1161 = 0;
	auto uLocal_1162 = 0;
	auto uLocal_1163 = 0;
	auto uLocal_1164 = 0;
	auto uLocal_1165 = 0;
	auto uLocal_1166 = 0;
	auto uLocal_1167 = 0;
	auto uLocal_1168 = 0;
	auto uLocal_1169 = 0;
	auto uLocal_1170 = 0;
	auto uLocal_1171 = 0;
	auto uLocal_1172 = 0;
	auto uLocal_1173 = 0;
	auto uLocal_1174 = 0;
	auto uLocal_1175 = 0;
	auto uLocal_1176 = 0;
	auto uLocal_1177 = 0;
	auto uLocal_1178 = 0;
	auto uLocal_1179 = 0;
	auto uLocal_1180 = 0;
	auto uLocal_1181 = 0;
	auto uLocal_1182 = 0;
	auto uLocal_1183 = 0;
	auto uLocal_1184 = 0;
	auto uLocal_1185 = 0;
	auto uLocal_1186 = 0;
	auto uLocal_1187 = 0;
	auto uLocal_1188 = 0;
	auto uLocal_1189 = 0;
	auto uLocal_1190 = 0;
	auto uLocal_1191 = 0;
	auto uLocal_1192 = 0;
	auto uLocal_1193 = 0;
	auto uLocal_1194 = 0;
	auto uLocal_1195 = 0;
	auto uLocal_1196 = 0;
	auto uLocal_1197 = 0;
	auto uLocal_1198 = 0;
	auto uLocal_1199 = 0;
	auto uLocal_1200 = 0;
	auto uLocal_1201 = 0;
	auto uLocal_1202 = 0;
	auto uLocal_1203 = 0;
	auto uLocal_1204 = 0;
	auto uLocal_1205 = 0;
	auto uLocal_1206 = 0;
	auto uLocal_1207 = 0;
	auto uLocal_1208 = 0;
	auto uLocal_1209 = 0;
	auto uLocal_1210 = 0;
	auto uLocal_1211 = 0;
	auto uLocal_1212 = 0;
	auto uLocal_1213 = 0;
	auto uLocal_1214 = 0;
	auto uLocal_1215 = 0;
	auto uLocal_1216 = 0;
	auto uLocal_1217 = 0;
	auto uLocal_1218 = 0;
	auto uLocal_1219 = 0;
	auto uLocal_1220 = 0;
	auto uLocal_1221 = 0;
	auto uLocal_1222 = 0;
	auto uLocal_1223 = 0;
	auto uLocal_1224 = 0;
	auto uLocal_1225 = 0;
	auto uLocal_1226 = 0;
	auto uLocal_1227 = 0;
	auto uLocal_1228 = 0;
	auto uLocal_1229 = 0;
	auto uLocal_1230 = 0;
	auto uLocal_1231 = 0;
	auto uLocal_1232 = 0;
	auto uLocal_1233 = 0;
	auto uLocal_1234 = 0;
	auto uLocal_1235 = 0;
	auto uLocal_1236 = 0;
	auto uLocal_1237 = 0;
	auto uLocal_1238 = 0;
	auto uLocal_1239 = 0;
	auto uLocal_1240 = 0;
	auto uLocal_1241 = 0;
	auto uLocal_1242 = 0;
	auto uLocal_1243 = 0;
	auto uLocal_1244 = 0;
	auto uLocal_1245 = 0;
	auto uLocal_1246 = 0;
	auto uLocal_1247 = 0;
	auto uLocal_1248 = 0;
	auto uLocal_1249 = 0;
	auto uLocal_1250 = 0;
	auto uLocal_1251 = 0;
	auto uLocal_1252 = 0;
	auto uLocal_1253 = 0;
	auto uLocal_1254 = 0;
	auto uLocal_1255 = 0;
	auto uLocal_1256 = 0;
	auto uLocal_1257 = 0;
	auto uLocal_1258 = 0;
	auto uLocal_1259 = 0;
	auto uLocal_1260 = 0;
	auto uLocal_1261 = 0;
	auto uLocal_1262 = 0;
	auto uLocal_1263 = 0;
	auto uLocal_1264 = 0;
	auto uLocal_1265 = 0;
	auto uLocal_1266 = 0;
	auto uLocal_1267 = 0;
	auto uLocal_1268 = 0;
	auto uLocal_1269 = 0;
	auto uLocal_1270 = 0;
	auto uLocal_1271 = 0;
	auto uLocal_1272 = 0;
	auto uLocal_1273 = 0;
	auto uLocal_1274 = 0;
	auto uLocal_1275 = 0;
	auto uLocal_1276 = 0;
	auto uLocal_1277 = 0;
	auto uLocal_1278 = 0;
	auto uLocal_1279 = 0;
	auto uLocal_1280 = 0;
	auto uLocal_1281 = 0;
	auto uLocal_1282 = 0;
	auto uLocal_1283 = 0;
	auto uLocal_1284 = 0;
	auto uLocal_1285 = 0;
	auto uLocal_1286 = 0;
	auto uLocal_1287 = 0;
	auto uLocal_1288 = 0;
	auto uLocal_1289 = 0;
	auto uLocal_1290 = 0;
	auto uLocal_1291 = 0;
	auto uLocal_1292 = 0;
	auto uLocal_1293 = 0;
	auto uLocal_1294 = 0;
	auto uLocal_1295 = 0;
	auto uLocal_1296 = 0;
	auto uLocal_1297 = 0;
	auto uLocal_1298 = 0;
	auto uLocal_1299 = 0;
	auto uLocal_1300 = 0;
	auto uLocal_1301 = 0;
	auto uLocal_1302 = 0;
	auto uLocal_1303 = 0;
	auto uLocal_1304 = 0;
	auto uLocal_1305 = 0;
	auto uLocal_1306 = 0;
	auto uLocal_1307 = 0;
	auto uLocal_1308 = 0;
	auto uLocal_1309 = 0;
	auto uLocal_1310 = 0;
	auto uLocal_1311 = 0;
	auto uLocal_1312 = 0;
	auto uLocal_1313 = 0;
	auto uLocal_1314 = 0;
	auto uLocal_1315 = 0;
	auto uLocal_1316 = 0;
	auto uLocal_1317 = 0;
	auto uLocal_1318 = 0;
	auto uLocal_1319 = 0;
	auto uLocal_1320 = 0;
	auto uLocal_1321 = 0;
	auto uLocal_1322 = 0;
	auto uLocal_1323 = 0;
	auto uLocal_1324 = 0;
	auto uLocal_1325 = 0;
	auto uLocal_1326 = 0;
	auto uLocal_1327 = 0;
	auto uLocal_1328 = 0;
	auto uLocal_1329 = 0;
	auto uLocal_1330 = 0;
	auto uLocal_1331 = 0;
	auto uLocal_1332 = 0;
	auto uLocal_1333 = 0;
	auto uLocal_1334 = 0;
	auto uLocal_1335 = 0;
	auto uLocal_1336 = 0;
	auto uLocal_1337 = 0;
	auto uLocal_1338 = 0;
	auto uLocal_1339 = 0;
	auto uLocal_1340 = 0;
	auto uLocal_1341 = 0;
	auto uLocal_1342 = 0;
	auto uLocal_1343 = 0;
	auto uLocal_1344 = 0;
	auto uLocal_1345 = 0;
	auto uLocal_1346 = 0;
	auto uLocal_1347 = 0;
	auto uLocal_1348 = 0;
	auto uLocal_1349 = 0;
	auto uLocal_1350 = 0;
	auto uLocal_1351 = 0;
	auto uLocal_1352 = 0;
	auto uLocal_1353 = 0;
	auto uLocal_1354 = 0;
	auto uLocal_1355 = 0;
	auto uLocal_1356 = 0;
	auto uLocal_1357 = 0;
	auto uLocal_1358 = 0;
	auto uLocal_1359 = 0;
	auto uLocal_1360 = 0;
	auto uLocal_1361 = 0;
	auto uLocal_1362 = 0;
	auto uLocal_1363 = 0;
	auto uLocal_1364 = 0;
	auto uLocal_1365 = 0;
	auto uLocal_1366 = 0;
	auto uLocal_1367 = 0;
	auto uLocal_1368 = 0;
	auto uLocal_1369 = 0;
	auto uLocal_1370 = 0;
	auto uLocal_1371 = 0;
	auto uLocal_1372 = 0;
	auto uLocal_1373 = 0;
	auto uLocal_1374 = 0;
	auto uLocal_1375 = 0;
	auto uLocal_1376 = 0;
	auto uLocal_1377 = 0;
	auto uLocal_1378 = 0;
	auto uLocal_1379 = 0;
	auto uLocal_1380 = 0;
	auto uLocal_1381 = 0;
	auto uLocal_1382 = 0;
	auto uLocal_1383 = 0;
	auto uLocal_1384 = 0;
	auto uLocal_1385 = 0;
	auto uLocal_1386 = 0;
	auto uLocal_1387 = 0;
	auto uLocal_1388 = 0;
	auto uLocal_1389 = 0;
	auto uLocal_1390 = 0;
	auto uLocal_1391 = 0;
	auto uLocal_1392 = 0;
	auto uLocal_1393 = 0;
	auto uLocal_1394 = 0;
	auto uLocal_1395 = 0;
	auto uLocal_1396 = 0;
	auto uLocal_1397 = 0;
	auto uLocal_1398 = 0;
	auto uLocal_1399 = 0;
	auto uLocal_1400 = 0;
	auto uLocal_1401 = 0;
	auto uLocal_1402 = 0;
	auto uLocal_1403 = 0;
	auto uLocal_1404 = 0;
	auto uLocal_1405 = 0;
	auto uLocal_1406 = 0;
	auto uLocal_1407 = 0;
	auto uLocal_1408 = 0;
	auto uLocal_1409 = 0;
	auto uLocal_1410 = 0;
	auto uLocal_1411 = 0;
	auto uLocal_1412 = 0;
	auto uLocal_1413 = 0;
	auto uLocal_1414 = 0;
	auto uLocal_1415 = 0;
	auto uLocal_1416 = 0;
	auto uLocal_1417 = 0;
	auto uLocal_1418 = 0;
	auto uLocal_1419 = 0;
	auto uLocal_1420 = 0;
	auto uLocal_1421 = 0;
	auto uLocal_1422 = 0;
	auto uLocal_1423 = 0;
	auto uLocal_1424 = 0;
	auto uLocal_1425 = 0;
	auto uLocal_1426 = 0;
	auto uLocal_1427 = 0;
	auto uLocal_1428 = 0;
	auto uLocal_1429 = 0;
	auto uLocal_1430 = 0;
	auto uLocal_1431 = 0;
	auto uLocal_1432 = 0;
	auto uLocal_1433 = 0;
	auto uLocal_1434 = 0;
	auto uLocal_1435 = 0;
	auto uLocal_1436 = 0;
	auto uLocal_1437 = 0;
	auto uLocal_1438 = 0;
	auto uLocal_1439 = 0;
	auto uLocal_1440 = 0;
	auto uLocal_1441 = 0;
	auto uLocal_1442 = 0;
	auto uLocal_1443 = 0;
	auto uLocal_1444 = 0;
	auto uLocal_1445 = 0;
	auto uLocal_1446 = 0;
	auto uLocal_1447 = 0;
	auto uLocal_1448 = 0;
	auto uLocal_1449 = 0;
	auto uLocal_1450 = 0;
	auto uLocal_1451 = 0;
	auto uLocal_1452 = 0;
	auto uLocal_1453 = 0;
	auto uLocal_1454 = 0;
	auto uLocal_1455 = 0;
	auto uLocal_1456 = 0;
	auto uLocal_1457 = 0;
	auto uLocal_1458 = 0;
	auto uLocal_1459 = 0;
	auto uLocal_1460 = 0;
	auto uLocal_1461 = 0;
	auto uLocal_1462 = 0;
	auto uLocal_1463 = 0;
	auto uLocal_1464 = 0;
	auto uLocal_1465 = 0;
	auto uLocal_1466 = 0;
	auto uLocal_1467 = 0;
	auto uLocal_1468 = 0;
	auto uLocal_1469 = 0;
	auto uLocal_1470 = 0;
	auto uLocal_1471 = 0;
	auto uLocal_1472 = 0;
	auto uLocal_1473 = 0;
	auto uLocal_1474 = 0;
	auto uLocal_1475 = 0;
	auto uLocal_1476 = 0;
	auto uLocal_1477 = 0;
	auto uLocal_1478 = 0;
	auto uLocal_1479 = 0;
	auto uLocal_1480 = 0;
	auto uLocal_1481 = 0;
	auto uLocal_1482 = 0;
	auto uLocal_1483 = 0;
	auto uLocal_1484 = 0;
	auto uLocal_1485 = 0;
	auto uLocal_1486 = 0;
	auto uLocal_1487 = 0;
	auto uLocal_1488 = 0;
	auto uLocal_1489 = 0;
	auto uLocal_1490 = 0;
	auto uLocal_1491 = 0;
	auto uLocal_1492 = 0;
	auto uLocal_1493 = 0;
	auto uLocal_1494 = 0;
	auto uLocal_1495 = 0;
	auto uLocal_1496 = 0;
	auto uLocal_1497 = 0;
	auto uLocal_1498 = 0;
	auto uLocal_1499 = 0;
	auto uLocal_1500 = 0;
	auto uLocal_1501 = 0;
	auto uLocal_1502 = 0;
	auto uLocal_1503 = 0;
	auto uLocal_1504 = 0;
	auto uLocal_1505 = 0;
	auto uLocal_1506 = 0;
	auto uLocal_1507 = 0;
	auto uLocal_1508 = 0;
	auto uLocal_1509 = 0;
	auto uLocal_1510 = 0;
	auto uLocal_1511 = 0;
	auto uLocal_1512 = 0;
	auto uLocal_1513 = 0;
	auto uLocal_1514 = 0;
	auto uLocal_1515 = 0;
	auto uLocal_1516 = 0;
	auto uLocal_1517 = 0;
	auto uLocal_1518 = 0;
	auto uLocal_1519 = 0;
	auto uLocal_1520 = 0;
	auto uLocal_1521 = 0;
	auto uLocal_1522 = 0;
	auto uLocal_1523 = 0;
	auto uLocal_1524 = 0;
	auto uLocal_1525 = 0;
	auto uLocal_1526 = 0;
	auto uLocal_1527 = 0;
	auto uLocal_1528 = 0;
	auto uLocal_1529 = 0;
	auto uLocal_1530 = 0;
	auto uLocal_1531 = 0;
	auto uLocal_1532 = 0;
	auto uLocal_1533 = 0;
	auto uLocal_1534 = 0;
	auto uLocal_1535 = 0;
	auto uLocal_1536 = 0;
	auto uLocal_1537 = 0;
	auto uLocal_1538 = 0;
	auto uLocal_1539 = 0;
	auto uLocal_1540 = 0;
	auto uLocal_1541 = 0;
	auto uLocal_1542 = 0;
	auto uLocal_1543 = 0;
	auto uLocal_1544 = 0;
	auto uLocal_1545 = 0;
	auto uLocal_1546 = 0;
	auto uLocal_1547 = 0;
	auto uLocal_1548 = 0;
	auto uLocal_1549 = 0;
	auto uLocal_1550 = 0;
	auto uLocal_1551 = 0;
	auto uLocal_1552 = 0;
	auto uLocal_1553 = 0;
	auto uLocal_1554 = 0;
	auto uLocal_1555 = 0;
	auto uLocal_1556 = 0;
	auto uLocal_1557 = 0;
	auto uLocal_1558 = 0;
	auto uLocal_1559 = 0;
	auto uLocal_1560 = 0;
	auto uLocal_1561 = 0;
	auto uLocal_1562 = 0;
	auto uLocal_1563 = 0;
	auto uLocal_1564 = 0;
	auto uLocal_1565 = 0;
	auto uLocal_1566 = 0;
	auto uLocal_1567 = 0;
	auto uLocal_1568 = 0;
	auto uLocal_1569 = 1;
	auto uLocal_1570 = 0;
	auto uLocal_1571 = 1;
	auto uLocal_1572 = 1;
	auto uLocal_1573 = 0;
	auto uLocal_1574 = 0;
	auto uLocal_1575 = 0;
	auto uLocal_1576 = 1;
	auto uLocal_1577 = 1;
	auto uLocal_1578 = 0;
	auto uLocal_1579 = 0;
	auto uLocal_1580 = 3;
	auto uLocal_1581 = 0;
	auto uLocal_1582 = 0;
	auto uLocal_1583 = 0;
	auto uLocal_1584 = 0;
	auto uLocal_1585 = 0;
	auto uLocal_1586 = 0;
	auto uLocal_1587 = 0;
	auto uLocal_1588 = 0;
	auto uLocal_1589 = 0;
	auto uLocal_1590 = 0;
	auto uLocal_1591 = 0;
	auto uLocal_1592 = 0;
	auto uLocal_1593 = 0;
	auto uLocal_1594 = 0;
	auto uLocal_1595 = 0;
	auto uLocal_1596 = 0;
	auto uLocal_1597 = 0;
	auto uLocal_1598 = 0;
	auto uLocal_1599 = 0;
	auto uLocal_1600 = 0;
	auto uLocal_1601 = 0;
	auto uLocal_1602 = 0;
	auto uLocal_1603 = 0;
	auto uLocal_1604 = 0;
	auto uLocal_1605 = 0;
	auto uLocal_1606 = 0;
	auto uLocal_1607 = 0;
	auto uLocal_1608 = 0;
	auto uLocal_1609 = 0;
	auto uLocal_1610 = 0;
	auto uLocal_1611 = 0;
	auto uLocal_1612 = 0;
	auto uLocal_1613 = 0;
	auto uLocal_1614 = 0;
	auto uLocal_1615 = 0;
	auto uLocal_1616 = 0;
	auto uLocal_1617 = 0;
	auto uLocal_1618 = 0;
	auto uLocal_1619 = 0;
	auto uLocal_1620 = 0;
	auto uLocal_1621 = 0;
	auto uLocal_1622 = 0;
	auto uLocal_1623 = 0;
	auto uLocal_1624 = 0;
	auto uLocal_1625 = 0;
	auto uLocal_1626 = 0;
	auto uLocal_1627 = 0;
	auto uLocal_1628 = 4;
	auto uLocal_1629 = 0;
	auto uLocal_1630 = 0;
	auto uLocal_1631 = 0;
	auto uLocal_1632 = 0;
	auto uLocal_1633 = 0;
	auto uLocal_1634 = 0;
	auto uLocal_1635 = 0;
	auto uLocal_1636 = 0;
	auto uLocal_1637 = 0;
	auto uLocal_1638 = 0;
	auto uLocal_1639 = 0;
	auto uLocal_1640 = 0;
	auto uLocal_1641 = 0;
	auto uLocal_1642 = 0;
	auto uLocal_1643 = 0;
	auto uLocal_1644 = 0;
	auto uLocal_1645 = 0;
	auto uLocal_1646 = 0;
	auto uLocal_1647 = 0;
	auto uLocal_1648 = 0;
	auto uLocal_1649 = 0;
	auto uLocal_1650 = 0;
	auto uLocal_1651 = 0;
	auto uLocal_1652 = 0;
	auto uLocal_1653 = 0;
	auto uLocal_1654 = 0;
	auto uLocal_1655 = 0;
	auto uLocal_1656 = 0;
	auto uLocal_1657 = 0;
	auto uLocal_1658 = 0;
	auto uLocal_1659 = 0;
	auto uLocal_1660 = 0;
	auto uLocal_1661 = 0;
	auto uLocal_1662 = 0;
	auto uLocal_1663 = 0;
	auto uLocal_1664 = 0;
	auto uLocal_1665 = 0;
	auto uLocal_1666 = 0;
	auto uLocal_1667 = 0;
	auto uLocal_1668 = 0;
	auto uLocal_1669 = 0;
	auto uLocal_1670 = 0;
	auto uLocal_1671 = 0;
	auto uLocal_1672 = 0;
	auto uLocal_1673 = 0;
	auto uLocal_1674 = 0;
	auto uLocal_1675 = 0;
	auto uLocal_1676 = 0;
	auto uLocal_1677 = 0;
	auto uLocal_1678 = 0;
	auto uLocal_1679 = 0;
	auto uLocal_1680 = 0;
	auto uLocal_1681 = 0;
	auto uLocal_1682 = 0;
	auto uLocal_1683 = 0;
	auto uLocal_1684 = 0;
	auto uLocal_1685 = 0;
	auto uLocal_1686 = 0;
	auto uLocal_1687 = 0;
	auto uLocal_1688 = 0;
	auto uLocal_1689 = 0;
	auto uLocal_1690 = 0;
	auto uLocal_1691 = 0;
	auto uLocal_1692 = 0;
	auto uLocal_1693 = 2;
	auto uLocal_1694 = 0;
	auto uLocal_1695 = 4;
	auto uLocal_1696 = 0;
	auto uLocal_1697 = 0;
	auto uLocal_1698 = 0;
	auto uLocal_1699 = 0;
	auto uLocal_1700 = 0;
	auto uLocal_1701 = 0;
	auto uLocal_1702 = 0;
	auto uLocal_1703 = 0;
	auto uLocal_1704 = 0;
	auto uLocal_1705 = 0;
	auto uLocal_1706 = 0;
	auto uLocal_1707 = 0;
	auto uLocal_1708 = 0;
	auto uLocal_1709 = 0;
	auto uLocal_1710 = 0;
	auto uLocal_1711 = 0;
	auto uLocal_1712 = 0;
	auto uLocal_1713 = 0;
	auto uLocal_1714 = 0;
	auto uLocal_1715 = 0;
	auto uLocal_1716 = 0;
	auto uLocal_1717 = 0;
	auto uLocal_1718 = 0;
	auto uLocal_1719 = 0;
	auto uLocal_1720 = 0;
	auto uLocal_1721 = 0;
	auto uLocal_1722 = 0;
	auto uLocal_1723 = 0;
	auto uLocal_1724 = 0;
	auto uLocal_1725 = 0;
	auto uLocal_1726 = 0;
	auto uLocal_1727 = 0;
	auto uLocal_1728 = 0;
	auto uLocal_1729 = 0;
	auto uLocal_1730 = 0;
	auto uLocal_1731 = 0;
	auto uLocal_1732 = 0;
	auto uLocal_1733 = 0;
	auto uLocal_1734 = 0;
	auto uLocal_1735 = 0;
	auto uLocal_1736 = 0;
	auto uLocal_1737 = 0;
	auto uLocal_1738 = 0;
	auto uLocal_1739 = 0;
	auto uLocal_1740 = 0;
	auto uLocal_1741 = 0;
	auto uLocal_1742 = 0;
	auto uLocal_1743 = 0;
	auto uLocal_1744 = 0;
	auto uLocal_1745 = 0;
	auto uLocal_1746 = 0;
	auto uLocal_1747 = 0;
	auto uLocal_1748 = 0;
	auto uLocal_1749 = 0;
	auto uLocal_1750 = 0;
	auto uLocal_1751 = 0;
	auto uLocal_1752 = 0;
	auto uLocal_1753 = 0;
	auto uLocal_1754 = 0;
	auto uLocal_1755 = 0;
	auto uLocal_1756 = 0;
	auto uLocal_1757 = 0;
	auto uLocal_1758 = 0;
	auto uLocal_1759 = 0;
	auto uLocal_1760 = 0;
	auto uLocal_1761 = 4;
	auto uLocal_1762 = 0;
	auto uLocal_1763 = 0;
	auto uLocal_1764 = 0;
	auto uLocal_1765 = 0;
	auto uLocal_1766 = 0;
	auto uLocal_1767 = 0;
	auto uLocal_1768 = 0;
	auto uLocal_1769 = 0;
	auto uLocal_1770 = 0;
	auto uLocal_1771 = 0;
	auto uLocal_1772 = 0;
	auto uLocal_1773 = 0;
	auto uLocal_1774 = 0;
	auto uLocal_1775 = 0;
	auto uLocal_1776 = 0;
	auto uLocal_1777 = 0;
	auto uLocal_1778 = 0;
	auto uLocal_1779 = 0;
	auto uLocal_1780 = 0;
	auto uLocal_1781 = 0;
	auto uLocal_1782 = 0;
	auto uLocal_1783 = 0;
	auto uLocal_1784 = 0;
	auto uLocal_1785 = 0;
	auto uLocal_1786 = 0;
	auto uLocal_1787 = 0;
	auto uLocal_1788 = 0;
	auto uLocal_1789 = 0;
	auto uLocal_1790 = 0;
	auto uLocal_1791 = 0;
	auto uLocal_1792 = 0;
	auto uLocal_1793 = 0;
	auto uLocal_1794 = 0;
	auto uLocal_1795 = 0;
	auto uLocal_1796 = 0;
	auto uLocal_1797 = 0;
	auto uLocal_1798 = 0;
	auto uLocal_1799 = 0;
	auto uLocal_1800 = 0;
	auto uLocal_1801 = 0;
	auto uLocal_1802 = 0;
	auto uLocal_1803 = 0;
	auto uLocal_1804 = 0;
	auto uLocal_1805 = 0;
	auto uLocal_1806 = 0;
	auto uLocal_1807 = 0;
	auto uLocal_1808 = 0;
	auto uLocal_1809 = 0;
	auto uLocal_1810 = 0;
	auto uLocal_1811 = 0;
	auto uLocal_1812 = 0;
	auto uLocal_1813 = 0;
	auto uLocal_1814 = 0;
	auto uLocal_1815 = 0;
	auto uLocal_1816 = 0;
	auto uLocal_1817 = 0;
	auto uLocal_1818 = 0;
	auto uLocal_1819 = 0;
	auto uLocal_1820 = 0;
	auto uLocal_1821 = 0;
	auto uLocal_1822 = 0;
	auto uLocal_1823 = 0;
	auto uLocal_1824 = 0;
	auto uLocal_1825 = 0;
	auto uLocal_1826 = 0;
	auto uLocal_1827 = 0;
	auto uLocal_1828 = 0;
	auto uLocal_1829 = 0;
	auto uLocal_1830 = 0;
	auto uLocal_1831 = 0;
	auto uLocal_1832 = 12;
	auto uLocal_1833 = 0;
	auto uLocal_1834 = 0;
	auto uLocal_1835 = 0;
	auto uLocal_1836 = 0;
	auto uLocal_1837 = 0;
	auto uLocal_1838 = 0;
	auto uLocal_1839 = 0;
	auto uLocal_1840 = 0;
	auto uLocal_1841 = 0;
	auto uLocal_1842 = 0;
	auto uLocal_1843 = 0;
	auto uLocal_1844 = 0;
	auto uLocal_1845 = 0;
	auto uLocal_1846 = 0;
	auto uLocal_1847 = 0;
	auto uLocal_1848 = 0;
	auto uLocal_1849 = 0;
	auto uLocal_1850 = 0;
	auto uLocal_1851 = 0;
	auto uLocal_1852 = 0;
	auto uLocal_1853 = 0;
	auto uLocal_1854 = 0;
	auto uLocal_1855 = 0;
	auto uLocal_1856 = 0;
	auto uLocal_1857 = 0;
	auto uLocal_1858 = 0;
	auto uLocal_1859 = 0;
	auto uLocal_1860 = 0;
	auto uLocal_1861 = 0;
	auto uLocal_1862 = 0;
	auto uLocal_1863 = 0;
	auto uLocal_1864 = 0;
	auto uLocal_1865 = 0;
	auto uLocal_1866 = 0;
	auto uLocal_1867 = 0;
	auto uLocal_1868 = 0;
	auto uLocal_1869 = 0;
	auto uLocal_1870 = 0;
	auto uLocal_1871 = 0;
	auto uLocal_1872 = 0;
	auto uLocal_1873 = 0;
	auto uLocal_1874 = 0;
	auto uLocal_1875 = 0;
	auto uLocal_1876 = 0;
	auto uLocal_1877 = 0;
	auto uLocal_1878 = 0;
	auto uLocal_1879 = 0;
	auto uLocal_1880 = 0;
	auto uLocal_1881 = 0;
	auto uLocal_1882 = 0;
	auto uLocal_1883 = 0;
	auto uLocal_1884 = 0;
	auto uLocal_1885 = 0;
	auto uLocal_1886 = 0;
	auto uLocal_1887 = 0;
	auto uLocal_1888 = 0;
	auto uLocal_1889 = 0;
	auto uLocal_1890 = 0;
	auto uLocal_1891 = 0;
	auto uLocal_1892 = 0;
	auto uLocal_1893 = 0;
	auto uLocal_1894 = 0;
	auto uLocal_1895 = 0;
	auto uLocal_1896 = 0;
	auto uLocal_1897 = 0;
	auto uLocal_1898 = 0;
	auto uLocal_1899 = 0;
	auto uLocal_1900 = 0;
	auto uLocal_1901 = 0;
	auto uLocal_1902 = 0;
	auto uLocal_1903 = 0;
	auto uLocal_1904 = 0;
	auto uLocal_1905 = 0;
	auto uLocal_1906 = 0;
	auto uLocal_1907 = 0;
	auto uLocal_1908 = 0;
	auto uLocal_1909 = 0;
	auto uLocal_1910 = 0;
	auto uLocal_1911 = 0;
	auto uLocal_1912 = 0;
	auto uLocal_1913 = 0;
	auto uLocal_1914 = 0;
	auto uLocal_1915 = 0;
	auto uLocal_1916 = 0;
	auto uLocal_1917 = 0;
	auto uLocal_1918 = 0;
	auto uLocal_1919 = 0;
	auto uLocal_1920 = 0;
	auto uLocal_1921 = 0;
	auto uLocal_1922 = 0;
	auto uLocal_1923 = 0;
	auto uLocal_1924 = 0;
	auto uLocal_1925 = 0;
	auto uLocal_1926 = 0;
	auto uLocal_1927 = 0;
	auto uLocal_1928 = 0;
	auto uLocal_1929 = 0;
	auto uLocal_1930 = 0;
	auto uLocal_1931 = 0;
	auto uLocal_1932 = 0;
	auto uLocal_1933 = 0;
	auto uLocal_1934 = 0;
	auto uLocal_1935 = 0;
	auto uLocal_1936 = 0;
	auto uLocal_1937 = 0;
	auto uLocal_1938 = 0;
	auto uLocal_1939 = 0;
	auto uLocal_1940 = 0;
	auto uLocal_1941 = 0;
	auto uLocal_1942 = 0;
	auto uLocal_1943 = 0;
	auto uLocal_1944 = 0;
	auto uLocal_1945 = 0;
	auto uLocal_1946 = 0;
	auto uLocal_1947 = 0;
	auto uLocal_1948 = 0;
	auto uLocal_1949 = 0;
	auto uLocal_1950 = 0;
	auto uLocal_1951 = 0;
	auto uLocal_1952 = 0;
	auto uLocal_1953 = 0;
	auto uLocal_1954 = 0;
	auto uLocal_1955 = 0;
	auto uLocal_1956 = 0;
	auto uLocal_1957 = 0;
	auto uLocal_1958 = 0;
	auto uLocal_1959 = 0;
	auto uLocal_1960 = 0;
	auto uLocal_1961 = 0;
	auto uLocal_1962 = 0;
	auto uLocal_1963 = 0;
	auto uLocal_1964 = 0;
	auto uLocal_1965 = 0;
	auto uLocal_1966 = 0;
	auto uLocal_1967 = 0;
	auto uLocal_1968 = 0;
	auto uLocal_1969 = 0;
	auto uLocal_1970 = 0;
	auto uLocal_1971 = 0;
	auto uLocal_1972 = 0;
	auto uLocal_1973 = 0;
	auto uLocal_1974 = 0;
	auto uLocal_1975 = 0;
	auto uLocal_1976 = 0;
	auto uLocal_1977 = 0;
	auto uLocal_1978 = 0;
	auto uLocal_1979 = 0;
	auto uLocal_1980 = 0;
	auto uLocal_1981 = 0;
	auto uLocal_1982 = 0;
	auto uLocal_1983 = 0;
	auto uLocal_1984 = 0;
	auto uLocal_1985 = 0;
	auto uLocal_1986 = 0;
	auto uLocal_1987 = 0;
	auto uLocal_1988 = 0;
	auto uLocal_1989 = 0;
	auto uLocal_1990 = 0;
	auto uLocal_1991 = 0;
	auto uLocal_1992 = 0;
	auto uLocal_1993 = 0;
	auto uLocal_1994 = 0;
	auto uLocal_1995 = 0;
	auto uLocal_1996 = 0;
	auto uLocal_1997 = 0;
	auto uLocal_1998 = 0;
	auto uLocal_1999 = 0;
	auto uLocal_2000 = 0;
	auto uLocal_2001 = 0;
	auto uLocal_2002 = 0;
	auto uLocal_2003 = 0;
	auto uLocal_2004 = 0;
	auto uLocal_2005 = 0;
	auto uLocal_2006 = 0;
	auto uLocal_2007 = 0;
	auto uLocal_2008 = 0;
	auto uLocal_2009 = 0;
	auto uLocal_2010 = 0;
	auto uLocal_2011 = 0;
	auto uLocal_2012 = 0;
	auto uLocal_2013 = 3;
	auto uLocal_2014 = 0;
	auto uLocal_2015 = 0;
	auto uLocal_2016 = 0;
	int iLocal_2017 = 0;
	auto uLocal_2018 = 0;
	int iLocal_2019 = 0;
	int iLocal_2020 = 0;
	int iLocal_2021 = 0;
	int iLocal_2022 = 0;
	int iLocal_2023 = 0;
	int iLocal_2024 = 0;
	int iLocal_2025 = 0;
	int iLocal_2026 = 0;
	int iLocal_2027 = 0;
	int iLocal_2028 = 0;
	int iLocal_2029 = 0;
	int iLocal_2030 = 0;
	int iLocal_2031 = 0;
	int iLocal_2032 = 0;
	int iLocal_2033 = 0;
	int iLocal_2034 = 0;
	int iLocal_2035 = 0;
	int iLocal_2036 = 0;
	int iLocal_2037 = 0;
	int iLocal_2038 = 0;
	int iLocal_2039 = 0;
	int iLocal_2040 = 0;
	auto uLocal_2041 = 0;
	auto uLocal_2042 = 0;
	int iLocal_2043 = 0;
	auto uLocal_2044 = 0;
	auto uLocal_2045 = 0;
	int iLocal_2046 = 0;
	auto uLocal_2047 = 0;
	auto uLocal_2048 = 0;
	int iLocal_2049 = 0;
	auto uLocal_2050 = 0;
	auto uLocal_2051 = 0;
	int iLocal_2052 = 0;
	auto uLocal_2053 = 0;
	auto uLocal_2054 = 0;
	int iLocal_2055 = 0;
	auto uLocal_2056 = 0;
	auto uLocal_2057 = 0;
	int iLocal_2058 = 0;
	auto uLocal_2059 = 0;
	auto uLocal_2060 = 0;
	int iLocal_2061 = 0;
	auto uLocal_2062 = 0;
	auto uLocal_2063 = 0;
	int iLocal_2064 = 0;
	auto uLocal_2065 = 0;
	auto uLocal_2066 = 0;
	int iLocal_2067 = 0;
	auto uLocal_2068 = 0;
	auto uLocal_2069 = 0;
	int iLocal_2070 = 0;
	auto uLocal_2071 = 0;
	auto uLocal_2072 = 0;
	int iLocal_2073 = 0;
	auto uLocal_2074 = 0;
	auto uLocal_2075 = 0;
	int iLocal_2076 = 0;
	int iLocal_2077 = 0;
	int iLocal_2078 = 0;
	auto uLocal_2079 = 0;
	auto uLocal_2080 = 0;
	auto uLocal_2081 = 0;
	auto uLocal_2082 = 0;
	int[] iLocal_2083 = new int[5];
	int[] iLocal_2089 = new int[5];
	int[] iLocal_2095 = new int[5];
	auto uLocal_2101 = 0;
	auto uLocal_2102 = 0;
	int iLocal_2103 = 0;
	float fLocal_2104 = 0;
	int iLocal_2105 = 0;
	int iLocal_2106 = 0;
	int iLocal_2107 = 0;
	int iLocal_2108 = 0;
	auto uLocal_2109 = 0;
	auto uLocal_2110 = 0;
	auto uLocal_2111 = 0;
	auto uLocal_2112 = 16;
	auto uLocal_2113 = 0;
	auto uLocal_2114 = 0;
	auto uLocal_2115 = 0;
	auto uLocal_2116 = 0;
	auto uLocal_2117 = 0;
	auto uLocal_2118 = 0;
	auto uLocal_2119 = 0;
	auto uLocal_2120 = 0;
	auto uLocal_2121 = 0;
	auto uLocal_2122 = 0;
	auto uLocal_2123 = 0;
	auto uLocal_2124 = 0;
	auto uLocal_2125 = 0;
	auto uLocal_2126 = 0;
	auto uLocal_2127 = 0;
	auto uLocal_2128 = 0;
	auto uLocal_2129 = 0;
	auto uLocal_2130 = 0;
	auto uLocal_2131 = 0;
	auto uLocal_2132 = 0;
	auto uLocal_2133 = 0;
	auto uLocal_2134 = 0;
	auto uLocal_2135 = 0;
	auto uLocal_2136 = 0;
	auto uLocal_2137 = 0;
	auto uLocal_2138 = 0;
	auto uLocal_2139 = 0;
	auto uLocal_2140 = 0;
	auto uLocal_2141 = 0;
	auto uLocal_2142 = 0;
	auto uLocal_2143 = 0;
	auto uLocal_2144 = 0;
	auto uLocal_2145 = 0;
	auto uLocal_2146 = 0;
	auto uLocal_2147 = 0;
	auto uLocal_2148 = 0;
	auto uLocal_2149 = 0;
	auto uLocal_2150 = 0;
	auto uLocal_2151 = 0;
	auto uLocal_2152 = 0;
	auto uLocal_2153 = 0;
	auto uLocal_2154 = 0;
	auto uLocal_2155 = 0;
	auto uLocal_2156 = 0;
	auto uLocal_2157 = 0;
	auto uLocal_2158 = 0;
	auto uLocal_2159 = 0;
	auto uLocal_2160 = 0;
	auto uLocal_2161 = 0;
	auto uLocal_2162 = 0;
	auto uLocal_2163 = 0;
	auto uLocal_2164 = 0;
	auto uLocal_2165 = 0;
	auto uLocal_2166 = 0;
	auto uLocal_2167 = 0;
	auto uLocal_2168 = 0;
	auto uLocal_2169 = 0;
	auto uLocal_2170 = 0;
	auto uLocal_2171 = 0;
	auto uLocal_2172 = 0;
	auto uLocal_2173 = 0;
	auto uLocal_2174 = 0;
	auto uLocal_2175 = 0;
	auto uLocal_2176 = 0;
	auto uLocal_2177 = 0;
	auto uLocal_2178 = 0;
	auto uLocal_2179 = 0;
	auto uLocal_2180 = 0;
	auto uLocal_2181 = 0;
	auto uLocal_2182 = 0;
	auto uLocal_2183 = 0;
	auto uLocal_2184 = 0;
	auto uLocal_2185 = 0;
	auto uLocal_2186 = 0;
	auto uLocal_2187 = 0;
	auto uLocal_2188 = 0;
	auto uLocal_2189 = 0;
	auto uLocal_2190 = 0;
	auto uLocal_2191 = 0;
	auto uLocal_2192 = 0;
	auto uLocal_2193 = 0;
	auto uLocal_2194 = 0;
	auto uLocal_2195 = 0;
	auto uLocal_2196 = 0;
	auto uLocal_2197 = 0;
	auto uLocal_2198 = 0;
	auto uLocal_2199 = 0;
	auto uLocal_2200 = 0;
	auto uLocal_2201 = 0;
	auto uLocal_2202 = 0;
	auto uLocal_2203 = 0;
	auto uLocal_2204 = 0;
	auto uLocal_2205 = 0;
	auto uLocal_2206 = 0;
	auto uLocal_2207 = 0;
	auto uLocal_2208 = 0;
	auto uLocal_2209 = 0;
	auto uLocal_2210 = 0;
	auto uLocal_2211 = 0;
	auto uLocal_2212 = 0;
	auto uLocal_2213 = 0;
	auto uLocal_2214 = 0;
	auto uLocal_2215 = 0;
	auto uLocal_2216 = 0;
	auto uLocal_2217 = 0;
	auto uLocal_2218 = 0;
	auto uLocal_2219 = 0;
	auto uLocal_2220 = 0;
	auto uLocal_2221 = 0;
	auto uLocal_2222 = 0;
	auto uLocal_2223 = 0;
	auto uLocal_2224 = 0;
	auto uLocal_2225 = 0;
	auto uLocal_2226 = 0;
	auto uLocal_2227 = 0;
	auto uLocal_2228 = 0;
	auto uLocal_2229 = 0;
	auto uLocal_2230 = 0;
	auto uLocal_2231 = 0;
	auto uLocal_2232 = 0;
	auto uLocal_2233 = 0;
	auto uLocal_2234 = 0;
	auto uLocal_2235 = 0;
	auto uLocal_2236 = 0;
	auto uLocal_2237 = 0;
	auto uLocal_2238 = 0;
	auto uLocal_2239 = 0;
	auto uLocal_2240 = 0;
	auto uLocal_2241 = 0;
	auto uLocal_2242 = 0;
	auto uLocal_2243 = 0;
	auto uLocal_2244 = 0;
	auto uLocal_2245 = 0;
	auto uLocal_2246 = 0;
	auto uLocal_2247 = 0;
	auto uLocal_2248 = 0;
	auto uLocal_2249 = 0;
	auto uLocal_2250 = 0;
	auto uLocal_2251 = 0;
	auto uLocal_2252 = 0;
	auto uLocal_2253 = 0;
	auto uLocal_2254 = 0;
	auto uLocal_2255 = 0;
	auto uLocal_2256 = 0;
	auto uLocal_2257 = 0;
	auto uLocal_2258 = 0;
	auto uLocal_2259 = 0;
	auto uLocal_2260 = 0;
	auto uLocal_2261 = 0;
	auto uLocal_2262 = 0;
	auto uLocal_2263 = 0;
	auto uLocal_2264 = 0;
	auto uLocal_2265 = 0;
	auto uLocal_2266 = 0;
	auto uLocal_2267 = 0;
	auto uLocal_2268 = 0;
	auto uLocal_2269 = 0;
	auto uLocal_2270 = 0;
	auto uLocal_2271 = 0;
	auto uLocal_2272 = 0;
	auto uLocal_2273 = 0;
	auto uLocal_2274 = 0;
	auto uLocal_2275 = 0;
	auto uLocal_2276 = 0;
	char* sLocal_2277 = 0;
	float fLocal_2278 = 0;
	float fLocal_2279 = 0;
	int iLocal_2280 = 0;
	int iLocal_2281 = 0;
	Vector3 vLocal_2282 = 0;
	Vector3 vLocal_2285 = 0;
	Vector3 vLocal_2288 = 0;
	float fLocal_2291 = 0;
	Vector3 fLocal_2292 = 0;
	auto uLocal_2293 = 0;
	auto uLocal_2294 = 0;
	auto uLocal_2295 = -1;
	auto uLocal_2296 = 0;
	auto uLocal_2297 = 0;
	auto uLocal_2298 = 0;
	auto uLocal_2299 = 0;
	auto uLocal_2300 = 0;
	auto uLocal_2301 = 0;
	auto uLocal_2302 = 1000;
	auto uLocal_2303 = 1000;
	auto uLocal_2304 = 0;
	char* sLocal_2305 = 0;
	char* sLocal_2306 = 0;
	int iLocal_2307 = 0;
	int iLocal_2308 = 0;
	auto uLocal_2309 = 0;
	auto uLocal_2310 = 0;
	int iLocal_2311 = 0;
	auto uLocal_2312 = 0;
	auto uLocal_2313 = 0;
	int iLocal_2314 = 0;
	auto uLocal_2315 = 0;
	auto uLocal_2316 = 0;
	int iLocal_2317 = 0;
	int iLocal_2318 = 0;
	int iLocal_2319 = 0;
	struct<7> Local_2320 = 0;
	int iLocal_2327 = 0;
	auto uLocal_2328 = 0;
	auto uLocal_2329 = 0;
	auto uLocal_2330 = 0;
	auto uLocal_2331 = 0;
	int iLocal_2332 = 0;
	int iLocal_2333 = 0;
	char* sLocal_2334 = 0;
	char* sLocal_2335 = 0;
	char* sLocal_2336 = 0;
	Vector3 vLocal_2337 = 0;
	Vector3 vLocal_2340 = 0;
	int iLocal_2343 = 0;
	int iLocal_2344 = 0;
	int iLocal_2345 = 0;
	int iLocal_2346 = 0;
	int iLocal_2347 = 0;
	int iLocal_2348 = 0;
	int iLocal_2349 = 0;
	int iLocal_2350 = 0;
	struct<7> Local_2351 = 0;
	auto uLocal_2358 = 0;
	auto uLocal_2359 = 0;
	auto uLocal_2360 = 0;
	auto uLocal_2361 = 1132396544;
	auto uLocal_2362 = 1132396544;
	auto uLocal_2363 = 1132396544;
	auto uLocal_2364 = 0;
	auto uLocal_2365 = -1082130432;
	auto uLocal_2366 = 0;
	auto uLocal_2367 = 0;
	auto uLocal_2368 = 8;
	auto uLocal_2369 = 0;
	auto uLocal_2370 = 0;
	auto uLocal_2371 = 0;
	auto uLocal_2372 = 0;
	auto uLocal_2373 = 0;
	auto uLocal_2374 = 0;
	auto uLocal_2375 = 0;
	auto uLocal_2376 = 0;
	auto uLocal_2377 = 0;
	auto uLocal_2378 = 0;
	auto uLocal_2379 = 0;
	auto uLocal_2380 = 0;
	auto uLocal_2381 = 0;
	auto uLocal_2382 = 0;
	auto uLocal_2383 = 0;
	auto uLocal_2384 = 0;
	auto uLocal_2385 = 0;
	auto uLocal_2386 = 0;
	auto uLocal_2387 = 0;
	auto uLocal_2388 = 0;
	auto uLocal_2389 = 0;
	auto uLocal_2390 = 0;
	auto uLocal_2391 = 0;
	auto uLocal_2392 = 0;
	auto uLocal_2393 = 0;
	auto uLocal_2394 = 0;
	auto uLocal_2395 = 0;
	auto uLocal_2396 = 0;
	auto uLocal_2397 = 0;
	auto uLocal_2398 = 0;
	auto uLocal_2399 = 0;
	auto uLocal_2400 = 0;
	auto uLocal_2401 = 0;
	auto uLocal_2402 = 0;
	auto uLocal_2403 = 0;
	auto uLocal_2404 = 0;
	auto uLocal_2405 = 0;
	auto uLocal_2406 = 0;
	auto uLocal_2407 = 0;
	auto uLocal_2408 = 0;
	auto uLocal_2409 = 0;
	auto uLocal_2410 = 0;
	auto uLocal_2411 = 0;
	auto uLocal_2412 = 0;
	auto uLocal_2413 = 0;
	auto uLocal_2414 = 0;
	auto uLocal_2415 = 0;
	auto uLocal_2416 = 0;
	auto uLocal_2417 = 0;
	auto uLocal_2418 = 0;
	auto uLocal_2419 = 0;
	auto uLocal_2420 = 0;
	auto uLocal_2421 = 0;
	auto uLocal_2422 = 0;
	auto uLocal_2423 = 0;
	auto uLocal_2424 = 0;
	auto uLocal_2425 = -1;
	auto uLocal_2426 = 1092616192;
	auto uLocal_2427 = 0;
	auto uLocal_2428 = 0;
	int iLocal_2429 = 0;
	auto uLocal_2430 = 0;
	auto uLocal_2431 = 0;
	int iLocal_2432 = 0;
	auto uLocal_2433 = 0;
	auto uLocal_2434 = 0;
	int iLocal_2435 = 0;
	int iLocal_2436 = 0;
	int iLocal_2437 = 0;
	int iLocal_2438 = 0;
	int iLocal_2439 = 0;
	int iLocal_2440 = 0;
	int iLocal_2441 = 0;
	struct<2863> Local_2442 = 0;
	auto uLocal_5305 = 1;
	auto uLocal_5306 = 0;
	int iLocal_5307 = 0;
	auto uLocal_5308 = 0;
	auto uLocal_5309 = 0;
	Vector3 vLocal_5310 = 0;
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
	sLocal_18 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	iLocal_28 = 3;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	vLocal_45 = {1691.228f, 3251.785f, 44.2574f};
	vLocal_48 = {2.5652f, 0f, -4.1481f};
	vLocal_517 = {500f, 500f, 500f};
	iLocal_520 = -1;
	iLocal_529 = 1;
	fLocal_537 = 0.008f;
	fLocal_538 = 0.013f;
	fLocal_583 = 0.05f + 0.275f - 0.01f;
	fLocal_586 = -0.05f;
	fLocal_587 = 0.92f;
	fLocal_588 = 1.94f;
	fLocal_589 = 2.99f;
	fLocal_590 = 3.7f;
	fLocal_2104 = -1f;
	iLocal_2105 = 1;
	fLocal_2278 = 0.2f;
	fLocal_2279 = 0.2f;
	fLocal_2292 = 0f;
	sLocal_2305 = "SPR_UI_FAILD";
	sLocal_2306 = "SPR_UI_FRETRY";
	sLocal_2334 = "CHECKPOINT_NORMAL";
	sLocal_2335 = "CHECKPOINT_MISSED";
	sLocal_2336 = "CHECKPOINT_PERFECT";
	vLocal_2337 = {1694.74f, 3276.502f, 41.2796f};
	vLocal_2340 = {8.79494f, 0.59893f, 154.8464f};
	iLocal_2437 = true;
	iLocal_2438 = true;
	iLocal_2440 = true;
	vLocal_5310 = {-1497.708f, -3449.576f, 7.3477f};
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(114))
	{
		func_571();
	}
	set_mission_flag(1);
	Local_2351.f_1 = 0;
	Local_2351.f_5 = 0;
	Local_2351.f_6 = 0;
	while (true)
	{
		func_570();
		switch (Local_2351.f_1)
		{
			case 0:
				if (!func_559())
				{
					Local_2351.f_1 = 1;
				}
				break;
			
			case 1:
				if (!func_1())
				{
					Local_2351.f_1 = 2;
				}
				break;
			
			case 2:
				func_571();
				break;
		}
		wait(false);
	}
}

bool func_1()
{
	int iVar0;
	int iVar1;
	int iVar2;
	auto uVar3;
	int iVar4;
	
	if (is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
	{
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_51.f_1))
	{
		if (!is_entity_dead(Local_51.f_1, 0))
		{
			if (!is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), Local_51.f_1, 0))
			{
				if (is_ped_getting_into_a_vehicle(PLAYER::PLAYER_PED_ID()))
				{
					Local_51.f_1 = set_exclusive_phone_relationships(PLAYER::PLAYER_PED_ID());
				}
			}
		}
	}
	else if (is_ped_getting_into_a_vehicle(PLAYER::PLAYER_PED_ID()))
	{
		Local_51.f_1 = set_exclusive_phone_relationships(PLAYER::PLAYER_PED_ID());
	}
	else
	{
		Local_51.f_1 = get_closest_vehicle(get_entity_coords(PLAYER::PLAYER_PED_ID(), 1), 10f, joaat("stunt"), 0);
	}
	if (Local_2442.f_2861 != 0)
	{
		Local_2442.f_2862 -= 25;
		if (Local_2442.f_2862 <= 0)
		{
			delete_checkpoint(Local_2442.f_2861);
			Local_2442.f_2861 = 0;
			iLocal_2307 = false;
		}
		else
		{
			if (iLocal_2307)
			{
				iVar4 = 6;
			}
			else
			{
				iVar4 = 1;
			}
			func_556(func_557(iVar4), &iVar0, &iVar1, &iVar2, &uVar3);
			set_checkpoint_rgba(Local_2442.f_2861, iVar0, iVar1, iVar2, func_555(ceil(1.5f * IntToFloat(Local_2442.f_2862)), 255));
			_set_checkpoint_icon_rgba(Local_2442.f_2861, iVar0, iVar1, iVar2, Local_2442.f_2862);
		}
	}
	func_554();
	set_exclusive_scenario_group("AMMUNATION");
	CONTROLS::DISABLE_CONTROL_ACTION(0, 99, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 100, 1);
	if (Local_2351.f_6 == 4)
	{
		set_all_random_peds_flee_this_frame(player_id());
		stop_fire_in_range(get_entity_coords(PLAYER::PLAYER_PED_ID(), 1), 10f);
		if (is_vehicle_driveable(Local_51.f_1, 0))
		{
			if (is_entity_on_fire(Local_51.f_1))
			{
				stop_entity_fire(Local_51.f_1);
			}
		}
	}
	switch (Local_2351.f_6)
	{
		case 0:
			stop_scripted_conversation(false);
			Local_2351 = -1;
			Local_51.f_10 = 0;
			set_all_vehicle_generators_active_in_area(1734.802f, 3224.105f, 41.3709f, 1762.067f, 3258.69f, 40.5188f, false, 1);
			if (ENTITY::DOES_ENTITY_EXIST(Local_51.f_1))
			{
				set_vehicle_doors_locked(Local_51.f_1, 1);
				Local_2442.f_2859 = 0;
				Local_2351.f_6 = 3;
			}
			else
			{
				Local_2351.f_6 = 1;
			}
			break;
		
		case 1:
			Local_2351.f_6 = 18;
			break;
		
		case 2:
			if (ENTITY::DOES_ENTITY_EXIST(Local_51.f_1))
			{
				set_player_control(player_id(), false, 512);
				set_vehicle_doors_locked(Local_51.f_1, 1);
				Local_2442.f_2859 = 0;
				Local_2351.f_6 = 3;
			}
			break;
		
		case 3:
			if (Local_2442)
			{
			}
			else if ((does_cam_exist(iLocal_2076) && is_cam_active(iLocal_2076)) && is_screen_faded_in())
			{
				if (does_cam_exist(Local_2442.f_2858))
				{
					destroy_cam(Local_2442.f_2858, 0);
				}
				_stop_screen_effect("MinigameTransitionOut");
				_start_screen_effect("MinigameTransitionIn", false, 1);
				Local_2442.f_2858 = create_camera_with_params(26379945, vLocal_45, vLocal_48, 34.9705f, 1, 2);
				set_cinematic_mode_active(0);
				set_cinematic_button_active(false);
				_start_screen_effect("MinigameTransitionOut", false, 0);
				set_cam_coord(iLocal_2076, vLocal_45.x, vLocal_45.y, vLocal_45.z + 1000f);
				set_cam_rot(iLocal_2076, 90f, vLocal_48.y, vLocal_48.z, 2);
				set_cam_active_with_interp(Local_2442.f_2858, iLocal_2076, 500, 1, 1);
				play_sound_frontend(-1, "QUIT_WHOOSH", "HUD_MINI_GAME_SOUNDSET", 1);
				render_script_cams(true, false, 3000, 1, 0, 0);
			}
			else
			{
				func_553(500);
				if (does_cam_exist(Local_2442.f_2858))
				{
					destroy_cam(Local_2442.f_2858, 0);
				}
				Local_2442.f_2858 = create_camera_with_params(26379945, vLocal_45, vLocal_48, 34.9705f, 1, 2);
				render_script_cams(true, false, 3000, 1, 0, 0);
			}
			func_552(&iLocal_2327);
			func_551(1);
			clear_focus();
			Local_2351.f_6 = 4;
			break;
		
		case 4:
			if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0) && !is_entity_dead(Local_51.f_1, 0))
			{
				set_vehicle_engine_on(Local_51.f_1, true, 0, 0);
			}
			if (GAMEPLAY::IS_PC_VERSION())
			{
				CONTROLS::DISABLE_CONTROL_ACTION(2, 199, 1);
			}
			CONTROLS::DISABLE_CONTROL_ACTION(2, 200, 1);
			display_radar(false);
			Local_2442.f_2 = Local_2442;
			if (Local_2442)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_2442.f_358[0 /*189*/].f_9))
				{
					set_vehicle_doors_locked(Local_2442.f_358[0 /*189*/].f_9, 4);
				}
				iLocal_2020 = 0;
				Local_2442 = 0;
				func_520();
				Local_2351.f_6 = 8;
			}
			else if (Local_2442.f_2859)
			{
				if (is_player_online())
				{
					if ((Local_2442.f_2859 && is_control_just_released(2, 202)) && timera() > 500)
					{
						play_sound(-1, "CANCEL", "HUD_MINI_GAME_SOUNDSET", 0, 0, 1);
						Local_2442.f_2859 = 0;
						Local_2442.f_2860 = 1;
						func_519(&(Local_51.f_119));
						settimera(false);
					}
					if (!Local_2442.f_2860 && func_518(&uLocal_1580))
					{
						Local_2442.f_2860 = 1;
						func_516(Local_2442.f_2860);
					}
					func_454(&(Local_51.f_118), Global_100184, &(Local_51.f_24[Global_100184 /*8*/]));
				}
				else if (func_444(&iLocal_2017, 0))
				{
					Local_2442.f_2859 = 0;
					iLocal_2017 = 0;
					func_519(&(Local_51.f_119));
					settimera(false);
				}
			}
			else
			{
				if ((func_411(&Local_2442, 0) && !iLocal_527) && !iLocal_526)
				{
					func_519(&(Local_51.f_119));
				}
				if (iLocal_530 && is_player_online())
				{
					func_519(&(Local_51.f_119));
					iLocal_530 = 0;
				}
				if ((((!Local_2442.f_2859 && !iLocal_527) && !iLocal_526) && (iLocal_529 || !is_player_online())) && (is_control_just_released(2, 211) || is_disabled_control_just_released(2, 211)))
				{
					Local_2442.f_2859 = 1;
					play_sound(-1, "SELECT", "HUD_MINI_GAME_SOUNDSET", 0, 0, 1);
					func_410(&uLocal_1580);
					Local_2442.f_2860 = func_518(&uLocal_1580);
					func_516(Local_2442.f_2860);
					settimera(false);
				}
				if (func_351(&uLocal_5305, &(Local_2442.f_1)))
				{
					iLocal_2020 = 0;
					if (Local_51.f_10 != -1)
					{
						func_343();
						func_520();
						if (is_entity_at_coord(Local_51.f_1, vLocal_2337, 5f, 5f, 5f, false, true, 0))
						{
							if (!is_entity_dead(Local_51.f_1, 0))
							{
								func_342(&iLocal_5307);
								Local_2351.f_6 = 8;
							}
						}
						else if (!is_entity_dead(Local_51.f_1, 0))
						{
							Local_2351.f_6 = 8;
						}
					}
					else
					{
						Local_2351.f_6 = 7;
					}
				}
			}
			break;
		
		case 7:
			hide_hud_and_radar_this_frame();
			if (is_vehicle_driveable(Local_51.f_1, 0))
			{
				render_script_cams(false, false, 3000, 1, 0, 0);
				Local_2351.f_6 = 18;
			}
			else
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_2442.f_358[0 /*189*/].f_9))
				{
					freeze_entity_position(Local_2442.f_358[0 /*189*/].f_9, false);
				}
				set_entity_coords(PLAYER::PLAYER_PED_ID(), vLocal_2337, 1, false, 0, 1);
				set_entity_rotation(PLAYER::PLAYER_PED_ID(), vLocal_2340, 2, 1);
				if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
				{
					set_vehicle_on_ground_properly(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0));
				}
				set_gameplay_cam_relative_heading(0f);
				set_gameplay_cam_relative_pitch(0f, 1f);
				if (ENTITY::DOES_ENTITY_EXIST(Local_2442.f_358[0 /*189*/].f_9))
				{
					if (!is_new_load_scene_active())
					{
						new_load_scene_start(vLocal_2337, get_entity_forward_vector(PLAYER::PLAYER_PED_ID()), 500f, 0);
					}
					if (is_new_load_scene_loaded())
					{
						new_load_scene_stop();
						Local_2351.f_6 = 18;
					}
				}
				else
				{
					Local_2351.f_6 = 18;
				}
			}
			break;
		
		case 8:
			_0xAF66DCEE6609B148();
			if (Local_51.f_10 == 0)
			{
				stop_playback_recorded_vehicle(Local_51.f_1);
				if (func_341(iLocal_2318, 16))
				{
					func_339(&iLocal_2318, 16);
				}
				set_vehicle_engine_on(Local_51.f_1, true, 1, 0);
				set_ped_into_vehicle(PLAYER::PLAYER_PED_ID(), Local_51.f_1, -1);
				set_vehicle_fixed(Local_51.f_1);
				func_338();
				iLocal_2076 = create_camera_with_params(26379945, 1702.487f, 3279.545f, 41.9968f, -2.9399f, 0f, 110.4428f, 45.0218f, 1, 2);
				set_cam_active(Local_2442.f_2858, false);
				Local_2351.f_6 = 9;
			}
			else if (func_337(1000))
			{
				render_script_cams(false, false, 3000, 1, 0, 0);
				set_gameplay_cam_relative_heading(0);
				set_vehicle_fixed(Local_51.f_1);
				stop_playback_recorded_vehicle(Local_51.f_1);
				if (is_screen_faded_out())
				{
					func_338();
					Local_2351.f_6 = 10;
				}
			}
			break;
		
		case 9:
			if (!((is_cam_active(iLocal_2076) && is_cam_interpolating(iLocal_2076)) || (is_cam_active(Local_2442.f_2858) && is_cam_interpolating(Local_2442.f_2858))))
			{
				_0xC819F3CBB62BF692(1, 0f, 3, 0);
				func_338();
				Local_2351.f_6 = 10;
			}
			break;
		
		case 10:
			Local_2442.f_25 = 0;
			Local_2351.f_6 = 11;
			break;
		
		case 11:
			if (!func_323(&Local_2442))
			{
				func_551(1);
				if (Local_2442.f_2)
				{
					new_load_scene_start(get_entity_coords(PLAYER::PLAYER_PED_ID(), 1), get_entity_forward_vector(PLAYER::PLAYER_PED_ID()), 500f, 0);
				}
				if (Local_51.f_10 == 0)
				{
					func_322("SPR_TAXI_GATE", 10000, 1);
					if (!func_341(iLocal_2318, 16))
					{
						func_314(&Local_2442, 0, 1);
						func_313(&iLocal_2318, 16);
					}
					if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
					{
						freeze_entity_position(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0), false);
						set_player_control(player_id(), true, 0);
					}
					display_hud(true);
					display_radar(true);
					Local_2351.f_6 = 13;
				}
				else
				{
					Local_2351.f_6 = 13;
				}
				Local_2442.f_2 = 0;
			}
			break;
		
		case 13:
			if (!is_new_load_scene_active() || is_new_load_scene_loaded())
			{
				if (is_new_load_scene_active())
				{
					new_load_scene_stop();
				}
				set_cinematic_mode_active(0);
				set_cinematic_button_active(true);
				freeze_entity_position(Local_2442.f_358[0 /*189*/].f_9, false);
				func_338();
				if (func_341(iLocal_2318, 16))
				{
					func_339(&iLocal_2318, 16);
				}
				if (Local_51.f_10 == 0)
				{
					if (func_553(500))
					{
						Local_2442.f_26 = 0;
						Local_2351.f_6 = 14;
					}
				}
				else
				{
					func_312(&Local_2442);
					set_gameplay_cam_relative_heading(0f);
					set_gameplay_cam_relative_pitch(0f, 1f);
					if (func_553(500))
					{
						Local_2442.f_26 = 0;
						Local_2351.f_6 = 14;
					}
				}
			}
			break;
		
		case 14:
			if (Local_2351 == 1)
			{
				return true;
			}
			if (func_24(&Local_2442))
			{
				return true;
			}
			iLocal_2020 = 3;
			func_23();
			func_13();
			if (!Local_2442)
			{
				func_10(&(Local_2442.f_6));
				func_9(&(Local_2442.f_358[0 /*189*/]), Local_51.f_3, Local_51.f_6, 0f);
				if (ENTITY::DOES_ENTITY_EXIST(Local_2442.f_358[0 /*189*/].f_9))
				{
					set_vehicle_on_ground_properly(Local_2442.f_358[0 /*189*/].f_9);
				}
				if (new_load_scene_start(vLocal_45, func_8(vLocal_48), 4500f, 0))
				{
					set_player_control(player_id(), false, 0);
					while (!is_new_load_scene_loaded() && func_5(&(Local_2442.f_6)) < 20f)
					{
						wait(false);
					}
					new_load_scene_stop();
					_set_focus_area(vLocal_45, func_8(vLocal_48));
					func_4(&(Local_2442.f_6));
					Local_2351.f_6 = 15;
				}
				else if (func_2(&(Local_2442.f_6), 20f))
				{
					func_4(&(Local_2442.f_6));
					Local_2351.f_6 = 15;
				}
			}
			else
			{
				Local_2351.f_6 = 3;
			}
			break;
		
		case 15:
			if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
			{
				set_vehicle_doors_locked(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0), 1);
			}
			Local_2442.f_2859 = 0;
			Local_2351.f_6 = 3;
			break;
		
		case 18:
			if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
			{
				set_vehicle_doors_locked(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0), 1);
			}
			func_411(&Local_2442, 1);
			if (is_screen_faded_out())
			{
				func_553(1000);
			}
			else
			{
				return false;
			}
			break;
	}
	return true;
}

bool func_2(int iParam0, float fParam1)
{
	if (func_3(iParam0))
	{
		if (func_5(iParam0) > fParam1)
		{
			return true;
		}
	}
	return false;
}

int func_3(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(*iParam0, true);
}

void func_4(auto uParam0)
{
	*uParam0.f_1 = 0f;
	*uParam0.f_2 = 0f;
	*uParam0 = 0;
}

float func_5(int iParam0)
{
	if (func_3(iParam0))
	{
		if (func_7(iParam0))
		{
			return *iParam0.f_2;
		}
		else
		{
			return func_6(GAMEPLAY::IS_BIT_SET(*iParam0, 4)) - *iParam0.f_1;
		}
	}
	return *iParam0.f_1;
}

float func_6(int iParam0)
{
	int iVar0;
	
	if (iParam0)
	{
		return to_float(GAMEPLAY::GET_GAME_TIMER()) / 1000f;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME();
		return to_float(iVar0) / 1000f;
	}
	return to_float(GAMEPLAY::GET_GAME_TIMER()) / 1000f;
}

int func_7(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(*iParam0, 2);
}

Vector3 func_8(Vector3 vParam0)
{
	return -sin(vParam0.z) * cos(vParam0.x), cos(vParam0.z) * cos(vParam0.x), sin(vParam0.x);
}

void func_9(auto uParam0, Vector3 vParam1, Vector3 fParam2, Vector3 fParam3)
{
	set_entity_coords(*uParam0.f_9, vParam1, 1, false, 0, 1);
	set_entity_heading(*uParam0.f_9, fParam4);
	set_vehicle_forward_speed(*uParam0.f_9, fParam5);
}

void func_10(int iParam0)
{
	if (!func_3(iParam0))
	{
		func_342(iParam0);
	}
	else
	{
		func_11(iParam0);
	}
}

void func_11(int iParam0)
{
	func_12(iParam0, 0f);
}

void func_12(int iParam0, float fParam1)
{
	*iParam0.f_1 = func_6(GAMEPLAY::IS_BIT_SET(*iParam0, 4)) - fParam1;
	GAMEPLAY::SET_BIT(iParam0, true);
	GAMEPLAY::CLEAR_BIT(iParam0, 2);
	*iParam0.f_2 = 0f;
}

void func_13()
{
	if (Global_101154.f_17733.f_12[4 /*8*/].f_4 == 1)
	{
		if (Global_101154.f_17733.f_6[4] > 0f)
		{
			if (Global_101154.f_17733.f_6[4] <= func_22(4))
			{
				func_14(125, 0, 0);
			}
		}
	}
}

void func_14(int iParam0, int iParam1, int iParam2)
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
		func_20(891 + iParam0, 1, -1, 1);
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
		func_15();
	}
}

void func_15()
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
			if (!GAMEPLAY::IS_BIT_SET(Global_101154.f_8884.f_3856, 14))
			{
				if (Global_100894 == Global_100877)
				{
					_0x11FF1C80276097ED(joaat("num_rndevents_completed"), Global_100877, 0);
					GAMEPLAY::SET_BIT(&(Global_101154.f_8884.f_3856), 14);
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
	STATS::STAT_SET_INT(joaat("num_missions_completed"), Global_100890, 1);
	STATS::STAT_SET_INT(joaat("num_missions_available"), Global_100873, 1);
	STATS::STAT_SET_INT(joaat("num_minigames_completed"), Global_100891, 1);
	STATS::STAT_SET_INT(joaat("num_minigames_available"), Global_100874, 1);
	STATS::STAT_SET_INT(joaat("num_oddjobs_completed"), Global_100892, 1);
	STATS::STAT_SET_INT(joaat("num_oddjobs_available"), Global_100875, 1);
	STATS::STAT_SET_INT(joaat("num_rndpeople_completed"), Global_100893, 1);
	STATS::STAT_SET_INT(joaat("num_rndpeople_available"), Global_100876, 1);
	STATS::STAT_SET_INT(joaat("num_rndevents_completed"), iVar9, 1);
	STATS::STAT_SET_INT(joaat("num_rndevents_available"), Global_100880, 1);
	STATS::STAT_SET_INT(joaat("num_misc_completed"), Global_100896 + Global_100895, 1);
	STATS::STAT_SET_INT(joaat("num_misc_available"), Global_100879 + Global_100878, 1);
	Global_100897 = Global_100890 * 100 / Global_100873;
	Global_100899 = Global_100892 + Global_100891 * 100 / Global_100875 + Global_100874;
	Global_100898 = Global_100893 + iVar9 * 100 / Global_100876 + Global_100880;
	Global_100900 = Global_100895 + Global_100896 * 100 / Global_100878 + Global_100879;
	stat_set_float(joaat("total_progress_made"), Global_101154.f_8884.f_3853, 1);
	STATS::STAT_SET_INT(joaat("percent_story_missions"), Global_100897, 1);
	STATS::STAT_SET_INT(joaat("percent_ambient_missions"), Global_100898, 1);
	STATS::STAT_SET_INT(joaat("percent_oddjobs"), Global_100899, 1);
	if (fVar8 > 0f && floor(fVar8) < floor(Global_101154.f_8884.f_3853))
	{
		func_19(13, floor(Global_101154.f_8884.f_3853));
	}
	if (!_0xBEDB96A7584AA8CF())
	{
		if (!Global_69489)
		{
			if (func_18() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (network_is_cloud_available())
				{
					Global_100888 = 0;
				}
				if (!Global_55749)
				{
					func_16();
				}
			}
		}
	}
}

bool func_16()
{
	if (func_17(0))
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

int func_17(int iParam0)
{
	if (!iParam0 && _get_number_of_instances_of_streamed_script(joaat("benchmark")) > 0)
	{
		return true;
	}
	return GAMEPLAY::IS_BIT_SET(Global_69737, false);
}

auto func_18()
{
	return Global_25120;
}

int func_19(int iParam0, int iParam1)
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

int func_20(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_21();
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

auto func_21()
{
	return Global_1312747;
}

float func_22(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 130f;
			break;
		
		case 1:
			return 120f;
			break;
		
		case 2:
			return 120f;
			break;
		
		case 3:
			return 170f;
			break;
		
		case 4:
			return 180f;
			break;
	}
	return -1f;
}

void func_23()
{
	iLocal_2343 = 0;
	iLocal_2344 = 0;
	iLocal_2345 = 0;
	iLocal_2346 = 0;
	iLocal_2347 = 0;
	iLocal_2348 = 0;
	iLocal_2349 = 0;
	iLocal_2350 = 0;
}

bool func_24(auto uParam0)
{
	switch (*uParam0.f_26)
	{
		case 0:
			func_339(&iLocal_2318, 4);
			hide_hud_component_this_frame(2);
			func_311(uParam0);
			*uParam0.f_17 = func_310();
			if (Local_51.f_10 == 0)
			{
				if (!func_341(iLocal_2318, 16))
				{
					func_314(uParam0, 0, 1);
					func_314(uParam0, 1, 0);
					func_313(&iLocal_2318, 16);
				}
			}
			else
			{
				func_312(uParam0);
				if (!func_341(iLocal_2318, 16))
				{
					func_314(uParam0, 0, 1);
					func_314(uParam0, 1, 0);
					func_313(&iLocal_2318, 16);
				}
			}
			func_4(uParam0.f_14);
			iLocal_2332 = 0;
			set_player_control(player_id(), false, 0);
			*uParam0.f_26 = 1;
			break;
		
		case 1:
			hide_hud_component_this_frame(2);
			if (Local_51.f_10 == 0)
			{
				if (func_341(iLocal_2318, 16))
				{
					func_339(&iLocal_2318, 16);
				}
				func_308(uParam0);
				*uParam0.f_26 = 7;
			}
			else
			{
				func_312(uParam0);
				if (!func_284(uParam0.f_14))
				{
					if (!_0x3044240D2E0FA842())
					{
						render_script_cams(false, true, 3000, 1, 0, 0);
					}
					if (func_341(iLocal_2318, 16))
					{
						func_339(&iLocal_2318, 16);
					}
					display_hud(true);
					func_308(uParam0);
					if (Local_51.f_10 == 0 && (Global_101154.f_17733.f_6[0] > Local_51.f_112[0] || Global_101154.f_17733.f_6[0] == 0f))
					{
						func_283("SPR_HELP_GATE", 10000);
					}
					*uParam0.f_26 = 7;
				}
			}
			break;
		
		case 2:
			if (!func_341(iLocal_2318, 1))
			{
				settimera(false);
				func_244(uParam0);
				func_243(&(Local_51.f_119), 0, 0, 1, 1);
				func_242(&(Local_51.f_119), "SPR_CONT2", 2, 201, 1, 1, 0);
				func_241(&(Local_51.f_119), 1);
				func_313(&iLocal_2318, 1);
			}
			if (is_help_message_being_displayed())
			{
				clear_help(1);
			}
			if (func_240("SPR_RETR_FAIL", 0, 0))
			{
				clear_prints();
			}
			if (is_help_message_being_displayed())
			{
				clear_help(1);
			}
			if (func_240("SPR_RETR_FAIL", 0, 0))
			{
				clear_prints();
			}
			settimera(false);
			func_238();
			func_237(0);
			special_ability_deactivate(player_id());
			enable_special_ability(player_id(), 0);
			CONTROLS::DISABLE_CONTROL_ACTION(0, 75, 1);
			func_236(1);
			*uParam0.f_26 = 4;
			break;
		
		case 4:
			CONTROLS::DISABLE_CONTROL_ACTION(0, 75, 1);
			func_234();
			if (!is_entity_dead(*(uParam0.f_358[0 /*189*/]).f_9, 0))
			{
				if (!is_entity_on_screen(*(uParam0.f_358[0 /*189*/]).f_9) && does_cam_exist(iLocal_2077))
				{
					get_cam_rot(iLocal_2077, 2);
					set_entity_visible(*(uParam0.f_358[0 /*189*/]).f_9, false, 0);
					freeze_entity_position(*(uParam0.f_358[0 /*189*/]).f_9, true);
					func_233();
				}
			}
			if (!func_219(uParam0, iLocal_2437, iLocal_2438))
			{
				func_233();
				func_218(0);
				clear_help(1);
				if (func_341(iLocal_2318, 1))
				{
					func_339(&iLocal_2318, 1);
				}
				func_217(0, 0);
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					clear_ped_tasks(PLAYER::PLAYER_PED_ID());
				}
				set_gameplay_cam_relative_pitch(0, 1f);
				set_gameplay_cam_relative_heading(0);
				stop_scripted_conversation(false);
				iLocal_2441 = get_sound_id();
				play_sound_frontend(iLocal_2441, "Phone_Generic_Key_02", "HUD_MINIGAME_SOUNDSET", 1);
				func_4(&iLocal_2308);
				*uParam0.f_26 = 5;
			}
			break;
		
		case 5:
			if (!is_entity_dead(*(uParam0.f_358[0 /*189*/]).f_9, 0))
			{
				set_entity_coords(*(uParam0.f_358[0 /*189*/]).f_9, vLocal_2337, 1, false, 0, 1);
				set_entity_rotation(*(uParam0.f_358[0 /*189*/]).f_9, vLocal_2340, 2, 1);
				set_entity_visible(*(uParam0.f_358[0 /*189*/]).f_9, true, 0);
				CONTROLS::DISABLE_CONTROL_ACTION(0, 75, 1);
				set_vehicle_on_ground_properly(*(uParam0.f_358[0 /*189*/]).f_9);
				set_entity_invincible(*(uParam0.f_358[0 /*189*/]).f_9, false);
			}
			iLocal_2436 = 0;
			*uParam0.f_26 = 6;
			*(uParam0.f_358[0 /*189*/]).f_23 = 7;
			break;
		
		case 6:
			*uParam0.f_26 = 8;
			break;
		
		case 7:
			draw_scaleform_movie(iLocal_2327, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 100, 0);
			if (!func_341(iLocal_2318, 16))
			{
				func_314(uParam0, 0, 1);
				func_314(uParam0, 1, 0);
				func_313(&iLocal_2318, 16);
				func_237(1);
				func_216(*(uParam0.f_27[*(uParam0.f_358[0 /*189*/]).f_11 /*10*/]));
			}
			if (*uParam0.f_1)
			{
				func_189(uParam0);
				func_187(uParam0);
			}
			else
			{
				func_184(&uLocal_2293, 0);
				func_233();
				set_cinematic_button_active(false);
			}
			if (!func_41(uParam0, Local_51))
			{
				trigger_music_event("MGSP_END");
				func_28(uParam0);
				func_4(uParam0.f_14);
				*uParam0.f_26 = 2;
				func_4(uParam0.f_22);
			}
			break;
		
		case 8:
			CONTROLS::DISABLE_CONTROL_ACTION(0, 75, 1);
			func_27(uParam0.f_17);
			func_233();
			func_25();
			return false;
			break;
	}
	return true;
}

void func_25()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (func_341(uLocal_2101, iVar0))
		{
			func_339(&uLocal_2101, iVar0);
		}
		if (func_341(uLocal_2102, iVar0))
		{
			func_339(&uLocal_2102, iVar0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2089[iVar0]))
		{
			delete_vehicle(&(iLocal_2089[iVar0]));
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2095[iVar0]))
		{
			delete_ped(&(iLocal_2095[iVar0]));
		}
		iVar0++;
	}
	func_26(&iLocal_2083);
	iVar0 = 0;
	while (iVar0 < iLocal_2083)
	{
		iLocal_2083[iVar0] = 0;
		iVar0++;
	}
}

void func_26(auto uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (*uParam0[iVar0] != 0)
		{
			set_model_as_no_longer_needed(*uParam0[iVar0]);
		}
		iVar0++;
	}
}

void func_27(int iParam0)
{
	if (has_scaleform_movie_loaded(*iParam0))
	{
		set_scaleform_movie_as_no_longer_needed(iParam0);
		*iParam0 = 0;
	}
}

void func_28(auto uParam0)
{
	int iVar0;
	
	if (!func_7(uParam0.f_3))
	{
		func_40(uParam0.f_3);
	}
	set_entity_invincible(*(uParam0.f_358[0 /*189*/]).f_9, true);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 75, 1);
	func_39(uParam0);
	if (Local_51 == 0)
	{
		func_38(uParam0);
	}
	func_32(uParam0);
	iVar0 = 0;
	while (iVar0 < *uParam0.f_13)
	{
		func_30(uParam0.f_358[iVar0 /*189*/]);
		if (iVar0 != 0)
		{
			func_29(uParam0.f_358[iVar0 /*189*/]);
		}
		iVar0++;
	}
}

void func_29(auto uParam0)
{
}

void func_30(auto uParam0)
{
	if (!is_entity_dead(*uParam0.f_9, 0))
	{
		if (Local_51 != 0)
		{
			func_31();
		}
	}
}

void func_31()
{
}

void func_32(auto uParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < *uParam0.f_13)
	{
		if (!is_entity_dead(*(uParam0.f_358[iVar0 /*189*/]).f_8, 0))
		{
			if (*(uParam0.f_358[iVar0 /*189*/]).f_8 == PLAYER::PLAYER_PED_ID())
			{
				iVar1 = func_37(Local_51.f_10);
				if (iVar1 <= 0 || iVar1 > *(uParam0.f_358[iVar0 /*189*/]).f_12)
				{
					func_36(Local_51.f_10, *(uParam0.f_358[iVar0 /*189*/]).f_12);
				}
				fVar2 = func_35(Local_51.f_10);
				func_34(Local_51.f_10, to_float(ceil(*(uParam0.f_358[0 /*189*/]).f_13)));
				if (fVar2 == 0f || fVar2 > *(uParam0.f_358[0 /*189*/]).f_13)
				{
					func_33(Local_51.f_10, to_float(ceil(*(uParam0.f_358[0 /*189*/]).f_13)));
				}
				return;
			}
		}
		iVar0++;
	}
}

void func_33(auto uParam0, Vector3 fParam1)
{
	Global_101154.f_17733.f_6[uParam0] = fParam1;
}

void func_34(auto uParam0, Vector3 fParam1)
{
	Local_51.f_18[uParam0] = fParam1;
}

auto func_35(auto uParam0)
{
	auto uVar0;
	
	uVar0 = Global_101154.f_17733.f_6[uParam0];
	return uVar0;
}

void func_36(auto uParam0, auto uParam1)
{
	Global_101154.f_17733[uParam0] = uParam1;
}

int func_37(auto uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = Global_101154.f_17733[uParam0];
	return iVar0;
}

void func_38(auto uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < *uParam0.f_13)
	{
		iVar2 = 1;
		iVar1 = 0;
		while (iVar1 < *uParam0.f_13)
		{
			if (iVar0 != iVar1)
			{
				if (*(uParam0.f_358[iVar0 /*189*/]).f_13 > *(uParam0.f_358[iVar1 /*189*/]).f_13)
				{
					iVar2++;
				}
			}
			iVar1++;
		}
		*(uParam0.f_358[iVar0 /*189*/]).f_12 = iVar2;
		iVar0++;
	}
}

void func_39(auto uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0.f_13)
	{
		if (*(uParam0.f_358[iVar0 /*189*/]).f_11 != *uParam0.f_12)
		{
			*(uParam0.f_358[iVar0 /*189*/]).f_13 = *(uParam0.f_358[0 /*189*/]).f_13 + IntToFloat(*uParam0.f_12 - *(uParam0.f_358[iVar0 /*189*/]).f_11) * get_random_float_in_range(0.5f, 2.5f);
		}
		iVar0++;
	}
}

void func_40(int iParam0)
{
	if (func_3(iParam0))
	{
		if (!func_7(iParam0))
		{
			*iParam0.f_2 = func_6(GAMEPLAY::IS_BIT_SET(*iParam0, 4)) - *iParam0.f_1;
			GAMEPLAY::SET_BIT(iParam0, 2);
		}
	}
}

bool func_41(auto uParam0, int iParam1)
{
	float fVar0;
	int iVar1;
	struct<10> Var2;
	struct<10> Var12;
	int iVar22;
	int iVar23;
	int iVar24;
	char[16] cVar25;
	
	if (Local_51.f_10 == 0)
	{
		if (*(uParam0.f_358[0 /*189*/]).f_11 == 0)
		{
			func_11(uParam0.f_3);
			if (func_341(iLocal_2319, 131072/*func_575*/))
			{
				reset_vehicle_stuck_timer(*(uParam0.f_358[0 /*189*/]).f_9, 4);
				func_339(&iLocal_2319, 131072/*func_575*/);
			}
		}
		else if (*(uParam0.f_358[0 /*189*/]).f_11 == 1 && !func_341(iLocal_2319, 131072/*func_575*/))
		{
			func_283("SPR_INFO_BON", 10000);
			func_313(&iLocal_2319, 131072/*func_575*/);
			if (func_341(iLocal_2319, 262144))
			{
				func_339(&iLocal_2319, 262144);
			}
		}
		else if (*(uParam0.f_358[0 /*189*/]).f_11 == 4 && !func_341(iLocal_2319, 262144))
		{
			func_283("SPR_INFO_RESET", 10000);
			func_313(&iLocal_2319, 262144);
		}
	}
	if (func_3(uParam0.f_3))
	{
		fVar0 = func_5(uParam0.f_3);
	}
	func_166(*(uParam0.f_358[0 /*189*/]).f_11, *uParam0.f_1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 75, 1);
	iVar1 = 0;
	while (iVar1 < *uParam0.f_13)
	{
		if (*(uParam0.f_358[iVar1 /*189*/]).f_11 < *uParam0.f_12)
		{
			iVar23 = false;
			if (*(uParam0.f_358[iVar1 /*189*/]).f_8 == PLAYER::PLAYER_PED_ID())
			{
				iVar23 = true;
			}
			iVar22 = *(uParam0.f_358[iVar1 /*189*/]).f_11;
			if (*(uParam0.f_358[iVar1 /*189*/]).f_11 >= *uParam0.f_12)
			{
				Var2 = {*(uParam0.f_27[*uParam0.f_12 - 1 /*10*/])};
			}
			else
			{
				Var2 = {*(uParam0.f_27[iVar22 /*10*/])};
			}
			if (iVar22 < *uParam0.f_12 - 1)
			{
				Var12 = {*(uParam0.f_27[iVar22 + 1 /*10*/])};
			}
			else
			{
				Var12 = {Var2};
			}
			if (iVar22 != *uParam0.f_12)
			{
				*(uParam0.f_358[iVar1 /*189*/]).f_13 = fVar0 - *(uParam0.f_358[iVar1 /*189*/]).f_15;
				if (*(uParam0.f_358[iVar1 /*189*/]).f_13 < 0f)
				{
					*(uParam0.f_358[iVar1 /*189*/]).f_13 = 0f;
				}
			}
			if (!func_105(uParam0, uParam0.f_358[iVar1 /*189*/], iVar23))
			{
				if ((iVar23 && *uParam0.f_1) && (Local_51.f_10 != 0 || *(uParam0.f_358[0 /*189*/]).f_11 > 0))
				{
					if (!func_3(&iLocal_2429))
					{
						func_342(&iLocal_2429);
					}
					if (func_5(&iLocal_2432) >= 6.5f)
					{
						if (!is_control_pressed(2, 222))
						{
							func_11(&iLocal_2429);
						}
						else if (func_5(&iLocal_2429) >= 1.5f)
						{
							*uParam0.f_1 = 0;
							func_339(&iLocal_2319, 32768);
							*(uParam0.f_358[0 /*189*/]).f_23 = 6;
						}
					}
					else if (is_control_pressed(2, 222))
					{
						if (func_5(uParam0.f_3) < 6.5f)
						{
							func_103("SPR_HELP_RST1", &iLocal_2319, 65536, 0);
						}
						else
						{
							func_103("SPR_HELP_RST", &iLocal_2319, 32768, 0);
						}
					}
				}
				if (!PED::IS_PED_INJURED(*(uParam0.f_358[iVar1 /*189*/]).f_8))
				{
					func_101(uParam0, iVar1);
					if (Local_51 == 0 && func_3(&iLocal_2314))
					{
						return true;
					}
					if (iVar23)
					{
						if (*(uParam0.f_358[iVar1 /*189*/]).f_14 != 0f)
						{
							func_342(uParam0.f_14);
						}
						if (func_341(iLocal_2318, 8))
						{
							func_314(uParam0, iVar22, 1);
							if (iVar22 < *uParam0.f_12 - 1)
							{
								func_314(uParam0, iVar22 + 1, 0);
							}
							func_339(&iLocal_2318, 8);
						}
					}
					if (*uParam0.f_1)
					{
						*uParam0.f_11 = func_93(uParam0, &Var2, &Var12, *(uParam0.f_358[iVar1 /*189*/]).f_8);
						func_90(&Var2, &Var12);
					}
					if (*uParam0.f_11 != -1)
					{
						if (iParam1 == 0)
						{
							func_85(uParam0.f_358[iVar1 /*189*/], iVar23, *uParam0.f_11);
						}
						iLocal_2307 = func_84(*uParam0.f_11);
						*(uParam0.f_358[iVar1 /*189*/]).f_11++;
						iVar22 = *(uParam0.f_358[iVar1 /*189*/]).f_11;
						if (iVar22 >= *uParam0.f_12 - 1)
						{
							Var2 = {*(uParam0.f_27[*uParam0.f_12 - 1 /*10*/])};
						}
						else
						{
							Var2 = {*(uParam0.f_27[iVar22 /*10*/])};
						}
						if (iVar23)
						{
							func_78(uParam0, iVar22 - 1);
							if (iVar22 == *uParam0.f_12)
							{
								iVar24 = 0;
								if (func_3(uParam0.f_3))
								{
									if (!func_7(uParam0.f_3))
									{
										func_40(uParam0.f_3);
									}
									if (*(uParam0.f_358[0 /*189*/]).f_13 > 0f)
									{
										if (*(uParam0.f_358[0 /*189*/]).f_13 <= Local_51.f_106[Local_51.f_10])
										{
											iVar24 = 1;
										}
										else if (*(uParam0.f_358[0 /*189*/]).f_13 <= Local_51.f_112[Local_51.f_10] - Local_51.f_106[Local_51.f_10] / 2f + Local_51.f_106[Local_51.f_10])
										{
											iVar24 = 2;
										}
										else if (*(uParam0.f_358[0 /*189*/]).f_13 <= Local_51.f_112[Local_51.f_10])
										{
											iVar24 = 3;
										}
									}
								}
								if (iVar24 == 0)
								{
								}
								if (iVar24 > 0)
								{
									return false;
								}
								else
								{
									*uParam0.f_1 = 0;
									*(uParam0.f_358[iVar1 /*189*/]).f_11--;
									clear_prints();
									sLocal_2306 = "SPR_TIME_FAIL";
									*(uParam0.f_358[0 /*189*/]).f_23 = 0;
								}
							}
							else
							{
								func_314(uParam0, iVar22, 1);
								if (iVar22 < *uParam0.f_12 - 1)
								{
									func_314(uParam0, iVar22 + 1, 0);
								}
							}
							if (*(uParam0.f_358[iVar1 /*189*/]).f_14 == 0f)
							{
								if (func_3(uParam0.f_14))
								{
									func_4(uParam0.f_14);
								}
							}
							if (*uParam0.f_12 > 0)
							{
								if (*uParam0.f_10 > 0f)
								{
									if (iVar22 == round(IntToFloat(*uParam0.f_12) / 2f))
									{
										*(uParam0.f_358[iVar1 /*189*/]).f_14 = 0f;
										func_11(uParam0.f_14);
									}
								}
							}
						}
						else if (*(uParam0.f_358[iVar1 /*189*/]).f_11 >= *uParam0.f_12)
						{
							if (Local_51 != 2)
							{
								if (!is_entity_dead(*(uParam0.f_358[iVar1 /*189*/]).f_8, 0))
								{
									func_29(uParam0.f_358[iVar1 /*189*/]);
								}
							}
						}
						else
						{
							if (Local_51 != 1)
							{
								if (iVar1 != 0)
								{
									func_76(uParam0, *(uParam0.f_358[iVar1 /*189*/]).f_8, *(uParam0.f_358[iVar1 /*189*/]).f_9, *(uParam0.f_27[*(uParam0.f_358[iVar1 /*189*/]).f_11 /*10*/]), *(uParam0.f_27[*(uParam0.f_358[iVar1 /*189*/]).f_11 /*10*/]).f_7, iVar1);
								}
							}
							else
							{
								StringCopy(&cVar25, "Offroad_", 16);
								StringIntConCat(&cVar25, Local_51.f_10 + 1, 16);
								if (iVar1 == 1)
								{
									StringConCat(&cVar25, "a", 16);
								}
								if (iVar1 > 0)
								{
									if (iLocal_2440)
									{
										if (!is_entity_dead(*(uParam0.f_358[iVar1 /*189*/]).f_8, 0) && !is_entity_dead(*(uParam0.f_358[iVar1 /*189*/]).f_9, 0))
										{
											if (get_script_task_status(*(uParam0.f_358[iVar1 /*189*/]).f_8, -235832601) == 1)
											{
											}
											else
											{
												task_vehicle_follow_waypoint_recording(*(uParam0.f_358[iVar1 /*189*/]).f_8, *(uParam0.f_358[iVar1 /*189*/]).f_9, &cVar25, 262144, 0, 8, -1, _0x53AF99BAA671CA47(*(uParam0.f_358[iVar1 /*189*/]).f_9), 0, 2f);
											}
										}
									}
									else if (iVar1 != 0)
									{
										func_76(uParam0, *(uParam0.f_358[iVar1 /*189*/]).f_8, *(uParam0.f_358[iVar1 /*189*/]).f_9, *(uParam0.f_27[*(uParam0.f_358[iVar1 /*189*/]).f_11 /*10*/]), *(uParam0.f_27[*(uParam0.f_358[iVar1 /*189*/]).f_11 /*10*/]).f_7, iVar1);
									}
								}
							}
							if (Local_51 != 2)
							{
								func_75(uParam0, iVar1);
							}
						}
					}
					if (iParam1 == 0)
					{
						if (iVar23)
						{
							func_74();
						}
					}
				}
			}
		}
		iVar1++;
	}
	if (*uParam0.f_1 == 1)
	{
		func_67(uParam0);
		func_65(uParam0, &iLocal_2439);
		func_64(uParam0, &iLocal_2439);
		func_63();
		func_58(uParam0);
		func_57();
		func_56(uParam0);
		if (*(uParam0.f_358[0 /*189*/]).f_23 != 0)
		{
			if (Local_51.f_10 == 0)
			{
				if (*(uParam0.f_358[0 /*189*/]).f_11 > 0)
				{
					func_42(uParam0);
				}
			}
			else
			{
				func_42(uParam0);
			}
		}
	}
	return true;
}

void func_42(auto uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char* sVar4;
	int iVar5;
	int iVar6;
	
	if (is_radar_hidden())
	{
		display_radar(true);
	}
	if (!func_3(&iLocal_2108))
	{
		iLocal_2106 = 0;
		iLocal_2107 = false;
		func_342(&iLocal_2108);
	}
	if (ceil(*(uParam0.f_358[0 /*189*/]).f_15 * 1000f) != iLocal_2107)
	{
		iLocal_2106 = ceil(*(uParam0.f_358[0 /*189*/]).f_15 * 1000f) - iLocal_2107;
		iLocal_2107 = ceil(*(uParam0.f_358[0 /*189*/]).f_15 * 1000f);
		func_11(&iLocal_2108);
	}
	iVar0 = floor(func_5(uParam0.f_3) * 100f) * 10 - ceil(*(uParam0.f_358[0 /*189*/]).f_15 * 1000f);
	iVar1 = 0;
	if (func_5(&iLocal_2108) <= 2f)
	{
		if (*(uParam0.f_358[0 /*189*/]).f_11 > 0)
		{
			iVar1 = -iLocal_2106;
		}
		else
		{
			iVar1 = 0;
		}
	}
	iVar2 = floor(Global_101154.f_17733.f_6[Local_51.f_10] * 100f) * 10;
	if (iVar2 <= 0)
	{
		iVar2 = -1;
	}
	if (IntToFloat(iVar0) <= Local_51.f_106[Local_51.f_10] * 1000f)
	{
		iVar3 = floor(Local_51.f_106[Local_51.f_10] * 1000f);
		iVar6 = 3;
		sVar4 = "SPR_GBEST";
		iVar5 = 109;
	}
	else if (IntToFloat(iVar0) <= Local_51.f_112[Local_51.f_10] - Local_51.f_106[Local_51.f_10] / 2f + Local_51.f_106[Local_51.f_10] * 1000f)
	{
		iVar6 = 2;
		iVar3 = floor(Local_51.f_112[Local_51.f_10] - Local_51.f_106[Local_51.f_10] / 2f + Local_51.f_106[Local_51.f_10] * 1000f);
		sVar4 = "SPR_SBEST";
		iVar5 = 108;
	}
	else if (IntToFloat(iVar0) <= Local_51.f_112[Local_51.f_10] * 1000f)
	{
		iVar6 = 1;
		iVar3 = floor(Local_51.f_112[Local_51.f_10] * 1000f);
		sVar4 = "SPR_BBEST";
		iVar5 = 107;
	}
	else
	{
		iVar3 = -1;
	}
	func_55();
	func_43(iVar0, "", -1, -1, "", -1, -1, "", iVar1, 1, -1, -1, "SPR_GATES", 12, -1, -1, "", 12, iVar3, sVar4, iVar6, iVar5, iVar2, "SPRBEST", 0, 1, 1, -1, "", -1f, func_54());
}

void func_43(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, char* sParam12, int iParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, char* sParam19, int iParam20, int iParam21, int iParam22, char* sParam23, int iParam24, int iParam25, int iParam26, int iParam27, char* sParam28, float fParam29, auto uParam30)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	char* sVar5;
	struct<16> Var6;
	int iVar22;
	
	if (fParam29 > -1f)
	{
		func_51(0, "", iParam27, uParam30, 9, 0, sParam28, 1, fParam29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	if (iParam14 > -1)
	{
		sVar0 = sParam16;
		if (func_50(sVar0))
		{
			sVar0 = "TIM_DAMAGE";
		}
		func_49(iParam14, iParam15, sVar0, iParam17, iParam27, 8, -1f, -1f, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1);
	}
	if (iParam10 > -1)
	{
		sVar1 = sParam12;
		if (func_50(sVar1))
		{
			sVar1 = "TIM_CHECKPOIN";
		}
		func_48(iParam11 - iParam10, sVar1, iParam27, iParam13, 7, 0, 0, 1, 0, 0, 0, 0);
	}
	if (iParam5 > -1)
	{
		sVar2 = sParam7;
		if (func_50(sVar2))
		{
			sVar2 = "TIM_POSIT";
		}
		func_47(iParam5, iParam6, sVar2, iParam9, iParam27, 6, 0, 0, 0, 1, 0);
	}
	if (iParam2 > -1)
	{
		sVar3 = sParam4;
		if (func_50(sVar3))
		{
			sVar3 = "TIM_LAP";
		}
		iParam2 = iParam2;
		iParam3 = iParam3;
	}
	if (iParam18 > -1)
	{
		sVar4 = sParam19;
		if (func_50(sVar4))
		{
			sVar4 = "TIMER_BESTIME";
		}
		func_44(iParam18, sVar4, 0, 1, iParam27, iParam20, 4, 0, iParam21, 0, 0, 0, 0, 0, 0, 0);
	}
	if (iParam22 > -1)
	{
		sVar5 = sParam23;
		if (func_50(sVar5))
		{
			sVar5 = "TIMER_BESTIME";
		}
		func_44(iParam22, sVar5, 0, 1, iParam27, iParam24, 5, 0, iParam25, 0, 0, 0, 0, 0, 0, 0);
	}
	StringCopy(&Var6, sParam1, 64);
	if (iParam8 < 0)
	{
		StringCopy(&Var6, "TIMER_REWARD", 64);
	}
	else if (iParam8 > 0)
	{
		StringCopy(&Var6, "TIMER_PENAL", 64);
	}
	else if (func_50(&Var6))
	{
		StringCopy(&Var6, "TIM_TIMER", 64);
	}
	iParam26 = iParam26;
	iVar22 = 4;
	func_44(iParam0, &Var6, iParam8, iVar22, iParam27, 0, 3, 0, 1, 0, 0, 0, 0, 0, 0, 0);
}

void func_44(int iParam0, char* sParam1, int iParam2, int iParam3, auto uParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = false;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_46(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1339940.f_1 = 1;
		func_45(7, iVar0);
		Global_1339940.f_4109[iVar0] = iParam0;
		StringCopy(&(Global_1339940.f_4109.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1339940.f_4109.f_172[iVar0] = iParam2;
		Global_1339940.f_4109.f_216[iVar0] = iParam3;
		Global_1339940.f_4109.f_183[iVar0] = uParam4;
		Global_1339940.f_4109.f_194[iVar0] = iParam5;
		Global_1339940.f_4109.f_249[iVar0] = iParam6;
		Global_1339940.f_4109.f_260[iVar0] = iParam7;
		Global_1339940.f_4109.f_205[iVar0] = iParam8;
		Global_1339940.f_4109.f_314[iVar0] = iParam9;
		Global_1339940.f_4109.f_325[iVar0] = iParam10;
		Global_1339940.f_4109.f_357[iVar0] = iParam11;
		Global_1339940.f_4109.f_238[iVar0] = iParam12;
		Global_1339940.f_4109.f_271[iVar0] = iParam13;
		Global_1339940.f_4109.f_368[iVar0] = iParam14;
		Global_1339940.f_4109.f_379[iVar0] = iParam15;
	}
}

void func_45(int iParam0, int iParam1)
{
	GAMEPLAY::SET_BIT(&(Global_1339940.f_4726[iParam0]), iParam1);
}

int func_46(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_1339940.f_4726[iParam0], iParam1);
}

void func_47(int iParam0, auto uParam1, char* sParam2, auto uParam3, auto uParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = false;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_46(5, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1339940.f_1 = 1;
		func_45(5, iVar0);
		Global_1339940.f_3243[iVar0] = iParam0;
		Global_1339940.f_3243.f_172[iVar0] = uParam1;
		StringCopy(&(Global_1339940.f_3243.f_11[iVar0 /*16*/]), sParam2, 64);
		Global_1339940.f_3243.f_194[iVar0] = uParam3;
		Global_1339940.f_3243.f_183[iVar0] = uParam4;
		Global_1339940.f_3243.f_216[iVar0] = iParam5;
		Global_1339940.f_3243.f_227[iVar0] = iParam6;
		Global_1339940.f_3243.f_270[iVar0] = iParam7;
		Global_1339940.f_3243.f_281[iVar0] = iParam8;
		Global_1339940.f_3243.f_292[iVar0] = iParam9;
		Global_1339940.f_3243.f_303[iVar0] = iParam10;
	}
}

void func_48(int iParam0, char* sParam1, auto uParam2, auto uParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	int iVar0;
	int iVar1;
	
	if (func_50(sParam6))
	{
		sParam6 = "NUMBER";
	}
	iVar0 = -1;
	iVar1 = false;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_46(3, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1339940.f_1 = 1;
		func_45(3, iVar0);
		Global_1339940.f_2432[iVar0] = iParam0;
		StringCopy(&(Global_1339940.f_2432.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1339940.f_2432.f_183[iVar0] = uParam3;
		Global_1339940.f_2432.f_172[iVar0] = uParam2;
		Global_1339940.f_2432.f_205[iVar0] = iParam4;
		Global_1339940.f_2432.f_216[iVar0] = iParam5;
		StringCopy(&(Global_1339940.f_2432.f_259[iVar0 /*16*/]), sParam6, 64);
		Global_1339940.f_2432.f_420[iVar0] = iParam7;
		Global_1339940.f_2432.f_453[iVar0] = iParam8;
		Global_1339940.f_2432.f_431[iVar0] = iParam9;
		Global_1339940.f_2432.f_442[iVar0] = iParam10;
		Global_1339940.f_2432.f_464[iVar0] = iParam11;
	}
}

void func_49(int iParam0, auto uParam1, char* sParam2, auto uParam3, auto uParam4, int iParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = false;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_46(0, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1339940.f_1 = 1;
		func_45(0, iVar0);
		Global_1339940.f_946[iVar0] = iParam0;
		Global_1339940.f_946.f_11[iVar0] = uParam1;
		StringCopy(&(Global_1339940.f_946.f_22[iVar0 /*16*/]), sParam2, 64);
		Global_1339940.f_946.f_194[iVar0] = uParam3;
		Global_1339940.f_946.f_183[iVar0] = uParam4;
		Global_1339940.f_946.f_216[iVar0] = iParam5;
		Global_1339940.f_946.f_227[iVar0 /*3*/] = fParam6;
		Global_1339940.f_946.f_227[iVar0 /*3*/].f_1 = fParam7;
		Global_1339940.f_946.f_258[iVar0] = iParam8;
		Global_1339940.f_946.f_269[iVar0] = iParam9;
		Global_1339940.f_946.f_312[iVar0] = iParam10;
		Global_1339940.f_946.f_323[iVar0] = iParam11;
		Global_1339940.f_946.f_334[iVar0] = iParam12;
		Global_1339940.f_946.f_345[iVar0] = iParam13;
		Global_1339940.f_941 = 1;
		Global_1339940.f_946.f_356[iVar0] = iParam14;
		Global_1339940.f_946.f_367[iVar0] = iParam15;
		Global_1339940.f_946.f_378[iVar0] = iParam16;
		Global_1339940.f_946.f_389[iVar0] = iParam17;
		Global_1339940.f_946.f_400[iVar0] = iParam18;
		Global_1339940.f_946.f_411[iVar0] = iParam19;
	}
}

bool func_50(char* sParam0)
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

void func_51(int iParam0, char* sParam1, auto uParam2, auto uParam3, int iParam4, int iParam5, char* sParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18)
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
			if (func_46(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1339940.f_1 = 1;
		func_45(6, iVar0);
		Global_1339940.f_3557[iVar0] = iParam0;
		StringCopy(&(Global_1339940.f_3557.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1339940.f_3557.f_183[iVar0] = uParam3;
		Global_1339940.f_3557.f_172[iVar0] = uParam2;
		Global_1339940.f_3557.f_260[iVar0] = iParam4;
		Global_1339940.f_3557.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1339940.f_3557.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1339940.f_3557.f_443[iVar0] = iParam7;
		Global_1339940.f_3557.f_454[iVar0] = fParam8;
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
		if (iParam15 == 4 && func_53())
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
			if (func_52())
			{
				Global_1339940.f_945 = 1;
			}
		}
	}
}

bool func_52()
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

bool func_53()
{
	if ((_get_ui_language_id() == 8 || _get_ui_language_id() == 9) || _get_ui_language_id() == 10)
	{
		return true;
	}
	return false;
}

int func_54()
{
	return iLocal_2105;
}

void func_55()
{
	Global_1339940.f_941 = 1;
}

void func_56(auto uParam0)
{
	if (*uParam0.f_13 == -1)
	{
	}
}

void func_57()
{
	if (Local_51 == 0)
	{
		set_minimap_component(0, 0, -1);
		set_minimap_component(1, 0, -1);
		set_minimap_component(2, 0, -1);
		set_minimap_component(3, 0, -1);
	}
}

void func_58(auto uParam0)
{
	if (func_5(uParam0.f_3) > 15f)
	{
		if (get_entity_speed(*(uParam0.f_358[0 /*189*/]).f_9) < 5f)
		{
			if (!func_3(&iLocal_2311))
			{
				func_10(&iLocal_2311);
			}
			else if (func_5(&iLocal_2311) > 60f)
			{
				func_59("SPR_MOVE_FAIL", 5000, 0, &iLocal_2319, 8192);
				if (*(uParam0.f_358[0 /*189*/]).f_11 <= *uParam0.f_12 - 1)
				{
					if (does_blip_exist(*(uParam0.f_27[*(uParam0.f_358[0 /*189*/]).f_11 /*10*/]).f_5))
					{
						set_blip_display(*(uParam0.f_27[*(uParam0.f_358[0 /*189*/]).f_11 /*10*/]).f_5, 0);
					}
				}
				if (*(uParam0.f_358[0 /*189*/]).f_11 + 1 <= *uParam0.f_12 - 2)
				{
					if (does_blip_exist(*(uParam0.f_27[*(uParam0.f_358[0 /*189*/]).f_11 + 1 /*10*/]).f_5))
					{
						set_blip_display(*(uParam0.f_27[*(uParam0.f_358[0 /*189*/]).f_11 + 1 /*10*/]).f_5, 0);
					}
				}
				func_11(&iLocal_2311);
				func_11(&iLocal_2308);
				*uParam0.f_1 = 0;
				clear_prints();
				sLocal_2306 = "SPR_RETR_IDLE";
				*(uParam0.f_358[0 /*189*/]).f_23 = 0;
			}
			else if (func_5(&iLocal_2311) > 30f)
			{
				if (!func_341(iLocal_2318, 32))
				{
					func_103("SPR_IDLE_WARN", &iLocal_2318, 32, 0);
				}
			}
		}
		else if (func_3(&iLocal_2311))
		{
			func_339(&iLocal_2318, 32);
			func_11(&iLocal_2311);
		}
	}
	else if (func_3(&iLocal_2311))
	{
		func_339(&iLocal_2318, 32);
		func_11(&iLocal_2311);
	}
}

void func_59(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_62(*iParam3, iParam4))
	{
		return;
	}
	func_61(sParam0, iParam1, iParam2);
	func_60(iParam3, iParam4);
}

void func_60(auto uParam0, auto uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_61(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	_set_text_entry_2(sParam0);
	_draw_subtitle_timed(iParam1, 1);
}

int func_62(auto uParam0, auto uParam1)
{
	return (uParam0 && uParam1) != 0;
}

void func_63()
{
	if (get_player_wanted_level(player_id()) > 0)
	{
		clear_player_wanted_level(player_id());
	}
}

void func_64(auto uParam0, int iParam1)
{
	if (*uParam0.f_1)
	{
		if ((!is_vehicle_driveable(*(uParam0.f_358[0 /*189*/]).f_9, 0) || get_entity_health(*(uParam0.f_358[0 /*189*/]).f_9) < 5) || PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			func_11(&iLocal_2308);
			if (does_blip_exist(*iParam1))
			{
				remove_blip(iParam1);
			}
			if (*(uParam0.f_358[0 /*189*/]).f_11 <= *uParam0.f_12 - 1)
			{
				if (does_blip_exist(*(uParam0.f_27[*(uParam0.f_358[0 /*189*/]).f_11 /*10*/]).f_5))
				{
					set_blip_display(*(uParam0.f_27[*(uParam0.f_358[0 /*189*/]).f_11 /*10*/]).f_5, 0);
				}
			}
			if (*(uParam0.f_358[0 /*189*/]).f_11 + 1 <= *uParam0.f_12 - 2)
			{
				if (does_blip_exist(*(uParam0.f_27[*(uParam0.f_358[0 /*189*/]).f_11 + 1 /*10*/]).f_5))
				{
					set_blip_display(*(uParam0.f_27[*(uParam0.f_358[0 /*189*/]).f_11 + 1 /*10*/]).f_5, 0);
				}
			}
			*uParam0.f_1 = 0;
			clear_prints();
			sLocal_2306 = "SPR_RETR_DES";
			*(uParam0.f_358[0 /*189*/]).f_23 = 0;
		}
		return;
	}
}

void func_65(auto uParam0, int iParam1)
{
	if (Local_51 == 0)
	{
		if (!is_entity_dead(*(uParam0.f_358[0 /*189*/]).f_9, 0))
		{
			if (!is_ped_sitting_in_any_vehicle(PLAYER::PLAYER_PED_ID()))
			{
				clear_prints();
				stop_scripted_conversation(false);
				set_player_control(player_id(), false, 0);
				if (does_blip_exist(*iParam1))
				{
					remove_blip(iParam1);
					if (*(uParam0.f_358[0 /*189*/]).f_11 <= *uParam0.f_12 - 1)
					{
						if (does_blip_exist(*(uParam0.f_27[*(uParam0.f_358[0 /*189*/]).f_11 /*10*/]).f_5))
						{
							set_blip_display(*(uParam0.f_27[*(uParam0.f_358[0 /*189*/]).f_11 /*10*/]).f_5, 0);
						}
					}
					if (*(uParam0.f_358[0 /*189*/]).f_11 + 1 <= *uParam0.f_12 - 2)
					{
						if (does_blip_exist(*(uParam0.f_27[*(uParam0.f_358[0 /*189*/]).f_11 + 1 /*10*/]).f_5))
						{
							set_blip_display(*(uParam0.f_27[*(uParam0.f_358[0 /*189*/]).f_11 + 1 /*10*/]).f_5, 0);
						}
					}
				}
				*uParam0.f_1 = 0;
				clear_prints();
				sLocal_2306 = "SPR_RETR_DES";
				func_66(&(Local_51.f_321), 1);
				*(uParam0.f_358[0 /*189*/]).f_23 = 7;
			}
		}
	}
}

void func_66(auto uParam0, int iParam1)
{
	*uParam0 = 0;
	*uParam0.f_4 = 0;
	*uParam0.f_5 = iParam1;
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("OFFMISSION_WASTED", false);
}

void func_67(auto uParam0)
{
	if (*uParam0.f_1)
	{
		func_72(uParam0);
		func_68(uParam0);
	}
}

void func_68(auto uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = get_entity_health(*(uParam0.f_358[0 /*189*/]).f_9);
	if (!is_entity_dead(*(uParam0.f_358[0 /*189*/]).f_9, 0))
	{
		iVar1 = round(get_vehicle_engine_health(*(uParam0.f_358[0 /*189*/]).f_9));
	}
	if (IntToFloat(iVar0) < 500f)
	{
		if (Local_51 == 2)
		{
			if (!is_entity_dead(*(uParam0.f_358[0 /*189*/]).f_9, 0) && !is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), *(uParam0.f_358[0 /*189*/]).f_9, 0))
				{
					iLocal_2317 = true;
				}
			}
			if (iLocal_2317)
			{
				if (*(uParam0.f_27[*(uParam0.f_358[0 /*189*/]).f_11 /*10*/]).f_7 == 6 || *(uParam0.f_27[*(uParam0.f_358[0 /*189*/]).f_11 /*10*/]).f_7 == 10)
				{
					if (!is_message_being_displayed())
					{
						func_59("SPR_HELP_DAMG", 5000, 0, &iLocal_2319, 2);
					}
				}
			}
		}
		else
		{
			if (is_message_being_displayed())
			{
				clear_prints();
			}
			func_59("SPR_HELP_DAMG", 5000, 0, &iLocal_2319, 2);
		}
	}
	if (Local_51 == 1)
	{
		if (IntToFloat(iVar1) < 200f)
		{
			if (is_message_being_displayed())
			{
				clear_prints();
			}
			if (func_71())
			{
				func_69();
			}
			func_59("SPR_HELP_DAMG", 5000, 0, &iLocal_2319, 2);
		}
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

bool func_71()
{
	if (Global_15712 != 0 || is_scripted_conversation_ongoing())
	{
		return true;
	}
	return false;
}

void func_72(auto uParam0)
{
	Vector3 vVar0;
	Vector3 vVar3;
	Vector3 fVar6;
	Vector3 fVar7;
	Vector3 vVar8;
	Vector3 vVar11;
	Vector3 fVar14;
	int iVar15;
	int iVar16;
	
	vVar0 = {*(uParam0.f_27[*(uParam0.f_358[0 /*189*/]).f_11 /*10*/])};
	if (*(uParam0.f_358[0 /*189*/]).f_11 > 0)
	{
		vVar3 = {*(uParam0.f_27[*(uParam0.f_358[0 /*189*/]).f_11 - 1 /*10*/])};
	}
	else
	{
		vVar3 = {0f, 0f, 0f};
	}
	fVar6 = get_distance_between_coords(vVar0, vVar3, 1);
	fVar7 = fVar6;
	if (*(uParam0.f_358[0 /*189*/]).f_11 == 0)
	{
		fVar6 += 200f;
		fVar7 += 750f;
	}
	else
	{
		fVar6 += 200f;
		fVar7 += 750f;
	}
	vVar8 = {get_entity_coords(*(uParam0.f_358[0 /*189*/]).f_8, 1)};
	if (func_73(vVar3, 0f, 0f, 0f, 1056964608, 0))
	{
		vVar11 = {vVar0};
	}
	else
	{
		vVar11 = {_0x21C235BC64831E5A(vVar8, vVar3, vVar0, 1)};
	}
	fVar14 = get_distance_between_coords(vVar11, vVar8, 1);
	iVar15 = fVar14 >= fVar6;
	iVar16 = fVar14 >= fVar7;
	if (Local_51 == 1)
	{
		if (absf(vVar11.z - vVar8.z) > 15f)
		{
			iVar15 = true;
		}
	}
	if (iVar16)
	{
		func_11(&iLocal_2308);
		*uParam0.f_1 = 0;
		clear_prints();
		func_236(1);
		*(uParam0.f_358[0 /*189*/]).f_23 = 0;
		func_243(&(Local_51.f_119), 0, 0, 1, 1);
		func_242(&(Local_51.f_119), "IB_RETRY", 2, 201, 1, 1, 0);
		func_242(&(Local_51.f_119), "FE_HLP16", 2, 202, 1, 1, 0);
		trigger_music_event("MGSP_FAIL");
		sLocal_2306 = "SPR_HELP_FAIL";
	}
	else if (iVar15)
	{
		if (fVar14 <= fVar7 - 15f)
		{
			func_283("SPR_HELP_RESET", -1);
		}
		if (fVar14 <= fVar7 - 15f)
		{
			func_59("SPR_HELP_WARN", 5000, 0, &iLocal_2319, 4);
		}
	}
	else
	{
		clear_this_print("SPR_HELP_WARN");
		if (func_341(iLocal_2319, 4))
		{
			func_339(&iLocal_2319, 4);
		}
	}
}

bool func_73(Vector3 vParam0, Vector3 vParam1, float fParam2, int iParam3)
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

void func_74()
{
	if (iLocal_2022 == 1)
	{
		if (func_3(&iLocal_2052))
		{
			if (func_5(&iLocal_2052) <= 2.5f)
			{
				iLocal_2103 = "GATEMISS";
				fLocal_2104 = 5f;
				iLocal_2105 = 1;
			}
			else
			{
				iLocal_2103 = 0;
				fLocal_2104 = -1f;
				iLocal_2105 = 1;
				iLocal_2022 = 0;
			}
		}
	}
	if (iLocal_2023 == 1)
	{
		if (func_3(&iLocal_2058))
		{
			if (func_5(&iLocal_2058) <= 2.5f)
			{
				iLocal_2103 = "GATEINNER";
				fLocal_2104 = 1f;
				iLocal_2105 = 1;
			}
			else
			{
				iLocal_2103 = 0;
				fLocal_2104 = -1f;
				iLocal_2105 = 1;
				iLocal_2023 = 0;
			}
		}
	}
	if (iLocal_2024 == 1)
	{
		if (func_3(&iLocal_2055))
		{
			if (func_5(&iLocal_2055) <= 2.5f)
			{
				iLocal_2103 = "GATEOUTTER";
				fLocal_2104 = 0f;
				iLocal_2105 = 1;
			}
			else
			{
				iLocal_2103 = 0;
				fLocal_2104 = -1f;
				iLocal_2105 = 1;
				iLocal_2024 = 0;
			}
		}
	}
	if (iLocal_2025 == 1)
	{
		if (func_3(&iLocal_2067))
		{
			if (func_5(&iLocal_2067) <= 2.5f)
			{
				iLocal_2103 = "GATEKNIFEINNER";
				fLocal_2104 = 2.5f;
				iLocal_2105 = 1;
			}
			else
			{
				iLocal_2103 = 0;
				fLocal_2104 = -1f;
				iLocal_2105 = 1;
				iLocal_2025 = 0;
			}
		}
	}
	if (iLocal_2026 == 1)
	{
		if (func_3(&iLocal_2070))
		{
			if (func_5(&iLocal_2070) <= 2.5f)
			{
				iLocal_2103 = "GATEINVERTEDIN";
				fLocal_2104 = 3f;
				iLocal_2105 = 1;
			}
			else
			{
				iLocal_2103 = 0;
				fLocal_2104 = -1f;
				iLocal_2105 = 1;
				iLocal_2026 = 0;
			}
		}
	}
	if (iLocal_2027 == 1)
	{
		if (func_3(&iLocal_2061))
		{
			if (func_5(&iLocal_2061) <= 2.5f)
			{
				iLocal_2103 = "GATEKNIFEOUTTER";
				fLocal_2104 = 1.5f;
				iLocal_2105 = 1;
			}
			else
			{
				iLocal_2103 = 0;
				fLocal_2104 = -1f;
				iLocal_2105 = 1;
				iLocal_2027 = 0;
			}
		}
	}
	if (iLocal_2028 == 1)
	{
		if (func_3(&iLocal_2064))
		{
			if (func_5(&iLocal_2064) <= 2.5f)
			{
				iLocal_2103 = "GATEINVERTEDOUT";
				fLocal_2104 = 2f;
				iLocal_2105 = 1;
			}
			else
			{
				iLocal_2103 = 0;
				fLocal_2104 = -1f;
				iLocal_2105 = 1;
				iLocal_2028 = 0;
			}
		}
	}
	if (iLocal_2029 == 1)
	{
		if (func_3(&iLocal_2040))
		{
			if (func_5(&iLocal_2040) <= 2.5f)
			{
				iLocal_2103 = "STUNTKNIFELEFT";
				fLocal_2104 = 4f;
				iLocal_2105 = 1;
			}
			else
			{
				iLocal_2103 = 0;
				fLocal_2104 = -1f;
				iLocal_2105 = 1;
				iLocal_2029 = 0;
			}
		}
	}
	if (iLocal_2030 == 1)
	{
		if (func_3(&iLocal_2040))
		{
			if (func_5(&iLocal_2040) <= 2.5f)
			{
				iLocal_2103 = "STUNTKNIFELEFTHIT";
				fLocal_2104 = 1.5f;
				iLocal_2105 = 1;
			}
			else
			{
				iLocal_2103 = 0;
				fLocal_2104 = -1f;
				iLocal_2105 = 1;
				iLocal_2030 = 0;
			}
		}
	}
	if (iLocal_2031 == 1)
	{
		if (func_3(&iLocal_2040))
		{
			if (func_5(&iLocal_2040) <= 2.5f)
			{
				iLocal_2103 = "STUNTKNIFELEFTMISS";
				fLocal_2104 = 5f;
				iLocal_2105 = 1;
			}
			else
			{
				iLocal_2103 = 0;
				fLocal_2104 = -1f;
				iLocal_2105 = 1;
				iLocal_2031 = 0;
			}
		}
	}
	if (iLocal_2032 == 1)
	{
		if (func_3(&iLocal_2040))
		{
			if (func_5(&iLocal_2040) <= 2.5f)
			{
				iLocal_2103 = "STUNTKNIFERIGHT";
				fLocal_2104 = 4f;
				iLocal_2105 = 1;
			}
			else
			{
				iLocal_2103 = 0;
				fLocal_2104 = -1f;
				iLocal_2105 = 1;
				iLocal_2032 = 0;
			}
		}
	}
	if (iLocal_2033 == 1)
	{
		if (func_3(&iLocal_2040))
		{
			if (func_5(&iLocal_2040) <= 2.5f)
			{
				iLocal_2103 = "STUNTKNIFERIGHTHIT";
				fLocal_2104 = 1.5f;
				iLocal_2105 = 1;
			}
			else
			{
				iLocal_2103 = 0;
				fLocal_2104 = -1f;
				iLocal_2105 = 1;
				iLocal_2033 = 0;
			}
		}
	}
	if (iLocal_2034 == 1)
	{
		if (func_3(&iLocal_2040))
		{
			if (func_5(&iLocal_2040) <= 2.5f)
			{
				iLocal_2103 = "STUNTKNIFERIGHTMISS";
				fLocal_2104 = 5f;
				iLocal_2105 = 1;
			}
			else
			{
				iLocal_2103 = 0;
				fLocal_2104 = -1f;
				iLocal_2105 = 1;
				iLocal_2034 = 0;
			}
		}
	}
	if (iLocal_2035 == 1)
	{
		if (func_3(&iLocal_2043))
		{
			if (func_5(&iLocal_2043) <= 2.5f)
			{
				iLocal_2103 = "STUNTINVERTED";
				fLocal_2104 = 4f;
				iLocal_2105 = 1;
			}
			else
			{
				iLocal_2103 = 0;
				fLocal_2104 = -1f;
				iLocal_2105 = 1;
				iLocal_2035 = 0;
			}
		}
	}
	if (iLocal_2036 == 1)
	{
		if (func_3(&iLocal_2043))
		{
			if (func_5(&iLocal_2043) <= 2.5f)
			{
				iLocal_2103 = "STUNTINVERTEDHIT";
				fLocal_2104 = 1.5f;
				iLocal_2105 = 1;
			}
			else
			{
				iLocal_2103 = 0;
				fLocal_2104 = -1f;
				iLocal_2105 = 1;
				iLocal_2036 = 0;
			}
		}
	}
	if (iLocal_2037 == 1)
	{
		if (func_3(&iLocal_2043))
		{
			if (func_5(&iLocal_2043) <= 2.5f)
			{
				iLocal_2103 = "STUNTINVERTEDMISS";
				fLocal_2104 = 5f;
				iLocal_2105 = 1;
			}
			else
			{
				iLocal_2103 = 0;
				fLocal_2104 = -1f;
				iLocal_2105 = 1;
				iLocal_2037 = 0;
			}
		}
	}
}

void func_75(auto uParam0, int iParam1)
{
	Vector3 fVar0;
	
	if (iParam1 < 0 || iParam1 > *uParam0.f_358)
	{
		return;
	}
	if (!is_entity_dead(*(uParam0.f_358[iParam1 /*189*/]).f_8, 0))
	{
		if (!is_entity_dead(*(uParam0.f_358[iParam1 /*189*/]).f_9, 0))
		{
			if (is_ped_in_vehicle(*(uParam0.f_358[iParam1 /*189*/]).f_8, *(uParam0.f_358[iParam1 /*189*/]).f_9, 0))
			{
				fVar0 = _0x53AF99BAA671CA47(*(uParam0.f_358[iParam1 /*189*/]).f_9);
				if (*(uParam0.f_358[0 /*189*/]).f_11 == *(uParam0.f_358[iParam1 /*189*/]).f_11)
				{
				}
				else if (*(uParam0.f_358[iParam1 /*189*/]).f_11 > *(uParam0.f_358[0 /*189*/]).f_11)
				{
					fVar0 *= 0.69f;
				}
				else
				{
					fVar0 *= 1f;
				}
				if (is_ped_sitting_in_vehicle(*(uParam0.f_358[iParam1 /*189*/]).f_8, *(uParam0.f_358[iParam1 /*189*/]).f_9))
				{
					if (is_vehicle_seat_free(*(uParam0.f_358[iParam1 /*189*/]).f_9, -1))
					{
						set_ped_into_vehicle(*(uParam0.f_358[iParam1 /*189*/]).f_8, *(uParam0.f_358[iParam1 /*189*/]).f_9, -1);
						set_drive_task_cruise_speed(*(uParam0.f_358[iParam1 /*189*/]).f_8, fVar0);
					}
				}
			}
		}
	}
}

void func_76(auto uParam0, int iParam1, int iParam2, Vector3 vParam3, auto uParam4, int iParam5)
{
	if (!is_entity_dead(iParam1, 0))
	{
		if (Local_51 == 1)
		{
			if (!is_entity_dead(iParam2, 0))
			{
				task_vehicle_drive_to_coord(iParam1, iParam2, vParam3, _0x53AF99BAA671CA47(iParam2), 1, false, 786469, 5f, -1f);
			}
		}
		else if (Local_51 == 2)
		{
			uParam6 = uParam6;
			func_77(uParam0, vParam3, iParam7);
		}
	}
}

void func_77(auto uParam0, Vector3 vParam1, auto uParam2)
{
	*uParam0.f_12 = *uParam0.f_12;
	vParam1 = {vParam1};
	uParam4 = uParam4;
}

void func_78(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return;
	}
	func_82(uParam0.f_27[iParam1 /*10*/]);
	func_81(uParam0.f_27[iParam1 /*10*/].f_6, uParam0.f_2861, uParam0.f_2862, *(uParam0.f_27[iParam1 /*10*/]).f_7 == 4);
	if (iParam1 + 1 < *uParam0.f_12)
	{
		func_82(uParam0.f_27[iParam1 + 1 /*10*/]);
		func_79(uParam0.f_27[iParam1 + 1 /*10*/]);
	}
}

void func_79(auto uParam0)
{
	func_80(uParam0.f_6);
}

void func_80(auto uParam0)
{
	if (*uParam0 != 0)
	{
		delete_checkpoint(*uParam0);
		*uParam0 = 0;
	}
}

void func_81(auto uParam0, auto uParam1, auto uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	func_80(uParam1);
	if (*uParam0 != 0)
	{
		*uParam1 = *uParam0;
		*uParam0 = 0;
		*uParam2 = 255;
		if (iParam3)
		{
			*uParam2 = 0;
		}
		if (iLocal_2307)
		{
			iVar3 = 6;
		}
		else
		{
			iVar3 = 1;
		}
		func_556(func_557(iVar3), &iVar0, &iVar1, &iVar2, uParam2);
		set_checkpoint_rgba(*uParam1, iVar0, iVar1, iVar2, *uParam2);
		_set_checkpoint_icon_rgba(*uParam1, iVar0, iVar1, iVar2, *uParam2);
	}
}

void func_82(auto uParam0)
{
	func_83(uParam0.f_5);
}

void func_83(int iParam0)
{
	if (does_blip_exist(*iParam0))
	{
		remove_blip(iParam0);
	}
}

bool func_84(int iParam0)
{
	if ((((((iParam0 == 9 || iParam0 == 12) || iParam0 == 15) || iParam0 == 10) || iParam0 == 13) || iParam0 == 16) || iParam0 == 7)
	{
		return true;
	}
	return false;
}

void func_85(auto uParam0, int iParam1, int iParam2)
{
	if (iParam1)
	{
		if (Local_51 == 0)
		{
			if (func_3(&iLocal_2052))
			{
				func_89(&iLocal_2052, 3f);
			}
			if (func_3(&iLocal_2046))
			{
				func_89(&iLocal_2046, 3f);
			}
			if (func_3(&iLocal_2040))
			{
				func_89(&iLocal_2040, 3f);
			}
			if (func_3(&iLocal_2049))
			{
				func_89(&iLocal_2049, 3f);
			}
			if (func_3(&iLocal_2043))
			{
				func_89(&iLocal_2043, 3f);
			}
			if (func_3(&iLocal_2055))
			{
				func_89(&iLocal_2055, 3f);
			}
			if (func_3(&iLocal_2058))
			{
				func_89(&iLocal_2058, 3f);
			}
			if (func_3(&iLocal_2061))
			{
				func_89(&iLocal_2061, 3f);
			}
			if (func_3(&iLocal_2064))
			{
				func_89(&iLocal_2064, 3f);
			}
			if (func_3(&iLocal_2067))
			{
				func_89(&iLocal_2067, 3f);
			}
			if (func_3(&iLocal_2070))
			{
				func_89(&iLocal_2070, 3f);
			}
			func_86(uParam0, iParam2);
			switch (iParam2)
			{
				case 7:
					iLocal_2022 = 1;
					func_11(&iLocal_2052);
					break;
				
				case 1:
					iLocal_2023 = 1;
					func_11(&iLocal_2058);
					break;
				
				case 2:
					iLocal_2024 = 1;
					func_11(&iLocal_2055);
					break;
				
				case 3:
					iLocal_2025 = 1;
					func_11(&iLocal_2067);
					break;
				
				case 4:
					iLocal_2026 = 1;
					func_11(&iLocal_2070);
					break;
				
				case 5:
					iLocal_2027 = 1;
					func_11(&iLocal_2061);
					break;
				
				case 6:
					iLocal_2028 = 1;
					func_11(&iLocal_2064);
					break;
				
				case 8:
					iLocal_2029 = 1;
					func_11(&iLocal_2040);
					break;
				
				case 9:
					iLocal_2030 = 1;
					func_11(&iLocal_2049);
					break;
				
				case 10:
					iLocal_2031 = 1;
					func_11(&iLocal_2052);
					break;
				
				case 11:
					iLocal_2032 = 1;
					func_11(&iLocal_2040);
					break;
				
				case 12:
					iLocal_2033 = 1;
					func_11(&iLocal_2049);
					break;
				
				case 13:
					iLocal_2034 = 1;
					func_11(&iLocal_2052);
					break;
				
				case 14:
					iLocal_2035 = 1;
					func_11(&iLocal_2043);
					break;
				
				case 15:
					iLocal_2036 = 1;
					func_11(&iLocal_2049);
					break;
				
				case 16:
					iLocal_2037 = 1;
					func_11(&iLocal_2052);
					break;
				}
			}
	}
}

void func_86(auto uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 7:
			func_88(uParam0, 5f);
			break;
		
		case 0:
			break;
		
		case 1:
			func_87(uParam0, 1f);
			break;
		
		case 2:
			func_87(uParam0, 0f);
			break;
		
		case 5:
			func_87(uParam0, 1.5f);
			break;
		
		case 6:
			func_87(uParam0, 2f);
			break;
		
		case 3:
			func_87(uParam0, 2.5f);
			break;
		
		case 4:
			func_87(uParam0, 3f);
			break;
		
		case 8:
			func_87(uParam0, 4f);
			break;
		
		case 9:
			func_88(uParam0, 1.5f);
			break;
		
		case 10:
			func_88(uParam0, 5f);
			break;
		
		case 11:
			func_87(uParam0, 4f);
			break;
		
		case 12:
			func_88(uParam0, 1.5f);
			break;
		
		case 13:
			func_88(uParam0, 5f);
			break;
		
		case 14:
			func_87(uParam0, 4f);
			break;
		
		case 15:
			func_88(uParam0, 1.5f);
			break;
		
		case 16:
			func_88(uParam0, 5f);
			break;
	}
}

void func_87(auto uParam0, float fParam1)
{
	*uParam0.f_14 = fParam1;
	*uParam0.f_15 += *uParam0.f_14;
}

void func_88(auto uParam0, float fParam1)
{
	*uParam0.f_14 = -fParam1;
	*uParam0.f_15 += *uParam0.f_14;
}

void func_89(int iParam0, float fParam1)
{
	if (func_3(iParam0))
	{
		func_12(iParam0, func_5(iParam0) + fParam1);
	}
}

void func_90(auto uParam0, auto uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	auto uVar3;
	int iVar4;
	int iVar5;
	
	if (*uParam0.f_6 != 0)
	{
		iVar4 = func_92();
		if (*uParam0.f_8 == 2 || *uParam0.f_8 == 3)
		{
			iVar4 = 18;
		}
		else if (*uParam0.f_8 == 1)
		{
			iVar4 = 9;
		}
		func_556(func_557(iVar4), &iVar0, &iVar1, &iVar2, &uVar3);
		set_checkpoint_rgba(*uParam0.f_6, iVar0, iVar1, iVar2, func_91(*uParam0, 25, 200));
	}
	if (*uParam1.f_6 != 0)
	{
		iVar5 = func_92();
		if (*uParam1.f_8 == 2 || *uParam1.f_8 == 3)
		{
			iVar5 = 18;
		}
		else if (*uParam1.f_8 == 1)
		{
			iVar5 = 9;
		}
		func_556(func_557(iVar5), &iVar0, &iVar1, &iVar2, &uVar3);
		set_checkpoint_rgba(*uParam1.f_6, iVar0, iVar1, iVar2, func_91(*uParam1, 25, 200));
	}
}

int func_91(Vector3 vParam0, int iParam1, int iParam2)
{
	float fVar0;
	int iVar1;
	Vector3 fVar2;
	float fVar3;
	
	fVar0 = 100f;
	iVar1 = 50;
	if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
	{
		fVar2 = get_distance_between_coords(vParam0, get_entity_coords(PLAYER::PLAYER_PED_ID(), 1), 1);
		if (fVar2 > fVar0)
		{
			iVar1 = iParam4;
		}
		else
		{
			fVar3 = fVar0 - fVar2 / fVar0;
			iVar1 = iParam4 - ceil(IntToFloat(iParam4 - iParam3) * fVar3);
		}
	}
	if (iVar1 < iParam3)
	{
		iVar1 = iParam3;
	}
	return iVar1;
}

int func_92()
{
	return 12;
}

int func_93(auto uParam0, auto uParam1, auto uParam2, int iParam3)
{
	auto uVar0;
	auto uVar3;
	Vector3 vVar6;
	auto uVar9;
	int iVar12;
	
	if (is_entity_dead(*(uParam0.f_358[0 /*189*/]).f_9, 0))
	{
		return -1;
	}
	iVar12 = func_100(uParam1, iParam3);
	if (Local_51 == 0)
	{
		if (iVar12 != 17)
		{
			if (iVar12 == 1)
			{
				if (func_99(*(uParam0.f_358[0 /*189*/]).f_9))
				{
					if (*uParam1.f_8 != 0)
					{
						if (*uParam1.f_8 == 2)
						{
							iVar12 = 8;
							return iVar12;
						}
						if (*uParam1.f_8 == 3)
						{
							iVar12 = 12;
							return iVar12;
						}
						if (*uParam1.f_8 == 1)
						{
							iVar12 = 15;
							return iVar12;
						}
					}
					else
					{
						iVar12 = 3;
						if (!func_341(iLocal_2350, 262144))
						{
							func_98("Gate_PK", &iLocal_2349);
							iLocal_2350 = 0;
							func_313(&iLocal_2350, 262144);
							return iVar12;
						}
						else if (!func_341(iLocal_2350, 524288))
						{
							func_98("Con_PK", &iLocal_2349);
							func_313(&iLocal_2350, 524288);
							return iVar12;
						}
						else if (!func_341(iLocal_2350, 1048576))
						{
							func_98("Con_PK", &iLocal_2349);
							func_313(&iLocal_2350, 1048576);
							return iVar12;
						}
						else
						{
							func_98("Con_PK", &iLocal_2349);
							return iVar12;
						}
					}
				}
				else if (func_97(*(uParam0.f_358[0 /*189*/]).f_9))
				{
					if (*uParam1.f_8 != 0)
					{
						if (*uParam1.f_8 == 3)
						{
							iVar12 = 11;
							return iVar12;
						}
						if (*uParam1.f_8 == 2)
						{
							iVar12 = 9;
							return iVar12;
						}
						if (*uParam1.f_8 == 1)
						{
							iVar12 = 15;
							return iVar12;
						}
					}
					else
					{
						iVar12 = 3;
						if (!func_341(iLocal_2350, 262144))
						{
							func_98("Gate_PK", &iLocal_2349);
							iLocal_2350 = 0;
							func_313(&iLocal_2350, 262144);
							return iVar12;
						}
						else if (!func_341(iLocal_2350, 524288))
						{
							func_98("Con_PK", &iLocal_2349);
							func_313(&iLocal_2350, 524288);
							return iVar12;
						}
						else if (!func_341(iLocal_2350, 1048576))
						{
							func_98("Con_PK", &iLocal_2349);
							func_313(&iLocal_2350, 1048576);
							return iVar12;
						}
						else
						{
							func_98("Con_PK", &iLocal_2349);
							return iVar12;
						}
					}
				}
				else
				{
					get_entity_matrix(*(uParam0.f_358[0 /*189*/]).f_9, &uVar0, &uVar3, &vVar6, &uVar9);
					if (vVar6.z <= -0.866f)
					{
						if (*uParam1.f_8 != 0)
						{
							if (*uParam1.f_8 == 1)
							{
								iVar12 = 14;
								return iVar12;
							}
							if (*uParam1.f_8 == 2)
							{
								iVar12 = 9;
								return iVar12;
							}
							if (*uParam1.f_8 == 3)
							{
								iVar12 = 12;
								return iVar12;
							}
						}
						else
						{
							iVar12 = 4;
							if (!func_341(iLocal_2350, 32768))
							{
								func_98("Gate_PI", &iLocal_2348);
								iLocal_2350 = 0;
								func_313(&iLocal_2350, 32768);
								return iVar12;
							}
							else if (!func_341(iLocal_2350, 65536))
							{
								func_98("Con_PI", &iLocal_2348);
								func_313(&iLocal_2350, 65536);
								return iVar12;
							}
							else if (!func_341(iLocal_2350, 131072/*func_575*/))
							{
								func_98("Con_PI", &iLocal_2348);
								func_313(&iLocal_2350, 131072/*func_575*/);
								return iVar12;
							}
							else
							{
								func_98("Con_PI", &iLocal_2348);
								return iVar12;
							}
						}
					}
					else if (*uParam1.f_8 != 0)
					{
						if (*uParam1.f_8 == 2)
						{
							iVar12 = 9;
							return iVar12;
						}
						else if (*uParam1.f_8 == 3)
						{
							iVar12 = 12;
							return iVar12;
						}
						else if (*uParam1.f_8 == 1)
						{
							iVar12 = 15;
							return iVar12;
						}
					}
					else
					{
						iVar12 = 1;
						if (!func_341(iLocal_2350, 4096))
						{
							func_98("Get_Perf", &iLocal_2345);
							iLocal_2350 = 0;
							func_313(&iLocal_2350, 4096);
							return iVar12;
						}
						else if (!func_341(iLocal_2350, 8192))
						{
							func_98("Con_Perf", &iLocal_2345);
							func_313(&iLocal_2350, 8192);
							return iVar12;
						}
						else if (!func_341(iLocal_2350, 16384))
						{
							func_98("Con_Perf", &iLocal_2345);
							func_313(&iLocal_2350, 16384);
							return iVar12;
						}
						else
						{
							func_98("Con_Perf", &iLocal_2345);
							return iVar12;
						}
					}
				}
			}
			if (iVar12 == 2)
			{
				if (func_99(*(uParam0.f_358[0 /*189*/]).f_9))
				{
					if (*uParam1.f_8 != 0)
					{
						if (*uParam1.f_8 == 2)
						{
							iVar12 = 8;
							return iVar12;
						}
						if (*uParam1.f_8 == 3)
						{
							iVar12 = 12;
							return iVar12;
						}
						if (*uParam1.f_8 == 1)
						{
							iVar12 = 15;
							return iVar12;
						}
					}
					else
					{
						iVar12 = 5;
						if (!func_341(iLocal_2350, 64))
						{
							func_98("Gate_Kni", &iLocal_2347);
							iLocal_2350 = 0;
							func_313(&iLocal_2350, 64);
							return iVar12;
						}
						else if (!func_341(iLocal_2350, 128))
						{
							func_98("Con_Kni", &iLocal_2347);
							func_313(&iLocal_2350, 128);
							return iVar12;
						}
						else if (!func_341(iLocal_2350, 256))
						{
							func_98("Con_Kni", &iLocal_2347);
							func_313(&iLocal_2350, 256);
							return iVar12;
						}
						else
						{
							func_98("Con_Kni", &iLocal_2347);
							return iVar12;
						}
					}
				}
				else if (func_97(*(uParam0.f_358[0 /*189*/]).f_9))
				{
					if (*uParam1.f_8 != 0)
					{
						if (*uParam1.f_8 == 3)
						{
							iVar12 = 11;
							return iVar12;
						}
						if (*uParam1.f_8 == 2)
						{
							iVar12 = 9;
							return iVar12;
						}
						if (*uParam1.f_8 == 1)
						{
							iVar12 = 15;
							return iVar12;
						}
					}
					else
					{
						iVar12 = 5;
						if (!func_341(iLocal_2350, 64))
						{
							func_98("Gate_Kni", &iLocal_2347);
							iLocal_2350 = 0;
							func_313(&iLocal_2350, 64);
							return iVar12;
						}
						else if (!func_341(iLocal_2350, 128))
						{
							func_98("Con_Kni", &iLocal_2347);
							func_313(&iLocal_2350, 128);
							return iVar12;
						}
						else if (!func_341(iLocal_2350, 256))
						{
							func_98("Con_Kni", &iLocal_2347);
							func_313(&iLocal_2350, 256);
							return iVar12;
						}
						else
						{
							func_98("Con_Kni", &iLocal_2347);
							return iVar12;
						}
					}
				}
				else
				{
					get_entity_matrix(*(uParam0.f_358[0 /*189*/]).f_9, &uVar0, &uVar3, &vVar6, &uVar9);
					if (vVar6.z <= -0.866f)
					{
						if (*uParam1.f_8 != 0)
						{
							if (*uParam1.f_8 == 1)
							{
								iVar12 = 14;
								return iVar12;
							}
							if (*uParam1.f_8 == 2)
							{
								iVar12 = 8;
								return iVar12;
							}
							if (*uParam1.f_8 == 3)
							{
								iVar12 = 12;
								return iVar12;
							}
						}
						else
						{
							iVar12 = 6;
							if (!func_341(iLocal_2350, 512))
							{
								func_98("Gate_Inv", &iLocal_2346);
								iLocal_2350 = 0;
								func_313(&iLocal_2350, 512);
								return iVar12;
							}
							else if (!func_341(iLocal_2350, 1024))
							{
								func_98("Con_Inv", &iLocal_2346);
								func_313(&iLocal_2350, 1024);
								return iVar12;
							}
							else if (!func_341(iLocal_2350, 2048))
							{
								func_98("Con_Inv", &iLocal_2346);
								func_313(&iLocal_2350, 2048);
								return iVar12;
							}
							else
							{
								func_98("Con_Inv", &iLocal_2346);
								return iVar12;
							}
						}
					}
					else if (*uParam1.f_8 != 0)
					{
						if (*uParam1.f_8 == 2)
						{
							iVar12 = 9;
							return iVar12;
						}
						else if (*uParam1.f_8 == 3)
						{
							iVar12 = 12;
							return iVar12;
						}
						else if (*uParam1.f_8 == 1)
						{
							iVar12 = 15;
							return iVar12;
						}
					}
					else
					{
						iVar12 = 2;
						if (!func_341(iLocal_2350, 8))
						{
							func_98("Gate_Hit", &iLocal_2344);
							iLocal_2350 = 0;
							func_313(&iLocal_2350, 8);
							return iVar12;
						}
						else if (!func_341(iLocal_2350, 16))
						{
							func_98("Con_Hit", &iLocal_2344);
							func_313(&iLocal_2350, 16);
							return iVar12;
						}
						else if (!func_341(iLocal_2350, 32))
						{
							func_98("Con_Hit", &iLocal_2344);
							func_313(&iLocal_2350, 32);
							return iVar12;
						}
						else
						{
							func_98("Con_Hit", &iLocal_2344);
							return iVar12;
						}
					}
				}
			}
			if (func_94(uParam1, uParam2, iParam3))
			{
				if (*uParam1.f_8 != 0)
				{
					if (*uParam1.f_8 == 2)
					{
						iVar12 = 10;
						return iVar12;
					}
					if (*uParam1.f_8 == 3)
					{
						iVar12 = 13;
						return iVar12;
					}
					if (*uParam1.f_8 == 1)
					{
						iVar12 = 16;
						return iVar12;
					}
				}
				else
				{
					iVar12 = 7;
					if (!func_341(iLocal_2350, 1))
					{
						func_98("Gate_Miss", &iLocal_2343);
						iLocal_2350 = 0;
						func_313(&iLocal_2350, 1);
						return iVar12;
					}
					else if (!func_341(iLocal_2350, 2))
					{
						func_98("Con_Miss", &iLocal_2343);
						func_313(&iLocal_2350, 2);
						return iVar12;
					}
					else if (!func_341(iLocal_2350, 4))
					{
						func_98("Con_Miss", &iLocal_2343);
						func_313(&iLocal_2350, 4);
						return iVar12;
					}
					else
					{
						func_98("Con_Miss", &iLocal_2343);
						return iVar12;
					}
				}
			}
			return iVar12;
		}
		if (func_94(uParam1, uParam2, iParam3))
		{
			if (*uParam1.f_8 != 0)
			{
				if (*uParam1.f_8 == 2)
				{
					iVar12 = 10;
					return iVar12;
				}
				if (*uParam1.f_8 == 3)
				{
					iVar12 = 13;
					return iVar12;
				}
				if (*uParam1.f_8 == 1)
				{
					iVar12 = 16;
					return iVar12;
				}
			}
			else
			{
				iVar12 = 7;
				if (!func_341(iLocal_2350, 1))
				{
					func_98("Gate_Miss", &iLocal_2343);
					iLocal_2350 = 0;
					func_313(&iLocal_2350, 1);
					return iVar12;
				}
				else if (!func_341(iLocal_2350, 2))
				{
					func_98("Con_Miss", &iLocal_2343);
					func_313(&iLocal_2350, 2);
					return iVar12;
				}
				else if (!func_341(iLocal_2350, 4))
				{
					func_98("Con_Miss", &iLocal_2343);
					func_313(&iLocal_2350, 4);
					return iVar12;
				}
				else
				{
					func_98("Con_Miss", &iLocal_2343);
					return iVar12;
				}
			}
			return iVar12;
		}
	}
	else if (iVar12 != 17)
	{
		return iVar12;
	}
	return -1;
}

bool func_94(auto uParam0, auto uParam1, int iParam2)
{
	Vector3 fVar0;
	Vector3 vVar1;
	
	if (!func_73(*uParam0, *uParam1, 1056964608, 0))
	{
		fVar0 = *uParam0.f_3 * 5f;
		if (is_entity_at_coord(iParam2, *uParam0, fVar0, fVar0, fVar0, false, true, 0))
		{
			vVar1 = {func_96(*uParam1 - *uParam0)};
			if (func_95(get_entity_coords(iParam2, 1), vVar1) - func_95(*uParam0, vVar1) > 15f)
			{
				play_sound_frontend(-1, sLocal_2335, "HUD_MINI_GAME_SOUNDSET", 1);
				return true;
			}
		}
	}
	return false;
}

float func_95(Vector3 vParam0, Vector3 vParam1)
{
	return vParam0.x * vParam3.x + vParam0.y * vParam3.y + vParam0.z * vParam3.z;
}

Vector3 func_96(Vector3 vParam0)
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

int func_97(int iParam0)
{
	auto uVar0;
	Vector3 vVar3;
	Vector3 vVar6;
	auto uVar9;
	
	if (is_entity_dead(iParam0, 0))
	{
		return false;
	}
	get_entity_matrix(iParam0, &uVar0, &vVar3, &vVar6, &uVar9);
	if (absf(vVar6.z) > 0.342f)
	{
		return false;
	}
	return vVar3.z < 0f;
}

void func_98(char* sParam0, auto uParam1)
{
	char[16] cVar0;
	
	StringCopy(&cVar0, "Gate_Miss", 16);
	if (!func_341(*uParam1, 1))
	{
		if (!iLocal_2021)
		{
			iLocal_2021 = 1;
			func_313(uParam1, 1);
			return;
		}
		else
		{
			iLocal_2021 = 0;
			if (are_strings_equal(sParam0, &cVar0))
			{
				func_61("SPR_FAIL_GATE", 7500, 0);
			}
			return;
		}
	}
	if (func_341(*uParam1, 1))
	{
		if (!func_341(*uParam1, 2))
		{
			if (!iLocal_2021)
			{
				iLocal_2021 = 1;
				func_313(uParam1, 2);
				return;
			}
			else
			{
				iLocal_2021 = 0;
				if (are_strings_equal(sParam0, &cVar0))
				{
					func_61("SPR_FAIL_GATE", 7500, 0);
				}
				return;
			}
		}
	}
	if (func_341(*uParam1, 2))
	{
		if (!func_341(*uParam1, 4))
		{
			if (!iLocal_2021)
			{
				iLocal_2021 = 1;
				func_313(uParam1, 4);
				return;
			}
			else
			{
				iLocal_2021 = 0;
				if (are_strings_equal(sParam0, &cVar0))
				{
					func_61("SPR_FAIL_GATE", 7500, 0);
				}
				return;
			}
		}
	}
	if (func_341(*uParam1, 4))
	{
		if (!func_341(*uParam1, 8))
		{
			if (!iLocal_2021)
			{
				iLocal_2021 = 1;
				func_313(uParam1, 8);
				return;
			}
			else
			{
				iLocal_2021 = 0;
				if (are_strings_equal(sParam0, &cVar0))
				{
					func_61("SPR_FAIL_GATE", 7500, 0);
				}
				return;
			}
		}
	}
	if (func_341(*uParam1, 8))
	{
		if (!func_341(*uParam1, 16))
		{
			if (!iLocal_2021)
			{
				iLocal_2021 = 1;
				func_313(uParam1, 16);
				return;
			}
			else
			{
				iLocal_2021 = 0;
				if (are_strings_equal(sParam0, &cVar0))
				{
					func_61("SPR_FAIL_GATE", 7500, 0);
				}
				return;
			}
		}
	}
}

int func_99(int iParam0)
{
	auto uVar0;
	Vector3 vVar3;
	Vector3 vVar6;
	auto uVar9;
	
	if (is_entity_dead(iParam0, 0))
	{
		return false;
	}
	get_entity_matrix(iParam0, &uVar0, &vVar3, &vVar6, &uVar9);
	if (absf(vVar6.z) > 0.342f)
	{
		return false;
	}
	return vVar3.z > 0f;
}

int func_100(auto uParam0, int iParam1)
{
	Vector3 vVar0;
	Vector3 vVar3;
	Vector3 vVar6;
	Vector3 vVar9;
	Vector3 vVar12;
	Vector3 vVar15;
	float fVar18;
	float fVar19;
	float fVar20;
	float fVar21;
	
	vVar0 = {*uParam0};
	get_entity_matrix(iParam1, &vVar12, &vVar6, &vVar9, &vVar3);
	vVar15 = {vVar0 - vVar3};
	fVar18 = absf(func_95(vVar15, vVar12));
	fVar19 = absf(func_95(vVar15, vVar9));
	fVar20 = absf(func_95(vVar15, vVar6));
	fVar21 = fVar19 * fVar19 + fVar20 * fVar20;
	if (fVar18 > 6.5f)
	{
		return 17;
	}
	else
	{
		if (fVar21 > 900f)
		{
			if (iParam1 == PLAYER::PLAYER_PED_ID())
			{
				func_184(&uLocal_2293, 0);
			}
			return 17;
		}
		if (fVar21 > 110f)
		{
			if (iParam1 == PLAYER::PLAYER_PED_ID())
			{
				func_184(&uLocal_2293, 0);
			}
			play_sound_frontend(-1, sLocal_2334, "HUD_MINI_GAME_SOUNDSET", 1);
			return 2;
		}
		else
		{
			if (iParam1 == PLAYER::PLAYER_PED_ID())
			{
				func_184(&uLocal_2293, 0);
			}
			play_sound_frontend(-1, sLocal_2334, "HUD_MINI_GAME_SOUNDSET", 1);
			return 1;
		}
	}
	return -1;
}

void func_101(auto uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<189> Var2;
	float fVar191;
	float fVar192;
	
	if (iParam1 < 0 || iParam1 > *uParam0.f_13 - 1)
	{
		return;
	}
	iVar0 = *uParam0.f_13;
	Var2 = {*(uParam0.f_358[iParam1 /*189*/])};
	iVar1 = 0;
	while (iVar1 < *uParam0.f_13)
	{
		if (Var2.f_8 != *(uParam0.f_358[iVar1 /*189*/]).f_8)
		{
			if (!is_entity_dead(*(uParam0.f_358[iVar1 /*189*/]).f_8, 0) && !is_entity_dead(Var2.f_8, 0))
			{
				if (Var2.f_11 > *(uParam0.f_358[iVar1 /*189*/]).f_11)
				{
					iVar0--;
				}
				else if (Var2.f_11 == *(uParam0.f_358[iVar1 /*189*/]).f_11)
				{
					fVar191 = func_102(Var2.f_8, *(uParam0.f_27[Var2.f_11 /*10*/]), 1);
					fVar192 = func_102(*(uParam0.f_358[iVar1 /*189*/]).f_8, *(uParam0.f_27[*(uParam0.f_358[iVar1 /*189*/]).f_11 /*10*/]), 1);
					if (fVar191 < fVar192)
					{
						iVar0--;
					}
				}
			}
			else
			{
				iVar0--;
			}
		}
		iVar1++;
	}
	*(uParam0.f_358[iParam1 /*189*/]).f_12 = iVar0;
}

float func_102(int iParam0, Vector3 vParam1, int iParam2)
{
	if (is_entity_dead(iParam0, 0))
	{
		return -1f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, 1), vParam1, iParam4);
}

void func_103(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_62(*iParam1, iParam2))
	{
		return;
	}
	if (!iParam3)
	{
		func_283(sParam0, -1);
	}
	else
	{
		func_104(sParam0);
	}
	func_60(iParam1, iParam2);
}

void func_104(char* sParam0)
{
	_set_text_component_format(sParam0);
	_display_help_text_from_string_label(0, 1, true, -1);
}

bool func_105(auto uParam0, auto uParam1, int iParam2)
{
	int iVar0;
	
	switch (*uParam1.f_23)
	{
		case 0:
			func_165(uParam0);
			func_233();
			func_243(&(Local_51.f_119), 0, 0, 1, 1);
			func_242(&(Local_51.f_119), "IB_RETRY", 2, 201, 1, 1, 0);
			func_242(&(Local_51.f_119), "FE_HLP16", 2, 202, 1, 1, 0);
			func_236(1);
			trigger_music_event("MGSP_FAIL");
			*uParam1.f_23 = 1;
			break;
		
		case 1:
			if (func_159(&(Local_51.f_321), &(Local_51.f_327), uParam0.f_17, sLocal_2305, sLocal_2306, uParam0, 78))
			{
				iLocal_2436 = 0;
				if (!is_entity_dead(*(uParam0.f_358[0 /*189*/]).f_9, 0))
				{
					set_vehicle_doors_locked(*(uParam0.f_358[0 /*189*/]).f_9, 4);
				}
				if (func_240("SPR_HELP_DAMG", 0, 0))
				{
					clear_this_print("SPR_HELP_DAMG");
				}
				*uParam0.f_1 = 0;
				func_66(&(Local_51.f_321), 1);
				if (*uParam0)
				{
					func_152(0, 0);
					func_151(0, 0);
					func_150();
					if (func_240("SPR_RETR_DES", 0, 0))
					{
						clear_this_print("SPR_RETR_DES");
					}
					func_236(0);
					*uParam0 = 1;
					*uParam1.f_23 = 6;
				}
				else
				{
					func_152(0, 0);
					func_151(0, 0);
					func_150();
					func_89(&iLocal_2308, 10f);
					func_236(0);
					*uParam0 = 0;
					*uParam1.f_23 = 7;
				}
			}
			break;
		
		case 2:
			func_142(&(Local_51.f_119), 1128792064, 7, 1, 1, 1065353216);
			if (is_control_just_pressed(2, 201))
			{
				func_152(0, 0);
				func_151(0, 0);
				func_150();
				iLocal_2441 = get_sound_id();
				play_sound_frontend(iLocal_2441, "Phone_Generic_Key_02", "HUD_MINIGAME_SOUNDSET", 1);
				if (func_240("SPR_RETR_DES", 0, 0))
				{
					clear_this_print("SPR_RETR_DES");
				}
				func_236(0);
				*uParam0 = 1;
				*uParam1.f_23 = 6;
			}
			else if (is_control_just_pressed(2, 202))
			{
				func_152(0, 0);
				func_151(0, 0);
				func_150();
				iLocal_2441 = get_sound_id();
				play_sound_frontend(iLocal_2441, "Phone_Generic_Key_03", "HUD_MINIGAME_SOUNDSET", 1);
				func_89(&iLocal_2308, 10f);
				func_236(0);
				*uParam0 = 0;
				*uParam1.f_23 = 7;
			}
			break;
		
		case 4:
			if (*uParam0 == 1)
			{
				*uParam0.f_1 = 0;
			}
			if (*uParam1.f_11 > 0)
			{
				*uParam1.f_16 = {*(uParam0.f_27[*uParam1.f_11 /*10*/])};
			}
			if (iParam2)
			{
				if (is_vehicle_driveable(*(uParam0.f_358[0 /*189*/]).f_9, 0))
				{
					set_player_invincible(player_id(), 1);
					set_player_control(player_id(), false, 0);
					func_243(&(Local_51.f_119), 0, 0, 1, 1);
					func_242(&(Local_51.f_119), "SPR_UI_CONT", 2, 201, 1, 1, 0);
					func_242(&(Local_51.f_119), "IB_NO", 2, 202, 1, 1, 0);
				}
			}
			if (iParam2)
			{
				if (is_vehicle_driveable(*(uParam0.f_358[0 /*189*/]).f_9, 0))
				{
					*uParam1.f_23 = 5;
				}
			}
			else
			{
				*uParam1.f_23 = 8;
			}
			break;
		
		case 5:
			if (!is_entity_dead(*(uParam0.f_358[0 /*189*/]).f_9, 0))
			{
				set_vehicle_doors_locked(*(uParam0.f_358[0 /*189*/]).f_9, 4);
			}
			*uParam0.f_1 = 0;
			if (func_5(&iLocal_2308) <= 10f)
			{
				if (iParam2)
				{
					hide_hud_component_this_frame(9);
					hide_hud_component_this_frame(7);
					CONTROLS::DISABLE_CONTROL_ACTION(0, 99, 1);
					CONTROLS::DISABLE_CONTROL_ACTION(0, 100, 1);
					func_142(&(Local_51.f_119), 1128792064, 1, 0, 1, 1065353216);
					if (is_control_just_pressed(2, 201))
					{
						*uParam0 = 1;
						iLocal_2441 = get_sound_id();
						play_sound_frontend(iLocal_2441, "Phone_Generic_Key_02", "HUD_MINIGAME_SOUNDSET", 1);
						*uParam1.f_23 = 6;
					}
					else if (is_control_just_pressed(2, 202))
					{
						*uParam0 = 0;
						func_89(&iLocal_2308, 10f);
						iLocal_2441 = get_sound_id();
						play_sound_frontend(iLocal_2441, "Phone_Generic_Key_03", "HUD_MINIGAME_SOUNDSET", 1);
						*uParam1.f_23 = 6;
					}
				}
			}
			else
			{
				clear_prints();
				sLocal_2306 = "SPR_RETR_DES";
				func_66(&(Local_51.f_321), 1);
				*uParam1.f_23 = 14;
			}
			break;
		
		case 6:
			if (func_337(500))
			{
				clear_prints();
				clear_help(1);
				*uParam1.f_23 = 8;
			}
			break;
		
		case 7:
			if (func_3(uParam0.f_3))
			{
				func_4(uParam0.f_3);
			}
			if (func_125())
			{
				if (is_screen_faded_out())
				{
					func_165(uParam0);
					set_player_control(player_id(), false, 0);
					if (ENTITY::DOES_ENTITY_EXIST(*(uParam0.f_358[0 /*189*/]).f_9))
					{
						set_entity_velocity(*(uParam0.f_358[0 /*189*/]).f_9, 0f, 0f, 0f);
						set_entity_health(*(uParam0.f_358[0 /*189*/]).f_9, get_entity_max_health(*(uParam0.f_358[0 /*189*/]).f_9));
					}
					*uParam1.f_23 = 10;
				}
			}
			break;
		
		case 8:
			if (func_123(uParam1, 1))
			{
				if (*uParam0)
				{
					*uParam0.f_26 = 8;
				}
				else
				{
					if (iParam2)
					{
						set_player_control(player_id(), true, 0);
						if (Local_51 == 0)
						{
							set_player_invincible(player_id(), 1);
						}
					}
					*uParam1.f_23 = 9;
				}
			}
			break;
		
		case 9:
			iVar0 = 0;
			while (iVar0 < *uParam0.f_13)
			{
				if (*(uParam0.f_358[iVar0 /*189*/]).f_8 == *uParam1.f_8)
				{
					func_121(uParam0, iVar0, 0);
				}
				iVar0++;
			}
			if (iParam2)
			{
				if (!is_entity_dead(*(uParam0.f_358[0 /*189*/]).f_9, 0) && *(uParam0.f_358[0 /*189*/]).f_11 != -1)
				{
					func_120(*(uParam0.f_27[*(uParam0.f_358[0 /*189*/]).f_11 + 1 /*10*/]), *(uParam0.f_358[0 /*189*/]).f_9, *(uParam0.f_27[*(uParam0.f_358[0 /*189*/]).f_11 /*10*/]), *(uParam0.f_358[0 /*189*/]).f_11 == 0);
				}
				set_gameplay_cam_relative_heading(0);
				func_11(&iLocal_2432);
				*uParam1.f_23 = 11;
			}
			else
			{
				*uParam1.f_23 = 13;
			}
			break;
		
		case 10:
			func_152(0, 0);
			func_151(0, 0);
			func_110(uParam1, 1);
			func_9(uParam1, Local_51.f_3, Local_51.f_6, 0f);
			settimera(false);
			*uParam1.f_23 = 12;
			break;
		
		case 11:
			if (!is_new_load_scene_active() || is_new_load_scene_loaded())
			{
				*uParam0.f_1 = 1;
				func_11(&iLocal_2432);
				func_108(uParam0.f_358[iVar0 /*189*/], 60f, 0);
				if (func_553(500))
				{
					new_load_scene_stop();
					if (!is_entity_dead(*(uParam0.f_358[0 /*189*/]).f_9, 0))
					{
						set_ped_into_vehicle(*(uParam0.f_358[0 /*189*/]).f_8, *(uParam0.f_358[0 /*189*/]).f_9, -1);
					}
					if (iParam2 && Local_51 == 0)
					{
						func_88(uParam0.f_358[0 /*189*/], 5f);
					}
					*uParam1.f_23 = 13;
				}
				return false;
			}
			else if (is_new_load_scene_active())
			{
				if (*(uParam0.f_358[0 /*189*/]).f_11 < *uParam0.f_12)
				{
					if (func_3(&iLocal_2432))
					{
						if (func_107(&iLocal_2432) >= 3f)
						{
							new_load_scene_stop();
						}
					}
					else
					{
						func_10(&iLocal_2432);
					}
				}
			}
			break;
		
		case 12:
			*uParam0.f_26 = 8;
			return false;
			break;
		
		case 13:
			if (*uParam1.f_22 != 0)
			{
				if (!is_entity_dead(*uParam1.f_8, 0))
				{
					if (func_106(uParam1))
					{
						func_11(&iLocal_2308);
						sLocal_2306 = "SPR_RETR_STUK";
						*uParam1.f_23 = 0;
						return true;
					}
				}
			}
			return false;
		
		case 14:
			func_165(uParam0);
			func_4(uParam0.f_3);
			*uParam0.f_26 = 8;
			break;
	}
	return true;
}

bool func_106(auto uParam0)
{
	if (*uParam0.f_22 != 0)
	{
		if (!is_player_dead(player_id()))
		{
			if (is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), *uParam0.f_9, 0))
			{
				if (get_entity_speed(*uParam0.f_9) <= 15f)
				{
					if (*uParam0.f_22 == joaat("stunt"))
					{
						if (get_entity_height_above_ground(*uParam0.f_9) < 3f || has_entity_collided_with_anything(*uParam0.f_9))
						{
							if (is_entity_upsidedown(*uParam0.f_9) && get_entity_height_above_ground(*uParam0.f_9) < 1f)
							{
								return true;
							}
							if (is_vehicle_stuck_timer_up(*uParam0.f_9, 0, 1000))
							{
								return true;
							}
							if (is_vehicle_stuck_timer_up(*uParam0.f_9, 1, 1000))
							{
								return true;
							}
							if (is_vehicle_stuck_timer_up(*uParam0.f_9, 2, 10000))
							{
								return true;
							}
							if (is_vehicle_stuck_timer_up(*uParam0.f_9, 3, 10000))
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

float func_107(int iParam0)
{
	if (func_3(iParam0))
	{
		if (func_7(iParam0))
		{
			return *iParam0.f_2;
		}
		else
		{
			return func_6(GAMEPLAY::IS_BIT_SET(*iParam0, 4)) - *iParam0.f_1;
		}
	}
	return 0f;
}

void func_108(auto uParam0, Vector3 fParam1, int iParam2)
{
	Vector3 vVar0;
	
	if (!is_entity_dead(*uParam0.f_9, 0))
	{
		if (is_this_model_a_plane(*uParam0.f_22))
		{
			vVar0 = {get_entity_rotation(*uParam0.f_9, 2)};
			func_109(*uParam0.f_9, fParam1, iParam2, vVar0.x, 0);
		}
	}
}

void func_109(int iParam0, Vector3 fParam1, int iParam2, float fParam3, float fParam4)
{
	Vector3 vVar0;
	int iVar3;
	float fVar4;
	
	CONTROLS::DISABLE_CONTROL_ACTION(0, 75, 1);
	if (is_entity_dead(iParam0, 0))
	{
		return;
	}
	if (get_entity_speed(iParam0) < fParam1)
	{
		set_vehicle_forward_speed(iParam0, fParam1);
	}
	vVar0 = {get_entity_rotation(iParam0, 2)};
	iVar3 = false;
	if (iParam2)
	{
		fVar4 = get_frame_time() * 45f;
		if (vVar0.x < -fVar4)
		{
			iVar3 = true;
			vVar0.x += fVar4;
		}
		else if (vVar0.x < fParam3)
		{
			iVar3 = true;
			vVar0.x = fParam3;
		}
		else if (vVar0.x > fVar4)
		{
			iVar3 = true;
			vVar0.x -= fVar4;
		}
		else if (vVar0.x > fParam3)
		{
			iVar3 = true;
			vVar0.x = fParam3;
		}
		if (vVar0.y < -fVar4)
		{
			iVar3 = true;
			vVar0.y += fVar4;
		}
		else if (vVar0.y < fParam4)
		{
			iVar3 = true;
			vVar0.y = fParam4;
		}
		else if (vVar0.y > fVar4)
		{
			iVar3 = true;
			vVar0.y -= fVar4;
		}
		else if (vVar0.y > fParam4)
		{
			iVar3 = true;
			vVar0.y = fParam4;
		}
	}
	else
	{
		if (vVar0.x != fParam3)
		{
			iVar3 = true;
			vVar0.x = fParam3;
		}
		if (vVar0.y != fParam4)
		{
			iVar3 = true;
			vVar0.y = fParam4;
		}
	}
	if (iVar3)
	{
		set_entity_rotation(iParam0, vVar0, 2, 1);
	}
}

bool func_110(auto uParam0, int iParam1)
{
	char[16] cVar0;
	
	if (iParam1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(*uParam0.f_9))
		{
			if (!is_entity_dead(*uParam0.f_9, 0) || !is_vehicle_driveable(*uParam0.f_9, 0))
			{
				if (is_ped_in_vehicle(*uParam0.f_8, *uParam0.f_9, 0))
				{
					clear_ped_tasks_immediately(*uParam0.f_8);
					set_entity_as_mission_entity(*uParam0.f_9, true, 1);
					delete_vehicle(uParam0.f_9);
				}
			}
			else
			{
				if (is_ped_in_vehicle(*uParam0.f_8, *uParam0.f_9, 0))
				{
					set_entity_coords(*uParam0.f_8, *uParam0.f_16, 1, false, 0, 1);
				}
				if (is_ped_in_vehicle(*uParam0.f_8, *uParam0.f_9, 0))
				{
				}
				else
				{
					set_entity_as_mission_entity(*uParam0.f_9, true, 1);
					delete_vehicle(uParam0.f_9);
				}
			}
		}
	}
	if (!is_entity_dead(*uParam0.f_9, 0))
	{
		set_entity_health(*uParam0.f_9, 1000);
		set_vehicle_fixed(*uParam0.f_9);
		set_vehicle_engine_health(*uParam0.f_9, 1000f);
		set_entity_coords(*uParam0.f_9, *uParam0.f_16, 1, false, 0, 1);
		set_entity_heading(*uParam0.f_9, *uParam0.f_19);
		set_vehicle_on_ground_properly(*uParam0.f_9);
	}
	else
	{
		if (*uParam0.f_22 == 0)
		{
			return true;
		}
		*uParam0.f_9 = create_vehicle(joaat("stunt"), *uParam0.f_16, *uParam0.f_19, 1, true);
		if (is_entity_dead(*uParam0.f_9, 0))
		{
			return false;
		}
		if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
		{
			set_vehicle_doors_locked(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0), 4);
		}
		set_vehicle_has_strong_axles(*uParam0.f_9, true);
		func_111(*uParam0.f_9, &(Local_51.f_243), 0, 1);
	}
	_0xC15907D667F7CFB2(*uParam0.f_9, 0);
	set_vehicle_engine_on(*uParam0.f_9, true, 1, 0);
	set_heli_blades_full_speed(*uParam0.f_9);
	if (!is_entity_dead(*uParam0.f_8, 0))
	{
		if (!is_ped_sitting_in_vehicle(*uParam0.f_8, *uParam0.f_9))
		{
			set_ped_into_vehicle(*uParam0.f_8, *uParam0.f_9, -1);
		}
	}
	if (!is_entity_a_mission_entity(*uParam0.f_9))
	{
		set_entity_as_mission_entity(*uParam0.f_9, true, 0);
	}
	MemCopy(&cVar0, {*uParam0}, 4);
	StringConCat(&cVar0, "_Veh", 16);
	set_vehicle_name_debug(*uParam0.f_9, &cVar0);
	if (*uParam0.f_20 <= 3)
	{
		_0xC50CE861B55EAB8B(*uParam0.f_9, 0);
		Local_51.f_1 = *uParam0.f_9;
	}
	return true;
}

void func_111(int iParam0, auto uParam1, int iParam2, int iParam3)
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
			if (GAMEPLAY::IS_BIT_SET(*uParam1.f_77, func_119(iVar0 + 1)))
			{
			}
			else
			{
				GAMEPLAY::SET_BIT(uParam1.f_77, func_119(iVar0 + 1));
			}
		}
		else if (*uParam1.f_66 == joaat("sandking") || *uParam1.f_66 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (GAMEPLAY::IS_BIT_SET(*uParam1.f_77, func_119(iVar1 + 1)))
			{
			}
			else
			{
				GAMEPLAY::SET_BIT(uParam1.f_77, func_119(iVar1 + 1));
			}
		}
		if (GAMEPLAY::IS_BIT_SET(*uParam1.f_77, 13))
		{
			set_vehicle_custom_primary_colour(iParam0, *uParam1.f_71, *uParam1.f_72, *uParam1.f_73);
		}
		else
		{
			clear_vehicle_custom_primary_colour(iParam0);
		}
		if (GAMEPLAY::IS_BIT_SET(*uParam1.f_77, 12))
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
		if (((GAMEPLAY::IS_BIT_SET(*uParam1.f_77, 15) || func_118(iParam0)) || (((*uParam1.f_62 == 0 && *uParam1.f_63 == 0) && *uParam1.f_64 == 0) && *uParam1.f_9[20] > 0)) && func_117())
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
		set_vehicle_tyres_can_burst(iParam0, !GAMEPLAY::IS_BIT_SET(*uParam1.f_77, 9));
		if (iParam2)
		{
			set_vehicle_doors_locked(iParam0, *uParam1.f_70);
		}
		_set_vehicle_neon_lights_colour(iParam0, *uParam1.f_74, *uParam1.f_75, *uParam1.f_76);
		_set_vehicle_neon_light_enabled(iParam0, 2, GAMEPLAY::IS_BIT_SET(*uParam1.f_77, 28));
		_set_vehicle_neon_light_enabled(iParam0, 3, GAMEPLAY::IS_BIT_SET(*uParam1.f_77, 29));
		_set_vehicle_neon_light_enabled(iParam0, 0, GAMEPLAY::IS_BIT_SET(*uParam1.f_77, 30));
		_set_vehicle_neon_light_enabled(iParam0, 1, GAMEPLAY::IS_BIT_SET(*uParam1.f_77, 31));
		set_vehicle_is_stolen(iParam0, GAMEPLAY::IS_BIT_SET(*uParam1.f_77, 10));
		if (get_vehicle_livery_count(iParam0) > 1 && *uParam1.f_67 >= 0)
		{
			set_vehicle_livery(iParam0, *uParam1.f_67);
		}
		if (*uParam1.f_69 > -1 && *uParam1.f_69 < 255)
		{
			if (!is_this_model_a_bicycle(ENTITY::GET_ENTITY_MODEL(iParam0)))
			{
				if (is_this_model_a_bike(ENTITY::GET_ENTITY_MODEL(iParam0)))
				{
					if (*uParam1.f_69 == 6)
					{
						func_116(iParam0, *uParam1.f_69);
					}
				}
				else
				{
					func_116(iParam0, *uParam1.f_69);
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
			func_112(&iParam0, uParam1.f_9, uParam1.f_59);
		}
		if (!is_this_model_a_heli(*uParam1.f_66) && !is_this_model_a_boat(*uParam1.f_66))
		{
			iVar2 = 0;
			while (iVar2 <= 11)
			{
				if (GAMEPLAY::IS_BIT_SET(*uParam1.f_77, func_119(iVar2 + 1)))
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
			if (!GAMEPLAY::IS_BIT_SET(*uParam1.f_77, 23))
			{
				if (GAMEPLAY::IS_BIT_SET(*uParam1.f_77, 22))
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
		if (GAMEPLAY::IS_BIT_SET(*uParam1.f_77, 27))
		{
			decor_set_bool(iParam0, "IgnoredByQuickSave", 1);
		}
		else
		{
			decor_set_bool(iParam0, "IgnoredByQuickSave", 0);
		}
	}
}

bool func_112(int iParam0, auto uParam1, auto uParam2)
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
	if (func_115(ENTITY::GET_ENTITY_MODEL(*iParam0), 1) && get_vehicle_mod(*iParam0, 24) != func_114(*iParam0, *uParam1[38] - 1))
	{
		set_vehicle_mod(*iParam0, 24, func_114(*iParam0, *uParam1[38] - 1), false);
	}
	if (func_113(*iParam0))
	{
		set_vehicle_strong(*iParam0, true);
		set_vehicle_has_strong_axles(*iParam0, true);
	}
	return true;
}

bool func_113(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char[16] cVar3;
	
	if ((ENTITY::DOES_ENTITY_EXIST(iParam0) && is_vehicle_driveable(iParam0, 0)) && get_num_mod_kits(iParam0) > 0)
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

int func_114(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && is_vehicle_driveable(iParam0, 0))
	{
		switch (ENTITY::GET_ENTITY_MODEL(iParam0))
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

bool func_115(int iParam0, int iParam1)
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

void func_116(int iParam0, int iParam1)
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

int func_117()
{
	return is_dlc_present(-1691188696);
}

int func_118(int iParam0)
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (is_vehicle_driveable(iParam0, 0))
		{
			if (decor_is_registered_as_type("MPBitset", 3))
			{
				if (decor_exist_on(iParam0, "MPBitset"))
				{
					iVar0 = decor_get_int(iParam0, "MPBitset");
				}
				return GAMEPLAY::IS_BIT_SET(iVar0, 4);
			}
		}
	}
	return false;
}

int func_119(int iParam0)
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

void func_120(Vector3 vParam0, int iParam1, Vector3 vParam2, int iParam3)
{
	float fVar0;
	Vector3 fVar1;
	Vector3 vVar2;
	Vector3 vVar5;
	Vector3 vVar8;
	float fVar11;
	Vector3 vVar12;
	
	if (!is_entity_dead(iParam3, 0))
	{
		if (iParam7 && Local_51.f_10 == 0)
		{
			set_entity_coords(iParam3, 1705.039f, 3251.13f, 40.0016f, 1, false, 0, 1);
		}
		vVar12 = {get_entity_coords(iParam3, 1)};
		request_collision_at_coord(vVar12);
		get_ground_z_for_3d_coord(vVar12, &fVar11, 0);
		vVar5 = {get_entity_coords(iParam3, 1)};
		if (iParam7)
		{
			vVar8 = {vParam0 - vParam4};
		}
		else
		{
			vVar8 = {vParam4 - vVar5};
		}
		fVar0 = get_heading_from_vector_2d(vVar8.x, vVar8.y);
		fVar1 = get_heading_from_vector_2d(vVar8.x, vVar8.z) - 270f;
		while (fVar1 > 180f)
		{
			fVar1 -= 360f;
		}
		while (fVar1 < -180f)
		{
			fVar1 += 360f;
		}
		if (fVar1 < -90f)
		{
			fVar1 = -180f - absf(fVar1);
		}
		if (fVar1 > 90f)
		{
			fVar1 = 180f - absf(fVar1);
		}
		if (absf(vVar12.z - fVar11) < 25f && (fVar1 > 15f || fVar1 < -15f))
		{
			vVar12.z = fVar11 + 25f;
			set_entity_coords(iParam3, vVar12, 1, false, 0, 1);
		}
		freeze_entity_position(iParam3, true);
		vVar2 = {get_entity_rotation(iParam3, 2)};
		vVar2.x = fVar1;
		vVar2.z = fVar0;
		set_entity_rotation(iParam3, vVar2, 2, 1);
		freeze_entity_position(iParam3, false);
		new_load_scene_start(vVar12, get_entity_forward_vector(iParam3), 500f, 0);
	}
}

void func_121(auto uParam0, int iParam1, int iParam2)
{
	func_122(uParam0, iParam1, *(uParam0.f_358[iParam1 /*189*/]).f_11 - 1, iParam2);
}

void func_122(auto uParam0, int iParam1, int iParam2, int iParam3)
{
	Vector3 vVar0;
	Vector3 fVar3;
	Vector3 fVar4;
	
	if (iParam2 < 0 || iParam2 > *uParam0.f_12 - 1)
	{
		return;
	}
	if (iParam1 < 0 || iParam1 > *uParam0.f_13 - 1)
	{
		return;
	}
	if (is_entity_dead(*(uParam0.f_358[iParam1 /*189*/]).f_8, 0))
	{
		return;
	}
	if (*(uParam0.f_358[iParam1 /*189*/]).f_22 != 0)
	{
		if (is_entity_dead(*(uParam0.f_358[iParam1 /*189*/]).f_9, 0))
		{
			return;
		}
	}
	vVar0 = {*(uParam0.f_27[iParam2 + 1 /*10*/]) - *(uParam0.f_27[iParam2 /*10*/])};
	fVar3 = get_heading_from_vector_2d(vVar0.x, vVar0.y);
	fVar4 = 0f;
	if (is_this_model_a_bike(*(uParam0.f_358[iParam1 /*189*/]).f_22))
	{
		fVar4 = 0f;
	}
	else if (is_this_model_a_car(*(uParam0.f_358[iParam1 /*189*/]).f_22))
	{
		fVar4 = 25f;
	}
	else if (is_this_model_a_plane(*(uParam0.f_358[iParam1 /*189*/]).f_22))
	{
		fVar4 = 60f;
	}
	if (iParam3)
	{
	}
	func_9(uParam0.f_358[iParam1 /*189*/], *(uParam0.f_27[iParam2 /*10*/]), fVar3, fVar4);
}

bool func_123(auto uParam0, int iParam1)
{
	if (!func_110(uParam0, iParam1) || !func_124(uParam0))
	{
		return false;
	}
	return true;
}

bool func_124(auto uParam0)
{
	char[16] cVar0;
	
	if (*uParam0.f_21 == 0)
	{
		return false;
	}
	if (!is_entity_dead(*uParam0.f_8, 0))
	{
		set_entity_health(*uParam0.f_8, 1000);
		if (!is_entity_dead(*uParam0.f_9, 0))
		{
			if (!is_ped_sitting_in_vehicle(*uParam0.f_8, *uParam0.f_9))
			{
				set_ped_into_vehicle(*uParam0.f_8, *uParam0.f_9, -1);
			}
		}
		else
		{
			set_entity_coords(*uParam0.f_8, *uParam0.f_16, 1, false, 0, 1);
			set_entity_heading(*uParam0.f_8, *uParam0.f_19);
		}
	}
	else if (!is_entity_dead(*uParam0.f_9, 0))
	{
		*uParam0.f_8 = PED::CREATE_PED_inside_vehicle(*uParam0.f_9, *uParam0.f_20, *uParam0.f_21, -1, 1, true);
		if (is_entity_dead(*uParam0.f_8, 0))
		{
			return false;
		}
	}
	else
	{
		*uParam0.f_8 = PED::CREATE_PED(*uParam0.f_20, *uParam0.f_21, *uParam0.f_16, *uParam0.f_19, 1, true);
		if (is_entity_dead(*uParam0.f_8, 0))
		{
			return false;
		}
	}
	if (*uParam0.f_20 > 3)
	{
		if (!is_entity_a_mission_entity(*uParam0.f_8))
		{
			set_entity_as_mission_entity(*uParam0.f_8, true, 0);
		}
		MemCopy(&cVar0, {*uParam0}, 4);
		StringConCat(&cVar0, "_Drv", 16);
		set_ped_name_debug(*uParam0.f_8, &cVar0);
	}
	return true;
}

bool func_125()
{
	if (!GAMEPLAY::IS_BIT_SET(iLocal_43, false) && !GAMEPLAY::IS_BIT_SET(iLocal_43, true))
	{
		settimera(false);
		func_152(1, 0);
	}
	if (!is_cutscene_playing())
	{
		clear_prints();
	}
	CONTROLS::DISABLE_CONTROL_ACTION(2, 199, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 59, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 60, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 37, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 25, 1);
	_0x5A7F62FDA59759BD();
	if (IntToFloat(timera()) > 1500f * 0.2f)
	{
		if (!GAMEPLAY::IS_BIT_SET(iLocal_43, true))
		{
			func_151(1, 0);
			settimerb(false);
		}
		else if (IntToFloat(timerb()) > 1500f * 0.075f || is_screen_faded_out())
		{
			if (!is_screen_faded_out())
			{
				if (!is_screen_fading_out())
				{
					do_screen_fade_out(1500);
				}
			}
			else if (iLocal_44 == 0)
			{
				iLocal_44 = GAMEPLAY::GET_GAME_TIMER() + 1000;
				if (is_player_playing(player_id()))
				{
					set_player_control(player_id(), false, 0);
				}
				func_141(0, 2, 1);
				func_133(1, 1, 1, 0);
				func_127(1);
				set_frontend_active(0);
				set_pause_menu_active(0);
				clear_help(1);
				clear_prints();
				if (is_player_playing(player_id()))
				{
					set_player_control(player_id(), false, 0);
				}
				func_152(0, 0);
				func_126(0);
			}
			else if (GAMEPLAY::GET_GAME_TIMER() < iLocal_44)
			{
				return true;
			}
		}
	}
	return false;
}

void func_126(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iVar0 == 0)
	{
		if (iParam0 == 1)
		{
			if (!GAMEPLAY::IS_BIT_SET(iLocal_43, 3))
			{
				set_game_paused(true);
				GAMEPLAY::SET_BIT(&iLocal_43, 3);
			}
		}
		else if (GAMEPLAY::IS_BIT_SET(iLocal_43, 3))
		{
			set_game_paused(false);
			GAMEPLAY::CLEAR_BIT(&iLocal_43, 3);
		}
	}
}

void func_127(int iParam0)
{
	if (iParam0)
	{
		func_132();
		if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
		{
			GAMEPLAY::SET_BIT(&Global_2284, 16);
		}
		Global_14413.f_1 = 1;
		if (func_131(0))
		{
			func_128(0);
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

void func_128(int iParam0)
{
	if (Global_14571)
	{
		func_130(0, 0);
	}
	if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
	{
		GAMEPLAY::SET_BIT(&Global_2284, 16);
	}
	if (is_mobile_phone_call_ongoing())
	{
		stop_scripted_conversation(false);
	}
	Global_15712 = 5;
	if (iParam0 == 1)
	{
		GAMEPLAY::SET_BIT(&Global_2283, 30);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&Global_2283, 30);
	}
	if (!func_129())
	{
		Global_14413.f_1 = 3;
	}
}

bool func_129()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return true;
	}
	return false;
}

void func_130(int iParam0, int iParam1)
{
	if (iParam0)
	{
		if (func_131(0))
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

bool func_131(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14413.f_1 > 3)
		{
			if (GAMEPLAY::IS_BIT_SET(Global_2283, 14))
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

void func_132()
{
	if (Global_14413.f_1 == 9 || Global_14413.f_1 == 10)
	{
		Global_15765 = 0;
		Global_15761 = 1;
	}
}

void func_133(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam0)
	{
		special_ability_deactivate_fast(player_id());
		set_all_random_peds_flee(player_id(), 1);
		set_police_ignore_player(player_id(), 1);
		func_140(1);
		_0xA8FDB297A8D25FBA();
		_0xFDB423997FA30340();
		if (Global_14413.f_1 > 3)
		{
			if (is_mobile_phone_call_ongoing())
			{
				stop_scripted_conversation(false);
			}
			if (!func_129())
			{
				Global_14413.f_1 = 3;
			}
			Global_15712 = 5;
		}
		func_139(1, iParam3, iParam2, 0);
		Global_55755 = 1;
		Global_68061 = 1;
		Global_69487 = 1;
	}
	else
	{
		func_140(0);
		_0xE1CD1E48E025E661();
		Global_55755 = 0;
		if (iParam1)
		{
			_0x03FC694AE06C5A20();
		}
		set_all_random_peds_flee(player_id(), 0);
		set_police_ignore_player(player_id(), 0);
		func_139(0, iParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_137(player_id())) && !func_135(player_id(), 0)) && !func_134())
			{
				set_entity_invincible(PLAYER::PLAYER_PED_ID(), false);
			}
		}
		else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_137(player_id()))
		{
			set_entity_invincible(PLAYER::PLAYER_PED_ID(), false);
		}
		Global_69487 = 0;
	}
}

int func_134()
{
	return GAMEPLAY::IS_BIT_SET(Global_1587523[player_id() /*444*/].f_39.f_18, 14);
}

int func_135(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == player_id())
	{
		iVar0 = func_136(-1, 0) == 8;
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

int func_136(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_21();
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

bool func_137(int iParam0)
{
	if (func_135(iParam0, 0))
	{
		return true;
	}
	if (func_138())
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

int func_138()
{
	return GAMEPLAY::IS_BIT_SET(Global_2359301, 3);
}

int func_139(int iParam0, int iParam1, auto uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (GAMEPLAY::IS_PC_VERSION())
	{
		if (_0xA0FE76168A189DDB() != iParam0 && uParam2)
		{
			_0x20746F7B1032A3C7(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_140(int iParam0)
{
	if (iParam0 == 1)
	{
		GAMEPLAY::SET_BIT(&Global_2283, 13);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&Global_2283, 13);
	}
}

void func_141(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == 1)
	{
		GAMEPLAY::SET_BIT(&iLocal_43, 2);
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (iParam1 == 1)
			{
				set_time_scale(0.2f);
			}
			else
			{
				set_time_scale(0.075f);
			}
		}
	}
	else
	{
		if (GAMEPLAY::IS_BIT_SET(iLocal_43, 2) || iParam2)
		{
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				set_time_scale(1f);
			}
		}
		GAMEPLAY::CLEAR_BIT(&iLocal_43, 2);
	}
}

void func_142(auto uParam0, Vector3 fParam1, int iParam2, int iParam3, int iParam4, Vector3 fParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	Vector3 fVar8;
	
	if (((is_screen_fading_out() || is_screen_fading_in()) || is_screen_faded_out()) || is_frontend_fading())
	{
		if (!iParam3)
		{
			return;
		}
	}
	if (!func_149(uParam0))
	{
		return;
	}
	hide_loading_on_fade_this_frame();
	_set_2d_layer(iParam2);
	if (!func_148(*uParam0.f_1, 256) || (func_148(*uParam0.f_1, 8192) && _0x6CD79468A1E595C6(2)))
	{
		_push_scaleform_movie_function(*uParam0, "SET_CLEAR_SPACE");
		_push_scaleform_movie_function_parameter_float(fParam1);
		_pop_scaleform_movie_function_void();
		_push_scaleform_movie_function(*uParam0, "SET_MAX_WIDTH");
		_push_scaleform_movie_function_parameter_float(fParam5);
		_pop_scaleform_movie_function_void();
		_push_scaleform_movie_function(*uParam0, "SET_DATA_SLOT_EMPTY");
		_pop_scaleform_movie_function_void();
		if (GAMEPLAY::IS_PC_VERSION())
		{
			_push_scaleform_movie_function(*uParam0, "TOGGLE_MOUSE_BUTTONS");
			_push_scaleform_movie_function_parameter_bool(func_148(*uParam0.f_1, 4096));
			_pop_scaleform_movie_function_void();
		}
		iVar5 = false;
		iVar6 = 0;
		while (iVar6 < *uParam0.f_123)
		{
			switch (*(uParam0.f_2[iVar6 /*15*/]).f_2)
			{
				case 0:
					iVar4 = true;
					break;
				
				case 1:
					iVar4 = _is_input_disabled(2);
					break;
				
				case 2:
					iVar4 = !_is_input_disabled(2);
					break;
				
				default:
					iVar4 = false;
					break;
			}
			if (iVar4)
			{
				if (_push_scaleform_movie_function(*uParam0, "SET_DATA_SLOT"))
				{
					_push_scaleform_movie_function_parameter_int(iVar5);
					iVar5++;
					iVar7 = false;
					while (iVar7 < *(uParam0.f_2[iVar6 /*15*/]).f_14)
					{
						iVar0 = *(uParam0.f_2[iVar6 /*15*/].f_3)[iVar7 /*2*/];
						iVar1 = *(uParam0.f_2[iVar6 /*15*/].f_3[iVar7 /*2*/]).f_1;
						iVar2 = GAMEPLAY::IS_BIT_SET(*(uParam0.f_2[iVar6 /*15*/]).f_13, iVar7);
						if (!GAMEPLAY::IS_BIT_SET(*(uParam0.f_2[iVar6 /*15*/]).f_12, iVar7))
						{
							sVar3 = _get_control_action_name(iVar0, iVar1, iVar2);
						}
						else
						{
							sVar3 = _0x80C2FD58D720C801(iVar0, iVar1, iVar2);
						}
						if (!is_string_null_or_empty(sVar3))
						{
							func_147(sVar3);
						}
						iVar7++;
					}
					if (!is_string_null_or_empty(*uParam0.f_2[iVar6 /*15*/]))
					{
						func_146(*uParam0.f_2[iVar6 /*15*/]);
					}
					if (GAMEPLAY::IS_PC_VERSION())
					{
						if (func_148(*uParam0.f_1, 4096))
						{
							if (*(uParam0.f_2[iVar6 /*15*/]).f_1)
							{
								_push_scaleform_movie_function_parameter_bool(true);
								_push_scaleform_movie_function_parameter_int(*(uParam0.f_2[iVar6 /*15*/].f_3[0 /*2*/]).f_1);
							}
							else
							{
								_push_scaleform_movie_function_parameter_bool(false);
								_push_scaleform_movie_function_parameter_int(-1);
							}
						}
					}
					_pop_scaleform_movie_function_void();
				}
			}
			iVar6++;
		}
		fVar8 = func_145(iParam4, func_145(func_148(*uParam0.f_1, 32), 1f, 0f), -1f);
		_push_scaleform_movie_function(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		_push_scaleform_movie_function_parameter_float(fVar8);
		_pop_scaleform_movie_function_void();
		_push_scaleform_movie_function(*uParam0, "SET_BACKGROUND_COLOUR");
		_push_scaleform_movie_function_parameter_float(0f);
		_push_scaleform_movie_function_parameter_float(0f);
		_push_scaleform_movie_function_parameter_float(0f);
		_push_scaleform_movie_function_parameter_float(80f);
		_pop_scaleform_movie_function_void();
		func_144(uParam0.f_1, 256);
		func_143(uParam0.f_1, 128);
	}
	draw_scaleform_movie_fullscreen(*uParam0, 255, 255, 255, false, 0);
}

void func_143(auto uParam0, int iParam1)
{
	*uParam0 -= (*uParam0 && iParam1);
}

void func_144(auto uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

float func_145(int iParam0, float fParam1, float fParam2)
{
	if (iParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_146(char* sParam0)
{
	_begin_text_component(sParam0);
	_end_text_component();
}

void func_147(char* sParam0)
{
	_0xE83A3E3557A56640(sParam0);
}

int func_148(auto uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_149(auto uParam0)
{
	if (*uParam0 != 0)
	{
		if (has_scaleform_movie_loaded(*uParam0))
		{
			func_144(uParam0.f_1, 1);
			return true;
		}
	}
	return false;
}

void func_150()
{
	iLocal_43 = false;
	iLocal_44 = 0;
	func_133(0, 1, 1, 0);
	func_127(1);
}

void func_151(int iParam0, int iParam1)
{
	if (iParam0 == 1)
	{
		func_152(0, 0);
		_start_screen_effect("DeathFailOut", false, 0);
		GAMEPLAY::SET_BIT(&iLocal_43, true);
		func_141(1, 2, 0);
		_set_cam_effect(2);
	}
	else
	{
		if (GAMEPLAY::IS_BIT_SET(iLocal_43, true) || iParam1)
		{
			_stop_screen_effect("DeathFailOut");
			func_141(0, 2, 1);
			_set_cam_effect(0);
		}
		GAMEPLAY::CLEAR_BIT(&iLocal_43, true);
	}
}

void func_152(int iParam0, int iParam1)
{
	char* sVar0;
	
	switch (func_153())
	{
		case 0:
			sVar0 = "DeathFailMichaelIn";
			break;
		
		case 1:
			sVar0 = "DeathFailFranklinIn";
			break;
		
		case 2:
			sVar0 = "DeathFailTrevorIn";
			break;
	}
	if (iParam0 == 1)
	{
		if (!GAMEPLAY::IS_BIT_SET(iLocal_43, false) || iParam1)
		{
			_start_screen_effect(sVar0, false, 0);
			GAMEPLAY::SET_BIT(&iLocal_43, false);
			func_141(1, 1, 0);
			_set_cam_effect(1);
		}
	}
	else
	{
		if (GAMEPLAY::IS_BIT_SET(iLocal_43, false) || iParam1)
		{
			_stop_screen_effect(sVar0);
			func_141(0, 1, 1);
			_set_cam_effect(0);
		}
		GAMEPLAY::CLEAR_BIT(&iLocal_43, false);
	}
}

auto func_153()
{
	func_154();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_154()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_158(Global_101154.f_1826.f_539.f_3549) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_157(PLAYER::PLAYER_PED_ID());
			if (func_156(iVar0) && (!func_155(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_156(Global_101154.f_1826.f_539.f_3549))
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

int func_155(int iParam0)
{
	return Global_35711 == iParam0;
}

int func_156(int iParam0)
{
	return iParam0 < 3;
}

int func_157(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_158(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_158(int iParam0)
{
	if (func_156(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_159(auto uParam0, auto uParam1, auto uParam2, char* sParam3, char* sParam4, auto uParam5, int iParam6)
{
	switch (*uParam0)
	{
		case 0:
			*uParam0 = 1;
			start_audio_scene("DEATH_SCENE");
			play_sound_frontend(-1, "ScreenFlash", "WastedSounds", 1);
			func_10(uParam0.f_1);
			func_150();
			func_164(uParam1, 0.15f * 0.075f, 0.5f);
			set_no_loading_screen(1);
			break;
		
		case 1:
			if (func_125() || is_screen_faded_out())
			{
				*uParam0 = 2;
			}
			if (!func_341(*uParam0.f_4, 4))
			{
				if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("OFFMISSION_WASTED", false))
				{
					play_sound_frontend(-1, "Bed", "WastedSounds", 1);
					func_313(uParam0.f_4, 4);
				}
			}
			if (IntToFloat(timera()) > 1500f * 0.2f)
			{
				if (!func_341(*uParam0.f_4, 2))
				{
					play_sound_frontend(-1, "TextHit", "WastedSounds", 1);
					func_313(uParam0.f_4, 2);
				}
				func_161(uParam2, uParam1, sParam3, sParam4, uParam5, iParam6 - 4 & iParam6 - 2 & iParam6 | 16, 7, 1, 1097859072, 0);
			}
			break;
		
		case 2:
			if (func_161(uParam2, uParam1, sParam3, sParam4, uParam5, iParam6 - 8 & iParam6 - 4 & iParam6 - 2 & iParam6, 7, 1, 1097859072, 1))
			{
				func_152(0, 1);
				func_151(0, 1);
				func_150();
				if (*uParam5)
				{
					ignore_next_restart(1);
				}
				else if (!*uParam0.f_5)
				{
					func_160(0);
				}
				set_no_loading_screen(0);
				_disable_automatic_respawn(0);
				*uParam0 = 3;
			}
			break;
		
		case 3:
			if (is_player_playing(player_id()))
			{
				set_fade_in_after_death_arrest(1);
				func_152(0, 1);
				func_151(0, 1);
				stop_audio_scene("DEATH_SCENE");
				set_no_loading_screen(0);
				return true;
			}
			break;
		
		case 4:
			set_no_loading_screen(0);
			return true;
			break;
	}
	return false;
}

void func_160(int iParam0)
{
	if ((Global_35711 == 9 || Global_35711 == 10) || Global_35711 == 5)
	{
		Global_99805 = iParam0;
		if (iParam0)
		{
		}
	}
	else
	{
		if (iParam0)
		{
		}
		Global_99805 = 0;
	}
}

bool func_161(auto uParam0, auto uParam1, char* sParam2, char* sParam3, auto uParam4, int iParam5, int iParam6, int iParam7, float fParam8, int iParam9)
{
	switch (*uParam1)
	{
		case 0:
			if (!is_screen_faded_out() || is_screen_fading_out())
			{
				do_screen_fade_out(2500);
				_0xEB2D525B57F42B40();
			}
			if (iParam9)
			{
				set_no_loading_screen(1);
			}
			set_time_scale(0.2f);
			if (func_148(iParam5, 4))
			{
				if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("generic_failed", false))
				{
					*uParam1 = 1;
				}
			}
			else
			{
				*uParam1 = 1;
			}
			break;
		
		case 1:
			_push_scaleform_movie_function(*uParam0, "SHOW_CENTERED_MP_MESSAGE_LARGE");
			_begin_text_component("STRING");
			_0x39BBF623FC803EAC(6);
			_add_text_component_item_string(sParam2);
			_end_text_component();
			func_146(sParam3);
			_push_scaleform_movie_function_parameter_int(100);
			_push_scaleform_movie_function_parameter_bool(true);
			_pop_scaleform_movie_function();
			if (func_148(iParam5, 32))
			{
				if (!*uParam1.f_136)
				{
					_push_scaleform_movie_function(*uParam0, "TRANSITION_UP");
					_push_scaleform_movie_function_parameter_float(*uParam1.f_134);
					_pop_scaleform_movie_function_void();
					*uParam1.f_136 = 1;
				}
			}
			if (!func_148(iParam5, 1))
			{
				disable_all_control_actions(0);
			}
			func_243(uParam1.f_10, 0, 1, 1, 1);
			func_242(uParam1.f_10, "IB_RETRY", 2, 201, 1, 1, 0);
			func_242(uParam1.f_10, "FE_HLP16", 2, 202, 1, 1, 0);
			if (func_148(iParam5, 4))
			{
				play_sound_frontend(-1, "ScreenFlash", "MissionFailedSounds", 1);
			}
			if (func_148(iParam5, 8))
			{
				switch (func_153())
				{
					case 0:
						_start_screen_effect("MinigameEndMichael", 500, 0);
						break;
					
					case 1:
						_start_screen_effect("MinigameEndFranklin", 500, 0);
						break;
					
					case 2:
						_start_screen_effect("MinigameEndTrevor", 500, 0);
						break;
					}
			}
			if (!func_3(uParam1.f_1))
			{
				func_342(uParam1.f_1);
			}
			if (func_148(iParam5, 2))
			{
				if (!func_3(uParam1.f_4))
				{
					func_342(uParam1.f_4);
				}
			}
			*uParam1 = 2;
			break;
		
		case 2:
			hide_loading_on_fade_this_frame();
			if (func_148(iParam5, 32))
			{
				if (!*uParam1.f_136)
				{
					_push_scaleform_movie_function(*uParam0, "TRANSITION_UP");
					_push_scaleform_movie_function_parameter_float(*uParam1.f_134);
					_pop_scaleform_movie_function_void();
					*uParam1.f_136 = 1;
				}
			}
			_set_2d_layer(iParam6);
			func_163(uParam0, 0, 0);
			if (!func_148(iParam5, 16) && (func_5(uParam1.f_1) >= *uParam1.f_135 || is_screen_faded_out()))
			{
				func_142(uParam1.f_10, 1128792064, iParam6, iParam7, 1, 1065353216);
				_show_cursor_this_frame();
				if (is_control_just_released(2, 201))
				{
					*uParam1.f_138 = 1;
					play_sound_frontend(-1, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_148(iParam5, 1))
					{
						enable_all_control_actions(0);
					}
					func_162(uParam1.f_10);
					*uParam1 = 3;
					return false;
				}
				else if (is_control_just_released(2, 202))
				{
					*uParam1.f_138 = 0;
					play_sound_frontend(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_148(iParam5, 1))
					{
						enable_all_control_actions(0);
					}
					func_162(uParam1.f_10);
					*uParam1 = 3;
					return false;
				}
			}
			if (func_148(iParam5, 2))
			{
				if (func_5(uParam1.f_4) >= fParam8)
				{
					*uParam1.f_138 = 0;
					play_sound_frontend(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_148(iParam5, 1))
					{
						enable_all_control_actions(0);
					}
					func_162(uParam1.f_10);
					*uParam1 = 3;
					return false;
				}
			}
			break;
		
		case 3:
			func_163(uParam0, 0, 0);
			set_time_scale(1f);
			if (*uParam1.f_138 || !((are_strings_equal("stunt_plane_races", get_this_script_name()) || are_strings_equal("pilot_school", get_this_script_name())) || (are_strings_equal("bj", get_this_script_name()) && PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))))
			{
				do_screen_fade_in(2500);
			}
			if (func_148(iParam5, 64) && *uParam1.f_138)
			{
				do_screen_fade_out(500);
			}
			func_11(uParam1.f_4);
			if (iParam9)
			{
				set_no_loading_screen(0);
			}
			*uParam1 = 4;
			break;
		
		case 4:
			if (func_5(uParam1.f_4) <= 0.1f)
			{
				func_163(uParam0, 0, 0);
			}
			else
			{
				*uParam4 = *uParam1.f_138;
				return true;
			}
			break;
	}
	return false;
}

void func_162(int iParam0)
{
	if (*iParam0 != 0)
	{
		set_scaleform_movie_as_no_longer_needed(iParam0);
		*iParam0 = 0;
	}
	*iParam0.f_1 = 0;
	*iParam0.f_123 = 0;
}

bool func_163(auto uParam0, int iParam1, int iParam2)
{
	if (!func_3(uParam0.f_2))
	{
		func_11(uParam0.f_2);
	}
	hide_hud_component_this_frame(14);
	if (!iParam2)
	{
		draw_scaleform_movie_fullscreen(*uParam0, 255, 255, 255, 255, 0);
	}
	else if (iParam2)
	{
		draw_scaleform_movie_fullscreen(*uParam0, 255, 255, 255, 255, 0);
	}
	if (iParam1)
	{
		if (is_control_pressed(2, 201))
		{
			return false;
		}
	}
	if (*uParam0.f_1 == -1)
	{
		return true;
	}
	if (func_5(uParam0.f_2) * 1000f > to_float(*uParam0.f_1))
	{
		func_4(uParam0.f_2);
		return false;
	}
	return true;
}

void func_164(auto uParam0, float fParam1, float fParam2)
{
	if (func_3(uParam0.f_1))
	{
		func_4(uParam0.f_1);
	}
	if (func_3(uParam0.f_4))
	{
		func_4(uParam0.f_4);
	}
	func_162(uParam0.f_10);
	*uParam0.f_134 = fParam1;
	*uParam0.f_135 = fParam2;
	*uParam0.f_137 = 1;
	*uParam0.f_136 = 0;
	*uParam0 = 0;
}

void func_165(auto uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0.f_12)
	{
		func_78(uParam0, iVar0);
		iVar0++;
	}
}

void func_166(int iParam0, int iParam1)
{
	switch (iLocal_2020)
	{
		case 0:
			func_25();
			func_183();
			func_179();
			iLocal_2020 = 1;
			break;
		
		case 1:
			if (func_178())
			{
				iLocal_2020 = 2;
			}
			break;
		
		case 2:
			func_167(iParam0);
			break;
		
		case 3:
			if (iParam1)
			{
				iLocal_2020 = 0;
			}
			break;
	}
}

void func_167(int iParam0)
{
	switch (Local_51.f_10)
	{
		case 3:
			func_177(iParam0);
			func_176(iParam0);
			break;
		
		case 0:
			func_175(iParam0);
			func_174(iParam0);
			break;
		
		case 1:
			func_173(iParam0);
			func_171(iParam0);
			break;
		
		case 2:
			func_170(iParam0);
			func_169(iParam0);
			break;
		
		case 4:
			func_168(iParam0);
			break;
	}
}

void func_168(int iParam0)
{
	if (iParam0 == 5)
	{
		if (!func_341(uLocal_2111, 1))
		{
			func_313(&uLocal_2111, 1);
		}
	}
	if (iParam0 == 12)
	{
		if (!func_341(uLocal_2111, 2))
		{
			func_313(&uLocal_2111, 2);
		}
	}
}

void func_169(int iParam0)
{
	if (iParam0 >= 4)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2089[0]) && !func_341(uLocal_2101, 1))
		{
			iLocal_2089[0] = create_vehicle(joaat("hauler"), -449.6041f, -2271.693f, 6.6086f, 267.5199f, 1, true);
			iLocal_2089[1] = create_vehicle(joaat("tanker"), -449.6041f, -2271.693f, 6.6086f, 267.5199f, 1, true);
			attach_vehicle_to_trailer(iLocal_2089[0], iLocal_2089[1], 1f);
			iLocal_2095[0] = PED::CREATE_PED_inside_vehicle(iLocal_2089[0], 4, joaat("s_m_m_dockwork_01"), -1, 1, true);
			func_313(&uLocal_2101, 1);
		}
		if (get_is_waypoint_recording_loaded("SPR_Fluff_01"))
		{
			if (!is_entity_dead(iLocal_2089[0], 0) && !is_entity_dead(iLocal_2095[0], 0))
			{
				if (get_script_task_status(iLocal_2095[0], -235832601) == 1)
				{
				}
				else
				{
					task_vehicle_follow_waypoint_recording(iLocal_2095[0], iLocal_2089[0], "SPR_Fluff_01", 786469, 0, 8, -1, _0x53AF99BAA671CA47(iLocal_2089[0]), 0, 2f);
				}
			}
		}
	}
}

void func_170(int iParam0)
{
	if (iParam0 == 4)
	{
		if (!func_341(uLocal_2111, 1))
		{
			func_313(&uLocal_2111, 1);
		}
	}
	if (iParam0 == 8)
	{
		if (!func_341(uLocal_2111, 2))
		{
			func_313(&uLocal_2111, 2);
		}
	}
}

void func_171(int iParam0)
{
	if (iParam0 >= 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2089[0]))
		{
			if (!func_341(uLocal_2101, 1))
			{
				if (func_172(&iLocal_2083))
				{
					iLocal_2089[0] = create_vehicle(joaat("sanchez"), -2586.901f, 386.4225f, 208.0505f, 349.0836f, 1, true);
					func_313(&uLocal_2101, 1);
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2089[0]))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2095[0]))
			{
				if (!func_341(uLocal_2101, 2))
				{
					iLocal_2095[0] = PED::CREATE_PED_inside_vehicle(iLocal_2089[0], 4, joaat("a_m_y_motox_01"), -1, 1, true);
					func_313(&uLocal_2101, 2);
				}
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2089[0]) && !ENTITY::DOES_ENTITY_EXIST(iLocal_2095[0]))
		{
			if (!is_entity_dead(iLocal_2089[0], 0) && !is_entity_dead(iLocal_2095[0], 0))
			{
				if (!is_entity_at_coord(iLocal_2089[0], -2530.873f, 608.701f, 238.9111f, 3f, 3f, 3f, false, true, 0))
				{
					if (get_script_task_status(iLocal_2095[0], -1817882002) == 1)
					{
					}
					else
					{
						task_vehicle_drive_to_coord(iLocal_2095[0], iLocal_2089[0], -2530.873f, 608.701f, 238.9111f, _0x53AF99BAA671CA47(iLocal_2089[0]), 0, false, 262144, -1f, -1f);
					}
				}
			}
		}
	}
	if (iParam0 >= 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2089[1]))
		{
			if (!func_341(uLocal_2102, 1))
			{
				if (func_172(&iLocal_2083))
				{
					iLocal_2089[1] = create_vehicle(joaat("sanchez"), -2582.93f, 384.918f, 208.5764f, 336.8248f, 1, true);
					func_313(&uLocal_2102, 1);
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2089[1]))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2095[1]))
			{
				if (!func_341(uLocal_2102, 2))
				{
					iLocal_2095[1] = PED::CREATE_PED_inside_vehicle(iLocal_2089[1], 4, joaat("a_m_y_motox_01"), -1, 1, true);
					func_313(&uLocal_2102, 2);
				}
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2089[1]) && !ENTITY::DOES_ENTITY_EXIST(iLocal_2095[1]))
		{
			if (!is_entity_dead(iLocal_2089[1], 0) && !is_entity_dead(iLocal_2095[1], 0))
			{
				if (!is_entity_at_coord(iLocal_2089[1], -2527.712f, 609.6833f, 239.2568f, 3f, 3f, 3f, false, true, 0))
				{
					if (get_script_task_status(iLocal_2095[1], -1817882002) == 1)
					{
					}
					else
					{
						task_vehicle_drive_to_coord(iLocal_2095[1], iLocal_2089[1], -2527.712f, 609.6833f, 239.2568f, _0x53AF99BAA671CA47(iLocal_2089[1]), 0, false, 262144, -1f, -1f);
					}
				}
			}
		}
	}
}

bool func_172(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (*iParam0[iVar0] != 0)
		{
			if (!STREAMING::HAS_MODEL_LOADED(*iParam0[iVar0]))
			{
				if (!STREAMING::HAS_MODEL_LOADED(*iParam0[iVar0]))
				{
				}
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

void func_173(int iParam0)
{
	if (iParam0 == 9)
	{
		if (!func_341(uLocal_2111, 1))
		{
			func_313(&uLocal_2111, 1);
		}
	}
	if (iParam0 == 12)
	{
		if (!func_341(uLocal_2111, 2))
		{
			func_313(&uLocal_2111, 2);
		}
	}
}

void func_174(int iParam0)
{
	if (iParam0 == 6)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2089[0]) && !func_341(uLocal_2101, 1))
		{
			iLocal_2089[0] = create_vehicle(joaat("jetmax"), -1429.102f, 2602.645f, -1.0709f, 85.2614f, 1, true);
			iLocal_2095[0] = PED::CREATE_PED_inside_vehicle(iLocal_2089[0], 4, joaat("s_m_m_dockwork_01"), -1, 1, true);
			if (!is_entity_dead(iLocal_2089[0], 0) && !is_entity_dead(iLocal_2095[0], 0))
			{
				if (!is_entity_at_coord(iLocal_2089[0], -1552.281f, 2641.609f, -0.8283f, 3f, 3f, 3f, false, true, 0))
				{
					if (get_script_task_status(iLocal_2095[0], -1273030092) == 1)
					{
					}
					else
					{
						task_vehicle_mission_coors_target(iLocal_2095[0], iLocal_2089[0], -1552.281f, 2641.609f, -0.8283f, 4, _0x53AF99BAA671CA47(iLocal_2089[0]), 262144, 3f, -1f, 1);
					}
				}
			}
			func_313(&uLocal_2101, 1);
		}
	}
	else if (iParam0 == 12)
	{
		if (func_341(uLocal_2101, 1))
		{
			if (!is_entity_dead(iLocal_2095[0], 0))
			{
				delete_ped(&(iLocal_2095[0]));
			}
			if (!is_entity_dead(iLocal_2089[0], 0))
			{
				delete_vehicle(&(iLocal_2089[0]));
			}
		}
	}
}

void func_175(int iParam0)
{
	if (iParam0 == 7)
	{
		if (!func_341(uLocal_2111, 1))
		{
			func_313(&uLocal_2111, 1);
		}
	}
	if (iParam0 == 11)
	{
		if (!func_341(uLocal_2111, 2))
		{
			func_313(&uLocal_2111, 2);
		}
	}
}

void func_176(int iParam0)
{
	if (!func_341(uLocal_2101, 1))
	{
		if (iParam0 < 3)
		{
			if (has_vehicle_recording_been_loaded(101, "SPRStuntAF"))
			{
				request_collision_at_coord(-943.8105f, -3173.692f, 12.9445f);
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2089[0]))
				{
					iLocal_2089[0] = create_vehicle(joaat("jet"), -943.8105f, -3173.692f, 12.9445f, 60.537f, 1, true);
					set_vehicle_on_ground_properly(iLocal_2089[0]);
					set_vehicle_engine_on(iLocal_2089[0], true, 1, 0);
					if (Local_51 == 0)
					{
						set_heli_blades_full_speed(iLocal_2089[0]);
					}
					iLocal_2095[0] = PED::CREATE_PED_inside_vehicle(iLocal_2089[0], 4, joaat("s_m_m_highsec_01"), -1, 1, true);
				}
				if (!is_entity_dead(iLocal_2089[0], 0))
				{
					if (is_entity_at_coord(iLocal_2089[0], -943.8105f, -3173.692f, 12.9445f, 20f, 20f, 20f, false, true, 0))
					{
						if (!is_playback_going_on_for_vehicle(iLocal_2089[0]))
						{
							start_playback_recorded_vehicle(iLocal_2089[0], 101, "SPRStuntAF", 1);
						}
					}
					else if (!is_playback_going_on_for_vehicle(iLocal_2089[0]))
					{
						if (!is_entity_dead(iLocal_2095[0], 0))
						{
							if (!get_script_task_status(iLocal_2095[0], -1817882002) == 1)
							{
								task_vehicle_drive_to_coord(iLocal_2095[0], iLocal_2089[0], -6793.876f, -557.0385f, 781.0172f, 50f, 0, joaat("jet"), 262144, -1f, -1f);
							}
						}
					}
				}
			}
		}
		else if (!is_entity_dead(iLocal_2089[0], 0))
		{
			if (is_playback_going_on_for_vehicle(iLocal_2089[0]))
			{
				stop_playback_recorded_vehicle(iLocal_2089[0]);
			}
			else
			{
				delete_vehicle(&(iLocal_2089[0]));
				func_313(&uLocal_2101, 1);
			}
		}
	}
	else if (!is_entity_dead(iLocal_2089[0], 0))
	{
		request_collision_at_coord(get_entity_coords(iLocal_2089[0], 1));
	}
}

void func_177(int iParam0)
{
	if (iParam0 == 6)
	{
		if (!func_341(uLocal_2111, 1))
		{
			func_313(&uLocal_2111, 1);
		}
	}
	if (iParam0 == 12)
	{
		if (!func_341(uLocal_2111, 2))
		{
			func_313(&uLocal_2111, 2);
		}
	}
}

bool func_178()
{
	switch (Local_51.f_10)
	{
		case 3:
			if (func_172(&iLocal_2083) && has_vehicle_recording_been_loaded(101, "SPRStuntAF"))
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		
		case 0:
			if (func_172(&iLocal_2083))
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		
		case 1:
			if (func_172(&iLocal_2083))
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		
		case 2:
			if (func_172(&iLocal_2083) && get_is_waypoint_recording_loaded("SPR_Fluff_01"))
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		
		case 4:
			break;
	}
	return true;
}

void func_179()
{
	switch (Local_51.f_10)
	{
		case 3:
			func_181(&iLocal_2083, joaat("jet"));
			func_181(&iLocal_2083, joaat("s_m_m_highsec_01"));
			request_vehicle_recording(101, "SPRStuntAF");
			break;
		
		case 0:
			func_181(&iLocal_2083, joaat("jetmax"));
			func_181(&iLocal_2083, joaat("s_m_m_dockwork_01"));
			break;
		
		case 1:
			func_181(&iLocal_2083, joaat("sanchez"));
			func_181(&iLocal_2083, joaat("a_m_y_motox_01"));
			break;
		
		case 2:
			func_181(&iLocal_2083, joaat("hauler"));
			func_181(&iLocal_2083, joaat("tanker"));
			func_181(&iLocal_2083, joaat("s_m_m_dockwork_01"));
			request_waypoint_recording("SPR_Fluff_01");
			break;
		
		case 4:
			break;
	}
	func_180(&iLocal_2083);
}

void func_180(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (*iParam0[iVar0] != 0)
		{
			STREAMING::REQUEST_MODEL(*iParam0[iVar0]);
		}
		iVar0++;
	}
}

bool func_181(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (*iParam0[iVar0] != 0)
		{
			if (*iParam0[iVar0] == iParam1)
			{
				return false;
			}
		}
		iVar0++;
	}
	iVar1 = func_182(iParam0);
	if (iVar1 < 0 || iVar1 >= *iParam0)
	{
		return false;
	}
	*iParam0[iVar1] = iParam1;
	return true;
}

int func_182(auto uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (*uParam0[iVar0] == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_183()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (func_341(uLocal_2111, iVar0))
		{
			func_339(&uLocal_2111, iVar0);
		}
		iVar0++;
	}
}

void func_184(auto uParam0, int iParam1)
{
	func_185(uParam0, iParam1, 0);
}

void func_185(auto uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (GAMEPLAY::IS_BIT_SET(Global_2460486.f_4429, 26))
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
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
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
		if (func_186(*uParam0.f_3))
		{
			clear_help(1);
		}
	}
	if (!is_string_null(sVar0))
	{
		if (func_186(sVar0))
		{
			clear_help(1);
		}
	}
}

int func_186(char* sParam0)
{
	_0x0A24DA3A41B718F5(sParam0);
	return _0x10BDDBFC529428DD(0);
}

void func_187(auto uParam0)
{
	Vector3 fVar0;
	
	if (*(uParam0.f_358[0 /*189*/]).f_11 >= *uParam0.f_12 - 2)
	{
		fVar0 = vdist(*(uParam0.f_27[*uParam0.f_12 - 2 /*10*/]), func_188());
		if (!_0x07C313F94746702C(iLocal_2333))
		{
			if (vdist2(get_entity_coords(PLAYER::PLAYER_PED_ID(), 1), func_188()) <= fVar0 * 1.5f * fVar0 * 1.5f)
			{
				iLocal_2333 = _0x1F3F018BC3AFA77C(func_188(), *(uParam0.f_27[*uParam0.f_12 - 1 /*10*/]) - func_188(), 2000f, 12, 127);
			}
		}
		else if (!vdist2(get_entity_coords(PLAYER::PLAYER_PED_ID(), 1), func_188()) <= fVar0 * 2f * fVar0 * 2f)
		{
			func_233();
		}
	}
}

Vector3 func_188()
{
	switch (Local_51.f_10)
	{
		case 0:
			return -2591.965f, 2483.167f, 60.8904f;
			break;
		
		case 1:
			return 1827.956f, 585.8948f, 287.6289f;
			break;
		
		case 2:
			return 991.1072f, -2389.983f, 83.3701f;
			break;
		
		case 3:
			return -1721.049f, -2792.948f, 75.4149f;
			break;
		
		case 4:
			return -578.6125f, 5436.721f, 150.1292f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_189(auto uParam0)
{
	if (func_215())
	{
		if (!Local_2320)
		{
			Local_2320 = 1;
			Local_2320.f_1 = 1;
		}
		else
		{
			Local_2320.f_1 = 0;
		}
	}
	else if (func_214())
	{
		if (!Local_2320.f_1 || func_213() >= 1f)
		{
			if (Local_2320)
			{
				Local_2320 = 0;
			}
		}
	}
	if (func_214())
	{
		func_212();
	}
	else
	{
		func_211();
	}
	if (Local_2320)
	{
		if (!func_210(Local_2320.f_2) && !func_208(Local_2320.f_2))
		{
			func_191(&uLocal_2293, Local_2320.f_2);
		}
		else
		{
			if (does_cam_exist(Local_2320.f_6))
			{
				destroy_cam(Local_2320.f_6, 0);
			}
			if (func_208(Local_2320.f_2))
			{
				Local_2320.f_2 = {func_190(uParam0)};
			}
			func_184(&uLocal_2293, 0);
			Local_2320 = 0;
		}
	}
	else if (does_cam_exist(Local_2320.f_6))
	{
		destroy_cam(Local_2320.f_6, 0);
	}
	else
	{
		if (func_208(Local_2320.f_2))
		{
			Local_2320.f_2 = {func_190(uParam0)};
		}
		func_184(&uLocal_2293, 0);
		Local_2320 = 0;
	}
}

Vector3 func_190(auto uParam0)
{
	if (*(uParam0.f_358[0 /*189*/]).f_11 < Local_51.f_11 - 1)
	{
		return *(uParam0.f_27[*(uParam0.f_358[0 /*189*/]).f_11 + 1 /*10*/]);
	}
	return 0f, 0f, 0f;
}

void func_191(auto uParam0, Vector3 vParam1)
{
	func_192(uParam0, vParam1, 0, 0, 1, 1, 1);
}

void func_192(auto uParam0, Vector3 vParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (!is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1))
	{
		func_185(uParam0, 0, 0);
	}
	*uParam0.f_6 = 2;
	func_193(uParam0, vParam1, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_193(auto uParam0, Vector3 vParam1, auto uParam2, int iParam3, int iParam4, auto uParam5, int iParam6)
{
	int iVar0;
	
	if (*uParam0.f_1 && is_gameplay_hint_active())
	{
		if (GAMEPLAY::GET_GAME_TIMER() >= *uParam0.f_8 + *uParam0.f_9)
		{
			*uParam0.f_1 = 0;
		}
	}
	iVar0 = uParam4;
	if (is_string_null(iVar0))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_186(iVar0))
	{
		func_207();
	}
	if (!is_gameplay_hint_active())
	{
		if (func_202(uParam0, iParam6, iParam8, 0))
		{
			func_201(uParam0, vParam1, iParam5);
		}
		if (*uParam0)
		{
			*uParam0 = 0;
		}
		else if (*uParam0.f_6 == 2)
		{
			if (func_198(iVar0))
			{
				if ((is_string_null(*uParam0.f_3) && !is_string_null(iVar0)) && is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
				{
					if ((is_sphere_visible(vParam1, 1f) && !is_help_message_being_displayed()) && uParam7)
					{
						if (!func_186(iVar0))
						{
							func_283(iVar0, -1);
							*uParam0.f_3 = iVar0;
							if (are_strings_equal("CMN_HINT", iVar0))
							{
								func_197(1);
							}
						}
					}
				}
			}
		}
		else if (func_198(iVar0))
		{
			if (is_string_null(*uParam0.f_3) && !is_string_null(iVar0))
			{
				if ((is_sphere_visible(vParam1, 1f) && !is_help_message_being_displayed()) && uParam7)
				{
					if (!func_186(iVar0))
					{
						func_283(iVar0, -1);
						*uParam0.f_3 = iVar0;
						if (are_strings_equal("CMN_HINT", iVar0))
						{
							func_197(1);
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
			if (func_186(iVar0) && is_help_message_being_displayed())
			{
				clear_help(1);
			}
		}
		if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1))
		{
			if (is_ped_in_any_boat(PLAYER::PLAYER_PED_ID()))
			{
				if (_0xEE778F8C7E1142E2(3) == 3 || _0xEE778F8C7E1142E2(3) == 4)
				{
					func_185(uParam0, iVar0, 1);
				}
			}
			else if (is_ped_in_any_heli(PLAYER::PLAYER_PED_ID()))
			{
				if (_0xEE778F8C7E1142E2(6) == 3 || _0xEE778F8C7E1142E2(6) == 4)
				{
					func_185(uParam0, iVar0, 1);
				}
			}
			else if (is_ped_in_any_plane(PLAYER::PLAYER_PED_ID()))
			{
				if (_0xEE778F8C7E1142E2(4) == 3 || _0xEE778F8C7E1142E2(4) == 4)
				{
					func_185(uParam0, iVar0, 1);
				}
			}
			else if (is_ped_in_any_sub(PLAYER::PLAYER_PED_ID()))
			{
				if (_0xEE778F8C7E1142E2(5) == 3 || _0xEE778F8C7E1142E2(5) == 4)
				{
					func_185(uParam0, iVar0, 1);
				}
			}
			else if (is_ped_on_any_bike(PLAYER::PLAYER_PED_ID()))
			{
				if (_0xEE778F8C7E1142E2(2) == 3 || _0xEE778F8C7E1142E2(2) == 4)
				{
					func_185(uParam0, iVar0, 1);
				}
			}
			else if (get_follow_vehicle_cam_view_mode() == 3 || get_follow_vehicle_cam_view_mode() == 4)
			{
				func_185(uParam0, iVar0, 1);
			}
		}
		if (!func_202(uParam0, iParam6, iParam8, 0))
		{
			if ((!*uParam0 && !*uParam0.f_1) && !func_196(uParam0))
			{
				func_194(uParam0);
			}
		}
	}
}

void func_194(auto uParam0)
{
	if (func_195(PLAYER::PLAYER_PED_ID()))
	{
		task_clear_look_at(PLAYER::PLAYER_PED_ID());
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

bool func_195(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
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
			if (!PED::IS_PED_INJURED(get_ped_index_from_entity_index(iParam0)))
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

bool func_196(auto uParam0)
{
	int iVar0;
	
	if (*uParam0.f_2 > 0)
	{
		iVar0 = *uParam0.f_10 / 2;
		if (*uParam0.f_2 + iVar0 > GAMEPLAY::GET_GAME_TIMER())
		{
			return true;
		}
	}
	return false;
}

int func_197(int iParam0)
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

bool func_198(char* sParam0)
{
	if (!func_199(1, 1, 0))
	{
		if ((!is_string_null_or_empty(sParam0) && func_186(sParam0)) || func_186("CMN_HINT"))
		{
			clear_help(1);
		}
		return false;
	}
	switch (Global_35711)
	{
		case 0:
		case 3:
			if (func_197(0) < 3)
			{
				return true;
			}
			break;
		
		case 4:
			if (func_197(0) < 1)
			{
				return true;
			}
			break;
		
		case 5:
		case 15:
			if (func_197(0) < 1)
			{
				return true;
			}
			break;
		
		default:
			break;
	}
	return false;
}

bool func_199(int iParam0, int iParam1, int iParam2)
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
	if (func_131(0))
	{
		return false;
	}
	if (func_200())
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
		if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1))
		{
			if (is_ped_in_any_boat(PLAYER::PLAYER_PED_ID()))
			{
				if (_0xEE778F8C7E1142E2(3) == 3 || _0xEE778F8C7E1142E2(3) == 4)
				{
					return false;
				}
			}
			else if (is_ped_in_any_heli(PLAYER::PLAYER_PED_ID()))
			{
				if (_0xEE778F8C7E1142E2(6) == 3 || _0xEE778F8C7E1142E2(6) == 4)
				{
					return false;
				}
			}
			else if (is_ped_in_any_plane(PLAYER::PLAYER_PED_ID()))
			{
				if (_0xEE778F8C7E1142E2(4) == 3 || _0xEE778F8C7E1142E2(4) == 4)
				{
					return false;
				}
			}
			else if (is_ped_in_any_sub(PLAYER::PLAYER_PED_ID()))
			{
				if (_0xEE778F8C7E1142E2(5) == 3 || _0xEE778F8C7E1142E2(5) == 4)
				{
					return false;
				}
			}
			else if (is_ped_on_any_bike(PLAYER::PLAYER_PED_ID()))
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

int func_200()
{
	return GAMEPLAY::GET_GAME_TIMER() <= Global_17257.f_5745 + 100;
}

void func_201(auto uParam0, Vector3 vParam1, int iParam2)
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
	task_look_at_coord(PLAYER::PLAYER_PED_ID(), vParam1, -1, iVar2, iVar3);
	_start_screen_effect("FocusIn", false, 0);
	start_audio_scene("HINT_CAM_SCENE");
	play_sound_frontend(-1, "FocusIn", "HintCamSounds", 1);
	*uParam0.f_11 = 1;
	*uParam0.f_8 = GAMEPLAY::GET_GAME_TIMER();
	*uParam0.f_1 = 1;
	*uParam0 = 0;
}

bool func_202(auto uParam0, int iParam1, int iParam2, int iParam3)
{
	if (*uParam0.f_1)
	{
		if (GAMEPLAY::GET_GAME_TIMER() >= *uParam0.f_8 + *uParam0.f_9)
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
				if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1))
				{
					if (func_206(iParam1, iParam2, iParam3))
					{
						*uParam0.f_4 = GAMEPLAY::GET_GAME_TIMER();
						*uParam0.f_5 = 1;
						*uParam0.f_7 = 1;
					}
				}
				else if (func_205(iParam1, iParam2, iParam3))
				{
					*uParam0.f_4 = GAMEPLAY::GET_GAME_TIMER();
					*uParam0.f_5 = 1;
					*uParam0.f_7 = 1;
				}
			}
			else if (*uParam0.f_6 == 1)
			{
				if (func_205(iParam1, iParam2, iParam3))
				{
					*uParam0.f_4 = GAMEPLAY::GET_GAME_TIMER();
					*uParam0.f_5 = 1;
					*uParam0.f_7 = 1;
				}
			}
			else if (*uParam0.f_6 == 2)
			{
				if (func_206(iParam1, iParam2, iParam3))
				{
					*uParam0.f_4 = GAMEPLAY::GET_GAME_TIMER();
					*uParam0.f_5 = 1;
					*uParam0.f_7 = 1;
				}
			}
			if (func_196(uParam0))
			{
				*uParam0.f_7 = 1;
				*uParam0.f_5 = 4;
			}
			break;
		
		case 1:
			if (GAMEPLAY::GET_GAME_TIMER() - *uParam0.f_4 <= 500)
			{
				if (*uParam0.f_6 == 0)
				{
					if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1))
					{
						if (!func_206(iParam1, iParam2, iParam3))
						{
							*uParam0.f_4 = GAMEPLAY::GET_GAME_TIMER();
							*uParam0.f_5 = 3;
						}
					}
					else if (!func_205(iParam1, iParam2, iParam3))
					{
						*uParam0.f_4 = GAMEPLAY::GET_GAME_TIMER();
						*uParam0.f_5 = 3;
					}
				}
				else if (*uParam0.f_6 == 1)
				{
					if (!func_205(iParam1, iParam2, iParam3))
					{
						*uParam0.f_4 = GAMEPLAY::GET_GAME_TIMER();
						*uParam0.f_5 = 3;
					}
				}
				else if (*uParam0.f_6 == 2)
				{
					if (!func_206(iParam1, iParam2, iParam3))
					{
						*uParam0.f_4 = GAMEPLAY::GET_GAME_TIMER();
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
				if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1))
				{
					if (!func_206(iParam1, iParam2, iParam3))
					{
						*uParam0.f_5 = 0;
					}
				}
				else if (!func_205(iParam1, iParam2, iParam3))
				{
					*uParam0.f_5 = 0;
				}
			}
			else if (*uParam0.f_6 == 1)
			{
				if (!func_205(iParam1, iParam2, iParam3) || is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1))
				{
					*uParam0.f_5 = 0;
				}
			}
			else if (*uParam0.f_6 == 2)
			{
				if (!is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1) || get_is_task_active(PLAYER::PLAYER_PED_ID(), 2))
				{
					*uParam0.f_5 = 0;
				}
				else if (!func_206(iParam1, iParam2, iParam3))
				{
					*uParam0.f_5 = 0;
				}
			}
			break;
		
		case 3:
			if (GAMEPLAY::GET_GAME_TIMER() - *uParam0.f_4 > 500)
			{
				if (*uParam0.f_6 == 0)
				{
					if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1))
					{
						if (func_204(iParam1, iParam2, iParam3))
						{
							*uParam0.f_5 = 0;
						}
					}
					else if (func_203(iParam1, iParam2, iParam3))
					{
						*uParam0.f_5 = 0;
					}
				}
				else if (*uParam0.f_6 == 1)
				{
					if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1) || func_203(iParam1, iParam2, iParam3))
					{
						*uParam0.f_5 = 0;
					}
				}
				else if (*uParam0.f_6 == 2)
				{
					if (!is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1) || get_is_task_active(PLAYER::PLAYER_PED_ID(), 2))
					{
						*uParam0.f_5 = 0;
					}
					else if (func_204(iParam1, iParam2, iParam3))
					{
						*uParam0.f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_196(uParam0))
			{
				*uParam0.f_5 = 0;
			}
			break;
	}
	if (!func_199(iParam1, iParam2, iParam3))
	{
		*uParam0.f_5 = 0;
		*uParam0.f_7 = 0;
	}
	if (*uParam0.f_7)
	{
		func_207();
		return true;
	}
	else
	{
		return false;
	}
	return false;
}

bool func_203(int iParam0, int iParam1, int iParam2)
{
	if (!func_199(iParam0, iParam1, iParam2))
	{
		return false;
	}
	if (!is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!is_player_targetting_anything(player_id()))
		{
			CONTROLS::DISABLE_CONTROL_ACTION(0, 140, 1);
			CONTROLS::DISABLE_CONTROL_ACTION(0, 80, 1);
			if (is_disabled_control_just_released(0, 80))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_204(int iParam0, int iParam1, int iParam2)
{
	if (!func_199(iParam0, iParam1, iParam2))
	{
		return false;
	}
	if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
	{
		CONTROLS::DISABLE_CONTROL_ACTION(0, 80, 1);
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

bool func_205(int iParam0, int iParam1, int iParam2)
{
	if (!func_199(iParam0, iParam1, iParam2))
	{
		return false;
	}
	if (!is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!is_player_targetting_anything(player_id()))
		{
			CONTROLS::DISABLE_CONTROL_ACTION(0, 140, 1);
			CONTROLS::DISABLE_CONTROL_ACTION(0, 80, 1);
			if (is_disabled_control_pressed(0, 80) && GAMEPLAY::GET_GAME_TIMER() > Global_116)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_206(int iParam0, int iParam1, int iParam2)
{
	if (!func_199(iParam0, iParam1, iParam2))
	{
		return false;
	}
	if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
	{
		CONTROLS::DISABLE_CONTROL_ACTION(0, 80, 1);
		if (is_follow_vehicle_cam_active())
		{
			if (is_disabled_control_pressed(0, 80) && GAMEPLAY::GET_GAME_TIMER() > Global_116)
			{
				set_cinematic_button_active(false);
				return true;
			}
		}
	}
	return false;
}

void func_207()
{
	GAMEPLAY::SET_BIT(&Global_2284, 4);
}

bool func_208(Vector3 vParam0)
{
	float fVar0;
	
	fVar0 = get_entity_speed(PLAYER::PLAYER_PED_ID());
	if (vdist2(vParam0, func_209(player_id())) < 150f + fVar0 * fVar0)
	{
		return true;
	}
	return false;
}

Vector3 func_209(int iParam0)
{
	return get_entity_coords(get_player_ped(iParam0), 0);
}

bool func_210(Vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_211()
{
	Local_2320.f_5 = 0f;
}

void func_212()
{
	Local_2320.f_5 += get_frame_time();
}

auto func_213()
{
	return Local_2320.f_5;
}

int func_214()
{
	return is_control_just_released(0, 80);
}

int func_215()
{
	return is_control_pressed(0, 80);
}

void func_216(Vector3 vParam0)
{
	func_184(&uLocal_2293, 0);
	Local_2320.f_2 = {vParam0};
}

void func_217(int iParam0, int iParam1)
{
	Global_91317.f_7 = iParam0;
	Global_91317.f_8 = iParam1;
}

void func_218(int iParam0)
{
	Global_69749 = iParam0;
	Global_69750 = iParam0;
}

bool func_219(auto uParam0, int iParam1, int iParam2)
{
	stop_pad_shake(0);
	switch (iLocal_2019)
	{
		case 0:
			iLocal_529 = 0;
			vLocal_2285 = {func_188()};
			vLocal_2288 = {func_232()};
			fLocal_2291 = func_231();
			display_radar(false);
			clear_help(1);
			clear_prints();
			iLocal_2019 = 1;
			break;
		
		case 1:
			if (is_player_playing(player_id()))
			{
				if (func_153() == 0)
				{
					_start_screen_effect("MinigameEndMichael", false, 0);
				}
				else if (func_153() == 1)
				{
					_start_screen_effect("MinigameEndFranklin", false, 0);
				}
				else if (func_153() == 2)
				{
					_start_screen_effect("MinigameEndTrevor", false, 0);
				}
				iLocal_2077 = create_camera_with_params(26379945, vLocal_2285, vLocal_2288, fLocal_2291, 1, 2);
				render_script_cams(true, false, 3000, 1, 0, 0);
				if (iParam2)
				{
					shake_cam(iLocal_2077, "HAND_SHAKE", 0.07f);
				}
				if (is_vehicle_driveable(*(uParam0.f_358[0 /*189*/]).f_9, 0) && is_entity_in_air(*(uParam0.f_358[0 /*189*/]).f_9))
				{
					task_vehicle_mission_coors_target(PLAYER::PLAYER_PED_ID(), *(uParam0.f_358[0 /*189*/]).f_9, vLocal_2285.x, vLocal_2285.y, vLocal_2285.z + 15f, 4, get_entity_speed(*(uParam0.f_358[0 /*189*/]).f_9), 262144, 10f, 10f, 1);
				}
				point_cam_at_coord(iLocal_2077, get_entity_coords(PLAYER::PLAYER_PED_ID(), 1));
				iLocal_2019 = 2;
			}
			break;
		
		case 2:
			stop_cam_pointing(iLocal_2077);
			func_230(iLocal_2077);
			func_10(&iLocal_2073);
			iLocal_2019 = 3;
			break;
		
		case 3:
			if (func_229(&iLocal_2073, fLocal_2292))
			{
				func_10(&iLocal_2073);
				func_230(iLocal_2077);
				iLocal_2019 = 4;
			}
			break;
		
		case 4:
			if (iParam1)
			{
				if (is_entity_on_screen(*(uParam0.f_358[0 /*189*/]).f_9) && is_entity_in_air(*(uParam0.f_358[0 /*189*/]).f_9))
				{
					vLocal_2282 = {get_entity_coords(*(uParam0.f_358[0 /*189*/]).f_9, 1)};
					func_10(&iLocal_2073);
				}
				func_226(iLocal_2077, vLocal_2282);
			}
			if (func_107(&iLocal_2073) >= 1f)
			{
				iLocal_2019 = 5;
			}
			break;
		
		case 5:
			func_11(&iLocal_2073);
			if (does_cam_exist(iLocal_2076))
			{
				destroy_cam(iLocal_2076, 0);
			}
			_start_screen_effect("MinigameTransitionIn", false, 1);
			stop_cam_shaking(iLocal_2077, 0);
			vLocal_2285 = {get_cam_coord(iLocal_2077)};
			vLocal_2288 = {get_cam_rot(iLocal_2077, 2)};
			iLocal_2076 = create_camera_with_params(26379945, vLocal_2285.x, vLocal_2285.y, vLocal_2285.z + 1000f, 90f, vLocal_2288.y, vLocal_2288.z, fLocal_2291, 0, 2);
			set_cam_active_with_interp(iLocal_2076, iLocal_2077, 500, 1, 1);
			play_sound_frontend(-1, "QUIT_WHOOSH", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_2019 = 6;
			break;
		
		case 6:
			if (!is_cam_interpolating(iLocal_2076) && !is_cam_interpolating(iLocal_2077))
			{
				if (*(uParam0.f_358[0 /*189*/]).f_13 <= Local_51.f_106[Local_51.f_10])
				{
					play_sound_frontend(-1, "MEDAL_GOLD", "HUD_AWARDS", 1);
				}
				else if (*(uParam0.f_358[0 /*189*/]).f_13 <= Local_51.f_106[Local_51.f_10] - Local_51.f_112[Local_51.f_10] / 2f + Local_51.f_112[Local_51.f_10])
				{
					play_sound_frontend(-1, "MEDAL_SILVER", "HUD_AWARDS", 1);
				}
				else if (*(uParam0.f_358[0 /*189*/]).f_13 <= Local_51.f_112[Local_51.f_10])
				{
					play_sound_frontend(-1, "MEDAL_BRONZE", "HUD_AWARDS", 1);
				}
				else
				{
					func_225(1);
				}
				iLocal_2019 = 7;
			}
			break;
		
		case 7:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				clear_player_wanted_level(player_id());
			}
			func_223(uParam0);
			func_66(&(Local_51.f_321), 1);
			func_11(&iLocal_2073);
			if (is_vehicle_driveable(*(uParam0.f_358[0 /*189*/]).f_9, 0))
			{
				sLocal_2277 = get_player_radio_station_name();
				set_vehicle_radio_enabled(*(uParam0.f_358[0 /*189*/]).f_9, 0);
			}
			iLocal_2019 = 8;
			break;
		
		case 8:
			if (func_222(uParam0))
			{
				iLocal_2019 = 9;
			}
			break;
		
		case 9:
			_start_screen_effect("MinigameTransitionOut", false, 0);
			func_221(&iLocal_2078);
			func_217(1, 0);
			func_220(uParam0);
			func_16();
			func_217(0, 0);
			iLocal_2019 = 0;
			return false;
			break;
	}
	func_411(uParam0, 0);
	return true;
}

int func_220(auto uParam0)
{
	if (*(uParam0.f_358[0 /*189*/]).f_13 <= Local_51.f_106[Local_51.f_10])
	{
		_set_notification_text_entry(&(Local_51.f_24[Local_51.f_10 /*8*/]));
		return _0xAA295B6F28BD587D("MPMedals_FEED", "Feed_Medal_FlightSchool", false, 109, "HUD_MED_UNLKED");
	}
	else if (*(uParam0.f_358[0 /*189*/]).f_13 <= Local_51.f_106[Local_51.f_10] - Local_51.f_112[Local_51.f_10] / 2f + Local_51.f_112[Local_51.f_10])
	{
		_set_notification_text_entry(&(Local_51.f_24[Local_51.f_10 /*8*/]));
		return _0xAA295B6F28BD587D("MPMedals_FEED", "Feed_Medal_FlightSchool", false, 108, "HUD_MED_UNLKED");
	}
	else if (*(uParam0.f_358[0 /*189*/]).f_13 <= Local_51.f_112[Local_51.f_10])
	{
		_set_notification_text_entry(&(Local_51.f_24[Local_51.f_10 /*8*/]));
		return _0xAA295B6F28BD587D("MPMedals_FEED", "Feed_Medal_FlightSchool", false, 107, "HUD_MED_UNLKED");
	}
	return -1;
}

void func_221(int iParam0)
{
	set_scaleform_movie_as_no_longer_needed(iParam0);
	*iParam0 = 0;
}

bool func_222(auto uParam0)
{
	float fVar0;
	
	fVar0 = 0f;
	if (!func_3(uParam0.f_17.f_2))
	{
		func_11(uParam0.f_17.f_2);
	}
	else
	{
		fVar0 = func_5(uParam0.f_17.f_2);
	}
	if (!iLocal_2038)
	{
		if (fVar0 > 1f)
		{
			iLocal_2038 = 1;
		}
	}
	if (!iLocal_2039)
	{
		if (fVar0 > 4.25f)
		{
			_push_scaleform_movie_function(*uParam0.f_17, "TRANSITION_OUT");
			_push_scaleform_movie_function_parameter_float(0.5f);
			_pop_scaleform_movie_function_void();
			iLocal_2039 = 1;
		}
	}
	draw_scaleform_movie_fullscreen(*uParam0.f_17, 255, 255, 255, 255, 0);
	if (fVar0 > 5f)
	{
		func_4(uParam0.f_17.f_2);
		iLocal_2038 = 0;
		iLocal_2039 = 0;
		return true;
	}
	return false;
}

void func_223(auto uParam0)
{
	char* sVar0;
	
	sVar0 = func_224(2);
	_push_scaleform_movie_function(*uParam0.f_17, "RESET_MOVIE");
	_pop_scaleform_movie_function_void();
	_push_scaleform_movie_function(*uParam0.f_17, sVar0);
	_begin_text_component("STRING");
	_add_text_component_item_string("SPR_UI_PASS");
	_end_text_component();
	_begin_text_component(&(Local_51.f_24[Local_51.f_10 /*8*/]));
	_end_text_component();
	_push_scaleform_movie_function_parameter_float(100f);
	_push_scaleform_movie_function_parameter_bool(true);
	_pop_scaleform_movie_function_void();
	*uParam0.f_17.f_1 = 5000;
	func_4(uParam0.f_17.f_2);
	iLocal_2038 = 0;
	iLocal_2039 = 0;
}

char* func_224(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SHOW_WASTED_MP_MESSAGE";
		
		case 1:
			return "SHOW_BUSTED_MP_MESSAGE";
		
		case 2:
			return "SHOW_CENTERED_MP_MESSAGE_LARGE";
		
		case 3:
			return "SHOW_CENTERED_TOP_MP_MESSAGE";
		
		case 4:
			return "SHOW_MIDSIZED_MESSAGE";
		
		case 5:
			return "SHOW_MISSION_END_MP_MESSAGE";
		
		case 6:
			return "SHOW_MISSION_PASSED_MESSAGE";
		
		case 7:
			return "SHOW_MISSION_FAILED_MP_MESSAGE";
		
		default:
	}
	return "SHOW_CENTERED_MP_MESSAGE_LARGE";
}

void func_225(int iParam0)
{
	char* sVar0;
	
	register_script_with_audio(0);
	switch (func_153())
	{
		case 0:
			if (iParam0)
			{
				sVar0 = "MICHAEL_SMALL_01";
			}
			else
			{
				sVar0 = "MICHAEL_BIG_01";
			}
			break;
		
		case 1:
			if (iParam0)
			{
				sVar0 = "FRANKLIN_SMALL_01";
			}
			else
			{
				sVar0 = "FRANKLIN_BIG_01";
			}
			break;
		
		case 2:
			if (iParam0)
			{
				sVar0 = "TREVOR_SMALL_01";
			}
			else
			{
				sVar0 = "TREVOR_BIG_01";
			}
			break;
	}
	play_mission_complete_audio(sVar0);
}

void func_226(int iParam0, Vector3 vParam1)
{
	float fVar0;
	Vector3 vVar1;
	Vector3 vVar4;
	Vector3 vVar7;
	Vector3 vVar10;
	Vector3 fVar13;
	Vector3 fVar14;
	float fVar15;
	float fVar16;
	
	if (!does_cam_exist(iParam0))
	{
		return;
	}
	if (!is_cam_active(iParam0))
	{
		return;
	}
	vVar1 = {get_cam_rot(iParam0, 2)};
	vVar4 = {get_cam_coord(iParam0)};
	vVar7 = {func_8(vVar1.x, vVar1.y, vVar1.z + 90f)};
	vVar10 = {vParam1 - vVar4};
	vVar10 = {func_96(vVar10)};
	fVar13 = atan2(vParam1.z - vVar4.z, get_distance_between_coords(vParam1, vVar4, 0));
	fVar14 = get_heading_from_vector_2d(vParam1.x - vVar4.x, vParam1.y - vVar4.y);
	fVar14 = func_228(fVar14, -180f, 180f);
	fVar0 = func_95(func_8(fVar13, vVar1.y, vVar1.z), vVar7);
	fVar15 = fVar13 - vVar1.x;
	if (fVar15 > 270f)
	{
		fVar15 -= 360f;
	}
	else if (fVar15 < -270f)
	{
		fVar15 += 360f;
	}
	fVar13 = vVar1.x + fVar15;
	if ((iLocal_2281 && fVar13 > vVar1.x) || (!iLocal_2281 && fVar13 < vVar1.x))
	{
		if (fVar0 > 0f)
		{
		}
		else if (fVar0 < 0f)
		{
		}
		fLocal_2278 *= 0.9f;
		vVar1.x = func_227(vVar1.x, fVar13, fLocal_2278);
	}
	fVar16 = fVar14 - vVar1.z;
	if (fVar16 > 270f)
	{
		fVar16 -= 360f;
	}
	else if (fVar16 < -270f)
	{
		fVar16 += 360f;
	}
	fVar14 = vVar1.z + fVar16;
	if ((iLocal_2280 && vVar1.z - fVar14 < 0f) || (!iLocal_2280 && vVar1.z - fVar14 > 0f))
	{
		if (!iLocal_2280 && vVar1.z - fVar14 > 0f)
		{
		}
		else if (iLocal_2280 && vVar1.z - fVar14 < 0f)
		{
		}
		fLocal_2279 *= 0.9f;
		vVar1.z = func_227(vVar1.z, fVar14, fLocal_2279);
	}
	set_cam_rot(iParam0, vVar1, 2);
}

float func_227(float fParam0, Vector3 fParam1, float fParam2)
{
	return 1f - fParam2 * fParam0 + fParam2 * fParam1;
}

float func_228(float fParam0, float fParam1, float fParam2)
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

bool func_229(int iParam0, Vector3 fParam1)
{
	if (func_2(iParam0, fParam1))
	{
		func_4(iParam0);
		return true;
	}
	return false;
}

void func_230(int iParam0)
{
	Vector3 vVar0;
	Vector3 vVar3;
	Vector3 vVar6;
	Vector3 vVar9;
	Vector3 vVar12;
	Vector3 vVar15;
	auto uVar18;
	Vector3 vVar21;
	Vector3 vVar24;
	float fVar27;
	auto uVar28;
	
	get_entity_matrix(PLAYER::PLAYER_PED_ID(), &vVar0, &uVar18, &uVar18, &vVar3);
	vVar15 = {get_cam_rot(iParam0, 2)};
	vVar12 = {get_cam_coord(iParam0)};
	vVar6 = {func_8(vVar15.x + 90f, vVar15.y, vVar15.z)};
	vVar9 = {func_8(vVar15.x, vVar15.y, vVar15.z + 90f)};
	fLocal_2278 = 0.2f;
	fLocal_2279 = 0.5f;
	vVar21 = {get_cam_coord(iParam0) - vVar3};
	vVar24 = {vVar3 + FtoV(func_95(vVar21, vVar0)) * vVar0};
	if (vVar24.z > vVar12.z)
	{
		iLocal_2281 = true;
	}
	else
	{
		iLocal_2281 = false;
	}
	fVar27 = func_95(vVar24, vVar6);
	uVar28 = func_95(vVar24, vVar9);
	if (fVar27 < 0f)
	{
		iLocal_2280 = true;
	}
	else
	{
		iLocal_2280 = false;
	}
}

float func_231()
{
	switch (Local_51.f_10)
	{
		case 0:
			return 46.9415f;
			break;
		
		case 1:
			return 37.9558f;
			break;
		
		case 2:
			return 48.4122f;
			break;
		
		case 3:
			return 35.2464f;
			break;
		
		case 4:
			return 42.5338f;
			break;
	}
	return 0f;
}

Vector3 func_232()
{
	switch (Local_51.f_10)
	{
		case 0:
			return -7.5758f, 0f, 148.5448f;
			break;
		
		case 1:
			return -1.0194f, 0.7478f, 23.0628f;
			break;
		
		case 2:
			return -5.3368f, 0.0006f, 158.257f;
			break;
		
		case 3:
			return -1.3523f, 0f, 0.0891f;
			break;
		
		case 4:
			return 18.1009f, -0.5992f, -103.0214f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_233()
{
	new_load_scene_stop();
	if (_0x07C313F94746702C(iLocal_2333))
	{
		_0x1EE7D8DF4425F053(iLocal_2333);
	}
}

void func_234()
{
	_0xEB2D525B57F42B40();
	func_235();
}

void func_235()
{
	Global_17118.f_134 = 1;
}

void func_236(int iParam0)
{
	if (Global_35711 == 9 || Global_35711 == 10)
	{
		Global_99806 = iParam0;
	}
	else
	{
		Global_99806 = 0;
	}
}

void func_237(int iParam0)
{
	set_cinematic_button_active(!iParam0);
}

void func_238()
{
	func_239();
	set_cinematic_button_active(true);
}

void func_239()
{
	Local_2320 = 0;
	Local_2320.f_1 = 0;
	Local_2320.f_2 = {0f, 0f, 0f};
	Local_2320.f_6 = 0;
	Local_2320.f_5 = 0f;
}

auto func_240(char* sParam0, int iParam1, char* sParam2)
{
	_0x853648FD1063A213(sParam0);
	if (iParam1 == 1)
	{
		_add_text_component_item_string(sParam2);
	}
	return _0x8A9BA1AB3E237613();
}

void func_241(auto uParam0, int iParam1)
{
	if (iParam1)
	{
		func_144(uParam0.f_1, 16);
	}
	else
	{
		func_143(uParam0.f_1, 16);
	}
}

bool func_242(auto uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (*uParam0 == 0)
	{
		return false;
	}
	iVar0 = 0;
	if (iParam5 == 1)
	{
		iVar0 = 1;
	}
	iVar1 = *uParam0.f_123;
	if (iVar1 < 8)
	{
		*uParam0.f_2[iVar1 /*15*/] = sParam1;
		*(uParam0.f_2[iVar1 /*15*/]).f_1 = iVar0;
		*(uParam0.f_2[iVar1 /*15*/]).f_2 = iParam6;
		*(uParam0.f_2[iVar1 /*15*/]).f_12 = 0;
		*(uParam0.f_2[iVar1 /*15*/]).f_13 = 0;
		*(uParam0.f_2[iVar1 /*15*/]).f_14 = 0;
		*(uParam0.f_2[iVar1 /*15*/].f_3)[0 /*2*/] = iParam2;
		*(uParam0.f_2[iVar1 /*15*/].f_3[0 /*2*/]).f_1 = iParam3;
		if (iParam4 == 1)
		{
			GAMEPLAY::SET_BIT(uParam0.f_2[iVar1 /*15*/].f_13, false);
		}
		*(uParam0.f_2[iVar1 /*15*/]).f_14++;
		*uParam0.f_123++;
		return true;
	}
	return false;
}

void func_243(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (*uParam0 == 0)
	{
		*uParam0 = request_scaleform_movie_instance("instructional_buttons");
	}
	*uParam0.f_1 = 0;
	*uParam0.f_123 = 0;
	if (iParam1)
	{
		func_144(uParam0.f_1, 32);
	}
	if (has_scaleform_movie_loaded(*uParam0))
	{
		func_144(uParam0.f_1, 1);
		if (iParam2)
		{
			set_scaleform_movie_to_use_system_time(*uParam0, 1);
		}
	}
	if (GAMEPLAY::IS_PC_VERSION())
	{
		if (iParam3)
		{
			func_144(uParam0.f_1, 4096);
		}
	}
	if (iParam4)
	{
		func_144(uParam0.f_1, 8192);
	}
}

void func_244(auto uParam0)
{
	func_245(uParam0);
	settimera(false);
	func_217(1, 0);
	func_16();
}

void func_245(auto uParam0)
{
	func_282(uParam0.f_1871);
	func_260(uParam0.f_1871.f_741);
	func_246(uParam0.f_1871);
}

void func_246(auto uParam0)
{
	func_259(uParam0.f_316[0 /*2*/], 254f, 74f, 1);
	func_259(uParam0.f_316[1 /*2*/], 257f + func_258(0.0047f, 1280, 1), 127f, 1);
	func_259(uParam0.f_316[2 /*2*/], 257f + func_258(0.0047f, 1280, 1), 297f, 1);
	func_259(uParam0.f_316[3 /*2*/], 257f + func_258(0.0047f, 1280, 1), 324f, 1);
	func_259(uParam0.f_316[4 /*2*/], 257f + func_258(0.0047f, 1280, 1), 351f, 1);
	func_259(uParam0.f_316[5 /*2*/], 257f + func_258(0.0047f, 1280, 1), 378f, 1);
	func_259(uParam0.f_316[6 /*2*/], 257f + func_258(0.0047f, 1280, 1), 405f, 1);
	func_259(uParam0.f_316[11 /*2*/], 257f, 297f, 1);
	func_259(uParam0.f_316[12 /*2*/], 257f, 324f, 1);
	func_259(uParam0.f_316[13 /*2*/], 257f, 351f, 1);
	func_259(uParam0.f_316[14 /*2*/], 257f, 378f, 1);
	func_259(uParam0.f_316[15 /*2*/], 257f, 405f, 1);
	func_259(uParam0.f_316[18 /*2*/], 298f, 567f, 1);
	func_259(uParam0.f_316[17 /*2*/], 384f, 567f, 1);
	func_259(uParam0.f_316[16 /*2*/], 470f, 567f, 1);
	func_255(uParam0[0 /*9*/], 208f, 55f, 864f, 570f, 1);
	func_254(uParam0[0 /*9*/], 0, 0, 0, 255);
	func_255(uParam0[2 /*9*/], 384f, 224f, 256f, 256f, 0);
	func_254(uParam0[2 /*9*/], 255, 255, 255, 255);
	func_255(uParam0[3 /*9*/], 495f, 306f, 32f, 32f, 0);
	func_254(uParam0[3 /*9*/], 255, 255, 255, 255);
	func_255(uParam0[6 /*9*/], 258.5f, 482.5f, 80f, 80f, 1);
	func_254(uParam0[6 /*9*/], 255, 255, 255, 255);
	func_255(uParam0[5 /*9*/], 344f, 482.5f, 80f, 80f, 1);
	func_254(uParam0[5 /*9*/], 255, 255, 255, 255);
	func_255(uParam0[4 /*9*/], 429.5f, 482.5f, 80f, 80f, 1);
	func_254(uParam0[4 /*9*/], 255, 255, 255, 255);
	func_249(uParam0.f_420[1 /*8*/], 257f, 119f, 254f, 5f, 1);
	func_248(uParam0.f_420[1 /*8*/], 70, 70, 130, 255);
	func_249(uParam0.f_420[0 /*8*/], 257f, 124f, 254f, 25f, 1);
	func_248(uParam0.f_420[0 /*8*/], 255, 255, 255, 255);
	func_249(uParam0.f_420[2 /*8*/], 257f, 159f, 254f, 133f, 1);
	func_247(uParam0.f_420[2 /*8*/], 117, 1);
	func_249(uParam0.f_420[3 /*8*/], 257f, 294f, 254f, 25f, 1);
	func_247(uParam0.f_420[3 /*8*/], 117, 1);
	func_249(uParam0.f_420[4 /*8*/], 257f, 321f, 254f, 25f, 1);
	func_247(uParam0.f_420[4 /*8*/], 117, 1);
	func_249(uParam0.f_420[5 /*8*/], 257f, 348f, 254f, 25f, 1);
	func_247(uParam0.f_420[5 /*8*/], 117, 1);
	func_249(uParam0.f_420[6 /*8*/], 257f, 375f, 254f, 25f, 1);
	func_247(uParam0.f_420[6 /*8*/], 117, 1);
	func_249(uParam0.f_420[7 /*8*/], 257f, 402f, 254f, 25f, 1);
	func_247(uParam0.f_420[7 /*8*/], 117, 1);
	func_249(uParam0.f_420[8 /*8*/], 257f, 429f, 254f, 52f, 1);
	func_247(uParam0.f_420[8 /*8*/], 117, 1);
	func_249(uParam0.f_420[11 /*8*/], 257f, 483f, 83f, 84f, 1);
	func_247(uParam0.f_420[11 /*8*/], 117, 1);
	func_249(uParam0.f_420[12 /*8*/], 342f, 483f, 84f, 84f, 1);
	func_247(uParam0.f_420[12 /*8*/], 117, 1);
	func_249(uParam0.f_420[13 /*8*/], 428f, 483f, 83f, 84f, 1);
	func_247(uParam0.f_420[13 /*8*/], 117, 1);
	func_249(uParam0.f_420[14 /*8*/], 428f, 564f, 83f, 25f, 1);
	func_247(uParam0.f_420[14 /*8*/], 107, 1);
	func_249(uParam0.f_420[15 /*8*/], 342f, 564f, 84f, 25f, 1);
	func_247(uParam0.f_420[15 /*8*/], 108, 1);
	func_249(uParam0.f_420[16 /*8*/], 257f, 564f, 83f, 25f, 1);
	func_247(uParam0.f_420[16 /*8*/], 109, 1);
	*uParam0.f_986 = 1;
}

void func_247(auto uParam0, int iParam1, int iParam2)
{
	auto uVar0;
	auto uVar1;
	auto uVar2;
	auto uVar3;
	
	get_hud_colour(iParam1, &uVar0, &uVar1, &uVar2, &uVar3);
	*uParam0.f_4 = uVar0;
	*uParam0.f_5 = uVar1;
	*uParam0.f_6 = uVar2;
	if (iParam2)
	{
		*uParam0.f_7 = uVar3;
	}
}

void func_248(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	*uParam0.f_4 = iParam1;
	*uParam0.f_5 = iParam2;
	*uParam0.f_6 = iParam3;
	*uParam0.f_7 = iParam4;
}

void func_249(auto uParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5)
{
	func_253(uParam0, fParam3, fParam4);
	func_250(uParam0, fParam1, fParam2, iParam5);
}

void func_250(auto uParam0, float fParam1, float fParam2, int iParam3)
{
	*uParam0 = func_252(fParam1, 1280);
	*uParam0.f_1 = func_251(fParam2, 720);
	if (iParam3)
	{
		*uParam0 += *uParam0.f_2 / 2f;
		*uParam0.f_1 += *uParam0.f_3 / 2f;
	}
}

float func_251(float fParam0, int iParam1)
{
	auto uVar0;
	
	if (iParam1 == 0)
	{
		get_screen_resolution(&uVar0, &iParam1);
	}
	return fParam0 / IntToFloat(iParam1);
}

float func_252(float fParam0, int iParam1)
{
	auto uVar0;
	
	if (iParam1 == 0)
	{
		get_screen_resolution(&iParam1, &uVar0);
	}
	return fParam0 / IntToFloat(iParam1);
}

void func_253(auto uParam0, float fParam1, float fParam2)
{
	*uParam0.f_2 = func_252(fParam1, 1280);
	*uParam0.f_3 = func_251(fParam2, 720);
}

void func_254(float fParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	*fParam0.f_4 = iParam1;
	*fParam0.f_5 = iParam2;
	*fParam0.f_6 = iParam3;
	*fParam0.f_7 = iParam4;
}

void func_255(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5)
{
	func_257(fParam0, fParam3, fParam4);
	func_256(fParam0, fParam1, fParam2, iParam5);
}

void func_256(auto uParam0, float fParam1, float fParam2, int iParam3)
{
	*uParam0 = func_252(fParam1, 1280);
	*uParam0.f_1 = func_251(fParam2, 720);
	if (iParam3)
	{
		*uParam0 += *uParam0.f_2 / 2f;
		*uParam0.f_1 += *uParam0.f_3 / 2f;
	}
}

void func_257(auto uParam0, float fParam1, float fParam2)
{
	*uParam0.f_2 = func_252(fParam1, 1280);
	*uParam0.f_3 = func_251(fParam2, 720);
}

auto func_258(float fParam0, int iParam1, int iParam2)
{
	auto uVar0;
	Vector3 fVar1;
	
	if (iParam1 == 0)
	{
		get_screen_resolution(&iParam1, &uVar0);
	}
	fVar1 = fParam0 * IntToFloat(iParam1);
	if (iParam2)
	{
		return to_float(round(fVar1));
	}
	return fVar1;
}

void func_259(auto uParam0, float fParam1, float fParam2, int iParam3)
{
	*uParam0 = func_252(fParam1, 1280);
	*uParam0.f_1 = func_251(fParam2, 720);
	if (!iParam3)
	{
	}
}

void func_260(auto uParam0)
{
	func_281(uParam0, 0);
	func_280(uParam0.f_11, 0);
	func_279(uParam0.f_66, 0);
	func_278(uParam0.f_77, 0);
	func_277(uParam0.f_33, 0);
	func_276(uParam0.f_44, 0);
	func_275(uParam0.f_55, 0);
	func_274(uParam0.f_143, 0);
	func_273(uParam0.f_22, 0);
	func_272(uParam0.f_154, 0);
	func_271(uParam0.f_88, 0, 0);
	func_270(uParam0.f_99, 0, 5);
	func_269(uParam0.f_110, 0);
	func_268(uParam0.f_121, 0);
	func_267(uParam0.f_132, 0);
	func_266(uParam0.f_165, 0);
	func_265(uParam0.f_176, 0);
	func_264(uParam0.f_187, 0);
	func_263(uParam0.f_198, 0);
	func_262(uParam0.f_209, 0);
	func_261(uParam0.f_220, 0);
}

void func_261(auto uParam0, int iParam1)
{
	*uParam0 = 4;
	*uParam0.f_1 = 0.45f;
	*uParam0.f_2 = 0.45f;
	*uParam0.f_3 = 0;
	*uParam0.f_4 = 0;
	*uParam0.f_5 = 0;
	*uParam0.f_6 = 255;
	*uParam0.f_7 = iParam1;
	*uParam0.f_8 = 0f;
	*uParam0.f_9 = 0f;
	*uParam0.f_10 = 29;
}

void func_262(auto uParam0, int iParam1)
{
	*uParam0 = 0;
	*uParam0.f_1 = 0.275f;
	*uParam0.f_2 = 0.275f;
	*uParam0.f_3 = 0;
	*uParam0.f_4 = 0;
	*uParam0.f_5 = 0;
	*uParam0.f_6 = 255;
	*uParam0.f_7 = iParam1;
	*uParam0.f_8 = 0f;
	*uParam0.f_9 = 0f;
	*uParam0.f_10 = 28;
}

void func_263(auto uParam0, int iParam1)
{
	*uParam0 = 0;
	*uParam0.f_1 = 0.3375f;
	*uParam0.f_2 = 0.3375f;
	*uParam0.f_3 = 0;
	*uParam0.f_4 = 0;
	*uParam0.f_5 = 0;
	*uParam0.f_6 = 255;
	*uParam0.f_7 = iParam1;
	*uParam0.f_8 = 0f;
	*uParam0.f_9 = 0f;
	*uParam0.f_10 = 27;
}

void func_264(auto uParam0, int iParam1)
{
	*uParam0 = 0;
	*uParam0.f_1 = 0.35f;
	*uParam0.f_2 = 0.35f;
	*uParam0.f_3 = 0;
	*uParam0.f_4 = 0;
	*uParam0.f_5 = 0;
	*uParam0.f_6 = 255;
	*uParam0.f_7 = iParam1;
	*uParam0.f_8 = 0f;
	*uParam0.f_9 = 0f;
	*uParam0.f_10 = 26;
}

void func_265(auto uParam0, int iParam1)
{
	*uParam0 = 0;
	*uParam0.f_1 = 0.325f;
	*uParam0.f_2 = 0.325f;
	*uParam0.f_3 = 0;
	*uParam0.f_4 = 0;
	*uParam0.f_5 = 0;
	*uParam0.f_6 = 255;
	*uParam0.f_7 = iParam1;
	*uParam0.f_8 = 0f;
	*uParam0.f_9 = 0f;
	*uParam0.f_10 = 25;
}

void func_266(auto uParam0, int iParam1)
{
	*uParam0 = 0;
	*uParam0.f_1 = 0.6f;
	*uParam0.f_2 = 0.6f;
	*uParam0.f_3 = 255;
	*uParam0.f_4 = 255;
	*uParam0.f_5 = 255;
	*uParam0.f_6 = 255;
	*uParam0.f_7 = iParam1;
	*uParam0.f_8 = 0f;
	*uParam0.f_9 = 0f;
	*uParam0.f_10 = 24;
}

void func_267(auto uParam0, int iParam1)
{
	*uParam0 = 0;
	*uParam0.f_1 = 0.332f;
	*uParam0.f_2 = 0.315f + 0.183f;
	*uParam0.f_3 = 255;
	*uParam0.f_4 = 255;
	*uParam0.f_5 = 255;
	*uParam0.f_6 = 255;
	*uParam0.f_7 = iParam1;
	*uParam0.f_8 = 0f;
	*uParam0.f_9 = 0f;
	*uParam0.f_10 = 15;
}

void func_268(auto uParam0, int iParam1)
{
	*uParam0 = 0;
	*uParam0.f_1 = 0.332f;
	*uParam0.f_2 = 0.5f + 0.004f;
	*uParam0.f_3 = 255;
	*uParam0.f_4 = 255;
	*uParam0.f_5 = 255;
	*uParam0.f_6 = 255;
	*uParam0.f_7 = iParam1;
	*uParam0.f_8 = 0f;
	*uParam0.f_9 = 0f;
	*uParam0.f_10 = 13;
}

void func_269(auto uParam0, int iParam1)
{
	*uParam0 = 5;
	*uParam0.f_1 = 0.332f;
	*uParam0.f_2 = 0.628f - 0.18f - 0.058f;
	*uParam0.f_3 = 255;
	*uParam0.f_4 = 255;
	*uParam0.f_5 = 255;
	*uParam0.f_6 = 255;
	*uParam0.f_7 = iParam1;
	*uParam0.f_8 = 0f;
	*uParam0.f_9 = 0f;
	*uParam0.f_10 = 12;
}

void func_270(auto uParam0, int iParam1, int iParam2)
{
	*uParam0 = iParam2;
	*uParam0.f_1 = 0.332f;
	*uParam0.f_2 = 0.889f - 0.01f;
	*uParam0.f_3 = 255;
	*uParam0.f_4 = 255;
	*uParam0.f_5 = 255;
	*uParam0.f_6 = 255;
	*uParam0.f_7 = iParam1;
	*uParam0.f_8 = 0f;
	*uParam0.f_9 = 0f;
	*uParam0.f_10 = 10;
}

void func_271(auto uParam0, int iParam1, int iParam2)
{
	*uParam0 = iParam2;
	*uParam0.f_1 = 0.332f;
	*uParam0.f_2 = 0.469f + 0.096f - 0.017f + 0.022f - 0.062f - 0.001f - 0.013f;
	*uParam0.f_3 = 255;
	*uParam0.f_4 = 255;
	*uParam0.f_5 = 255;
	*uParam0.f_6 = 255;
	*uParam0.f_7 = iParam1;
	*uParam0.f_8 = 0f;
	*uParam0.f_9 = 0f;
	*uParam0.f_10 = 9;
}

void func_272(auto uParam0, int iParam1)
{
	*uParam0 = 0;
	*uParam0.f_1 = 0.202f;
	*uParam0.f_2 = 0.288f;
	*uParam0.f_3 = 255;
	*uParam0.f_4 = 255;
	*uParam0.f_5 = 255;
	*uParam0.f_6 = 255;
	*uParam0.f_7 = iParam1;
	*uParam0.f_8 = 0f;
	*uParam0.f_9 = 0f;
	*uParam0.f_10 = 23;
}

void func_273(auto uParam0, int iParam1)
{
	*uParam0 = 0;
	*uParam0.f_1 = 0.202f;
	*uParam0.f_2 = 0.383f;
	*uParam0.f_3 = 255;
	*uParam0.f_4 = 255;
	*uParam0.f_5 = 255;
	*uParam0.f_6 = 255;
	*uParam0.f_7 = iParam1;
	*uParam0.f_8 = 0f;
	*uParam0.f_9 = 0f;
	*uParam0.f_10 = 2;
}

void func_274(auto uParam0, int iParam1)
{
	*uParam0 = 0;
	*uParam0.f_1 = 0.202f;
	*uParam0.f_2 = 0.368f;
	*uParam0.f_3 = 255;
	*uParam0.f_4 = 255;
	*uParam0.f_5 = 255;
	*uParam0.f_6 = 255;
	*uParam0.f_7 = iParam1;
	*uParam0.f_8 = 0f;
	*uParam0.f_9 = 0f;
	*uParam0.f_10 = 22;
}

void func_275(auto uParam0, int iParam1)
{
	*uParam0 = 4;
	*uParam0.f_1 = 0.202f;
	*uParam0.f_2 = 0.485f;
	*uParam0.f_3 = 255;
	*uParam0.f_4 = 255;
	*uParam0.f_5 = 255;
	*uParam0.f_6 = 255;
	*uParam0.f_7 = iParam1;
	*uParam0.f_8 = 0f;
	*uParam0.f_9 = 0f;
	*uParam0.f_10 = 5;
}

void func_276(auto uParam0, int iParam1)
{
	*uParam0 = 0;
	*uParam0.f_1 = 0.202f;
	*uParam0.f_2 = 0.35f;
	*uParam0.f_3 = 255;
	*uParam0.f_4 = 255;
	*uParam0.f_5 = 255;
	*uParam0.f_6 = 255;
	*uParam0.f_7 = iParam1;
	*uParam0.f_8 = 0f;
	*uParam0.f_9 = 0f;
	*uParam0.f_10 = 4;
}

void func_277(auto uParam0, int iParam1)
{
	*uParam0 = 0;
	*uParam0.f_1 = 0.202f;
	*uParam0.f_2 = 0.409f;
	*uParam0.f_3 = 255;
	*uParam0.f_4 = 255;
	*uParam0.f_5 = 255;
	*uParam0.f_6 = 255;
	*uParam0.f_7 = iParam1;
	*uParam0.f_8 = 0f;
	*uParam0.f_9 = 0f;
	*uParam0.f_10 = 3;
}

void func_278(auto uParam0, int iParam1)
{
	*uParam0 = 0;
	*uParam0.f_1 = 0.332f;
	*uParam0.f_2 = 0.655f;
	*uParam0.f_3 = 255;
	*uParam0.f_4 = 255;
	*uParam0.f_5 = 255;
	*uParam0.f_6 = 255;
	*uParam0.f_7 = iParam1;
	*uParam0.f_8 = 0f;
	*uParam0.f_9 = 0f;
	*uParam0.f_10 = 8;
}

void func_279(auto uParam0, int iParam1)
{
	*uParam0 = 0;
	*uParam0.f_1 = 0.332f;
	*uParam0.f_2 = 0.628f;
	*uParam0.f_3 = 255;
	*uParam0.f_4 = 255;
	*uParam0.f_5 = 255;
	*uParam0.f_6 = 255;
	*uParam0.f_7 = iParam1;
	*uParam0.f_8 = 0f;
	*uParam0.f_9 = 0f;
	*uParam0.f_10 = 7;
}

void func_280(auto uParam0, int iParam1)
{
	*uParam0 = 0;
	*uParam0.f_1 = 0.202f;
	*uParam0.f_2 = 0.346f;
	*uParam0.f_3 = 255;
	*uParam0.f_4 = 255;
	*uParam0.f_5 = 255;
	*uParam0.f_6 = 255;
	*uParam0.f_7 = iParam1;
	*uParam0.f_8 = 0f;
	*uParam0.f_9 = 0f;
	*uParam0.f_10 = 1;
}

void func_281(auto uParam0, int iParam1)
{
	*uParam0 = 0;
	*uParam0.f_1 = 0.202f;
	*uParam0.f_2 = 0.781f;
	*uParam0.f_3 = 255;
	*uParam0.f_4 = 255;
	*uParam0.f_5 = 255;
	*uParam0.f_6 = 255;
	*uParam0.f_7 = iParam1;
	*uParam0.f_8 = 0f;
	*uParam0.f_9 = 0f;
	*uParam0.f_10 = 0;
}

void func_282(auto uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		*uParam0[iVar0 /*9*/] = 0f;
		*(uParam0[iVar0 /*9*/]).f_1 = 0f;
		*(uParam0[iVar0 /*9*/]).f_2 = 0f;
		*(uParam0[iVar0 /*9*/]).f_3 = 0f;
		*(uParam0[iVar0 /*9*/]).f_4 = 0;
		*(uParam0[iVar0 /*9*/]).f_5 = 0;
		*(uParam0[iVar0 /*9*/]).f_6 = 0;
		*(uParam0[iVar0 /*9*/]).f_7 = 0;
		*(uParam0[iVar0 /*9*/]).f_8 = 0f;
		iVar0++;
	}
}

void func_283(char* sParam0, int iParam1)
{
	_set_text_component_format(sParam0);
	_display_help_text_from_string_label(0, 0, true, iParam1);
}

bool func_284(int iParam0)
{
	func_288();
	switch (iLocal_2332)
	{
		case 0:
			func_10(iParam0);
			func_287(&iLocal_2327, 3);
			iLocal_2332 = 1;
			break;
		
		case 1:
			if (func_2(iParam0, 1f))
			{
				func_285(&iLocal_2327, 1, 0, 1, 3, 1, 0);
				iLocal_2332 = 2;
			}
			break;
		
		case 2:
			if (func_285(&iLocal_2327, 0, 0, 1, 3, 1, 0))
			{
				return false;
			}
			break;
			return true;
	}
	return true;
}

bool func_285(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	auto uVar9;
	
	if (!func_3(uParam0.f_2))
	{
		func_11(uParam0.f_2);
	}
	_set_2d_layer(1);
	draw_scaleform_movie(*uParam0, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 100, 0);
	if (iParam4 > 3)
	{
		iParam4 = 3;
	}
	else if (iParam4 < 0)
	{
		iParam4 = 0;
	}
	if (iParam5)
	{
		sVar0 = "3_2_1";
		sVar1 = "GO";
		sVar2 = "HUD_MINI_GAME_SOUNDSET";
	}
	else
	{
		sVar0 = "3_2_1";
		sVar1 = "GO";
		sVar2 = "321_GO_LOW_VOL_SOUNDSET";
	}
	iVar3 = floor(func_5(uParam0.f_2));
	iVar4 = iVar3 - iParam4;
	iVar5 = false;
	if (!func_341(*uParam0.f_1, 8))
	{
		if (iVar4 >= -3 && !func_341(*uParam0.f_1, 1))
		{
			func_313(uParam0.f_1, 1);
			play_sound_frontend(-1, sVar0, sVar2, 1);
			func_287(uParam0, iVar4);
		}
		else if (iVar4 >= -2 && !func_341(*uParam0.f_1, 2))
		{
			func_313(uParam0.f_1, 2);
			play_sound_frontend(-1, sVar0, sVar2, 1);
			func_287(uParam0, iVar4);
		}
		else if (iVar4 >= -1 && !func_341(*uParam0.f_1, 4))
		{
			func_313(uParam0.f_1, 4);
			play_sound_frontend(-1, sVar0, sVar2, 1);
			func_287(uParam0, iVar4);
		}
		else if (iVar4 >= -1 && !func_341(*uParam0.f_1, 16))
		{
			if (absf(func_5(uParam0.f_2) - IntToFloat(iParam4)) < 0.65f)
			{
				if (iParam5 || iParam6)
				{
					func_313(uParam0.f_1, 16);
					play_sound_frontend(-1, sVar1, sVar2, 1);
				}
			}
		}
		else if (iVar4 >= 0 && !func_341(*uParam0.f_1, 8))
		{
			if (!iParam5 && !iParam6)
			{
				play_sound_frontend(-1, sVar1, sVar2, 1);
			}
			func_313(uParam0.f_1, 8);
			get_hud_colour(18, &iVar6, &iVar7, &iVar8, &uVar9);
			_push_scaleform_movie_function(*uParam0, "SET_MESSAGE");
			func_146("CNTDWN_GO");
			_push_scaleform_movie_function_parameter_int(iVar6);
			_push_scaleform_movie_function_parameter_int(iVar7);
			_push_scaleform_movie_function_parameter_int(iVar8);
			_push_scaleform_movie_function_parameter_bool(true);
			_pop_scaleform_movie_function_void();
			if (!iParam1)
			{
				iVar5 = true;
			}
		}
	}
	else if (iVar4 == 1)
	{
		iVar5 = true;
	}
	if ((iParam2 && func_286()) || iVar3 > 5)
	{
		iVar5 = true;
	}
	if (iVar5)
	{
		if (iParam3)
		{
			*uParam0.f_1 = 0;
			func_4(uParam0.f_2);
		}
		return true;
	}
	return false;
}

bool func_286()
{
	if (is_pause_menu_active())
	{
		return false;
	}
	if (is_control_pressed(0, 18) || is_control_pressed(2, 18))
	{
		return true;
	}
	return false;
}

void func_287(auto uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	auto uVar3;
	
	get_hud_colour(12, &iVar0, &iVar1, &iVar2, &uVar3);
	_push_scaleform_movie_function(*uParam0, "SET_MESSAGE");
	_0x39BBF623FC803EAC(-1);
	_begin_text_component("NUMBER");
	add_text_component_integer(absi(iParam1));
	_end_text_component();
	_push_scaleform_movie_function_parameter_int(iVar0);
	_push_scaleform_movie_function_parameter_int(iVar1);
	_push_scaleform_movie_function_parameter_int(iVar2);
	_push_scaleform_movie_function_parameter_bool(true);
	_pop_scaleform_movie_function_void();
}

void func_288()
{
	struct<6> Var0;
	int iVar6;
	
	iVar6 = Global_100184;
	func_289(Var0, 0, 0, 0, 0, iVar6);
}

void func_289(struct<6> Param0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<2> Var4;
	float fVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	auto uVar11;
	int iVar12;
	
	if (Global_69743 != 6)
	{
		if (Global_69745 == -1)
		{
			if (func_303(1, Param0))
			{
				if (Global_69746 == 3)
				{
					fVar0 = 1.5f;
				}
				else
				{
					fVar0 = 2.5f;
				}
				if (fLocal_29 > fVar0)
				{
					Global_69745 = GAMEPLAY::GET_GAME_TIMER();
					vLocal_30 = {get_hud_component_position(15)};
					fLocal_29 = 0f;
				}
				else
				{
					fLocal_29 += get_frame_time();
				}
			}
			else
			{
				fLocal_29 = 0f;
			}
		}
		else
		{
			if (!func_303(0, Param0))
			{
				Global_69745 = GAMEPLAY::GET_GAME_TIMER() - 9000;
			}
			hide_hud_component_this_frame(7);
			hide_hud_component_this_frame(6);
			hide_hud_component_this_frame(8);
			hide_hud_component_this_frame(9);
			iVar1 = GAMEPLAY::GET_GAME_TIMER() - Global_69745;
			if (iVar1 < 9000 && !is_screen_faded_out())
			{
				iVar2 = 255;
				if (iVar1 < 1000)
				{
					iVar2 = ceil(to_float(iVar1) / 1000f * 255f);
				}
				else
				{
					iVar3 = 9000 - iVar1;
					if (iVar3 < 1000)
					{
						iVar2 = ceil(to_float(iVar3) / 1000f * 255f);
					}
				}
				switch (Global_69743)
				{
					case 3:
					case 5:
						if (iParam6 == 1)
						{
							fVar6 = 0f;
							fVar7 = -0.07f;
						}
						else if (iParam7 == 1)
						{
							fVar6 = 0f;
							fVar7 = -0.077f;
						}
						else if (iParam8 == 1)
						{
							fVar6 = 0f;
							fVar7 = -0.05f;
						}
						else if (iParam9 == 1)
						{
							fVar6 = 0f;
							fVar7 = -0.035f;
						}
						else
						{
							fVar6 = 0f;
							fVar7 = -0.014f;
						}
						break;
					
					default:
						fVar6 = 0f;
						fVar7 = -0.014f;
						break;
				}
				_set_screen_draw_position(82, 66);
				set_text_font(1);
				set_text_justification(2);
				iVar12 = func_153();
				if (Global_69746 == 1 && Global_69744 == 62)
				{
					iVar12 = Global_101154.f_1826.f_539.f_3550;
				}
				switch (iVar12)
				{
					case 0:
						get_hud_colour(143, &iVar8, &iVar9, &iVar10, &uVar11);
						break;
					
					case 1:
						get_hud_colour(144, &iVar8, &iVar9, &iVar10, &uVar11);
						break;
					
					case 2:
						get_hud_colour(145, &iVar8, &iVar9, &iVar10, &uVar11);
						break;
					
					default:
						iVar8 = 240;
						iVar9 = 200;
						iVar10 = 80;
				}
				set_text_colour(iVar8, iVar9, iVar10, iVar2);
				set_text_drop_shadow();
				Var4 = {func_292(Global_69744, Global_69746, iParam10)};
				if (fVar7 == -0.014f)
				{
				}
				_0xF5A2C681787E579D(fVar6, fVar7, 0f, 0.01f);
				set_text_scale(0.67f, 0.67f);
				if (!get_is_widescreen() && !get_is_hidef())
				{
					fLocal_34 = 0.14f;
				}
				else
				{
					fLocal_34 = 0.17f;
				}
				if (fVar7 == -0.014f)
				{
					if (func_291(&Var4) > fLocal_34)
					{
						if (is_hud_component_active(15))
						{
							set_hud_component_position(15, vLocal_30.x, vLocal_30.y + fLocal_33);
							Global_69748 = 1;
						}
					}
				}
				_set_text_entry(&Var4);
				_draw_text(fVar6, fVar7, 0);
				_0xE3A3DB414A373DAB();
				if (Global_69747 == 1)
				{
					func_290();
					fLocal_29 = 0f;
				}
			}
			else
			{
				func_290();
				fLocal_29 = 0f;
			}
		}
	}
}

void func_290()
{
	if (Global_69743 != 6)
	{
	}
	if (Global_69748)
	{
		reset_hud_component_values(15);
		Global_69748 = 0;
		Global_17257.f_7862 = 0;
	}
	Global_69743 = 6;
	Global_69745 = -1;
	Global_69744 = -1;
}

float func_291(char* sParam0)
{
	_set_text_entry_for_width(sParam0);
	return _get_text_screen_width(1);
}

struct<2> func_292(int iParam0, int iParam1, int iParam2)
{
	char[8] cVar0;
	int iVar2;
	
	StringCopy(&cVar0, "", 8);
	switch (iParam1)
	{
		case 1:
			cVar0 = {func_302(iParam0)};
			break;
		
		case 7:
			cVar0 = {func_300(iParam0)};
			break;
		
		case 3:
			iVar2 = iParam0;
			switch (iVar2)
			{
				case 0:
					cVar0 = {func_299(iParam2)};
					break;
				
				case 8:
					cVar0 = {func_298(iParam2)};
					break;
				
				case 7:
					cVar0 = {func_297(iParam2)};
					break;
				
				case 10:
					cVar0 = {func_296(iParam2)};
					break;
				
				case 5:
					cVar0 = {func_295(iParam2)};
					break;
				
				case 4:
					cVar0 = {func_294(iParam2)};
					break;
				
				default:
					StringCopy(&cVar0, func_293(iVar2), 8);
					break;
			}
			break;
		
		default:
			break;
	}
	return cVar0;
}

char* func_293(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MG_BJUM";
			break;
		
		case 1:
			return "MG_DART";
			break;
		
		case 2:
			return "MG_GOLF";
			break;
		
		case 3:
			return "MG_HUNT";
			break;
		
		case 4:
			return "MG_OFFR";
			break;
		
		case 5:
			return "MG_PILO";
			break;
		
		case 6:
			return "MG_RMPG";
			break;
		
		case 7:
			return "MG_SERA";
			break;
		
		case 8:
			return "MG_SRAC";
			break;
		
		case 9:
			return "MG_STRP";
			break;
		
		case 10:
			return "MG_STNT";
			break;
		
		case 11:
			return "MG_SHTR";
			break;
		
		case 12:
			return "MG_TAXI";
			break;
		
		case 13:
			return "MG_TENN";
			break;
		
		case 14:
			return "MG_TOWI";
			break;
		
		case 15:
			return "MG_TRFA";
			break;
		
		case 16:
			return "MG_TRFG";
			break;
		
		case 17:
			return "MG_TRIA";
			break;
		
		case 18:
			return "MG_YOGA";
			break;
		
		case 19:
			return "MG_CRCE";
			break;
	}
	return "INVALID!";
}

struct<2> func_294(int iParam0)
{
	char[8] cVar0;
	struct<2> Var2;
	
	StringCopy(&cVar0, "", 8);
	IntToString(&Var2, iParam0, 8);
	if (is_string_null_or_empty(&Var2))
	{
	}
	else
	{
		StringCopy(&cVar0, "MGOR_", 8);
		StringConCat(&cVar0, &Var2, 8);
	}
	return cVar0;
}

struct<2> func_295(int iParam0)
{
	char[8] cVar0;
	struct<2> Var2;
	
	StringCopy(&cVar0, "", 8);
	IntToString(&Var2, iParam0, 8);
	if (is_string_null_or_empty(&Var2))
	{
	}
	else
	{
		StringCopy(&cVar0, "MGFS_", 8);
		StringConCat(&cVar0, &Var2, 8);
	}
	return cVar0;
}

struct<2> func_296(int iParam0)
{
	char[8] cVar0;
	struct<2> Var2;
	
	StringCopy(&cVar0, "", 8);
	IntToString(&Var2, iParam0, 8);
	if (is_string_null_or_empty(&Var2))
	{
	}
	else
	{
		StringCopy(&cVar0, "MGSP_", 8);
		StringConCat(&cVar0, &Var2, 8);
	}
	return cVar0;
}

struct<2> func_297(int iParam0)
{
	char[8] cVar0;
	struct<2> Var2;
	
	StringCopy(&cVar0, "", 8);
	IntToString(&Var2, iParam0, 8);
	if (is_string_null_or_empty(&Var2))
	{
	}
	else
	{
		StringCopy(&cVar0, "MGSR_", 8);
		StringConCat(&cVar0, &Var2, 8);
	}
	return cVar0;
}

struct<2> func_298(int iParam0)
{
	char[8] cVar0;
	struct<2> Var2;
	
	StringCopy(&cVar0, "", 8);
	IntToString(&Var2, iParam0, 8);
	if (is_string_null_or_empty(&Var2) || iParam0 == 3)
	{
	}
	else
	{
		StringCopy(&cVar0, "MGCR_", 8);
		StringConCat(&cVar0, &Var2, 8);
	}
	return cVar0;
}

struct<2> func_299(auto uParam0)
{
	char[8] cVar0;
	struct<2> Var2;
	
	StringCopy(&cVar0, "", 8);
	IntToString(&Var2, uParam0, 8);
	if (is_string_null_or_empty(&Var2))
	{
	}
	else
	{
		StringCopy(&cVar0, "MGBJ_", 8);
		StringConCat(&cVar0, &Var2, 8);
	}
	return cVar0;
}

struct<2> func_300(int iParam0)
{
	char[8] cVar0;
	struct<2> Var2;
	
	StringCopy(&cVar0, "", 8);
	Var2 = {func_301(iParam0)};
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

struct<2> func_301(int iParam0)
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

struct<2> func_302(int iParam0)
{
	char[8] cVar0;
	
	StringCopy(&cVar0, "M_", 8);
	StringConCat(&cVar0, &(Global_82399[iParam0 /*34*/].f_8), 8);
	if (iParam0 == 90)
	{
		switch (Global_101154.f_7775.f_99.f_205[7])
		{
			case 1:
				StringConCat(&cVar0, "A", 8);
				break;
			
			case 2:
				StringConCat(&cVar0, "B", 8);
				break;
			
			default:
				StringConCat(&cVar0, "A", 8);
				break;
			}
	}
	return cVar0;
}

bool func_303(int iParam0, auto uParam1, auto uParam2, auto uParam3, auto uParam4, auto uParam5, auto uParam6)
{
	if (((!func_305(0) || Global_69758) || Global_69747 == 1) || !is_screen_faded_in())
	{
		return false;
	}
	switch (Global_69743)
	{
		case 0:
			if (are_strings_equal(&uParam1, "NONE") || is_string_null_or_empty(&uParam1))
			{
				Global_69743 = 3;
			}
			else
			{
				Global_69743 = 1;
			}
			break;
		
		case 1:
			if (has_cutscene_loaded())
			{
				Global_69743 = 2;
			}
			break;
		
		case 2:
			if (is_cutscene_playing())
			{
				Global_69743 = 4;
				return true;
			}
			else if (!is_cutscene_active())
			{
				Global_69743 = 3;
			}
			break;
		
		case 3:
			if (is_cutscene_playing())
			{
			}
			else
			{
				Global_69743 = 5;
				return true;
			}
			break;
		
		case 4:
			if (is_cutscene_playing())
			{
				return true;
			}
			else if (iParam0 == 1)
			{
				Global_69743 = 5;
			}
			break;
		
		case 5:
			if ((is_cutscene_playing() || func_131(0)) || func_304(1))
			{
			}
			else
			{
				return true;
			}
			break;
	}
	return false;
}

int func_304(int iParam0)
{
	if (iParam0)
	{
		return (Global_17118.f_4 && Global_17118.f_104 == 4);
	}
	return Global_17118.f_4;
}

bool func_305(int iParam0)
{
	if (Global_35711 == 15)
	{
		return false;
	}
	if (func_306(iParam0))
	{
		return false;
	}
	return true;
}

int func_306(int iParam0)
{
	return func_307(iParam0, Global_35711);
}

bool func_307(int iParam0, int iParam1)
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

void func_308(auto uParam0)
{
	char[16] cVar0;
	int iVar4;
	
	StringCopy(&cVar0, "Offroad_", 16);
	StringIntConCat(&cVar0, Local_51.f_10 + 1, 16);
	func_11(uParam0.f_3);
	*(uParam0.f_358[0 /*189*/]).f_15 = 0f;
	iLocal_2107 = false;
	set_player_control(player_id(), true, 0);
	if (Local_51 == 0)
	{
		set_player_invincible(player_id(), 1);
	}
	*uParam0.f_1 = 1;
	func_11(&iLocal_2432);
	iVar4 = 0;
	while (iVar4 < *uParam0.f_13)
	{
		func_309(uParam0.f_358[iVar4 /*189*/]);
		if (Local_51 != 1)
		{
			if (iVar4 != 0)
			{
				func_76(uParam0, *(uParam0.f_358[iVar4 /*189*/]).f_8, *(uParam0.f_358[iVar4 /*189*/]).f_9, *(uParam0.f_27[*(uParam0.f_358[iVar4 /*189*/]).f_11 /*10*/]), *(uParam0.f_27[*(uParam0.f_358[iVar4 /*189*/]).f_11 /*10*/]).f_7, iVar4);
			}
		}
		else if (iLocal_2440)
		{
			if (iVar4 > 0)
			{
				if (!is_entity_dead(*(uParam0.f_358[iVar4 /*189*/]).f_8, 0) && !is_entity_dead(*(uParam0.f_358[iVar4 /*189*/]).f_9, 0))
				{
					if (iVar4 == 1 && Local_51.f_10 == 0)
					{
						StringConCat(&cVar0, "a", 16);
					}
					task_vehicle_follow_waypoint_recording(*(uParam0.f_358[iVar4 /*189*/]).f_8, *(uParam0.f_358[iVar4 /*189*/]).f_9, &cVar0, 262144, 0, 8, -1, _0x53AF99BAA671CA47(*(uParam0.f_358[iVar4 /*189*/]).f_9), 0, 2f);
				}
			}
		}
		else if (iVar4 != 0)
		{
			func_76(uParam0, *(uParam0.f_358[iVar4 /*189*/]).f_8, *(uParam0.f_358[iVar4 /*189*/]).f_9, *(uParam0.f_27[*(uParam0.f_358[iVar4 /*189*/]).f_11 /*10*/]), *(uParam0.f_27[*(uParam0.f_358[iVar4 /*189*/]).f_11 /*10*/]).f_7, iVar4);
		}
		iVar4++;
	}
	if (is_vehicle_driveable(*(uParam0.f_358[0 /*189*/]).f_9, 0))
	{
		set_vehicle_radio_enabled(*(uParam0.f_358[0 /*189*/]).f_9, 1);
		if (!is_string_null_or_empty(sLocal_2277))
		{
			set_radio_to_station_name(sLocal_2277);
			set_veh_radio_station(*(uParam0.f_358[0 /*189*/]).f_9, sLocal_2277);
		}
	}
}

void func_309(auto uParam0)
{
	if (!is_entity_dead(*uParam0.f_9, 0))
	{
		if (!is_entity_dead(*uParam0.f_8, 0))
		{
			if (is_playback_going_on_for_vehicle(*uParam0.f_9))
			{
				stop_playback_recorded_vehicle(*uParam0.f_9);
			}
			set_blocking_of_non_temporary_events(*uParam0.f_8, true);
		}
	}
	*uParam0.f_11 = 0;
	if (!is_entity_dead(*uParam0.f_9, 0))
	{
		if (!is_this_model_a_bike(*uParam0.f_22))
		{
			set_vehicle_engine_on(*uParam0.f_9, true, 1, 0);
		}
	}
}

int func_310()
{
	return unk_0x67D02A194A2FC2BD("MP_BIG_MESSAGE_FREEMODE");
}

void func_311(auto uParam0)
{
	*uParam0.f_12 = *uParam0.f_12;
}

void func_312(auto uParam0)
{
	int iVar0;
	
	if (is_player_control_on(get_player_index()))
	{
		set_player_control(get_player_index(), false, 512);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0.f_13)
	{
		func_108(uParam0.f_358[iVar0 /*189*/], 60f, 1);
		iVar0++;
	}
}

void func_313(int iParam0, int iParam1)
{
	func_60(iParam0, iParam1);
}

bool func_314(auto uParam0, int iParam1, int iParam2)
{
	Vector3 vVar0;
	int iVar3;
	float fVar4;
	Vector3 vVar5;
	Vector3 vVar8;
	
	if (iParam1 < 0 || iParam1 > 32)
	{
		return false;
	}
	iVar3 = -1;
	if (iParam1 == *uParam0.f_12 - 1)
	{
		iVar3 = 38;
	}
	fVar4 = 1.2f;
	if (!iParam2)
	{
		fVar4 = 0.7f;
	}
	if (!func_320(uParam0.f_27[iParam1 /*10*/], iVar3, fVar4, iParam1, *uParam0.f_12))
	{
		return false;
	}
	if (iParam2)
	{
		vVar5 = {*(uParam0.f_27[iParam1 /*10*/])};
		vVar8 = {0f, 0f, 0f};
		if (iParam1 < *uParam0.f_12 - 1)
		{
			if (!func_73(*(uParam0.f_27[iParam1 /*10*/]), *(uParam0.f_27[iParam1 + 1 /*10*/]), 1056964608, 0))
			{
				vVar5 = {*(uParam0.f_27[iParam1 + 1 /*10*/])};
			}
		}
		if (Local_51 == 1)
		{
			if (Local_51.f_10 == 1)
			{
				if (func_341(*(uParam0.f_27[8 /*10*/]).f_9, 4))
				{
					func_339(uParam0.f_27[8 /*10*/].f_9, 4);
				}
			}
		}
		if (iParam1 > 0)
		{
			vVar8 = {*(uParam0.f_27[iParam1 - 1 /*10*/])};
		}
		if (!func_315(vVar8, uParam0.f_27[iParam1 /*10*/], vVar5, 16f))
		{
			return false;
		}
		if (iParam1 + 1 < *uParam0.f_12)
		{
			if (iParam1 + 2 >= 33)
			{
				vVar0 = {*(uParam0.f_27[0 /*10*/])};
			}
			else
			{
				vVar0 = {*(uParam0.f_27[iParam1 + 2 /*10*/])};
			}
			if (!func_315(*(uParam0.f_27[iParam1 /*10*/]), uParam0.f_27[iParam1 + 1 /*10*/], vVar0, 16f))
			{
				return false;
			}
		}
	}
	return true;
}

bool func_315(Vector3 vParam0, auto uParam1, Vector3 vParam2, float fParam3)
{
	if (!func_316(vParam0, uParam3, vParam4, fParam7))
	{
		return false;
	}
	return true;
}

bool func_316(Vector3 vParam0, auto uParam1, Vector3 vParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	auto uVar4;
	
	vParam0 = {vParam0};
	func_80(uParam3.f_6);
	if (*uParam3.f_7 == 2)
	{
		iVar0 = func_318(*uParam3.f_7, vParam0, *uParam3, vParam4);
		func_556(func_557(func_92()), &iVar1, &iVar2, &iVar3, &uVar4);
		*uParam3.f_6 = create_checkpoint(iVar0, *uParam3, vParam4, fParam7, iVar1, iVar2, iVar3, func_91(*uParam3, 25, 200), 0);
	}
	else if (*uParam3.f_7 == 3)
	{
		if (*uParam3.f_8 == 2 || *uParam3.f_8 == 3)
		{
			func_556(func_557(18), &iVar1, &iVar2, &iVar3, &uVar4);
			*uParam3.f_6 = create_checkpoint(func_317(*uParam3.f_7, *uParam3.f_8), *uParam3, vParam4, fParam7, iVar1, iVar2, iVar3, func_91(*uParam3, 25, 200), 0);
		}
		else if (*uParam3.f_8 == 1)
		{
			func_556(func_557(9), &iVar1, &iVar2, &iVar3, &uVar4);
			*uParam3.f_6 = create_checkpoint(func_317(*uParam3.f_7, *uParam3.f_8), *uParam3, vParam4, fParam7, iVar1, iVar2, iVar3, func_91(*uParam3, 25, 200), 0);
		}
	}
	else
	{
		*uParam3.f_6 = create_checkpoint(func_317(*uParam3.f_7, *uParam3.f_8), *uParam3, vParam4, fParam7, 254, 207, 12, func_91(*uParam3, 25, 200), 0);
	}
	if (*uParam3.f_6 == 0)
	{
		return false;
	}
	return true;
}

int func_317(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 5;
			break;
		
		case 1:
			return 9;
			break;
		
		case 2:
			return 35;
			break;
		
		case 3:
			if (iParam1 == 2)
			{
				return 36;
			}
			else if (iParam1 == 3)
			{
				return 37;
			}
			else if (iParam1 == 1)
			{
				return 38;
			}
			break;
		
		case 4:
			return 14;
			break;
		
		case 5:
			return 25;
			break;
		
		case 6:
			return 30;
			break;
		
		case 7:
			return 20;
			break;
		
		case 8:
			return 24;
			break;
		
		case 9:
			return 29;
			break;
		
		case 10:
			return 34;
			break;
	}
	return 5;
}

int func_318(int iParam0, Vector3 vParam1, Vector3 vParam2, Vector3 vParam3)
{
	Vector3 vVar0;
	Vector3 vVar3;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	
	fVar7 = 180f;
	fVar8 = 140f;
	fVar9 = 80f;
	if (iParam0 == 0)
	{
		iVar10 = 5;
		iVar11 = 6;
		iVar12 = 7;
	}
	else if (iParam0 == 2)
	{
		iVar10 = 10;
		iVar11 = 11;
		iVar12 = 12;
	}
	else if (iParam0 == 5)
	{
		iVar10 = 25;
		iVar11 = 26;
		iVar12 = 27;
	}
	else if (iParam0 == 6)
	{
		iVar10 = 30;
		iVar11 = 31;
		iVar12 = 32;
	}
	else if (iParam0 == 7)
	{
		iVar10 = 20;
		iVar11 = 21;
		iVar12 = 22;
	}
	if (!func_319(vParam1, 0f, 0f, 0f, 0))
	{
		vVar0 = {vParam1 - vParam4};
		vVar3 = {vParam7 - vParam4};
		fVar6 = get_angle_between_2d_vectors(vVar0.x, vVar0.y, vVar3.x, vVar3.y);
		if (fVar6 > 180f)
		{
			fVar6 = 360f - fVar6;
		}
		if (fVar6 < fVar9)
		{
			return iVar12;
		}
		else if (fVar6 < fVar8)
		{
			return iVar11;
		}
		else if (fVar6 < fVar7)
		{
			return iVar10;
		}
	}
	return iVar10;
}

int func_319(Vector3 vParam0, Vector3 vParam1, int iParam2)
{
	if (iParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_320(auto uParam0, int iParam1, float fParam2, int iParam3, int iParam4)
{
	if (!func_321(uParam0.f_5, *uParam0, iParam1, fParam2, iParam3, iParam4, *uParam0.f_8))
	{
		return false;
	}
	return true;
}

bool func_321(int iParam0, Vector3 vParam1, int iParam2, float fParam3, int iParam4, int iParam5, int iParam6)
{
	func_83(iParam0);
	*iParam0 = add_blip_for_coord(vParam1);
	if (!does_blip_exist(*iParam0))
	{
		return false;
	}
	if (iParam4 != -1)
	{
		set_blip_sprite(*iParam0, iParam4);
	}
	set_blip_scale(*iParam0, fParam5);
	set_blip_display(*iParam0, 4);
	if (iParam8 == 2 || iParam8 == 3)
	{
		set_blip_colour(*iParam0, 2);
	}
	if (iParam8 == 1)
	{
		set_blip_colour(*iParam0, 3);
	}
	if (iParam6 == iParam7 - 1)
	{
		begin_text_command_set_blip_name("GATEBLIPFIN");
		end_text_command_set_blip_name(*iParam0);
	}
	else
	{
		if (iParam8 == 1)
		{
			begin_text_command_set_blip_name("GATEBLIPINV");
		}
		else if (iParam8 == 2 || iParam8 == 3)
		{
			begin_text_command_set_blip_name("GATEBLIPKNF");
		}
		else
		{
			begin_text_command_set_blip_name("GATEBLIPDEF");
		}
		end_text_command_set_blip_name(*iParam0);
	}
	return true;
}

void func_322(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	_set_text_entry_2(sParam0);
	_draw_subtitle_timed(iParam1, 0);
}

bool func_323(auto uParam0)
{
	switch (*uParam0.f_25)
	{
		case 0:
			func_127(1);
			request_streamed_texture_dict("MPHUD", false);
			Local_51.f_118 = func_336();
			switch (Local_51)
			{
				case 0:
					request_streamed_texture_dict("SPRRaces", false);
					request_streamed_texture_dict("MPMedals_FEED", false);
					break;
				
				case 1:
					request_streamed_texture_dict("SPROffroad", false);
					break;
				
				case 2:
					request_streamed_texture_dict("Triathlon", false);
					request_streamed_texture_dict("MPMedals_FEED", false);
					break;
			}
			*uParam0.f_25 = 1;
			break;
		
		case 1:
			func_331(uParam0);
			*uParam0.f_25 = 2;
			break;
		
		case 2:
			if (func_326(uParam0))
			{
				if (has_streamed_texture_dict_loaded("MPHUD"))
				{
					if (has_scaleform_movie_loaded(Local_51.f_118))
					{
						switch (Local_51)
						{
							case 0:
								if (has_streamed_texture_dict_loaded("SPRRaces") && has_streamed_texture_dict_loaded("MPMedals_FEED"))
								{
									*uParam0.f_25 = 3;
								}
								break;
							
							case 1:
								if (has_streamed_texture_dict_loaded("SPROffroad"))
								{
									*uParam0.f_25 = 3;
								}
								break;
							
							case 2:
								if (has_streamed_texture_dict_loaded("Triathlon") && has_streamed_texture_dict_loaded("MPMedals_FEED"))
								{
									*uParam0.f_25 = 3;
								}
								break;
							}
						}
					}
			}
			break;
		
		case 3:
			clear_player_has_damaged_at_least_one_ped(player_id());
			if (Local_51.f_10 == 0 && !*uParam0.f_2)
			{
			}
			else
			{
				func_324(uParam0);
			}
			*uParam0.f_25 = 4;
			break;
		
		case 4:
			if (Local_51.f_10 == 0)
			{
				return false;
			}
			else
			{
				if (ENTITY::DOES_ENTITY_EXIST(*(uParam0.f_358[0 /*189*/]).f_9))
				{
					freeze_entity_position(*(uParam0.f_358[0 /*189*/]).f_9, true);
				}
				if (!is_new_load_scene_active())
				{
					request_collision_at_coord(*(uParam0.f_358[0 /*189*/].f_16));
					new_load_scene_start(*(uParam0.f_358[0 /*189*/].f_16), get_entity_forward_vector(*(uParam0.f_358[0 /*189*/]).f_9), 5000f, 0);
				}
				if (is_new_load_scene_loaded())
				{
					new_load_scene_stop();
					if (ENTITY::DOES_ENTITY_EXIST(*(uParam0.f_358[0 /*189*/]).f_9))
					{
						freeze_entity_position(*(uParam0.f_358[0 /*189*/]).f_9, false);
					}
					func_312(uParam0);
					return false;
				}
			}
			break;
		
		case 5:
			return false;
			break;
		
		case 6:
			return false;
			break;
	}
	return true;
}

int func_324(auto uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < *uParam0.f_13)
	{
		if (!func_325(uParam0, iVar0))
		{
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

int func_325(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 7)
	{
		return 0;
	}
	if (iParam1 > 0)
	{
		return func_123(uParam0.f_358[iParam1 /*189*/], 1);
	}
	return func_123(uParam0.f_358[iParam1 /*189*/], 0);
}

int func_326(auto uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < *uParam0.f_13)
	{
		if (!func_327(uParam0, iVar0))
		{
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

int func_327(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 7)
	{
		return 0;
	}
	return func_328(uParam0.f_358[iParam1 /*189*/]);
}

bool func_328(auto uParam0)
{
	if (!func_330(uParam0) || !func_329(uParam0))
	{
		return false;
	}
	return true;
}

int func_329(auto uParam0)
{
	if (*uParam0.f_22 == 0)
	{
		return true;
	}
	return STREAMING::HAS_MODEL_LOADED(*uParam0.f_22);
}

int func_330(auto uParam0)
{
	if (*uParam0.f_21 == 0)
	{
		return false;
	}
	return STREAMING::HAS_MODEL_LOADED(*uParam0.f_21);
}

void func_331(auto uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0.f_13)
	{
		func_332(uParam0, iVar0);
		iVar0++;
	}
}

void func_332(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 7)
	{
		return;
	}
	func_333(uParam0.f_358[iParam1 /*189*/]);
}

void func_333(auto uParam0)
{
	func_335(uParam0);
	func_334(uParam0);
}

void func_334(auto uParam0)
{
	if (*uParam0.f_22 == 0)
	{
		return;
	}
	STREAMING::REQUEST_MODEL(*uParam0.f_22);
}

void func_335(auto uParam0)
{
	if (*uParam0.f_21 == 0)
	{
		return;
	}
	STREAMING::REQUEST_MODEL(*uParam0.f_21);
}

int func_336()
{
	return unk_0x67D02A194A2FC2BD("SC_LEADERBOARD");
}

bool func_337(int iParam0)
{
	if (is_screen_faded_in())
	{
		do_screen_fade_out(iParam0);
	}
	else if (is_screen_faded_out())
	{
		return true;
	}
	return false;
}

void func_338()
{
	if (does_cam_exist(iLocal_2076))
	{
		if (is_cam_active(iLocal_2076))
		{
			render_script_cams(false, false, 3000, 1, 0, 0);
			set_cam_active(iLocal_2076, false);
		}
		destroy_cam(iLocal_2076, 0);
	}
}

void func_339(int iParam0, int iParam1)
{
	func_340(iParam0, iParam1);
}

void func_340(auto uParam0, auto uParam1)
{
	*uParam0 -= (*uParam0 && uParam1);
}

int func_341(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_342(int iParam0)
{
	if (!func_3(iParam0))
	{
		func_11(iParam0);
	}
}

void func_343()
{
	func_344(&uLocal_1580);
}

void func_344(auto uParam0)
{
	if (*uParam0.f_4 != 0)
	{
		func_350(uParam0.f_4, uParam0.f_5, uParam0.f_44);
	}
	if ((*uParam0[0] != 0 || *uParam0[1] != 0) || *uParam0[2] != 0)
	{
		func_410(uParam0);
		func_349(uParam0);
		func_348(&Global_1839721);
	}
	if (Global_1835390.f_2708 != 0 || Global_1835390.f_3184)
	{
		func_346();
	}
	if (is_audio_scene_active("LEADERBOARD_SCENE"))
	{
		stop_audio_scene("LEADERBOARD_SCENE");
	}
	if (network_is_signed_online())
	{
		func_345(&(Global_1840922.f_49));
	}
	Global_2460486.f_3826 = 0;
}

void func_345(auto uParam0)
{
	*uParam0.f_1 = 0;
}

void func_346()
{
	int iVar0;
	int iVar1;
	struct<75> Var2;
	
	Var2.f_60 = 6;
	Var2.f_67 = 6;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 12)
		{
			Global_1835390[iVar0 /*901*/][iVar1 /*75*/] = {Var2};
			iVar1++;
		}
		Global_1835390.f_2704[iVar0] = 0;
		iVar0++;
	}
	Global_1835390.f_2708 = 0;
	Global_1835390.f_2709 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_1835390.f_2710[iVar0] = 0;
		StringCopy(&(Global_1835390.f_2717[iVar0 /*6*/]), "", 24);
		Global_1835390.f_2754[iVar0] = 0;
		Global_1835390.f_2761[iVar0] = 0;
		iVar0++;
	}
	Global_1835390.f_2768 = 0;
	Global_1835390.f_2769 = 0;
	Global_1835390.f_2770 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_1835390.f_2771[iVar0] = 0;
		Global_1835390.f_2775[iVar0] = 0;
		iVar0++;
	}
	Global_1835390.f_2779 = 0;
	func_347(&(Global_1835390.f_2780));
	func_345(&(Global_1835390.f_2823));
	Global_1835390.f_2825 = -1;
	Global_1835390.f_2826 = 0;
	func_345(&(Global_1835390.f_2827));
	Global_1835390.f_2829 = 0;
	func_345(&(Global_1835390.f_2830));
	Global_1835390.f_2832 = 0;
	Global_1835390.f_2780.f_28 = 0;
	Global_1835390.f_2780.f_27 = 0;
	Global_1835390.f_3184 = 0;
}

void func_347(auto uParam0)
{
	int iVar0;
	
	*uParam0 = 0;
	StringCopy(uParam0.f_1, "", 32);
	StringCopy(uParam0.f_9, "", 64);
	*uParam0.f_25 = 1;
	*uParam0.f_26 = 0;
	*uParam0.f_27 = 0;
	*uParam0.f_28 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		*uParam0.f_29[iVar0] = 0;
		*uParam0.f_36[iVar0] = 0;
		iVar0++;
	}
}

void func_348(auto uParam0)
{
	struct<13> Var0;
	int iVar13;
	int iVar14;
	
	iVar13 = 0;
	while (iVar13 < 12)
	{
		StringCopy(uParam0[iVar13 /*100*/], "", 64);
		StringCopy(uParam0[iVar13 /*100*/].f_16, "", 64);
		*(uParam0[iVar13 /*100*/].f_32) = {Var0};
		*(uParam0[iVar13 /*100*/].f_45) = {Var0};
		*(uParam0[iVar13 /*100*/]).f_58 = 0;
		*(uParam0[iVar13 /*100*/]).f_59 = 0;
		iVar14 = 0;
		while (iVar14 < 6)
		{
			*(uParam0[iVar13 /*100*/].f_60)[iVar14] = 0f;
			*(uParam0[iVar13 /*100*/].f_67)[iVar14] = 0;
			iVar14++;
		}
		*(uParam0[iVar13 /*100*/]).f_75 = 0;
		*(uParam0[iVar13 /*100*/]).f_74 = 0;
		*(uParam0[iVar13 /*100*/]).f_76 = 0;
		*(uParam0[iVar13 /*100*/]).f_77 = 0;
		*(uParam0[iVar13 /*100*/]).f_78 = 0;
		*(uParam0[iVar13 /*100*/]).f_79 = 0;
		StringCopy(uParam0[iVar13 /*100*/].f_80, "", 16);
		iVar13++;
	}
	func_345(&(Global_1835390.f_2830));
}

void func_349(auto uParam0)
{
	int iVar0;
	struct<13> Var1;
	
	*uParam0.f_246 = 0;
	*uParam0.f_246.f_1 = -1;
	*uParam0.f_246.f_2 = 0;
	func_345(uParam0.f_246.f_3);
	*uParam0.f_246.f_5 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		*uParam0.f_246.f_6[iVar0 /*15*/] = -1;
		*(uParam0.f_246.f_6[iVar0 /*15*/]).f_1 = 0;
		*(uParam0.f_246.f_6[iVar0 /*15*/].f_2) = {Var1};
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		*uParam0.f_246.f_187[iVar0] = 0;
		iVar0++;
	}
}

void func_350(auto uParam0, auto uParam1, auto uParam2)
{
	*uParam0 = 0;
	*uParam1 = 0;
	Global_1835008 = 0;
	func_345(&(Global_1835008.f_1));
	leaderboards_read_clear(*uParam2, *uParam2.f_1, -1);
}

bool func_351(auto uParam0, auto uParam1)
{
	if (!func_402())
	{
		return false;
	}
	if (func_396(&iLocal_525, uParam0))
	{
		if (iLocal_527 || iLocal_526)
		{
			_set_warning_message_2("SPR_QT_PLANE_T", "SPR_QUIT_PLANE", 36, 0, 0, -1, 0, 0, 1);
			if (!*uParam1)
			{
				if (iLocal_527)
				{
					if (func_3(&iLocal_522))
					{
						if (func_229(&iLocal_522, to_float(false)))
						{
							iLocal_527 = 0;
							iLocal_526 = !iLocal_526;
						}
					}
					else
					{
						func_11(&iLocal_522);
					}
				}
				else
				{
					hide_hud_component_this_frame(9);
					hide_hud_component_this_frame(7);
					func_142(&(Local_51.f_119), 1128792064, 1, 0, 1, 1065353216);
				}
			}
		}
		else
		{
			*uParam1 = 0;
			func_356();
		}
		return false;
	}
	if (iLocal_525)
	{
		func_355();
		if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
		{
			set_entity_can_be_damaged(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0), 1);
		}
	}
	else
	{
		Local_51.f_10 = -1;
	}
	func_352();
	if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
	{
		set_entity_can_be_damaged(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0), 1);
	}
	return true;
}

void func_352()
{
	clear_help(1);
	clear_additional_text(3, true);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		set_player_control(player_id(), true, 0);
	}
	if (_get_screen_effect_is_active("MinigameTransitionIn"))
	{
		_stop_screen_effect("MinigameTransitionIn");
	}
	_start_screen_effect("MinigameTransitionOut", false, 0);
	iLocal_521 = 0;
	set_game_paused(false);
	func_127(0);
	func_353();
}

void func_353()
{
	Global_14578 = 0;
	func_354();
}

void func_354()
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

void func_355()
{
	switch (Global_100184)
	{
		case 0:
			Local_51.f_10 = 0;
			break;
		
		case 1:
			Local_51.f_10 = 1;
			break;
		
		case 2:
			Local_51.f_10 = 2;
			break;
		
		case 3:
			Local_51.f_10 = 3;
			break;
		
		case 4:
			Local_51.f_10 = 4;
			break;
	}
}

void func_356()
{
	hide_hud_and_radar_this_frame();
	func_357(&uLocal_593);
}

void func_357(auto uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;
	struct<2> Var14;
	int iVar16;
	struct<2> Var17;
	struct<11> Var19;
	struct<4> Var30;
	struct<4> Var34;
	struct<2> Var38;
	struct<11> Var40;
	
	if (!iLocal_592)
	{
		if (!GAMEPLAY::IS_PC_VERSION())
		{
			set_widescreen_format(1);
		}
	}
	hide_hud_component_this_frame(9);
	hide_hud_component_this_frame(7);
	func_142(&(Local_51.f_119), 1128792064, 1, 0, 1, 1065353216);
	func_388("Shared", "BGGradient_32x1024", uParam0[0 /*9*/], 0, 0, 1, 0);
	func_383(*(uParam0.f_420[0 /*8*/]), 0, 0);
	func_383(*(uParam0.f_420[1 /*8*/]), 0, 0);
	func_383(*(uParam0.f_420[2 /*8*/]), 0, 0);
	func_383(*(uParam0.f_420[3 /*8*/]), 0, 0);
	func_383(*(uParam0.f_420[4 /*8*/]), 0, 0);
	func_383(*(uParam0.f_420[5 /*8*/]), 0, 0);
	func_383(*(uParam0.f_420[6 /*8*/]), 0, 0);
	func_383(*(uParam0.f_420[7 /*8*/]), 0, 0);
	func_383(*(uParam0.f_420[8 /*8*/]), 0, 0);
	func_383(*(uParam0.f_420[6 /*8*/]), 0, 0);
	_set_2d_layer(1);
	func_382(uParam0.f_741.f_165);
	func_381(uParam0.f_316[0 /*2*/], uParam0.f_741.f_165, "SPR_TITLE", 0);
	_set_2d_layer(4);
	func_379(uParam0.f_741.f_176);
	func_378(uParam0.f_741.f_176, uParam0.f_420[0 /*8*/], 0f, 0f);
	func_376(uParam0.f_316[1 /*2*/], uParam0.f_741.f_176, "SPR_CHALLENGES", 1, 0);
	func_375(uParam0.f_741.f_176);
	func_378(uParam0.f_741.f_176, uParam0.f_420[1 /*8*/], 0f, 0f);
	func_376(uParam0.f_316[2 /*2*/], uParam0.f_741.f_176, "SPR_INFO", 1, 0);
	func_375(uParam0.f_741.f_176);
	func_378(uParam0.f_741.f_176, uParam0.f_420[5 /*8*/], 0f, 0f);
	func_376(uParam0.f_316[3 /*2*/], uParam0.f_741.f_176, "SPR_AWARD_TITLE", 1, 0);
	func_375(uParam0.f_741.f_176);
	func_382(uParam0.f_741.f_198);
	iVar0 = 0;
	iVar1 = 9;
	iVar2 = 17;
	iVar3 = 1;
	func_383(*(uParam0.f_420[16 /*8*/]), 0, 0);
	func_383(*(uParam0.f_420[17 /*8*/]), 0, 0);
	func_383(*(uParam0.f_420[18 /*8*/]), 0, 0);
	func_383(*(uParam0.f_420[19 /*8*/]), 0, 0);
	func_383(*(uParam0.f_420[20 /*8*/]), 0, 0);
	func_383(*(uParam0.f_420[21 /*8*/]), 0, 0);
	iVar4 = true;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (iVar0 < 5)
		{
			Var14 = {*(uParam0.f_316[iVar2 /*2*/])};
			if (Global_101154.f_17733.f_6[iVar0] > 0f)
			{
				iLocal_531[iVar0] = ceil(Global_101154.f_17733.f_6[iVar0]);
			}
			else
			{
				iLocal_531[iVar0] = -1;
			}
			if (iVar0 == Global_100184)
			{
				func_247(uParam0.f_420[iVar1 /*8*/], 1, 1);
				func_383(*(uParam0.f_420[iVar1 /*8*/]), 0, 0);
				func_379(uParam0.f_741.f_198);
				switch (Global_101154.f_17733.f_12[iVar0 /*8*/].f_4)
				{
					case 2:
						break;
					
					case 1:
						if (iVar0 < 5)
						{
							if (Global_101154.f_17733.f_6[iVar0] <= 0f)
							{
								func_255(&Var5, 269f, 0f, 32f, 32f, 0);
								func_254(&Var5, 255, 255, 255, 255);
								Var5.f_1 = *(uParam0.f_316[iVar2 /*2*/]).f_1 + fLocal_538;
								Var14 = Var5 + fLocal_537;
								if (!iLocal_592)
								{
									func_374(&Var5, 0);
								}
								func_373(&Var5, 1);
								func_388("Shared", "NewStar_32", &Var5, 0, 0, 5, 0);
								if (!iLocal_592)
								{
									func_372(&Var14, uParam0.f_741.f_198);
								}
							}
						}
						break;
					
					default:
						iVar4 = false;
						break;
				}
				if (iVar0 == Global_100184)
				{
					func_379(uParam0.f_741.f_198);
				}
				func_375(uParam0.f_741.f_198);
				func_381(&Var14, uParam0.f_741.f_198, &(Local_51.f_24[iVar0 /*8*/]), 0);
				func_382(uParam0.f_741.f_198);
				func_373(uParam0[iVar3 /*9*/], 1);
				if (iVar4)
				{
					func_382(uParam0.f_741.f_198);
				}
				else
				{
					func_382(uParam0.f_741.f_198);
				}
				func_382(uParam0.f_741.f_198);
				if (IntToFloat(iLocal_531[iVar0]) <= Local_51.f_106[iVar0] && iLocal_531[iVar0] > 1)
				{
					func_373(uParam0[iVar3 /*9*/], 1);
					func_373(uParam0[9 /*9*/], 1);
					func_388("SPRRaces", "FlightStunt_Gold_128", uParam0[9 /*9*/], 0, 0, 5, 0);
					func_378(uParam0.f_741.f_198, uParam0.f_420[16 /*8*/], 0.0047f, 0.0055f);
					set_text_right_justify(1);
					func_381(uParam0.f_316[5 /*2*/], uParam0.f_741.f_198, "SPR_sGOLD", 0);
					set_text_right_justify(0);
					func_375(uParam0.f_741.f_198);
				}
				else if (IntToFloat(iLocal_531[iVar0]) <= Local_51.f_112[iVar0] - Local_51.f_106[iVar0] / 2f + Local_51.f_106[iVar0] && IntToFloat(iLocal_531[iVar0]) > Local_51.f_106[iVar0])
				{
					func_373(uParam0[iVar3 /*9*/], 1);
					func_373(uParam0[9 /*9*/], 1);
					func_388("SPRRaces", "FlightStunt_Silver_128", uParam0[9 /*9*/], 0, 0, 5, 0);
					func_378(uParam0.f_741.f_198, uParam0.f_420[16 /*8*/], 0.0047f, 0.0055f);
					set_text_right_justify(1);
					func_381(uParam0.f_316[5 /*2*/], uParam0.f_741.f_198, "SPR_sSILVER", 0);
					set_text_right_justify(0);
					func_375(uParam0.f_741.f_198);
				}
				else if (IntToFloat(iLocal_531[iVar0]) <= Local_51.f_112[iVar0] && IntToFloat(iLocal_531[iVar0]) > Local_51.f_112[iVar0] - Local_51.f_106[iVar0] / 2f + Local_51.f_106[iVar0])
				{
					func_373(uParam0[iVar3 /*9*/], 1);
					func_373(uParam0[9 /*9*/], 1);
					func_388("SPRRaces", "FlightStunt_Bronze_128", uParam0[9 /*9*/], 0, 0, 5, 0);
					func_378(uParam0.f_741.f_198, uParam0.f_420[16 /*8*/], 0.0047f, 0.0055f);
					set_text_right_justify(1);
					func_381(uParam0.f_316[5 /*2*/], uParam0.f_741.f_198, "SPR_sBRONZE", 0);
					set_text_right_justify(0);
					func_375(uParam0.f_741.f_198);
				}
				else if (IntToFloat(iLocal_531[iVar0]) > Local_51.f_112[iVar0] || iLocal_531[iVar0] == -1)
				{
					func_373(uParam0[iVar3 /*9*/], 1);
					func_373(uParam0[9 /*9*/], 1);
					func_378(uParam0.f_741.f_198, uParam0.f_420[16 /*8*/], 0.0047f, 0.0055f);
					set_text_right_justify(1);
					func_381(uParam0.f_316[5 /*2*/], uParam0.f_741.f_198, "SC_LB_EMPTY", 0);
					set_text_right_justify(0);
					func_388("SPRRaces", "Empty_128", uParam0[9 /*9*/], 0, 0, 5, 0);
					func_371(uParam0[iVar3 /*9*/]);
				}
				if (IntToFloat(iLocal_531[iVar0]) <= Local_51.f_106[iVar0] && !iLocal_531[iVar0] == -1)
				{
					func_373(uParam0[13 /*9*/], 1);
				}
				else
				{
					*(uParam0[13 /*9*/]).f_7 = round(255f * 0.3f);
				}
				if (IntToFloat(iLocal_531[iVar0]) <= Local_51.f_112[iVar0] - Local_51.f_106[iVar0] / 2f + Local_51.f_106[iVar0] && !iLocal_531[iVar0] == -1)
				{
					func_373(uParam0[12 /*9*/], 1);
				}
				else
				{
					*(uParam0[12 /*9*/]).f_7 = round(255f * 0.3f);
				}
				if (IntToFloat(iLocal_531[iVar0]) <= Local_51.f_112[iVar0] && !iLocal_531[iVar0] == -1)
				{
					func_373(uParam0[11 /*9*/], 1);
				}
				else
				{
					*(uParam0[11 /*9*/]).f_7 = round(255f * 0.3f);
				}
				func_388("SPRRaces", "FlightStunt_Bronze_128", uParam0[11 /*9*/], 0, 0, 5, 0);
				func_388("SPRRaces", "FlightStunt_Silver_128", uParam0[12 /*9*/], 0, 0, 5, 0);
				func_388("SPRRaces", "FlightStunt_Gold_128", uParam0[13 /*9*/], 0, 0, 5, 0);
				func_382(uParam0.f_741.f_198);
				if (Global_101154.f_17733.f_6[Global_100184] > 0f)
				{
					func_378(uParam0.f_741.f_198, uParam0.f_420[17 /*8*/], 0.0047f, 0.0055f);
					set_text_right_justify(1);
					func_366(uParam0.f_316[9 /*2*/], uParam0.f_741.f_198, floor(Global_101154.f_17733.f_6[Global_100184] * 1000f), 6, "", 0, 1);
					set_text_right_justify(0);
					func_375(uParam0.f_741.f_198);
				}
				else
				{
					func_378(uParam0.f_741.f_198, uParam0.f_420[17 /*8*/], 0.0047f, 0.0055f);
					set_text_right_justify(1);
					func_381(uParam0.f_316[9 /*2*/], uParam0.f_741.f_198, "SC_LB_EMPTY", 0);
					set_text_right_justify(0);
					func_375(uParam0.f_741.f_198);
				}
				func_381(uParam0.f_316[6 /*2*/], uParam0.f_741.f_198, "SPR_RTIME", 0);
				if (Local_51.f_18[Global_100184] > 0f)
				{
					func_378(uParam0.f_741.f_198, uParam0.f_420[18 /*8*/], 0.0047f, 0.0055f);
					set_text_right_justify(1);
					func_366(uParam0.f_316[7 /*2*/], uParam0.f_741.f_198, floor(Local_51.f_18[Global_100184] * 1000f), 6, "", 0, 1);
					set_text_right_justify(0);
					func_375(uParam0.f_741.f_198);
					func_382(uParam0.f_741.f_198);
				}
				else
				{
					func_378(uParam0.f_741.f_198, uParam0.f_420[18 /*8*/], 0.0047f, 0.0055f);
					set_text_right_justify(1);
					func_376(uParam0.f_316[7 /*2*/], uParam0.f_741.f_198, "SC_LB_EMPTY", 0, 1);
					set_text_right_justify(0);
					func_375(uParam0.f_741.f_198);
					func_382(uParam0.f_741.f_198);
				}
			}
			else
			{
				func_365(uParam0.f_420[iVar1 /*8*/]);
				func_247(uParam0.f_420[iVar1 /*8*/], 117, 1);
				func_383(*(uParam0.f_420[iVar1 /*8*/]), 0, 0);
				func_373(uParam0[iVar3 /*9*/], 1);
				switch (Global_101154.f_17733.f_12[iVar0 /*8*/].f_4)
				{
					case 0:
						func_373(uParam0[iVar3 /*9*/], 1);
						func_382(uParam0.f_741.f_198);
						break;
					
					case 2:
						break;
					
					case 1:
						if (iVar0 < 5)
						{
							func_382(uParam0.f_741.f_198);
							if (Global_101154.f_17733.f_6[iVar0] <= 0f)
							{
								func_255(&Var5, 269f, 0f, 32f, 32f, 0);
								func_254(&Var5, 255, 255, 255, 255);
								Var5.f_1 = *(uParam0.f_316[iVar2 /*2*/]).f_1 + fLocal_538;
								Var14 = Var5 + fLocal_537;
								if (!iLocal_592)
								{
									func_374(&Var5, 0);
								}
								func_373(&Var5, 1);
								func_388("Shared", "NewStar_32", &Var5, 0, 0, 5, 0);
								if (!iLocal_592)
								{
									func_372(&Var14, uParam0.f_741.f_198);
								}
							}
						}
						break;
				}
				if (iVar0 == Global_100184)
				{
					func_379(uParam0.f_741.f_198);
				}
				func_375(uParam0.f_741.f_198);
				func_381(&Var14, uParam0.f_741.f_198, &(Local_51.f_24[iVar0 /*8*/]), 0);
				func_382(uParam0.f_741.f_198);
				func_373(uParam0[iVar3 /*9*/], 1);
			}
			if (Global_101154.f_17733.f_12[iVar0 /*8*/].f_4 == 0)
			{
				func_388("Shared", "Locked_Icon_32", uParam0[iVar3 /*9*/], 0, 0, 5, 0);
			}
			else if (IntToFloat(iLocal_531[iVar0]) > 0f)
			{
				if (IntToFloat(iLocal_531[iVar0]) <= Local_51.f_106[iVar0] && IntToFloat(iLocal_531[iVar0]) <= Local_51.f_112[iVar0])
				{
					func_364(uParam0[iVar3 /*9*/]);
					func_388("Shared", "MedalDot_32", uParam0[iVar3 /*9*/], 0, 0, 5, 0);
				}
				else if (IntToFloat(iLocal_531[iVar0]) <= Local_51.f_112[iVar0] - Local_51.f_106[iVar0] / 2f + Local_51.f_106[iVar0])
				{
					func_363(uParam0[iVar3 /*9*/]);
					func_388("Shared", "MedalDot_32", uParam0[iVar3 /*9*/], 0, 0, 5, 0);
				}
				else if (IntToFloat(iLocal_531[iVar0]) <= Local_51.f_112[iVar0])
				{
					func_361(uParam0[iVar3 /*9*/]);
					func_388("Shared", "MedalDot_32", uParam0[iVar3 /*9*/], 0, 0, 5, 0);
				}
			}
			iVar1++;
			iVar2++;
			iVar3++;
		}
		iVar0++;
	}
	iVar16 = 0;
	if (func_360(0))
	{
		STATS::STAT_GET_INT(joaat("sp0_flying_ability"), &iVar16, -1);
	}
	else if (func_360(1))
	{
		STATS::STAT_GET_INT(joaat("sp1_flying_ability"), &iVar16, -1);
	}
	else if (func_360(2))
	{
		STATS::STAT_GET_INT(joaat("sp2_flying_ability"), &iVar16, -1);
	}
	if (iVar16 < 40)
	{
		func_378(uParam0.f_741.f_198, uParam0.f_420[15 /*8*/], 0.0047f, 0.0055f);
		set_text_leading(1);
		Var17 = {*(uParam0.f_316[22 /*2*/])};
		Var19 = {*uParam0.f_741.f_198};
		if (!iLocal_592)
		{
			Var19.f_9 -= 0.08f;
			func_372(&Var17, &Var19);
		}
		if (iLocal_592)
		{
			func_358(uParam0.f_420[14 /*8*/], "FLY_STAT_WARN", &Var17, &Var19, 27f, 2f, 5, 159f);
		}
		else
		{
			func_358(uParam0.f_420[14 /*8*/], "FLY_STAT_WARN", &Var17, &Var19, 18f, 1.55f, 5, 106f);
		}
		func_383(*(uParam0.f_420[14 /*8*/]), 0, 0);
		func_388("Shared", "Info_Icon_32", uParam0[iVar3 /*9*/], 0, 0, 5, 0);
		func_381(uParam0.f_316[22 /*2*/], uParam0.f_741.f_198, "FLY_STAT_WARN", 0);
		func_375(uParam0.f_741.f_198);
	}
	StringCopy(&Var30, "SPR_DESC_", 16);
	StringIntConCat(&Var30, Global_100184 + 1, 16);
	func_373(uParam0[7 /*9*/], 1);
	func_388("SPRRaces", &Var30, uParam0[7 /*9*/], 0, 0, 5, 0);
	func_378(uParam0.f_741.f_198, uParam0.f_420[25 /*8*/], 0.0047f, 0.0055f);
	set_text_leading(1);
	StringCopy(&Var34, "SPR_DESC_", 16);
	if (iVar4)
	{
		StringIntConCat(&Var34, Global_100184 + 1, 16);
	}
	else
	{
		StringIntConCat(&Var34, 0, 16);
	}
	Var38 = {*(uParam0.f_316[16 /*2*/])};
	Var40 = {*uParam0.f_741.f_198};
	if (!iLocal_592)
	{
		Var40.f_9 -= 0.108f;
		func_372(&Var38, &Var40);
	}
	if (iLocal_592)
	{
		func_358(uParam0.f_420[25 /*8*/], &Var34, &Var38, &Var40, 27f, 2f, 5, 159f);
	}
	else
	{
		func_358(uParam0.f_420[25 /*8*/], &Var34, &Var38, &Var40, 18f, 1.55f, 5, 106f);
	}
	func_383(*(uParam0.f_420[25 /*8*/]), 0, 0);
	func_381(uParam0.f_316[16 /*2*/], uParam0.f_741.f_198, &Var34, 0);
	func_375(uParam0.f_741.f_198);
	func_382(uParam0.f_741.f_198);
	func_381(uParam0.f_316[4 /*2*/], uParam0.f_741.f_198, "SPR_AWARDS_SUB", 0);
	func_381(uParam0.f_316[8 /*2*/], uParam0.f_741.f_198, "SPR_BEST", 0);
	func_379(uParam0.f_741.f_198);
	func_383(*(uParam0.f_420[22 /*8*/]), 0, 0);
	func_378(uParam0.f_741.f_198, uParam0.f_420[22 /*8*/], 0, 0);
	func_366(uParam0.f_316[13 /*2*/], uParam0.f_741.f_198, floor(Local_51.f_112[Global_100184]) * 1000, 6, "", 1, 0);
	func_375(uParam0.f_741.f_198);
	func_383(*(uParam0.f_420[23 /*8*/]), 0, 0);
	func_378(uParam0.f_741.f_198, uParam0.f_420[23 /*8*/], 0, 0);
	func_366(uParam0.f_316[14 /*2*/], uParam0.f_741.f_198, floor(Local_51.f_112[Global_100184] - Local_51.f_106[Global_100184] / 2f + Local_51.f_106[Global_100184]) * 1000, 6, "", 1, 0);
	func_375(uParam0.f_741.f_198);
	func_383(*(uParam0.f_420[24 /*8*/]), 0, 0);
	func_378(uParam0.f_741.f_198, uParam0.f_420[24 /*8*/], 0, 0);
	func_366(uParam0.f_316[15 /*2*/], uParam0.f_741.f_198, floor(Local_51.f_106[Global_100184]) * 1000, 6, "", 1, 0);
	func_375(uParam0.f_741.f_198);
	func_382(uParam0.f_741.f_198);
}

float func_358(auto uParam0, char* sParam1, float fParam2, auto uParam3, float fParam4, float fParam5, int iParam6, float fParam7)
{
	int iVar0;
	int iVar1;
	
	func_359(uParam3, 0);
	_set_text_gxt_entry(sParam1);
	iVar0 = _0x9040DFB09BE75706(*fParam2, *fParam2.f_1);
	iVar1 = 720;
	if (!get_is_widescreen())
	{
		iVar1 = 480;
	}
	*uParam0.f_3 = func_251(to_float(iVar0) * fParam4 - fParam5, iVar1);
	*uParam0.f_1 = func_251(fParam7 + to_float(iParam6) + to_float(iVar0) * 0.5f * fParam4 - fParam5 * 0.5f, iVar1);
	return 0f;
}

void func_359(auto uParam0, int iParam1)
{
	set_text_font(*uParam0);
	if (!*uParam0.f_8 == 0f || !*uParam0.f_9 == 0f)
	{
		set_text_wrap(*uParam0.f_8, *uParam0.f_9);
	}
	set_text_scale(*uParam0.f_1, *uParam0.f_2);
	set_text_colour(*uParam0.f_3, *uParam0.f_4, *uParam0.f_5, *uParam0.f_6);
	switch (*uParam0.f_7)
	{
		case 0:
			break;
		
		case 1:
			set_text_outline();
			set_text_drop_shadow();
			break;
		
		case 3:
			set_text_drop_shadow();
			break;
		
		case 2:
			set_text_outline();
			break;
	}
	if (iParam1)
	{
		_set_2d_layer(4);
	}
}

int func_360(int iParam0)
{
	func_154();
	return iParam0 == Global_101154.f_1826.f_539.f_3549;
}

void func_361(auto uParam0)
{
	func_362(uParam0, 107);
}

void func_362(auto uParam0, int iParam1)
{
	auto uVar0;
	auto uVar1;
	auto uVar2;
	auto uVar3;
	
	get_hud_colour(iParam1, &uVar0, &uVar1, &uVar2, &uVar3);
	*uParam0.f_4 = uVar0;
	*uParam0.f_5 = uVar1;
	*uParam0.f_6 = uVar2;
}

void func_363(auto uParam0)
{
	func_362(uParam0, 108);
}

void func_364(auto uParam0)
{
	func_362(uParam0, 109);
}

void func_365(auto uParam0)
{
	*uParam0.f_4 = 0;
	*uParam0.f_5 = 0;
	*uParam0.f_6 = 0;
	*uParam0.f_7 = 128;
}

void func_366(auto uParam0, auto uParam1, int iParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	char* sVar0;
	
	if (func_369())
	{
		func_359(uParam1, 0);
		set_text_right_justify(iParam6);
		set_text_centre(iParam5);
		if (func_50(sParam4))
		{
			sVar0 = "STRING";
		}
		else
		{
			sVar0 = sParam4;
		}
		_set_text_entry(sVar0);
		add_text_component_substring_time(iParam2, iParam3);
		_draw_text(func_368(*uParam0), func_367(*uParam0.f_1), 0);
	}
}

float func_367(float fParam0)
{
	return fParam0 + fLocal_13;
}

float func_368(float fParam0)
{
	return fParam0 + fLocal_12;
}

bool func_369()
{
	if (func_370())
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

auto func_370()
{
	return Global_1312438;
}

void func_371(auto uParam0)
{
	*uParam0.f_4 = 0;
	*uParam0.f_5 = 0;
	*uParam0.f_6 = 0;
	*uParam0.f_7 = 255;
}

void func_372(float fParam0, auto uParam1)
{
	*fParam0 -= 0.5f * 1.33f + 0.5f;
	*uParam1.f_8 -= 0.5f * 1.33f + 0.5f;
	*uParam1.f_9 -= 0.5f * 1.33f + 0.5f;
}

void func_373(float fParam0, int iParam1)
{
	*fParam0.f_4 = 255;
	*fParam0.f_5 = 255;
	*fParam0.f_6 = 255;
	if (iParam1 == 1)
	{
		*fParam0.f_7 = 255;
	}
}

void func_374(float fParam0, int iParam1)
{
	if (!iParam1)
	{
		*fParam0 -= 0.5f * 1.33f + 0.5f;
	}
	*fParam0.f_2 *= 1.33f;
}

void func_375(auto uParam0)
{
	*uParam0.f_8 = 0f;
	*uParam0.f_9 = 0f;
}

void func_376(auto uParam0, auto uParam1, char* sParam2, int iParam3, int iParam4)
{
	char* sVar0;
	
	sVar0 = sParam2;
	if (!func_50(sVar0))
	{
		if (func_369())
		{
			func_359(uParam1, 0);
			set_text_right_justify(iParam4);
			set_text_centre(iParam3);
			func_377(func_368(*uParam0), func_367(*uParam0.f_1), sVar0, 0);
		}
	}
}

void func_377(float fParam0, float fParam1, char* sParam2, int iParam3)
{
	_set_text_entry(sParam2);
	_draw_text(fParam0, fParam1, iParam3);
}

void func_378(auto uParam0, auto uParam1, float fParam2, float fParam3)
{
	*uParam0.f_8 = *uParam1 - *uParam1.f_2 / 2f;
	*uParam0.f_9 = *uParam1 + *uParam1.f_2 / 2f;
	*uParam0.f_8 += fParam2;
	*uParam0.f_9 -= fParam3;
}

void func_379(auto uParam0)
{
	*uParam0.f_3 = 0;
	*uParam0.f_4 = 0;
	*uParam0.f_5 = 0;
	func_380(uParam0, 2);
}

void func_380(auto uParam0, int iParam1)
{
	auto uVar0;
	auto uVar1;
	auto uVar2;
	auto uVar3;
	
	get_hud_colour(iParam1, &uVar0, &uVar1, &uVar2, &uVar3);
	*uParam0.f_3 = uVar0;
	*uParam0.f_4 = uVar1;
	*uParam0.f_5 = uVar2;
}

void func_381(float fParam0, auto uParam1, char* sParam2, int iParam3)
{
	if (iParam3)
	{
		_set_2d_layer(1);
	}
	func_376(fParam0, uParam1, sParam2, 0, 0);
}

void func_382(auto uParam0)
{
	func_380(uParam0, 1);
}

void func_383(struct<8> Param0, int iParam1, int iParam2)
{
	struct<8> Var0;
	
	Var0 = {Param0};
	switch (iParam8)
	{
		case 2:
			func_387(&Var0);
			break;
		
		case 1:
			func_386(&Var0);
			break;
		
		case 3:
			func_385(&Var0);
			break;
		
		case 4:
			func_384(&Var0);
			break;
	}
	if (func_369())
	{
		if (iParam9 == 1)
		{
			draw_rect(func_368(Var0), func_367(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, 0);
		}
		else
		{
			draw_rect(func_368(Var0), func_367(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, 0);
		}
	}
}

void func_384(auto uParam0)
{
	*uParam0.f_4 = 200;
	*uParam0.f_5 = 20;
	*uParam0.f_6 = 20;
	*uParam0.f_7 = 204;
}

void func_385(auto uParam0)
{
	*uParam0.f_4 = 255;
	*uParam0.f_5 = 255;
	*uParam0.f_6 = 255;
	*uParam0.f_7 = 255;
}

void func_386(auto uParam0)
{
	*uParam0.f_4 -= 50;
	*uParam0.f_5 -= 50;
	*uParam0.f_6 -= 50;
}

void func_387(auto uParam0)
{
	*uParam0.f_4 = 0;
	*uParam0.f_5 = 0;
	*uParam0.f_6 = 0;
	*uParam0.f_7 = 150;
}

void func_388(char* sParam0, char* sParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	struct<9> Var0;
	
	Var0 = {*fParam2};
	switch (iParam4)
	{
		case 0:
			func_395(&Var0);
			break;
		
		case 1:
			func_394(&Var0);
			break;
		
		case 5:
			func_393(&Var0);
			break;
		
		case 6:
			func_392(&Var0);
			break;
		
		case 7:
			func_391(&Var0);
			break;
		
		case 8:
			func_390(&Var0);
			break;
		
		case 9:
			func_389(&Var0);
			break;
	}
	if (func_369())
	{
		_set_2d_layer(iParam5);
		if (iParam3 == 1)
		{
			draw_sprite(sParam0, sParam1, func_368(Var0), func_367(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_8, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, iParam6);
		}
		else
		{
			draw_sprite(sParam0, sParam1, func_368(Var0), func_367(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_8, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, iParam6);
		}
		_set_2d_layer(4);
	}
}

void func_389(auto uParam0)
{
	*uParam0.f_4 = 128;
	*uParam0.f_5 = 128;
	*uParam0.f_6 = 128;
}

void func_390(auto uParam0)
{
	*uParam0.f_7 = 2;
}

void func_391(auto uParam0)
{
	*uParam0.f_7 = 5;
}

void func_392(auto uParam0)
{
	*uParam0.f_4 = 0;
	*uParam0.f_5 = 0;
	*uParam0.f_6 = 0;
	*uParam0.f_7 = 70;
}

void func_393(auto uParam0)
{
	*uParam0.f_4 = 0;
	*uParam0.f_5 = 0;
	*uParam0.f_6 = 0;
	*uParam0.f_7 = 100;
}

void func_394(auto uParam0)
{
	*uParam0.f_4 -= 50;
	*uParam0.f_5 -= 50;
	*uParam0.f_6 -= 50;
}

void func_395(auto uParam0)
{
	*uParam0.f_4 = *uParam0.f_4;
	*uParam0.f_5 = *uParam0.f_5;
	*uParam0.f_6 = *uParam0.f_6;
	*uParam0.f_7 = *uParam0.f_7;
}

bool func_396(auto uParam0, auto uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iLocal_527 == 1)
	{
		return true;
	}
	if (iLocal_528)
	{
		return false;
	}
	if (timera() < 500)
	{
		return true;
	}
	if (iLocal_526)
	{
		if (is_control_just_released(2, 201))
		{
			iLocal_520 = get_sound_id();
			play_sound_frontend(iLocal_520, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			iLocal_527 = 1;
			iLocal_528 = 1;
			*uParam0 = 0;
			return true;
		}
		else if (is_control_just_released(2, 202))
		{
			iLocal_520 = get_sound_id();
			play_sound_frontend(iLocal_520, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			clear_help(1);
			func_519(&(Local_51.f_119));
			iLocal_527 = 1;
		}
		else
		{
			return true;
		}
	}
	else if (is_control_just_released(2, 202) || is_control_just_released(2, 238))
	{
		iLocal_520 = get_sound_id();
		play_sound_frontend(iLocal_520, "QUIT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
		func_243(&(Local_51.f_119), 0, 0, 1, 1);
		func_242(&(Local_51.f_119), "FE_HLP29", 2, 201, 1, 1, 0);
		func_242(&(Local_51.f_119), "FE_HLP31", 2, 202, 1, 1, 0);
		func_4(&iLocal_522);
		iLocal_527 = 1;
		clear_help(1);
		return true;
	}
	iVar0 = 0;
	if (GAMEPLAY::IS_PC_VERSION() && iLocal_526 == 0)
	{
		if (_is_input_just_disabled(2))
		{
			Global_2562129 = func_400(0.201f, 0.222f, 0.198f, 0.0375f, 0.034f, 5, 255, 0, 1);
			func_399(0, Global_100184, 1);
			if (func_398())
			{
				if (Global_2562129 == Global_100184)
				{
					iVar0 = 1;
				}
				else
				{
					iLocal_520 = get_sound_id();
					play_sound(iLocal_520, "NAV_UP_DOWN", "HUD_MINI_GAME_SOUNDSET", 0, 0, 1);
					Global_100184 = Global_2562129;
					func_519(&(Local_51.f_119));
				}
			}
		}
	}
	if (is_control_just_released(2, 201) || iVar0 == 1)
	{
		iVar0 = 0;
		if (Global_101154.f_17733.f_12[Global_100184 /*8*/].f_4 == 0)
		{
			iLocal_520 = get_sound_id();
			play_sound(iLocal_520, "CANCEL", "HUD_MINI_GAME_SOUNDSET", 0, 0, 1);
		}
		else
		{
			iLocal_520 = get_sound_id();
			play_sound(iLocal_520, "SELECT", "HUD_MINI_GAME_SOUNDSET", 0, 0, 1);
			*uParam0 = 1;
			return false;
		}
	}
	if ((is_control_just_released(2, 188) || func_397(0, uParam1)) || is_control_just_pressed(2, 241))
	{
		iVar1 = Global_100184 - 1;
		if (iVar1 < 0)
		{
			iVar1 = 4;
		}
		iLocal_520 = get_sound_id();
		play_sound(iLocal_520, "NAV_UP_DOWN", "HUD_MINI_GAME_SOUNDSET", 0, 0, 1);
		Global_100184 = iVar1;
		func_519(&(Local_51.f_119));
	}
	if ((is_control_just_released(2, 187) || func_397(1, uParam1)) || is_control_just_pressed(2, 242))
	{
		iVar2 = Global_100184 + 1;
		if (iVar2 > 4)
		{
			iVar2 = 0;
		}
		iLocal_520 = get_sound_id();
		play_sound(iLocal_520, "NAV_UP_DOWN", "HUD_MINI_GAME_SOUNDSET", 0, 0, 1);
		Global_100184 = iVar2;
		func_519(&(Local_51.f_119));
	}
	return true;
}

int func_397(int iParam0, auto uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = false;
	iVar1 = get_control_value(2, 195);
	iVar2 = get_control_value(2, 196);
	if (absi(iVar1) < 28 && absi(iVar2) < 28)
	{
		*uParam1 = 1;
		*uParam1.f_1 = 0;
		return false;
	}
	if (GAMEPLAY::GET_GAME_TIMER() < *uParam1.f_1 + 250)
	{
		*uParam1 = 0;
		return false;
	}
	else
	{
		*uParam1 = 1;
	}
	if (!*uParam1)
	{
		return false;
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar2 < 100;
			break;
		
		case 1:
			iVar0 = iVar2 > 156;
			break;
		
		case 2:
			iVar0 = iVar1 < 100;
			break;
		
		case 3:
			iVar0 = iVar1 > 156;
			break;
	}
	if (iVar0)
	{
		*uParam1.f_1 = GAMEPLAY::GET_GAME_TIMER();
		*uParam1 = 0;
	}
	return iVar0;
}

bool func_398()
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

bool func_399(int iParam0, auto uParam1, int iParam2)
{
	if (!_is_input_disabled(2))
	{
		return false;
	}
	if (is_pause_menu_active() || is_warning_message_active())
	{
		return false;
	}
	if (iParam2)
	{
		_show_cursor_this_frame();
	}
	if (Global_2562129 == -6)
	{
		_0x8DB8CFFD58B62552(4);
		if (iParam0 && is_control_pressed(2, 237))
		{
			return true;
		}
		else
		{
			Global_2562129 = -1;
			return false;
		}
	}
	if (((Global_2562129 > -1 || Global_2562129 == -3) || Global_2562129 == -2) || _0x3D9ACB1EB139E702())
	{
		_0x8DB8CFFD58B62552(1);
		return false;
	}
	if (Global_2562129 == -1 && iParam0)
	{
		if (is_control_pressed(2, 237))
		{
			_0x8DB8CFFD58B62552(4);
			Global_2562129 = -6;
			return true;
		}
		else
		{
			_0x8DB8CFFD58B62552(3);
			return false;
		}
	}
	_0x8DB8CFFD58B62552(1);
	return false;
}

int func_400(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	
	iVar7 = -1;
	if (!_is_input_disabled(2))
	{
		return -1;
	}
	CONTROLS::DISABLE_CONTROL_ACTION(2, 200, 1);
	_show_cursor_this_frame();
	if (iParam8)
	{
		if (!get_is_widescreen())
		{
			fParam0 -= 0.5f * 1.33f + 0.5f;
			fParam2 *= 1.33f;
		}
	}
	if (iParam7)
	{
		_set_screen_draw_position(76, 84);
		_0xF5A2C681787E579D(-0.05f, -0.05f, 0f, 0f);
		fVar5 = fParam0;
		fVar6 = fParam1;
		_0x6DD8F5AA635EB4B2(fParam0, fParam1, &fParam0, &fParam1);
		_0xE3A3DB414A373DAB();
	}
	fVar0 = fParam0 + fParam2;
	fVar1 = fParam1 + fParam3 * IntToFloat(iParam5);
	fVar2 = get_control_normal(2, 239);
	fVar3 = get_control_normal(2, 240);
	if (((fVar2 >= fParam0 && fVar2 <= fVar0) && fVar3 >= fParam1) && fVar3 <= fVar1)
	{
		fVar4 = fVar3 - fParam1;
		iVar7 = floor(fVar4 / fParam3);
		if (iParam7)
		{
			_set_screen_draw_position(76, 84);
			_0xF5A2C681787E579D(-0.05f, -0.05f, 0f, 0f);
			func_401(fVar5, fVar6 + IntToFloat(iVar7) * fParam3, fParam2, fParam4, 255, 255, 255, iParam6);
			_0xE3A3DB414A373DAB();
		}
		else
		{
			func_401(fParam0, fParam1 + IntToFloat(iVar7) * fParam3, fParam2, fParam4, 255, 255, 255, iParam6);
		}
		return iVar7;
	}
	return -1;
}

void func_401(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	draw_rect(fParam0 + fParam2 * 0.5f, fParam1 + fParam3 * 0.5f, fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

bool func_402()
{
	int iVar0;
	
	switch (iLocal_521)
	{
		case 0:
			clear_help(1);
			request_additional_text("SP_SPR", 3);
			request_streamed_texture_dict("SPRRaces", false);
			request_streamed_texture_dict("MPHUD", false);
			iLocal_521 = 1;
			break;
		
		case 1:
			if (has_this_additional_text_loaded("SP_SPR", 3))
			{
				if (has_streamed_texture_dict_loaded("SPRRaces"))
				{
					if (has_streamed_texture_dict_loaded("MPHUD"))
					{
						iLocal_521 = 2;
					}
				}
			}
			break;
		
		case 2:
			set_scaleform_movie_as_no_longer_needed(&(Local_51.f_119));
			Local_51.f_119 = 0;
			func_519(&(Local_51.f_119));
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				set_player_control(player_id(), false, 512);
			}
			func_127(1);
			set_debug_lines_and_spheres_drawing_active(1);
			set_vehicle_doors_locked(Local_51.f_1, 4);
			func_353();
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Local_51.f_11)
			{
				iLocal_531[iVar0] = -1;
				iVar0++;
			}
			func_406(&uLocal_593);
			func_403();
			_start_screen_effect("MinigameTransitionIn", false, 1);
			iLocal_521 = 3;
			break;
		
		case 3:
			return true;
			break;
	}
	return false;
}

void func_403()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_101154.f_17733.f_12[iVar0 /*8*/] = {func_405(iVar0)};
		MemCopy(&(Local_51.f_24[iVar0 /*8*/]), {Global_101154.f_17733.f_12[iVar0 /*8*/]}, 8);
		Local_51.f_106[iVar0] = func_404(iVar0);
		Local_51.f_112[iVar0] = func_22(iVar0);
		if (iVar0 < 5 - 1)
		{
			if (Global_101154.f_17733.f_6[iVar0] > Local_51.f_112[iVar0] || Global_101154.f_17733.f_6[iVar0] <= 0f)
			{
				Global_101154.f_17733.f_12[iVar0 + 1 /*8*/].f_4 = 0;
			}
			else
			{
				Global_101154.f_17733.f_12[iVar0 + 1 /*8*/].f_4 = 1;
			}
		}
		iVar0++;
	}
	Global_101154.f_17733.f_12[0 /*8*/].f_4 = 1;
}

float func_404(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 70f;
			break;
		
		case 1:
			return 75f;
			break;
		
		case 2:
			return 72f;
			break;
		
		case 3:
			return 120f;
			break;
		
		case 4:
			return 115f;
			break;
	}
	return -1f;
}

struct<4> func_405(int iParam0)
{
	char[16] cVar0;
	
	StringCopy(&cVar0, "", 16);
	switch (iParam0)
	{
		case 0:
			StringCopy(&cVar0, "BRIDGEBINGE", 16);
			break;
		
		case 1:
			StringCopy(&cVar0, "VINEWOOD", 16);
			break;
		
		case 2:
			StringCopy(&cVar0, "BRIDGEWORK", 16);
			break;
		
		case 3:
			StringCopy(&cVar0, "AIRPORT", 16);
			break;
		
		case 4:
			StringCopy(&cVar0, "ALTITUDE", 16);
			break;
	}
	return cVar0;
}

void func_406(auto uParam0)
{
	func_409();
	iLocal_592 = get_is_widescreen();
	func_282(uParam0);
	func_260(uParam0.f_741);
	func_407(uParam0);
}

void func_407(auto uParam0)
{
	int iVar0;
	auto uVar1;
	auto uVar2;
	auto uVar3;
	auto uVar4;
	int iVar5;
	
	iVar0 = get_is_widescreen();
	func_259(uParam0.f_316[0 /*2*/], 262f, 71f - func_408(0.00278f, 720, 1), 1);
	func_259(uParam0.f_316[1 /*2*/], 257f + 127f, 125f - func_408(0.00417f, 720, 1), 1);
	func_259(uParam0.f_316[2 /*2*/], 513f + 127f, 125f - func_408(0.00417f, 720, 1), 1);
	func_259(uParam0.f_316[3 /*2*/], 769f + 127f, 125f - func_408(0.00417f, 720, 1), 1);
	func_259(uParam0.f_316[17 /*2*/], 257f + func_258(0.0047f, 1280, 1), 162f, 1);
	func_259(uParam0.f_316[18 /*2*/], 257f + func_258(0.0047f, 1280, 1), 189f, 1);
	func_259(uParam0.f_316[19 /*2*/], 257f + func_258(0.0047f, 1280, 1), 216f, 1);
	func_259(uParam0.f_316[20 /*2*/], 257f + func_258(0.0047f, 1280, 1), 243f, 1);
	func_259(uParam0.f_316[21 /*2*/], 257f + func_258(0.0047f, 1280, 1), 270f, 1);
	func_259(uParam0.f_316[22 /*2*/], 257f + func_258(0.0047f, 1280, 1), 297f, 1);
	func_259(uParam0.f_316[16 /*2*/], 513f + func_258(0.0047f, 1280, 1), 299f - func_408(0.00278f, 720, 1), 1);
	func_259(uParam0.f_316[4 /*2*/], 769f + func_258(0.0047f, 1280, 1), 297f, 1);
	func_259(uParam0.f_316[5 /*2*/], 769f, 297f, 1);
	func_259(uParam0.f_316[8 /*2*/], 769f + func_258(0.0047f, 1280, 1), 351f, 1);
	func_259(uParam0.f_316[9 /*2*/], 324f, 351f, 1);
	func_259(uParam0.f_316[6 /*2*/], 769f + func_258(0.0047f, 1280, 1), 324f - func_408(0.00278f, 720, 1), 1);
	func_259(uParam0.f_316[7 /*2*/], 324f, 324f - func_408(0.00278f, 720, 1), 1);
	func_259(uParam0.f_316[15 /*2*/], 810f, 459f, 1);
	func_259(uParam0.f_316[14 /*2*/], 896f, 459f, 1);
	func_259(uParam0.f_316[13 /*2*/], 982f, 459f, 1);
	func_255(uParam0[0 /*9*/], 257f, 55f, 766f, 105f, 1);
	get_hud_colour(117, &uVar1, &uVar2, &uVar3, &uVar4);
	func_254(uParam0[0 /*9*/], uVar1, uVar2, uVar3, uVar4);
	func_255(uParam0[1 /*9*/], 496f, 171f, 32f, 32f, 0);
	func_254(uParam0[1 /*9*/], 255, 255, 255, 255);
	func_255(uParam0[2 /*9*/], 496f, 198f, 32f, 32f, 0);
	func_254(uParam0[2 /*9*/], 255, 255, 255, 255);
	func_255(uParam0[3 /*9*/], 496f, 225f, 32f, 32f, 0);
	func_254(uParam0[3 /*9*/], 255, 255, 255, 255);
	func_255(uParam0[4 /*9*/], 496f, 252f, 32f, 32f, 0);
	func_254(uParam0[4 /*9*/], 255, 255, 255, 255);
	func_255(uParam0[5 /*9*/], 496f, 279f, 32f, 32f, 0);
	func_254(uParam0[5 /*9*/], 255, 255, 255, 255);
	func_255(uParam0[6 /*9*/], 486f + func_258(0.0047f, 1280, 1), 310f, 32f, 32f, 0);
	func_254(uParam0[6 /*9*/], 255, 255, 255, 255);
	func_255(uParam0[7 /*9*/], 640f, 224f, 256f, 256f, 0);
	func_254(uParam0[7 /*9*/], 255, 255, 255, 255);
	func_255(uParam0[9 /*9*/], 896f, 223f, 128f, 128f, 0);
	func_254(uParam0[9 /*9*/], 255, 255, 255, 255);
	func_255(uParam0[13 /*9*/], 770.5f, 374.5f, 80f, 80f, 1);
	func_254(uParam0[13 /*9*/], 255, 255, 255, 255);
	func_255(uParam0[12 /*9*/], 856f, 374.5f, 80f, 80f, 1);
	func_254(uParam0[12 /*9*/], 255, 255, 255, 255);
	func_255(uParam0[11 /*9*/], 941.5f, 374.5f, 80f, 80f, 1);
	func_254(uParam0[11 /*9*/], 255, 255, 255, 255);
	func_249(uParam0.f_420[3 /*8*/], 257f, 114f, 254f, 5f, 1);
	func_248(uParam0.f_420[3 /*8*/], 70, 70, 130, 255);
	func_249(uParam0.f_420[4 /*8*/], 513f, 114f, 254f, 5f, 1);
	func_248(uParam0.f_420[4 /*8*/], 70, 70, 130, 255);
	func_249(uParam0.f_420[5 /*8*/], 769f, 114f, 254f, 5f, 1);
	func_248(uParam0.f_420[5 /*8*/], 70, 70, 130, 255);
	func_249(uParam0.f_420[0 /*8*/], 257f, 119f, 254f, 26f, 1);
	func_247(uParam0.f_420[0 /*8*/], 1, 1);
	func_249(uParam0.f_420[1 /*8*/], 513f, 119f, 254f, 26f, 1);
	func_247(uParam0.f_420[1 /*8*/], 1, 1);
	func_249(uParam0.f_420[2 /*8*/], 769f, 119f, 254f, 26f, 1);
	func_247(uParam0.f_420[2 /*8*/], 1, 1);
	func_249(uParam0.f_420[7 /*8*/], 513f, 159f, 254f, 133f, 1);
	func_247(uParam0.f_420[7 /*8*/], 117, 1);
	func_249(uParam0.f_420[8 /*8*/], 769f, 159f, 254f, 133f, 1);
	func_247(uParam0.f_420[8 /*8*/], 117, 1);
	func_249(uParam0.f_420[9 /*8*/], 257f, 159f, 254f, 25f, 1);
	func_247(uParam0.f_420[9 /*8*/], 117, 1);
	func_249(uParam0.f_420[10 /*8*/], 257f, 186f, 254f, 25f, 1);
	func_247(uParam0.f_420[10 /*8*/], 117, 1);
	func_249(uParam0.f_420[11 /*8*/], 257f, 213f, 254f, 25f, 1);
	func_247(uParam0.f_420[11 /*8*/], 117, 1);
	func_249(uParam0.f_420[12 /*8*/], 257f, 240f, 254f, 25f, 1);
	func_247(uParam0.f_420[12 /*8*/], 117, 1);
	func_249(uParam0.f_420[13 /*8*/], 257f, 267f, 254f, 25f, 1);
	func_247(uParam0.f_420[13 /*8*/], 117, 1);
	func_249(uParam0.f_420[26 /*8*/], 257f, 294f, 254f, 2f, 1);
	func_247(uParam0.f_420[26 /*8*/], 1, 1);
	func_249(uParam0.f_420[14 /*8*/], 257f, 294f, 254f, 75f, 1);
	func_247(uParam0.f_420[14 /*8*/], 117, 1);
	func_249(uParam0.f_420[15 /*8*/], 257f, 294f, 254f - 32f, 75f, 1);
	func_247(uParam0.f_420[15 /*8*/], 1, 1);
	func_249(uParam0.f_420[25 /*8*/], 513f, 294f, 254f, 133f, 1);
	func_247(uParam0.f_420[25 /*8*/], 117, 1);
	func_249(uParam0.f_420[16 /*8*/], 769f, 294f, 254f, 25f, 1);
	func_247(uParam0.f_420[16 /*8*/], 117, 1);
	func_249(uParam0.f_420[17 /*8*/], 769f, 321f, 254f, 25f, 1);
	func_247(uParam0.f_420[17 /*8*/], 117, 1);
	func_249(uParam0.f_420[18 /*8*/], 769f, 348f, 254f, 25f, 1);
	func_247(uParam0.f_420[18 /*8*/], 117, 1);
	func_249(uParam0.f_420[21 /*8*/], 769f, 375f, 83f, 84f, 1);
	func_247(uParam0.f_420[21 /*8*/], 117, 1);
	func_249(uParam0.f_420[20 /*8*/], 854f, 375f, 84f, 84f, 1);
	func_247(uParam0.f_420[20 /*8*/], 117, 1);
	func_249(uParam0.f_420[19 /*8*/], 940f, 375f, 83f, 84f, 1);
	func_247(uParam0.f_420[19 /*8*/], 117, 1);
	func_249(uParam0.f_420[22 /*8*/], 769f, 456f, 83f, 25f, 1);
	func_247(uParam0.f_420[22 /*8*/], 109, 1);
	func_249(uParam0.f_420[23 /*8*/], 854f, 456f, 84f, 25f, 1);
	func_247(uParam0.f_420[23 /*8*/], 108, 1);
	func_249(uParam0.f_420[24 /*8*/], 940f, 456f, 83f, 25f, 1);
	func_247(uParam0.f_420[24 /*8*/], 107, 1);
	if (!iVar0)
	{
		iVar5 = 0;
		while (iVar5 < 14)
		{
			*uParam0[iVar5 /*9*/] -= 0.5f * 1.33f + 0.5f;
			*(uParam0[iVar5 /*9*/]).f_2 *= 1.33f;
			iVar5++;
		}
		iVar5 = 0;
		while (iVar5 < 23)
		{
			*uParam0.f_316[iVar5 /*2*/] -= 0.5f * 1.33f + 0.5f;
			iVar5++;
		}
		iVar5 = 0;
		while (iVar5 < 27)
		{
			*uParam0.f_420[iVar5 /*8*/] -= 0.5f * 1.33f + 0.5f;
			*(uParam0.f_420[iVar5 /*8*/]).f_2 *= 1.33f;
			iVar5++;
		}
	}
	*uParam0.f_986 = 1;
}

auto func_408(float fParam0, int iParam1, int iParam2)
{
	auto uVar0;
	Vector3 fVar1;
	
	if (iParam1 == 0)
	{
		get_screen_resolution(&uVar0, &iParam1);
	}
	fVar1 = fParam0 * IntToFloat(iParam1);
	if (iParam2)
	{
		return to_float(round(fVar1));
	}
	return fVar1;
}

void func_409()
{
	int iVar0;
	
	leaderboards_clear_cache_data();
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_1838575.f_81[iVar0] = 0;
		iVar0++;
	}
}

void func_410(auto uParam0)
{
	int iVar0;
	struct<35> Var1;
	
	*uParam0[0] = 0;
	*uParam0[1] = 0;
	*uParam0[2] = 0;
	*uParam0.f_4 = 0;
	*uParam0.f_6 = 0;
	*uParam0.f_7 = {Var1};
	*uParam0.f_42 = 0;
	*uParam0.f_43 = 0;
	*uParam0.f_44 = 0;
	*uParam0.f_44.f_1 = 0;
	*uParam0.f_44.f_2 = 0;
	*uParam0.f_44.f_3 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(uParam0.f_44.f_3.f_1[iVar0 /*16*/], "", 32);
		StringCopy(uParam0.f_44.f_3.f_1[iVar0 /*16*/].f_8, "", 32);
		iVar0++;
	}
	*uParam0.f_113[0 /*66*/] = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(uParam0.f_113[0 /*66*/].f_1[iVar0 /*16*/], "", 32);
		StringCopy(uParam0.f_113[0 /*66*/].f_1[iVar0 /*16*/].f_8, "", 32);
		iVar0++;
	}
}

bool func_411(auto uParam0, int iParam1)
{
	int iVar0;
	
	if (is_player_online())
	{
		if (!iLocal_529)
		{
			iVar0 = 0;
			if (*(uParam0.f_358[0 /*189*/]).f_13 > 0f)
			{
				if (*(uParam0.f_358[0 /*189*/]).f_13 <= Local_51.f_106[Local_51.f_10])
				{
					iVar0 = 1;
				}
				else if (*(uParam0.f_358[0 /*189*/]).f_13 <= Local_51.f_112[Local_51.f_10] - Local_51.f_106[Local_51.f_10] / 2f + Local_51.f_106[Local_51.f_10])
				{
					iVar0 = 2;
				}
				else if (*(uParam0.f_358[0 /*189*/]).f_13 <= Local_51.f_112[Local_51.f_10])
				{
					iVar0 = 3;
				}
			}
			if (iVar0 == 0)
			{
			}
			func_439(Local_51.f_10, &(Local_51.f_65[Local_51.f_10 /*8*/]));
			if (iParam1)
			{
				func_436(Local_51.f_10, *(uParam0.f_358[0 /*189*/]).f_13, iVar0);
				iLocal_529 = 1;
				return true;
			}
			else if (func_412(Local_51.f_10, *(uParam0.f_358[0 /*189*/]).f_13, iVar0))
			{
				iLocal_529 = 1;
				return true;
			}
		}
	}
	else if (iParam1)
	{
		iLocal_529 = 1;
	}
	return false;
}

bool func_412(int iParam0, float fParam1, int iParam2)
{
	if (Global_1835013.f_1 && !Global_1835013.f_2)
	{
		func_436(iParam0, fParam1, iParam2);
		Global_1835013.f_2 = 1;
	}
	if (func_413(&uLocal_1580))
	{
		Global_1835388 = 1;
		return true;
	}
	return false;
}

bool func_413(auto uParam0)
{
	struct<98> Var0;
	struct<4> Var98;
	struct<37> Var106;
	struct<13> Var175;
	int iVar188;
	
	Var0.f_19.f_1 = 4;
	Var106.f_3 = 32;
	Var106.f_36 = 32;
	if (func_435(*uParam0.f_44))
	{
		Var175 = {Global_1835013.f_361};
	}
	else
	{
		Var175 = {func_434(player_id())};
	}
	switch (Global_1835013)
	{
		case 0:
			if (func_433(uParam0.f_4, uParam0.f_5, uParam0.f_44, &Var175))
			{
				func_432(&Var98, uParam0.f_44);
				Global_1835013.f_142 = *uParam0.f_44;
				Global_1835013.f_142.f_1 = leaderboards_get_number_of_columns(*uParam0.f_44, 0);
				iVar188 = false;
				while (iVar188 < Global_1835013.f_142.f_1)
				{
					if (!func_431(*uParam0.f_44, iVar188))
					{
						if (func_430(*uParam0.f_44, 4, iVar188))
						{
							GAMEPLAY::SET_BIT(&(Global_1835013.f_142.f_2), iVar188);
						}
						else
						{
							GAMEPLAY::CLEAR_BIT(&(Global_1835013.f_142.f_2), iVar188);
						}
					}
					iVar188++;
				}
				if (*uParam0.f_5 && _0xA0F93D5465B3094D(&Var98))
				{
					if (Var98.f_3 > 0)
					{
						_0x34770B9CE0E03B91(0, &Var0);
						if (Var0.f_97 != Global_1835013.f_142.f_1)
						{
						}
						if (!func_429(Var0))
						{
							Global_1835013.f_4 = 1;
						}
						else
						{
							iVar188 = false;
							while (iVar188 < Global_1835013.f_142.f_1)
							{
								if (!func_431(*uParam0.f_44, iVar188))
								{
									if (func_430(*uParam0.f_44, 4, iVar188))
									{
										Global_1835013.f_73.f_36[iVar188] = _0x88578F6EC36B4A3A(0, iVar188);
										if (Global_1835013.f_73.f_36[iVar188] == -1)
										{
											if (iVar188 > Var0.f_97)
											{
												Global_1835013.f_73.f_36[iVar188] = 0;
											}
										}
									}
									else
									{
										Global_1835013.f_73.f_3[iVar188] = _0x38491439B6BA7F7D(0, iVar188);
										if (Global_1835013.f_73.f_3[iVar188] == -1f)
										{
											if (iVar188 > Var0.f_97)
											{
												Global_1835013.f_73.f_3[iVar188] = 0f;
											}
										}
									}
								}
								iVar188++;
							}
						}
					}
					else
					{
						Global_1835013.f_4 = 1;
					}
					_0x71B008056E5692D6();
				}
				else
				{
					Global_1835013.f_4 = 1;
				}
				Global_1835013 = 1;
				func_350(uParam0.f_4, uParam0.f_5, uParam0.f_44);
			}
			break;
		
		case 1:
			Global_1835013.f_1 = 1;
			if (Global_1835013.f_2)
			{
				func_428();
				if (Global_1835013.f_4)
				{
					if (func_427(*uParam0.f_44))
					{
						Global_1835013 = 3;
					}
					else
					{
						Global_1835013 = 2;
					}
				}
				else
				{
					Global_1835013 = 2;
				}
			}
			break;
		
		case 2:
			_0xC38DC1E90D22547C(&(Global_1835013.f_73), &(Global_1835013.f_142), &(Global_1835013.f_211));
			Global_1835013 = 4;
			*uParam0.f_4 = 0;
			*uParam0.f_5 = 0;
			break;
		
		case 3:
			Global_1835013.f_211 = {Global_1835013.f_142};
			Global_1835013 = 4;
			*uParam0.f_4 = 0;
			*uParam0.f_5 = 0;
			break;
		
		case 4:
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_426())
			{
				if (func_425())
				{
					Global_1835013 = 99;
				}
				else
				{
					Global_1835013 = 999;
					return true;
				}
			}
			else
			{
				Global_1835013 = 999;
				return true;
			}
			break;
		
		case 99:
			if (func_427(*uParam0.f_44))
			{
				Global_1835013.f_280 = {Global_1835013.f_142};
			}
			else
			{
				Var106 = Global_1835013.f_142;
				Var106.f_1 = Global_1835013.f_142.f_1;
				Var106.f_2 = Global_1835013.f_142.f_2;
				_0xC38DC1E90D22547C(&Var106, &(Global_1835013.f_142), &(Global_1835013.f_280));
			}
			Global_1835013 = 100;
			*uParam0.f_4 = 0;
			*uParam0.f_5 = 0;
			break;
		
		case 100:
			if (func_414(uParam0.f_4, uParam0.f_5, uParam0.f_44, 1, &Var175, 1, 1, Global_1835013.f_280.f_36[0], Global_1835013.f_280.f_3[0]))
			{
				func_432(&Var98, uParam0.f_44);
				if (*uParam0.f_5 && _0xA0F93D5465B3094D(&Var98))
				{
					if (Var98.f_3 > 0)
					{
						_0x34770B9CE0E03B91(0, &Var0);
						if (are_strings_equal(&(Var0.f_13), ""))
						{
							Global_977900.f_1 = -1;
						}
						else
						{
							Global_977900.f_1 = Var0.f_96;
						}
					}
					else
					{
						Global_977900.f_1 = -1;
					}
					_0x71B008056E5692D6();
				}
				else
				{
					Global_977900.f_1 = -1;
				}
				Global_1835013 = 999;
				func_350(uParam0.f_4, uParam0.f_5, uParam0.f_44);
			}
			break;
		
		case 999:
			return true;
			break;
	}
	return false;
}

bool func_414(auto uParam0, auto uParam1, auto uParam2, int iParam3, auto uParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	auto uVar0;
	auto uVar1;
	
	uVar0 = Global_1835013.f_211.f_36[0];
	uVar1 = Global_1835013.f_211.f_3[0];
	if (iParam6)
	{
		uVar0 = iParam7;
		uVar1 = iParam8;
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_421() && !func_417())
			{
				func_415(*uParam2);
				if (iParam5)
				{
					if (GAMEPLAY::IS_BIT_SET(Global_1835013.f_142.f_2, false))
					{
						if (leaderboards2_read_by_score_int(uParam2, uVar0, iParam3))
						{
							*uParam0++;
						}
						else
						{
							*uParam1 = 0;
							*uParam0 = 3;
						}
					}
					else if (leaderboards2_read_by_score_float(uParam2, uVar1, iParam3))
					{
						*uParam0++;
					}
					else
					{
						*uParam1 = 0;
						*uParam0 = 3;
					}
				}
				else if (leaderboards2_read_by_radius(uParam2, iParam3, uParam4))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		
		case 1:
			if (!leaderboards_read_pending(*uParam2, *uParam2.f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (leaderboards_read_successful(*uParam2, *uParam2.f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		
		case 3:
			return true;
			break;
	}
	return false;
}

void func_415(struct<2> Param0, auto uParam1, auto uParam2, auto uParam3, auto uParam4, auto uParam5, auto uParam6, auto uParam7, auto uParam8, auto uParam9, auto uParam10, auto uParam11, auto uParam12, auto uParam13, auto uParam14, auto uParam15, auto uParam16, auto uParam17, auto uParam18, auto uParam19, auto uParam20, auto uParam21, auto uParam22, auto uParam23, auto uParam24, auto uParam25, auto uParam26, auto uParam27, auto uParam28, auto uParam29, auto uParam30, auto uParam31, auto uParam32, auto uParam33, auto uParam34, auto uParam35, auto uParam36, auto uParam37, auto uParam38, auto uParam39, auto uParam40, auto uParam41, auto uParam42, auto uParam43, auto uParam44, auto uParam45, auto uParam46, auto uParam47, auto uParam48, auto uParam49, auto uParam50, auto uParam51, auto uParam52, auto uParam53, auto uParam54, auto uParam55, auto uParam56, auto uParam57, auto uParam58, auto uParam59, auto uParam60, auto uParam61, auto uParam62, auto uParam63, auto uParam64, auto uParam65, auto uParam66, auto uParam67)
{
	Global_1835008 = 1;
	func_416(&(Global_1835008.f_1), 1, 0);
	Global_1835008.f_3 = Param0;
	Global_1835008.f_4 = Param0.f_1;
}

void func_416(auto uParam0, int iParam1, int iParam2)
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

bool func_417()
{
	if (is_pause_menu_active() && !func_418())
	{
		return true;
	}
	return false;
}

int func_418()
{
	return func_419(player_id());
}

bool func_419(int iParam0)
{
	switch (func_420(iParam0))
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 6:
		case 5:
		case 7:
		case 38:
		case 33:
		case 36:
		case 39:
			return false;
		
		default:
	}
	return true;
}

auto func_420(auto uParam0)
{
	return Global_1587523[uParam0 /*444*/].f_180;
}

bool func_421()
{
	if (_0xA31FD15197B192BD() || Global_1835008)
	{
		func_422();
		return true;
	}
	return false;
}

void func_422()
{
	if (func_423(&(Global_1835008.f_1), 120000, 1))
	{
		leaderboards_read_clear(Global_1835008.f_3, Global_1835008.f_4, -1);
		Global_1835008 = 0;
		func_345(&(Global_1835008.f_1));
	}
}

bool func_423(auto uParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		return true;
	}
	func_424(uParam0, iParam2, 0);
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

void func_424(auto uParam0, int iParam1, int iParam2)
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

int func_425()
{
	return GAMEPLAY::IS_BIT_SET(Global_969327.f_8, true);
}

auto func_426()
{
	return Global_2441456.f_3;
}

bool func_427(int iParam0)
{
	switch (iParam0)
	{
		case 817:
		case 850:
		case 824:
		case 827:
		case 815:
		case 826:
		case 777:
		case 825:
		case 828:
		case 849:
		case 928:
		case 795:
		case 202:
		case 811:
		case 193:
		case 975:
		case 976:
		case 970:
		case 973:
		case 968:
		case 969:
		case 966:
		case 974:
		case 971:
		case 967:
		case 965:
		case 972:
			return true;
			break;
	}
	if (iParam0 >= 998 && iParam0 <= 1197)
	{
		return true;
	}
	return false;
}

void func_428()
{
	Global_1835013.f_73 = Global_1835013.f_142;
	Global_1835013.f_73.f_1 = Global_1835013.f_142.f_1;
	Global_1835013.f_73.f_2 = Global_1835013.f_142.f_2;
	Global_1835013.f_211 = Global_1835013.f_142;
	Global_1835013.f_211.f_1 = Global_1835013.f_142.f_1;
	Global_1835013.f_211.f_2 = Global_1835013.f_142.f_2;
}

int func_429(auto uParam0, auto uParam1, auto uParam2, auto uParam3, auto uParam4, auto uParam5, auto uParam6, auto uParam7, auto uParam8, auto uParam9, auto uParam10, auto uParam11, auto uParam12)
{
	return network_is_handle_valid(&uParam0, 13);
}

bool func_430(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == 190)
	{
		if (iParam2 == 0)
		{
			return false;
		}
	}
	if (iParam0 == 203)
	{
		if (iParam2 == 3 || iParam2 == 6)
		{
			return false;
		}
	}
	if (iParam0 == 912)
	{
		if (iParam2 == 0 || iParam2 == 3)
		{
			return false;
		}
	}
	if ((iParam0 == 762 || iParam0 == 822) || iParam0 == 823)
	{
		if (iParam2 == 0 || iParam2 == 3)
		{
			return false;
		}
	}
	if (iParam0 == 791)
	{
		if (iParam2 == 4)
		{
			return false;
		}
	}
	if (iParam0 == 780)
	{
		if (iParam2 == 3)
		{
			return false;
		}
	}
	if (iParam0 == 777)
	{
		if (iParam2 == 3 || iParam2 == 7)
		{
			return false;
		}
	}
	if (iParam0 == 1200)
	{
		if (iParam2 == 4)
		{
			return false;
		}
	}
	iVar0 = leaderboards_get_column_type(iParam0, iParam1, iParam2);
	switch (iVar0)
	{
		case 1:
		case 2:
			return true;
			break;
	}
	return false;
}

bool func_431(int iParam0, int iParam1)
{
	if (leaderboards_get_column_id(iParam0, 4, iParam1) == 156)
	{
		return true;
	}
	switch (iParam0)
	{
		case 912:
			if (iParam1 == 5)
			{
				return true;
			}
			break;
		
		case 780:
			if (iParam1 == 4)
			{
				return true;
			}
			break;
		
		case 1200:
			if (iParam1 == 5)
			{
				return true;
			}
			break;
	}
	return false;
}

void func_432(auto uParam0, auto uParam1)
{
	*uParam0 = *uParam1;
	*uParam0.f_1 = *uParam1.f_1;
	*uParam0.f_2 = 0;
}

bool func_433(auto uParam0, auto uParam1, auto uParam2, auto uParam3)
{
	switch (*uParam0)
	{
		case 0:
			if (!func_421() && !func_417())
			{
				func_415(*uParam2);
				if (leaderboards2_read_by_handle(uParam2, uParam3))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		
		case 1:
			if (!leaderboards_read_pending(*uParam2, *uParam2.f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (leaderboards_read_successful(*uParam2, *uParam2.f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		
		case 3:
			return true;
			break;
	}
	return false;
}

struct<13> func_434(int iParam0)
{
	struct<13> Var0;
	
	network_handle_from_player(iParam0, &Var0, 13);
	return Var0;
}

bool func_435(int iParam0)
{
	if (iParam0 == 825 || iParam0 == 828)
	{
		return true;
	}
	return false;
}

void func_436(int iParam0, float fParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<6>[] Var3 = new struct<6>[3];
	struct<8>[] Var22 = new struct<8>[3];
	
	iVar0 = false;
	iVar1 = false;
	iVar2 = false;
	if (iParam2 == 1)
	{
		iVar2++;
	}
	else if (iParam2 == 2)
	{
		iVar1++;
	}
	else if (iParam2 == 3)
	{
		iVar0++;
	}
	StringCopy(&(Var22[0 /*8*/]), "GameType", 32);
	StringCopy(&(Var22[1 /*8*/]), "Location", 32);
	StringCopy(&(Var22[2 /*8*/]), "Type", 32);
	StringCopy(&(Var3[0 /*6*/]), "SP", 24);
	switch (iParam0)
	{
		case 0:
			StringCopy(&(Var3[1 /*6*/]), "TRIAL_01", 24);
			break;
		
		case 1:
			StringCopy(&(Var3[1 /*6*/]), "TRIAL_02", 24);
			break;
		
		case 2:
			StringCopy(&(Var3[1 /*6*/]), "TRIAL_03", 24);
			break;
		
		case 3:
			StringCopy(&(Var3[1 /*6*/]), "TRIAL_04", 24);
			break;
		
		case 4:
			StringCopy(&(Var3[1 /*6*/]), "TRIAL_05", 24);
			break;
	}
	StringCopy(&(Var3[2 /*6*/]), "StuntPlaneRace", 24);
	if (func_438(817, &Var3, &Var22, 3, -1, 1, 0))
	{
		if (iParam2 <= 3 && iParam2 > 0)
		{
			func_437(817, 131, -ceil(fParam1 * 100f) * 10, 0f, 0);
		}
		else
		{
			func_437(817, 131, 0, 0f, 0);
		}
		func_437(817, 96, iVar0 * 1 + iVar1 * 2 + iVar2 * 3, 0f, 0);
		func_437(817, 2, ceil(fParam1 * 100f) * 10, 0f, 0);
		func_437(817, 147, ceil(fParam1 * 100f) * 10, 0f, 0);
		func_437(817, 149, 0, 0f, 0);
		func_437(817, 148, 0, 0f, 0);
		func_437(817, 109, 1, 0f, 0);
		func_437(817, 157, iVar0, 0f, 0);
		func_437(817, 158, iVar1, 0f, 0);
		func_437(817, 86, iVar2, 0f, 0);
	}
}

void func_437(int iParam0, int iParam1, int iParam2, Vector3 fParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	if (!iParam4)
	{
		_0x0BCA1D2C47B0D269(iParam1, iParam2, fParam3);
	}
	if (!Global_1835013.f_3)
	{
		Global_1835013.f_142 = iParam0;
		Global_1835013.f_142.f_1 = leaderboards_get_number_of_columns(Global_1835013.f_142, 0);
		iVar1 = false;
		while (iVar1 < 32)
		{
			if (iVar1 < Global_1835013.f_142.f_1)
			{
				if (iParam1 == 156)
				{
				}
				else if (func_430(iParam0, 4, iVar1))
				{
					GAMEPLAY::SET_BIT(&(Global_1835013.f_142.f_2), iVar1);
				}
				else
				{
					GAMEPLAY::CLEAR_BIT(&(Global_1835013.f_142.f_2), iVar1);
				}
			}
			else
			{
				GAMEPLAY::CLEAR_BIT(&(Global_1835013.f_142.f_2), iVar1);
			}
			iVar1++;
		}
		Global_1835013.f_3 = 1;
	}
	iVar1 = false;
	while (iVar1 < 32)
	{
		if (iParam1 == leaderboards_get_column_id(iParam0, 4, iVar1))
		{
			iVar0 = iVar1;
			iVar1 = 32;
		}
		iVar1++;
	}
	Global_1835013.f_142.f_36[iVar0] = iParam2;
	Global_1835013.f_142.f_3[iVar0] = fParam3;
	if (iParam2 != 0)
	{
		GAMEPLAY::SET_BIT(&(Global_1835013.f_142.f_2), iVar0);
	}
	else if (fParam3 != 0f)
	{
		GAMEPLAY::CLEAR_BIT(&(Global_1835013.f_142.f_2), iVar0);
	}
}

bool func_438(int iParam0, auto uParam1, auto uParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	struct<68> Var0;
	int iVar68;
	struct<13> Var69;
	auto uVar82;
	
	if (!network_is_signed_online())
	{
	}
	if ((!network_player_is_cheater() && (network_have_online_privileges() || !_0x1353F87E89946207())) && _0x422D396F80A96547())
	{
		Var0.f_2.f_1 = 4;
		Var0 = iParam0;
		if (iParam4 == -1)
		{
			if (_network_player_is_in_clan())
			{
				Var69 = {func_434(player_id())};
				if (network_clan_player_is_active(&Var69))
				{
					if (network_clan_player_get_desc(&uVar82, 35, &Var69))
					{
						Var0.f_1 = uVar82;
					}
				}
			}
		}
		else
		{
			Var0.f_1 = iParam4;
		}
		Var0.f_2 = iParam3;
		iVar68 = 0;
		while (iVar68 < iParam3)
		{
			Var0.f_2.f_1[iVar68 /*16*/] = {*(uParam2[iVar68 /*8*/])};
			MemCopy(&(Var0.f_2.f_1[iVar68 /*16*/].f_8), {*(uParam1[iVar68 /*6*/])}, 8);
			iVar68++;
		}
		if (iParam5)
		{
			Global_1835013.f_5 = {Var0};
		}
		if (!iParam6)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Global_2441456.f_3)
			{
				_0xC980E62E33DF1D5C(&Var0, &(Global_1715541.f_10));
			}
			else
			{
				leaderboards2_write_data(&Var0);
			}
		}
		return true;
	}
	if (network_player_is_cheater())
	{
	}
	if (!network_have_online_privileges())
	{
	}
	if (_0x1353F87E89946207())
	{
	}
	if (!_0x422D396F80A96547())
	{
	}
	return false;
}

void func_439(int iParam0, char* sParam1)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "TRIAL_01", 24);
			sParam1 = "SPTTLB_1";
			break;
		
		case 1:
			StringCopy(&Var0, "TRIAL_02", 24);
			sParam1 = "SPTTLB_2";
			break;
		
		case 2:
			StringCopy(&Var0, "TRIAL_03", 24);
			sParam1 = "SPTTLB_3";
			break;
		
		case 3:
			StringCopy(&Var0, "TRIAL_04", 24);
			sParam1 = "SPTTLB_4";
			break;
		
		case 4:
			StringCopy(&Var0, "TRIAL_05", 24);
			sParam1 = "SPTTLB_5";
			break;
	}
	func_440(&uLocal_1580, 86, &Var0, sParam1, -1, -1, 0, 0);
}

void func_440(auto uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	char[32] cVar0;
	char[32] cVar8;
	int iVar16;
	struct<6> Var17;
	
	if (!is_string_null_or_empty(sParam2))
	{
		StringCopy(&cVar0, sParam2, 32);
	}
	if (iParam7)
	{
	}
	Global_1835390.f_2769 = 0;
	Global_1835390.f_2770 = 0;
	Global_1835390.f_2768 = 0;
	switch (iParam1)
	{
		case 2:
			if (iParam4 == 0)
			{
				if (iParam5 > 0 && !func_443())
				{
					*uParam0.f_44 = 826;
				}
				else
				{
					*uParam0.f_44 = 815;
				}
				*uParam0.f_44.f_1 = 5;
				*uParam0.f_44.f_3 = 1;
				StringCopy(uParam0.f_44.f_3.f_1[0 /*16*/], "Mission", 32);
				*(uParam0.f_44.f_3.f_1[0 /*16*/].f_8) = {cVar0};
				if (iParam5 > 0 && !func_443())
				{
					*uParam0.f_44.f_3 = 2;
					StringCopy(uParam0.f_44.f_3.f_1[1 /*16*/], "Laps", 32);
					StringCopy(&cVar8, "", 32);
					StringIntConCat(&cVar8, iParam5, 32);
					*(uParam0.f_44.f_3.f_1[1 /*16*/].f_8) = {cVar8};
					Global_1835390.f_2780.f_26 = iParam5;
					if (!is_string_null_or_empty(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RCE_L1", 32);
							StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RCE_LM", 32);
							StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RCE_NN_LM", 32);
					}
				}
				else
				{
					if (!is_string_null_or_empty(sParam3))
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RCE", 32);
						StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RCE_NN", 32);
					}
					Global_1835390.f_2780.f_26 = -1;
				}
				Global_1835390.f_2780 = 1;
				if (iParam5 <= 0 || func_443())
				{
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "", 24);
					Global_1835390.f_2710[0] = 1;
					Global_1835390.f_2710[1] = 3;
					Global_1835390.f_2710[2] = 0;
					Global_1835390.f_2710[3] = 0;
					Global_1835390.f_2709 = 4;
					Global_1835390.f_2708 = 2;
					GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					Global_1835390.f_2780.f_28 = 4;
					Global_1835390.f_2780.f_29[0] = 1;
					Global_1835390.f_2780.f_29[1] = 3;
					Global_1835390.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835390.f_2710[0] = 2;
					Global_1835390.f_2710[1] = 1;
					Global_1835390.f_2710[2] = 3;
					Global_1835390.f_2710[3] = 0;
					Global_1835390.f_2709 = 4;
					Global_1835390.f_2708 = 3;
					GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
					Global_1835390.f_2780.f_28 = 5;
					Global_1835390.f_2780.f_29[0] = 1;
					Global_1835390.f_2780.f_29[1] = 1;
					Global_1835390.f_2780.f_29[2] = 3;
					Global_1835390.f_2780.f_29[3] = 5;
				}
				Global_1835390.f_2779 = 0;
			}
			else if (iParam4 == 1)
			{
				if (iParam5 > 0 && !func_443())
				{
					*uParam0.f_44 = 827;
				}
				else
				{
					*uParam0.f_44 = 824;
				}
				*uParam0.f_44.f_1 = 5;
				*uParam0.f_44.f_3 = 1;
				StringCopy(uParam0.f_44.f_3.f_1[0 /*16*/], "Mission", 32);
				*(uParam0.f_44.f_3.f_1[0 /*16*/].f_8) = {cVar0};
				if (iParam5 > 0 && !func_443())
				{
					*uParam0.f_44.f_3 = 2;
					StringCopy(uParam0.f_44.f_3.f_1[1 /*16*/], "Laps", 32);
					StringCopy(&cVar8, "", 32);
					StringIntConCat(&cVar8, iParam5, 32);
					*(uParam0.f_44.f_3.f_1[1 /*16*/].f_8) = {cVar8};
					Global_1835390.f_2780.f_26 = iParam5;
					if (!is_string_null_or_empty(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_GRCE_L1", 32);
							StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_GRCE_LM", 32);
							StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_GRCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_GRCE_NN_LM", 32);
					}
				}
				else
				{
					Global_1835390.f_2780.f_26 = -1;
					if (!is_string_null_or_empty(sParam3))
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_GRCE", 32);
						StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_GRCE_NN", 32);
					}
				}
				Global_1835390.f_2780 = 1;
				if (iParam5 <= 0 || func_443())
				{
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "", 24);
					Global_1835390.f_2710[0] = 1;
					Global_1835390.f_2710[1] = 5;
					Global_1835390.f_2710[2] = 0;
					Global_1835390.f_2710[3] = 0;
					Global_1835390.f_2709 = 6;
					Global_1835390.f_2708 = 2;
					GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					Global_1835390.f_2780.f_28 = 4;
					Global_1835390.f_2780.f_29[0] = 1;
					Global_1835390.f_2780.f_29[1] = 3;
					Global_1835390.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835390.f_2710[0] = 2;
					Global_1835390.f_2710[1] = 1;
					Global_1835390.f_2710[2] = 5;
					Global_1835390.f_2710[3] = 0;
					Global_1835390.f_2708 = 3;
					Global_1835390.f_2709 = 6;
					GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
					Global_1835390.f_2780.f_28 = 5;
					Global_1835390.f_2780.f_29[0] = 1;
					Global_1835390.f_2780.f_29[1] = 1;
					Global_1835390.f_2780.f_29[2] = 3;
					Global_1835390.f_2780.f_29[3] = 5;
				}
				Global_1835390.f_2779 = 0;
			}
			else if (iParam4 == 2)
			{
				if (iParam5 > 0 && !func_443())
				{
					*uParam0.f_44 = 828;
				}
				else
				{
					*uParam0.f_44 = 825;
				}
				*uParam0.f_44.f_1 = 5;
				*uParam0.f_44.f_3 = 2;
				StringCopy(uParam0.f_44.f_3.f_1[0 /*16*/], "Mission", 32);
				*(uParam0.f_44.f_3.f_1[0 /*16*/].f_8) = {cVar0};
				if (!iParam6)
				{
					StringCopy(uParam0.f_44.f_3.f_1[1 /*16*/], "CoDriver", 32);
					StringCopy(uParam0.f_44.f_3.f_1[1 /*16*/].f_8, "", 32);
				}
				else
				{
					StringCopy(uParam0.f_44.f_3.f_1[1 /*16*/], "CoDriver", 32);
					_network_player_get_user_id(player_id(), &Var17);
					MemCopy(uParam0.f_44.f_3.f_1[1 /*16*/].f_8, {Var17}, 8);
					Global_1835390.f_2780.f_27 = 1;
				}
				if (iParam5 > 0 && !func_443())
				{
					*uParam0.f_44.f_3 = 3;
					StringCopy(uParam0.f_44.f_3.f_1[2 /*16*/], "Laps", 32);
					StringCopy(&cVar8, "", 32);
					StringIntConCat(&cVar8, iParam5, 32);
					*(uParam0.f_44.f_3.f_1[2 /*16*/].f_8) = {cVar8};
					Global_1835390.f_2780.f_26 = iParam5;
					if (!is_string_null_or_empty(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RRCE_L1", 32);
							StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RRCE_LM", 32);
							StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RRCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RRCE_NN_LM", 32);
					}
				}
				else
				{
					Global_1835390.f_2780.f_26 = -1;
					if (!is_string_null_or_empty(sParam3))
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RRCE", 32);
						StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RRCE_NN", 32);
					}
				}
				if (iParam5 <= 0 || func_443())
				{
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "", 24);
					Global_1835390.f_2710[0] = 1;
					Global_1835390.f_2710[1] = 3;
					Global_1835390.f_2710[2] = 0;
					Global_1835390.f_2710[3] = 0;
					Global_1835390.f_2709 = 4;
					Global_1835390.f_2708 = 2;
					GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					Global_1835390.f_2780.f_28 = 4;
					Global_1835390.f_2780.f_29[0] = 1;
					Global_1835390.f_2780.f_29[1] = 3;
					Global_1835390.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835390.f_2710[0] = 2;
					Global_1835390.f_2710[1] = 1;
					Global_1835390.f_2710[2] = 3;
					Global_1835390.f_2710[3] = 0;
					Global_1835390.f_2708 = 3;
					Global_1835390.f_2709 = 4;
					GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
					Global_1835390.f_2780.f_28 = 5;
					Global_1835390.f_2780.f_29[0] = 1;
					Global_1835390.f_2780.f_29[1] = 1;
					Global_1835390.f_2780.f_29[2] = 3;
					Global_1835390.f_2780.f_29[3] = 5;
				}
				Global_1835390.f_2779 = 0;
			}
			else if (iParam4 == 10 || iParam4 == 11)
			{
				if (iParam5 > 0 && !func_443())
				{
					*uParam0.f_44 = 928;
				}
				else
				{
					*uParam0.f_44 = 849;
				}
				*uParam0.f_44.f_1 = 5;
				*uParam0.f_44.f_3 = 1;
				StringCopy(uParam0.f_44.f_3.f_1[0 /*16*/], "Mission", 32);
				*(uParam0.f_44.f_3.f_1[0 /*16*/].f_8) = {cVar0};
				if (iParam5 > 0 && !func_443())
				{
					*uParam0.f_44.f_3 = 2;
					StringCopy(uParam0.f_44.f_3.f_1[1 /*16*/], "Laps", 32);
					StringCopy(&cVar8, "", 32);
					StringIntConCat(&cVar8, iParam5, 32);
					*(uParam0.f_44.f_3.f_1[1 /*16*/].f_8) = {cVar8};
					Global_1835390.f_2780.f_26 = iParam5;
					if (!is_string_null_or_empty(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_FRCE_L1", 32);
							StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_FRCE_LM", 32);
							StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_FRCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_FRCE_NN_LM", 32);
					}
				}
				else
				{
					Global_1835390.f_2780.f_26 = -1;
					if (!is_string_null_or_empty(sParam3))
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_FRCE", 32);
						StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_FRCE_NN", 32);
					}
				}
				Global_1835390.f_2780 = 1;
				if (iParam5 <= 0 || func_443())
				{
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "", 24);
					Global_1835390.f_2710[0] = 1;
					Global_1835390.f_2710[1] = 0;
					Global_1835390.f_2710[2] = 0;
					Global_1835390.f_2710[3] = 0;
					Global_1835390.f_2709 = 0;
					Global_1835390.f_2708 = 1;
					GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					Global_1835390.f_2780.f_28 = 4;
					Global_1835390.f_2780.f_29[0] = 1;
					Global_1835390.f_2780.f_29[1] = 5;
				}
				else
				{
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835390.f_2710[0] = 2;
					Global_1835390.f_2710[1] = 1;
					Global_1835390.f_2710[2] = 0;
					Global_1835390.f_2710[3] = 0;
					Global_1835390.f_2708 = 2;
					GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
					Global_1835390.f_2780.f_28 = 5;
					Global_1835390.f_2780.f_29[0] = 1;
					Global_1835390.f_2780.f_29[1] = 1;
					Global_1835390.f_2780.f_29[2] = 5;
				}
				Global_1835390.f_2779 = 0;
			}
			else if (iParam4 == 3)
			{
				if (iParam5 > 0 && !func_443())
				{
					*uParam0.f_44 = 998 + iParam5 - 1;
				}
				else
				{
					*uParam0.f_44 = 975;
				}
				*uParam0.f_44.f_1 = 5;
				*uParam0.f_44.f_3 = 1;
				StringCopy(uParam0.f_44.f_3.f_1[0 /*16*/], "Mission", 32);
				*(uParam0.f_44.f_3.f_1[0 /*16*/].f_8) = {cVar0};
				if (iParam5 > 0 && !func_443())
				{
					Global_1835390.f_2780.f_26 = iParam5;
					if (!is_string_null_or_empty(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RCE_L1", 32);
							StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RCE_LM", 32);
							StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RCE_NN_LM", 32);
					}
				}
				else
				{
					if (!is_string_null_or_empty(sParam3))
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RCE", 32);
						StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RCE_NN", 32);
					}
					Global_1835390.f_2780.f_26 = -1;
				}
				Global_1835390.f_2780 = 1;
				if (iParam5 <= 0 || func_443())
				{
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "", 24);
					Global_1835390.f_2710[0] = 1;
					Global_1835390.f_2710[1] = 3;
					Global_1835390.f_2710[2] = 0;
					Global_1835390.f_2710[3] = 0;
					Global_1835390.f_2709 = 4;
					Global_1835390.f_2708 = 2;
					GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					Global_1835390.f_2780.f_28 = 4;
					Global_1835390.f_2780.f_29[0] = 1;
					Global_1835390.f_2780.f_29[1] = 3;
					Global_1835390.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835390.f_2710[0] = 2;
					Global_1835390.f_2710[1] = 1;
					Global_1835390.f_2710[2] = 3;
					Global_1835390.f_2710[3] = 0;
					Global_1835390.f_2709 = 4;
					Global_1835390.f_2708 = 3;
					GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
					Global_1835390.f_2780.f_28 = 5;
					Global_1835390.f_2780.f_29[0] = 1;
					Global_1835390.f_2780.f_29[1] = 1;
					Global_1835390.f_2780.f_29[2] = 3;
					Global_1835390.f_2780.f_29[3] = 5;
				}
				Global_1835390.f_2779 = 0;
			}
			break;
		
		case 1:
			if (iParam4 == 0)
			{
				*uParam0.f_44 = 762;
				*uParam0.f_44.f_1 = 5;
				*uParam0.f_44.f_3 = 1;
				StringCopy(uParam0.f_44.f_3.f_1[0 /*16*/], "Mission", 32);
				*(uParam0.f_44.f_3.f_1[0 /*16*/].f_8) = {cVar0};
				Global_1835390.f_2780 = 1;
				if (!is_string_null_or_empty(sParam3))
				{
					StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_DM", 32);
					StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
				}
				else
				{
					StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_DM_NN", 32);
				}
				StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
				StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_WINS", 24);
				StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_LOSES", 24);
				StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_KD", 24);
				StringCopy(&(Global_1835390.f_2717[4 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_1835390.f_2717[5 /*6*/]), "SCLB_C_DEATH", 24);
				Global_1835390.f_2710[0] = 0;
				Global_1835390.f_2710[1] = 4;
				Global_1835390.f_2710[2] = 6;
				Global_1835390.f_2710[3] = 3;
				Global_1835390.f_2710[4] = 1;
				Global_1835390.f_2710[5] = 2;
				Global_1835390.f_2708 = 6;
				GAMEPLAY::CLEAR_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
				GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
				GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
				GAMEPLAY::CLEAR_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
				GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
				GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[5]);
				Global_1835390.f_2780.f_28 = 5;
				Global_1835390.f_2780.f_29[0] = 4;
				Global_1835390.f_2780.f_29[1] = 5;
				Global_1835390.f_2780.f_29[2] = 5;
				Global_1835390.f_2780.f_29[3] = 4;
				Global_1835390.f_2780.f_29[4] = 5;
				Global_1835390.f_2780.f_29[5] = 5;
			}
			else if (iParam4 == 1)
			{
				*uParam0.f_44 = 822;
				*uParam0.f_44.f_1 = 5;
				*uParam0.f_44.f_3 = 1;
				StringCopy(uParam0.f_44.f_3.f_1[0 /*16*/], "Mission", 32);
				*(uParam0.f_44.f_3.f_1[0 /*16*/].f_8) = {cVar0};
				Global_1835390.f_2780 = 1;
				if (!is_string_null_or_empty(sParam3))
				{
					StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_TDM", 32);
					StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
				}
				else
				{
					StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_TDM_NN", 32);
				}
				StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
				StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_WINS", 24);
				StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_LOSES", 24);
				StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_KD", 24);
				StringCopy(&(Global_1835390.f_2717[4 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_1835390.f_2717[5 /*6*/]), "SCLB_C_DEATH", 24);
				Global_1835390.f_2710[0] = 0;
				Global_1835390.f_2710[1] = 4;
				Global_1835390.f_2710[2] = 6;
				Global_1835390.f_2710[3] = 3;
				Global_1835390.f_2710[4] = 1;
				Global_1835390.f_2710[5] = 2;
				Global_1835390.f_2708 = 6;
				GAMEPLAY::CLEAR_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
				GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
				GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
				GAMEPLAY::CLEAR_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
				GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
				GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[5]);
				Global_1835390.f_2780.f_28 = 5;
				Global_1835390.f_2780.f_29[0] = 4;
				Global_1835390.f_2780.f_29[1] = 5;
				Global_1835390.f_2780.f_29[2] = 5;
				Global_1835390.f_2780.f_29[3] = 4;
				Global_1835390.f_2780.f_29[4] = 5;
				Global_1835390.f_2780.f_29[5] = 5;
			}
			else if (iParam4 == 2)
			{
				*uParam0.f_44 = 823;
				*uParam0.f_44.f_1 = 5;
				*uParam0.f_44.f_3 = 1;
				StringCopy(uParam0.f_44.f_3.f_1[0 /*16*/], "Mission", 32);
				*(uParam0.f_44.f_3.f_1[0 /*16*/].f_8) = {cVar0};
				Global_1835390.f_2780 = 1;
				if (!is_string_null_or_empty(sParam3))
				{
					StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_VEHDM", 32);
					StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
				}
				else
				{
					StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_VEHDM_NN", 32);
				}
				StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
				StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_WINS", 24);
				StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_LOSES", 24);
				StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_KD", 24);
				StringCopy(&(Global_1835390.f_2717[4 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_1835390.f_2717[5 /*6*/]), "SCLB_C_DEATH", 24);
				Global_1835390.f_2710[0] = 0;
				Global_1835390.f_2710[1] = 4;
				Global_1835390.f_2710[2] = 6;
				Global_1835390.f_2710[3] = 3;
				Global_1835390.f_2710[4] = 1;
				Global_1835390.f_2710[5] = 2;
				Global_1835390.f_2708 = 6;
				GAMEPLAY::CLEAR_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
				GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
				GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
				GAMEPLAY::CLEAR_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
				GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
				GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[5]);
				Global_1835390.f_2780.f_28 = 5;
				Global_1835390.f_2780.f_29[0] = 4;
				Global_1835390.f_2780.f_29[1] = 5;
				Global_1835390.f_2780.f_29[2] = 5;
				Global_1835390.f_2780.f_29[3] = 4;
				Global_1835390.f_2780.f_29[4] = 5;
				Global_1835390.f_2780.f_29[5] = 5;
			}
			break;
		
		case 11:
			*uParam0.f_44 = 193;
			*uParam0.f_44.f_1 = 5;
			*uParam0.f_44.f_3 = 1;
			StringCopy(uParam0.f_44.f_3.f_1[0 /*16*/], "GameType", 32);
			StringCopy(uParam0.f_44.f_3.f_1[0 /*16*/].f_8, "MP", 32);
			Global_1835390.f_2780 = 1;
			StringCopy(&(Global_1835390.f_2780.f_1), "HUD_MG_GOLF", 32);
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_GOLF0", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_GOLF1", 24);
			StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_GAMES", 24);
			StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1835390.f_2710[0] = 0;
			Global_1835390.f_2710[1] = 1;
			Global_1835390.f_2710[2] = 3;
			Global_1835390.f_2710[3] = 0;
			Global_1835390.f_2708 = 3;
			GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			Global_1835390.f_2780.f_28 = 5;
			Global_1835390.f_2780.f_29[0] = 7;
			Global_1835390.f_2780.f_29[1] = 5;
			Global_1835390.f_2780.f_29[2] = 5;
			Global_1835390.f_2780.f_29[3] = 5;
			break;
		
		case 94:
			*uParam0.f_44 = 193;
			*uParam0.f_44.f_1 = 5;
			*uParam0.f_44.f_3 = 1;
			StringCopy(uParam0.f_44.f_3.f_1[0 /*16*/], "GameType", 32);
			StringCopy(uParam0.f_44.f_3.f_1[0 /*16*/].f_8, "SP", 32);
			Global_1835390.f_2780 = 1;
			StringCopy(&(Global_1835390.f_2780.f_1), "HUD_MG_GOLF", 32);
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_GOLF0", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_GOLF1", 24);
			StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_GAMES", 24);
			StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1835390.f_2710[0] = 0;
			Global_1835390.f_2710[1] = 1;
			Global_1835390.f_2710[2] = 3;
			Global_1835390.f_2710[3] = 0;
			Global_1835390.f_2708 = 3;
			GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			Global_1835390.f_2780.f_28 = 5;
			Global_1835390.f_2780.f_29[0] = 7;
			Global_1835390.f_2780.f_29[1] = 5;
			Global_1835390.f_2780.f_29[2] = 5;
			Global_1835390.f_2780.f_29[3] = 5;
			break;
		
		case 92:
			*uParam0.f_44 = 811;
			*uParam0.f_44.f_1 = 1;
			*uParam0.f_44.f_3 = 0;
			StringCopy(&(Global_1835390.f_2780.f_1), "HUD_MG_HUNTING", 32);
			StringCopy(&(Global_1835390.f_2780.f_9), "CMSW", 64);
			Global_1835390.f_2780.f_25 = 0;
			Global_1835390.f_2780 = 0;
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_HSCORE", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_TIMEHUNT", 24);
			StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_EKILLS", 24);
			StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_PHOTOS", 24);
			StringCopy(&(Global_1835390.f_2717[4 /*6*/]), "SCLB_C_MONEY", 24);
			Global_1835390.f_2710[0] = 0;
			Global_1835390.f_2710[1] = 5;
			Global_1835390.f_2710[2] = 2;
			Global_1835390.f_2710[3] = 4;
			Global_1835390.f_2710[4] = 6;
			Global_1835390.f_2708 = 5;
			GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
			GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
			Global_1835390.f_2780.f_28 = 6;
			Global_1835390.f_2780.f_29[0] = 5;
			Global_1835390.f_2780.f_29[1] = 6;
			Global_1835390.f_2780.f_29[2] = 5;
			Global_1835390.f_2780.f_29[3] = 5;
			Global_1835390.f_2780.f_29[4] = 5;
			break;
		
		case 15:
			*uParam0.f_44 = 749;
			*uParam0.f_44.f_1 = 1;
			*uParam0.f_44.f_3 = 0;
			StringCopy(&(Global_1835390.f_2780.f_1), "HUD_MG_ARM", 32);
			Global_1835390.f_2780 = 1;
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1835390.f_2710[0] = 2;
			Global_1835390.f_2710[1] = 5;
			Global_1835390.f_2710[2] = 0;
			Global_1835390.f_2710[3] = 0;
			Global_1835390.f_2708 = 3;
			GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			GAMEPLAY::CLEAR_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			Global_1835390.f_2780.f_28 = 5;
			Global_1835390.f_2780.f_29[0] = 5;
			Global_1835390.f_2780.f_29[1] = 5;
			Global_1835390.f_2780.f_29[2] = 4;
			Global_1835390.f_2780.f_29[3] = 5;
			break;
		
		case 14:
			*uParam0.f_44 = 190;
			*uParam0.f_44.f_1 = 5;
			*uParam0.f_44.f_3 = 1;
			StringCopy(uParam0.f_44.f_3.f_1[0 /*16*/], "GameType", 32);
			if (iParam4 == -1)
			{
				StringCopy(uParam0.f_44.f_3.f_1[0 /*16*/].f_8, "MP", 32);
			}
			else
			{
				StringCopy(uParam0.f_44.f_3.f_1[0 /*16*/].f_8, "SP", 32);
			}
			StringCopy(&(Global_1835390.f_2780.f_1), "HUD_MG_DARTS", 32);
			Global_1835390.f_2780 = 1;
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1835390.f_2710[0] = 0;
			Global_1835390.f_2710[1] = 7;
			Global_1835390.f_2710[2] = 5;
			Global_1835390.f_2710[3] = 0;
			Global_1835390.f_2708 = 3;
			GAMEPLAY::CLEAR_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			Global_1835390.f_2780.f_28 = 5;
			Global_1835390.f_2780.f_29[0] = 4;
			Global_1835390.f_2780.f_29[1] = 5;
			Global_1835390.f_2780.f_29[2] = 5;
			Global_1835390.f_2780.f_29[3] = 5;
			break;
		
		case 12:
			*uParam0.f_44 = 283;
			*uParam0.f_44.f_1 = 5;
			*uParam0.f_44.f_3 = 1;
			StringCopy(uParam0.f_44.f_3.f_1[0 /*16*/], "GameType", 32);
			StringCopy(uParam0.f_44.f_3.f_1[0 /*16*/].f_8, "MP", 32);
			StringCopy(&(Global_1835390.f_2780.f_1), "HUD_MG_TENNIS", 32);
			StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
			if (is_string_null_or_empty(sParam3))
			{
				StringCopy(&(Global_1835390.f_2780.f_9), "HUD_MG_TENNIS", 64);
				StringIntConCat(&(Global_1835390.f_2780.f_9), iParam4 + 1, 64);
			}
			Global_1835390.f_2780.f_25 = 0;
			Global_1835390.f_2780 = 1;
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_TEN1", 24);
			StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_TEN2", 24);
			StringCopy(&(Global_1835390.f_2717[4 /*6*/]), "SCLB_C_TEN0", 24);
			Global_1835390.f_2710[0] = 0;
			Global_1835390.f_2710[1] = 9;
			Global_1835390.f_2710[2] = 7;
			Global_1835390.f_2710[3] = 5;
			Global_1835390.f_2710[4] = 2;
			Global_1835390.f_2708 = 5;
			GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
			GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
			Global_1835390.f_2780.f_28 = 5;
			Global_1835390.f_2780.f_29[0] = 5;
			Global_1835390.f_2780.f_29[1] = 5;
			Global_1835390.f_2780.f_29[2] = 5;
			Global_1835390.f_2780.f_29[3] = 5;
			Global_1835390.f_2780.f_29[4] = 5;
			break;
		
		case 87:
			*uParam0.f_44 = 283;
			*uParam0.f_44.f_1 = 5;
			*uParam0.f_44.f_3 = 1;
			StringCopy(uParam0.f_44.f_3.f_1[0 /*16*/], "GameType", 32);
			StringCopy(uParam0.f_44.f_3.f_1[0 /*16*/].f_8, "SP", 32);
			StringCopy(&(Global_1835390.f_2780.f_1), "HUD_MG_TENNIS", 32);
			StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
			Global_1835390.f_2780.f_25 = 0;
			Global_1835390.f_2780 = 1;
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_TEN1", 24);
			StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_TEN2", 24);
			StringCopy(&(Global_1835390.f_2717[4 /*6*/]), "SCLB_C_TEN0", 24);
			Global_1835390.f_2710[0] = 0;
			Global_1835390.f_2710[1] = 9;
			Global_1835390.f_2710[2] = 7;
			Global_1835390.f_2710[3] = 5;
			Global_1835390.f_2710[4] = 2;
			Global_1835390.f_2708 = 5;
			GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
			GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
			Global_1835390.f_2780.f_28 = 5;
			Global_1835390.f_2780.f_29[0] = 5;
			Global_1835390.f_2780.f_29[1] = 5;
			Global_1835390.f_2780.f_29[2] = 5;
			Global_1835390.f_2780.f_29[3] = 5;
			Global_1835390.f_2780.f_29[4] = 5;
			break;
		
		case 13:
			*uParam0.f_44 = 912;
			*uParam0.f_44.f_1 = 5;
			*uParam0.f_44.f_3 = 2;
			switch (iParam4)
			{
				case 0:
					StringCopy(uParam0.f_44.f_3.f_1[0 /*16*/], "Type", 32);
					StringCopy(uParam0.f_44.f_3.f_1[0 /*16*/].f_8, "RANDOM", 32);
					StringCopy(&(Global_1835390.f_2780.f_1), "HUD_MG_RANGEa", 32);
					break;
				
				case 1:
					StringCopy(uParam0.f_44.f_3.f_1[0 /*16*/], "Type", 32);
					StringCopy(uParam0.f_44.f_3.f_1[0 /*16*/].f_8, "GRID", 32);
					StringCopy(&(Global_1835390.f_2780.f_1), "HUD_MG_RANGEb", 32);
					break;
				
				case 2:
					StringCopy(uParam0.f_44.f_3.f_1[0 /*16*/], "Type", 32);
					StringCopy(uParam0.f_44.f_3.f_1[0 /*16*/].f_8, "COVERED", 32);
					StringCopy(&(Global_1835390.f_2780.f_1), "HUD_MG_RANGEc", 32);
					break;
				
				default:
					StringCopy(uParam0.f_44.f_3.f_1[0 /*16*/], "Type", 32);
					StringCopy(uParam0.f_44.f_3.f_1[0 /*16*/].f_8, "RANDOM", 32);
					StringCopy(&(Global_1835390.f_2780.f_1), "HUD_MG_RANGEa", 32);
					break;
			}
			switch (iParam5)
			{
				case 0:
					StringCopy(uParam0.f_44.f_3.f_1[1 /*16*/], "WeaponId", 32);
					StringCopy(uParam0.f_44.f_3.f_1[1 /*16*/].f_8, "Pistols", 32);
					StringCopy(&(Global_1835390.f_2780.f_9), "HUD_MG_PISTOL", 64);
					break;
				
				case 1:
					StringCopy(uParam0.f_44.f_3.f_1[1 /*16*/], "WeaponId", 32);
					StringCopy(uParam0.f_44.f_3.f_1[1 /*16*/].f_8, "SMGs", 32);
					StringCopy(&(Global_1835390.f_2780.f_9), "HUD_MG_SMG", 64);
					break;
				
				case 2:
					StringCopy(uParam0.f_44.f_3.f_1[1 /*16*/], "WeaponId", 32);
					StringCopy(uParam0.f_44.f_3.f_1[1 /*16*/].f_8, "AssaultRifles", 32);
					StringCopy(&(Global_1835390.f_2780.f_9), "HUD_MG_ASSAULT", 64);
					break;
				
				case 3:
					StringCopy(uParam0.f_44.f_3.f_1[1 /*16*/], "WeaponId", 32);
					StringCopy(uParam0.f_44.f_3.f_1[1 /*16*/].f_8, "Shotguns", 32);
					StringCopy(&(Global_1835390.f_2780.f_9), "HUD_MG_SHOTGUN", 64);
					break;
				
				case 4:
					StringCopy(uParam0.f_44.f_3.f_1[1 /*16*/], "WeaponId", 32);
					StringCopy(uParam0.f_44.f_3.f_1[1 /*16*/].f_8, "LMGs", 32);
					StringCopy(&(Global_1835390.f_2780.f_9), "HUD_MG_LMG", 64);
					break;
				
				case 5:
					StringCopy(uParam0.f_44.f_3.f_1[1 /*16*/], "WeaponId", 32);
					StringCopy(uParam0.f_44.f_3.f_1[1 /*16*/].f_8, "Heavies", 32);
					StringCopy(&(Global_1835390.f_2780.f_9), "HUD_MG_HEAVY", 64);
					break;
				
				default:
					StringCopy(uParam0.f_44.f_3.f_1[1 /*16*/], "WeaponId", 32);
					StringCopy(uParam0.f_44.f_3.f_1[1 /*16*/].f_8, "Pistols", 32);
					StringCopy(&(Global_1835390.f_2780.f_9), "HUD_MG_PISTOL", 64);
					break;
			}
			Global_1835390.f_2780.f_25 = 0;
			Global_1835390.f_2780 = 1;
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_HITS", 24);
			StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_SHOTS", 24);
			StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_ACC", 24);
			Global_1835390.f_2710[0] = 0;
			Global_1835390.f_2710[1] = 2;
			Global_1835390.f_2710[2] = 1;
			Global_1835390.f_2710[3] = 3;
			Global_1835390.f_2708 = 4;
			GAMEPLAY::CLEAR_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			GAMEPLAY::CLEAR_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
			Global_1835390.f_2780.f_28 = 4;
			Global_1835390.f_2780.f_29[0] = 4;
			Global_1835390.f_2780.f_29[1] = 5;
			Global_1835390.f_2780.f_29[2] = 5;
			Global_1835390.f_2780.f_29[3] = 4;
			break;
		
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 206:
		case 207:
		case 208:
		case 209:
			*uParam0.f_44 = 203;
			*uParam0.f_44.f_1 = 5;
			*uParam0.f_44.f_3 = 1;
			StringCopy(uParam0.f_44.f_3.f_1[0 /*16*/], "Type", 32);
			*(uParam0.f_44.f_3.f_1[0 /*16*/].f_8) = {cVar0};
			Global_1835390.f_2780 = 1;
			StringCopy(&(Global_1835390.f_2780.f_1), "HUD_MG_RANGE", 32);
			MemCopy(&(Global_1835390.f_2780.f_9), {func_442(iParam1)}, 16);
			Global_1835390.f_2780.f_25 = 0;
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_WEAP", 24);
			Global_1835390.f_2710[0] = 0;
			Global_1835390.f_2710[1] = 7;
			Global_1835390.f_2708 = 2;
			GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			Global_1835390.f_2780.f_28 = 4;
			Global_1835390.f_2780.f_29[0] = 5;
			Global_1835390.f_2780.f_29[1] = 8;
			break;
		
		case 69:
		case 71:
		case 70:
			*uParam0.f_44 = 202;
			*uParam0.f_44.f_1 = 5;
			*uParam0.f_44.f_3 = 1;
			StringCopy(uParam0.f_44.f_3.f_1[0 /*16*/], "Location", 32);
			*(uParam0.f_44.f_3.f_1[0 /*16*/].f_8) = {cVar0};
			Global_1835390.f_2780 = 1;
			StringCopy(&(Global_1835390.f_2780.f_1), "HUD_MG_TRI", 32);
			StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
			Global_1835390.f_2780.f_25 = 0;
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_RANK", 24);
			StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "", 24);
			StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "", 24);
			Global_1835390.f_2710[0] = 0;
			Global_1835390.f_2710[1] = 0;
			Global_1835390.f_2710[2] = 0;
			Global_1835390.f_2710[3] = 0;
			Global_1835390.f_2708 = 1;
			GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			Global_1835390.f_2780.f_28 = 3;
			Global_1835390.f_2780.f_29[0] = 2;
			Global_1835390.f_2780.f_29[1] = 5;
			Global_1835390.f_2780.f_29[2] = 0;
			Global_1835390.f_2780.f_29[3] = 0;
			break;
		
		case 80:
			*uParam0.f_44 = 817;
			*uParam0.f_44.f_1 = 5;
			*uParam0.f_44.f_3 = 3;
			StringCopy(uParam0.f_44.f_3.f_1[0 /*16*/], "GameType", 32);
			StringCopy(uParam0.f_44.f_3.f_1[0 /*16*/].f_8, "SP", 32);
			StringCopy(uParam0.f_44.f_3.f_1[1 /*16*/], "Location", 32);
			*(uParam0.f_44.f_3.f_1[1 /*16*/].f_8) = {cVar0};
			StringCopy(uParam0.f_44.f_3.f_1[2 /*16*/], "Type", 32);
			StringCopy(uParam0.f_44.f_3.f_1[2 /*16*/].f_8, "OffroadRace", 32);
			Global_1835390.f_2780.f_25 = 0;
			Global_1835390.f_2780 = 1;
			StringCopy(&(Global_1835390.f_2780.f_1), "OFFR_TITLE", 32);
			StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
			Global_1835390.f_2710[0] = 3;
			Global_1835390.f_2708 = 1;
			GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			Global_1835390.f_2780.f_28 = 3;
			Global_1835390.f_2780.f_29[0] = 1;
			break;
		
		case 3:
			*uParam0.f_44 = 791;
			*uParam0.f_44.f_1 = 5;
			*uParam0.f_44.f_3 = 1;
			StringCopy(uParam0.f_44.f_3.f_1[0 /*16*/], "Mission", 32);
			*(uParam0.f_44.f_3.f_1[0 /*16*/].f_8) = {cVar0};
			Global_1835390.f_2780 = 1;
			if (!is_string_null_or_empty(sParam3))
			{
				StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_HRD", 32);
				StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_HRD_NN", 32);
			}
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_WAVE", 24);
			StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_TKILLS", 24);
			StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_TDEATH", 24);
			Global_1835390.f_2710[0] = 0;
			Global_1835390.f_2710[1] = 1;
			Global_1835390.f_2710[2] = 2;
			Global_1835390.f_2710[3] = 3;
			Global_1835390.f_2708 = 4;
			GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
			Global_1835390.f_2780.f_28 = 5;
			Global_1835390.f_2780.f_29[0] = 5;
			Global_1835390.f_2780.f_29[1] = 5;
			Global_1835390.f_2780.f_29[2] = 5;
			Global_1835390.f_2780.f_29[3] = 5;
			break;
		
		case 0:
			if (iParam4 == 7 || iParam4 == 1)
			{
				*uParam0.f_44 = 1200;
				*uParam0.f_44.f_1 = 5;
				*uParam0.f_44.f_3 = 1;
				StringCopy(uParam0.f_44.f_3.f_1[0 /*16*/], "Mission", 32);
				*(uParam0.f_44.f_3.f_1[0 /*16*/].f_8) = {cVar0};
				Global_1835390.f_2780 = 1;
				if (!is_string_null_or_empty(sParam3))
				{
					if (iParam4 == 1)
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_HEIST", 32);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_HEISTP", 32);
					}
					StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
				}
				else if (iParam4 == 1)
				{
					StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_HEIST_NN", 32);
				}
				else
				{
					StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_HEISTPNN", 32);
				}
				StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
				StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_TIME", 24);
				StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_ACC", 24);
				StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_HEADSHOT", 24);
				StringCopy(&(Global_1835390.f_2717[4 /*6*/]), "SCLB_C_KILLS", 24);
				Global_1835390.f_2710[0] = 0;
				Global_1835390.f_2710[1] = 1;
				Global_1835390.f_2710[2] = 4;
				Global_1835390.f_2710[3] = 5;
				Global_1835390.f_2710[4] = 6;
				Global_1835390.f_2708 = 3;
				GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
				GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
				GAMEPLAY::CLEAR_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
				GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
				GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
				Global_1835390.f_2780.f_28 = 6;
				Global_1835390.f_2780.f_29[0] = 5;
				Global_1835390.f_2780.f_29[1] = 11;
				Global_1835390.f_2780.f_29[2] = 4;
				Global_1835390.f_2780.f_29[3] = 5;
				Global_1835390.f_2780.f_29[4] = 5;
			}
			else if (Global_1617379.f_45 == 1)
			{
				*uParam0.f_44 = 777;
				*uParam0.f_44.f_1 = 5;
				*uParam0.f_44.f_3 = 1;
				StringCopy(uParam0.f_44.f_3.f_1[0 /*16*/], "Mission", 32);
				*(uParam0.f_44.f_3.f_1[0 /*16*/].f_8) = {cVar0};
				Global_1835390.f_2780 = 1;
				if (!is_string_null_or_empty(sParam3))
				{
					if (Global_1617379.f_2 == 5)
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_LTS", 32);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_MIS", 32);
					}
					StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
				}
				else if (Global_1617379.f_2 == 5)
				{
					StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_LTS_NN", 32);
				}
				else
				{
					StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_MIS_NN", 32);
				}
				StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
				StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_DEATH", 24);
				StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
				Global_1835390.f_2710[0] = 0;
				Global_1835390.f_2710[1] = 1;
				Global_1835390.f_2710[2] = 2;
				Global_1835390.f_2710[3] = 0;
				Global_1835390.f_2708 = 3;
				GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
				GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
				GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
				Global_1835390.f_2780.f_28 = 5;
				Global_1835390.f_2780.f_29[0] = 2;
				Global_1835390.f_2780.f_29[1] = 5;
				Global_1835390.f_2780.f_29[2] = 5;
				Global_1835390.f_2780.f_29[3] = 5;
			}
			else
			{
				*uParam0.f_44 = 780;
				*uParam0.f_44.f_1 = 5;
				*uParam0.f_44.f_3 = 1;
				StringCopy(uParam0.f_44.f_3.f_1[0 /*16*/], "Mission", 32);
				*(uParam0.f_44.f_3.f_1[0 /*16*/].f_8) = {cVar0};
				Global_1835390.f_2780 = 1;
				if (!is_string_null_or_empty(sParam3))
				{
					if (Global_1617379.f_2 == 5)
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_LTS", 32);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_MIS", 32);
					}
					StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
				}
				else if (Global_1617379.f_2 == 5)
				{
					StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_LTS_NN", 32);
				}
				else
				{
					StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_MIS_NN", 32);
				}
				StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
				StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_DEATH", 24);
				StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
				Global_1835390.f_2710[0] = 0;
				Global_1835390.f_2710[1] = 1;
				Global_1835390.f_2710[2] = 2;
				Global_1835390.f_2710[3] = 0;
				Global_1835390.f_2708 = 3;
				GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
				GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
				GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
				Global_1835390.f_2780.f_28 = 5;
				Global_1835390.f_2780.f_29[0] = 5;
				Global_1835390.f_2780.f_29[1] = 5;
				Global_1835390.f_2780.f_29[2] = 5;
				Global_1835390.f_2780.f_29[3] = 5;
			}
			break;
		
		case 8:
			*uParam0.f_44 = 795;
			*uParam0.f_44.f_1 = 5;
			*uParam0.f_44.f_3 = 1;
			StringCopy(uParam0.f_44.f_3.f_1[0 /*16*/], "Mission", 32);
			*(uParam0.f_44.f_3.f_1[0 /*16*/].f_8) = {cVar0};
			Global_1835390.f_2780 = 1;
			if (!is_string_null_or_empty(sParam3))
			{
				StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_BJ", 32);
				StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_BJ_NN", 32);
			}
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_JUMPS", 24);
			StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1835390.f_2710[0] = 0;
			Global_1835390.f_2710[1] = 1;
			GAMEPLAY::SET_BIT(&(Global_1835390.f_2768), true);
			Global_1835390.f_2754[1] = -1;
			Global_1835390.f_2710[2] = 2;
			Global_1835390.f_2710[3] = 0;
			Global_1835390.f_2708 = 3;
			GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			Global_1835390.f_2780.f_28 = 5;
			Global_1835390.f_2780.f_29[0] = 5;
			Global_1835390.f_2780.f_29[1] = 11;
			Global_1835390.f_2780.f_29[2] = 5;
			Global_1835390.f_2780.f_29[3] = 5;
			break;
		
		case 85:
			*uParam0.f_44 = 274;
			*uParam0.f_44.f_1 = 5;
			*uParam0.f_44.f_3 = 1;
			StringCopy(uParam0.f_44.f_3.f_1[0 /*16*/], "Location", 32);
			*(uParam0.f_44.f_3.f_1[0 /*16*/].f_8) = {cVar0};
			Global_1835390.f_2780 = 1;
			Global_1835390.f_2780.f_25 = 0;
			if (!is_string_null_or_empty(sParam3))
			{
				StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_BJ", 32);
				StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_BJ_NN", 32);
			}
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_CASH", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_TOTCASH", 24);
			Global_1835390.f_2710[0] = 0;
			Global_1835390.f_2710[1] = 3;
			Global_1835390.f_2708 = 2;
			GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			Global_1835390.f_2780.f_28 = 3;
			Global_1835390.f_2780.f_29[0] = 5;
			Global_1835390.f_2780.f_29[1] = 5;
			break;
		
		case 122:
			switch (iParam4)
			{
				case 0:
				case 9:
				case 4:
				case 8:
					switch (iParam4)
					{
						case 0:
							*uParam0.f_44 = 965;
							break;
						
						case 9:
							*uParam0.f_44 = 966;
							break;
						
						case 4:
							*uParam0.f_44 = 967;
							break;
						
						case 8:
							*uParam0.f_44 = 968;
							break;
					}
					*uParam0.f_44.f_1 = 1;
					*uParam0.f_44.f_3 = 0;
					StringCopy(uParam0.f_44.f_3.f_1[0 /*16*/], "", 32);
					StringCopy(uParam0.f_44.f_3.f_1[0 /*16*/].f_8, "", 32);
					Global_1835390.f_2780 = 1;
					if (!is_string_null_or_empty(sParam3))
					{
						StringCopy(&(Global_1835390.f_2780.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
					StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_1835390.f_2710[0] = 1;
					Global_1835390.f_2710[1] = 4;
					Global_1835390.f_2710[2] = 3;
					Global_1835390.f_2710[3] = 2;
					Global_1835390.f_2708 = 4;
					GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
					GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
					Global_1835390.f_2780.f_29[0] = 1;
					Global_1835390.f_2780.f_29[1] = 5;
					Global_1835390.f_2780.f_29[2] = 5;
					Global_1835390.f_2780.f_29[3] = 5;
					break;
				
				case 1:
				case 2:
				case 3:
					switch (iParam4)
					{
						case 1:
							*uParam0.f_44 = 969;
							break;
						
						case 2:
							*uParam0.f_44 = 970;
							break;
						
						case 3:
							*uParam0.f_44 = 973;
							break;
					}
					*uParam0.f_44.f_1 = 1;
					*uParam0.f_44.f_3 = 0;
					StringCopy(uParam0.f_44.f_3.f_1[0 /*16*/], "", 32);
					StringCopy(uParam0.f_44.f_3.f_1[0 /*16*/].f_8, "", 32);
					Global_1835390.f_2780 = 1;
					if (!is_string_null_or_empty(sParam3))
					{
						StringCopy(&(Global_1835390.f_2780.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_DIST", 24);
					StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_1835390.f_2710[0] = 1;
					Global_1835390.f_2710[1] = 4;
					Global_1835390.f_2710[2] = 3;
					Global_1835390.f_2710[3] = 2;
					Global_1835390.f_2708 = 4;
					GAMEPLAY::CLEAR_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
					GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
					Global_1835390.f_2780.f_29[0] = 4;
					Global_1835390.f_2780.f_29[1] = 5;
					Global_1835390.f_2780.f_29[2] = 5;
					Global_1835390.f_2780.f_29[3] = 5;
					break;
				
				case 7:
					*uParam0.f_44 = 971;
					*uParam0.f_44.f_1 = 1;
					*uParam0.f_44.f_3 = 0;
					StringCopy(uParam0.f_44.f_3.f_1[0 /*16*/], "", 32);
					StringCopy(uParam0.f_44.f_3.f_1[0 /*16*/].f_8, "", 32);
					Global_1835390.f_2780 = 1;
					if (!is_string_null_or_empty(sParam3))
					{
						StringCopy(&(Global_1835390.f_2780.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_AVG_HEI", 24);
					StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_1835390.f_2710[0] = 1;
					Global_1835390.f_2710[1] = 4;
					Global_1835390.f_2710[2] = 3;
					Global_1835390.f_2710[3] = 2;
					Global_1835390.f_2708 = 4;
					GAMEPLAY::CLEAR_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
					GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
					Global_1835390.f_2780.f_29[0] = 4;
					Global_1835390.f_2780.f_29[1] = 5;
					Global_1835390.f_2780.f_29[2] = 5;
					Global_1835390.f_2780.f_29[3] = 5;
					break;
				
				case 6:
				case 5:
					switch (iParam4)
					{
						case 6:
							*uParam0.f_44 = 972;
							break;
						
						case 5:
							*uParam0.f_44 = 974;
							break;
					}
					*uParam0.f_44.f_1 = 1;
					*uParam0.f_44.f_3 = 0;
					StringCopy(uParam0.f_44.f_3.f_1[0 /*16*/], "", 32);
					StringCopy(uParam0.f_44.f_3.f_1[0 /*16*/].f_8, "", 32);
					Global_1835390.f_2780 = 1;
					if (!is_string_null_or_empty(sParam3))
					{
						StringCopy(&(Global_1835390.f_2780.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
					StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_1835390.f_2710[0] = 0;
					Global_1835390.f_2710[1] = 3;
					Global_1835390.f_2710[2] = 2;
					Global_1835390.f_2710[3] = 1;
					Global_1835390.f_2708 = 4;
					GAMEPLAY::CLEAR_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
					GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
					Global_1835390.f_2780.f_29[0] = 12;
					Global_1835390.f_2780.f_29[1] = 5;
					Global_1835390.f_2780.f_29[2] = 5;
					Global_1835390.f_2780.f_29[3] = 5;
					break;
			}
			break;
		
		case 83:
			*uParam0.f_44 = 192;
			*uParam0.f_44.f_1 = 5;
			*uParam0.f_44.f_3 = 1;
			StringCopy(uParam0.f_44.f_3.f_1[0 /*16*/], "Location", 32);
			*(uParam0.f_44.f_3.f_1[0 /*16*/].f_8) = {cVar0};
			Global_1835390.f_2780 = 1;
			if (!is_string_null_or_empty(sParam3))
			{
				StringCopy(&(Global_1835390.f_2780.f_1), sParam3, 32);
			}
			else
			{
				StringCopy(&(Global_1835390.f_2780.f_1), "PS_TITLE", 32);
			}
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_DIST", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
			StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
			StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
			Global_1835390.f_2710[0] = 2;
			Global_1835390.f_2710[1] = 5;
			Global_1835390.f_2710[2] = 4;
			Global_1835390.f_2710[3] = 3;
			Global_1835390.f_2708 = 4;
			GAMEPLAY::CLEAR_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
			Global_1835390.f_2780.f_29[0] = 17;
			Global_1835390.f_2780.f_29[1] = 5;
			Global_1835390.f_2780.f_29[2] = 5;
			Global_1835390.f_2780.f_29[3] = 5;
			break;
		
		case 82:
			*uParam0.f_44 = 850;
			*uParam0.f_44.f_1 = 5;
			*uParam0.f_44.f_3 = 1;
			StringCopy(uParam0.f_44.f_3.f_1[0 /*16*/], "Location", 32);
			*(uParam0.f_44.f_3.f_1[0 /*16*/].f_8) = {cVar0};
			Global_1835390.f_2780 = 1;
			Global_1835390.f_2780.f_25 = 0;
			if (!is_string_null_or_empty(sParam3))
			{
				StringCopy(&(Global_1835390.f_2780.f_1), sParam3, 32);
			}
			else
			{
				StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_MIS_NN", 32);
			}
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
			StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
			StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
			Global_1835390.f_2710[0] = 0;
			Global_1835390.f_2710[1] = 4;
			Global_1835390.f_2710[2] = 3;
			Global_1835390.f_2710[3] = 2;
			Global_1835390.f_2708 = 4;
			GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
			Global_1835390.f_2780.f_29[0] = 10;
			Global_1835390.f_2780.f_29[1] = 5;
			Global_1835390.f_2780.f_29[2] = 5;
			Global_1835390.f_2780.f_29[3] = 5;
			break;
		
		case 84:
			*uParam0.f_44 = 820;
			*uParam0.f_44.f_1 = 5;
			*uParam0.f_44.f_3 = 1;
			StringCopy(uParam0.f_44.f_3.f_1[0 /*16*/], "Location", 32);
			*(uParam0.f_44.f_3.f_1[0 /*16*/].f_8) = {cVar0};
			Global_1835390.f_2780 = 1;
			Global_1835390.f_2780.f_25 = 0;
			if (!is_string_null_or_empty(sParam3))
			{
				StringCopy(&(Global_1835390.f_2780.f_1), "PS_TITLE", 32);
				StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_MIS_NN", 32);
			}
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_ACC", 24);
			StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_MEDAL1", 24);
			StringCopy(&(Global_1835390.f_2717[4 /*6*/]), "SCLB_C_MEDAL2", 24);
			StringCopy(&(Global_1835390.f_2717[4 /*6*/]), "SCLB_C_MEDAL3", 24);
			Global_1835390.f_2710[0] = 0;
			Global_1835390.f_2710[1] = 1;
			Global_1835390.f_2710[2] = 2;
			Global_1835390.f_2710[3] = 5;
			Global_1835390.f_2710[4] = 4;
			Global_1835390.f_2710[5] = 3;
			Global_1835390.f_2708 = 6;
			GAMEPLAY::CLEAR_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			GAMEPLAY::CLEAR_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
			GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
			GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[5]);
			Global_1835390.f_2780.f_29[0] = 4;
			Global_1835390.f_2780.f_29[1] = 9;
			Global_1835390.f_2780.f_29[2] = 4;
			Global_1835390.f_2780.f_29[3] = 5;
			Global_1835390.f_2780.f_29[4] = 5;
			Global_1835390.f_2780.f_29[5] = 5;
			break;
		
		case 86:
			*uParam0.f_44 = 817;
			*uParam0.f_44.f_1 = 5;
			*uParam0.f_44.f_3 = 3;
			StringCopy(uParam0.f_44.f_3.f_1[0 /*16*/], "GameType", 32);
			StringCopy(uParam0.f_44.f_3.f_1[0 /*16*/].f_8, "SP", 32);
			StringCopy(uParam0.f_44.f_3.f_1[1 /*16*/], "Location", 32);
			*(uParam0.f_44.f_3.f_1[1 /*16*/].f_8) = {cVar0};
			StringCopy(uParam0.f_44.f_3.f_1[2 /*16*/], "Type", 32);
			StringCopy(uParam0.f_44.f_3.f_1[2 /*16*/].f_8, "StuntPlaneRace", 32);
			Global_1835390.f_2780 = 1;
			Global_1835390.f_2780.f_25 = 0;
			if (!is_string_null_or_empty(sParam3))
			{
				StringCopy(&(Global_1835390.f_2780.f_1), sParam3, 32);
			}
			else
			{
				StringCopy(&(Global_1835390.f_2780.f_1), "SPR_TITLE", 32);
			}
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
			Global_1835390.f_2710[0] = 2;
			Global_1835390.f_2708 = 1;
			GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			Global_1835390.f_2780.f_28 = 3;
			Global_1835390.f_2780.f_29[0] = 1;
			break;
		
		case 91:
			*uParam0.f_44 = 817;
			*uParam0.f_44.f_1 = 5;
			*uParam0.f_44.f_3 = 3;
			StringCopy(uParam0.f_44.f_3.f_1[0 /*16*/], "GameType", 32);
			StringCopy(uParam0.f_44.f_3.f_1[1 /*16*/], "Location", 32);
			StringCopy(uParam0.f_44.f_3.f_1[2 /*16*/], "Type", 32);
			StringCopy(uParam0.f_44.f_3.f_1[0 /*16*/].f_8, "SP", 32);
			Global_1835390.f_2780 = 1;
			if (iParam5 <= 0)
			{
				StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
				StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
				StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "", 24);
				StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "", 24);
				Global_1835390.f_2710[0] = 3;
				Global_1835390.f_2710[1] = 4;
				Global_1835390.f_2710[2] = 1;
				Global_1835390.f_2710[3] = 0;
				Global_1835390.f_2709 = 6;
				Global_1835390.f_2708 = 2;
				GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
				GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
				Global_1835390.f_2780.f_28 = 4;
				Global_1835390.f_2780.f_29[0] = 1;
				Global_1835390.f_2780.f_29[1] = 3;
			}
			else
			{
				StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
				StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
				StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
				StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "", 24);
				Global_1835390.f_2710[0] = 3;
				Global_1835390.f_2710[1] = 2;
				Global_1835390.f_2710[2] = 4;
				Global_1835390.f_2710[3] = 1;
				Global_1835390.f_2709 = 4;
				Global_1835390.f_2708 = 3;
				GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
				GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
				GAMEPLAY::SET_BIT(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
				Global_1835390.f_2780.f_28 = 5;
				Global_1835390.f_2780.f_29[0] = 1;
				Global_1835390.f_2780.f_29[1] = 1;
				Global_1835390.f_2780.f_29[2] = 3;
			}
			Global_1835390.f_2779 = 0;
			switch (iParam4)
			{
				case 0:
					StringCopy(&(Global_1835390.f_2780.f_1), "MGCR_1", 32);
					StringCopy(uParam0.f_44.f_3.f_1[1 /*16*/].f_8, "MGCR_1", 32);
					StringCopy(uParam0.f_44.f_3.f_1[2 /*16*/].f_8, "StreetRace", 32);
					break;
				
				case 1:
					StringCopy(&(Global_1835390.f_2780.f_1), "MGCR_2", 32);
					StringCopy(uParam0.f_44.f_3.f_1[1 /*16*/].f_8, "MGCR_2", 32);
					StringCopy(uParam0.f_44.f_3.f_1[2 /*16*/].f_8, "StreetRace", 32);
					break;
				
				case 2:
					StringCopy(&(Global_1835390.f_2780.f_1), "MGCR_4", 32);
					StringCopy(uParam0.f_44.f_3.f_1[1 /*16*/].f_8, "MGCR_4", 32);
					StringCopy(uParam0.f_44.f_3.f_1[2 /*16*/].f_8, "StreetRace", 32);
					break;
				
				case 3:
					StringCopy(&(Global_1835390.f_2780.f_1), "MGCR_5", 32);
					StringCopy(uParam0.f_44.f_3.f_1[1 /*16*/].f_8, "MGCR_5", 32);
					StringCopy(uParam0.f_44.f_3.f_1[2 /*16*/].f_8, "StreetRace", 32);
					break;
				
				case 4:
					StringCopy(&(Global_1835390.f_2780.f_1), "MGCR_6", 32);
					StringCopy(uParam0.f_44.f_3.f_1[1 /*16*/].f_8, "MGCR_6", 32);
					StringCopy(uParam0.f_44.f_3.f_1[2 /*16*/].f_8, "StreetRace", 32);
					break;
				
				case 5:
					StringCopy(&(Global_1835390.f_2780.f_1), "MGSR_1", 32);
					StringCopy(uParam0.f_44.f_3.f_1[1 /*16*/].f_8, "MGSR_1", 32);
					StringCopy(uParam0.f_44.f_3.f_1[2 /*16*/].f_8, "SeaRace", 32);
					break;
				
				case 6:
					StringCopy(&(Global_1835390.f_2780.f_1), "MGSR_2", 32);
					StringCopy(uParam0.f_44.f_3.f_1[1 /*16*/].f_8, "MGSR_2", 32);
					StringCopy(uParam0.f_44.f_3.f_1[2 /*16*/].f_8, "SeaRace", 32);
					break;
				
				case 7:
					StringCopy(&(Global_1835390.f_2780.f_1), "MGSR_3", 32);
					StringCopy(uParam0.f_44.f_3.f_1[1 /*16*/].f_8, "MGSR_3", 32);
					StringCopy(uParam0.f_44.f_3.f_1[2 /*16*/].f_8, "SeaRace", 32);
					break;
				
				case 8:
					StringCopy(&(Global_1835390.f_2780.f_1), "MGSR_4", 32);
					StringCopy(uParam0.f_44.f_3.f_1[1 /*16*/].f_8, "MGSR_4", 32);
					StringCopy(uParam0.f_44.f_3.f_1[2 /*16*/].f_8, "SeaRace", 32);
					break;
				
				default:
					break;
			}
			break;
	}
	iVar16 = false;
	iVar16 = false;
	while (iVar16 < Global_1835390.f_2708)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_1835390.f_2769, Global_1835390.f_2710[iVar16]))
		{
			GAMEPLAY::SET_BIT(&(Global_1835390.f_2770), iVar16);
		}
		iVar16++;
	}
	Global_1835390.f_2826 = func_441(cVar0, *uParam0.f_44, iParam1, iParam4, iParam5, iParam6);
}

int func_441(char[32] cParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	char[64] cVar0;
	
	MemCopy(&cVar0, {cParam0}, 16);
	StringIntConCat(&cVar0, iParam8, 64);
	StringConCat(&cVar0, "_", 64);
	if (func_435(iParam8))
	{
		if (iParam12)
		{
			StringConCat(&cVar0, "CoDri", 64);
		}
		else
		{
			StringConCat(&cVar0, "Dri", 64);
		}
		StringConCat(&cVar0, "_", 64);
	}
	StringIntConCat(&cVar0, iParam9, 64);
	StringConCat(&cVar0, "_", 64);
	StringIntConCat(&cVar0, iParam10, 64);
	StringConCat(&cVar0, "_", 64);
	StringIntConCat(&cVar0, iParam11, 64);
	return get_hash_key(&cVar0);
}

struct<6> func_442(int iParam0)
{
	char[24] cVar0;
	
	switch (iParam0)
	{
		case 38:
			StringCopy(&cVar0, "HUD_MG_RANGE0", 24);
			break;
		
		case 39:
			StringCopy(&cVar0, "HUD_MG_RANGE1", 24);
			break;
		
		case 40:
			StringCopy(&cVar0, "HUD_MG_RANGE2", 24);
			break;
		
		case 41:
			StringCopy(&cVar0, "HUD_MG_RANGE3", 24);
			break;
		
		case 42:
			StringCopy(&cVar0, "HUD_MG_RANGE4", 24);
			break;
		
		case 43:
			StringCopy(&cVar0, "HUD_MG_RANGE5", 24);
			break;
		
		case 44:
			StringCopy(&cVar0, "HUD_MG_RANGE6", 24);
			break;
		
		case 45:
			StringCopy(&cVar0, "HUD_MG_RANGE7", 24);
			break;
		
		case 46:
			StringCopy(&cVar0, "HUD_MG_RANGE8", 24);
			break;
		
		case 47:
			StringCopy(&cVar0, "HUD_MG_RANGE9", 24);
			break;
		
		case 48:
			StringCopy(&cVar0, "HUD_MG_RANGE10", 24);
			break;
		
		case 49:
			StringCopy(&cVar0, "HUD_MG_RANGE11", 24);
			break;
		
		case 50:
			StringCopy(&cVar0, "HUD_MG_RANGE12", 24);
			break;
		
		case 51:
			StringCopy(&cVar0, "HUD_MG_RANGE13", 24);
			break;
		
		case 52:
			StringCopy(&cVar0, "HUD_MG_RANGE14", 24);
			break;
		
		case 53:
			StringCopy(&cVar0, "HUD_MG_RANGE15", 24);
			break;
		
		case 54:
			StringCopy(&cVar0, "HUD_MG_RANGE16", 24);
			break;
		
		case 55:
			StringCopy(&cVar0, "HUD_MG_RANGE17", 24);
			break;
		
		case 206:
			StringCopy(&cVar0, "HUD_MG_RANGE18", 24);
			break;
		
		case 207:
			StringCopy(&cVar0, "HUD_MG_RANGE19", 24);
			break;
		
		case 208:
			StringCopy(&cVar0, "HUD_MG_RANGE20", 24);
			break;
		
		case 209:
			StringCopy(&cVar0, "HUD_MG_RANGE21", 24);
			break;
	}
	return cVar0;
}

bool func_443()
{
	if (((((((Global_1617379.f_33655 == 1 || Global_1617379.f_33655 == 3) || Global_1617379.f_33655 == 5) || Global_1617379.f_33655 == 7) || Global_1617379.f_33655 == 8) || Global_1617379.f_33655 == 9) || Global_1617379.f_33655 == 11) || Global_1617379.f_33655 == 13)
	{
		return true;
	}
	return false;
}

bool func_444(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 2;
	if (Global_1840922.f_2 + 5 < GAMEPLAY::GET_FRAME_COUNT() && Global_1840922.f_2 > 0)
	{
		func_345(&Global_1840922);
		func_345(&(Global_1840922.f_49));
		*iParam0 = 0;
		Global_1840922.f_2 = 0;
		func_453(0);
	}
	Global_1840922.f_2 = GAMEPLAY::GET_FRAME_COUNT();
	iVar1 = -1;
	if (is_orbis_version())
	{
		if (_0xBD545D44CCE70597() == 0)
		{
			iVar1 = _0x74FB3E29E6D10FA9();
		}
	}
	if ((is_orbis_version() && (((iVar1 == 4 || iVar1 == 2) || iVar1 == 1) || iVar1 == 5)) || (!func_451() && network_is_signed_online()))
	{
		if (_0x8D11E61A4ABF49CC())
		{
			func_448(&(Global_1840922.f_3), func_450(&(Global_1840922.f_3)));
			if (!GAMEPLAY::IS_BIT_SET(*iParam0, 4))
			{
				GAMEPLAY::SET_BIT(iParam0, 4);
				StringCopy(&(Global_1840922.f_3.f_1), "", 64);
				func_446(&(Global_1840922.f_3), 0);
			}
		}
		else
		{
			if (iVar1 == 4)
			{
				_set_warning_message_2("PM_INF_QMFT", "HUD_PROFILECHNG", iVar0, 0, 0, -1, 0, 0, 1);
			}
			else if (iVar1 == 2)
			{
				_set_warning_message_2("PM_INF_QMFT", "HUD_GAMEUPD_G", iVar0, 0, 0, -1, 0, 0, 1);
			}
			else if (iVar1 == 1)
			{
				_set_warning_message_2("PM_INF_QMFT", "HUD_SYSTUPD_G", iVar0, 0, 0, -1, 0, 0, 1);
			}
			else if (iVar1 == 5)
			{
				_set_warning_message_2("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, 0, -1, 0, 0, 1);
			}
			else if (!func_451())
			{
				_set_warning_message_2("PM_INF_QMFT", "SCLB_NO_ROS", iVar0, 0, 0, -1, 0, 0, 1);
			}
			if (!GAMEPLAY::IS_BIT_SET(*iParam0, false))
			{
				if (!is_control_pressed(2, 201))
				{
					GAMEPLAY::SET_BIT(iParam0, false);
				}
			}
			else if (is_control_just_released(2, 201))
			{
				func_345(&(Global_1840922.f_49));
				func_345(&Global_1840922);
				*iParam0 = 0;
				Global_1840922.f_2 = 0;
				func_453(0);
				return true;
			}
		}
	}
	else
	{
		func_448(&(Global_1840922.f_3), func_450(&(Global_1840922.f_3)));
		if ((func_445(&(Global_1840922.f_49)) && !func_423(&(Global_1840922.f_49), 2000, 1)) && !network_is_signed_online())
		{
			GAMEPLAY::SET_BIT(iParam0, 3);
			StringCopy(&(Global_1840922.f_3.f_1), "", 64);
			func_446(&(Global_1840922.f_3), 0);
		}
		else if (!GAMEPLAY::IS_BIT_SET(*iParam0, 3))
		{
			if (!GAMEPLAY::IS_BIT_SET(*iParam0, true))
			{
				display_system_signin_ui(0);
				GAMEPLAY::SET_BIT(iParam0, true);
				StringCopy(&(Global_1840922.f_3.f_1), "", 64);
				func_446(&(Global_1840922.f_3), 0);
			}
		}
		if (func_445(&Global_1840922))
		{
			if (!func_423(&Global_1840922, 4000, 1))
			{
				iVar2 = true;
			}
		}
		if (!iVar2)
		{
			if (iParam1)
			{
				if (!network_is_signed_online())
				{
					if (_0xEFFB25453D8600F9())
					{
						_set_warning_message_2("PM_INF_QMFT", "STORE_NOT_ONL", iVar0, 0, 0, -1, 0, 0, 1);
					}
					else
					{
						_set_warning_message_2("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, 0, -1, 0, 0, 1);
					}
					if (!is_system_ui_being_displayed())
					{
						if (!GAMEPLAY::IS_BIT_SET(*iParam0, false))
						{
							if (!is_control_pressed(2, 201))
							{
								GAMEPLAY::SET_BIT(iParam0, false);
							}
						}
						else if (is_control_just_released(2, 201))
						{
							func_345(&Global_1840922);
							*iParam0 = 0;
							Global_1840922.f_2 = 0;
							func_453(0);
							return true;
						}
					}
				}
				else
				{
					func_345(&Global_1840922);
					*iParam0 = 0;
					Global_1840922.f_2 = 0;
					func_453(0);
					return true;
				}
			}
			else if (GAMEPLAY::IS_BIT_SET(*iParam0, 3))
			{
				if (_0xEFFB25453D8600F9())
				{
					_set_warning_message_2("PM_INF_QMFT", "SCLB_SIGN_OUT", iVar0, 0, 0, -1, 0, 0, 1);
				}
				else
				{
					_set_warning_message_2("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, 0, -1, 0, 0, 1);
				}
				if (!GAMEPLAY::IS_BIT_SET(*iParam0, false))
				{
					if (!is_control_pressed(2, 201))
					{
						GAMEPLAY::SET_BIT(iParam0, false);
					}
				}
				else if (is_control_just_released(2, 201))
				{
					func_345(&(Global_1840922.f_49));
					func_345(&Global_1840922);
					*iParam0 = 0;
					Global_1840922.f_2 = 0;
					func_453(0);
					return true;
				}
			}
			else
			{
				if (_0xEFFB25453D8600F9())
				{
					_set_warning_message_2("PM_INF_QMFT", "SCLB_NOT_ONL", iVar0, 0, 0, -1, 0, 0, 1);
				}
				else
				{
					_set_warning_message_2("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, 0, -1, 0, 0, 1);
				}
				if (!is_system_ui_being_displayed())
				{
					if (!GAMEPLAY::IS_BIT_SET(*iParam0, false))
					{
						if (!is_control_pressed(2, 201))
						{
							GAMEPLAY::SET_BIT(iParam0, false);
						}
					}
					else if (is_control_just_released(2, 201))
					{
						func_345(&(Global_1840922.f_49));
						func_345(&Global_1840922);
						*iParam0 = 0;
						Global_1840922.f_2 = 0;
						func_453(0);
						return true;
					}
				}
			}
		}
	}
	return false;
}

auto func_445(auto uParam0)
{
	return *uParam0.f_1;
}

void func_446(auto uParam0, int iParam1)
{
	func_447(uParam0);
	if (iParam1)
	{
		func_453(0);
	}
	*uParam0.f_35 = 1;
}

void func_447(auto uParam0)
{
	struct<46> Var0;
	
	Var0.f_41 = 1;
	*uParam0 = {Var0};
}

void func_448(auto uParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		*uParam0 = 0;
		func_449(uParam0);
	}
	if (*uParam0 == 0)
	{
		if (*uParam0.f_36)
		{
			_0xABA17D7CE615ADBF(uParam0.f_1);
			add_text_component_integer(*uParam0.f_33);
			add_text_component_integer(*uParam0.f_34);
			_0xBD12F8228410D9B4(*uParam0.f_41);
		}
		else if (*uParam0.f_37)
		{
			_0xABA17D7CE615ADBF(uParam0.f_1);
			add_text_component_integer(*uParam0.f_33);
			_0xBD12F8228410D9B4(*uParam0.f_41);
		}
		else if (*uParam0.f_39)
		{
			_0xABA17D7CE615ADBF(uParam0.f_1);
			add_text_component_substring_player_name(uParam0.f_17);
			add_text_component_integer(*uParam0.f_33);
			add_text_component_integer(*uParam0.f_34);
			_0xBD12F8228410D9B4(*uParam0.f_41);
		}
		else if (*uParam0.f_38)
		{
			_0xABA17D7CE615ADBF(uParam0.f_1);
			add_text_component_substring_player_name(uParam0.f_17);
			_0xBD12F8228410D9B4(*uParam0.f_41);
		}
		else if (*uParam0.f_40)
		{
			_0xABA17D7CE615ADBF(uParam0.f_1);
			add_text_component_substring_time(*uParam0.f_33, 70);
			_0xBD12F8228410D9B4(*uParam0.f_41);
		}
		else
		{
			_0xABA17D7CE615ADBF(uParam0.f_1);
			_0xBD12F8228410D9B4(*uParam0.f_41);
		}
		*uParam0 = 1;
	}
	if (*uParam0 == 1)
	{
	}
}

void func_449(auto uParam0)
{
	*uParam0.f_35 = 0;
}

auto func_450(auto uParam0)
{
	return *uParam0.f_35;
}

bool func_451()
{
	if (func_452())
	{
		return false;
	}
	if (network_is_cloud_available() == 0)
	{
		return false;
	}
	return true;
}

auto func_452()
{
	return Global_2443548;
}

void func_453(int iParam0)
{
	_0x10D373323E5B9C0D();
	if (iParam0)
	{
		_0xC65AB383CD91DF98();
	}
}

void func_454(auto uParam0, int iParam1, char* sParam2)
{
	func_142(&(Local_51.f_119), 1128792064, 1, 0, 1, 1065353216);
	hide_hud_component_this_frame(9);
	hide_hud_component_this_frame(7);
	func_439(iParam1, sParam2);
	func_455(uParam0, &uLocal_1580);
}

void func_455(auto uParam0, auto uParam1)
{
	int iVar0;
	int iVar1;
	var[] uVar2 = new var[3];
	int iVar6;
	int iVar7;
	int iVar8;
	struct<16> Var9;
	char* sVar25;
	int[] iVar27 = new int[3];
	int iVar31;
	struct<13> Var32;
	auto uVar45;
	struct<6> Var51;
	struct<6> Var57;
	int iVar63;
	
	func_416(&(Global_1840922.f_49), 1, 0);
	hide_help_text_this_frame();
	func_515();
	func_514();
	hide_hud_and_radar_this_frame();
	func_512();
	hide_hud_component_this_frame(10);
	func_511(1);
	func_510(1);
	if (!func_418())
	{
		if (!is_audio_scene_active("LEADERBOARD_SCENE"))
		{
			start_audio_scene("LEADERBOARD_SCENE");
		}
	}
	if (!GAMEPLAY::IS_BIT_SET(*uParam1.f_42, 3))
	{
		*uParam0 = func_336();
		GAMEPLAY::SET_BIT(uParam1.f_42, 3);
	}
	Var32 = {func_434(player_id())};
	if (has_scaleform_movie_loaded(*uParam0))
	{
		if (((!_network_are_ros_available() || !is_player_online()) || (!network_have_online_privileges() && _0x1353F87E89946207())) || Global_1835390.f_2832 != 0)
		{
			if (!is_player_online())
			{
				if (Global_1835390.f_2829 != 2)
				{
					GAMEPLAY::CLEAR_BIT(uParam1.f_42, true);
					Global_1835390.f_2829 = 2;
				}
			}
			else if (!network_have_online_privileges() && _0x1353F87E89946207())
			{
				if (Global_1835390.f_2829 != 3)
				{
					GAMEPLAY::CLEAR_BIT(uParam1.f_42, true);
					Global_1835390.f_2829 = 3;
				}
			}
			else if (!_network_are_ros_available())
			{
				if (Global_1835390.f_2829 != 4)
				{
					GAMEPLAY::CLEAR_BIT(uParam1.f_42, true);
					Global_1835390.f_2829 = 4;
				}
			}
			else if (Global_1835390.f_2832 != 0)
			{
				if (Global_1835390.f_2829 != 5)
				{
					GAMEPLAY::CLEAR_BIT(uParam1.f_42, true);
					Global_1835390.f_2829 = 5;
				}
			}
			if (!GAMEPLAY::IS_BIT_SET(*uParam1.f_42, true))
			{
				_push_scaleform_movie_function(*uParam0, "CLEAR_ALL_SLOTS");
				_pop_scaleform_movie_function_void();
				func_509(*uParam0, Global_1835390.f_2780);
				if (does_text_label_exist(&(Global_1835390.f_2780.f_1)))
				{
					if (!func_435(*uParam1.f_44))
					{
						if (Global_1835390.f_2780.f_26 > 0)
						{
							Var9 = {Global_1835390.f_2780.f_9};
							func_508(*uParam0, &(Global_1835390.f_2780.f_1), &sVar25, &Var9, Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
						}
						else
						{
							func_508(*uParam0, &(Global_1835390.f_2780.f_1), &sVar25, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
						}
					}
					else if (!Global_1835390.f_2780.f_27)
					{
						StringCopy(&Var9, "FMMC_COR_SCLB5", 64);
						if (Global_1835390.f_2780.f_26 > 0)
						{
							func_508(*uParam0, &(Global_1835390.f_2780.f_1), &Var9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
						}
						else
						{
							func_508(*uParam0, &(Global_1835390.f_2780.f_1), &Var9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
						}
					}
					else
					{
						StringCopy(&Var9, "FMMC_COR_SCLB6", 64);
						if (Global_1835390.f_2780.f_26 > 0)
						{
							func_508(*uParam0, &(Global_1835390.f_2780.f_1), &Var9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
						}
						else
						{
							func_508(*uParam0, &(Global_1835390.f_2780.f_1), &Var9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
						}
					}
					func_507(*uParam0, "SCLB_C_RANK", &(Global_1835390.f_2717), Global_1835390.f_2708);
				}
				iVar31 = false;
				GAMEPLAY::SET_BIT(&iVar31, 4);
				func_506(*uParam0, &iVar6, iVar31, 1, 1);
				iVar31 = false;
				GAMEPLAY::SET_BIT(&iVar31, 5);
				func_506(*uParam0, &iVar6, iVar31, 1, 1);
				iVar31 = false;
				GAMEPLAY::SET_BIT(&iVar31, 6);
				func_506(*uParam0, &iVar6, iVar31, 1, 1);
				GAMEPLAY::SET_BIT(uParam1.f_42, true);
				func_505(*uParam0);
				GAMEPLAY::CLEAR_BIT(uParam1.f_42, 2);
				clear_help(1);
			}
			else
			{
				func_505(*uParam0);
			}
		}
		else
		{
			if (Global_1835390.f_2829 != 1)
			{
				GAMEPLAY::CLEAR_BIT(uParam1.f_42, true);
				Global_1835390.f_2829 = 1;
			}
			if (!func_477(uParam1))
			{
				*uParam1.f_246.f_1 = -1;
				GAMEPLAY::CLEAR_BIT(uParam1.f_42, true);
				if (!GAMEPLAY::IS_BIT_SET(*uParam1.f_42, false))
				{
					_push_scaleform_movie_function(*uParam0, "CLEAR_ALL_SLOTS");
					_pop_scaleform_movie_function_void();
					func_509(*uParam0, Global_1835390.f_2780);
					if (does_text_label_exist(&(Global_1835390.f_2780.f_1)))
					{
						if (!func_435(*uParam1.f_44))
						{
							if (Global_1835390.f_2780.f_26 > 0)
							{
								Var9 = {Global_1835390.f_2780.f_9};
								func_508(*uParam0, &(Global_1835390.f_2780.f_1), &sVar25, &Var9, 1, Global_1835390.f_2780.f_26);
							}
							else
							{
								func_508(*uParam0, &(Global_1835390.f_2780.f_1), &sVar25, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
							}
						}
						else if (!Global_1835390.f_2780.f_27)
						{
							StringCopy(&Var9, "FMMC_COR_SCLB5", 64);
							if (Global_1835390.f_2780.f_26 > 0)
							{
								func_508(*uParam0, &(Global_1835390.f_2780.f_1), &Var9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
							}
							else
							{
								func_508(*uParam0, &(Global_1835390.f_2780.f_1), &Var9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
							}
						}
						else
						{
							StringCopy(&Var9, "FMMC_COR_SCLB6", 64);
							if (Global_1835390.f_2780.f_26 > 0)
							{
								func_508(*uParam0, &(Global_1835390.f_2780.f_1), &Var9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
							}
							else
							{
								func_508(*uParam0, &(Global_1835390.f_2780.f_1), &Var9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
							}
						}
						func_507(*uParam0, "SCLB_C_RANK", &(Global_1835390.f_2717), Global_1835390.f_2708);
					}
					GAMEPLAY::SET_BIT(uParam1.f_42, false);
					GAMEPLAY::CLEAR_BIT(uParam1.f_42, 2);
				}
				iVar6 = false;
				iVar0 = 0;
				if (Global_1835390.f_2825 == -1)
				{
					StringCopy(&Var51, "SC_LB_DL0", 24);
					iVar0 = 0;
					while (iVar0 < 3)
					{
						if (iVar0 == 0)
						{
							iVar31 = false;
							GAMEPLAY::SET_BIT(&iVar31, 4);
							func_506(*uParam0, &iVar6, iVar31, 0, 0);
						}
						else if (iVar0 == 1)
						{
							iVar31 = false;
							GAMEPLAY::SET_BIT(&iVar31, 5);
							func_506(*uParam0, &iVar6, iVar31, 0, 0);
						}
						else if (iVar0 == 2)
						{
							iVar31 = false;
							GAMEPLAY::SET_BIT(&iVar31, 6);
							func_506(*uParam0, &iVar6, iVar31, 0, 0);
						}
						iVar31 = false;
						GAMEPLAY::SET_BIT(&iVar31, 7);
						func_476(*uParam0, iVar6, iVar31, &Var51);
						iVar6++;
						iVar0++;
					}
					Global_1835390.f_2825 = 1;
					func_345(&(Global_1835390.f_2823));
				}
				else if (func_423(&(Global_1835390.f_2823), 300, 0))
				{
					StringCopy(&Var57, "SC_LB_DL", 24);
					StringIntConCat(&Var57, Global_1835390.f_2825, 24);
					iVar0 = 0;
					while (iVar0 < 3)
					{
						if (iVar0 == 0)
						{
							iVar31 = false;
							GAMEPLAY::SET_BIT(&iVar31, 4);
							func_506(*uParam0, &iVar6, iVar31, 0, 0);
						}
						else if (iVar0 == 1)
						{
							iVar31 = false;
							GAMEPLAY::SET_BIT(&iVar31, 5);
							func_506(*uParam0, &iVar6, iVar31, 0, 0);
						}
						else if (iVar0 == 2)
						{
							iVar31 = false;
							GAMEPLAY::SET_BIT(&iVar31, 6);
							func_506(*uParam0, &iVar6, iVar31, 0, 0);
						}
						iVar31 = false;
						GAMEPLAY::SET_BIT(&iVar31, 7);
						func_476(*uParam0, iVar6, iVar31, &Var57);
						iVar6++;
						iVar0++;
					}
					Global_1835390.f_2825++;
					if (Global_1835390.f_2825 > 3)
					{
						Global_1835390.f_2825 = 0;
					}
					func_345(&(Global_1835390.f_2823));
				}
				func_505(*uParam0);
			}
			else
			{
				GAMEPLAY::CLEAR_BIT(uParam1.f_42, false);
				if (!GAMEPLAY::IS_BIT_SET(*uParam1.f_42, true))
				{
					iVar0 = 0;
					while (iVar0 < 3)
					{
						*uParam1.f_246.f_187[iVar0] = 0;
						iVar0++;
					}
					_push_scaleform_movie_function(*uParam0, "CLEAR_ALL_SLOTS");
					_pop_scaleform_movie_function_void();
					func_509(*uParam0, Global_1835390.f_2780);
					if (does_text_label_exist(&(Global_1835390.f_2780.f_1)))
					{
						if (!func_435(*uParam1.f_44))
						{
							if (Global_1835390.f_2780.f_26 > 0)
							{
								Var9 = {Global_1835390.f_2780.f_9};
								func_508(*uParam0, &(Global_1835390.f_2780.f_1), &sVar25, &Var9, 1, Global_1835390.f_2780.f_26);
							}
							else
							{
								func_508(*uParam0, &(Global_1835390.f_2780.f_1), &sVar25, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
							}
						}
						else if (!Global_1835390.f_2780.f_27)
						{
							StringCopy(&Var9, "FMMC_COR_SCLB5", 64);
							if (Global_1835390.f_2780.f_26 > 0)
							{
								func_508(*uParam0, &(Global_1835390.f_2780.f_1), &Var9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
							}
							else
							{
								func_508(*uParam0, &(Global_1835390.f_2780.f_1), &Var9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
							}
						}
						else
						{
							StringCopy(&Var9, "FMMC_COR_SCLB6", 64);
							if (Global_1835390.f_2780.f_26 > 0)
							{
								func_508(*uParam0, &(Global_1835390.f_2780.f_1), &Var9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
							}
							else
							{
								func_508(*uParam0, &(Global_1835390.f_2780.f_1), &Var9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
							}
						}
						func_507(*uParam0, "SCLB_C_RANK", &(Global_1835390.f_2717), Global_1835390.f_2708);
					}
					if (!GAMEPLAY::IS_BIT_SET(*uParam1.f_42, 6))
					{
						func_348(&Global_1839721);
						func_472(uParam1, &Global_1839721);
						func_471(uParam1, &Global_1839721);
					}
					iVar6 = false;
					*uParam1.f_246.f_2 = 0;
					if ((Global_1835390.f_2704[0] > 1 || (Global_1835390.f_2704[0] > 0 && Global_1835390.f_2775[0] != -1)) || (((Global_1835390.f_2704[0] > 0 && Global_1835390.f_2780.f_27) && func_435(*uParam1.f_44)) && Global_1835390.f_2775[0] != -1))
					{
						*uParam1.f_246.f_1 = -1;
						iVar0 = 0;
						iVar0 = 0;
						while (iVar0 < 12)
						{
							iVar63 = false;
							if (Global_1839721[iVar0 /*100*/].f_75 == 1)
							{
								if (!iVar27[0])
								{
									iVar31 = false;
									GAMEPLAY::SET_BIT(&iVar31, 4);
									func_506(*uParam0, &iVar6, iVar31, 0, 0);
									iVar27[0] = 1;
								}
							}
							else if (Global_1839721[iVar0 /*100*/].f_75 == 2)
							{
								if (!iVar27[1])
								{
									iVar31 = false;
									GAMEPLAY::SET_BIT(&iVar31, 5);
									if ((Global_1835390.f_2704[1] < 1 && Global_1835390.f_2775[1] == -1) && !(((Global_1835390.f_2704[1] > 0 && Global_1835390.f_2780.f_27) && func_435(*uParam1.f_44)) && Global_1835390.f_2775[1] != -1))
									{
										func_506(*uParam0, &iVar6, iVar31, 1, 0);
										iVar63 = true;
									}
									else
									{
										func_506(*uParam0, &iVar6, iVar31, 0, 0);
									}
									iVar27[1] = 1;
								}
							}
							else if (Global_1839721[iVar0 /*100*/].f_75 == 3)
							{
								if (!iVar27[2])
								{
									iVar31 = false;
									GAMEPLAY::SET_BIT(&iVar31, 6);
									if (!_0x67A5589628E0CFF6())
									{
										iVar63 = true;
									}
									else if (!_0xBA9775570DB788CF())
									{
										iVar63 = true;
									}
									if ((Global_1835390.f_2704[2] < 2 && Global_1835390.f_2775[2] == -1) && !(((Global_1835390.f_2704[2] > 0 && Global_1835390.f_2780.f_27) && func_435(*uParam1.f_44)) && Global_1835390.f_2775[2] != -1))
									{
										iVar63 = true;
									}
									if (iVar63)
									{
										func_506(*uParam0, &iVar6, iVar31, 1, 0);
									}
									else
									{
										func_506(*uParam0, &iVar6, iVar31, 0, 0);
									}
									iVar27[2] = 1;
								}
							}
							if (func_429(Global_1839721[iVar0 /*100*/].f_32))
							{
								if (func_435(*uParam1.f_44))
								{
									_network_player_get_user_id(player_id(), &uVar45);
									if (!Global_1839721[iVar0 /*100*/].f_74 && are_strings_equal(uParam1.f_44.f_3.f_1[1 /*16*/].f_8, &uVar45))
									{
										iVar63 = true;
									}
								}
								if (!iVar63)
								{
									iVar31 = false;
									if (!Global_1835390.f_2780.f_27)
									{
										if (func_470(&(Global_1839721[iVar0 /*100*/].f_32), &Var32))
										{
											GAMEPLAY::SET_BIT(&iVar31, true);
											if (*uParam1.f_246.f_1 == -1)
											{
												iVar7 = true;
												*uParam1.f_246.f_1 = iVar0;
												GAMEPLAY::SET_BIT(&iVar31, 3);
											}
										}
									}
									if (func_435(*uParam1.f_44))
									{
										Var9 = {Global_1839721[iVar0 /*100*/]};
										if (!is_string_null_or_empty(&(Global_1839721[iVar0 /*100*/].f_84)) && !are_strings_equal(&(Global_1839721[iVar0 /*100*/].f_84), ""))
										{
											StringConCat(&Var9, "/", 64);
											StringConCat(&Var9, &(Global_1839721[iVar0 /*100*/].f_84), 64);
										}
										func_469(*uParam0, iVar6, iVar31, Global_1839721[iVar0 /*100*/].f_59, &Var9, &(Global_1839721[iVar0 /*100*/].f_80));
										*uParam1.f_246.f_6[iVar0 /*15*/] = iVar6;
										*(uParam1.f_246.f_6[iVar0 /*15*/]).f_1 = iVar31;
										*(uParam1.f_246.f_6[iVar0 /*15*/].f_2) = {Global_1839721[iVar0 /*100*/].f_32};
										*uParam1.f_246.f_2++;
									}
									else
									{
										func_469(*uParam0, iVar6, iVar31, Global_1839721[iVar0 /*100*/].f_59, &(Global_1839721[iVar0 /*100*/]), &(Global_1839721[iVar0 /*100*/].f_80));
										*uParam1.f_246.f_6[iVar0 /*15*/] = iVar6;
										*(uParam1.f_246.f_6[iVar0 /*15*/]).f_1 = iVar31;
										*(uParam1.f_246.f_6[iVar0 /*15*/].f_2) = {Global_1839721[iVar0 /*100*/].f_32};
										*uParam1.f_246.f_2++;
									}
									iVar1 = false;
									while (iVar1 < Global_1835390.f_2708)
									{
										iVar8 = false;
										if (GAMEPLAY::IS_BIT_SET(Global_1835390.f_2770, iVar1))
										{
											if (GAMEPLAY::IS_BIT_SET(Global_1835390.f_2768, iVar1))
											{
												if (Global_1835390.f_2754[iVar1] == Global_1839721[iVar0 /*100*/].f_67[iVar1])
												{
													iVar8 = true;
												}
											}
											if (iVar8)
											{
												func_464(Global_1835390.f_2780, iVar1, Global_1839721[iVar0 /*100*/].f_67[iVar1], 0, Global_1839721[iVar0 /*100*/].f_58);
											}
											else
											{
												func_464(Global_1835390.f_2780, iVar1, Global_1839721[iVar0 /*100*/].f_67[iVar1], Global_1839721[iVar0 /*100*/].f_74, Global_1839721[iVar0 /*100*/].f_58);
											}
										}
										else
										{
											if (GAMEPLAY::IS_BIT_SET(Global_1835390.f_2768, iVar1))
											{
												if (Global_1835390.f_2761[iVar1] == Global_1839721[iVar0 /*100*/].f_67[iVar1])
												{
													iVar8 = true;
												}
											}
											if (iVar8)
											{
												func_461(Global_1835390.f_2780, iVar1, Global_1839721[iVar0 /*100*/].f_60[iVar1], 0);
											}
											else
											{
												func_461(Global_1835390.f_2780, iVar1, Global_1839721[iVar0 /*100*/].f_60[iVar1], Global_1839721[iVar0 /*100*/].f_74);
											}
										}
										iVar1++;
									}
									func_460();
									uVar2[Global_1839721[iVar0 /*100*/].f_75 - 1]++;
									if (uVar2[Global_1839721[iVar0 /*100*/].f_75 - 1] == 2)
									{
										if (Global_1839721[iVar0 /*100*/].f_59 > 2)
										{
											GAMEPLAY::SET_BIT(&iVar31, 2);
											GAMEPLAY::SET_BIT(uParam1.f_246.f_6[0 /*15*/].f_1, 2);
											func_459(*uParam0, iVar6 - 1, iVar31);
										}
									}
									iVar6++;
								}
							}
							iVar0++;
						}
						iVar0 = 0;
						iVar0 = 0;
						while (iVar0 < 3)
						{
							*uParam1.f_246.f_187[iVar0] = uVar2[iVar0];
							iVar0++;
						}
					}
					else
					{
						iVar31 = false;
						GAMEPLAY::SET_BIT(&iVar31, 4);
						func_506(*uParam0, &iVar6, iVar31, 1, 0);
						iVar31 = false;
						GAMEPLAY::SET_BIT(&iVar31, 5);
						func_506(*uParam0, &iVar6, iVar31, 1, 0);
						iVar31 = false;
						GAMEPLAY::SET_BIT(&iVar31, 6);
						func_506(*uParam0, &iVar6, iVar31, 1, 0);
					}
					GAMEPLAY::SET_BIT(uParam1.f_42, true);
					GAMEPLAY::CLEAR_BIT(uParam1.f_42, 2);
					func_505(*uParam0);
					clear_help(1);
					if (*uParam1.f_246.f_1 == -1 && !iVar7 == 1)
					{
						if (Global_1835390.f_2704[0] > 1)
						{
							*uParam1.f_246.f_1 = 0;
							GAMEPLAY::SET_BIT(uParam1.f_246.f_6[*uParam1.f_246.f_1 /*15*/].f_1, 3);
							func_459(*uParam0, *uParam1.f_246.f_6[*uParam1.f_246.f_1 /*15*/], *(uParam1.f_246.f_6[*uParam1.f_246.f_1 /*15*/]).f_1);
						}
					}
				}
				else
				{
					func_505(*uParam0);
					func_456(uParam0, uParam1);
				}
			}
		}
	}
}

void func_456(auto uParam0, auto uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	auto uVar4;
	auto uVar5;
	int iVar6;
	auto uVar7;
	auto uVar8;
	
	iVar1 = *uParam1.f_246.f_1;
	if (_is_input_disabled(2))
	{
		_show_cursor_this_frame();
		set_input_exclusive(2, 239);
		set_input_exclusive(2, 240);
		set_input_exclusive(2, 237);
		set_input_exclusive(2, 238);
		CONTROLS::DISABLE_CONTROL_ACTION(2, 200, 1);
		if (is_disabled_control_pressed(2, 241))
		{
			_set_control_normal(2, 188, 1f);
		}
		if (is_disabled_control_pressed(2, 242))
		{
			_set_control_normal(2, 187, 1f);
		}
		if (_0x632B2940C67F4EA9(*uParam0, &iVar2, &iVar3, &uVar4))
		{
			if (iVar2 == 5)
			{
				if (iVar3 > *uParam1.f_246.f_187[0])
				{
					if (iVar3 <= *uParam1.f_246.f_187[0] + *uParam1.f_246.f_187[1] + 2)
					{
						iVar3 -= 2;
					}
					else
					{
						iVar3 -= 4;
					}
				}
				iVar3--;
				if (*uParam1.f_246.f_1 != iVar3)
				{
					*uParam1.f_246.f_1 = iVar3;
					play_sound_frontend(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					iVar0 = true;
				}
				else
				{
					_set_control_normal(2, 217, 1f);
				}
			}
		}
	}
	if (!_is_input_disabled(2))
	{
		func_458(&uVar5, &iVar6, &uVar7, &uVar8, 0);
	}
	if (*uParam1.f_246.f_2 > 0)
	{
		if (!GAMEPLAY::IS_BIT_SET(*uParam1.f_246, false))
		{
			if ((is_control_pressed(2, 188) || is_disabled_control_pressed(2, 188)) || iVar6 < -100)
			{
				play_sound_frontend(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				*uParam1.f_246.f_1 += -1;
				GAMEPLAY::SET_BIT(uParam1.f_246, false);
				func_345(uParam1.f_246.f_3);
				iVar0 = true;
			}
		}
		else if (func_457(uParam1, 188))
		{
			GAMEPLAY::CLEAR_BIT(uParam1.f_246, false);
		}
		if (!GAMEPLAY::IS_BIT_SET(*uParam1.f_246, true))
		{
			if ((is_control_pressed(2, 187) || is_disabled_control_pressed(2, 187)) || iVar6 > 100)
			{
				play_sound_frontend(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				*uParam1.f_246.f_1++;
				GAMEPLAY::SET_BIT(uParam1.f_246, true);
				func_345(uParam1.f_246.f_3);
				iVar0 = true;
			}
		}
		else if (func_457(uParam1, 187))
		{
			GAMEPLAY::CLEAR_BIT(uParam1.f_246, true);
		}
	}
	if (iVar0)
	{
		if (*uParam1.f_246.f_1 < 0)
		{
			*uParam1.f_246.f_1 = *uParam1.f_246.f_2 - 1;
		}
		if (*uParam1.f_246.f_1 >= *uParam1.f_246.f_2)
		{
			*uParam1.f_246.f_1 = 0;
		}
	}
	if (!GAMEPLAY::IS_BIT_SET(*uParam1.f_246, 3))
	{
		if ((is_control_pressed(2, 204) || is_disabled_control_just_pressed(2, 204)) || is_control_just_pressed(2, 237))
		{
			GAMEPLAY::SET_BIT(uParam1.f_246, 3);
			func_345(uParam1.f_246.f_3);
			iVar0 = true;
		}
	}
	else if (func_457(uParam1, 204))
	{
		GAMEPLAY::CLEAR_BIT(uParam1.f_246, 3);
	}
	if (*uParam1.f_246.f_1 >= 0)
	{
		if (*uParam1.f_246.f_1 != iVar1)
		{
			if (iVar1 >= 0)
			{
				GAMEPLAY::CLEAR_BIT(uParam1.f_246.f_6[iVar1 /*15*/].f_1, 3);
				func_459(*uParam0, *uParam1.f_246.f_6[iVar1 /*15*/], *(uParam1.f_246.f_6[iVar1 /*15*/]).f_1);
			}
			GAMEPLAY::SET_BIT(uParam1.f_246.f_6[*uParam1.f_246.f_1 /*15*/].f_1, 3);
			func_459(*uParam0, *uParam1.f_246.f_6[*uParam1.f_246.f_1 /*15*/], *(uParam1.f_246.f_6[*uParam1.f_246.f_1 /*15*/]).f_1);
			GAMEPLAY::CLEAR_BIT(uParam1.f_42, 2);
		}
		if (func_429(*(uParam1.f_246.f_6[*uParam1.f_246.f_1 /*15*/].f_2)))
		{
			if (!GAMEPLAY::IS_BIT_SET(*uParam1.f_246, 2))
			{
				if (is_control_pressed(2, 217) || is_disabled_control_just_pressed(2, 217))
				{
					if (!is_system_ui_being_displayed())
					{
						play_sound_frontend(-1, "SELECT", "HUD_FRONTEND_MP_SOUNDSET", 1);
						GAMEPLAY::SET_BIT(uParam1.f_246, 2);
						network_show_profile_ui(uParam1.f_246.f_6[*uParam1.f_246.f_1 /*15*/].f_2);
					}
				}
			}
			else if (!is_control_pressed(2, 217))
			{
				GAMEPLAY::CLEAR_BIT(uParam1.f_246, 2);
			}
		}
	}
}

bool func_457(auto uParam0, int iParam1)
{
	auto uVar0;
	int iVar1;
	auto uVar2;
	auto uVar3;
	
	if (iParam1 == 188 || iParam1 == 187)
	{
		func_458(&uVar0, &iVar1, &uVar2, &uVar3, 0);
		if (((!is_control_pressed(2, iParam1) && !is_disabled_control_pressed(2, iParam1)) && (iVar1 < 75 && iVar1 > -75)) || func_423(uParam0.f_246.f_3, 250, 0))
		{
			return true;
		}
	}
	else if ((!is_control_pressed(2, iParam1) && !is_disabled_control_pressed(2, iParam1)) || func_423(uParam0.f_246.f_3, 250, 0))
	{
		return true;
	}
	return false;
}

void func_458(auto uParam0, auto uParam1, auto uParam2, auto uParam3, int iParam4)
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

void func_459(int iParam0, int iParam1, int iParam2)
{
	_push_scaleform_movie_function(iParam0, "SET_SLOT_STATE");
	_push_scaleform_movie_function_parameter_int(iParam1);
	_push_scaleform_movie_function_parameter_int(iParam2);
	_pop_scaleform_movie_function_void();
}

void func_460()
{
	_pop_scaleform_movie_function_void();
}

void func_461(struct<30> Param0, auto uParam1, auto uParam2, auto uParam3, auto uParam4, auto uParam5, auto uParam6, auto uParam7, auto uParam8, auto uParam9, auto uParam10, auto uParam11, auto uParam12, auto uParam13, int iParam14, Vector3 fParam15, int iParam16)
{
	switch (Param0.f_29[iParam43])
	{
		case 4:
			if (iParam45)
			{
				_begin_text_component("NUMBER");
				add_text_component_float(fParam44, 2);
				_end_text_component();
			}
			else
			{
				_begin_text_component("SC_LB_EMPTY");
				_end_text_component();
			}
			break;
		
		case 12:
			if (iParam45)
			{
				_begin_text_component("NUMBER");
				add_text_component_integer(floor(fParam44));
				_end_text_component();
			}
			else
			{
				_begin_text_component("SC_LB_EMPTY");
				_end_text_component();
			}
			break;
		
		case 17:
		case 19:
		case 18:
		case 20:
			if (iParam45)
			{
				if (Param0.f_29[iParam43] == 18 || Param0.f_29[iParam43] == 20)
				{
					fParam44 *= -1f;
				}
				if (!_0xD3D15555431AB793())
				{
					if (Param0.f_29[iParam43] == 19 || Param0.f_29[iParam43] == 20)
					{
						fParam44 = func_463(fParam44);
					}
					else
					{
						fParam44 = func_462(fParam44);
					}
				}
				_begin_text_component("NUMBER");
				add_text_component_float(fParam44, 2);
				_end_text_component();
			}
			else
			{
				_begin_text_component("SC_LB_EMPTY");
				_end_text_component();
			}
			break;
		
		case 0:
			break;
	}
}

float func_462(Vector3 fParam0)
{
	return fParam0 / 0.3048f;
}

float func_463(Vector3 fParam0)
{
	return fParam0 / 1609.344f;
}

void func_464(struct<30> Param0, auto uParam1, auto uParam2, auto uParam3, auto uParam4, auto uParam5, auto uParam6, auto uParam7, auto uParam8, auto uParam9, auto uParam10, auto uParam11, auto uParam12, auto uParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	if (iParam44 == 2147483647 || iParam44 == -2147483647)
	{
		iParam45 = false;
	}
	switch (Param0.f_29[iParam43])
	{
		case 5:
			if (iParam45)
			{
				_begin_text_component("NUMBER");
				add_text_component_integer(iParam44);
				_end_text_component();
			}
			else
			{
				_begin_text_component("SC_LB_EMPTY");
				_end_text_component();
			}
			break;
		
		case 7:
			if (iParam45)
			{
				_begin_text_component("NUMBER");
				add_text_component_integer(-iParam44);
				_end_text_component();
			}
			else
			{
				_begin_text_component("SC_LB_EMPTY");
				_end_text_component();
			}
			break;
		
		case 1:
		case 9:
		case 11:
			if (iParam45)
			{
				if (Param0.f_29[iParam43] == 11 && iParam44 < 0)
				{
					iParam44 *= -1;
				}
				if (iParam44 >= 3600000 || iParam44 <= -3600000)
				{
					_begin_text_component("STRING");
					add_text_component_substring_time(iParam44, 14);
					_end_text_component();
				}
				else if (Param0.f_29[iParam43] == 9)
				{
					_begin_text_component("STRING");
					add_text_component_substring_time(iParam44, 6);
					_end_text_component();
				}
				else
				{
					_begin_text_component("STRING");
					add_text_component_substring_time(iParam44, 2055);
					_end_text_component();
				}
			}
			else
			{
				_begin_text_component("SC_LB_EMPTY");
				_end_text_component();
			}
			break;
		
		case 6:
			if (iParam45)
			{
				if (iParam44 == 2147483647)
				{
					_begin_text_component("SC_LB_EMPTY");
					_end_text_component();
				}
				else if (iParam44 >= 3600000 || iParam44 <= -3600000)
				{
					_begin_text_component("STRING");
					add_text_component_substring_time(iParam44, 14);
					_end_text_component();
				}
				else
				{
					_begin_text_component("STRING");
					add_text_component_substring_time(iParam44, 2055);
					_end_text_component();
				}
			}
			else
			{
				_begin_text_component("SC_LB_EMPTY");
				_end_text_component();
			}
			break;
		
		case 2:
		case 10:
			if (iParam45)
			{
				iParam44 *= -1;
				if (iParam44 >= 3600000 || iParam44 <= -3600000)
				{
					_begin_text_component("STRING");
					add_text_component_substring_time(iParam44, 14);
					_end_text_component();
				}
				else if (Param0.f_29[iParam43] == 10)
				{
					_begin_text_component("STRING");
					add_text_component_substring_time(iParam44, 6);
					_end_text_component();
				}
				else
				{
					_begin_text_component("STRING");
					add_text_component_substring_time(iParam44, 2055);
					_end_text_component();
				}
			}
			else
			{
				_begin_text_component("SC_LB_EMPTY");
				_end_text_component();
			}
			break;
		
		case 3:
			if (iParam46)
			{
				if (is_model_in_cdimage(iParam44))
				{
					_begin_text_component("SCLB_VEH_CUST");
					_add_text_component_item_string(get_display_name_from_vehicle_model(iParam44));
					_end_text_component();
				}
				else
				{
					_begin_text_component("SC_LB_EMPTY");
					_end_text_component();
				}
			}
			else if (is_model_in_cdimage(iParam44))
			{
				_begin_text_component(get_display_name_from_vehicle_model(iParam44));
				_end_text_component();
			}
			else
			{
				_begin_text_component("SC_LB_EMPTY");
				_end_text_component();
			}
			break;
		
		case 8:
			if (func_468(iParam44) != 0)
			{
				_begin_text_component(func_465(func_468(iParam44), 0));
				_end_text_component();
			}
			else
			{
				_begin_text_component("SC_LB_EMPTY");
				_end_text_component();
			}
			break;
		
		case 13:
		case 15:
		case 14:
		case 16:
			if (iParam45)
			{
				if (Param0.f_29[iParam43] == 14 || Param0.f_29[iParam43] == 16)
				{
					iParam44 *= -1;
				}
				if (!_0xD3D15555431AB793())
				{
					if (Param0.f_29[iParam43] == 15 || Param0.f_29[iParam43] == 16)
					{
						iParam44 = floor(func_463(to_float(iParam44)));
					}
					else
					{
						iParam44 = floor(func_462(to_float(iParam44)));
					}
				}
				_begin_text_component("NUMBER");
				add_text_component_integer(iParam44);
				_end_text_component();
			}
			else
			{
				_begin_text_component("SC_LB_EMPTY");
				_end_text_component();
			}
			break;
		
		case 0:
			break;
	}
}

char* func_465(int iParam0, int iParam1)
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
			if (func_467(iParam0, &Var0) != -1)
			{
				if (iParam1)
				{
					return func_466(&(Var0.f_31));
				}
				else
				{
					return func_466(&(Var0.f_7));
				}
			}
			break;
	}
	return "WT_INVALID";
}

auto func_466(auto uParam0)
{
	return uParam0;
}

int func_467(int iParam0, auto uParam1)
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

int func_468(int iParam0)
{
	if (iParam0 == 600)
	{
		return joaat("weapon_railgun");
	}
	else if (iParam0 == 500)
	{
		return joaat("weapon_minigun");
	}
	else if (iParam0 == 400)
	{
		return joaat("weapon_mg");
	}
	else if (iParam0 == 401)
	{
		return joaat("weapon_combatmg");
	}
	else if (iParam0 == 402)
	{
		return -572349828;
	}
	else if (iParam0 == 300)
	{
		return joaat("weapon_assaultrifle");
	}
	else if (iParam0 == 301)
	{
		return joaat("weapon_carbinerifle");
	}
	else if (iParam0 == 302)
	{
		return joaat("weapon_advancedrifle");
	}
	else if (iParam0 == 303)
	{
		return -947031628;
	}
	else if (iParam0 == 200)
	{
		return joaat("weapon_pumpshotgun");
	}
	else if (iParam0 == 201)
	{
		return joaat("weapon_sawnoffshotgun");
	}
	else if (iParam0 == 202)
	{
		return joaat("weapon_assaultshotgun");
	}
	else if (iParam0 == 203)
	{
		return joaat("weapon_bullpupshotgun");
	}
	else if (iParam0 == 100)
	{
		return joaat("weapon_microsmg");
	}
	else if (iParam0 == 101)
	{
		return joaat("weapon_smg");
	}
	else if (iParam0 == 102)
	{
		return joaat("weapon_assaultsmg");
	}
	else if (iParam0 == 0)
	{
		return joaat("weapon_pistol");
	}
	else if (iParam0 == 1)
	{
		return joaat("weapon_combatpistol");
	}
	else if (iParam0 == 2)
	{
		return joaat("weapon_appistol");
	}
	else if (iParam0 == 3)
	{
		return joaat("weapon_pistol50");
	}
	return 0;
}

void func_469(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, char* sParam5)
{
	_push_scaleform_movie_function(iParam0, "SET_SLOT");
	_push_scaleform_movie_function_parameter_int(iParam1);
	_push_scaleform_movie_function_parameter_int(iParam2);
	if (iParam3 > 0)
	{
		_begin_text_component("NUMBER");
		add_text_component_integer(iParam3);
		_end_text_component();
	}
	else
	{
		_begin_text_component("SC_LB_EMPTY");
		_end_text_component();
	}
	_0xE83A3E3557A56640(sParam4);
	_0xE83A3E3557A56640(sParam5);
}

bool func_470(auto uParam0, auto uParam1)
{
	if (!func_429(*uParam0))
	{
		return false;
	}
	if (!func_429(*uParam1))
	{
		return false;
	}
	if (network_are_handles_the_same(uParam0, uParam1))
	{
		return true;
	}
	return false;
}

void func_471(auto uParam0, auto uParam1)
{
	int iVar0;
	int iVar1;
	struct<75> Var2;
	auto uVar77;
	
	Var2.f_60 = 6;
	Var2.f_67 = 6;
	if (!GAMEPLAY::IS_BIT_SET(*uParam0.f_42, 5) && !GAMEPLAY::IS_BIT_SET(*uParam0.f_42, 6))
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (*(uParam1[iVar0 /*100*/]).f_75 != 0)
			{
				iVar1 = iVar0 + 1;
				while (iVar1 <= 11)
				{
					if (*(uParam1[iVar1 /*100*/]).f_75 != 0)
					{
						if (*(uParam1[iVar1 /*100*/]).f_75 < *(uParam1[iVar0 /*100*/]).f_75)
						{
							uVar77 = *(uParam1[iVar1 /*100*/]).f_75;
							*(uParam1[iVar1 /*100*/]).f_75 = *(uParam1[iVar0 /*100*/]).f_75;
							*(uParam1[iVar0 /*100*/]).f_75 = uVar77;
							Var2 = {*(uParam1[iVar1 /*100*/])};
							*(uParam1[iVar1 /*100*/]) = {*(uParam1[iVar0 /*100*/])};
							*(uParam1[iVar0 /*100*/]) = {Var2};
						}
						else if (*(uParam1[iVar1 /*100*/]).f_75 == *(uParam1[iVar0 /*100*/]).f_75)
						{
							if (*(uParam1[iVar1 /*100*/]).f_59 != -1)
							{
								if (*(uParam1[iVar1 /*100*/]).f_59 < *(uParam1[iVar0 /*100*/]).f_59 || *(uParam1[iVar0 /*100*/]).f_59 == -1)
								{
									uVar77 = *(uParam1[iVar1 /*100*/]).f_75;
									*(uParam1[iVar1 /*100*/]).f_75 = *(uParam1[iVar0 /*100*/]).f_75;
									*(uParam1[iVar0 /*100*/]).f_75 = uVar77;
									Var2 = {*(uParam1[iVar1 /*100*/])};
									*(uParam1[iVar1 /*100*/]) = {*(uParam1[iVar0 /*100*/])};
									*(uParam1[iVar0 /*100*/]) = {Var2};
								}
							}
						}
					}
					iVar1++;
				}
			}
			iVar0++;
		}
	}
}

void func_472(auto uParam0, auto uParam1)
{
	auto uVar0;
	auto uVar1;
	auto uVar2;
	int iVar3;
	int iVar4;
	
	if (!GAMEPLAY::IS_BIT_SET(*uParam0.f_42, 5) && !GAMEPLAY::IS_BIT_SET(*uParam0.f_42, 6))
	{
		iVar4 = 0;
		while (iVar4 < 12)
		{
			if (func_475(uParam1, iVar3, &uVar0, 0))
			{
				*(uParam1[iVar3 /*100*/]).f_75 = 1;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			if (func_475(uParam1, iVar3, &uVar1, 1))
			{
				*(uParam1[iVar3 /*100*/]).f_75 = 2;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			if (func_475(uParam1, iVar3, &uVar2, 2))
			{
				*(uParam1[iVar3 /*100*/]).f_75 = 3;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			iVar4++;
		}
	}
	else
	{
		func_473(uParam1);
	}
}

void func_473(auto uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	int iVar16;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_1835390.f_2704[iVar0] = 0;
		Global_1835390.f_2775[iVar0] = -1;
		iVar0++;
	}
	Var3 = {func_434(player_id())};
	if (leaderboards_get_cache_exists(Global_1835390.f_2826))
	{
		iVar16 = _0x58A651CD201D89AD(Global_1835390.f_2826);
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < iVar16)
		{
			if (iVar0 < 12)
			{
				func_474(&Global_1839591);
				iVar2 = 0;
				leaderboards_get_cache_data_row(Global_1835390.f_2826, iVar0, &Global_1839591);
				*(uParam0[iVar0 /*100*/]) = {Global_1839591.f_1};
				*(uParam0[iVar0 /*100*/].f_16) = {Global_1839591.f_17};
				*(uParam0[iVar0 /*100*/].f_32) = {Global_1839591.f_33};
				*(uParam0[iVar0 /*100*/].f_45) = {Global_1839591.f_46};
				*(uParam0[iVar0 /*100*/]).f_58 = Global_1839591.f_59;
				*(uParam0[iVar0 /*100*/]).f_59 = Global_1839591.f_60;
				Global_1835390.f_2708 = Global_1839591.f_62;
				Global_1835390.f_2769 = Global_1839591.f_63;
				iVar2 = 0;
				if (GAMEPLAY::IS_BIT_SET(Global_1839591.f_61, true))
				{
					iVar2 = 1;
				}
				else if (GAMEPLAY::IS_BIT_SET(Global_1839591.f_61, 2))
				{
					iVar2 = 2;
				}
				else if (GAMEPLAY::IS_BIT_SET(Global_1839591.f_61, 3))
				{
					iVar2 = 3;
				}
				Global_1835390.f_2704[iVar2 - 1]++;
				*(uParam0[iVar0 /*100*/]).f_75 = iVar2;
				if (*(uParam0[iVar0 /*100*/]).f_59 != -1)
				{
					if (GAMEPLAY::IS_BIT_SET(Global_1839591.f_61, false))
					{
						*(uParam0[iVar0 /*100*/]).f_74 = 1;
					}
					else
					{
						*(uParam0[iVar0 /*100*/]).f_74 = 0;
					}
					if (func_470(uParam0[iVar0 /*100*/].f_32, &Var3))
					{
						Global_1835390.f_2775[iVar2 - 1] = 0;
					}
				}
				iVar1 = false;
				while (iVar1 < Global_1839591.f_62)
				{
					if (GAMEPLAY::IS_BIT_SET(Global_1839591.f_63, iVar1))
					{
						*(uParam0[iVar0 /*100*/].f_67)[iVar1] = Global_1839591.f_97[iVar1];
					}
					else
					{
						*(uParam0[iVar0 /*100*/].f_60)[iVar1] = Global_1839591.f_64[iVar1];
					}
					iVar1++;
				}
			}
			iVar0++;
		}
	}
}

void func_474(auto uParam0)
{
	struct<13> Var0;
	int iVar13;
	
	*uParam0 = 0;
	StringCopy(uParam0.f_1, "", 64);
	StringCopy(uParam0.f_17, "", 64);
	*uParam0.f_33 = {Var0};
	*uParam0.f_46 = {Var0};
	*uParam0.f_59 = 0;
	*uParam0.f_60 = 0;
	*uParam0.f_61 = 0;
	*uParam0.f_62 = 0;
	*uParam0.f_63 = 0;
	iVar13 = 0;
	while (iVar13 < 32)
	{
		*uParam0.f_64[iVar13] = 0f;
		*uParam0.f_97[iVar13] = 0;
		iVar13++;
	}
}

bool func_475(auto uParam0, int iParam1, auto uParam2, int iParam3)
{
	int iVar0;
	
	if (*uParam2 == 0)
	{
		if (Global_1835390[iParam3 /*901*/][0 /*75*/].f_59 > 0)
		{
			*(uParam0[iParam1 /*100*/]) = {Global_1835390[iParam3 /*901*/][0 /*75*/]};
			Global_1839534[iParam3 /*16*/] = {Global_1835390[iParam3 /*901*/][0 /*75*/]};
			Global_1839534.f_49[iParam3] = Global_1835390[iParam3 /*901*/][0 /*75*/].f_67[Global_1835390.f_2779];
			Global_1839534.f_53[iParam3] = Global_1835390[iParam3 /*901*/][0 /*75*/].f_60[Global_1835390.f_2779];
			*uParam2++;
			return true;
		}
	}
	else if (*uParam2 == 1)
	{
		if (Global_1835390.f_2775[iParam3] > 0)
		{
			*(uParam0[iParam1 /*100*/]) = {Global_1835390[iParam3 /*901*/][Global_1835390.f_2775[iParam3] /*75*/]};
			*uParam2++;
			return true;
		}
		else
		{
			if (Global_1835390.f_2775[iParam3] < 0)
			{
				StringCopy(uParam0[iParam1 /*100*/], get_player_name(player_id()), 64);
				*(uParam0[iParam1 /*100*/].f_32) = {func_434(player_id())};
				*(uParam0[iParam1 /*100*/]).f_59 = -1;
				*(uParam0[iParam1 /*100*/].f_67)[0] = -1;
				*(uParam0[iParam1 /*100*/].f_67)[1] = -1;
				*(uParam0[iParam1 /*100*/].f_67)[2] = -1;
				*(uParam0[iParam1 /*100*/].f_67)[3] = -1;
				*(uParam0[iParam1 /*100*/].f_60)[0] = -1f;
				*(uParam0[iParam1 /*100*/].f_60)[1] = -1f;
				*(uParam0[iParam1 /*100*/].f_60)[2] = -1f;
				*(uParam0[iParam1 /*100*/].f_60)[3] = -1f;
				*uParam2++;
				return true;
			}
			*uParam2++;
		}
	}
	else if (*uParam2 % 2 == 0)
	{
		iVar0 = *uParam2 / 2;
		if (Global_1835390.f_2775[iParam3] - iVar0 >= 1)
		{
			if (Global_1835390[iParam3 /*901*/][Global_1835390.f_2775[iParam3] - iVar0 /*75*/].f_59 > 0)
			{
				*(uParam0[iParam1 /*100*/]) = {Global_1835390[iParam3 /*901*/][Global_1835390.f_2775[iParam3] - iVar0 /*75*/]};
				*uParam2++;
				return true;
			}
		}
	}
	else
	{
		iVar0 = floor(to_float(*uParam2 / 2));
		if (Global_1835390.f_2775[iParam3] + iVar0 < 12 && Global_1835390.f_2775[iParam3] + iVar0 > 0)
		{
			if (Global_1835390[iParam3 /*901*/][Global_1835390.f_2775[iParam3] + iVar0 /*75*/].f_59 > 1)
			{
				*(uParam0[iParam1 /*100*/]) = {Global_1835390[iParam3 /*901*/][Global_1835390.f_2775[iParam3] + iVar0 /*75*/]};
				*uParam2++;
				return true;
			}
		}
	}
	*uParam2++;
	return false;
}

void func_476(int iParam0, int iParam1, int iParam2, char* sParam3)
{
	GAMEPLAY::SET_BIT(&iParam2, 7);
	_push_scaleform_movie_function(iParam0, "SET_SLOT");
	_push_scaleform_movie_function_parameter_int(iParam1);
	_push_scaleform_movie_function_parameter_int(iParam2);
	_begin_text_component(sParam3);
	_0xAE4E8157D9ECF087();
	_pop_scaleform_movie_function_void();
}

bool func_477(auto uParam0)
{
	if (!Global_1835388)
	{
		if (!func_445(&(Global_1835390.f_2827)))
		{
			func_424(&(Global_1835390.f_2827), 1, 0);
			return false;
		}
		else if (!func_423(&(Global_1835390.f_2827), 1000, 1))
		{
			return false;
		}
	}
	if (((!_network_are_ros_available() || !is_player_online()) || (!network_have_online_privileges() && _0x1353F87E89946207())) || Global_1835390.f_2832 != 0)
	{
		GAMEPLAY::CLEAR_BIT(uParam0.f_42, 4);
		return true;
	}
	if (!GAMEPLAY::IS_BIT_SET(*uParam0.f_42, 4))
	{
		func_504(uParam0);
		GAMEPLAY::SET_BIT(uParam0.f_42, 4);
		return false;
	}
	else if (GAMEPLAY::IS_BIT_SET(*uParam0.f_42, 5))
	{
		*uParam0[0] = 2;
		*uParam0[1] = 1;
		*uParam0[2] = 3;
		return true;
	}
	if (!func_502(uParam0))
	{
		return false;
	}
	if (!func_500(uParam0))
	{
		return false;
	}
	if (!func_493(uParam0))
	{
		return false;
	}
	if (!GAMEPLAY::IS_BIT_SET(*uParam0.f_42, 6))
	{
		func_348(&Global_1839721);
		func_472(uParam0, &Global_1839721);
		func_471(uParam0, &Global_1839721);
		GAMEPLAY::SET_BIT(uParam0.f_42, 6);
	}
	if (!GAMEPLAY::IS_BIT_SET(*uParam0.f_42, 7))
	{
		if (!func_445(&(Global_1835390.f_2830)))
		{
			func_424(&(Global_1835390.f_2830), 1, 0);
		}
		else if (func_423(&(Global_1835390.f_2830), 30000, 1))
		{
			GAMEPLAY::SET_BIT(uParam0.f_42, 7);
		}
		if (func_490(&Global_1839721))
		{
		}
		else
		{
			return false;
		}
		if (func_487(&Global_1839721))
		{
		}
		else
		{
			return false;
		}
		if (func_481(&Global_1839721))
		{
			func_478(&Global_1839721);
			GAMEPLAY::SET_BIT(uParam0.f_42, 7);
			func_478(&Global_1839721);
		}
		else
		{
			return false;
		}
	}
	return true;
}

void func_478(auto uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = func_480(Global_1835390.f_2826);
	if (Global_1838575.f_81[iVar2] != 0)
	{
		func_479(-1, iVar2);
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		func_474(&Global_1839591);
		if (*(uParam0[iVar0 /*100*/]).f_75 != 0)
		{
			Global_1839591 = Global_1835390.f_2826;
			Global_1839591.f_1 = {*(uParam0[iVar0 /*100*/])};
			if (are_strings_equal(uParam0[iVar0 /*100*/].f_16, ""))
			{
				Global_1839591.f_17 = {*(uParam0[iVar0 /*100*/])};
			}
			else
			{
				Global_1839591.f_17 = {*(uParam0[iVar0 /*100*/].f_16)};
			}
			Global_1839591.f_33 = {*(uParam0[iVar0 /*100*/].f_32)};
			if (func_429(*(uParam0[iVar0 /*100*/].f_45)))
			{
				Global_1839591.f_46 = {*(uParam0[iVar0 /*100*/].f_45)};
			}
			else
			{
				Global_1839591.f_46 = {*(uParam0[iVar0 /*100*/].f_32)};
			}
			Global_1839591.f_59 = *(uParam0[iVar0 /*100*/]).f_58;
			Global_1839591.f_60 = *(uParam0[iVar0 /*100*/]).f_59;
			Global_1839591.f_62 = Global_1835390.f_2708;
			Global_1839591.f_63 = Global_1835390.f_2770;
			if (*(uParam0[iVar0 /*100*/]).f_74)
			{
				GAMEPLAY::SET_BIT(&(Global_1839591.f_61), false);
			}
			else
			{
				GAMEPLAY::CLEAR_BIT(&(Global_1839591.f_61), false);
			}
			GAMEPLAY::SET_BIT(&(Global_1839591.f_61), *(uParam0[iVar0 /*100*/]).f_75);
			iVar1 = false;
			while (iVar1 < Global_1839591.f_62)
			{
				if (GAMEPLAY::IS_BIT_SET(Global_1839591.f_63, iVar1))
				{
					Global_1839591.f_97[iVar1] = *(uParam0[iVar0 /*100*/].f_67)[iVar1];
				}
				else
				{
					Global_1839591.f_64[iVar1] = *(uParam0[iVar0 /*100*/].f_60)[iVar1];
				}
				iVar1++;
			}
			Global_1838575.f_81[iVar2] = Global_1835390.f_2826;
			leaderboards_cache_data_row(&Global_1839591);
		}
		iVar0++;
	}
	Global_1838575.f_87[iVar2 /*3*/] = {func_209(player_id())};
}

void func_479(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 != -1)
	{
		if (leaderboards_get_cache_exists(Global_1838575.f_81[iParam1]))
		{
			_0x8EC74CEB042E7CFF(Global_1838575.f_81[iParam1]);
		}
		Global_1838575.f_81[iParam1] = 0;
	}
	else if (iParam0 != -1)
	{
		if (leaderboards_get_cache_exists(iParam0))
		{
			_0x8EC74CEB042E7CFF(iParam0);
		}
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (Global_1838575.f_81[iVar0] == iParam0)
			{
				Global_1838575.f_81[iVar0] = 0;
			}
			iVar0++;
		}
	}
}

int func_480(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_1838575.f_81[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_1838575.f_81[iVar0] == 0)
		{
			return iVar0;
		}
		else if (leaderboards_get_cache_exists(Global_1838575.f_81[iVar0]))
		{
			iVar3 = leaderboards_get_cache_time(Global_1838575.f_81[iVar0]);
			if (iVar3 > iVar2)
			{
				iVar1 = iVar0;
				iVar2 = iVar3;
			}
		}
		else
		{
			return iVar0;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_481(auto uParam0)
{
	int iVar0;
	int iVar1;
	
	switch (*(uParam0[0 /*100*/]).f_76)
	{
		case 0:
			func_485(uParam0);
			if (is_orbis_version() && !_0x72D918C99BCACC54(0))
			{
				*(uParam0[0 /*100*/]).f_76 = 3;
				return false;
			}
			iVar0 = 0;
			while (iVar0 < 12)
			{
				if (func_429(*(uParam0[iVar0 /*100*/].f_32)))
				{
					if (!func_484(uParam0[iVar0 /*100*/].f_32, &Global_1841018))
					{
						Global_1841018[Global_1841018.f_206 /*13*/] = {*(uParam0[iVar0 /*100*/].f_32)};
						Global_1841018.f_206++;
					}
				}
				iVar0++;
			}
			if (Global_1841018.f_206 > 0)
			{
				*(uParam0[0 /*100*/]).f_76 = 1;
			}
			else
			{
				*(uParam0[0 /*100*/]).f_76 = 3;
			}
			break;
		
		case 1:
			if (func_482(uParam0[1 /*100*/].f_76, &(Global_1841018.f_206), &Global_1841018, &(Global_1841018.f_157)))
			{
				*(uParam0[0 /*100*/]).f_76 = 2;
			}
			break;
		
		case 2:
			if (Global_1841018.f_206 > 12)
			{
				Global_1841018.f_206 = 12;
			}
			iVar0 = 0;
			while (iVar0 < 12)
			{
				iVar1 = 0;
				while (iVar1 < Global_1841018.f_206)
				{
					if (func_429(*(uParam0[iVar0 /*100*/].f_32)) && func_429(Global_1841018[iVar1 /*13*/]))
					{
						if (network_are_handles_the_same(uParam0[iVar0 /*100*/].f_32, &(Global_1841018[iVar1 /*13*/])))
						{
							*(uParam0[iVar0 /*100*/].f_80) = {Global_1841018.f_157[iVar1 /*4*/]};
						}
					}
					iVar1++;
				}
				iVar0++;
			}
			*(uParam0[0 /*100*/]).f_76 = 3;
			break;
		
		case 3:
			return true;
			break;
	}
	return false;
}

bool func_482(auto uParam0, auto uParam1, auto uParam2, auto uParam3)
{
	auto uVar0;
	int iVar35;
	
	switch (*uParam0)
	{
		case 0:
			if (_0xB5074DB804E28CE7())
			{
			}
			else
			{
				_0x9AA46BADAD0E27ED();
				network_get_primary_clan_data_start(uParam2, *uParam1);
				*uParam0 = 1;
			}
			break;
		
		case 1:
			if (!_0xB5074DB804E28CE7())
			{
				if (_0x5B4F04F19376A0BA())
				{
					*uParam0 = 2;
				}
				else
				{
					*uParam0 = 3;
				}
			}
			break;
		
		case 2:
			iVar35 = 0;
			while (iVar35 < *uParam1)
			{
				if (network_get_primary_clan_data_new(uParam2[iVar35 /*13*/], &uVar0))
				{
					func_483(&uVar0, uParam3[iVar35 /*4*/]);
				}
				iVar35++;
			}
			if (_0xB5074DB804E28CE7())
			{
				_0x042E4B70B93E6054();
			}
			else
			{
				_0x9AA46BADAD0E27ED();
			}
			*uParam0 = 3;
			break;
		
		case 3:
			return true;
			break;
	}
	return false;
}

void func_483(auto uParam0, char* sParam1)
{
	_0xF45352426FF3A4F0(uParam0, 35, sParam1);
}

bool func_484(auto uParam0, auto uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (func_429(*(uParam1[iVar0 /*13*/])))
		{
			if (network_are_handles_the_same(uParam0, uParam1[iVar0 /*13*/]))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_485(auto uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		func_486(&(Global_1841018[iVar0 /*13*/]));
		StringCopy(&(Global_1841018.f_157[iVar0 /*4*/]), "", 16);
		iVar0++;
	}
	if (*(uParam0[0 /*100*/]).f_76 > 0)
	{
		*(uParam0[0 /*100*/]).f_76 = 0;
		*(uParam0[1 /*100*/]).f_76 = 0;
		if (!_0xB5074DB804E28CE7())
		{
			_0x9AA46BADAD0E27ED();
		}
	}
	if (_0xB5074DB804E28CE7())
	{
		_0x042E4B70B93E6054();
	}
	Global_1841018.f_206 = 0;
}

void func_486(auto uParam0)
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

bool func_487(auto uParam0)
{
	int iVar0;
	
	if (GAMEPLAY::IS_PC_VERSION())
	{
		return true;
	}
	else if (is_durango_version())
	{
		if (!func_489(uParam0))
		{
			return false;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_488(uParam0[iVar0 /*100*/].f_78, uParam0[iVar0 /*100*/].f_32, uParam0[iVar0 /*100*/]))
			{
				return false;
			}
			iVar0++;
		}
	}
	return true;
}

bool func_488(auto uParam0, auto uParam1, char* sParam2)
{
	if (*uParam0 == 2)
	{
		return true;
	}
	switch (*uParam0)
	{
		case 0:
			if (func_429(*uParam1))
			{
				if (!network_is_gamer_in_my_session(uParam1))
				{
					if (is_durango_version())
					{
						if (network_gamertag_from_handle_start(uParam1))
						{
							*uParam0 = 1;
						}
					}
					else if (is_xbox360_version())
					{
						if (network_gamertag_from_handle_start(uParam1))
						{
							*uParam0 = 1;
						}
					}
					else
					{
						StringCopy(sParam2, network_get_gamertag_from_handle(uParam1), 64);
						if (is_ps3_version())
						{
						}
						else if (is_orbis_version())
						{
						}
						else if (GAMEPLAY::IS_PC_VERSION())
						{
						}
						*uParam0 = 2;
					}
				}
				else
				{
					StringCopy(sParam2, get_player_name(network_get_player_from_gamer_handle(uParam1)), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 1:
			if (!network_is_gamer_in_my_session(uParam1))
			{
				if (!network_gamertag_from_handle_pending())
				{
					if (network_gamertag_from_handle_succeeded())
					{
						StringCopy(sParam2, network_get_gamertag_from_handle(uParam1), 64);
					}
					*uParam0 = 2;
					return true;
				}
			}
			else
			{
				StringCopy(sParam2, get_player_name(network_get_player_from_gamer_handle(uParam1)), 64);
				*uParam0 = 2;
			}
			break;
		
		case 2:
			return true;
			break;
	}
	return false;
}

bool func_489(auto uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!is_durango_version())
	{
		return true;
	}
	if (*(uParam0[0 /*100*/]).f_78 == 2)
	{
		return true;
	}
	switch (*(uParam0[0 /*100*/]).f_78)
	{
		case 0:
			Global_1835390.f_3183 = 0;
			iVar1 = 0;
			while (iVar1 < 12)
			{
				StringCopy(&(Global_1835390.f_2833[iVar1 /*16*/]), "", 64);
				func_486(&(Global_1835390.f_3026[iVar1 /*13*/]));
				if (func_429(*(uParam0[iVar1 /*100*/].f_32)))
				{
					Global_1835390.f_3026[Global_1835390.f_3183 /*13*/] = {*(uParam0[iVar1 /*100*/].f_32)};
					Global_1835390.f_3183++;
				}
				iVar1++;
			}
			if (Global_1835390.f_3183 > 0)
			{
				*(uParam0[0 /*100*/]).f_79 = _0xD66C9E72B3CC4982(&(Global_1835390.f_3026), Global_1835390.f_3183);
				*(uParam0[0 /*100*/]).f_78 = 1;
			}
			else
			{
				*(uParam0[0 /*100*/]).f_78 = 2;
			}
			break;
		
		case 1:
			iVar0 = _0x58CC181719256197(*(uParam0[0 /*100*/]).f_79, &(Global_1835390.f_2833), Global_1835390.f_3183);
			if (iVar0 == 0)
			{
				iVar1 = 0;
				while (iVar1 < 12)
				{
					if (func_429(*(uParam0[iVar1 /*100*/].f_32)))
					{
						*(uParam0[iVar1 /*100*/]) = {Global_1835390.f_2833[iVar2 /*16*/]};
						iVar2++;
					}
					iVar1++;
				}
				*(uParam0[0 /*100*/]).f_78 = 2;
			}
			else if (iVar0 == -1)
			{
				*(uParam0[0 /*100*/]).f_78 = 2;
			}
			else
			{
				return false;
			}
			break;
		
		case 2:
			*(uParam0[0 /*100*/]).f_79 = -1;
			return true;
			break;
	}
	return false;
}

bool func_490(auto uParam0)
{
	int iVar0;
	
	if (is_durango_version())
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_492(uParam0[iVar0 /*100*/].f_77, uParam0[iVar0 /*100*/].f_16, uParam0[iVar0 /*100*/].f_84, &(Global_1835390.f_2833), uParam0[iVar0 /*100*/].f_79))
			{
				return false;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_491(uParam0[iVar0 /*100*/].f_77, *(uParam0[iVar0 /*100*/].f_16), uParam0[iVar0 /*100*/].f_84))
			{
				return false;
			}
			iVar0++;
		}
	}
	return true;
}

bool func_491(auto uParam0, auto uParam1, auto uParam2, auto uParam3, auto uParam4, auto uParam5, auto uParam6, auto uParam7, auto uParam8, auto uParam9, auto uParam10, auto uParam11, auto uParam12, auto uParam13, auto uParam14, auto uParam15, auto uParam16, char* sParam17)
{
	struct<13> Var0;
	
	if (*uParam0 == 2)
	{
		return true;
	}
	else if (is_string_null_or_empty(&uParam1))
	{
		*uParam0 = 2;
		return true;
	}
	network_handle_from_user_id(&uParam1, &Var0, 13);
	switch (*uParam0)
	{
		case 0:
			if (func_429(Var0))
			{
				if (!network_is_gamer_in_my_session(&Var0))
				{
					if (is_xbox360_version() || is_durango_version())
					{
						if (network_gamertag_from_handle_start(&Var0))
						{
							*uParam0 = 1;
						}
					}
					else
					{
						StringCopy(sParam17, network_get_gamertag_from_handle(&Var0), 64);
						if (is_ps3_version())
						{
						}
						else if (is_orbis_version())
						{
						}
						else if (GAMEPLAY::IS_PC_VERSION())
						{
						}
						*uParam0 = 2;
					}
				}
				else
				{
					StringCopy(sParam17, get_player_name(network_get_player_from_gamer_handle(&Var0)), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 1:
			if (!network_is_gamer_in_my_session(&Var0))
			{
				if (!network_gamertag_from_handle_pending())
				{
					if (network_gamertag_from_handle_succeeded())
					{
						StringCopy(sParam17, network_get_gamertag_from_handle(&Var0), 64);
					}
					*uParam0 = 2;
					return true;
				}
			}
			else
			{
				StringCopy(sParam17, get_player_name(network_get_player_from_gamer_handle(&Var0)), 64);
				*uParam0 = 2;
			}
			break;
		
		case 2:
			return true;
			break;
	}
	return false;
}

bool func_492(auto uParam0, char* sParam1, char* sParam2, auto uParam3, auto uParam4)
{
	int iVar0;
	struct<13>[] Var1 = new struct<13>[1];
	
	if (!is_durango_version())
	{
		return true;
	}
	if (*uParam0 == 2)
	{
		return true;
	}
	else if (is_string_null_or_empty(sParam1))
	{
		*uParam0 = 2;
		return true;
	}
	network_handle_from_user_id(sParam1, &(Var1[0 /*13*/]), 13);
	switch (*uParam0)
	{
		case 0:
			StringCopy(uParam3[0 /*16*/], "", 64);
			if (func_429(Var1[0 /*13*/]))
			{
				if (!network_is_gamer_in_my_session(&(Var1[0 /*13*/])))
				{
					*uParam4 = _0xD66C9E72B3CC4982(&Var1, 1);
					*uParam0 = 1;
				}
				else
				{
					StringCopy(sParam2, get_player_name(network_get_player_from_gamer_handle(&(Var1[0 /*13*/]))), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 1:
			iVar0 = _0x58CC181719256197(*uParam4, uParam3, 1);
			if (iVar0 == 0)
			{
				*sParam2 = {*(uParam3[0 /*16*/])};
				*uParam0 = 2;
			}
			else if (iVar0 == -1)
			{
				*uParam0 = 2;
			}
			else
			{
				return false;
			}
			break;
		
		case 2:
			*uParam4 = -1;
			return true;
			break;
	}
	return false;
}

bool func_493(auto uParam0)
{
	struct<97> Var0;
	struct<6> Var98;
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
	struct<13> Var116;
	
	Var0.f_19.f_1 = 4;
	iVar109 = -1;
	iVar113 = 2;
	Var116 = {func_434(player_id())};
	switch (*uParam0[iVar113])
	{
		case 0:
			Global_1835390.f_2775[iVar113] = -1;
			Global_1835390.f_2704[iVar113] = 0;
			Global_1835013.f_374 = -1;
			if (_network_player_is_in_clan())
			{
				if (network_clan_player_is_active(&Var116))
				{
					if (network_clan_player_get_desc(uParam0.f_7, 35, &Var116))
					{
						*uParam0.f_44.f_2 = *uParam0.f_7;
						*uParam0.f_44.f_1 = 3;
						*uParam0[iVar113] = 1;
						return false;
					}
				}
				else
				{
					*uParam0[iVar113] = 3;
					return true;
				}
			}
			else
			{
				*uParam0[iVar113] = 3;
				return true;
			}
			break;
		
		case 1:
			*uParam0.f_44.f_1 = 3;
			Var98 = *uParam0.f_44;
			Var98.f_1 = *uParam0.f_44.f_1;
			if (func_414(uParam0.f_4, uParam0.f_5, uParam0.f_44, 11, &Var116, func_499(), 0, 0, 0))
			{
				func_432(&Var98, uParam0.f_44);
				if (*uParam0.f_5 && _0xA0F93D5465B3094D(&Var98))
				{
					if (Var98.f_3 > 0)
					{
						iVar111 = 0;
						iVar106 = 0;
						if (func_499())
						{
							iVar111 = 0;
							while (iVar111 < Var98.f_3)
							{
								_0x34770B9CE0E03B91(iVar111, &Var0);
								if (Global_1835013.f_374 < 0)
								{
									if (func_470(&Var0, &Var116) || func_470(&Var0, &(Global_1835013.f_361)))
									{
										Global_1835013.f_374 = Var0.f_96;
									}
								}
								if (iVar109 < 0)
								{
									if (GAMEPLAY::IS_BIT_SET(Global_1835013.f_142.f_2, false))
									{
										if (Global_1835013.f_211.f_36[0] >= _0x88578F6EC36B4A3A(iVar111, false))
										{
											iVar109 = iVar111;
										}
									}
									else if (Global_1835013.f_211.f_3[0] >= _0x38491439B6BA7F7D(iVar111, false))
									{
										iVar109 = iVar111;
									}
								}
								func_498(&Var0);
								iVar111++;
							}
							if (iVar109 < 0)
							{
								iVar109 = Var98.f_3;
							}
						}
						iVar111 = 0;
						_0x34770B9CE0E03B91(0, &Var0);
						if (Var0.f_96 <= 1)
						{
							if (Global_1835390.f_2704[iVar113] < 12)
							{
								if (func_499() && iVar109 == 0)
								{
									func_497(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), Var0.f_96);
									Global_1835390.f_2775[iVar113] = 0;
									Global_1835390.f_2704[iVar113]++;
								}
								if (func_499() && (func_470(&Var0, &Var116) || func_470(&Var0, &(Global_1835013.f_361))))
								{
								}
								else
								{
									if (func_470(&Var0, &Var116))
									{
										iVar109 = 0;
										Global_1835390.f_2775[iVar113] = 0;
									}
									MemCopy(&(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), {Var0.f_13}, 16);
									Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_32 = {Var0};
									Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_59 = Var0.f_96;
									if (func_496(*uParam0.f_44))
									{
										iVar108 = _0x88578F6EC36B4A3A(0, Global_1835390.f_2709);
										if (iVar108 == 1)
										{
											Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_58 = 1;
										}
										else
										{
											Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_58 = 0;
										}
									}
									if (func_435(*uParam0.f_44))
									{
										MemCopy(&(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_74 = 1;
									iVar107 = 0;
									iVar107 = 0;
									while (iVar107 < Global_1835390.f_2708)
									{
										if (GAMEPLAY::IS_BIT_SET(Global_1835390.f_2769, Global_1835390.f_2710[iVar107]))
										{
											Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_67[iVar107] = _0x88578F6EC36B4A3A(0, Global_1835390.f_2710[iVar107]);
										}
										else
										{
											Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_60[iVar107] = _0x38491439B6BA7F7D(0, Global_1835390.f_2710[iVar107]);
										}
										iVar107++;
									}
									Global_1835390.f_2704[iVar113]++;
								}
								iVar112 = true;
							}
						}
						if (!iVar112)
						{
							Global_1835390.f_2704[iVar113]++;
						}
						if (!func_499())
						{
							iVar109 = Var98.f_5;
						}
						if (iVar109 > 6)
						{
							iVar110 = iVar109 - 6;
						}
						else if (iVar112)
						{
							iVar110 = 1;
						}
						else
						{
							iVar110 = 0;
						}
						iVar111 = iVar110;
						func_498(&Var0);
						iVar111 = iVar110;
						while (iVar111 <= Var98.f_3 - 1)
						{
							_0x34770B9CE0E03B91(iVar111, &Var0);
							if (Global_1835390.f_2704[iVar113] < 12 && Var0.f_96 > 1)
							{
								if (func_499() && iVar109 == iVar111)
								{
									if (!func_470(&(Global_1835390[iVar113 /*901*/][0 /*75*/].f_32), &Var116))
									{
										func_497(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), Var0.f_96);
										Global_1835390.f_2775[iVar113] = Global_1835390.f_2704[iVar113];
										Global_1835390.f_2704[iVar113]++;
									}
								}
								if (func_499() && (func_470(&Var0, &Var116) || func_470(&Var0, &(Global_1835013.f_361))))
								{
								}
								else if (Global_1835390.f_2704[iVar113] < 12)
								{
									if (func_429(Var0) && !func_470(&Var0, &(Global_1835390[iVar113 /*901*/][0 /*75*/].f_32)))
									{
										if (func_470(&Var0, &Var116))
										{
											if (Global_1835390.f_2775[iVar113] < 0)
											{
												Global_1835390.f_2775[iVar113] = Global_1835390.f_2704[iVar113];
											}
										}
										MemCopy(&(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), {Var0.f_13}, 16);
										Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_32 = {Var0};
										Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_59 = Var0.f_96;
										Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_74 = 1;
										if (func_496(*uParam0.f_44))
										{
											iVar108 = _0x88578F6EC36B4A3A(iVar111, Global_1835390.f_2709);
											if (iVar108 == 1)
											{
												Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_58 = 0;
											}
										}
										if (func_435(*uParam0.f_44))
										{
											MemCopy(&(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										iVar106 = 0;
										iVar106 = 0;
										while (iVar106 < Global_1835390.f_2708)
										{
											if (GAMEPLAY::IS_BIT_SET(Global_1835390.f_2769, Global_1835390.f_2710[iVar106]))
											{
												Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_67[iVar106] = _0x88578F6EC36B4A3A(iVar111, Global_1835390.f_2710[iVar106]);
											}
											else
											{
												Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_60[iVar106] = _0x38491439B6BA7F7D(iVar111, Global_1835390.f_2710[iVar106]);
											}
											iVar106++;
										}
										Global_1835390.f_2704[iVar113]++;
									}
								}
							}
							func_498(&Var0);
							iVar111++;
						}
						_0x71B008056E5692D6();
						func_350(uParam0.f_4, uParam0.f_5, uParam0.f_44);
						if (iVar112)
						{
							if (Global_1835390.f_2775[iVar113] == -1 && func_499())
							{
								if (Global_1835390.f_2704[iVar113] >= 1)
								{
									func_497(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] - 1 /*75*/].f_59 + 1);
								}
								else
								{
									func_497(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), 1);
								}
								Global_1835390.f_2775[iVar113] = Global_1835390.f_2704[iVar113];
								Global_1835390.f_2704[iVar113]++;
							}
							*uParam0[iVar113] = 3;
						}
						else
						{
							*uParam0[iVar113] = 2;
						}
					}
					else
					{
						if (!iVar112)
						{
							Global_1835390.f_2704[iVar113]++;
						}
						_0x71B008056E5692D6();
						func_350(uParam0.f_4, uParam0.f_5, uParam0.f_44);
						Global_1835390.f_2775[iVar113] = -1;
						*uParam0[iVar113] = 2;
					}
				}
				else
				{
					func_350(uParam0.f_4, uParam0.f_5, uParam0.f_44);
					Global_1835390.f_2775[iVar113] = -1;
					*uParam0[iVar113] = 2;
					GAMEPLAY::SET_BIT(&(Global_1835390.f_2832), iVar113);
				}
			}
			break;
		
		case 2:
			if (Global_1835390.f_2775[iVar113] == -1)
			{
				iVar115 = 11;
			}
			else
			{
				iVar115 = 1;
			}
			*uParam0.f_44.f_1 = 3;
			Var98 = *uParam0.f_44;
			Var98.f_1 = *uParam0.f_44.f_1;
			if (func_495(uParam0.f_4, uParam0.f_5, uParam0.f_44, 1, iVar115))
			{
				func_432(&Var98, uParam0.f_44);
				if (*uParam0.f_5 && _0xA0F93D5465B3094D(&Var98))
				{
					if (Var98.f_3 > 0)
					{
						iVar106 = 0;
						while (iVar106 < Var98.f_3)
						{
							_0x34770B9CE0E03B91(iVar106, &Var0);
							iVar114 = false;
							if (Global_1835390[iVar113 /*901*/][0 /*75*/].f_59 > 1 || Global_1835390[iVar113 /*901*/][0 /*75*/].f_59 <= 0)
							{
								iVar114 = true;
							}
							if (Global_1835390.f_2704[iVar113] < 12 || iVar114)
							{
								if (func_499() && (func_470(&Var0, &Var116) || func_470(&Var0, &(Global_1835013.f_361))))
								{
								}
								else if (iVar106 == 0 || iVar114)
								{
									MemCopy(&(Global_1835390[iVar113 /*901*/][0 /*75*/]), {Var0.f_13}, 16);
									Global_1835390[iVar113 /*901*/][0 /*75*/].f_32 = {Var0};
									Global_1835390[iVar113 /*901*/][0 /*75*/].f_59 = Var0.f_96;
									if (func_496(*uParam0.f_44))
									{
										iVar108 = _0x88578F6EC36B4A3A(0, Global_1835390.f_2709);
										if (iVar108 == 1)
										{
											Global_1835390[iVar113 /*901*/][0 /*75*/].f_58 = 1;
										}
										else
										{
											Global_1835390[iVar113 /*901*/][0 /*75*/].f_58 = 0;
										}
									}
									if (func_435(*uParam0.f_44))
									{
										MemCopy(&(Global_1835390[iVar113 /*901*/][0 /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1835390[iVar113 /*901*/][0 /*75*/].f_74 = 1;
									iVar107 = 0;
									iVar107 = 0;
									while (iVar107 < Global_1835390.f_2708)
									{
										if (GAMEPLAY::IS_BIT_SET(Global_1835390.f_2769, Global_1835390.f_2710[iVar107]))
										{
											Global_1835390[iVar113 /*901*/][0 /*75*/].f_67[iVar107] = _0x88578F6EC36B4A3A(0, Global_1835390.f_2710[iVar107]);
										}
										else
										{
											Global_1835390[iVar113 /*901*/][0 /*75*/].f_60[iVar107] = _0x38491439B6BA7F7D(0, Global_1835390.f_2710[iVar107]);
										}
										iVar107++;
									}
									if (Global_1835390.f_2704[iVar113] == 0)
									{
										if (iVar114)
										{
										}
										else
										{
											Global_1835390.f_2704[iVar113]++;
										}
									}
								}
								else if (Global_1835390.f_2704[iVar113] < 12)
								{
									MemCopy(&(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), {Var0.f_13}, 16);
									Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_32 = {Var0};
									if (func_496(*uParam0.f_44))
									{
										iVar108 = _0x88578F6EC36B4A3A(iVar106, Global_1835390.f_2709);
										if (iVar108 == 1)
										{
											Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_58 = 1;
										}
										else
										{
											Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_58 = 0;
										}
									}
									if (func_435(*uParam0.f_44))
									{
										MemCopy(&(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_59 = Var0.f_96;
									Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_74 = 1;
									iVar107 = 0;
									iVar107 = 0;
									while (iVar107 < Global_1835390.f_2708)
									{
										if (GAMEPLAY::IS_BIT_SET(Global_1835390.f_2769, Global_1835390.f_2710[iVar107]))
										{
											Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_67[iVar107] = _0x88578F6EC36B4A3A(iVar106, Global_1835390.f_2710[iVar107]);
										}
										else
										{
											Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_60[iVar107] = _0x38491439B6BA7F7D(iVar106, Global_1835390.f_2710[iVar107]);
										}
										iVar107++;
									}
									if (iVar106 != 0)
									{
										Global_1835390.f_2704[iVar113]++;
									}
								}
							}
							func_498(&Var0);
							iVar106++;
						}
					}
					_0x71B008056E5692D6();
					func_350(uParam0.f_4, uParam0.f_5, uParam0.f_44);
					*uParam0[iVar113] = 3;
				}
				else
				{
					_0x71B008056E5692D6();
					func_350(uParam0.f_4, uParam0.f_5, uParam0.f_44);
					GAMEPLAY::SET_BIT(&(Global_1835390.f_2832), iVar113);
					Global_1835390.f_2704[iVar113] = 0;
					*uParam0[iVar113] = 3;
				}
				if (Global_1835390.f_2775[iVar113] == -1 && func_499())
				{
					if (Global_1835390.f_2704[iVar113] >= 1)
					{
						func_497(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] - 1 /*75*/].f_59 + 1);
					}
					else
					{
						func_497(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), 1);
					}
					Global_1835390.f_2775[iVar113] = Global_1835390.f_2704[iVar113];
					Global_1835390.f_2704[iVar113]++;
				}
			}
			break;
		
		case 3:
			func_494(iVar113, Global_1835013.f_374);
			*uParam0[iVar113] = 4;
			break;
		
		case 4:
			return true;
			break;
	}
	return false;
}

void func_494(int iParam0, int iParam1)
{
	int iVar0;
	
	if ((func_499() && Global_1835390.f_2704[iParam0] > Global_1835390.f_2775[iParam0]) && Global_1835390.f_2775[iParam0] >= 0)
	{
		if (iParam1 != Global_1835390[iParam0 /*901*/][Global_1835390.f_2775[iParam0] /*75*/].f_59)
		{
			iVar0 = 0;
			while (iVar0 < Global_1835390.f_2704[iParam0])
			{
				if (iVar0 != Global_1835390.f_2775[iParam0])
				{
					if (Global_1835390[iParam0 /*901*/][iVar0 /*75*/].f_59 >= Global_1835390[iParam0 /*901*/][Global_1835390.f_2775[iParam0] /*75*/].f_59)
					{
						if (Global_1835390[iParam0 /*901*/][iVar0 /*75*/].f_59 < iParam1 || iParam1 == -1)
						{
							Global_1835390[iParam0 /*901*/][iVar0 /*75*/].f_59++;
						}
					}
				}
				iVar0++;
			}
		}
	}
	else
	{
		if (!func_499())
		{
		}
		if (Global_1835390.f_2704[iParam0] <= Global_1835390.f_2775[iParam0])
		{
		}
		if (Global_1835390.f_2775[iParam0] < 0)
		{
		}
	}
}

bool func_495(auto uParam0, auto uParam1, auto uParam2, int iParam3, int iParam4)
{
	switch (*uParam0)
	{
		case 0:
			if (!func_421() && !func_417())
			{
				func_415(*uParam2);
				if (leaderboards2_read_by_rank(uParam2, iParam3, iParam4))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		
		case 1:
			if (!leaderboards_read_pending(*uParam2, *uParam2.f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (leaderboards_read_successful(*uParam2, *uParam2.f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		
		case 3:
			return true;
			break;
	}
	return false;
}

bool func_496(int iParam0)
{
	if ((((((iParam0 == 815 || iParam0 == 824) || iParam0 == 825) || iParam0 == 826) || iParam0 == 827) || iParam0 == 828) || iParam0 == 849)
	{
		return true;
	}
	return false;
}

void func_497(auto uParam0, char* sParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_435(*uParam0.f_44))
	{
		MemCopy(sParam1, {Global_1835013.f_355}, 16);
		*sParam1.f_32 = {Global_1835013.f_361};
		MemCopy(sParam1.f_16, {Global_1835013.f_349}, 16);
	}
	else
	{
		StringCopy(sParam1, get_player_name(player_id()), 64);
		*sParam1.f_32 = {func_434(player_id())};
	}
	*sParam1.f_59 = iParam2;
	if (func_496(*uParam0.f_44))
	{
		iVar0 = Global_1835013.f_211.f_36[Global_1835390.f_2709];
		if (iVar0 == 1)
		{
			*sParam1.f_58 = 1;
		}
		else
		{
			*sParam1.f_58 = 0;
		}
	}
	*sParam1.f_74 = 1;
	iVar1 = 0;
	while (iVar1 < Global_1835390.f_2708)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_1835013.f_142.f_2, Global_1835390.f_2710[iVar1]))
		{
			*sParam1.f_67[iVar1] = Global_1835013.f_211.f_36[Global_1835390.f_2710[iVar1]];
		}
		else
		{
			*sParam1.f_60[iVar1] = Global_1835013.f_211.f_3[Global_1835390.f_2710[iVar1]];
		}
		iVar1++;
	}
}

void func_498(auto uParam0)
{
	int iVar0;
	
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
	StringCopy(uParam0.f_13, "", 24);
	*uParam0.f_19 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(uParam0.f_19.f_1[iVar0 /*16*/], "", 32);
		StringCopy(uParam0.f_19.f_1[iVar0 /*16*/].f_8, "", 32);
		iVar0++;
	}
	*uParam0.f_85 = 0;
	StringCopy(uParam0.f_86, "", 32);
	StringCopy(uParam0.f_94, "", 8);
	*uParam0.f_96 = 0;
	*uParam0.f_97 = 0;
}

bool func_499()
{
	if (Global_1835388 && Global_1835389)
	{
		return true;
	}
	return false;
}

bool func_500(auto uParam0)
{
	struct<20> Var0;
	struct<6> Var98;
	int iVar106;
	int iVar107;
	int iVar108;
	int iVar109;
	int iVar110;
	int iVar111;
	int iVar112;
	int iVar113;
	struct<13> Var114;
	
	Var0.f_19.f_1 = 4;
	iVar108 = -1;
	iVar113 = true;
	Var114 = {func_434(player_id())};
	switch (*uParam0[1])
	{
		case 0:
			iVar107 = network_get_friend_count();
			Global_1835390.f_2775[1] = -1;
			Global_1835013.f_374 = -1;
			Global_1835390.f_2704[iVar113] = 0;
			if (iVar107 > 0)
			{
				if (func_499())
				{
					iVar112 = 0;
				}
				else
				{
					iVar112 = 1;
				}
				if (func_501(uParam0.f_4, uParam0.f_5, uParam0.f_44, uParam0.f_113, *uParam0.f_113[0 /*66*/], iVar112, 0, 100))
				{
					func_432(&Var98, uParam0.f_44);
					if (*uParam0.f_5 && _0xA0F93D5465B3094D(&Var98))
					{
						if (func_499())
						{
							iVar110 = 0;
							iVar110 = 0;
							while (iVar110 < Var98.f_3)
							{
								if (iVar108 < 0)
								{
									_0x34770B9CE0E03B91(iVar110, &Var0);
									if (func_435(*uParam0.f_44))
									{
										if (Global_1835013.f_374 < 0)
										{
											if (func_470(&Var0, &(Global_1835013.f_361)))
											{
												Global_1835013.f_374 = Var0.f_96;
											}
										}
									}
									if (GAMEPLAY::IS_BIT_SET(Global_1835013.f_142.f_2, false))
									{
										if (Global_1835013.f_211.f_36[0] >= _0x88578F6EC36B4A3A(iVar110, false))
										{
											iVar108 = iVar110;
										}
									}
									else if (Global_1835013.f_211.f_3[0] >= _0x38491439B6BA7F7D(iVar110, false))
									{
										iVar108 = iVar110;
									}
									func_498(&Var0);
								}
								iVar110++;
							}
							if (iVar108 < 0)
							{
								iVar108 = Var98.f_3;
							}
						}
						iVar110 = 0;
						if (func_499() && iVar108 == 0)
						{
							if (Global_1835390.f_2704[iVar113] < 12)
							{
								func_497(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), 1);
								Global_1835390.f_2775[iVar113] = 0;
								Global_1835390.f_2704[iVar113]++;
							}
						}
						if (Var98.f_3 > 0)
						{
							_0x34770B9CE0E03B91(0, &Var0);
							if (func_499() && (func_470(&Var0, &Var114) || func_470(&Var0, &(Global_1835013.f_361))))
							{
							}
							else if (func_429(Var0) && Global_1835390.f_2704[iVar113] < 12)
							{
								if (func_470(&Var0, &Var114))
								{
									iVar108 = 0;
									Global_1835390.f_2775[1] = 0;
								}
								MemCopy(&(Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), {Var0.f_13}, 16);
								Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_32 = {Var0};
								Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_59 = 1;
								if (func_496(*uParam0.f_44))
								{
									iVar111 = _0x88578F6EC36B4A3A(0, Global_1835390.f_2709);
									if (iVar111 == 1)
									{
										Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_58 = 1;
									}
									else
									{
										Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_58 = 0;
									}
								}
								if (func_435(*uParam0.f_44))
								{
									MemCopy(&(Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
								}
								Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_74 = 1;
								iVar106 = 0;
								while (iVar106 < Global_1835390.f_2708)
								{
									if (GAMEPLAY::IS_BIT_SET(Global_1835390.f_2769, Global_1835390.f_2710[iVar106]))
									{
										Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_67[iVar106] = _0x88578F6EC36B4A3A(0, Global_1835390.f_2710[iVar106]);
									}
									else
									{
										Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_60[iVar106] = _0x38491439B6BA7F7D(0, Global_1835390.f_2710[iVar106]);
									}
									iVar106++;
								}
								Global_1835390.f_2704[1]++;
							}
							else
							{
								func_498(&Var0);
								_0x71B008056E5692D6();
								func_350(uParam0.f_4, uParam0.f_5, uParam0.f_44);
								Global_1835390.f_2704[1] = 0;
								*uParam0[1] = 1;
								if (Global_1835390.f_2775[iVar113] == -1 && func_499())
								{
									if (Global_1835390.f_2704[iVar113] >= 1)
									{
										func_497(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] - 1 /*75*/].f_59 + 1);
									}
									else
									{
										func_497(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), 1);
									}
									Global_1835390.f_2775[iVar113] = Global_1835390.f_2704[iVar113];
									Global_1835390.f_2704[iVar113]++;
								}
								return false;
							}
							func_498(&Var0);
						}
						else
						{
							Global_1835390.f_2704[1] = 0;
							func_498(&Var0);
							_0x71B008056E5692D6();
							func_350(uParam0.f_4, uParam0.f_5, uParam0.f_44);
							if (Global_1835390.f_2775[iVar113] == -1 && func_499())
							{
								if (Global_1835390.f_2704[iVar113] >= 1)
								{
									func_497(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] - 1 /*75*/].f_59 + 1);
								}
								else
								{
									func_497(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), 1);
								}
								Global_1835390.f_2775[iVar113] = Global_1835390.f_2704[iVar113];
								Global_1835390.f_2704[iVar113]++;
							}
							*uParam0[1] = 1;
							return false;
						}
						if (!func_499())
						{
							iVar108 = Var98.f_5;
						}
						if (iVar108 > 6)
						{
							iVar109 = iVar108 - 6;
						}
						else
						{
							iVar109 = 1;
						}
						iVar110 = iVar109;
						iVar110 = iVar109;
						while (iVar110 <= Var98.f_3 - 1)
						{
							_0x34770B9CE0E03B91(iVar110, &Var0);
							if (Global_1835390.f_2704[iVar113] < 12 && Var0.f_96 > 1)
							{
								if (func_499() && iVar108 == iVar110)
								{
									if (!func_470(&(Global_1835390[iVar113 /*901*/][0 /*75*/].f_32), &Var114))
									{
										func_497(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), Var0.f_96);
										Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/].f_59 = iVar110 + 1;
										Global_1835390.f_2775[iVar113] = Global_1835390.f_2704[iVar113];
										Global_1835390.f_2704[iVar113]++;
									}
								}
								if (func_499() && (func_470(&Var0, &Var114) || func_470(&Var0, &(Global_1835013.f_361))))
								{
								}
								else if (Global_1835390.f_2704[1] < 12)
								{
									if (func_429(Var0) && !func_470(&Var0, &(Global_1835390[iVar113 /*901*/][0 /*75*/].f_32)))
									{
										if (func_470(&Var0, &Var114))
										{
											if (Global_1835390.f_2775[1] < 0)
											{
												Global_1835390.f_2775[1] = Global_1835390.f_2704[1];
											}
										}
										MemCopy(&(Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/]), {Var0.f_13}, 16);
										Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/].f_32 = {Var0};
										Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/].f_59 = iVar110 + 1;
										Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/].f_74 = 1;
										if (func_496(*uParam0.f_44))
										{
											iVar111 = _0x88578F6EC36B4A3A(iVar110, Global_1835390.f_2709);
											if (iVar111 == 1)
											{
												Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/].f_58 = 0;
											}
										}
										if (func_435(*uParam0.f_44))
										{
											MemCopy(&(Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										iVar106 = 0;
										while (iVar106 < Global_1835390.f_2708)
										{
											if (GAMEPLAY::IS_BIT_SET(Global_1835390.f_2769, Global_1835390.f_2710[iVar106]))
											{
												Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/].f_67[iVar106] = _0x88578F6EC36B4A3A(iVar110, Global_1835390.f_2710[iVar106]);
											}
											else
											{
												Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/].f_60[iVar106] = _0x38491439B6BA7F7D(iVar110, Global_1835390.f_2710[iVar106]);
											}
											iVar106++;
										}
										Global_1835390.f_2704[1]++;
									}
								}
							}
							func_498(&Var0);
							iVar110++;
						}
						_0x71B008056E5692D6();
						func_350(uParam0.f_4, uParam0.f_5, uParam0.f_44);
						*uParam0[1] = 1;
						if (Global_1835390.f_2775[iVar113] == -1 && func_499())
						{
							if (Global_1835390.f_2704[iVar113] >= 1)
							{
								func_497(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] - 1 /*75*/].f_59 + 1);
							}
							else
							{
								func_497(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), 1);
							}
							Global_1835390.f_2775[iVar113] = Global_1835390.f_2704[iVar113];
							Global_1835390.f_2704[iVar113]++;
						}
						return false;
					}
					else
					{
						func_350(uParam0.f_4, uParam0.f_5, uParam0.f_44);
						Global_1835390.f_2704[1] = 0;
						*uParam0[1] = 1;
						GAMEPLAY::SET_BIT(&(Global_1835390.f_2832), true);
						return false;
					}
				}
			}
			else
			{
				func_350(uParam0.f_4, uParam0.f_5, uParam0.f_44);
				Global_1835390.f_2704[1] = 0;
				*uParam0[1] = 1;
				return false;
			}
			break;
		
		case 1:
			func_494(iVar113, Global_1835013.f_374);
			*uParam0[1] = 2;
			break;
		
		case 2:
			return true;
			break;
	}
	return false;
}

bool func_501(auto uParam0, auto uParam1, auto uParam2, auto uParam3, auto uParam4, int iParam5, int iParam6, int iParam7)
{
	switch (*uParam0)
	{
		case 0:
			if (!func_421() && !func_417())
			{
				func_415(*uParam2);
				if (leaderboards2_read_friends_by_row(uParam2, uParam3, uParam4, iParam5, iParam6, iParam7))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		
		case 1:
			if (!leaderboards_read_pending(*uParam2, *uParam2.f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (leaderboards_read_successful(*uParam2, *uParam2.f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		
		case 3:
			return true;
			break;
	}
	return false;
}

bool func_502(auto uParam0)
{
	struct<13> Var0;
	struct<97> Var13;
	struct<6> Var111;
	int iVar119;
	int iVar120;
	int iVar121;
	int iVar122;
	int iVar123;
	int iVar124;
	int iVar125;
	int iVar126;
	int iVar127;
	int iVar128;
	
	Var13.f_19.f_1 = 4;
	iVar122 = -1;
	iVar126 = false;
	Var0 = {func_434(player_id())};
	switch (*uParam0[iVar126])
	{
		case 0:
			Global_1835390.f_2775[iVar126] = -1;
			Global_1835390.f_2704[iVar126] = 0;
			Global_1835013.f_374 = -1;
			Global_1835389 = 0;
			if (func_503(*uParam0.f_44))
			{
				if (!Global_1835389)
				{
					Global_1835389 = 1;
				}
			}
			else if (Global_1835389)
			{
				Global_1835389 = 0;
			}
			if (!Global_1835389)
			{
			}
			if (func_414(uParam0.f_4, uParam0.f_5, uParam0.f_44, 11, &Var0, func_499(), 0, 0, 0))
			{
				func_432(&Var111, uParam0.f_44);
				if (*uParam0.f_5 && _0xA0F93D5465B3094D(&Var111))
				{
					if (Var111.f_3 > 0)
					{
						iVar124 = 0;
						iVar119 = 0;
						if (func_499())
						{
							iVar124 = 0;
							while (iVar124 < Var111.f_3)
							{
								_0x34770B9CE0E03B91(iVar124, &Var13);
								if (Global_1835013.f_374 < 0)
								{
									if (func_470(&Var13, &Var0) || func_470(&Var13, &(Global_1835013.f_361)))
									{
										Global_1835013.f_374 = Var13.f_96;
									}
								}
								if (iVar122 < 0)
								{
									if (GAMEPLAY::IS_BIT_SET(Global_1835013.f_142.f_2, false))
									{
										if (Global_1835013.f_211.f_36[0] >= _0x88578F6EC36B4A3A(iVar124, false))
										{
											iVar122 = iVar124;
										}
									}
									else if (Global_1835013.f_211.f_3[0] >= _0x38491439B6BA7F7D(iVar124, false))
									{
										iVar122 = iVar124;
									}
								}
								func_498(&Var13);
								iVar124++;
							}
							if (iVar122 < 0)
							{
								iVar122 = Var111.f_3;
							}
						}
						iVar124 = 0;
						_0x34770B9CE0E03B91(0, &Var13);
						if (Var13.f_96 <= 1)
						{
							if (Global_1835390.f_2704[iVar126] < 12)
							{
								if (func_499() && iVar122 == 0)
								{
									func_497(uParam0, &(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/]), Var13.f_96);
									Global_1835390.f_2775[iVar126] = 0;
									Global_1835390.f_2704[iVar126]++;
								}
								if (func_499() && (func_470(&Var13, &Var0) || func_470(&Var13, &(Global_1835013.f_361))))
								{
								}
								else
								{
									if (func_470(&Var13, &Var0))
									{
										iVar122 = 0;
										Global_1835390.f_2775[iVar126] = 0;
									}
									MemCopy(&(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/]), {Var13.f_13}, 16);
									Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_32 = {Var13};
									Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_59 = Var13.f_96;
									if (func_496(*uParam0.f_44))
									{
										iVar121 = _0x88578F6EC36B4A3A(0, Global_1835390.f_2709);
										if (iVar121 == 1)
										{
											Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_58 = 1;
										}
										else
										{
											Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_58 = 0;
										}
									}
									if (func_435(*uParam0.f_44))
									{
										MemCopy(&(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_16), {Var13.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_74 = 1;
									iVar119 = 0;
									while (iVar119 < Global_1835390.f_2708)
									{
										if (GAMEPLAY::IS_BIT_SET(Global_1835390.f_2769, Global_1835390.f_2710[iVar119]))
										{
											Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_67[iVar119] = _0x88578F6EC36B4A3A(0, Global_1835390.f_2710[iVar119]);
										}
										else
										{
											Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_60[iVar119] = _0x38491439B6BA7F7D(0, Global_1835390.f_2710[iVar119]);
										}
										iVar119++;
									}
									Global_1835390.f_2704[iVar126]++;
								}
								iVar125 = true;
							}
						}
						if (!iVar125)
						{
							Global_1835390.f_2704[iVar126]++;
						}
						if (!func_499())
						{
							iVar122 = Var111.f_5;
						}
						if (iVar122 > 6)
						{
							iVar123 = iVar122 - 6;
						}
						else if (iVar125)
						{
							iVar123 = 1;
						}
						else
						{
							iVar123 = 0;
						}
						iVar124 = iVar123;
						func_498(&Var13);
						iVar124 = iVar123;
						while (iVar124 <= Var111.f_3 - 1)
						{
							_0x34770B9CE0E03B91(iVar124, &Var13);
							if (Global_1835390.f_2704[iVar126] < 12 && Var13.f_96 > 1)
							{
								if (func_499() && iVar122 == iVar124)
								{
									if (!func_470(&(Global_1835390[iVar126 /*901*/][0 /*75*/].f_32), &Var13))
									{
										func_497(uParam0, &(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/]), Var13.f_96);
										Global_1835390.f_2775[iVar126] = Global_1835390.f_2704[iVar126];
										Global_1835390.f_2704[iVar126]++;
									}
								}
								if (func_499() && (func_470(&Var13, &Var0) || func_470(&Var13, &(Global_1835013.f_361))))
								{
								}
								else if (Global_1835390.f_2704[iVar126] < 12)
								{
									if (func_429(Var13) && !func_470(&(Global_1835390[iVar126 /*901*/][0 /*75*/].f_32), &Var13))
									{
										if (func_470(&Var13, &Var0))
										{
											if (Global_1835390.f_2775[iVar126] < 0)
											{
												Global_1835390.f_2775[iVar126] = Global_1835390.f_2704[iVar126];
											}
										}
										MemCopy(&(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/]), {Var13.f_13}, 16);
										Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_32 = {Var13};
										Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_59 = Var13.f_96;
										Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_74 = 1;
										if (func_496(*uParam0.f_44))
										{
											iVar121 = _0x88578F6EC36B4A3A(iVar124, Global_1835390.f_2709);
											if (iVar121 == 1)
											{
												Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_58 = 0;
											}
										}
										if (func_435(*uParam0.f_44))
										{
											MemCopy(&(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_16), {Var13.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										iVar119 = 0;
										iVar119 = 0;
										while (iVar119 < Global_1835390.f_2708)
										{
											if (GAMEPLAY::IS_BIT_SET(Global_1835390.f_2769, Global_1835390.f_2710[iVar119]))
											{
												Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_67[iVar119] = _0x88578F6EC36B4A3A(iVar124, Global_1835390.f_2710[iVar119]);
											}
											else
											{
												Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_60[iVar119] = _0x38491439B6BA7F7D(iVar124, Global_1835390.f_2710[iVar119]);
											}
											iVar119++;
										}
										Global_1835390.f_2704[iVar126]++;
									}
								}
							}
							func_498(&Var13);
							iVar124++;
						}
						_0x71B008056E5692D6();
						func_350(uParam0.f_4, uParam0.f_5, uParam0.f_44);
						if (iVar125)
						{
							if (Global_1835390.f_2775[iVar126] == -1 && func_499())
							{
								if (Global_1835390.f_2704[iVar126] >= 1)
								{
									func_497(uParam0, &(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/]), Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] - 1 /*75*/].f_59 + 1);
								}
								else
								{
									func_497(uParam0, &(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/]), 1);
								}
								Global_1835390.f_2775[iVar126] = Global_1835390.f_2704[iVar126];
								Global_1835390.f_2704[iVar126]++;
							}
							*uParam0[iVar126] = 2;
						}
						else
						{
							*uParam0[iVar126] = 1;
						}
					}
					else
					{
						if (!iVar125)
						{
							Global_1835390.f_2704[iVar126]++;
						}
						_0x71B008056E5692D6();
						func_350(uParam0.f_4, uParam0.f_5, uParam0.f_44);
						Global_1835390.f_2775[iVar126] = -1;
						*uParam0[iVar126] = 1;
					}
				}
				else
				{
					func_350(uParam0.f_4, uParam0.f_5, uParam0.f_44);
					Global_1835390.f_2775[iVar126] = -1;
					*uParam0[iVar126] = 1;
					GAMEPLAY::SET_BIT(&(Global_1835390.f_2832), iVar126);
				}
			}
			break;
		
		case 1:
			if (Global_1835390.f_2775[iVar126] == -1)
			{
				iVar128 = 11;
			}
			else
			{
				iVar128 = 1;
			}
			if (func_495(uParam0.f_4, uParam0.f_5, uParam0.f_44, 1, iVar128))
			{
				func_432(&Var111, uParam0.f_44);
				if (*uParam0.f_5 && _0xA0F93D5465B3094D(&Var111))
				{
					if (Var111.f_3 > 0)
					{
						iVar119 = 0;
						while (iVar119 < Var111.f_3)
						{
							_0x34770B9CE0E03B91(iVar119, &Var13);
							if (func_499() && (func_470(&Var13, &Var0) || func_470(&Var13, &(Global_1835013.f_361))))
							{
							}
							else
							{
								iVar127 = false;
								if (Global_1835390[iVar126 /*901*/][0 /*75*/].f_59 > 1 || Global_1835390[iVar126 /*901*/][0 /*75*/].f_59 <= 0)
								{
									iVar127 = true;
								}
								if (Global_1835390.f_2704[iVar126] < 12 || iVar127)
								{
									if (iVar119 == 0 || iVar127)
									{
										MemCopy(&(Global_1835390[iVar126 /*901*/][0 /*75*/]), {Var13.f_13}, 16);
										Global_1835390[iVar126 /*901*/][0 /*75*/].f_32 = {Var13};
										Global_1835390[iVar126 /*901*/][0 /*75*/].f_59 = Var13.f_96;
										if (func_496(*uParam0.f_44))
										{
											iVar121 = _0x88578F6EC36B4A3A(0, Global_1835390.f_2709);
											if (iVar121 == 1)
											{
												Global_1835390[iVar126 /*901*/][0 /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835390[iVar126 /*901*/][0 /*75*/].f_58 = 0;
											}
										}
										if (func_435(*uParam0.f_44))
										{
											MemCopy(&(Global_1835390[iVar126 /*901*/][0 /*75*/].f_16), {Var13.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										Global_1835390[iVar126 /*901*/][0 /*75*/].f_74 = 1;
										iVar120 = 0;
										iVar120 = 0;
										while (iVar120 < Global_1835390.f_2708)
										{
											if (GAMEPLAY::IS_BIT_SET(Global_1835390.f_2769, Global_1835390.f_2710[iVar120]))
											{
												Global_1835390[iVar126 /*901*/][iVar119 /*75*/].f_67[iVar120] = _0x88578F6EC36B4A3A(iVar119, Global_1835390.f_2710[iVar120]);
											}
											else
											{
												Global_1835390[iVar126 /*901*/][iVar119 /*75*/].f_60[iVar120] = _0x38491439B6BA7F7D(iVar119, Global_1835390.f_2710[iVar120]);
											}
											iVar120++;
										}
										if (Global_1835390.f_2704[iVar126] == 0)
										{
											if (iVar127)
											{
											}
											else
											{
												Global_1835390.f_2704[iVar126]++;
											}
										}
										else if (Global_1835390.f_2704[iVar126] == 1 && Global_1835390.f_2775[iVar126] == -1)
										{
											Global_1835390.f_2704[iVar126]++;
										}
									}
									else if (Global_1835390.f_2704[iVar126] < 12)
									{
										MemCopy(&(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/]), {Var13.f_13}, 16);
										Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_32 = {Var13};
										if (func_496(*uParam0.f_44))
										{
											iVar121 = _0x88578F6EC36B4A3A(iVar119, Global_1835390.f_2709);
											if (iVar121 == 1)
											{
												Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_58 = 0;
											}
										}
										if (func_435(*uParam0.f_44))
										{
											MemCopy(&(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_16), {Var13.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_59 = Var13.f_96;
										Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_74 = 1;
										iVar120 = 0;
										iVar120 = 0;
										while (iVar120 < Global_1835390.f_2708)
										{
											if (GAMEPLAY::IS_BIT_SET(Global_1835390.f_2769, Global_1835390.f_2710[iVar120]))
											{
												Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_67[iVar120] = _0x88578F6EC36B4A3A(iVar119, Global_1835390.f_2710[iVar120]);
											}
											else
											{
												Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_60[iVar120] = _0x38491439B6BA7F7D(iVar119, Global_1835390.f_2710[iVar120]);
											}
											iVar120++;
										}
										if (iVar119 != 0)
										{
											Global_1835390.f_2704[iVar126]++;
										}
									}
								}
							}
							func_498(&Var13);
							iVar119++;
						}
					}
					_0x71B008056E5692D6();
					func_350(uParam0.f_4, uParam0.f_5, uParam0.f_44);
					*uParam0[iVar126] = 2;
				}
				else
				{
					GAMEPLAY::SET_BIT(&(Global_1835390.f_2832), iVar126);
					func_350(uParam0.f_4, uParam0.f_5, uParam0.f_44);
					Global_1835390.f_2704[iVar126] = 0;
					*uParam0[iVar126] = 2;
					Global_1835390.f_2704[1] = 0;
					*uParam0[1] = 1;
					Global_1835390.f_2704[2] = 0;
					*uParam0[2] = 3;
				}
			}
			if (Global_1835390.f_2775[iVar126] == -1 && func_499())
			{
				if (Global_1835390.f_2704[iVar126] >= 1)
				{
					func_497(uParam0, &(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/]), Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] - 1 /*75*/].f_59 + 1);
				}
				else
				{
					func_497(uParam0, &(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/]), 1);
				}
				Global_1835390.f_2775[iVar126] = Global_1835390.f_2704[iVar126];
				Global_1835390.f_2704[iVar126]++;
			}
			break;
		
		case 2:
			func_494(iVar126, Global_1835013.f_374);
			*uParam0[iVar126] = 3;
			break;
		
		case 3:
			return true;
			break;
	}
	return false;
}

bool func_503(struct<4> Param0, auto uParam1, auto uParam2, auto uParam3, auto uParam4, auto uParam5, auto uParam6, auto uParam7, auto uParam8, auto uParam9, auto uParam10, auto uParam11, auto uParam12, auto uParam13, auto uParam14, auto uParam15, auto uParam16, auto uParam17, auto uParam18, auto uParam19, auto uParam20, auto uParam21, auto uParam22, auto uParam23, auto uParam24, auto uParam25, auto uParam26, auto uParam27, auto uParam28, auto uParam29, auto uParam30, auto uParam31, auto uParam32, auto uParam33, auto uParam34, auto uParam35, auto uParam36, auto uParam37, auto uParam38, auto uParam39, auto uParam40, auto uParam41, auto uParam42, auto uParam43, auto uParam44, auto uParam45, auto uParam46, auto uParam47, auto uParam48, auto uParam49, auto uParam50, auto uParam51, auto uParam52, auto uParam53, auto uParam54, auto uParam55, auto uParam56, auto uParam57, auto uParam58, auto uParam59, auto uParam60, auto uParam61, auto uParam62, auto uParam63, auto uParam64, auto uParam65)
{
	int iVar0;
	
	if (Global_1835388)
	{
		if (Global_1835013.f_5 != 0)
		{
			if (Global_1835013.f_5 == Param0)
			{
				if (Global_1835013.f_5.f_2 == Param0.f_3)
				{
					iVar0 = 0;
					while (iVar0 < Param0.f_3)
					{
						if (!are_strings_equal(&(Global_1835013.f_5.f_2.f_1[iVar0 /*16*/]), &(Param0.f_3.f_1[iVar0 /*16*/])) || !are_strings_equal(&(Global_1835013.f_5.f_2.f_1[iVar0 /*16*/].f_8), &(Param0.f_3.f_1[iVar0 /*16*/].f_8)))
						{
							return false;
						}
						iVar0++;
					}
					return true;
				}
			}
		}
	}
	return false;
}

void func_504(auto uParam0)
{
	int iVar0;
	
	if (leaderboards_get_cache_exists(Global_1835390.f_2826))
	{
		iVar0 = leaderboards_get_cache_time(Global_1835390.f_2826);
		if (iVar0 < 300000)
		{
			GAMEPLAY::SET_BIT(uParam0.f_42, 5);
		}
		else
		{
			GAMEPLAY::CLEAR_BIT(uParam0.f_42, 5);
			func_479(Global_1835390.f_2826, -1);
		}
	}
}

void func_505(int iParam0)
{
	if (has_scaleform_movie_loaded(iParam0))
	{
		draw_scaleform_movie_fullscreen(iParam0, 255, 255, 255, false, 0);
	}
}

void func_506(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	char* sVar0;
	struct<2> Var1;
	struct<16> Var36;
	int iVar52;
	struct<13> Var53;
	int iVar66;
	struct<13> Var67;
	int iVar80;
	
	sVar0 = "";
	if (GAMEPLAY::IS_BIT_SET(iParam2, 4))
	{
		sVar0 = "SCLB_GLOBAL";
	}
	else if (GAMEPLAY::IS_BIT_SET(iParam2, 5))
	{
		*iParam1++;
		sVar0 = "SCLB_FRIENDS";
	}
	else if (GAMEPLAY::IS_BIT_SET(iParam2, 6))
	{
		*iParam1++;
		if (network_is_signed_online() && _network_player_is_in_clan())
		{
			if (is_orbis_version() && !_0x72D918C99BCACC54(0))
			{
				sVar0 = "SCLB_CREW";
			}
			else
			{
				Var53 = {func_434(player_id())};
				if (network_clan_player_is_active(&Var53))
				{
					network_clan_player_get_desc(&Var1, 35, &Var53);
					if (!is_string_null_or_empty(&(Var1.f_1)))
					{
						sVar0 = "STRING";
						Var36 = {Var1.f_1};
						iVar52 = true;
					}
					else
					{
						sVar0 = "SCLB_CREW";
					}
				}
				else
				{
					sVar0 = "SCLB_CREW";
				}
			}
		}
		else
		{
			sVar0 = "SCLB_CREW";
		}
	}
	_push_scaleform_movie_function(iParam0, "SET_SLOT");
	_push_scaleform_movie_function_parameter_int(*iParam1);
	_push_scaleform_movie_function_parameter_int(iParam2);
	if (iVar52)
	{
		_begin_text_component(sVar0);
		_0x5F68520888E69014(&Var36);
		_end_text_component();
	}
	else
	{
		_begin_text_component(sVar0);
		_end_text_component();
	}
	_pop_scaleform_movie_function_void();
	*iParam1++;
	if (iParam4)
	{
		iVar66 = false;
		GAMEPLAY::SET_BIT(&iVar66, 7);
		_push_scaleform_movie_function(iParam0, "SET_SLOT");
		_push_scaleform_movie_function_parameter_int(*iParam1);
		_push_scaleform_movie_function_parameter_int(iVar66);
		if (!network_is_signed_online())
		{
			sVar0 = "SCLB_NOT_ONL";
		}
		else if (!_network_are_ros_available())
		{
			sVar0 = "SCLB_NO_ROS";
		}
		else if (Global_1835390.f_2832 != 0)
		{
			sVar0 = "SCLB_READ_FAIL";
		}
		else
		{
			sVar0 = "HUD_PERM";
		}
		_begin_text_component(sVar0);
		_0xAE4E8157D9ECF087();
		_pop_scaleform_movie_function_void();
		*iParam1++;
	}
	else if (iParam3)
	{
		if (GAMEPLAY::IS_BIT_SET(iParam2, 4))
		{
			sVar0 = "SCLB_NO_GLOBAL";
		}
		else if (GAMEPLAY::IS_BIT_SET(iParam2, 5))
		{
			if (network_get_friend_count() > 0)
			{
				sVar0 = "SCLB_NO_FRNDS";
			}
			else
			{
				sVar0 = "SCLB_NO_FRNDSb";
			}
		}
		else if (GAMEPLAY::IS_BIT_SET(iParam2, 6))
		{
			if (_0x67A5589628E0CFF6())
			{
				if (_0xBA9775570DB788CF())
				{
					if (network_is_signed_online() && _network_player_is_in_clan())
					{
						if (is_orbis_version() && !_0x72D918C99BCACC54(0))
						{
							sVar0 = "SCLB_NO_CREWc";
						}
						else
						{
							Var67 = {func_434(player_id())};
							if (network_clan_player_is_active(&Var67))
							{
								network_clan_player_get_desc(&Var1, 35, &Var67);
								if (!is_string_null_or_empty(&(Var1.f_1)))
								{
									sVar0 = "SCLB_NO_CREWb";
									Var36 = {Var1.f_1};
									iVar52 = true;
								}
								else
								{
									sVar0 = "SCLB_NO_CREWc";
								}
							}
							else
							{
								sVar0 = "SCLB_NO_CREWa";
							}
						}
					}
					else
					{
						sVar0 = "SCLB_NO_CREWa";
					}
				}
				else
				{
					sVar0 = "SCLB_NO_CREWe";
				}
			}
			else
			{
				sVar0 = "SCLB_NO_CREWd";
			}
		}
		iVar80 = false;
		GAMEPLAY::SET_BIT(&iVar80, 7);
		_push_scaleform_movie_function(iParam0, "SET_SLOT");
		_push_scaleform_movie_function_parameter_int(*iParam1);
		_push_scaleform_movie_function_parameter_int(iVar80);
		if (iVar52)
		{
			_begin_text_component(sVar0);
			_0x5F68520888E69014(&Var36);
			_0xAE4E8157D9ECF087();
		}
		else
		{
			_begin_text_component(sVar0);
			_0xAE4E8157D9ECF087();
		}
		_pop_scaleform_movie_function_void();
		*iParam1++;
	}
}

void func_507(int iParam0, char* sParam1, auto uParam2, int iParam3)
{
	int iVar0;
	
	_push_scaleform_movie_function(iParam0, "SET_TITLE");
	_begin_text_component(sParam1);
	_end_text_component();
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		_begin_text_component(uParam2[iVar0 /*6*/]);
		_end_text_component();
		iVar0++;
	}
	_pop_scaleform_movie_function_void();
}

void func_508(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5)
{
	_push_scaleform_movie_function(iParam0, "SET_MULTIPLAYER_TITLE");
	_begin_text_component(sParam1);
	if (!is_string_null_or_empty(sParam2))
	{
		_add_text_component_item_string(sParam2);
	}
	if (iParam5 == -1)
	{
		if (iParam4)
		{
			if (!is_string_null_or_empty(sParam3))
			{
				_0x5F68520888E69014(sParam3);
			}
		}
		else if (!is_string_null_or_empty(sParam3))
		{
			_add_text_component_item_string(sParam3);
		}
	}
	else
	{
		if (iParam4)
		{
			if (!is_string_null_or_empty(sParam3))
			{
				_0x5F68520888E69014(sParam3);
			}
		}
		else if (!is_string_null_or_empty(sParam3))
		{
			_add_text_component_item_string(sParam3);
		}
		add_text_component_integer(iParam5);
	}
	_end_text_component();
	_pop_scaleform_movie_function_void();
}

void func_509(int iParam0, int iParam1)
{
	_push_scaleform_movie_function(iParam0, "SET_DISPLAY_TYPE");
	_push_scaleform_movie_function_parameter_int(iParam1);
	_pop_scaleform_movie_function_void();
}

void func_510(int iParam0)
{
	Global_1318755 = iParam0;
}

void func_511(int iParam0)
{
	Global_1339940.f_932 = iParam0;
}

void func_512()
{
	func_515();
	func_513(4, -1);
	func_513(6, -1);
	func_513(7, -1);
	func_513(3, -1);
	func_513(1, -1);
	func_513(2, -1);
	func_513(11, -1);
	func_513(13, -1);
	func_513(14, -1);
	func_513(16, -1);
}

void func_513(int iParam0, int iParam1)
{
	GAMEPLAY::SET_BIT(&(Global_1338622.f_948), iParam0);
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				Global_1338622.f_170[iParam1] = 1;
			}
			break;
	}
}

void func_514()
{
	if (!Global_14413.f_1 == 1)
	{
		if (func_131(0))
		{
			func_128(0);
		}
		GAMEPLAY::SET_BIT(&Global_2284, 2);
	}
}

void func_515()
{
	Global_2460486.f_4391 = 0;
}

void func_516(int iParam0)
{
	if (iParam0)
	{
		func_243(&(Local_51.f_119), 0, 0, 1, 1);
		func_242(&(Local_51.f_119), "HUD_INPUT53", 2, 202, 1, 1, 0);
		func_242(&(Local_51.f_119), "SCLB_PROFILE", 2, 217, 1, 1, 0);
		func_517(&(Local_51.f_119), 1);
	}
	else
	{
		func_243(&(Local_51.f_119), 0, 0, 1, 1);
		func_242(&(Local_51.f_119), "HUD_INPUT53", 2, 202, 1, 1, 0);
		func_517(&(Local_51.f_119), 1);
	}
}

void func_517(auto uParam0, int iParam1)
{
	if (iParam1)
	{
		func_144(uParam0.f_1, 1024);
	}
	else
	{
		func_143(uParam0.f_1, 1024);
	}
}

bool func_518(auto uParam0)
{
	if ((GAMEPLAY::IS_BIT_SET(*uParam0.f_42, true) && Global_1835390.f_2704[0] > 0) && *uParam0.f_246.f_1 >= 0)
	{
		return true;
	}
	return false;
}

void func_519(auto uParam0)
{
	if (Global_100184 != 0 && Global_101154.f_17733.f_12[Global_100184 /*8*/].f_4 == 0)
	{
		func_243(uParam0, 0, 0, 1, 1);
		func_242(uParam0, "IB_QUIT", 2, 202, 1, 1, 0);
		if (!is_player_online())
		{
			func_242(uParam0, "HUD_INPUT68", 2, 211, 1, 1, 0);
			iLocal_530 = 1;
		}
		else if (is_player_online() && iLocal_529)
		{
			func_242(uParam0, "HUD_INPUT68", 2, 211, 1, 1, 0);
			iLocal_530 = 0;
		}
		else
		{
			iLocal_530 = 0;
		}
	}
	else
	{
		func_243(uParam0, 0, 0, 1, 1);
		func_242(uParam0, "FE_HLP4", 2, 201, 1, 1, 0);
		func_242(uParam0, "IB_QUIT", 2, 202, 1, 1, 0);
		if (!is_player_online())
		{
			func_242(uParam0, "HUD_INPUT68", 2, 211, 1, 1, 0);
			iLocal_530 = 1;
		}
		else if (is_player_online() && iLocal_529)
		{
			func_242(uParam0, "HUD_INPUT68", 2, 211, 1, 1, 0);
			iLocal_530 = 0;
		}
		else
		{
			iLocal_530 = 0;
		}
	}
	func_517(&(Local_51.f_119), 1);
}

void func_520()
{
	func_549();
	func_409();
	func_548(&(Local_2442.f_358[0 /*189*/].f_24), 0, 0, "PilotDispatch", 0, 1);
	func_548(&uLocal_2112, 0, 0, "PilotDispatch", 0, 1);
	func_537(&Local_2442);
	func_521(&Local_2442, Local_51.f_10);
	if (ENTITY::DOES_ENTITY_EXIST(Local_2442.f_358[0 /*189*/].f_9))
	{
		set_vehicle_doors_locked(Local_2442.f_358[0 /*189*/].f_9, 4);
	}
}

void func_521(auto uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_536(&Local_2442);
			break;
		
		case 1:
			func_535(&Local_2442);
			break;
		
		case 2:
			func_534(&Local_2442);
			func_533(&(Local_2442.f_27[2 /*10*/]), 1);
			func_533(&(Local_2442.f_27[3 /*10*/]), 1);
			break;
		
		case 3:
			func_532(&Local_2442);
			break;
		
		case 4:
			func_522(&Local_2442);
			break;
	}
}

void func_522(auto uParam0)
{
	func_537(uParam0);
	*uParam0.f_12 = 32;
	func_531(uParam0.f_27[0 /*10*/], 947.1314f, 4146.46f, 80.494f, 30f, 2, 0);
	func_531(uParam0.f_27[1 /*10*/], 762.498f, 4589.213f, 105.5935f, 30f, 2, 0);
	func_531(uParam0.f_27[2 /*10*/], 659.2919f, 4806.028f, 175.759f, 30f, 2, 0);
	func_531(uParam0.f_27[3 /*10*/], 621.3849f, 5032.051f, 343.6387f, 30f, 2, 0);
	func_531(uParam0.f_27[4 /*10*/], 503.8404f, 5297.335f, 508.6478f, 30f, 2, 0);
	func_531(uParam0.f_27[5 /*10*/], 555.4404f, 5426.935f, 708.948f, 30f, 2, 0);
	func_531(uParam0.f_27[6 /*10*/], 637.6946f, 5491.08f, 717.522f, 30f, 2, 0);
	func_531(uParam0.f_27[7 /*10*/], 790.3913f, 5491.866f, 566.103f, 30f, 2, 0);
	func_531(uParam0.f_27[8 /*10*/], 910.6804f, 5313.552f, 388.8567f, 30f, 2, 0);
	func_531(uParam0.f_27[9 /*10*/], 1159.749f, 5183.155f, 253.1068f, 30f, 2, 0);
	func_531(uParam0.f_27[10 /*10*/], 1354.13f, 4998.078f, 141.6288f, 30f, 2, 0);
	func_531(uParam0.f_27[11 /*10*/], 1612.532f, 4941.23f, 61.8549f, 30f, 2, 0);
	func_531(uParam0.f_27[12 /*10*/], 2200.396f, 4800.332f, 69.9321f, 30f, 3, 2);
	func_531(uParam0.f_27[13 /*10*/], 2527.632f, 5144.98f, 66.763f, 30f, 3, 2);
	func_531(uParam0.f_27[14 /*10*/], 2527.131f, 5275.334f, 62.3622f, 30f, 2, 0);
	func_531(uParam0.f_27[15 /*10*/], 2413.345f, 5443.203f, 99.4297f, 30f, 2, 0);
	func_531(uParam0.f_27[16 /*10*/], 2236.067f, 5524.246f, 108.3291f, 30f, 2, 0);
	func_531(uParam0.f_27[17 /*10*/], 1944.463f, 5520.007f, 177.2808f, 30f, 2, 0);
	func_531(uParam0.f_27[18 /*10*/], 1712.477f, 5624.937f, 324.9427f, 30f, 2, 0);
	func_531(uParam0.f_27[19 /*10*/], 1601.158f, 5663.75f, 335.8832f, 30f, 2, 0);
	func_531(uParam0.f_27[20 /*10*/], 1410.764f, 5675.836f, 425.9678f, 30f, 2, 0);
	func_531(uParam0.f_27[21 /*10*/], 1225.682f, 5678.654f, 497.3169f, 30f, 2, 0);
	func_531(uParam0.f_27[22 /*10*/], 1094.47f, 5664.07f, 563.0829f, 30f, 2, 0);
	func_531(uParam0.f_27[23 /*10*/], 1001.427f, 5633.827f, 633.2537f, 30f, 2, 0);
	func_531(uParam0.f_27[24 /*10*/], 875.5358f, 5642.667f, 682.5352f, 30f, 2, 0);
	func_531(uParam0.f_27[25 /*10*/], 741.3275f, 5688.046f, 709.5683f, 30f, 2, 0);
	func_531(uParam0.f_27[26 /*10*/], 487.2532f, 5654.821f, 802.0096f, 30f, 3, 1);
	func_531(uParam0.f_27[27 /*10*/], 362.6602f, 5620.538f, 723.2353f, 30f, 2, 0);
	func_531(uParam0.f_27[28 /*10*/], 134.4865f, 5555.637f, 520.3109f, 30f, 2, 0);
	func_531(uParam0.f_27[29 /*10*/], -128.2242f, 5510.46f, 307.4505f, 30f, 2, 0);
	func_531(uParam0.f_27[30 /*10*/], -397.7556f, 5438.69f, 175.4529f, 30f, 2, 0);
	func_531(uParam0.f_27[31 /*10*/], -520.8975f, 5424.283f, 165.285f, 30f, 4, 0);
	*uParam0.f_13 = 1;
	func_530(uParam0.f_358[0 /*189*/]);
	func_529(uParam0.f_358[0 /*189*/], "Player");
	func_525(uParam0.f_358[0 /*189*/], PLAYER::PLAYER_PED_ID(), Local_51.f_1);
	func_524(uParam0.f_358[0 /*189*/], 1135.682f, 3700.644f, 80.494f, 22.3451f);
	func_523(uParam0.f_358[0 /*189*/], 0, joaat("player_one"), joaat("stunt"));
}

void func_523(auto uParam0, int iParam1, int iParam2, int iParam3)
{
	*uParam0.f_20 = iParam1;
	*uParam0.f_21 = iParam2;
	*uParam0.f_22 = iParam3;
}

void func_524(auto uParam0, Vector3 vParam1, float fParam2)
{
	*uParam0.f_16 = {vParam1};
	*uParam0.f_19 = fParam4;
}

void func_525(auto uParam0, int iParam1, int iParam2)
{
	*uParam0.f_8 = iParam1;
	*uParam0.f_9 = iParam2;
	func_526(iParam2, &(Local_51.f_243));
}

void func_526(int iParam0, auto uParam1)
{
	int iVar0;
	
	if (is_vehicle_driveable(iParam0, 0))
	{
		func_528(uParam1);
		*uParam1.f_66 = ENTITY::GET_ENTITY_MODEL(iParam0);
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
			GAMEPLAY::SET_BIT(uParam1.f_77, 28);
		}
		if (_is_vehicle_neon_light_enabled(iParam0, 3))
		{
			GAMEPLAY::SET_BIT(uParam1.f_77, 29);
		}
		if (_is_vehicle_neon_light_enabled(iParam0, 0))
		{
			GAMEPLAY::SET_BIT(uParam1.f_77, 30);
		}
		if (_is_vehicle_neon_light_enabled(iParam0, 1))
		{
			GAMEPLAY::SET_BIT(uParam1.f_77, 31);
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
						GAMEPLAY::CLEAR_BIT(uParam1.f_77, 23);
						GAMEPLAY::SET_BIT(uParam1.f_77, 22);
						break;
					
					case 3:
					case 1:
						GAMEPLAY::CLEAR_BIT(uParam1.f_77, 23);
						GAMEPLAY::CLEAR_BIT(uParam1.f_77, 22);
						break;
					
					case 4:
						GAMEPLAY::SET_BIT(uParam1.f_77, 23);
						break;
				}
			}
			else
			{
				GAMEPLAY::SET_BIT(uParam1.f_77, 23);
			}
		}
		if (!get_vehicle_tyres_can_burst(iParam0))
		{
			GAMEPLAY::SET_BIT(uParam1.f_77, 9);
		}
		if (is_vehicle_stolen(iParam0))
		{
			GAMEPLAY::SET_BIT(uParam1.f_77, 10);
		}
		if (get_is_vehicle_primary_colour_custom(iParam0))
		{
			GAMEPLAY::SET_BIT(uParam1.f_77, 13);
			get_vehicle_custom_primary_colour(iParam0, uParam1.f_71, uParam1.f_72, uParam1.f_73);
		}
		if (get_is_vehicle_secondary_colour_custom(iParam0))
		{
			GAMEPLAY::SET_BIT(uParam1.f_77, 12);
		}
		func_527(&iParam0, uParam1.f_9, uParam1.f_59);
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (is_vehicle_extra_turned_on(iParam0, iVar0 + 1))
			{
				GAMEPLAY::SET_BIT(uParam1.f_77, func_119(iVar0 + 1));
			}
			iVar0++;
		}
		if (_does_vehicle_have_decal(iParam0, 0))
		{
			GAMEPLAY::SET_BIT(uParam1.f_77, 11);
		}
		else
		{
			GAMEPLAY::CLEAR_BIT(uParam1.f_77, 11);
		}
		if (decor_exist_on(iParam0, "IgnoredByQuickSave") && decor_get_bool(iParam0, "IgnoredByQuickSave"))
		{
			GAMEPLAY::SET_BIT(uParam1.f_77, 27);
		}
		else
		{
			GAMEPLAY::CLEAR_BIT(uParam1.f_77, 27);
		}
	}
}

bool func_527(int iParam0, auto uParam1, auto uParam2)
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

void func_528(auto uParam0)
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

void func_529(char* sParam0, char* sParam1)
{
	StringCopy(sParam0, sParam1, 32);
}

void func_530(auto uParam0)
{
	*uParam0.f_10 = 0;
	*uParam0.f_11 = -1;
	*uParam0.f_12 = 0;
	*uParam0.f_13 = 0f;
	*uParam0.f_23 = 13;
}

void func_531(auto uParam0, Vector3 vParam1, float fParam2, int iParam3, int iParam4)
{
	*uParam0 = {vParam1};
	*uParam0.f_3 = fParam4;
	*uParam0.f_7 = iParam5;
	*uParam0.f_8 = iParam6;
}

void func_532(auto uParam0)
{
	func_537(uParam0);
	*uParam0.f_12 = 28;
	func_531(uParam0.f_27[0 /*10*/], -1737.725f, -2720.967f, 38f, 30f, 2, 0);
	func_531(uParam0.f_27[1 /*10*/], -1384.515f, -2880.773f, 38f, 30f, 2, 0);
	func_531(uParam0.f_27[2 /*10*/], -1156.435f, -2957.284f, 40f, 30f, 2, 0);
	func_531(uParam0.f_27[3 /*10*/], -795.3043f, -2987.754f, 60f, 30f, 2, 0);
	func_531(uParam0.f_27[4 /*10*/], -429.0231f, -2969.528f, 30f, 30f, 3, 1);
	func_531(uParam0.f_27[5 /*10*/], -15.5168f, -2912.484f, 60f, 30f, 2, 0);
	func_531(uParam0.f_27[6 /*10*/], 656.9059f, -2798.444f, 80f, 30f, 3, 2);
	func_531(uParam0.f_27[7 /*10*/], 990.7529f, -2452.092f, 70f, 30f, 2, 0);
	func_531(uParam0.f_27[8 /*10*/], 1019.531f, -2182.119f, 60f, 30f, 2, 0);
	func_531(uParam0.f_27[9 /*10*/], 1019.899f, -1886.15f, 60f, 30f, 2, 0);
	func_531(uParam0.f_27[10 /*10*/], 944.9045f, -1488.589f, 107.7f, 30f, 2, 0);
	func_531(uParam0.f_27[11 /*10*/], 698.908f, -1013.024f, 100.5f, 30f, 3, 2);
	func_531(uParam0.f_27[12 /*10*/], 388.7276f, -822.8241f, 90f, 30f, 2, 0);
	func_531(uParam0.f_27[13 /*10*/], 20.7016f, -653.9637f, 101.8f, 30f, 3, 2);
	func_531(uParam0.f_27[14 /*10*/], -135.3874f, -670.6069f, 112f, 30f, 3, 3);
	func_531(uParam0.f_27[15 /*10*/], -360.3365f, -655.137f, 90f, 30f, 2, 0);
	func_531(uParam0.f_27[16 /*10*/], -700.3533f, -657.1476f, 70f, 30f, 2, 0);
	func_531(uParam0.f_27[17 /*10*/], -951.5859f, -654.0262f, 68f, 30f, 3, 2);
	func_531(uParam0.f_27[18 /*10*/], -1125.587f, -769.7247f, 67f, 30f, 2, 0);
	func_531(uParam0.f_27[19 /*10*/], -1281.291f, -851.0229f, 82f, 30f, 3, 1);
	func_531(uParam0.f_27[20 /*10*/], -1580.865f, -1009.944f, 40f, 30f, 2, 0);
	func_531(uParam0.f_27[21 /*10*/], -1877.52f, -1152.927f, 30f, 30f, 2, 0);
	func_531(uParam0.f_27[22 /*10*/], -2101.111f, -1330.267f, 20f, 30f, 2, 0);
	func_531(uParam0.f_27[23 /*10*/], -2230.15f, -1555.89f, 10f, 30f, 3, 2);
	func_531(uParam0.f_27[24 /*10*/], -2214.946f, -1978.262f, 10f, 30f, 2, 0);
	func_531(uParam0.f_27[25 /*10*/], -2055.091f, -2359.626f, 20f, 30f, 2, 0);
	func_531(uParam0.f_27[26 /*10*/], -1893.392f, -2559.46f, 22f, 30f, 2, 0);
	func_531(uParam0.f_27[27 /*10*/], -1737.725f, -2720.967f, 83.7f, 30f, 4, 0);
	*uParam0.f_13 = 1;
	func_530(uParam0.f_358[0 /*189*/]);
	func_529(uParam0.f_358[0 /*189*/], "Player");
	func_525(uParam0.f_358[0 /*189*/], PLAYER::PLAYER_PED_ID(), Local_51.f_1);
	func_524(uParam0.f_358[0 /*189*/], -2102.16f, -2556.082f, 38f, 245.6561f);
	func_523(uParam0.f_358[0 /*189*/], 0, joaat("player_one"), joaat("stunt"));
}

void func_533(auto uParam0, int iParam1)
{
	func_313(uParam0.f_9, iParam1);
}

void func_534(auto uParam0)
{
	func_537(uParam0);
	*uParam0.f_12 = 21;
	func_531(uParam0.f_27[0 /*10*/], 1167.2f, -2557.195f, 90f, 30f, 2, 0);
	func_531(uParam0.f_27[1 /*10*/], 869.9235f, -2613.705f, 57.8325f, 30f, 2, 0);
	func_531(uParam0.f_27[2 /*10*/], 652.3818f, -2651.991f, 54.935f, 30f, 2, 0);
	func_531(uParam0.f_27[3 /*10*/], 249.3849f, -2579.821f, 60.1264f, 30f, 3, 2);
	func_531(uParam0.f_27[4 /*10*/], -31.7179f, -2590.793f, 19.9452f, 30f, 2, 0);
	func_531(uParam0.f_27[5 /*10*/], -317.409f, -2582.66f, 48.7654f, 30f, 3, 3);
	func_531(uParam0.f_27[6 /*10*/], -395.6915f, -2334.057f, 39.3612f, 30f, 2, 0);
	func_531(uParam0.f_27[7 /*10*/], -300.2367f, -2118.431f, 53.3728f, 30f, 2, 0);
	func_531(uParam0.f_27[8 /*10*/], -157.1812f, -1967.885f, 56.4093f, 30f, 3, 2);
	func_531(uParam0.f_27[9 /*10*/], -199.4688f, -1803.328f, 13.6363f, 30f, 2, 0);
	func_531(uParam0.f_27[10 /*10*/], -383.5264f, -1738.067f, 60.8194f, 30f, 2, 0);
	func_531(uParam0.f_27[11 /*10*/], -649.8698f, -1710.374f, 61.3036f, 30f, 2, 0);
	func_531(uParam0.f_27[12 /*10*/], -861.6902f, -1857.194f, 77.0621f, 30f, 3, 2);
	func_531(uParam0.f_27[13 /*10*/], -716.8034f, -2111.744f, 65.9868f, 30f, 2, 0);
	func_531(uParam0.f_27[14 /*10*/], -548.7557f, -2230.616f, 97.2887f, 30f, 2, 0);
	func_531(uParam0.f_27[15 /*10*/], -270.7834f, -2425.144f, 96.7744f, 30f, 3, 1);
	func_531(uParam0.f_27[16 /*10*/], 5.435f, -2665.31f, 46.2903f, 30f, 2, 0);
	func_531(uParam0.f_27[17 /*10*/], 299.0821f, -2834.288f, 27.0191f, 30f, 2, 0);
	func_531(uParam0.f_27[18 /*10*/], 514.295f, -2880.863f, 42.0956f, 30f, 3, 2);
	func_531(uParam0.f_27[19 /*10*/], 842.6024f, -2599.042f, 25.978f, 30f, 2, 0);
	func_531(uParam0.f_27[20 /*10*/], 991.974f, -2468.436f, 87.493f, 30f, 4, 0);
	*uParam0.f_13 = 1;
	func_530(uParam0.f_358[0 /*189*/]);
	func_529(uParam0.f_358[0 /*189*/], "Player");
	func_525(uParam0.f_358[0 /*189*/], PLAYER::PLAYER_PED_ID(), Local_51.f_1);
	func_524(uParam0.f_358[0 /*189*/], 1788.044f, -2438.835f, 130.9346f, 100.0275f);
	func_523(uParam0.f_358[0 /*189*/], 0, joaat("player_one"), joaat("stunt"));
}

void func_535(auto uParam0)
{
	func_537(uParam0);
	*uParam0.f_12 = 19;
	func_531(uParam0.f_27[0 /*10*/], -2819.07f, -81.2779f, 76.1411f, 30f, 2, 0);
	func_531(uParam0.f_27[1 /*10*/], -2737.77f, 342.665f, 175.645f, 30f, 2, 0);
	func_531(uParam0.f_27[2 /*10*/], -2631.929f, 499.7495f, 210.0935f, 30f, 2, 0);
	func_531(uParam0.f_27[3 /*10*/], -2438.01f, 692.3843f, 285.745f, 30f, 3, 3);
	func_531(uParam0.f_27[4 /*10*/], -2039.406f, 708.7898f, 170.6556f, 30f, 2, 0);
	func_531(uParam0.f_27[5 /*10*/], -1633.076f, 751.8171f, 220.188f, 30f, 2, 0);
	func_531(uParam0.f_27[6 /*10*/], -1187.955f, 874.4288f, 246.4972f, 30f, 3, 1);
	func_531(uParam0.f_27[7 /*10*/], -893.826f, 994.239f, 239.512f, 30f, 2, 0);
	func_531(uParam0.f_27[8 /*10*/], -565.788f, 1098.308f, 349.0507f, 30f, 2, 0);
	func_531(uParam0.f_27[9 /*10*/], -326.8564f, 1129.9f, 336.1296f, 30f, 2, 0);
	func_531(uParam0.f_27[10 /*10*/], -155.9212f, 1149.858f, 312.2522f, 30f, 2, 0);
	func_531(uParam0.f_27[11 /*10*/], 145.603f, 1162.599f, 277.7465f, 30f, 3, 1);
	func_531(uParam0.f_27[12 /*10*/], 355.6647f, 1234.464f, 287.6501f, 30f, 2, 0);
	func_531(uParam0.f_27[13 /*10*/], 640.85f, 1191.643f, 329.783f, 30f, 2, 0);
	func_531(uParam0.f_27[14 /*10*/], 783.3697f, 1157.395f, 329.0691f, 30f, 3, 3);
	func_531(uParam0.f_27[15 /*10*/], 1016.378f, 1000.386f, 252.4894f, 30f, 2, 0);
	func_531(uParam0.f_27[16 /*10*/], 1243.37f, 945.084f, 150.5214f, 30f, 2, 0);
	func_531(uParam0.f_27[17 /*10*/], 1494.048f, 863.8886f, 110.4097f, 30f, 2, 0);
	func_531(uParam0.f_27[18 /*10*/], 1751.842f, 687.7875f, 296.787f, 30f, 4, 0);
	*uParam0.f_13 = 1;
	func_530(uParam0.f_358[0 /*189*/]);
	func_529(uParam0.f_358[0 /*189*/], "Player");
	func_525(uParam0.f_358[0 /*189*/], PLAYER::PLAYER_PED_ID(), Local_51.f_1);
	func_524(uParam0.f_358[0 /*189*/], -2818.17f, -500.178f, 76.1411f, 0f);
	func_523(uParam0.f_358[0 /*189*/], 0, joaat("player_one"), joaat("stunt"));
}

void func_536(auto uParam0)
{
	func_537(uParam0);
	*uParam0.f_12 = 18;
	func_531(uParam0.f_27[0 /*10*/], 1025.724f, 3073.133f, 70f, 30f, 2, 0);
	func_531(uParam0.f_27[1 /*10*/], 847.4132f, 3025.239f, 80f, 30f, 2, 0);
	func_531(uParam0.f_27[2 /*10*/], 624.897f, 2968.416f, 80f, 30f, 3, 1);
	func_531(uParam0.f_27[3 /*10*/], 398.5529f, 2921.654f, 75f, 30f, 2, 0);
	func_531(uParam0.f_27[4 /*10*/], 68.1f, 2896.4f, 80f, 30f, 2, 0);
	func_531(uParam0.f_27[5 /*10*/], -290.7f, 2895.4f, 80f, 30f, 2, 0);
	func_531(uParam0.f_27[6 /*10*/], -1033.31f, 2832.959f, 37.5f, 30f, 3, 2);
	func_531(uParam0.f_27[7 /*10*/], -1195.153f, 2729.109f, 18f, 30f, 2, 0);
	func_531(uParam0.f_27[8 /*10*/], -1414.6f, 2636.365f, 8.25f, 30f, 2, 0);
	func_531(uParam0.f_27[9 /*10*/], -1684.856f, 2630.035f, 10f, 30f, 2, 0);
	func_531(uParam0.f_27[10 /*10*/], -2024.536f, 2677.336f, 30f, 30f, 3, 1);
	func_531(uParam0.f_27[11 /*10*/], -2659.106f, 2670.574f, 5.4745f, 30f, 2, 0);
	func_531(uParam0.f_27[12 /*10*/], -2880.136f, 2732.084f, 21.0365f, 30f, 2, 0);
	func_531(uParam0.f_27[13 /*10*/], -3200.826f, 2826.548f, 40f, 30f, 3, 2);
	func_531(uParam0.f_27[14 /*10*/], -3363.374f, 2580.812f, 50f, 30f, 2, 0);
	func_531(uParam0.f_27[15 /*10*/], -3242.432f, 2370.19f, 40f, 30f, 2, 0);
	func_531(uParam0.f_27[16 /*10*/], -2879.09f, 2382.111f, 20f, 30f, 2, 0);
	func_531(uParam0.f_27[17 /*10*/], -2650.532f, 2450.207f, 66.6f, 30f, 4, 0);
	*uParam0.f_13 = 1;
	func_530(uParam0.f_358[0 /*189*/]);
	func_529(uParam0.f_358[0 /*189*/], "Player");
	func_525(uParam0.f_358[0 /*189*/], PLAYER::PLAYER_PED_ID(), Local_51.f_1);
	func_524(uParam0.f_358[0 /*189*/], vLocal_2337, 154.8464f);
	func_523(uParam0.f_358[0 /*189*/], 0, joaat("player_one"), joaat("stunt"));
}

void func_537(auto uParam0)
{
	float fVar0;
	
	func_4(uParam0.f_3);
	if (Local_51.f_10 != -1)
	{
		fVar0 = func_35(Local_51.f_10);
		if (fVar0 <= 0f || fVar0 > Local_51.f_12[Local_51.f_10])
		{
			fVar0 = Local_51.f_12[Local_51.f_10];
		}
		*uParam0.f_9 = fVar0;
		*uParam0.f_10 = *uParam0.f_9 / 2f;
	}
	func_545(uParam0);
	*uParam0.f_12 = 0;
	func_538(uParam0);
	*uParam0.f_13 = 0;
}

void func_538(auto uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0.f_13)
	{
		func_539(uParam0, iVar0);
		iVar0++;
	}
}

void func_539(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 7)
	{
		return;
	}
	func_541(uParam0.f_358[iParam1 /*189*/]);
	func_540(uParam0.f_358[iParam1 /*189*/]);
}

void func_540(char* sParam0)
{
	StringCopy(sParam0, "Racer", 32);
	*sParam0.f_8 = 0;
	*sParam0.f_9 = 0;
	*sParam0.f_10 = 0;
	*sParam0.f_11 = -1;
	*sParam0.f_12 = 0;
	*sParam0.f_13 = 0f;
	*sParam0.f_14 = 0f;
	*sParam0.f_15 = 0f;
	*sParam0.f_23 = 13;
	*sParam0.f_16 = {Local_51.f_3};
	*sParam0.f_19 = Local_51.f_6;
	*sParam0.f_20 = Local_51.f_7;
	*sParam0.f_21 = Local_51.f_8;
	*sParam0.f_22 = Local_51.f_9;
}

void func_541(auto uParam0)
{
	func_544(uParam0);
	func_543(uParam0);
	func_542(uParam0);
}

void func_542(auto uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0.f_9))
	{
		if (*uParam0.f_9 != Local_51.f_1)
		{
			if (!(is_entity_dead(*uParam0.f_8, 0) || is_entity_dead(*uParam0.f_9, 0)))
			{
				if (is_ped_in_vehicle(*uParam0.f_8, *uParam0.f_9, 0))
				{
					clear_ped_tasks_immediately(*uParam0.f_8);
				}
			}
			delete_vehicle(uParam0.f_9);
		}
	}
}

void func_543(auto uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0.f_8))
	{
		if (*uParam0.f_8 != PLAYER::PLAYER_PED_ID())
		{
			delete_ped(uParam0.f_8);
		}
	}
}

void func_544(auto uParam0)
{
	func_83(uParam0.f_10);
}

void func_545(auto uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0.f_12)
	{
		func_546(uParam0, iVar0);
		iVar0++;
	}
}

void func_546(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return;
	}
	func_82(uParam0.f_27[iParam1 /*10*/]);
	func_79(uParam0.f_27[iParam1 /*10*/]);
	func_547(uParam0.f_27[iParam1 /*10*/]);
}

void func_547(auto uParam0)
{
	*uParam0 = {Local_51.f_3};
	*uParam0.f_3 = 16f;
	*uParam0.f_7 = 0;
	*uParam0.f_4 = 10f;
}

void func_548(auto uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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
		if (!PED::IS_PED_INJURED(iParam2))
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
		if (!PED::IS_PED_INJURED(iParam2))
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

void func_549()
{
	struct<68> Var0;
	
	Global_1835013 = 0;
	Global_1835013.f_1 = 0;
	Global_1835013.f_2 = 0;
	Global_1835013.f_3 = 0;
	Global_1835013.f_4 = 0;
	func_550(&(Global_1835013.f_73));
	func_550(&(Global_1835013.f_142));
	func_550(&(Global_1835013.f_211));
	func_550(&(Global_1835013.f_280));
	StringCopy(&(Global_1835013.f_349), "", 24);
	StringCopy(&(Global_1835013.f_355), "", 24);
	func_486(&(Global_1835013.f_361));
	Global_1835013.f_374 = -1;
	Global_1835388 = 0;
	Global_1835389 = 0;
	Var0.f_2.f_1 = 4;
	Global_1835013.f_5 = {Var0};
}

void func_550(auto uParam0)
{
	int iVar0;
	
	*uParam0 = 0;
	*uParam0.f_1 = 0;
	*uParam0.f_2 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		*uParam0.f_3[iVar0] = 0f;
		*uParam0.f_36[iVar0] = 0;
		iVar0++;
	}
}

void func_551(int iParam0)
{
	if (iParam0)
	{
		set_fade_in_after_death_arrest(0);
		_disable_automatic_respawn(1);
		set_fade_out_after_death(0);
		func_160(1);
		Global_86869 = 1;
	}
	else
	{
		set_fade_in_after_death_arrest(1);
		_disable_automatic_respawn(0);
		set_fade_out_after_death(1);
		func_160(0);
		Global_86869 = 0;
	}
}

void func_552(auto uParam0)
{
	*uParam0 = unk_0x67D02A194A2FC2BD("COUNTDOWN");
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("HUD_321_GO", true);
}

bool func_553(int iParam0)
{
	if (is_screen_faded_out())
	{
		do_screen_fade_in(iParam0);
	}
	else if (is_screen_faded_in())
	{
		return true;
	}
	return false;
}

void func_554()
{
	int iVar0;
	
	if (!iLocal_2436)
	{
		if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
			{
				iVar0 = get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !is_entity_dead(iVar0, 0))
				{
					if (is_entity_in_air(iVar0))
					{
						if (!is_screen_faded_out())
						{
							trigger_music_event("MGSP_START");
							iLocal_2436 = 1;
						}
					}
				}
			}
		}
	}
}

int func_555(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_556(int iParam0, int iParam1, int iParam2, int iParam3, auto uParam4)
{
	*iParam1 = get_bits_in_range(iParam0, 24, 31);
	*iParam2 = get_bits_in_range(iParam0, 16, 23);
	*iParam3 = get_bits_in_range(iParam0, 8, 15);
	*uParam4 = get_bits_in_range(iParam0, 0, 7);
}

auto func_557(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	get_hud_colour(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return func_558(iVar0, iVar1, iVar2, iVar3);
}

auto func_558(int iParam0, int iParam1, int iParam2, int iParam3)
{
	auto uVar0;
	
	GAMEPLAY::SET_BITs_in_range(&uVar0, 24, 31, iParam0);
	GAMEPLAY::SET_BITs_in_range(&uVar0, 16, 23, iParam1);
	GAMEPLAY::SET_BITs_in_range(&uVar0, 8, 15, iParam2);
	GAMEPLAY::SET_BITs_in_range(&uVar0, 0, 7, iParam3);
	return uVar0;
}

bool func_559()
{
	if (is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
	{
		return false;
	}
	func_569(23, 1);
	func_568(10);
	switch (Local_2351.f_5)
	{
		case 0:
			set_max_wanted_level(false);
			_set_weather_type_over_time("EXTRASUNNY", 10f);
			func_567();
			func_566(2, 0);
			func_566(1, 0);
			func_566(3, 0);
			func_566(4, 0);
			func_566(5, 0);
			func_566(6, 0);
			func_566(7, 0);
			clear_area_of_projectiles(get_entity_coords(PLAYER::PLAYER_PED_ID(), 1), 10f, 0);
			clear_area_of_vehicles(vLocal_5310, 600f, 0, 0, 0, 0, false);
			func_560(&Local_2442, Local_51.f_10);
			enable_special_ability(player_id(), 0);
			set_player_control(player_id(), false, 512);
			if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0) || is_ped_getting_into_a_vehicle(PLAYER::PLAYER_PED_ID()))
			{
				Local_2351.f_5 = 2;
			}
			else
			{
				Local_2351.f_5 = 1;
			}
			break;
		
		case 1:
			if (func_337(1000))
			{
				Local_2351.f_5 = 2;
			}
			break;
		
		case 2:
			request_additional_text("SP_SPR", 3);
			request_streamed_texture_dict("Shared", false);
			while (!has_streamed_texture_dict_loaded("Shared"))
			{
				wait(false);
			}
			AUDIO::REQUEST_SCRIPT_AUDIO_BANK("HUD_AWARDS", false);
			Local_2351.f_5 = 3;
			break;
		
		case 3:
			if (has_additional_text_loaded(3))
			{
				Local_2351.f_5 = 4;
			}
			break;
		
		case 4:
			Local_2351.f_5 = 5;
			func_11(&(Local_2351.f_2));
			break;
		
		case 5:
			if (func_2(&(Local_2351.f_2), 0.5f))
			{
				Local_2351.f_5 = 6;
			}
			break;
		
		case 6:
			if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
			{
				Local_2351.f_5 = 9;
			}
			else
			{
				Local_2351.f_5 = 7;
				func_11(&(Local_2351.f_2));
			}
			break;
		
		case 7:
			if (func_2(&(Local_2351.f_2), 0.5f))
			{
				Local_2351.f_5 = 8;
			}
			break;
		
		case 8:
			if (func_553(5000))
			{
				set_player_control(player_id(), true, 0);
				Local_2351.f_5 = 9;
			}
			break;
		
		case 9:
			func_4(&(Local_2351.f_2));
			return false;
			break;
		
		case 10:
			return false;
			break;
	}
	return true;
}

void func_560(auto uParam0, int iParam1)
{
	Local_51 = 0;
	Local_51.f_1 = 0;
	Local_51.f_2 = 2;
	Local_51.f_3 = {vLocal_2337};
	Local_51.f_6 = 154.8464f;
	Local_51.f_7 = 4;
	Local_51.f_8 = joaat("a_m_y_genstreet_01");
	Local_51.f_9 = joaat("stunt");
	StringCopy(&(Local_51.f_24[0 /*8*/]), "AIRPORT", 32);
	Local_51.f_12[0] = 165f;
	StringCopy(&(Local_51.f_24[1 /*8*/]), "BRIDGEBINGE", 32);
	Local_51.f_12[1] = 80f;
	StringCopy(&(Local_51.f_24[2 /*8*/]), "VINEWOOD", 32);
	Local_51.f_12[2] = 165f;
	StringCopy(&(Local_51.f_24[3 /*8*/]), "BRIDGEWORK", 32);
	Local_51.f_12[3] = 165f;
	StringCopy(&(Local_51.f_24[4 /*8*/]), "ALTITUDE", 32);
	Local_51.f_12[4] = 165f;
	switch (iParam1)
	{
		case 0:
			func_565(&Local_2442);
			break;
		
		case 1:
			func_564(&Local_2442);
			break;
		
		case 2:
			func_563(&Local_2442);
			break;
		
		case 3:
			func_562(&Local_2442);
			break;
		
		case 4:
			func_561(&Local_2442);
			break;
	}
}

void func_561(auto uParam0)
{
}

void func_562(auto uParam0)
{
}

void func_563(auto uParam0)
{
}

void func_564(auto uParam0)
{
}

void func_565(auto uParam0)
{
}

void func_566(int iParam0, int iParam1)
{
	GAMEPLAY::SET_BIT(&Global_25277, iParam0);
	StringCopy(&(Global_25278[iParam0 /*6*/]), get_this_script_name(), 24);
	Global_25333[iParam0] = iParam1;
}

void func_567()
{
	Global_17118.f_5 = 1;
}

void func_568(int iParam0)
{
	func_290();
	Global_69744 = iParam0;
	Global_69743 = 0;
	Global_69746 = 3;
}

void func_569(int iParam0, int iParam1)
{
	if (iParam1)
	{
		GAMEPLAY::SET_BIT(&Global_25364, iParam0);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&Global_25364, iParam0);
	}
}

void func_570()
{
}

void func_571()
{
	hide_hud_and_radar_this_frame();
	func_343();
	func_409();
	func_549();
	func_569(23, 0);
	func_551(0);
	set_max_wanted_level(5);
	clear_focus();
	func_290();
	func_218(0);
	func_236(0);
	clear_weather_type_persist();
	cancel_music_event("MGSP_START");
	cancel_music_event("MGSP_FAIL");
	cancel_music_event("MGTR_COMPLETE");
	trigger_music_event("MGSP_END");
	release_script_audio_bank();
	func_579(2, 0);
	func_579(1, 0);
	func_579(3, 0);
	func_579(4, 0);
	func_579(5, 0);
	func_579(6, 0);
	func_579(7, 0);
	enable_special_ability(player_id(), 1);
	set_all_vehicle_generators_active();
	func_577(&(Local_51.f_118));
	set_player_control(player_id(), true, 0);
	set_player_invincible(player_id(), 0);
	clear_additional_text(3, true);
	set_streamed_texture_dict_as_no_longer_needed("PilotSchool");
	func_575(&Local_2442, 1);
	remove_vehicle_recording(103, "SPRTaxi");
	remove_vehicle_recording(104, "SPRTaxi");
	clear_help(1);
	clear_prints();
	func_574();
	display_hud(true);
	display_radar(true);
	func_233();
	set_cinematic_button_active(true);
	func_572();
	terminate_this_thread();
}

void func_572()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_88544[iVar0 /*17*/] && !Global_88544[iVar0 /*17*/].f_1)
		{
			if (Global_88544[iVar0 /*17*/].f_3 == 0)
			{
				if ((Global_88544[iVar0 /*17*/].f_5 != 88 && Global_88544[iVar0 /*17*/].f_5 != 89) && Global_88544[iVar0 /*17*/].f_5 != 92)
				{
					func_573(Global_88544[iVar0 /*17*/].f_5, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_573(int iParam0, int iParam1)
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

void func_574()
{
	Global_17118.f_5 = 0;
}

void func_575(auto uParam0, int iParam1)
{
	if (iParam1)
	{
		func_537(uParam0);
	}
	else
	{
		func_576(uParam0);
	}
	func_127(0);
	func_27(uParam0.f_17);
	clear_help(1);
	clear_prints();
	if (iLocal_2435)
	{
		func_61("SPR_MOVE_FAIL", 5000, 0);
		iLocal_2435 = 0;
	}
}

void func_576(auto uParam0)
{
}

void func_577(auto uParam0)
{
	func_578(*uParam0);
}

void func_578(auto uParam0)
{
	set_scaleform_movie_as_no_longer_needed(&uParam0);
}

void func_579(int iParam0, int iParam1)
{
	if (GAMEPLAY::IS_BIT_SET(Global_25277, iParam0))
	{
		if (!iParam1)
		{
			GAMEPLAY::CLEAR_BIT(&Global_25277, iParam0);
			StringCopy(&(Global_25278[iParam0 /*6*/]), "NULL", 24);
			Global_25333[iParam0] = iParam1;
		}
	}
}

