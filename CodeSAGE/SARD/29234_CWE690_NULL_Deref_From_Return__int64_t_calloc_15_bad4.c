#ifndef VAR1
void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 /* POTENTIAL FLAW: Allocate memory without checking if the memory allocation function failed */
 VAR3 = (VAR2 *)calloc(1, sizeof(VAR2));
 switch(6)
 {
 case 6:
 /* FLAW: Initialize memory buffer without checking to see if the memory allocation function failed */
 VAR3[0] = 5LL;
 FUN2(VAR3[0]);
 free(VAR3);
 break;
 default:
 FUN3("");
 break;
 }
}
#endif
