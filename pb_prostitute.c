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
	int iLocal_45 = 0;
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
	Vector3 vLocal_56 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	char* sLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	Vector3 vLocal_90 = 0;
	Vector3 vLocal_93 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	auto uLocal_105 = 0;
	auto uLocal_106 = 0;
	int iLocal_107 = 0;
	auto uLocal_108 = 0;
	auto uLocal_109 = 0;
	int iLocal_110 = 0;
	auto uLocal_111 = 0;
	auto uLocal_112 = 0;
	int iLocal_113 = 0;
	auto uLocal_114 = 0;
	auto uLocal_115 = 0;
	int iLocal_116 = 0;
	auto uLocal_117 = 0;
	auto uLocal_118 = 0;
	int iLocal_119 = 0;
	auto uLocal_120 = 0;
	auto uLocal_121 = 0;
	auto uLocal_122 = 16;
	auto uLocal_123 = 0;
	auto uLocal_124 = 0;
	auto uLocal_125 = 0;
	auto uLocal_126 = 0;
	auto uLocal_127 = 0;
	auto uLocal_128 = 0;
	auto uLocal_129 = 0;
	auto uLocal_130 = 0;
	auto uLocal_131 = 0;
	auto uLocal_132 = 0;
	auto uLocal_133 = 0;
	auto uLocal_134 = 0;
	auto uLocal_135 = 0;
	auto uLocal_136 = 0;
	auto uLocal_137 = 0;
	auto uLocal_138 = 0;
	auto uLocal_139 = 0;
	auto uLocal_140 = 0;
	auto uLocal_141 = 0;
	auto uLocal_142 = 0;
	auto uLocal_143 = 0;
	auto uLocal_144 = 0;
	auto uLocal_145 = 0;
	auto uLocal_146 = 0;
	auto uLocal_147 = 0;
	auto uLocal_148 = 0;
	auto uLocal_149 = 0;
	auto uLocal_150 = 0;
	auto uLocal_151 = 0;
	auto uLocal_152 = 0;
	auto uLocal_153 = 0;
	auto uLocal_154 = 0;
	auto uLocal_155 = 0;
	auto uLocal_156 = 0;
	auto uLocal_157 = 0;
	auto uLocal_158 = 0;
	auto uLocal_159 = 0;
	auto uLocal_160 = 0;
	auto uLocal_161 = 0;
	auto uLocal_162 = 0;
	auto uLocal_163 = 0;
	auto uLocal_164 = 0;
	auto uLocal_165 = 0;
	auto uLocal_166 = 0;
	auto uLocal_167 = 0;
	auto uLocal_168 = 0;
	auto uLocal_169 = 0;
	auto uLocal_170 = 0;
	auto uLocal_171 = 0;
	auto uLocal_172 = 0;
	auto uLocal_173 = 0;
	auto uLocal_174 = 0;
	auto uLocal_175 = 0;
	auto uLocal_176 = 0;
	auto uLocal_177 = 0;
	auto uLocal_178 = 0;
	auto uLocal_179 = 0;
	auto uLocal_180 = 0;
	auto uLocal_181 = 0;
	auto uLocal_182 = 0;
	auto uLocal_183 = 0;
	auto uLocal_184 = 0;
	auto uLocal_185 = 0;
	auto uLocal_186 = 0;
	auto uLocal_187 = 0;
	auto uLocal_188 = 0;
	auto uLocal_189 = 0;
	auto uLocal_190 = 0;
	auto uLocal_191 = 0;
	auto uLocal_192 = 0;
	auto uLocal_193 = 0;
	auto uLocal_194 = 0;
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
	auto uLocal_287 = 1;
	auto uLocal_288 = 0;
	int[] iLocal_289 = new int[3];
	int iLocal_293 = 0;
	int iLocal_294 = 0;
	int iLocal_295 = 0;
	int iLocal_296 = 0;
	int iLocal_297 = 0;
	int iLocal_298 = 0;
	auto uLocal_299 = 0;
	int iLocal_300 = 0;
	int iLocal_301 = 0;
	int iLocal_302 = 0;
	int iLocal_303 = 0;
	int iLocal_304 = 0;
	int iLocal_305 = 0;
	int iLocal_306 = 0;
	int iLocal_307 = 0;
	int[] iLocal_308 = new int[4];
	struct<7>[] Local_313 = new struct<7>[4];
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
	auto uLocal_354 = 8;
	auto uLocal_355 = 0;
	auto uLocal_356 = 0;
	auto uLocal_357 = 0;
	auto uLocal_358 = 0;
	auto uLocal_359 = 0;
	auto uLocal_360 = 0;
	auto uLocal_361 = 0;
	auto uLocal_362 = 0;
	auto uLocal_363 = 2;
	auto uLocal_364 = 0;
	auto uLocal_365 = 0;
	auto uLocal_366 = 8;
	auto uLocal_367 = 0;
	auto uLocal_368 = 0;
	auto uLocal_369 = 0;
	auto uLocal_370 = 0;
	auto uLocal_371 = 0;
	auto uLocal_372 = 0;
	auto uLocal_373 = 0;
	auto uLocal_374 = 0;
	auto uLocal_375 = 8;
	auto uLocal_376 = 0;
	auto uLocal_377 = 0;
	auto uLocal_378 = 0;
	auto uLocal_379 = 0;
	auto uLocal_380 = 0;
	auto uLocal_381 = 0;
	auto uLocal_382 = 0;
	auto uLocal_383 = 0;
	auto uLocal_384 = 0;
	float fLocal_385 = 0;
	auto uLocal_386 = 0;
	auto uLocal_387 = 0;
	float fLocal_388 = 0;
	float fLocal_389 = 0;
	float fLocal_390 = 0;
	float fLocal_391 = 0;
	float fLocal_392 = 0;
	auto uLocal_393 = 0;
	auto uLocal_394 = 15;
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
	auto uLocal_667 = 1;
	int iLocal_668 = 0;
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
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	vLocal_56 = {0f, 0f, 0f};
	iLocal_74 = -1;
	iLocal_76 = -1;
	iLocal_77 = -1;
	iLocal_78 = -1;
	iLocal_79 = -1;
	iLocal_80 = -1;
	iLocal_81 = -1;
	iLocal_82 = -1;
	iLocal_84 = -1;
	iLocal_86 = -1;
	iLocal_87 = -1;
	iLocal_293 = -1;
	fLocal_385 = 0.05f + 0.275f - 0.01f;
	fLocal_388 = -0.05f;
	fLocal_389 = 0.92f;
	fLocal_390 = 1.94f;
	fLocal_391 = 2.99f;
	fLocal_392 = 3.7f;
	if (Global_3)
	{
		terminate_this_thread();
	}
	if (network_is_game_in_progress())
	{
		if (func_525(player_id(), 1))
		{
			terminate_this_thread();
		}
		if (func_524(player_id(), 1))
		{
			terminate_this_thread();
		}
	}
	if (func_523(13) || func_523(14))
	{
		terminate_this_thread();
	}
	if (!func_522() && !network_is_game_in_progress())
	{
		if (has_force_cleanup_occurred(35))
		{
			func_512();
			func_511(1);
			func_507(&uLocal_394);
		}
	}
	wait(0);
	iLocal_96 = iLocal_668;
	if (network_is_game_in_progress())
	{
		func_506();
		network_set_this_script_is_network_script(2, 0, player_id());
		func_501(0, -1, 0);
		set_this_script_can_be_paused(0);
	}
	func_500();
	func_499(128);
	while (iLocal_62)
	{
		iVar0 = true;
		func_496(&uLocal_394);
		if (func_522())
		{
			if (func_495(1024))
			{
				if (!is_entity_dead(player_ped_id(), 0))
				{
					if (has_ped_head_blend_finished(player_ped_id()) && _0x7350823473013C02(player_ped_id()))
					{
						func_499(1024);
						_0x4668D80430D6C299(player_ped_id());
					}
				}
			}
			if (!func_495(1024) && func_495(2048))
			{
				terminate_this_thread();
			}
			if (!does_entity_exist(iLocal_96))
			{
				iVar0 = false;
			}
			else if (!network_has_control_of_entity(iLocal_96))
			{
				iVar0 = false;
				network_request_control_of_entity(iLocal_96);
			}
		}
		if (!func_522() || !func_495(2048))
		{
			func_488();
			if (func_522())
			{
				func_487();
				if (func_495(128))
				{
					iLocal_62 = 0;
				}
			}
			if (func_482())
			{
				if (iVar0)
				{
					if (iLocal_294 > 0)
					{
						func_477(&uLocal_394);
					}
					func_475();
					func_473();
					switch (iLocal_294)
					{
						case 0:
							if (iLocal_293 == -1)
							{
								if (is_ped_active_in_scenario(iLocal_96))
								{
									iLocal_293 = func_472();
								}
								else if (func_470())
								{
									iLocal_293 = 4;
								}
							}
							else if (func_465())
							{
								if (func_464())
								{
									if (func_522())
									{
										if (network_has_control_of_entity(iLocal_96))
										{
											task_start_scenario_in_place(iLocal_96, "WORLD_HUMAN_PROSTITUTE_HIGH_CLASS", 0, 0);
										}
										else
										{
											network_request_control_of_entity(iLocal_96);
										}
									}
									else
									{
										task_start_scenario_in_place(iLocal_96, "WORLD_HUMAN_PROSTITUTE_HIGH_CLASS", 0, 0);
									}
								}
								iLocal_294 = 1;
								func_463("Prostitue: moving to PROS_PB_CUSTOMER_DETERMINE_TYPE");
							}
							break;
						
						case 1:
							if (func_462(iLocal_49, 4096))
							{
								func_461();
							}
							if (func_460())
							{
								iLocal_294 = 2;
								func_463("Prostitue: moving to PROS_PB_CUSTOMER_PLAYER");
							}
							if (func_456())
							{
								iLocal_294 = 3;
								func_454(&iLocal_49, 64);
								Global_25272 = 1;
								func_463("Prostitue: moving to PROS_PB_CUSTOMER_OTHER");
							}
							break;
						
						case 2:
							func_91(&uLocal_394);
							break;
						
						case 3:
							func_3();
							break;
						
						default:
							break;
						}
				}
			}
			else
			{
				func_2(0);
			}
			func_1();
		}
		wait(0);
	}
	if (func_462(iLocal_49, 2))
	{
	}
	func_463(" Something forced this exit!!!!!!~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	func_512();
	func_507(&uLocal_394);
}

void func_1()
{
}

void func_2(int iParam0)
{
	if (iParam0)
	{
		iLocal_62 = 1;
	}
	else
	{
		iLocal_62 = 0;
	}
}

void func_3()
{
	if (iLocal_295 > 0)
	{
		if (is_vehicle_driveable(iLocal_98, 0))
		{
			if (!is_ped_injured(iLocal_97))
			{
				if (!is_ped_in_vehicle(iLocal_97, iLocal_98, 0))
				{
					func_90();
				}
			}
		}
	}
	if (!does_entity_exist(iLocal_97) || is_entity_dead(iLocal_97, 0))
	{
		func_89(15);
	}
	switch (iLocal_295)
	{
		case 0:
			if (!iLocal_296 == 0)
			{
				iLocal_295 = 1;
			}
			break;
		
		case 1:
			func_83();
			break;
		
		case 2:
			func_82();
			break;
		
		case 3:
			func_65();
			break;
		
		case 4:
			func_56();
			break;
		
		case 5:
			func_53();
			break;
		
		case 6:
			if (!is_ped_injured(iLocal_97))
			{
				if (get_script_task_status(iLocal_96, 242628503) == 7)
				{
					iLocal_65 = get_game_timer();
					iLocal_66 = iLocal_65 - iLocal_64;
					if (iLocal_66 >= 10000 || !is_entity_at_entity(iLocal_96, iLocal_97, 12f, 12f, 5f, 0, 1, 0))
					{
						func_463("prostitute WAITING TO END");
						func_90();
					}
				}
			}
			else
			{
				func_90();
			}
			break;
		
		case 7:
			if (!_0xF7B79A50B905A30D(func_52(0), func_52(1), func_52(2), func_52(3)))
			{
				_0x07FB139B592FA687(func_52(0), func_52(1), func_52(2), func_52(3));
			}
			else
			{
				task_vehicle_drive_to_coord(iLocal_97, iLocal_98, vLocal_90, _0x53AF99BAA671CA47(iLocal_98) * 0.65f, 0, false, 786859, 4f, -1f);
				iLocal_295 = 8;
			}
			break;
		
		case 8:
			if (vdist2(vLocal_90, get_entity_coords(iLocal_96, 1)) < 25f && get_script_task_status(iLocal_97, -1817882002) != 1)
			{
				iLocal_297 = get_random_int_in_range(true, 3);
				iLocal_295 = 11;
			}
			if (func_49(iLocal_97))
			{
				func_89(15);
			}
			break;
		
		case 11:
			func_4();
			break;
		
		case 12:
			func_89(15);
			break;
		
		case 15:
			if (does_entity_exist(iLocal_96) && does_entity_exist(iLocal_98))
			{
				if (is_ped_in_vehicle(iLocal_96, iLocal_98, 0))
				{
					if (!is_entity_dead(iLocal_97, 0))
					{
						if (get_script_task_status(iLocal_97, -828834893) != 1)
						{
							task_leave_any_vehicle(iLocal_96, false, 16842752);
						}
					}
				}
				else
				{
					func_2(0);
				}
			}
			break;
	}
}

void func_4()
{
	switch (iLocal_302)
	{
		case 0:
			set_scripted_anim_seat_offset(iLocal_96, 0.916f);
			if (func_36(iLocal_97))
			{
				func_34(&iLocal_119);
				iLocal_302 = 1;
			}
			break;
		
		case 1:
			if (vdist2(get_entity_coords(player_ped_id(), 0), get_entity_coords(iLocal_96, 0)) < 22500f)
			{
				func_32();
			}
			func_29(iLocal_98);
			if (func_27(iLocal_97))
			{
				func_11(&uLocal_122, "pbproau", "pbpro_pic", 4, 0, 0, 0);
				func_89(15);
			}
			if (func_7(&iLocal_119) > 1f)
			{
				if (get_script_task_status(iLocal_96, 242628503) == 7)
				{
					func_5(&iLocal_49, 512);
					iLocal_302 = 3;
				}
			}
			break;
		
		case 3:
			func_89(15);
			break;
		
		case 5:
			func_89(15);
			break;
	}
}

void func_5(int iParam0, int iParam1)
{
	func_6(iParam0, iParam1);
}

void func_6(auto uParam0, auto uParam1)
{
	*uParam0 -= (*uParam0 && uParam1);
}

float func_7(int iParam0)
{
	if (func_10(iParam0))
	{
		if (func_9(iParam0))
		{
			return *iParam0.f_2;
		}
		else
		{
			return func_8(is_bit_set(*iParam0, 4)) - *iParam0.f_1;
		}
	}
	return *iParam0.f_1;
}

float func_8(int iParam0)
{
	int iVar0;
	
	if (iParam0)
	{
		return to_float(get_game_timer()) / 1000f;
	}
	if (network_is_game_in_progress())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME();
		return to_float(iVar0) / 1000f;
	}
	return to_float(get_game_timer()) / 1000f;
}

int func_9(int iParam0)
{
	return is_bit_set(*iParam0, 2);
}

int func_10(int iParam0)
{
	return is_bit_set(*iParam0, true);
}

int func_11(auto uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_26(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_12(sParam2, iParam3, 0);
}

bool func_12(char* sParam0, int iParam1, int iParam2)
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
					func_25();
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
		if (func_24(8, -1))
		{
			return false;
		}
		Global_15788 = {Global_15782};
		func_23();
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
				func_17();
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
				if (func_16())
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
			if (func_15())
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
			func_14();
			Global_15722 = iParam2;
		}
		Global_15714 = iParam1;
		StringCopy(&Global_15331, sParam0, 24);
		Global_14578 = 0;
		func_13();
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
		func_25();
	}
	return false;
}

void func_13()
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

void func_14()
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

bool func_15()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return true;
	}
	return false;
}

bool func_16()
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

