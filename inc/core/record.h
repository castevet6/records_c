/*
 * Records Collector (C) castevet6 2020
 *
 * record.h : Header file for record data type, which is the main data unit 
 *            for persistence
*/

#ifndef RECORD_H
#define RECORD_H

/********************
 * Basic data types *
 ********************/

enum enum_category {
    VINYL,
    CD,
    CASSETTE
};

typedef enum enum_category category_t;

struct record_t
{
    long id;
    char artist[255];
    char title[255];
    char publisher[255];
    category_t category;
};

typedef struct record_t Record;

/*****************************
 * Record datatype functions *
 * ***************************
*/

// Create new empty record, return pointer to dynamically allocated record type
Record* record_create();

// Delete record. Returns id of deleted record if successful, -1 if delete fail.
long record_delete(Record*);

// Return string representation of Record type (artist capitalized).
void record_tostring(Record*, char*);

#endif // RECORD_H
