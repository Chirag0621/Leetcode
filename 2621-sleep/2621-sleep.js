/**
 * @param {number} millis
 * @return {Promise}
 */
async function sleep(millis) {
    const val1 = await new Promise((resolve, reject) => {
        setTimeout(resolve, millis);
    })
    return val1;
}

/** 
 * let t = Date.now()
 * sleep(100).then(() => console.log(Date.now() - t)) // 100
 */