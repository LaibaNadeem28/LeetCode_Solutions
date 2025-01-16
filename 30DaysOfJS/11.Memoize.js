/**
 * @param {Function} fn
 * @return {Function}
 */
function memoize(fn) {
    let mappi = new Map();
    let callCount = 0;
    return function(...args) {
        const key = JSON.stringify(args);
        if( mappi.has(key)){
            return mappi.get(key);
        }
        mappi.set(key,fn(...args));
        callCount++;
        return mappi.get(key);
    }
}


/** 
 * let callCount = 0;
 * const memoizedFn = memoize(function (a, b) {
 *	 callCount += 1;
 *   return a + b;
 * })
 * memoizedFn(2, 3) // 5
 * memoizedFn(2, 3) // 5
 * console.log(callCount) // 1 
 */