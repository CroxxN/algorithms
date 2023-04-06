struct Make<'a> {
    charec: &'a str,
}

impl<'a> Make<'a> {
    fn new(x: &'a str) -> Make {
        Make { charec: x }
    }
}

fn main() {
    let make = Make::new("hey");
    let new = make
        .charec
        .chars()
        .map(|x| x.to_lowercase())
        .partition
        .collect::<char>();
    println!("Hey world");
}
