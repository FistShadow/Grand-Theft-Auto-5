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
	struct<22> Local_88 = 0;
	Vector3[] vLocal_110 = new Vector3[32];
	int iLocal_207 = 0;
	int iLocal_208 = 0;
	int iLocal_209 = 0;
	int iLocal_210 = 0;
	int iLocal_211 = 0;
	int iLocal_212 = 0;
	int iLocal_213 = 0;
	auto uLocal_214 = 0;
	auto uLocal_215 = 12;
	auto uLocal_216 = 0;
	auto uLocal_217 = 0;
	auto uLocal_218 = 0;
	auto uLocal_219 = 0;
	auto uLocal_220 = 0;
	auto uLocal_221 = 0;
	auto uLocal_222 = 0;
	auto uLocal_223 = 0;
	auto uLocal_224 = 0;
	auto uLocal_225 = 0;
	auto uLocal_226 = 0;
	auto uLocal_227 = 0;
	auto uLocal_228 = 0;
	auto uLocal_229 = 0;
	auto uLocal_230 = 0;
	auto uLocal_231 = 0;
	auto uLocal_232 = 0;
	auto uLocal_233 = 0;
	auto uLocal_234 = 0;
	auto uLocal_235 = 0;
	auto uLocal_236 = 0;
	auto uLocal_237 = 0;
	auto uLocal_238 = 0;
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
	auto uLocal_900 = 1065353216;
	int iLocal_901 = 0;
	int iLocal_902 = 0;
	Vector3 vLocal_903 = 0;
	float fLocal_906 = 0;
	auto uLocal_907 = 16;
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
	int iLocal_1072 = 0;
	auto uLocal_1073 = 0;
	auto uLocal_1074 = 0;
	int iLocal_1075 = 0;
	auto uLocal_1076 = 0;
	auto uLocal_1077 = 0;
	float fLocal_1078 = 0;
	float fLocal_1079 = 0;
	float fLocal_1080 = 0;
	float fLocal_1081 = 0;
	struct<20> Local_1082 = 0;
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
	iLocal_1075 = 15000;
	if (network_is_game_in_progress())
	{
		if (!func_138(Local_1082))
		{
			func_133();
		}
	}
	while (true)
	{
		func_132();
		if (func_122())
		{
			func_133();
		}
		if (network_is_in_tutorial_session() != iLocal_1072)
		{
			func_133();
		}
		switch (func_121(participant_id_to_int()))
		{
			case 0:
				if (func_120() == 1)
				{
					func_119();
					func_118();
					vLocal_110[participant_id_to_int() /*3*/] = 1;
				}
				else if (func_120() == 4)
				{
					vLocal_110[participant_id_to_int() /*3*/] = 3;
				}
				break;
			
			case 1:
				func_91();
				if (func_120() == 1)
				{
					func_63();
				}
				else if (func_120() == 4)
				{
					vLocal_110[participant_id_to_int() /*3*/] = 3;
				}
				if (func_61(Local_88.f_2))
				{
					if (!is_entity_at_coord(player_ped_id(), get_entity_coords(net_to_veh(Local_88.f_2), 1), 200f, 200f, 200f, false, true, 0))
					{
						vLocal_110[participant_id_to_int() /*3*/] = 4;
					}
				}
				break;
			
			case 3:
				func_60(&(Local_88.f_18));
				if (func_59(&(Local_88.f_18)))
				{
					vLocal_110[participant_id_to_int() /*3*/] = 4;
				}
				break;
			
			case 2:
				vLocal_110[participant_id_to_int() /*3*/] = 4;
			
			case 4:
				func_133();
				break;
		}
		if (network_is_host_of_this_script())
		{
			switch (func_120())
			{
				case 0:
					if (func_57(&(Local_88.f_16), 10000, 0))
					{
						if (!is_bit_set(Local_88, 12))
						{
							Local_88.f_4 = player_id();
							Local_88.f_5 = func_56();
							Local_88.f_10 = {get_entity_coords(player_ped_id(), 0) + Vector(0f, 5f, 0f)};
							Local_88.f_7 = {func_54(Local_88.f_5)};
							set_bit(&Local_88, 12);
						}
						if (func_32())
						{
							func_119();
							Local_88.f_1 = 1;
						}
					}
					func_28();
					break;
				
				case 1:
					func_27();
					func_26();
					func_24();
					func_28();
					if (func_1())
					{
						Local_88.f_1 = 4;
					}
					break;
				
				case 4:
					break;
				}
		}
	}
}

bool func_1()
{
	if (func_2())
	{
		return true;
	}
	return false;
}

bool func_2()
{
	auto uVar0;
	auto uVar1;
	
	if (func_23())
	{
		if (Local_88.f_21 >= 0 || Local_88.f_21 <= 3)
		{
			func_6(func_20(9), 7, 3, 1);
		}
		return true;
	}
	if (Local_88.f_21 >= 0 || Local_88.f_21 <= 3)
	{
		if (network_does_network_id_exist(Local_88.f_2))
		{
			if (!func_61(Local_88.f_2))
			{
				if (network_get_destroyer_of_network_id(Local_88.f_2, &uVar0) == player_id())
				{
					func_5(1, 600000);
				}
				return true;
			}
		}
		else
		{
			return true;
		}
		if (network_does_network_id_exist(Local_88.f_3))
		{
			if (func_4(Local_88.f_3))
			{
				if (network_get_destroyer_of_network_id(Local_88.f_3, &uVar1) == player_id())
				{
					func_5(1, 600000);
				}
				return true;
			}
		}
		else
		{
			return true;
		}
		if (!func_3(player_id(), 1, 1))
		{
			return true;
		}
	}
	return false;
}

bool func_3(int iParam0, int iParam1, int iParam2)
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

int func_4(int iParam0)
{
	if (network_does_network_id_exist(iParam0))
	{
		return is_ped_injured(net_to_ped(iParam0));
	}
	return true;
}

void func_5(int iParam0, int iParam1)
{
	if (Global_2428492.f_3313[iParam0] < iParam1)
	{
		Global_2428492.f_3313[iParam0] = iParam1;
	}
	set_bit(&(Global_2428492.f_3312), iParam0);
}

void func_6(int iParam0, int iParam1, int iParam2, int iParam3)
{
	char[16] cVar0;
	char[16] cVar4;
	int iVar8;
	auto uVar9;
	
	StringCopy(&cVar0, func_19(iParam1), 16);
	StringCopy(&cVar4, func_18(iParam2), 16);
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
	if (func_17())
	{
		func_7(iVar8, iParam0, &uVar9, iParam3, iParam3, 0);
		Global_2558146[uVar9 /*73*/].f_8.f_43 = {cVar0};
		Global_2558146[uVar9 /*73*/].f_8.f_47 = {cVar4};
	}
	else
	{
		network_refund_cash(iParam0, &cVar0, &cVar4, iParam3);
	}
}

