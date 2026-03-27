var createCounter = function(init) {
    let cnt = init;

    return {
        increment: () => ++cnt,
        decrement: () => --cnt,
        reset: () => (cnt = init)
    };
};