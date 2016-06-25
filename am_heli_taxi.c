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
	auto uLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	var[] uLocal_105 = new var[5];
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	auto uLocal_114 = 0;
	struct<10> Local_115 = 0;
	struct<30> Local_125 = 0;
	auto uLocal_155 = 0;
	auto uLocal_156 = 0;
	int iLocal_157 = 0;
	Vector3[] vLocal_158 = new Vector3[32];
	int iLocal_255 = 0;
	int iLocal_256 = 0;
	int iLocal_257 = 0;
	int iLocal_258 = 0;
	int iLocal_259 = 0;
	int iLocal_260 = 0;
	int iLocal_261 = 0;
	int iLocal_262 = 0;
	int iLocal_263 = 0;
	auto uLocal_264 = 0;
	auto uLocal_265 = 12;
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
	auto uLocal_403 = 0;
	auto uLocal_404 = 0;
	auto uLocal_405 = 0;
	auto uLocal_406 = 0;
	auto uLocal_407 = 0;
	auto uLocal_408 = 0;
	auto uLocal_409 = 0;
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
	auto uLocal_424 = 0;
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
	auto uLocal_439 = 0;
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
	auto uLocal_454 = 0;
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
	auto uLocal_469 = 0;
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
	auto uLocal_484 = 0;
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
	auto uLocal_950 = 1065353216;
	int iLocal_951 = 0;
	int iLocal_952 = 0;
	int iLocal_953 = 0;
	int iLocal_954 = 0;
	int iLocal_955 = 0;
	int iLocal_956 = 0;
	auto uLocal_957 = 16;
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
	int iLocal_1128 = 0;
	int iLocal_1129 = 0;
	int iLocal_1130 = 0;
	auto uLocal_1131 = 0;
	auto uLocal_1132 = 0;
	auto uLocal_1133 = 0;
	auto uLocal_1134 = 0;
	auto uLocal_1135 = 0;
	auto uLocal_1136 = 0;
	auto uLocal_1137 = 0;
	auto uLocal_1138 = 0;
	int iLocal_1139 = 0;
	auto uLocal_1140 = 0;
	auto uLocal_1141 = 0;
	auto uLocal_1142 = 0;
	auto uLocal_1143 = 0;
	auto uLocal_1144 = 0;
	auto uLocal_1145 = 0;
	auto uLocal_1146 = 0;
	auto uLocal_1147 = 0;
	int iLocal_1148 = 0;
	int iLocal_1149 = 0;
	int iLocal_1150 = 0;
	int iLocal_1151 = 0;
	int iLocal_1152 = 0;
	int iLocal_1153 = 0;
	int iLocal_1154 = 0;
	Vector3 vLocal_1155 = 0;
	Vector3[] vLocal_1158 = new Vector3[1];
	var[] uLocal_1162 = new var[1];
	var[] uLocal_1164 = new var[1];
	int iLocal_1166 = 0;
	int iLocal_1167 = 0;
	int iLocal_1168 = 0;
	struct<20> Local_1169 = 0;
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
	iLocal_257 = 6;
	iLocal_1139 = 10000;
	func_405();
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_401(Local_1169))
		{
			if (network_is_host_of_this_script())
			{
				Local_125.f_24 = 8;
			}
			func_395(1);
		}
	}
	while (true)
	{
		func_394();
		if (func_384())
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (network_is_host_of_this_script())
				{
					Local_125.f_24 = 8;
				}
			}
			func_395(1);
		}
		if (network_is_in_tutorial_session() != iLocal_951 && !network_is_host_of_this_script())
		{
			if (network_is_host_of_this_script())
			{
				Local_125.f_24 = 8;
			}
			func_395(1);
		}
		if (network_get_player_index(network_get_host_of_this_script()) != Local_125.f_5)
		{
			if (network_is_host_of_this_script())
			{
				Local_125.f_24 = 8;
			}
			func_395(1);
		}
		_0x2302C0264EA58D31();
		switch (func_383(participant_id_to_int()))
		{
			case 0:
				if (func_382() == 1)
				{
					func_381();
					func_380();
					vLocal_158[participant_id_to_int() /*3*/] = 1;
				}
				else if (func_382() == 5)
				{
					vLocal_158[participant_id_to_int() /*3*/] = 3;
				}
				break;
			
			case 1:
				func_364();
				if (func_382() == 1)
				{
					func_254();
				}
				else if (func_382() == 5)
				{
					vLocal_158[participant_id_to_int() /*3*/] = 3;
				}
				break;
			
			case 3:
				func_253(&(Local_125.f_25));
				if (func_252(&(Local_125.f_25)))
				{
					vLocal_158[participant_id_to_int() /*3*/] = 5;
				}
				break;
			
			case 2:
				vLocal_158[participant_id_to_int() /*3*/] = 5;
			
			case 5:
				func_395(1);
				break;
		}
		func_251();
		if (func_250())
		{
			func_243();
		}
		if (network_is_host_of_this_script())
		{
			switch (func_382())
			{
				case 0:
					if (func_220())
					{
						func_381();
						Local_125 = 1;
					}
					break;
				
				case 1:
					func_200();
					func_194();
					func_144();
					if (func_136())
					{
						Local_125 = 5;
					}
					break;
				
				case 4:
					func_1();
					break;
				
				case 5:
					break;
				}
		}
	}
}

void func_1()
{
	func_130();
	if (func_129(player_id(), 1, 1))
	{
		if (GAMEPLAY::IS_BIT_SET(iLocal_255, 6) && !GAMEPLAY::IS_BIT_SET(iLocal_255, 7))
		{
			if (!func_128(0))
			{
				if (!func_250())
				{
					func_126(13);
					func_110(func_123(13), 6, 2, 1);
				}
				else
				{
					func_126(44);
					func_110(func_123(44), 6, 2, 1);
				}
				GAMEPLAY::SET_BIT(&iLocal_255, 7);
				Local_125 = 5;
			}
		}
		if (GAMEPLAY::IS_BIT_SET(iLocal_255, 5) && !GAMEPLAY::IS_BIT_SET(iLocal_255, 6))
		{
			if (func_128(0))
			{
				GAMEPLAY::SET_BIT(&iLocal_255, 6);
			}
		}
		if (!GAMEPLAY::IS_BIT_SET(iLocal_255, 5))
		{
			if (func_108(&uLocal_1124, 5000, 0))
			{
				if (!func_250())
				{
					func_107(&uLocal_957, 3, 0, "FM_MERRYWEATHER", 0, 1);
					if (func_11(&uLocal_957, 85, "CT_AUD", "MPCT_9", 0, 0))
					{
						GAMEPLAY::SET_BIT(&iLocal_255, 5);
					}
				}
				else
				{
					func_10(1);
					if (func_3(1))
					{
						func_107(&uLocal_957, 3, 0, "EXECPA_MALE", 0, 1);
						if (func_11(&uLocal_957, func_2(1), "EXCALAU", "EXCAL_HPROBM", 0, 0))
						{
							GAMEPLAY::SET_BIT(&iLocal_255, 5);
						}
					}
					else
					{
						func_107(&uLocal_957, 2, 0, "EXECPA_FEMALE", 0, 1);
						if (func_11(&uLocal_957, func_2(1), "EXCALAU", "EXCAL_HPROBF", 0, 0))
						{
							GAMEPLAY::SET_BIT(&iLocal_255, 5);
						}
					}
				}
			}
		}
	}
}

int func_2(int iParam0)
{
	if (func_3(iParam0))
	{
		return 75;
	}
	return 74;
}

int func_3(int iParam0)
{
	int iVar0;
	
	if (iParam0)
	{
		iVar0 = func_9(player_id());
		if (((iVar0 != player_id() && iVar0 != func_8()) && network_is_player_active(iVar0)) && iVar0 != -1)
		{
			if (func_7(iVar0))
			{
				return true;
			}
			return false;
		}
	}
	return func_4(3200, -1, 0) != 0;
}