void func_17()
{
	if (func_523(14))
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
		Global_14413 = func_18();
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

auto func_18()
{
	func_19();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_19()
{
	int iVar0;
	
	if (does_entity_exist(player_ped_id()))
	{
		if (func_22(Global_101154.f_1826.f_539.f_3549) != get_entity_model(player_ped_id()))
		{
			iVar0 = func_21(player_ped_id());
			if (func_20(iVar0) && (!func_523(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_20(Global_101154.f_1826.f_539.f_3549))
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

int func_20(int iParam0)
{
	return iParam0 < 3;
}

int func_21(int iParam0)
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

int func_22(int iParam0)
{
	if (func_20(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_23()
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

int func_24(int iParam0, int iParam1)
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

void func_25()
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

void func_26(auto uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, auto uParam5)
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

bool func_27(int iParam0)
{
	if (func_28())
	{
		if (!would_entity_be_occluded(get_entity_model(iParam0), get_entity_coords(iParam0, 1), 1))
		{
			return true;
		}
	}
	return false;
}

bool func_28()
{
	if (Global_16748)
	{
		return true;
	}
	return false;
}

void func_29(int iParam0)
{
	if (iLocal_297 != 1 && iLocal_297 != 2)
	{
		return;
	}
	if (func_31())
	{
		func_30(&iParam0);
	}
}

void func_30(auto uParam0)
{
	Vector3 vVar0;
	Vector3 vVar3;
	
	if (is_vehicle_driveable(*uParam0, 0))
	{
		vVar0 = {0f, 0f, -0.1f};
		vVar3 = {0f, 0f, 0f};
		apply_force_to_entity(*uParam0, 1, vVar0, vVar3, 0, 1, 1, 1, 1, 0);
	}
}

int func_31()
{
	return has_anim_event_fired(iLocal_96, 876132797);
}

void func_32()
{
	_0xEB2D525B57F42B40();
	func_33();
}

void func_33()
{
	Global_17118.f_134 = 1;
}

void func_34(int iParam0)
{
	func_35(iParam0, 0f);
}

void func_35(int iParam0, float fParam1)
{
	*iParam0.f_1 = func_8(is_bit_set(*iParam0, 4)) - fParam1;
	set_bit(iParam0, true);
	clear_bit(iParam0, 2);
	*iParam0.f_2 = 0f;
}

bool func_36(int iParam0)
{
	if (is_string_null_or_empty(sLocal_63))
	{
		sLocal_63 = func_44(iParam0, 0, 0);
		return false;
	}
	if (!has_anim_dict_loaded(sLocal_63))
	{
		return false;
	}
	else
	{
		func_37(iLocal_96, func_43(), 1, floor(15000f * 1f + to_float(iLocal_72) / 2f));
		if (iParam0 == player_ped_id())
		{
			func_37(iParam0, func_43(), 0, floor(15000f * 1f + to_float(iLocal_72) / 2f));
		}
		func_463("anim_dict has loaded, triggering anims?");
		func_454(&iLocal_49, 512);
		return true;
	}
	return false;
}

void func_37(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	
	if (is_entity_dead(iParam0, 0))
	{
		return;
	}
	iVar0 = get_vehicle_ped_is_in(iParam0, 1);
	if (!is_vehicle_driveable(iVar0, 0))
	{
		return;
	}
	iLocal_48 = get_follow_ped_cam_view_mode();
	if (is_ped_in_any_vehicle(player_ped_id(), 1) && func_42(0, 1))
	{
		if (iLocal_48 != 4)
		{
			set_follow_ped_cam_view_mode(4);
		}
	}
	iVar1 = func_41(iVar0);
	sVar2 = func_44(iParam0, 0, 0);
	if (!has_anim_dict_loaded(sVar2))
	{
		request_anim_dict(sVar2);
	}
	else
	{
		open_sequence_task(&iVar3);
		task_play_anim(false, sVar2, func_38(0, iParam2, iParam1, iVar1), 8f, -8f, -1, 0, 0, 0, 0, 0);
		task_play_anim(false, sVar2, func_38(1, iParam2, iParam1, iVar1), 8f, -4f, -1, 0, 0, 0, 0, 0);
		task_play_anim(false, sVar2, func_38(2, iParam2, iParam1, iVar1), 8f, -4f, iParam3, 1, 0, 0, 0, 0);
		task_play_anim(false, sVar2, func_38(3, iParam2, iParam1, iVar1), 8f, -4f, -1, 0, 0, 0, 0, 0);
		task_play_anim(false, sVar2, func_38(4, iParam2, iParam1, iVar1), 4f, -2f, -1, 0, 0, 0, 0, 0);
		close_sequence_task(iVar3);
		task_perform_sequence(iParam0, iVar3);
		clear_sequence_task(&iVar3);
	}
}

char* func_38(int iParam0, int iParam1, int iParam2, int iParam3)
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			if (iParam3)
			{
				if (iParam2)
				{
					if (iParam1)
					{
						sVar0 = func_40(18);
					}
					else
					{
						sVar0 = func_40(23);
					}
				}
				else if (iParam1)
				{
					sVar0 = func_40(8);
				}
				else
				{
					sVar0 = func_40(13);
				}
			}
			else if (iParam2)
			{
				if (iParam1)
				{
					sVar0 = func_39(18);
				}
				else
				{
					sVar0 = func_39(23);
				}
			}
			else if (iParam1)
			{
				sVar0 = func_39(8);
			}
			else
			{
				sVar0 = func_39(13);
			}
			break;
		
		case 1:
			if (iParam3)
			{
				if (iParam2)
				{
					if (iParam1)
					{
						sVar0 = func_40(19);
					}
					else
					{
						sVar0 = func_40(24);
					}
				}
				else if (iParam1)
				{
					sVar0 = func_40(9);
				}
				else
				{
					sVar0 = func_40(14);
				}
			}
			else if (iParam2)
			{
				if (iParam1)
				{
					sVar0 = func_39(19);
				}
				else
				{
					sVar0 = func_39(24);
				}
			}
			else if (iParam1)
			{
				sVar0 = func_39(9);
			}
			else
			{
				sVar0 = func_39(14);
			}
			break;
		
		case 2:
			if (iParam3)
			{
				if (iParam2)
				{
					if (iParam1)
					{
						sVar0 = func_40(20);
					}
					else
					{
						sVar0 = func_40(25);
					}
				}
				else if (iParam1)
				{
					sVar0 = func_40(10);
				}
				else
				{
					sVar0 = func_40(15);
				}
			}
			else if (iParam2)
			{
				if (iParam1)
				{
					sVar0 = func_39(20);
				}
				else
				{
					sVar0 = func_39(25);
				}
			}
			else if (iParam1)
			{
				sVar0 = func_39(10);
			}
			else
			{
				sVar0 = func_39(15);
			}
			break;
		
		case 3:
			if (iParam3)
			{
				if (iParam2)
				{
					if (iParam1)
					{
						sVar0 = func_40(21);
					}
					else
					{
						sVar0 = func_40(26);
					}
				}
				else if (iParam1)
				{
					sVar0 = func_40(11);
				}
				else
				{
					sVar0 = func_40(16);
				}
			}
			else if (iParam2)
			{
				if (iParam1)
				{
					sVar0 = func_39(21);
				}
				else
				{
					sVar0 = func_39(26);
				}
			}
			else if (iParam1)
			{
				sVar0 = func_39(11);
			}
			else
			{
				sVar0 = func_39(16);
			}
			break;
		
		case 4:
			if (iParam3)
			{
				if (iParam2)
				{
					if (iParam1)
					{
						sVar0 = func_40(22);
					}
					else
					{
						sVar0 = func_40(27);
					}
				}
				else if (iParam1)
				{
					sVar0 = func_40(12);
				}
				else
				{
					sVar0 = func_40(17);
				}
			}
			else if (iParam2)
			{
				if (iParam1)
				{
					sVar0 = func_39(22);
				}
				else
				{
					sVar0 = func_39(27);
				}
			}
			else if (iParam1)
			{
				sVar0 = func_39(12);
			}
			else
			{
				sVar0 = func_39(17);
			}
			break;
		
		case 5:
			if (iParam3)
			{
				if (iParam1)
				{
					sVar0 = func_40(3);
				}
				else
				{
					sVar0 = func_40(2);
				}
			}
			else if (iParam1)
			{
				sVar0 = func_39(3);
			}
			else
			{
				sVar0 = func_39(2);
			}
			break;
		
		case 6:
			break;
	}
	return sVar0;
}

char* func_39(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "into_proposition_male";
			break;
		
		case 1:
			sVar0 = "into_proposition_prostitute";
			break;
		
		case 2:
			sVar0 = "proposition_loop_male";
			break;
		
		case 3:
			sVar0 = "proposition_loop_prostitute";
			break;
		
		case 4:
			sVar0 = "proposition_to_exit_male";
			break;
		
		case 5:
			sVar0 = "prop_to_sit_alt_prostitute";
			break;
		
		case 6:
			sVar0 = "prop_to_sit_male";
			break;
		
		case 7:
			sVar0 = "prop_to_sit_prostitute";
			break;
		
		case 8:
			sVar0 = "proposition_to_sex_p1_prostitute";
			break;
		
		case 9:
			sVar0 = "proposition_to_sex_p2_prostitute";
			break;
		
		case 10:
			sVar0 = "sex_loop_prostitute";
			break;
		
		case 11:
			sVar0 = "sex_to_proposition_p1_prostitute";
			break;
		
		case 12:
			sVar0 = "sex_to_proposition_p2_prostitute";
			break;
		
		case 13:
			sVar0 = "proposition_to_sex_p1_male";
			break;
		
		case 14:
			sVar0 = "proposition_to_sex_p2_male";
			break;
		
		case 15:
			sVar0 = "sex_loop_male";
			break;
		
		case 16:
			sVar0 = "sex_to_proposition_p1_male";
			break;
		
		case 17:
			sVar0 = "sex_to_proposition_p2_male";
			break;
		
		case 18:
			sVar0 = "proposition_to_BJ_p1_prostitute";
			break;
		
		case 19:
			sVar0 = "proposition_to_BJ_p2_prostitute";
			break;
		
		case 20:
			sVar0 = "BJ_loop_prostitute";
			break;
		
		case 21:
			sVar0 = "BJ_to_proposition_p1_prostitute";
			break;
		
		case 22:
			sVar0 = "BJ_to_proposition_p2_prostitute";
			break;
		
		case 23:
			sVar0 = "proposition_to_BJ_p1_male";
			break;
		
		case 24:
			sVar0 = "proposition_to_BJ_p2_male";
			break;
		
		case 25:
			sVar0 = "BJ_loop_male";
			break;
		
		case 26:
			sVar0 = "BJ_to_proposition_p1_male";
			break;
		
		case 27:
			sVar0 = "BJ_to_proposition_p2_male";
			break;
		
		default:
			sVar0 = "";
			break;
	}
	return sVar0;
}

char* func_40(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "low_car_sit_to_prop_player";
			break;
		
		case 1:
			sVar0 = "low_car_sit_to_prop_female";
			break;
		
		case 2:
			sVar0 = "low_car_prop_loop_player";
			break;
		
		case 3:
			sVar0 = "low_car_prop_loop_female";
			break;
		
		case 4:
			sVar0 = "low_car_prop_to_leave_player";
			break;
		
		case 5:
			sVar0 = "low_car_prop_to_sit_alt_female";
			break;
		
		case 6:
			sVar0 = "low_car_prop_to_sit_player";
			break;
		
		case 7:
			sVar0 = "low_car_prop_to_sit_female";
			break;
		
		case 8:
			sVar0 = "low_car_prop_to_sex_p1_female";
			break;
		
		case 9:
			sVar0 = "low_car_prop_to_sex_p2_female";
			break;
		
		case 10:
			sVar0 = "low_car_sex_loop_female";
			break;
		
		case 11:
			sVar0 = "low_car_sex_to_prop_p1_female";
			break;
		
		case 12:
			sVar0 = "low_car_sex_to_prop_p2_female";
			break;
		
		case 13:
			sVar0 = "low_car_prop_to_sex_p1_player";
			break;
		
		case 14:
			sVar0 = "low_car_prop_to_sex_p2_player";
			break;
		
		case 15:
			sVar0 = "low_car_sex_loop_player";
			break;
		
		case 16:
			sVar0 = "low_car_sex_to_prop_p1_player";
			break;
		
		case 17:
			sVar0 = "low_car_sex_to_prop_p2_player";
			break;
		
		case 18:
			sVar0 = "low_car_prop_to_bj_p1_female";
			break;
		
		case 19:
			sVar0 = "low_car_prop_to_bj_p2_female";
			break;
		
		case 20:
			sVar0 = "low_car_bj_loop_female";
			break;
		
		case 21:
			sVar0 = "low_car_bj_to_prop_p1_female";
			break;
		
		case 22:
			sVar0 = "low_car_bj_to_prop_p2_female";
			break;
		
		case 23:
			sVar0 = "low_car_prop_to_bj_p1_player";
			break;
		
		case 24:
			sVar0 = "low_car_prop_to_bj_p2_player";
			break;
		
		case 25:
			sVar0 = "low_car_bj_loop_player";
			break;
		
		case 26:
			sVar0 = "low_car_bj_to_prop_p1_player";
			break;
		
		case 27:
			sVar0 = "low_car_bj_to_prop_p2_player";
			break;
		
		default:
			sVar0 = "";
			break;
	}
	return sVar0;
}

bool func_41(int iParam0)
{
	if (is_vehicle_driveable(iParam0, 0))
	{
		switch (get_vehicle_layout_hash(iParam0))
		{
			case -2066252141:
			case -38413156:
			case -782720499:
			case 542797648:
			case 68566729:
			case -463340997:
			case 2033852426:
			case -1820894825:
			case 1697345049:
			case -635697407:
			case -1453479140:
			case 1837596901:
			case 2013836096:
				return true;
				break;
			}
	}
	return false;
}

int func_42(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = false;
	if (iParam0)
	{
		iVar0 = _0xEE778F8C7E1142E2(0) == 4;
	}
	if (iParam1)
	{
		if (!iVar0)
		{
			iVar0 = _0xEE778F8C7E1142E2(1) == 4;
		}
	}
	return iVar0;
}

int func_43()
{
	return iLocal_297 == 0;
}

auto func_44(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!is_entity_dead(iParam0, 0))
	{
		iVar0 = get_vehicle_ped_is_in(iParam0, 1);
		if (is_vehicle_driveable(iVar0, 0))
		{
			if (func_41(iVar0))
			{
				if ((!func_42(0, 1) || iParam2) && !iParam1)
				{
					return func_48();
				}
				else
				{
					return func_47();
				}
			}
		}
	}
	if ((!func_42(0, 1) || iParam2) && !iParam1)
	{
		return func_46();
	}
	return func_45();
}

char* func_45()
{
	return "mini@prostitutes@sexnorm_veh_first_person";
}

char* func_46()
{
	return "mini@prostitutes@sexnorm_veh";
}

char* func_47()
{
	return "mini@prostitutes@sexlow_veh_first_person";
}

char* func_48()
{
	return "mini@prostitutes@sexlow_veh";
}

bool func_49(int iParam0)
{
	Vector3 vVar0;
	
	if (!is_entity_dead(iParam0, 0))
	{
		if (is_ped_being_jacked(iParam0) || !func_51(iParam0, iLocal_98, -1))
		{
			vVar0 = {get_entity_coords(iParam0, 1)};
			set_ped_flee_attributes(iParam0, 196624, true);
			if (func_50())
			{
				task_smart_flee_coord(iParam0, vVar0, 300f, -1, 1, 1);
			}
			else if (!is_entity_dead(get_peds_jacker(iParam0), 0))
			{
				task_combat_ped(iParam0, get_peds_jacker(iParam0), 0, 16);
			}
			else
			{
				task_smart_flee_coord(iParam0, vVar0, 300f, -1, 1, 1);
			}
		}
	}
	return false;
}

bool func_50()
{
	if (is_bit_set(get_random_int_in_range(false, 65535), false))
	{
		return true;
	}
	return false;
}

bool func_51(int iParam0, int iParam1, int iParam2)
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

float func_52(int iParam0)
{
	Vector3 vVar0;
	Vector3 vVar3;
	
	vVar0 = {get_entity_coords(iLocal_96, 1)};
	vVar3 = {vLocal_90};
	if (iParam0 == 0)
	{
		if (vVar0.x < vVar3.x)
		{
			return vVar0.x - 20f;
		}
		else
		{
			return vVar3.x - 20f;
		}
	}
	if (iParam0 == 1)
	{
		if (vVar0.y < vVar3.y)
		{
			return vVar0.y - 20f;
		}
		else
		{
			return vVar3.y - 20f;
		}
	}
	if (iParam0 == 2)
	{
		if (vVar0.x > vVar3.x)
		{
			return vVar0.x + 20f;
		}
		else
		{
			return vVar3.x + 20f;
		}
	}
	if (vVar0.y > vVar3.y)
	{
		return vVar0.y + 20f;
	}
	return vVar3.y + 20f;
}

void func_53()
{
	if (!is_ped_injured(iLocal_97))
	{
		if (is_vehicle_driveable(iLocal_98, 0))
		{
			if (is_ped_in_vehicle(iLocal_97, iLocal_98, 0))
			{
				if (get_script_task_status(iLocal_96, 242628503) == 1)
				{
					if (get_sequence_progress(iLocal_96) > 0)
					{
						if (is_ped_in_vehicle(iLocal_96, iLocal_98, 0))
						{
							func_463("prostitute WAITING TO END   - DRIVING OFF (WANDER)");
							open_sequence_task(&iLocal_101);
							task_vehicle_drive_wander(false, iLocal_98, 10f, 786603);
							close_sequence_task(iLocal_101);
							task_perform_sequence(iLocal_97, iLocal_101);
							clear_sequence_task(&iLocal_101);
							vLocal_90 = {func_54(get_entity_coords(iLocal_96, 1))};
							request_anim_dict(func_44(iLocal_96, 0, 0));
							iLocal_295 = 7;
							iLocal_64 = get_game_timer();
						}
					}
				}
			}
			else
			{
				func_463("EXIT - OTHER OUT OF THE VEHICLE");
				func_90();
			}
		}
		else
		{
			func_463("EXIT - OTHER VEHICLE DEAD");
			func_90();
		}
	}
	else
	{
		func_463("EXIT - OTHER ped INJURED");
		func_90();
	}
}

Vector3 func_54(Vector3 vParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (vdist2(vParam0, func_55(iVar1)) < vdist2(vParam0, func_55(iVar0)))
		{
			iVar0 = iVar1;
		}
		iVar1++;
	}
	return func_55(iVar0);
}

Vector3 func_55(int iParam0)
{
	Vector3 vVar0;
	
	switch (iParam0)
	{
		case 0:
			vVar0 = {-1449.075f, -634.0139f, 29.094f};
			break;
		
		case 1:
			vVar0 = {-1266.291f, -1361.175f, 3.222f};
			break;
		
		case 2:
			vVar0 = {-227.0429f, 311.6679f, 91.1655f};
			break;
		
		case 3:
			vVar0 = {-1310.978f, -235.9881f, 41.1789f};
			break;
		
		case 4:
			vVar0 = {-545.299f, -874.6625f, 26.1981f};
			break;
		
		case 5:
			vVar0 = {-192.1116f, -1332.385f, 30.3304f};
			break;
		
		case 6:
			vVar0 = {196.6188f, -1850.396f, 26.2005f};
			break;
		
		case 7:
			vVar0 = {322.9744f, -1000.23f, 28.2401f};
			break;
		
		case 8:
			vVar0 = {38.824f, -98.3984f, 55.2507f};
			break;
		
		case 9:
			vVar0 = {-1800.76f, -404.1213f, 43.8109f};
			break;
		
		case 10:
			vVar0 = {1421.334f, -1618.83f, 58.3324f};
			break;
		
		case 11:
			vVar0 = {983.5914f, -2360.14f, 29.5098f};
			break;
		
		case 12:
			vVar0 = {97.9046f, -2501.28f, 5.0001f};
			break;
		
		case 13:
			vVar0 = {1591.921f, 6516.841f, 16.3155f};
			break;
		
		case 14:
			vVar0 = {1278.73f, 3624.059f, 32.0408f};
			break;
		
		case 15:
			vVar0 = {2464.667f, 5526.815f, 44.2143f};
			break;
		
		case 16:
			vVar0 = {2052.58f, 4637.477f, 39.642f};
			break;
		
		case 17:
			vVar0 = {1435.608f, 4483.951f, 49.2513f};
			break;
		
		case 18:
			vVar0 = {218.214f, 4439.288f, 66.9056f};
			break;
		
		case 19:
			vVar0 = {16.9496f, 3632.35f, 39.2848f};
			break;
		
		case 20:
			vVar0 = {2.0464f, 3293.74f, 40.2594f};
			break;
		
		case 21:
			vVar0 = {-1195.701f, 2639.13f, 15.1653f};
			break;
		
		case 22:
			vVar0 = {-1663.641f, 2477.778f, 30.9941f};
			break;
		
		case 23:
			vVar0 = {-2505.643f, 3677.825f, 12.1719f};
			break;
		
		case 24:
			vVar0 = {-2179.209f, 4264.236f, 47.9904f};
			break;
		
		case 25:
			vVar0 = {-758.9616f, 5612.78f, 29.4536f};
			break;
		
		case 26:
			vVar0 = {-276.8032f, 6327.188f, 31.4262f};
			break;
		
		case 27:
			vVar0 = {1483.839f, 6366.199f, 22.6875f};
			break;
		
		case 28:
			vVar0 = {949.013f, 3551.753f, 32.9687f};
			break;
		
		case 29:
			vVar0 = {180.9372f, 3051.781f, 42.1131f};
			break;
		
		case 30:
			vVar0 = {-462.9046f, 6115.419f, 28.8805f};
			break;
		
		case 31:
			vVar0 = {-256.3564f, 6056.516f, 30.9808f};
			break;
	}
	return vVar0;
}

void func_56()
{
	float fVar0;
	
	if (!is_ped_injured(iLocal_97))
	{
		if (is_vehicle_driveable(iLocal_98, 0))
		{
			if (is_ped_in_vehicle(iLocal_97, iLocal_98, 0))
			{
				fVar0 = get_entity_speed(iLocal_98);
				if (is_entity_at_entity(iLocal_97, iLocal_96, 15f, 15f, 5f, 0, 1, 0) && fVar0 <= 1f)
				{
					func_63(iLocal_96);
					iLocal_65 = get_game_timer();
					iLocal_66 = iLocal_65 - iLocal_64;
					if (iLocal_66 >= iLocal_68)
					{
						if (func_522())
						{
							if (network_has_control_of_entity(iLocal_97))
							{
								task_clear_look_at(iLocal_97);
							}
						}
						else
						{
							task_clear_look_at(iLocal_97);
						}
						iLocal_68 = get_random_int_in_range(false, 10000);
						if (iLocal_68 > 2500)
						{
							clear_ped_tasks(iLocal_96);
							clear_sequence_task(&iLocal_101);
							open_sequence_task(&iLocal_101);
							task_enter_vehicle(false, iLocal_98, -1, false, 1f, 8388609, 0);
							task_stand_still(false, -1);
							close_sequence_task(iLocal_101);
							task_perform_sequence(iLocal_96, iLocal_101);
							clear_sequence_task(&iLocal_101);
							func_463("other GIVES MONEY");
							iLocal_295 = 5;
						}
						else
						{
							func_62();
							func_57();
							if (!is_ped_injured(iLocal_97))
							{
								if (is_vehicle_driveable(iLocal_98, 0))
								{
									if (is_ped_in_vehicle(iLocal_97, iLocal_98, 0))
									{
										clear_sequence_task(&iLocal_101);
										open_sequence_task(&iLocal_101);
										task_stand_still(false, get_random_int_in_range(500, 2000));
										task_vehicle_drive_wander(false, iLocal_98, 10f, 786603);
										close_sequence_task(iLocal_101);
										task_perform_sequence(iLocal_97, iLocal_101);
										clear_sequence_task(&iLocal_101);
										iLocal_64 = get_game_timer();
									}
								}
							}
							func_463("prostitute REFUSED MONEY 2");
							if (func_522())
							{
								if (network_has_control_of_entity(iLocal_97))
								{
									task_clear_look_at(iLocal_97);
								}
							}
							else
							{
								task_clear_look_at(iLocal_97);
							}
							iLocal_295 = 6;
						}
					}
				}
				else
				{
					if (func_522())
					{
						if (network_has_control_of_entity(iLocal_97))
						{
							task_clear_look_at(iLocal_97);
						}
					}
					else
					{
						task_clear_look_at(iLocal_97);
					}
					func_90();
				}
			}
			else
			{
				func_463("EXIT - OTHER OUT OF THE VEHICLE");
				if (func_522())
				{
					if (network_has_control_of_entity(iLocal_97))
					{
						task_clear_look_at(iLocal_97);
					}
				}
				else
				{
					task_clear_look_at(iLocal_97);
				}
				func_90();
			}
		}
		else
		{
			func_463("EXIT - OTHER VEHICLE DEAD");
			func_90();
		}
	}
	else
	{
		func_463("EXIT - OTHER ped INJURED");
		func_90();
	}
}

bool func_57()
{
	int iVar0;
	
	if (!does_entity_exist(iLocal_96) || is_ped_injured(iLocal_96))
	{
		return true;
	}
	if (!func_522())
	{
		if (is_ped_in_any_vehicle(iLocal_96, 1))
		{
			task_wander_standard(iLocal_96, 1193033728, 0);
		}
		else if (func_462(iLocal_49, 4194304))
		{
			open_sequence_task(&iVar0);
			if (func_462(iLocal_75, 524288))
			{
				task_play_anim(false, func_61(iLocal_293), func_60(7), 8f, -1.5f, -1, 0, 0, 0, 0, 0);
			}
			func_58(1);
			close_sequence_task(iVar0);
			task_perform_sequence(iLocal_96, iVar0);
			clear_sequence_task(&iVar0);
			func_454(&iLocal_49, 16384);
			func_34(&iLocal_113);
		}
		return true;
	}
	if (is_ped_in_any_vehicle(iLocal_96, 1))
	{
		if (network_has_control_of_entity(iLocal_96))
		{
			task_wander_standard(iLocal_96, 1193033728, 0);
			return true;
		}
		else
		{
			network_request_control_of_entity(iLocal_96);
		}
	}
	switch (iLocal_54)
	{
		case 0:
			if (func_462(iLocal_49, 4194304))
			{
				iLocal_54 = 1;
			}
			break;
		
		case 1:
			if (func_462(iLocal_75, 524288))
			{
				if (network_has_control_of_entity(iLocal_96))
				{
					task_play_anim(iLocal_96, func_61(iLocal_293), func_60(7), 8f, -1.5f, -1, 0, 0, 0, 0, 0);
				}
				else
				{
					network_request_control_of_entity(iLocal_96);
					return false;
				}
			}
			iLocal_54 = 2;
			break;
		
		case 2:
			if (func_462(iLocal_75, 524288))
			{
				if (network_has_control_of_entity(iLocal_96))
				{
					if (get_script_task_status(iLocal_96, -2017877118) == 7)
					{
						func_58(0);
						iLocal_54 = 3;
					}
				}
				else
				{
					network_request_control_of_entity(iLocal_96);
				}
			}
			else if (network_has_control_of_entity(iLocal_96))
			{
				func_58(0);
				iLocal_54 = 3;
			}
			else
			{
				network_request_control_of_entity(iLocal_96);
			}
			break;
		
		case 3:
			func_454(&iLocal_49, 16384);
			func_34(&iLocal_113);
			return true;
			break;
	}
	return false;
}

void func_58(int iParam0)
{
	Vector3 vVar0;
	
	if (((ped_has_use_scenario_task(iLocal_96) || is_ped_active_in_scenario(iLocal_96)) || is_ped_using_scenario(iLocal_96, func_59(0))) || is_ped_using_scenario(iLocal_96, func_59(1)))
	{
		return;
	}
	vVar0 = {get_entity_coords(iLocal_96, 1)};
	if (!does_scenario_of_type_exist_in_area(vVar0, func_59(0), 20f, 1) && !does_scenario_of_type_exist_in_area(vVar0, func_59(1), 20f, 1))
	{
		if (iParam0)
		{
			task_wander_standard(false, 1193033728, 0);
		}
		else
		{
			task_wander_standard(iLocal_96, 1193033728, 0);
		}
		return;
	}
	if (!iParam0)
	{
		task_use_nearest_scenario_to_coord(iLocal_96, vVar0, 20f, 0);
	}
	else
	{
		task_use_nearest_scenario_to_coord(false, vVar0, 20f, 0);
	}
}

char* func_59(int iParam0)
{
	if (iParam0 == 0)
	{
		return "WORLD_HUMAN_PROSTITUTE_LOW_CLASS";
	}
	return "WORLD_HUMAN_PROSTITUTE_HIGH_CLASS";
}

char* func_60(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "idle_intro";
			break;
		
		case 1:
			return "idle_a";
			break;
		
		case 2:
			return "idle_b";
			break;
		
		case 3:
			return "idle_c";
			break;
		
		case 4:
			return "idle_wait";
			break;
		
		case 5:
			return "idle_reject";
			break;
		
		case 8:
			return "idle_reject_loop_a";
			break;
		
		case 9:
			return "idle_reject_loop_b";
			break;
		
		case 10:
			return "idle_reject_loop_c";
			break;
		
		case 11:
			return "idle_outro";
			break;
		
		case 6:
			return "reject_2_idle";
			break;
		
		case 7:
			return "reject_outro";
			break;
	}
	return "";
}

char* func_61(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "mini@hookers_spcrackhead";
			break;
		
		case 1:
			sVar0 = "mini@hookers_spcokehead";
			break;
		
		case 3:
		case 4:
			sVar0 = "mini@hookers_spfrench";
			break;
		
		case 2:
		default:
			sVar0 = "mini@hookers_spvanilla";
			break;
	}
	return sVar0;
}

void func_62()
{
	if (is_ped_injured(iLocal_96))
	{
		return;
	}
	if (!is_any_speech_playing(iLocal_96))
	{
		if (func_18() == 2)
		{
			_play_ambient_speech1(iLocal_96, "HOOKER_DECLINED_TREVOR", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
		}
		else
		{
			_play_ambient_speech1(iLocal_96, "HOOKER_DECLINED", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
		}
	}
}

void func_63(int iParam0)
{
	if (!is_ped_injured(iParam0))
	{
		if (func_64(iParam0))
		{
			set_ped_reset_flag(iParam0, 109, true);
		}
	}
}

bool func_64(int iParam0)
{
	if (!is_ped_injured(iParam0))
	{
		if ((is_entity_playing_anim(iParam0, func_61(iLocal_293), func_60(1), 3) || is_entity_playing_anim(iParam0, func_61(iLocal_293), func_60(2), 3)) || is_entity_playing_anim(iParam0, func_61(iLocal_293), func_60(3), 3))
		{
			return true;
		}
	}
	return false;
}

void func_65()
{
	float fVar0;
	
	if (!is_ped_injured(iLocal_97))
	{
		if (is_vehicle_driveable(iLocal_98, 0))
		{
			if (is_ped_in_vehicle(iLocal_97, iLocal_98, 0))
			{
				if (get_script_task_status(iLocal_96, 242628503) == 1)
				{
					if (get_sequence_progress(iLocal_96) > 1)
					{
						if (is_entity_at_entity(iLocal_96, iLocal_97, 20f, 20f, 10f, 0, 1, 0))
						{
							fVar0 = get_entity_speed(iLocal_98);
							if (fVar0 <= 1f)
							{
								func_66(0);
								iLocal_64 = get_game_timer();
								iLocal_68 = get_random_int_in_range(4000, 8000);
								func_463("prostitute proposition other in VEHICLE VEHICLE");
								iLocal_295 = 4;
							}
						}
						else
						{
							func_463("EXIT - OTHER IN VEHICLE OUT OF RANGE");
							func_90();
						}
					}
				}
			}
			else
			{
				func_463("EXIT - OTHER OUT OF THE VEHICLE");
				func_90();
			}
		}
		else
		{
			func_463("EXIT - OTHER VEHICLE DEAD");
			func_90();
		}
	}
	else
	{
		func_463("EXIT - OTHER ped INJURED");
		func_90();
	}
}

bool func_66(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!func_522())
	{
		if (iParam0)
		{
			_0x153973AB99FE8980(iLocal_96, "PROSTITUTE_GROUP", 0f);
			func_81("PROSTITUTES_SOLICIT_SCENE");
		}
		func_67();
		if (func_462(iLocal_49, 4194304))
		{
			iVar0 = get_random_int_in_range(true, 4);
			open_sequence_task(&iVar1);
			task_play_anim(false, func_61(iLocal_293), func_60(0), 2f, -2f, -1, 0, 0, 0, 0, 0);
			task_play_anim(false, func_61(iLocal_293), func_60(iVar0), 2f, -2f, -1, 0, 0, 0, 0, 0);
			task_play_anim(false, func_61(iLocal_293), func_60(4), 2f, -2f, -1, 1, 0, 0, 0, 0);
			close_sequence_task(iVar1);
			task_perform_sequence(iLocal_96, iVar1);
			clear_sequence_task(&iVar1);
		}
		return true;
	}
	switch (iLocal_53)
	{
		case 0:
			if (iParam0)
			{
				_0x153973AB99FE8980(iLocal_96, "PROSTITUTE_GROUP", 0f);
				func_81("PROSTITUTES_SOLICIT_SCENE");
			}
			func_67();
			iLocal_53 = 1;
			break;
		
		case 1:
			if (func_462(iLocal_49, 4194304))
			{
				if (network_has_control_of_entity(iLocal_96))
				{
					task_play_anim(iLocal_96, func_61(iLocal_293), func_60(0), 2f, -2f, -1, 0, 0, 0, 0, 0);
					iLocal_53 = 2;
				}
				else
				{
					network_request_control_of_entity(iLocal_96);
				}
			}
			break;
		
		case 2:
			if (network_has_control_of_entity(iLocal_96))
			{
				if (get_script_task_status(iLocal_96, -2017877118) == 7)
				{
					iVar0 = get_random_int_in_range(true, 4);
					task_play_anim(iLocal_96, func_61(iLocal_293), func_60(iVar0), 2f, -2f, -1, 0, 0, 0, 0, 0);
					iLocal_53 = 3;
				}
			}
			else
			{
				network_request_control_of_entity(iLocal_96);
			}
			break;
		
		case 3:
			if (network_has_control_of_entity(iLocal_96))
			{
				if (get_script_task_status(iLocal_96, -2017877118) == 7)
				{
					task_play_anim(iLocal_96, func_61(iLocal_293), func_60(4), 2f, -2f, -1, 1, 0, 0, 0, 0);
					iLocal_53 = 4;
				}
			}
			else
			{
				network_request_control_of_entity(iLocal_96);
			}
			break;
		
		case 4:
			iLocal_53 = 0;
			return true;
			break;
	}
	return false;
}

void func_67()
{
	if (is_ped_injured(iLocal_96))
	{
		return;
	}
	if (!is_any_speech_playing(iLocal_96))
	{
		switch (func_18())
		{
			case 0:
				if (!func_68(iLocal_96))
				{
					_play_ambient_speech1(iLocal_96, "SOLICIT_MICHAEL", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				}
				else
				{
					_play_ambient_speech1(iLocal_96, "SOLICIT_MICHAEL_RETURN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				}
				break;
			
			case 1:
				if (!func_68(iLocal_96))
				{
					_play_ambient_speech1(iLocal_96, "SOLICIT_FRANKLIN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				}
				else
				{
					_play_ambient_speech1(iLocal_96, "SOLICIT_FRANKLIN_RETURN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				}
				break;
			
			case 2:
				if (!func_68(iLocal_96))
				{
					_play_ambient_speech1(iLocal_96, "SOLICIT_TREVOR", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				}
				else
				{
					_play_ambient_speech1(iLocal_96, "SOLICIT_TREVOR_RETURN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				}
				break;
			}
	}
}

int func_68(int iParam0)
{
	int iVar0;
	
	iVar0 = func_71(iParam0);
	return func_69(iVar0);
}

bool func_69(int iParam0)
{
	if (func_70(iParam0) > 0)
	{
		return true;
	}
	return false;
}

int func_70(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 == -1)
	{
		return 0;
	}
	if (func_18() == 0)
	{
		iVar0 = Global_101154.f_8739.f_1[iParam0 /*11*/][0];
	}
	else if (func_18() == 1)
	{
		iVar0 = Global_101154.f_8739.f_1[iParam0 /*11*/][1];
	}
	else if (func_18() == 2)
	{
		iVar0 = Global_101154.f_8739.f_1[iParam0 /*11*/][2];
	}
	return iVar0;
}

int func_71(int iParam0)
{
	int iVar0;
	
	if (!is_entity_dead(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (func_70(iVar0) > 0)
			{
				if ((func_77(iParam0, iVar0) && func_73(iParam0, iVar0)) && func_72(iParam0, iVar0))
				{
					return iVar0;
				}
			}
			iVar0++;
		}
	}
	return -1;
}

bool func_72(int iParam0, int iParam1)
{
	if (is_ped_model(iParam0, Global_101154.f_8739.f_1[iParam1 /*11*/].f_10))
	{
		return true;
	}
	return false;
}

bool func_73(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!func_74(iParam0, iParam1, iVar0))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

int func_74(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_76(iParam2);
	return get_ped_texture_variation(iParam0, iVar0) == func_75(iParam1, iParam2);
}

int func_75(int iParam0, int iParam1)
{
	if (func_69(iParam0))
	{
		return Global_101154.f_8739.f_1[iParam0 /*11*/].f_7[iParam1];
	}
	return -1;
}

int func_76(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 2;
			break;
	}
	return iVar0;
}

bool func_77(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!func_78(iParam0, iParam1, iVar0))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

int func_78(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_80(iParam2);
	return get_ped_drawable_variation(iParam0, iVar0) == func_79(iParam1, iParam2);
}

int func_79(int iParam0, int iParam1)
{
	if (func_69(iParam0))
	{
		return Global_101154.f_8739.f_1[iParam0 /*11*/].f_4[iParam1];
	}
	return -1;
}

int func_80(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 2;
			break;
	}
	return iVar0;
}

void func_81(char* sParam0)
{
	if (!is_audio_scene_active(sParam0))
	{
		start_audio_scene(sParam0);
	}
}

void func_82()
{
	float fVar0;
	Vector3 vVar1;
	Vector3 vVar4;
	Vector3 vVar7;
	Vector3 vVar10;
	Vector3 vVar13;
	Vector3 vVar16;
	
	if (!is_ped_injured(iLocal_97))
	{
		if (is_vehicle_driveable(iLocal_98, 0))
		{
			if (is_ped_in_vehicle(iLocal_97, iLocal_98, 0))
			{
				fVar0 = get_entity_speed(iLocal_98);
				if (get_script_task_status(iLocal_97, -272084098) == 7 || fVar0 <= 1f)
				{
					get_model_dimensions(get_entity_model(iLocal_98), &vVar4, &vVar1);
					vVar7 = {vVar1 - vVar4};
					vVar7 = {vVar7 / Vector(2f, 2f, 2f)};
					vVar10 = {get_offset_from_entity_in_world_coords(iLocal_98, 0.2f, 0.2f, 0f)};
					vVar13 = {get_offset_from_entity_in_world_coords(iLocal_98, 0.2f, 0.2f, 0f)};
					vVar16 = {get_entity_coords(iLocal_96, 1)};
					if (vdist(vVar16, vVar13) < vdist(vVar16, vVar10))
					{
						vVar10 = {vVar13};
					}
					open_sequence_task(&iLocal_101);
					task_follow_nav_mesh_to_coord(false, vVar10.x, vVar10.y, vVar10.z, 1f, -1, 0.5f, 8192, 1193033728);
					task_turn_ped_to_face_entity(false, iLocal_97, false);
					task_stand_still(false, -1);
					close_sequence_task(iLocal_101);
					task_perform_sequence(iLocal_96, iLocal_101);
					clear_sequence_task(&iLocal_101);
					func_463("prostitute ASKING OTHER FOR MONEY BY VEHICLE");
					iLocal_295 = 3;
				}
				else
				{
					func_463("WAITING FOR CUTSTOMER FINSIH TASK OR STOP");
				}
			}
			else
			{
				func_463("EXIT - OTHER OUT OF VEHICLE");
				func_90();
			}
		}
		else
		{
			func_463("EXIT - OTHER VEHICLE DEAD");
			func_90();
		}
	}
	else
	{
		func_463("EXIT - OTHER ped INJURED");
		func_90();
	}
}

void func_83()
{
	Vector3 vVar0;
	
	if (!is_ped_injured(iLocal_97))
	{
		if (is_vehicle_driveable(iLocal_98, 0))
		{
			if (is_ped_in_vehicle(iLocal_97, iLocal_98, 0))
			{
				if (func_85(&iLocal_98))
				{
					if (func_84(get_entity_coords(iLocal_97, 1), 1106247680))
					{
						return;
					}
					vVar0 = {get_entity_coords(iLocal_96, 1)};
					if (get_closest_vehicle_node(vVar0, &vVar0, 8, 3f, 0f))
					{
						set_driver_ability(iLocal_97, 1f);
						_0xDED5AF5A0EA4B297(iLocal_97, 0.2f);
						set_driver_aggressiveness(iLocal_97, 0.05f);
						task_vehicle_park(iLocal_97, iLocal_98, vVar0, 0f, 3, 360f, 1);
						task_look_at_entity(iLocal_97, iLocal_96, -1, 2048, 4);
						func_463("OTHER TOLD TO PULL OVER");
						iLocal_295 = 2;
					}
				}
				else
				{
					func_463("EXIT - Vehicle is not suitable");
					func_89(15);
				}
			}
			else
			{
				func_463("EXIT - OTHER OUT OF THE VEHICLE");
				func_89(15);
			}
		}
		else
		{
			func_463("EXIT - OTHER VEHICLE DEAD");
			func_89(15);
		}
	}
	else
	{
		func_463("EXIT - OTHER ped INJURED");
		func_89(15);
	}
}

int func_84(Vector3 vParam0, int iParam1)
{
	if (func_522())
	{
		return is_cop_ped_in_area_3d(vParam0 - Vector(iParam3, iParam3, iParam3), vParam0 + Vector(iParam3, iParam3, iParam3));
	}
	return (is_cop_vehicle_in_area_3d(vParam0 - Vector(iParam3, iParam3, iParam3), vParam0 + Vector(iParam3, iParam3, iParam3)) || is_cop_ped_in_area_3d(vParam0 - Vector(iParam3, iParam3, iParam3), vParam0 + Vector(iParam3, iParam3, iParam3)));
}

bool func_85(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (is_vehicle_driveable(*iParam0, 0))
	{
		iVar0 = get_entity_model(*iParam0);
		if (func_88(iVar0, 0) && func_87(*iParam0))
		{
			if (get_vehicle_max_number_of_passengers(*iParam0) > 0)
			{
				iVar1 = get_vehicle_number_of_passengers(*iParam0);
				if (((iVar1 == 0 && is_vehicle_seat_free(*iParam0, false)) && (!is_vehicle_door_damaged(*iParam0, true) && !is_vehicle_door_damaged(*iParam0, false))) || get_ped_in_vehicle_seat(*iParam0, false) == iLocal_96)
				{
					if (func_41(*iParam0))
					{
						if (!func_462(iLocal_49, 32768))
						{
							func_454(&iLocal_49, 32768);
							if (!func_462(iLocal_49, 8))
							{
								request_clip_set(func_86());
								func_454(&iLocal_49, 8);
							}
						}
					}
					else
					{
						if (func_462(iLocal_49, 32768))
						{
							func_5(&iLocal_49, 32768);
						}
						if (func_462(iLocal_49, 8))
						{
							if (has_clip_set_loaded(func_86()))
							{
								remove_clip_set(func_86());
								func_5(&iLocal_49, 8);
							}
						}
					}
					return true;
				}
			}
		}
	}
	return false;
}

char* func_86()
{
	return "clipset@veh@low@ps@female@base";
}

bool func_87(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char[16] cVar3;
	
	if (is_vehicle_driveable(iParam0, 0))
	{
		if (get_num_mod_kits(iParam0) > 0)
		{
			iVar0 = 0;
			while (iVar0 < 49)
			{
				iVar1 = iVar0;
				if (((((iVar1 != 17 && iVar1 != 18) && iVar1 != 19) && iVar1 != 20) && iVar1 != 21) && iVar1 != 22)
				{
					if (get_vehicle_mod(iParam0, iVar1) != -1)
					{
						StringCopy(&cVar3, get_mod_text_label(iParam0, iVar1, get_vehicle_mod(iParam0, iVar1)), 16);
						iVar2 = get_hash_key(&cVar3);
						if (iVar2 != 0)
						{
							if (iVar2 == get_hash_key("SABRE_CAG"))
							{
								return false;
							}
						}
					}
				}
				iVar0++;
			}
		}
		switch (get_vehicle_layout_hash(iParam0))
		{
			case -2066252141:
			case -782720499:
			case 542797648:
			case 68566729:
			case 1486715695:
			case -1917671975:
			case -1405350320:
			case -157990217:
			case -280076747:
			case 1710903184:
			case 434478421:
			case 1816176348:
			case 919485892:
			case 945079693:
			case 85100643:
			case 1939145032:
			case 1869774540:
			case -28233912:
			case -1150063973:
			case -463340997:
			case -703649403:
			case 197952738:
			case -208246612:
			case 2033852426:
			case -1820894825:
			case 1697345049:
			case -635697407:
			case -1910741341:
			case -1158091941:
			case -1834221859:
			case -1453479140:
			case -1954624455:
			case 1837596901:
			case 2013836096:
			case 1374303184:
			case 1419869906:
			case -526725184:
			case 1610027666:
			case -970031572:
				return true;
				break;
		}
		if (get_vehicle_layout_hash(iParam0) == 931866387 && get_entity_model(iParam0) == joaat("slamvan"))
		{
			return true;
		}
	}
	return false;
}

bool func_88(int iParam0, int iParam1)
{
	if ((((is_this_model_a_boat(iParam0) || is_this_model_a_plane(iParam0)) || is_this_model_a_heli(iParam0)) || is_this_model_a_train(iParam0)) || is_this_model_a_bike(iParam0))
	{
		return false;
	}
	if (!iParam1)
	{
		if (((((((iParam0 == joaat("police") || iParam0 == joaat("police2")) || iParam0 == joaat("police3")) || iParam0 == joaat("police4")) || iParam0 == joaat("fbi")) || iParam0 == joaat("fbi2")) || iParam0 == joaat("caddy")) || iParam0 == joaat("caddy2"))
		{
			return false;
		}
	}
	if ((((iParam0 == joaat("issi2") || iParam0 == joaat("hotknife")) || iParam0 == joaat("jb700")) || iParam0 == joaat("jester")) || iParam0 == joaat("jester2"))
	{
		return false;
	}
	return true;
}

void func_89(int iParam0)
{
	iLocal_295 = iParam0;
}

void func_90()
{
	if (func_522())
	{
		if (network_has_control_of_entity(iLocal_96))
		{
			clear_ped_tasks(iLocal_96);
			task_clear_look_at(iLocal_96);
		}
	}
	else
	{
		clear_ped_tasks(iLocal_96);
		task_clear_look_at(iLocal_96);
	}
	iLocal_97 = false;
	iLocal_98 = false;
	task_play_anim(iLocal_96, func_61(iLocal_293), func_60(4), 2f, -2f, -1, 1, get_random_float_in_range(0f, 0.9f), 0, 0, 0);
	func_89(0);
	iLocal_296 = 0;
	iLocal_294 = 1;
}

void func_91(auto uParam0)
{
	if (!func_462(iLocal_49, 32))
	{
		iLocal_294 = 1;
	}
	if (iLocal_295 > 1 && iLocal_295 != 12)
	{
		if (!func_462(iLocal_49, 33554432))
		{
			if (func_522())
			{
				if (Global_1706781 || func_446())
				{
					func_445(0);
					func_454(&iLocal_49, 33554432);
				}
			}
			if (get_player_wanted_level(player_id()) > 0)
			{
				if (func_462(iLocal_49, 1048576) || func_462(iLocal_49, 8192))
				{
					func_445(0);
					func_454(&iLocal_49, 33554432);
				}
			}
		}
	}
	switch (iLocal_295)
	{
		case 0:
			if (func_462(iLocal_49, 16384) || func_462(iLocal_49, 8388608))
			{
				if (!func_10(&iLocal_113))
				{
					func_444(&iLocal_113);
				}
				if (func_443(&iLocal_113, 25f))
				{
					func_5(&iLocal_49, 16384);
					func_5(&iLocal_49, 8388608);
				}
			}
			else if (iLocal_296 != 0 && !func_442("PROS_NO_MONEY"))
			{
				func_58(0);
				switch (func_18())
				{
					case 0:
						func_441(&uLocal_122, 0, player_ped_id(), "MICHAEL", 0, 1);
						break;
					
					case 1:
						func_441(&uLocal_122, 0, player_ped_id(), "FRANKLIN", 0, 1);
						break;
					
					case 2:
						func_441(&uLocal_122, 0, player_ped_id(), "TREVOR", 0, 1);
						break;
				}
				iLocal_295 = 1;
			}
			else
			{
				func_440();
				iLocal_296 = 2;
			}
			break;
		
		case 1:
			func_427(uParam0);
			break;
		
		case 2:
			func_414(uParam0);
			break;
		
		case 3:
			func_413();
			break;
		
		case 4:
			func_401(uParam0);
			break;
		
		case 5:
			func_394();
			break;
		
		case 6:
			func_393(uParam0);
			break;
		
		case 7:
			func_372();
			func_364();
			break;
		
		case 8:
			func_361();
			disable_control_action(0, 80, 1);
			disable_control_action(0, 0, 1);
			special_ability_deactivate(player_id());
			func_223();
			func_222(uParam0);
			func_221(uParam0);
			func_220(uParam0);
			if (func_522())
			{
				func_217(uParam0);
			}
			break;
		
		case 9:
			func_214();
			break;
		
		case 10:
			func_211();
			break;
		
		case 11:
			special_ability_deactivate(player_id());
			disable_control_action(0, 0, 1);
			disable_control_action(0, 80, 1);
			func_118();
			func_222(uParam0);
			func_221(uParam0);
			func_220(uParam0);
			func_115(uParam0);
			if (func_522())
			{
				set_ped_reset_flag(player_ped_id(), 433, true);
				func_217(uParam0);
			}
			break;
		
		case 12:
			func_461();
			break;
		
		case 13:
			disable_control_action(0, 80, 1);
			disable_control_action(0, 0, 1);
			func_96();
			break;
		
		case 14:
			func_95();
			break;
		
		case 15:
			disable_control_action(0, 80, 1);
			disable_control_action(0, 0, 1);
			func_92(uParam0);
			break;
	}
}

void func_92(auto uParam0)
{
	if (!func_522())
	{
		if (is_entity_playing_anim(player_ped_id(), func_44(player_ped_id(), 0, 0), func_94(1), 3))
		{
			return;
		}
	}
	if (func_462(iLocal_49, 16))
	{
		if (is_player_playing(player_id()))
		{
			set_player_can_do_drive_by(player_id(), 1);
			func_5(&iLocal_49, 16);
		}
	}
	if (func_462(iLocal_49, 2))
	{
		func_93(1);
		func_463("RESETTING INTERFACE FLAG TO FALSE - PROSTITUTE SCRIPT TERMINATING");
	}
	func_512();
	if (func_522())
	{
		func_507(uParam0);
	}
}

void func_93(int iParam0)
{
}

auto func_94(int iParam0)
{
	if (!func_462(iLocal_49, 32768))
	{
		if (iParam0)
		{
			return func_39(6);
		}
		else
		{
			return func_39(7);
		}
	}
	if (iParam0)
	{
		return func_40(6);
	}
	return func_40(7);
}

void func_95()
{
	if (!is_any_speech_playing(player_ped_id()))
	{
		if (iLocal_72 == 0)
		{
			if (func_462(iLocal_49, 134217728))
			{
				set_ped_flee_attributes(iLocal_96, 32768, false);
				set_ped_flee_attributes(iLocal_96, 196624, true);
			}
			_play_ambient_speech1(iLocal_96, "HOOKER_LEAVES_ANGRY", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			func_89(15);
		}
	}
}

void func_96()
{
	switch (iLocal_303)
	{
		case 0:
			if (!is_any_speech_playing(iLocal_96) || func_114(&iLocal_107) > 4f)
			{
				func_109(iLocal_96);
				if (func_70(func_71(iLocal_96)) == 1)
				{
					iLocal_303 = 2;
				}
				else
				{
					func_108(&iLocal_107);
					func_107("PROS_RESPONSE");
					iLocal_303 = 1;
				}
			}
			break;
		
		case 1:
			func_106();
			if (is_any_speech_playing(iLocal_96) || func_105())
			{
				set_player_control(player_id(), false, 256);
				func_454(&iLocal_49, 2048);
			}
			else
			{
				if (!func_10(&iLocal_107))
				{
					func_34(&iLocal_107);
				}
				if (func_114(&iLocal_107) > 15f || iLocal_306 != 0)
				{
					clear_help(1);
					func_104();
					iLocal_303 = 2;
				}
			}
			break;
		
		case 2:
			if (!func_105())
			{
				iLocal_303 = 3;
			}
			break;
		
		case 3:
			func_99(0);
			func_97();
			func_89(15);
			break;
	}
}

bool func_97()
{
	if (func_98(0))
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

int func_98(int iParam0)
{
	if (!iParam0 && _get_number_of_instances_of_streamed_script(joaat("benchmark")) > 0)
	{
		return true;
	}
	return is_bit_set(Global_69737, false);
}

void func_99(int iParam0)
{
	if (!is_ped_injured(iLocal_96))
	{
		if (is_screen_faded_out())
		{
			delete_ped(&iLocal_96);
		}
		else
		{
			func_100(iLocal_96, iParam0);
		}
	}
}

void func_100(int iParam0, int iParam1)
{
	int iVar0;
	Vector3 fVar1;
	
	if (is_entity_playing_anim(player_ped_id(), func_44(player_ped_id(), 0, 0), func_103(1), 3))
	{
		task_play_anim(player_ped_id(), func_44(player_ped_id(), 0, 0), func_94(1), 4f, -8f, -1, 0, 0, 0, 0, 0);
	}
	if (!is_ped_injured(iParam0))
	{
		if (func_522())
		{
			if (network_has_control_of_entity(iParam0))
			{
				reset_ped_in_vehicle_context(iParam0);
			}
		}
		else
		{
			reset_ped_in_vehicle_context(iParam0);
		}
		if (func_462(iLocal_49, 33554432))
		{
			clear_ped_tasks(iParam0);
		}
		if (iParam1)
		{
			fVar1 = get_random_float_in_range(0.1f, 2f);
			if (fVar1 <= 0.25f)
			{
				func_454(&iLocal_49, 134217728);
			}
		}
		if (func_462(iLocal_49, 134217728))
		{
			set_ped_flee_attributes(iParam0, 32768, true);
			task_smart_flee_ped(iParam0, player_ped_id(), 300f, -1, 1, 0);
		}
		else
		{
			set_ped_flee_attributes(iParam0, 196624, true);
			clear_sequence_task(&iVar0);
			open_sequence_task(&iVar0);
			task_set_blocking_of_non_temporary_events(false, 1);
			if (is_ped_in_any_vehicle(iParam0, 0))
			{
				if (!is_vehicle_stopped(get_vehicle_ped_is_in(iParam0, 0)))
				{
					func_102(iParam0, 1);
				}
				else
				{
					if (is_entity_playing_anim(iParam0, func_44(iParam0, 0, 0), func_103(0), 3))
					{
						if (iLocal_72 > 0)
						{
							task_play_anim(false, func_44(iParam0, 0, 0), func_94(0), 4f, -4f, -1, 0, 0, 0, 0, 0);
						}
						else
						{
							task_play_anim(false, func_44(iParam0, 0, 0), func_101(0), 4f, -4f, -1, 0, 0, 0, 0, 0);
						}
					}
					func_102(iParam0, 1);
				}
			}
			task_set_blocking_of_non_temporary_events(false, 0);
			task_wander_standard(false, 1193033728, 0);
			close_sequence_task(iVar0);
			task_perform_sequence(iParam0, iVar0);
			clear_sequence_task(&iVar0);
		}
		if (func_522())
		{
			if (_0xB07D3185E11657A5(iLocal_96))
			{
				if (_0xA1607996431332DF(network_get_network_id_from_entity(iLocal_96)))
				{
					set_ped_keep_task(iParam0, true);
				}
			}
		}
		else
		{
			set_ped_keep_task(iParam0, true);
		}
	}
}

auto func_101(int iParam0)
{
	if (!func_462(iLocal_49, 32768))
	{
		if (iParam0)
		{
			return func_39(4);
		}
		else
		{
			return func_39(5);
		}
	}
	if (iParam0)
	{
		return func_40(4);
	}
	return func_40(5);
}

void func_102(int iParam0, int iParam1)
{
	if (!_0x639431E895B9AA57(iParam0, get_vehicle_ped_is_in(iParam0, 0), 0, 0, false))
	{
		task_leave_any_vehicle(false, false, 16842752);
	}
	else
	{
		task_leave_any_vehicle(false, false, iParam1);
	}
}

auto func_103(int iParam0)
{
	if (!func_462(iLocal_49, 32768))
	{
		if (iParam0)
		{
			return func_39(2);
		}
		else
		{
			return func_39(3);
		}
	}
	if (iParam0)
	{
		return func_40(2);
	}
	return func_40(3);
}

void func_104()
{
	int iVar0;
	
	iVar0 = get_random_int_in_range(false, 1000);
	if ((iVar0 <= 333 && iLocal_306 == 0) || iLocal_306 == 3)
	{
		_play_ambient_speech1(player_ped_id(), "HOOKER_STORY_REVULSION_RESP", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	}
	else if (((iVar0 > 333 && iVar0 <= 666) && iLocal_306 == 0) || iLocal_306 == 1)
	{
		_play_ambient_speech1(player_ped_id(), "HOOKER_STORY_SARCASTIC_RESP", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	}
	else if (iLocal_306 == 0 || iLocal_306 == 2)
	{
		_play_ambient_speech1(player_ped_id(), "HOOKER_STORY_SYMPATHETIC_RESP", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	}
}

bool func_105()
{
	if (Global_15712 != 0 || is_scripted_conversation_ongoing())
	{
		return true;
	}
	return false;
}

void func_106()
{
	if (iLocal_306 == 0)
	{
		set_cinematic_button_active(false);
		disable_control_action(0, 99, 1);
		disable_control_action(0, 76, 1);
		disable_control_action(0, 80, 1);
		set_input_exclusive(2, 203);
		set_input_exclusive(2, 201);
		set_input_exclusive(2, 202);
		if (is_control_just_released(2, 203))
		{
			clear_help(1);
			play_sound_frontend(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			iLocal_306 = 3;
		}
		else if (is_control_just_released(2, 201))
		{
			clear_help(1);
			play_sound_frontend(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			iLocal_306 = 1;
		}
		else if (is_control_just_released(2, 202))
		{
			clear_help(1);
			play_sound_frontend(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			iLocal_306 = 2;
		}
	}
}

void func_107(char* sParam0)
{
	_set_text_component_format(sParam0);
	_display_help_text_from_string_label(0, 1, true, -1);
}

void func_108(int iParam0)
{
	*iParam0.f_1 = 0f;
	*iParam0.f_2 = 0f;
	*iParam0 = 0;
}

void func_109(int iParam0)
{
	int iVar0;
	
	iVar0 = func_71(iParam0);
	if (iVar0 > -1)
	{
		if (is_any_speech_playing(iParam0))
		{
			stop_current_playing_ambient_speech(iParam0);
		}
		if (!is_any_speech_playing(iParam0))
		{
			func_111(iParam0);
			func_110(iVar0);
		}
	}
}

void func_110(int iParam0)
{
	int iVar0;
	struct<6> Var1;
	
	iVar0 = func_70(iParam0);
	if (iVar0 < 6)
	{
		StringCopy(&Var1, "pbpro_H", 24);
		StringIntConCat(&Var1, iParam0 + 1, 24);
		StringConCat(&Var1, "V", 24);
		StringIntConCat(&Var1, iVar0, 24);
		func_11(&uLocal_122, "pbproau", &Var1, 4, 0, 0, 0);
	}
}

void func_111(int iParam0)
{
	int iVar0;
	
	iVar0 = func_71(iParam0);
	if (iVar0 > -1)
	{
		func_113(&uLocal_122, 4);
		func_441(&uLocal_122, 6, iParam0, func_112(iVar0), 0, 1);
	}
}

char* func_112(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "Hooker1";
			break;
		
		case 1:
			sVar0 = "Hooker2";
			break;
		
		case 2:
			sVar0 = "Hooker3";
			break;
		
		case 3:
			sVar0 = "Hooker4";
			break;
		
		case 4:
			sVar0 = "Hooker5";
			break;
		
		case 5:
			sVar0 = "Hooker6";
			break;
		
		case 6:
			sVar0 = "Hooker7";
			break;
		
		case 7:
			sVar0 = "Hooker8";
			break;
		
		default:
			sVar0 = "UPRO N/A";
	}
	return sVar0;
}

void func_113(auto uParam0, int iParam1)
{
	if (*(uParam0[iParam1 /*10*/]).f_7 == 1)
	{
		*(uParam0[iParam1 /*10*/]).f_7 = 0;
	}
}

float func_114(int iParam0)
{
	if (func_10(iParam0))
	{
		if (func_9(iParam0))
		{
			return *iParam0.f_2;
		}
		else
		{
			return func_8(is_bit_set(*iParam0, 4)) - *iParam0.f_1;
		}
	}
	return 0f;
}

void func_115(auto uParam0)
{
	int iVar0;
	int iVar1;
	
	if (!func_522())
	{
		return;
	}
	iVar0 = false;
	if (does_entity_exist(player_ped_id()))
	{
		if (is_ped_in_any_vehicle(player_ped_id(), 0))
		{
			iVar1 = get_vehicle_ped_is_in(player_ped_id(), 0);
			if (does_entity_exist(iVar1))
			{
				if (get_ped_in_vehicle_seat(iVar1, -1) != player_ped_id())
				{
					iVar0 = true;
				}
				if (get_ped_in_vehicle_seat(iVar1, false) != iLocal_96)
				{
					iVar0 = true;
				}
				if (get_vehicle_number_of_passengers(iVar1) > 2)
				{
					iVar0 = true;
				}
				if (iVar0)
				{
					func_116(0);
					clear_ped_tasks(player_ped_id());
					func_512();
					func_507(uParam0);
				}
			}
		}
	}
}

void func_116(int iParam0)
{
	Vector3 vVar0;
	
	if (iParam0)
	{
		vVar0 = {get_entity_rotation(iLocal_99, 2)};
		set_gameplay_cam_relative_heading(180f);
		set_gameplay_cam_relative_pitch(-5.5f - vVar0.x, 1f);
	}
	render_script_cams(false, false, 3000, 1, 0, 0);
	func_117(&(Local_313[0 /*7*/]));
	func_117(&(Local_313[3 /*7*/]));
	func_117(&(Local_313[2 /*7*/]));
	func_117(&(Local_313[1 /*7*/]));
	if (func_442("PROS_CAM_TOG") || func_442("PROS_CAM_OC"))
	{
		clear_help(1);
	}
}

void func_117(auto uParam0)
{
	if (does_cam_exist(*uParam0))
	{
		render_script_cams(false, false, 3000, 1, 0, 0);
		if (is_cam_active(*uParam0))
		{
			set_cam_active(*uParam0, false);
		}
		destroy_cam(*uParam0, 0);
	}
}

void func_118()
{
	if (is_vehicle_driveable(iLocal_99, 0))
	{
		set_vehicle_brake_lights(iLocal_99, 1);
	}
	if (iLocal_302 != 5)
	{
		if ((((((!func_210(iLocal_76) && !func_210(iLocal_77)) && !func_210(iLocal_78)) && !func_210(iLocal_79)) && !func_210(iLocal_80)) && !func_210(iLocal_81)) && !func_210(iLocal_82))
		{
			if (!is_ped_sitting_in_any_vehicle(iLocal_96) || has_entity_been_damaged_by_any_ped(player_ped_id()))
			{
				iLocal_302 = 5;
			}
			if (is_ped_in_any_vehicle(player_ped_id(), 0))
			{
				if (!is_vehicle_driveable(get_vehicle_ped_is_in(player_ped_id(), 0), 0))
				{
					iLocal_302 = 5;
				}
			}
		}
	}
	hide_hud_component_this_frame(2);
	disable_control_action(2, 19, 1);
	disable_control_action(2, 37, 1);
	func_206();
	switch (iLocal_302)
	{
		case 0:
			if (func_522())
			{
				func_203(1081, -1);
			}
			func_34(&iLocal_119);
			func_202(func_43(), func_462(iLocal_49, 32768));
			iLocal_302 = 1;
			func_463("Moving to PROSTITUTE_SERVICE_LOOPING");
			break;
		
		case 1:
			disable_control_action(0, 48, 1);
			disable_control_action(0, 0, 1);
			func_195();
			func_188();
			func_127();
			if (!func_42(0, 1))
			{
				func_126();
			}
			if (func_7(&iLocal_119) > 1f)
			{
				if (func_125())
				{
					func_5(&iLocal_49, 512);
					iLocal_305 = 0;
					func_124("PROSTITUTES_SOLICIT_SCENE");
					func_124("PROSTITUTES_SEX_SCENE");
					func_124("PROSTITUTES_BJ_SCENE");
					func_124("PROSTITUTES_BJ_SPEECH_SCENE");
					if (iLocal_72 >= 3)
					{
						func_123();
						iLocal_302 = 5;
					}
					else
					{
						func_122();
						set_follow_ped_cam_view_mode(iLocal_48);
						iLocal_302 = 3;
					}
				}
			}
			break;
		
		case 2:
			disable_control_action(0, 48, 1);
			func_195();
			if (!func_42(0, 1))
			{
				func_126();
			}
			if (func_42(0, 1))
			{
				disable_control_action(0, 0, 1);
			}
			if (func_7(&iLocal_119) > 1f)
			{
				if (func_125())
				{
					func_5(&iLocal_49, 512);
					iLocal_305 = 0;
					func_124("PROSTITUTES_SOLICIT_SCENE");
					func_124("PROSTITUTES_SEX_SCENE");
					func_124("PROSTITUTES_BJ_SCENE");
					func_124("PROSTITUTES_BJ_SPEECH_SCENE");
					iLocal_72 = 3;
					if (iLocal_72 >= 3)
					{
						func_123();
						iLocal_302 = 5;
						func_108(&iLocal_104);
					}
				}
			}
			break;
		
		case 3:
			disable_control_action(0, 0, 1);
			if (!is_any_speech_playing(iLocal_96))
			{
				func_124("PROSTITUTES_SOLICIT_SCENE");
				func_124("PROSTITUTES_BJ_SPEECH_SCENE");
				iLocal_301 = 0;
				iLocal_302 = 0;
				func_121();
				set_follow_ped_cam_view_mode(iLocal_48);
				iLocal_295 = 8;
			}
			break;
		
		case 5:
			disable_control_action(0, 0, 1);
			if (!is_any_speech_playing(iLocal_96))
			{
				if (iLocal_72 > 0)
				{
					if (func_120(iLocal_96))
					{
						func_119();
					}
					else
					{
						func_445(0);
					}
				}
				else
				{
					func_463("PROSTITUTE CANCEL PROS NO LONGER IN VEHICLE");
					func_445(1);
				}
			}
			break;
	}
}

void func_119()
{
	if (is_ped_injured(iLocal_96))
	{
		return;
	}
	if (!is_any_speech_playing(player_ped_id()))
	{
		if (iLocal_72 == 0)
		{
			_play_ambient_speech1(player_ped_id(), "HOOKER_DECLINE_SERVICE", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
		}
		else if (func_120(iLocal_96))
		{
			func_34(&iLocal_107);
			set_player_control(player_id(), false, 768);
			func_454(&iLocal_49, 2048);
			iLocal_295 = 13;
		}
	}
}

int func_120(int iParam0)
{
	int iVar0;
	
	iVar0 = func_71(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return func_70(iVar0) < 6;
}

void func_121()
{
	Global_2428492.f_648.f_10 = 1;
}

void func_122()
{
	if (is_ped_injured(iLocal_96))
	{
		return;
	}
	if (!is_any_speech_playing(iLocal_96))
	{
		_play_ambient_speech1(iLocal_96, "SEX_FINISHED", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	}
}

void func_123()
{
	if (is_ped_injured(iLocal_96))
	{
		return;
	}
	if (!is_any_speech_playing(iLocal_96))
	{
		_play_ambient_speech1(iLocal_96, "HOOKER_HAD_ENOUGH", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	}
}

void func_124(char* sParam0)
{
	if (is_audio_scene_active(sParam0))
	{
		stop_audio_scene(sParam0);
	}
}

bool func_125()
{
	if (iLocal_305 == 6)
	{
		return true;
	}
	return false;
}

void func_126()
{
	_disable_vehicle_first_person_cam_this_frame();
	_0x62ECFCFDEE7885D6();
}

void func_127()
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	if (is_string_null_or_empty(func_44(player_ped_id(), 0, 0)))
	{
		return;
	}
	if (!has_anim_dict_loaded(func_44(player_ped_id(), 0, 0)))
	{
		return;
	}
	if (!is_entity_dead(player_ped_id(), 0))
	{
		set_entity_invincible(player_ped_id(), false);
	}
	iVar1 = func_43();
	iVar2 = func_462(iLocal_49, 32768);
	if (!func_42(0, 1))
	{
		func_182(&iLocal_83);
	}
	disable_control_action(2, 19, 1);
	disable_control_action(2, 37, 1);
	func_181(23, 1);
	switch (iLocal_305)
	{
		case 0:
			func_5(&iLocal_49, 256);
			if (!func_42(0, 1))
			{
				func_176(&iLocal_83);
			}
			func_175(iLocal_96, 0);
			if (!func_522())
			{
				func_174(iVar1, iVar2);
			}
			func_173(iVar1, iVar2);
			iLocal_305 = 1;
			break;
		
		case 1:
			func_172(iLocal_76);
			if (func_210(iLocal_77))
			{
				if (!func_462(iLocal_50, 4))
				{
					if (!func_522())
					{
						fVar0 = 0.925f;
					}
					else
					{
						fVar0 = 0.986f;
					}
					if (func_171(iLocal_77) >= fVar0)
					{
						func_454(&iLocal_50, 4);
					}
				}
			}
			if (func_210(iLocal_76))
			{
				if (!func_462(iLocal_50, 8))
				{
					if (!func_522())
					{
						fVar0 = 0.925f;
					}
					else
					{
						fVar0 = 0.986f;
					}
					if (func_171(iLocal_76) >= fVar0)
					{
						func_454(&iLocal_50, 8);
					}
				}
			}
			if (func_462(iLocal_50, 4) && func_462(iLocal_50, 8))
			{
				if (!func_522())
				{
					func_170(iVar1, iVar2);
				}
				func_169(iVar1, iVar2);
				iLocal_305 = 2;
			}
			break;
		
		case 2:
			func_172(iLocal_78);
			if (func_210(iLocal_78))
			{
				if (!func_462(iLocal_50, 16))
				{
					if (!func_522())
					{
						fVar0 = 0.98f;
					}
					else
					{
						fVar0 = 0.986f;
					}
					if (func_171(iLocal_78) >= fVar0)
					{
						func_454(&iLocal_50, 16);
					}
				}
			}
			if (func_462(iLocal_50, 16))
			{
				if (!func_522())
				{
					func_168(iVar1, iVar2);
				}
				func_167(iVar1, iVar2);
				iLocal_305 = 3;
			}
			break;
		
		case 3:
			func_172(iLocal_79);
			if (func_210(iLocal_79))
			{
				if (!func_462(iLocal_50, 64))
				{
					if (!func_462(iLocal_49, 16777216))
					{
						if (!func_522())
						{
							fVar0 = 0.975f;
						}
						else
						{
							fVar0 = 0.986f;
						}
						if (func_171(iLocal_79) >= fVar0)
						{
							func_454(&iLocal_49, 16777216);
							iLocal_73++;
						}
					}
					else
					{
						if (!func_522())
						{
							fVar0 = 0.975f;
						}
						else
						{
							fVar0 = 0.986f;
						}
						if (func_171(iLocal_79) < fVar0)
						{
							func_5(&iLocal_49, 16777216);
						}
					}
					if (iLocal_73 >= func_160(func_522(), func_166(), func_161()))
					{
						func_454(&iLocal_50, 64);
						func_5(&iLocal_49, 16777216);
					}
				}
			}
			else if (!func_462(iLocal_50, 64))
			{
				func_454(&iLocal_50, 64);
			}
			if (func_462(iLocal_50, 64))
			{
				if (!func_522())
				{
					func_159(iVar1, iVar2);
				}
				func_158(iVar1, iVar2);
				iLocal_305 = 4;
			}
			break;
		
		case 4:
			func_172(iLocal_80);
			if (func_210(iLocal_80))
			{
				if (!func_462(iLocal_50, 256))
				{
					if (!func_522())
					{
						fVar0 = 0.925f;
					}
					else
					{
						fVar0 = 0.986f;
					}
					if (func_171(iLocal_80) >= fVar0)
					{
						func_454(&iLocal_50, 256);
					}
				}
			}
			else if (!func_462(iLocal_50, 256))
			{
				func_454(&iLocal_50, 256);
			}
			if (func_462(iLocal_50, 256))
			{
				if (!func_522())
				{
					func_152(iVar1, iVar2);
				}
				func_150(iVar1, iVar2);
				iLocal_305 = 5;
			}
			break;
		
		case 5:
			func_172(iLocal_81);
			if (func_210(iLocal_81))
			{
				if (!func_462(iLocal_50, 1024))
				{
					if (!func_522())
					{
						fVar0 = 0.975f;
					}
					else
					{
						fVar0 = 0.986f;
					}
					if (func_171(iLocal_81) >= fVar0)
					{
						func_454(&iLocal_50, 1024);
					}
				}
			}
			else if (!func_462(iLocal_50, 1024))
			{
				func_454(&iLocal_50, 1024);
			}
			if (func_210(iLocal_82))
			{
				if (!func_462(iLocal_50, 2048))
				{
					if (!func_522())
					{
						fVar0 = 0.975f;
					}
					else
					{
						fVar0 = 0.986f;
					}
					if (func_171(iLocal_82) >= fVar0)
					{
						func_454(&iLocal_50, 2048);
					}
				}
			}
			else if (!func_462(iLocal_50, 2048))
			{
				func_454(&iLocal_50, 2048);
			}
			if (func_462(iLocal_50, 1024) && func_462(iLocal_50, 2048))
			{
				func_175(iLocal_96, 0);
				task_play_anim(iLocal_96, func_44(player_ped_id(), 0, 0), func_38(iLocal_305, 1, iVar1, iVar2), 4f, -4f, -1, 1, 0, 0, 0, 0);
				func_175(player_ped_id(), -1);
				task_play_anim(player_ped_id(), func_44(player_ped_id(), 0, 0), func_38(iLocal_305, 0, iVar1, iVar2), 4f, -4f, -1, 1, 0, 0, 0, 0);
				func_116(1);
				iLocal_50 = 0;
				iLocal_73 = 0;
				iLocal_61 = 0;
				func_128();
				iLocal_305 = 6;
			}
			break;
	}
}

void func_128()
{
	int iVar0;
	
	if (iLocal_72 == 0 && !func_522())
	{
		if (func_21(player_ped_id()) == 0)
		{
			func_149();
		}
		func_144(296, 0, 0);
		iVar0 = func_71(iLocal_96);
		if (iVar0 > -1)
		{
			func_143(iVar0);
		}
		else
		{
			func_135(iLocal_96);
		}
	}
	iLocal_72++;
	func_129();
}

void func_129()
{
	switch (func_21(player_ped_id()))
	{
		case 0:
			Global_101154.f_8739.f_90[0]++;
			func_130(0, 1, 1);
			break;
		
		case 1:
			Global_101154.f_8739.f_90[1]++;
			func_130(1, 1, 1);
			break;
		
		case 2:
			Global_101154.f_8739.f_90[2]++;
			func_130(2, 1, 1);
			break;
		
		case 3:
			func_130(3, 1, 1);
			break;
	}
}

void func_130(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			Global_101154.f_1826.f_539.f_1475[iParam1 /*4*/][iParam0] += iParam2;
			break;
		
		case 3:
			iVar1 = 3949;
			switch (iParam1)
			{
				case 1:
					iVar1 = 72;
					break;
				
				case 3:
					iVar1 = 74;
					break;
				
				case 2:
					iVar1 = 73;
					break;
				
				case 4:
					iVar1 = 75;
					break;
				
				case 5:
					iVar1 = 76;
					break;
				
				case 6:
					iVar1 = 77;
					break;
				
				case 7:
					iVar1 = 78;
					break;
			}
			if (iVar1 != 3949)
			{
				iVar0 = func_134(iVar1, -1, 0);
				iVar0 += iParam2;
				if (iVar0 > 100)
				{
					iVar0 = 100;
				}
				func_131(iVar1, iVar0, -1, 1);
			}
			break;
	}
}

void func_131(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2469339[iParam0 /*5*/][func_132(iParam2)];
	if (iVar0 != 0)
	{
		stat_set_int(iVar0, iParam1, iParam3);
	}
}

int func_132(auto uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_133();
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

auto func_133()
{
	return Global_1312747;
}

int func_134(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	auto uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2469339[iParam0 /*5*/][func_132(iParam1)];
	if (stat_get_int(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_135(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	auto uVar3;
	int iVar4;
	
	if (is_entity_dead(iParam0, 0))
	{
		return;
	}
	iVar0 = func_142();
	if (iVar0 == -1)
	{
		return;
	}
	func_143(iVar0);
	set_ped_name_debug(iParam0, func_140(iVar0));
	Global_101154.f_8739.f_1[iVar0 /*11*/].f_10 = get_entity_model(iParam0);
	iVar2 = 0;
	while (iVar2 < 2)
	{
		iVar1 = iVar2;
		uVar3 = func_139(iParam0, iVar1);
		func_138(iVar0, iVar1, uVar3);
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 < 2)
	{
		iVar4 = iVar2;
		uVar3 = func_137(iParam0, iVar4);
		func_136(iVar0, iVar4, uVar3);
		iVar2++;
	}
}

void func_136(int iParam0, int iParam1, auto uParam2)
{
	if (iParam0 > -1)
	{
		Global_101154.f_8739.f_1[iParam0 /*11*/].f_7[iParam1] = uParam2;
	}
}

int func_137(int iParam0, int iParam1)
{
	return get_ped_texture_variation(iParam0, func_76(iParam1));
}

void func_138(int iParam0, int iParam1, auto uParam2)
{
	if (iParam0 > -1)
	{
		Global_101154.f_8739.f_1[iParam0 /*11*/].f_4[iParam1] = uParam2;
	}
}

int func_139(int iParam0, int iParam1)
{
	return get_ped_drawable_variation(iParam0, func_80(iParam1));
}

auto func_140(int iParam0)
{
	return func_141(iParam0);
}

char* func_141(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "UPRO BABS";
			break;
		
		case 1:
			sVar0 = "UPRO DANA";
			break;
		
		case 2:
			sVar0 = "UPRO LIZZIE";
			break;
		
		case 3:
			sVar0 = "UPRO AMANDA";
			break;
		
		case 4:
			sVar0 = "UPRO ASHLEY";
			break;
		
		case 5:
			sVar0 = "UPRO KRISTEN";
			break;
		
		case 6:
			sVar0 = "UPRO SASHA";
			break;
		
		case 7:
			sVar0 = "UPRO JACQUELINE";
			break;
		
		default:
			sVar0 = "UPRO N/A";
	}
	return sVar0;
}

int func_142()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (func_70(iVar0) == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_143(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_18() == 0)
		{
			Global_101154.f_8739.f_1[iParam0 /*11*/][0]++;
		}
		else if (func_18() == 1)
		{
			Global_101154.f_8739.f_1[iParam0 /*11*/][1]++;
		}
		else if (func_18() == 2)
		{
			Global_101154.f_8739.f_1[iParam0 /*11*/][2]++;
		}
	}
}

void func_144(int iParam0, int iParam1, int iParam2)
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
		func_148(891 + iParam0, 1, -1, 1);
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
		func_145();
	}
}

void func_145()
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
		func_147(13, floor(Global_101154.f_8884.f_3853));
	}
	if (!_0xBEDB96A7584AA8CF())
	{
		if (!Global_69489)
		{
			if (func_146() == 2 == 0 && !network_is_game_in_progress())
			{
				if (network_is_cloud_available())
				{
					Global_100888 = 0;
				}
				if (!Global_55749)
				{
					func_97();
				}
			}
		}
	}
}

auto func_146()
{
	return Global_25120;
}

int func_147(int iParam0, int iParam1)
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

int func_148(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_133();
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

void func_149()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iVar0 < 1)
		{
			Global_88073[iVar0] = Global_88073[iVar0 + 1];
		}
		else
		{
			Global_88073[iVar0] = get_game_timer();
		}
		iVar0++;
	}
}

void func_150(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_522())
	{
		iVar0 = 2056;
	}
	func_151(iLocal_96, iLocal_81, func_44(player_ped_id(), 0, 0), func_38(4, 1, iParam0, iParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
	func_151(player_ped_id(), iLocal_82, func_44(player_ped_id(), 0, 0), func_38(4, 0, iParam0, iParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
}

void func_151(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, float fParam5, int iParam6, int iParam7, float fParam8, int iParam9)
{
	if (func_522())
	{
		network_start_synchronised_scene(iParam1);
	}
	else
	{
		task_synchronized_scene(iParam0, iParam1, sParam2, sParam3, fParam4, fParam5, iParam6, iParam7, fParam8, iParam9);
	}
}

void func_152(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_522())
	{
		iVar0 = 2056;
	}
	func_154(&iLocal_81, 1, 0, 0);
	func_153(iLocal_96, iLocal_81, func_44(player_ped_id(), 0, 0), func_38(4, 1, iParam0, iParam1), 0.7f, -0.7f, iVar0, 0, 0.7f);
	func_154(&iLocal_82, 0, 0, 0);
	func_153(player_ped_id(), iLocal_82, func_44(player_ped_id(), 0, 0), func_38(4, 0, iParam0, iParam1), 0.7f, -0.7f, iVar0, 0, 0.7f);
}

void func_153(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, float fParam5, int iParam6, int iParam7, float fParam8)
{
	if (func_522())
	{
		network_add_ped_to_synchronised_scene(iParam0, iParam1, sParam2, sParam3, fParam4, fParam5, iParam6, iParam7, fParam8, 0);
	}
}

void func_154(int iParam0, int iParam1, int iParam2, int iParam3)
{
	Vector3 vVar0;
	
	vVar0 = {0f, 0f, 0f};
	*iParam0 = func_157(vVar0, 0f, 0f, 0f, iParam3, iParam2, 2);
	if (iParam1 == 0)
	{
		func_156(*iParam0, iLocal_99, get_entity_bone_index_by_name(iLocal_99, "seat_dside_f"));
	}
	else if (iParam1 == 1)
	{
		func_156(*iParam0, iLocal_99, get_entity_bone_index_by_name(iLocal_99, "seat_pside_f"));
	}
	func_155(*iParam0, vVar0, 0f, 0f, 0f, 0);
}

void func_155(int iParam0, Vector3 vParam1, Vector3 vParam2, int iParam3)
{
	if (!func_522())
	{
		set_synchronized_scene_origin(iParam0, vParam1, vParam4, iParam7);
	}
}

void func_156(int iParam0, int iParam1, int iParam2)
{
	if (is_entity_dead(iParam1, 0))
	{
		return;
	}
	if (func_522())
	{
		network_attach_synchronised_scene_to_entity(iParam0, iParam1, iParam2);
	}
	else
	{
		attach_synchronized_scene_to_entity(iParam0, iParam1, iParam2);
	}
}

int func_157(Vector3 vParam0, Vector3 vParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	
	if (func_522())
	{
		if (iParam6)
		{
			iParam7 = false;
		}
		iVar0 = network_create_synchronised_scene(vParam0, vParam3, iParam8, iParam6, iParam7, 1f, 0f, 1f);
	}
	else
	{
		iVar0 = create_synchronized_scene(vParam0, vParam3, iParam8);
		_0x394B9CD12435C981(iVar0, iParam6);
		set_synchronized_scene_looped(iVar0, iParam7);
	}
	return iVar0;
}

void func_158(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_522())
	{
		iVar0 = 2056;
	}
	func_151(iLocal_96, iLocal_80, func_44(player_ped_id(), 0, 0), func_38(3, 1, iParam0, iParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
	func_151(player_ped_id(), iLocal_80, func_44(player_ped_id(), 0, 0), func_38(3, 0, iParam0, iParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
}

void func_159(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_522())
	{
		iVar0 = 2056;
	}
	func_154(&iLocal_80, 0, 0, 1);
	func_153(iLocal_96, iLocal_80, func_44(player_ped_id(), 0, 0), func_38(3, 1, iParam0, iParam1), 0.7f, -0.7f, iVar0, 0, 0.7f);
	func_153(player_ped_id(), iLocal_80, func_44(player_ped_id(), 0, 0), func_38(3, 0, iParam0, iParam1), 0.7f, -0.7f, iVar0, 0, 0.7f);
}

int func_160(int iParam0, int iParam1, int iParam2)
{
	if (iParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_161()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_162();
	if (iVar0 < 48)
	{
		iVar1 = 2;
	}
	else if (iVar0 >= 48 && iVar0 < 85)
	{
		iVar1 = 3;
	}
	else
	{
		iVar1 = 4;
	}
	return iVar1;
}

int func_162()
{
	if (func_522())
	{
		return func_134(65, -1, 0);
	}
	return func_163(func_21(player_ped_id()), 1);
}

auto func_163(int iParam0, int iParam1)
{
	auto uVar0;
	int iVar1;
	
	iVar1 = func_164(iParam0, iParam1);
	stat_get_int(iVar1, &uVar0, -1);
	return uVar0;
}

auto func_164(int iParam0, int iParam1)
{
	auto uVar0;
	auto uVar1;
	
	func_165(iParam0, iParam1, &uVar0, &uVar1);
	return uVar0;
}

void func_165(int iParam0, int iParam1, auto uParam2, auto uParam3)
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

int func_166()
{
	int iVar0;
	
	if (iLocal_297 != 0)
	{
		if (iLocal_61 < 2)
		{
			iVar0 = 3;
		}
		else if (iLocal_61 == 2)
		{
			iVar0 = 4;
		}
		else if (iLocal_61 == 3)
		{
			iVar0 = 5;
		}
		else
		{
			iVar0 = 6;
		}
	}
	else if (iLocal_61 < 3)
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	return iVar0;
}

void func_167(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_522())
	{
		iVar0 = 2056;
	}
	func_151(iLocal_96, iLocal_79, func_44(player_ped_id(), 0, 0), func_38(2, 1, iParam0, iParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
	func_151(player_ped_id(), iLocal_79, func_44(player_ped_id(), 0, 0), func_38(2, 0, iParam0, iParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
}

void func_168(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_522())
	{
		iVar0 = 2056;
	}
	func_154(&iLocal_79, 0, 1, 0);
	func_153(iLocal_96, iLocal_79, func_44(player_ped_id(), 0, 0), func_38(2, 1, iParam0, iParam1), 1000f, -1000f, iVar0, 0, 1148846080);
	func_153(player_ped_id(), iLocal_79, func_44(player_ped_id(), 0, 0), func_38(2, 0, iParam0, iParam1), 1000f, -1000f, iVar0, 0, 1148846080);
}

void func_169(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_522())
	{
		iVar0 = 2056;
	}
	func_151(iLocal_96, iLocal_78, func_44(player_ped_id(), 0, 0), func_38(1, 1, iParam0, iParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
	func_151(player_ped_id(), iLocal_78, func_44(player_ped_id(), 0, 0), func_38(1, 0, iParam0, iParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
}

void func_170(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_522())
	{
		iVar0 = 2056;
	}
	func_154(&iLocal_78, 0, 0, 1);
	func_153(iLocal_96, iLocal_78, func_44(player_ped_id(), 0, 0), func_38(1, 1, iParam0, iParam1), 0.7f, -0.7f, iVar0, 0, 0.7f);
	func_153(player_ped_id(), iLocal_78, func_44(player_ped_id(), 0, 0), func_38(1, 0, iParam0, iParam1), 0.7f, -0.7f, iVar0, 0, 0.7f);
}

float func_171(int iParam0)
{
	float fVar0;
	
	if (func_522())
	{
		fVar0 = get_synchronized_scene_phase(_0x02C40BF885C567B6(iParam0));
	}
	else
	{
		fVar0 = get_synchronized_scene_phase(iParam0);
	}
	return fVar0;
}

void func_172(int iParam0)
{
	if (!func_210(iParam0))
	{
		return;
	}
}

void func_173(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_522())
	{
		iVar0 = 2056;
	}
	func_151(iLocal_96, iLocal_76, func_44(player_ped_id(), 0, 0), func_38(0, 1, iParam0, iParam1), 8f, -0.7f, iVar0, 0, 1000f, 0);
	func_151(player_ped_id(), iLocal_77, func_44(player_ped_id(), 0, 0), func_38(0, 0, iParam0, iParam1), 8f, -0.7f, iVar0, 0, 1000f, 0);
}

void func_174(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_522())
	{
		iVar0 = 2056;
	}
	func_154(&iLocal_76, 1, 0, 1);
	func_153(iLocal_96, iLocal_76, func_44(player_ped_id(), 0, 0), func_38(0, 1, iParam0, iParam1), 4f, -1000f, iVar0, 0, 1148846080);
	func_154(&iLocal_77, 0, 0, 1);
	func_153(player_ped_id(), iLocal_77, func_44(player_ped_id(), 0, 0), func_38(0, 0, iParam0, iParam1), 4f, -1000f, iVar0, 0, 1148846080);
}

void func_175(int iParam0, int iParam1)
{
	if (!is_ped_in_vehicle(iParam0, iLocal_99, 0))
	{
		if (!func_522())
		{
			set_ped_into_vehicle(iParam0, iLocal_99, iParam1);
		}
		else if (!is_ped_in_vehicle(iParam0, iLocal_99, 0))
		{
			task_enter_vehicle(iParam0, iLocal_99, -1, iParam1, 2f, 16, 0);
		}
	}
}

void func_176(int iParam0)
{
	auto uVar0;
	auto uVar1;
	Vector3 vVar2;
	Vector3 fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	
	uVar0 = func_178(func_179(2), get_world_position_of_entity_bone(iLocal_99, get_entity_bone_index_by_name(iLocal_99, "windscreen")));
	uVar1 = func_178(func_179(1), get_world_position_of_entity_bone(iLocal_99, get_entity_bone_index_by_name(iLocal_99, "windscreen")));
	vVar2 = {get_entity_rotation(iLocal_99, 2)};
	fVar5 = get_entity_heading(iLocal_99);
	if (fVar5 >= 180f)
	{
		fVar6 = fVar5 - 180f;
	}
	else
	{
		fVar6 = fVar5 + 180f;
	}
	fVar7 = -7f - vVar2.y;
	fVar8 = -5f - vVar2.x;
	fVar9 = -2.5f + vVar2.x;
	fVar10 = 0f - 0.7f * vVar2.x + 0.3f * vVar2.y;
	if (!does_cam_exist(Local_313[2 /*7*/]))
	{
		func_177(&(Local_313[2 /*7*/]), func_179(2), fVar7, vVar2.x, uVar0, 50f);
	}
	if (!does_cam_exist(Local_313[1 /*7*/]))
	{
		func_177(&(Local_313[1 /*7*/]), func_179(1), fVar10, -vVar2.y, uVar1, 37.3f);
	}
	if (!does_cam_exist(Local_313[0 /*7*/]))
	{
		func_177(&(Local_313[0 /*7*/]), func_179(0), fVar8, -vVar2.y, fVar6, 50f);
	}
	if (!does_cam_exist(Local_313[3 /*7*/]))
	{
		func_177(&(Local_313[3 /*7*/]), func_179(3), fVar9, vVar2.y, fVar5, 45f);
	}
	render_script_cams(true, false, 3000, 1, 0, 0);
	set_cam_active(Local_313[*iParam0 /*7*/], true);
}

void func_177(auto uParam0, Vector3 vParam1, Vector3 vParam2, Vector3 fParam3)
{
	*uParam0.f_1 = {vParam4};
	*uParam0.f_4 = {0f, 0f, 0f};
	*uParam0 = create_cam("DEFAULT_SCRIPTED_CAMERA", false);
	set_cam_active(*uParam0, true);
	set_cam_params(*uParam0, vParam1, *uParam0.f_1, fParam7, false, 1, 1, 2);
	render_script_cams(true, false, 3000, 1, 0, 0);
}

float func_178(struct<2> Param0, auto uParam1, struct<2> Param2, Vector3 fParam3)
{
	return get_heading_from_vector_2d(Param3 - Param0, Param3.f_1 - Param0.f_1);
}

Vector3 func_179(int iParam0)
{
	Vector3 vVar0;
	auto uVar3;
	struct<2> Var6;
	Vector3 vVar9;
	Vector3 vVar12;
	
	if (!is_entity_dead(iLocal_96, 0))
	{
	}
	if (!is_vehicle_driveable(iLocal_99, 0))
	{
	}
	get_model_dimensions(get_entity_model(iLocal_99), &uVar3, &Var6);
	vVar9 = {get_world_position_of_entity_bone(iLocal_99, get_entity_bone_index_by_name(iLocal_99, "windscreen"))};
	vVar12 = {get_offset_from_entity_given_world_coords(iLocal_99, vVar9)};
	switch (iParam0)
	{
		case 0:
			vVar0 = {get_offset_from_entity_in_world_coords(iLocal_99, 0f, Var6.f_1 + 1.4f, vVar12.z)};
			break;
		
		case 1:
			vVar0 = {get_offset_from_entity_in_world_coords(iLocal_99, 1.5f, Var6.f_1 + 1.2f, vVar12.z - 0.1f)};
			break;
		
		case 2:
			vVar0 = {get_offset_from_entity_in_world_coords(iLocal_99, -3.7f, 0.7f, vVar12.z)};
			break;
		
		case 3:
			vVar0 = {func_180()};
			break;
	}
	return vVar0;
}

Vector3 func_180()
{
	Vector3 vVar0;
	Vector3 vVar3;
	struct<2> Var6;
	auto uVar9;
	
	get_model_dimensions(get_entity_model(iLocal_99), &Var6, &uVar9);
	vVar0 = {get_world_position_of_entity_bone(iLocal_99, get_entity_bone_index_by_name(iLocal_99, "windscreen"))};
	vVar3 = {get_offset_from_entity_given_world_coords(iLocal_99, vVar0)};
	vVar3.z += 0.09f;
	Var6.f_1--;
	return get_offset_from_entity_in_world_coords(iLocal_99, 0f, -absf(Var6.f_1), vVar3.z);
}

void func_181(int iParam0, int iParam1)
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

void func_182(int iParam0)
{
	if (!does_cam_exist(Local_313[*iParam0 /*7*/]))
	{
		return;
	}
	if (!is_cam_rendering(Local_313[*iParam0 /*7*/]))
	{
		return;
	}
	shake_cam(Local_313[*iParam0 /*7*/], "HAND_SHAKE", 0.25f);
	if (!is_pause_menu_active())
	{
		func_185(&(Local_313[*iParam0 /*7*/]));
	}
	if (func_184())
	{
		if (!func_522())
		{
			if (!func_442("PROS_CAM_OC"))
			{
				func_107("PROS_CAM_OC");
			}
		}
	}
	else
	{
		if (!func_522())
		{
			if (!func_442("PROS_CAM_TOG"))
			{
				func_107("PROS_CAM_TOG");
			}
		}
		if ((is_disabled_control_just_pressed(2, 0) && !is_pause_menu_active()) && !func_42(0, 1))
		{
			func_183(iParam0);
			set_cam_active(Local_313[*iParam0 /*7*/], true);
		}
	}
}

void func_183(auto uParam0)
{
	if (*uParam0 < 3)
	{
		*uParam0++;
	}
	else if (*uParam0 == 3)
	{
		*uParam0 = 0;
	}
	if (*uParam0 == 0)
	{
		if (func_462(iLocal_51, 16))
		{
			*uParam0++;
		}
	}
	if (*uParam0 == 1)
	{
		if (func_462(iLocal_51, 128))
		{
			*uParam0++;
		}
	}
	if (*uParam0 == 2)
	{
		if (func_462(iLocal_51, 64))
		{
			*uParam0++;
		}
	}
}

bool func_184()
{
	if ((func_462(iLocal_51, 16) && func_462(iLocal_51, 64)) && func_462(iLocal_51, 128))
	{
		return true;
	}
	return false;
}

void func_185(auto uParam0)
{
	var[] uVar0 = new var[4];
	Vector3 vVar5;
	float fVar8;
	Vector3 vVar9;
	
	_0x7F4724035FDCA1DD(2);
	func_187(&(uVar0[0]), &(uVar0[1]), &(uVar0[2]), &(uVar0[3]), 0, 0);
	vVar5.z = -to_float(uVar0[2]) / 127f * 10f;
	vVar5.y = -vVar5.z * 3f / 10f;
	if (is_look_inverted())
	{
		vVar5.x = to_float(uVar0[3]) / 127f * 10f;
	}
	else
	{
		vVar5.x = -to_float(uVar0[3]) / 127f * 10f;
	}
	fVar8 = 30f * timestep();
	vVar9 = {vVar5};
	if (_is_input_disabled(0))
	{
		*uParam0.f_4 = func_186(*uParam0.f_4 + vVar9.x * 0.05f, -3f, 3f);
		*uParam0.f_4.f_1 = func_186(*uParam0.f_4.f_1 + vVar9.y * 0.05f, -3f, 3f);
		*uParam0.f_4.f_2 = func_186(*uParam0.f_4.f_2 + vVar9.z * 0.05f, -3f, 3f);
	}
	else
	{
		*uParam0.f_4 += func_186(vVar9.x - *uParam0.f_4 * 0.05f * fVar8, -3f, 3f);
		*uParam0.f_4.f_1 += func_186(vVar9.y - *uParam0.f_4.f_1 * 0.05f * fVar8, -3f, 3f);
		*uParam0.f_4.f_2 += func_186(vVar9.z - *uParam0.f_4.f_2 * 0.05f * fVar8, -3f, 3f);
	}
	set_cam_rot(*uParam0, *uParam0.f_1 + *uParam0.f_4, 2);
}

float func_186(float fParam0, float fParam1, float fParam2)
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

void func_187(auto uParam0, auto uParam1, auto uParam2, auto uParam3, int iParam4, int iParam5)
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

void func_188()
{
	int iVar0;
	float fVar1;
	
	if (!func_193())
	{
		if (func_192(iLocal_96))
		{
			if (!func_462(iLocal_49, 256))
			{
				stop_current_playing_ambient_speech(player_ped_id());
				_play_ambient_speech1(player_ped_id(), "SEX_CLIMAX", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				if (iLocal_72 == 1)
				{
					if (!func_522())
					{
						special_ability_charge_absolute(player_id(), 15, 1);
					}
					set_pad_shake(0, 4000, 252);
				}
				else if (iLocal_72 == 2)
				{
					if (!func_522())
					{
						special_ability_charge_absolute(player_id(), 10, 1);
					}
					set_pad_shake(0, 4000, 210);
				}
				else
				{
					if (!func_522())
					{
						special_ability_charge_absolute(player_id(), 5, 1);
					}
					set_pad_shake(0, 3000, 168);
				}
				func_454(&iLocal_49, 256);
			}
		}
	}
	else
	{
		switch (iLocal_298)
		{
			case 0:
				if (has_anim_event_fired(iLocal_96, 876132797))
				{
					set_pad_shake(0, 200, 84);
					apply_force_to_entity(iLocal_99, 1, 0f, 0f, -0.05f, 0f, 0f, 0f, 0, 1, 1, 1, 1, 0);
					func_190();
				}
				break;
			
			case 1:
			case 2:
				if (func_462(iLocal_49, 32768))
				{
					if (func_522())
					{
						iVar0 = _0x02C40BF885C567B6(iLocal_79);
					}
					else
					{
						iVar0 = iLocal_79;
					}
					if (is_synchronized_scene_running(iVar0))
					{
						fVar1 = get_synchronized_scene_phase(iVar0);
						if ((((((((((((((fVar1 > 0.01f && fVar1 < 0.019f) || (fVar1 > 0.093f && fVar1 < 0.1f)) || (fVar1 > 0.165f && fVar1 < 0.172f)) || (fVar1 > 0.231f && fVar1 < 0.239f)) || (fVar1 > 0.308f && fVar1 < 0.317f)) || (fVar1 > 0.37f && fVar1 < 0.378f)) || (fVar1 > 0.437f && fVar1 < 0.443f)) || (fVar1 > 0.507f && fVar1 < 0.518f)) || (fVar1 > 0.58f && fVar1 < 0.587f)) || (fVar1 > 0.651f && fVar1 < 0.659f)) || (fVar1 > 0.72f && fVar1 < 0.729f)) || (fVar1 > 0.788f && fVar1 < 0.794f)) || (fVar1 > 0.862f && fVar1 < 0.87f)) || (fVar1 > 0.937f && fVar1 < 0.946f))
						{
							if (!func_495(512))
							{
								set_pad_shake(0, 200, 252);
								apply_force_to_entity(iLocal_99, 1, 0f, 0f, -0.1f, 0f, 0f, 0f, 0, 1, 1, 1, 1, 0);
								func_190();
								func_189(512);
							}
						}
						else
						{
							func_499(512);
						}
					}
				}
				else if (has_anim_event_fired(iLocal_96, 876132797))
				{
					set_pad_shake(0, 200, 252);
					apply_force_to_entity(iLocal_99, 1, 0f, 0f, -0.1f, 0f, 0f, 0f, 0, 1, 1, 1, 1, 0);
					func_190();
				}
				break;
			}
	}
}

void func_189(int iParam0)
{
	if (!func_462(iLocal_52, iParam0))
	{
		func_454(&iLocal_52, iParam0);
	}
}

void func_190()
{
	int iVar0;
	
	iVar0 = get_entity_health(player_ped_id());
	iVar0 += 1 + iLocal_297;
	if (iVar0 > get_entity_max_health(player_ped_id()))
	{
		iVar0 = get_entity_max_health(player_ped_id());
	}
	set_entity_health(player_ped_id(), iVar0);
	func_191();
}

void func_191()
{
	if (!func_522())
	{
		return;
	}
	if (does_entity_exist(player_ped_id()))
	{
		iLocal_59 = get_entity_health(player_ped_id());
	}
}

int func_192(int iParam0)
{
	return (((is_entity_playing_anim(iParam0, func_48(), func_40(11), 3) || is_entity_playing_anim(iParam0, func_48(), func_40(21), 3)) || is_entity_playing_anim(iParam0, func_46(), func_39(11), 3)) || is_entity_playing_anim(iParam0, func_46(), func_39(21), 3));
}

int func_193()
{
	return is_entity_playing_anim(iLocal_96, func_44(player_ped_id(), 0, 0), func_194(iLocal_96, func_43(), 1), 3);
}

char* func_194(int iParam0, int iParam1, int iParam2)
{
	char* sVar0;
	int iVar1;
	
	sVar0 = "";
	if (!is_entity_dead(iParam0, 0))
	{
		iVar1 = get_vehicle_ped_is_in(iParam0, 1);
		if (is_vehicle_driveable(iVar1, 0))
		{
			if (func_41(iVar1))
			{
				if (iParam1)
				{
					if (iParam2)
					{
						sVar0 = func_40(20);
					}
					else
					{
						sVar0 = func_40(25);
					}
				}
				else if (iParam2)
				{
					sVar0 = func_40(10);
				}
				else
				{
					sVar0 = func_40(15);
				}
			}
			else if (iParam1)
			{
				if (iParam2)
				{
					sVar0 = func_39(20);
				}
				else
				{
					sVar0 = func_39(25);
				}
			}
			else if (iParam2)
			{
				sVar0 = func_39(10);
			}
			else
			{
				sVar0 = func_39(15);
			}
		}
	}
	return sVar0;
}

void func_195()
{
	if (!func_193())
	{
		return;
	}
	if (func_522())
	{
		func_199();
	}
	if (is_any_speech_playing(iLocal_96) || is_any_speech_playing(player_ped_id()))
	{
		return;
	}
	if (get_random_int_in_range(false, 5000) > 2500)
	{
		func_196();
	}
}

void func_196()
{
	if (is_ped_injured(iLocal_96))
	{
		return;
	}
	if (!is_any_speech_playing(iLocal_96) && !is_any_speech_playing(player_ped_id()))
	{
		if (iLocal_297 == 0)
		{
			func_124("PROSTITUTES_BJ_SPEECH_SCENE");
		}
		if (!func_10(&iLocal_107))
		{
			func_444(&iLocal_107);
		}
		else if (func_7(&iLocal_107) > get_random_float_in_range(2f, 5f))
		{
			if (!func_462(iLocal_49, 65536))
			{
				func_454(&iLocal_49, 65536);
				_play_ambient_speech1(player_ped_id(), "SEX_GENERIC", "SPEECH_PARAMS_FORCE_NORMAL_CLEAR", 1);
				func_197(iLocal_298);
			}
			else
			{
				func_5(&iLocal_49, 65536);
				func_34(&iLocal_107);
			}
		}
	}
}

void func_197(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_81("PROSTITUTES_BJ_SPEECH_SCENE");
			if (func_198(player_id()))
			{
				_play_ambient_speech1(iLocal_96, "SEX_ORAL", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			}
			else
			{
				_play_ambient_speech1(iLocal_96, "SEX_ORAL_FEM", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			}
			break;
		
		case 1:
		case 2:
			if (func_198(player_id()))
			{
				_play_ambient_speech1(iLocal_96, "SEX_GENERIC", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			}
			else
			{
				_play_ambient_speech1(iLocal_96, "SEX_GENERIC_FEM", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			}
			break;
	}
}

int func_198(int iParam0)
{
	if (!network_is_game_in_progress())
	{
		return 1;
	}
	return Global_2418472[iParam0 /*313*/].f_227;
}

void func_199()
{
	if (is_ped_injured(iLocal_96))
	{
		return;
	}
	if (func_200(0.4f))
	{
		func_189(4);
	}
	if (func_495(4))
	{
		if (!func_10(&iLocal_110))
		{
			func_444(&iLocal_110);
		}
		else if (func_7(&iLocal_110) > 2f)
		{
			if (!func_495(16) && !func_200(0.4f))
			{
				func_189(16);
				iLocal_61++;
			}
			else if (func_495(16))
			{
				if (!is_any_speech_playing(iLocal_96))
				{
					func_499(4);
					func_499(16);
					func_34(&iLocal_110);
				}
			}
		}
	}
}

bool func_200(float fParam0)
{
	float fVar0;
	
	if (func_201(player_id(), 1, 1))
	{
		fVar0 = network_get_player_loudness(player_id());
		if (fVar0 > fParam0)
		{
			return true;
		}
	}
	return false;
}

bool func_201(int iParam0, int iParam1, int iParam2)
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

void func_202(int iParam0, int iParam1)
{
	if (!func_522())
	{
		return;
	}
	func_174(iParam0, iParam1);
	func_170(iParam0, iParam1);
	func_168(iParam0, iParam1);
	func_159(iParam0, iParam1);
	func_152(iParam0, iParam1);
}

void func_203(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_134(iParam0, func_132(iParam1), 0);
	iVar0++;
	if (!func_205(iParam0))
	{
		func_131(iParam0, iVar0, iParam1, 1);
	}
	else
	{
		func_204(iParam0, iVar0, iParam1, 1);
	}
}

void func_204(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2469339[iParam0 /*5*/][func_132(iParam2)];
	if (iVar0 != 0)
	{
		stat_set_int(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 780:
			Global_1347702[func_132(iParam2)] = iParam1;
			break;
		
		case 781:
			Global_1347708[func_132(iParam2)] = iParam1;
			break;
		
		case 782:
			Global_1347714[func_132(iParam2)] = iParam1;
			break;
		
		case 783:
			Global_1347720[func_132(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1347678[func_132(iParam2)] = iParam1;
			break;
		
		case 771:
			Global_1347684[func_132(iParam2)] = iParam1;
			break;
		
		case 772:
			Global_1347690[func_132(iParam2)] = iParam1;
			break;
		
		case 773:
			Global_1347696[func_132(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1347654[func_132(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1347660[func_132(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1347666[func_132(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1347672[func_132(iParam2)] = iParam1;
			break;
		
		case 750:
			Global_1347726[func_132(iParam2)] = iParam1;
			break;
		
		case 751:
			Global_1347732[func_132(iParam2)] = iParam1;
			break;
		
		case 752:
			Global_1347738[func_132(iParam2)] = iParam1;
			break;
		
		case 753:
			Global_1347744[func_132(iParam2)] = iParam1;
			break;
		
		case 1296:
			Global_1347750[func_132(iParam2)] = iParam1;
			break;
		
		case 632:
			Global_1347756[func_132(iParam2)] = iParam1;
			break;
		
		case 1271:
			Global_1347762[func_132(iParam2)] = iParam1;
			break;
		
		case 1868:
			Global_2492924[0 /*6*/][func_132(iParam2)] = iParam1;
			break;
		
		case 2259:
			Global_2492924[1 /*6*/][func_132(iParam2)] = iParam1;
			break;
		
		case 2907:
			Global_2492924[2 /*6*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3036:
			Global_2492924[3 /*6*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3891:
			Global_2492986[func_132(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1347768[func_132(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1347774[func_132(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1347780[func_132(iParam2)] = iParam1;
			break;
		
		case 1229:
			Global_1347786[func_132(iParam2)] = iParam1;
			break;
		
		case 3031:
			Global_2492955[0 /*5*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3032:
			Global_2492955[1 /*5*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3033:
			Global_2492955[2 /*5*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3034:
			Global_2492955[3 /*5*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3035:
			Global_2492955[4 /*5*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3216:
			Global_2492991[0 /*5*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3217:
			Global_2492991[1 /*5*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3218:
			Global_2492991[2 /*5*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3219:
			Global_2492991[3 /*5*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3220:
			Global_2492991[4 /*5*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2493017[0 /*5*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3222:
			Global_2493017[1 /*5*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3223:
			Global_2493017[2 /*5*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3224:
			Global_2493017[3 /*5*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3225:
			Global_2493017[4 /*5*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3199:
			Global_2492955[5 /*5*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3205:
			Global_2492924[4 /*6*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3243:
			Global_2493043[func_132(iParam2)] = iParam1;
			break;
		
		case 3244:
			Global_2493058[func_132(iParam2)] = iParam1;
			break;
		
		case 3245:
			Global_2493048[func_132(iParam2)] = iParam1;
			break;
		
		case 3246:
			Global_2493063[func_132(iParam2)] = iParam1;
			break;
		
		case 3247:
			Global_2493053[func_132(iParam2)] = iParam1;
			break;
		
		case 3248:
			Global_2493068[func_132(iParam2)] = iParam1;
			break;
		
		case 3269:
			Global_2493073[func_132(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

bool func_205(int iParam0)
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

void func_206()
{
	if (!Global_14413.f_1 == 1)
	{
		if (func_209(0))
		{
			func_207(0);
		}
		set_bit(&Global_2284, 2);
	}
}

void func_207(int iParam0)
{
	if (Global_14571)
	{
		func_208(0, 0);
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
	if (!func_15())
	{
		Global_14413.f_1 = 3;
	}
}

void func_208(int iParam0, int iParam1)
{
	if (iParam0)
	{
		if (func_209(0))
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

bool func_209(int iParam0)
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

int func_210(int iParam0)
{
	int iVar0;
	
	if (func_522())
	{
		iVar0 = is_synchronized_scene_running(_0x02C40BF885C567B6(iParam0));
	}
	else
	{
		iVar0 = is_synchronized_scene_running(iParam0);
	}
	return iVar0;
}

void func_211()
{
	if (is_screen_faded_out())
	{
		do_screen_fade_in(1000);
		set_entity_coords(player_ped_id(), func_213(), 1, false, 0, 1);
		set_entity_heading(player_ped_id(), func_212());
		func_512();
		render_script_cams(false, false, 3000, 1, 0, 0);
		delete_ped(&iLocal_96);
	}
}

float func_212()
{
	switch (func_18())
	{
		case 0:
			return 116.6356f;
			break;
		
		case 1:
			return 175.0504f;
			break;
		
		case 2:
			return 299.5673f;
			break;
	}
	return 0f;
}

Vector3 func_213()
{
	switch (func_18())
	{
		case 0:
			return -820.4975f, 176.9618f, 70.6166f;
			break;
		
		case 1:
			return -14.6005f, -1444.624f, 29.6472f;
			break;
		
		case 2:
			return 1979.961f, 3816.018f, 31.3641f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_214()
{
	int iVar0;
	
	if (func_216(&iLocal_104, 3f) && !is_cam_active(iLocal_103))
	{
		iVar0 = floor(func_215() - 2f * 1000f);
		set_cam_active(iLocal_102, false);
		set_cam_active_with_interp(iLocal_103, iLocal_102, iVar0, 1, 1);
	}
	if (func_216(&iLocal_104, func_215()))
	{
		do_screen_fade_out(1000);
		iLocal_295 = 10;
	}
}

float func_215()
{
	switch (func_18())
	{
		case 0:
			return 10f;
			break;
		
		case 1:
			return 12f;
			break;
		
		case 2:
			return 10f;
			break;
	}
	return 0f;
}

bool func_216(int iParam0, float fParam1)
{
	if (func_10(iParam0))
	{
		if (func_7(iParam0) > fParam1)
		{
			return true;
		}
	}
	return false;
}

void func_217(auto uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < get_number_of_events(1))
	{
		iVar1 = get_event_at_index(1, iVar0);
		switch (iVar1)
		{
			case 179:
				func_218(iVar0, uParam0);
				break;
		}
		iVar0++;
	}
}

void func_218(int iParam0, auto uParam1)
{
	auto uVar0;
	
	if (get_event_data(1, iParam0, &uVar0, 10))
	{
		func_219(&uVar0, uParam1);
	}
}

void func_219(auto uParam0, auto uParam1)
{
	if (does_entity_exist(*uParam0))
	{
		if (is_entity_a_vehicle(*uParam0))
		{
			if (does_entity_exist(player_ped_id()))
			{
				if (!is_entity_dead(player_ped_id(), 0))
				{
					if (get_vehicle_ped_is_in(player_ped_id(), 0) == get_vehicle_index_from_entity_index(*uParam0))
					{
						func_116(0);
						clear_ped_tasks(player_ped_id());
						func_512();
						func_507(uParam1);
					}
				}
			}
		}
	}
}

void func_220(auto uParam0)
{
	int iVar0;
	
	if (!func_522())
	{
		return;
	}
	if (does_entity_exist(iLocal_96))
	{
		if (is_player_playing(player_id()))
		{
			iVar0 = get_entity_health(iLocal_96);
			if (iVar0 - iLocal_60 < 0)
			{
				func_116(0);
				clear_ped_tasks(player_ped_id());
				func_512();
				func_507(uParam0);
			}
		}
	}
}

void func_221(auto uParam0)
{
	int iVar0;
	
	if (!func_522())
	{
		return;
	}
	if (does_entity_exist(player_ped_id()))
	{
		if (is_player_playing(player_id()))
		{
			iVar0 = get_entity_health(player_ped_id());
			if (iVar0 - iLocal_59 < 0)
			{
				func_116(0);
				clear_ped_tasks(player_ped_id());
				func_512();
				func_507(uParam0);
			}
		}
	}
}

void func_222(auto uParam0)
{
	int iVar0;
	Vector3 vVar1;
	
	if (!func_522())
	{
		return;
	}
	if (does_entity_exist(player_ped_id()))
	{
		if (is_ped_in_any_vehicle(player_ped_id(), 0))
		{
			iVar0 = get_vehicle_ped_is_in(player_ped_id(), 0);
			if (does_entity_exist(iVar0))
			{
				vVar1 = {get_entity_coords(iVar0, 1)};
				if (vdist2(vLocal_56, vVar1) >= 4f)
				{
					func_116(0);
					clear_ped_tasks(player_ped_id());
					func_512();
					func_507(uParam0);
				}
			}
		}
	}
}

void func_223()
{
	int iVar0;
	char* sVar1;
	int iVar5;
	auto uVar6;
	int iVar7;
	auto uVar8;
	auto uVar9;
	int iVar10;
	
	if (!func_462(iLocal_49, 16))
	{
		if (is_player_playing(player_id()))
		{
			set_player_can_do_drive_by(player_id(), 0);
		}
		func_454(&iLocal_49, 16);
	}
	if (is_ped_in_any_vehicle(player_ped_id(), 0))
	{
		iLocal_99 = get_vehicle_ped_is_in(player_ped_id(), 0);
		if (func_522())
		{
			if (network_has_control_of_entity(iLocal_99))
			{
				set_vehicle_handbrake(iLocal_99, true);
				set_vehicle_lights(iLocal_99, 4);
				set_vehicle_interiorlight(iLocal_99, 1);
				set_vehicle_automatically_attaches(iLocal_99, false, 0);
			}
		}
		else
		{
			set_vehicle_handbrake(iLocal_99, true);
			set_vehicle_lights(iLocal_99, 4);
			set_vehicle_interiorlight(iLocal_99, 1);
		}
		if (!func_360() || !is_ped_in_vehicle(iLocal_96, iLocal_99, 0))
		{
			func_445(0);
			return;
		}
	}
	else
	{
		func_445(0);
		return;
	}
	func_206();
	if ((!is_vehicle_stopped(iLocal_99) && is_player_control_on(player_id())) && !func_462(iLocal_49, 1024))
	{
		iLocal_295 = 7;
		func_358(1, -1);
		SCRIPT::REQUEST_SCRIPT_audio_bank("SCRIPT\HUD_321_GO", true);
		iLocal_301 = 0;
		func_463("WAITING FOR VEHICLE TO STOP ");
		return;
	}
	iVar0 = 0;
	hide_hud_component_this_frame(2);
	switch (iLocal_301)
	{
		case 0:
		case 1:
			if (func_522())
			{
				if (is_ped_in_any_vehicle(player_ped_id(), 0))
				{
					if (does_entity_exist(get_vehicle_ped_is_in(player_ped_id(), 0)))
					{
						if (_0xC7827959479DCC78(get_vehicle_ped_is_in(player_ped_id(), 0)))
						{
							if (get_ped_in_vehicle_seat(get_vehicle_ped_is_in(player_ped_id(), 0), -1) == player_ped_id())
							{
								if (network_has_control_of_entity(get_vehicle_ped_is_in(player_ped_id(), 0)))
								{
									if (!is_entity_a_mission_entity(get_vehicle_ped_is_in(player_ped_id(), 0)))
									{
										set_entity_as_mission_entity(get_vehicle_ped_is_in(player_ped_id(), 0), false, 0);
									}
								}
								else
								{
									network_request_control_of_entity(get_vehicle_ped_is_in(player_ped_id(), 0));
									return;
								}
							}
						}
						else
						{
							_0x06FAACD625D80CAA(get_vehicle_ped_is_in(player_ped_id(), 0));
							return;
						}
					}
				}
			}
			func_357();
			func_356();
			func_191();
			if (func_353())
			{
				func_124("PROSTITUTES_DRIVE_SCENE");
				func_81("PROSTITUTES_PARKED_SCENE");
				func_352();
				if (func_522())
				{
					func_189(2);
					if (func_522())
					{
						if (is_ped_in_any_vehicle(player_ped_id(), 0))
						{
							if (_0xC7827959479DCC78(get_vehicle_ped_is_in(player_ped_id(), 0)))
							{
								if (network_has_control_of_entity(get_vehicle_ped_is_in(player_ped_id(), 0)))
								{
									set_vehicle_doors_locked_for_all_players(get_vehicle_ped_is_in(player_ped_id(), 0), 1);
									set_vehicle_doors_locked(get_vehicle_ped_is_in(player_ped_id(), 0), 4);
									_0x2311DD7159F00582(get_vehicle_ped_is_in(player_ped_id(), 0), 1);
								}
							}
						}
					}
				}
				reset_ped_in_vehicle_context(iLocal_96);
				iLocal_301 = 2;
			}
			break;
		
		case 2:
			if (func_351(iLocal_304))
			{
				func_350(&iLocal_304);
				func_5(&iLocal_75, 2);
			}
			func_348(iLocal_96, 0);
			if (func_348(player_ped_id(), 1))
			{
				if (func_346(&sVar1, 0))
				{
					iLocal_48 = get_follow_vehicle_cam_view_mode();
					iVar5 = get_follow_ped_cam_view_mode();
					if (is_ped_in_any_vehicle(player_ped_id(), 1))
					{
						if (iVar5 != 4 && iLocal_48 == 4)
						{
							set_follow_ped_cam_view_mode(4);
						}
						else if (iVar5 == 4 && iLocal_48 != 4)
						{
							set_follow_ped_cam_view_mode(1);
						}
					}
					func_330();
					iLocal_301 = 3;
					func_463("Moving to SERVICE_MENU_CHOOSE");
				}
				else
				{
					func_329(&sVar1, -1);
					func_34(&iLocal_113);
					iLocal_297 = 3;
					iLocal_301 = 4;
				}
			}
			break;
		
		case 3:
			if (is_pause_menu_active())
			{
				return;
			}
			show_hud_component_this_frame(3);
			func_310();
			func_281(1, -1, 1, 0, 1, -1082130432, 0, 0);
			func_280(&uVar6, &iVar7, &uVar8, &uVar9, 0);
			disable_control_action(0, 48, 1);
			set_input_exclusive(2, 187);
			set_input_exclusive(2, 188);
			set_input_exclusive(2, 201);
			iVar0 = 0;
			if (is_pc_version())
			{
				if (_is_input_just_disabled(2))
				{
					disable_control_action(0, 1, 1);
					disable_control_action(0, 2, 1);
					enable_control_action(0, 237, 1);
					enable_control_action(0, 238, 1);
					enable_control_action(0, 241, 1);
					enable_control_action(0, 242, 1);
					func_276(0, 0, 0, 1);
					func_275(0, -1, 1);
					if (func_274())
					{
						if (Global_2562129 != iLocal_70)
						{
							play_sound_frontend(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
							iLocal_70 = Global_2562129;
							func_463("Player highlighted a new option using the mouse!");
						}
						else
						{
							iVar0 = 1;
						}
					}
				}
			}
			if (((is_control_just_pressed(2, 187) || (_is_input_disabled(2) && is_control_just_pressed(2, 242))) || (_is_input_disabled(2) && is_disabled_control_just_pressed(0, 33))) || (((is_pc_version() && !_is_input_disabled(2)) && iVar7 > 100) && get_game_timer() - iLocal_89 > 300))
			{
				play_sound_frontend(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				func_463("DOWN pressed!");
				if (iLocal_70 < iLocal_71)
				{
					iLocal_70++;
				}
				else
				{
					iLocal_70 = 0;
				}
				iLocal_89 = get_game_timer();
			}
			else if (((is_control_just_pressed(2, 188) || (_is_input_disabled(2) && is_control_just_pressed(2, 241))) || (_is_input_disabled(2) && is_disabled_control_just_pressed(0, 32))) || (((is_pc_version() && !_is_input_disabled(2)) && iVar7 < -100) && get_game_timer() - iLocal_89 > 300))
			{
				play_sound_frontend(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				func_463("UP pressed!");
				if (iLocal_70 > 0)
				{
					iLocal_70--;
				}
				else
				{
					iLocal_70 = iLocal_71;
				}
				iLocal_89 = get_game_timer();
			}
			else if (is_control_just_released(2, 201) || iVar0 == 1)
			{
				play_sound_frontend(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				hide_hud_component_this_frame(3);
				func_270();
				clear_entity_last_damage_entity(player_ped_id());
				iLocal_301 = 4;
			}
			func_269(iLocal_70, 1, 1);
			break;
		
		case 4:
			iVar10 = get_ped_money(iLocal_96);
			if (iLocal_297 == 3)
			{
				func_358(1, -1);
				func_268();
				func_267(0);
				iLocal_64 = get_game_timer();
				func_124("PROSTITUTES_PARKED_SCENE");
				func_463("eCurrentProstituteState = prostitute_REFUSED ");
				iLocal_295 = 6;
				if (iLocal_72 > 0)
				{
					if (func_120(iLocal_96))
					{
						func_119();
					}
					else
					{
						func_445(0);
					}
					return;
				}
				else
				{
					if (func_262() >= 20)
					{
						iVar10 += 20;
						func_225(20);
						set_ped_money(iLocal_96, iVar10);
					}
					func_445(1);
					return;
				}
			}
			if (!has_anim_dict_loaded(func_44(player_ped_id(), 0, 0)))
			{
			}
			else
			{
				func_358(1, -1);
				func_268();
				if (is_aussie_version())
				{
					func_454(&iLocal_49, 1024);
					iLocal_297 = 3;
					func_463("AUSSIE VERSION IS TRUE!?!?!");
				}
				if (iLocal_297 != 3)
				{
					if (func_262() > func_224(iLocal_297))
					{
						func_225(func_224(iLocal_297));
						iVar10 += func_224(iLocal_297);
					}
					func_35(&iLocal_107, 14f - 4f);
					func_463("eCurrentProstituteState = PROSTITUTE_CUSTOMER_GETTING_SERVICED ");
					func_121();
					iLocal_295 = 11;
				}
				set_ped_money(iLocal_96, iVar10);
				iLocal_64 = get_game_timer();
			}
			break;
	}
}

int func_224(int iParam0)
{
	if (is_aussie_version())
	{
		if (iParam0 == 0)
		{
			return 70;
		}
		else if (iParam0 == 1)
		{
			return 70;
		}
		else if (iParam0 == 2)
		{
			return 70;
		}
		else
		{
			return 0;
		}
	}
	if (iParam0 == 0)
	{
		return 50;
	}
	if (iParam0 == 1)
	{
		return 70;
	}
	if (iParam0 == 2)
	{
		return 100;
	}
	return 0;
}

void func_225(int iParam0)
{
	auto uVar0;
	
	if (!func_522())
	{
		func_236(func_18(), 1, iParam0);
	}
	else if (!func_235())
	{
		network_spent_prostitutes(iParam0, 0, 0);
	}
	else
	{
		func_226(-1359375127, iParam0, &uVar0, 0, 0, 0);
	}
}

void func_226(int iParam0, int iParam1, auto uParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (!func_235())
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
				func_227(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_227(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

bool func_227(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = false;
	if (!func_235())
	{
		iVar0 = true;
	}
	if (!iVar0)
	{
		if (!_0xB24F0944DA203D9E(func_133()) || _0x810E8431C0614BF9())
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
			*uParam0 = func_234(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
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
			func_233(1, iParam4);
			Global_2558636 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_228(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return false;
}

void func_228(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			set_bit(&(Global_2418472[player_id() /*313*/].f_121.f_71), false);
			break;
	}
	if (iParam0 != -1)
	{
		func_229(iParam0);
	}
}

void func_229(int iParam0)
{
	int iVar0;
	
	iVar0 = false;
	if (!func_235())
	{
		iVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_232(iParam0))
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
		func_230(&(Global_2558146[iParam0 /*73*/]));
	}
}

void func_230(auto uParam0)
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
	func_231(uParam0.f_8.f_3);
	func_231(uParam0.f_8.f_16);
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

void func_231(auto uParam0)
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

int func_232(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2558146[iParam0 /*73*/].f_5 == 1;
	}
	return false;
}

void func_233(int iParam0, int iParam1)
{
	Global_2445534 = iParam1;
	Global_2445533 = iParam0;
}

int func_234(int iParam0, auto uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, auto uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2558146[iVar0 /*73*/].f_2 == 0)
		{
			if (!func_235())
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

bool func_235()
{
	if (is_pc_version())
	{
		return true;
	}
	return false;
}

int func_236(auto uParam0, int iParam1, int iParam2)
{
	if (Global_101154.f_32575[uParam0 /*29*/].f_17 == 3)
	{
		return 0;
	}
	if (Global_101154.f_32575[uParam0 /*29*/].f_17 == 4)
	{
		return 0;
	}
	return func_237(Global_101154.f_32575[uParam0 /*29*/].f_17, 0, iParam1, iParam2, 0);
}

bool func_237(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_261();
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
					func_260(99, 1);
					func_259(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_259(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_259(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_245(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_244(5))
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
							func_259(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_259(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_259(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_244(1))
					{
						fVar0 = 0f;
						iVar1 = true;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_259(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_259(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_259(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_259(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_259(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_259(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_259(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_259(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_259(joaat("sp2_money_spent_property"), iParam3);
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
									func_259(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_259(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_259(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_259(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_259(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_259(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_244(0))
							{
								fVar0 = 0f;
								iVar1 = false;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_259(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_259(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_259(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_259(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_259(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_259(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_243(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_260(95, iParam3);
					break;
				
				case 1:
					func_260(97, iParam3);
					break;
				
				case 2:
					func_260(96, iParam3);
					break;
			}
			func_260(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = floor(fVar0 * to_float(iParam3));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_240(iVar1);
		return true;
	}
	else if (fVar0 != 1f)
	{
		func_240(iVar1);
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
					func_259(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_259(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_259(joaat("sp2_total_cash_earned"), iParam3);
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
	func_239(iParam0);
	if (Global_35711 == 15)
	{
		func_238(0);
	}
	return true;
}

void func_238(int iParam0)
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

void func_239(int iParam0)
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

void func_240(int iParam0)
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
	else if (is_bit_set(Global_101154.f_25089.f_471, iParam0) || is_bit_set(Global_2097152[func_242() /*10375*/].f_7704.f_10, iParam0))
	{
		iVar0 = true;
		clear_bit(&(Global_101154.f_25089.f_471), iParam0);
		clear_bit(&(Global_2097152[func_242() /*10375*/].f_7704.f_10), iParam0);
	}
	if (iVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		_set_notification_text_entry("COUP_RED");
		_add_text_component_item_string(func_241(iParam0));
		_set_notification_message(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_241(int iParam0)
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

int func_242()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_243(int iParam0)
{
	func_260(93, iParam0);
	func_260(29, iParam0);
	func_260(30, iParam0);
}

int func_244(int iParam0)
{
	if (!network_is_game_in_progress())
	{
		return is_bit_set(Global_101154.f_25089.f_471, iParam0);
	}
	return is_bit_set(Global_2097152[func_242() /*10375*/].f_7704.f_10, iParam0);
}

bool func_245(int iParam0)
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
		func_147(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return false;
	}
	func_246(27, 1);
	return true;
}

int func_246(int iParam0, int iParam1)
{
	if (iParam0 >= 70)
	{
		return 0;
	}
	return func_247(iParam0, iParam1);
}

bool func_247(int iParam0, int iParam1)
{
	if (func_523(14) && !func_258(iParam0))
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
	if (func_257(&Global_2563627))
	{
		if (func_255(&Global_2563627, iParam0))
		{
			return false;
		}
		if (func_248(&Global_2563627, iParam0))
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

bool func_248(auto uParam0, int iParam1)
{
	int iVar0;
	var[] uVar1 = new var[70];
	
	if (has_achievement_been_passed(iParam1))
	{
		return false;
	}
	if (func_523(14) && !func_258(iParam1))
	{
		return false;
	}
	if (func_255(uParam0, iParam1))
	{
		return false;
	}
	if (func_254(uParam0) < 0f)
	{
		func_253(uParam0, 0);
	}
	func_251(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0 - 1)
	{
		uVar1[iVar0 + 1] = *uParam0[iVar0];
		iVar0++;
	}
	func_249(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		*uParam0[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return true;
}

bool func_249(auto uParam0, int iParam1)
{
	int iVar0;
	
	if (has_achievement_been_passed(iParam1))
	{
		return false;
	}
	if (func_523(14) && !func_258(iParam1))
	{
		return false;
	}
	if (func_255(uParam0, iParam1))
	{
		return false;
	}
	if (func_254(uParam0) < 0f)
	{
		func_253(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_250(uParam0, iVar0))
		{
			*uParam0[iVar0] = iParam1;
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_250(auto uParam0, int iParam1)
{
	return *uParam0[iParam1] == 70;
}

void func_251(auto uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_252(uParam0, iVar0);
		iVar0++;
	}
	func_253(uParam0, Global_2563626 - 0.5f);
}

void func_252(auto uParam0, int iParam1)
{
	*uParam0[iParam1] = 70;
}

void func_253(auto uParam0, float fParam1)
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

auto func_254(auto uParam0)
{
	return *uParam0.f_72;
}

int func_255(auto uParam0, int iParam1)
{
	return func_256(uParam0, iParam1) != -1;
}

int func_256(auto uParam0, int iParam1)
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

int func_257(auto uParam0)
{
	return *uParam0.f_71 == 1;
}

bool func_258(int iParam0)
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

void func_259(int iParam0, int iParam1)
{
	int iVar0;
	
	stat_get_int(iParam0, &iVar0, -1);
	iVar0 += iParam1;
	stat_set_int(iParam0, iVar0, 1);
}

void func_260(int iParam0, int iParam1)
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

void func_261()
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

int func_262()
{
	if (func_522())
	{
		return func_264(player_id());
	}
	return func_263(func_18());
}

int func_263(int iParam0)
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

auto func_264(int iParam0)
{
	auto uVar0;
	
	uVar0 = func_265(iParam0);
	return uVar0;
}

int func_265(int iParam0)
{
	if (iParam0 > -1)
	{
		if (iParam0 == player_id())
		{
			return _0xA40F9C2623F6A8B5(-1);
		}
		else if (func_266(iParam0))
		{
			return Global_1587523[iParam0 /*444*/].f_195.f_3;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_266(int iParam0)
{
	if (iParam0 == -1)
	{
		return false;
	}
	else
	{
		return is_bit_set(Global_2428492.f_1, iParam0);
	}
	return true;
}

void func_267(int iParam0)
{
	if (get_player_radio_station_index() != 255)
	{
		set_mobile_radio_enabled_during_gameplay(iParam0);
		set_mobile_phone_radio_state(iParam0);
	}
}

void func_268()
{
	Global_17118.f_5 = 0;
}

void func_269(int iParam0, int iParam1, int iParam2)
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

void func_270()
{
	if (iLocal_70 == iLocal_71)
	{
		iLocal_297 = 3;
	}
	else
	{
		iLocal_298 = iLocal_289[iLocal_70];
		func_271();
		if (iLocal_298 == 0)
		{
			func_81("PROSTITUTES_BJ_SCENE");
			SCRIPT::REQUEST_SCRIPT_audio_bank("PROSTITUTE_BLOWJOB", false);
			iLocal_297 = false;
		}
		else if (iLocal_298 == 1)
		{
			func_81("PROSTITUTES_SEX_SCENE");
			iLocal_297 = true;
		}
		else if (iLocal_298 == 2)
		{
			func_81("PROSTITUTES_SEX_SCENE");
			iLocal_297 = 2;
		}
	}
}

void func_271()
{
	switch (iLocal_298)
	{
		case 0:
			func_273();
			break;
		
		case 1:
		case 2:
			func_272();
			break;
	}
}

void func_272()
{
	iLocal_46++;
	iLocal_47 = 1;
}

void func_273()
{
	iLocal_45++;
	iLocal_47 = 1;
}

bool func_274()
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

bool func_275(int iParam0, int iParam1, int iParam2)
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

void func_276(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_279();
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
				func_278(0);
			}
			return;
		}
		if (((Global_2562123 >= fVar0 && Global_2562123 <= fVar2) && Global_2562124 >= fVar3 + fVar6) && Global_2562124 < fVar3 + 0.034722f)
		{
			Global_2562129 = -3;
			if (iParam3)
			{
				func_278(0);
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
				func_277(fVar4, fVar5 + IntToFloat(iVar13) * 0.034722f, Global_17256, 0.034722f - 0.0015f, 255, 255, 255, iVar10);
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

void func_277(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	draw_rect(fParam0 + fParam2 * 0.5f, fParam1 + fParam3 * 0.5f, fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

void func_278(int iParam0)
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
		func_277(fVar0, fVar1, Global_17256, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_2562129 == -3)
	{
		func_277(fVar0, fVar1 + fVar2, Global_17256, fVar2, 255, 255, 255, iVar3);
	}
	_0xE3A3DB414A373DAB();
}

void func_279()
{
	Global_2562125 = Global_2562123;
	Global_2562126 = Global_2562124;
	Global_2562123 = get_disabled_control_normal(2, 239);
	Global_2562124 = get_disabled_control_normal(2, 240);
	Global_2562127 = Global_2562123 - Global_2562125;
	Global_2562128 = Global_2562124 - Global_2562126;
}

void func_280(auto uParam0, auto uParam1, auto uParam2, auto uParam3, int iParam4)
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

void func_281(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5, int iParam6, int iParam7)
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
	
	if (!func_309(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_307(0, iParam6))
	{
		return;
	}
	_set_screen_draw_position(76, 84);
	_0xF5A2C681787E579D(-0.05f, -0.05f, 0f, 0f);
	fVar55 = 0f;
	if (Global_17257)
	{
		if (func_305(29, 1, 1, &fVar35, &fVar36, iParam7))
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
		if (func_304())
		{
			iVar57 = round(to_float(iVar58) * fVar60);
		}
		fVar61 = to_float(iVar57) / to_float(iVar58);
		fVar59 = fVar61 / fVar60;
		if (func_304())
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
					draw_sprite(func_303(29), func_301(29, 1), Global_17254 + fParam5 * 0.5f, Global_17255 + fVar55 - 0f * 0.5f, fParam5, fVar55 - 0f, 0f, 255, 255, 255, 255, 0);
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
				func_277(Global_17254, Global_17255 + fVar55, fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar49 = Global_17255 + fVar55 + 0.034722f + 0f;
				if (get_hash_key(&(Global_17257.f_1)) != 0)
				{
					func_300();
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
						func_300();
						func_298(Global_17254 + fParam5 - 0.00390625f - func_299("CM_ITEM_COUNT", Global_17257.f_5604, Global_17257.f_5603), Global_17255 + fVar55 + 0.00416664f, "CM_ITEM_COUNT", Global_17257.f_5604, Global_17257.f_5603);
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
				func_277(Global_17254, fVar49 + 0f, fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
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
					func_305(Global_17257.f_4638, 1, 1, &fVar35, &fVar36, iParam7);
					fVar41 = Global_17254 + fVar35 + 0.00078125f * 4f - 0.00078125f * 1f;
				}
				func_297(fVar41);
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
				func_277(Global_17254, fVar49 - 0.00277776f, fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
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
				func_297(fVar41);
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
					func_305(Global_17257.f_4638, 1, 1, &fVar35, &fVar36, iParam7);
					func_296(Global_17257.f_4638, 1, &iVar46, &iVar47, &iVar48);
					draw_sprite(func_303(Global_17257.f_4638), func_301(Global_17257.f_4638, 1), Global_17254 + fVar35 * 0.5f + 0.00078125f * 2f, fVar49 + fVar36 * 0.5f - 0.00138888f * 4f, fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
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
					func_305(Global_2562053.f_67, 1, 1, &fVar35, &fVar36, iParam7);
					fVar41 = Global_17254 + fVar35 + 0.00078125f * 4f - 0.00078125f * 1f;
				}
				func_297(fVar41);
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
				func_277(Global_17254, fVar49 - 0.00277776f, fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
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
				func_297(fVar41);
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
					func_305(Global_2562053.f_67, 1, 1, &fVar35, &fVar36, iParam7);
					func_296(Global_2562053.f_67, 1, &iVar46, &iVar47, &iVar48);
					draw_sprite(func_303(Global_2562053.f_67), func_301(Global_2562053.f_67, 1), Global_17254 + fVar35 * 0.5f + 0.00078125f * 2f, fVar49 + fVar36 * 0.5f - 0.00138888f * 4f, fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
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
			func_289(iVar57, iParam1, 0, 0, 0, 0, iParam4, 1, 0);
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
					func_287(iVar31, 1, 0, 0, 0, 0);
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
												func_287(iVar31, Global_17257.f_1610[iVar24], Global_17257.f_1867[iVar24], iVar53, iVar70, iVar50);
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
													if (func_305(Global_17257.f_4433[iVar22 + iVar14], iVar31, 0, &fVar35, &fVar36, iParam7))
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
											if (func_305(26, 1, 0, &fVar35, &fVar36, iParam7))
											{
												if (Global_17257.f_4953[iVar8] == 2)
												{
													fVar41 -= fVar35 * 2f;
												}
												fVar44 = fVar35 * 0.5f;
												if (func_305(26, 1, 1, &fVar35, &fVar36, iParam7))
												{
													func_296(26, 1, &iVar46, &iVar47, &iVar48);
													draw_sprite(func_303(26), func_301(26, 1), fVar33 + fVar41 + fVar44, fVar34 - 0.00277776f + fVar54 * 0.5f, fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_305(27, 1, 0, &fVar35, &fVar36, iParam7))
											{
												fVar41 += fVar35;
												fVar44 = fVar35 * 0.5f;
												if (func_305(27, 1, 1, &fVar35, &fVar36, iParam7))
												{
													func_296(27, 1, &iVar46, &iVar47, &iVar48);
													draw_sprite(func_303(27), func_301(27, 1), fVar33 + fVar41 + fVar44 + fVar42 + fVar43, fVar34 - 0.00277776f + fVar54 * 0.5f, fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
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
											func_287(iVar31, Global_17257.f_1610[iVar24], Global_17257.f_1867[iVar24], iVar53, 0, iVar50);
											if (Global_17257.f_7858 && Global_17257.f_7859 == iVar6)
											{
												func_286(iVar31);
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
													if (func_305(Global_17257.f_4433[iVar22 + iVar28], iVar31, 0, &fVar35, &fVar36, iParam7))
													{
														fVar41 += fVar35 * 0.5f;
														if (func_305(Global_17257.f_4433[iVar22 + iVar28], iVar31, 1, &fVar35, &fVar36, iParam7))
														{
															func_296(Global_17257.f_4433[iVar22 + iVar28], iVar31, &iVar46, &iVar47, &iVar48);
															if (Global_17257.f_4953[iVar8] == 2)
															{
																draw_sprite(func_303(Global_17257.f_4433[iVar22 + iVar28]), func_301(Global_17257.f_4433[iVar22 + iVar28], iVar31), fVar33 + fVar41 - 0.00078125f * 8f + 0.00078125f * 4f, fVar34 - 0.00277776f + fVar54 * 0.5f, fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else
															{
																draw_sprite(func_303(Global_17257.f_4433[iVar22 + iVar28]), func_301(Global_17257.f_4433[iVar22 + iVar28], iVar31), fVar33 + fVar41 - 0.00078125f * 8f, fVar34 - 0.00277776f + fVar54 * 0.5f, fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
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
													if (func_305(Global_17257.f_4433[iVar22 + iVar14], iVar31, 0, &fVar35, &fVar36, iParam7))
													{
														fVar41 += fVar35 * 0.5f;
														if (func_305(Global_17257.f_4433[iVar22 + iVar14], iVar31, 1, &fVar35, &fVar36, iParam7))
														{
															func_296(Global_17257.f_4433[iVar22 + iVar14], iVar31, &iVar46, &iVar47, &iVar48);
															if (Global_17257.f_4433[iVar22 + iVar14] == 30)
															{
																draw_sprite(func_303(Global_17257.f_4433[iVar22 + iVar14]), func_301(Global_17257.f_4433[iVar22 + iVar14], iVar31), Global_17254 + fVar35 * 0.5f, fVar34 + 0.00277776f + fVar36 * 0.5f - 0.00078125f * 11f, fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else if (Global_17257.f_4953[iVar8] == 2)
															{
																draw_sprite(func_303(Global_17257.f_4433[iVar22 + iVar14]), func_301(Global_17257.f_4433[iVar22 + iVar14], iVar31), fVar33 + fVar41 + fVar42 - 0.00078125f * 8f + 0.00078125f * 4f, fVar34 - 0.00277776f + fVar54 * 0.5f, fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else
															{
																draw_sprite(func_303(Global_17257.f_4433[iVar22 + iVar14]), func_301(Global_17257.f_4433[iVar22 + iVar14], iVar31), fVar33 + fVar41 + fVar42 - 0.00078125f * 12f, fVar34 - 0.00277776f + fVar54 * 0.5f, fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
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
											func_287(iVar31, Global_17257.f_1610[iVar24], Global_17257.f_1867[iVar24], iVar53, 0, 0);
											if (Global_17257.f_7858 && Global_17257.f_7859 == iVar6)
											{
												func_286(iVar31);
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
											if (func_305(26, 1, 0, &fVar35, &fVar36, iParam7))
											{
												if (Global_17257.f_4953[iVar8] == 2)
												{
													fVar41 -= fVar35 * 2f;
												}
												fVar44 = fVar35 * 0.5f;
												if (func_305(26, 1, 1, &fVar35, &fVar36, iParam7))
												{
													func_296(26, 1, &iVar46, &iVar47, &iVar48);
													draw_sprite(func_303(26), func_301(26, 1), fVar33 + fVar41 + fVar44, fVar34 - 0.00277776f + fVar54 * 0.5f, fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_305(27, 1, 0, &fVar35, &fVar36, iParam7))
											{
												fVar41 += fVar35;
												fVar44 = fVar35 * 0.5f;
												if (func_305(27, 1, 1, &fVar35, &fVar36, iParam7))
												{
													func_296(27, 1, &iVar46, &iVar47, &iVar48);
													draw_sprite(func_303(27), func_301(27, 1), fVar33 + fVar41 + fVar44 + fVar42 + fVar43, fVar34 - 0.00277776f + fVar54 * 0.5f, fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										func_287(iVar31, Global_17257.f_1610[iVar24], Global_17257.f_1867[iVar24], iVar53, 0, 0);
										func_285(fVar33 + fVar41, fVar34, "NUMBER", Global_17257.f_3918[iVar20], 0);
									}
									iVar40 = true;
									iVar20++;
									break;
								
								case 3:
									if (iVar5 == 1 && iVar32)
									{
										if (!Global_17257.f_5599)
										{
											func_287(iVar31, Global_17257.f_1610[iVar24], Global_17257.f_1867[iVar24], iVar53, 0, 0);
											if (Global_17257.f_7858 && Global_17257.f_7859 == iVar6)
											{
												func_286(iVar31);
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
											if (func_305(26, 1, 0, &fVar35, &fVar36, 0))
											{
												if (Global_17257.f_4953[iVar8] == 2)
												{
													fVar41 -= fVar35 * 2f;
												}
												fVar44 = fVar35 * 0.5f;
												if (func_305(26, 1, 1, &fVar35, &fVar36, iParam7))
												{
													func_296(26, 1, &iVar46, &iVar47, &iVar48);
													draw_sprite(func_303(26), func_301(26, 1), fVar33 + fVar41 + fVar44, fVar34 - 0.00277776f + fVar54 * 0.5f, fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_305(27, 1, 0, &fVar35, &fVar36, iParam7))
											{
												fVar41 += fVar35;
												fVar44 = fVar35 * 0.5f;
												if (func_305(27, 1, 1, &fVar35, &fVar36, iParam7))
												{
													func_296(27, 1, &iVar46, &iVar47, &iVar48);
													draw_sprite(func_303(27), func_301(27, 1), fVar33 + fVar41 + fVar44 + fVar42 + fVar43, fVar34 - 0.00277776f + fVar54 * 0.5f, fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										func_287(iVar31, Global_17257.f_1610[iVar24], Global_17257.f_1867[iVar24], iVar53, 0, 0);
										func_284(fVar33 + fVar41, fVar34, "NUMBER", Global_17257.f_4175[iVar21], Global_17257.f_4304[iVar21]);
									}
									iVar40 = true;
									iVar21++;
									break;
								
								case 4:
									if (iVar5 == 1 && iVar32)
									{
										if (func_305(Global_17257.f_4433[iVar22], iVar31, 0, &fVar35, &fVar36, iParam7))
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
												if (func_305(26, 1, 0, &fVar35, &fVar36, iParam7))
												{
													if (Global_17257.f_4953[iVar8] == 2)
													{
														fVar41 -= fVar35 * 2f;
													}
													fVar44 = fVar35 * 0.5f;
													if (func_305(26, 1, 1, &fVar35, &fVar36, iParam7))
													{
														func_296(26, 1, &iVar46, &iVar47, &iVar48);
														draw_sprite(func_303(26), func_301(26, 1), fVar33 + fVar41 + fVar44, fVar34 - 0.00277776f + fVar54 * 0.5f, fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
													}
												}
												if (func_305(27, 1, 0, &fVar35, &fVar36, iParam7))
												{
													fVar41 += fVar35;
													fVar44 = fVar35 * 0.5f;
													if (func_305(27, 1, 1, &fVar35, &fVar36, iParam7))
													{
														func_296(27, 1, &iVar46, &iVar47, &iVar48);
														draw_sprite(func_303(27), func_301(27, 1), fVar33 + fVar41 + fVar44 + fVar42 + fVar43, fVar34 - 0.00277776f + fVar54 * 0.5f, fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
													}
												}
											}
											if (func_305(Global_17257.f_4433[iVar22], iVar31, 1, &fVar35, &fVar36, iParam7))
											{
												func_296(Global_17257.f_4433[iVar22], iVar31, &iVar46, &iVar47, &iVar48);
												draw_sprite(func_303(Global_17257.f_4433[iVar22]), func_301(Global_17257.f_4433[iVar22], iVar31), fVar33 + fVar41 + fVar35 * 0.5f, fVar34 - 0.00277776f + fVar54 * 0.5f, fVar35 * func_283(Global_17257.f_4433[iVar22]), fVar36 * func_283(Global_17257.f_4433[iVar22]), 0f, iVar46, iVar47, iVar48, 255, 0);
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
									if (func_305(26, 1, 1, &fVar35, &fVar36, iParam7))
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
		func_206();
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
		func_282(1);
	}
	_0xE3A3DB414A373DAB();
}

void func_282(int iParam0)
{
	Global_1339940.f_932 = iParam0;
}

float func_283(int iParam0)
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

void func_284(float fParam0, float fParam1, char* sParam2, Vector3 fParam3, int iParam4)
{
	_set_text_entry(sParam2);
	add_text_component_float(fParam3, iParam4);
	_draw_text(fParam0, fParam1, 0);
}

void func_285(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	_set_text_entry(sParam2);
	add_text_component_integer(iParam3);
	_draw_text(fParam0, fParam1, iParam4);
}

void func_286(int iParam0)
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

void func_287(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2)
	{
		if (iParam3)
		{
			func_288(Global_17257.f_5878[iParam4], &iVar0, &iVar1, &iVar2);
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

void func_288(int iParam0, auto uParam1, auto uParam2, auto uParam3)
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

void func_289(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	auto uVar0;
	int iVar1;
	int iVar2;
	
	if (!func_309(&uVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_307(iParam4, iParam8))
	{
		return;
	}
	if (func_294())
	{
		return;
	}
	if (_network_is_text_chat_active())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_292(player_id(), 0))
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
					func_291(&(Global_17257.f_4641[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && get_hash_key(&(Global_17257.f_4834[iVar2 /*4*/])) == get_hash_key("PREV"))
					{
						func_291(&(Global_17257.f_4641[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_17257.f_4883[iVar1] == -1)
					{
						func_290(&(Global_17257.f_4834[iVar1 /*4*/]));
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
				func_291(&Global_2562053);
				if (Global_2562053.f_20 == -1)
				{
					func_290(&(Global_2562053.f_16));
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

void func_290(char* sParam0)
{
	_begin_text_component(sParam0);
	_end_text_component();
}

void func_291(char* sParam0)
{
	_0xE83A3E3557A56640(sParam0);
}

int func_292(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == player_id())
	{
		iVar0 = func_293(-1, 0) == 8;
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

int func_293(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_133();
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

bool func_294()
{
	Vector3 vVar0;
	
	if (Global_14413.f_1 > 3)
	{
		return true;
	}
	if (func_295())
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

bool func_295()
{
	if (_get_number_of_instances_of_streamed_script(joaat("cellphone_flashhand")) > 0)
	{
		return true;
	}
	return false;
}

void func_296(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_297(float fParam0)
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

void func_298(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	_set_text_entry(sParam2);
	add_text_component_integer(iParam3);
	add_text_component_integer(iParam4);
	_draw_text(fParam0, fParam1, 0);
}

float func_299(char* sParam0, int iParam1, int iParam2)
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
	func_300();
	_set_text_entry_for_width(sParam0);
	add_text_component_integer(iParam1);
	add_text_component_integer(iParam2);
	return _get_text_screen_width(1);
}

void func_300()
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

auto func_301(int iParam0, int iParam1)
{
	char*[] sVar0 = new char*[2];
	
	if (!is_string_null_or_empty(&(Global_17257.f_6687[iParam0 /*16*/])))
	{
		return func_302(&(Global_17257.f_6687[iParam0 /*16*/]));
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

auto func_302(auto uParam0)
{
	return uParam0;
}

char* func_303(int iParam0)
{
	if (!is_string_null_or_empty(&(Global_17257.f_5886[iParam0 /*16*/])))
	{
		return func_302(&(Global_17257.f_5886[iParam0 /*16*/]));
	}
	if (iParam0 == 48)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

bool func_304()
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

bool func_305(int iParam0, int iParam1, int iParam2, float fParam3, float fParam4, int iParam5)
{
	char* sVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	Vector3 vVar7;
	
	sVar0 = func_303(iParam0);
	sVar1 = func_301(iParam0, iParam1);
	if (get_hash_key(sVar1) != 0)
	{
		fVar4 = 1f;
		if (iParam5)
		{
			_get_screen_active_resolution(&iVar2, &iVar3);
			fVar5 = _get_screen_aspect_ratio(0);
			if (func_304())
			{
				iVar2 = round(to_float(iVar3) * fVar5);
			}
			fVar6 = to_float(iVar2) / to_float(iVar3);
			fVar4 = fVar6 / fVar5;
			if (func_304())
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
		vVar7.x *= func_306(iParam0) / fVar4;
		vVar7.y *= func_306(iParam0) / fVar4;
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

float func_306(int iParam0)
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

bool func_307(int iParam0, int iParam1)
{
	if (Global_2428492.f_1358.f_688 != 0)
	{
		return true;
	}
	if ((((((((!is_screen_faded_in() || (func_24(8, -1) && func_308() != 64)) || (get_pause_menu_state() != 0 && !iParam1)) || (is_player_switch_in_progress() && !iParam0)) || _0x2EAC52B4019E2782()) || Global_69749) || Global_17257.f_7861) || is_warning_message_active()) || Global_91330.f_1352)
	{
		return false;
	}
	return true;
}

auto func_308()
{
	return Global_1315846;
}

bool func_309(auto uParam0, int iParam1, int iParam2)
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

void func_310()
{
	if (!func_351(iLocal_304))
	{
		iLocal_304 = func_328();
		func_319(&iLocal_304, 0, 0, get_random_int_in_range(true, 2), 0, 0, 0);
	}
	else if (!func_462(iLocal_75, 2))
	{
		if (func_311(iLocal_304))
		{
			iLocal_304 = func_328();
			func_319(&iLocal_304, 0, 0, get_random_int_in_range(true, 2), 0, 0, 0);
			func_454(&iLocal_75, 2);
		}
	}
	else if (func_311(iLocal_304))
	{
		func_268();
		func_445(0);
	}
}

int func_311(int iParam0)
{
	return func_312(func_328(), iParam0);
}

bool func_312(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_351(iParam1) || !func_351(iParam0))
	{
		return true;
	}
	iVar0 = func_318(iParam0);
	iVar1 = func_318(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_317(iParam0);
	iVar1 = func_317(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_316(iParam0);
	iVar1 = func_316(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_315(iParam0);
	iVar1 = func_315(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_314(iParam0);
	iVar1 = func_314(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_313(iParam0);
	iVar1 = func_313(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	return false;
}

int func_313(int iParam0)
{
	return shift_right(iParam0, 20) & 63;
}

int func_314(int iParam0)
{
	return shift_right(iParam0, 14) & 63;
}

int func_315(int iParam0)
{
	return shift_right(iParam0, 9) & 31;
}

int func_316(int iParam0)
{
	return shift_right(iParam0, 4) & 31;
}

int func_317(int iParam0)
{
	return (iParam0 && 15);
}

auto func_318(int iParam0)
{
	return shift_right(iParam0, 26) & 31 * func_160(is_bit_set(iParam0, 31), -1, 1) + 2011;
}

void func_319(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_318(*iParam0);
	iVar1 = func_317(*iParam0);
	iVar2 = func_316(*iParam0);
	iVar3 = func_315(*iParam0);
	iVar4 = func_314(*iParam0);
	iVar5 = func_313(*iParam0);
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
	iVar6 = func_327(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 -= iVar6;
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 -= 12;
		}
		iVar6 = func_327(iVar1, iVar0);
	}
	iVar1 += iParam5;
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 -= 12;
	}
	iVar0 += iParam6;
	func_320(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_320(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_326(uParam0, iParam1);
	func_325(uParam0, iParam2);
	func_324(uParam0, iParam3);
	func_323(uParam0, iParam5);
	func_322(uParam0, iParam4);
	func_321(uParam0, iParam6);
}

void func_321(auto uParam0, int iParam1)
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

void func_322(auto uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_317(*uParam0);
	iVar1 = func_318(*uParam0);
	if (iParam1 < 1 || iParam1 > func_327(iVar0, iVar1))
	{
		return;
	}
	*uParam0 -= *uParam0 & 496;
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

void func_323(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 -= *uParam0 & 15;
	*uParam0 = (*uParam0 || iParam1);
}

void func_324(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 -= *uParam0 & 15872;
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_325(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 -= *uParam0 & 1032192;
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_326(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 -= *uParam0 & 66060288;
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

int func_327(int iParam0, int iParam1)
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

auto func_328()
{
	auto uVar0;
	
	func_326(&uVar0, get_clock_seconds());
	func_325(&uVar0, get_clock_minutes());
	func_324(&uVar0, get_clock_hours());
	func_322(&uVar0, get_clock_day_of_month());
	func_323(&uVar0, get_clock_month());
	func_321(&uVar0, get_clock_year());
	return uVar0;
}

void func_329(char* sParam0, int iParam1)
{
	_set_text_component_format(sParam0);
	_display_help_text_from_string_label(0, 0, true, iParam1);
}

void func_330()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	func_345(1);
	func_267(1);
	display_radar(false);
	func_344(0);
	func_343(1, 1, 0, 0, 0);
	func_342(1, 2, 1, 1, 1);
	func_341("PROS_OPTS");
	func_340(201, "PROS_SELECT", -1, 0);
	iLocal_71 = 0;
	iVar0 = func_224(0);
	iVar1 = func_224(1);
	iVar2 = func_224(2);
	if (func_262() >= iVar0)
	{
		func_336(iLocal_71, "PROS_DOLLAR", 1, 1, 0, 0);
		func_333(iVar0, 0);
		iLocal_289[iLocal_71] = 0;
		iLocal_71++;
	}
	if (func_262() >= iVar1 && func_332(iLocal_99))
	{
		func_336(iLocal_71, "PROS_DOLLAR", 1, 1, 0, 0);
		func_333(iVar1, 0);
		iLocal_289[iLocal_71] = 1;
		iLocal_71++;
	}
	if (func_262() >= iVar2 && func_332(iLocal_99))
	{
		func_336(iLocal_71, "PROS_DOLLAR", 1, 1, 0, 0);
		func_333(iVar2, 0);
		iLocal_289[iLocal_71] = 2;
		iLocal_71++;
	}
	func_336(iLocal_71, "PROS_QUIT", 0, 1, 0, 0);
	iLocal_70 = 0;
	func_269(iLocal_70, 1, 1);
	func_331();
	iLocal_89 = get_game_timer();
	iLocal_301 = 3;
}

void func_331()
{
	Global_17118.f_5 = 1;
}

bool func_332(int iParam0)
{
	int iVar0;
	
	if (is_vehicle_driveable(iParam0, 0))
	{
		iVar0 = get_entity_model(iParam0);
		if (((((((((((iVar0 == joaat("infernus") || iVar0 == joaat("voltic")) || iVar0 == joaat("stingergt")) || iVar0 == joaat("stinger")) || iVar0 == joaat("bullet")) || iVar0 == joaat("entityxf")) || iVar0 == joaat("feltzer3")) || iVar0 == joaat("granger")) || iVar0 == joaat("panto")) || iVar0 == joaat("phoenix")) || iVar0 == joaat("fmj")) || iVar0 == joaat("reaper"))
		{
			return false;
		}
	}
	return true;
}

void func_333(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	auto uVar2;
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
	Global_17257.f_3918[Global_17257.f_5092] = iParam0;
	Global_17257.f_5092++;
	Global_17257.f_2124[Global_17257.f_5609 /*5*/][Global_17257.f_5610] = 2;
	Global_17257.f_5610++;
	if (Global_17257.f_5610 >= Global_17257.f_5608)
	{
		fVar0 = func_335();
		if (Global_17257.f_4945[Global_17257.f_5089] && Global_17257.f_5610 == Global_17257.f_5608)
		{
			func_305(26, 1, 0, &fVar1, &uVar2, 0);
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
			fVar3 = func_334();
			if (fVar3 > Global_17257.f_5612[Global_17257.f_5088])
			{
				Global_17257.f_5612[Global_17257.f_5088] = fVar3;
			}
		}
	}
}

float func_334()
{
	int iVar0;
	int iVar1;
	float fVar2;
	auto uVar3;
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
			if (func_305(Global_17257.f_4433[Global_17257.f_5094 - iVar1 + iVar0], 1, 0, &uVar3, &fVar4, 0))
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

float func_335()
{
	float fVar0;
	float fVar1;
	auto uVar2;
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
	func_287(0, 1, 0, 0, 0, iVar6 > 0);
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
			func_305(Global_17257.f_4433[Global_17257.f_5094 - iVar5 + iVar7], 1, 0, &fVar1, &uVar2, 0);
			fVar0 += fVar1;
		}
		iVar7++;
	}
	return fVar0;
}

void func_336(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
		func_339(Global_17257.f_5088, 1);
	}
	else
	{
		func_339(Global_17257.f_5088, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_338(&(Global_17257.f_73[Global_17257.f_5090 /*6*/]));
		if (Global_17257.f_4945[Global_17257.f_5089])
		{
			func_305(26, 1, 0, &fVar2, &uVar3, 0);
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
			fVar4 = func_337(&(Global_17257.f_73[Global_17257.f_5090 /*6*/]));
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

float func_337(char* sParam0)
{
	if (!does_text_label_exist(sParam0))
	{
	}
	return _get_text_scale_height(0.35f, 0);
}

float func_338(char* sParam0)
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
	func_287(0, 1, 0, 0, 0, 0);
	_set_text_entry_for_width(sParam0);
	return _get_text_screen_width(1);
}

void func_339(int iParam0, int iParam1)
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

void func_340(int iParam0, char* sParam1, int iParam2, int iParam3)
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
		set_bit(&(Global_17257.f_4922), Global_17257.f_4639);
	}
	StringCopy(&(Global_17257.f_4641[Global_17257.f_4639 /*16*/]), sVar0, 64);
	StringCopy(&(Global_17257.f_4834[Global_17257.f_4639 /*4*/]), sParam1, 16);
	Global_17257.f_4883[Global_17257.f_4639] = iParam2;
	Global_17257.f_4896[Global_17257.f_4639] = iParam0;
	Global_17257.f_4909[Global_17257.f_4639] = 31;
	Global_17257.f_4639++;
}

void func_341(char* sParam0)
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

void func_342(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17257.f_4953[0] = iParam0;
	Global_17257.f_4953[1] = iParam1;
	Global_17257.f_4953[2] = iParam2;
	Global_17257.f_4953[3] = iParam3;
	Global_17257.f_4953[4] = iParam4;
}

void func_343(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_344(int iParam0)
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

void func_345(int iParam0)
{
	if (!iParam0)
	{
		Global_99798 = get_game_timer() + 250;
	}
	Global_99795 = iParam0;
}

bool func_346(char* sParam0, int iParam1)
{
	if (func_262() < func_224(iParam1))
	{
		StringCopy(sParam0, "PROS_NO_MONEY", 16);
		return false;
	}
	if (network_is_game_in_progress() && func_347(player_id()))
	{
		StringCopy(sParam0, "PIM_HHIDCR", 16);
		return false;
	}
	StringCopy(sParam0, "", 16);
	return true;
}

int func_347(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return is_bit_set(Global_1610316[iVar0 /*174*/].f_1, false);
	}
	return false;
}

bool func_348(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!has_anim_dict_loaded(func_44(player_ped_id(), 0, 0)))
	{
	}
	else if (!is_entity_playing_anim(iParam0, func_44(player_ped_id(), 0, 0), func_103(iParam1), 3) && get_script_task_status(iParam0, -2017877118) != 1)
	{
		if (func_522())
		{
			if (iParam0 == player_ped_id())
			{
				if (!func_198(player_id()))
				{
					iVar0 = get_ped_drawable_variation(player_ped_id(), 6);
					if (!func_495(256))
					{
						func_189(256);
						iLocal_86 = iVar0;
						iLocal_87 = get_ped_texture_variation(player_ped_id(), 6);
						set_ped_component_variation(player_ped_id(), 6, true, false, 0);
						func_189(1024);
					}
				}
				task_play_anim(iParam0, func_44(player_ped_id(), 0, 0), func_349(iParam1), 2f, -8f, -1, 0, 0, 0, 0, 0);
			}
			else
			{
				task_play_anim(iParam0, func_44(player_ped_id(), 0, 0), func_349(iParam1), 2f, -8f, -1, 0, 0, 0, 0, 0);
			}
		}
		else
		{
			task_play_anim(iParam0, func_44(player_ped_id(), 0, 0), func_349(iParam1), 2f, -8f, -1, 0, 0, 0, 0, 0);
		}
	}
	else
	{
		if (is_entity_playing_anim(iParam0, func_44(player_ped_id(), 0, 0), func_349(iParam1), 3))
		{
			if (get_entity_anim_current_time(iParam0, func_44(player_ped_id(), 0, 0), func_349(iParam1)) >= 0.95f)
			{
				task_play_anim(iParam0, func_44(player_ped_id(), 0, 0), func_103(iParam1), 8f, -2f, -1, 1, 0, 0, 0, 0);
			}
		}
		if (is_entity_playing_anim(iParam0, func_44(player_ped_id(), 0, 0), func_103(iParam1), 3))
		{
			return true;
		}
	}
	return false;
}

auto func_349(int iParam0)
{
	if (!func_462(iLocal_49, 32768))
	{
		if (iParam0)
		{
			return func_39(0);
		}
		else
		{
			return func_39(1);
		}
	}
	if (iParam0)
	{
		return func_40(0);
	}
	return func_40(1);
}

void func_350(int iParam0)
{
	*iParam0 = -15;
}

bool func_351(int iParam0)
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
	iVar0 = func_313(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_314(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_315(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_318(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return false;
	}
	iVar4 = func_317(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_316(iParam0);
	if (iVar5 < 1 || iVar5 > func_327(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

void func_352()
{
	if (is_ped_injured(iLocal_96))
	{
		return;
	}
	stop_current_playing_ambient_speech(iLocal_96);
	if (!is_any_speech_playing(iLocal_96))
	{
		if (iLocal_72 < 1)
		{
			_play_ambient_speech1(iLocal_96, "HOOKER_OFFER_SERVICE", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
		}
		else
		{
			_play_ambient_speech1(iLocal_96, "HOOKER_OFFER_AGAIN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
		}
	}
}

bool func_353()
{
	if (func_354(0, -1, 0) && SCRIPT::REQUEST_SCRIPT_audio_bank("SCRIPT\HUD_321_GO", true))
	{
		return true;
	}
	return false;
}

int func_354(char* sParam0, int iParam1, int iParam2)
{
	auto uVar0;
	int iVar1;
	int iVar2;
	
	if (!func_309(&uVar0, 1, iParam1))
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
	iVar2 = func_355(&(Global_17257.f_5530[uVar0 /*10*/]));
	if (!iVar1 || !iVar2)
	{
	}
	return (iVar1 && iVar2);
}

int func_355(auto uParam0)
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

void func_356()
{
	if (!func_522())
	{
		return;
	}
	if (does_entity_exist(iLocal_96))
	{
		iLocal_60 = get_entity_health(iLocal_96);
	}
}

void func_357()
{
	int iVar0;
	
	if (!func_522())
	{
		return;
	}
	if (does_entity_exist(player_ped_id()))
	{
		if (is_ped_in_any_vehicle(player_ped_id(), 0))
		{
			iVar0 = get_vehicle_ped_is_in(player_ped_id(), 0);
			if (does_entity_exist(iVar0))
			{
				vLocal_56 = {get_entity_coords(iVar0, 1)};
			}
		}
	}
}

void func_358(int iParam0, int iParam1)
{
	auto uVar0;
	
	if (!func_309(&uVar0, 0, iParam1))
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
		func_359(&(Global_17257.f_5530[uVar0 /*10*/]));
		Global_17257.f_5591[uVar0] = 0;
	}
	else
	{
		Global_17257.f_5591[uVar0] = 0;
	}
}

void func_359(int iParam0)
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

bool func_360()
{
	if (get_player_wanted_level(player_id()) == 0)
	{
		if (is_player_playing(player_id()))
		{
			if (is_ped_in_any_vehicle(player_ped_id(), 0))
			{
				iLocal_99 = get_vehicle_ped_is_in(player_ped_id(), 0);
				if (!iLocal_99 == 0)
				{
					if ((is_vehicle_driveable(iLocal_99, 0) && !is_entity_on_fire(iLocal_99)) && !is_entity_upsidedown(iLocal_99))
					{
						if (func_85(&iLocal_99))
						{
							func_5(&iLocal_49, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

void func_361()
{
	if (iLocal_72 == 0)
	{
		if (!func_462(iLocal_51, 1) && !func_462(iLocal_51, 16))
		{
			if (func_362(0))
			{
				func_454(&iLocal_51, 1);
			}
		}
		if (!func_462(iLocal_51, 4) && !func_462(iLocal_51, 64))
		{
			if (func_362(2))
			{
				func_454(&iLocal_51, 4);
			}
		}
		if (!func_462(iLocal_51, 8) && !func_462(iLocal_51, 128))
		{
			if (func_362(1))
			{
				func_454(&iLocal_51, 8);
			}
		}
	}
}

bool func_362(int iParam0)
{
	Vector3 vVar0;
	Vector3 vVar3;
	int iVar6;
	auto uVar7;
	auto uVar10;
	auto uVar13;
	
	vVar0 = {func_179(iParam0)};
	vVar3 = {get_entity_coords(iLocal_99, 1)};
	if (iLocal_308[iParam0] == 0)
	{
		if (get_entity_model(iLocal_99) == joaat("casco") || get_entity_model(iLocal_99) == joaat("feltzer3"))
		{
			iLocal_308[iParam0] = _0xE6AC6C45FBE83004(vVar0, vVar3, 0.15f, 511, iLocal_99, 3);
		}
		else
		{
			iLocal_308[iParam0] = _0xE6AC6C45FBE83004(vVar0, vVar3, 0.25f, 511, iLocal_99, 3);
		}
	}
	else
	{
		switch (_get_raycast_result(iLocal_308[iParam0], &iVar6, &uVar7, &uVar10, &uVar13))
		{
			case 2:
				iLocal_308[iParam0] = 0;
				if (iVar6 != 0)
				{
					func_363(iParam0);
					return false;
				}
				else
				{
					return true;
				}
				break;
			
			case 1:
				break;
			
			case 0:
				iLocal_308[iParam0] = 0;
				break;
			}
	}
	return false;
}

void func_363(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (!func_462(iLocal_51, 16))
			{
				func_454(&iLocal_51, 16);
				func_5(&iLocal_51, 1);
			}
			break;
		
		case 1:
			if (!func_462(iLocal_51, 128))
			{
				func_454(&iLocal_51, 128);
				func_5(&iLocal_51, 8);
			}
			break;
		
		case 2:
			if (!func_462(iLocal_51, 64))
			{
				func_454(&iLocal_51, 64);
				func_5(&iLocal_51, 4);
			}
			break;
		
		case 3:
			if (!func_462(iLocal_51, 32))
			{
				func_454(&iLocal_51, 32);
				func_5(&iLocal_51, 2);
			}
			break;
	}
}

void func_364()
{
	if (func_369() && !is_ped_in_any_vehicle(player_ped_id(), 1))
	{
		iLocal_295 = 9;
		func_367(iLocal_96);
		func_367(player_ped_id());
		func_365();
		func_34(&iLocal_104);
	}
}

void func_365()
{
	struct<7> Var0;
	struct<7> Var7;
	
	if (!does_cam_exist(iLocal_102))
	{
		iLocal_102 = create_cam("DEFAULT_SCRIPTED_CAMERA", true);
	}
	if (!does_cam_exist(iLocal_103))
	{
		iLocal_103 = create_cam("DEFAULT_SCRIPTED_CAMERA", true);
	}
	func_366(&Var0, &Var7);
	set_cam_coord(iLocal_102, Var0);
	set_cam_rot(iLocal_102, Var0.f_3, 2);
	set_cam_fov(iLocal_102, Var0.f_6);
	set_cam_coord(iLocal_103, Var7);
	set_cam_rot(iLocal_103, Var7.f_3, 2);
	set_cam_fov(iLocal_103, Var7.f_6);
	set_cam_active(iLocal_102, true);
	set_cam_active(iLocal_103, false);
	render_script_cams(true, false, 3000, 1, 0, 0);
}

void func_366(auto uParam0, auto uParam1)
{
	switch (func_18())
	{
		case 0:
			*uParam0 = {-823.9435f, 186.8976f, 75.5221f};
			*uParam0.f_3 = {-18.973f, 0f, -179.5878f};
			*uParam0.f_6 = 50f;
			*uParam1 = {-828.0038f, 179.5113f, 75.7418f};
			*uParam1.f_3 = {14.0219f, 0f, -107.3339f};
			*uParam1.f_6 = 50f;
			break;
		
		case 1:
			*uParam0 = {-20.162f, -1443.916f, 31.9468f};
			*uParam0.f_3 = {-12.0736f, 0f, -130.562f};
			*uParam0.f_6 = 50f;
			*uParam1 = {-15.925f, -1446.92f, 31.9534f};
			*uParam1.f_3 = {-10.3101f, 0f, 34.3879f};
			*uParam1.f_6 = 50f;
			break;
		
		case 2:
			*uParam0 = {1972.248f, 3804.805f, 36.7174f};
			*uParam0.f_3 = {-19.6476f, 0f, -45.6158f};
			*uParam0.f_6 = 50f;
			*uParam1 = {1970.194f, 3807.541f, 35.5247f};
			*uParam1.f_3 = {-15.8717f, 0f, 41.6556f};
			*uParam1.f_6 = 50f;
			break;
	}
}

void func_367(int iParam0)
{
	int iVar0;
	
	if (!is_ped_injured(iParam0))
	{
		clear_sequence_task(&iVar0);
		open_sequence_task(&iVar0);
		if (is_ped_in_any_vehicle(iParam0, 0))
		{
			task_leave_any_vehicle(false, false, 16842752);
		}
		task_follow_nav_mesh_to_coord(false, func_368(), 1f, -1, 0.5f, 8192, 1193033728);
		close_sequence_task(iVar0);
		task_perform_sequence(iParam0, iVar0);
		clear_sequence_task(&iVar0);
	}
}

Vector3 func_368()
{
	switch (func_18())
	{
		case 0:
			return -819.88f, 177.47f, 70.63f;
			break;
		
		case 1:
			return -14.57f, -1437.56f, 30.12f;
			break;
		
		case 2:
			return 1972.16f, 3817.47f, 32.43f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_369()
{
	return vdist2(get_entity_coords(player_ped_id(), 1), func_371()) < func_370() * func_370();
}

float func_370()
{
	switch (func_18())
	{
		case 0:
			return 20.75f;
			break;
		
		case 1:
			return 10f;
			break;
		
		case 2:
			return 14f;
			break;
	}
	return 0f;
}

Vector3 func_371()
{
	switch (func_18())
	{
		case 0:
			return -827.04f, 172.26f, 69.48f;
			break;
		
		case 1:
			return -16.98f, -1451.59f, 29.57f;
			break;
		
		case 2:
			return 1983.22f, 3820.64f, 31.37f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_372()
{
	func_310();
	func_387();
	if (!func_10(&iLocal_107))
	{
		func_444(&iLocal_107);
	}
	if (func_386())
	{
		return;
	}
	if (!func_10(&iLocal_116))
	{
		func_444(&iLocal_116);
	}
	if (func_360() && is_ped_in_vehicle(iLocal_96, iLocal_99, 0))
	{
		if (is_vehicle_stopped(iLocal_99) && is_vehicle_on_all_wheels(iLocal_99))
		{
			if ((func_379() && !func_369()) && !func_378())
			{
				func_377();
				if (func_7(&iLocal_116) > 2.5f)
				{
					iLocal_85 = add_navmesh_blocking_object(get_entity_coords(iLocal_99, 0), 40f, 40f, 40f, get_entity_heading(iLocal_99), 0, 7);
					set_player_control(player_id(), false, 896);
					func_454(&iLocal_49, 2048);
					iLocal_100 = 0;
					add_relationship_group("ProstituteInPlay", &iLocal_307);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_307, 1862763509);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_96, iLocal_307);
					func_463("Moving into sex state eCurrentProstituteState = PROSTITUTE_CHOOSING_SERVICE ");
					func_5(&iLocal_49, 1024);
					iLocal_304 = -15;
					func_121();
					func_376();
					iLocal_83 = 3;
					if (func_42(0, 1))
					{
						set_cinematic_button_active(false);
					}
					iLocal_295 = 8;
				}
			}
			else
			{
				if ((!is_any_speech_playing(player_ped_id()) && func_7(&iLocal_107) > 15f) && func_375())
				{
					if (!func_462(iLocal_50, 4096))
					{
						func_329("PROS_SPOT", -1);
						func_454(&iLocal_50, 4096);
					}
					func_374();
					func_34(&iLocal_107);
				}
				func_34(&iLocal_116);
			}
		}
		else
		{
			func_34(&iLocal_116);
			func_373();
		}
	}
	else if (!func_369())
	{
		if (does_entity_exist(iLocal_96))
		{
			if (!is_ped_injured(iLocal_96))
			{
				clear_ped_tasks(iLocal_96);
			}
		}
		func_445(0);
	}
}

void func_373()
{
	iLocal_51 = 0;
	iLocal_308[0] = 0;
	iLocal_308[1] = 0;
	iLocal_308[2] = 0;
	iLocal_308[3] = 0;
}

void func_374()
{
	if (is_ped_injured(iLocal_96))
	{
		return;
	}
	if (!is_any_speech_playing(iLocal_96))
	{
		_play_ambient_speech1(iLocal_96, "HOOKER_SECLUDED", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	}
}

int func_375()
{
	if (!func_462(iLocal_51, 256))
	{
		return 1;
	}
	return func_462(iLocal_51, 32);
}

void func_376()
{
	if (func_522())
	{
		PED::SET_PED_CONFIG_FLAG(iLocal_96, 229, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_96, 26, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_96, 115, true);
		set_blocking_of_non_temporary_events(iLocal_96, true);
	}
}

void func_377()
{
	Vector3 vVar0;
	Vector3 vVar3;
	float fVar6;
	int iVar7;
	int iVar8;
	auto uVar9;
	auto uVar12;
	auto uVar15;
	
	if (!func_462(iLocal_49, 2097152))
	{
		if (get_game_timer() > iLocal_84)
		{
			if (iLocal_100 == 0)
			{
				vVar0 = {get_entity_coords(iLocal_99, 1)};
				get_ground_z_for_3d_coord(vVar0, &fVar6, 0);
				vVar0.z = fVar6 + 0.15f;
				vVar3 = {get_offset_from_entity_in_world_coords(iLocal_99, 0f, 0f, -2f)};
				iLocal_100 = _cast_3d_ray_point_to_point(vVar0, vVar3, 2f, 511, iLocal_99, 7);
			}
			else if (_get_raycast_result_2(iLocal_100, &iVar8, &uVar9, &uVar12, &iVar7, &uVar15) == 2)
			{
				if (iVar8 != 0)
				{
					if ((iVar7 == -1447280105 || iVar7 == 1925605558) || iVar7 == 2128369009)
					{
						func_34(&iLocal_116);
					}
				}
				iLocal_84 = get_game_timer() + 1500;
				iLocal_100 = 0;
			}
		}
	}
}

bool func_378()
{
	int iVar0;
	
	iVar0 = get_vehicle_ped_is_in(player_ped_id(), 0);
	if (is_vehicle_driveable(iVar0, 0))
	{
		if (!is_vehicle_seat_free(iVar0, false))
		{
			if (is_entity_in_water(player_ped_id()) || is_entity_in_water(get_vehicle_ped_is_in(player_ped_id(), 0)))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_379()
{
	int iVar0;
	Vector3 vVar1;
	Vector3 vVar4;
	int iVar7;
	
	if (!is_entity_dead(player_ped_id(), 0))
	{
		if (is_ped_in_any_vehicle(player_ped_id(), 0))
		{
			iLocal_99 = get_vehicle_ped_is_in(player_ped_id(), 0);
		}
		vVar1 = {get_entity_coords(player_ped_id(), 1)};
		if (does_scenario_of_type_exist_in_area(vVar1, func_59(0), 12f, 0) || does_scenario_of_type_exist_in_area(vVar1, func_59(1), 12f, 0))
		{
			return false;
		}
		if (func_385())
		{
			return false;
		}
		if (func_384(iLocal_99, &vVar4))
		{
			if (!func_383(vVar4))
			{
				if (!func_382(vVar1) || func_381(vVar1))
				{
					return false;
				}
			}
		}
		if (func_84(get_entity_coords(player_ped_id(), 1), 30f * 0.5f))
		{
			return false;
		}
		if (!_0x639431E895B9AA57(iLocal_96, iLocal_99, 0, 0, false))
		{
			return false;
		}
		set_scenario_peds_to_be_returned_by_next_command(1);
		if (get_closest_ped(vVar1, 20f, 1, 1, &iVar0, 0, 1, -1))
		{
			if (does_entity_exist(iVar0))
			{
				if (!is_entity_dead(iVar0, 0))
				{
					if (has_entity_clear_los_to_entity(iVar0, iLocal_99, 17))
					{
						return false;
					}
				}
			}
			else
			{
				func_463("NO VEHICLES FOUND");
			}
		}
		iVar7 = get_interior_from_entity(player_ped_id());
		if (!iVar7 == 0)
		{
			func_463("IN AN INTERIOR");
			return false;
		}
		if (func_380())
		{
			return false;
		}
	}
	return true;
}

bool func_380()
{
	func_454(&iLocal_51, 256);
	if (!func_462(iLocal_51, 2))
	{
		if (func_362(3))
		{
			func_454(&iLocal_51, 2);
			func_5(&iLocal_51, 32);
		}
		return true;
	}
	else
	{
		func_361();
	}
	return false;
}

bool func_381(Vector3 vParam0)
{
	if (((((((((vdist(vParam0, 491.76f, -515.73f, 29.51f) <= 12f || vdist(vParam0, -1453.385f, -594.2627f, 29.7966f) <= 12f) || vdist(vParam0, -633.6086f, -332.3337f, 33.81f) <= 25f) || vdist(vParam0, -1493.191f, -693.9906f, 26.0665f) <= 25f) || vdist(vParam0, -1512.938f, -675.6082f, 27.4202f) <= 25f) || vdist(vParam0, -1388.642f, -1342.266f, 3.1626f) <= 25f) || vdist(vParam0, 50.2024f, -1392.306f, 28.4166f) <= 12f) || vdist(vParam0, 25.9811f, -1392.289f, 28.3356f) <= 12f) || vdist(vParam0, 10.0435f, -1391.596f, 28.3074f) <= 12f) || vdist(vParam0, -1196.6f, -519.6772f, 31.9742f) <= 12f)
	{
		return true;
	}
	return false;
}

bool func_382(Vector3 vParam0)
{
	if ((((((vdist(vParam0, -1582.782f, 5168.163f, 18.5615f) <= 15f || vdist(vParam0, -1445.73f, -640.8375f, 28.7804f) <= 15f) || vdist(vParam0, -348.7544f, 292.5813f, 83.9843f) <= 15f) || vdist(vParam0, -273f, 317.8898f, 92.2549f) <= 15f) || vdist(vParam0, -1627.935f, -1083.443f, 3.2819f) <= 40f) || vdist(vParam0, -1661.098f, -1057.73f, 2.5729f) <= 40f) || vdist(vParam0, -1518.358f, -553.8981f, 32.1463f) <= 15f)
	{
		func_454(&iLocal_49, 2097152);
		return true;
	}
	func_5(&iLocal_49, 2097152);
	return false;
}

bool func_383(Vector3 vParam0)
{
	int iVar0;
	
	iVar0 = get_nth_closest_vehicle_node_id(get_entity_coords(player_ped_id(), 0), 1, 1, 1077936128, 0);
	get_vehicle_node_position(iVar0, &vParam0);
	if (_get_supports_gps_route_flag(iVar0))
	{
		if (!_get_is_slow_road_flag(iVar0))
		{
			if (vdist2(get_entity_coords(player_ped_id(), 0), vParam0) > 400f)
			{
				return true;
			}
		}
		else if (vdist2(get_entity_coords(player_ped_id(), 0), vParam0) > 56.25f)
		{
			return true;
		}
	}
	else if (!_get_is_slow_road_flag(iVar0))
	{
		if (vdist2(get_entity_coords(player_ped_id(), 0), vParam0) > 400f)
		{
			return true;
		}
	}
	else
	{
		iVar0 = get_nth_closest_vehicle_node_id(get_entity_coords(player_ped_id(), 0), 1, 8, 1077936128, 0);
		get_vehicle_node_position(iVar0, &vParam0);
		if (vdist2(get_entity_coords(player_ped_id(), 0), vParam0) > 400f)
		{
			return true;
		}
	}
	return false;
}

bool func_384(int iParam0, auto uParam1)
{
	Vector3[] vVar0 = new Vector3[4];
	
	vVar0[0 /*3*/] = {get_offset_from_entity_in_world_coords(iParam0, 2f, 0f, 0f)};
	vVar0[1 /*3*/] = {get_offset_from_entity_in_world_coords(iParam0, -2f, 0f, 0f)};
	vVar0[2 /*3*/] = {get_offset_from_entity_in_world_coords(iParam0, 0f, 2f, 0f)};
	vVar0[3 /*3*/] = {get_offset_from_entity_in_world_coords(iParam0, 0f, -2f, 0f)};
	if (get_closest_major_vehicle_node(vVar0[0 /*3*/], uParam1, 1077936128, 0))
	{
		return true;
	}
	else if (get_closest_major_vehicle_node(vVar0[1 /*3*/], uParam1, 1077936128, 0))
	{
		return true;
	}
	else if (get_closest_major_vehicle_node(vVar0[2 /*3*/], uParam1, 1077936128, 0))
	{
		return true;
	}
	else if (get_closest_major_vehicle_node(vVar0[3 /*3*/], uParam1, 1077936128, 0))
	{
		return true;
	}
	return false;
}

auto func_385()
{
	return Global_68058;
}

bool func_386()
{
	if (_get_number_of_instances_of_streamed_script(joaat("carwash1")) > 0 || _get_number_of_instances_of_streamed_script(joaat("carwash2")) > 0)
	{
		return true;
	}
	return false;
}

void func_387()
{
	if (!func_462(iLocal_49, 128))
	{
		func_388(39, 1);
		func_388(40, 1);
		func_388(41, 1);
		func_388(42, 1);
		func_388(43, 1);
		func_388(44, 1);
		func_454(&iLocal_49, 128);
	}
}

void func_388(int iParam0, int iParam1)
{
	if (iParam1)
	{
		if (!func_392(iParam0, 2, 1))
		{
			func_391(iParam0, 2, 1);
		}
	}
	else if (func_392(iParam0, 2, 1))
	{
		func_389(iParam0, 2, 1);
	}
}

void func_389(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam2)
	{
		clear_bit(&(Global_91330.f_1300[iParam0]), iParam1);
	}
	else if (network_is_game_in_progress())
	{
		if (func_146() == 0)
		{
			iVar0 = func_134(func_390(iParam0), -1, 0);
			clear_bit(&iVar0, iParam1);
			func_131(func_390(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		clear_bit(&(Global_101154.f_668[iParam0]), iParam1);
	}
}

int func_390(int iParam0)
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

void func_391(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam2)
	{
		set_bit(&(Global_91330.f_1300[iParam0]), iParam1);
	}
	else if (network_is_game_in_progress())
	{
		if (func_146() == 0)
		{
			iVar0 = func_134(func_390(iParam0), -1, 0);
			set_bit(&iVar0, iParam1);
			func_131(func_390(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		set_bit(&(Global_101154.f_668[iParam0]), iParam1);
	}
}

int func_392(int iParam0, int iParam1, int iParam2)
{
	if (iParam2)
	{
		return is_bit_set(Global_91330.f_1300[iParam0], iParam1);
	}
	else if (network_is_game_in_progress())
	{
		if (func_146() == 0)
		{
			return is_bit_set(func_134(func_390(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return is_bit_set(Global_101154.f_668[iParam0], iParam1);
	}
	return false;
}

void func_393(auto uParam0)
{
	if (func_462(iLocal_49, 2))
	{
		if (!func_57())
		{
			return;
		}
		func_93(1);
	}
	func_62();
	func_512();
	if (func_522())
	{
		func_507(uParam0);
	}
}

void func_394()
{
	if (!is_entity_dead(iLocal_96, 0))
	{
		if (is_entity_at_entity(iLocal_96, player_ped_id(), 5f, 5f, 5f, 0, 1, 0) || func_462(iLocal_49, 8192))
		{
			disable_control_action(0, 101, 1);
			disable_control_action(0, 74, 1);
			set_input_exclusive(0, 51);
			if (is_ped_in_any_vehicle(player_ped_id(), 0) && is_ped_in_any_vehicle(iLocal_96, 0))
			{
				set_entity_lod_dist(iLocal_96, 50);
				set_ped_lod_multiplier(iLocal_96, 5f);
				if (func_462(iLocal_49, 16))
				{
					if (is_player_playing(player_id()))
					{
						set_player_can_do_drive_by(player_id(), 1);
						func_5(&iLocal_49, 16);
					}
				}
				iLocal_99 = get_vehicle_ped_is_in(player_ped_id(), 0);
				if (is_vehicle_driveable(iLocal_99, 0))
				{
					if (is_ped_sitting_in_vehicle(iLocal_96, iLocal_99) && is_ped_in_vehicle(player_ped_id(), iLocal_99, 0))
					{
						func_463("***** prostitute IN VEHICLE****** ");
						if (func_462(iLocal_49, 8))
						{
							if (has_clip_set_loaded(func_86()))
							{
								if (func_400(iLocal_99))
								{
									set_ped_in_vehicle_context(iLocal_96, get_hash_key("MINI_PROSTITUTE_LOW_RESTRICTED_PASSENGER"));
								}
								else if (func_399(iLocal_99))
								{
									set_ped_in_vehicle_context(iLocal_96, get_hash_key("MINI_PROSTITUTE_LOW_RESTRICTED_NOAMBIENT_PASSENGER"));
								}
								else if (func_398(iLocal_99))
								{
									set_ped_in_vehicle_context(iLocal_96, get_hash_key("MINI_PROSTITUTE_LOW_LOWRIDER_PASSENGER"));
								}
								else if (func_397(iLocal_99))
								{
									set_ped_in_vehicle_context(iLocal_96, get_hash_key("MINI_PROSTITUTE_LOW_LOWRIDER2_PASSENGER"));
								}
								else
								{
									set_ped_in_vehicle_context(iLocal_96, get_hash_key("MINI_PROSTITUTE_LOW_PASSENGER"));
								}
							}
						}
						if (func_522())
						{
							set_entity_as_mission_entity(iLocal_96, false, 0);
						}
						else
						{
							set_entity_as_mission_entity(iLocal_96, true, 1);
						}
						func_175(iLocal_96, 0);
						func_374();
						iLocal_64 = get_game_timer();
						func_34(&iLocal_107);
						iLocal_295 = 7;
					}
					else
					{
						func_463("SOMETHINGS GONE WRONGWITH PROS GETTING INTO VEHICLE , either her or player");
					}
				}
			}
			else
			{
				if ((func_396(iLocal_96, player_ped_id(), 1) > 11f || func_395(20f)) || !is_ped_in_vehicle(player_ped_id(), iLocal_99, 0))
				{
					func_108(&iLocal_113);
					if (!is_ped_in_any_vehicle(iLocal_96, 0))
					{
						clear_ped_tasks(iLocal_96);
						func_445(0);
						func_463("PROS FINISHED SEQUENCE TASK BUT NOT IN VEHICLE");
						func_89(15);
					}
				}
				if (is_ped_in_any_vehicle(player_ped_id(), 0))
				{
					if (!is_vehicle_driveable(iLocal_99, 0))
					{
						iLocal_99 = get_vehicle_ped_is_in(player_ped_id(), 0);
					}
					else if (!_0x639431E895B9AA57(iLocal_96, iLocal_99, 0, 0, false))
					{
						if (!func_105())
						{
							if (!func_462(iLocal_75, 1))
							{
								func_34(&iLocal_119);
								func_454(&iLocal_75, 1);
							}
							else if (func_7(&iLocal_119) > 20f)
							{
								func_119();
								func_463("prostitute couldn't get into the car");
								iLocal_295 = 6;
							}
						}
					}
				}
			}
		}
		else if (!func_462(iLocal_75, 1))
		{
			func_463("PLAYER out of range for entering VEHICLE or wanted level");
			clear_ped_tasks(iLocal_96);
			func_89(15);
		}
	}
}

int func_395(float fParam0)
{
	if (!func_10(&iLocal_113))
	{
		func_34(&iLocal_113);
	}
	return func_114(&iLocal_113) > fParam0;
}

auto func_396(int iParam0, int iParam1, int iParam2)
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

bool func_397(int iParam0)
{
	if (is_vehicle_driveable(iParam0, 0))
	{
		switch (get_vehicle_layout_hash(iParam0))
		{
			case 1837596901:
			case 2013836096:
				return true;
				break;
			}
	}
	return false;
}

bool func_398(int iParam0)
{
	if (is_vehicle_driveable(iParam0, 0))
	{
		switch (get_vehicle_layout_hash(iParam0))
		{
			case 1697345049:
			case -635697407:
				return true;
				break;
			}
	}
	return false;
}

bool func_399(int iParam0)
{
	if (is_vehicle_driveable(iParam0, 0))
	{
		switch (get_vehicle_layout_hash(iParam0))
		{
			case -782720499:
			case -38413156:
				return true;
				break;
			}
	}
	return false;
}

bool func_400(int iParam0)
{
	if (is_vehicle_driveable(iParam0, 0))
	{
		switch (get_vehicle_layout_hash(iParam0))
		{
			case 542797648:
			case 68566729:
			case 2033852426:
			case -1820894825:
			case -1453479140:
				return true;
				break;
			}
	}
	return false;
}

void func_401(auto uParam0)
{
	int iVar0;
	
	if (!func_410(0))
	{
		return;
	}
	if (!func_462(iLocal_49, 16))
	{
		set_player_can_do_drive_by(player_id(), 0);
		func_454(&iLocal_49, 16);
	}
	if (!func_10(&iLocal_113))
	{
		func_444(&iLocal_113);
	}
	if (func_114(&iLocal_113) >= 20f || !is_entity_at_entity(iLocal_96, player_ped_id(), 3f, 3f, 3f, 0, 1, 0))
	{
		if (func_462(iLocal_75, 524288))
		{
			func_108(&iLocal_113);
			iLocal_295 = 6;
		}
		else if (func_409())
		{
			func_34(&iLocal_113);
			func_454(&iLocal_75, 524288);
		}
	}
	func_63(iLocal_96);
	if (((is_entity_at_entity(iLocal_96, player_ped_id(), 3f, 3f, 3f, 0, 1, 0) || func_462(iLocal_75, 1)) && !func_209(0)) && !func_385())
	{
		if (!_0x639431E895B9AA57(iLocal_96, iLocal_99, 0, 0, false))
		{
			if (!func_105())
			{
				if (!func_462(iLocal_75, 1))
				{
					func_34(&iLocal_119);
					func_454(&iLocal_75, 1);
				}
				else if (func_7(&iLocal_119) > 10f)
				{
					func_62();
					clear_ped_tasks(iLocal_96);
					func_463("prostitute couldn't get into the car");
					iLocal_295 = 6;
				}
			}
		}
		else
		{
			func_402();
		}
	}
	else if (func_442("PROS_ACCEPT"))
	{
		func_5(&iLocal_49, 1048576);
		func_440();
		if (func_522())
		{
			iVar0 = get_script_task_status(iLocal_96, -2017877118);
			if (iVar0 != 1 && iVar0 != 0)
			{
				func_512();
				func_507(uParam0);
			}
		}
	}
}

void func_402()
{
	char* sVar0;
	
	if (iLocal_295 != 5 && func_346(&sVar0, 0))
	{
		func_405();
		if (func_403(iLocal_74, 1) || is_player_pressing_horn(player_id()))
		{
			_play_ambient_speech1(player_ped_id(), "HOOKER_REQUEST", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			func_454(&iLocal_49, 8192);
			func_34(&iLocal_113);
		}
		if (func_462(iLocal_49, 8192))
		{
			func_440();
			Global_25270 = 1;
			func_124("PROSTITUTES_SOLICIT_SCENE");
			func_81("PROSTITUTES_DRIVE_SCENE");
			if (is_ped_in_any_vehicle(player_ped_id(), 0))
			{
				if (get_script_task_status(iLocal_96, -1794415470) != 1 && !is_ped_in_vehicle(iLocal_96, get_vehicle_ped_is_in(player_ped_id(), 0), 1))
				{
					task_enter_vehicle(iLocal_96, iLocal_99, -1, false, 1f, 8388609, 0);
				}
			}
			sLocal_63 = func_44(player_ped_id(), 1, 0);
			request_anim_dict(sLocal_63);
			sLocal_63 = func_44(player_ped_id(), 0, 1);
			request_anim_dict(sLocal_63);
			func_34(&iLocal_107);
			iLocal_295 = 5;
		}
	}
}

bool func_403(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_404(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	if (!is_player_playing(get_player_index()))
	{
		return false;
	}
	if (func_209(0))
	{
		return false;
	}
	if (is_cutscene_playing())
	{
		return false;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36411[iVar0 /*32*/] == 1 && Global_36411[iVar0 /*32*/].f_4 == 1)
		{
			if (iParam1)
			{
				if (Global_36411[iVar0 /*32*/].f_29)
				{
					return false;
				}
			}
			Global_36411[iVar0 /*32*/].f_5 = 1;
			Global_36411[iVar0 /*32*/].f_29 = 1;
			return true;
		}
		else
		{
			if (Global_36411[iVar0 /*32*/] == 0)
			{
			}
			if (Global_36411[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return false;
}

int func_404(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_36411[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_405()
{
	if (Global_25270)
	{
		if (is_pause_menu_active())
		{
			return;
		}
		disable_control_action(0, 101, 1);
		disable_control_action(0, 74, 1);
		set_input_exclusive(0, 51);
		if (!func_462(iLocal_49, 8192))
		{
			if (iLocal_74 == -1)
			{
				func_407(&iLocal_74, 5, "PROS_ACCEPT", 0, 0, 0, 0);
			}
		}
	}
	else if (func_406(iLocal_74, 0))
	{
		func_440();
	}
}

int func_406(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_404(iParam0);
	if (iParam1 == 0)
	{
		if (iVar0 == -1)
		{
			return 0;
		}
	}
	else
	{
		iVar0 = iParam0;
	}
	if (iVar0 < 0)
	{
		return 0;
	}
	if (Global_36411[iVar0 /*32*/].f_6)
	{
		return 0;
	}
	iVar1 = 0;
	if (!Global_36411[iVar0 /*32*/].f_12)
	{
		_0x0A24DA3A41B718F5(&(Global_36411[iVar0 /*32*/].f_8));
		_add_text_component_item_string(&Global_36606);
		iVar1 = _0x10BDDBFC529428DD(0);
	}
	else
	{
		_0x0A24DA3A41B718F5(&(Global_36411[iVar0 /*32*/].f_8));
		_add_text_component_item_string(&Global_36606);
		if (Global_36411[iVar0 /*32*/].f_30)
		{
			add_text_component_substring_player_name(&(Global_36411[iVar0 /*32*/].f_13));
		}
		else
		{
			_add_text_component_item_string(&(Global_36411[iVar0 /*32*/].f_13));
		}
		iVar1 = _0x10BDDBFC529428DD(0);
	}
	return iVar1;
}

void func_407(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (_get_number_of_instances_of_streamed_script(joaat("context_controller")) < 1)
	{
	}
	if (is_player_switch_in_progress())
	{
		if (!*iParam0 == -1)
		{
			func_408(iParam0);
		}
		return;
	}
	if (!*iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_36411[iVar0 /*32*/])
		{
			Global_36411[iVar0 /*32*/] = 1;
			Global_36411[iVar0 /*32*/].f_1 = Global_36612;
			Global_36612++;
			Global_36411[iVar0 /*32*/].f_4 = 0;
			Global_36411[iVar0 /*32*/].f_29 = 0;
			Global_36411[iVar0 /*32*/].f_5 = 0;
			Global_36411[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_36411[iVar0 /*32*/].f_8), sParam2, 16);
			Global_36411[iVar0 /*32*/].f_6 = iParam3;
			Global_36411[iVar0 /*32*/].f_31 = get_id_of_this_thread();
			Global_36411[iVar0 /*32*/].f_7 = 0;
			Global_36411[iVar0 /*32*/].f_3 = iParam5;
			if (!is_string_null_or_empty(sParam4))
			{
				Global_36411[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_36411[iVar0 /*32*/].f_13), sParam4, 64);
				Global_36411[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_36411[iVar0 /*32*/].f_12 = 0;
				Global_36411[iVar0 /*32*/].f_30 = 0;
			}
			*iParam0 = Global_36411[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

void func_408(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_404(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36411[iVar0 /*32*/])
		{
			Global_36411[iVar0 /*32*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

bool func_409()
{
	int iVar0;
	int iVar1;
	
	if (!does_entity_exist(iLocal_96) || is_ped_injured(iLocal_96))
	{
		return true;
	}
	if (!func_522())
	{
		func_62();
		if (is_ped_in_any_vehicle(iLocal_96, 1))
		{
			task_wander_standard(iLocal_96, 1193033728, 0);
		}
		else if (func_462(iLocal_49, 4194304))
		{
			iVar0 = get_random_int_in_range(8, 11);
			open_sequence_task(&iVar1);
			task_play_anim(false, func_61(iLocal_293), func_60(5), 2f, -2f, -1, 0, 0, 0, 0, 0);
			task_play_anim(false, func_61(iLocal_293), func_60(iVar0), 8f, -8f, -1, 1, 0, 0, 0, 0);
			close_sequence_task(iVar1);
			task_perform_sequence(iLocal_96, iVar1);
			clear_sequence_task(&iVar1);
		}
		return true;
	}
	if (is_ped_in_any_vehicle(iLocal_96, 1))
	{
		if (network_has_control_of_entity(iLocal_96))
		{
			task_wander_standard(iLocal_96, 1193033728, 0);
			return true;
		}
		else
		{
			network_request_control_of_entity(iLocal_96);
			return false;
		}
	}
	switch (iLocal_55)
	{
		case 0:
			if (func_462(iLocal_49, 4194304))
			{
				func_62();
				iLocal_55 = 1;
			}
			break;
		
		case 1:
			if (network_has_control_of_entity(iLocal_96))
			{
				task_play_anim(iLocal_96, func_61(iLocal_293), func_60(5), 2f, -2f, -1, 0, 0, 0, 0, 0);
				iLocal_55 = 2;
			}
			else
			{
				network_request_control_of_entity(iLocal_96);
			}
			break;
		
		case 2:
			if (network_has_control_of_entity(iLocal_96))
			{
				if (get_script_task_status(iLocal_96, -2017877118) == 7)
				{
					iVar0 = get_random_int_in_range(8, 11);
					task_play_anim(iLocal_96, func_61(iLocal_293), func_60(iVar0), 8f, -8f, -1, 1, 0, 0, 0, 0);
					iLocal_55 = 3;
				}
			}
			else
			{
				network_request_control_of_entity(iLocal_96);
			}
			break;
		
		case 3:
			iLocal_55 = 0;
			return true;
			break;
	}
	return false;
}

bool func_410(int iParam0)
{
	if (is_entity_dead(iLocal_96, 0))
	{
		return false;
	}
	if (func_462(iLocal_49, 8192))
	{
	}
	if (func_396(iLocal_96, player_ped_id(), 1) > 11f)
	{
		return false;
	}
	if (!is_ped_in_any_vehicle(player_ped_id(), 0))
	{
		return false;
	}
	if (func_522())
	{
		if (get_vehicle_number_of_passengers(get_vehicle_ped_is_in(player_ped_id(), 0)) > 1)
		{
			return false;
		}
	}
	if (iParam0)
	{
		if (get_entity_speed(get_vehicle_ped_is_in(player_ped_id(), 0)) > 2f)
		{
			return false;
		}
	}
	if (func_84(get_entity_coords(iLocal_96, 1), 1106247680))
	{
		if (!func_462(iLocal_50, 8192) && !is_ped_in_any_police_vehicle(player_ped_id()))
		{
			func_329("PROS_COPS", -1);
			func_454(&iLocal_50, 8192);
		}
		return false;
	}
	if (!func_360())
	{
		if (!func_522())
		{
			if ((!iLocal_88 && !Global_100201) && func_412(player_ped_id(), 0) == -1)
			{
				func_329("PROS_CAR", -1);
				iLocal_88 = 1;
			}
			func_411();
		}
		else if (!func_495(4096))
		{
			func_329("PROS_CAR", -1);
			func_189(4096);
		}
		return false;
	}
	return true;
}

void func_411()
{
	if (is_ped_injured(player_ped_id()))
	{
		return;
	}
	if (!func_462(iLocal_49, 1))
	{
		if (!is_any_speech_playing(player_ped_id()) && !is_any_speech_playing(iLocal_96))
		{
			_play_ambient_speech1(player_ped_id(), "HOOKER_CAR_INCORRECT", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			func_454(&iLocal_49, 1);
		}
	}
}

int func_412(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!is_ped_injured(iParam0))
	{
		if (is_ped_in_any_vehicle(iParam0, iParam1))
		{
			iVar0 = get_vehicle_ped_is_in(iParam0, iParam1);
			if (does_entity_exist(iVar0))
			{
				if (!is_entity_dead(iVar0, 0))
				{
					iVar1 = _get_vehicle_model_max_number_of_passengers(get_entity_model(iVar0));
					iVar2 = 0;
					while (iVar2 < iVar1)
					{
						iVar3 = iVar2 - 1;
						if (!is_vehicle_seat_free(iVar0, iVar3))
						{
							if (get_ped_in_vehicle_seat(iVar0, iVar3) == iParam0)
							{
								return iVar3;
							}
						}
						iVar2++;
					}
				}
			}
		}
	}
	return iVar3;
}

void func_413()
{
	if (func_410(0))
	{
		func_402();
		if (get_script_task_status(iLocal_96, 242628503) == 7 && !func_462(iLocal_49, 8192))
		{
			if (func_66(1))
			{
				func_108(&iLocal_113);
				iLocal_64 = get_game_timer();
				func_463("prostitute proposition player VEHICLE");
				iLocal_295 = 4;
			}
		}
	}
	else
	{
		clear_ped_tasks(iLocal_96);
		func_89(15);
	}
}

void func_414(auto uParam0)
{
	if (func_410(0))
	{
		func_402();
		if (get_script_task_status(iLocal_96, 242628503) == 7 || func_462(iLocal_49, 8192))
		{
			iLocal_295 = 3;
		}
		else if (func_395(20f))
		{
			func_108(&iLocal_113);
			func_445(0);
		}
		else
		{
			func_415(uParam0);
		}
	}
	else
	{
		clear_ped_tasks(iLocal_96);
		func_89(15);
	}
}

void func_415(auto uParam0)
{
	Vector3 vVar0;
	Vector3 vVar3;
	Vector3 vVar6;
	Vector3 vVar9;
	Vector3 vVar12;
	Vector3 vVar15;
	int iVar18;
	
	if (!does_entity_exist(iLocal_99))
	{
		return;
	}
	get_model_dimensions(get_entity_model(iLocal_99), &vVar6, &vVar3);
	vVar0 = {vVar3 - vVar6};
	vVar0 = {vVar0 / Vector(2f, 2f, 2f)};
	vVar9 = {get_offset_from_entity_in_world_coords(iLocal_99, -vVar0.x + 0.2f, 0f, 0f)};
	vVar12 = {get_offset_from_entity_in_world_coords(iLocal_99, vVar0.x + 0.2f, 0f, 0f)};
	vVar15 = {get_entity_coords(iLocal_96, 1)};
	if (vdist(vVar15, vVar12) < vdist(vVar15, vVar9))
	{
		vVar9 = {vVar12};
	}
	if ((get_script_task_status(iLocal_96, -1794415470) != 1 || !func_462(iLocal_49, 8192)) && vdist2(vLocal_93, vVar9) > 0f)
	{
		if (func_522())
		{
			if (!is_entity_a_mission_entity(iLocal_96))
			{
				set_entity_as_mission_entity(iLocal_96, false, 1);
			}
			func_425(&uLocal_287, func_61(iLocal_293));
			func_419(uParam0, 1);
			func_416(&uLocal_287, uParam0);
		}
		open_sequence_task(&iVar18);
		task_follow_nav_mesh_to_coord(false, vVar9.x, vVar9.y, vVar9.z, 1f, -1, 1f, 8192, 1193033728);
		task_turn_ped_to_face_coord(false, get_ped_bone_coords(player_ped_id(), 31086, 0f, 0f, 0f), 0);
		close_sequence_task(iVar18);
		task_perform_sequence(iLocal_96, iVar18);
		clear_sequence_task(&iVar18);
		vLocal_93 = {vVar9};
	}
}

void func_416(auto uParam0, auto uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!is_string_null(*uParam0[iVar0]))
		{
			func_417(uParam1, *uParam0[iVar0]);
		}
		iVar0++;
	}
}

void func_417(auto uParam0, char* sParam1)
{
	func_418(uParam0, 1, -1, sParam1, 0);
}

void func_418(auto uParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
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
			set_bit(uParam0[iVar0 /*18*/], iParam1);
			set_bit(uParam0[iVar0 /*18*/], 30);
			return;
		}
		iVar0++;
	}
}

void func_419(auto uParam0, int iParam1)
{
	int iVar0;
	
	if (!iParam1)
	{
		func_421(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_420(uParam0[iVar0 /*18*/]);
		iVar0++;
	}
	*uParam0.f_271 = 0;
	*uParam0.f_272 = -1;
	*uParam0.f_273 = 1;
}

void func_420(auto uParam0)
{
	*uParam0 = 0;
	*uParam0.f_1 = -1;
	StringCopy(uParam0.f_2, "NULL", 64);
}

void func_421(auto uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (is_bit_set(*uParam0[iVar0 /*18*/], 30))
		{
			func_422(uParam0[iVar0 /*18*/]);
		}
		iVar0++;
	}
	*uParam0.f_271 = 1;
}

void func_422(auto uParam0)
{
	func_423(*uParam0, uParam0.f_2, *uParam0.f_1);
}

void func_423(int iParam0, char* sParam1, int iParam2)
{
	if (is_bit_set(iParam0, 30))
	{
		switch (func_424(iParam0))
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

int func_424(int iParam0)
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

bool func_425(auto uParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!is_string_null(*uParam0[iVar0]))
		{
			if (are_strings_equal(*uParam0[iVar0], sParam1))
			{
				return false;
			}
		}
		iVar0++;
	}
	iVar1 = func_426(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return false;
	}
	*uParam0[iVar1] = sParam1;
	return true;
}

int func_426(auto uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (is_string_null(*uParam0[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_427(auto uParam0)
{
	char* sVar0;
	
	if (func_410(1))
	{
		if (!func_10(&iLocal_113))
		{
			func_444(&iLocal_113);
		}
		func_454(&iLocal_49, 4);
		Global_25271 = 1;
		func_402();
		if (func_443(&iLocal_113, 2f) || func_462(iLocal_49, 8192))
		{
			func_454(&iLocal_49, 2);
			if (func_346(&sVar0, 0))
			{
				set_ped_can_play_ambient_anims(player_ped_id(), 0);
				set_ped_can_play_ambient_base_anims(player_ped_id(), 0);
				task_look_at_entity(player_ped_id(), iLocal_96, -1, 2048, 4);
				func_415(uParam0);
				func_454(&iLocal_49, 4);
				Global_25270 = 1;
				iLocal_295 = 2;
			}
			else
			{
				if (are_strings_equal(func_439(&sVar0), "PIM_HHIDCR"))
				{
					func_438(&sVar0, 30000);
					func_436(1);
				}
				else
				{
					func_329(&sVar0, -1);
				}
				if (!is_string_null_or_empty(&sVar0) && are_strings_equal(&sVar0, "PROS_NO_MONEY"))
				{
					func_428();
				}
				func_89(0);
				iLocal_296 = 0;
				func_454(&iLocal_49, 8388608);
				func_5(&iLocal_49, 4);
				Global_25270 = 0;
			}
		}
	}
	else
	{
		func_5(&iLocal_49, 4);
		Global_25271 = 0;
	}
}

void func_428()
{
	if (!func_495(64))
	{
		func_429(0, 31, 5);
		func_189(64);
	}
}

void func_429(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!_0x883D79C4071E18B3())
	{
		return;
	}
	if (network_is_game_in_progress() && func_433(player_id(), 1))
	{
		return;
	}
	if (is_control_pressed(2, 199) || is_disabled_control_pressed(2, 199))
	{
		return;
	}
	if (get_pause_menu_state() != 0)
	{
		return;
	}
	if (is_pause_menu_active())
	{
		return;
	}
	if (is_system_ui_being_displayed())
	{
		return;
	}
	if (is_warning_message_active())
	{
		return;
	}
	if (func_432())
	{
		return;
	}
	if (!func_430())
	{
		return;
	}
	if (network_is_game_in_progress() || iParam0)
	{
		if (!Global_91330.f_1352 && !_0x2EAC52B4019E2782())
		{
			iVar0 = 18;
			_set_warning_message_2("BRSCRWTEX", "BRDISTEX", iVar0, "BRSHETEX", 0, -1, 0, 0, 1);
			Global_2444100 = iParam1;
			Global_91330.f_1352 = 1;
			Global_91330.f_1353 = iParam2;
		}
	}
}

bool func_430()
{
	if (func_431())
	{
		return false;
	}
	if (network_is_cloud_available() == 0)
	{
		return false;
	}
	return true;
}

auto func_431()
{
	return Global_2443548;
}

auto func_432()
{
	return Global_2444207;
}

bool func_433(int iParam0, int iParam1)
{
	if (iParam1)
	{
		if (func_434(iParam0))
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

int func_434(auto uParam0)
{
	return func_435(uParam0);
}

int func_435(auto uParam0)
{
	return is_bit_set(Global_1587523[uParam0 /*444*/].f_13.f_1, false);
}

void func_436(int iParam0)
{
	unk_0xB9C362BABECDDC7A(3, 21, 200, 0, 0);
	if (iParam0 && !func_437())
	{
		play_sound_frontend(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", 0);
	}
}

int func_437()
{
	return Global_2428492.f_2171[0 /*72*/].f_1 != 0;
}

void func_438(char* sParam0, int iParam1)
{
	_set_text_component_format(sParam0);
	_display_help_text_from_string_label(0, 0, false, iParam1);
}

char* func_439(char* sParam0)
{
	return sParam0;
}

void func_440()
{
	if (iLocal_74 != -1)
	{
		func_408(&iLocal_74);
	}
}

void func_441(auto uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_442(char* sParam0)
{
	_0x0A24DA3A41B718F5(sParam0);
	return _0x10BDDBFC529428DD(0);
}

bool func_443(int iParam0, float fParam1)
{
	if (func_216(iParam0, fParam1))
	{
		func_108(iParam0);
		return true;
	}
	return false;
}

void func_444(int iParam0)
{
	if (!func_10(iParam0))
	{
		func_34(iParam0);
	}
}

void func_445(int iParam0)
{
	int iVar0;
	
	func_119();
	if (iParam0 || iLocal_72 == 0)
	{
		iVar0 = true;
		if (func_522())
		{
			iVar0 = false;
		}
		func_99(iVar0);
		func_89(14);
	}
	else
	{
		func_99(0);
		func_89(15);
	}
}

bool func_446()
{
	if ((((((func_453() || func_452()) || func_451()) || func_450()) || func_447()) || Global_2394645) || Global_2394645.f_1 != 0)
	{
		return true;
	}
	return false;
}

int func_447()
{
	if (func_449() || func_448())
	{
		return Global_1587523[player_id() /*444*/].f_87 == 8;
	}
	return false;
}

auto func_448()
{
	return Global_2434762.f_610;
}

int func_449()
{
	return is_bit_set(Global_2434762.f_2, 11);
}

int func_450()
{
	return is_bit_set(Global_2434762, 5);
}

int func_451()
{
	return is_bit_set(Global_2434762, 2);
}

int func_452()
{
	return is_bit_set(Global_2434762, 20);
}

auto func_453()
{
	return Global_2434762.f_574;
}

void func_454(int iParam0, int iParam1)
{
	func_455(iParam0, iParam1);
}

void func_455(auto uParam0, auto uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_456()
{
	if (Global_25272)
	{
		return false;
	}
	if (func_522())
	{
		return false;
	}
	if (!func_459())
	{
		return false;
	}
	if (func_457())
	{
		iLocal_296 = 4;
		return true;
	}
	return false;
}

bool func_457()
{
	int iVar0;
	
	iLocal_98 = get_random_vehicle_in_sphere(get_entity_coords(iLocal_96, 1), 15f, false, 6);
	if (does_entity_exist(iLocal_98) && !is_entity_dead(iLocal_98, 0))
	{
		if (is_vehicle_driveable(iLocal_98, 0))
		{
			if (func_85(&iLocal_98))
			{
				iLocal_97 = get_ped_in_vehicle_seat(iLocal_98, -1);
				if (!iLocal_97 == 0)
				{
					if (func_458(&iLocal_97))
					{
						iVar0 = get_entity_model(iLocal_98);
						if (!iVar0 == joaat("taxi") && !iVar0 == joaat("taxi"))
						{
							if (!is_entity_a_mission_entity(iLocal_97))
							{
								set_entity_as_mission_entity(iLocal_97, true, 0);
							}
							if (!is_entity_a_mission_entity(iLocal_98))
							{
								set_entity_as_mission_entity(iLocal_98, true, 0);
							}
							set_blocking_of_non_temporary_events(iLocal_97, true);
							set_entity_load_collision_flag(iLocal_97, false);
							set_entity_load_collision_flag(iLocal_98, false);
							return true;
						}
					}
				}
			}
		}
	}
	iLocal_98 = false;
	iLocal_97 = false;
	return false;
}

bool func_458(int iParam0)
{
	if (!is_ped_injured(*iParam0))
	{
		if (is_ped_male(*iParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_459()
{
	if (is_entity_dead(player_ped_id(), 0) || is_entity_dead(iLocal_96, 0))
	{
		return false;
	}
	return true;
}

bool func_460()
{
	if ((!func_459() || !is_ped_in_any_vehicle(player_ped_id(), 0)) || func_462(iLocal_49, 4096))
	{
		return false;
	}
	if (func_462(iLocal_49, 32))
	{
		iLocal_296 = 2;
		func_93(2);
		func_463("IS_CUSTOMER_A_PLAYER is TRUE");
		return true;
	}
	return false;
}

void func_461()
{
	if (!is_entity_dead(iLocal_96, 0))
	{
		if (!is_ped_fleeing(iLocal_96))
		{
			if (get_script_task_status(iLocal_96, 1805844857) != 1)
			{
				set_blocking_of_non_temporary_events(iLocal_96, false);
				set_ped_flee_attributes(iLocal_96, 196628, true);
				_0xF1C03A5352243A30(iLocal_96);
				task_smart_flee_ped(iLocal_96, player_ped_id(), 300f, -1, 1, 0);
				set_ped_keep_task(iLocal_96, true);
				func_89(15);
			}
		}
	}
}

int func_462(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_463(char* sParam0)
{
}

bool func_464()
{
	if (is_ped_injured(iLocal_96))
	{
		return false;
	}
	if (get_script_task_status(iLocal_96, 1435919172) == 1)
	{
		return false;
	}
	if (is_ped_using_any_scenario(iLocal_96))
	{
		return false;
	}
	return true;
}

bool func_465()
{
	switch (iLocal_300)
	{
		case 0:
			if (!func_522())
			{
				func_425(&uLocal_287, func_61(iLocal_293));
				func_416(&uLocal_287, &uLocal_394);
				func_463("Moving to PROSTITUTE_INIT_STREAMING");
			}
			if (func_522())
			{
				reserve_network_mission_peds(1);
				reserve_network_mission_vehicles(1);
				network_request_control_of_entity(iLocal_96);
			}
			iLocal_300 = 1;
			break;
		
		case 1:
			if (!func_522())
			{
				if (func_466(&uLocal_394))
				{
					func_454(&iLocal_49, 4194304);
					func_463("Moving to PROSTITUTE_INIT_INIT");
					iLocal_300 = 2;
				}
			}
			else if (func_522())
			{
				func_454(&iLocal_49, 4194304);
				func_463("Moving to PROSTITUTE_INIT_INIT");
				iLocal_300 = 2;
			}
			break;
		
		case 2:
			iLocal_297 = false;
			iLocal_69 = iLocal_297;
			func_5(&iLocal_49, 512);
			func_5(&iLocal_49, 1024);
			iLocal_296 = 0;
			iLocal_97 = false;
			iLocal_98 = false;
			func_463("Moving to PROSTITUTE_INIT_COMPLETE");
			iLocal_300 = 3;
			break;
		
		case 3:
			if (!is_ped_injured(iLocal_96))
			{
				if (!func_522())
				{
					set_blocking_of_non_temporary_events(iLocal_96, false);
					set_ped_can_evasive_dive(iLocal_96, 0);
					func_441(&uLocal_122, 4, iLocal_96, "Prostitutes", 0, 1);
					return true;
				}
				else if (!network_has_control_of_entity(iLocal_96))
				{
					network_request_control_of_entity(iLocal_96);
				}
				else
				{
					set_blocking_of_non_temporary_events(iLocal_96, false);
					func_441(&uLocal_122, 4, iLocal_96, "Prostitutes", 0, 1);
					set_ped_can_evasive_dive(iLocal_96, 0);
					_0xA3A9299C4F2ADB98(iLocal_96);
					return true;
				}
			}
			break;
	}
	return false;
}

int func_466(auto uParam0)
{
	return func_467(uParam0);
}

bool func_467(auto uParam0)
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
			if (!func_468(uParam0[iVar0 /*18*/]))
			{
				return false;
			}
		}
		iVar0++;
	}
	*uParam0.f_271 = 0;
	return true;
}

int func_468(auto uParam0)
{
	return func_469(*uParam0, uParam0.f_2, *uParam0.f_1);
}

int func_469(int iParam0, char* sParam1, int iParam2)
{
	if (is_bit_set(iParam0, 30))
	{
		if (is_bit_set(iParam0, 29))
		{
			switch (func_424(iParam0))
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

bool func_470()
{
	if (is_player_switch_in_progress())
	{
		if (func_18() == 0)
		{
			if (func_471(iLocal_96, 537.0014f, 119.0252f, 96.0997f, 1) <= 8f)
			{
				if (!does_entity_belong_to_this_script(iLocal_96, 1))
				{
					if (func_522())
					{
						set_entity_as_mission_entity(iLocal_96, false, 0);
					}
					else
					{
						set_entity_as_mission_entity(iLocal_96, true, 1);
					}
				}
				return true;
			}
		}
	}
	return false;
}

auto func_471(int iParam0, Vector3 vParam1, int iParam2)
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

int func_472()
{
	if (is_ped_using_scenario(iLocal_96, func_59(0)))
	{
		if (is_scripted_scenario_ped_using_conditional_anim(iLocal_96, "amb@world_human_prostitute@crackhooker@base", "base"))
		{
			return 0;
		}
		if (is_scripted_scenario_ped_using_conditional_anim(iLocal_96, "amb@world_human_prostitute@cokehead@base", "base"))
		{
			return 1;
		}
	}
	if (is_ped_using_scenario(iLocal_96, func_59(1)))
	{
		if (is_scripted_scenario_ped_using_conditional_anim(iLocal_96, "amb@world_human_prostitute@french@base", "base"))
		{
			return 3;
		}
		if (is_scripted_scenario_ped_using_conditional_anim(iLocal_96, "amb@world_human_prostitute@hooker@base", "base"))
		{
			return 2;
		}
	}
	return -1;
}

void func_473()
{
	if (is_entity_dead(iLocal_96, 0))
	{
		return;
	}
	if (iLocal_294 != 3 && iLocal_294 != 4)
	{
		func_474(player_ped_id());
	}
	else if (iLocal_294 == 3)
	{
		func_474(iLocal_97);
	}
}

void func_474(int iParam0)
{
	if (is_entity_dead(iParam0, 0))
	{
		return;
	}
	if (func_522())
	{
		if (!network_has_control_of_entity(iParam0))
		{
			network_request_control_of_entity(iParam0);
			return;
		}
	}
	if (func_396(iParam0, iLocal_96, 1) < 30f)
	{
		if (!is_ped_headtracking_ped(iLocal_96, iParam0))
		{
			if (func_522())
			{
				if (network_has_control_of_entity(iLocal_96))
				{
					task_clear_look_at(iLocal_96);
					task_look_at_entity(iLocal_96, iParam0, -1, 2048, 4);
				}
			}
			else
			{
				task_clear_look_at(iLocal_96);
				task_look_at_entity(iLocal_96, iParam0, -1, 2048, 4);
			}
		}
	}
	else if (is_ped_headtracking_ped(iLocal_96, iParam0))
	{
		if (func_522())
		{
			if (network_has_control_of_entity(iLocal_96))
			{
				task_clear_look_at(iLocal_96);
			}
		}
		else
		{
			task_clear_look_at(iLocal_96);
		}
	}
}

void func_475()
{
	if (Global_25270)
	{
		if (is_vehicle_driveable(iLocal_99, 0))
		{
			if (is_ped_in_vehicle(iLocal_96, iLocal_99, 0))
			{
				func_476();
			}
		}
		return;
	}
	if (get_player_wanted_level(player_id()) > 0)
	{
		return;
	}
	if (is_entity_dead(iLocal_96, 0) || !does_entity_exist(iLocal_96))
	{
		if (Global_25274 != get_id_of_this_thread() && func_462(iLocal_49, 32))
		{
			func_5(&iLocal_49, 32);
		}
		return;
	}
	if ((vdist2(get_entity_coords(iLocal_96, 1), get_entity_coords(player_ped_id(), 1)) < Global_25273 || Global_25273 == 0f) && iLocal_296 != 4)
	{
		Global_25273 = vdist2(get_entity_coords(iLocal_96, 1), get_entity_coords(player_ped_id(), 1));
		Global_25274 = get_id_of_this_thread();
		func_454(&iLocal_49, 32);
	}
	else if (Global_25274 == get_id_of_this_thread())
	{
		Global_25273 = vdist2(get_entity_coords(iLocal_96, 1), get_entity_coords(player_ped_id(), 1));
	}
	else
	{
		func_5(&iLocal_49, 32);
	}
}

void func_476()
{
	if (func_522())
	{
		if (network_has_control_of_entity(iLocal_96))
		{
			set_ped_reset_flag(iLocal_96, 323, true);
		}
	}
	else
	{
		set_ped_reset_flag(iLocal_96, 323, true);
	}
}

void func_477(auto uParam0)
{
	if (!iLocal_295 == 12)
	{
		if (!is_entity_dead(iLocal_96, 0) && !is_entity_dead(player_ped_id(), 0))
		{
			if (func_481())
			{
				if (func_522())
				{
					func_116(0);
					set_ped_flee_attributes(iLocal_96, 196624, true);
					if (!is_entity_a_mission_entity(iLocal_96))
					{
						set_entity_as_mission_entity(iLocal_96, true, 0);
					}
					task_smart_flee_ped(iLocal_96, player_ped_id(), 300f, -1, 0, 0);
					set_ped_keep_task(iLocal_96, true);
					clear_ped_tasks(player_ped_id());
					func_512();
					func_507(uParam0);
				}
				else
				{
					func_89(12);
				}
			}
			else if (has_entity_been_damaged_by_entity(iLocal_96, player_ped_id(), 1))
			{
				iLocal_67++;
				if (iLocal_67 >= 2)
				{
					func_463("prostitute CLASSED AS UNDER ATTACK");
					iLocal_295 = 12;
				}
				else
				{
					func_463("prostitute BEEN HIT BY PLAYER");
					clear_entity_last_damage_entity(iLocal_96);
				}
			}
			else if (func_479())
			{
				func_478();
				iLocal_295 = 12;
			}
		}
	}
}

void func_478()
{
	if (is_ped_injured(iLocal_96))
	{
		return;
	}
	stop_current_playing_ambient_speech(iLocal_96);
	_play_ambient_speech1(iLocal_96, "APOLOGY_NO_TROUBLE", "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL", 1);
}

int func_479()
{
	int iVar0;
	
	if (!is_ped_in_any_vehicle(player_ped_id(), 0))
	{
		return false;
	}
	if (!func_480())
	{
		return false;
	}
	iVar0 = get_vehicle_ped_is_in(player_ped_id(), 0);
	if (!is_vehicle_driveable(iVar0, 0))
	{
		return false;
	}
	if (is_ped_in_any_police_vehicle(player_ped_id()))
	{
		return is_vehicle_siren_on(iVar0);
	}
	return false;
}

bool func_480()
{
	if (!func_522())
	{
		return true;
	}
	else if (does_entity_exist(get_vehicle_ped_is_in(player_ped_id(), 0)))
	{
		if (_0xC7827959479DCC78(get_vehicle_ped_is_in(player_ped_id(), 0)))
		{
			if (get_ped_in_vehicle_seat(get_vehicle_ped_is_in(player_ped_id(), 0), -1) == player_ped_id())
			{
				if (network_has_control_of_entity(get_vehicle_ped_is_in(player_ped_id(), 0)))
				{
					if (!is_entity_a_mission_entity(get_vehicle_ped_is_in(player_ped_id(), 0)))
					{
						set_entity_as_mission_entity(get_vehicle_ped_is_in(player_ped_id(), 0), false, 0);
					}
					return true;
				}
				else
				{
					network_request_control_of_entity(get_vehicle_ped_is_in(player_ped_id(), 0));
				}
			}
		}
		else
		{
			_0x06FAACD625D80CAA(get_vehicle_ped_is_in(player_ped_id(), 0));
		}
	}
	return false;
}

bool func_481()
{
	Vector3 vVar0;
	
	if (!func_462(iLocal_49, 4096))
	{
		if (func_396(iLocal_96, player_ped_id(), 1) < 30f)
		{
			vVar0 = {get_entity_coords(iLocal_96, 1)};
			if ((((((is_shocking_event_in_sphere(86, vVar0, 30f) || is_shocking_event_in_sphere(89, vVar0, 30f)) || is_shocking_event_in_sphere(88, vVar0, 30f)) || is_shocking_event_in_sphere(102, vVar0, 30f)) || is_shocking_event_in_sphere(114, vVar0, 30f)) || (is_shocking_event_in_sphere(112, vVar0, 30f) && !func_522())) || is_ped_shooting(player_ped_id()))
			{
				if (!func_522())
				{
					set_blocking_of_non_temporary_events(iLocal_96, false);
				}
				func_454(&iLocal_49, 4096);
				return true;
			}
		}
	}
	return false;
}

bool func_482()
{
	if ((does_entity_exist(iLocal_96) && !is_entity_dead(iLocal_96, 0)) && !is_entity_dead(player_ped_id(), 0))
	{
		if (func_522())
		{
			if (func_524(player_id(), 0))
			{
				func_463("prostitute SCRIPT SHOULD EXIT - ANOTHER PLAYER IN VEHICLE");
				if (is_ped_in_any_vehicle(iLocal_96, 0))
				{
					func_99(0);
				}
				func_89(15);
				return false;
			}
		}
		if (!is_ped_injured(iLocal_96))
		{
			if (!is_ped_in_any_vehicle(iLocal_96, 0))
			{
				if (!func_484(9))
				{
					if (!is_entity_dead(iLocal_96, 0) && !is_entity_dead(player_ped_id(), 0))
					{
						if (is_entity_at_entity(iLocal_96, player_ped_id(), 100f, 100f, 50f, 0, 1, 0))
						{
							return true;
						}
						else
						{
							func_463("prostitute SCRIPT SHOULD EXIT - PLAYER WALKED AWAY FROM CAR");
							func_89(15);
						}
					}
				}
				else if (!(func_483() || is_player_switch_in_progress()))
				{
					func_463("prostitute SCRIPT SHOULD EXIT - PLAYER ON MISSION");
					func_89(15);
				}
				else
				{
					return true;
				}
			}
			else if (iLocal_295 == 0)
			{
				func_463("prostitute SCRIPT SHOULD EXIT - prostitute IN VEHICLE");
			}
			else if (!func_484(9) && !func_484(5))
			{
				return true;
			}
			else if (!(func_483() || (is_player_switch_in_progress() && !func_386())))
			{
				func_463("prostitute SCRIPT SHOULD EXIT - PLAYER ON MISSION");
				func_99(0);
				func_89(15);
			}
			else
			{
				return true;
			}
		}
		else
		{
			func_463("prostitute SCRIPT SHOULD EXIT - INJURED");
		}
	}
	if (!does_entity_exist(iLocal_96))
	{
		func_463("prostitute SCRIPT SHOULD EXIT - Prostitute doesn't exist");
	}
	if (is_entity_dead(iLocal_96, 0))
	{
		func_463("prostitute SCRIPT SHOULD EXIT - Prostitute is dead");
	}
	if (is_entity_dead(player_ped_id(), 0))
	{
		func_463("prostitute SCRIPT SHOULD EXIT - Player is dead");
	}
	return false;
}

bool func_483()
{
	if (_get_number_of_instances_of_streamed_script(joaat("player_timetable_scene")) > 0)
	{
		return true;
	}
	return false;
}

bool func_484(int iParam0)
{
	if (Global_35711 == 15)
	{
		return false;
	}
	if (func_485(iParam0))
	{
		return false;
	}
	return true;
}

int func_485(int iParam0)
{
	return func_486(iParam0, Global_35711);
}

bool func_486(int iParam0, int iParam1)
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

void func_487()
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	
	iVar0 = 0;
	while (iVar0 < get_number_of_events(1))
	{
		iVar1 = get_event_at_index(1, iVar0);
		if (iVar1 == 168)
		{
			get_event_data(1, iVar0, &Var2, 2);
			if (Var2 == 262)
			{
				if (Var2.f_1 == player_id())
				{
					func_189(128);
				}
			}
		}
		iVar0++;
	}
}

void func_488()
{
	if (!network_is_game_in_progress())
	{
		return;
	}
	if (!network_get_this_script_is_network_script())
	{
		return;
	}
	if (get_num_reserved_mission_peds(false) != 1)
	{
		if (func_489(1, 0, 1))
		{
			if (_0xCB215C4B56A7FAE7(0) <= 1)
			{
				reserve_network_mission_peds(1);
			}
		}
	}
}

int func_489(int iParam0, int iParam1, int iParam2)
{
	return func_490(0, iParam0, 1, iParam1, iParam2);
}

bool func_490(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	if (!is_bit_set(Global_1348769, false))
	{
		return false;
	}
	if ((iParam2 && !iParam3) && iParam1 <= func_494(iParam0) - func_493(iParam0, 0))
	{
		return true;
	}
	else
	{
		if (iParam3)
		{
			if (iParam2)
			{
				iVar0 = iParam1 - func_493(iParam0, 0);
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = func_494(iParam0) - func_492(iParam0);
		}
		else
		{
			if (iParam2)
			{
				iVar0 = iParam1 - func_493(iParam0, 0);
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = func_494(iParam0) - func_493(iParam0, 1);
		}
		if (!iParam4 && Global_1587523[player_id() /*444*/] != 3)
		{
			iVar1 -= func_491(iParam0);
		}
		if (iVar0 < iVar1)
		{
			return true;
		}
	}
	return false;
}

int func_491(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 10;
			break;
		
		case 2:
			return 10;
			break;
	}
	return 0;
}

int func_492(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1348769.f_1;
			break;
		
		case 1:
			return Global_1348769.f_2;
			break;
		
		case 2:
			return Global_1348769.f_3;
			break;
	}
	return 0;
}

int func_493(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = player_id();
	switch (iParam0)
	{
		case 0:
			if (!network_get_this_script_is_network_script())
			{
				return Global_2418472[iVar0 /*313*/].f_207;
			}
			else
			{
				return get_num_reserved_mission_peds(!iParam1);
			}
			break;
		
		case 1:
			if (!network_get_this_script_is_network_script())
			{
				return Global_2418472[iVar0 /*313*/].f_208;
			}
			else
			{
				return get_num_reserved_mission_vehicles(!iParam1);
			}
			break;
		
		case 2:
			if (!network_get_this_script_is_network_script())
			{
				return Global_2418472[iVar0 /*313*/].f_209;
			}
			else
			{
				return get_num_reserved_mission_objects(!iParam1);
			}
			break;
	}
	return 0;
}

int func_494(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1348777;
			break;
		
		case 1:
			return Global_1348778;
			break;
		
		case 2:
			return Global_1348779;
			break;
	}
	return 0;
}

int func_495(int iParam0)
{
	return func_462(iLocal_52, iParam0);
}

void func_496(auto uParam0)
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
						func_497(uParam0[iVar0 /*18*/]);
						*uParam0.f_272 = get_frame_count();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_497(int iParam0)
{
	func_498(iParam0, iParam0.f_2, *iParam0.f_1);
}

void func_498(int iParam0, char* sParam1, int iParam2)
{
	if (is_bit_set(*iParam0, 30))
	{
		switch (func_424(*iParam0))
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
		set_bit(iParam0, 29);
	}
}

void func_499(int iParam0)
{
	if (func_462(iLocal_52, iParam0))
	{
		func_5(&iLocal_52, iParam0);
	}
}

void func_500()
{
	func_2(0);
	if (does_entity_exist(iLocal_96))
	{
		if (!is_entity_dead(iLocal_96, 0))
		{
			func_2(1);
		}
		else
		{
			func_463("Prostitue: not continuing, prostitue is dead");
		}
	}
	else
	{
		func_463("Prostitue: not continuing, prostitue doesn't exist");
	}
	if (!is_player_playing(player_id()) || is_entity_dead(player_ped_id(), 0))
	{
		func_2(0);
		func_463("Prostitue: not continuing, player isn't player or is dead");
	}
}

bool func_501(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = network_get_script_status();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!iParam2)
			{
				func_505();
			}
			else
			{
				return false;
			}
		}
		if (!func_504())
		{
			if (iParam0 == 0)
			{
				if (!network_is_game_in_progress())
				{
					if (!iParam2)
					{
						func_505();
					}
					else
					{
						return false;
					}
				}
				if (func_503())
				{
					if (!iParam2)
					{
						func_505();
					}
					else
					{
						return false;
					}
				}
				if (func_502(155))
				{
					if (!iParam2)
					{
						func_505();
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
					func_505();
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
				func_505();
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
			func_505();
		}
		else
		{
			return false;
		}
	}
	return true;
}

bool func_502(int iParam0)
{
	if (get_event_exists(1, iParam0))
	{
		return true;
	}
	return false;
}

auto func_503()
{
	return Global_2434762.f_569;
}

auto func_504()
{
	return Global_1315888;
}

void func_505()
{
	terminate_this_thread();
}

void func_506()
{
	func_189(1);
}

void func_507(auto uParam0)
{
	func_510();
	if (func_42(0, 1))
	{
		set_cinematic_button_active(true);
	}
	if (!is_ped_injured(iLocal_96))
	{
		if (is_entity_a_mission_entity(iLocal_96))
		{
			if ((func_522() && get_script_task_status(iLocal_96, 1805844857) != 1) && get_script_task_status(iLocal_96, -251125078) != 1)
			{
				task_wander_standard(iLocal_96, 1193033728, 0);
				if (network_has_control_of_entity(iLocal_96))
				{
					set_ped_keep_task(iLocal_96, true);
				}
				if (_0xB07D3185E11657A5(iLocal_96))
				{
					set_ped_as_no_longer_needed(&iLocal_96);
				}
				stop_current_playing_ambient_speech(iLocal_96);
			}
			else
			{
				set_ped_as_no_longer_needed(&iLocal_96);
				stop_current_playing_ambient_speech(iLocal_96);
			}
		}
	}
	iLocal_49 = 0;
	if (func_462(iLocal_49, 64))
	{
		Global_25272 = 0;
	}
	if (!is_ped_injured(iLocal_97))
	{
		clear_ped_tasks(iLocal_97);
	}
	iLocal_97 = false;
	iLocal_296 = 0;
	if (func_462(iLocal_49, 2048))
	{
		set_player_control(player_id(), true, 0);
	}
	func_5(&iLocal_49, 2048);
	func_509();
	if (func_522())
	{
		if (_0x0EAEB0DB4B132399(iLocal_85))
		{
			remove_navmesh_blocking_object(iLocal_85);
		}
	}
	iLocal_98 = false;
	func_510();
	func_508();
	Global_25273 = 0f;
	clear_focus();
	if (is_player_playing(player_id()))
	{
		set_player_can_do_drive_by(player_id(), 1);
	}
	if (!is_entity_dead(player_ped_id(), 0))
	{
		if (func_495(256))
		{
			set_ped_component_variation(player_ped_id(), 6, iLocal_86, iLocal_87, 0);
			func_189(1024);
		}
	}
	if (func_442("PROS_ACCEPT") && !Global_25270)
	{
		clear_help(1);
	}
	if (Global_25274 == get_id_of_this_thread())
	{
		Global_25270 = 0;
	}
	func_419(uParam0, 0);
	if (func_522())
	{
		func_189(2048);
	}
	else
	{
		terminate_this_thread();
	}
}

void func_508()
{
}

void func_509()
{
	Global_2428492.f_648.f_10 = 0;
}

void func_510()
{
}

void func_511(int iParam0)
{
	if (!is_ped_injured(iLocal_96))
	{
		if (is_ped_in_any_vehicle(iLocal_96, 0))
		{
			if (get_script_task_status(iLocal_96, -828834893) != 1)
			{
				task_leave_any_vehicle(iLocal_96, false, 65536);
			}
		}
		if (iParam0)
		{
			if (func_522())
			{
				if (is_entity_a_mission_entity(iLocal_96))
				{
					if (_0xB07D3185E11657A5(iLocal_96))
					{
						if (_0xA1607996431332DF(network_get_network_id_from_entity(iLocal_96)))
						{
							set_ped_keep_task(iLocal_96, true);
						}
					}
				}
			}
			else
			{
				set_ped_keep_task(iLocal_96, true);
			}
		}
	}
}

void func_512()
{
	if (!func_522())
	{
		if (iLocal_295 == 11 || iLocal_295 == 13)
		{
			return;
		}
	}
	if (!is_entity_dead(iLocal_96, 0))
	{
		if (!is_ped_fleeing(iLocal_96))
		{
			func_89(0);
			iLocal_294 = 1;
		}
		if (func_522())
		{
			if (network_has_control_of_entity(iLocal_96))
			{
				set_blocking_of_non_temporary_events(iLocal_96, false);
				reset_ped_in_vehicle_context(iLocal_96);
			}
		}
		else
		{
			reset_ped_in_vehicle_context(iLocal_96);
		}
		_0x18EB48CFC41F2EA0(iLocal_96, 0f);
	}
	if (is_vehicle_driveable(iLocal_99, 0) && !is_entity_dead(iLocal_99, 0))
	{
		if (func_522())
		{
			if (network_has_control_of_entity(iLocal_99))
			{
				if (Global_1587523[player_id() /*444*/].f_250.f_9 <= 0 && !is_bit_set(Global_1587523[player_id() /*444*/].f_250.f_7, 11))
				{
					set_vehicle_handbrake(iLocal_99, false);
					set_vehicle_lights(iLocal_99, 3);
					set_vehicle_interiorlight(iLocal_99, 0);
				}
				set_vehicle_automatically_attaches(iLocal_99, true, 0);
			}
		}
		else
		{
			set_vehicle_handbrake(iLocal_99, false);
			set_vehicle_lights(iLocal_99, 3);
			set_vehicle_interiorlight(iLocal_99, 0);
		}
	}
	func_521(iLocal_76);
	func_521(iLocal_77);
	func_521(iLocal_78);
	func_521(iLocal_79);
	func_521(iLocal_80);
	func_521(iLocal_81);
	func_521(iLocal_82);
	if (!is_entity_dead(player_ped_id(), 0))
	{
		task_clear_look_at(player_ped_id());
		if (func_522() && iLocal_297 != 3)
		{
			clear_ped_tasks(player_ped_id());
		}
		set_ped_can_play_ambient_anims(player_ped_id(), 1);
		set_ped_can_play_ambient_base_anims(player_ped_id(), 1);
	}
	if (func_462(iLocal_49, 2048))
	{
		set_player_control(player_id(), true, 0);
	}
	func_5(&iLocal_49, 2048);
	enable_control_action(2, 19, 1);
	enable_control_action(2, 37, 1);
	func_509();
	iLocal_296 = 0;
	if (func_462(iLocal_49, 4))
	{
		func_5(&iLocal_49, 4);
		Global_25270 = 0;
		Global_25271 = 0;
	}
	if (func_462(iLocal_49, 8))
	{
		if (has_clip_set_loaded(func_86()))
		{
			remove_clip_set(func_86());
		}
	}
	func_520();
	func_440();
	if (((func_442("PROS_ACCEPT") || func_442("PROS_CAM_TOG")) || func_442("PROS_RESPONSE")) || func_442("PROS_CAM_OC"))
	{
		func_5(&iLocal_49, 1048576);
		clear_help(1);
	}
	func_345(0);
	display_radar(true);
	if (func_462(iLocal_49, 8))
	{
		if (has_clip_set_loaded(func_86()))
		{
			remove_clip_set(func_86());
		}
	}
	func_124("PROSTITUTES_SOLICIT_SCENE");
	release_script_audio_bank();
	func_116(0);
	set_cinematic_button_active(true);
	func_513();
	if (func_522())
	{
		if (func_495(2))
		{
			if (is_ped_in_any_vehicle(player_ped_id(), 0))
			{
				if (_0xC7827959479DCC78(get_vehicle_ped_is_in(player_ped_id(), 0)))
				{
					if (network_has_control_of_entity(get_vehicle_ped_is_in(player_ped_id(), 0)))
					{
						set_vehicle_doors_locked_for_all_players(get_vehicle_ped_is_in(player_ped_id(), 0), 0);
						set_vehicle_doors_locked(get_vehicle_ped_is_in(player_ped_id(), 0), 1);
					}
				}
			}
			else if (_0xC7827959479DCC78(iLocal_99))
			{
				if (network_has_control_of_entity(iLocal_99))
				{
					set_vehicle_doors_locked(iLocal_99, 1);
					set_vehicle_doors_locked_for_all_players(iLocal_99, 0);
					_0x2311DD7159F00582(iLocal_99, 0);
				}
				else
				{
					network_request_control_of_entity(iLocal_99);
					set_vehicle_doors_locked(iLocal_99, 1);
					set_vehicle_doors_locked_for_all_players(iLocal_99, 0);
					_0x2311DD7159F00582(iLocal_99, 0);
				}
			}
		}
	}
	func_181(23, 0);
	iLocal_49 = 0;
	iLocal_51 = 0;
}

void func_513()
{
	struct<8>[] Var0 = new struct<8>[2];
	struct<6>[] Var17 = new struct<6>[2];
	
	if (!func_519())
	{
		return;
	}
	if (!iLocal_47)
	{
		return;
	}
	StringCopy(&(Var0[0 /*8*/]), "GameType", 32);
	StringCopy(&(Var0[1 /*8*/]), "Type", 32);
	StringCopy(&(Var17[0 /*6*/]), "SP", 24);
	StringCopy(&(Var17[1 /*6*/]), "????", 24);
	if (func_517(275, &Var17, &Var0, 2, -1, 0, 0))
	{
		_0x0BCA1D2C47B0D269(131, func_516(), 0f);
		_0x0BCA1D2C47B0D269(117, func_515(), 0f);
		_0x0BCA1D2C47B0D269(118, func_514(), 0f);
	}
}

int func_514()
{
	return iLocal_46;
}

int func_515()
{
	return iLocal_45;
}

bool func_516()
{
	return false;
}

bool func_517(int iParam0, auto uParam1, auto uParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
				Var69 = {func_518(player_id())};
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
			if (network_is_game_in_progress() && Global_2441456.f_3)
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

struct<13> func_518(int iParam0)
{
	struct<13> Var0;
	
	network_handle_from_player(iParam0, &Var0, 13);
	return Var0;
}

bool func_519()
{
	if ((network_is_signed_online() && network_is_signed_in()) && network_is_cloud_available())
	{
		return true;
	}
	return false;
}

void func_520()
{
	if (func_462(iLocal_49, 128))
	{
		func_388(39, 0);
		func_388(40, 0);
		func_388(41, 0);
		func_388(42, 0);
		func_388(43, 0);
		func_388(44, 0);
		func_5(&iLocal_49, 128);
	}
}

void func_521(int iParam0)
{
	if (func_522())
	{
		if (func_210(iParam0))
		{
			network_stop_synchronised_scene(iParam0);
		}
	}
}

int func_522()
{
	return func_495(1);
}

int func_523(int iParam0)
{
	return Global_35711 == iParam0;
}

bool func_524(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_201(iParam0, 1, 1))
	{
		iVar0 = get_player_ped(iParam0);
		if (is_ped_in_any_vehicle(iVar0, iParam1))
		{
			iVar3 = get_vehicle_ped_is_in(iVar0, 0);
			iVar1 = false;
			while (iVar1 < 32)
			{
				iVar2 = int_to_playerindex(iVar1);
				if (func_201(iVar2, 1, 1))
				{
					if (get_player_ped(iVar2) != iVar0)
					{
						if (is_ped_in_vehicle(get_player_ped(iVar2), iVar3, iParam1))
						{
							return true;
						}
					}
				}
				iVar1++;
			}
		}
	}
	return false;
}

bool func_525(int iParam0, int iParam1)
{
	if (iParam1)
	{
		if (func_434(iParam0))
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

