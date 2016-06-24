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
	Vector3 vLocal_45 = 0;
	auto uLocal_48 = 0;
	auto uLocal_49 = 0;
	auto uLocal_50 = 0;
	auto uLocal_51 = 0;
	auto uLocal_52 = 0;
	auto uLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	auto uLocal_56 = 0;
	struct<39> Local_57 = 0;
	auto uLocal_96 = 0;
	auto uLocal_97 = 16;
	auto uLocal_98 = 0;
	auto uLocal_99 = 0;
	auto uLocal_100 = 0;
	auto uLocal_101 = 0;
	auto uLocal_102 = 0;
	auto uLocal_103 = 0;
	auto uLocal_104 = 0;
	auto uLocal_105 = 0;
	auto uLocal_106 = 0;
	auto uLocal_107 = 0;
	auto uLocal_108 = 0;
	auto uLocal_109 = 0;
	auto uLocal_110 = 0;
	auto uLocal_111 = 0;
	auto uLocal_112 = 0;
	auto uLocal_113 = 0;
	auto uLocal_114 = 0;
	auto uLocal_115 = 0;
	auto uLocal_116 = 0;
	auto uLocal_117 = 0;
	auto uLocal_118 = 0;
	auto uLocal_119 = 0;
	auto uLocal_120 = 0;
	auto uLocal_121 = 0;
	auto uLocal_122 = 0;
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
	int iLocal_268 = 0;
	int iLocal_269 = 0;
	float fLocal_270 = 0;
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
	auto uLocal_281 = 21;
	auto uLocal_282 = 6;
	auto uLocal_283 = 0;
	auto uLocal_284 = 0;
	auto uLocal_285 = 0;
	auto uLocal_286 = 0;
	auto uLocal_287 = 0;
	auto uLocal_288 = 1132396544;
	auto uLocal_289 = 1132396544;
	auto uLocal_290 = 1132396544;
	auto uLocal_291 = 0;
	auto uLocal_292 = -1082130432;
	auto uLocal_293 = 0;
	auto uLocal_294 = 0;
	auto uLocal_295 = 8;
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
	auto uLocal_352 = -1;
	auto uLocal_353 = 1092616192;
	auto uLocal_354 = 0;
	auto uLocal_355 = 0;
	int iLocal_356 = 0;
	int iLocal_357 = 0;
	int iLocal_358 = 0;
	int iLocal_359 = 0;
	struct<7> Local_360 = 0;
	int iLocal_367 = 0;
	auto uLocal_368 = 0;
	auto uLocal_369 = 0;
	auto uLocal_370 = 0;
	int iLocal_371 = 0;
	Vector3 fLocal_372 = 0;
	Vector3 fLocal_373 = 0;
	float fLocal_374 = 0;
	int iLocal_375 = 0;
	int iLocal_376 = 0;
	int iLocal_377 = 0;
	auto uLocal_378 = 0;
	auto uLocal_379 = 0;
	auto uLocal_380 = 0;
	auto uLocal_381 = 0;
	int iLocal_382 = 0;
	int iLocal_383 = 0;
	int iLocal_384 = 0;
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
	auto uLocal_420 = 3;
	auto uLocal_421 = 0;
	auto uLocal_422 = 0;
	auto uLocal_423 = 0;
	auto uLocal_424 = 1;
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
	auto uLocal_441 = 2;
	auto uLocal_442 = 0;
	auto uLocal_443 = 0;
	auto uLocal_444 = 0;
	auto uLocal_445 = 13;
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
	auto uLocal_459 = 13;
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
	auto uLocal_668 = 13;
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
	auto uLocal_877 = 13;
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
	auto uLocal_891 = 13;
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
	auto uLocal_905 = 13;
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
	auto uLocal_919 = 13;
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
	struct<55> Local_964 = 0;
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
	int iLocal_1030 = 0;
	int iLocal_1031 = 0;
	int[] iLocal_1032 = new int[3];
	int[] iLocal_1036 = new int[2];
	int iLocal_1039 = 0;
	int[] iLocal_1040 = new int[2];
	int iLocal_1043 = 0;
	int iLocal_1044 = 0;
	int iLocal_1045 = 0;
	int[] iLocal_1046 = new int[2];
	int[] iLocal_1049 = new int[3];
	int[] iLocal_1053 = new int[2];
	int iLocal_1056 = 0;
	int iLocal_1057 = 0;
	int iLocal_1058 = 0;
	struct<8>[] Local_1059 = new struct<8>[3];
	struct<8>[] Local_1084 = new struct<8>[2];
	struct<8>[] Local_1101 = new struct<8>[2];
	int iLocal_1118 = 0;
	int iLocal_1119 = 0;
	var[] uLocal_1120 = new var[3];
	var[] uLocal_1124 = new var[2];
	int iLocal_1127 = 0;
	int iLocal_1128 = 0;
	int iLocal_1129 = 0;
	int iLocal_1130 = 0;
	int iLocal_1131 = 0;
	int iLocal_1132 = 0;
	int iLocal_1133 = 0;
	int iLocal_1134 = 0;
	int iLocal_1135 = 0;
	int iLocal_1136 = 0;
	int iLocal_1137 = 0;
	int iLocal_1138 = 0;
	int iLocal_1139 = 0;
	int iLocal_1140 = 0;
	int iLocal_1141 = 0;
	int iLocal_1142 = 0;
	int iLocal_1143 = 0;
	int iLocal_1144 = 0;
	int iLocal_1145 = 0;
	int iLocal_1146 = 0;
	int iLocal_1147 = 0;
	int iLocal_1148 = 0;
	int iLocal_1149 = 0;
	int iLocal_1150 = 0;
	int iLocal_1151 = 0;
	int iLocal_1152 = 0;
	int iLocal_1153 = 0;
	int iLocal_1154 = 0;
	int iLocal_1155 = 0;
	int iLocal_1156 = 0;
	int iLocal_1157 = 0;
	int iLocal_1158 = 0;
	int iLocal_1159 = 0;
	int iLocal_1160 = 0;
	int iLocal_1161 = 0;
	int iLocal_1162 = 0;
	int iLocal_1163 = 0;
	int iLocal_1164 = 0;
	int iLocal_1165 = 0;
	int iLocal_1166 = 0;
	int iLocal_1167 = 0;
	int iLocal_1168 = 0;
	int iLocal_1169 = 0;
	int iLocal_1170 = 0;
	int iLocal_1171 = 0;
	int iLocal_1172 = 0;
	int iLocal_1173 = 0;
	int iLocal_1174 = 0;
	int iLocal_1175 = 0;
	int iLocal_1176 = 0;
	int iLocal_1177 = 0;
	int iLocal_1178 = 0;
	int iLocal_1179 = 0;
	int iLocal_1180 = 0;
	int iLocal_1181 = 0;
	int iLocal_1182 = 0;
	int iLocal_1183 = 0;
	int iLocal_1184 = 0;
	int iLocal_1185 = 0;
	int iLocal_1186 = 0;
	int iLocal_1187 = 0;
	int iLocal_1188 = 0;
	int iLocal_1189 = 0;
	int iLocal_1190 = 0;
	int iLocal_1191 = 0;
	int iLocal_1192 = 0;
	int iLocal_1193 = 0;
	int iLocal_1194 = 0;
	var[] uLocal_1195 = new var[5];
	int iLocal_1201 = 0;
	auto uLocal_1202 = 0;
	int iLocal_1203 = 0;
	int iLocal_1204 = 0;
	int iLocal_1205 = 0;
	int iLocal_1206 = 0;
	int iLocal_1207 = 0;
	int iLocal_1208 = 0;
	int iLocal_1209 = 0;
	int iLocal_1210 = 0;
	int iLocal_1211 = 0;
	int iLocal_1212 = 0;
	int iLocal_1213 = 0;
	int iLocal_1214 = 0;
	int iLocal_1215 = 0;
	int iLocal_1216 = 0;
	float fLocal_1217 = 0;
	Vector3 fLocal_1218 = 0;
	Vector3 fLocal_1219 = 0;
	float[] fLocal_1220 = new float[5];
	Vector3[] fLocal_1226 = new Vector3[5];
	Vector3 fLocal_1232 = 0;
	float fLocal_1233 = 0;
	float[] fLocal_1234 = new float[3];
	var[] uLocal_1238 = new var[3];
	float fLocal_1242 = 0;
	float fLocal_1243 = 0;
	float fLocal_1244 = 0;
	int iLocal_1245 = 0;
	float fLocal_1246 = 0;
	Vector3[] vLocal_1247 = new Vector3[3];
	Vector3[] vLocal_1257 = new Vector3[3];
	Vector3[] vLocal_1267 = new Vector3[5];
	Vector3 vLocal_1283 = 0;
	Vector3 vLocal_1286 = 0;
	Vector3 vLocal_1289 = 0;
	Vector3 vLocal_1292 = 0;
	Vector3 vLocal_1295 = 0;
	Vector3 vLocal_1298 = 0;
	Vector3 vLocal_1301 = 0;
	Vector3 vLocal_1304 = 0;
	Vector3 vLocal_1307 = 0;
	float fLocal_1310 = 0;
	int iLocal_1311 = 0;
	int iLocal_1312 = 0;
	int iLocal_1313 = 0;
	int iLocal_1314 = 0;
	int[] iLocal_1315 = new int[2];
	int iLocal_1318 = 0;
	int[] iLocal_1319 = new int[3];
	int iLocal_1323 = 0;
	int iLocal_1324 = 0;
	int iLocal_1325 = 0;
	int iLocal_1326 = 0;
	int iLocal_1327 = 0;
	int iLocal_1328 = 0;
	int iLocal_1329 = 0;
	int iLocal_1330 = 0;
	int iLocal_1331 = 0;
	int iLocal_1332 = 0;
	auto uLocal_1333 = 0;
	auto uLocal_1334 = 0;
	int iLocal_1335 = 0;
	auto uLocal_1336 = 0;
	auto uLocal_1337 = 0;
	int iLocal_1338 = 0;
	auto uLocal_1339 = 0;
	auto uLocal_1340 = 0;
	int iLocal_1341 = 0;
	auto uLocal_1342 = 0;
	auto uLocal_1343 = 0;
	int iLocal_1344 = 0;
	auto uLocal_1345 = 0;
	auto uLocal_1346 = 0;
	int iLocal_1347 = 0;
	auto uLocal_1348 = 0;
	auto uLocal_1349 = 0;
	int iLocal_1350 = 0;
	auto uLocal_1351 = 0;
	auto uLocal_1352 = 0;
	int iLocal_1353 = 0;
	auto uLocal_1354 = 0;
	auto uLocal_1355 = 0;
	int iLocal_1356 = 0;
	auto uLocal_1357 = 0;
	auto uLocal_1358 = 0;
	int iLocal_1359 = 0;
	auto uLocal_1360 = 0;
	auto uLocal_1361 = 0;
	int iLocal_1362 = 0;
	auto uLocal_1363 = 16;
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
	auto uLocal_1530 = -1;
	auto uLocal_1531 = 0;
	auto uLocal_1532 = 0;
	auto uLocal_1533 = 0;
	auto uLocal_1534 = 0;
	auto uLocal_1535 = 0;
	auto uLocal_1536 = 0;
	auto uLocal_1537 = 1000;
	auto uLocal_1538 = 1000;
	auto uLocal_1539 = 0;
	auto uLocal_1540 = 0;
	auto uLocal_1541 = 0;
	auto uLocal_1542 = 8;
	auto uLocal_1543 = 0;
	auto uLocal_1544 = 0;
	auto uLocal_1545 = 0;
	auto uLocal_1546 = 4;
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
	auto uLocal_1561 = 4;
	auto uLocal_1562 = 0;
	auto uLocal_1563 = 0;
	auto uLocal_1564 = 0;
	auto uLocal_1565 = 0;
	auto uLocal_1566 = 0;
	auto uLocal_1567 = 0;
	auto uLocal_1568 = 0;
	auto uLocal_1569 = 0;
	auto uLocal_1570 = 0;
	auto uLocal_1571 = 0;
	auto uLocal_1572 = 0;
	auto uLocal_1573 = 0;
	auto uLocal_1574 = 0;
	auto uLocal_1575 = 0;
	auto uLocal_1576 = 4;
	auto uLocal_1577 = 0;
	auto uLocal_1578 = 0;
	auto uLocal_1579 = 0;
	auto uLocal_1580 = 0;
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
	auto uLocal_1591 = 4;
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
	auto uLocal_1606 = 4;
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
	auto uLocal_1621 = 4;
	auto uLocal_1622 = 0;
	auto uLocal_1623 = 0;
	auto uLocal_1624 = 0;
	auto uLocal_1625 = 0;
	auto uLocal_1626 = 0;
	auto uLocal_1627 = 0;
	auto uLocal_1628 = 0;
	auto uLocal_1629 = 0;
	auto uLocal_1630 = 0;
	auto uLocal_1631 = 0;
	auto uLocal_1632 = 0;
	auto uLocal_1633 = 0;
	auto uLocal_1634 = 0;
	auto uLocal_1635 = 0;
	auto uLocal_1636 = 4;
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
	auto uLocal_1651 = 4;
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
	Vector3 vLocal_1664 = 0;
	Vector3 fLocal_1667 = 0;
	Vector3 vLocal_1668 = 0;
	Vector3 fLocal_1671 = 0;
	int iLocal_1672 = 0;
	int iLocal_1673 = 0;
	Vector3 vLocal_1674 = 0;
	Vector3 vLocal_1677 = 0;
	Vector3 vLocal_1680 = 0;
	Vector3 vLocal_1683 = 0;
	int iLocal_1686 = 0;
	auto uLocal_1687 = 0;
	auto uLocal_1688 = 0;
	int iLocal_1689 = 0;
	struct<12> Local_1690 = 2;
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
	vLocal_45 = {500f, 500f, 500f};
	iLocal_54 = _0x4A9923385BDB9DAD();
	iLocal_55 = _get_blip_info_id_iterator();
	iLocal_268 = -1;
	fLocal_270 = 1f;
	iLocal_383 = 100;
	iLocal_384 = 3;
	iLocal_1030 = 3;
	iLocal_1209 = 37000;
	iLocal_1215 = -1;
	fLocal_1217 = 90000f;
	fLocal_1242 = 135f;
	fLocal_1244 = 0f;
	fLocal_1246 = 0f;
	vLocal_1292 = {-1162.985f, -161.715f, -38.221f};
	vLocal_1295 = {-1327.63f, -266.202f, 38.221f};
	vLocal_1298 = {-1236.661f, -197.316f, 39.6313f};
	vLocal_1301 = {-1266.027f, -218.9829f, 41.44594f};
	vLocal_1307 = {-1237.731f, -189.5452f, 40.63728f};
	fLocal_1310 = 40f;
	iLocal_1324 = joaat("a_m_y_beachvesp_02");
	iLocal_1325 = joaat("fbi2");
	iLocal_1326 = joaat("s_m_m_highsec_01");
	iLocal_1327 = joaat("s_m_m_highsec_02");
	iLocal_1328 = joaat("washington");
	vLocal_1664 = {-1263.677f, -222.2767f, 41.446f};
	fLocal_1667 = 304.201f;
	vLocal_1668 = {-1507.252f, -934.3307f, 8.6562f};
	fLocal_1671 = 137.9228f;
	vLocal_1674 = {-1510.733f, -935.96f, 10.90214f};
	vLocal_1677 = {15.07491f, -0.024198f, -71.86189f};
	vLocal_1680 = {-1510.878f, -936.1155f, 9.798549f};
	vLocal_1683 = {4.686822f, -0.024198f, -72.45972f};
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		trigger_music_event("ASS1_FAIL");
		func_485(&(Global_101154.f_18653.f_1), 1024);
		func_483();
		func_478();
	}
	set_mission_flag(1);
	iLocal_1044 = PLAYER::PLAYER_PED_ID();
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		clear_player_wanted_level(player_id());
	}
	if (func_477())
	{
		if (func_476())
		{
			iLocal_1152 = 1;
		}
		iLocal_1141 = true;
	}
	else
	{
		iLocal_1141 = false;
	}
	func_475();
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
	}
	func_474();
	iLocal_269 = 0;
	Local_57 = {func_472(iLocal_269)};
	set_ped_model_is_suppressed(iLocal_1326, true);
	set_ped_model_is_suppressed(iLocal_1327, true);
	_0xF4F2C0D4EE209E20();
	if (func_477())
	{
		iLocal_376 = true;
		iLocal_1208 = func_471();
		if (Global_85788)
		{
			if (iLocal_1208 <= 1)
			{
				iLocal_1208++;
			}
		}
		func_470();
		if (iLocal_1208 == 0)
		{
			if (iLocal_1152)
			{
				func_468();
				while (!func_467())
				{
					wait(0);
				}
				iVar0 = func_426(-1523.174f, -924.6732f, 9.1221f, 53.0177f);
				if (((!is_this_model_a_boat(ENTITY::GET_ENTITY_MODEL(iVar0)) && !is_this_model_a_plane(ENTITY::GET_ENTITY_MODEL(iVar0))) && !is_this_model_a_heli(ENTITY::GET_ENTITY_MODEL(iVar0))) && !is_big_vehicle(iVar0))
				{
					set_vehicle_on_ground_properly(iVar0);
				}
				else
				{
					delete_vehicle(&iVar0);
				}
			}
			func_425(-1510.181f, -946.9595f, 8.2738f, 10f, 1, 0);
		}
		else if (iLocal_1208 == 1)
		{
			if (iLocal_1152)
			{
				func_468();
				while (!func_467())
				{
					wait(0);
				}
				iVar1 = func_426(-1266.405f, -219.1991f, 41.4459f, 304.8644f);
				if (((!is_this_model_a_boat(ENTITY::GET_ENTITY_MODEL(iVar1)) && !is_this_model_a_plane(ENTITY::GET_ENTITY_MODEL(iVar1))) && !is_this_model_a_heli(ENTITY::GET_ENTITY_MODEL(iVar1))) && !is_big_vehicle(iVar1))
				{
					set_vehicle_on_ground_properly(iVar1);
				}
				else
				{
					delete_vehicle(&iVar1);
				}
			}
			func_425(-1266.173f, -214.0011f, 41.4459f, 310.0126f, 1, 0);
		}
		else if (iLocal_1208 == 2)
		{
			if (iLocal_1152)
			{
				func_468();
				while (!func_467())
				{
					wait(0);
				}
				iVar2 = func_426(-1188.486f, -316.9884f, 36.6841f, 29.9702f);
				if (((!is_this_model_a_boat(ENTITY::GET_ENTITY_MODEL(iVar2)) && !is_this_model_a_plane(ENTITY::GET_ENTITY_MODEL(iVar2))) && !is_this_model_a_heli(ENTITY::GET_ENTITY_MODEL(iVar2))) && !is_big_vehicle(iVar2))
				{
					set_vehicle_on_ground_properly(iVar2);
				}
				else
				{
					delete_vehicle(&iVar2);
				}
			}
			func_425(-1184.244f, -319.2575f, 36.7445f, 26.0711f, 1, 0);
		}
	}
	while (true)
	{
		_0x208784099002BC30("M_ASS1", 0);
		if (iLocal_1142)
		{
			if (func_424())
			{
				func_423();
			}
		}
		else if (!PED::IS_PED_INJURED(iLocal_1044))
		{
			func_416();
			if (iLocal_1030 < 10)
			{
				Local_360.f_6 = 1;
			}
			else
			{
				Local_360.f_6 = 5;
			}
			func_141();
			func_89();
			if (iLocal_1157)
			{
				func_84();
			}
			if (!iLocal_1140)
			{
				if (iLocal_1030 >= 9 && iLocal_1030 < 11)
				{
					func_80(&uLocal_1202, &fLocal_1217, &iLocal_1139, &iLocal_1140);
				}
			}
			func_55();
			func_53();
			if (((iLocal_1133 || iLocal_1138) && iLocal_1030 < 11) || (iLocal_1168 && iLocal_1030 < 11))
			{
				if (!func_52(&iLocal_1353) && iLocal_1030 > 8)
				{
					func_49(&iLocal_1353);
				}
				else if (iLocal_1030 < 8 || func_46(&iLocal_1353) > 5f)
				{
					if (iLocal_1043 == 1)
					{
						func_31(1);
					}
					else if (iLocal_1043 == 5)
					{
						func_31(5);
					}
					else
					{
						func_31(2);
					}
				}
				else if (func_46(&iLocal_1353) > 2.5f)
				{
					if (!iLocal_1169)
					{
						if (!iLocal_1188)
						{
							iLocal_1056 = func_30(70f, 0);
						}
						else
						{
							iLocal_1056 = func_30(70f, 1);
						}
						if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
						{
							if (!PED::IS_PED_INJURED(iLocal_1056))
							{
								clear_ped_tasks(iLocal_1056);
								if (iLocal_1043 == 1)
								{
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_1313))
									{
										if (!is_ped_in_any_vehicle(iLocal_1056, 0))
										{
											task_go_to_entity_while_aiming_at_entity(iLocal_1056, iLocal_1313, iLocal_1313, 2f, 0, 0.5f, 4f, 1, 0, -957453492);
										}
									}
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_1056) && !PED::IS_PED_INJURED(iLocal_1056))
									{
										func_28(iLocal_1056, 6, "OJAvaGUARD2");
										func_27(&uLocal_1363, "OJASAUD", "OJASva_CAR2", "OJASva_CAR2_1", 9, 0, 0);
									}
								}
								else if (iLocal_1043 == 8)
								{
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_1311) && is_vehicle_driveable(iLocal_1311, 0))
									{
										task_go_to_entity_while_aiming_at_entity(iLocal_1056, iLocal_1311, iLocal_1311, 2f, 0, 0.5f, 4f, 1, 0, -957453492);
									}
									func_28(func_25(25f), 6, "OJAvaGUARD2");
									func_27(&uLocal_1363, "OJASAUD", "OJASva_CAR3", "OJASva_CAR3_1", 9, 0, 0);
								}
								else
								{
									task_aim_gun_at_entity(iLocal_1056, PLAYER::PLAYER_PED_ID(), -1, 0);
									func_2(iLocal_1056);
								}
							}
						}
						iLocal_1169 = 1;
					}
				}
			}
			func_1();
		}
		wait(0);
	}
}

void func_1()
{
	int iVar0;
	
	if (is_ped_in_any_vehicle(iLocal_1044, 0))
	{
		iVar0 = get_vehicle_ped_is_in(iLocal_1044, 0);
		if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("towtruck") || ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("towtruck2"))
		{
			iLocal_1143 = true;
		}
	}
	else
	{
		iLocal_1143 = false;
	}
	if (iLocal_1143)
	{
		if (is_vehicle_attached_to_tow_truck(iVar0, iLocal_1311))
		{
			detach_vehicle_from_tow_truck(iVar0, iLocal_1311);
		}
	}
}

void func_2(int iParam0)
{
	struct<6> Var0;
	
	if (!iLocal_1179)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(iParam0) && !PED::IS_PED_INJURED(iParam0)) && func_23(iParam0, 1) < 50f)
		{
			if (!func_22())
			{
				if (iLocal_1043 == 4)
				{
					func_28(iParam0, 3, "OJAvaGUARD");
					func_6(&uLocal_1363, "OJASAUD", "OJASva_LIMO", 9, 0, 0, 0);
				}
				else if (iLocal_1043 == 8)
				{
					func_28(func_25(25f), 6, "OJAvaGUARD2");
					func_27(&uLocal_1363, "OJASAUD", "OJASva_CAR3", "OJASva_CAR3_1", 9, 0, 0);
				}
				else
				{
					func_28(iParam0, 3, "OJAvaGUARD");
					func_6(&uLocal_1363, "OJASAUD", "OJASva_GTFO3", 9, 0, 0, 0);
				}
				iLocal_1179 = 1;
			}
			else
			{
				Var0 = {func_5()};
				if (!are_strings_equal(&Var0, "OJAS_FEED"))
				{
					func_3();
				}
			}
		}
	}
}

void func_3()
{
	Global_14578 = 0;
	func_4();
}

void func_4()
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

struct<6> func_5()
{
	char[24] cVar0;
	
	StringCopy(&cVar0, "NULL", 24);
	if (Global_15712 == 4)
	{
		return Global_15331;
	}
	return cVar0;
}

int func_6(auto uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_21(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_7(sParam2, iParam3, 0);
}

bool func_7(char* sParam0, int iParam1, int iParam2)
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
					func_4();
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
		if (func_20(8, -1))
		{
			return false;
		}
		Global_15788 = {Global_15782};
		func_19();
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
				func_12();
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
				if (func_11())
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
			if (func_10())
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
			func_9();
			Global_15722 = iParam2;
		}
		Global_15714 = iParam1;
		StringCopy(&Global_15331, sParam0, 24);
		Global_14578 = 0;
		func_8();
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
		func_4();
	}
	return false;
}

void func_8()
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

void func_9()
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

bool func_10()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return true;
	}
	return false;
}

bool func_11()
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

void func_12()
{
	if (func_18(14))
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
		Global_14413 = func_13();
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

auto func_13()
{
	func_14();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_14()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_17(Global_101154.f_1826.f_539.f_3549) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_16(PLAYER::PLAYER_PED_ID());
			if (func_15(iVar0) && (!func_18(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_15(Global_101154.f_1826.f_539.f_3549))
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

int func_15(int iParam0)
{
	return iParam0 < 3;
}

int func_16(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_17(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_17(int iParam0)
{
	if (func_15(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_18(int iParam0)
{
	return Global_35711 == iParam0;
}

void func_19()
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

int func_20(int iParam0, int iParam1)
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

void func_21(auto uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

bool func_22()
{
	if (Global_15712 != 0 || is_scripted_conversation_ongoing())
	{
		return true;
	}
	return false;
}

float func_23(int iParam0, int iParam1)
{
	return func_24(get_player_ped(get_player_index()), iParam0, iParam1);
}

float func_24(int iParam0, int iParam1, int iParam2)
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

int func_25(float fParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!PED::IS_PED_INJURED(iLocal_1049[iVar0]))
		{
			if (func_26(iLocal_1049[iVar0], vLocal_1289, 1) < fParam0)
			{
				return iLocal_1049[iVar0];
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (!PED::IS_PED_INJURED(iLocal_1053[iVar0]))
		{
			if (func_26(iLocal_1053[iVar0], vLocal_1289, 1) < fParam0)
			{
				return iLocal_1053[iVar0];
			}
		}
		iVar0++;
	}
	return 0;
}

float func_26(int iParam0, Vector3 vParam1, int iParam2)
{
	if (is_entity_dead(iParam0, 0))
	{
		return -1f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, 1), vParam1, iParam4);
}

int func_27(auto uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_21(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_7(sParam2, iParam4, 0);
}

void func_28(int iParam0, int iParam1, char* sParam2)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		func_29(&uLocal_1363, iParam1, iParam0, sParam2, 0, 1);
	}
}

void func_29(auto uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

auto func_30(int iParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	auto uVar3;
	
	fVar2 = iParam0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!PED::IS_PED_INJURED(iLocal_1049[iVar0]))
		{
			if (iParam1 || (!iParam1 && !is_ped_in_any_vehicle(iLocal_1049[iVar0], 0)))
			{
				fVar1 = func_23(iLocal_1049[iVar0], 1);
				if (fVar1 < fVar2)
				{
					fVar2 = fVar1;
					uVar3 = iLocal_1049[iVar0];
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (!PED::IS_PED_INJURED(iLocal_1053[iVar0]))
		{
			if (iParam1 || (!iParam1 && !is_ped_in_any_vehicle(iLocal_1053[iVar0], 0)))
			{
				fVar1 = func_23(iLocal_1053[iVar0], 1);
				if (fVar1 < fVar2)
				{
					fVar2 = fVar1;
					uVar3 = iLocal_1053[iVar0];
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (!PED::IS_PED_INJURED(iLocal_1046[iVar0]))
		{
			if (iParam1 || (!iParam1 && !is_ped_in_any_vehicle(iLocal_1053[iVar0], 0)))
			{
				fVar1 = func_23(iLocal_1046[iVar0], 1);
				if (fVar1 < fVar2)
				{
					fVar2 = fVar1;
					uVar3 = iLocal_1046[iVar0];
				}
			}
		}
		iVar0++;
	}
	return uVar3;
}

void func_31(int iParam0)
{
	char* sVar0;
	
	if (iLocal_1142 == 0)
	{
		iLocal_1043 = iParam0;
		func_3();
		clear_prints();
		trigger_music_event("ASS1_FAIL");
		if (func_45())
		{
			func_43(-1698.51f, -1067.768f, 12.1417f, 316.3502f);
		}
		if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
		{
			Global_91278.f_12[0] = 1;
		}
		else
		{
			Global_91278.f_12[0] = 0;
		}
		switch (iLocal_1043)
		{
			case 0:
				sVar0 = "ASS_VA_FAILED";
				break;
			
			case 1:
				sVar0 = "ASS_VA_VEHICLE";
				break;
			
			case 2:
			case 5:
				sVar0 = "ASS_VA_COVER";
				break;
			
			case 8:
				sVar0 = "ASS_VA_COVER";
				break;
			
			case 3:
				sVar0 = "ASS_VA_WANTED";
				break;
			
			case 6:
				sVar0 = "ASS_VA_ESCAPED";
				break;
			
			case 7:
				sVar0 = "ASS_VA_ABAND";
				break;
			
			case 9:
				sVar0 = "ASS_VA_LATTACK";
				break;
		}
		iLocal_1142 = 1;
		func_41(sVar0);
		func_32(0);
	}
}

void func_32(int iParam0)
{
	int iVar0;
	
	if (Global_101154.f_7775 || func_40(0))
	{
		iVar0 = func_39();
		if (!func_33(iVar0))
		{
			return;
		}
		GAMEPLAY::SET_BIT(&(Global_82363[iVar0 /*5*/].f_1), 5);
		Global_91314 = iParam0;
	}
}

bool func_33(int iParam0)
{
	auto uVar0;
	int iVar1;
	
	func_38();
	if (is_player_playing(player_id()))
	{
		start_firing_amnesty(5000);
	}
	uVar0 = Global_82363[iParam0 /*5*/];
	iVar1 = Global_69758.f_109[uVar0 /*4*/];
	func_37(iVar1, 1);
	_0xC9A763D8FE87436A(player_id());
	special_ability_deactivate(player_id());
	func_34(&(Global_101154.f_1826.f_539), iVar1);
	if (Global_85786 == Global_91315)
	{
		Global_101154.f_7775.f_330[iVar1 /*6*/].f_1++;
	}
	if (!GAMEPLAY::IS_BIT_SET(Global_82399[iVar1 /*34*/].f_15, true))
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
	if (GAMEPLAY::IS_BIT_SET(Global_82363[iParam0 /*5*/].f_1, 4))
	{
		return false;
	}
	if (GAMEPLAY::IS_BIT_SET(Global_82363[iParam0 /*5*/].f_1, 5))
	{
		return false;
	}
	return true;
}

void func_34(auto uParam0, int iParam1)
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
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !GAMEPLAY::IS_BIT_SET(Global_101154.f_7775.f_99.f_219[0], 9))
		{
		}
		else
		{
			vVar2 = {0f, 0f, 0f};
			fVar5 = 0f;
			if (!func_36(Global_101154.f_17223[iVar0], &vVar2, &fVar5))
			{
				Global_101154.f_17223[iVar0] = 318;
				func_35(uParam0.f_1524[iVar0]);
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

void func_35(auto uParam0)
{
	*uParam0 = -15;
}

int func_36(int iParam0, auto uParam1, float fParam2)
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
			return func_36(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_36(8, uParam1, fParam2);
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

void func_37(int iParam0, int iParam1)
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

void func_38()
{
	Global_91313 = 1;
	if (is_player_being_arrested(player_id(), 1))
	{
		if (is_string_null_or_empty(&Global_69721))
		{
			switch (func_13())
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
			switch (func_13())
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
		GAMEPLAY::SET_BIT(&(Global_91278.f_20), 25);
	}
}

int func_39()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_82363[iVar0 /*5*/].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_40(int iParam0)
{
	if (!iParam0 && _get_number_of_instances_of_streamed_script(joaat("benchmark")) > 0)
	{
		return true;
	}
	return GAMEPLAY::IS_BIT_SET(Global_69737, false);
}

void func_41(char* sParam0)
{
	func_485(&(Global_101154.f_18653.f_1), 1024);
	if (!is_string_null(sParam0))
	{
		func_42(sParam0);
	}
}

void func_42(char* sParam0)
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

void func_43(Vector3 vParam0, float fParam1)
{
	if (func_44(Global_69729, 0f, 0f, 0f, 0))
	{
		Global_69729 = {vParam0};
		Global_69732 = fParam3;
	}
}

int func_44(Vector3 vParam0, Vector3 vParam1, int iParam2)
{
	if (iParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_45()
{
	if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (is_ped_in_any_heli(PLAYER::PLAYER_PED_ID()) || is_ped_in_any_plane(PLAYER::PLAYER_PED_ID()))
		{
			return true;
		}
	}
	return false;
}

float func_46(int iParam0)
{
	if (func_52(iParam0))
	{
		if (func_48(iParam0))
		{
			return *iParam0.f_2;
		}
		else
		{
			return func_47(GAMEPLAY::IS_BIT_SET(*iParam0, 4)) - *iParam0.f_1;
		}
	}
	return *iParam0.f_1;
}

float func_47(int iParam0)
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

int func_48(auto uParam0)
{
	return GAMEPLAY::IS_BIT_SET(*uParam0, 2);
}

void func_49(int iParam0)
{
	if (!func_52(iParam0))
	{
		func_50(iParam0);
	}
}

void func_50(int iParam0)
{
	func_51(iParam0, 0f);
}

void func_51(int iParam0, float fParam1)
{
	*iParam0.f_1 = func_47(GAMEPLAY::IS_BIT_SET(*iParam0, 4)) - fParam1;
	GAMEPLAY::SET_BIT(iParam0, true);
	GAMEPLAY::CLEAR_BIT(iParam0, 2);
	*iParam0.f_2 = 0f;
}

int func_52(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(*iParam0, true);
}

void func_53()
{
	if (func_54(&iLocal_1043))
	{
		func_31(6);
	}
}

bool func_54(int iParam0)
{
	float fVar0;
	int iVar1;
	
	if (iLocal_1030 > 11)
	{
		if (!PED::IS_PED_INJURED(iLocal_1045))
		{
			if (is_vehicle_driveable(iLocal_1311, 0))
			{
				if (is_ped_in_vehicle(iLocal_1045, iLocal_1311, 0))
				{
					iVar1 = true;
				}
			}
		}
		if (iLocal_1163)
		{
			fVar0 = 100f;
		}
		else
		{
			fVar0 = 200f;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1045))
		{
			if (!PED::IS_PED_INJURED(iLocal_1045))
			{
				if (func_24(iLocal_1044, iLocal_1045, 1) >= fVar0)
				{
					if (iVar1)
					{
						if (is_vehicle_driveable(iLocal_1311, 0))
						{
							if (is_entity_occluded(iLocal_1311) || !is_entity_on_screen(iLocal_1311))
							{
								*iParam0 = 6;
								return true;
							}
						}
					}
					else if (is_entity_occluded(iLocal_1045))
					{
						*iParam0 = 6;
						return true;
					}
				}
				else if (does_blip_exist(iLocal_1119))
				{
					if (func_24(iLocal_1044, iLocal_1045, 1) >= fVar0 * 0.5f)
					{
						if (!is_blip_flashing(iLocal_1119))
						{
							set_blip_flashes(iLocal_1119, 1);
						}
					}
					else if (is_blip_flashing(iLocal_1119))
					{
						set_blip_flashes(iLocal_1119, 0);
					}
				}
			}
		}
	}
	return false;
}

void func_55()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1045))
	{
		if (!PED::IS_PED_INJURED(iLocal_1045))
		{
			func_56(&uLocal_1528, iLocal_1045, 0, 0, 1, 1, 1);
		}
	}
}

void func_56(auto uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_57(uParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6);
}

void func_57(auto uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, auto uParam5, int iParam6)
{
	func_58(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, iParam4, uParam5, iParam6);
}

void func_58(auto uParam0, int iParam1, Vector3 vParam2, char* sParam3, int iParam4, int iParam5, auto uParam6, int iParam7)
{
	if (!is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1))
	{
		func_79(uParam0, 0, 0);
	}
	*uParam0.f_6 = 2;
	func_59(uParam0, iParam1, vParam2, sParam5, iParam6, iParam7, uParam8, iParam9);
}

void func_59(auto uParam0, int iParam1, Vector3 vParam2, char* sParam3, int iParam4, int iParam5, auto uParam6, int iParam7)
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
	if (func_78(iVar0))
	{
		func_77();
	}
	if (func_76(iParam1) && is_entity_visible(iParam1))
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
			if (func_71(uParam0, iParam7, iParam9, 0))
			{
				func_68(uParam0, iParam1, vParam2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (*uParam0.f_6 == 2)
			{
				if (func_64(iVar0))
				{
					if ((is_string_null(*uParam0.f_3) && !is_string_null(iVar0)) && is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
					{
						if ((iVar1 && !is_help_message_being_displayed()) && uParam8)
						{
							if (!func_78(iVar0))
							{
								func_63(iVar0, -1);
								*uParam0.f_3 = iVar0;
								if (are_strings_equal("CMN_HINT", iVar0))
								{
									func_62(1);
								}
							}
						}
					}
				}
			}
			else if (func_64(iVar0))
			{
				if (is_string_null(*uParam0.f_3) && !is_string_null(iVar0))
				{
					if (((is_entity_on_screen(iParam1) && iVar1) && !is_help_message_being_displayed()) && uParam8)
					{
						if (!func_78(iVar0))
						{
							func_63(iVar0, -1);
							*uParam0.f_3 = iVar0;
							if (are_strings_equal("CMN_HINT", iVar0))
							{
								func_62(1);
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
				if (func_78(sParam5))
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
						func_79(uParam0, iVar0, 1);
					}
				}
				else if (is_ped_in_any_heli(PLAYER::PLAYER_PED_ID()))
				{
					if (_0xEE778F8C7E1142E2(6) == 3 || _0xEE778F8C7E1142E2(6) == 4)
					{
						func_79(uParam0, iVar0, 1);
					}
				}
				else if (is_ped_in_any_plane(PLAYER::PLAYER_PED_ID()))
				{
					if (_0xEE778F8C7E1142E2(4) == 3 || _0xEE778F8C7E1142E2(4) == 4)
					{
						func_79(uParam0, iVar0, 1);
					}
				}
				else if (is_ped_in_any_sub(PLAYER::PLAYER_PED_ID()))
				{
					if (_0xEE778F8C7E1142E2(5) == 3 || _0xEE778F8C7E1142E2(5) == 4)
					{
						func_79(uParam0, iVar0, 1);
					}
				}
				else if (is_ped_on_any_bike(PLAYER::PLAYER_PED_ID()))
				{
					if (_0xEE778F8C7E1142E2(2) == 3 || _0xEE778F8C7E1142E2(2) == 4)
					{
						func_79(uParam0, iVar0, 1);
					}
				}
				else if (get_follow_vehicle_cam_view_mode() == 3 || get_follow_vehicle_cam_view_mode() == 4)
				{
					func_79(uParam0, iVar0, 1);
				}
			}
			if (!func_71(uParam0, iParam7, iParam9, 0))
			{
				if ((!*uParam0 && !*uParam0.f_1) && !func_61(uParam0))
				{
					func_60(uParam0);
				}
			}
		}
	}
	else
	{
		func_79(uParam0, iVar0, 0);
	}
}

void func_60(auto uParam0)
{
	if (func_76(PLAYER::PLAYER_PED_ID()))
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

bool func_61(auto uParam0)
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

int func_62(int iParam0)
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

void func_63(char* sParam0, int iParam1)
{
	_set_text_component_format(sParam0);
	_display_help_text_from_string_label(0, 0, true, iParam1);
}

bool func_64(char* sParam0)
{
	if (!func_65(1, 1, 0))
	{
		if ((!is_string_null_or_empty(sParam0) && func_78(sParam0)) || func_78("CMN_HINT"))
		{
			clear_help(1);
		}
		return false;
	}
	switch (Global_35711)
	{
		case 0:
		case 3:
			if (func_62(0) < 3)
			{
				return true;
			}
			break;
		
		case 4:
			if (func_62(0) < 1)
			{
				return true;
			}
			break;
		
		case 5:
		case 15:
			if (func_62(0) < 1)
			{
				return true;
			}
			break;
		
		default:
			break;
	}
	return false;
}

bool func_65(int iParam0, int iParam1, int iParam2)
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
	if (func_67(0))
	{
		return false;
	}
	if (func_66())
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

int func_66()
{
	return GAMEPLAY::GET_GAME_TIMER() <= Global_17257.f_5745 + 100;
}

bool func_67(int iParam0)
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

void func_68(auto uParam0, int iParam1, Vector3 vParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (is_entity_dead(iParam1, 0))
	{
		func_79(uParam0, 0, 0);
	}
	if (func_44(vParam2, 0f, 0f, 0f, 0))
	{
		if (is_entity_a_ped(iParam1))
		{
			iVar0 = get_ped_index_from_entity_index(iParam1);
			if (!is_ped_in_any_vehicle(iVar0, 0))
			{
				if (is_ped_a_player(iVar0))
				{
					if (!func_69())
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

int func_69()
{
	return func_70(player_id());
}

bool func_70(int iParam0)
{
	if (ENTITY::GET_ENTITY_MODEL(get_player_ped(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return true;
	}
	return false;
}

bool func_71(auto uParam0, int iParam1, int iParam2, int iParam3)
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
					if (func_75(iParam1, iParam2, iParam3))
					{
						*uParam0.f_4 = GAMEPLAY::GET_GAME_TIMER();
						*uParam0.f_5 = 1;
						*uParam0.f_7 = 1;
					}
				}
				else if (func_74(iParam1, iParam2, iParam3))
				{
					*uParam0.f_4 = GAMEPLAY::GET_GAME_TIMER();
					*uParam0.f_5 = 1;
					*uParam0.f_7 = 1;
				}
			}
			else if (*uParam0.f_6 == 1)
			{
				if (func_74(iParam1, iParam2, iParam3))
				{
					*uParam0.f_4 = GAMEPLAY::GET_GAME_TIMER();
					*uParam0.f_5 = 1;
					*uParam0.f_7 = 1;
				}
			}
			else if (*uParam0.f_6 == 2)
			{
				if (func_75(iParam1, iParam2, iParam3))
				{
					*uParam0.f_4 = GAMEPLAY::GET_GAME_TIMER();
					*uParam0.f_5 = 1;
					*uParam0.f_7 = 1;
				}
			}
			if (func_61(uParam0))
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
						if (!func_75(iParam1, iParam2, iParam3))
						{
							*uParam0.f_4 = GAMEPLAY::GET_GAME_TIMER();
							*uParam0.f_5 = 3;
						}
					}
					else if (!func_74(iParam1, iParam2, iParam3))
					{
						*uParam0.f_4 = GAMEPLAY::GET_GAME_TIMER();
						*uParam0.f_5 = 3;
					}
				}
				else if (*uParam0.f_6 == 1)
				{
					if (!func_74(iParam1, iParam2, iParam3))
					{
						*uParam0.f_4 = GAMEPLAY::GET_GAME_TIMER();
						*uParam0.f_5 = 3;
					}
				}
				else if (*uParam0.f_6 == 2)
				{
					if (!func_75(iParam1, iParam2, iParam3))
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
					if (!func_75(iParam1, iParam2, iParam3))
					{
						*uParam0.f_5 = 0;
					}
				}
				else if (!func_74(iParam1, iParam2, iParam3))
				{
					*uParam0.f_5 = 0;
				}
			}
			else if (*uParam0.f_6 == 1)
			{
				if (!func_74(iParam1, iParam2, iParam3) || is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1))
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
				else if (!func_75(iParam1, iParam2, iParam3))
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
						if (func_73(iParam1, iParam2, iParam3))
						{
							*uParam0.f_5 = 0;
						}
					}
					else if (func_72(iParam1, iParam2, iParam3))
					{
						*uParam0.f_5 = 0;
					}
				}
				else if (*uParam0.f_6 == 1)
				{
					if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1) || func_72(iParam1, iParam2, iParam3))
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
					else if (func_73(iParam1, iParam2, iParam3))
					{
						*uParam0.f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_61(uParam0))
			{
				*uParam0.f_5 = 0;
			}
			break;
	}
	if (!func_65(iParam1, iParam2, iParam3))
	{
		*uParam0.f_5 = 0;
		*uParam0.f_7 = 0;
	}
	if (*uParam0.f_7)
	{
		func_77();
		return true;
	}
	else
	{
		return false;
	}
	return false;
}

bool func_72(int iParam0, int iParam1, int iParam2)
{
	if (!func_65(iParam0, iParam1, iParam2))
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

bool func_73(int iParam0, int iParam1, int iParam2)
{
	if (!func_65(iParam0, iParam1, iParam2))
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

bool func_74(int iParam0, int iParam1, int iParam2)
{
	if (!func_65(iParam0, iParam1, iParam2))
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

bool func_75(int iParam0, int iParam1, int iParam2)
{
	if (!func_65(iParam0, iParam1, iParam2))
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

bool func_76(int iParam0)
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

void func_77()
{
	GAMEPLAY::SET_BIT(&Global_2284, 4);
}

int func_78(char* sParam0)
{
	_0x0A24DA3A41B718F5(sParam0);
	return _0x10BDDBFC529428DD(0);
}

void func_79(auto uParam0, int iParam1, int iParam2)
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
		if (func_78(*uParam0.f_3))
		{
			clear_help(1);
		}
	}
	if (!is_string_null(sVar0))
	{
		if (func_78(sVar0))
		{
			clear_help(1);
		}
	}
}

void func_80(auto uParam0, float fParam1, int iParam2, int iParam3)
{
	float fVar0;
	
	if (!*iParam2)
	{
		*uParam0 = GAMEPLAY::GET_GAME_TIMER();
		*fParam1 /= 1000f;
		if (!func_52(&iLocal_1350))
		{
			func_49(&iLocal_1350);
		}
		*iParam2 = 1;
	}
	if (func_52(&iLocal_1350))
	{
		fVar0 = func_46(&iLocal_1350);
		if (fVar0 >= *fParam1)
		{
			*iParam3 = 1;
		}
	}
	iLocal_1212 = round(*fParam1 - fVar0);
	iLocal_1212 *= 1000;
	if (iLocal_1212 < 63000)
	{
		iLocal_1146 = 1;
	}
	if (iLocal_1212 < 65000)
	{
		iLocal_1153 = 1;
	}
	if (iLocal_1212 < iLocal_1209)
	{
		iLocal_1176 = 1;
	}
	if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\ASSASSINATION_MULTI", false))
	{
		iLocal_1362 = false;
	}
	else
	{
		iLocal_1362 = true;
	}
	if (iLocal_1212 < 30000)
	{
		iLocal_1167 = 1;
		if (iLocal_1362)
		{
			if (func_52(&iLocal_1359))
			{
				if (func_46(&iLocal_1359) > 1f)
				{
					play_sound_frontend(-1, "ASSASSINATIONS_HOTEL_TIMER_COUNTDOWN", "ASSASSINATION_MULTI", 1);
					func_50(&iLocal_1359);
				}
			}
			else
			{
				play_sound_frontend(-1, "ASSASSINATIONS_HOTEL_TIMER_COUNTDOWN", "ASSASSINATION_MULTI", 1);
				func_49(&iLocal_1359);
			}
		}
		func_81(iLocal_1212, "ASS_VA_TIMERED", 0, 0, -1, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		func_81(iLocal_1212, "ASS_VA_TIMELEFT", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0);
	}
}

void func_81(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = false;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_83(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1339940.f_1 = 1;
		func_82(7, iVar0);
		Global_1339940.f_4109[iVar0] = iParam0;
		StringCopy(&(Global_1339940.f_4109.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1339940.f_4109.f_172[iVar0] = iParam2;
		Global_1339940.f_4109.f_216[iVar0] = iParam3;
		Global_1339940.f_4109.f_183[iVar0] = iParam4;
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

void func_82(int iParam0, int iParam1)
{
	GAMEPLAY::SET_BIT(&(Global_1339940.f_4726[iParam0]), iParam1);
}

int func_83(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_1339940.f_4726[iParam0], iParam1);
}

void func_84()
{
	int iVar0;
	
	switch (iLocal_1206)
	{
		case 0:
			if (!func_22())
			{
				if (!is_entity_dead(iLocal_1049[0], 0))
				{
					task_clear_look_at(iLocal_1049[0]);
				}
				if (!is_entity_dead(iLocal_1049[1], 0))
				{
					task_clear_look_at(iLocal_1049[1]);
				}
				iVar0 = func_88();
				if (iLocal_1156)
				{
					if (!iLocal_1172)
					{
						func_28(iVar0, 3, "OJAvaGUARD");
						if (func_6(&uLocal_1363, "OJASAUD", "OJASva_EXPLO", 9, 0, 0, 0))
						{
							iLocal_1172 = 1;
						}
					}
				}
				else if (!iLocal_1163 && PED::IS_PED_INJURED(iLocal_1045))
				{
					if (!iLocal_1172)
					{
						func_28(iVar0, 3, "OJAvaGUARD");
						if (func_6(&uLocal_1363, "OJASAUD", "OJASva_SNIPE", 9, 0, 0, 0))
						{
							iLocal_1172 = 1;
						}
					}
				}
				if (!func_52(&iLocal_1338))
				{
					func_49(&iLocal_1338);
				}
				else
				{
					func_50(&iLocal_1338);
				}
				iLocal_1206 = 1;
			}
			break;
		
		case 1:
			iLocal_1206 = 2;
			break;
		
		case 2:
			if (iLocal_1172 || !PED::IS_PED_INJURED(iLocal_1045))
			{
				if (!func_22() && !iLocal_1156)
				{
					if (!iLocal_1170)
					{
						iVar0 = func_88();
						func_28(iVar0, 3, "OJAvaGUARD");
						if (func_6(&uLocal_1363, "OJASAUD", "OJASva_LOOK", 9, 0, 0, 0))
						{
							iLocal_1170 = 1;
						}
					}
					else if (!iLocal_1180 && PED::IS_PED_INJURED(iLocal_1045))
					{
						iVar0 = func_88();
						func_87(iVar0);
					}
				}
			}
			else if (iLocal_1156)
			{
				if (!iLocal_1172)
				{
					func_28(iVar0, 3, "OJAvaGUARD");
					if (func_6(&uLocal_1363, "OJASAUD", "OJASva_EXPLO", 9, 0, 0, 0))
					{
						iLocal_1172 = 1;
					}
				}
			}
			else if (!iLocal_1163)
			{
				if (!iLocal_1172)
				{
					func_28(iVar0, 3, "OJAvaGUARD");
					if (func_6(&uLocal_1363, "OJASAUD", "OJASva_SNIPE", 9, 0, 0, 0))
					{
						iLocal_1172 = 1;
					}
				}
			}
			if (func_86(iLocal_1044))
			{
				fLocal_1243 = 2.5f;
			}
			else
			{
				fLocal_1243 = 5f;
			}
			if (func_52(&iLocal_1338))
			{
				if ((func_46(&iLocal_1338) > fLocal_1243 && func_85()) || is_ped_shooting(PLAYER::PLAYER_PED_ID()))
				{
					func_3();
					if (!iLocal_1133)
					{
						iLocal_1133 = 1;
						iLocal_1177 = 1;
					}
					iLocal_1157 = 0;
				}
			}
			break;
		
		case 3:
			break;
	}
}

bool func_85()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1049[iVar0]) && !is_entity_dead(iLocal_1049[iVar0], 0))
		{
			set_ped_reset_flag(iLocal_1049[iVar0], 85, true);
			if (_0x6CD5A433374D4CFB(iLocal_1049[iVar0], PLAYER::PLAYER_PED_ID()))
			{
				return true;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1053[iVar0]) && !is_entity_dead(iLocal_1053[iVar0], 0))
		{
			set_ped_reset_flag(iLocal_1053[iVar0], 85, true);
			if (_0x6CD5A433374D4CFB(iLocal_1053[iVar0], PLAYER::PLAYER_PED_ID()))
			{
				return true;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1046[iVar0]) && !is_entity_dead(iLocal_1046[iVar0], 0))
		{
			set_ped_reset_flag(iLocal_1046[iVar0], 85, true);
			if (_0x6CD5A433374D4CFB(iLocal_1046[iVar0], PLAYER::PLAYER_PED_ID()))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_86(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!is_entity_in_angled_area(iParam0, -1252.302f, -213.9033f, 35.11222f, -1205.808f, -183.0681f, 45.32541f, 51f, 0, true, 0) && !is_entity_in_angled_area(iParam0, -1250.809f, -192.5218f, 35.33125f, -1231.866f, -161.3655f, 45.02535f, 12.8f, 0, true, 0))
		{
			return true;
		}
	}
	return false;
}

void func_87(int iParam0)
{
	if (!iLocal_1180)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1045) && PED::IS_PED_INJURED(iLocal_1045))
		{
			if (!func_22())
			{
				if ((ENTITY::DOES_ENTITY_EXIST(iParam0) && !PED::IS_PED_INJURED(iParam0)) && func_23(iParam0, 1) < 75f)
				{
					func_28(iParam0, 3, "OJAvaGUARD");
					func_6(&uLocal_1363, "OJASAUD", "OJAS_FEED", 9, 0, 0, 0);
					iLocal_1180 = true;
				}
			}
		}
	}
}

int func_88()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1049[iVar1]) && !PED::IS_PED_INJURED(iLocal_1049[iVar1]))
		{
			iVar0 = iLocal_1049[iVar1];
		}
		iVar1++;
	}
	if (iVar0 == 0)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_1053[iVar1]) && !PED::IS_PED_INJURED(iLocal_1053[iVar1]))
			{
				iVar0 = iLocal_1053[iVar1];
			}
			iVar1++;
		}
	}
	if (iVar0 == 0)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_1046[iVar1]) && !PED::IS_PED_INJURED(iLocal_1046[iVar1]))
			{
				iVar0 = iLocal_1046[iVar1];
			}
			iVar1++;
		}
	}
	return iVar0;
}

void func_89()
{
	func_96();
	if (!iLocal_1157)
	{
		if (!iLocal_1133)
		{
			if (func_90(&iLocal_1043))
			{
				iLocal_1133 = 1;
			}
		}
	}
}

bool func_90(int iParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	if (!iLocal_1133)
	{
		if (iLocal_1167 && !iLocal_1136)
		{
			if (func_95(&iLocal_1043))
			{
				*iParam0 = 8;
				return true;
			}
		}
		if (is_ped_armed(iLocal_1044, 4))
		{
			if (is_ped_shooting(iLocal_1044))
			{
				fVar1 = func_26(PLAYER::PLAYER_PED_ID(), -1230.599f, -196.5408f, 38.1528f, 1);
				get_current_ped_weapon(iLocal_1044, &iVar2, 1);
				if ((((fVar1 > 15f && iVar2 == joaat("weapon_sniperrifle")) || iVar2 == joaat("weapon_heavysniper")) || iVar2 == joaat("weapon_remotesniper")) || iVar2 == joaat("weapon_marksmanrifle"))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_1045))
					{
						iLocal_1157 = 1;
						iLocal_1155 = 1;
					}
				}
				else if (fVar1 < 50f)
				{
					return true;
				}
			}
		}
		if ((func_94(iLocal_1311) || func_93(iLocal_1311)) || (ENTITY::DOES_ENTITY_EXIST(iLocal_1311) && has_entity_been_damaged_by_entity(iLocal_1311, iLocal_1044, 1)))
		{
			return true;
		}
		if (func_94(iLocal_1312) || (ENTITY::DOES_ENTITY_EXIST(iLocal_1312) && has_entity_been_damaged_by_entity(iLocal_1312, iLocal_1044, 1)))
		{
			return true;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1311) && !is_entity_dead(iLocal_1311, 0))
		{
			if (is_ped_in_vehicle(iLocal_1044, iLocal_1311, 0))
			{
				set_vehicle_alarm(iLocal_1311, 1);
				start_vehicle_alarm(iLocal_1311);
				return true;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1311))
		{
			if (is_vehicle_driveable(iLocal_1311, 0))
			{
				if (is_ped_in_any_vehicle(iLocal_1044, 0))
				{
					iVar0 = get_vehicle_ped_is_in(iLocal_1044, 0);
					if (is_entity_touching_entity(iVar0, iLocal_1311) || (iLocal_1143 && is_vehicle_attached_to_tow_truck(iVar0, iLocal_1311)))
					{
						*iParam0 = 4;
						return true;
					}
				}
			}
		}
		if (iLocal_1030 == 12)
		{
			if (is_vehicle_driveable(iLocal_1311, 0))
			{
				if (func_24(iLocal_1044, iLocal_1311, 1) <= 15f)
				{
					return true;
				}
			}
		}
		if ((iLocal_1032[0] == 2 || iLocal_1032[1] == 2) || iLocal_1032[2] == 2)
		{
			if (func_92())
			{
				return true;
			}
		}
		if (iLocal_1030 < 11)
		{
			if (is_explosion_in_sphere(-1, vLocal_1307, fLocal_1310))
			{
				return true;
			}
		}
		else if (is_explosion_in_sphere(-1, vLocal_1307, fLocal_1310))
		{
			if (func_91())
			{
				iLocal_1187 = 1;
			}
			else
			{
				return true;
			}
		}
	}
	return false;
}

bool func_91()
{
	if (is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), -1272.181f, -241.2545f, 62.90406f, -1300.203f, -201.3968f, 40.40408f, 44.5f, 0, false, 0) || is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), -1270.125f, -253.9321f, 62.90407f, -1311.414f, -193.6588f, 38.23291f, 44.5f, 0, false, 0))
	{
		return true;
	}
	return false;
}

bool func_92()
{
	int iVar0;
	
	if (get_current_ped_weapon(PLAYER::PLAYER_PED_ID(), &iVar0, 1))
	{
		if (iVar0 == joaat("weapon_stickybomb"))
		{
			if (is_player_free_aiming(player_id()))
			{
				if ((is_ped_on_foot(PLAYER::PLAYER_PED_ID()) && is_control_pressed(0, 24)) || (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0) && is_control_pressed(0, 69)))
				{
					return true;
				}
			}
		}
	}
	return false;
}

bool func_93(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (is_vehicle_driveable(iParam0, 0))
		{
			if (get_vehicle_door_lock_status(iParam0) == 3 && set_exclusive_phone_relationships(iLocal_1044) == iParam0)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_94(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (is_vehicle_driveable(iParam0, 0))
		{
			if (get_ped_in_vehicle_seat(iParam0, -1) != 0)
			{
				if (get_current_ped_weapon(PLAYER::PLAYER_PED_ID(), &iVar0, 1))
				{
					if (iVar0 == joaat("weapon_stickybomb"))
					{
						if (func_24(PLAYER::PLAYER_PED_ID(), iParam0, 1) < 40f)
						{
							if (get_entity_player_is_free_aiming_at(player_id(), &iVar1))
							{
								if ((is_entity_a_vehicle(iVar1) && get_vehicle_index_from_entity_index(iVar1) == iParam0) || (is_entity_a_ped(iVar1) && get_ped_index_from_entity_index(iVar1) == get_ped_in_vehicle_seat(iParam0, -1)))
								{
									if ((is_ped_on_foot(PLAYER::PLAYER_PED_ID()) && is_control_pressed(0, 24)) || (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0) && is_control_pressed(0, 69)))
									{
										return true;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_95(int iParam0)
{
	if (is_vehicle_driveable(iLocal_1311, 0))
	{
		if (has_vehicle_got_projectile_attached(PLAYER::PLAYER_PED_ID(), iLocal_1311, joaat("weapon_stickybomb"), -1))
		{
			if (is_projectile_type_in_angled_area(-1223.024f, -187.3076f, 39.02538f, -1220.311f, -186.2481f, 40.42538f, 6.5f, joaat("weapon_stickybomb"), 0) || is_projectile_type_in_angled_area(-1223.024f, -187.3076f, 38.02538f, -1220.311f, -186.2481f, 40.42538f, 4.5f, joaat("weapon_stickybomb"), 0))
			{
				*iParam0 = 8;
				return true;
			}
		}
	}
	return false;
}

void func_96()
{
	int iVar0;
	
	func_137();
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1049[iVar0]))
		{
			if (iLocal_1133 && !iLocal_1166)
			{
				func_136(iLocal_1049[iVar0], &(Local_1059[iVar0 /*8*/]), -1, 0, 0, 0, 150f, 0, -1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1053[iVar0]))
		{
			if (iLocal_1133 && !iLocal_1166)
			{
				func_136(iLocal_1053[iVar0], &(Local_1084[iVar0 /*8*/]), -1, 0, 0, 0, 150f, 0, -1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1046[iVar0]))
		{
			if (iLocal_1133 && !iLocal_1166)
			{
				func_136(iLocal_1046[iVar0], &(Local_1101[iVar0 /*8*/]), -1, 0, 0, 0, 150f, 0, -1);
			}
			if (!PED::IS_PED_INJURED(iLocal_1046[iVar0]))
			{
				if (iLocal_1040[iVar0] == 4)
				{
					set_ped_reset_flag(iLocal_1046[iVar0], 128, true);
				}
			}
		}
		iVar0++;
	}
	if (iLocal_1203 == 0)
	{
		func_134(0);
	}
	else if (iLocal_1203 == 1)
	{
		func_134(1);
	}
	else if (iLocal_1203 == 2)
	{
		if (iLocal_1030 >= 9)
		{
			func_123(0);
		}
	}
	else if (iLocal_1203 == 3)
	{
		if (iLocal_1030 >= 9)
		{
			func_123(1);
		}
	}
	else if (iLocal_1203 == 4)
	{
		if (iLocal_1030 >= 9)
		{
			func_123(2);
			func_122(-1222.558f, -173.7471f, 38.32541f, -1220.101f, -169.0531f, 42.07541f, 4f);
		}
	}
	else if (iLocal_1203 == 5)
	{
		func_97(0);
		func_122(-1213.432f, -191.3261f, 38.32541f, -1208.553f, -193.8618f, 42.07534f, 4f);
	}
	else if (iLocal_1203 == 6)
	{
		func_97(1);
		func_122(-1219.14f, -202.3124f, 38.32534f, -1214.269f, -204.9035f, 42.07534f, 4f);
	}
	iLocal_1203++;
	if (iLocal_1203 > 6)
	{
		iLocal_1203 = 0;
	}
	if (iLocal_1133)
	{
		if (!is_entity_dead(iLocal_1045, 0))
		{
			set_ped_reset_flag(iLocal_1045, 120, true);
		}
	}
}

void func_97(int iParam0)
{
	int iVar0;
	Vector3 vVar1;
	Vector3 fVar4;
	int iVar5;
	
	iVar0 = iLocal_1053[iParam0];
	switch (iLocal_1036[iParam0])
	{
		case 0:
			if (iLocal_1146)
			{
				iLocal_1036[iParam0] = 1;
			}
			else if (iLocal_1144)
			{
				iLocal_1036[iParam0] = 3;
			}
			break;
		
		case 1:
			if (is_vehicle_driveable(iLocal_1312, 0))
			{
				if (func_121())
				{
					if (!is_waypoint_playback_going_on_for_vehicle(iLocal_1312))
					{
						if (get_ped_in_vehicle_seat(iLocal_1312, -1) == iLocal_1053[iParam0])
						{
							task_vehicle_follow_waypoint_recording(iLocal_1053[iParam0], iLocal_1312, "OJASva_104", 948, 0, 16, 18, 6f, 0, 2f);
						}
					}
					iLocal_1036[iParam0] = 2;
				}
				else
				{
					func_120(iParam0);
				}
			}
			break;
		
		case 2:
			if (is_vehicle_driveable(iLocal_1312, 0))
			{
				if (!is_waypoint_playback_going_on_for_vehicle(iLocal_1312))
				{
					vVar1 = {get_entity_coords(iLocal_1312, 1)};
					fVar4 = get_entity_heading(iLocal_1312);
					iLocal_1146 = 0;
					iLocal_1036[iParam0] = 0;
				}
			}
			break;
		
		case 3:
			if (is_vehicle_driveable(iLocal_1312, 0))
			{
				if (!is_entity_dead(iLocal_1053[iParam0], 0))
				{
					if (is_ped_in_vehicle(iLocal_1053[iParam0], iLocal_1312, 0) && is_vehicle_driveable(iLocal_1311, 0))
					{
						if (!iLocal_1133)
						{
							if (get_ped_in_vehicle_seat(iLocal_1312, -1) == iLocal_1053[iParam0])
							{
								if (get_script_task_status(iLocal_1053[iParam0], -1273030092) != 1)
								{
									task_vehicle_escort(iLocal_1053[iParam0], iLocal_1312, iLocal_1311, -1, 45f, 786981, 10f, -1, 10f);
								}
							}
						}
						else if (get_ped_in_vehicle_seat(iLocal_1312, -1) == iLocal_1053[iParam0])
						{
							if (!iLocal_1147)
							{
								if (is_entity_dead(iLocal_1045, 0))
								{
									if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
									{
										task_combat_ped(iVar0, PLAYER::PLAYER_PED_ID(), 0, 16);
									}
									else
									{
										iLocal_1036[iParam0] = 8;
									}
								}
								else
								{
									task_vehicle_escort(iLocal_1053[iParam0], iLocal_1312, iLocal_1311, -1, 45f, 786981, 10f, -1, 10f);
									add_vehicle_subtask_attack_ped(iVar0, PLAYER::PLAYER_PED_ID());
									iLocal_1147 = 1;
								}
							}
						}
						else if (!iLocal_1163)
						{
							if (get_script_task_status(iLocal_1053[iParam0], 780511057) != 1)
							{
								if (!is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
								{
									if (get_entity_speed(iLocal_1312) < 5f)
									{
										iLocal_1036[iParam0] = 8;
									}
								}
								task_combat_ped(iVar0, PLAYER::PLAYER_PED_ID(), 0, 16);
							}
						}
						else if (get_script_task_status(iLocal_1053[iParam0], 780511057) != 1)
						{
							task_combat_ped(iVar0, PLAYER::PLAYER_PED_ID(), 0, 16);
						}
					}
					else if (!iLocal_1157)
					{
						iLocal_1036[iParam0] = 8;
					}
				}
			}
			break;
		
		case 4:
			if (!func_52(&iLocal_1332))
			{
				func_50(&iLocal_1332);
			}
			func_117(&(iLocal_1053[iParam0]));
			iLocal_1036[iParam0] = 5;
			break;
		
		case 5:
			if (!func_86(iLocal_1044))
			{
				if (func_46(&iLocal_1332) >= 27f || is_player_wanted_level_greater(player_id(), 0))
				{
					if (!PED::IS_PED_INJURED(iVar0))
					{
						if (is_entity_at_entity(iLocal_1044, iVar0, 5f, 5f, 3f, 0, 1, 0))
						{
							func_116(iVar0, 5f, 5f, 3f);
						}
						else
						{
							func_120(iParam0);
						}
					}
				}
			}
			else
			{
				iLocal_1036[iParam0] = 0;
			}
			break;
		
		case 6:
			if (iLocal_1158)
			{
				open_sequence_task(&iLocal_1323);
				task_leave_any_vehicle(false, 0, 0);
				task_look_at_coord(false, func_115(), get_random_int_in_range(1000, 1500), 2048, 4);
				task_look_at_coord(false, func_115(), get_random_int_in_range(2000, 2500), 2048, 4);
				task_go_to_entity(false, PLAYER::PLAYER_PED_ID(), get_random_int_in_range(10000, 11000), 30f, 1f, 2f, 0);
				task_go_to_entity_while_aiming_at_coord(0, PLAYER::PLAYER_PED_ID(), func_115(), 1f, 0, 1056964608, 1082130432, 1, 0, -957453492);
				close_sequence_task(iLocal_1323);
				if (!PED::IS_PED_INJURED(iLocal_1053[iParam0]))
				{
					task_perform_sequence(iLocal_1053[iParam0], iLocal_1323);
				}
				clear_sequence_task(&iLocal_1323);
			}
			else
			{
				open_sequence_task(&iLocal_1323);
				task_leave_any_vehicle(false, 0, 0);
				task_aim_gun_at_coord(false, func_115(), get_random_int_in_range(3000, 3500), 1, 0);
				task_aim_gun_at_coord(false, func_115(), get_random_int_in_range(3000, 3500), 0, 0);
				task_aim_gun_at_coord(false, func_115(), get_random_int_in_range(3000, 3500), 0, 0);
				task_aim_gun_at_coord(false, func_115(), get_random_int_in_range(3000, 3500), 0, 0);
				task_aim_gun_at_coord(false, func_115(), -1, 0, 0);
				close_sequence_task(iLocal_1323);
				if (!PED::IS_PED_INJURED(iLocal_1053[iParam0]))
				{
					task_perform_sequence(iLocal_1053[iParam0], iLocal_1323);
				}
				clear_sequence_task(&iLocal_1323);
			}
			iLocal_1036[iParam0] = 7;
			break;
		
		case 7:
			if (!PED::IS_PED_INJURED(iLocal_1053[iParam0]))
			{
				if (get_script_task_status(iLocal_1053[iParam0], 1435919172) != 1)
				{
					task_go_to_entity_while_aiming_at_entity(iLocal_1053[iParam0], iLocal_1044, iLocal_1044, 1f, 0, -1f, 4f, 1, 0, -957453492);
				}
			}
			break;
		
		case 8:
			if (iLocal_1043 != 4 && iLocal_1043 != 5)
			{
				func_114(iVar0);
			}
			else
			{
				func_113(iVar0);
			}
			iLocal_1036[iParam0] = 9;
			break;
		
		case 9:
			if (iParam0 == 0)
			{
				if (iLocal_1043 != 4)
				{
					func_112(iLocal_1312, iVar0, 1112014848, 1112014848, 1092616192);
				}
			}
			func_2(iVar0);
			func_87(iVar0);
			break;
	}
	if (!iLocal_1133)
	{
		if (iLocal_1157)
		{
			if (iLocal_1036[iParam0] != 6 && iLocal_1036[iParam0] != 7)
			{
				iLocal_1036[iParam0] = 6;
			}
		}
		else if (func_105(iVar0, iLocal_1312, &Local_360, &iLocal_371, 0, 0, 0, 1, 1) || func_104(iLocal_1312))
		{
			iVar5 = func_30(1116471296, 1);
			if (iVar5 != 0)
			{
				func_103(get_entity_coords(iVar5, 1), 1097859072, 1116471296);
			}
			if (!func_102())
			{
				iLocal_1133 = 1;
			}
		}
		else if (!iLocal_1136)
		{
			if (func_101(iVar0, 10f))
			{
				if (iLocal_1036[iParam0] != 4 && iLocal_1036[iParam0] != 5)
				{
					if (!iLocal_1134)
					{
						func_99(&Local_360, 4);
						iLocal_1036[iParam0] = 4;
					}
					else if (!func_86(iLocal_1044))
					{
						iLocal_1133 = 1;
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1045))
						{
							iLocal_1043 = 5;
						}
						iLocal_1036[iParam0] = 8;
					}
				}
			}
		}
	}
	else if (!PED::IS_PED_INJURED(iVar0))
	{
		if (is_ped_in_vehicle(iVar0, iLocal_1312, 0))
		{
			if (((!is_vehicle_driveable(iLocal_1312, 0) || !is_vehicle_driveable(iLocal_1311, 0)) || iLocal_1145) || !iLocal_1136)
			{
				if (iLocal_1036[iParam0] < 8)
				{
					iLocal_1036[iParam0] = 8;
				}
			}
		}
		else if (iLocal_1036[iParam0] < 8)
		{
			iLocal_1036[iParam0] = 8;
		}
	}
	func_98(iVar0, uLocal_1124[iParam0]);
}

void func_98(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (PED::IS_PED_INJURED(iParam0))
		{
			if (does_blip_exist(iParam1))
			{
				remove_blip(&iParam1);
			}
		}
	}
}

void func_99(auto uParam0, int iParam1)
{
	func_100(uParam0, iParam1);
}

void func_100(auto uParam0, auto uParam1)
{
	*uParam0 -= (*uParam0 && uParam1);
}

bool func_101(int iParam0, float fParam1)
{
	if (!iLocal_1133)
	{
		if (!func_86(iLocal_1044))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iParam0))
			{
				if (!PED::IS_PED_INJURED(iParam0))
				{
					if (func_23(iParam0, 0) <= fParam1)
					{
						if (is_ped_facing_ped(iParam0, iLocal_1044, 120f))
						{
							if (has_entity_clear_los_to_entity(iParam0, iLocal_1044, 17))
							{
								if (!is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), -1251.791f, -147.043f, 42.679f, -1197.245f, -212.232f, 50.679f, 35f, 1, true, 0) && !is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), -1259.282f, -204.172f, -60.654f, -1304.335f, -235.719f, 60.654f, 85f, 1, true, 0))
								{
									return true;
								}
							}
						}
					}
				}
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (!PED::IS_PED_INJURED(iParam0))
			{
				if (is_entity_at_entity(iLocal_1044, iParam0, 5f, 5f, 1f, 0, 1, 0))
				{
					if (is_ped_facing_ped(iParam0, iLocal_1044, 120f))
					{
						if (has_entity_clear_los_to_entity(iParam0, iLocal_1044, 17))
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

bool func_102()
{
	if (iLocal_1157 || iLocal_1158)
	{
		return true;
	}
	return false;
}

void func_103(Vector3 vParam0, float fParam1, float fParam2)
{
	int iVar0;
	float fVar1;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1045))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1311))
	{
		return;
	}
	if (is_entity_dead(iLocal_1311, 0) || iLocal_1187)
	{
		iLocal_1156 = true;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1045))
	{
		if (((has_entity_been_damaged_by_weapon(iLocal_1045, joaat("weapon_sniperrifle"), 0) || has_entity_been_damaged_by_weapon(iLocal_1045, joaat("weapon_heavysniper"), 0)) || has_entity_been_damaged_by_weapon(iLocal_1045, joaat("weapon_remotesniper"), 0)) || has_entity_been_damaged_by_weapon(iLocal_1045, joaat("weapon_marksmanrifle"), 0))
		{
			iLocal_1155 = 1;
			iLocal_1031 = 1;
		}
	}
	if (iLocal_371 == 4 || iLocal_371 == 8)
	{
		if (!is_waypoint_playback_going_on_for_vehicle(iLocal_1311))
		{
			fParam3 *= 2f;
			iVar0 = 1;
		}
	}
	if (!iLocal_1133)
	{
		if ((iLocal_1155 || iLocal_1156) || iVar0)
		{
			fVar1 = func_26(PLAYER::PLAYER_PED_ID(), vParam0, 1);
			if (fVar1 > fParam3)
			{
				iLocal_1157 = 1;
				if (fVar1 > fParam4)
				{
					iLocal_1158 = true;
				}
			}
		}
	}
}

bool func_104(int iParam0)
{
	int iVar0;
	float fVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (is_vehicle_driveable(iParam0, 0))
		{
			if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
				{
					iVar0 = get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0);
					if (ENTITY::DOES_ENTITY_EXIST(iVar0) && is_vehicle_driveable(iVar0, 0))
					{
						fVar1 = get_entity_speed(iVar0);
						if (fVar1 > 7f)
						{
							if (is_entity_touching_entity(iVar0, iParam0) || has_entity_been_damaged_by_entity(iVar0, iParam0, 1))
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

bool func_105(int iParam0, int iParam1, auto uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!is_entity_dead(iVar0, 0) && !is_entity_dead(iParam0, 0))
	{
		if (!func_111(*uParam2, 1))
		{
			if (func_110(iParam0, uParam2))
			{
				*iParam3 = 1;
				return true;
			}
		}
		if (!func_111(*uParam2, 2))
		{
			if (get_player_wanted_level(player_id()) > 0)
			{
				*iParam3 = 2;
				return true;
			}
		}
		if (!func_111(*uParam2, 4))
		{
			if (func_109(iVar0, iParam0, uParam2, iParam5))
			{
				*iParam3 = 4;
				return true;
			}
		}
		if (!func_111(*uParam2, 8))
		{
			if (func_108(iVar0, iParam0, uParam2))
			{
				*iParam3 = 8;
				return true;
			}
		}
		iVar1 = !func_111(*uParam2, 128);
		if (iParam4)
		{
			if (func_106(iParam0, iParam1, 1, iParam6, iVar1, 1))
			{
				*iParam3 = 32;
				return true;
			}
		}
		else if (!func_111(*uParam2, 16))
		{
			if (func_106(iParam0, iParam1, 0, iParam6, iVar1, iParam8))
			{
				*iParam3 = 16;
				return true;
			}
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (iParam7 && has_entity_been_damaged_by_entity(iParam0, iVar0, 1))
		{
			*iParam3 = 16;
			return true;
		}
	}
	return false;
}

bool func_106(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	
	if (iParam3)
	{
		if (!iLocal_356)
		{
			iLocal_357 = get_entity_health(iParam0);
			iLocal_356 = true;
		}
		iLocal_358 = get_entity_health(iParam0);
		iLocal_359 = iLocal_357 - iLocal_358;
		iVar0 = get_players_last_vehicle();
		if (!is_entity_dead(iVar0, 0))
		{
			if (has_entity_been_damaged_by_entity(iParam0, iVar0, 1))
			{
				if (IntToFloat(iLocal_359) > 100f)
				{
					return true;
				}
			}
		}
		if (iLocal_356)
		{
			if (has_entity_been_damaged_by_entity(iParam0, PLAYER::PLAYER_PED_ID(), 1))
			{
				if (IntToFloat(iLocal_359) > 100f)
				{
					return true;
				}
			}
		}
	}
	else if (has_entity_been_damaged_by_entity(iParam0, PLAYER::PLAYER_PED_ID(), 1))
	{
		return true;
	}
	if (!iParam3)
	{
		iVar1 = get_players_last_vehicle();
		if (!is_entity_dead(iVar1, 0))
		{
			if (has_entity_been_damaged_by_entity(iParam0, iVar1, 1))
			{
				return true;
			}
		}
	}
	if (iParam4)
	{
		if (!is_entity_dead(iParam0, 0))
		{
			if (is_ped_being_jacked(iParam0))
			{
				if (get_peds_jacker(iParam0) == PLAYER::PLAYER_PED_ID())
				{
					return true;
				}
			}
		}
	}
	if (iParam5)
	{
		if (is_ped_in_melee_combat(PLAYER::PLAYER_PED_ID()))
		{
			if (is_entity_at_coord(iParam0, get_entity_coords(PLAYER::PLAYER_PED_ID(), 1), 10f, 10f, 10f, false, true, 0))
			{
				if (has_player_damaged_at_least_one_ped(player_id()))
				{
					return true;
				}
			}
		}
	}
	if (is_ped_performing_stealth_kill(PLAYER::PLAYER_PED_ID()))
	{
		if (was_ped_killed_by_stealth(iParam0))
		{
			return true;
		}
	}
	if (func_107(PLAYER::PLAYER_PED_ID(), iParam0))
	{
		return true;
	}
	if (iParam2)
	{
		if (is_ped_ragdoll(iParam0) && func_23(iParam0, 1) < 1.5f)
		{
			return true;
		}
		else if (is_ped_in_any_vehicle(iParam0, 0))
		{
			if (is_entity_touching_entity(PLAYER::PLAYER_PED_ID(), get_vehicle_ped_is_in(iParam0, 0)))
			{
				return true;
			}
		}
		else if (is_entity_touching_entity(PLAYER::PLAYER_PED_ID(), iParam0))
		{
			return true;
		}
		if (!is_entity_dead(iParam1, 0))
		{
			if (has_entity_been_damaged_by_entity(iParam1, PLAYER::PLAYER_PED_ID(), 1))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_107(int iParam0, int iParam1)
{
	int iVar0;
	
	get_current_ped_weapon(iParam0, &iVar0, 1);
	if (iVar0 == joaat("weapon_petrolcan"))
	{
		if (is_ped_shooting(iParam0))
		{
			if (vdist(get_entity_coords(iParam0, 1), get_entity_coords(iParam1, 1)) < 2.5f)
			{
				if (is_ped_facing_ped(iParam0, iParam1, 180f))
				{
					return true;
				}
			}
		}
	}
	return false;
}

bool func_108(int iParam0, int iParam1, auto uParam2)
{
	if (is_ped_armed(iParam0, 4))
	{
		if (is_ped_shooting(iParam0) && !is_ped_current_weapon_silenced(iParam0))
		{
			if (is_entity_at_coord(iParam1, get_entity_coords(iParam0, 1), IntToFloat(*uParam2.f_4), IntToFloat(*uParam2.f_4), IntToFloat(*uParam2.f_4), false, true, 0))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_109(int iParam0, int iParam1, auto uParam2, int iParam3)
{
	Vector3 vVar0;
	int iVar3;
	
	iVar3 = false;
	if (!is_entity_dead(iParam1, 0))
	{
		vVar0 = {get_entity_coords(iParam1, 1)};
	}
	if (is_bullet_in_area(vVar0, 4f, 1))
	{
		return true;
	}
	if (has_bullet_impacted_in_area(vVar0, to_float(*uParam2.f_6), 1, 1))
	{
		return true;
	}
	if (is_ped_armed(iParam0, 2))
	{
		if (is_ped_shooting(iParam0))
		{
			if (is_entity_at_coord(iParam1, get_entity_coords(iParam0, 1), IntToFloat(*uParam2.f_6 * 3), IntToFloat(*uParam2.f_6 * 3), IntToFloat(*uParam2.f_6 * 3), false, true, 0))
			{
				if (is_ped_facing_ped(get_ped_index_from_entity_index(iParam1), iParam0, 120f) && has_entity_clear_los_to_entity(iParam1, iParam0, 17))
				{
					return true;
				}
			}
		}
		else
		{
			if (is_ped_in_any_vehicle(get_ped_index_from_entity_index(iParam1), 0))
			{
				iVar3 = get_vehicle_ped_is_in(get_ped_index_from_entity_index(iParam1), 0);
			}
			if (is_ped_planting_bomb(iParam0) || func_94(iVar3))
			{
				if (is_entity_at_coord(iParam1, get_entity_coords(iParam0, 1), IntToFloat(*uParam2.f_6 * 3), IntToFloat(*uParam2.f_6 * 3), IntToFloat(*uParam2.f_6 * 3), false, true, 0))
				{
					if (is_ped_facing_ped(get_ped_index_from_entity_index(iParam1), iParam0, 120f) && has_entity_clear_los_to_entity(iParam1, iParam0, 17))
					{
						return true;
					}
				}
			}
		}
	}
	if (iParam3)
	{
		if (is_projectile_in_area(vVar0.x - IntToFloat(*uParam2.f_6), vVar0.y - IntToFloat(*uParam2.f_6), vVar0.z - IntToFloat(*uParam2.f_6), vVar0.x + IntToFloat(*uParam2.f_6), vVar0.y + IntToFloat(*uParam2.f_6), vVar0.z + IntToFloat(*uParam2.f_6), 0))
		{
			return true;
		}
	}
	return false;
}

bool func_110(int iParam0, auto uParam1)
{
	if (!is_entity_dead(iParam0, 0))
	{
		if (is_ped_armed(PLAYER::PLAYER_PED_ID(), 6))
		{
			if (is_player_free_aiming_at_entity(player_id(), iParam0) || is_player_targetting_entity(player_id(), iParam0))
			{
				if (is_ped_facing_ped(iParam0, PLAYER::PLAYER_PED_ID(), 90f))
				{
					if (func_23(iParam0, 1) < *uParam1.f_2)
					{
						if (*uParam1.f_1 == 0)
						{
							*uParam1.f_1 = GAMEPLAY::GET_GAME_TIMER();
						}
						else if (GAMEPLAY::GET_GAME_TIMER() - *uParam1.f_1 > *uParam1.f_3)
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

int func_111(auto uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_112(int iParam0, int iParam1, float fParam2, float fParam3, float fParam4)
{
	if (!PED::IS_PED_INJURED(iParam1))
	{
		if (is_vehicle_driveable(iParam0, 0))
		{
			if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (func_24(iParam1, iParam0, 0) > fParam2 && func_23(iParam1, 1) < fParam3)
				{
					if (!is_ped_in_vehicle(iParam1, iParam0, 0))
					{
						if (get_script_task_status(iParam1, -1794415470) != 1)
						{
							task_enter_vehicle(iParam1, iParam0, 20000, -1, 2f, 1, 0);
						}
					}
					else if (get_script_task_status(iParam1, -1273030092) != 1)
					{
						task_vehicle_mission(iParam1, iParam0, get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0), 6, 35f, 786469, -1f, -1f, 1);
						add_vehicle_subtask_attack_ped(iParam1, PLAYER::PLAYER_PED_ID());
					}
				}
				else if (!is_ped_in_vehicle(iParam1, iParam0, 0))
				{
					if (get_script_task_status(iParam1, 780511057) != 1)
					{
						task_combat_ped(iParam1, PLAYER::PLAYER_PED_ID(), 0, 16);
					}
				}
			}
			else if (is_ped_in_vehicle(iParam1, iParam0, 0))
			{
				if (func_23(iParam1, 1) > fParam4)
				{
					if (get_script_task_status(iParam1, -1273030092) != 1)
					{
						task_vehicle_mission_ped_target(iParam1, iParam0, PLAYER::PLAYER_PED_ID(), 6, 35f, 786469, -1f, -1f, 1);
						add_vehicle_subtask_attack_ped(iParam1, PLAYER::PLAYER_PED_ID());
					}
				}
				else if (get_script_task_status(iParam1, 780511057) != 1)
				{
					task_combat_ped(iParam1, PLAYER::PLAYER_PED_ID(), 0, 16);
				}
			}
		}
		else if (get_script_task_status(iParam1, 780511057) != 1)
		{
			task_combat_ped(iParam1, PLAYER::PLAYER_PED_ID(), 0, 16);
		}
	}
}

void func_113(int iParam0)
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(iLocal_1044) && !PED::IS_PED_INJURED(iParam0))
	{
		if (!is_entity_dead(iParam0, 0))
		{
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 3, true);
		}
		clear_sequence_task(&iVar0);
		open_sequence_task(&iVar0);
		task_leave_any_vehicle(false, 0, 256);
		task_aim_gun_at_entity(false, iLocal_1044, -1, 0);
		close_sequence_task(iVar0);
		task_perform_sequence(iParam0, iVar0);
		clear_sequence_task(&iVar0);
	}
}

void func_114(int iParam0)
{
	if (!is_entity_dead(iLocal_1044, 0))
	{
		if (!is_ped_in_any_vehicle(iLocal_1044, 0))
		{
			if (!is_entity_dead(iParam0, 0))
			{
				PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 3, true);
			}
			clear_sequence_task(&iLocal_1323);
			open_sequence_task(&iLocal_1323);
			task_leave_any_vehicle(false, 0, 256);
			task_combat_ped(false, iLocal_1044, 0, 16);
			close_sequence_task(iLocal_1323);
			if (!is_entity_dead(iParam0, 0))
			{
				task_perform_sequence(iParam0, iLocal_1323);
			}
			clear_sequence_task(&iLocal_1323);
		}
		else if (!PED::IS_PED_INJURED(iParam0))
		{
			if (get_script_task_status(iParam0, 780511057) != 1)
			{
				clear_ped_tasks(iParam0);
				task_combat_ped(iParam0, iLocal_1044, 0, 16);
			}
		}
	}
}

Vector3 func_115()
{
	Vector3 vVar0;
	int iVar3;
	
	iVar3 = get_random_int_in_range(0, 65535) % 3;
	switch (iVar3)
	{
		case 0:
			vVar0 = {-1270.206f, -200.3586f, 40.8333f};
			break;
		
		case 1:
			vVar0 = {-1268.439f, -215.9683f, 59.654f};
			break;
		
		case 2:
			vVar0 = {-1241.558f, -239.3237f, 38.7884f};
			break;
	}
	return vVar0;
}

void func_116(int iParam0, Vector3 vParam1)
{
	if (!iLocal_1133)
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (is_entity_at_entity(iLocal_1044, iParam0, vParam1, 0, 1, 0))
			{
				if (is_ped_facing_ped(iParam0, iLocal_1044, 160f))
				{
					if (has_entity_clear_los_to_entity(iParam0, iLocal_1044, 17))
					{
						task_go_to_entity_while_aiming_at_entity(iParam0, iLocal_1044, iLocal_1044, 1f, 0, -1f, 4f, 1, 0, -957453492);
						iLocal_1043 = 5;
						iLocal_1133 = 1;
					}
				}
			}
			else if (!is_ped_in_any_vehicle(iParam0, 0))
			{
				if (get_script_task_status(iParam0, -1207174364) != 1)
				{
					task_go_to_entity_while_aiming_at_entity(iParam0, iLocal_1044, iLocal_1044, 1f, 0, -1f, 4f, 1, 0, -957453492);
				}
			}
		}
	}
}

void func_117(int iParam0)
{
	int iVar0;
	Vector3 vVar1;
	
	if (iLocal_1056 == 0)
	{
		iLocal_1056 = func_30(70f, 0);
	}
	if (!PED::IS_PED_INJURED(*iParam0))
	{
		if (!is_ped_in_any_vehicle(*iParam0, 0))
		{
			if (!iLocal_1135)
			{
				if (*iParam0 == iLocal_1056)
				{
					clear_sequence_task(&iVar0);
					open_sequence_task(&iVar0);
					task_go_to_entity(false, iLocal_1044, 20000, 2f, 1f, 2f, 0);
					task_turn_ped_to_face_entity(false, iLocal_1044, -1);
					close_sequence_task(iVar0);
					task_perform_sequence(*iParam0, iVar0);
					clear_sequence_task(&iVar0);
					iLocal_1135 = 1;
					vVar1 = {get_entity_coords(*iParam0, 1)};
				}
				else if (get_script_task_status(*iParam0, 1227113341) != 1)
				{
					task_turn_ped_to_face_entity(*iParam0, iLocal_1044, -1);
				}
			}
			else if (*iParam0 != iLocal_1056)
			{
				if (get_script_task_status(*iParam0, 1227113341) != 1)
				{
					task_turn_ped_to_face_entity(*iParam0, iLocal_1044, -1);
				}
			}
		}
		set_ped_can_be_targetted(*iParam0, true);
		func_118();
	}
}

void func_118()
{
	int iVar0;
	
	if (!iLocal_1137)
	{
		if (!iLocal_1148)
		{
			if (!func_22())
			{
				iVar0 = func_30(1116471296, 1);
				func_28(iVar0, 3, "OJAvaGUARD");
				if (func_119())
				{
					func_6(&uLocal_1363, "OJASAUD", "OJASva_CAR", 9, 0, 0, 0);
					iLocal_1137 = 1;
				}
				else
				{
					func_27(&uLocal_1363, "OJASAUD", "OJASva_GTFO2", "OJASva_GTFO2_1", 9, 0, 0);
					iLocal_1137 = 1;
				}
			}
		}
	}
}

bool func_119()
{
	Vector3 vVar0;
	Vector3 vVar3;
	float fVar6;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		vVar0 = {get_entity_coords(PLAYER::PLAYER_PED_ID(), 1)};
		if (!is_entity_dead(iLocal_1311, 0))
		{
			vVar3 = {get_entity_coords(iLocal_1311, 1)};
		}
		fVar6 = vdist2(vVar0, vVar3);
		if (fVar6 <= 25f)
		{
			return true;
		}
	}
	return false;
}

void func_120(int iParam0)
{
	int iVar0;
	
	iLocal_1134 = true;
	if (iParam0 == 0)
	{
		iVar0 = -1;
	}
	else if (iParam0 == 1)
	{
		iVar0 = false;
	}
	if (!is_entity_dead(iLocal_1053[iParam0], 0))
	{
		if (is_vehicle_driveable(iLocal_1312, 0))
		{
			if (!is_ped_in_vehicle(iLocal_1053[iParam0], iLocal_1312, 0))
			{
				if (get_script_task_status(iLocal_1053[iParam0], -1794415470) != 1)
				{
					task_enter_vehicle(iLocal_1053[iParam0], iLocal_1312, 20000, iVar0, 2f, 1, 0);
				}
			}
		}
	}
}

bool func_121()
{
	if (!PED::IS_PED_INJURED(iLocal_1053[0]) && !PED::IS_PED_INJURED(iLocal_1053[1]))
	{
		if (is_ped_in_vehicle(iLocal_1053[0], iLocal_1312, 0) && is_ped_in_vehicle(iLocal_1053[1], iLocal_1312, 0))
		{
			return true;
		}
	}
	return false;
}

void func_122(Vector3 vParam0, Vector3 vParam1, float fParam2)
{
	if (!iLocal_1133)
	{
		if (is_projectile_type_in_angled_area(vParam0, vParam3, fParam6, joaat("weapon_stickybomb"), 0))
		{
			iLocal_1133 = 1;
		}
	}
}

void func_123(int iParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	iVar0 = iLocal_1049[iParam0];
	switch (iLocal_1032[iParam0])
	{
		case 0:
			if (!PED::IS_PED_INJURED(iVar0))
			{
				clear_sequence_task(&iLocal_1323);
				open_sequence_task(&iLocal_1323);
				task_go_to_coord_any_means(false, vLocal_1267[iParam0 /*3*/], 1f, 0, 0, 786603, -1082130432);
				task_achieve_heading(false, fLocal_1220[iParam0], 0);
				close_sequence_task(iLocal_1323);
				task_perform_sequence(iVar0, iLocal_1323);
				clear_sequence_task(&iLocal_1323);
				iLocal_1032[iParam0] = 1;
			}
			break;
		
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (!is_entity_dead(iVar0, 0))
				{
					if (!iLocal_1168)
					{
						if (get_script_task_status(iVar0, -2017877118) != 1 && get_script_task_status(iVar0, 242628503) != 1)
						{
							if (is_entity_at_coord(iVar0, vLocal_1267[iParam0 /*3*/], 3f, 3f, 3f, false, true, 0))
							{
								func_131(iVar0, &(uLocal_1195[iParam0]), 1);
							}
							else
							{
								iLocal_1032[iParam0] = 0;
							}
						}
					}
				}
			}
			break;
		
		case 3:
			if (!func_52(&iLocal_1332))
			{
				func_50(&iLocal_1332);
				func_117(&iVar0);
				iLocal_1032[iParam0] = 2;
			}
			else if (func_46(&iLocal_1332) > fLocal_1226[iParam0] || is_player_wanted_level_greater(player_id(), 0))
			{
				func_117(&iVar0);
				iLocal_1032[iParam0] = 2;
			}
			break;
		
		case 2:
			if (!func_86(iLocal_1044))
			{
				iLocal_1161 = 1;
				if (iLocal_1160)
				{
					iLocal_1032[iParam0] = 4;
					break;
				}
				else if (func_46(&iLocal_1332) >= 27f && iLocal_1137)
				{
					func_116(iVar0, 15f, 15f, 3f);
				}
				else if (func_46(&iLocal_1332) >= 15f)
				{
					func_129(iVar0);
				}
			}
			else
			{
				iLocal_1161 = 0;
				iLocal_1134 = true;
				if (!iLocal_1154)
				{
					iLocal_1032[iParam0] = 0;
				}
				else
				{
					iLocal_1032[iParam0] = 4;
				}
			}
			break;
		
		case 4:
			if (!PED::IS_PED_INJURED(iVar0))
			{
				set_ped_can_be_targetted(iVar0, true);
				set_ped_reset_flag(iVar0, 60, true);
			}
			if (is_vehicle_driveable(iLocal_1311, 0))
			{
				if (!PED::IS_PED_INJURED(iVar0))
				{
					if (iParam0 == 0)
					{
						task_look_at_entity(iLocal_1049[0], iLocal_1049[1], -1, 0, 2);
						if (!is_ped_in_vehicle(iVar0, iLocal_1311, 0))
						{
							task_enter_vehicle(iVar0, iLocal_1311, 30000, -1, 1f, 1, 0);
						}
					}
					else if (iParam0 == 1)
					{
						task_look_at_entity(iLocal_1049[1], iLocal_1049[0], -1, 0, 2);
						if (!is_ped_in_vehicle(iVar0, iLocal_1311, 0))
						{
							task_enter_vehicle(iVar0, iLocal_1311, 30000, false, 1f, 1, 0);
						}
					}
					else if (iParam0 == 2)
					{
						if (is_vehicle_driveable(iLocal_1312, 0))
						{
							if (!is_ped_in_vehicle(iVar0, iLocal_1312, 0))
							{
								task_enter_vehicle(iVar0, iLocal_1312, 30000, true, 1f, 1, 0);
							}
						}
					}
				}
				iLocal_1032[iParam0] = 5;
			}
			else
			{
				iLocal_1032[iParam0] = 10;
			}
			break;
		
		case 5:
			if (!PED::IS_PED_INJURED(iVar0))
			{
				set_ped_reset_flag(iVar0, 60, true);
			}
			if (!is_entity_dead(iVar0, 0))
			{
				if (get_script_task_status(iVar0, 150319005) != 1)
				{
					if (iParam0 == 0)
					{
						task_look_at_entity(iLocal_1049[iParam0], iLocal_1049[1], -1, 2048, 4);
					}
					else if (iParam0 == 1)
					{
						task_look_at_entity(iLocal_1049[iParam0], iLocal_1049[0], -1, 2048, 4);
					}
				}
			}
			if (is_vehicle_driveable(iLocal_1311, 0))
			{
				if (!func_127())
				{
					if (iLocal_1133)
					{
						if (!PED::IS_PED_INJURED(iVar0))
						{
							if (get_script_task_status(iVar0, 780511057) != 1)
							{
								if (func_126(iLocal_1049[0]))
								{
									task_clear_look_at(iLocal_1049[0]);
								}
								if (func_126(iLocal_1049[1]))
								{
									task_clear_look_at(iLocal_1049[1]);
								}
								task_combat_ped(iVar0, iLocal_1044, 0, 16);
							}
						}
					}
				}
				else
				{
					iLocal_1032[iParam0] = 6;
				}
			}
			else
			{
				iLocal_1032[iParam0] = 10;
			}
			if (iLocal_1149)
			{
				if (iLocal_1032[iParam0] != 10 && iLocal_1032[iParam0] != 11)
				{
					iLocal_1032[iParam0] = 10;
				}
			}
			break;
		
		case 6:
			if (!iLocal_1133)
			{
				if (is_vehicle_driveable(iLocal_1311, 0))
				{
					if (get_ped_in_vehicle_seat(iLocal_1311, -1) == iVar0)
					{
						if (!PED::IS_PED_INJURED(iVar0))
						{
							set_vehicle_engine_on(iLocal_1311, true, 1, 0);
							if (func_125())
							{
								task_vehicle_follow_waypoint_recording(iVar0, iLocal_1311, "OJASva_101a", 181, 0, 16, -1, 10f, 0, 2f);
							}
							else
							{
								task_vehicle_follow_waypoint_recording(iVar0, iLocal_1311, "OJASva_101", 181, 0, 0, -1, -1f, 0, 2f);
							}
						}
					}
					iLocal_1032[iParam0] = 7;
				}
			}
			else
			{
				if (func_126(iLocal_1049[0]))
				{
					task_clear_look_at(iLocal_1049[0]);
				}
				if (func_126(iLocal_1049[1]))
				{
					task_clear_look_at(iLocal_1049[1]);
				}
				iLocal_1032[iParam0] = 7;
			}
			break;
		
		case 7:
			if (iLocal_1133)
			{
				if ((is_vehicle_driveable(iLocal_1311, 0) && get_ped_in_vehicle_seat(iLocal_1311, -1) == iVar0) && get_ped_in_vehicle_seat(iLocal_1311, true) == iLocal_1045)
				{
					if (!PED::IS_PED_INJURED(iVar0))
					{
						if (iLocal_1148 || (iLocal_1162 && !is_waypoint_playback_going_on_for_vehicle(iLocal_1311)))
						{
							clear_ped_tasks(iVar0);
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							{
								if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
								{
									if (get_script_task_status(iVar0, -1273030092) != 1)
									{
										task_vehicle_mission(iVar0, iLocal_1311, get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0), 8, 35f, 786469, -1f, -1f, 1);
									}
								}
								else if (get_script_task_status(iVar0, -1273030092) != 1)
								{
									task_vehicle_mission_ped_target(iVar0, iLocal_1311, PLAYER::PLAYER_PED_ID(), 8, 35f, 786469, -1f, -1f, 1);
								}
							}
						}
					}
				}
				else if (!PED::IS_PED_INJURED(iVar0))
				{
					if (get_script_task_status(iVar0, 780511057) != 1)
					{
						task_combat_ped(iVar0, iLocal_1044, 0, 16);
					}
				}
			}
			else if (iLocal_1148 || (iLocal_1162 && !is_waypoint_playback_going_on_for_vehicle(iLocal_1311)))
			{
				if (is_vehicle_driveable(iLocal_1311, 0))
				{
					if (get_ped_in_vehicle_seat(iLocal_1311, -1) == iVar0)
					{
						if (!is_entity_dead(iVar0, 0))
						{
							if (get_script_task_status(iVar0, -1273030092) != 1)
							{
								task_vehicle_mission_coors_target(iVar0, iLocal_1311, vLocal_1289, 8, 25f, 786603, -1f, -1f, 1);
							}
						}
					}
				}
			}
			break;
		
		case 8:
			if (iLocal_1158)
			{
				open_sequence_task(&iLocal_1323);
				task_leave_any_vehicle(false, 0, 0);
				task_look_at_coord(false, func_115(), get_random_int_in_range(1000, 1500), 2048, 4);
				task_go_to_entity(false, PLAYER::PLAYER_PED_ID(), get_random_int_in_range(15000, 16000), 30f, 1f, 2f, 0);
				task_go_to_entity_while_aiming_at_coord(0, PLAYER::PLAYER_PED_ID(), func_115(), 1f, 0, 1056964608, 1082130432, 1, 0, -957453492);
				close_sequence_task(iLocal_1323);
				if (!is_entity_dead(iLocal_1049[iParam0], 0))
				{
					task_perform_sequence(iLocal_1049[iParam0], iLocal_1323);
				}
				clear_sequence_task(&iLocal_1323);
			}
			else
			{
				open_sequence_task(&iLocal_1323);
				task_leave_any_vehicle(false, 0, 0);
				task_aim_gun_at_coord(false, func_115(), get_random_int_in_range(3000, 3500), 1, 0);
				task_go_to_entity_while_aiming_at_coord(0, PLAYER::PLAYER_PED_ID(), func_115(), 1f, 0, 1056964608, 1082130432, 1, 0, -957453492);
				close_sequence_task(iLocal_1323);
				if (!is_entity_dead(iLocal_1049[iParam0], 0))
				{
					task_perform_sequence(iLocal_1049[iParam0], iLocal_1323);
				}
				clear_sequence_task(&iLocal_1323);
			}
			iLocal_1032[iParam0] = 9;
			break;
		
		case 9:
			if (!PED::IS_PED_INJURED(iLocal_1049[iParam0]))
			{
				if (get_script_task_status(iLocal_1049[iParam0], 1435919172) != 1)
				{
					task_go_to_entity_while_aiming_at_entity(iLocal_1049[iParam0], iLocal_1044, iLocal_1044, 1f, 0, -1f, 4f, 1, 0, -957453492);
				}
			}
			break;
		
		case 10:
			if (iLocal_1043 == 4 || iLocal_1043 == 5)
			{
				func_113(iVar0);
			}
			else if (iLocal_1043 != 8)
			{
				func_114(iVar0);
				iLocal_1032[iParam0] = 11;
			}
			break;
		
		case 11:
			if (iParam0 == 0)
			{
				func_112(iLocal_1311, iVar0, 1112014848, 1112014848, 1092616192);
			}
			func_2(iVar0);
			func_87(iVar0);
			break;
	}
	if (iLocal_1030 < 10)
	{
		fVar1 = 5f;
	}
	else
	{
		fVar1 = fLocal_1233;
	}
	if (!iLocal_1133)
	{
		if (iLocal_1157)
		{
			if (iLocal_1032[iParam0] != 8 && iLocal_1032[iParam0] != 9)
			{
				iLocal_1032[iParam0] = 8;
			}
		}
		else if (func_124(iVar0))
		{
			iVar2 = func_30(1116471296, 1);
			if (iVar2 != 0)
			{
				func_103(get_entity_coords(iVar2, 1), 1097859072, 1116471296);
			}
			if (!func_102())
			{
				iLocal_1133 = 1;
			}
		}
		else if (!iLocal_1136)
		{
			if (func_101(iVar0, fVar1))
			{
				if ((iLocal_1032[iParam0] != 3 && iLocal_1032[iParam0] != 2) && !iLocal_1160)
				{
					if (!iLocal_1134)
					{
						func_99(&Local_360, 4);
						iLocal_1032[iParam0] = 3;
					}
					else if (!func_86(iLocal_1044))
					{
						iLocal_1133 = 1;
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1045))
						{
							iLocal_1043 = 5;
						}
					}
				}
			}
		}
	}
	else if ((iLocal_1032[iParam0] != 10 && iLocal_1032[iParam0] != 11) && iLocal_1032[iParam0] != 7)
	{
		iLocal_1032[iParam0] = 10;
	}
	func_98(iVar0, uLocal_1120[iParam0]);
}

bool func_124(int iParam0)
{
	int iVar0;
	
	if (!iLocal_1133)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (!PED::IS_PED_INJURED(iParam0))
			{
				if (is_ped_in_any_vehicle(iParam0, 0))
				{
					iVar0 = get_vehicle_ped_is_in(iParam0, 0);
				}
				else
				{
					iVar0 = false;
				}
			}
			if (func_105(iParam0, iVar0, &Local_360, &iLocal_371, 0, 0, 0, 1, 1) || (is_ped_ragdoll(iParam0) && func_23(iParam0, 1) < 1.5f))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_125()
{
	int iVar0;
	int[] iVar1 = new int[10];
	
	iLocal_1211 = get_ped_nearby_vehicles(PLAYER::PLAYER_PED_ID(), &iVar1);
	iLocal_1211 = iLocal_1211;
	iLocal_1211 = iVar1;
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar1[iVar0]) && !is_entity_dead(iVar1[iVar0], 0))
		{
			if (is_entity_in_angled_area(iVar1[iVar0], -1218.844f, -278.623f, 36.8196f, -1248.403f, -225.8467f, 43.15606f, 8.5f, 0, true, 0))
			{
				iLocal_1210++;
			}
		}
		iVar0++;
	}
	if (iLocal_1210 >= 1)
	{
		iLocal_1162 = 1;
		return true;
	}
	return false;
}

bool func_126(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!is_entity_dead(iParam0, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_127()
{
	if (is_vehicle_driveable(iLocal_1311, 0))
	{
		if (!PED::IS_PED_INJURED(iLocal_1045))
		{
			if (!iLocal_1133)
			{
				if (is_ped_in_vehicle(iLocal_1045, iLocal_1311, 0) && func_128())
				{
					return true;
				}
			}
			else if (is_ped_in_vehicle(iLocal_1045, iLocal_1311, 0))
			{
				return true;
			}
		}
	}
	return false;
}

int func_128()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (!PED::IS_PED_INJURED(iLocal_1046[iVar0]))
		{
			if (!is_ped_in_any_vehicle(iLocal_1046[iVar0], 0))
			{
				iVar1 = 0;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_129(int iParam0)
{
	switch (iLocal_1207)
	{
		case 0:
			if (!is_entity_dead(iParam0, 0))
			{
				if (get_script_task_status(iParam0, 1630799643) != 1)
				{
					task_aim_gun_at_entity(iParam0, PLAYER::PLAYER_PED_ID(), -1, 0);
				}
				func_28(iParam0, 3, "OJAvaGUARD");
				func_6(&uLocal_1363, "OJASAUD", "OJASva_FWARN", 9, 0, 0, 0);
				iLocal_1137 = 1;
				iLocal_1207 = 1;
			}
			break;
		
		case 1:
			func_130(iParam0);
			break;
	}
}

void func_130(int iParam0)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (func_23(iParam0, 1) < 5f)
		{
			if (get_script_task_status(iParam0, -1207174364) != 1 && get_script_task_status(iParam0, 1630799643) != 1)
			{
				task_aim_gun_at_entity(iParam0, iLocal_1044, -1, 0);
			}
		}
		else if (get_script_task_status(iParam0, -1207174364) != 1)
		{
			if (iParam0 == iLocal_1056)
			{
				task_go_to_entity_while_aiming_at_entity(iParam0, iLocal_1044, iLocal_1044, 1f, 0, -1f, 4f, 1, 0, -957453492);
			}
			else if (get_script_task_status(iParam0, 1630799643) != 1)
			{
				task_aim_gun_at_entity(iParam0, iLocal_1044, -1, 0);
			}
		}
	}
}

void func_131(int iParam0, auto uParam1, int iParam2)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (iParam2)
		{
			func_132(iParam0, uParam1);
		}
	}
}

void func_132(int iParam0, auto uParam1)
{
	int iVar0;
	
	iVar0 = func_133(0, 3, *uParam1);
	if (iVar0 == 0)
	{
		task_play_anim(iParam0, "ODDJOBS@ASSASSINATE@GUARD", "unarmed_earpiece_a", 8f, -8f, -1, 1, get_random_float_in_range(0f, 1f), 1, 0, 0);
	}
	else if (iVar0 == 1)
	{
		task_play_anim(iParam0, "ODDJOBS@ASSASSINATE@GUARD", "unarmed_earpiece_b", 8f, -8f, -1, 1, get_random_float_in_range(0f, 1f), 1, 0, 0);
	}
	else if (iVar0 == 2)
	{
		task_play_anim(iParam0, "ODDJOBS@ASSASSINATE@GUARD", "unarmed_fold_arms", 8f, -8f, -1, 1, get_random_float_in_range(0f, 1f), 1, 0, 0);
	}
	else if (iVar0 == 3)
	{
		task_play_anim(iParam0, "ODDJOBS@ASSASSINATE@GUARD", "unarmed_look", 8f, -8f, -1, 1, get_random_float_in_range(0f, 1f), 1, 0, 0);
	}
	*uParam1 = iVar0;
}

int func_133(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	if (iParam0 == iParam1)
	{
		return 0;
	}
	iVar0 = get_random_int_in_range(iParam0, iParam1);
	while (iVar0 == iParam2 || iVar1 < 50)
	{
		iVar1++;
		iVar0 = get_random_int_in_range(iParam0, iParam1);
	}
	return iVar0;
}

void func_134(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	Vector3 vVar4;
	Vector3 vVar7;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1046[iParam0]))
	{
		return;
	}
	switch (iLocal_1040[iParam0])
	{
		case 0:
			if (!is_entity_dead(iLocal_1045, 0))
			{
				if (!is_ped_in_any_vehicle(iLocal_1045, 0))
				{
					if (!PED::IS_PED_INJURED(iLocal_1046[iParam0]))
					{
						if (iParam0 == 0)
						{
							task_follow_to_offset_of_entity(iLocal_1046[iParam0], iLocal_1045, 1.5f, 0f, 0f, 1f, -1, 0.1f, 1);
						}
						else if (iParam0 == 1)
						{
							if (is_vehicle_driveable(iLocal_1312, 0))
							{
								open_sequence_task(&iVar2);
								task_go_to_coord_any_means(false, -1222.992f, -191.0932f, 38.17538f, 1f, 0, 0, 786603, -1082130432);
								task_start_scenario_in_place(false, "WORLD_HUMAN_GUARD_STAND", 0, 0);
								task_enter_vehicle(false, iLocal_1312, 30000, 2, 1f, 1, 0);
								close_sequence_task(iVar2);
								task_perform_sequence(iLocal_1046[iParam0], iVar2);
								clear_sequence_task(&iVar2);
							}
						}
						iLocal_1040[iParam0] = 1;
					}
				}
			}
			break;
		
		case 1:
			if (iParam0 == 0)
			{
				iVar0 = iLocal_1311;
				iVar1 = 2;
			}
			else if (iParam0 == 1)
			{
				iVar0 = iLocal_1312;
				iVar1 = 2;
			}
			if (!is_entity_dead(iLocal_1046[iParam0], 0))
			{
				if (is_vehicle_driveable(iVar0, 0))
				{
					if (!is_entity_dead(iLocal_1046[iParam0], 0))
					{
						if (!is_ped_in_vehicle(iLocal_1046[iParam0], iVar0, 0))
						{
							if (is_ped_in_any_vehicle(iLocal_1045, 0))
							{
								if (get_script_task_status(iLocal_1046[iParam0], -1794415470) != 1)
								{
									task_enter_vehicle(iLocal_1046[iParam0], iVar0, 30000, iVar1, 1f, 1, 0);
								}
							}
						}
						else
						{
							iLocal_1040[iParam0] = 2;
						}
					}
				}
			}
			break;
		
		case 2:
			if (iParam0 == 0)
			{
				iVar0 = iLocal_1311;
			}
			else if (iParam0 == 1)
			{
				iVar0 = iLocal_1312;
			}
			if (is_vehicle_driveable(iVar0, 0))
			{
				if (!is_entity_dead(iLocal_1046[iParam0], 0))
				{
					if (is_ped_in_vehicle(iLocal_1046[iParam0], iVar0, 0) && is_vehicle_driveable(iLocal_1311, 0))
					{
						if (iLocal_1133)
						{
							if (!iLocal_1163)
							{
								if (get_script_task_status(iLocal_1046[iParam0], 780511057) != 1)
								{
									if (!is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
									{
										if (get_entity_speed(iVar0) < 5f)
										{
											iLocal_1040[iParam0] = 5;
										}
									}
									task_combat_ped(iLocal_1046[iParam0], PLAYER::PLAYER_PED_ID(), 0, 16);
								}
							}
							else if (get_script_task_status(iLocal_1046[iParam0], 780511057) != 1)
							{
								task_combat_ped(iLocal_1046[iParam0], PLAYER::PLAYER_PED_ID(), 0, 16);
							}
						}
					}
					else if (!iLocal_1157)
					{
						iLocal_1040[iParam0] = 5;
					}
				}
			}
			break;
		
		case 3:
			if (!PED::IS_PED_INJURED(iLocal_1046[iParam0]))
			{
				if (is_ped_using_any_scenario(iLocal_1046[iParam0]))
				{
					_0xF1C03A5352243A30(iLocal_1046[iParam0]);
				}
			}
			if (iLocal_1158)
			{
				open_sequence_task(&iLocal_1323);
				task_leave_any_vehicle(false, 0, 0);
				task_look_at_coord(false, func_115(), get_random_int_in_range(2000, 2500), 2048, 4);
				task_go_to_entity(false, PLAYER::PLAYER_PED_ID(), get_random_int_in_range(15000, 16000), 30f, 1f, 2f, 0);
				task_go_to_entity_while_aiming_at_coord(0, PLAYER::PLAYER_PED_ID(), func_115(), 1f, 0, 1056964608, 1082130432, 1, 0, -957453492);
				close_sequence_task(iLocal_1323);
				task_perform_sequence(iLocal_1046[iParam0], iLocal_1323);
				clear_sequence_task(&iLocal_1323);
			}
			else if (!PED::IS_PED_INJURED(iLocal_1046[iParam0]))
			{
				set_ped_sphere_defensive_area(iLocal_1046[iParam0], vLocal_1304, 15f, 0, 0);
				set_ped_combat_movement(iLocal_1046[iParam0], 1);
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_1046[iParam0], 0, true);
				set_ped_max_move_blend_ratio(iLocal_1046[iParam0], 2f);
				if (!iLocal_1130 && !is_ped_in_any_vehicle(iLocal_1046[iParam0], 0))
				{
					open_sequence_task(&iLocal_1323);
					if (PED::IS_PED_INJURED(iLocal_1045))
					{
						task_play_anim(false, "oddjobs@assassinate@hotel@", "alert_gunshot", 8f, -4f, 1250, 0, 0, 0, 0, 0);
						task_aim_gun_at_coord(false, func_115(), 3000, 0, 1);
						task_aim_gun_at_entity(false, PLAYER::PLAYER_PED_ID(), -1, 0);
					}
					else
					{
						task_play_anim(false, "oddjobs@assassinate@hotel@", "alert_gunshot", 8f, -4f, 700, 0, 0, 0, 0, 0);
						task_follow_to_offset_of_entity(false, iLocal_1045, 1.5f, 0f, 0f, 2f, -1, 0.1f, 1);
					}
					close_sequence_task(iLocal_1323);
					iLocal_1130 = 1;
				}
				else
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_1311) && is_vehicle_driveable(iLocal_1311, 0))
					{
						vVar4 = {get_world_position_of_entity_bone(iLocal_1311, get_entity_bone_index_by_name(iLocal_1311, "wheel_lr"))};
						vVar7 = {get_entity_coords(iLocal_1311, 1)};
						vVar7 = {vVar4 - vVar7};
						_0xE4723DB6E736CCFF(iLocal_1046[iParam0], iLocal_1311, vVar7, 1.5f, 0);
					}
					open_sequence_task(&iLocal_1323);
					task_leave_any_vehicle(false, 0, 0);
					if (PED::IS_PED_INJURED(iLocal_1045) && !func_44(func_135(), vVar4, 0))
					{
						task_go_to_coord_while_aiming_at_coord(false, vVar4, func_115(), 2f, false, 0.5f, 4f, true, 0, 0, -957453492);
						task_put_ped_directly_into_cover(false, vVar4, -1, false, 0.25f, false, 0, 0, 1);
					}
					else
					{
						task_aim_gun_at_coord(false, func_115(), 1500, 1, 0);
						if (!is_entity_dead(iLocal_1045, 0))
						{
							task_follow_to_offset_of_entity(false, iLocal_1045, 0f, -1.5f, 0f, 2f, -1, 0.1f, 1);
						}
					}
					close_sequence_task(iLocal_1323);
				}
				if (!is_entity_dead(iLocal_1046[iParam0], 0))
				{
					task_perform_sequence(iLocal_1046[iParam0], iLocal_1323);
				}
				clear_sequence_task(&iLocal_1323);
			}
			iLocal_1040[iParam0] = 4;
			break;
		
		case 4:
			if (!is_entity_dead(iLocal_1046[iParam0], 0))
			{
				if (is_entity_playing_anim(iLocal_1046[iParam0], "oddjobs@assassinate@hotel@", "enter", 3))
				{
					fVar3 = get_entity_anim_current_time(iLocal_1046[iParam0], "oddjobs@assassinate@hotel@", "enter");
					if (fVar3 < 0.5f)
					{
						set_entity_anim_speed(iLocal_1046[iParam0], "oddjobs@assassinate@hotel@", "enter", 3.5f);
					}
					else
					{
						set_entity_anim_speed(iLocal_1046[iParam0], "oddjobs@assassinate@hotel@", "enter", 1f);
					}
				}
			}
			break;
		
		case 5:
			if (iParam0 == 0)
			{
				iVar0 = iLocal_1311;
			}
			else if (iParam0 == 1)
			{
				iVar0 = iLocal_1312;
			}
			if (!PED::IS_PED_INJURED(iLocal_1045))
			{
				if (!PED::IS_PED_INJURED(iLocal_1046[iParam0]))
				{
					if (is_ped_in_any_vehicle(iLocal_1045, 0))
					{
						task_combat_ped(iLocal_1046[iParam0], iLocal_1044, 0, 16);
					}
					else
					{
						task_go_to_entity_while_aiming_at_entity(iLocal_1046[iParam0], iLocal_1045, PLAYER::PLAYER_PED_ID(), 3f, 1, 0.005f, 4f, 1, 0, -957453492);
					}
				}
				iLocal_1040[iParam0] = 6;
			}
			else if (is_vehicle_driveable(iVar0, 0))
			{
				if (get_entity_speed(iVar0) < 5f)
				{
					func_114(iLocal_1046[iParam0]);
					iLocal_1040[iParam0] = 6;
				}
				else if (get_script_task_status(iLocal_1046[iParam0], 780511057) != 1)
				{
					task_combat_ped(iLocal_1046[iParam0], iLocal_1044, 0, 16);
				}
			}
			else
			{
				func_114(iLocal_1046[iParam0]);
				iLocal_1040[iParam0] = 6;
			}
			break;
		
		case 6:
			func_2(iLocal_1046[iParam0]);
			func_87(iLocal_1046[iParam0]);
			break;
	}
	if (!iLocal_1133)
	{
		if (iLocal_1157)
		{
			if (iLocal_1040[iParam0] != 3 && iLocal_1040[iParam0] != 4)
			{
				iLocal_1040[iParam0] = 3;
			}
		}
		else if (func_124(iLocal_1046[iParam0]))
		{
			iLocal_1133 = 1;
		}
	}
	else if (iLocal_1040[iParam0] < 5)
	{
		if (!PED::IS_PED_INJURED(iLocal_1046[iParam0]))
		{
			if (is_ped_using_any_scenario(iLocal_1046[iParam0]))
			{
				_0xF1C03A5352243A30(iLocal_1046[iParam0]);
			}
			task_clear_defensive_area(iLocal_1046[iParam0]);
			set_ped_combat_movement(iLocal_1046[iParam0], 2);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_1046[iParam0], 13, true);
		}
		iLocal_1040[iParam0] = 5;
	}
}

Vector3 func_135()
{
	Vector3 vVar0;
	
	return vVar0;
}

bool func_136(int iParam0, auto uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, char* sParam7, int iParam8)
{
	if (iParam3 == 0)
	{
		iParam3 = get_player_index();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!PED::IS_PED_INJURED(iParam0))
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
		if (!GAMEPLAY::IS_BIT_SET(*uParam1.f_6, 2))
		{
			if (does_blip_exist(*uParam1))
			{
				if (!is_string_null_or_empty(sParam7))
				{
					begin_text_command_set_blip_name("MCUSTBLIP");
					add_text_component_substring_player_name(sParam7);
					end_text_command_set_blip_name(*uParam1);
				}
				GAMEPLAY::SET_BIT(uParam1.f_6, 2);
			}
		}
		if (is_ped_in_any_vehicle(iParam0, 0))
		{
			*uParam1.f_1 = _0x56176892826A4FE8(iParam0);
			if (!GAMEPLAY::IS_BIT_SET(*uParam1.f_6, 3))
			{
				if (does_blip_exist(*uParam1.f_1))
				{
					set_blip_priority(*uParam1.f_1, 7);
					GAMEPLAY::SET_BIT(uParam1.f_6, 3);
				}
			}
		}
		else if (does_blip_exist(*uParam1.f_1))
		{
			*uParam1.f_1 = 0;
			GAMEPLAY::CLEAR_BIT(uParam1.f_6, 3);
		}
	}
	else
	{
		return true;
	}
	return false;
}

void func_137()
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1045))
	{
		vLocal_1304 = {get_entity_coords(iLocal_1045, 0)};
	}
	switch (iLocal_1039)
	{
		case 0:
			if (!is_entity_dead(iLocal_1045, 0))
			{
				if (is_vehicle_driveable(iLocal_1311, 0) && !is_entity_dead(iLocal_1049[0], 0))
				{
					if (!is_ped_in_vehicle(iLocal_1045, iLocal_1311, 0))
					{
						if (get_script_task_status(iLocal_1045, -1794415470) != 1)
						{
							if (!iLocal_1133 && !iLocal_1157)
							{
								task_enter_vehicle(iLocal_1045, iLocal_1311, 30000, true, 1f, 1, 0);
							}
							else
							{
								task_enter_vehicle(iLocal_1045, iLocal_1311, 30000, true, 2f, 1, 0);
							}
							if (!func_52(&iLocal_1341))
							{
								func_49(&iLocal_1341);
							}
							else
							{
								func_50(&iLocal_1341);
							}
						}
						if (!iLocal_1159)
						{
							if (func_52(&iLocal_1341))
							{
								if (func_46(&iLocal_1341) > 3.5f)
								{
									if (!PED::IS_PED_INJURED(iLocal_1045))
									{
										func_29(&uLocal_1363, 4, iLocal_1045, "OJAva_TARGET", 0, 1);
										if (func_6(&uLocal_1363, "OJASAUD", "OJASva_TARG", 8, 0, 0, 0))
										{
											iLocal_1159 = 1;
										}
									}
								}
							}
						}
						if (func_140(iLocal_1045))
						{
							func_3();
							iLocal_1039 = 4;
						}
					}
					else
					{
						iLocal_1136 = true;
						iLocal_1039 = 1;
					}
				}
				else
				{
					iLocal_1039 = 4;
				}
			}
			break;
		
		case 1:
			if (!iLocal_1159)
			{
				if (!PED::IS_PED_INJURED(iLocal_1045))
				{
					func_29(&uLocal_1363, 4, iLocal_1045, "OJAva_TARGET", 0, 1);
					if (func_6(&uLocal_1363, "OJASAUD", "OJASva_TARG", 8, 0, 0, 0))
					{
						iLocal_1159 = 1;
					}
				}
			}
			if (!iLocal_1178)
			{
				if (func_139())
				{
					if (func_24(iLocal_1045, PLAYER::PLAYER_PED_ID(), 1) <= 5f && !func_22())
					{
						if (func_30(25f, 1) == 0)
						{
							if (func_138())
							{
								iLocal_1178 = 1;
							}
						}
					}
				}
			}
			break;
		
		case 4:
			if (!is_entity_dead(iLocal_1045, 0))
			{
				if (is_ped_in_vehicle(iLocal_1045, iLocal_1311, 0))
				{
					if (get_script_task_status(iLocal_1045, -828834893) != 1)
					{
						task_leave_any_vehicle(iLocal_1045, 0, 256);
					}
				}
				else if (!iLocal_1163)
				{
					set_ped_max_move_blend_ratio(iLocal_1045, 2f);
					clear_sequence_task(&iVar0);
					open_sequence_task(&iVar0);
					task_play_anim(false, "oddjobs@assassinate@hotel@", "alert_gunshot", 8f, -4f, 1000, 0, 0, 0, 0, 0);
					task_smart_flee_ped(false, iLocal_1044, 200f, -1, 0, 0);
					close_sequence_task(iVar0);
					if (!is_entity_dead(iLocal_1045, 0))
					{
						task_perform_sequence(iLocal_1045, iVar0);
					}
					clear_sequence_task(&iVar0);
					iLocal_1163 = true;
				}
				else if (get_script_task_status(iLocal_1045, 1435919172) != 1)
				{
					task_smart_flee_ped(iLocal_1045, iLocal_1044, 200f, -1, 0, 0);
				}
				if (!iLocal_1178)
				{
					if (!func_22() && !is_message_being_displayed())
					{
						func_6(&uLocal_1363, "OJASAUD", "OJASva_TARG2", 9, 0, 0, 0);
						iLocal_1178 = 1;
					}
				}
			}
			break;
	}
	if (!iLocal_1133)
	{
		if (iLocal_1157)
		{
		}
		else if (func_124(iLocal_1045) || iLocal_1187)
		{
			iVar1 = func_30(1116471296, 1);
			if (iVar1 != 0)
			{
				func_103(get_entity_coords(iVar1, 1), 1097859072, 1116471296);
			}
			if (!func_102())
			{
				iLocal_1133 = 1;
			}
		}
	}
}

bool func_138()
{
	switch (iLocal_1213)
	{
		case 0:
			if (!func_22())
			{
				func_27(&uLocal_1363, "OJASAUD", "OJASva_PANIC", "OJASva_PANIC_1", 8, 0, 0);
				func_50(&iLocal_1341);
				iLocal_1213++;
			}
			break;
		
		case 1:
			if (!func_22() && func_46(&iLocal_1341) > 7f)
			{
				func_27(&uLocal_1363, "OJASAUD", "OJASva_PANIC", "OJASva_PANIC_2", 8, 0, 0);
				func_50(&iLocal_1341);
				iLocal_1213++;
			}
			break;
		
		case 2:
			if (!func_22() && func_46(&iLocal_1341) > 8f)
			{
				func_27(&uLocal_1363, "OJASAUD", "OJASva_PANIC", "OJASva_PANIC_3", 8, 0, 0);
				return true;
			}
			break;
	}
	return false;
}

bool func_139()
{
	int iVar0;
	
	if (is_vehicle_driveable(iLocal_1311, 0))
	{
		iVar0 = get_ped_in_vehicle_seat(iLocal_1311, -1);
		if (iVar0 == 0 || (iVar0 != 0 && PED::IS_PED_INJURED(iVar0)))
		{
			iVar0 = get_ped_in_vehicle_seat(iLocal_1311, false);
			if (iVar0 == 0 || (iVar0 != 0 && PED::IS_PED_INJURED(iVar0)))
			{
				iVar0 = get_ped_in_vehicle_seat(iLocal_1311, 2);
				if (iVar0 == 0 || (iVar0 != 0 && PED::IS_PED_INJURED(iVar0)))
				{
					return true;
				}
			}
		}
	}
	return false;
}

bool func_140(int iParam0)
{
	int iVar0;
	
	if ((iLocal_1133 || iLocal_1157) || iLocal_1158)
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (func_22())
			{
				stop_scripted_conversation(false);
			}
			if (!is_ped_in_any_vehicle(iParam0, 0))
			{
				if (!iLocal_1163)
				{
					clear_sequence_task(&iVar0);
					open_sequence_task(&iVar0);
					task_play_anim(false, "oddjobs@assassinate@hotel@", "alert_gunshot", 8f, -4f, 1000, 0, 0, 0, 0, 0);
					task_smart_flee_ped(false, iLocal_1044, 200f, -1, 0, 0);
					close_sequence_task(iVar0);
					if (!is_entity_dead(iLocal_1045, 0))
					{
						task_perform_sequence(iLocal_1045, iVar0);
					}
					clear_sequence_task(&iVar0);
					iLocal_1163 = true;
					return true;
				}
			}
		}
	}
	return false;
}

void func_141()
{
	if (!iLocal_1164)
	{
		if (iLocal_1030 > 15)
		{
			trigger_music_event("ASS1_ALERT");
			iLocal_1164 = 1;
		}
	}
	if (!iLocal_1165)
	{
		if (iLocal_1133 && !func_22())
		{
			func_415();
			iLocal_1165 = 1;
			if (!iLocal_1164)
			{
				trigger_music_event("ASS1_ALERT");
				iLocal_1164 = 1;
			}
		}
	}
	func_414();
	switch (iLocal_1030)
	{
		case 3:
			if (func_477())
			{
				iLocal_1030 = 4;
				break;
			}
			func_413();
			func_411();
			break;
		
		case 4:
			if (func_477())
			{
				if (func_476())
				{
					iLocal_1152 = 1;
				}
				iLocal_1141 = true;
			}
			func_410();
			func_409();
			func_408();
			func_407(1);
			func_406();
			func_485(&Local_360, 2);
			iLocal_1030 = 5;
			break;
		
		case 5:
			if (func_405())
			{
				iLocal_1030 = 6;
			}
			break;
		
		case 6:
			func_404();
			func_403();
			if (iLocal_1141)
			{
				if (Global_101154.f_18653.f_5 != 0f)
				{
					func_51(&iLocal_1335, Global_101154.f_18653.f_5);
				}
				iLocal_1208 = func_471();
				if (Global_85788)
				{
					if (iLocal_1208 <= 2)
					{
						iLocal_1208++;
					}
				}
				if (iLocal_1208 == 0)
				{
					func_402();
				}
				else if (iLocal_1208 == 1)
				{
					func_401();
				}
				else if (iLocal_1208 == 2)
				{
					func_397();
				}
			}
			else
			{
				if (!func_52(&iLocal_1335))
				{
					func_49(&iLocal_1335);
					Global_101154.f_18653.f_5 = 0f;
				}
				iLocal_1030 = 7;
			}
			break;
		
		case 7:
			func_391();
			func_376();
			break;
		
		case 8:
			func_343();
			break;
		
		case 9:
			func_391();
			func_342();
			func_262();
			break;
		
		case 10:
			func_342();
			func_258();
			break;
		
		case 11:
			func_244();
			func_243();
			break;
		
		case 12:
			func_242();
			func_243();
			break;
		
		case 13:
			func_238();
			func_243();
			break;
		
		case 15:
			func_236();
			break;
		
		case 16:
			func_233();
			break;
		
		case 17:
			func_227();
			break;
		
		case 18:
			func_142();
			break;
	}
}

void func_142()
{
	clear_player_wanted_level(player_id());
	func_143();
}

void func_143()
{
	func_226();
	switch (iLocal_1214)
	{
		case 0:
			if (!iLocal_377)
			{
				if (iLocal_1031 == 1)
				{
					iLocal_375 = true;
					func_225();
				}
				Global_101154.f_18653.f_5 = func_46(&iLocal_1335);
				fLocal_372 = Global_101154.f_18653.f_5;
				func_218();
				iLocal_377 = 1;
				iLocal_1214 = 1;
			}
			break;
		
		case 1:
			if (!iLocal_1186)
			{
				play_mission_complete_audio("FRANKLIN_BIG_01");
				iLocal_1186 = 1;
			}
			if (func_214(&uLocal_388, 1, 0) && _0x6F259F82D873B8B8())
			{
				func_213(&uLocal_1540, 0, 0, 0, 1);
				func_212(&uLocal_1540, "ASS_VA_CONT", 2, 215, 1, 1, 0);
				func_212(&uLocal_1540, "ES_XPAND", 2, 216, 1, 1, 0);
				settimera(0);
				iLocal_1214 = 2;
			}
			break;
		
		case 2:
			if (func_189(&uLocal_388, 0, 1065353216, 0, 0, 0))
			{
				iLocal_1184 = true;
			}
			if (!iLocal_1184)
			{
				func_181(&uLocal_1540, 1128792064, 1, 0, 1, 1065353216);
			}
			if (is_control_just_pressed(2, 215) || is_disabled_control_just_pressed(2, 200))
			{
				if (!iLocal_1184)
				{
					iLocal_1184 = true;
					func_180(&uLocal_388);
				}
			}
			if (iLocal_1184)
			{
				if (func_189(&uLocal_388, 0, 1065353216, 0, 0, 0))
				{
					func_178(&uLocal_388);
					Global_101154.f_18653++;
					func_177();
					func_148(Local_57);
					func_146(0, 0);
					func_144();
					func_478();
				}
			}
			break;
	}
}

void func_144()
{
	func_145();
}

bool func_145()
{
	if (func_40(0))
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

void func_146(int iParam0, int iParam1)
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
		if ((func_40(0) && Global_69735.f_1 == 1) && func_147(Global_69735))
		{
		}
		else
		{
			Global_55749 = 1;
		}
	}
	if (Global_101154.f_7775 || func_40(0))
	{
		iVar0 = func_39();
		uVar1 = Global_82363[iVar0 /*5*/];
		uVar2 = Global_69758.f_109[uVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_101154.f_7775)
			{
			}
			return;
		}
		if (GAMEPLAY::IS_BIT_SET(Global_82363[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (GAMEPLAY::IS_BIT_SET(Global_82363[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		GAMEPLAY::SET_BIT(&(Global_82363[iVar0 /*5*/].f_1), 4);
		GAMEPLAY::SET_BIT(&Global_69737, true);
		Global_69753 = uVar2;
		Global_69754 = GAMEPLAY::GET_GAME_TIMER();
	}
}

bool func_147(int iParam0)
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

void func_148(struct<25> Param0, auto uParam1, auto uParam2, auto uParam3, auto uParam4, auto uParam5, auto uParam6, auto uParam7, auto uParam8, auto uParam9, auto uParam10, auto uParam11, auto uParam12, auto uParam13, auto uParam14)
{
	Vector3 fVar0;
	
	fVar0 = 1f + func_176();
	fVar0 *= Param0.f_23;
	if (func_111(Global_101154.f_18653.f_1, 4194304))
	{
		fVar0 += Param0.f_24;
	}
	func_149(func_13(), 96, round(fVar0), 0, 0);
}

void func_149(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
	func_150(Global_101154.f_32575[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
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
		STATS::STAT_GET_INT(iVar1, &iVar0, -1);
		iVar0 += iParam2;
		STATS::STAT_SET_INT(iVar1, iVar0, 1);
	}
}

bool func_150(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_175();
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
					func_174(99, 1);
					func_173(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_173(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_173(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_158(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_157(5))
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
							func_173(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_173(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_173(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_157(1))
					{
						fVar0 = 0f;
						iVar1 = true;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_173(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_173(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_173(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_173(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_173(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_173(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_173(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_173(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_173(joaat("sp2_money_spent_property"), iParam3);
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
									func_173(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_173(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_173(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_173(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_173(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_173(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_157(0))
							{
								fVar0 = 0f;
								iVar1 = false;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_173(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_173(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_173(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_173(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_173(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_173(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_156(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_174(95, iParam3);
					break;
				
				case 1:
					func_174(97, iParam3);
					break;
				
				case 2:
					func_174(96, iParam3);
					break;
			}
			func_174(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = floor(fVar0 * to_float(iParam3));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_153(iVar1);
		return true;
	}
	else if (fVar0 != 1f)
	{
		func_153(iVar1);
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
					func_173(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_173(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_173(joaat("sp2_total_cash_earned"), iParam3);
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
	func_152(iParam0);
	if (Global_35711 == 15)
	{
		func_151(0);
	}
	return true;
}

void func_151(int iParam0)
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

void func_152(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_52923[iParam0];
	switch (iParam0)
	{
		case 0:
			STATS::STAT_SET_INT(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			STATS::STAT_SET_INT(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			STATS::STAT_SET_INT(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_153(int iParam0)
{
	int iVar0;
	char[64] cVar1;
	
	iVar0 = false;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (GAMEPLAY::IS_BIT_SET(Global_101154.f_25089.f_471, iParam0))
		{
			iVar0 = true;
			GAMEPLAY::CLEAR_BIT(&(Global_101154.f_25089.f_471), iParam0);
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(Global_101154.f_25089.f_471, iParam0) || GAMEPLAY::IS_BIT_SET(Global_2097152[func_155() /*10375*/].f_7704.f_10, iParam0))
	{
		iVar0 = true;
		GAMEPLAY::CLEAR_BIT(&(Global_101154.f_25089.f_471), iParam0);
		GAMEPLAY::CLEAR_BIT(&(Global_2097152[func_155() /*10375*/].f_7704.f_10), iParam0);
	}
	if (iVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		_set_notification_text_entry("COUP_RED");
		_add_text_component_item_string(func_154(iParam0));
		_set_notification_message(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_154(int iParam0)
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

int func_155()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_156(int iParam0)
{
	func_174(93, iParam0);
	func_174(29, iParam0);
	func_174(30, iParam0);
}

int func_157(int iParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return GAMEPLAY::IS_BIT_SET(Global_101154.f_25089.f_471, iParam0);
	}
	return GAMEPLAY::IS_BIT_SET(Global_2097152[func_155() /*10375*/].f_7704.f_10, iParam0);
}

bool func_158(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = false;
	if (has_achievement_been_passed(27))
	{
		return false;
	}
	if (STATS::STAT_GET_INT(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 += iVar0;
	}
	if (STATS::STAT_GET_INT(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 += iVar0;
	}
	if (STATS::STAT_GET_INT(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 += iVar0;
	}
	if (iParam0)
	{
	}
	iVar2 = 0;
	STATS::STAT_GET_INT(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && iVar2 / 2000000 != iVar1 / 2000000)
	{
		STATS::STAT_SET_INT(joaat("num_cash_spent"), iVar1, 1);
		func_172(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return false;
	}
	func_159(27, 1);
	return true;
}

int func_159(int iParam0, int iParam1)
{
	if (iParam0 >= 70)
	{
		return 0;
	}
	return func_160(iParam0, iParam1);
}

bool func_160(int iParam0, int iParam1)
{
	if (func_18(14) && !func_171(iParam0))
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
	if (func_170(&Global_2563627))
	{
		if (func_168(&Global_2563627, iParam0))
		{
			return false;
		}
		if (func_161(&Global_2563627, iParam0))
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

bool func_161(auto uParam0, int iParam1)
{
	int iVar0;
	var[] uVar1 = new var[70];
	
	if (has_achievement_been_passed(iParam1))
	{
		return false;
	}
	if (func_18(14) && !func_171(iParam1))
	{
		return false;
	}
	if (func_168(uParam0, iParam1))
	{
		return false;
	}
	if (func_167(uParam0) < 0f)
	{
		func_166(uParam0, 0);
	}
	func_164(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0 - 1)
	{
		uVar1[iVar0 + 1] = *uParam0[iVar0];
		iVar0++;
	}
	func_162(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		*uParam0[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return true;
}

bool func_162(auto uParam0, int iParam1)
{
	int iVar0;
	
	if (has_achievement_been_passed(iParam1))
	{
		return false;
	}
	if (func_18(14) && !func_171(iParam1))
	{
		return false;
	}
	if (func_168(uParam0, iParam1))
	{
		return false;
	}
	if (func_167(uParam0) < 0f)
	{
		func_166(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_163(uParam0, iVar0))
		{
			*uParam0[iVar0] = iParam1;
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_163(auto uParam0, int iParam1)
{
	return *uParam0[iParam1] == 70;
}

void func_164(auto uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_165(uParam0, iVar0);
		iVar0++;
	}
	func_166(uParam0, Global_2563626 - 0.5f);
}

void func_165(auto uParam0, int iParam1)
{
	*uParam0[iParam1] = 70;
}

void func_166(auto uParam0, float fParam1)
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

auto func_167(auto uParam0)
{
	return *uParam0.f_72;
}

int func_168(auto uParam0, int iParam1)
{
	return func_169(uParam0, iParam1) != -1;
}

int func_169(auto uParam0, int iParam1)
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

int func_170(auto uParam0)
{
	return *uParam0.f_71 == 1;
}

bool func_171(int iParam0)
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

int func_172(int iParam0, int iParam1)
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

void func_173(int iParam0, int iParam1)
{
	int iVar0;
	
	STATS::STAT_GET_INT(iParam0, &iVar0, -1);
	iVar0 += iParam1;
	STATS::STAT_SET_INT(iParam0, iVar0, 1);
}

void func_174(int iParam0, int iParam1)
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
		STATS::STAT_GET_INT(Global_51491[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 += iParam1;
		STATS::STAT_SET_INT(Global_51491[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_175()
{
	int iVar0;
	
	if (network_is_signed_in())
	{
		STATS::STAT_GET_INT(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_52923[0] == iVar0)
		{
			Global_52923[0] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_52923[1] == iVar0)
		{
			Global_52923[1] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_52923[2] == iVar0)
		{
			Global_52923[2] = iVar0;
		}
	}
}

float func_176()
{
	float fVar0;
	
	fVar0 = 0f;
	if (func_111(Global_101154.f_18653.f_1, 8192))
	{
		fVar0 += 0.2f;
	}
	if (func_111(Global_101154.f_18653.f_1, 16384))
	{
		fVar0 += 0.2f;
	}
	if (func_111(Global_101154.f_18653.f_1, 32768))
	{
		fVar0 += 0.2f;
	}
	if (func_111(Global_101154.f_18653.f_1, 65536))
	{
		fVar0 += 0.1f;
	}
	if (func_111(Global_101154.f_18653.f_1, 131072))
	{
		fVar0 += 0.1f;
	}
	if (func_111(Global_101154.f_18653.f_1, 262144))
	{
		fVar0 += 0.1f;
	}
	if (func_111(Global_101154.f_18653.f_1, 524288))
	{
		fVar0 += 0.333f;
	}
	if (func_111(Global_101154.f_18653.f_1, 1048576))
	{
		fVar0 += 0.333f;
	}
	if (func_111(Global_101154.f_18653.f_1, 2097152))
	{
		fVar0 += 0.333f;
	}
	return fVar0;
}

void func_177()
{
	func_485(&(Global_101154.f_18653.f_1), 2048);
}

void func_178(auto uParam0)
{
	if (*uParam0.f_1 != 0)
	{
		set_scaleform_movie_as_no_longer_needed(uParam0.f_1);
		*uParam0.f_1 = 0;
	}
	if (*uParam0.f_562 && *uParam0.f_4 != 0)
	{
		if (GAMEPLAY::IS_PC_VERSION())
		{
			_push_scaleform_movie_function(*uParam0.f_4, "TOGGLE_MOUSE_BUTTONS");
			_push_scaleform_movie_function_parameter_bool(false);
			_pop_scaleform_movie_function_void();
		}
		set_scaleform_movie_as_no_longer_needed(uParam0.f_4);
		*uParam0.f_4 = 0;
	}
	if (*uParam0.f_564)
	{
		set_no_loading_screen(0);
		*uParam0.f_564 = 0;
	}
	if (!Global_69757)
	{
		if (!is_player_dead(get_player_index()))
		{
			if (!Global_69758)
			{
				if (is_screen_faded_out() && !func_40(0))
				{
					do_screen_fade_in(800);
				}
			}
		}
	}
	func_179(0);
}

void func_179(int iParam0)
{
	Global_69749 = iParam0;
	Global_69750 = iParam0;
}

void func_180(auto uParam0)
{
	if (*uParam0.f_561 || *uParam0.f_572 <= *uParam0.f_558)
	{
		*uParam0.f_561 = 0;
		*uParam0.f_558 = *uParam0.f_572 - 1;
	}
}

void func_181(auto uParam0, Vector3 fParam1, int iParam2, int iParam3, int iParam4, Vector3 fParam5)
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
	if (!func_188(uParam0))
	{
		return;
	}
	hide_loading_on_fade_this_frame();
	_set_2d_layer(iParam2);
	if (!func_187(*uParam0.f_1, 256) || (func_187(*uParam0.f_1, 8192) && _0x6CD79468A1E595C6(2)))
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
			_push_scaleform_movie_function_parameter_bool(func_187(*uParam0.f_1, 4096));
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
							func_186(sVar3);
						}
						iVar7++;
					}
					if (!is_string_null_or_empty(*uParam0.f_2[iVar6 /*15*/]))
					{
						func_185(*uParam0.f_2[iVar6 /*15*/]);
					}
					if (GAMEPLAY::IS_PC_VERSION())
					{
						if (func_187(*uParam0.f_1, 4096))
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
		fVar8 = func_184(iParam4, func_184(func_187(*uParam0.f_1, 32), 1f, 0f), -1f);
		_push_scaleform_movie_function(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		_push_scaleform_movie_function_parameter_float(fVar8);
		_pop_scaleform_movie_function_void();
		_push_scaleform_movie_function(*uParam0, "SET_BACKGROUND_COLOUR");
		_push_scaleform_movie_function_parameter_float(0f);
		_push_scaleform_movie_function_parameter_float(0f);
		_push_scaleform_movie_function_parameter_float(0f);
		_push_scaleform_movie_function_parameter_float(80f);
		_pop_scaleform_movie_function_void();
		func_183(uParam0.f_1, 256);
		func_182(uParam0.f_1, 128);
	}
	draw_scaleform_movie_fullscreen(*uParam0, 255, 255, 255, false, 0);
}

void func_182(auto uParam0, int iParam1)
{
	*uParam0 -= (*uParam0 && iParam1);
}

void func_183(auto uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

float func_184(int iParam0, float fParam1, float fParam2)
{
	if (iParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_185(char* sParam0)
{
	_begin_text_component(sParam0);
	_end_text_component();
}

void func_186(char* sParam0)
{
	_0xE83A3E3557A56640(sParam0);
}

int func_187(auto uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_188(auto uParam0)
{
	if (*uParam0 != 0)
	{
		if (has_scaleform_movie_loaded(*uParam0))
		{
			func_183(uParam0.f_1, 1);
			return true;
		}
	}
	return false;
}

int func_189(auto uParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (GAMEPLAY::GET_FRAME_COUNT() == *uParam0.f_574)
	{
		return *uParam0.f_575;
	}
	*uParam0.f_574 = GAMEPLAY::GET_FRAME_COUNT();
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (is_ped_dead_or_dying(get_player_ped(get_player_index()), 1))
		{
			*uParam0.f_575 = 1;
			return true;
		}
		if (is_ped_being_arrested(get_player_ped(get_player_index())))
		{
			*uParam0.f_575 = 1;
			return true;
		}
	}
	if (!*uParam0.f_564)
	{
		if (is_screen_faded_out() || is_screen_fading_out())
		{
			set_no_loading_screen(1);
			*uParam0.f_564 = 1;
		}
	}
	if (is_player_playing(player_id()))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (is_special_ability_active(player_id()))
			{
				special_ability_deactivate(player_id());
			}
		}
	}
	hide_hud_component_this_frame(7);
	hide_hud_component_this_frame(8);
	hide_hud_component_this_frame(9);
	hide_hud_component_this_frame(6);
	hide_hud_component_this_frame(19);
	CONTROLS::DISABLE_CONTROL_ACTION(2, 19, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 37, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 21, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 28, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 29, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 171, 1);
	func_209();
	if (_is_input_disabled(2))
	{
		if (_is_player_cam_control_disabled() || (is_screen_faded_out() && !is_screen_fading_in()))
		{
			_show_cursor_this_frame();
		}
	}
	Global_36261 = 1;
	if (!*uParam0.f_563)
	{
		switch (func_16(get_player_ped(get_player_index())))
		{
			case 1:
				_start_screen_effect("SuccessFranklin", 1000, 0);
				break;
			
			case 2:
				_start_screen_effect("SuccessTrevor", 1000, 0);
				break;
			
			default:
				_start_screen_effect("SuccessMichael", 1000, 0);
				break;
		}
		*uParam0.f_563 = 1;
	}
	if (*uParam0.f_558 == 0)
	{
		*uParam0.f_558 = *uParam0.f_572 + floor(15000f * fParam2);
	}
	if (iParam4 && *uParam0.f_572 >= *uParam0.f_558 - 1500)
	{
		*uParam0.f_558 = *uParam0.f_572 + 3000;
	}
	if (*uParam0.f_560 == 0f)
	{
		*uParam0.f_560 += func_208(30f);
		*uParam0.f_560 += IntToFloat(*uParam0.f_56) * func_208(25f);
		if (*uParam0.f_56 > 0)
		{
			*uParam0.f_560 += func_208(25f * 0.5f);
		}
		if (*uParam0.f_549)
		{
			*uParam0.f_560 += func_208(30f) - func_208(2f);
		}
	}
	iVar0 = true;
	while (iVar0)
	{
		func_179(1);
		*uParam0.f_572 += round(0f + 1000f * timestep());
		func_192(uParam0, fParam2, iParam3);
		if (IntToFloat(*uParam0.f_572) > IntToFloat(*uParam0.f_558 + 666) - 15000f * fParam2)
		{
			if (*uParam0.f_30 < 1f)
			{
				*uParam0.f_30 += 0f + 1f / 0.225f * timestep();
			}
		}
		*uParam0.f_30 = func_191(*uParam0.f_30, 0f, 1f);
		if (*uParam0.f_572 > *uParam0.f_558 - 333)
		{
			if (!*uParam0.f_561)
			{
				if (*uParam0.f_565)
				{
					*uParam0.f_565 = 0;
					*uParam0.f_566 = 0;
					*uParam0.f_573 = 0.75f;
					_push_scaleform_movie_function(*uParam0.f_1, "ROLL_UP_BACKGROUND");
					_pop_scaleform_movie_function_void();
				}
				*uParam0.f_547 -= 0f + 1f / 1.215f * timestep();
			}
		}
		*uParam0.f_547 = func_191(*uParam0.f_547, 0f, 1f);
		if ((*uParam0.f_547 <= 0.7f && !*uParam0.f_545) && *uParam0.f_1 != 0)
		{
			_push_scaleform_movie_function(*uParam0.f_1, "TRANSITION_OUT");
			_pop_scaleform_movie_function_void();
			*uParam0.f_546 = *uParam0.f_572;
			*uParam0.f_545 = 1;
		}
		if (*uParam0.f_572 > *uParam0.f_558 - 333)
		{
			if (!*uParam0.f_561)
			{
				if (*uParam0.f_548 < 1f)
				{
					*uParam0.f_548 += 0f + 1f / 0.3f * timestep();
				}
			}
		}
		*uParam0.f_548 = func_191(*uParam0.f_548, 0f, 1f);
		if (*uParam0.f_562)
		{
			if (_0x6CD79468A1E595C6(2))
			{
				if (has_scaleform_movie_loaded(*uParam0.f_4))
				{
					if (!*uParam0.f_567)
					{
						func_190(uParam0, (!*uParam0.f_565 && *uParam0.f_56 > 0));
					}
				}
			}
		}
		if (is_control_just_pressed(2, 216) && *uParam0.f_558 > *uParam0.f_572 + 333)
		{
			if (((!*uParam0.f_566 && *uParam0.f_56 != 0) && has_scaleform_movie_loaded(*uParam0.f_4)) && IntToFloat(*uParam0.f_572) > IntToFloat(*uParam0.f_558 + 1165) - 15000f * fParam2)
			{
				if (!*uParam0.f_565)
				{
					_push_scaleform_movie_function(*uParam0.f_1, "ROLL_DOWN_BACKGROUND");
					_pop_scaleform_movie_function_void();
					*uParam0.f_565 = 1;
					*uParam0.f_573 = 0.75f;
					if (*uParam0.f_572 > *uParam0.f_558 - 5000)
					{
						*uParam0.f_558 = *uParam0.f_572 + 5000;
					}
				}
				else if (iParam5)
				{
					_push_scaleform_movie_function(*uParam0.f_1, "ROLL_UP_BACKGROUND");
					_pop_scaleform_movie_function_void();
					*uParam0.f_565 = 0;
					*uParam0.f_573 = 0.75f;
				}
				func_190(uParam0, (!*uParam0.f_565 && *uParam0.f_56 > 0));
			}
		}
		if ((*uParam0.f_565 || *uParam0.f_566) && *uParam0.f_56 != 0)
		{
			if (IntToFloat(*uParam0.f_572) > IntToFloat(*uParam0.f_558 + 1165) - 15000f * fParam2)
			{
				if (*uParam0.f_566 && !*uParam0.f_565)
				{
					*uParam0.f_565 = 1;
					*uParam0.f_573 = 0.75f;
					_push_scaleform_movie_function(*uParam0.f_1, "ROLL_DOWN_BACKGROUND");
					_pop_scaleform_movie_function_void();
				}
				*uParam0.f_559 = func_191(*uParam0.f_559 + 1f / 0.3f * *uParam0.f_573 * timestep(), 0f, 1f);
				*uParam0.f_573 = func_191(*uParam0.f_573 + 0.07f, 0.75f, 1.15f);
			}
		}
		else
		{
			*uParam0.f_559 = func_191(*uParam0.f_559 - 1f / 0.3f * *uParam0.f_573 * 0.01f * timestep(), 0f, 1f);
			*uParam0.f_573 = func_191(*uParam0.f_573 + 0.07f, 0.75f, 1.15f);
		}
		if (*uParam0.f_572 > *uParam0.f_558)
		{
			if (*uParam0.f_561)
			{
				if (!*uParam0.f_567)
				{
					if (is_control_just_pressed(2, 215))
					{
						*uParam0.f_561 = 0;
					}
				}
			}
			else if (*uParam0.f_572 - *uParam0.f_546 > 1000 && *uParam0.f_545)
			{
				iVar0 = false;
			}
		}
		*uParam0.f_575 = !iVar0;
		if (iParam1)
		{
			wait(0);
		}
		else
		{
			if (!iVar0)
			{
				func_179(0);
			}
			return !iVar0;
		}
	}
	func_179(0);
	return true;
}

void func_190(auto uParam0, int iParam1)
{
	_push_scaleform_movie_function(*uParam0.f_4, "CLEAR_ALL");
	_pop_scaleform_movie_function_void();
	if (GAMEPLAY::IS_PC_VERSION())
	{
		_push_scaleform_movie_function(*uParam0.f_4, "TOGGLE_MOUSE_BUTTONS");
		_push_scaleform_movie_function_parameter_bool(true);
		_pop_scaleform_movie_function_void();
	}
	_push_scaleform_movie_function(*uParam0.f_4, "SET_DATA_SLOT");
	_push_scaleform_movie_function_parameter_int(false);
	func_186(_get_control_action_name(2, 215, true));
	func_185("ES_HELP");
	if (GAMEPLAY::IS_PC_VERSION())
	{
		_push_scaleform_movie_function_parameter_bool(true);
		_push_scaleform_movie_function_parameter_int(215);
	}
	_pop_scaleform_movie_function_void();
	if (iParam1)
	{
		_push_scaleform_movie_function(*uParam0.f_4, "SET_DATA_SLOT");
		_push_scaleform_movie_function_parameter_int(true);
		func_186(_get_control_action_name(2, 216, true));
		func_185("ES_XPAND");
		if (GAMEPLAY::IS_PC_VERSION())
		{
			_push_scaleform_movie_function_parameter_bool(true);
			_push_scaleform_movie_function_parameter_int(216);
		}
		_pop_scaleform_movie_function_void();
	}
	_push_scaleform_movie_function(*uParam0.f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	_pop_scaleform_movie_function_void();
}

float func_191(float fParam0, float fParam1, float fParam2)
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

void func_192(auto uParam0, float fParam1, int iParam2)
{
	int iVar0;
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
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	float fVar18;
	float fVar19;
	float fVar20;
	float fVar21;
	float fVar22;
	char[16] cVar23;
	char[32] cVar27;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	float fVar39;
	float fVar40;
	float fVar41;
	float fVar42;
	float fVar43;
	
	iVar0 = round(*uParam0.f_547 * 255f);
	fVar1 = func_207() * 0.25f;
	if (has_scaleform_movie_loaded(*uParam0.f_1))
	{
		if (*uParam0.f_30 >= 0f)
		{
			if (!*uParam0.f_2)
			{
				_push_scaleform_movie_function(*uParam0.f_1, "SHOW_MISSION_PASSED_MESSAGE");
				func_185(uParam0.f_5);
				func_185(uParam0.f_13);
				_push_scaleform_movie_function_parameter_int(100);
				_push_scaleform_movie_function_parameter_bool(true);
				_push_scaleform_movie_function_parameter_int(*uParam0.f_56);
				_push_scaleform_movie_function_parameter_bool(iParam2);
				_push_scaleform_movie_function_parameter_int(69);
				_pop_scaleform_movie_function_void();
				*uParam0.f_2 = 1;
			}
			if ((*uParam0.f_56 > 0 && !*uParam0.f_3) && *uParam0.f_572 > 600)
			{
				_push_scaleform_movie_function(*uParam0.f_1, "TRANSITION_UP");
				_push_scaleform_movie_function_parameter_float(0.15f);
				_push_scaleform_movie_function_parameter_bool(true);
				_pop_scaleform_movie_function_void();
				*uParam0.f_3 = 1;
			}
		}
		func_206();
		draw_scaleform_movie_fullscreen(*uParam0.f_1, 255, 255, 255, 255, 0);
	}
	fVar2 = *uParam0.f_560 * *uParam0.f_559 * 1f - *uParam0.f_548;
	fVar3 = 0f;
	if (*uParam0.f_567)
	{
		fVar3 = 0.1388889f + func_208(2f * 2f) * *uParam0.f_568 * 1f - *uParam0.f_548;
		fVar2 += 3f * fVar3;
	}
	if (*uParam0.f_548 != 0f)
	{
		fVar4 = 0f;
		if (fVar2 < fVar4)
		{
			fVar2 = fVar4;
		}
	}
	else
	{
		fVar5 = 0f;
		if (*uParam0.f_30 >= 0.975f)
		{
			if (fVar2 < fVar5)
			{
				fVar2 = fVar5;
			}
		}
	}
	fVar1 = 0.3f * func_207();
	if (*uParam0.f_12)
	{
		fVar1 = 0.5f;
	}
	fVar6 = *uParam0 * 2f;
	fVar7 = func_205(uParam0.f_13);
	if (fVar6 < fVar7)
	{
		fVar6 = fVar7 + 3f * 0.006f;
	}
	if (_get_screen_aspect_ratio(0) < 1.4f)
	{
		fVar6 *= 1.3f;
	}
	fVar7 = func_205(uParam0.f_550);
	fVar8 = 0.119f + 0.05f / func_207() / 2.5f;
	if ((*uParam0.f_556 == 1 || *uParam0.f_556 == 0) && *uParam0.f_557 != 0)
	{
		if (fVar6 < fVar7 + 2.6f * fVar8)
		{
			fVar6 = fVar7 + 2.6f * fVar8;
		}
	}
	else if (fVar6 < fVar7 + 1.9f * fVar8)
	{
		fVar6 = fVar7 + 2f * fVar8;
	}
	fVar9 = 0.499f - fVar6 / 2f + 0.006f;
	fVar10 = 0.499f + fVar6 / 2f - 0.006f;
	set_input_exclusive(2, 215);
	set_input_exclusive(2, 216);
	set_input_exclusive(2, 200);
	CONTROLS::DISABLE_CONTROL_ACTION(2, 200, 1);
	if (*uParam0.f_562 || *uParam0.f_567)
	{
		if (IntToFloat(*uParam0.f_558) - 14000f * fParam1 < IntToFloat(*uParam0.f_572) || ((*uParam0.f_567 && *uParam0.f_559 > 0.95f) && *uParam0.f_558 - 10000 < *uParam0.f_572))
		{
			if (*uParam0.f_567)
			{
				if (*uParam0.f_570 < 0)
				{
					*uParam0.f_570 *= -1;
					*uParam0.f_570 = *uParam0.f_572 + *uParam0.f_570;
				}
				if (*uParam0.f_570 > 0)
				{
					if (*uParam0.f_570 - *uParam0.f_572 > 0)
					{
						func_81(*uParam0.f_570 - *uParam0.f_572, "TIMER_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0);
					}
					else
					{
						*uParam0.f_570 = 0;
						*uParam0.f_569 = 1;
						*uParam0.f_567 = 0;
						*uParam0.f_561 = 0;
						*uParam0.f_562 = 0;
						*uParam0.f_558 = *uParam0.f_572 + 500;
						*uParam0.f_570 = 0;
					}
				}
				if (*uParam0.f_568 < 1f)
				{
					*uParam0.f_568 += 0f + 1f / 0.166f * timestep();
					if (*uParam0.f_568 > 1f)
					{
						*uParam0.f_568 = 1f;
					}
				}
			}
			if (is_screen_faded_out())
			{
				hide_loading_on_fade_this_frame();
			}
			if ((*uParam0.f_4 != 0 && *uParam0.f_548 < 0.1f) && *uParam0.f_572 <= *uParam0.f_558)
			{
				hide_hud_component_this_frame(7);
				hide_hud_component_this_frame(8);
				hide_hud_component_this_frame(9);
				hide_hud_component_this_frame(6);
				draw_scaleform_movie_fullscreen(*uParam0.f_4, 255, 255, 255, iVar0, 0);
			}
			if (*uParam0.f_567)
			{
				CONTROLS::DISABLE_CONTROL_ACTION(0, 140, 1);
				CONTROLS::DISABLE_CONTROL_ACTION(0, 141, 1);
				CONTROLS::DISABLE_CONTROL_ACTION(0, 142, 1);
				CONTROLS::DISABLE_CONTROL_ACTION(2, 188, 1);
				if (is_disabled_control_just_pressed(2, 188))
				{
					play_sound_frontend(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					*uParam0.f_567 = 0;
					*uParam0.f_561 = 0;
					*uParam0.f_562 = 0;
					*uParam0.f_558 = *uParam0.f_572 + 500;
					*uParam0.f_569 = 3;
					*uParam0.f_570 = 0;
					play_sound_frontend(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
				CONTROLS::DISABLE_CONTROL_ACTION(2, 187, 1);
				if (is_disabled_control_just_pressed(2, 187))
				{
					play_sound_frontend(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					*uParam0.f_567 = 0;
					*uParam0.f_561 = 0;
					*uParam0.f_562 = 0;
					*uParam0.f_558 = *uParam0.f_572 + 500;
					*uParam0.f_569 = 4;
					*uParam0.f_570 = 0;
					play_sound_frontend(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
				CONTROLS::DISABLE_CONTROL_ACTION(2, 202, 1);
				if (is_disabled_control_just_pressed(2, 202))
				{
					play_sound_frontend(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					*uParam0.f_567 = 0;
					*uParam0.f_561 = 0;
					*uParam0.f_562 = 0;
					*uParam0.f_558 = *uParam0.f_572 + 500;
					*uParam0.f_569 = 2;
					*uParam0.f_570 = 0;
					play_sound_frontend(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
			}
			else if (*uParam0.f_562)
			{
				hide_hud_component_this_frame(7);
				hide_hud_component_this_frame(8);
				hide_hud_component_this_frame(9);
				hide_hud_component_this_frame(6);
				CONTROLS::DISABLE_CONTROL_ACTION(0, 140, 1);
				CONTROLS::DISABLE_CONTROL_ACTION(0, 141, 1);
				CONTROLS::DISABLE_CONTROL_ACTION(0, 142, 1);
				if (is_control_just_pressed(2, 215) || is_disabled_control_just_pressed(2, 200))
				{
					play_sound_frontend(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					*uParam0.f_562 = 0;
					*uParam0.f_561 = 0;
					*uParam0.f_558 = *uParam0.f_572 + 500;
					play_sound_frontend(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
			}
		}
	}
	get_hud_colour(1, &iVar13, &iVar14, &iVar15, &iVar16);
	set_text_colour(iVar13, iVar14, iVar15, iVar0);
	set_text_wrap(fVar9, fVar10);
	set_text_justification(0);
	set_text_scale(1f, 0.4f);
	fVar1 -= func_208(6f);
	fVar1 += func_208(30f) - func_208(2f * 2f);
	fVar11 = fVar2 - func_208(2f * 14f);
	if (fVar11 >= 0f)
	{
		fVar12 = func_191(fVar11 / 0.6f * func_208(25f), 0f, 1f);
		func_206();
		draw_rect(0.5f, fVar1 - func_208(2f - 0.5f) - 0.001388889f, fVar6, func_204(1f), iVar13, iVar14, iVar15, round(fVar12 * IntToFloat(iVar16)), 0);
	}
	else
	{
		return;
	}
	fVar1 += func_208(2f * 0.3f);
	if (*uParam0.f_56 > 0)
	{
		fVar1 += func_208(25f * 0.2f);
	}
	iVar17 = 0;
	iVar17 = 0;
	while (iVar17 < *uParam0.f_56)
	{
		fVar11 = fVar2 - fVar1 - 0.3f * func_207();
		if (fVar11 >= 0f)
		{
			fVar12 = func_191(fVar11 / 0.8f * func_208(25f), 0f, 1f);
			func_201(uParam0, iVar17, fVar1 + func_208(2f), fVar9, fVar10, round(IntToFloat(iVar0) * fVar12));
		}
		else
		{
			return;
		}
		fVar1 += func_208(25f);
		iVar17++;
	}
	if (*uParam0.f_56 > 0)
	{
		fVar1 += func_208(25f * 0.2f);
		fVar11 = fVar2 - fVar1 - 0.3f * func_207();
		if (fVar11 >= 0f)
		{
			fVar1 += func_208(2f);
			fVar12 = func_191(fVar11 / 0.6f * func_208(25f), 0f, 1f);
			func_206();
			draw_rect(0.5f, fVar1 + func_208(2f * 0.5f), fVar6, func_204(1f), iVar13, iVar14, iVar15, round(fVar12 * IntToFloat(iVar16)), 0);
		}
	}
	if (*uParam0.f_549)
	{
		fVar1 += func_208(25f * 0.2f);
		fVar11 = fVar2 - fVar1 - 0.3f * func_207();
		if (fVar11 >= 0f)
		{
			fVar12 = func_191(fVar11 / 0.8f * func_208(25f), 0f, 1f);
			set_text_colour(iVar13, iVar14, iVar15, round(fVar12 * IntToFloat(iVar0)));
			func_195(7, 0, 1, &fVar18, &fVar19, 0);
			fVar20 = fVar9;
			fVar21 = fVar10;
			if (_get_ui_language_id() == 0)
			{
				fVar20 = fVar9 + 0.119f / func_207() / 2.5f;
				fVar21 = fVar10 - 0.119f / func_207() / 2.5f;
				if (*uParam0.f_556 == 1)
				{
					fVar20 = fVar9 + 0.119f + 0.05f / func_207() / 2.5f;
					fVar21 = fVar10 - 0.119f + 0.05f / func_207() / 2.5f;
				}
			}
			if (*uParam0.f_557 == 0)
			{
				fVar20 += fVar18 * 0.28f + 0.006f / 2f;
				fVar21 += fVar18 * 0.28f + 0.006f / 2f;
			}
			set_text_wrap(fVar20, fVar21);
			set_text_justification(1);
			set_text_scale(1f, 0.4f);
			func_194(uParam0.f_550, fVar20, fVar1 + func_208(2f * 2f), 0, 0, 0);
			set_text_wrap(fVar20, fVar21);
			set_text_justification(2);
			set_text_scale(1f, 0.4f);
			set_text_centre(0);
			func_206();
			fVar22 = fVar21;
			StringCopy(&cVar23, "MPHud", 16);
			StringCopy(&cVar27, "MissionPassedMedal", 32);
			fVar22 -= fVar18 * 0.28f + 0.006f;
			set_text_wrap(fVar20, fVar22);
			set_text_colour(iVar13, iVar14, iVar15, round(fVar12 * IntToFloat(iVar0)));
			switch (*uParam0.f_556)
			{
				case 0:
					_set_text_entry("PERCENTAGE");
					add_text_component_integer(*uParam0.f_554);
					_draw_text(fVar20, fVar1 + func_208(2f * 2f), 0);
					break;
				
				case 1:
					_set_text_entry("FO_TWO_NUM");
					add_text_component_integer(*uParam0.f_554);
					add_text_component_integer(*uParam0.f_555);
					_draw_text(fVar20, fVar1 + func_208(2f * 2f), 0);
					break;
				
				case 2:
					_set_text_entry("MTPHPER_XPNO");
					add_text_component_integer(*uParam0.f_554);
					_draw_text(fVar20, fVar1 + func_208(2f * 2f), 0);
					break;
			}
			if (*uParam0.f_557 != 0)
			{
				iVar35 = 255;
				iVar36 = 255;
				iVar37 = 255;
				iVar38 = iVar0;
				switch (*uParam0.f_557)
				{
					case 1:
						get_hud_colour(107, &iVar35, &iVar36, &iVar37, &iVar38);
						break;
					
					case 3:
						get_hud_colour(109, &iVar35, &iVar36, &iVar37, &iVar38);
						break;
					
					case 2:
						get_hud_colour(108, &iVar35, &iVar36, &iVar37, &iVar38);
						break;
				}
				fVar39 = 0.001388889f * 5f;
				fVar40 = 0.00078125f * 16f * 2f;
				fVar41 = 0.001388889f * 16f * 2f;
				fVar42 = fVar21 + func_193(4f) - 0.006f;
				fVar43 = fVar1 + func_208(10f) + fVar39;
				if (*uParam0.f_556 == -1)
				{
					fVar42 -= 0.006f * 6f;
				}
				fVar40 *= 0.65f;
				fVar41 *= 0.65f;
				draw_sprite(&cVar23, &cVar27, fVar42, fVar43, fVar40, fVar41, 0f, iVar35, iVar36, iVar37, round(fVar12 * IntToFloat(iVar0)), 0);
			}
			fVar1 += func_208(30f) - 2f;
		}
	}
}

float func_193(float fParam0)
{
	return fParam0 * 0.00078125f;
}

void func_194(char* sParam0, float fParam1, float fParam2, int iParam3, int iParam4, int iParam5)
{
	set_text_centre(iParam3);
	set_text_font(iParam5);
	func_206();
	if (iParam4)
	{
		_set_text_entry("STRING");
		add_text_component_substring_player_name(sParam0);
	}
	else
	{
		_set_text_entry(sParam0);
	}
	_draw_text(fParam1, fParam2, 0);
}

bool func_195(int iParam0, int iParam1, int iParam2, float fParam3, float fParam4, int iParam5)
{
	char* sVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	Vector3 vVar7;
	
	sVar0 = func_200(iParam0);
	sVar1 = func_198(iParam0, iParam1);
	if (get_hash_key(sVar1) != 0)
	{
		fVar4 = 1f;
		if (iParam5)
		{
			_get_screen_active_resolution(&iVar2, &iVar3);
			fVar5 = _get_screen_aspect_ratio(0);
			if (func_197())
			{
				iVar2 = round(to_float(iVar3) * fVar5);
			}
			fVar6 = to_float(iVar2) / to_float(iVar3);
			fVar4 = fVar6 / fVar5;
			if (func_197())
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
		vVar7.x *= func_196(iParam0) / fVar4;
		vVar7.y *= func_196(iParam0) / fVar4;
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

float func_196(int iParam0)
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

bool func_197()
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

auto func_198(int iParam0, int iParam1)
{
	char*[] sVar0 = new char*[2];
	
	if (!is_string_null_or_empty(&(Global_17257.f_6687[iParam0 /*16*/])))
	{
		return func_199(&(Global_17257.f_6687[iParam0 /*16*/]));
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

auto func_199(auto uParam0)
{
	return uParam0;
}

char* func_200(int iParam0)
{
	if (!is_string_null_or_empty(&(Global_17257.f_5886[iParam0 /*16*/])))
	{
		return func_199(&(Global_17257.f_5886[iParam0 /*16*/]));
	}
	if (iParam0 == 48)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

void func_201(auto uParam0, int iParam1, float fParam2, float fParam3, float fParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	auto uVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	get_hud_colour(1, &iVar0, &iVar1, &iVar2, &uVar3);
	set_text_colour(iVar0, iVar1, iVar2, iParam5);
	set_text_wrap(fParam3, fParam4);
	set_text_justification(1);
	set_text_scale(1f, func_203(14f));
	set_text_centre(0);
	set_text_font(0);
	func_206();
	if (*uParam0.f_531[iParam1])
	{
		_set_text_entry("STRING");
		add_text_component_substring_player_name(uParam0.f_71[iParam1 /*16*/]);
	}
	else
	{
		_set_text_entry(uParam0.f_71[iParam1 /*16*/]);
		if (*uParam0.f_57[iParam1] == 16 || *uParam0.f_57[iParam1] == 17)
		{
			add_text_component_integer(*uParam0.f_489[iParam1]);
		}
	}
	_draw_text(fParam3, fParam2, 0);
	fVar4 = fParam4;
	switch (*uParam0.f_517[iParam1])
	{
		case 0:
			break;
		
		case 1:
			func_195(7, 0, 1, &fVar5, &fVar6, 0);
			draw_sprite("CommonMenu", func_198(7, 0), fParam4 - 0.006f, fParam2 + func_208(2f) + 0.25f * fVar6, fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 -= fVar5 * 0.38f + 0.006f;
			break;
		
		case 2:
			func_195(5, 0, 1, &fVar5, &fVar6, 0);
			draw_sprite("CommonMenu", func_198(5, 0), fParam4 - 0.006f, fParam2 + func_208(2f) + 0.25f * fVar6, fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 -= fVar5 * 0.38f + 0.006f;
			break;
		
		case 3:
			func_195(6, 0, 1, &fVar5, &fVar6, 0);
			draw_sprite("CommonMenu", func_198(6, 0), fParam4 - 0.006f, fParam2 + func_208(2f) + 0.25f * fVar6, fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 -= fVar5 * 0.38f + 0.006f;
			break;
	}
	if (*uParam0.f_57[iParam1] == 0)
	{
		return;
	}
	if (*uParam0.f_57[iParam1] == 15)
	{
		set_text_justification(1);
	}
	else
	{
		set_text_justification(2);
	}
	set_text_scale(1f, func_203(14f));
	if (*uParam0.f_57[iParam1] == 5 || *uParam0.f_57[iParam1] == 4)
	{
		set_text_wrap(fParam3, fVar4 - 0.00078125f * 3f);
	}
	else
	{
		set_text_wrap(fParam3, fVar4 + 0.00078125f * 2f);
	}
	set_text_colour(iVar0, iVar1, iVar2, iParam5);
	func_202(*uParam0.f_489[iParam1], *uParam0.f_503[iParam1], fParam4, fParam2, uParam0.f_280[iParam1 /*16*/], *uParam0.f_57[iParam1]);
}

void func_202(int iParam0, int iParam1, float fParam2, float fParam3, char* sParam4, int iParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = 1;
	set_text_centre(0);
	set_text_font(0);
	func_206();
	fVar1 = 0f;
	fVar2 = 8f * 0.00078125f;
	fVar3 = 16f * 0.001388889f;
	iVar4 = 93;
	iVar5 = 182;
	iVar6 = 229;
	if (iParam5 == 4)
	{
		iVar4 = 194;
		iVar5 = 80;
		iVar6 = 80;
	}
	switch (iParam5)
	{
		case 4:
		case 5:
			set_text_scale(1f, func_203(18f));
			set_text_font(4);
			if (iParam0 < 0)
			{
				_set_text_entry_for_width("ESMINDOLLA");
				_add_text_component_substring_cash(-1 * iParam0, 1);
				fVar1 = _get_text_screen_width(0);
			}
			else
			{
				_set_text_entry_for_width("ESDOLLA");
				_add_text_component_substring_cash(iParam0, 1);
				fVar1 = _get_text_screen_width(0);
			}
			fVar1 -= fVar1 % 0.00078125f;
			draw_sprite("CommonMenu", "BettingBox_Left", fParam2 - fVar1, fParam3 + fVar3 * 0.6f + 0.001388889f * 2f, fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			draw_sprite("CommonMenu", "BettingBox_Centre", fParam2 - fVar1 * 0.5f - 0.00078125f * 2f, fParam3 + fVar3 * 0.6f + 0.001388889f * 2f, fVar1 - fVar2 * 0.5f, fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			draw_sprite("CommonMenu", "BettingBox_Right", fParam2 - 0.00078125f * 4f, fParam3 + fVar3 * 0.6f + 0.001388889f * 2f, fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			set_text_scale(1f, func_203(14f));
			break;
	}
	_0x39BBF623FC803EAC(iVar0);
	switch (iParam5)
	{
		case 11:
			_set_text_entry("PERCENTAGE");
			add_text_component_integer(iParam0);
			break;
		
		case 1:
			set_text_font(5);
			_set_text_entry("FO_NUM");
			add_text_component_integer(iParam0);
			break;
		
		case 2:
			set_text_font(5);
			_set_text_entry("FO_TWO_NUM");
			add_text_component_integer(iParam0);
			add_text_component_integer(iParam1);
			break;
		
		case 4:
		case 5:
			set_text_scale(1f, func_203(18f));
		
		case 3:
			if (iParam0 < 0)
			{
				_set_text_entry("ESMINDOLLA");
				_add_text_component_substring_cash(-1 * iParam0, 1);
			}
			else
			{
				_set_text_entry("ESDOLLA");
				_add_text_component_substring_cash(iParam0, 1);
			}
			break;
		
		case 6:
			_set_text_entry(sParam4);
			break;
		
		case 7:
			_set_text_entry("STRING");
			add_text_component_substring_player_name(sParam4);
			break;
		
		case 8:
			set_text_font(5);
			_set_text_entry("STRING");
			add_text_component_substring_time(iParam0, 14);
			break;
		
		case 9:
			set_text_font(5);
			_set_text_entry("STRING");
			add_text_component_substring_time(iParam0, 6);
			break;
		
		case 10:
			set_text_font(5);
			_set_text_entry("STRING");
			add_text_component_substring_time(iParam0, 2055);
			break;
		
		case 18:
			set_text_font(5);
			_set_text_entry("STRING");
			add_text_component_substring_time(iParam0, 2055);
			break;
		
		case 12:
			_set_text_entry("AHD_DIST");
			add_text_component_integer(iParam0);
			break;
		
		case 13:
			_set_text_entry(sParam4);
			add_text_component_integer(iParam0);
			add_text_component_integer(iParam1);
			break;
		
		case 15:
		case 14:
			_set_text_entry(sParam4);
			add_text_component_integer(iParam0);
			add_text_component_integer(iParam1);
			break;
		
		case 16:
			_set_text_entry(sParam4);
			add_text_component_integer(iParam1);
			break;
	}
	if (iParam5 != 17)
	{
		if (iParam5 == 4 || iParam5 == 5)
		{
			_draw_text(fParam2 - 0.00078125f * 4f, fParam3, 0);
			set_text_scale(1f, func_203(14f));
		}
		else
		{
			_draw_text(fParam2, fParam3, 0);
		}
	}
}

float func_203(float fParam0)
{
	return fParam0 * 0.025f;
}

float func_204(float fParam0)
{
	return fParam0 * 0.0009259259f;
}

float func_205(char* sParam0)
{
	_set_text_entry_for_width(sParam0);
	return _get_text_screen_width(1) / 2f;
}

void func_206()
{
	_set_2d_layer(1);
	if (is_screen_fading_out() || is_screen_faded_out())
	{
		_set_2d_layer(7);
	}
	_0xC6372ECD45D73BCD(0);
}

float func_207()
{
	float fVar0;
	
	fVar0 = 1f;
	if (GAMEPLAY::IS_PC_VERSION())
	{
	}
	return fVar0;
}

float func_208(float fParam0)
{
	return fParam0 * 0.001388889f;
}

void func_209()
{
	if (!Global_14413.f_1 == 1)
	{
		if (func_67(0))
		{
			func_210(0);
		}
		GAMEPLAY::SET_BIT(&Global_2284, 2);
	}
}

void func_210(int iParam0)
{
	if (Global_14571)
	{
		func_211(0, 0);
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
	if (!func_10())
	{
		Global_14413.f_1 = 3;
	}
}

void func_211(int iParam0, int iParam1)
{
	if (iParam0)
	{
		if (func_67(0))
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

bool func_212(auto uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

void func_213(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (*uParam0 == 0)
	{
		*uParam0 = request_scaleform_movie_instance("instructional_buttons");
	}
	*uParam0.f_1 = 0;
	*uParam0.f_123 = 0;
	if (iParam1)
	{
		func_183(uParam0.f_1, 32);
	}
	if (has_scaleform_movie_loaded(*uParam0))
	{
		func_183(uParam0.f_1, 1);
		if (iParam2)
		{
			set_scaleform_movie_to_use_system_time(*uParam0, 1);
		}
	}
	if (GAMEPLAY::IS_PC_VERSION())
	{
		if (iParam3)
		{
			func_183(uParam0.f_1, 4096);
		}
	}
	if (iParam4)
	{
		func_183(uParam0.f_1, 8192);
	}
}

bool func_214(auto uParam0, int iParam1, int iParam2)
{
	*uParam0.f_12 = iParam2;
	func_217(uParam0);
	func_216(uParam0);
	if (are_strings_equal(uParam0.f_550, "SPR_RESULT") || (are_strings_equal(uParam0.f_550, "") && *uParam0.f_56 > 0))
	{
		*uParam0.f_566 = 1;
	}
	if (*uParam0.f_1 == 0)
	{
		request_streamed_texture_dict("CommonMenu", false);
		request_streamed_texture_dict("MPLeaderboard", false);
		request_streamed_texture_dict("MPHud", false);
		*uParam0.f_1 = unk_0x67D02A194A2FC2BD("MP_BIG_MESSAGE_FREEMODE");
		*uParam0.f_2 = 0;
		*uParam0.f_3 = 0;
	}
	*uParam0.f_4 = request_scaleform_movie_instance("INSTRUCTIONAL_BUTTONS");
	if (iParam1)
	{
		while (((!has_scaleform_movie_loaded(*uParam0.f_1) || !has_streamed_texture_dict_loaded("CommonMenu")) || !has_streamed_texture_dict_loaded("MPLeaderboard")) || !has_streamed_texture_dict_loaded("MPHud"))
		{
			wait(0);
		}
		if (*uParam0.f_562 || *uParam0.f_567)
		{
			while (!has_scaleform_movie_loaded(*uParam0.f_4))
			{
				wait(0);
			}
		}
	}
	else
	{
		if (((!has_scaleform_movie_loaded(*uParam0.f_1) || !has_streamed_texture_dict_loaded("CommonMenu")) || !has_streamed_texture_dict_loaded("MPLeaderboard")) || !has_streamed_texture_dict_loaded("MPHud"))
		{
			return false;
		}
		if (*uParam0.f_562)
		{
			if (!has_scaleform_movie_loaded(*uParam0.f_4))
			{
				return false;
			}
		}
	}
	if (*uParam0.f_562)
	{
		if (*uParam0.f_567)
		{
			func_215(uParam0);
		}
		else if (*uParam0.f_56 != 0)
		{
			func_190(uParam0, 1);
		}
		else
		{
			func_190(uParam0, 0);
		}
	}
	Global_69750 = 1;
	return true;
}

void func_215(auto uParam0)
{
	_push_scaleform_movie_function(*uParam0.f_4, "CLEAR_ALL");
	_pop_scaleform_movie_function_void();
	if (GAMEPLAY::IS_PC_VERSION())
	{
		_push_scaleform_movie_function(*uParam0.f_4, "TOGGLE_MOUSE_BUTTONS");
		_push_scaleform_movie_function_parameter_bool(true);
		_pop_scaleform_movie_function_void();
	}
	_push_scaleform_movie_function(*uParam0.f_4, "SET_DATA_SLOT");
	_push_scaleform_movie_function_parameter_int(2);
	func_186(_get_control_action_name(2, 188, true));
	func_185("ES_HELP_TU");
	_pop_scaleform_movie_function_void();
	_push_scaleform_movie_function(*uParam0.f_4, "SET_DATA_SLOT");
	_push_scaleform_movie_function_parameter_int(true);
	func_186(_get_control_action_name(2, 187, true));
	func_185("ES_HELP_TD");
	_pop_scaleform_movie_function_void();
	_push_scaleform_movie_function(*uParam0.f_4, "SET_DATA_SLOT");
	_push_scaleform_movie_function_parameter_int(false);
	func_186(_get_control_action_name(2, 202, true));
	func_185("ES_HELP_AB");
	_pop_scaleform_movie_function_void();
	_push_scaleform_movie_function(*uParam0.f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	_pop_scaleform_movie_function_void();
}

void func_216(auto uParam0)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 0f;
	set_text_justification(0);
	set_text_scale(1f, func_203(16f));
	if (*uParam0.f_31 == 0)
	{
		if (*uParam0.f_29)
		{
			_set_text_entry_for_width("STRING");
			add_text_component_substring_player_name(uParam0.f_13);
			fVar0 = _get_text_screen_width(1);
		}
		else
		{
			_set_text_entry_for_width(uParam0.f_13);
			fVar0 = _get_text_screen_width(1);
		}
	}
	else
	{
		_set_text_entry_for_width("STRING");
		iVar1 = 0;
		iVar2 = 0;
		iVar3 = 0;
		iVar3 = 0;
		while (iVar3 < *uParam0.f_31)
		{
			switch (*uParam0.f_32[iVar3])
			{
				case 0:
					add_text_component_integer(*uParam0.f_53[iVar1]);
					iVar1++;
					break;
				
				case 1:
					_add_text_component_item_string(uParam0.f_36[iVar2 /*16*/]);
					iVar2++;
					break;
				
				case 2:
					add_text_component_substring_player_name(uParam0.f_36[iVar2 /*16*/]);
					iVar2++;
					break;
			}
			iVar3++;
		}
		fVar0 = _get_text_screen_width(1);
	}
	if (fVar0 > 0.1125f * 2f - 0.006f * 2f)
	{
		*uParam0 = fVar0 / 2f + 0.006f * 2f;
	}
}

void func_217(auto uParam0)
{
	*uParam0.f_547 = 1f;
	*uParam0.f_546 = 0;
	*uParam0.f_568 = 0f;
	*uParam0.f_558 = 0;
	*uParam0.f_30 = 0f;
	*uParam0.f_548 = 0f;
	*uParam0.f_559 = 0f;
	*uParam0.f_560 = 0f;
	*uParam0.f_545 = 0;
	*uParam0.f_563 = 0;
	*uParam0.f_572 = 0;
	*uParam0.f_564 = 0;
	*uParam0.f_565 = 0;
	*uParam0.f_566 = 0;
	*uParam0 = 0.1125f;
	*uParam0.f_2 = 0;
	*uParam0.f_3 = 0;
	*uParam0.f_574 = 0;
	*uParam0.f_575 = 0;
	*uParam0.f_573 = 1f;
}

void func_218()
{
	int iVar0;
	int iVar1;
	
	if (!iLocal_377)
	{
		func_224(&uLocal_388, &Local_964, &Global_55764, 0);
		fLocal_372 *= 1000f;
		if (Global_85788)
		{
			func_223(&uLocal_388, 6, &(Local_964.f_12), "MTPHPERSKI", floor(fLocal_372), 0, 3, 0);
			func_223(&uLocal_388, 6, &(Local_964.f_24), "MTPHPERSKI", 0, 0, 3, 0);
			func_223(&uLocal_388, 6, &(Local_964.f_30), "MTPHPERSKI", round(fLocal_374 + fLocal_373), 0, 3, 0);
			func_222();
		}
		else
		{
			if (iLocal_376)
			{
				func_223(&uLocal_388, 6, &(Local_964.f_12), "MTPHPERRET", floor(fLocal_372), 0, 3, 0);
			}
			else
			{
				func_223(&uLocal_388, 9, &(Local_964.f_12), "", floor(fLocal_372), 0, 0, 0);
			}
			if (!is_string_null_or_empty(&(Local_964.f_18)))
			{
				if (iLocal_375)
				{
					func_223(&uLocal_388, 6, &(Local_964.f_24), "", 0, 0, 2, 0);
					func_223(&uLocal_388, 3, &(Local_964.f_30), "", round(fLocal_374 + fLocal_373), 0, 2, 0);
				}
				else
				{
					func_223(&uLocal_388, 6, &(Local_964.f_24), "", 0, 0, 1, 0);
					func_223(&uLocal_388, 3, &(Local_964.f_30), "", round(fLocal_373), 0, 0, 0);
				}
			}
			else
			{
				func_223(&uLocal_388, 3, &(Local_964.f_30), "", round(fLocal_373), 0, 0, 0);
			}
		}
		iVar0 = 0;
		if (Global_85788)
		{
			iVar1 = 0;
			while (iVar1 < Global_67844)
			{
				if (Global_67845[iVar1 /*9*/] >= 0 && !Global_55974[Global_67845[iVar1 /*9*/] /*13*/].f_7)
				{
					if (Global_67845[iVar1 /*9*/].f_3 == 2)
					{
						iVar0 = 1;
					}
				}
				iVar1++;
			}
		}
		if (iVar0 == 1)
		{
			iLocal_383 = 50;
			iLocal_384 = true;
			func_221(&uLocal_388, 1, &(Local_964.f_48), iLocal_383, 0, 0, 1);
		}
		else if (iLocal_375)
		{
			if (iLocal_376)
			{
				iLocal_383 = 75;
				iLocal_384 = 2;
				func_221(&uLocal_388, 1, &(Local_964.f_42), iLocal_383, 0, 0, 2);
			}
			else
			{
				iLocal_383 = 100;
				iLocal_384 = 3;
				func_221(&uLocal_388, 1, &(Local_964.f_36), iLocal_383, 0, 0, 3);
			}
		}
		else if (!iLocal_375 && !iLocal_376)
		{
			iLocal_383 = 75;
			iLocal_384 = 2;
			func_221(&uLocal_388, 1, &(Local_964.f_42), iLocal_383, 0, 0, 2);
		}
		else
		{
			iLocal_383 = 50;
			iLocal_384 = true;
			func_221(&uLocal_388, 1, &(Local_964.f_48), iLocal_383, 0, 0, 1);
		}
		func_219();
		iLocal_377 = 1;
	}
}

void func_219()
{
	if (_get_number_of_instances_of_streamed_script(joaat("assassin_valet")) == 1)
	{
		func_220(38, floor(fLocal_372), 1);
		if (iLocal_375)
		{
			func_220(39, 1, 1);
		}
		else
		{
			func_220(39, 0, 1);
		}
		if (iLocal_375)
		{
			func_220(40, round(fLocal_374 + fLocal_373), 1);
		}
		else
		{
			func_220(40, round(fLocal_373), 1);
		}
		func_220(41, iLocal_383, 1);
		func_220(42, iLocal_384, 1);
	}
	else if (_get_number_of_instances_of_streamed_script(joaat("assassin_multi")) == 1)
	{
		func_220(52, floor(fLocal_372), 1);
		if (iLocal_375)
		{
			func_220(53, 1, 1);
		}
		else
		{
			func_220(53, 0, 1);
		}
		if (iLocal_375)
		{
			func_220(56, round(fLocal_374 + fLocal_373), 1);
		}
		else
		{
			func_220(56, round(fLocal_373), 1);
		}
		func_220(54, iLocal_383, 1);
		func_220(55, iLocal_384, 1);
	}
	else if (_get_number_of_instances_of_streamed_script(joaat("assassin_hooker")) == 1)
	{
		func_220(66, floor(fLocal_372), 1);
		if (iLocal_375)
		{
			func_220(67, 1, 1);
		}
		else
		{
			func_220(67, 0, 1);
		}
		if (iLocal_375)
		{
			func_220(68, round(fLocal_374 + fLocal_373), 1);
		}
		else
		{
			func_220(68, round(fLocal_373), 1);
		}
		func_220(69, iLocal_383, 1);
		func_220(70, iLocal_384, 1);
	}
	else if (_get_number_of_instances_of_streamed_script(joaat("assassin_bus")) == 1)
	{
		func_220(81, floor(fLocal_372), 1);
		if (iLocal_375)
		{
			func_220(82, 1, 1);
		}
		else
		{
			func_220(82, 0, 1);
		}
		if (iLocal_375)
		{
			func_220(83, round(fLocal_374 + fLocal_373), 1);
		}
		else
		{
			func_220(83, round(fLocal_373), 1);
		}
		func_220(84, iLocal_383, 1);
		func_220(85, iLocal_384, 1);
	}
	else if (_get_number_of_instances_of_streamed_script(joaat("assassin_construction")) == 1)
	{
		func_220(97, floor(fLocal_372), 1);
		if (iLocal_375)
		{
			func_220(98, 1, 1);
		}
		else
		{
			func_220(98, 0, 1);
		}
		if (iLocal_375)
		{
			func_220(99, round(fLocal_374 + fLocal_373), 1);
		}
		else
		{
			func_220(99, round(fLocal_373), 1);
		}
		func_220(100, iLocal_383, 1);
		func_220(101, iLocal_384, 1);
	}
}

void func_220(int iParam0, int iParam1, int iParam2)
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

void func_221(auto uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	*uParam0.f_549 = iParam1;
	StringCopy(uParam0.f_550, sParam2, 16);
	*uParam0.f_554 = iParam3;
	*uParam0.f_555 = iParam4;
	*uParam0.f_556 = iParam5;
	*uParam0.f_557 = iParam6;
}

void func_222()
{
	Global_85787 = 0;
	Global_85788 = 0;
}

void func_223(auto uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	auto uVar0;
	
	if (*uParam0.f_56 == 13)
	{
		return;
	}
	uVar0 = *uParam0.f_56;
	*uParam0.f_57[uVar0] = iParam1;
	StringCopy(uParam0.f_71[uVar0 /*16*/], sParam2, 64);
	StringCopy(uParam0.f_280[uVar0 /*16*/], sParam3, 64);
	*uParam0.f_489[uVar0] = iParam4;
	*uParam0.f_503[uVar0] = iParam5;
	*uParam0.f_517[uVar0] = iParam6;
	*uParam0.f_531[uVar0] = iParam7;
	*uParam0.f_56++;
}

void func_224(auto uParam0, char* sParam1, char* sParam2, int iParam3)
{
	StringCopy(uParam0.f_5, sParam1, 16);
	StringCopy(uParam0.f_13, sParam2, 64);
	*uParam0.f_29 = iParam3;
	*uParam0.f_11 = 0;
}

void func_225()
{
	func_485(&(Global_101154.f_18653.f_1), 4194304);
}

void func_226()
{
	int iVar0;
	
	if (!iLocal_1174)
	{
		if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
			{
				iVar0 = get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !is_entity_dead(iVar0, 0))
				{
					if (_is_vehicle_engine_on(iVar0))
					{
						if (prepare_music_event("ASS1_LOST"))
						{
							iLocal_1174 = true;
						}
					}
				}
			}
		}
	}
}

void func_227()
{
	float fVar0;
	
	if (!iLocal_1171)
	{
		if (!is_message_being_displayed())
		{
			if (!func_22())
			{
				func_232("ASS_VA_GO", 7500, -1);
				iLocal_1171 = 1;
			}
		}
	}
	func_231(&iLocal_1183, &uLocal_1363, "OJASAUD", "OJAS_HOCOM", 9, 1, 0, 0);
	switch (iLocal_1192)
	{
		case 0:
			iLocal_1192++;
			break;
		
		case 1:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				fVar0 = func_26(PLAYER::PLAYER_PED_ID(), vLocal_1298, 1);
				if (fVar0 > 155f && func_30(1116471296, 1) == 0)
				{
					iLocal_1166 = true;
					func_229();
					iLocal_1192++;
				}
				else
				{
					_0x4669B3ED80F24B4E(player_id());
				}
			}
			break;
		
		case 2:
			if (!is_player_wanted_level_greater(player_id(), 0))
			{
				if (func_30(1116471296, 1) == 0)
				{
					func_226();
					if (func_228())
					{
						iLocal_1030 = 18;
					}
				}
			}
			else if (!iLocal_1182)
			{
				if (!func_22())
				{
					if (!is_message_being_displayed())
					{
						func_232("ASS_VA_LOSECOPS", 7500, 1);
						iLocal_1192++;
						iLocal_1182 = 1;
					}
				}
			}
			break;
		
		case 3:
			if (!is_player_wanted_level_greater(player_id(), 0))
			{
				iLocal_1192 = 2;
			}
			break;
	}
}

bool func_228()
{
	if (iLocal_1174)
	{
		trigger_music_event("ASS1_LOST");
		iLocal_1175 = 1;
	}
	func_229();
	return true;
}

void func_229()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1046[iVar0]))
		{
			if (!PED::IS_PED_INJURED(iLocal_1046[iVar0]))
			{
				func_230(&(Local_1101[iVar0 /*8*/]));
				clear_ped_tasks(iLocal_1046[iVar0]);
				set_ped_as_no_longer_needed(&(iLocal_1046[iVar0]));
			}
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1045))
	{
		if (!PED::IS_PED_INJURED(iLocal_1045))
		{
			clear_ped_tasks(iLocal_1045);
			set_ped_as_no_longer_needed(&iLocal_1045);
		}
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1049[iVar0]))
		{
			if (!PED::IS_PED_INJURED(iLocal_1049[iVar0]))
			{
				func_230(&(Local_1059[iVar0 /*8*/]));
				clear_ped_tasks(iLocal_1049[iVar0]);
				set_ped_as_no_longer_needed(&(iLocal_1049[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1053[iVar0]))
		{
			if (!PED::IS_PED_INJURED(iLocal_1053[iVar0]))
			{
				func_230(&(Local_1084[iVar0 /*8*/]));
				clear_ped_tasks(iLocal_1053[iVar0]);
				set_ped_as_no_longer_needed(&(iLocal_1053[iVar0]));
			}
		}
		iVar0++;
	}
	set_model_as_no_longer_needed(iLocal_1324);
}

void func_230(int iParam0)
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
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0.f_7))
	{
		if (!PED::IS_PED_INJURED(*iParam0.f_7))
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

bool func_231(int iParam0, auto uParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (!*iParam0)
	{
		if (func_6(uParam1, sParam2, sParam3, iParam4, iParam5, iParam6, iParam7))
		{
			*iParam0 = 1;
			return true;
		}
	}
	return false;
}

void func_232(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	_set_text_entry_2(sParam0);
	_draw_subtitle_timed(iParam1, 1);
}

void func_233()
{
	func_231(&iLocal_1183, &uLocal_1363, "OJASAUD", "OJAS_HOCOM", 9, 1, 0, 0);
	switch (iLocal_1192)
	{
		case 0:
			if (is_player_wanted_level_greater(player_id(), 0))
			{
				if (!iLocal_1182)
				{
					if (!func_22())
					{
						if (!is_message_being_displayed())
						{
							func_232("ASS_VA_LOSECOPS", 7500, 1);
							iLocal_1192++;
							iLocal_1182 = 1;
						}
					}
				}
			}
			else if (func_30(1116471296, 1) != 0)
			{
				if (!iLocal_1171)
				{
					if (!func_22())
					{
						if (!is_message_being_displayed())
						{
							func_232("ASS_VA_GO", 7500, -1);
							iLocal_1192++;
							iLocal_1171 = 1;
						}
					}
				}
			}
			else if (!is_player_wanted_level_greater(player_id(), 0) && func_30(125f, 1) == 0)
			{
				iLocal_1192++;
			}
			break;
		
		case 1:
			if (!is_player_wanted_level_greater(player_id(), 0) && func_30(125f, 1) == 0)
			{
				func_226();
				func_229();
				func_235(1);
				func_234();
				iLocal_1192++;
			}
			break;
		
		case 2:
			func_226();
			iLocal_1030 = 18;
			break;
	}
}

void func_234()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1311))
	{
		if (is_vehicle_driveable(iLocal_1311, 0))
		{
			set_vehicle_doors_locked(iLocal_1311, 1);
		}
		set_vehicle_as_no_longer_needed(&iLocal_1311);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1312))
	{
		if (!is_entity_dead(iLocal_1312, 0))
		{
			if ((is_entity_on_screen(iLocal_1312) && !is_entity_occluded(iLocal_1312)) && !is_screen_faded_out())
			{
				set_vehicle_as_no_longer_needed(&iLocal_1312);
			}
			else
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_1053[0]) && !is_entity_dead(iLocal_1053[0], 0))
				{
					if (!is_entity_dead(iLocal_1312, 0))
					{
						if (is_ped_in_vehicle(iLocal_1053[0], iLocal_1312, 0))
						{
							clear_ped_tasks_immediately(iLocal_1053[0]);
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_1053[1]) && !is_entity_dead(iLocal_1053[1], 0))
				{
					if (!is_entity_dead(iLocal_1312, 0))
					{
						if (is_ped_in_vehicle(iLocal_1053[1], iLocal_1312, 0))
						{
							clear_ped_tasks_immediately(iLocal_1053[1]);
						}
					}
				}
				if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), iLocal_1312, 0))
					{
						clear_ped_tasks_immediately(PLAYER::PLAYER_PED_ID());
					}
				}
				set_vehicle_as_no_longer_needed(&iLocal_1312);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1315[0]))
	{
		set_vehicle_as_no_longer_needed(&(iLocal_1315[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1315[1]))
	{
		set_vehicle_as_no_longer_needed(&(iLocal_1315[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1318) && !is_entity_dead(iLocal_1318, 0))
	{
		if (is_entity_a_mission_entity(iLocal_1318) && does_entity_belong_to_this_script(iLocal_1318, 1))
		{
			set_vehicle_as_no_longer_needed(&iLocal_1318);
		}
	}
}

void func_235(int iParam0)
{
	int iVar0;
	
	if (iParam0)
	{
		if (does_blip_exist(iLocal_1119))
		{
			remove_blip(&iLocal_1119);
		}
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (does_blip_exist(uLocal_1120[iVar0]))
		{
			remove_blip(&(uLocal_1120[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (does_blip_exist(uLocal_1124[iVar0]))
		{
			remove_blip(&(uLocal_1124[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (does_blip_exist(uLocal_1124[iVar0]))
		{
			remove_blip(&(uLocal_1124[iVar0]));
		}
		iVar0++;
	}
}

void func_236()
{
	if (is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), vLocal_1292, vLocal_1295, fLocal_1242, 1, false, 0))
	{
		iLocal_1151 = true;
	}
	else
	{
		iLocal_1151 = false;
	}
	if (does_blip_exist(iLocal_1119))
	{
		remove_blip(&iLocal_1119);
	}
	set_wanted_level_multiplier(0.5f);
	if (iLocal_1151)
	{
		func_237();
		iLocal_1030 = 17;
	}
	else
	{
		func_237();
		iLocal_1030 = 16;
	}
	func_79(&uLocal_1528, 0, 0);
}

void func_237()
{
	iLocal_1192 = 0;
}

void func_238()
{
	if (!iLocal_1148)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1311))
		{
			if (is_vehicle_driveable(iLocal_1311, 0))
			{
				set_vehicle_doors_locked(iLocal_1311, 3);
				if (func_240(iLocal_1311, 5f))
				{
					iLocal_1148 = true;
				}
			}
		}
	}
	if (!iLocal_1145)
	{
		if (func_239(iLocal_1311, 10000))
		{
			iLocal_1145 = 1;
		}
	}
}

bool func_239(int iParam0, int iParam1)
{
	if (is_vehicle_driveable(iParam0, 0))
	{
		if (((is_vehicle_stuck_timer_up(iParam0, 0, iParam1) || is_vehicle_stuck_timer_up(iParam0, 2, iParam1)) || is_vehicle_stuck_timer_up(iParam0, 3, iParam1)) || is_vehicle_stuck_timer_up(iParam0, 1, iParam1))
		{
			return true;
		}
	}
	return false;
}

bool func_240(int iParam0, float fParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (func_241(iParam0, -1217.442f, -281.5099f, 36.7495f, 1) <= fParam1)
		{
			return true;
		}
	}
	return false;
}

float func_241(int iParam0, Vector3 vParam1, int iParam2)
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

void func_242()
{
	switch (iLocal_1192)
	{
		case 0:
			if (is_vehicle_driveable(iLocal_1311, 0))
			{
				if (func_127())
				{
					if (!PED::IS_PED_INJURED(iLocal_1049[0]))
					{
						if (is_vehicle_driveable(iLocal_1311, 0))
						{
							if (is_ped_in_vehicle(iLocal_1049[0], iLocal_1311, 0))
							{
								iLocal_1144 = true;
								func_237();
								iLocal_1030 = 13;
							}
						}
					}
				}
			}
			break;
	}
}

void func_243()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1045))
	{
		if (PED::IS_PED_INJURED(iLocal_1045))
		{
			if (is_entity_dead(iLocal_1045, 0))
			{
				iLocal_1149 = true;
				if (does_blip_exist(iLocal_1119))
				{
					remove_blip(&iLocal_1119);
				}
				func_103(vLocal_1304, 1097859072, 1116471296);
			}
			_0x293220DA1B46CEBC(3f, 2f, 3);
			func_237();
			iLocal_1030 = 15;
		}
	}
}

void func_244()
{
	func_235(0);
	func_251();
	func_249();
	func_246();
	func_245();
	func_232("ASS_VA_KILL", 7500, -1);
	settimera(0);
	iLocal_1160 = true;
	func_237();
	iLocal_1030 = 12;
}

void func_245()
{
	set_model_as_no_longer_needed(iLocal_1326);
	set_model_as_no_longer_needed(iLocal_1327);
}

void func_246()
{
	func_248(&(Local_1690.f_4));
	func_247(&(Local_1690[0]));
	func_247(&(Local_1690[1]));
	func_247(&(Local_1690.f_8[0]));
	func_247(&(Local_1690.f_8[1]));
	func_247(&(Local_1690.f_5[0]));
	func_247(&(Local_1690.f_5[1]));
	func_247(&(Local_1690.f_3));
}

void func_247(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (is_entity_occluded(*iParam0))
		{
			delete_ped(iParam0);
		}
		else
		{
			set_ped_as_no_longer_needed(iParam0);
		}
	}
}

void func_248(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (is_entity_occluded(*iParam0))
		{
			set_vehicle_as_no_longer_needed(iParam0);
		}
	}
}

void func_249()
{
	Vector3[] vVar0 = new Vector3[2];
	Vector3 vVar7;
	Vector3 fVar10;
	int iVar11;
	
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1045) && !is_entity_dead(iLocal_1045, 0))
	{
		vVar7 = {get_entity_coords(iLocal_1045, 1)};
		fVar10 = get_entity_heading(iLocal_1045);
	}
	vVar0[0 /*3*/] = {_get_object_offset_from_coords(vVar7, fVar10, 1f, -1f, 0f)};
	vVar0[1 /*3*/] = {_get_object_offset_from_coords(vVar7, fVar10, -1f, -1f, 0f)};
	iVar11 = 0;
	while (iVar11 < 2)
	{
		if (iVar11 == 0)
		{
			iLocal_1046[iVar11] = PED::CREATE_PED(26, iLocal_1326, vVar0[0 /*3*/], vVar0[0 /*3*/].f_1, 38.3253f, uLocal_1238[iLocal_1201], 1, true);
		}
		else
		{
			iLocal_1046[iVar11] = PED::CREATE_PED(26, iLocal_1327, vVar0[1 /*3*/], vVar0[1 /*3*/].f_1, 38.3253f, uLocal_1238[iLocal_1201], 1, true);
		}
		set_entity_load_collision_flag(iLocal_1046[iVar11], true);
		set_ped_default_component_variation(iLocal_1046[iVar11]);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_1046[iVar11], 3, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_1046[iVar11], 23, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_1046[iVar11], 30, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_1046[iVar11], 13, true);
		set_ped_target_loss_response(iLocal_1046[iVar11], 2);
		set_ped_keep_task(iLocal_1046[iVar11], true);
		func_250(iLocal_1046[iVar11], 1);
		set_ped_to_load_cover(iLocal_1046[iVar11], 1);
		iVar11++;
	}
}

void func_250(int iParam0, int iParam1)
{
	if (iParam0 != iLocal_1045)
	{
		give_weapon_to_ped(iParam0, joaat("weapon_pistol"), -1, false, true);
	}
	if (!iParam1)
	{
		set_ped_combat_movement(iParam0, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 0, true);
	}
	else
	{
		set_ped_combat_movement(iParam0, 2);
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 13, true);
	}
	set_ped_accuracy(iParam0, 60);
	PED::SET_PED_COMBAT_ABILITY(iParam0, 2);
	set_blocking_of_non_temporary_events(iParam0, true);
	set_ped_as_enemy(iParam0, 1);
	PED::PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, iLocal_1331);
}

void func_251()
{
	func_253();
	iLocal_1201 = get_random_int_in_range(0, iLocal_1194);
	iLocal_1045 = PED::CREATE_PED(26, iLocal_1324, vLocal_1257[iLocal_1201 /*3*/], uLocal_1238[iLocal_1201], 1, true);
	set_entity_load_collision_flag(iLocal_1045, true);
	set_ped_default_component_variation(iLocal_1045);
	func_250(iLocal_1045, 1);
	set_model_as_no_longer_needed(iLocal_1324);
	if (!does_blip_exist(iLocal_1119))
	{
		iLocal_1119 = func_252(iLocal_1045, 0, 0);
	}
	set_blip_scale(iLocal_1119, 1f);
}

int func_252(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = add_blip_for_entity(iParam0);
	if (is_entity_a_vehicle(iParam0))
	{
		set_blip_scale(iVar0, func_184(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
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
		set_blip_scale(iVar0, func_184(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		set_blip_as_friendly(iVar0, iParam1);
	}
	else if (is_entity_an_object(iParam0))
	{
		set_blip_scale(iVar0, func_184(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

void func_253()
{
	int iVar0;
	
	iLocal_1194 = false;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!is_sphere_visible(vLocal_1247[iVar0 /*3*/], 5f) && !func_257(iVar0, 6f))
		{
			vLocal_1257[iLocal_1194 /*3*/] = {vLocal_1247[iVar0 /*3*/]};
			uLocal_1238[iLocal_1194] = fLocal_1234[iVar0];
			iLocal_1194++;
		}
		iVar0++;
	}
	if (iLocal_1194 == 0)
	{
		if (func_91())
		{
			vLocal_1257[0 /*3*/] = {vLocal_1247[1 /*3*/]};
			uLocal_1238[0] = fLocal_1234[1];
			iLocal_1194++;
		}
		else if (func_256())
		{
			vLocal_1257[0 /*3*/] = {vLocal_1247[0 /*3*/]};
			uLocal_1238[0] = fLocal_1234[0];
			iLocal_1194++;
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (func_255(vLocal_1247[iVar0 /*3*/], 1) > 30f && !func_257(iVar0, 6f))
				{
					vLocal_1257[iLocal_1194 /*3*/] = {vLocal_1247[iVar0 /*3*/]};
					uLocal_1238[iLocal_1194] = fLocal_1234[iVar0];
					iLocal_1194++;
				}
				iVar0++;
			}
		}
	}
	if (iLocal_1194 == 0)
	{
		func_254();
	}
}

void func_254()
{
	int iVar0;
	Vector3 vVar1;
	float fVar4;
	
	if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
	{
		vVar1 = {get_entity_coords(PLAYER::PLAYER_PED_ID(), 1)};
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		fVar4 = vdist(vVar1, vLocal_1247[iVar0 /*3*/]);
		if (fVar4 > fLocal_1246)
		{
			fLocal_1246 = fVar4;
			iLocal_1245 = iVar0;
		}
		iVar0++;
	}
	vLocal_1257[0 /*3*/] = {vLocal_1247[iLocal_1245 /*3*/]};
	uLocal_1238[0] = fLocal_1234[iLocal_1245];
}

float func_255(Vector3 vParam0, int iParam1)
{
	return func_26(get_player_ped(get_player_index()), vParam0, iParam3);
}

bool func_256()
{
	if (func_26(PLAYER::PLAYER_PED_ID(), -1237.566f, -156.8824f, 39.41317f, 1) < 13f)
	{
		return true;
	}
	return false;
}

bool func_257(int iParam0, float fParam1)
{
	if (is_any_vehicle_near_point(vLocal_1247[iParam0 /*3*/], fParam1))
	{
		return true;
	}
	return false;
}

void func_258()
{
	switch (iLocal_1192)
	{
		case 0:
			if (!iLocal_1161)
			{
				func_99(&Local_360, 4);
				func_261();
				settimera(0);
				iLocal_1192++;
			}
			break;
		
		case 1:
			if (((iLocal_1140 && !iLocal_1138) && func_260()) && func_259())
			{
				func_237();
				iLocal_1030 = 11;
			}
			break;
	}
}

int func_259()
{
	int iVar0;
	
	STREAMING::REQUEST_MODEL(iLocal_1324);
	if (STREAMING::HAS_MODEL_LOADED(iLocal_1324))
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

bool func_260()
{
	if (((ENTITY::DOES_ENTITY_EXIST(iLocal_1049[0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_1049[1])) && !PED::IS_PED_INJURED(iLocal_1049[0])) && !PED::IS_PED_INJURED(iLocal_1049[1]))
	{
		if (is_ped_in_vehicle(iLocal_1049[0], iLocal_1311, 0) && is_ped_in_vehicle(iLocal_1049[1], iLocal_1311, 0))
		{
			return true;
		}
	}
	return false;
}

void func_261()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iLocal_1032[iVar0] = 4;
		iVar0++;
	}
	iLocal_1154 = true;
}

void func_262()
{
	switch (iLocal_1192)
	{
		case 0:
			func_283(1, "assassin_hotel_plan_attack", 0, 0, 0, 1);
			func_99(&Local_360, 2);
			if (is_vehicle_driveable(iLocal_1311, 0))
			{
				set_vehicle_engine_on(iLocal_1311, false, 1, 0);
			}
			if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (!is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_1318) && !is_entity_dead(iLocal_1318, 0))
					{
						func_270(iLocal_1318);
					}
				}
			}
			func_267();
			func_266();
			trigger_music_event("ASS1_START");
			GAMEPLAY::SET_BIT(&Local_360, 4);
			func_232("ASS_VA_PLANT", 7500, 1);
			iLocal_1192++;
			break;
		
		case 1:
			if (iLocal_1167)
			{
				if (((!func_265(&iLocal_1313) && !func_264(&(iLocal_1319[0]), &iLocal_1188)) && !func_264(&(iLocal_1319[1]), &iLocal_1188)) && !func_264(&(iLocal_1319[2]), &iLocal_1188))
				{
					settimera(0);
					func_237();
					iLocal_1030 = 10;
				}
				else
				{
					func_263();
				}
			}
			break;
	}
}

void func_263()
{
	iLocal_1043 = 1;
	iLocal_1138 = true;
}

bool func_264(auto uParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1312))
	{
		return false;
	}
	if (func_24(*uParam0, iLocal_1312, 1) <= 5f)
	{
		iLocal_1313 = *uParam0;
		*iParam1 = 1;
		return true;
	}
	return false;
}

bool func_265(auto uParam0)
{
	Vector3 vVar0;
	
	*uParam0 = get_closest_vehicle(-1221.954f, -210.746f, 38.638f, 27f, false, 4);
	if (((*uParam0 != 0 && *uParam0 != iLocal_1311) && *uParam0 != iLocal_1312) && *uParam0 != Local_1690.f_4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(*uParam0) && !is_entity_dead(*uParam0, 0))
		{
			if (get_ped_in_vehicle_seat(*uParam0, -1) == 0)
			{
				vVar0 = {get_entity_coords(*uParam0, 1)};
				vVar0 = {vVar0};
				return true;
			}
		}
	}
	if (iLocal_1318 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1318) && !is_entity_dead(iLocal_1318, 0))
		{
			if (!func_86(iLocal_1318))
			{
				vVar0 = {get_entity_coords(iLocal_1318, 1)};
				return true;
			}
		}
	}
	return false;
}

void func_266()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1049[iVar1]))
		{
			if (iVar1 == 2)
			{
				iVar0 = iLocal_1327;
			}
			else
			{
				iVar0 = iLocal_1326;
			}
			iLocal_1049[iVar1] = PED::CREATE_PED(26, iVar0, vLocal_1267[iVar1 /*3*/], fLocal_1220[iVar1], 1, true);
			if (iVar1 == 0)
			{
				set_ped_component_variation(iLocal_1049[iVar1], false, 0, 2, 0);
				set_ped_component_variation(iLocal_1049[iVar1], 3, 0, 0, 0);
				set_ped_component_variation(iLocal_1049[iVar1], 4, 0, 1, 0);
				set_ped_component_variation(iLocal_1049[iVar1], 8, 0, 0, 0);
				set_ped_component_variation(iLocal_1049[iVar1], 11, 0, 0, 0);
			}
			else if (iVar1 == 1)
			{
				set_ped_component_variation(iLocal_1049[iVar1], false, 1, 2, 0);
				set_ped_component_variation(iLocal_1049[iVar1], 3, 0, 1, 0);
				set_ped_component_variation(iLocal_1049[iVar1], 4, 0, 0, 0);
				set_ped_component_variation(iLocal_1049[iVar1], 8, 0, 0, 0);
				set_ped_component_variation(iLocal_1049[iVar1], 11, 0, 2, 0);
			}
			else if (iVar1 == 2)
			{
				set_ped_component_variation(iLocal_1049[iVar1], false, 1, 2, 0);
				set_ped_component_variation(iLocal_1049[iVar1], 3, 0, 2, 0);
				set_ped_component_variation(iLocal_1049[iVar1], 4, 0, 1, 0);
				set_ped_component_variation(iLocal_1049[iVar1], 8, 0, 0, 0);
				set_ped_component_variation(iLocal_1049[iVar1], 11, 1, 1, 0);
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_1049[iVar1]))
		{
			set_ped_can_be_targetted(iLocal_1049[iVar1], false);
			set_ped_keep_task(iLocal_1049[iVar1], true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_1049[iVar1], 23, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_1049[iVar1], 30, false);
			set_ped_target_loss_response(iLocal_1049[iVar1], 2);
			PED::SET_PED_CONFIG_FLAG(iLocal_1049[iVar1], 104, true);
			func_250(iLocal_1049[iVar1], 1);
		}
		iVar1++;
	}
}

void func_267()
{
	func_269();
	func_268();
	set_model_as_no_longer_needed(iLocal_1328);
}

void func_268()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1053[iVar0]))
		{
			if (iVar0 == 0)
			{
				iLocal_1053[iVar0] = PED::CREATE_PED_inside_vehicle(iLocal_1312, 26, iLocal_1326, -1, 1, true);
			}
			else if (iVar0 == 1)
			{
				iLocal_1053[iVar0] = PED::CREATE_PED_inside_vehicle(iLocal_1312, 26, iLocal_1327, false, 1, true);
			}
			func_250(iLocal_1053[iVar0], 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_1053[iVar0], 3, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_1053[iVar0], 23, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_1053[iVar0], 30, false);
			set_ped_target_loss_response(iLocal_1053[iVar0], 2);
			set_ped_keep_task(iLocal_1053[iVar0], true);
		}
		iVar0++;
	}
}

void func_269()
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1312))
	{
		iLocal_1312 = create_vehicle(iLocal_1328, vLocal_1283, fLocal_1232, 1, 1);
		set_vehicle_colour_combination(iLocal_1312, 0);
	}
}

void func_270(int iParam0)
{
	func_271(&(Global_95496.f_2311), &Global_95496, iParam0, 1);
}

bool func_271(auto uParam0, auto uParam1, int iParam2, int iParam3)
{
	if (is_vehicle_driveable(iParam2, 0))
	{
		func_273(uParam0, iParam2, iParam3);
		*uParam1.f_4 = iParam2;
		if (func_272(iParam2))
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

bool func_272(int iParam0)
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

void func_273(auto uParam0, int iParam1, int iParam2)
{
	func_279(iParam1, uParam0.f_12);
	*uParam0.f_7 = func_276(iParam1, 145, 0);
	*uParam0.f_11 = func_275(iParam1);
	if (!*uParam0.f_7)
	{
		if (!*uParam0.f_10)
		{
			*uParam0.f_10 = func_274(iParam1);
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
	if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
	{
		*uParam0.f_8 = 1;
	}
	else
	{
		*uParam0.f_8 = 0;
	}
}

bool func_274(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_68319.f_484[iVar0]))
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

int func_275(int iParam0)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
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
		if (ENTITY::DOES_ENTITY_EXIST(Global_88942[iVar0]))
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

bool func_276(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
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
		if (ENTITY::DOES_ENTITY_EXIST(Global_88942[iVar0]))
		{
			if (Global_88942[iVar0] == iParam0)
			{
				if (iParam1 == 145 || iParam1 == Global_88952[iVar0])
				{
					if (iParam2 == 0 || ENTITY::GET_ENTITY_MODEL(iParam0) == func_277(iParam1, iParam2))
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

int func_277(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_15(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_278(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_278(int iParam0, auto uParam1, int iParam2)
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

void func_279(int iParam0, auto uParam1)
{
	int iVar0;
	
	if (is_vehicle_driveable(iParam0, 0))
	{
		func_282(uParam1);
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
		func_281(&iParam0, uParam1.f_9, uParam1.f_59);
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (is_vehicle_extra_turned_on(iParam0, iVar0 + 1))
			{
				GAMEPLAY::SET_BIT(uParam1.f_77, func_280(iVar0 + 1));
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

int func_280(int iParam0)
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

bool func_281(int iParam0, auto uParam1, auto uParam2)
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

void func_282(auto uParam0)
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

void func_283(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
		func_151(1);
		if (iParam0 <= Global_91315)
		{
		}
		iVar1 = func_340(get_this_script_name(), 1);
		if (iVar1 != -1 && iVar1 != 94)
		{
			Global_101154.f_7775.f_330[iVar1 /*6*/].f_1 = 0;
			iVar2 = func_338(iVar1);
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
			iVar5 = func_333(get_this_script_name(), 1);
			if (iVar5 != -1)
			{
				Global_101154.f_17264[iVar5 /*6*/].f_4 = 0;
				MemCopy(&uVar6, {func_332(iVar5)}, 4);
				playstats_mission_checkpoint(&uVar6, 0, Global_91315, iParam0);
			}
			else
			{
				iVar10 = func_331(&(Global_91278.f_3));
				if (iVar10 > -1)
				{
					Global_101154.f_29511.f_4[iVar10] = 0;
				}
			}
		}
		Global_85789 = iParam2;
		Global_91315 = iParam0;
		func_284(iParam0, sParam1, iParam4, iParam5);
		if (are_strings_equal(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_91315)
	{
	}
}

void func_284(int iParam0, auto uParam1, int iParam2, int iParam3)
{
	func_285(&Global_95496, get_this_script_name(), iParam0, uParam1, iParam3, iParam2);
}

void func_285(auto uParam0, char* sParam1, auto uParam2, auto uParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = func_13();
	*uParam0.f_1 = func_320();
	_get_weather_type_transition(uParam0.f_6, uParam0.f_7, uParam0.f_8);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		func_306(uParam0.f_2305, 0);
		func_305(PLAYER::PLAYER_PED_ID());
		func_299(PLAYER::PLAYER_PED_ID(), 0);
		get_current_ped_weapon(PLAYER::PLAYER_PED_ID(), uParam0.f_2, 1);
		if (*uParam0.f_2 == 0 || *uParam0.f_2 == joaat("object"))
		{
			*uParam0.f_2 = joaat("weapon_unarmed");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		*uParam0.f_17[iVar1] = Global_101154.f_1826.f_539.f_294[iVar1];
		if (iVar1 == func_298())
		{
			func_291(PLAYER::PLAYER_PED_ID(), uParam0.f_616[iVar1 /*65*/], 1);
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
				STATS::STAT_GET_INT(joaat("sp0_weap_purch_0"), uParam0.f_1665[iVar1 /*32*/][0], -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_purch_1"), uParam0.f_1665[iVar1 /*32*/][1], -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_0"), uParam0.f_1665[iVar1 /*32*/].f_5[0], -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_1"), uParam0.f_1665[iVar1 /*32*/].f_5[1], -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_2"), uParam0.f_1665[iVar1 /*32*/].f_5[2], -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_3"), uParam0.f_1665[iVar1 /*32*/].f_5[3], -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_4"), uParam0.f_1665[iVar1 /*32*/].f_5[4], -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_0"), uParam0.f_1665[iVar1 /*32*/].f_16[0], -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_1"), uParam0.f_1665[iVar1 /*32*/].f_16[1], -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_2"), uParam0.f_1665[iVar1 /*32*/].f_16[2], -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_3"), uParam0.f_1665[iVar1 /*32*/].f_16[3], -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_4"), uParam0.f_1665[iVar1 /*32*/].f_16[4], -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_5"), uParam0.f_1665[iVar1 /*32*/].f_16[5], -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_6"), uParam0.f_1665[iVar1 /*32*/].f_16[6], -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_7"), uParam0.f_1665[iVar1 /*32*/].f_16[7], -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_8"), uParam0.f_1665[iVar1 /*32*/].f_16[8], -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_9"), uParam0.f_1665[iVar1 /*32*/].f_16[9], -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_10"), uParam0.f_1665[iVar1 /*32*/].f_16[10], -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_11"), uParam0.f_1665[iVar1 /*32*/].f_16[11], -1);
				break;
			
			case 1:
				STATS::STAT_GET_INT(joaat("sp1_weap_purch_0"), uParam0.f_1665[iVar1 /*32*/][0], -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_purch_1"), uParam0.f_1665[iVar1 /*32*/][1], -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_0"), uParam0.f_1665[iVar1 /*32*/].f_5[0], -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_1"), uParam0.f_1665[iVar1 /*32*/].f_5[1], -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_2"), uParam0.f_1665[iVar1 /*32*/].f_5[2], -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_3"), uParam0.f_1665[iVar1 /*32*/].f_5[3], -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_4"), uParam0.f_1665[iVar1 /*32*/].f_5[4], -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_0"), uParam0.f_1665[iVar1 /*32*/].f_16[0], -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_1"), uParam0.f_1665[iVar1 /*32*/].f_16[1], -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_2"), uParam0.f_1665[iVar1 /*32*/].f_16[2], -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_3"), uParam0.f_1665[iVar1 /*32*/].f_16[3], -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_4"), uParam0.f_1665[iVar1 /*32*/].f_16[4], -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_5"), uParam0.f_1665[iVar1 /*32*/].f_16[5], -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_6"), uParam0.f_1665[iVar1 /*32*/].f_16[6], -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_7"), uParam0.f_1665[iVar1 /*32*/].f_16[7], -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_8"), uParam0.f_1665[iVar1 /*32*/].f_16[8], -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_9"), uParam0.f_1665[iVar1 /*32*/].f_16[9], -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_10"), uParam0.f_1665[iVar1 /*32*/].f_16[10], -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_11"), uParam0.f_1665[iVar1 /*32*/].f_16[11], -1);
				break;
			
			case 2:
				STATS::STAT_GET_INT(joaat("sp2_weap_purch_0"), uParam0.f_1665[iVar1 /*32*/][0], -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_purch_1"), uParam0.f_1665[iVar1 /*32*/][1], -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_0"), uParam0.f_1665[iVar1 /*32*/].f_5[0], -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_1"), uParam0.f_1665[iVar1 /*32*/].f_5[1], -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_2"), uParam0.f_1665[iVar1 /*32*/].f_5[2], -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_3"), uParam0.f_1665[iVar1 /*32*/].f_5[3], -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_4"), uParam0.f_1665[iVar1 /*32*/].f_5[4], -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_0"), uParam0.f_1665[iVar1 /*32*/].f_16[0], -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_1"), uParam0.f_1665[iVar1 /*32*/].f_16[1], -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_2"), uParam0.f_1665[iVar1 /*32*/].f_16[2], -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_3"), uParam0.f_1665[iVar1 /*32*/].f_16[3], -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_4"), uParam0.f_1665[iVar1 /*32*/].f_16[4], -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_5"), uParam0.f_1665[iVar1 /*32*/].f_16[5], -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_6"), uParam0.f_1665[iVar1 /*32*/].f_16[6], -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_7"), uParam0.f_1665[iVar1 /*32*/].f_16[7], -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_8"), uParam0.f_1665[iVar1 /*32*/].f_16[8], -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_9"), uParam0.f_1665[iVar1 /*32*/].f_16[9], -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_10"), uParam0.f_1665[iVar1 /*32*/].f_16[10], -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_11"), uParam0.f_1665[iVar1 /*32*/].f_16[11], -1);
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
	STATS::STAT_GET_INT(joaat("sp0_special_ability"), uParam0.f_1762[0], -1);
	STATS::STAT_GET_INT(joaat("sp1_special_ability"), uParam0.f_1762[1], -1);
	STATS::STAT_GET_INT(joaat("sp2_special_ability"), uParam0.f_1762[2], -1);
	*uParam0.f_5 = 145;
	if (iParam4 == 1)
	{
		func_287(uParam0.f_2311, uParam0, iParam5, 1, 1, 0);
	}
	func_286(uParam0.f_2401);
	uParam3 = uParam3;
	uParam2 = uParam2;
}

bool func_286(auto uParam0)
{
	*uParam0 = Global_87460;
	*uParam0.f_1 = Global_87461;
	*uParam0.f_2 = 0;
	*uParam0.f_3 = 0;
	return true;
}

void func_287(auto uParam0, auto uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam2 == 0)
	{
		iParam2 = PLAYER::PLAYER_PED_ID();
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		*uParam1.f_5 = func_16(iParam2);
	}
	if (func_288(iParam2, &iVar0, iParam3, iParam5))
	{
		func_271(uParam0, uParam1, iVar0, iParam4);
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!is_entity_dead(iVar0, 0))
		{
			if (is_vehicle_model(iVar0, joaat("skylift")) && is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), iVar0, 0))
			{
				func_271(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

bool func_288(int iParam0, auto uParam1, int iParam2, int iParam3)
{
	char* sVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				*uParam1 = get_players_last_vehicle();
			}
			else
			{
				*uParam1 = get_vehicle_ped_is_in(iParam0, 1);
			}
			if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
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
						if (func_289(*uParam1, func_13(), 1))
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

bool func_289(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	char* sVar1;
	auto uVar9;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !is_vehicle_driveable(iParam0, 0))
	{
		return false;
	}
	iVar0 = 0;
	while (func_290(iParam1, iVar0, &sVar1, &uVar9))
	{
		if (!iParam2 || GAMEPLAY::IS_BIT_SET(Global_101154.f_5919[uVar9], false))
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

bool func_290(int iParam0, int iParam1, char* sParam2, auto uParam3)
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

void func_291(int iParam0, auto uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = func_16(iParam0);
		iVar1 = false;
		while (iVar1 < 12)
		{
			func_297(iParam0, iVar1, uParam1.f_13[iVar1], uParam1[iVar1], uParam1.f_26[iVar1], iParam2, 145);
			iVar1++;
		}
		iVar1 = false;
		while (iVar1 < 9)
		{
			func_296(iParam0, iVar1, uParam1.f_39[iVar1], uParam1.f_49[iVar1], iParam2, 145);
			iVar1++;
		}
		if (func_15(iVar0))
		{
			*uParam1.f_59 = Global_101154.f_1826.f_539[iVar0 /*65*/].f_59;
			*uParam1.f_60 = Global_101154.f_1826.f_539[iVar0 /*65*/].f_60;
			*uParam1.f_61 = Global_101154.f_1826.f_539[iVar0 /*65*/].f_61;
			*uParam1.f_62 = Global_101154.f_1826.f_539[iVar0 /*65*/].f_62;
			*uParam1.f_63 = Global_101154.f_1826.f_539[iVar0 /*65*/].f_63;
			*uParam1.f_64 = Global_101154.f_1826.f_539[iVar0 /*65*/].f_64;
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			if (func_295(161, -1))
			{
				*uParam1.f_59 = func_292(2043, Global_69309, 0);
			}
			else
			{
				*uParam1.f_59 = func_292(745, Global_69309, 0);
			}
			*uParam1.f_60 = func_292(746, Global_69309, 0);
			*uParam1.f_61 = func_292(747, Global_69309, 0);
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iParam0 == PLAYER::PLAYER_PED_ID())
		{
			if (func_295(161, -1))
			{
				*uParam1.f_59 = func_292(2043, Global_69309, 0);
			}
			else
			{
				*uParam1.f_59 = func_292(745, Global_69309, 0);
			}
		}
	}
}

int func_292(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	auto uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2469339[iParam0 /*5*/][func_293(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_293(auto uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_294();
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

auto func_294()
{
	return Global_1312747;
}

int func_295(int iParam0, int iParam1)
{
	int iVar0;
	auto uVar1;
	
	iVar0 = Global_2490231[iParam0 /*5*/][func_293(iParam1)];
	if (stat_get_bool(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_296(int iParam0, int iParam1, auto uParam2, auto uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	iVar0 = func_16(iParam0);
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

void func_297(int iParam0, int iParam1, auto uParam2, auto uParam3, auto uParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	iVar0 = func_16(iParam0);
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

auto func_298()
{
	func_14();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_299(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_16(iParam0);
	if (func_15(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		if (iParam0 == PLAYER::PLAYER_PED_ID())
		{
			func_300(iParam0, &(Global_101154.f_1826.f_539.f_298[iVar0 /*284*/]));
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
				STATS::STAT_SET_INT(joaat("sp0_parachute_current_tint"), iVar3, 1);
			}
			else if (iVar0 == 1)
			{
				STATS::STAT_SET_INT(joaat("sp1_parachute_current_tint"), iVar3, 1);
			}
			else if (iVar0 == 2)
			{
				STATS::STAT_SET_INT(joaat("sp2_parachute_current_tint"), iVar3, 1);
			}
		}
	}
}

void func_300(int iParam0, auto uParam1)
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
	
	if (!PED::IS_PED_INJURED(iParam0))
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
			iVar3 = func_304(iVar0);
			if (iVar3 != 0)
			{
				vVar4.x = get_ped_weapontype_in_slot(iParam0, func_304(iVar0));
				vVar4.y = 0;
				vVar4.z = 0;
				if (vVar4.x != 0 && vVar4.x != joaat("weapon_unarmed"))
				{
					vVar4.y = get_ammo_in_ped_weapon(iParam0, vVar4.x);
					if (vVar4.x == joaat("gadget_parachute"))
					{
						vVar4.y = 1;
					}
					GAMEPLAY::SET_BIT(&(vVar4.f_2), 20 + get_ped_weapon_tint_index(iParam0, vVar4.x));
					if (vVar4.y == -1)
					{
						if (!get_max_ammo(iParam0, vVar4.x, &(vVar4.f_1)))
						{
							vVar4.y = 0;
						}
					}
					*(uParam1[iVar0 /*3*/]).f_1 = vVar4.y;
					iVar1 = false;
					iVar2 = func_302(vVar4.x, iVar1);
					while (iVar2 != 0)
					{
						if (has_ped_got_weapon_component(iParam0, vVar4.x, iVar2))
						{
							GAMEPLAY::SET_BIT(&(vVar4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_302(vVar4.x, iVar1);
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
			if ((get_dlc_weapon_data(iVar7, &Var9) && !func_301(Var9.f_1)) && iVar70 < 50)
			{
				if (!_is_dlc_data_empty(Var9))
				{
					vVar4.x = Var9.f_1;
					vVar4.y = 0;
					vVar4.z = 0;
					vVar4.y = get_ammo_in_ped_weapon(iParam0, vVar4.x);
					if (has_ped_got_weapon(iParam0, vVar4.x, 0))
					{
						GAMEPLAY::SET_BIT(&(vVar4.f_2), 20 + get_ped_weapon_tint_index(iParam0, vVar4.x));
					}
					else
					{
						GAMEPLAY::SET_BIT(&(vVar4.f_2), 20);
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
								GAMEPLAY::SET_BIT(&(vVar4.f_2), iVar1);
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

bool func_301(int iParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
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

int func_302(int iParam0, int iParam1)
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
				iVar1 = func_303(iParam0, &uVar2);
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

int func_303(int iParam0, auto uParam1)
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

int func_304(int iParam0)
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

void func_305(int iParam0)
{
	int iVar0;
	
	iVar0 = func_16(iParam0);
	if (func_15(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		Global_101154.f_1826.f_539.f_294[iVar0] = get_ped_armour(iParam0);
	}
}

void func_306(auto uParam0, int iParam1)
{
	int iVar0;
	Vector3 vVar1;
	auto uVar4;
	int iVar5;
	
	*uParam0 = {get_entity_coords(PLAYER::PLAYER_PED_ID(), 1)};
	*uParam0.f_3 = get_entity_heading(PLAYER::PLAYER_PED_ID());
	*uParam0.f_5 = get_ped_parachute_state(PLAYER::PLAYER_PED_ID());
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
	else if (GAMEPLAY::IS_BIT_SET(Global_69737, 4))
	{
		*uParam0 = {452.0255f, 5571.85f, 780.1859f};
		*uParam0.f_3 = 78.9858f;
	}
	else if (GAMEPLAY::IS_BIT_SET(Global_69737, 5))
	{
		*uParam0 = {-745.4462f, 5595.146f, 40.6594f};
		*uParam0.f_3 = 261.747f;
	}
	else if (GAMEPLAY::IS_BIT_SET(Global_69737, 6))
	{
		*uParam0 = {-1675.521f, -1125.59f, 12.091f};
		*uParam0.f_3 = 271.8208f;
	}
	else if (GAMEPLAY::IS_BIT_SET(Global_69737, 7))
	{
		*uParam0 = {-1631.219f, -1112.805f, 12.0212f};
		*uParam0.f_3 = 316.8879f;
	}
	else if (get_interior_from_entity(PLAYER::PLAYER_PED_ID()) == get_interior_at_coords_with_type(1272.659f, -1715.467f, 53.7715f, "v_lesters"))
	{
		*uParam0 = {1276.956f, -1725.189f, 53.6551f};
		*uParam0.f_3 = 204.1703f;
	}
	else if (is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), -415.4365f, 2068.289f, 113.3002f, -564.9516f, 1884.703f, 134.0403f, 258.75f, 0, true, 0) || is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), -596.4706f, 2089.921f, 125.4128f, -581.2134f, 2036.256f, 136.2836f, 9.5f, 0, true, 0))
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
		if (func_309(&iVar0))
		{
			if (func_308(iVar0, &vVar1, &uVar4))
			{
				vVar1.z++;
				*uParam0 = {vVar1};
				*uParam0.f_3 = uVar4;
			}
		}
		else if (is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, true, 0))
		{
			iVar5 = func_13();
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
		else if (is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), 483.7175f, -1326.63f, 28.2135f, 474.9644f, -1307.998f, 34.49498f, 12f, 0, true, 0))
		{
			*uParam0 = {495.4108f, -1306.08f, 29.2883f};
			*uParam0.f_3 = 213.6273f;
		}
		else if (is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), -1146.77f, -1534.22f, 3.37f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, true, 0))
		{
			*uParam0 = {-1160.095f, -1515.407f, 3.1496f};
			*uParam0.f_3 = 305.6424f;
		}
		else if (is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), 439.5432f, -996.9769f, 24.88307f, 428.2935f, -997.0192f, 28.57458f, 8.5f, 0, true, 0))
		{
			*uParam0 = {431.8853f, -1013.133f, 28.7907f};
			*uParam0.f_3 = 186.6814f;
		}
		else if (func_307(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f))
		{
			*uParam0 = {279.4137f, -585.8815f, 43.2502f};
			*uParam0.f_3 = 48.8028f;
		}
	}
}

bool func_307(Vector3 vParam0, char* sParam1, Vector3 vParam2)
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

int func_308(int iParam0, auto uParam1, auto uParam2)
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
	return !func_44(*uParam1, 0f, 0f, 0f, 0);
}

bool func_309(auto uParam0)
{
	if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (func_319())
		{
			*uParam0 = func_315(get_entity_coords(PLAYER::PLAYER_PED_ID(), 0), 5, -1, 0, 1, -1);
			if (func_314(*uParam0) && !func_310(*uParam0))
			{
				return true;
			}
		}
	}
	return false;
}

int func_310(int iParam0)
{
	return func_311(iParam0, 0, 1);
}

int func_311(int iParam0, int iParam1, int iParam2)
{
	if (iParam2)
	{
		return GAMEPLAY::IS_BIT_SET(Global_91330.f_1300[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_313() == 0)
		{
			return GAMEPLAY::IS_BIT_SET(func_292(func_312(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return GAMEPLAY::IS_BIT_SET(Global_101154.f_668[iParam0], iParam1);
	}
	return false;
}

int func_312(int iParam0)
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

auto func_313()
{
	return Global_25120;
}

int func_314(int iParam0)
{
	return func_311(iParam0, 5, 1);
}

int func_315(Vector3 vParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
		if (iParam3 == 5 || iParam3 == func_318(iVar0))
		{
			if (!iParam5 || func_317(iVar0))
			{
				fVar1 = get_distance_between_coords(vParam0, func_316(iVar0, 0), 1);
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

Vector3 func_316(int iParam0, int iParam1)
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

int func_317(int iParam0)
{
	return func_311(iParam0, 0, 0);
}

int func_318(int iParam0)
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

int func_319()
{
	return Global_91330.f_296 > 0;
}

auto func_320()
{
	auto uVar0;
	
	func_330(&uVar0, get_clock_seconds());
	func_329(&uVar0, get_clock_minutes());
	func_328(&uVar0, get_clock_hours());
	func_323(&uVar0, get_clock_day_of_month());
	func_322(&uVar0, get_clock_month());
	func_321(&uVar0, get_clock_year());
	return uVar0;
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
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 -= *uParam0 & 15;
	*uParam0 = (*uParam0 || iParam1);
}

void func_323(auto uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_327(*uParam0);
	iVar1 = func_325(*uParam0);
	if (iParam1 < 1 || iParam1 > func_324(iVar0, iVar1))
	{
		return;
	}
	*uParam0 -= *uParam0 & 496;
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

int func_324(int iParam0, int iParam1)
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

auto func_325(int iParam0)
{
	return shift_right(iParam0, 26) & 31 * func_326(GAMEPLAY::IS_BIT_SET(iParam0, 31), -1, 1) + 2011;
}

int func_326(int iParam0, int iParam1, int iParam2)
{
	if (iParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_327(auto uParam0)
{
	return uParam0 & 15;
}

void func_328(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 -= *uParam0 & 15872;
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_329(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 -= *uParam0 & 1032192;
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_330(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 -= *uParam0 & 66060288;
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

int func_331(char* sParam0)
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

struct<2> func_332(int iParam0)
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

int func_333(char* sParam0, int iParam1)
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
		func_334(iVar0, &sVar1);
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

void func_334(int iParam0, auto uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_335(uParam1, "Abigail1", func_337(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_336(iParam0), 1, 0);
			break;
		
		case 1:
			func_335(uParam1, "Abigail2", func_337(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_336(iParam0), 1, 0);
			break;
		
		case 2:
			func_335(uParam1, "Barry1", func_337(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_336(iParam0), 1, 0);
			break;
		
		case 3:
			func_335(uParam1, "Barry2", func_337(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_336(iParam0), 1, 1);
			break;
		
		case 4:
			func_335(uParam1, "Barry3", func_337(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_336(iParam0), 0, 0);
			break;
		
		case 5:
			func_335(uParam1, "Barry3A", func_337(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_336(iParam0), 0, 1);
			break;
		
		case 6:
			func_335(uParam1, "Barry3C", func_337(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_336(iParam0), 0, 1);
			break;
		
		case 7:
			func_335(uParam1, "Barry4", func_337(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_336(iParam0), 0, 0);
			break;
		
		case 8:
			func_335(uParam1, "Dreyfuss1", func_337(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_336(iParam0), 0, 0);
			break;
		
		case 9:
			func_335(uParam1, "Epsilon1", func_337(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_336(iParam0), 0, 0);
			break;
		
		case 10:
			func_335(uParam1, "Epsilon2", func_337(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_336(iParam0), 1, 0);
			break;
		
		case 11:
			func_335(uParam1, "Epsilon3", func_337(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_336(iParam0), 0, 0);
			break;
		
		case 12:
			func_335(uParam1, "Epsilon4", func_337(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_336(iParam0), 0, 0);
			break;
		
		case 13:
			func_335(uParam1, "Epsilon5", func_337(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_336(iParam0), 1, 0);
			break;
		
		case 14:
			func_335(uParam1, "Epsilon6", func_337(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_336(iParam0), 0, 1);
			break;
		
		case 15:
			func_335(uParam1, "Epsilon7", func_337(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_336(iParam0), 0, 0);
			break;
		
		case 16:
			func_335(uParam1, "Epsilon8", func_337(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_336(iParam0), 1, 0);
			break;
		
		case 17:
			func_335(uParam1, "Extreme1", func_337(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_336(iParam0), 0, 1);
			break;
		
		case 18:
			func_335(uParam1, "Extreme2", func_337(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_336(iParam0), 0, 1);
			break;
		
		case 19:
			func_335(uParam1, "Extreme3", func_337(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_336(iParam0), 0, 1);
			break;
		
		case 20:
			func_335(uParam1, "Extreme4", func_337(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_336(iParam0), 0, 0);
			break;
		
		case 21:
			func_335(uParam1, "Fanatic1", func_337(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_336(iParam0), 1, 0);
			break;
		
		case 22:
			func_335(uParam1, "Fanatic2", func_337(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_336(iParam0), 1, 0);
			break;
		
		case 23:
			func_335(uParam1, "Fanatic3", func_337(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_336(iParam0), 0, 1);
			break;
		
		case 24:
			func_335(uParam1, "Hao1", func_337(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_336(iParam0), 0, 1);
			break;
		
		case 25:
			func_335(uParam1, "Hunting1", func_337(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_336(iParam0), 0, 1);
			break;
		
		case 26:
			func_335(uParam1, "Hunting2", func_337(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_336(iParam0), 0, 1);
			break;
		
		case 27:
			func_335(uParam1, "Josh1", func_337(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_336(iParam0), 1, 0);
			break;
		
		case 28:
			func_335(uParam1, "Josh2", func_337(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_336(iParam0), 1, 1);
			break;
		
		case 29:
			func_335(uParam1, "Josh3", func_337(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_336(iParam0), 1, 1);
			break;
		
		case 30:
			func_335(uParam1, "Josh4", func_337(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_336(iParam0), 1, 0);
			break;
		
		case 31:
			func_335(uParam1, "Maude1", func_337(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_336(iParam0), 0, 1);
			break;
		
		case 32:
			func_335(uParam1, "Minute1", func_337(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_336(iParam0), 0, 1);
			break;
		
		case 33:
			func_335(uParam1, "Minute2", func_337(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_336(iParam0), 0, 1);
			break;
		
		case 34:
			func_335(uParam1, "Minute3", func_337(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_336(iParam0), 0, 1);
			break;
		
		case 35:
			func_335(uParam1, "MrsPhilips1", func_337(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_336(iParam0), 0, 0);
			break;
		
		case 36:
			func_335(uParam1, "MrsPhilips2", func_337(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_336(iParam0), 0, 0);
			break;
		
		case 37:
			func_335(uParam1, "Nigel1", func_337(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_336(iParam0), 1, 0);
			break;
		
		case 38:
			func_335(uParam1, "Nigel1A", func_337(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_336(iParam0), 1, 1);
			break;
		
		case 39:
			func_335(uParam1, "Nigel1B", func_337(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_336(iParam0), 1, 1);
			break;
		
		case 40:
			func_335(uParam1, "Nigel1C", func_337(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_336(iParam0), 1, 1);
			break;
		
		case 41:
			func_335(uParam1, "Nigel1D", func_337(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_336(iParam0), 1, 1);
			break;
		
		case 42:
			func_335(uParam1, "Nigel2", func_337(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_336(iParam0), 1, 1);
			break;
		
		case 43:
			func_335(uParam1, "Nigel3", func_337(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_336(iParam0), 1, 1);
			break;
		
		case 44:
			func_335(uParam1, "Omega1", func_337(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_336(iParam0), 0, 0);
			break;
		
		case 45:
			func_335(uParam1, "Omega2", func_337(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_336(iParam0), 0, 0);
			break;
		
		case 46:
			func_335(uParam1, "Paparazzo1", func_337(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_336(iParam0), 0, 1);
			break;
		
		case 47:
			func_335(uParam1, "Paparazzo2", func_337(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_336(iParam0), 0, 1);
			break;
		
		case 48:
			func_335(uParam1, "Paparazzo3", func_337(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_336(iParam0), 0, 0);
			break;
		
		case 49:
			func_335(uParam1, "Paparazzo3A", func_337(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_336(iParam0), 0, 1);
			break;
		
		case 50:
			func_335(uParam1, "Paparazzo3B", func_337(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_336(iParam0), 0, 1);
			break;
		
		case 51:
			func_335(uParam1, "Paparazzo4", func_337(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_336(iParam0), 0, 0);
			break;
		
		case 52:
			func_335(uParam1, "Rampage1", func_337(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_336(iParam0), 0, 0);
			break;
		
		case 54:
			func_335(uParam1, "Rampage3", func_337(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_336(iParam0), 1, 0);
			break;
		
		case 55:
			func_335(uParam1, "Rampage4", func_337(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_336(iParam0), 1, 0);
			break;
		
		case 56:
			func_335(uParam1, "Rampage5", func_337(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_336(iParam0), 0, 0);
			break;
		
		case 53:
			func_335(uParam1, "Rampage2", func_337(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_336(iParam0), 1, 0);
			break;
		
		case 57:
			func_335(uParam1, "TheLastOne", func_337(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_336(iParam0), 0, 1);
			break;
		
		case 58:
			func_335(uParam1, "Tonya1", func_337(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_336(iParam0), 0, 1);
			break;
		
		case 59:
			func_335(uParam1, "Tonya2", func_337(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_336(iParam0), 0, 1);
			break;
		
		case 60:
			func_335(uParam1, "Tonya3", func_337(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_336(iParam0), 0, 1);
			break;
		
		case 61:
			func_335(uParam1, "Tonya4", func_337(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_336(iParam0), 0, 1);
			break;
		
		case 62:
			func_335(uParam1, "Tonya5", func_337(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_336(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_335(auto uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, Vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, auto uParam19, int iParam20, int iParam21)
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

bool func_336(int iParam0)
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

struct<2> func_337(int iParam0)
{
	char[8] cVar0;
	struct<2> Var2;
	
	StringCopy(&cVar0, "", 8);
	Var2 = {func_332(iParam0)};
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

int func_338(int iParam0)
{
	switch (iParam0)
	{
		case 69:
		case 70:
			return func_339(Global_101154.f_7775.f_99.f_205[10]);
			break;
		
		case 74:
		case 75:
			return func_339(Global_101154.f_7775.f_99.f_205[8]);
			break;
		
		case 84:
		case 85:
			return func_339(Global_101154.f_7775.f_99.f_205[11]);
			break;
		
		case 90:
			return func_339(Global_101154.f_7775.f_99.f_205[7]);
			break;
		
		case 93:
			return func_339(Global_101154.f_7775.f_99.f_205[9]);
			break;
	}
	return 0;
}

int func_339(int iParam0)
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

int func_340(char* sParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = get_hash_key(sParam0);
	iVar1 = func_341(iVar0, 1);
	if (iVar1 == -1 && !iParam1)
	{
	}
	return iVar1;
}

int func_341(int iParam0, int iParam1)
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

void func_342()
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
		{
			iVar0 = get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (is_entity_in_angled_area(iVar0, -1214.517f, -158.91f, -39.165f, -1243.589f, -238.784f, 39.165f, 15f, 0, false, 0) && !is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), iVar0, 0))
			{
				if (get_entity_speed(iVar0) <= 0.5f)
				{
					if (!func_52(&iLocal_1344))
					{
						func_49(&iLocal_1344);
					}
				}
				else if (func_52(&iLocal_1344))
				{
					func_50(&iLocal_1344);
				}
				if (func_52(&iLocal_1344))
				{
					if (func_46(&iLocal_1344) > 10f)
					{
						func_31(2);
					}
				}
			}
			else if (func_52(&iLocal_1344))
			{
				func_50(&iLocal_1344);
			}
		}
	}
}

void func_343()
{
	switch (iLocal_1192)
	{
		case 0:
			if (func_374(1084227584, 1) || (iLocal_1150 && _0x7D41E9D2D17C5B2D(iLocal_1129)))
			{
				func_373(-1248.398f, -183.366f, 37.72881f, -1216.437f, -196.8727f, 44.07541f, 59.25f, vLocal_1664, fLocal_1667, 1, 1, 1, 0, 0);
				clear_area_of_vehicles(-1220.57f, -185.96f, 38.4f, 50f, 0, 0, 0, 0, false);
				clear_area_of_projectiles(-1220.57f, -185.96f, 38.4f, 50f, 0);
				func_372();
				func_371();
				if (!is_entity_dead(iLocal_1311, 0))
				{
					if (is_vehicle_driveable(iLocal_1311, 0))
					{
						start_playback_recorded_vehicle(iLocal_1311, 107, "ASSOJva", 1);
						skip_time_in_playback_recorded_vehicle(iLocal_1311, 2500f);
					}
				}
				if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
					{
						set_veh_radio_station(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0), "OFF");
					}
				}
				iLocal_1192++;
			}
			else if (_0x7D41E9D2D17C5B2D(iLocal_1129))
			{
			}
			break;
		
		case 1:
			if (func_344())
			{
				iLocal_1193 = 0;
				set_player_wanted_level(player_id(), false, 0);
				func_470();
				func_237();
				iLocal_1030 = 9;
			}
			break;
	}
}

bool func_344()
{
	int iVar0;
	
	switch (iLocal_1193)
	{
		case 0:
			func_370(0, 0, 1);
			func_369();
			shake_cam(iLocal_1329, "HAND_SHAKE", 0.2f);
			shake_cam(iLocal_1330, "HAND_SHAKE", 0.2f);
			set_cam_active_with_interp(iLocal_1330, iLocal_1329, 6000, 0, 0);
			render_script_cams(true, false, 3000, 1, 0, 0);
			clear_help(1);
			clear_prints();
			func_232("ASS_VA_SNIPE1", 7500, 1);
			if (iLocal_1150)
			{
				func_368();
				set_gameplay_cam_relative_heading(0f);
				set_gameplay_cam_relative_pitch(0f, 1f);
			}
			else
			{
				func_359();
			}
			settimera(0);
			iLocal_1193++;
			break;
		
		case 1:
			if (!is_entity_dead(iLocal_1311, 0))
			{
				if (is_vehicle_driveable(iLocal_1311, 0))
				{
					if (timera() > 6000)
					{
						if (is_playback_going_on_for_vehicle(iLocal_1311))
						{
							stop_playback_recorded_vehicle(iLocal_1311);
						}
						start_playback_recorded_vehicle(iLocal_1311, 102, "ASSOJva", 1);
						skip_time_in_playback_recorded_vehicle(iLocal_1311, 4500f);
						_0x1F2E4E06DEA8992B(iLocal_1311, 1);
						func_232("ASS_VA_SNIPE2", 7500, 1);
						set_cam_params(iLocal_1329, -1218.861f, -191.0496f, 38.83616f, 3.519839f, -0.000706f, 42.27108f, 38f, false, 1, 1, 2);
						set_cam_near_dof(iLocal_1329, 0.5f);
						set_cam_far_dof(iLocal_1329, 7f);
						shake_cam(iLocal_1329, "HAND_SHAKE", 0.2f);
						set_cam_params(iLocal_1330, -1218.91f, -190.8791f, 38.84585f, 3.519839f, -0.000706f, 43.33815f, 38f, false, 1, 1, 2);
						set_cam_near_dof(iLocal_1330, 0.7f);
						set_cam_far_dof(iLocal_1330, 10f);
						shake_cam(iLocal_1330, "HAND_SHAKE", 0.2f);
						set_cam_active_with_interp(iLocal_1330, iLocal_1329, 2000, 3, 3);
						iLocal_1193++;
					}
				}
			}
			break;
		
		case 2:
			if (!is_entity_dead(iLocal_1311, 0))
			{
				if (is_vehicle_driveable(iLocal_1311, 0))
				{
					if (get_time_position_in_recording(iLocal_1311) >= 7000f)
					{
						pause_playback_recorded_vehicle(iLocal_1311);
						iLocal_1191 = 0;
						while (iLocal_1191 < 3)
						{
							if (!is_entity_dead(iLocal_1049[iLocal_1191], 0))
							{
								if (iLocal_1191 == 0)
								{
									iVar0 = 1250;
								}
								else if (iLocal_1191 == 1)
								{
									iVar0 = 400;
								}
								else
								{
									iVar0 = 0;
								}
								if (get_script_task_status(iLocal_1049[iLocal_1191], 242628503) != 1)
								{
									clear_sequence_task(&iLocal_1323);
									open_sequence_task(&iLocal_1323);
									task_leave_any_vehicle(false, iVar0, 0);
									task_follow_nav_mesh_to_coord(false, vLocal_1247[iLocal_1191 /*3*/], 1f, 20000, 0.25f, 0, 40000f);
									close_sequence_task(iLocal_1323);
									task_perform_sequence(iLocal_1049[iLocal_1191], iLocal_1323);
									clear_sequence_task(&iLocal_1323);
								}
							}
							iLocal_1191++;
						}
						settimera(0);
						iLocal_1193++;
					}
				}
			}
			break;
		
		case 3:
			if (timera() >= 2000)
			{
				if (get_follow_ped_cam_view_mode() == 4)
				{
					set_cam_params(iLocal_1329, -1265.549f, -213.4919f, 43.0913f, -0.055f, 0.0543f, -50.0795f, 38f, false, 1, 1, 2);
					shake_cam(iLocal_1329, "HAND_SHAKE", 0.2f);
					set_cam_params(iLocal_1330, -1266.063f, -213.922f, 43.0918f, -0.055f, 0.0543f, -50.0795f, 38f, false, 1, 1, 2);
					shake_cam(iLocal_1330, "HAND_SHAKE", 0.2f);
					set_cam_active_with_interp(iLocal_1330, iLocal_1329, 4000, 3, 3);
					iLocal_1216 = 4000;
				}
				else
				{
					set_cam_params(iLocal_1329, -1266.193f, -215.217f, 43.2442f, -3.1088f, 0.0498f, -48.5594f, 38f, false, 1, 1, 2);
					shake_cam(iLocal_1329, "HAND_SHAKE", 0.2f);
					set_cam_params(iLocal_1330, -1267.53f, -215.7824f, 43.1067f, -9.2365f, 0.0498f, -48.3561f, 38f, false, 1, 1, 2);
					shake_cam(iLocal_1330, "HAND_SHAKE", 0.2f);
					set_cam_active_with_interp(iLocal_1330, iLocal_1329, 4000, 3, 3);
					iLocal_1216 = 4000;
				}
				settimera(0);
				iLocal_1193++;
			}
			break;
		
		case 4:
			if (!iLocal_1189)
			{
				if (get_follow_ped_cam_view_mode() == 4)
				{
					if (timera() >= iLocal_1216 - 300)
					{
						_start_screen_effect("CamPushInNeutral", false, 0);
						play_sound_frontend(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						iLocal_1189 = 1;
					}
				}
			}
			if (timera() >= iLocal_1216)
			{
				if (is_vehicle_driveable(iLocal_1311, 0))
				{
					if (is_playback_going_on_for_vehicle(iLocal_1311))
					{
						stop_playback_recorded_vehicle(iLocal_1311);
					}
				}
				remove_vehicle_recording(102, "ASSOJva");
				remove_vehicle_recording(107, "ASSOJva");
				set_vehicle_door_shut(iLocal_1311, true, 1);
				set_vehicle_door_shut(iLocal_1311, false, 1);
				set_vehicle_door_shut(iLocal_1311, 2, 1);
				clear_help(1);
				if (get_follow_ped_cam_view_mode() == 4)
				{
					render_script_cams(false, false, 3000, 1, 0, 0);
				}
				else
				{
					_0xC819F3CBB62BF692(1, 0f, 1, 0);
				}
				func_349(1, 1, 1);
				return true;
			}
			break;
	}
	if (func_347(iLocal_382))
	{
		clear_help(1);
		func_345(1);
		return true;
	}
	return false;
}

void func_345(int iParam0)
{
	set_gameplay_cam_relative_heading(0f);
	set_gameplay_cam_relative_pitch(0f, 1f);
	if (is_vehicle_driveable(iLocal_1311, 0))
	{
		if (is_playback_going_on_for_vehicle(iLocal_1311))
		{
			stop_playback_recorded_vehicle(iLocal_1311);
		}
		remove_vehicle_recording(102, "ASSOJva");
		remove_vehicle_recording(107, "ASSOJva");
		set_entity_coords(iLocal_1311, vLocal_1289, 1, false, 0, 1);
		set_entity_heading(iLocal_1311, fLocal_1219);
		set_vehicle_door_shut(iLocal_1311, false, 1);
		set_vehicle_door_shut(iLocal_1311, true, 1);
		set_vehicle_door_shut(iLocal_1311, 2, 1);
		set_vehicle_door_shut(iLocal_1311, 2, 1);
		iLocal_1193 = 0;
		clear_prints();
		render_script_cams(false, false, 3000, 1, 0, 0);
		func_349(1, 1, 1);
		if (iParam0)
		{
			func_346();
		}
	}
}

void func_346()
{
	do_screen_fade_in(1000);
	while (!is_screen_faded_in())
	{
		wait(0);
	}
}

bool func_347(int iParam0)
{
	if (func_348() && GAMEPLAY::GET_GAME_TIMER() >= iParam0 + 1000)
	{
		do_screen_fade_out(500);
		while (!is_screen_faded_out())
		{
			wait(0);
		}
		func_210(0);
		func_3();
		return true;
	}
	return false;
}

bool func_348()
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

void func_349(int iParam0, int iParam1, int iParam2)
{
	if (iParam0)
	{
		set_player_control(get_player_index(), true, 0);
	}
	_0xC61B86C9F61EB404(1);
	func_351(0, 1, iParam2, 0);
	if (iParam1)
	{
		display_radar(true);
		display_hud(true);
	}
	func_350(23, 0);
}

void func_350(int iParam0, int iParam1)
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

void func_351(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam0)
	{
		special_ability_deactivate_fast(player_id());
		set_all_random_peds_flee(player_id(), 1);
		set_police_ignore_player(player_id(), 1);
		func_358(1);
		_0xA8FDB297A8D25FBA();
		_0xFDB423997FA30340();
		if (Global_14413.f_1 > 3)
		{
			if (is_mobile_phone_call_ongoing())
			{
				stop_scripted_conversation(false);
			}
			if (!func_10())
			{
				Global_14413.f_1 = 3;
			}
			Global_15712 = 5;
		}
		func_357(1, iParam3, iParam2, 0);
		Global_55755 = 1;
		Global_68061 = 1;
		Global_69487 = 1;
	}
	else
	{
		func_358(0);
		_0xE1CD1E48E025E661();
		Global_55755 = 0;
		if (iParam1)
		{
			_0x03FC694AE06C5A20();
		}
		set_all_random_peds_flee(player_id(), 0);
		set_police_ignore_player(player_id(), 0);
		func_357(0, iParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_355(player_id())) && !func_353(player_id(), 0)) && !func_352())
			{
				set_entity_invincible(PLAYER::PLAYER_PED_ID(), false);
			}
		}
		else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_355(player_id()))
		{
			set_entity_invincible(PLAYER::PLAYER_PED_ID(), false);
		}
		Global_69487 = 0;
	}
}

int func_352()
{
	return GAMEPLAY::IS_BIT_SET(Global_1587523[player_id() /*444*/].f_39.f_18, 14);
}

int func_353(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == player_id())
	{
		iVar0 = func_354(-1, 0) == 8;
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

int func_354(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_294();
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

bool func_355(int iParam0)
{
	if (func_353(iParam0, 0))
	{
		return true;
	}
	if (func_356())
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

int func_356()
{
	return GAMEPLAY::IS_BIT_SET(Global_2359301, 3);
}

int func_357(int iParam0, int iParam1, auto uParam2, int iParam3)
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

void func_358(int iParam0)
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

void func_359()
{
	func_360(-1252.463f, -227.5894f, 39.03287f, -1267.239f, -207.9924f, 44.67352f, 17f, -1266.405f, -219.1991f, 41.4459f, 304.8644f, func_367(), 1, 1, 1, 0, 0);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		clear_ped_tasks_immediately(PLAYER::PLAYER_PED_ID());
		set_entity_coords(PLAYER::PLAYER_PED_ID(), -1266.173f, -214.0011f, 41.4459f, 1, false, 0, 1);
		set_entity_heading(PLAYER::PLAYER_PED_ID(), 310.0126f);
	}
}

void func_360(Vector3 vParam0, Vector3 vParam1, float fParam2, Vector3 vParam3, Vector3 fParam4, Vector3 vParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	func_361(vParam0, vParam3, fParam6, vParam7, fParam10, vParam11, iParam14, iParam15, iParam16, iParam17, iParam18);
}

void func_361(Vector3 vParam0, Vector3 vParam1, float fParam2, Vector3 vParam3, Vector3 fParam4, Vector3 vParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
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
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
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
				func_366(iVar0);
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
					if (func_363(iVar0, vParam0, vParam3, fParam6))
					{
						iVar1 = true;
					}
				}
			}
			if (is_vehicle_driveable(iVar0, 0))
			{
				if (is_vehicle_model(iVar0, joaat("taxi")))
				{
					if (get_ped_in_vehicle_seat(iVar0, -1) != PLAYER::PLAYER_PED_ID() && get_ped_in_vehicle_seat(iVar0, -1) != 0)
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
				if (func_289(iVar0, func_13(), 1))
				{
					iVar1 = false;
				}
			}
			if (iVar1)
			{
				if (!func_362(vParam11))
				{
					if (is_vehicle_driveable(iVar0, 0))
					{
						iVar13 = ENTITY::GET_ENTITY_MODEL(iVar0);
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
						if (is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), iVar0, 0))
						{
							set_entity_coords(PLAYER::PLAYER_PED_ID(), get_entity_coords(iVar0, 1), 1, false, 0, 1);
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
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
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
			if (ENTITY::DOES_ENTITY_EXIST(iVar14) && !PED::IS_PED_INJURED(iVar14))
			{
				set_entity_coords(iVar14, get_entity_coords(iVar14, 1), 1, false, 0, 1);
			}
			iVar15 = _get_vehicle_model_max_number_of_passengers(ENTITY::GET_ENTITY_MODEL(iVar0));
			if (iVar15 <= 2)
			{
				iVar14 = get_ped_in_vehicle_seat(iVar0, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar14) && !PED::IS_PED_INJURED(iVar14))
				{
					set_entity_coords(iVar14, get_entity_coords(iVar14, 1), 1, false, 0, 1);
				}
			}
			if (iVar15 <= 4)
			{
				iVar14 = get_ped_in_vehicle_seat(iVar0, true);
				if (ENTITY::DOES_ENTITY_EXIST(iVar14) && !PED::IS_PED_INJURED(iVar14))
				{
					set_entity_coords(iVar14, get_entity_coords(iVar14, 1), 1, false, 0, 1);
				}
				iVar14 = get_ped_in_vehicle_seat(iVar0, 2);
				if (ENTITY::DOES_ENTITY_EXIST(iVar14) && !PED::IS_PED_INJURED(iVar14))
				{
					set_entity_coords(iVar14, get_entity_coords(iVar14, 1), 1, false, 0, 1);
				}
			}
			delete_vehicle(&iVar0);
		}
	}
}

bool func_362(Vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_363(int iParam0, Vector3 vParam1, Vector3 vParam2, float fParam3)
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
		vVar0 = {func_365(vParam1 - vParam4)};
		vVar3 = {vVar0};
		vVar0.x = -vVar3.y;
		vVar0.y = vVar3.x;
		vVar0.z = 0f;
		vVar6 = {vParam1 - vVar0 * Vector(fParam7 / 2f, fParam7 / 2f, fParam7 / 2f)};
		vVar9 = {vParam1 + vVar0 * Vector(fParam7 / 2f, fParam7 / 2f, fParam7 / 2f)};
		vVar12 = {vParam4 - vVar0 * Vector(fParam7 / 2f, fParam7 / 2f, fParam7 / 2f)};
		vVar15 = {vParam4 + vVar0 * Vector(fParam7 / 2f, fParam7 / 2f, fParam7 / 2f)};
		get_model_dimensions(ENTITY::GET_ENTITY_MODEL(iParam0), &Var31, &Var34);
		vVar18[0 /*3*/] = {get_offset_from_entity_in_world_coords(iParam0, Var31, Var31.f_1, 0f)};
		vVar18[1 /*3*/] = {get_offset_from_entity_in_world_coords(iParam0, Var31, Var34.f_1, 0f)};
		vVar18[2 /*3*/] = {get_offset_from_entity_in_world_coords(iParam0, Var34, Var31.f_1, 0f)};
		vVar18[3 /*3*/] = {get_offset_from_entity_in_world_coords(iParam0, Var34, Var34.f_1, 0f)};
		if (((((((((((((((func_364(vVar18[0 /*3*/], vVar18[1 /*3*/], vVar6, vVar9) || func_364(vVar18[0 /*3*/], vVar18[1 /*3*/], vVar9, vVar15)) || func_364(vVar18[0 /*3*/], vVar18[1 /*3*/], vVar12, vVar15)) || func_364(vVar18[0 /*3*/], vVar18[1 /*3*/], vVar6, vVar12)) || func_364(vVar18[1 /*3*/], vVar18[3 /*3*/], vVar6, vVar9)) || func_364(vVar18[1 /*3*/], vVar18[3 /*3*/], vVar9, vVar15)) || func_364(vVar18[1 /*3*/], vVar18[3 /*3*/], vVar12, vVar15)) || func_364(vVar18[1 /*3*/], vVar18[3 /*3*/], vVar6, vVar12)) || func_364(vVar18[3 /*3*/], vVar18[2 /*3*/], vVar6, vVar9)) || func_364(vVar18[3 /*3*/], vVar18[2 /*3*/], vVar9, vVar15)) || func_364(vVar18[3 /*3*/], vVar18[2 /*3*/], vVar12, vVar15)) || func_364(vVar18[3 /*3*/], vVar18[2 /*3*/], vVar6, vVar12)) || func_364(vVar18[2 /*3*/], vVar18[0 /*3*/], vVar6, vVar9)) || func_364(vVar18[2 /*3*/], vVar18[0 /*3*/], vVar9, vVar15)) || func_364(vVar18[2 /*3*/], vVar18[0 /*3*/], vVar12, vVar15)) || func_364(vVar18[2 /*3*/], vVar18[0 /*3*/], vVar6, vVar12))
		{
			return true;
		}
	}
	return false;
}

bool func_364(struct<2> Param0, auto uParam1, struct<2> Param2, auto uParam3, struct<2> Param4, auto uParam5, struct<2> Param6, auto uParam7)
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

Vector3 func_365(Vector3 vParam0)
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

void func_366(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
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

Vector3 func_367()
{
	return 2.55f, 5.665f, 2.55f;
}

void func_368()
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		clear_ped_tasks_immediately(PLAYER::PLAYER_PED_ID());
		set_entity_coords(PLAYER::PLAYER_PED_ID(), vLocal_1301, 1, false, 0, 1);
		set_entity_heading(PLAYER::PLAYER_PED_ID(), 299.4985f);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1314))
	{
		if (is_vehicle_driveable(iLocal_1314, 0))
		{
			set_vehicle_engine_on(iLocal_1314, false, 1, 0);
			set_entity_coords(iLocal_1314, -1251.873f, -256.7999f, 38.2695f, 1, false, 0, 1);
			set_entity_heading(iLocal_1314, 296.7603f);
			set_vehicle_on_ground_properly(iLocal_1314);
		}
	}
}

int func_369()
{
	iLocal_382 = GAMEPLAY::GET_GAME_TIMER();
	return iLocal_382;
}

void func_370(int iParam0, int iParam1, int iParam2)
{
	set_player_control(get_player_index(), false, iParam0);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		stop_fire_in_range(get_entity_coords(PLAYER::PLAYER_PED_ID(), 1), 15f);
	}
	_0xC61B86C9F61EB404(iParam1);
	func_210(0);
	func_351(1, 1, iParam2, 0);
	display_radar(false);
	display_hud(false);
	func_350(23, 1);
}

void func_371()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1311))
	{
		if (is_vehicle_driveable(iLocal_1311, 0))
		{
			iLocal_1191 = 0;
			while (iLocal_1191 < 3)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1049[iLocal_1191]))
				{
					if (iLocal_1191 == 0)
					{
						iLocal_1049[iLocal_1191] = PED::CREATE_PED_inside_vehicle(iLocal_1311, 26, iLocal_1326, -1, 1, true);
						set_ped_component_variation(iLocal_1049[iLocal_1191], false, 0, 2, 0);
						set_ped_component_variation(iLocal_1049[iLocal_1191], 3, 0, 0, 0);
						set_ped_component_variation(iLocal_1049[iLocal_1191], 4, 0, 1, 0);
						set_ped_component_variation(iLocal_1049[iLocal_1191], 8, 0, 0, 0);
						set_ped_component_variation(iLocal_1049[iLocal_1191], 11, 0, 0, 0);
					}
					else if (iLocal_1191 == 1)
					{
						iLocal_1049[iLocal_1191] = PED::CREATE_PED_inside_vehicle(iLocal_1311, 26, iLocal_1326, false, 1, true);
						set_ped_component_variation(iLocal_1049[iLocal_1191], false, 1, 2, 0);
						set_ped_component_variation(iLocal_1049[iLocal_1191], 3, 0, 1, 0);
						set_ped_component_variation(iLocal_1049[iLocal_1191], 4, 0, 0, 0);
						set_ped_component_variation(iLocal_1049[iLocal_1191], 8, 0, 0, 0);
						set_ped_component_variation(iLocal_1049[iLocal_1191], 11, 0, 2, 0);
					}
					else if (iLocal_1191 == 2)
					{
						iLocal_1049[iLocal_1191] = PED::CREATE_PED_inside_vehicle(iLocal_1311, 26, iLocal_1327, true, 1, true);
						set_ped_component_variation(iLocal_1049[iLocal_1191], false, 1, 2, 0);
						set_ped_component_variation(iLocal_1049[iLocal_1191], 3, 0, 2, 0);
						set_ped_component_variation(iLocal_1049[iLocal_1191], 4, 0, 1, 0);
						set_ped_component_variation(iLocal_1049[iLocal_1191], 8, 0, 0, 0);
						set_ped_component_variation(iLocal_1049[iLocal_1191], 11, 1, 1, 0);
					}
				}
				iLocal_1191++;
			}
		}
	}
}

void func_372()
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1311))
	{
		iLocal_1311 = create_vehicle(iLocal_1325, vLocal_1286, fLocal_1218, 1, 1);
		set_model_as_no_longer_needed(iLocal_1325);
		_0x2B6747FAA9DB9D6B(iLocal_1311, 1);
		set_entity_load_collision_flag(iLocal_1311, true);
		set_vehicle_provides_cover(iLocal_1311, 1);
	}
}

void func_373(Vector3 vParam0, Vector3 vParam1, float fParam2, Vector3 vParam3, Vector3 fParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	func_361(vParam0, vParam3, fParam6, vParam7, fParam10, 0f, 0f, 0f, iParam11, iParam12, iParam13, iParam14, iParam15);
}

bool func_374(float fParam0, int iParam1)
{
	int iVar0;
	
	if (((is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0) && func_375(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0), fParam0, 1, 1056964608, 0, 1, 0)) && !is_entity_in_air(PLAYER::PLAYER_PED_ID())) || !is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!func_52(&iLocal_367))
		{
			func_50(&iLocal_367);
			if (ENTITY::DOES_ENTITY_EXIST(get_players_last_vehicle()))
			{
				iVar0 = get_players_last_vehicle();
				if (is_vehicle_driveable(iVar0, 0))
				{
					set_vehicle_forward_speed(iVar0, 0f);
				}
			}
			set_player_control(player_id(), false, 0);
		}
		else if (func_46(&iLocal_367) > 1f || iParam1 == 0)
		{
			return true;
		}
	}
	return false;
}

bool func_375(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, int iParam5, int iParam6)
{
	CONTROLS::DISABLE_CONTROL_ACTION(0, 71, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 72, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 76, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 73, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 59, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 60, 1);
	if (iParam5)
	{
		CONTROLS::DISABLE_CONTROL_ACTION(0, 75, 1);
	}
	CONTROLS::DISABLE_CONTROL_ACTION(0, 80, 1);
	if (!iParam6)
	{
		CONTROLS::DISABLE_CONTROL_ACTION(0, 69, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 70, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 68, 1);
	}
	CONTROLS::DISABLE_CONTROL_ACTION(0, 74, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 86, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 81, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 82, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 138, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 136, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 114, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 107, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 110, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 89, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 89, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 87, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 88, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 113, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 115, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 116, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 117, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 118, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 119, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 131, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 132, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 123, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 126, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 129, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 130, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 133, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 134, 1);
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

void func_376()
{
	int iVar0;
	
	switch (iLocal_1192)
	{
		case 0:
			func_390(500);
			func_283(0, "assassin_hotel_go_to_hotel", 0, 0, 0, 1);
			if (is_player_wanted_level_greater(player_id(), 0))
			{
				func_232("ASS_VA_LOSECOPS", 7500, 1);
			}
			clear_area_of_vehicles(-1220.57f, -185.96f, 38.4f, 50f, 0, 0, 0, 0, false);
			iLocal_1192++;
			break;
		
		case 1:
			func_389();
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1318))
			{
				if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
					{
						iVar0 = get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0);
						if (get_ped_in_vehicle_seat(iVar0, -1) == PLAYER::PLAYER_PED_ID())
						{
							iLocal_1318 = get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0);
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_1318) && !is_entity_dead(iLocal_1318, 0))
							{
								func_270(iLocal_1318);
							}
						}
					}
				}
			}
			if (!is_player_wanted_level_greater(player_id(), 0))
			{
				if (!func_386())
				{
					if (!does_blip_exist(iLocal_1118))
					{
						iLocal_1118 = func_385(vLocal_1301, 1);
						set_blip_name_from_text_file(iLocal_1118, "ASS_VA_DESTBLIP");
						func_384(&iLocal_1118, -1234.307f, -250.6783f, 38.2238f, 28.914f);
						if (!iLocal_1132)
						{
							func_232("ASS_VA_GOHOTEL", 7500, 1);
							iLocal_1132 = 1;
						}
						else if (func_383("ASS_VA_LOSECOPS", 0, 0))
						{
							clear_prints();
						}
					}
				}
				else if (_0x7D41E9D2D17C5B2D(iLocal_1129) && func_382())
				{
					func_381();
					func_237();
					iLocal_1030 = 8;
				}
			}
			else if (!func_386())
			{
				func_380(iLocal_1118, "ASS_VA_LOSECOPS");
			}
			else
			{
				func_31(3);
			}
			func_377();
			break;
	}
}

void func_377()
{
	if (!iLocal_1131)
	{
		if (func_255(vLocal_1301, 1) <= 100f)
		{
			func_379();
			iLocal_1129 = _0x1F3F018BC3AFA77C(-1244.344f, -251.566f, 50.3194f, -9.2001f, 0.0498f, 6.3064f, 80f, 12, 127);
			iLocal_1131 = 1;
		}
	}
	else if (func_255(vLocal_1301, 1) > 120f)
	{
		if (_0x07C313F94746702C(iLocal_1129))
		{
			_0x1EE7D8DF4425F053(iLocal_1129);
			func_245();
			iLocal_1131 = 0;
		}
	}
	else if (!_0x07C313F94746702C(iLocal_1129))
	{
		if (!func_378())
		{
			iLocal_1131 = 0;
		}
	}
}

bool func_378()
{
	if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (is_vehicle_model(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0), joaat("taxi")))
		{
			if (get_ped_in_vehicle_seat(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0), -1) != PLAYER::PLAYER_PED_ID())
			{
				return true;
			}
		}
	}
	return false;
}

void func_379()
{
	STREAMING::REQUEST_MODEL(iLocal_1326);
	STREAMING::REQUEST_MODEL(iLocal_1327);
}

void func_380(int iParam0, char* sParam1)
{
	if (is_player_wanted_level_greater(player_id(), 0))
	{
		if (does_blip_exist(iParam0))
		{
			remove_blip(&iParam0);
			clear_prints();
			func_232(sParam1, 7500, 1);
		}
	}
}

void func_381()
{
	if (does_blip_exist(iLocal_1118))
	{
		remove_blip(&iLocal_1118);
	}
}

int func_382()
{
	int iVar0;
	
	func_379();
	if (STREAMING::HAS_MODEL_LOADED(iLocal_1326) && STREAMING::HAS_MODEL_LOADED(iLocal_1327))
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

auto func_383(char* sParam0, int iParam1, char* sParam2)
{
	_0x853648FD1063A213(sParam0);
	if (iParam1 == 1)
	{
		_add_text_component_item_string(sParam2);
	}
	return _0x8A9BA1AB3E237613();
}

void func_384(int iParam0, Vector3 vParam1, float fParam2)
{
	if (does_blip_exist(*iParam0))
	{
		Global_100190 = *iParam0;
		Global_100195 = {vParam1};
		Global_100199 = fParam4;
	}
}

int func_385(Vector3 vParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = add_blip_for_coord(vParam0);
	set_blip_scale(iVar0, func_184(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	set_blip_route(iVar0, iParam3);
	return iVar0;
}

bool func_386()
{
	float fVar0;
	int iVar1;
	
	iVar1 = 0;
	fVar0 = func_26(iLocal_1044, vLocal_1301, 1);
	if (fVar0 < 200f)
	{
		func_388();
	}
	if (func_387())
	{
		if (is_entity_at_coord(iLocal_1044, vLocal_1301, 25f, 25f, 90f, true, true, 0))
		{
			iVar1 = 1;
		}
	}
	if (get_player_wanted_level(player_id()) == 0)
	{
		if ((fVar0 < 2f || is_entity_at_coord(iLocal_1044, vLocal_1301, 2f, 2f, 2f, true, true, 0)) || iVar1)
		{
			if (!is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), -1141.085f, -192.66f, 75.756f, -1246.085f, -192.66f, 100.756f, 115f, 0, true, 0))
			{
				if (func_387() && iVar1)
				{
					return true;
				}
				else if (!is_entity_in_air(PLAYER::PLAYER_PED_ID()))
				{
					return true;
				}
			}
		}
	}
	return false;
}

bool func_387()
{
	int iVar0;
	
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return false;
	}
	if (!is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
	{
		return false;
	}
	if (is_ped_in_any_plane(PLAYER::PLAYER_PED_ID()) || is_ped_in_any_heli(PLAYER::PLAYER_PED_ID()))
	{
		iLocal_1314 = get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0);
		iVar0 = ENTITY::GET_ENTITY_MODEL(iLocal_1314);
		if (iVar0 != joaat("blimp") && iVar0 != joaat("blimp2"))
		{
			iLocal_1150 = true;
			return true;
		}
	}
	return false;
}

void func_388()
{
	int iVar0;
	
	switch (iLocal_1204)
	{
		case 0:
			STREAMING::REQUEST_MODEL(joaat("a_m_m_bevhills_01"));
			STREAMING::REQUEST_MODEL(joaat("a_f_m_bevhills_01"));
			STREAMING::REQUEST_MODEL(joaat("a_f_m_bevhills_02"));
			STREAMING::REQUEST_MODEL(joaat("a_m_y_hipster_01"));
			STREAMING::REQUEST_MODEL(joaat("taxi"));
			request_waypoint_recording("OJAS_HotelTaxi01");
			request_anim_dict("oddjobs@assassinate@hotel@");
			if ((((((STREAMING::HAS_MODEL_LOADED(joaat("a_m_m_bevhills_01")) && STREAMING::HAS_MODEL_LOADED(joaat("a_f_m_bevhills_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("a_f_m_bevhills_02"))) && STREAMING::HAS_MODEL_LOADED(joaat("taxi"))) && STREAMING::HAS_MODEL_LOADED(joaat("a_m_y_hipster_01"))) && has_anim_dict_loaded("oddjobs@assassinate@hotel@")) && get_is_waypoint_recording_loaded("OJAS_HotelTaxi01"))
			{
				iLocal_1204++;
			}
			break;
		
		case 1:
			Local_1690[0] = PED::CREATE_PED(4, joaat("a_f_m_bevhills_01"), -1220.679f, -203.2689f, 38.3251f, 321.2841f, 1, true);
			Local_1690[1] = PED::CREATE_PED(4, joaat("a_f_m_bevhills_02"), -1219.596f, -201.3663f, 38.3251f, 110.7199f, 1, true);
			set_blocking_of_non_temporary_events(Local_1690[0], true);
			set_blocking_of_non_temporary_events(Local_1690[1], true);
			open_sequence_task(&iVar0);
			task_look_at_entity(false, Local_1690[1], -1, 0, 2);
			task_start_scenario_at_position(false, "WORLD_HUMAN_TOURIST_MOBILE", -1220.679f, -203.2689f, 38.3251f, 321.2841f, 0, 0, 1);
			close_sequence_task(iVar0);
			if (!is_entity_dead(Local_1690[0], 0))
			{
				task_perform_sequence(Local_1690[0], iVar0);
			}
			clear_sequence_task(&iVar0);
			open_sequence_task(&iVar0);
			task_look_at_entity(false, Local_1690[0], -1, 0, 2);
			task_start_scenario_at_position(false, "WORLD_HUMAN_TOURIST_MAP", -1219.596f, -201.3663f, 38.3251f, 110.7199f, 0, 0, 1);
			close_sequence_task(iVar0);
			if (!is_entity_dead(Local_1690[1], 0))
			{
				task_perform_sequence(Local_1690[1], iVar0);
			}
			clear_sequence_task(&iVar0);
			Local_1690.f_4 = create_vehicle(joaat("taxi"), -1221.73f, -199.0665f, 38.1751f, 152.5038f, 1, 1);
			set_vehicle_on_ground_properly(Local_1690.f_4);
			Local_1690.f_3 = PED::CREATE_PED_inside_vehicle(Local_1690.f_4, 4, joaat("a_m_y_hipster_01"), -1, 1, true);
			set_blocking_of_non_temporary_events(Local_1690.f_3, true);
			task_look_at_entity(Local_1690.f_3, Local_1690[0], -1, 0, 2);
			Local_1690.f_8[0] = PED::CREATE_PED(4, joaat("a_m_m_bevhills_01"), -1211.597f, -184.5331f, 38.3255f, 4.5193f, 1, true);
			Local_1690.f_8[1] = PED::CREATE_PED(4, joaat("a_m_y_hipster_01"), -1211.654f, -182.7625f, 38.3255f, 166.2532f, 1, true);
			set_blocking_of_non_temporary_events(Local_1690.f_8[0], true);
			set_blocking_of_non_temporary_events(Local_1690.f_8[1], true);
			task_play_anim(Local_1690.f_8[0], "oddjobs@assassinate@hotel@", "idle_a", 8f, -4f, -1, 1, 0, 0, 0, 0);
			task_play_anim(Local_1690.f_8[1], "oddjobs@assassinate@hotel@", "argue_b", 8f, -4f, -1, 1, 0, 0, 0, 0);
			Local_1690.f_5[0] = PED::CREATE_PED(4, joaat("a_m_m_bevhills_01"), -1229.099f, -176.3197f, 38.3255f, 231.8036f, 1, true);
			Local_1690.f_5[1] = PED::CREATE_PED(4, joaat("a_f_m_bevhills_02"), -1249.779f, -162.4767f, 39.4131f, 220.1651f, 1, true);
			set_blocking_of_non_temporary_events(Local_1690.f_5[0], true);
			set_blocking_of_non_temporary_events(Local_1690.f_5[1], true);
			task_play_anim(Local_1690.f_5[0], "oddjobs@assassinate@hotel@", "base", 8f, -4f, -1, 1, 0, 0, 0, 0);
			task_play_anim(Local_1690.f_5[1], "oddjobs@assassinate@hotel@", "base", 8f, -4f, -1, 1, 0, 0, 0, 0);
			Local_1690.f_11 = 1;
			set_model_as_no_longer_needed(joaat("a_m_m_bevhills_01"));
			set_model_as_no_longer_needed(joaat("a_f_m_bevhills_01"));
			set_model_as_no_longer_needed(joaat("a_f_m_bevhills_02"));
			set_model_as_no_longer_needed(joaat("a_m_y_hipster_01"));
			set_model_as_no_longer_needed(joaat("taxi"));
			iLocal_1204++;
			break;
		
		case 2:
			break;
	}
}

void func_389()
{
	Vector3 vVar0;
	
	if (get_player_wanted_level(player_id()) > 0)
	{
		iLocal_1185 = 1;
		return;
	}
	if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
	{
		vVar0 = {get_entity_coords(PLAYER::PLAYER_PED_ID(), 1)};
	}
	if (iLocal_1185)
	{
		if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
		{
			fLocal_1244 = vdist(get_entity_coords(PLAYER::PLAYER_PED_ID(), 1), vLocal_1301);
			iLocal_1185 = 0;
		}
	}
	else if (fLocal_1244 == 0f)
	{
		fLocal_1244 = vdist(-1510.291f, -946.9932f, 8.278f, vLocal_1301);
	}
	if (vdist(vVar0, vLocal_1301) > fLocal_1244 + 400f)
	{
		func_31(7);
	}
	else if (vdist(vVar0, vLocal_1301) > fLocal_1244 + 200f)
	{
		if (!iLocal_1181)
		{
			func_232("ASS_VA_RHOTEL", 7500, 1);
			iLocal_1181 = 1;
		}
	}
}

void func_390(int iParam0)
{
	if (!is_screen_faded_in())
	{
		do_screen_fade_in(iParam0);
		while (!is_screen_faded_in())
		{
			wait(0);
		}
	}
}

void func_391()
{
	int iVar0;
	float fVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1057))
	{
		func_396();
		if (!PED::IS_PED_INJURED(iLocal_1057))
		{
			fVar1 = func_23(iLocal_1057, 1);
			set_ped_can_play_ambient_anims(iLocal_1057, 0);
			set_ped_can_play_ambient_base_anims(iLocal_1057, 0);
			set_ped_can_be_targetted(iLocal_1057, false);
			_set_ped_ragdoll_flag(iLocal_1057, 16);
			PED::SET_PED_CONFIG_FLAG(iLocal_1057, 208, true);
			if (fVar1 < 5f)
			{
				if (func_52(&iLocal_1356))
				{
					if (!func_22())
					{
						if (func_393(&iLocal_1356, 10f))
						{
							func_29(&uLocal_1363, 3, iLocal_1057, "LESTER", 0, 1);
							func_6(&uLocal_1363, "OJASAUD", "OJAS_FOLLOW", 9, 0, 0, 0);
						}
					}
				}
			}
			else if (fVar1 > 100f)
			{
				if (is_entity_occluded(iLocal_1057) || !is_entity_on_screen(iLocal_1057))
				{
					func_392();
				}
			}
			switch (iLocal_1190)
			{
				case 0:
					if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
					{
						if ((is_ped_shooting(PLAYER::PLAYER_PED_ID()) || (ENTITY::DOES_ENTITY_EXIST(iLocal_1057) && has_entity_been_damaged_by_entity(iLocal_1057, PLAYER::PLAYER_PED_ID(), 1))) || has_entity_been_damaged_by_entity(iLocal_1689, PLAYER::PLAYER_PED_ID(), 1))
						{
							if (has_entity_been_damaged_by_entity(iLocal_1689, PLAYER::PLAYER_PED_ID(), 1))
							{
							}
							set_ped_movement_clipset(iLocal_1057, "move_lester_CaneUp", 0.25f);
							task_play_anim(iLocal_1057, "oddjobs@assassinate@hotel@leadin", "Lester_Getup", 1000f, -4f, -1, 790536, 0, 0, 0, 0);
							iLocal_1190 = 1;
						}
					}
					break;
				
				case 1:
					if (is_entity_playing_anim(iLocal_1057, "oddjobs@assassinate@hotel@leadin", "Lester_Getup", 3))
					{
						if (get_entity_anim_current_time(iLocal_1057, "oddjobs@assassinate@hotel@leadin", "Lester_Getup") >= 0.376f)
						{
							open_sequence_task(&iVar0);
							task_follow_nav_mesh_to_coord(false, -1502.029f, -948.687f, 7.65061f, 1f, 20000, 1f, 1, 40000f);
							task_follow_nav_mesh_to_coord(false, -1462.339f, -964.178f, 6.3394f, 1f, -1, 1f, 1, 40000f);
							task_wander_standard(false, get_entity_heading(iLocal_1057), 0);
							close_sequence_task(iVar0);
							task_perform_sequence(iLocal_1057, iVar0);
							clear_sequence_task(&iVar0);
							force_ped_motion_state(iLocal_1057, -668482597, false, 0, 0);
							iLocal_1190 = 2;
						}
					}
					break;
				
				case 2:
					break;
				}
			}
	}
}

void func_392()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1057))
	{
		delete_ped(&iLocal_1057);
	}
}

bool func_393(int iParam0, float fParam1)
{
	if (func_395(iParam0, fParam1))
	{
		func_394(iParam0);
		return true;
	}
	return false;
}

void func_394(int iParam0)
{
	*iParam0.f_1 = 0f;
	*iParam0.f_2 = 0f;
	*iParam0 = 0;
}

bool func_395(int iParam0, float fParam1)
{
	if (func_52(iParam0))
	{
		if (func_46(iParam0) > fParam1)
		{
			return true;
		}
	}
	return false;
}

void func_396()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1057))
	{
		if (has_entity_been_damaged_by_entity(iLocal_1057, PLAYER::PLAYER_PED_ID(), 1))
		{
			func_31(9);
		}
	}
}

void func_397()
{
	trigger_music_event("ASS1_STOP");
	if (!GAMEPLAY::IS_BIT_SET(Global_91278.f_20, 13))
	{
		func_470();
	}
	func_398(0, -1, 1);
	set_gameplay_cam_relative_heading(0f);
	set_gameplay_cam_relative_pitch(0f, 1f);
	iLocal_1030 = 18;
	func_390(500);
}

void func_398(int iParam0, int iParam1, int iParam2)
{
	if (func_477() && func_400())
	{
		while (Global_91273 != 6)
		{
			wait(0);
		}
		set_game_paused(false);
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				clear_ped_wetness(PLAYER::PLAYER_PED_ID());
			}
		}
		if (iParam0 != 0)
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iParam0))
				{
					if (is_vehicle_driveable(iParam0, 0))
					{
						if (!is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), iParam0, 0))
						{
							set_ped_into_vehicle(PLAYER::PLAYER_PED_ID(), iParam0, iParam1);
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
		func_399(0);
	}
}

void func_399(int iParam0)
{
	if (iParam0 == 1)
	{
		GAMEPLAY::SET_BIT(&(Global_91278.f_20), 13);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Global_91278.f_20), 13);
	}
}

int func_400()
{
	return GAMEPLAY::IS_BIT_SET(Global_91278.f_20, 13);
}

void func_401()
{
	while (iLocal_1204 < 2)
	{
		func_388();
		wait(0);
	}
	func_372();
	func_345(0);
	if (!GAMEPLAY::IS_BIT_SET(Global_91278.f_20, 13))
	{
		func_470();
	}
	iLocal_1159 = 0;
	iLocal_1183 = 0;
	clear_area_of_vehicles(-1220.57f, -185.96f, 38.4f, 50f, 0, 0, 0, 0, false);
	set_player_wanted_level(player_id(), false, 0);
	set_player_wanted_level_now(player_id(), 0);
	trigger_music_event("ASS1_RESTART1");
	while (!func_382())
	{
		wait(0);
	}
	func_398(0, -1, 1);
	set_gameplay_cam_relative_heading(0f);
	set_gameplay_cam_relative_pitch(0f, 1f);
	iLocal_1030 = 9;
	func_390(500);
}

void func_402()
{
	func_398(0, -1, 1);
	set_gameplay_cam_relative_heading(0f);
	set_gameplay_cam_relative_pitch(0f, 1f);
	func_390(500);
	iLocal_1030 = 7;
}

void func_403()
{
	iLocal_1315[0] = create_vehicle(iLocal_1328, -1270.045f, -251.4953f, 41.4459f, 214.63f, 1, 1);
	iLocal_1315[1] = create_vehicle(iLocal_1328, -1265.199f, -218.4823f, 45.9981f, 127.85f, 1, 1);
}

void func_404()
{
	iLocal_1329 = create_camera_with_params(26379945, -1244.344f, -251.566f, 50.3194f, -9.2001f, 0.0498f, 6.3064f, 38f, 0, 2);
	iLocal_1330 = create_camera_with_params(26379945, -1243.588f, -251.4826f, 50.3187f, -9.2001f, 0.0498f, 6.3064f, 38f, 0, 2);
}

int func_405()
{
	int iVar0;
	
	iVar0 = 0;
	if (((((((((STREAMING::HAS_MODEL_LOADED(iLocal_1325) && STREAMING::HAS_MODEL_LOADED(iLocal_1328)) && has_vehicle_recording_been_loaded(102, "ASSOJva")) && has_vehicle_recording_been_loaded(107, "ASSOJva")) && get_is_waypoint_recording_loaded("OJASva_101")) && get_is_waypoint_recording_loaded("OJASva_101a")) && get_is_waypoint_recording_loaded("OJASva_104")) && has_anim_dict_loaded("ODDJOBS@ASSASSINATE@GUARD")) && has_anim_dict_loaded("oddjobs@assassinate@hotel@")) && has_additional_text_loaded(3))
	{
		iVar0 = 1;
	}
	return iVar0;
}

void func_406()
{
	STREAMING::REQUEST_MODEL(iLocal_1325);
	STREAMING::REQUEST_MODEL(iLocal_1328);
	request_anim_dict("ODDJOBS@ASSASSINATE@GUARD");
	request_anim_dict("oddjobs@assassinate@hotel@");
	request_additional_text("ASS_VA", 3);
	request_vehicle_recording(102, "ASSOJva");
	request_vehicle_recording(107, "ASSOJva");
	request_waypoint_recording("OJASva_101");
	request_waypoint_recording("OJASva_101a");
	request_waypoint_recording("OJASva_104");
}

void func_407(int iParam0)
{
	if (iParam0)
	{
		set_all_vehicle_generators_active_in_area(Vector(39.1642f, -193.934f, -1237.397f) - Vector(150f, 150f, 150f), Vector(39.1642f, -193.934f, -1237.397f) + Vector(150f, 150f, 150f), false, 1);
		set_roads_in_area(-1349.176f, -39.0123f, -100.7554f, -1173.215f, -297.7677f, 100.8606f, false, 1);
	}
	else
	{
		set_all_vehicle_generators_active_in_area(-1340.905f, -68.1138f, -100.7554f, -1176.622f, -287.8646f, 100.8606f, true, 1);
		set_roads_back_to_original(-1349.176f, -39.0123f, -100.7554f, -1173.215f, -297.7677f, 100.8606f, 1);
	}
}

void func_408()
{
	Vector3 vVar0;
	Vector3 vVar3;
	
	vVar0 = {-1220.344f, -193.4014f, 38.1754f};
	vVar3 = {-1279.658f, -222.0533f, 41.446f};
	func_29(&uLocal_1363, 1, iLocal_1044, "FRANKLIN", 0, 1);
	set_wanted_level_multiplier(0.2f);
	add_relationship_group("Guards", &iLocal_1331);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, -1533126372, iLocal_1331);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_1331, -1533126372);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_1331, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, iLocal_1331);
	clear_area(-1220.57f, -185.96f, 38.4f, 200f, 1, 0, 0, false);
	set_ped_non_creation_area(-1298.684f, -324.0442f, -35.578f, -1113.372f, -46.1583f, 55.609f);
	iLocal_1127 = add_scenario_blocking_area(vVar0 - Vector(15f, 15f, 15f), vVar0 + Vector(15f, 15f, 15f), 0, 1, 1, 1);
	iLocal_1128 = add_scenario_blocking_area(vVar3 - Vector(45f, 35f, 35f), vVar3 + Vector(45f, 35f, 35f), 0, 1, 1, 1);
}

void func_409()
{
	StringCopy(&Local_964, "ASS_VA_PASSED", 24);
	MemCopy(&(Local_964.f_6), {Global_55764}, 6);
	StringCopy(&(Local_964.f_12), "ASS_VA_TIMER", 24);
	StringCopy(&(Local_964.f_18), "ASS_VA_BASE", 24);
	StringCopy(&(Local_964.f_24), "ASS_VA_BDESC", 24);
	StringCopy(&(Local_964.f_30), "ASS_VA_CASH", 24);
	StringCopy(&(Local_964.f_36), "ASS_VA_COMP", 24);
	StringCopy(&(Local_964.f_42), "ASS_VA_COMP", 24);
	StringCopy(&(Local_964.f_48), "ASS_VA_COMP", 24);
	StringCopy(&(Local_964.f_54), "ASS_VA_COMP", 24);
}

void func_410()
{
	vLocal_1283 = {-1343.493f, -153.199f, 47.1825f};
	fLocal_1232 = 260.3612f;
	vLocal_1286 = {-1242.213f, -241.5975f, 38.71f};
	fLocal_1218 = 96.8755f;
	vLocal_1289 = {-1221.631f, -186.8819f, 38.7996f};
	fLocal_1219 = 201.0763f;
	fLocal_1233 = 40f;
	Local_360.f_2 = 40f;
	vLocal_1247[0 /*3*/] = {-1221.154f, -170.9907f, 38.3253f};
	vLocal_1247[1 /*3*/] = {-1210.556f, -192.882f, 38.3253f};
	vLocal_1247[2 /*3*/] = {-1216.369f, -203.6806f, 38.3253f};
	fLocal_1234[0] = 157.3177f;
	fLocal_1234[1] = 58.3594f;
	fLocal_1234[2] = 65.6443f;
	vLocal_1267[0 /*3*/] = {-1220.377f, -169.407f, 38.3253f};
	vLocal_1267[1 /*3*/] = {-1208.963f, -193.8791f, 38.3253f};
	vLocal_1267[2 /*3*/] = {-1214.955f, -205.0824f, 38.3253f};
	vLocal_1267[3 /*3*/] = {-1217.518f, -197.13f, 38.3254f};
	vLocal_1267[4 /*3*/] = {-1231.892f, -194.382f, 38.1753f};
	fLocal_1220[0] = 160.0748f;
	fLocal_1220[1] = 58.3365f;
	fLocal_1220[2] = 58.0214f;
	fLocal_1220[3] = 97.6664f;
	fLocal_1220[4] = 225.8689f;
	iLocal_1191 = 0;
	while (iLocal_1191 <= 4)
	{
		fLocal_1226[iLocal_1191] = get_random_float_in_range(0f, 2f);
		iLocal_1191++;
	}
	fLocal_373 = 7000f;
	fLocal_374 = 2000f;
	iLocal_1043 = 0;
	iLocal_1179 = 0;
	iLocal_1180 = false;
	iLocal_1165 = 0;
	iLocal_1188 = false;
	iLocal_1187 = 0;
}

void func_411()
{
	switch (iLocal_1192)
	{
		case 0:
			request_cutscene("ASS_INT_2_ALT1", 8);
			STREAMING::REQUEST_MODEL(joaat("ig_lestercrest"));
			STREAMING::REQUEST_MODEL(joaat("prop_cs_walking_stick"));
			request_anim_dict("oddjobs@assassinate@hotel@leadin");
			request_anim_dict("oddjobs@assassinate@hotel@leaning@");
			request_clip_set("move_lester_CaneUp");
			set_player_wanted_level(player_id(), false, 0);
			set_player_wanted_level_now(player_id(), 0);
			if ((((STREAMING::HAS_MODEL_LOADED(joaat("ig_lestercrest")) && STREAMING::HAS_MODEL_LOADED(joaat("prop_cs_walking_stick"))) && has_anim_dict_loaded("oddjobs@assassinate@hotel@leadin")) && has_anim_dict_loaded("oddjobs@assassinate@hotel@leaning@")) && has_clip_set_loaded("move_lester_CaneUp"))
			{
				iLocal_1192++;
			}
			break;
		
		case 1:
			if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
			{
				func_370(56, 0, 1);
				func_373(-1514.611f, -927.4667f, 7.133712f, -1496.948f, -942.224f, 16.18723f, 30f, -1523.174f, -924.6732f, 9.1221f, 53.0177f, 1, 1, 1, 1, 0);
				clear_area(-1507.715f, -941.1313f, 8.37286f, 10f, 1, 0, 0, false);
				set_entity_coords(PLAYER::PLAYER_PED_ID(), vLocal_1668, 1, false, 0, 1);
				set_entity_heading(PLAYER::PLAYER_PED_ID(), fLocal_1671);
				_0x2208438012482A1A(PLAYER::PLAYER_PED_ID(), 0, 0);
				task_play_anim(PLAYER::PLAYER_PED_ID(), "oddjobs@assassinate@hotel@leaning@", "idle_a", 1000f, -4f, -1, 513, 0, 0, 0, 0);
				if (!does_cam_exist(iLocal_1672))
				{
					iLocal_1672 = create_camera_with_params(26379945, vLocal_1674, vLocal_1677, 42.2032f, 1, 2);
					shake_cam(iLocal_1672, "HAND_SHAKE", 0.3f);
				}
				if (!does_cam_exist(iLocal_1673))
				{
					iLocal_1673 = create_camera_with_params(26379945, vLocal_1680, vLocal_1683, 42.2032f, 0, 2);
					set_cam_active_with_interp(iLocal_1673, iLocal_1672, 5000, 1, 1);
					shake_cam(iLocal_1672, "HAND_SHAKE", 0.3f);
				}
				render_script_cams(true, false, 3000, 1, 0, 0);
				if (func_40(0))
				{
					do_screen_fade_in(800);
				}
				iLocal_1192++;
			}
			break;
		
		case 2:
			if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (is_entity_playing_anim(PLAYER::PLAYER_PED_ID(), "oddjobs@assassinate@hotel@leaning@", "idle_a", 3))
				{
					if (!func_52(&iLocal_1686))
					{
						func_49(&iLocal_1686);
					}
				}
				if (func_52(&iLocal_1686))
				{
					if (func_46(&iLocal_1686) > 6f)
					{
						iLocal_1192++;
					}
				}
			}
			break;
		
		case 3:
			if (func_412())
			{
				iLocal_1192++;
			}
			break;
		
		case 4:
			func_351(1, 1, 1, 0);
			if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
			{
				register_entity_for_cutscene(PLAYER::PLAYER_PED_ID(), "Franklin", 0, false, 0);
			}
			register_entity_for_cutscene(iLocal_1057, "Lester", 2, joaat("ig_lestercrest"), 0);
			register_entity_for_cutscene(false, "WalkingStick_Lester", 2, joaat("prop_cs_walking_stick"), 0);
			start_cutscene(0);
			clear_player_wanted_level(player_id());
			set_player_control(player_id(), true, 0);
			iLocal_1192++;
			break;
		
		case 5:
			if (is_cutscene_playing())
			{
				destroy_all_cams(0);
				render_script_cams(false, false, 3000, 1, 0, 0);
				iLocal_1192++;
			}
			break;
		
		case 6:
			if (is_gameplay_hint_active())
			{
				stop_gameplay_hint(0);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1057))
			{
				if (does_cutscene_entity_exist("Lester", 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(get_entity_index_of_registered_entity("Lester", false)))
					{
						iLocal_1057 = get_ped_index_from_entity_index(get_entity_index_of_registered_entity("Lester", false));
					}
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1058))
			{
				if (does_cutscene_entity_exist("WalkingStick_Lester", 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(get_entity_index_of_registered_entity("WalkingStick_Lester", false)))
					{
						iLocal_1058 = get_entity_index_of_registered_entity("WalkingStick_Lester", false);
					}
				}
			}
			set_gameplay_cam_relative_heading(0f);
			set_gameplay_cam_relative_pitch(0f, 1f);
			if (can_set_exit_state_for_registered_entity("Franklin", false))
			{
			}
			if (ENTITY::DOES_ENTITY_EXIST(get_entity_index_of_registered_entity("Lester", false)))
			{
				if (can_set_exit_state_for_registered_entity("Lester", false))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_1057) && !PED::IS_PED_INJURED(iLocal_1057))
					{
						set_entity_coords(iLocal_1057, -1509.458f, -948.195f, 7.75f, 1, false, 0, 1);
						set_entity_heading(iLocal_1057, -11f);
						task_play_anim(iLocal_1057, "oddjobs@assassinate@hotel@leadin", "lester_leadin", 1000f, -8f, -1, 790537, 0f, 0, 1, 0);
						_0x2208438012482A1A(iLocal_1057, 0, 0);
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(get_entity_index_of_registered_entity("Lester", false)))
			{
				if (can_set_exit_state_for_registered_entity("WalkingStick_Lester", false))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_1057) && !PED::IS_PED_INJURED(iLocal_1057))
					{
						attach_entity_to_entity(iLocal_1058, iLocal_1057, get_ped_bone_index(iLocal_1057, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
					}
				}
			}
			if (has_cutscene_finished() && !is_cutscene_playing())
			{
				func_351(0, 1, 1, 0);
				if (!PED::IS_PED_INJURED(iLocal_1057))
				{
					set_entity_proofs(iLocal_1057, false, false, false, false, false, false, 0, false);
					set_ped_can_ragdoll(iLocal_1057, 1);
				}
				set_gameplay_cam_relative_heading(0f);
				set_gameplay_cam_relative_pitch(0f, 1f);
				if (is_screen_faded_out())
				{
					wait(0);
					do_screen_fade_in(500);
				}
				func_349(1, 1, 1);
				iLocal_1192++;
			}
			break;
		
		case 7:
			func_50(&iLocal_1356);
			func_237();
			iLocal_1030 = 4;
			break;
	}
}

int func_412()
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

void func_413()
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1689))
	{
		iLocal_1689 = get_closest_object_of_type(-1510.103f, -947.7194f, 8.2332f, 5f, -403891623, 1, 0, 1);
	}
}

void func_414()
{
	int iVar0;
	
	if (iLocal_1030 > 7)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (!is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
			{
				iVar0 = _0xB2D06FAEDE65B577();
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (is_vehicle_driveable(iVar0, 0))
					{
						if ((iVar0 != iLocal_1319[0] && iVar0 != iLocal_1319[1]) && iVar0 != iLocal_1319[2])
						{
							if (iLocal_1215 >= 2)
							{
								iLocal_1215 = -1;
							}
							iLocal_1319[iLocal_1215 + 1] = iVar0;
							set_entity_as_mission_entity(iLocal_1319[iLocal_1215 + 1], true, 0);
							_0x02398B627547189C(iLocal_1319[iLocal_1215 + 1], 0);
							iLocal_1215++;
						}
					}
				}
			}
		}
	}
}

void func_415()
{
	int iVar0;
	
	if (iLocal_1177)
	{
		iVar0 = func_30(1116471296, 1);
		if (!PED::IS_PED_INJURED(iVar0))
		{
			func_28(iVar0, 3, "OJAvaGUARD");
			func_6(&uLocal_1363, "OJASAUD", "OJASva_SPOT", 9, 0, 0, 0);
		}
	}
}

void func_416()
{
	int iVar0;
	Vector3 vVar1;
	
	if (Local_1690.f_11)
	{
		if (!iLocal_1168)
		{
			if (iLocal_1030 < 10)
			{
				if (func_422())
				{
					iVar0 = func_30(1116471296, 1);
					if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0) && !is_entity_dead(iVar0, 0))
					{
						if (func_23(iVar0, 0) < 10f)
						{
							vVar1 = {get_entity_coords(iVar0, 1)};
							vVar1 = {vVar1};
							func_29(&uLocal_1363, 3, iVar0, "OJAvaGuard", 0, 1);
							func_6(&uLocal_1363, "OJASAUD", "OJASva_AT_EX", 9, 0, 0, 0);
						}
					}
					func_421();
					iLocal_1168 = true;
				}
				if (iLocal_1133)
				{
					func_421();
					iLocal_1168 = true;
				}
				else
				{
					func_420();
					func_417();
				}
			}
		}
	}
}

void func_417()
{
	if (iLocal_1139)
	{
		if (IntToFloat(iLocal_1212) < IntToFloat(iLocal_1209) - 5f)
		{
			func_419(Local_1690.f_8[0], 1);
			func_419(Local_1690.f_8[1], 1);
			func_419(Local_1690.f_5[0], 1);
			func_419(Local_1690.f_5[1], 1);
		}
		else
		{
			if ((func_23(Local_1690.f_8[0], 0) < 1f || func_23(Local_1690.f_8[1], 0) < 1f) || iLocal_1137)
			{
				func_418(Local_1690.f_8[0], 1);
				func_418(Local_1690.f_8[1], 1);
			}
			if (!iLocal_1137)
			{
				func_418(Local_1690.f_5[0], 0);
				func_418(Local_1690.f_5[1], 0);
			}
			else
			{
				func_418(Local_1690.f_5[0], 1);
				func_418(Local_1690.f_5[1], 1);
			}
		}
	}
}

void func_418(int iParam0, int iParam1)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (get_script_task_status(iParam0, 242628503) != 1)
		{
			if (func_23(iParam0, 0) < 1f || iParam1)
			{
				func_419(iParam0, 1);
			}
		}
	}
}

void func_419(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if ((iParam1 && get_script_task_status(iParam0, 242628503) != 1) || !iParam1)
		{
			open_sequence_task(&iVar0);
			task_go_to_coord_any_means(false, -1214.343f, -132.1107f, 40.2416f, 1f, 0, 0, 786603, -1082130432);
			task_wander_standard(false, 1193033728, 0);
			close_sequence_task(iVar0);
			task_perform_sequence(iParam0, iVar0);
			clear_sequence_task(&iVar0);
		}
	}
}

void func_420()
{
	int iVar0;
	
	switch (iLocal_1205)
	{
		case 0:
			if (((iLocal_1153 || iLocal_1137) || func_23(Local_1690[0], 0) < 1f) || func_23(Local_1690[1], 0) < 1f)
			{
				if (!is_entity_dead(Local_1690[0], 0) && !is_entity_dead(Local_1690[1], 0))
				{
					task_look_at_entity(Local_1690[0], Local_1690[1], -1, 0, 2);
					task_look_at_entity(Local_1690[1], Local_1690[0], -1, 0, 2);
				}
				if (((ENTITY::DOES_ENTITY_EXIST(Local_1690[1]) && ENTITY::DOES_ENTITY_EXIST(Local_1690.f_4)) && !PED::IS_PED_INJURED(Local_1690[1])) && is_vehicle_driveable(Local_1690.f_4, 0))
				{
					clear_ped_tasks(Local_1690[1]);
					task_enter_vehicle(Local_1690[1], Local_1690.f_4, 20000, 2, 1f, 1, 0);
				}
				if (!func_52(&iLocal_1347))
				{
					func_49(&iLocal_1347);
				}
				iLocal_1205++;
			}
			break;
		
		case 1:
			if (!iLocal_1173)
			{
				if (func_52(&iLocal_1347))
				{
					if (func_46(&iLocal_1347) > 3f)
					{
						if (((ENTITY::DOES_ENTITY_EXIST(Local_1690[0]) && ENTITY::DOES_ENTITY_EXIST(Local_1690.f_4)) && !PED::IS_PED_INJURED(Local_1690[0])) && is_vehicle_driveable(Local_1690.f_4, 0))
						{
							if (get_script_task_status(Local_1690[0], -1794415470) != 1)
							{
								clear_ped_tasks(Local_1690[0]);
								task_enter_vehicle(Local_1690[0], Local_1690.f_4, 20000, true, 1f, 1, 0);
								iLocal_1173 = 1;
							}
						}
					}
				}
				else
				{
					func_49(&iLocal_1347);
				}
			}
			if (!PED::IS_PED_INJURED(Local_1690[0]) && !PED::IS_PED_INJURED(Local_1690[1]))
			{
				if (is_ped_in_vehicle(Local_1690[0], Local_1690.f_4, 0) && is_ped_in_vehicle(Local_1690[1], Local_1690.f_4, 0))
				{
					if (!is_entity_dead(Local_1690.f_3, 0) && !is_entity_dead(Local_1690.f_4, 0))
					{
						task_clear_look_at(Local_1690.f_3);
						func_50(&iLocal_1347);
					}
					iLocal_1205++;
				}
			}
			break;
		
		case 2:
			if (func_52(&iLocal_1347))
			{
				if (func_46(&iLocal_1347) > 3f)
				{
					if (!PED::IS_PED_INJURED(Local_1690.f_3) && is_vehicle_driveable(Local_1690.f_4, 0))
					{
						task_vehicle_follow_waypoint_recording(Local_1690.f_3, Local_1690.f_4, "OJAS_HotelTaxi01", 786485, 0, 16, -1, 10f, 0, 2f);
						iLocal_1205++;
					}
				}
			}
			break;
		
		case 3:
			if (!is_entity_dead(Local_1690.f_3, 0) && !is_entity_dead(Local_1690.f_4, 0))
			{
				if (!is_waypoint_playback_going_on_for_vehicle(Local_1690.f_4) || iLocal_1176)
				{
					task_vehicle_drive_wander(Local_1690.f_3, Local_1690.f_4, 10f, 786603);
					iLocal_1205++;
				}
			}
			break;
		
		case 4:
			if (iLocal_1176)
			{
				if (!PED::IS_PED_INJURED(iLocal_1053[0]))
				{
					iVar0 = iLocal_1053[0];
				}
				else
				{
					iVar0 = func_25(25f);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (!PED::IS_PED_INJURED(iVar0))
					{
						if (!func_22())
						{
							func_28(iVar0, 5, "OJAvaGUARD");
							func_6(&uLocal_1363, "OJASAUD", "OJASva_LEAVE", 9, 0, 0, 0);
						}
					}
				}
				func_50(&iLocal_1347);
				iLocal_1205++;
			}
			break;
		
		case 5:
			break;
	}
}

void func_421()
{
	if ((ENTITY::DOES_ENTITY_EXIST(Local_1690.f_3) && !is_entity_dead(Local_1690.f_3, 0)) && !is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
	{
		task_smart_flee_ped(Local_1690.f_3, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
	}
	if ((ENTITY::DOES_ENTITY_EXIST(Local_1690[0]) && !is_entity_dead(Local_1690[0], 0)) && !is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
	{
		task_smart_flee_ped(Local_1690[0], PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
		set_ped_flee_attributes(Local_1690[0], 2, false);
	}
	if ((ENTITY::DOES_ENTITY_EXIST(Local_1690[1]) && !is_entity_dead(Local_1690[1], 0)) && !is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
	{
		task_smart_flee_ped(Local_1690[1], PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
		set_ped_flee_attributes(Local_1690[1], 2, false);
	}
	if ((ENTITY::DOES_ENTITY_EXIST(Local_1690.f_8[0]) && !is_entity_dead(Local_1690.f_8[0], 0)) && !is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
	{
		task_smart_flee_ped(Local_1690.f_8[0], PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
	}
	if ((ENTITY::DOES_ENTITY_EXIST(Local_1690.f_8[1]) && !is_entity_dead(Local_1690.f_8[1], 0)) && !is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
	{
		task_smart_flee_ped(Local_1690.f_8[1], PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
	}
	if ((ENTITY::DOES_ENTITY_EXIST(Local_1690.f_5[0]) && !is_entity_dead(Local_1690.f_5[0], 0)) && !is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
	{
		task_smart_flee_ped(Local_1690.f_5[0], PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
	}
	if ((ENTITY::DOES_ENTITY_EXIST(Local_1690.f_5[1]) && !is_entity_dead(Local_1690.f_5[1], 0)) && !is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
	{
		task_smart_flee_ped(Local_1690.f_5[1], PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
	}
}

bool func_422()
{
	if (!is_entity_dead(Local_1690.f_3, 0))
	{
		if (is_ped_being_jacked(Local_1690.f_3))
		{
			if (get_peds_jacker(Local_1690.f_3) == PLAYER::PLAYER_PED_ID())
			{
				return true;
			}
		}
	}
	if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0) && !is_entity_dead(Local_1690.f_4, 0))
	{
		if (is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), Local_1690.f_4, 0))
		{
			return true;
		}
	}
	if (func_105(Local_1690[0], 0, &Local_360, &iLocal_371, 0, 0, 0, 1, 0))
	{
		return true;
	}
	if (func_105(Local_1690[1], 0, &Local_360, &iLocal_371, 0, 0, 0, 1, 0))
	{
		return true;
	}
	if (func_105(Local_1690.f_8[0], 0, &Local_360, &iLocal_371, 0, 0, 0, 1, 0))
	{
		return true;
	}
	if (func_105(Local_1690.f_8[1], 0, &Local_360, &iLocal_371, 0, 0, 0, 1, 0))
	{
		return true;
	}
	if (func_105(Local_1690.f_5[0], 0, &Local_360, &iLocal_371, 0, 0, 0, 1, 0))
	{
		return true;
	}
	if (func_105(Local_1690.f_5[1], 0, &Local_360, &iLocal_371, 0, 0, 0, 1, 0))
	{
		return true;
	}
	if (func_104(Local_1690.f_4))
	{
		return true;
	}
	if (is_explosion_in_sphere(-1, -1231.326f, -201.7195f, 38.2114f, 20f))
	{
		return true;
	}
	return false;
}

void func_423()
{
	func_478();
}

bool func_424()
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

void func_425(Vector3 vParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_477())
	{
		set_this_script_can_be_paused(0);
		GAMEPLAY::CLEAR_BIT(&(Global_91278.f_20), 2);
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
			GAMEPLAY::SET_BIT(&(Global_91278.f_20), 14);
		}
		else
		{
			GAMEPLAY::CLEAR_BIT(&(Global_91278.f_20), 14);
		}
		if (iParam5 == 1)
		{
			GAMEPLAY::SET_BIT(&(Global_91278.f_20), 24);
		}
		else
		{
			GAMEPLAY::CLEAR_BIT(&(Global_91278.f_20), 24);
		}
		func_399(1);
	}
}

int func_426(Vector3 vParam0, Vector3 fParam1)
{
	return func_427(&(Global_95496.f_2311), vParam0, fParam3, 0);
}

int func_427(auto uParam0, Vector3 vParam1, Vector3 fParam2, int iParam3)
{
	int iVar0;
	Vector3 vVar1;
	int iVar4;
	auto uVar5;
	int iVar8;
	
	if (func_466(uParam0))
	{
		if (func_44(vParam1, 0f, 0f, 0f, 0))
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
		if (func_465(uParam0))
		{
			clear_area(vParam1, 5f, 1, 0, 0, false);
			func_464(vParam1, 5f, 0);
			iVar0 = create_vehicle(*uParam0.f_12.f_66, vParam1, fParam4, 1, 1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				vVar1 = {get_entity_coords(iVar0, 1)};
				if (vdist2(vVar1, -1151.15f, -1530.32f, 7.48925f) <= 3f)
				{
					set_entity_coords_no_offset(iVar0, vParam1, 0, 0, 1);
				}
				func_456(iVar0, uParam0.f_12, 0, 1);
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
						if (is_this_model_a_car(ENTITY::GET_ENTITY_MODEL(iVar0)))
						{
							func_455(*uParam0.f_11, 1);
						}
						else if (is_this_model_a_bike(ENTITY::GET_ENTITY_MODEL(iVar0)))
						{
							func_455(*uParam0.f_11, 2);
						}
					}
					_0xAB04325045427AAE(iVar0, 0);
					_0x428BACCDF5E26EAD(iVar0, false);
					set_vehicle_has_strong_axles(iVar0, true);
					func_454(iVar0, *uParam0.f_11);
				}
				else if ((!func_451(iVar0, *uParam0.f_3, *uParam0.f_8) && *uParam0.f_10) && are_strings_equal(get_this_script_name(), "startup_positioning"))
				{
					iVar8 = func_450(iVar0);
					if (iVar8 == -1)
					{
						*uParam0.f_10 = 0;
					}
					else
					{
						func_445(iVar8);
					}
				}
				if (((Global_91278 != 13 && Global_91278 != 10) && Global_91278 != 11) && Global_91278 != 12)
				{
					if (get_hash_key(&(Global_91278.f_3)) == Global_69307)
					{
						if (*uParam0.f_12.f_66 == Global_101154.f_18807.f_69[21 /*78*/].f_66)
						{
							func_442(24, 0);
							func_445(24);
						}
					}
				}
				if (*uParam0.f_9 == 1)
				{
					func_428(iVar0, *uParam0.f_11);
				}
				set_model_as_no_longer_needed(*uParam0.f_12.f_66);
				vVar1 = {get_entity_coords(iVar0, 1)};
			}
			return iVar0;
		}
	}
	return iVar0;
}

void func_428(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_429(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = get_ped_in_vehicle_seat(iParam0, -1);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar0 = get_last_ped_in_vehicle_seat(iParam0, -1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_INJURED(iVar0))
		{
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("player_two"))
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
			if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_101154.f_18807.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
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
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_101154.f_18807.f_5600[iVar1 /*78*/].f_66)
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
	func_279(iParam0, &(Global_101154.f_18807.f_5510));
}

bool func_429(int iParam0)
{
	if ((((((((((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !is_vehicle_driveable(iParam0, 0)) || func_289(iParam0, 0, 0)) || func_289(iParam0, 1, 0)) || func_289(iParam0, 2, 0)) || func_275(iParam0) != 145) || func_441(iParam0)) || func_440(iParam0)) || func_439(iParam0)) || func_438(iParam0)) || !func_430(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (func_440(iParam0))
		{
		}
		if (func_440(iParam0))
		{
		}
		if (func_289(iParam0, 0, 0))
		{
		}
		if (func_289(iParam0, 1, 0))
		{
		}
		if (func_289(iParam0, 2, 0))
		{
		}
		if (func_275(iParam0) != 145)
		{
		}
		return false;
	}
	return true;
}

bool func_430(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	if (!func_431(iParam0, 0))
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

bool func_431(int iParam0, int iParam1)
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
	if ((((((((((((iParam0 == joaat("dodo") || iParam0 == joaat("dukes")) || iParam0 == joaat("dukes2")) || (iParam0 == joaat("dominator2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0 == joaat("buffalo3") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0 == joaat("gauntlet2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || iParam0 == joaat("blimp2")) || iParam0 == joaat("stalion")) || (iParam0 == joaat("stalion2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || iParam0 == joaat("submersible2")) || iParam0 == joaat("marshall")) || iParam0 == joaat("blista2")) || iParam0 == joaat("blista3"))
	{
		if (!func_437())
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
		if ((((!func_436() && !func_435()) && !func_434()) && !func_433()) && !func_437())
		{
			return false;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((is_durango_version() || GAMEPLAY::IS_PC_VERSION()) || is_orbis_version())
		{
		}
		else if (!func_434())
		{
			return false;
		}
	}
	if (iParam1)
	{
		if (!func_432(iParam0))
		{
			return false;
		}
	}
	return true;
}

int func_432(int iParam0)
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

bool func_433()
{
	return false;
}

bool func_434()
{
	return true;
}

bool func_435()
{
	return true;
}

bool func_436()
{
	if (is_dlc_present(-1226939934))
	{
		return true;
	}
	return false;
}

bool func_437()
{
	int iVar0;
	
	if (network_is_signed_in())
	{
		if (_network_are_ros_available())
		{
			if (_0x593570C289A77688())
			{
				STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &iVar0, -1);
				GAMEPLAY::SET_BIT(&iVar0, 2);
				GAMEPLAY::SET_BIT(&iVar0, 4);
				GAMEPLAY::SET_BIT(&iVar0, 6);
				GAMEPLAY::SET_BIT(&Global_25, 2);
				GAMEPLAY::SET_BIT(&Global_25, 4);
				GAMEPLAY::SET_BIT(&Global_25, 6);
				STATS::STAT_SET_INT(joaat("sp_unlock_exclus_content"), iVar0, 1);
				if (_0x5AA3BEFA29F03AD4())
				{
					iVar0 = get_profile_setting(866);
					GAMEPLAY::SET_BIT(&iVar0, false);
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
		if (GAMEPLAY::IS_BIT_SET(get_profile_setting(866), false))
		{
			return true;
		}
	}
	return false;
}

bool func_438(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	sVar1 = get_vehicle_number_plate_text(iParam0);
	if (iVar0 == joaat("speedo") && are_strings_equal(sVar1, "LAMAR G "))
	{
		return true;
	}
	if (!func_431(iVar0, 0))
	{
		return true;
	}
	return false;
}

bool func_439(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_88972[iVar0]))
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

bool func_440(int iParam0)
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && is_vehicle_driveable(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_88942[iVar0]) && is_vehicle_driveable(Global_88942[iVar0], 0))
			{
				if (Global_88942[iVar0] == iParam0 && ENTITY::GET_ENTITY_MODEL(Global_88942[iVar0]) == ENTITY::GET_ENTITY_MODEL(iParam0))
				{
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

bool func_441(int iParam0)
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(Global_68319.f_484[24]))
	{
		if (iParam0 == Global_68319.f_484[24])
		{
			return false;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_68319.f_484[iVar0]))
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

void func_442(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1)
	{
		if (!func_444(iParam0, 0))
		{
			func_443(iParam0, 1, 0);
			func_443(iParam0, 2, 0);
			func_443(iParam0, 3, 0);
			func_443(iParam0, 4, 0);
			func_443(iParam0, 0, 1);
			Global_68319[iParam0] = 1;
		}
	}
	else
	{
		func_443(iParam0, 0, 0);
	}
}

void func_443(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam2)
	{
		GAMEPLAY::SET_BIT(&(Global_101154.f_18807[iParam0]), iParam1);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Global_101154.f_18807[iParam0]), iParam1);
	}
}

int func_444(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return false;
	}
	return GAMEPLAY::IS_BIT_SET(Global_101154.f_18807[iParam0], iParam1);
}

void func_445(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (func_449(&(Global_68319.f_555[0 /*21*/]), iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_68319.f_139[iParam0]))
		{
			iVar0 = true;
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (is_vehicle_driveable(Global_68319.f_139[iParam0], 0))
				{
					if (is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), Global_68319.f_139[iParam0], 0))
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
		if (GAMEPLAY::IS_BIT_SET(Global_68319.f_555[0 /*21*/].f_9, 13))
		{
			if (((((iParam0 == 24 && func_444(iParam0, 0)) && Global_69228.f_66 == 0) && Global_101154.f_18807.f_1958[Global_68319.f_555[0 /*21*/].f_14] != 0) && Global_101154.f_18807.f_1958[Global_68319.f_555[0 /*21*/].f_14] > 3) && (!func_447(0, Global_68319.f_555[0 /*21*/].f_12) || !func_447(1, Global_68319.f_555[0 /*21*/].f_12)))
			{
				func_446(&(Global_101154.f_18807.f_69[Global_68319.f_555[0 /*21*/].f_14 /*78*/]), &Global_69228);
				Global_69306 = Global_101154.f_18807.f_5591;
			}
			func_442(iParam0, 0);
		}
	}
}

void func_446(auto uParam0, auto uParam1)
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

int func_447(int iParam0, int iParam1)
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
	if (iParam0 < 0 || iParam0 >= func_448(&(Global_101154.f_18807.f_5038[iVar0 /*157*/])))
	{
		return 0;
	}
	return func_431(Global_101154.f_18807.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66, 0);
}

auto func_448(auto uParam0)
{
	return *uParam0;
}

int func_449(auto uParam0, int iParam1)
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
			*uParam0.f_4 = func_277(0, 1);
			*uParam0.f_12 = 0;
			GAMEPLAY::SET_BIT(uParam0.f_9, 20);
			GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = {1970.943f, 3801.684f, 31.1396f};
			*uParam0.f_3 = 301.3964f;
			*uParam0.f_4 = func_277(0, 1);
			*uParam0.f_12 = 0;
			GAMEPLAY::SET_BIT(uParam0.f_9, 20);
			GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = {-22.6297f, -1439.137f, 29.6549f};
			*uParam0.f_3 = 180.0808f;
			*uParam0.f_4 = func_277(1, 1);
			*uParam0.f_12 = 1;
			GAMEPLAY::SET_BIT(uParam0.f_9, 20);
			GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = {-22.5229f, -1434.699f, 29.6552f};
			*uParam0.f_3 = 141.6114f;
			*uParam0.f_4 = func_277(1, 2);
			*uParam0.f_12 = 1;
			GAMEPLAY::SET_BIT(uParam0.f_9, 19);
			GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = {10.9281f, 545.669f, 174.7951f};
			*uParam0.f_3 = 61.392f;
			*uParam0.f_4 = func_277(1, 1);
			*uParam0.f_12 = 1;
			GAMEPLAY::SET_BIT(uParam0.f_9, 20);
			GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = {6.1093f, 544.9742f, 174.2835f};
			*uParam0.f_3 = 92.1548f;
			*uParam0.f_4 = func_277(1, 2);
			*uParam0.f_12 = 1;
			GAMEPLAY::SET_BIT(uParam0.f_9, 19);
			GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = {1981.416f, 3808.131f, 31.1384f};
			*uParam0.f_3 = 117.2557f;
			*uParam0.f_4 = func_277(2, 1);
			*uParam0.f_12 = 2;
			GAMEPLAY::SET_BIT(uParam0.f_9, 20);
			GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = {-1158.488f, -1529.367f, 3.8995f};
			*uParam0.f_3 = 35.7505f;
			*uParam0.f_4 = func_277(2, 1);
			*uParam0.f_12 = 2;
			GAMEPLAY::SET_BIT(uParam0.f_9, 20);
			GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = {148.2868f, -1270.569f, 28.2252f};
			*uParam0.f_3 = 208.4685f;
			*uParam0.f_4 = func_277(2, 1);
			*uParam0.f_12 = 2;
			GAMEPLAY::SET_BIT(uParam0.f_9, 20);
			GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = {1459.509f, -1380.45f, 78.3259f};
			*uParam0.f_3 = 99.6211f;
			*uParam0.f_4 = joaat("scorcher");
			GAMEPLAY::SET_BIT(uParam0.f_9, 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = {-1518.947f, -1387.865f, -0.5134f};
			*uParam0.f_3 = 98.3867f;
			*uParam0.f_4 = joaat("seashark");
			iVar0 = 1;
			GAMEPLAY::SET_BIT(uParam0.f_9, 6);
			break;
		
		case 11:
			*uParam0 = {353.0926f, 3577.593f, 32.351f};
			*uParam0.f_3 = 16.6205f;
			*uParam0.f_4 = joaat("duster");
			iVar0 = 1;
			GAMEPLAY::SET_BIT(uParam0.f_9, 6);
			break;
		
		case 12:
			*uParam0.f_14 = 0;
			*uParam0 = {-1652.004f, -3142.348f, 12.9921f};
			*uParam0.f_3 = 329.1082f;
			*uParam0.f_12 = 0;
			*uParam0.f_13 = 359;
			GAMEPLAY::SET_BIT(uParam0.f_9, false);
			GAMEPLAY::SET_BIT(uParam0.f_9, 21);
			GAMEPLAY::SET_BIT(uParam0.f_9, 14);
			GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			GAMEPLAY::SET_BIT(uParam0.f_9, 10);
			GAMEPLAY::SET_BIT(uParam0.f_9, 12);
			GAMEPLAY::SET_BIT(uParam0.f_9, 28);
			iVar0 = 1;
			break;
		
		case 13:
			*uParam0.f_14 = 1;
			*uParam0 = {-1271.649f, -3380.685f, 12.9451f};
			*uParam0.f_3 = 329.5137f;
			*uParam0.f_12 = 1;
			*uParam0.f_13 = 359;
			GAMEPLAY::SET_BIT(uParam0.f_9, false);
			GAMEPLAY::SET_BIT(uParam0.f_9, 21);
			GAMEPLAY::SET_BIT(uParam0.f_9, 14);
			GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			GAMEPLAY::SET_BIT(uParam0.f_9, 10);
			GAMEPLAY::SET_BIT(uParam0.f_9, 12);
			GAMEPLAY::SET_BIT(uParam0.f_9, 28);
			iVar0 = 1;
			break;
		
		case 14:
			*uParam0.f_14 = 2;
			*uParam0 = {1735.586f, 3294.531f, 40.1651f};
			*uParam0.f_3 = 194.9525f;
			*uParam0.f_12 = 2;
			*uParam0.f_13 = 359;
			GAMEPLAY::SET_BIT(uParam0.f_9, false);
			GAMEPLAY::SET_BIT(uParam0.f_9, 21);
			GAMEPLAY::SET_BIT(uParam0.f_9, 14);
			GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			GAMEPLAY::SET_BIT(uParam0.f_9, 10);
			GAMEPLAY::SET_BIT(uParam0.f_9, 12);
			GAMEPLAY::SET_BIT(uParam0.f_9, 28);
			iVar0 = 1;
			break;
		
		case 15:
			*uParam0.f_14 = 3;
			*uParam0 = {-846.27f, -1363.19f, 0.22f};
			*uParam0.f_3 = 108.78f;
			*uParam0.f_12 = 0;
			*uParam0.f_13 = 356;
			GAMEPLAY::SET_BIT(uParam0.f_9, false);
			GAMEPLAY::SET_BIT(uParam0.f_9, 21);
			GAMEPLAY::SET_BIT(uParam0.f_9, 14);
			GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			GAMEPLAY::SET_BIT(uParam0.f_9, 10);
			GAMEPLAY::SET_BIT(uParam0.f_9, 12);
			GAMEPLAY::SET_BIT(uParam0.f_9, 22);
			GAMEPLAY::SET_BIT(uParam0.f_9, 28);
			iVar0 = 1;
			break;
		
		case 16:
			*uParam0.f_14 = 4;
			*uParam0 = {-849.47f, -1354.99f, 0.24f};
			*uParam0.f_3 = 109.84f;
			*uParam0.f_12 = 1;
			*uParam0.f_13 = 356;
			GAMEPLAY::SET_BIT(uParam0.f_9, false);
			GAMEPLAY::SET_BIT(uParam0.f_9, 21);
			GAMEPLAY::SET_BIT(uParam0.f_9, 14);
			GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			GAMEPLAY::SET_BIT(uParam0.f_9, 10);
			GAMEPLAY::SET_BIT(uParam0.f_9, 12);
			GAMEPLAY::SET_BIT(uParam0.f_9, 22);
			GAMEPLAY::SET_BIT(uParam0.f_9, 28);
			iVar0 = 1;
			break;
		
		case 17:
			*uParam0.f_14 = 5;
			*uParam0 = {-852.47f, -1346.2f, 0.21f};
			*uParam0.f_3 = 108.76f;
			*uParam0.f_12 = 2;
			*uParam0.f_13 = 356;
			GAMEPLAY::SET_BIT(uParam0.f_9, false);
			GAMEPLAY::SET_BIT(uParam0.f_9, 21);
			GAMEPLAY::SET_BIT(uParam0.f_9, 14);
			GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			GAMEPLAY::SET_BIT(uParam0.f_9, 10);
			GAMEPLAY::SET_BIT(uParam0.f_9, 12);
			GAMEPLAY::SET_BIT(uParam0.f_9, 22);
			GAMEPLAY::SET_BIT(uParam0.f_9, 28);
			iVar0 = 1;
			break;
		
		case 18:
			*uParam0.f_14 = 6;
			*uParam0 = {-745.857f, -1433.904f, 4.0005f};
			*uParam0.f_12 = 0;
			*uParam0.f_13 = 360;
			*uParam0.f_15 = {-756.2952f, -1441.609f, 2.9184f};
			*uParam0.f_18 = {-738.0606f, -1423.068f, 8.2835f};
			GAMEPLAY::SET_BIT(uParam0.f_9, false);
			GAMEPLAY::SET_BIT(uParam0.f_9, 21);
			GAMEPLAY::SET_BIT(uParam0.f_9, 14);
			GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			GAMEPLAY::SET_BIT(uParam0.f_9, 10);
			GAMEPLAY::SET_BIT(uParam0.f_9, 12);
			GAMEPLAY::SET_BIT(uParam0.f_9, 28);
			iVar0 = 1;
			break;
		
		case 19:
			*uParam0.f_14 = 7;
			*uParam0 = {-761.8486f, -1453.829f, 4.0005f};
			*uParam0.f_12 = 1;
			*uParam0.f_13 = 360;
			*uParam0.f_15 = {-772.8158f, -1459.957f, 3.2894f};
			*uParam0.f_18 = {-754.3353f, -1440.836f, 8.3334f};
			GAMEPLAY::SET_BIT(uParam0.f_9, false);
			GAMEPLAY::SET_BIT(uParam0.f_9, 21);
			GAMEPLAY::SET_BIT(uParam0.f_9, 14);
			GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			GAMEPLAY::SET_BIT(uParam0.f_9, 10);
			GAMEPLAY::SET_BIT(uParam0.f_9, 12);
			GAMEPLAY::SET_BIT(uParam0.f_9, 28);
			iVar0 = 1;
			break;
		
		case 20:
			*uParam0.f_14 = 8;
			*uParam0 = {1769.3f, 3244f, 41.1f};
			*uParam0.f_12 = 2;
			*uParam0.f_13 = 360;
			GAMEPLAY::SET_BIT(uParam0.f_9, false);
			GAMEPLAY::SET_BIT(uParam0.f_9, 21);
			GAMEPLAY::SET_BIT(uParam0.f_9, 14);
			GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			GAMEPLAY::SET_BIT(uParam0.f_9, 10);
			GAMEPLAY::SET_BIT(uParam0.f_9, 12);
			GAMEPLAY::SET_BIT(uParam0.f_9, 23);
			GAMEPLAY::SET_BIT(uParam0.f_9, 28);
			iVar0 = 1;
			break;
		
		case 21:
			*uParam0.f_14 = 9;
			*uParam0 = {192.7897f, -1020.539f, -99.98f};
			*uParam0.f_3 = 180f;
			*uParam0.f_4 = 0;
			*uParam0.f_12 = 0;
			*uParam0.f_13 = 357;
			GAMEPLAY::SET_BIT(uParam0.f_9, false);
			GAMEPLAY::SET_BIT(uParam0.f_9, 21);
			GAMEPLAY::SET_BIT(uParam0.f_9, 14);
			GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			GAMEPLAY::SET_BIT(uParam0.f_9, 10);
			GAMEPLAY::SET_BIT(uParam0.f_9, 12);
			GAMEPLAY::SET_BIT(uParam0.f_9, 24);
			GAMEPLAY::SET_BIT(uParam0.f_9, 28);
			GAMEPLAY::SET_BIT(uParam0.f_9, 29);
			iVar0 = 1;
			break;
		
		case 22:
			*uParam0.f_14 = 10;
			*uParam0 = {192.7897f, -1020.539f, -99.98f};
			*uParam0.f_3 = 180f;
			*uParam0.f_4 = 0;
			*uParam0.f_12 = 1;
			*uParam0.f_13 = 357;
			GAMEPLAY::SET_BIT(uParam0.f_9, false);
			GAMEPLAY::SET_BIT(uParam0.f_9, 21);
			GAMEPLAY::SET_BIT(uParam0.f_9, 14);
			GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			GAMEPLAY::SET_BIT(uParam0.f_9, 10);
			GAMEPLAY::SET_BIT(uParam0.f_9, 12);
			GAMEPLAY::SET_BIT(uParam0.f_9, 24);
			GAMEPLAY::SET_BIT(uParam0.f_9, 28);
			GAMEPLAY::SET_BIT(uParam0.f_9, 29);
			iVar0 = 1;
			break;
		
		case 23:
			*uParam0.f_14 = 11;
			*uParam0 = {192.7897f, -1020.539f, -99.98f};
			*uParam0.f_3 = 180f;
			*uParam0.f_4 = 0;
			*uParam0.f_12 = 2;
			*uParam0.f_13 = 357;
			GAMEPLAY::SET_BIT(uParam0.f_9, false);
			GAMEPLAY::SET_BIT(uParam0.f_9, 21);
			GAMEPLAY::SET_BIT(uParam0.f_9, 14);
			GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			GAMEPLAY::SET_BIT(uParam0.f_9, 10);
			GAMEPLAY::SET_BIT(uParam0.f_9, 12);
			GAMEPLAY::SET_BIT(uParam0.f_9, 24);
			GAMEPLAY::SET_BIT(uParam0.f_9, 28);
			GAMEPLAY::SET_BIT(uParam0.f_9, 29);
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
			GAMEPLAY::SET_BIT(uParam0.f_9, 10);
			GAMEPLAY::SET_BIT(uParam0.f_9, 12);
			GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			GAMEPLAY::SET_BIT(uParam0.f_9, 27);
			GAMEPLAY::SET_BIT(uParam0.f_9, 24);
			GAMEPLAY::SET_BIT(uParam0.f_9, 29);
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
			GAMEPLAY::SET_BIT(uParam0.f_9, 10);
			GAMEPLAY::SET_BIT(uParam0.f_9, 12);
			GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			GAMEPLAY::SET_BIT(uParam0.f_9, 27);
			GAMEPLAY::SET_BIT(uParam0.f_9, 24);
			GAMEPLAY::SET_BIT(uParam0.f_9, 29);
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
			GAMEPLAY::SET_BIT(uParam0.f_9, 10);
			GAMEPLAY::SET_BIT(uParam0.f_9, 12);
			GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			GAMEPLAY::SET_BIT(uParam0.f_9, 27);
			GAMEPLAY::SET_BIT(uParam0.f_9, 24);
			GAMEPLAY::SET_BIT(uParam0.f_9, 29);
			iVar0 = 1;
			break;
		
		case 24:
			*uParam0.f_14 = 21;
			*uParam0 = {0f, 0f, 0f};
			*uParam0.f_3 = 0f;
			*uParam0.f_4 = 0;
			GAMEPLAY::SET_BIT(uParam0.f_9, 10);
			GAMEPLAY::SET_BIT(uParam0.f_9, 11);
			GAMEPLAY::SET_BIT(uParam0.f_9, 13);
			GAMEPLAY::SET_BIT(uParam0.f_9, 12);
			iVar0 = 1;
			break;
		
		case 25:
			*uParam0.f_14 = 22;
			*uParam0 = {723.2515f, -632.0496f, 27.1484f};
			*uParam0.f_3 = 12.9316f;
			*uParam0.f_4 = joaat("tailgater");
			GAMEPLAY::SET_BIT(uParam0.f_9, 10);
			GAMEPLAY::SET_BIT(uParam0.f_9, 11);
			GAMEPLAY::SET_BIT(uParam0.f_9, 13);
			GAMEPLAY::SET_BIT(uParam0.f_9, 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = {-51.23f, 3111.9f, 24.95f};
			*uParam0.f_3 = 46.78f;
			*uParam0.f_4 = joaat("proptrailer");
			GAMEPLAY::SET_BIT(uParam0.f_9, 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = {-55.7984f, -1096.586f, 25.4223f};
			*uParam0.f_3 = 308.0596f;
			*uParam0.f_4 = joaat("bjxl");
			*uParam0.f_10 = 126;
			*uParam0.f_11 = 126;
			GAMEPLAY::SET_BIT(uParam0.f_9, 9);
			GAMEPLAY::SET_BIT(uParam0.f_9, 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = {-2892.93f, 3192.37f, 11.66f};
			*uParam0.f_3 = -132.35f;
			*uParam0.f_4 = joaat("velum");
			*uParam0.f_10 = 157;
			*uParam0.f_11 = 157;
			GAMEPLAY::SET_BIT(uParam0.f_9, 9);
			GAMEPLAY::SET_BIT(uParam0.f_9, 23);
			GAMEPLAY::SET_BIT(uParam0.f_9, 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = {1744.308f, 3270.673f, 40.2076f};
			*uParam0.f_3 = 125f;
			*uParam0.f_4 = joaat("cargobob3");
			GAMEPLAY::SET_BIT(uParam0.f_9, 23);
			GAMEPLAY::SET_BIT(uParam0.f_9, 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = {1751.44f, 3322.643f, 42.1855f};
			*uParam0.f_3 = 268.134f;
			*uParam0.f_4 = joaat("submersible");
			GAMEPLAY::SET_BIT(uParam0.f_9, 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = {1377.104f, -2076.2f, 52f};
			*uParam0.f_3 = 37.5f;
			*uParam0.f_4 = joaat("towtruck");
			GAMEPLAY::SET_BIT(uParam0.f_9, 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = {1380.42f, -2072.77f, 51.7607f};
			*uParam0.f_3 = 37.5f;
			*uParam0.f_4 = joaat("trash");
			GAMEPLAY::SET_BIT(uParam0.f_9, 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = {1359.389f, 3618.441f, 33.8907f};
			*uParam0.f_3 = 108.2337f;
			*uParam0.f_4 = joaat("barracks");
			GAMEPLAY::SET_BIT(uParam0.f_9, 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = {693.1154f, -1018.155f, 21.6387f};
			*uParam0.f_3 = 177.6454f;
			*uParam0.f_4 = 1938952078;
			GAMEPLAY::SET_BIT(uParam0.f_9, 23);
			GAMEPLAY::SET_BIT(uParam0.f_9, 8);
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
			GAMEPLAY::SET_BIT(uParam0.f_9, 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = {589.4399f, 2736.708f, 42.03316f};
			*uParam0.f_3 = -175.7105f;
			*uParam0.f_4 = joaat("rumpo2");
			*uParam0.f_12 = 2;
			GAMEPLAY::SET_BIT(uParam0.f_9, 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = {-488.774f, -344.5721f, 34.36356f};
			*uParam0.f_3 = 82.4042f;
			*uParam0.f_4 = joaat("rumpo2");
			*uParam0.f_12 = 2;
			GAMEPLAY::SET_BIT(uParam0.f_9, 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = {288.8808f, -585.4728f, 43.15428f};
			*uParam0.f_3 = -20.80707f;
			*uParam0.f_4 = joaat("rumpo2");
			*uParam0.f_12 = 2;
			GAMEPLAY::SET_BIT(uParam0.f_9, 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = {304.8294f, -1383.674f, 31.67744f};
			*uParam0.f_3 = -41.11603f;
			*uParam0.f_4 = joaat("rumpo2");
			*uParam0.f_12 = 2;
			GAMEPLAY::SET_BIT(uParam0.f_9, 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = {1126.194f, -1481.486f, 34.7016f};
			*uParam0.f_3 = -91.43369f;
			*uParam0.f_4 = joaat("rumpo2");
			*uParam0.f_12 = 2;
			GAMEPLAY::SET_BIT(uParam0.f_9, 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = {-1598.36f, 5252.84f, 0f};
			*uParam0.f_3 = 28.14f;
			*uParam0.f_4 = joaat("submersible");
			*uParam0.f_13 = 308;
			GAMEPLAY::SET_BIT(uParam0.f_9, 2);
			GAMEPLAY::SET_BIT(uParam0.f_9, 30);
			GAMEPLAY::SET_BIT(uParam0.f_9, 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = {-1602.62f, 5260.37f, 0.86f};
			*uParam0.f_3 = 25.32f;
			*uParam0.f_4 = joaat("dinghy");
			*uParam0.f_13 = 404;
			GAMEPLAY::SET_BIT(uParam0.f_9, 2);
			GAMEPLAY::SET_BIT(uParam0.f_9, 22);
			GAMEPLAY::SET_BIT(uParam0.f_9, 6);
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
			if (func_437())
			{
				*uParam0.f_4 = joaat("blimp2");
			}
			else
			{
				*uParam0.f_4 = joaat("blimp");
			}
			*uParam0.f_13 = 401;
			GAMEPLAY::SET_BIT(uParam0.f_9, 13);
			GAMEPLAY::SET_BIT(uParam0.f_9, 2);
			GAMEPLAY::SET_BIT(uParam0.f_9, true);
			GAMEPLAY::SET_BIT(uParam0.f_9, 23);
			GAMEPLAY::SET_BIT(uParam0.f_9, 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = {-806.31f, -2679.65f, 13.9f};
			*uParam0.f_3 = 150.54f;
			if (func_437())
			{
				*uParam0.f_4 = joaat("blimp2");
			}
			else
			{
				*uParam0.f_4 = joaat("blimp");
			}
			*uParam0.f_13 = 401;
			GAMEPLAY::SET_BIT(uParam0.f_9, 13);
			GAMEPLAY::SET_BIT(uParam0.f_9, 2);
			GAMEPLAY::SET_BIT(uParam0.f_9, true);
			GAMEPLAY::SET_BIT(uParam0.f_9, 23);
			GAMEPLAY::SET_BIT(uParam0.f_9, 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = {1985.85f, 3828.96f, 31.98f};
			*uParam0.f_3 = -16.58f;
			*uParam0.f_4 = joaat("blazer3");
			GAMEPLAY::SET_BIT(uParam0.f_9, 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = {3870.75f, 4464.67f, 0f};
			*uParam0.f_3 = 0f;
			*uParam0.f_4 = joaat("submersible2");
			*uParam0.f_13 = 308;
			GAMEPLAY::SET_BIT(uParam0.f_9, false);
			GAMEPLAY::SET_BIT(uParam0.f_9, 21);
			GAMEPLAY::SET_BIT(uParam0.f_9, 23);
			GAMEPLAY::SET_BIT(uParam0.f_9, 6);
			GAMEPLAY::SET_BIT(uParam0.f_9, 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = {1257.729f, -2564.474f, 41.717f};
			*uParam0.f_3 = 284.5561f;
			*uParam0.f_4 = joaat("dukes2");
			GAMEPLAY::SET_BIT(uParam0.f_9, 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = {643.2823f, 3014.152f, 42.2733f};
			*uParam0.f_3 = 128.0554f;
			*uParam0.f_4 = joaat("dukes2");
			GAMEPLAY::SET_BIT(uParam0.f_9, 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = {38.9368f, 850.8677f, 196.3f};
			*uParam0.f_3 = 311.6813f;
			*uParam0.f_4 = joaat("dodo");
			GAMEPLAY::SET_BIT(uParam0.f_9, 30);
			GAMEPLAY::SET_BIT(uParam0.f_9, 23);
			GAMEPLAY::SET_BIT(uParam0.f_9, 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = {1333.875f, 4262.226f, 30.78f};
			*uParam0.f_3 = 262.5293f;
			*uParam0.f_4 = joaat("dodo");
			GAMEPLAY::SET_BIT(uParam0.f_9, 30);
			GAMEPLAY::SET_BIT(uParam0.f_9, 23);
			GAMEPLAY::SET_BIT(uParam0.f_9, 6);
			iVar0 = 1;
			break;
	}
	if (GAMEPLAY::IS_BIT_SET(*uParam0.f_9, 10))
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
		if (!func_44(Global_101154.f_18807.f_1864[*uParam0.f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = {Global_101154.f_18807.f_1864[*uParam0.f_14 /*3*/]};
		}
		if (Global_101154.f_18807.f_1934[*uParam0.f_14] != -1f)
		{
			*uParam0.f_3 = Global_101154.f_18807.f_1934[*uParam0.f_14];
		}
	}
	if (GAMEPLAY::IS_BIT_SET(*uParam0.f_9, 19))
	{
		if (!func_44(Global_101154.f_1826.f_539.f_2816[1 /*10*/][*uParam0.f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = {Global_101154.f_1826.f_539.f_2816[1 /*10*/][*uParam0.f_12 /*3*/]};
			*uParam0.f_3 = Global_101154.f_1826.f_539.f_2837[1 /*4*/][*uParam0.f_12];
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(*uParam0.f_9, 20))
	{
		if (!func_44(Global_101154.f_1826.f_539.f_2816[0 /*10*/][*uParam0.f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = {Global_101154.f_1826.f_539.f_2816[0 /*10*/][*uParam0.f_12 /*3*/]};
			*uParam0.f_3 = Global_101154.f_1826.f_539.f_2837[0 /*4*/][*uParam0.f_12];
		}
	}
	return iVar0;
}

int func_450(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(Global_68319.f_484[iVar0]) && !is_entity_dead(Global_68319.f_484[iVar0], 0)) && is_vehicle_driveable(Global_68319.f_484[iVar0], 0))
		{
			get_vehicle_colours(iParam0, &iVar1, &iVar2);
			get_vehicle_colours(Global_68319.f_484[iVar0], &iVar3, &iVar4);
			if (((ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(Global_68319.f_484[iVar0]) && get_vehicle_livery(iParam0) == get_vehicle_livery(Global_68319.f_484[iVar0])) && iVar1 == iVar2) && iVar3 == iVar4)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

bool func_451(int iParam0, Vector3 vParam1, int iParam2)
{
	int iVar0;
	var[] uVar1 = new var[3];
	int iVar5;
	int iVar6;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	switch (iVar0)
	{
		case joaat("cargobob"):
			if (func_453(iParam0, Global_68319.f_139[38], 0))
			{
				func_445(38);
				return true;
			}
			break;
		
		case 1938952078:
			if (func_453(iParam0, Global_68319.f_139[43], 1))
			{
				func_445(43);
				return true;
			}
			break;
		
		case joaat("cuban800"):
			iVar5 = get_ped_nearby_vehicles(PLAYER::PLAYER_PED_ID(), &uVar1);
			iVar6 = 0;
			while (iVar6 <= iVar5 - 1)
			{
				if (func_453(iParam0, uVar1[iVar6], 1) && func_452(get_entity_coords(uVar1[iVar6], 1), 2136.133f, 4780.563f, 39.9702f, 5f, 0))
				{
					if ((!iParam4 || func_44(vParam1, 0f, 0f, 0f, 0)) || get_distance_between_coords(get_entity_coords(iParam0, 1), get_entity_coords(uVar1[iVar6], 1), 1) < 10f)
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
			if ((ENTITY::DOES_ENTITY_EXIST(Global_68319.f_484[14]) && is_vehicle_driveable(iParam0, 0)) && is_vehicle_driveable(Global_68319.f_484[14], 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(Global_68319.f_484[14]) == joaat("luxor2") && get_vehicle_livery(iParam0) == get_vehicle_livery(Global_68319.f_484[14]))
				{
					func_445(14);
					return true;
				}
			}
			break;
		
		case joaat("swift2"):
			if ((ENTITY::DOES_ENTITY_EXIST(Global_68319.f_484[20]) && is_vehicle_driveable(iParam0, 0)) && is_vehicle_driveable(Global_68319.f_484[20], 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(Global_68319.f_484[20]) == joaat("swift2") && get_vehicle_livery(iParam0) == get_vehicle_livery(Global_68319.f_484[20]))
				{
					func_445(20);
					return true;
				}
			}
			break;
	}
	return false;
}

bool func_452(Vector3 vParam0, Vector3 vParam1, float fParam2, int iParam3)
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

bool func_453(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((ENTITY::DOES_ENTITY_EXIST(iParam1) && !is_entity_dead(iParam1, 0)) && is_vehicle_driveable(iParam1, 0))
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

void func_454(int iParam0, auto uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_88942[iVar0]))
		{
			Global_88942[iVar0] = iParam0;
			Global_88952[iVar0] = uParam1;
			Global_88962[iVar0] = ENTITY::GET_ENTITY_MODEL(iParam0);
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

void func_455(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_88942[iVar0]))
		{
			if (iParam0 == 145 || Global_88952[iVar0] == iParam0)
			{
				if (iParam1 == 0 || ENTITY::GET_ENTITY_MODEL(Global_88942[iVar0]) == func_277(iParam0, iParam1))
				{
					if (!is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), Global_88942[iVar0], 0))
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

void func_456(int iParam0, auto uParam1, int iParam2, int iParam3)
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
			if (GAMEPLAY::IS_BIT_SET(*uParam1.f_77, func_280(iVar0 + 1)))
			{
			}
			else
			{
				GAMEPLAY::SET_BIT(uParam1.f_77, func_280(iVar0 + 1));
			}
		}
		else if (*uParam1.f_66 == joaat("sandking") || *uParam1.f_66 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (GAMEPLAY::IS_BIT_SET(*uParam1.f_77, func_280(iVar1 + 1)))
			{
			}
			else
			{
				GAMEPLAY::SET_BIT(uParam1.f_77, func_280(iVar1 + 1));
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
		if (((GAMEPLAY::IS_BIT_SET(*uParam1.f_77, 15) || func_463(iParam0)) || (((*uParam1.f_62 == 0 && *uParam1.f_63 == 0) && *uParam1.f_64 == 0) && *uParam1.f_9[20] > 0)) && func_462())
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
						func_461(iParam0, *uParam1.f_69);
					}
				}
				else
				{
					func_461(iParam0, *uParam1.f_69);
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
			func_457(&iParam0, uParam1.f_9, uParam1.f_59);
		}
		if (!is_this_model_a_heli(*uParam1.f_66) && !is_this_model_a_boat(*uParam1.f_66))
		{
			iVar2 = 0;
			while (iVar2 <= 11)
			{
				if (GAMEPLAY::IS_BIT_SET(*uParam1.f_77, func_280(iVar2 + 1)))
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

bool func_457(int iParam0, auto uParam1, auto uParam2)
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
	if (func_460(ENTITY::GET_ENTITY_MODEL(*iParam0), 1) && get_vehicle_mod(*iParam0, 24) != func_459(*iParam0, *uParam1[38] - 1))
	{
		set_vehicle_mod(*iParam0, 24, func_459(*iParam0, *uParam1[38] - 1), false);
	}
	if (func_458(*iParam0))
	{
		set_vehicle_strong(*iParam0, true);
		set_vehicle_has_strong_axles(*iParam0, true);
	}
	return true;
}

bool func_458(int iParam0)
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

int func_459(int iParam0, int iParam1)
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

bool func_460(int iParam0, int iParam1)
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

void func_461(int iParam0, int iParam1)
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

int func_462()
{
	return is_dlc_present(-1691188696);
}

int func_463(int iParam0)
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

void func_464(Vector3 vParam0, float fParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_449(&(Global_68319.f_555[0 /*21*/]), iVar0))
		{
			if (get_distance_between_coords(vParam0, Global_68319.f_555[0 /*21*/], iParam4) <= fParam3)
			{
				func_445(iVar0);
			}
		}
		iVar0++;
	}
}

bool func_465(auto uParam0)
{
	if (func_466(uParam0))
	{
		if (STREAMING::HAS_MODEL_LOADED(*uParam0.f_12.f_66))
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

bool func_466(auto uParam0)
{
	if (*uParam0.f_12.f_66 == 0)
	{
		return false;
	}
	if (!func_431(*uParam0.f_12.f_66, 0))
	{
		return false;
	}
	if (*uParam0.f_12.f_66 == joaat("stunt") && func_452(*uParam0, 1694.62f, 3276.27f, 41.31f, 1056964608, 0))
	{
		return false;
	}
	return true;
}

int func_467()
{
	return func_465(&(Global_95496.f_2311));
}

void func_468()
{
	func_469(&(Global_95496.f_2311));
}

void func_469(auto uParam0)
{
	if (func_466(uParam0))
	{
		STREAMING::REQUEST_MODEL(*uParam0.f_12.f_66);
	}
}

void func_470()
{
	if (_0x07C313F94746702C(iLocal_1129))
	{
		_0x1EE7D8DF4425F053(iLocal_1129);
	}
}

int func_471()
{
	if (!Global_91278 == 10 && !Global_91278 == 9)
	{
		return 0;
	}
	return Global_91278.f_2;
}

struct<39> func_472(int iParam0)
{
	struct<39> Var0;
	
	if (iParam0 == 0)
	{
		Var0 = 1;
		Var0.f_1 = {0f, 0f, 0f};
		Var0.f_4 = {0f, 0f, 0f};
		Var0.f_7 = {func_473(0)};
		Var0.f_22 = "Assassin_Valet";
		Var0.f_23 = 7000f;
		Var0.f_24 = 2000f;
		Var0.f_32 = -1;
		Var0.f_25 = {-1700.015f, -1066.335f, 12.144f};
		Var0.f_28 = {-1691.564f, -1066.514f, 12.076f};
		Var0.f_31 = 35.4714f;
		Var0.f_10 = {-1700.467f, -1066.672f, 13.8795f};
		Var0.f_13 = {-4.8332f, 0f, -177.1283f};
		Var0.f_16 = {-1700.467f, -1066.672f, 13.8795f};
		Var0.f_19 = {-4.8332f, 0f, -177.1283f};
		Var0.f_33 = {-1700.098f, -1067.939f, 12.1547f};
		Var0.f_36 = 162.4559f;
		Var0.f_37 = 1;
	}
	else if (iParam0 == 1)
	{
		Var0 = 0;
		Var0.f_1 = {-699.3992f, -917.5043f, 18.2143f};
		Var0.f_4 = {0f, 0f, 0f};
		Var0.f_7 = {func_473(1)};
		Var0.f_22 = "Assassin_Multi";
		Var0.f_23 = 5000f;
		Var0.f_24 = 2000f;
		Var0.f_32 = -1;
		Var0.f_25 = {-700.1855f, -917.9558f, 18.2143f};
		Var0.f_28 = {-699.9455f, -921.7786f, 18.0144f};
		Var0.f_31 = 78.0874f;
		Var0.f_10 = {-697.8064f, -921.4629f, 20.5104f};
		Var0.f_13 = {-13.5249f, 0f, 30.6033f};
		Var0.f_16 = {-702.4851f, -921.2747f, 21.1235f};
		Var0.f_19 = {-22.5196f, 0f, -43.0435f};
		Var0.f_33 = {0f, 0f, 0f};
		Var0.f_36 = 0f;
		Var0.f_37 = 0;
	}
	else if (iParam0 == 2)
	{
		Var0 = 0;
		Var0.f_1 = {215.1206f, -853.3143f, 29.3684f};
		Var0.f_4 = {0f, 0f, 87.1787f};
		Var0.f_7 = {func_473(2)};
		Var0.f_22 = "Assassin_Hooker";
		Var0.f_23 = 3000f;
		Var0.f_24 = 2000f;
		Var0.f_32 = -1;
		Var0.f_25 = {213.7994f, -853.9389f, 29.3929f};
		Var0.f_28 = {205.2641f, -847.2667f, 29.4903f};
		Var0.f_31 = 140.1039f;
		Var0.f_10 = {216.7391f, -856.0031f, 32.7127f};
		Var0.f_13 = {-25.1365f, 0f, 41.3912f};
		Var0.f_16 = {210.4668f, -851.3092f, 32.1099f};
		Var0.f_19 = {-16.3326f, 0f, -127.0114f};
		Var0.f_33 = {213.8733f, -853.8161f, 29.3922f};
		Var0.f_36 = 344.0112f;
		Var0.f_37 = 0;
	}
	else if (iParam0 == 3)
	{
		Var0 = 0;
		Var0.f_1 = {-22.5499f, -107.3546f, 56.0161f};
		Var0.f_4 = {0f, 0f, 269.7924f};
		Var0.f_7 = {func_473(3)};
		Var0.f_22 = "Assassin_Bus";
		Var0.f_23 = 5000f;
		Var0.f_24 = 2000f;
		Var0.f_32 = -1;
		Var0.f_25 = {-22.3125f, -108.9183f, 56.0068f};
		Var0.f_28 = {-17.2677f, -118.5915f, 55.8734f};
		Var0.f_31 = 1.4374f;
		Var0.f_10 = {-26.1094f, -108.0298f, 59.052f};
		Var0.f_13 = {-21.2059f, 0f, -109.0176f};
		Var0.f_16 = {-20.1189f, -111.9639f, 59.4377f};
		Var0.f_19 = {-27.0037f, 0f, 29.464f};
		Var0.f_33 = {0f, 0f, 0f};
		Var0.f_36 = 0f;
		Var0.f_37 = 0;
	}
	else if (iParam0 == 4)
	{
		Var0 = 0;
		Var0.f_1 = {806.1469f, -1070.21f, 27.3361f};
		Var0.f_4 = {0f, 0f, 90f};
		Var0.f_7 = {func_473(4)};
		Var0.f_22 = "Assassin_Construction";
		Var0.f_23 = 8000f;
		Var0.f_24 = 2000f;
		Var0.f_32 = 1;
		Var0.f_25 = {804.9559f, -1070.46f, 27.3361f};
		Var0.f_28 = {799.8408f, -1079.142f, 27.321f};
		Var0.f_31 = 69.6524f;
		Var0.f_10 = {801.8048f, -1068.068f, 30.3496f};
		Var0.f_13 = {-20.8953f, 0f, -132.9451f};
		Var0.f_16 = {805.8168f, -1074.496f, 28.9803f};
		Var0.f_19 = {-1.5585f, 0f, 6.9143f};
		Var0.f_33 = {804.8776f, -1070.523f, 27.3416f};
		Var0.f_36 = 287.8741f;
		Var0.f_37 = 0;
	}
	return Var0;
}

Vector3 func_473(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1704.427f, -1077.316f, 12.1111f;
		
		case 1:
			return -700.429f, -916.7467f, 18.2143f;
		
		case 2:
			return 214.1641f, -852.8006f, 29.3929f;
		
		case 3:
			return -21.9871f, -107.4823f, 55.997f;
		
		case 4:
			return 806.1469f, -1070.21f, 27.3361f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_474()
{
	int iVar0;
	
	iVar0 = func_111(Global_101154.f_18653.f_1, 4096);
	Global_101154.f_18653.f_1 = 0;
	if (iVar0)
	{
		func_485(&(Global_101154.f_18653.f_1), 4096);
	}
}

void func_475()
{
}

int func_476()
{
	return func_466(&(Global_95496.f_2311));
}

bool func_477()
{
	if (Global_91278 == 10 || Global_91278 == 9)
	{
		return true;
	}
	return false;
}

void func_478()
{
	if (func_52(&iLocal_1335))
	{
		Global_101154.f_18653.f_5 = func_46(&iLocal_1335);
	}
	if (!iLocal_1175)
	{
		trigger_music_event("ASS1_LOST");
	}
	release_named_script_audio_bank("SCRIPT\ASSASSINATION_MULTI");
	func_246();
	func_229();
	func_234();
	func_235(1);
	func_381();
	func_482();
	func_407(0);
	func_3();
	if (ENTITY::DOES_ENTITY_EXIST(Global_88108.f_28[0]))
	{
		set_entity_as_mission_entity(Global_88108.f_28[0], true, 1);
		set_object_as_no_longer_needed(&(Global_88108.f_28[0]));
	}
	remove_scenario_blocking_area(iLocal_1127, 0);
	remove_scenario_blocking_area(iLocal_1128, 0);
	func_470();
	func_79(&uLocal_1528, 0, 0);
	if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
	{
		func_480(PLAYER::PLAYER_PED_ID(), 1);
		set_ped_using_action_mode(PLAYER::PLAYER_PED_ID(), false, -1, 0);
	}
	set_wanted_level_multiplier(1f);
	clear_ped_non_creation_area();
	set_ped_model_is_suppressed(iLocal_1326, false);
	set_ped_model_is_suppressed(iLocal_1327, false);
	func_479();
	terminate_this_thread();
}

void func_479()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (func_255(vLocal_1247[iVar0 /*3*/], 1) < 5f)
			{
				set_entity_coords(PLAYER::PLAYER_PED_ID(), -1223.185f, -185.4723f, 38.1753f, 1, false, 0, 1);
				set_entity_heading(PLAYER::PLAYER_PED_ID(), 119.5633f);
			}
		}
		iVar0++;
	}
}

void func_480(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (get_current_ped_weapon(iParam0, &iVar0, 0))
		{
			if (iVar0 != 0 && iVar0 != joaat("weapon_unarmed"))
			{
				if (!func_481(iParam1, iVar0))
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

bool func_481(auto uParam0, int iParam1)
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

void func_482()
{
	remove_vehicle_recording(102, "ASSOJva");
	remove_vehicle_recording(107, "ASSOJva");
	remove_waypoint_recording("OJASva_101");
	remove_waypoint_recording("OJASva_101a");
	remove_waypoint_recording("OJASva_104");
}

void func_483()
{
	int iVar0;
	
	if (SCRIPT::HAS_SCRIPT_LOADED("buddyDeathResponse"))
	{
		SYSTEM::START_NEW_SCRIPT("buddyDeathResponse", 1424);
	}
	if (Global_101154.f_7775 || func_40(0))
	{
		if (!func_484())
		{
			iVar0 = func_39();
			if (iVar0 != -1)
			{
				if (!func_33(iVar0))
				{
					return;
				}
				GAMEPLAY::SET_BIT(&(Global_82363[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_38();
		}
	}
}

bool func_484()
{
	if (((Global_91278 == 13 || Global_91278 == 10) || Global_91278 == 11) || Global_91278 == 12)
	{
		return false;
	}
	return true;
}

void func_485(auto uParam0, int iParam1)
{
	func_486(uParam0, iParam1);
}

void func_486(auto uParam0, auto uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

