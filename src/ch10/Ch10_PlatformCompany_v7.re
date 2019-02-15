/* Platform module, signature followed by implementation */
module type PlatformType = {let apps: pfcompany => list(string);};
module Platform: PlatformType = {
  let apps = (company: pfcompany): list(string) => {
    switch (company) {
    | `Facebook(str) =>
      switch (str) {
      | "social" => [
          appToString(facebook),
          appToString(messenger),
          appToString(instagram),
        ]
      | "business" => [appToString(facebookads)]
      }
    | `Google(str) =>
      switch (str) {
      | "social" => [appToString(googleplus)]
      | "business" => [appToString(googleads)]
      }
    };
  };
};

Js.log("Facebook");
print_string("Business: ");
Js.log(Array.of_list(Platform.apps(`Facebook("business"))));
print_string("Social: ");
Js.log(Array.of_list(Platform.apps(`Facebook("social"))));
print_newline();
Js.log("Google");
print_string("Business: ");
Js.log(Array.of_list(Platform.apps(`Google("business"))));
print_string("Social: ");
Js.log(Array.of_list(Platform.apps(`Google("social"))));