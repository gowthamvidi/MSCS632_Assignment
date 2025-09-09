fn square_in_place(x: &mut i32) { 
*x = *x * *x; 
} 
fn main() { 
let mut num = 5; 
// Pass mutable reference → borrow, no copy 
square_in_place(&mut num); 
println!("Squared = {}", num); // 25 
} // memory automatically freed here