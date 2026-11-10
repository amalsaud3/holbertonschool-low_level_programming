# Green Efficiency Analysis

## Measurement Methodology

The benchmarking work used execution time as the measured quantity. The baseline loop program was run three times with 100,000,000 iterations. Its recorded execution times were 0.219721 seconds, 0.220054 seconds, and 0.220986 seconds. The comparison program recorded separate timings for a naive algorithm and a single-pass algorithm. The naive algorithm took 2.680946 seconds, while the single-pass algorithm took 0.000103 seconds.

The controlled instrumentation experiment used clock() from time.h and converted clock ticks to seconds by dividing by CLOCKS_PER_SEC. It measured the complete run and each of its three phases: building the dataset, processing it, and reducing it to a checksum.

The total time was 0.000818 seconds. Dataset construction took 0.000351 seconds, processing took 0.000327 seconds, and checksum reduction took 0.000135 seconds. These phase measurements describe the same execution.

## Observed Performance Differences

The three baseline-loop measurements are close to one another. They range from 0.219721 to 0.220986 seconds, a spread of 0.001265 seconds. This indicates that the recorded runs were relatively consistent in that environment, although three runs are not enough to characterize all possible variation.

The largest recorded difference appears in the algorithm comparison. The naive algorithm took 2.680946 seconds, compared with 0.000103 seconds for the single-pass algorithm. Based on these recorded times, the naive run was substantially slower. The reported results were 625025000 for the naive algorithm and 25000 for the single-pass algorithm. Since these output values differ, the timing results alone do not establish that both implementations performed identical work or produced equivalent results. Correctness must be assessed separately.

The instrumentation experiment shows how runtime was distributed within one program execution. Dataset construction was the longest measured phase at 0.000351 seconds, followed by processing at 0.000327 seconds. Reduction took 0.000135 seconds. The total was 0.000818 seconds, greater than each individual phase.

## Relation Between Runtime and Energy Consumption

Runtime can be an indirect indicator when discussing efficiency because a program that finishes sooner may spend less time executing on the processor. However, these experiments recorded processor time, not electrical energy. No power, voltage, current, or joule measurements were collected. Therefore, the results support conclusions about measured runtime only. They do not prove that one program consumed a particular amount of energy or that energy use fell in direct proportion to runtime.

## Limitations of the Experiment

The measurements were collected in one execution environment, and runtime can vary with processor load, hardware, compiler settings, and system activity. The baseline loop has three recorded runs, but the comparison and controlled instrumentation results are individual recorded runs. The workloads also differ, so their times should not be treated as a direct ranking of all algorithms. In addition, the comparison program's two reported result values are different, so equivalent output has not been demonstrated. Finally, clock() timing does not measure total system energy or necessarily represent wall-clock time.

## Practical Engineering Takeaway

The recorded data demonstrates why engineers should measure programs rather than judge performance from source code alone. The baseline loop provides three closely grouped measurements, while the algorithm comparison records a very large runtime difference between its two implementations. The instrumentation experiment identifies which phases took the most time in that run, giving a starting point for targeted investigation. A responsible efficiency claim must stay within the evidence: these results identify runtime differences and phase costs, but further repeated tests, correctness checks, and direct power measurements would be required to make stronger claims about energy efficiency.