int func_4(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	auto uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2469339[iParam0 /*5*/][func_5(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_5(auto uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_6();
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

auto func_6()
{
	return Global_1312747;
}

int func_7(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1587523[iParam0 /*444*/].f_250.f_7, 29);
}

int func_8()
{
	return -1;
}

int func_9(int iParam0)
{
	if (iParam0 != func_8())
	{
		return Global_1610316[iParam0 /*174*/].f_10;
	}
	return func_8();
}

void func_10(int iParam0)
{
	if (iParam0)
	{
		Global_1572930 = 1;
	}
	else
	{
		Global_1572930 = 0;
	}
}

int func_11(auto uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5)
{
	char* sVar0;
	int iVar1;
	int iVar2;
	
	if (func_105())
	{
		return 0;
	}
	if (func_104())
	{
		return 0;
	}
	sVar0 = 0;
	iVar1 = false;
	iVar2 = -99;
	return func_12(uParam0, iParam1, sParam2, sParam3, 1, iParam5, iParam4, sVar0, iVar1, iVar2, sVar0, sVar0, -1);
}

int func_12(auto uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, char* sParam10, char* sParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (is_string_null_or_empty(sParam2))
	{
		return 0;
	}
	if (_0x43E4111189E54F0E(sParam2) > 7)
	{
		return 0;
	}
	if (is_string_null_or_empty(sParam3))
	{
		return 0;
	}
	if (_0x43E4111189E54F0E(sParam3) > 15)
	{
		return 0;
	}
	iVar0 = GAMEPLAY::GET_HASH_KEY(get_this_script_name());
	iVar1 = func_103(sParam2, sParam3);
	iVar2 = 0;
	if (!is_string_null_or_empty(sParam7))
	{
		iVar2 = GAMEPLAY::GET_HASH_KEY(sParam7);
	}
	if (func_102(iVar0, iVar1, iVar2))
	{
		return 1;
	}
	if (!func_97(iParam6))
	{
		return 0;
	}
	if (func_94(iVar0, iVar1, iVar2))
	{
		if (func_93())
		{
			return 0;
		}
		func_92();
		return func_19(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, iParam6, sParam7, iParam8, iParam9, sParam10, sParam11);
	}
	if (!func_18(iParam4))
	{
		return 0;
	}
	func_13(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, iParam6);
	return 0;
}

void func_13(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	Global_1332285.f_40.f_1 = iParam0;
	Global_1332285.f_40.f_2 = iParam1;
	Global_1332285.f_40.f_3 = iParam2;
	StringCopy(&(Global_1332285.f_40.f_4), sParam3, 16);
	Global_1332285.f_40.f_8 = iParam4;
	Global_1332285.f_40.f_9 = iParam5;
	Global_1332285.f_40.f_14 = iParam6;
	func_14(iParam4);
	func_92();
	Global_1332285.f_40.f_13 = get_time_offset(NETWORK::GET_NETWORK_TIME(), 7000);
}

void func_14(int iParam0)
{
	if (func_17(iParam0))
	{
		func_16();
		return;
	}
	func_15();
}

void func_15()
{
	Global_1332285.f_40.f_10 = 0;
}

void func_16()
{
	Global_1332285.f_40.f_10 = 1;
}

bool func_17(int iParam0)
{
	switch (iParam0)
	{
		case 4:
		case 5:
			return true;
		
		case 0:
		case 1:
		case 7:
		case 8:
		case 2:
		case 3:
			return false;
		
		default:
	}
	return false;
}

int func_18(int iParam0)
{
	return iParam0 > Global_1332285.f_40.f_8;
}

int func_19(auto uParam0, int iParam1, auto uParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, char* sParam12)
{
	struct<4> Var0;
	
	func_91();
	if (iParam6 == 5)
	{
		iParam6 = 0;
	}
	if (iParam5 == 8)
	{
		return func_88(uParam0, sParam3, sParam4);
	}
	if (iParam5 == 4)
	{
		StringCopy(&Var0, "CELL_226", 16);
		return func_85(uParam0, iParam1, sParam3, sParam4, &Var0);
	}
	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
		{
			return func_88(uParam0, sParam3, sParam4);
		}
		return func_68(uParam0, iParam1, sParam3, sParam4, iParam7);
	}
	if (iParam5 == 5)
	{
		return func_67(iParam1, uParam2, sParam4, iParam7, sParam8, iParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 2)
	{
		return func_57(iParam1, uParam2, sParam4, iParam7, sParam8, iParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 3)
	{
		return func_56(iParam1, uParam2, sParam4, iParam7, sParam8, iParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 6)
	{
		return func_20(iParam1, uParam2, sParam4, iParam7, sParam8, iParam9, iParam10, sParam11, sParam12);
	}
	return 0;
}

bool func_20(int iParam0, auto uParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6, char* sParam7, char* sParam8)
{
	int iVar0;
	
	func_55();
	iVar0 = true;
	if (func_22(iParam0, uParam1, sParam2, iVar0, iParam3, sParam4, iParam5, iParam6, sParam7, sParam8))
	{
		func_21(120000);
		return true;
	}
	return false;
}

void func_21(int iParam0)
{
	Global_1332285.f_40.f_11 = get_time_offset(NETWORK::GET_NETWORK_TIME(), iParam0);
	Global_1332285.f_40.f_12 = 1;
}

bool func_22(int iParam0, auto uParam1, char* sParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	auto uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	
	iVar0 = func_8();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = uParam1;
		sVar2 = get_player_name(iVar0);
		iVar1 = func_49(iVar0);
		if (iVar1 == 0)
		{
			if (is_time_less_than(NETWORK::GET_NETWORK_TIME(), Global_1332285.f_40.f_13))
			{
				return false;
			}
		}
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_48(sParam5, iParam6, &iVar3);
	uVar5 = func_46(iParam7, &iVar3);
	iVar6 = 0;
	if (!is_string_null_or_empty(sParam8))
	{
		iVar6++;
		if (!is_string_null_or_empty(sParam9))
		{
			iVar6++;
		}
	}
	if (are_strings_equal(sVar4, " "))
	{
		sVar4 = "";
	}
	iVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (iParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (GAMEPLAY::IS_BIT_SET(iParam4, true))
		{
			iVar8 = 1;
		}
	}
	if (GAMEPLAY::IS_BIT_SET(iParam4, 2))
	{
		iVar10 = 2;
	}
	iVar12 = false;
	if (!iVar3 == 0 || !is_string_null_or_empty(sVar2))
	{
		iVar12 = func_45(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, iVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		iVar12 = func_26(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, iVar7, iVar8, 0);
	}
	if (!iVar12)
	{
		return false;
	}
	if (GAMEPLAY::IS_BIT_SET(iParam4, false))
	{
		func_25();
	}
	func_55();
	func_24();
	func_23();
	return true;
}

void func_23()
{
	Global_1332285.f_57 = 0;
	Global_1332285.f_57.f_1 = 0;
}

void func_24()
{
	Global_1332285.f_40 = 3;
}

void func_25()
{
	GAMEPLAY::SET_BIT(&Global_2283, 8);
}

bool func_26(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_27(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, iParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (iParam7 == 1)
		{
			Global_2990 = iParam6;
			GAMEPLAY::SET_BIT(&Global_2563397, false);
		}
		return true;
	}
	return false;
}

bool func_27(auto uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, auto uParam8, auto uParam9, int iParam10, auto uParam11, auto uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (are_strings_equal(sParam14, sParam15))
	{
	}
	func_39();
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
			if (is_ped_swimming_under_water(PLAYER::PLAYER_PED_ID()))
			{
				return false;
			}
		}
		if (Global_2563382 == 1)
		{
			return false;
		}
		if (_get_number_of_instances_of_streamed_script(joaat("appemail")) > 0)
		{
			return false;
		}
		if (_get_number_of_instances_of_streamed_script(joaat("appmpemail")) > 0)
		{
			return false;
		}
	}
	if (func_38() == 0)
	{
		func_36();
		return false;
	}
	func_35(Global_2563381);
	StringCopy(&(Global_2562132[Global_2563381 /*104*/]), sParam1, 64);
	Global_2562132[Global_2563381 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_2562132[Global_2563381 /*104*/].f_24 = iParam2;
	}
	Global_2562132[Global_2563381 /*104*/].f_25 = iParam7;
	Global_2562132[Global_2563381 /*104*/].f_26 = uParam8;
	Global_2562132[Global_2563381 /*104*/].f_29 = uParam9;
	Global_2562132[Global_2563381 /*104*/].f_30 = uParam12;
	Global_2562132[Global_2563381 /*104*/].f_31 = uParam11;
	Global_2562132[Global_2563381 /*104*/].f_28 = 0;
	Global_2562132[Global_2563381 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_2562132[Global_2563381 /*104*/].f_33), sParam4, 64);
	Global_2562132[Global_2563381 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_2562132[Global_2563381 /*104*/].f_50), sParam5, 64);
	Global_2562132[Global_2563381 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_2562132[Global_2563381 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_2562132[Global_2563381 /*104*/].f_83), sParam15, 64);
	func_39();
	switch (iParam16)
	{
		case 3:
			Global_2562132[Global_2563381 /*104*/].f_99[Global_14413] = 1;
			break;
		
		case 0:
			Global_2562132[Global_2563381 /*104*/].f_99[0] = 1;
			break;
		
		case 2:
			Global_2562132[Global_2563381 /*104*/].f_99[2] = 1;
			break;
		
		case 1:
			Global_2562132[Global_2563381 /*104*/].f_99[1] = 1;
			break;
	}
	if (iParam16 == 3)
	{
		switch (Global_14413)
		{
			case 0:
				func_34(0);
				break;
			
			case 1:
				func_34(1);
				break;
			
			case 2:
				func_34(2);
				break;
			
			case 3:
				func_34(3);
				break;
			
			default:
				break;
			}
	}
	if (iParam7 == 1)
	{
		switch (iParam16)
		{
			case 3:
				Global_2563382 = 1;
				break;
			
			case 0:
				Global_2563382 = 1;
				break;
			
			case 2:
				Global_2563382 = 1;
				break;
			
			case 1:
				Global_2563382 = 1;
				break;
			}
	}
	Global_16781[Global_2563381] = 0;
	if (iParam10)
	{
		func_39();
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
			if (!func_33())
			{
				play_sound_frontend(-1, "Text_Arrive_Tone", &Global_14402, 1);
			}
		}
	}
	if (!Global_14572)
	{
		if (Global_14413.f_1 == 6)
		{
			func_32(Global_14394, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_28(1);
			func_32(Global_14394, "DISPLAY_VIEW", 1f, to_float(Global_14393), -1082130432, -1082130432, -1082130432);
		}
	}
	return true;
}

void func_28(int iParam0)
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
		if (func_31(14))
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
								if (GAMEPLAY::IS_BIT_SET(Global_2284, 3))
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
								func_30(&(Global_2290[iVar1 /*15*/]));
								_push_scaleform_movie_function_parameter_int(iVar2);
								_pop_scaleform_movie_function_void();
							}
							if (Global_2443081)
							{
								if (iVar1 == 14)
								{
									func_29(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(Global_16775), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_29(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(Global_16780), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_69489)
								{
									iVar4 = false;
									iVar4 = Global_2562131;
									func_29(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(iVar4), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_29(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(iVar5), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_29(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(Global_16775), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								_push_scaleform_movie_function(Global_14394, "SET_DATA_SLOT");
								_push_scaleform_movie_function_parameter_int(true);
								_push_scaleform_movie_function_parameter_int(iVar0);
								_push_scaleform_movie_function_parameter_int(Global_2290[iVar1 /*15*/].f_10);
								_push_scaleform_movie_function_parameter_int(false);
								func_30(&(Global_2290[iVar1 /*15*/]));
								_push_scaleform_movie_function_parameter_int(Global_2289);
								_pop_scaleform_movie_function_void();
							}
							else if (iVar1 == 2)
							{
								if (GAMEPLAY::IS_BIT_SET(Global_2284, 6))
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
								func_30(&(Global_2290[iVar1 /*15*/]));
								_push_scaleform_movie_function_parameter_int(iVar6);
								_pop_scaleform_movie_function_void();
							}
							else if (iVar1 == 3)
							{
								if (GAMEPLAY::IS_BIT_SET(Global_2284, 3))
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
								func_30(&(Global_2290[iVar1 /*15*/]));
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
								func_30(&(Global_2290[iVar1 /*15*/]));
								_push_scaleform_movie_function_parameter_int(42);
								_pop_scaleform_movie_function_void();
							}
							else if ((iVar1 == 23 && are_strings_equal(&(Global_2290[iVar1 /*15*/]), "CELL_BENWEB")) && GAMEPLAY::IS_BIT_SET(Global_2284, 6))
							{
								_push_scaleform_movie_function(Global_14394, "SET_DATA_SLOT");
								_push_scaleform_movie_function_parameter_int(true);
								_push_scaleform_movie_function_parameter_int(iVar0);
								_push_scaleform_movie_function_parameter_int(Global_2290[iVar1 /*15*/].f_10);
								_push_scaleform_movie_function_parameter_int(false);
								func_30(&(Global_2290[iVar1 /*15*/]));
								_push_scaleform_movie_function_parameter_int(42);
								_pop_scaleform_movie_function_void();
							}
							else if (Global_2290[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar8 = false;
								iVar8 = Global_1609099.f_1;
								func_29(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(iVar8), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_29(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(false), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
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

void func_29(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_30(sParam7);
	}
	if (!is_string_null_or_empty(sParam8))
	{
		func_30(sParam8);
	}
	if (!is_string_null_or_empty(sParam9))
	{
		func_30(sParam9);
	}
	if (!is_string_null_or_empty(sParam10))
	{
		func_30(sParam10);
	}
	if (!is_string_null_or_empty(sParam11))
	{
		func_30(sParam11);
	}
	_pop_scaleform_movie_function_void();
}

void func_30(char* sParam0)
{
	_begin_text_component(sParam0);
	_end_text_component();
}

int func_31(int iParam0)
{
	return Global_35711 == iParam0;
}

void func_32(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

auto func_33()
{
	return Global_1315913;
}

void func_34(int iParam0)
{
	auto uVar0;
	auto uVar1;
	
	uVar0 = Global_101154.f_12741[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_35(auto uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	auto uVar4;
	int iVar5;
	
	iVar0 = get_clock_seconds();
	iVar1 = get_clock_minutes();
	iVar2 = TIME::GET_CLOCK_HOURS();
	iVar3 = get_clock_day_of_month();
	uVar4 = get_clock_month() + 1;
	iVar5 = get_clock_year();
	Global_2562132[uParam0 /*104*/].f_18 = iVar0;
	Global_2562132[uParam0 /*104*/].f_18.f_1 = iVar1;
	Global_2562132[uParam0 /*104*/].f_18.f_2 = iVar2;
	Global_2562132[uParam0 /*104*/].f_18.f_3 = iVar3;
	Global_2562132[uParam0 /*104*/].f_18.f_4 = uVar4;
	Global_2562132[uParam0 /*104*/].f_18.f_5 = iVar5;
}

void func_36()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	Global_2563381 = 11;
	Global_2562132[Global_2563381 /*104*/].f_18 = -1;
	Global_2562132[Global_2563381 /*104*/].f_18.f_1 = 0;
	Global_2562132[Global_2563381 /*104*/].f_18.f_2 = 0;
	Global_2562132[Global_2563381 /*104*/].f_18.f_3 = 0;
	Global_2562132[Global_2563381 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_37(Global_2562132[iVar2 /*104*/].f_18, Global_2562132[Global_2563381 /*104*/].f_18))
		{
			Global_2563381 = iVar2;
		}
		iVar2++;
	}
	Global_2562132[Global_2563381 /*104*/].f_24 = 1;
}

bool func_37(struct<6> Param0, struct<6> Param1)
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

bool func_38()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_2562132[iVar2 /*104*/].f_24 == 0)
		{
			Global_2563381 = iVar2;
			return true;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_2563381 = 11;
	Global_2562132[Global_2563381 /*104*/].f_18 = -1;
	Global_2562132[Global_2563381 /*104*/].f_18.f_1 = 0;
	Global_2562132[Global_2563381 /*104*/].f_18.f_2 = 0;
	Global_2562132[Global_2563381 /*104*/].f_18.f_3 = 0;
	Global_2562132[Global_2563381 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_2562132[iVar2 /*104*/].f_24 == 0 || Global_2562132[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_37(Global_2562132[iVar2 /*104*/].f_18, Global_2562132[Global_2563381 /*104*/].f_18))
			{
				Global_2563381 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_2563381 == 11)
	{
		return false;
	}
	Global_2562132[Global_2563381 /*104*/].f_99[0] = 0;
	Global_2562132[Global_2563381 /*104*/].f_99[1] = 0;
	Global_2562132[Global_2563381 /*104*/].f_99[2] = 0;
	return true;
}

void func_39()
{
	if (func_31(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_101154.f_32575[0 /*29*/])
			{
				Global_14413 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_101154.f_32575[1 /*29*/])
			{
				Global_14413 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_101154.f_32575[2 /*29*/])
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
		Global_14413 = func_40();
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

auto func_40()
{
	func_41();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_41()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_44(Global_101154.f_1826.f_539.f_3549) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_43(PLAYER::PLAYER_PED_ID());
			if (func_42(iVar0) && (!func_31(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_42(Global_101154.f_1826.f_539.f_3549))
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

int func_42(int iParam0)
{
	return iParam0 < 3;
}

int func_43(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_44(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_44(int iParam0)
{
	if (func_42(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_45(int iParam0, char* sParam1, int iParam2, char* sParam3, auto uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	iVar0 = 3;
	if (func_27(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, iParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (iParam11 == 1)
		{
			Global_2990 = iParam10;
			GAMEPLAY::SET_BIT(&Global_2563397, false);
		}
		return true;
	}
	return false;
}

int func_46(int iParam0, int iParam1)
{
	if (iParam0 == -99)
	{
		return -99;
	}
	func_47(2, iParam1);
	return iParam0;
}

void func_47(int iParam0, auto uParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return;
	}
	iVar0 = false;
	iVar1 = false;
	switch (iParam0)
	{
		case 1:
			iVar0 = true;
			break;
		
		case 2:
			iVar1 = true;
			break;
		
		default:
			return;
	}
	if (iVar0)
	{
		switch (*uParam1)
		{
			case 1:
			case 3:
				break;
			
			case 0:
				*uParam1 = 1;
				break;
			
			case 2:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
	if (iVar1)
	{
		switch (*uParam1)
		{
			case 2:
			case 3:
				break;
			
			case 0:
				*uParam1 = 2;
				break;
			
			case 1:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
}

char* func_48(char* sParam0, int iParam1, int iParam2)
{
	if (is_string_null_or_empty(sParam0))
	{
		return sLocal_18;
	}
	if (are_strings_equal(sParam0, sLocal_18))
	{
		return sLocal_18;
	}
	func_47(1, iParam2);
	if (iParam1)
	{
		return sParam0;
	}
	return _get_label_text(sParam0);
}

int func_49(int iParam0)
{
	int iVar0;
	
	iVar0 = func_52(iParam0);
	if (iVar0 == -1)
	{
		func_50(iParam0, 1);
		return 0;
	}
	Global_1348553[iVar0 /*5*/].f_4 = 1;
	return Global_1348553[iVar0 /*5*/].f_2;
}

void func_50(int iParam0, int iParam1)
{
	if (!func_129(iParam0, 0, 1))
	{
		return;
	}
	if (func_52(iParam0) != -1)
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
	if (func_51(iParam0))
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

bool func_51(int iParam0)
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

int func_52(int iParam0)
{
	int iVar0;
	
	if (!func_129(iParam0, 0, 1))
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
			func_53(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_53(int iParam0)
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
	func_54(&(Global_1348553[iVar32 /*5*/]));
	Global_1348714--;
}

void func_54(auto uParam0)
{
	*uParam0 = 0;
	*uParam0.f_1 = func_8();
	*uParam0.f_2 = 0;
	*uParam0.f_4 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		*uParam0.f_3 = NETWORK::GET_NETWORK_TIME();
	}
}

void func_55()
{
	Global_1332285.f_40.f_9 = 4;
}

int func_56(int iParam0, auto uParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6, char* sParam7, char* sParam8)
{
	int iVar0;
	
	func_55();
	iVar0 = false;
	return func_22(iParam0, uParam1, sParam2, iVar0, iParam3, sParam4, iParam5, iParam6, sParam7, sParam8);
}

int func_57(int iParam0, auto uParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6, char* sParam7, char* sParam8)
{
	int iVar0;
	
	iVar0 = false;
	return func_58(iParam0, uParam1, sParam2, iVar0, iParam3, sParam4, iParam5, iParam6, sParam7, sParam8);
}

bool func_58(int iParam0, auto uParam1, char* sParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	auto uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	
	iVar0 = func_8();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = uParam1;
		sVar2 = get_player_name(iVar0);
		iVar1 = func_49(iVar0);
		if (iVar1 == 0)
		{
			if (is_time_less_than(NETWORK::GET_NETWORK_TIME(), Global_1332285.f_40.f_13))
			{
				return false;
			}
		}
		Global_16773 = iVar1;
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_48(sParam5, iParam6, &iVar3);
	uVar5 = func_46(iParam7, &iVar3);
	iVar6 = 0;
	if (!is_string_null_or_empty(sParam8))
	{
		iVar6++;
		if (!is_string_null_or_empty(sParam9))
		{
			iVar6++;
		}
	}
	if (are_strings_equal(sVar4, " "))
	{
		sVar4 = "";
	}
	iVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (iParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (GAMEPLAY::IS_BIT_SET(iParam4, true))
		{
			iVar8 = 1;
		}
	}
	if (GAMEPLAY::IS_BIT_SET(iParam4, 2))
	{
		iVar10 = 2;
	}
	iVar12 = false;
	if (!iVar3 == 0 || !is_string_null_or_empty(sVar2))
	{
		iVar12 = func_66(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, iVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		iVar12 = func_60(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, iVar7, iVar8, 0);
	}
	if (!iVar12)
	{
		return false;
	}
	if (GAMEPLAY::IS_BIT_SET(iParam4, false))
	{
		func_25();
	}
	func_59();
	func_24();
	func_23();
	return true;
}

void func_59()
{
	Global_1332285.f_40.f_9 = 3;
}

bool func_60(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	GAMEPLAY::CLEAR_BIT(&Global_2283, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_61(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, iParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (iParam7 == 1)
		{
			Global_2990 = iParam6;
			Global_2893[3 /*6*/] = {Global_101154.f_32575[iParam0 /*29*/].f_3};
			Global_2970 = iParam0;
			GAMEPLAY::SET_BIT(&Global_2283, true);
			GAMEPLAY::SET_BIT(&Global_2283, 7);
		}
		return true;
	}
	return false;
}

bool func_61(auto uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, auto uParam8, auto uParam9, int iParam10, auto uParam11, auto uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (are_strings_equal(sParam14, sParam15))
	{
	}
	func_39();
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
			if (is_ped_swimming_under_water(PLAYER::PLAYER_PED_ID()))
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
	if (func_65() == 0)
	{
		func_63();
		return false;
	}
	func_62(Global_16779);
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
	if (GAMEPLAY::IS_BIT_SET(Global_2283, 10))
	{
		Global_101154.f_12831[Global_16779 /*104*/].f_99[0] = 1;
		Global_101154.f_12831[Global_16779 /*104*/].f_99[1] = 1;
		Global_101154.f_12831[Global_16779 /*104*/].f_99[2] = 1;
		Global_2989 = 4;
		func_34(0);
		func_34(2);
		func_34(1);
	}
	else
	{
		func_39();
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
					func_34(0);
					Global_2989 = 0;
					break;
				
				case 1:
					func_34(1);
					Global_2989 = 1;
					break;
				
				case 2:
					func_34(2);
					Global_2989 = 2;
					break;
				
				case 3:
					func_34(3);
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
		if (GAMEPLAY::IS_BIT_SET(Global_2283, 10))
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
		func_39();
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
			if (!func_33())
			{
				play_sound_frontend(-1, "Text_Arrive_Tone", &Global_14402, 1);
			}
		}
	}
	if (!Global_14572)
	{
		if (Global_14413.f_1 == 6)
		{
			func_32(Global_14394, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_28(1);
			func_32(Global_14394, "DISPLAY_VIEW", 1f, to_float(Global_14393), -1082130432, -1082130432, -1082130432);
		}
	}
	return true;
}

void func_62(auto uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	auto uVar4;
	int iVar5;
	
	iVar0 = get_clock_seconds();
	iVar1 = get_clock_minutes();
	iVar2 = TIME::GET_CLOCK_HOURS();
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

void func_63()
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
		if (!func_64(Global_101154.f_12831[iVar2 /*104*/].f_18, Global_101154.f_12831[Global_16779 /*104*/].f_18))
		{
			Global_16779 = iVar2;
		}
		iVar2++;
	}
	Global_101154.f_12831[Global_16779 /*104*/].f_24 = 1;
}

bool func_64(struct<6> Param0, struct<6> Param1)
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

bool func_65()
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
			if (!func_64(Global_101154.f_12831[iVar2 /*104*/].f_18, Global_101154.f_12831[Global_16779 /*104*/].f_18))
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

bool func_66(int iParam0, char* sParam1, int iParam2, char* sParam3, auto uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	GAMEPLAY::CLEAR_BIT(&Global_2283, 10);
	iVar0 = 3;
	if (func_61(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, iParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (iParam11 == 1)
		{
			Global_2990 = iParam10;
			Global_2893[3 /*6*/] = {Global_101154.f_32575[iParam0 /*29*/].f_3};
			Global_2970 = iParam0;
			StringCopy(&Global_2971, sParam5, 64);
			GAMEPLAY::SET_BIT(&Global_2283, true);
			GAMEPLAY::SET_BIT(&Global_2283, 7);
		}
		return true;
	}
	return false;
}

bool func_67(int iParam0, auto uParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6, char* sParam7, char* sParam8)
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
	}
	if (is_ped_sprinting(PLAYER::PLAYER_PED_ID()))
	{
		return false;
	}
	func_59();
	iVar0 = true;
	if (func_58(iParam0, uParam1, sParam2, iVar0, iParam3, sParam4, iParam5, iParam6, sParam7, sParam8))
	{
		func_21(120000);
		return true;
	}
	return false;
}

bool func_68(auto uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (is_ped_sprinting(PLAYER::PLAYER_PED_ID()))
		{
			return false;
		}
	}
	iVar0 = false;
	iVar1 = 12;
	if (GAMEPLAY::IS_BIT_SET(iParam4, 7))
	{
		iVar1 = 9;
	}
	if (GAMEPLAY::IS_BIT_SET(iParam4, 4))
	{
		iVar0 = func_84(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	else
	{
		iVar0 = func_74(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	if (iVar0)
	{
		if (GAMEPLAY::IS_BIT_SET(iParam4, 3))
		{
			func_73(1);
		}
		if (GAMEPLAY::IS_BIT_SET(iParam4, 5))
		{
			func_72(1);
		}
		func_71();
		func_24();
		func_70();
		func_69();
		return true;
	}
	return false;
}

void func_69()
{
	Global_2467484 = 0;
}

void func_70()
{
	Global_1332285.f_57 = 1;
	Global_1332285.f_57.f_1 = 0;
}

void func_71()
{
	Global_1332285.f_40.f_9 = 1;
}

void func_72(int iParam0)
{
	if (iParam0 == 1)
	{
		GAMEPLAY::SET_BIT(&Global_2285, false);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&Global_2285, false);
	}
}

void func_73(int iParam0)
{
	if (iParam0 == 1)
	{
		GAMEPLAY::SET_BIT(&Global_2283, 20);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&Global_2283, 20);
	}
}

int func_74(auto uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	func_83(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
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
	return func_75(sParam3, iParam4, iParam7);
}

bool func_75(char* sParam0, int iParam1, int iParam2)
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
					func_82();
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
		if (func_81(8, -1))
		{
			return false;
		}
		Global_15788 = {Global_15782};
		func_80();
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
			GAMEPLAY::CLEAR_BIT(&Global_2283, 20);
			GAMEPLAY::CLEAR_BIT(&Global_2284, 17);
			GAMEPLAY::CLEAR_BIT(&Global_2285, false);
			if (iParam2)
			{
				func_39();
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
				if (is_ped_in_melee_combat(PLAYER::PLAYER_PED_ID()))
				{
					return false;
				}
				if (func_79())
				{
					return false;
				}
				if (is_ped_sprinting(PLAYER::PLAYER_PED_ID()))
				{
					return false;
				}
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
				{
					return false;
				}
				if (is_ped_in_parachute_free_fall(PLAYER::PLAYER_PED_ID()))
				{
					return false;
				}
				if (get_is_ped_gadget_equipped(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute")))
				{
					return false;
				}
				if (!Global_69489)
				{
					if (is_entity_in_water(PLAYER::PLAYER_PED_ID()))
					{
						return false;
					}
					if (is_player_climbing(player_id()))
					{
						return false;
					}
					if (is_ped_planting_bomb(PLAYER::PLAYER_PED_ID()))
					{
						return false;
					}
					if (is_special_ability_active(player_id()))
					{
						return false;
					}
				}
			}
			if (func_78())
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
				if (GAMEPLAY::IS_BIT_SET(Global_2283, 9))
				{
					return false;
				}
			}
			func_77();
			Global_15722 = iParam2;
		}
		Global_15714 = iParam1;
		StringCopy(&Global_15331, sParam0, 24);
		Global_14578 = 0;
		func_76();
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
		func_82();
	}
	return false;
}

void func_76()
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

void func_77()
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
	GAMEPLAY::CLEAR_BIT(&Global_2284, 16);
}

bool func_78()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return true;
	}
	return false;
}

bool func_79()
{
	int iVar0;
	int iVar1;
	
	if (Global_69489)
	{
		iVar0 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, 1);
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
		if (get_ped_config_flag(PLAYER::PLAYER_PED_ID(), 78, 1))
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

void func_80()
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

int func_81(int iParam0, int iParam1)
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

void func_82()
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

void func_83(auto uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_84(auto uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	func_83(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_15760 = 1;
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
	return func_75(sParam3, iParam4, iParam7);
}

bool func_85(auto uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
	}
	if (is_ped_sprinting(PLAYER::PLAYER_PED_ID()))
	{
		return false;
	}
	if (func_87(uParam0, iParam1, sParam2, sParam3, 9, sParam4, 0, 0, 1))
	{
		func_86();
		func_71();
		func_24();
		func_70();
		func_69();
		return true;
	}
	return false;
}

void func_86()
{
	Global_16730 = 0;
}

int func_87(auto uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8)
{
	func_83(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_15760 = 0;
	Global_15719 = 1;
	Global_15726 = 0;
	Global_15721 = 1;
	Global_16703 = 0;
	Global_16705 = 0;
	Global_16709 = 0;
	Global_15717 = 0;
	Global_15764 = 1;
	Global_15766 = 0;
	StringCopy(&Global_15860, sParam5, 24);
	Global_2621441 = 0;
	return func_75(sParam3, iParam4, iParam8);
}

bool func_88(auto uParam0, char* sParam1, char* sParam2)
{
	if (func_90(uParam0, sParam1, sParam2, 12, 0, 0, 0))
	{
		func_89();
		func_24();
		func_70();
		return true;
	}
	return false;
}

void func_89()
{
	Global_1332285.f_40.f_9 = 2;
}

int func_90(auto uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_83(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_75(sParam2, iParam3, 0);
}

void func_91()
{
	Global_1332285.f_55 = Global_1332285.f_40.f_1;
	Global_1332285.f_55.f_1 = Global_1332285.f_40.f_10;
}

void func_92()
{
	Global_1332285.f_40 = 1;
}

int func_93()
{
	return Global_1332285.f_40 == 1;
}

bool func_94(int iParam0, int iParam1, int iParam2)
{
	if (!func_95(iParam0))
	{
		return false;
	}
	if (Global_1332285.f_40.f_2 != iParam1)
	{
		return false;
	}
	if (iParam2 != 0)
	{
		if (Global_1332285.f_40.f_3 != iParam2)
		{
			return false;
		}
	}
	return true;
}

bool func_95(int iParam0)
{
	if (!func_96())
	{
		return false;
	}
	if (!Global_1332285.f_40.f_1 == iParam0)
	{
		return false;
	}
	return true;
}

bool func_96()
{
	if (Global_1332285.f_40 == 0)
	{
		return false;
	}
	return true;
}

bool func_97(int iParam0)
{
	if (func_101())
	{
		return false;
	}
	if (func_100())
	{
		return false;
	}
	if (func_128(0))
	{
		return false;
	}
	if (Global_1312466.f_18 != 0)
	{
		return false;
	}
	if (Global_1715399 || func_99())
	{
		return false;
	}
	if (!GAMEPLAY::IS_BIT_SET(iParam0, 6))
	{
		if (func_98())
		{
			return false;
		}
	}
	return true;
}

int func_98()
{
	return is_time_less_than(NETWORK::GET_NETWORK_TIME(), Global_1347375);
}

bool func_99()
{
	if (Global_2552549.f_796 > -1)
	{
		return true;
	}
	return false;
}

int func_100()
{
	return Global_1332285.f_40 == 3;
}

int func_101()
{
	return func_78();
}

int func_102(int iParam0, int iParam1, int iParam2)
{
	if (!func_100())
	{
		return 0;
	}
	return func_94(iParam0, iParam1, iParam2);
}

int func_103(char* sParam0, char* sParam1)
{
	char[64] cVar0;
	
	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, sParam1, 64);
	return GAMEPLAY::GET_HASH_KEY(&cVar0);
}

auto func_104()
{
	return Global_2465472.f_1;
}

int func_105()
{
	if (Global_1332473.f_2)
	{
		return 1;
	}
	return func_106();
}

int func_106()
{
	return func_101();
}

void func_107(auto uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

bool func_108(auto uParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		return true;
	}
	func_109(uParam0, iParam2, 0);
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

void func_109(auto uParam0, int iParam1, int iParam2)
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

void func_110(int iParam0, int iParam1, int iParam2, int iParam3)
{
	char[16] cVar0;
	char[16] cVar4;
	int iVar8;
	auto uVar9;
	
	StringCopy(&cVar0, func_122(iParam1), 16);
	StringCopy(&cVar4, func_121(iParam2), 16);
	switch (iParam1)
	{
		case 0:
			iVar8 = 1287308202;
			break;
		
		case 1:
			iVar8 = 691372038;
			break;
		
		case 2:
			iVar8 = 1480707108;
			break;
		
		case 3:
			iVar8 = 1512499951;
			break;
		
		case 4:
			iVar8 = 562283735;
			break;
		
		case 5:
			iVar8 = -154732333;
			break;
		
		case 6:
			iVar8 = -1362660491;
			break;
		
		case 7:
			iVar8 = 645708827;
			break;
		
		case 8:
			iVar8 = 767907967;
			break;
		
		case 9:
			iVar8 = -1970151306;
			break;
		
		case 10:
			iVar8 = 718859568;
			break;
		
		case 11:
			iVar8 = -1955564771;
			break;
		
		case 12:
			iVar8 = 892388724;
			break;
	}
	if (func_120())
	{
		func_111(iVar8, iParam0, &uVar9, iParam3, iParam3, 0);
		Global_2558146[uVar9 /*73*/].f_8.f_43 = {cVar0};
		Global_2558146[uVar9 /*73*/].f_8.f_47 = {cVar4};
	}
	else
	{
		network_refund_cash(iParam0, &cVar0, &cVar4, iParam3);
	}
}

void func_111(int iParam0, int iParam1, auto uParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (!func_120())
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
				func_112(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_112(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

bool func_112(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = false;
	if (!func_120())
	{
		iVar0 = true;
	}
	if (!iVar0)
	{
		if (!_0xB24F0944DA203D9E(func_6()) || _0x810E8431C0614BF9())
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
			*uParam0 = func_119(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
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
			func_118(1, iParam4);
			Global_2558636 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_113(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return false;
}

void func_113(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			GAMEPLAY::SET_BIT(&(Global_2418472[player_id() /*313*/].f_121.f_71), false);
			break;
	}
	if (iParam0 != -1)
	{
		func_114(iParam0);
	}
}

void func_114(int iParam0)
{
	int iVar0;
	
	iVar0 = false;
	if (!func_120())
	{
		iVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_117(iParam0))
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
		func_115(&(Global_2558146[iParam0 /*73*/]));
	}
}

void func_115(auto uParam0)
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
	func_116(uParam0.f_8.f_3);
	func_116(uParam0.f_8.f_16);
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

void func_116(auto uParam0)
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

int func_117(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2558146[iParam0 /*73*/].f_5 == 1;
	}
	return false;
}

void func_118(int iParam0, int iParam1)
{
	Global_2445534 = iParam1;
	Global_2445533 = iParam0;
}

int func_119(int iParam0, auto uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, auto uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2558146[iVar0 /*73*/].f_2 == 0)
		{
			if (!func_120())
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

bool func_120()
{
	if (GAMEPLAY::IS_PC_VERSION())
	{
		return true;
	}
	return false;
}

char* func_121(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "NOTREACHTARGET";
			break;
		
		case 1:
			return "TARGET_ESCAPE";
			break;
		
		case 2:
			return "DELIVERY_FAIL";
			break;
		
		case 3:
			return "NOT_USED";
			break;
		
		case 4:
			return "TEAM_QUIT";
			break;
		
		case 5:
			return "SERVER_ERROR";
			break;
		
		case 6:
			return "RECEIVE_LJ_L";
			break;
		
		case 8:
			return "CHALLENGE_PLAYER_LEFT";
			break;
	}
	return "DEFAULT";
}

char* func_122(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BACKUP_VAGOS";
		
		case 1:
			return "BACKUP_LOST";
		
		case 2:
			return "BACKUP_FAMILIES";
		
		case 3:
			return "HIRE_MUGGER";
		
		case 4:
			return "HIRE_MERCENARY";
		
		case 5:
			return "BUY_CARDROPOFF";
		
		case 6:
			return "HELI_PICKUP";
		
		case 7:
			return "BOAT_PICKUP";
		
		case 8:
			return "CLEAR_WANTED";
		
		case 9:
			return "HEAD_2_HEAD";
		
		case 10:
			return "CHALLENGE";
		
		case 11:
			return "SHARE_LAST_JOB";
		
		default:
	}
	return "DEFAULT";
}

int func_123(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (func_125(iParam0) >= 0)
	{
		iVar0 = func_125(iParam0);
	}
	else
	{
		iVar0 = func_124(iParam0);
	}
	return iVar0;
}

int func_124(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1000;
			break;
		
		case 10:
			return 5000;
			break;
		
		case 11:
			return 8000;
			break;
		
		case 8:
			return 1000;
			break;
		
		case 0:
			return 500;
			break;
		
		case 9:
			return 250;
			break;
		
		case 13:
			return 1000;
			break;
		
		case 12:
			return 7500;
			break;
		
		case 2:
			return 1000;
			break;
		
		case 14:
			return 500;
			break;
		
		case 20:
			if (get_player_wanted_level(player_id()) == 1)
			{
				return 200;
			}
			else if (get_player_wanted_level(player_id()) == 2)
			{
				return 400;
			}
			else if (get_player_wanted_level(player_id()) == 3)
			{
				return 600;
			}
			else if (get_player_wanted_level(player_id()) == 4)
			{
				return 800;
			}
			else if (get_player_wanted_level(player_id()) == 5)
			{
				return 1000;
			}
			break;
		
		case 6:
			return 500;
			break;
		
		case 22:
			return 200;
			break;
		
		case 23:
			return 400;
			break;
		
		case 24:
			return 700;
			break;
		
		case 25:
			return 100;
			break;
		
		case 26:
			return 1000;
			break;
		
		case 35:
			return 5000;
			break;
		
		case 15:
			return 0;
			break;
		
		case 17:
			return 0;
			break;
		
		case 18:
			return 0;
			break;
		
		case 19:
			return 0;
			break;
		
		case 21:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 39:
			return 200;
			break;
		
		case 40:
			return 1000;
		
		case 41:
			return 750;
		
		case 42:
			return 0;
	}
	return 0;
}

int func_125(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_5049;
			break;
		
		case 10:
			return Global_262145.f_4111;
			break;
		
		case 11:
			return Global_262145.f_4112;
			break;
		
		case 8:
			return Global_262145.f_4109;
			break;
		
		case 0:
			return Global_262145.f_4095;
			break;
		
		case 9:
			return Global_262145.f_4110;
			break;
		
		case 13:
			return Global_262145.f_4114;
			break;
		
		case 12:
			return Global_262145.f_4113;
			break;
		
		case 2:
			return Global_262145.f_4105;
			break;
		
		case 14:
			return Global_262145.f_4115;
			break;
		
		case 20:
			if (get_player_wanted_level(player_id()) == 1)
			{
				return Global_262145.f_5056;
			}
			else if (get_player_wanted_level(player_id()) == 2)
			{
				return Global_262145.f_5057;
			}
			else if (get_player_wanted_level(player_id()) == 3)
			{
				return Global_262145.f_5058;
			}
			else if (get_player_wanted_level(player_id()) == 4)
			{
				return Global_262145.f_5059;
			}
			else if (get_player_wanted_level(player_id()) == 5)
			{
				return Global_262145.f_5060;
			}
			break;
		
		case 6:
			return Global_262145.f_4108;
			break;
		
		case 22:
			return Global_262145.f_4121;
			break;
		
		case 23:
			return Global_262145.f_4122;
			break;
		
		case 24:
			return Global_262145.f_4123;
			break;
		
		case 25:
			return Global_262145.f_4124;
			break;
		
		case 26:
			return Global_262145.f_4125;
			break;
		
		case 35:
			return Global_262145.f_5625;
			break;
		
		case 15:
			return Global_262145.f_5050;
			break;
		
		case 17:
			return Global_262145.f_5050;
			break;
		
		case 18:
			return Global_262145.f_5050;
			break;
		
		case 19:
			return Global_262145.f_5050;
			break;
		
		case 21:
			return Global_262145.f_5050;
			break;
		
		case 36:
			return Global_262145.f_6090;
			break;
		
		case 39:
			return -1;
			break;
		
		case 40:
			return Global_262145.f_10811;
			break;
		
		case 41:
			return Global_262145.f_10812;
			break;
		
		case 42:
			return Global_262145.f_10813;
			break;
		
		case 43:
			return Global_262145.f_12809;
			break;
		
		case 44:
			return Global_262145.f_12811;
			break;
	}
	return 0;
}

void func_126(int iParam0)
{
	func_127(&(Global_2435528.f_4093.f_137[iParam0 /*2*/]));
}

void func_127(auto uParam0)
{
	*uParam0.f_1 = 0;
}

bool func_128(int iParam0)
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

bool func_129(int iParam0, int iParam1, int iParam2)
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

void func_130()
{
	int iVar0;
	int iVar1;
	
	if (((ENTITY::DOES_ENTITY_EXIST(iLocal_1166) && !func_135(iLocal_1166)) && !func_134(Local_125.f_4)) && is_ped_in_vehicle(net_to_ped(Local_125.f_4), iLocal_1166, 0))
	{
		if (!func_133(iLocal_1166, 1, 1, 0, 0, 0))
		{
			iVar0 = false;
			while (iVar0 < 32)
			{
				iVar1 = int_to_playerindex(iVar0);
				if (func_129(iVar1, 0, 1))
				{
					if (is_ped_in_vehicle(get_player_ped(iVar1), iLocal_1166, 0))
					{
						func_131(func_132(iVar1), 0, 0f, 0, 0, 0);
					}
				}
				iVar0++;
			}
		}
		else if (!iLocal_1152)
		{
			if (!network_has_control_of_entity(iLocal_1166))
			{
				network_request_control_of_entity(iLocal_1166);
			}
			else
			{
				set_vehicle_doors_locked(iLocal_1166, 2);
				iLocal_1152 = 1;
			}
		}
	}
}

void func_131(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)
{
	struct<7> Var0;
	
	Var0 = 58;
	Var0.f_1 = player_id();
	Var0.f_4 = iParam1;
	Var0.f_5 = iParam4;
	Var0.f_2 = fParam2;
	Var0.f_3 = iParam3;
	Var0.f_6 = iParam5;
	if (!iParam0 == 0)
	{
		trigger_script_event(1, &Var0, 7, iParam0);
	}
}

auto func_132(int iParam0)
{
	auto uVar0;
	
	GAMEPLAY::SET_BIT(&uVar0, iParam0);
	return uVar0;
}

bool func_133(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = get_vehicle_max_number_of_passengers(iParam0) + 1;
	if (iParam4 || !ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (!is_vehicle_seat_free(iParam0, iVar0 - 1))
			{
				iVar2 = get_ped_in_vehicle_seat(iParam0, iVar0 - 1);
				if (iParam3 && iVar2 == PLAYER::PLAYER_PED_ID())
				{
				}
				else if (iParam2)
				{
					if (!PED::IS_PED_INJURED(iVar2))
					{
						if (is_ped_a_player(iVar2))
						{
							if (get_player_wanted_level(_network_get_ped_player(iVar2)) == 0)
							{
								if (!iParam5)
								{
									return false;
								}
							}
							else
							{
								return false;
							}
						}
					}
					else if (iParam1 == 0)
					{
						return false;
					}
				}
				else if (iParam1 == 0)
				{
					return false;
				}
				else
				{
					iVar3 = get_ped_in_vehicle_seat(iParam0, iVar0 - 1);
					if (!PED::IS_PED_INJURED(iVar3))
					{
						return false;
					}
				}
			}
			iVar0++;
		}
	}
	return true;
}

int func_134(int iParam0)
{
	if (network_does_network_id_exist(iParam0))
	{
		return PED::IS_PED_INJURED(net_to_ped(iParam0));
	}
	return true;
}

bool func_135(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0, 0))
		{
			return true;
		}
		else if (!is_vehicle_driveable(iParam0, 0))
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

bool func_136()
{
	if (func_137())
	{
		return true;
	}
	return false;
}

bool func_137()
{
	auto uVar0;
	auto uVar1;
	
	if ((Global_1587523[player_id() /*444*/] == 2 || Global_1587523[player_id() /*444*/] == 1) || Global_1587523[player_id() /*444*/] == 3)
	{
		return true;
	}
	if (!func_129(player_id(), 1, 1) && !func_250())
	{
		return true;
	}
	if (func_143())
	{
		if (Local_125.f_23 >= 0 || Local_125.f_23 <= 3)
		{
			if (!func_250())
			{
				func_110(func_123(13), 6, 3, 1);
			}
			else
			{
				func_110(func_123(44), 6, 3, 1);
			}
		}
		return true;
	}
	if ((Local_125.f_23 >= 0 || Local_125.f_23 <= 3) && Local_125.f_23 != 4)
	{
		if (func_135(iLocal_1166))
		{
			if (network_does_network_id_exist(Local_125.f_3))
			{
				if (network_get_destroyer_of_network_id(Local_125.f_3, &uVar0) == player_id())
				{
					if (func_142())
					{
						func_141(1, 600000);
					}
					else
					{
						Global_2460486.f_4985 = NETWORK::GET_NETWORK_TIME();
					}
				}
			}
			return true;
		}
		else
		{
			if (func_134(Local_125.f_4))
			{
				if (network_does_network_id_exist(Local_125.f_4))
				{
					if (network_get_destroyer_of_network_id(Local_125.f_4, &uVar1) == player_id())
					{
						if (func_142())
						{
							func_141(1, 600000);
						}
						else
						{
							Global_2460486.f_4985 = NETWORK::GET_NETWORK_TIME();
						}
					}
				}
				return true;
			}
			else if (!is_ped_in_vehicle(net_to_ped(Local_125.f_4), iLocal_1166, 0))
			{
				return true;
			}
			else if (vLocal_158[participant_id_to_int() /*3*/].f_2 >= 1)
			{
				if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iLocal_1166, 1), func_140(), func_140(), func_140(), false, true, 0))
				{
					return true;
				}
			}
			if (func_139(player_id(), 0))
			{
				return true;
			}
			if (func_139(player_id(), 7))
			{
				return true;
			}
			if (Global_1587523[player_id() /*444*/] == 13)
			{
				return true;
			}
			if (Global_1587523[player_id() /*444*/] == 14)
			{
				return true;
			}
			if (Global_1587523[player_id() /*444*/] == 15)
			{
				return true;
			}
			if (Global_1587523[player_id() /*444*/] == 12)
			{
				return true;
			}
			if (Global_1587523[player_id() /*444*/] == 11)
			{
				return true;
			}
			if (network_is_in_tutorial_session() != iLocal_951)
			{
				return true;
			}
		}
	}
	if (Local_125.f_23 == 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1166))
		{
			if (get_vehicle_number_of_passengers(iLocal_1166) <= 0 || !func_138(get_player_ped(Local_125.f_5), iLocal_1166, 0))
			{
				set_vehicle_doors_locked(iLocal_1166, 1);
				return true;
			}
		}
		if (func_135(iLocal_1166))
		{
			set_vehicle_doors_locked(iLocal_1166, 1);
			return true;
		}
		if (func_134(Local_125.f_4) && !Global_2443115.f_26)
		{
			set_vehicle_doors_locked(iLocal_1166, 1);
			return true;
		}
	}
	return false;
}

bool func_138(int iParam0, int iParam1, int iParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, 0))
		{
			if (is_ped_in_vehicle(iParam0, iParam1, iParam2))
			{
				return true;
			}
		}
	}
	return false;
}

int func_139(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_2418472[iParam0 /*313*/].f_206, iParam1);
}

float func_140()
{
	float fVar0;
	
	fVar0 = 200f;
	if (func_250())
	{
		fVar0 = 200f + 600f;
	}
	return fVar0;
}

void func_141(int iParam0, int iParam1)
{
	if (Global_2428492.f_3313[iParam0] < iParam1)
	{
		Global_2428492.f_3313[iParam0] = iParam1;
	}
	GAMEPLAY::SET_BIT(&(Global_2428492.f_3312), iParam0);
}

bool func_142()
{
	if (func_250())
	{
		return false;
	}
	return true;
}

int func_143()
{
	return Global_1587523[player_id() /*444*/].f_180 != 0;
}

void func_144()
{
	int iVar0;
	auto uVar1;
	
	if (!network_is_host_of_this_script())
	{
		return;
	}
	if (Local_125.f_24 != 8 && Local_125.f_24 != 5)
	{
		if (func_134(Local_125.f_4) || func_135(iLocal_1166))
		{
			Local_125.f_24 = 8;
		}
		else if (!is_ped_in_vehicle(net_to_ped(Local_125.f_4), iLocal_1166, 0))
		{
			Local_125.f_24 = 8;
		}
	}
	if (Local_125.f_24 != 4)
	{
		if (GAMEPLAY::IS_BIT_SET(Local_125.f_1, 14))
		{
			GAMEPLAY::CLEAR_BIT(&(Local_125.f_1), 14);
		}
		if (func_193(&uLocal_1131))
		{
			func_127(&uLocal_1131);
		}
		if (func_193(&uLocal_1133))
		{
			func_127(&uLocal_1133);
		}
	}
	if (Local_125.f_24 != 7)
	{
		if (func_193(&uLocal_1135))
		{
			func_127(&uLocal_1135);
		}
	}
	if (!func_134(Local_125.f_4) && !func_135(iLocal_1166))
	{
		if (Local_125.f_24 != 8)
		{
			if ((Local_125.f_23 == 0 || Local_125.f_23 == 1) || Local_125.f_23 == 2)
			{
				if (has_entity_been_damaged_by_any_ped(iLocal_1166) || has_entity_been_damaged_by_any_ped(net_to_ped(Local_125.f_4)))
				{
					if ((get_entity_health(iLocal_1166) <= 500 || get_entity_health(net_to_ped(Local_125.f_4)) <= 150) || is_heli_part_broken(iLocal_1166, 1, 1, 1))
					{
						Local_125.f_24 = 8;
					}
				}
			}
		}
		switch (Local_125.f_24)
		{
			case 1:
				if (Local_125.f_23 == 3)
				{
					if (!GAMEPLAY::IS_BIT_SET(Local_125.f_2, 2))
					{
						if (func_189())
						{
							if (func_142())
							{
								func_107(&uLocal_957, 3, net_to_ped(Local_125.f_4), "FM_Pilot", 0, 1);
								func_188(&uLocal_957, "CT_AUD", "MPCT_HPgo", 12, 0, 0, 1);
							}
							else
							{
								func_10(1);
								func_107(&uLocal_957, 2, net_to_ped(Local_125.f_4), "EXEC_PILOT", 0, 1);
								func_90(&uLocal_957, "EXHELAU", "EXHEL_CUSTOM", 12, 0, 0, 1);
							}
							GAMEPLAY::SET_BIT(&(Local_125.f_2), 2);
						}
					}
					func_186();
					Local_125.f_24 = 2;
				}
				else if (Local_125.f_23 == 6)
				{
					Local_125.f_24 = 8;
				}
				else if (func_185() == 0)
				{
					func_186();
					Local_125.f_24 = 4;
				}
				else if (get_vehicle_number_of_passengers(iLocal_1166) > 0)
				{
					func_186();
					Local_125.f_24 = 4;
				}
				else if (GAMEPLAY::IS_BIT_SET(Local_125.f_1, 9))
				{
					func_186();
					Local_125.f_24 = 2;
				}
				else if (GAMEPLAY::IS_BIT_SET(iLocal_255, 4) && func_185())
				{
					if (is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_1166, func_140() / 2f, func_140() / 2f, func_140(), 0, 1, 0))
					{
						if (func_184(iLocal_1166))
						{
							if (_0x634148744F385576(iLocal_1166))
							{
								if (func_108(&uLocal_1126, func_183(), 0))
								{
									iLocal_953 = 0;
									iLocal_954 = 0;
									iLocal_955 = 0;
									GAMEPLAY::CLEAR_BIT(&iLocal_255, 4);
									if (!GAMEPLAY::IS_BIT_SET(iLocal_255, 18))
									{
										iLocal_1130 = NETWORK::GET_NETWORK_TIME();
									}
									GAMEPLAY::SET_BIT(&iLocal_255, 18);
								}
							}
							else if (func_193(&uLocal_1126))
							{
								func_127(&uLocal_1126);
							}
						}
					}
				}
				else if (!GAMEPLAY::IS_BIT_SET(iLocal_255, 4))
				{
					if (func_159(&uVar1))
					{
						func_156(Local_125.f_6);
						func_155();
					}
				}
				if (GAMEPLAY::IS_BIT_SET(iLocal_255, 18) && Local_125.f_24 == 1)
				{
					iVar0 = absi(get_time_difference(NETWORK::GET_NETWORK_TIME(), iLocal_1130));
					if (iVar0 > 60000)
					{
						Local_125 = 4;
					}
				}
				if (!GAMEPLAY::IS_BIT_SET(Local_125.f_2, false))
				{
					if (func_189())
					{
						if (ENTITY::IS_ENTITY_AT_COORD(iLocal_1166, Local_125.f_6, 20f, 20f, 20f, false, true, 0))
						{
							if (func_142())
							{
								func_107(&uLocal_957, 3, net_to_ped(Local_125.f_4), "FM_Pilot", 0, 1);
								func_188(&uLocal_957, "CT_AUD", "MPCT_HParr", 12, 0, 0, 1);
							}
							else
							{
								func_10(1);
								func_107(&uLocal_957, 2, net_to_ped(Local_125.f_4), "EXEC_PILOT", 0, 1);
								func_90(&uLocal_957, "EXHELAU", "EXHEL_APPR", 12, 0, 0, 1);
							}
							GAMEPLAY::SET_BIT(&(Local_125.f_2), false);
						}
					}
				}
				break;
			
			case 2:
				if (get_vehicle_number_of_passengers(iLocal_1166) <= 0)
				{
					Local_125.f_24 = 4;
				}
				else if (ENTITY::IS_ENTITY_AT_COORD(net_to_ped(Local_125.f_4), Local_125.f_10, 7.5f, 7.5f, 9999.9f, false, true, 0))
				{
					_0xD8E694757BCEA8E9();
					Local_125.f_24 = 3;
					iLocal_157 = true;
					func_127(&uLocal_1142);
					func_127(&uLocal_1140);
					GAMEPLAY::CLEAR_BIT(&(Local_125.f_1), 14);
				}
				else if (!is_waypoint_active() || func_154(0))
				{
					if (!GAMEPLAY::IS_BIT_SET(Local_125.f_2, 4) && func_189())
					{
						if (func_142())
						{
							func_107(&uLocal_957, 3, net_to_ped(Local_125.f_4), "FM_Pilot", 0, 1);
							func_188(&uLocal_957, "CT_AUD", "MPCT_HPcha", 12, 0, 0, 1);
						}
						else
						{
							func_10(1);
							func_107(&uLocal_957, 2, net_to_ped(Local_125.f_4), "EXEC_PILOT", 0, 1);
							func_90(&uLocal_957, "EXHELAU", "EXHEL_CHANGE", 12, 0, 0, 1);
						}
						GAMEPLAY::SET_BIT(&(Local_125.f_2), 4);
					}
					GAMEPLAY::CLEAR_BIT(&(Local_125.f_1), 9);
					GAMEPLAY::SET_BIT(&(Local_125.f_1), 12);
					Local_125.f_24 = 4;
				}
				if (!GAMEPLAY::IS_BIT_SET(Local_125.f_2, 6) && func_189())
				{
					if (ENTITY::IS_ENTITY_AT_COORD(net_to_ped(Local_125.f_4), Local_125.f_10, 7.5f + 75f, 7.5f + 75f, 10f * 2f + 75f, false, true, 0))
					{
						if (func_142())
						{
							func_107(&uLocal_957, 3, net_to_ped(Local_125.f_4), "FM_Pilot", 0, 1);
							func_188(&uLocal_957, "CT_AUD", "MPCT_HPnear", 12, 0, 0, 1);
						}
						GAMEPLAY::SET_BIT(&(Local_125.f_2), 6);
					}
				}
				func_150();
				if (get_player_wanted_level(player_id()) <= 0)
				{
					if (func_108(&uLocal_1137, iLocal_1139, 0))
					{
						if (func_189())
						{
							if (func_142())
							{
								func_107(&uLocal_957, 3, net_to_ped(Local_125.f_4), "FM_Pilot", 0, 1);
								func_188(&uLocal_957, "CT_AUD", "MPCT_HPfly", 12, 0, 0, 1);
							}
							else
							{
								func_10(1);
								func_107(&uLocal_957, 2, net_to_ped(Local_125.f_4), "EXEC_PILOT", 0, 1);
								func_90(&uLocal_957, "EXHELAU", "EXHEL_CHAT", 12, 0, 0, 1);
							}
							iLocal_1139 = get_random_int_in_range(15000, 30000);
							func_127(&uLocal_1137);
						}
					}
				}
				break;
			
			case 5:
				if (get_vehicle_number_of_passengers(iLocal_1166) <= 0 || !func_138(get_player_ped(Local_125.f_5), iLocal_1166, 0))
				{
					Local_125.f_24 = 8;
					break;
				}
				if (!GAMEPLAY::IS_BIT_SET(Local_125.f_1, 15))
				{
					GAMEPLAY::SET_BIT(&(Local_125.f_1), 15);
				}
				break;
			
			case 3:
				if (iLocal_952 != 3)
				{
					iLocal_952 = 3;
				}
				if (get_vehicle_number_of_passengers(iLocal_1166) <= 0 && !_0x291E373D483E7EE7(iLocal_1166))
				{
					if (!GAMEPLAY::IS_BIT_SET(Local_125.f_2, 9))
					{
						if (func_189())
						{
							if (_0x291E373D483E7EE7(iLocal_1166))
							{
								if (func_142())
								{
									func_107(&uLocal_957, 3, net_to_ped(Local_125.f_4), "FM_Pilot", 0, 1);
									func_188(&uLocal_957, "CT_AUD", "MPCT_HPleav", 12, 0, 0, 1);
								}
								else
								{
									func_10(1);
									func_107(&uLocal_957, 2, net_to_ped(Local_125.f_4), "EXEC_PILOT", 0, 1);
									func_90(&uLocal_957, "EXHELAU", "EXHEL_GENBYE", 12, 0, 0, 1);
								}
								GAMEPLAY::SET_BIT(&(Local_125.f_2), 9);
							}
						}
					}
					Local_125.f_24 = 8;
				}
				else if (!is_waypoint_active() || func_154(0))
				{
					GAMEPLAY::CLEAR_BIT(&(Local_125.f_1), 9);
					GAMEPLAY::SET_BIT(&(Local_125.f_1), 12);
					Local_125.f_24 = 4;
				}
				if (!GAMEPLAY::IS_BIT_SET(Local_125.f_2, 8))
				{
					if (_0x291E373D483E7EE7(iLocal_1166))
					{
						if (func_189())
						{
							if (func_142())
							{
								func_107(&uLocal_957, 3, net_to_ped(Local_125.f_4), "FM_Pilot", 0, 1);
								func_188(&uLocal_957, "CT_AUD", "MPCT_HPrap", 12, 0, 0, 1);
							}
							else
							{
								func_10(1);
								func_107(&uLocal_957, 2, net_to_ped(Local_125.f_4), "EXEC_PILOT", 0, 1);
								func_90(&uLocal_957, "EXHELAU", "EXHEL_FLIES", 12, 0, 0, 1);
							}
							GAMEPLAY::SET_BIT(&(Local_125.f_2), 8);
						}
					}
				}
				break;
			
			case 4:
				if (iLocal_157)
				{
					if (func_189())
					{
						if (!GAMEPLAY::IS_BIT_SET(Local_125.f_2, 5))
						{
							if (func_142())
							{
								func_107(&uLocal_957, 3, net_to_ped(Local_125.f_4), "FM_Pilot", 0, 1);
								func_188(&uLocal_957, "CT_AUD", "MPCT_HPdrop", 12, 0, 0, 1);
							}
							else
							{
								func_10(1);
								func_107(&uLocal_957, 2, net_to_ped(Local_125.f_4), "EXEC_PILOT", 0, 1);
								func_90(&uLocal_957, "EXHELAU", "EXHEL_ARRIVE", 12, 0, 0, 1);
							}
							GAMEPLAY::SET_BIT(&(Local_125.f_2), 5);
						}
						else if (!func_142())
						{
							if (!GAMEPLAY::IS_BIT_SET(Local_125.f_2, 21))
							{
								if (get_entity_height_above_ground(iLocal_1166) > 10f)
								{
									func_10(1);
									func_107(&uLocal_957, 2, net_to_ped(Local_125.f_4), "EXEC_PILOT", 0, 1);
									func_90(&uLocal_957, "EXHELAU", "EXHEL_CANJUM", 12, 0, 0, 1);
								}
								GAMEPLAY::SET_BIT(&(Local_125.f_2), 21);
							}
						}
					}
				}
				if (GAMEPLAY::IS_BIT_SET(Local_125.f_1, 12))
				{
					if (!_0x291E373D483E7EE7(iLocal_1166))
					{
						if (is_waypoint_active())
						{
							if (!GAMEPLAY::IS_BIT_SET(Local_125.f_2, 2))
							{
								if (func_189())
								{
									if (func_142())
									{
										func_107(&uLocal_957, 3, net_to_ped(Local_125.f_4), "FM_Pilot", 0, 1);
										func_188(&uLocal_957, "CT_AUD", "MPCT_HPgo", 12, 0, 0, 1);
									}
									else
									{
										func_10(1);
										func_107(&uLocal_957, 2, net_to_ped(Local_125.f_4), "EXEC_PILOT", 0, 1);
										func_90(&uLocal_957, "EXHELAU", "EXHEL_GENPOS", 12, 0, 0, 1);
									}
									GAMEPLAY::SET_BIT(&(Local_125.f_2), 2);
								}
							}
							func_186();
							if (!func_149(Local_125.f_10, Local_125.f_13, 0))
							{
								Local_125.f_13 = {Local_125.f_10};
								Local_125.f_24 = 2;
							}
						}
						else if (get_vehicle_number_of_passengers(iLocal_1166) <= 0)
						{
							Local_125.f_24 = 8;
						}
					}
				}
				else if (GAMEPLAY::IS_BIT_SET(Local_125.f_1, 9))
				{
					if (!GAMEPLAY::IS_BIT_SET(Local_125.f_2, 2))
					{
						if (func_189())
						{
							if (func_142())
							{
								func_107(&uLocal_957, 3, net_to_ped(Local_125.f_4), "FM_Pilot", 0, 1);
								func_188(&uLocal_957, "CT_AUD", "MPCT_HPgo", 12, 0, 0, 1);
							}
							else
							{
								func_10(1);
								func_107(&uLocal_957, 2, net_to_ped(Local_125.f_4), "EXEC_PILOT", 0, 1);
								func_90(&uLocal_957, "EXHELAU", "EXHEL_CUSTOM", 12, 0, 0, 1);
							}
							GAMEPLAY::SET_BIT(&(Local_125.f_2), 2);
						}
					}
					func_186();
					if (!func_149(Local_125.f_10, Local_125.f_13, 0))
					{
						Local_125.f_13 = {Local_125.f_10};
						GAMEPLAY::SET_BIT(&(Local_125.f_1), 13);
						Local_125.f_24 = 2;
					}
				}
				else if (GAMEPLAY::IS_BIT_SET(Local_125.f_1, 13))
				{
					if (get_vehicle_number_of_passengers(iLocal_1166) <= 0)
					{
						Local_125.f_24 = 8;
					}
				}
				func_150();
				if (func_189())
				{
					if (!GAMEPLAY::IS_BIT_SET(Local_125.f_2, true))
					{
						if (get_vehicle_number_of_passengers(iLocal_1166) > 0)
						{
							if (func_193(&uLocal_1133))
							{
								func_127(&uLocal_1133);
							}
							if (func_142())
							{
								func_107(&uLocal_957, 3, net_to_ped(Local_125.f_4), "FM_Pilot", 0, 1);
								func_188(&uLocal_957, "CT_AUD", "MPCT_HPnoW", 12, 0, 0, 1);
							}
							else
							{
								func_10(1);
								func_107(&uLocal_957, 2, net_to_ped(Local_125.f_4), "EXEC_PILOT", 0, 1);
								func_90(&uLocal_957, "EXHELAU", "EXHEL_WHERE", 12, 0, 0, 1);
							}
							GAMEPLAY::SET_BIT(&(Local_125.f_2), true);
						}
					}
					else if (!GAMEPLAY::IS_BIT_SET(Local_125.f_2, 2))
					{
						if (!GAMEPLAY::IS_BIT_SET(Local_125.f_2, 3) && !GAMEPLAY::IS_BIT_SET(Local_125.f_1, 12))
						{
							if (get_vehicle_number_of_passengers(iLocal_1166) <= 0)
							{
								if (func_142())
								{
									func_107(&uLocal_957, 3, net_to_ped(Local_125.f_4), "FM_Pilot", 0, 1);
									func_188(&uLocal_957, "CT_AUD", "MPCT_HPex", 12, 0, 0, 1);
								}
								GAMEPLAY::SET_BIT(&(Local_125.f_2), 3);
							}
						}
					}
					else if (!GAMEPLAY::IS_BIT_SET(Local_125.f_2, 16))
					{
						if (get_vehicle_number_of_passengers(iLocal_1166) <= 0)
						{
							if (func_142())
							{
								func_107(&uLocal_957, 3, net_to_ped(Local_125.f_4), "FM_Pilot", 0, 1);
								func_188(&uLocal_957, "CT_AUD", "MPCT_HPbail", 12, 0, 0, 1);
							}
							else
							{
								func_10(1);
								func_107(&uLocal_957, 2, net_to_ped(Local_125.f_4), "EXEC_PILOT", 0, 1);
								func_90(&uLocal_957, "EXHELAU", "EXHEL_GENBYE", 12, 0, 0, 1);
							}
							GAMEPLAY::SET_BIT(&(Local_125.f_2), 16);
						}
					}
				}
				if (Local_125.f_24 == 4)
				{
					if (!GAMEPLAY::IS_BIT_SET(Local_125.f_1, 14))
					{
						if (!iLocal_157)
						{
							if (func_108(&uLocal_1131, 120000, 0))
							{
								GAMEPLAY::SET_BIT(&(Local_125.f_1), 14);
							}
						}
						else if (func_108(&uLocal_1140, 20000, 0))
						{
							GAMEPLAY::SET_BIT(&(Local_125.f_1), 14);
						}
					}
					else if (!iLocal_157)
					{
						if (func_108(&uLocal_1133, 60000, 0))
						{
							Local_125.f_24 = 7;
						}
					}
					else if (func_108(&uLocal_1142, 30000, 0))
					{
						Local_125.f_24 = 7;
					}
				}
				break;
			
			case 7:
				if (func_108(&uLocal_1135, 4000, 0))
				{
					Local_125.f_24 = 8;
					if (func_148())
					{
						func_147();
					}
				}
				break;
			
			case 8:
				func_146(0);
				break;
		}
		func_145();
		if (!GAMEPLAY::IS_BIT_SET(Local_125.f_2, 10))
		{
			if (func_189())
			{
				if (func_129(player_id(), 1, 1))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_1166, PLAYER::PLAYER_PED_ID(), 1))
					{
						if (func_142())
						{
							func_107(&uLocal_957, 3, net_to_ped(Local_125.f_4), "FM_Pilot", 0, 1);
							func_188(&uLocal_957, "CT_AUD", "MPCT_HPdam", 12, 0, 0, 1);
						}
						else
						{
							func_10(1);
							func_107(&uLocal_957, 2, net_to_ped(Local_125.f_4), "EXEC_PILOT", 0, 1);
							func_90(&uLocal_957, "EXHELAU", "EXHEL_DAMAGE", 12, 0, 0, 1);
						}
						GAMEPLAY::SET_BIT(&(Local_125.f_2), 10);
					}
				}
			}
		}
		if (!func_142())
		{
			if (!GAMEPLAY::IS_BIT_SET(Local_125.f_2, 26))
			{
				if (func_189())
				{
					if (is_player_free_aiming_at_entity(player_id(), net_to_ped(Local_125.f_4)) || is_player_targetting_entity(player_id(), net_to_ped(Local_125.f_4)))
					{
						func_10(1);
						func_107(&uLocal_957, 2, net_to_ped(Local_125.f_4), "EXEC_PILOT", 0, 1);
						func_90(&uLocal_957, "EXHELAU", "EXHEL_AIM", 12, 0, 0, 1);
						GAMEPLAY::SET_BIT(&(Local_125.f_2), 26);
					}
				}
			}
			else if (!is_player_free_aiming_at_entity(player_id(), net_to_ped(Local_125.f_4)) && !is_player_targetting_entity(player_id(), net_to_ped(Local_125.f_4)))
			{
				GAMEPLAY::CLEAR_BIT(&(Local_125.f_2), 26);
			}
		}
	}
}

void func_145()
{
	if (!iLocal_1153)
	{
		if (Local_125.f_24 == 2)
		{
			if (network_does_network_id_exist(Local_125.f_3))
			{
				if (network_has_control_of_network_id(Local_125.f_3))
				{
					_0xE6F13851780394DA(iLocal_1166, 1f);
					iLocal_1153 = 1;
				}
				else
				{
					network_request_control_of_network_id(Local_125.f_3);
				}
			}
		}
	}
}

void func_146(int iParam0)
{
	iLocal_1148 = iParam0;
}

void func_147()
{
	Global_68061 = 1;
}

auto func_148()
{
	return Global_68058;
}

int func_149(Vector3 vParam0, Vector3 vParam1, int iParam2)
{
	if (iParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

void func_150()
{
	if (!func_142())
	{
		if (!GAMEPLAY::IS_BIT_SET(Local_125.f_2, 18))
		{
			if (func_189())
			{
				if (get_vehicle_number_of_passengers(iLocal_1166) > 0)
				{
					func_10(1);
					func_107(&uLocal_957, 2, net_to_ped(Local_125.f_4), "EXEC_PILOT", 0, 1);
					func_90(&uLocal_957, "EXHELAU", "EXHEL_GREET", 12, 0, 0, 1);
					GAMEPLAY::SET_BIT(&(Local_125.f_2), 18);
				}
			}
		}
		else
		{
			if (func_189())
			{
				if (get_vehicle_number_of_passengers(iLocal_1166) > 0)
				{
					if (get_vehicle_number_of_passengers(iLocal_1166) < iLocal_956 && get_entity_height_above_ground(iLocal_1166) > 10f)
					{
						func_10(1);
						func_107(&uLocal_957, 2, net_to_ped(Local_125.f_4), "EXEC_PILOT", 0, 1);
						func_90(&uLocal_957, "EXHELAU", "EXHEL_JUMP", 12, 0, 0, 1);
					}
					else if (!GAMEPLAY::IS_BIT_SET(Local_125.f_2, 22) && iLocal_1150)
					{
						func_10(1);
						func_107(&uLocal_957, 2, net_to_ped(Local_125.f_4), "EXEC_PILOT", 0, 1);
						func_90(&uLocal_957, "EXHELAU", "EXHEL_GENGRE", 12, 0, 0, 1);
						GAMEPLAY::SET_BIT(&(Local_125.f_2), 22);
						GAMEPLAY::CLEAR_BIT(&(Local_125.f_2), 23);
					}
					if (!get_vehicle_number_of_passengers(iLocal_1166) == iLocal_956)
					{
						iLocal_956 = get_vehicle_number_of_passengers(iLocal_1166);
					}
				}
				else if (!GAMEPLAY::IS_BIT_SET(Local_125.f_2, 23))
				{
					if (get_entity_height_above_ground(iLocal_1166) > 10f)
					{
						func_10(1);
						func_107(&uLocal_957, 2, net_to_ped(Local_125.f_4), "EXEC_PILOT", 0, 1);
						func_90(&uLocal_957, "EXHELAU", "EXHEL_JUMP", 12, 0, 0, 1);
						GAMEPLAY::SET_BIT(&(Local_125.f_2), 23);
						GAMEPLAY::CLEAR_BIT(&(Local_125.f_2), 22);
					}
					else
					{
						func_10(1);
						func_107(&uLocal_957, 2, net_to_ped(Local_125.f_4), "EXEC_PILOT", 0, 1);
						func_90(&uLocal_957, "EXHELAU", "EXHEL_GENBYE", 12, 0, 0, 1);
						GAMEPLAY::SET_BIT(&(Local_125.f_2), 23);
						GAMEPLAY::CLEAR_BIT(&(Local_125.f_2), 22);
					}
				}
			}
			if (!iLocal_1150)
			{
				if (get_vehicle_number_of_passengers(iLocal_1166) == 0)
				{
					iLocal_1150 = 1;
				}
			}
		}
		if (func_189())
		{
			if (!GAMEPLAY::IS_BIT_SET(Local_125.f_2, 20))
			{
				if (!func_135(iLocal_1166))
				{
					if (unk_0x6EAAEFC76ACC311F(iLocal_1166) == 2)
					{
						func_10(1);
						func_107(&uLocal_957, 2, net_to_ped(Local_125.f_4), "EXEC_PILOT", 0, 1);
						func_90(&uLocal_957, "EXHELAU", "EXHEL_LOCKS", 12, 0, 0, 1);
						GAMEPLAY::SET_BIT(&(Local_125.f_2), 20);
					}
				}
			}
			else if (!func_135(iLocal_1166))
			{
				if (unk_0x6EAAEFC76ACC311F(iLocal_1166) != 2)
				{
					GAMEPLAY::CLEAR_BIT(&(Local_125.f_2), 20);
				}
			}
		}
		if (!GAMEPLAY::IS_BIT_SET(Local_125.f_2, 24))
		{
			if (func_189())
			{
				if (func_151(PLAYER::PLAYER_PED_ID()) >= 5)
				{
					func_10(1);
					func_107(&uLocal_957, 2, net_to_ped(Local_125.f_4), "EXEC_PILOT", 0, 1);
					func_90(&uLocal_957, "EXHELAU", "EXHEL_DRINKS", 12, 0, 0, 1);
					GAMEPLAY::SET_BIT(&(Local_125.f_2), 24);
				}
			}
		}
		if (!GAMEPLAY::IS_BIT_SET(Local_125.f_2, 25))
		{
			if (func_189())
			{
				if (!func_135(iLocal_1166))
				{
					if (!is_vehicle_seat_free(iLocal_1166, 2) || !is_vehicle_seat_free(iLocal_1166, 1))
					{
						func_10(1);
						func_107(&uLocal_957, 2, net_to_ped(Local_125.f_4), "EXEC_PILOT", 0, 1);
						func_90(&uLocal_957, "EXHELAU", "EXHEL_CHAMP", 12, 0, 0, 1);
						GAMEPLAY::SET_BIT(&(Local_125.f_2), 25);
					}
				}
			}
		}
		if (!GAMEPLAY::IS_BIT_SET(Local_125.f_2, 19))
		{
			if (func_189())
			{
				if (is_ped_shooting(PLAYER::PLAYER_PED_ID()))
				{
					func_10(1);
					func_107(&uLocal_957, 2, net_to_ped(Local_125.f_4), "EXEC_PILOT", 0, 1);
					func_90(&uLocal_957, "EXHELAU", "EXHEL_FIRE", 12, 0, 0, 1);
					GAMEPLAY::SET_BIT(&(Local_125.f_2), 19);
				}
			}
		}
	}
}

int func_151(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = func_153(iParam0);
	iVar1 = func_152(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_36642[iVar1 /*5*/].f_3;
}

int func_152(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_36642[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_153(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_36642[iVar0 /*5*/].f_1)
		{
			return Global_36642[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

int func_154(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_2460486.f_268, iParam0);
}

void func_155()
{
	if (!func_134(Local_125.f_4))
	{
		AI::CLEAR_PED_TASKS(net_to_ped(Local_125.f_4));
	}
}

void func_156(Vector3 vParam0)
{
	Local_125.f_17 = {func_157(vParam0)};
}

Vector3 func_157(Vector3 vParam0)
{
	Vector3 vVar0;
	
	switch (func_158(vParam0))
	{
		case 0:
			vVar0 = {-vParam0.x, -5000f, vParam0.z};
			break;
		
		case 1:
			vVar0 = {-5000f, -vParam0.y, vParam0.z};
			break;
		
		case 2:
			vVar0 = {-vParam0.x, 8000f, vParam0.z};
			break;
		
		case 3:
			vVar0 = {5000f, -vParam0.y, vParam0.z};
			break;
	}
	return vVar0;
}

int func_158(struct<2> Param0, auto uParam1)
{
	if (Param0.f_1 >= 0f && Param0 >= 0f)
	{
		return 0;
	}
	else if (Param0.f_1 < 0f && Param0 >= 0f)
	{
		return 1;
	}
	else if (Param0.f_1 < 0f && Param0 < 0f)
	{
		return 2;
	}
	else if (Param0.f_1 >= 0f && Param0 < 0f)
	{
		return 3;
	}
	return -1;
}

int func_159(auto uParam0)
{
	auto uVar0;
	auto uVar3;
	int iVar4;
	int iVar5;
	auto uVar6;
	Vector3 vVar9;
	
	*uParam0 = 0;
	if (!GAMEPLAY::IS_BIT_SET(iLocal_255, 4) && func_129(player_id(), 1, 1))
	{
		if (func_182(player_id()) && !GAMEPLAY::IS_BIT_SET(iLocal_255, 18))
		{
			Local_125.f_6 = {func_176(func_178(func_179(player_id())))};
			GAMEPLAY::SET_BIT(&iLocal_255, 4);
			*uParam0 = 1;
		}
		else if (func_166(150f, &iVar4, &iVar5) && !GAMEPLAY::IS_BIT_SET(iLocal_255, 18))
		{
			func_165(iVar4, iVar5, &(Local_125.f_6), &(Local_125.f_9));
			*uParam0 = 1;
			GAMEPLAY::SET_BIT(&iLocal_255, 4);
		}
		else if ((func_250() && func_161(600f)) && !GAMEPLAY::IS_BIT_SET(iLocal_255, 18))
		{
			Local_125.f_6 = {vLocal_1158[0 /*3*/]};
			Local_125.f_9 = uLocal_1162[0];
			*uParam0 = 1;
			GAMEPLAY::SET_BIT(&iLocal_255, 4);
		}
		else if (iLocal_953 == 0)
		{
			if (iLocal_955 == 0)
			{
				Local_125.f_6 = {get_offset_from_entity_in_world_coords(PLAYER::PLAYER_PED_ID(), 0f, 15f / 2f, 1.3f)};
				get_ground_z_for_3d_coord(Local_125.f_6, &(Local_125.f_6.f_2), 0);
				Local_125.f_6.f_2 += 1.3f;
			}
			else if (iLocal_955 == 1)
			{
				Local_125.f_6 = {get_offset_from_entity_in_world_coords(PLAYER::PLAYER_PED_ID(), 15f / 2f, 0f, 1.3f)};
				get_ground_z_for_3d_coord(Local_125.f_6, &(Local_125.f_6.f_2), 0);
				Local_125.f_6.f_2 += 1.3f;
			}
			else if (iLocal_955 == 2)
			{
				Local_125.f_6 = {get_offset_from_entity_in_world_coords(PLAYER::PLAYER_PED_ID(), -15f / 2f, 0f, 1.3f)};
				get_ground_z_for_3d_coord(Local_125.f_6, &(Local_125.f_6.f_2), 0);
				Local_125.f_6.f_2 += 1.3f;
			}
			else if (iLocal_955 == 3)
			{
				Local_125.f_6 = {get_offset_from_entity_in_world_coords(PLAYER::PLAYER_PED_ID(), 0f, -15f / 2f, 1.3f)};
				get_ground_z_for_3d_coord(Local_125.f_6, &(Local_125.f_6.f_2), 0);
				Local_125.f_6.f_2 += 1.3f;
			}
			else if (iLocal_955 == 4)
			{
				get_closest_vehicle_node(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), &(Local_125.f_6), 1, 3f, 0f);
				Local_125.f_6.f_2 += 1.3f;
				if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_125.f_6, 75f, 75f, 75f, false, true, 0))
				{
					Local_125 = 4;
				}
			}
			else if (iLocal_955 == 5)
			{
				get_nth_closest_vehicle_node(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 3, &(Local_125.f_6), 1, 3f, 0f);
				Local_125.f_6.f_2 += 1.3f;
				if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_125.f_6, 75f, 75f, 75f, false, true, 0))
				{
					Local_125 = 4;
				}
			}
			else if (iLocal_955 == 6)
			{
				get_nth_closest_vehicle_node(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 6, &(Local_125.f_6), 1, 3f, 0f);
				Local_125.f_6.f_2 += 1.3f;
				if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_125.f_6, 75f, 75f, 75f, false, true, 0))
				{
					Local_125 = 4;
				}
			}
			else if (iLocal_955 == 7)
			{
				get_nth_closest_vehicle_node(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 10, &(Local_125.f_6), 1, 3f, 0f);
				Local_125.f_6.f_2 += 1.3f;
				if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_125.f_6, 75f, 75f, 75f, false, true, 0))
				{
					Local_125 = 4;
				}
			}
			else if (iLocal_955 == 8)
			{
				get_nth_closest_vehicle_node(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 15, &(Local_125.f_6), 1, 3f, 0f);
				Local_125.f_6.f_2 += 1.3f;
				if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_125.f_6, 75f, 75f, 75f, false, true, 0))
				{
					Local_125 = 4;
				}
			}
			else if (iLocal_955 == 9)
			{
				get_nth_closest_vehicle_node(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 20, &(Local_125.f_6), 1, 3f, 0f);
				Local_125.f_6.f_2 += 1.3f;
			}
			else if (func_161(100f) && !GAMEPLAY::IS_BIT_SET(iLocal_255, 18))
			{
				Local_125.f_6 = {vLocal_1158[0 /*3*/]};
				Local_125.f_9 = uLocal_1162[0];
				*uParam0 = 1;
				GAMEPLAY::SET_BIT(&iLocal_255, 4);
				return true;
			}
			else
			{
				Local_125 = 4;
			}
			if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_125.f_6, 75f, 75f, 5f, false, true, 0) || test_probe_against_water(Local_125.f_6 + Vector(2f, 0f, 0f), Local_125.f_6 - Vector(5f, 0f, 0f), &uVar6))
			{
				iLocal_953 = 0;
				iLocal_954 = 0;
				iLocal_955++;
				return false;
			}
			vVar9 = {Local_125.f_6 + Vector(50f / 2f, 0f, 0f)};
			iLocal_953 = _0xFE466162C4401D18(vVar9, 15f, 15f, 50f, 0f, 0f, -1f, 2, 131, PLAYER::PLAYER_PED_ID(), 4);
			if (iLocal_953 == 0)
			{
				return false;
			}
		}
		else if (_get_raycast_result(iLocal_953, &iLocal_954, &uVar0, &uVar0, &uVar3) == 2)
		{
			iLocal_953 = 0;
			if (iLocal_954 == 0 && !func_160(Local_125.f_6, 3, 0, 0))
			{
				GAMEPLAY::SET_BIT(&iLocal_255, 4);
			}
			else
			{
				iLocal_954 = 0;
				iLocal_955++;
			}
		}
		else if (_get_raycast_result(iLocal_953, &iLocal_954, &uVar0, &uVar0, &uVar3) == 0)
		{
			iLocal_953 = 0;
		}
	}
	return GAMEPLAY::IS_BIT_SET(iLocal_255, 4);
}

bool func_160(Vector3 vParam0, int iParam1, int iParam2, int iParam3)
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

bool func_161(float fParam0)
{
	int iVar0;
	
	func_162(func_164(player_id()), &vLocal_1158, &uLocal_1162, &uLocal_1164);
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (uLocal_1164[iVar0] < fParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_162(Vector3 vParam0, auto uParam1, auto uParam2, auto uParam3)
{
	int iVar0;
	float fVar1;
	Vector3[] vVar2 = new Vector3[1];
	var[] uVar6 = new var[1];
	float[] fVar8 = new float[1];
	int iVar10;
	
	if (vdist(vLocal_1155, vParam0) < 20f)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		fVar8[iVar0] = 1E+07f;
		iVar0++;
	}
	iVar10 = 0;
	while (iVar10 < 289)
	{
		fVar1 = vdist(vParam0, Global_2409530[iVar10 /*3*/]);
		iVar0 = 0;
		while (iVar0 < 1)
		{
			if (fVar1 < fVar8[iVar0])
			{
				func_163(Global_2409530[iVar10 /*3*/], Global_2410398[iVar10], fVar1, iVar0, &vVar2, &uVar6, &fVar8);
				iVar0 = 2;
			}
			iVar0++;
		}
		iVar10++;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (vmag(vVar2[iVar0 /*3*/]) > 0f)
		{
			*(uParam3[iVar0 /*3*/]) = {vVar2[iVar0 /*3*/]};
			*uParam4[iVar0] = uVar6[iVar0];
			*uParam5[iVar0] = fVar8[iVar0];
		}
		iVar0++;
	}
	vLocal_1155 = {vParam0};
}

void func_163(Vector3 vParam0, auto uParam1, float fParam2, int iParam3, auto uParam4, auto uParam5, float fParam6)
{
	Vector3 vVar0;
	auto uVar3;
	auto uVar4;
	
	if (iParam5 < *uParam6)
	{
		vVar0 = {*(uParam6[iParam5 /*3*/])};
		uVar3 = *uParam7[iParam5];
		uVar4 = *fParam8[iParam5];
		*(uParam6[iParam5 /*3*/]) = {vParam0};
		*uParam7[iParam5] = uParam3;
		*fParam8[iParam5] = fParam4;
		func_163(vVar0, uVar3, uVar4, iParam5 + 1, uParam6, uParam7, fParam8);
	}
}

Vector3 func_164(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(get_player_ped(iParam0), 0);
}

void func_165(int iParam0, int iParam1, auto uParam2, auto uParam3)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 87:
					*uParam2 = {-1691.356f, -599.7728f, 32.3863f};
					*uParam3 = 142.5853f;
					break;
				
				case 88:
					*uParam2 = {-1370.252f, -520.0326f, 29.6825f};
					*uParam3 = 125.7171f;
					break;
				
				case 89:
					*uParam2 = {-23.9063f, -566.7811f, 36.7451f};
					*uParam3 = 261.5803f;
					break;
				
				case 90:
					*uParam2 = {-8.8891f, -801.2603f, 43.4313f};
					*uParam3 = 337.4736f;
					break;
				
				default:
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 1:
					*uParam2 = {62.9658f, -2526.362f, 5.0021f};
					*uParam3 = 312.1262f;
					break;
				
				case 2:
					*uParam2 = {-1011.097f, -1324.951f, 4.7239f};
					*uParam3 = 82.0646f;
					break;
				
				case 3:
					*uParam2 = {891.2814f, -1038.218f, 38.9808f};
					*uParam3 = 179.4713f;
					break;
				
				case 4:
					*uParam2 = {238.2009f, -1979.512f, 19.9838f};
					*uParam3 = 229.0376f;
					break;
				
				case 5:
					*uParam2 = {-445.2993f, 159.6719f, 77.0803f};
					*uParam3 = 177.4463f;
					break;
				
				case 6:
					*uParam2 = {-1003.048f, -2074.005f, 11.4279f};
					*uParam3 = 312.3971f;
					break;
				
				case 7:
					*uParam2 = {-1302.906f, -790.8793f, 16.5494f};
					*uParam3 = 218.4739f;
					break;
				
				case 8:
					*uParam2 = {-839.7902f, -2694.595f, 12.8121f};
					*uParam3 = 262.2745f;
					break;
				
				case 9:
					*uParam2 = {242.0532f, -2957.304f, 4.8795f};
					*uParam3 = 206.7359f;
					break;
				
				case 10:
					*uParam2 = {1519.096f, -2198.799f, 76.0507f};
					*uParam3 = 276.3806f;
					break;
				
				case 11:
					*uParam2 = {-293.2805f, -2718.856f, 5.0003f};
					*uParam3 = 314.7322f;
					break;
				
				case 12:
					*uParam2 = {517.1236f, -596.8082f, 23.7995f};
					*uParam3 = 196.9468f;
					break;
				
				case 13:
					*uParam2 = {-488.2077f, -1801.373f, 20.2465f};
					*uParam3 = 44.8509f;
					break;
				
				case 14:
					*uParam2 = {-345.6657f, -1351.348f, 30.2847f};
					*uParam3 = 146.9459f;
					break;
				
				case 15:
					*uParam2 = {292.9702f, 371.4247f, 104.3915f};
					*uParam3 = 75.7126f;
					break;
				
				case 16:
					*uParam2 = {905.4782f, -1560.715f, 29.7175f};
					*uParam3 = 290.4099f;
					break;
				
				case 17:
					*uParam2 = {711.2572f, -911.7263f, 22.7077f};
					*uParam3 = 316.5199f;
					break;
				
				case 18:
					*uParam2 = {1091.211f, -2194.509f, 30.1066f};
					*uParam3 = 20.739f;
					break;
				
				case 19:
					*uParam2 = {989.2725f, -2531.751f, 27.302f};
					*uParam3 = 319.7745f;
					break;
				
				case 20:
					*uParam2 = {-245.9971f, 108.1838f, 68.557f};
					*uParam3 = 28.2604f;
					break;
				
				case 21:
					*uParam2 = {562.0646f, -1949.79f, 23.9592f};
					*uParam3 = 6.5821f;
					break;
				
				case 22:
					*uParam2 = {76.4564f, -2200.17f, 0.6006f};
					*uParam3 = 183.6653f;
					break;
				
				default:
					break;
			}
			break;
	}
}

bool func_166(float fParam0, auto uParam1, auto uParam2)
{
	float fVar0;
	
	if (func_250())
	{
		func_167(uParam1, &fVar0, uParam2);
		if (*uParam1 > -1)
		{
			if (fVar0 < fParam0)
			{
				return true;
			}
		}
	}
	return false;
}

void func_167(auto uParam0, auto uParam1, auto uParam2)
{
	int[] iVar0 = new int[2];
	var[] uVar3 = new var[2];
	int iVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	
	func_173(&(iVar0[0]), &(uVar3[0]));
	func_168(&(iVar0[1]), &(uVar3[1]));
	iVar6 = -1;
	fVar7 = 999999.9f;
	iVar8 = -1;
	iVar9 = 0;
	while (iVar9 < iVar0)
	{
		if (uVar3[iVar9] < fVar7)
		{
			fVar7 = uVar3[iVar9];
			iVar6 = iVar0[iVar9];
			iVar8 = iVar9;
		}
		iVar9++;
	}
	*uParam0 = iVar6;
	*uParam1 = fVar7;
	*uParam2 = iVar8;
}

void func_168(auto uParam0, auto uParam1)
{
	int iVar0;
	float fVar1;
	Vector3 vVar2;
	Vector3 vVar5;
	float fVar8;
	int iVar9;
	
	iVar0 = -1;
	fVar1 = 1E+07f;
	vVar2 = {func_172(player_id())};
	vVar2.z = 0f;
	iVar9 = 0;
	while (iVar9 < 23)
	{
		if (iVar9 > 0)
		{
			if (func_171(iVar9))
			{
				vVar5 = {func_169(iVar9)};
				vVar5.z = 0f;
				fVar8 = vdist(vVar2, vVar5);
				if (fVar8 < fVar1)
				{
					fVar1 = fVar8;
					iVar0 = iVar9;
				}
			}
		}
		iVar9++;
	}
	*uParam0 = iVar0;
	*uParam1 = fVar1;
}

Vector3 func_169(int iParam0)
{
	Vector3 vVar0;
	
	vVar0 = {0f, 0f, 0f};
	if (!func_170(iParam0))
	{
		return vVar0;
	}
	switch (iParam0)
	{
		case 1:
			vVar0 = {50.9205f, -2560.01f, 6f};
			break;
		
		case 2:
			vVar0 = {-1074.852f, -1257.452f, 5.6938f};
			break;
		
		case 3:
			vVar0 = {901.936f, -1019.425f, 34.9666f};
			break;
		
		case 4:
			vVar0 = {253.9006f, -1955.933f, 22.9477f};
			break;
		
		case 5:
			vVar0 = {-426.279f, 180.9043f, 80.6855f};
			break;
		
		case 6:
			vVar0 = {-1050.36f, -2023.939f, 12.1616f};
			break;
		
		case 7:
			vVar0 = {-1275.378f, -815.4295f, 17.1148f};
			break;
		
		case 8:
			vVar0 = {-883.2906f, -2730.542f, 12.8285f};
			break;
		
		case 9:
			vVar0 = {269.6765f, -3016.279f, 5.7176f};
			break;
		
		case 10:
			vVar0 = {1561.402f, -2138.697f, 77.5275f};
			break;
		
		case 11:
			vVar0 = {-303.7892f, -2698.39f, 6.0003f};
			break;
		
		case 12:
			vVar0 = {507.2061f, -649.5859f, 24.7512f};
			break;
		
		case 13:
			vVar0 = {-525.8206f, -1775.87f, 21.3501f};
			break;
		
		case 14:
			vVar0 = {-291.6372f, -1352.556f, 31.3146f};
			break;
		
		case 15:
			vVar0 = {348.6436f, 324.428f, 104.3185f};
			break;
		
		case 16:
			vVar0 = {922.0838f, -1561.299f, 29.7475f};
			break;
		
		case 17:
			vVar0 = {763.7448f, -885.2086f, 25.0869f};
			break;
		
		case 18:
			vVar0 = {1043.884f, -2172.603f, 30.471f};
			break;
		
		case 19:
			vVar0 = {1001.659f, -2511.88f, 28.302f};
			break;
		
		case 20:
			vVar0 = {-263.138f, 194.3424f, 85.184f};
			break;
		
		case 21:
			vVar0 = {547.8112f, -1942.514f, 23.9851f};
			break;
		
		case 22:
			vVar0 = {88.9678f, -2216.882f, 6.0613f};
			break;
	}
	return vVar0;
}

bool func_170(int iParam0)
{
	if (iParam0 < 1 || iParam0 > 22)
	{
		return false;
	}
	return true;
}

bool func_171(int iParam0)
{
	int iVar0;
	
	if (func_170(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1587523[player_id() /*444*/].f_250.f_68[iVar0 /*2*/] == iParam0)
			{
				return true;
			}
			iVar0++;
		}
	}
	return false;
}

Vector3 func_172(int iParam0)
{
	Vector3 vVar0;
	
	if (does_blip_exist(Global_2412879[iParam0]))
	{
		vVar0 = {get_blip_coords(Global_2412879[iParam0])};
	}
	else if (does_blip_exist(Global_2412879.f_33[iParam0]))
	{
		vVar0 = {get_blip_coords(Global_2412879.f_33[iParam0])};
	}
	if (vmag(vVar0) > 0f)
	{
		return vVar0;
	}
	return func_164(iParam0);
}

void func_173(auto uParam0, auto uParam1)
{
	int iVar0;
	float fVar1;
	Vector3 vVar2;
	Vector3 vVar5;
	float fVar8;
	int iVar9;
	
	iVar0 = -1;
	fVar1 = 1E+07f;
	vVar2 = {func_172(player_id())};
	vVar2.z = 0f;
	iVar9 = -1;
	iVar9 = 87;
	while (iVar9 <= 90)
	{
		if (func_174(iVar9))
		{
			vVar5 = {Global_1049163[iVar9 /*1924*/].f_3[0 /*3*/]};
			vVar5.z = 0f;
			fVar8 = vdist(vVar2, vVar5);
			if (fVar8 < fVar1)
			{
				fVar1 = fVar8;
				iVar0 = iVar9;
			}
		}
		iVar9++;
	}
	*uParam0 = iVar0;
	*uParam1 = fVar1;
}

bool func_174(int iParam0)
{
	int iVar0;
	
	if (iParam0 > 0)
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (func_175(iVar0, -1) == iParam0)
			{
				return true;
			}
			iVar0++;
		}
		if (iParam0 == func_175(99, -1))
		{
			return true;
		}
	}
	return false;
}

