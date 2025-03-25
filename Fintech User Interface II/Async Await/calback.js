function step1(callback) {
  setTimeout(() => {
    console.log("Step 1 complete");
    callback();
  }, 3000);
}

function step2(callback) {
  setTimeout(() => {
    console.log("Step 2 complete");
    callback();
  }, 2000);
}

function step3(callback) {
  setTimeout(() => {
    console.log("Step 3 complete");
    callback();
  }, 1000);
}

// Callback Chaining (Callback Hell)
step1(() => {
  step2(() => {
    step3(() => {
      console.log("All steps completed");
    });
  });
});
