const arr = ["Manav", "Vimal", "Ayush", "Parth", "Tejas"];
arr.push("Nandani"); // to insert at end

arr.unshift("Shrusti"); // to insert at begning
arr.shift(); // te remove at the end
arr.splice(3, 0, "Hepin"); // to insert at position
arr.pop(); // to remove an element at end

// console.table(arr);

const numbers = [10, 20, 3, 1, 0, -6, 90, 55];
numbers.sort();
numbers.reverse();
// console.log(numbers);

const arr1 = [1, 2, 3, 4, 5];
const arr2 = [6, 7, 8, 9, 10];
const arr3 = arr1.concat(arr2);
// console.table(arr3);

const array = [1, 2, 3, 4, 5, 6, 7];
array.fill(10); // to fill same number in all indexes
console.table(array.slice(3, 5)); // to partition of a array between range
// console.table(array);
console.log(array.includes(9)); // to check element present or not

const sentence = ["My", "name", "is", "Abhishek", "Chauhan"];
console.log(sentence.join(" ")); // to join and make a string

const array1 = [1, 2, 3, 4, 5, 6];
// console.log(array1.toString());

const array2 = [1, [2, 3], [4, 5], 6];
// console.log(array2.flat());

const array3 = [1, 2, 3];
const array4 = [];
// for (let i = 0; i < array3.length; i++) {
//   array4.push(array3[i] * 2);
// }
// console.log(array4);

let result = array3.flatMap((x) => [x, x * 2]);
console.log(result);
