#ifndef VAR1
void FUN1()
{
 int VAR2;
 VAR2 = 0;
 switch(6)
 {
 case 6:
 /* POTENTIAL FLAW: Read data from the console using fscanf() */
 fscanf(stdin, "", &VAR2);
 break;
 default:
 FUN2("");
 break;
 }
 switch(7)
 {
 case 7:
 {
 /* POTENTIAL FLAW: Subtracting 1 from data could cause an underflow */
 int VAR3 = VAR2 - 1;
 FUN3(VAR3);
 }
 break;
 default:
 FUN2("");
 break;
 }
}
#endif
