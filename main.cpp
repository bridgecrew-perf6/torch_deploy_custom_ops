#include <torch/torch.h>

static int64_t add(int64_t a, int64_t b) {
    return a + b;
}

static auto registry = torch::RegisterOperators("my::add", &add);