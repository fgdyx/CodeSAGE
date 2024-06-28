#ifndef VAR1
void FUN1()
{
 int * VAR2;
 VAR2 = NULL;
 switch(6)
 {
 case 6:
 /* FLAW: Allocate memory without using sizeof(int) */
 VAR2 = (int *)malloc(10);
 break;
 default:
 FUN2("");
 break;
 }
 {
 int VAR3[10] = {0};
 /* POTENTIAL FLAW: Possible buffer overflow if data was not allocated correctly in the source */
 memcpy(VAR2, VAR3, 10*sizeof(int));
 FUN3(VAR2[0]);
 free(VAR2);
 }
}
#endif
