#ifndef VAR1
void FUN1()
{
 unsigned int VAR2;
 VAR2 = 0;
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
 if(VAR2 > 0)
 {
 /* POTENTIAL FLAW: if (data*2) > UINT_MAX, this will overflow */
 unsigned int VAR3 = VAR2 * 2;
 FUN3(VAR3);
 }
 break;
 default:
 FUN2("");
 break;
 }
}
#endif
