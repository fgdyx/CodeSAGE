#ifndef VAR1
void FUN1();
void FUN2()
{
 VAR2 * VAR3;
 int64_t VAR4[50];
 int64_t VAR5[100];
 /* FLAW: Set a pointer to a "small" buffer. This buffer will be used in the sinks as a destination
 * buffer in various memory copying functions using a "large" source buffer. */
 VAR3 = VAR4;
 VAR6 = VAR3;
 FUN1();
}
#endif
