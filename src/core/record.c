#include <stdio.h>
#include <stdlib.h>
#include "core/record.h"

#define BYTE 1024

Record* record_create()
{
    Record *rec;
    rec = (Record*) malloc(sizeof(Record));
    return rec;
}

long record_delete(Record *rec)
{
    long id;
    if (rec) {
        id = rec->id;
        free(rec);
        return id;
    } else {
        return -1;
    }
}

void record_tostring(Record* rec, char* buf)
{
    sprintf(buf, "[%ld] %s: %s (%s)", rec->id, rec->artist, rec->title, rec->publisher);
}
