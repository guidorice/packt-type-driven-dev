type internetCompany = [
  | `Facebook(string)
  | `Google(string)
  | `Twitter(string)
];
type platformCompany = [ internetCompany | `Amazon(string) | `Uber(string)];

let apps = (company: platformCompany): string => {
  switch (company) {
  | `Facebook(str) =>
    switch (str) {
    | "social" => "facebook, messenger, instagram"
    | "business" => "facebook ads"
    }
  | `Google(str) =>
    switch (str) {
    | "social" => "google+, gmail"
    | "business" => "google ads, google adsense, gmail for business"
    }
  | `Twitter(str) =>
    switch (str) {
    | "social" => "twitter"
    | "business" => "twitter ads"
    }
  | `Amazon(str) =>
    switch (str) {
    | "social" => ""
    | "business" => "amazon, AWS"
    }
  | `Uber(str) =>
    switch (str) {
    | "social" => ""
    | "business" => "uber"
    }
  };
};