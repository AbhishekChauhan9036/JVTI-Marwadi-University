// const arr = [1, 2, 3, 4, 5];
// let ans = arr.filter((num) => num >= 3);
// let ans = arr.filter(function (num) {
//   return num >= 3;
// });
// console.table(ans);

/**
 * Create an Array of length 9 which contains numbers
 * (Negative and positive) and fileter the element if
 * number is Negative and store another variable and
 * print it.
 */
// const Array = [1, 2, -3, -4, -5, 6, 7, 8, 9];
// let NegativeNumber = Array.filter((num) => num < 0);
// console.table(NegativeNumber);

function reverseArray(arr) {
  const ans = [];
  for (let i = 0; i < arr.length; i++) {
    ans.push(arr[arr.length - i - 1]);
  }
  return ans;
}

function maxElementArray(arr) {
  let maxelement = 0;
  for (let i = 0; i < arr.length; i++) {
    if (arr[i] > maxelement) {
      maxelement = arr[i];
    }
  }
  return maxelement;
}

const arr = [13, 90, 37, 56, 57];
console.log(reverseArray(arr));
console.log(maxElementArray(arr));
