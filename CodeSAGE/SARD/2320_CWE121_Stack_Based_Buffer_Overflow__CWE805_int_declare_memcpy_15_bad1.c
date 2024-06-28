#ifndef VAR1
void FUN1()
{
 int * VAR2;
 int VAR3[50];
 int VAR4[100];
 switch(6)
 {
 case 6:
 /* FLAW: Set a pointer to a "small" buffer. This buffer will be used in the sinks as a destination
 * buffer in various memory copying functions using a "large" source buffer. */
 VAR2 = VAR3;
 break;
 default:
 FUN2("");
 break;
 }
 {
 int VAR5[100] = {0};
 /* POTENTIAL FLAW: Possible buffer overflow if data < 100 */
 memcpy(VAR2, VAR5, 100*sizeof(int));
 FUN3(VAR2[0]);
 }
}
#endif
