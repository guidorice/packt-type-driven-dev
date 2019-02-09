let tryFind = (needle, haystack) => {
  let currHaystack = ref(haystack);
  let stop = ref(false);
  let currItem = ref(None);

  while (! stop^) {
    switch (currHaystack^) {
    | [item, ..._items] when needle(item) =>
      stop := true;
      currItem := Some(item);
    | [_item, ...items] => currHaystack := items
    | [] => stop := true
    };
  };
  currItem^;
};