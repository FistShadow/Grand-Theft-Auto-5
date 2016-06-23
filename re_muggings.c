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
	int iLocal_18 = 0;
	auto uLocal_19 = 0;
	auto uLocal_20 = 0;
	char* sLocal_21 = 0;
	float fLocal_22 = 0;
	auto uLocal_23 = 0;
	auto uLocal_24 = 0;
	auto uLocal_25 = 0;
	float fLocal_26 = 0;
	float fLocal_27 = 0;
	auto uLocal_28 = 0;
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
	Vector3 vLocal_43 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
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
	Vector3 vLocal_69 = 0;
	Vector3 vLocal_72 = 0;
	Vector3 fLocal_75 = 0;
	auto uLocal_76 = 0;
	float fLocal_77 = 0;
	Vector3 fLocal_78 = 0;
	Vector3 fLocal_79 = 0;
	Vector3 vLocal_80 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	Vector3 vLocal_87 = 0;
	int iLocal_90 = 0;
	Vector3 vLocal_91 = 0;
	Vector3 vLocal_94 = 0;
	Vector3 vLocal_97 = 0;
	Vector3 vLocal_100 = 0;
	char* sLocal_103 = 0;
	char* sLocal_104 = 0;
	char* sLocal_105 = 0;
	char* sLocal_106 = 0;
	char* sLocal_107 = 0;
	char* sLocal_108 = 0;
	char* sLocal_109 = 0;
	char* sLocal_110 = 0;
	char* sLocal_111 = 0;
	char* sLocal_112 = 0;
	char* sLocal_113 = 0;
	char* sLocal_114 = 0;
	char* sLocal_115 = 0;
	char* sLocal_116 = 0;
	char* sLocal_117 = 0;
	char* sLocal_118 = 0;
	char* sLocal_119 = 0;
	char* sLocal_120 = 0;
	int iLocal_121 = 0;
	Vector3 vLocal_122 = 0;
	Vector3 vLocal_125 = 0;
	Vector3 vLocal_128 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	int iLocal_138 = 0;
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	auto uLocal_142 = 0;
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	Vector3 vLocal_145 = 0;
	int iLocal_148 = 0;
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	int iLocal_154 = 0;
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	int iLocal_158 = 0;
	int iLocal_159 = 0;
	int iLocal_160 = 0;
	int iLocal_161 = 0;
	int iLocal_162 = 0;
	int iLocal_163 = 0;
	int iLocal_164 = 0;
	Vector3 fLocal_165 = 0;
	Vector3 vLocal_166 = 0;
	Vector3 vLocal_169 = 0;
	Vector3 vLocal_172 = 0;
	Vector3 vLocal_175 = 0;
	Vector3 vLocal_178 = 0;
	Vector3 vLocal_181 = 0;
	Vector3 vLocal_184 = 0;
	int iLocal_187 = 0;
	int iLocal_188 = 0;
	int iLocal_189 = 0;
	int iLocal_190 = 0;
	int iLocal_191 = 0;
	int iLocal_192 = 0;
	auto uLocal_193 = 0;
	auto uLocal_194 = 16;
	auto uLocal_195 = 0;
	auto uLocal_196 = 0;
	auto uLocal_197 = 0;
	auto uLocal_198 = 0;
	auto uLocal_199 = 0;
	auto uLocal_200 = 0;
	auto uLocal_201 = 0;
	auto uLocal_202 = 0;
	auto uLocal_203 = 0;
	auto uLocal_204 = 0;
	auto uLocal_205 = 0;
	auto uLocal_206 = 0;
	auto uLocal_207 = 0;
	auto uLocal_208 = 0;
	auto uLocal_209 = 0;
	auto uLocal_210 = 0;
	auto uLocal_211 = 0;
	auto uLocal_212 = 0;
	auto uLocal_213 = 0;
	auto uLocal_214 = 0;
	auto uLocal_215 = 0;
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
	char* sLocal_359 = 0;
	char* sLocal_360 = 0;
	char* sLocal_361 = 0;
	char* sLocal_362 = 0;
	char* sLocal_363 = 0;
	char* sLocal_364 = 0;
	char* sLocal_365 = 0;
	char* sLocal_366 = 0;
	char* sLocal_367 = 0;
	char* sLocal_368 = 0;
	char* sLocal_369 = 0;
	char* sLocal_370 = 0;
	Vector3 vLocal_371 = 0;
	Vector3 vLocal_374 = 0;
	char* sLocal_377 = 0;
	char* sLocal_378 = 0;
	int iLocal_379 = 0;
	auto uLocal_380 = 0;
	auto uLocal_381 = 0;
	auto uLocal_382 = -1;
	auto uLocal_383 = 0;
	auto uLocal_384 = 0;
	auto uLocal_385 = 0;
	auto uLocal_386 = 0;
	auto uLocal_387 = 0;
	auto uLocal_388 = 0;
	auto uLocal_389 = 1000;
	auto uLocal_390 = 1000;
	auto uLocal_391 = 0;
	auto uLocal_392 = 0;
	auto uLocal_393 = 15;
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
	auto uLocal_666 = 1;
	int iLocal_667 = 0;
	int iLocal_668 = 0;
	int iLocal_669 = 0;
	Vector3 vLocal_670 = 0;
	struct<2> Local_673 = 0;
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
	auto uLocal_690 = 5;
	auto uLocal_691 = 0;
	auto uLocal_692 = 0;
	auto uLocal_693 = 0;
	auto uLocal_694 = 0;
	auto uLocal_695 = 0;
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
	iLocal_18 = 3;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	vLocal_91 = {-131.052f, -1627f, 31.1755f};
	vLocal_94 = {287.888f, -284.603f, 52.967f};
	vLocal_97 = {-319.66f, -832.28f, 31.61f};
	vLocal_100 = {31f, -1019f, 28.5f};
	sLocal_120 = "";
	sLocal_359 = "RANDOM@MUGGING3";
	sLocal_360 = "pickup_object";
	sLocal_377 = "RANDOM@BICYCLE_THIEF@RETURN_FRONT";
	iLocal_379 = -1;
	if (has_force_cleanup_occurred(11))
	{
		if (iLocal_48 == 5 || iLocal_48 == 12)
		{
			func_276(25, iLocal_90);
			func_258();
		}
		else
		{
			func_258();
		}
	}
	vLocal_122 = {Local_673.f_1[0 /*3*/]};
	func_257(&uLocal_393, 3);
	func_256();
	if ((iLocal_90 == 1 && func_255(55)) && !func_254(55))
	{
		terminate_this_thread();
	}
	if (func_213(vLocal_122, 25, iLocal_90, 0, 0))
	{
		func_210(-1);
	}
	else
	{
		terminate_this_thread();
	}
	iVar0 = false;
	while (true)
	{
		wait(false);
		func_207(&uLocal_393);
		if (is_player_playing(player_id()))
		{
			set_all_random_peds_flee_this_frame(player_id());
		}
		func_206(iLocal_65, &uLocal_392);
		if (is_world_point_within_brain_activation_range() || iLocal_149)
		{
			switch (iLocal_46)
			{
				case 0:
					if (func_192())
					{
						set_create_random_cops(false);
						clear_area_of_vehicles(-127.9025f, -1574.084f, 36.4128f, 10f, 0, 0, 0, 0, false);
						iLocal_156 = 1;
						iLocal_46 = 1;
					}
					else if (func_191())
					{
						func_258();
					}
					break;
				
				case 1:
					if (is_player_playing(player_id()))
					{
						if (iLocal_141 == 0)
						{
							iLocal_141 = add_shocking_event_at_position(99, vLocal_122, 0f);
						}
						set_all_random_peds_flee_this_frame(player_id());
						switch (iLocal_48)
						{
							case 1:
								func_183();
								break;
							
							case 2:
								draw_debug_text_2d("MUGGING_INTERACTION", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
								switch (iLocal_49)
								{
									case 0:
										draw_debug_text_2d("INITIAL_MUGGING_SEQ", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
										if (PED::IS_PED_INJURED(iLocal_63) || has_entity_been_damaged_by_entity(iLocal_63, PLAYER::PLAYER_PED_ID(), 0))
										{
											iVar0 = PED::IS_PED_INJURED(iLocal_62);
											if (!does_pickup_exist(iLocal_191))
											{
											}
											if (iVar0 == 0 && iLocal_90 == 1)
											{
												set_ped_to_ragdoll(iLocal_62, 500, 1000, 0, 0, 0, 0);
												task_smart_flee_ped(iLocal_62, PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
												set_ped_keep_task(iLocal_62, true);
												func_182(1);
												func_177();
											}
										}
										else
										{
											func_147();
										}
										if (iLocal_669 == 1 && iLocal_149 == 1)
										{
											iLocal_48 = 4;
										}
										else if (iLocal_149)
										{
											iLocal_49 = 2;
										}
										break;
									
									case 2:
										draw_debug_text_2d("VIC_CRY_OUT", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
										func_146();
										if (iLocal_54 && !func_145())
										{
											iLocal_49 = 4;
										}
										break;
									
									case 4:
										draw_debug_text_2d("ASK_PLAYER_FOR_HELP", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
										if (func_144())
										{
											func_143();
										}
										if (iLocal_155)
										{
											iLocal_49 = 5;
										}
										if (get_script_task_status(iLocal_62, 242628503) == 7)
										{
											open_sequence_task(&iLocal_121);
											task_look_at_entity(false, iLocal_63, 5000, 0, 2);
											task_turn_ped_to_face_entity(false, PLAYER::PLAYER_PED_ID(), 5000);
											task_play_anim(false, sLocal_359, "agitated_loop_a", 4f, -4f, -1, 0, 0, 0, 0, 0);
											task_play_anim(false, sLocal_359, "agitated_loop_b", 8f, -4f, -1, 0, 0, 0, 0, 0);
											task_play_anim(false, sLocal_359, "agitated_loop_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
											close_sequence_task(iLocal_121);
											task_perform_sequence(iLocal_62, iLocal_121);
											clear_sequence_task(&iLocal_121);
										}
										break;
									
									case 5:
										func_140();
										if (!is_entity_dead(iLocal_62, 0))
										{
											if (get_script_task_status(iLocal_62, 242628503) == 7)
											{
												open_sequence_task(&iLocal_121);
												task_turn_ped_to_face_entity(false, iLocal_63, false);
												task_play_anim(false, sLocal_359, "agitated_loop_a", 8f, -4f, -1, 0, 0, 0, 0, 0);
												task_play_anim(false, sLocal_359, "agitated_loop_b", 8f, -4f, -1, 0, 0, 0, 0, 0);
												task_play_anim(false, sLocal_359, "agitated_loop_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
												close_sequence_task(iLocal_121);
												task_perform_sequence(iLocal_62, iLocal_121);
												clear_sequence_task(&iLocal_121);
											}
										}
										break;
								}
								if (func_139())
								{
									iLocal_48 = 11;
								}
								if (iLocal_149)
								{
								}
								func_138();
								if (iLocal_49 == 0)
								{
									if (func_136())
									{
										if (iLocal_143 == 4)
										{
											if (does_blip_exist(iLocal_66))
											{
												remove_blip(&iLocal_66);
											}
											if (does_blip_exist(iLocal_65))
											{
												remove_blip(&iLocal_65);
											}
											if (!does_blip_exist(iLocal_67))
											{
												iLocal_67 = func_134(iLocal_191);
											}
											iLocal_48 = 4;
										}
										else
										{
											iLocal_48 = 3;
										}
									}
									if (func_133())
									{
										func_132();
									}
								}
								if (func_131())
								{
									func_130();
									func_129();
									if (is_entity_at_coord(iLocal_62, vLocal_184, 7f, 7f, 7f, false, true, 0))
									{
										iLocal_143 = 2;
										iLocal_48 = 3;
									}
									else
									{
										iLocal_48 = 4;
									}
								}
								if (iLocal_149)
								{
									if (!is_ped_in_combat(iLocal_63, false))
									{
										func_127(iLocal_66, &uLocal_142);
									}
									else if (does_blip_exist(iLocal_66))
									{
										if (get_blip_colour(iLocal_66) == 1)
										{
										}
										else
										{
											set_blip_as_friendly(iLocal_66, false);
											set_blip_colour(iLocal_66, 1);
										}
									}
								}
								if (func_126())
								{
									iLocal_48 = 10;
								}
								break;
							
							case 4:
								draw_debug_text_2d("ABLE_TO_RETRIEVE_DROPPED_BAG", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
								func_125(1);
								if (func_144())
								{
									func_143();
									func_140();
								}
								if (func_139())
								{
									iLocal_48 = 11;
								}
								func_117();
								break;
							
							case 5:
								draw_debug_text_2d("PLAYER_HAS_BAG", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
								func_125(1);
								if (!iLocal_152)
								{
									func_116(iLocal_62, &uLocal_193);
									uLocal_193 = uLocal_193;
									func_115();
									func_114();
									func_113();
									if (func_112())
									{
										func_111();
										func_177();
									}
									if (func_105(func_106()) < iLocal_192)
									{
										iLocal_48 = 12;
									}
								}
								func_49();
								break;
							
							case 10:
								draw_debug_text_2d("ABLE_TO_RETRIEVE_DROPPED_BAG", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
								func_48();
								break;
							
							case 3:
								func_47();
								break;
							
							case 11:
								func_46();
								break;
							
							case 6:
								if (func_139())
								{
									iLocal_48 = 11;
								}
								func_33();
								break;
							
							case 8:
								if (!PED::IS_PED_INJURED(iLocal_62))
								{
									if (is_entity_at_entity(iLocal_62, PLAYER::PLAYER_PED_ID(), 20f, 20f, 20f, 0, 1, 0))
									{
										iLocal_48 = 6;
									}
									else
									{
										func_258();
									}
								}
								break;
							
							case 9:
								draw_debug_text_2d("ABLE_TO_RETRIEVE_DROPPED_BAG", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_63))
								{
									if (PED::IS_PED_INJURED(iLocal_63))
									{
										if (does_blip_exist(iLocal_66))
										{
											remove_blip(&iLocal_66);
										}
										if (!ENTITY::DOES_ENTITY_EXIST(iLocal_62))
										{
											if (ENTITY::DOES_ENTITY_EXIST(iLocal_64))
											{
												delete_object(&iLocal_64);
											}
											func_32();
											iLocal_56 = 1;
											func_117();
										}
									}
								}
								break;
							
							case 12:
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_64))
								{
									delete_object(&iLocal_64);
								}
								set_player_control(player_id(), true, 0);
								func_177();
								break;
							
							case 13:
								func_31();
								break;
							}
					}
					if (iLocal_60)
					{
						if (does_pickup_exist(iLocal_191))
						{
							if (does_pickup_object_exist(iLocal_191))
							{
								if (vdist(vLocal_184, get_entity_coords(PLAYER::PLAYER_PED_ID(), 1)) > 150f)
								{
									func_258();
								}
							}
						}
					}
					else if (iLocal_149)
					{
						if (!PED::IS_PED_INJURED(iLocal_63))
						{
							if (iLocal_48 != 6)
							{
								if (func_30(PLAYER::PLAYER_PED_ID(), iLocal_63, 1) > 150f && (!is_entity_on_screen(iLocal_63) || is_entity_occluded(iLocal_63)))
								{
									func_29(&uLocal_380, 0, 0);
									iLocal_48 = 8;
								}
								else
								{
									func_4();
									func_3(iLocal_66, iLocal_63, 100f, 1061158912, 0);
								}
							}
						}
						else
						{
							func_29(&uLocal_380, 0, 0);
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_62))
					{
						if (!PED::IS_PED_INJURED(iLocal_62))
						{
							if (has_entity_been_damaged_by_entity(iLocal_62, PLAYER::PLAYER_PED_ID(), 1))
							{
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_64))
								{
									if (is_entity_attached_to_entity(iLocal_64, iLocal_62))
									{
										detach_entity(iLocal_64, 1, true);
									}
								}
							}
						}
					}
					if (iLocal_150)
					{
						if (!iLocal_163)
						{
							if (!is_entity_dead(iLocal_63, 0) && !is_entity_dead(iLocal_62, 0))
							{
								if (get_distance_between_coords(get_entity_coords(iLocal_63, 1), get_entity_coords(iLocal_62, 1), 1) > 100f && get_distance_between_coords(get_entity_coords(iLocal_63, 1), get_entity_coords(PLAYER::PLAYER_PED_ID(), 1), 1) < 100f)
								{
									task_smart_flee_ped(iLocal_63, PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
									iLocal_163 = 1;
								}
							}
						}
					}
					if (iLocal_149 && !iLocal_150)
					{
						if (!PED::IS_PED_INJURED(iLocal_63))
						{
							if (iLocal_90 == 3)
							{
								if (get_script_task_status(iLocal_63, 1805844857) != 1)
								{
									clear_ped_secondary_task(iLocal_63);
									task_smart_flee_ped(iLocal_63, iLocal_62, 200f, -1, 0, 0);
									force_ped_motion_state(iLocal_63, -530524, true, 0, 0);
									iLocal_150 = 1;
								}
							}
							else if (get_script_task_status(iLocal_63, 1805844857) != 1)
							{
								clear_ped_secondary_task(iLocal_63);
								task_smart_flee_ped(iLocal_63, PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
								force_ped_motion_state(iLocal_63, -530524, true, 0, 0);
								iLocal_150 = 1;
							}
							if (has_anim_event_fired(iLocal_63, -2134635134))
							{
								task_smart_flee_ped(iLocal_63, iLocal_62, 200f, -1, 0, 0);
								force_ped_motion_state(iLocal_63, -530524, true, 0, 0);
								iLocal_150 = 1;
							}
							if (iLocal_90 == 1 || iLocal_90 == 4)
							{
								if (is_entity_playing_anim(iLocal_63, sLocal_359, sLocal_369, 3))
								{
									if (get_entity_anim_current_time(iLocal_63, sLocal_359, sLocal_369) >= 0.922f)
									{
										task_smart_flee_ped(iLocal_63, PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
										force_ped_motion_state(iLocal_63, -530524, true, 0, 0);
										iLocal_150 = 1;
									}
								}
								if (is_entity_playing_anim(iLocal_63, sLocal_359, sLocal_367, 3))
								{
									if (get_entity_anim_current_time(iLocal_63, sLocal_359, sLocal_367) >= 0.922f)
									{
										task_smart_flee_ped(iLocal_63, PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
										force_ped_motion_state(iLocal_63, -530524, true, 0, 0);
										iLocal_150 = 1;
									}
								}
							}
						}
					}
					func_1();
					break;
			}
		}
		else
		{
			func_258();
		}
	}
}

void func_1()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_62))
	{
		if (PED::IS_PED_INJURED(iLocal_62))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_63))
			{
				if (PED::IS_PED_INJURED(iLocal_63))
				{
					func_258();
				}
			}
		}
	}
	if (PED::IS_PED_INJURED(iLocal_62))
	{
		if (does_blip_exist(iLocal_65))
		{
			remove_blip(&iLocal_65);
		}
	}
	if (PED::IS_PED_INJURED(iLocal_63))
	{
		if (does_blip_exist(iLocal_66))
		{
			remove_blip(&iLocal_66);
		}
	}
	if (!iLocal_161)
	{
		if (PED::IS_PED_INJURED(iLocal_63))
		{
			func_2(&uLocal_194, 1);
			iLocal_161 = 1;
		}
	}
	if (!iLocal_162)
	{
		if (PED::IS_PED_INJURED(iLocal_62))
		{
			func_2(&uLocal_194, 2);
			iLocal_162 = 1;
		}
	}
}

void func_2(auto uParam0, int iParam1)
{
	if (*(uParam0[iParam1 /*10*/]).f_7 == 1)
	{
		*(uParam0[iParam1 /*10*/]).f_7 = 0;
	}
}

void func_3(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4)
{
	int iVar0;
	Vector3 fVar1;
	float fVar2;
	
	fVar2 = fParam2 * fParam3;
	if (does_blip_exist(iParam0))
	{
		if ((ENTITY::DOES_ENTITY_EXIST(iParam1) && ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (is_entity_a_vehicle(iParam1))
			{
				if (is_vehicle_driveable(get_vehicle_index_from_entity_index(iParam1), 0))
				{
					fVar1 = get_distance_between_coords(get_entity_coords(PLAYER::PLAYER_PED_ID(), 1), get_entity_coords(iParam1, 1), 1);
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
				if (!PED::IS_PED_INJURED(get_ped_index_from_entity_index(iParam1)))
				{
					fVar1 = get_distance_between_coords(get_entity_coords(PLAYER::PLAYER_PED_ID(), 1), get_entity_coords(iParam1, 1), 1);
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

void func_4()
{
	if (!PED::IS_PED_INJURED(iLocal_63) || !iLocal_133)
	{
		func_5(&uLocal_380, iLocal_63, 0, 0, 1, 1, 1);
	}
	else
	{
		func_29(&uLocal_380, 0, 0);
	}
}

void func_5(auto uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_6(uParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6);
}

void func_6(auto uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, auto uParam5, int iParam6)
{
	func_7(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, iParam4, uParam5, iParam6);
}

void func_7(auto uParam0, int iParam1, Vector3 vParam2, char* sParam3, int iParam4, int iParam5, auto uParam6, int iParam7)
{
	if (!is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1))
	{
		func_29(uParam0, 0, 0);
	}
	*uParam0.f_6 = 2;
	func_8(uParam0, iParam1, vParam2, sParam5, iParam6, iParam7, uParam8, iParam9);
}

void func_8(auto uParam0, int iParam1, Vector3 vParam2, char* sParam3, int iParam4, int iParam5, auto uParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	
	if (*uParam0.f_1 && is_gameplay_hint_active())
	{
		if (GAMEPLAY::GET_GAME_TIMER() >= *uParam0.f_8 + *uParam0.f_9)
		{
			*uParam0.f_1 = 0;
		}
	}
	iVar0 = sParam5;
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
	if (func_28(iVar0))
	{
		func_27();
	}
	if (func_26(iParam1) && is_entity_visible(iParam1))
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
			if (func_21(uParam0, iParam7, iParam9, 0))
			{
				func_17(uParam0, iParam1, vParam2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (*uParam0.f_6 == 2)
			{
				if (func_13(iVar0))
				{
					if ((is_string_null(*uParam0.f_3) && !is_string_null(iVar0)) && is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
					{
						if ((iVar1 && !is_help_message_being_displayed()) && uParam8)
						{
							if (!func_28(iVar0))
							{
								func_12(iVar0, -1);
								*uParam0.f_3 = iVar0;
								if (are_strings_equal("CMN_HINT", iVar0))
								{
									func_11(1);
								}
							}
						}
					}
				}
			}
			else if (func_13(iVar0))
			{
				if (is_string_null(*uParam0.f_3) && !is_string_null(iVar0))
				{
					if (((is_entity_on_screen(iParam1) && iVar1) && !is_help_message_being_displayed()) && uParam8)
					{
						if (!func_28(iVar0))
						{
							func_12(iVar0, -1);
							*uParam0.f_3 = iVar0;
							if (are_strings_equal("CMN_HINT", iVar0))
							{
								func_11(1);
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
				if (func_28(sParam5))
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
						func_29(uParam0, iVar0, 1);
					}
				}
				else if (is_ped_in_any_heli(PLAYER::PLAYER_PED_ID()))
				{
					if (_0xEE778F8C7E1142E2(6) == 3 || _0xEE778F8C7E1142E2(6) == 4)
					{
						func_29(uParam0, iVar0, 1);
					}
				}
				else if (is_ped_in_any_plane(PLAYER::PLAYER_PED_ID()))
				{
					if (_0xEE778F8C7E1142E2(4) == 3 || _0xEE778F8C7E1142E2(4) == 4)
					{
						func_29(uParam0, iVar0, 1);
					}
				}
				else if (is_ped_in_any_sub(PLAYER::PLAYER_PED_ID()))
				{
					if (_0xEE778F8C7E1142E2(5) == 3 || _0xEE778F8C7E1142E2(5) == 4)
					{
						func_29(uParam0, iVar0, 1);
					}
				}
				else if (is_ped_on_any_bike(PLAYER::PLAYER_PED_ID()))
				{
					if (_0xEE778F8C7E1142E2(2) == 3 || _0xEE778F8C7E1142E2(2) == 4)
					{
						func_29(uParam0, iVar0, 1);
					}
				}
				else if (get_follow_vehicle_cam_view_mode() == 3 || get_follow_vehicle_cam_view_mode() == 4)
				{
					func_29(uParam0, iVar0, 1);
				}
			}
			if (!func_21(uParam0, iParam7, iParam9, 0))
			{
				if ((!*uParam0 && !*uParam0.f_1) && !func_10(uParam0))
				{
					func_9(uParam0);
				}
			}
		}
	}
	else
	{
		func_29(uParam0, iVar0, 0);
	}
}

void func_9(auto uParam0)
{
	if (func_26(PLAYER::PLAYER_PED_ID()))
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

bool func_10(auto uParam0)
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

int func_11(int iParam0)
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

void func_12(char* sParam0, int iParam1)
{
	_set_text_component_format(sParam0);
	_display_help_text_from_string_label(0, 0, true, iParam1);
}

bool func_13(char* sParam0)
{
	if (!func_14(1, 1, 0))
	{
		if ((!is_string_null_or_empty(sParam0) && func_28(sParam0)) || func_28("CMN_HINT"))
		{
			clear_help(1);
		}
		return false;
	}
	switch (Global_35711)
	{
		case 0:
		case 3:
			if (func_11(0) < 3)
			{
				return true;
			}
			break;
		
		case 4:
			if (func_11(0) < 1)
			{
				return true;
			}
			break;
		
		case 5:
		case 15:
			if (func_11(0) < 1)
			{
				return true;
			}
			break;
		
		default:
			break;
	}
	return false;
}

bool func_14(int iParam0, int iParam1, int iParam2)
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
	if (func_16(0))
	{
		return false;
	}
	if (func_15())
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

int func_15()
{
	return GAMEPLAY::GET_GAME_TIMER() <= Global_17257.f_5745 + 100;
}

bool func_16(int iParam0)
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

void func_17(auto uParam0, int iParam1, Vector3 vParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (is_entity_dead(iParam1, 0))
	{
		func_29(uParam0, 0, 0);
	}
	if (func_20(vParam2, 0f, 0f, 0f, 0))
	{
		if (is_entity_a_ped(iParam1))
		{
			iVar0 = get_ped_index_from_entity_index(iParam1);
			if (!is_ped_in_any_vehicle(iVar0, 0))
			{
				if (is_ped_a_player(iVar0))
				{
					if (!func_18())
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
	task_look_at_entity(PLAYER::PLAYER_PED_ID(), iParam1, -1, iVar3, iVar4);
	_start_screen_effect("FocusIn", false, 0);
	start_audio_scene("HINT_CAM_SCENE");
	play_sound_frontend(-1, "FocusIn", "HintCamSounds", 1);
	*uParam0.f_11 = 1;
	*uParam0.f_8 = GAMEPLAY::GET_GAME_TIMER();
	*uParam0.f_1 = 1;
	*uParam0 = 0;
}

int func_18()
{
	return func_19(player_id());
}

bool func_19(int iParam0)
{
	if (ENTITY::GET_ENTITY_MODEL(get_player_ped(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return true;
	}
	return false;
}

int func_20(Vector3 vParam0, Vector3 vParam1, int iParam2)
{
	if (iParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_21(auto uParam0, int iParam1, int iParam2, int iParam3)
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
					if (func_25(iParam1, iParam2, iParam3))
					{
						*uParam0.f_4 = GAMEPLAY::GET_GAME_TIMER();
						*uParam0.f_5 = 1;
						*uParam0.f_7 = 1;
					}
				}
				else if (func_24(iParam1, iParam2, iParam3))
				{
					*uParam0.f_4 = GAMEPLAY::GET_GAME_TIMER();
					*uParam0.f_5 = 1;
					*uParam0.f_7 = 1;
				}
			}
			else if (*uParam0.f_6 == 1)
			{
				if (func_24(iParam1, iParam2, iParam3))
				{
					*uParam0.f_4 = GAMEPLAY::GET_GAME_TIMER();
					*uParam0.f_5 = 1;
					*uParam0.f_7 = 1;
				}
			}
			else if (*uParam0.f_6 == 2)
			{
				if (func_25(iParam1, iParam2, iParam3))
				{
					*uParam0.f_4 = GAMEPLAY::GET_GAME_TIMER();
					*uParam0.f_5 = 1;
					*uParam0.f_7 = 1;
				}
			}
			if (func_10(uParam0))
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
						if (!func_25(iParam1, iParam2, iParam3))
						{
							*uParam0.f_4 = GAMEPLAY::GET_GAME_TIMER();
							*uParam0.f_5 = 3;
						}
					}
					else if (!func_24(iParam1, iParam2, iParam3))
					{
						*uParam0.f_4 = GAMEPLAY::GET_GAME_TIMER();
						*uParam0.f_5 = 3;
					}
				}
				else if (*uParam0.f_6 == 1)
				{
					if (!func_24(iParam1, iParam2, iParam3))
					{
						*uParam0.f_4 = GAMEPLAY::GET_GAME_TIMER();
						*uParam0.f_5 = 3;
					}
				}
				else if (*uParam0.f_6 == 2)
				{
					if (!func_25(iParam1, iParam2, iParam3))
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
					if (!func_25(iParam1, iParam2, iParam3))
					{
						*uParam0.f_5 = 0;
					}
				}
				else if (!func_24(iParam1, iParam2, iParam3))
				{
					*uParam0.f_5 = 0;
				}
			}
			else if (*uParam0.f_6 == 1)
			{
				if (!func_24(iParam1, iParam2, iParam3) || is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1))
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
				else if (!func_25(iParam1, iParam2, iParam3))
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
						if (func_23(iParam1, iParam2, iParam3))
						{
							*uParam0.f_5 = 0;
						}
					}
					else if (func_22(iParam1, iParam2, iParam3))
					{
						*uParam0.f_5 = 0;
					}
				}
				else if (*uParam0.f_6 == 1)
				{
					if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1) || func_22(iParam1, iParam2, iParam3))
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
					else if (func_23(iParam1, iParam2, iParam3))
					{
						*uParam0.f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_10(uParam0))
			{
				*uParam0.f_5 = 0;
			}
			break;
	}
	if (!func_14(iParam1, iParam2, iParam3))
	{
		*uParam0.f_5 = 0;
		*uParam0.f_7 = 0;
	}
	if (*uParam0.f_7)
	{
		func_27();
		return true;
	}
	else
	{
		return false;
	}
	return false;
}

bool func_22(int iParam0, int iParam1, int iParam2)
{
	if (!func_14(iParam0, iParam1, iParam2))
	{
		return false;
	}
	if (!is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
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

bool func_23(int iParam0, int iParam1, int iParam2)
{
	if (!func_14(iParam0, iParam1, iParam2))
	{
		return false;
	}
	if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
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

bool func_24(int iParam0, int iParam1, int iParam2)
{
	if (!func_14(iParam0, iParam1, iParam2))
	{
		return false;
	}
	if (!is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!is_player_targetting_anything(player_id()))
		{
			disable_control_action(0, 140, 1);
			disable_control_action(0, 80, 1);
			if (is_disabled_control_pressed(0, 80) && GAMEPLAY::GET_GAME_TIMER() > Global_116)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_25(int iParam0, int iParam1, int iParam2)
{
	if (!func_14(iParam0, iParam1, iParam2))
	{
		return false;
	}
	if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
	{
		disable_control_action(0, 80, 1);
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

bool func_26(int iParam0)
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

void func_27()
{
	GAMEPLAY::GAMEPLAY::SET_BIT(&Global_2284, 4);
}

int func_28(char* sParam0)
{
	_0x0A24DA3A41B718F5(sParam0);
	return _0x10BDDBFC529428DD(0);
}

void func_29(auto uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
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
		if (func_28(*uParam0.f_3))
		{
			clear_help(1);
		}
	}
	if (!is_string_null(sVar0))
	{
		if (func_28(sVar0))
		{
			clear_help(1);
		}
	}
}

auto func_30(int iParam0, int iParam1, int iParam2)
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

void func_31()
{
	func_258();
}

void func_32()
{
	if (!does_pickup_exist(iLocal_191))
	{
		if (PED::IS_PED_INJURED(iLocal_63))
		{
			vLocal_184 = {get_dead_ped_pickup_coords(iLocal_63, 1067030938, 1069547520)};
		}
		else
		{
			vLocal_184 = {get_safe_pickup_coords(get_entity_coords(iLocal_63, 1), 1.2f, 1.5f)};
		}
		iLocal_191 = create_pickup(joaat("pickup_money_wallet"), vLocal_184, iLocal_144, iLocal_192, 1, iLocal_85);
		iLocal_67 = func_134(iLocal_191);
		func_29(&uLocal_380, 0, 0);
		iLocal_60 = true;
	}
}

void func_33()
{
	if (!PED::IS_PED_INJURED(iLocal_62))
	{
		if (is_entity_playing_anim(iLocal_62, sLocal_359, "flee_backward_loop_shopkeeper", 3))
		{
			open_sequence_task(&iLocal_121);
			task_play_anim(false, sLocal_359, "flee_backward_outro_shopkeeper", 8f, -4f, -1, 8, 0, 0, 0, 0);
			task_wander_standard(false, 1193033728, 0);
			close_sequence_task(iLocal_121);
			task_perform_sequence(iLocal_62, iLocal_121);
			clear_sequence_task(&iLocal_121);
		}
		else if (is_entity_playing_anim(iLocal_62, sLocal_359, "flee_forward_loop_shopkeeper", 3))
		{
			open_sequence_task(&iLocal_121);
			task_play_anim(false, sLocal_359, "flee_forward_outro_shopkeeper", 8f, -4f, -1, 8, 0, 0, 0, 0);
			task_wander_standard(false, 1193033728, 0);
			close_sequence_task(iLocal_121);
			task_perform_sequence(iLocal_62, iLocal_121);
			clear_sequence_task(&iLocal_121);
		}
		func_34(&uLocal_194, sLocal_103, sLocal_110, 4, 0, 0, 0);
		iLocal_154 = 1;
		set_ped_keep_task(iLocal_62, true);
		wait(false);
		func_258();
	}
}

int func_34(auto uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_45(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_35(sParam2, iParam3, 0);
}

bool func_35(char* sParam0, int iParam1, int iParam2)
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
					func_44();
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
		if (func_43(8, -1))
		{
			return false;
		}
		Global_15788 = {Global_15782};
		func_42();
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
				func_40();
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
				if (func_39())
				{
					return false;
				}
				if (is_ped_sprinting(PLAYER::PLAYER_PED_ID()))
				{
					return false;
				}
				if (is_ped_ragdoll(PLAYER::PLAYER_PED_ID()))
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
			if (func_38())
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
			func_37();
			Global_15722 = iParam2;
		}
		Global_15714 = iParam1;
		StringCopy(&Global_15331, sParam0, 24);
		Global_14578 = 0;
		func_36();
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
		func_44();
	}
	return false;
}

void func_36()
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

void func_37()
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

bool func_38()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return true;
	}
	return false;
}

bool func_39()
{
	int iVar0;
	int iVar1;
	
	if (Global_69489)
	{
		iVar0 = 0;
		get_current_ped_weapon(PLAYER::PLAYER_PED_ID(), &iVar1, 1);
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

void func_40()
{
	if (func_41(14))
	{
		if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
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

int func_41(int iParam0)
{
	return Global_35711 == iParam0;
}

void func_42()
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

int func_43(int iParam0, int iParam1)
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

void func_44()
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

void func_45(auto uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, auto uParam5)
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

void func_46()
{
	if (!PED::IS_PED_INJURED(iLocal_62))
	{
		clear_ped_tasks(iLocal_62);
		task_smart_flee_ped(iLocal_62, PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
		set_ped_keep_task(iLocal_62, true);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_64))
		{
			delete_object(&iLocal_64);
		}
		wait(false);
		if (does_blip_exist(iLocal_65))
		{
			remove_blip(&iLocal_65);
		}
		set_ped_as_no_longer_needed(&iLocal_62);
	}
	if (PED::IS_PED_INJURED(iLocal_63) || PED::IS_PED_INJURED(iLocal_62))
	{
		if (does_blip_exist(iLocal_66))
		{
			remove_blip(&iLocal_66);
		}
		if (does_blip_exist(iLocal_65))
		{
			remove_blip(&iLocal_65);
		}
		if (does_pickup_exist(iLocal_191))
		{
			if (does_pickup_object_exist(iLocal_191))
			{
				iLocal_56 = 1;
				func_117();
			}
			else
			{
				func_125(0);
				func_258();
			}
		}
		else
		{
			func_258();
		}
	}
}

void func_47()
{
	int iVar0;
	
	func_117();
	if (does_pickup_exist(iLocal_191))
	{
		if (does_pickup_object_exist(iLocal_191))
		{
		}
	}
	if (iLocal_143 == 1)
	{
		if (!iLocal_51)
		{
			if (!PED::IS_PED_INJURED(iLocal_63))
			{
				clear_ped_tasks(iLocal_63);
				task_combat_ped(iLocal_63, PLAYER::PLAYER_PED_ID(), 0, 16);
				set_ped_keep_task(iLocal_63, true);
			}
			if (!PED::IS_PED_INJURED(iLocal_62))
			{
				if (does_pickup_exist(iLocal_191))
				{
					if (does_pickup_object_exist(iLocal_191))
					{
						clear_ped_tasks(iLocal_62);
						open_sequence_task(&iLocal_121);
						task_follow_nav_mesh_to_coord(false, get_pickup_coords(iLocal_191), 1f, 20000, 0.25f, 0, 1193033728);
						close_sequence_task(iLocal_121);
						task_perform_sequence(iLocal_62, iLocal_121);
						clear_sequence_task(&iLocal_121);
					}
				}
			}
			iLocal_51 = 1;
		}
	}
	if (iLocal_143 == 2)
	{
		if (!iLocal_51)
		{
			if (!PED::IS_PED_INJURED(iLocal_63))
			{
				clear_ped_tasks(iLocal_63);
				task_combat_ped(iLocal_63, PLAYER::PLAYER_PED_ID(), 0, 16);
				set_ped_keep_task(iLocal_63, true);
				set_entity_load_collision_flag(iLocal_63, false);
				set_ped_as_no_longer_needed(&iLocal_63);
			}
			if (!PED::IS_PED_INJURED(iLocal_62))
			{
				if (does_pickup_exist(iLocal_191))
				{
					if (does_pickup_object_exist(iLocal_191))
					{
						if (is_entity_at_coord(iLocal_62, get_pickup_coords(iLocal_191), 10f, 10f, 10f, false, true, 0))
						{
							if (iLocal_90 == 3)
							{
								if ((!is_entity_playing_anim(iLocal_62, sLocal_359, "handsup_standing_enter", 3) && !is_entity_playing_anim(iLocal_62, sLocal_359, "handsup_standing_base", 3)) && !is_entity_playing_anim(iLocal_62, sLocal_359, "handsup_standing_exit", 3))
								{
									clear_ped_tasks(iLocal_62);
									open_sequence_task(&iLocal_121);
									task_follow_nav_mesh_to_coord(false, get_pickup_coords(iLocal_191), 1f, 20000, 0.25f, 0, 1193033728);
									close_sequence_task(iLocal_121);
									task_perform_sequence(iLocal_62, iLocal_121);
									clear_sequence_task(&iLocal_121);
									iLocal_51 = 1;
								}
							}
							else if ((!is_entity_playing_anim(iLocal_62, sLocal_359, sLocal_370, 3) && !is_entity_playing_anim(iLocal_62, sLocal_359, sLocal_366, 3)) && !is_entity_playing_anim(iLocal_62, sLocal_359, sLocal_368, 3))
							{
								clear_ped_tasks(iLocal_62);
								open_sequence_task(&iLocal_121);
								task_follow_nav_mesh_to_coord(false, get_pickup_coords(iLocal_191), 1f, 20000, 0.25f, 0, 1193033728);
								close_sequence_task(iLocal_121);
								task_perform_sequence(iLocal_62, iLocal_121);
								clear_sequence_task(&iLocal_121);
								iLocal_51 = 1;
							}
						}
						else
						{
							iVar0 = true;
						}
					}
					else
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
					if (iLocal_90 == 3)
					{
						if ((!is_entity_playing_anim(iLocal_62, sLocal_359, "handsup_standing_enter", 3) && !is_entity_playing_anim(iLocal_62, sLocal_359, "handsup_standing_base", 3)) && !is_entity_playing_anim(iLocal_62, sLocal_359, "handsup_standing_exit", 3))
						{
							clear_ped_tasks(iLocal_62);
							task_smart_flee_ped(iLocal_62, PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
							set_ped_keep_task(iLocal_62, true);
							if (does_blip_exist(iLocal_65))
							{
								remove_blip(&iLocal_65);
							}
							set_ped_as_no_longer_needed(&iLocal_62);
							iLocal_51 = 1;
							iLocal_48 = 9;
						}
					}
					else if ((!is_entity_playing_anim(iLocal_62, sLocal_359, sLocal_370, 3) && !is_entity_playing_anim(iLocal_62, sLocal_359, sLocal_366, 3)) && !is_entity_playing_anim(iLocal_62, sLocal_359, sLocal_368, 3))
					{
						clear_ped_tasks(iLocal_62);
						task_smart_flee_ped(iLocal_62, PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
						set_ped_keep_task(iLocal_62, true);
						if (does_blip_exist(iLocal_65))
						{
							remove_blip(&iLocal_65);
						}
						set_ped_as_no_longer_needed(&iLocal_62);
						iLocal_51 = 1;
						iLocal_48 = 9;
					}
				}
			}
		}
	}
	if (iLocal_143 == 3)
	{
		if (!iLocal_51)
		{
			if (!PED::IS_PED_INJURED(iLocal_63))
			{
				clear_ped_tasks(iLocal_63);
				task_smart_flee_ped(iLocal_63, PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
				set_ped_keep_task(iLocal_63, true);
				set_entity_load_collision_flag(iLocal_63, false);
				set_ped_as_no_longer_needed(&iLocal_63);
			}
			if (!PED::IS_PED_INJURED(iLocal_62))
			{
				clear_ped_tasks(iLocal_62);
				task_smart_flee_ped(iLocal_62, PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
				set_ped_keep_task(iLocal_62, true);
				set_ped_as_no_longer_needed(&iLocal_62);
			}
			iLocal_56 = 1;
			iLocal_51 = 1;
		}
	}
	if (iLocal_143 == 1 || iLocal_143 == 2)
	{
		if (!PED::IS_PED_INJURED(iLocal_62))
		{
			if (iLocal_51)
			{
				if (does_pickup_exist(iLocal_191))
				{
					if (does_pickup_object_exist(iLocal_191))
					{
						if (is_entity_playing_anim(iLocal_62, sLocal_360, "pickup_low", 3))
						{
							if (get_entity_anim_current_time(iLocal_62, sLocal_360, "pickup_low") > 0.5f)
							{
								if (does_pickup_exist(iLocal_191))
								{
									if (does_pickup_object_exist(iLocal_191))
									{
										func_34(&uLocal_194, sLocal_103, sLocal_109, 4, 0, 0, 0);
										remove_pickup(iLocal_191);
										iLocal_52 = true;
									}
								}
							}
						}
						else if (get_script_task_status(iLocal_62, 242628503) == 7)
						{
							clear_ped_tasks(iLocal_62);
							open_sequence_task(&iLocal_121);
							task_play_anim(false, sLocal_360, "pickup_low", 8f, -8f, -1, 0, 0, 0, 0, 0);
							task_smart_flee_ped(false, PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
							close_sequence_task(iLocal_121);
							task_perform_sequence(iLocal_62, iLocal_121);
							clear_sequence_task(&iLocal_121);
							set_ped_keep_task(iLocal_62, true);
						}
					}
					else if (iLocal_52)
					{
						set_ped_money(iLocal_62, iLocal_192);
						set_ped_as_no_longer_needed(&iLocal_62);
						func_182(3);
						func_177();
					}
					else
					{
						task_smart_flee_ped(iLocal_62, PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
						set_ped_keep_task(iLocal_62, true);
						if (does_blip_exist(iLocal_65))
						{
							remove_blip(&iLocal_65);
						}
						set_ped_as_no_longer_needed(&iLocal_62);
						iLocal_51 = 1;
						iLocal_48 = 12;
					}
				}
				else if (iLocal_52)
				{
					set_ped_money(iLocal_62, iLocal_192);
					set_ped_as_no_longer_needed(&iLocal_62);
					func_182(3);
					func_177();
				}
				else
				{
					task_smart_flee_ped(iLocal_62, PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
					set_ped_keep_task(iLocal_62, true);
					if (does_blip_exist(iLocal_65))
					{
						remove_blip(&iLocal_65);
					}
					set_ped_as_no_longer_needed(&iLocal_62);
					iLocal_51 = 1;
					iLocal_48 = 12;
				}
			}
		}
		else
		{
			iLocal_48 = 9;
		}
	}
}

void func_48()
{
	if (!PED::IS_PED_INJURED(iLocal_62))
	{
		clear_ped_tasks(iLocal_62);
		task_smart_flee_ped(iLocal_62, PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
		set_ped_keep_task(iLocal_62, true);
		set_ped_as_no_longer_needed(&iLocal_62);
	}
}

void func_49()
{
	int iVar0;
	Vector3 vVar1;
	auto uVar4;
	struct<2> Var7;
	Vector3 vVar10;
	Vector3 fVar13;
	Vector3 fVar14;
	Vector3 vVar15;
	int iVar18;
	int iVar19;
	
	if (!PED::IS_PED_INJURED(iLocal_62))
	{
		if (!iLocal_152)
		{
			if (iLocal_153)
			{
				vVar15 = {get_entity_coords(PLAYER::PLAYER_PED_ID(), 1)};
				iVar18 = 1;
				if (iLocal_90 == 1)
				{
					if (vVar15.z > 33.5f)
					{
						iVar18 = 0;
					}
				}
				if (is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_62, 5f, 5f, 5f, 0, 1, 0) && iVar18 == 1)
				{
					if (func_103(2))
					{
						clear_help(1);
					}
					if (is_player_control_on(player_id()))
					{
						if (func_102(1, 0, 1))
						{
							if (!func_101())
							{
								if (!is_ped_ragdoll(PLAYER::PLAYER_PED_ID()))
								{
									func_92(1, 1, 1, 0);
									if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
									{
										while (!func_91(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0), fLocal_77, 1, 1056964608, 0, 1, 0) || func_145())
										{
											hide_hud_and_radar_this_frame();
											wait(false);
										}
										if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
										{
											task_leave_any_vehicle(PLAYER::PLAYER_PED_ID(), false, 0);
										}
									}
									set_player_control(player_id(), false, 0);
									if (!PED::IS_PED_INJURED(iLocal_62))
									{
										set_ped_can_ragdoll(iLocal_62, 0);
									}
									hide_hud_and_radar_this_frame();
									remove_all_shocking_events(0);
									remove_shocking_event(iLocal_141);
									if (is_scripted_conversation_ongoing())
									{
										func_89();
									}
									iLocal_152 = true;
									settimera(false);
								}
							}
						}
					}
				}
				else
				{
					func_87(get_entity_coords(iLocal_62, 1), &uLocal_76, &fLocal_77);
				}
			}
			else if (is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_62, 15f, 15f, 15f, 0, 1, 0))
			{
				open_sequence_task(&iLocal_121);
				task_turn_ped_to_face_entity(false, PLAYER::PLAYER_PED_ID(), false);
				task_look_at_entity(false, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
				if (iLocal_47 == 2)
				{
					task_play_anim(false, sLocal_377, "RETURNING_FRONT_A", 8f, -1000f, -1, 0, 0, 0, 0, 0);
				}
				close_sequence_task(iLocal_121);
				task_perform_sequence(iLocal_62, iLocal_121);
				clear_sequence_task(&iLocal_121);
				force_ped_motion_state(iLocal_62, -668482597, false, 0, 0);
				iLocal_153 = 1;
			}
		}
		if (iLocal_152)
		{
			switch (iLocal_151)
			{
				case 0:
					hide_hud_and_radar_this_frame();
					if (!is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (!PED::IS_PED_INJURED(iLocal_62))
						{
							func_84(iLocal_62, &vLocal_125, &vLocal_128, sLocal_361, sLocal_363);
							if (iLocal_90 == 1)
							{
								if (vLocal_128.z > 225f && vLocal_128.z < 265f)
								{
									if (vLocal_128.z < 245f)
									{
										vLocal_128.z = 225f;
									}
									else
									{
										vLocal_128.z = 265f;
									}
								}
								else if (vLocal_128.z > 45f && vLocal_128.z < 85f)
								{
									if (vLocal_128.z < 65f)
									{
										vLocal_128.z = 45f;
									}
									else
									{
										vLocal_128.z = 85f;
									}
								}
							}
							vLocal_125.z += 2f;
							get_ground_z_for_3d_coord(vLocal_125, &(vLocal_125.f_2), 0);
							vVar1 = {get_anim_initial_offset_position(sLocal_361, sLocal_363, vLocal_125, vLocal_128, 0f, 2)};
							vVar10 = {vVar1 - vLocal_125};
							vVar10.z = 0f;
							fVar13 = vmag(vVar10);
							get_ground_z_for_3d_coord(vVar1, &(vVar1.f_2), 0);
							fVar14 = vLocal_125.z - vVar1.z;
							vLocal_128.x = atan2(fVar14, fVar13);
							if (vLocal_128.x > 30f || vLocal_128.x < -30f)
							{
								vLocal_128.x = 0f;
							}
						}
						if (is_vehicle_driveable(get_players_last_vehicle(), 0))
						{
							if (!is_vehicle_driveable(iVar0, 0))
							{
								iVar0 = get_players_last_vehicle();
								get_model_dimensions(ENTITY::GET_ENTITY_MODEL(iVar0), &uVar4, &Var7);
								if (is_entity_at_coord(iVar0, vLocal_125, Var7.f_1 + 1.5f, Var7.f_1 + 1.5f, 3f, false, true, 0) || is_entity_at_coord(iVar0, get_anim_initial_offset_position(sLocal_361, sLocal_363, vLocal_125, vLocal_128, 0, 2), Var7.f_1 + 1f, Var7.f_1 + 1f, 3f, false, true, 0))
								{
									if (iLocal_90 == 1)
									{
										if (vLocal_128.z > 40f && vLocal_128.z < 220f)
										{
											vLocal_80 = {-148.3897f, -1647.215f, 31.5867f};
											fLocal_79 = 331.9427f;
										}
										else
										{
											vLocal_80 = {-129.5632f, -1622.282f, 31.1122f};
											fLocal_79 = 148.9075f;
										}
									}
									else if (iLocal_90 == 3)
									{
										if (vLocal_128.z > 160f && vLocal_128.z < 340f)
										{
											vLocal_80 = {-319.709f, -837.0066f, 30.449f};
											fLocal_79 = 61.7986f;
										}
										else
										{
											vLocal_80 = {-346.8735f, -833.8024f, 30.4135f};
											fLocal_79 = 269.6216f;
										}
									}
									else if (iLocal_90 == 4)
									{
										if (vLocal_128.z > 240f || vLocal_128.z < 60f)
										{
											vLocal_80 = {37.222f, -1005.04f, 28.4648f};
											fLocal_79 = 156.7986f;
										}
										else
										{
											vLocal_80 = {29.9887f, -1033.184f, 28.3794f};
											fLocal_79 = 344.6216f;
										}
									}
									else
									{
										fLocal_79 = get_entity_heading(iVar0);
										vLocal_80 = {func_82(vLocal_125, get_anim_initial_offset_position(sLocal_361, sLocal_363, vLocal_125, vLocal_128, 0, 2))};
									}
									if (is_vehicle_driveable(iVar0, 0))
									{
										set_entity_coords(iVar0, vLocal_80, 1, false, 0, 1);
										set_entity_heading(iVar0, fLocal_79);
										set_vehicle_on_ground_properly(iVar0);
										set_vehicle_doors_shut(iVar0, 1);
									}
								}
							}
						}
						clear_area_of_objects(vLocal_125, 20f, 2);
						clear_area_of_projectiles(vLocal_125, 20f, 0);
						clear_area(vLocal_125, 2f, 1, 1, 0, false);
						hide_ped_weapon_for_scripted_cutscene(PLAYER::PLAYER_PED_ID(), true);
						iLocal_64 = create_object(iLocal_85, get_entity_coords(PLAYER::PLAYER_PED_ID(), 1), 1, true, false);
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							attach_entity_to_entity(iLocal_64, PLAYER::PLAYER_PED_ID(), get_ped_bone_index(PLAYER::PLAYER_PED_ID(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
						}
						iLocal_131 = create_synchronized_scene(vLocal_125, vLocal_128, 2);
						_0x394B9CD12435C981(iLocal_131, false);
						iLocal_132 = create_cam("DEFAULT_ANIMATED_CAMERA", false);
						play_synchronized_cam_anim(iLocal_132, iLocal_131, sLocal_364, sLocal_361);
						clear_ped_tasks_immediately(PLAYER::PLAYER_PED_ID());
						task_synchronized_scene(PLAYER::PLAYER_PED_ID(), iLocal_131, sLocal_361, sLocal_362, 1000f, -8f, 0, 0, 1000f, 0);
						if (!PED::IS_PED_INJURED(iLocal_62))
						{
							clear_ped_tasks_immediately(iLocal_62);
							task_synchronized_scene(iLocal_62, iLocal_131, sLocal_361, sLocal_363, 1000f, -8f, 0, 0, 1000f, 0);
						}
						set_cam_active(iLocal_132, true);
						render_script_cams(true, false, 3000, 1, 0, 0);
						func_34(&uLocal_194, sLocal_103, sLocal_115, 4, 0, 0, 0);
						settimera(false);
						iLocal_151++;
					}
					hide_hud_and_radar_this_frame();
					break;
				
				case 1:
					if ((is_synchronized_scene_running(iLocal_131) && get_synchronized_scene_phase(iLocal_131) > 0.9f) || func_80(1000))
					{
						set_player_control(player_id(), true, 0);
						set_gameplay_cam_relative_heading(0f);
						set_cam_active(iLocal_132, false);
						destroy_cam(iLocal_132, 0);
						func_79();
						if (!PED::IS_PED_INJURED(iLocal_62))
						{
							clear_ped_tasks_immediately(iLocal_62);
							set_ped_money(iLocal_62, iLocal_192 - iLocal_192 / 10);
							vVar1 = {get_anim_initial_offset_position(sLocal_361, sLocal_363, vLocal_125, vLocal_128, 1f, 2)};
							get_ground_z_for_3d_coord(vVar1, &(vVar1.f_2), 0);
							set_entity_coords(iLocal_62, vVar1, 1, false, 0, 1);
							set_blocking_of_non_temporary_events(iLocal_62, false);
							vVar1 = {get_anim_initial_offset_rotation(sLocal_361, sLocal_363, vLocal_125, vLocal_128, 1f, 2)};
							set_entity_heading(iLocal_62, vVar1.z);
							if (iLocal_90 == 4)
							{
								if (func_78(vVar1.z, 0f, 90f))
								{
									open_sequence_task(&iLocal_121);
									task_follow_nav_mesh_to_coord(false, 38.2412f, -992.2134f, 28.4317f, 1f, 20000, 0.25f, 0, 1193033728);
									task_wander_standard(false, get_entity_heading(iLocal_62), 1);
									close_sequence_task(iLocal_121);
									task_perform_sequence(iLocal_62, iLocal_121);
									clear_sequence_task(&iLocal_121);
								}
								else
								{
									open_sequence_task(&iLocal_121);
									task_follow_nav_mesh_to_coord(false, 58.803f, -1067.711f, 28.4411f, 1f, 20000, 0.25f, 0, 1193033728);
									task_wander_standard(false, get_entity_heading(iLocal_62), 1);
									close_sequence_task(iLocal_121);
									task_perform_sequence(iLocal_62, iLocal_121);
									clear_sequence_task(&iLocal_121);
								}
							}
							else
							{
								open_sequence_task(&iLocal_121);
								task_wander_standard(false, vVar1.z, 1);
								close_sequence_task(iLocal_121);
								task_perform_sequence(iLocal_62, iLocal_121);
								clear_sequence_task(&iLocal_121);
							}
							set_ped_movement_clipset(iLocal_62, sLocal_378, 0.25f);
							force_ped_motion_state(iLocal_62, -668482597, true, 0, 0);
							set_ped_keep_task(iLocal_62, true);
						}
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							clear_ped_tasks_immediately(PLAYER::PLAYER_PED_ID());
							_0x2208438012482A1A(PLAYER::PLAYER_PED_ID(), 0, 0);
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_64))
						{
							delete_object(&iLocal_64);
						}
						if (!PED::IS_PED_INJURED(iLocal_62))
						{
							set_ped_money(iLocal_62, iLocal_192 - iLocal_192 / 10);
							set_ped_can_ragdoll(iLocal_62, 1);
						}
						iVar19 = iLocal_192 / 100;
						iVar19 *= 90;
						wait(false);
						_0xC819F3CBB62BF692(0, 0f, 3, 0);
						func_52(func_106(), 1, iVar19);
						func_51(joaat("rc_wallets_returned"), 1);
						func_182(3);
						func_177();
					}
					else if (has_anim_event_fired(PLAYER::PLAYER_PED_ID(), -3856156))
					{
						if (!PED::IS_PED_INJURED(iLocal_62) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (is_entity_attached_to_entity(iLocal_64, PLAYER::PLAYER_PED_ID()))
							{
								detach_entity(iLocal_64, 0, true);
								if (is_ped_male(iLocal_62))
								{
									attach_entity_to_entity(iLocal_64, iLocal_62, get_ped_bone_index(iLocal_62, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
								}
								else
								{
									attach_entity_to_entity(iLocal_64, iLocal_62, get_ped_bone_index(iLocal_62, 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
								}
								if (!iLocal_61)
								{
									if (func_34(&uLocal_194, sLocal_103, sLocal_109, 4, 0, 0, 0) || func_50())
									{
										iLocal_61 = 1;
									}
								}
							}
						}
					}
					else if (!iLocal_61)
					{
						if (func_34(&uLocal_194, sLocal_103, sLocal_109, 4, 0, 0, 0) || func_50())
						{
							iLocal_61 = 1;
						}
					}
					hide_hud_and_radar_this_frame();
					break;
				}
		}
	}
	else
	{
		func_258();
	}
}

bool func_50()
{
	if (Global_15712 == 4)
	{
		if (is_mobile_phone_call_ongoing())
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

void func_51(int iParam0, int iParam1)
{
	int iVar0;
	
	stat_get_int(iParam0, &iVar0, -1);
	iVar0 += iParam1;
	stat_set_int(iParam0, iVar0, 1);
}

int func_52(auto uParam0, int iParam1, int iParam2)
{
	if (Global_101154.f_32575[uParam0 /*29*/].f_17 == 3)
	{
		return 0;
	}
	if (Global_101154.f_32575[uParam0 /*29*/].f_17 == 4)
	{
		return 0;
	}
	return func_53(Global_101154.f_32575[uParam0 /*29*/].f_17, 0, iParam1, iParam2, 0);
}

bool func_53(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_77();
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
					func_76(99, 1);
					func_51(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_51(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_51(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_61(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_60(5))
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
							func_51(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_51(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_51(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_60(1))
					{
						fVar0 = 0f;
						iVar1 = true;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_51(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_51(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_51(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_51(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_51(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_51(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_51(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_51(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_51(joaat("sp2_money_spent_property"), iParam3);
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
									func_51(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_51(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_51(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_51(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_51(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_51(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_60(0))
							{
								fVar0 = 0f;
								iVar1 = false;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_51(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_51(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_51(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_51(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_51(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_51(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_59(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_76(95, iParam3);
					break;
				
				case 1:
					func_76(97, iParam3);
					break;
				
				case 2:
					func_76(96, iParam3);
					break;
			}
			func_76(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = floor(fVar0 * to_float(iParam3));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_56(iVar1);
		return true;
	}
	else if (fVar0 != 1f)
	{
		func_56(iVar1);
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
					func_51(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_51(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_51(joaat("sp2_total_cash_earned"), iParam3);
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
	func_55(iParam0);
	if (Global_35711 == 15)
	{
		func_54(0);
	}
	return true;
}

void func_54(int iParam0)
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

void func_55(int iParam0)
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

void func_56(int iParam0)
{
	int iVar0;
	char[64] cVar1;
	
	iVar0 = false;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (is_bit_set(Global_101154.f_25089.f_471, iParam0))
		{
			iVar0 = true;
			clear_bit(&(Global_101154.f_25089.f_471), iParam0);
		}
	}
	else if (is_bit_set(Global_101154.f_25089.f_471, iParam0) || is_bit_set(Global_2097152[func_58() /*10375*/].f_7704.f_10, iParam0))
	{
		iVar0 = true;
		clear_bit(&(Global_101154.f_25089.f_471), iParam0);
		clear_bit(&(Global_2097152[func_58() /*10375*/].f_7704.f_10), iParam0);
	}
	if (iVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		_set_notification_text_entry("COUP_RED");
		_add_text_component_item_string(func_57(iParam0));
		_set_notification_message(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_57(int iParam0)
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

int func_58()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_59(int iParam0)
{
	func_76(93, iParam0);
	func_76(29, iParam0);
	func_76(30, iParam0);
}

int func_60(int iParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return is_bit_set(Global_101154.f_25089.f_471, iParam0);
	}
	return is_bit_set(Global_2097152[func_58() /*10375*/].f_7704.f_10, iParam0);
}

bool func_61(int iParam0)
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
		func_75(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return false;
	}
	func_62(27, 1);
	return true;
}

int func_62(int iParam0, int iParam1)
{
	if (iParam0 >= 70)
	{
		return 0;
	}
	return func_63(iParam0, iParam1);
}

bool func_63(int iParam0, int iParam1)
{
	if (func_41(14) && !func_74(iParam0))
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
	if (func_73(&Global_2563627))
	{
		if (func_71(&Global_2563627, iParam0))
		{
			return false;
		}
		if (func_64(&Global_2563627, iParam0))
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

bool func_64(auto uParam0, int iParam1)
{
	int iVar0;
	var[] uVar1 = new var[70];
	
	if (has_achievement_been_passed(iParam1))
	{
		return false;
	}
	if (func_41(14) && !func_74(iParam1))
	{
		return false;
	}
	if (func_71(uParam0, iParam1))
	{
		return false;
	}
	if (func_70(uParam0) < 0f)
	{
		func_69(uParam0, 0);
	}
	func_67(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0 - 1)
	{
		uVar1[iVar0 + 1] = *uParam0[iVar0];
		iVar0++;
	}
	func_65(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		*uParam0[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return true;
}

bool func_65(auto uParam0, int iParam1)
{
	int iVar0;
	
	if (has_achievement_been_passed(iParam1))
	{
		return false;
	}
	if (func_41(14) && !func_74(iParam1))
	{
		return false;
	}
	if (func_71(uParam0, iParam1))
	{
		return false;
	}
	if (func_70(uParam0) < 0f)
	{
		func_69(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_66(uParam0, iVar0))
		{
			*uParam0[iVar0] = iParam1;
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_66(auto uParam0, int iParam1)
{
	return *uParam0[iParam1] == 70;
}

void func_67(auto uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_68(uParam0, iVar0);
		iVar0++;
	}
	func_69(uParam0, Global_2563626 - 0.5f);
}

void func_68(auto uParam0, int iParam1)
{
	*uParam0[iParam1] = 70;
}

void func_69(auto uParam0, float fParam1)
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

auto func_70(auto uParam0)
{
	return *uParam0.f_72;
}

int func_71(auto uParam0, int iParam1)
{
	return func_72(uParam0, iParam1) != -1;
}

int func_72(auto uParam0, int iParam1)
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

int func_73(auto uParam0)
{
	return *uParam0.f_71 == 1;
}

bool func_74(int iParam0)
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

int func_75(int iParam0, int iParam1)
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

void func_76(int iParam0, int iParam1)
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
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
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

void func_77()
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

bool func_78(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	
	fVar1 = fParam1 - fParam2;
	if (fVar1 < 0f)
	{
		fVar1 += 360f;
	}
	fVar0 = fParam1 + fParam2;
	if (fVar0 >= 360f)
	{
		fVar0 -= 360f;
	}
	if (fVar0 > fVar1)
	{
		if (fParam0 < fVar0 && fParam0 > fVar1)
		{
			return true;
		}
	}
	else if (fParam0 < fVar0 || fParam0 > fVar1)
	{
		return true;
	}
	return false;
}

void func_79()
{
	int iVar0;
	
	iVar0 = create_camera_with_params(26379945, get_offset_from_entity_in_world_coords(PLAYER::PLAYER_PED_ID(), 0.5f, -1f, 0.5f), 0f, 0f, get_entity_heading(PLAYER::PLAYER_PED_ID()), 65f, 1, 2);
	set_cam_active(iVar0, true);
}

bool func_80(int iParam0)
{
	if (is_screen_faded_in())
	{
		if (GAMEPLAY::GET_GAME_TIMER() - Global_28 > iParam0)
		{
			Global_27 = GAMEPLAY::GET_GAME_TIMER();
		}
		Global_28 = GAMEPLAY::GET_GAME_TIMER();
		if (GAMEPLAY::GET_GAME_TIMER() - Global_27 > iParam0)
		{
			if (func_81())
			{
				Global_27 = GAMEPLAY::GET_GAME_TIMER();
				return true;
			}
		}
	}
	return false;
}

bool func_81()
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

Vector3 func_82(Vector3 vParam0, Vector3 vParam1)
{
	int iVar0;
	Vector3 vVar1;
	Vector3 vVar4;
	Vector3 vVar7;
	Vector3 vVar10;
	int iVar13;
	int iVar14;
	int iVar15;
	auto uVar16;
	auto uVar19;
	Vector3 vVar22;
	Vector3 vVar25;
	auto uVar28;
	int iVar29;
	
	iVar13 = 0;
	iVar14 = 1;
	iVar0 = get_players_last_vehicle();
	if (!is_entity_a_mission_entity(iVar0))
	{
		set_entity_as_mission_entity(iVar0, true, 0);
	}
	get_model_dimensions(ENTITY::GET_ENTITY_MODEL(iVar0), &vVar7, &vVar10);
	get_nth_closest_vehicle_node(vParam0, 3, &vVar4, 1, 3f, 0f);
	if (vdist(vParam0, -3039.655f, 602.4346f, 6.5719f) <= 25f)
	{
		vVar1 = {-3045.49f, 604.46f, 7.02f};
		iVar13 = 8;
	}
	else if (vdist(vParam0, 288.06f, -1257.1f, 28.44f) <= 25f)
	{
		vVar1 = {278.97f, -1255.06f, 28.88f};
		iVar13 = 8;
	}
	while (iVar13 < 8)
	{
		switch (iVar13)
		{
			case 0:
				if (vdist(vVar4, get_offset_from_entity_in_world_coords(iVar0, 0f, vVar10.y + IntToFloat(iVar14), 0f)) < vdist(vVar4, get_offset_from_entity_in_world_coords(iVar0, 0f, -vVar10.y + IntToFloat(iVar14), 0f)))
				{
					vVar1 = {get_offset_from_entity_in_world_coords(iVar0, 0f, vVar10.y + IntToFloat(iVar14), 0f)};
				}
				else
				{
					vVar1 = {get_offset_from_entity_in_world_coords(iVar0, 0f, -vVar10.y + IntToFloat(iVar14), 0f)};
				}
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (!is_entity_dead(iVar0, 0))
					{
						vVar22 = {func_83(vVar1, 0f, vVar10)};
						vVar25 = {func_83(vVar1, 0f, vVar7)};
						iVar29 = _0x7EE9F5D83DD4F90E(vVar22, vVar25, 511, iVar0, 7);
						iVar13++;
					}
					else
					{
						iVar13 = 8;
					}
				}
				else
				{
					iVar13 = 8;
				}
				break;
			
			case 1:
				if (_get_raycast_result(iVar29, &iVar15, &uVar19, &uVar16, &uVar28) == 2)
				{
					if (iVar15 != 0)
					{
						if (iVar14 >= 3)
						{
							iVar14 = 1;
							iVar13 = 2;
						}
						else
						{
							iVar14++;
							iVar13 = 0;
						}
					}
					else if (get_distance_between_coords(vVar1, vParam0, 1) <= 5f || get_distance_between_coords(vVar1, vParam3, 1) <= 5f)
					{
						if (iVar14 >= 3)
						{
							iVar14 = 1;
							iVar13 = 2;
						}
						else
						{
							iVar14++;
							iVar13 = 0;
						}
					}
					else
					{
						iVar13 = 8;
					}
				}
				break;
			
			case 2:
				if (vdist(vVar4, get_offset_from_entity_in_world_coords(iVar0, 0f, vVar10.y - IntToFloat(iVar14), 0f)) < vdist(vVar4, get_offset_from_entity_in_world_coords(iVar0, 0f, -vVar10.y - IntToFloat(iVar14), 0f)))
				{
					vVar1 = {get_offset_from_entity_in_world_coords(iVar0, 0f, vVar10.y - IntToFloat(iVar14), 0f)};
				}
				else
				{
					vVar1 = {get_offset_from_entity_in_world_coords(iVar0, 0f, -vVar10.y - IntToFloat(iVar14), 0f)};
				}
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (!is_entity_dead(iVar0, 0))
					{
						vVar22 = {func_83(vVar1, 0f, vVar10)};
						vVar25 = {func_83(vVar1, 0f, vVar7)};
						iVar29 = _0x7EE9F5D83DD4F90E(vVar22, vVar25, 511, iVar0, 7);
						iVar13++;
					}
					else
					{
						iVar13 = 8;
					}
				}
				else
				{
					iVar13 = 8;
				}
				break;
			
			case 3:
				if (_get_raycast_result(iVar29, &iVar15, &uVar19, &uVar16, &uVar28) == 2)
				{
					if (iVar15 != 0)
					{
						if (iVar14 >= 3)
						{
							iVar14 = 1;
							iVar13 = 4;
						}
						else
						{
							iVar14++;
							iVar13 = 2;
						}
					}
					else if (get_distance_between_coords(vVar1, vParam0, 1) <= 5f || get_distance_between_coords(vVar1, vParam3, 1) <= 5f)
					{
						if (iVar14 >= 3)
						{
							iVar14 = 1;
							iVar13 = 4;
						}
						else
						{
							iVar14++;
							iVar13 = 2;
						}
					}
					else
					{
						iVar13 = 8;
					}
				}
				break;
			
			case 4:
				if (vdist(vVar4, get_offset_from_entity_in_world_coords(iVar0, vVar10.x + IntToFloat(iVar14), 0f, 0f)) < vdist(vVar4, get_offset_from_entity_in_world_coords(iVar0, -vVar10.x + IntToFloat(iVar14), 0f, 0f)))
				{
					vVar1 = {get_offset_from_entity_in_world_coords(iVar0, vVar10.x + IntToFloat(iVar14), 0f, 0f)};
				}
				else
				{
					vVar1 = {get_offset_from_entity_in_world_coords(iVar0, -vVar10.x + IntToFloat(iVar14), 0f, 0f)};
				}
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (!is_entity_dead(iVar0, 0))
					{
						vVar22 = {func_83(vVar1, 0f, vVar10)};
						vVar25 = {func_83(vVar1, 0f, vVar7)};
						iVar29 = _0x7EE9F5D83DD4F90E(vVar22, vVar25, 511, iVar0, 7);
						iVar13++;
					}
					else
					{
						iVar13 = 8;
					}
				}
				else
				{
					iVar13 = 8;
				}
				break;
			
			case 5:
				if (_get_raycast_result(iVar29, &iVar15, &uVar19, &uVar16, &uVar28) == 2)
				{
					if (iVar15 != 0)
					{
						if (iVar14 >= 3)
						{
							iVar14 = 1;
							iVar13 = 6;
						}
						else
						{
							iVar14++;
							iVar13 = 4;
						}
					}
					else if (get_distance_between_coords(vVar1, vParam0, 1) <= 5f || get_distance_between_coords(vVar1, vParam3, 1) <= 5f)
					{
						if (iVar14 >= 3)
						{
							iVar14 = 1;
							iVar13 = 6;
						}
						else
						{
							iVar14++;
							iVar13 = 4;
						}
					}
					else
					{
						iVar13 = 8;
					}
				}
				break;
			
			case 6:
				if (vdist(vVar4, get_offset_from_entity_in_world_coords(iVar0, vVar10.x - IntToFloat(iVar14), 0f, 0f)) < vdist(vVar4, get_offset_from_entity_in_world_coords(iVar0, -vVar10.x - IntToFloat(iVar14), 0f, 0f)))
				{
					vVar1 = {get_offset_from_entity_in_world_coords(iVar0, vVar10.x - IntToFloat(iVar14), 0f, 0f)};
				}
				else
				{
					vVar1 = {get_offset_from_entity_in_world_coords(iVar0, -vVar10.x - IntToFloat(iVar14), 0f, 0f)};
				}
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (!is_entity_dead(iVar0, 0))
					{
						vVar22 = {func_83(vVar1, 0f, vVar10)};
						vVar25 = {func_83(vVar1, 0f, vVar7)};
						iVar29 = _0x7EE9F5D83DD4F90E(vVar22, vVar25, 511, iVar0, 7);
						iVar13++;
					}
					else
					{
						iVar13 = 8;
					}
				}
				else
				{
					iVar13 = 8;
				}
				break;
			
			case 7:
				if (_get_raycast_result(iVar29, &iVar15, &uVar19, &uVar16, &uVar28) == 2)
				{
					if (iVar15 != 0)
					{
						if (iVar14 >= 3)
						{
							iVar14 = 1;
							iVar13 = 8;
						}
						else
						{
							iVar14++;
							iVar13 = 6;
						}
					}
					else if (get_distance_between_coords(vVar1, vParam0, 1) <= 5f || get_distance_between_coords(vVar1, vParam3, 1) <= 5f)
					{
						if (iVar14 >= 3)
						{
							iVar14 = 1;
							iVar13 = 8;
						}
						else
						{
							iVar14++;
							iVar13 = 6;
						}
					}
					else
					{
						iVar13 = 8;
					}
				}
				break;
			
			case 8:
				break;
		}
		wait(false);
	}
	return vVar1;
}

Vector3 func_83(Vector3 vParam0, float fParam1, struct<2> Param2, auto uParam3)
{
	Vector3 vVar0;
	Vector3 fVar3;
	Vector3 fVar4;
	Vector3 fVar5;
	Vector3 vVar6;
	
	fVar3 = fParam3;
	fVar4 = cos(fVar3);
	fVar5 = sin(fVar3);
	vVar0.x = Param4 * fVar4 + Param4.f_1 * fVar5;
	vVar0.y = Param4.f_1 * fVar4 - Param4 * fVar5;
	vVar6 = {vParam0 + vVar0};
	return vVar6;
}

void func_84(int iParam0, auto uParam1, auto uParam2, char* sParam3, char* sParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	Vector3 fVar4;
	int iVar5;
	int iVar6;
	auto uVar7;
	Vector3 vVar10;
	Vector3 vVar13;
	Vector3 vVar16;
	auto uVar19;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 1;
	*uParam1 = {get_entity_coords(PLAYER::PLAYER_PED_ID(), 0)};
	*uParam2.f_2 = func_86(iParam0, PLAYER::PLAYER_PED_ID(), 1);
	fVar3 = func_86(iParam0, PLAYER::PLAYER_PED_ID(), 1);
	fVar4 = func_86(iParam0, PLAYER::PLAYER_PED_ID(), 1);
	vVar16 = {get_entity_coords(iParam0, 0) - get_entity_coords(PLAYER::PLAYER_PED_ID(), 0)};
	if (has_anim_dict_loaded(sParam3))
	{
		vVar13 = {get_anim_initial_offset_position(sParam3, sParam4, *uParam1, *uParam2, 0, 2)};
	}
	else
	{
		vVar13 = {*uParam1 + Vector(0f, 5f, 5f)};
	}
	while (iVar0 < 2)
	{
		switch (iVar0)
		{
			case 0:
				if (iVar1 > 20)
				{
					*uParam2.f_2 = func_85(get_entity_coords(iParam0, 0), *uParam1, 1);
					*uParam1 = {_get_object_offset_from_coords(get_entity_coords(iParam0, 0), *uParam2.f_2, vVar16)};
					iVar0 = 2;
				}
				else
				{
					iVar5 = _cast_3d_ray_point_to_point(*uParam1, vVar13 + Vector(-1f, 0f, 0f), 0.5f, 17, false, 4);
					iVar0++;
				}
				break;
			
			case 1:
				if (_get_raycast_result(iVar5, &iVar6, &vVar10, &uVar7, &uVar19) == 2)
				{
					if (iVar6 != 0)
					{
						if (vVar10.z > *uParam1.f_2 + 8.5f)
						{
							iVar0++;
						}
						else
						{
							if (iVar1 <= 3)
							{
								fVar4 += 7.5f;
							}
							else
							{
								fVar4 = fVar3 - 7.5f * IntToFloat(iVar2);
								iVar2++;
							}
							*uParam1 = {_get_object_offset_from_coords(get_entity_coords(PLAYER::PLAYER_PED_ID(), 0), fVar4, vVar16)};
							iVar1++;
							iVar0 = 0;
						}
					}
					else
					{
						if (iVar1 > 0)
						{
							*uParam2.f_2 = func_85(vVar13 + Vector(-0.75f, 0f, 0f), *uParam1, 1);
						}
						iVar0++;
					}
				}
				break;
			
			case 2:
				break;
		}
		wait(false);
	}
}

float func_85(struct<2> Param0, Vector3 fParam1, struct<2> Param2, auto uParam3, int iParam4)
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

float func_86(int iParam0, int iParam1, int iParam2)
{
	Vector3 vVar0;
	Vector3 vVar3;
	
	vVar0 = {get_entity_coords(iParam0, 0)};
	vVar3 = {get_entity_coords(iParam1, 0)};
	return func_85(vVar0, vVar3, iParam2);
}

void func_87(Vector3 vParam0, auto uParam1, float fParam2)
{
	int iVar0;
	Vector3 vVar1;
	float fVar4;
	
	iVar0 = false;
	if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
	{
		vVar1 = {get_entity_coords(PLAYER::PLAYER_PED_ID(), 1) - vParam0};
		fVar4 = get_heading_from_vector_2d(vVar1.x, vVar1.y);
		if (func_88(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0), fVar4, 15f))
		{
			iVar0 = true;
		}
		vVar1 = {vParam0 - get_entity_coords(PLAYER::PLAYER_PED_ID(), 1)};
		fVar4 = get_heading_from_vector_2d(vVar1.x, vVar1.y);
		if (func_88(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0), fVar4, 15f))
		{
			iVar0 = true;
		}
	}
	if (iVar0)
	{
		if (get_entity_speed(PLAYER::PLAYER_PED_ID()) > 30f)
		{
			*uParam3 = 6f * 4f;
		}
		else if (get_entity_speed(PLAYER::PLAYER_PED_ID()) > 20f)
		{
			*uParam3 = 6f * 3f;
		}
		else if (get_entity_speed(PLAYER::PLAYER_PED_ID()) > 10f)
		{
			*uParam3 = 6f * 2f;
		}
		else
		{
			*uParam3 = 6f;
		}
		*fParam4 = *uParam3 / 1.33f - 1f;
	}
	else
	{
		*uParam3 = 6f;
		*fParam4 = *uParam3 / 1.33f - 1f;
	}
}

bool func_88(int iParam0, float fParam1, float fParam2)
{
	Vector3 fVar0;
	float fVar1;
	float fVar2;
	
	if (is_vehicle_driveable(iParam0, 0))
	{
		fVar0 = get_entity_heading(iParam0);
		fVar2 = fParam1 - fParam2;
		if (fVar2 < 0f)
		{
			fVar2 += 360f;
		}
		fVar1 = fParam1 + fParam2;
		if (fVar1 >= 360f)
		{
			fVar1 -= 360f;
		}
		if (fVar1 > fVar2)
		{
			if (fVar0 < fVar1 && fVar0 > fVar2)
			{
				return true;
			}
		}
		else if (fVar0 < fVar1 || fVar0 > fVar2)
		{
			return true;
		}
	}
	return false;
}

void func_89()
{
	Global_14578 = 0;
	func_90();
}

void func_90()
{
	restart_scripted_conversation();
	Global_16723 = 0;
	if (is_scripted_conversation_ongoing())
	{
		stop_scripted_conversation(false);
		Global_15712 = 6;
	}
}

bool func_91(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, int iParam5, int iParam6)
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
	if (GAMEPLAY::GET_GAME_TIMER() - Global_29 > 500)
	{
		_task_bring_vehicle_to_halt(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = GAMEPLAY::GET_GAME_TIMER();
	if (!is_entity_dead(iParam0, 0))
	{
		if (absf(get_entity_speed(iParam0)) <= fParam3)
		{
			return true;
		}
	}
	return false;
}

void func_92(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam0)
	{
		special_ability_deactivate_fast(player_id());
		set_all_random_peds_flee(player_id(), 1);
		set_police_ignore_player(player_id(), 1);
		func_100(1);
		_0xA8FDB297A8D25FBA();
		_0xFDB423997FA30340();
		if (Global_14413.f_1 > 3)
		{
			if (is_mobile_phone_call_ongoing())
			{
				stop_scripted_conversation(false);
			}
			if (!func_38())
			{
				Global_14413.f_1 = 3;
			}
			Global_15712 = 5;
		}
		func_99(1, iParam3, iParam2, 0);
		Global_55755 = 1;
		Global_68061 = 1;
		Global_69487 = 1;
	}
	else
	{
		func_100(0);
		_0xE1CD1E48E025E661();
		Global_55755 = 0;
		if (iParam1)
		{
			_0x03FC694AE06C5A20();
		}
		set_all_random_peds_flee(player_id(), 0);
		set_police_ignore_player(player_id(), 0);
		func_99(0, iParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_97(player_id())) && !func_94(player_id(), 0)) && !func_93())
			{
				set_entity_invincible(PLAYER::PLAYER_PED_ID(), false);
			}
		}
		else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_97(player_id()))
		{
			set_entity_invincible(PLAYER::PLAYER_PED_ID(), false);
		}
		Global_69487 = 0;
	}
}

int func_93()
{
	return is_bit_set(Global_1587523[player_id() /*444*/].f_39.f_18, 14);
}

int func_94(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == player_id())
	{
		iVar0 = func_95(-1, 0) == 8;
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

int func_95(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_96();
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

auto func_96()
{
	return Global_1312747;
}

bool func_97(int iParam0)
{
	if (func_94(iParam0, 0))
	{
		return true;
	}
	if (func_98())
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

int func_98()
{
	return is_bit_set(Global_2359301, 3);
}

int func_99(int iParam0, int iParam1, auto uParam2, int iParam3)
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

void func_100(int iParam0)
{
	if (iParam0 == 1)
	{
		GAMEPLAY::GAMEPLAY::SET_BIT(&Global_2283, 13);
	}
	else
	{
		clear_bit(&Global_2283, 13);
	}
}

bool func_101()
{
	if (!is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (func_145())
		{
			return true;
		}
	}
	return false;
}

bool func_102(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (is_minigame_in_progress())
	{
		return false;
	}
	if (iParam0)
	{
		if (is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
		{
			return false;
		}
	}
	iVar0 = false;
	if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!is_ped_sitting_in_any_vehicle(PLAYER::PLAYER_PED_ID()))
		{
			return false;
		}
		iVar0 = get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0);
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
				if (get_ped_in_vehicle_seat(iVar0, -1) != PLAYER::PLAYER_PED_ID())
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

int func_103(int iParam0)
{
	return func_28(func_104(iParam0));
}

char* func_104(int iParam0)
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "AM_H_REFS";
			break;
		
		case 1:
			sVar0 = "RE_FLASHBLIP";
			break;
		
		case 2:
			sVar0 = "RE_HANDOVER";
			break;
	}
	return sVar0;
}

int func_105(int iParam0)
{
	auto uVar0;
	
	switch (iParam0)
	{
		case 0:
			stat_get_int(joaat("sp0_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 1:
			stat_get_int(joaat("sp1_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 2:
			stat_get_int(joaat("sp2_total_cash"), &uVar0, -1);
			return uVar0;
		
		default:
	}
	return 0;
}

auto func_106()
{
	func_107();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_107()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_110(Global_101154.f_1826.f_539.f_3549) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_109(PLAYER::PLAYER_PED_ID());
			if (func_108(iVar0) && (!func_41(14) || Global_100106))
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
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
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

void func_111()
{
	if (!PED::IS_PED_INJURED(iLocal_62))
	{
		task_smart_flee_ped(iLocal_62, PLAYER::PLAYER_PED_ID(), 150f, -1, 0, 0);
		set_ped_keep_task(iLocal_62, true);
		wait(false);
	}
}

bool func_112()
{
	Vector3 vVar0;
	Vector3 vVar3;
	
	vVar0 = {3f, 3f, 3f};
	vVar3 = {-3f, -3f, -3f};
	if (PED::IS_PED_INJURED(iLocal_62))
	{
		return true;
	}
	else
	{
		if (has_entity_been_damaged_by_entity(iLocal_62, PLAYER::PLAYER_PED_ID(), 1))
		{
			return true;
		}
		if (is_bullet_in_area(get_ped_bone_coords(iLocal_62, 31086, 0f, 0f, 0f), 5f, 1))
		{
			return true;
		}
		vVar0 = {vVar0 + get_ped_bone_coords(iLocal_62, 31086, 0f, 0f, 0f)};
		vVar3 = {vVar3 + get_ped_bone_coords(iLocal_62, 31086, 0f, 0f, 0f)};
		if ((is_projectile_type_in_area(vVar3, vVar0, joaat("weapon_smokegrenade"), 1) || is_projectile_type_in_area(vVar3, vVar0, joaat("weapon_grenade"), 1)) || is_projectile_type_in_area(vVar3, vVar0, joaat("weapon_stickybomb"), 1))
		{
			return true;
		}
		if (_0x2F09F7976C512404(get_ped_bone_coords(iLocal_62, 31086, 0f, 0f, 0f), 3f))
		{
			return true;
		}
	}
	return false;
}

void func_113()
{
	if (!is_entity_dead(iLocal_62, 0))
	{
		if (vdist(get_entity_coords(PLAYER::PLAYER_PED_ID(), 1), get_entity_coords(iLocal_62, 1)) > fLocal_165 + 50f)
		{
			func_177();
		}
		else if (func_105(func_106()) < iLocal_192)
		{
			func_177();
		}
	}
}

void func_114()
{
	if (!PED::IS_PED_INJURED(iLocal_62))
	{
		if (is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_62, Global_19, 0, 1, 0))
		{
			task_look_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_62, 3000, 0, 2);
			task_look_at_entity(iLocal_62, PLAYER::PLAYER_PED_ID(), 3000, 0, 2);
		}
	}
}

void func_115()
{
	Vector3 fVar0;
	
	if (iLocal_90 == 1)
	{
		fVar0 = 13f;
	}
	if (iLocal_90 == 4)
	{
		fVar0 = 5.75f;
	}
	if (iLocal_90 == 1 || iLocal_90 == 4)
	{
		if (is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), vLocal_166, vLocal_169, fVar0, 0, true, 0))
		{
			if (!iLocal_157)
			{
				if (!PED::IS_PED_INJURED(iLocal_62))
				{
					task_turn_ped_to_face_entity(iLocal_62, PLAYER::PLAYER_PED_ID(), false);
					iLocal_157 = 1;
					iLocal_158 = 0;
				}
			}
		}
		if (is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), vLocal_172, vLocal_175, fVar0, 0, true, 0))
		{
			if (!iLocal_158)
			{
				if (!PED::IS_PED_INJURED(iLocal_62))
				{
					task_turn_ped_to_face_entity(iLocal_62, PLAYER::PLAYER_PED_ID(), false);
					iLocal_158 = 1;
					iLocal_157 = 0;
				}
			}
		}
		if (is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), vLocal_178, vLocal_181, fVar0, 0, true, 0))
		{
			if (!iLocal_159)
			{
				if (!PED::IS_PED_INJURED(iLocal_62))
				{
					iLocal_159 = 1;
				}
			}
		}
	}
	if (!iLocal_160)
	{
		if (!PED::IS_PED_INJURED(iLocal_62))
		{
			if (is_entity_at_entity(iLocal_62, PLAYER::PLAYER_PED_ID(), 25f, 25f, 5f, 0, 1, 0) && has_entity_clear_los_to_entity(iLocal_62, PLAYER::PLAYER_PED_ID(), 17))
			{
				if (func_34(&uLocal_194, sLocal_103, sLocal_108, 4, 0, 0, 0) || func_50())
				{
					if (!is_entity_playing_anim(iLocal_62, sLocal_359, "flee_forward_outro_shopkeeper", 3))
					{
						open_sequence_task(&iLocal_121);
						task_turn_ped_to_face_entity(false, PLAYER::PLAYER_PED_ID(), false);
						if (iLocal_47 == 2)
						{
							task_play_anim(false, sLocal_377, "RETURNING_FRONT_A", 8f, -4f, -1, 0, 0, 0, 0, 0);
						}
						close_sequence_task(iLocal_121);
						task_perform_sequence(iLocal_62, iLocal_121);
						clear_sequence_task(&iLocal_121);
						iLocal_160 = 1;
					}
				}
			}
		}
	}
}

void func_116(int iParam0, auto uParam1)
{
	float fVar0;
	
	fVar0 = 65f;
	switch (*uParam1)
	{
		case 0:
			if (!PED::IS_PED_INJURED(iParam0))
			{
				open_sequence_task(&iLocal_121);
				task_look_at_entity(false, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				task_turn_ped_to_face_entity(false, PLAYER::PLAYER_PED_ID(), false);
				close_sequence_task(iLocal_121);
				task_perform_sequence(iParam0, iLocal_121);
				clear_sequence_task(&iLocal_121);
				settimera(false);
				*uParam1++;
			}
			break;
		
		case 1:
			if (!PED::IS_PED_INJURED(iParam0))
			{
				if (is_ped_facing_ped(iParam0, PLAYER::PLAYER_PED_ID(), fVar0))
				{
					*uParam1++;
				}
			}
			break;
		
		case 2:
			if (!PED::IS_PED_INJURED(iParam0))
			{
				if (!is_ped_facing_ped(iParam0, PLAYER::PLAYER_PED_ID(), fVar0))
				{
					*uParam1 = 0;
				}
			}
			break;
	}
}

void func_117()
{
	if (has_pickup_been_collected(iLocal_191))
	{
		if (!is_entity_dead(iLocal_62, 0))
		{
			fLocal_165 = vdist(get_entity_coords(PLAYER::PLAYER_PED_ID(), 1), get_entity_coords(iLocal_62, 1));
		}
		func_51(joaat("rc_wallets_recovered"), 1);
		set_pad_shake(0, 200, 250);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_64))
		{
			delete_object(&iLocal_64);
		}
		func_120();
		func_119(&uLocal_392);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_62))
		{
			if (!PED::IS_PED_INJURED(iLocal_62))
			{
				set_ped_can_ragdoll_from_player_impact(iLocal_62, 0);
			}
		}
		func_125(0);
		remove_pickup(iLocal_191);
		if (!iLocal_56)
		{
			iLocal_48 = 5;
			func_118(2);
		}
		else
		{
			iLocal_48 = 12;
		}
	}
}

void func_118(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_101154.f_29520.f_2 < 3)
			{
				if (!is_help_message_on_screen())
				{
					func_12(func_104(iParam0), -1);
					Global_101154.f_29520.f_2++;
					GAMEPLAY::GAMEPLAY::SET_BIT(&Global_101150, false);
				}
			}
			break;
		
		case 1:
			if (!is_bit_set(Global_101150, true))
			{
				if (!is_help_message_on_screen())
				{
					func_12(func_104(iParam0), -1);
					Global_101154.f_29520.f_3++;
					GAMEPLAY::GAMEPLAY::SET_BIT(&Global_101150, true);
				}
			}
			break;
		
		case 2:
			if (!is_bit_set(Global_101150, 2))
			{
				if (!is_help_message_on_screen())
				{
					func_12(func_104(iParam0), -1);
					Global_101154.f_29520.f_4++;
					GAMEPLAY::GAMEPLAY::SET_BIT(&Global_101150, 2);
				}
			}
			break;
	}
}

void func_119(auto uParam0)
{
	*uParam0 = -99;
}

void func_120()
{
	iLocal_67 = 0;
	if (!does_blip_exist(iLocal_65))
	{
		if (!is_entity_dead(iLocal_62, 0))
		{
			iLocal_65 = func_121(iLocal_62, 0, 0);
		}
	}
}

int func_121(int iParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	return func_122(iParam0, iParam1, 145);
}

int func_122(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_123(iParam0, !iParam1, 0);
	if ((iParam2 != 145 && does_blip_exist(iVar0)) && does_text_label_exist(&(Global_101154.f_32575[iParam2 /*29*/].f_3)))
	{
		set_blip_name_from_text_file(iVar0, &(Global_101154.f_32575[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_123(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = add_blip_for_entity(iParam0);
	if (is_entity_a_vehicle(iParam0))
	{
		set_blip_scale(iVar0, func_124(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
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
		set_blip_scale(iVar0, func_124(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		set_blip_as_friendly(iVar0, iParam1);
	}
	else if (is_entity_an_object(iParam0))
	{
		set_blip_scale(iVar0, func_124(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_124(int iParam0, float fParam1, float fParam2)
{
	if (iParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_125(int iParam0)
{
	if (!PED::IS_PED_INJURED(iLocal_62) && iLocal_90 == 4)
	{
		if (is_entity_playing_anim(iLocal_62, sLocal_359, "flee_forward_loop_shopkeeper", 3))
		{
			open_sequence_task(&iLocal_121);
			task_play_anim(false, sLocal_359, "flee_forward_outro_shopkeeper", 8f, -4f, -1, 8, 0, 0, 0, 0);
			task_look_at_entity(false, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
			if (iParam0)
			{
				task_play_anim(false, sLocal_359, "agitated_loop_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
				task_play_anim(false, sLocal_359, "agitated_loop_a", 8f, -4f, -1, 0, 0, 0, 0, 0);
				task_play_anim(false, sLocal_359, "agitated_loop_b", 8f, -4f, -1, 0, 0, 0, 0, 0);
				task_play_anim(false, sLocal_359, "agitated_loop_c", 8f, -4f, -1, 1, 0, 0, 0, 0);
			}
			close_sequence_task(iLocal_121);
			clear_ped_tasks(iLocal_62);
			task_perform_sequence(iLocal_62, iLocal_121);
			clear_sequence_task(&iLocal_121);
		}
	}
}

bool func_126()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_64))
	{
		if (is_entity_attached(iLocal_64))
		{
			if (!PED::IS_PED_INJURED(iLocal_62))
			{
				if (is_entity_attached_to_entity(iLocal_64, iLocal_62))
				{
					if (is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_62, 18f, 18f, 18f, 0, 1, 0))
					{
						if (is_ped_shooting(PLAYER::PLAYER_PED_ID()))
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

void func_127(int iParam0, auto uParam1)
{
	if (does_blip_exist(iParam0))
	{
		if (GAMEPLAY::GET_GAME_TIMER() > *uParam1 + 500)
		{
			if (get_blip_colour(iParam0) == 1)
			{
				set_blip_as_friendly(iParam0, true);
			}
			else
			{
				set_blip_as_friendly(iParam0, false);
				set_blip_colour(iParam0, 1);
			}
			*uParam1 = GAMEPLAY::GET_GAME_TIMER();
		}
		if (!is_help_message_being_displayed() && func_128(0))
		{
			func_118(1);
		}
	}
}

int func_128(int iParam0)
{
	return is_bit_set(Global_101150, iParam0);
}

void func_129()
{
	if (!PED::IS_PED_INJURED(iLocal_62))
	{
		if (is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_62, 8f, 8f, 18f, 0, 1, 0) || is_entity_on_screen(iLocal_62))
		{
			clear_prints();
		}
	}
}

void func_130()
{
	if (does_blip_exist(iLocal_66))
	{
		remove_blip(&iLocal_66);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_64))
	{
		if (is_entity_attached(iLocal_64))
		{
			detach_entity(iLocal_64, 1, true);
			delete_object(&iLocal_64);
			func_32();
		}
	}
	else
	{
		func_32();
	}
	if (!PED::IS_PED_INJURED(iLocal_63))
	{
		if (func_34(&uLocal_194, sLocal_103, sLocal_107, 4, 0, 0, 0) || func_50())
		{
			if (iLocal_47 == 2)
			{
				set_ped_flee_attributes(iLocal_63, 128, true);
				set_ped_flee_attributes(iLocal_63, 2, true);
				set_ped_flee_attributes(iLocal_63, 1, false);
				task_smart_flee_ped(iLocal_63, PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
			}
			set_ped_keep_task(iLocal_63, true);
		}
	}
}

bool func_131()
{
	if (!is_entity_dead(iLocal_63, 0))
	{
		if (has_entity_been_damaged_by_entity(iLocal_63, PLAYER::PLAYER_PED_ID(), 1))
		{
			if (iLocal_149)
			{
				return true;
			}
		}
	}
	else if (iLocal_149)
	{
		return true;
	}
	return false;
}

void func_132()
{
	if (!PED::IS_PED_INJURED(iLocal_62))
	{
		clear_ped_tasks(iLocal_62);
		task_smart_flee_ped(iLocal_62, PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
		set_ped_keep_task(iLocal_62, true);
		wait(false);
		set_ped_as_no_longer_needed(&iLocal_62);
	}
	if (!PED::IS_PED_INJURED(iLocal_63))
	{
		func_34(&uLocal_194, sLocal_103, sLocal_112, 4, 0, 0, 0);
		open_sequence_task(&iLocal_121);
		task_clear_look_at(false);
		task_combat_ped(false, PLAYER::PLAYER_PED_ID(), 0, 16);
		close_sequence_task(iLocal_121);
		task_perform_sequence(iLocal_63, iLocal_121);
		clear_sequence_task(&iLocal_121);
		set_ped_keep_task(iLocal_63, true);
		wait(false);
		set_entity_load_collision_flag(iLocal_63, false);
		set_ped_as_no_longer_needed(&iLocal_63);
	}
}

bool func_133()
{
	if (!PED::IS_PED_INJURED(iLocal_62))
	{
		if (is_ped_ragdoll(iLocal_62))
		{
			return true;
		}
	}
	return false;
}

int func_134(int iParam0)
{
	return func_135(iParam0);
}

int func_135(int iParam0)
{
	int iVar0;
	
	if (!does_pickup_exist(iParam0))
	{
		return 0;
	}
	iVar0 = add_blip_for_pickup(iParam0);
	set_blip_scale(iVar0, func_124(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	return iVar0;
}

bool func_136()
{
	if (does_pickup_exist(iLocal_191))
	{
		if (does_pickup_object_exist(iLocal_191))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_63))
			{
				if (!is_entity_dead(iLocal_63, 0))
				{
					if (is_ped_shooting(PLAYER::PLAYER_PED_ID()))
					{
						if (is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_63, 18f, 18f, 18f, 0, 1, 0) || has_entity_been_damaged_by_entity(iLocal_63, PLAYER::PLAYER_PED_ID(), 1))
						{
							settimerb(false);
							iLocal_143 = 1;
							return true;
						}
					}
				}
				if (func_137())
				{
					settimerb(false);
					iLocal_143 = 2;
					return true;
				}
				if (PED::IS_PED_INJURED(iLocal_63))
				{
					if (has_entity_been_damaged_by_entity(iLocal_63, PLAYER::PLAYER_PED_ID(), 1))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_62))
						{
							if (!PED::IS_PED_INJURED(iLocal_62))
							{
								clear_ped_tasks(iLocal_62);
								set_ped_can_ragdoll_from_player_impact(iLocal_62, 0);
							}
						}
						settimerb(false);
						iLocal_143 = 2;
						return true;
					}
				}
				else if (has_entity_been_damaged_by_entity(iLocal_63, PLAYER::PLAYER_PED_ID(), 1))
				{
					settimerb(false);
					iLocal_143 = 2;
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_62))
					{
						if (!PED::IS_PED_INJURED(iLocal_62))
						{
							clear_ped_tasks(iLocal_62);
							set_ped_can_ragdoll_from_player_impact(iLocal_62, 0);
						}
					}
					if (!PED::IS_PED_INJURED(iLocal_63))
					{
						clear_ped_tasks(iLocal_63);
						task_smart_flee_ped(iLocal_63, PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
						set_ped_keep_task(iLocal_63, true);
						set_entity_load_collision_flag(iLocal_63, false);
						set_ped_as_no_longer_needed(&iLocal_63);
					}
					return true;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_62))
			{
				if (!is_entity_dead(iLocal_62, 0))
				{
					if (is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_62, 5.3f, 5.3f, 6f, 0, 1, 0))
					{
						if (is_ped_armed(PLAYER::PLAYER_PED_ID(), 6))
						{
							if (is_player_free_aiming_at_entity(player_id(), iLocal_62) || is_player_targetting_entity(player_id(), iLocal_62))
							{
								settimerb(false);
								iLocal_143 = 3;
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

bool func_137()
{
	if (!PED::IS_PED_INJURED(iLocal_63))
	{
		if (_0x6CD5A433374D4CFB(iLocal_63, PLAYER::PLAYER_PED_ID()) && is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_63, 20f, 20f, 20f, 0, 1, 0))
		{
			if (is_ped_armed(PLAYER::PLAYER_PED_ID(), 6))
			{
				if (is_player_free_aiming_at_entity(player_id(), iLocal_63) || is_player_targetting_entity(player_id(), iLocal_63))
				{
					return true;
				}
			}
		}
		if (is_ped_performing_stealth_kill(PLAYER::PLAYER_PED_ID()))
		{
			return true;
		}
		if (is_ped_ragdoll(iLocal_63))
		{
			return true;
		}
	}
	return false;
}

void func_138()
{
	if (iLocal_58)
	{
		if (!iLocal_59)
		{
			if (!PED::IS_PED_INJURED(iLocal_63))
			{
				if (is_ped_armed(iLocal_63, 4))
				{
					if ((func_34(&uLocal_194, sLocal_103, sLocal_112, 4, 0, 0, 0) || func_50()) || func_50())
					{
						iLocal_59 = 1;
					}
				}
				else if ((func_34(&uLocal_194, sLocal_103, sLocal_107, 4, 0, 0, 0) || func_50()) || func_50())
				{
					iLocal_59 = 1;
				}
			}
		}
	}
	else if (func_137())
	{
		if ((func_34(&uLocal_194, sLocal_103, sLocal_116, 4, 0, 0, 0) || func_50()) || func_50())
		{
			if (is_ped_armed(iLocal_63, 4))
			{
				task_combat_ped(iLocal_63, PLAYER::PLAYER_PED_ID(), 0, 16);
			}
			else
			{
				func_130();
			}
			iLocal_58 = 1;
		}
	}
}

bool func_139()
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(iLocal_62))
	{
		if (is_ped_armed(PLAYER::PLAYER_PED_ID(), 7))
		{
			if (is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_62, 20f, 20f, 20f, 0, 1, 0))
			{
				if (is_player_free_aiming_at_entity(player_id(), iLocal_62) || is_player_targetting_entity(player_id(), iLocal_62))
				{
					return true;
				}
			}
		}
		if (get_current_ped_weapon(PLAYER::PLAYER_PED_ID(), &iVar0, 1))
		{
			if (iVar0 == joaat("weapon_stungun"))
			{
				if (has_entity_been_damaged_by_weapon(iLocal_62, joaat("weapon_stungun"), 0))
				{
					return true;
				}
			}
		}
		if (has_entity_been_damaged_by_entity(iLocal_62, PLAYER::PLAYER_PED_ID(), 1))
		{
			return true;
		}
	}
	else
	{
		return true;
	}
	if (is_bullet_in_area(get_ped_bone_coords(iLocal_62, 31086, 0f, 0f, 0f), 3f, 1))
	{
		return true;
	}
	return false;
}

void func_140()
{
	if (iLocal_47 == 2)
	{
	}
	if (!func_145())
	{
		if (timera() > 10000)
		{
			if (!PED::IS_PED_INJURED(iLocal_62))
			{
				if (!is_any_speech_playing(iLocal_62))
				{
					func_141(iLocal_62, "GENERIC_CURSE_MED", 24);
					settimera(false);
				}
			}
		}
	}
	if (!iLocal_60)
	{
		if (func_30(PLAYER::PLAYER_PED_ID(), iLocal_63, 1) > 200f)
		{
			if (!is_entity_on_screen(iLocal_63) || is_entity_occluded(iLocal_63))
			{
				iLocal_48 = 8;
			}
		}
	}
}

void func_141(int iParam0, char* sParam1, int iParam2)
{
	_play_ambient_speech1(iParam0, sParam1, func_142(iParam2), 1);
}

int func_142(int iParam0)
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

void func_143()
{
	if (!PED::IS_PED_INJURED(iLocal_62))
	{
		if (!iLocal_53)
		{
			if (is_entity_playing_anim(iLocal_62, sLocal_359, "flee_backward_loop_shopkeeper", 3))
			{
				open_sequence_task(&iLocal_121);
				task_play_anim(false, sLocal_359, "flee_backward_outro_shopkeeper", 8f, -4f, -1, 8, 0, 0, 0, 0);
				task_look_at_entity(false, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				task_play_anim(false, sLocal_359, "agitated_loop_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
				task_play_anim(false, sLocal_359, "agitated_loop_a", 8f, -4f, -1, 0, 0, 0, 0, 0);
				task_play_anim(false, sLocal_359, "agitated_loop_b", 8f, -4f, -1, 0, 0, 0, 0, 0);
				task_play_anim(false, sLocal_359, "agitated_loop_c", 8f, -4f, -1, 1, 0, 0, 0, 0);
				close_sequence_task(iLocal_121);
				task_perform_sequence(iLocal_62, iLocal_121);
				clear_sequence_task(&iLocal_121);
				iLocal_164 = 3;
				iLocal_53 = true;
			}
			else if (is_entity_playing_anim(iLocal_62, sLocal_359, "flee_forward_loop_shopkeeper", 3))
			{
				open_sequence_task(&iLocal_121);
				task_play_anim(false, sLocal_359, "flee_forward_outro_shopkeeper", 8f, -4f, -1, 8, 0, 0, 0, 0);
				task_look_at_entity(false, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				task_play_anim(false, sLocal_359, "agitated_loop_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
				task_play_anim(false, sLocal_359, "agitated_loop_a", 8f, -4f, -1, 0, 0, 0, 0, 0);
				task_play_anim(false, sLocal_359, "agitated_loop_b", 8f, -4f, -1, 0, 0, 0, 0, 0);
				task_play_anim(false, sLocal_359, "agitated_loop_c", 8f, -4f, -1, 1, 0, 0, 0, 0);
				close_sequence_task(iLocal_121);
				task_perform_sequence(iLocal_62, iLocal_121);
				clear_sequence_task(&iLocal_121);
				iLocal_164 = 3;
				iLocal_53 = true;
			}
			else
			{
				iLocal_53 = true;
			}
		}
		if (iLocal_53)
		{
			if (!iLocal_136)
			{
				if (is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_62, 7f, 7f, 7f, 0, 1, 0))
				{
					if (get_script_task_status(iLocal_62, 242628503) == 1)
					{
						if (get_sequence_progress(iLocal_62) == iLocal_164)
						{
							task_look_at_entity(iLocal_62, PLAYER::PLAYER_PED_ID(), 9000, 0, 2);
							func_34(&uLocal_194, sLocal_103, sLocal_106, 4, 0, 0, 0);
							iLocal_155 = true;
							iLocal_136 = 1;
						}
					}
					else
					{
						stop_ped_speaking(iLocal_62, 1);
						func_34(&uLocal_194, sLocal_103, sLocal_106, 4, 0, 0, 0);
						open_sequence_task(&iLocal_121);
						task_look_at_entity(false, PLAYER::PLAYER_PED_ID(), 7000, 0, 2);
						task_turn_ped_to_face_entity(false, PLAYER::PLAYER_PED_ID(), 7000);
						close_sequence_task(iLocal_121);
						task_perform_sequence(iLocal_62, iLocal_121);
						clear_sequence_task(&iLocal_121);
						settimera(false);
						iLocal_155 = true;
						iLocal_136 = 1;
					}
				}
			}
		}
	}
}

bool func_144()
{
	if (!PED::IS_PED_INJURED(iLocal_62))
	{
		if (is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_62, 12f, 12f, 5f, 0, 1, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_145()
{
	if (Global_15712 != 0 || is_scripted_conversation_ongoing())
	{
		return true;
	}
	return false;
}

void func_146()
{
	if (!PED::IS_PED_INJURED(iLocal_62))
	{
		if (!iLocal_134)
		{
			iLocal_138 = GAMEPLAY::GET_GAME_TIMER();
			iLocal_134 = true;
		}
		if (iLocal_134)
		{
			iLocal_139 = GAMEPLAY::GET_GAME_TIMER();
			if (!iLocal_54)
			{
				if (iLocal_139 - iLocal_138 > 500)
				{
					if (!func_145())
					{
						if (func_34(&uLocal_194, sLocal_103, sLocal_105, 4, 0, 0, 0) || func_50())
						{
							if (iLocal_47 == 2)
							{
								if (!PED::IS_PED_INJURED(iLocal_62))
								{
									if (!PED::IS_PED_INJURED(iLocal_63))
									{
									}
								}
							}
							if (iLocal_47 == 1)
							{
								if (!PED::IS_PED_INJURED(iLocal_62))
								{
								}
							}
							if (does_blip_exist(iLocal_65))
							{
								remove_blip(&iLocal_65);
							}
							iLocal_54 = 1;
						}
					}
				}
			}
		}
	}
}

void func_147()
{
	float fVar0;
	
	if (!iLocal_55)
	{
		if (iLocal_90 == 1)
		{
			fVar0 = 1f;
		}
		if (iLocal_90 == 2)
		{
			fVar0 = 4f;
		}
		if (iLocal_90 != 2)
		{
			if (!PED::IS_PED_INJURED(iLocal_62) && !PED::IS_PED_INJURED(iLocal_63))
			{
				if (!func_174())
				{
					if (func_161())
					{
						func_258();
					}
				}
				if (func_160())
				{
					if (!does_blip_exist(iLocal_68))
					{
						if (!is_entity_dead(iLocal_63, 0))
						{
							iLocal_68 = func_121(iLocal_63, 1, 0);
						}
						func_152(1);
					}
				}
				if (func_151())
				{
					func_150();
					if (iLocal_90 == 3)
					{
						if (!iLocal_57)
						{
							open_sequence_task(&iLocal_121);
							task_look_at_entity(false, iLocal_63, 16000, 0, 2);
							task_follow_nav_mesh_to_coord(false, vLocal_87, 1f, 20000, fVar0, 4, 1193033728);
							close_sequence_task(iLocal_121);
							task_perform_sequence(iLocal_62, iLocal_121);
							clear_sequence_task(&iLocal_121);
							iLocal_57 = 1;
						}
						open_sequence_task(&iLocal_121);
						task_look_at_entity(false, iLocal_62, -1, 0, 2);
						task_play_anim(false, "AMB@PROP_HUMAN_SEAT_CHAIR@MALE@GENERIC@EXIT", "exit_forward", 1000f, -1000f, -1, 512, 0, 0, 0, 0);
						task_go_to_coord_while_aiming_at_entity(0, vLocal_87, iLocal_62, 1f, false, 1.5f, 4f, true, 0, 0, -957453492, 20000);
						task_aim_gun_at_entity(false, iLocal_62, -1, 1);
						close_sequence_task(iLocal_121);
						task_perform_sequence(iLocal_63, iLocal_121);
						clear_sequence_task(&iLocal_121);
						settimera(false);
						iLocal_55 = true;
						set_wanted_level_multiplier(0f);
					}
					else
					{
						if (iLocal_90 == 1)
						{
							sLocal_111 = sLocal_111;
						}
						func_149();
						iLocal_55 = true;
						iLocal_149 = true;
						settimera(false);
					}
				}
			}
		}
	}
	if (iLocal_55)
	{
		if (!iLocal_135)
		{
			if (timera() > 1000)
			{
				if (is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_63, 60f, 60f, 50f, 0, 1, 0))
				{
					if (!is_entity_dead(iLocal_62, 0))
					{
						task_turn_ped_to_face_entity(iLocal_62, iLocal_63, false);
					}
					iLocal_135 = 1;
				}
				else
				{
					iLocal_135 = 1;
				}
			}
		}
		if (iLocal_135 && !iLocal_133)
		{
			if (!PED::IS_PED_INJURED(iLocal_62) && !PED::IS_PED_INJURED(iLocal_63))
			{
				if (func_34(&uLocal_194, sLocal_103, sLocal_104, 4, 0, 0, 0) || func_50())
				{
					clear_ped_tasks(iLocal_62);
					open_sequence_task(&iLocal_121);
					task_play_anim(false, sLocal_359, "handsup_standing_enter", 8f, -4f, -1, 0, 0, 0, 0, 0);
					task_play_anim(false, sLocal_359, "handsup_standing_base", 8f, -4f, 7000, 0, 0, 0, 0, 0);
					task_play_anim(false, sLocal_359, "handsup_standing_exit", 8f, -4f, -1, 0, 0, 0, 0, 0);
					close_sequence_task(iLocal_121);
					task_perform_sequence(iLocal_62, iLocal_121);
					clear_sequence_task(&iLocal_121);
					func_150();
					iLocal_191 = create_pickup(joaat("pickup_money_purse"), get_safe_pickup_coords(get_offset_from_entity_in_world_coords(iLocal_62, 0f, 2.5f, 0f), 1.2f, 1.5f), iLocal_144, iLocal_192, 1, iLocal_85);
					iLocal_133 = true;
				}
			}
		}
		if (iLocal_133)
		{
			if (PED::IS_PED_INJURED(iLocal_63))
			{
				func_148();
			}
			else
			{
				switch (iLocal_667)
				{
					case 0:
						vLocal_670 = {get_pickup_coords(iLocal_191) - Vector(0f, 0f, 0.75f)};
						if (does_pickup_object_exist(iLocal_191))
						{
							clear_ped_tasks(iLocal_63);
							open_sequence_task(&iLocal_121);
							task_go_to_coord_while_aiming_at_entity(0, vLocal_670, iLocal_62, 2f, false, 0.1f, 4f, true, 0, 0, -957453492, 20000);
							close_sequence_task(iLocal_121);
							task_perform_sequence(iLocal_63, iLocal_121);
							clear_sequence_task(&iLocal_121);
							iLocal_668 = GAMEPLAY::GET_GAME_TIMER();
						}
						iLocal_667 = 1;
						break;
					
					case 1:
						if (get_script_task_status(iLocal_63, 242628503) == 7)
						{
							vLocal_670 = {get_pickup_coords(iLocal_191) - Vector(0f, 0f, 0.75f)};
							if (does_pickup_object_exist(iLocal_191))
							{
								if (get_distance_between_coords(get_entity_coords(iLocal_63, 1), vLocal_670, 1) > 1f)
								{
									iLocal_669 = 1;
									iLocal_667 = 4;
								}
								else
								{
									clear_ped_tasks(iLocal_63);
									open_sequence_task(&iLocal_121);
									task_play_anim(false, sLocal_360, "pickup_low", 8f, -4f, -1, 8224, 0, 0, 0, 0);
									close_sequence_task(iLocal_121);
									task_perform_sequence(iLocal_63, iLocal_121);
									clear_sequence_task(&iLocal_121);
									iLocal_667 = 2;
								}
							}
							else
							{
								iLocal_667 = 4;
							}
						}
						if (GAMEPLAY::GET_GAME_TIMER() - iLocal_668 > 15000)
						{
							iLocal_669 = 1;
							iLocal_667 = 4;
						}
						break;
					
					case 2:
						if (get_entity_anim_current_time(iLocal_63, sLocal_360, "pickup_low") > 0.5f)
						{
							if (does_pickup_object_exist(iLocal_191))
							{
								remove_pickup(iLocal_191);
								iLocal_667 = 3;
							}
							else
							{
								iLocal_667 = 4;
							}
						}
						break;
					
					case 3:
						if ((is_entity_playing_anim(iLocal_63, sLocal_360, "pickup_low", 3) && get_entity_anim_current_time(iLocal_63, sLocal_360, "pickup_low") > 0.58f) || !is_entity_playing_anim(iLocal_63, sLocal_360, "pickup_low", 3))
						{
							iLocal_667 = 4;
						}
						break;
					
					case 4:
						set_entity_load_collision_flag(iLocal_63, true);
						task_smart_flee_ped(iLocal_63, PLAYER::PLAYER_PED_ID(), 50f, -1, 0, 0);
						_0x2208438012482A1A(iLocal_63, 0, 0);
						iLocal_149 = true;
						break;
					}
				}
			}
	}
}

void func_148()
{
	if (does_blip_exist(iLocal_65))
	{
		remove_blip(&iLocal_65);
	}
	if (!does_blip_exist(iLocal_67))
	{
		if (does_pickup_exist(iLocal_191))
		{
			iLocal_67 = func_134(iLocal_191);
		}
	}
	iLocal_48 = 4;
}

void func_149()
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
	}
	if (is_ped_facing_ped(iLocal_63, PLAYER::PLAYER_PED_ID(), 90f))
	{
		task_play_anim(iLocal_63, sLocal_359, sLocal_367, 1000f, -1000f, -1, 8, 0, 0, 0, 0);
		if (iLocal_47 == 2)
		{
			open_sequence_task(&iLocal_121);
			task_play_anim(false, sLocal_359, sLocal_368, 8f, -8f, -1, 0, 0, 0, 0, 0);
			task_play_anim(false, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_A", 8f, -4f, -1, 0, 0, 0, 0, 0);
			task_play_anim(false, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_B", 8f, -4f, -1, 0, 0, 0, 0, 0);
			task_play_anim(false, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_C", 8f, -4f, -1, 0, 0, 0, 0, 0);
			task_play_anim(false, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_A", 8f, -4f, -1, 0, 0, 0, 0, 0);
			task_play_anim(false, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_B", 8f, -4f, -1, 0, 0, 0, 0, 0);
			task_play_anim(false, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_C", 8f, -4f, -1, 1, 0, 0, 0, 0);
			close_sequence_task(iLocal_121);
			task_perform_sequence(iLocal_62, iLocal_121);
			clear_sequence_task(&iLocal_121);
		}
		else if (iLocal_90 == 4)
		{
			iLocal_379 = add_navmesh_blocking_object(39.7889f, -1014.392f, 28.4847f, 4f, 4f, 4f, 0f, 0, 4);
			open_sequence_task(&iLocal_121);
			task_play_anim(false, sLocal_359, "flee_backward_intro_shopkeeper", 8f, -4f, -1, 0, 0, 0, 0, 0);
			task_play_anim(false, sLocal_359, "flee_backward_loop_shopkeeper", 8f, -4f, -1, 9, 0, 0, 0, 0);
			close_sequence_task(iLocal_121);
			task_perform_sequence(iLocal_62, iLocal_121);
			clear_sequence_task(&iLocal_121);
		}
		else
		{
			open_sequence_task(&iLocal_121);
			task_play_anim(false, sLocal_359, sLocal_368, 8f, -4f, -1, 0, 0, 0, 0, 0);
			task_play_anim(false, sLocal_359, "agitated_loop_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
			task_play_anim(false, sLocal_359, "agitated_loop_a", 8f, -4f, -1, 0, 0, 0, 0, 0);
			task_play_anim(false, sLocal_359, "agitated_loop_b", 8f, -4f, -1, 0, 0, 0, 0, 0);
			task_play_anim(false, sLocal_359, "agitated_loop_c", 8f, -4f, -1, 1, 0, 0, 0, 0);
			close_sequence_task(iLocal_121);
			task_perform_sequence(iLocal_62, iLocal_121);
			clear_sequence_task(&iLocal_121);
		}
	}
	else
	{
		task_play_anim(iLocal_63, sLocal_359, sLocal_369, 1000f, -1000f, -1, 8, 0, 0, 0, 0);
		if (iLocal_47 == 2)
		{
			open_sequence_task(&iLocal_121);
			task_play_anim(false, sLocal_359, sLocal_370, 8f, -8f, -1, 8, 0.1f, 0, 0, 0);
			task_turn_ped_to_face_coord(false, -94.8543f, -1582.686f, 30.2862f, 3000);
			task_play_anim(false, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_B", 8f, -4f, -1, 0, 0, 0, 0, 0);
			task_play_anim(false, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_C", 8f, -4f, -1, 0, 0, 0, 0, 0);
			task_play_anim(false, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_A", 8f, -4f, -1, 0, 0, 0, 0, 0);
			task_play_anim(false, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_B", 8f, -4f, -1, 0, 0, 0, 0, 0);
			task_play_anim(false, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_C", 8f, -4f, -1, 0, 0, 0, 0, 0);
			task_play_anim(false, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_A", 8f, -4f, -1, 1, 0, 0, 0, 0);
			close_sequence_task(iLocal_121);
			task_perform_sequence(iLocal_62, iLocal_121);
			clear_sequence_task(&iLocal_121);
		}
		else if (iLocal_90 == 4)
		{
			open_sequence_task(&iLocal_121);
			task_play_anim(false, sLocal_359, "flee_forward_intro_shopkeeper", 8f, -4f, -1, 0, 0, 0, 0, 0);
			task_play_anim(false, sLocal_359, "flee_forward_loop_shopkeeper", 8f, -4f, -1, 9, 0, 0, 0, 0);
			close_sequence_task(iLocal_121);
			task_perform_sequence(iLocal_62, iLocal_121);
			clear_sequence_task(&iLocal_121);
		}
		else
		{
			open_sequence_task(&iLocal_121);
			task_play_anim(false, sLocal_359, sLocal_370, 8f, -4f, -1, 8, 0, 0, 0, 0);
			task_play_anim(false, sLocal_359, "agitated_loop_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
			task_play_anim(false, sLocal_359, "agitated_loop_a", 8f, -4f, -1, 0, 0, 0, 0, 0);
			task_play_anim(false, sLocal_359, "agitated_loop_b", 8f, -4f, -1, 0, 0, 0, 0, 0);
			task_play_anim(false, sLocal_359, "agitated_loop_c", 8f, -4f, -1, 1, 0, 0, 0, 0);
			close_sequence_task(iLocal_121);
			task_perform_sequence(iLocal_62, iLocal_121);
			clear_sequence_task(&iLocal_121);
		}
	}
}

void func_150()
{
	if (does_blip_exist(iLocal_68))
	{
		remove_blip(&iLocal_68);
	}
	if (!does_blip_exist(iLocal_66))
	{
		if (!is_entity_dead(iLocal_63, 0))
		{
			iLocal_66 = func_121(iLocal_63, 1, 0);
		}
	}
}

int func_151()
{
	int iVar0;
	
	iVar0 = 0;
	if (iLocal_90 == 1)
	{
		if (is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), -170.3051f, -1670.362f, 53.73083f, -91.94043f, -1578.828f, 24.96221f, 18f, 0, false, 0))
		{
			iVar0 = 1;
		}
	}
	else if (iLocal_90 == 2)
	{
		if (get_distance_between_coords(get_entity_coords(PLAYER::PLAYER_PED_ID(), 1), get_entity_coords(iLocal_63, 1), 1) < 30f)
		{
			iVar0 = 1;
		}
	}
	else if (iLocal_90 == 4)
	{
		if (is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), -41.32678f, -959.6443f, 38.4444f, 119.9208f, -1021.231f, 21.85738f, 123.75f, 0, true, 0))
		{
			iVar0 = 1;
		}
	}
	else if (get_distance_between_coords(get_entity_coords(PLAYER::PLAYER_PED_ID(), 1), -325.7037f, -829.31f, 30.5812f, 1) < 95f)
	{
		iVar0 = 1;
	}
	return iVar0;
}

bool func_152(int iParam0)
{
	if (func_154())
	{
		Global_101144 = 1;
		Global_101141 = GAMEPLAY::GET_GAME_TIMER();
		if (func_153(Global_101143))
		{
			func_118(0);
		}
		set_mission_name(1, "RE_TITLE");
		if (iParam0 && func_153(Global_101143))
		{
			flash_minimap_display();
		}
		return true;
	}
	return false;
}

bool func_153(int iParam0)
{
	switch (iParam0)
	{
		case 29:
		case 30:
		case 2:
		case 18:
			return false;
			break;
	}
	return true;
}

bool func_154()
{
	switch (func_155(&Global_25179, 0, 5, 0, get_id_of_this_thread()))
	{
		case 1:
			return true;
			break;
		
		case 0:
			return true;
			break;
	}
	return false;
}

int func_155(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!iParam3)
	{
		if (Global_89089.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_159(0))
		{
			return 0;
		}
		Global_35675++;
		*uParam0 = Global_35675;
		set_player_invincible(get_player_index(), 0);
		Global_17118.f_5 = 0;
		if (iParam2 != 5)
		{
			force_cleanup(8);
		}
		Global_35711 = iParam2;
		Global_35673 = *uParam0;
		Global_35674 = iParam4;
		Global_35672 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_35672 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_35672)
			{
				if (Global_35678[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_35673 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_157(iParam2))
		{
			return 0;
		}
		if (Global_35672 == 8)
		{
			return 0;
		}
		Global_35675++;
		*uParam0 = Global_35675;
		Global_35678[Global_35672 /*4*/] = Global_35675;
		Global_35678[Global_35672 /*4*/].f_1 = iParam1;
		Global_35678[Global_35672 /*4*/].f_2 = iParam2;
		Global_35678[Global_35672 /*4*/].f_3 = 0;
		Global_35672++;
		if (iParam4 != 0)
		{
			func_156(uParam0, iParam4);
		}
	}
	return 2;
}

void func_156(auto uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_35672 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_35672)
	{
		if (Global_35678[iVar0 /*4*/] == *uParam0)
		{
			Global_35678[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

int func_157(int iParam0)
{
	return func_158(iParam0, Global_35711);
}

bool func_158(int iParam0, int iParam1)
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

bool func_159(int iParam0)
{
	if (Global_35711 == 15)
	{
		return false;
	}
	if (func_157(iParam0))
	{
		return false;
	}
	return true;
}

int func_160()
{
	int iVar0;
	
	iVar0 = 0;
	if (iLocal_90 == 1)
	{
		if (is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), -179.103f, -1682.421f, 53.693f, -83.53208f, -1567.584f, 25.18745f, 40.75f, 0, false, 0))
		{
			iVar0 = 1;
		}
	}
	else if (iLocal_90 == 2)
	{
		if (is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), 353.1506f, -296.1962f, 62.76571f, 210.4646f, -243.5106f, 46.13731f, 123.75f, 0, true, 0))
		{
			iVar0 = 1;
		}
	}
	else if (iLocal_90 == 3)
	{
		if (get_distance_between_coords(get_entity_coords(PLAYER::PLAYER_PED_ID(), 1), -325.7037f, -829.31f, 30.5812f, 1) < 105f)
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

bool func_161()
{
	if (!func_157(5))
	{
		return true;
	}
	if (func_170())
	{
		return true;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (vmag2(get_entity_velocity(PLAYER::PLAYER_PED_ID())) > 1369f && !func_169())
		{
			return false;
		}
	}
	if (func_162(100f, 1) != -1)
	{
		return true;
	}
	return false;
}

int func_162(float fParam0, int iParam1)
{
	struct<27> Var0;
	int iVar32;
	int iVar33;
	Vector3 fVar34;
	Vector3 fVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	
	iVar33 = -1;
	fVar34 = fParam0;
	if (is_player_playing(player_id()))
	{
		if (func_108(func_106()))
		{
			iVar36 = func_168();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (is_bit_set(Global_101154.f_17264[iVar32 /*6*/], 2) && !is_bit_set(Global_101154.f_17264[iVar32 /*6*/], 3))
				{
					func_163(iVar32, &Var0);
					fVar35 = get_distance_between_coords(get_entity_coords(PLAYER::PLAYER_PED_ID(), 0), Var0.f_6, 1);
					if (fVar35 < fVar34)
					{
						iVar38 = true;
						if (iParam1)
						{
							if (iVar36 != Var0.f_26)
							{
								iVar38 = false;
							}
						}
						if (iVar38)
						{
							iVar33 = iVar32;
							fVar34 = fVar35;
						}
					}
				}
				iVar37++;
			}
		}
	}
	return iVar33;
}

void func_163(int iParam0, auto uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_164(uParam1, "Abigail1", func_166(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_165(iParam0), 1, 0);
			break;
		
		case 1:
			func_164(uParam1, "Abigail2", func_166(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_165(iParam0), 1, 0);
			break;
		
		case 2:
			func_164(uParam1, "Barry1", func_166(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_165(iParam0), 1, 0);
			break;
		
		case 3:
			func_164(uParam1, "Barry2", func_166(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_165(iParam0), 1, 1);
			break;
		
		case 4:
			func_164(uParam1, "Barry3", func_166(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_165(iParam0), 0, 0);
			break;
		
		case 5:
			func_164(uParam1, "Barry3A", func_166(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_165(iParam0), 0, 1);
			break;
		
		case 6:
			func_164(uParam1, "Barry3C", func_166(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_165(iParam0), 0, 1);
			break;
		
		case 7:
			func_164(uParam1, "Barry4", func_166(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_165(iParam0), 0, 0);
			break;
		
		case 8:
			func_164(uParam1, "Dreyfuss1", func_166(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_165(iParam0), 0, 0);
			break;
		
		case 9:
			func_164(uParam1, "Epsilon1", func_166(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_165(iParam0), 0, 0);
			break;
		
		case 10:
			func_164(uParam1, "Epsilon2", func_166(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_165(iParam0), 1, 0);
			break;
		
		case 11:
			func_164(uParam1, "Epsilon3", func_166(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_165(iParam0), 0, 0);
			break;
		
		case 12:
			func_164(uParam1, "Epsilon4", func_166(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_165(iParam0), 0, 0);
			break;
		
		case 13:
			func_164(uParam1, "Epsilon5", func_166(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_165(iParam0), 1, 0);
			break;
		
		case 14:
			func_164(uParam1, "Epsilon6", func_166(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_165(iParam0), 0, 1);
			break;
		
		case 15:
			func_164(uParam1, "Epsilon7", func_166(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_165(iParam0), 0, 0);
			break;
		
		case 16:
			func_164(uParam1, "Epsilon8", func_166(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_165(iParam0), 1, 0);
			break;
		
		case 17:
			func_164(uParam1, "Extreme1", func_166(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_165(iParam0), 0, 1);
			break;
		
		case 18:
			func_164(uParam1, "Extreme2", func_166(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_165(iParam0), 0, 1);
			break;
		
		case 19:
			func_164(uParam1, "Extreme3", func_166(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_165(iParam0), 0, 1);
			break;
		
		case 20:
			func_164(uParam1, "Extreme4", func_166(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_165(iParam0), 0, 0);
			break;
		
		case 21:
			func_164(uParam1, "Fanatic1", func_166(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_165(iParam0), 1, 0);
			break;
		
		case 22:
			func_164(uParam1, "Fanatic2", func_166(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_165(iParam0), 1, 0);
			break;
		
		case 23:
			func_164(uParam1, "Fanatic3", func_166(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_165(iParam0), 0, 1);
			break;
		
		case 24:
			func_164(uParam1, "Hao1", func_166(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_165(iParam0), 0, 1);
			break;
		
		case 25:
			func_164(uParam1, "Hunting1", func_166(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_165(iParam0), 0, 1);
			break;
		
		case 26:
			func_164(uParam1, "Hunting2", func_166(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_165(iParam0), 0, 1);
			break;
		
		case 27:
			func_164(uParam1, "Josh1", func_166(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_165(iParam0), 1, 0);
			break;
		
		case 28:
			func_164(uParam1, "Josh2", func_166(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_165(iParam0), 1, 1);
			break;
		
		case 29:
			func_164(uParam1, "Josh3", func_166(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_165(iParam0), 1, 1);
			break;
		
		case 30:
			func_164(uParam1, "Josh4", func_166(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_165(iParam0), 1, 0);
			break;
		
		case 31:
			func_164(uParam1, "Maude1", func_166(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_165(iParam0), 0, 1);
			break;
		
		case 32:
			func_164(uParam1, "Minute1", func_166(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_165(iParam0), 0, 1);
			break;
		
		case 33:
			func_164(uParam1, "Minute2", func_166(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_165(iParam0), 0, 1);
			break;
		
		case 34:
			func_164(uParam1, "Minute3", func_166(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_165(iParam0), 0, 1);
			break;
		
		case 35:
			func_164(uParam1, "MrsPhilips1", func_166(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_165(iParam0), 0, 0);
			break;
		
		case 36:
			func_164(uParam1, "MrsPhilips2", func_166(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_165(iParam0), 0, 0);
			break;
		
		case 37:
			func_164(uParam1, "Nigel1", func_166(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_165(iParam0), 1, 0);
			break;
		
		case 38:
			func_164(uParam1, "Nigel1A", func_166(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_165(iParam0), 1, 1);
			break;
		
		case 39:
			func_164(uParam1, "Nigel1B", func_166(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_165(iParam0), 1, 1);
			break;
		
		case 40:
			func_164(uParam1, "Nigel1C", func_166(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_165(iParam0), 1, 1);
			break;
		
		case 41:
			func_164(uParam1, "Nigel1D", func_166(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_165(iParam0), 1, 1);
			break;
		
		case 42:
			func_164(uParam1, "Nigel2", func_166(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_165(iParam0), 1, 1);
			break;
		
		case 43:
			func_164(uParam1, "Nigel3", func_166(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_165(iParam0), 1, 1);
			break;
		
		case 44:
			func_164(uParam1, "Omega1", func_166(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_165(iParam0), 0, 0);
			break;
		
		case 45:
			func_164(uParam1, "Omega2", func_166(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_165(iParam0), 0, 0);
			break;
		
		case 46:
			func_164(uParam1, "Paparazzo1", func_166(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_165(iParam0), 0, 1);
			break;
		
		case 47:
			func_164(uParam1, "Paparazzo2", func_166(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_165(iParam0), 0, 1);
			break;
		
		case 48:
			func_164(uParam1, "Paparazzo3", func_166(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_165(iParam0), 0, 0);
			break;
		
		case 49:
			func_164(uParam1, "Paparazzo3A", func_166(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_165(iParam0), 0, 1);
			break;
		
		case 50:
			func_164(uParam1, "Paparazzo3B", func_166(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_165(iParam0), 0, 1);
			break;
		
		case 51:
			func_164(uParam1, "Paparazzo4", func_166(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_165(iParam0), 0, 0);
			break;
		
		case 52:
			func_164(uParam1, "Rampage1", func_166(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_165(iParam0), 0, 0);
			break;
		
		case 54:
			func_164(uParam1, "Rampage3", func_166(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_165(iParam0), 1, 0);
			break;
		
		case 55:
			func_164(uParam1, "Rampage4", func_166(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_165(iParam0), 1, 0);
			break;
		
		case 56:
			func_164(uParam1, "Rampage5", func_166(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_165(iParam0), 0, 0);
			break;
		
		case 53:
			func_164(uParam1, "Rampage2", func_166(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_165(iParam0), 1, 0);
			break;
		
		case 57:
			func_164(uParam1, "TheLastOne", func_166(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_165(iParam0), 0, 1);
			break;
		
		case 58:
			func_164(uParam1, "Tonya1", func_166(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_165(iParam0), 0, 1);
			break;
		
		case 59:
			func_164(uParam1, "Tonya2", func_166(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_165(iParam0), 0, 1);
			break;
		
		case 60:
			func_164(uParam1, "Tonya3", func_166(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_165(iParam0), 0, 1);
			break;
		
		case 61:
			func_164(uParam1, "Tonya4", func_166(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_165(iParam0), 0, 1);
			break;
		
		case 62:
			func_164(uParam1, "Tonya5", func_166(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_165(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_164(auto uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, Vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, auto uParam19, int iParam20, int iParam21)
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

bool func_165(int iParam0)
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

struct<2> func_166(int iParam0)
{
	char[8] cVar0;
	struct<2> Var2;
	
	StringCopy(&cVar0, "", 8);
	Var2 = {func_167(iParam0)};
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

struct<2> func_167(int iParam0)
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

int func_168()
{
	func_107();
	switch (Global_101154.f_1826.f_539.f_3549)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 4;
			break;
	}
	return 0;
}

bool func_169()
{
	if (is_pc_version())
	{
		if (_0xD10282B6E3751BA0() == 1f)
		{
			return true;
		}
	}
	return false;
}

bool func_170()
{
	if (func_173() && !func_169())
	{
		return true;
	}
	if (func_172() && func_171())
	{
		return true;
	}
	return false;
}

int func_171()
{
	return Global_100872 > 0;
}

bool func_172()
{
	if (Global_88533 != -1)
	{
		return true;
	}
	return false;
}

int func_173()
{
	if (Global_88533 != -1)
	{
		return is_bit_set(Global_82399[Global_88533 /*34*/].f_15, 20);
	}
	return false;
}

bool func_174()
{
	if ((Global_101143 == func_175() && get_random_event_flag()) && Global_101144)
	{
		return true;
	}
	return false;
}

auto func_175()
{
	char[64] cVar0;
	auto uVar16;
	
	StringCopy(&cVar0, get_this_script_name(), 64);
	uVar16 = func_176(cVar0);
	return uVar16;
}

int func_176(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (get_hash_key(&cParam0))
	{
		case joaat("re_abandonedcar"):
			return 23;
			break;
		
		case joaat("re_accident"):
			return 0;
			break;
		
		case joaat("re_arrests"):
			return 15;
			break;
		
		case joaat("re_atmrobbery"):
			return 1;
			break;
		
		case joaat("re_bikethief"):
			return 26;
			break;
		
		case joaat("re_border"):
			return 29;
			break;
		
		case joaat("re_burials"):
			return 24;
			break;
		
		case joaat("re_bus_tours"):
			return 2;
			break;
		
		case joaat("re_cartheft"):
			return 17;
			break;
		
		case joaat("re_chasethieves"):
			return 11;
			break;
		
		case joaat("re_crashrescue"):
			return 16;
			break;
		
		case joaat("re_cultshootout"):
			return 18;
			break;
		
		case joaat("re_dealgonewrong"):
			return 12;
			break;
		
		case joaat("re_domestic"):
			return 3;
			break;
		
		case joaat("re_drunkdriver"):
			return 27;
			break;
		
		case joaat("re_gang_intimidation"):
			return 20;
			break;
		
		case joaat("re_gangfight"):
			return 19;
			break;
		
		case joaat("re_getaway_driver"):
			return 4;
			break;
		
		case joaat("re_hitch_lift"):
			return 13;
			break;
		
		case joaat("re_homeland_security"):
			return 28;
			break;
		
		case joaat("re_lured"):
			return 7;
			break;
		
		case joaat("re_muggings"):
			return 25;
			break;
		
		case joaat("re_paparazzi"):
			return 10;
			break;
		
		case joaat("re_prisonerlift"):
			return 22;
			break;
		
		case joaat("re_prisonvanbreak"):
			return 21;
			break;
		
		case joaat("re_securityvan"):
			return 9;
			break;
		
		case joaat("re_shoprobbery"):
			return 5;
			break;
		
		case joaat("re_snatched"):
			return 6;
			break;
		
		case joaat("re_stag_do"):
			return 14;
			break;
		
		case joaat("re_yetarian"):
			return 30;
			break;
		
		case joaat("re_duel"):
			return 31;
			break;
		
		case joaat("re_seaplane"):
			return 32;
			break;
		
		case joaat("re_monkey"):
			return 33;
			break;
	}
	return -1;
}

void func_177()
{
	if (is_player_playing(player_id()))
	{
		special_ability_fill_meter(player_id(), 1);
	}
	func_276(25, iLocal_90);
	func_181();
	func_178();
	func_258();
}

void func_178()
{
	func_179();
}

bool func_179()
{
	if (func_180(0))
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

int func_180(int iParam0)
{
	if (!iParam0 && _get_number_of_instances_of_streamed_script(joaat("benchmark")) > 0)
	{
		return true;
	}
	return is_bit_set(Global_69737, false);
}

bool func_181()
{
	return true;
}

void func_182(int iParam0)
{
	Global_101140 = iParam0;
}

void func_183()
{
	switch (iLocal_140)
	{
		case 0:
			if (!PED::IS_PED_INJURED(iLocal_63))
			{
				task_play_anim(iLocal_63, sLocal_359, "IG_1_guy_stickup_loop", 8f, -4f, -1, 1, 0, 0, 0, 0);
			}
			if (!PED::IS_PED_INJURED(iLocal_62))
			{
				task_play_anim(iLocal_62, sLocal_361, "ortega_stand_loop_ort", 8f, -4f, -1, 1, 0, 0, 0, 0);
			}
			iLocal_140++;
			break;
		
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_63))
			{
				if (!PED::IS_PED_INJURED(iLocal_63))
				{
					if (func_160())
					{
						if (!does_blip_exist(iLocal_68))
						{
							if (!is_entity_dead(iLocal_63, 0))
							{
								iLocal_68 = func_121(iLocal_63, 1, 0);
							}
							if (!func_174())
							{
								func_152(1);
							}
						}
					}
					if (func_151())
					{
						func_34(&uLocal_194, sLocal_103, "REMG2_ARG", 4, 0, 0, 0);
						func_150();
						iLocal_187 = GAMEPLAY::GET_GAME_TIMER();
						set_wanted_level_multiplier(0f);
						iLocal_190 = 1;
						iLocal_140++;
					}
				}
				else if (!PED::IS_PED_INJURED(iLocal_62))
				{
					task_smart_flee_coord(iLocal_62, vLocal_145, 250f, -1, 0, 0);
					set_ped_keep_task(iLocal_62, true);
					wait(false);
					func_189();
				}
			}
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (func_188())
				{
					iLocal_140 = 4;
				}
				if (func_137())
				{
					iLocal_140 = 9;
				}
				if (func_187())
				{
					iLocal_140 = 6;
				}
				if (func_186())
				{
					iLocal_140 = 4;
				}
			}
			if (!func_174())
			{
				if (func_161())
				{
					func_258();
				}
			}
			break;
		
		case 2:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_63))
			{
				if (!PED::IS_PED_INJURED(iLocal_63))
				{
					if (is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_63, 6f, 6f, 15f, 0, 1, 0))
					{
						if (_0x6CD5A433374D4CFB(iLocal_63, PLAYER::PLAYER_PED_ID()) || is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_63, 3f, 3f, 15f, 0, 1, 0))
						{
							if (is_ped_facing_ped(PLAYER::PLAYER_PED_ID(), iLocal_63, 65f))
							{
								iLocal_189 = GAMEPLAY::GET_GAME_TIMER();
								task_look_at_entity(iLocal_63, PLAYER::PLAYER_PED_ID(), 7000, 0, 2);
								func_34(&uLocal_194, sLocal_103, sLocal_112, 4, 0, 0, 0);
								settimerb(false);
								iLocal_140++;
							}
							else
							{
								iLocal_189 = GAMEPLAY::GET_GAME_TIMER();
								task_look_at_entity(iLocal_63, PLAYER::PLAYER_PED_ID(), 7000, 0, 2);
								func_34(&uLocal_194, sLocal_103, sLocal_112, 4, 0, 0, 0);
								settimerb(false);
								iLocal_140++;
							}
						}
					}
				}
			}
			if (func_188() || func_186())
			{
				iLocal_140 = 4;
			}
			if (func_137())
			{
				iLocal_140 = 9;
			}
			if (func_187())
			{
				iLocal_140 = 6;
			}
			break;
		
		case 3:
			if (iLocal_188 - iLocal_189 > 12500)
			{
				if (is_ped_armed(PLAYER::PLAYER_PED_ID(), 6))
				{
					iLocal_140 = 4;
				}
			}
			if (iLocal_188 - iLocal_189 > 5500)
			{
				if (!iLocal_137)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_63))
					{
						if (!PED::IS_PED_INJURED(iLocal_63))
						{
							func_34(&uLocal_194, sLocal_103, sLocal_114, 4, 0, 0, 0);
							task_combat_ped(iLocal_63, PLAYER::PLAYER_PED_ID(), 0, 16);
							iLocal_137 = true;
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_62))
							{
								if (!PED::IS_PED_INJURED(iLocal_62))
								{
									task_smart_flee_coord(iLocal_62, vLocal_145, 250f, -1, 0, 0);
									set_ped_keep_task(iLocal_62, true);
									wait(false);
								}
								if (!PED::IS_PED_INJURED(iLocal_62))
								{
								}
								if (does_blip_exist(iLocal_65))
								{
									remove_blip(&iLocal_65);
								}
							}
						}
					}
				}
			}
			if (iLocal_137)
			{
				iLocal_140 = 10;
			}
			else
			{
				if (func_188())
				{
					iLocal_140 = 4;
				}
				if (func_137())
				{
					iLocal_140 = 9;
				}
				if (func_187())
				{
					iLocal_140 = 6;
				}
				if (func_185())
				{
					iLocal_140 = 9;
				}
				if (func_186())
				{
					iLocal_140 = 4;
				}
			}
			break;
		
		case 10:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_63))
			{
				if (PED::IS_PED_INJURED(iLocal_63) || func_30(PLAYER::PLAYER_PED_ID(), iLocal_63, 1) > 100f)
				{
					func_184();
					func_189();
				}
			}
			break;
		
		case 4:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_62))
			{
				if (!PED::IS_PED_INJURED(iLocal_62))
				{
					if (!has_entity_been_damaged_by_entity(iLocal_62, PLAYER::PLAYER_PED_ID(), 1))
					{
						clear_ped_tasks(iLocal_62);
						if (!PED::IS_PED_INJURED(iLocal_63))
						{
							open_sequence_task(&iLocal_121);
							task_smart_flee_coord(false, get_entity_coords(iLocal_63, 0), 150f, -1, 0, 0);
							close_sequence_task(iLocal_121);
							task_perform_sequence(iLocal_62, iLocal_121);
							clear_sequence_task(&iLocal_121);
							set_ped_keep_task(iLocal_62, true);
						}
						iLocal_148 = 1;
					}
					else
					{
						clear_ped_tasks(iLocal_62);
						task_smart_flee_ped(iLocal_62, PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
						set_ped_keep_task(iLocal_62, true);
						if (does_blip_exist(iLocal_65))
						{
							remove_blip(&iLocal_65);
						}
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_63))
			{
				if (!PED::IS_PED_INJURED(iLocal_63))
				{
					clear_ped_tasks(iLocal_63);
					task_smart_flee_ped(iLocal_63, PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
					set_ped_keep_task(iLocal_63, true);
					if (does_blip_exist(iLocal_66))
					{
						remove_blip(&iLocal_66);
					}
				}
			}
			if (is_scripted_conversation_ongoing())
			{
				func_89();
			}
			wait(false);
			if (!iLocal_148)
			{
				if (!PED::IS_PED_INJURED(iLocal_63))
				{
					func_34(&uLocal_194, sLocal_103, "REMG2_FKIT", 4, 0, 0, 0);
				}
				func_258();
			}
			break;
		
		case 5:
			if (timerb() > 250)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_63))
				{
					if (!PED::IS_PED_INJURED(iLocal_63))
					{
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_63, 17, true);
						set_ped_reset_flag(iLocal_63, 156, true);
						open_sequence_task(&iLocal_121);
						task_smart_flee_ped(false, PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
						close_sequence_task(iLocal_121);
						task_perform_sequence(iLocal_63, iLocal_121);
						clear_sequence_task(&iLocal_121);
						set_ped_keep_task(iLocal_63, true);
						wait(false);
						set_entity_load_collision_flag(iLocal_63, false);
						set_ped_as_no_longer_needed(&iLocal_63);
						func_34(&uLocal_194, sLocal_103, sLocal_113, 4, 0, 0, 0);
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_62))
				{
					if (!PED::IS_PED_INJURED(iLocal_62))
					{
						if (!has_entity_been_damaged_by_entity(iLocal_62, PLAYER::PLAYER_PED_ID(), 1))
						{
							clear_ped_tasks(iLocal_62);
							iLocal_148 = 1;
						}
					}
				}
				if (!iLocal_148)
				{
					wait(false);
					func_258();
				}
			}
			break;
		
		case 6:
			if (timera() > 500)
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_62))
					{
						if (!PED::IS_PED_INJURED(iLocal_62))
						{
							clear_ped_tasks(iLocal_62);
							open_sequence_task(&iLocal_121);
							task_look_at_entity(false, PLAYER::PLAYER_PED_ID(), 10000, 0, 2);
							task_smart_flee_ped(false, PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
							close_sequence_task(iLocal_121);
							task_perform_sequence(iLocal_62, iLocal_121);
							clear_sequence_task(&iLocal_121);
							set_ped_keep_task(iLocal_62, true);
							set_ped_as_no_longer_needed(&iLocal_62);
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_63))
					{
						if (!PED::IS_PED_INJURED(iLocal_63))
						{
							func_34(&uLocal_194, sLocal_103, sLocal_114, 4, 0, 0, 0);
							clear_ped_tasks(iLocal_63);
							open_sequence_task(&iLocal_121);
							task_look_at_entity(false, PLAYER::PLAYER_PED_ID(), 10000, 0, 2);
							task_turn_ped_to_face_entity(false, PLAYER::PLAYER_PED_ID(), false);
							task_smart_flee_ped(false, PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
							close_sequence_task(iLocal_121);
							task_perform_sequence(iLocal_63, iLocal_121);
							clear_sequence_task(&iLocal_121);
							set_ped_keep_task(iLocal_63, true);
						}
					}
				}
				wait(false);
				func_258();
			}
			break;
		
		case 7:
			settimera(false);
			iLocal_140++;
			break;
		
		case 8:
			if (timera() > 200)
			{
				func_189();
			}
			break;
		
		case 9:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_63))
			{
				if (!PED::IS_PED_INJURED(iLocal_63))
				{
					set_ped_reset_flag(iLocal_63, 156, true);
					task_combat_hated_targets_around_ped(iLocal_63, 50f, 0);
					if (is_scripted_conversation_ongoing())
					{
						func_89();
					}
					wait(false);
					func_34(&uLocal_194, sLocal_103, sLocal_112, 4, 0, 0, 0);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_62))
			{
				if (!PED::IS_PED_INJURED(iLocal_62))
				{
					clear_ped_tasks(iLocal_62);
					task_cower(iLocal_62, 2000);
					iLocal_148 = 1;
				}
			}
			break;
	}
	if (iLocal_140 != 8 && iLocal_148)
	{
		iLocal_140 = 7;
	}
	iLocal_188 = GAMEPLAY::GET_GAME_TIMER();
	if (iLocal_190 && !iLocal_137)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_63) && ENTITY::DOES_ENTITY_EXIST(iLocal_63))
		{
			if (!PED::IS_PED_INJURED(iLocal_62) && !PED::IS_PED_INJURED(iLocal_63))
			{
				if (((iLocal_188 - iLocal_187 > 12000 && !is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_63, 3f, 3f, 35f, 0, 1, 0)) && is_entity_on_screen(iLocal_63)) && !func_145())
				{
					if ((func_34(&uLocal_194, sLocal_103, "REMG2_FKIT", 4, 0, 0, 0) || func_50()) || func_50())
					{
						set_ped_reset_flag(iLocal_63, 156, true);
						set_ped_shoots_at_coord(iLocal_63, get_ped_bone_coords(iLocal_62, 31086, 0f, 0f, 0f), 0);
						clear_ped_tasks(iLocal_62);
						set_entity_health(iLocal_62, 99);
						task_smart_flee_coord(iLocal_63, vLocal_145, 250f, -1, 0, 0);
						set_ped_keep_task(iLocal_63, true);
						func_258();
					}
				}
			}
		}
	}
}

void func_184()
{
	Global_14578 = 0;
	func_44();
}

bool func_185()
{
	if (!PED::IS_PED_INJURED(iLocal_62) && !PED::IS_PED_INJURED(iLocal_63))
	{
		if (is_entity_touching_entity(PLAYER::PLAYER_PED_ID(), iLocal_63) || is_entity_touching_entity(PLAYER::PLAYER_PED_ID(), iLocal_62))
		{
			return true;
		}
		if (is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_63, 2f, 2f, 2f, 0, 1, 0))
		{
		}
	}
	return false;
}

bool func_186()
{
	if (!is_entity_dead(iLocal_62, 0))
	{
		if (is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_62, 20f, 20f, 20f, 0, 1, 0))
		{
			if (is_player_free_aiming_at_entity(player_id(), iLocal_62) || is_player_targetting_entity(player_id(), iLocal_62))
			{
				if (is_ped_shooting(PLAYER::PLAYER_PED_ID()))
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
	if (!is_entity_dead(iLocal_63, 0))
	{
		if (func_137())
		{
			if (is_ped_shooting(PLAYER::PLAYER_PED_ID()))
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

bool func_187()
{
	if (!PED::IS_PED_INJURED(iLocal_62))
	{
		if (is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iLocal_62, 5.3f, 5.3f, 6f, 0, 1, 0))
		{
			if (has_entity_clear_los_to_entity(iLocal_62, PLAYER::PLAYER_PED_ID(), 17))
			{
				if (is_ped_armed(PLAYER::PLAYER_PED_ID(), 6) && !is_ped_shooting(PLAYER::PLAYER_PED_ID()))
				{
					if (!PED::IS_PED_INJURED(iLocal_63))
					{
						if (!is_player_targetting_entity(player_id(), iLocal_63))
						{
							if (is_player_free_aiming_at_entity(player_id(), iLocal_62) || is_player_targetting_entity(player_id(), iLocal_62))
							{
								settimerb(false);
								return true;
							}
						}
					}
					else if (is_player_free_aiming_at_entity(player_id(), iLocal_62) || is_player_targetting_entity(player_id(), iLocal_62))
					{
						settimerb(false);
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_188()
{
	if (!is_entity_dead(iLocal_62, 0))
	{
		if (is_bullet_in_area(get_ped_bone_coords(iLocal_62, 31086, 0f, 0f, 0f), 5f, 1))
		{
			if (is_ped_shooting(PLAYER::PLAYER_PED_ID()))
			{
				return true;
			}
		}
	}
	return false;
}

void func_189()
{
	if (!PED::IS_PED_INJURED(iLocal_62))
	{
		if (!is_ped_ragdoll(iLocal_62))
		{
			if (func_174())
			{
				if (get_script_task_status(iLocal_62, 242628503) == 7 || get_script_task_status(iLocal_62, 474215631) == 7)
				{
					if (is_scripted_conversation_ongoing())
					{
						func_89();
					}
					if (!PED::IS_PED_INJURED(iLocal_63))
					{
						if (!is_ped_fleeing(iLocal_62))
						{
							task_smart_flee_ped(iLocal_62, iLocal_63, 150f, -1, 0, 0);
						}
					}
					else if (iLocal_47 == 3)
					{
						if (!is_ped_fleeing(iLocal_62))
						{
							task_smart_flee_coord(iLocal_62, vLocal_122, 150f, -1, 0, 0);
						}
					}
					set_ped_keep_task(iLocal_62, true);
					wait(false);
					func_34(&uLocal_194, sLocal_103, sLocal_109, 4, 0, 0, 0);
					wait(false);
					if (iLocal_192 > 0)
					{
						set_ped_money(PLAYER::PLAYER_PED_ID(), iLocal_192 / 100 * 90);
						func_52(func_106(), 1, iLocal_192);
						wait(false);
						func_190(func_106(), 1, iLocal_192 / 10, 0, 1);
					}
					func_182(3);
					func_177();
				}
			}
			else
			{
				func_258();
			}
		}
		else
		{
			func_258();
		}
	}
	else
	{
		func_258();
	}
}

void func_190(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
	func_53(Global_101154.f_32575[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
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

bool func_191()
{
	if (is_player_playing(player_id()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (vdist2(get_entity_coords(PLAYER::PLAYER_PED_ID(), 1), vLocal_43) < 75f * 75f)
		{
			return true;
		}
		if (vmag2(get_entity_velocity(PLAYER::PLAYER_PED_ID())) > 1369f && !func_169())
		{
			return false;
		}
	}
	if (func_170())
	{
		return true;
	}
	if (func_162(100f, 1) != -1)
	{
		return true;
	}
	return false;
}

bool func_192()
{
	func_203();
	func_202(&uLocal_393, "AMB@PROP_HUMAN_SEAT_CHAIR@MALE@GENERIC@BASE");
	func_202(&uLocal_393, "AMB@PROP_HUMAN_SEAT_CHAIR@MALE@GENERIC@EXIT");
	func_202(&uLocal_393, sLocal_377);
	func_202(&uLocal_393, sLocal_361);
	func_200(&uLocal_393, iLocal_83);
	func_200(&uLocal_393, iLocal_84);
	func_200(&uLocal_393, iLocal_85);
	func_202(&uLocal_393, sLocal_360);
	func_202(&uLocal_393, sLocal_359);
	func_202(&uLocal_393, sLocal_378);
	func_202(&uLocal_393, "RANDOM@BICYCLE_THIEF@IDLE_A");
	if (func_196(&uLocal_393))
	{
		func_193();
		return true;
	}
	return false;
}

void func_193()
{
	iLocal_62 = PED::CREATE_PED(26, iLocal_83, vLocal_69, fLocal_75, 1, true);
	set_blocking_of_non_temporary_events(iLocal_62, true);
	set_ped_can_be_targetted(iLocal_62, false);
	set_ped_flee_attributes(iLocal_62, 8, true);
	set_ped_flee_attributes(iLocal_62, 128, true);
	set_ped_flee_attributes(iLocal_62, 512, true);
	stop_ped_speaking(iLocal_62, 1);
	_0x570389D1C3DE3C6B(iLocal_62);
	set_ped_money(iLocal_62, false);
	set_entity_only_damaged_by_player(iLocal_62, true);
	if (iLocal_83 == joaat("a_m_y_genstreet_01"))
	{
		set_ped_component_variation(iLocal_62, false, true, false, 0);
		set_ped_component_variation(iLocal_62, 3, false, 3, 0);
		set_ped_component_variation(iLocal_62, 4, false, 2, 0);
	}
	if (iLocal_83 == joaat("a_m_y_business_02"))
	{
		set_ped_component_variation(iLocal_62, false, true, false, 0);
		set_ped_component_variation(iLocal_62, 2, true, false, 0);
		set_ped_component_variation(iLocal_62, 3, true, false, 0);
		set_ped_component_variation(iLocal_62, 4, true, false, 0);
		set_ped_component_variation(iLocal_62, 8, false, false, 0);
	}
	add_relationship_group("theAssailant", &iLocal_86);
	iLocal_63 = PED::CREATE_PED(26, iLocal_84, vLocal_72, fLocal_78, 1, true);
	set_entity_load_collision_flag(iLocal_63, true);
	set_blocking_of_non_temporary_events(iLocal_63, true);
	set_entity_is_target_priority(iLocal_63, 1, 0f);
	give_weapon_to_ped(iLocal_63, joaat("weapon_pistol"), -1, true, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_63, 13, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_63, 17, false);
	set_ped_dies_when_injured(iLocal_63, true);
	PED::SET_PED_CONFIG_FLAG(iLocal_63, 42, true);
	PED::SET_PED_CONFIG_FLAG(iLocal_63, 137, true);
	set_ped_flee_attributes(iLocal_63, 128, true);
	set_ped_flee_attributes(iLocal_63, 2, false);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_63, iLocal_86);
	stop_ped_speaking(iLocal_63, 1);
	if (!is_string_null(sLocal_120))
	{
		set_ambient_voice_name(iLocal_62, sLocal_120);
	}
	set_ambient_voice_name(iLocal_63, sLocal_119);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, 45677184, iLocal_86);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, 1191392768, iLocal_86);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_86, 45677184);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_86, 1191392768);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_86, 1862763509);
	switch (func_106())
	{
		case 0:
			func_195(&uLocal_194, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
			break;
		
		case 1:
			func_195(&uLocal_194, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
			break;
		
		case 2:
			func_195(&uLocal_194, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
			break;
	}
	func_195(&uLocal_194, 1, iLocal_63, sLocal_118, 0, 1);
	func_195(&uLocal_194, 2, iLocal_62, sLocal_117, 0, 1);
	if (iLocal_47 == 2)
	{
		set_ped_flee_attributes(iLocal_63, 1, false);
	}
	if (iLocal_90 == 1 || iLocal_90 == 4)
	{
		func_194();
	}
	if (iLocal_90 == 3)
	{
		vLocal_125 = {-325.4189f, -828.8596f, 31.1f};
		vLocal_128 = {0f, 0f, 180f};
		iLocal_131 = create_synchronized_scene(vLocal_125, vLocal_128, 2);
		task_synchronized_scene(iLocal_63, iLocal_131, "AMB@PROP_HUMAN_SEAT_CHAIR@MALE@GENERIC@BASE", "base", 1000f, -1000f, 0, 0, 1000f, 0);
	}
	if (iLocal_90 == 4)
	{
		disable_navmesh_in_area(Vector(28.5315f, -1027.565f, 37.1197f) - Vector(1f, 1f, 1f), Vector(28.5315f, -1027.565f, 37.1197f) + Vector(1f, 1f, 1f), 1);
	}
}

void func_194()
{
	Vector3 vVar0;
	
	set_entity_coords_no_offset(iLocal_63, get_anim_initial_offset_position(sLocal_359, sLocal_365, vLocal_371, vLocal_374, 0, 2), 0, 0, 1);
	vVar0 = {get_anim_initial_offset_rotation(sLocal_359, sLocal_365, vLocal_371, vLocal_374, 0, 2)};
	if (vVar0.z < 0f)
	{
		vVar0.z += 360f;
	}
	set_entity_heading(iLocal_63, vVar0.z);
	set_entity_coords_no_offset(iLocal_62, get_anim_initial_offset_position(sLocal_359, sLocal_366, vLocal_371, vLocal_374, 0, 2), 0, 0, 1);
	vVar0 = {get_anim_initial_offset_rotation(sLocal_359, sLocal_366, vLocal_371, vLocal_374, 0, 2)};
	if (vVar0.z < 0f)
	{
		vVar0.z += 360f;
	}
	set_entity_heading(iLocal_62, vVar0.z);
	task_play_anim(iLocal_63, sLocal_359, sLocal_365, 1000f, -1000f, -1, 9, 0, 0, 0, 0);
	task_play_anim(iLocal_62, sLocal_359, sLocal_366, 1000f, -1000f, -1, 9, 0, 0, 0, 0);
}

void func_195(auto uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

bool func_196(auto uParam0)
{
	int iVar0;
	
	if (!*uParam0.f_271)
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (is_bit_set(*uParam0[iVar0 /*18*/], 30))
		{
			if (!is_bit_set(*uParam0[iVar0 /*18*/], 29))
			{
				return false;
			}
			if (!func_197(uParam0[iVar0 /*18*/]))
			{
				return false;
			}
		}
		iVar0++;
	}
	*uParam0.f_271 = 0;
	return true;
}

int func_197(auto uParam0)
{
	return func_198(*uParam0, uParam0.f_2, *uParam0.f_1);
}

int func_198(int iParam0, char* sParam1, int iParam2)
{
	if (is_bit_set(iParam0, 30))
	{
		if (is_bit_set(iParam0, 29))
		{
			switch (func_199(iParam0))
			{
				case 0:
					return has_model_loaded(iParam2);
					break;
				
				case 1:
					return has_anim_dict_loaded(sParam1);
					break;
				
				case 2:
					return has_clip_set_loaded(sParam1);
					break;
				
				case 3:
					return has_streamed_texture_dict_loaded(sParam1);
					break;
				
				case 4:
					return has_vehicle_recording_been_loaded(iParam2, sParam1);
					break;
				
				case 5:
					return get_is_waypoint_recording_loaded(sParam1);
					break;
				
				case 6:
					return SCRIPT::REQUEST_SCRIPT_audio_bank(sParam1, is_bit_set(iParam0, 27));
					break;
				
				case 7:
					return _has_streamed_script_loaded(iParam2);
					break;
				
				case 8:
					return has_additional_text_loaded(iParam2);
					break;
				
				case 9:
					return has_ptfx_asset_loaded();
					break;
				
				default:
					break;
			}
		}
		else
		{
			return false;
		}
	}
	return false;
}

int func_199(int iParam0)
{
	int iVar0;
	
	iVar0 = false;
	while (iVar0 < 10)
	{
		if (is_bit_set(iParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_200(auto uParam0, int iParam1)
{
	func_201(uParam0, 0, iParam1, "NULL", 0);
}

void func_201(auto uParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (is_bit_set(*uParam0[iVar0 /*18*/], 30))
		{
			if (is_bit_set(*uParam0[iVar0 /*18*/], iParam1))
			{
				if (iParam2 != -1)
				{
					if (*(uParam0[iVar0 /*18*/]).f_1 == iParam2)
					{
						return;
					}
				}
				if (iParam1 != 4)
				{
					if (!are_strings_equal(sParam3, "NULL"))
					{
						if (are_strings_equal(uParam0[iVar0 /*18*/].f_2, sParam3))
						{
							return;
						}
					}
				}
				if (iParam1 == 9)
				{
					return;
				}
			}
		}
		iVar0++;
	}
	if (!*uParam0.f_271)
	{
		*uParam0.f_271 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!is_bit_set(*uParam0[iVar0 /*18*/], 30))
		{
			StringCopy(uParam0[iVar0 /*18*/].f_2, sParam3, 64);
			*(uParam0[iVar0 /*18*/]).f_1 = iParam2;
			*uParam0[iVar0 /*18*/] = iParam4;
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0[iVar0 /*18*/], iParam1);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0[iVar0 /*18*/], 30);
			return;
		}
		iVar0++;
	}
}

void func_202(auto uParam0, char* sParam1)
{
	func_201(uParam0, 1, -1, sParam1, 0);
}

void func_203()
{
	func_256();
	GAMEPLAY::GAMEPLAY::SET_BIT(&iLocal_144, 3);
	GAMEPLAY::GAMEPLAY::SET_BIT(&iLocal_144, 4);
	GAMEPLAY::GAMEPLAY::SET_BIT(&iLocal_144, true);
	if (iLocal_90 == 1)
	{
		sLocal_359 = "RANDOM@MUGGING1";
		sLocal_365 = "STRUGGLE_Loop_A_Thief";
		sLocal_366 = "STRUGGLE_Loop_A_Shopkeeper";
		sLocal_368 = "FLEE_BACKWARD_Shopkeeper";
		sLocal_367 = "FLEE_BACKWARD_Thief";
		sLocal_370 = "FLEE_FORWARD_Shopkeeper";
		sLocal_369 = "FLEE_FORWARD_Thief";
		func_205();
		iLocal_192 = 200;
		iLocal_48 = 2;
		vLocal_145 = {-132.2607f, -1628.336f, 31.2107f};
		iLocal_83 = joaat("a_m_y_business_02");
		iLocal_84 = joaat("g_m_y_strpunk_01");
		vLocal_69 = {-138.814f, -1635.975f, 31.357f};
		fLocal_75 = 318.519f;
		vLocal_72 = {-129.8504f, -1629.676f, 31.2506f};
		fLocal_78 = 98f;
		vLocal_371 = {vLocal_69};
		vLocal_374 = {0f, 0f, fLocal_75};
		vLocal_166 = {-103.8951f, -1593.239f, 30.49198f};
		vLocal_169 = {-89.29615f, -1575.444f, 32.30938f};
		vLocal_172 = {-152.0367f, -1654.379f, 31.73599f};
		vLocal_175 = {-169.8183f, -1669.556f, 33.94173f};
		vLocal_178 = {-152.0367f, -1654.379f, 31.73599f};
		vLocal_181 = {-103.8951f, -1593.239f, 30.49198f};
		fLocal_79 = 340.0645f;
		vLocal_80 = {-151.0793f, -1650.322f, 31.6504f};
		vLocal_87 = {-133.6872f, -1630.245f, 31.2527f};
		iLocal_85 = joaat("prop_ld_wallet_pickup");
		sLocal_103 = "REMG1AU";
		sLocal_104 = "REMG1_VIC";
		sLocal_105 = "REMG1_SHT";
		sLocal_106 = "REMG1_ASK";
		sLocal_107 = "REMG1_DRP";
		sLocal_108 = "REMG1_OHY";
		sLocal_109 = "REMG1_THK";
		sLocal_110 = "REMG1_GIV";
		sLocal_111 = "REMG1_MUGA";
		sLocal_112 = "REMG1_WHO";
		switch (func_106())
		{
			case 0:
				sLocal_115 = "REMG1_HOM";
				sLocal_116 = "REMG1_WAM";
				break;
			
			case 1:
				sLocal_115 = "REMG1_HOF";
				sLocal_116 = "REMG1_WAF";
				break;
			
			case 2:
				sLocal_115 = "REMG1_HOT";
				sLocal_116 = "REMG1_WAT";
				break;
		}
		sLocal_119 = "G_M_Y_StreetPunk_01_BLACK_MINI_03";
		sLocal_120 = "A_M_Y_Business_02_WHITE_FULL_01";
		sLocal_117 = "MuggedMan";
		sLocal_118 = "MuggerGang";
		iLocal_50 = 1;
		sLocal_378 = "move_m@hurry@b";
	}
	if (iLocal_90 == 2)
	{
		sLocal_359 = "random@mugging2";
		sLocal_361 = "random@mugging2";
		iLocal_48 = 1;
		vLocal_145 = {287.888f, -284.603f, 52.967f};
		iLocal_83 = joaat("a_f_y_genhot_01");
		iLocal_84 = joaat("g_m_y_strpunk_01");
		vLocal_69 = {288.6728f, -282.4782f, 52.9707f};
		fLocal_75 = 260.7569f;
		vLocal_72 = {290.5373f, -283.198f, 52.9799f};
		fLocal_78 = 45f;
		fLocal_79 = 251f;
		vLocal_80 = {297.4484f, -261.2914f, 53.0037f};
		iLocal_85 = joaat("prop_ld_handbag");
		sLocal_103 = "REMG2AU";
		sLocal_104 = "REMG2_VIC";
		sLocal_105 = "REMG2_SHT";
		sLocal_106 = "REMG2_ASK";
		sLocal_107 = "REMG2_DRP";
		sLocal_108 = "REMG2_OHY";
		sLocal_109 = "REMG2_THK";
		sLocal_110 = "REMG2_GIV";
		sLocal_112 = "REMG2_WHO";
		sLocal_113 = "REMG2_GUN";
		sLocal_114 = "REMG2_FUT";
		switch (func_106())
		{
			case 0:
				sLocal_115 = "REMG2_HOM";
				sLocal_116 = "REMG2_WAM";
				break;
			
			case 1:
				sLocal_115 = "REMG2_HOF";
				sLocal_116 = "REMG2_WAF";
				break;
			
			case 2:
				sLocal_115 = "REMG2_HOT";
				sLocal_116 = "REMG2_WAT";
				break;
		}
		sLocal_119 = "G_M_Y_StreetPunk_01_BLACK_MINI_03";
		sLocal_117 = "MuggedYMan";
		sLocal_118 = "MuggerGang";
		iLocal_50 = 1;
		sLocal_378 = "move_m@hurry@b";
	}
	if (iLocal_47 == 1)
	{
		func_204();
		iLocal_192 = 2000;
		iLocal_48 = 2;
		if (iLocal_90 == 3)
		{
			sLocal_359 = "RANDOM@MUGGING3";
			vLocal_145 = {-317.1964f, -824.0751f, 31.4284f};
			iLocal_83 = joaat("a_f_y_hipster_01");
			iLocal_84 = joaat("a_m_o_tramp_01");
			vLocal_69 = {-310.9292f, -833.8435f, 30.6261f};
			fLocal_75 = 80.7161f;
			vLocal_72 = {-322.5526f, -827.186f, 30.5857f};
			fLocal_78 = 336.5502f;
			fLocal_79 = 81.8694f;
			vLocal_80 = {-322.3941f, -835.7213f, 30.6001f};
			vLocal_87 = {-320.9667f, -832.1209f, 30.5979f};
			iLocal_85 = joaat("prop_ld_purse_01");
			sLocal_103 = "REMG3AU";
			sLocal_104 = "REMG3_VIC";
			sLocal_105 = "REMG3_SHT";
			sLocal_106 = "REMG3_ASK";
			sLocal_107 = "REMG3_DRP";
			sLocal_108 = "REMG3_OHY";
			sLocal_109 = "REMG3_THK";
			sLocal_110 = "REMG3_GIV";
			sLocal_111 = "REMG3_MUGB";
			sLocal_112 = "REMG3_WHO";
			sLocal_113 = "REMG3_GUN";
			sLocal_114 = "REMG3_FUT";
			switch (func_106())
			{
				case 0:
					sLocal_115 = "REMG3_HOM";
					sLocal_116 = "REMG3_WAM";
					break;
				
				case 1:
					sLocal_115 = "REMG3_HOF";
					sLocal_116 = "REMG3_WAF";
					break;
				
				case 2:
					sLocal_115 = "REMG3_HOT";
					sLocal_116 = "REMG3_WAT";
					break;
			}
			sLocal_119 = "G_M_Y_Korean_02_Korean_MINI_02";
			sLocal_117 = "MUGGEDHIPSTER";
			sLocal_118 = "MuggerTramp";
			iLocal_50 = 1;
			sLocal_378 = "move_f@hurry@a";
		}
		if (iLocal_90 == 4)
		{
			func_204();
			sLocal_359 = "RANDOM@MUGGING4";
			sLocal_365 = "STRUGGLE_Loop_B_Thief";
			sLocal_366 = "STRUGGLE_Loop_B_Shopkeeper";
			sLocal_368 = "FLEE_BACKWARD_Shopkeeper";
			sLocal_367 = "FLEE_BACKWARD_Thief";
			sLocal_370 = "FLEE_FORWARD_Shopkeeper";
			sLocal_369 = "FLEE_FORWARD_Thief";
			vLocal_145 = {32.8802f, -1016.061f, 28.4527f};
			iLocal_83 = joaat("a_f_m_tourist_01");
			iLocal_84 = joaat("g_m_y_armgoon_02");
			vLocal_69 = {32.2169f, -1020.864f, 28.456f};
			fLocal_75 = 159.1445f;
			vLocal_371 = {vLocal_69};
			vLocal_374 = {0f, 0f, fLocal_75};
			vLocal_72 = {38.1933f, -1023.579f, 28.4889f};
			fLocal_78 = 60.1372f;
			fLocal_79 = 248f;
			vLocal_80 = {42.5323f, -990.353f, 28.248f};
			vLocal_166 = {38.15186f, -1001.485f, 28.42276f};
			vLocal_169 = {40.13669f, -995.2711f, 30.37197f};
			vLocal_172 = {37.21758f, -1040.354f, 28.41506f};
			vLocal_175 = {19.91492f, -1036.814f, 30.28045f};
			vLocal_178 = {28.4511f, -1035.718f, 28.3329f};
			vLocal_181 = {38.6536f, -1001.073f, 28.407f};
			vLocal_87 = {32.536f, -1020.293f, 28.4576f};
			iLocal_85 = joaat("prop_ld_wallet_pickup");
			sLocal_103 = "REMG4AU";
			sLocal_104 = "REMG4_VIC";
			sLocal_105 = "REMG4_SHT";
			sLocal_106 = "REMG4_ASK";
			sLocal_107 = "REMG4_DRP";
			sLocal_108 = "REMG4_OHY";
			sLocal_109 = "REMG4_THK";
			sLocal_110 = "REMG4_GIV";
			sLocal_111 = "REMG4_MUGB";
			sLocal_112 = "REMG4_WHO";
			sLocal_113 = "REMG4_GUN";
			sLocal_114 = "REMG4_FUT";
			switch (func_106())
			{
				case 0:
					sLocal_115 = "REMG4_HOM";
					sLocal_116 = "REMG4_WAM";
					break;
				
				case 1:
					sLocal_115 = "REMG4_HOF";
					sLocal_116 = "REMG4_WAF";
					break;
				
				case 2:
					sLocal_115 = "REMG4_HOT";
					sLocal_116 = "REMG4_WAT";
					break;
			}
			sLocal_119 = "G_M_Y_ArmGoon_02_White_Armenian_MINI_02";
			sLocal_117 = "MuggedWoman";
			sLocal_118 = "MuggerGang";
			iLocal_50 = 1;
			sLocal_378 = "move_f@hurry@a";
		}
	}
}

void func_204()
{
	sLocal_361 = "RANDOM@ATM_ROBBERY@RETURN_WALLET_FEMALE";
	switch (get_random_int_in_range(false, 3))
	{
		case 0:
			sLocal_362 = "Return_Wallet_Positive_A_Player";
			sLocal_363 = "Return_Wallet_Positive_A_Female";
			sLocal_364 = "Return_Wallet_Positive_A_Cam";
			break;
		
		case 1:
			sLocal_362 = "Return_Wallet_Positive_B_Player";
			sLocal_363 = "Return_Wallet_Positive_B_Female";
			sLocal_364 = "Return_Wallet_Positive_B_Cam";
			break;
		
		case 2:
			sLocal_362 = "Return_Wallet_Positive_C_Player";
			sLocal_363 = "Return_Wallet_Positive_C_Female";
			sLocal_364 = "Return_Wallet_Positive_C_Cam";
			break;
	}
}

void func_205()
{
	sLocal_361 = "RANDOM@ATM_ROBBERY@RETURN_WALLET_MALE";
	switch (get_random_int_in_range(false, 3))
	{
		case 0:
			sLocal_362 = "Return_Wallet_Positive_A_Player";
			sLocal_363 = "Return_Wallet_Positive_A_Male";
			sLocal_364 = "Return_Wallet_Positive_A_Cam";
			break;
		
		case 1:
			sLocal_362 = "Return_Wallet_Positive_B_Player";
			sLocal_363 = "Return_Wallet_Positive_B_Male";
			sLocal_364 = "Return_Wallet_Positive_B_Cam";
			break;
		
		case 2:
			sLocal_362 = "Return_Wallet_Positive_C_Player";
			sLocal_363 = "Return_Wallet_Positive_C_Male";
			sLocal_364 = "Return_Wallet_Positive_C_Cam";
			break;
	}
}

void func_206(int iParam0, auto uParam1)
{
	int iVar0;
	int iVar1;
	
	if (*uParam1 == -99)
	{
		*uParam1 = GAMEPLAY::GET_GAME_TIMER();
	}
	if (does_blip_exist(iParam0))
	{
		iVar0 = GAMEPLAY::GET_GAME_TIMER() - *uParam1;
		if (iVar0 < 5000)
		{
			iVar1 = ceil(to_float(iVar0) / 1000f);
			if (iVar1 * 1000 - iVar0 < 500)
			{
				if (get_blip_alpha(iParam0) != 255)
				{
					set_blip_alpha(iParam0, 255);
				}
			}
			else if (get_blip_alpha(iParam0) != 0)
			{
				set_blip_alpha(iParam0, 0);
			}
		}
		else if (*uParam1 != -100)
		{
			*uParam1 = -100;
			if (get_blip_alpha(iParam0) != 255)
			{
				set_blip_alpha(iParam0, 255);
			}
		}
	}
}

void func_207(auto uParam0)
{
	int iVar0;
	
	if (*uParam0.f_271)
	{
		if ((get_frame_count() >= *uParam0.f_272 + *uParam0.f_273 || is_bit_set(Global_91278.f_20, 2)) || is_bit_set(Global_91278.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (is_bit_set(*uParam0[iVar0 /*18*/], 30))
				{
					if (!is_bit_set(*uParam0[iVar0 /*18*/], 29))
					{
						func_208(uParam0[iVar0 /*18*/]);
						*uParam0.f_272 = get_frame_count();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_208(int iParam0)
{
	func_209(iParam0, iParam0.f_2, *iParam0.f_1);
}

void func_209(int iParam0, char* sParam1, int iParam2)
{
	if (is_bit_set(*iParam0, 30))
	{
		switch (func_199(*iParam0))
		{
			case 0:
				request_model(iParam2);
				break;
			
			case 1:
				request_anim_dict(sParam1);
				break;
			
			case 2:
				request_clip_set(sParam1);
				break;
			
			case 3:
				request_streamed_texture_dict(sParam1, is_bit_set(*iParam0, 28));
				break;
			
			case 4:
				request_vehicle_recording(iParam2, sParam1);
				break;
			
			case 5:
				request_waypoint_recording(sParam1);
				break;
			
			case 6:
				SCRIPT::REQUEST_SCRIPT_audio_bank(sParam1, is_bit_set(*iParam0, 27));
				break;
			
			case 7:
				_request_streamed_script(iParam2);
				break;
			
			case 8:
				request_additional_text(sParam1, iParam2);
				break;
			
			case 9:
				request_ptfx_asset();
				break;
			
			default:
				break;
		}
		GAMEPLAY::GAMEPLAY::SET_BIT(iParam0, 29);
	}
}

void func_210(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_175();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_212(iParam0);
	_0x65D2EBB47E1CEC21(0);
	set_random_event_flag(1);
	Global_101140 = 0;
	func_211();
}

void func_211()
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
		{
			set_vehicle_model_is_suppressed(ENTITY::GET_ENTITY_MODEL(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0)), true);
		}
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
	}
}

void func_212(int iParam0)
{
	Global_101143 = iParam0;
}

bool func_213(Vector3 vParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	Vector3 vVar1;
	int iVar4;
	Vector3 vVar5;
	int iVar8;
	
	if (!Global_138022)
	{
		return false;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_175();
	}
	if (iParam3 == -1)
	{
		return false;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_253())
		{
			return false;
		}
	}
	vLocal_43 = {vParam0};
	iVar0 = false;
	if (!iVar0)
	{
		if (is_player_playing(player_id()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			vVar1 = {get_entity_coords(PLAYER::PLAYER_PED_ID(), 1)};
			if (vmag2(get_entity_velocity(PLAYER::PLAYER_PED_ID())) > 1369f && !func_169())
			{
				return false;
			}
		}
		if (!Global_101154.f_7775)
		{
			return false;
		}
		if (func_180(0))
		{
			return false;
		}
		if (func_170())
		{
			return false;
		}
		if (func_252())
		{
			return false;
		}
		if (Global_101143 != -1)
		{
			return false;
		}
		if (func_108(func_106()))
		{
			if (func_162(100f, 1) != -1)
			{
				return false;
			}
		}
		if (is_player_playing(player_id()) && !iParam6)
		{
			if (vVar1.z - vLocal_43.z > 50f)
			{
				return false;
			}
		}
		if (!func_251(iParam3))
		{
			return false;
		}
		if (func_108(func_106()))
		{
			if (func_250(func_106()) == 4 || func_250(func_106()) == 5)
			{
				return false;
			}
		}
		if (func_108(func_106()))
		{
			if (!func_249(iParam3, iParam4, 145))
			{
				return false;
			}
		}
		if (!func_248(Global_101154.f_29520.f_43[iParam3]))
		{
			return false;
		}
		if (GAMEPLAY::GET_GAME_TIMER() - Global_101145 < 150000)
		{
			if (iParam3 != 30)
			{
				return false;
			}
		}
		if (func_247())
		{
			return false;
		}
		if (get_mission_flag())
		{
			return false;
		}
		if (get_random_event_flag())
		{
			return false;
		}
		if (!func_238(4))
		{
			return false;
		}
		if (!func_157(5))
		{
			return false;
		}
		if (func_237(iParam3, iParam4) && !iParam5)
		{
			return false;
		}
		if (Global_3 && iParam3 != 10)
		{
			return false;
		}
		if (is_valid_interior(get_interior_from_entity(PLAYER::PLAYER_PED_ID())))
		{
			if ((get_interior_from_entity(PLAYER::PLAYER_PED_ID()) == get_interior_at_coords(377.153f, -717.567f, 10.0536f) || get_interior_from_entity(PLAYER::PLAYER_PED_ID()) == get_interior_at_coords(320.9934f, 265.2515f, 82.1221f)) || get_interior_from_entity(PLAYER::PLAYER_PED_ID()) == get_interior_at_coords(-1425.564f, -244.3f, 15.8053f))
			{
				return false;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_237(0, 0))
		{
			return false;
		}
		if (Global_25266)
		{
			return false;
		}
		if (func_251(30) && !func_237(30, 0))
		{
			if (iParam3 != 30)
			{
				if (vdist2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return false;
				}
			}
		}
		if (func_108(func_106()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				vVar5 = {Global_101154.f_1826.f_539.f_1528[iVar4 /*3*/]};
				iVar8 = Global_101154.f_1826.f_539.f_1524[iVar4];
				if (func_236(iVar8))
				{
					if (func_214(iVar4))
					{
						if (!func_20(vVar5, 0f, 0f, 0f, 0))
						{
							if (vdist2(get_entity_coords(PLAYER::PLAYER_PED_ID(), 0), vVar5) < 210f * 210f)
							{
								if (func_106() != iVar4)
								{
									return false;
								}
							}
						}
					}
				}
				iVar4++;
			}
		}
	}
	return true;
}

int func_214(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_101154.f_1826.f_539.f_1524[iParam0];
	return func_215(iVar0);
}

int func_215(int iParam0)
{
	return func_216(iParam0, 1);
}

bool func_216(int iParam0, int iParam1)
{
	auto uVar0;
	auto uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_236(iParam0))
	{
		return false;
	}
	func_217(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return true;
	}
	return false;
}

void func_217(int iParam0, auto uParam1, auto uParam2, auto uParam3, auto uParam4, auto uParam5, auto uParam6)
{
	func_218(func_229(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_218(int iParam0, int iParam1, auto uParam2, auto uParam3, auto uParam4, auto uParam5, auto uParam6, auto uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_228(iParam0, iParam1))
	{
		iVar0 = func_227(iParam1);
		iVar1 = func_225(iParam0);
		iVar2 = func_225(iParam0) - func_225(iParam1);
		iVar3 = func_227(iParam0) - func_227(iParam1);
		iVar4 = func_224(iParam0) - func_224(iParam1);
		iVar5 = func_223(iParam0) - func_223(iParam1);
		iVar6 = func_222(iParam0) - func_222(iParam1);
		iVar7 = func_221(iParam0) - func_221(iParam1);
	}
	else
	{
		iVar0 = func_227(iParam0);
		iVar1 = func_225(iParam1);
		iVar2 = func_225(iParam1) - func_225(iParam0);
		iVar3 = func_227(iParam1) - func_227(iParam0);
		iVar4 = func_224(iParam1) - func_224(iParam0);
		iVar5 = func_223(iParam1) - func_223(iParam0);
		iVar6 = func_222(iParam1) - func_222(iParam0);
		iVar7 = func_221(iParam1) - func_221(iParam0);
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
		iVar4 += func_220(iVar0, iVar1);
		iVar3--;
		iVar0 = round(func_219(to_float(iVar0 + 1), 0f, 12f));
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

float func_219(Vector3 fParam0, float fParam1, float fParam2)
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

int func_220(int iParam0, int iParam1)
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

int func_221(int iParam0)
{
	return shift_right(iParam0, 20) & 63;
}

int func_222(int iParam0)
{
	return shift_right(iParam0, 14) & 63;
}

int func_223(int iParam0)
{
	return shift_right(iParam0, 9) & 31;
}

int func_224(int iParam0)
{
	return shift_right(iParam0, 4) & 31;
}

auto func_225(int iParam0)
{
	return shift_right(iParam0, 26) & 31 * func_226(is_bit_set(iParam0, 31), -1, 1) + 2011;
}

int func_226(int iParam0, int iParam1, int iParam2)
{
	if (iParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_227(int iParam0)
{
	return (iParam0 && 15);
}

bool func_228(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_236(iParam1) || !func_236(iParam0))
	{
		return true;
	}
	iVar0 = func_225(iParam0);
	iVar1 = func_225(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_227(iParam0);
	iVar1 = func_227(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_224(iParam0);
	iVar1 = func_224(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_223(iParam0);
	iVar1 = func_223(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_222(iParam0);
	iVar1 = func_222(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_221(iParam0);
	iVar1 = func_221(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	return false;
}

auto func_229()
{
	auto uVar0;
	
	func_235(&uVar0, get_clock_seconds());
	func_234(&uVar0, get_clock_minutes());
	func_233(&uVar0, get_clock_hours());
	func_232(&uVar0, get_clock_day_of_month());
	func_231(&uVar0, get_clock_month());
	func_230(&uVar0, get_clock_year());
	return uVar0;
}

void func_230(auto uParam0, int iParam1)
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

void func_231(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 -= *uParam0 & 15;
	*uParam0 = (*uParam0 || iParam1);
}

void func_232(auto uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_227(*uParam0);
	iVar1 = func_225(*uParam0);
	if (iParam1 < 1 || iParam1 > func_220(iVar0, iVar1))
	{
		return;
	}
	*uParam0 -= *uParam0 & 496;
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

void func_233(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 -= *uParam0 & 15872;
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_234(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 -= *uParam0 & 1032192;
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_235(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 -= *uParam0 & 66060288;
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

bool func_236(int iParam0)
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
	iVar0 = func_221(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_222(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_223(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_225(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return false;
	}
	iVar4 = func_227(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_224(iParam0);
	if (iVar5 < 1 || iVar5 > func_220(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

bool func_237(int iParam0, int iParam1)
{
	if (is_bit_set(Global_101154.f_29520.f_8[iParam0], iParam1))
	{
		return true;
	}
	return false;
}

bool func_238(int iParam0)
{
	int iVar0;
	
	if (is_player_playing(player_id()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = func_106();
				if (!func_108(iVar0))
				{
					return false;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!is_player_ready_for_cutscene(player_id()) || is_entity_in_air(PLAYER::PLAYER_PED_ID())) || is_ped_getting_into_a_vehicle(PLAYER::PLAYER_PED_ID())) || is_ped_ragdoll(PLAYER::PLAYER_PED_ID())) || is_ped_falling(PLAYER::PLAYER_PED_ID())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || is_ped_in_combat(PLAYER::PLAYER_PED_ID(), false)) || func_246()) || Global_100201) || Global_25122) || func_245()) || func_43(8, -1)) || func_244()) || func_243()) || func_242()) || func_241()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 1:
						if (((((((((is_player_being_arrested(player_id(), 1) || func_246()) || Global_25122) || func_245()) || func_43(8, -1)) || func_242()) || func_244()) || func_243()) || func_241()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!is_player_ready_for_cutscene(player_id()) || is_entity_in_air(PLAYER::PLAYER_PED_ID())) || is_ped_getting_into_a_vehicle(PLAYER::PLAYER_PED_ID())) || is_ped_ragdoll(PLAYER::PLAYER_PED_ID())) || is_ped_falling(PLAYER::PLAYER_PED_ID())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || is_ped_in_combat(PLAYER::PLAYER_PED_ID(), false)) || func_246()) || Global_100201) || Global_25122) || func_245()) || func_43(8, -1)) || func_242()) || func_244()) || func_243()) || func_241()) || Global_101154.f_6378.f_919[iVar0] == 5) || Global_36258 != -1)
						{
							return false;
						}
						break;
					
					case 3:
						if ((((((((((((is_ped_ragdoll(PLAYER::PLAYER_PED_ID()) || is_ped_falling(PLAYER::PLAYER_PED_ID())) || is_player_being_arrested(player_id(), 1)) || is_ped_in_combat(PLAYER::PLAYER_PED_ID(), false)) || func_246()) || Global_100201) || Global_25122) || func_245()) || func_43(8, -1)) || func_244()) || func_243()) || func_241()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 4:
						if (((((func_246() || get_player_wanted_level(player_id()) > 0) || func_43(8, -1)) || func_241()) || func_240()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 5:
						if ((((func_43(8, -1) || func_244()) || func_243()) || func_240()) || func_239())
						{
							return false;
						}
						if ((is_player_switch_in_progress() && get_player_switch_type() != 3) && get_player_switch_state() < 8)
						{
							return false;
						}
						break;
					
					case 6:
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
						{
							if ((((((((((((((is_ped_in_combat(PLAYER::PLAYER_PED_ID(), false) || get_player_wanted_level(player_id()) > 0) || is_entity_in_air(PLAYER::PLAYER_PED_ID())) || is_ped_ragdoll(PLAYER::PLAYER_PED_ID())) || is_ped_falling(PLAYER::PLAYER_PED_ID())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || func_246()) || Global_25122) || func_245()) || func_43(8, -1)) || func_243()) || func_242()) || func_241()) || Global_101154.f_6378.f_919[iVar0] == 5)
							{
								return false;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((is_ped_in_combat(PLAYER::PLAYER_PED_ID(), false) || !is_player_control_on(player_id())) || !is_player_ready_for_cutscene(player_id())) || !is_screen_faded_in()) || is_entity_in_air(PLAYER::PLAYER_PED_ID())) || is_ped_ragdoll(PLAYER::PLAYER_PED_ID())) || is_ped_falling(PLAYER::PLAYER_PED_ID())) || is_player_being_arrested(player_id(), 1)) || func_246()) || func_243()) || Global_100201) || Global_25122) || func_245()) || Global_36839) || func_43(8, -1)) || func_242()) || func_240()) || func_241()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((is_ped_in_combat(PLAYER::PLAYER_PED_ID(), false) || !is_player_control_on(player_id())) || !is_player_ready_for_cutscene(player_id())) || !is_screen_faded_in()) || is_player_wanted_level_greater(player_id(), 0)) || is_entity_in_air(PLAYER::PLAYER_PED_ID())) || is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1)) || is_ped_ragdoll(PLAYER::PLAYER_PED_ID())) || is_ped_falling(PLAYER::PLAYER_PED_ID())) || is_ped_swimming(PLAYER::PLAYER_PED_ID())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || func_246()) || Global_100201) || Global_25122) || func_245()) || func_43(8, -1)) || func_242()) || func_240()) || func_244()) || func_243()) || func_241())
						{
							return false;
						}
						break;
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
	else
	{
		return false;
	}
	return true;
}

auto func_239()
{
	return Global_91317.f_1;
}

int func_240()
{
	if (Global_88533 != -1)
	{
		return is_bit_set(Global_82399[Global_88533 /*34*/].f_15, 13);
	}
	return false;
}

bool func_241()
{
	if (_get_number_of_instances_of_streamed_script(joaat("player_timetable_scene")) > 0)
	{
		return true;
	}
	return false;
}

bool func_242()
{
	if (Global_69749)
	{
		return true;
	}
	else if (Global_55743 && !Global_55749)
	{
		return true;
	}
	return false;
}

int func_243()
{
	return Global_91330.f_297 > 0;
}

int func_244()
{
	return Global_91330.f_296 > 0;
}

auto func_245()
{
	return Global_1315913;
}

int func_246()
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_89089.f_44 == 1;
	}
	return false;
}

bool func_247()
{
	func_40();
	if (Global_3088[Global_14413 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return true;
	}
	return false;
}

int func_248(int iParam0)
{
	return func_228(func_229(), iParam0);
}

int func_249(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_106();
	if (iParam2 != 145 && ((iParam2 == 0 || iParam2 == 1) || iParam2 == 2))
	{
		iVar1 = iParam2;
	}
	switch (iParam0)
	{
		case 18:
			if (iVar1 == 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 19:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 20:
			if (iVar1 != 1)
			{
				iVar0 = 1;
			}
			break;
		
		case 28:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 13:
			if (iVar1 == 0)
			{
				if (iParam1 == 2)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 1;
				}
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 22:
			if (iParam1 == 2 || iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 30:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_250(int iParam0)
{
	if (!func_108(iParam0))
	{
		return 7;
	}
	return Global_101154.f_6378.f_919[iParam0];
}

int func_251(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_253())
		{
			return false;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		iVar1 = is_bit_set(Global_101154.f_29520, iVar0);
	}
	else
	{
		iVar0 -= 31;
		iVar1 = is_bit_set(Global_101154.f_29520.f_1, iVar0);
	}
	return iVar1;
}

bool func_252()
{
	int iVar0;
	
	if (Global_25270)
	{
		if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
		{
			iVar0 = get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0);
			if (is_vehicle_driveable(iVar0, 0))
			{
				if (!PED::IS_PED_INJURED(get_ped_in_vehicle_seat(iVar0, false)))
				{
					return true;
				}
			}
		}
	}
	return false;
}

bool func_253()
{
	int iVar0;
	
	if (network_is_signed_in())
	{
		if (_network_are_ros_available())
		{
			if (_0x593570C289A77688())
			{
				stat_get_int(joaat("sp_unlock_exclus_content"), &iVar0, -1);
				GAMEPLAY::GAMEPLAY::SET_BIT(&iVar0, 2);
				GAMEPLAY::GAMEPLAY::SET_BIT(&iVar0, 4);
				GAMEPLAY::GAMEPLAY::SET_BIT(&iVar0, 6);
				GAMEPLAY::GAMEPLAY::SET_BIT(&Global_25, 2);
				GAMEPLAY::GAMEPLAY::SET_BIT(&Global_25, 4);
				GAMEPLAY::GAMEPLAY::SET_BIT(&Global_25, 6);
				stat_set_int(joaat("sp_unlock_exclus_content"), iVar0, 1);
				if (_0x5AA3BEFA29F03AD4())
				{
					iVar0 = get_profile_setting(866);
					GAMEPLAY::GAMEPLAY::SET_BIT(&iVar0, false);
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

int func_254(int iParam0)
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return false;
	}
	return is_bit_set(Global_101154.f_17264[iParam0 /*6*/], 3);
}

int func_255(int iParam0)
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return false;
	}
	return is_bit_set(Global_101154.f_17264[iParam0 /*6*/], false);
}

void func_256()
{
	if (is_player_playing(player_id()))
	{
		if (vdist(vLocal_122, vLocal_91) < 20f)
		{
			iLocal_90 = true;
			iLocal_47 = 2;
		}
		if (vdist(vLocal_122, vLocal_94) < 20f)
		{
			iLocal_90 = 2;
			iLocal_47 = 3;
		}
		if (vdist(vLocal_122, vLocal_97) < 20f)
		{
			iLocal_90 = 3;
			iLocal_47 = 1;
		}
		if (vdist(vLocal_122, vLocal_100) < 20f)
		{
			iLocal_90 = 4;
			iLocal_47 = 1;
		}
	}
}

void func_257(auto uParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		*uParam0.f_273 = iParam1;
	}
}

void func_258()
{
	if (iLocal_156)
	{
		if (iLocal_50)
		{
			set_model_as_no_longer_needed(iLocal_83);
			set_model_as_no_longer_needed(iLocal_84);
			set_model_as_no_longer_needed(iLocal_85);
		}
		if (!PED::IS_PED_INJURED(iLocal_63))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				task_smart_flee_ped(iLocal_63, PLAYER::PLAYER_PED_ID(), 150f, -1, 0, 0);
			}
			set_ped_keep_task(iLocal_63, true);
			if (!iLocal_60)
			{
				set_ped_money(iLocal_63, iLocal_192);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_62))
		{
			if (!PED::IS_PED_INJURED(iLocal_62))
			{
				set_ped_can_be_targetted(iLocal_62, true);
				if (get_script_task_status(iLocal_62, -1146898486) == 7 && get_script_task_status(iLocal_62, 242628503) == 7)
				{
					open_sequence_task(&iLocal_121);
					if (is_ped_ducking(iLocal_62))
					{
						task_toggle_duck(0, 0);
					}
					task_look_at_entity(false, PLAYER::PLAYER_PED_ID(), 9000, 0, 2);
					task_smart_flee_coord(false, vLocal_122, 250f, -1, 0, 0);
					close_sequence_task(iLocal_121);
					task_perform_sequence(iLocal_62, iLocal_121);
					clear_sequence_task(&iLocal_121);
					set_ped_keep_task(iLocal_62, true);
					if (!iLocal_154 && !iLocal_148)
					{
						if (is_scripted_conversation_ongoing())
						{
							func_89();
						}
					}
				}
			}
		}
		wait(false);
		if (does_blip_exist(iLocal_66))
		{
			remove_blip(&iLocal_66);
		}
		if (does_blip_exist(iLocal_65))
		{
			remove_blip(&iLocal_65);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_64))
		{
			set_object_as_no_longer_needed(&iLocal_64);
		}
		if (does_blip_exist(iLocal_67))
		{
			remove_blip(&iLocal_67);
		}
	}
	if (iLocal_379 != -1)
	{
		if (_0x0EAEB0DB4B132399(iLocal_379))
		{
			remove_navmesh_blocking_object(iLocal_379);
		}
		iLocal_379 = -1;
	}
	if (func_174())
	{
		set_create_random_cops(true);
		set_wanted_level_multiplier(1f);
	}
	func_29(&uLocal_380, 0, 0);
	func_92(0, 1, 1, 0);
	func_264(-1);
	func_259(&uLocal_393, 0);
	if (iLocal_141 != 0)
	{
		remove_shocking_event(iLocal_141);
	}
	terminate_this_thread();
}

void func_259(auto uParam0, int iParam1)
{
	int iVar0;
	
	if (!iParam1)
	{
		func_261(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_260(uParam0[iVar0 /*18*/]);
		iVar0++;
	}
	*uParam0.f_271 = 0;
	*uParam0.f_272 = -1;
	*uParam0.f_273 = 1;
}

void func_260(auto uParam0)
{
	*uParam0 = 0;
	*uParam0.f_1 = -1;
	StringCopy(uParam0.f_2, "NULL", 64);
}

void func_261(auto uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (is_bit_set(*uParam0[iVar0 /*18*/], 30))
		{
			func_262(uParam0[iVar0 /*18*/]);
		}
		iVar0++;
	}
	*uParam0.f_271 = 1;
}

void func_262(auto uParam0)
{
	func_263(*uParam0, uParam0.f_2, *uParam0.f_1);
}

void func_263(int iParam0, char* sParam1, int iParam2)
{
	if (is_bit_set(iParam0, 30))
	{
		switch (func_199(iParam0))
		{
			case 0:
				set_model_as_no_longer_needed(iParam2);
				break;
			
			case 1:
				remove_anim_dict(sParam1);
				break;
			
			case 2:
				remove_clip_set(sParam1);
				break;
			
			case 3:
				set_streamed_texture_dict_as_no_longer_needed(sParam1);
				break;
			
			case 4:
				remove_vehicle_recording(iParam2, sParam1);
				break;
			
			case 5:
				remove_waypoint_recording(sParam1);
				break;
			
			case 6:
				release_script_audio_bank();
				break;
			
			case 7:
				_set_streamed_script_as_no_longer_needed(iParam2);
				break;
			
			case 8:
				clear_additional_text(iParam2, is_bit_set(iParam0, 26));
				break;
			
			case 9:
				remove_ptfx_asset();
				break;
			
			default:
				break;
		}
	}
}

void func_264(int iParam0)
{
	char[64] cVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_175();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_174())
	{
		func_269(iParam0);
		set_mission_name(0, 0);
		Global_101145 = GAMEPLAY::GET_GAME_TIMER();
		func_268(30000);
		StringCopy(&cVar0, func_267(Global_101143, 1), 64);
		if (func_266(Global_101143) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_101142, 64);
		}
		_0x71862B1D855F32E1(&cVar0, Global_101140, GAMEPLAY::GET_GAME_TIMER() - Global_101141, 0);
	}
	else if (is_bit_set(Global_101150, false) && Global_101154.f_29520.f_2 < 3)
	{
		clear_bit(&Global_101150, false);
	}
	func_265(&Global_25179);
	Global_101144 = 0;
	func_212(-1);
}

void func_265(auto uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_35673)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_35672 = 0;
	Global_35674 = 0;
	Global_35711 = 15;
	Global_55746 = 0;
	Global_55747 = 0;
}

int func_266(int iParam0)
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 1:
			iVar0 = 5;
			break;
		
		case 5:
			iVar0 = 2;
			break;
		
		case 9:
			iVar0 = 10;
			break;
		
		case 11:
			iVar0 = 4;
			break;
		
		case 13:
			iVar0 = 4;
			break;
		
		case 15:
			iVar0 = 2;
			break;
		
		case 17:
			iVar0 = 2;
			break;
		
		case 22:
			iVar0 = 2;
			break;
		
		case 23:
			iVar0 = 2;
			break;
		
		case 25:
			iVar0 = 3;
			break;
		
		case 26:
			iVar0 = 2;
			break;
		
		case 27:
			iVar0 = 2;
			break;
		
		case 29:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

char* func_267(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "RE_ACCIDENT";
			break;
		
		case 1:
			return "RE_ATMROBBERY";
			break;
		
		case 2:
			return "RE_BUSTOUR";
			break;
		
		case 3:
			return "RE_DOMESTIC";
			break;
		
		case 4:
			return "RE_GETAWAYDRIVER";
			break;
		
		case 5:
			return "RE_SHOPROBBERY";
			break;
		
		case 6:
			return "RE_SNATCHED";
			break;
		
		case 7:
			return "RE_LURED";
			break;
		
		case 8:
			return "RE_BIKETHIEFSTAMP";
			break;
		
		case 9:
			return "RE_SECURITYVAN";
			break;
		
		case 10:
			return "RE_PAPARAZZI";
			break;
		
		case 11:
			return "RE_CHASETHIEVES";
			break;
		
		case 12:
			return "RE_DEALGONEWRONG";
			break;
		
		case 13:
			return "RE_HITCHLIFT";
			break;
		
		case 14:
			return "RE_STAG";
			break;
		
		case 15:
			return "RE_ARREST";
			break;
		
		case 16:
			return "RE_CRASHRESCUE";
			break;
		
		case 17:
			return "RE_CARTHEFT";
			break;
		
		case 18:
			return "RE_CULTSHOOTOUT";
			break;
		
		case 19:
			return "RE_GANGFIGHT";
			break;
		
		case 20:
			return "RE_GANGINTIMIDATION";
			break;
		
		case 21:
			return "RE_PRISONVANBREAK";
			break;
		
		case 22:
			return "RE_PRISONERLIFT";
			break;
		
		case 23:
			return "RE_ABANDONEDCAR";
			break;
		
		case 24:
			return "RE_BURIAL";
			break;
		
		case 25:
			return "RE_MUGGING";
			break;
		
		case 26:
			return "RE_BIKETHIEF";
			break;
		
		case 27:
			return "RE_DRUNKDRIVER";
			break;
		
		case 28:
			return "RE_HOMELANDSECURITY";
			break;
		
		case 29:
			return "RE_BORDERPATROL";
			break;
		
		case 30:
			return "RE_SIMEONYETARIAN";
			break;
		
		case 31:
			return "RE_DUEL";
			break;
		
		case 32:
			return "RE_SEAPLANE";
			break;
		
		case 33:
			return "RE_MONKEYPHOTO";
			break;
		
		case -1:
			return "RE_NONE";
			break;
	}
	if (!iParam1)
	{
	}
	return "UNKNOWN";
}

void func_268(int iParam0)
{
	Global_36262 = GAMEPLAY::GET_GAME_TIMER() + iParam0;
}

void func_269(int iParam0)
{
	func_270(iParam0, 0, func_275(iParam0));
}

void func_270(auto uParam0, int iParam1, int iParam2)
{
	auto uVar0;
	struct<16> Var1;
	
	uVar0 = func_229();
	func_273(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_272(uParam0, &uVar0);
	Var1 = {func_271(&uVar0)};
}

struct<16> func_271(auto uParam0)
{
	char[64] cVar0;
	int iVar16;
	
	StringCopy(&cVar0, "", 64);
	iVar16 = func_223(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&cVar0, 0, 64);
	}
	StringIntConCat(&cVar0, iVar16, 64);
	StringConCat(&cVar0, ":", 64);
	iVar16 = func_222(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&cVar0, 0, 64);
	}
	StringIntConCat(&cVar0, iVar16, 64);
	StringConCat(&cVar0, ":", 64);
	iVar16 = func_221(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&cVar0, 0, 64);
	}
	StringIntConCat(&cVar0, iVar16, 64);
	StringConCat(&cVar0, "  ", 64);
	iVar16 = func_224(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&cVar0, 0, 64);
	}
	StringIntConCat(&cVar0, iVar16, 64);
	StringConCat(&cVar0, "/", 64);
	iVar16 = func_227(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&cVar0, 0, 64);
	}
	StringIntConCat(&cVar0, iVar16 + 1, 64);
	StringConCat(&cVar0, "/", 64);
	StringIntConCat(&cVar0, func_225(*uParam0), 64);
	return cVar0;
}

void func_272(auto uParam0, auto uParam1)
{
	Global_101154.f_29520.f_43[uParam0] = *uParam1;
}

void func_273(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_225(*uParam0);
	iVar1 = func_227(*uParam0);
	iVar2 = func_224(*uParam0);
	iVar3 = func_223(*uParam0);
	iVar4 = func_222(*uParam0);
	iVar5 = func_221(*uParam0);
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
	iVar6 = func_220(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 -= iVar6;
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 -= 12;
		}
		iVar6 = func_220(iVar1, iVar0);
	}
	iVar1 += iParam5;
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 -= 12;
	}
	iVar0 += iParam6;
	func_274(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_274(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_235(uParam0, iParam1);
	func_234(uParam0, iParam2);
	func_233(uParam0, iParam3);
	func_231(uParam0, iParam5);
	func_232(uParam0, iParam4);
	func_230(uParam0, iParam6);
}

int func_275(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 23:
			iVar0 = 30;
			break;
		
		case 0:
			iVar0 = 30;
			break;
		
		case 15:
			iVar0 = 30;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 26:
			iVar0 = 30;
			break;
		
		case 8:
			iVar0 = 30;
			break;
		
		case 29:
			iVar0 = 30;
			break;
		
		case 24:
			iVar0 = 30;
			break;
		
		case 2:
			iVar0 = 0;
			break;
		
		case 17:
			iVar0 = 30;
			break;
		
		case 11:
			iVar0 = 30;
			break;
		
		case 16:
			iVar0 = 30;
			break;
		
		case 18:
			iVar0 = 30;
			break;
		
		case 12:
			iVar0 = 120;
			break;
		
		case 3:
			iVar0 = 60;
			break;
		
		case 27:
			iVar0 = 60;
			break;
		
		case 19:
			iVar0 = 30;
			break;
		
		case 20:
			iVar0 = 30;
			break;
		
		case 4:
			iVar0 = 60;
			break;
		
		case 28:
			iVar0 = 30;
			break;
		
		case 13:
			iVar0 = 35;
			break;
		
		case 7:
			iVar0 = 30;
			break;
		
		case 25:
			iVar0 = 40;
			break;
		
		case 10:
			iVar0 = 30;
			break;
		
		case 22:
			iVar0 = 30;
			break;
		
		case 21:
			iVar0 = 30;
			break;
		
		case 5:
			iVar0 = 30;
			break;
		
		case 30:
			iVar0 = 60;
			break;
		
		case 9:
			iVar0 = 60;
			break;
		
		case 6:
			iVar0 = 40;
			break;
		
		case 14:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

void func_276(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_175();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_266(iParam0))
	{
		func_287(iParam0, iParam1);
		if (!func_286(51))
		{
			func_283("RE_REWARD", 1, 0, 4000, 10000, func_168(), 0, 138, 0);
			func_282(51);
		}
		if (func_153(iParam0))
		{
			Global_101154.f_29520.f_2 = 3;
		}
		if (func_281(iParam0, iParam1) != 322)
		{
			func_277(func_281(iParam0, iParam1), vLocal_43.x, vLocal_43.y);
		}
		Global_101142 = iParam1;
		if (Global_101140 == 0)
		{
			if (((Global_101143 == 1 || Global_101143 == 5) || Global_101143 == 11) || Global_101143 == 25)
			{
				func_182(2);
			}
			else if ((Global_101143 == 26 || Global_101143 == 8) || Global_101143 == 17)
			{
				func_182(7);
			}
			else
			{
				func_182(1);
			}
		}
	}
}

void func_277(int iParam0, auto uParam1, auto uParam2)
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
		func_280(891 + iParam0, 1, -1, 1);
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
		Global_101154.f_8884[iParam0 /*12*/].f_10 = uParam1;
		Global_101154.f_8884[iParam0 /*12*/].f_11 = uParam2;
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
		func_278();
	}
}

void func_278()
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
					GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_101154.f_8884.f_3856), 14);
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
		func_75(13, floor(Global_101154.f_8884.f_3853));
	}
	if (!_0xBEDB96A7584AA8CF())
	{
		if (!Global_69489)
		{
			if (func_279() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (network_is_cloud_available())
				{
					Global_100888 = 0;
				}
				if (!Global_55749)
				{
					func_179();
				}
			}
		}
	}
}

auto func_279()
{
	return Global_25120;
}

int func_280(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_96();
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

int func_281(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 250;
			break;
		
		case 1:
			return 226;
			break;
		
		case 2:
			return 243;
			break;
		
		case 3:
			return 256;
			break;
		
		case 4:
			return 259;
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 281;
			}
			if (iParam1 == 2)
			{
				return 282;
			}
			break;
		
		case 6:
			return 265;
			break;
		
		case 7:
			return 218;
			break;
		
		case 9:
			if (iParam1 == 1)
			{
				return 271;
			}
			if (iParam1 == 2)
			{
				return 272;
			}
			if (iParam1 == 3)
			{
				return 273;
			}
			if (iParam1 == 4)
			{
				return 274;
			}
			if (iParam1 == 5)
			{
				return 275;
			}
			if (iParam1 == 6)
			{
				return 276;
			}
			if (iParam1 == 7)
			{
				return 277;
			}
			if (iParam1 == 8)
			{
				return 278;
			}
			if (iParam1 == 9)
			{
				return 279;
			}
			if (iParam1 == 10)
			{
				return 280;
			}
			break;
		
		case 10:
			return 219;
			break;
		
		case 11:
			if (iParam1 == 1)
			{
				return 246;
			}
			if (iParam1 == 2)
			{
				return 247;
			}
			if (iParam1 == 3)
			{
				return 248;
			}
			if (iParam1 == 4)
			{
				return 249;
			}
			break;
		
		case 12:
			return 254;
			break;
		
		case 13:
			if (iParam1 == 1)
			{
				return 260;
			}
			if (iParam1 == 2)
			{
				return 261;
			}
			if (iParam1 == 3)
			{
				return 262;
			}
			if (iParam1 == 4)
			{
				return 264;
			}
			break;
		
		case 14:
			return 283;
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 224;
			}
			if (iParam1 == 2)
			{
				return 225;
			}
			break;
		
		case 16:
			return 252;
			break;
		
		case 17:
			if (iParam1 == 1)
			{
				return 244;
			}
			if (iParam1 == 2)
			{
				return 245;
			}
			break;
		
		case 18:
			return 253;
			break;
		
		case 19:
			return 215;
			break;
		
		case 20:
			return 216;
			break;
		
		case 21:
			return 251;
			break;
		
		case 22:
			if (iParam1 == 1)
			{
				return 221;
			}
			if (iParam1 == 2)
			{
				return 222;
			}
			break;
		
		case 23:
			if (iParam1 == 1)
			{
				return 213;
			}
			if (iParam1 == 2)
			{
				return 214;
			}
			break;
		
		case 24:
			return 242;
			break;
		
		case 25:
			if (iParam1 == 1)
			{
				return 267;
			}
			if (iParam1 == 2)
			{
				return 268;
			}
			if (iParam1 == 3)
			{
				return 269;
			}
			break;
		
		case 8:
			return 255;
			break;
		
		case 26:
			if (iParam1 == 1)
			{
				return 227;
			}
			if (iParam1 == 2)
			{
				return 228;
			}
			break;
		
		case 27:
			if (iParam1 == 1)
			{
				return 257;
			}
			if (iParam1 == 2)
			{
				return 258;
			}
			break;
		
		case 28:
			return 217;
			break;
		
		case 29:
			if (iParam1 == 1)
			{
				return 229;
			}
			if (iParam1 == 2)
			{
				return 230;
			}
			if (iParam1 == 3)
			{
				return 231;
			}
			break;
		
		case 30:
			return 285;
			break;
		
		case 31:
			return 318;
			break;
		
		case 32:
			return 319;
			break;
		
		case 33:
			return 320;
			break;
	}
	return 322;
}

void func_282(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 -= 32;
		iVar1++;
	}
	if (iVar1 < 3)
	{
		GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_101154.f_24935.f_150[iVar1]), iVar0);
	}
}

void func_283(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_284(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_284(char* sParam0, char* sParam1, auto uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, auto uParam9)
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
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_8 = GAMEPLAY::GET_GAME_TIMER() + iParam3;
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_9 = iParam5;
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_11 = iParam6;
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_12 = uParam2;
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_13 = iParam7;
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_14 = iParam8;
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_10 = GAMEPLAY::GET_GAME_TIMER() + iParam3 + iParam4;
		}
		else
		{
			Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_10 = -1;
		}
		Global_101154.f_24935.f_145++;
		func_285();
	}
}

void func_285()
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

int func_286(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 -= 32;
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return is_bit_set(Global_101154.f_24935.f_150[iVar1], iVar0);
	}
	return false;
}

void func_287(int iParam0, int iParam1)
{
	GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_101154.f_29520.f_8[iParam0]), iParam1);
}

