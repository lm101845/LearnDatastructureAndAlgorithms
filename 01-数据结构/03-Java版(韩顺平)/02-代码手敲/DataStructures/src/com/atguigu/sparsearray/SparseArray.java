package com.atguigu.sparsearray;

/**
 * @Author liming
 * @Date 2022/12/22 9:13
 * 稀疏数组
 **/

/**
 * 编写的五子棋程序中，要有存盘退出和续上盘的功能。
 * 因为该二维数组的很多值是默认值0, 因此记录了很多没有意义的数据->稀疏数组
 * 当一个数组中大部分元素为０，或者为同一个值的数组时，可以使用稀疏数组来保存该数组。
 *
 * 稀疏数组的处理方法是:
 * 1) 记录数组一共有几行几列，有多少个不同的值
 * 2) 把具有不同值的元素的行列及值记录在一个小规模的数组中，从而缩小程序的规模
 */


public class SparseArray {
    public static void main(String[] args) {
        //先创建一个原始的二维数组 11*11
        //0：没有棋子  1：黑子 2：蓝子
        int chessArr1[][] = new int[11][11];
        chessArr1[1][2] = 1;
        chessArr1[2][3] = 2;
        chessArr1[4][5] = 1;
        //输出原始的二维数组
        System.out.println("原始的二维数组");
        for(int[] row:chessArr1){
            for(int data:row){
                System.out.printf("%d\t",data);
            }
            System.out.println();
        }
        /**
         * 二维数组 转 稀疏数组的思路
         * 1. 遍历  原始的二维数组，得到有效数据的个数 sum
         * 2. 根据sum 就可以创建 稀疏数组 sparseArr   int[sum + 1] [3]
         * 3. 将二维数组的有效数据数据存入到 稀疏数组
         */
        //将二维数组转成稀疏数组(实际中你不知道有几个有效数据)
        //1.先遍历二维数组，得到非0数据的个数
        int sum = 0;
        for (int i = 0; i <11; i++){
            for (int j = 0; j < 11; j++){
                if(chessArr1[i][j] != 0){
                    sum++;
                }
            }
        }
        System.out.println("sum=" + sum);

        //2.创建对应的稀疏数组
        int sparseArray[][] = new int[sum + 1][3];  //只有3列,每列信息有：行、列、数据信息
        //给稀疏数组赋值
        sparseArray[0][0] = 11;
        sparseArray[0][1] = 11;
        sparseArray[0][2] = sum;
        //稀疏数组第一行信息：原始数组的的行，列，有几个非0的有效值

        //遍历二维数组，将非0的值存放到sparseArray中
        int count = 0;   //count用于记录是第几个非0数据
        for (int i = 0; i <11; i++){
            for (int j = 0; j < 11; j++){
                if(chessArr1[i][j] != 0){
                    count++;
                    sparseArray[count][0] = i;
                    sparseArray[count][1] = j;
                    sparseArray[count][2] = chessArr1[i][j];
                }
            }
        }

        //输出稀疏数组的形式
        System.out.println();
        System.out.println("得到的稀疏数组为：");
        for (int i = 0; i < sparseArray.length; i++){
            System.out.printf("%d\t%d\t%d\t\n",sparseArray[i][0],sparseArray[i][1],sparseArray[i][2]);
        }
        System.out.println();
        /**
         *  得到的稀疏数组为：
         * 11	11	2
         * 1	2	1
         * 2	3	2
         */

        //将稀疏数组恢复成原始的二维数组
        /**
         * 稀疏数组转原始的二维数组的思路
         *
         * 1. 先读取稀疏数组的第一行，根据第一行的数据，创建原始的二维数组，比如上面的  chessArr2 = int [11][11]
         * 2. 在读取稀疏数组后几行的数据，并赋给 原始的二维数组 即可.
         */
        //1.先读取稀疏数组的第一行，根据第一行的数据，创建原始的二维数组
        int chessArr2[][] = new int[sparseArray[0][0]][sparseArray[0][1]];
        //2.再读取稀疏数组后几行的数据(从第2行开始)，并赋给原始的二维数组即可
        for (int i = 1; i < sparseArray.length; i++){
            chessArr2[sparseArray[i][0]][sparseArray[i][1]] = sparseArray[i][2];
        }
        //输出恢复后的二维数组
        System.out.println();
        System.out.println("恢复后的二维数组：");
        for(int[] row:chessArr2){
            for(int data:row){
                System.out.printf("%d\t",data);
            }
            System.out.println();
        }
    }
}
