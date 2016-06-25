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
	float fLocal_30 = 0;
	float fLocal_31 = 0;
	float fLocal_32 = 0;
	auto uLocal_33 = 0;
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
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	var[] uLocal_101 = new var[130];
	var[] uLocal_232 = new var[130];
	auto uLocal_363 = 0;
	int iLocal_364 = 0;
	int iLocal_365 = 0;
	var[] uLocal_366 = new var[4];
	var[] uLocal_371 = new var[4];
	int[] iLocal_376 = new int[4];
	int iLocal_381 = 0;
	int iLocal_382 = 0;
	int iLocal_383 = 0;
	auto uLocal_384 = 0;
	auto uLocal_385 = 0;
	auto uLocal_386 = 0;
	auto uLocal_387 = 0;
	auto uLocal_388 = 0;
	auto uLocal_389 = 0;
	Vector3[] vLocal_390 = new Vector3[130];
	int iLocal_781 = 0;
	int iLocal_782 = 0;
	int iLocal_783 = 0;
	auto uLocal_784 = 0;
	auto uLocal_785 = 0;
	auto uLocal_786 = 0;
	auto uLocal_787 = 0;
	auto uLocal_788 = 0;
	auto uLocal_789 = 0;
	auto uLocal_790 = 0;
	int[] iLocal_791 = new int[10];
	int iLocal_802 = 0;
	int[] iLocal_803 = new int[10];
	int iLocal_814 = 0;
	int iLocal_815 = 0;
	struct<2> Local_816 = -1;
	struct<730> Local_818 = 0;
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
	struct<528> Local_1568 = 0;
	auto uLocal_2096 = -1;
	auto uLocal_2097 = 0;
	auto uLocal_2098 = 0;
	auto uLocal_2099 = 0;
	auto uLocal_2100 = 0;
	auto uLocal_2101 = 0;
	auto uLocal_2102 = 0;
	auto uLocal_2103 = 0;
	auto uLocal_2104 = 0;
	auto uLocal_2105 = 0;
	auto uLocal_2106 = 0;
	auto uLocal_2107 = 0;
	auto uLocal_2108 = 0;
	auto uLocal_2109 = 0;
	auto uLocal_2110 = 0;
	auto uLocal_2111 = 0;
	auto uLocal_2112 = 0;
	auto uLocal_2113 = 0;
	auto uLocal_2114 = 0;
	auto uLocal_2115 = 0;
	auto uLocal_2116 = 0;
	auto uLocal_2117 = 0;
	auto uLocal_2118 = -1082130432;
	auto uLocal_2119 = 3;
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
	auto uLocal_2142 = -1;
	auto uLocal_2143 = -1;
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
	auto uLocal_2165 = -1082130432;
	auto uLocal_2166 = 3;
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
	auto uLocal_2189 = -1;
	auto uLocal_2190 = -1;
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
	auto uLocal_2212 = -1082130432;
	auto uLocal_2213 = 3;
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
	auto uLocal_2236 = -1;
	auto uLocal_2237 = -1;
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
	auto uLocal_2259 = -1082130432;
	auto uLocal_2260 = 3;
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
	auto uLocal_2277 = 0;
	auto uLocal_2278 = 0;
	auto uLocal_2279 = 0;
	auto uLocal_2280 = 0;
	auto uLocal_2281 = 0;
	auto uLocal_2282 = 0;
	auto uLocal_2283 = -1;
	auto uLocal_2284 = -1;
	auto uLocal_2285 = 0;
	auto uLocal_2286 = 0;
	auto uLocal_2287 = 0;
	auto uLocal_2288 = 0;
	auto uLocal_2289 = 0;
	auto uLocal_2290 = 0;
	auto uLocal_2291 = 0;
	auto uLocal_2292 = 0;
	auto uLocal_2293 = 0;
	auto uLocal_2294 = 0;
	auto uLocal_2295 = 0;
	auto uLocal_2296 = 0;
	auto uLocal_2297 = 0;
	auto uLocal_2298 = 0;
	auto uLocal_2299 = 0;
	auto uLocal_2300 = 0;
	auto uLocal_2301 = 0;
	auto uLocal_2302 = 0;
	auto uLocal_2303 = 0;
	auto uLocal_2304 = 0;
	auto uLocal_2305 = 0;
	auto uLocal_2306 = -1082130432;
	auto uLocal_2307 = 3;
	auto uLocal_2308 = 0;
	auto uLocal_2309 = 0;
	auto uLocal_2310 = 0;
	auto uLocal_2311 = 0;
	auto uLocal_2312 = 0;
	auto uLocal_2313 = 0;
	auto uLocal_2314 = 0;
	auto uLocal_2315 = 0;
	auto uLocal_2316 = 0;
	auto uLocal_2317 = 0;
	auto uLocal_2318 = 0;
	auto uLocal_2319 = 0;
	auto uLocal_2320 = 0;
	auto uLocal_2321 = 0;
	auto uLocal_2322 = 0;
	auto uLocal_2323 = 0;
	auto uLocal_2324 = 0;
	auto uLocal_2325 = 0;
	auto uLocal_2326 = 0;
	auto uLocal_2327 = 0;
	auto uLocal_2328 = 0;
	auto uLocal_2329 = 0;
	auto uLocal_2330 = -1;
	auto uLocal_2331 = -1;
	auto uLocal_2332 = 0;
	auto uLocal_2333 = 0;
	auto uLocal_2334 = 0;
	auto uLocal_2335 = 0;
	auto uLocal_2336 = 0;
	auto uLocal_2337 = 0;
	auto uLocal_2338 = 0;
	auto uLocal_2339 = 0;
	auto uLocal_2340 = 0;
	auto uLocal_2341 = 0;
	auto uLocal_2342 = 0;
	auto uLocal_2343 = 0;
	auto uLocal_2344 = 0;
	auto uLocal_2345 = 0;
	auto uLocal_2346 = 0;
	auto uLocal_2347 = 0;
	auto uLocal_2348 = 0;
	auto uLocal_2349 = 0;
	auto uLocal_2350 = 0;
	auto uLocal_2351 = 0;
	auto uLocal_2352 = 0;
	auto uLocal_2353 = -1082130432;
	auto uLocal_2354 = 3;
	auto uLocal_2355 = 0;
	auto uLocal_2356 = 0;
	auto uLocal_2357 = 0;
	auto uLocal_2358 = 0;
	auto uLocal_2359 = 0;
	auto uLocal_2360 = 0;
	auto uLocal_2361 = 0;
	auto uLocal_2362 = 0;
	auto uLocal_2363 = 0;
	auto uLocal_2364 = 0;
	auto uLocal_2365 = 0;
	auto uLocal_2366 = 0;
	auto uLocal_2367 = 0;
	auto uLocal_2368 = 0;
	auto uLocal_2369 = 0;
	auto uLocal_2370 = 0;
	auto uLocal_2371 = 0;
	auto uLocal_2372 = 0;
	auto uLocal_2373 = 0;
	auto uLocal_2374 = 0;
	auto uLocal_2375 = 0;
	auto uLocal_2376 = 0;
	auto uLocal_2377 = -1;
	auto uLocal_2378 = -1;
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
	auto uLocal_2400 = -1082130432;
	auto uLocal_2401 = 3;
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
	auto uLocal_2424 = -1;
	auto uLocal_2425 = -1;
	auto uLocal_2426 = 0;
	auto uLocal_2427 = 0;
	auto uLocal_2428 = 0;
	auto uLocal_2429 = 0;
	auto uLocal_2430 = 0;
	auto uLocal_2431 = 0;
	auto uLocal_2432 = 0;
	auto uLocal_2433 = 0;
	auto uLocal_2434 = 0;
	auto uLocal_2435 = 0;
	auto uLocal_2436 = 0;
	auto uLocal_2437 = 0;
	auto uLocal_2438 = 0;
	auto uLocal_2439 = 0;
	auto uLocal_2440 = 0;
	auto uLocal_2441 = 0;
	auto uLocal_2442 = 0;
	auto uLocal_2443 = 0;
	auto uLocal_2444 = 0;
	auto uLocal_2445 = 0;
	auto uLocal_2446 = 0;
	auto uLocal_2447 = -1082130432;
	auto uLocal_2448 = 3;
	auto uLocal_2449 = 0;
	auto uLocal_2450 = 0;
	auto uLocal_2451 = 0;
	auto uLocal_2452 = 0;
	auto uLocal_2453 = 0;
	auto uLocal_2454 = 0;
	auto uLocal_2455 = 0;
	auto uLocal_2456 = 0;
	auto uLocal_2457 = 0;
	auto uLocal_2458 = 0;
	auto uLocal_2459 = 0;
	auto uLocal_2460 = 0;
	auto uLocal_2461 = 0;
	auto uLocal_2462 = 0;
	auto uLocal_2463 = 0;
	auto uLocal_2464 = 0;
	auto uLocal_2465 = 0;
	auto uLocal_2466 = 0;
	auto uLocal_2467 = 0;
	auto uLocal_2468 = 0;
	auto uLocal_2469 = 0;
	auto uLocal_2470 = 0;
	auto uLocal_2471 = -1;
	auto uLocal_2472 = -1;
	auto uLocal_2473 = 0;
	auto uLocal_2474 = 0;
	auto uLocal_2475 = 0;
	auto uLocal_2476 = 0;
	auto uLocal_2477 = 0;
	auto uLocal_2478 = 0;
	auto uLocal_2479 = 0;
	auto uLocal_2480 = 0;
	auto uLocal_2481 = 0;
	auto uLocal_2482 = 0;
	auto uLocal_2483 = 0;
	auto uLocal_2484 = 0;
	auto uLocal_2485 = 0;
	auto uLocal_2486 = 0;
	auto uLocal_2487 = 0;
	auto uLocal_2488 = 0;
	auto uLocal_2489 = 0;
	auto uLocal_2490 = 0;
	auto uLocal_2491 = 0;
	auto uLocal_2492 = 0;
	auto uLocal_2493 = 0;
	auto uLocal_2494 = -1082130432;
	auto uLocal_2495 = 3;
	auto uLocal_2496 = 0;
	auto uLocal_2497 = 0;
	auto uLocal_2498 = 0;
	auto uLocal_2499 = 0;
	auto uLocal_2500 = 0;
	auto uLocal_2501 = 0;
	auto uLocal_2502 = 0;
	auto uLocal_2503 = 0;
	auto uLocal_2504 = 0;
	auto uLocal_2505 = 0;
	auto uLocal_2506 = 0;
	auto uLocal_2507 = 0;
	auto uLocal_2508 = 0;
	auto uLocal_2509 = 0;
	auto uLocal_2510 = 0;
	auto uLocal_2511 = 0;
	auto uLocal_2512 = 0;
	auto uLocal_2513 = 0;
	auto uLocal_2514 = 0;
	auto uLocal_2515 = 0;
	auto uLocal_2516 = 0;
	auto uLocal_2517 = 0;
	auto uLocal_2518 = -1;
	auto uLocal_2519 = -1;
	auto uLocal_2520 = 0;
	auto uLocal_2521 = 0;
	auto uLocal_2522 = 0;
	auto uLocal_2523 = 0;
	auto uLocal_2524 = 0;
	auto uLocal_2525 = 0;
	auto uLocal_2526 = 0;
	auto uLocal_2527 = 0;
	auto uLocal_2528 = 0;
	auto uLocal_2529 = 0;
	auto uLocal_2530 = 0;
	auto uLocal_2531 = 0;
	auto uLocal_2532 = 0;
	auto uLocal_2533 = 0;
	auto uLocal_2534 = 0;
	auto uLocal_2535 = 0;
	auto uLocal_2536 = 0;
	auto uLocal_2537 = 0;
	auto uLocal_2538 = 0;
	auto uLocal_2539 = 0;
	auto uLocal_2540 = 0;
	auto uLocal_2541 = -1082130432;
	auto uLocal_2542 = 3;
	auto uLocal_2543 = 0;
	auto uLocal_2544 = 0;
	auto uLocal_2545 = 0;
	auto uLocal_2546 = 0;
	auto uLocal_2547 = 0;
	auto uLocal_2548 = 0;
	auto uLocal_2549 = 0;
	auto uLocal_2550 = 0;
	auto uLocal_2551 = 0;
	auto uLocal_2552 = 0;
	auto uLocal_2553 = 0;
	auto uLocal_2554 = 0;
	auto uLocal_2555 = 0;
	auto uLocal_2556 = 0;
	auto uLocal_2557 = 0;
	auto uLocal_2558 = 0;
	auto uLocal_2559 = 0;
	auto uLocal_2560 = 0;
	auto uLocal_2561 = 0;
	auto uLocal_2562 = 0;
	auto uLocal_2563 = 0;
	auto uLocal_2564 = 0;
	auto uLocal_2565 = -1;
	auto uLocal_2566 = -1;
	auto uLocal_2567 = 0;
	auto uLocal_2568 = 0;
	auto uLocal_2569 = 0;
	auto uLocal_2570 = 0;
	auto uLocal_2571 = 0;
	auto uLocal_2572 = 0;
	auto uLocal_2573 = 0;
	auto uLocal_2574 = 0;
	auto uLocal_2575 = 0;
	auto uLocal_2576 = 0;
	auto uLocal_2577 = 0;
	auto uLocal_2578 = 0;
	auto uLocal_2579 = 0;
	auto uLocal_2580 = 0;
	auto uLocal_2581 = 0;
	auto uLocal_2582 = 0;
	auto uLocal_2583 = 0;
	auto uLocal_2584 = 0;
	auto uLocal_2585 = 0;
	auto uLocal_2586 = 0;
	auto uLocal_2587 = 0;
	auto uLocal_2588 = -1082130432;
	auto uLocal_2589 = 3;
	auto uLocal_2590 = 0;
	auto uLocal_2591 = 0;
	auto uLocal_2592 = 0;
	auto uLocal_2593 = 0;
	auto uLocal_2594 = 0;
	auto uLocal_2595 = 0;
	auto uLocal_2596 = 0;
	auto uLocal_2597 = 0;
	auto uLocal_2598 = 0;
	auto uLocal_2599 = 0;
	auto uLocal_2600 = 0;
	auto uLocal_2601 = 0;
	auto uLocal_2602 = 0;
	auto uLocal_2603 = 0;
	auto uLocal_2604 = 0;
	auto uLocal_2605 = 0;
	auto uLocal_2606 = 0;
	auto uLocal_2607 = 0;
	auto uLocal_2608 = 0;
	auto uLocal_2609 = 0;
	auto uLocal_2610 = 0;
	auto uLocal_2611 = 0;
	auto uLocal_2612 = -1;
	auto uLocal_2613 = -1;
	auto uLocal_2614 = 0;
	auto uLocal_2615 = 0;
	auto uLocal_2616 = 0;
	auto uLocal_2617 = 0;
	auto uLocal_2618 = 0;
	auto uLocal_2619 = 0;
	auto uLocal_2620 = 0;
	auto uLocal_2621 = 0;
	auto uLocal_2622 = 0;
	auto uLocal_2623 = 0;
	auto uLocal_2624 = 0;
	auto uLocal_2625 = 0;
	auto uLocal_2626 = 0;
	auto uLocal_2627 = 0;
	auto uLocal_2628 = 0;
	auto uLocal_2629 = 0;
	auto uLocal_2630 = 0;
	auto uLocal_2631 = 0;
	auto uLocal_2632 = 0;
	auto uLocal_2633 = 0;
	auto uLocal_2634 = 0;
	auto uLocal_2635 = -1082130432;
	auto uLocal_2636 = 3;
	auto uLocal_2637 = 0;
	auto uLocal_2638 = 0;
	auto uLocal_2639 = 0;
	auto uLocal_2640 = 0;
	auto uLocal_2641 = 0;
	auto uLocal_2642 = 0;
	auto uLocal_2643 = 0;
	auto uLocal_2644 = 0;
	auto uLocal_2645 = 0;
	auto uLocal_2646 = 0;
	auto uLocal_2647 = 0;
	auto uLocal_2648 = 0;
	auto uLocal_2649 = 0;
	auto uLocal_2650 = 0;
	auto uLocal_2651 = 0;
	auto uLocal_2652 = 0;
	auto uLocal_2653 = 0;
	auto uLocal_2654 = 0;
	auto uLocal_2655 = 0;
	auto uLocal_2656 = 0;
	auto uLocal_2657 = 0;
	auto uLocal_2658 = 0;
	auto uLocal_2659 = -1;
	auto uLocal_2660 = -1;
	auto uLocal_2661 = 0;
	auto uLocal_2662 = 0;
	auto uLocal_2663 = 0;
	auto uLocal_2664 = 0;
	auto uLocal_2665 = 0;
	auto uLocal_2666 = 0;
	auto uLocal_2667 = 0;
	auto uLocal_2668 = 0;
	auto uLocal_2669 = 0;
	auto uLocal_2670 = 0;
	auto uLocal_2671 = 0;
	auto uLocal_2672 = 0;
	auto uLocal_2673 = 0;
	auto uLocal_2674 = 0;
	auto uLocal_2675 = 0;
	auto uLocal_2676 = 0;
	auto uLocal_2677 = 0;
	auto uLocal_2678 = 0;
	auto uLocal_2679 = 0;
	auto uLocal_2680 = 0;
	auto uLocal_2681 = 0;
	auto uLocal_2682 = -1082130432;
	auto uLocal_2683 = 3;
	auto uLocal_2684 = 0;
	auto uLocal_2685 = 0;
	auto uLocal_2686 = 0;
	auto uLocal_2687 = 0;
	auto uLocal_2688 = 0;
	auto uLocal_2689 = 0;
	auto uLocal_2690 = 0;
	auto uLocal_2691 = 0;
	auto uLocal_2692 = 0;
	auto uLocal_2693 = 0;
	auto uLocal_2694 = 0;
	auto uLocal_2695 = 0;
	auto uLocal_2696 = 0;
	auto uLocal_2697 = 0;
	auto uLocal_2698 = 0;
	auto uLocal_2699 = 0;
	auto uLocal_2700 = 0;
	auto uLocal_2701 = 0;
	auto uLocal_2702 = 0;
	auto uLocal_2703 = 0;
	auto uLocal_2704 = 0;
	auto uLocal_2705 = 0;
	auto uLocal_2706 = -1;
	auto uLocal_2707 = -1;
	auto uLocal_2708 = 0;
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
	auto uLocal_2729 = -1082130432;
	auto uLocal_2730 = 3;
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
	auto uLocal_2753 = -1;
	auto uLocal_2754 = -1;
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
	auto uLocal_2776 = -1082130432;
	auto uLocal_2777 = 3;
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
	auto uLocal_2800 = -1;
	auto uLocal_2801 = -1;
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
	auto uLocal_2823 = -1082130432;
	auto uLocal_2824 = 3;
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
	auto uLocal_2847 = -1;
	auto uLocal_2848 = -1;
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
	auto uLocal_2870 = -1082130432;
	auto uLocal_2871 = 3;
	auto uLocal_2872 = 0;
	auto uLocal_2873 = 0;
	auto uLocal_2874 = 0;
	auto uLocal_2875 = 0;
	auto uLocal_2876 = 0;
	auto uLocal_2877 = 0;
	auto uLocal_2878 = 0;
	auto uLocal_2879 = 0;
	auto uLocal_2880 = 0;
	auto uLocal_2881 = 0;
	auto uLocal_2882 = 0;
	auto uLocal_2883 = 0;
	auto uLocal_2884 = 0;
	auto uLocal_2885 = 0;
	auto uLocal_2886 = 0;
	auto uLocal_2887 = 0;
	auto uLocal_2888 = 0;
	auto uLocal_2889 = 0;
	auto uLocal_2890 = 0;
	auto uLocal_2891 = 0;
	auto uLocal_2892 = 0;
	auto uLocal_2893 = 0;
	auto uLocal_2894 = -1;
	auto uLocal_2895 = -1;
	auto uLocal_2896 = 0;
	auto uLocal_2897 = 0;
	auto uLocal_2898 = 0;
	auto uLocal_2899 = 0;
	auto uLocal_2900 = 0;
	auto uLocal_2901 = 0;
	auto uLocal_2902 = 0;
	auto uLocal_2903 = 0;
	auto uLocal_2904 = 0;
	auto uLocal_2905 = 0;
	auto uLocal_2906 = 0;
	auto uLocal_2907 = 0;
	auto uLocal_2908 = 0;
	auto uLocal_2909 = 0;
	auto uLocal_2910 = 0;
	auto uLocal_2911 = 0;
	auto uLocal_2912 = 0;
	auto uLocal_2913 = 0;
	auto uLocal_2914 = 0;
	auto uLocal_2915 = 0;
	auto uLocal_2916 = 0;
	auto uLocal_2917 = -1082130432;
	auto uLocal_2918 = 3;
	auto uLocal_2919 = 0;
	auto uLocal_2920 = 0;
	auto uLocal_2921 = 0;
	auto uLocal_2922 = 0;
	auto uLocal_2923 = 0;
	auto uLocal_2924 = 0;
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
	auto uLocal_2941 = -1;
	auto uLocal_2942 = -1;
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
	auto uLocal_2964 = -1082130432;
	auto uLocal_2965 = 3;
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
	auto uLocal_2988 = -1;
	auto uLocal_2989 = -1;
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
	auto uLocal_3011 = -1082130432;
	auto uLocal_3012 = 3;
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
	auto uLocal_3035 = -1;
	auto uLocal_3036 = -1;
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
	auto uLocal_3058 = -1082130432;
	auto uLocal_3059 = 3;
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
	auto uLocal_3082 = -1;
	auto uLocal_3083 = -1;
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
	auto uLocal_3105 = -1082130432;
	auto uLocal_3106 = 3;
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
	auto uLocal_3129 = -1;
	auto uLocal_3130 = -1;
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
	auto uLocal_3152 = -1082130432;
	auto uLocal_3153 = 3;
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
	auto uLocal_3176 = -1;
	auto uLocal_3177 = -1;
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
	auto uLocal_3199 = -1082130432;
	auto uLocal_3200 = 3;
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
	auto uLocal_3223 = -1;
	auto uLocal_3224 = -1;
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
	auto uLocal_3246 = -1082130432;
	auto uLocal_3247 = 3;
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
	auto uLocal_3270 = -1;
	auto uLocal_3271 = -1;
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
	auto uLocal_3293 = -1082130432;
	auto uLocal_3294 = 3;
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
	auto uLocal_3317 = -1;
	auto uLocal_3318 = -1;
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
	auto uLocal_3340 = -1082130432;
	auto uLocal_3341 = 3;
	auto uLocal_3342 = 0;
	auto uLocal_3343 = 0;
	auto uLocal_3344 = 0;
	auto uLocal_3345 = 0;
	auto uLocal_3346 = 0;
	auto uLocal_3347 = 0;
	auto uLocal_3348 = 0;
	auto uLocal_3349 = 0;
	auto uLocal_3350 = 0;
	auto uLocal_3351 = 0;
	auto uLocal_3352 = 0;
	auto uLocal_3353 = 0;
	auto uLocal_3354 = 0;
	auto uLocal_3355 = 0;
	auto uLocal_3356 = 0;
	auto uLocal_3357 = 0;
	auto uLocal_3358 = 0;
	auto uLocal_3359 = 0;
	auto uLocal_3360 = 0;
	auto uLocal_3361 = 0;
	auto uLocal_3362 = 0;
	auto uLocal_3363 = 0;
	auto uLocal_3364 = -1;
	auto uLocal_3365 = -1;
	auto uLocal_3366 = 0;
	auto uLocal_3367 = 0;
	auto uLocal_3368 = 0;
	auto uLocal_3369 = 0;
	auto uLocal_3370 = 0;
	auto uLocal_3371 = 0;
	auto uLocal_3372 = 0;
	auto uLocal_3373 = 0;
	auto uLocal_3374 = 0;
	auto uLocal_3375 = 0;
	auto uLocal_3376 = 0;
	auto uLocal_3377 = 0;
	auto uLocal_3378 = 0;
	auto uLocal_3379 = 0;
	auto uLocal_3380 = 0;
	auto uLocal_3381 = 0;
	auto uLocal_3382 = 0;
	auto uLocal_3383 = 0;
	auto uLocal_3384 = 0;
	auto uLocal_3385 = 0;
	auto uLocal_3386 = 0;
	auto uLocal_3387 = -1082130432;
	auto uLocal_3388 = 3;
	auto uLocal_3389 = 0;
	auto uLocal_3390 = 0;
	auto uLocal_3391 = 0;
	auto uLocal_3392 = 0;
	auto uLocal_3393 = 0;
	auto uLocal_3394 = 0;
	auto uLocal_3395 = 0;
	auto uLocal_3396 = 0;
	auto uLocal_3397 = 0;
	auto uLocal_3398 = 0;
	auto uLocal_3399 = 0;
	auto uLocal_3400 = 0;
	auto uLocal_3401 = 0;
	auto uLocal_3402 = 0;
	auto uLocal_3403 = 0;
	auto uLocal_3404 = 0;
	auto uLocal_3405 = 0;
	auto uLocal_3406 = 0;
	auto uLocal_3407 = 0;
	auto uLocal_3408 = 0;
	auto uLocal_3409 = 0;
	auto uLocal_3410 = 0;
	auto uLocal_3411 = -1;
	auto uLocal_3412 = -1;
	auto uLocal_3413 = 0;
	auto uLocal_3414 = 0;
	auto uLocal_3415 = 0;
	auto uLocal_3416 = 0;
	auto uLocal_3417 = 0;
	auto uLocal_3418 = 0;
	auto uLocal_3419 = 0;
	auto uLocal_3420 = 0;
	auto uLocal_3421 = 0;
	auto uLocal_3422 = 0;
	auto uLocal_3423 = 0;
	auto uLocal_3424 = 0;
	auto uLocal_3425 = 0;
	auto uLocal_3426 = 0;
	auto uLocal_3427 = 0;
	auto uLocal_3428 = 0;
	auto uLocal_3429 = 0;
	auto uLocal_3430 = 0;
	auto uLocal_3431 = 0;
	auto uLocal_3432 = 0;
	auto uLocal_3433 = 0;
	auto uLocal_3434 = -1082130432;
	auto uLocal_3435 = 3;
	auto uLocal_3436 = 0;
	auto uLocal_3437 = 0;
	auto uLocal_3438 = 0;
	auto uLocal_3439 = 0;
	auto uLocal_3440 = 0;
	auto uLocal_3441 = 0;
	auto uLocal_3442 = 0;
	auto uLocal_3443 = 0;
	auto uLocal_3444 = 0;
	auto uLocal_3445 = 0;
	auto uLocal_3446 = 0;
	auto uLocal_3447 = 0;
	auto uLocal_3448 = 0;
	auto uLocal_3449 = 0;
	auto uLocal_3450 = 0;
	auto uLocal_3451 = 0;
	auto uLocal_3452 = 0;
	auto uLocal_3453 = 0;
	auto uLocal_3454 = 0;
	auto uLocal_3455 = 0;
	auto uLocal_3456 = 0;
	auto uLocal_3457 = 0;
	auto uLocal_3458 = -1;
	auto uLocal_3459 = -1;
	auto uLocal_3460 = 0;
	auto uLocal_3461 = 0;
	auto uLocal_3462 = 0;
	auto uLocal_3463 = 0;
	auto uLocal_3464 = 0;
	auto uLocal_3465 = 0;
	auto uLocal_3466 = 0;
	auto uLocal_3467 = 0;
	auto uLocal_3468 = 0;
	auto uLocal_3469 = 0;
	auto uLocal_3470 = 0;
	auto uLocal_3471 = 0;
	auto uLocal_3472 = 0;
	auto uLocal_3473 = 0;
	auto uLocal_3474 = 0;
	auto uLocal_3475 = 0;
	auto uLocal_3476 = 0;
	auto uLocal_3477 = 0;
	auto uLocal_3478 = 0;
	auto uLocal_3479 = 0;
	auto uLocal_3480 = 0;
	auto uLocal_3481 = -1082130432;
	auto uLocal_3482 = 3;
	auto uLocal_3483 = 0;
	auto uLocal_3484 = 0;
	auto uLocal_3485 = 0;
	auto uLocal_3486 = 0;
	auto uLocal_3487 = 0;
	auto uLocal_3488 = 0;
	auto uLocal_3489 = 0;
	auto uLocal_3490 = 0;
	auto uLocal_3491 = 0;
	auto uLocal_3492 = 0;
	auto uLocal_3493 = 0;
	auto uLocal_3494 = 0;
	auto uLocal_3495 = 0;
	auto uLocal_3496 = 0;
	auto uLocal_3497 = 0;
	auto uLocal_3498 = 0;
	auto uLocal_3499 = 0;
	auto uLocal_3500 = 0;
	auto uLocal_3501 = 0;
	auto uLocal_3502 = 0;
	auto uLocal_3503 = 0;
	auto uLocal_3504 = 0;
	auto uLocal_3505 = -1;
	auto uLocal_3506 = -1;
	auto uLocal_3507 = 0;
	auto uLocal_3508 = 0;
	auto uLocal_3509 = 0;
	auto uLocal_3510 = 0;
	auto uLocal_3511 = 0;
	auto uLocal_3512 = 0;
	auto uLocal_3513 = 0;
	auto uLocal_3514 = 0;
	auto uLocal_3515 = 0;
	auto uLocal_3516 = 0;
	auto uLocal_3517 = 0;
	auto uLocal_3518 = 0;
	auto uLocal_3519 = 0;
	auto uLocal_3520 = 0;
	auto uLocal_3521 = 0;
	auto uLocal_3522 = 0;
	auto uLocal_3523 = 0;
	auto uLocal_3524 = 0;
	auto uLocal_3525 = 0;
	auto uLocal_3526 = 0;
	auto uLocal_3527 = 0;
	auto uLocal_3528 = -1082130432;
	auto uLocal_3529 = 3;
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
	auto uLocal_3552 = -1;
	auto uLocal_3553 = -1;
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
	auto uLocal_3575 = -1082130432;
	auto uLocal_3576 = 3;
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
	auto uLocal_3599 = -1;
	struct<12> Local_3600 = 0;
	struct<5>[] Local_3612 = new struct<5>[32];
	struct<20> Local_3773 = 0;
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
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
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
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_579(Local_3773))
		{
			func_550();
		}
	}
	while (true)
	{
		func_549();
		if (func_542() || func_540())
		{
			func_550();
		}
		func_513();
		switch (func_512(network_player_id_to_int()))
		{
			case 0:
				if (func_511() == 1)
				{
					if (func_510())
					{
						func_509(network_player_id_to_int(), 1);
					}
				}
				break;
			
			case 1:
				if (func_511() == 1)
				{
					func_105();
					func_95();
				}
				else if (func_511() == 3)
				{
					func_509(network_player_id_to_int(), 3);
				}
				break;
			
			case 3:
				func_550();
				break;
		}
		if (network_is_host_of_this_script())
		{
			switch (func_511())
			{
				case 0:
					if (func_78())
					{
						func_77(1);
					}
					break;
				
				case 1:
					if (Local_818.f_8 == 6)
					{
						func_77(2);
					}
					else
					{
						func_3();
					}
					break;
				
				case 2:
					if (func_1(&uLocal_388, 1000, 0))
					{
						func_77(3);
					}
					break;
				
				case 3:
					func_550();
					break;
				}
		}
	}
}

bool func_1(auto uParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		return true;
	}
	func_2(uParam0, iParam2, 0);
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

void func_2(auto uParam0, int iParam1, int iParam2)
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

void func_3()
{
	if (func_33(2, 0, 0, 0, 0))
	{
		if (!GAMEPLAY::IS_BIT_SET(Local_818.f_2, 2))
		{
			Local_818.f_1 = NETWORK::GET_NETWORK_TIME();
			GAMEPLAY::SET_BIT(&(Local_818.f_2), 2);
		}
	}
	switch (Local_818.f_8)
	{
		case 0:
			if (func_32())
			{
				if (func_24())
				{
					func_23(1);
				}
			}
			else
			{
				func_23(1);
			}
			break;
		
		case 1:
			if (func_1(&(Local_818.f_667), Global_262145.f_9065, 0) || GAMEPLAY::IS_BIT_SET(Local_818.f_2, 2))
			{
				func_23(2);
			}
			func_24();
			break;
		
		case 2:
			Local_818.f_9 = NETWORK::GET_NETWORK_TIME();
			func_23(3);
			break;
		
		case 3:
			if ((func_22() || func_1(&(Local_818.f_661), Global_262145.f_9064, 0)) || GAMEPLAY::IS_BIT_SET(Local_818.f_2, 2))
			{
				if (!GAMEPLAY::IS_BIT_SET(Local_818.f_2, true) && func_21())
				{
					func_20(&(Local_818.f_661), 0, 0);
					GAMEPLAY::SET_BIT(&(Local_818.f_2), true);
				}
				else
				{
					func_23(4);
					Local_818.f_1 = NETWORK::GET_NETWORK_TIME();
				}
			}
			func_8();
			iLocal_97++;
			if (iLocal_97 >= Local_818.f_709)
			{
				iLocal_97 = 0;
			}
			func_24();
			break;
		
		case 4:
			if (func_1(&(Local_818.f_663), 20000, 0) || func_5())
			{
				if (func_32())
				{
					func_20(&(Local_818.f_669), 0, 0);
					func_23(5);
				}
				else
				{
					func_23(6);
				}
			}
			func_24();
			break;
		
		case 5:
			if (func_4())
			{
				func_23(6);
			}
			break;
		
		case 6:
			break;
	}
}

bool func_4()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_818.f_729[iVar0 /*2*/].f_1) && !ENTITY::IS_ENTITY_DEAD(net_to_ent(Local_818.f_729[iVar0 /*2*/].f_1), 0))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_5()
{
	int iVar0;
	int iVar1;
	
	iVar0 = false;
	while (iVar0 < _network_get_num_participants_host())
	{
		if (network_is_participant_active(int_to_participantindex(iVar0)))
		{
			iVar1 = network_get_player_index(int_to_participantindex(iVar0));
			if (!func_6(iVar1))
			{
				if ((!GAMEPLAY::IS_BIT_SET(Local_3612[iVar0 /*5*/].f_2, false) || Local_3612[iVar0 /*5*/].f_3 != 6) || (GAMEPLAY::IS_BIT_SET(Local_818.f_2, false) && !GAMEPLAY::IS_BIT_SET(Local_3612[iVar0 /*5*/].f_2, true)))
				{
					return false;
				}
			}
		}
		iVar0++;
	}
	return true;
}

int func_6(int iParam0)
{
	if (func_7(iParam0))
	{
		return true;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1610316[iParam0 /*174*/].f_1, 8);
}

int func_7(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1610316[iParam0 /*174*/].f_1, 2);
}

void func_8()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar2 = false;
	while (iVar2 < _network_get_num_participants_host())
	{
		if (network_is_participant_active(int_to_participantindex(iVar2)))
		{
			GAMEPLAY::SET_BIT(&iVar3, iVar2);
		}
		else
		{
			func_19(iVar2);
		}
		iVar2++;
	}
	iVar2 = false;
	while (iVar2 < _network_get_num_participants_host())
	{
		if (GAMEPLAY::IS_BIT_SET(iVar3, iVar2))
		{
			if (func_18(iVar2))
			{
				iVar1++;
			}
			iVar0++;
			func_15(iVar2);
			func_9(iVar2);
			GAMEPLAY::SET_BIT(&(Local_818.f_673), iVar2);
		}
		iVar2++;
	}
	if (iVar0 > Local_818.f_727)
	{
		Local_818.f_727 = iVar0;
	}
	else
	{
		Local_818.f_726 = Local_818.f_727 - iVar0;
	}
	if (iVar1 > Local_818.f_728)
	{
		Local_818.f_728 = iVar1;
	}
}

void func_9(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = Local_3612[iParam0 /*5*/].f_4;
	iVar2 = -2;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (Local_818.f_674[iVar1] == iParam0)
		{
			iVar1 = 32;
		}
		else if (iVar2 >= -1)
		{
			if (iVar2 >= 0)
			{
				func_14(&(Local_818.f_674[iVar1]), &iVar2);
			}
		}
		else if (Local_818.f_674[iVar1] < 0 || iVar0 > Local_3612[Local_818.f_674[iVar1] /*5*/].f_4)
		{
			iVar2 = Local_818.f_674[iVar1];
			if (iVar0 != 0)
			{
				func_10(Local_818.f_674[iVar1], iParam0, iVar1);
			}
			Local_818.f_674[iVar1] = iParam0;
			iVar3 = iVar1 + 1;
			while (iVar3 <= 31)
			{
				if (Local_818.f_674[iVar3] == iParam0)
				{
					Local_818.f_674[iVar3] = -1;
				}
				iVar3++;
			}
		}
		iVar1++;
	}
}

void func_10(auto uParam0, int iParam1, int iParam2)
{
	struct<14> Var0;
	int iVar14;
	
	iVar14 = network_get_player_index(int_to_participantindex(iParam1));
	if (iParam2 == 0)
	{
		Var0.f_2 = 164;
		Var0.f_10 = iVar14;
		func_11(Var0, func_12(1));
	}
}

void func_11(struct<2> Param0, auto uParam1, auto uParam2, auto uParam3, auto uParam4, auto uParam5, auto uParam6, auto uParam7, auto uParam8, auto uParam9, auto uParam10, auto uParam11, auto uParam12, int iParam13)
{
	Param0 = 0;
	Param0.f_1 = player_id();
	if (!iParam14 == 0)
	{
		trigger_script_event(1, &Param0, 14, iParam14);
	}
}

auto func_12(int iParam0)
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
			if (func_13(iVar2, 0, 0))
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

bool func_13(int iParam0, int iParam1, int iParam2)
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

void func_14(auto uParam0, int iParam1)
{
	*uParam0 += *iParam1;
	*iParam1 = *uParam0 - *iParam1;
	*uParam0 -= *iParam1;
}

void func_15(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar3 = network_get_player_index(int_to_participantindex(iParam0));
	iVar0 = iVar3;
	if (Global_2460486.f_4574.f_38[iVar0] >= 0)
	{
		iVar4 = Global_2460486.f_4574.f_38[iVar0];
		iVar1 = Global_2460486.f_4574.f_5[iVar0];
		if (!GAMEPLAY::IS_BIT_SET(Local_818.f_3[func_17(iVar4)], func_16(iVar4)))
		{
			if (GAMEPLAY::IS_BIT_SET(Global_2460486.f_4574[func_17(iVar4)], func_16(iVar4)))
			{
				if (func_1(&uLocal_386, 750, 0))
				{
					if (iVar1 != 0)
					{
						if (iVar1 < iVar2 || iVar2 == 0)
						{
							iVar2 = iVar1;
							Local_818.f_10[iVar4 /*5*/].f_3 = iParam0;
							Global_2460486.f_4574.f_38[iVar0] = -1;
							GAMEPLAY::SET_BIT(&(Local_818.f_3[func_17(iVar4)]), func_16(iVar4));
							Local_818.f_708--;
						}
					}
				}
			}
		}
	}
}

