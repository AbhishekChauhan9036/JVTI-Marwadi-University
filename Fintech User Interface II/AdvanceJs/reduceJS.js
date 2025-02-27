const numbers = [1, 2, 3, 4, 5];
let sum = 0;
for (let i = 0; i < numbers.length; i++) {
  sum = sum + numbers[i];
}
console.log(sum);

// Reduce Function
const numsum = numbers.reduce((curr, num) => curr + num, 0);
console.log(numsum);

const array = [23, 78, 34, 32, 45, 67];
const maxNum = array.reduce((curr, num) => (num > curr ? num : curr), 0);
console.log(maxNum);

// Rest Operator
const maxEle = Math.max(...array);
const minEle = Math.min(...array);
console.log(maxEle);
console.log(minEle);
