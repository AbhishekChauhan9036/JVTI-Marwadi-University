const arr = [1, 2, 3, 4, 5];
// let ans = arr.filter((num) => num >= 3);
let ans = arr.filter(function (num) {
  return num >= 3;
});
console.table(ans);

/**
 * Create an Array of length 9 which contains numbers
 * (Negative and positive) and fileter the element if
 * number is Negative and store another variable and
 * print it.
 */
const Array = [1, 2, -3, -4, -5, 6, 7, 8, 9];
let NegativeNumber = Array.filter((num) => num < 0);
console.table(NegativeNumber);