int func_16(int iParam0)
{
	if (iParam0 < 31)
	{
		return iParam0;
	}
	else if (iParam0 < 62)
	{
		return iParam0 - 31;
	}
	return iParam0 - func_17(iParam0) * 31;
}

int func_17(int iParam0)
{
	if (iParam0 < 31)
	{
		return 0;
	}
	else if (iParam0 < 62)
	{
		return 1;
	}
	return iParam0 / 31;
}

int func_18(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 32)
	{
		return Local_3612[iParam0 /*5*/].f_4 > 0;
	}
	return false;
}

void func_19(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (GAMEPLAY::IS_BIT_SET(Local_818.f_673, iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (Local_818.f_674[iVar0] == iParam0)
			{
				Local_818.f_674[iVar0] = -1;
				iVar0 = 32;
			}
			iVar0++;
		}
		iVar1 = 0;
		while (iVar1 < Local_818.f_709)
		{
			if (Local_818.f_10[iVar1 /*5*/].f_3 == iParam0)
			{
				Local_818.f_10[iVar1 /*5*/].f_3 = -1;
			}
			iVar1++;
		}
		GAMEPLAY::CLEAR_BIT(&(Local_818.f_673), iParam0);
	}
}

void func_20(auto uParam0, int iParam1, int iParam2)
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

bool func_21()
{
	return false;
}

bool func_22()
{
	if (Local_818.f_708 > 0)
	{
		return false;
	}
	if (func_1(&(Local_818.f_671), 750, 0))
	{
		GAMEPLAY::SET_BIT(&(Local_818.f_2), false);
		return true;
	}
	return false;
}

void func_23(int iParam0)
{
	Local_818.f_8 = iParam0;
}

bool func_24()
{
	struct<2> Var0;
	Vector3 vVar2;
	float fVar5;
	int iVar6;
	
	if (func_32())
	{
		Var0 = {Local_818.f_729[iLocal_99 /*2*/]};
		if (func_31(Var0))
		{
			if (!network_does_network_id_exist(Var0.f_1))
			{
				if (func_30(iLocal_99, &vVar2, &fVar5))
				{
					Local_818.f_713[iLocal_99] = func_27(iLocal_99);
					if (GAMEPLAY::IS_BIT_SET(Local_3612[Local_818.f_713[iLocal_99] /*5*/].f_1, iLocal_99))
					{
						if (func_26(&(Local_818.f_729[iLocal_99 /*2*/].f_1), Var0, vVar2, fVar5, 1, 1, 1, 0, 1, 0))
						{
							set_vehicle_doors_locked(net_to_veh(Local_818.f_729[iLocal_99 /*2*/].f_1), 1);
							_0x3910051CCECDB00C(net_to_veh(Local_818.f_729[iLocal_99 /*2*/].f_1), true);
							_0x0AD9E8F87FF7C16F(net_to_veh(Local_818.f_729[iLocal_99 /*2*/].f_1), 0);
							func_25(net_to_veh(Local_818.f_729[iLocal_99 /*2*/].f_1), 1);
							if (decor_is_registered_as_type("Not_Allow_As_Saved_Veh", 3))
							{
								decor_set_int(net_to_veh(Local_818.f_729[iLocal_99 /*2*/].f_1), "Not_Allow_As_Saved_Veh", true);
							}
							if (decor_is_registered_as_type("MPBitset", 3))
							{
								if (decor_exist_on(net_to_veh(Local_818.f_729[iLocal_99 /*2*/].f_1), "MPBitset"))
								{
									iVar6 = decor_get_int(net_to_veh(Local_818.f_729[iLocal_99 /*2*/].f_1), "MPBitset");
								}
								GAMEPLAY::SET_BIT(&iVar6, 10);
								GAMEPLAY::SET_BIT(&iVar6, 11);
								decor_set_int(net_to_veh(Local_818.f_729[iLocal_99 /*2*/].f_1), "MPBitset", iVar6);
							}
							Local_818.f_713[iLocal_99] = -1;
						}
					}
				}
			}
			iLocal_99++;
			if (iLocal_99 >= 10)
			{
				iLocal_99 = false;
				return true;
			}
		}
		return false;
	}
	return true;
}

void func_25(int iParam0, int iParam1)
{
	int iVar0;
	
	if (decor_is_registered_as_type("MPBitset", 3))
	{
		if (decor_exist_on(iParam0, "MPBitset"))
		{
			iVar0 = decor_get_int(iParam0, "MPBitset");
		}
		if (iParam1)
		{
			GAMEPLAY::SET_BIT(&iVar0, 13);
		}
		else
		{
			GAMEPLAY::CLEAR_BIT(&iVar0, 13);
		}
		decor_set_int(iParam0, "MPBitset", iVar0);
	}
}

bool func_26(auto uParam0, int iParam1, Vector3 vParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
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

int func_27(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	Vector3 vVar4;
	auto uVar7;
	int iVar8;
	
	fVar2 = 1000000f;
	if (func_30(iParam0, &vVar4, &uVar7))
	{
		iVar0 = false;
		while (iVar0 <= _network_get_num_participants_host() - 1)
		{
			if (network_is_participant_active(int_to_participantindex(iVar0)))
			{
				iVar8 = network_get_player_index(int_to_participantindex(iVar0));
				if (func_13(iVar8, 1, 1))
				{
					fVar3 = func_28(func_29(iVar8), vVar4);
					if (fVar3 < fVar2)
					{
						fVar2 = fVar3;
						iVar1 = iVar0;
					}
				}
			}
			iVar0++;
		}
	}
	return iVar1;
}

float func_28(Vector3 vParam0, Vector3 vParam1)
{
	vParam0.z = 0f;
	vParam3.z = 0f;
	return vdist(vParam0, vParam3);
}

Vector3 func_29(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(get_player_ped(iParam0), 0);
}

bool func_30(int iParam0, auto uParam1, auto uParam2)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = {-1729.582f, -2943.77f, 12.9443f};
			*uParam2 = 300.078f;
			break;
		
		case 1:
			*uParam1 = {677.2984f, 769.7758f, 204.6846f};
			*uParam2 = 82.8903f;
			break;
		
		case 2:
			*uParam1 = {1073.972f, 3003.889f, 40.5508f};
			*uParam2 = 333.2717f;
			break;
		
		case 3:
			*uParam1 = {1928.635f, 4702.327f, 40.1958f};
			*uParam2 = 327.9112f;
			break;
		
		case 4:
			*uParam1 = {1278.65f, 6579.366f, 1.505f};
			*uParam2 = 84.26f;
			break;
		
		case 5:
			*uParam1 = {-1700.407f, -829.8932f, 8.2542f};
			*uParam2 = 70.1811f;
			break;
		
		case 6:
			*uParam1 = {-2733.589f, 2925.563f, 1.2152f};
			*uParam2 = 176.5378f;
			break;
		
		case 7:
			*uParam1 = {1493.418f, -2442.99f, 64.9693f};
			*uParam2 = 52.9918f;
			break;
		
		case 8:
			*uParam1 = {569.0449f, -772.5692f, 10.4088f};
			*uParam2 = 179.3501f;
			break;
		
		case 9:
			*uParam1 = {-905.1526f, 5548.172f, 5.5251f};
			*uParam2 = 95.8361f;
			break;
		
		default:
			return false;
	}
	return true;
}

int func_31(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

auto func_32()
{
	return Local_818.f_707;
}

bool func_33(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4)
{
	if (_0xCF61D4B4702EE9EB() < iParam0)
	{
		if (iParam2)
		{
			func_41(sParam3, sParam4, 1);
		}
		if (func_40(26, -1))
		{
			func_37(26, -1);
		}
		return true;
	}
	if (func_36(&(Global_1573883.f_18)))
	{
		if (!func_1(&(Global_1573883.f_18), 7500, 0))
		{
			return false;
		}
		func_35(&(Global_1573883.f_18));
	}
	if (func_34())
	{
		if (iParam2)
		{
			func_41(sParam3, sParam4, 0);
		}
		if (func_40(26, -1))
		{
			func_37(26, -1);
		}
		return true;
	}
	if (iParam1 && network_get_num_participants() < iParam0)
	{
		if (iParam2)
		{
			func_41(sParam3, sParam4, 1);
		}
		if (func_40(26, -1))
		{
			func_37(26, -1);
		}
		return true;
	}
	return false;
}

int func_34()
{
	return GAMEPLAY::IS_BIT_SET(Global_1573883.f_1, false);
}

void func_35(auto uParam0)
{
	*uParam0.f_1 = 0;
}

auto func_36(auto uParam0)
{
	return *uParam0.f_1;
}

void func_37(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_39();
	}
	switch (iParam0)
	{
		case 0:
			_0x723C1CE13FBFDB67(false, iParam1);
			break;
		
		default:
			iVar1 = func_38(iParam1);
			iVar0 = get_profile_setting(iVar1);
			if (GAMEPLAY::IS_BIT_SET(iVar0, iParam0))
			{
				GAMEPLAY::CLEAR_BIT(&iVar0, iParam0);
				_0x723C1CE13FBFDB67(iVar0, iParam1);
			}
			break;
	}
}

int func_38(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_39();
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

auto func_39()
{
	return Global_1312747;
}

int func_40(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_39();
	}
	iVar0 = func_38(iParam1);
	iVar1 = get_profile_setting(iVar0);
	return GAMEPLAY::IS_BIT_SET(iVar1, iParam0);
}

void func_41(char* sParam0, char* sParam1, int iParam2)
{
	if ((!GAMEPLAY::IS_BIT_SET(Global_1573883.f_1, 2) && !func_7(player_id())) && !func_6(player_id()))
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
		func_42(65, sParam0, sParam1, 1, -1, 2);
		GAMEPLAY::SET_BIT(&(Global_1573883.f_1), 2);
	}
}

