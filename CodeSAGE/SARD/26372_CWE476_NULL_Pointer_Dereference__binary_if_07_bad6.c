#ifndef VAR1
void FUN1()
{
 if(VAR2==5)
 {
 {
 VAR3 *VAR4 = NULL;
 /* FLAW: Using a single & in the if statement will cause both sides of the expression to be evaluated
 * thus causing a NPD */
 if ((VAR4 != NULL) & (VAR4->VAR5 == 5))
 {
 FUN2("");
 }
 }
 }
}
#endif
