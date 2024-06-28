#ifndef VAR1
void FUN1()
{
 VAR2 * VAR3;
 switch(6)
 {
 case 6:
 /* POTENTIAL FLAW: Set data to NULL */
 VAR3 = NULL;
 break;
 default:
 FUN2("");
 break;
 }
 switch(7)
 {
 case 7:
 /* POTENTIAL FLAW: Attempt to use data, which may be NULL */
 FUN3(VAR3->VAR4);
 delete VAR3;
 break;
 default:
 FUN2("");
 break;
 }
}
#endif
