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
	float fLocal_21 = 0;
	auto uLocal_22 = 0;
	auto uLocal_23 = 0;
	auto uLocal_24 = 0;
	float fLocal_25 = 0;
	float fLocal_26 = 0;
	auto uLocal_27 = 0;
	int iLocal_28 = 0;
	auto uLocal_29 = 0;
	auto uLocal_30 = 0;
	float fLocal_31 = 0;
	float fLocal_32 = 0;
	float fLocal_33 = 0;
	auto uLocal_34 = 0;
	auto uLocal_35 = 0;
	auto uLocal_36 = 0;
	auto uLocal_37 = 0;
	auto uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	auto uLocal_43 = 0;
	auto uLocal_44 = 0;
	auto uLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	auto uLocal_48 = 0;
	Vector3 vLocal_49 = 0;
	Vector3 vLocal_52 = 0;
	Vector3 vLocal_55 = 0;
	Vector3 vLocal_58 = 0;
	Vector3 vLocal_61 = 0;
	Vector3 vLocal_64 = 0;
	Vector3 vLocal_67 = 0;
	Vector3 vLocal_70 = 0;
	Vector3 vLocal_73 = 0;
	Vector3 vLocal_76 = 0;
	Vector3 vLocal_79 = 0;
	struct<8> Local_82 = 0;
	auto uLocal_90 = 0;
	auto uLocal_91 = 1000;
	auto uLocal_92 = 1000;
	auto uLocal_93 = 0;
	struct<2>[] Local_94 = new struct<2>[3];
	struct<2>[] Local_101 = new struct<2>[3];
	int[] iLocal_108 = new int[2];
	struct<14>[] Local_111 = new struct<14>[9];
	auto uLocal_238 = 16;
	auto uLocal_239 = 0;
	auto uLocal_240 = 0;
	auto uLocal_241 = 0;
	auto uLocal_242 = 0;
	auto uLocal_243 = 0;
	auto uLocal_244 = 0;
	auto uLocal_245 = 0;
	auto uLocal_246 = 0;
	auto uLocal_247 = 0;
	auto uLocal_248 = 0;
	auto uLocal_249 = 0;
	auto uLocal_250 = 0;
	auto uLocal_251 = 0;
	auto uLocal_252 = 0;
	auto uLocal_253 = 0;
	auto uLocal_254 = 0;
	auto uLocal_255 = 0;
	auto uLocal_256 = 0;
	auto uLocal_257 = 0;
	auto uLocal_258 = 0;
	auto uLocal_259 = 0;
	auto uLocal_260 = 0;
	auto uLocal_261 = 0;
	auto uLocal_262 = 0;
	auto uLocal_263 = 0;
	auto uLocal_264 = 0;
	auto uLocal_265 = 0;
	auto uLocal_266 = 0;
	auto uLocal_267 = 0;
	auto uLocal_268 = 0;
	auto uLocal_269 = 0;
	auto uLocal_270 = 0;
	auto uLocal_271 = 0;
	auto uLocal_272 = 0;
	auto uLocal_273 = 0;
	auto uLocal_274 = 0;
	auto uLocal_275 = 0;
	auto uLocal_276 = 0;
	auto uLocal_277 = 0;
	auto uLocal_278 = 0;
	auto uLocal_279 = 0;
	auto uLocal_280 = 0;
	auto uLocal_281 = 0;
	auto uLocal_282 = 0;
	auto uLocal_283 = 0;
	auto uLocal_284 = 0;
	auto uLocal_285 = 0;
	auto uLocal_286 = 0;
	auto uLocal_287 = 0;
	auto uLocal_288 = 0;
	auto uLocal_289 = 0;
	auto uLocal_290 = 0;
	auto uLocal_291 = 0;
	auto uLocal_292 = 0;
	auto uLocal_293 = 0;
	auto uLocal_294 = 0;
	auto uLocal_295 = 0;
	auto uLocal_296 = 0;
	auto uLocal_297 = 0;
	auto uLocal_298 = 0;
	auto uLocal_299 = 0;
	auto uLocal_300 = 0;
	auto uLocal_301 = 0;
	auto uLocal_302 = 0;
	auto uLocal_303 = 0;
	auto uLocal_304 = 0;
	auto uLocal_305 = 0;
	auto uLocal_306 = 0;
	auto uLocal_307 = 0;
	auto uLocal_308 = 0;
	auto uLocal_309 = 0;
	auto uLocal_310 = 0;
	auto uLocal_311 = 0;
	auto uLocal_312 = 0;
	auto uLocal_313 = 0;
	auto uLocal_314 = 0;
	auto uLocal_315 = 0;
	auto uLocal_316 = 0;
	auto uLocal_317 = 0;
	auto uLocal_318 = 0;
	auto uLocal_319 = 0;
	auto uLocal_320 = 0;
	auto uLocal_321 = 0;
	auto uLocal_322 = 0;
	auto uLocal_323 = 0;
	auto uLocal_324 = 0;
	auto uLocal_325 = 0;
	auto uLocal_326 = 0;
	auto uLocal_327 = 0;
	auto uLocal_328 = 0;
	auto uLocal_329 = 0;
	auto uLocal_330 = 0;
	auto uLocal_331 = 0;
	auto uLocal_332 = 0;
	auto uLocal_333 = 0;
	auto uLocal_334 = 0;
	auto uLocal_335 = 0;
	auto uLocal_336 = 0;
	auto uLocal_337 = 0;
	auto uLocal_338 = 0;
	auto uLocal_339 = 0;
	auto uLocal_340 = 0;
	auto uLocal_341 = 0;
	auto uLocal_342 = 0;
	auto uLocal_343 = 0;
	auto uLocal_344 = 0;
	auto uLocal_345 = 0;
	auto uLocal_346 = 0;
	auto uLocal_347 = 0;
	auto uLocal_348 = 0;
	auto uLocal_349 = 0;
	auto uLocal_350 = 0;
	auto uLocal_351 = 0;
	auto uLocal_352 = 0;
	auto uLocal_353 = 0;
	auto uLocal_354 = 0;
	auto uLocal_355 = 0;
	auto uLocal_356 = 0;
	auto uLocal_357 = 0;
	auto uLocal_358 = 0;
	auto uLocal_359 = 0;
	auto uLocal_360 = 0;
	auto uLocal_361 = 0;
	auto uLocal_362 = 0;
	auto uLocal_363 = 0;
	auto uLocal_364 = 0;
	auto uLocal_365 = 0;
	auto uLocal_366 = 0;
	auto uLocal_367 = 0;
	auto uLocal_368 = 0;
	auto uLocal_369 = 0;
	auto uLocal_370 = 0;
	auto uLocal_371 = 0;
	auto uLocal_372 = 0;
	auto uLocal_373 = 0;
	auto uLocal_374 = 0;
	auto uLocal_375 = 0;
	auto uLocal_376 = 0;
	auto uLocal_377 = 0;
	auto uLocal_378 = 0;
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
	auto uLocal_390 = 0;
	auto uLocal_391 = 0;
	auto uLocal_392 = 0;
	auto uLocal_393 = 0;
	auto uLocal_394 = 0;
	auto uLocal_395 = 0;
	auto uLocal_396 = 0;
	auto uLocal_397 = 0;
	auto uLocal_398 = 0;
	auto uLocal_399 = 0;
	auto uLocal_400 = 0;
	auto uLocal_401 = 0;
	auto uLocal_402 = 0;
	struct<6> Local_403 = 0;
	auto uLocal_409 = 0;
	auto uLocal_410 = 1092616192;
	auto uLocal_411 = 1101004800;
	auto uLocal_412 = 0;
	auto uLocal_413 = 0;
	auto uLocal_414 = 0;
	auto uLocal_415 = 0;
	auto uLocal_416 = 0;
	auto uLocal_417 = 0;
	auto uLocal_418 = 0;
	auto uLocal_419 = 0;
	auto uLocal_420 = 3;
	auto uLocal_421 = 0;
	auto uLocal_422 = 0;
	auto uLocal_423 = 0;
	auto uLocal_424 = 0;
	auto uLocal_425 = 0;
	auto uLocal_426 = 0;
	auto uLocal_427 = 0;
	int iLocal_428 = 0;
	var[] uLocal_429 = new var[3];
	int iLocal_433 = 0;
	int iLocal_434 = 0;
	int iLocal_435 = 0;
	int iLocal_436 = 0;
	int iLocal_437 = 0;
	float fLocal_438 = 0;
	Vector3 fLocal_439 = 0;
	float fLocal_440 = 0;
	float fLocal_441 = 0;
	int iLocal_442 = 0;
	int iLocal_443 = 0;
	int iLocal_444 = 0;
	int iLocal_445 = 0;
	int iLocal_446 = 0;
	int iLocal_447 = 0;
	auto uLocal_448 = 0;
	auto uLocal_449 = 0;
	int iLocal_450 = 0;
	int iLocal_451 = 0;
	int iLocal_452 = 0;
	int iLocal_453 = 0;
	int iLocal_454 = 0;
	int iLocal_455 = 0;
	int iLocal_456 = 0;
	int iLocal_457 = 0;
	int iLocal_458 = 0;
	int iLocal_459 = 0;
	Vector3 vLocal_460 = 0;
	float fLocal_463 = 0;
	float fLocal_464 = 0;
	float fLocal_465 = 0;
	int iLocal_466 = 0;
	int iLocal_467 = 0;
	int iLocal_468 = 0;
	int iLocal_469 = 0;
	int iLocal_470 = 0;
	int iLocal_471 = 0;
	int iLocal_472 = 0;
	int iLocal_473 = 0;
	int iLocal_474 = 0;
	char[64] cLocal_475 = 0;
	char* sLocal_491 = 0;
	int iLocal_492 = 0;
	int iLocal_493 = 0;
	auto uLocal_494 = 30;
	auto uLocal_495 = 0;
	auto uLocal_496 = 0;
	auto uLocal_497 = 0;
	auto uLocal_498 = 0;
	auto uLocal_499 = 0;
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
	auto uLocal_517 = 0;
	auto uLocal_518 = 0;
	auto uLocal_519 = 0;
	auto uLocal_520 = 0;
	auto uLocal_521 = 0;
	auto uLocal_522 = 0;
	auto uLocal_523 = 0;
	auto uLocal_524 = 0;
	auto uLocal_525 = 0;
	auto uLocal_526 = 0;
	auto uLocal_527 = 0;
	auto uLocal_528 = 0;
	auto uLocal_529 = 0;
	auto uLocal_530 = 0;
	auto uLocal_531 = 0;
	auto uLocal_532 = 0;
	auto uLocal_533 = 0;
	auto uLocal_534 = 0;
	auto uLocal_535 = 0;
	auto uLocal_536 = 0;
	auto uLocal_537 = 0;
	auto uLocal_538 = 0;
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
	auto uLocal_553 = 0;
	auto uLocal_554 = 0;
	auto uLocal_555 = 0;
	auto uLocal_556 = 0;
	auto uLocal_557 = 0;
	auto uLocal_558 = 0;
	auto uLocal_559 = 0;
	auto uLocal_560 = 0;
	auto uLocal_561 = 0;
	auto uLocal_562 = 0;
	auto uLocal_563 = 0;
	auto uLocal_564 = 0;
	auto uLocal_565 = 0;
	auto uLocal_566 = 0;
	auto uLocal_567 = 0;
	auto uLocal_568 = 0;
	auto uLocal_569 = 0;
	auto uLocal_570 = 0;
	auto uLocal_571 = 0;
	auto uLocal_572 = 0;
	auto uLocal_573 = 0;
	auto uLocal_574 = 0;
	auto uLocal_575 = 0;
	auto uLocal_576 = 0;
	auto uLocal_577 = 0;
	auto uLocal_578 = 0;
	auto uLocal_579 = 0;
	auto uLocal_580 = 0;
	auto uLocal_581 = 0;
	auto uLocal_582 = 0;
	auto uLocal_583 = 0;
	auto uLocal_584 = 0;
	auto uLocal_585 = 0;
	auto uLocal_586 = 0;
	auto uLocal_587 = 0;
	auto uLocal_588 = 0;
	auto uLocal_589 = 0;
	auto uLocal_590 = 0;
	auto uLocal_591 = 0;
	auto uLocal_592 = 0;
	auto uLocal_593 = 0;
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
	auto uLocal_645 = 10;
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
	auto uLocal_696 = 10;
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
	auto uLocal_767 = 20;
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
	auto uLocal_868 = 20;
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
	auto uLocal_909 = 0;
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
	auto uLocal_969 = 30;
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
	auto uLocal_1013 = 0;
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
	auto uLocal_1150 = 5;
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
	auto uLocal_1181 = 7;
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
	auto uLocal_1231 = 5;
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
	auto uLocal_1257 = 3;
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
	auto uLocal_1273 = 15;
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
	auto uLocal_1368 = 10;
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
	auto uLocal_1419 = 5;
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
	auto uLocal_1445 = 5;
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
	int iLocal_1474 = 0;
	int iLocal_1475 = 0;
	int iLocal_1476 = 0;
	int iLocal_1477 = 0;
	int iLocal_1478 = 0;
	int iLocal_1479 = 0;
	int iLocal_1480 = 0;
	float[] fLocal_1481 = new float[3];
	int iLocal_1485 = 0;
	int iLocal_1486 = 0;
	int iLocal_1487 = 0;
#endregion

void main()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
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
	vLocal_49 = {1358.197f, 3618.234f, 33.89066f};
	vLocal_52 = {0f, 5f, -0.5f};
	vLocal_55 = {4f, 3f, -0.5f};
	vLocal_58 = {4f, -3f, -0.5f};
	vLocal_61 = {0f, -5f, -0.5f};
	vLocal_64 = {-4f, -3f, -0.5f};
	vLocal_67 = {-4f, 3f, -0.5f};
	vLocal_70 = {0f, 2f, -0.5f};
	vLocal_73 = {4f, 0f, -0.5f};
	vLocal_76 = {0f, -2.2f, -0.5f};
	vLocal_79 = {-4f, 0f, -0.5f};
	iLocal_451 = joaat("weapon_assaultrifle");
	vLocal_460 = {0f, 0f, 0f};
	iLocal_466 = 30000;
	iLocal_470 = true;
	StringCopy(&cLocal_475, "Rural_prep_trigger1", 64);
	sLocal_491 = "rural_prep_park";
	if (has_force_cleanup_occurred(3))
	{
		func_315();
		func_311();
	}
	set_mission_flag(1);
	func_252();
	set_this_script_can_remove_blips_created_by_any_script(1);
	while (true)
	{
		_0x208784099002BC30("M_ThePaletoScorePrep", 0);
		func_251(&uLocal_494);
		if (((((iLocal_1475 == 0 && does_entity_exist(Local_94[0 /*2*/])) && is_vehicle_driveable(Local_94[0 /*2*/], 0)) && !is_ped_injured(player_ped_id())) && !is_ped_in_vehicle(player_ped_id(), Local_94[0 /*2*/], 0)) && vdist2(get_entity_coords(player_ped_id(), 1), get_entity_coords(Local_94[0 /*2*/], 1)) < 5625f)
		{
			iVar0 = false;
			if ((!Local_82.f_7 && is_ped_on_foot(player_ped_id())) && is_ped_armed(player_ped_id(), 6))
			{
				iVar1 = false;
				get_current_ped_weapon(player_ped_id(), &iVar1, 1);
				if (iVar1 != joaat("weapon_unarmed"))
				{
					iVar2 = 0;
					get_ammo_in_clip(player_ped_id(), iVar1, &iVar2);
					if (iVar2 < get_max_ammo_in_clip(player_ped_id(), iVar1, 1))
					{
						iVar0 = true;
					}
				}
			}
			if (!iVar0)
			{
				func_231(&Local_82, Local_94[0 /*2*/], 0, 0, 1, 1, 1);
			}
		}
		else
		{
			func_229(&Local_82, 0, 0);
		}
		func_228();
		func_195();
		if (!iLocal_1479)
		{
			func_141();
			func_1();
		}
		wait(false);
	}
}

void func_1()
{
	switch (iLocal_1475)
	{
		case 0:
			func_139();
			break;
		
		case 1:
			func_105();
			break;
		
		case 2:
			func_8();
			break;
		
		case 3:
			func_2();
			break;
	}
}

void func_2()
{
	switch (iLocal_1476)
	{
		case 0:
			if (is_screen_faded_out())
			{
				do_screen_fade_in(800);
			}
			set_gameplay_cam_relative_heading(0);
			iLocal_1476++;
			break;
		
		case 1:
			func_3();
			break;
	}
}

void func_3()
{
	if (is_vehicle_driveable(Local_94[0 /*2*/], 0))
	{
		decor_set_bool(Local_94[0 /*2*/], "IgnoredByQuickSave", 1);
	}
	func_4(0, 0);
	func_311();
}

void func_4(int iParam0, int iParam1)
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
		if ((func_7(0) && Global_69735.f_1 == 1) && func_6(Global_69735))
		{
		}
		else
		{
			Global_55749 = 1;
		}
	}
	if (Global_101154.f_7775 || func_7(0))
	{
		iVar0 = func_5();
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

int func_5()
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

bool func_6(int iParam0)
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

int func_7(int iParam0)
{
	if (!iParam0 && _get_number_of_instances_of_streamed_script(joaat("benchmark")) > 0)
	{
		return true;
	}
	return is_bit_set(Global_69737, false);
}

void func_8()
{
	int iVar0;
	
	if (!iLocal_442)
	{
		if ((does_entity_exist(iLocal_428) && is_vehicle_driveable(iLocal_428, 0)) && does_entity_belong_to_this_script(iLocal_428, 1))
		{
			func_83(iLocal_428, 0, 145);
			set_vehicle_as_no_longer_needed(&iLocal_428);
			iLocal_442 = 1;
		}
	}
	_0x07FB139B592FA687(-94.3112f, 3003.016f, 2711.273f, 4857.763f);
	switch (iLocal_1476)
	{
		case 0:
			if (is_screen_faded_out())
			{
				do_screen_fade_in(800);
			}
			func_82(724, 0);
			trigger_music_event("RHP1_TRUCK");
			_0x293220DA1B46CEBC(3f, 5f, 4);
			iLocal_1476++;
			break;
		
		case 1:
			if (func_39(&Local_403, vLocal_49, 0.1f, 0.1f, 2f, 1, Local_94[0 /*2*/], "RHP_RTN", "", "RHP_BK", 1, 0, 1, -1) || (does_blip_exist(Local_403.f_5) && is_entity_in_angled_area(Local_94[0 /*2*/], 1359.476f, 3614.326f, 36.87141f, 1356.748f, 3621.605f, 33.72731f, 5f, 0, true, 0)))
			{
				func_38(Local_94[0 /*2*/], 10.5f, -1, 1056964608, 0, 1, 0);
				set_vehicle_is_considered_by_player(Local_94[0 /*2*/], 0);
				func_33(&Local_403, 1, 0);
				func_32(1, 724);
				iLocal_452 = false;
				iLocal_453 = 0;
				iLocal_1476++;
			}
			break;
		
		case 2:
			iLocal_457 = true;
			iVar0 = 0;
			while (iVar0 <= 9 - 1)
			{
				if (func_31(Local_111[iVar0 /*14*/]))
				{
					if (get_distance_between_coords(get_entity_coords(Local_111[iVar0 /*14*/], 1), get_entity_coords(player_ped_id(), 1), 1) < 400f)
					{
						if (!is_ped_in_combat(Local_111[iVar0 /*14*/], false))
						{
							task_combat_ped(Local_111[iVar0 /*14*/], player_ped_id(), 0, 16);
						}
						iLocal_457 = false;
					}
					else
					{
						set_ped_as_no_longer_needed(&(Local_111[iVar0 /*14*/]));
					}
				}
				iVar0++;
			}
			if (iLocal_457)
			{
				task_clear_look_at(player_ped_id());
				iLocal_1476++;
			}
			else if (!iLocal_452)
			{
				clear_prints();
				_0x293220DA1B46CEBC(3f, 5f, 4);
				func_30("RHP_KILL", 7500, 1);
				iLocal_452 = true;
			}
			break;
		
		case 3:
			if (!is_ped_in_vehicle(player_ped_id(), Local_94[0 /*2*/], 0))
			{
				if (is_message_being_displayed())
				{
					clear_prints();
				}
				if (func_29(player_ped_id()) == 2)
				{
					func_28(&uLocal_238, 0, player_ped_id(), "Trevor", 0, 1);
					if (iLocal_452)
					{
						if (func_12(&uLocal_238, "RHPAUD", "RHP_END", "RHP_END_3", 7, 0, 0))
						{
							iLocal_1476 = 4;
						}
					}
					else if (func_12(&uLocal_238, "RHPAUD", "RHP_END", "RHP_END_3", 7, 0, 0))
					{
						iLocal_1476 = 4;
					}
				}
				else if (func_29(player_ped_id()) == 0)
				{
					func_28(&uLocal_238, 0, player_ped_id(), "Michael", 0, 1);
					if (iLocal_452)
					{
						if (func_12(&uLocal_238, "RHPAUD", "RHP_END", "RHP_END_1", 7, 0, 0))
						{
							iLocal_1476 = 4;
						}
					}
					else if (func_12(&uLocal_238, "RHPAUD", "RHP_END", "RHP_END_1", 7, 0, 0))
					{
						iLocal_1476 = 4;
					}
				}
				if (iLocal_1476 == 4)
				{
					settimera(false);
				}
			}
			else if (!iLocal_453 && func_10())
			{
				_0x293220DA1B46CEBC(3f, 7f, 4);
				trigger_music_event("RHP1_END");
				func_30("RHP_EXIT", 7500, 1);
				iLocal_453 = 1;
			}
			break;
		
		case 4:
			if (!func_9() || timera() > 6000)
			{
				func_3();
			}
			break;
	}
}

bool func_9()
{
	if (Global_15712 != 0 || is_scripted_conversation_ongoing())
	{
		return true;
	}
	return false;
}

bool func_10()
{
	if (is_message_being_displayed())
	{
		return false;
	}
	if (is_subtitle_preference_switched_on())
	{
		if (func_9() && !func_11())
		{
			return false;
		}
	}
	return true;
}

bool func_11()
{
	if (Global_16723 == 1)
	{
		return true;
	}
	return false;
}

int func_12(auto uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_27(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_13(sParam2, iParam4, 0);
}

bool func_13(char* sParam0, int iParam1, int iParam2)
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
					func_26();
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
		if (func_25(8, -1))
		{
			return false;
		}
		Global_15788 = {Global_15782};
		func_24();
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
				func_18();
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
				if (func_17())
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
			if (func_16())
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
			func_15();
			Global_15722 = iParam2;
		}
		Global_15714 = iParam1;
		StringCopy(&Global_15331, sParam0, 24);
		Global_14578 = 0;
		func_14();
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
		func_26();
	}
	return false;
}

void func_14()
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

void func_15()
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

bool func_16()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return true;
	}
	return false;
}

bool func_17()
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

