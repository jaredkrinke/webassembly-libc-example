#include <math.h>

#define WASM_EXPORT_AS(name) __attribute__((export_name(name)))
#define WASM_EXPORT(symbol) WASM_EXPORT_AS(#symbol) symbol

double WASM_EXPORT(sine)(double theta) {
    return sin(theta);
}