void func_7(int iParam0, int iParam1, auto uParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (!func_17())
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
				func_8(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_8(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

bool func_8(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = false;
	if (!func_17())
	{
		iVar0 = true;
	}
	if (!iVar0)
	{
		if (!_0xB24F0944DA203D9E(func_16()) || _0x810E8431C0614BF9())
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
			*uParam0 = func_15(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
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
			func_14(1, iParam4);
			Global_2558636 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_9(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return false;
}

void func_9(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			set_bit(&(Global_2418472[player_id() /*313*/].f_121.f_71), false);
			break;
	}
	if (iParam0 != -1)
	{
		func_10(iParam0);
	}
}

void func_10(int iParam0)
{
	int iVar0;
	
	iVar0 = false;
	if (!func_17())
	{
		iVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_13(iParam0))
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
		func_11(&(Global_2558146[iParam0 /*73*/]));
	}
}

void func_11(auto uParam0)
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
	func_12(uParam0.f_8.f_3);
	func_12(uParam0.f_8.f_16);
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

void func_12(auto uParam0)
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

int func_13(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2558146[iParam0 /*73*/].f_5 == 1;
	}
	return false;
}

void func_14(int iParam0, int iParam1)
{
	Global_2445534 = iParam1;
	Global_2445533 = iParam0;
}

int func_15(int iParam0, auto uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, auto uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2558146[iVar0 /*73*/].f_2 == 0)
		{
			if (!func_17())
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

auto func_16()
{
	return Global_1312747;
}

bool func_17()
{
	if (is_pc_version())
	{
		return true;
	}
	return false;
}

char* func_18(int iParam0)
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

char* func_19(int iParam0)
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

int func_20(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (func_22(iParam0) >= 0)
	{
		iVar0 = func_22(iParam0);
	}
	else
	{
		iVar0 = func_21(iParam0);
	}
	return iVar0;
}

int func_21(int iParam0)
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

int func_22(int iParam0)
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

int func_23()
{
	return Global_1587523[player_id() /*444*/].f_180 != 0;
}

void func_24()
{
	if (!network_is_host_of_this_script())
	{
		return;
	}
	if (Local_88.f_20 != 7)
	{
		if (func_4(Local_88.f_3) || !func_61(Local_88.f_2))
		{
			Local_88.f_20 = 7;
		}
		else if (!is_ped_in_vehicle(net_to_ped(Local_88.f_3), net_to_veh(Local_88.f_2), 0))
		{
			Local_88.f_20 = 7;
		}
	}
	if (!func_4(Local_88.f_3) && func_61(Local_88.f_2))
	{
		if (Local_88.f_20 != 1)
		{
			if (get_entity_health(net_to_veh(Local_88.f_2)) <= 600 || get_entity_health(net_to_ped(Local_88.f_3)) <= 150)
			{
				Local_88.f_20 = 1;
			}
		}
		switch (Local_88.f_20)
		{
			case 2:
				if (Local_88.f_21 == 3)
				{
					Local_88.f_20 = 4;
				}
				else if (Local_88.f_21 == 5)
				{
					Local_88.f_20 = 7;
				}
				else if (!is_bit_set(Local_88, 7) && is_entity_at_entity(net_to_ped(Local_88.f_3), player_ped_id(), 10f, 10f, 10f, 0, 1, 0))
				{
					Local_88.f_20 = 3;
				}
				break;
			
			case 4:
				set_bit(&iLocal_207, 8);
				if (get_vehicle_number_of_passengers(net_to_veh(Local_88.f_2)) <= 0)
				{
					Local_88.f_20 = 3;
					clear_bit(&iLocal_207, 8);
				}
				else if (!is_bit_set(Local_88, 7) && is_entity_at_coord(net_to_ped(Local_88.f_3), Local_88.f_7, 10f, 10f, 10f, false, true, 0))
				{
					Local_88.f_20 = 5;
				}
				break;
			
			case 5:
				if ((get_vehicle_number_of_passengers(net_to_veh(Local_88.f_2)) <= 0 && !is_ped_on_specific_vehicle(player_ped_id(), net_to_veh(Local_88.f_2))) && func_25(player_ped_id(), net_to_veh(Local_88.f_2), 1) >= 10f)
				{
					Local_88.f_20 = 6;
				}
				break;
			
			case 3:
				if (get_vehicle_number_of_passengers(net_to_veh(Local_88.f_2)) >= 1)
				{
					Local_88.f_20 = 4;
				}
				break;
			
			case 6:
				if ((get_vehicle_number_of_passengers(net_to_veh(Local_88.f_2)) <= 0 && !is_ped_on_specific_vehicle(player_ped_id(), net_to_veh(Local_88.f_2))) && func_25(player_ped_id(), net_to_veh(Local_88.f_2), 1) >= 10f)
				{
					if (get_script_task_status(net_to_ped(Local_88.f_3), 242628503) == 1)
					{
						Local_88.f_20 = 7;
					}
				}
				break;
			
			case 1:
				if (get_script_task_status(net_to_ped(Local_88.f_3), 242628503) == 1 && func_25(player_ped_id(), net_to_ped(Local_88.f_3), 1) >= 10f)
				{
					Local_88.f_20 = 7;
				}
				break;
			
			case 7:
				break;
			}
	}
}

float func_25(int iParam0, int iParam1, int iParam2)
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

void func_26()
{
	switch (Local_88.f_21)
	{
		case 0:
			if (is_bit_set(Local_88, 8) || get_vehicle_number_of_passengers(net_to_veh(Local_88.f_2)) > 0)
			{
				Local_88.f_21 = 1;
			}
			break;
		
		case 1:
			if (network_does_network_id_exist(Local_88.f_2))
			{
				if (get_vehicle_number_of_passengers(net_to_veh(Local_88.f_2)) > 0)
				{
					Local_88.f_21 = 2;
				}
			}
			break;
		
		case 2:
			if (get_vehicle_number_of_passengers(net_to_veh(Local_88.f_2)) > 0)
			{
				Local_88.f_21 = 3;
			}
			else if (is_bit_set(Local_88, 10))
			{
				Local_88.f_21 = 4;
			}
			break;
		
		case 3:
			if (network_does_network_id_exist(Local_88.f_2))
			{
				if (get_vehicle_number_of_passengers(net_to_veh(Local_88.f_2)) <= 0)
				{
					Local_88.f_21 = 1;
				}
				else if (is_bit_set(Local_88, 10))
				{
					Local_88.f_21 = 4;
				}
			}
			break;
		
		case 4:
			if (network_does_network_id_exist(Local_88.f_2))
			{
				if ((get_vehicle_number_of_passengers(net_to_veh(Local_88.f_2)) <= 0 && !is_ped_on_specific_vehicle(player_ped_id(), net_to_veh(Local_88.f_2))) && func_25(player_ped_id(), net_to_veh(Local_88.f_2), 1) >= 10f)
				{
					Local_88.f_21 = 5;
				}
			}
			break;
		
		case 5:
			break;
	}
}

void func_27()
{
	int iVar0;
	int iVar1;
	
	clear_bit(&Local_88, 9);
	iVar0 = false;
	while (iVar0 < _network_get_num_participants_host())
	{
		if (network_is_participant_active(int_to_participantindex(iVar0)))
		{
			iVar1 = network_get_player_index(int_to_participantindex(iVar0));
			if (func_3(iVar1, 1, 1))
			{
				if (func_61(Local_88.f_2))
				{
					if (!is_bit_set(Local_88, 8))
					{
						if (is_entity_at_coord(net_to_veh(Local_88.f_2), Local_88.f_10, 10f * 1.5f, 10f * 1.5f, 10f * 1.5f, false, true, 0))
						{
							set_bit(&Local_88, 8);
						}
					}
					if (!is_bit_set(Local_88, 7) || is_bit_set(Local_88, 11))
					{
						if (!is_bit_set(Local_88, 10))
						{
							if (is_entity_at_coord(net_to_veh(Local_88.f_2), Local_88.f_7, 10f * 1.5f, 10f * 1.5f, 10f * 1.5f, false, true, 0))
							{
								set_bit(&Local_88, 10);
							}
						}
					}
					if (!is_bit_set(Local_88, 9))
					{
						if (is_bit_set(vLocal_110[iVar0 /*3*/].f_1, 6))
						{
							set_bit(&Local_88, 9);
							clear_bit(&(vLocal_110[iVar0 /*3*/].f_1), 6);
						}
					}
					if (Local_88.f_20 != 3)
					{
						if (is_bit_set(vLocal_110[iVar0 /*3*/].f_1, 5))
						{
							Local_88.f_20 = 3;
							clear_bit(&(vLocal_110[iVar0 /*3*/].f_1), 5);
						}
					}
				}
			}
		}
		iVar0++;
	}
}

void func_28()
{
	Vector3 vVar0;
	auto uVar3;
	
	if ((Local_88.f_21 <= 2 || Local_88.f_20 == 2) || Local_88.f_20 == 3)
	{
		vVar0 = {get_entity_coords(player_ped_id(), 1)};
		if ((!get_water_height_no_waves(vVar0, &uVar3) || func_30()) || func_29())
		{
			Local_88.f_1 = 4;
		}
	}
}

bool func_29()
{
	if (is_entity_in_angled_area(player_ped_id(), 2631.833f, 4526.624f, -10f, -380.1435f, 3906.702f, 78.484f, 1200f, 0, true, 0))
	{
		return true;
	}
	if (is_entity_in_angled_area(player_ped_id(), 1731.902f, -123.8468f, 137.2596f, 2079.203f, 798.3421f, 249.3267f, 600f, 0, true, 0))
	{
		return true;
	}
	if (is_entity_in_angled_area(player_ped_id(), 252.5025f, 855.094f, 148.1213f, -393.3539f, 695.785f, 272.1867f, 500f, 0, true, 0))
	{
		return true;
	}
	return false;
}

bool func_30()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (is_entity_at_coord(player_ped_id(), func_31(iVar0), 50f, 50f, 50f, false, true, 0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

Vector3 func_31(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 709.8127f, 6699.78f, 0f;
		
		case 1:
			return 1551.805f, 6686.052f, 0f;
		
		case 2:
			return 3260.507f, 5309.454f, 0f;
		
		case 3:
			return 3788.334f, 3812.693f, 0f;
		
		case 4:
			return 2945.665f, 1773.192f, 0f;
		
		case 5:
			return 2866.816f, -658.5848f, 0f;
		
		case 6:
			return 2342.881f, -2167.953f, 0f;
		
		case 7:
			return 1215.167f, -2728.054f, 0f;
		
		case 8:
			return 1305.229f, -3364.572f, 0f;
		
		case 9:
			return 293.8953f, -3361.616f, 0f;
		
		case 10:
			return -484.948f, -2940.643f, 0f;
		
		case 11:
			return -1387.61f, -1704.374f, 0f;
		
		case 12:
			return -1566.04f, -1312.232f, 0f;
		
		case 13:
			return -1920.23f, -849.6466f, 0f;
		
		case 14:
			return -2876.76f, -74.3269f, 0f;
		
		case 15:
			return -3133.45f, 604.7179f, 0f;
		
		case 16:
			return -3286.57f, 1285.372f, 0f;
		
		case 17:
			return -3205.53f, 3285.199f, 0f;
		
		case 18:
			return -2520.42f, 4240.671f, 0f;
		
		case 19:
			return -909.632f, 5830.909f, 0f;
		
		case 20:
			return -325.109f, 6584.622f, 0f;
		
		default:
	}
	return -673.5316f, 6175.048f, 0f;
}

bool func_32()
{
	if (can_register_mission_entities(1, 1, 0, 0))
	{
		if (func_53(joaat("dinghy2")) && func_53(joaat("s_m_y_blackops_01")))
		{
			if (func_35() && func_33())
			{
				return true;
			}
		}
	}
	return false;
}

bool func_33()
{
	if ((!network_does_network_id_exist(Local_88.f_3) && func_53(joaat("s_m_y_blackops_01"))) && network_does_network_id_exist(Local_88.f_2))
	{
		if (func_61(Local_88.f_2))
		{
			if (func_34(&(Local_88.f_3), Local_88.f_2, 22, joaat("s_m_y_blackops_01"), -1, 1, 1, 1))
			{
				set_ped_component_variation(net_to_ped(Local_88.f_3), false, 0, 1, 0);
				set_ped_component_variation(net_to_ped(Local_88.f_3), 2, 1, 0, 0);
				set_ped_component_variation(net_to_ped(Local_88.f_3), 3, 0, 1, 0);
				set_ped_component_variation(net_to_ped(Local_88.f_3), 4, 0, 2, 0);
				set_ped_component_variation(net_to_ped(Local_88.f_3), 8, 1, 0, 0);
				set_ped_component_variation(net_to_ped(Local_88.f_3), 9, 0, 0, 0);
				if (Global_1587523[player_id() /*444*/] != 0)
				{
					set_ped_relationship_group_hash(net_to_ped(Local_88.f_3), Global_1574231);
				}
				else
				{
					set_ped_relationship_group_hash(net_to_ped(Local_88.f_3), Global_1573914[2 /*94*/][2 /*31*/][2 /*10*/][2 /*3*/][0]);
				}
				set_ped_keep_task(net_to_ped(Local_88.f_3), true);
				set_blocking_of_non_temporary_events(net_to_ped(Local_88.f_3), true);
				set_entity_health(net_to_ped(Local_88.f_3), round(200f * Global_262145.f_151));
				set_ped_can_be_dragged_out(net_to_ped(Local_88.f_3), 0);
				set_ped_config_flag(net_to_ped(Local_88.f_3), 255, true);
			}
		}
	}
	if (!network_does_network_id_exist(Local_88.f_3))
	{
		return false;
	}
	set_model_as_no_longer_needed(joaat("s_m_y_blackops_01"));
	return true;
}

bool func_34(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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
	*uParam0 = ped_to_net(create_ped_inside_vehicle(net_to_veh(iParam1), iParam2, iParam3, iParam4, iParam6, iParam5));
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

bool func_35()
{
	auto uVar0;
	auto uVar3;
	Vector3 vVar4;
	
	if (!network_does_network_id_exist(Local_88.f_2))
	{
		if (func_53(joaat("dinghy2")))
		{
			if (!is_bit_set(iLocal_207, 10))
			{
				func_50(&vLocal_903, &fLocal_906);
				if (test_probe_against_water(vLocal_903 + Vector(2f, 0f, 0f), vLocal_903 - Vector(10f, 0f, 0f), &vLocal_903))
				{
					if (func_37(vLocal_903, 6f, 1f, 1f, 5f, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
					{
						vVar4 = {vLocal_903 + Vector(12f, 0f, 0f)};
						iLocal_901 = _0xFE466162C4401D18(vVar4, 10f, 10f, 25f, 0f, 0f, -1f, 2, 1, false, 4);
						if (iLocal_901 == 0)
						{
							return false;
						}
						else
						{
							set_bit(&iLocal_207, 10);
						}
					}
				}
			}
			else if (_get_raycast_result(iLocal_901, &iLocal_902, &uVar0, &uVar0, &uVar3) == 2)
			{
				iLocal_901 = 0;
				if (iLocal_902 == 0)
				{
					if (func_36(&(Local_88.f_2), joaat("dinghy2"), vLocal_903, fLocal_906, 1, 1, 1, 0, 1, 1))
					{
						_0x9737A37136F07E75(net_to_veh(Local_88.f_2), 1);
						set_vehicle_engine_on(net_to_veh(Local_88.f_2), true, 1, 0);
						set_vehicle_forward_speed(net_to_veh(Local_88.f_2), 12f);
						_0x25367DE49D64CF16(net_to_veh(Local_88.f_2), 1);
						_0x3910051CCECDB00C(net_to_veh(Local_88.f_2), false);
					}
				}
				else
				{
					iLocal_902 = 0;
					clear_bit(&iLocal_207, 10);
				}
			}
			else if (_get_raycast_result(iLocal_901, &iLocal_902, &uVar0, &uVar0, &uVar3) == 0)
			{
				iLocal_901 = 0;
				clear_bit(&iLocal_207, 10);
			}
		}
	}
	if (!network_does_network_id_exist(Local_88.f_2))
	{
		return false;
	}
	set_model_as_no_longer_needed(joaat("dinghy2"));
	return true;
}

bool func_36(auto uParam0, int iParam1, Vector3 vParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
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

bool func_37(Vector3 vParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, float fParam12, int iParam13, float fParam14, int iParam15, int iParam16)
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
		if (func_43(vParam0, fParam14, 1, 1, iParam15, iParam17, 0, iParam15))
		{
			return false;
		}
	}
	Global_2404956++;
	if (iParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_38(vParam0, fParam6, iParam7, iParam9, fParam10, iParam11, iParam12, fParam16, iParam17))
			{
				return false;
			}
		}
	}
	Global_2404956++;
	return true;
}

bool func_38(Vector3 vParam0, float fParam1, int iParam2, int iParam3, float fParam4, int iParam5, int iParam6, float fParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !iParam7)
	{
		if (func_3(player_id(), 1, 1))
		{
			if (!is_screen_faded_out())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (get_distance_between_coords(func_42(player_id()), vParam0, 1) <= fVar2 + fParam3)
				{
					if (is_sphere_visible(vParam0, fParam3))
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
		if (func_3(iVar1, 1, 1))
		{
			if (!func_40(iVar1, 0) && _0x9DE986FC9A87C474(player_id(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != player_id()))
				{
					if ((func_39(iVar1) || !iParam10) && !Global_2418472[iVar1 /*313*/].f_255)
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
								if (get_distance_between_coords(func_42(iVar1), vParam0, 1) <= fVar2 + fParam3)
								{
									if (is_sphere_visible_to_player(iVar1, vParam0, fParam3))
									{
										return true;
									}
								}
							}
						}
						else if (get_player_team(iVar1) != iParam8 || get_player_team(iVar1) == -1)
						{
							if (get_distance_between_coords(func_42(iVar1), vParam0, 1) <= fVar2 + fParam3)
							{
								if (is_sphere_visible_to_player(iVar1, vParam0, fParam3))
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

bool func_39(int iParam0)
{
	if (is_entity_visible_to_script(get_player_ped(iParam0)) || Global_2418472[iParam0 /*313*/].f_241)
	{
		return true;
	}
	return false;
}

int func_40(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == player_id())
	{
		iVar0 = func_41(-1, 0) == 8;
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

int func_41(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_16();
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

Vector3 func_42(int iParam0)
{
	return get_entity_coords(get_player_ped(iParam0), 0);
}

bool func_43(Vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, auto uParam7)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && player_id() != iVar1) || iParam8 == 0)
		{
			if (func_3(iVar1, iParam4, iParam5))
			{
				if (_0x9DE986FC9A87C474(player_id(), iVar1))
				{
					if (!iParam7 || (!is_ped_injured(get_player_ped(iVar1)) && func_39(iVar1)))
					{
						if ((!iParam6 || (iParam6 == 1 && get_player_team(player_id()) != get_player_team(iVar1))) || get_player_team(player_id()) == -1)
						{
							if (((get_player_team(player_id()) == -1 && uParam9) && iParam6) && func_44(iVar1))
							{
							}
							else if (does_entity_exist(get_player_ped(iVar1)))
							{
								if (get_distance_between_coords(func_42(iVar1), vParam0, 1) < fParam3)
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

bool func_44(int iParam0)
{
	if (func_49(player_id(), iParam0))
	{
		return true;
	}
	Global_2459440 = {func_48(iParam0)};
	if (network_is_friend(&Global_2459440))
	{
		return true;
	}
	if (func_45(player_id(), iParam0))
	{
		return true;
	}
	return false;
}

bool func_45(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_47(iParam0);
	if (!iVar0 == func_46())
	{
		if (iVar0 == func_47(iParam1))
		{
			return true;
		}
	}
	return false;
}

int func_46()
{
	return -1;
}

int func_47(int iParam0)
{
	if (iParam0 != func_46())
	{
		return Global_1610316[iParam0 /*174*/].f_10;
	}
	return func_46();
}

struct<13> func_48(int iParam0)
{
	struct<13> Var0;
	
	network_handle_from_player(iParam0, &Var0, 13);
	return Var0;
}

bool func_49(int iParam0, int iParam1)
{
	if (_network_player_is_in_clan())
	{
		Global_2459440 = {func_48(iParam0)};
		Global_2459453 = {func_48(iParam1)};
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

void func_50(auto uParam0, auto uParam1)
{
	*uParam0 = {func_51(Local_88.f_10, 100f / 2f, 100f, 10f)};
	*uParam1 = get_heading_from_vector_2d(Local_88.f_10 - *uParam0, Local_88.f_10.f_1 - *uParam0.f_1);
}

Vector3 func_51(Vector3 vParam0, float fParam1, float fParam2, float fParam3)
{
	Vector3 vVar0;
	float fVar3;
	
	vVar0 = {get_random_float_in_range(-1f, 1f), get_random_float_in_range(-1f, 1f), 0f};
	fVar3 = fParam5 / 2f;
	vVar0 = {func_52(vVar0, get_random_float_in_range(fParam3, fParam4))};
	vVar0.z = get_random_float_in_range(-fVar3, fVar3);
	return vParam0 + vVar0;
}

Vector3 func_52(Vector3 vParam0, float fParam1)
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

int func_53(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	request_model(iParam0);
	return has_model_loaded(iParam0);
}

Vector3 func_54(int iParam0)
{
	int iVar0;
	int iVar1;
	Vector3 vVar2;
	float fVar5;
	float fVar6;
	
	fVar5 = 0f;
	fVar6 = 10000f;
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 <= 4)
			{
				fVar5 = get_distance_between_coords(Local_88.f_10, func_31(iVar0), 1);
				if (fVar5 < fVar6)
				{
					iVar1 = iVar0;
					fVar6 = fVar5;
				}
				iVar0++;
			}
			vVar2 = {func_31(iVar1)};
			Local_88.f_6 = func_55(iVar1);
			Local_88.f_6 = func_55(iVar1);
			Local_88.f_13 = {Local_88.f_10, 8000f, 0f};
			return vVar2;
			break;
		
		case 1:
			iVar0 = 5;
			while (iVar0 <= 9)
			{
				fVar5 = get_distance_between_coords(Local_88.f_10, func_31(iVar0), 1);
				if (fVar5 < fVar6)
				{
					iVar1 = iVar0;
					fVar6 = fVar5;
				}
				iVar0++;
			}
			vVar2 = {func_31(iVar1)};
			Local_88.f_6 = func_55(iVar1);
			Local_88.f_6 = func_55(iVar1);
			Local_88.f_13 = {5000f, Local_88.f_10.f_1, 0f};
			return vVar2;
			break;
		
		case 2:
			iVar0 = 10;
			while (iVar0 <= 14)
			{
				fVar5 = get_distance_between_coords(Local_88.f_10, func_31(iVar0), 1);
				if (fVar5 < fVar6)
				{
					iVar1 = iVar0;
					fVar6 = fVar5;
				}
				iVar0++;
			}
			vVar2 = {func_31(iVar1)};
			Local_88.f_6 = func_55(iVar1);
			Local_88.f_6 = func_55(iVar1);
			Local_88.f_13 = {Local_88.f_10, -5000f, 0f};
			return vVar2;
			break;
		
		case 3:
			iVar0 = 15;
			while (iVar0 <= 20)
			{
				fVar5 = get_distance_between_coords(Local_88.f_10, func_31(iVar0), 1);
				if (fVar5 < fVar6)
				{
					iVar1 = iVar0;
					fVar6 = fVar5;
				}
				iVar0++;
			}
			vVar2 = {func_31(iVar1)};
			Local_88.f_6 = func_55(iVar1);
			Local_88.f_6 = func_55(iVar1);
			Local_88.f_13 = {-5000f, Local_88.f_10.f_1, 0f};
			return vVar2;
			break;
	}
	return -1392.428f, -1661.61f, 0f;
}

float func_55(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 156.0512f;
		
		case 1:
			return 186.4808f;
		
		case 2:
			return 65.4787f;
		
		case 3:
			return 56.421f;
		
		case 4:
			return 76.4749f;
		
		case 5:
			return 79.1503f;
		
		case 6:
			return 24.8224f;
		
		case 7:
			return 27.7851f;
		
		case 8:
			return 32.1401f;
		
		case 9:
			return 329.6803f;
		
		case 10:
			return 328.7837f;
		
		case 11:
			return 283.9666f;
		
		case 12:
			return 295.5786f;
		
		case 13:
			return 314.4354f;
		
		case 14:
			return 0.4088f;
		
		case 15:
			return 287.0804f;
		
		case 16:
			return 249.5385f;
		
		case 17:
			return 270.7522f;
		
		case 18:
			return 260.8947f;
		
		case 19:
			return 248.4225f;
		
		case 20:
			return 233.6563f;
		
		default:
	}
	return 228.6098f;
}

int func_56()
{
	Vector3 vVar0;
	
	vVar0 = {func_42(player_id())};
	if (vVar0.y >= 0f && vVar0.x >= 0f)
	{
		return 0;
	}
	else if (vVar0.y < 0f && vVar0.x >= 0f)
	{
		return 1;
	}
	else if (vVar0.y < 0f && vVar0.x < 0f)
	{
		return 2;
	}
	else if (vVar0.y >= 0f && vVar0.x < 0f)
	{
		return 3;
	}
	return -1;
}

bool func_57(auto uParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		return true;
	}
	func_58(uParam0, iParam2, 0);
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

void func_58(auto uParam0, int iParam1, int iParam2)
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

bool func_59(auto uParam0)
{
	if (*uParam0.f_1)
	{
		if (absi(get_time_difference(get_network_time(), *uParam0)) >= 1000)
		{
			return true;
		}
	}
	return false;
}

void func_60(auto uParam0)
{
	if (!*uParam0.f_1)
	{
		if (network_is_host_of_this_script())
		{
			func_58(uParam0, 0, 0);
		}
	}
}

int func_61(int iParam0)
{
	if (network_does_network_id_exist(iParam0))
	{
		return !func_62(net_to_veh(iParam0));
	}
	return false;
}

bool func_62(int iParam0)
{
	if (does_entity_exist(iParam0))
	{
		if (is_entity_dead(iParam0, 0))
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

void func_63()
{
	if (func_3(player_id(), 1, 1))
	{
		if (Local_88.f_21 == 5)
		{
			vLocal_110[participant_id_to_int() /*3*/].f_2 = 5;
		}
		switch (vLocal_110[participant_id_to_int() /*3*/].f_2)
		{
			case 0:
				func_86();
				if (Local_88.f_21 > 0)
				{
					vLocal_110[participant_id_to_int() /*3*/].f_2 = 1;
				}
				break;
			
			case 1:
				if (func_61(Local_88.f_2))
				{
					func_118();
					if (is_ped_in_vehicle(player_ped_id(), net_to_veh(Local_88.f_2), 0))
					{
						func_85();
						vLocal_110[participant_id_to_int() /*3*/].f_2 = 3;
						clear_ped_tasks(player_ped_id());
						clear_bit(&(vLocal_110[participant_id_to_int() /*3*/].f_1), false);
					}
				}
				break;
			
			case 2:
				if (func_61(Local_88.f_2))
				{
					if (is_ped_in_vehicle(player_ped_id(), net_to_veh(Local_88.f_2), 0))
					{
						vLocal_110[participant_id_to_int() /*3*/].f_2 = 3;
						clear_bit(&(vLocal_110[participant_id_to_int() /*3*/].f_1), 5);
						set_bit(&(vLocal_110[participant_id_to_int() /*3*/].f_1), 6);
						if (Local_88.f_21 >= 4)
						{
							vLocal_110[participant_id_to_int() /*3*/].f_2 = 4;
						}
					}
					else
					{
						vLocal_110[participant_id_to_int() /*3*/].f_2 = 1;
					}
				}
				break;
			
			case 3:
				if (func_61(Local_88.f_2))
				{
					if (is_ped_in_vehicle(player_ped_id(), net_to_veh(Local_88.f_2), 0))
					{
						if (Local_88.f_21 >= 4)
						{
							vLocal_110[participant_id_to_int() /*3*/].f_2 = 4;
						}
						func_84();
					}
					else
					{
						vLocal_110[participant_id_to_int() /*3*/].f_2 = 1;
					}
				}
				break;
			
			case 4:
				if (func_61(Local_88.f_2))
				{
					if (!is_bit_set(iLocal_207, 3))
					{
						if (get_entity_speed(net_to_veh(Local_88.f_2)) < 3f)
						{
							task_leave_any_vehicle(player_ped_id(), 0, 0);
							set_bit(&iLocal_207, 3);
						}
					}
					if ((!is_ped_in_vehicle(player_ped_id(), net_to_veh(Local_88.f_2), 0) && !is_ped_on_specific_vehicle(player_ped_id(), net_to_veh(Local_88.f_2))) && func_25(player_ped_id(), net_to_veh(Local_88.f_2), 1) >= 10f)
					{
						vLocal_110[participant_id_to_int() /*3*/].f_2 = 5;
					}
				}
				break;
			
			case 5:
				func_133();
				break;
		}
		func_64();
	}
}

void func_64()
{
	int iVar0;
	struct<9> Var1;
	
	if (has_scaleform_movie_loaded(iLocal_213))
	{
		if (func_79(1, 1))
		{
			if (((vLocal_110[participant_id_to_int() /*3*/].f_2 == 1 || vLocal_110[participant_id_to_int() /*3*/].f_2 == 2) || vLocal_110[participant_id_to_int() /*3*/].f_2 == 3) || vLocal_110[participant_id_to_int() /*3*/].f_2 == 4)
			{
				iVar0 = 1;
				Var1 = {func_78()};
				func_76(&uLocal_214);
				if (vLocal_110[participant_id_to_int() /*3*/].f_2 == 1)
				{
					if (func_61(Local_88.f_2))
					{
						if ((is_entity_at_entity(player_ped_id(), net_to_veh(Local_88.f_2), 10f, 10f, 3f, 0, 1, 0) && !is_ped_in_any_vehicle(player_ped_id(), 0)) && !func_75(net_to_veh(Local_88.f_2), 0))
						{
							func_74(_get_control_action_name(2, 23, true), "BTX_ENTER", &uLocal_214, 0);
						}
					}
				}
				else
				{
					iVar0 = 0;
				}
				if (iVar0 == 1)
				{
					func_84();
					func_73(1);
					func_65(&iLocal_213, &Var1, &uLocal_214, func_72(&uLocal_214));
				}
			}
		}
	}
	else
	{
		iLocal_213 = unk_0x67D02A194A2FC2BD("instructional_buttons");
	}
}

void func_65(int iParam0, auto uParam1, auto uParam2, int iParam3)
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
			if (is_pc_version())
			{
				_push_scaleform_movie_function(*iParam0, "TOGGLE_MOUSE_BUTTONS");
				_push_scaleform_movie_function_parameter_bool(false);
				_pop_scaleform_movie_function_void();
			}
			_push_scaleform_movie_function(*iParam0, "CLEAR_ALL");
			_pop_scaleform_movie_function_void();
		}
		func_71(uParam2);
	}
	if (Global_1318755 < 2)
	{
		func_70(1);
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
			if (is_pc_version())
			{
				_push_scaleform_movie_function(*iParam0, "TOGGLE_MOUSE_BUTTONS");
				_push_scaleform_movie_function_parameter_bool(true);
				_pop_scaleform_movie_function_void();
			}
			iVar0 = false;
			iVar0 = false;
			while (iVar0 < *uParam2.f_680)
			{
				if (is_bit_set(*uParam2.f_676, iVar0))
				{
					_push_scaleform_movie_function(*iParam0, "SET_DATA_SLOT");
					_push_scaleform_movie_function_parameter_int(iVar0);
					if (!is_bit_set(*uParam2.f_677, iVar0))
					{
						iVar1 = *(uParam2.f_1[iVar0 /*56*/]).f_53;
						iVar2 = *(uParam2.f_1[iVar0 /*56*/]).f_54;
						iVar3 = *(uParam2.f_1[iVar0 /*56*/]).f_55;
						func_69(_get_control_action_name(iVar1, iVar2, true));
						if (iVar3 < 344)
						{
							func_69(_get_control_action_name(iVar1, iVar3, true));
						}
					}
					else
					{
						iVar4 = *(uParam2.f_1[iVar0 /*56*/]).f_53;
						iVar5 = *(uParam2.f_1[iVar0 /*56*/]).f_54;
						func_69(_0x80C2FD58D720C801(iVar4, iVar5, true));
					}
					if (is_bit_set(*uParam2.f_674, iVar0))
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
					else if (is_bit_set(*uParam2.f_675, iVar0))
					{
						_begin_text_component(uParam2.f_1[iVar0 /*56*/].f_32);
						add_text_component_substring_player_name(uParam2.f_1[iVar0 /*56*/].f_37);
						_end_text_component();
					}
					else
					{
						func_68(uParam2.f_1[iVar0 /*56*/].f_32);
					}
					if (is_pc_version())
					{
						if (is_bit_set(*uParam2.f_678, iVar0))
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
					func_69(uParam2.f_1[iVar0 /*56*/]);
					if (!is_string_null_or_empty(uParam2.f_1[iVar0 /*56*/].f_16))
					{
						func_69(uParam2.f_1[iVar0 /*56*/].f_16);
					}
					if (is_bit_set(*uParam2.f_674, iVar0))
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
					else if (is_bit_set(*uParam2.f_675, iVar0))
					{
						_begin_text_component(uParam2.f_1[iVar0 /*56*/].f_32);
						add_text_component_substring_player_name(uParam2.f_1[iVar0 /*56*/].f_37);
						_end_text_component();
					}
					else
					{
						func_68(uParam2.f_1[iVar0 /*56*/].f_32);
					}
					if (is_pc_version())
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
		func_67(*iParam0, uParam1);
	}
	func_66();
}

void func_66()
{
	hide_hud_component_this_frame(7);
	hide_hud_component_this_frame(6);
	hide_hud_component_this_frame(8);
	hide_hud_component_this_frame(9);
}

void func_67(int iParam0, auto uParam1)
{
	draw_scaleform_movie_fullscreen(iParam0, *uParam1.f_4, *uParam1.f_5, *uParam1.f_6, *uParam1.f_7, 0);
}

void func_68(char* sParam0)
{
	_begin_text_component(sParam0);
	_end_text_component();
}

void func_69(char* sParam0)
{
	_0xE83A3E3557A56640(sParam0);
}

void func_70(int iParam0)
{
	Global_1318755 = iParam0;
}

void func_71(auto uParam0)
{
	*uParam0.f_679 = 0;
}

auto func_72(auto uParam0)
{
	return *uParam0.f_679;
}

void func_73(int iParam0)
{
	Global_1339940.f_932 = iParam0;
}

void func_74(char* sParam0, char* sParam1, auto uParam2, char* sParam3)
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

bool func_75(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!is_entity_dead(iParam0, 0))
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
				if (is_ped_injured(iVar2))
				{
					return false;
				}
			}
			iVar0++;
		}
	}
	return true;
}

void func_76(auto uParam0)
{
	func_77(uParam0);
	*uParam0.f_679 = 1;
}

void func_77(auto uParam0)
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

struct<9> func_78()
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

bool func_79(int iParam0, int iParam1)
{
	if (is_pause_menu_active())
	{
		return false;
	}
	if (iParam0 == 1)
	{
		if (func_83())
		{
			return false;
		}
	}
	if (func_23())
	{
		return false;
	}
	if (iParam1 == 1)
	{
		if (func_82(0))
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
	if (func_80())
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

auto func_80()
{
	return Global_1315913;
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
	return is_bit_set(Global_1338622.f_949, iParam0);
}

bool func_82(int iParam0)
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

int func_83()
{
	return get_game_timer() <= Global_17257.f_5745 + 100;
}

void func_84()
{
	Global_2469052.f_258 = 1;
}

void func_85()
{
	if (does_blip_exist(iLocal_209))
	{
		remove_blip(&iLocal_209);
	}
}

void func_86()
{
	int iVar0;
	
	if (!is_help_message_being_displayed())
	{
		iVar0 = func_90(1183, -1, 0);
		if (!is_bit_set(iVar0, 15))
		{
			func_89("BTX_HELP1", -1);
			set_bit(&iVar0, 15);
			func_87(1183, iVar0, -1, 1);
		}
	}
}

void func_87(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2469339[iParam0 /*5*/][func_88(iParam2)];
	if (iVar0 != 0)
	{
		stat_set_int(iVar0, iParam1, iParam3);
	}
}

int func_88(auto uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_16();
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

void func_89(char* sParam0, int iParam1)
{
	_set_text_component_format(sParam0);
	_display_help_text_from_string_label(0, 0, true, iParam1);
}

int func_90(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	auto uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2469339[iParam0 /*5*/][func_88(iParam1)];
	if (stat_get_int(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_91()
{
	if (!func_4(Local_88.f_3) && func_61(Local_88.f_2))
	{
		if (network_has_control_of_network_id(Local_88.f_3) || (!_0xA1607996431332DF(Local_88.f_3) && network_is_host_of_this_script()))
		{
			func_116();
			func_95();
			if (func_94(Local_88.f_3))
			{
				set_ped_reset_flag(net_to_ped(Local_88.f_3), 323, true);
			}
			switch (Local_88.f_20)
			{
				case 0:
					break;
				
				case 2:
					if (get_script_task_status(net_to_ped(Local_88.f_3), -1273030092) != 1 && get_script_task_status(net_to_ped(Local_88.f_3), -1273030092) != 0)
					{
						task_boat_mission(net_to_ped(Local_88.f_3), net_to_veh(Local_88.f_2), 0, player_ped_id(), 0f, 0f, 0f, 4, 12f, 786469, 10f, 1071);
					}
					break;
				
				case 4:
					func_93(get_entity_coords(net_to_veh(Local_88.f_2), 0), Local_88.f_7);
					_0x07FB139B592FA687(fLocal_1078, fLocal_1080, fLocal_1079, fLocal_1081);
					if (_0xF7B79A50B905A30D(fLocal_1078, fLocal_1080, fLocal_1079, fLocal_1081))
					{
						if (get_script_task_status(net_to_ped(Local_88.f_3), 242628503) != 1 && get_script_task_status(net_to_ped(Local_88.f_3), 242628503) != 0)
						{
							task_perform_sequence(net_to_ped(Local_88.f_3), iLocal_212);
						}
					}
					break;
				
				case 5:
					if (get_script_task_status(net_to_ped(Local_88.f_3), -1273030092) != 1 && get_script_task_status(net_to_ped(Local_88.f_3), -1273030092) != 0)
					{
						task_vehicle_mission_coors_target(net_to_ped(Local_88.f_3), net_to_veh(Local_88.f_2), get_entity_coords(net_to_veh(Local_88.f_2), 1), 5, 5f, 1076625579, 2f, 1f, 1);
					}
					break;
				
				case 3:
					if (get_script_task_status(net_to_ped(Local_88.f_3), -1273030092) != 1 && get_script_task_status(net_to_ped(Local_88.f_3), -1273030092) != 0)
					{
						task_vehicle_mission_coors_target(net_to_ped(Local_88.f_3), net_to_veh(Local_88.f_2), get_entity_coords(net_to_veh(Local_88.f_2), 1), 5, 5f, 1076625579, 2f, 1f, 1);
					}
					break;
				
				case 1:
					if (!is_bit_set(vLocal_110[participant_id_to_int() /*3*/].f_1, 7))
					{
						if (is_ped_in_vehicle(player_ped_id(), net_to_veh(Local_88.f_2), 0) || is_ped_on_specific_vehicle(player_ped_id(), net_to_veh(Local_88.f_2)))
						{
							set_ped_dies_in_water(net_to_ped(Local_88.f_3), 0);
							set_ped_dies_instantly_in_water(net_to_ped(Local_88.f_3), 0);
							set_ped_flee_attributes(net_to_ped(Local_88.f_3), 2, false);
							task_perform_sequence(net_to_ped(Local_88.f_3), iLocal_210);
						}
						else
						{
							set_ped_dies_in_water(net_to_ped(Local_88.f_3), 0);
							set_ped_dies_instantly_in_water(net_to_ped(Local_88.f_3), 0);
							set_ped_flee_attributes(net_to_ped(Local_88.f_3), 2, true);
							task_perform_sequence(net_to_ped(Local_88.f_3), iLocal_211);
						}
						set_bit(&(vLocal_110[participant_id_to_int() /*3*/].f_1), 7);
					}
					break;
				
				case 6:
					if (get_script_task_status(net_to_ped(Local_88.f_3), 242628503) != 1 && get_script_task_status(net_to_ped(Local_88.f_3), 242628503) != 0)
					{
						task_perform_sequence(net_to_ped(Local_88.f_3), iLocal_211);
					}
					break;
				
				case 7:
					if (network_does_network_id_exist(Local_88.f_2))
					{
						func_92(&(Local_88.f_2));
					}
					if (network_does_network_id_exist(Local_88.f_3))
					{
						set_ped_keep_task(net_to_ped(Local_88.f_3), true);
						func_92(&(Local_88.f_3));
					}
					break;
				}
			}
	}
}

void func_92(auto uParam0)
{
	int iVar0;
	
	if (network_does_entity_exist_with_network_id(*uParam0))
	{
		iVar0 = net_to_ent(*uParam0);
		set_entity_as_no_longer_needed(&iVar0);
	}
}

void func_93(struct<2> Param0, Vector3 fParam1, struct<2> Param2, auto uParam3)
{
	if (Param0 < Param3)
	{
		fLocal_1078 = Param0 - 25f;
		fLocal_1079 = Param3 + 25f;
	}
	else if (Param0 > Param3)
	{
		fLocal_1078 = Param3 - 25f;
		fLocal_1079 = Param0 + 25f;
	}
	if (Param0.f_1 < Param3.f_1)
	{
		fLocal_1080 = Param0.f_1 - 25f;
		fLocal_1081 = Param3.f_1 + 25f;
	}
	else if (Param0.f_1 > Param3.f_1)
	{
		fLocal_1080 = Param3.f_1 - 25f;
		fLocal_1081 = Param0.f_1 + 25f;
	}
}

int func_94(int iParam0)
{
	if (network_does_network_id_exist(iParam0))
	{
		network_request_control_of_network_id(iParam0);
		return network_has_control_of_network_id(iParam0);
	}
	return false;
}

void func_95()
{
	int iVar0;
	struct<4> Var1;
	
	if (!is_bit_set(iLocal_207, 4))
	{
		if (is_entity_at_entity(player_ped_id(), net_to_ped(Local_88.f_3), 15f, 15f, 15f, 0, 1, 0))
		{
			func_115(&uLocal_907, 8, net_to_ped(Local_88.f_3), "FM_DRIVER_BOAT", 0, 1);
			if (func_99(&uLocal_907, "FMAMBAU", "FMA_BPDA", 12, 0, 0, 1))
			{
				task_look_at_entity(net_to_ped(Local_88.f_3), player_ped_id(), 5000, 0, 2);
				set_bit(&iLocal_207, 4);
			}
		}
	}
	if (!is_bit_set(iLocal_207, 6))
	{
		if (Local_88.f_20 == 4)
		{
			func_115(&uLocal_907, 8, net_to_ped(Local_88.f_3), "FM_DRIVER_BOAT", 0, 1);
			if (func_99(&uLocal_907, "FMAMBAU", "FMA_BPDA3", 12, 0, 0, 1))
			{
				task_look_at_entity(net_to_ped(Local_88.f_3), player_ped_id(), 5000, 0, 2);
				set_bit(&iLocal_207, 6);
			}
		}
	}
	if (!is_bit_set(iLocal_207, 5))
	{
		if (is_entity_at_coord(player_ped_id(), Local_88.f_7, 10f * 2f, 10f * 2f, 10f * 2f, false, true, 0))
		{
			func_115(&uLocal_907, 8, net_to_ped(Local_88.f_3), "FM_DRIVER_BOAT", 0, 1);
			if (func_99(&uLocal_907, "FMAMBAU", "FMA_BPDA6", 12, 0, 0, 1))
			{
				task_look_at_entity(net_to_ped(Local_88.f_3), player_ped_id(), 5000, 0, 2);
				set_bit(&iLocal_207, 5);
			}
		}
	}
	if (!is_bit_set(iLocal_207, 7))
	{
		if (Local_88.f_20 == 5)
		{
			func_115(&uLocal_907, 8, net_to_ped(Local_88.f_3), "FM_DRIVER_BOAT", 0, 1);
			if (func_99(&uLocal_907, "FMAMBAU", "FMA_BPDA7", 12, 0, 0, 1))
			{
				task_look_at_entity(net_to_ped(Local_88.f_3), player_ped_id(), 5000, 0, 2);
				set_bit(&iLocal_207, 7);
			}
		}
	}
	if (!is_bit_set(iLocal_207, 8))
	{
		func_115(&uLocal_907, 8, net_to_ped(Local_88.f_3), "FM_DRIVER_BOAT", 0, 1);
		if (func_99(&uLocal_907, "FMAMBAU", "FMA_BPDA4", 12, 0, 0, 1))
		{
			task_look_at_entity(net_to_ped(Local_88.f_3), player_ped_id(), 5000, 0, 2);
			set_bit(&iLocal_207, 8);
		}
	}
	if (Local_88.f_20 == 3)
	{
		if (func_57(&uLocal_1073, 30000, 0))
		{
			func_115(&uLocal_907, 8, net_to_ped(Local_88.f_3), "FM_DRIVER_BOAT", 0, 1);
			if (func_99(&uLocal_907, "FMAMBAU", "FMA_BPDA2", 12, 0, 0, 1))
			{
				task_look_at_entity(net_to_ped(Local_88.f_3), player_ped_id(), 5000, 0, 2);
				func_98(&uLocal_1073, 0, 0);
			}
		}
	}
	if (Local_88.f_20 == 4)
	{
		if (get_player_wanted_level(player_id()) <= 0)
		{
			if (func_57(&uLocal_1076, iLocal_1075, 0))
			{
				iVar0 = get_random_int_in_range(0, 17);
				StringCopy(&Var1, "", 16);
				if (!is_bit_set(iLocal_208, iVar0))
				{
					switch (iVar0)
					{
						case 0:
							StringCopy(&Var1, "FMA_BPDA5", 16);
							break;
						
						case 1:
							StringCopy(&Var1, "FMA_BPDA5b", 16);
							break;
						
						case 2:
							StringCopy(&Var1, "FMA_BPDA5c", 16);
							break;
						
						case 3:
							StringCopy(&Var1, "FMA_BPDA5d", 16);
							break;
						
						case 4:
							StringCopy(&Var1, "FMA_BPDA5e", 16);
							break;
						
						case 5:
							StringCopy(&Var1, "FMA_BPDA5f", 16);
							break;
						
						case 6:
							StringCopy(&Var1, "FMA_BPDA5g", 16);
							break;
						
						case 7:
							StringCopy(&Var1, "FMA_BPDA5h", 16);
							break;
						
						case 8:
							StringCopy(&Var1, "FMA_BPDA5i", 16);
							break;
						
						case 9:
							StringCopy(&Var1, "FMA_BPDA5j", 16);
							break;
						
						case 10:
							StringCopy(&Var1, "FMA_BPDA5k", 16);
							break;
						
						case 11:
							StringCopy(&Var1, "FMA_BPDA5l", 16);
							break;
						
						case 12:
							StringCopy(&Var1, "FMA_BPDA5m", 16);
							break;
						
						case 13:
							StringCopy(&Var1, "FMA_BPDA5n", 16);
							break;
						
						case 14:
							StringCopy(&Var1, "FMA_BPDA5o", 16);
							break;
						
						case 15:
							StringCopy(&Var1, "FMA_BPDA5p", 16);
							break;
						
						case 16:
							StringCopy(&Var1, "FMA_BPDA5q", 16);
							break;
					}
					if (!is_string_null_or_empty(&Var1))
					{
						func_115(&uLocal_907, 8, net_to_ped(Local_88.f_3), "FM_DRIVER_BOAT", 0, 1);
						if (func_99(&uLocal_907, "FMAMBAU", &Var1, 12, 0, 0, 1))
						{
							func_98(&uLocal_1076, 0, 0);
							set_bit(&iLocal_208, iVar0);
							task_look_at_entity(net_to_ped(Local_88.f_3), player_ped_id(), 5000, 0, 2);
							iLocal_1075 = get_random_int_in_range(20000, 30001) + iVar0 * 500;
						}
					}
				}
			}
		}
	}
	if (!func_4(Local_88.f_3))
	{
		if (func_61(Local_88.f_2))
		{
			if (!is_ambient_speech_playing(net_to_ped(Local_88.f_3)) && !is_scripted_speech_playing(net_to_ped(Local_88.f_3)))
			{
				if (has_entity_been_damaged_by_entity(net_to_veh(Local_88.f_2), player_ped_id(), 1) || has_entity_been_damaged_by_entity(net_to_ped(Local_88.f_3), player_ped_id(), 1))
				{
					switch (get_random_int_in_range(0, 6))
					{
						case 0:
							func_96(net_to_ped(Local_88.f_3), "GENERIC_SHOCKED_MED", 3);
							break;
						
						case 1:
							func_96(net_to_ped(Local_88.f_3), "GENERIC_SHOCKED_HIGH", 3);
							break;
						
						case 2:
							func_96(net_to_ped(Local_88.f_3), "GENERIC_FRIGHTENED_MED", 3);
							break;
						
						case 3:
							func_96(net_to_ped(Local_88.f_3), "GENERIC_FRIGHTENED_HIGH", 3);
							break;
						
						case 4:
							func_96(net_to_ped(Local_88.f_3), "GENERIC_CURSE_MED", 3);
							break;
						
						case 5:
							func_96(net_to_ped(Local_88.f_3), "GENERIC_CURSE_HIGH", 3);
							break;
					}
					clear_entity_last_damage_entity(net_to_veh(Local_88.f_2));
					clear_entity_last_damage_entity(net_to_ped(Local_88.f_3));
				}
			}
			else
			{
				clear_entity_last_damage_entity(net_to_veh(Local_88.f_2));
				clear_entity_last_damage_entity(net_to_ped(Local_88.f_3));
			}
		}
	}
}

void func_96(int iParam0, char* sParam1, int iParam2)
{
	_play_ambient_speech1(iParam0, sParam1, func_97(iParam2), 1);
}

int func_97(int iParam0)
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

void func_98(auto uParam0, int iParam1, int iParam2)
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

int func_99(auto uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_114(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_100(sParam2, iParam3, 0);
}

bool func_100(char* sParam0, int iParam1, int iParam2)
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
					func_113();
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
		func_112();
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
				func_105();
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
				if (func_104())
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
			if (func_103())
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
			func_102();
			Global_15722 = iParam2;
		}
		Global_15714 = iParam1;
		StringCopy(&Global_15331, sParam0, 24);
		Global_14578 = 0;
		func_101();
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
		func_113();
	}
	return false;
}

void func_101()
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

void func_102()
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

bool func_103()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return true;
	}
	return false;
}

bool func_104()
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

void func_105()
{
	if (func_111(14))
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
		Global_14413 = func_106();
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

auto func_106()
{
	func_107();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_107()
{
	int iVar0;
	
	if (does_entity_exist(player_ped_id()))
	{
		if (func_110(Global_101154.f_1826.f_539.f_3549) != get_entity_model(player_ped_id()))
		{
			iVar0 = func_109(player_ped_id());
			if (func_108(iVar0) && (!func_111(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_108(Global_101154.f_1826.f_539.f_3549))
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

int func_108(int iParam0)
{
	return iParam0 < 3;
}

int func_109(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (does_entity_exist(iParam0))
	{
		iVar1 = get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_110(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_110(int iParam0)
{
	if (func_108(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_111(int iParam0)
{
	return Global_35711 == iParam0;
}

void func_112()
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

void func_113()
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

void func_114(auto uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, auto uParam5)
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

void func_115(auto uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_116()
{
	set_audio_flag("MobileRadioInGame", 0);
	if (func_3(player_id(), 1, 1))
	{
		if (is_ped_sitting_in_vehicle(player_ped_id(), net_to_veh(Local_88.f_2)) && !func_117(player_ped_id(), net_to_veh(Local_88.f_2), -1))
		{
			set_audio_flag("MobileRadioInGame", 1);
		}
	}
}

bool func_117(int iParam0, int iParam1, int iParam2)
{
	if (!is_entity_dead(iParam0, 0) && !is_entity_dead(iParam1, 0))
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

void func_118()
{
	if (!does_blip_exist(iLocal_209))
	{
		if (func_61(Local_88.f_2))
		{
			iLocal_209 = add_blip_for_entity(net_to_veh(Local_88.f_2));
			set_blip_sprite(iLocal_209, 356);
			set_blip_name_from_text_file(iLocal_209, "BTX_BLIP");
			set_blip_flashes(iLocal_209, 1);
			set_blip_category(iLocal_209, 6);
		}
	}
}

void func_119()
{
	if (func_61(Local_88.f_2))
	{
		open_sequence_task(&iLocal_212);
		task_boat_mission(false, net_to_veh(Local_88.f_2), 0, false, Local_88.f_7, 4, 12f, 786469, 10f, 1071);
		close_sequence_task(iLocal_212);
		open_sequence_task(&iLocal_211);
		task_vehicle_mission_coors_target(false, net_to_veh(Local_88.f_2), Local_88.f_13, 4, 12f, 786469, 0f, 0f, 1);
		task_vehicle_drive_wander(false, net_to_veh(Local_88.f_2), 12f, 786469);
		close_sequence_task(iLocal_211);
		open_sequence_task(&iLocal_210);
		task_leave_any_vehicle(false, 0, 64);
		if (!is_ped_injured(player_ped_id()))
		{
			task_smart_flee_ped(false, player_ped_id(), 300f, -1, 0, 0);
		}
		else
		{
			task_wander_standard(false, 40000f, 0);
		}
		close_sequence_task(iLocal_210);
	}
}

auto func_120()
{
	return Local_88.f_1;
}

auto func_121(int iParam0)
{
	return vLocal_110[iParam0 /*3*/];
}

bool func_122()
{
	int iVar0;
	
	func_129(&iVar0);
	if (iVar0)
	{
		return true;
	}
	if (Global_1315888 == 0)
	{
		if (!network_is_game_in_progress())
		{
			return true;
		}
	}
	if (func_128())
	{
		return true;
	}
	if (Global_2445442)
	{
		return true;
	}
	if (func_127())
	{
		return true;
	}
	if (func_126(157))
	{
		if (!func_125())
		{
			return true;
		}
	}
	if (func_126(155))
	{
		return true;
	}
	if (!network_is_signed_online())
	{
		return true;
	}
	if (func_123() != 0)
	{
		if (_get_number_of_instances_of_streamed_script(func_123()) == 0)
		{
			return true;
		}
	}
	return false;
}

int func_123()
{
	switch (func_124())
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

auto func_124()
{
	return Global_25120;
}

auto func_125()
{
	return Global_2434762.f_574;
}

bool func_126(int iParam0)
{
	if (get_event_exists(1, iParam0))
	{
		return true;
	}
	return false;
}

auto func_127()
{
	return Global_2443085;
}

auto func_128()
{
	return Global_2434762.f_569;
}

void func_129(auto uParam0)
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
					func_130(iVar0);
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

void func_130(int iParam0)
{
	Vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (get_event_data(1, iParam0, &vVar0, 3))
	{
		if (func_3(vVar0.y, 1, 1))
		{
			iVar3 = get_player_ped(vVar0.y);
			if (does_entity_exist(iVar3))
			{
				if (is_ped_in_any_vehicle(iVar3, 0))
				{
					iVar4 = get_vehicle_ped_is_in(iVar3, 0);
					if (is_vehicle_window_intact(iVar4, vVar0.z) && network_get_this_script_is_network_script())
					{
						if (func_131(iVar4, &iVar5))
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

bool func_131(int iParam0, auto uParam1)
{
	if (does_entity_exist(iParam0))
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

void func_132()
{
	wait(0);
}

void func_133()
{
	func_85();
	if (network_is_game_in_progress())
	{
		if (Local_88.f_20 == 7)
		{
			if (func_61(Local_88.f_2) && !func_4(Local_88.f_3))
			{
				task_perform_sequence(net_to_ped(Local_88.f_3), iLocal_211);
			}
			if (network_does_network_id_exist(Local_88.f_2))
			{
				if (network_has_control_of_network_id(Local_88.f_2))
				{
					func_92(&(Local_88.f_2));
				}
			}
			if (network_does_network_id_exist(Local_88.f_3))
			{
				if (network_has_control_of_network_id(Local_88.f_3))
				{
					func_92(&(Local_88.f_3));
				}
			}
		}
	}
	func_136(func_137(1, 1), 9, func_46());
	func_135();
	set_scaleform_movie_as_no_longer_needed(&iLocal_213);
	func_134();
}

void func_134()
{
	terminate_this_thread();
}

void func_135()
{
	clear_sequence_task(&iLocal_210);
	clear_sequence_task(&iLocal_211);
	clear_sequence_task(&iLocal_212);
}

void func_136(int iParam0, int iParam1, auto uParam2)
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

auto func_137(int iParam0, int iParam1)
{
	auto uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = false;
	while (iVar1 < 32)
	{
		iVar2 = int_to_playerindex(iVar1);
		if (func_3(iVar2, 0, 0))
		{
			if (iVar2 != player_id() || iParam0)
			{
				if (iParam1)
				{
					set_bit(&uVar0, iVar1);
				}
				else if (!func_40(iVar2, 0))
				{
					set_bit(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

bool func_138(struct<20> Param0)
{
	func_142(32, Param0);
	reserve_network_mission_peds(1);
	reserve_network_mission_vehicles(1);
	func_140(0, -1, 0);
	network_register_host_broadcast_variables(&Local_88, 22);
	network_register_player_broadcast_variables(&vLocal_110, 97);
	if (!func_139())
	{
		return false;
	}
	set_this_script_can_be_paused(0);
	if (network_is_host_of_this_script())
	{
		Local_88.f_4 = player_id();
		Local_88.f_5 = func_56();
		Local_88.f_10 = {get_entity_coords(player_ped_id(), 0) + Vector(0f, 5f, 0f)};
		Local_88.f_7 = {func_54(Local_88.f_5)};
	}
	set_bit(&iLocal_207, 8);
	iLocal_1072 = network_is_in_tutorial_session();
	vLocal_110[participant_id_to_int() /*3*/] = 0;
	return true;
}

bool func_139()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!network_is_game_in_progress())
		{
			return false;
		}
		if (_0x5D10B3795F3FC886())
		{
			return true;
		}
		if (func_128())
		{
			return false;
		}
		if (func_126(155))
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

bool func_140(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = network_get_script_status();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!iParam2)
			{
				func_134();
			}
			else
			{
				return false;
			}
		}
		if (!func_141())
		{
			if (iParam0 == 0)
			{
				if (!network_is_game_in_progress())
				{
					if (!iParam2)
					{
						func_134();
					}
					else
					{
						return false;
					}
				}
				if (func_128())
				{
					if (!iParam2)
					{
						func_134();
					}
					else
					{
						return false;
					}
				}
				if (func_126(155))
				{
					if (!iParam2)
					{
						func_134();
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
					func_134();
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
		if (!network_is_game_in_progress())
		{
			if (!iParam2)
			{
				func_134();
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
			func_134();
		}
		else
		{
			return false;
		}
	}
	return true;
}

auto func_141()
{
	return Global_1315888;
}

void func_142(int iParam0, struct<17> Param1, auto uParam2, auto uParam3, auto uParam4)
{
	if (!network_is_game_in_progress())
	{
		func_134();
	}
	network_set_this_script_is_network_script(iParam0, 0, Param1.f_16);
}

