type summaryStats = {
  count: int,
  mutable mean: float,
  mutable sum: float,
};

let summarize = array => {
  let result = {sum: 0., count: Array.length(array), mean: 0.};
  for (i in 0 to result.count - 1) {
    result.sum = result.sum +. Array.unsafe_get(array, i);
  };
  result.mean = result.sum /. float_of_int(result.count);
  result;
};