#ifndef VAR1
void FUN1(int * VAR2);
void FUN2()
{
 int * VAR2;
 int VAR3[50];
 int VAR4[100];
 /* FLAW: Set a pointer to a "small" buffer. This buffer will be used in the sinks as a destination
 * buffer in various memory copying functions using a "large" source buffer. */
 VAR2 = VAR3;
 FUN1(VAR2);
}
#endif
