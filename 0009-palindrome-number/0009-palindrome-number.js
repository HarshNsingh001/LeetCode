/**
 * @param {number} x
 * @return {boolean}
 */
var isPalindrome = function(x) {
  const num = x.toString();
  const revnum = num.split('').reverse().join('');
  return num === revnum;
};
const num=121;
if (isPalindrome(num)) {
  console.log("true");
} else {
  console.log("false");
}