void func_18()
{
	if (func_23(14))
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
		Global_14413 = func_19();
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

auto func_19()
{
	func_20();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_20()
{
	int iVar0;
	
	if (does_entity_exist(player_ped_id()))
	{
		if (func_22(Global_101154.f_1826.f_539.f_3549) != get_entity_model(player_ped_id()))
		{
			iVar0 = func_29(player_ped_id());
			if (func_21(iVar0) && (!func_23(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_21(Global_101154.f_1826.f_539.f_3549))
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

int func_21(int iParam0)
{
	return iParam0 < 3;
}

int func_22(int iParam0)
{
	if (func_21(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_23(int iParam0)
{
	return Global_35711 == iParam0;
}

void func_24()
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

int func_25(int iParam0, int iParam1)
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

void func_26()
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

void func_27(auto uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_28(auto uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_29(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (does_entity_exist(iParam0))
	{
		iVar1 = get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_22(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

void func_30(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	_set_text_entry_2(sParam0);
	_draw_subtitle_timed(iParam1, 1);
}

bool func_31(int iParam0)
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
	}
	return false;
}

void func_32(int iParam0, int iParam1)
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

void func_33(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (is_bit_set(*iParam0.f_13, 30))
	{
		iParam1 = true;
	}
	func_37(iParam0);
	iVar0 = false;
	while (iVar0 < 3)
	{
		if (does_blip_exist(*iParam0.f_1[iVar0]))
		{
			remove_blip(iParam0.f_1[iVar0]);
		}
		func_36(iVar0, iParam0);
		func_35(iVar0, iParam0);
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
				if (is_ped_group_member(*iParam0.f_17[iVar0], func_34()) && *iParam0.f_17[iVar0] != player_ped_id())
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

int func_34()
{
	return get_player_group(get_player_index());
}

void func_35(int iParam0, auto uParam1)
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

void func_36(int iParam0, auto uParam1)
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

void func_37(auto uParam0)
{
	if (does_blip_exist(*uParam0.f_5))
	{
		remove_blip(uParam0.f_5);
	}
}

bool func_38(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, int iParam5, int iParam6)
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

int func_39(int iParam0, Vector3 vParam1, Vector3 vParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	return func_40(iParam0, vParam1, vParam4, func_81(), func_81(), iParam7, 5, 0, 0, 0, iParam8, sParam9, func_80(), func_80(), func_80(), func_80(), sParam10, 0, iParam12, sParam11, 0, iParam13, iParam14, iParam15, 0, 0, 0, 1, 1065353216);
}

bool func_40(int iParam0, Vector3 vParam1, Vector3 vParam2, Vector3 vParam3, Vector3 vParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, char* sParam11, char* sParam12, char* sParam13, char* sParam14, char* sParam15, char* sParam16, int iParam17, int iParam18, char* sParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, int iParam26, int iParam27, Vector3 fParam28)
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
	func_79(iParam0);
	func_78(iParam0);
	func_77();
	if (func_61(iParam0, *iParam0.f_17[0], *iParam0.f_17[1], *iParam0.f_17[2], sParam20, sParam21, sParam22, sParam23, *iParam0.f_8, iParam25, iParam18, 0, 0, iParam32, iParam33, iParam34, iParam14, iParam26))
	{
		func_60(sParam20);
		func_60(sParam21);
		func_60(sParam22);
		func_60(sParam23);
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
				if (func_58(iParam0, iParam29))
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
				func_60(sParam24);
				func_60(sParam27);
				func_60("MORE_SEATS");
				if (iParam26 && is_player_wanted_level_greater(player_id(), 0))
				{
					if (does_blip_exist(*iParam0.f_5))
					{
						remove_blip(iParam0.f_5);
						func_60(sParam19);
					}
					if (does_blip_exist(*iParam0))
					{
						remove_blip(iParam0);
					}
					if ((!func_56(iParam0, 1) && !func_55(iParam0)) && !is_bit_set(*iParam0.f_13, false))
					{
						if (iParam30)
						{
							func_54(iParam0, "LOSE_WANTED", 0);
							if (!is_ped_injured(*iParam0.f_17[0]))
							{
								func_52(*iParam0.f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
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
						func_60("LOSE_WANTED");
						clear_bit(iParam0.f_13, false);
						set_bit(iParam0.f_13, true);
					}
					if (is_bit_set(*iParam0.f_13, true))
					{
						if (!func_56(iParam0, 1))
						{
							if (!is_ped_injured(*iParam0.f_17[0]))
							{
								func_52(*iParam0.f_17[0], "LOSE_WANTED_LEVEL", 3);
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
						*iParam0.f_5 = func_51(vVar3, 0);
						if (!iParam31 == -1)
						{
							set_blip_sprite(*iParam0.f_5, iParam31);
						}
						if (iParam35)
						{
							func_50(*iParam0.f_5, iParam0);
						}
					}
					else if (!func_49(vVar3, get_blip_coords(*iParam0.f_5), 0.1f, 0))
					{
						set_blip_coords(*iParam0.f_5, vVar3);
						if (iParam35)
						{
							func_50(*iParam0.f_5, iParam0);
						}
					}
					if (!func_56(iParam0, 2))
					{
						if (!is_bit_set(*iParam0.f_13, 2))
						{
							func_54(iParam0, sParam19, 0);
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
								else if (!is_ped_group_member(*iParam0.f_17[iVar2], func_34()) || !func_47(*iParam0.f_17[iVar2], 1))
								{
									iVar1 = false;
								}
							}
							iVar2++;
						}
						if (iVar1)
						{
							if (func_44(iParam0))
							{
								func_60(sParam19);
								func_60(sParam24);
								func_60(sParam20);
								func_60(sParam21);
								func_60(sParam22);
								func_60(sParam23);
								func_60("LOSE_WANTED");
								func_60("MORE_SEATS");
								func_60(sParam27);
								func_33(iParam0, 1, 0);
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
					func_60(sParam24);
					func_60(sParam27);
					if (does_blip_exist(*iParam0.f_5) || does_blip_exist(*iParam0))
					{
						remove_blip(iParam0.f_5);
						remove_blip(iParam0);
						func_60(sParam19);
					}
					if ((!func_56(iParam0, 1) && !func_55(iParam0)) && !is_bit_set(*iParam0.f_13, false))
					{
						if (iParam30)
						{
							func_54(iParam0, "LOSE_WANTED", 0);
							if (!is_ped_injured(*iParam0.f_17[0]))
							{
								func_52(*iParam0.f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
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
						func_60("LOSE_WANTED");
						clear_bit(iParam0.f_13, false);
						set_bit(iParam0.f_13, true);
					}
					if (is_bit_set(*iParam0.f_13, true))
					{
						if (!func_56(iParam0, 1))
						{
							if (!is_ped_injured(*iParam0.f_17[0]))
							{
								func_52(*iParam0.f_17[0], "LOSE_WANTED_LEVEL", 3);
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
								func_60(sParam19);
							}
							*iParam0 = func_41(iParam18, 0, 0);
							set_blip_display(*iParam0, 2);
							if (!is_bit_set(*iParam0.f_13, 4))
							{
								func_50(*iParam0, iParam0);
							}
						}
						if (!func_56(iParam0, 2))
						{
							if (!is_bit_set(*iParam0.f_13, 3))
							{
								func_54(iParam0, sParam24, 0);
								set_bit(iParam0.f_13, 3);
								clear_bit(iParam0.f_13, 4);
							}
							else if (is_bit_set(*iParam0.f_13, 9))
							{
								if (!is_string_null(sParam27))
								{
									if (!is_bit_set(*iParam0.f_13, 4))
									{
										func_54(iParam0, sParam27, 0);
										set_bit(iParam0.f_13, 4);
									}
								}
								else if (!is_bit_set(*iParam0.f_13, 4))
								{
									func_54(iParam0, sParam24, 0);
									set_bit(iParam0.f_13, 4);
								}
								if (!is_bit_set(*iParam0.f_13, 23))
								{
									if (!is_ped_injured(*iParam0.f_17[0]))
									{
										func_52(*iParam0.f_17[0], "GET_IN_CAR", 3);
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
					func_60(sParam19);
				}
				if (iParam14 == 4 || iParam14 == 5)
				{
					if (iParam29 > 0)
					{
						if (!func_56(iParam0, 2))
						{
							if (is_ped_sitting_in_any_vehicle(player_ped_id()))
							{
								if (!is_bit_set(*iParam0.f_13, 13))
								{
									iVar8 = false;
									iVar9 = false;
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
										func_52(*iParam0.f_17[iVar9], "NEED_A_BIGGER_VEHICLE", 3);
									}
									func_54(iParam0, "MORE_SEATS", 0);
									set_bit(iParam0.f_13, 13);
								}
							}
							else if (!is_bit_set(*iParam0.f_13, 3))
							{
								func_54(iParam0, sParam24, 0);
								set_bit(iParam0.f_13, 3);
								clear_bit(iParam0.f_13, 4);
							}
							else if (!is_bit_set(*iParam0.f_13, 4))
							{
								if (is_bit_set(*iParam0.f_13, 9))
								{
									func_54(iParam0, sParam27, 0);
									set_bit(iParam0.f_13, 4);
								}
							}
						}
					}
					else if (!func_56(iParam0, 2))
					{
						if (!is_bit_set(*iParam0.f_13, 3))
						{
							func_54(iParam0, sParam24, 0);
							set_bit(iParam0.f_13, 3);
							clear_bit(iParam0.f_13, 4);
						}
						else if (is_bit_set(*iParam0.f_13, 9))
						{
							if (!is_string_null(sParam27))
							{
								if (!is_bit_set(*iParam0.f_13, 4))
								{
									func_54(iParam0, sParam27, 0);
									set_bit(iParam0.f_13, 4);
								}
							}
							else if (!is_bit_set(*iParam0.f_13, 4))
							{
								func_54(iParam0, sParam24, 0);
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
		func_60(sParam19);
		func_60(sParam24);
		func_60(sParam27);
		func_60(sParam24);
		func_60("LOSE_WANTED");
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

int func_41(int iParam0, int iParam1, int iParam2)
{
	return func_42(iParam0, !iParam1, iParam2);
}

int func_42(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	iVar0 = add_blip_for_entity(iParam0);
	if (is_entity_a_vehicle(iParam0))
	{
		set_blip_scale(iVar0, func_43(network_is_game_in_progress(), 1f, 1f));
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
		set_blip_scale(iVar0, func_43(network_is_game_in_progress(), 0.7f, 0.7f));
		set_blip_as_friendly(iVar0, iParam1);
	}
	else if (is_entity_an_object(iParam0))
	{
		set_blip_scale(iVar0, func_43(network_is_game_in_progress(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_43(int iParam0, float fParam1, float fParam2)
{
	if (iParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_44(int iParam0)
{
	if (is_bit_set(*iParam0.f_13, 12))
	{
		if (func_46(player_ped_id()))
		{
			if (func_45(1, 0, 1) || is_bit_set(*iParam0.f_13, 7))
			{
				return true;
			}
		}
	}
	else if (func_45(1, 0, 1) || is_bit_set(*iParam0.f_13, 7))
	{
		return true;
	}
	return false;
}

bool func_45(int iParam0, int iParam1, int iParam2)
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

bool func_46(int iParam0)
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

bool func_47(int iParam0, int iParam1)
{
	if (!is_ped_injured(iParam0))
	{
		if (is_ped_sitting_in_any_vehicle(player_ped_id()) && iParam1)
		{
			if (func_48(player_ped_id(), iParam0))
			{
				set_group_separation_range(func_34(), 50f);
				return true;
			}
		}
		else if (is_ped_group_member(iParam0, func_34()))
		{
			set_group_separation_range(func_34(), 50f);
			return true;
		}
	}
	else
	{
		return true;
	}
	return false;
}

bool func_48(int iParam0, int iParam1)
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

bool func_49(Vector3 vParam0, Vector3 vParam1, float fParam2, int iParam3)
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

void func_50(int iParam0, int iParam1)
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

int func_51(Vector3 vParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = add_blip_for_coord(vParam0);
	set_blip_scale(iVar0, func_43(network_is_game_in_progress(), 1f, 1f));
	set_blip_route(iVar0, iParam3);
	return iVar0;
}

void func_52(int iParam0, char* sParam1, int iParam2)
{
	_play_ambient_speech1(iParam0, sParam1, func_53(iParam2), 1);
}

int func_53(int iParam0)
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

void func_54(int iParam0, char* sParam1, int iParam2)
{
	if (!iParam2)
	{
		if (!is_string_null(sParam1))
		{
			if (!are_strings_equal(sParam1, ""))
			{
				func_30(sParam1, 7500, 1);
			}
		}
	}
	*iParam0.f_10 = get_game_timer();
}

bool func_55(int iParam0)
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

bool func_56(int iParam0, int iParam1)
{
	if (iParam1 != 1 || is_subtitle_preference_switched_on())
	{
		if (is_message_being_displayed())
		{
			return true;
		}
		if (func_57(iParam0))
		{
			return true;
		}
	}
	if (iParam1 != 2 || is_subtitle_preference_switched_on())
	{
		if (func_9() && !func_11())
		{
			return true;
		}
	}
	return false;
}

bool func_57(auto uParam0)
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

bool func_58(auto uParam0, int iParam1)
{
	int iVar0;
	
	if (is_ped_in_any_vehicle(player_ped_id(), 0))
	{
		iVar0 = get_vehicle_ped_is_in(player_ped_id(), 0);
		if (func_59(iVar0, uParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

bool func_59(int iParam0, auto uParam1, int iParam2)
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

void func_60(char* sParam0)
{
	if (!is_string_null(sParam0))
	{
		clear_this_print(sParam0);
	}
}

bool func_61(auto uParam0, auto uParam1, auto uParam2, auto uParam3, auto uParam4, auto uParam5, auto uParam6, char* sParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, auto uParam13, auto uParam14, auto uParam15, int iParam16, int iParam17)
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
						if (func_59(*uParam0.f_21, uParam0, iVar3))
						{
							iVar0 = false;
							while (iVar0 < 3)
							{
								if (!is_ped_injured(*uParam0.f_17[iVar0]))
								{
									set_ped_max_move_blend_ratio(*uParam0.f_17[iVar0], 1f);
									if (is_ped_group_member(*uParam0.f_17[iVar0], func_34()))
									{
										remove_ped_from_group(*uParam0.f_17[iVar0]);
									}
									if (get_script_task_status(*uParam0.f_17[iVar0], -1794415470) == 7 && !func_76(*uParam0.f_17[iVar0], *uParam0.f_21))
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
					if (!is_ped_group_member(*uParam0.f_17[iVar0], func_34()))
					{
						if (func_74(uParam0, *uParam0.f_17[iVar0], fParam8, 1))
						{
							set_ped_as_group_member(*uParam0.f_17[iVar0], func_34());
						}
					}
				}
				iVar0++;
			}
		}
	}
	if (!is_bit_set(*uParam0.f_13, 26))
	{
		if ((!func_73(uParam0) && is_ped_sitting_in_any_vehicle(player_ped_id())) && !does_entity_exist(iParam10))
		{
			iVar13 = get_vehicle_ped_is_in(player_ped_id(), 0);
			if (is_vehicle_driveable(iVar13, 0))
			{
				if (!is_bit_set(*uParam0.f_13, 13))
				{
					if (iParam16 == 4 || iParam16 == 5)
					{
					}
					if (!func_56(uParam0, 2))
					{
						iVar26 = false;
						iVar27 = false;
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
							func_52(*uParam0.f_17[iVar27], "NEED_A_BIGGER_VEHICLE", 3);
						}
						func_54(uParam0, "MORE_SEATS", 0);
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
			func_60("MORE_SEATS");
		}
		if (!does_entity_exist(iParam10))
		{
			if ((!is_ped_injured(*uParam0.f_17[0]) || !is_ped_injured(*uParam0.f_17[1])) || !is_ped_injured(*uParam0.f_17[2]))
			{
				if (!is_bit_set(*uParam0.f_13, 31))
				{
					if (is_ped_sitting_in_any_vehicle(player_ped_id()) && !func_56(uParam0, 2))
					{
						iVar13 = get_vehicle_ped_is_in(player_ped_id(), 0);
						if (func_72(iVar13, uParam0))
						{
							func_54(uParam0, "CMN_VEHSUIT", 0);
							set_bit(uParam0.f_13, 31);
						}
					}
				}
				else if (!is_ped_sitting_in_any_vehicle(player_ped_id()))
				{
					clear_bit(uParam0.f_13, 31);
					func_60("CMN_VEHSUIT");
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
					if (!is_ped_group_member(*uParam0.f_17[iVar0], func_34()))
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
							if (is_ped_group_member(*uParam0.f_17[iVar0], func_34()))
							{
								if (!func_73(uParam0) && is_ped_sitting_in_any_vehicle(player_ped_id()))
								{
									if (!func_71(*uParam0.f_17[iVar0]))
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
					if (!is_ped_group_member(*uParam0.f_17[iVar0], func_34()))
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
					if (is_ped_group_member(*uParam0.f_17[iVar0], func_34()))
					{
						iVar32 = get_vehicle_ped_is_using(player_ped_id());
						if (does_entity_exist(iVar32))
						{
							if (func_59(iVar32, uParam0, 0))
							{
								if (func_70(iVar0, uParam0) || !is_bit_set(*uParam0.f_13, 27))
								{
									set_ped_group_member_passenger_index(*uParam0.f_17[iVar0], iVar0);
									func_35(iVar0, uParam0);
									iVar4++;
									if (iVar4 >= iVar3)
									{
										set_bit(uParam0.f_13, 27);
									}
								}
							}
							else if (!func_70(iVar0, uParam0))
							{
								if (get_entity_model(iVar32) == joaat("sentinel2"))
								{
									set_ped_group_member_passenger_index(*uParam0.f_17[iVar0], 4);
								}
								else
								{
									set_ped_group_member_passenger_index(*uParam0.f_17[iVar0], 2);
								}
								func_69(iVar0, uParam0);
							}
						}
					}
					if ((!is_ped_group_member(*uParam0.f_17[iVar0], func_34()) && !func_68(*uParam0.f_17[iVar0], iParam10)) && !func_67(*uParam0.f_17[iVar0], iParam10))
					{
						if (func_74(uParam0, *uParam0.f_17[iVar0], fParam8, iParam11))
						{
							if (!is_ped_group_member(*uParam0.f_17[iVar0], func_34()))
							{
								if (((!is_ped_ragdoll(*uParam0.f_17[iVar0]) && !is_ped_getting_up(*uParam0.f_17[iVar0])) && !is_ped_jumping_out_of_vehicle(*uParam0.f_17[iVar0])) && !is_ped_getting_into_a_vehicle(*uParam0.f_17[iVar0]))
								{
									iVar14 = get_script_task_status(*uParam0.f_17[iVar0], -1794415470);
									if (iVar14 == 7)
									{
										clear_ped_tasks(*uParam0.f_17[iVar0]);
									}
									set_ped_as_group_member(*uParam0.f_17[iVar0], func_34());
									iVar11 = false;
								}
							}
						}
						if (iVar11)
						{
							if (!does_blip_exist(*uParam0.f_1[iVar0]))
							{
								*uParam0.f_11 = get_game_timer();
								*uParam0.f_1[iVar0] = func_41(*uParam0.f_17[iVar0], 0, 0);
								set_blip_display(*uParam0.f_1[iVar0], 2);
								if (iParam9)
								{
									func_50(*uParam0.f_1[iVar0], uParam0);
								}
							}
						}
						iVar6 = 0;
					}
					else if (does_blip_exist(*uParam0.f_1[iVar0]))
					{
						if (((func_47(*uParam0.f_17[iVar0], 1) || func_68(*uParam0.f_17[iVar0], iParam10)) || iParam12) || (is_vehicle_driveable(iParam10, 0) && !is_ped_in_vehicle(player_ped_id(), iParam10, 0)))
						{
							if (does_blip_exist(*uParam0.f_1[iVar0]))
							{
								remove_blip(uParam0.f_1[iVar0]);
								func_60(uVar15[iVar0]);
							}
						}
						else
						{
							if (iParam9)
							{
								func_50(*uParam0.f_1[iVar0], uParam0);
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
										if (!func_47(*uParam0.f_17[iVar0], 1))
										{
											if (func_46(*uParam0.f_17[iVar0]))
											{
												iVar14 = get_script_task_status(*uParam0.f_17[iVar0], 451360105);
												if (iVar14 == 7)
												{
													task_leave_any_vehicle(*uParam0.f_17[iVar0], false, 0);
												}
											}
										}
									}
								}
								else
								{
									if (is_ped_group_member(*uParam0.f_17[iVar0], func_34()))
									{
										if ((((!is_ped_jumping_out_of_vehicle(*uParam0.f_17[iVar0]) && !is_ped_ragdoll(*uParam0.f_17[iVar0])) && !is_ped_getting_up(*uParam0.f_17[iVar0])) && !is_ped_getting_into_a_vehicle(*uParam0.f_17[iVar0])) && !is_entity_on_fire(iParam10))
										{
											remove_ped_from_group(*uParam0.f_17[iVar0]);
										}
									}
									iVar14 = get_script_task_status(*uParam0.f_17[iVar0], -1794415470);
									if (iVar14 == 7 && !func_76(*uParam0.f_17[iVar0], iParam10))
									{
										if (((((!is_ped_jumping_out_of_vehicle(*uParam0.f_17[iVar0]) && !is_ped_jumping_out_of_vehicle(player_ped_id())) && !func_66(*uParam0.f_17[iVar0], 2f)) && !is_ped_ragdoll(*uParam0.f_17[iVar0])) && !is_ped_getting_up(*uParam0.f_17[iVar0])) && !is_entity_on_fire(iParam10))
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
										*uParam0.f_1[iVar0] = func_41(*uParam0.f_17[iVar0], 0, 0);
										set_blip_display(*uParam0.f_1[iVar0], 2);
										iVar6 = 0;
									}
								}
							}
							else if (!is_ped_group_member(*uParam0.f_17[iVar0], func_34()))
							{
								if (func_74(uParam0, *uParam0.f_17[iVar0], fParam8, iParam11))
								{
									if (!is_ped_ragdoll(*uParam0.f_17[iVar0]) && !is_ped_getting_up(*uParam0.f_17[iVar0]))
									{
										iVar14 = get_script_task_status(*uParam0.f_17[iVar0], -1794415470);
										if (iVar14 == 7)
										{
											clear_ped_tasks(*uParam0.f_17[iVar0]);
										}
										set_blocking_of_non_temporary_events(*uParam0.f_17[iVar0], false);
										set_ped_as_group_member(*uParam0.f_17[iVar0], func_34());
									}
								}
							}
						}
						else if (is_ped_sitting_in_vehicle(player_ped_id(), iParam10))
						{
							if (!is_ped_group_member(*uParam0.f_17[iVar0], func_34()))
							{
								if (!is_bit_set(*uParam0.f_13, 21))
								{
									set_ped_as_group_member(*uParam0.f_17[iVar0], func_34());
								}
							}
							else if (is_bit_set(*uParam0.f_13, 21))
							{
								remove_ped_from_group(*uParam0.f_17[iVar0]);
								set_bit(uParam0.f_13, 21);
							}
						}
						else if (is_ped_group_member(*uParam0.f_17[iVar0], func_34()) && !is_entity_on_fire(iParam10))
						{
							remove_ped_from_group(*uParam0.f_17[iVar0]);
						}
					}
				}
				else if (does_blip_exist(*uParam0.f_1[iVar0]))
				{
					remove_blip(uParam0.f_1[iVar0]);
					func_60(uVar15[iVar0]);
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
		if (!func_56(uParam0, 2))
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
							if (func_71(*uParam0.f_17[iVar0]) || is_entity_at_entity(*uParam0.f_17[iVar0], player_ped_id(), *uParam0.f_8, *uParam0.f_8, *uParam0.f_8, 0, 1, 0))
							{
								iVar1--;
								iVar7[iVar0] = 0;
							}
						}
					}
					else if (!is_ped_injured(*uParam0.f_17[iVar0]))
					{
						if (!is_entity_at_entity(*uParam0.f_17[iVar0], player_ped_id(), *uParam0.f_8 * 0.85f, *uParam0.f_8 * 0.85f, *uParam0.f_8, 0, 1, 0) && !func_71(*uParam0.f_17[iVar0]))
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
								func_54(uParam0, sParam7, 0);
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
									if (!func_65(iVar0, uParam0))
									{
										if (!is_string_null(uVar19[iVar0]))
										{
											if (!are_strings_equal(uVar19[iVar0], ""))
											{
												func_63(uParam0, uVar15[iVar0], uVar19[iVar0], 0);
												func_62(iVar0, uParam0);
												*uParam0.f_12 = iVar1;
											}
										}
										if (!func_65(iVar0, uParam0))
										{
											func_54(uParam0, uVar15[iVar0], 0);
											func_62(iVar0, uParam0);
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
					func_60(uVar15[iVar0]);
				}
				iVar0++;
			}
			func_60("MORE_SEATS");
			return true;
		}
	}
	return false;
}

void func_62(int iParam0, auto uParam1)
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

void func_63(auto uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (!iParam3)
	{
		if (!is_string_null(sParam1))
		{
			if (!are_strings_equal(sParam1, ""))
			{
				func_64(sParam1, sParam2, 7500, 1);
			}
		}
	}
	*uParam0.f_10 = get_game_timer();
}

void func_64(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	_set_text_entry_2(sParam0);
	_add_text_component_item_string(sParam1);
	_draw_subtitle_timed(iParam2, 1);
}

int func_65(int iParam0, auto uParam1)
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

bool func_66(int iParam0, float fParam1)
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

bool func_67(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!is_ped_injured(iParam0))
	{
		if (!is_ped_group_member(iParam0, func_34()))
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

bool func_68(int iParam0, int iParam1)
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

void func_69(int iParam0, auto uParam1)
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

int func_70(int iParam0, auto uParam1)
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

bool func_71(int iParam0)
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

bool func_72(int iParam0, auto uParam1)
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

bool func_73(auto uParam0)
{
	int iVar0;
	
	if (is_ped_sitting_in_any_vehicle(player_ped_id()))
	{
		iVar0 = get_vehicle_ped_is_in(player_ped_id(), 0);
		if (func_59(iVar0, uParam0, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_74(auto uParam0, int iParam1, float fParam2, int iParam3)
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
						if (func_73(uParam0))
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
					if (func_59(iVar0, uParam0, 0))
					{
						if (is_vehicle_driveable(iVar0, 0))
						{
							if (func_75(iVar0))
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

bool func_75(int iParam0)
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

bool func_76(int iParam0, int iParam1)
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

void func_77()
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

void func_78(auto uParam0)
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

void func_79(auto uParam0)
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

auto func_80()
{
	auto uVar0;
	
	return uVar0;
}

Vector3 func_81()
{
	Vector3 vVar0;
	
	return vVar0;
}

void func_82(int iParam0, int iParam1)
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

bool func_83(int iParam0, int iParam1, int iParam2)
{
	auto uVar0;
	char* sVar1;
	
	if (iParam1 == 0)
	{
		sVar1 = get_entity_script(iParam0, &uVar0);
		if (!is_string_null_or_empty(sVar1))
		{
			if (get_hash_key(sVar1) == get_hash_key("vehicle_gen_controller"))
			{
				return false;
			}
		}
	}
	func_84(iParam0, iParam2);
	return true;
}

void func_84(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_89(iParam0))
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
	func_85(iParam0, &(Global_101154.f_18807.f_5510));
}

void func_85(int iParam0, auto uParam1)
{
	int iVar0;
	
	if (is_vehicle_driveable(iParam0, 0))
	{
		func_88(uParam1);
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
		func_87(&iParam0, uParam1.f_9, uParam1.f_59);
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (is_vehicle_extra_turned_on(iParam0, iVar0 + 1))
			{
				set_bit(uParam1.f_77, func_86(iVar0 + 1));
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

int func_86(int iParam0)
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

bool func_87(int iParam0, auto uParam1, auto uParam2)
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

void func_88(auto uParam0)
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

bool func_89(int iParam0)
{
	if ((((((((((!does_entity_exist(iParam0) || !is_vehicle_driveable(iParam0, 0)) || func_103(iParam0, 0, 0)) || func_103(iParam0, 1, 0)) || func_103(iParam0, 2, 0)) || func_102(iParam0) != 145) || func_101(iParam0)) || func_100(iParam0)) || func_99(iParam0)) || func_98(iParam0)) || !func_90(get_entity_model(iParam0)))
	{
		if (func_100(iParam0))
		{
		}
		if (func_100(iParam0))
		{
		}
		if (func_103(iParam0, 0, 0))
		{
		}
		if (func_103(iParam0, 1, 0))
		{
		}
		if (func_103(iParam0, 2, 0))
		{
		}
		if (func_102(iParam0) != 145)
		{
		}
		return false;
	}
	return true;
}

bool func_90(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	if (!func_91(iParam0, 0))
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

bool func_91(int iParam0, int iParam1)
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
		if (!func_97())
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
		if ((((!func_96() && !func_95()) && !func_94()) && !func_93()) && !func_97())
		{
			return false;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((is_durango_version() || is_pc_version()) || is_orbis_version())
		{
		}
		else if (!func_94())
		{
			return false;
		}
	}
	if (iParam1)
	{
		if (!func_92(iParam0))
		{
			return false;
		}
	}
	return true;
}

int func_92(int iParam0)
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

bool func_93()
{
	return false;
}

bool func_94()
{
	return true;
}

bool func_95()
{
	return true;
}

bool func_96()
{
	if (is_dlc_present(-1226939934))
	{
		return true;
	}
	return false;
}

bool func_97()
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

bool func_98(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = get_entity_model(iParam0);
	sVar1 = get_vehicle_number_plate_text(iParam0);
	if (iVar0 == joaat("speedo") && are_strings_equal(sVar1, "LAMAR G "))
	{
		return true;
	}
	if (!func_91(iVar0, 0))
	{
		return true;
	}
	return false;
}

bool func_99(int iParam0)
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

bool func_100(int iParam0)
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

bool func_101(int iParam0)
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

int func_102(int iParam0)
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

bool func_103(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	char* sVar1;
	auto uVar9;
	
	if (!does_entity_exist(iParam0) || !is_vehicle_driveable(iParam0, 0))
	{
		return false;
	}
	iVar0 = 0;
	while (func_104(iParam1, iVar0, &sVar1, &uVar9))
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

bool func_104(int iParam0, int iParam1, char* sParam2, auto uParam3)
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

void func_105()
{
	int iVar0;
	
	switch (iLocal_1476)
	{
		case 0:
			if (is_screen_faded_out())
			{
				do_screen_fade_in(800);
			}
			iVar0 = 0;
			while (iVar0 <= 8)
			{
				if (func_31(Local_111[iVar0 /*14*/]))
				{
					if (!iLocal_450)
					{
						func_28(&uLocal_238, 1, Local_111[iVar0 /*14*/], "ArmyPed", 0, 1);
						func_137();
						_play_ambient_speech1(Local_111[iVar0 /*14*/], "GENERIC_WAR_CRY", func_53(3), 1);
						iLocal_450 = 1;
					}
				}
				iVar0++;
			}
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, iLocal_493);
			_0x293220DA1B46CEBC(3f, 5f, 4);
			iLocal_1476++;
			break;
		
		case 1:
			if (is_ped_in_vehicle(player_ped_id(), Local_94[0 /*2*/], 0))
			{
				_0x293220DA1B46CEBC(3f, 5f, 4);
				func_108(0f, 0f, 0f, -1f, 0, 145);
				if (does_blip_exist(Local_94[0 /*2*/].f_1))
				{
					remove_blip(&(Local_94[0 /*2*/].f_1));
				}
				func_107(2);
				iLocal_1476 = 0;
			}
			else if (func_31(Local_94[0 /*2*/]) && !does_blip_exist(Local_94[0 /*2*/].f_1))
			{
				Local_94[0 /*2*/].f_1 = func_106(Local_94[0 /*2*/], 0, 0);
			}
			break;
	}
}

int func_106(int iParam0, int iParam1, int iParam2)
{
	return func_42(iParam0, !iParam1, iParam2);
}

bool func_107(int iParam0)
{
	if (iLocal_1474 == 0)
	{
		iLocal_1477 = iParam0;
		iLocal_1474 = 1;
		return true;
	}
	return false;
}

void func_108(Vector3 vParam0, Vector3 fParam1, int iParam2, int iParam3)
{
	Vector3 vVar0;
	auto uVar3;
	
	if (does_entity_exist(Global_93091.f_4))
	{
		if (is_vehicle_driveable(Global_93091.f_4, 0))
		{
			if (func_136(24) != Global_93091.f_4)
			{
				if (iParam4 == 1)
				{
					if (func_133(get_entity_coords(Global_93091.f_4, 1), iParam5, &vVar0, &uVar3))
					{
						vParam0 = {vVar0};
						fParam3 = uVar3;
					}
				}
				func_109(Global_93091.f_4, vParam0, fParam3, 24, 0);
			}
		}
	}
}

void func_109(int iParam0, Vector3 vParam1, Vector3 fParam2, int iParam3, int iParam4)
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
		func_132(iParam5);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_85(iParam0, &Var0);
		if (func_131(vParam1, 0f, 0f, 0f, 0))
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
		func_125(iParam5, &Var0, vParam1, fParam4, func_102(iParam0));
		func_110(iParam5, iParam0, 0);
	}
}

void func_110(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_122(&(Global_68319.f_555[0 /*21*/]), iParam0))
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
				Global_101154.f_18807.f_4801 = func_111();
			}
			if (iParam1 != Global_68319.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_136(iParam0);
					if ((does_entity_exist(iVar0) && is_vehicle_driveable(iVar0, 0)) && iParam1 != iVar0)
					{
						func_84(iVar0, 145);
					}
				}
				Global_69225 = iParam1;
				Global_69226 = iParam0;
				Global_69227 = iParam2;
			}
		}
	}
}

auto func_111()
{
	auto uVar0;
	
	func_121(&uVar0, get_clock_seconds());
	func_120(&uVar0, get_clock_minutes());
	func_119(&uVar0, get_clock_hours());
	func_114(&uVar0, get_clock_day_of_month());
	func_113(&uVar0, get_clock_month());
	func_112(&uVar0, get_clock_year());
	return uVar0;
}

void func_112(auto uParam0, int iParam1)
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

void func_113(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 -= *uParam0 & 15;
	*uParam0 = (*uParam0 || iParam1);
}

void func_114(auto uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_118(*uParam0);
	iVar1 = func_116(*uParam0);
	if (iParam1 < 1 || iParam1 > func_115(iVar0, iVar1))
	{
		return;
	}
	*uParam0 -= *uParam0 & 496;
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

int func_115(int iParam0, int iParam1)
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

auto func_116(int iParam0)
{
	return shift_right(iParam0, 26) & 31 * func_117(is_bit_set(iParam0, 31), -1, 1) + 2011;
}

int func_117(int iParam0, int iParam1, int iParam2)
{
	if (iParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_118(auto uParam0)
{
	return uParam0 & 15;
}

void func_119(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 -= *uParam0 & 15872;
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_120(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 -= *uParam0 & 1032192;
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_121(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 -= *uParam0 & 66060288;
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

int func_122(auto uParam0, int iParam1)
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
			*uParam0.f_4 = func_123(0, 1);
			*uParam0.f_12 = 0;
			set_bit(uParam0.f_9, 20);
			set_bit(uParam0.f_9, 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = {1970.943f, 3801.684f, 31.1396f};
			*uParam0.f_3 = 301.3964f;
			*uParam0.f_4 = func_123(0, 1);
			*uParam0.f_12 = 0;
			set_bit(uParam0.f_9, 20);
			set_bit(uParam0.f_9, 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = {-22.6297f, -1439.137f, 29.6549f};
			*uParam0.f_3 = 180.0808f;
			*uParam0.f_4 = func_123(1, 1);
			*uParam0.f_12 = 1;
			set_bit(uParam0.f_9, 20);
			set_bit(uParam0.f_9, 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = {-22.5229f, -1434.699f, 29.6552f};
			*uParam0.f_3 = 141.6114f;
			*uParam0.f_4 = func_123(1, 2);
			*uParam0.f_12 = 1;
			set_bit(uParam0.f_9, 19);
			set_bit(uParam0.f_9, 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = {10.9281f, 545.669f, 174.7951f};
			*uParam0.f_3 = 61.392f;
			*uParam0.f_4 = func_123(1, 1);
			*uParam0.f_12 = 1;
			set_bit(uParam0.f_9, 20);
			set_bit(uParam0.f_9, 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = {6.1093f, 544.9742f, 174.2835f};
			*uParam0.f_3 = 92.1548f;
			*uParam0.f_4 = func_123(1, 2);
			*uParam0.f_12 = 1;
			set_bit(uParam0.f_9, 19);
			set_bit(uParam0.f_9, 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = {1981.416f, 3808.131f, 31.1384f};
			*uParam0.f_3 = 117.2557f;
			*uParam0.f_4 = func_123(2, 1);
			*uParam0.f_12 = 2;
			set_bit(uParam0.f_9, 20);
			set_bit(uParam0.f_9, 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = {-1158.488f, -1529.367f, 3.8995f};
			*uParam0.f_3 = 35.7505f;
			*uParam0.f_4 = func_123(2, 1);
			*uParam0.f_12 = 2;
			set_bit(uParam0.f_9, 20);
			set_bit(uParam0.f_9, 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = {148.2868f, -1270.569f, 28.2252f};
			*uParam0.f_3 = 208.4685f;
			*uParam0.f_4 = func_123(2, 1);
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
			if (func_97())
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
			if (func_97())
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
		if (!func_131(Global_101154.f_18807.f_1864[*uParam0.f_14 /*3*/], 0f, 0f, 0f, 0))
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
		if (!func_131(Global_101154.f_1826.f_539.f_2816[1 /*10*/][*uParam0.f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = {Global_101154.f_1826.f_539.f_2816[1 /*10*/][*uParam0.f_12 /*3*/]};
			*uParam0.f_3 = Global_101154.f_1826.f_539.f_2837[1 /*4*/][*uParam0.f_12];
		}
	}
	else if (is_bit_set(*uParam0.f_9, 20))
	{
		if (!func_131(Global_101154.f_1826.f_539.f_2816[0 /*10*/][*uParam0.f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = {Global_101154.f_1826.f_539.f_2816[0 /*10*/][*uParam0.f_12 /*3*/]};
			*uParam0.f_3 = Global_101154.f_1826.f_539.f_2837[0 /*4*/][*uParam0.f_12];
		}
	}
	return iVar0;
}

int func_123(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_21(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_124(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_124(int iParam0, auto uParam1, int iParam2)
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

void func_125(int iParam0, auto uParam1, Vector3 vParam2, Vector3 fParam3, int iParam4)
{
	if (func_122(&(Global_68319.f_555[0 /*21*/]), iParam0))
	{
		if (is_bit_set(Global_68319.f_555[0 /*21*/].f_9, 10))
		{
			func_130(iParam0);
			func_129(uParam1, &(Global_101154.f_18807.f_69[Global_68319.f_555[0 /*21*/].f_14 /*78*/]));
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
			func_126(iParam0, 1);
		}
	}
}

void func_126(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1)
	{
		if (!func_128(iParam0, 0))
		{
			func_127(iParam0, 1, 0);
			func_127(iParam0, 2, 0);
			func_127(iParam0, 3, 0);
			func_127(iParam0, 4, 0);
			func_127(iParam0, 0, 1);
			Global_68319[iParam0] = 1;
		}
	}
	else
	{
		func_127(iParam0, 0, 0);
	}
}

void func_127(int iParam0, int iParam1, int iParam2)
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

int func_128(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return false;
	}
	return is_bit_set(Global_101154.f_18807[iParam0], iParam1);
}

void func_129(auto uParam0, auto uParam1)
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

void func_130(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_122(&(Global_68319.f_555[0 /*21*/]), iParam0))
	{
		if (does_entity_exist(Global_68319.f_139[iParam0]))
		{
			set_entity_as_mission_entity(Global_68319.f_139[iParam0], true, 1);
			set_vehicle_as_no_longer_needed(&(Global_68319.f_139[iParam0]));
			Global_68319.f_139[iParam0] = 0;
		}
		if (is_bit_set(Global_68319.f_555[0 /*21*/].f_9, 13))
		{
			func_126(iParam0, 0);
		}
	}
}

int func_131(Vector3 vParam0, Vector3 vParam1, int iParam2)
{
	if (iParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

void func_132(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_130(iParam0);
	func_126(iParam0, 0);
}

bool func_133(Vector3 vParam0, int iParam1, auto uParam2, auto uParam3)
{
	int iVar0;
	
	iVar0 = func_134(vParam0, iParam3, 1);
	switch (iVar0)
	{
		case 0:
			*uParam4 = {-827.351f, 157.785f, 68.2143f};
			*uParam5 = 85.1509f;
			return true;
			break;
		
		case 1:
		case 2:
			*uParam4 = {1992.523f, 3813.916f, 31.1008f};
			*uParam5 = 122.1498f;
			return true;
			break;
		
		case 3:
			*uParam4 = {-1184.258f, -1496.556f, 3.3895f};
			*uParam5 = 303.2098f;
			return true;
			break;
		
		case 4:
			*uParam4 = {118.1067f, -1325.906f, 28.3706f};
			*uParam5 = 123.5016f;
			return true;
			break;
		
		case 5:
			*uParam4 = {-18.118f, -1455.126f, 29.5004f};
			*uParam5 = 273.2822f;
			return true;
			break;
		
		case 6:
			*uParam4 = {1.5947f, 543.4017f, 173.4644f};
			*uParam5 = 310.7556f;
			return true;
			break;
		
		default:
			break;
	}
	return false;
}

int func_134(Vector3 vParam0, int iParam1, int iParam2)
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
				if (func_135(iVar0) || iParam4 == 0)
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

int func_135(int iParam0)
{
	return is_bit_set(Global_101154.f_5919[iParam0], false);
}

int func_136(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_68319.f_139[iParam0];
}

void func_137()
{
	Global_14578 = 0;
	func_138();
}

void func_138()
{
	restart_scripted_conversation();
	Global_16723 = 0;
	if (is_scripted_conversation_ongoing())
	{
		stop_scripted_conversation(false);
		Global_15712 = 6;
	}
}

void func_139()
{
	switch (iLocal_1476)
	{
		case 0:
			if (is_screen_faded_out())
			{
				do_screen_fade_in(800);
			}
			while (Global_91278 == 12)
			{
				wait(false);
			}
			if (func_31(Local_94[0 /*2*/]) && !does_blip_exist(Local_94[0 /*2*/].f_1))
			{
				if (get_blip_from_entity(Local_94[0 /*2*/]) != 0)
				{
					Local_94[0 /*2*/].f_1 = get_blip_from_entity(Local_94[0 /*2*/]);
				}
				else
				{
					Local_94[0 /*2*/].f_1 = func_106(Local_94[0 /*2*/], 0, 0);
				}
			}
			_0x293220DA1B46CEBC(5f, 5f, 4);
			func_30("RHP_GOODS", 7500, 1);
			trigger_music_event("RHP1_START");
			func_140("RHP_HELP", -1);
			iLocal_434 = 0;
			iLocal_1476++;
			break;
		
		case 1:
			if (iLocal_456)
			{
				iLocal_450 = 0;
				func_107(1);
				iLocal_1476 = 0;
			}
			break;
	}
}

void func_140(char* sParam0, int iParam1)
{
	_set_text_component_format(sParam0);
	_display_help_text_from_string_label(0, 0, true, iParam1);
}

void func_141()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iLocal_447 = 0;
	while (iLocal_447 <= 3 - 1)
	{
		if (does_entity_exist(Local_101[iLocal_447 /*2*/]))
		{
			if (is_ped_injured(Local_101[iLocal_447 /*2*/]))
			{
				func_194(&(Local_101[iLocal_447 /*2*/]), 1, 0, 1);
			}
		}
		iLocal_447++;
	}
	iLocal_447 = 0;
	while (iLocal_447 <= 3 - 1)
	{
		if (does_entity_exist(Local_94[iLocal_447 /*2*/]))
		{
			if (!is_vehicle_driveable(Local_94[iLocal_447 /*2*/], 0))
			{
				if (iLocal_447 == 0)
				{
					func_183(3);
				}
				func_182(&(Local_94[iLocal_447 /*2*/]));
			}
			else if (Local_94[iLocal_447 /*2*/] == Local_94[0 /*2*/])
			{
				if (func_181(&(Local_94[0 /*2*/])))
				{
					func_183(4);
					func_182(&(Local_94[0 /*2*/]));
				}
			}
		}
		iLocal_447++;
	}
	iLocal_447 = 0;
	while (iLocal_447 <= 9 - 1)
	{
		if (does_entity_exist(Local_111[iLocal_447 /*14*/]))
		{
			if (iLocal_456)
			{
				func_180(Local_111[iLocal_447 /*14*/], &(Local_111[iLocal_447 /*14*/].f_2), -1, 0, 0, 0, 400f, 0, -1);
			}
			if (is_ped_injured(Local_111[iLocal_447 /*14*/]))
			{
				if (Local_111[iLocal_447 /*14*/].f_10 == 0)
				{
					func_179(719, 1, 0);
					Local_111[iLocal_447 /*14*/].f_10 = 1;
				}
				set_ped_as_no_longer_needed(&(Local_111[iLocal_447 /*14*/]));
			}
		}
		if ((((func_31(Local_111[iLocal_447 /*14*/]) && get_game_timer() - iLocal_455 > 8000) && iLocal_456) && !is_ambient_speech_playing(Local_111[iLocal_447 /*14*/])) && !is_ped_in_any_vehicle(Local_111[iLocal_447 /*14*/], 0))
		{
			if (get_entity_health(Local_111[iLocal_447 /*14*/]) < 110)
			{
				_play_ambient_speech1(Local_111[iLocal_447 /*14*/], "DYING_MOAN", func_53(3), 1);
				iLocal_455 = get_game_timer();
			}
			else if (get_entity_health(Local_111[iLocal_447 /*14*/]) < 140)
			{
				_play_ambient_speech1(Local_111[iLocal_447 /*14*/], "DYING_HELP", func_53(3), 1);
				iLocal_455 = get_game_timer();
			}
			else if (is_ped_going_into_cover(Local_111[iLocal_447 /*14*/]))
			{
				_play_ambient_speech1(Local_111[iLocal_447 /*14*/], "TAKE_COVER", func_53(3), 1);
				iLocal_455 = get_game_timer();
			}
			else if (is_ped_running(Local_111[iLocal_447 /*14*/]))
			{
				_play_ambient_speech1(Local_111[iLocal_447 /*14*/], "COVER_ME", func_53(3), 1);
				iLocal_455 = get_game_timer();
			}
			else if (is_ped_shooting(Local_111[iLocal_447 /*14*/]))
			{
				_play_ambient_speech1(Local_111[iLocal_447 /*14*/], "COVER_YOU", func_53(3), 1);
				iLocal_455 = get_game_timer();
			}
			else if (!is_ped_weapon_ready_to_shoot(Local_111[iLocal_447 /*14*/]))
			{
				_play_ambient_speech1(Local_111[iLocal_447 /*14*/], "RELOADING", func_53(3), 1);
				iLocal_455 = get_game_timer();
			}
			else if (func_178(Local_111[iLocal_447 /*14*/], -828834893, 1) || func_178(Local_111[iLocal_447 /*14*/], 451360105, 1))
			{
				_play_ambient_speech1(Local_111[iLocal_447 /*14*/], "GENERIC_WAR_CRY", func_53(3), 1);
				iLocal_455 = get_game_timer();
			}
		}
		iLocal_447++;
	}
	if (get_player_wanted_level(player_id()) > 0)
	{
		set_police_radar_blips(1);
	}
	else
	{
		set_police_radar_blips(0);
	}
	if (func_31(Local_94[0 /*2*/]) && func_31(player_ped_id()))
	{
		if (is_entity_in_angled_area(Local_94[0 /*2*/], -1521.829f, 2725.003f, 16.64367f, -1600.763f, 2794.875f, 21.45629f, 30f, 0, true, 0) && is_ped_in_vehicle(player_ped_id(), Local_94[0 /*2*/], 0))
		{
			set_max_wanted_level(5);
			set_player_wanted_level(player_id(), 4, 0);
			set_player_wanted_level_now(player_id(), 0);
		}
	}
	if (func_31(Local_94[0 /*2*/]) && func_31(player_ped_id()))
	{
		if (iLocal_1475 > 0)
		{
			if (get_distance_between_coords(get_entity_coords(Local_94[0 /*2*/], 1), get_entity_coords(player_ped_id(), 1), 1) > 650f)
			{
				func_183(5);
			}
			else if (get_distance_between_coords(get_entity_coords(Local_94[0 /*2*/], 1), get_entity_coords(player_ped_id(), 1), 1) > 600f)
			{
				if (!iLocal_454)
				{
					func_30("RHP_LWARN", 7500, 1);
					iLocal_454 = 1;
				}
			}
			else
			{
				iLocal_454 = 0;
			}
		}
	}
	if (func_31(Local_94[0 /*2*/]))
	{
		iVar0 = true;
		iVar1 = 0;
		while (iVar1 <= 9 - 1)
		{
			if (func_31(Local_111[iVar1 /*14*/]))
			{
				iVar0 = false;
			}
			iVar1++;
		}
		if (iVar0)
		{
			if ((!is_ped_in_vehicle(player_ped_id(), Local_94[0 /*2*/], 0) && !is_ped_in_combat(player_ped_id(), false)) && !is_ped_shooting(player_ped_id()))
			{
				if (!is_ped_headtracking_entity(player_ped_id(), Local_94[0 /*2*/]))
				{
					task_look_at_entity(player_ped_id(), Local_94[0 /*2*/], -1, 2048, 1);
				}
			}
			else if (is_ped_headtracking_entity(player_ped_id(), Local_94[0 /*2*/]))
			{
				task_clear_look_at(player_ped_id());
			}
		}
	}
	if (!iLocal_444)
	{
		if (iLocal_1475 == 0)
		{
			if (fLocal_441 != 0f)
			{
				fLocal_441 = 0f;
			}
		}
		else if (iLocal_1475 == 1)
		{
			if (fLocal_441 < 5f)
			{
				fLocal_441 += get_frame_time();
			}
		}
		if (fLocal_441 < 3f)
		{
			iVar2 = 0;
			while (iVar2 < Local_94)
			{
				if (does_entity_exist(Local_94[iVar2 /*2*/]) && !does_entity_exist(uLocal_429[iVar2]))
				{
					uLocal_429[iVar2] = Local_94[iVar2 /*2*/];
				}
				if (does_entity_exist(uLocal_429[iVar2]))
				{
					if (is_entity_dead(uLocal_429[iVar2], 0) || !is_vehicle_driveable(uLocal_429[iVar2], 0))
					{
						iVar3 = get_vehicle_cause_of_destruction(uLocal_429[iVar2]);
						if (iVar3 == joaat("weapon_stickybomb"))
						{
							func_177(726);
							iLocal_444 = 1;
						}
					}
				}
				iVar2++;
			}
			iVar2 = 0;
			while (iVar2 < Global_88108)
			{
				if (does_entity_exist(Global_88108[iVar2]))
				{
					if (is_entity_dead(Global_88108[iVar2], 0) || !is_vehicle_driveable(Global_88108[iVar2], 0))
					{
						iVar4 = get_vehicle_cause_of_destruction(Global_88108[iVar2]);
						if (iVar4 == joaat("weapon_stickybomb"))
						{
							func_177(726);
							iLocal_444 = 1;
						}
					}
				}
				iVar2++;
			}
		}
	}
	func_160();
	func_150();
	func_146();
	func_145();
	set_all_random_peds_flee_this_frame(player_id());
	if (!iLocal_443)
	{
		if (func_144(get_entity_coords(player_ped_id(), 1), 3, 0, 0))
		{
			iLocal_443 = 1;
			_0xD9F692D349249528();
			set_wanted_level_multiplier(1f);
			set_max_wanted_level(5);
			set_police_radar_blips(1);
			set_player_wanted_level_no_drop(player_id(), 3, 0);
			set_player_wanted_level_now(player_id(), 0);
			iLocal_443 = 1;
		}
	}
	else if (!func_144(get_entity_coords(player_ped_id(), 1), 3, 0, 0))
	{
		if (get_player_wanted_level(player_id()) == 0)
		{
			_0xDC0F817884CDD856(5, false);
			_0xDC0F817884CDD856(3, false);
			_0xDC0F817884CDD856(1, false);
			_0xDC0F817884CDD856(10, false);
			_0xDC0F817884CDD856(9, false);
			_0xE532EC1A63231B4F(1, 0);
			_0xE532EC1A63231B4F(2, 0);
			_0xE532EC1A63231B4F(8, 0);
			set_wanted_level_multiplier(0f);
			set_max_wanted_level(false);
			set_police_radar_blips(0);
			iLocal_443 = 0;
		}
	}
	if (does_entity_exist(player_ped_id()) && !is_ped_injured(player_ped_id()))
	{
		if (is_ped_in_any_vehicle(player_ped_id(), 0))
		{
			if (!iLocal_1486)
			{
				func_143(get_vehicle_ped_is_in(player_ped_id(), 0), 725);
				func_142(get_vehicle_ped_is_in(player_ped_id(), 0), 718);
				iLocal_1486 = 1;
			}
		}
		else if (iLocal_1486)
		{
			iLocal_1486 = 0;
		}
		if (!iLocal_1487)
		{
			func_143(player_ped_id(), 722);
			iLocal_1487 = 1;
		}
	}
	if (!iLocal_442)
	{
		iVar5 = false;
		if (is_ped_in_any_vehicle(player_ped_id(), 0))
		{
			if (is_vehicle_driveable(get_vehicle_ped_is_in(player_ped_id(), 0), 0))
			{
				iVar5 = get_vehicle_ped_is_in(player_ped_id(), 0);
			}
		}
		else if ((does_entity_exist(get_players_last_vehicle()) && is_vehicle_driveable(get_players_last_vehicle(), 0)) && vdist2(get_entity_coords(player_ped_id(), 1), get_entity_coords(get_players_last_vehicle(), 1)) < 10000f)
		{
			iVar5 = get_players_last_vehicle();
		}
		if ((((((does_entity_exist(iVar5) && is_vehicle_driveable(iVar5, 0)) && iVar5 != iLocal_428) && iVar5 != Local_94[1 /*2*/]) && iVar5 != Local_94[2 /*2*/]) && iVar5 != Local_94[0 /*2*/]) && is_this_model_a_car(get_entity_model(iVar5)))
		{
			set_entity_as_mission_entity(iVar5, true, 1);
			iLocal_428 = iVar5;
		}
	}
}

void func_142(int iParam0, int iParam1)
{
	Global_55760 = iParam0;
	Global_55761 = iParam1;
}

void func_143(int iParam0, int iParam1)
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

bool func_144(Vector3 vParam0, int iParam1, int iParam2, int iParam3)
{
	Vector3[] vVar0 = new Vector3[15];
	Vector3[] vVar46 = new Vector3[15];
	float[] fVar92 = new float[15];
	int iVar108;
	int iVar109;
	int iVar110;
	int iVar111;
	
	iVar110 = 0;
	switch (iParam3)
	{
		case 1:
			vVar0[0 /*3*/] = {-1332.211f, 100.4608f, 40.38437f};
			vVar46[0 /*3*/] = {-1094.238f, 148.4274f, 73f};
			fVar92[0] = 171.25f;
			vVar0[1 /*3*/] = {-999.7344f, -110.2231f, 25.25706f};
			vVar46[1 /*3*/] = {-1149.494f, 109.2558f, 73f};
			fVar92[1] = 132f;
			vVar0[2 /*3*/] = {-1035.113f, -84.95885f, 28.2746f};
			vVar46[2 /*3*/] = {-1261.103f, 50.08148f, 73f};
			fVar92[2] = 132f;
			iVar108 = 3;
			break;
		
		case 2:
			vVar0[0 /*3*/] = {-804.3439f, -3346.5f, 10f};
			vVar46[0 /*3*/] = {-1816.954f, -2768.893f, IntToFloat(250 + iParam4)};
			fVar92[0] = 247f;
			vVar0[1 /*3*/] = {-1911.488f, -2934.197f, 10f};
			vVar46[1 /*3*/] = {-968.6236f, -3477.748f, IntToFloat(250 + iParam4)};
			fVar92[1] = 149f;
			vVar0[2 /*3*/] = {-844.9433f, -2802.785f, 10f};
			vVar46[2 /*3*/] = {-1011.081f, -3086.904f, IntToFloat(250 + iParam4)};
			fVar92[2] = 185.5f;
			vVar0[3 /*3*/] = {-1021.086f, -2952.277f, 10f};
			vVar46[3 /*3*/] = {-1599.008f, -2616.271f, IntToFloat(250 + iParam4)};
			fVar92[3] = 250f;
			vVar0[4 /*3*/] = {-1027.136f, -2436.457f, 10f};
			vVar46[4 /*3*/] = {-1392.61f, -2226.763f, IntToFloat(250 + iParam4)};
			fVar92[4] = 193.5f;
			vVar0[5 /*3*/] = {-1497.549f, -2408.712f, 10f};
			vVar46[5 /*3*/] = {-1136.917f, -2617.955f, IntToFloat(250 + iParam4)};
			fVar92[5] = 234.5f;
			vVar0[6 /*3*/] = {-982.7924f, -2831.709f, 12.93313f};
			vVar46[6 /*3*/] = {-966.4677f, -2803.458f, 16.68313f};
			fVar92[6] = 16f;
			vVar0[7 /*3*/] = {-1110.083f, -3496.806f, 12f};
			vVar46[7 /*3*/] = {-1955.298f, -3010.431f, IntToFloat(250 + iParam4)};
			fVar92[7] = 80f;
			vVar0[8 /*3*/] = {-1886.899f, -3193.024f, 12f};
			vVar46[8 /*3*/] = {-1836.143f, -3105.268f, IntToFloat(250 + iParam4)};
			fVar92[8] = 142f;
			vVar0[9 /*3*/] = {-1134.337f, -3535.648f, 12f};
			vVar46[9 /*3*/] = {-1259.649f, -3463.486f, IntToFloat(250 + iParam4)};
			fVar92[9] = 30.75f;
			vVar0[10 /*3*/] = {-969.1279f, -3463.899f, 12f};
			vVar46[10 /*3*/] = {-896.3734f, -3505.715f, IntToFloat(250 + iParam4)};
			fVar92[10] = 150f;
			vVar0[11 /*3*/] = {-1369.491f, -2173.579f, 10f};
			vVar46[11 /*3*/] = {-1685.626f, -2720.364f, IntToFloat(250 + iParam4)};
			fVar92[11] = 29.25f;
			vVar0[12 /*3*/] = {-1010.926f, -3550.943f, 10f};
			vVar46[12 /*3*/] = {-1110.198f, -3493.617f, IntToFloat(250 + iParam4)};
			fVar92[12] = 43f;
			iVar108 = 13;
			break;
		
		case 3:
			vVar0[0 /*3*/] = {-1773.944f, 3287.334f, 30f};
			vVar46[0 /*3*/] = {-2029.776f, 2845.083f, IntToFloat(250 + iParam4)};
			fVar92[0] = 250f;
			vVar0[1 /*3*/] = {-2725.889f, 3291.099f, 30f};
			vVar46[1 /*3*/] = {-2009.182f, 2879.835f, IntToFloat(250 + iParam4)};
			fVar92[1] = 180f;
			vVar0[2 /*3*/] = {-2442.026f, 3326.699f, 30f};
			vVar46[2 /*3*/] = {-2033.928f, 3089.049f, IntToFloat(250 + iParam4)};
			fVar92[2] = 200f;
			vVar0[3 /*3*/] = {-1917.165f, 3374.209f, 30f};
			vVar46[3 /*3*/] = {-2016.791f, 3195.058f, IntToFloat(250 + iParam4)};
			fVar92[3] = 86.25f;
			vVar0[4 /*3*/] = {-2192.753f, 3373.278f, 30f};
			vVar46[4 /*3*/] = {-2191.544f, 3150.417f, IntToFloat(250 + iParam4)};
			fVar92[4] = 140.5f;
			vVar0[5 /*3*/] = {-2077.663f, 3344.514f, 30f};
			vVar46[5 /*3*/] = {-2191.544f, 3150.417f, IntToFloat(250 + iParam4)};
			fVar92[5] = 140.5f;
			vVar0[6 /*3*/] = {-2861.755f, 3352.661f, 30f};
			vVar46[6 /*3*/] = {-2715.871f, 3269.916f, IntToFloat(250 + iParam4)};
			fVar92[6] = 90f;
			vVar0[7 /*3*/] = {-2005.574f, 3364.533f, 30f};
			vVar46[7 /*3*/] = {-1977.569f, 3330.888f, IntToFloat(250 + iParam4)};
			fVar92[7] = 100f;
			vVar0[8 /*3*/] = {-1682.235f, 3004.285f, 30f};
			vVar46[8 /*3*/] = {-1942.747f, 2947.441f, IntToFloat(250 + iParam4)};
			fVar92[8] = 248.75f;
			vVar0[9 /*3*/] = {-2393.295f, 2936.406f, 31.6801f};
			vVar46[9 /*3*/] = {-2453.037f, 3006.863f, 52.31003f};
			fVar92[9] = 128f;
			vVar0[10 /*3*/] = {-2347.185f, 3023.83f, 31.56573f};
			vVar46[10 /*3*/] = {-2517.33f, 2989.063f, 49.95644f};
			fVar92[10] = 127.25f;
			vVar0[11 /*3*/] = {-2259.922f, 3358.04f, 29.99972f};
			vVar46[11 /*3*/] = {-2299.772f, 3385.79f, 38.06014f};
			fVar92[11] = 16f;
			vVar0[12 /*3*/] = {-2476.309f, 3363.914f, 31.67933f};
			vVar46[12 /*3*/] = {-2431.981f, 3287.669f, 39.97826f};
			fVar92[12] = 214.25f;
			vVar0[13 /*3*/] = {-2103.081f, 2797.783f, 29.37864f};
			vVar46[13 /*3*/] = {-2096.821f, 2874.423f, 57.80989f};
			fVar92[13] = 65.75f;
			if (iParam5)
			{
				iVar111 = iParam4;
			}
			else
			{
				iVar111 = 0;
			}
			vVar46[9 /*3*/].f_2 += IntToFloat(iVar111);
			vVar46[10 /*3*/].f_2 += IntToFloat(iVar111);
			vVar46[11 /*3*/].f_2 += IntToFloat(iVar111);
			vVar46[12 /*3*/].f_2 += IntToFloat(iVar111);
			vVar46[13 /*3*/].f_2 += IntToFloat(iVar111);
			iVar108 = 14;
			break;
		
		case 4:
			vVar0[0 /*3*/] = {1541.607f, 2527.555f, 40f};
			vVar46[0 /*3*/] = {1815.575f, 2535.06f, IntToFloat(150 + iParam4)};
			fVar92[0] = 114f;
			vVar0[1 /*3*/] = {1788.879f, 2445.727f, 40f};
			vVar46[1 /*3*/] = {1716.96f, 2502.957f, IntToFloat(150 + iParam4)};
			fVar92[1] = 88.5f;
			vVar0[2 /*3*/] = {1601.157f, 2436.244f, 40f};
			vVar46[2 /*3*/] = {1650.078f, 2515.923f, IntToFloat(150 + iParam4)};
			fVar92[2] = 133.25f;
			vVar0[3 /*3*/] = {1706.331f, 2407.597f, 40f};
			vVar46[3 /*3*/] = {1698.555f, 2460.208f, IntToFloat(150 + iParam4)};
			fVar92[3] = 104.5f;
			vVar0[4 /*3*/] = {1712.452f, 2756.218f, 40f};
			vVar46[4 /*3*/] = {1718.848f, 2589.162f, IntToFloat(150 + iParam4)};
			fVar92[4] = 121.75f;
			vVar0[5 /*3*/] = {1830.228f, 2661.24f, 40f};
			vVar46[5 /*3*/] = {1774.812f, 2679.419f, IntToFloat(150 + iParam4)};
			fVar92[5] = 84.5f;
			vVar0[6 /*3*/] = {1559.05f, 2632.22f, 40f};
			vVar46[6 /*3*/] = {1657.208f, 2595.484f, IntToFloat(150 + iParam4)};
			fVar92[6] = 103.75f;
			vVar0[7 /*3*/] = {1612.021f, 2716.869f, 40f};
			vVar46[7 /*3*/] = {1657.165f, 2669.721f, IntToFloat(150 + iParam4)};
			fVar92[7] = 104.25f;
			vVar0[8 /*3*/] = {1809.872f, 2729.827f, 40f};
			vVar46[8 /*3*/] = {1789.855f, 2705.037f, IntToFloat(150 + iParam4)};
			fVar92[8] = 91f;
			vVar0[9 /*3*/] = {1818.789f, 2605.948f, 40f};
			vVar46[9 /*3*/] = {1783.114f, 2606.783f, IntToFloat(150 + iParam4)};
			fVar92[9] = 51.25f;
			iVar108 = 10;
			break;
		
		case 5:
			vVar0[0 /*3*/] = {3411.002f, 3663.185f, 20f};
			vVar46[0 /*3*/] = {3615.583f, 3626.194f, IntToFloat(40 + iParam4)};
			fVar92[0] = 45.75f;
			vVar0[1 /*3*/] = {3426.66f, 3733.078f, 20f};
			vVar46[1 /*3*/] = {3643.801f, 3694.362f, IntToFloat(40 + iParam4)};
			fVar92[1] = 99f;
			vVar0[2 /*3*/] = {3446.036f, 3795.688f, 20f};
			vVar46[2 /*3*/] = {3650.914f, 3766.152f, IntToFloat(40 + iParam4)};
			fVar92[2] = 81.5f;
			iVar108 = 3;
			break;
		
		case 6:
			vVar0[0 /*3*/] = {526.053f, -3391.497f, -10f};
			vVar46[0 /*3*/] = {523.2289f, -3118.678f, IntToFloat(10 + iParam4)};
			fVar92[0] = 120f;
			vVar0[1 /*3*/] = {459.4397f, -3199.99f, 4.819676f};
			vVar46[1 /*3*/] = {593.8928f, -3199.998f, 30.06926f};
			fVar92[1] = 170f;
			vVar0[2 /*3*/] = {552.8467f, -3111.054f, 4.819394f};
			vVar46[2 /*3*/] = {585.3137f, -3111.844f, 17.56923f};
			fVar92[2] = 12.5f;
			vVar0[3 /*3*/] = {598.4666f, -3140.147f, 4.819257f};
			vVar46[3 /*3*/] = {597.4973f, -3117.063f, 17.31926f};
			fVar92[3] = 9.75f;
			iVar108 = 4;
			break;
		
		case 7:
			vVar0[0 /*3*/] = {-1108.55f, -570.8798f, 20f};
			vVar46[0 /*3*/] = {-1187.811f, -477.5037f, IntToFloat(50 + iParam4)};
			fVar92[0] = 162f;
			vVar0[1 /*3*/] = {-1201.378f, -485.9673f, 20f};
			vVar46[1 /*3*/] = {-1215.796f, -464.8281f, IntToFloat(50 + iParam4)};
			fVar92[1] = 124f;
			vVar0[2 /*3*/] = {-985.6311f, -525.4233f, 20f};
			vVar46[2 /*3*/] = {-1013.393f, -475.2057f, IntToFloat(50 + iParam4)};
			fVar92[2] = 55f;
			vVar0[3 /*3*/] = {-1055.849f, -477.8226f, 20f};
			vVar46[3 /*3*/] = {-1073.333f, -498.717f, IntToFloat(50 + iParam4)};
			fVar92[3] = 142f;
			iVar108 = 4;
			break;
		
		case 8:
			vVar0[0 /*3*/] = {461.5684f, -984.572f, 29.43951f};
			vVar46[0 /*3*/] = {471.17f, -984.4292f, 40.14212f};
			fVar92[0] = 7.75f;
			vVar0[1 /*3*/] = {457.3404f, -984.756f, 34.43951f};
			vVar46[1 /*3*/] = {457.2084f, -993.7189f, 29.38958f};
			fVar92[1] = 14.75f;
			vVar0[2 /*3*/] = {477.6227f, -986.6f, 40.00819f};
			vVar46[2 /*3*/] = {424.8687f, -986.3279f, 48.71241f};
			fVar92[2] = 31.5f;
			vVar0[3 /*3*/] = {474.3889f, -974.4613f, 39.55761f};
			vVar46[3 /*3*/] = {474.0358f, -1021.972f, 49.10033f};
			fVar92[3] = 30.5f;
			vVar0[4 /*3*/] = {442.1768f, -974.1888f, 29.68951f};
			vVar46[4 /*3*/] = {442.1855f, -979.8635f, 33.43951f};
			fVar92[4] = 6.75f;
			iVar108 = 5;
			break;
	}
	iVar109 = 0;
	while (iVar109 < iVar108)
	{
		if (is_point_in_angled_area(vParam0, vVar0[iVar109 /*3*/], vVar46[iVar109 /*3*/], fVar92[iVar109], iVar110, true))
		{
			return true;
		}
		iVar109++;
	}
	return false;
}

void func_145()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iLocal_1475 < 1)
	{
		if (!is_audio_scene_active("PS_PREP_INTERCEPT_CONVOY"))
		{
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (does_entity_exist(Local_94[iVar0 /*2*/]))
				{
					if (vdist2(get_entity_coords(Local_94[iVar0 /*2*/], 0), get_entity_coords(player_ped_id(), 0)) < 1000f)
					{
						start_audio_scene("PS_PREP_INTERCEPT_CONVOY");
					}
				}
				iVar0++;
			}
		}
	}
	else if (iLocal_1475 == 1)
	{
		if (!is_audio_scene_active("PS_PREP_MILITARY_TRUCK_SHOOTOUT"))
		{
			start_audio_scene("PS_PREP_MILITARY_TRUCK_SHOOTOUT");
		}
	}
	else if (iLocal_1475 >= 1)
	{
		if (is_audio_scene_active("PS_PREP_INTERCEPT_CONVOY"))
		{
			stop_audio_scene("PS_PREP_INTERCEPT_CONVOY");
			iVar1 = 0;
			while (iVar1 < 3)
			{
				if (does_entity_exist(Local_94[1 /*2*/]))
				{
					_0x18EB48CFC41F2EA0(Local_94[1 /*2*/], 0f);
				}
				iVar1++;
			}
			iVar2 = 0;
			while (iVar2 <= 3)
			{
				if (does_entity_exist(Global_88108[iVar2]))
				{
					_0x18EB48CFC41F2EA0(Global_88108[iVar2], 0f);
				}
				iVar2++;
			}
		}
		if (is_audio_scene_active("PS_PREP_MILITARY_TRUCK_SHOOTOUT"))
		{
			stop_audio_scene("PS_PREP_MILITARY_TRUCK_SHOOTOUT");
		}
	}
}

void func_146()
{
	switch (iLocal_437)
	{
		case 1:
			if (fLocal_440 != 0f)
			{
				fLocal_440 = 0f;
			}
			if (fLocal_439 <= 0f)
			{
				fLocal_439 = 0f;
				iLocal_437 = 0;
			}
			else if (fLocal_439 > 0f)
			{
				fLocal_439 -= 0.02f;
			}
		
		case 0:
			if (func_149())
			{
				iLocal_437 = 3;
				fLocal_438 = fLocal_439;
				fLocal_440 = 1f;
			}
			break;
		
		case 3:
			if (fLocal_440 != 1f)
			{
				fLocal_440 = 1f;
			}
			if (fLocal_439 >= 1f)
			{
				iLocal_437 = 2;
				fLocal_439 = 1f;
			}
			else if (fLocal_439 < 1f)
			{
				fLocal_439 += 0.02f;
			}
		
		case 2:
			if (!func_149())
			{
				iLocal_437 = 1;
				fLocal_438 = fLocal_439;
				fLocal_440 = 0f;
			}
			break;
	}
	if (iLocal_437 == 3 || iLocal_437 == 1)
	{
		func_147(fLocal_438, fLocal_440, fLocal_439);
		_set_door_ajar_angle(Global_34834[20 /*31*/], fLocal_439, 0, 1);
		_set_door_acceleration_limit(Global_34834[20 /*31*/], 4, 0, 1);
	}
}

float func_147(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	fVar0 = 1f - cos(func_148(fParam2 * 3.141593f)) * 0.5f;
	return fParam0 * 1f - fVar0 + fParam1 * fVar0;
}

float func_148(float fParam0)
{
	return fParam0 * 57.29578f;
}

bool func_149()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if ((does_entity_exist(Local_94[iVar0 /*2*/]) && is_vehicle_driveable(Local_94[iVar0 /*2*/], 0)) && is_entity_in_angled_area(Local_94[iVar0 /*2*/], -1591.019f, 2803.731f, 15.41812f, -1569.92f, 2777.878f, 22.14856f, 8.25f, 0, true, 0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_150()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = func_158(iVar0);
		if (!is_ped_injured(iVar1))
		{
			if (!func_157(iVar1))
			{
				if (func_156(iVar1, 0))
				{
					if (func_155(iVar1) || func_153(iVar1))
					{
						if (func_152(iVar1, 0))
						{
							set_entity_as_mission_entity(iVar1, true, 1);
							set_blocking_of_non_temporary_events(iVar1, true);
							clear_ped_tasks(iVar1);
						}
					}
				}
			}
			else if (func_155(iVar1) && does_entity_belong_to_this_script(iVar1, 1))
			{
				request_waypoint_recording(sLocal_491);
				iLocal_1485 = is_entity_in_angled_area(iVar1, 1365.772f, 3625.582f, 33.69244f, 1374.662f, 3598.951f, 36.8947f, 34f, 0, true, 0);
				if (!iLocal_1485)
				{
					if (get_script_task_status(iVar1, -1273030092) != 1 && get_script_task_status(iVar1, -1273030092) != 0)
					{
						task_vehicle_drive_to_coord_longrange(iVar1, get_vehicle_ped_is_in(iVar1, 0), 1376.77f, 3605.09f, 33.88f, 30f, 786469, 2f);
					}
				}
				else if (!is_waypoint_playback_going_on_for_vehicle(Local_94[0 /*2*/]))
				{
					request_waypoint_recording(sLocal_491);
					if (get_is_waypoint_recording_loaded(sLocal_491))
					{
						task_vehicle_follow_waypoint_recording(iVar1, Local_94[0 /*2*/], sLocal_491, 786469, 0, 8, -1, 10f, 0, 2f);
					}
				}
			}
			else if (func_153(iVar1) && does_entity_belong_to_this_script(iVar1, 1))
			{
				if (func_31(Local_111[5 /*14*/]))
				{
					if (get_script_task_status(iVar1, -1273030092) != 1 && get_script_task_status(iVar1, -1273030092) != 0)
					{
						task_vehicle_mission_ped_target(iVar1, get_vehicle_ped_is_in(iVar1, 0), Local_111[5 /*14*/], 7, 15f, 786469, 15f, -1f, 1);
					}
				}
			}
			else
			{
				func_151(iVar1);
			}
		}
		iVar0++;
	}
}

bool func_151(int iParam0)
{
	int iVar0;
	
	return false;
	if (!is_ped_injured(iParam0))
	{
		iVar0 = func_29(iParam0);
		if (iVar0 > 3)
		{
			return false;
		}
		if (func_158(iVar0) != iParam0)
		{
			return false;
		}
		if (!is_bit_set(Global_87465, iVar0))
		{
			return false;
		}
		clear_bit(&Global_87465, iVar0);
		return true;
	}
	return false;
}

bool func_152(int iParam0, int iParam1)
{
	int iVar0;
	
	return false;
	if (!is_ped_injured(iParam0))
	{
		iVar0 = func_29(iParam0);
		if (iVar0 > 3)
		{
			return false;
		}
		if (func_158(iVar0) != iParam0)
		{
			return false;
		}
		if (is_bit_set(Global_87465, iVar0))
		{
			return false;
		}
		if (iParam1 == 0)
		{
			if (iParam0 == player_ped_id())
			{
				return false;
			}
		}
		if (is_bit_set(Global_87464, iVar0))
		{
			set_ped_infinite_ammo(iParam0, 0, false);
			set_entity_load_collision_flag(iParam0, false);
			set_bit(&Global_87465, iVar0);
			return true;
		}
	}
	return false;
}

bool func_153(int iParam0)
{
	if (!func_154())
	{
		if (func_31(Local_94[0 /*2*/]) && iLocal_434 == 0)
		{
			if (func_31(player_ped_id()) && is_ped_in_any_vehicle(player_ped_id(), 0))
			{
				if (is_ped_in_vehicle(iParam0, get_vehicle_ped_is_in(player_ped_id(), 0), 0) && get_ped_in_vehicle_seat(get_vehicle_ped_is_in(player_ped_id(), 0), -1) == iParam0)
				{
					return true;
				}
			}
		}
	}
	return false;
}

int func_154()
{
	if (!network_is_game_in_progress())
	{
		return Global_89089.f_44 == 1;
	}
	return false;
}

bool func_155(int iParam0)
{
	if (!func_154())
	{
		if (func_31(Local_94[0 /*2*/]) && !is_entity_in_angled_area(Local_94[0 /*2*/], 1364.248f, 3620.511f, 33.89069f, 1350.9f, 3616.225f, 37.12358f, 6.5f, 0, true, 0))
		{
			if (func_31(player_ped_id()) && is_ped_in_vehicle(player_ped_id(), Local_94[0 /*2*/], 0))
			{
				if (is_ped_in_vehicle(iParam0, Local_94[0 /*2*/], 0) && get_ped_in_vehicle_seat(Local_94[0 /*2*/], -1) == iParam0)
				{
					return true;
				}
			}
		}
	}
	return false;
}

bool func_156(int iParam0, int iParam1)
{
	int iVar0;
	
	return false;
	if (!is_ped_injured(iParam0))
	{
		iVar0 = func_29(iParam0);
		if (iVar0 > 3)
		{
			return false;
		}
		if (func_158(iVar0) != iParam0)
		{
			return false;
		}
		if (iParam1 == 0)
		{
			if (iParam0 == player_ped_id())
			{
				return false;
			}
		}
		if (is_bit_set(Global_87464, iVar0))
		{
			return true;
		}
	}
	return false;
}

bool func_157(int iParam0)
{
	int iVar0;
	
	return false;
	if (!is_ped_injured(iParam0))
	{
		iVar0 = func_29(iParam0);
		if (iVar0 > 3)
		{
			return false;
		}
		if (func_158(iVar0) != iParam0)
		{
			return false;
		}
		if (is_bit_set(Global_87465, iVar0))
		{
			return true;
		}
	}
	return false;
}

int func_158(int iParam0)
{
	if (iParam0 > 3)
	{
		return false;
	}
	if (iParam0 == func_19())
	{
		return player_ped_id();
	}
	return Global_89089[func_159(iParam0)];
}

int func_159(int iParam0)
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

void func_160()
{
	int iVar0;
	Vector3 fVar1;
	Vector3 fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	switch (iLocal_434)
	{
		case 0:
			if (!iLocal_456)
			{
				func_176();
				func_170();
				if (((((func_31(Local_111[4 /*14*/]) && func_31(Local_111[0 /*14*/])) && func_31(Local_111[5 /*14*/])) && func_31(Local_94[1 /*2*/])) && func_31(Local_94[2 /*2*/])) && func_31(Local_94[0 /*2*/]))
				{
					if (is_entity_in_angled_area(Local_94[0 /*2*/], -1521.829f, 2725.003f, 16.64367f, -1600.763f, 2794.875f, 21.45629f, 30f, 0, true, 0) && is_ped_in_vehicle(Local_111[4 /*14*/], Local_94[0 /*2*/], 0))
					{
						iLocal_434 = 2;
						iLocal_471 = 0;
					}
					fVar1 = vdist(get_entity_coords(Local_94[1 /*2*/], 0), get_entity_coords(Local_94[0 /*2*/], 0));
					if (vdist(get_entity_coords(Local_94[1 /*2*/], 0), get_entity_coords(Local_94[2 /*2*/], 0)) > fVar1)
					{
						fVar1 = vdist(get_entity_coords(Local_94[1 /*2*/], 0), get_entity_coords(Local_94[2 /*2*/], 0));
					}
					fVar3 = 11f + 11f / 100f - 40f * 40f;
					fVar2 = func_169(-11f / 100f - 40f * fVar1 + fVar3, 0f, 11f);
					if (is_ped_sitting_in_vehicle(Local_111[0 /*14*/], Local_94[1 /*2*/]))
					{
						set_drive_task_cruise_speed(Local_111[0 /*14*/], fVar2);
					}
				}
			}
			else
			{
				if (func_31(Local_94[0 /*2*/]))
				{
					vLocal_460 = {get_entity_coords(Local_94[0 /*2*/], 0)};
				}
				iLocal_436 = 0;
				iLocal_435 = 0;
				iLocal_434 = 1;
			}
			break;
		
		case 2:
			if (!iLocal_456)
			{
				func_170();
				if (((((func_31(Local_111[4 /*14*/]) && func_31(Local_111[0 /*14*/])) && func_31(Local_111[5 /*14*/])) && func_31(Local_94[1 /*2*/])) && func_31(Local_94[2 /*2*/])) && func_31(Local_94[0 /*2*/]))
				{
					switch (iLocal_471)
					{
						case 0:
							if (!func_178(Local_111[0 /*14*/], 242628503, 1))
							{
								if (iLocal_437 == 2 || (iLocal_437 == 3 && fLocal_439 > 0.8f))
								{
									open_sequence_task(&iVar4);
									task_vehicle_mission_coors_target(false, Local_94[1 /*2*/], -1785.46f, 3169.625f, 31.93f, 4, 10f, 786603, 3f, 3f, 1);
									task_vehicle_mission_coors_target(false, Local_94[1 /*2*/], -1885.875f, 3006.152f, 31.81027f, 4, 10f, 786603, -1f, -1f, 1);
									close_sequence_task(iVar4);
									task_perform_sequence(Local_111[0 /*14*/], iVar4);
									clear_sequence_task(&iVar4);
								}
							}
							if (!func_178(Local_111[4 /*14*/], -1273030092, 1))
							{
								task_vehicle_escort(Local_111[4 /*14*/], Local_94[0 /*2*/], Local_94[1 /*2*/], -1, 11f, 786603, -1f, 20, 0f);
							}
							if (!func_178(Local_111[5 /*14*/], -1273030092, 1))
							{
								task_vehicle_escort(Local_111[5 /*14*/], Local_94[2 /*2*/], Local_94[0 /*2*/], -1, 11f, 786603, -1f, 20, 0f);
							}
							if (is_entity_at_coord(Local_111[0 /*14*/], -1885.875f, 3006.152f, 31.81027f, 5f, 5f, 5f, false, true, 0))
							{
								iVar0 = 0;
								while (iVar0 <= 9 - 1)
								{
									if (func_31(Local_111[iVar0 /*14*/]))
									{
										set_ped_as_cop(Local_111[iVar0 /*14*/], 1);
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_111[iVar0 /*14*/], 3, true);
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_111[iVar0 /*14*/], 1, true);
										if ((iVar0 == 0 || iVar0 == 5) || iVar0 == 4)
										{
											task_leave_any_vehicle(Local_111[iVar0 /*14*/], 200, 65536);
										}
										else if ((iVar0 == 1 || iVar0 == 6) || iVar0 == 7)
										{
											task_leave_any_vehicle(Local_111[iVar0 /*14*/], false, 65536);
										}
										else
										{
											task_leave_any_vehicle(Local_111[iVar0 /*14*/], 1000, 65536);
										}
										func_194(&(Local_111[iVar0 /*14*/]), 1, 1, 1);
									}
									iVar0++;
								}
								iLocal_471++;
							}
							break;
						
						case 1:
							break;
						}
				}
			}
			else
			{
				if (func_31(Local_94[0 /*2*/]))
				{
					vLocal_460 = {get_entity_coords(Local_94[0 /*2*/], 1)};
				}
				iLocal_436 = 0;
				iLocal_435 = 0;
				iLocal_434 = 1;
			}
			break;
		
		case 1:
			get_closest_ped(vLocal_460, 50f, 1, 0, &iVar5, 0, 0, -1);
			if (func_31(iVar5))
			{
				set_ped_flee_attributes(iVar5, 2, false);
				set_ped_flee_attributes(iVar5, 2048, false);
			}
			switch (iLocal_435)
			{
				case 0:
					switch (iLocal_436)
					{
						case 0:
							iLocal_436 = func_168(Local_94[0 /*2*/]);
							break;
						
						case 1:
							if (func_31(Local_111[0 /*14*/]) && func_31(Local_94[1 /*2*/]))
							{
								if (is_ped_in_vehicle(Local_111[0 /*14*/], Local_94[1 /*2*/], 0))
								{
									open_sequence_task(&iLocal_446);
									if (get_entity_speed(Local_111[0 /*14*/]) > 5f)
									{
										task_vehicle_temp_action(false, Local_94[1 /*2*/], 5, 1000);
									}
									else
									{
										task_vehicle_temp_action(false, Local_94[1 /*2*/], 14, 1500);
									}
									task_leave_any_vehicle(false, 720, 65536);
									close_sequence_task(iLocal_446);
									task_perform_sequence(Local_111[0 /*14*/], iLocal_446);
									clear_sequence_task(&iLocal_446);
								}
							}
							if (func_31(Local_111[4 /*14*/]) && func_31(Local_94[0 /*2*/]))
							{
								if (is_ped_in_vehicle(Local_111[4 /*14*/], Local_94[0 /*2*/], 0))
								{
									open_sequence_task(&iLocal_446);
									if (get_entity_speed(Local_111[4 /*14*/]) > 5f)
									{
										task_vehicle_temp_action(false, Local_94[0 /*2*/], 4, 2500);
									}
									else
									{
										task_vehicle_temp_action(false, Local_94[0 /*2*/], 13, 1500);
									}
									task_leave_any_vehicle(false, 500, 65536);
									close_sequence_task(iLocal_446);
									task_perform_sequence(Local_111[4 /*14*/], iLocal_446);
									clear_sequence_task(&iLocal_446);
								}
							}
							if ((func_31(Local_111[5 /*14*/]) && func_31(Local_94[2 /*2*/])) && func_31(Local_94[1 /*2*/]))
							{
								if (is_ped_in_vehicle(Local_111[5 /*14*/], Local_94[2 /*2*/], 0))
								{
									open_sequence_task(&iLocal_446);
									if (vdist2(get_entity_coords(Local_94[2 /*2*/], 0), get_entity_coords(Local_94[1 /*2*/], 0)) < 1000f)
									{
										task_vehicle_drive_to_coord(false, Local_94[2 /*2*/], get_offset_from_entity_in_world_coords(Local_94[1 /*2*/], -3f, 0f, 0f), 10f, 0, joaat("crusader"), 786469, 4f, -1f);
									}
									task_vehicle_temp_action(false, Local_94[2 /*2*/], 5, 1000);
									task_leave_any_vehicle(false, false, 65536);
									close_sequence_task(iLocal_446);
									task_perform_sequence(Local_111[5 /*14*/], iLocal_446);
									clear_sequence_task(&iLocal_446);
								}
							}
							iLocal_435 = 1;
							break;
						
						case 2:
							if (func_31(Local_111[0 /*14*/]) && func_31(Local_94[1 /*2*/]))
							{
								if (is_ped_in_vehicle(Local_111[0 /*14*/], Local_94[1 /*2*/], 0))
								{
									open_sequence_task(&iLocal_446);
									task_vehicle_temp_action(false, Local_94[1 /*2*/], 5, 1500);
									task_leave_any_vehicle(false, 900, 65536);
									close_sequence_task(iLocal_446);
									task_perform_sequence(Local_111[0 /*14*/], iLocal_446);
									clear_sequence_task(&iLocal_446);
								}
							}
							if (func_31(Local_111[4 /*14*/]) && func_31(Local_94[0 /*2*/]))
							{
								if (is_ped_in_vehicle(Local_111[4 /*14*/], Local_94[0 /*2*/], 0))
								{
									open_sequence_task(&iLocal_446);
									task_vehicle_temp_action(false, Local_94[0 /*2*/], 5, 1000);
									task_leave_any_vehicle(false, 100, 65536);
									close_sequence_task(iLocal_446);
									task_perform_sequence(Local_111[4 /*14*/], iLocal_446);
									clear_sequence_task(&iLocal_446);
								}
							}
							if ((func_31(Local_111[5 /*14*/]) && func_31(Local_94[2 /*2*/])) && func_31(Local_94[0 /*2*/]))
							{
								if (is_ped_in_vehicle(Local_111[5 /*14*/], Local_94[2 /*2*/], 0))
								{
									open_sequence_task(&iLocal_446);
									if (vdist2(get_entity_coords(Local_94[2 /*2*/], 0), get_entity_coords(Local_94[0 /*2*/], 0)) < 1000f)
									{
										task_vehicle_drive_to_coord(false, Local_94[2 /*2*/], get_offset_from_entity_in_world_coords(Local_94[0 /*2*/], -2f, 1f, 0f), 10f, 0, joaat("crusader"), 786469, 4f, -1f);
									}
									task_leave_any_vehicle(false, 120, 65536);
									close_sequence_task(iLocal_446);
									task_perform_sequence(Local_111[5 /*14*/], iLocal_446);
									clear_sequence_task(&iLocal_446);
								}
							}
							iLocal_435 = 1;
							break;
						
						case 3:
							if ((func_31(Local_111[0 /*14*/]) && func_31(Local_94[1 /*2*/])) && func_31(Local_94[2 /*2*/]))
							{
								if (is_ped_in_vehicle(Local_111[0 /*14*/], Local_94[1 /*2*/], 0))
								{
									open_sequence_task(&iLocal_446);
									task_vehicle_temp_action(false, Local_94[1 /*2*/], 6, 500);
									if (vdist2(get_entity_coords(Local_94[1 /*2*/], 0), get_entity_coords(Local_94[2 /*2*/], 0)) < 1000f)
									{
										task_vehicle_drive_to_coord(false, Local_94[1 /*2*/], get_offset_from_entity_in_world_coords(Local_94[2 /*2*/], 2f, 0f, 0f), 10f, 0, joaat("crusader"), 786469, 4f, -1f);
									}
									task_vehicle_temp_action(false, Local_94[1 /*2*/], 5, 1000);
									task_leave_any_vehicle(false, 420, 65536);
									close_sequence_task(iLocal_446);
									task_perform_sequence(Local_111[0 /*14*/], iLocal_446);
									clear_sequence_task(&iLocal_446);
								}
							}
							if (func_31(Local_111[4 /*14*/]) && func_31(Local_94[0 /*2*/]))
							{
								if (is_ped_in_vehicle(Local_111[4 /*14*/], Local_94[0 /*2*/], 0))
								{
									if (get_entity_speed(Local_111[4 /*14*/]) > 5f)
									{
										open_sequence_task(&iLocal_446);
										task_vehicle_temp_action(false, Local_94[0 /*2*/], 5, 1500);
										task_leave_any_vehicle(false, 380, 65536);
										close_sequence_task(iLocal_446);
										task_perform_sequence(Local_111[4 /*14*/], iLocal_446);
										clear_sequence_task(&iLocal_446);
									}
								}
							}
							if (func_31(Local_111[5 /*14*/]) && func_31(Local_94[2 /*2*/]))
							{
								if (is_ped_in_vehicle(Local_111[5 /*14*/], Local_94[2 /*2*/], 0))
								{
									if (get_entity_speed(Local_111[5 /*14*/]) > 5f)
									{
										open_sequence_task(&iLocal_446);
										task_vehicle_temp_action(false, Local_94[2 /*2*/], 4, 1500);
										task_leave_any_vehicle(false, 250, 65536);
										close_sequence_task(iLocal_446);
										task_perform_sequence(Local_111[5 /*14*/], iLocal_446);
										clear_sequence_task(&iLocal_446);
									}
								}
							}
							iLocal_435 = 1;
							break;
						
						case 4:
							if (func_31(Local_111[0 /*14*/]) && func_31(Local_94[1 /*2*/]))
							{
								if (is_ped_in_vehicle(Local_111[0 /*14*/], Local_94[1 /*2*/], 0))
								{
									open_sequence_task(&iLocal_446);
									task_vehicle_temp_action(false, Local_94[1 /*2*/], 4, 1500);
									task_leave_any_vehicle(false, 800, 65536);
									close_sequence_task(iLocal_446);
									task_perform_sequence(Local_111[0 /*14*/], iLocal_446);
									clear_sequence_task(&iLocal_446);
								}
							}
							if (func_31(Local_111[4 /*14*/]) && func_31(Local_94[0 /*2*/]))
							{
								if (is_ped_in_vehicle(Local_111[4 /*14*/], Local_94[0 /*2*/], 0))
								{
									open_sequence_task(&iLocal_446);
									task_vehicle_temp_action(false, Local_94[0 /*2*/], 4, 1500);
									task_leave_any_vehicle(false, 50, 65536);
									close_sequence_task(iLocal_446);
									task_perform_sequence(Local_111[4 /*14*/], iLocal_446);
									clear_sequence_task(&iLocal_446);
								}
							}
							if ((func_31(Local_111[5 /*14*/]) && func_31(Local_94[2 /*2*/])) && func_31(Local_94[0 /*2*/]))
							{
								if (is_ped_in_vehicle(Local_111[5 /*14*/], Local_94[2 /*2*/], 0))
								{
									open_sequence_task(&iLocal_446);
									if (vdist2(get_entity_coords(Local_94[2 /*2*/], 0), get_entity_coords(Local_94[0 /*2*/], 0)) < 1000f)
									{
										task_vehicle_drive_to_coord(false, Local_94[2 /*2*/], get_offset_from_entity_in_world_coords(Local_94[0 /*2*/], -2f, 1f, 0f), 10f, 0, joaat("crusader"), 786469, 4f, -1f);
									}
									task_leave_any_vehicle(false, 500, 65536);
									close_sequence_task(iLocal_446);
									task_perform_sequence(Local_111[5 /*14*/], iLocal_446);
									clear_sequence_task(&iLocal_446);
								}
							}
							iLocal_435 = 1;
							break;
					}
					break;
				
				case 1:
					iVar0 = 0;
					while (iVar0 <= 9 - 1)
					{
						if (func_31(Local_111[iVar0 /*14*/]) && func_31(player_ped_id()))
						{
							set_ped_accuracy(Local_111[iVar0 /*14*/], 10);
							set_ped_seeing_range(Local_111[iVar0 /*14*/], 580f);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_111[iVar0 /*14*/], 0, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_111[iVar0 /*14*/], 50, true);
							PED::SET_PED_CONFIG_FLAG(Local_111[iVar0 /*14*/], 184, false);
							set_ped_combat_movement(Local_111[iVar0 /*14*/], 1);
							func_167(iVar0);
							if ((iVar0 != 0 && iVar0 != 4) && iVar0 != 5)
							{
								if (iVar0 == 6)
								{
									iVar6 = 300;
								}
								else if (iVar0 == 1)
								{
									iVar6 = 900;
								}
								else if (iVar0 == 7)
								{
									iVar6 = 250;
								}
								else if (iVar0 == 2)
								{
									iVar6 = 350;
								}
								else if (iVar0 == 8)
								{
									iVar6 = 500;
								}
								else if (iVar0 == 3)
								{
									iVar6 = 650;
								}
								open_sequence_task(&iLocal_446);
								if (is_ped_in_any_vehicle(Local_111[iVar0 /*14*/], 0))
								{
									task_pause(false, iVar6);
								}
								task_leave_any_vehicle(false, iVar6, 65536);
								close_sequence_task(iLocal_446);
								task_perform_sequence(Local_111[iVar0 /*14*/], iLocal_446);
								clear_sequence_task(&iLocal_446);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_111[iVar0 /*14*/], 3, true);
							}
						}
						iVar0++;
					}
					iLocal_435 = func_166();
					break;
				
				case 2:
					iVar0 = 0;
					while (iVar0 <= 9 - 1)
					{
						if (func_31(Local_111[iVar0 /*14*/]) && func_31(player_ped_id()))
						{
							func_167(iVar0);
							if (is_ped_in_cover(player_ped_id(), 0))
							{
								iLocal_466 = 8000;
							}
							else
							{
								iLocal_466 = 12000;
							}
							if (get_distance_between_coords(get_entity_coords(Local_111[iVar0 /*14*/], 0), get_entity_coords(player_ped_id(), 1), 1) < 75f)
							{
								if (!Local_111[iVar0 /*14*/].f_12 && get_game_timer() - iLocal_467 > iLocal_466)
								{
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_111[iVar0 /*14*/], 51, true);
									Local_111[iVar0 /*14*/].f_12 = 1;
									iLocal_467 = get_game_timer();
								}
							}
							else
							{
								set_ped_combat_movement(Local_111[iVar0 /*14*/], 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_111[iVar0 /*14*/], 51, false);
								Local_111[iVar0 /*14*/].f_12 = 0;
							}
							if (!func_178(Local_111[iVar0 /*14*/], 780511057, 1))
							{
								task_combat_ped(Local_111[iVar0 /*14*/], player_ped_id(), 0, 16);
							}
						}
						iVar0++;
					}
					iLocal_435 = func_166();
					break;
				
				case 3:
					iVar0 = 0;
					while (iVar0 <= 9 - 1)
					{
						if (func_31(Local_111[iVar0 /*14*/]) && func_31(player_ped_id()))
						{
							if (get_distance_between_coords(get_entity_coords(Local_111[iVar0 /*14*/], 0), get_entity_coords(player_ped_id(), 1), 1) > 120f)
							{
								set_ped_combat_movement(Local_111[iVar0 /*14*/], 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_111[iVar0 /*14*/], 51, false);
								Local_111[iVar0 /*14*/].f_12 = 0;
								func_167(iVar0);
							}
							if (!func_178(Local_111[iVar0 /*14*/], 780511057, 1))
							{
								task_combat_ped(Local_111[iVar0 /*14*/], player_ped_id(), 0, 16);
							}
						}
						iVar0++;
					}
					iLocal_435 = func_166();
					break;
				
				case 4:
					if (func_165(player_ped_id(), vLocal_49, 1) < 30f)
					{
						iVar7 = 1;
					}
					iVar0 = 0;
					while (iVar0 <= 9 - 1)
					{
						if ((func_31(player_ped_id()) && func_31(Local_111[iVar0 /*14*/])) && func_31(Local_94[0 /*2*/]))
						{
							if (iVar7 && func_165(Local_111[iVar0 /*14*/], vLocal_49, 1) < 30f)
							{
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_111[iVar0 /*14*/], 1, false);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_111[iVar0 /*14*/], 3, true);
								remove_ped_defensive_area(Local_111[iVar0 /*14*/], 0);
								set_ped_combat_movement(Local_111[iVar0 /*14*/], 2);
								if (!is_ped_in_combat(Local_111[iVar0 /*14*/], false))
								{
									task_combat_ped(Local_111[iVar0 /*14*/], player_ped_id(), 0, 16);
								}
							}
							else if (is_ped_in_vehicle(player_ped_id(), Local_94[0 /*2*/], 0) || get_distance_between_coords(get_entity_coords(Local_94[0 /*2*/], 0), get_entity_coords(Local_111[iVar0 /*14*/], 0), 1) > 120f / 2f)
							{
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_111[iVar0 /*14*/], 1, true);
								if (get_distance_between_coords(get_entity_coords(player_ped_id(), 1), get_entity_coords(Local_111[iVar0 /*14*/], 0), 1) > 120f * 2f)
								{
									if (!is_ped_in_any_vehicle(Local_111[iVar0 /*14*/], 0) && !is_entity_on_screen(Local_111[iVar0 /*14*/]))
									{
										iVar9 = func_164(Local_111[iVar0 /*14*/]);
										if (func_31(iVar9))
										{
											iVar8 = -1;
											if (is_vehicle_seat_free(iVar9, -1))
											{
												iVar8 = -1;
											}
											else if (is_vehicle_seat_free(iVar9, false))
											{
												iVar8 = false;
											}
											else if (is_vehicle_seat_free(iVar9, true))
											{
												iVar8 = true;
											}
											else if (is_vehicle_seat_free(iVar9, 2))
											{
												iVar8 = 2;
											}
											if (func_163(iVar9))
											{
												if (get_script_task_status(Local_111[iVar0 /*14*/], -1794415470) != 1)
												{
													task_enter_vehicle(Local_111[iVar0 /*14*/], iVar9, 1000, iVar8, 2f, 16, 0);
												}
												PED::SET_PED_COMBAT_ATTRIBUTES(Local_111[iVar0 /*14*/], 3, false);
											}
											else
											{
												set_ped_as_no_longer_needed(&(Local_111[iVar0 /*14*/]));
											}
										}
										else
										{
											set_ped_as_no_longer_needed(&(Local_111[iVar0 /*14*/]));
										}
									}
									else if (!is_ped_in_combat(Local_111[iVar0 /*14*/], false))
									{
										task_combat_ped(Local_111[iVar0 /*14*/], player_ped_id(), 0, 16);
									}
								}
								else if (is_ped_sitting_in_any_vehicle(Local_111[iVar0 /*14*/]))
								{
									if (func_162(player_ped_id(), Local_111[iVar0 /*14*/], 1) < 35f)
									{
										if (func_161(Local_111[iVar0 /*14*/], get_vehicle_ped_is_in(Local_111[iVar0 /*14*/], 0)) == -1)
										{
											if (get_game_timer() - iLocal_469 > 40000)
											{
												if (iLocal_470)
												{
													iLocal_470 = false;
													iLocal_469 = get_game_timer();
												}
												else
												{
													iLocal_470 = true;
													iLocal_469 = get_game_timer();
												}
											}
											if (iLocal_470)
											{
												if (!func_178(Local_111[iVar0 /*14*/], -1273030092, 1))
												{
													task_vehicle_escort(Local_111[iVar0 /*14*/], get_vehicle_ped_is_in(Local_111[iVar0 /*14*/], 0), Local_94[0 /*2*/], 1, 11f, 786468, -1f, 20, 0f);
												}
											}
											else if (!is_ped_in_combat(Local_111[iVar0 /*14*/], false))
											{
												task_combat_ped(Local_111[iVar0 /*14*/], player_ped_id(), 0, 16);
											}
										}
										else if (!is_ped_in_combat(Local_111[iVar0 /*14*/], false))
										{
											task_combat_ped(Local_111[iVar0 /*14*/], player_ped_id(), 0, 16);
										}
										if (get_entity_speed(player_ped_id()) < 2f && func_162(player_ped_id(), Local_111[iVar0 /*14*/], 1) < 20f)
										{
											PED::SET_PED_COMBAT_ATTRIBUTES(Local_111[iVar0 /*14*/], 3, true);
										}
										else
										{
											PED::SET_PED_COMBAT_ATTRIBUTES(Local_111[iVar0 /*14*/], 3, false);
										}
									}
									else if (!is_ped_in_combat(Local_111[iVar0 /*14*/], false))
									{
										task_combat_ped(Local_111[iVar0 /*14*/], player_ped_id(), 0, 16);
									}
								}
								else if (!is_ped_in_combat(Local_111[iVar0 /*14*/], false))
								{
									task_combat_ped(Local_111[iVar0 /*14*/], player_ped_id(), 0, 16);
								}
							}
							else if (!is_ped_in_vehicle(player_ped_id(), Local_94[0 /*2*/], 0))
							{
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_111[iVar0 /*14*/], 1, false);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_111[iVar0 /*14*/], 3, true);
								remove_ped_defensive_area(Local_111[iVar0 /*14*/], 0);
								set_ped_combat_movement(Local_111[iVar0 /*14*/], 2);
							}
						}
						iVar0++;
					}
					iLocal_435 = func_166();
					break;
			}
			break;
	}
}

int func_161(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0, 0) && !is_entity_dead(iParam1, 0))
	{
		if (is_ped_sitting_in_vehicle(iParam0, iParam1))
		{
			if (get_ped_in_vehicle_seat(iParam1, -1) == iParam0)
			{
				return -1;
			}
			if (get_ped_in_vehicle_seat(iParam1, false) == iParam0)
			{
				return 0;
			}
			if (get_ped_in_vehicle_seat(iParam1, true) == iParam0)
			{
				return 1;
			}
			if (get_ped_in_vehicle_seat(iParam1, 2) == iParam0)
			{
				return 2;
			}
		}
	}
	return -2;
}

auto func_162(int iParam0, int iParam1, int iParam2)
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

bool func_163(int iParam0)
{
	if (!is_entity_dead(iParam0, 0))
	{
		if (is_vehicle_seat_free(iParam0, -1))
		{
			return true;
		}
		if (is_vehicle_seat_free(iParam0, false))
		{
			return true;
		}
		if (is_vehicle_seat_free(iParam0, true))
		{
			return true;
		}
		if (is_vehicle_seat_free(iParam0, 2))
		{
			return true;
		}
	}
	return false;
}

auto func_164(int iParam0)
{
	auto uVar0;
	float fVar1;
	
	uVar0 = Local_94[1 /*2*/];
	fVar1 = 9999f;
	if (func_31(Local_94[1 /*2*/]))
	{
		if (func_162(iParam0, Local_94[1 /*2*/], 1) < fVar1)
		{
			fVar1 = func_162(iParam0, Local_94[1 /*2*/], 1);
			if (func_163(Local_94[1 /*2*/]))
			{
				uVar0 = Local_94[1 /*2*/];
			}
			else
			{
				uVar0 = Local_94[2 /*2*/];
			}
		}
	}
	if (func_31(Local_94[2 /*2*/]))
	{
		if (func_162(iParam0, Local_94[2 /*2*/], 1) < fVar1)
		{
			fVar1 = func_162(iParam0, Local_94[2 /*2*/], 1);
			if (func_163(Local_94[2 /*2*/]))
			{
				uVar0 = Local_94[2 /*2*/];
			}
			else
			{
				uVar0 = Local_94[1 /*2*/];
			}
		}
	}
	return uVar0;
}

auto func_165(int iParam0, Vector3 vParam1, int iParam2)
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

int func_166()
{
	if (func_31(player_ped_id()) && func_31(Local_94[0 /*2*/]))
	{
		if (func_165(Local_94[0 /*2*/], vLocal_460, 1) > 120f)
		{
			return 4;
		}
		else if (func_165(player_ped_id(), vLocal_460, 1) <= 120f)
		{
			return 2;
		}
		else if (func_165(player_ped_id(), vLocal_460, 1) > 120f && !is_ped_in_vehicle(player_ped_id(), Local_94[0 /*2*/], 0))
		{
			return 3;
		}
	}
	return 2;
}

void func_167(int iParam0)
{
	int iVar0;
	Vector3 vVar1;
	Vector3 fVar4;
	
	if (func_31(Local_111[iParam0 /*14*/]))
	{
		if (iParam0 == 0)
		{
			if (func_168(0) == 1)
			{
				vVar1 = {vLocal_73};
				fVar4 = 4.5f;
				iVar0 = Local_94[1 /*2*/];
			}
			else if (func_168(0) == 2)
			{
				vVar1 = {vLocal_79};
				fVar4 = 4.5f;
				iVar0 = Local_94[1 /*2*/];
			}
			else if (func_168(0) == 3)
			{
				vVar1 = {vLocal_52};
				fVar4 = 3.8f;
				iVar0 = Local_94[0 /*2*/];
			}
			else if (func_168(0) == 4)
			{
				vVar1 = {vLocal_73};
				fVar4 = 4.5f;
				iVar0 = Local_94[2 /*2*/];
			}
		}
		else if (iParam0 == 1)
		{
			if (func_168(0) == 1)
			{
				vVar1 = {vLocal_76};
				fVar4 = 2.8f;
				iVar0 = Local_94[1 /*2*/];
			}
			else if (func_168(0) == 2)
			{
				vVar1 = {vLocal_64};
				fVar4 = 5f;
				iVar0 = Local_94[0 /*2*/];
			}
			else if (func_168(0) == 3)
			{
				vVar1 = {vLocal_64};
				fVar4 = 5f;
				iVar0 = Local_94[0 /*2*/];
			}
			else if (func_168(0) == 4)
			{
				vVar1 = {vLocal_73};
				fVar4 = 4.5f;
				iVar0 = Local_94[1 /*2*/];
			}
		}
		else if (iParam0 == 2)
		{
			if (func_168(0) == 1)
			{
				vVar1 = {vLocal_61};
				fVar4 = 3.8f;
				iVar0 = Local_94[0 /*2*/];
			}
			else if (func_168(0) == 2)
			{
				vVar1 = {vLocal_79};
				fVar4 = 4.5f;
				iVar0 = Local_94[1 /*2*/];
			}
			else if (func_168(0) == 3)
			{
				vVar1 = {vLocal_76};
				fVar4 = 2.8f;
				iVar0 = Local_94[1 /*2*/];
			}
			else if (func_168(0) == 4)
			{
				vVar1 = {vLocal_76};
				fVar4 = 2.8f;
				iVar0 = Local_94[1 /*2*/];
			}
		}
		else if (iParam0 == 3)
		{
			if (func_168(0) == 1)
			{
				vVar1 = {vLocal_64};
				fVar4 = 4.5f;
				iVar0 = Local_94[0 /*2*/];
			}
			else if (func_168(0) == 2)
			{
				vVar1 = {vLocal_76};
				fVar4 = 2.8f;
				iVar0 = Local_94[1 /*2*/];
			}
			else if (func_168(0) == 3)
			{
				vVar1 = {vLocal_76};
				fVar4 = 2.8f;
				iVar0 = Local_94[1 /*2*/];
			}
			else if (func_168(0) == 4)
			{
				vVar1 = {vLocal_76};
				fVar4 = 2.8f;
				iVar0 = Local_94[1 /*2*/];
			}
		}
		else if (iParam0 == 5)
		{
			if (func_168(0) == 1)
			{
				vVar1 = {vLocal_76};
				fVar4 = 2.8f;
				iVar0 = Local_94[2 /*2*/];
			}
			else if (func_168(0) == 2)
			{
				vVar1 = {vLocal_79};
				fVar4 = 4.5f;
				iVar0 = Local_94[2 /*2*/];
			}
			else if (func_168(0) == 3)
			{
				vVar1 = {vLocal_70};
				fVar4 = 2.8f;
				iVar0 = Local_94[2 /*2*/];
			}
			else if (func_168(0) == 4)
			{
				vVar1 = {vLocal_55};
				fVar4 = 5f;
				iVar0 = Local_94[0 /*2*/];
			}
		}
		else if (iParam0 == 6)
		{
			if (func_168(0) == 1)
			{
				vVar1 = {vLocal_79};
				fVar4 = 4.5f;
				iVar0 = Local_94[2 /*2*/];
			}
			else if (func_168(0) == 2)
			{
				vVar1 = {vLocal_67};
				fVar4 = 5f;
				iVar0 = Local_94[0 /*2*/];
			}
			else if (func_168(0) == 3)
			{
				vVar1 = {vLocal_70};
				fVar4 = 2.8f;
				iVar0 = Local_94[2 /*2*/];
			}
			else if (func_168(0) == 4)
			{
				vVar1 = {vLocal_73};
				fVar4 = 4.5f;
				iVar0 = Local_94[2 /*2*/];
			}
		}
		else if (iParam0 == 7)
		{
			if (func_168(0) == 1)
			{
				vVar1 = {vLocal_79};
				fVar4 = 4.5f;
				iVar0 = Local_94[2 /*2*/];
			}
			else if (func_168(0) == 2)
			{
				vVar1 = {vLocal_79};
				fVar4 = 4.5f;
				iVar0 = Local_94[2 /*2*/];
			}
			else if (func_168(0) == 3)
			{
				vVar1 = {vLocal_73};
				fVar4 = 4.5f;
				iVar0 = Local_94[2 /*2*/];
			}
			else if (func_168(0) == 4)
			{
				vVar1 = {vLocal_58};
				fVar4 = 5f;
				iVar0 = Local_94[0 /*2*/];
			}
		}
		else if (iParam0 == 8)
		{
			if (func_168(0) == 1)
			{
				vVar1 = {vLocal_55};
				fVar4 = 5f;
				iVar0 = Local_94[0 /*2*/];
			}
			else if (func_168(0) == 2)
			{
				vVar1 = {vLocal_64};
				fVar4 = 5f;
				iVar0 = Local_94[0 /*2*/];
			}
			else if (func_168(0) == 3)
			{
				vVar1 = {vLocal_73};
				fVar4 = 4.5f;
				iVar0 = Local_94[2 /*2*/];
			}
			else if (func_168(0) == 4)
			{
				vVar1 = {vLocal_73};
				fVar4 = 4.5f;
				iVar0 = Local_94[2 /*2*/];
			}
		}
		else if (iParam0 == 4)
		{
			if (func_168(0) == 1)
			{
				vVar1 = {vLocal_58};
				fVar4 = 5f;
				iVar0 = Local_94[0 /*2*/];
			}
			else if (func_168(0) == 2)
			{
				vVar1 = {vLocal_67};
				fVar4 = 5f;
				iVar0 = Local_94[0 /*2*/];
			}
			else if (func_168(0) == 3)
			{
				vVar1 = {vLocal_67};
				fVar4 = 5f;
				iVar0 = Local_94[0 /*2*/];
			}
			else if (func_168(0) == 4)
			{
				vVar1 = {vLocal_55};
				fVar4 = 5f;
				iVar0 = Local_94[0 /*2*/];
			}
		}
		if (!Local_111[iParam0 /*14*/].f_12)
		{
			if (func_31(iVar0))
			{
				set_ped_sphere_defensive_area(Local_111[iParam0 /*14*/], get_offset_from_entity_in_world_coords(iVar0, vVar1), fVar4, 0, 0);
			}
			else if (func_31(Local_94[0 /*2*/]))
			{
				if (func_168(Local_94[0 /*2*/]) == 1)
				{
					_0xE4723DB6E736CCFF(Local_111[iParam0 /*14*/], Local_94[0 /*2*/], vLocal_61, 3.8f, 0);
				}
				else if (func_168(Local_94[0 /*2*/]) == 2)
				{
					_0xE4723DB6E736CCFF(Local_111[iParam0 /*14*/], Local_94[0 /*2*/], -6f, 0f, -0.5f, 6f, 0);
				}
				else if (func_168(Local_94[0 /*2*/]) == 3)
				{
					_0xE4723DB6E736CCFF(Local_111[iParam0 /*14*/], Local_94[0 /*2*/], vLocal_52, 3.8f, 0);
				}
				else if (func_168(Local_94[0 /*2*/]) == 4)
				{
					_0xE4723DB6E736CCFF(Local_111[iParam0 /*14*/], Local_94[0 /*2*/], 6f, 0f, -0.5f, 6f, 0);
				}
			}
		}
	}
}

int func_168(int iParam0)
{
	Vector3 vVar0;
	Vector3 vVar3;
	float fVar6;
	
	if (iParam0 == 0)
	{
		iParam0 = Local_94[0 /*2*/];
	}
	if (func_31(player_ped_id()) && func_31(iParam0))
	{
		vVar0 = {get_entity_coords(player_ped_id(), 1)};
		vVar3 = {get_offset_from_entity_given_world_coords(iParam0, vVar0)};
		fVar6 = get_angle_between_2d_vectors(vVar0.x, vVar0.y, vVar3.x, vVar3.y);
		if (vVar3.x < 0f)
		{
			fVar6 *= -1f;
		}
	}
	if ((fVar6 <= 45f && fVar6 >= 0f) || (fVar6 >= -45f && fVar6 <= 0f))
	{
		return 1;
	}
	else if (fVar6 <= 135f && fVar6 >= 0f)
	{
		return 2;
	}
	else if (fVar6 >= -135f && fVar6 <= 0f)
	{
		return 4;
	}
	else
	{
		return 3;
	}
	return 1;
}

float func_169(float fParam0, float fParam1, float fParam2)
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

void func_170()
{
	int iVar0;
	Vector3 vVar1;
	Vector3 vVar4;
	Vector3 vVar7;
	Vector3 vVar10;
	Vector3 vVar13;
	Vector3 vVar16;
	int iVar19;
	Vector3 vVar20;
	Vector3 vVar23;
	
	get_current_ped_weapon(player_ped_id(), &iLocal_459, 1);
	iVar0 = 0;
	while (iVar0 <= 9 - 1)
	{
		if (func_31(Local_111[iVar0 /*14*/]))
		{
			if (((((is_ped_in_combat(Local_111[iVar0 /*14*/], false) || is_ped_in_melee_combat(Local_111[iVar0 /*14*/])) || is_ped_being_stunned(Local_111[iVar0 /*14*/], 0)) || is_ped_being_stealth_killed(Local_111[iVar0 /*14*/])) || is_ped_being_jacked(Local_111[iVar0 /*14*/])) || has_entity_been_damaged_by_entity(Local_111[iVar0 /*14*/], player_ped_id(), 1))
			{
				iLocal_456 = true;
			}
			if (get_game_timer() - iLocal_468 > 800)
			{
				if (has_ped_received_event(Local_111[iVar0 /*14*/], 123) || has_ped_received_event(Local_111[iVar0 /*14*/], 124))
				{
					iLocal_456 = true;
				}
			}
			if (has_entity_clear_los_to_entity_in_front(Local_111[iVar0 /*14*/], player_ped_id()) && (is_player_free_aiming_at_entity(player_id(), Local_111[iVar0 /*14*/]) || is_player_targetting_entity(player_id(), Local_111[iVar0 /*14*/])))
			{
				if (iLocal_459 != 0)
				{
					if (get_weapontype_group(iLocal_459) != -728555052 && iLocal_459 != joaat("weapon_unarmed"))
					{
						if (get_game_timer() - Local_111[iVar0 /*14*/].f_11 > 800)
						{
							iLocal_456 = true;
						}
					}
				}
			}
			else
			{
				Local_111[iVar0 /*14*/].f_11 = get_game_timer();
			}
		}
		else
		{
			iLocal_456 = true;
		}
		iVar0++;
	}
	if (func_31(Local_94[1 /*2*/]))
	{
		if (((has_entity_been_damaged_by_entity(Local_94[1 /*2*/], player_ped_id(), 0) || has_vehicle_got_projectile_attached(player_ped_id(), Local_94[1 /*2*/], 0, -1)) || is_ped_in_vehicle(player_ped_id(), Local_94[1 /*2*/], 1)) || is_ped_on_specific_vehicle(player_ped_id(), Local_94[1 /*2*/]))
		{
			iLocal_456 = true;
		}
		else if (is_ped_in_any_vehicle(player_ped_id(), 0))
		{
			if (is_ped_in_model(player_ped_id(), joaat("towtruck")) || is_ped_in_model(player_ped_id(), joaat("towtruck2")))
			{
				if (is_vehicle_attached_to_tow_truck(get_vehicle_ped_is_in(player_ped_id(), 0), Local_94[1 /*2*/]))
				{
					iLocal_456 = true;
				}
			}
		}
		if (func_174(0f, 0f, 0f, 0f, 0f, 0f, get_entity_coords(Local_94[1 /*2*/], 0), 30f, 0))
		{
			iLocal_456 = true;
		}
		if (is_ped_in_any_vehicle(player_ped_id(), 0))
		{
			if (is_entity_touching_entity(player_ped_id(), Local_94[1 /*2*/]) && fLocal_463 >= 7f)
			{
				iLocal_456 = true;
			}
			vVar1 = {func_173(get_entity_coords(get_vehicle_ped_is_in(player_ped_id(), 0), 0) - get_entity_coords(Local_94[1 /*2*/], 0))};
			vVar4 = {get_entity_velocity(Local_94[1 /*2*/]) - get_entity_velocity(get_vehicle_ped_is_in(player_ped_id(), 0))};
			fLocal_463 = func_172(vVar4, vVar1);
		}
	}
	else
	{
		iLocal_456 = true;
	}
	if (func_31(Local_94[2 /*2*/]))
	{
		if (((has_entity_been_damaged_by_entity(Local_94[2 /*2*/], player_ped_id(), 0) || has_vehicle_got_projectile_attached(player_ped_id(), Local_94[2 /*2*/], 0, -1)) || is_ped_in_vehicle(player_ped_id(), Local_94[2 /*2*/], 1)) || is_ped_on_specific_vehicle(player_ped_id(), Local_94[2 /*2*/]))
		{
			iLocal_456 = true;
		}
		else if (is_ped_in_any_vehicle(player_ped_id(), 0))
		{
			if (is_ped_in_model(player_ped_id(), joaat("towtruck")) || is_ped_in_model(player_ped_id(), joaat("towtruck2")))
			{
				if (is_vehicle_attached_to_tow_truck(get_vehicle_ped_is_in(player_ped_id(), 0), Local_94[2 /*2*/]))
				{
					iLocal_456 = true;
				}
			}
		}
		if (func_174(0f, 0f, 0f, 0f, 0f, 0f, get_entity_coords(Local_94[2 /*2*/], 0), 30f, 0))
		{
			iLocal_456 = true;
		}
		if (is_ped_in_any_vehicle(player_ped_id(), 0))
		{
			if (is_entity_touching_entity(player_ped_id(), Local_94[2 /*2*/]) && fLocal_465 >= 7f)
			{
				iLocal_456 = true;
			}
			vVar7 = {func_173(get_entity_coords(get_vehicle_ped_is_in(player_ped_id(), 0), 0) - get_entity_coords(Local_94[2 /*2*/], 0))};
			vVar10 = {get_entity_velocity(Local_94[2 /*2*/]) - get_entity_velocity(get_vehicle_ped_is_in(player_ped_id(), 0))};
			fLocal_465 = func_172(vVar10, vVar7);
		}
	}
	else
	{
		iLocal_456 = true;
	}
	if (func_31(Local_94[0 /*2*/]))
	{
		if (func_162(player_ped_id(), player_ped_id(), 1) < 45f && get_player_wanted_level(player_id()) > 0)
		{
			iLocal_456 = true;
		}
		if (func_174(0f, 0f, 0f, 0f, 0f, 0f, get_entity_coords(Local_94[0 /*2*/], 0), 30f, 0))
		{
			iLocal_456 = true;
		}
		if (((has_entity_been_damaged_by_entity(Local_94[0 /*2*/], player_ped_id(), 0) || has_vehicle_got_projectile_attached(player_ped_id(), Local_94[0 /*2*/], 0, -1)) || is_ped_in_vehicle(player_ped_id(), Local_94[0 /*2*/], 1)) || is_ped_on_specific_vehicle(player_ped_id(), Local_94[0 /*2*/]))
		{
			iLocal_456 = true;
		}
		else if (is_ped_in_any_vehicle(player_ped_id(), 0))
		{
			if (is_ped_in_model(player_ped_id(), joaat("towtruck")) || is_ped_in_model(player_ped_id(), joaat("towtruck2")))
			{
				if (is_vehicle_attached_to_tow_truck(get_vehicle_ped_is_in(player_ped_id(), 0), Local_94[0 /*2*/]))
				{
					iLocal_456 = true;
				}
			}
		}
		if (is_ped_in_any_vehicle(player_ped_id(), 0))
		{
			if (is_entity_touching_entity(player_ped_id(), Local_94[0 /*2*/]) && fLocal_464 >= 7f)
			{
				iLocal_456 = true;
			}
			vVar13 = {func_173(get_entity_coords(get_vehicle_ped_is_in(player_ped_id(), 0), 0) - get_entity_coords(Local_94[0 /*2*/], 0))};
			vVar16 = {get_entity_velocity(Local_94[0 /*2*/]) - get_entity_velocity(get_vehicle_ped_is_in(player_ped_id(), 0))};
			fLocal_464 = func_172(vVar16, vVar13);
		}
		if (func_171())
		{
			iVar19 = get_vehicle_ped_is_in(player_ped_id(), 0);
			if (is_vehicle_driveable(iVar19, 0))
			{
				if (is_entity_touching_entity(iVar19, Local_94[0 /*2*/]))
				{
					iLocal_456 = true;
				}
				vVar20 = {func_173(get_entity_coords(get_vehicle_ped_is_in(player_ped_id(), 0), 0) - get_entity_coords(Local_94[0 /*2*/], 0))};
				vVar23 = {get_entity_velocity(Local_94[0 /*2*/]) - get_entity_velocity(get_vehicle_ped_is_in(player_ped_id(), 0))};
				fLocal_464 = func_172(vVar23, vVar20);
			}
		}
	}
	else
	{
		iLocal_456 = true;
	}
}

int func_171()
{
	return is_bit_set(Global_2460486.f_743, 2);
}

float func_172(Vector3 vParam0, Vector3 vParam1)
{
	return vParam0.x * vParam3.x + vParam0.y * vParam3.y + vParam0.z * vParam3.z;
}

Vector3 func_173(Vector3 vParam0)
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

int func_174(Vector3 vParam0, Vector3 vParam1, Vector3 vParam2, float fParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	if (!func_175(vParam0 + vParam3))
	{
		if ((((((((((((((((((((((is_explosion_in_area(5, vParam3, vParam0) || (is_explosion_in_area(2, vParam3, vParam0) && !iParam10)) || (is_explosion_in_area(20, vParam3, vParam0) && !iParam10)) || is_explosion_in_area(4, vParam3, vParam0)) || (is_explosion_in_area(28, vParam3, vParam0) && !iParam10)) || is_explosion_in_area(32, vParam3, vParam0)) || is_explosion_in_area(25, vParam3, vParam0)) || is_explosion_in_area(9, vParam3, vParam0)) || (is_explosion_in_area(3, vParam3, vParam0) && !iParam10)) || (is_explosion_in_area(6, vParam3, vParam0) && !iParam10)) || is_explosion_in_area(0, vParam3, vParam0)) || is_explosion_in_area(1, vParam3, vParam0)) || is_explosion_in_area(23, vParam3, vParam0)) || is_explosion_in_area(34, vParam3, vParam0)) || is_explosion_in_area(14, vParam3, vParam0)) || (is_explosion_in_area(30, vParam3, vParam0) && !iParam10)) || (is_explosion_in_area(12, vParam3, vParam0) && !iParam10)) || is_explosion_in_area(7, vParam3, vParam0)) || (is_explosion_in_area(21, vParam3, vParam0) && !iParam10)) || (is_explosion_in_area(18, vParam3, vParam0) && !iParam10)) || is_explosion_in_area(15, vParam3, vParam0)) || is_explosion_in_area(10, vParam3, vParam0)) || is_explosion_in_area(27, vParam3, vParam0))
		{
			iVar0 = 1;
		}
	}
	else if ((((((((((((((((((((((is_explosion_in_sphere(5, vParam6, fParam9) || (is_explosion_in_sphere(2, vParam6, fParam9) && !iParam10)) || (is_explosion_in_sphere(20, vParam6, fParam9) && !iParam10)) || is_explosion_in_sphere(4, vParam6, fParam9)) || (is_explosion_in_sphere(28, vParam6, fParam9) && !iParam10)) || is_explosion_in_sphere(32, vParam6, fParam9)) || is_explosion_in_sphere(25, vParam6, fParam9)) || is_explosion_in_sphere(9, vParam6, fParam9)) || (is_explosion_in_sphere(3, vParam6, fParam9) && !iParam10)) || (is_explosion_in_sphere(6, vParam6, fParam9) && !iParam10)) || is_explosion_in_sphere(0, vParam6, fParam9)) || is_explosion_in_sphere(1, vParam6, fParam9)) || is_explosion_in_sphere(23, vParam6, fParam9)) || is_explosion_in_sphere(34, vParam6, fParam9)) || is_explosion_in_sphere(14, vParam6, fParam9)) || (is_explosion_in_sphere(30, vParam6, fParam9) && !iParam10)) || (is_explosion_in_sphere(12, vParam6, fParam9) && !iParam10)) || is_explosion_in_sphere(7, vParam6, fParam9)) || (is_explosion_in_sphere(21, vParam6, fParam9) && !iParam10)) || (is_explosion_in_sphere(18, vParam6, fParam9) && !iParam10)) || is_explosion_in_sphere(15, vParam6, fParam9)) || is_explosion_in_sphere(10, vParam6, fParam9)) || is_explosion_in_sphere(27, vParam6, fParam9))
	{
		iVar0 = 1;
	}
	return iVar0;
}

bool func_175(Vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_176()
{
	Vector3 vVar0;
	Vector3 vVar3;
	Vector3 vVar6;
	Vector3 vVar9;
	Vector3 vVar12;
	Vector3 vVar15;
	
	if (((((func_31(Local_94[0 /*2*/]) && func_31(Local_94[1 /*2*/])) && func_31(Local_94[2 /*2*/])) && func_31(Local_111[4 /*14*/])) && func_31(Local_111[0 /*14*/])) && func_31(Local_111[5 /*14*/]))
	{
		vVar0 = {get_offset_from_entity_in_world_coords(Local_94[0 /*2*/], 0f, func_169(func_162(Local_94[0 /*2*/], Local_94[1 /*2*/], 1), 3f, 25f), 5.5f)};
		vVar3 = {get_offset_from_entity_in_world_coords(Local_94[0 /*2*/], 0f, 0f, -6f)};
		vVar6 = {get_offset_from_entity_in_world_coords(Local_94[1 /*2*/], 0f, 20f, 5f)};
		vVar9 = {get_offset_from_entity_in_world_coords(Local_94[1 /*2*/], 0f, 0f, -6f)};
		vVar12 = {get_offset_from_entity_in_world_coords(Local_94[2 /*2*/], 0f, func_169(func_162(Local_94[2 /*2*/], Local_94[0 /*2*/], 1), 3f, 25f), 5f)};
		vVar15 = {get_offset_from_entity_in_world_coords(Local_94[2 /*2*/], 0f, 0f, -6f)};
		switch (iLocal_433)
		{
			case 0:
				if (is_entity_in_angled_area(player_ped_id(), vVar6, vVar9, 9f, 0, true, 0))
				{
					if (get_entity_speed(Local_94[1 /*2*/]) < 1f && get_entity_speed(player_ped_id()) < 1f)
					{
						fLocal_1481[1] += get_frame_time();
					}
					else if (fLocal_1481[1] > 0f)
					{
						fLocal_1481[1] -= get_frame_time() * 10f;
					}
				}
				if (is_entity_in_angled_area(player_ped_id(), vVar0, vVar3, 9f, 0, true, 0))
				{
					if (get_entity_speed(Local_94[0 /*2*/]) < 1f && get_entity_speed(player_ped_id()) < 1f)
					{
						fLocal_1481[0] += get_frame_time();
					}
					else if (fLocal_1481[0] > 0f)
					{
						fLocal_1481[0] -= get_frame_time() * 10f;
					}
				}
				if (is_entity_in_angled_area(player_ped_id(), vVar12, vVar15, 9f, 0, true, 0))
				{
					if (get_entity_speed(Local_94[2 /*2*/]) < 1f && get_entity_speed(player_ped_id()) < 1f)
					{
						fLocal_1481[2] += get_frame_time();
					}
					else if (fLocal_1481[2] > 0f)
					{
						fLocal_1481[2] -= get_frame_time() * 10f;
					}
				}
				if (fLocal_1481[1] > 1.5f)
				{
					iLocal_474 = Local_111[0 /*14*/];
					clear_ped_tasks(Local_111[4 /*14*/]);
					clear_ped_tasks(Local_111[0 /*14*/]);
					clear_ped_tasks(Local_111[5 /*14*/]);
					_task_bring_vehicle_to_halt(Local_94[0 /*2*/], 4f, 1, 0);
					_task_bring_vehicle_to_halt(Local_94[1 /*2*/], 4f, 1, 0);
					_task_bring_vehicle_to_halt(Local_94[2 /*2*/], 4f, 1, 0);
					open_sequence_task(&iLocal_446);
					if (is_ped_in_any_vehicle(Local_111[0 /*14*/], 0))
					{
						task_leave_any_vehicle(false, false, 65536);
					}
					task_aim_gun_at_coord(false, get_entity_coords(player_ped_id(), 1), 1000, 0, 1);
					task_go_to_entity_while_aiming_at_entity(false, player_ped_id(), player_ped_id(), 1f, 0, 3f, 4f, 1, 0, -957453492);
					task_aim_gun_at_entity(false, player_ped_id(), -1, 0);
					close_sequence_task(iLocal_446);
					task_perform_sequence(Local_111[0 /*14*/], iLocal_446);
					clear_sequence_task(&iLocal_446);
					iLocal_433 = 1;
				}
				else if (fLocal_1481[0] > 1.5f)
				{
					iLocal_474 = Local_111[4 /*14*/];
					clear_ped_tasks(Local_111[4 /*14*/]);
					clear_ped_tasks(Local_111[0 /*14*/]);
					clear_ped_tasks(Local_111[5 /*14*/]);
					_task_bring_vehicle_to_halt(Local_94[0 /*2*/], 4f, 1, 0);
					_task_bring_vehicle_to_halt(Local_94[1 /*2*/], 4f, 1, 0);
					_task_bring_vehicle_to_halt(Local_94[2 /*2*/], 4f, 1, 0);
					open_sequence_task(&iLocal_446);
					if (is_ped_in_any_vehicle(Local_111[4 /*14*/], 0))
					{
						task_leave_any_vehicle(false, false, 65536);
					}
					task_aim_gun_at_coord(false, get_entity_coords(player_ped_id(), 1), 1000, 0, 1);
					task_go_to_entity_while_aiming_at_entity(false, player_ped_id(), player_ped_id(), 1f, 0, 3f, 4f, 1, 0, -957453492);
					task_aim_gun_at_entity(false, player_ped_id(), -1, 0);
					close_sequence_task(iLocal_446);
					task_perform_sequence(Local_111[4 /*14*/], iLocal_446);
					clear_sequence_task(&iLocal_446);
					iLocal_433 = 1;
				}
				else if (fLocal_1481[2] > 1.5f)
				{
					iLocal_474 = Local_111[5 /*14*/];
					clear_ped_tasks(Local_111[4 /*14*/]);
					clear_ped_tasks(Local_111[0 /*14*/]);
					clear_ped_tasks(Local_111[5 /*14*/]);
					_task_bring_vehicle_to_halt(Local_94[0 /*2*/], 4f, 1, 0);
					_task_bring_vehicle_to_halt(Local_94[1 /*2*/], 4f, 1, 0);
					_task_bring_vehicle_to_halt(Local_94[2 /*2*/], 4f, 1, 0);
					open_sequence_task(&iLocal_446);
					if (is_ped_in_any_vehicle(Local_111[5 /*14*/], 0))
					{
						task_leave_any_vehicle(false, false, 65536);
					}
					task_aim_gun_at_coord(false, get_entity_coords(player_ped_id(), 1), 1000, 0, 1);
					task_go_to_entity_while_aiming_at_entity(false, player_ped_id(), player_ped_id(), 1f, 0, 3f, 4f, 1, 0, -957453492);
					task_aim_gun_at_entity(false, player_ped_id(), -1, 0);
					close_sequence_task(iLocal_446);
					task_perform_sequence(Local_111[5 /*14*/], iLocal_446);
					clear_sequence_task(&iLocal_446);
					iLocal_433 = 1;
				}
				else
				{
					if ((is_ped_in_any_vehicle(Local_111[5 /*14*/], 0) && is_ped_in_any_vehicle(Local_111[0 /*14*/], 0)) && is_ped_in_any_vehicle(Local_111[4 /*14*/], 0))
					{
						if (!is_waypoint_playback_going_on_for_vehicle(Local_94[1 /*2*/]))
						{
							task_vehicle_follow_waypoint_recording(Local_111[0 /*14*/], Local_94[1 /*2*/], &cLocal_475, 786603, 0, 24, -1, 11f, 0, 2f);
						}
						if (get_script_task_status(Local_111[4 /*14*/], -1273030092) != 1)
						{
							task_vehicle_escort(Local_111[4 /*14*/], Local_94[0 /*2*/], Local_94[1 /*2*/], -1, 11f, 786603, -1f, 20, 0f);
						}
						if (get_script_task_status(Local_111[5 /*14*/], -1273030092) != 1)
						{
							task_vehicle_escort(Local_111[5 /*14*/], Local_94[2 /*2*/], Local_94[0 /*2*/], -1, 11f, 786603, -1f, 20, 0f);
						}
						_0x88BC673CA9E0AE99(Local_94[0 /*2*/], 1);
						_0xBE5C1255A1830FF5(Local_94[0 /*2*/], 1);
						_0x2C4A1590ABF43E8B(Local_94[0 /*2*/], 1);
						_0x88BC673CA9E0AE99(Local_94[1 /*2*/], 1);
						_0xBE5C1255A1830FF5(Local_94[1 /*2*/], 1);
						_0x2C4A1590ABF43E8B(Local_94[1 /*2*/], 1);
						_0x88BC673CA9E0AE99(Local_94[2 /*2*/], 1);
						_0xBE5C1255A1830FF5(Local_94[2 /*2*/], 1);
						_0x2C4A1590ABF43E8B(Local_94[2 /*2*/], 1);
					}
					iLocal_473 = get_game_timer();
				}
				break;
			
			case 1:
				switch (iLocal_472)
				{
					case 0:
						if (!is_ped_in_any_vehicle(iLocal_474, 0))
						{
							func_28(&uLocal_238, 1, iLocal_474, "Armyped", 0, 1);
							iLocal_473 = get_game_timer();
							fLocal_1481[1] = 0f;
							fLocal_1481[2] = 0f;
							fLocal_1481[0] = 0f;
							iLocal_472++;
						}
						break;
					
					case 1:
						if (get_game_timer() - iLocal_473 > 8000 && !func_9())
						{
							if (!is_ped_in_any_vehicle(iLocal_474, 0))
							{
								func_28(&uLocal_238, 1, iLocal_474, "Armyped", 0, 1);
								if (iLocal_458)
								{
									iLocal_458 = 0;
								}
								else
								{
									iLocal_473 = get_game_timer();
									iLocal_472++;
								}
							}
						}
						break;
					
					case 2:
						if (get_game_timer() - iLocal_473 > 8000 && !func_9())
						{
							if (!is_ped_in_any_vehicle(iLocal_474, 0))
							{
								func_28(&uLocal_238, 1, iLocal_474, "Armyped", 0, 1);
								if (iLocal_458)
								{
									iLocal_458 = 0;
								}
								else
								{
									iLocal_473 = get_game_timer();
									iLocal_472++;
								}
							}
						}
						break;
					
					case 3:
						if (get_game_timer() - iLocal_473 > 8000 && !func_9())
						{
							if (!is_ped_in_any_vehicle(iLocal_474, 0))
							{
								func_28(&uLocal_238, 1, iLocal_474, "Armyped", 0, 1);
								if (iLocal_458)
								{
									iLocal_458 = 0;
								}
								else
								{
									open_sequence_task(&iLocal_446);
									task_shoot_at_coord(false, get_offset_from_entity_in_world_coords(player_ped_id(), 0.5f, 0f, -1f), 1000, 1566631136);
									task_go_to_entity_while_aiming_at_entity(false, player_ped_id(), player_ped_id(), 1f, 0, 4f, 4f, 1, 0, -957453492);
									task_aim_gun_at_entity(false, player_ped_id(), -1, 0);
									close_sequence_task(iLocal_446);
									task_perform_sequence(iLocal_474, iLocal_446);
									clear_sequence_task(&iLocal_446);
									iLocal_473 = get_game_timer();
									iLocal_468 = get_game_timer();
									iLocal_472++;
								}
							}
						}
						break;
					
					case 4:
						break;
				}
				if ((!is_entity_in_angled_area(player_ped_id(), vVar0, vVar3, 9f, 0, true, 0) && !is_entity_in_angled_area(player_ped_id(), vVar6, vVar9, 9f, 0, true, 0)) && !is_entity_in_angled_area(player_ped_id(), vVar12, vVar15, 9f, 0, true, 0))
				{
					if (get_script_task_status(iLocal_474, 1630799643) != 1)
					{
						task_aim_gun_at_entity(iLocal_474, player_ped_id(), -1, 0);
					}
					if (timera() > 3000)
					{
						if (!is_ped_in_any_vehicle(iLocal_474, 0))
						{
							if (iLocal_474 == Local_111[4 /*14*/])
							{
								task_enter_vehicle(iLocal_474, Local_94[0 /*2*/], 20000, -1, 2f, 1, 0);
							}
							else if (iLocal_474 == Local_111[0 /*14*/])
							{
								task_enter_vehicle(iLocal_474, Local_94[1 /*2*/], 20000, -1, 2f, 1, 0);
							}
							else if (iLocal_474 == Local_111[5 /*14*/])
							{
								task_enter_vehicle(iLocal_474, Local_94[2 /*2*/], 20000, -1, 2f, 1, 0);
							}
						}
						iLocal_433 = 2;
					}
				}
				else
				{
					if (iLocal_472 == 4)
					{
						if (get_game_timer() - iLocal_473 > 9000 && !func_9())
						{
							iLocal_456 = true;
						}
					}
					settimera(false);
				}
				break;
			
			case 2:
				if ((is_entity_in_angled_area(player_ped_id(), vVar0, vVar3, 9f, 0, true, 0) || is_entity_in_angled_area(player_ped_id(), vVar6, vVar9, 9f, 0, true, 0)) || is_entity_in_angled_area(player_ped_id(), vVar12, vVar15, 9f, 0, true, 0))
				{
					iLocal_458 = 0;
					iLocal_433 = 0;
				}
				else if (is_ped_in_any_vehicle(iLocal_474, 0))
				{
					task_vehicle_escort(Local_111[4 /*14*/], Local_94[0 /*2*/], Local_94[1 /*2*/], -1, 11f, 786603, -1f, 20, 0f);
					task_vehicle_follow_waypoint_recording(Local_111[0 /*14*/], Local_94[1 /*2*/], &cLocal_475, 786603, 0, 24, -1, 11f, 0, 2f);
					task_vehicle_escort(Local_111[5 /*14*/], Local_94[2 /*2*/], Local_94[0 /*2*/], -1, 11f, 786603, -1f, 20, 0f);
					iLocal_458 = 1;
					iLocal_433 = 0;
				}
				break;
			}
	}
}

void func_177(int iParam0)
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

bool func_178(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = get_script_task_status(iParam0, iParam1);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	else if (!iParam2)
	{
		if (iVar0 == 2 || iVar0 == 3)
		{
			return true;
		}
	}
	return false;
}

void func_179(int iParam0, int iParam1, int iParam2)
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

bool func_180(int iParam0, auto uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, char* sParam7, int iParam8)
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

bool func_181(auto uParam0)
{
	if (is_vehicle_driveable(*uParam0, 0))
	{
		if (((is_vehicle_stuck_timer_up(*uParam0, 0, 7000) || is_vehicle_stuck_timer_up(*uParam0, 3, 30000)) || is_vehicle_stuck_timer_up(*uParam0, 2, 30000)) || is_vehicle_stuck_timer_up(*uParam0, 1, 40000))
		{
			return true;
		}
	}
	return false;
}

void func_182(int iParam0)
{
	if (does_entity_exist(*iParam0))
	{
		is_entity_dead(*iParam0, 0);
		if (is_entity_a_mission_entity(*iParam0) && does_entity_belong_to_this_script(*iParam0, 1))
		{
			set_vehicle_as_no_longer_needed(iParam0);
		}
	}
}

void func_183(int iParam0)
{
	char* sVar0;
	
	trigger_music_event("RHP1_FAIL");
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "";
			break;
		
		case 3:
			sVar0 = "RHP_FDES";
			break;
		
		case 4:
			sVar0 = "RHP_TRKSTCK";
			break;
		
		case 2:
			sVar0 = "RHP_FEND";
			break;
		
		case 5:
			sVar0 = "RHP_FABN";
			break;
		
		default:
			sVar0 = "";
			break;
	}
	func_185(sVar0);
	while (!func_184())
	{
		wait(false);
	}
	iLocal_447 = 0;
	while (iLocal_447 <= 2 - 1)
	{
		if (does_entity_exist(iLocal_108[iLocal_447]))
		{
			delete_object(&(iLocal_108[iLocal_447]));
		}
		iLocal_447++;
	}
	func_311();
	terminate_this_thread();
}

bool func_184()
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

void func_185(char* sParam0)
{
	func_193(sParam0);
	func_186(0);
}

void func_186(int iParam0)
{
	int iVar0;
	
	if (Global_101154.f_7775 || func_7(0))
	{
		iVar0 = func_5();
		if (!func_187(iVar0))
		{
			return;
		}
		set_bit(&(Global_82363[iVar0 /*5*/].f_1), 5);
		Global_91314 = iParam0;
	}
}

bool func_187(int iParam0)
{
	auto uVar0;
	int iVar1;
	
	func_192();
	if (is_player_playing(player_id()))
	{
		start_firing_amnesty(5000);
	}
	uVar0 = Global_82363[iParam0 /*5*/];
	iVar1 = Global_69758.f_109[uVar0 /*4*/];
	func_191(iVar1, 1);
	_0xC9A763D8FE87436A(player_id());
	special_ability_deactivate(player_id());
	func_188(&(Global_101154.f_1826.f_539), iVar1);
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

void func_188(auto uParam0, int iParam1)
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
			if (!func_190(Global_101154.f_17223[iVar0], &vVar2, &fVar5))
			{
				Global_101154.f_17223[iVar0] = 318;
				func_189(uParam0.f_1524[iVar0]);
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

void func_189(auto uParam0)
{
	*uParam0 = -15;
}

int func_190(int iParam0, auto uParam1, float fParam2)
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
			return func_190(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_190(8, uParam1, fParam2);
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

void func_191(int iParam0, int iParam1)
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

void func_192()
{
	Global_91313 = 1;
	if (is_player_being_arrested(player_id(), 1))
	{
		if (is_string_null_or_empty(&Global_69721))
		{
			switch (func_19())
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
			switch (func_19())
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

void func_193(char* sParam0)
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

void func_194(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (does_entity_exist(*iParam0))
	{
		if (!is_ped_injured(*iParam0))
		{
			set_entity_load_collision_flag(*iParam0, false);
			if (iParam3 == 0)
			{
				clear_ped_secondary_task(*iParam0);
			}
			set_ped_keep_task(*iParam0, iParam1);
			if (iParam2 == 1)
			{
				set_blocking_of_non_temporary_events(*iParam0, false);
			}
		}
		set_ped_as_no_longer_needed(iParam0);
	}
}

void func_195()
{
	Vector3 vVar0;
	Vector3 fVar3;
	
	if (iLocal_1479 == 1)
	{
		if (iLocal_1474 == 0)
		{
			if (!is_screen_faded_out())
			{
				if (!is_screen_fading_out())
				{
					do_screen_fade_out(800);
				}
			}
			else
			{
				func_107(iLocal_1480);
			}
		}
		else if (iLocal_1474 == 3)
		{
			render_script_cams(false, false, 3000, 1, 0, 0);
			set_player_control(player_id(), true, 0);
			func_220();
			func_219(&uLocal_494);
			if (!func_218())
			{
				func_217(iLocal_1480, &vVar0, &fVar3);
				set_entity_coords(player_ped_id(), vVar0, 1, false, 0, 1);
				set_entity_heading(player_ped_id(), fVar3);
				freeze_entity_position(player_ped_id(), true);
				func_216(&uLocal_494, vVar0, 50f, 0);
			}
			func_213(iLocal_1475);
			while (!func_209(&uLocal_494))
			{
				wait(false);
			}
			switch (iLocal_1475)
			{
				case 0:
					func_208();
					break;
				
				case 1:
					func_203();
					break;
				
				case 2:
					func_202();
					break;
				
				case 3:
					func_196();
					break;
			}
			iLocal_1479 = false;
			if (!func_218())
			{
				new_load_scene_stop();
			}
		}
	}
}

void func_196()
{
	func_200(1357.7f, 3618.28f, 33.8905f, 110.4135f);
	iLocal_456 = true;
	if (func_218())
	{
		func_197(0, -1, 1);
	}
	else
	{
		freeze_entity_position(player_ped_id(), false);
	}
}

void func_197(int iParam0, int iParam1, int iParam2)
{
	if (func_199() && func_218())
	{
		while (Global_91273 != 6)
		{
			wait(false);
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
							wait(false);
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
		func_198(0);
	}
}

void func_198(int iParam0)
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

bool func_199()
{
	if (Global_91278 == 10 || Global_91278 == 9)
	{
		return true;
	}
	return false;
}

void func_200(Vector3 vParam0, Vector3 fParam1)
{
	Local_94[0 /*2*/] = create_vehicle(joaat("barracks"), vParam0, fParam3, 1, true);
	set_entity_health(Local_94[0 /*2*/], get_entity_health(Local_94[0 /*2*/]) * 2);
	set_vehicle_strong(Local_94[0 /*2*/], true);
	set_vehicle_engine_health(Local_94[0 /*2*/], get_vehicle_engine_health(Local_94[0 /*2*/]) * 2f);
	set_vehicle_explodes_on_high_explosion_damage(Local_94[0 /*2*/], 0);
	set_vehicle_petrol_tank_health(Local_94[0 /*2*/], get_vehicle_petrol_tank_health(Local_94[0 /*2*/]) * 2f);
	_0x192547247864DFDD(Local_94[0 /*2*/], false);
	_0x51BB2D88D31A914B(Local_94[0 /*2*/], false);
	set_vehicle_provides_cover(Local_94[0 /*2*/], 1);
	set_vehicle_automatically_attaches(Local_94[0 /*2*/], false, 0);
	func_201(Local_94[0 /*2*/], 0);
	iLocal_108[0] = create_object(joaat("prop_mil_crate_01"), 1006.765f, 2128.32f, 48.0929f, 1, true, false);
	attach_entity_to_entity(iLocal_108[0], Local_94[0 /*2*/], 0, 0f, -0.5f, 1.5f, 0f, 0f, -90f, 0, 0, 0, 0, 2, 1);
	iLocal_108[1] = create_object(joaat("prop_mil_crate_01"), 1006.765f, 2128.32f, 48.0929f, 1, true, false);
	attach_entity_to_entity(iLocal_108[1], Local_94[0 /*2*/], 0, 0f, -2.85f, 1.5f, 0f, 0f, -90f, 0, 0, 0, 0, 2, 1);
	_0x153973AB99FE8980(Local_94[0 /*2*/], "PS_PREP_VEHICLES_GROUP", 0f);
}

void func_201(auto uParam0, int iParam1)
{
	Global_91278.f_22[iParam1] = uParam0;
}

void func_202()
{
	func_200(-248.6621f, 2950.037f, 28.9996f, 93.5394f);
	iLocal_456 = true;
	if (func_218())
	{
		func_197(0, -1, 1);
	}
	else
	{
		freeze_entity_position(player_ped_id(), false);
	}
}

void func_203()
{
	int iVar0;
	
	func_207(-284.0175f, 2949.104f, 28.3715f, 46.1483f);
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		func_206(iVar0, Local_94[1 /*2*/]);
		func_205(Local_111[iVar0 /*14*/], 0);
		iVar0++;
	}
	func_200(-248.6621f, 2950.037f, 28.9996f, 93.5394f);
	func_204(-223.1415f, 2952.188f, 28.8053f, 121.2339f);
	iVar0 = 5;
	while (iVar0 <= 8)
	{
		func_206(iVar0, Local_94[2 /*2*/]);
		func_205(Local_111[iVar0 /*14*/], 0);
		iVar0++;
	}
	iLocal_456 = true;
	if (func_218())
	{
		func_197(0, -1, 1);
	}
	else
	{
		freeze_entity_position(player_ped_id(), false);
	}
}

void func_204(Vector3 vParam0, Vector3 fParam1)
{
	Local_94[2 /*2*/] = create_vehicle(joaat("crusader"), vParam0, fParam3, 1, true);
	_0x153973AB99FE8980(Local_94[2 /*2*/], "PS_PREP_VEHICLES_GROUP", 0f);
}

void func_205(int iParam0, int iParam1)
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

void func_206(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == Local_94[1 /*2*/] || iParam1 == Local_94[2 /*2*/])
	{
		iVar0 = joaat("s_m_y_marine_03");
	}
	else if (iParam1 == Local_94[0 /*2*/])
	{
		iVar0 = joaat("s_m_m_marine_01");
	}
	if ((iParam0 == 0 || iParam0 == 5) || iParam0 == 4)
	{
		iVar1 = -1;
		iLocal_451 = joaat("weapon_pistol");
	}
	else if (iParam0 == 1 || iParam0 == 6)
	{
		iVar1 = false;
		iLocal_451 = joaat("weapon_carbinerifle");
	}
	else if (iParam0 == 2 || iParam0 == 7)
	{
		iVar1 = true;
		iLocal_451 = joaat("weapon_smg");
	}
	else if (iParam0 == 3 || iParam0 == 8)
	{
		iVar1 = 2;
		iLocal_451 = joaat("weapon_carbinerifle");
	}
	Local_111[iParam0 /*14*/] = PED::CREATE_PED_inside_vehicle(iParam1, 26, iVar0, iVar1, 1, true);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_111[iParam0 /*14*/], iLocal_493);
	set_ped_as_enemy(Local_111[iParam0 /*14*/], 1);
	give_weapon_to_ped(Local_111[iParam0 /*14*/], iLocal_451, -1, true, true);
	give_weapon_to_ped(Local_111[iParam0 /*14*/], joaat("weapon_pistol"), -1, true, true);
	set_ped_money(Local_111[iParam0 /*14*/], false);
	set_ped_component_variation(Local_111[iParam0 /*14*/], 2, true, false, 0);
	set_ped_alertness(Local_111[iParam0 /*14*/], 1);
	set_ped_target_loss_response(Local_111[iParam0 /*14*/], 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_111[iParam0 /*14*/], 0, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_111[iParam0 /*14*/], 1, false);
	set_ped_combat_movement(Local_111[iParam0 /*14*/], 1);
	PED::SET_PED_CONFIG_FLAG(Local_111[iParam0 /*14*/], 184, true);
	PED::SET_PED_CONFIG_FLAG(Local_111[iParam0 /*14*/], 272, true);
	stop_ped_speaking(Local_111[iParam0 /*14*/], 1);
	set_entity_load_collision_flag(Local_111[iParam0 /*14*/], true);
	set_ped_accuracy(Local_111[iParam0 /*14*/], 10);
	set_blocking_of_non_temporary_events(Local_111[iParam0 /*14*/], true);
	Local_111[iParam0 /*14*/].f_10 = 0;
}

void func_207(Vector3 vParam0, Vector3 fParam1)
{
	Local_94[1 /*2*/] = create_vehicle(joaat("crusader"), vParam0, fParam3, 1, true);
	_0x153973AB99FE8980(Local_94[1 /*2*/], "PS_PREP_VEHICLES_GROUP", 0f);
}

void func_208()
{
	int iVar0;
	
	if (!func_31(Local_94[1 /*2*/]))
	{
		func_207(996.9448f, 2140.02f, 47.9112f, 39.7091f);
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (!func_31(Local_111[iVar0 /*14*/]))
		{
			func_206(iVar0, Local_94[1 /*2*/]);
			func_205(Local_111[iVar0 /*14*/], 0);
			if (iVar0 == 0)
			{
				task_vehicle_follow_waypoint_recording(Local_111[0 /*14*/], Local_94[1 /*2*/], &cLocal_475, 786603, 0, 24, -1, 11f, 0, 2f);
			}
		}
		iVar0++;
	}
	if (!func_31(Local_94[0 /*2*/]))
	{
		func_200(1006.765f, 2128.32f, 48.0929f, 39.898f);
	}
	if (!func_31(Local_111[4 /*14*/]))
	{
		func_206(4, Local_94[0 /*2*/]);
		task_vehicle_escort(Local_111[4 /*14*/], Local_94[0 /*2*/], Local_94[1 /*2*/], -1, 11f, 786603, -1f, 20, 0f);
		func_205(Local_111[4 /*14*/], 0);
	}
	if (!func_31(Local_94[2 /*2*/]))
	{
		func_204(1018.995f, 2112.951f, 48.4754f, 34.6812f);
	}
	iVar0 = 5;
	while (iVar0 <= 8)
	{
		if (!func_31(Local_111[iVar0 /*14*/]))
		{
			func_206(iVar0, Local_94[2 /*2*/]);
			func_205(Local_111[iVar0 /*14*/], 0);
			if (iVar0 == 5)
			{
				task_vehicle_escort(Local_111[5 /*14*/], Local_94[2 /*2*/], Local_94[0 /*2*/], -1, 11f, 786603, -1f, 20, 0f);
			}
		}
		iVar0++;
	}
	if (func_218())
	{
		func_197(0, -1, 1);
	}
	else
	{
		freeze_entity_position(player_ped_id(), false);
	}
}

bool func_209(auto uParam0)
{
	if (func_210(uParam0))
	{
		return true;
	}
	return false;
}

bool func_210(auto uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (*uParam0.f_977)
	{
		iVar0 = true;
		iVar1 = false;
		while (iVar1 < 30)
		{
			if (*uParam0[iVar1 /*5*/])
			{
				if (!*(uParam0[iVar1 /*5*/]).f_1)
				{
					if (has_model_loaded(*(uParam0[iVar1 /*5*/]).f_4))
					{
						*(uParam0[iVar1 /*5*/]).f_1 = 1;
					}
					else
					{
						iVar0 = false;
					}
				}
				if (*(uParam0[iVar1 /*5*/]).f_2)
				{
					if (*(uParam0[iVar1 /*5*/]).f_1)
					{
						set_model_as_no_longer_needed(*(uParam0[iVar1 /*5*/]).f_4);
						func_212(uParam0[iVar1 /*5*/]);
					}
					else
					{
						iVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = false;
		while (iVar1 < 20)
		{
			if (*uParam0.f_273[iVar1 /*5*/])
			{
				if (!*(uParam0.f_273[iVar1 /*5*/]).f_1)
				{
					if (has_anim_dict_loaded(*(uParam0.f_273[iVar1 /*5*/]).f_4))
					{
						*(uParam0.f_273[iVar1 /*5*/]).f_1 = 1;
					}
					else
					{
						iVar0 = false;
					}
				}
				if (*(uParam0.f_273[iVar1 /*5*/]).f_2)
				{
					if (*(uParam0.f_273[iVar1 /*5*/]).f_1)
					{
						remove_anim_dict(*(uParam0.f_273[iVar1 /*5*/]).f_4);
						func_212(uParam0.f_273[iVar1 /*5*/]);
					}
					else
					{
						iVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = false;
		while (iVar1 < 20)
		{
			if (*uParam0.f_374[iVar1 /*5*/])
			{
				if (!*(uParam0.f_374[iVar1 /*5*/]).f_1)
				{
					if (get_is_waypoint_recording_loaded(*(uParam0.f_374[iVar1 /*5*/]).f_4))
					{
						*(uParam0.f_374[iVar1 /*5*/]).f_1 = 1;
					}
					else
					{
						iVar0 = false;
					}
				}
				if (*(uParam0.f_374[iVar1 /*5*/]).f_2)
				{
					if (*(uParam0.f_374[iVar1 /*5*/]).f_1)
					{
						remove_waypoint_recording(*(uParam0.f_374[iVar1 /*5*/]).f_4);
						func_212(uParam0.f_374[iVar1 /*5*/]);
					}
					else
					{
						iVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = false;
		while (iVar1 < 5)
		{
			if (*uParam0.f_656[iVar1 /*6*/])
			{
				if (!*(uParam0.f_656[iVar1 /*6*/]).f_1)
				{
					if (has_scaleform_movie_loaded(*(uParam0.f_656[iVar1 /*6*/]).f_5))
					{
						*(uParam0.f_656[iVar1 /*6*/]).f_1 = 1;
					}
					else
					{
						iVar0 = false;
					}
				}
				if (*(uParam0.f_656[iVar1 /*6*/]).f_2)
				{
					if (*(uParam0.f_656[iVar1 /*6*/]).f_1)
					{
						set_scaleform_movie_as_no_longer_needed(uParam0.f_656[iVar1 /*6*/].f_5);
						func_212(uParam0.f_656[iVar1 /*6*/]);
					}
					else
					{
						iVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = false;
		while (iVar1 < 30)
		{
			if (*uParam0.f_475[iVar1 /*6*/])
			{
				if (!*(uParam0.f_475[iVar1 /*6*/]).f_1)
				{
					if (has_vehicle_recording_been_loaded(*(uParam0.f_475[iVar1 /*6*/]).f_5, *(uParam0.f_475[iVar1 /*6*/]).f_4))
					{
						*(uParam0.f_475[iVar1 /*6*/]).f_1 = 1;
					}
					else
					{
						iVar0 = false;
					}
				}
				if (*(uParam0.f_475[iVar1 /*6*/]).f_2)
				{
					if (*(uParam0.f_475[iVar1 /*6*/]).f_1)
					{
						remove_vehicle_recording(*(uParam0.f_475[iVar1 /*6*/]).f_5, *(uParam0.f_475[iVar1 /*6*/]).f_4);
						func_212(uParam0.f_475[iVar1 /*6*/]);
					}
					else
					{
						iVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = false;
		while (iVar1 < 10)
		{
			if (*uParam0.f_202[iVar1 /*7*/])
			{
				if (!*(uParam0.f_202[iVar1 /*7*/]).f_1)
				{
					if (has_weapon_asset_loaded(*(uParam0.f_202[iVar1 /*7*/]).f_4))
					{
						*(uParam0.f_202[iVar1 /*7*/]).f_1 = 1;
					}
					else
					{
						iVar0 = false;
					}
				}
				if (*(uParam0.f_202[iVar1 /*7*/]).f_2)
				{
					if (*(uParam0.f_202[iVar1 /*7*/]).f_1)
					{
						remove_weapon_asset(*(uParam0.f_202[iVar1 /*7*/]).f_4);
						func_212(uParam0.f_202[iVar1 /*7*/]);
					}
					else
					{
						iVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = false;
		while (iVar1 < 10)
		{
			if (*uParam0.f_151[iVar1 /*5*/])
			{
				if (!*(uParam0.f_151[iVar1 /*5*/]).f_1)
				{
					if (has_vehicle_asset_loaded(*(uParam0.f_151[iVar1 /*5*/]).f_4))
					{
						*(uParam0.f_151[iVar1 /*5*/]).f_1 = 1;
					}
					else
					{
						iVar0 = false;
					}
				}
				if (*(uParam0.f_151[iVar1 /*5*/]).f_2)
				{
					if (*(uParam0.f_151[iVar1 /*5*/]).f_1)
					{
						remove_vehicle_asset(*(uParam0.f_151[iVar1 /*5*/]).f_4);
						func_212(uParam0.f_151[iVar1 /*5*/]);
					}
					else
					{
						iVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = false;
		while (iVar1 < 5)
		{
			if (*uParam0.f_737[iVar1 /*5*/])
			{
				if (!*(uParam0.f_737[iVar1 /*5*/]).f_1)
				{
					if (SCRIPT::REQUEST_SCRIPT_audio_bank(*(uParam0.f_737[iVar1 /*5*/]).f_4, false))
					{
						*(uParam0.f_737[iVar1 /*5*/]).f_1 = 1;
					}
					else
					{
						iVar0 = false;
					}
				}
				if (*(uParam0.f_737[iVar1 /*5*/]).f_2)
				{
					if (*(uParam0.f_737[iVar1 /*5*/]).f_1)
					{
						release_named_script_audio_bank(*(uParam0.f_737[iVar1 /*5*/]).f_4);
						func_212(uParam0.f_737[iVar1 /*5*/]);
					}
					else
					{
						iVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = false;
		while (iVar1 < 3)
		{
			if (*uParam0.f_763[iVar1 /*5*/])
			{
				if (!*(uParam0.f_763[iVar1 /*5*/]).f_1)
				{
					if (is_interior_ready(*(uParam0.f_763[iVar1 /*5*/]).f_4))
					{
						*(uParam0.f_763[iVar1 /*5*/]).f_1 = 1;
					}
					else
					{
						iVar0 = false;
					}
				}
				if (*(uParam0.f_763[iVar1 /*5*/]).f_2)
				{
					if (*(uParam0.f_763[iVar1 /*5*/]).f_1)
					{
						unpin_interior(*(uParam0.f_763[iVar1 /*5*/]).f_4);
						func_212(uParam0.f_763[iVar1 /*5*/]);
					}
					else
					{
						iVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = false;
		while (iVar1 < 7)
		{
			if (!is_string_null_or_empty(*(uParam0.f_687[iVar1 /*7*/]).f_4))
			{
				if (*uParam0.f_687[iVar1 /*7*/])
				{
					iVar2 = _0x9B6E70C5CEEF4EEB(*(uParam0.f_687[iVar1 /*7*/]).f_5);
					if (!*(uParam0.f_687[iVar1 /*7*/]).f_1)
					{
						switch (iVar2)
						{
							case 1:
							case 2:
								*(uParam0.f_687[iVar1 /*7*/]).f_1 = 1;
								break;
							
							case 0:
								*(uParam0.f_687[iVar1 /*7*/]).f_1 = 0;
								iVar0 = false;
								break;
							
							case 3:
								*(uParam0.f_687[iVar1 /*7*/]).f_1 = 0;
								func_212(uParam0.f_687[iVar1 /*7*/]);
								break;
							
							case -1:
								*(uParam0.f_687[iVar1 /*7*/]).f_1 = 0;
								release_movie_mesh_set(*(uParam0.f_687[iVar1 /*7*/]).f_5);
								*uParam0.f_687[iVar1 /*7*/] = 0;
								iVar0 = false;
								break;
							}
					}
				}
				else if (is_interior_ready(*(uParam0.f_687[iVar1 /*7*/]).f_6))
				{
					*(uParam0.f_687[iVar1 /*7*/]).f_5 = load_movie_mesh_set(*(uParam0.f_687[iVar1 /*7*/]).f_4);
					*(uParam0.f_687[iVar1 /*7*/]).f_3 = get_game_timer();
					*uParam0.f_687[iVar1 /*7*/] = 1;
				}
				else
				{
					iVar0 = false;
				}
				if (*(uParam0.f_687[iVar1 /*7*/]).f_2)
				{
					if (*uParam0.f_687[iVar1 /*7*/])
					{
						if (*(uParam0.f_687[iVar1 /*7*/]).f_1)
						{
							release_movie_mesh_set(*(uParam0.f_687[iVar1 /*7*/]).f_5);
							func_212(uParam0.f_687[iVar1 /*7*/]);
							*(uParam0.f_687[iVar1 /*7*/]).f_4 = "";
						}
						else
						{
							iVar0 = false;
						}
					}
					else
					{
						func_212(uParam0.f_687[iVar1 /*7*/]);
					}
				}
			}
			iVar1++;
		}
		iVar1 = false;
		while (iVar1 < 10)
		{
			if (*uParam0.f_874[iVar1 /*5*/])
			{
				if (!*(uParam0.f_874[iVar1 /*5*/]).f_1)
				{
					if (assisted_movement_is_route_loaded(*(uParam0.f_874[iVar1 /*5*/]).f_4))
					{
						*(uParam0.f_874[iVar1 /*5*/]).f_1 = 1;
					}
					else
					{
						iVar0 = false;
					}
				}
				if (*(uParam0.f_874[iVar1 /*5*/]).f_2)
				{
					if (*(uParam0.f_874[iVar1 /*5*/]).f_1)
					{
						assisted_movement_remove_route(*(uParam0.f_874[iVar1 /*5*/]).f_4);
						func_212(uParam0.f_874[iVar1 /*5*/]);
					}
					else
					{
						iVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = false;
		while (iVar1 < 5)
		{
			if (*uParam0.f_925[iVar1 /*5*/])
			{
				if (!*(uParam0.f_925[iVar1 /*5*/]).f_1)
				{
					if (prepare_alarm(*(uParam0.f_925[iVar1 /*5*/]).f_4))
					{
						*(uParam0.f_925[iVar1 /*5*/]).f_1 = 1;
					}
					else
					{
						iVar0 = false;
					}
				}
				if (*(uParam0.f_925[iVar1 /*5*/]).f_2)
				{
					if (*(uParam0.f_925[iVar1 /*5*/]).f_1)
					{
						func_212(uParam0.f_925[iVar1 /*5*/]);
					}
					else
					{
						iVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = false;
		while (iVar1 < *uParam0.f_779)
		{
			if (*uParam0.f_779[iVar1 /*5*/])
			{
				if (!*(uParam0.f_779[iVar1 /*5*/]).f_1)
				{
					if (has_additional_text_loaded(iVar1))
					{
						*(uParam0.f_779[iVar1 /*5*/]).f_1 = 1;
					}
					else
					{
						iVar0 = false;
					}
				}
				if (*(uParam0.f_779[iVar1 /*5*/]).f_2)
				{
					if (*(uParam0.f_779[iVar1 /*5*/]).f_1)
					{
						clear_additional_text(iVar1, true);
						func_212(uParam0.f_779[iVar1 /*5*/]);
					}
					else
					{
						iVar0 = false;
					}
				}
			}
			iVar1++;
		}
		if (*uParam0.f_855)
		{
			if (!*uParam0.f_855.f_1)
			{
				if (has_ptfx_asset_loaded())
				{
					*uParam0.f_855.f_1 = 1;
				}
				else
				{
					iVar0 = false;
				}
			}
			if (*uParam0.f_855.f_2)
			{
				if (*uParam0.f_855.f_1)
				{
					remove_ptfx_asset();
					func_212(uParam0.f_855);
				}
				else
				{
					iVar0 = false;
				}
			}
		}
		if (*uParam0.f_859)
		{
			if (!*uParam0.f_859.f_1)
			{
				if (rope_are_textures_loaded())
				{
					*uParam0.f_859.f_1 = 1;
				}
				else
				{
					iVar0 = false;
				}
			}
			if (*uParam0.f_859.f_2)
			{
				if (*uParam0.f_859.f_1)
				{
					rope_unload_textures();
					func_212(uParam0.f_859);
				}
				else
				{
					iVar0 = false;
				}
			}
		}
		if (*uParam0.f_863 && is_new_load_scene_active())
		{
			if (!*uParam0.f_863.f_1)
			{
				if (is_new_load_scene_loaded())
				{
					*uParam0.f_863.f_1 = 1;
					if (*uParam0.f_978)
					{
						freeze_entity_position(player_ped_id(), false);
						func_211(uParam0);
						*uParam0.f_978 = 0;
					}
				}
				else
				{
					iVar0 = false;
				}
			}
			if (*uParam0.f_863.f_2)
			{
				new_load_scene_stop();
				func_212(uParam0.f_863);
			}
		}
		iVar1 = false;
		while (iVar1 < 5)
		{
			if (*uParam0.f_951[iVar1 /*5*/])
			{
				if (!*(uParam0.f_951[iVar1 /*5*/]).f_1)
				{
					if (has_streamed_texture_dict_loaded(*(uParam0.f_951[iVar1 /*5*/]).f_4))
					{
						*(uParam0.f_951[iVar1 /*5*/]).f_1 = 1;
					}
					else
					{
						iVar0 = false;
					}
				}
				if (*(uParam0.f_951[iVar1 /*5*/]).f_2)
				{
					if (*(uParam0.f_951[iVar1 /*5*/]).f_1)
					{
						func_212(uParam0.f_951[iVar1 /*5*/]);
					}
					else
					{
						iVar0 = false;
					}
				}
			}
			iVar1++;
		}
		if (iVar0)
		{
			*uParam0.f_977 = 0;
			return true;
		}
		else
		{
			return false;
		}
	}
	return true;
}

void func_211(auto uParam0)
{
	if (is_new_load_scene_active())
	{
		new_load_scene_stop();
		func_212(uParam0.f_863);
	}
}

void func_212(auto uParam0)
{
	*uParam0 = 0;
	*uParam0.f_1 = 0;
	*uParam0.f_2 = 0;
	*uParam0.f_3 = -1;
}

void func_213(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_215(&uLocal_494, joaat("s_m_m_marine_01"));
			func_215(&uLocal_494, joaat("s_m_y_marine_03"));
			func_215(&uLocal_494, joaat("crusader"));
			func_215(&uLocal_494, joaat("barracks"));
			func_214(&uLocal_494, &cLocal_475);
			func_215(&uLocal_494, joaat("prop_mil_crate_01"));
			break;
		
		case 1:
			func_215(&uLocal_494, joaat("s_m_y_marine_03"));
			func_215(&uLocal_494, joaat("s_m_m_marine_01"));
			func_215(&uLocal_494, joaat("crusader"));
			func_215(&uLocal_494, joaat("barracks"));
			func_215(&uLocal_494, joaat("prop_mil_crate_01"));
			break;
		
		case 2:
		case 3:
			func_215(&uLocal_494, joaat("barracks"));
			func_215(&uLocal_494, joaat("prop_mil_crate_01"));
			break;
	}
}

bool func_214(auto uParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	
	if (is_string_null_or_empty(sParam1))
	{
		return false;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < *uParam0.f_374)
	{
		if (*uParam0.f_374[iVar0 /*5*/])
		{
			if (are_strings_equal(*(uParam0.f_374[iVar0 /*5*/]).f_4, sParam1))
			{
				*(uParam0.f_374[iVar0 /*5*/]).f_2 = 0;
				if (!*(uParam0.f_374[iVar0 /*5*/]).f_1)
				{
					*uParam0.f_977 = 1;
					return true;
				}
				else
				{
					return true;
				}
			}
		}
		else if (iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		request_waypoint_recording(sParam1);
		*uParam0.f_374[iVar1 /*5*/] = 1;
		*(uParam0.f_374[iVar1 /*5*/]).f_3 = get_game_timer();
		*(uParam0.f_374[iVar1 /*5*/]).f_4 = sParam1;
		*uParam0.f_977 = 1;
		return true;
	}
	return false;
}

bool func_215(auto uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == 0)
	{
		return false;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (*uParam0[iVar0 /*5*/])
		{
			if (*(uParam0[iVar0 /*5*/]).f_4 == iParam1)
			{
				*(uParam0[iVar0 /*5*/]).f_2 = 0;
				if (!*(uParam0[iVar0 /*5*/]).f_1)
				{
					*uParam0.f_977 = 1;
					return true;
				}
				else
				{
					return true;
				}
			}
		}
		else if (iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		request_model(iParam1);
		*uParam0[iVar1 /*5*/] = 1;
		*(uParam0[iVar1 /*5*/]).f_3 = get_game_timer();
		*(uParam0[iVar1 /*5*/]).f_4 = iParam1;
		*uParam0.f_977 = 1;
		return true;
	}
	return false;
}

bool func_216(auto uParam0, Vector3 vParam1, float fParam2, int iParam3)
{
	if (func_175(vParam1) || fParam4 <= 0f)
	{
		return false;
	}
	if (*uParam0.f_863)
	{
		if (func_131(*uParam0.f_863.f_4, vParam1, 0) && *uParam0.f_863.f_10 == fParam4)
		{
			*uParam0.f_863.f_2 = 0;
			if (!*uParam0.f_863.f_1)
			{
				*uParam0.f_977 = 1;
				return true;
			}
			else
			{
				return true;
			}
		}
	}
	_new_load_scene_start_safe(vParam1, fParam4, iParam5);
	*uParam0.f_863 = 1;
	*uParam0.f_863.f_3 = get_game_timer();
	*uParam0.f_863.f_4 = {vParam1};
	*uParam0.f_863.f_7 = {0f, 0f, 0f};
	*uParam0.f_863.f_10 = fParam4;
	*uParam0.f_977 = 1;
	return true;
}

void func_217(int iParam0, auto uParam1, auto uParam2)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = {-260.5082f, 2925.446f, 40.1977f};
			*uParam2 = 303.6227f;
			break;
		
		case 1:
			*uParam1 = {-276.0887f, 2920.386f, 40.1317f};
			*uParam2 = 0f;
			break;
		
		case 2:
			*uParam1 = {-253.7471f, 2941.485f, 29.131f};
			*uParam2 = 330.8292f;
			break;
		
		case 3:
			*uParam1 = {1367.324f, 3618.374f, 33.8914f};
			*uParam2 = -118.28f;
			break;
	}
}

int func_218()
{
	return is_bit_set(Global_91278.f_20, 13);
}

void func_219(auto uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (*uParam0[iVar0 /*5*/])
		{
			*(uParam0[iVar0 /*5*/]).f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (*uParam0.f_151[iVar0 /*5*/])
		{
			*(uParam0.f_151[iVar0 /*5*/]).f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (*uParam0.f_202[iVar0 /*7*/])
		{
			*(uParam0.f_202[iVar0 /*7*/]).f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (*uParam0.f_273[iVar0 /*5*/])
		{
			*(uParam0.f_273[iVar0 /*5*/]).f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (*uParam0.f_374[iVar0 /*5*/])
		{
			*(uParam0.f_374[iVar0 /*5*/]).f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (*uParam0.f_475[iVar0 /*6*/])
		{
			*(uParam0.f_475[iVar0 /*6*/]).f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (*uParam0.f_656[iVar0 /*6*/])
		{
			*(uParam0.f_656[iVar0 /*6*/]).f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (*uParam0.f_687[iVar0 /*7*/])
		{
			*(uParam0.f_687[iVar0 /*7*/]).f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (*uParam0.f_737[iVar0 /*5*/])
		{
			*(uParam0.f_737[iVar0 /*5*/]).f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (*uParam0.f_763[iVar0 /*5*/])
		{
			*(uParam0.f_763[iVar0 /*5*/]).f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (*uParam0.f_874[iVar0 /*5*/])
		{
			*(uParam0.f_874[iVar0 /*5*/]).f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (*uParam0.f_925[iVar0 /*5*/])
		{
			*(uParam0.f_925[iVar0 /*5*/]).f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (*uParam0.f_779[iVar0 /*5*/])
		{
			*(uParam0.f_779[iVar0 /*5*/]).f_2 = 1;
		}
		iVar0++;
	}
	if (*uParam0.f_863)
	{
		*uParam0.f_863.f_2 = 1;
	}
	if (*uParam0.f_855)
	{
		*uParam0.f_855.f_2 = 1;
	}
	if (*uParam0.f_859)
	{
		*uParam0.f_859.f_2 = 1;
	}
}

void func_220()
{
	iLocal_447 = 0;
	while (iLocal_447 <= 3 - 1)
	{
		if (does_entity_exist(Local_101[iLocal_447 /*2*/]) && !is_ped_injured(Local_101[iLocal_447 /*2*/]))
		{
			if (is_ped_in_any_vehicle(Local_101[iLocal_447 /*2*/], 0))
			{
				set_ped_coords_no_gang(Local_101[iLocal_447 /*2*/], get_entity_coords(get_vehicle_ped_is_in(Local_101[iLocal_447 /*2*/], 0), 1) + Vector(0f, -2f, 0f));
			}
			func_227(&(Local_101[iLocal_447 /*2*/]));
		}
		iLocal_447++;
	}
	iLocal_447 = 0;
	while (iLocal_447 <= 9 - 1)
	{
		if (does_entity_exist(Local_111[iLocal_447 /*14*/]))
		{
			func_226(&(Local_111[iLocal_447 /*14*/].f_2));
			Local_111[iLocal_447 /*14*/].f_12 = 0;
			if (!is_ped_injured(Local_111[iLocal_447 /*14*/]))
			{
				if (is_ped_in_any_vehicle(Local_111[iLocal_447 /*14*/], 0))
				{
					set_ped_coords_no_gang(Local_111[iLocal_447 /*14*/], get_entity_coords(get_vehicle_ped_is_in(Local_111[iLocal_447 /*14*/], 0), 1) + Vector(0f, -2f, 0f));
				}
				func_227(&(Local_111[iLocal_447 /*14*/]));
			}
		}
		iLocal_447++;
	}
	iLocal_447 = 0;
	while (iLocal_447 <= 2 - 1)
	{
		if (does_entity_exist(iLocal_108[iLocal_447]))
		{
			func_225(&(iLocal_108[iLocal_447]));
		}
		iLocal_447++;
	}
	iLocal_447 = 0;
	while (iLocal_447 <= 3 - 1)
	{
		if (does_entity_exist(Local_94[iLocal_447 /*2*/]))
		{
			func_224(Local_94[iLocal_447 /*2*/]);
			func_221(&(Local_94[iLocal_447 /*2*/]));
		}
		iLocal_447++;
	}
	clear_prints();
	clear_help(1);
	destroy_all_cams(0);
	func_33(&Local_403, 1, 0);
	if (func_31(player_ped_id()))
	{
		set_player_control(player_id(), true, 0);
		clear_player_wanted_level(player_id());
	}
	if (!is_ped_injured(player_ped_id()))
	{
		clear_ped_tasks(player_ped_id());
	}
	display_radar(true);
	display_hud(true);
	iLocal_434 = 0;
	iLocal_436 = 0;
	iLocal_435 = 0;
	iLocal_433 = 0;
	iLocal_472 = 0;
	iLocal_456 = false;
	iLocal_457 = false;
	StringCopy(&cLocal_475, "Rural_prep_trigger1", 64);
}

void func_221(int iParam0)
{
	if (does_entity_exist(*iParam0))
	{
		if (!is_entity_a_mission_entity(*iParam0))
		{
			set_entity_as_mission_entity(*iParam0, true, 0);
		}
		if (func_223(*iParam0))
		{
			if (is_entity_a_mission_entity(*iParam0) && does_entity_belong_to_this_script(*iParam0, 1))
			{
				if (func_222(player_ped_id()))
				{
					if (is_ped_in_vehicle(player_ped_id(), *iParam0, 0))
					{
						set_vehicle_as_no_longer_needed(iParam0);
						return;
					}
				}
				delete_vehicle(iParam0);
			}
		}
		else
		{
			if (func_222(player_ped_id()))
			{
				if (is_ped_in_vehicle(player_ped_id(), *iParam0, 0))
				{
					set_vehicle_as_no_longer_needed(iParam0);
					return;
				}
			}
			delete_vehicle(iParam0);
		}
	}
}

bool func_222(int iParam0)
{
	if (does_entity_exist(iParam0))
	{
		if (!is_entity_dead(iParam0, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_223(int iParam0)
{
	if (func_222(iParam0))
	{
		if (is_vehicle_driveable(iParam0, 0))
		{
			if (!is_entity_on_fire(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_224(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (does_entity_exist(iParam0))
	{
		if (is_vehicle_driveable(iParam0, 0))
		{
			iVar0 = get_ped_in_vehicle_seat(iParam0, -1);
			if (does_entity_exist(iVar0))
			{
				if (!is_ped_injured(iVar0))
				{
					clear_ped_tasks_immediately(iVar0);
				}
				else
				{
					delete_ped(&iVar0);
				}
			}
			iVar2 = get_vehicle_max_number_of_passengers(iParam0);
			iVar1 = false;
			while (iVar1 < iVar2)
			{
				if (!is_vehicle_seat_free(iParam0, iVar1))
				{
					iVar0 = get_ped_in_vehicle_seat(iParam0, iVar1);
					if (does_entity_exist(iVar0))
					{
						if (!is_ped_injured(iVar0))
						{
							clear_ped_tasks_immediately(iVar0);
						}
						else
						{
							delete_ped(&iVar0);
						}
					}
				}
				iVar1++;
			}
		}
	}
}

void func_225(int iParam0)
{
	if (does_entity_exist(*iParam0))
	{
		if (is_entity_attached_to_any_ped(*iParam0))
		{
			detach_entity(*iParam0, 1, true);
		}
		delete_object(iParam0);
	}
}

void func_226(int iParam0)
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

void func_227(int iParam0)
{
	if (does_entity_exist(*iParam0))
	{
		if (!is_entity_dead(*iParam0, 0))
		{
			set_entity_load_collision_flag(*iParam0, false);
		}
		if (!is_entity_a_mission_entity(*iParam0))
		{
			set_entity_as_mission_entity(*iParam0, true, 0);
		}
		delete_ped(iParam0);
	}
}

void func_228()
{
	switch (iLocal_1474)
	{
		case 1:
			iLocal_1474 = 2;
			iLocal_1476 = -1;
			break;
		
		case 2:
			iLocal_1474 = 3;
			iLocal_1476 = 0;
			iLocal_1475 = iLocal_1477;
			break;
		
		case 3:
			iLocal_1477 = -1;
			iLocal_1474 = 0;
			break;
		
		case 0:
			if (get_game_timer() - iLocal_1478 > 2500)
			{
				iLocal_1478 = get_game_timer();
			}
			break;
	}
}

void func_229(auto uParam0, int iParam1, int iParam2)
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
		if (func_230(*uParam0.f_3))
		{
			clear_help(1);
		}
	}
	if (!is_string_null(sVar0))
	{
		if (func_230(sVar0))
		{
			clear_help(1);
		}
	}
}

int func_230(char* sParam0)
{
	_0x0A24DA3A41B718F5(sParam0);
	return _0x10BDDBFC529428DD(0);
}

void func_231(auto uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_232(uParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6);
}

void func_232(auto uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, auto uParam5, int iParam6)
{
	*uParam0.f_6 = 0;
	func_233(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, iParam4, uParam5, iParam6);
}

void func_233(auto uParam0, int iParam1, Vector3 vParam2, char* sParam3, int iParam4, int iParam5, auto uParam6, int iParam7)
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
	if (func_230(iVar0))
	{
		func_250();
	}
	if (func_249(iParam1) && is_entity_visible(iParam1))
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
			if (func_244(uParam0, iParam7, iParam9, 0))
			{
				func_241(uParam0, iParam1, vParam2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (*uParam0.f_6 == 2)
			{
				if (func_237(iVar0))
				{
					if ((is_string_null(*uParam0.f_3) && !is_string_null(iVar0)) && is_ped_in_any_vehicle(player_ped_id(), 0))
					{
						if ((iVar1 && !is_help_message_being_displayed()) && uParam8)
						{
							if (!func_230(iVar0))
							{
								func_140(iVar0, -1);
								*uParam0.f_3 = iVar0;
								if (are_strings_equal("CMN_HINT", iVar0))
								{
									func_236(1);
								}
							}
						}
					}
				}
			}
			else if (func_237(iVar0))
			{
				if (is_string_null(*uParam0.f_3) && !is_string_null(iVar0))
				{
					if (((is_entity_on_screen(iParam1) && iVar1) && !is_help_message_being_displayed()) && uParam8)
					{
						if (!func_230(iVar0))
						{
							func_140(iVar0, -1);
							*uParam0.f_3 = iVar0;
							if (are_strings_equal("CMN_HINT", iVar0))
							{
								func_236(1);
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
				if (func_230(sParam5))
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
						func_229(uParam0, iVar0, 1);
					}
				}
				else if (is_ped_in_any_heli(player_ped_id()))
				{
					if (_0xEE778F8C7E1142E2(6) == 3 || _0xEE778F8C7E1142E2(6) == 4)
					{
						func_229(uParam0, iVar0, 1);
					}
				}
				else if (is_ped_in_any_plane(player_ped_id()))
				{
					if (_0xEE778F8C7E1142E2(4) == 3 || _0xEE778F8C7E1142E2(4) == 4)
					{
						func_229(uParam0, iVar0, 1);
					}
				}
				else if (is_ped_in_any_sub(player_ped_id()))
				{
					if (_0xEE778F8C7E1142E2(5) == 3 || _0xEE778F8C7E1142E2(5) == 4)
					{
						func_229(uParam0, iVar0, 1);
					}
				}
				else if (is_ped_on_any_bike(player_ped_id()))
				{
					if (_0xEE778F8C7E1142E2(2) == 3 || _0xEE778F8C7E1142E2(2) == 4)
					{
						func_229(uParam0, iVar0, 1);
					}
				}
				else if (get_follow_vehicle_cam_view_mode() == 3 || get_follow_vehicle_cam_view_mode() == 4)
				{
					func_229(uParam0, iVar0, 1);
				}
			}
			if (!func_244(uParam0, iParam7, iParam9, 0))
			{
				if ((!*uParam0 && !*uParam0.f_1) && !func_235(uParam0))
				{
					func_234(uParam0);
				}
			}
		}
	}
	else
	{
		func_229(uParam0, iVar0, 0);
	}
}

void func_234(auto uParam0)
{
	if (func_249(player_ped_id()))
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

bool func_235(auto uParam0)
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

int func_236(int iParam0)
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

bool func_237(char* sParam0)
{
	if (!func_238(1, 1, 0))
	{
		if ((!is_string_null_or_empty(sParam0) && func_230(sParam0)) || func_230("CMN_HINT"))
		{
			clear_help(1);
		}
		return false;
	}
	switch (Global_35711)
	{
		case 0:
		case 3:
			if (func_236(0) < 3)
			{
				return true;
			}
			break;
		
		case 4:
			if (func_236(0) < 1)
			{
				return true;
			}
			break;
		
		case 5:
		case 15:
			if (func_236(0) < 1)
			{
				return true;
			}
			break;
		
		default:
			break;
	}
	return false;
}

bool func_238(int iParam0, int iParam1, int iParam2)
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
	if (func_240(0))
	{
		return false;
	}
	if (func_239())
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

int func_239()
{
	return get_game_timer() <= Global_17257.f_5745 + 100;
}

bool func_240(int iParam0)
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

void func_241(auto uParam0, int iParam1, Vector3 vParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (is_entity_dead(iParam1, 0))
	{
		func_229(uParam0, 0, 0);
	}
	if (func_131(vParam2, 0f, 0f, 0f, 0))
	{
		if (is_entity_a_ped(iParam1))
		{
			iVar0 = get_ped_index_from_entity_index(iParam1);
			if (!is_ped_in_any_vehicle(iVar0, 0))
			{
				if (is_ped_a_player(iVar0))
				{
					if (!func_242())
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

int func_242()
{
	return func_243(player_id());
}

bool func_243(int iParam0)
{
	if (get_entity_model(get_player_ped(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return true;
	}
	return false;
}

bool func_244(auto uParam0, int iParam1, int iParam2, int iParam3)
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
					if (func_248(iParam1, iParam2, iParam3))
					{
						*uParam0.f_4 = get_game_timer();
						*uParam0.f_5 = 1;
						*uParam0.f_7 = 1;
					}
				}
				else if (func_247(iParam1, iParam2, iParam3))
				{
					*uParam0.f_4 = get_game_timer();
					*uParam0.f_5 = 1;
					*uParam0.f_7 = 1;
				}
			}
			else if (*uParam0.f_6 == 1)
			{
				if (func_247(iParam1, iParam2, iParam3))
				{
					*uParam0.f_4 = get_game_timer();
					*uParam0.f_5 = 1;
					*uParam0.f_7 = 1;
				}
			}
			else if (*uParam0.f_6 == 2)
			{
				if (func_248(iParam1, iParam2, iParam3))
				{
					*uParam0.f_4 = get_game_timer();
					*uParam0.f_5 = 1;
					*uParam0.f_7 = 1;
				}
			}
			if (func_235(uParam0))
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
						if (!func_248(iParam1, iParam2, iParam3))
						{
							*uParam0.f_4 = get_game_timer();
							*uParam0.f_5 = 3;
						}
					}
					else if (!func_247(iParam1, iParam2, iParam3))
					{
						*uParam0.f_4 = get_game_timer();
						*uParam0.f_5 = 3;
					}
				}
				else if (*uParam0.f_6 == 1)
				{
					if (!func_247(iParam1, iParam2, iParam3))
					{
						*uParam0.f_4 = get_game_timer();
						*uParam0.f_5 = 3;
					}
				}
				else if (*uParam0.f_6 == 2)
				{
					if (!func_248(iParam1, iParam2, iParam3))
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
					if (!func_248(iParam1, iParam2, iParam3))
					{
						*uParam0.f_5 = 0;
					}
				}
				else if (!func_247(iParam1, iParam2, iParam3))
				{
					*uParam0.f_5 = 0;
				}
			}
			else if (*uParam0.f_6 == 1)
			{
				if (!func_247(iParam1, iParam2, iParam3) || is_ped_in_any_vehicle(player_ped_id(), 1))
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
				else if (!func_248(iParam1, iParam2, iParam3))
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
						if (func_246(iParam1, iParam2, iParam3))
						{
							*uParam0.f_5 = 0;
						}
					}
					else if (func_245(iParam1, iParam2, iParam3))
					{
						*uParam0.f_5 = 0;
					}
				}
				else if (*uParam0.f_6 == 1)
				{
					if (is_ped_in_any_vehicle(player_ped_id(), 1) || func_245(iParam1, iParam2, iParam3))
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
					else if (func_246(iParam1, iParam2, iParam3))
					{
						*uParam0.f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_235(uParam0))
			{
				*uParam0.f_5 = 0;
			}
			break;
	}
	if (!func_238(iParam1, iParam2, iParam3))
	{
		*uParam0.f_5 = 0;
		*uParam0.f_7 = 0;
	}
	if (*uParam0.f_7)
	{
		func_250();
		return true;
	}
	else
	{
		return false;
	}
	return false;
}

bool func_245(int iParam0, int iParam1, int iParam2)
{
	if (!func_238(iParam0, iParam1, iParam2))
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

bool func_246(int iParam0, int iParam1, int iParam2)
{
	if (!func_238(iParam0, iParam1, iParam2))
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

bool func_247(int iParam0, int iParam1, int iParam2)
{
	if (!func_238(iParam0, iParam1, iParam2))
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

bool func_248(int iParam0, int iParam1, int iParam2)
{
	if (!func_238(iParam0, iParam1, iParam2))
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

bool func_249(int iParam0)
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

void func_250()
{
	set_bit(&Global_2284, 4);
}

void func_251(auto uParam0)
{
	func_210(uParam0);
}

void func_252()
{
	Vector3 vVar0;
	auto uVar3;
	
	remove_relationship_group(iLocal_492);
	remove_relationship_group(iLocal_493);
	add_relationship_group("trevor", &iLocal_492);
	add_relationship_group("enemies", &iLocal_493);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_493, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_493, iLocal_492);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_492, iLocal_493);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_493, -1533126372);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, -1533126372, iLocal_493);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_493, iLocal_493);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_493, -472287501);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, -472287501, iLocal_493);
	request_additional_text("ruralp", false);
	if (is_player_playing(player_id()))
	{
		set_player_control(player_id(), true, 0);
	}
	_0xDC0F817884CDD856(5, false);
	_0xDC0F817884CDD856(3, false);
	_0xDC0F817884CDD856(1, false);
	_0xDC0F817884CDD856(10, false);
	_0xDC0F817884CDD856(9, false);
	_0xE532EC1A63231B4F(1, 0);
	_0xE532EC1A63231B4F(2, 0);
	_0xE532EC1A63231B4F(8, 0);
	clear_player_wanted_level(player_id());
	set_wanted_level_multiplier(0f);
	set_max_wanted_level(false);
	set_police_radar_blips(0);
	set_vehicle_model_is_suppressed(joaat("crusader"), true);
	set_vehicle_model_is_suppressed(joaat("barracks"), true);
	iLocal_445 = add_scenario_blocking_area(Vector(35.39456f, 3600.538f, 1375.234f) - Vector(0f, 7f, 14.25f), Vector(35.39456f, 3600.538f, 1375.234f) + Vector(3f, 7f, 14.25f), 0, 1, 1, 1);
	set_all_vehicle_generators_active_in_area(Vector(33.8865f, 3596.518f, 1383.51f) - Vector(1f, 5f, 5f), Vector(33.8865f, 3596.518f, 1383.51f) + Vector(2f, 5f, 5f), false, 1);
	if (func_199() || func_7(0))
	{
		if (func_199())
		{
			iLocal_1480 = func_310();
			if (Global_85788)
			{
				iLocal_1480++;
			}
			if (iLocal_1480 >= 3)
			{
				iLocal_1480 = 3;
			}
		}
		else if (func_7(0))
		{
			iLocal_1480 = 0;
		}
		if (func_199())
		{
			func_217(iLocal_1480, &vVar0, &uVar3);
			func_309(vVar0, uVar3, 1, 0);
		}
		iLocal_1479 = true;
	}
	else
	{
		while (!func_307())
		{
			wait(false);
		}
		func_255(0, "stage 0: reached ambush", 0, 0, 0, 1);
		iLocal_1475 = 0;
		func_213(0);
	}
	iLocal_1476 = 0;
	func_253(92);
}

void func_253(int iParam0)
{
	Global_87466 = 0;
	switch (iParam0)
	{
		case 72:
			func_254(2);
			func_254(4);
			break;
		
		case 73:
			func_254(0);
			func_254(1);
			func_254(7);
			break;
		
		case 92:
			func_254(10);
			func_254(9);
			func_254(13);
			func_254(6);
			break;
		
		case 68:
			func_254(11);
			break;
		
		case 78:
			func_254(14);
			break;
		
		case 79:
			func_254(3);
			break;
		
		default:
			break;
	}
}

void func_254(int iParam0)
{
	set_bit(&Global_87466, iParam0);
}

void func_255(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
		func_306(1);
		if (iParam0 <= Global_91315)
		{
		}
		iVar1 = func_304(get_this_script_name(), 1);
		if (iVar1 != -1 && iVar1 != 94)
		{
			Global_101154.f_7775.f_330[iVar1 /*6*/].f_1 = 0;
			iVar2 = func_302(iVar1);
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
			iVar5 = func_297(get_this_script_name(), 1);
			if (iVar5 != -1)
			{
				Global_101154.f_17264[iVar5 /*6*/].f_4 = 0;
				MemCopy(&uVar6, {func_296(iVar5)}, 4);
				playstats_mission_checkpoint(&uVar6, 0, Global_91315, iParam0);
			}
			else
			{
				iVar10 = func_295(&(Global_91278.f_3));
				if (iVar10 > -1)
				{
					Global_101154.f_29511.f_4[iVar10] = 0;
				}
			}
		}
		Global_85789 = iParam2;
		Global_91315 = iParam0;
		func_256(iParam0, sParam1, iParam4, iParam5);
		if (are_strings_equal(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_91315)
	{
	}
}

void func_256(int iParam0, auto uParam1, int iParam2, int iParam3)
{
	func_257(&Global_95496, get_this_script_name(), iParam0, uParam1, iParam3, iParam2);
}

void func_257(auto uParam0, char* sParam1, auto uParam2, auto uParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = func_19();
	*uParam0.f_1 = func_111();
	_get_weather_type_transition(uParam0.f_6, uParam0.f_7, uParam0.f_8);
	if (!is_ped_injured(player_ped_id()))
	{
		func_281(uParam0.f_2305, 0);
		func_280(player_ped_id());
		func_274(player_ped_id(), 0);
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
		if (iVar1 == func_273())
		{
			func_266(player_ped_id(), uParam0.f_616[iVar1 /*65*/], 1);
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
		func_259(uParam0.f_2311, uParam0, iParam5, 1, 1, 0);
	}
	func_258(uParam0.f_2401);
	uParam3 = uParam3;
	uParam2 = uParam2;
}

bool func_258(auto uParam0)
{
	*uParam0 = Global_87460;
	*uParam0.f_1 = Global_87461;
	*uParam0.f_2 = 0;
	*uParam0.f_3 = 0;
	return true;
}

void func_259(auto uParam0, auto uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam2 == 0)
	{
		iParam2 = player_ped_id();
	}
	if (does_entity_exist(iParam2))
	{
		*uParam1.f_5 = func_29(iParam2);
	}
	if (func_265(iParam2, &iVar0, iParam3, iParam5))
	{
		func_260(uParam0, uParam1, iVar0, iParam4);
	}
	else if (does_entity_exist(iVar0))
	{
		if (!is_entity_dead(iVar0, 0))
		{
			if (is_vehicle_model(iVar0, joaat("skylift")) && is_ped_in_vehicle(player_ped_id(), iVar0, 0))
			{
				func_260(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

bool func_260(auto uParam0, auto uParam1, int iParam2, int iParam3)
{
	if (is_vehicle_driveable(iParam2, 0))
	{
		func_262(uParam0, iParam2, iParam3);
		*uParam1.f_4 = iParam2;
		if (func_261(iParam2))
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

bool func_261(int iParam0)
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

void func_262(auto uParam0, int iParam1, int iParam2)
{
	func_85(iParam1, uParam0.f_12);
	*uParam0.f_7 = func_264(iParam1, 145, 0);
	*uParam0.f_11 = func_102(iParam1);
	if (!*uParam0.f_7)
	{
		if (!*uParam0.f_10)
		{
			*uParam0.f_10 = func_263(iParam1);
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

bool func_263(int iParam0)
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

bool func_264(int iParam0, int iParam1, int iParam2)
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
					if (iParam2 == 0 || get_entity_model(iParam0) == func_123(iParam1, iParam2))
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

bool func_265(int iParam0, auto uParam1, int iParam2, int iParam3)
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
						if (func_103(*uParam1, func_19(), 1))
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

void func_266(int iParam0, auto uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (!is_ped_injured(iParam0))
	{
		iVar0 = func_29(iParam0);
		iVar1 = false;
		while (iVar1 < 12)
		{
			func_272(iParam0, iVar1, uParam1.f_13[iVar1], uParam1[iVar1], uParam1.f_26[iVar1], iParam2, 145);
			iVar1++;
		}
		iVar1 = false;
		while (iVar1 < 9)
		{
			func_271(iParam0, iVar1, uParam1.f_39[iVar1], uParam1.f_49[iVar1], iParam2, 145);
			iVar1++;
		}
		if (func_21(iVar0))
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
			if (func_270(161, -1))
			{
				*uParam1.f_59 = func_267(2043, Global_69309, 0);
			}
			else
			{
				*uParam1.f_59 = func_267(745, Global_69309, 0);
			}
			*uParam1.f_60 = func_267(746, Global_69309, 0);
			*uParam1.f_61 = func_267(747, Global_69309, 0);
		}
		if (network_is_game_in_progress() && iParam0 == player_ped_id())
		{
			if (func_270(161, -1))
			{
				*uParam1.f_59 = func_267(2043, Global_69309, 0);
			}
			else
			{
				*uParam1.f_59 = func_267(745, Global_69309, 0);
			}
		}
	}
}

int func_267(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	auto uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2469339[iParam0 /*5*/][func_268(iParam1)];
	if (stat_get_int(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_268(auto uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_269();
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

auto func_269()
{
	return Global_1312747;
}

int func_270(int iParam0, int iParam1)
{
	int iVar0;
	auto uVar1;
	
	iVar0 = Global_2490231[iParam0 /*5*/][func_268(iParam1)];
	if (stat_get_bool(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_271(int iParam0, int iParam1, auto uParam2, auto uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	iVar0 = func_29(iParam0);
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

void func_272(int iParam0, int iParam1, auto uParam2, auto uParam3, auto uParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	iVar0 = func_29(iParam0);
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

auto func_273()
{
	func_20();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_274(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_29(iParam0);
	if (func_21(iVar0) && !is_ped_injured(iParam0))
	{
		if (iParam0 == player_ped_id())
		{
			func_275(iParam0, &(Global_101154.f_1826.f_539.f_298[iVar0 /*284*/]));
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

void func_275(int iParam0, auto uParam1)
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
			iVar3 = func_279(iVar0);
			if (iVar3 != 0)
			{
				vVar4.x = get_ped_weapontype_in_slot(iParam0, func_279(iVar0));
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
					iVar2 = func_277(vVar4.x, iVar1);
					while (iVar2 != 0)
					{
						if (has_ped_got_weapon_component(iParam0, vVar4.x, iVar2))
						{
							set_bit(&(vVar4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_277(vVar4.x, iVar1);
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
			if ((get_dlc_weapon_data(iVar7, &Var9) && !func_276(Var9.f_1)) && iVar70 < 50)
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

bool func_276(int iParam0)
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

int func_277(int iParam0, int iParam1)
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
				iVar1 = func_278(iParam0, &uVar2);
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

int func_278(int iParam0, auto uParam1)
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

int func_279(int iParam0)
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

void func_280(int iParam0)
{
	int iVar0;
	
	iVar0 = func_29(iParam0);
	if (func_21(iVar0) && !is_ped_injured(iParam0))
	{
		Global_101154.f_1826.f_539.f_294[iVar0] = get_ped_armour(iParam0);
	}
}

void func_281(auto uParam0, int iParam1)
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
		if (func_284(&iVar0))
		{
			if (func_283(iVar0, &vVar1, &uVar4))
			{
				vVar1.z++;
				*uParam0 = {vVar1};
				*uParam0.f_3 = uVar4;
			}
		}
		else if (is_entity_in_angled_area(player_ped_id(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, true, 0))
		{
			iVar5 = func_19();
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
		else if (func_282(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f))
		{
			*uParam0 = {279.4137f, -585.8815f, 43.2502f};
			*uParam0.f_3 = 48.8028f;
		}
	}
}

bool func_282(Vector3 vParam0, char* sParam1, Vector3 vParam2)
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

int func_283(int iParam0, auto uParam1, auto uParam2)
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
	return !func_131(*uParam1, 0f, 0f, 0f, 0);
}

bool func_284(auto uParam0)
{
	if (!is_entity_dead(player_ped_id(), 0) && !is_ped_injured(player_ped_id()))
	{
		if (func_294())
		{
			*uParam0 = func_290(get_entity_coords(player_ped_id(), 0), 5, -1, 0, 1, -1);
			if (func_289(*uParam0) && !func_285(*uParam0))
			{
				return true;
			}
		}
	}
	return false;
}

int func_285(int iParam0)
{
	return func_286(iParam0, 0, 1);
}

int func_286(int iParam0, int iParam1, int iParam2)
{
	if (iParam2)
	{
		return is_bit_set(Global_91330.f_1300[iParam0], iParam1);
	}
	else if (network_is_game_in_progress())
	{
		if (func_288() == 0)
		{
			return is_bit_set(func_267(func_287(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return is_bit_set(Global_101154.f_668[iParam0], iParam1);
	}
	return false;
}

int func_287(int iParam0)
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

auto func_288()
{
	return Global_25120;
}

int func_289(int iParam0)
{
	return func_286(iParam0, 5, 1);
}

int func_290(Vector3 vParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	Vector3 fVar1;
	Vector3 fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 44)
	{
		if (iParam3 == 5 || iParam3 == func_293(iVar0))
		{
			if (!iParam5 || func_292(iVar0))
			{
				fVar1 = get_distance_between_coords(vParam0, func_291(iVar0, 0), 1);
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

Vector3 func_291(int iParam0, int iParam1)
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

int func_292(int iParam0)
{
	return func_286(iParam0, 0, 0);
}

int func_293(int iParam0)
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

int func_294()
{
	return Global_91330.f_296 > 0;
}

int func_295(char* sParam0)
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

struct<2> func_296(int iParam0)
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

int func_297(char* sParam0, int iParam1)
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
		func_298(iVar0, &sVar1);
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

void func_298(int iParam0, auto uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_299(uParam1, "Abigail1", func_301(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_300(iParam0), 1, 0);
			break;
		
		case 1:
			func_299(uParam1, "Abigail2", func_301(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_300(iParam0), 1, 0);
			break;
		
		case 2:
			func_299(uParam1, "Barry1", func_301(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_300(iParam0), 1, 0);
			break;
		
		case 3:
			func_299(uParam1, "Barry2", func_301(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_300(iParam0), 1, 1);
			break;
		
		case 4:
			func_299(uParam1, "Barry3", func_301(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_300(iParam0), 0, 0);
			break;
		
		case 5:
			func_299(uParam1, "Barry3A", func_301(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_300(iParam0), 0, 1);
			break;
		
		case 6:
			func_299(uParam1, "Barry3C", func_301(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_300(iParam0), 0, 1);
			break;
		
		case 7:
			func_299(uParam1, "Barry4", func_301(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_300(iParam0), 0, 0);
			break;
		
		case 8:
			func_299(uParam1, "Dreyfuss1", func_301(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_300(iParam0), 0, 0);
			break;
		
		case 9:
			func_299(uParam1, "Epsilon1", func_301(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_300(iParam0), 0, 0);
			break;
		
		case 10:
			func_299(uParam1, "Epsilon2", func_301(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_300(iParam0), 1, 0);
			break;
		
		case 11:
			func_299(uParam1, "Epsilon3", func_301(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_300(iParam0), 0, 0);
			break;
		
		case 12:
			func_299(uParam1, "Epsilon4", func_301(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_300(iParam0), 0, 0);
			break;
		
		case 13:
			func_299(uParam1, "Epsilon5", func_301(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_300(iParam0), 1, 0);
			break;
		
		case 14:
			func_299(uParam1, "Epsilon6", func_301(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_300(iParam0), 0, 1);
			break;
		
		case 15:
			func_299(uParam1, "Epsilon7", func_301(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_300(iParam0), 0, 0);
			break;
		
		case 16:
			func_299(uParam1, "Epsilon8", func_301(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_300(iParam0), 1, 0);
			break;
		
		case 17:
			func_299(uParam1, "Extreme1", func_301(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_300(iParam0), 0, 1);
			break;
		
		case 18:
			func_299(uParam1, "Extreme2", func_301(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_300(iParam0), 0, 1);
			break;
		
		case 19:
			func_299(uParam1, "Extreme3", func_301(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_300(iParam0), 0, 1);
			break;
		
		case 20:
			func_299(uParam1, "Extreme4", func_301(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_300(iParam0), 0, 0);
			break;
		
		case 21:
			func_299(uParam1, "Fanatic1", func_301(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_300(iParam0), 1, 0);
			break;
		
		case 22:
			func_299(uParam1, "Fanatic2", func_301(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_300(iParam0), 1, 0);
			break;
		
		case 23:
			func_299(uParam1, "Fanatic3", func_301(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_300(iParam0), 0, 1);
			break;
		
		case 24:
			func_299(uParam1, "Hao1", func_301(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_300(iParam0), 0, 1);
			break;
		
		case 25:
			func_299(uParam1, "Hunting1", func_301(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_300(iParam0), 0, 1);
			break;
		
		case 26:
			func_299(uParam1, "Hunting2", func_301(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_300(iParam0), 0, 1);
			break;
		
		case 27:
			func_299(uParam1, "Josh1", func_301(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_300(iParam0), 1, 0);
			break;
		
		case 28:
			func_299(uParam1, "Josh2", func_301(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_300(iParam0), 1, 1);
			break;
		
		case 29:
			func_299(uParam1, "Josh3", func_301(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_300(iParam0), 1, 1);
			break;
		
		case 30:
			func_299(uParam1, "Josh4", func_301(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_300(iParam0), 1, 0);
			break;
		
		case 31:
			func_299(uParam1, "Maude1", func_301(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_300(iParam0), 0, 1);
			break;
		
		case 32:
			func_299(uParam1, "Minute1", func_301(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_300(iParam0), 0, 1);
			break;
		
		case 33:
			func_299(uParam1, "Minute2", func_301(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_300(iParam0), 0, 1);
			break;
		
		case 34:
			func_299(uParam1, "Minute3", func_301(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_300(iParam0), 0, 1);
			break;
		
		case 35:
			func_299(uParam1, "MrsPhilips1", func_301(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_300(iParam0), 0, 0);
			break;
		
		case 36:
			func_299(uParam1, "MrsPhilips2", func_301(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_300(iParam0), 0, 0);
			break;
		
		case 37:
			func_299(uParam1, "Nigel1", func_301(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_300(iParam0), 1, 0);
			break;
		
		case 38:
			func_299(uParam1, "Nigel1A", func_301(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_300(iParam0), 1, 1);
			break;
		
		case 39:
			func_299(uParam1, "Nigel1B", func_301(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_300(iParam0), 1, 1);
			break;
		
		case 40:
			func_299(uParam1, "Nigel1C", func_301(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_300(iParam0), 1, 1);
			break;
		
		case 41:
			func_299(uParam1, "Nigel1D", func_301(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_300(iParam0), 1, 1);
			break;
		
		case 42:
			func_299(uParam1, "Nigel2", func_301(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_300(iParam0), 1, 1);
			break;
		
		case 43:
			func_299(uParam1, "Nigel3", func_301(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_300(iParam0), 1, 1);
			break;
		
		case 44:
			func_299(uParam1, "Omega1", func_301(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_300(iParam0), 0, 0);
			break;
		
		case 45:
			func_299(uParam1, "Omega2", func_301(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_300(iParam0), 0, 0);
			break;
		
		case 46:
			func_299(uParam1, "Paparazzo1", func_301(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_300(iParam0), 0, 1);
			break;
		
		case 47:
			func_299(uParam1, "Paparazzo2", func_301(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_300(iParam0), 0, 1);
			break;
		
		case 48:
			func_299(uParam1, "Paparazzo3", func_301(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_300(iParam0), 0, 0);
			break;
		
		case 49:
			func_299(uParam1, "Paparazzo3A", func_301(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_300(iParam0), 0, 1);
			break;
		
		case 50:
			func_299(uParam1, "Paparazzo3B", func_301(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_300(iParam0), 0, 1);
			break;
		
		case 51:
			func_299(uParam1, "Paparazzo4", func_301(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_300(iParam0), 0, 0);
			break;
		
		case 52:
			func_299(uParam1, "Rampage1", func_301(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_300(iParam0), 0, 0);
			break;
		
		case 54:
			func_299(uParam1, "Rampage3", func_301(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_300(iParam0), 1, 0);
			break;
		
		case 55:
			func_299(uParam1, "Rampage4", func_301(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_300(iParam0), 1, 0);
			break;
		
		case 56:
			func_299(uParam1, "Rampage5", func_301(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_300(iParam0), 0, 0);
			break;
		
		case 53:
			func_299(uParam1, "Rampage2", func_301(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_300(iParam0), 1, 0);
			break;
		
		case 57:
			func_299(uParam1, "TheLastOne", func_301(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_300(iParam0), 0, 1);
			break;
		
		case 58:
			func_299(uParam1, "Tonya1", func_301(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_300(iParam0), 0, 1);
			break;
		
		case 59:
			func_299(uParam1, "Tonya2", func_301(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_300(iParam0), 0, 1);
			break;
		
		case 60:
			func_299(uParam1, "Tonya3", func_301(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_300(iParam0), 0, 1);
			break;
		
		case 61:
			func_299(uParam1, "Tonya4", func_301(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_300(iParam0), 0, 1);
			break;
		
		case 62:
			func_299(uParam1, "Tonya5", func_301(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_300(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_299(auto uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, Vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, auto uParam19, int iParam20, int iParam21)
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

bool func_300(int iParam0)
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

struct<2> func_301(int iParam0)
{
	char[8] cVar0;
	struct<2> Var2;
	
	StringCopy(&cVar0, "", 8);
	Var2 = {func_296(iParam0)};
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

int func_302(int iParam0)
{
	switch (iParam0)
	{
		case 69:
		case 70:
			return func_303(Global_101154.f_7775.f_99.f_205[10]);
			break;
		
		case 74:
		case 75:
			return func_303(Global_101154.f_7775.f_99.f_205[8]);
			break;
		
		case 84:
		case 85:
			return func_303(Global_101154.f_7775.f_99.f_205[11]);
			break;
		
		case 90:
			return func_303(Global_101154.f_7775.f_99.f_205[7]);
			break;
		
		case 93:
			return func_303(Global_101154.f_7775.f_99.f_205[9]);
			break;
	}
	return 0;
}

int func_303(int iParam0)
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

int func_304(char* sParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = get_hash_key(sParam0);
	iVar1 = func_305(iVar0, 1);
	if (iVar1 == -1 && !iParam1)
	{
	}
	return iVar1;
}

int func_305(int iParam0, int iParam1)
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

void func_306(int iParam0)
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

bool func_307()
{
	int iVar0;
	
	if (!does_entity_exist(Local_94[0 /*2*/]))
	{
		if (does_entity_exist(Global_88108[0]))
		{
			set_entity_as_mission_entity(Global_88108[0], true, 1);
			Local_94[0 /*2*/] = Global_88108[0];
			_0x18EB48CFC41F2EA0(Global_88108[0], 0f);
			_0x153973AB99FE8980(Local_94[0 /*2*/], "PS_PREP_VEHICLES_GROUP", 0f);
			func_201(Local_94[0 /*2*/], 0);
			reset_entity_alpha(Local_94[0 /*2*/]);
		}
	}
	if (!does_entity_exist(Local_94[1 /*2*/]))
	{
		if (does_entity_exist(Global_88108[1]))
		{
			set_entity_as_mission_entity(Global_88108[1], true, 1);
			Local_94[1 /*2*/] = Global_88108[1];
			_0x18EB48CFC41F2EA0(Global_88108[1], 0f);
			_0x153973AB99FE8980(Local_94[1 /*2*/], "PS_PREP_VEHICLES_GROUP", 0f);
			reset_entity_alpha(Local_94[1 /*2*/]);
		}
	}
	if (!does_entity_exist(Local_94[2 /*2*/]))
	{
		if (does_entity_exist(Global_88108[2]))
		{
			set_entity_as_mission_entity(Global_88108[2], true, 1);
			Local_94[2 /*2*/] = Global_88108[2];
			_0x18EB48CFC41F2EA0(Global_88108[2], 0f);
			_0x153973AB99FE8980(Local_94[2 /*2*/], "PS_PREP_VEHICLES_GROUP", 0f);
			reset_entity_alpha(Local_94[2 /*2*/]);
		}
	}
	if (!does_entity_exist(Local_111[4 /*14*/]))
	{
		if (does_entity_exist(Global_88108.f_9[0]))
		{
			set_entity_as_mission_entity(Global_88108.f_9[0], true, 1);
			Local_111[4 /*14*/] = Global_88108.f_9[0];
			func_205(Local_111[4 /*14*/], 0);
		}
	}
	if (!does_entity_exist(Local_111[0 /*14*/]))
	{
		if (does_entity_exist(Global_88108.f_9[2]))
		{
			set_entity_as_mission_entity(Global_88108.f_9[2], true, 1);
			Local_111[0 /*14*/] = Global_88108.f_9[2];
			func_205(Local_111[0 /*14*/], 0);
		}
	}
	if (!does_entity_exist(Local_111[1 /*14*/]))
	{
		if (does_entity_exist(Global_88108.f_9[3]))
		{
			set_entity_as_mission_entity(Global_88108.f_9[3], true, 1);
			Local_111[1 /*14*/] = Global_88108.f_9[3];
			func_205(Local_111[1 /*14*/], 0);
		}
	}
	if (!does_entity_exist(Local_111[2 /*14*/]))
	{
		if (does_entity_exist(Global_88108.f_9[4]))
		{
			set_entity_as_mission_entity(Global_88108.f_9[4], true, 1);
			Local_111[2 /*14*/] = Global_88108.f_9[4];
			func_205(Local_111[2 /*14*/], 0);
		}
	}
	if (!does_entity_exist(Local_111[3 /*14*/]))
	{
		if (does_entity_exist(Global_88108.f_9[5]))
		{
			set_entity_as_mission_entity(Global_88108.f_9[5], true, 1);
			Local_111[3 /*14*/] = Global_88108.f_9[5];
			func_205(Local_111[3 /*14*/], 0);
		}
	}
	if (!does_entity_exist(Local_111[5 /*14*/]))
	{
		if (does_entity_exist(Global_88108.f_9[6]))
		{
			set_entity_as_mission_entity(Global_88108.f_9[6], true, 1);
			Local_111[5 /*14*/] = Global_88108.f_9[6];
			func_205(Local_111[5 /*14*/], 0);
		}
	}
	if (!does_entity_exist(Local_111[6 /*14*/]))
	{
		if (does_entity_exist(Global_88108.f_9[7]))
		{
			set_entity_as_mission_entity(Global_88108.f_9[7], true, 1);
			Local_111[6 /*14*/] = Global_88108.f_9[7];
			func_205(Local_111[6 /*14*/], 0);
		}
	}
	if (!does_entity_exist(Local_111[7 /*14*/]))
	{
		if (does_entity_exist(Global_88108.f_9[8]))
		{
			set_entity_as_mission_entity(Global_88108.f_9[8], true, 1);
			Local_111[7 /*14*/] = Global_88108.f_9[8];
			func_205(Local_111[7 /*14*/], 0);
		}
	}
	if (!does_entity_exist(Local_111[8 /*14*/]))
	{
		if (does_entity_exist(Global_88108.f_9[9]))
		{
			set_entity_as_mission_entity(Global_88108.f_9[9], true, 1);
			Local_111[8 /*14*/] = Global_88108.f_9[9];
			func_205(Local_111[8 /*14*/], 0);
		}
	}
	if (!does_entity_exist(iLocal_108[0]))
	{
		if (does_entity_exist(Global_88108.f_28[0]))
		{
			set_entity_as_mission_entity(Global_88108.f_28[0], true, 1);
			iLocal_108[0] = Global_88108.f_28[0];
		}
	}
	if (!does_entity_exist(iLocal_108[1]))
	{
		if (does_entity_exist(Global_88108.f_28[1]))
		{
			set_entity_as_mission_entity(Global_88108.f_28[1], true, 1);
			iLocal_108[1] = Global_88108.f_28[1];
		}
	}
	iVar0 = 0;
	while (iVar0 <= 9 - 1)
	{
		if (func_31(Local_111[iVar0 /*14*/]))
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_111[iVar0 /*14*/], iLocal_493);
			reset_entity_alpha(Local_111[iVar0 /*14*/]);
		}
		iVar0++;
	}
	cLocal_475 = {Global_88509};
	StringCopy(&Global_88509, "", 64);
	func_308(229, 0f, 0f, 2000f);
	if (((((((((((((does_entity_exist(Local_94[0 /*2*/]) && does_entity_exist(Local_94[1 /*2*/])) && does_entity_exist(Local_94[2 /*2*/])) && does_entity_exist(Local_111[4 /*14*/])) && does_entity_exist(Local_111[0 /*14*/])) && does_entity_exist(Local_111[1 /*14*/])) && does_entity_exist(Local_111[2 /*14*/])) && does_entity_exist(Local_111[3 /*14*/])) && does_entity_exist(Local_111[5 /*14*/])) && does_entity_exist(Local_111[6 /*14*/])) && does_entity_exist(Local_111[7 /*14*/])) && does_entity_exist(Local_111[8 /*14*/])) && does_entity_exist(iLocal_108[0])) && does_entity_exist(iLocal_108[1]))
	{
		return true;
	}
	return false;
}

void func_308(int iParam0, Vector3 vParam1)
{
	int iVar0;
	
	if (does_blip_exist(Global_25433[iParam0 /*23*/].f_19))
	{
		set_blip_coords(Global_25433[iParam0 /*23*/].f_19, vParam1);
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		Global_25433[iParam0 /*23*/][iVar0 /*3*/] = {vParam1};
		iVar0++;
	}
}

void func_309(Vector3 vParam0, auto uParam1, int iParam2, int iParam3)
{
	if (func_199())
	{
		set_this_script_can_be_paused(0);
		clear_bit(&(Global_91278.f_20), 2);
		set_game_paused(true);
		if (is_player_playing(player_id()))
		{
			set_player_control(player_id(), false, 0);
		}
		Global_91274 = {vParam0};
		Global_91277 = uParam3;
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
		func_198(1);
	}
}

int func_310()
{
	if (!Global_91278 == 10 && !Global_91278 == 9)
	{
		return 0;
	}
	return Global_91278.f_2;
}

void func_311()
{
	func_33(&Local_403, 1, 0);
	iLocal_447 = 0;
	while (iLocal_447 <= 3 - 1)
	{
		if (func_31(Local_101[iLocal_447 /*2*/]))
		{
			if (Local_101[iLocal_447 /*2*/] != player_ped_id())
			{
				set_ped_keep_task(Local_101[iLocal_447 /*2*/], true);
				func_194(&(Local_101[iLocal_447 /*2*/]), 1, 0, 1);
			}
			if (does_blip_exist(Local_101[iLocal_447 /*2*/].f_1))
			{
				remove_blip(&(Local_101[iLocal_447 /*2*/].f_1));
			}
		}
		iLocal_447++;
	}
	iLocal_447 = 0;
	while (iLocal_447 <= 9 - 1)
	{
		if (func_31(Local_111[iLocal_447 /*14*/]))
		{
			func_194(&(Local_111[iLocal_447 /*14*/]), 1, 0, 1);
			if (does_blip_exist(Local_111[iLocal_447 /*14*/].f_1))
			{
				remove_blip(&(Local_111[iLocal_447 /*14*/].f_1));
			}
			func_226(&(Local_111[iLocal_447 /*14*/].f_2));
		}
		iLocal_447++;
	}
	iLocal_447 = 0;
	while (iLocal_447 <= 2 - 1)
	{
		if (does_entity_exist(iLocal_108[iLocal_447]))
		{
			func_314(&(iLocal_108[iLocal_447]), 0);
		}
		iLocal_447++;
	}
	iLocal_447 = 0;
	while (iLocal_447 <= 3 - 1)
	{
		if (func_31(Local_94[iLocal_447 /*2*/]))
		{
			func_182(&(Local_94[iLocal_447 /*2*/]));
		}
		if (does_blip_exist(Local_94[iLocal_447 /*2*/].f_1))
		{
			remove_blip(&(Local_94[iLocal_447 /*2*/].f_1));
		}
		iLocal_447++;
	}
	func_313(0);
	clear_prints();
	set_player_control(player_id(), true, 0);
	func_312();
	if (func_31(player_ped_id()))
	{
		clear_ped_tasks(player_ped_id());
	}
	remove_scenario_blocking_area(iLocal_445, 0);
	set_wanted_level_multiplier(1f);
	set_max_wanted_level(5);
	display_radar(true);
	display_hud(true);
	_0xDC0F817884CDD856(5, true);
	_0xDC0F817884CDD856(3, true);
	_0xDC0F817884CDD856(1, true);
	_0xDC0F817884CDD856(10, true);
	_0xDC0F817884CDD856(9, true);
	_0xD9F692D349249528();
	set_all_vehicle_generators_active_in_area(Vector(33.8865f, 3596.518f, 1383.51f) - Vector(1f, 5f, 5f), Vector(33.8865f, 3596.518f, 1383.51f) + Vector(2f, 5f, 5f), true, 1);
	set_vehicle_model_is_suppressed(joaat("crusader"), false);
	set_vehicle_model_is_suppressed(joaat("barracks"), false);
	iLocal_434 = 0;
	iLocal_456 = false;
	set_police_radar_blips(1);
	func_229(&Local_82, 0, 0);
	set_this_script_can_remove_blips_created_by_any_script(0);
	terminate_this_thread();
}

void func_312()
{
	Global_87466 = 0;
}

void func_313(int iParam0)
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

void func_314(int iParam0, int iParam1)
{
	if (does_entity_exist(*iParam0))
	{
		if (is_entity_attached_to_any_ped(*iParam0))
		{
			detach_entity(*iParam0, 1, true);
		}
		if (!iParam1)
		{
			set_object_as_no_longer_needed(iParam0);
		}
		else
		{
			_mark_object_for_deletion(*iParam0);
		}
	}
}

void func_315()
{
	int iVar0;
	
	if (SCRIPT::HAS_SCRIPT_LOADED("buddyDeathResponse"))
	{
		SYSTEM::START_NEW_SCRIPT("buddyDeathResponse", 1424);
	}
	if (Global_101154.f_7775 || func_7(0))
	{
		if (!func_316())
		{
			iVar0 = func_5();
			if (iVar0 != -1)
			{
				if (!func_187(iVar0))
				{
					return;
				}
				set_bit(&(Global_82363[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_192();
		}
	}
}

bool func_316()
{
	if (((Global_91278 == 13 || Global_91278 == 10) || Global_91278 == 11) || Global_91278 == 12)
	{
		return false;
	}
	return true;
}