int func_175(int iParam0, int iParam1)
{
	auto uVar0;
	
	uVar0 = iParam1;
	if (iParam1 == -1)
	{
		uVar0 = func_6();
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

Vector3 func_176(int iParam0)
{
	if (func_177(iParam0))
	{
		switch (iParam0)
		{
			case 68:
				return -1582.094f, -569.5358f, 115.3326f;
				break;
			
			case 69:
				return -1391.652f, -477.7002f, 90.25584f;
				break;
			
			case 70:
				return -144.5361f, -593.3737f, 210.7752f;
				break;
			
			case 71:
				return -75.06329f, -818.9553f, 325.1753f;
				break;
			}
	}
	return 0f, 0f, -1000f;
}

bool func_177(int iParam0)
{
	if (((iParam0 == 68 || iParam0 == 69) || iParam0 == 70) || iParam0 == 71)
	{
		return true;
	}
	return false;
}

int func_178(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 61:
		case 83:
		case 84:
		case 85:
			return 1;
			break;
		
		case 5:
		case 6:
			return 2;
			break;
		
		case 7:
		case 34:
		case 62:
			return 3;
			break;
		
		case 35:
		case 36:
		case 37:
			return 4;
			break;
		
		case 38:
		case 39:
		case 65:
			return 5;
			break;
		
		case 40:
		case 41:
		case 63:
			return 6;
			break;
		
		case 42:
		case 43:
		case 64:
			return 7;
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
		
		case 11:
			return 11;
			break;
		
		case 12:
			return 12;
			break;
		
		case 13:
			return 13;
			break;
		
		case 14:
			return 14;
			break;
		
		case 15:
			return 15;
			break;
		
		case 16:
			return 16;
			break;
		
		case 17:
			return 17;
			break;
		
		case 18:
			return 18;
			break;
		
		case 19:
			return 19;
			break;
		
		case 20:
			return 20;
			break;
		
		case 21:
			return 21;
			break;
		
		case 22:
			return 22;
			break;
		
		case 23:
			return 23;
			break;
		
		case 24:
			return 24;
			break;
		
		case 25:
			return 25;
			break;
		
		case 26:
			return 26;
			break;
		
		case 27:
			return 27;
			break;
		
		case 28:
			return 28;
			break;
		
		case 29:
			return 29;
			break;
		
		case 30:
			return 30;
			break;
		
		case 31:
			return 31;
			break;
		
		case 32:
			return 32;
			break;
		
		case 33:
			return 33;
			break;
		
		case 44:
			return 34;
			break;
		
		case 45:
			return 35;
			break;
		
		case 46:
			return 36;
			break;
		
		case 47:
			return 37;
			break;
		
		case 48:
			return 38;
			break;
		
		case 49:
			return 39;
			break;
		
		case 50:
			return 40;
			break;
		
		case 51:
			return 41;
			break;
		
		case 52:
			return 42;
			break;
		
		case 53:
			return 43;
			break;
		
		case 54:
			return 44;
			break;
		
		case 55:
			return 45;
			break;
		
		case 56:
			return 46;
			break;
		
		case 57:
			return 47;
			break;
		
		case 58:
			return 48;
			break;
		
		case 59:
			return 49;
			break;
		
		case 60:
			return 50;
			break;
		
		case 66:
			return 51;
			break;
		
		case 67:
			return 52;
			break;
		
		case 68:
			return 53;
			break;
		
		case 69:
			return 54;
			break;
		
		case 70:
			return 55;
			break;
		
		case 71:
			return 56;
			break;
		
		case 72:
			return 57;
			break;
		
		case 73:
			return 58;
			break;
		
		case 74:
			return 59;
			break;
		
		case 75:
			return 60;
			break;
		
		case 76:
			return 61;
			break;
		
		case 77:
			return 62;
			break;
		
		case 78:
			return 63;
			break;
		
		case 79:
			return 64;
			break;
		
		case 80:
			return 65;
			break;
		
		case 81:
			return 66;
			break;
		
		case 82:
			return 67;
			break;
		
		case 87:
			return 68;
			break;
		
		case 88:
			return 69;
			break;
		
		case 89:
			return 70;
			break;
		
		case 90:
			return 71;
			break;
	}
	return 0;
}

int func_179(int iParam0)
{
	if (func_129(iParam0, 0, 1))
	{
		return func_180(func_164(iParam0));
	}
	return -1;
}

int func_180(Vector3 vParam0)
{
	int iVar0;
	
	iVar0 = 87;
	while (iVar0 <= 90)
	{
		if (func_181(vParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_181(Vector3 vParam0, int iParam1)
{
	switch (iParam3)
	{
		case 87:
			if (is_point_in_angled_area(vParam0, -1588.118f, -581.678f, 109.549f, -1556.568f, -559.578f, 127.049f, 38.1f, 0, true))
			{
				return true;
			}
			break;
		
		case 88:
			if (is_point_in_angled_area(vParam0, -1411.432f, -480.399f, 80.276f, -1348.382f, -473.199f, 98.801f, 37.65f, 0, true))
			{
				return true;
			}
			break;
		
		case 89:
			if (is_point_in_angled_area(vParam0, -183.232f, -625.231f, 164.81f, -92.457f, -555.531f, 221.735f, 117.125f, 0, true))
			{
				return true;
			}
			break;
		
		case 90:
			if (is_point_in_angled_area(vParam0, -97.577f, -810.65f, 290.012f, -51.802f, -827.175f, 331.587f, 44.15f, 0, true))
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_182(int iParam0)
{
	int iVar0;
	
	iVar0 = func_179(iParam0);
	if (iVar0 != -1)
	{
		return true;
	}
	return false;
}

int func_183()
{
	int iVar0;
	
	iVar0 = 5000;
	if (func_250())
	{
		iVar0 = 3000;
	}
	return iVar0;
}

int func_184(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (_0xC7827959479DCC78(iParam0))
		{
			network_request_control_of_entity(iParam0);
			return network_has_control_of_entity(iParam0);
		}
	}
	return false;
}

bool func_185()
{
	int iVar0;
	
	if (iLocal_1128)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1166))
		{
			if (!is_entity_in_air(iLocal_1166))
			{
				if (is_vehicle_on_all_wheels(iLocal_1166))
				{
					iVar0 = absi(get_time_difference(NETWORK::GET_NETWORK_TIME(), iLocal_1129));
					if (iVar0 > 500)
					{
						return false;
					}
					return true;
				}
			}
		}
	}
	else
	{
		iLocal_1128 = 1;
	}
	iLocal_1129 = NETWORK::GET_NETWORK_TIME();
	return true;
}

void func_186()
{
	float fVar0;
	
	if (is_waypoint_active())
	{
		Local_125.f_10 = {get_blip_info_id_coord(get_first_blip_info_id(_get_blip_info_id_iterator()))};
		Local_125.f_10.f_2 = _0x8ABE8608576D9CE3(Local_125.f_10 - 25f, Local_125.f_10.f_1 - 25f, Local_125.f_10 + 25f, Local_125.f_10.f_1 + 25f);
		fVar0 = _0x3599D741C9AC6310(Local_125.f_10 - 25f, Local_125.f_10.f_1 - 25f, Local_125.f_10 + 25f, Local_125.f_10.f_1 + 25f);
		if (Local_125.f_10.f_2 - fVar0 < 20f)
		{
			Local_125.f_10.f_2 += 10f;
		}
		else if (Local_125.f_10.f_2 - fVar0 > 30f && Local_125.f_10.f_2 - fVar0 < 70f)
		{
			Local_125.f_10.f_2 += 40f;
		}
		func_187(0);
		func_156(Local_125.f_10);
	}
}

void func_187(int iParam0)
{
	GAMEPLAY::CLEAR_BIT(&(Global_2460486.f_268), iParam0);
}

int func_188(auto uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_83(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_75(sParam2, iParam3, 0);
}

bool func_189()
{
	Vector3 vVar0;
	
	if (!func_192())
	{
		if (ENTITY::DOES_ENTITY_EXIST(net_to_ped(Local_125.f_4)))
		{
			if (!ENTITY::IS_ENTITY_DEAD(net_to_ped(Local_125.f_4), 0))
			{
				vVar0 = {ENTITY::GET_ENTITY_COORDS(net_to_ped(Local_125.f_4), 0)};
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vVar0, 50f, 50f, 150f, false, true, 0) && !func_190(player_id()))
				{
					return true;
				}
			}
		}
	}
	return false;
}

bool func_190(int iParam0)
{
	if (func_191(Global_1587523[iParam0 /*444*/].f_250.f_9))
	{
		return true;
	}
	return false;
}

bool func_191(int iParam0)
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

bool func_192()
{
	if (Global_15712 != 0 || is_scripted_conversation_ongoing())
	{
		return true;
	}
	return false;
}

auto func_193(auto uParam0)
{
	return *uParam0.f_1;
}

void func_194()
{
	switch (Local_125.f_23)
	{
		case 0:
			if (GAMEPLAY::IS_BIT_SET(Local_125.f_1, 8) || (!func_135(iLocal_1166) && is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), iLocal_1166, 0)))
			{
				func_197();
				Local_125.f_23 = 1;
			}
			break;
		
		case 1:
			if (!func_135(iLocal_1166))
			{
				if (get_vehicle_number_of_passengers(iLocal_1166) > 0)
				{
					Local_125.f_23 = 2;
				}
			}
			break;
		
		case 2:
			if (GAMEPLAY::IS_BIT_SET(Local_125.f_1, 12))
			{
				if (is_waypoint_active())
				{
					Local_125.f_23 = 3;
					func_109(&uLocal_1146, 0, 0);
				}
			}
			else if (GAMEPLAY::IS_BIT_SET(Local_125.f_1, 9))
			{
				Local_125.f_23 = 3;
				func_109(&uLocal_1146, 0, 0);
			}
			else if (GAMEPLAY::IS_BIT_SET(Local_125.f_1, 10))
			{
				Local_125.f_23 = 5;
			}
			break;
		
		case 3:
			if (!func_135(iLocal_1166))
			{
				if (get_vehicle_number_of_passengers(iLocal_1166) <= 0)
				{
					Local_125.f_23 = 1;
				}
				else if (GAMEPLAY::IS_BIT_SET(Local_125.f_1, 10))
				{
					Local_125.f_23 = 5;
				}
				else if (!is_waypoint_active() || func_154(0))
				{
					Local_125.f_10 = {0f, 0f, 0f};
					GAMEPLAY::CLEAR_BIT(&(Local_125.f_1), 10);
					GAMEPLAY::CLEAR_BIT(&(Local_125.f_1), 9);
					Local_125.f_23 = 2;
				}
			}
			break;
		
		case 4:
			if (Global_2443115.f_26)
			{
				if (func_195())
				{
					func_395(0);
				}
			}
			break;
		
		case 5:
			if (!func_135(iLocal_1166))
			{
				if (get_vehicle_number_of_passengers(iLocal_1166) <= 0 && !_0x291E373D483E7EE7(iLocal_1166))
				{
					if (func_129(Local_125.f_5, 1, 1) && !is_entity_in_air(get_player_ped(Local_125.f_5)))
					{
						if (AI::GET_SCRIPT_TASK_STATUS(get_player_ped(Local_125.f_5), -275944640) != 1 && AI::GET_SCRIPT_TASK_STATUS(get_player_ped(Local_125.f_5), -275944640) != 0)
						{
							Local_125.f_23 = 6;
						}
					}
				}
				else if (!is_waypoint_active() || func_154(0))
				{
					Local_125.f_10 = {0f, 0f, 0f};
					GAMEPLAY::CLEAR_BIT(&(Local_125.f_1), 10);
					GAMEPLAY::CLEAR_BIT(&(Local_125.f_1), 9);
					Local_125.f_23 = 2;
				}
			}
			break;
		
		case 6:
			break;
	}
}

