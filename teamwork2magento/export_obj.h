#ifndef EXPORT_OBJ_H
#define EXPORT_OBJ_H


#include <QString>
#include <QList>
#include <QStringList>
#include <QTextStream>
#include <QFile>
#include <QStandardItem>
#include <QtAlgorithms>
#include <utility>

class export_obj
{
public:
    export_obj();
    export_obj(const QStringList& anEntry, const QStringList& header);
    virtual ~export_obj();

    export_obj(const export_obj& rhs);              //copy constructor
    export_obj(export_obj&& rhs);                   //move constructor
    export_obj& operator=(const export_obj& rhs);   //copy assignment
    export_obj& operator=(export_obj&& rhs);        //move assignment

    virtual void printObject(QTextStream& o) const;
    virtual const QStringList& getPreviewList();        //for preview

    //find position of data in header file for storage
    virtual void setDataPositions(const QStringList &header);

    //accessor functions
    virtual const QString& get_gg_sku() const;
    virtual const QString& get_sku() const;
    virtual const QString& get_name() const;
    virtual const QString& get_description() const;
    virtual const QString& get_short_description() const;
    virtual const QString& get_meta_title() const;
    virtual const QString& get_meta_keyword() const;
    virtual const QString& get_meta_description() const;
    virtual const QString& get_size() const;
    virtual const QString& get_qty() const;

    //mutator functions
    virtual void set_name(const QString &x);
    virtual void set_description(const QString &x);
    virtual void set_short_description(const QString &x);
    virtual void set_meta_title(const QString &x);
    virtual void set_meta_keyword(const QString &x);
    virtual void set_meta_description(const QString &x);
    virtual void set_sku(const QString &x);
    virtual void set_category_ids(const QString &x);
    virtual void set_qty(const QString &x);
    virtual void set_visibility(const QString &x);

    //defined for config_obj only
    virtual void generateAssociated(const QStringList& thePluList);

protected:

    QString ggsku;
    QString name;
    QString description; //***user can input and/or modify this field
    QString short_description; //***user can input and/or modify this field
    QString category_ids;
    QString manufacturers;
    QString price;
    QString special_price;
    QString store;
    QString websites;
    QString attribute_set;
    QString options_container;
    QString msrp_enabled;
    QString msrp_display_actual_price_type;
    QString gift_message_available;
    QString weight;
    QString status;
    QString is_recurring;
    QString tax_class_id;
    QString special_from_date;
    QString qty;
    QString min_qty;
    QString use_config_min_qty;
    QString is_qty_decimal;
    QString backorders;
    QString use_config_backorders;
    QString min_sale_qty;
    QString use_config_min_sale_qty;
    QString max_sale_qty;
    QString use_config_max_sale_qty;
    QString is_in_stock;
    QString use_config_notify_stock_qty;
    QString manage_stock;
    QString use_config_manage_stock;
    QString is_decimal_divided;
    QString page_layout;

    QString meta_title;
    QString meta_description;
    QString meta_keyword;

    QStringList previewItemList;

    int namePos;
    int pricePos;
    int manufacturersPos;
    int ggskuPos;
};



class simple_obj : public export_obj
{
public:
    simple_obj();
    simple_obj(const QStringList& anEntry, const QStringList& header);
    ~simple_obj();

    simple_obj(const simple_obj& rhs);                  //copy constructor
    simple_obj(simple_obj&& rhs);                       //move constructor
    simple_obj& operator=(const simple_obj& rhs);       //copy assignment
    simple_obj& operator=(simple_obj&& rhs);            //move assignment

    void printObject(QTextStream& o) const;
    const QStringList& getPreviewList();                        //for preview

    //find position of data in header file for storage
    void setDataPositions(const QStringList &header);


    //accessor functions
    const QString& get_gg_sku() const;
    const QString& get_sku() const;
    const QString& get_name() const;
    const QString& get_description() const;
    const QString& get_short_description() const;
    const QString& get_meta_title() const;
    const QString& get_meta_keyword() const;
    const QString& get_meta_description() const;
    const QString& get_size() const;
    const QString& get_qty() const;

    //mutator functions
    void set_name(const QString &x);
    void set_description(const QString &x);
    void set_short_description(const QString &x);
    void set_meta_title(const QString &x);
    void set_meta_keyword(const QString &x);
    void set_meta_description(const QString &x);
    void set_sku(const QString &x);
    void set_category_ids(const QString &x);
    void set_visibility(const QString &x);
    void set_qty(const QString &x);

private:

    QString size;
    QString has_options;
    QString sku;
    QString visibility;
    QString type; //configurable or simple

    int skuPos;
    int sizePos;
};



class config_obj : public export_obj
{
public:
    config_obj();
    config_obj(const QStringList& anEntry, const QStringList& header);
    ~config_obj();

    config_obj(const config_obj& rhs);                      //copy constructor
    config_obj(config_obj&& rhs);                           //move constructor
    config_obj& operator=(const config_obj& rhs);           //copy assignment
    config_obj& operator=(config_obj&& rhs);                //move assignment


    void printObject(QTextStream& o) const;
    const QStringList& getPreviewList();         //for preview

    //generates and sets the associated value
    void generateAssociated(const QStringList& thePluList);

    //accessor functions
    const QString& get_gg_sku() const;
    const QString& get_name() const;
    const QString& get_description() const;
    const QString& get_short_description() const;
    const QString& get_meta_title() const;
    const QString& get_meta_keyword() const;
    const QString& get_meta_description() const;
    const QString& get_qty() const;
    const QString& get_size() const;

    //mutator functions
    void set_name(const QString &x);
    void set_description(const QString &x);
    void set_short_description(const QString &x);
    void set_meta_title(const QString &x);
    void set_meta_keyword(const QString &x);
    void set_meta_description(const QString &x);
    void set_qty(const QString &x);

private:

    QString configurable_attributes;
    QString associated;
    QString has_options;
    QString visibility;
    QString type; //configurable or simple
};

#endif // EXPORT_OBJ_H
