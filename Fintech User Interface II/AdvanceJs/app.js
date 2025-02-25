const arr = [12, 14, 78, 32, 78];
arr.sort((a, b) => a - b); // Ascending Order for Numbers
console.log(arr);
arr.sort((a, b) => b - a); // Descending Order for Numbers
console.log(arr);

const names = ["Meet", "Anurag", "Bhavisha", "Nandani"];
names.sort(); // Assending Order for String
console.log(names);
names.sort((a, b) => b.localeCompare(a)); //Descending Order for String
console.log(names);

const target = "Bhavisha";
console.log(isExist(names, target));

// Linear Search Algorithm
function isExist(names, target) {
  for (let i = 0; i < names.length; i++) {
    if (names[i] == target) {
      return true;
    }
  }
  return false;
}