int func_42(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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
	func_76(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_65 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_66 = iParam5;
	return func_43(&Var0);
}

bool func_43(auto uParam0)
{
	int iVar0;
	
	if (*uParam0.f_1 == 1)
	{
		if (Global_2428492.f_2461)
		{
			return false;
		}
	}
	func_49(uParam0, *uParam0.f_16);
	func_46(uParam0);
	if (func_45(*uParam0.f_1))
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
				if (func_44(Global_2428492.f_2171[iVar0 /*72*/].f_1))
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

bool func_44(int iParam0)
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

bool func_45(int iParam0)
{
	if ((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 55) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10)
	{
		return true;
	}
	return false;
}

void func_46(auto uParam0)
{
	if (func_48(*uParam0.f_1))
	{
		*uParam0.f_66 = func_47();
	}
}

int func_47()
{
	return 21;
}

bool func_48(int iParam0)
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

void func_49(auto uParam0, int iParam1)
{
	if (func_48(*uParam0.f_1))
	{
		*uParam0.f_67 = 1;
	}
	if (iParam1 == func_75())
	{
		return;
	}
	if (func_44(*uParam0.f_1))
	{
		if (*uParam0.f_65 == 1)
		{
			*uParam0.f_67 = func_50(iParam1, -2, 0, 0);
		}
	}
}

int func_50(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_71(iParam0))
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
	if (func_71(player_id()) || (func_70() && func_69()))
	{
		iVar0 = func_68();
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (is_ped_a_player(iVar0))
			{
				if (_network_get_ped_player(iVar0) != -1)
				{
					if (func_13(_network_get_ped_player(iVar0), 0, 1))
					{
						if ((iParam1 > -1 && network_is_activity_session()) && iParam1 < 4)
						{
							if (Global_1617379.f_66777[iParam1] != -1)
							{
								return func_67(iParam1, iParam0, 0);
							}
							else
							{
								return func_58(iParam0, _network_get_ped_player(iVar0), iParam1, iParam2, iParam3);
							}
						}
						else
						{
							return func_58(iParam0, _network_get_ped_player(iVar0), iParam1, iParam2, iParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && network_is_activity_session()) && iParam1 < 4)
			{
				if (Global_1617379.f_66777[iParam1] != -1)
				{
					return func_67(iParam1, iParam0, 0);
				}
				else
				{
					return func_51(0, -1, 0);
				}
			}
			else
			{
				return func_51(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && network_is_activity_session()) && iParam1 < 4)
	{
		if (Global_1617379.f_66777[iParam1] != -1)
		{
			return func_67(iParam1, iParam0, 0);
		}
		else
		{
			return func_58(iParam0, player_id(), iParam1, iParam2, iParam3);
		}
	}
	return func_58(iParam0, player_id(), iParam1, iParam2, iParam3);
}

int func_51(int iParam0, int iParam1, int iParam2)
{
	return func_52(player_id(), iParam0, iParam1, iParam2);
}

int func_52(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = get_player_team(iParam0);
	if (iParam1)
	{
		if (iParam2 > -1)
		{
			if (func_57(iVar0, iParam2, 0) && !GAMEPLAY::IS_BIT_SET(Global_1617379.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_56(1);
				}
				else
				{
					return func_56(0);
				}
			}
			else if (iParam3)
			{
				return 28;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1617379.f_4, 20))
			{
				return func_53(iVar0, iParam2, 1);
			}
			else
			{
				return func_53(iVar0, iParam2, 0);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_56(1);
	}
	return func_56(0);
}

int func_53(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_55(iParam0, iParam1);
	if (func_54(Global_1617379.f_70365))
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

bool func_54(int iParam0)
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

int func_55(int iParam0, int iParam1)
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
			if (!func_57(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_56(int iParam0)
{
	if (iParam0)
	{
		return 118;
	}
	return 116;
}

int func_57(int iParam0, int iParam1, int iParam2)
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

int func_58(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
			if ((func_66(iParam1, iParam0, iVar0, 0) && !GAMEPLAY::IS_BIT_SET(Global_1617379.f_15, 18)) || ((func_57(get_player_team(iParam1), get_player_team(iParam0), 0) && GAMEPLAY::IS_BIT_SET(Global_1617379.f_15, 23)) && !GAMEPLAY::IS_BIT_SET(Global_1617379.f_15, 18)))
			{
				return func_56(1);
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1617379.f_15, 26))
			{
				return func_65(1);
			}
			else
			{
				return func_52(iParam1, 1, iVar0, iParam4);
			}
		}
		else if ((Global_1573837 || Global_1573828) || Global_1587523[iParam0 /*444*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1573837 == 1 && Global_1573847 == 0))
			{
				return func_56(1);
			}
			else
			{
				return func_52(iParam1, 1, iVar0, iParam4);
			}
		}
		if (Global_1573832 && Global_1573410.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar3 = func_61(iParam0);
	if (!iVar3 == -1)
	{
		return func_59(iVar3);
	}
	if (iParam3)
	{
		return 0;
	}
	return 1;
}

int func_59(int iParam0)
{
	int iVar0;
	
	iVar0 = func_60(iParam0);
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

auto func_60(auto uParam0)
{
	return Global_2413760.f_1946.f_44[uParam0 /*2*/].f_1;
}

int func_61(int iParam0)
{
	if (!iParam0 == func_75())
	{
		if (func_63(iParam0, 1))
		{
			return Global_2413760.f_1946.f_11[func_62(iParam0)];
		}
	}
	return -1;
}

int func_62(int iParam0)
{
	if (iParam0 != func_75())
	{
		return Global_1610316[iParam0 /*174*/].f_10;
	}
	return func_75();
}

int func_63(int iParam0, int iParam1)
{
	if (!iParam1)
	{
		if (func_64(iParam0))
		{
			return false;
		}
	}
	return Global_1610316[iParam0 /*174*/].f_10 != func_75();
}

int func_64(int iParam0)
{
	if (iParam0 != func_75())
	{
		if (Global_1610316[iParam0 /*174*/].f_10 != func_75())
		{
			return Global_1610316[iParam0 /*174*/].f_10 == iParam0;
		}
	}
	return false;
}

int func_65(int iParam0)
{
	if (iParam0)
	{
		return 119;
	}
	return 116;
}

int func_66(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_67(int iParam0, int iParam1, int iParam2)
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
		iVar0 = func_52(iParam1, !iParam2, iParam0, 0);
	}
	return iVar0;
}

auto func_68()
{
	return Global_2359301.f_2;
}

int func_69()
{
	return GAMEPLAY::IS_BIT_SET(Global_2359301, 4);
}

int func_70()
{
	return GAMEPLAY::IS_BIT_SET(Global_1587523[player_id() /*444*/].f_39.f_18, 14);
}

bool func_71(int iParam0)
{
	if (func_73(iParam0, 0))
	{
		return true;
	}
	if (func_72())
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

int func_72()
{
	return GAMEPLAY::IS_BIT_SET(Global_2359301, 3);
}

int func_73(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == player_id())
	{
		iVar0 = func_74(-1, 0) == 8;
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

int func_74(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_39();
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

int func_75()
{
	return -1;
}

void func_76(auto uParam0, auto uParam1, int iParam2, char* sParam3, char* sParam4)
{
	*uParam1.f_16 = func_75();
	*uParam1.f_17 = func_75();
	*uParam1.f_18 = func_75();
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

void func_77(int iParam0)
{
	Local_818 = iParam0;
}

bool func_78()
{
	int iVar0;
	
	if (func_1(&(Local_818.f_665), 750, 0))
	{
		iVar0 = false;
		while (iVar0 < 32)
		{
			Local_818.f_674[iVar0] = -1;
			iVar0++;
		}
		func_35(&(Local_818.f_661));
		func_81();
		if (func_32())
		{
			iVar0 = false;
			while (iVar0 < 10)
			{
				Local_818.f_713[iVar0] = func_27(iVar0);
				iVar0++;
			}
			func_79();
		}
		return true;
	}
	return false;
}

void func_79()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Local_818.f_729[iVar0 /*2*/] = func_80();
		iVar0++;
	}
}

int func_80()
{
	int iVar0;
	
	iVar0 = get_random_int_in_range(0, 2);
	switch (iVar0)
	{
		case 0:
			return joaat("maverick");
		
		case 1:
			return joaat("mammatus");
		
		default:
	}
	return 0;
}

void func_81()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	Local_818.f_709 = func_94();
	Local_818.f_708 = Local_818.f_709;
	Local_818.f_712 = func_90();
	Local_818.f_707 = func_87();
	iVar0 = func_86();
	if (Local_818.f_707)
	{
		iVar1 = 1;
	}
	func_83(func_85(132, Local_818.f_712, iVar1, 0));
	if (Local_818.f_712 == 1 && !Local_818.f_707)
	{
		Local_818.f_710 = 1;
	}
	iVar2 = 0;
	while (iVar2 < Local_818.f_709)
	{
		Local_818.f_10[iVar2 /*5*/].f_4 = iVar2;
		Local_818.f_10[iVar2 /*5*/] = {func_82(Local_818.f_712, Local_818.f_707, iVar0, iVar2)};
		iVar2++;
	}
}

Vector3 func_82(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
			if (iParam1)
			{
				switch (iParam2)
				{
					case 0:
						switch (iParam3)
						{
							case 0:
								return 623.5349f, 1614.651f, 283.748f;
							
							case 1:
								return 742.6324f, 1271.099f, 388.9925f;
							
							case 2:
								return 682.1757f, 1204.295f, 350.0934f;
							
							case 3:
								return 1779.28f, 668.7821f, 276.3788f;
							
							case 4:
								return 1927.214f, 129.7589f, 174.4281f;
							
							case 5:
								return 1056.943f, -699.1728f, 78.8831f;
							
							case 6:
								return 2026.536f, -1594.874f, 262.0831f;
							
							case 7:
								return 2139.424f, -2613.58f, 20.5914f;
							
							case 8:
								return 1041.685f, -2882.901f, 27.0959f;
							
							case 9:
								return 796.1402f, -2624.645f, 95.127f;
							
							case 10:
								return 504.6169f, -3311.801f, 22.9858f;
							
							case 11:
								return 416.9175f, -2684.419f, 10.1246f;
							
							case 12:
								return 561.767f, -2100.675f, 60.143f;
							
							case 13:
								return 872.454f, -1929.237f, 104.4083f;
							
							case 14:
								return 636.6328f, -1429.945f, 15.5f;
							
							case 15:
								return 591.386f, -852.2912f, 50.7211f;
							
							case 16:
								return 471.2209f, -102.4007f, 149.7505f;
							
							case 17:
								return 533.762f, 143.6576f, 125.7511f;
							
							case 18:
								return 1112.19f, 74.8892f, 117.7713f;
							
							case 19:
								return 683.9346f, 570.1795f, 165.7115f;
							
							case 20:
								return 1453.832f, 1113.675f, 134.9644f;
							
							case 21:
								return 1539.314f, 1716.172f, 125.0574f;
							
							case 22:
								return 1875.192f, 1698.918f, 109.9103f;
							
							case 23:
								return 2320.32f, 1669.402f, 86.7663f;
							
							case 24:
								return 2337.891f, 1358.536f, 100.8737f;
							
							case 25:
								return 2727.786f, 1558.729f, 83.66f;
							
							case 26:
								return 3112.177f, 1153.66f, 25.3827f;
							
							case 27:
								return 2580.817f, 476.8322f, 121.7549f;
							
							case 28:
								return 2458.7f, -384.0464f, 127.5513f;
							
							case 29:
								return 2381.206f, -939.2949f, 185.6516f;
							
							case 30:
								return 1669.294f, -1652.948f, 154.2478f;
							
							case 31:
								return 1096.793f, -1141.693f, 96.1055f;
							
							case 32:
								return 3042.9f, -291.4662f, 22.8304f;
							
							case 33:
								return 2645.351f, -1492.043f, 30.646f;
							
							case 34:
								return 1214.374f, -2353.274f, 66.8f;
							
							case 35:
								return 1841.616f, -2497.971f, 101.8039f;
							
							case 36:
								return 1872.035f, -761.149f, 105f;
							
							case 37:
								return 1657.665f, -413.7629f, 228.448f;
							
							case 38:
								return 1589.229f, -1981.901f, 161.2293f;
							
							case 39:
								return 991.7729f, -1477.064f, 60.0276f;
							
							case 40:
								return 2609.912f, -2096.358f, 35.0044f;
							
							case 41:
								return 1121.19f, 725.4341f, 170.3273f;
							
							case 42:
								return 2117.316f, 1024.085f, 197f;
							
							case 43:
								return 727.6708f, -452.6442f, 25f;
							
							case 44:
								return 1211.964f, -3285.54f, 19.5936f;
							
							case 45:
								return 1499.883f, -1276.207f, 131.5493f;
							
							case 46:
								return 3381.442f, -826.2608f, 42.8967f;
							
							case 47:
								return 1562.097f, 292.1506f, 494.2574f;
							
							case 48:
								return 2021.578f, -1993.689f, 120f;
							
							case 49:
								return 757.5558f, -1196.363f, 232.0553f;
							
							case 50:
								return 1887.774f, -3474.97f, 77.8727f;
							
							case 51:
								return 1083.224f, -229.6182f, 68.6364f;
							
							case 52:
								return 2344.084f, -406.1672f, 91f;
							
							case 53:
								return 2184.821f, 529.1252f, 241.1723f;
							
							case 54:
								return 1251.541f, -1883.809f, 50f;
							
							case 55:
								return 847.74f, 1781.903f, 160.9508f;
							
							case 56:
								return 288.3698f, -1601.346f, 52f;
							
							case 57:
								return 2648.131f, -731.5316f, 99.7f;
							
							case 58:
								return 1937.117f, 1337.446f, 529.8608f;
							
							case 59:
								return 1512.681f, -2539.276f, 208.3091f;
							
							case 60:
								return 2352.986f, -1763.908f, 136.1568f;
							
							case 61:
								return 2099.732f, -1212.728f, 178.3343f;
							
							case 62:
								return 1945.16f, -957.8221f, 96.04f;
							
							case 63:
								return 1872.81f, -830.1746f, 171.44f;
							
							case 64:
								return 1256.392f, -1571.629f, 90.566f;
							
							case 65:
								return 1818.023f, -244.6768f, 305.9837f;
							
							case 66:
								return 2839.051f, -748.0399f, 21.5008f;
							
							case 67:
								return 1268.646f, -2126.072f, 60.6975f;
							
							case 68:
								return 1088.679f, -1982.82f, 84.1204f;
							
							case 69:
								return 1597.218f, -2817.042f, 19.0498f;
							
							case 70:
								return 356.3379f, -2319.226f, 67.6058f;
							
							case 71:
								return 692.5012f, -2330.583f, 60.7022f;
							
							case 72:
								return 1070.4f, -1835.148f, 100.8235f;
							
							case 73:
								return 478.3501f, -1682.318f, 59.7763f;
							
							case 74:
								return 845.2267f, -2186.32f, 46.5743f;
							
							case 75:
								return 2651.639f, -1230.85f, 40.5824f;
							
							case 76:
								return 461.851f, -1460.173f, 65.7889f;
							
							case 77:
								return 775.8362f, -852.0386f, 31f;
							
							case 78:
								return 913.9593f, -976.4005f, 81.0321f;
							
							case 79:
								return 970.9194f, -2510.112f, 64f;
							
							case 80:
								return 1096.666f, 1222.327f, 202.4859f;
							
							case 81:
								return 1978.543f, 690.4552f, 174.2517f;
							
							case 82:
								return 1571.993f, -36.6251f, 140.5239f;
							
							case 83:
								return 918.2688f, -675.462f, 76.6019f;
							
							case 84:
								return 798.097f, -1194.02f, 32f;
							
							case 85:
								return 382.4527f, -31.8431f, 143.6312f;
							
							case 86:
								return 672.1725f, -1745.012f, 16f;
							
							case 87:
								return 620.2905f, -588.2725f, 22.6129f;
							
							case 88:
								return 1204.318f, 196.6229f, 79.9329f;
							
							case 89:
								return 2028.402f, -2179.396f, 105.5733f;
							
							case 90:
								return 1131.183f, -2929.769f, 33.2799f;
							
							case 91:
								return 654.5255f, -2634.736f, 26.063f;
							
							case 92:
								return 757.272f, -30.6019f, 66.9464f;
							
							case 93:
								return 262.5532f, -1046.969f, 73.6448f;
							
							case 94:
								return 638.4819f, -1021f, 43.5236f;
							
							case 95:
								return 351.6616f, -2758.046f, 29.2267f;
							
							case 96:
								return 1613.985f, -2243.761f, 136f;
							
							case 97:
								return 2947.746f, 792.9475f, 45f;
							
							case 98:
								return 2608.733f, 822.9318f, 118.6201f;
							
							case 99:
								return 1357.208f, 674.4443f, 100f;
							
							case 100:
								return 978.4934f, -2073.071f, 1000f;
							
							case 101:
								return 2848.513f, -2701.795f, 547.5851f;
							
							case 102:
								return 2322.219f, -2129.611f, 13.6809f;
							
							case 103:
								return 1248.603f, -2675.042f, 145.6704f;
							
							case 104:
								return 2052.692f, -252.931f, 228.334f;
							
							case 105:
								return 2394.902f, 388.1578f, 194.5342f;
							
							case 106:
								return 3337.711f, 56.3844f, 764.684f;
							
							case 107:
								return 1573.049f, 1472.569f, 179.2061f;
							
							case 108:
								return 1898.354f, 1020.671f, 277.9648f;
							
							case 109:
								return 745.1586f, 232.868f, 177.0828f;
							
							case 110:
								return 1551.579f, -685.6392f, 126f;
							
							case 111:
								return 2734.234f, 61.798f, 25.1296f;
							
							case 112:
								return 2404.63f, -1485.806f, 86.3959f;
							
							case 113:
								return 3033.16f, 321.8385f, 908.0805f;
							
							case 114:
								return 1353.323f, 373.6808f, 184.937f;
							
							case 115:
								return 1317.262f, -737.488f, 125.2729f;
							
							case 116:
								return 1737.696f, -966.1904f, 119.8332f;
							
							case 117:
								return 923.2643f, 978.5736f, 605.3384f;
							
							case 118:
								return 2823.777f, -1483.905f, 26.8193f;
							
							case 119:
								return 1333.475f, -275.2598f, 1000f;
							
							default:
						}
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						switch (iParam3)
						{
							case 0:
								return 2360.429f, 1273.094f, 63.9814f;
							
							case 1:
								return 2545.422f, 342.8004f, 107.4641f;
							
							case 2:
								return 2483.171f, -363.0696f, 92.7352f;
							
							case 3:
								return 1491.835f, -1005.532f, 50.5682f;
							
							case 4:
								return 1078.853f, -688.3618f, 56.6151f;
							
							case 5:
								return 657.7627f, -1500.858f, 8.6817f;
							
							case 6:
								return 1216.266f, -2907.278f, 4.8661f;
							
							case 7:
								return 958.6841f, -3079.094f, 13.3327f;
							
							case 8:
								return 459.5267f, -2429.235f, 4.7518f;
							
							case 9:
								return 1130.214f, -2082.811f, 30.0089f;
							
							case 10:
								return 1506.701f, -2135.637f, 75.4567f;
							
							case 11:
								return 1759.277f, -1579.97f, 117.9f;
							
							case 12:
								return 2510.45f, -1219.332f, 1.89f;
							
							case 13:
								return 2855.604f, -1339.602f, 14.7183f;
							
							case 14:
								return 2826.41f, -743.3448f, 0.3071f;
							
							case 15:
								return 1236.599f, -83.0057f, 58.7636f;
							
							case 16:
								return 1660.534f, 0.3033f, 172.7744f;
							
							case 17:
								return 1917.608f, 301.6851f, 161.8848f;
							
							case 18:
								return 2145.003f, 146.688f, 224.1061f;
							
							case 19:
								return 1456.737f, 1111.848f, 113.334f;
							
							case 20:
								return 1135.62f, 58.6667f, 79.7561f;
							
							case 21:
								return 680.794f, 559.0409f, 128.0462f;
							
							case 22:
								return 716.7936f, 141.21f, 79.7545f;
							
							case 23:
								return 875.606f, -476.7556f, 29.0746f;
							
							case 24:
								return 536.7303f, -2817.502f, 5.0421f;
							
							case 25:
								return 984.1771f, -2410.686f, 29.4333f;
							
							case 26:
								return 863.2344f, -2151.808f, 29.4816f;
							
							case 27:
								return 1002.942f, -1918.75f, 30.1432f;
							
							case 28:
								return 1183.313f, -1550.946f, 38.5953f;
							
							case 29:
								return 694.0918f, 1283.059f, 359.296f;
							
							case 30:
								return 745.2003f, 1199.09f, 325.4016f;
							
							case 31:
								return 887.6219f, 873.548f, 178.5657f;
							
							case 32:
								return 1828.967f, 1571.725f, 99.7219f;
							
							case 33:
								return 2805.81f, 1676.1f, 23.5193f;
							
							case 34:
								return 1405.691f, -601.7893f, 73.3473f;
							
							case 35:
								return 1710.367f, -464.7253f, 169.8001f;
							
							case 36:
								return 1946.392f, 1331.992f, 160.1707f;
							
							case 37:
								return 2271.38f, 1711.949f, 67.0413f;
							
							case 38:
								return 2307.003f, -1750.421f, 133.7737f;
							
							case 39:
								return 2172.226f, -1069.367f, 176.0087f;
							
							case 40:
								return 595.0312f, -851.27f, 40.4327f;
							
							case 41:
								return 456.9577f, -752.8668f, 26.3578f;
							
							case 42:
								return 531.9203f, -1034.797f, 27.2597f;
							
							case 43:
								return 1289.908f, -3341.78f, 4.9016f;
							
							case 44:
								return 533.8767f, -1969.171f, 23.9846f;
							
							case 45:
								return 689.5218f, -1774.186f, 8.6f;
							
							case 46:
								return 848.6605f, -1211.77f, 30.3237f;
							
							case 47:
								return 1874.741f, -2202.331f, 166.2907f;
							
							case 48:
								return 1458.76f, -2623.696f, 47.69f;
							
							case 49:
								return 1538.907f, 784.3685f, 76.4501f;
							
							case 50:
								return 800.149f, -109.5107f, 79.533f;
							
							case 51:
								return 2687.09f, 889.5835f, 76.4359f;
							
							case 52:
								return 939.7744f, -1496.824f, 29.1156f;
							
							case 53:
								return 547.5936f, -455.3327f, 23.7304f;
							
							case 54:
								return 709.3f, -2285f, 33.8f;
							
							case 55:
								return 454.0637f, -2177.92f, 4.9177f;
							
							case 56:
								return 1468.104f, -1759.198f, 78.3022f;
							
							case 57:
								return 1239.343f, -1097.545f, 37.5256f;
							
							case 58:
								return 851.4936f, -956.856f, 25.2824f;
							
							case 59:
								return 512.4025f, 221.9917f, 103.7442f;
							
							case 60:
								return 1545.082f, 1701.081f, 108.769f;
							
							case 61:
								return 1188.11f, 1556.979f, 107.8028f;
							
							case 62:
								return 1033.948f, -273.4799f, 49.8443f;
							
							case 63:
								return 743.4129f, -591.6385f, 26.0061f;
							
							case 64:
								return 1975.484f, -749.9232f, 96.2513f;
							
							case 65:
								return 1968.117f, 708.8224f, 161.8571f;
							
							case 66:
								return 2296.027f, 1152.222f, 64.0942f;
							
							case 67:
								return 2474.09f, 1484.103f, 35.2029f;
							
							case 68:
								return 482.1839f, 664.4731f, 195.1235f;
							
							case 69:
								return 1505.106f, -1271.169f, 121.655f;
							
							case 70:
								return 1220.729f, -1865.861f, 37.4982f;
							
							case 71:
								return 476.6311f, -1283.433f, 28.5393f;
							
							case 72:
								return 952.6752f, -2248.219f, 29.5831f;
							
							case 73:
								return 1434.707f, -2315.042f, 65.927f;
							
							case 74:
								return 1882.254f, -1873.208f, 191.477f;
							
							case 75:
								return 2014.572f, -1591.406f, 249.303f;
							
							case 76:
								return 1969.748f, -992.8931f, 79.6204f;
							
							case 77:
								return 2267.432f, -331.317f, 92.9784f;
							
							case 78:
								return 1205.465f, 336.8802f, 80.9909f;
							
							case 79:
								return 531.8229f, -27.4548f, 69.6295f;
							
							case 80:
								return 304.7162f, 262.4799f, 104.337f;
							
							case 81:
								return 572.4857f, -2147.293f, 7.9233f;
							
							case 82:
								return 1223.13f, -2338.621f, 59.8673f;
							
							case 83:
								return 1747.151f, -2679.91f, 1.4587f;
							
							case 84:
								return 939.6769f, -1342.533f, 11.4778f;
							
							case 85:
								return 1435.646f, -1476.472f, 62.2245f;
							
							case 86:
								return 2273.048f, -539.2752f, 102.9436f;
							
							case 87:
								return 1522.075f, -381.5488f, 200.3996f;
							
							case 88:
								return 2778.579f, 1073.328f, 0.6607f;
							
							case 89:
								return 609.4634f, -1333.589f, 20.7017f;
							
							case 90:
								return 1360.928f, -946.584f, 55.9209f;
							
							case 91:
								return 1147.373f, -431.5072f, 65.9987f;
							
							case 92:
								return 2391.644f, -932.7006f, 151.3306f;
							
							case 93:
								return 2897.51f, -314.7418f, 17.1346f;
							
							case 94:
								return 2963.361f, 513.4398f, 35.0981f;
							
							case 95:
								return 2415.814f, 763.4792f, 124.8302f;
							
							case 96:
								return 2054.985f, 953.5229f, 218.5845f;
							
							case 97:
								return 1522.831f, 461.3894f, 224.2793f;
							
							case 98:
								return 1301.596f, 1445.471f, 98.4293f;
							
							case 99:
								return 1071.843f, -1841.304f, 36.3069f;
							
							case 100:
								return 1133.087f, -2602.795f, 17.3834f;
							
							case 101:
								return 484.4286f, -3064.647f, 5.084f;
							
							case 102:
								return 1610.912f, -2385.55f, 90.6982f;
							
							case 103:
								return 695.2822f, -2534.997f, 17.6967f;
							
							case 104:
								return 554.7129f, -1634.238f, 26.9479f;
							
							case 105:
								return 1723.686f, -1038.606f, 129.0783f;
							
							case 106:
								return 2637.012f, -1863.213f, 17.7764f;
							
							case 107:
								return 2638.077f, 1346.641f, 25.4338f;
							
							case 108:
								return 1910.663f, 29.3172f, 159.5f;
							
							case 109:
								return 2952.967f, 797.8872f, 0.1f;
							
							case 110:
								return 2937.12f, 1471.532f, 0f;
							
							case 111:
								return 2348.98f, -2281.005f, 0.1697f;
							
							case 112:
								return 2681.416f, -1560.354f, -0.0123f;
							
							case 113:
								return 2812.644f, -27.1503f, 0.7016f;
							
							case 114:
								return 3201.036f, -102.7169f, 0.2f;
							
							case 115:
								return 651.1428f, -3112.596f, 0.0233f;
							
							case 116:
								return 2313.423f, -2194.061f, 0.025f;
							
							case 117:
								return 3055.192f, 185.0506f, 0.4391f;
							
							case 118:
								return 2729.46f, -1073.702f, 0.6712f;
							
							case 119:
								return 1423.506f, -2790.912f, 0.7109f;
							
							default:
						}
						break;
					}
			}
			break;
		
		case 1:
			if (iParam1)
			{
				switch (iParam2)
				{
					case 0:
						switch (iParam3)
						{
							case 0:
								return -915.445f, -2520.007f, 58f;
							
							case 1:
								return -1343.719f, -3336.795f, 30.5601f;
							
							case 2:
								return -1336.239f, -3044.059f, 300.803f;
							
							case 3:
								return -1833.852f, -1191.057f, 41.1411f;
							
							case 4:
								return -1955.78f, 1776.57f, 195.8577f;
							
							case 5:
								return -2166.629f, 1607.567f, 260f;
							
							case 6:
								return -417.0685f, 1153.347f, 347.5894f;
							
							case 7:
								return -2503.341f, 754.9435f, 342.9515f;
							
							case 8:
								return -2626.127f, 136.1493f, 118.1611f;
							
							case 9:
								return -2246.804f, 266.7578f, 194.8923f;
							
							case 10:
								return -1364.038f, 56.9618f, 70.9416f;
							
							case 11:
								return -94.2512f, 880.448f, 265f;
							
							case 12:
								return -162.3738f, -999.6118f, 286.6717f;
							
							case 13:
								return 140.5345f, -698.5123f, 92.6658f;
							
							case 14:
								return -104.079f, -755.4847f, 59.1614f;
							
							case 15:
								return -284.6401f, -446.2669f, 91.5901f;
							
							case 16:
								return -795.1664f, -736.1061f, 78.6788f;
							
							case 17:
								return -971.361f, -1305.368f, 50f;
							
							case 18:
								return -1357.973f, -1476.396f, 40.9274f;
							
							case 19:
								return -2004.334f, -556.4324f, 20.3771f;
							
							case 20:
								return -1034.381f, 640.7464f, 163.7504f;
							
							case 21:
								return -1238.563f, -848.6133f, 89.7682f;
							
							case 22:
								return -1169.283f, -467.3812f, 69.0157f;
							
							case 23:
								return -324.4008f, -1968.694f, 71.7904f;
							
							case 24:
								return -269.9813f, -2425.728f, 95.05f;
							
							case 25:
								return 247.3292f, -3308.082f, 59.9012f;
							
							case 26:
								return 219.492f, -2318.923f, 43.917f;
							
							case 27:
								return 18.8233f, -1504f, 54.686f;
							
							case 28:
								return 8.9788f, 1715.057f, 249.4028f;
							
							case 29:
								return -667.7844f, 404.7751f, 125.5105f;
							
							case 30:
								return 216.2372f, 236.2603f, 125.7443f;
							
							case 31:
								return -3079.696f, 766.6476f, 33.988f;
							
							case 32:
								return -1105.589f, 1428.968f, 238.1016f;
							
							case 33:
								return -474.9906f, 1529.526f, 500.0109f;
							
							case 34:
								return -1621.841f, 929.212f, 193.8022f;
							
							case 35:
								return -767.9827f, -21.7202f, 69.0007f;
							
							case 36:
								return -472.9492f, -1444.143f, 92.8559f;
							
							case 37:
								return -1879.575f, -2634.001f, 11.491f;
							
							case 38:
								return -1459.734f, -2141.965f, 23.7189f;
							
							case 39:
								return -75.0934f, -818.6606f, 599.9617f;
							
							case 40:
								return -230.7478f, -241.4196f, 76.4557f;
							
							case 41:
								return -1608.013f, -537.3172f, 73.1431f;
							
							case 42:
								return -1806.964f, -125.5317f, 118.0094f;
							
							case 43:
								return -3170.222f, 1543.227f, 33.8091f;
							
							case 44:
								return -2753.087f, 1229.005f, 140.7239f;
							
							case 45:
								return -306.4009f, 202.0892f, 180.3099f;
							
							case 46:
								return 396.1246f, -1528.24f, 46.6041f;
							
							case 47:
								return 389.6704f, -356.0437f, 61.5436f;
							
							case 48:
								return 324.4086f, -988.9622f, 92.2799f;
							
							case 49:
								return -657.5551f, -1105.199f, 67.647f;
							
							case 50:
								return -439.2123f, -1003.071f, 58.7819f;
							
							case 51:
								return -208.3349f, -1800.983f, 12.0207f;
							
							case 52:
								return 104.7709f, -1940.293f, 33.3786f;
							
							case 53:
								return -80.1589f, 364.0139f, 180.4526f;
							
							case 54:
								return -1064.813f, 7.4781f, 69.6885f;
							
							case 55:
								return -1997.443f, 722.7387f, 175.1271f;
							
							case 56:
								return -254.3736f, -3074.535f, 75.4412f;
							
							case 57:
								return -830.1344f, -1880.055f, 33.9615f;
							
							case 58:
								return -2775.497f, -788.6588f, 36.447f;
							
							case 59:
								return 43.0406f, -413.7074f, 89.5811f;
							
							case 60:
								return -3209.421f, 1110.18f, 37.6606f;
							
							case 61:
								return -2256.718f, -339.6835f, 43.3005f;
							
							case 62:
								return -1957.094f, 1330.48f, 236.7105f;
							
							case 63:
								return -1030.221f, 996.1059f, 182.364f;
							
							case 64:
								return -1529.428f, 441.7661f, 134.8705f;
							
							case 65:
								return 145.6732f, 1154.994f, 253.3341f;
							
							case 66:
								return -520.5256f, 659.5372f, 177.0043f;
							
							case 67:
								return 18.1044f, 638.951f, 224.5906f;
							
							case 68:
								return 128.1127f, -27.8183f, 91.0755f;
							
							case 69:
								return -634.6116f, -367.6195f, 56.3093f;
							
							case 70:
								return -402.9568f, -655.0366f, 60.6586f;
							
							case 71:
								return -1034.505f, -1070.038f, 21.0905f;
							
							case 72:
								return -1013.909f, -1763.924f, 20.6112f;
							
							case 73:
								return -734.4069f, -1448.061f, 26.2766f;
							
							case 74:
								return -202.7723f, -1322.269f, 53.6863f;
							
							case 75:
								return 388.6693f, -1368.068f, 50.7767f;
							
							case 76:
								return -7.0116f, -2230.674f, 39.1959f;
							
							case 77:
								return 33.8391f, -2745.649f, 33.5782f;
							
							case 78:
								return -1100.793f, -2846.705f, 53.132f;
							
							case 79:
								return -1274.324f, -2448.849f, 99.9299f;
							
							case 80:
								return -473.7719f, -2675.318f, 19.2771f;
							
							case 81:
								return -727.3944f, -3494.9f, 23.1103f;
							
							case 82:
								return -1907.151f, -3034.577f, 39.2742f;
							
							case 83:
								return 416.2226f, -2912.834f, 5.0678f;
							
							case 84:
								return 414.82f, -2616.128f, 22.3517f;
							
							case 85:
								return 233.9356f, -1474.491f, 45.7138f;
							
							case 86:
								return 93.563f, -1189.746f, 51.969f;
							
							case 87:
								return -607.8086f, -2189.156f, 76.1713f;
							
							case 88:
								return -1106.939f, -2019.405f, 33.3166f;
							
							case 89:
								return -1210.83f, -1806.382f, 246.2572f;
							
							case 90:
								return -1309.448f, -1043.763f, 29.6876f;
							
							case 91:
								return -1618.367f, -827.8159f, 42.3072f;
							
							case 92:
								return -2257.555f, -9.0938f, 121.4433f;
							
							case 93:
								return -777.472f, -376.5067f, 72.7751f;
							
							case 94:
								return -1371.512f, -172.8742f, 99.1525f;
							
							case 95:
								return -1842.798f, 302.3257f, 105.5376f;
							
							case 96:
								return -1165.458f, 367.7476f, 95.3869f;
							
							case 97:
								return -3107.359f, 276.277f, 56.9633f;
							
							case 98:
								return -2548.786f, 1441.129f, 190.8976f;
							
							case 99:
								return -2644.523f, 1868.621f, 168.2627f;
							
							case 100:
								return -3029.234f, 1883.871f, 35.4705f;
							
							case 101:
								return -1119.207f, 1736.032f, 195.1095f;
							
							case 102:
								return -644.2039f, 1743.748f, 227.7433f;
							
							case 103:
								return -577.6026f, 2038.995f, 209.9244f;
							
							case 104:
								return -302.0078f, 1871.026f, 196.7599f;
							
							case 105:
								return 351.8685f, 1748.149f, 260.866f;
							
							case 106:
								return -11.935f, 1320.348f, 288.0058f;
							
							case 107:
								return 295.5885f, 753.7887f, 200.7135f;
							
							case 108:
								return 305.6451f, 501.4699f, 350.4832f;
							
							case 109:
								return 353.2237f, 58.5094f, 119.2648f;
							
							case 110:
								return 377.5104f, -695.2125f, 102.9432f;
							
							case 111:
								return 392.4507f, -1204.239f, 50f;
							
							case 112:
								return 397.6461f, -1929.781f, 43.4559f;
							
							case 113:
								return 470.8737f, -2451.431f, 30f;
							
							case 114:
								return -418.7521f, -2424.396f, 20.0582f;
							
							case 115:
								return -2440.527f, -1654.13f, 6.3248f;
							
							case 116:
								return -888.3994f, -2938.026f, 26.3869f;
							
							case 117:
								return -1374.637f, -2647.817f, 26.4425f;
							
							case 118:
								return -1082.177f, -620.1375f, 27.491f;
							
							case 119:
								return -1471.09f, 1324.141f, 193.4433f;
							
							default:
						}
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						switch (iParam3)
						{
							case 0:
								return -2303.138f, 218.8738f, 166.6017f;
							
							case 1:
								return -2994.291f, 39.7167f, 7.4636f;
							
							case 2:
								return -3410.2f, 967.5133f, 7.3517f;
							
							case 3:
								return -3041.96f, 1209.59f, 13.7743f;
							
							case 4:
								return -2502.529f, 756.2985f, 301.2459f;
							
							case 5:
								return -1352.546f, 120.6978f, 55.2388f;
							
							case 6:
								return -1729.21f, -193.1235f, 57.5038f;
							
							case 7:
								return -1635.4f, -1054.226f, 12.1522f;
							
							case 8:
								return -1268.607f, -1915.845f, 4.8616f;
							
							case 9:
								return -18.3427f, -1297.615f, 28.3575f;
							
							case 10:
								return -145.3585f, 930.7858f, 234.6711f;
							
							case 11:
								return -424.3762f, 1587.798f, 355.2649f;
							
							case 12:
								return -112.2256f, 354.4933f, 111.6961f;
							
							case 13:
								return 67.6185f, -673.5317f, 28.7056f;
							
							case 14:
								return 338.3054f, -1394.279f, 31.5093f;
							
							case 15:
								return -19.2884f, -1426.187f, 29.6575f;
							
							case 16:
								return -251.9772f, -2029.258f, 28.946f;
							
							case 17:
								return -432.7254f, -2440.489f, 5.0008f;
							
							case 18:
								return -956.3549f, -3053.302f, 12.9451f;
							
							case 19:
								return -1662.76f, -3177.918f, 12.9914f;
							
							case 20:
								return -457.7008f, -1507.786f, 12.0586f;
							
							case 21:
								return 188.8895f, 300.349f, 104.515f;
							
							case 22:
								return 3.4946f, -2452.885f, 13.4665f;
							
							case 23:
								return -966.3007f, -973.4243f, 2.876f;
							
							case 24:
								return -1536.435f, 868.5392f, 180.16f;
							
							case 25:
								return -1521.53f, 1493.765f, 110.5947f;
							
							case 26:
								return -1173.264f, -2037.82f, 12.776f;
							
							case 27:
								return -0.4394f, -1037.738f, 37.152f;
							
							case 28:
								return 137.7382f, -3092.8f, 4.8963f;
							
							case 29:
								return -1177.272f, -507.6518f, 34.5662f;
							
							case 30:
								return -575.4523f, -142.0386f, 36.2353f;
							
							case 31:
								return -723.2367f, 655.733f, 154.5475f;
							
							case 32:
								return -455.0906f, -999.9053f, 22.8657f;
							
							case 33:
								return -1133.934f, -1447.037f, 4f;
							
							case 34:
								return -231.0999f, -242.6378f, 49.0062f;
							
							case 35:
								return 69.8444f, -62.9348f, 67.8751f;
							
							case 36:
								return -1981.162f, -296.7468f, 47.1062f;
							
							case 37:
								return 98.9504f, -1979.664f, 19.6635f;
							
							case 38:
								return 324.168f, -2758.195f, 5.0028f;
							
							case 39:
								return 219.5919f, -2310.078f, 7.4018f;
							
							case 40:
								return -693.2001f, -592.6827f, 30.5552f;
							
							case 41:
								return -1044.535f, 500.5195f, 83.1617f;
							
							case 42:
								return -1792.464f, 395.7471f, 111.7909f;
							
							case 43:
								return -425.5935f, 1123.605f, 324.8547f;
							
							case 44:
								return -523.835f, -2902.068f, 5.0004f;
							
							case 45:
								return -1213.84f, -2724.547f, 12.9541f;
							
							case 46:
								return -656.7547f, -1708.686f, 23.8153f;
							
							case 47:
								return -1024.89f, 1012.239f, 159.6649f;
							
							case 48:
								return -850.8826f, 1708.716f, 193.9906f;
							
							case 49:
								return -2253.348f, 1324.29f, 291.0074f;
							
							case 50:
								return -876.7352f, -210.6213f, 38.2135f;
							
							case 51:
								return -309.9497f, -609.0406f, 32.5568f;
							
							case 52:
								return -743.9313f, -2283.372f, 12.06f;
							
							case 53:
								return -2971.731f, 584.4294f, 19.423f;
							
							case 54:
								return 288.4228f, -1601.137f, 30.2709f;
							
							case 55:
								return 97.6932f, -348.3357f, 41.3071f;
							
							case 56:
								return -1065.912f, -12.7356f, 49.4423f;
							
							case 57:
								return -388.1416f, -2283.256f, 6.6082f;
							
							case 58:
								return -1213.121f, -945.0177f, 1.1502f;
							
							case 59:
								return -1605.807f, -588.1375f, 32.1103f;
							
							case 60:
								return -1573.01f, 400.7232f, 106.194f;
							
							case 61:
								return -2751.19f, 1185.782f, 93.6924f;
							
							case 62:
								return 287.3323f, -3014.992f, 8.8106f;
							
							case 63:
								return -96.4867f, -2744.17f, 5.1062f;
							
							case 64:
								return -1350.788f, -1435.002f, 3.325f;
							
							case 65:
								return -156.4393f, -979.7114f, 20.2769f;
							
							case 66:
								return -671.3023f, 399.0416f, 101.68f;
							
							case 67:
								return 169.03f, 667.5479f, 205.7125f;
							
							case 68:
								return -726.8502f, -410.5149f, 34.5413f;
							
							case 69:
								return -671.4555f, -891.9421f, 23.4991f;
							
							case 70:
								return -190.4528f, 1299.355f, 302.9701f;
							
							case 71:
								return -1284.425f, -3403.299f, 12.9452f;
							
							case 72:
								return -825.6949f, -3337.779f, 12.9445f;
							
							case 73:
								return -1368.524f, -2335.062f, 12.9446f;
							
							case 74:
								return -1098.009f, -2415.526f, 12.9452f;
							
							case 75:
								return -1336.274f, -3044.103f, 12.9444f;
							
							case 76:
								return -821.012f, -1992.519f, 9.6439f;
							
							case 77:
								return -350.2334f, -2640.808f, 5.0003f;
							
							case 78:
								return -219.3889f, -2386.881f, 5.0014f;
							
							case 79:
								return 109.4531f, -2816.037f, 9.7899f;
							
							case 80:
								return 208.6273f, -3327.894f, 4.8177f;
							
							case 81:
								return 370.2768f, -2128.437f, 15.2365f;
							
							case 82:
								return -53.6978f, -1688.638f, 28.4917f;
							
							case 83:
								return -1009.052f, -1759.302f, 5.5498f;
							
							case 84:
								return -988.1508f, -2106.591f, 10.5382f;
							
							case 85:
								return -708.1929f, -1517.804f, 4.4121f;
							
							case 86:
								return -228.0423f, -1514.504f, 30.4622f;
							
							case 87:
								return 297.5852f, -1204.386f, 28.1985f;
							
							case 88:
								return 383.1396f, -904.1862f, 28.4376f;
							
							case 89:
								return -630.6f, -1071.2f, 21.7f;
							
							case 90:
								return -1207.432f, -1796.611f, 2.9086f;
							
							case 91:
								return -876.3531f, -1501.708f, 4.1775f;
							
							case 92:
								return -1271.531f, -1099.613f, 6.5852f;
							
							case 93:
								return -1730.83f, -725.0892f, 9.3941f;
							
							case 94:
								return -1431.005f, -271.0002f, 45.2077f;
							
							case 95:
								return -1966.816f, 182.3251f, 85.7706f;
							
							case 96:
								return -2293.777f, 371.4213f, 173.6017f;
							
							case 97:
								return -2156.688f, 1551.647f, 272.9088f;
							
							case 98:
								return -2780.149f, 1423.379f, 99.9284f;
							
							case 99:
								return -2587.936f, 1930.876f, 166.0052f;
							
							case 100:
								return -3017.571f, 1860.058f, 28.4173f;
							
							case 101:
								return 142.7543f, 1689.097f, 233.0739f;
							
							case 102:
								return 186.6585f, 1162.86f, 224.5946f;
							
							case 103:
								return -461.6094f, 640.4639f, 143.1886f;
							
							case 104:
								return -440.1514f, 184.2777f, 74.2476f;
							
							case 105:
								return -186.476f, 25.015f, 63.554f;
							
							case 106:
								return 26.7096f, -660.0318f, 30.6286f;
							
							case 107:
								return 156.6823f, -565.1396f, 42.893f;
							
							case 108:
								return -1834.908f, -1221.919f, 0.8054f;
							
							case 109:
								return -707.5134f, -1340.225f, -0.0558f;
							
							case 110:
								return -544.5794f, -2580.831f, 0.2096f;
							
							case 111:
								return 103.7708f, -2461.292f, 0.1193f;
							
							case 112:
								return -3046.133f, 1570.539f, -0.3275f;
							
							case 113:
								return -2241.345f, -530.6988f, -0.3275f;
							
							case 114:
								return 44.8316f, 844.4984f, 195.5816f;
							
							case 115:
								return -1894.231f, -2724.314f, -0.3275f;
							
							case 116:
								return -1029.441f, -1778.107f, -0.3275f;
							
							case 117:
								return -95.1061f, -2313.997f, 0.4963f;
							
							case 118:
								return -1546.054f, -1509.913f, 0.409f;
							
							case 119:
								return -1678.194f, -2238.986f, 0.9841f;
							
							default:
						}
						break;
					}
			}
			break;
		
		case 2:
			if (iParam1)
			{
				switch (iParam2)
				{
					case 0:
						switch (iParam3)
						{
							case 0:
								return -1874.714f, 2055.242f, 164.0655f;
							
							case 1:
								return -2398.244f, 2197.323f, 103.0324f;
							
							case 2:
								return -2470.967f, 2693.007f, 16.093f;
							
							case 3:
								return -1417.126f, 2634.235f, 3.8116f;
							
							case 4:
								return -1617.519f, 3185.984f, 52.4819f;
							
							case 5:
								return -1187.536f, 3851.927f, 510.4073f;
							
							case 6:
								return -1243.21f, 4536.333f, 198.2652f;
							
							case 7:
								return -766.5436f, 4335.334f, 181.1521f;
							
							case 8:
								return -515.496f, 4425.549f, 56.3238f;
							
							case 9:
								return -210.6103f, 3651.887f, 80.5153f;
							
							case 10:
								return 90.0834f, 3766.962f, 52.4048f;
							
							case 11:
								return 267.8927f, 2866.58f, 81.5228f;
							
							case 12:
								return 180.018f, 2272.227f, 109.032f;
							
							case 13:
								return -618.2112f, 2031.457f, 238.4183f;
							
							case 14:
								return -1185.328f, 2439.395f, 110.052f;
							
							case 15:
								return -2881.416f, 3363.437f, 44.4458f;
							
							case 16:
								return -2188.789f, 4395.888f, 71.8569f;
							
							case 17:
								return -2166.268f, 5204.997f, 32.4229f;
							
							case 18:
								return 239.3275f, 5576.022f, 610.5799f;
							
							case 19:
								return -549.4456f, 5308.46f, 118.8087f;
							
							case 20:
								return -686.6255f, 5674.634f, 64.1394f;
							
							case 21:
								return 25.1643f, 7643.369f, 32.4106f;
							
							case 22:
								return -162.8882f, 6422.088f, 46.3268f;
							
							case 23:
								return 269.3018f, 5863.51f, 425.1252f;
							
							case 24:
								return 158.6423f, 4622.624f, 213.8925f;
							
							case 25:
								return 31.6062f, 4328.141f, 56.7127f;
							
							case 26:
								return -959.6198f, 4843.202f, 317.838f;
							
							case 27:
								return -1179.401f, 4926.922f, 230.3542f;
							
							case 28:
								return -1801.77f, 4513.373f, 40.2242f;
							
							case 29:
								return -2146.721f, 3964.171f, 111.159f;
							
							case 30:
								return -668.1703f, 3607.985f, 305.8568f;
							
							case 31:
								return -409.327f, 2963.414f, 38.182f;
							
							case 32:
								return -290.9469f, 2533.475f, 92.1749f;
							
							case 33:
								return -3029.401f, 1883.96f, 35.4066f;
							
							case 34:
								return -2597.654f, 1922.071f, 179.5395f;
							
							case 35:
								return 80.7072f, 5032.946f, 490.6172f;
							
							case 36:
								return -899.8328f, 6042.451f, 53.0212f;
							
							case 37:
								return -1576.676f, 5160.763f, 26.8806f;
							
							case 38:
								return 145.5836f, 6866.114f, 38.7097f;
							
							case 39:
								return -50.5306f, 6236.916f, 79.3327f;
							
							case 40:
								return -368.4536f, 6104.72f, 53f;
							
							case 41:
								return -1599.971f, 2104.185f, 80.8163f;
							
							case 42:
								return -1626.487f, 2585.598f, 12.1104f;
							
							case 43:
								return -2064f, 3361.181f, 48.6443f;
							
							case 44:
								return -2357.318f, 3250.916f, 117.4892f;
							
							case 45:
								return -2684.946f, 2304.948f, 39.1557f;
							
							case 46:
								return -772.2781f, 4704.552f, 242.9476f;
							
							case 47:
								return 125.5518f, 3365.379f, 35.8003f;
							
							case 48:
								return -113.0094f, 2803.876f, 67.1096f;
							
							case 49:
								return -179.3538f, 1907.562f, 221.1006f;
							
							case 50:
								return -1235.554f, 1879.036f, 150.8745f;
							
							case 51:
								return 341.9869f, 3569.314f, 63.2875f;
							
							case 52:
								return 391.3682f, 5485.655f, 1000f;
							
							case 53:
								return 311.9317f, 6432.635f, 80.2925f;
							
							case 54:
								return -292.9588f, 5839.533f, 129.366f;
							
							case 55:
								return -1502.468f, 5984.955f, 34.7383f;
							
							case 56:
								return -3449.053f, 2645.437f, 55.2519f;
							
							case 57:
								return -1096.963f, 3225.607f, 147.7444f;
							
							case 58:
								return -278.2971f, 6637.778f, 45.611f;
							
							case 59:
								return 297.8872f, 4013.252f, 33.872f;
							
							case 60:
								return -271.6442f, 5586.137f, 250.6218f;
							
							case 61:
								return -821f, 5419.5f, 58.4f;
							
							case 62:
								return -1734.6f, 3968.5f, 302.8f;
							
							case 63:
								return -2664.1f, 2594f, 3.8f;
							
							case 64:
								return -897.3f, 2797.5f, 28.3f;
							
							case 65:
								return -1158.6f, 4625.5f, 156.7f;
							
							case 66:
								return 618f, 6426.7f, 103.2f;
							
							case 67:
								return 435.1f, 6772.9f, 18.9f;
							
							case 68:
								return -677.8f, 6035f, 27.3f;
							
							case 69:
								return -1445.2f, 5428.6f, 53.5f;
							
							case 70:
								return -384.2f, 4711.1f, 278.4f;
							
							case 71:
								return 911.8f, 4338.1f, 61.8f;
							
							case 72:
								return 518.5f, 5944.8f, 525.2f;
							
							case 73:
								return -1631.5f, 4741.2f, 66.9f;
							
							case 74:
								return -1352.5f, 4147.1f, 125.1f;
							
							case 75:
								return -1138.5f, 2807.2f, 250.4f;
							
							case 76:
								return -540.3f, 4190.5f, 203.6f;
							
							case 77:
								return -166.9f, 4250.2f, 61.7f;
							
							case 78:
								return -88.2f, 4579f, 135.4f;
							
							case 79:
								return -3051.213f, 4178.12f, 72.7681f;
							
							case 80:
								return -2606.26f, 2993.814f, 30.4219f;
							
							case 81:
								return -2302.76f, 2011.211f, 153.3448f;
							
							case 82:
								return -2254.314f, 1680.506f, 298.8981f;
							
							case 83:
								return -1955.917f, 1772.408f, 201.629f;
							
							case 84:
								return -1751.763f, 1998.548f, 129.1121f;
							
							case 85:
								return -1453.889f, 2069.22f, 65.2848f;
							
							case 86:
								return -1479.386f, 2405.98f, 37.5402f;
							
							case 87:
								return -1041.601f, 3963.552f, 344.3259f;
							
							case 88:
								return -775.5471f, 4048.385f, 310.1201f;
							
							case 89:
								return -883.0366f, 4411.045f, 29.2546f;
							
							case 90:
								return -1215.23f, 4370.065f, 38.5217f;
							
							case 91:
								return -1269.523f, 4386.938f, 1000f;
							
							case 92:
								return -1508.03f, 4446.546f, 59.4166f;
							
							case 93:
								return -1449.331f, 4602.479f, 336.1419f;
							
							case 94:
								return -1640.183f, 5440.63f, 43.1539f;
							
							case 95:
								return -891.0049f, 5157.28f, 187.01f;
							
							case 96:
								return 724.7438f, 5251.831f, 586.2138f;
							
							case 97:
								return 537.1121f, 4647.938f, 274.9371f;
							
							case 98:
								return 64.3661f, 4022.363f, 575.3698f;
							
							case 99:
								return 907.8411f, 3627.435f, 53.8748f;
							
							case 100:
								return 591.9018f, 2977.436f, 82.2499f;
							
							case 101:
								return 259.6137f, 1788.459f, 256.6769f;
							
							case 102:
								return -2092.081f, 2518.016f, 800f;
							
							case 103:
								return -2536.684f, 1678.45f, 196.0372f;
							
							case 104:
								return 52.1855f, 7343.64f, 518.5611f;
							
							case 105:
								return -521.5972f, 6960.141f, 172.8203f;
							
							case 106:
								return -684.2739f, 6467.878f, 165.8478f;
							
							case 107:
								return -1060.232f, 5711.063f, 333.8782f;
							
							case 108:
								return -1786.052f, 5471.512f, 614.6761f;
							
							case 109:
								return -1501.189f, 3295.095f, 245.8079f;
							
							case 110:
								return -2149.145f, 3521.295f, 186.103f;
							
							case 111:
								return 887.6612f, 5610.092f, 697.7338f;
							
							case 112:
								return 451.4696f, 5020.989f, 610.8222f;
							
							case 113:
								return 693.6552f, 4097.276f, 53.8927f;
							
							case 114:
								return -99.6831f, 3960.636f, 80.8691f;
							
							case 115:
								return -579.6645f, 3979.675f, 136.2872f;
							
							case 116:
								return -996.2939f, 4194.288f, 151.0646f;
							
							case 117:
								return -1542.398f, 2886.044f, 1000f;
							
							case 118:
								return -3004.988f, 2333.1f, 209.9484f;
							
							case 119:
								return -3622.204f, 4740.62f, 19.17f;
							
							default:
						}
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						switch (iParam3)
						{
							case 0:
								return -2200.786f, 3429.213f, 31.6018f;
							
							case 1:
								return -1873.915f, 2090.595f, 139.9944f;
							
							case 2:
								return -1674.252f, 2301.497f, 59.0047f;
							
							case 3:
								return -506.3776f, 4358.938f, 66.4342f;
							
							case 4:
								return -83.7414f, 4580.993f, 122.1646f;
							
							case 5:
								return -207.3853f, 3598.517f, 60.323f;
							
							case 6:
								return 233.0533f, 3547.927f, 30.2697f;
							
							case 7:
								return 93.7029f, 3597.86f, 38.7393f;
							
							case 8:
								return 327f, 2858f, 42.4386f;
							
							case 9:
								return 158.1294f, 3136.305f, 42.4573f;
							
							case 10:
								return -210.5036f, 2955.358f, 28.941f;
							
							case 11:
								return -288.922f, 2524.722f, 73.6685f;
							
							case 12:
								return -734.5254f, 5594.983f, 34.288f;
							
							case 13:
								return 88.2503f, 6368.129f, 30.2271f;
							
							case 14:
								return -344.4945f, 6242.846f, 30.4877f;
							
							case 15:
								return -267.3751f, 6639.444f, 6.3939f;
							
							case 16:
								return -1444.47f, 5418.419f, 22.2866f;
							
							case 17:
								return -1611.041f, 5258.685f, 2.9791f;
							
							case 18:
								return -1823.203f, 4464.67f, 37.4717f;
							
							case 19:
								return -2488.111f, 2740.839f, 1.8909f;
							
							case 20:
								return -1626.549f, 2587.924f, 1.6362f;
							
							case 21:
								return -1575.299f, 2105.205f, 66.0545f;
							
							case 22:
								return -543.6063f, 1983.754f, 126.0263f;
							
							case 23:
								return -563.8864f, 1886.811f, 122.0349f;
							
							case 24:
								return -592.4536f, 2076.64f, 130.3709f;
							
							case 25:
								return -2497.361f, 2307.194f, 33.1315f;
							
							case 26:
								return -2584.923f, 1931.11f, 166.3129f;
							
							case 27:
								return -1618.161f, 3184.126f, 31.8513f;
							
							case 28:
								return -913.2203f, 2562.701f, 57.2099f;
							
							case 29:
								return -1163.923f, 2408.993f, 92.402f;
							
							case 30:
								return 188.3494f, 2295.03f, 92.7443f;
							
							case 31:
								return -96.8265f, 2224.75f, 159.4986f;
							
							case 32:
								return -834.779f, 4178.558f, 214.3525f;
							
							case 33:
								return -790.3221f, 2901.125f, 18.2471f;
							
							case 34:
								return -799.6998f, 3478.014f, 172.9345f;
							
							case 35:
								return -1347.726f, 4127.416f, 61.6295f;
							
							case 36:
								return -1364.709f, 4848.779f, 144.9459f;
							
							case 37:
								return -2168.336f, 5186.728f, 14.9725f;
							
							case 38:
								return -987.1982f, 5075.115f, 186.5395f;
							
							case 39:
								return 231.926f, 5246.831f, 601.2042f;
							
							case 40:
								return -1.0985f, 5029.458f, 446.6905f;
							
							case 41:
								return -134.3454f, 4916.509f, 353.0826f;
							
							case 42:
								return -434.7882f, 4885.861f, 189.7331f;
							
							case 43:
								return -592.1419f, 5361.79f, 69.3186f;
							
							case 44:
								return 64.7121f, 7052.296f, 15.7854f;
							
							case 45:
								return -577.7616f, 5954.945f, 25.1362f;
							
							case 46:
								return -945.8056f, 4613.758f, 238.1628f;
							
							case 47:
								return -2228.817f, 4218.248f, 45.7951f;
							
							case 48:
								return -2493.361f, 4193.219f, 1.0754f;
							
							case 49:
								return -3073.088f, 3200.413f, 0.9527f;
							
							case 50:
								return 376.4925f, 6630.836f, 27.7626f;
							
							case 51:
								return -1692.925f, 4597.169f, 46.8227f;
							
							case 52:
								return -2587.798f, 3193.551f, 12.9622f;
							
							case 53:
								return -922.5162f, 6131.097f, 6.1891f;
							
							case 54:
								return -112.5477f, 7285.785f, 16.1674f;
							
							case 55:
								return -170.1744f, 6049.716f, 30.1726f;
							
							case 56:
								return 57.7188f, 6673.076f, 30.9499f;
							
							case 57:
								return -501.3606f, 5567.93f, 70.0852f;
							
							case 58:
								return -292.4363f, 5839.495f, 120.8191f;
							
							case 59:
								return -436.1143f, 5707.903f, 61.0179f;
							
							case 60:
								return -494.1112f, 5290.479f, 79.6187f;
							
							case 61:
								return -421.0542f, 5187.812f, 122.5195f;
							
							case 62:
								return -835.7191f, 5261.788f, 79.1947f;
							
							case 63:
								return -873.3408f, 4786.007f, 299.4599f;
							
							case 64:
								return -299.7797f, 4676.5f, 245.6817f;
							
							case 65:
								return -903.4214f, 5176.086f, 153.3577f;
							
							case 66:
								return -869.6852f, 5553.71f, 1.4216f;
							
							case 67:
								return -1210.241f, 5228.673f, 88.4579f;
							
							case 68:
								return -1224.511f, 3854.173f, 488.3926f;
							
							case 69:
								return -688.3312f, 3764.984f, 272.5302f;
							
							case 70:
								return -1829.375f, 3982.997f, 271.9911f;
							
							case 71:
								return -2432.337f, 3535.94f, 33.3233f;
							
							case 72:
								return -1440.526f, 5106.688f, 62.4016f;
							
							case 73:
								return -2258.899f, 3831.759f, 118.1093f;
							
							case 74:
								return -1577.494f, 5162.519f, 18.6627f;
							
							case 75:
								return -2046.334f, 4525.601f, 27.6239f;
							
							case 76:
								return -2189.855f, 4616.937f, 0.5382f;
							
							case 77:
								return 423.4926f, 5613.09f, 765.7494f;
							
							case 78:
								return 501.2704f, 5598.329f, 795.0286f;
							
							case 79:
								return 625.9471f, 5675.894f, 747.5628f;
							
							case 80:
								return -555.5328f, 5321.449f, 72.5996f;
							
							case 81:
								return -685.9285f, 5233.738f, 92.4703f;
							
							case 82:
								return -213.783f, 6348.989f, 30.5355f;
							
							case 83:
								return -391.0858f, 6341.175f, 25.425f;
							
							case 84:
								return 0.9189f, 3691.594f, 38.5039f;
							
							case 85:
								return -225.4021f, 3664.75f, 63.4125f;
							
							case 86:
								return 714.1616f, 4136.578f, 34.7842f;
							
							case 87:
								return 825.1304f, 4223.49f, 50.8188f;
							
							case 88:
								return 858.3134f, 4423.847f, 30.2196f;
							
							case 89:
								return 335.1393f, 4373.471f, 63.3434f;
							
							case 90:
								return -1474.287f, 2687.972f, 16.6437f;
							
							case 91:
								return -1183.146f, 4927.809f, 222.0748f;
							
							case 92:
								return -892.4783f, 4529.449f, 113.9803f;
							
							case 93:
								return 761.0254f, 6455.407f, 30.7286f;
							
							case 94:
								return 370.5299f, 5453.183f, 691.2834f;
							
							case 95:
								return -376.5987f, 3840.778f, 73.9626f;
							
							case 96:
								return -2077.635f, 3390.068f, 30.1962f;
							
							case 97:
								return -2317.722f, 3398.114f, 29.7812f;
							
							case 98:
								return -2686.153f, 3554.439f, 1.0289f;
							
							case 99:
								return -1869.387f, 4649.492f, 56.0019f;
							
							case 100:
								return -1854.183f, 4809.846f, 1.9984f;
							
							case 101:
								return -683.5417f, 5823.635f, 16.3313f;
							
							case 102:
								return -790.6581f, 5479.023f, 25.889f;
							
							case 103:
								return 482.4343f, 6486.61f, 29.0864f;
							
							case 104:
								return 183.3372f, 7008.858f, 11.2392f;
							
							case 105:
								return 50.2346f, 4325.231f, 43.3996f;
							
							case 106:
								return -28.0941f, 4430.794f, 57.1619f;
							
							case 107:
								return -187.3603f, 4019.421f, 30.6801f;
							
							case 108:
								return -1804.935f, 5315.242f, 0.8688f;
							
							case 109:
								return 81.2546f, 4050.058f, 29.4f;
							
							case 110:
								return -1191.056f, 4389.15f, 4.3f;
							
							case 111:
								return -2188.334f, 2590.943f, -0.4f;
							
							case 112:
								return -2825.633f, 2358.091f, 0.5703f;
							
							case 113:
								return -2047.696f, 4852.304f, 0.6241f;
							
							case 114:
								return -2664.615f, 2597.589f, -0.4f;
							
							case 115:
								return 271.9201f, 7512.879f, -0.5084f;
							
							case 116:
								return -215.5849f, 4284.967f, 29.5257f;
							
							case 117:
								return -2879.157f, 2879.604f, 0.4205f;
							
							case 118:
								return -920.2339f, 5871.843f, 0.4382f;
							
							case 119:
								return -34.7086f, 7618.572f, 0.4933f;
							
							default:
						}
						break;
					}
			}
			break;
		
		case 3:
			if (iParam1)
			{
				switch (iParam2)
				{
					case 0:
						switch (iParam3)
						{
							case 0:
								return 867.3339f, 4198.743f, 75f;
							
							case 1:
								return 1254.176f, 4848.075f, 247.0701f;
							
							case 2:
								return 1676.777f, 5140.256f, 160.2494f;
							
							case 3:
								return 1995.339f, 5021.67f, 68.695f;
							
							case 4:
								return 2599.952f, 5032.021f, 112.432f;
							
							case 5:
								return 2967.309f, 5197.417f, 148.5921f;
							
							case 6:
								return 2876.992f, 5911.252f, 378.2234f;
							
							case 7:
								return 3438.904f, 6144.417f, 10.0202f;
							
							case 8:
								return 3431.106f, 5174.187f, 46.1572f;
							
							case 9:
								return 4080.091f, 4476.533f, 17.0407f;
							
							case 10:
								return 3492.801f, 4619.894f, 65f;
							
							case 11:
								return 3378.036f, 4079.524f, 229.1767f;
							
							case 12:
								return 3944.403f, 3729.657f, 19.5046f;
							
							case 13:
								return 3556.383f, 3684.987f, 67.2346f;
							
							case 14:
								return 3296.121f, 3365.198f, 125f;
							
							case 15:
								return 3290f, 3140.437f, 275.7202f;
							
							case 16:
								return 2948.726f, 2791.748f, 48.6755f;
							
							case 17:
								return 1597.427f, 2599.171f, 95f;
							
							case 18:
								return 1397.009f, 2116.503f, 137.1597f;
							
							case 19:
								return 723.7358f, 2322.695f, 64.6875f;
							
							case 20:
								return 753.2642f, 2581.414f, 161f;
							
							case 21:
								return 564.4257f, 3392.354f, 96.1353f;
							
							case 22:
								return 1191.005f, 3400.265f, 78.9779f;
							
							case 23:
								return 1279.739f, 3100.26f, 53.8507f;
							
							case 24:
								return 1415.487f, 3833.477f, 52.6619f;
							
							case 25:
								return 1488.657f, 3946.224f, 305.2148f;
							
							case 26:
								return 2065.697f, 6451.615f, 149.8928f;
							
							case 27:
								return 2559.717f, 6155.792f, 171f;
							
							case 28:
								return 1502.546f, 6159.08f, 230.8224f;
							
							case 29:
								return 1163.891f, 5965.097f, 413.3012f;
							
							case 30:
								return 772.3428f, 5523.894f, 600f;
							
							case 31:
								return 501.8089f, 5604.274f, 1000.598f;
							
							case 32:
								return 1002.141f, 4786.271f, 185.7696f;
							
							case 33:
								return 587.414f, 5114.912f, 405f;
							
							case 34:
								return 1345.87f, 6384.963f, 52.4688f;
							
							case 35:
								return 754.4042f, 6466f, 49f;
							
							case 36:
								return 1042.216f, 6799.529f, 40.2945f;
							
							case 37:
								return 1779.115f, 5662.172f, 274f;
							
							case 38:
								return 2898.098f, 4327.457f, 107.9208f;
							
							case 39:
								return 2634.35f, 3661.461f, 111.1731f;
							
							case 40:
								return 2045.418f, 3429.524f, 56.3868f;
							
							case 41:
								return 1563.065f, 3572.822f, 41f;
							
							case 42:
								return 2276.492f, 1955.542f, 146.9525f;
							
							case 43:
								return 2379.747f, 2604.982f, 89.7836f;
							
							case 44:
								return 543.5116f, 3080.709f, 63f;
							
							case 45:
								return 2264.604f, 4455.955f, 62.2539f;
							
							case 46:
								return 2410.187f, 2908.336f, 373.9144f;
							
							case 47:
								return 3510.479f, 2569.052f, 16.1615f;
							
							case 48:
								return 3073.721f, 2084.079f, 30f;
							
							case 49:
								return 3319.34f, 2272.217f, 14.2949f;
							
							case 50:
								return 2822.12f, 4977.335f, 70f;
							
							case 51:
								return 1299.971f, 4219.281f, 41f;
							
							case 52:
								return 503.1913f, 4450.17f, 112f;
							
							case 53:
								return 2489.62f, 3760.053f, 53f;
							
							case 54:
								return 1824.499f, 2031.218f, 60.1953f;
							
							case 55:
								return 1153.765f, 2384.4f, 75.2003f;
							
							case 56:
								return 1339.664f, 2747.617f, 79.0765f;
							
							case 57:
								return 542.5154f, 2488.194f, 84.9932f;
							
							case 58:
								return 2767.542f, 2047.162f, 126.1494f;
							
							case 59:
								return 2061.36f, 3941.451f, 200f;
							
							case 60:
								return 873.5367f, 2867.737f, 73.5925f;
							
							case 61:
								return 1752.141f, 3052.542f, 78.6478f;
							
							case 62:
								return 2100.787f, 2339.885f, 133.921f;
							
							case 63:
								return 2738.826f, 3476.466f, 81.564f;
							
							case 64:
								return 2285.089f, 3289.129f, 86.2814f;
							
							case 65:
								return 1745.899f, 3756.127f, 53.8457f;
							
							case 66:
								return 2504.338f, 4418.758f, 55f;
							
							case 67:
								return 1552.003f, 2186.406f, 96f;
							
							case 68:
								return 2716.376f, 4132.656f, 63.7827f;
							
							case 69:
								return 3809.813f, 4462.08f, 36.1286f;
							
							case 70:
								return 3257.82f, 4308.541f, 140f;
							
							case 71:
								return 2268.876f, 5381.432f, 328.4639f;
							
							case 72:
								return 2236.389f, 5604.683f, 71.034f;
							
							case 73:
								return 1986.657f, 6201.739f, 66.4804f;
							
							case 74:
								return 3356.059f, 5696.29f, 20f;
							
							case 75:
								return 2457.263f, 6684.452f, 63.14f;
							
							case 76:
								return 1914.983f, 6702.233f, 14.7976f;
							
							case 77:
								return 2149.811f, 3844.999f, 88.0922f;
							
							case 78:
								return 1880.169f, 4244.354f, 80.3363f;
							
							case 79:
								return 1791.897f, 4595.955f, 48.6224f;
							
							case 80:
								return 1181.133f, 5151.417f, 772.3138f;
							
							case 81:
								return 431.2495f, 4768.536f, 665.041f;
							
							case 82:
								return 1410.651f, 6569.377f, 26.5039f;
							
							case 83:
								return 1522.466f, 6617.973f, 8f;
							
							case 84:
								return 2316.162f, 6378.738f, 143.7605f;
							
							case 85:
								return 3127.772f, 5566.866f, 317.7646f;
							
							case 86:
								return 3684.367f, 4916.152f, 618.67f;
							
							case 87:
								return 3941.761f, 4652.369f, 92.7624f;
							
							case 88:
								return 3900.581f, 4262.104f, 887.18f;
							
							case 89:
								return 3535.166f, 3778.242f, 46.4187f;
							
							case 90:
								return 3638.854f, 3108.953f, 8.7037f;
							
							case 91:
								return 931.8565f, 2446.375f, 59f;
							
							case 92:
								return 1052.214f, 2277.729f, 95.5547f;
							
							case 93:
								return 411.0964f, 4298.822f, 40.8556f;
							
							case 94:
								return 970.339f, 5647.13f, 650.7467f;
							
							case 95:
								return 2137.105f, 4785.519f, 59.9326f;
							
							case 96:
								return 2333.533f, 4801.554f, 467.9726f;
							
							case 97:
								return 2800.744f, 4745.392f, 370.3547f;
							
							case 98:
								return 2721.061f, 1556.416f, 101.1161f;
							
							case 99:
								return 1855.284f, 1600.665f, 116.8989f;
							
							case 100:
								return 1623.469f, 1518.122f, 294.3194f;
							
							case 101:
								return 923.4011f, 1635.348f, 218.3212f;
							
							case 102:
								return 829.6124f, 1892.871f, 135.5203f;
							
							case 103:
								return 1294.051f, 5675.865f, 472.5645f;
							
							case 104:
								return 1716.85f, 6416.637f, 81.5075f;
							
							case 105:
								return 2140.929f, 5892.89f, 161.9607f;
							
							case 106:
								return 1604.4f, 5793.905f, 429.8526f;
							
							case 107:
								return 1589.65f, 4160.215f, 883.122f;
							
							case 108:
								return 2191.156f, 4208.336f, 477.8802f;
							
							case 109:
								return 1427.64f, 4515.944f, 85.3721f;
							
							case 110:
								return 1206.398f, 4546.814f, 83.0875f;
							
							case 111:
								return 222.2962f, 4746.207f, 280.8666f;
							
							case 112:
								return 287.655f, 5361.114f, 659.2646f;
							
							case 113:
								return 194.6948f, 7393.709f, 1000f;
							
							case 114:
								return 469.5136f, 6745.105f, 14.1624f;
							
							case 115:
								return 537.5068f, 6663.253f, 447.8182f;
							
							case 116:
								return 3227.793f, 6940.11f, 111.4631f;
							
							case 117:
								return 3614.231f, 5883.145f, 9.5207f;
							
							case 118:
								return 3010.254f, 5697.739f, 463.4349f;
							
							case 119:
								return 2874.324f, 6196.489f, 1000f;
							
							default:
						}
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						switch (iParam3)
						{
							case 0:
								return 1581.963f, 2200.244f, 78.0226f;
							
							case 1:
								return 1104.104f, 2399.396f, 53.529f;
							
							case 2:
								return 1089.489f, 2132.943f, 57.0757f;
							
							case 3:
								return 932.5687f, 2434.264f, 49.6778f;
							
							case 4:
								return 586.3744f, 2935.313f, 39.9577f;
							
							case 5:
								return 437.5278f, 3537.285f, 32.3159f;
							
							case 6:
								return 917.2156f, 3648.117f, 35.1053f;
							
							case 7:
								return 1528.585f, 3916.301f, 30.6709f;
							
							case 8:
								return 1924.4f, 3468.064f, 50.6772f;
							
							case 9:
								return 2482.272f, 3761.54f, 40.6483f;
							
							case 10:
								return 2722.307f, 2895.323f, 46.873f;
							
							case 11:
								return 3021.258f, 2881.75f, 85.959f;
							
							case 12:
								return 2096.643f, 2504.604f, 89.6423f;
							
							case 13:
								return 2974.657f, 3485.959f, 70.4429f;
							
							case 14:
								return 3390.08f, 3704.603f, 34.9975f;
							
							case 15:
								return 2908.214f, 4342.968f, 49.3031f;
							
							case 16:
								return 1796.101f, 4920.626f, 47.3851f;
							
							case 17:
								return 2241.987f, 5382.81f, 144.0017f;
							
							case 18:
								return 2218.899f, 5946.263f, 49.634f;
							
							case 19:
								return 1601.463f, 6624.76f, 14.7707f;
							
							case 20:
								return 1406.928f, 6568.621f, 19.3763f;
							
							case 21:
								return 439.5467f, 6459.866f, 34.8699f;
							
							case 22:
								return 1503.687f, 6360.855f, 15.6193f;
							
							case 23:
								return 3316.647f, 5190.359f, 17.4152f;
							
							case 24:
								return 3632.89f, 5003.482f, 11.6053f;
							
							case 25:
								return 3057.659f, 5064.144f, 17.7153f;
							
							case 26:
								return 2822.534f, 4978.232f, 62.4826f;
							
							case 27:
								return 3930.095f, 4399.015f, 15.6116f;
							
							case 28:
								return 3859.284f, 4226.905f, 2.7151f;
							
							case 29:
								return 3692.684f, 4570.595f, 24.1191f;
							
							case 30:
								return 1830.916f, 2542.005f, 44.8856f;
							
							case 31:
								return 2424.308f, 3131.437f, 47.2055f;
							
							case 32:
								return 1340.228f, 2988.934f, 45.0809f;
							
							case 33:
								return 817.1245f, 3379.468f, 76.9467f;
							
							case 34:
								return 563.2202f, 2456.984f, 58.1331f;
							
							case 35:
								return 2041.713f, 2002.479f, 84.9881f;
							
							case 36:
								return 2431.854f, 1986.869f, 82.1812f;
							
							case 37:
								return 1190.872f, 3401.189f, 67.3338f;
							
							case 38:
								return 1943.983f, 3817.853f, 31.0619f;
							
							case 39:
								return 1977.679f, 3054.874f, 49.3235f;
							
							case 40:
								return 452.5827f, 5587.175f, 780.1891f;
							
							case 41:
								return 807.1406f, 5701.082f, 696.9146f;
							
							case 42:
								return 1600.868f, 5804.83f, 414.5815f;
							
							case 43:
								return 1412.016f, 5558.528f, 459.5185f;
							
							case 44:
								return 2279.983f, 5788.728f, 154.1637f;
							
							case 45:
								return 2346.173f, 4997.547f, 41.5868f;
							
							case 46:
								return 2391.918f, 4296.647f, 34.1954f;
							
							case 47:
								return 1364.943f, 4385.975f, 43.3491f;
							
							case 48:
								return 998.6568f, 4453.989f, 59.924f;
							
							case 49:
								return 1058.949f, 4219.405f, 34.273f;
							
							case 50:
								return 870.7486f, 6627.962f, 1.1131f;
							
							case 51:
								return 2721.632f, 4513.5f, 41.1966f;
							
							case 52:
								return 1219.444f, 2744.531f, 37.0054f;
							
							case 53:
								return 2564.32f, 2578.493f, 36.9367f;
							
							case 54:
								return 2827.744f, 5963.866f, 350.6364f;
							
							case 55:
								return 2946.397f, 5326.474f, 100.269f;
							
							case 56:
								return 2211.154f, 3593.324f, 55.1756f;
							
							case 57:
								return 3079.837f, 6027.145f, 129.2854f;
							
							case 58:
								return 3345.3f, 5555.332f, 17.907f;
							
							case 59:
								return 528.5965f, 3092.785f, 39.4652f;
							
							case 60:
								return 2184.891f, 3724.368f, 37.4901f;
							
							case 61:
								return 1471.091f, 4948.712f, 75.0594f;
							
							case 62:
								return 2713.996f, 4141.762f, 42.8723f;
							
							case 63:
								return 2476.558f, 5783.607f, 68.702f;
							
							case 64:
								return 2647.75f, 3281.402f, 54.2127f;
							
							case 65:
								return 2210.976f, 5610.793f, 52.8602f;
							
							case 66:
								return 2898.328f, 2389.586f, 170.4231f;
							
							case 67:
								return 2728.33f, 2616.292f, 95.3074f;
							
							case 68:
								return 1844.478f, 4591.953f, 29.6629f;
							
							case 69:
								return 2432.128f, 4616.881f, 28.1137f;
							
							case 70:
								return 2574.294f, 4653.86f, 33.0768f;
							
							case 71:
								return 1574.009f, 3591.066f, 34.3615f;
							
							case 72:
								return 2008.265f, 4986.431f, 40.3378f;
							
							case 73:
								return 1975.059f, 5182.086f, 46.8906f;
							
							case 74:
								return 1955.895f, 4620.182f, 39.6384f;
							
							case 75:
								return 2279.756f, 4846.217f, 39.2283f;
							
							case 76:
								return 2418.292f, 4784.674f, 33.6784f;
							
							case 77:
								return 2005.109f, 3765.983f, 31.1808f;
							
							case 78:
								return 1719.677f, 3692.743f, 33.513f;
							
							case 79:
								return 1530.711f, 3076.231f, 39.9815f;
							
							case 80:
								return 1686.366f, 3301.007f, 40.1368f;
							
							case 81:
								return 3481.603f, 3740.488f, 35.6427f;
							
							case 82:
								return 2392.425f, 3334.924f, 46.3672f;
							
							case 83:
								return 2192.154f, 3168.942f, 50.5572f;
							
							case 84:
								return 2354.496f, 2577.063f, 45.6677f;
							
							case 85:
								return 640.7736f, 2777.938f, 40.9601f;
							
							case 86:
								return 2768.528f, 1701.819f, 23.6943f;
							
							case 87:
								return 3239.663f, 3501.223f, 67.723f;
							
							case 88:
								return 2672.952f, 3516.45f, 51.712f;
							
							case 89:
								return 2619.962f, 3661.864f, 100.2808f;
							
							case 90:
								return 2437.504f, 4069.23f, 37.0001f;
							
							case 91:
								return 1685.598f, 6435.691f, 31.3515f;
							
							case 92:
								return 1417.653f, 3818.394f, 31.1351f;
							
							case 93:
								return 3300.7f, 5941.647f, 93.3217f;
							
							case 94:
								return 870.0084f, 2870.564f, 55.9249f;
							
							case 95:
								return 1352.413f, 6401.655f, 32.4101f;
							
							case 96:
								return 1960.858f, 5376.274f, 185.2074f;
							
							case 97:
								return 1974.847f, 6219.958f, 41.2546f;
							
							case 98:
								return 3684.152f, 3795.969f, 15.0641f;
							
							case 99:
								return 2625.796f, 2809.979f, 32.439f;
							
							case 100:
								return 1302.932f, 4234.541f, 32.9137f;
							
							case 101:
								return 577.5187f, 4169.561f, 37.8946f;
							
							case 102:
								return 1069.311f, 2259.363f, 43.4741f;
							
							case 103:
								return 1381.487f, 3633.717f, 34.0073f;
							
							case 104:
								return 3046.249f, 6219.229f, 111.0105f;
							
							case 105:
								return 985.3563f, 5642.3f, 627.7075f;
							
							case 106:
								return 2504.378f, 5178.088f, 67.6632f;
							
							case 107:
								return 2537.341f, 4476.488f, 36.1789f;
							
							case 108:
								return 1291.73f, 4112.564f, 29.6645f;
							
							case 109:
								return 2176.232f, 4605.335f, 29.194f;
							
							case 110:
								return 3456.624f, 5135.376f, -0.3837f;
							
							case 111:
								return 4054.226f, 4518.386f, 0.4f;
							
							case 112:
								return 1074.313f, 6738.594f, 1.3817f;
							
							case 113:
								return 409.7385f, 4290.737f, 29.5f;
							
							case 114:
								return 2551.275f, 6151.57f, 161.1609f;
							
							case 115:
								return 3646.335f, 2977.049f, 0.6928f;
							
							case 116:
								return 1938.372f, 4287.003f, 29.6693f;
							
							case 117:
								return 3630.215f, 5625.841f, 1.2201f;
							
							case 118:
								return 1582.613f, 6753.431f, 0.4436f;
							
							case 119:
								return 3449.314f, 2677.52f, 0.0895f;
							
							default:
						}
						break;
					}
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_83(auto uParam0)
{
	Vector3 vVar0;
	int iVar3;
	
	vVar0.x = 415;
	vVar0.y = player_id();
	vVar0.z = uParam0;
	iVar3 = func_84(1, 1);
	if (!iVar3 == 0)
	{
		trigger_script_event(1, &vVar0, 3, iVar3);
	}
}

auto func_84(int iParam0, int iParam1)
{
	auto uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = false;
	while (iVar1 < 32)
	{
		iVar2 = int_to_playerindex(iVar1);
		if (func_13(iVar2, 0, 0))
		{
			if (iVar2 != player_id() || iParam0)
			{
				if (iParam1)
				{
					GAMEPLAY::SET_BIT(&uVar0, iVar1);
				}
				else if (!func_73(iVar2, 0))
				{
					GAMEPLAY::SET_BIT(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_85(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_86()
{
	return get_random_int_in_range(0, true);
}

int func_87()
{
	if (func_89(Local_818.f_712))
	{
		return false;
	}
	else if (func_88(Local_818.f_712))
	{
		return true;
	}
	return get_random_int_in_range(0, 2) == 1;
}

int func_88(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return (Global_262145.f_9076 || Global_262145.f_9068);
		
		case 1:
			return (Global_262145.f_9075 || Global_262145.f_9068);
		
		case 2:
			return (Global_262145.f_9073 || Global_262145.f_9068);
		
		case 3:
			return (Global_262145.f_9074 || Global_262145.f_9068);
		
		default:
	}
	return 0;
}

int func_89(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return (Global_262145.f_9072 || Global_262145.f_9067);
		
		case 1:
			return (Global_262145.f_9071 || Global_262145.f_9067);
		
		case 2:
			return (Global_262145.f_9069 || Global_262145.f_9067);
		
		case 3:
			return (Global_262145.f_9070 || Global_262145.f_9067);
		
		default:
	}
	return 0;
}

int func_90()
{
	var[] uVar0 = new var[4];
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	iLocal_382 = 1;
	switch (iLocal_382)
	{
		case 0:
			return get_random_int_in_range(0, 4);
			break;
		
		case 1:
			iVar5 = func_91(&uVar0);
			iVar6 = get_random_int_in_range(0, iVar5);
			iVar7 = 0;
			while (iVar7 < 4)
			{
				if (iVar6 >= iVar8 && iVar6 < uVar0[iVar7] + iVar8)
				{
					return iVar7;
				}
				iVar8 += uVar0[iVar7];
				iVar7++;
			}
			break;
		
		case 2:
			break;
		
		case 3:
			break;
	}
	return get_random_int_in_range(0, 4);
}

int func_91(auto uParam0)
{
	int iVar0;
	int iVar1;
	Vector3 vVar2;
	Vector3 vVar5;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	iVar8 = true;
	iVar0 = false;
	while (iVar0 < _network_get_num_participants_host())
	{
		if (network_is_participant_active(int_to_participantindex(iVar0)))
		{
			iVar10 = network_get_player_index(int_to_participantindex(iVar0));
			if (func_13(iVar10, 1, 1))
			{
				iVar11 = get_player_ped(iVar10);
				if (!PED::IS_PED_INJURED(iVar11))
				{
					iVar9 = 0;
					while (iVar9 < 4)
					{
						if (!func_93(iVar9))
						{
							if (func_92(iVar9, &vVar2, &vVar5))
							{
								if (is_entity_in_area(iVar11, vVar2, vVar5, 0, 0, 0))
								{
									iVar8 = false;
									*uParam0[iVar9]++;
									iVar1++;
								}
							}
						}
						iVar9++;
					}
				}
			}
		}
		iVar0++;
	}
	if (iVar8)
	{
		iVar9 = 0;
		while (iVar9 < 4)
		{
			if (!func_93(iVar9))
			{
				*uParam0[iVar9] = 1;
			}
			iVar9++;
		}
	}
	return iVar1;
}

bool func_92(int iParam0, auto uParam1, auto uParam2)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = {283f, -3946f, 0f};
			*uParam2 = {4500f, 1924f, 0f};
			return true;
		
		case 1:
			*uParam1 = {-3747f, -3946f, 0f};
			*uParam2 = {550f, 1868f, 0f};
			return true;
		
		case 2:
			*uParam1 = {-3747f, 1540f, 0f};
			*uParam2 = {452.5f, 8022f, 0f};
			return true;
		
		case 3:
			*uParam1 = {268f, 1946f, 0f};
			*uParam2 = {4500f, 8022f, 0f};
			return true;
		
		default:
	}
	return false;
}

auto func_93(int iParam0)
{
	return (func_89(iParam0) && func_88(iParam0));
}

auto func_94()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = false;
	while (iVar0 < _network_get_num_participants_host())
	{
		iVar2 = int_to_participantindex(iVar0);
		if (network_is_participant_active(iVar2))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 >= Global_262145.f_9081)
	{
		return Global_262145.f_8967;
	}
	if (iVar1 >= Global_262145.f_9080)
	{
		return Global_262145.f_8966;
	}
	if (iVar1 >= Global_262145.f_9079)
	{
		return Global_262145.f_8152;
	}
	return Global_262145.f_8152;
}

void func_95()
{
	int iVar0;
	
	if (func_32())
	{
		iVar0 = false;
		while (iVar0 < 10)
		{
			if (Local_818.f_713[iVar0] == participant_id_to_int())
			{
				if (func_96(iVar0))
				{
					if (!GAMEPLAY::IS_BIT_SET(Local_3612[participant_id_to_int() /*5*/].f_1, iVar0))
					{
						GAMEPLAY::SET_BIT(&(Local_3612[participant_id_to_int() /*5*/].f_1), iVar0);
					}
				}
				else if (GAMEPLAY::IS_BIT_SET(Local_3612[participant_id_to_int() /*5*/].f_1, iVar0))
				{
					GAMEPLAY::CLEAR_BIT(&(Local_3612[participant_id_to_int() /*5*/].f_1), iVar0);
				}
			}
			else if (GAMEPLAY::IS_BIT_SET(Local_3612[participant_id_to_int() /*5*/].f_1, iVar0))
			{
				GAMEPLAY::CLEAR_BIT(&(Local_3612[participant_id_to_int() /*5*/].f_1), iVar0);
			}
			iVar0++;
		}
	}
}

bool func_96(int iParam0)
{
	Vector3 vVar0;
	auto uVar3;
	
	if (func_30(iParam0, &vVar0, &uVar3))
	{
		if (func_97(vVar0, 10f, 1065353216, 5f, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_97(Vector3 vParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, float fParam12, int iParam13, float fParam14, int iParam15, int iParam16)
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
		if (func_100(vParam0, fParam14, 1, 1, iParam15, iParam17, 0, iParam15))
		{
			return false;
		}
	}
	Global_2404956++;
	if (iParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_98(vParam0, fParam6, iParam7, iParam9, fParam10, iParam11, iParam12, fParam16, iParam17))
			{
				return false;
			}
		}
	}
	Global_2404956++;
	return true;
}

bool func_98(Vector3 vParam0, float fParam1, int iParam2, int iParam3, float fParam4, int iParam5, int iParam6, float fParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !iParam7)
	{
		if (func_13(player_id(), 1, 1))
		{
			if (!is_screen_faded_out())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(func_29(player_id()), vParam0, 1) <= fVar2 + fParam3)
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
		if (func_13(iVar1, 1, 1))
		{
			if (!func_73(iVar1, 0) && _0x9DE986FC9A87C474(player_id(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != player_id()))
				{
					if ((func_99(iVar1) || !iParam10) && !Global_2418472[iVar1 /*313*/].f_255)
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
								if (INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(func_29(iVar1), vParam0, 1) <= fVar2 + fParam3)
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
							if (INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(func_29(iVar1), vParam0, 1) <= fVar2 + fParam3)
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

bool func_99(int iParam0)
{
	if (is_entity_visible_to_script(get_player_ped(iParam0)) || Global_2418472[iParam0 /*313*/].f_241)
	{
		return true;
	}
	return false;
}

bool func_100(Vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, auto uParam7)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && player_id() != iVar1) || iParam8 == 0)
		{
			if (func_13(iVar1, iParam4, iParam5))
			{
				if (_0x9DE986FC9A87C474(player_id(), iVar1))
				{
					if (!iParam7 || (!PED::IS_PED_INJURED(get_player_ped(iVar1)) && func_99(iVar1)))
					{
						if ((!iParam6 || (iParam6 == 1 && get_player_team(player_id()) != get_player_team(iVar1))) || get_player_team(player_id()) == -1)
						{
							if (((get_player_team(player_id()) == -1 && uParam9) && iParam6) && func_101(iVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(get_player_ped(iVar1)))
							{
								if (INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(func_29(iVar1), vParam0, 1) < fParam3)
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

bool func_101(int iParam0)
{
	if (func_104(player_id(), iParam0))
	{
		return true;
	}
	Global_2459440 = {func_103(iParam0)};
	if (network_is_friend(&Global_2459440))
	{
		return true;
	}
	if (func_102(player_id(), iParam0))
	{
		return true;
	}
	return false;
}

bool func_102(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_62(iParam0);
	if (!iVar0 == func_75())
	{
		if (iVar0 == func_62(iParam1))
		{
			return true;
		}
	}
	return false;
}

struct<13> func_103(int iParam0)
{
	struct<13> Var0;
	
	network_handle_from_player(iParam0, &Var0, 13);
	return Var0;
}

bool func_104(int iParam0, int iParam1)
{
	if (_network_player_is_in_clan())
	{
		Global_2459440 = {func_103(iParam0)};
		Global_2459453 = {func_103(iParam1)};
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

void func_105()
{
	int iVar0;
	int iVar1;
	
	func_506();
	if (func_504())
	{
		func_401();
	}
	if (func_400(player_id()) || func_399(player_id()))
	{
		func_398();
	}
	if ((!func_6(player_id()) && !func_397(0)) && !func_397(func_396(132)))
	{
		if (func_374())
		{
			if (GAMEPLAY::IS_BIT_SET(iLocal_100, 3))
			{
				GAMEPLAY::CLEAR_BIT(&iLocal_100, 3);
			}
			switch (Local_3612[participant_id_to_int() /*5*/].f_3)
			{
				case 0:
					if (Local_818.f_8 == 1)
					{
						func_373(1);
						func_372(1);
					}
					else if (Local_818.f_8 >= 2)
					{
						func_372(1);
					}
					break;
				
				case 1:
					func_368(6);
					if (Local_818.f_8 >= 2)
					{
						func_372(2);
					}
					func_368(2);
					func_366(0);
					func_364(Global_262145.f_9065 - func_365(&(Local_818.f_667), 0, 0));
					func_361(func_363(Global_262145.f_9065 - func_365(&(Local_818.f_667), 0, 0), 0), func_362(-1));
					func_345();
					break;
				
				case 2:
					if (Local_818.f_8 > 2)
					{
						func_373(0);
						func_328(132, 1065353216, 1065353216, 0, 0, 0, 0);
						if (!func_6(player_id()))
						{
							func_327();
						}
						else
						{
							GAMEPLAY::SET_BIT(&iLocal_100, 5);
						}
						if (Local_818.f_710)
						{
							func_326();
						}
						if (Local_818.f_707)
						{
							Global_2460486.f_4645 = 1;
						}
						else
						{
							Global_2460486.f_4645 = 0;
						}
						func_325();
						if (!func_6(player_id()))
						{
							if (func_32())
							{
								func_311(678f, 794f, 206f, 8f, 0);
								func_311(1911.3f, 4714.6f, 41.1f, 8f, 0);
								func_311(688.5021f, 735.4581f, 181.296f, 8f, 0);
							}
						}
						func_372(3);
					}
					break;
				
				case 3:
					if (Local_818.f_8 > 3)
					{
						func_372(4);
					}
					else
					{
						if (!iLocal_782)
						{
							if (func_310())
							{
								iLocal_782 = 1;
							}
						}
						iVar1 = 0;
						while (iVar1 < Local_818.f_709)
						{
							if (uLocal_232[iVar1] || iLocal_782)
							{
								func_270(iVar1);
							}
							iVar1++;
						}
						iVar0 = 0;
						while (iVar0 < 3)
						{
							uLocal_232[iLocal_96] = func_269(iLocal_96);
							uLocal_101[iLocal_96] = func_267(iLocal_96);
							if (!uLocal_101[iLocal_96])
							{
								func_270(iLocal_96);
							}
							iLocal_96++;
							if (iLocal_96 >= Local_818.f_709)
							{
								iLocal_96 = 0;
							}
							iVar0++;
						}
						func_366(0);
						func_368(4);
						func_368(5);
						if (func_265(0) && !func_264(0))
						{
							func_263();
						}
						if ((!func_262(player_id()) && !is_pause_menu_active()) && !is_help_message_on_screen())
						{
							func_261();
						}
						func_260();
					}
					func_257();
					func_256();
					func_327();
					func_238();
					func_345();
					break;
				
				case 4:
					func_155();
					func_144();
					func_143();
					func_366(1);
					func_142();
					func_238();
					if (func_130(&uLocal_784, !GAMEPLAY::IS_BIT_SET(Local_818.f_2, 2)) || GAMEPLAY::IS_BIT_SET(Local_818.f_2, 2))
					{
						if (func_32())
						{
							func_372(5);
						}
						else
						{
							func_372(6);
						}
					}
					break;
				
				case 5:
					if (Local_818.f_8 > 5)
					{
						func_372(6);
					}
					break;
				
				case 6:
					break;
			}
		}
		else
		{
			func_125();
		}
	}
	else
	{
		func_398();
		func_125();
	}
	func_112();
	func_107();
	func_106();
}

void func_106()
{
	struct<2> Var0;
	int iVar2;
	
	if (func_32())
	{
		Var0 = {Local_818.f_729[iLocal_383 /*2*/]};
		if (network_does_network_id_exist(Var0.f_1))
		{
			iVar2 = net_to_veh(Var0.f_1);
			if (network_has_control_of_entity(iVar2))
			{
				if (!is_vehicle_driveable(iVar2, 0))
				{
					set_vehicle_as_no_longer_needed(&iVar2);
				}
			}
		}
		iLocal_383++;
		if (iLocal_383 >= 10)
		{
			iLocal_383 = 0;
			iLocal_815 = iLocal_814;
			iLocal_814 = 0;
		}
	}
}

void func_107()
{
	if (Local_818.f_8 == 5)
	{
		if (func_36(&(Local_818.f_669)))
		{
			if (network_does_network_id_exist(Local_818.f_729[iLocal_383 /*2*/].f_1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(net_to_veh(Local_818.f_729[iLocal_383 /*2*/].f_1), 0))
				{
					if (!GAMEPLAY::IS_BIT_SET(iLocal_802, iLocal_383))
					{
						GAMEPLAY::SET_BIT(&iLocal_802, iLocal_383);
						iLocal_803[iLocal_383] = AUDIO::GET_SOUND_ID();
						play_sound_from_entity(iLocal_803[iLocal_383], "Explosion_Countdown", net_to_veh(Local_818.f_729[iLocal_383 /*2*/].f_1), "GTAO_FM_Events_Soundset", 0, 0);
						set_variable_on_sound(iLocal_803[iLocal_383], "Time", 30f);
					}
					if (30000 - func_365(&(Local_818.f_669), 0, 0) >= 0)
					{
						if (is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), net_to_veh(Local_818.f_729[iLocal_383 /*2*/].f_1), 0))
						{
							func_368(3);
							iLocal_814 = 1;
						}
					}
					else if (network_has_control_of_network_id(Local_818.f_729[iLocal_383 /*2*/].f_1))
					{
						clear_entity_last_damage_entity(net_to_veh(Local_818.f_729[iLocal_383 /*2*/].f_1));
						network_explode_vehicle(net_to_veh(Local_818.f_729[iLocal_383 /*2*/].f_1), 1, 0, -1);
					}
				}
				else if (GAMEPLAY::IS_BIT_SET(iLocal_802, iLocal_383) && !has_sound_finished(iLocal_803[iLocal_383]))
				{
					stop_sound(iLocal_803[iLocal_383]);
				}
			}
			if (iLocal_815)
			{
				if (!func_71(player_id()))
				{
					func_109(func_363(30000 - func_365(&(Local_818.f_669), 0, 0), 0), "HTV_DESTR", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0);
					func_108();
				}
			}
		}
	}
}

void func_108()
{
	Global_1339940.f_941 = 1;
}

void func_109(auto uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = false;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_111(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1339940.f_1 = 1;
		func_110(7, iVar0);
		Global_1339940.f_4109[iVar0] = uParam0;
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

void func_110(int iParam0, int iParam1)
{
	GAMEPLAY::SET_BIT(&(Global_1339940.f_4726[iParam0]), iParam1);
}

int func_111(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_1339940.f_4726[iParam0], iParam1);
}

void func_112()
{
	char* sVar0;
	
	if (((func_13(player_id(), 1, 1) && !func_6(player_id())) && !func_399(player_id())) && func_374())
	{
		if (Local_3612[participant_id_to_int() /*5*/].f_3 == 1)
		{
			if (Local_818.f_707)
			{
				sVar0 = "CPC_TILELA";
			}
			else
			{
				sVar0 = "CPC_TILEL";
			}
			if (func_32() && !is_ped_in_flying_vehicle(PLAYER::PLAYER_PED_ID()))
			{
				func_113("CPC_PREPAIR", sVar0, func_124(), 0);
			}
			else
			{
				func_113("CPC_PREP", sVar0, func_124(), 0);
			}
		}
		else
		{
			func_325();
		}
	}
	else
	{
		func_325();
	}
}

bool func_113(char* sParam0, char* sParam1, char* sParam2, int iParam3)
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
	if (_0x43E4111189E54F0E(sParam1) > 23)
	{
		return false;
	}
	if (is_string_null_or_empty(sParam2))
	{
		return false;
	}
	if (_0x43E4111189E54F0E(sParam2) > 23)
	{
		return false;
	}
	if (func_123(sParam0, sParam1, sParam2))
	{
		return false;
	}
	func_117();
	Global_1312577 = 4;
	StringCopy(&(Global_1312577.f_1), get_this_script_name(), 24);
	Global_1312577.f_7 = GAMEPLAY::GET_HASH_KEY(&(Global_1312577.f_1));
	StringCopy(&(Global_1312577.f_10), sParam0, 16);
	StringCopy(&(Global_1312577.f_14), sParam1, 64);
	StringCopy(&(Global_1312577.f_30), sParam2, 64);
	func_116();
	func_115(iParam3);
	func_114();
	return true;
}

void func_114()
{
	GAMEPLAY::SET_BIT(&(Global_1312577.f_57), true);
}

void func_115(int iParam0)
{
	if (iParam0)
	{
		GAMEPLAY::SET_BIT(&(Global_1312577.f_57), false);
		return;
	}
	GAMEPLAY::CLEAR_BIT(&(Global_1312577.f_57), false);
}

void func_116()
{
	Global_1312577.f_8 = get_time_offset(NETWORK::GET_NETWORK_TIME(), 86400000);
	Global_1312577.f_9 = NETWORK::GET_NETWORK_TIME();
}

void func_117()
{
	func_119();
	func_118(0);
}

void func_118(int iParam0)
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

void func_119()
{
	if (!func_122())
	{
	}
	if (func_121())
	{
		_0xE124FA80A759019C(&(Global_1312577.f_10));
		func_120();
		_0xFCC75460ABA29378();
	}
}

void func_120()
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

bool func_121()
{
	if (Global_1312577 == 19)
	{
		return false;
	}
	return true;
}

int func_122()
{
	if (!func_121())
	{
		return 0;
	}
	_0x853648FD1063A213(&(Global_1312577.f_10));
	func_120();
	return _0x8A9BA1AB3E237613();
}

int func_123(char* sParam0, char* sParam1, char* sParam2)
{
	if (!func_121())
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
	if (!GAMEPLAY::GET_HASH_KEY(sParam0) == GAMEPLAY::GET_HASH_KEY(&(Global_1312577.f_10)))
	{
		return false;
	}
	if (!GAMEPLAY::GET_HASH_KEY(sParam1) == GAMEPLAY::GET_HASH_KEY(&(Global_1312577.f_14)))
	{
		return false;
	}
	return GAMEPLAY::GET_HASH_KEY(sParam2) == GAMEPLAY::GET_HASH_KEY(&(Global_1312577.f_30));
}

char* func_124()
{
	switch (Local_818.f_712)
	{
		case 0:
			return "CPC_WARN0";
			break;
		
		case 1:
			return "CPC_WARN1";
			break;
		
		case 2:
			return "CPC_WARN2";
			break;
		
		case 3:
			return "CPC_WARN3";
			break;
	}
	return "";
}

void func_125()
{
	if (!GAMEPLAY::IS_BIT_SET(iLocal_100, 3))
	{
		iLocal_782 = 1;
		func_143();
		clear_all_help_messages();
		func_366(1);
		func_129();
		func_127();
		GAMEPLAY::SET_BIT(&iLocal_100, 3);
		func_126();
	}
}

void func_126()
{
	Global_1610316[player_id() /*174*/].f_7 = 0;
}

void func_127()
{
	if (Global_2410702.f_6 == get_id_of_this_thread())
	{
		func_128();
	}
}

void func_128()
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

void func_129()
{
	struct<4> Var0;
	
	if (Global_2404956.f_469.f_1 == get_id_of_this_thread())
	{
		Global_2404956.f_469 = {Var0};
	}
}

bool func_130(auto uParam0, int iParam1)
{
	int iVar0;
	
	if ((*uParam0 > 0 && !func_141()) && !(func_140(player_id(), 0) && (func_139(player_id()) || func_137(player_id()))))
	{
		func_136();
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_36(uParam0.f_3))
			{
				func_2(uParam0.f_3, 0, 0);
			}
			else if (func_1(uParam0.f_3, 1000, 0))
			{
				GAMEPLAY::SET_BIT(&(Global_1573883.f_1), 25);
				if (iParam1)
				{
					GAMEPLAY::SET_BIT(&(Global_2460486.f_4426), false);
					func_2(uParam0.f_5, 0, 0);
				}
				func_2(uParam0.f_1, 0, 0);
				func_135(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_36(uParam0.f_5))
			{
				if (func_1(uParam0.f_5, 3000, 0))
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
				func_132();
				func_135(uParam0, 2);
			}
			break;
		
		case 2:
			func_132();
			if (func_1(uParam0.f_1, 15000, 0))
			{
				if (func_131("AMEV_LBD_HELP"))
				{
					clear_help(1);
				}
				func_135(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_1(uParam0.f_1, 23500, 0))
			{
				GAMEPLAY::CLEAR_BIT(&(Global_2460486.f_4426), true);
				func_135(uParam0, 4);
				return true;
			}
			break;
		
		case 4:
			GAMEPLAY::CLEAR_BIT(&(Global_2460486.f_4426), true);
			return true;
	}
	return false;
}

auto func_131(char* sParam0)
{
	_0x0A24DA3A41B718F5(sParam0);
	return _0x10BDDBFC529428DD(0);
}

void func_132()
{
	if (GAMEPLAY::IS_BIT_SET(Global_2460486.f_4426, false))
	{
		if (((((!is_radar_hidden() && !GAMEPLAY::IS_BIT_SET(Global_2460486.f_743, 2)) && func_13(player_id(), 1, 1)) && !Global_68058) && !Global_52930) && !is_screen_faded_out())
		{
			GAMEPLAY::SET_BIT(&(Global_2460486.f_4426), true);
			func_134("AMEV_LBD_HELP", -1);
			func_133(1);
			GAMEPLAY::CLEAR_BIT(&(Global_2460486.f_4426), false);
		}
	}
}

void func_133(int iParam0)
{
	unk_0xB9C362BABECDDC7A(3, 21, 200, 0, 0);
	if (iParam0 && !func_141())
	{
		play_sound_frontend(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", 0);
	}
}

void func_134(char* sParam0, int iParam1)
{
	_set_text_component_format(sParam0);
	_display_help_text_from_string_label(0, 0, false, iParam1);
}

void func_135(auto uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_136()
{
	Global_2444574 = 1;
}

int func_137(int iParam0)
{
	return func_138(iParam0, 19);
}

int func_138(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_1610316[iParam0 /*174*/].f_10.f_4, iParam1);
}

int func_139(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_138(iParam0, 9);
	}
	return false;
}

bool func_140(int iParam0, int iParam1)
{
	if (Global_1610316[iParam0 /*174*/].f_10.f_28 != -1 || (iParam1 && Global_1610316[iParam0 /*174*/].f_10.f_27 != -1))
	{
		return true;
	}
	return false;
}

int func_141()
{
	return Global_2428492.f_2171[0 /*72*/].f_1 != 0;
}

void func_142()
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

void func_143()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_818.f_709)
	{
		if (does_blip_exist(vLocal_390[iVar0 /*3*/]))
		{
			remove_blip(&(vLocal_390[iVar0 /*3*/]));
			delete_checkpoint(vLocal_390[iVar0 /*3*/].f_1);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iLocal_376[iVar0] = 0;
		iVar0++;
	}
}

void func_144()
{
	char* sVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	
	if (!GAMEPLAY::IS_BIT_SET(Local_3612[participant_id_to_int() /*5*/].f_2, false) && (func_154() || GAMEPLAY::IS_BIT_SET(Local_818.f_2, 2)))
	{
		if (func_48(func_153()))
		{
			func_152();
		}
		if (!GAMEPLAY::IS_BIT_SET(Local_818.f_2, 2))
		{
			if (func_265(0))
			{
				if (func_264(0))
				{
					if (!GAMEPLAY::IS_BIT_SET(Local_818.f_2, false))
					{
						sVar0 = "CPC_END";
					}
					else
					{
						sVar0 = "CPC_ENDBONUS";
					}
					func_151(63, Local_3612[participant_id_to_int() /*5*/].f_4, sVar0, "AMCH_WIN", 1, 15000, -1082130432, 2);
				}
				else
				{
					iVar1 = int_to_participantindex(Local_818.f_674[0]);
					if (network_is_participant_active(iVar1))
					{
						iVar2 = network_get_player_index(iVar1);
						if (func_264(1))
						{
							if (!GAMEPLAY::IS_BIT_SET(Local_818.f_2, false))
							{
								sVar0 = "CPC_2ND";
							}
							else
							{
								sVar0 = "CPC_2NDBONUS";
							}
							func_151(66, Local_3612[participant_id_to_int() /*5*/].f_4, sVar0, "CPC_OVER", 1, 15000, -1082130432, 2);
						}
						else if (func_264(2))
						{
							if (!GAMEPLAY::IS_BIT_SET(Local_818.f_2, false))
							{
								sVar0 = "CPC_3RD";
							}
							else
							{
								sVar0 = "CPC_3RDBONUS";
							}
							func_151(66, Local_3612[participant_id_to_int() /*5*/].f_4, sVar0, "CPC_OVER", 1, 15000, -1082130432, 2);
						}
						else
						{
							if (GAMEPLAY::IS_BIT_SET(Local_818.f_2, false) && Local_3612[participant_id_to_int() /*5*/].f_4 >= Global_262145.f_9225)
							{
								sVar0 = "CPC_LOSEBONUS";
							}
							else
							{
								sVar0 = "CPC_LOSE";
							}
							sVar3 = get_player_name(iVar2);
							if (func_63(iVar2, 1))
							{
								sVar3 = func_147(iVar2);
							}
							func_146(65, Local_3612[Local_818.f_674[0] /*5*/].f_4, sVar0, sVar3, "CPC_OVER", 1, 15000, 2);
						}
					}
				}
			}
			else
			{
				func_42(65, "CPC_OVER", "CPC_NOWIN", 1, 15000, 2);
			}
		}
		else
		{
			func_41("", "", 1);
		}
		GAMEPLAY::SET_BIT(&(Local_3612[participant_id_to_int() /*5*/].f_2), false);
		func_145(132);
	}
}

void func_145(int iParam0)
{
	if (iParam0 == iParam0)
	{
	}
}

int func_146(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
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
	func_76(iParam0, &Var0, iParam1, sParam2, sParam4);
	StringCopy(&(Var0.f_23), sParam3, 64);
	Var0.f_65 = iParam5;
	Var0.f_6 = iParam6;
	Var0.f_66 = iParam7;
	return func_43(&Var0);
}

char* func_147(int iParam0)
{
	char* sVar0;
	int iVar1;
	
	if (iParam0 == player_id())
	{
		sVar0 = func_150(&(Global_1610316[iParam0 /*174*/].f_10.f_74));
		return sVar0;
	}
	if (((func_138(iParam0, 28) || func_138(player_id(), 28)) || func_149(iParam0)) && !func_148(iParam0))
	{
		return _get_label_text("GB_REST_ACC");
	}
	iVar1 = func_62(iParam0);
	if (iVar1 != func_75())
	{
		sVar0 = func_150(&(Global_1610316[iVar1 /*174*/].f_10.f_74));
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

bool func_148(int iParam0)
{
	struct<13> Var0;
	
	Var0 = {func_103(iParam0)};
	if (is_durango_version() && _0xB57A49545BA53CE7(&Var0))
	{
		return true;
	}
	return false;
}

bool func_149(int iParam0)
{
	struct<13> Var0;
	
	Var0 = {func_103(iParam0)};
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

auto func_150(auto uParam0)
{
	return uParam0;
}

int func_151(int iParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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
	func_76(iParam0, &Var0, iParam1, sParam2, sParam3);
	Var0.f_65 = iParam4;
	Var0.f_6 = iParam5;
	Var0.f_7 = iParam6;
	Var0.f_66 = iParam7;
	return func_43(&Var0);
}

void func_152()
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

auto func_153()
{
	return Global_2428492.f_2171[0 /*72*/].f_1;
}

int func_154()
{
	return GAMEPLAY::IS_BIT_SET(Global_1573883.f_1, 25);
}

void func_155()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	auto uVar4;
	auto uVar5;
	
	if (!GAMEPLAY::IS_BIT_SET(Local_3612[participant_id_to_int() /*5*/].f_2, true))
	{
		if (func_6(player_id()))
		{
			GAMEPLAY::SET_BIT(&(Local_3612[participant_id_to_int() /*5*/].f_2), true);
			return;
		}
		if (func_399(player_id()))
		{
			GAMEPLAY::SET_BIT(&(Local_3612[participant_id_to_int() /*5*/].f_2), true);
			return;
		}
		if (Local_3612[participant_id_to_int() /*5*/].f_4 >= Global_262145.f_9225)
		{
			iVar3 = floor(to_float(Local_818.f_1 - iLocal_98) / 60f / 1000f);
			if (iVar3 > Global_262145.f_9385)
			{
				iVar3 = Global_262145.f_9385;
			}
			else if (iVar3 < 1)
			{
				iVar3 = true;
			}
			iVar2 = func_237() * iVar3;
			iVar1 = func_236() * iVar3;
		}
		else
		{
			func_234(0);
		}
		if (!GAMEPLAY::IS_BIT_SET(Local_818.f_2, 2))
		{
			if (Local_3612[participant_id_to_int() /*5*/].f_4 >= Global_262145.f_9225)
			{
				if (GAMEPLAY::IS_BIT_SET(Local_818.f_2, false))
				{
					iVar0 += round(IntToFloat(func_233()) * Global_262145.f_9396);
				}
			}
			if (func_264(0))
			{
				Local_3600.f_5 = 1;
				iVar1 += round(IntToFloat(func_232()) * Global_262145.f_9397);
			}
			if ((Local_818.f_674[0] != participant_id_to_int() && Local_818.f_674[1] != participant_id_to_int()) && Local_818.f_674[2] != participant_id_to_int())
			{
				if (Local_3612[participant_id_to_int() /*5*/].f_4 >= Global_262145.f_9225)
				{
					func_234(1);
				}
			}
		}
		func_215(&iVar0, 1);
		iVar0 += iVar2;
		if (iVar0 > 0)
		{
			if (func_214())
			{
				func_205(-59668082, iVar0, &uVar4, 0, 1, 0);
			}
			else
			{
				_0xFB6DB092FBAE29E6(iVar0, "AM_CP_COLLECTION", &uVar5);
			}
		}
		Local_3600.f_6 = iVar0;
		if (!Global_262145.f_9449)
		{
			if (Local_3600.f_6 > 0)
			{
				func_204(8, Local_3600.f_6);
			}
		}
		Global_2445403 = iVar0;
		func_203();
		func_156(0, PLAYER::PLAYER_PED_ID(), "", -1636175450, -1253457806, iVar1, 1, -1, 0, 0);
		Local_3600.f_7 += iVar1;
		GAMEPLAY::SET_BIT(&(Local_3612[participant_id_to_int() /*5*/].f_2), true);
	}
}

int func_156(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9)
{
	return func_157(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, iParam9);
}

int func_157(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_167(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (is_entity_a_ped(iParam1))
			{
				iVar1 = get_ped_index_from_entity_index(iParam1);
				func_163(get_ped_bone_coords(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8);
			}
		}
	}
	else
	{
		func_158(iParam1, iVar0, sParam8);
	}
	return iVar0;
}

void func_158(int iParam0, int iParam1, char* sParam2)
{
	Vector3 vVar0;
	
	vVar0 = {func_161(iParam0, 1)};
	if (iParam0 == func_160(PLAYER::PLAYER_PED_ID()))
	{
		func_159(1);
	}
	func_163(vVar0, iParam1, 0, sParam2);
}

void func_159(int iParam0)
{
	Global_2428492.f_1355 = iParam0;
}

int func_160(int iParam0)
{
	return iParam0;
}

Vector3 func_161(int iParam0, int iParam1)
{
	Vector3 vVar0;
	float fVar3;
	Vector3 vVar4;
	Vector3 vVar7;
	float fVar10;
	
	if (iParam0 == func_162(PLAYER::PLAYER_PED_ID()) && _0xEE778F8C7E1142E2(_0x19CAFA3C87F7C2FF()) == 4)
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

int func_162(int iParam0)
{
	return iParam0;
}

void func_163(Vector3 vParam0, int iParam1, int iParam2, char* sParam3)
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
			Global_2428492.f_774[iVar1 /*29*/].f_4 = func_166(Global_2428492.f_774[iVar1 /*29*/], &Global_1312317, &Global_1312318);
			Global_2428492.f_774[iVar1 /*29*/].f_7 = NETWORK::GET_NETWORK_TIME();
			Global_2428492.f_774[iVar1 /*29*/].f_3 = iParam3;
			Global_2428492.f_774[iVar1 /*29*/].f_8 = iParam4;
			Global_2428492.f_774[iVar1 /*29*/].f_9 = func_165();
			Global_2428492.f_774[iVar1 /*29*/].f_10 = func_164();
			StringCopy(&(Global_2428492.f_774[iVar1 /*29*/].f_22), sParam5, 16);
		}
	}
}

bool func_164()
{
	if (Global_2428492.f_1355)
	{
		Global_2428492.f_1355 = 0;
		return true;
	}
	Global_2428492.f_1355 = 0;
	return false;
}

auto func_165()
{
	auto uVar0;
	
	uVar0 = Global_2428492.f_1357;
	Global_2428492.f_1357 = 1;
	return uVar0;
}

float func_166(Vector3 vParam0, auto uParam1, auto uParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(get_gameplay_cam_coord(), vParam0, 1);
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

auto func_167(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	auto uVar0;
	
	uVar0 = func_168(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, iParam7);
	return uVar0;
}

int func_168(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_202(player_id()) || func_201(player_id()))
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
	if (func_200(sParam2))
	{
	}
	if (func_199())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = round(IntToFloat(iParam3) * IntToFloat(iParam4) + fVar0);
		iVar1 = func_197(iVar1);
		fVar3 = to_float(iVar1) * Global_262145.f_1;
		iVar1 = round(fVar3);
		if (iParam10)
		{
			iVar1 = func_196(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_194(0, &iVar1);
					break;
				
				case 3:
					func_194(1, &iVar1);
					break;
				
				case 1:
					func_192(&iVar1);
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
			func_189(1157, iVar1, -1);
			if (iParam1 == 0)
			{
				func_178(func_188(player_id()) + iVar1, iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				playstats_award_xp(iVar1, iParam8, iParam9);
				if (Global_1587523[player_id() /*444*/].f_39.f_2 != -1)
				{
					func_189(1158, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_173(iVar1);
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
				func_169(func_171(player_id()) + iVar1);
			}
			else
			{
				func_169(func_171(player_id()) + iParam6);
			}
		}
		if (iParam7)
		{
		}
	}
	return iVar1;
}

void func_169(int iParam0)
{
	if (func_199())
	{
		Global_1587523[player_id() /*444*/].f_195.f_5 = iParam0;
		func_170(joaat("mpply_globalxp"), iParam0);
	}
}

void func_170(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, 1);
	}
}

int func_171(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_13(iParam0, 0, 1))
		{
			if (iParam0 == player_id())
			{
				return func_172(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1587523[iParam0 /*444*/].f_195.f_5;
			}
		}
		else
		{
			return func_172(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_172(int iParam0)
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

void func_173(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = {func_103(player_id())};
	if (_network_player_is_in_clan())
	{
		if (network_clan_player_is_active(&Var0))
		{
			iVar13 = func_176(func_177(&Var0));
			if (iVar13 == 0)
			{
				func_175(&Global_1347641, iParam0);
				func_174(joaat("mpply_crew_local_xp_0"), Global_1347641);
			}
			else if (iVar13 == 1)
			{
				func_175(&Global_1347642, iParam0);
				func_174(joaat("mpply_crew_local_xp_1"), Global_1347642);
			}
			else if (iVar13 == 2)
			{
				func_175(&Global_1347643, iParam0);
				func_174(joaat("mpply_crew_local_xp_2"), Global_1347643);
			}
			else if (iVar13 == 3)
			{
				func_175(&Global_1347644, iParam0);
				func_174(joaat("mpply_crew_local_xp_3"), Global_1347644);
			}
			else if (iVar13 == 4)
			{
				func_175(&Global_1347645, iParam0);
				func_174(joaat("mpply_crew_local_xp_4"), Global_1347645);
			}
		}
	}
}

void func_174(int iParam0, int iParam1)
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

void func_175(auto uParam0, int iParam1)
{
	*uParam0 += iParam1;
}

int func_176(int iParam0)
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

auto func_177(auto uParam0)
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

void func_178(int iParam0, int iParam1, int iParam2)
{
	if (func_199())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_7571 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1347756[func_187(-1)])
				{
					playstats_award_xp(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1347756[func_187(-1)])
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
		if (func_186(player_id()))
		{
			Global_1587523[player_id() /*444*/].f_195.f_1 = iParam0;
			Global_1587523[player_id() /*444*/].f_195.f_6 = func_184(iParam0, 1);
		}
		func_183(632, iParam0, -1, 1);
		func_182(633, func_184(iParam0, 1), -1, 1);
		Global_1347756[func_187(-1)] = iParam0;
		func_179(7, 0);
	}
}

void func_179(int iParam0, int iParam1)
{
	auto uVar0;
	
	if (func_181(iParam0, iParam1))
	{
		uVar0 = func_180();
		Global_2442990[uVar0] = iParam0;
	}
}

int func_180()
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

bool func_181(int iParam0, auto uParam1)
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

void func_182(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2469339[iParam0 /*5*/][func_187(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

void func_183(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2469339[iParam0 /*5*/][func_187(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 780:
			Global_1347702[func_187(iParam2)] = iParam1;
			break;
		
		case 781:
			Global_1347708[func_187(iParam2)] = iParam1;
			break;
		
		case 782:
			Global_1347714[func_187(iParam2)] = iParam1;
			break;
		
		case 783:
			Global_1347720[func_187(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1347678[func_187(iParam2)] = iParam1;
			break;
		
		case 771:
			Global_1347684[func_187(iParam2)] = iParam1;
			break;
		
		case 772:
			Global_1347690[func_187(iParam2)] = iParam1;
			break;
		
		case 773:
			Global_1347696[func_187(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1347654[func_187(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1347660[func_187(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1347666[func_187(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1347672[func_187(iParam2)] = iParam1;
			break;
		
		case 750:
			Global_1347726[func_187(iParam2)] = iParam1;
			break;
		
		case 751:
			Global_1347732[func_187(iParam2)] = iParam1;
			break;
		
		case 752:
			Global_1347738[func_187(iParam2)] = iParam1;
			break;
		
		case 753:
			Global_1347744[func_187(iParam2)] = iParam1;
			break;
		
		case 1296:
			Global_1347750[func_187(iParam2)] = iParam1;
			break;
		
		case 632:
			Global_1347756[func_187(iParam2)] = iParam1;
			break;
		
		case 1271:
			Global_1347762[func_187(iParam2)] = iParam1;
			break;
		
		case 1868:
			Global_2492924[0 /*6*/][func_187(iParam2)] = iParam1;
			break;
		
		case 2259:
			Global_2492924[1 /*6*/][func_187(iParam2)] = iParam1;
			break;
		
		case 2907:
			Global_2492924[2 /*6*/][func_187(iParam2)] = iParam1;
			break;
		
		case 3036:
			Global_2492924[3 /*6*/][func_187(iParam2)] = iParam1;
			break;
		
		case 3891:
			Global_2492986[func_187(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1347768[func_187(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1347774[func_187(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1347780[func_187(iParam2)] = iParam1;
			break;
		
		case 1229:
			Global_1347786[func_187(iParam2)] = iParam1;
			break;
		
		case 3031:
			Global_2492955[0 /*5*/][func_187(iParam2)] = iParam1;
			break;
		
		case 3032:
			Global_2492955[1 /*5*/][func_187(iParam2)] = iParam1;
			break;
		
		case 3033:
			Global_2492955[2 /*5*/][func_187(iParam2)] = iParam1;
			break;
		
		case 3034:
			Global_2492955[3 /*5*/][func_187(iParam2)] = iParam1;
			break;
		
		case 3035:
			Global_2492955[4 /*5*/][func_187(iParam2)] = iParam1;
			break;
		
		case 3216:
			Global_2492991[0 /*5*/][func_187(iParam2)] = iParam1;
			break;
		
		case 3217:
			Global_2492991[1 /*5*/][func_187(iParam2)] = iParam1;
			break;
		
		case 3218:
			Global_2492991[2 /*5*/][func_187(iParam2)] = iParam1;
			break;
		
		case 3219:
			Global_2492991[3 /*5*/][func_187(iParam2)] = iParam1;
			break;
		
		case 3220:
			Global_2492991[4 /*5*/][func_187(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2493017[0 /*5*/][func_187(iParam2)] = iParam1;
			break;
		
		case 3222:
			Global_2493017[1 /*5*/][func_187(iParam2)] = iParam1;
			break;
		
		case 3223:
			Global_2493017[2 /*5*/][func_187(iParam2)] = iParam1;
			break;
		
		case 3224:
			Global_2493017[3 /*5*/][func_187(iParam2)] = iParam1;
			break;
		
		case 3225:
			Global_2493017[4 /*5*/][func_187(iParam2)] = iParam1;
			break;
		
		case 3199:
			Global_2492955[5 /*5*/][func_187(iParam2)] = iParam1;
			break;
		
		case 3205:
			Global_2492924[4 /*6*/][func_187(iParam2)] = iParam1;
			break;
		
		case 3243:
			Global_2493043[func_187(iParam2)] = iParam1;
			break;
		
		case 3244:
			Global_2493058[func_187(iParam2)] = iParam1;
			break;
		
		case 3245:
			Global_2493048[func_187(iParam2)] = iParam1;
			break;
		
		case 3246:
			Global_2493063[func_187(iParam2)] = iParam1;
			break;
		
		case 3247:
			Global_2493053[func_187(iParam2)] = iParam1;
			break;
		
		case 3248:
			Global_2493068[func_187(iParam2)] = iParam1;
			break;
		
		case 3269:
			Global_2493073[func_187(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_184(int iParam0, int iParam1)
{
	if (iParam1)
	{
	}
	return func_185(iParam0, 0);
}

int func_185(int iParam0, int iParam1)
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

int func_186(int iParam0)
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

int func_187(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_39();
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

int func_188(int iParam0)
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == player_id())
			{
				return Global_1347756[func_187(-1)];
			}
			else if (func_186(iParam0))
			{
				return Global_1587523[iParam0 /*444*/].f_195.f_1;
			}
		}
	}
	else
	{
		return Global_1347756[func_187(-1)];
	}
	return 0;
}

void func_189(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_191(iParam0, func_187(iParam2), 0);
	iVar0 += iParam1;
	if (!func_190(iParam0))
	{
		func_182(iParam0, iVar0, iParam2, 1);
	}
	else
	{
		func_183(iParam0, iVar0, iParam2, 1);
	}
}

bool func_190(int iParam0)
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

int func_191(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	auto uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2469339[iParam0 /*5*/][func_187(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_192(int iParam0)
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
				if (get_player_team(iVar5) == iVar1 || func_57(get_player_team(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != player_id())
					{
						if (func_104(player_id(), iVar5))
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
		iVar6 = round(func_193(*iParam0, 100) * 10f * Global_262145.f_4211);
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = round(func_193(*iParam0, 100) * 20f * Global_262145.f_4204);
	}
	*iParam0 += iVar6;
	*iParam0 += iVar7;
}

float func_193(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = to_float(iParam0);
	fVar1 = to_float(iParam1);
	fVar2 = fVar0 / fVar1;
	return fVar2;
}

void func_194(int iParam0, int iParam1)
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
				if (func_13(iVar4, 0, 1))
				{
					if (iVar4 != player_id())
					{
						iVar1++;
						if (func_104(player_id(), iVar4))
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
			if (func_13(iVar4, 1, 1))
			{
				if (iVar4 != player_id())
				{
					if (func_195(player_id(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_104(player_id(), iVar4))
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
		iVar5 = round(func_193(*iParam1, 100) * 10f * Global_262145.f_4211);
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = round(func_193(*iParam1, 100) * 20f * Global_262145.f_4204);
	}
	*iParam1 += iVar5;
	*iParam1 += iVar6;
}

float func_195(int iParam0, int iParam1)
{
	return vdist(func_29(iParam0), func_29(iParam1));
	return 0f;
}

auto func_196(int iParam0)
{
	int iVar0;
	
	if (CONTROLS::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = round(func_193(*iParam0, 100) * 25f);
	*iParam0 += iVar0;
	return *iParam0;
}

int func_197(int iParam0)
{
	if (iParam0 < 0)
	{
		if (absi(iParam0) > func_188(player_id()))
		{
			iParam0 = -func_188(player_id());
		}
	}
	if (func_198(8000, 0, 0) > 0)
	{
		if (func_198(8000, 0, 0) < iParam0 + func_188(player_id()))
		{
			iParam0 = func_198(8000, 0, 0) - func_188(player_id());
		}
	}
	return iParam0;
}

auto func_198(int iParam0, int iParam1, int iParam2)
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

bool func_199()
{
	return true;
}

bool func_200(char* sParam0)
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

int func_201(int iParam0)
{
	return Global_2418472[iParam0 /*313*/].f_114 == 2;
}

int func_202(int iParam0)
{
	return Global_2418472[iParam0 /*313*/].f_114 == 7;
}

void func_203()
{
	Global_2444573 = 1;
}

void func_204(int iParam0, int iParam1)
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

void func_205(int iParam0, int iParam1, auto uParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (!func_214())
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
				func_206(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_206(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

bool func_206(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = false;
	if (!func_214())
	{
		iVar0 = true;
	}
	if (!iVar0)
	{
		if (!_0xB24F0944DA203D9E(func_39()) || _0x810E8431C0614BF9())
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
			*uParam0 = func_213(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
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
			func_212(1, iParam4);
			Global_2558636 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_207(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return false;
}

void func_207(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			GAMEPLAY::SET_BIT(&(Global_2418472[player_id() /*313*/].f_121.f_71), false);
			break;
	}
	if (iParam0 != -1)
	{
		func_208(iParam0);
	}
}

void func_208(int iParam0)
{
	int iVar0;
	
	iVar0 = false;
	if (!func_214())
	{
		iVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_211(iParam0))
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
		func_209(&(Global_2558146[iParam0 /*73*/]));
	}
}

void func_209(auto uParam0)
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
	func_210(uParam0.f_8.f_3);
	func_210(uParam0.f_8.f_16);
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

void func_210(auto uParam0)
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

int func_211(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2558146[iParam0 /*73*/].f_5 == 1;
	}
	return false;
}

void func_212(int iParam0, int iParam1)
{
	Global_2445534 = iParam1;
	Global_2445533 = iParam0;
}

int func_213(int iParam0, auto uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, auto uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2558146[iVar0 /*73*/].f_2 == 0)
		{
			if (!func_214())
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

bool func_214()
{
	if (GAMEPLAY::IS_PC_VERSION())
	{
		return true;
	}
	return false;
}

void func_215(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_231())
		{
			if (func_230(0))
			{
				if (network_is_player_active(func_229()))
				{
					if (func_228() == 100)
					{
						iVar0 = *iParam0;
						*iParam0 = 0;
					}
					else
					{
						iVar0 = *iParam0 / 100 * func_228();
						*iParam0 -= iVar0;
					}
					func_226(&iVar0, 0);
					if (iParam1 == 1)
					{
						func_219("GB_BCUT_TICK1", func_229(), iVar0, 0, 0, 1, 1);
					}
					func_218(20);
					func_216(func_229(), iVar0, 1);
				}
			}
		}
	}
}

void func_216(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	
	if (func_13(iParam0, 0, 1))
	{
		Var0 = 447;
		Var0.f_1 = player_id();
		Var0.f_2 = iParam1;
		Var0.f_3 = iParam2;
		trigger_script_event(1, &Var0, 5, func_217(iParam0));
	}
}

auto func_217(int iParam0)
{
	auto uVar0;
	
	GAMEPLAY::SET_BIT(&uVar0, iParam0);
	return uVar0;
}

void func_218(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0 / 32;
	iVar1 = iParam0 % 32;
	GAMEPLAY::SET_BIT(&(Global_2460486.f_4660.f_7[iVar0]), iVar1);
}

int func_219(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
		_0x39BBF623FC803EAC(func_50(iParam1, -2, 1, 0));
		add_text_component_substring_player_name(func_224(&Var1));
		if (!iParam3 == 0)
		{
			_0x39BBF623FC803EAC(iParam3);
		}
		add_text_component_integer(iParam2);
		iVar0 = _draw_notification(0, 1);
		func_220(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_220(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_223() || !network_is_activity_session()) || !func_73(player_id(), 0))
	{
		return;
	}
	iVar0 = func_221(iParam2);
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

int func_221(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_1724230 - 1)
	{
		if (iParam0 > Global_1724230.f_5[iVar0 /*53*/].f_1)
		{
			func_222(iVar0);
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

void func_222(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1724230.f_5[iVar0 /*53*/] = {Global_1724230.f_5[iVar0 - 1 /*53*/]};
		iVar0 += -1;
	}
}

int func_223()
{
	return is_dlc_present(-1762644250);
}

auto func_224(char* sParam0)
{
	char[64] cVar0;
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_225(&cVar0);
}

auto func_225(char[4] cParam0)
{
	return cParam0;
}

void func_226(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1)
	{
		iVar1 = func_227(1);
	}
	else
	{
		iVar1 = func_227(0);
	}
	iVar0 = *iParam0 / 100 * iVar1;
	*iParam0 -= iVar0;
}

int func_227(int iParam0)
{
	if (iParam0)
	{
		return round(0.05f * 100f);
	}
	return Global_262145.f_10329;
}

auto func_228()
{
	return Global_262145.f_10328;
}

auto func_229()
{
	return Global_1610316[player_id() /*174*/].f_10;
}

int func_230(int iParam0)
{
	return func_63(player_id(), iParam0);
}

int func_231()
{
	return func_64(player_id());
}

auto func_232()
{
	return Global_262145.f_9208;
}

auto func_233()
{
	return Global_262145.f_9207;
}

void func_234(int iParam0)
{
	if (iParam0)
	{
		if (func_235(1))
		{
			GAMEPLAY::SET_BIT(&Global_1573907, true);
		}
	}
	else if (func_235(2))
	{
		GAMEPLAY::SET_BIT(&Global_1573907, 2);
	}
}

bool func_235(int iParam0)
{
	int iVar0;
	
	iVar0 = func_191(2512, -1, 0);
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

auto func_236()
{
	return Global_262145.f_9227;
}

auto func_237()
{
	return Global_262145.f_9226;
}

void func_238()
{
	if (GAMEPLAY::IS_BIT_SET(iLocal_100, 5))
	{
		func_239();
	}
	func_401();
}

void func_239()
{
	int[] iVar0 = new int[3];
	int iVar4;
	var[] uVar5 = new var[3];
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	var[] uVar17 = new var[3];
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	
	if (Local_818.f_674[0] > -1)
	{
		iVar15 = 0;
		iVar13 = 0;
		while (iVar13 < 3)
		{
			iVar0[iVar13] = func_75();
			iVar13++;
		}
		iVar13 = 0;
		while (iVar13 < 3)
		{
			if (Local_818.f_674[iVar13] > -1)
			{
				iVar21 = int_to_participantindex(Local_818.f_674[iVar13]);
				if (network_is_participant_active(iVar21))
				{
					iVar4 = network_get_player_index(iVar21);
					if (func_13(iVar4, 0, 1))
					{
						if (!func_73(iVar4, 0))
						{
							iVar0[iVar13] = iVar4;
							uVar5[iVar13] = Local_3612[Local_818.f_674[iVar13] /*5*/].f_4;
							if (func_230(1))
							{
								if (func_63(iVar4, 1))
								{
									uVar17[iVar13] = func_50(iVar4, -2, 0, 0);
								}
							}
						}
					}
				}
			}
			iVar13++;
		}
		iVar14 = participant_id_to_int();
		if (func_71(player_id()))
		{
			iVar22 = func_254();
			iVar23 = _network_get_ped_player(iVar22);
			if (network_is_player_active(iVar23))
			{
				iVar24 = network_get_participant_index(iVar23);
				if (network_is_participant_active(iVar24))
				{
					iVar14 = iVar24;
				}
			}
		}
		iVar9 = func_363(0, Local_818.f_708);
		iVar10 = Local_818.f_709;
		iVar11 = func_363(0, Local_3612[iVar14 /*5*/].f_4);
		iVar12 = func_363(0, Global_262145.f_9064 - func_365(&(Local_818.f_661), 0, 0));
		func_253(iVar12);
		if (iVar12 > 30000)
		{
			iVar16 = 1;
		}
		else
		{
			iVar16 = 6;
		}
		func_240(iVar0[0], iVar0[1], iVar0[2], uVar5[0], uVar5[1], uVar5[2], iVar9, iVar10, iVar11, iVar12, &iVar15, iVar16, func_250(), uVar17[0], uVar17[1], uVar17[2]);
	}
}

void func_240(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, char* sParam12, auto uParam13, auto uParam14, auto uParam15)
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	
	if (func_247(0) == 0)
	{
		return;
	}
	func_246();
	iVar1 = 0;
	if (((Global_2444115[0] != iParam0 || Global_2444115[1] != iParam1) || Global_2444115[2] != iParam2) || *iParam10)
	{
		iVar1 = 1;
	}
	Global_2444115[0] = iParam0;
	Global_2444115[1] = iParam1;
	Global_2444115[2] = iParam2;
	Global_2444115[3] = 0;
	Global_2444115[4] = 0;
	if (Global_2444115[0] != func_75())
	{
		if (iVar1 == 1)
		{
			sVar0 = get_player_name(Global_2444115[0]);
			Global_2444121[0 /*16*/] = {func_245(1, sVar0)};
		}
		if (iParam3 > 0)
		{
			func_242(iParam3, &(Global_2444121[0 /*16*/]), -1, 109, 8, 1, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, uParam13);
		}
	}
	if (Global_2444115[1] != func_75())
	{
		if (iVar1 == 1)
		{
			sVar0 = get_player_name(Global_2444115[1]);
			Global_2444121[1 /*16*/] = {func_245(2, sVar0)};
		}
		if (iParam4 > 0)
		{
			func_242(iParam4, &(Global_2444121[1 /*16*/]), -1, 108, 7, 1, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, uParam14);
		}
	}
	if (Global_2444115[2] != func_75())
	{
		if (iVar1 == 1)
		{
			sVar0 = get_player_name(Global_2444115[2]);
			Global_2444121[2 /*16*/] = {func_245(3, sVar0)};
		}
		if (iParam5 > 0)
		{
			func_242(iParam5, &(Global_2444121[2 /*16*/]), -1, 107, 6, 1, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, uParam15);
		}
	}
	func_241(iParam6, iParam7, "HUD_CHECKPOINTS", -1, 1, 5, 0, 0, 0, 0, 1, 1, 1, 0);
	if (func_399(player_id()) == 0)
	{
		func_242(iParam8, "HUD_USCORE", -1, 1, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	sVar2 = "HUD_COUNTDOWN";
	if (!func_200(sParam12))
	{
		sVar2 = sParam12;
	}
	func_109(iParam9, sVar2, 0, 0, -1, 0, 3, 0, iParam11, 0, 0, 0, iParam11, 0, 0, 0);
	*iParam10 = 0;
	func_108();
}

void func_241(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = false;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_111(4, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1339940.f_1 = 1;
		func_110(4, iVar0);
		Global_1339940.f_2907[iVar0] = iParam0;
		Global_1339940.f_2907.f_172[iVar0] = iParam1;
		StringCopy(&(Global_1339940.f_2907.f_11[iVar0 /*16*/]), sParam2, 64);
		Global_1339940.f_2907.f_183[iVar0] = iParam3;
		Global_1339940.f_2907.f_216[iVar0] = iParam5;
		Global_1339940.f_2907.f_194[iVar0] = iParam4;
		Global_1339940.f_2907.f_227[iVar0] = iParam6;
		Global_1339940.f_2907.f_270[iVar0] = iParam7;
		Global_1339940.f_2907.f_281[iVar0] = iParam8;
		Global_1339940.f_2907.f_292[iVar0] = iParam9;
		Global_1339940.f_2907.f_303[iVar0] = iParam10;
		Global_1339940.f_2907.f_314[iVar0] = iParam11;
		Global_1339940.f_2907.f_325[iVar0] = iParam13;
		if (((iParam0 > 9 && iParam1 > 9) && GAMEPLAY::IS_PC_VERSION()) && iParam12)
		{
			Global_1339940.f_941 = 1;
		}
	}
}

void func_242(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18)
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
			if (func_111(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1339940.f_1 = 1;
		func_110(6, iVar0);
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
		if (iParam15 == 4 && func_244())
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
			if (func_243())
			{
				Global_1339940.f_945 = 1;
			}
		}
	}
}

bool func_243()
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

bool func_244()
{
	if ((_get_ui_language_id() == 8 || _get_ui_language_id() == 9) || _get_ui_language_id() == 10)
	{
		return true;
	}
	return false;
}

struct<16> func_245(int iParam0, char* sParam1)
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

void func_246()
{
	hide_hud_component_this_frame(8);
	hide_hud_component_this_frame(9);
	hide_hud_component_this_frame(6);
	hide_hud_component_this_frame(7);
	Global_2444577 = 1;
}

bool func_247(int iParam0)
{
	if (func_249())
	{
		return false;
	}
	if (func_248())
	{
		return false;
	}
	if (!iParam0)
	{
		if (func_13(player_id(), 1, 1) == 0)
		{
			return false;
		}
	}
	return true;
}

int func_248()
{
	return Global_1587523[player_id() /*444*/].f_180 != 0;
}

int func_249()
{
	return GAMEPLAY::IS_BIT_SET(Global_2359301, 12);
}

char* func_250()
{
	return "HUD_COUNTDOWN";
	switch (func_252(player_id()))
	{
		case 131:
			return "AET_HOT_TARG";
		
		case 132:
			return "AET_CHK_COLL";
		
		case 133:
			switch (func_251())
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

int func_251()
{
	if (func_252(player_id()) == 133)
	{
		return Global_2460486.f_4647;
	}
	return -1;
}

int func_252(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1610316[iVar0 /*174*/];
	}
	return -1;
}

void func_253(int iParam0)
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

auto func_254()
{
	if (ENTITY::DOES_ENTITY_EXIST(func_255()))
	{
		return func_255();
	}
	return func_68();
}

auto func_255()
{
	return Global_2359301.f_3;
}

void func_256()
{
	int iVar0;
	struct<47> Var1;
	int iVar48;
	int iVar49;
	auto uVar50;
	
	Var1 = -1;
	Var1.f_22 = -1082130432;
	Var1.f_23 = 3;
	Var1.f_46 = -1;
	iVar0 = 0;
	while (iVar0 < _network_get_num_participants_host())
	{
		Local_1568.f_527[iVar0 /*47*/] = {Var1};
		Local_1568.f_527[iVar0 /*47*/].f_1 = func_75();
		if (Local_818.f_674[iVar0] > -1)
		{
			iVar49 = int_to_participantindex(Local_818.f_674[iVar0]);
			if (network_is_participant_active(iVar49))
			{
				iVar48 = network_get_player_index(iVar49);
				if (!func_73(iVar48, 0))
				{
					Local_1568.f_527[iVar0 /*47*/] = Local_818.f_674[iVar0];
					Local_1568.f_527[iVar0 /*47*/].f_1 = iVar48;
					uVar50 = Local_3612[Local_818.f_674[iVar0] /*5*/].f_4;
					Local_1568.f_527[iVar0 /*47*/].f_9 = uVar50;
					Local_1568.f_527[iVar0 /*47*/].f_30 = -1;
				}
			}
		}
		iVar0++;
	}
}

void func_257()
{
	if (Local_816 != -1 && Local_816.f_1 != -1)
	{
		if (network_get_host_of_this_script() != func_259() && network_is_participant_active(network_get_host_of_this_script()))
		{
			func_258(Local_816.f_1, Local_816, func_217(network_get_player_index(network_get_host_of_this_script())));
			Local_816 = -1;
			Local_816.f_1 = -1;
		}
	}
}

void func_258(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	
	Var0 = 416;
	Var0.f_1 = player_id();
	Var0.f_2 = iParam0;
	Var0.f_3 = iParam1;
	if (!iParam2 == 0)
	{
		trigger_script_event(1, &Var0, 4, iParam2);
	}
}

int func_259()
{
	return -1;
}

void func_260()
{
	if (func_264(0))
	{
		if (!GAMEPLAY::IS_BIT_SET(iLocal_100, 4))
		{
			play_sound_frontend(-1, "Enter_1st", "GTAO_FM_Events_Soundset", 0);
			GAMEPLAY::SET_BIT(&iLocal_100, 4);
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(iLocal_100, 4))
	{
		play_sound_frontend(-1, "Lose_1st", "GTAO_FM_Events_Soundset", 0);
		GAMEPLAY::CLEAR_BIT(&iLocal_100, 4);
	}
}

void func_261()
{
	GAMEPLAY::SET_BIT(&(Global_2460486.f_1641), 26);
}

bool func_262(int iParam0)
{
	if ((GAMEPLAY::IS_BIT_SET(Global_2418472[iParam0 /*313*/].f_69.f_2, 15) && !(GAMEPLAY::IS_BIT_SET(Global_2418472[iParam0 /*313*/].f_69.f_2, 6) && GAMEPLAY::IS_BIT_SET(Global_2418472[iParam0 /*313*/].f_69.f_2, 7))) || ((GAMEPLAY::IS_BIT_SET(Global_2418472[iParam0 /*313*/].f_69.f_2, 6) && !GAMEPLAY::IS_BIT_SET(Global_2418472[iParam0 /*313*/].f_69.f_2, 7)) && !GAMEPLAY::IS_BIT_SET(Global_2418472[iParam0 /*313*/].f_69.f_2, 15)))
	{
		return true;
	}
	return false;
}

void func_263()
{
	GAMEPLAY::SET_BIT(&(Global_2460486.f_1641), 19);
}

bool func_264(int iParam0)
{
	if (iParam0 >= 0)
	{
		if (Local_818.f_674[iParam0] == participant_id_to_int() && Local_3612[participant_id_to_int() /*5*/].f_4 > 0)
		{
			return true;
		}
	}
	return false;
}

bool func_265(int iParam0)
{
	int iVar0;
	
	if (iParam0 >= 0)
	{
		iVar0 = Local_818.f_674[iParam0];
		if (iVar0 >= 0)
		{
			if (func_266(Local_3612[iVar0 /*5*/].f_4, 0))
			{
				return true;
			}
		}
	}
	return false;
}

int func_266(int iParam0, int iParam1)
{
	return iParam0 > iParam1;
}

int func_267(auto uParam0)
{
	return func_268(PLAYER::PLAYER_PED_ID(), Local_818.f_10[uParam0 /*5*/], 1) < 500f;
}

float func_268(int iParam0, Vector3 vParam1, int iParam2)
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
	return INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(vVar0, vParam1, iParam4);
}

int func_269(auto uParam0)
{
	return func_268(PLAYER::PLAYER_PED_ID(), Local_818.f_10[uParam0 /*5*/], 1) < 750f;
}

void func_270(int iParam0)
{
	func_295(&(vLocal_390[iParam0 /*3*/]), Local_818.f_10[iParam0 /*5*/], iParam0);
	if (uLocal_101[iParam0])
	{
		func_290(Local_818.f_10[iParam0 /*5*/], iParam0);
		func_271(Local_818.f_10[iParam0 /*5*/], iParam0);
	}
}

void func_271(struct<4> Param0, auto uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	auto uVar2;
	auto uVar3;
	
	if (Param0.f_3 == participant_id_to_int() && !GAMEPLAY::IS_BIT_SET(uLocal_371[func_17(iParam5)], func_16(iParam5)))
	{
		Local_3612[participant_id_to_int() /*5*/].f_4++;
		if (iLocal_98 == 0)
		{
			iLocal_98 = NETWORK::GET_NETWORK_TIME();
		}
		iVar0 = func_288(ceil(IntToFloat(Local_3612[participant_id_to_int() /*5*/].f_4) / func_289()));
		iVar1 = func_286(ceil(IntToFloat(Local_3612[participant_id_to_int() /*5*/].f_4) / func_287()));
		iVar0 = round(IntToFloat(iVar0) * Global_262145.f_9396);
		iVar1 = round(IntToFloat(iVar1) * Global_262145.f_9397);
		if (func_32())
		{
			iVar0 = round(IntToFloat(iVar0) * func_285());
			iVar1 = round(IntToFloat(iVar1) * func_284());
		}
		if (func_214())
		{
			func_205(-59668082, iVar0, &uVar2, 0, 1, 0);
		}
		else
		{
			_0xFB6DB092FBAE29E6(iVar0, "AM_CP_COLLECTION", &uVar3);
		}
		func_203();
		func_156(0, PLAYER::PLAYER_PED_ID(), "", -875716015, 1626430110, iVar1, 1, -1, 0, 0);
		iLocal_381 += iVar0;
		Global_2445403 = iVar0;
		Local_3600.f_7 += iVar1;
		GAMEPLAY::SET_BIT(&(uLocal_371[func_17(iParam5)]), func_16(iParam5));
		if (Local_3600.f_11 == 0)
		{
			Local_3600.f_11 = _get_posix_time();
		}
		func_272();
		play_sound_frontend(-1, "Checkpoint_Cash_Hit", "GTAO_FM_Events_Soundset", 0);
	}
}

void func_272()
{
	if (!GAMEPLAY::IS_BIT_SET(Local_3612[participant_id_to_int() /*5*/].f_2, 2))
	{
		GAMEPLAY::SET_BIT(&(Local_3612[participant_id_to_int() /*5*/].f_2), 2);
		func_273(1);
	}
}

void func_273(int iParam0)
{
	auto uVar0;
	
	if (iParam0)
	{
		if (func_283())
		{
			func_276(0);
			func_275();
		}
		if (func_397(0))
		{
			uVar0 = func_191(2458, -1, 0);
			GAMEPLAY::CLEAR_BIT(&uVar0, false);
			func_275();
		}
		if (func_397(func_396(func_252(player_id()))))
		{
			uVar0 = func_191(2458, -1, 0);
			GAMEPLAY::CLEAR_BIT(&uVar0, func_396(func_252(player_id())));
			func_275();
		}
		if (func_274())
		{
			func_275();
		}
		if (func_252(player_id()) > -1)
		{
			GAMEPLAY::SET_BIT(&(Global_1610316[player_id() /*174*/].f_1), 7);
		}
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Global_1610316[player_id() /*174*/].f_1), 7);
	}
}

bool func_274()
{
	if (Global_2428492.f_648.f_5 == -1)
	{
		return false;
	}
	return true;
}

void func_275()
{
	if (func_274())
	{
		Global_2428492.f_648.f_16 = 1;
	}
}

void func_276(int iParam0)
{
	if (func_283())
	{
		if (iParam0 == 1)
		{
			if (Global_2460486.f_4254 == -1)
			{
				Global_2460486.f_4254 = 60000;
			}
			func_20(&(Global_2460486.f_4252), 0, 0);
			if (Global_2460486.f_4257 == -1)
			{
				Global_2460486.f_4257 = 10000;
			}
			func_20(&(Global_2460486.f_4255), 0, 0);
		}
		else
		{
			Global_1312416 = 0;
			func_282();
		}
		if ((!network_is_activity_session() && !func_281()) && !func_277(player_id()))
		{
			Global_978142 = 0;
		}
		Global_1610316[player_id() /*174*/].f_8 = 0;
	}
}

bool func_277(int iParam0)
{
	if (func_278(iParam0, 1))
	{
		if (Global_1587523[iParam0 /*444*/] != 6)
		{
			return true;
		}
	}
	return false;
}

bool func_278(int iParam0, int iParam1)
{
	if (iParam1)
	{
		if (func_279(iParam0))
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

int func_279(int iParam0)
{
	return func_280(iParam0);
}

int func_280(auto uParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1587523[uParam0 /*444*/].f_13.f_1, false);
}

auto func_281()
{
	return Global_2434762.f_713;
}

void func_282()
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_283())
		{
			if (func_13(player_id(), 1, 0))
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
			if (func_13(player_id(), 1, 1))
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

auto func_283()
{
	return Global_1312416;
}

auto func_284()
{
	return Global_262145.f_9210;
}

auto func_285()
{
	return Global_262145.f_9209;
}

auto func_286(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_9221;
		
		case 2:
			return Global_262145.f_9222;
		
		case 3:
			return Global_262145.f_9223;
		
		case 4:
			return Global_262145.f_9224;
		
		default:
	}
	return Global_262145.f_9224;
}

auto func_287()
{
	return Global_262145.f_8969;
}

auto func_288(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_9211;
		
		case 2:
			return Global_262145.f_9212;
		
		case 3:
			return Global_262145.f_9213;
		
		case 4:
			return Global_262145.f_9214;
		
		case 5:
			return Global_262145.f_9215;
		
		case 6:
			return Global_262145.f_9216;
		
		case 7:
			return Global_262145.f_9217;
		
		case 8:
			return Global_262145.f_9218;
		
		case 9:
		case 10:
		case 11:
		case 12:
			return Global_262145.f_9219;
		
		default:
	}
	return Global_262145.f_9220;
}

auto func_289()
{
	return Global_262145.f_8968;
}

void func_290(Vector3 vParam0, auto uParam1, auto uParam2, int iParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (!GAMEPLAY::IS_BIT_SET(Local_818.f_3[func_17(iParam5)], func_16(iParam5)))
	{
		if (!GAMEPLAY::IS_BIT_SET(uLocal_366[func_17(iParam5)], func_16(iParam5)))
		{
			if (func_32())
			{
				fVar0 = 6f;
				fVar1 = 6f;
				fVar2 = 4f;
			}
			else
			{
				fVar0 = 3f;
				fVar1 = 2.5f;
				fVar2 = 2.8f;
			}
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vParam0 + Vector(fVar2, 0f, 0f), fVar1, fVar1, fVar0, false, true, 0))
			{
				if (func_291())
				{
					iLocal_365 = get_time_difference(NETWORK::GET_NETWORK_TIME(), Local_818.f_9);
					if (network_get_host_of_this_script() != func_259() && network_is_participant_active(network_get_host_of_this_script()))
					{
						func_258(iLocal_365, iParam5, func_217(network_get_player_index(network_get_host_of_this_script())));
						Local_816 = -1;
						Local_816.f_1 = -1;
					}
					else
					{
						Local_816 = iParam5;
						Local_816.f_1 = iLocal_365;
					}
					GAMEPLAY::SET_BIT(&(uLocal_366[func_17(iParam5)]), func_16(iParam5));
				}
			}
		}
		else if (func_1(&uLocal_384, 250, 0))
		{
			if (network_get_host_of_this_script() != func_259() && network_is_participant_active(network_get_host_of_this_script()))
			{
				func_258(iLocal_365, iParam5, func_217(network_get_player_index(network_get_host_of_this_script())));
				Local_816.f_1 = -1;
				Local_816 = -1;
			}
			else
			{
				Local_816 = iParam5;
				Local_816.f_1 = iLocal_365;
			}
			func_35(&uLocal_384);
		}
	}
}

bool func_291()
{
	if (!func_13(player_id(), 1, 1))
	{
		return false;
	}
	if (func_399(player_id()))
	{
		if ((func_283() && !func_294()) || func_293(player_id(), 21))
		{
			func_368(0);
		}
		else
		{
			func_368(7);
		}
		return false;
	}
	if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (func_292(PLAYER::PLAYER_PED_ID(), 0) != -1)
		{
			return false;
		}
	}
	if (func_73(player_id(), 0))
	{
		return false;
	}
	if (!func_32())
	{
		if (is_ped_in_flying_vehicle(PLAYER::PLAYER_PED_ID()))
		{
			func_368(1);
			return false;
		}
	}
	return true;
}

int func_292(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (is_ped_in_any_vehicle(iParam0, iParam1))
		{
			iVar0 = get_vehicle_ped_is_in(iParam0, iParam1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
				{
					iVar1 = _get_vehicle_model_max_number_of_passengers(ENTITY::GET_ENTITY_MODEL(iVar0));
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

int func_293(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_2418472[iParam0 /*313*/].f_206, iParam1);
}

auto func_294()
{
	return Global_1312416.f_1;
}

void func_295(int iParam0, Vector3 vParam1, auto uParam2, auto uParam3, int iParam4)
{
	Vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	auto uVar6;
	int iVar7;
	
	vVar0 = {vParam1};
	get_hud_colour(12, &iVar3, &iVar4, &iVar5, &uVar6);
	if (!GAMEPLAY::IS_BIT_SET(uLocal_366[func_17(iParam6)], func_16(iParam6)) && !GAMEPLAY::IS_BIT_SET(Local_818.f_3[func_17(iParam6)], func_16(iParam6)))
	{
		if (!does_blip_exist(*iParam0))
		{
			if (!func_309(vVar0, 0f, 0f, 0f, 0) && !func_309(vVar0, 0f, 0f, -2000f, 0))
			{
				*iParam0 = add_blip_for_coord(vVar0);
				set_blip_sprite(*iParam0, 431);
				set_blip_priority(*iParam0, 9);
				set_blip_name_from_text_file(*iParam0, "CPC_BLIP");
				func_303(*iParam0, 25);
				func_301(iParam0, 12);
				_0x75A16C3DA34F1245(*iParam0, true);
			}
		}
		else if (is_pause_menu_active())
		{
			set_blip_alpha(*iParam0, 255);
		}
		else
		{
			func_303(*iParam0, 25);
		}
		if (uLocal_232[iParam6])
		{
			if (!GAMEPLAY::IS_BIT_SET(iLocal_376[func_17(iParam6)], func_16(iParam6)))
			{
				iVar7 = 52;
				if (func_32())
				{
					*iParam0.f_1 = create_checkpoint(iVar7, vVar0 + Vector(4f, 0f, 0f), vVar0, 10f, iVar3, iVar4, iVar5, *iParam0.f_2, 0);
					set_checkpoint_cylinder_height(*iParam0.f_1, 7.5f, 7.5f, 100f);
				}
				else
				{
					*iParam0.f_1 = create_checkpoint(iVar7, vVar0 + Vector(2.8f, 0f, 0f), vVar0, 5f, iVar3, iVar4, iVar5, *iParam0.f_2, 0);
					set_checkpoint_cylinder_height(*iParam0.f_1, 5f, 5f, 100f);
				}
				GAMEPLAY::SET_BIT(&(iLocal_376[func_17(iParam6)]), func_16(iParam6));
			}
			else
			{
				func_300(iParam0.f_1, iParam0.f_2);
			}
			func_298(&vParam1);
		}
		else if (GAMEPLAY::IS_BIT_SET(iLocal_376[func_17(iParam6)], func_16(iParam6)))
		{
			if (func_297(iParam0.f_1, iParam0.f_2))
			{
				delete_checkpoint(*iParam0.f_1);
				GAMEPLAY::CLEAR_BIT(&(iLocal_376[func_17(iParam6)]), func_16(iParam6));
			}
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(iLocal_376[func_17(iParam6)], func_16(iParam6)))
	{
		func_296(iParam0.f_1, iParam0.f_2, iParam0, iParam6);
	}
	else if (does_blip_exist(*iParam0))
	{
		remove_blip(iParam0);
	}
}

void func_296(auto uParam0, auto uParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	auto uVar3;
	
	if (*uParam0 != 0)
	{
		*uParam1 -= 25;
		if (*uParam1 > 0)
		{
			get_hud_colour(1, &iVar0, &iVar1, &iVar2, &uVar3);
			set_checkpoint_rgba(*uParam0, iVar0, iVar1, iVar2, *uParam1);
			_set_checkpoint_icon_rgba(*uParam0, iVar0, iVar1, iVar2, *uParam1);
		}
		else
		{
			if (does_blip_exist(*iParam2))
			{
				remove_blip(iParam2);
			}
			delete_checkpoint(*uParam0);
			*uParam0 = 0;
			GAMEPLAY::CLEAR_BIT(&(iLocal_376[func_17(iParam3)]), func_16(iParam3));
		}
	}
}

bool func_297(auto uParam0, auto uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	auto uVar3;
	
	*uParam1 -= 10;
	if (*uParam1 > 0)
	{
		get_hud_colour(12, &iVar0, &iVar1, &iVar2, &uVar3);
		set_checkpoint_rgba(*uParam0, iVar0, iVar1, iVar2, *uParam1);
		_set_checkpoint_icon_rgba(*uParam0, iVar0, iVar1, iVar2, *uParam1);
		return false;
	}
	else
	{
		return true;
	}
	return true;
}

void func_298(auto uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	
	iVar0 = 239;
	iVar1 = 250;
	iVar2 = 187;
	fVar3 = 5f;
	fVar5 = 64f;
	if (func_32())
	{
		fVar4 = 40f;
	}
	else
	{
		fVar4 = 15f;
	}
	if (!func_299(*uParam0))
	{
		*uParam0 = {*uParam0 + Vector(1.7f, 1.7f, 1.7f)};
		_draw_light_with_range_and_shadow(*uParam0, iVar0, iVar1, iVar2, fVar4, fVar3, fVar5);
	}
}

bool func_299(Vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_300(auto uParam0, auto uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	auto uVar3;
	
	if (*uParam1 < 175)
	{
		*uParam1 += 10;
		get_hud_colour(12, &iVar0, &iVar1, &iVar2, &uVar3);
		set_checkpoint_rgba(*uParam0, iVar0, iVar1, iVar2, *uParam1);
		_set_checkpoint_icon_rgba(*uParam0, iVar0, iVar1, iVar2, *uParam1);
		return false;
	}
	else
	{
		return true;
	}
	return true;
}

void func_301(auto uParam0, int iParam1)
{
	if (does_blip_exist(*uParam0))
	{
		set_blip_colour(*uParam0, func_302(iParam1));
	}
}

int func_302(int iParam0)
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

void func_303(int iParam0, int iParam1)
{
	set_blip_alpha(iParam0, func_304(iParam0, iParam1));
}

int func_304(int iParam0, int iParam1)
{
	float fVar0;
	
	if (!func_262(Global_2428492))
	{
		fVar0 = func_308(iParam0, 400f, 1400f);
		if (iParam1 == 0)
		{
			iParam1 = func_305();
		}
		return round(to_float(255 - iParam1) * fVar0) + iParam1;
	}
	return 255;
}

int func_305()
{
	if (func_306(Global_2428492, 1))
	{
		return 50;
	}
	return 0;
}

int func_306(int iParam0, int iParam1)
{
	if (Global_1312447 != 0)
	{
		return func_307(iParam0) != 0;
	}
	return func_278(iParam0, iParam1);
}

int func_307(int iParam0)
{
	if (func_13(iParam0, 0, 1))
	{
		return Global_2418472[iParam0 /*313*/].f_1;
	}
	return 0;
}

float func_308(int iParam0, float fParam1, float fParam2)
{
	int iVar0;
	float fVar1;
	Vector3 vVar2;
	Vector3 vVar5;
	
	iVar0 = Global_2428492;
	vVar2 = {get_blip_coords(iParam0)};
	vVar2.z = 0f;
	vVar5 = {ENTITY::GET_ENTITY_COORDS(get_player_ped(iVar0), 0)};
	vVar5.z = 0f;
	fVar1 = vmag(vVar5 - vVar2);
	if (fVar1 < fParam1)
	{
		fVar1 = fParam1;
	}
	if (fVar1 > fParam2)
	{
		fVar1 = fParam2;
	}
	fVar1 -= fParam1 / fParam2 - fParam1;
	fVar1--;
	fVar1 *= -1f;
	return fVar1;
}

int func_309(Vector3 vParam0, Vector3 vParam1, int iParam2)
{
	if (iParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_310()
{
	if (func_262(player_id()))
	{
		if (!GAMEPLAY::IS_BIT_SET(iLocal_100, 2))
		{
			GAMEPLAY::SET_BIT(&iLocal_100, 2);
			return true;
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(iLocal_100, 2))
	{
		GAMEPLAY::CLEAR_BIT(&iLocal_100, 2);
		return true;
	}
	return false;
}

int func_311(Vector3 vParam0, float fParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_324() < 10)
	{
		iVar0 = func_323();
		func_312(vParam0, fParam3, iVar0, iParam4);
	}
	return iVar0;
}

void func_312(Vector3 vParam0, auto uParam1, int iParam2, auto uParam3)
{
	func_313(vParam0, 0f, 0f, 0f, uParam3, 0, iParam4, uParam5);
}

void func_313(Vector3 vParam0, Vector3 vParam1, auto uParam2, int iParam3, auto uParam4, auto uParam5)
{
	struct<12> Var0;
	
	if (func_321(player_id()) || uParam9)
	{
		if (Var0.f_10 == 1)
		{
			func_320(&vParam0, &vParam3);
		}
		Var0 = {vParam0};
		Var0.f_3 = {vParam3};
		Var0.f_6 = uParam6;
		Var0.f_10 = iParam7;
		if (func_315(Var0))
		{
			Global_2404956.f_39.f_64 = func_307(player_id());
			func_314(Var0, uParam8);
		}
	}
}

void func_314(struct<12> Param0, auto uParam1)
{
	Global_2404956.f_347[uParam12 /*12*/] = {Param0};
	Global_2404956.f_347[uParam12 /*12*/].f_9 = 1;
}

bool func_315(struct<12> Param0)
{
	struct<12>[] Var0 = new struct<12>[1];
	int iVar13;
	
	Var0[0 /*12*/] = {Param0};
	Var0[0 /*12*/].f_9 = 1;
	iVar13 = 0;
	while (iVar13 < 4)
	{
		if (Global_2404956.f_39[iVar13 /*12*/].f_9 == 1)
		{
			if (!func_316(Global_2404956.f_39[iVar13 /*12*/], &Var0))
			{
				return false;
			}
		}
		iVar13++;
	}
	return true;
}

bool func_316(Vector3 vParam0, auto uParam1, auto uParam2, auto uParam3, auto uParam4, auto uParam5, auto uParam6, auto uParam7, auto uParam8, auto uParam9, auto uParam10)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam12)
	{
		if (*(uParam12[iVar0 /*12*/]).f_9)
		{
			switch (*(uParam12[iVar0 /*12*/]).f_10)
			{
				case 0:
					switch (vParam0.f_10)
					{
						case 0:
							if (func_319(vParam0, vParam0.f_6, *(uParam12[iVar0 /*12*/]), *(uParam12[iVar0 /*12*/]).f_6))
							{
								return false;
							}
							break;
						
						case 1:
							if (func_317(vParam0, vParam0.f_3, *(uParam12[iVar0 /*12*/]), *(uParam12[iVar0 /*12*/]).f_6))
							{
								return false;
							}
							break;
						
						case 2:
							break;
					}
					break;
				
				case 1:
					switch (vParam0.f_10)
					{
						case 0:
							if (func_319(vParam0, vParam0.f_6, *(uParam12[iVar0 /*12*/]), *(uParam12[iVar0 /*12*/]).f_6))
							{
								return false;
							}
							break;
						
						case 1:
							if (func_317(vParam0, vParam0.f_3, *(uParam12[iVar0 /*12*/]), *(uParam12[iVar0 /*12*/]).f_6))
							{
								return false;
							}
							break;
						
						case 2:
							break;
					}
					break;
				
				case 2:
					break;
				}
		}
		iVar0++;
	}
	if (vmag(vParam0) == 0f)
	{
		return false;
	}
	return true;
}

int func_317(Vector3 vParam0, Vector3 vParam1, Vector3 vParam2, float fParam3)
{
	Vector3 vVar0;
	Vector3 vVar3;
	float fVar6;
	
	fVar6 = fParam9 * 0.7071068f;
	vVar0 = {vParam6 - Vector(fVar6, fVar6, fVar6)};
	vVar3 = {vParam6 + Vector(fVar6, fVar6, fVar6)};
	return func_318(vParam0, vParam3, vVar0, vVar3);
}

bool func_318(Vector3 vParam0, Vector3 vParam1, Vector3 vParam2, Vector3 vParam3)
{
	if (((((vParam0.x >= vParam6.x && vParam0.y >= vParam6.y) && vParam0.z >= vParam6.z) && vParam3.x <= vParam9.x) && vParam3.y <= vParam9.y) && vParam3.z <= vParam9.z)
	{
		return true;
	}
	return false;
}

bool func_319(Vector3 vParam0, float fParam1, Vector3 vParam2, float fParam3)
{
	Vector3 vVar0;
	
	vVar0 = {vParam4 - vParam0};
	if (vmag(vVar0) + fParam3 < fParam7)
	{
		return true;
	}
	return false;
}

void func_320(auto uParam0, auto uParam1)
{
	Vector3 vVar0;
	Vector3 vVar3;
	
	if (*uParam0 <= *uParam1)
	{
		vVar0.x = *uParam0;
		vVar3.x = *uParam1;
	}
	else
	{
		vVar0.x = *uParam1;
		vVar3.x = *uParam0;
	}
	if (*uParam0.f_1 <= *uParam1.f_1)
	{
		vVar0.y = *uParam0.f_1;
		vVar3.y = *uParam1.f_1;
	}
	else
	{
		vVar0.y = *uParam1.f_1;
		vVar3.y = *uParam0.f_1;
	}
	if (*uParam0.f_2 <= *uParam1.f_2)
	{
		vVar0.z = *uParam0.f_2;
		vVar3.z = *uParam1.f_2;
	}
	else
	{
		vVar0.z = *uParam1.f_2;
		vVar3.z = *uParam0.f_2;
	}
	*uParam0 = {vVar0};
	*uParam1 = {vVar3};
}

bool func_321(int iParam0)
{
	if ((func_306(iParam0, 1) || func_322(iParam0)) || func_140(iParam0, 0))
	{
		return true;
	}
	return false;
}

int func_322(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1610316[iVar0 /*174*/] != -1;
	}
	return false;
}

int func_323()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!Global_2404956.f_347[iVar0 /*12*/].f_9)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_324()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2404956.f_347[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_325()
{
	if (!func_121())
	{
		return;
	}
	if (!GAMEPLAY::GET_HASH_KEY(get_this_script_name()) == Global_1312577.f_7)
	{
		return;
	}
	func_117();
}

void func_326()
{
	Global_1724872 = 1;
	if (!GAMEPLAY::IS_BIT_SET(Global_2467235, false))
	{
		GAMEPLAY::SET_BIT(&Global_2467235, false);
		GAMEPLAY::SET_BIT(&Global_1724873, false);
	}
	if (!GAMEPLAY::IS_BIT_SET(Global_2467235, true))
	{
		GAMEPLAY::SET_BIT(&Global_2467235, true);
		GAMEPLAY::SET_BIT(&Global_1724873, true);
	}
	if (!GAMEPLAY::IS_BIT_SET(Global_2467235, 5))
	{
		GAMEPLAY::SET_BIT(&Global_2467235, 5);
		GAMEPLAY::SET_BIT(&Global_1724873, 5);
	}
	if (_does_door_exist(-355737150))
	{
		_set_door_acceleration_limit(-355737150, 0, 0, 0);
	}
	if (_does_door_exist(-580979506))
	{
		_set_door_acceleration_limit(-580979506, 0, 0, 0);
	}
	if (_does_door_exist(-1426452475))
	{
		_set_door_acceleration_limit(-1426452475, 0, 0, 0);
	}
	if (_does_door_exist(745417724))
	{
		_set_door_acceleration_limit(745417724, 0, 0, 0);
	}
	if (_does_door_exist(-1305304906))
	{
		_set_door_acceleration_limit(-1305304906, 0, 0, 0);
	}
	if (_does_door_exist(-1543175077))
	{
		_set_door_acceleration_limit(-1543175077, 0, 0, 0);
	}
	if (_does_door_exist(-811770997))
	{
		_set_door_acceleration_limit(-811770997, 0, 0, 0);
	}
}

void func_327()
{
	char* sVar0;
	
	if (!GAMEPLAY::IS_BIT_SET(iLocal_100, 5) && !is_radar_hidden())
	{
		if (Local_818.f_707)
		{
			sVar0 = "CPC_TITLEA";
		}
		else
		{
			sVar0 = "CPC_TITLE";
		}
		func_42(62, sVar0, "CPC_START", func_47(), -1, func_47());
		flash_minimap_display();
		GAMEPLAY::SET_BIT(&iLocal_100, 5);
	}
}

void func_328(int iParam0, float fParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	set_audio_flag("DisableFlightMusic", 1);
	if (iParam0 != 133)
	{
		set_audio_flag("WantedMusicDisabled", 1);
	}
	Global_2460486.f_4573 = -1;
	iVar0 = (func_140(player_id(), 0) && func_139(player_id()));
	if (iParam6)
	{
		func_344(21, 1);
	}
	else
	{
		func_343(iParam0, -1);
		if (func_7(player_id()))
		{
			Global_1573883.f_3 = iParam0;
		}
		else
		{
			func_342(iParam0);
		}
		Global_1573883.f_4 = -1;
		if (func_7(player_id()))
		{
			GAMEPLAY::SET_BIT(&(Global_1573883.f_1), 5);
		}
		if ((func_283() && !func_294()) || func_293(player_id(), 21))
		{
			GAMEPLAY::SET_BIT(&(Global_1573883.f_1), 4);
		}
		GAMEPLAY::CLEAR_BIT(&(Global_1573883.f_1), 17);
		GAMEPLAY::SET_BIT(&(Global_1573883.f_1), 20);
		if (func_341(iParam0))
		{
			func_340();
		}
	}
	if (!iVar0)
	{
		if (fParam1 != 1f)
		{
			func_337(fParam1);
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
		if (func_335(iParam0))
		{
			set_max_wanted_level(0);
			set_player_wanted_level(player_id(), 0, 0);
			set_player_wanted_level_now(player_id(), 0);
			GAMEPLAY::SET_BIT(&(Global_1573883.f_1), 8);
		}
		if (iParam3)
		{
			func_334(1);
			if (func_235(0))
			{
				GAMEPLAY::SET_BIT(&(Global_1573883.f_1), 9);
			}
			GAMEPLAY::SET_BIT(&(Global_1573883.f_1), 14);
		}
		if (iParam4)
		{
			func_332(1);
			GAMEPLAY::SET_BIT(&(Global_1573883.f_1), 12);
		}
		if (iParam5)
		{
			func_331();
			GAMEPLAY::SET_BIT(&(Global_1573883.f_1), 12);
		}
		if (!iParam6)
		{
			if (func_329(iParam0))
			{
				GAMEPLAY::SET_BIT(&(Global_1573883.f_1), 21);
			}
		}
	}
	Global_2459366 = 1;
}

bool func_329(int iParam0)
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
	if (func_330())
	{
		return true;
	}
	return false;
}

bool func_330()
{
	switch (func_251())
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

void func_331()
{
	GAMEPLAY::SET_BIT(&(Global_2460486.f_4564), false);
}

void func_332(int iParam0)
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
		func_333(iVar0);
		iVar0++;
	}
}

void func_333(int iParam0)
{
	Global_91330.f_156[iParam0] = 1;
	Global_91330.f_155 = 1;
}

void func_334(int iParam0)
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

bool func_335(int iParam0)
{
	switch (iParam0)
	{
		case 136:
		case 144:
		case 129:
			return true;
		
		case 141:
			if (func_336(player_id()))
			{
				return true;
			}
			break;
	}
	return false;
}

int func_336(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return GAMEPLAY::IS_BIT_SET(Global_1610316[iVar0 /*174*/].f_1, false);
	}
	return false;
}

void func_337(float fParam0)
{
	float fVar0;
	
	if (GAMEPLAY::GET_HASH_KEY(get_this_script_name()) == func_338())
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

int func_338()
{
	switch (func_339())
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

auto func_339()
{
	return Global_25120;
}

void func_340()
{
	Global_2418472[player_id() /*313*/].f_198 = 0;
	GAMEPLAY::CLEAR_BIT(&(Global_2460486.f_4420), true);
}

bool func_341(int iParam0)
{
	switch (iParam0)
	{
		case 136:
			return true;
		
		default:
	}
	return false;
}

void func_342(int iParam0)
{
	Global_1610316[player_id() /*174*/] = iParam0;
}

void func_343(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != -1 || iParam1 != -1)
	{
		iVar0 = iParam0;
		if (iVar0 == -1)
		{
			iVar0 = iParam1;
		}
		if (func_397(0) || func_397(func_396(iVar0)))
		{
			GAMEPLAY::SET_BIT(&(Global_1610316[player_id() /*174*/].f_1), 2);
		}
		else
		{
			GAMEPLAY::CLEAR_BIT(&(Global_1610316[player_id() /*174*/].f_1), 2);
		}
	}
}

void func_344(int iParam0, int iParam1)
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

void func_345()
{
	Vector3 vVar0;
	auto uVar3;
	int iVar4;
	float fVar5;
	int iVar6;
	auto uVar7;
	Vector3 vVar8;
	int iVar11;
	int iVar12;
	int iVar13;
	Vector3 vVar14;
	float fVar17;
	
	if (func_13(player_id(), 1, 1))
	{
		if ((!func_248() && !func_358(player_id(), 0, 0)) && !func_357(player_id()))
		{
			fVar5 = 2.147484E+09f;
			iVar6 = -1;
			vVar8 = {ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)};
			iVar11 = is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0);
			iVar12 = func_355();
			iVar4 = false;
			while (iVar4 < 10)
			{
				iVar13 = Local_818.f_729[iVar4 /*2*/].f_1;
				if (network_ENTITY::DOES_ENTITY_EXIST_with_network_id(iVar13) && is_vehicle_driveable(net_to_veh(iVar13), 0))
				{
					if (!iVar12)
					{
						if (iVar11 && get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0) == net_to_veh(iVar13))
						{
							func_273(1);
						}
					}
					if (func_30(iVar4, &vVar0, &uVar3))
					{
						vVar14 = {ENTITY::GET_ENTITY_COORDS(net_to_veh(iVar13), 1)};
						if (vdist(vVar14, vVar0) <= 10f)
						{
							if (func_354(vVar14))
							{
								GAMEPLAY::SET_BIT(&uVar7, iVar4);
							}
							if (func_352(vVar14, vVar8))
							{
								if (!func_350(vVar0, 100f))
								{
									fVar17 = vdist(vVar14, vVar8);
									if (fVar17 < fVar5)
									{
										fVar5 = fVar17;
										iVar6 = iVar4;
									}
								}
							}
						}
					}
				}
				iVar4++;
			}
			Global_1610316[player_id() /*174*/].f_7 = uVar7;
			if ((is_ped_in_flying_vehicle(PLAYER::PLAYER_PED_ID()) || (is_entity_in_air(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))) || Local_3612[participant_id_to_int() /*5*/].f_4 > 0)
			{
				if ((fVar5 < 2.147484E+09f && iVar6 >= 0) && iVar6 < 10)
				{
					if (func_30(iVar6, &vVar0, &uVar3))
					{
						iLocal_783 = 1;
						func_349(vVar0, 0f, 60f, 1, 20f, 0, 0, 10f, 1, 1);
						func_348(vVar0, 1, 0);
						func_347(10, 0, 0);
					}
				}
			}
			else
			{
				func_346();
			}
		}
		else
		{
			func_346();
		}
	}
}

void func_346()
{
	if (iLocal_783)
	{
		func_129();
		func_127();
		iLocal_783 = 0;
	}
}

void func_347(int iParam0, int iParam1, int iParam2)
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

void func_348(Vector3 vParam0, int iParam1, int iParam2)
{
	Global_2404956.f_39.f_49 = {vParam0};
	Global_2404956.f_39.f_52 = iParam3;
	Global_2404956.f_39.f_53 = iParam4;
}

void func_349(Vector3 vParam0, float fParam1, float fParam2, int iParam3, float fParam4, int iParam5, int iParam6, float fParam7, int iParam8, int iParam9)
{
	struct<25> Var0;
	
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	if (is_thread_active(Global_2410702.f_6))
	{
		if (!Global_2410702.f_6 == get_id_of_this_thread())
		{
			return;
		}
	}
	else
	{
		Global_2410702.f_6 = get_id_of_this_thread();
	}
	Var0.f_6 = Global_2410702.f_6;
	Var0 = {vParam0};
	Var0.f_5 = fParam3;
	Var0.f_4 = fParam4;
	Var0.f_7 = iParam5;
	Var0.f_3 = fParam6;
	Var0.f_8 = iParam8;
	Var0.f_9 = iParam7;
	Var0.f_10 = 0;
	Var0.f_11 = {0f, 0f, 0f};
	Var0.f_14 = {0f, 0f, 0f};
	Var0.f_17 = 0f;
	Var0.f_21 = fParam9;
	Var0.f_22 = iParam10;
	if (func_321(player_id()))
	{
		Var0.f_23 = 1;
	}
	else
	{
		Var0.f_23 = 0;
	}
	if (Var0.f_21 < 1f)
	{
		Var0.f_21 = 1f;
	}
	Var0.f_24 = iParam11;
	Global_2410702 = {Var0};
}

int func_350(Vector3 vParam0, float fParam1)
{
	return func_351(vParam0, fParam3, player_id(), 0, 0);
}

bool func_351(Vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam4 == iVar0 || iParam5 == 1)
		{
			iVar1 = iVar0;
			if (iParam6)
			{
				if (func_13(iVar1, 0, 1) && func_13(iParam4, 0, 1))
				{
					if (get_player_team(iVar1) == get_player_team(iParam4))
					{
						return false;
					}
				}
			}
			if (func_13(iVar1, 0, 1) && func_13(iParam4, 0, 1))
			{
				if (Global_2413760.f_260[iVar0])
				{
					if (vdist(Global_2413760.f_130[iVar0 /*3*/], vParam0) < fParam3)
					{
						return true;
					}
				}
				else if (vdist(func_29(iVar1), vParam0) < fParam3)
				{
					return true;
				}
			}
			else if (Global_2413760.f_260[iVar0])
			{
				if (vdist(Global_2413760.f_130[iVar0 /*3*/], vParam0) < fParam3)
				{
					return true;
				}
			}
			else if (func_13(iVar1, 0, 1))
			{
				if (vdist(func_29(iVar1), vParam0) < fParam3)
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_352(Vector3 vParam0, Vector3 vParam1)
{
	Vector3 vVar0;
	
	if (Local_818.f_8 == 3)
	{
		vVar0 = {func_353(Local_818.f_712)};
		if (vdist(vParam3, vVar0) < 3500f)
		{
			if (vdist(vParam0, vVar0) > 3500f)
			{
				return false;
			}
		}
	}
	return true;
}

Vector3 func_353(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1710.367f, -464.7253f, 169.8001f;
		
		case 1:
			return -966.3996f, -973.0624f, 2.8632f;
		
		case 2:
			return -1347.06f, 4123.072f, 62.2841f;
		
		case 3:
			return 1941.779f, 3847.167f, 34.3796f;
		
		default:
	}
	return 0f, 0f, 0f;
}

bool func_354(Vector3 vParam0)
{
	Vector3 vVar0;
	
	if (Local_818.f_8 == 3)
	{
		vVar0 = {func_353(Local_818.f_712)};
		if (vdist(vParam0, vVar0) > 2500f)
		{
			return false;
		}
	}
	return true;
}

bool func_355()
{
	if (((((func_356(player_id()) || func_283()) || func_294()) || func_293(player_id(), 21)) || func_7(player_id())) || func_6(player_id()))
	{
		return true;
	}
	return false;
}

int func_356(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return GAMEPLAY::IS_BIT_SET(Global_1610316[iVar0 /*174*/].f_1, 7);
	}
	return false;
}

bool func_357(int iParam0)
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

bool func_358(int iParam0, int iParam1, int iParam2)
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
		if (func_359(iParam0))
		{
			return true;
		}
	}
	return false;
}

int func_359(int iParam0)
{
	if (iParam0 != func_75())
	{
		if (func_13(iParam0, 1, 1))
		{
			if (Global_2418472[iParam0 /*313*/].f_305.f_1 != -1)
			{
				return func_360(Global_2418472[iParam0 /*313*/].f_305.f_1) == 0;
			}
		}
	}
	return false;
}

int func_360(int iParam0)
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

void func_361(auto uParam0, char* sParam1)
{
	char* sVar0;
	
	if (func_247(0) == 0)
	{
		return;
	}
	sVar0 = "HUD_STARTING";
	if (!func_200(sParam1))
	{
		sVar0 = sParam1;
	}
	func_109(uParam0, sVar0, 0, 0, -1, 0, 3, 0, 1, 0, 0, 0, 0, 0, 0, 0);
}

char* func_362(int iParam0)
{
	char* sVar0;
	
	sVar0 = get_this_script_name();
	return "HUD_STARTING";
	if (are_strings_equal(sVar0, "am_hot_target"))
	{
		return "AST_HOT_TARG";
	}
	else if (are_strings_equal(sVar0, "am_cp_collection"))
	{
		return "AST_CHK_COLL";
	}
	else if (are_strings_equal(sVar0, "am_challenges"))
	{
		switch (iParam0)
		{
			case 0:
				return "AST_CHALL_LJ";
			
			case 1:
				return "AST_CHALL_LS";
			
			case 2:
				return "AST_CHALL_HS";
			
			case 3:
				return "AST_CHALL_LST";
			
			case 4:
				return "AST_CHALL_LW";
			
			case 5:
				return "AST_CHALL_NC";
			
			case 6:
				return "AST_CHALL_LP";
			
			case 7:
				return "AST_CHALL_VS";
			
			case 8:
				return "AST_CHALL_NM";
			
			case 9:
				return "AST_CHALL_RD";
			
			case 10:
				return "AST_CHALL_LF";
			
			case 11:
				return "AST_CHALL_LFL";
			
			case 12:
				return "AST_CHALL_LFI";
			
			case 13:
				return "AST_CHALL_LB";
			
			case 14:
				return "AST_CHALL_MB";
			
			case 15:
				return "AST_CHALL_HSH";
			
			case 16:
				return "AST_CHALL_DB";
			
			case 17:
				return "AST_CHALL_ML";
			
			case 18:
				return "AST_CHALL_LSN";
			
			default:
		}
	}
	else if (are_strings_equal(sVar0, "am_penned_in"))
	{
		return "AST_PENNED";
	}
	else if (are_strings_equal(sVar0, "am_pass_the_parcel"))
	{
		return "AST_PARCEL";
	}
	else if (are_strings_equal(sVar0, "am_hot_property"))
	{
		return "AST_PROPERTY";
	}
	else if (are_strings_equal(sVar0, "am_dead_drop"))
	{
		return "AST_DDROP";
	}
	else if (are_strings_equal(sVar0, "am_king_of_the_castle"))
	{
		return "AST_KCASTLE";
	}
	else if (are_strings_equal(sVar0, "AM_CRIMINAL_DAMAGE"))
	{
		return "AST_BLAST";
	}
	else if (are_strings_equal(sVar0, "AM_KILL_LIST"))
	{
		return "AST_UWARF";
	}
	else if (are_strings_equal(sVar0, "AM_HUNT_THE_BEAST"))
	{
		return "AST_BEAST";
	}
	return "";
}

int func_363(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void func_364(int iParam0)
{
	if (IntToFloat(iParam0) < get_frame_time())
	{
		Global_2460486.f_4563 = 0;
	}
	else if (iParam0 < 6000)
	{
		if (!GAMEPLAY::IS_BIT_SET(Global_2460486.f_4563, true))
		{
			play_sound_frontend(-1, "5s_To_Event_Start_Countdown", "GTAO_FM_Events_Soundset", 0);
			Global_2460486.f_4563 = 0;
			GAMEPLAY::SET_BIT(&(Global_2460486.f_4563), true);
		}
	}
}

int func_365(auto uParam0, int iParam1, int iParam2)
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

void func_366(int iParam0)
{
	int iVar0;
	Vector3 vVar1;
	
	if (func_32())
	{
		if (func_13(player_id(), 1, 1))
		{
			iVar0 = 0;
			while (iVar0 < 10)
			{
				if (((!iParam0 && network_ENTITY::DOES_ENTITY_EXIST_with_network_id(Local_818.f_729[iVar0 /*2*/].f_1)) && is_vehicle_driveable(net_to_veh(Local_818.f_729[iVar0 /*2*/].f_1), 0)) && is_vehicle_seat_free(net_to_veh(Local_818.f_729[iVar0 /*2*/].f_1), -1))
				{
					if (!does_blip_exist(iLocal_791[iVar0]))
					{
						iLocal_791[iVar0] = add_blip_for_entity(net_to_ent(Local_818.f_729[iVar0 /*2*/].f_1));
						set_blip_priority(iLocal_791[iVar0], 9);
						set_blip_name_from_text_file(iLocal_791[iVar0], "AMCH_AC");
						set_blip_sprite(iLocal_791[iVar0], func_367(iVar0));
						func_301(&(iLocal_791[iVar0]), 9);
					}
					else
					{
						vVar1 = {ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)};
						if (vdist(vVar1, ENTITY::GET_ENTITY_COORDS(net_to_veh(Local_818.f_729[iVar0 /*2*/].f_1), 1)) <= 150f)
						{
							_0x75A16C3DA34F1245(iLocal_791[iVar0], true);
						}
						else
						{
							_0x75A16C3DA34F1245(iLocal_791[iVar0], false);
						}
					}
				}
				else if (does_blip_exist(iLocal_791[iVar0]))
				{
					remove_blip(&(iLocal_791[iVar0]));
				}
				iVar0++;
			}
		}
	}
}

int func_367(int iParam0)
{
	switch (Local_818.f_729[iParam0 /*2*/])
	{
		case joaat("maverick"):
			return 64;
		
		case joaat("mammatus"):
			return 423;
		
		default:
	}
	return -1;
}

void func_368(int iParam0)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	
	if (!is_radar_hidden())
	{
		switch (iParam0)
		{
			case 0:
				if (!GAMEPLAY::IS_BIT_SET(iLocal_781, iParam0))
				{
					if (!is_pause_menu_active())
					{
						func_371("CPC_PASSIVE", 30000);
						func_133(1);
						GAMEPLAY::SET_BIT(&iLocal_781, iParam0);
					}
				}
				break;
			
			case 1:
				if (!GAMEPLAY::IS_BIT_SET(iLocal_781, iParam0))
				{
					if (!is_pause_menu_active())
					{
						func_371("CPC_NOAIR", 30000);
						func_133(1);
						GAMEPLAY::SET_BIT(&iLocal_781, iParam0);
					}
				}
				break;
			
			case 2:
				if (!GAMEPLAY::IS_BIT_SET(iLocal_781, iParam0))
				{
					if ((!is_pause_menu_active() && !is_help_message_being_displayed()) && func_32())
					{
						func_371("AMCH_AIRAV", 30000);
						func_133(1);
						GAMEPLAY::SET_BIT(&iLocal_781, iParam0);
					}
				}
				break;
			
			case 3:
				if (!GAMEPLAY::IS_BIT_SET(iLocal_781, iParam0))
				{
					if (!is_pause_menu_active())
					{
						func_371("AMCH_BLOW", 30000);
						func_133(1);
						GAMEPLAY::SET_BIT(&iLocal_781, iParam0);
					}
				}
				break;
			
			case 4:
				if (!GAMEPLAY::IS_BIT_SET(iLocal_781, iParam0))
				{
					if (!is_pause_menu_active() && !func_370(62))
					{
						if (Local_818.f_707)
						{
							sVar0 = "CPC_HELPA";
						}
						else
						{
							sVar0 = "CPC_HELP";
						}
						func_371(sVar0, 30000);
						func_133(1);
						GAMEPLAY::SET_BIT(&iLocal_781, iParam0);
					}
				}
				break;
			
			case 5:
				if (!GAMEPLAY::IS_BIT_SET(iLocal_781, iParam0))
				{
					if (((!is_pause_menu_active() && !func_370(62)) && !is_help_message_being_displayed()) && GAMEPLAY::IS_BIT_SET(iLocal_781, 4))
					{
						if (Local_818.f_707)
						{
							sVar1 = "CPC_HELPA2";
						}
						else
						{
							sVar1 = "CPC_HELP2";
						}
						func_371(sVar1, 30000);
						func_133(1);
						GAMEPLAY::SET_BIT(&iLocal_781, iParam0);
					}
				}
				break;
			
			case 6:
				if (!GAMEPLAY::IS_BIT_SET(iLocal_781, iParam0))
				{
					if (((!is_pause_menu_active() && !func_370(62)) && !is_help_message_being_displayed()) && GAMEPLAY::IS_BIT_SET(iLocal_781, 5))
					{
						if (Local_818.f_707)
						{
							sVar2 = "CPC_WARNA";
						}
						else
						{
							sVar2 = "CPC_WARN";
						}
						func_369(sVar2, func_124(), 30000);
						func_133(1);
						play_sound_frontend(-1, "Event_Start_Text", "GTAO_FM_Events_Soundset", 0);
						GAMEPLAY::SET_BIT(&iLocal_781, iParam0);
					}
				}
				break;
			
			case 7:
				if (!GAMEPLAY::IS_BIT_SET(iLocal_781, iParam0))
				{
					if (!is_pause_menu_active())
					{
						func_371("CPC_PASSIV1", 30000);
						func_133(1);
						GAMEPLAY::SET_BIT(&iLocal_781, iParam0);
					}
				}
				break;
			}
	}
}

void func_369(char* sParam0, char* sParam1, int iParam2)
{
	_set_text_component_format(sParam0);
	_add_text_component_item_string(sParam1);
	_display_help_text_from_string_label(0, 0, false, iParam2);
}

int func_370(int iParam0)
{
	return Global_2428492.f_2171[0 /*72*/].f_1 == iParam0;
}

void func_371(char* sParam0, int iParam1)
{
	_set_text_component_format(sParam0);
	_display_help_text_from_string_label(0, 0, true, iParam1);
}

void func_372(int iParam0)
{
	Local_3612[participant_id_to_int() /*5*/].f_3 = iParam0;
}

void func_373(int iParam0)
{
	if (iParam0)
	{
		GAMEPLAY::SET_BIT(&(Global_1610316[player_id() /*174*/].f_1), 4);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Global_1610316[player_id() /*174*/].f_1), 4);
	}
}

bool func_374()
{
	if (func_293(player_id(), 21))
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
	if (func_277(player_id()))
	{
		return false;
	}
	if (func_395())
	{
		return false;
	}
	if (func_394(player_id()))
	{
		return false;
	}
	if (func_393())
	{
		return false;
	}
	if (func_385(player_id()) == 3)
	{
		return false;
	}
	if (func_384(func_153()))
	{
		return false;
	}
	if (func_383())
	{
		return false;
	}
	if (func_248())
	{
		return false;
	}
	if (network_is_activity_session())
	{
		return false;
	}
	if (func_279(player_id()))
	{
		return false;
	}
	if (!func_381())
	{
		return false;
	}
	if (func_293(player_id(), 0) || func_293(player_id(), 3))
	{
		return false;
	}
	if ((func_293(player_id(), 12) || func_293(player_id(), 14)) || func_293(player_id(), 13))
	{
		return false;
	}
	if (func_358(player_id(), 0, 0))
	{
		return false;
	}
	if (func_380(player_id()))
	{
		return false;
	}
	if (func_379())
	{
		return false;
	}
	if (Global_1715399)
	{
		return false;
	}
	if (func_378(player_id()))
	{
		return false;
	}
	if (func_377())
	{
		return false;
	}
	if (func_375(player_id()) && Global_1587316.f_168)
	{
		return false;
	}
	return true;
}

bool func_375(int iParam0)
{
	if (func_376(Global_1587523[iParam0 /*444*/].f_250.f_9))
	{
		return true;
	}
	return false;
}

bool func_376(int iParam0)
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

bool func_377()
{
	if (Global_2552549.f_796 > -1)
	{
		return true;
	}
	return false;
}

int func_378(int iParam0)
{
	if (!func_13(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1587523[iParam0 /*444*/].f_35;
}

int func_379()
{
	return Global_91330.f_297 > 0;
}

int func_380(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1587523[iParam0 /*444*/].f_250.f_7, 11);
}

bool func_381()
{
	if (func_382() == 0)
	{
		return true;
	}
	return false;
}

auto func_382()
{
	return Global_1312466.f_18;
}

auto func_383()
{
	return Global_1315913;
}

bool func_384(int iParam0)
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

int func_385(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	auto uVar3;
	auto uVar4;
	
	iVar0 = 2;
	iVar1 = ((func_322(iParam0) && !func_7(iParam0)) && !GAMEPLAY::IS_BIT_SET(Global_1610316[iParam0 /*174*/].f_1, 8));
	iVar2 = func_392(iParam0);
	uVar3 = func_283();
	uVar4 = func_386();
	if ((iVar1 && (func_356(iParam0) || func_336(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!iVar2 && !func_139(iParam0)) && !func_137(iParam0)))
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

bool func_386()
{
	if ((func_138(player_id(), 21) || func_138(player_id(), 22)) || func_390())
	{
		return true;
	}
	if (func_388())
	{
		func_387(22);
		return true;
	}
	return false;
}

void func_387(int iParam0)
{
	GAMEPLAY::SET_BIT(&(Global_1610316[player_id() /*174*/].f_10.f_4), iParam0);
}

bool func_388()
{
	if (func_140(player_id(), 0))
	{
		if ((func_283() && !func_294()) || func_293(player_id(), 21))
		{
			if (!func_138(player_id(), 27))
			{
				return true;
			}
		}
		else
		{
			func_389(27);
		}
	}
	return false;
}

void func_389(int iParam0)
{
	GAMEPLAY::CLEAR_BIT(&(Global_1610316[player_id() /*174*/].f_10.f_4), iParam0);
}

int func_390()
{
	return func_391(283, -1);
}

int func_391(int iParam0, int iParam1)
{
	int iVar0;
	auto uVar1;
	
	iVar0 = Global_2490231[iParam0 /*5*/][func_187(iParam1)];
	if (stat_get_bool(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_392(int iParam0)
{
	return func_138(iParam0, 20);
}

int func_393()
{
	return Global_1587523[player_id() /*444*/] == 5;
}

bool func_394(int iParam0)
{
	if (Global_2418472[iParam0 /*313*/].f_257.f_4 != 0 || Global_2418472[iParam0 /*313*/].f_257.f_5)
	{
		return true;
	}
	return false;
}

int func_395()
{
	return GAMEPLAY::IS_BIT_SET(Global_1587523[player_id() /*444*/].f_39.f_18, false);
}

int func_396(int iParam0)
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

int func_397(int iParam0)
{
	int iVar0;
	
	iVar0 = func_191(2458, -1, 0);
	return GAMEPLAY::IS_BIT_SET(iVar0, iParam0);
}

void func_398()
{
	if (Local_3612[participant_id_to_int() /*5*/].f_4 != 0)
	{
		Local_3612[participant_id_to_int() /*5*/].f_4 = 0;
	}
}

int func_399(int iParam0)
{
	if (iParam0 == player_id())
	{
		if ((func_283() && !func_294()) || func_293(player_id(), 21))
		{
			return true;
		}
		if (func_36(&(Global_1573883.f_13)))
		{
			if (!func_1(&(Global_1573883.f_13), Global_262145.f_14, 0))
			{
				return true;
			}
			func_35(&(Global_1573883.f_13));
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(Global_1610316[iParam0 /*174*/].f_1, 10))
	{
		return true;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1610316[iParam0 /*174*/].f_1, 9);
}

int func_400(int iParam0)
{
	return func_73(iParam0, 0);
}

void func_401()
{
	func_402(&(Local_1568.f_527), &Local_1568, 23, &(Local_1568.f_1), &(Local_1568.f_110), -1, 0);
}

void func_402(auto uParam0, int iParam1, int iParam2, auto uParam3, auto uParam4, int iParam5, int iParam6)
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
	
	if (func_503(iParam2))
	{
		return;
	}
	fVar45 = -1f;
	iVar46 = -1;
	iVar47 = -1;
	iVar49 = false;
	iVar50 = 0;
	*uParam3.f_36 = 0;
	if (func_501() || iParam2 == 24)
	{
		if (func_463(iParam1, iParam2, uParam3, Global_1573685, 0, func_504()))
		{
			func_462(1);
			if ((!func_461() && !func_460()) || GAMEPLAY::IS_BIT_SET(Global_2460486.f_4426, true))
			{
				if (func_459())
				{
					func_458();
				}
				else
				{
					_set_screen_draw_position(76, 84);
					if (*uParam3.f_27 == 0)
					{
						func_457(1);
						Global_1573685 = 0;
						iVar54 = -1;
						if (Global_1573833 != 1)
						{
							func_456(iParam1);
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
								if (func_13(int_to_playerindex(iVar52), 0, 1))
								{
									iVar35 = int_to_playerindex(iVar52);
									if (!func_73(iVar35, 0))
									{
										if ((_0x9DE986FC9A87C474(iVar35, player_id()) || Global_2418472[iVar35 /*313*/].f_232 != -1) || func_455(iVar35))
										{
											iVar44 = iVar35;
											if (func_64(iVar35))
											{
												iVar1[iVar44] = iVar55;
												iVar55++;
												iVar0++;
												func_452(&iVar1, iVar35, &iVar55, &iVar0);
											}
										}
									}
								}
								iVar52++;
							}
						}
						if (!func_450(player_id(), 0))
						{
							iVar34 = iVar0 > 0;
						}
						iVar52 = false;
						while (iVar52 < 32)
						{
							if (func_448())
							{
								if (func_13(int_to_playerindex(iVar52), 0, 1))
								{
									iVar35 = int_to_playerindex(iVar52);
								}
								else
								{
									iVar35 = func_75();
								}
							}
							else
							{
								iVar35 = *(uParam0[iVar52 /*47*/]).f_1;
							}
							if ((func_447(iVar35) && func_443(iVar35, iParam2)) && func_13(iVar35, 0, 1))
							{
								iVar44 = iVar35;
								iVar42 = Global_1587523[iVar44 /*444*/].f_195.f_6;
								Var38 = {func_438(iVar35)};
								if (iVar35 == player_id())
								{
									*uParam3.f_35 = iVar53;
								}
								StringCopy(uParam3.f_1, get_player_name(iVar35), 64);
								*(uParam4[iVar52 /*13*/]) = {func_103(iVar35)};
								iVar37 = func_432(iVar35);
								sVar36 = "";
								if (iVar37 != 0)
								{
									sVar36 = get_pedheadshot_txd_string(iVar37);
								}
								Global_1573685++;
								if (*(uParam0[iVar52 /*47*/]).f_22 != -1f)
								{
									fVar45 = *(uParam0[iVar52 /*47*/]).f_22;
								}
								if (*(uParam0[iVar52 /*47*/]).f_30 != -1)
								{
									iVar46 = *(uParam0[iVar52 /*47*/]).f_30;
								}
								if (*(uParam0[iVar52 /*47*/]).f_46 != -1)
								{
									iVar47 = *(uParam0[iVar52 /*47*/]).f_46;
								}
								iVar43 = *(uParam0[iVar52 /*47*/]).f_9;
								if ((*(uParam0[iVar52 /*47*/]).f_9 != -1 || *(uParam0[iVar52 /*47*/]).f_22 != -1f) || *(uParam0[iVar52 /*47*/]).f_30 != -1)
								{
									if (!func_448())
									{
										iVar50 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_427(&iVar43, &fVar45, *(uParam0[iVar52 /*47*/]).f_9, iParam5);
									StringCopy(uParam3.f_104, func_426(iParam5, 1, 0, 0), 16);
								}
								if (iParam6)
								{
									iVar48 = *(uParam0[iVar52 /*47*/]).f_2 + 1;
									if (iVar54 != iVar48)
									{
										iVar54 = iVar48;
									}
									else
									{
										iVar48 = -2;
									}
								}
								iVar51 = func_425(iVar35, 0);
								if (iVar34)
								{
									if (func_63(iVar35, 1) && iVar1[iVar44] != -1)
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
								if (func_424(iParam5))
								{
									func_423(iParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar43, iVar47, uParam0[iVar52 /*47*/].f_37, uParam0[iVar52 /*47*/].f_41, *(uParam0[iVar52 /*47*/]).f_45, iVar48, iParam6);
								}
								else
								{
									func_423(iParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar46, iVar47, uParam0[iVar52 /*47*/].f_37, uParam0[iVar52 /*47*/].f_41, *(uParam0[iVar52 /*47*/]).f_45, iVar48, iParam6);
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
							if (func_13(iVar35, 0, 1) && !GAMEPLAY::IS_BIT_SET(iVar49, iVar35))
							{
								iVar35 = int_to_playerindex(iVar52);
							}
							else
							{
								iVar35 = func_75();
							}
							if (func_447(iVar35))
							{
								if (func_13(int_to_playerindex(iVar52), 0, 1))
								{
									iVar44 = iVar35;
									iVar42 = Global_1587523[iVar44 /*444*/].f_195.f_6;
									Var38 = {func_438(iVar35)};
									*(uParam4[iVar52 /*13*/]) = {func_103(iVar35)};
									iVar37 = func_432(iVar35);
									sVar36 = "";
									if (iVar37 != 0)
									{
										sVar36 = get_pedheadshot_txd_string(iVar37);
									}
									Global_1573685++;
									iVar51 = func_425(iVar35, 1);
									if (iVar34)
									{
										if (func_63(iVar35, 1))
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
									func_415(get_player_name(iVar35), iParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar51, iVar50);
									iVar53++;
								}
							}
							iVar52++;
						}
						if (GAMEPLAY::IS_BIT_SET(*uParam3.f_33, 11))
						{
							func_412(uParam3, iParam1);
						}
						func_35(uParam3.f_21);
						func_411();
						*uParam3.f_27 = 2;
					}
					if (*uParam3.f_27 == 2)
					{
						if (!GAMEPLAY::IS_BIT_SET(*uParam3.f_33, 7))
						{
							func_410(uParam3, iParam1);
							func_409(iParam1, 0, 1);
							GAMEPLAY::SET_BIT(uParam3.f_33, 7);
						}
						func_410(uParam3, iParam1);
						if (!GAMEPLAY::IS_BIT_SET(*uParam3.f_33, 11))
						{
							GAMEPLAY::SET_BIT(uParam3.f_33, 11);
						}
						if (func_405(uParam3))
						{
							Global_1573833 = 1;
						}
						func_403(uParam3);
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
			func_411();
			func_457(0);
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

void func_403(auto uParam0)
{
	if (!func_36(uParam0.f_21))
	{
		func_2(uParam0.f_21, 0, 0);
	}
	else if (func_1(uParam0.f_21, 250, 0))
	{
		func_35(uParam0.f_21);
		func_404(0);
	}
}

void func_404(int iParam0)
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

int func_405(auto uParam0)
{
	auto uVar0;
	int iVar1;
	struct<13> Var2;
	int iVar15;
	int iVar16;
	
	iVar16 = 0;
	uVar0 = *uParam0.f_37;
	iVar15 = int_to_playerindex(*uParam0.f_37);
	if (iVar15 != func_75() && func_13(iVar15, 0, 1))
	{
		Var2 = {func_103(iVar15)};
		iVar1 = func_408(uParam0, *uParam0.f_37);
		if (func_407(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (network_can_communicate_with_gamer(&Var2))
					{
						if (network_is_gamer_talking(&Var2))
						{
							iVar16 = 1;
							func_406(uParam0, uVar0, 2);
						}
					}
					else if (network_is_gamer_muted_by_me(&Var2))
					{
						iVar16 = 1;
						func_406(uParam0, uVar0, 1);
					}
					break;
				
				case 2:
					if (network_can_communicate_with_gamer(&Var2))
					{
						if (!network_is_gamer_talking(&Var2))
						{
							iVar16 = 1;
							func_406(uParam0, uVar0, 0);
						}
					}
					else
					{
						iVar16 = 1;
						func_406(uParam0, uVar0, 0);
					}
					break;
				
				case 1:
					if (network_can_communicate_with_gamer(&Var2))
					{
						if (!network_is_gamer_muted_by_me(&Var2))
						{
							iVar16 = 1;
							func_406(uParam0, uVar0, 0);
						}
					}
					else if (!network_is_gamer_muted_by_me(&Var2))
					{
						iVar16 = 1;
						func_406(uParam0, uVar0, 0);
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

void func_406(auto uParam0, auto uParam1, int iParam2)
{
	*uParam0.f_38[uParam1 /*2*/] = iParam2;
}

int func_407(auto uParam0, auto uParam1, auto uParam2, auto uParam3, auto uParam4, auto uParam5, auto uParam6, auto uParam7, auto uParam8, auto uParam9, auto uParam10, auto uParam11, auto uParam12)
{
	return network_is_handle_valid(&uParam0, 13);
}

auto func_408(auto uParam0, auto uParam1)
{
	return *uParam0.f_38[uParam1 /*2*/];
}

void func_409(int iParam0, int iParam1, int iParam2)
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

void func_410(auto uParam0, int iParam1)
{
	if (!GAMEPLAY::IS_BIT_SET(*uParam0.f_33, 10))
	{
		_push_scaleform_movie_function(*iParam1, "SET_HIGHLIGHT");
		_push_scaleform_movie_function_parameter_int(*uParam0.f_35);
		_pop_scaleform_movie_function_void();
		GAMEPLAY::SET_BIT(uParam0.f_33, 10);
	}
}

void func_411()
{
	if (Global_1573833 != 0)
	{
		Global_1573833 = 0;
	}
}

void func_412(auto uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = false;
	while (iVar0 < 32)
	{
		iVar2 = int_to_playerindex(iVar0);
		if (iVar2 != func_75())
		{
			if (func_13(iVar2, 0, 1))
			{
				if (*(uParam0.f_38[iVar0 /*2*/]).f_1 != -1)
				{
					iVar1 = func_414(*uParam0.f_38[iVar0 /*2*/], 0);
					func_413(iParam1, *(uParam0.f_38[iVar0 /*2*/]).f_1, iVar1, Global_1587523[iVar0 /*444*/].f_195.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_413(auto uParam0, int iParam1, int iParam2, int iParam3)
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

int func_414(int iParam0, int iParam1)
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

void func_415(char* sParam0, int iParam1, auto uParam2, int iParam3, char* sParam4, auto uParam5, auto uParam6, auto uParam7, char* sParam8, int iParam9, int iParam10, int iParam11)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_422() && iParam3 < func_421())
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
				func_420("");
			}
			else
			{
				_push_scaleform_movie_function_parameter_int(iParam9);
			}
			func_420(sParam0);
			_push_scaleform_movie_function_parameter_int(iParam10);
			if (*uParam2.f_108 == 6)
			{
				func_420("");
			}
			else
			{
				_push_scaleform_movie_function_parameter_int(65);
			}
			_push_scaleform_movie_function_parameter_int(-1);
			func_420("");
			if (*uParam2.f_108 == 6)
			{
				func_420("");
			}
			else
			{
				func_420(&sParam4);
			}
			_push_scaleform_movie_function_parameter_bool(*uParam2.f_36);
			_push_scaleform_movie_function_parameter_string(sParam8);
			_push_scaleform_movie_function_parameter_string(sParam8);
			if (func_419(uParam2))
			{
				func_418("DPAD_FRIEND");
			}
			else if (func_417(uParam2))
			{
				func_418("DPAD_FRIEND");
			}
			else if (func_416(uParam2))
			{
				func_418("DPAD_CREW");
			}
			else
			{
				func_418("");
			}
			_pop_scaleform_movie_function_void();
		}
	}
}

int func_416(auto uParam0)
{
	return GAMEPLAY::IS_BIT_SET(*uParam0.f_33, 6);
}

int func_417(auto uParam0)
{
	return GAMEPLAY::IS_BIT_SET(*uParam0.f_33, 5);
}

void func_418(char* sParam0)
{
	_begin_text_component(sParam0);
	_end_text_component();
}

bool func_419(auto uParam0)
{
	if (func_417(uParam0) && func_416(uParam0))
	{
		return true;
	}
	return false;
}

void func_420(char* sParam0)
{
	_0xE83A3E3557A56640(sParam0);
}

int func_421()
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

int func_422()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1573687)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_423(int iParam0, auto uParam1, int iParam2, char* sParam3, auto uParam4, auto uParam5, auto uParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12, int iParam13, int iParam14, char* sParam15, char* sParam16, int iParam17, int iParam18, int iParam19)
{
	int iVar0;
	char* sVar1;
	
	if (iParam2 >= func_422() && iParam2 < func_421())
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
					func_420("");
				}
				else
				{
					_push_scaleform_movie_function_parameter_int(iParam8);
				}
				if (*uParam1.f_108 == 6 && !is_string_null_or_empty(sParam15))
				{
					func_418(sParam15);
				}
				else
				{
					func_420(uParam1.f_1);
				}
				_push_scaleform_movie_function_parameter_int(iParam10);
				if (*uParam1.f_108 == 6)
				{
					func_420("");
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
				if (func_448())
				{
					func_420("");
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
						func_418(uParam1.f_104);
					}
					else
					{
						func_420("");
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
					func_420("");
				}
				if (*uParam1.f_108 == 6)
				{
					func_420("");
				}
				else
				{
					func_420(&sParam3);
				}
				_push_scaleform_movie_function_parameter_bool(*uParam1.f_36);
				if (iParam11 == 1 || is_string_null_or_empty(sParam7))
				{
					func_420("");
					func_420("");
				}
				else
				{
					_push_scaleform_movie_function_parameter_string(sParam7);
					_push_scaleform_movie_function_parameter_string(sParam7);
				}
				if (func_419(uParam1))
				{
					func_418("DPAD_FRIEND");
				}
				else if (func_417(uParam1))
				{
					func_418("DPAD_FRIEND");
				}
				else if (func_416(uParam1))
				{
					func_418("DPAD_CREW");
				}
				else
				{
					func_418("");
				}
				_pop_scaleform_movie_function_void();
			}
		}
	}
}

bool func_424(int iParam0)
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

int func_425(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!iParam1 && func_322(iParam0)) && !func_392(iParam0))
	{
		iVar0 = func_47();
	}
	iVar1 = func_61(iParam0);
	if (!iVar1 == -1)
	{
		return func_59(iVar1);
	}
	return iVar0;
}

char* func_426(int iParam0, int iParam1, int iParam2, int iParam3)
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

bool func_427(auto uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_431(iParam3))
	{
		*fParam1 = func_428(iParam3, iParam2) / 10f;
		return true;
	}
	if (func_424(iParam3))
	{
		*fParam1 = func_428(iParam3, iParam2) / 1000f;
		return true;
	}
	*uParam0 = iParam2;
	return false;
}

float func_428(int iParam0, int iParam1)
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
				return func_430(to_float(iParam1));
			}
			break;
		
		case 2:
			if (_0xD3D15555431AB793())
			{
				return to_float(iParam1);
			}
			else
			{
				return func_429(to_float(iParam1));
			}
			break;
	}
	return to_float(iParam1);
}

float func_429(float fParam0)
{
	return fParam0 / 1.609344f;
}

float func_430(float fParam0)
{
	return fParam0 / 0.3048f;
}

bool func_431(int iParam0)
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

int func_432(int iParam0)
{
	int iVar0;
	
	iVar0 = func_435(iParam0);
	if (iVar0 == -1)
	{
		func_433(iParam0, 1);
		return 0;
	}
	Global_1348553[iVar0 /*5*/].f_4 = 1;
	return Global_1348553[iVar0 /*5*/].f_2;
}

void func_433(int iParam0, int iParam1)
{
	if (!func_13(iParam0, 0, 1))
	{
		return;
	}
	if (func_435(iParam0) != -1)
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
	if (func_434(iParam0))
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

bool func_434(int iParam0)
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

int func_435(int iParam0)
{
	int iVar0;
	
	if (!func_13(iParam0, 0, 1))
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
			func_436(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_436(int iParam0)
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
	func_437(&(Global_1348553[iVar32 /*5*/]));
	Global_1348714--;
}

void func_437(auto uParam0)
{
	*uParam0 = 0;
	*uParam0.f_1 = func_75();
	*uParam0.f_2 = 0;
	*uParam0.f_4 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		*uParam0.f_3 = NETWORK::GET_NETWORK_TIME();
	}
}

struct<4> func_438(int iParam0)
{
	struct<4> Var0;
	
	if (func_13(iParam0, 0, 1))
	{
		Global_2459440 = {func_103(iParam0)};
		if (is_durango_version())
		{
			if (func_407(Global_2459440))
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
		if (func_442(&Global_2459440))
		{
			Global_2459370 = {func_440(iParam0)};
			func_439(&Global_2459370, &Var0);
		}
	}
	return Var0;
}

void func_439(auto uParam0, char* sParam1)
{
	_0xF45352426FF3A4F0(uParam0, 35, uParam1);
}

struct<35> func_440(int iParam0)
{
	struct<13> Var0;
	struct<35> Var13;
	
	if (func_441(iParam0))
	{
		return Global_1315947[player_id() /*35*/];
	}
	Var0 = {func_103(iParam0)};
	network_clan_player_get_desc(&Var13, 35, &Var0);
	return Var13;
}

bool func_441(int iParam0)
{
	if (iParam0 == player_id())
	{
		return true;
	}
	return false;
}

bool func_442(auto uParam0)
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

bool func_443(int iParam0, int iParam1)
{
	if (iParam1 == 23)
	{
		if ((func_7(iParam0) || func_446(iParam0)) || func_6(iParam0))
		{
			return false;
		}
	}
	if (!func_445(iParam0))
	{
		return false;
	}
	if ((!func_444(iParam0) && Global_2418472[iParam0 /*313*/].f_232 == -1) && !func_455(iParam0))
	{
		return false;
	}
	return true;
}

bool func_444(int iParam0)
{
	if (func_13(iParam0, 0, 1))
	{
		if (func_13(player_id(), 0, 1))
		{
			if (_0x9DE986FC9A87C474(iParam0, player_id()))
			{
				return true;
			}
		}
	}
	return false;
}

int func_445(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1587523[iParam0 /*444*/].f_131, 22);
}

int func_446(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (GAMEPLAY::IS_BIT_SET(Global_1610316[iParam0 /*174*/].f_1, 10) || GAMEPLAY::IS_BIT_SET(Global_1610316[iParam0 /*174*/].f_1, 9));
	}
	return false;
}

bool func_447(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_75())
	{
		return false;
	}
	if (func_73(iParam0, 0))
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

bool func_448()
{
	switch (func_252(player_id()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return true;
			break;
	}
	if (func_392(player_id()))
	{
		switch (func_449(player_id()))
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

int func_449(int iParam0)
{
	if (func_140(iParam0, 0))
	{
		return Global_1610316[iParam0 /*174*/].f_10.f_28;
	}
	return -1;
}

bool func_450(int iParam0, int iParam1)
{
	if (Global_1610316[iParam0 /*174*/].f_10.f_28 != -1 && func_451(Global_1610316[iParam0 /*174*/].f_10.f_28))
	{
		return true;
	}
	if (iParam1 && Global_1610316[iParam0 /*174*/].f_10.f_27 != -1)
	{
		if (func_451(Global_1610316[iParam0 /*174*/].f_10.f_27))
		{
			return true;
		}
	}
	return false;
}

bool func_451(int iParam0)
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

void func_452(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = false;
	while (iVar0 < 32)
	{
		if (func_13(int_to_playerindex(iVar0), 0, 1))
		{
			iVar1 = int_to_playerindex(iVar0);
			if (!func_73(iVar1, 0))
			{
				if ((_0x9DE986FC9A87C474(iVar1, player_id()) || Global_2418472[iVar1 /*313*/].f_232 != -1) || func_455(iVar1))
				{
					if (func_453(iVar1, iParam1, 0))
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

int func_453(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 != func_75())
	{
		if (!iParam2)
		{
			if (func_454(iParam0, iParam1))
			{
				return false;
			}
		}
		if (Global_1610316[iParam0 /*174*/].f_10 != func_75())
		{
			return iParam1 == Global_1610316[iParam0 /*174*/].f_10;
		}
	}
	return false;
}

int func_454(int iParam0, int iParam1)
{
	if (iParam1 != func_75())
	{
		if (iParam0 != func_75())
		{
			if (Global_1610316[iParam0 /*174*/].f_10 != func_75())
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

int func_455(int iParam0)
{
	return Global_1587523[iParam0 /*444*/].f_180 != 0;
}

void func_456(int iParam0)
{
	if (has_scaleform_movie_loaded(*iParam0))
	{
		_push_scaleform_movie_function(*iParam0, "SET_DATA_SLOT_EMPTY");
		_push_scaleform_movie_function_parameter_int(false);
		_pop_scaleform_movie_function_void();
	}
}

void func_457(int iParam0)
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

void func_458()
{
	if (GAMEPLAY::IS_BIT_SET(Global_2460486.f_4426, true))
	{
		if (func_141())
		{
			func_152();
		}
	}
}

bool func_459()
{
	if (GAMEPLAY::IS_BIT_SET(Global_2460486.f_4426, false) && func_141())
	{
		return true;
	}
	if (GAMEPLAY::IS_BIT_SET(Global_2460486.f_4426, true) && func_141())
	{
		return true;
	}
	return false;
}

bool func_460()
{
	if (func_141())
	{
		if (func_44(Global_2428492.f_2171[0 /*72*/].f_1))
		{
			return true;
		}
	}
	return false;
}

bool func_461()
{
	if (func_141())
	{
		if (func_48(Global_2428492.f_2171[0 /*72*/].f_1))
		{
			return true;
		}
	}
	return false;
}

void func_462(int iParam0)
{
	Global_1338619.f_1 = Global_1338619;
	Global_1338619 = iParam0;
}

bool func_463(int iParam0, int iParam1, auto uParam2, auto uParam3, int iParam4, int iParam5)
{
	struct<4> Var0;
	char* sVar4;
	int iVar5;
	int iVar6;
	float fVar7;
	int iVar8;
	
	StringCopy(&Var0, "", 16);
	iVar6 = func_500(iParam1);
	if (iParam1 == 17)
	{
		iVar5 = true;
	}
	fVar7 = func_499();
	if (iParam1 == 23 || iParam1 == 24)
	{
		if (func_498())
		{
			if (func_497() > 0 && Global_1573687)
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
		if (!func_488())
		{
			func_487(iParam0, uParam2, 1);
			return false;
		}
	}
	if (GAMEPLAY::IS_BIT_SET(Global_2460486.f_4429, 26))
	{
		func_487(iParam0, uParam2, 1);
		return false;
	}
	if (!func_36(uParam2.f_19))
	{
		if (func_497() == 1)
		{
			func_486(iVar6, iParam0, 0);
			func_2(uParam2.f_19, 0, 0);
			func_487(iParam0, uParam2, 0);
		}
	}
	if (func_36(uParam2.f_19) || iParam5)
	{
		if (is_help_message_being_displayed())
		{
			hide_help_text_this_frame();
		}
		hide_hud_component_this_frame(10);
		if (func_1(uParam2.f_19, 10000, 0) || (func_497() == 0 && !iParam5))
		{
			func_487(iParam0, uParam2, 1);
			return false;
		}
		else
		{
			if (iVar5 == 0)
			{
				func_485();
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
					func_485();
					if (iParam1 == 23 || iParam1 == 24)
					{
						_0x25F87B30C382FCA7();
					}
					hide_hud_component_this_frame(18);
				}
				_0x55598D21339CB998(fVar7);
				if (func_486(iVar6, iParam0, 0))
				{
					func_456(iParam0);
					sVar4 = func_483(iParam1, &(Global_1617379.f_70372), iParam4);
					if (iParam4)
					{
						func_480(iParam0, sVar4, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 23)
					{
						func_474(iParam0, func_477(uParam2), func_475(uParam2), -1);
					}
					else if (iParam1 == 24)
					{
						func_471(iParam0, func_473(), func_472(), -1);
					}
					else if (iVar5)
					{
						*uParam2.f_34 = Global_1573686;
						func_480(iParam0, sVar4, "", 0, -1, Global_1573686, 1);
					}
					else
					{
						Var0 = {func_469(iParam1)};
						iVar8 = func_464(iParam1);
						func_480(iParam0, sVar4, &Var0, 1, iVar8, -1, 1);
					}
					GAMEPLAY::SET_BIT(uParam2.f_33, false);
				}
			}
		}
	}
	return false;
}

int func_464(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_468())
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
			if (func_467(player_id()))
			{
				iVar0 = 20;
			}
			if (func_466(player_id()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_465(player_id()))
	{
		iVar0 = 2;
	}
	return iVar0;
}

int func_465(int iParam0)
{
	return Global_2418472[iParam0 /*313*/].f_114 == 4;
}

int func_466(int iParam0)
{
	return Global_2418472[iParam0 /*313*/].f_114 == 7;
}

int func_467(int iParam0)
{
	return Global_2418472[iParam0 /*313*/].f_114 == 2;
}

int func_468()
{
	return Global_1617379.f_1 == 0;
}

struct<4> func_469(int iParam0)
{
	char[16] cVar0;
	
	StringCopy(&cVar0, "", 16);
	if (func_470(player_id()) || func_465(player_id()))
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

int func_470(int iParam0)
{
	return Global_2418472[iParam0 /*313*/].f_114 == 5;
}

void func_471(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (has_scaleform_movie_loaded(*iParam0))
	{
		_push_scaleform_movie_function(*iParam0, "SET_TITLE");
		if (is_string_null_or_empty(sParam2))
		{
			func_418(sParam1);
		}
		else
		{
			_begin_text_component("FM_AE_BRACKT");
			_add_text_component_item_string(sParam1);
			_add_text_component_item_string(sParam2);
			_end_text_component();
		}
		func_418("");
		if (iParam3 != -1)
		{
			_push_scaleform_movie_function_parameter_int(iParam3);
		}
		_pop_scaleform_movie_function_void();
	}
}

char* func_472()
{
	switch (func_449(player_id()))
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

char* func_473()
{
	switch (func_449(player_id()))
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

void func_474(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (has_scaleform_movie_loaded(*iParam0))
	{
		_push_scaleform_movie_function(*iParam0, "SET_TITLE");
		if (is_string_null_or_empty(sParam2))
		{
			func_418(sParam1);
		}
		else if (func_252(player_id()) == 133)
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
		func_418("");
		if (iParam3 != -1)
		{
			_push_scaleform_movie_function_parameter_int(iParam3);
		}
		_pop_scaleform_movie_function_void();
	}
}

char* func_475(auto uParam0)
{
	int iVar0;
	
	iVar0 = func_252(player_id());
	if (func_476())
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
			switch (func_251())
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

auto func_476()
{
	return Global_1587522;
}

char* func_477(auto uParam0)
{
	int iVar0;
	
	iVar0 = func_252(player_id());
	if (func_476())
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
			if (func_479() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_479() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_251())
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
			if (func_478() == 1)
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

auto func_478()
{
	return Global_2460486.f_4650;
}

int func_479()
{
	if (func_252(player_id()) == 132)
	{
		return Global_2460486.f_4645;
	}
	return -1;
}

void func_480(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (has_scaleform_movie_loaded(*iParam0))
	{
		_push_scaleform_movie_function(*iParam0, "SET_TITLE");
		if (iParam3)
		{
			func_420(sParam1);
		}
		else if (iParam5 != -1)
		{
			_begin_text_component(sParam1);
			add_text_component_integer(iParam5);
			_end_text_component();
		}
		else
		{
			func_418(sParam1);
		}
		if (func_498() && iParam6)
		{
			if (func_482())
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
			func_418(sParam2);
		}
		if (iParam4 != -1)
		{
			_push_scaleform_movie_function_parameter_int(iParam4);
			if (func_481(player_id()))
			{
				_push_scaleform_movie_function_parameter_int(166);
			}
		}
		_pop_scaleform_movie_function_void();
	}
}

bool func_481(int iParam0)
{
	if (func_467(iParam0) || func_466(iParam0))
	{
		return true;
	}
	return false;
}

auto func_482()
{
	return Global_1573687;
}

char* func_483(int iParam0, char* sParam1, int iParam2)
{
	auto uVar0;
	
	if (iParam0 == 17)
	{
		uVar0 = func_484();
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

char* func_484()
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

void func_485()
{
	Global_36611 = 1;
}

int func_486(int iParam0, int iParam1, int iParam2)
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

void func_487(int iParam0, auto uParam1, int iParam2)
{
	GAMEPLAY::CLEAR_BIT(uParam1.f_33, 7);
	Global_1573685 = 0;
	func_411();
	Global_1573684 = 0;
	*uParam1.f_27 = 0;
	if (iParam2)
	{
		if (func_36(uParam1.f_19))
		{
			func_35(uParam1.f_19);
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

bool func_488()
{
	if (func_496())
	{
		return false;
	}
	if (func_393())
	{
		return false;
	}
	if (!func_494())
	{
		return false;
	}
	if (!func_381())
	{
		return false;
	}
	if (func_493(8, -1))
	{
		return false;
	}
	if (func_497() == 2)
	{
		return false;
	}
	if (Global_2460486.f_4404)
	{
		return false;
	}
	if (func_248())
	{
		return false;
	}
	else if (!func_278(player_id(), 1) && Global_1311716[0 /*4*/] > 0)
	{
		return false;
	}
	if (((func_492(1) || func_490(1)) || Global_17118.f_124) || Global_17118)
	{
		return false;
	}
	if (is_pause_menu_active())
	{
		return false;
	}
	if (func_71(player_id()))
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
	if (func_489(0))
	{
		return false;
	}
	if (GAMEPLAY::IS_BIT_SET(Global_1587523[player_id() /*444*/].f_250.f_7, 4))
	{
		return false;
	}
	return true;
}

int func_489(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_2460486.f_4660.f_18, iParam0);
}

bool func_490(int iParam0)
{
	if (_0xFC859E2374407556())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (func_491(PLAYER::PLAYER_PED_ID()))
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

bool func_491(int iParam0)
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

int func_492(int iParam0)
{
	if (iParam0)
	{
		return (Global_17118.f_4 && Global_17118.f_104 == 4);
	}
	return Global_17118.f_4;
}

int func_493(int iParam0, int iParam1)
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

bool func_494()
{
	if (func_495())
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

auto func_495()
{
	return Global_1312438;
}

int func_496()
{
	return GAMEPLAY::GET_GAME_TIMER() <= Global_17257.f_5745 + 100;
}

auto func_497()
{
	return Global_1338622.f_68;
}

bool func_498()
{
	if (Global_1573686 > 16)
	{
		return true;
	}
	return false;
}

float func_499()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = 1f - 1f - get_safe_zone_size();
	fVar0 = 1f - fVar1 - fVar2;
	return fVar0;
}

bool func_500(int iParam0)
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

bool func_501()
{
	if (func_504())
	{
		return true;
	}
	if (func_6(player_id()))
	{
		return false;
	}
	if (func_476())
	{
		return true;
	}
	if (func_322(player_id()))
	{
		switch (func_252(player_id()))
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
				if (!func_502(player_id()))
				{
					return true;
				}
				break;
			
			case 129:
				if (!func_502(player_id()))
				{
					return true;
				}
				break;
			}
	}
	return false;
}

int func_502(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1610316[iParam0 /*174*/].f_1, 4);
}

bool func_503(int iParam0)
{
	if ((iParam0 == 24 && func_322(player_id())) && !func_392(player_id()))
	{
		return true;
	}
	if (iParam0 == 23)
	{
		if (func_140(player_id(), 0) && func_392(player_id()))
		{
			return true;
		}
		if (func_385(player_id()) == 3)
		{
			return true;
		}
	}
	return false;
}

int func_504()
{
	if (func_505(player_id()))
	{
		return Global_1318849;
	}
	return 0;
}

int func_505(int iParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_73(iParam0, 0))
		{
			return network_player_is_rockstar_dev(iParam0);
		}
	}
	return false;
}

void func_506()
{
	int iVar0;
	
	if (network_is_participant_active(int_to_participantindex(iLocal_364)))
	{
		iVar0 = network_get_player_index(int_to_participantindex(iLocal_364));
		if (network_is_player_active(iVar0))
		{
			func_507(iVar0, 2);
		}
	}
	iLocal_364++;
	if (iLocal_364 >= _network_get_num_participants_host())
	{
		iLocal_364 = false;
	}
}

void func_507(int iParam0, int iParam1)
{
	int iVar0;
	
	if (GAMEPLAY::IS_BIT_SET(Global_1573883.f_1, false))
	{
		return;
	}
	if (func_36(&(Global_1573883.f_18)))
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
	if (func_7(iParam0))
	{
		iVar0 = false;
	}
	if (func_508(iParam0))
	{
		iVar0 = false;
	}
	if (func_73(iParam0, 0))
	{
		iVar0 = false;
	}
	if (func_6(iParam0))
	{
		iVar0 = false;
	}
	if (iVar0)
	{
		Global_1573883++;
	}
}

int func_508(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1610316[iParam0 /*174*/].f_1, 10);
}

void func_509(int iParam0, int iParam1)
{
	Local_3612[iParam0 /*5*/] = iParam1;
}

bool func_510()
{
	struct<71> Var0;
	int iVar71;
	int iVar72;
	
	Var0 = 4;
	Var0.f_5 = 32;
	Var0.f_38 = 32;
	Global_2460486.f_4574 = {Var0};
	iVar71 = 0;
	while (iVar71 < 30)
	{
		Global_2460486.f_4574.f_38[iVar71] = -1;
		iVar71++;
	}
	iVar72 = 0;
	while (iVar72 < 32)
	{
		Local_1568.f_527[iVar72 /*47*/].f_1 = func_75();
		iVar72++;
	}
	return true;
}

auto func_511()
{
	return Local_818;
}

auto func_512(int iParam0)
{
	return Local_3612[iParam0 /*5*/];
}

void func_513()
{
	if (GAMEPLAY::IS_BIT_SET(Global_1573883.f_1, 6))
	{
		func_537();
		GAMEPLAY::CLEAR_BIT(&(Global_1573883.f_1), 6);
	}
	if (!GAMEPLAY::IS_BIT_SET(Global_1573883.f_1, 7))
	{
		if (GAMEPLAY::IS_BIT_SET(Global_1573883.f_1, 4) || GAMEPLAY::IS_BIT_SET(Global_1573883.f_1, 16))
		{
			if (((!is_radar_hidden() && !is_help_message_being_displayed()) && !func_141()) && func_13(player_id(), 1, 1))
			{
				GAMEPLAY::SET_BIT(&(Global_1573883.f_1), 7);
				func_134("FME_PASINT", 30000);
				func_133(1);
			}
		}
		else if (GAMEPLAY::IS_BIT_SET(Global_1573883.f_1, 17))
		{
			if (func_283() && !func_294())
			{
				GAMEPLAY::CLEAR_BIT(&(Global_1573883.f_1), 17);
				GAMEPLAY::SET_BIT(&(Global_1573883.f_1), 16);
			}
		}
	}
	if (!GAMEPLAY::IS_BIT_SET(Global_1573883.f_1, 23))
	{
		if (((((!is_radar_hidden() && !GAMEPLAY::IS_BIT_SET(Global_2460486.f_743, 2)) && func_13(player_id(), 1, 1)) && !Global_68058) && !Global_52930) && !is_help_message_being_displayed())
		{
			if (func_535())
			{
				func_134("AMEV_GA_RP", -1);
				func_133(1);
				GAMEPLAY::SET_BIT(&(Global_1573883.f_1), 23);
			}
		}
	}
	if (is_pause_menu_active() && get_pause_menu_state() == 15)
	{
		if (func_336(player_id()))
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
		if ((((!is_radar_hidden() && !is_help_message_being_displayed()) && !func_141()) && func_13(player_id(), 1, 1)) && !func_293(player_id(), 21))
		{
			GAMEPLAY::CLEAR_BIT(&(Global_1573883.f_1), 9);
			func_534(0);
			func_134("FME_TBL00", -1);
			func_133(1);
		}
	}
	if (func_322(player_id()))
	{
		if (!GAMEPLAY::IS_BIT_SET(Global_1573883.f_1, 18))
		{
			if ((func_293(player_id(), 21) && GAMEPLAY::IS_BIT_SET(Global_1573883.f_1, 20)) && !GAMEPLAY::IS_BIT_SET(Global_1573883.f_1, 19))
			{
				GAMEPLAY::SET_BIT(&(Global_1573883.f_1), 18);
			}
		}
		else if (GAMEPLAY::IS_BIT_SET(Global_1573883.f_1, 18))
		{
			if (((((!is_radar_hidden() && !is_help_message_being_displayed()) && !func_141()) && func_13(player_id(), 1, 1)) && is_screen_faded_in()) && !Global_2460486.f_4654)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_1573883.f_1), 18);
				GAMEPLAY::SET_BIT(&(Global_1573883.f_1), 19);
				func_134("AMTT_RPAS", -1);
				func_133(1);
			}
		}
	}
	if (((((func_322(player_id()) && !func_7(player_id())) && func_252(player_id()) != 146) && !func_6(player_id())) && !func_399(player_id())) && !func_524())
	{
		if (func_335(func_252(player_id())))
		{
			unk_0xFAC75988A7D078D3(player_id());
		}
		if (!GAMEPLAY::IS_BIT_SET(Global_1573883.f_1, 22))
		{
			GAMEPLAY::SET_BIT(&(Global_1573883.f_1), 22);
		}
		if (func_356(player_id()) || func_330())
		{
			if (!GAMEPLAY::IS_BIT_SET(Global_1573883.f_1, 10))
			{
				if (func_522(func_252(player_id())))
				{
					if (func_235(0) && !Global_2391042)
					{
						GAMEPLAY::SET_BIT(&(Global_1573883.f_1), 9);
					}
					func_334(1);
					GAMEPLAY::SET_BIT(&(Global_1573883.f_1), 14);
				}
				GAMEPLAY::SET_BIT(&(Global_1573883.f_1), 10);
			}
		}
		if (func_336(player_id()))
		{
			if (!GAMEPLAY::IS_BIT_SET(Global_1573883.f_1, 11))
			{
				if (!Global_91330.f_8)
				{
					GAMEPLAY::SET_BIT(&(Global_1573883.f_1), 12);
					func_332(1);
				}
				if (!func_521())
				{
					GAMEPLAY::SET_BIT(&(Global_1573883.f_1), 13);
					func_331();
				}
				if (!Global_2391042)
				{
					GAMEPLAY::SET_BIT(&(Global_1573883.f_1), 14);
					if (func_235(0) && !Global_2391042)
					{
						GAMEPLAY::SET_BIT(&(Global_1573883.f_1), 9);
					}
					func_334(1);
				}
				GAMEPLAY::SET_BIT(&(Global_1573883.f_1), 11);
			}
		}
		else
		{
			func_519(0);
		}
	}
	else
	{
		func_519(1);
	}
	func_514();
	if (func_329(func_252(player_id())) && !GAMEPLAY::IS_BIT_SET(Global_1573883.f_1, 21))
	{
		GAMEPLAY::SET_BIT(&(Global_1573883.f_1), 21);
	}
	if ((func_283() && !func_294()) || func_293(player_id(), 21))
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

void func_514()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_141())
	{
		iVar2 = 62;
		iVar2 = 0;
		while (iVar2 < 82)
		{
			if (func_370(iVar2))
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
				func_515(iVar0, iVar1);
				iVar2 = 82;
			}
			iVar2++;
		}
	}
	else if (!GAMEPLAY::IS_BIT_SET(Global_1573883.f_1, 26))
	{
		func_35(&(Global_1573883.f_21));
		GAMEPLAY::SET_BIT(&(Global_1573883.f_1), 26);
	}
}

void func_515(int iParam0, int iParam1)
{
	if (!func_36(&(Global_1573883.f_21)))
	{
		func_2(&(Global_1573883.f_21), 0, 0);
	}
	else if (func_1(&(Global_1573883.f_21), iParam1, 0))
	{
		if (func_497() > 0)
		{
			func_518(iParam0);
			if (func_131("AMEV_LBD_HELP"))
			{
				clear_help(1);
			}
			func_35(&(Global_1573883.f_21));
		}
	}
	else
	{
		func_517(0);
		func_516();
	}
}

void func_516()
{
	Global_2460486.f_4391 = 0;
}

void func_517(int iParam0)
{
	Global_1338622.f_68 = iParam0;
}

void func_518(int iParam0)
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

void func_519(int iParam0)
{
	if ((GAMEPLAY::IS_BIT_SET(Global_1573883.f_1, 11) || (GAMEPLAY::IS_BIT_SET(Global_1573883.f_1, 10) && iParam0)) || (GAMEPLAY::IS_BIT_SET(Global_1573883.f_1, 22) && iParam0))
	{
		if (GAMEPLAY::IS_BIT_SET(Global_1573883.f_1, 12))
		{
			GAMEPLAY::CLEAR_BIT(&(Global_1573883.f_1), 12);
			func_332(0);
		}
		if (GAMEPLAY::IS_BIT_SET(Global_1573883.f_1, 13))
		{
			GAMEPLAY::CLEAR_BIT(&(Global_1573883.f_1), 13);
			func_520();
		}
		if (GAMEPLAY::IS_BIT_SET(Global_1573883.f_1, 14) && !func_140(player_id(), 0))
		{
			GAMEPLAY::CLEAR_BIT(&(Global_1573883.f_1), 14);
			func_334(0);
		}
		GAMEPLAY::CLEAR_BIT(&(Global_1573883.f_1), 11);
		GAMEPLAY::CLEAR_BIT(&(Global_1573883.f_1), 10);
		GAMEPLAY::CLEAR_BIT(&(Global_1573883.f_1), 22);
	}
}

void func_520()
{
	GAMEPLAY::CLEAR_BIT(&(Global_2460486.f_4564), false);
}

int func_521()
{
	return GAMEPLAY::IS_BIT_SET(Global_2460486.f_4564, false);
}

int func_522(int iParam0)
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
			return func_336(player_id());
		
		case 133:
			return (func_330() || func_523(func_251()));
		
		default:
	}
	return 0;
}

bool func_523(int iParam0)
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

bool func_524()
{
	if (((((((((func_533() || func_532()) || func_531()) || func_248()) || (func_530() && !network_is_activity_session())) || (func_527() && !func_526())) || Global_2394645) || Global_2394645.f_1 != 0) || Global_2394718 != 0) || (func_525() == 2 && !network_is_activity_session()))
	{
		return true;
	}
	return false;
}

auto func_525()
{
	return Global_978143;
}

int func_526()
{
	return GAMEPLAY::IS_BIT_SET(Global_2434762.f_2, 27);
}

int func_527()
{
	if (func_529() || func_528())
	{
		return Global_1587523[player_id() /*444*/].f_87 == 8;
	}
	return false;
}

auto func_528()
{
	return Global_2434762.f_610;
}

int func_529()
{
	return GAMEPLAY::IS_BIT_SET(Global_2434762.f_2, 11);
}

int func_530()
{
	return GAMEPLAY::IS_BIT_SET(Global_2434762, 5);
}

int func_531()
{
	return GAMEPLAY::IS_BIT_SET(Global_2434762, 2);
}

int func_532()
{
	return GAMEPLAY::IS_BIT_SET(Global_2434762, 20);
}

auto func_533()
{
	return Global_2434762.f_574;
}

void func_534(int iParam0)
{
	int iVar0;
	
	iVar0 = func_191(2512, -1, 0);
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
	func_182(2512, iVar0, -1, 1);
}

bool func_535()
{
	int iVar0;
	
	if (!func_36(&(Global_1573883.f_15)))
	{
		func_2(&(Global_1573883.f_15), 0, 0);
		Global_1573883.f_17 = 0;
	}
	else if (func_1(&(Global_1573883.f_15), 1000, 0))
	{
		if (network_is_participant_active(int_to_participantindex(Global_1573883.f_17)))
		{
			iVar0 = network_get_player_index(int_to_participantindex(Global_1573883.f_17));
			if (network_is_player_active(iVar0))
			{
				if (func_13(iVar0, 1, 1) && func_536(iVar0, 6))
				{
					if (vdist(func_29(player_id()), func_29(iVar0)) < 80f)
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
			func_35(&(Global_1573883.f_15));
		}
	}
	return false;
}

bool func_536(int iParam0, int iParam1)
{
	int iVar0;
	
	if (Global_1312447 != 0)
	{
		return false;
	}
	if (!func_186(iParam0))
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

void func_537()
{
	set_max_wanted_level(5);
	func_539();
	set_wanted_level_multiplier(1f);
	GAMEPLAY::CLEAR_BIT(&(Global_1573883.f_1), 8);
	func_538();
}

void func_538()
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

void func_539()
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

bool func_540()
{
	if (func_541())
	{
		return true;
	}
	return false;
}

auto func_541()
{
	return Global_1573883.f_23;
}

bool func_542()
{
	int iVar0;
	
	func_546(&iVar0);
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
	if (func_545())
	{
		return true;
	}
	if (Global_2445442)
	{
		return true;
	}
	if (func_544())
	{
		return true;
	}
	if (func_543(157))
	{
		if (!func_533())
		{
			return true;
		}
	}
	if (func_543(155))
	{
		return true;
	}
	if (!network_is_signed_online())
	{
		return true;
	}
	if (func_338() != 0)
	{
		if (_get_number_of_instances_of_streamed_script(func_338()) == 0)
		{
			return true;
		}
	}
	return false;
}

bool func_543(int iParam0)
{
	if (get_event_exists(1, iParam0))
	{
		return true;
	}
	return false;
}

auto func_544()
{
	return Global_2443085;
}

auto func_545()
{
	return Global_2434762.f_569;
}

void func_546(auto uParam0)
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
					func_547(iVar0);
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

void func_547(int iParam0)
{
	Vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (get_event_data(1, iParam0, &vVar0, 3))
	{
		if (func_13(vVar0.y, 1, 1))
		{
			iVar3 = get_player_ped(vVar0.y);
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				if (is_ped_in_any_vehicle(iVar3, 0))
				{
					iVar4 = get_vehicle_ped_is_in(iVar3, 0);
					if (is_vehicle_window_intact(iVar4, vVar0.z) && network_get_this_script_is_network_script())
					{
						if (func_548(iVar4, &iVar5))
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

bool func_548(int iParam0, auto uParam1)
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

void func_549()
{
	wait(0);
}

void func_550()
{
	var[] uVar0 = new var[4];
	int iVar5;
	auto uVar6;
	
	func_143();
	iVar5 = false;
	while (iVar5 < 10)
	{
		if (GAMEPLAY::IS_BIT_SET(iLocal_802, iVar5) && !has_sound_finished(iLocal_803[iVar5]))
		{
			stop_sound(iLocal_803[iVar5]);
			release_sound_id(iLocal_803[iVar5]);
		}
		iVar5++;
	}
	func_325();
	func_373(0);
	func_553(132, 0, Local_818.f_8 == 6);
	func_344(22, 0);
	Global_2460486.f_4645 = -1;
	uVar0[0] = Local_818.f_3[0];
	uVar0[1] = Local_818.f_3[1];
	uVar0[2] = Local_818.f_3[2];
	uVar0[3] = Local_818.f_3[3];
	func_552(&(uVar0[0]));
	func_552(&(uVar0[1]));
	func_552(&(uVar0[2]));
	func_552(&(uVar0[3]));
	if (func_542())
	{
		Local_3600.f_5 = 5;
	}
	else if (GAMEPLAY::IS_BIT_SET(Local_818.f_2, 2))
	{
		Local_3600.f_5 = 6;
	}
	else if (Local_3600.f_5 != 1)
	{
		Local_3600.f_5 = 2;
	}
	Local_3600 = Local_818.f_724;
	Local_3600.f_1 = Local_818.f_725;
	Local_3600.f_4 = Local_818.f_726;
	Local_3600.f_3 = Local_818.f_728;
	Local_3600.f_10 = _get_posix_time() - Local_3600.f_9;
	uVar6 = Local_818.f_712;
	if (Local_818.f_707)
	{
		uVar6 = Local_818.f_712 + 4;
	}
	if (!Global_262145.f_9449)
	{
		if (Local_3600.f_6 > 0)
		{
		}
	}
	Local_3600.f_6 += iLocal_381;
	if (participant_id_to_int() != -1)
	{
		func_551(Local_3600, uVar6, Local_3612[participant_id_to_int() /*5*/].f_4, uVar0[0], uVar0[1], uVar0[2], uVar0[3]);
	}
	func_366(1);
	terminate_this_thread();
}

void func_551(struct<12> Param0, auto uParam1, int iParam2, int iParam3, auto uParam4, auto uParam5, auto uParam6)
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
			Var28.f_16 = uParam16;
			Var28.f_17 = uParam17;
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

void func_552(int iParam0)
{
	int iVar0;
	
	iVar0 = false;
	while (iVar0 < 32)
	{
		if (GAMEPLAY::IS_BIT_SET(*iParam0, iVar0))
		{
			GAMEPLAY::CLEAR_BIT(iParam0, iVar0);
		}
		else
		{
			GAMEPLAY::SET_BIT(iParam0, iVar0);
		}
		iVar0++;
	}
}

void func_553(int iParam0, int iParam1, int iParam2)
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
	func_575();
	set_audio_flag("DisableFlightMusic", 0);
	set_audio_flag("WantedMusicDisabled", 0);
	if (iParam1)
	{
		uVar0 = func_574(func_252(player_id()));
		func_344(21, 0);
	}
	else
	{
		if ((iParam2 && player_id() != -1) && func_573(player_id()) >= 12)
		{
			func_572(2524, -1);
			iVar1 = func_191(2524, -1, 0);
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
		func_571();
		func_570();
		func_569();
		if ((!func_139(player_id()) && !func_137(player_id())) && !func_568())
		{
			func_559();
		}
		func_558();
		if (!GAMEPLAY::IS_BIT_SET(Global_1727391.f_3, false) && !GAMEPLAY::IS_BIT_SET(Global_1727391.f_3, true))
		{
			func_537();
		}
		func_557();
		GAMEPLAY::CLEAR_BIT(&(Global_2460486.f_1645), 2);
		func_142();
		func_126();
	}
	if (_0x84698AB38D0C6636(1344549371))
	{
		object_decal_toggle(1344549371);
	}
	if (!iParam1 || uVar0)
	{
		if ((player_id() != -1 && !func_293(player_id(), 21)) && !func_140(player_id(), 0))
		{
			func_334(0);
			func_332(0);
			func_556();
		}
	}
	if (iParam2 && !iParam1)
	{
		if (func_40(26, -1))
		{
			Global_2445386 = -1;
			func_37(26, -1);
		}
	}
	if (!func_554())
	{
		Global_2459366 = 1;
	}
}

bool func_554()
{
	if (((!func_481(player_id()) && !func_465(player_id())) && func_252(player_id()) != 146) && !func_555())
	{
		return false;
	}
	return true;
}

bool func_555()
{
	if ((Global_1617379 == 0 && network_is_activity_session()) && ((((((Global_1617379.f_5 != 0 || Global_1617379.f_88495 > 0) || GAMEPLAY::IS_BIT_SET(Global_1617379.f_4, 15)) || GAMEPLAY::IS_BIT_SET(Global_1617379.f_4, 18)) || GAMEPLAY::IS_BIT_SET(Global_1617379.f_4, 19)) || GAMEPLAY::IS_BIT_SET(Global_1617379.f_4, 28)) || GAMEPLAY::IS_BIT_SET(Global_1617379.f_4, 27)))
	{
		return true;
	}
	return false;
}

void func_556()
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

void func_557()
{
	struct<24> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Global_1573883 = {Var0};
}

void func_558()
{
	auto uVar0;
	
	Global_1318849 = uVar0;
}

void func_559()
{
	Global_2404956.f_20 = {Global_2406765};
	Global_2404956.f_22 = {Global_2406767};
	func_566();
	func_560(1, 1);
}

void func_560(int iParam0, int iParam1)
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
		func_565();
	}
	func_562(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
	func_561(0);
	func_129();
}

void func_561(int iParam0)
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

void func_562(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	if (iParam0)
	{
		Global_2404956.f_1139 = iParam1;
		Global_2404956.f_1140 = iParam2;
		Global_2404956.f_1141 = iParam10;
		func_563();
		func_347(8, 0, 0);
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
		func_563();
		func_347(0, 0, 0);
		Global_2404956.f_634 = 0;
	}
}

void func_563()
{
	func_564();
	Global_2404956.f_635 = 0;
}

void func_564()
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

void func_565()
{
	Global_2404956.f_347 = {Global_2407092};
}

void func_566()
{
	func_567();
	Global_2404956.f_1280 = 0;
}

void func_567()
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

auto func_568()
{
	return Global_1573832;
}

void func_569()
{
	Global_2460486.f_4564 = 0;
}

void func_570()
{
	if (player_id() != -1)
	{
		Global_1610316[player_id() /*174*/].f_1 = 0;
	}
}

void func_571()
{
	int iVar0;
	
	iVar0 = player_id();
	if (iVar0 != -1)
	{
		Global_1610316[iVar0 /*174*/] = -1;
	}
}

void func_572(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_191(iParam0, func_187(iParam1), 0);
	iVar0++;
	if (!func_190(iParam0))
	{
		func_182(iParam0, iVar0, iParam1, 1);
	}
	else
	{
		func_183(iParam0, iVar0, iParam1, 1);
	}
}

auto func_573(int iParam0)
{
	return Global_1587523[iParam0 /*444*/].f_195.f_6;
}

bool func_574(int iParam0)
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
			if (func_336(player_id()))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_575()
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
	func_578(0);
	func_577(0);
	func_576(0);
}

void func_576(int iParam0)
{
	if (Global_2460486.f_4379 != iParam0)
	{
		Global_2460486.f_4379 = iParam0;
	}
}

void func_577(int iParam0)
{
	if (Global_2460486.f_4378 != iParam0)
	{
		if (iParam0)
		{
		}
		Global_2460486.f_4378 = iParam0;
	}
}

void func_578(int iParam0)
{
	if (Global_2460486.f_4376 != iParam0)
	{
		Global_2460486.f_4376 = iParam0;
	}
}

bool func_579(struct<20> Param0)
{
	func_587(func_588(Param0), Param0);
	reserve_network_mission_objects(0);
	reserve_network_mission_vehicles(func_586(8));
	func_583(0, -1, 0);
	func_581(132);
	network_register_host_broadcast_variables(&Local_818, 750);
	network_register_player_broadcast_variables(&Local_3612, 161);
	set_this_script_can_be_paused(0);
	if (!func_580())
	{
		func_550();
	}
	if (network_is_host_of_this_script())
	{
		_0x6DEE77AFF8C21BD1(&(Local_818.f_724), &(Local_818.f_725));
	}
	Local_3600.f_2 = _0xCF61D4B4702EE9EB();
	Local_3600.f_9 = _get_posix_time();
	Local_3600.f_8 = _get_posix_time();
	func_344(22, 1);
	return true;
}

bool func_580()
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
		if (func_545())
		{
			return false;
		}
		if (func_543(155))
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

void func_581(int iParam0)
{
	func_557();
	func_582();
	func_569();
	Global_1573883.f_4 = iParam0;
	Global_1573883.f_5 = iParam0;
	func_343(iParam0, -1);
	func_20(&(Global_1573883.f_18), 0, 0);
	Global_2460486.f_4426 = 0;
	Global_2444115[0] = func_75();
	Global_2444115[1] = func_75();
	Global_2444115[2] = func_75();
	Global_2444115[3] = func_75();
	Global_2444115[4] = func_75();
	func_126();
	func_152();
	if (func_283() && !func_294())
	{
		GAMEPLAY::SET_BIT(&(Global_1573883.f_1), 16);
	}
	else
	{
		GAMEPLAY::SET_BIT(&(Global_1573883.f_1), 17);
	}
}

void func_582()
{
	auto uVar0;
	
	Global_1573907 = uVar0;
}

bool func_583(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = network_get_script_status();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!iParam2)
			{
				func_585();
			}
			else
			{
				return false;
			}
		}
		if (!func_584())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!iParam2)
					{
						func_585();
					}
					else
					{
						return false;
					}
				}
				if (func_545())
				{
					if (!iParam2)
					{
						func_585();
					}
					else
					{
						return false;
					}
				}
				if (func_543(155))
				{
					if (!iParam2)
					{
						func_585();
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
					func_585();
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
				func_585();
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
			func_585();
		}
		else
		{
			return false;
		}
	}
	return true;
}

auto func_584()
{
	return Global_1315888;
}

void func_585()
{
	terminate_this_thread();
}

int func_586(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 1;
		
		case 2:
			return 1;
		
		case 3:
			return 1;
		
		case 4:
			return 1;
		
		case 5:
			return 1;
		
		case 6:
			return 0;
		
		case 7:
			return 1;
		
		case 8:
			return 10;
		
		case 9:
			return 10;
		
		case 10:
			return 1;
		
		case 11:
			return 6;
		
		case 12:
			return 0;
		
		case 13:
			return 1;
		
		case 14:
			return 0;
		
		case 15:
			return 0;
		
		case 16:
			return 0;
		
		case 17:
			return 0;
		
		case 18:
			return 0;
		
		default:
	}
	return 0;
}

void func_587(int iParam0, struct<17> Param1, auto uParam2, auto uParam3, auto uParam4)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_585();
	}
	network_set_this_script_is_network_script(iParam0, 0, Param1.f_16);
}

int func_588(int iParam0)
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

