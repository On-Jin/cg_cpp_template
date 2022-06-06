#include <benchmark/benchmark.h>
#include <nlohmann/json.hpp>
#include <stdexcept>

static void BM_game(benchmark::State &state) {
    int count = 0;
    for (auto _ : state) {
        state.PauseTiming();

        state.ResumeTiming();
    }
}

BENCHMARK(BM_game)->Iterations(100);

// Run the benchmark
BENCHMARK_MAIN();