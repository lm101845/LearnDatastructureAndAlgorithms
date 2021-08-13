/*
 * @Author: liming
 * @Date: 2021-08-10 19:04:28
 * @LastEditTime: 2021-08-13 23:14:23
 * @FilePath: \LearnDatastructureAndAlgorithms\02-算法\02-我做过的LeetCode算法题\01-JS版\01-初级算法\01-数组\01-只出现一次的数字(136)\04-参考答案.js
 */

// 用异或算法，这题以前做过，解法有点骚，所以印象深刻
//   异或运算法则：
// 有关链接https://www.ruanyifeng.com/blog/2021/01/_xor.html
// 一个值与自身的运算，总是为 false。  x ^ x = 0
// 一个值与 0 的运算，总是等于其本身。  x ^ 0 = x
// 可交换性   x ^ y = y ^ x
// 结合性    x ^ (y ^ z) = (x ^ y) ^ z
// 多个值的异或运算，可以根据运算定律进行简化。

// a ^ b ^ c ^ a ^ b
// = a ^ a ^ b ^ b ^ c
// = 0 ^ 0 ^ c
// = c

/**
 * @param {number[]} nums
 * @return {number}
 */
var singleNumber = function (nums) {
  let result = nums[0];
  for (let i = 1; i < nums.length; i++) {
    result = result ^ nums[i];
    //5^2 = ??  //我觉得应该是等于5^2吧，然后再继续进行异或
    //   console.log(result);
    //   debugger;
  }
  return result;
};

console.log(singleNumber([0, 0, 5, 2, 1, 1, 2, 3, 3])); //5
console.log(singleNumber([0, 1, 2, 3])); //0
console.log(singleNumber([2, 3, 4, 5])); //0

//我还是不太懂异或啊？
// 2^3^4^5为什么等于0啊？？？——懂了，因为没有唯一不同的数字
