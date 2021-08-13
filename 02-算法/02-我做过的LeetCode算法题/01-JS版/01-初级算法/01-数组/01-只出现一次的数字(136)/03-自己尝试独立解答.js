/*
 * @Author: liming
 * @Date: 2021-08-10 18:56:23
 * @LastEditTime: 2021-08-13 23:13:32
 * @FilePath: \LearnDatastructureAndAlgorithms\02-算法\02-我做过的LeetCode算法题\01-JS版\01-初级算法\01-数组\01-只出现一次的数字(136)\03-自己尝试独立解答.js
 */
//总结：排序了时间复杂度就不是线性了。 题目写了线性复杂度，无额外空间。
// 我只要写双重for循环，那么时间复杂度肯定就是O^2,所以肯定不行，要看题目
        var singleNumber = function (nums) {
            for(let i = 0; i < nums.length; i++) {
                console.log(nums[i]);
                for(let j = 1; j<nums.length; j++) {
                    if(nums[i] -nums[j] == 0){
                        console.log('第' + i+  '个元素' +nums[i] + '不是唯一的，继续找' );
                        i++;
                        break
                    }
                }
            }

              //nums参数表示这个数组
        // for (let i of nums){
        //     //我首先遍历这个数组
        //     //查一下for of ,for in,forEach的区别
        //     console.log(i)
        //     //把数组里面的所有元素都遍历出来后，接下来就要开始进行两两比较了
        //     //要两两遍历需要获得每个数组的下标吧
        // }

        //for of 好像不行，我用forEach同时获得数组下标和元素吧
        // nums.forEach((item, index) => {
        // //   console.log(index, item);
        //   if(item === 2){
        //     //   console.log('这个元素是2');
        //       return item
        //   }
        // });

        //肯定要有一个return

        //还是使用forEach来遍历吧——我查了一下，for of更好，可以break和return
        //遍历出每一个数组元素后，和其他的数组元素进行比较
        }


