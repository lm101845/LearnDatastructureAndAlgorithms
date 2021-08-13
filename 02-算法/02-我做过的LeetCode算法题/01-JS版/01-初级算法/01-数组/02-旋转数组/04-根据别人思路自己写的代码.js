/*
 * @Author: liming
 * @Date: 2021-08-13 23:04:33
 * @LastEditTime: 2021-08-14 00:13:54
 * @FilePath: \LearnDatastructureAndAlgorithms\02-算法\02-我做过的LeetCode算法题\01-JS版\01-初级算法\01-数组\02-旋转数组\04-根据别人思路自己写的代码.js
 */
// 他人思路
// 当 k 很大，数组长度较小。如 k = 100,len(nums) = 5,数组切片会出问题吧。
// 应该先对 k 处理一下， k %= len(nums)

// 根据别人的思路我自己写的代码
/**
 * @param {number[]} nums
 * @param {number} k
 * @return {void} Do not return anything, modify nums in-place instead.
 */
const rotate = function (nums, k) {
  //第一步——要先处理数组长度(i)很小，而移动的位置(k)很大的问题(这一步是必须的)
  //比如数组长度i为4，k=5，则k=1和k=5的效果一样
  //1 = 5%4
  // k的范围：
  // 1.k < i时怎么移动
  // 2.k >= i时分2种情况
  //2.1——k%i==0时则移动到原本的位置
  //2.2-k%i!=0时，则求余将k变成k<i时的情况
  //先拿到数组的长度

  //     可以使用一个临时数组，先把原数组的值存放到一个临时数组中，然后再把临时数组的值重新赋给原数组，重新赋值的时候要保证每个元素都要往后移k位，如果超过数组的长度就从头开始，所以这里可以使用(i + k) % length来计算重新赋值的元素下标

  // 作者：数据结构和算法
  // 链接：https://leetcode-cn.com/leetbook/read/top-interview-questions-easy/x2skh7/?discussion=x7EjsX
  // 来源：力扣（LeetCode）
  // 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
  let length = nums.length;
  let tempArr = [];
  if (k < length) {
    for (let i = 0; i < length; i++) {
      //先遍历，把原数组值放到一个临时数组中，——我觉得在Js里面可以使用浅拷贝什么的
      tempArr[i] = nums[i];

      //然后在把临时数组的值重新放到原数组，并且往右移动k位
      for (let i = 0; i < nums.length; i++) {
        nums[i + k] = tempArr[i];
        return nums;
      }
    }
  } else if (k >= length && k % length == 0) {
    //解决k超过i且k是i的倍数的情况,此时移动到原来的位置了
    tempArr = nums;
    return tempArr;
  } else if (k >= length && k % length != 0) {
    for (let i = 0; i < length; i++) {
      //先遍历，把原数组值放到一个临时数组中，——我觉得在Js里面可以使用浅拷贝什么的
      tempArr[i] = nums[i];

      //然后在把临时数组的值重新放到原数组，并且往右移动k位
      for (let i = 0; i < nums.length; i++) {
        nums[i + k] = tempArr[i];
        return nums;
      }
    }
  } else {
    alert("k值要是大于0的正整数");
  }
};

console.log(rotate([1, 2, 3, 4, 5, 6, 7], 1));
// 不对。。。
