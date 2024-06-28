#ifndef VAR1
void FUN1()
{
 int64_t VAR2;
 VAR2 = 0LL;
 switch(6)
 {
 case 6:
 /* POTENTIAL FLAW: Use a value input from the console */
 fscanf (stdin, "", &VAR2);
 break;
 default:
 FUN2("");
 break;
 }
 switch(7)
 {
 case 7:
 {
 /* POTENTIAL FLAW: Adding 1 to data could cause an overflow */
 int64_t VAR3 = VAR2 + 1;
 FUN3(VAR3);
 }
 break;
 default:
 FUN2("");
 break;
 }
}
#endif
