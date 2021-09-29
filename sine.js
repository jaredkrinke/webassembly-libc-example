const fs = require('fs');
(async () => {
    const module = await WebAssembly.instantiate(await fs.promises.readFile("./sine.wasm"));
    const sine = module.instance.exports.sine;
    console.log(sine(1.57));
})();