int func_195()
{
	int iVar0;
	
	if (!network_is_host_of_this_script())
	{
		return 1;
	}
	if (network_does_network_id_exist(Local_125.f_4))
	{
		if (!network_has_control_of_network_id(Local_125.f_4))
		{
			network_request_control_of_network_id(Local_125.f_4);
		}
		else
		{
			func_196(&(Local_125.f_4));
			iVar0 = 1;
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

void func_196(auto uParam0)
{
	int iVar0;
	
	if (network_does_network_id_exist(*uParam0))
	{
		if (!network_has_control_of_network_id(*uParam0))
		{
		}
	}
	if (network_ENTITY::DOES_ENTITY_EXIST_with_network_id(*uParam0))
	{
		iVar0 = net_to_ent(*uParam0);
		delete_entity(&iVar0);
	}
}

void func_197()
{
	int iVar0;
	
	if (network_is_host_of_this_script() && !is_help_message_being_displayed())
	{
		iVar0 = func_4(1183, -1, 0);
		if (!GAMEPLAY::IS_BIT_SET(iVar0, 16))
		{
			if (!func_135(iLocal_1166) && !func_134(Local_125.f_4))
			{
				if (is_ped_in_vehicle(net_to_ped(Local_125.f_4), iLocal_1166, 0) && !is_ped_being_jacked(net_to_ped(Local_125.f_4)))
				{
					_set_text_component_format("HTX_HELPN");
					if (func_199())
					{
						_0x39BBF623FC803EAC(13);
						_add_text_component_item_string("GB_HELI_BLIP");
					}
					else
					{
						_0x39BBF623FC803EAC(iLocal_257);
						_add_text_component_item_string("HTX_HELPB");
					}
					_display_help_text_from_string_label(0, 0, true, -1);
					GAMEPLAY::SET_BIT(&iVar0, 16);
					func_198(1183, iVar0, -1, 1);
				}
			}
		}
	}
}

void func_198(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2469339[iParam0 /*5*/][func_5(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

bool func_199()
{
	if (iLocal_1166 == Global_2460486.f_280 || iLocal_1166 == Global_2460486.f_4981)
	{
		return true;
	}
	return false;
}

void func_200()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	GAMEPLAY::CLEAR_BIT(&(Local_125.f_1), 9);
	iVar0 = false;
	while (iVar0 < _network_get_num_participants_host())
	{
		if (network_is_participant_active(int_to_participantindex(iVar0)))
		{
			iVar1 = network_get_player_index(int_to_participantindex(iVar0));
			if (func_129(iVar1, 1, 1))
			{
				if (!func_135(iLocal_1166))
				{
					if (!GAMEPLAY::IS_BIT_SET(Local_125.f_1, 8))
					{
						if (ENTITY::IS_ENTITY_AT_COORD(iLocal_1166, Local_125.f_6, 7.5f * 1.5f, 7.5f * 1.5f, 7.5f * 1.5f, false, true, 0) && !func_185())
						{
							GAMEPLAY::SET_BIT(&(Local_125.f_1), 8);
						}
					}
					if (!GAMEPLAY::IS_BIT_SET(Local_125.f_1, 10))
					{
						if (ENTITY::IS_ENTITY_AT_COORD(iLocal_1166, Local_125.f_10, 7.5f * 1.5f, 7.5f * 1.5f, 10f * 2f, false, true, 0))
						{
							GAMEPLAY::SET_BIT(&(Local_125.f_1), 10);
						}
					}
					if (!GAMEPLAY::IS_BIT_SET(Local_125.f_1, 9))
					{
						if (GAMEPLAY::IS_BIT_SET(vLocal_158[iVar0 /*3*/].f_1, 6))
						{
							GAMEPLAY::SET_BIT(&(Local_125.f_1), 9);
							GAMEPLAY::CLEAR_BIT(&(vLocal_158[iVar0 /*3*/].f_1), 6);
						}
					}
					if (Local_125.f_24 != 4)
					{
						if (GAMEPLAY::IS_BIT_SET(vLocal_158[iVar0 /*3*/].f_1, 5))
						{
							Local_125.f_24 = 4;
							Local_125.f_13 = {100000f, 100000f, 100000f};
							GAMEPLAY::CLEAR_BIT(&(vLocal_158[iVar0 /*3*/].f_1), 5);
						}
					}
					if (Local_125.f_24 != 5)
					{
						if (GAMEPLAY::IS_BIT_SET(vLocal_158[iVar0 /*3*/].f_1, 8))
						{
							if (func_219(iVar1) && func_205(iVar1))
							{
								if (iLocal_104 == -1)
								{
									iVar2 = func_178(Global_1587523[iVar1 /*444*/].f_250[5]);
									Local_125.f_29 = {func_176(iVar2) + Vector(15f, 0f, 0f)};
								}
								else
								{
									iVar3 = iLocal_104;
									func_202(func_203(iVar3), &(Local_125.f_29));
									Local_125.f_29 = {Local_125.f_29 + Vector(40f, 0f, 0f)};
								}
								Local_125.f_24 = 5;
								Local_125.f_23 = 4;
								Local_125.f_28 = iVar1;
								func_156(Local_125.f_29);
							}
							else if (!ENTITY::IS_ENTITY_DEAD(iLocal_1166, 0) && !network_has_control_of_entity(iLocal_1166))
							{
								network_request_control_of_entity(iLocal_1166);
							}
							else
							{
								func_201();
								Local_125.f_23 = 2;
								Local_125.f_24 = 1;
								func_155();
								GAMEPLAY::CLEAR_BIT(&(Local_125.f_1), 9);
								GAMEPLAY::CLEAR_BIT(&(Local_125.f_1), 10);
								GAMEPLAY::CLEAR_BIT(&(Local_125.f_1), 12);
								if (is_waypoint_active())
								{
									_0xD8E694757BCEA8E9();
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
}

void func_201()
{
	int iVar0;
	
	iVar0 = iLocal_1166;
	if (ENTITY::IS_ENTITY_DEAD(iVar0, 0))
	{
		return;
	}
	if (network_has_control_of_entity(iVar0))
	{
		set_vehicle_doors_locked(iVar0, 1);
	}
}

void func_202(int iParam0, auto uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = {54.191f, -2569.248f, 5.0046f};
			break;
		
		case 1:
			*uParam1 = {-1083.054f, -1261.893f, 4.534f};
			break;
		
		case 2:
			*uParam1 = {896.3665f, -1035.749f, 34.1096f};
			break;
		
		case 3:
			*uParam1 = {247.473f, -1956.943f, 22.1908f};
			break;
		
		case 4:
			*uParam1 = {-424.828f, 185.825f, 79.775f};
			break;
		
		case 5:
			*uParam1 = {-1042.482f, -2023.516f, 12.1616f};
			break;
		
		case 6:
			*uParam1 = {-1268.119f, -812.2741f, 16.1075f};
			break;
		
		case 7:
			*uParam1 = {-873.65f, -2735.948f, 12.9438f};
			break;
		
		case 8:
			*uParam1 = {274.5224f, -3015.413f, 4.6993f};
			break;
		
		case 9:
			*uParam1 = {1569.69f, -2129.792f, 77.3351f};
			break;
		
		case 10:
			*uParam1 = {-315.551f, -2698.654f, 6.5495f};
			break;
		
		case 11:
			*uParam1 = {499.81f, -651.982f, 23.909f};
			break;
		
		case 12:
			*uParam1 = {-528.5296f, -1784.573f, 20.5853f};
			break;
		
		case 13:
			*uParam1 = {-295.8596f, -1353.238f, 30.3138f};
			break;
		
		case 14:
			*uParam1 = {349.839f, 328.889f, 103.272f};
			break;
		
		case 15:
			*uParam1 = {926.2818f, -1560.311f, 29.7404f};
			break;
		
		case 16:
			*uParam1 = {759.566f, -909.466f, 24.244f};
			break;
		
		case 17:
			*uParam1 = {1037.813f, -2173.062f, 30.5334f};
			break;
		
		case 18:
			*uParam1 = {1019.116f, -2511.69f, 27.302f};
			break;
		
		case 19:
			*uParam1 = {-245.3405f, 203.3286f, 82.818f};
			break;
		
		case 20:
			*uParam1 = {539.346f, -1945.682f, 23.984f};
			break;
		
		case 21:
			*uParam1 = {96.1538f, -2216.4f, 5.1712f};
			break;
	}
}

int func_203(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 22)
	{
		if (func_204(iVar0) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_204(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 3;
			break;
		
		case 3:
			return 4;
			break;
		
		case 4:
			return 5;
			break;
		
		case 5:
			return 6;
			break;
		
		case 6:
			return 7;
			break;
		
		case 7:
			return 8;
			break;
		
		case 8:
			return 9;
			break;
		
		case 9:
			return 10;
			break;
		
		case 10:
			return 11;
			break;
		
		case 11:
			return 12;
			break;
		
		case 12:
			return 13;
			break;
		
		case 13:
			return 14;
			break;
		
		case 14:
			return 15;
			break;
		
		case 15:
			return 16;
			break;
		
		case 16:
			return 17;
			break;
		
		case 17:
			return 18;
			break;
		
		case 18:
			return 19;
			break;
		
		case 19:
			return 20;
			break;
		
		case 20:
			return 21;
			break;
		
		case 21:
			return 22;
			break;
	}
	return 0;
}

bool func_205(int iParam0)
{
	if ((!func_214(iParam0, 1) && !func_210(iParam0)) && func_206(iParam0))
	{
		return true;
	}
	return false;
}

bool func_206(int iParam0)
{
	if (iParam0 != func_8())
	{
		if (func_129(iParam0, 1, 1))
		{
			if (func_210(iParam0) && !func_207(iParam0))
			{
				return false;
			}
			if (func_139(iParam0, 21))
			{
				return false;
			}
			if (GAMEPLAY::IS_BIT_SET(Global_1587523[iParam0 /*444*/].f_250.f_7, 4))
			{
				return false;
			}
		}
	}
	return true;
}

bool func_207(int iParam0)
{
	if (func_208(iParam0) == 167 || func_208(iParam0) == 168)
	{
		return true;
	}
	return false;
}

int func_208(auto uParam0)
{
	if (func_209(uParam0, 0))
	{
		return Global_1610316[uParam0 /*174*/].f_10.f_28;
	}
	return -1;
}

bool func_209(auto uParam0, int iParam1)
{
	if (Global_1610316[uParam0 /*174*/].f_10.f_28 != -1 || (iParam1 && Global_1610316[uParam0 /*174*/].f_10.f_27 != -1))
	{
		return true;
	}
	return false;
}

bool func_210(int iParam0)
{
	if (func_213(iParam0))
	{
		return true;
	}
	if (func_211(iParam0))
	{
		return true;
	}
	return false;
}

int func_211(auto uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return func_212(uParam0, 9);
	}
	return false;
}

int func_212(auto uParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_1610316[uParam0 /*174*/].f_10.f_4, iParam1);
}

int func_213(auto uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return GAMEPLAY::IS_BIT_SET(Global_1610316[iVar0 /*174*/].f_1, false);
	}
	return false;
}

int func_214(int iParam0, int iParam1)
{
	if (Global_1312447 != 0)
	{
		return func_218(iParam0) != 0;
	}
	return func_215(iParam0, iParam1);
}

bool func_215(int iParam0, int iParam1)
{
	if (iParam1)
	{
		if (func_216(iParam0))
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

int func_216(auto uParam0)
{
	return func_217(uParam0);
}

int func_217(auto uParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1587523[uParam0 /*444*/].f_13.f_1, false);
}

int func_218(int iParam0)
{
	if (func_129(iParam0, 0, 1))
	{
		return Global_2418472[iParam0 /*313*/].f_1;
	}
	return 0;
}

int func_219(int iParam0)
{
	if (iParam0 == -1)
	{
		return false;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1587523[iParam0 /*444*/].f_250.f_7, 26);
}

bool func_220()
{
	int iVar0;
	
	if (func_108(&uLocal_1122, 5000, 0))
	{
		if (can_register_mission_entities(1, 1, 0, 0))
		{
			if (func_241(func_242()) && func_241(func_240()))
			{
				if (func_159(&iVar0))
				{
					if (func_223(iVar0) && func_221())
					{
						func_187(0);
						func_156(Local_125.f_6);
						Local_125.f_13 = {100000f, 100000f, 100000f};
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_221()
{
	if ((!network_does_network_id_exist(Local_125.f_4) && func_241(func_240())) && network_does_network_id_exist(Local_125.f_3))
	{
		if (!func_135(iLocal_1166))
		{
			if (func_222(&(Local_125.f_4), Local_125.f_3, 22, func_240(), -1, 1, 1, 1))
			{
				set_blocking_of_non_temporary_events(net_to_ped(Local_125.f_4), true);
				set_ped_random_component_variation(net_to_ped(Local_125.f_4), 0);
				set_ped_keep_task(net_to_ped(Local_125.f_4), true);
				PED::SET_PED_COMBAT_ATTRIBUTES(net_to_ped(Local_125.f_4), 17, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(net_to_ped(Local_125.f_4), 5, false);
				set_ped_flee_attributes(net_to_ped(Local_125.f_4), 2, true);
				set_ped_flee_attributes(net_to_ped(Local_125.f_4), 1024, true);
				set_ped_flee_attributes(net_to_ped(Local_125.f_4), 2048, true);
				set_ped_flee_attributes(net_to_ped(Local_125.f_4), 32768, false);
				PED::SET_PED_CONFIG_FLAG(net_to_ped(Local_125.f_4), 251, true);
				set_ped_can_be_dragged_out(net_to_ped(Local_125.f_4), 0);
				ENTITY::SET_ENTITY_HEALTH(net_to_ped(Local_125.f_4), round(200f * Global_262145.f_151));
				if (func_142())
				{
					func_107(&uLocal_957, 3, net_to_ped(Local_125.f_4), "FM_Pilot", 0, 1);
				}
				else
				{
					func_10(1);
					func_107(&uLocal_957, 2, net_to_ped(Local_125.f_4), "EXEC_PILOT", 0, 1);
				}
			}
		}
	}
	if (!network_does_network_id_exist(Local_125.f_4))
	{
		return false;
	}
	set_model_as_no_longer_needed(func_240());
	return true;
}

bool func_222(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (!can_register_mission_peds(1))
	{
		return false;
	}
	if (!network_does_network_id_exist(iParam1))
	{
		return false;
	}
	if (!is_vehicle_driveable(net_to_veh(iParam1), 0))
	{
		return false;
	}
	*uParam0 = ped_to_net(PED::CREATE_PED_inside_vehicle(net_to_veh(iParam1), iParam2, iParam3, iParam4, iParam6, iParam5));
	if (network_does_network_id_exist(*uParam0))
	{
		_0x3910051CCECDB00C(net_to_ped(*uParam0), iParam7);
		if (_0xC7827959479DCC78(net_to_ped(*uParam0)))
		{
			if (iParam5)
			{
				set_network_id_exists_on_all_machines(*uParam0, 1);
			}
		}
		return true;
	}
	return false;
}

bool func_223(int iParam0)
{
	Vector3 vVar0;
	Vector3 fVar3;
	
	if (!network_does_network_id_exist(Local_125.f_3))
	{
		if (func_241(func_242()))
		{
			func_237(&vVar0, &fVar3, iParam0);
			if (func_227(vVar0, 6f, 1f, 1f, 10f, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0) || iParam0)
			{
				if (Local_125.f_9 > -1f)
				{
					fVar3 = Local_125.f_9;
				}
				if (func_226(&(Local_125.f_3), func_242(), vVar0, fVar3, 1, 1, 1, 0, 1, 1))
				{
					iLocal_1166 = net_to_veh(Local_125.f_3);
					set_vehicle_engine_on(iLocal_1166, true, 1, 0);
					if (!iParam0)
					{
						set_vehicle_forward_speed(iLocal_1166, 30f);
					}
					set_heli_blades_full_speed(iLocal_1166);
					set_vehicle_engine_can_degrade(iLocal_1166, false);
					_0x25367DE49D64CF16(iLocal_1166, 1);
					_0xE6F13851780394DA(iLocal_1166, 0f);
					if (decor_is_registered_as_type("HeliTaxi", 2))
					{
						decor_set_bool(iLocal_1166, "HeliTaxi", 1);
					}
					func_146(1);
					func_224();
					if (func_250())
					{
					}
				}
			}
		}
	}
	if (!network_does_network_id_exist(Local_125.f_3))
	{
		return false;
	}
	set_model_as_no_longer_needed(func_242());
	return true;
}

void func_224()
{
	func_225(Global_2460486.f_789, iLocal_1166);
}

void func_225(int iParam0, int iParam1)
{
	if (get_vehicle_livery_count(iParam1) > 0)
	{
		set_vehicle_livery(iParam1, 0);
		if (iParam0 == 0)
		{
		}
	}
}

bool func_226(auto uParam0, int iParam1, Vector3 vParam2, Vector3 fParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	int iVar0;
	
	if (!can_register_mission_vehicles(1))
	{
		return false;
	}
	if (iParam11)
	{
		clear_area_of_vehicles(vParam2, 1f, 0, 0, 1, 1, true);
	}
	iVar0 = create_vehicle(iParam1, vParam2, fParam5, iParam7, iParam6);
	*uParam0 = veh_to_net(iVar0);
	if (network_does_network_id_exist(*uParam0))
	{
		_0x3910051CCECDB00C(iVar0, iParam10);
		if (_0xC7827959479DCC78(iVar0))
		{
			if (iParam8)
			{
				set_network_id_exists_on_all_machines(*uParam0, 1);
			}
			else
			{
				set_network_id_exists_on_all_machines(*uParam0, 0);
			}
		}
		set_vehicle_is_stolen(iVar0, iParam9);
		return true;
	}
	return false;
}

bool func_227(Vector3 vParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, float fParam12, int iParam13, float fParam14, int iParam15, int iParam16)
{
	Global_2404956 = 0;
	if (fParam3 > 0f)
	{
		if (is_any_vehicle_near_point(vParam0, fParam3))
		{
			return false;
		}
	}
	if (fParam4 > 0f)
	{
		if (is_any_ped_near_point(vParam0.x, vParam0.y, vParam0.z + 1f, fParam4) || is_any_ped_near_point(vParam0, fParam4))
		{
			return false;
		}
	}
	if (fParam5 > 0f)
	{
		if (is_any_object_near_point(vParam0, fParam5, iParam18))
		{
			return false;
		}
	}
	Global_2404956++;
	if (iParam13)
	{
		if (get_number_of_fires_in_range(vParam0, 2.5f) > 0)
		{
			return false;
		}
	}
	Global_2404956++;
	if (fParam14 > 0f)
	{
		if (func_232(vParam0, fParam14, 1, 1, iParam15, iParam17, 0, iParam15))
		{
			return false;
		}
	}
	Global_2404956++;
	if (iParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_228(vParam0, fParam6, iParam7, iParam9, fParam10, iParam11, iParam12, fParam16, iParam17))
			{
				return false;
			}
		}
	}
	Global_2404956++;
	return true;
}

bool func_228(Vector3 vParam0, float fParam1, int iParam2, int iParam3, float fParam4, int iParam5, int iParam6, float fParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !iParam7)
	{
		if (func_129(player_id(), 1, 1))
		{
			if (!is_screen_faded_out())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(func_164(player_id()), vParam0, 1) <= fVar2 + fParam3)
				{
					if (CAM::IS_SPHERE_VISIBLE(vParam0, fParam3))
					{
						return true;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_129(iVar1, 1, 1))
		{
			if (!func_230(iVar1, 0) && _0x9DE986FC9A87C474(player_id(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != player_id()))
				{
					if ((func_229(iVar1) || !iParam10) && !Global_2418472[iVar1 /*313*/].f_255)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!get_player_team(iVar1) == -1)
							{
								if (get_player_team(iVar1) == get_player_team(player_id()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!iParam7)
						{
							if ((iParam5 || (iParam5 == 0 && get_player_team(iVar1) != get_player_team(player_id()))) || get_player_team(iVar1) == -1)
							{
								if (INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(func_164(iVar1), vParam0, 1) <= fVar2 + fParam3)
								{
									if (CAM::IS_SPHERE_VISIBLE_to_player(iVar1, vParam0, fParam3))
									{
										return true;
									}
								}
							}
						}
						else if (get_player_team(iVar1) != iParam8 || get_player_team(iVar1) == -1)
						{
							if (INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(func_164(iVar1), vParam0, 1) <= fVar2 + fParam3)
							{
								if (CAM::IS_SPHERE_VISIBLE_to_player(iVar1, vParam0, fParam3))
								{
									return true;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_229(int iParam0)
{
	if (is_entity_visible_to_script(get_player_ped(iParam0)) || Global_2418472[iParam0 /*313*/].f_241)
	{
		return true;
	}
	return false;
}

int func_230(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == player_id())
	{
		iVar0 = func_231(-1, 0) == 8;
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

int func_231(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_6();
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

bool func_232(Vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, auto uParam7)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && player_id() != iVar1) || iParam8 == 0)
		{
			if (func_129(iVar1, iParam4, iParam5))
			{
				if (_0x9DE986FC9A87C474(player_id(), iVar1))
				{
					if (!iParam7 || (!PED::IS_PED_INJURED(get_player_ped(iVar1)) && func_229(iVar1)))
					{
						if ((!iParam6 || (iParam6 == 1 && get_player_team(player_id()) != get_player_team(iVar1))) || get_player_team(player_id()) == -1)
						{
							if (((get_player_team(player_id()) == -1 && uParam9) && iParam6) && func_233(iVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(get_player_ped(iVar1)))
							{
								if (INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(func_164(iVar1), vParam0, 1) < fParam3)
								{
									return true;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_233(int iParam0)
{
	if (func_236(player_id(), iParam0))
	{
		return true;
	}
	Global_2459440 = {func_235(iParam0)};
	if (network_is_friend(&Global_2459440))
	{
		return true;
	}
	if (func_234(player_id(), iParam0))
	{
		return true;
	}
	return false;
}

bool func_234(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_9(iParam0);
	if (!iVar0 == func_8())
	{
		if (iVar0 == func_9(iParam1))
		{
			return true;
		}
	}
	return false;
}

struct<13> func_235(int iParam0)
{
	struct<13> Var0;
	
	network_handle_from_player(iParam0, &Var0, 13);
	return Var0;
}

bool func_236(int iParam0, int iParam1)
{
	if (_network_player_is_in_clan())
	{
		Global_2459440 = {func_235(iParam0)};
		Global_2459453 = {func_235(iParam1)};
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

void func_237(auto uParam0, auto uParam1, int iParam2)
{
	float fVar0;
	float fVar1;
	
	if (iParam2)
	{
		*uParam0 = {Local_125.f_6};
		*uParam1 = Local_125.f_9;
		fVar0 = _0x8ABE8608576D9CE3(*uParam0, *uParam0.f_1, *uParam0, *uParam0.f_1);
		if (fVar0 < Local_125.f_6.f_2 + 100f)
		{
			fVar0 = Local_125.f_6.f_2 + 100f;
		}
		*uParam0.f_2 = fVar0;
	}
	else
	{
		*uParam0 = {func_238(Local_125.f_6, 140f, 180f, 200f / 2f)};
		*uParam1 = get_heading_from_vector_2d(Local_125.f_6 - *uParam0, Local_125.f_6.f_1 - *uParam0.f_1);
		fVar1 = _0x8ABE8608576D9CE3(*uParam0 - 180f, *uParam0.f_1 - 180f, *uParam0 + 180f, *uParam0.f_1 + 180f);
		if (fVar1 < Local_125.f_6.f_2 + 100f)
		{
			fVar1 = Local_125.f_6.f_2 + 100f;
		}
		*uParam0.f_2 = fVar1;
	}
}

Vector3 func_238(Vector3 vParam0, float fParam1, float fParam2, float fParam3)
{
	Vector3 vVar0;
	float fVar3;
	
	vVar0 = {get_random_float_in_range(-1f, 1f), get_random_float_in_range(-1f, 1f), 0f};
	fVar3 = fParam5 / 2f;
	vVar0 = {func_239(vVar0, get_random_float_in_range(fParam3, fParam4))};
	vVar0.z = get_random_float_in_range(-fVar3, fVar3);
	return vParam0 + vVar0;
}

Vector3 func_239(Vector3 vParam0, float fParam1)
{
	float fVar0;
	
	if (fParam3 == 0f)
	{
		return 0f, 0f, 0f;
	}
	fVar0 = vmag(vParam0);
	if (fVar0 != 0f)
	{
		return vParam0 * Vector(fParam3 / fVar0, fParam3 / fVar0, fParam3 / fVar0);
	}
	return 0f, 0f, 0f;
}

int func_240()
{
	if (func_250())
	{
		return 431423238;
	}
	return joaat("s_m_y_pilot_01");
}

int func_241(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

int func_242()
{
	if (func_250())
	{
		return joaat("supervolito");
	}
	return joaat("maverick");
}

void func_243()
{
	if (does_blip_exist(iLocal_256))
	{
		if (func_246(iLocal_1166, iLocal_256, 1))
		{
			set_blip_name_from_text_file(iLocal_256, "HTX_BLIP");
			iLocal_257 = 1;
			func_244(&iLocal_256, iLocal_257);
		}
	}
}

void func_244(int iParam0, int iParam1)
{
	if (does_blip_exist(*iParam0))
	{
		set_blip_colour(*iParam0, func_245(iParam1));
	}
}

int func_245(int iParam0)
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

bool func_246(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = get_blip_sprite(iParam1);
	if (func_249(iParam0, iParam2))
	{
		if (!iVar0 == func_248(iVar0))
		{
			set_blip_sprite(iParam1, func_248(iVar0));
			return true;
		}
	}
	else if (!iVar0 == func_247(iVar0))
	{
		set_blip_sprite(iParam1, func_247(iVar0));
		return true;
	}
	return false;
}

int func_247(int iParam0)
{
	switch (iParam0)
	{
		case 64:
			return 422;
			break;
	}
	return iParam0;
}

int func_248(int iParam0)
{
	switch (iParam0)
	{
		case 422:
			return 64;
			break;
	}
	return iParam0;
}

bool func_249(int iParam0, int iParam1)
{
	if (((!ENTITY::IS_ENTITY_DEAD(iParam0, 0) && (!is_entity_in_air(iParam0) && is_vehicle_on_all_wheels(iParam0))) && vmag(get_entity_velocity(iParam0)) < 0.5f) && func_133(iParam0, iParam1, iParam1, 0, 0, 0))
	{
		return true;
	}
	return false;
}

bool func_250()
{
	if (Global_2460486.f_789 > -1)
	{
		return true;
	}
	return false;
}

void func_251()
{
	if (iLocal_1148)
	{
		if (!iLocal_1149)
		{
			if (func_184(iLocal_1166))
			{
				ENTITY::SET_ENTITY_PROOFS(iLocal_1166, false, false, false, true, false, false, 0, false);
				iLocal_1149 = 1;
			}
		}
	}
	else if (iLocal_1149)
	{
		if (func_184(iLocal_1166))
		{
			ENTITY::SET_ENTITY_PROOFS(iLocal_1166, false, false, false, false, false, false, 0, false);
			iLocal_1149 = 0;
		}
	}
}

bool func_252(auto uParam0)
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

void func_253(auto uParam0)
{
	if (!*uParam0.f_1)
	{
		if (network_is_host_of_this_script())
		{
			func_109(uParam0, 0, 0);
		}
	}
}

void func_254()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Local_125.f_23 == 6)
	{
		vLocal_158[participant_id_to_int() /*3*/].f_2 = 6;
	}
	iVar0 = 0;
	iVar1 = false;
	iLocal_101 = 0;
	switch (vLocal_158[participant_id_to_int() /*3*/].f_2)
	{
		case 0:
			if (Local_125.f_23 > 0)
			{
				vLocal_158[participant_id_to_int() /*3*/].f_2 = 1;
			}
			break;
		
		case 1:
			if (!func_135(iLocal_1166))
			{
				func_380();
				func_362();
				func_361();
				if (func_129(player_id(), 1, 1))
				{
					if (is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), iLocal_1166, 0))
					{
						set_cinematic_button_active(false);
						func_360();
						give_delayed_weapon_to_ped(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute"), 1, 0);
						unk_0x4C2A9FDC22377075();
						vLocal_158[participant_id_to_int() /*3*/].f_2 = 2;
						GAMEPLAY::CLEAR_BIT(&(vLocal_158[participant_id_to_int() /*3*/].f_1), false);
					}
				}
			}
			break;
		
		case 2:
			if (!func_135(iLocal_1166))
			{
				if (func_129(player_id(), 1, 1))
				{
					if (is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), iLocal_1166, 0))
					{
						func_359();
						func_358();
						unk_0x4C2A9FDC22377075();
						if (network_is_host_of_this_script() && func_357(1, 1))
						{
							if (is_waypoint_active())
							{
								if (_is_input_disabled(0))
								{
									if (is_control_just_pressed(0, 21))
									{
										iVar0 = 1;
									}
								}
								else if (is_control_just_pressed(2, 201))
								{
									iVar0 = 1;
								}
								if (iVar0 || GAMEPLAY::IS_BIT_SET(Local_125.f_1, 12))
								{
									GAMEPLAY::CLEAR_BIT(&(Local_125.f_1), 12);
									GAMEPLAY::CLEAR_BIT(&(Local_125.f_2), 4);
									vLocal_158[participant_id_to_int() /*3*/].f_2 = 3;
									GAMEPLAY::CLEAR_BIT(&(vLocal_158[participant_id_to_int() /*3*/].f_1), 5);
									GAMEPLAY::SET_BIT(&(vLocal_158[participant_id_to_int() /*3*/].f_1), 6);
								}
							}
							if (GAMEPLAY::IS_BIT_SET(iLocal_1167, 7) && iLocal_97 == 0)
							{
								if (_is_input_disabled(0))
								{
									if (is_control_just_pressed(0, 101))
									{
										iLocal_101 = 1;
									}
								}
								else if (is_control_just_pressed(2, 209))
								{
									iLocal_101 = 1;
								}
							}
						}
						if (Local_125.f_23 >= 5)
						{
							vLocal_158[participant_id_to_int() /*3*/].f_2 = 5;
						}
						if (Local_125.f_23 == 4)
						{
							vLocal_158[participant_id_to_int() /*3*/].f_2 = 4;
						}
					}
					else
					{
						vLocal_158[participant_id_to_int() /*3*/].f_2 = 1;
					}
				}
			}
			break;
		
		case 3:
			if (!func_135(iLocal_1166))
			{
				if (func_129(player_id(), 1, 1))
				{
					if (is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), iLocal_1166, 0))
					{
						func_359();
						unk_0x4C2A9FDC22377075();
						if ((network_is_host_of_this_script() && func_357(1, 1)) && AI::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 1785177548) != 1)
						{
							if (_is_input_disabled(0))
							{
								if (is_control_just_pressed(0, 36))
								{
									iVar1 = true;
								}
							}
							else if (is_control_just_pressed(2, 202))
							{
								iVar1 = true;
							}
							if (iVar1)
							{
								vLocal_158[participant_id_to_int() /*3*/].f_2 = 2;
								GAMEPLAY::SET_BIT(&(vLocal_158[participant_id_to_int() /*3*/].f_1), 5);
							}
							if (_is_input_disabled(0))
							{
								if (is_control_just_pressed(0, 101))
								{
									iLocal_101 = 1;
								}
							}
							else if (is_control_just_pressed(2, 209))
							{
								iLocal_101 = 1;
							}
						}
						if (Local_125.f_23 >= 5)
						{
							vLocal_158[participant_id_to_int() /*3*/].f_2 = 5;
						}
						else if (Local_125.f_23 == 2)
						{
							GAMEPLAY::CLEAR_BIT(&(Local_125.f_1), 9);
							vLocal_158[participant_id_to_int() /*3*/].f_2 = 2;
						}
						else if (Local_125.f_23 == 4)
						{
							vLocal_158[participant_id_to_int() /*3*/].f_2 = 4;
						}
					}
					else
					{
						vLocal_158[participant_id_to_int() /*3*/].f_2 = 1;
					}
				}
			}
			break;
		
		case 4:
			if ((((((func_356("POD_CHAM_CIGAR") || func_356("POD_CHAM_WEB")) || func_356("POD_UNKNOWN")) || func_356("POD_CIGAR")) || func_356("POD_WEB")) || func_356("LUX_VEH_ACT_1ST")) || func_356("LUX_ACT_1ST_SW"))
			{
				clear_help(1);
			}
			if (GAMEPLAY::IS_BIT_SET(vLocal_158[participant_id_to_int() /*3*/].f_1, 8))
			{
				GAMEPLAY::CLEAR_BIT(&(vLocal_158[participant_id_to_int() /*3*/].f_1), 8);
			}
			if (!func_142())
			{
				if (!GAMEPLAY::IS_BIT_SET(Local_125.f_2, 17))
				{
					if (func_189())
					{
						func_10(1);
						func_107(&uLocal_957, 2, net_to_ped(Local_125.f_4), "EXEC_PILOT", 0, 1);
						if (iLocal_104 == -1)
						{
							func_90(&uLocal_957, "EXHELAU", "EXHEL_OFFICE", 12, 0, 0, 1);
						}
						else
						{
							func_90(&uLocal_957, "EXHELAU", "EXHEL_CUSTOM", 12, 0, 0, 1);
						}
						GAMEPLAY::SET_BIT(&(Local_125.f_2), 17);
					}
				}
			}
			if ((Local_125.f_28 == player_id() && func_355()) && Local_125.f_27)
			{
				if (!GAMEPLAY::IS_BIT_SET(iLocal_255, 16))
				{
					if (!func_135(iLocal_1166))
					{
						if (func_129(player_id(), 1, 1))
						{
							if (is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), iLocal_1166, 0))
							{
								if (!func_354())
								{
									if (GAMEPLAY::IS_BIT_SET(Local_125.f_1, 15))
									{
										iVar2 = func_353(1);
										if (iVar2 > 0)
										{
											if (iLocal_104 == -1)
											{
												func_352(iVar2, player_id(), 0, Global_1587523[player_id() /*444*/].f_250[5]);
											}
											else
											{
												func_352(iVar2, player_id(), 1, iLocal_104);
											}
											GAMEPLAY::SET_BIT(&iLocal_255, 16);
										}
									}
								}
							}
						}
					}
				}
			}
			else if (!network_is_host_of_this_script())
			{
				func_395(0);
			}
			if (Local_125.f_23 == 2)
			{
				vLocal_158[participant_id_to_int() /*3*/].f_2 = 2;
				if (GAMEPLAY::IS_BIT_SET(vLocal_158[participant_id_to_int() /*3*/].f_1, 8))
				{
					GAMEPLAY::CLEAR_BIT(&(vLocal_158[participant_id_to_int() /*3*/].f_1), 8);
				}
			}
			break;
		
		case 5:
			if (!func_135(iLocal_1166))
			{
				if (func_129(player_id(), 1, 1))
				{
					func_350();
					func_358();
					unk_0x4C2A9FDC22377075();
					if (Local_125.f_23 == 2)
					{
						GAMEPLAY::CLEAR_BIT(&(Local_125.f_1), 9);
						vLocal_158[participant_id_to_int() /*3*/].f_2 = 2;
					}
				}
			}
			break;
		
		case 6:
			func_395(1);
			break;
	}
	if (((vLocal_158[participant_id_to_int() /*3*/].f_2 != 4 && iLocal_102) && network_is_host_of_this_script()) && func_346())
	{
		if (iLocal_104 > -2)
		{
		}
		if (!network_has_control_of_entity(iLocal_1166))
		{
			network_request_control_of_entity(iLocal_1166);
		}
		GAMEPLAY::SET_BIT(&iLocal_255, 15);
		func_345();
		vLocal_158[participant_id_to_int() /*3*/].f_2 = 4;
		GAMEPLAY::CLEAR_BIT(&(vLocal_158[participant_id_to_int() /*3*/].f_1), 5);
		GAMEPLAY::CLEAR_BIT(&(vLocal_158[participant_id_to_int() /*3*/].f_1), 6);
		GAMEPLAY::SET_BIT(&(vLocal_158[participant_id_to_int() /*3*/].f_1), 8);
		iLocal_102 = 0;
	}
	else if (GAMEPLAY::IS_BIT_SET(iLocal_1167, 7))
	{
		GAMEPLAY::CLEAR_BIT(&iLocal_1167, 7);
	}
	func_276();
	func_255();
}

void func_255()
{
	int iVar0;
	int iVar1;
	struct<9> Var2;
	
	iVar1 = 1;
	if (func_129(player_id(), 1, 1) && !func_135(iLocal_1166))
	{
		if (is_ped_sitting_in_vehicle(PLAYER::PLAYER_PED_ID(), iLocal_1166) && !func_275(PLAYER::PLAYER_PED_ID(), iLocal_1166, -1))
		{
			hide_hud_component_this_frame(7);
			hide_hud_component_this_frame(9);
			hide_hud_component_this_frame(6);
			hide_hud_component_this_frame(8);
			CONTROLS::DISABLE_CONTROL_ACTION(0, 80, 1);
		}
		if (has_scaleform_movie_loaded(iLocal_263))
		{
			if (func_274() || func_128(0))
			{
				if (!GAMEPLAY::IS_BIT_SET(iLocal_255, 11))
				{
					GAMEPLAY::SET_BIT(&iLocal_255, 11);
				}
			}
			else if (GAMEPLAY::IS_BIT_SET(iLocal_255, 11))
			{
				iLocal_1168 = false;
				GAMEPLAY::CLEAR_BIT(&iLocal_255, 11);
			}
			if (func_357(1, 1))
			{
				if ((((vLocal_158[participant_id_to_int() /*3*/].f_2 == 1 && GAMEPLAY::IS_BIT_SET(iLocal_255, 2)) || vLocal_158[participant_id_to_int() /*3*/].f_2 == 2) || vLocal_158[participant_id_to_int() /*3*/].f_2 == 3) || vLocal_158[participant_id_to_int() /*3*/].f_2 == 5)
				{
					iLocal_1167 = false;
					Var2 = {func_273()};
					if (vLocal_158[participant_id_to_int() /*3*/].f_2 == 1)
					{
						if ((!func_185() && !GAMEPLAY::IS_BIT_SET(vLocal_158[participant_id_to_int() /*3*/].f_1, false)) && !is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1))
						{
							GAMEPLAY::SET_BIT(&iLocal_1167, false);
						}
						else
						{
							iVar1 = 0;
						}
					}
					else if (vLocal_158[participant_id_to_int() /*3*/].f_2 == 2)
					{
						if (network_is_host_of_this_script())
						{
							if (is_waypoint_active())
							{
								GAMEPLAY::SET_BIT(&iLocal_1167, true);
							}
							else
							{
								GAMEPLAY::SET_BIT(&iLocal_1167, 2);
							}
							if (func_346())
							{
								GAMEPLAY::SET_BIT(&iLocal_1167, 7);
							}
						}
						if (get_entity_height_above_ground(iLocal_1166) < 10f)
						{
							GAMEPLAY::SET_BIT(&iLocal_1167, 3);
						}
						else if (AI::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -275944640) != 1 && AI::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -275944640) != 0)
						{
							GAMEPLAY::SET_BIT(&iLocal_1167, 4);
							if (get_ped_in_vehicle_seat(iLocal_1166, 0) != PLAYER::PLAYER_PED_ID() && get_entity_height_above_ground(iLocal_1166) < 40f)
							{
								if (func_272())
								{
									GAMEPLAY::SET_BIT(&iLocal_1167, 5);
									iVar0 = 1;
								}
							}
						}
						else
						{
							iVar1 = 0;
						}
					}
					else if (vLocal_158[participant_id_to_int() /*3*/].f_2 == 3)
					{
						if (network_is_host_of_this_script())
						{
							GAMEPLAY::SET_BIT(&iLocal_1167, 6);
							if (func_346())
							{
								GAMEPLAY::SET_BIT(&iLocal_1167, 7);
							}
						}
						GAMEPLAY::SET_BIT(&iLocal_1167, 4);
					}
					else if (vLocal_158[participant_id_to_int() /*3*/].f_2 == 5)
					{
						if (get_entity_height_above_ground(iLocal_1166) < 10f)
						{
							GAMEPLAY::SET_BIT(&iLocal_1167, 3);
						}
						else if (AI::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -275944640) != 1 && AI::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -275944640) != 0)
						{
							GAMEPLAY::SET_BIT(&iLocal_1167, 4);
							if (get_ped_in_vehicle_seat(iLocal_1166, 0) != PLAYER::PLAYER_PED_ID() && get_entity_height_above_ground(iLocal_1166) < 40f)
							{
								if (func_272())
								{
									GAMEPLAY::SET_BIT(&iLocal_1167, 5);
									iVar0 = 1;
								}
							}
						}
						else
						{
							iVar1 = 0;
						}
					}
					else
					{
						iVar1 = 0;
					}
					if (func_271())
					{
						iVar1 = 0;
					}
					if (iVar1 == 1)
					{
						func_270();
						func_269(1);
						func_267(1);
						if (AI::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 1785177548) != 1)
						{
							if ((iLocal_1167 != iLocal_1168 || _0x6CD79468A1E595C6(2)) || Global_55738)
							{
								Global_55738 = 0;
								func_265(&uLocal_264);
								if (GAMEPLAY::IS_BIT_SET(iLocal_1167, false))
								{
									func_264(_get_control_action_name(0, 23, true), "HTX_ENTER", &uLocal_264, 0);
								}
								if (GAMEPLAY::IS_BIT_SET(iLocal_1167, true))
								{
									if (_is_input_disabled(0))
									{
										func_264(_get_control_action_name(0, 21, true), "HTX_START", &uLocal_264, 0);
									}
									else
									{
										func_264(_get_control_action_name(2, 201, true), "HTX_START", &uLocal_264, 0);
									}
								}
								if (GAMEPLAY::IS_BIT_SET(iLocal_1167, 2))
								{
									func_264(_get_control_action_name(2, 199, true), "HTX_WAYP", &uLocal_264, 0);
								}
								if (GAMEPLAY::IS_BIT_SET(iLocal_1167, 3))
								{
									func_264(_get_control_action_name(0, 75, true), "HTX_EXIT1", &uLocal_264, 0);
								}
								if (GAMEPLAY::IS_BIT_SET(iLocal_1167, 4))
								{
									func_264(_get_control_action_name(0, 75, true), "HTX_EXIT2", &uLocal_264, 0);
								}
								if (GAMEPLAY::IS_BIT_SET(iLocal_1167, 5))
								{
									if (_is_input_disabled(0))
									{
										func_264(_get_control_action_name(0, 22, true), "HTX_EXIT3", &uLocal_264, 0);
									}
									else
									{
										func_264(_get_control_action_name(0, 99, true), "HTX_EXIT3", &uLocal_264, 0);
									}
								}
								if (GAMEPLAY::IS_BIT_SET(iLocal_1167, 6))
								{
									if (_is_input_disabled(0))
									{
										func_264(_get_control_action_name(0, 36, true), "HTX_STOP", &uLocal_264, 0);
									}
									else
									{
										func_264(_get_control_action_name(2, 202, true), "HTX_STOP", &uLocal_264, 0);
									}
								}
								if (GAMEPLAY::IS_BIT_SET(iLocal_1167, 7))
								{
									if (func_263())
									{
										if (_is_input_disabled(0))
										{
											func_264(_get_control_action_name(2, 101, true), "HTX_QT_WARP", &uLocal_264, 0);
										}
										else
										{
											func_264(_get_control_action_name(2, 209, true), "HTX_QT_WARP", &uLocal_264, 0);
										}
									}
									else if (_is_input_disabled(0))
									{
										func_264(_get_control_action_name(2, 101, true), "HTX_OFF_WARP", &uLocal_264, 0);
									}
									else
									{
										func_264(_get_control_action_name(2, 209, true), "HTX_OFF_WARP", &uLocal_264, 0);
									}
								}
							}
							func_256(&iLocal_263, &Var2, &uLocal_264, func_262(&uLocal_264));
							iLocal_1168 = iLocal_1167;
						}
					}
				}
			}
		}
		else
		{
			iLocal_263 = unk_0x67D02A194A2FC2BD("instructional_buttons");
		}
		if (iVar0 == 1)
		{
			CONTROLS::DISABLE_CONTROL_ACTION(0, 99, 1);
			CONTROLS::DISABLE_CONTROL_ACTION(0, 100, 1);
		}
	}
	Global_2460486.f_255 = iVar1;
}

void func_256(int iParam0, auto uParam1, auto uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam3 == 1 || _0x6CD79468A1E595C6(2))
	{
		*uParam2 = 0;
		if (has_scaleform_movie_loaded(*iParam0))
		{
			if (GAMEPLAY::IS_PC_VERSION())
			{
				_push_scaleform_movie_function(*iParam0, "TOGGLE_MOUSE_BUTTONS");
				_push_scaleform_movie_function_parameter_bool(false);
				_pop_scaleform_movie_function_void();
			}
			_push_scaleform_movie_function(*iParam0, "CLEAR_ALL");
			_pop_scaleform_movie_function_void();
		}
		func_261(uParam2);
	}
	if (Global_1318755 < 2)
	{
		func_260(1);
	}
	if (*uParam2 == 0)
	{
		if (!has_scaleform_movie_loaded(*iParam0))
		{
			*iParam0 = unk_0x67D02A194A2FC2BD("instructional_buttons");
		}
		if (has_scaleform_movie_loaded(*iParam0))
		{
			call_scaleform_movie_method(*iParam0, "CLEAR_ALL");
			if (GAMEPLAY::IS_PC_VERSION())
			{
				_push_scaleform_movie_function(*iParam0, "TOGGLE_MOUSE_BUTTONS");
				_push_scaleform_movie_function_parameter_bool(true);
				_pop_scaleform_movie_function_void();
			}
			iVar0 = false;
			iVar0 = false;
			while (iVar0 < *uParam2.f_680)
			{
				if (GAMEPLAY::IS_BIT_SET(*uParam2.f_676, iVar0))
				{
					_push_scaleform_movie_function(*iParam0, "SET_DATA_SLOT");
					_push_scaleform_movie_function_parameter_int(iVar0);
					if (!GAMEPLAY::IS_BIT_SET(*uParam2.f_677, iVar0))
					{
						iVar1 = *(uParam2.f_1[iVar0 /*56*/]).f_53;
						iVar2 = *(uParam2.f_1[iVar0 /*56*/]).f_54;
						iVar3 = *(uParam2.f_1[iVar0 /*56*/]).f_55;
						func_259(_get_control_action_name(iVar1, iVar2, true));
						if (iVar3 < 344)
						{
							func_259(_get_control_action_name(iVar1, iVar3, true));
						}
					}
					else
					{
						iVar4 = *(uParam2.f_1[iVar0 /*56*/]).f_53;
						iVar5 = *(uParam2.f_1[iVar0 /*56*/]).f_54;
						func_259(_0x80C2FD58D720C801(iVar4, iVar5, true));
					}
					if (GAMEPLAY::IS_BIT_SET(*uParam2.f_674, iVar0))
					{
						_begin_text_component(uParam2.f_1[iVar0 /*56*/].f_32);
						if (*uParam2.f_681 == iVar0)
						{
							add_text_component_substring_time(*(uParam2.f_1[iVar0 /*56*/]).f_36, 70);
						}
						else
						{
							add_text_component_integer(*(uParam2.f_1[iVar0 /*56*/]).f_36);
						}
						_end_text_component();
					}
					else if (GAMEPLAY::IS_BIT_SET(*uParam2.f_675, iVar0))
					{
						_begin_text_component(uParam2.f_1[iVar0 /*56*/].f_32);
						add_text_component_substring_player_name(uParam2.f_1[iVar0 /*56*/].f_37);
						_end_text_component();
					}
					else
					{
						func_30(uParam2.f_1[iVar0 /*56*/].f_32);
					}
					if (GAMEPLAY::IS_PC_VERSION())
					{
						if (GAMEPLAY::IS_BIT_SET(*uParam2.f_678, iVar0))
						{
							_push_scaleform_movie_function_parameter_bool(true);
							_push_scaleform_movie_function_parameter_int(*(uParam2.f_1[iVar0 /*56*/]).f_54);
						}
						else
						{
							_push_scaleform_movie_function_parameter_bool(false);
							_push_scaleform_movie_function_parameter_int(344);
						}
					}
					_pop_scaleform_movie_function_void();
				}
				else
				{
					_push_scaleform_movie_function(*iParam0, "SET_DATA_SLOT");
					_push_scaleform_movie_function_parameter_int(iVar0);
					func_259(uParam2.f_1[iVar0 /*56*/]);
					if (!is_string_null_or_empty(uParam2.f_1[iVar0 /*56*/].f_16))
					{
						func_259(uParam2.f_1[iVar0 /*56*/].f_16);
					}
					if (GAMEPLAY::IS_BIT_SET(*uParam2.f_674, iVar0))
					{
						_begin_text_component(uParam2.f_1[iVar0 /*56*/].f_32);
						if (*uParam2.f_681 == iVar0)
						{
							add_text_component_substring_time(*(uParam2.f_1[iVar0 /*56*/]).f_36, 70);
						}
						else
						{
							add_text_component_integer(*(uParam2.f_1[iVar0 /*56*/]).f_36);
						}
						_end_text_component();
					}
					else if (GAMEPLAY::IS_BIT_SET(*uParam2.f_675, iVar0))
					{
						_begin_text_component(uParam2.f_1[iVar0 /*56*/].f_32);
						add_text_component_substring_player_name(uParam2.f_1[iVar0 /*56*/].f_37);
						_end_text_component();
					}
					else
					{
						func_30(uParam2.f_1[iVar0 /*56*/].f_32);
					}
					if (GAMEPLAY::IS_PC_VERSION())
					{
						_push_scaleform_movie_function_parameter_bool(false);
						_push_scaleform_movie_function_parameter_int(344);
					}
					_pop_scaleform_movie_function_void();
				}
				iVar0++;
			}
			_push_scaleform_movie_function(*iParam0, "SET_MAX_WIDTH");
			_push_scaleform_movie_function_parameter_float(*uParam2.f_686);
			_pop_scaleform_movie_function_void();
			_push_scaleform_movie_function(*iParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
			_push_scaleform_movie_function_parameter_int(false);
			_pop_scaleform_movie_function_void();
			*uParam2 = 1;
		}
	}
	*uParam2.f_682 = 0.05f;
	*uParam2.f_683 = 0.045f;
	*uParam2.f_684 = 0f;
	*uParam2.f_685 = 0f;
	if (*uParam2 == 1)
	{
		func_258(*iParam0, uParam1);
	}
	func_257();
}

void func_257()
{
	hide_hud_component_this_frame(7);
	hide_hud_component_this_frame(6);
	hide_hud_component_this_frame(8);
	hide_hud_component_this_frame(9);
}

void func_258(int iParam0, auto uParam1)
{
	draw_scaleform_movie_fullscreen(iParam0, *uParam1.f_4, *uParam1.f_5, *uParam1.f_6, *uParam1.f_7, 0);
}

void func_259(char* sParam0)
{
	_0xE83A3E3557A56640(sParam0);
}

void func_260(int iParam0)
{
	Global_1318755 = iParam0;
}

void func_261(auto uParam0)
{
	*uParam0.f_679 = 0;
}

auto func_262(auto uParam0)
{
	return *uParam0.f_679;
}

bool func_263()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (Global_1587523[player_id() /*444*/].f_250.f_68[iVar0 /*2*/] != 0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_264(char* sParam0, char* sParam1, auto uParam2, char* sParam3)
{
	auto uVar0;
	
	if (*uParam2.f_680 >= 12)
	{
		return;
	}
	uVar0 = *uParam2.f_680;
	StringCopy(uParam2.f_1[uVar0 /*56*/], sParam0, 64);
	StringCopy(uParam2.f_1[uVar0 /*56*/].f_16, sParam3, 64);
	StringCopy(uParam2.f_1[uVar0 /*56*/].f_32, sParam1, 16);
	*uParam2.f_680++;
}

void func_265(auto uParam0)
{
	func_266(uParam0);
	*uParam0.f_679 = 1;
}

void func_266(auto uParam0)
{
	int iVar0;
	
	*uParam0 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(uParam0.f_1[iVar0 /*56*/], "", 64);
		StringCopy(uParam0.f_1[iVar0 /*56*/].f_16, "", 64);
		StringCopy(uParam0.f_1[iVar0 /*56*/].f_32, "", 16);
		*(uParam0.f_1[iVar0 /*56*/]).f_36 = 0;
		StringCopy(uParam0.f_1[iVar0 /*56*/].f_37, "", 64);
		*(uParam0.f_1[iVar0 /*56*/]).f_53 = 2;
		*(uParam0.f_1[iVar0 /*56*/]).f_54 = 344;
		*(uParam0.f_1[iVar0 /*56*/]).f_55 = 344;
		iVar0++;
	}
	*uParam0.f_674 = 0;
	*uParam0.f_675 = 0;
	*uParam0.f_676 = 0;
	*uParam0.f_678 = 0;
	*uParam0.f_677 = 0;
	*uParam0.f_679 = 0;
	*uParam0.f_680 = 0;
	*uParam0.f_682 = 0f;
	*uParam0.f_683 = 0f;
	*uParam0.f_684 = 0f;
	*uParam0.f_685 = 0f;
	*uParam0.f_686 = 1f;
}

void func_267(int iParam0)
{
	if (iParam0)
	{
		if (func_268())
		{
			Global_2434762.f_25 = 1;
		}
	}
	else
	{
		Global_2434762.f_25 = 0;
	}
}

int func_268()
{
	return GAMEPLAY::IS_BIT_SET(Global_2434762.f_2, 11);
}

void func_269(int iParam0)
{
	Global_1339940.f_932 = iParam0;
}

void func_270()
{
	Global_2469052.f_258 = 1;
}

bool func_271()
{
	if (iLocal_97 > 0 || iLocal_102 == 1)
	{
		return true;
	}
	return false;
}

bool func_272()
{
	if (unk_0x4E417C547182C84D(iLocal_1166) && !func_250())
	{
		return true;
	}
	return false;
}

struct<9> func_273()
{
	struct<9> Var0;
	
	Var0 = 0.5f;
	Var0.f_1 = 0.5f;
	Var0.f_2 = 1f;
	Var0.f_3 = 1f;
	Var0.f_4 = 255;
	Var0.f_5 = 255;
	Var0.f_6 = 255;
	Var0.f_7 = 200;
	Var0.f_8 = 0f;
	return Var0;
}

int func_274()
{
	return GAMEPLAY::GET_GAME_TIMER() <= Global_17257.f_5745 + 100;
}

bool func_275(int iParam0, int iParam1, int iParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0) && !ENTITY::IS_ENTITY_DEAD(iParam1, 0))
	{
		if (is_ped_sitting_in_vehicle(iParam0, iParam1))
		{
			if (get_ped_in_vehicle_seat(iParam1, iParam2) == iParam0)
			{
				return true;
			}
		}
	}
	return false;
}

void func_276()
{
	if (iLocal_97 == 0)
	{
		if (iLocal_101)
		{
			if (func_263())
			{
				iLocal_100 = 1;
				iLocal_97 = 1;
			}
			else
			{
				iLocal_102 = 1;
				iLocal_104 = -1;
				iLocal_103 = 1;
			}
		}
	}
	if (iLocal_97 == 1)
	{
		if (func_346())
		{
			func_280();
		}
		else
		{
			iLocal_103 = 1;
		}
	}
	if (iLocal_103)
	{
		func_277(1, -1);
		iLocal_97 = 0;
		iLocal_99 = 0;
		iLocal_103 = 0;
		iLocal_101 = 0;
	}
}

void func_277(int iParam0, int iParam1)
{
	auto uVar0;
	
	if (!func_279(&uVar0, 0, iParam1))
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
		func_278(&(Global_17257.f_5530[uVar0 /*10*/]));
		Global_17257.f_5591[uVar0] = 0;
	}
	else
	{
		Global_17257.f_5591[uVar0] = 0;
	}
}

void func_278(int iParam0)
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

bool func_279(auto uParam0, int iParam1, int iParam2)
{
	char[64] cVar0;
	int iVar16;
	int iVar17;
	int iVar18;
	
	if (iParam2 == -1)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && network_get_this_script_is_network_script())
		{
			iParam2 = _0x638A3A81733086DB();
		}
	}
	StringCopy(&cVar0, get_this_script_name(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = GAMEPLAY::GET_HASH_KEY(&cVar0);
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

void func_280()
{
	func_335(&Local_115);
	if (func_333(0, -1, 0))
	{
		if (iLocal_100)
		{
			func_319();
			iLocal_100 = 0;
		}
		else
		{
			func_318(iLocal_99, 1, 1);
		}
		func_316();
		func_314();
		func_287(1, -1, 1, 0, 1, -1082130432, 0, 0);
		if (!iLocal_111)
		{
			if (func_286())
			{
				iLocal_100 = 1;
			}
		}
		else if (!func_286())
		{
			iLocal_100 = 1;
		}
		if (!iLocal_112)
		{
			if (func_281())
			{
				iLocal_100 = 1;
			}
		}
		else if (!func_281())
		{
			iLocal_100 = 1;
		}
	}
}

bool func_281()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = iLocal_1166;
	if (ENTITY::IS_ENTITY_DEAD(iVar0, 0))
	{
		return false;
	}
	iVar1 = _get_vehicle_model_max_number_of_passengers(ENTITY::GET_ENTITY_MODEL(iVar0));
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		iVar5 = iVar2 - 1;
		if (!is_vehicle_seat_free(iVar0, iVar5))
		{
			iVar4 = get_ped_in_vehicle_seat(iVar0, iVar5);
			if (!ENTITY::IS_ENTITY_DEAD(iVar4, 0) && is_ped_a_player(iVar4))
			{
				if (!func_284())
				{
					return false;
				}
				else
				{
					iVar3 = _network_get_ped_player(iVar4);
					if (iVar3 != func_8() && func_129(iVar3, 1, 1))
					{
						if (!func_282(iVar3, func_9(player_id()), 1))
						{
							return false;
						}
					}
				}
			}
		}
		iVar2++;
	}
	if (iLocal_113)
	{
		if (!func_354())
		{
			iLocal_113 = 0;
		}
		else
		{
			return false;
		}
	}
	return true;
}

int func_282(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 != func_8())
	{
		if (!iParam2)
		{
			if (func_283(iParam0, iParam1))
			{
				return false;
			}
		}
		if (Global_1610316[iParam0 /*174*/].f_10 != func_8())
		{
			return iParam1 == Global_1610316[iParam0 /*174*/].f_10;
		}
	}
	return false;
}

int func_283(int iParam0, int iParam1)
{
	if (iParam1 != func_8())
	{
		if (iParam0 != func_8())
		{
			if (Global_1610316[iParam0 /*174*/].f_10 != func_8())
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

int func_284()
{
	return func_285(player_id());
}

int func_285(int iParam0)
{
	if (iParam0 != func_8())
	{
		if (Global_1610316[iParam0 /*174*/].f_10 != func_8())
		{
			return Global_1610316[iParam0 /*174*/].f_10 == iParam0;
		}
	}
	return false;
}

bool func_286()
{
	if (vdist(func_164(player_id()), func_176(func_178(Global_1587523[player_id() /*444*/].f_250[5]))) > 200f)
	{
		return true;
	}
	return false;
}

void func_287(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5, int iParam6, int iParam7)
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
	Vector3 vVar37;
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
	
	if (!func_279(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_312(0, iParam6))
	{
		return;
	}
	_set_screen_draw_position(76, 84);
	_0xF5A2C681787E579D(-0.05f, -0.05f, 0f, 0f);
	fVar55 = 0f;
	if (Global_17257)
	{
		if (func_310(29, 1, 1, &fVar35, &fVar36, iParam7))
		{
			fVar55 = fVar36;
			fVar55 += 0f;
		}
		else
		{
			Global_17257 = 0;
		}
	}
	if (GAMEPLAY::GET_HASH_KEY(&(Global_17257.f_1)) == GAMEPLAY::GET_HASH_KEY("HIDE"))
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
		if (func_309())
		{
			iVar57 = round(to_float(iVar58) * fVar60);
		}
		fVar61 = to_float(iVar57) / to_float(iVar58);
		fVar59 = fVar61 / fVar60;
		if (func_309())
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
			if (GAMEPLAY::GET_HASH_KEY(&(Global_17257.f_1)) == GAMEPLAY::GET_HASH_KEY("HIDE"))
			{
				fVar49 = Global_17255;
			}
			else
			{
				if (Global_17257)
				{
					draw_sprite(func_308(29), func_306(29, 1), Global_17254 + fParam5 * 0.5f, Global_17255 + fVar55 - 0f * 0.5f, fParam5, fVar55 - 0f, 0f, 255, 255, 255, 255, 0);
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
				func_305(Global_17254, Global_17255 + fVar55, fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar49 = Global_17255 + fVar55 + 0.034722f + 0f;
				if (GAMEPLAY::GET_HASH_KEY(&(Global_17257.f_1)) != 0)
				{
					func_304();
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
						func_304();
						func_302(Global_17254 + fParam5 - 0.00390625f - func_303("CM_ITEM_COUNT", Global_17257.f_5604, Global_17257.f_5603), Global_17255 + fVar55 + 0.00416664f, "CM_ITEM_COUNT", Global_17257.f_5604, Global_17257.f_5603);
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
				func_305(Global_17254, fVar49 + 0f, fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
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
			if (GAMEPLAY::GET_HASH_KEY(&(Global_17257.f_4562)) != 0 && Global_17257.f_4636 != -1)
			{
				fVar49 += 0.00277776f * 2f;
				fVar41 = Global_17254 + 0.0046875f;
				if (Global_17257.f_4638 != 0)
				{
					func_310(Global_17257.f_4638, 1, 1, &fVar35, &fVar36, iParam7);
					fVar41 = Global_17254 + fVar35 + 0.00078125f * 4f - 0.00078125f * 1f;
				}
				func_301(fVar41);
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
				func_305(Global_17254, fVar49 - 0.00277776f, fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
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
				func_301(fVar41);
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
					func_310(Global_17257.f_4638, 1, 1, &fVar35, &fVar36, iParam7);
					func_300(Global_17257.f_4638, 1, &iVar46, &iVar47, &iVar48);
					draw_sprite(func_308(Global_17257.f_4638), func_306(Global_17257.f_4638, 1), Global_17254 + fVar35 * 0.5f + 0.00078125f * 2f, fVar49 + fVar36 * 0.5f - 0.00138888f * 4f, fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
				}
				fVar49 += _get_text_scale_height(0.35f, 0) * IntToFloat(iVar6) + 0.00138888f * 13f + 0.00138888f * 5f * IntToFloat(iVar6 - 1);
				if (Global_17257.f_4636 > 0)
				{
					if (GAMEPLAY::GET_GAME_TIMER() - Global_17257.f_4637 > Global_17257.f_4636)
					{
						StringCopy(&(Global_17257.f_4562), "", 16);
						Global_17257.f_4636 = -1;
					}
				}
			}
			if (GAMEPLAY::GET_HASH_KEY(&(Global_2562053.f_21)) != 0 && Global_2562053.f_65 != -1)
			{
				fVar49 += 0.00277776f * 2f;
				fVar41 = Global_17254 + 0.0046875f;
				if (Global_2562053.f_67 != 0)
				{
					func_310(Global_2562053.f_67, 1, 1, &fVar35, &fVar36, iParam7);
					fVar41 = Global_17254 + fVar35 + 0.00078125f * 4f - 0.00078125f * 1f;
				}
				func_301(fVar41);
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
				func_305(Global_17254, fVar49 - 0.00277776f, fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
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
				func_301(fVar41);
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
					func_310(Global_2562053.f_67, 1, 1, &fVar35, &fVar36, iParam7);
					func_300(Global_2562053.f_67, 1, &iVar46, &iVar47, &iVar48);
					draw_sprite(func_308(Global_2562053.f_67), func_306(Global_2562053.f_67, 1), Global_17254 + fVar35 * 0.5f + 0.00078125f * 2f, fVar49 + fVar36 * 0.5f - 0.00138888f * 4f, fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
				}
				fVar49 += _get_text_scale_height(0.35f, 0) * IntToFloat(iVar6) + 0.00138888f * 13f + 0.00138888f * 5f * IntToFloat(iVar6 - 1);
				if (Global_2562053.f_65 > 0)
				{
					if (GAMEPLAY::GET_GAME_TIMER() - Global_2562053.f_66 > Global_2562053.f_65)
					{
						StringCopy(&(Global_2562053.f_21), "", 16);
						Global_2562053.f_65 = -1;
					}
				}
			}
			func_297(iVar57, iParam1, 0, 0, 0, 0, iParam4, 1, 0);
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
					func_295(iVar31, 1, 0, 0, 0, 0);
					_set_text_entry("DFLT_MNU_OPT");
					_draw_text(fVar33, fVar34, 0);
					iVar40 = true;
				}
				else
				{
					iVar8 = false;
					while (iVar8 < Global_17257.f_5096)
					{
						if (GAMEPLAY::IS_BIT_SET(Global_17257.f_4959[iVar6], iVar8) || Global_17257.f_4926[iVar8] == 5)
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
											if (GAMEPLAY::GET_HASH_KEY(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
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
												func_295(iVar31, Global_17257.f_1610[iVar24], Global_17257.f_1867[iVar24], iVar53, iVar70, iVar50);
												_set_text_entry_for_width(&(Global_17257.f_73[iVar24 /*6*/]));
											}
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 1)
												{
													iVar25++;
													if (GAMEPLAY::GET_HASH_KEY(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
													{
														_add_text_component_item_string(&(Global_17257.f_73[iVar24 + iVar25 /*6*/]));
													}
												}
												else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 8)
												{
													iVar25++;
													if (GAMEPLAY::GET_HASH_KEY(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
													{
														_add_text_component_item_string(&(Global_17257.f_73[iVar24 + iVar25 /*6*/]));
													}
												}
												else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 5)
												{
													if (GAMEPLAY::GET_HASH_KEY(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
													{
														add_text_component_substring_player_name(&(Global_2443586[iVar23 + iVar29 /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 6)
												{
													if (GAMEPLAY::GET_HASH_KEY(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
													{
														_add_text_component_item_string(&(Global_2443586[iVar23 + iVar29 /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 7)
												{
													if (GAMEPLAY::GET_HASH_KEY(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
													{
														add_text_component_substring_player_name(&(Global_2443586[iVar23 + iVar29 /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 2)
												{
													if (GAMEPLAY::GET_HASH_KEY(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
													{
														add_text_component_integer(Global_17257.f_3918[iVar20 + iVar26]);
													}
													iVar26++;
												}
												else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 3)
												{
													if (GAMEPLAY::GET_HASH_KEY(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
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
											if (GAMEPLAY::GET_HASH_KEY(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
											{
												fVar42 = _get_text_screen_width(1);
											}
											if (iVar28 > 0)
											{
												iVar14 = 0;
												while (iVar14 < iVar28)
												{
													if (func_310(Global_17257.f_4433[iVar22 + iVar14], iVar31, 0, &fVar35, &fVar36, iParam7))
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
											if (func_310(26, 1, 0, &fVar35, &fVar36, iParam7))
											{
												if (Global_17257.f_4953[iVar8] == 2)
												{
													fVar41 -= fVar35 * 2f;
												}
												fVar44 = fVar35 * 0.5f;
												if (func_310(26, 1, 1, &fVar35, &fVar36, iParam7))
												{
													func_300(26, 1, &iVar46, &iVar47, &iVar48);
													draw_sprite(func_308(26), func_306(26, 1), fVar33 + fVar41 + fVar44, fVar34 - 0.00277776f + fVar54 * 0.5f, fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_310(27, 1, 0, &fVar35, &fVar36, iParam7))
											{
												fVar41 += fVar35;
												fVar44 = fVar35 * 0.5f;
												if (func_310(27, 1, 1, &fVar35, &fVar36, iParam7))
												{
													func_300(27, 1, &iVar46, &iVar47, &iVar48);
													draw_sprite(func_308(27), func_306(27, 1), fVar33 + fVar41 + fVar44 + fVar42 + fVar43, fVar34 - 0.00277776f + fVar54 * 0.5f, fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										iVar30 = 0;
										if (GAMEPLAY::GET_HASH_KEY(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
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
											func_295(iVar31, Global_17257.f_1610[iVar24], Global_17257.f_1867[iVar24], iVar53, 0, iVar50);
											if (Global_17257.f_7858 && Global_17257.f_7859 == iVar6)
											{
												func_294(iVar31);
											}
											_set_text_entry(&(Global_17257.f_73[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (GAMEPLAY::GET_HASH_KEY(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
												{
													_add_text_component_item_string(&(Global_17257.f_73[iVar24 + iVar25 /*6*/]));
												}
												iVar30 = 1;
											}
											else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (GAMEPLAY::GET_HASH_KEY(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
												{
													_add_text_component_item_string(&(Global_17257.f_73[iVar24 + iVar25 /*6*/]));
												}
												iVar30 = 8;
											}
											else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 5)
											{
												if (GAMEPLAY::GET_HASH_KEY(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
												{
													add_text_component_substring_player_name(&(Global_2443586[iVar23 + iVar29 /*16*/]));
												}
												iVar29++;
												iVar30 = 5;
											}
											else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 6)
											{
												if (GAMEPLAY::GET_HASH_KEY(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
												{
													_add_text_component_item_string(&(Global_2443586[iVar23 + iVar29 /*16*/]));
												}
												iVar29++;
												iVar30 = 6;
											}
											else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 7)
											{
												if (GAMEPLAY::GET_HASH_KEY(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
												{
													add_text_component_substring_player_name(&(Global_2443586[iVar23 + iVar29 /*16*/]));
												}
												iVar29++;
												iVar30 = 6;
											}
											else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 2)
											{
												if (GAMEPLAY::GET_HASH_KEY(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
												{
													add_text_component_integer(Global_17257.f_3918[iVar20 + iVar26]);
												}
												iVar26++;
												iVar30 = 2;
											}
											else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 3)
											{
												if (GAMEPLAY::GET_HASH_KEY(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
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
													if (func_310(Global_17257.f_4433[iVar22 + iVar28], iVar31, 0, &fVar35, &fVar36, iParam7))
													{
														fVar41 += fVar35 * 0.5f;
														if (func_310(Global_17257.f_4433[iVar22 + iVar28], iVar31, 1, &fVar35, &fVar36, iParam7))
														{
															func_300(Global_17257.f_4433[iVar22 + iVar28], iVar31, &iVar46, &iVar47, &iVar48);
															if (Global_17257.f_4953[iVar8] == 2)
															{
																draw_sprite(func_308(Global_17257.f_4433[iVar22 + iVar28]), func_306(Global_17257.f_4433[iVar22 + iVar28], iVar31), fVar33 + fVar41 - 0.00078125f * 8f + 0.00078125f * 4f, fVar34 - 0.00277776f + fVar54 * 0.5f, fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else
															{
																draw_sprite(func_308(Global_17257.f_4433[iVar22 + iVar28]), func_306(Global_17257.f_4433[iVar22 + iVar28], iVar31), fVar33 + fVar41 - 0.00078125f * 8f, fVar34 - 0.00277776f + fVar54 * 0.5f, fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
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
										if (GAMEPLAY::GET_HASH_KEY(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
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
													if (func_310(Global_17257.f_4433[iVar22 + iVar14], iVar31, 0, &fVar35, &fVar36, iParam7))
													{
														fVar41 += fVar35 * 0.5f;
														if (func_310(Global_17257.f_4433[iVar22 + iVar14], iVar31, 1, &fVar35, &fVar36, iParam7))
														{
															func_300(Global_17257.f_4433[iVar22 + iVar14], iVar31, &iVar46, &iVar47, &iVar48);
															if (Global_17257.f_4433[iVar22 + iVar14] == 30)
															{
																draw_sprite(func_308(Global_17257.f_4433[iVar22 + iVar14]), func_306(Global_17257.f_4433[iVar22 + iVar14], iVar31), Global_17254 + fVar35 * 0.5f, fVar34 + 0.00277776f + fVar36 * 0.5f - 0.00078125f * 11f, fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else if (Global_17257.f_4953[iVar8] == 2)
															{
																draw_sprite(func_308(Global_17257.f_4433[iVar22 + iVar14]), func_306(Global_17257.f_4433[iVar22 + iVar14], iVar31), fVar33 + fVar41 + fVar42 - 0.00078125f * 8f + 0.00078125f * 4f, fVar34 - 0.00277776f + fVar54 * 0.5f, fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else
															{
																draw_sprite(func_308(Global_17257.f_4433[iVar22 + iVar14]), func_306(Global_17257.f_4433[iVar22 + iVar14], iVar31), fVar33 + fVar41 + fVar42 - 0.00078125f * 12f, fVar34 - 0.00277776f + fVar54 * 0.5f, fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
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
											func_295(iVar31, Global_17257.f_1610[iVar24], Global_17257.f_1867[iVar24], iVar53, 0, 0);
											if (Global_17257.f_7858 && Global_17257.f_7859 == iVar6)
											{
												func_294(iVar31);
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
											if (func_310(26, 1, 0, &fVar35, &fVar36, iParam7))
											{
												if (Global_17257.f_4953[iVar8] == 2)
												{
													fVar41 -= fVar35 * 2f;
												}
												fVar44 = fVar35 * 0.5f;
												if (func_310(26, 1, 1, &fVar35, &fVar36, iParam7))
												{
													func_300(26, 1, &iVar46, &iVar47, &iVar48);
													draw_sprite(func_308(26), func_306(26, 1), fVar33 + fVar41 + fVar44, fVar34 - 0.00277776f + fVar54 * 0.5f, fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_310(27, 1, 0, &fVar35, &fVar36, iParam7))
											{
												fVar41 += fVar35;
												fVar44 = fVar35 * 0.5f;
												if (func_310(27, 1, 1, &fVar35, &fVar36, iParam7))
												{
													func_300(27, 1, &iVar46, &iVar47, &iVar48);
													draw_sprite(func_308(27), func_306(27, 1), fVar33 + fVar41 + fVar44 + fVar42 + fVar43, fVar34 - 0.00277776f + fVar54 * 0.5f, fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										func_295(iVar31, Global_17257.f_1610[iVar24], Global_17257.f_1867[iVar24], iVar53, 0, 0);
										func_293(fVar33 + fVar41, fVar34, "NUMBER", Global_17257.f_3918[iVar20], 0);
									}
									iVar40 = true;
									iVar20++;
									break;
								
								case 3:
									if (iVar5 == 1 && iVar32)
									{
										if (!Global_17257.f_5599)
										{
											func_295(iVar31, Global_17257.f_1610[iVar24], Global_17257.f_1867[iVar24], iVar53, 0, 0);
											if (Global_17257.f_7858 && Global_17257.f_7859 == iVar6)
											{
												func_294(iVar31);
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
											if (func_310(26, 1, 0, &fVar35, &fVar36, 0))
											{
												if (Global_17257.f_4953[iVar8] == 2)
												{
													fVar41 -= fVar35 * 2f;
												}
												fVar44 = fVar35 * 0.5f;
												if (func_310(26, 1, 1, &fVar35, &fVar36, iParam7))
												{
													func_300(26, 1, &iVar46, &iVar47, &iVar48);
													draw_sprite(func_308(26), func_306(26, 1), fVar33 + fVar41 + fVar44, fVar34 - 0.00277776f + fVar54 * 0.5f, fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_310(27, 1, 0, &fVar35, &fVar36, iParam7))
											{
												fVar41 += fVar35;
												fVar44 = fVar35 * 0.5f;
												if (func_310(27, 1, 1, &fVar35, &fVar36, iParam7))
												{
													func_300(27, 1, &iVar46, &iVar47, &iVar48);
													draw_sprite(func_308(27), func_306(27, 1), fVar33 + fVar41 + fVar44 + fVar42 + fVar43, fVar34 - 0.00277776f + fVar54 * 0.5f, fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										func_295(iVar31, Global_17257.f_1610[iVar24], Global_17257.f_1867[iVar24], iVar53, 0, 0);
										func_292(fVar33 + fVar41, fVar34, "NUMBER", Global_17257.f_4175[iVar21], Global_17257.f_4304[iVar21]);
									}
									iVar40 = true;
									iVar21++;
									break;
								
								case 4:
									if (iVar5 == 1 && iVar32)
									{
										if (func_310(Global_17257.f_4433[iVar22], iVar31, 0, &fVar35, &fVar36, iParam7))
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
												if (func_310(26, 1, 0, &fVar35, &fVar36, iParam7))
												{
													if (Global_17257.f_4953[iVar8] == 2)
													{
														fVar41 -= fVar35 * 2f;
													}
													fVar44 = fVar35 * 0.5f;
													if (func_310(26, 1, 1, &fVar35, &fVar36, iParam7))
													{
														func_300(26, 1, &iVar46, &iVar47, &iVar48);
														draw_sprite(func_308(26), func_306(26, 1), fVar33 + fVar41 + fVar44, fVar34 - 0.00277776f + fVar54 * 0.5f, fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
													}
												}
												if (func_310(27, 1, 0, &fVar35, &fVar36, iParam7))
												{
													fVar41 += fVar35;
													fVar44 = fVar35 * 0.5f;
													if (func_310(27, 1, 1, &fVar35, &fVar36, iParam7))
													{
														func_300(27, 1, &iVar46, &iVar47, &iVar48);
														draw_sprite(func_308(27), func_306(27, 1), fVar33 + fVar41 + fVar44 + fVar42 + fVar43, fVar34 - 0.00277776f + fVar54 * 0.5f, fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
													}
												}
											}
											if (func_310(Global_17257.f_4433[iVar22], iVar31, 1, &fVar35, &fVar36, iParam7))
											{
												func_300(Global_17257.f_4433[iVar22], iVar31, &iVar46, &iVar47, &iVar48);
												draw_sprite(func_308(Global_17257.f_4433[iVar22]), func_306(Global_17257.f_4433[iVar22], iVar31), fVar33 + fVar41 + fVar35 * 0.5f, fVar34 - 0.00277776f + fVar54 * 0.5f, fVar35 * func_291(Global_17257.f_4433[iVar22]), fVar36 * func_291(Global_17257.f_4433[iVar22]), 0f, iVar46, iVar47, iVar48, 255, 0);
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
									if (func_310(26, 1, 1, &fVar35, &fVar36, iParam7))
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
	Global_17257.f_5745 = GAMEPLAY::GET_GAME_TIMER();
	_0x55598D21339CB998(Global_17257.f_5743);
	if (!Global_17257.f_7827)
	{
		func_288();
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
		func_269(1);
	}
	_0xE3A3DB414A373DAB();
}

void func_288()
{
	if (!Global_14413.f_1 == 1)
	{
		if (func_128(0))
		{
			func_289(0);
		}
		GAMEPLAY::SET_BIT(&Global_2284, 2);
	}
}

void func_289(int iParam0)
{
	if (Global_14571)
	{
		func_290(0, 0);
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
	if (!func_78())
	{
		Global_14413.f_1 = 3;
	}
}

void func_290(int iParam0, int iParam1)
{
	if (iParam0)
	{
		if (func_128(0))
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

float func_291(int iParam0)
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

void func_292(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4)
{
	_set_text_entry(sParam2);
	add_text_component_float(fParam3, iParam4);
	_draw_text(fParam0, fParam1, 0);
}

void func_293(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	_set_text_entry(sParam2);
	add_text_component_integer(iParam3);
	_draw_text(fParam0, fParam1, iParam4);
}

void func_294(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	auto uVar3;
	
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

void func_295(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2)
	{
		if (iParam3)
		{
			func_296(Global_17257.f_5878[iParam4], &iVar0, &iVar1, &iVar2);
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

void func_296(int iParam0, auto uParam1, auto uParam2, auto uParam3)
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

void func_297(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	auto uVar0;
	int iVar1;
	int iVar2;
	
	if (!func_279(&uVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_312(iParam4, iParam8))
	{
		return;
	}
	if (func_298())
	{
		return;
	}
	if (_network_is_text_chat_active())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_230(player_id(), 0))
		{
			return;
		}
	}
	if (GAMEPLAY::IS_PC_VERSION())
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
			if (GAMEPLAY::IS_PC_VERSION())
			{
				_push_scaleform_movie_function(Global_17257.f_5530[uVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				_push_scaleform_movie_function_parameter_bool(true);
				_pop_scaleform_movie_function_void();
			}
			iVar1 = false;
			while (iVar1 < Global_17257.f_4639)
			{
				if (GAMEPLAY::GET_HASH_KEY(&(Global_17257.f_4834[iVar1 /*4*/])) != GAMEPLAY::GET_HASH_KEY("PREV"))
				{
					_push_scaleform_movie_function(Global_17257.f_5530[uVar0 /*10*/], "SET_DATA_SLOT");
					_push_scaleform_movie_function_parameter_int(iVar1);
					func_259(&(Global_17257.f_4641[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && GAMEPLAY::GET_HASH_KEY(&(Global_17257.f_4834[iVar2 /*4*/])) == GAMEPLAY::GET_HASH_KEY("PREV"))
					{
						func_259(&(Global_17257.f_4641[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_17257.f_4883[iVar1] == -1)
					{
						func_30(&(Global_17257.f_4834[iVar1 /*4*/]));
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
					if (GAMEPLAY::IS_PC_VERSION())
					{
						if (Global_17257.f_4896[iVar1] != 344 && GAMEPLAY::IS_BIT_SET(Global_17257.f_4922, iVar1))
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
			if (GAMEPLAY::GET_HASH_KEY(&(Global_2562053.f_16)) != GAMEPLAY::GET_HASH_KEY(""))
			{
				_push_scaleform_movie_function(Global_17257.f_5530[uVar0 /*10*/], "SET_DATA_SLOT");
				_push_scaleform_movie_function_parameter_int(Global_17257.f_4639);
				func_259(&Global_2562053);
				if (Global_2562053.f_20 == -1)
				{
					func_30(&(Global_2562053.f_16));
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

bool func_298()
{
	Vector3 vVar0;
	
	if (Global_14413.f_1 > 3)
	{
		return true;
	}
	if (func_299())
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

bool func_299()
{
	if (_get_number_of_instances_of_streamed_script(joaat("cellphone_flashhand")) > 0)
	{
		return true;
	}
	return false;
}

void func_300(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	auto uVar0;
	
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

void func_301(float fParam0)
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

void func_302(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	_set_text_entry(sParam2);
	add_text_component_integer(iParam3);
	add_text_component_integer(iParam4);
	_draw_text(fParam0, fParam1, 0);
}

float func_303(char* sParam0, int iParam1, int iParam2)
{
	if (!is_string_null(sParam0))
	{
		if (GAMEPLAY::GET_HASH_KEY(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_304();
	_set_text_entry_for_width(sParam0);
	add_text_component_integer(iParam1);
	add_text_component_integer(iParam2);
	return _get_text_screen_width(1);
}

void func_304()
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

void func_305(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	draw_rect(fParam0 + fParam2 * 0.5f, fParam1 + fParam3 * 0.5f, fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

auto func_306(int iParam0, int iParam1)
{
	char*[] sVar0 = new char*[2];
	
	if (!is_string_null_or_empty(&(Global_17257.f_6687[iParam0 /*16*/])))
	{
		return func_307(&(Global_17257.f_6687[iParam0 /*16*/]));
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

auto func_307(auto uParam0)
{
	return uParam0;
}

char* func_308(int iParam0)
{
	if (!is_string_null_or_empty(&(Global_17257.f_5886[iParam0 /*16*/])))
	{
		return func_307(&(Global_17257.f_5886[iParam0 /*16*/]));
	}
	if (iParam0 == 48)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

bool func_309()
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

bool func_310(int iParam0, int iParam1, int iParam2, float fParam3, float fParam4, int iParam5)
{
	char* sVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	Vector3 vVar7;
	
	sVar0 = func_308(iParam0);
	sVar1 = func_306(iParam0, iParam1);
	if (GAMEPLAY::GET_HASH_KEY(sVar1) != 0)
	{
		fVar4 = 1f;
		if (iParam5)
		{
			_get_screen_active_resolution(&iVar2, &iVar3);
			fVar5 = _get_screen_aspect_ratio(0);
			if (func_309())
			{
				iVar2 = round(to_float(iVar3) * fVar5);
			}
			fVar6 = to_float(iVar2) / to_float(iVar3);
			fVar4 = fVar6 / fVar5;
			if (func_309())
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
		vVar7.x *= func_311(iParam0) / fVar4;
		vVar7.y *= func_311(iParam0) / fVar4;
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

float func_311(int iParam0)
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

bool func_312(int iParam0, int iParam1)
{
	if (Global_2428492.f_1358.f_688 != 0)
	{
		return true;
	}
	if ((((((((!is_screen_faded_in() || (func_81(8, -1) && func_313() != 64)) || (get_pause_menu_state() != 0 && !iParam1)) || (is_player_switch_in_progress() && !iParam0)) || _0x2EAC52B4019E2782()) || Global_69749) || Global_17257.f_7861) || is_warning_message_active()) || Global_91330.f_1352)
	{
		return false;
	}
	return true;
}

auto func_313()
{
	return Global_1315846;
}

void func_314()
{
	if (iLocal_99 == 0)
	{
		if (!iLocal_111)
		{
			func_315("PAH_QUICK_D1", 0, 0);
		}
	}
	else if (!iLocal_112)
	{
		func_315("PAH_QUICK_D2", 0, 0);
	}
}

void func_315(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	StringCopy(&(Global_17257.f_4562), sParam0, 16);
	Global_17257.f_4632 = 0;
	Global_17257.f_4633 = 0;
	Global_17257.f_4634 = 0;
	Global_17257.f_4635 = 0;
	Global_17257.f_4636 = iParam1;
	Global_17257.f_4637 = GAMEPLAY::GET_GAME_TIMER();
	Global_17257.f_4638 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17257.f_4566[iVar0] = 0;
		iVar0++;
	}
}

void func_316()
{
	int iVar0;
	
	iVar0 = true;
	if ((((is_pause_menu_active() || is_system_ui_being_displayed()) || is_warning_message_active()) || _network_is_text_chat_active()) || Global_91330.f_1352)
	{
		iVar0 = false;
	}
	if ((iVar0 && is_control_just_pressed(2, 201)) || (iVar0 && Local_115.f_6))
	{
		if (!func_354())
		{
			if (iLocal_99 == 0)
			{
				if (func_286())
				{
					iLocal_104 = -1;
					iLocal_103 = 1;
					iLocal_102 = 1;
				}
			}
			else if (func_281())
			{
				iLocal_103 = 1;
				iLocal_102 = 1;
				iLocal_104 = uLocal_105[iLocal_99 - 1];
			}
		}
		else
		{
			iLocal_113 = 1;
		}
	}
	else if (!iVar0)
	{
	}
	else if (is_control_just_pressed(2, 202) || Local_115.f_7)
	{
		iLocal_103 = 1;
	}
	else if ((is_control_just_pressed(2, 188) && func_317(&uLocal_114, &(Local_115.f_4), 1)) || (Local_115.f_8 && func_317(&uLocal_114, &(Local_115.f_4), 1)))
	{
		if (Local_115.f_4 > 0)
		{
			iLocal_99--;
			if (iLocal_99 < 0)
			{
				iLocal_99 = iLocal_98 - 1;
			}
			func_318(iLocal_99, 1, 1);
		}
	}
	else if ((is_control_just_pressed(2, 187) && func_317(&uLocal_114, &(Local_115.f_4), 1)) || (Local_115.f_9 && func_317(&uLocal_114, &(Local_115.f_4), 1)))
	{
		if (Local_115.f_4 < 0)
		{
			iLocal_99++;
			if (iLocal_99 > iLocal_98 - 1)
			{
				iLocal_99 = 0;
			}
			func_318(iLocal_99, 1, 1);
		}
	}
	hide_hud_component_this_frame(7);
	hide_hud_component_this_frame(8);
	hide_hud_component_this_frame(9);
}

int func_317(auto uParam0, auto uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 150;
	if (iParam2)
	{
		if (((is_disabled_control_pressed(2, 188) || get_control_normal(2, 219) < -0.3f) || is_disabled_control_pressed(2, 241)) || is_control_just_pressed(2, 188))
		{
			if (is_disabled_control_pressed(2, 241))
			{
				iVar1 = 100;
			}
			if (absi(get_time_difference(*uParam0, NETWORK::GET_NETWORK_TIME())) > iVar1)
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME();
				iVar0 = 1;
				*uParam1 = 1;
			}
		}
		if (((is_disabled_control_pressed(2, 187) || get_control_normal(2, 219) > 0.3f) || is_disabled_control_pressed(2, 242)) || is_control_just_pressed(2, 187))
		{
			if (is_disabled_control_pressed(2, 242))
			{
				iVar1 = 100;
			}
			if (absi(get_time_difference(*uParam0, NETWORK::GET_NETWORK_TIME())) > iVar1)
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME();
				iVar0 = 1;
				*uParam1 = -1;
			}
		}
	}
	else
	{
		if ((is_disabled_control_pressed(2, 190) || get_control_normal(2, 218) > 0.3f) || is_control_just_released(2, 201))
		{
			if (absi(get_time_difference(*uParam0, NETWORK::GET_NETWORK_TIME())) > iVar1)
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME();
				iVar0 = 1;
				*uParam1 = 1;
			}
		}
		if (is_disabled_control_pressed(2, 189) || get_control_normal(2, 218) < -0.3f)
		{
			if (absi(get_time_difference(*uParam0, NETWORK::GET_NETWORK_TIME())) > iVar1)
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME();
				iVar0 = 1;
				*uParam1 = -1;
			}
		}
	}
	return iVar0;
}

void func_318(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	Global_17257.f_5606 = iParam0;
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

void func_319()
{
	struct<4> Var0;
	char* sVar4;
	int iVar5;
	
	func_332(0);
	func_331("PAH_QUICK_1");
	func_330(1, 2, 1, 1, 1);
	func_329(1, 1, 0, 0, 0);
	iLocal_98 = 0;
	Var0 = {func_328(func_175(5, -1))};
	sVar4 = func_327(&Var0);
	iLocal_111 = func_286();
	iLocal_112 = func_281();
	func_323(iLocal_98, sVar4, 0, iLocal_111, 0, 0);
	iLocal_98++;
	iVar5 = 0;
	while (iVar5 < 5)
	{
		if (func_322(iVar5) > 0)
		{
			if (func_171(func_322(iVar5)))
			{
				uLocal_105[iVar5] = func_322(iVar5);
				func_323(iLocal_98, func_321(uLocal_105[iVar5]), 0, iLocal_112, 0, 0);
				iLocal_98++;
			}
		}
		iVar5++;
	}
	func_320(201, "ITEM_SELECT", -1, 0);
	func_320(202, "ITEM_BACK", -1, 0);
	func_318(iLocal_99, 1, 1);
}

void func_320(int iParam0, char* sParam1, int iParam2, int iParam3)
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
	if (!iParam3)
	{
		GAMEPLAY::SET_BIT(&(Global_17257.f_4922), Global_17257.f_4639);
	}
	StringCopy(&(Global_17257.f_4641[Global_17257.f_4639 /*16*/]), sVar0, 64);
	StringCopy(&(Global_17257.f_4834[Global_17257.f_4639 /*4*/]), sParam1, 16);
	Global_17257.f_4883[Global_17257.f_4639] = iParam2;
	Global_17257.f_4896[Global_17257.f_4639] = iParam0;
	Global_17257.f_4909[Global_17257.f_4639] = 31;
	Global_17257.f_4639++;
}

char* func_321(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "MP_WHOUSE_0";
			break;
		
		case 2:
			return "MP_WHOUSE_1";
			break;
		
		case 3:
			return "MP_WHOUSE_2";
			break;
		
		case 4:
			return "MP_WHOUSE_3";
			break;
		
		case 5:
			return "MP_WHOUSE_4";
			break;
		
		case 6:
			return "MP_WHOUSE_5";
			break;
		
		case 7:
			return "MP_WHOUSE_6";
			break;
		
		case 8:
			return "MP_WHOUSE_7";
			break;
		
		case 9:
			return "MP_WHOUSE_8";
			break;
		
		case 10:
			return "MP_WHOUSE_9";
			break;
		
		case 11:
			return "MP_WHOUSE_10";
			break;
		
		case 12:
			return "MP_WHOUSE_11";
			break;
		
		case 13:
			return "MP_WHOUSE_12";
			break;
		
		case 14:
			return "MP_WHOUSE_13";
			break;
		
		case 15:
			return "MP_WHOUSE_14";
			break;
		
		case 16:
			return "MP_WHOUSE_15";
			break;
		
		case 17:
			return "MP_WHOUSE_16";
			break;
		
		case 18:
			return "MP_WHOUSE_17";
			break;
		
		case 19:
			return "MP_WHOUSE_18";
			break;
		
		case 20:
			return "MP_WHOUSE_19";
			break;
		
		case 21:
			return "MP_WHOUSE_20";
			break;
		
		case 22:
			return "MP_WHOUSE_21";
			break;
	}
	return "";
}

int func_322(int iParam0)
{
	if (Global_1587523[player_id() /*444*/].f_250.f_68[iParam0 /*2*/] != 0)
	{
		return Global_1587523[player_id() /*444*/].f_250.f_68[iParam0 /*2*/];
	}
	return 0;
}

void func_323(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	auto uVar3;
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
		func_326(Global_17257.f_5088, 1);
	}
	else
	{
		func_326(Global_17257.f_5088, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_325(&(Global_17257.f_73[Global_17257.f_5090 /*6*/]));
		if (Global_17257.f_4945[Global_17257.f_5089])
		{
			func_310(26, 1, 0, &fVar2, &uVar3, 0);
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
			fVar4 = func_324(&(Global_17257.f_73[Global_17257.f_5090 /*6*/]));
			if (fVar4 > Global_17257.f_5612[iParam0])
			{
				Global_17257.f_5612[iParam0] = fVar4;
			}
		}
	}
	GAMEPLAY::SET_BIT(&(Global_17257.f_4959[iParam0]), Global_17257.f_5089);
	Global_17257.f_5089++;
	Global_17257.f_5611 = 1;
	Global_17257.f_5609 = Global_17257.f_5090 - 1;
	Global_17257.f_5610 = 0;
	Global_17257.f_5608 = iParam2;
}

float func_324(char* sParam0)
{
	if (!does_text_label_exist(sParam0))
	{
	}
	return _get_text_scale_height(0.35f, 0);
}

float func_325(char* sParam0)
{
	if (!is_string_null(sParam0))
	{
		if (GAMEPLAY::GET_HASH_KEY(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_295(0, 1, 0, 0, 0, 0);
	_set_text_entry_for_width(sParam0);
	return _get_text_screen_width(1);
}

void func_326(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = floor(to_float(iParam0) / 32f);
	if (iParam1)
	{
		GAMEPLAY::SET_BIT(&(Global_17257.f_5881[iVar0]), iParam0 - iVar0 * 32);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Global_17257.f_5881[iVar0]), iParam0 - iVar0 * 32);
	}
}

auto func_327(auto uParam0)
{
	return uParam0;
}

struct<4> func_328(int iParam0)
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

void func_329(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_330(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17257.f_4953[0] = iParam0;
	Global_17257.f_4953[1] = iParam1;
	Global_17257.f_4953[2] = iParam2;
	Global_17257.f_4953[3] = iParam3;
	Global_17257.f_4953[4] = iParam4;
}

void func_331(char* sParam0)
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

void func_332(int iParam0)
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

int func_333(char* sParam0, int iParam1, int iParam2)
{
	auto uVar0;
	int iVar1;
	int iVar2;
	
	if (!func_279(&uVar0, 1, iParam1))
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
	iVar2 = func_334(&(Global_17257.f_5530[uVar0 /*10*/]));
	if (!iVar1 || !iVar2)
	{
	}
	return (iVar1 && iVar2);
}

int func_334(auto uParam0)
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
						*uParam0.f_8 = GAMEPLAY::GET_GAME_TIMER();
						*uParam0.f_9 = 2;
					}
				}
			}
			else
			{
				*uParam0.f_8 = GAMEPLAY::GET_GAME_TIMER();
				*uParam0.f_9 = 2;
			}
			break;
		
		case 1:
			if (has_scaleform_movie_loaded(*uParam0))
			{
				*uParam0.f_8 = GAMEPLAY::GET_GAME_TIMER();
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

void func_335(auto uParam0)
{
	func_344(uParam0, uParam0.f_1, uParam0.f_2, uParam0.f_3, 0);
	*uParam0.f_6 = (is_control_just_pressed(2, 201) || is_disabled_control_just_pressed(2, 201));
	*uParam0.f_7 = (is_control_just_pressed(2, 202) || is_disabled_control_just_pressed(2, 202));
	*uParam0.f_8 = (*uParam0.f_1 < -64 || is_control_just_pressed(2, 188));
	*uParam0.f_9 = (*uParam0.f_1 > 64 || is_control_just_pressed(2, 187));
	if (((((func_333(0, -1, 0) && get_pause_menu_state() == 0) && !is_system_ui_being_displayed()) && !is_warning_message_active()) && !_network_is_text_chat_active()) && !Global_91330.f_1352)
	{
		if (GAMEPLAY::IS_PC_VERSION() && !_network_is_text_chat_active())
		{
			if (_is_input_just_disabled(2))
			{
				CONTROLS::DISABLE_CONTROL_ACTION(0, 1, 1);
				CONTROLS::DISABLE_CONTROL_ACTION(0, 2, 1);
				CONTROLS::DISABLE_CONTROL_ACTION(2, 200, 1);
				enable_control_action(0, 237, 1);
				enable_control_action(0, 238, 1);
				enable_control_action(0, 241, 1);
				enable_control_action(0, 242, 1);
				if ((Global_2562129 == -1 || Global_2562129 == -4) || Global_2562129 == -6)
				{
					enable_control_action(1, 1, 1);
					enable_control_action(1, 2, 1);
				}
				else
				{
					CONTROLS::DISABLE_CONTROL_ACTION(1, 1, 1);
					CONTROLS::DISABLE_CONTROL_ACTION(1, 2, 1);
				}
				func_341(0, 0, 0, 1);
				func_340(0, -1, 1);
			}
			if (func_339())
			{
				if (Global_2562129 == iLocal_99)
				{
					*uParam0.f_6 = 1;
				}
				else
				{
					iLocal_99 = Global_2562129;
					func_318(iLocal_99, 1, 1);
				}
			}
			if (func_338())
			{
				*uParam0.f_7 = 1;
			}
			if (func_337(0, 0, 0))
			{
				*uParam0.f_8 = 1;
			}
			if (func_336(0, 0, 0))
			{
				*uParam0.f_9 = 1;
			}
		}
	}
}

bool func_336(int iParam0, int iParam1, int iParam2)
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

bool func_337(int iParam0, int iParam1, int iParam2)
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

bool func_338()
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

bool func_339()
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

bool func_340(int iParam0, int iParam1, int iParam2)
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

void func_341(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_343();
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
				func_342(0);
			}
			return;
		}
		if (((Global_2562123 >= fVar0 && Global_2562123 <= fVar2) && Global_2562124 >= fVar3 + fVar6) && Global_2562124 < fVar3 + 0.034722f)
		{
			Global_2562129 = -3;
			if (iParam3)
			{
				func_342(0);
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
				func_305(fVar4, fVar5 + IntToFloat(iVar13) * 0.034722f, Global_17256, 0.034722f - 0.0015f, 255, 255, 255, iVar10);
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

void func_342(int iParam0)
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
		func_305(fVar0, fVar1, Global_17256, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_2562129 == -3)
	{
		func_305(fVar0, fVar1 + fVar2, Global_17256, fVar2, 255, 255, 255, iVar3);
	}
	_0xE3A3DB414A373DAB();
}

void func_343()
{
	Global_2562125 = Global_2562123;
	Global_2562126 = Global_2562124;
	Global_2562123 = get_disabled_control_normal(2, 239);
	Global_2562124 = get_disabled_control_normal(2, 240);
	Global_2562127 = Global_2562123 - Global_2562125;
	Global_2562128 = Global_2562124 - Global_2562126;
}

void func_344(auto uParam0, auto uParam1, auto uParam2, auto uParam3, int iParam4)
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

void func_345()
{
	int iVar0;
	
	iVar0 = iLocal_1166;
	if (ENTITY::IS_ENTITY_DEAD(iVar0, 0))
	{
		return;
	}
	if (network_has_control_of_entity(iVar0))
	{
		unk_0x065D03A9D6B2C6B5(iVar0, 0);
		_0x2311DD7159F00582(iVar0, 1);
		set_vehicle_doors_locked(iVar0, 4);
		if (get_vehicle_door_lock_status(iVar0) != 0 && get_vehicle_door_lock_status(iVar0) != 1)
		{
			GAMEPLAY::CLEAR_BIT(&iLocal_255, 15);
		}
	}
}

bool func_346()
{
	if (((((Local_125.f_27 && func_355()) && (!func_348(1) || func_284())) && (func_263() || func_286())) && func_347()) && (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0) && AI::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 1785177548) != 1))
	{
		return true;
	}
	return false;
}

bool func_347()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1166) && !ENTITY::IS_ENTITY_DEAD(iLocal_1166, 0))
	{
		iVar1 = get_vehicle_max_number_of_passengers(iLocal_1166) + 1;
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (!is_vehicle_seat_free(iLocal_1166, iVar0 - 1))
			{
				iVar2 = get_ped_in_vehicle_seat(iLocal_1166, iVar0 - 1);
				if (!PED::IS_PED_INJURED(iVar2))
				{
					if (is_ped_a_player(iVar2))
					{
						if (!func_205(_network_get_ped_player(iVar2)))
						{
							return false;
						}
					}
				}
			}
			iVar0++;
		}
	}
	return true;
}

int func_348(int iParam0)
{
	return func_349(player_id(), iParam0);
}

int func_349(int iParam0, int iParam1)
{
	if (!iParam1)
	{
		if (func_285(iParam0))
		{
			return false;
		}
	}
	return Global_1610316[iParam0 /*174*/].f_10 != func_8();
}

void func_350()
{
	int iVar0;
	
	if (!GAMEPLAY::IS_BIT_SET(iLocal_255, 13))
	{
		if (!is_help_message_being_displayed())
		{
			iVar0 = func_4(1183, -1, 0);
			if (!GAMEPLAY::IS_BIT_SET(iVar0, 22) || !GAMEPLAY::IS_BIT_SET(iVar0, 23))
			{
				func_351("HTX_HELP2", -1);
				if (!GAMEPLAY::IS_BIT_SET(iVar0, 22))
				{
					GAMEPLAY::SET_BIT(&iVar0, 22);
				}
				else
				{
					GAMEPLAY::SET_BIT(&iVar0, 23);
				}
				func_198(1183, iVar0, -1, 1);
				GAMEPLAY::SET_BIT(&iLocal_255, 13);
			}
			else
			{
				GAMEPLAY::SET_BIT(&iLocal_255, 13);
			}
		}
	}
}

void func_351(char* sParam0, int iParam1)
{
	_set_text_component_format(sParam0);
	_display_help_text_from_string_label(0, 0, true, iParam1);
}

void func_352(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<6> Var0;
	
	Var0 = 479;
	Var0.f_1 = player_id();
	Var0.f_2 = iParam1;
	Var0.f_4 = iParam3;
	Var0.f_5 = iParam0;
	Var0.f_3 = iParam2;
	if (!iParam0 == 0)
	{
		trigger_script_event(1, &Var0, 6, iParam0);
	}
}

int func_353(int iParam0)
{
	auto uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar1 = iLocal_1166;
	if (ENTITY::IS_ENTITY_DEAD(iVar1, 0))
	{
		return 0;
	}
	iVar2 = _get_vehicle_model_max_number_of_passengers(ENTITY::GET_ENTITY_MODEL(iVar1));
	iVar3 = 0;
	while (iVar3 < iVar2)
	{
		iVar5 = iVar3 - 1;
		if (!is_vehicle_seat_free(iVar1, iVar5))
		{
			iVar4 = _network_get_ped_player(get_ped_in_vehicle_seat(iVar1, iVar5));
			if (iVar4 != func_8() && func_129(iVar4, 1, 1))
			{
				if (!Local_125.f_28 == iVar4 || iParam0)
				{
					GAMEPLAY::SET_BIT(&uVar0, iVar4);
				}
			}
		}
		iVar3++;
	}
	return uVar0;
}

bool func_354()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	Vector3 vVar4;
	Vector3 vVar7;
	
	iVar3 = iLocal_1166;
	if (ENTITY::IS_ENTITY_DEAD(iVar3, 0))
	{
		return false;
	}
	vVar4 = {ENTITY::GET_ENTITY_COORDS(iVar3, 1)};
	iVar2 = false;
	while (iVar2 < 32)
	{
		iVar0 = int_to_playerindex(iVar2);
		if (func_129(iVar0, 1, 1))
		{
			iVar1 = get_player_ped(iVar0);
			if (!ENTITY::IS_ENTITY_DEAD(iVar1, 0))
			{
				vVar7 = {ENTITY::GET_ENTITY_COORDS(iVar1, 1)};
				if (vdist(vVar7, vVar4) < 30f)
				{
					if (is_ped_in_vehicle(iVar1, iVar3, 1))
					{
						if (!is_ped_sitting_in_vehicle(iVar1, iVar3))
						{
							return true;
						}
					}
				}
			}
		}
		iVar2++;
	}
	return false;
}

int func_355()
{
	return func_175(5, -1) > 0;
}

auto func_356(char* sParam0)
{
	_0x0A24DA3A41B718F5(sParam0);
	return _0x10BDDBFC529428DD(0);
}

bool func_357(int iParam0, int iParam1)
{
	if (is_pause_menu_active())
	{
		return false;
	}
	if (iParam0 == 1)
	{
		if (func_274())
		{
			return false;
		}
	}
	if (func_143())
	{
		return false;
	}
	if (iParam1 == 1)
	{
		if (func_128(0))
		{
			return false;
		}
	}
	if (func_81(8, -1))
	{
		return false;
	}
	if (is_system_ui_being_displayed())
	{
		return false;
	}
	if (func_33())
	{
		return false;
	}
	if (Global_52930)
	{
		return false;
	}
	if (Global_68058)
	{
		return false;
	}
	if (is_warning_message_active())
	{
		return false;
	}
	if (Global_1315839)
	{
		return false;
	}
	if (Global_1573691)
	{
		return false;
	}
	return true;
}

void func_358()
{
	int iVar0;
	
	if (!GAMEPLAY::IS_BIT_SET(vLocal_158[participant_id_to_int() /*3*/].f_1, 7))
	{
		iVar0 = false;
		if (_is_input_disabled(0))
		{
			if (is_disabled_control_pressed(0, 22))
			{
				iVar0 = true;
			}
		}
		else if (is_disabled_control_pressed(0, 99) || is_disabled_control_pressed(0, 100))
		{
			iVar0 = true;
		}
		if (iVar0)
		{
			if (!func_272())
			{
				iVar0 = false;
			}
		}
		if (iVar0)
		{
			if (((((((!func_135(iLocal_1166) && is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), iLocal_1166, 0)) && get_ped_in_vehicle_seat(iLocal_1166, 0) != PLAYER::PLAYER_PED_ID()) && get_entity_speed(iLocal_1166) < 10f) && AI::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -275944640) != 1) && AI::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -275944640) != 0) && func_357(1, 1)) && get_entity_height_above_ground(iLocal_1166) < 40f)
			{
				if (func_108(&uLocal_1144, 275, 0))
				{
					AI::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					task_rappel_from_heli(PLAYER::PLAYER_PED_ID(), 1092616192);
					GAMEPLAY::SET_BIT(&(vLocal_158[participant_id_to_int() /*3*/].f_1), 7);
				}
			}
			else if (func_193(&uLocal_1144))
			{
				func_127(&uLocal_1144);
			}
		}
		else if (func_193(&uLocal_1144))
		{
			func_127(&uLocal_1144);
		}
	}
}

void func_359()
{
	if (!GAMEPLAY::IS_BIT_SET(iLocal_255, 12))
	{
		Global_1573484 = 1;
		GAMEPLAY::SET_BIT(&iLocal_255, 12);
	}
}

void func_360()
{
	if (does_blip_exist(iLocal_256))
	{
		remove_blip(&iLocal_256);
	}
}

void func_361()
{
	if (GAMEPLAY::IS_BIT_SET(iLocal_255, 12))
	{
		Global_1573484 = 0;
		GAMEPLAY::CLEAR_BIT(&iLocal_255, 12);
	}
}

void func_362()
{
	int iVar0;
	int iVar1;
	auto uVar2;
	auto uVar3;
	
	if (((((func_129(player_id(), 1, 1) && is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_1166, 15f, 15f, 5f, 0, 1, 0)) && !is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1)) && get_entity_speed(iLocal_1166) < 5f) && !func_363(iLocal_1166, 0)) && func_357(1, 0))
	{
		GAMEPLAY::SET_BIT(&iLocal_255, 2);
		if (GAMEPLAY::IS_BIT_SET(vLocal_158[participant_id_to_int() /*3*/].f_1, false))
		{
			func_344(&iVar0, &iVar1, &uVar2, &uVar3, 0);
			if (((iVar1 > 28 || iVar1 < -28) || iVar0 > 28) || iVar0 < -28)
			{
				if (iLocal_261 == 0)
				{
					settimera(0);
					iLocal_261 = 1;
				}
			}
			else
			{
				iLocal_261 = 0;
			}
			if (iLocal_261 == 1)
			{
				if (timera() > 275)
				{
					if (!is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
					{
						AI::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
						GAMEPLAY::CLEAR_BIT(&(vLocal_158[participant_id_to_int() /*3*/].f_1), false);
						iLocal_261 = 0;
					}
				}
			}
		}
		else
		{
			GAMEPLAY::SET_BIT(&iLocal_255, 2);
		}
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&iLocal_255, 2);
		if (GAMEPLAY::IS_BIT_SET(vLocal_158[participant_id_to_int() /*3*/].f_1, false))
		{
			if (!is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
			{
				AI::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				iLocal_261 = 0;
			}
			GAMEPLAY::CLEAR_BIT(&(vLocal_158[participant_id_to_int() /*3*/].f_1), false);
		}
	}
}

bool func_363(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		iVar1 = get_vehicle_max_number_of_passengers(iParam0) + 1;
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (is_vehicle_seat_free(iParam0, iVar0 - 1))
			{
				return false;
			}
			else if (!iParam1)
			{
				iVar2 = get_ped_in_vehicle_seat(iParam0, iVar0 - 1);
				if (PED::IS_PED_INJURED(iVar2))
				{
					return false;
				}
			}
			iVar0++;
		}
	}
	return true;
}

void func_364()
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Local_125.f_24 != 4)
	{
		if (GAMEPLAY::IS_BIT_SET(iLocal_255, 8))
		{
			GAMEPLAY::CLEAR_BIT(&iLocal_255, 8);
		}
	}
	if (!func_134(Local_125.f_4) && !func_135(iLocal_1166))
	{
		if (network_has_control_of_network_id(Local_125.f_4) || (!_0xA1607996431332DF(Local_125.f_4) && network_is_host_of_this_script()))
		{
			func_379();
			func_378();
			switch (Local_125.f_24)
			{
				case 0:
					break;
				
				case 1:
					if (AI::GET_SCRIPT_TASK_STATUS(net_to_ped(Local_125.f_4), -1273030092) != 1 && AI::GET_SCRIPT_TASK_STATUS(net_to_ped(Local_125.f_4), -1273030092) != 0)
					{
						if (GAMEPLAY::IS_BIT_SET(iLocal_255, 4))
						{
							task_heli_mission(net_to_ped(Local_125.f_4), iLocal_1166, false, false, Local_125.f_6, 19, 30f, 7.5f, Local_125.f_9, round(10f), round(10f), -1f, 8225);
							GAMEPLAY::CLEAR_BIT(&iLocal_255, 17);
						}
					}
					else if (!GAMEPLAY::IS_BIT_SET(iLocal_255, 4))
					{
						func_155();
					}
					else if (AI::GET_SCRIPT_TASK_STATUS(net_to_ped(Local_125.f_4), -1273030092) == 1)
					{
						if (Local_125.f_9 > -1f)
						{
							if (ENTITY::IS_ENTITY_AT_COORD(net_to_ped(Local_125.f_4), Local_125.f_6, 7.5f + 5f, 7.5f + 5f, 50f, false, true, 0))
							{
								fVar0 = get_entity_heading(net_to_ped(Local_125.f_4));
								fVar1 = fVar0 - Local_125.f_9;
								if (fVar1 < 0f)
								{
									fVar1 += 360f;
								}
								if (fVar1 > 180f)
								{
									fVar1 = 360f - fVar1;
								}
							}
						}
					}
					break;
				
				case 2:
					if (iLocal_952 != 2)
					{
						func_155();
						iLocal_952 = 2;
					}
					if (AI::GET_SCRIPT_TASK_STATUS(net_to_ped(Local_125.f_4), -1273030092) != 1 && AI::GET_SCRIPT_TASK_STATUS(net_to_ped(Local_125.f_4), -1273030092) != 0)
					{
						task_heli_mission(net_to_ped(Local_125.f_4), iLocal_1166, false, false, Local_125.f_10, 4, 30f, 7.5f, -1f, 40, 40, -1f, 0);
					}
					break;
				
				case 3:
					break;
				
				case 4:
					if (iLocal_952 != 4)
					{
						if (iLocal_952 != 3)
						{
							func_155();
						}
						if (iLocal_952 == 3)
						{
							Local_125.f_20 = {ENTITY::GET_ENTITY_COORDS(iLocal_1166, 1)};
						}
						else
						{
							Local_125.f_20 = {0f, 0f, 0f};
						}
						iLocal_952 = 4;
					}
					else if (vmag(Local_125.f_20) > 0f)
					{
						if (vdist(ENTITY::GET_ENTITY_COORDS(iLocal_1166, 1), Local_125.f_20) > 10f)
						{
							if (AI::GET_SCRIPT_TASK_STATUS(net_to_ped(Local_125.f_4), -1273030092) != 1 && AI::GET_SCRIPT_TASK_STATUS(net_to_ped(Local_125.f_4), -1273030092) != 0)
							{
								task_heli_mission(net_to_ped(Local_125.f_4), iLocal_1166, false, false, Local_125.f_20, 4, 30f, 7.5f, -1f, 40, 40, -1f, 0);
							}
						}
					}
					if (!GAMEPLAY::IS_BIT_SET(iLocal_255, 8) && GAMEPLAY::IS_BIT_SET(Local_125.f_1, 14))
					{
						if (func_189())
						{
							if (func_142())
							{
								func_107(&uLocal_957, 3, net_to_ped(Local_125.f_4), "FM_Pilot", 0, 1);
								if (!iLocal_157)
								{
									func_188(&uLocal_957, "CT_AUD", "MPCT_HPidle", 12, 0, 0, 1);
								}
								else
								{
									func_377(&uLocal_957, "CT_AUD", "MPCT_HPidle", "MPCT_HPidle_06", 12, 0, 0);
								}
							}
							else
							{
								func_10(1);
								func_107(&uLocal_957, 2, net_to_ped(Local_125.f_4), "EXEC_PILOT", 0, 1);
								if (!iLocal_157)
								{
									func_90(&uLocal_957, "EXHELAU", "EXHEL_IDLE", 12, 0, 0, 1);
								}
								else
								{
									func_376(&uLocal_957, "EXHELAU", "EXHEL_IDLE", "EXHEL_IDLE_02", 12, 0, 0);
								}
							}
							GAMEPLAY::SET_BIT(&iLocal_255, 8);
						}
					}
					break;
				
				case 5:
					if (!network_has_control_of_entity(iLocal_1166))
					{
						network_request_control_of_entity(iLocal_1166);
					}
					if (GAMEPLAY::IS_BIT_SET(iLocal_255, 15))
					{
						func_345();
					}
					if (!GAMEPLAY::IS_BIT_SET(iLocal_255, 14))
					{
						if (iLocal_952 != 5)
						{
							func_155();
							iLocal_952 = 5;
						}
						if (AI::GET_SCRIPT_TASK_STATUS(net_to_ped(Local_125.f_4), -1273030092) != 1 && AI::GET_SCRIPT_TASK_STATUS(net_to_ped(Local_125.f_4), -1273030092) != 0)
						{
							task_heli_mission(net_to_ped(Local_125.f_4), iLocal_1166, false, false, Local_125.f_29, 4, 30f, 7.5f, -1f, 40, 40, -1f, 0);
						}
						if (func_375() && GAMEPLAY::IS_BIT_SET(Local_125.f_1, 15))
						{
							if (network_has_control_of_entity(iLocal_1166))
							{
								freeze_entity_position(iLocal_1166, true);
								func_155();
								if (iLocal_104 == -1)
								{
									if (GAMEPLAY::IS_BIT_SET(iLocal_255, 19))
									{
										iVar2 = get_time_difference(NETWORK::GET_NETWORK_TIME(), iLocal_1151);
										if (iVar2 > 10000)
										{
											stop_player_teleport();
											iLocal_1151 = NETWORK::GET_NETWORK_TIME();
										}
									}
									else
									{
										iLocal_1151 = NETWORK::GET_NETWORK_TIME();
										GAMEPLAY::SET_BIT(&iLocal_255, 19);
									}
									if (func_367(Local_125.f_29, 0f, 1, 0, 0, 0, 1, 0, 1, 0))
									{
										GAMEPLAY::SET_BIT(&iLocal_255, 14);
										GAMEPLAY::CLEAR_BIT(&iLocal_255, 19);
										if (iLocal_104 == -1 && !func_206(Local_125.f_5))
										{
											freeze_entity_position(iLocal_1166, false);
											set_entity_collision(iLocal_1166, true, 0);
											set_vehicle_doors_locked(iLocal_1166, 1);
											Local_125.f_23 = 5;
											func_155();
										}
									}
								}
								else if (iLocal_104 > -1)
								{
									freeze_entity_position(iLocal_1166, false);
									set_entity_collision(iLocal_1166, true, 0);
									set_vehicle_doors_locked(iLocal_1166, 1);
									Local_125.f_23 = 5;
									func_155();
								}
							}
						}
					}
					break;
				
				case 7:
					func_130();
					if (!GAMEPLAY::IS_BIT_SET(iLocal_255, 9))
					{
						if (func_189())
						{
							if (func_142())
							{
								func_107(&uLocal_957, 3, net_to_ped(Local_125.f_4), "FM_Pilot", 0, 1);
								func_188(&uLocal_957, "CT_AUD", "MPCT_HPwrn2", 12, 0, 0, 1);
							}
							else
							{
								func_107(&uLocal_957, 2, net_to_ped(Local_125.f_4), "EXEC_PILOT", 0, 1);
								func_90(&uLocal_957, "EXHELAU", "EXHEL_FORCED", 12, 0, 0, 1);
							}
							set_vehicle_doors_locked(iLocal_1166, 2);
							GAMEPLAY::SET_BIT(&iLocal_255, 9);
						}
					}
					break;
				
				case 8:
					if (!_0x291E373D483E7EE7(iLocal_1166))
					{
						func_130();
						if (get_vehicle_number_of_passengers(iLocal_1166) > 0)
						{
							if (!func_134(Local_125.f_4))
							{
								if (!ENTITY::IS_ENTITY_DEAD(iLocal_1166, 0))
								{
									if (!func_185())
									{
										task_perform_sequence(net_to_ped(Local_125.f_4), iLocal_258);
										if (network_does_network_id_exist(Local_125.f_3))
										{
											func_366(&(Local_125.f_3));
										}
										if (func_199())
										{
											func_365();
										}
										if (network_does_network_id_exist(Local_125.f_4))
										{
											func_366(&(Local_125.f_4));
										}
									}
								}
							}
						}
						else if (!func_134(Local_125.f_4))
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_1166, 0))
							{
								task_perform_sequence(net_to_ped(Local_125.f_4), iLocal_259);
								set_blocking_of_non_temporary_events(net_to_ped(Local_125.f_4), true);
								if (network_does_network_id_exist(Local_125.f_3))
								{
									func_366(&(Local_125.f_3));
								}
								if (func_199())
								{
									func_365();
								}
								if (network_does_network_id_exist(Local_125.f_4))
								{
									func_366(&(Local_125.f_4));
								}
							}
						}
					}
					return;
				}
		}
		if (func_129(player_id(), 1, 1))
		{
			if (is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), iLocal_1166, 0))
			{
				switch (Local_125.f_24)
				{
					case 7:
						if (!GAMEPLAY::IS_BIT_SET(iLocal_255, 10))
						{
							iVar3 = 0;
							while (iVar3 < get_vehicle_max_number_of_passengers(iLocal_1166) + 1)
							{
								iVar4 = get_ped_in_vehicle_seat(iLocal_1166, iVar3 - 1);
								if (iVar4 != 0)
								{
									if (!PED::IS_PED_INJURED(iVar4))
									{
										if (is_ped_a_player(iVar4))
										{
											func_131(func_132(_network_get_ped_player(iVar4)), 0, 0f, 0, 0, 0);
										}
									}
								}
								iVar3++;
							}
							GAMEPLAY::SET_BIT(&iLocal_255, 10);
						}
						break;
					}
				}
			}
	}
}

void func_365()
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_2460486.f_280))
	{
		Global_2460486.f_4982 = 1;
	}
}

void func_366(auto uParam0)
{
	int iVar0;
	
	if (network_ENTITY::DOES_ENTITY_EXIST_with_network_id(*uParam0))
	{
		iVar0 = net_to_ent(*uParam0);
		set_entity_as_no_longer_needed(&iVar0);
	}
}

bool func_367(Vector3 vParam0, Vector3 fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	Vector3 vVar0;
	float fVar3;
	int iVar4;
	
	Global_17118.f_6 = 1;
	if (is_player_switch_in_progress() && !iParam9)
	{
		if (Global_2428492.f_724)
		{
			func_372(0, iParam9);
		}
		return false;
	}
	if ((is_new_load_scene_active() && !iParam9) && !is_player_teleport_active())
	{
		return false;
	}
	if (!func_371())
	{
		if (func_370(player_id(), 1))
		{
			if (((iParam9 && func_129(player_id(), 1, 0)) && is_player_switch_in_progress()) && Global_2418472[player_id() /*313*/].f_220 == 1)
			{
			}
			else
			{
				return false;
			}
		}
	}
	if (fParam3 < 0f)
	{
		fParam3 += 360f;
	}
	if (fParam3 >= 360f)
	{
		fParam3 += -360f;
	}
	if (!Global_2428492.f_724 && !iParam11)
	{
		vVar0 = {ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0)};
		if ((absf(vVar0.x - vParam0.x) < 0.2f && absf(vVar0.y - vParam0.y) < 0.2f) && absf(vVar0.z - vParam0.z) < 1.2f)
		{
			fVar3 = fParam3 - get_entity_heading(PLAYER::PLAYER_PED_ID());
			if (fVar3 > 180f)
			{
				fVar3 += -360f;
			}
			if (fVar3 < -180f)
			{
				fVar3 += 360f;
			}
			if (absf(fVar3) < 1f)
			{
				Global_2428492.f_724 = 0;
				Global_2428492.f_725 = 0;
				if (is_player_teleport_active())
				{
					stop_player_teleport();
				}
				return true;
			}
		}
	}
	if (((!vParam0.x == Global_2428492.f_726 || !vParam0.y == Global_2428492.f_726.f_1) || !vParam0.z == Global_2428492.f_726.f_2) || !fParam3 == Global_2428492.f_729)
	{
		if (Global_2428492.f_724 == 1)
		{
			if (get_time_difference(NETWORK::GET_NETWORK_TIME(), Global_2428492.f_730) < func_369(0))
			{
				return false;
			}
			stop_player_teleport();
			Global_2428492.f_725 = 1;
		}
		else
		{
			Global_2428492.f_725 = 0;
		}
		Global_2428492.f_726 = {vParam0};
		Global_2428492.f_729 = fParam3;
		Global_2428492.f_724 = 0;
	}
	if (!Global_2428492.f_724 && !is_player_teleport_active())
	{
		if (iParam4)
		{
			iParam5 = false;
		}
		iParam7 = iParam7;
		if (iParam7)
		{
		}
		if (iParam5)
		{
		}
		if (iParam8)
		{
		}
		if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (!GAMEPLAY::IS_BIT_SET(Global_91330.f_1300[44], 16))
			{
				func_368();
			}
			if (!get_current_ped_vehicle_weapon(PLAYER::PLAYER_PED_ID(), &(Global_2404956.f_473)))
			{
				Global_2404956.f_473 = 0;
			}
		}
		if (iParam9)
		{
			if (iParam4)
			{
				if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
				{
					iVar4 = get_vehicle_ped_is_using(PLAYER::PLAYER_PED_ID());
					set_entity_coords(iVar4, vParam0, 0, true, 1, 1);
					set_entity_heading(iVar4, fParam3);
				}
				else
				{
					set_entity_coords(PLAYER::PLAYER_PED_ID(), vParam0, 0, false, 0, 1);
					set_entity_heading(PLAYER::PLAYER_PED_ID(), fParam3);
				}
			}
			else
			{
				set_entity_coords(PLAYER::PLAYER_PED_ID(), vParam0, 0, false, 0, 1);
				set_entity_heading(PLAYER::PLAYER_PED_ID(), fParam3);
			}
			func_372(iParam6, iParam9);
			return true;
		}
		else
		{
			clear_focus();
			start_player_teleport(player_id(), vParam0, fParam3, iParam4, iParam10, 0);
		}
		Global_2428492.f_730 = NETWORK::GET_NETWORK_TIME();
		Global_2428492.f_724 = 1;
	}
	if (Global_2428492.f_724)
	{
		Global_17118.f_6 = 1;
		Global_2428492.f_730 = NETWORK::GET_NETWORK_TIME();
		if (iParam9)
		{
			if (vdist(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Global_2428492.f_726) < 2f)
			{
				if (is_player_teleport_active())
				{
					stop_player_teleport();
				}
				func_372(iParam6, iParam9);
				return true;
			}
		}
		if (!is_player_teleport_active())
		{
			func_372(iParam6, iParam9);
			return true;
		}
	}
	return false;
}

void func_368()
{
	Global_2404956.f_1672 = get_player_radio_station_index();
	if (unk_0x2DD39BF3E2F9C47F())
	{
		Global_2404956.f_1672 = 255;
	}
}

int func_369(int iParam0)
{
	if (is_screen_faded_out())
	{
		return 10000;
	}
	if (iParam0)
	{
		return 5000;
	}
	return 1000;
}

bool func_370(int iParam0, int iParam1)
{
	if (Global_2418472[iParam0 /*313*/].f_220 == 99)
	{
		return false;
	}
	if (iParam1)
	{
		if (Global_2418472[iParam0 /*313*/].f_220 == 13)
		{
			return false;
		}
	}
	return true;
}

auto func_371()
{
	return Global_1315888;
}

void func_372(int iParam0, int iParam1)
{
	if (!iParam0)
	{
		set_gameplay_cam_relative_pitch(0f, 1f);
		set_gameplay_cam_relative_heading(0f);
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		clear_ped_wetness(PLAYER::PLAYER_PED_ID());
	}
	if (!iParam1)
	{
		clear_focus();
	}
	if (is_player_teleport_active())
	{
		stop_player_teleport();
	}
	func_374();
	if (!GAMEPLAY::IS_BIT_SET(Global_1587523[player_id() /*444*/].f_250.f_7, 14))
	{
		func_373();
	}
}

void func_373()
{
	Global_2467356.f_80 = 1;
}

void func_374()
{
	struct<2> Var0;
	
	Global_2428492.f_724 = 0;
	Global_2428492.f_725 = 0;
	Global_2428492.f_726 = {9999.9f, 9999.9f, 9999.9f};
	Global_2404956.f_1673 = {Var0};
}

bool func_375()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!(Global_2443115.f_10 || GAMEPLAY::IS_BIT_SET(Global_1610316[player_id() /*174*/].f_169, 4)))
	{
		return false;
	}
	iVar1 = Global_2443115.f_21;
	iVar0 = false;
	while (iVar0 < 32)
	{
		if (GAMEPLAY::IS_BIT_SET(iVar1, iVar0))
		{
			iVar2 = int_to_playerindex(iVar0);
			if (func_129(iVar2, 1, 1))
			{
				if (!GAMEPLAY::IS_BIT_SET(Global_1610316[iVar0 /*174*/].f_169, 4))
				{
					return false;
				}
			}
		}
		iVar0++;
	}
	return true;
}

int func_376(auto uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_83(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_75(sParam2, iParam4, 0);
}

int func_377(auto uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_83(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	Global_2621441 = 1;
	return func_75(sParam2, iParam4, 0);
}

void func_378()
{
	if (iLocal_262 == 0)
	{
		iLocal_262 = 1;
	}
}

void func_379()
{
	set_audio_flag("MobileRadioInGame", 0);
	if (!func_250())
	{
		if (func_129(player_id(), 1, 1))
		{
			if (is_ped_sitting_in_vehicle(PLAYER::PLAYER_PED_ID(), iLocal_1166) && !func_275(PLAYER::PLAYER_PED_ID(), iLocal_1166, -1))
			{
				set_audio_flag("MobileRadioInGame", 1);
			}
		}
	}
}

void func_380()
{
	if (func_199())
	{
		return;
	}
	if (network_is_host_of_this_script())
	{
		if (!does_blip_exist(iLocal_256))
		{
			if (!func_135(iLocal_1166))
			{
				iLocal_256 = add_blip_for_entity(iLocal_1166);
				if (does_blip_exist(iLocal_256))
				{
					set_blip_sprite(iLocal_256, 422);
					_0x75A16C3DA34F1245(iLocal_256, false);
					set_blip_name_from_text_file(iLocal_256, "HTX_BLIP");
					iLocal_257 = 1;
					func_244(&iLocal_256, iLocal_257);
				}
			}
		}
	}
}

void func_381()
{
	int iVar0;
	
	iVar0 = round(10f);
	if (!func_135(iLocal_1166))
	{
		open_sequence_task(&iLocal_260);
		task_heli_mission(false, iLocal_1166, false, false, Local_125.f_10, 9, 30f, 7.5f, -1f, iVar0, iVar0, -1f, 0);
		close_sequence_task(iLocal_260);
		open_sequence_task(&iLocal_259);
		task_heli_mission(false, iLocal_1166, false, false, Local_125.f_17, 9, 30f, 0f, -1f, iVar0 * 2, iVar0 * 2, -1f, 0);
		close_sequence_task(iLocal_259);
		open_sequence_task(&iLocal_258);
		task_leave_any_vehicle(false, 0, 64);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			AI::TASK_SMART_FLEE_PED(false, PLAYER::PLAYER_PED_ID(), 300f, -1, 0, 0);
		}
		else
		{
			task_wander_standard(false, 40000f, 0);
		}
		close_sequence_task(iLocal_258);
	}
}

int func_382()
{
	return Local_125;
}

auto func_383(int iParam0)
{
	return vLocal_158[iParam0 /*3*/];
}

bool func_384()
{
	int iVar0;
	
	func_391(&iVar0);
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
	if (func_390())
	{
		return true;
	}
	if (Global_2445442)
	{
		return true;
	}
	if (func_389())
	{
		return true;
	}
	if (func_388(157))
	{
		if (!func_387())
		{
			return true;
		}
	}
	if (func_388(155))
	{
		return true;
	}
	if (!network_is_signed_online())
	{
		return true;
	}
	if (func_385() != 0)
	{
		if (_get_number_of_instances_of_streamed_script(func_385()) == 0)
		{
			return true;
		}
	}
	return false;
}

int func_385()
{
	switch (func_386())
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

auto func_386()
{
	return Global_25120;
}

auto func_387()
{
	return Global_2434762.f_574;
}

bool func_388(int iParam0)
{
	if (get_event_exists(1, iParam0))
	{
		return true;
	}
	return false;
}

auto func_389()
{
	return Global_2443085;
}

auto func_390()
{
	return Global_2434762.f_569;
}

void func_391(auto uParam0)
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
					func_392(iVar0);
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

void func_392(int iParam0)
{
	Vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (get_event_data(1, iParam0, &vVar0, 3))
	{
		if (func_129(vVar0.y, 1, 1))
		{
			iVar3 = get_player_ped(vVar0.y);
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				if (is_ped_in_any_vehicle(iVar3, 0))
				{
					iVar4 = get_vehicle_ped_is_in(iVar3, 0);
					if (is_vehicle_window_intact(iVar4, vVar0.z) && network_get_this_script_is_network_script())
					{
						if (func_393(iVar4, &iVar5))
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

bool func_393(int iParam0, auto uParam1)
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

void func_394()
{
	wait(0);
}

void func_395(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (func_148())
	{
		func_147();
	}
	if (iParam0)
	{
		func_360();
	}
	func_361();
	func_187(0);
	if (func_199())
	{
		if (func_400("HTX_HELPN", "GB_HELI_BLIP"))
		{
			clear_help(1);
			iVar0 = func_4(1183, -1, 0);
			GAMEPLAY::CLEAR_BIT(&iVar0, 16);
			func_198(1183, iVar0, -1, 1);
		}
		func_10(0);
	}
	else if (func_400("HTX_HELPN", "HTX_HELPB"))
	{
		clear_help(1);
		iVar1 = func_4(1183, -1, 0);
		GAMEPLAY::CLEAR_BIT(&iVar1, 16);
		func_198(1183, iVar1, -1, 1);
	}
	if (iParam0)
	{
		if (network_does_network_id_exist(Local_125.f_4) && network_has_control_of_network_id(Local_125.f_4))
		{
			if (func_199())
			{
				if (!ENTITY::IS_ENTITY_DEAD(net_to_ped(Local_125.f_4), 0))
				{
					if (!is_ped_in_vehicle(net_to_ped(Local_125.f_4), iLocal_1166, 0))
					{
						func_196(&(Local_125.f_4));
					}
				}
			}
			if (!func_135(iLocal_1166))
			{
				if (!func_134(Local_125.f_4))
				{
					func_381();
					task_perform_sequence(net_to_ped(Local_125.f_4), iLocal_259);
				}
			}
		}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (iParam0)
		{
			if (network_does_network_id_exist(Local_125.f_3))
			{
				if (network_has_control_of_network_id(Local_125.f_3))
				{
					if (!func_135(iLocal_1166))
					{
						set_vehicle_doors_locked(iLocal_1166, 1);
					}
					func_366(&(Local_125.f_3));
				}
			}
			if (func_199())
			{
			}
			if (network_does_network_id_exist(Local_125.f_4))
			{
				if (network_has_control_of_network_id(Local_125.f_4))
				{
					if (!func_134(Local_125.f_4))
					{
						PED::SET_PED_CONFIG_FLAG(net_to_ped(Local_125.f_4), 251, false);
					}
					func_366(&(Local_125.f_4));
				}
			}
		}
		if (!func_250())
		{
			func_398(func_399(1, 1), 13, func_8());
		}
		else
		{
			func_398(func_399(1, 1), 44, func_8());
		}
	}
	func_397();
	if (iLocal_262 == 1)
	{
		iLocal_262 = 0;
	}
	set_scaleform_movie_as_no_longer_needed(&iLocal_263);
	set_cinematic_button_active(true);
	GAMEPLAY::CLEAR_BIT(&(Global_2460486.f_783), false);
	Global_2460486.f_255 = 0;
	func_396();
}

void func_396()
{
	terminate_this_thread();
}

void func_397()
{
	clear_sequence_task(&iLocal_258);
	clear_sequence_task(&iLocal_259);
	clear_sequence_task(&iLocal_260);
}

void func_398(int iParam0, int iParam1, auto uParam2)
{
	struct<4> Var0;
	
	Var0 = 326;
	Var0.f_1 = player_id();
	Var0.f_3 = iParam1;
	Var0.f_2 = uParam2;
	if (!iParam0 == 0)
	{
		trigger_script_event(1, &Var0, 6, iParam0);
	}
}

auto func_399(int iParam0, int iParam1)
{
	auto uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = false;
	while (iVar1 < 32)
	{
		iVar2 = int_to_playerindex(iVar1);
		if (func_129(iVar2, 0, 0))
		{
			if (iVar2 != player_id() || iParam0)
			{
				if (iParam1)
				{
					GAMEPLAY::SET_BIT(&uVar0, iVar1);
				}
				else if (!func_230(iVar2, 0))
				{
					GAMEPLAY::SET_BIT(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

auto func_400(char* sParam0, char* sParam1)
{
	_0x0A24DA3A41B718F5(sParam0);
	_add_text_component_item_string(sParam1);
	return _0x10BDDBFC529428DD(0);
}

bool func_401(struct<20> Param0)
{
	func_404(32, Param0);
	reserve_network_mission_peds(1);
	reserve_network_mission_vehicles(1);
	func_403(0, -1, 0);
	network_register_host_broadcast_variables(&Local_125, 32);
	network_register_player_broadcast_variables(&vLocal_158, 97);
	if (!func_402())
	{
		return false;
	}
	set_this_script_can_be_paused(0);
	if (network_is_host_of_this_script())
	{
		Local_125.f_5 = player_id();
		Local_125.f_6 = {get_offset_from_entity_in_world_coords(PLAYER::PLAYER_PED_ID(), 0f, 15f, 0f)};
		Local_125.f_10 = {-346.4007f, 1151.507f, 324.7254f};
		Local_125.f_27 = func_250();
		Local_125.f_28 = func_8();
		GAMEPLAY::SET_BIT(&(Global_2460486.f_783), false);
	}
	Global_2443115.f_26 = 0;
	Global_2443115.f_25 = 0;
	GAMEPLAY::CLEAR_BIT(&(Global_1610316[player_id() /*174*/].f_169), 4);
	iLocal_951 = network_is_in_tutorial_session();
	vLocal_158[participant_id_to_int() /*3*/] = 0;
	return true;
}

bool func_402()
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
		if (func_390())
		{
			return false;
		}
		if (func_388(155))
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

bool func_403(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = network_get_script_status();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!iParam2)
			{
				func_396();
			}
			else
			{
				return false;
			}
		}
		if (!func_371())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!iParam2)
					{
						func_396();
					}
					else
					{
						return false;
					}
				}
				if (func_390())
				{
					if (!iParam2)
					{
						func_396();
					}
					else
					{
						return false;
					}
				}
				if (func_388(155))
				{
					if (!iParam2)
					{
						func_396();
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
					func_396();
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
				func_396();
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
			func_396();
		}
		else
		{
			return false;
		}
	}
	return true;
}

void func_404(int iParam0, struct<17> Param1, auto uParam2, auto uParam3, auto uParam4)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_396();
	}
	network_set_this_script_is_network_script(iParam0, 0, Param1.f_16);
}

void func_405()
{
	iLocal_1154 = 0;
	func_406(-243.828f, -1461.281f, 30.99f, 279.3385f);
	func_406(139.284f, 311.0571f, 111.1386f, 45.1942f);
	func_406(634.8535f, 141.8226f, 94.2749f, 26.968f);
	func_406(383.2168f, 16.5927f, 90.2992f, 40.5093f);
	func_406(67.2551f, 51.4397f, 72.5151f, 38.4162f);
	func_406(294.1833f, 575.2105f, 152.623f, 304.9259f);
	func_406(933.0354f, 492.7919f, 120.4651f, 3.1259f);
	func_406(-336.8088f, 454.2572f, 110.9638f, 58.2889f);
	func_406(-135.9225f, 615.1293f, 204.3637f, 240.0636f);
	func_406(139.3762f, -250.2123f, 50.426f, 276.1187f);
	func_406(-139.5668f, -443.9992f, 33.1041f, 112.657f);
	func_406(-491.7431f, -144.9858f, 37.8309f, 98.1814f);
	func_406(-645.7263f, 406.0965f, 100.2678f, 272.8684f);
	func_406(-957.0592f, 295.3116f, 68.9958f, 58.8505f);
	func_406(-820.9876f, 876.1653f, 202.1549f, 196.4736f);
	func_406(-1443.188f, 455.4925f, 110.7514f, 296.894f);
	func_406(-1481.404f, 863.1016f, 181.577f, 38.349f);
	func_406(-1646.419f, -195.0848f, 54.2692f, 160.7423f);
	func_406(-1099.93f, -192.9011f, 37.3214f, 299.6116f);
	func_406(-604.6443f, -599.9016f, 33.6806f, 270.5396f);
	func_406(-1471.802f, -853.1879f, 13.2503f, 302.8094f);
	func_406(-2011.161f, -526.2204f, 10.7096f, 28.1469f);
	func_406(-2212.737f, 537.3901f, 164.4195f, 348.0596f);
	func_406(-3025.405f, 338.3629f, 13.6245f, 14.9527f);
	func_406(-1054.36f, -1398.452f, 5.3278f, 253.1757f);
	func_406(-567.387f, -1258.005f, 12.8623f, 8.386f);
	func_406(-964.4938f, -727.4775f, 18.794f, 344.527f);
	func_406(-2429.193f, 1045.141f, 193.7864f, 263.1876f);
	func_406(-3136.545f, 1191.168f, 19.0974f, 220.8899f);
	func_406(-2692.456f, -62.2375f, 15.234f, 39.5592f);
	func_406(-355.8293f, -990.3766f, 28.4949f, 125.2948f);
	func_406(243.7049f, -881.4253f, 29.4921f, 297.8129f);
	func_406(453.4193f, -380.5279f, 45.6676f, 357.5639f);
	func_406(936.8099f, -553.545f, 58.3693f, 263.5811f);
	func_406(770.1622f, -233.1951f, 65.1145f, 243.3845f);
	func_406(1134.113f, 353.7328f, 90.4476f, 351.5361f);
	func_406(1864.741f, 259.8708f, 162.1022f, 225.713f);
	func_406(1558.889f, 879.5532f, 76.4596f, 359.376f);
	func_406(337.4946f, 985.814f, 209.7682f, 69.9473f);
	func_406(870.984f, 968.8524f, 238.3209f, 35.1108f);
	func_406(2599.014f, 415.1773f, 107.7289f, 186.8054f);
	func_406(2547.611f, -579.5625f, 64.2137f, 161.9321f);
	func_406(1886.246f, -741.1049f, 82.6813f, 287.8844f);
	func_406(1455.893f, -1498.703f, 63.6557f, 173.4564f);
	func_406(1161.785f, -1076.126f, 40.4823f, 247.4221f);
	func_406(1394.804f, -734.3683f, 66.2226f, 115.9829f);
	func_406(1167.93f, -150.3837f, 55.5932f, 167.958f);
	func_406(2455.5f, 1014.216f, 83.1307f, 14.3078f);
	func_406(2530.339f, 1633.237f, 28.3235f, 234.752f);
	func_406(1951.904f, 1645.648f, 71.2406f, 260.0168f);
	func_406(2806.778f, -815.1143f, 5.7198f, 81.9638f);
	func_406(1806.947f, -1290.593f, 95.0351f, 331.8087f);
	func_406(1678.681f, -1952.281f, 111.666f, 80.8951f);
	func_406(1292.103f, -3186.505f, 4.9064f, 359.7118f);
	func_406(740.4905f, -3028.477f, 7.562f, 312.5958f);
	func_406(559.4196f, -2593.408f, 5.0368f, 291.8598f);
	func_406(877.3129f, -2437.455f, 27.3458f, 83.4984f);
	func_406(1212.66f, -2098.225f, 43.5962f, 332.4854f);
	func_406(797.2423f, -1599.807f, 30.2847f, 164.9429f);
	func_406(827.6533f, -1980.338f, 28.299f, 10.749f);
	func_406(373.2801f, -2133.071f, 15.2922f, 150.4032f);
	func_406(617.6802f, -1064.3f, 9.3075f, 179.8157f);
	func_406(296.5454f, -1341.473f, 42.7533f, 230.0817f);
	func_406(-174.3653f, -2548.709f, 5.0163f, 198.7499f);
	func_406(215.9285f, -2903.652f, 6.6886f, 151.951f);
	func_406(314.6187f, -1679.352f, 28.1261f, 72.5752f);
	func_406(1408.015f, -2623.801f, 45.1502f, 312.7456f);
	func_406(-379.9112f, -1774.544f, 20.0649f, 13.9162f);
	func_406(96.5893f, -2001.965f, 18.844f, 147.396f);
	func_406(-729.8096f, -1777.493f, 28.0263f, 61.8742f);
	func_406(-971.1151f, -1868.092f, 18.9378f, 33.2574f);
	func_406(-720.1935f, -2557.545f, 12.9387f, 18.6712f);
	func_406(-1335.482f, -2677.121f, 12.9449f, 187.4991f);
	func_406(-878.3446f, -2968.556f, 12.9471f, 331.5428f);
	func_406(-1005.327f, -2232.398f, 8.0032f, 92.8891f);
	func_406(-401.2441f, -2284.453f, 6.6082f, 2.3971f);
	func_406(-1454.813f, -1471.849f, 1.1336f, 242.0199f);
	func_406(821.5599f, 1298.328f, 362.9729f, 262.7468f);
	func_406(-449.7726f, 1586.159f, 358.0207f, 239.931f);
	func_406(-348.6263f, 1156.363f, 324.5158f, 54.5644f);
	func_406(-827.162f, 1686.859f, 194.2108f, 236.4414f);
	func_406(-184.5484f, 1923.192f, 196.6049f, 206.5246f);
	func_406(296.1962f, 1771.646f, 227.0542f, 310.265f);
	func_406(1052.903f, 1495.316f, 174.8349f, 205.154f);
	func_406(-1532.131f, 1396.502f, 122.7763f, 352.1764f);
	func_406(-2604.194f, 1675.818f, 138.9021f, 166.6577f);
	func_406(-1513.824f, 2166.168f, 54.0724f, 251.5786f);
	func_406(-1697.408f, 2456.897f, 29.418f, 101.049f);
	func_406(-2819.858f, 2253.055f, 28.6358f, 169.9338f);
	func_406(-3043.554f, 1477.634f, 27.3241f, 179.9691f);
	func_406(-2381.452f, 2830.405f, 2.372f, 76.3996f);
	func_406(-2993.669f, 3335.124f, 9.2207f, 46.6226f);
	func_406(-1789.875f, 2675.004f, 2.4478f, 318.05f);
	func_406(-1596.024f, 2950.032f, 32.0914f, 221.481f);
	func_406(-1099.969f, 2850.755f, 12.8854f, 317.9454f);
	func_406(55.8239f, 3338.571f, 35.6469f, 165.2648f);
	func_406(173.2043f, 2293.298f, 92.1495f, 208.7343f);
	func_406(-468.6477f, 2994.032f, 26.1288f, 96.4423f);
	func_406(-1212.968f, 2599.15f, 14.572f, 277.3627f);
	func_406(-177.6004f, 2945.426f, 29.6345f, 344.5758f);
	func_406(-270.1975f, 2661.462f, 59.8035f, 190.3861f);
	func_406(-767.441f, 2284.18f, 76.413f, 331.6507f);
	func_406(578.2679f, 2798.182f, 41.1427f, 308.8694f);
	func_406(388.2008f, 3525.706f, 32.9f, 242.16f);
	func_406(1228.046f, 3612.758f, 32.4634f, 303.8293f);
	func_406(1060.165f, 3042.599f, 40.6158f, 329.9008f);
	func_406(845.1221f, 2207.164f, 49.9157f, 40.9634f);
	func_406(1281.185f, 2665.227f, 36.6537f, 44.0714f);
	func_406(2137.185f, 2961.237f, 45.9129f, 273.7183f);
	func_406(2052.815f, 3319.029f, 44.7859f, 127.0919f);
	func_406(1959.709f, 3775.369f, 31.2029f, 88.7083f);
	func_406(2500.937f, 4153.028f, 37.2878f, 204.7804f);
	func_406(2730.682f, 3415.967f, 55.7151f, 278.4684f);
	func_406(2936.23f, 4437.92f, 47.4218f, 323.2516f);
	func_406(3636.311f, 3765.969f, 27.5157f, 51.549f);
	func_406(2532.664f, 2686.917f, 40.7205f, 249.7434f);
	func_406(2157.111f, 1974.473f, 93.7061f, 22.0171f);
	func_406(1499.479f, 1827.166f, 106.4998f, 42.618f);
	func_406(2895.405f, 3888.189f, 52.0109f, 213.3904f);
	func_406(1639.252f, 3852.798f, 33.7036f, 277.8739f);
	func_406(16.3756f, 3623.829f, 39.0889f, 138.8624f);
	func_406(-202.3551f, 4176.263f, 42.1762f, 357.9106f);
	func_406(378.6819f, 4405.726f, 61.3992f, 2.2521f);
	func_406(763.3045f, 4180.816f, 39.6263f, 313.7911f);
	func_406(1410.916f, 4363.65f, 41.6243f, 351.9106f);
	func_406(2474.189f, 4460.482f, 34.2448f, 338.6556f);
	func_406(2787.091f, 4896.004f, 35.5118f, 346.5345f);
	func_406(3787.385f, 4446.902f, 3.6951f, 322.4305f);
	func_406(3283.627f, 5161.83f, 17.7122f, 120.0761f);
	func_406(2444.642f, 5016.759f, 45.2854f, 256.7558f);
	func_406(2071.367f, 4807.796f, 40.6377f, 147.898f);
	func_406(2012.781f, 5129.742f, 44.5825f, 92.6079f);
	func_406(1710.641f, 4657.467f, 42.4848f, 108.8281f);
	func_406(2498.991f, 5641.692f, 45.6963f, 48.9642f);
	func_406(2250.176f, 5968.912f, 49.0116f, 15.0599f);
	func_406(1853.773f, 6404.851f, 45.2075f, 116.4965f);
	func_406(866.8867f, 6512.98f, 20.7883f, 248.893f);
	func_406(205.2754f, 7012.687f, 1.0453f, 196.8449f);
	func_406(-212.0001f, 6565.548f, 9.8635f, 152.7291f);
	func_406(-573.4517f, 6167.307f, 5.3904f, 302.589f);
	func_406(206.7901f, 6402.567f, 30.3805f, 81.5939f);
	func_406(-731.3629f, 5800.728f, 16.5887f, 196.4081f);
	func_406(-664.7944f, 5460.415f, 49.6868f, 157.5173f);
	func_406(-601.0768f, 5294.568f, 69.2145f, 27.8272f);
	func_406(-532.1605f, 4971.026f, 146.1112f, 172.7688f);
	func_406(-1546.969f, 5010.706f, 64.4016f, 255.285f);
	func_406(-2170.899f, 4459.51f, 61.8337f, 141.4564f);
	func_406(-2504.334f, 3627.644f, 12.7211f, 175.0945f);
	func_406(-1216.204f, 4457.368f, 29.5562f, 16.7363f);
	func_406(797.6583f, 5704.728f, 697.4423f, 102.9245f);
	func_406(159.5193f, 5212.952f, 572.7617f, 303.589f);
	func_406(2867.312f, 5944.487f, 356.7372f, 56.172f);
	func_406(10.6515f, 6334.516f, 30.2366f, 336.7196f);
	func_406(1472.189f, 6359.462f, 22.7034f, 289.4279f);
	func_406(-618.1378f, 3993.369f, 120.0915f, 212.0991f);
	func_406(-885.1862f, 4428.847f, 19.9719f, 90.7754f);
	func_406(215.323f, 7381.881f, 13.4278f, 203.1559f);
	func_406(3635.046f, 5669.953f, 7.7871f, 32.6794f);
	func_406(3646.407f, 4997.506f, 11.2006f, 19.0908f);
	func_406(3546.356f, 2523.698f, 5.4951f, 29.0676f);
	func_406(2193.448f, 5574.355f, 52.7895f, 268.6339f);
	func_406(-2165.357f, 5170.346f, 13.5525f, 39.8589f);
	func_406(-1606.75f, 4742.162f, 52.9203f, 53.6989f);
	func_406(-945.4f, 4611.085f, 237.932f, 276.5363f);
	func_406(-2415.631f, 4221.8f, 8.7558f, 303.5893f);
	func_406(809.2775f, 3227.627f, 37.6705f, 234.2991f);
	func_406(1101.399f, 3436.295f, 32.8756f, 310.4154f);
	func_406(1691.926f, 3486.635f, 35.8127f, 339.3695f);
	func_406(2407.986f, 3537.302f, 72.5395f, 355.4901f);
	func_406(3051.449f, 2725.313f, 62.3978f, 331.4178f);
	func_406(2527.302f, 2009.074f, 18.9235f, 346.0563f);
	func_406(1840.181f, 2499.208f, 44.7693f, 301.6813f);
	func_406(1787.824f, 3067.684f, 61.2278f, 70.872f);
	func_406(1382.367f, 3003.334f, 39.7661f, 340.408f);
	func_406(244.4017f, 2637.836f, 44.6054f, 240.1419f);
	func_406(-251.8209f, 2205.487f, 128.884f, 195.6026f);
	func_406(-541.051f, 2005.346f, 202.3307f, 274.6922f);
	func_406(-2039.825f, 1960.994f, 187.7879f, 312.9809f);
	func_406(-1603.197f, 237.8279f, 58.3225f, 263.857f);
	func_406(-1724.508f, -2970.292f, 13.1465f, 4.1473f);
	func_406(1192.917f, 1839.359f, 77.4385f, 170.34f);
	func_406(3300.137f, -99.0274f, 11.6522f, 185.3741f);
	func_406(2849.717f, -1461.166f, 12.5068f, 52.3716f);
	func_406(2306.17f, -2118.141f, 2.322f, 18.5464f);
	func_406(2163.642f, 135.7375f, 226.6112f, 117.1583f);
	func_406(2527.796f, -90.4654f, 93.1274f, 110.8862f);
	func_406(1774.983f, 1676.629f, 78.209f, 142.8201f);
	func_406(1623.241f, 1265.085f, 86.7423f, 134.636f);
	func_406(1732.167f, 2169.269f, 82.2189f, 350.0135f);
	func_406(2167.046f, 1339.68f, 74.7227f, 32.7734f);
	func_406(712.9243f, 1727.998f, 182.7801f, 68.4225f);
	func_406(151.0186f, 1429.878f, 259.7057f, 36.1885f);
	func_406(-1662.585f, 4284.667f, 80.2819f, 23.3258f);
	func_406(-1323.416f, 5349.778f, 2.3383f, 79.3172f);
	func_406(-2294.521f, 2342.52f, 0.2262f, 44.7661f);
	func_406(-892.6975f, 5271.815f, 84.9171f, 112.4479f);
	func_406(470.1919f, 3115.264f, 40.5447f, 77.6964f);
	func_406(-2673.124f, 2957.395f, 7.3939f, 285.1781f);
	func_406(-3192.201f, 815.0291f, 2.7957f, 260.1565f);
	func_406(945.9874f, -3277.793f, 4.8982f, 266.6732f);
	func_406(126.3235f, -1658.512f, 32.9414f, 28.4566f);
	func_406(1144.835f, -1688.646f, 35.1291f, 6.0452f);
	func_406(944.4474f, -1369.549f, 12.3266f, 314.3879f);
	func_406(937.8714f, -896.6146f, 49.0496f, 179.602f);
	func_406(-50.8218f, -894.3738f, 40.4824f, 157.0664f);
	func_406(-1159.234f, -1111.134f, 8.7345f, 300.7512f);
	func_406(-1729.466f, -972.845f, 5.2263f, 14.1883f);
	func_406(-251.1976f, 310.9189f, 96.5312f, 177.6596f);
	func_406(-261.0635f, 192.8841f, 84.9561f, 104.3934f);
	func_406(-769.5164f, -1996.682f, 7.8903f, 136.2945f);
	func_406(-1345.348f, -2123.383f, 12.9441f, 145.1976f);
	func_406(576.7401f, -657.0758f, 12.5207f, 347.7486f);
	func_406(2640.831f, 3200.896f, 52.1493f, 273.1668f);
	func_406(1995.588f, -925.1763f, 78.0824f, 77.8221f);
	func_406(-500.2817f, -2111.103f, 8.9576f, 132.9903f);
	func_406(-725.0269f, -2355.187f, 14.8438f, 227.8691f);
	func_406(-980.7766f, -2488.198f, 14.0523f, 150.2897f);
	func_406(-1127.178f, -1696.759f, 4.2742f, 29.4122f);
	func_406(-1212.316f, -1338.762f, 4.4687f, 109.8316f);
	func_406(-1373.831f, -1274.4f, 4.6296f, 28.0177f);
	func_406(-1531.726f, -1037.846f, 5.8012f, 226.8082f);
	func_406(-1243.753f, -963.8779f, 3.2555f, 82.051f);
	func_406(-1161.864f, -725.671f, 20.534f, 37.0823f);
	func_406(-1071.658f, -863.8865f, 4.7704f, 302.8431f);
	func_406(-869.8373f, -894.2067f, 15.7782f, 195.2182f);
	func_406(-847.3995f, -1198.361f, 5.8987f, 224.6693f);
	func_406(-59.1982f, 1031.608f, 233.5404f, 342.8009f);
	func_406(-498.3894f, -950.4281f, 23.8303f, 170.6251f);
	func_406(-668.458f, -451.6636f, 35.9803f, 263.7879f);
	func_406(-538.0801f, -255.6042f, 36.4835f, 28.044f);
	func_406(-674.919f, -35.9837f, 39.1f, 107.0653f);
	func_406(-957.8153f, -347.7798f, 38.5257f, 296.3945f);
	func_406(-1399.278f, 122.7592f, 54.9624f, 179.943f);
	func_406(-1259.903f, 600.5897f, 139.911f, 307.5361f);
	func_406(-1161.234f, 931.7809f, 198.3958f, 312.1524f);
	func_406(-929.2317f, 1127.948f, 220.3745f, 192.5778f);
	func_406(-625.6737f, 979.0534f, 241.17f, 105.5179f);
	func_406(-281.6504f, 736.922f, 208.7457f, 201.0901f);
	func_406(-799.7258f, 575.9078f, 125.8626f, 200.7426f);
	func_406(-111.9565f, 1361.998f, 311.2291f, 309.7981f);
	func_406(161.9947f, 742.2007f, 207.3627f, 24.4887f);
	func_406(-591.4622f, -1443.56f, 11.0649f, 55.8083f);
	func_406(48.3094f, -1466.97f, 34.0209f, 46.3598f);
	func_406(573.138f, -903.282f, 10.653f, 359.9055f);
	func_406(444.6478f, -584.4781f, 28.4022f, 263.8702f);
	func_406(590.5396f, -128.7431f, 72.7058f, 324.8725f);
	func_406(633.0765f, -1477.419f, 9.6378f, 13.7451f);
	func_406(567.5936f, -2316.353f, 5.8157f, 358.2805f);
	func_406(154.683f, -2406.677f, 5.9026f, 356.73f);
	func_406(-407.8167f, -2742.427f, 6.6763f, 192.47f);
	func_406(77.3055f, -2723.974f, 5.9071f, 269.1819f);
	func_406(664.1844f, -2986.192f, 5.9477f, 169.3143f);
	func_406(1015.701f, -2310.8f, 30.4119f, 351.451f);
	func_406(1105.497f, -1903.685f, 37.37f, 141.7318f);
	func_406(1397.402f, -2375.49f, 63.0531f, 356.6557f);
	func_406(1675.434f, -1547.791f, 112.5916f, 343.2593f);
	func_406(1454.21f, -1000.43f, 48.8159f, 85.0815f);
	func_406(2183.739f, -582.2708f, 96.7788f, 309.7693f);
	func_406(2543.149f, 142.0665f, 99.4934f, 165.3156f);
	func_406(2596.192f, 751.3882f, 91.457f, 196.0535f);
	func_406(2603.688f, 1235.993f, 44.3592f, 176.2542f);
	func_406(2122.656f, 2778.532f, 50.0208f, 309.4357f);
	func_406(2396.602f, 3264.547f, 48.7285f, 214.5686f);
	func_406(2322.511f, 3893.286f, 34.9455f, 312.4513f);
	func_406(581.2474f, 778.2208f, 201.9709f, 228.6589f);
	func_406(1118.769f, 790.2458f, 149.7879f, 327.737f);
	func_406(1312.517f, 1248.61f, 106.7748f, 356.9769f);
	func_406(1309.661f, 1537.113f, 96.2337f, 6.4865f);
	func_406(1062.127f, 2084.489f, 52.5033f, 26.2563f);
	func_406(1521.927f, 2010.445f, 99.3948f, 355.0577f);
	func_406(1370.713f, 2313.501f, 79.9254f, 33.3623f);
	func_406(907.667f, 2678.261f, 40.7875f, 261.5676f);
	func_406(699.3987f, 2441.128f, 61.3254f, 209.2828f);
	func_406(436.9572f, 2382.852f, 50.022f, 322.7864f);
	func_406(439.7385f, 2086.472f, 100.9622f, 336.0373f);
	func_406(-628.1458f, 2815.875f, 36.9998f, 300.3421f);
	func_406(-1374.838f, 2402.95f, 30.041f, 288.2213f);
	func_406(-1845.524f, -708.1555f, 9.1302f, 227.8206f);
	func_406(-2441.261f, -319.8737f, 3.6674f, 231.7609f);
	func_406(-2994.104f, 21.4889f, 7.8942f, 241.8965f);
	func_406(-2825.43f, 1423.209f, 100.6655f, 175.2131f);
	func_406(-3091.066f, 1757.376f, 35.0735f, 174.5508f);
	func_406(-3007.828f, 2099.017f, 40.1434f, 332.562f);
	func_406(-1966.473f, 2473.978f, 1.1161f, 204.7869f);
	func_406(-2281.606f, 3412.213f, 32.0105f, 341.204f);
	func_406(456.3445f, 6699.446f, 7.8774f, 230.5219f);
	func_406(1191.518f, 6560.621f, 2.9303f, 86.2098f);
	func_406(2595.129f, 5402.892f, 41.7871f, 10.6124f);
	func_406(644.2881f, -1840.464f, 9.0907f, 354.3967f);
}

void func_406(Vector3 vParam0, float fParam1)
{
	Global_2409530[iLocal_1154 /*3*/] = {vParam0};
	Global_2410398[iLocal_1154] = fParam3;
	iLocal_1154++;
}

